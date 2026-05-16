#include "file_system.hpp"

#include <algorithm>

namespace jdpc {
namespace {

std::string GetExecutableDirectory()
{
	char path[MAX_PATH] = {};
	GetModuleFileNameA( nullptr, path, sizeof( path ) );

	char* lastSlash = strrchr( path, '\\' );
	if ( lastSlash ) {
		*lastSlash = '\0';
		return path;
	}

	return ".";
}

std::string GetOriginalBinDirectory()
{
	return "F:\\Spacefarer Bakery Retro Remasters Releases\\Jersey Native\\bin";
}

bool IsAbsolutePath( const std::string& path )
{
	return path.size() >= 2 && path[1] == ':';
}

bool ExistsRaw( const std::string& path )
{
	const DWORD attributes = GetFileAttributesA( path.c_str() );
	return attributes != INVALID_FILE_ATTRIBUTES;
}

bool IsFileRaw( const std::string& path )
{
	const DWORD attributes = GetFileAttributesA( path.c_str() );
	return attributes != INVALID_FILE_ATTRIBUTES && !( attributes & FILE_ATTRIBUTE_DIRECTORY );
}

bool IsDirectoryRaw( const std::string& path )
{
	const DWORD attributes = GetFileAttributesA( path.c_str() );
	return attributes != INVALID_FILE_ATTRIBUTES && ( attributes & FILE_ATTRIBUTE_DIRECTORY );
}

std::string FullPath( const std::string& path )
{
	char resolved[MAX_PATH] = {};
	if ( GetFullPathNameA( path.c_str(), sizeof( resolved ), resolved, nullptr ) )
		return resolved;
	return path;
}

} // namespace

GameFile::GameFile()
	: m_handle( INVALID_HANDLE_VALUE )
	, m_lastError( 0 )
{
}

GameFile::~GameFile()
{
	Close();
}

GameFile::GameFile( GameFile&& other ) noexcept
	: m_handle( other.m_handle )
	, m_path( std::move( other.m_path ) )
	, m_lastError( other.m_lastError )
{
	other.m_handle = INVALID_HANDLE_VALUE;
	other.m_lastError = 0;
}

GameFile& GameFile::operator=( GameFile&& other ) noexcept
{
	if ( this != &other ) {
		Close();
		m_handle = other.m_handle;
		m_path = std::move( other.m_path );
		m_lastError = other.m_lastError;
		other.m_handle = INVALID_HANDLE_VALUE;
		other.m_lastError = 0;
	}
	return *this;
}

bool GameFile::Open( const std::string& path, FileOpenMode mode )
{
	Close();
	m_path = ResolveExistingGamePath( path.c_str() );

	DWORD access = GENERIC_READ;
	DWORD creation = OPEN_EXISTING;
	if ( mode == FileOpenMode::Write ) {
		access = GENERIC_WRITE;
		creation = CREATE_ALWAYS;
	} else if ( mode == FileOpenMode::ReadWrite ) {
		access = GENERIC_READ | GENERIC_WRITE;
		creation = OPEN_ALWAYS;
	}

	m_handle = CreateFileA( m_path.c_str(), access, FILE_SHARE_READ, nullptr, creation, FILE_ATTRIBUTE_NORMAL, nullptr );
	if ( m_handle == INVALID_HANDLE_VALUE ) {
		m_lastError = GetLastError();
		return false;
	}

	m_lastError = 0;
	return true;
}

void GameFile::Close()
{
	if ( m_handle != INVALID_HANDLE_VALUE ) {
		CloseHandle( m_handle );
		m_handle = INVALID_HANDLE_VALUE;
	}
}

bool GameFile::IsOpen() const
{
	return m_handle != INVALID_HANDLE_VALUE;
}

uint32_t GameFile::Read( void* destination, uint32_t bytesToRead )
{
	if ( !IsOpen() || !destination || !bytesToRead )
		return 0;

	DWORD bytesRead = 0;
	if ( !ReadFile( m_handle, destination, bytesToRead, &bytesRead, nullptr ) ) {
		m_lastError = GetLastError();
		return 0;
	}

	m_lastError = 0;
	return bytesRead;
}

bool GameFile::Seek( int32_t offset, DWORD method )
{
	if ( !IsOpen() )
		return false;

	const DWORD result = SetFilePointer( m_handle, offset, nullptr, method );
	if ( result == INVALID_SET_FILE_POINTER && GetLastError() != NO_ERROR ) {
		m_lastError = GetLastError();
		return false;
	}

	m_lastError = 0;
	return true;
}

uint32_t GameFile::Tell() const
{
	if ( !IsOpen() )
		return 0;

	return SetFilePointer( m_handle, 0, nullptr, FILE_CURRENT );
}

uint32_t GameFile::Size() const
{
	if ( !IsOpen() )
		return 0;

	return GetFileSize( m_handle, nullptr );
}

const std::string& GameFile::Path() const
{
	return m_path;
}

DWORD GameFile::LastError() const
{
	return m_lastError;
}

std::string NormalizeGamePath( const char* path )
{
	std::string normalized = path ? path : "";
	std::replace( normalized.begin(), normalized.end(), '/', '\\' );
	return normalized;
}

std::string ResolveExistingGamePath( const char* path )
{
	const std::string normalized = NormalizeGamePath( path );
	if ( normalized.empty() )
		return normalized;

	if ( IsAbsolutePath( normalized ) )
		return FullPath( normalized );

	const std::string currentRelative = FullPath( normalized );
	if ( ExistsRaw( currentRelative ) )
		return currentRelative;

	const std::string exeRelative = FullPath( GetExecutableDirectory() + "\\" + normalized );
	if ( ExistsRaw( exeRelative ) )
		return exeRelative;

	const std::string originalRelative = FullPath( GetOriginalBinDirectory() + "\\" + normalized );
	if ( ExistsRaw( originalRelative ) )
		return originalRelative;

	return currentRelative;
}

bool FileExists( const char* path )
{
	return IsFileRaw( ResolveExistingGamePath( path ) );
}

bool DirectoryExists( const char* path )
{
	return IsDirectoryRaw( ResolveExistingGamePath( path ) );
}

FileReadResult ReadWholeFile( const char* path )
{
	FileReadResult result;
	GameFile file;
	if ( !file.Open( path, FileOpenMode::Read ) ) {
		result.path = file.Path();
		result.error = file.LastError();
		return result;
	}

	const uint32_t size = file.Size();
	result.bytes.resize( size );
	const uint32_t read = size ? file.Read( result.bytes.data(), size ) : 0;
	result.ok = ( read == size );
	result.path = file.Path();
	result.error = file.LastError();
	return result;
}

std::vector<std::string> ListFiles( const char* directory, const char* extension )
{
	std::vector<std::string> files;
	const std::string resolvedDirectory = ResolveExistingGamePath( directory );
	if ( !IsDirectoryRaw( resolvedDirectory ) )
		return files;

	std::string pattern = resolvedDirectory + "\\*";
	if ( extension && extension[0] )
		pattern += extension;

	WIN32_FIND_DATAA data = {};
	HANDLE find = FindFirstFileA( pattern.c_str(), &data );
	if ( find == INVALID_HANDLE_VALUE )
		return files;

	do {
		if ( !( data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) )
			files.push_back( resolvedDirectory + "\\" + data.cFileName );
	} while ( FindNextFileA( find, &data ) );

	FindClose( find );
	return files;
}

} // namespace jdpc
