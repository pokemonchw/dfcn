"""Extract the complete native adventure movement modal from configured PEs.

Disk-only source inventory: instructions, text operands, branches and calls.
This does not run the game, build translations or create rendering checks.
"""
from pathlib import Path
import csv
import json
import re
import struct

from native_caption_image import CaptionImage

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/adventure-movement"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
OWNERS = {
    "reference": (
        ("movement-modal", 0x874800, 0x877261),
        ("unit-title", 0x132e430, 0x132f971),
        ("shortcut", 0xc394b0, 0xc395b5),
        ("shortcut-name", 0x8ecb30, 0x8ece32),
    ),
    "classic": (
        ("movement-modal", 0x872080, 0x874ae1),
        ("unit-title", 0x13293a0, 0x132a8e1),
        ("shortcut", 0xc364f0, 0xc365f5),
        ("shortcut-name", 0x8ea360, 0x8ea662),
    ),
}

# These four switches are part of the modal frame's trailing data. Keep their
# destinations as data instead of treating objdump's decoded table bytes as code.
SWITCHES = (
    ("climb-direction", 0x875314, 0x877114, None, 1, 10, 0x875343),
    ("speed-direction", 0x8758b7, 0x87713c, None, 1, 10, 0x875b0e),
    ("vegetation-low", 0x876603, 0x877164, 0x87716c, 0x31, 0xb8, 0x876504),
    ("vegetation-high", 0x87662f, 0x877224, 0x87722c, 0x159, 0x35, 0x876504),
)


def extract_switches(image, edition):
    delta = 0 if edition == "reference" else -0x2780
    rows = []
    for name, branch, table, indices, first, count, default in SWITCHES:
        branch, table, default = branch + delta, table + delta, default + delta
        indices = None if indices is None else indices + delta
        for position in range(count):
            slot = position if indices is None else image.raw[
                image.offset(image.base + indices + position)]
            destination = struct.unpack_from(
                "<I", image.raw, image.offset(image.base + table + 4 * slot))[0]
            rows.append((edition, name, hex(branch), hex(table),
                         "" if indices is None else hex(indices),
                         hex(first + position), slot, hex(destination)))
        rows.append((edition, name, hex(branch), hex(table),
                     "" if indices is None else hex(indices), "default", "", hex(default)))
    rows.append((edition, "vegetation-explicit", hex(0x8765d8 + delta), "", "",
                 "0x158", "", hex(0x876632 + delta)))
    return rows


def extract_raw_gaits(config):
    """Keep every vanilla gait token with its original object scope."""
    gaits, applications = [], []
    for edition in OWNERS:
        vanilla = Path(config[edition]).parent / "data/vanilla"
        for path in sorted(vanilla.rglob("*.txt")):
            variation = creature = caste = ""
            raw = path.read_bytes()
            try:
                source = raw.decode("utf-8")
            except UnicodeDecodeError:
                source = raw.decode("cp437")
            for line_number, line in enumerate(source.splitlines(), 1):
                for match in re.finditer(r"\[([^\[\]\r\n]+)\]", line):
                    token = match[0]
                    parts = match[1].split(":")
                    if parts[0] == "CREATURE_VARIATION":
                        variation = parts[1]
                        creature = caste = ""
                    elif parts[0] == "CREATURE":
                        creature = parts[1]
                        variation = caste = ""
                    elif parts[0] in {"CASTE", "SELECT_CASTE", "ADD_CASTE"}:
                        caste = ":".join(parts[1:])
                    fields = parts[1:] if parts[0] == "CV_NEW_TAG" else parts
                    if len(fields) >= 3 and fields[0] == "GAIT":
                        gaits.append((edition, str(path), line_number, variation,
                                      creature, caste, token, fields[1], fields[2]))
                    elif parts[0] == "APPLY_CREATURE_VARIATION" and parts[1].endswith("_GAITS"):
                        applications.append((edition, str(path), line_number, parts[1],
                                             creature, caste, token, ":".join(parts[2:])))
    for name, header, rows in (
        ("raw-gait-sources.tsv", ("edition", "file", "line", "variation", "creature",
                                 "caste", "token", "type", "name"), gaits),
        ("raw-gait-applications.tsv", ("edition", "file", "line", "variation", "creature",
                                      "caste", "token", "arguments"), applications),
    ):
        with (DEST / name).open("w", encoding="utf-8", newline="") as out:
            writer = csv.writer(out, delimiter="\t", lineterminator="\n")
            writer.writerow(header)
            writer.writerows(rows)


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    extract_raw_gaits(config)
    literals, branches, calls, switches, images = [], [], [], [], []
    for edition, ranges in OWNERS.items():
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        switches.extend(extract_switches(image, edition))
        images.append({"edition": edition, "path": str(image.path), "identity": image.identity,
                       "functions": [{"role": role, "start_rva": hex(start), "end_rva": hex(end)}
                                     for role, start, end in ranges]})
        for role, start, end in ranges:
            lines = [f"# {edition} {image.identity}; {role}; RVA {start:#x}..{end:#x}"]
            for address, instruction in image.instructions(image.base + start, image.base + end):
                note = ""
                ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                if ref:
                    target = int(ref[1], 16)
                    value = image.string(target)
                    if value and not value.startswith("basic_string::"):
                        note = " ; literal=" + json.dumps(value)
                        literals.append((edition, role, hex(address-image.base), hex(target-image.base), "rip", value))
                immediate = re.search(r"\bmov\s+(?:WORD|DWORD|QWORD) PTR \[[^]]+\],0x([0-9a-f]+)$", instruction)
                if immediate is None:
                    immediate = re.search(r"\bmovabs\s+\w+,0x([0-9a-f]{16})$", instruction)
                if immediate:
                    number = int(immediate[1], 16)
                    value = number.to_bytes(max(1, (number.bit_length()+7)//8), "little").rstrip(b"\0")
                    if len(value) >= 2 and all(32 <= byte <= 126 for byte in value):
                        value = value.decode("ascii")
                        note += " ; inline=" + json.dumps(value)
                        literals.append((edition, role, hex(address-image.base), "inline", "immediate", value))
                is_code = role != "movement-modal" or address < image.base + (
                    0x877112 if edition == "reference" else 0x874992)
                call = re.match(r"call\s+0x([0-9a-f]+)$", instruction) if is_code else None
                if call:
                    calls.append((edition, role, hex(address-image.base), hex(int(call[1],16)-image.base)))
                branch = re.match(r"(j\w+)\s+0x([0-9a-f]+)$", instruction) if is_code else None
                if branch:
                    branches.append((edition, role, hex(address-image.base), branch[1], hex(int(branch[2],16)-image.base)))
                lines.append(f"{address-image.base:#010x}: {instruction}{note}")
            (DEST / f"{edition}-{role}.asm").write_text("\n".join(lines)+"\n", encoding="utf-8")
    (DEST / "image-sources.json").write_text(json.dumps(images, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    for name, header, rows in (
        ("native-literals.tsv", ("edition", "role", "instruction_rva", "operand_rva", "storage", "source"), literals),
        ("native-branches.tsv", ("edition", "role", "instruction_rva", "branch", "target_rva"), branches),
        ("native-calls.tsv", ("edition", "role", "instruction_rva", "callee_rva"), calls),
        ("native-switches.tsv", ("edition", "switch", "instruction_rva", "table_rva",
                                 "index_rva", "input", "slot", "target_rva"), switches),
    ):
        with (DEST / name).open("w", encoding="utf-8", newline="") as out:
            writer = csv.writer(out, delimiter="\t", lineterminator="\n")
            writer.writerow(header)
            writer.writerows(rows)


if __name__ == "__main__":
    main()
