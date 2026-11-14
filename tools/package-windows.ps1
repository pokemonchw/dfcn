#requires -Version 5.1
[CmdletBinding()]
param()

# Package existing runtime files. Paths are relative to this script, never to
# the caller's working directory. This entry does not build or deploy code.
$ErrorActionPreference = 'Stop'
. (Join-Path $PSScriptRoot 'package-windows-library.ps1')
$projectRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..'))
$gameRoot = [IO.Directory]::GetParent($projectRoot).FullName
$bootstrapPath = Join-Path $gameRoot 'dfhooks.dll'
$imageConfigPath = Join-Path $projectRoot 'data\runtime\native-pe-images.json'
if ([IO.File]::Exists($imageConfigPath)) {
    $imageConfig = [IO.File]::ReadAllText($imageConfigPath) | ConvertFrom-Json
    $configuredBootstrap = [string]$imageConfig.bootstrap
    if (-not [string]::IsNullOrWhiteSpace($configuredBootstrap)) {
        if (-not [IO.Path]::IsPathRooted($configuredBootstrap)) {
            $configuredBootstrap = [IO.Path]::Combine($projectRoot, $configuredBootstrap)
        }
        $bootstrapPath = [IO.Path]::GetFullPath($configuredBootstrap)
    } else {
        foreach ($imagePath in @([string]$imageConfig.game, [string]$imageConfig.reference)) {
            if ([string]::IsNullOrWhiteSpace($imagePath)) { continue }
            if (-not [IO.Path]::IsPathRooted($imagePath)) {
                $imagePath = [IO.Path]::Combine($projectRoot, $imagePath)
            }
            $gameRoot = [IO.Path]::GetDirectoryName([IO.Path]::GetFullPath($imagePath))
            $bootstrapPath = Join-Path $gameRoot 'dfhooks.dll'
            break
        }
    }
}
$outputPath = Join-Path $projectRoot 'DFCN-Windows-x64-minimal.zip'
$stagingPath = Join-Path $projectRoot ('DFCN-Windows-x64-minimal.' + [Guid]::NewGuid().ToString('N') + '.tmp')
$binaryStagingRoot = Join-Path $projectRoot ('DFCN-Windows-libraries.' + [Guid]::NewGuid().ToString('N') + '.tmp')
$archive = $null
$archiveStream = $null
$entryCount = 0

function Add-RuntimeFile([string] $source, [string] $entryName) {
    if ($entryName -in @('dfcn/dfcn_core.dll', 'dfcn/dfhooks_dfcn.dll', 'dfcn/dfcn_dfhack_switch.dll', 'dfcn/dfcn_mouse_coordinates.dll')) {
        $strippedPath = Join-Path $script:binaryStagingRoot ([IO.Path]::GetFileName($source))
        Write-StrippedWindowsLibrary $source $strippedPath
        $source = $strippedPath
    }
    [void][IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
        $script:archive, $source, $entryName.Replace('\', '/'),
        [IO.Compression.CompressionLevel]::Optimal)
    $script:entryCount++
}

function Add-RuntimeText([string] $entryName, [string] $content) {
    $entry = $script:archive.CreateEntry($entryName, [IO.Compression.CompressionLevel]::Optimal)
    $stream = $entry.Open()
    try {
        $bytes = [Text.UTF8Encoding]::new($false).GetBytes($content)
        $stream.Write($bytes, 0, $bytes.Length)
    } finally {
        $stream.Dispose()
    }
    $script:entryCount++
}

try {
    Add-Type -AssemblyName System.IO.Compression
    Add-Type -AssemblyName System.IO.Compression.FileSystem
    [void][IO.Directory]::CreateDirectory($binaryStagingRoot)
    Write-Host 'Packaging the existing Windows translation runtime...'
    $archiveStream = [IO.File]::Open($stagingPath, [IO.FileMode]::CreateNew, [IO.FileAccess]::Write, [IO.FileShare]::None)
    $archive = [IO.Compression.ZipArchive]::new($archiveStream, [IO.Compression.ZipArchiveMode]::Create, $true)

    Add-RuntimeFile $bootstrapPath 'dfhooks.dll'
    # Exactly one loader path; no second root-level copy of dfhooks_dfcn.dll.
    Add-RuntimeText 'dfhooks_dfcn.ini' "dfcn/dfhooks_dfcn.dll`n"
    Add-RuntimeFile (Join-Path $projectRoot 'LICENSE') 'dfcn/LICENSE'
    Add-RuntimeFile (Join-Path $projectRoot 'docs/install-windows.zh-CN.txt') 'INSTALL.txt'
    Add-RuntimeFile (Join-Path $projectRoot 'workshop/content/CHANGELOG.txt') 'CHANGELOG.txt'
    Add-RuntimeFile (Join-Path $projectRoot 'docs/translation-extensions.zh-CN.md') 'dfcn/docs/translation-extensions.zh-CN.md'
    # The shipped configuration explicitly selects font.otf. Keep that font and
    # its license mandatory instead of selecting an unrelated local font first.
    foreach ($name in @(
        'dfcn_core.dll', 'dfhooks_dfcn.dll', 'dfcn_dfhack_switch.dll', 'dfcn_mouse_coordinates.dll', 'data/runtime/config.ini',
        'data/runtime/font.otf', 'data/runtime/font.LICENSE.txt',
        'data/runtime/native-addresses/pe-seed.bin',
        'data/runtime/translations.tsv', 'data/runtime/name-editor.tsv',
        'data/runtime/instrument-translations.tsv', 'data/runtime/procedural-terms.tsv',
        'data/runtime/procedural-word-senses.tsv', 'data/runtime/adventure-target-translations.tsv',
        'data/runtime/adventure-crafting-translations.tsv',
        'data/runtime/civilization-name-terms.tsv',
        'data/runtime/site-name-decisions.tsv',
        'data/runtime/site-name-imagery.tsv',
        'data/runtime/river-name-imagery.tsv', 'data/runtime/river-name-constructions.tsv',
        'data/runtime/river-name-generics.tsv', 'data/runtime/river-name-decisions.tsv',
        'data/runtime/volcano-name-heads.tsv',
        'data/runtime/site-government-parent-suffixes.tsv',
        'data/runtime/site-government-name-terms.tsv',
        'data/runtime/site-government-independent-suffixes.tsv',
        'data/runtime/character-name-lexicon.tsv', 'data/runtime/character-name-overrides.tsv',
        'data/runtime/character-native-senses.tsv',
        'data/runtime/character-surname-lexicon.tsv',
        'data/runtime/character-surname-classes.tsv',
        'data/runtime/character-surname-constructions.tsv',
        'data/runtime/character-surname-context-imagery.tsv',
        'data/runtime/english-pronunciation/britfone.csv',
        'data/runtime/english-pronunciation/britfone.LICENSE',
        'data/runtime/english-pronunciation/britfone.README',
        'data/runtime/english-pronunciation/mfa-english-uk.dict',
        'data/runtime/english-pronunciation/mfa-english-uk-g2p.fst',
        'data/runtime/english-pronunciation/mfa-english-uk-g2p-graphemes.sym',
        'data/runtime/english-pronunciation/mfa-english-uk-g2p-phones.sym',
        'data/runtime/english-pronunciation/mfa-english-uk-g2p-meta.json',
        'data/runtime/english-pronunciation/MFA-LICENSE.txt',
        'data/runtime/english-pronunciation/SOURCE',
        'data/runtime/pinyin-data/pinyin.txt', 'data/runtime/pinyin-data/SOURCE',
        'data/runtime/phrase-pinyin-data/large_pinyin.txt',
        'data/runtime/phrase-pinyin-data/LICENSE', 'data/runtime/phrase-pinyin-data/SOURCE',
        'data/runtime/search-concepts.tsv', 'data/runtime/search-lexemes.tsv',
        'data/runtime/search-native-bindings.tsv', 'data/runtime/search-relations.tsv',
        'data/runtime/search-predicates.toml',
        'data/runtime/dfhack-help-translations.tsv', 'data/runtime/dfhack-help-overrides.tsv',
        'data/runtime/dfhack-help-command-overrides.tsv', 'data/runtime/dfhack-output-core.tsv',
        'data/runtime/dfhack-output-translations.tsv', 'data/runtime/dfhack-output-stonesense.tsv',
        'data/runtime/dfhack-overlay-plugin-controls.tsv', 'data/runtime/dfhack-overlay-script-controls.tsv'
    )) {
        Add-RuntimeFile (Join-Path $projectRoot $name) ('dfcn/' + $name)
    }
    foreach ($name in @('dfhack-help.LICENSE', 'lua-output.LICENSE', 'pinyin-data/LICENSE')) {
        Add-RuntimeFile (Join-Path $projectRoot ('third_party/' + $name)) ('dfcn/data/runtime/' + $name)
    }

    # Include production address catalogs for this seed.
    # Other game images retain the runtime's existing address discovery path.
    $seedHash = (Get-FileHash -LiteralPath (Join-Path $projectRoot 'data/runtime/native-addresses/pe-seed.bin') -Algorithm SHA256).Hash.ToLowerInvariant()
    $cacheRoot = Join-Path $projectRoot 'data/runtime/native-addresses/cache'
    if ([IO.Directory]::Exists($cacheRoot)) {
        $cachePattern = '^[0-9a-f]{64}-' + $seedHash + '\.bin$'
        foreach ($file in ([IO.Directory]::GetFiles($cacheRoot, '*.bin') | Sort-Object)) {
            if ([IO.Path]::GetFileName($file) -cnotmatch $cachePattern) { continue }
            $relative = $file.Substring($projectRoot.Length + 1).Replace('\', '/')
            Add-RuntimeFile $file ('dfcn/' + $relative)
        }
    }

    $rulesRoot = Join-Path $projectRoot 'data\runtime\rulesets'
    # The complete TOML tree is loaded recursively by the runtime.
    foreach ($file in ([IO.Directory]::GetFiles($rulesRoot, '*.toml', [IO.SearchOption]::AllDirectories) | Sort-Object)) {
        $relative = $file.Substring($projectRoot.Length + 1).Replace('\', '/')
        Add-RuntimeFile $file ('dfcn/' + $relative)
    }
    # OpenCC loads its text dictionaries at runtime; retain the complete tree,
    # including the upstream configuration, source attribution and license.
    $openccRoot = Join-Path $projectRoot 'data\runtime\opencc'
    foreach ($file in ([IO.Directory]::GetFiles($openccRoot, '*', [IO.SearchOption]::AllDirectories) | Sort-Object)) {
        $relative = $file.Substring($projectRoot.Length + 1).Replace('\', '/')
        Add-RuntimeFile $file ('dfcn/' + $relative)
    }
    # Collect local attribution and license texts into one runtime notice.
    # No old ZIP, separate game installation, network, or development tool is
    # needed to obtain these texts when the script is run again.
    $notices = [Text.StringBuilder]::new()
    [void]$notices.AppendLine('# Minimal runtime: third-party attribution and licenses')
    [void]$notices.AppendLine()
    [void]$notices.AppendLine('The referenced development sources are omitted from this runtime package. License texts and translator credits follow below.')
    [void]$notices.AppendLine()
    [void]$notices.AppendLine([IO.File]::ReadAllText((Join-Path $projectRoot 'THIRD_PARTY_NOTICES.md')))
    foreach ($relative in @(
        'data/upstream/licenses/dfi18n-data.LICENSE.md', 'data/upstream/licenses/dfzh-data.LICENSE.md',
        'third_party/dfzh-rules-engine.LICENSE', 'third_party/tomlplusplus/LICENSE',
        'third_party/dfhooks.LICENSE', 'data/upstream/licenses/ECDICT.LICENSE',
        'third_party/dfhack-help.LICENSE', 'third_party/lua-output.LICENSE',
        'third_party/pinyin-data/LICENSE', 'data/runtime/phrase-pinyin-data/LICENSE',
        'data/runtime/english-pronunciation/britfone.LICENSE',
        'data/runtime/english-pronunciation/MFA-LICENSE.txt',
        'third_party/opencc/LICENSE', 'third_party/opencc/SOURCE'
    )) {
        [void]$notices.AppendLine()
        [void]$notices.AppendLine('## ' + $relative)
        [void]$notices.AppendLine()
        [void]$notices.AppendLine([IO.File]::ReadAllText((Join-Path $projectRoot $relative)))
    }
    [void]$notices.AppendLine()
    [void]$notices.AppendLine('## data/upstream/objects.zh-Hans.po translator credits')
    [void]$notices.AppendLine()
    foreach ($line in [IO.File]::ReadLines((Join-Path $projectRoot 'data/upstream/objects.zh-Hans.po'))) {
        if (-not $line.StartsWith('#')) { break }
        [void]$notices.AppendLine($line)
    }
    Add-RuntimeText 'dfcn/THIRD_PARTY_NOTICES.md' $notices.ToString()

    $archive.Dispose()
    $archive = $null
    $archiveStream.Dispose()
    $archiveStream = $null
    # Publish only a fully written ZIP. A failed package leaves the old ZIP.
    if ([IO.File]::Exists($outputPath)) {
        [IO.File]::Replace($stagingPath, $outputPath, [NullString]::Value)
    } else {
        [IO.File]::Move($stagingPath, $outputPath)
    }
    $sizeMiB = [Math]::Round(([IO.FileInfo]::new($outputPath)).Length / 1MB, 2)
    Write-Host "Created: $outputPath" -ForegroundColor Green
    Write-Host "Files: $entryCount; size: $sizeMiB MiB"
    Write-Host 'Extract the ZIP into the game folder containing Dwarf Fortress.exe.'
} catch {
    [Console]::Error.WriteLine('Packaging failed: ' + $_.Exception.Message)
    exit 1
} finally {
    if ($null -ne $archive) { $archive.Dispose() }
    if ($null -ne $archiveStream) { $archiveStream.Dispose() }
    if ([IO.Directory]::Exists($binaryStagingRoot)) {
        Remove-Item -LiteralPath $binaryStagingRoot -Recurse -Force
    }
    if ([IO.File]::Exists($stagingPath)) {
        try { [IO.File]::Delete($stagingPath) }
        catch { [Console]::Error.WriteLine('Could not remove temporary package: ' + $stagingPath + ': ' + $_.Exception.Message) }
    }
}
exit 0
