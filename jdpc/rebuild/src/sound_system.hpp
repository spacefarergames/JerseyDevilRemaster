#pragma once

#include <string>
#include <vector>
#include <memory>

namespace jdpc {

class SoundSystem {
public:
	enum class SoundEffect {
		PlayerJump,
		PlayerAttack,
		EnemyHit,
		CollectiblePickup,
		LevelComplete,
		GameOver,
		MenuSelect,
		Count
	};

	SoundSystem();
	~SoundSystem();

	void Initialize();
	void Shutdown();
	void Update( float deltaTime );

	void PlaySoundEffect( SoundEffect effect, float volume = 1.0f );
	void PlayBackgroundMusic( const std::string& musicPath, bool loop = true );
	void StopBackgroundMusic();
	void SetMasterVolume( float volume );

	float GetMasterVolume() const { return m_masterVolume; }
	bool IsMusicPlaying() const { return m_musicPlaying; }

private:
	struct SoundBuffer {
		std::vector<uint8_t> data;
		uint32_t sampleRate = 0;
		uint16_t channels = 0;
		uint16_t bitsPerSample = 0;
		bool valid = false;
	};

	std::vector<SoundBuffer> m_soundEffects;
	SoundBuffer m_backgroundMusic;
	float m_masterVolume = 1.0f;
	bool m_musicPlaying = false;
	bool m_initialized = false;

	SoundBuffer LoadWavFile( const std::string& path );
	SoundBuffer LoadAifFile( const std::string& path );
};

} // namespace jdpc
