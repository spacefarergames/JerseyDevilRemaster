#include "level_spawner.hpp"

#include <cmath>

namespace jdpc {

LevelSpawner::LevelSpawner( const SceneLevelInfo& level )
	: m_level( level )
	, m_collectibleCount( 0 )
	, m_enemyCount( 0 )
{
	GenerateSpawnPoints();
}

void LevelSpawner::GenerateSpawnPoints()
{
	m_spawnPoints.clear();
	m_collectibleCount = 0;
	m_enemyCount = 0;

	if ( m_level.chunkSizes.empty() )
		return;

	// Use chunk data to procedurally generate spawn points
	const unsigned int chunkCount = static_cast<unsigned int>( m_level.chunkSizes.size() );
	const float levelWidth = 640.0f + static_cast<float>( chunkCount ) * 20.0f;
	const float levelHeight = 480.0f;

	for ( unsigned int i = 0; i < chunkCount && i < 96; ++i ) {
		const unsigned int chunkSize = m_level.chunkSizes[i];

		// Hash the chunk data to get deterministic but varied spawn characteristics
		const unsigned int hash1 = chunkSize * 2654435761U;
		const unsigned int hash2 = ( chunkSize / 7 ) * 1315423911U;

		// Position
		const float tx = static_cast<float>( hash1 & 0xffff ) / 65536.0f;
		const float ty = static_cast<float>( hash2 & 0xff ) / 256.0f;
		SpawnPoint sp;
		sp.x = -levelWidth * 0.5f + tx * levelWidth;
		sp.y = -levelHeight * 0.35f + ty * levelHeight * 0.7f;

		// Determine entity type based on chunk characteristics
		const unsigned int typeHash = ( hash1 ^ hash2 ) & 0xff;

		if ( typeHash < 160 ) {
			// 160/256 = 62.5% collectibles
			sp.entityType = Actor::Type::Collectible;
			sp.variant = typeHash % 3;  // Gem, Star, PowerUp
			++m_collectibleCount;
		} else if ( typeHash < 200 ) {
			// 40/256 = 15.6% enemies
			sp.entityType = Actor::Type::Enemy;
			sp.variant = typeHash % 2;  // Different patrol patterns
			++m_enemyCount;
		} else if ( typeHash < 230 ) {
			// 30/256 = 11.7% obstacles
			sp.entityType = Actor::Type::Obstacle;
			sp.variant = 0;
		} else {
			// 26/256 = 10.2% decorations (ignored for now)
			sp.entityType = Actor::Type::Decoration;
			sp.variant = 0;
		}

		if ( sp.entityType != Actor::Type::Decoration ) {
			m_spawnPoints.push_back( sp );
		}
	}
}

void LevelSpawner::SpawnActors( std::vector<std::unique_ptr<Actor>>& outActors, Player* playerRef )
{
	for ( const SpawnPoint& sp : m_spawnPoints ) {
		switch ( sp.entityType ) {
		case Actor::Type::Collectible:
			CreateCollectible( outActors, sp );
			break;
		case Actor::Type::Enemy:
			CreateEnemy( outActors, playerRef, sp );
			break;
		case Actor::Type::Obstacle:
			CreateObstacle( outActors, sp );
			break;
		default:
			break;
		}
	}
}

void LevelSpawner::CreateCollectible( std::vector<std::unique_ptr<Actor>>& outActors, const SpawnPoint& point )
{
	Collectible::ItemType itemType = Collectible::ItemType::Gem;
	switch ( point.variant ) {
	case 0:
		itemType = Collectible::ItemType::Gem;
		break;
	case 1:
		itemType = Collectible::ItemType::Star;
		break;
	case 2:
		itemType = Collectible::ItemType::PowerUp;
		break;
	}

	auto collectible = std::make_unique<Collectible>( itemType );
	collectible->SetPosition( point.x, point.y );
	collectible->SetBobOffset( point.x * 0.1f );
	outActors.push_back( std::move( collectible ) );
}

void LevelSpawner::CreateEnemy( std::vector<std::unique_ptr<Actor>>& outActors, Player* playerRef, const SpawnPoint& point )
{
	Enemy::AIType aiType = Enemy::AIType::Patrol;
	switch ( point.variant ) {
	case 0:
		aiType = Enemy::AIType::Patrol;
		break;
	case 1:
		aiType = Enemy::AIType::Hover;
		break;
	}

	auto enemy = std::make_unique<Enemy>( aiType );
	enemy->SetPosition( point.x, point.y );

	// Set patrol range around spawn point
	const float patrolRange = 120.0f;
	enemy->SetPatrolRange( point.x - patrolRange, point.x + patrolRange );

	// Set target player for AI
	if ( playerRef ) {
		enemy->SetTargetPlayer( playerRef );
	}

	outActors.push_back( std::move( enemy ) );
}

void LevelSpawner::CreateObstacle( std::vector<std::unique_ptr<Actor>>& outActors, const SpawnPoint& point )
{
	auto obstacle = std::make_unique<Obstacle>();
	obstacle->SetPosition( point.x, point.y );
	obstacle->SetDamage( 1 );
	outActors.push_back( std::move( obstacle ) );
}

} // namespace jdpc
