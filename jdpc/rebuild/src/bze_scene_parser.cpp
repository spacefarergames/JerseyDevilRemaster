#include "bze_scene_parser.hpp"

#include <algorithm>
#include <cmath>

namespace jdpc {
namespace {

int32_t ToS32( uint32_t value )
{
	return value > 0x7fffffffU ? static_cast<int32_t>( value - 0x100000000ULL ) : static_cast<int32_t>( value );
}

int32_t ToS16( uint32_t value )
{
	const uint32_t clipped = value & 0xffffU;
	return ( clipped & 0x8000U ) ? static_cast<int32_t>( clipped ) - 0x10000 : static_cast<int32_t>( clipped );
}

float ClampFloat( float value, float lo, float hi )
{
	return value < lo ? lo : ( value > hi ? hi : value );
}

template <typename Handler>
size_t ParseUntilCmd31(
	const std::vector<uint32_t>& words,
	size_t start,
	Handler&& onCommand
)
{
	size_t index = start;
	while ( index < words.size() && words[index] != 0x31U ) {
		const size_t next = onCommand( words[index], index );
		index = ( next <= index ) ? index + 1 : next;
	}
	return index;
}

void FinalizeActor( SceneActorData& actor, bool haveBounds, int32_t minBounds[3], int32_t maxBounds[3] )
{
	if ( !haveBounds ) {
		actor.halfSizeX = 12.0f;
		actor.halfSizeY = 24.0f;
		actor.halfSizeZ = 12.0f;
		return;
	}

	const float rawHalfX = static_cast<float>( std::max( std::abs( minBounds[0] ), std::abs( maxBounds[0] ) ) ) / 16.0f;
	const float rawHalfY = static_cast<float>( std::max( std::abs( minBounds[1] ), std::abs( maxBounds[1] ) ) ) / 16.0f;
	const float rawHalfZ = static_cast<float>( std::max( std::abs( minBounds[2] ), std::abs( maxBounds[2] ) ) ) / 16.0f;
	actor.halfSizeX = ClampFloat( rawHalfX, 2.0f, 240.0f );
	actor.halfSizeY = ClampFloat( rawHalfY, 2.0f, 240.0f );
	actor.halfSizeZ = ClampFloat( rawHalfZ, 2.0f, 240.0f );
}

bool PositionLooksValid( const SceneActorData& actor )
{
	return std::abs( actor.x ) < 200000.0f &&
		std::abs( actor.y ) < 200000.0f &&
		std::abs( actor.z ) < 200000.0f;
}

} // namespace

SceneScriptData ParseSceneScriptChunk( const std::vector<uint8_t>& bytes )
{
	SceneScriptData result;
	if ( bytes.size() < 16 ) {
		result.error = "scene chunk too small";
		return result;
	}

	const size_t wordCount = bytes.size() / 4;
	std::vector<uint32_t> words( wordCount );
	for ( size_t i = 0; i < wordCount; ++i ) {
		const size_t off = i * 4;
		words[i] = static_cast<uint32_t>( bytes[off] ) |
			( static_cast<uint32_t>( bytes[off + 1] ) << 8 ) |
			( static_cast<uint32_t>( bytes[off + 2] ) << 16 ) |
			( static_cast<uint32_t>( bytes[off + 3] ) << 24 );
	}

	size_t index = 0;
	while ( index < words.size() ) {
		const uint32_t topCmd = words[index++];
		if ( topCmd == 0x32U )
			break;
		if ( topCmd != 0x30U )
			continue;

		while ( index < words.size() && words[index] != 0x31U ) {
			const uint32_t cmd = words[index];
			if ( cmd == 0U ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 1U:
					case 2U:
						return subIndex + 3;
					case 3U:
					case 4U:
					case 0x4aU:
						return subIndex + 4;
					default:
						return subIndex + 1;
					}
				} );
			} else if ( cmd == 5U ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					return subCmd == 6U ? subIndex + 3 : subIndex + 1;
				} );
			} else if ( cmd == 7U || cmd == 8U || cmd == 10U ) {
				SceneActorData actor;
				actor.kind = cmd;
				bool haveBounds = false;
				int32_t minBounds[3] = {};
				int32_t maxBounds[3] = {};

				index = ParseUntilCmd31( words, index + 1, [&]( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 0x0fU:
						if ( subIndex + 1 < words.size() ) {
							if ( actor.modelRefCount == 0 )
								actor.firstModelRef = words[subIndex + 1];
							++actor.modelRefCount;
						}
						return subIndex + 2;
					case 0x10U:
						if ( subIndex + 3 < words.size() ) {
							actor.x = static_cast<float>( ToS32( words[subIndex + 1] ) ) / 16.0f;
							actor.y = static_cast<float>( ToS32( words[subIndex + 2] ) ) / 16.0f;
							actor.z = static_cast<float>( ToS32( words[subIndex + 3] ) ) / 16.0f;
							actor.hasPosition = true;
						}
						return subIndex + 4;
					case 0x11U:
						if ( subIndex + 3 < words.size() ) {
							const float yawFixed = static_cast<float>( ToS16( words[subIndex + 2] ) );
							actor.yawDegrees = yawFixed * ( 360.0f / 4096.0f );
						}
						return subIndex + 4;
					case 0x12U:
						if ( subIndex + 3 < words.size() ) {
							actor.scaleX = ClampFloat( static_cast<float>( ToS32( words[subIndex + 1] ) ) / 4096.0f, 0.05f, 16.0f );
							actor.scaleY = ClampFloat( static_cast<float>( ToS32( words[subIndex + 2] ) ) / 4096.0f, 0.05f, 16.0f );
							actor.scaleZ = ClampFloat( static_cast<float>( ToS32( words[subIndex + 3] ) ) / 4096.0f, 0.05f, 16.0f );
						}
						return subIndex + 4;
					case 0x13U:
						if ( subIndex + 1 < words.size() )
							actor.isPrimary = ( words[subIndex + 1] & 0xffU ) == 1U;
						return subIndex + 2;
					case 0x16U:
						if ( subIndex + 1 < words.size() )
							actor.renderFlags = words[subIndex + 1];
						return subIndex + 3;
					case 0x1bU:
						if ( subIndex + 3 < words.size() ) {
							haveBounds = true;
							minBounds[0] = ToS16( words[subIndex + 1] );
							minBounds[1] = ToS16( words[subIndex + 2] );
							minBounds[2] = ToS16( words[subIndex + 3] );
						}
						return subIndex + 4;
					case 0x1cU:
						if ( subIndex + 3 < words.size() ) {
							haveBounds = true;
							maxBounds[0] = ToS16( words[subIndex + 1] );
							maxBounds[1] = ToS16( words[subIndex + 2] );
							maxBounds[2] = ToS16( words[subIndex + 3] );
						}
						return subIndex + 4;
					case 0x17U:
						return subIndex + 10;
					case 0x18U:
						return subIndex + 5;
					case 0x33U:
					case 0x34U:
						return subIndex + 8;
					case 0x35U:
						return subIndex + 4;
					case 0x37U:
						return subIndex + 6;
					case 0x38U:
						return subIndex + 7;
					case 0x47U:
						return subIndex + 6;
					case 0x48U:
						return subIndex + 3;
					case 0x0bU:
					case 0x0cU:
					case 0x0eU:
					case 0x15U:
					case 0x19U:
					case 0x1aU:
					case 0x1dU:
					case 0x1eU:
					case 0x1fU:
					case 0x2aU:
					case 0x3dU:
					case 0x3eU:
					case 0x4dU:
						return subIndex + 2;
					default:
						return subIndex + 1;
					}
				} );

				FinalizeActor( actor, haveBounds, minBounds, maxBounds );
				if ( actor.hasPosition && PositionLooksValid( actor ) )
					result.actors.push_back( actor );
			} else if ( cmd == 9U ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 0x10U:
					case 0x11U:
					case 0x1cU:
						return subIndex + 4;
					case 0x1fU:
						return subIndex + 2;
					case 0x36U:
						return subIndex + 9;
					default:
						return subIndex + 1;
					}
				} );
			} else if ( cmd == 0x20U ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 0x10U:
					case 0x11U:
					case 0x12U:
					case 0x39U:
						return subIndex + 4;
					case 0x21U:
					case 0x3eU:
					case 0x49U:
						return subIndex + 2;
					case 0x24U:
						return subIndex + 3;
					case 0x3aU:
						return subIndex + 9;
					default:
						return subIndex + 1;
					}
				} );
			} else if ( cmd == 0x22U ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 0x0dU:
						return subIndex + 5;
					case 0x24U:
					case 0x25U:
					case 0x46U:
						return subIndex + 3;
					case 0x26U:
					case 0x27U:
					case 0x28U:
					case 0x29U:
						return subIndex + 2;
					case 0x2aU:
					case 0x2bU:
					case 0x45U:
						return subIndex + 3;
					default:
						return subIndex + 1;
					}
				} );
			} else if ( cmd == 0x2cU ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					return subCmd == 0x2dU ? subIndex + 3 : subIndex + 1;
				} );
			} else if ( cmd == 0x3bU ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					return subCmd == 0x3cU ? subIndex + 3 : subIndex + 1;
				} );
			} else if ( cmd == 0x3fU ) {
				index = ParseUntilCmd31( words, index + 1, [&]( uint32_t subCmd, size_t subIndex ) -> size_t {
					switch ( subCmd ) {
					case 0x4cU:
						if ( subIndex + 3 < words.size() ) {
							result.zoneCols = ( words[subIndex + 1] & 0xffffU ) + 500U;
							result.zoneRows = ( words[subIndex + 2] & 0xffffU ) + 500U;
							result.zoneLayers = words[subIndex + 3] & 0xffffU;
						}
						return subIndex + 4;
					case 0x4eU:
						return subIndex + 2;
					case 0x2eU:
					case 0x40U:
					case 0x41U:
					case 0x42U:
					case 0x43U:
					case 0x44U:
						return subIndex + 4;
					default:
						return subIndex + 1;
					}
				} );
			} else if ( cmd == 0x4fU ) {
				index = ParseUntilCmd31( words, index + 1, []( uint32_t subCmd, size_t subIndex ) -> size_t {
					return subCmd == 0x50U ? subIndex + 3 : subIndex + 1;
				} );
			} else {
				++index;
			}

			if ( index < words.size() && words[index] == 0x31U )
				++index;
		}

		if ( index < words.size() && words[index] == 0x31U )
			++index;
	}

	if ( result.actors.empty() ) {
		result.error = "no scene actors parsed from command chunk";
		return result;
	}

	result.valid = true;
	return result;
}

} // namespace jdpc

