#include "game_runtime.hpp"

namespace jdpc {
namespace {

constexpr float kFixedStepSeconds = 1.0f / 30.0f;
constexpr float kMaxFrameSeconds = 0.25f;
constexpr float kPlayerSpeed = 180.0f;
constexpr int kMaxUpdatesPerFrame = 5;

bool KeyDown( int key )
{
	return ( GetAsyncKeyState( key ) & 0x8000 ) != 0;
}

} // namespace

GameRuntime::GameRuntime()
{
	Reset();
}

void GameRuntime::Reset()
{
	m_snapshot = GameRuntimeSnapshot();
	m_pendingInput = GameInput();
	m_lastTick = 0;
	m_accumulator = 0.0f;
	m_alpha = 0.0f;
}

void GameRuntime::BeginFrame( DWORD nowMilliseconds, const GameInput& input )
{
	if ( m_lastTick == 0 )
		m_lastTick = nowMilliseconds;

	float deltaSeconds = static_cast<float>( nowMilliseconds - m_lastTick ) / 1000.0f;
	if ( deltaSeconds > kMaxFrameSeconds )
		deltaSeconds = kMaxFrameSeconds;

	m_lastTick = nowMilliseconds;
	m_accumulator += deltaSeconds;
	m_pendingInput = input;

	if ( input.pause )
		m_snapshot.paused = !m_snapshot.paused;
}

bool GameRuntime::ConsumeFixedUpdate()
{
	if ( m_snapshot.paused ) {
		m_accumulator = 0.0f;
		return false;
	}

	if ( m_accumulator < kFixedStepSeconds )
		return false;

	int updatesThisFrame = 0;
	while ( m_accumulator >= kFixedStepSeconds && updatesThisFrame < kMaxUpdatesPerFrame ) {
		FixedUpdate( m_pendingInput );
		m_accumulator -= kFixedStepSeconds;
		++updatesThisFrame;
	}

	if ( updatesThisFrame == kMaxUpdatesPerFrame && m_accumulator >= kFixedStepSeconds )
		m_accumulator = 0.0f;

	return updatesThisFrame > 0;
}

void GameRuntime::EndFrame()
{
	m_alpha = m_accumulator / kFixedStepSeconds;
	if ( m_alpha < 0.0f )
		m_alpha = 0.0f;
	if ( m_alpha > 1.0f )
		m_alpha = 1.0f;
	++m_snapshot.frameNumber;
}

const GameRuntimeSnapshot& GameRuntime::Snapshot() const
{
	return m_snapshot;
}

float GameRuntime::Alpha() const
{
	return m_alpha;
}

void GameRuntime::FixedUpdate( const GameInput& input )
{
	if ( m_snapshot.mode == GameMode::Boot ) {
		if ( m_snapshot.updateNumber >= 15 || input.action )
			m_snapshot.mode = GameMode::Title;
		++m_snapshot.updateNumber;
		return;
	}

	if ( m_snapshot.mode == GameMode::Title ) {
		if ( input.action )
			m_snapshot.mode = GameMode::Gameplay;
		++m_snapshot.updateNumber;
		return;
	}

	float dx = 0.0f;
	float dy = 0.0f;
	if ( input.moveLeft )
		dx -= 1.0f;
	if ( input.moveRight )
		dx += 1.0f;
	if ( input.moveUp )
		dy -= 1.0f;
	if ( input.moveDown )
		dy += 1.0f;

	if ( dx != 0.0f && dy != 0.0f ) {
		dx *= 0.70710678f;
		dy *= 0.70710678f;
	}

	m_snapshot.playerX += dx * kPlayerSpeed * kFixedStepSeconds;
	m_snapshot.playerY += dy * kPlayerSpeed * kFixedStepSeconds;
	m_snapshot.cameraX += ( m_snapshot.playerX - m_snapshot.cameraX ) * 0.12f;
	m_snapshot.cameraY += ( m_snapshot.playerY - m_snapshot.cameraY ) * 0.12f;
	++m_snapshot.updateNumber;
}

GameInput PollGameInput()
{
	GameInput input;
	input.moveLeft = KeyDown( 'A' ) || KeyDown( VK_LEFT );
	input.moveRight = KeyDown( 'D' ) || KeyDown( VK_RIGHT );
	input.moveUp = KeyDown( 'W' ) || KeyDown( VK_UP );
	input.moveDown = KeyDown( 'S' ) || KeyDown( VK_DOWN );
	input.action = KeyDown( VK_SPACE ) || KeyDown( VK_RETURN );
	input.pause = ( GetAsyncKeyState( 'P' ) & 1 ) != 0;
	input.quit = KeyDown( VK_ESCAPE );
	return input;
}

} // namespace jdpc
