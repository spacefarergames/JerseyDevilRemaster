#pragma once

#include <windows.h>

#include <cstdint>
#include <string>
#include <vector>

namespace jdpc {

enum class FileOpenMode {
	Read,
	Write,
	ReadWrite
};

class GameFile {
public:
	GameFile();
	~GameFile();

	GameFile( const GameFile& ) = delete;
	GameFile& operator=( const GameFile& ) = delete;

	GameFile( GameFile&& other ) noexcept;
	GameFile& operator=( GameFile&& other ) noexcept;

	bool Open( const std::string& path, FileOpenMode mode = FileOpenMode::Read );
	void Close();

	bool IsOpen() const;
	uint32_t Read( void* destination, uint32_t bytesToRead );
	bool Seek( int32_t offset, DWORD method );
	uint32_t Tell() const;
	uint32_t Size() const;

	const std::string& Path() const;
	DWORD LastError() const;

private:
	HANDLE m_handle;
	std::string m_path;
	DWORD m_lastError;
};

struct FileReadResult {
	bool ok = false;
	std::string path;
	DWORD error = 0;
	std::vector<uint8_t> bytes;
};

std::string NormalizeGamePath( const char* path );
std::string ResolveExistingGamePath( const char* path );
bool FileExists( const char* path );
bool DirectoryExists( const char* path );
FileReadResult ReadWholeFile( const char* path );
std::vector<std::string> ListFiles( const char* directory, const char* extension );

} // namespace jdpc
