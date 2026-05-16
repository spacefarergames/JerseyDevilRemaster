#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace jdpc {

struct TimInfo {
	bool valid = false;
	uint32_t flags = 0;
	bool hasClut = false;
	int bitsPerPixel = 0;
	uint32_t clutDataOffset = 0;
	uint32_t imageDataOffset = 0;
	uint32_t imageDataSize = 0;
	uint16_t clutX = 0;
	uint16_t clutY = 0;
	uint16_t clutColors = 0;
	uint16_t clutCount = 0;
	uint16_t imageX = 0;
	uint16_t imageY = 0;
	uint16_t width = 0;
	uint16_t height = 0;
	std::string error;
};

struct RgbaImage {
	bool valid = false;
	uint16_t width = 0;
	uint16_t height = 0;
	std::vector<uint8_t> pixels;
	std::string error;
};

struct BzeChunk {
	uint32_t declaredSize = 0;
	uint32_t offset = 0;
	uint32_t size = 0;
};

struct BzeInfo {
	bool valid = false;
	uint32_t kind = 0;
	uint32_t headerSize = 0x800;
	std::vector<BzeChunk> chunks;
	std::string error;
};

struct BzeCommandSummary {
	bool valid = false;
	uint32_t wordCount = 0;
	uint32_t likelyCommandWords = 0;
	uint32_t commandCounts[0x51] = {};
	std::string error;
};

TimInfo ParseTim( const std::vector<uint8_t>& bytes );
RgbaImage DecodeTimToRgba( const std::vector<uint8_t>& bytes );
BzeInfo ParseBze( const std::vector<uint8_t>& bytes );
BzeCommandSummary AnalyzeBzeCommands( const std::vector<uint8_t>& bytes );
std::string DescribeTim( const TimInfo& info );
std::string DescribeBze( const BzeInfo& info );
std::string DescribeBzeCommands( const BzeCommandSummary& summary );

} // namespace jdpc
