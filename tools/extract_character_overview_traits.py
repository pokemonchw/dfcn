"""Extract every short creature Overview trait from the configured 53.17 PEs.

Offline source extraction only: no game process, translation generation, build,
or display tests. The region is part of the character renderer, not a function.
The native two-level switches supply the family, direction, enum and text.
"""
from pathlib import Path
import csv
import hashlib
import json
import re
import xml.etree.ElementTree as ET

from native_caption_image import CaptionImage
from extract_character_factions_pe import switches
from extract_announcement_cancellations import operands

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/character-overview-traits"
OBJDUMP = ("C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/"
           "w64devkit-2.9.1/w64devkit/bin/objdump.exe")
PROFILES = {
    "reference": ("PE:6aea05a1:02734000", 0),
    "classic": ("PE:6aea11a5:0272d000", -0x70),
}
FAMILIES = (
    ("physical", "high", "physical_attribute_type", 0x162232),
    ("physical", "low", "physical_attribute_type", 0x16240d),
    ("mental", "high", "mental_attribute_type", 0x1625e8),
    ("mental", "low", "mental_attribute_type", 0x162998),
    ("facet", "high", "personality_facet_type", 0x162d48),
    ("facet", "low", "personality_facet_type", 0x163aa7),
    ("value", "high", "value_type", 0x164806),
    ("value", "low", "value_type", 0x1650f2),
)


def write(name, header, rows):
    with (OUT / name).open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())
    enums = ET.parse(ROOT / "data/upstream/df-structures/df.d_basics.xml").getroot()
    rows = {key: [] for key in ("regions", "calls", "literals", "switches", "traits")}
    for edition, (identity, delta) in PROFILES.items():
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        if image.identity != identity:
            raise ValueError(f"Source region needs native review: {edition} {image.identity}")
        parent, start, end = 0x150630 + delta, 0x162037 + delta, 0x165991 + delta
        role = "overview-traits-region"
        name = f"{edition}-{role}.asm"
        body = list(image.instructions(image.base + start, image.base + end))
        tables = switches(image, body, edition, role)
        rows["switches"].extend(tables)
        rows["regions"].append((edition, identity, str(image.path),
            hashlib.sha256(image.raw).hexdigest(), hex(parent), hex(start), hex(end), name))
        lines = [f"; {edition} {identity}; native region {start:#x}..{end:#x}; parent {parent:#x}"]
        literals = []
        for pc, instruction in body:
            values = operands(image, instruction)
            lines.append(f"{pc-image.base:#x}: {instruction}" + "".join(
                f" ; {kind}={value!r}" for _, kind, value in values))
            literals.extend((edition, hex(pc-image.base), address, kind, value)
                for address, kind, value in values)
            if match := re.fullmatch(r"(call|j\w+)\s+(?:0x)?([0-9a-f]+)", instruction):
                target = int(match[2], 16)-image.base
                if match[1] == "call" or not start <= target < end:
                    rows["calls"].append((edition, hex(pc-image.base), hex(target), match[1]))
        rows["literals"].extend(literals)
        (OUT / name).write_text("\n".join(lines)+"\n", encoding="utf-8")
        for family_id, (family, direction, enum_name, dispatch) in enumerate(FAMILIES):
            enum = enums.find(f"enum-type[@type-name='{enum_name}']")
            names = [item.attrib["name"] for item in enum.findall("enum-item")
                     if item.attrib.get("value") != "-1"]
            for row in tables:
                if int(row[2], 16) != dispatch + delta:
                    continue
                target = int(row[7], 16)
                literal = next(r for r in literals if int(r[1], 16) == target and r[3] == "cstring")
                rows["traits"].append((edition, identity, family_id, family, direction,
                    row[5], names[row[5]], row[2], row[3], row[7], literal[2], literal[4]))
    write("regions.tsv", ("edition", "image", "path", "sha256", "parent_rva", "start_rva", "end_rva", "assembly"), rows["regions"])
    write("calls.tsv", ("edition", "instruction_rva", "target_rva", "operation"), rows["calls"])
    write("literals.tsv", ("edition", "instruction_rva", "operand", "kind", "source"), rows["literals"])
    write("switches.tsv", ("edition", "role", "dispatch_rva", "table_rva", "remap_rva", "selector", "slot", "target_rva"), rows["switches"])
    write("native-traits.tsv", ("edition", "image", "family_id", "family", "direction", "enum_id", "token", "dispatch_rva", "table_rva", "branch_rva", "literal_va", "source"), rows["traits"])
    print(f"Extracted {len(rows['traits'])} native trait branches across both editions.")


if __name__ == "__main__":
    main()
