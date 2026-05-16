#include "asset_scanner.hpp"

#include "asset_formats.hpp"
#include "asset_paths.hpp"
#include "file_system.hpp"

#include <cstdio>
#include <algorithm>
#include <sstream>

namespace jdpc {

std::vector<AssetProbe> ProbeRecoveredAssets()
{
	std::vector<AssetProbe> probes;
	for ( const AssetPath& asset : GetRecoveredAssetPaths() ) {
		AssetProbe probe;
		probe.name = asset.name;
		probe.path = ResolveGameRelativePath( asset.originalPath );

		if ( probe.path.find( '%' ) != std::string::npos ) {
			char formatted[MAX_PATH] = {};
			std::snprintf( formatted, sizeof( formatted ), probe.path.c_str(), 0 );
			probe.path = formatted;
		}

		FileReadResult read = ReadWholeFile( probe.path.c_str() );
		probe.exists = read.ok;
		probe.error = read.error;
		probe.size = static_cast<unsigned int>( read.bytes.size() );
		if ( read.ok ) {
			const std::string lowerPath = probe.path;
			if ( lowerPath.find( ".TIM" ) != std::string::npos || lowerPath.find( ".tim" ) != std::string::npos ) {
				const TimInfo info = ParseTim( read.bytes );
				probe.name += " - " + DescribeTim( info );
			} else if ( lowerPath.find( ".BZE" ) != std::string::npos || lowerPath.find( ".bze" ) != std::string::npos ) {
				const BzeInfo info = ParseBze( read.bytes );
				probe.name += " - " + DescribeBze( info );
			}
		}
		probes.push_back( probe );
	}

	return probes;
}

std::vector<SceneArchiveProbe> ProbeSceneArchives()
{
	std::vector<SceneArchiveProbe> probes;
	std::vector<std::string> paths = ListFiles( "..\\BZE", ".bze" );
	std::sort( paths.begin(), paths.end() );

	for ( const std::string& path : paths ) {
		SceneArchiveProbe probe;
		probe.path = path;

		const FileReadResult read = ReadWholeFile( path.c_str() );
		probe.size = static_cast<unsigned int>( read.bytes.size() );
		if ( read.ok ) {
			const BzeInfo info = ParseBze( read.bytes );
			const BzeCommandSummary commands = AnalyzeBzeCommands( read.bytes );
			probe.valid = info.valid;
			probe.chunks = static_cast<unsigned int>( info.chunks.size() );
			probe.commandWords = commands.valid ? commands.likelyCommandWords : 0;
			probe.description = DescribeBze( info ) + " - " + DescribeBzeCommands( commands );
		} else {
			probe.description = "read failed";
		}
		probes.push_back( probe );
	}

	return probes;
}

std::string FormatAssetProbeSummary( const std::vector<AssetProbe>& probes )
{
	int visible = 0;
	unsigned int totalBytes = 0;
	for ( const AssetProbe& probe : probes ) {
		if ( probe.exists ) {
			++visible;
			totalBytes += probe.size;
		}
	}

	std::ostringstream out;
	out << visible << "/" << probes.size() << " visible, " << totalBytes << " bytes sampled";
	if ( visible != static_cast<int>( probes.size() ) ) {
		out << "\nMissing:";
		for ( const AssetProbe& probe : probes ) {
			if ( !probe.exists )
				out << "\n- " << probe.name << " (" << probe.path << ")";
		}
	}
	return out.str();
}

std::string FormatSceneArchiveSummary( const std::vector<SceneArchiveProbe>& probes )
{
	unsigned int valid = 0;
	unsigned int totalChunks = 0;
	unsigned int totalCommandWords = 0;
	unsigned int totalBytes = 0;
	for ( const SceneArchiveProbe& probe : probes ) {
		if ( probe.valid ) {
			++valid;
			totalChunks += probe.chunks;
			totalCommandWords += probe.commandWords;
			totalBytes += probe.size;
		}
	}

	std::ostringstream out;
	out << valid << "/" << probes.size() << " BZE archives parsed, " << totalChunks << " chunks, "
		<< totalCommandWords << " command-like words, " << totalBytes << " bytes";
	if ( !probes.empty() ) {
		out << "\nFirst archives:";
		const size_t shown = probes.size() < 5 ? probes.size() : 5;
		for ( size_t i = 0; i < shown; ++i )
			out << "\n- " << probes[i].path << " - " << probes[i].description;
	}
	return out.str();
}

} // namespace jdpc
