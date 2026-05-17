#pragma once

#include "bze_scene_parser.hpp"

#include <string>
#include <vector>

namespace jdpc {

struct SceneLevelInfo {
	std::string name;
	std::string path;
	std::string previewTimPath;
	std::string commandChunkPath;
	std::vector<unsigned int> chunkSizes;
	unsigned int timChunks = 0;
	SceneScriptData sceneScript;
};

struct SceneDatabase {
	bool ok = false;
	std::string sourceRoot;
	std::vector<SceneLevelInfo> levels;
	std::string error;
};

SceneDatabase LoadSceneDatabase();

} // namespace jdpc
