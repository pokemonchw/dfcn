#!/usr/bin/env python3
"""Build DFCN natively, or explicitly cross-compile Windows DLLs on Linux."""

from __future__ import annotations

import argparse
import ctypes
from datetime import datetime
import hashlib
import json
import os
from pathlib import Path
import platform
import re
import shlex
import shutil
import stat
import struct
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


def package_map_preview(module: Path) -> None:
    """Prepare the independent Workshop mod without installing it in a game."""
    package = ROOT / "workshop/map-preview"
    content = package / "content"
    manifest = content / "dfcn-map-preview.toml"
    metadata = tomllib.loads(manifest.read_text(encoding="utf-8-sig"))
    if (metadata.get("schema") != 1 or metadata.get("id") != "dfcn-map-preview"
            or metadata.get("module") != "dfcn/dfcn_map_preview.dll"):
        raise RuntimeError(f"Unsupported map preview mod manifest: {manifest}")
    identity = metadata["id"]
    info = (content / "info.txt").read_text(encoding="utf-8-sig")
    if re.findall(r"(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$", info) != [identity]:
        raise RuntimeError(f"Map preview mod identity does not match: {content / 'info.txt'}")
    destination = content / metadata["module"]
    license_destination = content / "LICENSE"
    archive = package / f"{identity}.zip"
    candidate = destination.with_name(destination.name + ".publish")
    license_candidate = license_destination.with_name(license_destination.name + ".publish")
    staged_archive = archive.with_name(archive.name + ".publish")
    for path in (package.parent, package, content, destination.parent,
                 destination, candidate, license_destination, license_candidate, archive, staged_archive):
        if path.is_symlink() or path.resolve() != path.absolute():
            raise RuntimeError(f"Refusing map preview packaging through a symlink: {path}")
    destination.parent.mkdir(parents=True, exist_ok=True)
    try:
        shutil.copyfile(module, candidate)
        os.replace(candidate, destination)
        shutil.copyfile(ROOT / "LICENSE", license_candidate)
        os.replace(license_candidate, license_destination)
        with zipfile.ZipFile(staged_archive, "w", compression=zipfile.ZIP_DEFLATED) as bundle:
            for source in sorted(content.rglob("*")):
                if source.is_symlink():
                    raise RuntimeError(f"Refusing map preview packaging through a symlink: {source}")
                if source.is_file():
                    bundle.write(source, Path(identity) / source.relative_to(content))
        os.replace(staged_archive, archive)
    finally:
        candidate.unlink(missing_ok=True)
        license_candidate.unlink(missing_ok=True)
        staged_archive.unlink(missing_ok=True)
    print(f"Independent map preview mod prepared: {content}\n"
          f"Independent map preview mod packaged: {archive}", flush=True)


def add_missing_language_settings(content: bytes) -> bytes:
    """Append language defaults while preserving existing user preferences."""
    config = content.decode("utf-8-sig")
    newline = b"\r\n" if b"\r\n" in content else b"\n"
    additions = []
    for key, value, comment in (
        ("language", "zh-Hans", "# BCP 47: zh-Hans (default) / zh-Hant (Taiwan wording)."),
        ("native_language_original", "0",
         "# 四族语言（矮人、精灵、哥布林、人类）：1 显示原文，0 显示音译（默认）。\n"
         "# 中文释义中的人名首名仍按原有逻辑音译，不受此选项影响。"),
    ):
        if not re.search(rf"(?mi)^\s*{key}\s*=", config):
            additions.extend(line.encode("utf-8") for line in comment.splitlines())
            additions.append(f"{key}={value}".encode("utf-8"))
    if not additions:
        return content
    return content + newline + newline.join(additions) + newline


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
                 "river-name-imagery.tsv", "river-name-constructions.tsv",
                 "river-name-generics.tsv", "river-name-decisions.tsv",
                 "civilization-name-terms.tsv",
                 "site-government-parent-suffixes.tsv", "site-government-name-terms.tsv",
                 "site-government-independent-suffixes.tsv",
                 "character-name-lexicon.tsv", "character-name-overrides.tsv",
                 "character-native-senses.tsv",
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
                 "phrase-pinyin-data/LICENSE", "phrase-pinyin-data/SOURCE",
                 "search-concepts.tsv"):
        install(runtime / name, (RUNTIME / name).read_bytes())
    for name in ("dfhack-help.LICENSE", "lua-output.LICENSE", "pinyin-data/LICENSE"):
        install(runtime / name, (ROOT / "third_party" / name).read_bytes())
    name = "native-addresses/pe-seed.bin" if sys.platform == "win32" else "native-addresses/elf-seed.bin"
    install(runtime / name, (RUNTIME / name).read_bytes())
    # These are the production scanner's sealed, image/seed-owned catalogs.
    # Publish them with the seed so an independently installed game uses the
    # generated layout immediately instead of repeating the same scan.
    if sys.platform == "win32":
        install(runtime / "hde64.LICENSE.txt", (ROOT / "compat/hde64/LICENSE.txt").read_bytes())
        seed_digest = hashlib.sha256((RUNTIME / name).read_bytes()).hexdigest()
        for source in sorted((RUNTIME / "native-addresses/cache").glob(f"*-{seed_digest}.bin")):
            install(runtime / source.relative_to(RUNTIME), source.read_bytes())
    for source in sorted((RUNTIME / "rulesets").rglob("*.toml")):
        install(runtime / source.relative_to(RUNTIME), source.read_bytes())
    for source in sorted((RUNTIME / "opencc").rglob("*")):
        if source.is_file():
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
    install(runtime / "config.ini", add_missing_language_settings(config.encode("utf-8")))
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
        "mouse_coordinates": "dfcn_mouse_coordinates.dll",
        "map_preview": "dfcn_map_preview.dll",
        "riding": "dfcn_riding.dll",
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


def use_prepared_pe_sources() -> None:
    """Consume existing reference data when its source image is unavailable."""
    seed = RUNTIME / "native-addresses/pe-seed.bin"
    prepared = [seed, ROOT / "src/native_pe_build_bindings.inc",
                ROOT / "src/native_history_layouts.inc",
                ROOT / "src/native_history_event_profiles.inc",
                ROOT / "src/preference_vocabulary.inc", ROOT / "src/creature_vocabulary.inc"]
    missing = [str(path) for path in prepared if not path.is_file()]
    if missing:
        raise RuntimeError("The generation reference is unavailable and prepared build inputs are missing: "
                           + ", ".join(missing))
    with seed.open("rb") as source:
        header = source.read(16)
        if len(header) != 16 or header[:8] != b"DFCNPE01":
            raise RuntimeError(f"Unsupported prepared PE address seed: {seed}")
        schema, count = struct.unpack_from("<II", header, 8)
        if schema not in (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13) or count > 1000000:
            raise RuntimeError(f"Unsupported prepared PE address seed header: {seed}")
        encoded = source.read(count * 8)
        if len(encoded) != count * 8:
            raise RuntimeError(f"Truncated prepared PE address seed: {seed}")
    spans = []
    for address, length in sorted(struct.iter_unpack("<II", encoded)):
        if not address or not length or address + length > 0xffffffff:
            raise RuntimeError(f"Invalid prepared PE resource span: {address:#x}+{length:#x}")
        end = address + length
        if spans and address <= spans[-1][1]:
            spans[-1] = spans[-1][0], max(spans[-1][1], end)
        else:
            spans.append((address, end))
    from native_pe_coordinates import collect_required_coordinates
    missing = []
    index = 0
    for address, length in collect_required_coordinates(ROOT).items():
        while index < len(spans) and spans[index][1] <= address:
            index += 1
        if index == len(spans) or spans[index][0] > address or spans[index][1] < address + length:
            missing.append((address, length))
    if missing:
        # A new RTTI root may already have a reviewed edition mapping even
        # though it was not in the previous consumer's required list.
        from native_pe_seed_evidence import _read
        from native_reference_semantics import augment_reference_tables
        _, known, _, tables, _ = _read(seed)
        metadata = json.loads((RUNTIME / "native-addresses/pe-layout-semantics.json").read_text(encoding="utf-8"))
        identities = {reference for reference, _, _ in
            augment_reference_tables(ROOT, known, tables, metadata)}
        missing = [(address, length) for address, length in missing
                   if length > 8 or address not in identities]
    if missing:
        # The old consumer list is not the extent of the stored reference
        # evidence. The mandatory refresh below can recover newly consumed
        # instructions from complete stored bodies or a reviewed edition's
        # image-owned canonical shape. It refuses missing evidence before
        # publication; an older installed game never becomes the reference.
        print("Preparing additional reference resources from retained evidence: "
              + ", ".join(f"{address:#010x}+{length:#x}" for address, length in missing), flush=True)
    print("No generation reference configured; using existing generated sources and PE address seed.", flush=True)


def generate_history_layouts(env: dict[str, str], objdump: Path | None = None) -> None:
    layout_inputs = [ROOT / "tools/build_history_layouts.py",
                     ROOT / "tools/native_standard_library_layouts.py",
                     ROOT / "tools/native_reference_semantics.py",
                     ROOT / "tools/build_pe_image_bindings.py",
                     ROOT / "tools/pe_instruction_match.py",
                     *file_inputs(UPSTREAM / "df-structures", {".xml"}),
                     *[path for path in file_inputs(ROOT / "src", {".h", ".inc", ".cpp"})
                       if path.name != "native_history_layouts.inc"]]
    command = [sys.executable, "-B", "tools/build_history_layouts.py"]
    if objdump is not None:
        if not objdump.is_file():
            raise RuntimeError(f"Required native disassembler is missing: {objdump}")
        command.extend(["--objdump", objdump])
        sources = native_edition_sources(ROOT)
        evidence = [RUNTIME / "native-pe-images.json", RUNTIME / "native-addresses/pe-seed.bin"]
        if sources.get("classic"):
            evidence.append(sources["classic"])
        layout_inputs.extend(path for path in evidence if path.is_file())
    outputs = [ROOT / "src/native_history_layouts.inc", RUNTIME / "native-addresses/pe-layout-semantics.json"]
    if needs_update(outputs, layout_inputs):
        run(command, env)


def generate_data(env: dict[str, str], reference: Path | None = None,
                  objdump: Path | None = None) -> None:
    generate_history_layouts(env, objdump)
    history_image = reference or native_game_executable(GAME)
    history_inputs = [ROOT / "tools/build_history_event_profiles.py", history_image]
    history_output = ROOT / "src/native_history_event_profiles_elf.inc"
    if sys.platform == "win32":
        history_inputs.append(EXTRACTED / "native-history-event-layouts.tsv")
        history_output = ROOT / "src/native_history_event_profiles.inc"
    if needs_update([history_output], history_inputs):
        run([sys.executable, "-B", "tools/build_history_event_profiles.py", "--exe", history_image], env)
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
                       RUNTIME / "magical-material-vocabulary.tsv",
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


def stamp_core_version(candidate: Path, build_hour: str, *, target_platform: str | None = None) -> None:
    """Embed the compilation hour and fingerprint, excluding their own bytes."""
    image = bytearray(candidate.read_bytes())
    placeholder = b"0000.00.00.00.00000"
    marker = b"DFCN_BINARY_VERSION[" + placeholder + b"]\0"
    if image.count(marker) != 1:
        raise RuntimeError(f"Core binary must contain one version slot: {candidate}")
    version_offset = image.index(marker) + len(b"DFCN_BINARY_VERSION[")
    image[version_offset:version_offset + len(placeholder)] = placeholder

    checksum_offset = None
    if (target_platform or sys.platform) == "win32":
        if len(image) < 64 or image[:2] != b"MZ":
            raise RuntimeError(f"Core binary has no valid PE header: {candidate}")
        pe_offset = int.from_bytes(image[60:64], "little")
        optional_offset = pe_offset + 24
        if (optional_offset + 68 > len(image)
                or image[pe_offset:pe_offset + 4] != b"PE\0\0"
                or int.from_bytes(image[pe_offset + 20:pe_offset + 22], "little") < 68
                or int.from_bytes(image[optional_offset:optional_offset + 2], "little")
                    not in (0x10b, 0x20b)):
            raise RuntimeError(f"Core binary has no valid PE optional header: {candidate}")
        checksum_offset = optional_offset + 64
        # The PE checksum includes the embedded version. Exclude both fields
        # from the fingerprint so stamping does not create a hash cycle.
        image[checksum_offset:checksum_offset + 4] = b"\0" * 4

    fingerprint = hashlib.sha256(image).digest()
    alphabet = b"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    value = int.from_bytes(fingerprint, "big") % len(alphabet) ** 5
    version = bytearray(5)
    for index in range(4, -1, -1):
        value, remainder = divmod(value, len(alphabet))
        version[index] = alphabet[remainder]
    if all(ord("0") <= char <= ord("9") for char in version):
        version[fingerprint[0] % 5] = ord("A") + fingerprint[1] % 26
    elif all(ord("A") <= char <= ord("Z") for char in version):
        version[fingerprint[0] % 5] = ord("0") + fingerprint[1] % 10
    stamped_version = build_hour.encode("ascii") + b"." + version
    image[version_offset:version_offset + len(placeholder)] = stamped_version

    if checksum_offset is not None:
        # Sum little-endian 16-bit words, counting an odd final byte as low.
        # The checksum field is still zero here, as the PE algorithm requires.
        checksum = sum(image[0::2]) + (sum(image[1::2]) << 8)
        while checksum > 0xffff:
            checksum = (checksum & 0xffff) + (checksum >> 16)
        checksum = (checksum + len(image)) & 0xffffffff
        image[checksum_offset:checksum_offset + 4] = checksum.to_bytes(4, "little")

    candidate.write_bytes(image)
    print(f"Core version: {stamped_version.decode('ascii')}; normalized binary SHA-256: "
          f"{fingerprint.hex()}", flush=True)


def build_windows_cross(args: argparse.Namespace) -> int:
    """Compile existing generated sources, optionally deploying DLLs to ROOT."""
    if sys.platform != "linux":
        raise RuntimeError("The Windows cross-build requires a Linux host.")
    if args.clean or args.rebuild_loader or args.toolchain_root:
        raise RuntimeError("--windows-cross cannot be combined with native build/deploy options.")
    compiler_path = args.cross_compiler or (
        Path.home() / ".local/share/dfcn-toolchains/mingw-w64-16.2.0/usr/bin/x86_64-w64-mingw32-g++")
    if not compiler_path.is_absolute():
        raise RuntimeError("--cross-compiler must be an absolute path to a Linux MinGW-w64 g++.")
    if not compiler_path.is_file() or not os.access(compiler_path, os.X_OK):
        raise RuntimeError(f"Required Linux cross compiler is missing: {compiler_path}. "
                           "Install it at this path or explicitly configure --cross-compiler.")
    with compiler_path.open("rb") as source:
        if source.read(4) != b"\x7fELF":
            raise RuntimeError(f"The cross compiler must be a Linux ELF executable: {compiler_path}")

    sdk = (args.sdl_root or
           Path.home() / ".local/opt/SDL2-2.30.11/x86_64-w64-mingw32").expanduser().resolve()
    import_library = sdk / "lib/libSDL2.dll.a"
    for path in (sdk / "include/SDL2/SDL.h", import_library):
        if not path.is_file():
            raise RuntimeError(f"Required Windows x64 SDL2 SDK file is missing: {path}")

    output = (args.output_dir or ROOT / "build/windows-x64").expanduser().resolve()
    if output in (ROOT, GAME.resolve()) or output in ROOT.parents:
        raise RuntimeError(f"Choose a separate cross-build output directory: {output}")

    env = dict(os.environ)
    for name in ("CXX", "CXXFLAGS", "CPPFLAGS", "LDFLAGS", "LDLIBS", "PKG_CONFIG",
                 "PKG_CONFIG_PATH", "PKG_CONFIG_LIBDIR", "PKG_CONFIG_SYSROOT_DIR",
                 "GCC_EXEC_PREFIX", "COMPILER_PATH", "LIBRARY_PATH", "CPATH",
                 "C_INCLUDE_PATH", "CPLUS_INCLUDE_PATH", "PYTHONHOME", "PYTHONPATH"):
        env.pop(name, None)
    env["PYTHONDONTWRITEBYTECODE"] = "1"
    env["PATH"] = str(compiler_path.parent) + os.pathsep + "/usr/bin:/bin"
    compiler = [str(compiler_path)]
    target = run([*compiler, "-dumpmachine"], env, capture=True)
    if target != "x86_64-w64-mingw32":
        raise RuntimeError(f"Expected Windows x64 MinGW-w64 target, got {target!r}.")
    # The POSIX compiler supplies C++ threads through winpthreads. Embed that
    # runtime, including symbols referenced later by the static C++ library.
    pthread_library = Path(run([*compiler, "-print-file-name=libwinpthread.a"], env, capture=True))
    if not pthread_library.is_absolute() or not pthread_library.is_file():
        raise RuntimeError(f"The configured cross compiler cannot locate static libwinpthread.a: "
                           f"{pthread_library}. Use a complete POSIX-thread MinGW-w64 toolchain.")

    abi = NATIVE_ABIS["win32"]
    compile_flags = ["-std=c++20", "-O2", "-Wall", "-Wextra", "-Wpedantic",
                     *abi["compile"], "-pthread",
                     "-Icompat", "-Isrc", "-Ithird_party/tomlplusplus/include",
                     "-Ithird_party/opencc/src", "-DOpencc_BUILT_AS_STATIC",
                     f"-I{sdk / 'include'}"]
    # Use the exact dynamic SDL2 import archive, never the Linux library or
    # libSDL2.a. The Windows game provides SDL2.dll at runtime.
    link_flags = ["-shared", str(import_library),
                  "-Wl,--whole-archive", str(pthread_library), "-Wl,--no-whole-archive",
                  *abi["link"]]
    print(f"Cross compiler: {compiler_path}\nTarget: {target}\nWindows SDL2 SDK: {sdk}\n"
          f"Output directory: {output}\nUsing existing generated sources; no data generation.",
          flush=True)
    if args.deploy_project:
        print(f"Windows DLL deployment: {ROOT}", flush=True)
    output.mkdir(parents=True, exist_ok=True)
    # Each invocation has a private source snapshot and staging directory.
    # Serialize publication of the pair for builds targeting the same output.
    import fcntl
    with (output / ".build.lock").open("a+b") as lock:
        try:
            fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
        except BlockingIOError:
            print("Waiting for the current Windows cross-build to finish...", flush=True)
            fcntl.flock(lock, fcntl.LOCK_EX)
        with tempfile.TemporaryDirectory(prefix=".cross-build-", dir=output) as temporary:
            staging = Path(temporary)
            snapshot = staging / "sources"
            for relative in ("src", "compat", "third_party/tomlplusplus/include",
                             "third_party/opencc/src"):
                shutil.copytree(ROOT / relative, snapshot / relative)
            pinyin = Path("third_party/pinyin-data/pinyin_data.inc")
            (snapshot / pinyin).parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(ROOT / pinyin, snapshot / pinyin)
            core_candidate = staging / abi["core"]
            loader_candidate = staging / abi["loader"]
            mouse_candidate = staging / abi["mouse_coordinates"]
            preview_candidate = staging / abi["map_preview"]
            riding_candidate = staging / abi["riding"]
            build_hour = datetime.now().strftime("%Y.%m.%d.%H")
            print("Cross-compiling the Windows core...", flush=True)
            run([*compiler, *compile_flags, "-o", str(core_candidate), "src/dfcn.cpp",
                 "src/rulesets_manager.cpp", "src/chinese_conversion.cpp",
                 *[str(path.relative_to(snapshot))
                   for path in sorted((snapshot / "third_party/opencc/src").glob("*.cpp"))],
                 *link_flags, *abi["core_link"]], env, cwd=snapshot)
            stamp_core_version(core_candidate, build_hour, target_platform="win32")
            print("Cross-compiling the Windows loader...", flush=True)
            run([*compiler, *compile_flags, "-o", str(loader_candidate), "src/loader.cpp",
                 *link_flags], env, cwd=snapshot)
            print("Cross-compiling the independent mouse coordinates mod...", flush=True)
            run([*compiler, *compile_flags, "-o", str(mouse_candidate),
                 "src/mods/mouse_coordinates.cpp", *link_flags], env, cwd=snapshot)
            print("Cross-compiling the independent map preview mod...", flush=True)
            run([*compiler, *compile_flags, "-o", str(preview_candidate),
                 "src/mods/map_preview.cpp", *link_flags], env, cwd=snapshot)
            print("Cross-compiling the independent fortress riding mod...", flush=True)
            run([*compiler, *compile_flags, "-o", str(riding_candidate),
                 "src/mods/riding.cpp", *link_flags], env, cwd=snapshot)
            # Leave the previous outputs untouched if any compiler fails.
            for candidate in (core_candidate, loader_candidate, mouse_candidate, preview_candidate, riding_candidate):
                os.replace(candidate, output / candidate.name)
        if args.deploy_project:
            # Native publish() only accepts inputs in native destination
            # directories. Keep the cross-build outputs, then stage the copy
            # in ROOT so the normal atomic replacement can own publication.
            for name in (abi["mouse_coordinates"], abi["riding"], abi["core"], abi["loader"]):
                destination = ROOT / name
                staged = destination.with_name(name + ".publish")
                print(f"Publishing {destination}", flush=True)
                try:
                    shutil.copyfile(output / name, checked_path(staged))
                    atomic_replace(staged, destination)
                finally:
                    remove_file(staged)
        package_map_preview(output / abi["map_preview"])
    print(f"Windows cross-build completed:\n{output / abi['core']}\n{output / abi['loader']}\n"
          f"{output / abi['mouse_coordinates']}\n{output / abi['map_preview']}\n{output / abi['riding']}",
          flush=True)
    if args.deploy_project:
        print(f"Windows DLLs deployed:\n{ROOT / abi['core']}\n{ROOT / abi['loader']}\n"
              f"{ROOT / abi['mouse_coordinates']}\n{ROOT / abi['riding']}",
              flush=True)
    return 0


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--rebuild-loader", action="store_true", help="Recompile and deploy the resident loader.")
    parser.add_argument("--toolchain-root", type=Path, help="Native toolchain directory containing bin/.")
    parser.add_argument("--sdl-root", type=Path, help="Installed SDL2 SDK root when using an SDK dependency configuration.")
    parser.add_argument("--clean", action="store_true", help="Remove the current host's build outputs and staging files.")
    parser.add_argument("--windows-cross", action="store_true",
                        help="Cross-compile Windows x64 DLLs on Linux without data generation.")
    parser.add_argument("--cross-compiler", type=Path,
                        help="Absolute Linux MinGW-w64 g++ path (default: the installed user-local MinGW-w64 16.2.0 toolchain).")
    parser.add_argument("--output-dir", type=Path,
                        help="Cross-build output directory (default: build/windows-x64 under the source root).")
    parser.add_argument("--deploy-project", action="store_true",
                        help="Also deploy cross-compiled Windows DLLs to the source root.")
    args = parser.parse_args()
    if args.windows_cross:
        return build_windows_cross(args)
    if args.cross_compiler or args.output_dir or args.deploy_project:
        parser.error("--cross-compiler, --output-dir and --deploy-project require --windows-cross.")
    abi = NATIVE_ABIS.get(sys.platform)
    if abi is None:
        raise RuntimeError(f"No native build configuration for this host: {sys.platform}")
    core = ROOT / abi["core"]
    loader = ROOT / abi["loader"]
    game_loaders = [] if sys.platform == "win32" else [directory / abi["loader"]
                                                      for directory in native_game_directories()]
    core_candidate = core.with_name(core.stem + ".candidate" + core.suffix)
    loader_candidate = loader.with_name(loader.stem + ".candidate" + loader.suffix)
    mouse_mod = ROOT / abi["mouse_coordinates"] if "mouse_coordinates" in abi else None
    mouse_candidate = mouse_mod.with_name(mouse_mod.stem + ".candidate" + mouse_mod.suffix) if mouse_mod else None
    preview_mod = ROOT / abi["map_preview"] if "map_preview" in abi else None
    preview_candidate = preview_mod.with_name(preview_mod.stem + ".candidate" + preview_mod.suffix) if preview_mod else None
    riding_mod = ROOT / abi["riding"] if "riding" in abi else None
    riding_candidate = riding_mod.with_name(riding_mod.stem + ".candidate" + riding_mod.suffix) if riding_mod else None
    staging = [core_candidate, loader_candidate,
               *(path.with_name(path.name + ".publish") for path in (core, loader, *game_loaders))]
    if mouse_candidate:
        staging.append(mouse_candidate)
    if preview_candidate:
        staging.extend([preview_candidate, preview_mod.with_name(preview_mod.name + ".publish")])
    if riding_candidate:
        staging.extend([riding_candidate, riding_mod.with_name(riding_mod.name + ".publish")])
    bootstrap_candidate = ROOT / "dfhooks.candidate.dll"
    bootstrap_config_candidate = ROOT / "dfhooks_dfcn.candidate.ini"
    if sys.platform == "win32":
        staging.extend([bootstrap_candidate, bootstrap_config_candidate])
        staging.extend(directory / (name + ".publish")
                       for directory in native_game_directories()
                       for name in ("dfhooks.dll", "dfhooks_dfcn.ini"))
    pending_replacements: set[Path] = set()
    if args.clean:
        for path in [*staging, core, loader, *game_loaders, *([preview_mod] if preview_mod else [])]:
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
        compile_flags = ["-std=c++20", *split_arguments(env.get("CXXFLAGS", "-O2")),
                         "-Wall", "-Wextra", "-Wpedantic", *abi["compile"],
                         "-Icompat", "-Isrc", "-Ithird_party/tomlplusplus/include",
                         "-Ithird_party/opencc/src", "-DOpencc_BUILT_AS_STATIC", "-iquote",
                         "g_src",
                         *dependency_includes, *split_arguments(env.get("CPPFLAGS", ""))]
        link_flags = ["-shared", *split_arguments(env.get("LDFLAGS", "")),
                      *dependency_libraries, *abi["link"], *split_arguments(env.get("LDLIBS", ""))]
        if "-static" in [*compile_flags, *link_flags]:
            raise RuntimeError("Global static linking is unsupported; SDL2 must remain dynamically linked.")
        layout_objdump = Path(compiler[0]).with_name("objdump.exe") if pe_sources else None
        if pe_sources and not pe_sources.get("reference"):
            use_prepared_pe_sources()
            generate_history_layouts(env, layout_objdump)
        else:
            generate_data(env, pe_sources.get("reference"), layout_objdump)
        if pe_sources.get("reference"):
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
        if pe_sources:
            # The source argument contracts and deployed address cache share
            # the runtime's complete control-flow decoder, including EH and
            # switch ingress. Build their producer before refreshing the seed.
            catalog_tool = ROOT / "build/native-address-catalog.exe"
            catalog_inputs = [ROOT / "tools/native_address_catalog.cpp",
                              *file_inputs(ROOT / "src", {".h"}),
                              *file_inputs(ROOT / "compat/hde64", {".h", ".c"}),
                              ROOT / "compat/graphics_abi.h"]
            if needs_update([catalog_tool], catalog_inputs):
                catalog_tool.parent.mkdir(parents=True, exist_ok=True)
                run([*compiler, *compile_flags, "-o", str(catalog_tool),
                     "tools/native_address_catalog.cpp", "-static-libgcc", "-static-libstdc++",
                     "-Wl,-Bstatic", "-lwinpthread", "-Wl,-Bdynamic", "-lbcrypt"], env)
            from native_pe_seed_evidence import refresh as refresh_pe_evidence
            from native_target_abi import prepare_target
            target_images = [pe_sources.get("game") or pe_sources["reference"]]
            if pe_sources.get("deploy_classic", False):
                target_images.append(pe_sources["classic"])
            target_images = list(dict.fromkeys(image.resolve() for image in target_images))
            objdump = Path(compiler[0]).with_name("objdump.exe")
            if not objdump.is_file():
                raise RuntimeError(f"Required native disassembler is missing: {objdump}")
            target_profiles_by_hash = {}
            for target_image in target_images:
                target_profile = prepare_target(ROOT, target_image, objdump=objdump)
                if target_profile:
                    target_profiles_by_hash[target_profile["sha256"]] = target_profile
            if target_profiles_by_hash:
                # Retain declarations derived for other exact images with the
                # same canonical ABI producer. Switching installations should
                # extend the package's version coverage, not replace it.
                active_producers = {(profile["schema"], profile["revision"])
                                    for profile in target_profiles_by_hash.values()}
                # This reviewed transition changes only source-table alias
                # admission/provenance, not a layout or image-evidence rule.
                # Both hashes include the complete ABI producer and its layout
                # inputs. Any later change disables these predecessors.
                compatible_predecessors = {
                    (1, "80cb9b47a53a1d580f66870e5f685ca1f8aff127ea71da0c291d75c7fdfd2885"): (
                        (1, "09fcb5dcbc811392816aa2b5197004718dbcfbff75eb61965563ae12d64fa7a8"),
                        (1, "66829c41ecd8fcc005dc15cefc42dee3f574198420ad2b05aa30e087576c36b4"),
                    ),
                }
                active_producers.update(previous
                                        for producer in tuple(active_producers)
                                        for previous in compatible_predecessors.get(producer, ()))
                for cached_path in sorted((EXTRACTED / "cache/native-abi").glob("*.json")):
                    if cached_path.stem in target_profiles_by_hash:
                        continue
                    try:
                        cached_profile = json.loads(cached_path.read_text(encoding="utf-8"))
                    except (OSError, ValueError):
                        continue
                    if ((cached_profile.get("schema"), cached_profile.get("revision")) in active_producers
                            and cached_profile.get("sha256") == cached_path.stem
                            and re.fullmatch(r"[0-9a-f]{64}", cached_path.stem)):
                        target_profiles_by_hash[cached_path.stem] = cached_profile
            target_profiles = [target_profiles_by_hash[digest]
                               for digest in sorted(target_profiles_by_hash)]
            evidence_inputs = [SCRIPT, ROOT / "tools/native_pe_seed_evidence.py",
                               ROOT / "tools/native_history_semantic_evidence.py",
                               ROOT / "tools/native_target_abi.py", *target_images,
                               ROOT / "tools/native_graphics_header_layout.py",
                               ROOT / "tools/native_graphics_image_evidence.py",
                               ROOT / "tools/native_reference_semantics.py",
                               ROOT / "tools/native_enum_evidence.py",
                               ROOT / "tools/native_type_extent_evidence.py",
                               ROOT / "tools/native_identity_tables.py",
                               ROOT / "tools/native_standard_library_layouts.py",
                               ROOT / "tools/native_frame_evidence.py",
                               ROOT / "tools/native_typed_member_evidence.py",
                               ROOT / "tools/native_frame_receiver_evidence.py",
                               ROOT / "tools/native_receiver_alias_evidence.py",
                               ROOT / "tools/native_method_call_evidence.py",
                               ROOT / "tools/native_method_abi_evidence.py",
                               ROOT / "tools/native_inline_resize_evidence.py",
                               ROOT / "tools/native_callable_search_evidence.py",
                               ROOT / "tools/native_text_draw_evidence.py",
                               ROOT / "tools/native_workshop_recipe_evidence.py",
                               ROOT / "tools/native_chooser_feature_evidence.py",
                               ROOT / "tools/native_optional_panel_evidence.py",
                               ROOT / "tools/native_reference_resources.py",
                               ROOT / "tools/native_pe_coordinates.py",
                               ROOT / "compat/graphics_abi.h",
                               ROOT / "src/native_runtime.h",
                               ROOT / "src/native_history_layouts.inc",
                               *file_inputs(ROOT / "src", {".h", ".inc", ".cpp"})]
            seed_output = RUNTIME / "native-addresses/pe-seed.bin"
            # Installing an older image can preserve an older file timestamp.
            # Dependency mtimes alone must not keep a different image's ABI
            # declaration in the seed. Bind this generation to content too.
            evidence_key = hashlib.sha256(json.dumps({
                "images": sorted({hashlib.sha256(image.read_bytes()).hexdigest()
                                  for image in target_images}),
                "profiles": target_profiles,
            }, sort_keys=True, separators=(",", ":")).encode("utf-8")).hexdigest()
            evidence_stamp = ROOT / "data/extracted/cache/native-build/pe-evidence-inputs.json"
            try:
                recorded_evidence = json.loads(evidence_stamp.read_text(encoding="utf-8"))
            except (OSError, ValueError):
                recorded_evidence = {}
            seed_digest = hashlib.sha256(seed_output.read_bytes()).hexdigest()
            with seed_output.open("rb") as stream:
                seed_header = stream.read(12)
            if (len(seed_header) != 12 or struct.unpack_from("<I", seed_header, 8)[0] != 13
                    or recorded_evidence != {"input": evidence_key, "seed": seed_digest}
                    or needs_update([seed_output], evidence_inputs)):
                objdump = Path(compiler[0]).with_name("objdump.exe")
                if not objdump.is_file():
                    raise RuntimeError(f"Required native disassembler is missing: {objdump}")
                argument_output = ROOT / "data/extracted/cache/native-build/pe-source-arguments.bin"
                argument_output.parent.mkdir(parents=True, exist_ok=True)
                from native_typed_member_evidence import prepare_reference_catalog
                source_catalog = prepare_reference_catalog(ROOT, seed_output, objdump)
                run([str(catalog_tool), "--source-arguments", str(pe_sources["classic"]),
                     str(source_catalog), str(argument_output)], env)
                refresh_pe_evidence(ROOT, seed_output, objdump,
                                    target_profiles=target_profiles,
                                    argument_evidence=argument_output.read_bytes(),
                                    reference_catalog=source_catalog)
                evidence_stamp.parent.mkdir(parents=True, exist_ok=True)
                stamp_candidate = evidence_stamp.with_suffix(".publish")
                try:
                    stamp_candidate.write_text(json.dumps({"input": evidence_key,
                        "seed": hashlib.sha256(seed_output.read_bytes()).hexdigest()}) + "\n", encoding="utf-8")
                    stamp_candidate.replace(evidence_stamp)
                finally:
                    stamp_candidate.unlink(missing_ok=True)
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
        if pe_sources:
            # Produce the actual cache consumed by the deployed core, using
            # exactly its runtime scanner and the installed image on disk.
            # Generation is part of this entry, never an alternative build.
            for target_image in target_images:
                run([str(catalog_tool), str(target_image),
                     str(RUNTIME / "native-addresses/pe-seed.bin"),
                     str(RUNTIME / "native-addresses/cache")], env)
        core_inputs = [SCRIPT, *file_inputs(ROOT / "src", {".cpp", ".h", ".inc", ".exports"}),
                       *file_inputs(ROOT / "compat", {".h", ".c"}),
                       *file_inputs(ROOT / "third_party/tomlplusplus/include", {".h", ".hpp"}),
                       *file_inputs(ROOT / "third_party/opencc/src", {".cpp", ".h", ".hpp"}),
                       ROOT / "third_party/pinyin-data/pinyin_data.inc"]
        if (GAME / "g_src/init.h").is_file():
            core_inputs.append(GAME / "g_src/init.h")
        configured_build = bool(args.toolchain_root or args.sdl_root or any(
            env.get(name) for name in ("CXX", "CPPFLAGS", "CXXFLAGS", "LDFLAGS", "LDLIBS", "PKG_CONFIG", "PKG_CONFIG_PATH")))
        rebuild_core = configured_build or needs_update([core], core_inputs)
        rebuild_loader = args.rebuild_loader or configured_build or needs_update([loader, *game_loaders], loader_inputs())
        rebuild_mouse = mouse_mod and (configured_build or needs_update([mouse_mod],
            [SCRIPT, ROOT / "src/mods/mouse_coordinates.cpp", ROOT / "src/mouse_coordinates_api.h"]))
        rebuild_preview = preview_mod and (configured_build or needs_update([preview_mod],
            [SCRIPT, ROOT / "src/mods/map_preview.cpp", ROOT / "src/map_preview_api.h"]))
        rebuild_riding = riding_mod and (configured_build or needs_update([riding_mod],
            [SCRIPT, ROOT / "src/mods/riding.cpp", ROOT / "src/mods/riding_render.inc",
             ROOT / "src/mods/riding_mechanics.inc", ROOT / "src/mods/riding_flight.inc",
             ROOT / "src/riding_api.h"]))
        if rebuild_core or rebuild_loader or rebuild_mouse or rebuild_preview or rebuild_riding:
            # Both core translation units and the loader must see the same
            # shared headers even when this checkout is edited during a long
            # compile. Copy once; relative includes and the Linux export map
            # resolve inside this private tree for every compiler invocation.
            with tempfile.TemporaryDirectory(prefix=".dfcn-build-sources-", dir=ROOT) as snapshot_dir:
                snapshot = Path(snapshot_dir)
                for relative in ("src", "compat", "third_party/tomlplusplus/include", "third_party/opencc/src"):
                    shutil.copytree(ROOT / relative, snapshot / relative)
                pinyin = Path("third_party/pinyin-data/pinyin_data.inc")
                (snapshot / pinyin).parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / pinyin, snapshot / pinyin)
                if (GAME / "g_src").is_dir():
                    shutil.copytree(GAME / "g_src", snapshot / "g_src")
                if rebuild_core:
                    print("Building the reloadable core...", flush=True)
                    build_hour = datetime.now().strftime("%Y.%m.%d.%H")
                    run([*compiler, *compile_flags, "-o", str(core_candidate), "src/dfcn.cpp",
                         "src/rulesets_manager.cpp", "src/chinese_conversion.cpp",
                         *[str(path.relative_to(ROOT)) for path in sorted((ROOT / "third_party/opencc/src").glob("*.cpp"))],
                         *link_flags, *abi["core_link"]], env, cwd=snapshot)
                    stamp_core_version(core_candidate, build_hour)
                if rebuild_loader:
                    print("Building the resident loader...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(loader_candidate), "src/loader.cpp",
                         *link_flags], env, cwd=snapshot)
                if rebuild_mouse:
                    print("Building the independent mouse coordinates mod...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(mouse_candidate),
                         "src/mods/mouse_coordinates.cpp", *link_flags], env, cwd=snapshot)
                if rebuild_preview:
                    print("Building the independent map preview mod...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(preview_candidate),
                         "src/mods/map_preview.cpp", *link_flags], env, cwd=snapshot)
                if rebuild_riding:
                    print("Building the independent fortress riding mod...", flush=True)
                    run([*compiler, *compile_flags, "-o", str(riding_candidate),
                         "src/mods/riding.cpp", *link_flags], env, cwd=snapshot)
        for directory in edition_destinations():
            deploy_runtime_data(directory)
        for directory in native_game_directories():
            deploy_translation_extensions(directory)
        package_translation_extensions()
        if mouse_mod:
            for directory in edition_destinations():
                directory.mkdir(parents=True, exist_ok=True)
                destination = directory / mouse_mod.name
                staging.append(destination.with_name(destination.name + ".publish"))
                publish_ready(mouse_candidate if rebuild_mouse else mouse_mod,
                              destination, keep_candidate=True)
            if rebuild_mouse:
                publish_ready(mouse_candidate, mouse_mod)
        if riding_mod:
            # Keep the build artifact for its independent Workshop package.
            # Translation deployment must not install the optional riding mod.
            if rebuild_riding:
                publish_ready(riding_candidate, riding_mod)
        if preview_mod:
            # Retain the local build artifact, but distribute the feature only
            # in its own Workshop payload. A translation deployment must not
            # install this optional mod or expose its menu switch by itself.
            if rebuild_preview:
                publish_ready(preview_candidate, preview_mod)
            package_map_preview(preview_mod)
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
