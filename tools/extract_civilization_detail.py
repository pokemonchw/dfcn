#!/usr/bin/env python3
"""Extract the installed PE civilization-detail renderer and text suppliers.

Offline source extraction for DecompileMissionOptions.java. No running game,
translation generation, or test execution is involved.
"""
from __future__ import annotations

import bisect
import csv
import json
from pathlib import Path
import re
import subprocess

from extract_legends_catalog import NativeImage
from extract_mission_options import INSN, DIRECT, REFERENCE, TABLE

ROOT = Path(__file__).resolve().parents[1]
OBJDUMP = Path(r"C:\Users\WIN11\AppData\Local\Programs\dfcn-toolchains\w64devkit-2.9.1\w64devkit\bin\objdump.exe")
OUTPUT = ROOT / "data/extracted/civilization-detail"


def extract(edition: str, path: Path):
    image = NativeImage(path)
    refs = list(image.references())
    year = next(row for row in refs if row[4] == "Agreed in year ")
    begin, end = year[1:3]
    directory = OUTPUT / edition
    directory.mkdir(parents=True, exist_ok=True)
    functions, calls, literals, switches = [], [], [], []

    def disassemble(label, entry):
        index = bisect.bisect_right(image.starts, entry) - 1
        if index >= 0 and image.functions[index][0] <= entry < image.functions[index][1]:
            owner = image.function_owners[image.functions[index][0]]
            end = image.function_ends[owner]
        else:
            owner = entry
            end = next(start for start in image.starts if start > entry)
        functions.append((edition, label, hex(image.base + owner), hex(image.base + end)))
        raw = subprocess.check_output([str(OBJDUMP), "-d", "-M", "intel", "--wide",
            f"--start-address={image.base + owner:#x}", f"--stop-address={image.base + end:#x}", str(path)], text=True)
        instructions, annotated = [], []
        for line in raw.splitlines():
            match = INSN.match(line)
            if not match:
                continue
            pc, opcode, operands = int(match[1], 16), match[2], match[3]
            instructions.append((pc, opcode, operands))
            annotation = ""
            reference = REFERENCE.search(operands)
            if reference:
                target = int(reference[1], 16)
                value = image.string(target - image.base)
                if value:
                    literals.append((label, hex(pc), hex(target), "cstring", value[1]))
                    annotation = " ; literal=" + repr(value[1])
            annotated.append(f"0x{pc:x}: {opcode:7} {operands}{annotation}\n")
            target = DIRECT.match(operands)
            if opcode == "call" or (opcode == "jmp" and target and
                    not image.base + owner <= int(target[1], 16) < image.base + end):
                calls.append((label, hex(pc), target[1] if target else operands))
        (directory / f"{label}.asm").write_text("".join(annotated), encoding="utf-8")
        for at, (pc, opcode, operands) in enumerate(instructions):
            if opcode != "jmp" or DIRECT.match(operands) or "[" in operands:
                continue
            window = instructions[max(0, at - 12):at]
            tables = [(i, TABLE.search(row[2])) for i, row in enumerate(window) if TABLE.search(row[2])]
            if not tables:
                continue
            table_index, table = tables[-1]
            comparisons = [row for row in window[:table_index] if row[1] == "cmp" and
                re.search(r",0x[0-9a-f]+$", row[2])]
            if not comparisons:
                continue
            maximum = int(comparisons[-1][2].rsplit(",", 1)[1], 16)
            table_rva = int(table[1], 16)
            byte_tables = [row for row in window if "BYTE PTR" in row[2] and "*1+" in row[2]]
            for selector in range(maximum + 1):
                slot = selector
                if byte_tables:
                    byte_rva = int(re.search(r"\*1\+(0x[0-9a-f]+)", byte_tables[-1][2])[1], 16)
                    slot = image.raw[image.offset(byte_rva + selector)]
                target = int.from_bytes(image.raw[image.offset(table_rva + slot * 4):][:4], "little")
                switches.append((label, selector, hex(pc), hex(image.base + table_rva), slot, hex(image.base + target)))
        return instructions

    instructions = disassemble("world-report-render", begin)
    # Select the calls relative to the literal reference in the retained 53.16
    # decompilation. Each installed image supplies its actual direct callee;
    # no historical helper address is passed to the decompiler.
    shift = year[0] - 0x1C595A
    supplier_returns = {
        "trade-amount": 0x1C5080,
        "agreement-topic": 0x1C5666,
        "export-commodity": 0x1C5B0A,
        "import-item": 0x1C5D03,
        "official-position": 0x1C5F9E,
        "native-name": 0x1C4F43,
    }
    for label, reference_return in supplier_returns.items():
        site = image.base + reference_return + shift - 5
        row = next(row for row in instructions if row[0] == site)
        if row[1] != "call" or not DIRECT.match(row[2]):
            raise ValueError(f"Native supplier call changed at {site:#x}")
        disassemble(label, int(DIRECT.match(row[2])[1], 16) - image.base)
    for filename, header, rows in [
        ("native-functions.tsv", ("edition", "source", "start", "end"), functions),
        ("native-calls.tsv", ("source", "instruction", "target"), calls),
        ("native-literals.tsv", ("scope", "instruction", "address", "kind", "literal"), literals),
        ("native-switches.tsv", ("source", "selector", "dispatch", "table", "slot", "target"), switches),
    ]:
        with (directory / filename).open("w", encoding="utf-8", newline="") as stream:
            writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
            writer.writerow(header)
            writer.writerows(rows)
    return {"edition": edition, "path": str(path), "format": "PE32+",
        "image_base": hex(image.base), "renderer": hex(image.base + begin),
        "detail_region": [hex(image.base + 0x1C4A84 + shift), hex(image.base + 0x1C618F + shift)]}


if __name__ == "__main__":
    paths = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    metadata = [extract(edition, Path(paths[edition])) for edition in ("reference", "classic")]
    (OUTPUT / "native-images.json").write_text(json.dumps(metadata, indent=2) + "\n", encoding="utf-8")
    print(f"Extracted civilization detail sources to {OUTPUT}")
