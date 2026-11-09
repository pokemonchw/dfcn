#requires -Version 5.1
[CmdletBinding()]
param(
    # Skip translation data extensions and the semantic model, while retaining
    # the independent native mods packaged alongside this core release.
    [switch] $BaseOnly
)

# Package native Windows binaries and public data extensions.
# This entry never builds code, deploys to a game, or controls Steam/the game.
$ErrorActionPreference = 'Stop'
. (Join-Path $PSScriptRoot 'package-windows-library.ps1')
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..'))
$workshopRoot = Join-Path $projectRoot 'workshop'
$contentRoot = Join-Path $workshopRoot 'content'
$windowsArchive = Join-Path $projectRoot 'DFCN-Windows-x64-minimal.zip'
$item = [IO.File]::ReadAllText((Join-Path $workshopRoot 'published-item.json')) | ConvertFrom-Json
$itemId = [string]$item.publishedfileid
if ($itemId -notmatch '^\d+$') { throw 'The saved Workshop item ID is invalid.' }
# Address catalog filenames contain two full hashes; keep the temporary prefix
# short enough for Windows PowerShell's ZIP extraction path limit.
$stagingRoot = Join-Path $workshopRoot ('pkg-' + [Guid]::NewGuid().ToString('N').Substring(0, 16))
$payloadRoot = Join-Path $stagingRoot 'content'
$outputPath = Join-Path $projectRoot 'DFCN-Windows-workshop.zip'

function Resolve-PackageDirectory([string] $path) {
    $resolved = [IO.Path]::GetFullPath($path)
    $prefix = $workshopRoot + [IO.Path]::DirectorySeparatorChar
    if (-not $resolved.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase)) {
        throw ('Package directory is outside the Workshop workspace: ' + $resolved)
    }
    return $resolved
}

function Remove-PackageDirectory([string] $path) {
    $resolved = Resolve-PackageDirectory $path
    if ([IO.Directory]::Exists($resolved)) {
        Remove-Item -LiteralPath $resolved -Recurse -Force
    }
}

function Install-PackageDirectory([string] $name) {
    $source = Resolve-PackageDirectory (Join-Path $stagingRoot $name)
    $destination = Resolve-PackageDirectory (Join-Path $workshopRoot $name)
    $previous = Resolve-PackageDirectory (Join-Path $stagingRoot ($name + '.previous'))
    if ([IO.Directory]::Exists($destination)) {
        Move-Item -LiteralPath $destination -Destination $previous
    }
    try {
        Move-Item -LiteralPath $source -Destination $destination
    } catch {
        if ([IO.Directory]::Exists($previous)) {
            Move-Item -LiteralPath $previous -Destination $destination
        }
        throw
    }
    Remove-PackageDirectory $previous
}

function Write-PackageArchive([string] $sourceRoot, [string] $destination,
                              [string] $entryPrefix = '') {
    $sourceRoot = Resolve-PackageDirectory $sourceRoot
    $destination = [IO.Path]::GetFullPath($destination)
    $projectPrefix = $projectRoot + [IO.Path]::DirectorySeparatorChar
    if (-not $destination.StartsWith($projectPrefix, [StringComparison]::OrdinalIgnoreCase)) {
        throw ('Package output is outside the project workspace: ' + $destination)
    }
    # Keep archive reads inside the selected content tree, including on systems
    # where recursive enumeration would otherwise follow a junction or symlink.
    $ancestor = $sourceRoot
    while ($true) {
        if (([IO.File]::GetAttributes($ancestor) -band [IO.FileAttributes]::ReparsePoint) -ne 0) {
            throw ('Package source is a junction or symlink: ' + $ancestor)
        }
        if ($ancestor.Equals($workshopRoot, [StringComparison]::OrdinalIgnoreCase)) { break }
        $ancestor = [IO.Path]::GetDirectoryName($ancestor)
    }
    if ([IO.File]::Exists($destination) -and
            ([IO.File]::GetAttributes($destination) -band [IO.FileAttributes]::ReparsePoint) -ne 0) {
        throw ('Package output is a symlink: ' + $destination)
    }
    $candidate = $destination + '.' + [Guid]::NewGuid().ToString('N') + '.tmp'
    try {
        $archiveStream = [IO.File]::Open($candidate, [IO.FileMode]::CreateNew,
            [IO.FileAccess]::Write, [IO.FileShare]::None)
        try {
            $archive = [IO.Compression.ZipArchive]::new($archiveStream,
                [IO.Compression.ZipArchiveMode]::Create, $true)
            try {
                $directories = [Collections.Generic.Stack[string]]::new()
                $directories.Push($sourceRoot)
                while ($directories.Count -gt 0) {
                    $directory = $directories.Pop()
                    foreach ($path in ([IO.Directory]::GetFileSystemEntries($directory) | Sort-Object)) {
                        $attributes = [IO.File]::GetAttributes($path)
                        if (($attributes -band [IO.FileAttributes]::ReparsePoint) -ne 0) {
                            throw ('Package content is a junction or symlink: ' + $path)
                        }
                        if (($attributes -band [IO.FileAttributes]::Directory) -ne 0) {
                            $directories.Push($path)
                            continue
                        }
                        # ZIP entry names use standard forward-slash separators.
                        $entryName = $entryPrefix + $path.Substring($sourceRoot.Length + 1).Replace('\', '/')
                        [void][IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
                            $archive, $path, $entryName, [IO.Compression.CompressionLevel]::Optimal)
                    }
                }
            } finally {
                $archive.Dispose()
            }
        } finally {
            $archiveStream.Dispose()
        }
        if ([IO.File]::Exists($destination)) {
            [IO.File]::Replace($candidate, $destination, [NullString]::Value)
        } else {
            [IO.File]::Move($candidate, $destination)
        }
    } finally {
        if ([IO.File]::Exists($candidate)) { [IO.File]::Delete($candidate) }
    }
}

function Write-PublicExtensionArchives {
    foreach ($directory in ([IO.Directory]::GetDirectories($workshopRoot) | Sort-Object)) {
        $directory = Resolve-PackageDirectory $directory
        $extensionContent = Join-Path $directory 'content'
        $manifestPath = Join-Path $extensionContent 'dfcn-extension.toml'
        $publishPath = Join-Path $directory 'publish.json'
        if (-not [IO.File]::Exists($manifestPath) -or -not [IO.File]::Exists($publishPath)) {
            continue
        }
        $publish = [IO.File]::ReadAllText($publishPath) | ConvertFrom-Json
        if ($null -eq $publish.visibility -or [string]$publish.visibility -ne '0') { continue }
        $infoPath = Join-Path $extensionContent 'info.txt'
        $identities = [regex]::Matches([IO.File]::ReadAllText($infoPath),
            '(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$')
        if ($identities.Count -ne 1) {
            throw ('Public extension must have one valid mod ID: ' + $infoPath)
        }
        $identity = $identities[0].Groups[1].Value
        $extensionArchive = Join-Path $directory ($identity + '.zip')
        Write-PackageArchive $extensionContent $extensionArchive ($identity + '/')
        Write-Host ('Public translation data package: ' + $extensionArchive) -ForegroundColor Green
    }
}

function Write-SemanticSearchArchive {
    $directory = Resolve-PackageDirectory (Join-Path $workshopRoot 'semantic-search')
    $semanticContent = Resolve-PackageDirectory (Join-Path $directory 'content')
    $manifestPath = Join-Path $semanticContent 'dfcn-semantic-search.toml'
    $infoPath = Join-Path $semanticContent 'info.txt'
    if (-not [IO.File]::Exists($manifestPath) -or -not [IO.File]::Exists($infoPath)) {
        return
    }
    $identities = [regex]::Matches([IO.File]::ReadAllText($infoPath),
        '(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$')
    if ($identities.Count -ne 1) {
        throw ('Semantic search mod must have one valid mod ID: ' + $infoPath)
    }
    $identity = $identities[0].Groups[1].Value
    $archive = Join-Path $directory ($identity + '.zip')
    Write-PackageArchive $semanticContent $archive ($identity + '/')
    Write-Host ('Independent semantic-search mod package: ' + $archive) -ForegroundColor Green
}

function Write-MouseCoordinatesArchive {
    $directory = Resolve-PackageDirectory (Join-Path $workshopRoot 'mouse-coordinates')
    $mouseContent = Resolve-PackageDirectory (Join-Path $directory 'content')
    $manifestPath = Join-Path $mouseContent 'dfcn-mouse-coordinates.toml'
    if (-not [IO.File]::Exists($manifestPath)) {
        throw ('Mouse coordinates mod manifest is missing: ' + $manifestPath)
    }
    $infoPath = Join-Path $mouseContent 'info.txt'
    $identities = [regex]::Matches([IO.File]::ReadAllText($infoPath),
        '(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$')
    if ($identities.Count -ne 1) {
        throw ('Mouse coordinates mod must have one valid mod ID: ' + $infoPath)
    }
    $identity = $identities[0].Groups[1].Value
    $libraryDirectory = Resolve-PackageDirectory (Join-Path $mouseContent 'dfcn')
    [void][IO.Directory]::CreateDirectory($libraryDirectory)
    $source = Join-Path $projectRoot 'dfcn_mouse_coordinates.dll'
    $destination = Join-Path $libraryDirectory 'dfcn_mouse_coordinates.dll'
    Write-StrippedWindowsLibrary $source $destination
    $archive = Join-Path $directory 'dfcn-mouse-coordinates.zip'
    Write-PackageArchive $mouseContent $archive ($identity + '/')
    Write-Host ('Independent mouse-coordinates mod package: ' + $archive) -ForegroundColor Green
}

function Write-MapPreviewArchive {
    $directory = Resolve-PackageDirectory (Join-Path $workshopRoot 'map-preview')
    $previewContent = Resolve-PackageDirectory (Join-Path $directory 'content')
    $manifestPath = Join-Path $previewContent 'dfcn-map-preview.toml'
    if (-not [IO.File]::Exists($manifestPath)) {
        throw ('Map preview mod manifest is missing: ' + $manifestPath)
    }
    $infoPath = Join-Path $previewContent 'info.txt'
    $identities = [regex]::Matches([IO.File]::ReadAllText($infoPath),
        '(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$')
    if ($identities.Count -ne 1 -or $identities[0].Groups[1].Value -ne 'dfcn-map-preview') {
        throw ('Map preview mod must have the independent mod ID: ' + $infoPath)
    }
    $identity = $identities[0].Groups[1].Value
    $libraryDirectory = Resolve-PackageDirectory (Join-Path $previewContent 'dfcn')
    [void][IO.Directory]::CreateDirectory($libraryDirectory)
    $source = Join-Path $projectRoot 'dfcn_map_preview.dll'
    $destination = Join-Path $libraryDirectory 'dfcn_map_preview.dll'
    Write-StrippedWindowsLibrary $source $destination
    Copy-Item -LiteralPath (Join-Path $projectRoot 'LICENSE') -Destination (Join-Path $previewContent 'LICENSE') -Force
    $archive = Join-Path $directory 'dfcn-map-preview.zip'
    Write-PackageArchive $previewContent $archive ($identity + '/')
    Write-Host ('Independent map-preview mod package: ' + $archive) -ForegroundColor Green
}

function Write-RidingArchive {
    $directory = Resolve-PackageDirectory (Join-Path $workshopRoot 'riding')
    $ridingContent = Resolve-PackageDirectory (Join-Path $directory 'content')
    $manifestPath = Join-Path $ridingContent 'dfcn-riding.toml'
    if (-not [IO.File]::Exists($manifestPath)) {
        throw ('Riding mod manifest is missing: ' + $manifestPath)
    }
    $infoPath = Join-Path $ridingContent 'info.txt'
    $identities = [regex]::Matches([IO.File]::ReadAllText($infoPath),
        '(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$')
    if ($identities.Count -ne 1 -or $identities[0].Groups[1].Value -ne 'dfcn-riding') {
        throw ('Riding mod must have the independent mod ID: ' + $infoPath)
    }
    $identity = $identities[0].Groups[1].Value
    $libraryDirectory = Resolve-PackageDirectory (Join-Path $ridingContent 'dfcn')
    [void][IO.Directory]::CreateDirectory($libraryDirectory)
    $source = Join-Path $projectRoot 'dfcn_riding.dll'
    $destination = Join-Path $libraryDirectory 'dfcn_riding.dll'
    Write-StrippedWindowsLibrary $source $destination
    Copy-Item -LiteralPath (Join-Path $projectRoot 'LICENSE') -Destination (Join-Path $ridingContent 'LICENSE') -Force
    $archive = Join-Path $directory 'dfcn-riding.zip'
    Write-PackageArchive $ridingContent $archive ($identity + '/')
    Write-Host ('Independent riding mod package: ' + $archive) -ForegroundColor Green
}

try {
    & "$env:SystemRoot\System32\WindowsPowerShell\v1.0\powershell.exe" -NoLogo -NoProfile -NonInteractive -ExecutionPolicy Bypass -File (Join-Path $PSScriptRoot 'package-windows.ps1')
    if ($LASTEXITCODE -ne 0) { throw ('Windows packaging failed with exit code ' + $LASTEXITCODE) }

    Add-Type -AssemblyName System.IO.Compression
    Add-Type -AssemblyName System.IO.Compression.FileSystem
    [void][IO.Directory]::CreateDirectory($payloadRoot)
    # Recreate the upload tree from selected inputs. Stray archives, caches or
    # earlier payloads in workshop/content cannot be carried into another upload.
    foreach ($name in @('info.txt', 'INSTALL.txt', 'CHANGELOG.txt', 'install.bat')) {
        Copy-Item -LiteralPath (Join-Path $contentRoot $name) -Destination (Join-Path $payloadRoot $name)
    }
    $windowsFolder = Join-Path $payloadRoot 'DFCN'
    [IO.Compression.ZipFile]::ExtractToDirectory($windowsArchive, $windowsFolder)
    [IO.File]::WriteAllText((Join-Path $windowsFolder 'dfhooks_dfcn.ini'),
        "../../workshop/content/975370/$itemId/DFCN/dfcn/dfhooks_dfcn.dll`n",
        [Text.UTF8Encoding]::new($false))
    # This payload now uses a Workshop INI, so its nearby instructions must too.
    Copy-Item -LiteralPath (Join-Path $payloadRoot 'INSTALL.txt') -Destination (Join-Path $windowsFolder 'INSTALL.txt') -Force

    # Complete the archive before replacing the upload tree. Failed archive
    # creation leaves the previous upload folder available; replace it as a whole.
    Write-PackageArchive $payloadRoot $outputPath
    Install-PackageDirectory 'content'
    Write-MouseCoordinatesArchive
    Write-MapPreviewArchive
    Write-RidingArchive
    # Extensions remain separate from the base Workshop payload. Private data
    # packages are never selected for these public release archives.
    if (-not $BaseOnly) {
        Write-PublicExtensionArchives
        Write-SemanticSearchArchive
    }
    Write-Host ('Workshop content: ' + $contentRoot) -ForegroundColor Green
    Write-Host ('Created: ' + $outputPath)
} catch {
    [Console]::Error.WriteLine('Workshop packaging failed: ' + $_.Exception.Message)
    exit 1
} finally {
    Remove-PackageDirectory $stagingRoot
}
exit 0
