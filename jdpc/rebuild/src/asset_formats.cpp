#include "asset_formats.hpp"

#include <sstream>

namespace jdpc {
namespace {

uint32_t ReadU32( const std::vector<uint8_t>& bytes, size_t offset )
{
	if ( offset + 4 > bytes.size() )
		return 0;
	return static_cast<uint32_t>( bytes[offset] ) |
		( static_cast<uint32_t>( bytes[offset + 1] ) << 8 ) |
		( static_cast<uint32_t>( bytes[offset + 2] ) << 16 ) |
		( static_cast<uint32_t>( bytes[offset + 3] ) << 24 );
}

uint16_t ReadU16( const std::vector<uint8_t>& bytes, size_t offset )
{
	if ( offset + 2 > bytes.size() )
		return 0;
	return static_cast<uint16_t>( bytes[offset] ) |
		static_cast<uint16_t>( bytes[offset + 1] << 8 );
}

void WritePsxColor( uint16_t color, uint8_t* rgba )
{
	const uint8_t r = static_cast<uint8_t>( ( color & 0x1f ) << 3 );
	const uint8_t g = static_cast<uint8_t>( ( ( color >> 5 ) & 0x1f ) << 3 );
	const uint8_t b = static_cast<uint8_t>( ( ( color >> 10 ) & 0x1f ) << 3 );
	rgba[0] = static_cast<uint8_t>( r | ( r >> 5 ) );
	rgba[1] = static_cast<uint8_t>( g | ( g >> 5 ) );
	rgba[2] = static_cast<uint8_t>( b | ( b >> 5 ) );
	rgba[3] = color == 0 ? 0 : 255;
}

uint32_t AlignUp( uint32_t value, uint32_t alignment )
{
	return ( value + alignment - 1 ) & ~( alignment - 1 );
}

} // namespace

TimInfo ParseTim( const std::vector<uint8_t>& bytes )
{
	TimInfo info;
	if ( bytes.size() < 20 ) {
		info.error = "too small";
		return info;
	}

	const uint32_t magic = ReadU32( bytes, 0 );
	if ( magic != 0x10 ) {
		info.error = "bad TIM magic";
		return info;
	}

	info.flags = ReadU32( bytes, 4 );
	const uint32_t pixelMode = info.flags & 0x7;
	info.hasClut = ( info.flags & 0x8 ) != 0;
	switch ( pixelMode ) {
	case 0: info.bitsPerPixel = 4; break;
	case 1: info.bitsPerPixel = 8; break;
	case 2: info.bitsPerPixel = 16; break;
	case 3: info.bitsPerPixel = 24; break;
	default:
		info.error = "unsupported pixel mode";
		return info;
	}

	size_t offset = 8;
	if ( info.hasClut ) {
		if ( offset + 12 > bytes.size() ) {
			info.error = "truncated CLUT header";
			return info;
		}
		const uint32_t clutBlockSize = ReadU32( bytes, offset );
		if ( clutBlockSize < 12 || offset + clutBlockSize > bytes.size() ) {
			info.error = "bad CLUT block size";
			return info;
		}
		info.clutX = ReadU16( bytes, offset + 4 );
		info.clutY = ReadU16( bytes, offset + 6 );
		info.clutColors = ReadU16( bytes, offset + 8 );
		info.clutCount = ReadU16( bytes, offset + 10 );
		info.clutDataOffset = static_cast<uint32_t>( offset + 12 );
		offset += clutBlockSize;
	}

	if ( offset + 12 > bytes.size() ) {
		info.error = "truncated image header";
		return info;
	}
	const uint32_t imageBlockSize = ReadU32( bytes, offset );
	if ( imageBlockSize < 12 || offset + imageBlockSize > bytes.size() ) {
		info.error = "bad image block size";
		return info;
	}

	info.imageX = ReadU16( bytes, offset + 4 );
	info.imageY = ReadU16( bytes, offset + 6 );
	const uint16_t widthWords = ReadU16( bytes, offset + 8 );
	info.height = ReadU16( bytes, offset + 10 );
	info.imageDataOffset = static_cast<uint32_t>( offset + 12 );
	info.imageDataSize = imageBlockSize - 12;

	if ( info.bitsPerPixel == 4 )
		info.width = widthWords * 4;
	else if ( info.bitsPerPixel == 8 )
		info.width = widthWords * 2;
	else if ( info.bitsPerPixel == 24 )
		info.width = static_cast<uint16_t>( ( widthWords * 2 ) / 3 );
	else
		info.width = widthWords;

	info.valid = true;
	return info;
}

RgbaImage DecodeTimToRgba( const std::vector<uint8_t>& bytes )
{
	RgbaImage image;
	const TimInfo info = ParseTim( bytes );
	if ( !info.valid ) {
		image.error = info.error;
		return image;
	}

	image.width = info.width;
	image.height = info.height;
	image.pixels.assign( static_cast<size_t>( image.width ) * image.height * 4, 0 );

	std::vector<uint16_t> palette;
	if ( info.hasClut ) {
		const uint32_t colorCount = static_cast<uint32_t>( info.clutColors ) * info.clutCount;
		if ( info.clutDataOffset + colorCount * 2 > bytes.size() ) {
			image.error = "truncated TIM palette";
			return image;
		}
		palette.reserve( colorCount );
		for ( uint32_t i = 0; i < colorCount; ++i )
			palette.push_back( ReadU16( bytes, info.clutDataOffset + i * 2 ) );
	}

	if ( info.imageDataOffset + info.imageDataSize > bytes.size() ) {
		image.error = "truncated TIM pixels";
		return image;
	}

	const uint8_t* source = bytes.data() + info.imageDataOffset;
	const size_t sourceSize = info.imageDataSize;
	if ( info.bitsPerPixel == 4 ) {
		if ( palette.empty() ) {
			image.error = "4bpp TIM without palette";
			return image;
		}
		for ( uint32_t y = 0; y < image.height; ++y ) {
			for ( uint32_t x = 0; x < image.width; ++x ) {
				const size_t packedIndex = static_cast<size_t>( y ) * ( image.width / 2 ) + x / 2;
				if ( packedIndex >= sourceSize )
					continue;
				const uint8_t packed = source[packedIndex];
				const uint8_t paletteIndex = ( x & 1 ) ? ( packed >> 4 ) : ( packed & 0x0f );
				const uint16_t color = palette[paletteIndex % palette.size()];
				WritePsxColor( color, &image.pixels[( static_cast<size_t>( y ) * image.width + x ) * 4] );
			}
		}
	} else if ( info.bitsPerPixel == 8 ) {
		if ( palette.empty() ) {
			image.error = "8bpp TIM without palette";
			return image;
		}
		for ( uint32_t y = 0; y < image.height; ++y ) {
			for ( uint32_t x = 0; x < image.width; ++x ) {
				const size_t pixelIndex = static_cast<size_t>( y ) * image.width + x;
				if ( pixelIndex >= sourceSize )
					continue;
				const uint16_t color = palette[source[pixelIndex] % palette.size()];
				WritePsxColor( color, &image.pixels[pixelIndex * 4] );
			}
		}
	} else if ( info.bitsPerPixel == 16 ) {
		for ( uint32_t y = 0; y < image.height; ++y ) {
			for ( uint32_t x = 0; x < image.width; ++x ) {
				const size_t pixelIndex = static_cast<size_t>( y ) * image.width + x;
				const size_t sourceOffset = pixelIndex * 2;
				if ( sourceOffset + 1 >= sourceSize )
					continue;
				WritePsxColor( ReadU16( bytes, info.imageDataOffset + sourceOffset ), &image.pixels[pixelIndex * 4] );
			}
		}
	} else if ( info.bitsPerPixel == 24 ) {
		for ( uint32_t y = 0; y < image.height; ++y ) {
			for ( uint32_t x = 0; x < image.width; ++x ) {
				const size_t pixelIndex = static_cast<size_t>( y ) * image.width + x;
				const size_t sourceOffset = pixelIndex * 3;
				if ( sourceOffset + 2 >= sourceSize )
					continue;
				uint8_t* rgba = &image.pixels[pixelIndex * 4];
				rgba[0] = source[sourceOffset];
				rgba[1] = source[sourceOffset + 1];
				rgba[2] = source[sourceOffset + 2];
				rgba[3] = 255;
			}
		}
	}

	image.valid = true;
	return image;
}

BzeInfo ParseBze( const std::vector<uint8_t>& bytes )
{
	BzeInfo info;
	if ( bytes.size() < info.headerSize ) {
		info.error = "too small";
		return info;
	}

	info.kind = ReadU32( bytes, 0 );
	const uint32_t chunkCount = ReadU32( bytes, 4 );
	if ( chunkCount == 0 || chunkCount > 64 ) {
		info.error = "bad chunk count";
		return info;
	}

	const size_t tableOffset = 8;
	const size_t tableSize = static_cast<size_t>( chunkCount ) * 8;
	if ( tableOffset + tableSize > bytes.size() ) {
		info.error = "truncated chunk table";
		return info;
	}

	for ( uint32_t i = 0; i < chunkCount; ++i ) {
		BzeChunk chunk;
		chunk.declaredSize = ReadU32( bytes, tableOffset + i * 8 );
		chunk.size = ReadU32( bytes, tableOffset + i * 8 + 4 );
		chunk.offset = i == 0 ? info.headerSize : AlignUp( info.chunks.back().offset + info.chunks.back().size, info.headerSize );
		if ( chunk.size == 0 || chunk.offset > bytes.size() || chunk.size > bytes.size() || chunk.offset + chunk.size > bytes.size() ) {
			info.error = "chunk outside file";
			return info;
		}
		info.chunks.push_back( chunk );
	}

	info.valid = true;
	return info;
}

BzeCommandSummary AnalyzeBzeCommands( const std::vector<uint8_t>& bytes )
{
	BzeCommandSummary summary;
	const BzeInfo info = ParseBze( bytes );
	if ( !info.valid ) {
		summary.error = info.error;
		return summary;
	}

	for ( const BzeChunk& chunk : info.chunks ) {
		const uint32_t end = chunk.offset + chunk.size;
		for ( uint32_t offset = chunk.offset; offset + 4 <= end; offset += 4 ) {
			const uint32_t word = ReadU32( bytes, offset );
			++summary.wordCount;
			if ( word <= 0x50 ) {
				++summary.commandCounts[word];
				++summary.likelyCommandWords;
			}
		}
	}

	summary.valid = true;
	return summary;
}

std::string DescribeTim( const TimInfo& info )
{
	if ( !info.valid )
		return "TIM invalid: " + info.error;

	std::ostringstream out;
	out << "TIM " << info.width << "x" << info.height << " " << info.bitsPerPixel << "bpp";
	if ( info.hasClut )
		out << ", CLUT " << info.clutColors << "x" << info.clutCount;
	return out.str();
}

std::string DescribeBze( const BzeInfo& info )
{
	if ( !info.valid )
		return "BZE invalid: " + info.error;

	std::ostringstream out;
	out << "BZE kind " << info.kind << ", " << info.chunks.size() << " chunks";
	if ( !info.chunks.empty() )
		out << ", first read " << info.chunks[0].size << " bytes";
	return out.str();
}

std::string DescribeBzeCommands( const BzeCommandSummary& summary )
{
	if ( !summary.valid )
		return "BZE commands invalid: " + summary.error;

	std::ostringstream out;
	out << summary.likelyCommandWords << "/" << summary.wordCount << " low command-like words";
	const uint32_t important[] = { 0x2f, 0x30, 0x31, 0x32, 0x3f, 0x24, 0x25, 0x2b, 0x4c, 0x4e };
	for ( uint32_t command : important ) {
		if ( summary.commandCounts[command] )
			out << ", " << command << "=" << summary.commandCounts[command];
	}
	return out.str();
}

} // namespace jdpc
