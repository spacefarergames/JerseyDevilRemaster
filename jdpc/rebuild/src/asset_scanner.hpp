#pragma once

#include <string>
#include <vector>

namespace jdpc {

struct AssetProbe {
	std::string name;
	std::string path;
	bool exists = false;
	unsigned int size = 0;
	unsigned long error = 0;
};

struct SceneArchiveProbe {
	std::string path;
	bool valid = false;
	unsigned int size = 0;
	unsigned int chunks = 0;
	unsigned int commandWords = 0;
	std::string description;
};

std::vector<AssetProbe> ProbeRecoveredAssets();
std::vector<SceneArchiveProbe> ProbeSceneArchives();
std::string FormatAssetProbeSummary( const std::vector<AssetProbe>& probes );
std::string FormatSceneArchiveSummary( const std::vector<SceneArchiveProbe>& probes );

} // namespace jdpc
