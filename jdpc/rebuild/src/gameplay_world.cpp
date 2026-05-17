#include "gameplay_world.hpp"

#include <algorithm>

namespace jdpc {

WorldState BuildWorldFromLevel( const SceneLevelInfo& level )
{
	WorldState world;
	if ( level.chunkSizes.empty() )
		return world;

	const float spanBase = 320.0f + static_cast<float>( level.chunkSizes.size() ) * 18.0f;
	world.minX = -spanBase;
	world.maxX = spanBase;
	world.minY = -spanBase * 0.75f;
	world.maxY = spanBase * 0.75f;

	const unsigned int entityBudget = static_cast<unsigned int>( std::min<size_t>( level.chunkSizes.size(), 96 ) );
	for ( unsigned int i = 0; i < entityBudget; ++i ) {
		const unsigned int chunkSize = level.chunkSizes[i];
		WorldEntity entity;
		const float tx = static_cast<float>( ( chunkSize % 2048 ) ) / 2048.0f;
		const float ty = static_cast<float>( ( ( chunkSize / 7 ) % 2048 ) ) / 2048.0f;
		entity.x = world.minX + tx * ( world.maxX - world.minX );
		entity.y = world.minY + ty * ( world.maxY - world.minY );
		entity.radius = 4.0f + static_cast<float>( chunkSize % 12 );
		entity.collectible = ( ( chunkSize / 32 ) % 5 ) != 0;
		entity.alive = true;
		world.entities.push_back( entity );
	}

	return world;
}

} // namespace jdpc
