# Jersey Devil Remaster - Spacefarer Retro Engine
**Version 1.3 (November 2016)**

OpenGL pseudo-driver (wrapper) that adds graphical enhancements and texture replacement support for Jersey Devil Remaster. You should place `opengl32.dll` and `JerseyDevilGraphics.ini` in the game executable's directory before running the game.

## Setup

Please perform the following steps to install and enable Jersey Devil Remaster - Spacefarer Retro Engine:

1. Place `opengl32.dll` and `JerseyDevilGraphics.ini` in the directory where the executable file of the game is located.
2. Run the game; make sure the `JDRPC.log` file is created; this means that game has successfully hooked the wrapper.
3. If you want to restore the native OpenGL renderer, delete the `opengl32.dll` file from the game executable's directory. You may keep `JerseyDevilGraphics.ini` for future use because it has no effect without the dll.

Refer to the **Customization** section for the list of tweakable parameters.
Please also read **Security Notice** before using this wrapper.

## Effects
- Anisotropic texture filtering
- Full-screen antialiasing (MSAA)
- HSL color correction
- Screen-space emboss bump-mapping
- Screen-space ambient occlusion
- Bloom
- Depth of Field (disabled by default)
- Vignette (disabled by default)

The wrapper also implements OpenGL extension limiting for some old games. Without such limit, old games can crash with modern video cards and drivers.

## Customization

By default, the wrapper takes parameters from the `[Generic]` section of the `JerseyDevilGraphics.ini` configuration file. They can be overriden by a section named after the game's executable. The following parameters can be customized:

| Parameter        | Default value           | Meaning  |
| ------------- |:-------------:| ----- |
| RenderFrame | -1 | The most important command, selects an internal marker when effects should be applied; set to -1 to apply at the very end of the frame. This works almost always, but the effects will also be applied to the HUD and stuff. Try values 0, 1, 2, 3... to find a proper injection point. However sometimes this is not possible and/or stable, so -1 is your final choice. |
| Anisotropy | 8 | Anisotropic texture filtering, set to zero to use game settings. Some old games don't support anisotropic filtering, so the default is 8. |
| Multisample | 4  | MSAA anti-aliasing. Some old games don't support MSAA, so the default is 4. |
| TextureDumpEnable | 1 | Dump supported textures once as PNG files into `TextureDump` using hash-based filenames. |
| TextureReplaceEnable | 0 | Replace matching textures from PNG files in `HDTex`. Replacement filenames must match dumped names, with optional `_x2` or `_x4` suffixes for higher-resolution versions. |
| TextureUpscaleFactor | 1 | Maximum texture replacement scale: 1, 2, or 4. When set to 2 or 4, same-size replacements can also be upscaled automatically. |
| TextureAccuracyFix | 1 | Enable texture accuracy fixes intended for PSX-to-PC ports: perspective correction hints and texture LOD bias clamping. |
| PSXStabilityFix | 1 | Enable additional PSX-to-PC stability fixes for projection/depth precision. |
| DepthPrecisionFix | 1 | Raise unstable near planes when the far/near ratio is too large and sanitize tiny depth ranges. |
| TextureMaxDepthRatio | 8000.0 | Maximum far/near ratio allowed by the frustum fixer. Lower values improve depth precision but can increase near clipping. |
| DepthRangeEpsilon | 0.0001 | Minimum depth range size used by depth range cleanup. |
| ProjectionDiagnostics | 0 | Log projection near/far ratios and PSX stability adjustments even when `Debug=0`. |
| ForcePerspectiveCorrection | 1 | Force `GL_PERSPECTIVE_CORRECTION_HINT` to `GL_NICEST`, even if the game requests `GL_FASTEST`. |
| ClampTextureLodBias | 1 | Clamp `GL_TEXTURE_LOD_BIAS` to `0` on 2D textures to reduce shimmer/unstable mip selection on replacement textures. |
| ForceLinearMagnification | 1 | Force linear magnification on 2D textures to reduce close-camera pixel snapping on HD replacement textures. |
| NearPlaneTextureFix | 1 | Raise very small perspective near planes while preserving FOV, reducing close-camera texture precision instability. |
| TextureMinNearPlane | 1.0 | Minimum near plane used by `NearPlaneTextureFix`. Lower this if close objects clip too early; raise it if close texture snapping remains. |
| HudWidescreenFix | 1 | Expand centered 4:3-style orthographic HUD viewports horizontally toward widescreen edges. |
| HudViewportExpand | 1.0 | Amount of HUD viewport expansion, 0.0-1.0. Use lower values if the HUD moves too far outward. |
| HudVertexExpand | 0.0 | Amount of 2D orthographic HUD vertex expansion, 0.0-1.0. Disabled by default because it can stretch non-HUD polygons. |
| HudTranslateExpand | 1.0 | Amount of 2D orthographic HUD translation expansion, 0.0-1.0. Moves HUD sprite placements outward without resizing their polygons. |
| HudForceVertexExpand | 0 | Apply `HudVertexExpand` to any orthographic HUD pass in widescreen, using `HudViewportAspect` as the source layout. Leave disabled unless testing. |
| HudViewportAspect | 1.333333 | Source HUD viewport aspect ratio to detect, normally 4:3. |
| HudViewportAspectTolerance | 0.08 | Detection tolerance for HUD viewport aspect. Raise slightly if the HUD does not move; lower if non-HUD viewports are affected. |
| Bloom | 1 | Enable bloom effect. |
| BloomSteps | 8 | Number of bloom blurring passes. Higher values look better but are slower. |
| BloomDarken | 3 | How much the source scene is darkened before bloom blurring. Brigher games require higher values to reduce blooming on regular stuff. |
| BloomScale | 1.5 | Final bloom effect scale. Reduce this value if everything looks too bright. |
| PlanarShadows | 1 | Enable dynamic screen-space projected shadows using scene depth. This approximates planar/contact shadows for characters and 3D objects. |
| PlanarShadowStrength | 0.35 | Shadow darkness. Higher values make projected shadows stronger. |
| PlanarShadowRadius | 24.0 | Shadow projection length/softness in pixels. |
| PlanarShadowOffsetX | 10.0 | Horizontal projected shadow direction in pixels. |
| PlanarShadowOffsetY | 18.0 | Vertical projected shadow direction in pixels. |
| PlanarShadowDepthScale | 0.03 | Depth tolerance for caster/receiver pairing. Raise if shadows are missing; lower if shadows smear onto distant scenery. |
| PlanarShadowMinZ | 0.005 | Minimum normalized scene depth where planar shadows can appear. |
| PlanarShadowMaxZ | 0.98 | Maximum normalized scene depth where planar shadows can appear. |
| SSAO | 1 | Enable screen-space ambient occlusion effect. |
| SSAOScale | 8.0 | SSAO effect scale, higher values produce more noticable occlusion effects. |
| SSAOMinZ | 0.005 | Minimum scene depth to apply SSAO effect. Can be tweaked to remove SSAO on first-person guns, etc. |
| SSAOMaxZ | 1.0 | Maximum scene depth to apply SSAO effect. Can be tweaked to remove SSAO on far objects, e.g. sky. |
| Hue | 0 | HSL color correction: hue. Same as in Adobe Photoshop. |
| Saturation | 0 | HSL color correction: saturation. Same as in Adobe Photoshop. |
| Lightness | 0 | HSL color correction: lightness. Same as in Adobe Photoshop. |
| Emboss | 1 | Enable screen-space emboss bump-mapping effect. |
| EmbossScale | 0.5 | Emboss effect scale; higher values produce darker emboss effect. |
| DOF | 1 | Enable depth-of-field effect. |
| DOFSpeed | 1.0 | Speed at which focus will be approached. |
| DOFScale | 2.0 | DOF effect scale; higher values make background not in focus more blurred. |
| Vignette | 1 | Enable vignette effect (screen is darker at corners). |
| VignetteScale | 1.25 | Vignette scale, 0.0-2.0; higher values make corners darker. |
| ExtensionLimit | 0 | 0 means no limit; if you set it to say 4000, only those extensions that not totally exceed 4000 characters will be reported to the game; the exception is WGL_EXT_swap_control which is always reported (unless limit is less that its length). |
| ZTrickFix | 0 | Some old games use a so-called *z-trick* to eliminate depth buffer clearing; the wrapper is not compatible with z-trick. If you suspect the game uses it, set this to 1, and the wrapper will attempt to get rid of the z-trick behavoir. |
| ViewportFix | 0 | Some games don't render to the full screen, and don't like the wrapper to maximize the viewport when applying effects. Set this to 1, and the wrapper will use the viewport at the injection point unmodified. |
| CompareMode | 0 | Set to 1 if you want to compare the scene with and without the wrapper; this turns effects on and off every second. Not for playable releases! |

**Note:** Default values in the table correspond to dll's internal defaults; some of them are already overriden in the `[Generic]` section of `JerseyDevilGraphics.ini`.

## Troubleshooting

Sometimes the wrapper won't be hooked by the game. There are several workarounds possible:
- First of all, make sure that this is an OpenGL-based game; ask developers or search the Web to be sure.
- NVIDIA drivers sometimes use profiles for games; they pre-load system's OpenGL library before the game loads it, and the wrapper is ignored. To deal with this, try to rename the executable and use it to run the game. Please also rename the corresponding entry in `JerseyDevilGraphics.ini`.

## Security Notice

Some anti-cheating software refers such wrappers to as cheats, so make sure your anti-cheating software is not active. I.e. don't forget to delete wrapper's `opengl32.dll` before playing multiplayer games: you may get a ban because of Valve Anti-Cheat, and it is nearly impossible to reverse. So, the rule of thumb is: **don't use QeffectsGL with multiplayer Steam games**.

**NEVER**, you hear, **NEVER** replace system's OpenGL library `opengl32.dll`! This can break the whole enchilada, since this wrapper is NOT a complete replacement for OpenGL.

*Crystice Softworks*
*2016*
