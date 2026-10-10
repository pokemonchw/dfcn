"""Read the native Adventure chooser caption sources from configured PE images.

This is source extraction requested for translation work. It only reads the
images and saves their RTTI ownership, disassembly and literal operands; it
does not build, attach to or run the game or translation implementation.
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
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
DEST = ROOT / "data/extracted/adventure-action-menu"


def occurrences(raw, needle):
    at = 0
    while (at := raw.find(needle, at)) >= 0:
        yield at
        at += 1


def rtti_owners(image):
    """Follow the actual class hierarchy, including its abstract base table."""
    raw, base = image.raw, image.base
    labels = {image.address(match.start()) - 16 - base:
              match[1].decode("ascii") for match in
              re.finditer(rb"\.\?AV(adventure_[A-Za-z_]+st|adventure_optionst)@@\0", raw)}
    base_id = next(key for key, value in labels.items() if value == "adventure_optionst")
    for type_id, label in labels.items():
        for hit in occurrences(raw, struct.pack("<I", type_id)):
            if hit < 12:
                continue
            col = hit - 12
            signature, displacement, construction, _, hierarchy, self_id = struct.unpack_from("<6I", raw, col)
            try:
                if (signature, displacement, construction, self_id) != (1, 0, 0, image.address(col) - base):
                    continue
                h_at = image.offset(base + hierarchy)
                _, _, count, array_id = struct.unpack_from("<4I", raw, h_at)
                if count > 1000:
                    continue
                array_at = image.offset(base + array_id)
                base_types = [struct.unpack_from("<I", raw, image.offset(base + bcd))[0]
                              for bcd in struct.unpack_from(f"<{count}I", raw, array_at)]
                if base_id not in base_types:
                    continue
                for ref in occurrences(raw, struct.pack("<Q", base + self_id)):
                    table = image.address(ref) + 8
                    caption, detail = image.uint64(table + 8), image.uint64(table + 16)
                    image.offset(caption)
                    image.offset(detail)
                    yield label, table, caption, detail, hierarchy
            except (ValueError, struct.error):
                continue


def dump(image, start, label, edition, literal_rows, call_rows, branch_rows=None):
    end = image.functions.get(start, start + 256)
    instructions = list(image.instructions(start, end))
    if start not in image.functions:
        for index, (_, instruction) in enumerate(instructions):
            tail = re.match(r"jmp\s+0x([0-9a-f]+)$", instruction)
            if instruction.startswith("ret") or (tail and not start <= int(tail[1], 16) < end):
                end = instructions[index + 1][0] if index + 1 < len(instructions) else end
                instructions = instructions[:index + 1]
                break
    lines = [f"# {edition} {image.identity}; {label}; RVA {start - image.base:#x}..{end - image.base:#x}"]
    for index, (address, instruction) in enumerate(instructions):
        note = ""
        reference = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
        if reference:
            target = int(reference[1], 16)
            value = image.string(target)
            if value:
                note = " ; literal=" + json.dumps(value)
                operand_role = ("numeric-string-layout-vector" if "movdqa" in instruction
                                else "separator" if not value.strip(" /(),'") or value in (" and ", "'s ")
                                else "finite-text-operand-or-substring")
                literal_rows.append((edition, image.identity, label, hex(start - image.base), hex(address - image.base),
                                     "rip-relative", hex(target - image.base), operand_role, value))
        # MSVC also writes short strings directly into small-string storage.
        immediate = re.search(r"\bmov\s+(?:WORD|DWORD|QWORD) PTR \[[^]]+\],0x([0-9a-f]+)$", instruction)
        if immediate is None:
            immediate = re.search(r"\bmovabs\s+\w+,0x([0-9a-f]{16})$", instruction)
        if immediate:
            number = int(immediate[1], 16)
            width = max(1, (number.bit_length() + 7) // 8)
            value = number.to_bytes(width, "little")
            if width >= 2 and all(32 <= b <= 126 for b in value):
                source = value.decode("ascii")
                note += " ; inline=" + json.dumps(source)
                literal_rows.append((edition, image.identity, label, hex(start - image.base), hex(address - image.base),
                                     "inline-immediate-fragment", "", "finite-short-string-fragment", source))
        call = re.match(r"(?:call|jmp)\s+0x([0-9a-f]+)$", instruction)
        if call:
            target = int(call[1], 16)
            call_rows.append((edition, image.identity, label, hex(start - image.base), hex(address - image.base), hex(target - image.base), instruction.split()[0]))
        branch = re.match(r"(j(?!mp\b)\w+)\s+0x([0-9a-f]+)$", instruction)
        if branch and branch_rows is not None:
            target = int(branch[2], 16)
            fallthrough = instructions[index + 1][0] if index + 1 < len(instructions) else end
            branch_rows.append((edition, image.identity, label, hex(start - image.base),
                                hex(address - image.base), branch[1], hex(target - image.base),
                                hex(fallthrough - image.base)))
        lines.append(f"{address - image.base:#010x}: {instruction}{note}")
    return "\n".join(lines) + "\n"


def write_tsv(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as output:
        writer = csv.writer(output, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def containing_function(image, address):
    starts = sorted(image.functions)
    start = starts[bisect.bisect_right(starts, address) - 1]
    return start if address < image.functions[start] else None


def chooser_renderer(image):
    """Find the renderer by its actual RIP-relative title load in each PE."""
    text_at = image.raw.find(b"What do you want to do?\0")
    target = image.address(text_at)
    for at in occurrences(image.raw, b"\x0f\x10\x05"):
        try:
            reference = image.address(at)
            displacement = struct.unpack_from("<i", image.raw, at + 3)[0]
            if reference + 7 + displacement == target:
                start = containing_function(image, reference)
                if start is not None:
                    return start
        except ValueError:
            continue
    raise ValueError("The native Adventure chooser title load was not found")


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    owner_rows, literal_rows, call_rows, branch_rows = [], [], [], []
    for edition, key in (("steam", "reference"), ("classic", "classic")):
        image = CaptionImage(Path(config[key]), OBJDUMP)
        owners = sorted(set(rtti_owners(image)))
        roots = {}
        for label, table, caption, detail, hierarchy in owners:
            owner_rows.append((edition, image.identity, label, hex(table - image.base), hex(caption - image.base), hex(detail - image.base), hex(hierarchy)))
            roots.setdefault(caption, []).append(label + "+8")
            roots.setdefault(detail, []).append(label + "+16")
        if edition == "steam":
            # The renderer invokes this virtual method at its text pen before
            # building the string; retain it as the native font/layout source.
            for label, table, _, _, _ in owners:
                target = image.uint64(table + 0x118)
                roots.setdefault(target, []).append(label + "+0x118")
        roots[chooser_renderer(image)] = ["chooser-renderer"]
        if edition == "steam":
            # Called semantic fields retained independently from finite verbs.
            for address, label in ((0x74f220, "direction-helper"), (0x657f90, "unit-contaminant-field")):
                roots[image.base + address] = [label]
        else:
            # Direction is the call immediately after the '(' constructor in
            # the simple mount caption. Deposit naming is its first semantic
            # helper after initial empty-string preparation.
            for label, _, caption, _, _ in owners:
                if label == "adventure_movement_mountst":
                    selected = False
                    for _, instruction in image.instructions(caption):
                        ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                        if ref and image.string(int(ref[1], 16)) == " (":
                            selected = True
                        call = re.match(r"call\s+0x([0-9a-f]+)$", instruction)
                        if selected and call and int(call[1], 16) - image.base not in (0x6fa10,):
                            target = int(call[1], 16)
                            # Skip the common literal append, selected by its
                            # own caption-independent first 3 machine bytes.
                            if target in image.functions and image.functions[target] - target > 0x100:
                                roots[target] = ["direction-helper"]
                                break
                if label == "adventure_option_view_contaminantst":
                    # This method's naming helper is an invariant direct-call
                    # position in both builds, from the same owner and slot.
                    calls = [int(m[1], 16) for _, ins in image.instructions(caption)
                             if (m := re.match(r"call\s+0x([0-9a-f]+)$", ins))]
                    roots[calls[0]] = ["unit-contaminant-field"]
        asm = []
        for start, labels in sorted(roots.items()):
            asm.append(dump(image, start, ";".join(labels), edition, literal_rows, call_rows, branch_rows))
        (DEST / f"{edition}-captions.asm").write_text("\n".join(asm), encoding="utf-8")
        print(f"{edition}: {image.identity}; {len(owners)} RTTI owners; {len(roots)} caption/helper/renderer bodies")
    write_tsv("native-owners.tsv", ("edition", "image_identity", "type", "vtable_rva", "caption_rva", "detail_caption_rva", "hierarchy_rva"), owner_rows)
    write_tsv("native-literals.tsv", ("edition", "image_identity", "owners", "function_rva", "instruction_rva", "encoding", "literal_rva", "operand_role", "source"), literal_rows)
    write_tsv("native-calls.tsv", ("edition", "image_identity", "owners", "function_rva", "instruction_rva", "callee_rva", "instruction"), call_rows)
    write_tsv("native-branches.tsv", ("edition", "image_identity", "owners", "function_rva", "instruction_rva", "branch", "target_rva", "fallthrough_rva"), branch_rows)


if __name__ == "__main__":
    main()
