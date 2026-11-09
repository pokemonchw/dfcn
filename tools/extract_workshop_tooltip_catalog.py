#!/usr/bin/env python3
"""Inventory complete workshop task tooltip prose from the native image and RAWs.

This reads files only.  It never starts or attaches to Dwarf Fortress.  Native
paragraphs are retained whole; the game's current 29-column wrapping is not a
translation key.  Generated instrument names and recipe item names are dynamic
fields, not finite source sentences.

The native DF 53.16 PE implementation has two nonempty task-tooltip methods:
reaction categories (RVA 0x8c2bf0) and job details (RVA 0x8c2ca0).  Category
descriptions come from CATEGORY_DESCRIPTION.  Job details display optional
Produces:/Requires: sections, reaction DESCRIPTION paragraphs, and descriptions
referenced by DESCRIPTION:USE_TOOL / DESCRIPTION:USE_INSTRUMENT.
"""

from __future__ import annotations

import argparse
import json
from pathlib import Path
import re
import struct
import sys


Source = tuple[str, str, str, str]
TAG = re.compile(r"\[([^\[\]]*)\]")
NATIVE_CATEGORY = re.compile(rb"\[CATEGORY_DESCRIPTION:([^\[\]\x00]+)\]")
SPECIAL_DESCRIPTIONS = ("USE_TOOL:", "USE_INSTRUMENT:")
SECTION_HEADINGS = (b"Produces:", b"Requires:")


class NativePE:
    """The small portion of a PE image needed to identify source locations."""

    def __init__(self, path: Path):
        self.path = path
        self.raw = path.read_bytes()
        if self.raw[:2] != b"MZ":
            raise ValueError(f"Expected the native Windows PE game: {path}")
        header = struct.unpack_from("<I", self.raw, 0x3C)[0]
        if self.raw[header:header + 4] != b"PE\0\0":
            raise ValueError(f"Invalid PE header: {path}")
        machine, count = struct.unpack_from("<HH", self.raw, header + 4)
        optional_size = struct.unpack_from("<H", self.raw, header + 20)[0]
        optional = header + 24
        if machine != 0x8664 or struct.unpack_from("<H", self.raw, optional)[0] != 0x20B:
            raise ValueError(f"Expected an x64 PE32+ game: {path}")
        self.base = struct.unpack_from("<Q", self.raw, optional + 24)[0]
        self.sections = [
            struct.unpack_from("<8sIIII", self.raw, optional + optional_size + i * 40)
            for i in range(count)
        ]

    def source_location(self, offset: int) -> str:
        for _, _, address, size, disk in self.sections:
            if disk <= offset < disk + size:
                return f"{self.path.name}:VA=0x{self.base + address + offset - disk:x}"
        return f"{self.path.name}:file=0x{offset:x}"

    def read_only_data(self):
        for name, _, _, size, disk in self.sections:
            if name.rstrip(b"\0") == b".rdata":
                yield disk, self.raw[disk:disk + size]


class NativeELF:
    """Read allocated, nonwritable ELF64 data without an external toolchain."""

    def __init__(self, path: Path):
        self.path = path
        self.raw = path.read_bytes()
        if self.raw[:6] != b"\x7fELF\x02\x01":
            raise ValueError(f"Expected a little-endian ELF64 game: {path}")
        self.segments = []
        program_offset = struct.unpack_from("<Q", self.raw, 32)[0]
        program_size, program_count = struct.unpack_from("<HH", self.raw, 54)
        for index in range(program_count):
            kind, flags, disk, address, _, size, _, _ = struct.unpack_from(
                "<IIQQQQQQ", self.raw, program_offset + index * program_size)
            if kind == 1:
                self.segments.append((flags, disk, address, size))
        self.regions = []
        section_offset = struct.unpack_from("<Q", self.raw, 40)[0]
        section_size, section_count = struct.unpack_from("<HH", self.raw, 58)
        if section_offset and section_size:
            if section_count == 0:
                section_count = struct.unpack_from("<Q", self.raw, section_offset + 32)[0]
            for index in range(section_count):
                _, kind, flags, _, disk, size, _, _, _, _ = struct.unpack_from(
                    "<IIQQQQIIQQ", self.raw, section_offset + index * section_size)
                # SHT_PROGBITS + SHF_ALLOC, excluding SHF_WRITE and SHF_EXECINSTR.
                if kind == 1 and flags & 2 and not flags & (1 | 4):
                    self.regions.append((disk, size))
        if not self.regions:
            # Section tables can be stripped; retain only read-only PT_LOADs.
            self.regions = [(disk, size) for flags, disk, _, size in self.segments
                            if flags & 4 and not flags & (1 | 2)]

    def source_location(self, offset: int) -> str:
        for _, disk, address, size in self.segments:
            if disk <= offset < disk + size:
                return f"{self.path.name}:VA=0x{address + offset - disk:x}"
        return f"{self.path.name}:file=0x{offset:x}"

    def read_only_data(self):
        for disk, size in self.regions:
            yield disk, self.raw[disk:disk + size]


def native_edition_sources(project_root: Path | None = None) -> dict:
    """Resolve this host's configured images without searching installations."""
    root = Path(project_root).resolve() if project_root is not None else Path(__file__).resolve().parents[1]
    config_name = {"win32": "native-pe-images.json", "linux": "native-elf-images.json"}.get(sys.platform)
    if config_name is None:
        return {}
    config_path = root / "data/runtime" / config_name
    if not config_path.is_file():
        return {}
    config = json.loads(config_path.read_text(encoding="utf-8"))
    return {**config, **{name: (root / Path(config[name]).expanduser()).resolve()
                        for name in ("game", "reference", "classic", "bootstrap") if config.get(name)}}


def native_game_directory(project_root: Path | None = None) -> Path:
    """Use the active game independently of the pinned reference image."""
    root = Path(project_root).resolve() if project_root is not None else Path(__file__).resolve().parents[1]
    sources = native_edition_sources(root)
    if sources:
        return (sources.get("game") or sources["reference"]).parent
    return root.parent


def native_game_executable(game: Path | None = None) -> Path:
    """Resolve only the current host's game executable, never another target."""
    game = native_game_directory() if game is None else Path(game).resolve()
    if sys.platform == "win32":
        names = ("Dwarf Fortress.exe",)
    elif sys.platform.startswith("linux"):
        names = ("dwarfort", "Dwarf_Fortress")
    else:
        raise ValueError(f"No native workshop source reader for this host: {sys.platform}")
    if game.is_file():
        return game  # Its native format is checked by the host-specific reader.
    for name in names:
        executable = game / name
        if executable.is_file():
            return executable
    raise FileNotFoundError(f"Native game executable is absent in {game}; expected {' or '.join(names)}")


def native_tooltip_sources(executable: Path) -> list[Source]:
    if sys.platform == "win32":
        image = NativePE(executable)
    elif sys.platform.startswith("linux"):
        image = NativeELF(executable)
    else:
        raise ValueError(f"No native workshop source reader for this host: {sys.platform}")
    entries: list[Source] = []
    headings = {}
    for start, data in image.read_only_data():
        for match in NATIVE_CATEGORY.finditer(data):
            source = " ".join(match[1].decode("ascii").split())
            # The native generator emits the category tag before its prose.
            preceding = data[max(0, match.start() - 2048):match.start()]
            categories = re.findall(rb"\[CATEGORY:([^\[\]\x00]+)\]", preceding)
            owner = ("CATEGORY:" + categories[-1].decode("ascii")
                     if categories else "generated reaction category")
            entries.append(("category-description", image.source_location(start + match.start()),
                            owner, source))
        for label in SECTION_HEADINGS:
            position = data.find(label + b"\0")
            if position >= 0 and label not in headings:
                headings[label] = image.source_location(start + position)
    if not entries:
        raise ValueError(f"No native workshop tooltip source section in {executable}")
    for label in SECTION_HEADINGS:
        # These are shared section labels, not generated prose.  A compiler
        # can inline short string stores instead of retaining a NUL literal;
        # absence from read-only data must not remove their required keys.
        location = headings.get(label, "shared-workshop-section-grammar")
        entries.append(("heading", location, "job product/reagent section", label.decode("ascii")))
    return entries


def raw_tooltip_sources(game: Path) -> list[Source]:
    entries: list[Source] = []
    for path in sorted((game / "data/vanilla").glob("*/objects/*.txt")):
        raw = path.read_text(encoding="cp437")
        object_type = ""
        owner = ""
        category = ""
        for token in TAG.finditer(raw):
            value = token[1]
            if value.startswith("OBJECT:"):
                object_type = value[7:]
                owner = category = ""
                continue
            if value.startswith("REACTION:") and object_type == "REACTION":
                owner, category = value, ""
            elif value.startswith("ITEM_") and object_type == "ITEM":
                owner = value
            elif value.startswith("CATEGORY:") and object_type == "REACTION":
                category = value
            elif object_type == "REACTION" and value.startswith("CATEGORY_DESCRIPTION:"):
                source = " ".join(value[len("CATEGORY_DESCRIPTION:"):].split())
                if source:
                    line = raw.count("\n", 0, token.start()) + 1
                    entries.append(("category-description", f"{path.relative_to(game).as_posix()}:{line}",
                                    category or owner, source))
            elif value.startswith("DESCRIPTION:"):
                if object_type == "REACTION":
                    kind = "reaction-description"
                elif object_type == "ITEM" and owner.startswith("ITEM_TOOL:"):
                    kind = "tool-description"
                elif object_type == "ITEM" and owner.startswith("ITEM_INSTRUMENT:"):
                    kind = "instrument-description"
                else:
                    continue
                description = value[len("DESCRIPTION:"):]
                if description.startswith(SPECIAL_DESCRIPTIONS):
                    continue  # Indirection to an item definition, not displayed prose.
                source = " ".join(description.split())
                if source:
                    line = raw.count("\n", 0, token.start()) + 1
                    entries.append((kind, f"{path.relative_to(game).as_posix()}:{line}", owner, source))
    return entries


def workshop_tooltip_sources(game: Path) -> list[Source]:
    """Return (kind, source location, owner, complete English source) rows."""
    executable = native_game_executable(game)
    return native_tooltip_sources(executable) + raw_tooltip_sources(executable.parent)


def render_catalog(entries: list[Source]) -> str:
    lines = [
        "# Workshop task tooltip complete sources; native image and all installed vanilla RAW object packages.",
        "# kind\tsource location\towner\tcomplete source",
        "# DF 53.16 PE: category tooltip RVA 0x8c2bf0..0x8c2c97 reads CATEGORY_DESCRIPTION and wraps at 29 columns.",
        "# DF 53.16 PE: job tooltip RVA 0x8c2ca0..0x8c3e18; Produces:/Requires: exist only for nonempty sections.",
        "# Dynamic products: formatter RVA 0xa2adb0, paragraph call RVA 0x8c3327, one complete item per call.",
        "# Dynamic reagents: formatter call RVA 0x8c36d3, then inline wrapping at 29 columns; no paragraph call.",
        "# Reaction DESCRIPTION paragraphs: paragraph call RVA 0x8c3c39, separate from products and reagents.",
        "# DESCRIPTION:USE_TOOL:<id>: tool definition description +0x188, paragraph call RVA 0x8c3d24.",
        "# DESCRIPTION:USE_INSTRUMENT:<id>: instrument definition description +0x278, paragraph call RVA 0x8c3e0a.",
        "# REAGENT/PRODUCT definitions and generated instrument names/descriptions require shared dynamic translation.",
        "# shared-workshop-section-grammar identifies fixed heading keys without an independent native data literal.",
        "# Preserve complete source prose; native line fragments and symbolic DESCRIPTION indirections are not source keys.",
    ]
    lines.extend("\t".join(entry) for entry in entries)
    return "\n".join(lines) + "\n"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("game", type=Path, help="Native game directory or host executable (Dwarf Fortress.exe / dwarfort)")
    parser.add_argument("--output", type=Path, help="Write the maintained source TSV directly, without a backup")
    args = parser.parse_args()
    catalog = render_catalog(workshop_tooltip_sources(args.game))
    if args.output:
        args.output.write_text(catalog, encoding="utf-8", newline="\n")
    else:
        sys.stdout.write(catalog)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
