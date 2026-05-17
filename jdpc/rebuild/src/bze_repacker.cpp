#include "bze_repacker.hpp"
#include "file_system.hpp"
#include "asset_formats.hpp"

#include <algorithm>
#include <sstream>
#include <iomanip>
#include <windows.h>

namespace jdpc {
namespace {

void WriteU32( std::vector<uint8_t>& buffer, size_t offset, uint32_t value )
{
	if ( offset + 4 > buffer.size() )
		buffer.resize(offset + 4);
	buffer[offset] = (value >> 0) & 0xff;
	buffer[offset + 1] = (value >> 8) & 0xff;
	buffer[offset + 2] = (value >> 16) & 0xff;
	buffer[offset + 3] = (value >> 24) & 0xff;
}

std::string GetChunkSortKey( const std::string& filePath )
{
	// Extract chunk index from filename (chunk_XXXX.bin or chunk_XXXX.tim)
	size_t lastSlash = filePath.find_last_of('\\');
	if ( lastSlash == std::string::npos )
		lastSlash = filePath.find_last_of('/');

	size_t startPos = lastSlash != std::string::npos ? lastSlash + 1 : 0;
	const std::string filename = filePath.substr(startPos);

	// Parse "chunk_XXXX" pattern
	if ( filename.find("chunk_") == 0 ) {
		size_t underscorePos = filename.find('_');
		if ( underscorePos != std::string::npos ) {
			size_t dotPos = filename.find('.', underscorePos);
			if ( dotPos != std::string::npos ) {
				const std::string indexStr = filename.substr(underscorePos + 1, dotPos - underscorePos - 1);
				return std::string(6 - indexStr.length(), '0') + indexStr;
			}
		}
	}

	return filename;
}

} // namespace

BzeRepackResult RepackBzeFromDirectory(
	const std::string& sourceDirectory,
	const std::string& outputBzePath,
	const BzeRepackOptions& options
)
{
	BzeRepackResult result;
	result.outputPath = outputBzePath;

	// List all chunk files in the source directory
	const auto chunkFiles = ListFiles(sourceDirectory.c_str(), ".bin");
	const auto timFiles = ListFiles(sourceDirectory.c_str(), ".tim");

	std::vector<std::string> allFiles = chunkFiles;
	allFiles.insert(allFiles.end(), timFiles.begin(), timFiles.end());

	if ( allFiles.empty() ) {
		result.error = "No chunk files found in source directory";
		return result;
	}

	// Sort files by chunk index
	if ( options.preserveOrder ) {
		std::sort(allFiles.begin(), allFiles.end(), 
			[](const std::string& a, const std::string& b) {
				return GetChunkSortKey(a) < GetChunkSortKey(b);
			}
		);
	}

	// Read all chunks
	std::vector<BzeRepackChunk> chunks;
	for ( const auto& chunkFile : allFiles ) {
		const FileReadResult readResult = ReadWholeFile(chunkFile.c_str());
		if ( !readResult.ok ) {
			if ( options.verbose ) {
				result.warnings.push_back("Failed to read chunk: " + chunkFile);
			}
			continue;
		}

		BzeRepackChunk chunk;
		chunk.filePath = chunkFile;
		chunk.actualSize = static_cast<uint32_t>(readResult.bytes.size());
		chunk.declaredSize = chunk.actualSize;
		chunk.data = readResult.bytes;

		chunks.push_back(chunk);
	}

	if ( chunks.empty() ) {
		result.error = "No valid chunks could be read";
		return result;
	}

	// Repack chunks
	return RepackBzeFromChunks(chunks, outputBzePath, options);
}

BzeRepackResult RepackBzeFromChunks(
	const std::vector<BzeRepackChunk>& chunks,
	const std::string& outputBzePath,
	const BzeRepackOptions& options
)
{
	BzeRepackResult result;
	result.outputPath = outputBzePath;
	result.chunkCount = static_cast<uint32_t>(chunks.size());

	// Build BZE file in memory
	std::vector<uint8_t> bzeData;

	// Header: 0x800 bytes
	const uint32_t headerSize = 0x800;
	bzeData.resize(headerSize, 0);

	// Write archive type at offset 0
	WriteU32(bzeData, 0, options.archiveType);

	// Write chunk count at offset 4
	WriteU32(bzeData, 4, static_cast<uint32_t>(chunks.size()));

	// Chunk table starts at offset 8
	// Each chunk entry is 8 bytes: declared size (4) + actual size (4)
	for ( size_t i = 0; i < chunks.size(); ++i ) {
		const size_t tableOffset = 8 + (i * 8);
		WriteU32(bzeData, tableOffset, chunks[i].declaredSize);
		WriteU32(bzeData, tableOffset + 4, chunks[i].actualSize);
	}

	// Append chunk data with proper alignment
	uint64_t currentOffset = headerSize;

	for ( size_t i = 0; i < chunks.size(); ++i ) {
		const BzeRepackChunk& chunk = chunks[i];

		// Align current offset
		uint32_t alignedOffset = AlignUp(static_cast<uint32_t>(currentOffset), options.alignment);
		uint32_t paddingSize = alignedOffset - static_cast<uint32_t>(currentOffset);

		// Add padding
		for ( uint32_t p = 0; p < paddingSize; ++p ) {
			bzeData.push_back(0);
		}

		// Append chunk data
		const size_t chunkStart = bzeData.size();
		bzeData.insert(bzeData.end(), chunk.data.begin(), chunk.data.end());

		result.uncompressedSize += chunk.data.size();
		currentOffset = bzeData.size();

		if ( options.verbose ) {
			std::ostringstream oss;
			oss << "Chunk " << i << ": offset=0x" << std::hex << chunkStart 
				<< ", size=" << std::dec << chunk.data.size() << " bytes";
			// Would log this in real implementation
		}
	}

	result.totalSize = bzeData.size();

	// Write to file
	if ( !WriteWholeFile(outputBzePath.c_str(), bzeData) ) {
		result.error = "Failed to write output BZE file";
		return result;
	}

	result.ok = true;
	return result;
}

bool ValidateRepackedBze(
	const std::string& repackedPath,
	const std::string& originalPath
)
{
	// Read repacked BZE
	const FileReadResult repackedResult = ReadWholeFile(repackedPath.c_str());
	if ( !repackedResult.ok ) {
		return false;
	}

	const BzeInfo repackedInfo = ParseBze(repackedResult.bytes);
	if ( !repackedInfo.valid ) {
		return false;
	}

	// If original provided, compare
	if ( !originalPath.empty() ) {
		const FileReadResult originalResult = ReadWholeFile(originalPath.c_str());
		if ( !originalResult.ok ) {
			return false;
		}

		const BzeInfo originalInfo = ParseBze(originalResult.bytes);
		if ( !originalInfo.valid ) {
			return false;
		}

		// Basic validation: same chunk count
		if ( repackedInfo.chunks.size() != originalInfo.chunks.size() ) {
			return false;
		}
	}

	return true;
}

std::vector<ChunkInfo> GetRepackedBzeChunks( const std::string& bzePath )
{
	std::vector<ChunkInfo> chunks;

	const FileReadResult readResult = ReadWholeFile(bzePath.c_str());
	if ( !readResult.ok ) {
		return chunks;
	}

	const BzeInfo bzeInfo = ParseBze(readResult.bytes);
	if ( !bzeInfo.valid ) {
		return chunks;
	}

	for ( size_t i = 0; i < bzeInfo.chunks.size(); ++i ) {
		const BzeChunk& bzeChunk = bzeInfo.chunks[i];

		ChunkInfo info;
		info.index = static_cast<uint32_t>(i);
		info.declaredSize = bzeChunk.declaredSize;
		info.actualSize = bzeChunk.size;
		info.fileOffset = bzeChunk.offset;

		chunks.push_back(info);
	}

	return chunks;
}

} // namespace jdpc
