#!/usr/bin/env python3
"""Build and publish DFCN with the current host's native tools."""

from __future__ import annotations

import argparse
import ctypes
import os
from pathlib import Path
import platform
import re
import shlex
import shutil
import stat
import subprocess
import sys
import tempfile
import tomllib
import zipfile

sys.dont_write_bytecode = True
from extract_workshop_tooltip_catalog import native_edition_sources, native_game_directory, native_game_executable


ROOT = Path(__file__).resolve().parents[1]
GAME = native_game_directory(ROOT)
DATA = ROOT / "data"
EXTRACTED = DATA / "extracted"
UPSTREAM = DATA / "upstream"
RUNTIME = DATA / "runtime"
SCRIPT = Path(__file__).resolve()
TEMP = Path(tempfile.gettempdir())

def native_game_directories():
    sources = native_edition_sources(ROOT)
    directories = [GAME.resolve()]
    if sources and sources.get("deploy_classic", False):
        directories.append(sources["classic"].parent)
    return tuple(dict.fromkeys(directories))


def edition_destinations():
    destinations = ((directory / "dfcn").resolve() for directory in native_game_directories())
    return tuple(dict.fromkeys(directory for directory in destinations if directory != ROOT))


def translation_extension_sources():
    """Keep independently published data mods outside the core runtime."""
    packages = []
    for manifest in sorted((ROOT / "workshop").glob("*/content/dfcn-extension.toml")):
        content = manifest.parent
        metadata = tomllib.loads(manifest.read_text(encoding="utf-8-sig"))
        if metadata.get("schema") != 1 or metadata.get("language") != "zh-Hans":
            raise RuntimeError(f"Unsupported translation extension: {manifest}")
        info = (content / "info.txt").read_text(encoding="utf-8-sig")
        identity = re.search(r"\[ID:([A-Za-z0-9_-]+)\]", info)
        if not identity:
            raise RuntimeError(f"Missing mod identity: {content / 'info.txt'}")
        # The runtime accepts vocabulary-only extensions without a ruleset
        # directory. Keep that optional resource optional during deployment.
        rulesets = None
        if "rulesets" in metadata:
            rulesets = (content / metadata["rulesets"]).resolve()
            rulesets.relative_to(content.resolve())
        packages.append((identity[1], content, rulesets))
    return packages


def deploy_translation_extensions(game: Path) -> None:
    """Install each data package as its own local mod, using this same entry."""
    mods = (game / "mods").resolve()
    if mods != game.resolve() / "mods":
        raise RuntimeError(f"Refusing translation extension publication through a symlink: {mods}")
    for identity, content, _ in translation_extension_sources():
        destination = mods / identity
        destination.resolve().relative_to(mods)
        for source in sorted(content.rglob("*")):
            if source.is_symlink():
                raise RuntimeError(f"Refusing extension publication through a symlink: {source}")
            if not source.is_file():
                continue
            target = destination / source.relative_to(content)
            target.resolve().relative_to(mods)
            if target.is_symlink():
                raise RuntimeError(f"Refusing extension publication through a symlink: {target}")
            payload = source.read_bytes()
            if target.is_file() and target.read_bytes() == payload:
                continue
            target.parent.mkdir(parents=True, exist_ok=True)
            staged = target.with_name(target.name + ".publish")
            if staged.is_symlink():
                raise RuntimeError(f"Refusing extension staging through a symlink: {staged}")
            try:
                staged.write_bytes(payload)
                os.replace(staged, target)
            finally:
                staged.unlink(missing_ok=True)
        print(f"Translation data mod deployed separately to {destination}", flush=True)


def package_translation_extensions() -> None:
    for identity, content, _ in translation_extension_sources():
        archive = content.parent / f"{identity}.zip"
        staged = archive.with_name(archive.name + ".publish")
        try:
            with zipfile.ZipFile(staged, "w", compression=zipfile.ZIP_DEFLATED) as bundle:
                for source in sorted(content.rglob("*")):
                    if source.is_symlink():
                        raise RuntimeError(f"Refusing extension packaging through a symlink: {source}")
                    if source.is_file():
                        bundle.write(source, Path(identity) / source.relative_to(content))
            os.replace(staged, archive)
        finally:
            staged.unlink(missing_ok=True)
        print(f"Independent translation data mod packaged: {archive}", flush=True)


def deploy_runtime_data(directory: Path) -> None:
    """Publish the same data layout before a configured edition gets its core."""
    directory = directory.resolve()
    runtime = directory / "data/runtime"

    def install(destination: Path, content: bytes) -> None:
        relative = destination.resolve().relative_to(directory)
        if relative.parts[:2] not in (("data", "runtime"), ("data", "extracted")):
            raise RuntimeError(f"Refusing runtime data publication outside data/: {destination}")
        if destination.is_symlink():
            raise RuntimeError(f"Refusing runtime data publication through a symlink: {destination}")
        if destination.is_file() and destination.read_bytes() == content:
            return
        destination.parent.mkdir(parents=True, exist_ok=True)
        candidate = destination.with_name(destination.name + ".publish")
        if candidate.is_symlink():
            raise RuntimeError(f"Refusing runtime data staging through a symlink: {candidate}")
        try:
            candidate.write_bytes(content)
            os.replace(candidate, destination)
        finally:
            candidate.unlink(missing_ok=True)

    for name in ("translations.tsv", "name-editor.tsv", "instrument-translations.tsv",
                 "adventure-target-translations.tsv",
                 "adventure-crafting-translations.tsv",
                 "dfhack-help-translations.tsv", "dfhack-help-overrides.tsv",
                 "dfhack-help-command-overrides.tsv",
                 "dfhack-output-core.tsv", "dfhack-output-translations.tsv",
                 "dfhack-output-stonesense.tsv",
                 "dfhack-overlay-plugin-controls.tsv", "dfhack-overlay-script-controls.tsv",
                 "procedural-terms.tsv", "procedural-word-senses.tsv",
                 "site-name-decisions.tsv", "site-name-imagery.tsv",
                 "civilization-name-terms.tsv",
                 "site-government-parent-suffixes.tsv", "site-government-name-terms.tsv",
                 "site-government-independent-suffixes.tsv",
                 "character-name-lexicon.tsv", "character-name-overrides.tsv",
                 "character-surname-lexicon.tsv",
                 "character-surname-classes.tsv",
                 "character-surname-context-imagery.tsv",
                 "character-surname-constructions.tsv",
                 "english-pronunciation/britfone.csv",
                 "english-pronunciation/britfone.LICENSE",
                 "english-pronunciation/britfone.README",
                 "english-pronunciation/mfa-english-uk.dict",
                 "english-pronunciation/mfa-english-uk-g2p.fst",
                 "english-pronunciation/mfa-english-uk-g2p-graphemes.sym",
                 "english-pronunciation/mfa-english-uk-g2p-phones.sym",
                 "english-pronunciation/mfa-english-uk-g2p-meta.json",
                 "english-pronunciation/MFA-LICENSE.txt",
                 "english-pronunciation/SOURCE",
                 "pinyin-data/pinyin.txt", "pinyin-data/SOURCE",
                 "phrase-pinyin-data/large_pinyin.txt",
                 "phrase-pinyin-data/LICENSE", "phrase-pinyin-data/SOURCE"):
        install(runtime / name, (RUNTIME / name).read_bytes())
    for name in ("dfhack-help.LICENSE", "lua-output.LICENSE", "pinyin-data/LICENSE"):
        install(runtime / name, (ROOT / "third_party" / name).read_bytes())
    name = "native-addresses/pe-seed.bin" if sys.platform == "win32" else "native-addresses/elf-seed.bin"
    install(runtime / name, (RUNTIME / name).read_bytes())
    for source in sorted((RUNTIME / "rulesets").rglob("*.toml")):
        install(runtime / source.relative_to(RUNTIME), source.read_bytes())

    # Migrate earlier bundled extension dictionaries out of the core. Only
    # identical copies of independently packaged files are removed; retain
    # custom edits and any namespace still owned by the base runtime.
    for _, _, rulesets in translation_extension_sources():
        if rulesets is None:
            continue
        for source in sorted(rulesets.rglob("*.toml")):
            relative = source.relative_to(rulesets)
            if (RUNTIME / "rulesets/zh-Hans" / relative).exists():
                continue
            legacy = runtime / "rulesets/zh-Hans" / relative
            legacy.resolve().relative_to(runtime.resolve())
            if legacy.is_symlink():
                raise RuntimeError(f"Refusing extension migration through a symlink: {legacy}")
            if legacy.is_file() and legacy.read_bytes() == source.read_bytes():
                legacy.unlink()

    # Keep this edition's preferences and collected queue during the layout
    # migration. Existing custom external paths continue to work as configured.
    config_source = next(path for path in (runtime / "config.ini", directory / "config.ini",
                                          RUNTIME / "config.ini") if path.is_file())
    config = config_source.read_text(encoding="utf-8")
    relocations = {
        **{f"dfcn/{name}": f"dfcn/data/runtime/{name}"
           for name in ("translations.tsv", "untranslated.tsv", "font.ttf", "font.otf", "font.ttc")},
        "dfcn/capture-first-match.bmp": "dfcn/data/extracted/capture-first-match.bmp",
        "dfcn/dumps/": "dfcn/data/extracted/dumps/",
    }
    for old, new in relocations.items():
        config = config.replace(old, new).replace(old.replace("/", "\\"), new.replace("/", "\\"))
    install(runtime / "config.ini", config.encode("utf-8"))
    for name in ("untranslated.tsv", "font.ttf", "font.otf", "font.ttc"):
        destination = runtime / name
        if destination.exists():
            continue
        legacy = directory / name
        source = legacy if legacy.is_file() else RUNTIME / name
        if source.is_file() and (name != "untranslated.tsv" or source == legacy):
            install(destination, source.read_bytes())
    print(f"Runtime data deployed to {runtime}", flush=True)


# ABI metadata feeds one dependency, compilation, and publication pipeline.
NATIVE_ABIS = {
    "win32": {
        "core": "dfcn_core.dll",
        "loader": "dfhooks_dfcn.dll",
        "compiler": "g++.exe",
        "compiler_hint": TEMP / "codex-world-compute-w64devkit/extracted/w64devkit/bin",
        "target": r"(?:mingw|windows)",
        "compile": ["-static-libgcc", "-static-libstdc++"],
        "link": ["-lgdi32", "-luser32", "-limm32", "-lkernel32"],
        "core_link": ["-lbcrypt"],
        "packages": ["sdl2"],
        "sdk_versions": ["2.30.11", "2.26.2"],
    },
    "linux": {
        "core": "libdfcn_core.so",
        "loader": "libdfhooks.so",
        "compiler": "g++",
        "compiler_hint": None,
        "target": r"linux",
        "compile": ["-fPIC", "-fvisibility=hidden", "-fno-gnu-unique"],
        "link": ["-Wl,-z,relro,-z,now", "-Wl,--no-undefined", "-ldl"],
        "core_link": ["-Wl,-Bsymbolic,--version-script=src/core.exports"],
        "packages": ["sdl2", "freetype2", "fontconfig"],
        "sdk_versions": [],
    },
}


def split_arguments(value: str) -> list[str]:
    return [part[1:-1] if part.startswith('"') and part.endswith('"') else part
            for part in shlex.split(value, posix=os.name != "nt")]


def run(command: list[str], env: dict[str, str], *, capture: bool = False,
        cwd: Path = ROOT) -> str:
    foreign_launchers = {"wine", "wine64", "proton", "mono", "binfmt", "wsl"}
    if any(Path(part).stem.lower() in foreign_launchers for part in command):
        raise RuntimeError("Build commands must use native executables and dependencies.")
    if os.name != "nt":
        if any(Path(part).suffix.lower() == ".exe" for part in command):
            raise RuntimeError("Build commands must use native executables and dependencies.")
        executable = shutil.which(command[0], path=env.get("PATH"))
        if executable:
            with Path(executable).open("rb") as source:
                if source.read(2) == b"MZ":
                    raise RuntimeError(f"Executable format does not match this host: {executable}")
    result = subprocess.run(command, cwd=cwd, env=env, check=True,
                            text=True, stdout=subprocess.PIPE if capture else None)
    return result.stdout.strip() if capture else ""


def native_tools(args: argparse.Namespace, abi: dict) -> tuple[list[str], dict[str, str], list[str], list[str]]:
    env = dict(os.environ)
    env["PYTHONDONTWRITEBYTECODE"] = "1"
    compiler_bins = []
    if args.toolchain_root:
        compiler_bins.append(args.toolchain_root.resolve() / "bin")
    elif abi["compiler_hint"]:
        compiler_bins.append(abi["compiler_hint"])
    if compiler_bins:
        env["PATH"] = os.pathsep.join([*(str(path) for path in compiler_bins), env.get("PATH", "")])
    configured = env.get("CXX", "")
    compiler = ([configured] if Path(configured).is_file() else split_arguments(configured)) if configured else []
    if not compiler:
        found = shutil.which(abi["compiler"], path=env["PATH"])
        if not found:
            raise RuntimeError("Native C++ compiler was not found; supply --toolchain-root or CXX.")
        compiler = [found]
    executable = shutil.which(compiler[0], path=env["PATH"])
    if not executable:
        raise RuntimeError(f"Compiler does not exist: {compiler[0]}")
    if os.name != "nt" and Path(executable).suffix.lower() == ".exe":
        raise RuntimeError(f"Compiler is not a native executable: {executable}")
    compiler[0] = executable
    env["PATH"] = str(Path(executable).parent) + os.pathsep + env["PATH"]
    target = run([*compiler, "-dumpmachine"], env, capture=True)
    machine = platform.machine().lower()
    architecture = {"amd64": "x86_64", "arm64": "aarch64"}.get(machine, machine)
    if not re.search(abi["target"], target) or not target.startswith(architecture + "-"):
        raise RuntimeError(f"Compiler target {target!r} does not match this host ({platform.system()}, {machine}).")

    include_flags = []
    library_flags = []
    if args.sdl_root and not abi["sdk_versions"]:
        raise RuntimeError("This dependency configuration uses pkg-config; configure PKG_CONFIG_PATH.")
    sdk_roots = [args.sdl_root.resolve()] if args.sdl_root else [
        TEMP / f"dfcn-sdl2-{version}/SDL2-{version}/x86_64-w64-mingw32"
        for version in abi["sdk_versions"]
    ]
    if not args.sdl_root and (env.get("PKG_CONFIG") or env.get("PKG_CONFIG_PATH")):
        sdk_roots = []  # An explicitly selected dependency configuration takes precedence.
    sdk = next((path for path in sdk_roots
                if (path / "include/SDL2/SDL.h").is_file()
                and (path / "lib/libSDL2.dll.a").is_file()), None)
    if args.sdl_root and sdk is None:
        raise RuntimeError(f"SDL2 headers and dynamic import library were not found in {args.sdl_root.resolve()}.")
    if sdk is not None:
        include_flags += [f"-I{sdk / 'include'}"]
        library_flags += [f"-L{sdk / 'lib'}", "-lSDL2"]
    elif abi["packages"]:
        pkg_config = split_arguments(env.get("PKG_CONFIG", "pkg-config"))
        include_flags += shlex.split(run([*pkg_config, "--cflags", *abi["packages"]], env, capture=True))
        library_flags += shlex.split(run([*pkg_config, "--libs", *abi["packages"]], env, capture=True))
    print(f"Native host: {platform.system()} {machine}; compiler target: {target}", flush=True)
    return compiler, env, include_flags, library_flags


def file_inputs(directory: Path, suffixes: set[str]) -> list[Path]:
    return [path for path in directory.rglob("*") if path.is_file() and path.suffix in suffixes]


def needs_update(outputs: list[Path], inputs: list[Path]) -> bool:
    if any(not path.is_file() for path in outputs):
        return True
    built_at = min(path.stat().st_mtime_ns for path in outputs)
    return any(path.stat().st_mtime_ns > built_at for path in inputs)


def generate_data(env: dict[str, str]) -> None:
    layout_inputs = [ROOT / "tools/build_history_layouts.py",
                     *file_inputs(UPSTREAM / "df-structures", {".xml"})]
    if needs_update([ROOT / "src/native_history_layouts.inc"], layout_inputs):
        run([sys.executable, "-B", "tools/build_history_layouts.py"], env)
    history_inputs = [ROOT / "tools/build_history_event_profiles.py",
                      native_game_executable(GAME)]
    history_output = ROOT / "src/native_history_event_profiles_elf.inc"
    if sys.platform == "win32":
        history_inputs.append(EXTRACTED / "native-history-event-layouts.tsv")
        history_output = ROOT / "src/native_history_event_profiles.inc"
    if needs_update([history_output], history_inputs):
        run([sys.executable, "-B", "tools/build_history_event_profiles.py"], env)
    dictionary = RUNTIME / "translations.tsv"
    anatomy = RUNTIME / "rulesets/zh-Hans/health/bodypart/raw_names.toml"
    creature_names = RUNTIME / "rulesets/zh-Hans/creatures/name/raw_names.toml"
    wood_names = RUNTIME / "rulesets/zh-Hans/items/wood/raw_names.toml"
    outputs = [dictionary, ROOT / "src/preference_vocabulary.inc", anatomy, creature_names, wood_names]
    inputs = [SCRIPT, ROOT / "tools/build_translations.py", ROOT / "tools/legends_grammar.py",
              ROOT / "tools/book_title_grammar.py",
              ROOT / "tools/announcement_grammar.py",
              ROOT / "tools/magical_materials.py", ROOT / "tools/extract_tooltip_catalog.py",
              ROOT / "tools/extract_workshop_tooltip_catalog.py"]
    inputs.append(native_game_executable(GAME))
    inputs += [path for path in file_inputs(RUNTIME, {".tsv"}) if path != dictionary]
    inputs += file_inputs(EXTRACTED, {".tsv"})
    inputs += [UPSTREAM / name for name in ("simple.zh-Hans.csv", "objects.zh-Hans.po",
                                         "dfzh_dict_exact.csv", "dfzh_dict_word.csv")]
    inputs += [path for path in file_inputs(RUNTIME / "rulesets/zh-Hans", {".toml"})
               if path not in (anatomy, creature_names, wood_names)]
    raw_root = GAME / "data/vanilla"
    # Generated religious titles use native singular/plural language nouns.
    # A RAW update must regenerate the dictionary even if the TSV is unchanged.
    inputs.append(raw_root / "vanilla_languages/objects/language_words.txt")
    # RAW building tooltips are inventoried alongside compiled-in tooltips.
    # Include every package's objects (also creature/plant vocabularies) and
    # directory mtimes so added, removed or renamed RAW files invalidate the
    # dictionary even when their archived file timestamps predate the build.
    inputs += [raw_root, *raw_root.glob("*/objects"), *raw_root.glob("*/objects/*.txt")]
    generators = raw_root / "vanilla_procedural/scripts/generators"
    inputs += [generators / name for name in ("materials.lua", "divine.lua", "evil.lua")]
    if needs_update(outputs, inputs):
        run([sys.executable, "-B", "tools/build_translations.py"], env)
    creature_inputs = [ROOT / "tools/build_creature_vocabulary.py", RUNTIME / "creature-name-vocabulary.tsv",
                       ROOT / "tools/legends_grammar.py", RUNTIME / "legends-creature-descriptions.tsv",
                       RUNTIME / "procedural-word-senses.tsv", GAME / "data/init/globals.lua",
                       dictionary, generators / "creatures.lua", generators / "evil.lua",
                       generators / "creatures/rcp.lua",
                       generators / "interactions", *generators.glob("interactions/*.lua")]
    # A RAW adjective can change without changing translations.tsv content
    # or mtime. Track these inputs directly for the creator identity table.
    for package in ("vanilla_creatures", "vanilla_creatures_extinct"):
        objects = raw_root / package / "objects"
        creature_inputs += [objects, *objects.glob("creature_*.txt")]
    if needs_update([ROOT / "src/creature_vocabulary.inc"], creature_inputs):
        run([sys.executable, "-B", "tools/build_creature_vocabulary.py"], env)


def loader_inputs() -> list[Path]:
    pending = [ROOT / "src/loader.cpp", SCRIPT]
    seen = set()
    while pending:
        path = pending.pop().resolve()
        if path in seen:
            continue
        seen.add(path)
        for name in re.findall(r'^\s*#\s*include\s*["<]([^">]+)[">]', path.read_text(encoding="utf-8"), re.MULTILINE):
            included = next((base / name for base in (path.parent, ROOT / "src", ROOT / "compat")
                             if (base / name).is_file()), None)
            if included:
                pending.append(included)
    return list(seen)


def checked_path(path: Path) -> Path:
    absolute = path.absolute()
    if absolute.parent not in (ROOT, GAME, *native_game_directories(), *edition_destinations()) or absolute.is_symlink():
        raise RuntimeError(f"Refusing file operation outside build destinations: {absolute}")
    if absolute.exists() and not stat.S_ISREG(absolute.lstat().st_mode):
        raise RuntimeError(f"Expected a regular build file: {absolute}")
    return absolute


def windows_file_information(path: Path, information_class: int, information: ctypes.Structure) -> None:
    kernel = ctypes.WinDLL("kernel32", use_last_error=True)
    create = kernel.CreateFileW
    create.argtypes = [ctypes.c_wchar_p, ctypes.c_uint32, ctypes.c_uint32, ctypes.c_void_p,
                       ctypes.c_uint32, ctypes.c_uint32, ctypes.c_void_p]
    create.restype = ctypes.c_void_p
    update = kernel.SetFileInformationByHandle
    update.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_void_p, ctypes.c_uint32]
    update.restype = ctypes.c_int
    close = kernel.CloseHandle
    close.argtypes = [ctypes.c_void_p]
    close.restype = ctypes.c_int
    # DELETE access with shared read/write/delete; never override ACLs or attributes.
    handle = create(str(path), 0x00010000, 0x7, None, 3, 0, None)
    if handle == ctypes.c_void_p(-1).value:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        if not update(handle, information_class, ctypes.byref(information), ctypes.sizeof(information)):
            raise ctypes.WinError(ctypes.get_last_error())
    finally:
        close(handle)


def remove_file(path: Path) -> None:
    path = checked_path(path)
    if path.exists():
        try:
            path.unlink()
        except PermissionError as original:
            if os.name != "nt":
                raise
            # Request POSIX unlink for open handles; mapped images may still reject it.
            # Do not bypass permissions or ignore read-only attributes.
            class Disposition(ctypes.Structure):
                _fields_ = [("Flags", ctypes.c_uint32)]

            try:
                windows_file_information(path, 21, Disposition(0x1 | 0x2))
            except OSError as error:
                raise OSError(f"Cannot remove {path}; unlink: {original}; native unlink: {error}") from error
    if path.exists():
        raise RuntimeError(f"File remains after removal: {path}")


def replacement_staging(destination: Path) -> set[Path]:
    # ReplaceFileW may prefix its temporary name with the full destination name.
    pattern = re.compile(rf"(?:{re.escape(destination.name)})?~RF[0-9a-f]+\.TMP", re.IGNORECASE)
    return {path for path in destination.parent.iterdir() if pattern.fullmatch(path.name)}


def windows_atomic_rename(candidate: Path, destination: Path) -> None:
    name = str(destination)
    encoded_length = len(name.encode("utf-16-le"))

    class Rename(ctypes.Structure):
        _fields_ = [("Flags", ctypes.c_uint32), ("RootDirectory", ctypes.c_void_p),
                    ("FileNameLength", ctypes.c_uint32), ("FileName", ctypes.c_wchar * (encoded_length // 2 + 1))]

    information = Rename()
    information.Flags = 0x1 | 0x2  # REPLACE_IF_EXISTS | POSIX_SEMANTICS
    information.FileNameLength = encoded_length
    information.FileName = name
    # Existing handles keep the old image; no visible historical copy is created.
    windows_file_information(candidate, 22, information)


class PublishedWithPendingCleanup(OSError):
    """The new official file is installed, but an old mapped image remains."""

    def __init__(self, destination: Path, paths: list[Path], errors: list[str]):
        super().__init__(f"Published {destination}; temporary file cleanup: " + "; ".join(errors))
        self.paths = paths


class DeploymentCleanupPending(RuntimeError):
    """All requested outputs were deployed, but old replacement files remain."""


def windows_publish_mapped_image(candidate: Path, destination: Path) -> None:
    # A mapped image may permit renaming its directory entry while rejecting
    # replacement of that entry. Keep the old image until the new official
    # path exists, and restore it if publication fails. Never unload its user.
    descriptor, name = tempfile.mkstemp(prefix=destination.name + ".retired-",
                                        suffix=".tmp", dir=destination.parent)
    os.close(descriptor)
    retired = checked_path(Path(name))
    try:
        os.replace(destination, retired)
    except OSError:
        remove_file(retired)
        raise
    try:
        os.replace(candidate, destination)
    except OSError as publication_error:
        try:
            os.replace(retired, destination)
        except OSError as restore_error:
            raise OSError(f"Cannot publish {destination}: {publication_error}; "
                          f"cannot restore the original from {retired}: {restore_error}") from restore_error
        raise
    try:
        remove_file(retired)
    except (OSError, RuntimeError) as cleanup_error:
        raise PublishedWithPendingCleanup(destination, [retired],
                                          [f"{retired}: {cleanup_error}"]) from cleanup_error


def atomic_replace(candidate: Path, destination: Path) -> None:
    candidate, destination = checked_path(candidate), checked_path(destination)
    try:
        os.replace(candidate, destination)
    except OSError as original:
        if os.name != "nt" or not destination.exists():
            raise
        try:
            windows_atomic_rename(candidate, destination)
            return
        except OSError as rename_error:
            native_rename_error = str(rename_error)
        # Older filesystems may require the legacy native replacement primitive.
        kernel = ctypes.WinDLL("kernel32", use_last_error=True)
        replace = kernel.ReplaceFileW
        replace.argtypes = [ctypes.c_wchar_p, ctypes.c_wchar_p, ctypes.c_wchar_p,
                            ctypes.c_uint32, ctypes.c_void_p, ctypes.c_void_p]
        replace.restype = ctypes.c_int
        existing_staging = replacement_staging(destination)
        replaced_identities = {(path.stat().st_dev, path.stat().st_ino) for path in (candidate, destination)}
        failure = None
        if not replace(str(destination), str(candidate), None, 0, None, None):
            failure = ctypes.WinError(ctypes.get_last_error())
        cleanup_failures = []
        cleanup_paths = []
        for path in replacement_staging(destination) - existing_staging:
            try:
                metadata = checked_path(path).stat()
                if (metadata.st_dev, metadata.st_ino) not in replaced_identities:
                    continue  # A concurrent application's temporary file is not ours.
                remove_file(path)
            except (OSError, RuntimeError) as error:
                cleanup_failures.append(f"{path}: {error}")
                cleanup_paths.append(path)
        if failure:
            if (not cleanup_failures and candidate.exists() and destination.exists() and
                    failure.winerror in (5, 32, 33)):
                try:
                    windows_publish_mapped_image(candidate, destination)
                    return
                except PublishedWithPendingCleanup:
                    raise
                except OSError as mapped_error:
                    failure = OSError(f"{failure}; mapped-image publication: {mapped_error}")
            details = (f"Cannot publish {destination}; replace: {original}; native rename: {native_rename_error}; "
                       f"native replacement: {failure}")
            if cleanup_failures:
                details += "; temporary file cleanup: " + "; ".join(cleanup_failures)
            raise OSError(details)
        if cleanup_failures:
            raise PublishedWithPendingCleanup(destination, cleanup_paths, cleanup_failures)


def publish(candidate: Path, destination: Path, *, keep_candidate: bool = False) -> None:
    print(f"Publishing {destination}", flush=True)
    if keep_candidate:
        staged = destination.with_name(destination.name + ".publish")
        try:
            shutil.copyfile(checked_path(candidate), checked_path(staged))
            atomic_replace(staged, destination)
        finally:
            remove_file(staged)
    else:
        atomic_replace(candidate, destination)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rebuild-loader", action="store_true", help="Recompile and deploy the resident loader.")
    parser.add_argument("--toolchain-root", type=Path, help="Native toolchain directory containing bin/.")
    parser.add_argument("--sdl-root", type=Path, help="Installed SDL2 SDK root when using an SDK dependency configuration.")
    parser.add_argument("--clean", action="store_true", help="Remove the current host's build outputs and staging files.")
    args = parser.parse_args()
    abi = NATIVE_ABIS.get(sys.platform)
    if abi is None:
        raise RuntimeError(f"No native build configuration for this host: {sys.platform}")
    core = ROOT / abi["core"]
    loader = ROOT / abi["loader"]
    game_loaders = [] if sys.platform == "win32" else [directory / abi["loader"]
                                                      for directory in native_game_directories()]
    core_candidate = core.with_name(core.stem + ".candidate" + core.suffix)
    loader_candidate = loader.with_name(loader.stem + ".candidate" + loader.suffix)
    staging = [core_candidate, loader_candidate,
               *(path.with_name(path.name + ".publish") for path in (core, loader, *game_loaders))]
    bootstrap_candidate = ROOT / "dfhooks.candidate.dll"
    bootstrap_config_candidate = ROOT / "dfhooks_dfcn.candidate.ini"
    if sys.platform == "win32":
        staging.extend([bootstrap_candidate, bootstrap_config_candidate])
        staging.extend(directory / (name + ".publish")
                       for directory in native_game_directories()
                       for name in ("dfhooks.dll", "dfhooks_dfcn.ini"))
    pending_replacements: set[Path] = set()
    if args.clean:
        for path in [*staging, core, loader, *game_loaders]:
            remove_file(path)
        print("Build outputs removed.")
        return 0

    def publish_ready(candidate: Path, destination: Path, *, keep_candidate: bool = False) -> None:
        try:
            publish(candidate, destination, keep_candidate=keep_candidate)
        except PublishedWithPendingCleanup as error:
            # Publication succeeded. Finish deploying the other official
            # files, then retry these verified replacement remnants together
            # with the other staging files. An actual write failure still
            # aborts immediately; old-image cleanup has a distinct exit status.
            staging.extend(path for path in error.paths if path not in staging)
            pending_replacements.update(error.paths)
            print(str(error), flush=True)

    try:
        for path in staging:
            remove_file(path)
        sources = native_edition_sources(ROOT)
        pe_sources = sources if sys.platform == "win32" else {}
        missing_bootstraps = [directory for directory in native_game_directories()
                              if sys.platform == "win32"
                              if not (directory / "dfhooks.dll").is_file()]
        if missing_bootstraps:
            bootstrap_source = pe_sources.get("bootstrap")
            if bootstrap_source is None or not bootstrap_source.is_file():
                raise RuntimeError("First Windows deployment requires an installed dfhooks.dll "
                                   "source in data/runtime/native-pe-images.json's bootstrap path.")
            shutil.copyfile(bootstrap_source, checked_path(bootstrap_candidate))
        compiler, env, dependency_includes, dependency_libraries = native_tools(args, abi)
        generate_data(env)
        if pe_sources:
            from build_pe_image_bindings import generate as generate_pe_bindings
            output = ROOT / "src/native_pe_build_bindings.inc"
            inputs = [ROOT / "tools/build_pe_image_bindings.py", ROOT / "tools/pe_instruction_match.py",
                      ROOT / "tools/native_pe_coordinates.py", RUNTIME / "native-pe-images.json",
                      UPSTREAM / "df-structures/symbols.xml", pe_sources["reference"], pe_sources["classic"],
                      *[p for p in file_inputs(ROOT / "src", {".h", ".inc", ".cpp"})
                        if p != output and "elf_build_bindings" not in p.name]]
            if needs_update([output], inputs):
                objdump = Path(compiler[0]).with_name("objdump.exe")
                if not objdump.is_file():
                    raise RuntimeError(f"Required native disassembler is missing: {objdump}")
                generate_pe_bindings(pe_sources["reference"], pe_sources["classic"], objdump, output)
            from build_pe_runtime_seed import generate as generate_pe_seed
            seed_output = RUNTIME / "native-addresses/pe-seed.bin"
            seed_inputs = [*inputs, output, ROOT / "tools/build_pe_runtime_seed.py"]
            if needs_update([seed_output], seed_inputs):
                objdump = Path(compiler[0]).with_name("objdump.exe")
                if not objdump.is_file():
                    raise RuntimeError(f"Required native disassembler is missing: {objdump}")
                generate_pe_seed(pe_sources["reference"], pe_sources["classic"], objdump,
                                 output, seed_output)
        elif sys.platform == "linux" and sources.get("classic"):
            from build_native_image_bindings import (
                Image, binding_sources, generate as generate_elf_bindings,
            )
            output = ROOT / "src/native_elf_build_bindings.inc"
            inputs = [ROOT / "tools/build_native_image_bindings.py", RUNTIME / "native-elf-images.json",
                      UPSTREAM / "df-structures/symbols.xml", sources["reference"], sources["classic"],
                      *binding_sources()]
            if needs_update([output], inputs):
                generate_elf_bindings(Image(sources["reference"]), Image(sources["classic"]),
                                      UPSTREAM / "df-structures/symbols.xml", output)
        if sys.platform == "linux":
            from build_elf_runtime_seed import generate as generate_elf_seed
            from native_elf_coordinates import sources as elf_binding_sources
            seed_output = RUNTIME / "native-addresses/elf-seed.bin"
            seed_inputs = [ROOT / "tools/build_elf_runtime_seed.py", ROOT / "tools/native_elf_coordinates.py",
                           ROOT / "tools/native_pe_coordinates.py", ROOT / "tools/build_pe_runtime_seed.py",
                           ROOT / "tools/pe_instruction_match.py", ROOT / "tools/build_native_image_bindings.py",
                           RUNTIME / "native-elf-images.json", sources["reference"],
                           sources["reference"].parent / "libg_src_lib.so",
                           UPSTREAM / "df-structures/symbols.xml", *elf_binding_sources(ROOT)]
            if needs_update([seed_output], seed_inputs):
                generate_elf_seed(sources["reference"], seed_output)
        compile_flags = ["-std=c++20", *split_arguments(env.get("CXXFLAGS", "-O2")),
                         "-Wall", "-Wextra", "-Wpedantic", *abi["compile"],
                         "-Icompat", "-Isrc", "-Ithird_party/tomlplusplus/include", "-iquote",
                         "g_src",
                         *dependency_includes, *split_arguments(env.get("CPPFLAGS", ""))]
        link_flags = ["-shared", *split_arguments(env.get("LDFLAGS", "")),
                      *dependency_libraries, *abi["link"], *split_arguments(env.get("LDLIBS", ""))]
        if "-static" in [*compile_flags, *link_flags]:
            raise RuntimeError("Global static linking is unsupported; SDL2 must remain dynamically linked.")
        core_inputs = [SCRIPT, *file_inputs(ROOT / "src", {".cpp", ".h", ".inc", ".exports"}),
                       *file_inputs(ROOT / "compat", {".h"}),
                       *file_inputs(ROOT / "third_party/tomlplusplus/include", {".h", ".hpp"}),
                       ROOT / "third_party/pinyin-data/pinyin_data.inc"]
        if (GAME / "g_src/init.h").is_file():
            core_inputs.append(GAME / "g_src/init.h")
        configured_build = bool(args.toolchain_root or args.sdl_root or any(
            env.get(name) for name in ("CXX", "CPPFLAGS", "CXXFLAGS", "LDFLAGS", "LDLIBS", "PKG_CONFIG", "PKG_CONFIG_PATH")))
        rebuild_core = configured_build or needs_update([core], core_inputs)
        rebuild_loader = args.rebuild_loader or configured_build or needs_update([loader, *game_loaders], loader_inputs())
        if rebuild_core or rebuild_loader:
            # Both core translation units and the loader must see the same
            # shared headers even when this checkout is edited during a long
            # compile. Copy once; relative includes and the Linux export map
            # resolve inside this private tree for every compiler invocation.
            with tempfile.TemporaryDirectory(prefix=".dfcn-build-sources-", dir=ROOT) as snapshot_dir:
                snapshot = Path(snapshot_dir)
                for relative in ("src", "compat", "third_party/tomlplusplus/include"):
                    shutil.copytree(ROOT / relative, snapshot / relative)
                pinyin = Path("third_party/pinyin-data/pinyin_data.inc")
                (snapshot / pinyin).parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / pinyin, snapshot / pinyin)
                if (GAME / "g_src").is_dir():
                    shutil.copytree(GAME / "g_src", snapshot / "g_src")
                if rebuild_core:
                    print("Building the reloadable core...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(core_candidate), "src/dfcn.cpp",
                         "src/rulesets_manager.cpp", *link_flags, *abi["core_link"]], env, cwd=snapshot)
                if rebuild_loader:
                    print("Building the resident loader...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(loader_candidate), "src/loader.cpp",
                         *link_flags], env, cwd=snapshot)
        for directory in edition_destinations():
            deploy_runtime_data(directory)
        for directory in native_game_directories():
            deploy_translation_extensions(directory)
        package_translation_extensions()
        if rebuild_core:
            for directory in edition_destinations():
                directory.mkdir(parents=True, exist_ok=True)
                destination = directory / abi["core"]
                staging.append(destination.with_name(destination.name + ".publish"))
                publish_ready(core_candidate, destination, keep_candidate=True)
            publish_ready(core_candidate, core)
        if rebuild_loader:
            for directory in edition_destinations():
                directory.mkdir(parents=True, exist_ok=True)
                destination = directory / abi["loader"]
                staging.append(destination.with_name(destination.name + ".publish"))
                publish_ready(loader_candidate, destination, keep_candidate=True)
            publish_ready(loader_candidate, loader, keep_candidate=bool(game_loaders))
            for destination in game_loaders:
                publish_ready(loader_candidate, destination, keep_candidate=True)
            print("Core and resident loader deployed to the configured game directories.")
        elif rebuild_core:
            print("Core deployed to the configured game directories.")
        else:
            print("Build outputs are current.")
        if sys.platform == "win32":
            # Install the ordinary game bootstrap through this same publication
            # pipeline. The INI selects the deployed module and its runtime data,
            # independently of where this source checkout lives.
            bootstrap_config = b"dfcn/dfhooks_dfcn.dll\n"
            bootstrap_config_candidate.write_bytes(bootstrap_config)
            for directory in native_game_directories():
                destination = directory / "dfhooks_dfcn.ini"
                if not destination.is_file() or destination.read_bytes() != bootstrap_config:
                    publish_ready(bootstrap_config_candidate, destination, keep_candidate=True)
            for directory in missing_bootstraps:
                publish_ready(bootstrap_candidate, directory / "dfhooks.dll", keep_candidate=True)
            for directory in native_game_directories():
                redundant_loader = directory / abi["loader"]
                if redundant_loader.is_file():
                    print(f"Removing redundant game-root loader: {redundant_loader}", flush=True)
                    remove_file(redundant_loader)
        print("Deployment does not observe the in-game display.")
        return 0
    finally:
        build_failure = sys.exc_info()[1]
        failures = []
        failed_paths = set()
        for path in staging:
            try:
                remove_file(path)
            except (OSError, RuntimeError) as error:
                failures.append(f"{path}: {error}")
                failed_paths.add(path)
        if failures:
            details = "Temporary files could not be removed:\n" + "\n".join(failures)
            if build_failure is None and failed_paths <= pending_replacements:
                raise DeploymentCleanupPending(details)
            if build_failure is not None:
                details = f"{build_failure}\n{details}"
            raise RuntimeError(details) from build_failure


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except DeploymentCleanupPending as error:
        print(f"Deployment completed; old-file cleanup pending:\n{error}", file=sys.stderr)
        raise SystemExit(2)
    except (OSError, RuntimeError, subprocess.CalledProcessError) as error:
        print(f"Build failed: {error}", file=sys.stderr)
        raise SystemExit(1)
