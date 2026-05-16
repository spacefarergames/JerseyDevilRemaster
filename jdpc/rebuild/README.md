# JDPC Rebuild Project

This is the initial Visual Studio rebuild scaffold for `jdpc.exe`.

It compiles to a Win32 EXE, but it is not the full original game yet. The
decompiled files in `../decompiled/` are Ghidra pseudocode and need manual
cleanup before they can be moved into this project.

Current recovered systems:

- Command-line option parsing for the original renderer/window switches.
- Game-relative file probing against the original install layout.
- PlayStation TIM header parsing and TIM-to-RGBA texture decoding.
- OpenGL texture upload and preview rendering for recovered TIM assets.
- BZE archive header/chunk scanning across the original `BZE` folder.
- BZE streamed-block visualizer for `level1a1.bze`.
- A fixed-step game loop with boot, title, and gameplay states.
- A small gameplay shell with camera/player state and keyboard movement.

## Build

Open `jdpc_rebuild.sln` in Visual Studio, or run:

```powershell
& 'C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\MSBuild.exe' jdpc_rebuild.sln /p:Configuration=Debug /p:Platform=Win32 /m
& 'C:\Program Files\Microsoft Visual Studio\18\Community\MSBuild\Current\Bin\MSBuild.exe' jdpc_rebuild.sln /p:Configuration=Release /p:Platform=Win32 /m
```

Output:

- `bin/Debug/jdpc_rebuild.exe`
- `bin/Release/jdpc_rebuild.exe`
