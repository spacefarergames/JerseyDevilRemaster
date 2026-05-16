#pragma once

#include <string>
#include <vector>

namespace jdpc {

bool RunRecoveredOpenGLWindow(
	const std::string& title,
	int width,
	int height,
	const std::string& statusText,
	const std::string& previewTimPath,
	const std::vector<unsigned int>& sceneChunkSizes
);

} // namespace jdpc
