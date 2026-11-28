# Strip only a packaging copy with the project's fixed native Windows toolchain.
function Write-StrippedWindowsLibrary([string] $source, [string] $destination) {
    $stripTool = 'C:\Users\WIN11\AppData\Local\Programs\dfcn-toolchains\w64devkit-2.9.1\w64devkit\bin\strip.exe'
    if (-not [IO.File]::Exists($stripTool)) {
        throw ('Required native Windows strip tool is missing: ' + $stripTool)
    }
    $candidate = $destination + '.' + [Guid]::NewGuid().ToString('N') + '.tmp'
    try {
        & $stripTool '--strip-unneeded' '-o' $candidate $source
        if ($LASTEXITCODE -ne 0) {
            throw ('Windows library stripping failed with exit code ' + $LASTEXITCODE + ': ' + $source)
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

# Mirror catalog_digest() in native_pe_resolver.h. Caches belong to the seed
# and the compiled supplements together, in their original declaration order.
function Get-WindowsCatalogHash([string] $root) {
    $seed = Join-Path $root 'data/runtime/native-addresses/pe-seed.bin'
    $digest = [Security.Cryptography.SHA256]::Create()
    $buffer = [IO.MemoryStream]::new()
    $writer = [IO.BinaryWriter]::new($buffer)
    try {
        $writer.Write($digest.ComputeHash([IO.File]::ReadAllBytes($seed)))
        foreach ($file in @('native_pe_5317_bindings.inc', 'native_pe_classic_5317_bindings.inc')) {
            $source = [IO.File]::ReadAllText((Join-Path $root "src/$file"))
            foreach ($kind in @('Range', 'Byte')) {
                $table = [regex]::Match($source, "(?s)inline constexpr $kind \w+\[\] = \{(.*?)\};")
                if (-not $table.Success) { throw "Missing $kind table in $file" }
                $entries = [regex]::Replace($table.Groups[1].Value, '//[^\r\n]*', '')
                $rows = [regex]::Matches($entries, '\{\s*(0x[\da-fA-F]+),\s*(0x[\da-fA-F]+),\s*(0x[\da-fA-F]+)\s*\}')
                $writer.Write([uint32]$rows.Count)
                foreach ($row in $rows) {
                    $writer.Write([uint32]$row.Groups[1].Value)
                    if ($kind -eq 'Range') {
                        $writer.Write([uint32]$row.Groups[2].Value)
                        $writer.Write([uint32]$row.Groups[3].Value)
                    } else {
                        $writer.Write([byte]$row.Groups[2].Value)
                        $writer.Write([byte]$row.Groups[3].Value)
                    }
                }
            }
        }
        $resolver = [IO.File]::ReadAllText((Join-Path $root 'src/native_pe_resolver.h'))
        $types = [regex]::Match($resolver, '(?s)kSupplementalVtableTypes\[\] = \{(.*?)\};')
        if (-not $types.Success) { throw 'Missing supplemental vtable types in native_pe_resolver.h' }
        $entries = [regex]::Replace($types.Groups[1].Value, '//[^\r\n]*', '')
        foreach ($row in [regex]::Matches($entries, '\{\s*(0x[\da-fA-F]+),\s*"([^"]+)"\s*\}')) {
            $writer.Write([uint32]$row.Groups[1].Value)
            $writer.Write([Text.Encoding]::ASCII.GetBytes($row.Groups[2].Value))
            $writer.Write([byte]0)
        }
        $writer.Flush()
        $buffer.Position = 0
        return [BitConverter]::ToString($digest.ComputeHash($buffer)).Replace('-', '').ToLowerInvariant()
    } finally {
        $writer.Dispose()
        $digest.Dispose()
    }
}
