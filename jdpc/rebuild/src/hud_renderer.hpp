#pragma once

namespace jdpc {

// HUD/UI information
struct HUDData {
	int score;
	int health;
	int collectiblesRemaining;
	int collectiblesTotal;
	int levelIndex;
	int levelCount;
	bool levelCleared;
	bool playerDead;
	const char* gameModeText;
	const char* levelName;
	float transitionAlpha;  // For fade transitions
};

// HUD renderer
class HUDRenderer {
public:
	HUDRenderer();

	void Update( float deltaTime );
	void Render( int screenWidth, int screenHeight, const HUDData& data );

	void StartTransition( float duration = 1.0f );
	float GetTransitionAlpha() const { return m_transitionAlpha; }
	bool IsTransitioning() const { return m_transitionTimer > 0.0f; }

private:
	float m_transitionTimer;
	float m_transitionDuration;
	float m_transitionAlpha;

	void RenderTextString( int x, int y, const char* text, float scale = 1.0f );
	void DrawScore( int screenWidth, int screenHeight, int score );
	void DrawHealth( int screenWidth, int screenHeight, int health );
	void DrawLevelInfo( int screenWidth, int screenHeight, int levelIndex, int levelCount, const char* levelName );
	void DrawCollectibles( int screenWidth, int screenHeight, int remaining, int total );
};

} // namespace jdpc
