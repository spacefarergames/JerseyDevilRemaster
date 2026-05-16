#pragma once

#include <windows.h>

namespace jdpc {

struct OriginalImageInfo {
	DWORD imageBase;
	DWORD entryPoint;
	DWORD textVirtualAddress;
	DWORD textVirtualSize;
	DWORD dataVirtualAddress;
	DWORD dataVirtualSize;
};

const OriginalImageInfo& GetOriginalImageInfo();
void ShowRebuildStatus( HINSTANCE instance );

} // namespace jdpc
