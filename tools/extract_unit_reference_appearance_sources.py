"""Extract complete native distinguishing-appearance producers in both PEs.

This reads the configured game images, their exception ownership metadata and
native instructions. It does not run the game, translations or build pipeline.
Stored combat/status actor descriptions and map hover share this appearance
field. Suffix dispatch tables are decoded as data, not prose/code.
"""
from __future__ import annotations

import bisect
import csv
import json
from pathlib import Path
import re
import struct

from native_caption_image import CaptionImage
from extract_announcement_mandate_sources import printable_inline

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/announcement-unit-appearance"
OBJDUMP = r"C:\Users\WIN11\AppData\Local\Programs\dfcn-toolchains\w64devkit-2.9.1\w64devkit\bin\objdump.exe"
ANCHORS = {
    "appearance": {"high-cheekbones", "guttural-voiced"},
    "body-size": {"gigantic", "scrawny"},
}


def producers(image: CaptionImage):
    targets = {}
    for words in ANCHORS.values():
        for word in words:
            at = -1
            while (at := image.raw.find(word.encode("ascii") + b"\0", at + 1)) >= 0:
                targets[image.address(at)] = word
    starts = sorted(image.functions)
    section = next(s for s in image.image.sections if s[0].rstrip(b"\0") == b".text")
    _, _, rva, size, disk = section
    found = {}
    for match in re.finditer(rb"[\x48\x4c][\x8d\x8b][\x05\x0d\x15\x1d\x25\x2d\x35\x3d]",
                             image.raw[disk:disk + size]):
        code = image.base + rva + match.start()
        target = code + 7 + struct.unpack_from("<i", image.raw, disk + match.start() + 3)[0]
        if target not in targets:
            continue
        index = bisect.bisect_right(starts, code) - 1
        if index >= 0 and code < image.functions[starts[index]]:
            found.setdefault(starts[index], set()).add(targets[target])
    for kind, words in ANCHORS.items():
        owners = [start for start, literals in found.items() if words <= literals]
        if len(owners) != 1:
            raise ValueError(f"{image.path}: unresolved native {kind} owner: {owners}")
        start = owners[0]
        yield kind, start, image.functions[start]


def rows(name, header, values):
    with (OUT / name).open("w", encoding="utf-8", newline="") as output:
        writer = csv.writer(output, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(values)


def main():
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    OUT.mkdir(parents=True, exist_ok=True)
    owners, literals, edges, switches = [], [], [], []
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        for kind, start, end in producers(image):
            instructions = list(image.instructions(start, end))
            # These two constructors terminate before one suffix switch table.
            # Its RVA operand and immediately preceding unsigned bound retain
            # the actual enum range; .pdata's end includes table bytes.
            tables = []
            for index, (address, instruction) in enumerate(instructions):
                match = re.search(r"mov\s+\w+,DWORD PTR \[\w+\+rax\*4\+(0x[0-9a-f]+)\]", instruction)
                if not match:
                    continue
                bound = next((re.search(r"cmp\s+eax,(0x[0-9a-f]+)", earlier)
                              for _, earlier in reversed(instructions[max(0, index - 8):index])
                              if re.search(r"cmp\s+eax,(0x[0-9a-f]+)", earlier)), None)
                if bound is None:
                    raise ValueError(f"{kind}: missing native switch bound at {address:#x}")
                table = image.base + int(match[1], 16)
                count = int(bound[1], 16) + 1
                tables.append(table)
                for enum in range(count):
                    target = image.base + struct.unpack_from("<I", image.raw,
                        image.offset(table) + enum * 4)[0]
                    switches.append((edition, kind, hex(address), hex(table), enum, hex(target)))
            code_end = min(tables, default=end)
            owners.append((edition, image.identity, str(image.path), kind,
                           hex(start), hex(code_end), hex(end)))
            listing = [f"; {edition} {image.identity} {image.path}",
                       f"; {kind} code {start:#x}..{code_end:#x}; unwind end {end:#x}"]
            for address, instruction in instructions:
                if address >= code_end:
                    break
                notes = []
                operand = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                if operand and (value := image.string(int(operand[1], 16))):
                    notes.append("SOURCE " + repr(value))
                    literals.append((edition, kind, hex(address), "cstring", "0x" + operand[1], value))
                if value := printable_inline(instruction):
                    notes.append("PRINTABLE_IMMEDIATE_BYTES " + repr(value))
                    literals.append((edition, kind, hex(address), "inline", "", value))
                if edge := re.match(r"((?:bnd |notrack )?(?:j\w+|call|loop\w*))\s+(.*)", instruction):
                    edges.append((edition, kind, hex(address), *edge.groups()))
                listing.append(f"{address:#x}: {instruction}" + (" ; " + "; ".join(notes) if notes else ""))
            (OUT / f"{edition}-{kind}.asm").write_text("\n".join(listing) + "\n", encoding="utf-8")
            print(f"{edition}: extracted native {kind} {start:#x}..{code_end:#x}")
    rows("native-owners.tsv", ("edition", "image", "path", "producer", "start", "code_end", "unwind_end"), owners)
    rows("native-literals.tsv", ("edition", "producer", "instruction", "kind", "operand", "text"), literals)
    rows("native-branches.tsv", ("edition", "producer", "instruction", "operation", "operands"), edges)
    rows("native-switches.tsv", ("edition", "producer", "instruction", "table", "enum", "target"), switches)


if __name__ == "__main__":
    main()
