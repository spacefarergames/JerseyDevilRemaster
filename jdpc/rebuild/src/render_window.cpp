#include "render_window.hpp"

#include "asset_formats.hpp"
#include "file_system.hpp"
#include "game_runtime.hpp"

#include <windows.h>
#include <gl/GL.h>

#include <algorithm>

namespace jdpc {
namespace {

struct PreviewTexture {
	GLuint id = 0;
	int width = 0;
	int height = 0;
	bool valid = false;
	std::string status;
};

LRESULT CALLBACK WindowProc( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam )
{
	switch ( msg ) {
	case WM_CLOSE:
		DestroyWindow( hwnd );
		return 0;
	case WM_DESTROY:
		PostQuitMessage( 0 );
		return 0;
	default:
		return DefWindowProcA( hwnd, msg, wparam, lparam );
	}
}

PreviewTexture LoadPreviewTexture( const std::string& path )
{
	PreviewTexture texture;
	if ( path.empty() ) {
		texture.status = "No preview TIM path";
		return texture;
	}

	const FileReadResult read = ReadWholeFile( path.c_str() );
	if ( !read.ok ) {
		texture.status = "Could not read preview TIM: " + path;
		return texture;
	}

	const RgbaImage image = DecodeTimToRgba( read.bytes );
	if ( !image.valid ) {
		texture.status = "Could not decode preview TIM: " + image.error;
		return texture;
	}

	glGenTextures( 1, &texture.id );
	glBindTexture( GL_TEXTURE_2D, texture.id );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP );
	glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP );
	glTexImage2D( GL_TEXTURE_2D, 0, GL_RGBA, image.width, image.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image.pixels.data() );
	glBindTexture( GL_TEXTURE_2D, 0 );

	texture.width = image.width;
	texture.height = image.height;
	texture.valid = texture.id != 0;
	texture.status = texture.valid ? "Loaded preview TIM: " + read.path : "OpenGL texture allocation failed";
	return texture;
}

void DrawTexturedQuad( const PreviewTexture& texture, int width, int height )
{
	if ( !texture.valid )
		return;

	const float maxWidth = static_cast<float>( width ) - 96.0f;
	const float maxHeight = static_cast<float>( height ) - 128.0f;
	const float scaleX = maxWidth / static_cast<float>( texture.width );
	const float scaleY = maxHeight / static_cast<float>( texture.height );
	const float scale = scaleX < scaleY ? scaleX : scaleY;
	const float drawWidth = static_cast<float>( texture.width ) * scale;
	const float drawHeight = static_cast<float>( texture.height ) * scale;
	const float left = ( static_cast<float>( width ) - drawWidth ) * 0.5f;
	const float top = ( static_cast<float>( height ) - drawHeight ) * 0.5f;
	const float right = left + drawWidth;
	const float bottom = top + drawHeight;

	glEnable( GL_TEXTURE_2D );
	glBindTexture( GL_TEXTURE_2D, texture.id );
	glColor3f( 1.0f, 1.0f, 1.0f );
	glBegin( GL_QUADS );
		glTexCoord2f( 0.0f, 0.0f );
		glVertex2f( left, top );
		glTexCoord2f( 1.0f, 0.0f );
		glVertex2f( right, top );
		glTexCoord2f( 1.0f, 1.0f );
		glVertex2f( right, bottom );
		glTexCoord2f( 0.0f, 1.0f );
		glVertex2f( left, bottom );
	glEnd();
	glBindTexture( GL_TEXTURE_2D, 0 );
	glDisable( GL_TEXTURE_2D );
}

void DrawRecoveredRuntimeOverlay( const GameRuntimeSnapshot& state, int width, int height )
{
	const float centerX = static_cast<float>( width ) * 0.5f;
	const float centerY = static_cast<float>( height ) * 0.5f;
	const float playerScreenX = centerX + state.playerX - state.cameraX;
	const float playerScreenY = centerY + state.playerY - state.cameraY;

	const float safeWidth = static_cast<float>( height ) * ( 4.0f / 3.0f );
	const float safeLeft = ( static_cast<float>( width ) - safeWidth ) * 0.5f;
	const float safeRight = safeLeft + safeWidth;

	if ( state.mode == GameMode::Boot )
		glColor3f( 0.35f, 0.35f, 0.4f );
	else if ( state.mode == GameMode::Title )
		glColor3f( 0.25f, 0.55f, 0.95f );
	else
		glColor3f( 0.18f, 0.18f, 0.2f );
	glBegin( GL_LINE_LOOP );
		glVertex2f( safeLeft, 24.0f );
		glVertex2f( safeRight, 24.0f );
		glVertex2f( safeRight, static_cast<float>( height ) - 24.0f );
		glVertex2f( safeLeft, static_cast<float>( height ) - 24.0f );
	glEnd();

	if ( state.mode == GameMode::Gameplay )
		glColor3f( 1.0f, 0.2f, 0.08f );
	else
		glColor3f( 0.6f, 0.6f, 0.7f );
	glBegin( GL_TRIANGLES );
		glVertex2f( playerScreenX, playerScreenY - 18.0f );
		glVertex2f( playerScreenX - 14.0f, playerScreenY + 14.0f );
		glVertex2f( playerScreenX + 14.0f, playerScreenY + 14.0f );
	glEnd();

	glColor3f( 1.0f, 0.9f, 0.2f );
	glBegin( GL_LINE_LOOP );
		glVertex2f( playerScreenX - 18.0f, playerScreenY - 18.0f );
		glVertex2f( playerScreenX + 18.0f, playerScreenY - 18.0f );
		glVertex2f( playerScreenX + 18.0f, playerScreenY + 18.0f );
		glVertex2f( playerScreenX - 18.0f, playerScreenY + 18.0f );
	glEnd();

	const float pulse = state.paused ? 0.35f : 0.85f;
	if ( state.mode == GameMode::Boot )
		glColor3f( pulse, 0.45f, 0.45f );
	else if ( state.mode == GameMode::Title )
		glColor3f( 0.35f, pulse, 0.95f );
	else
		glColor3f( pulse, pulse, pulse );
	glBegin( GL_LINE_LOOP );
		glVertex2f( 24.0f, 24.0f );
		glVertex2f( 40.0f, 24.0f );
		glVertex2f( 40.0f, 40.0f );
		glVertex2f( 24.0f, 40.0f );
	glEnd();
}

void DrawSceneChunkMap( const std::vector<unsigned int>& chunkSizes, int width, int height )
{
	if ( chunkSizes.empty() )
		return;

	const unsigned int maxSize = *std::max_element( chunkSizes.begin(), chunkSizes.end() );
	if ( maxSize == 0 )
		return;

	const float left = 48.0f;
	const float right = static_cast<float>( width ) - 48.0f;
	const float bottom = static_cast<float>( height ) - 36.0f;
	const float maxBarHeight = 72.0f;
	const float gap = 6.0f;
	const float barWidth = ( right - left - gap * static_cast<float>( chunkSizes.size() - 1 ) ) / static_cast<float>( chunkSizes.size() );

	for ( size_t i = 0; i < chunkSizes.size(); ++i ) {
		const float ratio = static_cast<float>( chunkSizes[i] ) / static_cast<float>( maxSize );
		const float x0 = left + static_cast<float>( i ) * ( barWidth + gap );
		const float x1 = x0 + barWidth;
		const float y0 = bottom - maxBarHeight * ratio;
		const float y1 = bottom;

		glColor3f( 0.1f + 0.2f * static_cast<float>( i % 2 ), 0.55f, 0.95f );
		glBegin( GL_QUADS );
			glVertex2f( x0, y0 );
			glVertex2f( x1, y0 );
			glVertex2f( x1, y1 );
			glVertex2f( x0, y1 );
		glEnd();
	}
}

void DrawFrame( int width, int height, const PreviewTexture& preview, const GameRuntimeSnapshot& state, const std::vector<unsigned int>& sceneChunkSizes )
{
	glViewport( 0, 0, width, height );
	glClearColor( 0.06f, 0.05f, 0.08f, 1.0f );
	glClear( GL_COLOR_BUFFER_BIT );

	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	glOrtho( 0.0, width, height, 0.0, -1.0, 1.0 );
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	DrawTexturedQuad( preview, width, height );
	DrawRecoveredRuntimeOverlay( state, width, height );
	DrawSceneChunkMap( sceneChunkSizes, width, height );

	glBegin( GL_QUADS );
		glColor3f( 0.9f, 0.1f, 0.05f );
		glVertex2f( 64.0f, 64.0f );
		glColor3f( 0.1f, 0.6f, 1.0f );
		glVertex2f( static_cast<GLfloat>( width - 64 ), 64.0f );
		glColor3f( 1.0f, 0.85f, 0.1f );
		glVertex2f( static_cast<GLfloat>( width - 64 ), static_cast<GLfloat>( height - 64 ) );
		glColor3f( 0.35f, 0.9f, 0.35f );
		glVertex2f( 64.0f, static_cast<GLfloat>( height - 64 ) );
	glEnd();
}

} // namespace

bool RunRecoveredOpenGLWindow(
	const std::string& title,
	int width,
	int height,
	const std::string& statusText,
	const std::string& previewTimPath,
	const std::vector<unsigned int>& sceneChunkSizes
)
{
	HINSTANCE instance = GetModuleHandleA( nullptr );
	WNDCLASSA wc = {};
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = instance;
	wc.lpszClassName = "JDPC_REBUILD_WINDOW";
	wc.hCursor = LoadCursor( nullptr, IDC_ARROW );
	RegisterClassA( &wc );

	HWND hwnd = CreateWindowExA(
		0,
		wc.lpszClassName,
		title.c_str(),
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		width,
		height,
		nullptr,
		nullptr,
		instance,
		nullptr
	);
	if ( !hwnd )
		return false;

	HDC dc = GetDC( hwnd );
	PIXELFORMATDESCRIPTOR pfd = {};
	pfd.nSize = sizeof( pfd );
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;
	pfd.cDepthBits = 24;
	pfd.iLayerType = PFD_MAIN_PLANE;

	int pixelFormat = ChoosePixelFormat( dc, &pfd );
	if ( !pixelFormat || !SetPixelFormat( dc, pixelFormat, &pfd ) ) {
		ReleaseDC( hwnd, dc );
		DestroyWindow( hwnd );
		return false;
	}

	HGLRC glrc = wglCreateContext( dc );
	if ( !glrc || !wglMakeCurrent( dc, glrc ) ) {
		if ( glrc )
			wglDeleteContext( glrc );
		ReleaseDC( hwnd, dc );
		DestroyWindow( hwnd );
		return false;
	}

	const PreviewTexture preview = LoadPreviewTexture( previewTimPath );
	const std::string startupText = statusText + "\n\n" + preview.status;
	MessageBoxA( hwnd, startupText.c_str(), "Recovered startup state", MB_OK | MB_ICONINFORMATION );

	MSG msg = {};
	GameRuntime runtime;
	bool running = true;
	while ( running ) {
		while ( PeekMessageA( &msg, nullptr, 0, 0, PM_REMOVE ) ) {
			if ( msg.message == WM_QUIT )
				running = false;
			TranslateMessage( &msg );
			DispatchMessageA( &msg );
		}

		const GameInput input = PollGameInput();
		if ( input.quit )
			running = false;
		runtime.BeginFrame( timeGetTime(), input );
		runtime.ConsumeFixedUpdate();
		runtime.EndFrame();

		RECT rc = {};
		GetClientRect( hwnd, &rc );
		DrawFrame( rc.right - rc.left, rc.bottom - rc.top, preview, runtime.Snapshot(), sceneChunkSizes );
		SwapBuffers( dc );
		Sleep( 16 );
	}

	if ( preview.id )
		glDeleteTextures( 1, &preview.id );
	wglMakeCurrent( nullptr, nullptr );
	wglDeleteContext( glrc );
	ReleaseDC( hwnd, dc );
	return true;
}

} // namespace jdpc
