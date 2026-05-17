#pragma once

#include "game_entities.hpp"

#include <vector>
#include <memory>

namespace jdpc {

// Collision detection and response system
class CollisionSystem {
public:
	struct CollisionManifold {
		Actor* actorA;
		Actor* actorB;
		float penetrationDepth;
		float contactX, contactY;  // Contact point
		float normalX, normalY;    // Collision normal
	};

	CollisionSystem();

	// Detect all collisions
	void DetectCollisions( Player* player, std::vector<std::unique_ptr<Actor>>& actors,
		std::vector<CollisionManifold>& outManifolds );

	// Resolve collisions
	void ResolveCollisions( const std::vector<CollisionManifold>& manifolds );

	// Set world boundaries for ground detection
	void SetWorldBounds( float minX, float maxX, float minY, float maxY );

	// Update ground detection for all actors
	void UpdateGroundDetection( Player* player, const std::vector<std::unique_ptr<Actor>>& actors );

private:
	float m_worldMinX, m_worldMaxX;
	float m_worldMinY, m_worldMaxY;

	bool CheckCircleCollision( const Actor& a, const Actor& b,
		float& outDx, float& outDy, float& outDist );

	void ApplyImpulse( CollisionManifold& manifold );
};

// Simple physics constraint solver
class PhysicsConstraint {
public:
	virtual ~PhysicsConstraint() = default;
	virtual void Apply( Actor& actor, float deltaTime ) = 0;
};

// Gravity constraint
class GravityConstraint : public PhysicsConstraint {
public:
	GravityConstraint( float gravity = 520.0f );
	void Apply( Actor& actor, float deltaTime ) override;

private:
	float m_gravity;
};

// Friction constraint
class FrictionConstraint : public PhysicsConstraint {
public:
	FrictionConstraint( float friction = 0.95f );
	void Apply( Actor& actor, float deltaTime ) override;

private:
	float m_friction;
};

// Drag constraint (air resistance)
class DragConstraint : public PhysicsConstraint {
public:
	DragConstraint( float dragCoeff = 0.05f );
	void Apply( Actor& actor, float deltaTime ) override;

private:
	float m_dragCoeff;
};

} // namespace jdpc
