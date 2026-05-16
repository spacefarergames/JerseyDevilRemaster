#include "opengl_loader.hpp"

#include <windows.h>

namespace jdpc {

OpenGLLoadResult ProbeOpenGLExports( const char* dllName )
{
	static const char* exports[] = {
		"glViewport",
		"glOrtho",
		"glFrustum",
		"glTexImage2D",
		"glBindTexture",
		"glVertex2f",
		"glTexCoord2f",
		"wglCreateContext",
		"wglMakeCurrent",
		"wglGetProcAddress"
	};

	OpenGLLoadResult result;
	result.dllName = ( dllName && *dllName ) ? dllName : "opengl32.dll";

	HMODULE module = LoadLibraryA( result.dllName.c_str() );
	if ( !module ) {
		result.error = GetLastError();
		return result;
	}

	result.loaded = true;
	for ( const char* exportName : exports ) {
		if ( GetProcAddress( module, exportName ) )
			++result.resolvedExports;
	}

	FreeLibrary( module );
	return result;
}

} // namespace jdpc
