#pragma once

#include <string>
#include <vector>

namespace jdpc {

struct AssetPath {
	const char* name;
	const char* originalPath;
};

const std::vector<AssetPath>& GetRecoveredAssetPaths();
std::string ResolveGameRelativePath( const char* originalPath );
bool AssetExists( const char* originalPath );

} // namespace jdpc
