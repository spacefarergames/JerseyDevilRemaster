#pragma once

#include "asset_formats.hpp"

#include <string>
#include <vector>

namespace jdpc {

enum class ChunkFormat {
	Unknown,
	TIM,
	Binary
};

struct ExtractedChunk {
	uint32_t chunkIndex = 0;
	ChunkFormat format = ChunkFormat::Unknown;
	std::vector<uint8_t> data;
	std::string filename;
	std::string error;
};

struct BzeUnpackResult {
	bool ok = false;
	std::string bzePath;
	std::string outputDirectory;
	std::vector<ExtractedChunk> chunks;
	uint32_t timCount = 0;
	uint32_t binaryCount = 0;
	std::string error;
};

// Detect the format of a chunk by analyzing its content
ChunkFormat DetectChunkFormat( const std::vector<uint8_t>& chunkData );

// Extract all chunks from a BZE file and save them to disk
BzeUnpackResult UnpackBzeFile( 
	const std::string& bzePath, 
	const std::string& outputDirectory 
);

// Extract a single chunk from BZE bytes
ExtractedChunk ExtractChunk( 
	const std::vector<uint8_t>& bzeBytes, 
	const BzeInfo& info, 
	uint32_t chunkIndex 
);

// Decode a TIM chunk to RGBA PNG (if PNG support available) or keep as TIM
bool SaveChunkToFile( 
	const ExtractedChunk& chunk, 
	const std::string& outputPath 
);

// Create output directory structure if it doesn't exist
bool CreateOutputDirectory( const std::string& path );

} // namespace jdpc
