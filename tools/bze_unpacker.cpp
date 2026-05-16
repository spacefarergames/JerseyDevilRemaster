#include "bze_unpacker.hpp"
#include "file_system.hpp"

#include <sstream>
#include <iomanip>
#include <windows.h>

namespace jdpc {
namespace {

// Check if data starts with TIM magic number (0x10 0x00 0x00 0x00)
bool IsTim( const std::vector<uint8_t>& data )
{
	if ( data.size() < 4 )
		return false;
	return data[0] == 0x10 && data[1] == 0x00 && data[2] == 0x00 && data[3] == 0x00;
}

// Generate a filename for a chunk based on its index and format
std::string GenerateChunkFilename( uint32_t index, ChunkFormat format )
{
	std::ostringstream oss;
	oss << "chunk_" << std::setfill( '0' ) << std::setw( 4 ) << index;

	switch ( format ) {
	case ChunkFormat::TIM:
		oss << ".tim";
		break;
	case ChunkFormat::Binary:
		oss << ".bin";
		break;
	default:
		oss << ".unk";
		break;
	}

	return oss.str();
}

} // namespace

ChunkFormat DetectChunkFormat( const std::vector<uint8_t>& chunkData )
{
	if ( IsTim( chunkData ) )
		return ChunkFormat::TIM;

	// If it's not TIM, treat as binary
	return ChunkFormat::Binary;
}

ExtractedChunk ExtractChunk(
	const std::vector<uint8_t>& bzeBytes,
	const BzeInfo& info,
	uint32_t chunkIndex
)
{
	ExtractedChunk chunk;
	chunk.chunkIndex = chunkIndex;

	if ( chunkIndex >= info.chunks.size() ) {
		chunk.error = "chunk index out of range";
		return chunk;
	}

	const BzeChunk& bzeChunk = info.chunks[chunkIndex];

	// Extract the chunk data from the BZE file
	if ( bzeChunk.offset + bzeChunk.size > bzeBytes.size() ) {
		chunk.error = "chunk data exceeds file size";
		return chunk;
	}

	chunk.data.assign(
		bzeBytes.begin() + bzeChunk.offset,
		bzeBytes.begin() + bzeChunk.offset + bzeChunk.size
	);

	// Detect format and generate filename
	chunk.format = DetectChunkFormat( chunk.data );
	chunk.filename = GenerateChunkFilename( chunkIndex, chunk.format );

	// If it's a TIM file, also include it in TIM statistics
	if ( chunk.format == ChunkFormat::TIM ) {
		// Try to parse the TIM file to verify it's valid
		const TimInfo timInfo = ParseTim( chunk.data );
		if ( timInfo.valid ) {
			// It's a valid TIM file
		}
	}

	return chunk;
}

bool CreateOutputDirectory( const std::string& path )
{
	if ( DirectoryExists( path.c_str() ) )
		return true;

	return CreateDirectory( path.c_str() );
}

bool SaveChunkToFile(
	const ExtractedChunk& chunk,
	const std::string& outputPath
)
{
	if ( chunk.data.empty() ) {
		return false;
	}

	// For TIM chunks, optionally decode to PNG (not implemented yet)
	// For now, just save raw data to file
	return WriteWholeFile( outputPath.c_str(), chunk.data );
}

BzeUnpackResult UnpackBzeFile(
	const std::string& bzePath,
	const std::string& outputDirectory
)
{
	BzeUnpackResult result;
	result.bzePath = bzePath;
	result.outputDirectory = outputDirectory;

	// Read the BZE file
	const FileReadResult readResult = ReadWholeFile( bzePath.c_str() );
	if ( !readResult.ok ) {
		result.error = "failed to read BZE file";
		return result;
	}

	// Parse the BZE structure
	const BzeInfo bzeInfo = ParseBze( readResult.bytes );
	if ( !bzeInfo.valid ) {
		result.error = "failed to parse BZE: " + bzeInfo.error;
		return result;
	}

	// Create output directory
	if ( !CreateOutputDirectory( outputDirectory ) ) {
		result.error = "failed to create output directory";
		return result;
	}

	// Extract each chunk
	for ( uint32_t i = 0; i < bzeInfo.chunks.size(); ++i ) {
		ExtractedChunk chunk = ExtractChunk( readResult.bytes, bzeInfo, i );

		if ( !chunk.error.empty() ) {
			// Log error but continue with other chunks
			continue;
		}

		// Build full output path
		std::string fullPath = outputDirectory;
		if ( !fullPath.empty() && fullPath.back() != '\\' ) {
			fullPath += '\\';
		}
		fullPath += chunk.filename;

		// Save chunk to file
		if ( SaveChunkToFile( chunk, fullPath ) ) {
			result.chunks.push_back( chunk );

			if ( chunk.format == ChunkFormat::TIM )
				result.timCount++;
			else if ( chunk.format == ChunkFormat::Binary )
				result.binaryCount++;
		} else {
			chunk.error = "failed to write chunk to file";
		}
	}

	result.ok = true;
	return result;
}

} // namespace jdpc
