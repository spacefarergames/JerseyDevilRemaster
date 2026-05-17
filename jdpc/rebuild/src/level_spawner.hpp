#pragma once

#include "game_entities.hpp"
#include "scene_database.hpp"

#include <vector>
#include <memory>

namespace jdpc {

// Level spawner manages entity creation based on level data
class LevelSpawner {
public:
	struct SpawnPoint {
		float x, y;
		Actor::Type entityType;
		int variant;  // For different enemy types, collectible types, etc.
	};

	LevelSpawner( const SceneLevelInfo& level );

	// Spawn all entities for this level
	void SpawnActors( std::vector<std::unique_ptr<Actor>>& outActors, Player* playerRef );

	int GetCollectibleCount() const { return m_collectibleCount; }
	int GetEnemyCount() const { return m_enemyCount; }

private:
	const SceneLevelInfo& m_level;
	std::vector<SpawnPoint> m_spawnPoints;
	int m_collectibleCount;
	int m_enemyCount;

	void GenerateSpawnPoints();
	void CreateCollectible( std::vector<std::unique_ptr<Actor>>& outActors, const SpawnPoint& point );
	void CreateEnemy( std::vector<std::unique_ptr<Actor>>& outActors, Player* playerRef, const SpawnPoint& point );
	void CreateObstacle( std::vector<std::unique_ptr<Actor>>& outActors, const SpawnPoint& point );
};

} // namespace jdpc
