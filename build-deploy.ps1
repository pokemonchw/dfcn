#requires -Version 5.1
[CmdletBinding()]
param()

# This machine's only build/deploy entry point. Do not discover or fall back to
# tools on PATH, the incomplete temporary toolchain, or a different build system.
$ErrorActionPreference = 'Stop'
$PSNativeCommandUseErrorActionPreference = $false
$projectRoot = [System.IO.Path]::GetFullPath($PSScriptRoot)
$python = Join-Path $env:USERPROFILE '.cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe'
$toolchain = Join-Path $env:LOCALAPPDATA 'Programs\dfcn-toolchains\w64devkit-2.9.1\w64devkit'
$compiler = Join-Path $toolchain 'bin\g++.exe'
$sdl = Join-Path $env:LOCALAPPDATA 'Programs\dfcn-toolchains\SDL2-2.30.11\x86_64-w64-mingw32'
$buildScript = Join-Path $projectRoot 'tools\build.py'
$imageConfigPath = Join-Path $projectRoot 'data\runtime\native-pe-images.json'
$exitCode = 1
$savedEnvironment = @{}
$buildMutex = $null
$buildMutexHeld = $false

function Resolve-ProjectPath([string] $path) {
    if ([string]::IsNullOrWhiteSpace($path)) {
        throw "A native image path is missing in $imageConfigPath."
    }
    if (-not [System.IO.Path]::IsPathRooted($path)) {
        $path = Join-Path $projectRoot $path
    }
    return [System.IO.Path]::GetFullPath($path)
}

# Keep build.py's optimized flags without debug information, independent of the shell
# that launched us. Restore the caller's environment when the build finishes.
$buildEnvironment = @{
    CXX = $compiler
    CXXFLAGS = '-O2'
    CPPFLAGS = $null
    LDFLAGS = $null
    LDLIBS = $null
    PKG_CONFIG = $null
    PKG_CONFIG_PATH = $null
    GCC_EXEC_PREFIX = $null
    COMPILER_PATH = $null
    LIBRARY_PATH = $null
    CPATH = $null
    C_INCLUDE_PATH = $null
    CPLUS_INCLUDE_PATH = $null
    PYTHONHOME = $null
    PYTHONPATH = $null
    PYTHONDONTWRITEBYTECODE = '1'
}

try {
    if ($env:OS -ne 'Windows_NT') {
        throw 'This entry point requires the configured Windows x64 host.'
    }
    if (-not [System.IO.File]::Exists($imageConfigPath)) {
        throw "Local game configuration is missing: $imageConfigPath. Configure this machine's game image and optional generation reference; the source workspace need not be inside the game directory."
    }
    $imageConfig = [System.IO.File]::ReadAllText($imageConfigPath) | ConvertFrom-Json
    $gameImagePath = if ($imageConfig.game) { [string]$imageConfig.game } else { [string]$imageConfig.reference }
    $gameImage = Resolve-ProjectPath $gameImagePath
    $referenceImage = if ($imageConfig.reference) { Resolve-ProjectPath ([string]$imageConfig.reference) } else { $null }
    $classicImage = if ($imageConfig.classic) { Resolve-ProjectPath ([string]$imageConfig.classic) } else { $null }
    $gameRoots = @([System.IO.Path]::GetDirectoryName($gameImage))
    if ($imageConfig.deploy_classic -eq $true) {
        if (-not $classicImage) { throw "Classic deployment requires a classic image in $imageConfigPath." }
        $gameRoots += [System.IO.Path]::GetDirectoryName($classicImage)
    }
    $gameRoots = @($gameRoots | Select-Object -Unique)
    $requiredFiles = @($python, $compiler, $buildScript, $gameImage,
            (Join-Path $sdl 'include\SDL2\SDL.h'),
            (Join-Path $sdl 'lib\libSDL2.dll.a'))
    if ($referenceImage) {
        if (-not $classicImage) { throw "PE data generation requires a classic image in $imageConfigPath." }
        $requiredFiles += $referenceImage
        $requiredFiles += $classicImage
    }
    elseif ($imageConfig.deploy_classic -eq $true) {
        $requiredFiles += $classicImage
    }
    foreach ($gameRoot in $gameRoots) {
        if (-not [System.IO.File]::Exists((Join-Path $gameRoot 'dfhooks.dll'))) {
            $requiredFiles += Resolve-ProjectPath ([string]$imageConfig.bootstrap)
        }
    }
    foreach ($file in $requiredFiles) {
        if (-not [System.IO.File]::Exists($file)) {
            throw "Required build file is missing: $file. Restore this exact dependency; do not select another toolchain."
        }
    }
    # Generation, candidate DLLs and publication share workspace paths. Keep
    # concurrent invocations of this same entry point from removing or
    # deploying another build's candidate while its compiler is still running.
    $pathHash = [System.Security.Cryptography.SHA256]::Create()
    try {
        $pathBytes = [System.Text.Encoding]::UTF8.GetBytes(
            [System.IO.Path]::GetFullPath($projectRoot).ToUpperInvariant())
        $mutexKey = [System.BitConverter]::ToString($pathHash.ComputeHash($pathBytes)).Replace('-', '')
    }
    finally {
        $pathHash.Dispose()
    }
    $buildMutex = [System.Threading.Mutex]::new($false, "Local\DFCN-build-deploy-$mutexKey")
    try {
        $buildMutexHeld = $buildMutex.WaitOne(0)
        if (-not $buildMutexHeld) {
            Write-Host 'Waiting for the current workspace build/deployment to finish...'
            $buildMutexHeld = $buildMutex.WaitOne()
        }
    }
    catch [System.Threading.AbandonedMutexException] {
        # A terminated builder releases ownership to this process. The
        # ordinary entry point below will clean its existing staging paths.
        $buildMutexHeld = $true
    }
    foreach ($name in $buildEnvironment.Keys) {
        $savedEnvironment[$name] = [Environment]::GetEnvironmentVariable($name, 'Process')
        [Environment]::SetEnvironmentVariable($name, $buildEnvironment[$name], 'Process')
    }

    Write-Host "Source workspace: $projectRoot"
    foreach ($gameRoot in $gameRoots) {
        Write-Host "Local game deployment: $gameRoot"
    }
    Write-Host "Python: $python"
    Write-Host "Compiler: $compiler"
    Write-Host "SDL2 SDK: $sdl"
    & $python -B -u $buildScript --toolchain-root $toolchain --sdl-root $sdl
    $exitCode = $LASTEXITCODE

    switch ($exitCode) {
        0 { Write-Host 'Build and deployment completed.' }
        2 { Write-Warning 'Deployment completed; old DLL cleanup is pending at the paths printed above. Do not rebuild or switch compilers for this status.' }
        default { Write-Warning 'Build or deployment failed. Fix the reported cause within this entry point; do not try another build command.' }
    }
}
catch {
    [Console]::Error.WriteLine("Build/deploy failed: {0}", $_.Exception.Message)
    $exitCode = 1
}
finally {
    foreach ($name in $savedEnvironment.Keys) {
        [Environment]::SetEnvironmentVariable($name, $savedEnvironment[$name], 'Process')
    }
    if ($buildMutexHeld) { $buildMutex.ReleaseMutex() }
    if ($null -ne $buildMutex) { $buildMutex.Dispose() }
}

exit $exitCode
