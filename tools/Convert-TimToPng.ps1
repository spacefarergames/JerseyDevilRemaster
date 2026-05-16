#!/usr/bin/env pwsh
<#
.SYNOPSIS
Convert all TIM texture files extracted from BZE archives to PNG format.

.DESCRIPTION
This script scans extracted BZE directories for TIM texture files and converts them
to PNG format using ImageMagick (if available) or creates a hex dump for further analysis.

.PARAMETER InputPath
The path to the extracted BZE assets directory.

.PARAMETER OutputPath
The path where PNG files should be saved.

.EXAMPLE
.\Convert-TimToPng.ps1 -InputPath "F:\Spacefarer Bakery Retro Remasters Releases\Jersey Native\bze_extracted" -OutputPath ".\tim_png_output"
#>

param(
	[Parameter(Mandatory=$true, HelpMessage="Path to extracted BZE assets")]
	[string]$InputPath,

	[Parameter(Mandatory=$false, HelpMessage="Output path for PNG files")]
	[string]$OutputPath = ".\tim_output"
)

# Create output directory if it doesn't exist
if (-not (Test-Path $OutputPath)) {
	New-Item -ItemType Directory -Path $OutputPath -Force | Out-Null
	Write-Host "Created output directory: $OutputPath" -ForegroundColor Green
}

# Counter for statistics
$timFilesFound = 0
$timFilesConverted = 0
$convertedByTool = @{}

# Search for all TIM files in the input directory
Write-Host "Searching for TIM files in: $InputPath" -ForegroundColor Cyan
$timFiles = Get-ChildItem -Path $InputPath -Recurse -Filter "*.tim" -ErrorAction SilentlyContinue

if ($timFiles.Count -eq 0) {
	# Check if there are .bin files that might be TIM
	Write-Host "No .tim files found. Checking .bin files for TIM signature..." -ForegroundColor Yellow

	$binFiles = Get-ChildItem -Path $InputPath -Recurse -Filter "*.bin" -ErrorAction SilentlyContinue
	$timCandidates = @()

	foreach ($binFile in $binFiles) {
		try {
			$first4 = [System.IO.File]::ReadAllBytes($binFile.FullName) | Select-Object -First 4
			if ($first4.Count -ge 4 -and $first4[0] -eq 0x10 -and $first4[1] -eq 0x00 -and $first4[2] -eq 0x00 -and $first4[3] -eq 0x00) {
				$timCandidates += $binFile
			}
		} catch {
			# Skip files that can't be read
		}
	}

	if ($timCandidates.Count -gt 0) {
		Write-Host "Found $($timCandidates.Count) potential TIM files with TIM signature" -ForegroundColor Green
		$timFiles = $timCandidates
	} else {
		Write-Host "No TIM files found." -ForegroundColor Yellow
		exit 0
	}
}

$timFilesFound = $timFiles.Count
Write-Host "Found $timFilesFound TIM file(s)" -ForegroundColor Green

# Try to use ImageMagick if available
$imagemagickAvailable = $null -ne (Get-Command magick -ErrorAction SilentlyContinue)
if ($imagemagickAvailable) {
	Write-Host "ImageMagick found. Will attempt conversion." -ForegroundColor Cyan
}

# Create output structure matching input
foreach ($timFile in $timFiles) {
	$relativePath = $timFile.FullName.Substring($InputPath.Length).TrimStart('\')
	$outputDir = Join-Path $OutputPath ([System.IO.Path]::GetDirectoryName($relativePath))
	$outputName = [System.IO.Path]::GetFileNameWithoutExtension($timFile.Name) + ".png"
	$outputFile = Join-Path $outputDir $outputName

	# Create output directory
	if (-not (Test-Path $outputDir)) {
		New-Item -ItemType Directory -Path $outputDir -Force | Out-Null
	}

	Write-Host "`nProcessing: $relativePath"
	Write-Host "  Output: $outputFile"

	# Copy original TIM file alongside PNG for reference
	$timOutputPath = Join-Path $outputDir ([System.IO.Path]::GetFileName($timFile.FullName))
	Copy-Item -Path $timFile.FullName -Destination $timOutputPath -Force

	# Attempt conversion with ImageMagick if available
	if ($imagemagickAvailable) {
		try {
			# ImageMagick can read various formats, try to convert
			& magick convert "$($timFile.FullName)" "$outputFile" 2>&1 | Out-Null

			if (Test-Path $outputFile) {
				Write-Host "  ✓ Converted to PNG" -ForegroundColor Green
				$timFilesConverted++
				$convertedByTool["ImageMagick"] = ($convertedByTool["ImageMagick"] ?? 0) + 1
			} else {
				Write-Host "  ⚠ PNG conversion failed, but TIM file copied" -ForegroundColor Yellow
			}
		} catch {
			Write-Host "  ⚠ Conversion error: $_" -ForegroundColor Yellow
		}
	} else {
		Write-Host "  ℹ Copied TIM file (install ImageMagick for PNG conversion)" -ForegroundColor Cyan
	}
}

# Summary
Write-Host "`n" + "="*60
Write-Host "Conversion Summary" -ForegroundColor Cyan
Write-Host "="*60
Write-Host "TIM files found: $timFilesFound"
Write-Host "TIM files processed: $($timFiles.Count)"
Write-Host "PNG files created: $timFilesConverted"

if ($convertedByTool.Count -gt 0) {
	Write-Host "`nConversions by tool:"
	foreach ($tool in $convertedByTool.Keys) {
		Write-Host "  $tool`: $($convertedByTool[$tool])"
	}
}

Write-Host "`nOutput directory: $OutputPath"
Write-Host "="*60

# Offer suggestions
if ($timFilesConverted -eq 0 -and $timFilesFound -gt 0) {
	Write-Host "`n" -ForegroundColor Yellow
	Write-Host "Note: To convert TIM files to PNG, consider installing ImageMagick:" -ForegroundColor Yellow
	Write-Host "  1. Download from: https://imagemagick.org/script/download.php" -ForegroundColor Yellow
	Write-Host "  2. Install with: choco install imagemagick (or manual installer)" -ForegroundColor Yellow
	Write-Host "  3. Run this script again" -ForegroundColor Yellow
}

exit 0
