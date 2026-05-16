/***************************************************************************
* Copyright (C) 2012-2016, Crystice Softworks.
* 
* This file is part of QeffectsGL source code.
* 
* QeffectsGL source code is free software; you can redistribute it 
* and/or modify it under the terms of the GNU General Public License 
* as published by the Free Software Foundation; either version 2 of 
* the License, or (at your option) any later version.
* 
* QeffectsGL source code is distributed in the hope that it will be 
* useful, but WITHOUT ANY WARRANTY; without even the implied 
* warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
* See the GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software 
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
***************************************************************************/
#include "qfx_library.hpp"
#include "qfx_log.hpp"
#include "qfx_opengl.hpp"
#include "qfx_settings.hpp"
#include "qfx_texdump.hpp"
#include <shlwapi.h>
#include <cstring>

#pragma comment(lib, "shlwapi.lib")

QFXTextureDump::QFXTextureDump()
{
}

QFXTextureDump::~QFXTextureDump()
{
}

bool QFXTextureDump::EnsureDirectory( const char* path )
{
	if ( PathFileExistsA( path ) )
		return true;

	if ( CreateDirectoryA( path, nullptr ) )
		return true;

	QFXLog::Instance().Warning( "Failed to create directory: %s\n", path );
	return false;
}

std::string QFXTextureDump::GenerateTextureHash( GLsizei width, GLsizei height, GLenum format, const GLvoid* pixels )
{
	// Generate a hash based on texture properties
	// For simplicity, use dimension and format as part of the filename
	char buffer[256];
	unsigned int hash = 0;

	if ( pixels ) {
		// Simple hash of first few bytes
		const unsigned char* data = static_cast<const unsigned char*>( pixels );
		for ( int i = 0; i < std::min( 64, (int)(width * height) ); ++i ) {
			hash = hash * 31 + data[i];
		}
	}

	sprintf_s( buffer, sizeof(buffer), "tex_%dx%d_fmt%d_h%08x", width, height, format, hash );
	return std::string( buffer );
}

bool QFXTextureDump::DumpTextureToPNG( const char* filename, GLsizei width, GLsizei height, 
									   GLenum format, GLenum type, const GLvoid* pixels )
{
	if ( !pixels || width <= 0 || height <= 0 )
		return false;

	// For now, save as BMP format (simpler, no external library needed)
	// User can convert to PNG using ImageMagick or other tools
	char bmpFilename[MAX_PATH];
	strcpy_s( bmpFilename, sizeof(bmpFilename), filename );
	char *ext = strrchr( bmpFilename, '.' );
	if ( ext )
		strcpy_s( ext, 5, ".bmp" );

	// BMP file header
	struct BMPHeader {
		char signature[2];      // "BM"
		unsigned int fileSize;
		unsigned short reserved1;
		unsigned short reserved2;
		unsigned int dataOffset;
		unsigned int headerSize;
		int width;
		int height;
		unsigned short planes;
		unsigned short bitsPerPixel;
		unsigned int compression;
		unsigned int imageSize;
		int xPixelsPerMeter;
		int yPixelsPerMeter;
		unsigned int colorsUsed;
		unsigned int importantColors;
	};

	BMPHeader header = {};
	header.signature[0] = 'B';
	header.signature[1] = 'M';
	header.fileSize = sizeof(BMPHeader) + (width * height * 4);
	header.dataOffset = sizeof(BMPHeader);
	header.headerSize = 40;
	header.width = width;
	header.height = -height; // Negative to indicate top-down
	header.planes = 1;
	header.bitsPerPixel = 32;
	header.compression = 0;
	header.imageSize = width * height * 4;
	header.xPixelsPerMeter = 2835;
	header.yPixelsPerMeter = 2835;

	FILE *f = nullptr;
	if ( fopen_s( &f, bmpFilename, "wb" ) != 0 || !f )
		return false;

	// Write header
	if ( fwrite( &header, sizeof(BMPHeader), 1, f ) != 1 ) {
		fclose( f );
		return false;
	}

	// Convert and write pixel data
	const GLubyte *src = static_cast<const GLubyte*>( pixels );
	unsigned int bytesPerPixel = 0;
	bool needsConversion = true;

	if ( format == GL_RGBA && type == GL_UNSIGNED_BYTE ) {
		bytesPerPixel = 4;
		// Write RGBA as BGRA for BMP
		for ( int i = 0; i < width * height; ++i ) {
			unsigned char r = src[i * 4 + 0];
			unsigned char g = src[i * 4 + 1];
			unsigned char b = src[i * 4 + 2];
			unsigned char a = src[i * 4 + 3];
			unsigned char bgra[4] = { b, g, r, a };
			fwrite( bgra, 4, 1, f );
		}
		needsConversion = false;
	}
	else if ( format == GL_RGB && type == GL_UNSIGNED_BYTE ) {
		bytesPerPixel = 3;
		// Write RGB as BGRA for BMP
		for ( int i = 0; i < width * height; ++i ) {
			unsigned char r = src[i * 3 + 0];
			unsigned char g = src[i * 3 + 1];
			unsigned char b = src[i * 3 + 2];
			unsigned char bgra[4] = { b, g, r, 255 };
			fwrite( bgra, 4, 1, f );
		}
		needsConversion = false;
	}
	else if ( format == GL_BGRA && type == GL_UNSIGNED_BYTE ) {
		bytesPerPixel = 4;
		fwrite( pixels, 4 * width * height, 1, f );
		needsConversion = false;
	}

	if ( needsConversion ) {
		// Default: fill with gray
		unsigned char gray[4] = { 128, 128, 128, 255 };
		for ( int i = 0; i < width * height; ++i ) {
			fwrite( gray, 4, 1, f );
		}
	}

	fclose( f );
	QFXLog::Instance().Printf( "Dumped texture as BMP: %s (convert to PNG with ImageMagick if needed)\n", bmpFilename );
	return true;
}

GLubyte* QFXTextureDump::LoadTextureFromPNG( const char* filename, GLsizei& width, GLsizei& height, int upscale )
{
	if ( !PathFileExistsA( filename ) )
		return nullptr;

	FILE *f = nullptr;
	if ( fopen_s( &f, filename, "rb" ) != 0 || !f )
		return nullptr;

	// Try to read as BMP first
	char signature[2];
	if ( fread( signature, 2, 1, f ) != 1 || signature[0] != 'B' || signature[1] != 'M' ) {
		fclose( f );
		QFXLog::Instance().Warning( "File is not in BMP format: %s\n", filename );
		return nullptr;
	}

	// Read BMP header
	unsigned int fileSize, dataOffset;
	if ( fread( &fileSize, 4, 1, f ) != 1 ) {
		fclose( f );
		return nullptr;
	}

	fseek( f, 10, SEEK_SET );
	if ( fread( &dataOffset, 4, 1, f ) != 1 ) {
		fclose( f );
		return nullptr;
	}

	// Read DIB header
	unsigned int dibHeaderSize;
	if ( fread( &dibHeaderSize, 4, 1, f ) != 1 ) {
		fclose( f );
		return nullptr;
	}

	int bmpWidth, bmpHeight;
	unsigned short bitsPerPixel;
	if ( fread( &bmpWidth, 4, 1, f ) != 1 || fread( &bmpHeight, 4, 1, f ) != 1 ) {
		fclose( f );
		return nullptr;
	}

	fseek( f, 18 + dibHeaderSize, SEEK_SET );
	if ( fread( &bitsPerPixel, 2, 1, f ) != 1 ) {
		fclose( f );
		return nullptr;
	}

	if ( bmpWidth <= 0 || bmpHeight <= 0 || (bitsPerPixel != 24 && bitsPerPixel != 32) ) {
		fclose( f );
		return nullptr;
	}

	width = bmpWidth;
	height = bmpHeight < 0 ? -bmpHeight : bmpHeight;

	// Allocate buffer for RGBA data
	GLubyte* pixels = new GLubyte[width * height * 4];

	// Read pixel data
	fseek( f, dataOffset, SEEK_SET );
	int bytesPerPixel = bitsPerPixel / 8;

	if ( bitsPerPixel == 32 ) {
		for ( int i = 0; i < width * height; ++i ) {
			unsigned char bgra[4];
			if ( fread( bgra, 4, 1, f ) != 1 ) {
				fclose( f );
				delete[] pixels;
				return nullptr;
			}
			// Convert BGRA to RGBA
			pixels[i * 4 + 0] = bgra[2]; // R
			pixels[i * 4 + 1] = bgra[1]; // G
			pixels[i * 4 + 2] = bgra[0]; // B
			pixels[i * 4 + 3] = bgra[3]; // A
		}
	}
	else if ( bitsPerPixel == 24 ) {
		for ( int i = 0; i < width * height; ++i ) {
			unsigned char bgr[3];
			if ( fread( bgr, 3, 1, f ) != 1 ) {
				fclose( f );
				delete[] pixels;
				return nullptr;
			}
			// Convert BGR to RGBA
			pixels[i * 4 + 0] = bgr[2]; // R
			pixels[i * 4 + 1] = bgr[1]; // G
			pixels[i * 4 + 2] = bgr[0]; // B
			pixels[i * 4 + 3] = 255;   // A
		}
	}

	fclose( f );

	// Apply upscaling if needed
	if ( upscale > 1 ) {
		GLubyte* upscaledPixels = UpscaleTexture( pixels, width, height, upscale, width, height );
		delete[] pixels;
		pixels = upscaledPixels;
	}

	return pixels;
}

GLubyte* QFXTextureDump::UpscaleTexture( const GLubyte* srcPixels, GLsizei srcWidth, GLsizei srcHeight, 
										 int upscaleFactor, GLsizei& outWidth, GLsizei& outHeight )
{
	if ( !srcPixels || upscaleFactor <= 1 )
		return nullptr;

	outWidth = srcWidth * upscaleFactor;
	outHeight = srcHeight * upscaleFactor;

	GLubyte* dstPixels = new GLubyte[outWidth * outHeight * 4];

	// Simple nearest neighbor upscaling (fast, sufficient for texture replacement)
	for ( GLsizei y = 0; y < outHeight; ++y ) {
		for ( GLsizei x = 0; x < outWidth; ++x ) {
			GLsizei srcX = x / upscaleFactor;
			GLsizei srcY = y / upscaleFactor;

			memcpy( &dstPixels[(y * outWidth + x) * 4],
					&srcPixels[(srcY * srcWidth + srcX) * 4],
					4 );
		}
	}

	return dstPixels;
}

bool QFXTextureDump::ProcessTexture( GLsizei width, GLsizei height, GLenum format, GLenum type, 
									  const GLvoid* pixels, GLubyte*& outPixels, GLsizei& outWidth, GLsizei& outHeight )
{
	outPixels = nullptr;
	outWidth = width;
	outHeight = height;

	if ( !pixels || width <= 0 || height <= 0 )
		return false;

	// Read settings dynamically on each call
	bool bDumpEnable = QFXSettings::Instance().GetInteger( "TexturesDump", 1 ) != 0;
	bool bReplaceEnable = QFXSettings::Instance().GetInteger( "TexturesReplace", 0 ) != 0;
	int iUpscaleFactor = QFXSettings::Instance().GetInteger( "TexturesUpscale", 1 );
	iUpscaleFactor = std::min( 4, std::max( 1, iUpscaleFactor ) );

	std::string texHash = GenerateTextureHash( width, height, format, pixels );

	// Handle texture dumping
	if ( bDumpEnable && m_dumpedTextures.find( texHash ) == m_dumpedTextures.end() ) {
		char dumpPath[MAX_PATH];
		GetCurrentDirectoryA( sizeof(dumpPath) - 1, dumpPath );
		strcat_s( dumpPath, "\\TextureDump" );

		if ( EnsureDirectory( dumpPath ) ) {
			char texFile[MAX_PATH];
			sprintf_s( texFile, sizeof(texFile), "%s\\%s.png", dumpPath, texHash.c_str() );

			if ( DumpTextureToPNG( texFile, width, height, format, type, pixels ) ) {
				QFXLog::Instance().Printf( "Dumped texture: %s\n", texFile );
				m_dumpedTextures[texHash] = true;
			}
		}
	}

	// Handle texture replacement
	if ( bReplaceEnable ) {
		char replacePath[MAX_PATH];
		GetCurrentDirectoryA( sizeof(replacePath) - 1, replacePath );
		strcat_s( replacePath, "\\HDTex" );

		char texFile[MAX_PATH];
		sprintf_s( texFile, sizeof(texFile), "%s\\%s.png", replacePath, texHash.c_str() );

		GLsizei replaceWidth = width;
		GLsizei replaceHeight = height;
		GLubyte* replacePixels = LoadTextureFromPNG( texFile, replaceWidth, replaceHeight, 1 );

		if ( replacePixels ) {
			// Try with upscaling if direct match didn't work
			if ( replaceWidth != width || replaceHeight != height ) {
				// Check for upscaled versions
				for ( int scale = 2; scale <= iUpscaleFactor; scale *= 2 ) {
					GLsizei scaledWidth = width * scale;
					GLsizei scaledHeight = height * scale;

					char scaledTexFile[MAX_PATH];
					sprintf_s( scaledTexFile, sizeof(scaledTexFile), "%s\\%s_x%d.png", replacePath, texHash.c_str(), scale );

					GLsizei tmpWidth = scaledWidth;
					GLsizei tmpHeight = scaledHeight;
					GLubyte* tmpPixels = LoadTextureFromPNG( scaledTexFile, tmpWidth, tmpHeight, 1 );

					if ( tmpPixels && tmpWidth == scaledWidth && tmpHeight == scaledHeight ) {
						delete[] replacePixels;
						replacePixels = tmpPixels;
						replaceWidth = tmpWidth;
						replaceHeight = tmpHeight;
						break;
					}

					if ( tmpPixels )
						delete[] tmpPixels;
				}
			}

			if ( replaceWidth == width && replaceHeight == height ) {
				outPixels = replacePixels;
				QFXLog::Instance().Printf( "Loaded replacement texture: %s\n", texFile );
				return true;
			}
			else {
				delete[] replacePixels;
			}
		}
	}

	return false;
}
