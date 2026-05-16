/***************************************************************************
* Copyright (C) 2012-2016, Crystice Softworks.
* 
* This file is part of QeffectsGL source code.
* 
* QeffectsGL source code is free software; you can redistribute it 
* and/or modify it under the terms of the GNU General Public License 
* as published by the Free Software Foundation; either version 2 of 
* the License, or (at your option) any later version.
* 
* QeffectsGL source code is distributed in the hope that it will be 
* useful, but WITHOUT ANY WARRANTY; without even the implied 
* warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
* See the GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software 
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
***************************************************************************/
#ifndef QFX_RENDERER_H
#define QFX_RENDERER_H

class QFXShader;

QFX_SINGLETON class QFXRenderer
{
private: 
	QFXRenderer();
	static QFXRenderer& GetInstance() { static QFXRenderer rObject; return rObject; }

public:
	~QFXRenderer();
	static QFXRenderer& Instance() { typedef QFXRenderer& (*pfnGetInstance)(); static pfnGetInstance pf = &GetInstance; return pf(); }
	
	const char *GetExtensionString();
	BOOL OnSetPixelFormat( HDC hdc, int pixelformat, const PIXELFORMATDESCRIPTOR *ppfd );
	void OnMakeCurrent( HDC hdc, HGLRC hglrc );
	void OnDeleteContext( HGLRC hglrc );
	void OnSwapBuffers();
	void OnTexImage2D();
	void SetOrtho( GLboolean enable );
	void SetupZDimensions( GLfloat znear, GLfloat zfar );
	void SetupZDimensions( const GLfloat* matrix );
	void SetupZDimensions( const GLdouble* matrix );
	void SetupDepthFunc( GLenum func );
	void SetupDepthRange( GLclampd zNear, GLclampd zFar );
	void SetupMultisample();
	void SetupAnisotropy();
	void SetupTextureAccuracy( GLenum target );
	GLenum SetupPerspectiveHint( GLenum target, GLenum mode );
	GLfloat SetupTextureParameter( GLenum target, GLenum pname, GLfloat param );
	GLint SetupTextureParameter( GLenum target, GLenum pname, GLint param );
	void SetupNearPlaneFrustum( GLdouble& left, GLdouble& right, GLdouble& bottom,
		GLdouble& top, GLdouble& zNear, GLdouble& zFar );
	bool SetupHudViewport( GLint& x, GLint& y, GLsizei& width, GLsizei& height, bool force );
	void SetupHudOrtho( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top );
	GLdouble SetupHudVertexX( GLdouble x );
	GLdouble SetupHudTranslateX( GLdouble x );

private:
	GLuint AllocTextureId() { return m_uiTextureIndex++; }
	int  ChooseMultisamplePixelFormat( int fmt, HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd );
	void CheckHardware();
	void InitializeTextures();
	void InitializeGL();
	void ShutdownGL();
	void RenderGL();
	void CaptureRGB();
	void CaptureDepth();
	void RenderFSQ( int wide, int tall );
	void RenderScaledFSQ( int wide, int tall, int wide2, int tall2 );

	void PostProcess();
	void PostProcess_SSAO();
	void PostProcess_PlanarShadows();
	void PostProcess_Bloom();
	void PostProcess_ColorCorrection();
	void PostProcess_Emboss();
	void PostProcess_DOF();
	void PostProcess_Vignette();

private:
	// contexts, internal state
	HDC				m_hDC;
	HGLRC			m_hGLRC;
	GLboolean		m_bOrtho;
	GLboolean		m_bZTrick;
	GLboolean		m_bInternalAnisotropy;
	GLboolean		m_bInternalMultisample;
	GLboolean		m_bMultisample;
	GLint			m_iRenderFrame;
	GLuint			m_uiRenderFrameCounter;
	GLuint			m_uiFrameCounter;
	GLuint			m_uiTextureIndex;
	GLint			m_WindowSize[2];
	GLfloat			m_zNear;
	GLfloat			m_zFar;
	DWORD			m_iEnableRender;
	GLfloat			m_flFrameTime;
	DWORD			m_flOldTime;
	DWORD			m_flLastTime;
	GLfloat			m_flLastDepth;
	GLuint			m_iTextureInit;
	GLuint			m_uiHudViewportLogCount;
	GLuint			m_uiHudVertexLogCount;
	GLboolean		m_bHudOrthoActive;
	GLdouble		m_HudOrthoLeft;
	GLdouble		m_HudOrthoRight;
	GLdouble		m_HudOrthoBottom;
	GLdouble		m_HudOrthoTop;
	GLdouble		m_HudVertexScale;
	GLdouble		m_HudSafeLeft;
	GLdouble		m_HudSafeRight;
	char*			m_pszExtensions;

	// tracked GL state
	GLuint			m_uiViewportFrame;
	GLint			m_3DViewport[4];
	GLint			m_3DScissor[4];

	// hardware caps
	GLboolean		m_bSupportsBloom;
	GLboolean		m_bSupportsSSAO;
	GLboolean		m_bSupportsPlanarShadows;
	GLboolean		m_bSupportsColorCorrection;
	GLboolean		m_bSupportsEmboss;
	GLboolean		m_bSupportsDOF;
	GLboolean		m_bSupportsVignette;

	// renderer settings
	int				m_varDebug;
	int				m_varExtensionLimit;
	int				m_varCompareMode;
	int				m_varZTrickFix;
	int				m_varViewportFix;
	int				m_varHudWidescreenFix;
	float			m_varHudViewportExpand;
	float			m_varHudVertexExpand;
	float			m_varHudTranslateExpand;
	int				m_varHudForceVertexExpand;
	float			m_varHudViewportAspect;
	float			m_varHudViewportAspectTolerance;
	int				m_varRenderFrame;
	int				m_varAnisotropy;
	int				m_varMultisample;
	int				m_varMultisampleHint;
	int				m_varTextureAccuracyFix;
	int				m_varForcePerspectiveCorrection;
	int				m_varClampTextureLodBias;
	int				m_varForceLinearMagnification;
	int				m_varNearPlaneTextureFix;
	float			m_varTextureMinNearPlane;
	int				m_varPSXStabilityFix;
	int				m_varDepthPrecisionFix;
	int				m_varProjectionDiagnostics;
	float			m_varTextureMaxDepthRatio;
	float			m_varDepthRangeEpsilon;
	int				m_varBloomEnable;
	int				m_varBloomNumSteps;
	float			m_varBloomDarkenPower;
	float			m_varBloomCombineScale;
	int				m_varPlanarShadows;
	float			m_varPlanarShadowStrength;
	float			m_varPlanarShadowRadius;
	float			m_varPlanarShadowOffsetX;
	float			m_varPlanarShadowOffsetY;
	float			m_varPlanarShadowDepthScale;
	float			m_varPlanarShadowMinZ;
	float			m_varPlanarShadowMaxZ;
	int				m_varSSAOEnable;
	float			m_varSSAOScale;
	float			m_varSSAOMinZ;
	float			m_varSSAOMaxZ;
	int				m_varHue;
	int				m_varSaturation;
	int				m_varLightness;
	int				m_varEmboss;
	float			m_varEmbossScale;
	int				m_varDOF;
	float			m_varDOFSpeed;
	float			m_varDOFScale;
	float			m_varDOFMinZ;
	int				m_varVignette;
	float			m_varVignetteScale;

	// renderer data
	GLuint			m_uiScreenRGB;
	GLuint			m_uiScreenDepth;
	GLuint			m_uiBlurTexture;
	GLuint			m_uiBlurDepth;
	QFXShader*		m_pBloomDarkenShader;
	QFXShader*		m_pBloomBlurShader;
	QFXShader*		m_pBloomCombineShader;
	QFXShader*		m_pSSAORenderShader;
	QFXShader*		m_pSSAOBlurShader;
	QFXShader*		m_pSSAOCombineShader;
	QFXShader*		m_pPlanarShadowShader;
	QFXShader*		m_pHSLShader;
	QFXShader*		m_pEmbossShader;
	QFXShader*		m_pDOFBlurShader;
	QFXShader*		m_pDOFDepthShader;
	QFXShader*		m_pDOFRenderShader;
	QFXShader*		m_pVignetteShader;
};

#endif //QFX_RENDERER_H
