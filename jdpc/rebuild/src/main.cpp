#include "recovered_symbols.hpp"
#include "asset_paths.hpp"
#include "asset_formats.hpp"
#include "asset_scanner.hpp"
#include "command_line.hpp"
#include "file_system.hpp"
#include "opengl_loader.hpp"
#include "render_window.hpp"
#include "scene_database.hpp"

#include <windows.h>
#include <cstdio>
#include <vector>
#include <string>

namespace {

bool HasSwitch( const char* commandLine, const char* option )
{
	if ( !commandLine || !option )
		return false;
	return strstr( commandLine, option ) != nullptr;
}

bool EnsureDirectoryPath( const std::string& path )
{
	if ( path.empty() )
		return false;

	std::string current;
	for ( size_t i = 0; i < path.size(); ++i ) {
		current.push_back( path[i] );
		if ( path[i] == '\\' || path[i] == '/' ) {
			if ( current.size() > 1 && current.back() == '\\' && current[current.size() - 2] == ':' )
				continue;
			::CreateDirectoryA( current.c_str(), nullptr );
		}
	}
	return ::CreateDirectoryA( path.c_str(), nullptr ) || GetLastError() == ERROR_ALREADY_EXISTS;
}

std::string GetFileStem( const std::string& path )
{
	size_t slash = path.find_last_of( "\\/" );
	size_t start = ( slash == std::string::npos ) ? 0 : slash + 1;
	size_t dot = path.find_last_of( '.' );
	if ( dot == std::string::npos || dot < start )
		dot = path.size();
	return path.substr( start, dot - start );
}

std::string GuessChunkExtension( const std::vector<uint8_t>& bytes )
{
	if ( bytes.size() >= 8 ) {
		const uint32_t magic = static_cast<uint32_t>( bytes[0] ) |
			( static_cast<uint32_t>( bytes[1] ) << 8 ) |
			( static_cast<uint32_t>( bytes[2] ) << 16 ) |
			( static_cast<uint32_t>( bytes[3] ) << 24 );
		if ( magic == 0x00000010 )
			return ".tim";
	}
	if ( bytes.size() >= 2 && bytes[0] == 'B' && bytes[1] == 'M' )
		return ".bmp";
	if ( bytes.size() >= 4 && bytes[0] == 'R' && bytes[1] == 'I' && bytes[2] == 'F' && bytes[3] == 'F' )
		return ".wav";
	if ( bytes.size() >= 4 && bytes[0] == 'F' && bytes[1] == 'O' && bytes[2] == 'R' && bytes[3] == 'M' )
		return ".aif";
	if ( bytes.size() >= 2 && bytes[0] == 0x78 && ( bytes[1] == 0x01 || bytes[1] == 0x9c || bytes[1] == 0xda ) )
		return ".zlib";
	return ".bin";
}

int ExtractAllBzeArchives()
{
	const char* bzeRoots[] = {
		"..\\BZE",
		"F:\\Spacefarer Bakery Retro Remasters Releases\\Jersey Native\\BZE"
	};

	std::string activeBzeRoot;
	std::vector<std::string> archives;
	for ( const char* root : bzeRoots ) {
		archives = jdpc::ListFiles( root, ".bze" );
		if ( !archives.empty() ) {
			activeBzeRoot = jdpc::ResolveExistingGamePath( root );
			break;
		}
	}

	const std::string outRoot = jdpc::ResolveExistingGamePath( "..\\BZE_UNPACKED" );
	if ( !EnsureDirectoryPath( outRoot ) )
		return 3;

	if ( archives.empty() ) {
		const std::string report = "error=no_bze_archives_found\r\n";
		jdpc::WriteWholeFile( ( outRoot + "\\extract_report.txt" ).c_str(), std::vector<uint8_t>( report.begin(), report.end() ) );
		return 2;
	}

	unsigned int okArchives = 0;
	unsigned int failedArchives = 0;
	unsigned int writtenChunks = 0;

	for ( const std::string& archivePath : archives ) {
		const jdpc::FileReadResult read = jdpc::ReadWholeFile( archivePath.c_str() );
		if ( !read.ok ) {
			++failedArchives;
			continue;
		}

		const jdpc::BzeInfo info = jdpc::ParseBze( read.bytes );
		if ( !info.valid ) {
			++failedArchives;
			continue;
		}

		const std::string stem = GetFileStem( archivePath );
		const std::string archiveOut = outRoot + "\\" + stem;
		EnsureDirectoryPath( archiveOut );

		std::string manifest = "chunk,declared_size,read_size,offset,extension,path\r\n";
		for ( size_t i = 0; i < info.chunks.size(); ++i ) {
			const jdpc::BzeChunk& chunk = info.chunks[i];
			const std::vector<uint8_t> chunkBytes(
				read.bytes.begin() + chunk.offset,
				read.bytes.begin() + chunk.offset + chunk.size
			);
			const std::string ext = GuessChunkExtension( chunkBytes );

			char chunkName[64] = {};
			std::snprintf( chunkName, sizeof( chunkName ), "chunk_%03u%s", static_cast<unsigned int>( i ), ext.c_str() );
			const std::string outPath = archiveOut + "\\" + chunkName;
			if ( jdpc::WriteWholeFile( outPath.c_str(), chunkBytes ) )
				++writtenChunks;

			char line[512] = {};
			std::snprintf(
				line,
				sizeof( line ),
				"%u,%u,%u,%u,%s,%s\r\n",
				static_cast<unsigned int>( i ),
				chunk.declaredSize,
				chunk.size,
				chunk.offset,
				ext.c_str(),
				chunkName
			);
			manifest += line;
		}

		std::vector<uint8_t> manifestBytes( manifest.begin(), manifest.end() );
		jdpc::WriteWholeFile( ( archiveOut + "\\manifest.csv" ).c_str(), manifestBytes );
		++okArchives;
	}

	char summary[1024] = {};
	std::snprintf(
		summary,
		sizeof( summary ),
		"archives_ok=%u\r\narchives_failed=%u\r\nchunks_written=%u\r\nsource=%s\r\noutput=%s\r\n",
		okArchives,
		failedArchives,
		writtenChunks,
		activeBzeRoot.c_str(),
		outRoot.c_str()
	);
	const std::vector<uint8_t> reportBytes( summary, summary + strlen( summary ) );
	jdpc::WriteWholeFile( ( outRoot + "\\extract_report.txt" ).c_str(), reportBytes );
	return failedArchives == 0 ? 0 : 4;
}

} // namespace

int WINAPI WinMain( HINSTANCE instance, HINSTANCE, LPSTR, int )
{
	const char* rawCommandLine = GetCommandLineA();
	if ( HasSwitch( rawCommandLine, "/extract_bze" ) || HasSwitch( rawCommandLine, "-extract_bze" ) )
		return ExtractAllBzeArchives();

	const jdpc::CommandLineOptions options = jdpc::ParseCommandLine( GetCommandLineA() );
	const jdpc::OpenGLLoadResult gl = jdpc::ProbeOpenGLExports( options.openglDll.c_str() );
	const std::vector<jdpc::AssetProbe> probes = jdpc::ProbeRecoveredAssets();
	const std::vector<jdpc::SceneArchiveProbe> sceneArchives = jdpc::ProbeSceneArchives();
	const jdpc::SceneDatabase sceneDb = jdpc::LoadSceneDatabase();
	const std::string probeSummary = jdpc::FormatAssetProbeSummary( probes );
	const std::string sceneSummary = jdpc::FormatSceneArchiveSummary( sceneArchives );

	char status[4096];
	std::snprintf(
		status,
		sizeof( status ),
		"Renderer: %s\nFullscreen: %s\nOpenGL DLL: %s (%s, %i/%i key exports)\nAssets: %s\nScenes: %s\nSceneDB: %s (%u levels)",
		jdpc::RendererModeName( options.renderer ),
		options.fullscreen ? "yes" : "no",
		gl.dllName.c_str(),
		gl.loaded ? "loaded" : "missing",
		gl.resolvedExports,
		10,
		probeSummary.c_str(),
		sceneSummary.c_str(),
		sceneDb.ok ? "loaded" : "failed",
		static_cast<unsigned int>( sceneDb.levels.size() )
	);

	const std::string previewTimPath = jdpc::ResolveGameRelativePath( "..\\data\\titleback.tim" );
	if ( !jdpc::RunRecoveredOpenGLWindow( "Jersey Devil PC Rebuild", options.width, options.height, status, previewTimPath, sceneDb.levels ) )
		jdpc::ShowRebuildStatus( instance );
	return 0;
}
