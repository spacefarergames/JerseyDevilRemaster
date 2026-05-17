#include "scene_database.hpp"

#include "asset_formats.hpp"
#include "file_system.hpp"

#include <algorithm>

namespace jdpc {
namespace {

std::string GetFileStem( const std::string& path )
{
	size_t slash = path.find_last_of( "\\/" );
	size_t start = ( slash == std::string::npos ) ? 0 : slash + 1;
	size_t dot = path.find_last_of( '.' );
	if ( dot == std::string::npos || dot < start )
		dot = path.size();
	return path.substr( start, dot - start );
}

} // namespace

SceneDatabase LoadSceneDatabase()
{
	SceneDatabase db;
	const char* roots[] = {
		"..\\BZE",
		"F:\\Spacefarer Bakery Retro Remasters Releases\\Jersey Native\\BZE"
	};
	const char* extractedRoots[] = {
		"..\\bze_extracted",
		"F:\\Spacefarer Bakery Retro Remasters Releases\\Jersey Native\\bze_extracted"
	};

	std::vector<std::string> archives;
	for ( const char* root : roots ) {
		archives = ListFiles( root, ".bze" );
		if ( !archives.empty() ) {
			db.sourceRoot = ResolveExistingGamePath( root );
			break;
		}
	}

	if ( archives.empty() ) {
		db.error = "No BZE archives found";
		return db;
	}

	std::sort( archives.begin(), archives.end() );
	for ( const std::string& archivePath : archives ) {
		const FileReadResult read = ReadWholeFile( archivePath.c_str() );
		if ( !read.ok )
			continue;

		const BzeInfo info = ParseBze( read.bytes );
		if ( !info.valid )
			continue;

		SceneLevelInfo level;
		level.name = GetFileStem( archivePath );
		level.path = archivePath;
		for ( const BzeChunk& chunk : info.chunks ) {
			level.chunkSizes.push_back( chunk.size );
			if ( chunk.offset + 4 <= read.bytes.size() &&
				read.bytes[chunk.offset] == 0x10 &&
				read.bytes[chunk.offset + 1] == 0x00 &&
				read.bytes[chunk.offset + 2] == 0x00 &&
				read.bytes[chunk.offset + 3] == 0x00 ) {
				++level.timChunks;
			}
		}

		for ( const char* extractedRoot : extractedRoots ) {
			const std::string base = ResolveExistingGamePath( extractedRoot );
			const std::string levelDir = base + "\\" + level.name;
			if ( !DirectoryExists( levelDir.c_str() ) )
				continue;

			std::vector<std::string> tims = ListFiles( levelDir.c_str(), ".tim" );
			std::sort( tims.begin(), tims.end() );
			if ( !tims.empty() ) {
				level.previewTimPath = tims.front();
			}

			const std::string commandChunkPath = levelDir + "\\chunk_000.bin";
			const FileReadResult commandRead = ReadWholeFile( commandChunkPath.c_str() );
			if ( commandRead.ok ) {
				level.commandChunkPath = commandRead.path;
				level.sceneScript = ParseSceneScriptChunk( commandRead.bytes );
			}
			break;
		}
		db.levels.push_back( level );
	}

	if ( db.levels.empty() ) {
		db.error = "BZE archives were found but none parsed successfully";
		return db;
	}

	db.ok = true;
	return db;
}

} // namespace jdpc
