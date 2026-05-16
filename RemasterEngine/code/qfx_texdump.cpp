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
#include "qfx_settings.hpp"
#include "qfx_texdump.hpp"

#include <wincodec.h>
#include <cstring>

#pragma comment(lib, "windowscodecs.lib")

namespace
{
	class QFXComScope
	{
	public:
		QFXComScope() : m_hr( CoInitializeEx( nullptr, COINIT_MULTITHREADED ) ) {}
		~QFXComScope()
		{
			if ( m_hr == S_OK || m_hr == S_FALSE )
				CoUninitialize();
		}
		bool IsReady() const { return SUCCEEDED( m_hr ) || m_hr == RPC_E_CHANGED_MODE; }
	private:
		HRESULT m_hr;
	};

	template <typename T>
	void SafeRelease( T*& value )
	{
		if ( value ) {
			value->Release();
			value = nullptr;
		}
	}

	bool MultiBytePathToWide( const char* path, wchar_t* outPath, int outPathCount )
	{
		return MultiByteToWideChar( CP_ACP, 0, path, -1, outPath, outPathCount ) > 0;
	}

	bool SavePNG32( const char* filename, GLsizei width, GLsizei height, const GLubyte* rgbaPixels )
	{
		QFXComScope com;
		if ( !com.IsReady() ) {
			QFXLog::Instance().Warning( "WIC COM initialization failed while saving PNG: %s\n", filename );
			return false;
		}

		wchar_t wideFilename[MAX_PATH];
		if ( !MultiBytePathToWide( filename, wideFilename, MAX_PATH ) ) {
			QFXLog::Instance().Warning( "Failed to convert PNG filename to wide path: %s\n", filename );
			return false;
		}

		IWICImagingFactory* factory = nullptr;
		IWICStream* stream = nullptr;
		IWICBitmapEncoder* encoder = nullptr;
		IWICBitmapFrameEncode* frame = nullptr;
		IPropertyBag2* properties = nullptr;
		bool result = false;
		BYTE* bgraPixels = nullptr;

		DeleteFileA( filename );

		unsigned int pixelCount = width * height;
		bgraPixels = new BYTE[pixelCount * 4];
		for ( unsigned int i = 0; i < pixelCount; ++i ) {
			bgraPixels[i * 4 + 0] = rgbaPixels[i * 4 + 2];
			bgraPixels[i * 4 + 1] = rgbaPixels[i * 4 + 1];
			bgraPixels[i * 4 + 2] = rgbaPixels[i * 4 + 0];
			bgraPixels[i * 4 + 3] = rgbaPixels[i * 4 + 3];
		}

		HRESULT hr = CoCreateInstance( CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER,
			IID_PPV_ARGS( &factory ) );
		if ( SUCCEEDED( hr ) )
			hr = factory->CreateStream( &stream );
		if ( SUCCEEDED( hr ) )
			hr = stream->InitializeFromFilename( wideFilename, GENERIC_WRITE );
		if ( SUCCEEDED( hr ) )
			hr = factory->CreateEncoder( GUID_ContainerFormatPng, nullptr, &encoder );
		if ( SUCCEEDED( hr ) )
			hr = encoder->Initialize( stream, WICBitmapEncoderNoCache );
		if ( SUCCEEDED( hr ) )
			hr = encoder->CreateNewFrame( &frame, &properties );
		if ( SUCCEEDED( hr ) )
			hr = frame->Initialize( properties );
		if ( SUCCEEDED( hr ) )
			hr = frame->SetSize( width, height );
		if ( SUCCEEDED( hr ) ) {
			WICPixelFormatGUID pixelFormat = GUID_WICPixelFormat32bppBGRA;
			hr = frame->SetPixelFormat( &pixelFormat );
			if ( SUCCEEDED( hr ) && pixelFormat != GUID_WICPixelFormat32bppBGRA )
				hr = E_FAIL;
		}
		if ( SUCCEEDED( hr ) )
			hr = frame->WritePixels( height, width * 4, width * height * 4, bgraPixels );
		if ( SUCCEEDED( hr ) )
			hr = frame->Commit();
		if ( SUCCEEDED( hr ) )
			hr = encoder->Commit();

		result = SUCCEEDED( hr );
		if ( !result )
			QFXLog::Instance().Warning( "WIC PNG save failed: %s (hr=0x%08X)\n", filename, hr );
		delete[] bgraPixels;
		SafeRelease( properties );
		SafeRelease( frame );
		SafeRelease( encoder );
		SafeRelease( stream );
		SafeRelease( factory );
		if ( !result )
			DeleteFileA( filename );
		return result;
	}

	GLubyte* LoadPNG32( const char* filename, GLsizei& width, GLsizei& height )
	{
		QFXComScope com;
		if ( !com.IsReady() )
			return nullptr;

		wchar_t wideFilename[MAX_PATH];
		if ( !MultiBytePathToWide( filename, wideFilename, MAX_PATH ) )
			return nullptr;

		IWICImagingFactory* factory = nullptr;
		IWICBitmapDecoder* decoder = nullptr;
		IWICBitmapFrameDecode* frame = nullptr;
		IWICFormatConverter* converter = nullptr;
		GLubyte* pixels = nullptr;

		HRESULT hr = CoCreateInstance( CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER,
			IID_PPV_ARGS( &factory ) );
		if ( SUCCEEDED( hr ) )
			hr = factory->CreateDecoderFromFilename( wideFilename, nullptr, GENERIC_READ,
				WICDecodeMetadataCacheOnLoad, &decoder );
		if ( SUCCEEDED( hr ) )
			hr = decoder->GetFrame( 0, &frame );

		UINT decodedWidth = 0;
		UINT decodedHeight = 0;
		if ( SUCCEEDED( hr ) )
			hr = frame->GetSize( &decodedWidth, &decodedHeight );
		if ( SUCCEEDED( hr ) )
			hr = factory->CreateFormatConverter( &converter );
		if ( SUCCEEDED( hr ) )
			hr = converter->Initialize( frame, GUID_WICPixelFormat32bppRGBA,
				WICBitmapDitherTypeNone, nullptr, 0.0, WICBitmapPaletteTypeCustom );

		if ( SUCCEEDED( hr ) && decodedWidth > 0 && decodedHeight > 0 ) {
			pixels = new GLubyte[decodedWidth * decodedHeight * 4];
			hr = converter->CopyPixels( nullptr, decodedWidth * 4, decodedWidth * decodedHeight * 4, pixels );
			if ( FAILED( hr ) ) {
				delete[] pixels;
				pixels = nullptr;
			} else {
				width = static_cast<GLsizei>( decodedWidth );
				height = static_cast<GLsizei>( decodedHeight );
			}
		}

		SafeRelease( converter );
		SafeRelease( frame );
		SafeRelease( decoder );
		SafeRelease( factory );
		return pixels;
	}
}

QFXTextureDump::QFXTextureDump()
{
}

QFXTextureDump::~QFXTextureDump()
{
}

bool QFXTextureDump::FileExists( const char* path ) const
{
	DWORD attributes = GetFileAttributesA( path );
	return attributes != INVALID_FILE_ATTRIBUTES && !( attributes & FILE_ATTRIBUTE_DIRECTORY );
}

bool QFXTextureDump::EnsureDirectory( const char* path )
{
	DWORD attributes = GetFileAttributesA( path );
	if ( attributes != INVALID_FILE_ATTRIBUTES )
		return ( attributes & FILE_ATTRIBUTE_DIRECTORY ) != 0;

	if ( CreateDirectoryA( path, nullptr ) )
		return true;

	QFXLog::Instance().Warning( "Failed to create directory: %s\n", path );
	return false;
}

bool QFXTextureDump::IsSupportedSource( GLenum format, GLenum type ) const
{
	return type == GL_UNSIGNED_BYTE && BytesPerPixel( format ) != 0;
}

unsigned int QFXTextureDump::BytesPerPixel( GLenum format ) const
{
	switch ( format ) {
	case GL_RGB:
	case GL_BGR_EXT:
		return 3;
	case GL_RGBA:
	case GL_BGRA_EXT:
		return 4;
	case GL_LUMINANCE:
	case GL_ALPHA:
		return 1;
	case GL_LUMINANCE_ALPHA:
		return 2;
	default:
		return 0;
	}
}

unsigned int QFXTextureDump::RowStride( GLsizei width, unsigned int bytesPerPixel ) const
{
	GLint alignment = 4;
	if ( gl::qglGetIntegerv )
		gl::qglGetIntegerv( GL_UNPACK_ALIGNMENT, &alignment );
	if ( alignment < 1 )
		alignment = 1;

	unsigned int packed = width * bytesPerPixel;
	return ( packed + alignment - 1 ) & ~( alignment - 1 );
}

void QFXTextureDump::MakePath( char* outPath, size_t outPathSize, const char* folder ) const
{
	GetCurrentDirectoryA( static_cast<DWORD>( outPathSize ), outPath );
	strcat_s( outPath, outPathSize, "\\" );
	strcat_s( outPath, outPathSize, folder );
}

bool QFXTextureDump::ConvertToRGBA( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels, GLubyte* rgbaPixels ) const
{
	if ( !IsSupportedSource( format, type ) )
		return false;

	const GLubyte* srcPixels = static_cast<const GLubyte*>( pixels );
	unsigned int bytesPerPixel = BytesPerPixel( format );
	unsigned int rowStride = RowStride( width, bytesPerPixel );

	for ( GLsizei y = 0; y < height; ++y ) {
		const GLubyte* srcRow = srcPixels + y * rowStride;
		GLubyte* dstRow = rgbaPixels + y * width * 4;

		for ( GLsizei x = 0; x < width; ++x ) {
			const GLubyte* src = srcRow + x * bytesPerPixel;
			GLubyte* dst = dstRow + x * 4;

			switch ( format ) {
			case GL_RGB:
				dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = 255;
				break;
			case GL_BGR_EXT:
				dst[0] = src[2]; dst[1] = src[1]; dst[2] = src[0]; dst[3] = 255;
				break;
			case GL_RGBA:
				dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
				break;
			case GL_BGRA_EXT:
				dst[0] = src[2]; dst[1] = src[1]; dst[2] = src[0]; dst[3] = src[3];
				break;
			case GL_LUMINANCE:
				dst[0] = src[0]; dst[1] = src[0]; dst[2] = src[0]; dst[3] = 255;
				break;
			case GL_ALPHA:
				dst[0] = 255; dst[1] = 255; dst[2] = 255; dst[3] = src[0];
				break;
			case GL_LUMINANCE_ALPHA:
				dst[0] = src[0]; dst[1] = src[0]; dst[2] = src[0]; dst[3] = src[1];
				break;
			default:
				return false;
			}
		}
	}

	return true;
}

std::string QFXTextureDump::GenerateTextureHash( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels )
{
	char buffer[256];
	unsigned int hash = 2166136261u;

	if ( pixels && IsSupportedSource( format, type ) ) {
		unsigned int bytesPerPixel = BytesPerPixel( format );
		unsigned int rowStride = RowStride( width, bytesPerPixel );
		const GLubyte* srcPixels = static_cast<const GLubyte*>( pixels );

		for ( GLsizei y = 0; y < height; ++y ) {
			const GLubyte* row = srcPixels + y * rowStride;
			for ( GLsizei x = 0; x < width * static_cast<GLsizei>( bytesPerPixel ); ++x ) {
				hash ^= row[x];
				hash *= 16777619u;
			}
		}
	}

	sprintf_s( buffer, sizeof( buffer ), "tex_%dx%d_fmt%04x_%08x", width, height, format, hash );
	return std::string( buffer );
}

bool QFXTextureDump::DumpTextureToPNG( const char* filename, GLsizei width, GLsizei height,
	GLenum format, GLenum type, const GLvoid* pixels )
{
	if ( !pixels || width <= 0 || height <= 0 || !IsSupportedSource( format, type ) )
		return false;

	GLubyte* rgbaPixels = new GLubyte[width * height * 4];
	bool converted = ConvertToRGBA( width, height, format, type, pixels, rgbaPixels );
	bool saved = converted && SavePNG32( filename, width, height, rgbaPixels );
	delete[] rgbaPixels;

	if ( saved )
		QFXLog::Instance().Printf( "Dumped texture PNG: %s\n", filename );
	else
		QFXLog::Instance().Warning( "Failed to dump texture PNG: %s\n", filename );

	return saved;
}

GLubyte* QFXTextureDump::LoadTextureFromPNG( const char* filename, GLsizei& width, GLsizei& height )
{
	if ( !FileExists( filename ) )
		return nullptr;

	GLubyte* pixels = LoadPNG32( filename, width, height );
	if ( !pixels )
		QFXLog::Instance().Warning( "Failed to load replacement PNG: %s\n", filename );

	return pixels;
}

GLubyte* QFXTextureDump::LoadReplacement( const char* replacePath, const std::string& texHash,
	GLsizei baseWidth, GLsizei baseHeight, int maxScale, GLsizei& outWidth,
	GLsizei& outHeight, char* outFilename, size_t outFilenameSize )
{
	for ( int scale = 4; scale >= 2; scale /= 2 ) {
		char texFile[MAX_PATH];
		sprintf_s( texFile, sizeof( texFile ), "%s\\%s_x%d.png", replacePath, texHash.c_str(), scale );

		GLsizei replaceWidth = 0;
		GLsizei replaceHeight = 0;
		GLubyte* replacePixels = LoadTextureFromPNG( texFile, replaceWidth, replaceHeight );
		if ( !replacePixels )
			continue;

		if ( replaceWidth == baseWidth * scale && replaceHeight == baseHeight * scale ) {
			outWidth = replaceWidth;
			outHeight = replaceHeight;
			strcpy_s( outFilename, outFilenameSize, texFile );
			return replacePixels;
		}

		delete[] replacePixels;
	}

	char texFile[MAX_PATH];
	sprintf_s( texFile, sizeof( texFile ), "%s\\%s.png", replacePath, texHash.c_str() );

	GLsizei replaceWidth = 0;
	GLsizei replaceHeight = 0;
	GLubyte* replacePixels = LoadTextureFromPNG( texFile, replaceWidth, replaceHeight );
	if ( replacePixels ) {
		for ( int scale = 4; scale >= 2; scale /= 2 ) {
			if ( replaceWidth == baseWidth * scale && replaceHeight == baseHeight * scale ) {
				outWidth = replaceWidth;
				outHeight = replaceHeight;
				strcpy_s( outFilename, outFilenameSize, texFile );
				return replacePixels;
			}
		}

		if ( maxScale > 1 && replaceWidth == baseWidth && replaceHeight == baseHeight ) {
			GLsizei upWidth = 0;
			GLsizei upHeight = 0;
			GLubyte* upscaledPixels = UpscaleTexture( replacePixels, replaceWidth, replaceHeight, maxScale, upWidth, upHeight );
			delete[] replacePixels;
			if ( upscaledPixels ) {
				outWidth = upWidth;
				outHeight = upHeight;
				strcpy_s( outFilename, outFilenameSize, texFile );
				return upscaledPixels;
			}
			return nullptr;
		}

		if ( replaceWidth == baseWidth && replaceHeight == baseHeight ) {
			outWidth = replaceWidth;
			outHeight = replaceHeight;
			strcpy_s( outFilename, outFilenameSize, texFile );
			return replacePixels;
		}

		QFXLog::Instance().Warning( "Replacement PNG has unsupported dimensions: %s (%dx%d for %dx%d source)\n",
			texFile, replaceWidth, replaceHeight, baseWidth, baseHeight );
		delete[] replacePixels;
	}

	return nullptr;
}

GLubyte* QFXTextureDump::UpscaleTexture( const GLubyte* srcPixels, GLsizei srcWidth, GLsizei srcHeight,
	int upscaleFactor, GLsizei& outWidth, GLsizei& outHeight )
{
	if ( !srcPixels || upscaleFactor <= 1 || upscaleFactor > 4 )
		return nullptr;

	outWidth = srcWidth * upscaleFactor;
	outHeight = srcHeight * upscaleFactor;

	GLubyte* dstPixels = new GLubyte[outWidth * outHeight * 4];
	for ( GLsizei y = 0; y < outHeight; ++y ) {
		for ( GLsizei x = 0; x < outWidth; ++x ) {
			GLsizei srcX = x / upscaleFactor;
			GLsizei srcY = y / upscaleFactor;
			memcpy( &dstPixels[( y * outWidth + x ) * 4],
				&srcPixels[( srcY * srcWidth + srcX ) * 4], 4 );
		}
	}

	return dstPixels;
}

bool QFXTextureDump::ProcessTexture( GLsizei width, GLsizei height, GLenum format, GLenum type,
	const GLvoid* pixels, GLubyte*& outPixels, GLsizei& outWidth, GLsizei& outHeight,
	GLenum& outFormat, GLenum& outType, GLint& outInternalFormat )
{
	outPixels = nullptr;
	outWidth = width;
	outHeight = height;
	outFormat = format;
	outType = type;
	outInternalFormat = 0;

	if ( !pixels || width <= 0 || height <= 0 || !IsSupportedSource( format, type ) )
		return false;

	bool dumpEnabled = QFXSettings::Instance().GetInteger( "TextureDumpEnable", 1 ) != 0;
	bool replaceEnabled = QFXSettings::Instance().GetInteger( "TextureReplaceEnable", 0 ) != 0;
	int upscaleFactor = QFXSettings::Instance().GetInteger( "TextureUpscaleFactor", 1 );
	upscaleFactor = std::min( 4, std::max( 1, upscaleFactor ) );
	if ( upscaleFactor != 1 && upscaleFactor != 2 && upscaleFactor != 4 )
		upscaleFactor = 1;

	std::string texHash = GenerateTextureHash( width, height, format, type, pixels );

	if ( dumpEnabled && m_dumpedTextures.find( texHash ) == m_dumpedTextures.end() ) {
		char dumpPath[MAX_PATH];
		MakePath( dumpPath, sizeof( dumpPath ), "TextureDump" );

		if ( EnsureDirectory( dumpPath ) ) {
			char texFile[MAX_PATH];
			sprintf_s( texFile, sizeof( texFile ), "%s\\%s.png", dumpPath, texHash.c_str() );

			if ( DumpTextureToPNG( texFile, width, height, format, type, pixels ) )
				m_dumpedTextures[texHash] = true;
		}
	}

	if ( replaceEnabled ) {
		char replacePath[MAX_PATH];
		MakePath( replacePath, sizeof( replacePath ), "HDTex" );

		char loadedFilename[MAX_PATH] = {};
		GLubyte* replacementPixels = LoadReplacement( replacePath, texHash, width, height,
			upscaleFactor, outWidth, outHeight, loadedFilename, sizeof( loadedFilename ) );
		if ( replacementPixels ) {
			outPixels = replacementPixels;
			outFormat = GL_RGBA;
			outType = GL_UNSIGNED_BYTE;
			outInternalFormat = GL_RGBA;

			if ( m_loadedReplacementLog.find( loadedFilename ) == m_loadedReplacementLog.end() ) {
				QFXLog::Instance().Printf( "Loaded replacement texture: %s (%dx%d -> %dx%d)\n", loadedFilename, width, height, outWidth, outHeight );
				m_loadedReplacementLog[loadedFilename] = true;
			}

			return true;
		}
	}

	return false;
}
