# JDPC Reverse Engineering Workspace

This folder contains generated reverse-engineering output for `jdpc.exe`.

## Important

The files in `decompiled/` are Ghidra pseudocode, not original source code.
They are useful for rebuilding the game gradually, but they will not compile as-is.
The original executable is stripped, so original names, source layout, comments,
types, and build settings are not present in the binary.

## Generated Files

- `jdpc.exe` - local copy of the analyzed executable.
- `jdpc.headers.txt` - PE headers and section layout from `dumpbin`.
- `jdpc.imports.txt` - imported DLLs/functions from `dumpbin`.
- `jdpc.disasm.txt` - full assembly listing from `dumpbin`.
- `jdpc.strings.txt` - ASCII string extraction with file offsets.
- `functions.csv` - simple call-target function list from static disassembly.
- `rizin.functions.json` - Rizin function analysis output.
- `rizin.imports.json` - Rizin import analysis output.
- `rizin.strings.json` - Rizin string analysis output.
- `ghidra_project/` - Ghidra project for interactive cleanup.
- `decompiled/` - 735 Ghidra decompiled function files plus `index.tsv`.
- `jdpc.all_decompiled.c` - combined pseudocode export.

## Rebuild Path

1. Open `ghidra_project/jdpc` in Ghidra and start naming functions/globals.
2. Prioritize renderer functions around `glOrtho`, `glViewport`, `glVertex*`,
   `glTexImage2D`, and data-file loading.
3. Convert one subsystem at a time into clean C/C++ in a new source tree.
4. Replace raw global addresses (`DAT_*`) with named structs and globals.
5. Build compatibility shims for Win32, DirectDraw, DirectSound, and OpenGL.
6. Validate each subsystem against the original EXE before replacing another.

## Tooling Used

- Visual Studio `dumpbin`
- Rizin 0.8.2
- Ghidra 12.1 headless decompiler
- Microsoft OpenJDK 21
