#pragma once

#include <windows.h>

namespace jdpc {

enum class GameMode {
	Boot,
	Title,
	Gameplay
};

struct GameInput {
	bool moveLeft = false;
	bool moveRight = false;
	bool moveUp = false;
	bool moveDown = false;
	bool action = false;
	bool pause = false;
	bool quit = false;
};

struct GameRuntimeSnapshot {
	float playerX = 0.0f;
	float playerY = 0.0f;
	float cameraX = 0.0f;
	float cameraY = 0.0f;
	unsigned int frameNumber = 0;
	unsigned int updateNumber = 0;
	GameMode mode = GameMode::Boot;
	bool paused = false;
};

class GameRuntime {
public:
	GameRuntime();

	void Reset();
	void BeginFrame( DWORD nowMilliseconds, const GameInput& input );
	bool ConsumeFixedUpdate();
	void EndFrame();

	const GameRuntimeSnapshot& Snapshot() const;
	float Alpha() const;

private:
	void FixedUpdate( const GameInput& input );

	GameRuntimeSnapshot m_snapshot;
	GameInput m_pendingInput;
	DWORD m_lastTick;
	float m_accumulator;
	float m_alpha;
};

GameInput PollGameInput();

} // namespace jdpc
