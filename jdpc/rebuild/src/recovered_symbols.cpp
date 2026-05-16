#include "recovered_symbols.hpp"

#include "asset_paths.hpp"
#include "asset_scanner.hpp"
#include "command_line.hpp"
#include "opengl_loader.hpp"

#include <cstdio>
#include <string>

namespace jdpc {

const OriginalImageInfo& GetOriginalImageInfo()
{
	static const OriginalImageInfo info = {
		0x00400000,
		0x00446390,
		0x00001000,
		0x0004FD40,
		0x00052000,
		0x005C3E4C
	};
	return info;
}

void ShowRebuildStatus( HINSTANCE )
{
	const OriginalImageInfo& info = GetOriginalImageInfo();
	const CommandLineOptions options = ParseCommandLine( GetCommandLineA() );
	const OpenGLLoadResult gl = ProbeOpenGLExports( options.openglDll.c_str() );
	const std::vector<AssetProbe> probes = ProbeRecoveredAssets();
	const std::string probeSummary = FormatAssetProbeSummary( probes );

	char message[2048];
	std::snprintf(
		message,
		sizeof( message ),
		"JDPC rebuild scaffold compiled successfully.\n\n"
		"Recovered startup slice:\n"
		"- command-line renderer: %s\n"
		"- fullscreen: %s\n"
		"- OpenGL DLL: %s (%s, %i/%i key exports)\n"
		"- recovered asset probes: %s\n\n"
		"Original image base: 0x%08lX\n"
		"Original entry point: 0x%08lX\n"
		"Recovered pseudocode: ..\\decompiled\\index.tsv",
		RendererModeName( options.renderer ),
		options.fullscreen ? "yes" : "no",
		gl.dllName.c_str(),
		gl.loaded ? "loaded" : "missing",
		gl.resolvedExports,
		10,
		probeSummary.c_str(),
		info.imageBase,
		info.entryPoint
	);

	MessageBoxA( nullptr, message, "Jersey Devil PC Rebuild", MB_OK | MB_ICONINFORMATION );
}

} // namespace jdpc
