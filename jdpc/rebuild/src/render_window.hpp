#pragma once

#include "scene_database.hpp"

#include <string>
#include <vector>

namespace jdpc {

bool RunRecoveredOpenGLWindow(
	const std::string& title,
	int width,
	int height,
	const std::string& statusText,
	const std::string& previewTimPath,
	const std::vector<SceneLevelInfo>& levels
);

} // namespace jdpc
