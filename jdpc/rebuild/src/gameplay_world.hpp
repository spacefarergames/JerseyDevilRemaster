#pragma once

#include "scene_database.hpp"

#include <vector>

namespace jdpc {

struct WorldEntity {
	float x = 0.0f;
	float y = 0.0f;
	float radius = 8.0f;
	bool collectible = true;
	bool alive = true;
};

struct WorldState {
	float minX = -512.0f;
	float maxX = 512.0f;
	float minY = -512.0f;
	float maxY = 512.0f;
	std::vector<WorldEntity> entities;
};

WorldState BuildWorldFromLevel( const SceneLevelInfo& level );

} // namespace jdpc
