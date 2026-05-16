#pragma once

#include <string>

namespace jdpc {

struct OpenGLLoadResult {
	bool loaded = false;
	std::string dllName;
	unsigned long error = 0;
	int resolvedExports = 0;
};

OpenGLLoadResult ProbeOpenGLExports( const char* dllName );

} // namespace jdpc
