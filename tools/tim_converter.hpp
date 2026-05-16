#pragma once

#include "asset_formats.hpp"

#include <string>
#include <vector>

namespace jdpc {

// PNG file header and utilities
struct PngInfo {
	bool valid = false;
	uint32_t width = 0;
	uint32_t height = 0;
	uint8_t bitDepth = 8;
	uint8_t colorType = 6; // 6 = RGBA, 2 = RGB, 3 = Indexed
	std::string error;
};

struct ConversionResult {
	bool ok = false;
	std::string message;
	std::string sourceFile;
	std::string outputFile;
	std::string error;
};

// Convert TIM file to PNG
// Exports RGBA data as PNG using external tool or internal format
ConversionResult TimToPng(
	const std::string& timFilePath,
	const std::string& pngOutputPath,
	bool useImageMagick = true
);

// Convert PNG to TIM
// For now supports RGBA PNG → 16bpp TIM conversion
// Future: support palette-based TIM output
ConversionResult PngToTim(
	const std::string& pngFilePath,
	const std::string& timOutputPath,
	const TimInfo* originalTim = nullptr
);

// Batch convert all TIM files in directory to PNG
struct BatchConversionResult {
	uint32_t totalFiles = 0;
	uint32_t successCount = 0;
	uint32_t failureCount = 0;
	std::vector<ConversionResult> results;
};

BatchConversionResult BatchTimToPng(
	const std::string& inputDirectory,
	const std::string& outputDirectory,
	bool recursive = true
);

// Batch convert all PNG files back to TIM
BatchConversionResult BatchPngToTim(
	const std::string& inputDirectory,
	const std::string& outputDirectory,
	bool recursive = true
);

// Encode RGBA buffer to PNG file (internal implementation)
bool EncodeRgbaToPng(
	const std::string& filePath,
	uint32_t width,
	uint32_t height,
	const std::vector<uint8_t>& rgbaData
);

// Decode PNG file to RGBA buffer
std::vector<uint8_t> DecodePngToRgba(
	const std::string& filePath,
	uint32_t& outWidth,
	uint32_t& outHeight
);

// Encode RGBA buffer to TIM file (16bpp direct color)
std::vector<uint8_t> EncodeRgbaToTim16bpp(
	uint32_t width,
	uint32_t height,
	const std::vector<uint8_t>& rgbaData
);

// Helper: Convert 32-bit RGBA to 16-bit PSX color
uint16_t RgbaToTimColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

// Helper: Convert 16-bit PSX color to 32-bit RGBA
void TimColorToRgba(uint16_t color, uint8_t& r, uint8_t& g, uint8_t& b, uint8_t& a);

} // namespace jdpc
