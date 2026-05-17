#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace jdpc {

struct SceneActorData {
	bool hasPosition = false;
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
	float scaleX = 1.0f;
	float scaleY = 1.0f;
	float scaleZ = 1.0f;
	float yawDegrees = 0.0f;
	float halfSizeX = 12.0f;
	float halfSizeY = 24.0f;
	float halfSizeZ = 12.0f;
	uint32_t kind = 0;
	uint32_t firstModelRef = 0;
	uint32_t modelRefCount = 0;
	uint32_t renderFlags = 0;
	bool isPrimary = false;
};

struct SceneScriptData {
	bool valid = false;
	std::string error;
	uint32_t zoneCols = 0;
	uint32_t zoneRows = 0;
	uint32_t zoneLayers = 0;
	std::vector<SceneActorData> actors;
};

SceneScriptData ParseSceneScriptChunk( const std::vector<uint8_t>& bytes );

} // namespace jdpc

