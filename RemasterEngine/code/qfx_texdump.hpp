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
#ifndef QFX_TEXDUMP_H
#define QFX_TEXDUMP_H

#include "qfx_opengl.hpp"
#include <string>
#include <unordered_map>

class QFXTextureDump
{
private:
	QFXTextureDump();
	static QFXTextureDump& GetInstance() { static QFXTextureDump sObject; return sObject; }

public:
	~QFXTextureDump();
	static QFXTextureDump& Instance() { typedef QFXTextureDump& (*pfnGetInstance)(); static pfnGetInstance pf = &GetInstance; return pf(); }

	bool ProcessTexture( GLsizei width, GLsizei height, GLenum format, GLenum type,
		const GLvoid* pixels, GLubyte*& outPixels, GLsizei& outWidth,
		GLsizei& outHeight, GLenum& outFormat, GLenum& outType,
		GLint& outInternalFormat );

	std::string GenerateTextureHash( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels );

private:
	std::unordered_map<std::string, bool> m_dumpedTextures;
	std::unordered_map<std::string, bool> m_loadedReplacementLog;

	bool EnsureDirectory( const char* path );
	bool FileExists( const char* path ) const;
	bool IsSupportedSource( GLenum format, GLenum type ) const;
	unsigned int BytesPerPixel( GLenum format ) const;
	unsigned int RowStride( GLsizei width, unsigned int bytesPerPixel ) const;
	void MakePath( char* outPath, size_t outPathSize, const char* folder ) const;
	bool ConvertToRGBA( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels, GLubyte* rgbaPixels ) const;

	bool DumpTextureToPNG( const char* filename, GLsizei width, GLsizei height,
		GLenum format, GLenum type, const GLvoid* pixels );
	GLubyte* LoadTextureFromPNG( const char* filename, GLsizei& width, GLsizei& height );
	GLubyte* LoadReplacement( const char* replacePath, const std::string& texHash,
		GLsizei baseWidth, GLsizei baseHeight, int maxScale, GLsizei& outWidth,
		GLsizei& outHeight, char* outFilename, size_t outFilenameSize );
	GLubyte* UpscaleTexture( const GLubyte* srcPixels, GLsizei srcWidth, GLsizei srcHeight,
		int upscaleFactor, GLsizei& outWidth, GLsizei& outHeight );
};

#endif // QFX_TEXDUMP_H
