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
#include "qfx_renderer.hpp"
#include "qfx_texdump.hpp"

//=========================================
// QFX Library Hooks
//-----------------------------------------
// Call our renderer in proper places
//=========================================
static const char s_szCustomVendorName[] = QFX_LIBRARY_VENDOR;
static GLenum s_glMatrixMode = GL_MODELVIEW;

#define IS_3D_PROJECTION_MATRIX(x)	( x[2*4+3] < 0 )

const GLubyte * WINAPI glGetString( GLenum name )
{
	if ( name == GL_VENDOR )
		return reinterpret_cast<const GLubyte*>(s_szCustomVendorName);
	else if ( name == GL_EXTENSIONS )
		return reinterpret_cast<const GLubyte*>( QFXRenderer::Instance().GetExtensionString() );
	else
		return gl::qglGetString( name ); 
}

void WINAPI glMatrixMode( GLenum mode )
{
	s_glMatrixMode = mode;
	gl::qglMatrixMode( mode );
}

void WINAPI glLoadMatrixd( const GLdouble *m )
{
	gl::qglLoadMatrixd( m );
	if ( s_glMatrixMode == GL_PROJECTION ) {
		if ( gl::ext.FBO ) {
			GLuint fboBinding = 0;
			gl::qglGetIntegerv( GL_FRAMEBUFFER_BINDING_EXT, (GLint*)&fboBinding );
			if ( fboBinding ) return;
		}
		if ( IS_3D_PROJECTION_MATRIX(m) ) {
			QFXRenderer::Instance().SetupZDimensions( m );
			QFXRenderer::Instance().SetOrtho( GL_FALSE );
		} else {
			QFXRenderer::Instance().SetOrtho( GL_TRUE );
		}
	}
}

void WINAPI glLoadMatrixf( const GLfloat *m )
{
	gl::qglLoadMatrixf( m );
	if ( s_glMatrixMode == GL_PROJECTION ) {
		if ( gl::ext.FBO ) {
			GLuint fboBinding = 0;
			gl::qglGetIntegerv( GL_DRAW_FRAMEBUFFER_BINDING, (GLint*)&fboBinding );
			if ( fboBinding ) return;
		}
		if ( IS_3D_PROJECTION_MATRIX(m) ) {
			QFXRenderer::Instance().SetupZDimensions( m );
			QFXRenderer::Instance().SetOrtho( GL_FALSE );
		} else {
			QFXRenderer::Instance().SetOrtho( GL_TRUE );
		}
	}
}

void WINAPI glPopMatrix()
{
	gl::qglPopMatrix();
/*
	if ( s_glMatrixMode == GL_PROJECTION ) {
		GLfloat m[16];
		gl::qglGetFloatv( GL_PROJECTION_MATRIX, m );
		if ( IS_3D_PROJECTION_MATRIX(m) ) {
			QFXRenderer::Instance().SetupZDimensions( m );
			QFXRenderer::Instance().SetOrtho( GL_FALSE );
		} else {
			QFXRenderer::Instance().SetOrtho( GL_TRUE );
		}
	}*/
}

void WINAPI glFrustum( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{ 
	QFXRenderer::Instance().SetupNearPlaneFrustum( left, right, bottom, top, zNear, zFar );
	gl::qglFrustum( left, right, bottom, top, zNear, zFar );
	if ( s_glMatrixMode == GL_PROJECTION ) {
		if ( gl::ext.FBO ) {
			GLuint fboBinding = 0;
			gl::qglGetIntegerv( GL_DRAW_FRAMEBUFFER_BINDING, (GLint*)&fboBinding );
			if ( fboBinding ) return;
		}
		QFXRenderer::Instance().SetupZDimensions( (GLfloat)zNear, (GLfloat)zFar );
		QFXRenderer::Instance().SetOrtho( GL_FALSE );
	}
}

void WINAPI glOrtho( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar )
{
	gl::qglOrtho( left, right, bottom, top, zNear, zFar );
	if ( s_glMatrixMode == GL_PROJECTION ) {
		if ( gl::ext.FBO ) {
			GLuint fboBinding = 0;
			gl::qglGetIntegerv( GL_DRAW_FRAMEBUFFER_BINDING, (GLint*)&fboBinding );
			if ( fboBinding ) return;
		}
		GLint viewport[4];
		gl::qglGetIntegerv( GL_VIEWPORT, viewport );
		GLint viewportX = viewport[0];
		GLint viewportY = viewport[1];
		GLsizei viewportWidth = viewport[2];
		GLsizei viewportHeight = viewport[3];
		if ( QFXRenderer::Instance().SetupHudViewport( viewportX, viewportY, viewportWidth, viewportHeight, true ) )
			gl::qglViewport( viewportX, viewportY, viewportWidth, viewportHeight );
		QFXRenderer::Instance().SetupHudOrtho( left, right, bottom, top );
		QFXRenderer::Instance().SetOrtho( GL_TRUE );
	}
}

void WINAPI glDepthFunc( GLenum func )
{
	QFXRenderer::Instance().SetupDepthFunc( func );
}

void WINAPI glDepthRange( GLclampd zNear, GLclampd zFar )
{
	QFXRenderer::Instance().SetupDepthRange( zNear, zFar );
}

void WINAPI glTexImage2D( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels )
{
	const GLvoid *pixelsToUse = pixels;
	GLubyte *replacementPixels = nullptr;
	GLsizei replacementWidth = width;
	GLsizei replacementHeight = height;
	GLenum replacementFormat = format;
	GLenum replacementType = type;
	GLint replacementInternalFormat = 0;
	bool replacedTexture = false;

	// Check for texture dump and replacement
	if ( (target == GL_TEXTURE_2D) && !level && pixels ) {
		if ( QFXTextureDump::Instance().ProcessTexture( width, height, format, type, pixels, replacementPixels, replacementWidth, replacementHeight, replacementFormat, replacementType, replacementInternalFormat ) ) {
			pixelsToUse = replacementPixels;
			width = replacementWidth;
			height = replacementHeight;
			format = replacementFormat;
			type = replacementType;
			if ( replacementInternalFormat )
				internalformat = replacementInternalFormat;
			replacedTexture = true;
		} else {
			pixelsToUse = pixels;
		}
	}

	gl::qglTexImage2D( target, level, internalformat, width, height, border, format, type, pixelsToUse );

	if ( replacedTexture ) {
		gl::qglTexParameteri( target, GL_TEXTURE_BASE_LEVEL, 0 );
		gl::qglTexParameteri( target, GL_TEXTURE_MAX_LEVEL, 0 );
	}

	// Clean up replacement pixels if allocated
	if ( replacementPixels && replacementPixels != pixels ) {
		delete[] replacementPixels;
	}

	if ( (target == GL_TEXTURE_2D) && !level && pixels )
		QFXRenderer::Instance().OnTexImage2D();
}

void WINAPI glTexParameterf( GLenum target, GLenum pname, GLfloat param )
{
	if ( ( pname == GL_TEXTURE_MAX_ANISOTROPY_EXT ) && ( param > 1 ) )
		QFXRenderer::Instance().SetupAnisotropy();

	param = QFXRenderer::Instance().SetupTextureParameter( target, pname, param );
	gl::qglTexParameterf( target, pname, param );
}

void WINAPI glTexParameteri( GLenum target, GLenum pname, GLint param )
{
	if ( ( pname == GL_TEXTURE_MAX_ANISOTROPY_EXT ) && ( param > 1 ) )
		QFXRenderer::Instance().SetupAnisotropy();

	param = QFXRenderer::Instance().SetupTextureParameter( target, pname, param );
	gl::qglTexParameteri( target, pname, param );
}

void WINAPI glEnable( GLenum cap )
{
	if ( cap == GL_MULTISAMPLE_ARB )
		QFXRenderer::Instance().SetupMultisample();

	gl::qglEnable( cap );
}

int WINAPI wrap_wglChoosePixelFormat( HDC hdc, CONST PIXELFORMATDESCRIPTOR *ppfd )
{ 
	PIXELFORMATDESCRIPTOR newPfd;
	memcpy( &newPfd, ppfd, sizeof( PIXELFORMATDESCRIPTOR ) );
	newPfd.cColorBits = 32;

	gl::CheckInit();
	return gl::wglChoosePixelFormat( hdc, &newPfd );
}

BOOL WINAPI wrap_wglSetPixelFormat( HDC hdc, int i, CONST PIXELFORMATDESCRIPTOR *pfd )
{
	gl::CheckInit();
	return QFXRenderer::Instance().OnSetPixelFormat( hdc, i, pfd );
}

BOOL WINAPI wrap_wglMakeCurrent( HDC hdc, HGLRC hglrc )
{
	gl::CheckInit();
	if (!gl::wglMakeCurrent(hdc, hglrc))
		return FALSE;

	QFXRenderer::Instance().OnMakeCurrent( hdc, hglrc );
	return TRUE;
}

BOOL WINAPI wrap_wglDeleteContext( HGLRC hglrc )
{
	gl::CheckInit();
	QFXRenderer::Instance().OnDeleteContext( hglrc );
	return gl::wglDeleteContext( hglrc );
}

BOOL WINAPI wrap_wglSwapBuffers( HDC hdc )
{
	gl::CheckInit();
	QFXRenderer::Instance().OnSwapBuffers();
	return gl::wglSwapBuffers( hdc );
}
