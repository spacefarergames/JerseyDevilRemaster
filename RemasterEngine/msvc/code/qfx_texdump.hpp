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

#include <unordered_map>
#include <string>

#define QFX_TEXDUMP_SINGLETON

class QFXTextureDump
{
private: 
	QFXTextureDump();
	static QFXTextureDump& GetInstance() { static QFXTextureDump sObject; return sObject; }

public:
	~QFXTextureDump();
	static QFXTextureDump& Instance() { typedef QFXTextureDump& (*pfnGetInstance)(); static pfnGetInstance pf = &GetInstance; return pf(); }

	// Check if texture should be dumped/replaced and handle accordingly
	// Returns true if a replacement texture was loaded
	bool ProcessTexture( GLsizei width, GLsizei height, GLenum format, GLenum type, 
						 const GLvoid* pixels, GLubyte*& outPixels, GLsizei& outWidth, GLsizei& outHeight );

	// Generate texture filename hash
	std::string GenerateTextureHash( GLsizei width, GLsizei height, GLenum format, const GLvoid* pixels );

private:
	// Track dumped textures to avoid duplicate dumps
	std::unordered_map<std::string, bool> m_dumpedTextures;

	// Create directory if it doesn't exist
	bool EnsureDirectory( const char* path );

	// Dump texture to PNG file
	bool DumpTextureToPNG( const char* filename, GLsizei width, GLsizei height, 
						   GLenum format, GLenum type, const GLvoid* pixels );

	// Load texture from PNG file with optional upscaling
	GLubyte* LoadTextureFromPNG( const char* filename, GLsizei& width, GLsizei& height, int upscale );

	// Simple bilinear upscaling for loaded textures
	GLubyte* UpscaleTexture( const GLubyte* srcPixels, GLsizei srcWidth, GLsizei srcHeight, 
							 int upscaleFactor, GLsizei& outWidth, GLsizei& outHeight );
};

#endif // QFX_TEXDUMP_H
