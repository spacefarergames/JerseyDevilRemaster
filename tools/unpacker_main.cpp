#include "bze_unpacker.hpp"
#include "file_system.hpp"
#include "asset_formats.hpp"

#include <iostream>
#include <windows.h>
#include <sstream>

namespace {

std::string GetOutputDirectory( const std::string& bzePath )
{
	// Extract filename without extension
	size_t lastSlash = bzePath.find_last_of( '\\' );
	if ( lastSlash == std::string::npos )
		lastSlash = bzePath.find_last_of( '/' );

	size_t lastDot = bzePath.find_last_of( '.' );
	if ( lastDot == std::string::npos || lastDot < lastSlash )
		lastDot = bzePath.length();

	std::string basename;
	if ( lastSlash != std::string::npos ) {
		basename = bzePath.substr( lastSlash + 1, lastDot - lastSlash - 1 );
	} else {
		basename = bzePath.substr( 0, lastDot );
	}

	// Create output in current directory
	return ".\\" + basename;
}

void PrintUsage()
{
	std::cout << "BZE Asset Unpacker\n";
	std::cout << "Usage: unpacker.exe <bze_file> [output_dir]\n";
	std::cout << "       unpacker.exe <directory> --all\n";
	std::cout << "       unpacker.exe <directory> --all --decode-tim\n\n";
	std::cout << "Examples:\n";
	std::cout << "  unpacker.exe level1a1.bze\n";
	std::cout << "  unpacker.exe level1a1.bze C:\\output\n";
	std::cout << "  unpacker.exe \"F:\\bze\" --all\n";
	std::cout << "  unpacker.exe \"F:\\bze\" --all --decode-tim (to decode TIM to RGBA)\n";
}

void PrintChunkInfo( const jdpc::BzeUnpackResult& result, bool withTimDetails = false )
{
	std::cout << "\n=== Unpacking Result ===\n";
	std::cout << "File: " << result.bzePath << "\n";
	std::cout << "Output: " << result.outputDirectory << "\n";
	std::cout << "Status: " << ( result.ok ? "SUCCESS" : "FAILED" ) << "\n";

	if ( !result.error.empty() ) {
		std::cout << "Error: " << result.error << "\n";
	}

	std::cout << "\nChunks extracted: " << result.chunks.size() << "\n";
	std::cout << "  - TIM files: " << result.timCount << "\n";
	std::cout << "  - Binary files: " << result.binaryCount << "\n";

	if ( withTimDetails && !result.chunks.empty() ) {
		std::cout << "\nExtracted files:\n";
		for ( const auto& chunk : result.chunks ) {
			const char* formatStr = chunk.format == jdpc::ChunkFormat::TIM ? "TIM" : "BIN";
			std::cout << "  [" << formatStr << "] " << chunk.filename 
				<< " (" << chunk.data.size() << " bytes)";

			if ( chunk.format == jdpc::ChunkFormat::TIM ) {
				const jdpc::TimInfo timInfo = jdpc::ParseTim( chunk.data );
				if ( timInfo.valid ) {
					std::cout << " -> " << jdpc::DescribeTim( timInfo );
				}
			}
			std::cout << "\n";
		}
	}
}

} // namespace

int main( int argc, char* argv[] )
{
	if ( argc < 2 ) {
		PrintUsage();
		return 1;
	}

	const std::string arg1 = argv[1];
	bool unpackAll = false;
	bool decodeTim = false;

	for ( int i = 2; i < argc; ++i ) {
		const std::string arg = argv[i];
		if ( arg == "--all" || arg == "-a" ) {
			unpackAll = true;
		} else if ( arg == "--decode-tim" || arg == "--decode" ) {
			decodeTim = true;
		}
	}

	if ( unpackAll ) {
		// Unpack all BZE files in a directory
		std::cout << "Unpacking all BZE files in: " << arg1 << "\n";
		if ( decodeTim ) {
			std::cout << "TIM decoding: ENABLED\n";
		}
		std::cout << "\n";

		const auto bzeFiles = jdpc::ListFiles( arg1.c_str(), ".bze" );
		if ( bzeFiles.empty() ) {
			std::cerr << "No BZE files found in directory.\n";
			return 1;
		}

		std::cout << "Found " << bzeFiles.size() << " BZE files.\n\n";

		int successCount = 0;
		int failureCount = 0;
		int timFilesFound = 0;

		for ( const auto& bzePath : bzeFiles ) {
			const std::string outputDir = GetOutputDirectory( bzePath );
			std::cout << "Unpacking: " << bzePath << "\n";

			const jdpc::BzeUnpackResult result = jdpc::UnpackBzeFile( bzePath, outputDir );

			if ( result.ok ) {
				std::cout << "  -> " << result.chunks.size() << " chunks extracted";
				if ( result.timCount > 0 ) {
					std::cout << " (" << result.timCount << " TIM file(s))";
					timFilesFound += result.timCount;
				}
				std::cout << "\n";
				successCount++;
			} else {
				std::cerr << "  -> FAILED: " << result.error << "\n";
				failureCount++;
			}
		}

		std::cout << "\n=== Summary ===\n";
		std::cout << "Successful: " << successCount << "\n";
		std::cout << "Failed: " << failureCount << "\n";
		std::cout << "TIM files found: " << timFilesFound << "\n";

		if ( decodeTim && timFilesFound > 0 ) {
			std::cout << "\nNote: TIM files can be decoded to PNG using the DecodeTimToRgba() function.\n";
			std::cout << "      PNG encoding library support would be needed for PNG output.\n";
		}

		return failureCount > 0 ? 1 : 0;
	} else {
		// Unpack a single BZE file
		const std::string bzePath = arg1;
		std::string outputDir;

		if ( argc >= 3 && std::string(argv[2]) != "--decode-tim" && std::string(argv[2]) != "--decode" ) {
			outputDir = argv[2];
		} else {
			outputDir = GetOutputDirectory( bzePath );
		}

		std::cout << "Unpacking: " << bzePath << "\n";
		std::cout << "Output directory: " << outputDir << "\n\n";

		const jdpc::BzeUnpackResult result = jdpc::UnpackBzeFile( bzePath, outputDir );

		PrintChunkInfo( result, true );

		return result.ok ? 0 : 1;
	}
}
