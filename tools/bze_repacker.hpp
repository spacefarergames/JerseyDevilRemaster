#pragma once

#include <string>
#include <vector>
#include <cstdint>

namespace jdpc {

struct BzeRepackChunk {
	std::string filePath;
	uint32_t declaredSize = 0;
	uint32_t actualSize = 0;
	std::vector<uint8_t> data;
};

struct BzeRepackOptions {
	uint32_t archiveType = 0;
	uint32_t alignment = 0x800;  // Standard 2KB alignment
	bool preserveOrder = true;
	bool verbose = false;
};

struct BzeRepackResult {
	bool ok = false;
	std::string outputPath;
	uint32_t chunkCount = 0;
	uint64_t totalSize = 0;
	uint64_t uncompressedSize = 0;
	std::string error;
	std::vector<std::string> warnings;
};

// Repack BZE archive from extracted directory structure
BzeRepackResult RepackBzeFromDirectory(
	const std::string& sourceDirectory,
	const std::string& outputBzePath,
	const BzeRepackOptions& options = BzeRepackOptions()
);

// Repack BZE from explicit chunk list
BzeRepackResult RepackBzeFromChunks(
	const std::vector<BzeRepackChunk>& chunks,
	const std::string& outputBzePath,
	const BzeRepackOptions& options = BzeRepackOptions()
);

// Validate a repacked BZE file against original if available
bool ValidateRepackedBze(
	const std::string& repackedPath,
	const std::string& originalPath = ""
);

// Get chunk information from repacked BZE
struct ChunkInfo {
	uint32_t index = 0;
	uint32_t declaredSize = 0;
	uint32_t actualSize = 0;
	uint64_t fileOffset = 0;
};

std::vector<ChunkInfo> GetRepackedBzeChunks(const std::string& bzePath);

// Helper: Align value to boundary
inline uint32_t AlignUp(uint32_t value, uint32_t alignment) {
	return (value + alignment - 1) & ~(alignment - 1);
}

} // namespace jdpc
