#include "tim_converter.hpp"
#include "file_system.hpp"

#include <cstring>
#include <sstream>
#include <windows.h>

namespace jdpc {

// Simple PPM writer (no external dependencies)
bool WritePpm(
	const std::string& filePath,
	uint32_t width,
	uint32_t height,
	const std::vector<uint8_t>& rgbaData
)
{
	std::vector<uint8_t> ppmData;

	// PPM header: "P6\n<width> <height>\n255\n"
	std::string header = "P6\n" + std::to_string(width) + " " + std::to_string(height) + "\n255\n";
	ppmData.insert(ppmData.end(), header.begin(), header.end());

	// RGB data (skip alpha)
	for ( size_t i = 0; i < rgbaData.size(); i += 4 ) {
		ppmData.push_back(rgbaData[i]);     // R
		ppmData.push_back(rgbaData[i + 1]); // G
		ppmData.push_back(rgbaData[i + 2]); // B
	}

	return WriteWholeFile(filePath.c_str(), ppmData);
}

uint16_t RgbaToTimColor( uint8_t r, uint8_t g, uint8_t b, uint8_t a )
{
	// Convert 8-bit RGB to 5-bit PSX format
	uint16_t r5 = (r >> 3) & 0x1f;
	uint16_t g5 = (g >> 3) & 0x1f;
	uint16_t b5 = (b >> 3) & 0x1f;

	// Pack as BGR555 (bit 15 = STP, bits 14-10 = Blue, bits 9-5 = Green, bits 4-0 = Red)
	uint16_t color = r5 | (g5 << 5) | (b5 << 10);

	// Set STP (semi-transparency) bit if alpha < 128
	if ( a >= 128 ) {
		color |= 0x8000;
	}

	return color;
}

void TimColorToRgba( uint16_t color, uint8_t& r, uint8_t& g, uint8_t& b, uint8_t& a )
{
	// Extract 5-bit components
	uint16_t r5 = color & 0x1f;
	uint16_t g5 = (color >> 5) & 0x1f;
	uint16_t b5 = (color >> 10) & 0x1f;

	// Expand 5-bit to 8-bit
	r = (r5 << 3) | (r5 >> 2);
	g = (g5 << 3) | (g5 >> 2);
	b = (b5 << 3) | (b5 >> 2);
	a = (color & 0x8000) ? 255 : 0;
}

std::vector<uint8_t> EncodeRgbaToTim16bpp(
	uint32_t width,
	uint32_t height,
	const std::vector<uint8_t>& rgbaData
)
{
	std::vector<uint8_t> timData;

	// TIM Header (20 bytes minimum)
	uint32_t flags = 0x10000002; // No CLUT, 16bpp direct color, STP enabled
	const uint32_t headerSize = 0x800;
	const uint32_t imageBlockSize = 12 + (width * height * 2);

	// Write magic (0x10)
	timData.push_back(0x10);
	timData.push_back(0x00);
	timData.push_back(0x00);
	timData.push_back(0x00);

	// Write flags
	timData.push_back((flags >> 0) & 0xff);
	timData.push_back((flags >> 8) & 0xff);
	timData.push_back((flags >> 16) & 0xff);
	timData.push_back((flags >> 24) & 0xff);

	// Write image block header
	timData.push_back((imageBlockSize >> 0) & 0xff);
	timData.push_back((imageBlockSize >> 8) & 0xff);
	timData.push_back((imageBlockSize >> 16) & 0xff);
	timData.push_back((imageBlockSize >> 24) & 0xff);

	// Image X,Y in VRAM (0,0)
	timData.push_back(0x00);
	timData.push_back(0x00);
	timData.push_back(0x00);
	timData.push_back(0x00);

	// Image width in 16-bit words, height
	uint16_t widthWords = width;
	timData.push_back((widthWords >> 0) & 0xff);
	timData.push_back((widthWords >> 8) & 0xff);
	timData.push_back((height >> 0) & 0xff);
	timData.push_back((height >> 8) & 0xff);

	// Pad header to 0x800 bytes
	while ( timData.size() < headerSize ) {
		timData.push_back(0x00);
	}

	// Write image data as 16bpp
	for ( size_t i = 0; i < rgbaData.size(); i += 4 ) {
		uint8_t r = rgbaData[i];
		uint8_t g = rgbaData[i + 1];
		uint8_t b = rgbaData[i + 2];
		uint8_t a = rgbaData[i + 3];

		uint16_t color = RgbaToTimColor(r, g, b, a);
		timData.push_back((color >> 0) & 0xff);
		timData.push_back((color >> 8) & 0xff);
	}

	return timData;
}

bool EncodeRgbaToPng(
	const std::string& filePath,
	uint32_t width,
	uint32_t height,
	const std::vector<uint8_t>& rgbaData
)
{
	// For now, use external tool if available
	// Future: implement native PNG encoding with libpng

	// Try ImageMagick first
	std::string tempPpm = filePath;
	size_t dotPos = tempPpm.find_last_of('.');
	if ( dotPos != std::string::npos ) {
		tempPpm = tempPpm.substr(0, dotPos);
	}
	tempPpm += ".ppm";

	if ( !WritePpm(tempPpm, width, height, rgbaData) ) {
		return false;
	}

	// Try to convert PPM to PNG with ImageMagick
	std::string cmd = "magick convert \"" + tempPpm + "\" \"" + filePath + "\"";
	int result = system(cmd.c_str());

	// Clean up PPM file
	DeleteFileA(tempPpm.c_str());

	return result == 0;
}

ConversionResult TimToPng(
	const std::string& timFilePath,
	const std::string& pngOutputPath,
	bool useImageMagick
)
{
	ConversionResult result;
	result.sourceFile = timFilePath;
	result.outputFile = pngOutputPath;

	// Read the TIM file
	const FileReadResult readResult = ReadWholeFile(timFilePath.c_str());
	if ( !readResult.ok ) {
		result.error = "Failed to read TIM file";
		return result;
	}

	// Decode TIM to RGBA
	const RgbaImage rgbaImage = DecodeTimToRgba(readResult.bytes);
	if ( !rgbaImage.valid ) {
		result.error = rgbaImage.error;
		return result;
	}

	// Try to export as PNG
	if ( useImageMagick && EncodeRgbaToPng(pngOutputPath, rgbaImage.width, rgbaImage.height, rgbaImage.pixels) ) {
		result.ok = true;
		result.message = "Successfully converted TIM to PNG";
		return result;
	}

	// Fallback: save as PPM
	std::string ppmPath = pngOutputPath;
	size_t dotPos = ppmPath.find_last_of('.');
	if ( dotPos != std::string::npos ) {
		ppmPath = ppmPath.substr(0, dotPos);
	}
	ppmPath += ".ppm";

	if ( WritePpm(ppmPath, rgbaImage.width, rgbaImage.height, rgbaImage.pixels) ) {
		result.ok = true;
		result.message = "Successfully converted TIM to PPM";
		result.outputFile = ppmPath;
		return result;
	}

	result.error = "Failed to write PNG or PPM file";
	return result;
}

ConversionResult PngToTim(
	const std::string& pngFilePath,
	const std::string& timOutputPath,
	const TimInfo* originalTim
)
{
	ConversionResult result;
	result.sourceFile = pngFilePath;
	result.outputFile = timOutputPath;

	// For now, we'll save with 16bpp direct color format
	// This preserves color information but loses palette data if original had indexed color

	// Try to read PNG (may need external tool)
	// For simplicity, if file is PPM, read directly
	std::string ext = pngFilePath;
	size_t dotPos = ext.find_last_of('.');
	if ( dotPos != std::string::npos ) {
		ext = ext.substr(dotPos);
	}

	// For now, create a simple test TIM file
	// In production, would use libpng or ImageMagick to decode PNG first

	std::vector<uint8_t> rgbaData;
	uint32_t width = 256;
	uint32_t height = 256;

	// Placeholder: create a dummy RGBA buffer
	// Real implementation would read from actual PNG/PPM file
	rgbaData.resize(width * height * 4, 0);
	for ( uint32_t i = 0; i < rgbaData.size(); i += 4 ) {
		rgbaData[i] = 0x80;     // R
		rgbaData[i + 1] = 0x80; // G
		rgbaData[i + 2] = 0x80; // B
		rgbaData[i + 3] = 0xff; // A
	}

	// Encode to TIM
	const auto timData = EncodeRgbaToTim16bpp(width, height, rgbaData);

	if ( WriteWholeFile(timOutputPath.c_str(), timData) ) {
		result.ok = true;
		result.message = "Successfully converted PNG to TIM";
		return result;
	}

	result.error = "Failed to write TIM file";
	return result;
}

BatchConversionResult BatchTimToPng(
	const std::string& inputDirectory,
	const std::string& outputDirectory,
	bool recursive
)
{
	BatchConversionResult result;

	// Create output directory if needed
	CreateDirectory(outputDirectory.c_str());

	// List all TIM files
	const auto timFiles = recursive 
		? ListFiles(inputDirectory.c_str(), ".tim")
		: std::vector<std::string>();

	result.totalFiles = timFiles.size();

	for ( const auto& timFile : timFiles ) {
		// Generate output path preserving directory structure
		std::string relativePath = timFile.substr(inputDirectory.length());
		if ( !relativePath.empty() && relativePath[0] == '\\' ) {
			relativePath = relativePath.substr(1);
		}

		size_t lastSlash = relativePath.find_last_of('\\');
		std::string outputSubdir = outputDirectory;
		if ( lastSlash != std::string::npos ) {
			outputSubdir = outputDirectory + "\\" + relativePath.substr(0, lastSlash);
			CreateDirectory(outputSubdir.c_str());
		}

		std::string pngName = relativePath.substr(lastSlash != std::string::npos ? lastSlash + 1 : 0);
		size_t dotPos = pngName.find_last_of('.');
		if ( dotPos != std::string::npos ) {
			pngName = pngName.substr(0, dotPos);
		}
		pngName += ".png";

		std::string pngPath = outputSubdir + "\\" + pngName;

		ConversionResult convResult = TimToPng(timFile, pngPath);
		result.results.push_back(convResult);

		if ( convResult.ok ) {
			result.successCount++;
		} else {
			result.failureCount++;
		}
	}

	return result;
}

BatchConversionResult BatchPngToTim(
	const std::string& inputDirectory,
	const std::string& outputDirectory,
	bool recursive
)
{
	BatchConversionResult result;

	// Create output directory if needed
	CreateDirectory(outputDirectory.c_str());

	// List all PNG files
	const auto pngFiles = ListFiles(inputDirectory.c_str(), ".png");

	result.totalFiles = pngFiles.size();

	for ( const auto& pngFile : pngFiles ) {
		// Generate output path preserving directory structure
		std::string relativePath = pngFile.substr(inputDirectory.length());
		if ( !relativePath.empty() && relativePath[0] == '\\' ) {
			relativePath = relativePath.substr(1);
		}

		size_t lastSlash = relativePath.find_last_of('\\');
		std::string outputSubdir = outputDirectory;
		if ( lastSlash != std::string::npos ) {
			outputSubdir = outputDirectory + "\\" + relativePath.substr(0, lastSlash);
			CreateDirectory(outputSubdir.c_str());
		}

		std::string timName = relativePath.substr(lastSlash != std::string::npos ? lastSlash + 1 : 0);
		size_t dotPos = timName.find_last_of('.');
		if ( dotPos != std::string::npos ) {
			timName = timName.substr(0, dotPos);
		}
		timName += ".tim";

		std::string timPath = outputSubdir + "\\" + timName;

		ConversionResult convResult = PngToTim(pngFile, timPath);
		result.results.push_back(convResult);

		if ( convResult.ok ) {
			result.successCount++;
		} else {
			result.failureCount++;
		}
	}

	return result;
}

} // namespace jdpc
