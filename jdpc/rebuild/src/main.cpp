#include "recovered_symbols.hpp"
#include "asset_paths.hpp"
#include "asset_formats.hpp"
#include "asset_scanner.hpp"
#include "command_line.hpp"
#include "file_system.hpp"
#include "opengl_loader.hpp"
#include "render_window.hpp"

#include <windows.h>
#include <cstdio>
#include <vector>

namespace {

std::vector<unsigned int> LoadSceneChunkSizes()
{
	const jdpc::FileReadResult read = jdpc::ReadWholeFile( "..\\BZE\\level1a1.bze" );
	const jdpc::BzeInfo info = jdpc::ParseBze( read.bytes );
	std::vector<unsigned int> sizes;
	if ( !info.valid )
		return sizes;

	for ( const jdpc::BzeChunk& chunk : info.chunks )
		sizes.push_back( chunk.size );
	return sizes;
}

} // namespace

int WINAPI WinMain( HINSTANCE instance, HINSTANCE, LPSTR, int )
{
	const jdpc::CommandLineOptions options = jdpc::ParseCommandLine( GetCommandLineA() );
	const jdpc::OpenGLLoadResult gl = jdpc::ProbeOpenGLExports( options.openglDll.c_str() );
	const std::vector<jdpc::AssetProbe> probes = jdpc::ProbeRecoveredAssets();
	const std::vector<jdpc::SceneArchiveProbe> sceneArchives = jdpc::ProbeSceneArchives();
	const std::string probeSummary = jdpc::FormatAssetProbeSummary( probes );
	const std::string sceneSummary = jdpc::FormatSceneArchiveSummary( sceneArchives );
	const std::vector<unsigned int> sceneChunkSizes = LoadSceneChunkSizes();

	char status[4096];
	std::snprintf(
		status,
		sizeof( status ),
		"Renderer: %s\nFullscreen: %s\nOpenGL DLL: %s (%s, %i/%i key exports)\nAssets: %s\nScenes: %s",
		jdpc::RendererModeName( options.renderer ),
		options.fullscreen ? "yes" : "no",
		gl.dllName.c_str(),
		gl.loaded ? "loaded" : "missing",
		gl.resolvedExports,
		10,
		probeSummary.c_str(),
		sceneSummary.c_str()
	);

	const std::string previewTimPath = jdpc::ResolveGameRelativePath( "..\\data\\titleback.tim" );
	if ( !jdpc::RunRecoveredOpenGLWindow( "Jersey Devil PC Rebuild", options.width, options.height, status, previewTimPath, sceneChunkSizes ) )
		jdpc::ShowRebuildStatus( instance );
	return 0;
}
