#pragma once

#include <string>

namespace jdpc {

enum class RendererMode {
	SoftPal,
	SoftRgb,
	OpenGL
};

struct CommandLineOptions {
	RendererMode renderer = RendererMode::OpenGL;
	bool fullscreen = true;
	bool sync = true;
	bool frameSkip = true;
	bool skipIntro = false;
	bool console = false;
	bool fontPreview = false;
	int width = 640;
	int height = 480;
	std::string openglDll = "opengl32.dll";
	std::string palettePath;
};

CommandLineOptions ParseCommandLine( const char* commandLine );
const char* RendererModeName( RendererMode mode );

} // namespace jdpc
