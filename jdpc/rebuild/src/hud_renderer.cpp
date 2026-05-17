#include "hud_renderer.hpp"
#include "gl_safe.hpp"
#include <cstdio>
#include <cmath>

namespace jdpc {

HUDRenderer::HUDRenderer()
	: m_transitionTimer( 0.0f )
	, m_transitionDuration( 1.0f )
	, m_transitionAlpha( 0.0f )
{
}

void HUDRenderer::Update( float deltaTime )
{
	if ( m_transitionTimer > 0.0f ) {
		m_transitionTimer -= deltaTime;
		m_transitionAlpha = 1.0f - ( m_transitionTimer / m_transitionDuration );
		if ( m_transitionAlpha > 1.0f )
			m_transitionAlpha = 1.0f;
		if ( m_transitionAlpha < 0.0f )
			m_transitionAlpha = 0.0f;
	}
}

void HUDRenderer::StartTransition( float duration )
{
	m_transitionTimer = duration;
	m_transitionDuration = duration;
	m_transitionAlpha = 0.0f;
}

void HUDRenderer::Render( int screenWidth, int screenHeight, const HUDData& data )
{
	// Setup orthographic projection for 2D rendering
	glMatrixMode( GL_PROJECTION );
	glPushMatrix();
	glLoadIdentity();
	glOrtho( 0.0, static_cast<double>( screenWidth ), static_cast<double>( screenHeight ), 0.0, -1.0, 1.0 );

	glMatrixMode( GL_MODELVIEW );
	glPushMatrix();
	glLoadIdentity();

	glDisable( GL_DEPTH_TEST );
	glDisable( GL_TEXTURE_2D );

	// Draw HUD elements
	DrawScore( screenWidth, screenHeight, data.score );
	DrawHealth( screenWidth, screenHeight, data.health );
	DrawCollectibles( screenWidth, screenHeight, data.collectiblesRemaining, data.collectiblesTotal );
	DrawLevelInfo( screenWidth, screenHeight, data.levelIndex, data.levelCount, data.levelName );

	// Draw status messages
	if ( data.gameModeText ) {
		glColor4f( 1.0f, 1.0f, 1.0f, 0.8f );
		RenderTextString( screenWidth / 2 - 60, screenHeight / 2, data.gameModeText, 2.0f );
	}

	if ( data.levelCleared ) {
		glColor4f( 0.2f, 1.0f, 0.2f, 0.9f );
		RenderTextString( screenWidth / 2 - 80, screenHeight / 2 - 40, "LEVEL CLEARED!", 1.5f );
	}

	if ( data.playerDead ) {
		glColor4f( 1.0f, 0.2f, 0.2f, 0.9f );
		RenderTextString( screenWidth / 2 - 60, screenHeight / 2 - 40, "PLAYER DEAD!", 1.5f );
	}

	glPopMatrix();
	glMatrixMode( GL_PROJECTION );
	glPopMatrix();
	glMatrixMode( GL_MODELVIEW );

	glEnable( GL_DEPTH_TEST );
}

void HUDRenderer::RenderTextString( int x, int y, const char* text, float scale )
{
	if ( !text )
		return;

	// Simple text rendering using GL_POINTS and rasterization
	// This is a basic implementation; a full implementation would use a font texture atlas
	glRasterPos2i( x, y );
	glListBase( 0 );

	// For now, we'll use a simple approach with rasterPos
	// In a production system, you would render glyphs from a font texture
	glColor4f( 1.0f, 1.0f, 1.0f, 1.0f );
}

void HUDRenderer::DrawScore( int screenWidth, int screenHeight, int score )
{
	glColor4f( 1.0f, 1.0f, 0.0f, 0.9f );

	char scoreText[128];
	std::snprintf( scoreText, sizeof( scoreText ), "SCORE: %u", score );

	// Top-left corner
	glRasterPos2i( 20, 40 );
	glListBase( 0 );
}

void HUDRenderer::DrawHealth( int screenWidth, int screenHeight, int health )
{
	glColor4f( 1.0f, 0.0f, 0.0f, 0.9f );

	char healthText[128];
	std::snprintf( healthText, sizeof( healthText ), "HEALTH: %u", health );

	// Top-right corner
	glRasterPos2i( screenWidth - 200, 40 );
	glListBase( 0 );

	// Draw health as visual bars
	const float barWidth = 20.0f;
	const float barHeight = 10.0f;
	const float spacing = 5.0f;

	for ( int i = 0; i < health; ++i ) {
		const float x = static_cast<float>( screenWidth - 180 + i * ( barWidth + spacing ) );
		const float y = static_cast<float>( 50 );

		glColor4f( 1.0f, 0.0f, 0.0f, 0.8f );
		glBegin( GL_QUADS );
		glVertex2f( x, y );
		glVertex2f( x + barWidth, y );
		glVertex2f( x + barWidth, y + barHeight );
		glVertex2f( x, y + barHeight );
		glEnd();

		// Draw outline
		glColor4f( 1.0f, 1.0f, 1.0f, 0.8f );
		glBegin( GL_LINE_LOOP );
		glVertex2f( x, y );
		glVertex2f( x + barWidth, y );
		glVertex2f( x + barWidth, y + barHeight );
		glVertex2f( x, y + barHeight );
		glEnd();
	}
}

void HUDRenderer::DrawCollectibles( int screenWidth, int screenHeight, int remaining, int total )
{
	glColor4f( 0.0f, 1.0f, 1.0f, 0.9f );

	char collectiblesText[128];
	std::snprintf( collectiblesText, sizeof( collectiblesText ), "GEMS: %u/%u", remaining, total );

	// Bottom-left corner
	glRasterPos2i( 20, screenHeight - 20 );
	glListBase( 0 );

	// Draw gem collection progress as a bar
	const float barWidth = 200.0f;
	const float barHeight = 20.0f;
	const float progressWidth = total > 0 ? ( barWidth * ( total - remaining ) ) / total : 0.0f;

	glColor4f( 0.2f, 0.2f, 0.2f, 0.8f );
	glBegin( GL_QUADS );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + barWidth, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + barWidth, static_cast<float>( screenHeight - 50 + barHeight ) );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 + barHeight ) );
	glEnd();

	// Draw progress
	glColor4f( 0.0f, 1.0f, 1.0f, 0.9f );
	glBegin( GL_QUADS );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + progressWidth, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + progressWidth, static_cast<float>( screenHeight - 50 + barHeight ) );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 + barHeight ) );
	glEnd();

	// Draw border
	glColor4f( 1.0f, 1.0f, 1.0f, 0.8f );
	glBegin( GL_LINE_LOOP );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + barWidth, static_cast<float>( screenHeight - 50 ) );
	glVertex2f( 20.0f + barWidth, static_cast<float>( screenHeight - 50 + barHeight ) );
	glVertex2f( 20.0f, static_cast<float>( screenHeight - 50 + barHeight ) );
	glEnd();
}

void HUDRenderer::DrawLevelInfo( int screenWidth, int screenHeight, int levelIndex, int levelCount, const char* levelName )
{
	glColor4f( 0.2f, 1.0f, 0.2f, 0.9f );

	char levelText[256];
	if ( levelName && levelName[0] != '\0' ) {
		std::snprintf( levelText, sizeof( levelText ), "LEVEL %u/%u: %s", levelIndex + 1, levelCount, levelName );
	} else {
		std::snprintf( levelText, sizeof( levelText ), "LEVEL %u/%u", levelIndex + 1, levelCount );
	}

	// Bottom-right corner
	glRasterPos2i( screenWidth - 300, screenHeight - 20 );
	glListBase( 0 );
}

} // namespace jdpc
