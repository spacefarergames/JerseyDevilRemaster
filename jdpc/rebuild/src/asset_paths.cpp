#include "asset_paths.hpp"

#include "file_system.hpp"

#include <cstdio>

namespace jdpc {
namespace {

} // namespace

const std::vector<AssetPath>& GetRecoveredAssetPaths()
{
	static const std::vector<AssetPath> paths = {
		{ "font_tim", "..\\data\\font%03i.tim" },
		{ "title_tim", "..\\data\\TITLE%d.TIM" },
		{ "title_back_tim", "..\\data\\TITLEBACK.TIM" },
		{ "game_over_tim", "..\\data\\GAMEOVER.TIM" },
		{ "credits", "..\\data\\credit.txt" },
		{ "default_bmp", "..\\data\\default.bmp" },
		{ "menu_music_1", "..\\data\\MENU1.aif" },
		{ "menu_music_2", "..\\data\\MENU2.aif" },
		{ "title_bze", "..\\BZE\\TITLE.BZE" }
	};

	return paths;
}

std::string ResolveGameRelativePath( const char* originalPath )
{
	return ResolveExistingGamePath( originalPath );
}

bool AssetExists( const char* originalPath )
{
	std::string probe = ResolveGameRelativePath( originalPath );
	if ( probe.find( '%' ) != std::string::npos ) {
		char formatted[MAX_PATH] = {};
		std::snprintf( formatted, sizeof( formatted ), probe.c_str(), 0 );
		probe = formatted;
	}

	return FileExists( probe.c_str() );
}

} // namespace jdpc
