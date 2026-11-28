#!/usr/bin/env python3
"""Read the native Windows mission/spoils/tribute report-list title sources.

This is requested offline reverse engineering. It writes source evidence from
both configured PE editions; it never loads a game, runs a translator, builds
data or code, or performs a rendering/translation test. Ranges are the reviewed
title-production blocks, their typed field suppliers, and the list consumer.
"""
from __future__ import annotations

import argparse
import bisect
import csv
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess

from extract_legends_catalog import NativeImage

ROOT = Path(__file__).resolve().parents[1]
INSN = re.compile(r"^\s*([0-9a-f]+):\s+(?:[0-9a-f]{2}\s+)+\s*([a-z][a-z0-9]*)\s*(.*)$")
DIRECT = re.compile(r"^0x([0-9a-f]+)(?:\s|$)")
REF = re.compile(r"#\s*0x([0-9a-f]+)")

# Actual literal owners and matching reviewed control-flow blocks in the two
# installed images. No translated caption or on-screen spelling identifies an
# owner. Class/field offsets are identical between these Windows editions.
RANGES = {
    "reference": {
        "mission-title": (0x9DF8BD, 0x9DFBBA),
        "spoils-title": (0x10F966, 0x10FB02),
        "tribute-title": (0xA09633, 0xA09822),
        "report-list-consumer": (0x1D0B2D, 0x1D0F47),
        "spoils-detail-heading": (0x1D06CE, 0x1D077B),
        "spoils-squad-source": (0x10B5A9, 0x10B5EA),
        "separate-interrogation-storage": (0x2BC250, 0x2BC3F3),
    },
    "classic": {
        "mission-title": (0x9DD0ED, 0x9DD3EA),
        "spoils-title": (0x10F8F6, 0x10FA92),
        "tribute-title": (0xA06E63, 0xA07052),
        "report-list-consumer": (0x1D0ABD, 0x1D0ED7),
        "spoils-detail-heading": (0x1D065E, 0x1D070B),
        "spoils-squad-source": (0x10B539, 0x10B57A),
        "separate-interrogation-storage": (0x2B9E10, 0x2B9FB3),
    },
}


def owner(image: NativeImage, rva: int) -> int:
    index = bisect.bisect_right(image.starts, rva) - 1
    if index >= 0:
        begin, end = image.functions[index]
        if begin <= rva < end:
            return image.function_owners[begin]
    return rva


def extract(image_path: Path, edition: str, objdump: Path, destination: Path):
    image = NativeImage(image_path)
    pe = struct.unpack_from("<I", image.raw, 0x3C)[0]
    timestamp = struct.unpack_from("<I", image.raw, pe + 8)[0]
    # Each reviewed block has the same internal instruction layout in these
    # builds. Locate its start independently; helpers below follow actual calls.
    offsets = {
        ("reference", 0x6A70A6D9): (0, 0, 0, 0, 0),
        ("classic", 0x6A70B91C): (0, 0, 0, 0, 0),
        ("reference", 0x6AEA05A1): (0x19AB0, 0x16A0, 0x19AB0, 0x2D70, 0x3E50),
        ("classic", 0x6AEA11A5): (0x19890, 0x16A0, 0x19890, 0x2D70, 0x3C30),
    }
    mission, spoils, tribute, display, interrogation = offsets[edition, timestamp]
    shifts = {"mission-title": mission, "spoils-title": spoils, "tribute-title": tribute,
              "report-list-consumer": display, "spoils-detail-heading": display,
              "spoils-squad-source": spoils, "separate-interrogation-storage": interrogation}
    records = []
    all_instructions = {}
    for address, function, end, disk, value in image.references():
        if "Report:" in value:
            records.append(("report-prefix-source", "all-native-report-prefixes", function,
                            address, 0, value))
    pe_header = struct.unpack_from("<I", image.raw, 0x3C)[0]
    import_rva = struct.unpack_from("<I", image.raw, pe_header + 24 + 120)[0]
    imports = {}
    def cstring(rva):
        offset = image.offset(rva)
        return image.raw[offset:image.raw.index(b"\0", offset)].decode("ascii")
    while import_rva:
        original, _, _, name, first = struct.unpack_from("<5I", image.raw, image.offset(import_rva))
        if not name:
            break
        slot = 0
        while True:
            thunk = struct.unpack_from("<Q", image.raw, image.offset((original or first) + slot * 8))[0]
            if not thunk:
                break
            symbol = f"ordinal{thunk & 0xffff}" if thunk >> 63 else cstring(thunk + 2)
            imports[first + slot * 8] = cstring(name) + "!" + symbol
            slot += 1
        import_rva += 20

    def read(label: str, begin: int, end: int):
        output = subprocess.check_output([
            str(objdump), "-d", "-M", "intel", "--wide",
            f"--start-address={image.base + begin:#x}",
            f"--stop-address={image.base + end:#x}", str(image_path),
        ], text=True)
        instructions = []
        function_owner = owner(image, begin)
        leaf_owner = function_owner == begin and begin not in image.function_ends
        annotated = [f"# {edition} {label}: RVA {begin:#x}..{end:#x}; static PE source\n"]
        for line in output.splitlines():
            match = INSN.match(line)
            if not match:
                continue
            address, opcode, operands = int(match[1], 16) - image.base, match[2], match[3]
            instruction_owner = begin if leaf_owner else owner(image, address)
            instructions.append((address, opcode, operands))
            annotation = ""
            reference = REF.search(operands)
            if reference:
                target = int(reference[1], 16) - image.base
                if opcode == "call" and target in imports:
                    annotation += " ; import=" + imports[target]
                    records.append(("import-call", label, instruction_owner, address, target, imports[target]))
                value = image.string(target)
                if value:
                    annotation = " ; literal=" + repr(value[1])
                    records.append(("literal", label, instruction_owner, address, target, value[1]))
            immediate = re.search(r",0x([0-9a-f]+)$", operands)
            if opcode == "movabs" and immediate:
                encoded = int(immediate[1], 16).to_bytes(8, "little").rstrip(b"\0")
                if len(encoded) >= 3 and all(32 <= byte <= 126 for byte in encoded):
                    text = encoded.decode("ascii")
                    annotation += " ; immediate-text=" + repr(text)
                    records.append(("inline-immediate", label, instruction_owner, address, 0, text))
            annotated.append(line + annotation + "\n")
            if opcode == "call" or opcode.startswith("j"):
                target = DIRECT.match(operands)
                records.append(("call" if opcode == "call" else "branch", label,
                                instruction_owner, address,
                                int(target[1], 16) - image.base if target else 0,
                                opcode + " " + operands))
        (destination / f"{edition}-{label}.asm").write_text("".join(annotated), encoding="utf-8")
        all_instructions[label] = instructions
        records.append(("range", label, owner(image, begin), begin, end, "reviewed native source block"))
        return instructions

    for label, bounds in RANGES[edition].items():
        read(label, bounds[0] + shifts[label], bounds[1] + shifts[label])

    def called(label, pc):
        row = next(row for row in all_instructions[label] if row[0] == pc and row[1] == "call")
        return int(DIRECT.match(row[2])[1], 16) - image.base

    delta = mission + (0 if edition == "reference" else -0x27D0)
    mission_call = lambda pc: called("mission-title", pc + delta)
    suppliers = {
        "diplomatic-proposal": mission_call(0x9DF979),
        "mission-goal-getter": mission_call(0x9DF923),
        "year-decimal": mission_call(0x9DFB83),
        "site-name": mission_call(0x9DF9B9),
        "rescue-figure": mission_call(0x9DFA3D),
        "recover-artifact": mission_call(0x9DFA78),
        "squad-language-name": called("spoils-title", spoils + (0x10FA07 if edition == "reference" else 0x10F997)),
        "tribute-entity-name": called("tribute-title", tribute + (0xA09757 if edition == "reference" else 0xA06F87)),
        "squad-vector-owner": called("spoils-squad-source", spoils + (0x10B5E5 if edition == "reference" else 0x10B575)),
    }
    for label, entry in suppliers.items():
        begin = owner(image, entry)
        end = image.function_ends.get(begin)
        if end is None:
            # Stackless proposal helper has no unwind owner. Its first INT3
            # after the unconditional tail jump delimits the reviewed body.
            end = next(address for address in image.starts if address > begin)
        read(label, begin, end)

    # EnglishName uses the same WORD/POS leaf for each component. The leaf
    # ends in RET immediately before its nine-entry RVA table on both builds.
    name = suppliers["squad-language-name"]
    word = called("squad-language-name", name + 0x254)
    read("english-word-form", word, word + 0xCC)
    decimal_call = next(row for row in all_instructions["year-decimal"] if row[1] == "call")
    decimal_entry = int(DIRECT.match(decimal_call[2])[1], 16) - image.base
    read("year-decimal-core", decimal_entry, image.function_ends[decimal_entry])

    for label, switch, count, selector_name in (
            ("mission-title", "mission-raid-type", 7, "goal=2; raid.type"),
            ("english-word-form", "word-POS", 9, "part_of_speech")):
        instructions = all_instructions[label]
        table = next(int(match[1], 16) for _, _, operands in instructions
                     if (match := re.search(r"r8\+r[ac]x\*4\+(0x[0-9a-f]+)\]", operands)))
        for selector in range(count):
            slot = table + selector * 4
            target = struct.unpack_from("<I", image.raw, image.offset(slot))[0]
            records.append(("switch-case", switch, owner(image, instructions[0][0]),
                            slot, target, f"{selector_name}={selector}"))
    metadata = {
        "edition": edition, "path": str(image_path), "sha256": hashlib.sha256(image.raw).hexdigest(),
        "image_base": f"0x{image.base:x}", "timestamp": f"0x{struct.unpack_from('<I', image.raw, pe + 8)[0]:x}",
        "size_of_image": f"0x{struct.unpack_from('<I', image.raw, pe + 24 + 56)[0]:x}",
    }
    return metadata, records


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--images", type=Path, default=ROOT / "data/runtime/native-pe-images.json")
    parser.add_argument("--objdump", type=Path, required=True)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    paths = json.loads(args.images.read_text(encoding="utf-8"))
    if args.output is None:
        args.output = ROOT / "data/extracted/mission-report-list"
        with Path(paths["reference"]).open("rb") as stream:
            stream.seek(0x3C)
            stream.seek(struct.unpack("<I", stream.read(4))[0] + 8)
            if struct.unpack("<I", stream.read(4))[0] == 0x6AEA05A1:
                args.output /= "53.17"
    args.output.mkdir(parents=True, exist_ok=True)
    metadata, entries = [], []
    for edition in ("reference", "classic"):
        image_metadata, records = extract(Path(paths[edition]), edition, args.objdump, args.output)
        metadata.append(image_metadata)
        entries.extend((edition, *row) for row in records)
    (args.output / "native-images.json").write_text(json.dumps(metadata, indent=2) + "\n", encoding="utf-8")
    with (args.output / "native-source-edges.tsv").open("w", encoding="utf-8", newline="") as stream:
        stream.write("# Offline disassembly source evidence; addresses are RVAs. No game code or translation executed.\n")
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(("edition", "record", "source", "owner_rva", "instruction_rva", "target_rva", "literal_or_edge"))
        for edition, kind, label, function, instruction, target, value in entries:
            writer.writerow((edition, kind, label, f"0x{function:x}", f"0x{instruction:x}", f"0x{target:x}", value))
    print(f"Native report-list source evidence written to {args.output}")


if __name__ == "__main__":
    main()
