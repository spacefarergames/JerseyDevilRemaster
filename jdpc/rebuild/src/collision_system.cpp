#include "collision_system.hpp"

#include <cmath>
#include <algorithm>

namespace jdpc {

// ============================================================================
// CollisionSystem
// ============================================================================

CollisionSystem::CollisionSystem()
	: m_worldMinX( -512.0f )
	, m_worldMaxX( 512.0f )
	, m_worldMinY( -400.0f )
	, m_worldMaxY( 400.0f )
{
}

void CollisionSystem::DetectCollisions( Player* player, std::vector<std::unique_ptr<Actor>>& actors,
	std::vector<CollisionManifold>& outManifolds )
{
	if ( !player || !player->IsAlive() )
		return;

	// Check player vs all other actors
	for ( auto& actor : actors ) {
		if ( !actor->IsAlive() || actor.get() == player )
			continue;

		float dx, dy, dist;
		if ( CheckCircleCollision( *player, *actor, dx, dy, dist ) ) {
			CollisionManifold manifold;
			manifold.actorA = player;
			manifold.actorB = actor.get();
			manifold.contactX = player->GetX() + dx * 0.5f;
			manifold.contactY = player->GetY() + dy * 0.5f;
			manifold.normalX = dx != 0.0f ? dx / dist : 0.0f;
			manifold.normalY = dy != 0.0f ? dy / dist : 0.0f;
			manifold.penetrationDepth = player->GetRadius() + actor->GetRadius() - dist;

			outManifolds.push_back( manifold );

			// Trigger callbacks
			player->OnCollision( *actor );
			actor->OnCollision( *player );
		}
	}

	// Check actor vs actor collisions
	for ( size_t i = 0; i < actors.size(); ++i ) {
		if ( !actors[i]->IsAlive() )
			continue;

		for ( size_t j = i + 1; j < actors.size(); ++j ) {
			if ( !actors[j]->IsAlive() )
				continue;

			float dx, dy, dist;
			if ( CheckCircleCollision( *actors[i], *actors[j], dx, dy, dist ) ) {
				CollisionManifold manifold;
				manifold.actorA = actors[i].get();
				manifold.actorB = actors[j].get();
				manifold.contactX = actors[i]->GetX() + dx * 0.5f;
				manifold.contactY = actors[i]->GetY() + dy * 0.5f;
				manifold.normalX = dx != 0.0f ? dx / dist : 0.0f;
				manifold.normalY = dy != 0.0f ? dy / dist : 0.0f;
				manifold.penetrationDepth = actors[i]->GetRadius() + actors[j]->GetRadius() - dist;

				outManifolds.push_back( manifold );

				// Trigger callbacks
				actors[i]->OnCollision( *actors[j] );
				actors[j]->OnCollision( *actors[i] );
			}
		}
	}
}

void CollisionSystem::ResolveCollisions( const std::vector<CollisionManifold>& manifolds )
{
	for ( const auto& manifold : manifolds ) {
		ApplyImpulse( const_cast<CollisionManifold&>( manifold ) );
	}
}

void CollisionSystem::SetWorldBounds( float minX, float maxX, float minY, float maxY )
{
	m_worldMinX = minX;
	m_worldMaxX = maxX;
	m_worldMinY = minY;
	m_worldMaxY = maxY;
}

void CollisionSystem::UpdateGroundDetection( Player* player, const std::vector<std::unique_ptr<Actor>>& actors )
{
	if ( !player )
		return;

	// Check if player is on ground (near bottom of world)
	const float groundY = m_worldMaxY - 32.0f;  // Platform height
	if ( player->GetY() >= groundY - player->GetRadius() ) {
		player->SetOnGround( true );
		player->SetVelocity( player->GetVelX(), 0.0f );  // Stop falling
	} else {
		player->SetOnGround( false );
	}

	// Same for enemies
	for ( const auto& actor : actors ) {
		if ( actor->GetType() == Actor::Type::Enemy && actor->IsAlive() ) {
			if ( actor->GetY() >= groundY - actor->GetRadius() ) {
				actor->SetOnGround( true );
				actor->SetVelocity( actor->GetVelX(), 0.0f );
			} else {
				actor->SetOnGround( false );
			}
		}
	}
}

bool CollisionSystem::CheckCircleCollision( const Actor& a, const Actor& b,
	float& outDx, float& outDy, float& outDist )
{
	const float dx = b.GetX() - a.GetX();
	const float dy = b.GetY() - a.GetY();
	const float distSq = dx * dx + dy * dy;
	const float minDist = a.GetRadius() + b.GetRadius();

	if ( distSq >= minDist * minDist )
		return false;

	outDist = std::sqrt( distSq );
	if ( outDist < 0.001f )
		outDist = 0.001f;

	outDx = dx;
	outDy = dy;

	return true;
}

void CollisionSystem::ApplyImpulse( CollisionManifold& manifold )
{
	// Simple separating velocity impulse
	if ( !manifold.actorA || !manifold.actorB )
		return;

	// For now, just separate overlapping objects
	const float separation = manifold.penetrationDepth * 0.5f + 0.001f;
	if ( separation > 0.0f ) {
		manifold.actorA->SetPosition(
			manifold.actorA->GetX() - manifold.normalX * separation,
			manifold.actorA->GetY() - manifold.normalY * separation
		);
		manifold.actorB->SetPosition(
			manifold.actorB->GetX() + manifold.normalX * separation,
			manifold.actorB->GetY() + manifold.normalY * separation
		);
	}
}

// ============================================================================
// GravityConstraint
// ============================================================================

GravityConstraint::GravityConstraint( float gravity )
	: m_gravity( gravity )
{
}

void GravityConstraint::Apply( Actor& actor, float deltaTime )
{
	if ( !actor.IsOnGround() ) {
		actor.SetVelocity( actor.GetVelX(), actor.GetVelY() + m_gravity * deltaTime );
	}
}

// ============================================================================
// FrictionConstraint
// ============================================================================

FrictionConstraint::FrictionConstraint( float friction )
	: m_friction( friction )
{
}

void FrictionConstraint::Apply( Actor& actor, float deltaTime )
{
	if ( actor.IsOnGround() ) {
		// Reduce horizontal velocity due to friction
		float velX = actor.GetVelX() * m_friction;
		actor.SetVelocity( velX, actor.GetVelY() );
	}
}

// ============================================================================
// DragConstraint
// ============================================================================

DragConstraint::DragConstraint( float dragCoeff )
	: m_dragCoeff( dragCoeff )
{
}

void DragConstraint::Apply( Actor& actor, float deltaTime )
{
	// Apply air drag/resistance
	float velX = actor.GetVelX();
	float velY = actor.GetVelY();

	velX *= ( 1.0f - m_dragCoeff * deltaTime );
	velY *= ( 1.0f - m_dragCoeff * deltaTime );

	actor.SetVelocity( velX, velY );
}

} // namespace jdpc
