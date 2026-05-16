#include "command_line.hpp"

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <vector>

namespace jdpc {
namespace {

std::string ToLower( std::string value )
{
	std::transform( value.begin(), value.end(), value.begin(), []( unsigned char ch ) {
		return static_cast<char>( std::tolower( ch ) );
	} );
	return value;
}

std::vector<std::string> TokenizeCommandLine( const char* commandLine )
{
	std::vector<std::string> tokens;
	std::istringstream input( commandLine ? commandLine : "" );
	std::string token;
	while ( input >> token )
		tokens.push_back( token );
	return tokens;
}

int ParseIntegerOption( const std::string& token, const char* prefix, int fallback )
{
	const std::string lower = ToLower( token );
	const std::string lowerPrefix = ToLower( prefix );
	if ( lower.find( lowerPrefix ) != 0 )
		return fallback;

	return std::atoi( token.c_str() + lowerPrefix.size() );
}

} // namespace

CommandLineOptions ParseCommandLine( const char* commandLine )
{
	CommandLineOptions options;
	const std::vector<std::string> tokens = TokenizeCommandLine( commandLine );

	for ( size_t i = 0; i < tokens.size(); ++i ) {
		const std::string lower = ToLower( tokens[i] );

		if ( lower == "/opengl" || lower == "/ogl" ) {
			options.renderer = RendererMode::OpenGL;
		} else if ( lower == "/softpal" || lower == "/soft8" ) {
			options.renderer = RendererMode::SoftPal;
		} else if ( lower == "/softrgb" || lower == "/soft16" || lower == "/soft24" || lower == "/soft" ) {
			options.renderer = RendererMode::SoftRgb;
		} else if ( lower == "/full" ) {
			options.fullscreen = true;
		} else if ( lower == "/window" || lower == "/win" ) {
			options.fullscreen = false;
		} else if ( lower == "/no_sync" ) {
			options.sync = false;
		} else if ( lower == "/no_skip" ) {
			options.frameSkip = false;
		} else if ( lower == "/skip_intro" ) {
			options.skipIntro = true;
		} else if ( lower == "/cons" ) {
			options.console = true;
		} else if ( lower == "/fntp" ) {
			options.fontPreview = true;
		} else if ( lower == "/dll" && i + 1 < tokens.size() ) {
			options.openglDll = tokens[++i];
		} else if ( lower.find( "/dll:" ) == 0 || lower.find( "/dll=" ) == 0 ) {
			options.openglDll = tokens[i].substr( 5 );
		} else if ( lower == "/pal" && i + 1 < tokens.size() ) {
			options.palettePath = tokens[++i];
		} else if ( lower.find( "/pal:" ) == 0 || lower.find( "/pal=" ) == 0 ) {
			options.palettePath = tokens[i].substr( 5 );
		}

		options.width = ParseIntegerOption( tokens[i], "/w", options.width );
		options.height = ParseIntegerOption( tokens[i], "/h", options.height );
	}

	return options;
}

const char* RendererModeName( RendererMode mode )
{
	switch ( mode ) {
	case RendererMode::SoftPal:
		return "software paletted";
	case RendererMode::SoftRgb:
		return "software rgb";
	case RendererMode::OpenGL:
	default:
		return "opengl";
	}
}

} // namespace jdpc
