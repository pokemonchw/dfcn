"""Extract Adventure continuation controls from the configured native PEs.

This reads the native instructions, operands, branches and RTTI owners. It
does not load the game, execute translations, build or run rendering checks.
"""
from __future__ import annotations

import bisect
import csv
import json
from pathlib import Path
import re
import struct

from native_caption_image import CaptionImage


ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/adventure-action-continuation"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
SOURCES = (
    "Continue action", "Stop action", "In conflict! ", "Finish anyway",
    "Finishing up...", "Finish action", "Continue waiting",
    "You haven't been able to act for a while.",
    "You can continue waiting, or save/quit from", "the settings menu.",
)

# The two editions use the same owner, field offsets and native branches.
# The exact spans intentionally retain the continuation feature rather than
# copying unrelated Adventure rendering and input functionality.
RANGES = {
    "steam": (
        ("action-control-gate", 0xaf989e, 0xaf98ad),
        ("action-controls", 0xafb3d8, 0xafba1d),
        ("waiting-dialog", 0xb035c5, 0xb0386a),
        ("input-mode-selection", 0x7f75fe, 0x7f7643),
        ("waiting-input", 0x7f763d, 0x7f7794),
        ("action-input-dispatch", 0x7f9b6e, 0x7f9b94),
        ("action-input", 0x7f6d60, 0x7f7016),
        ("resume-action", 0x7f6c30, 0x7f6d60),
        ("has-continuable-action", 0x7eeb70, 0x7eed14),
        ("in-conflict", 0x643e00, 0x643f67),
        ("current-key-draw", 0xc394b0, 0xc395b5),
        ("current-key-caption", 0x8ecb30, 0x8ece32),
        ("render-mode-selection", 0x7f3d60, 0x7f3dc4),
        ("legacy-render-dispatch", 0x7f6ab9, 0x7f6aee),
    ),
    "classic": (
        ("action-control-gate", 0xaf68de, 0xaf68ed),
        ("action-controls", 0xaf8418, 0xaf8a5d),
        ("waiting-dialog", 0xb00605, 0xb008aa),
        ("input-mode-selection", 0x7f4e7e, 0x7f4ec3),
        ("waiting-input", 0x7f4ebd, 0x7f5014),
        ("action-input-dispatch", 0x7f73ee, 0x7f7414),
        ("action-input", 0x7f45e0, 0x7f4896),
        ("resume-action", 0x7f44b0, 0x7f45e0),
        ("has-continuable-action", 0x7ec3f0, 0x7ec594),
        ("in-conflict", 0x641820, 0x641987),
        ("current-key-draw", 0xc364f0, 0xc365f5),
        ("current-key-caption", 0x8ea360, 0x8ea662),
        ("render-mode-selection", 0x7f15e0, 0x7f1644),
        ("legacy-render-dispatch", 0x7f4339, 0x7f436e),
    ),
}


def owner(image, address):
    starts = sorted(image.functions)
    index = bisect.bisect_right(starts, address) - 1
    if index < 0:
        return None
    start = starts[index]
    return start if address < image.functions[start] else None


def rip_refs(image, target):
    pattern = rb"(?:[\x48\x4c][\x8d\x8b]|\x0f[\x10\x28\x6f])[\x05\x0d\x15\x1d\x25\x2d\x35\x3d]...."
    for match in re.finditer(pattern, image.raw):
        try:
            address = image.address(match.start())
        except ValueError:
            continue
        displacement = struct.unpack_from("<i", image.raw, match.end() - 4)[0]
        if address + 7 + displacement == target and owner(image, address) is not None:
            yield address


def vtables(image, target):
    at = 0
    while (at := image.raw.find(struct.pack("<Q", target), at)) >= 0:
        for distance in range(1, 20):
            prefix = at - 8 * distance
            if prefix < 0:
                continue
            col = struct.unpack_from("<Q", image.raw, prefix)[0]
            try:
                sig, _, _, desc, _, self_rva = struct.unpack_from("<6I", image.raw, image.offset(col))
                name = image.string(image.base + desc + 16)
                if sig == 1 and col - image.base == self_rva and name and name.startswith(".?AV"):
                    table = image.address(prefix) + 8
                    yield name, table, distance - 1
                    break
            except (ValueError, struct.error):
                continue
        at += 1


def rows(name, header, values):
    with (DEST / name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(values)


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    literals, calls, branches, spans, xrefs, slots = [], [], [], [], [], []
    for edition, key in (("steam", "reference"), ("classic", "classic")):
        image = CaptionImage(Path(config[key]), OBJDUMP)
        for role, start, end in RANGES[edition]:
            owning = owner(image, image.base + start)
            spans.append((edition, image.identity, str(image.path), role, hex(start), hex(end),
                          hex(owning - image.base) if owning else "",
                          hex(image.functions[owning] - image.base) if owning else ""))
            lines = [f"# {edition} {image.identity}; {role}; RVA {start:#x}..{end:#x}"]
            for address, instruction in image.instructions(image.base + start, image.base + end):
                note = ""
                reference = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                if reference:
                    operand = int(reference[1], 16)
                    text = image.string(operand)
                    if text:
                        note = " ; literal=" + json.dumps(text)
                        literals.append((edition, role, hex(address-image.base), hex(operand-image.base), text))
                immediate = re.search(r"\bmov\s+(WORD|DWORD|QWORD) PTR \[[^]]+\],0x([0-9a-f]+)$", instruction)
                if immediate:
                    size = {"WORD": 2, "DWORD": 4, "QWORD": 8}[immediate[1]]
                    value = int(immediate[2], 16).to_bytes(size, "little").rstrip(b"\0")
                    if value and all(32 <= char <= 126 for char in value):
                        text = value.decode("ascii")
                        note += " ; inline=" + json.dumps(text)
                        literals.append((edition, role, hex(address-image.base), "inline-immediate", text))
                call = re.match(r"call\s+0x([0-9a-f]+)$", instruction)
                if call:
                    calls.append((edition, role, hex(address-image.base), hex(int(call[1], 16)-image.base)))
                branch = re.match(r"(j\w+)\s+0x([0-9a-f]+)$", instruction)
                if branch:
                    branches.append((edition, role, hex(address-image.base), branch[1], hex(int(branch[2], 16)-image.base)))
                lines.append(f"{address-image.base:#010x}: {instruction}{note}")
            (DEST / f"{edition}-{role}.asm").write_text("\n".join(lines)+"\n", encoding="utf-8")
        for text in SOURCES:
            at = -1
            while (at := image.raw.find(text.encode("ascii") + b"\0", at + 1)) >= 0:
                literal = image.address(at)
                references = list(rip_refs(image, literal))
                for ref in references:
                    owning = owner(image, ref)
                    xrefs.append((edition, image.identity, text, hex(literal-image.base), hex(ref-image.base),
                                  hex(owning-image.base), hex(image.functions[owning]-image.base)))
        render = image.base + (0x7f3cb0 if edition == "steam" else 0x7f1530)
        for name, table, slot in vtables(image, render):
            for index in (1, 2, slot):
                target = image.uint64(table + index * 8)
                slots.append((edition, image.identity, name, hex(table-image.base), index, hex(target-image.base),
                              hex(image.functions[target]-image.base)))
        print(f"{edition}: {image.identity}; extracted {len(RANGES[edition])} continuation-control spans")
    rows("native-spans.tsv", ("edition", "image_identity", "path", "role", "start_rva", "end_rva", "owner_rva", "owner_end_rva"), spans)
    rows("native-literals.tsv", ("edition", "role", "instruction_rva", "literal_rva", "source"), literals)
    rows("native-calls.tsv", ("edition", "role", "instruction_rva", "callee_rva"), calls)
    rows("native-branches.tsv", ("edition", "role", "instruction_rva", "branch", "target_rva"), branches)
    rows("native-string-xrefs.tsv", ("edition", "image_identity", "source", "literal_rva", "instruction_rva", "owner_rva", "owner_end_rva"), xrefs)
    rows("native-virtual-owners.tsv", ("edition", "image_identity", "type", "vtable_rva", "slot", "target_rva", "end_rva"), slots)


if __name__ == "__main__":
    main()
