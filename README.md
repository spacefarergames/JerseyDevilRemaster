# JerseyDevilRemaster
Complete re-compile for modern systems and Remastering of the 1999 PSX / PC classic, Jersey Devil.

<img width="512" height="512" alt="JerseyRemaster" src="https://github.com/user-attachments/assets/6441b063-0676-4921-a868-d4806b812ccb" />

🎮 Overview
Jersey Devil Remaster is a preservation and enhancement project aimed at bringing the original Jersey Devil (1997) PC Build into a modern, playable, and maintainable state.
This remaster focuses on accuracy, stability, and authenticity, while improving quality-of-life, performance, and compatibility across contemporary systems.

This repository contains the reverse‑engineered codebase, asset restoration pipeline, and tooling required to build and run the remastered version.

✨ Key Features
Faithful Gameplay Preservation  
Core mechanics, physics, and level flow remain true to the original PC release.

Modern Rendering Enhancements  
Improved lighting, higher‑resolution textures, and cleaned-up geometry while retaining the 90s aesthetic.

Widescreen & High‑Resolution Support  
Native support for 16:9, 1080p, 1440p, and 4K output.

Bug Fixes & Stability Improvements  
Numerous crashes, softlocks, and scripting issues from the original game have been resolved.

📁 Repository Structure
Code
│
├── jdpc/               # Core game source code (Decomp / Recomp)
├── assets/             # Upscaled Textures and Game Assets
├── RemasterEngine/     # Spacefarer Retro Remaster Engine (OpenGL based replacement)
└── README.md           # You are here

🛠️ Building the Project
Requirements
CMake 3.20+

A modern C/C++ compiler (MSVC, Clang, or GCC)

Python 3.10+ (for asset pipeline tools)

Git LFS (if large assets are included)

Build Steps
bash
git clone https://github.com/spacefarergames/JerseyDevilRemaster.git
cd JerseyDevilRemaster
cmake -B build
cmake --build build --config Release

🧪 Current Status
Component	Status
Core Engine	✔ Stable
Rendering Layer	✔ Enhanced
Audio System	✔ Restored
Input System	✔ Modernised

🤝 Contributing
Contributions are welcome!
Whether you’re fixing bugs, improving documentation, or helping with asset restoration, feel free to open:

Issues

Pull Requests

Feature Suggestions

Please follow the coding style and guidelines in /docs.

📜 Legal Notice
All original game assets and trademarks belong to their respective owners.

🦇 Credits
Spacefarer Games – Project direction, restoration pipeline, tooling

Community Contributors – Bug fixes, research, testing

Original Developers – Behaviour Interactive (1997)
