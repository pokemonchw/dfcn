"""Offline native item/tool/instrument naming source extraction.

Reads only the configured PE images and their installed RAW text. This preserves
real method bodies, literal operands, switches and branch/call edges as source
material. It never loads a game module, runs the game, invokes a translator,
builds, or evaluates output. Existing full Steam writer source rows are reused.
"""
from __future__ import annotations

import bisect
import csv
import json
from pathlib import Path
import re
import struct

from native_caption_image import CaptionImage
from extract_legends_catalog import NativeImage

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/adventure-item-tool"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
TABLE = re.compile(r"DWORD PTR \[[^\]]+\*4\+(0x[0-9a-f]+)\]")
BYTE_TABLE = re.compile(r"BYTE PTR \[[^\]]+\*1\+(0x[0-9a-f]+)\]")
IMMEDIATE = re.compile(r",(0x[0-9a-f]+)$")


def occurrences(raw, needle):
    at = 0
    while (at := raw.find(needle, at)) >= 0:
        yield at
        at += 1


def item_owners(image):
    for label in ("item_toolst", "item_weaponst", "item_instrumentst"):
        for at in occurrences(image.raw, (".?AV" + label + "@@\0").encode()):
            descriptor = image.address(at) - image.base - 16
            for hit in occurrences(image.raw, struct.pack("<I", descriptor)):
                if hit < 12:
                    continue
                col = hit - 12
                values = struct.unpack_from("<6I", image.raw, col)
                try:
                    if values[:3] != (1, 0, 0) or values[5] != image.address(col) - image.base:
                        continue
                    for ref in occurrences(image.raw, struct.pack("<Q", image.base + values[5])):
                        table = image.address(ref) + 8
                        yield label, table
                except ValueError:
                    continue


def direct_calls(instructions):
    for at, instruction in instructions:
        if match := re.match(r"(?:call|jmp)\s+0x([0-9a-f]+)$", instruction):
            yield at, int(match[1], 16)


def write_tsv(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    functions, owners, literals, calls, branches, selectors, name_productions = [], [], [], [], [], [], []
    writer_rows, piece_fields = [], []
    prior_writer = []
    with (ROOT / "data/extracted/item-description-sources.tsv").open(encoding="utf-8-sig") as source:
        prior_writer = [row for row in csv.reader(source, delimiter="\t") if len(row) >= 7 and row[2] == "0xebe8a0"]
    for row in prior_writer:
        if row[0] != "literal":
            continue
        value = row[5]
        pair = re.fullmatch(r":([a-z -]+):([a-z -]+)(?::(STANDARD|ALWAYS_PLURAL)\])?", value)
        if pair:
            piece_fields.append(("steam", row[3], "INSTRUMENT_PIECE name fields", pair[1], pair[2], pair[3] or "separate count-mode token", value))
    finite_percussion = ((0xec80b0, "stick", "sticks", "STRIKING_TOOL"),
                         (0xec80d0, "hammer", "hammers", "STRIKING_TOOL"),
                         (0xec8105, "mallet", "mallets", "STRIKING_TOOL"),
                         (0xec829a, "drum", "drums", "BODY"),
                         (0xec83a8, "bar", "bars", "BODY"),
                         (0xec83e5, "chime", "chimes", "BODY"),
                         (0xec8422, "block", "blocks", "BODY"),
                         (0xec845f, "bowl", "bowls", "BODY"),
                         (0xec849c, "triangle", "triangles", "BODY"),
                         (0xec84d3, "bell", "bells", "BODY"),
                         (0xec850a, "ring", "rings", "BODY"))
    piece_fields.extend(("steam", hex(at), role+" finite noun selector", singular, plural,
                         "STANDARD or ALWAYS_PLURAL selected by native count", singular+":"+plural)
                        for at, singular, plural, role in finite_percussion)
    for edition, key in (("steam", "reference"), ("classic", "classic")):
        image = CaptionImage(Path(config[key]), OBJDUMP)
        pe = NativeImage(image.path)
        roots = {}
        tables = dict(item_owners(image))
        for label, table in tables.items():
            for slot, meaning in ((0, "type"), (8, "subtype"), (0x5e8, "title"), (0x5f0, "title-with-article")):
                target = image.uint64(table + slot)
                roots.setdefault(target, []).append(label + "-" + meaning)
                owners.append((edition, image.identity, label, hex(table-image.base), hex(slot), hex(target-image.base)))
        generic = image.uint64(tables["item_instrumentst"] + 0x5e8)
        generic_instructions = list(image.instructions(generic))
        shared = next(target for _, target in direct_calls(generic_instructions)
                      if pe.function_ends.get(target-image.base, target-image.base) - (target-image.base) > 0x5000)
        roots.setdefault(shared, []).append("shared-item-noun")
        inventory_sources = json.loads((ROOT / "data/extracted/adventure-inventory/native-image-sources.json").read_text(encoding="utf-8"))
        designation = image.base + int(next(row["function_rva"] for row in inventory_sources["functions"]
                                          if row["edition"] == edition and row["owner"] == "complete-item-designation"), 16)
        roots.setdefault(designation, []).append("complete-item-designation")
        # Both images discover this writer from an actual mallet literal LEA.
        writer = next(owner for _, owner, _, _, value in pe.references() if value == "mallet")
        writer_rows.append((edition, image.identity, hex(writer), hex(pe.function_ends[writer]),
                            "data/extracted/item-description-sources.tsv" if edition == "steam" else "classic-instrument-raw-writer.asm"))
        if edition == "steam":
            # A compact fresh ASM preserves actual producer fields near the
            # screenshot noun; the full writer graph is already in the source
            # catalog rather than copied into another directory wholesale.
            excerpt = []
            for at, ins in image.instructions(image.base+0xec7db0, image.base+0xec9d80):
                note = ""
                if ref := re.search(r"# (?:0x)?([0-9a-f]+)", ins):
                    if value := image.string(int(ref[1], 16)):
                        note = " ; literal="+json.dumps(value)
                excerpt.append(f"{at-image.base:#010x}: {ins}{note}")
            (DEST / "steam-percussion-tool-writer.asm").write_text("\n".join(excerpt)+"\n", encoding="utf-8")
        roots.setdefault(image.base + writer, []).append("instrument-raw-writer")
        action_owners = ROOT / "data/extracted/adventure-action-menu/native-owners.tsv"
        with action_owners.open(encoding="utf-8-sig") as source:
            for row in csv.DictReader(source, delimiter="\t"):
                if row["edition"] == edition and row["type"] == "adventure_environment_take_from_pack_animalst":
                    roots.setdefault(image.base+int(row["caption_rva"], 16), []).append("take-from-pack-animal-caption")
        for start, labels in sorted(roots.items()):
            rva = start-image.base
            end = image.base+pe.function_ends[rva] if rva in pe.function_ends else start+128
            instructions = list(image.instructions(start, end))
            if rva not in pe.function_ends:
                cut = next((i+1 for i, (_, ins) in enumerate(instructions) if ins.startswith("ret")), len(instructions))
                instructions = instructions[:cut]
                end = instructions[-1][0]+1
            switches = {}
            for index, (at, ins) in enumerate(instructions):
                if not re.match(r"jmp\s+[a-z][a-z0-9]*$", ins):
                    continue
                prior = instructions[max(0, index-24):index]
                load = next((i for i in range(len(prior)-1, -1, -1) if TABLE.search(prior[i][1])), None)
                if load is None:
                    continue
                table = int(TABLE.search(prior[load][1])[1], 16)
                bound_at = next((i for i in range(load-1, -1, -1) if prior[i][1].startswith("cmp ")), None)
                if bound_at is None:
                    continue
                bound = IMMEDIATE.search(prior[bound_at][1])
                if bound is None:
                    continue
                count = int(bound[1], 16)+1
                if count > 4096:
                    continue
                remap = next((BYTE_TABLE.search(i) for _, i in prior[bound_at+1:load] if BYTE_TABLE.search(i)), None)
                indices = list(range(count))
                if remap:
                    offset = pe.offset(int(remap[1], 16))
                    indices = list(pe.raw[offset:offset+count])
                targets = [struct.unpack_from("<I", pe.raw, pe.offset(table+slot*4))[0] for slot in indices]
                if not all(rva <= target < end-image.base for target in targets):
                    continue
                switches[at] = (table, targets)
            table_start = min((table for table, _ in switches.values()), default=end-image.base)
            # The writer's finite selector tables sit after its RET, likewise
            # the shared-item type selectors. Preserve them as data, not code.
            code_end = min(end, image.base+table_start) if table_start > rva else end
            label = ";".join(labels)
            filename = edition + "-" + ("instrument-raw-writer" if "instrument-raw-writer" in labels else labels[0]) + ".asm"
            source_name = "../item-description-sources.tsv" if edition == "steam" and "instrument-raw-writer" in labels else filename
            functions.append((edition, image.identity, label, hex(rva), hex(code_end-image.base), hex(end-image.base), source_name))
            lines = [f"# {edition} {image.identity}; {label}; RVA {rva:#x}..{code_end-image.base:#x}"]
            writer_literal_rvas = {}
            for index, (at, ins) in enumerate(instructions):
                if at >= code_end:
                    break
                note = ""
                if match := re.search(r"# (?:0x)?([0-9a-f]+)", ins):
                    target = int(match[1], 16)
                    value = image.string(target)
                    if value:
                        note = " ; literal=" + json.dumps(value)
                        literals.append((edition, label, hex(rva), hex(at-image.base), hex(target-image.base), "rip-relative", value))
                        if "instrument-raw-writer" in labels:
                            writer_literal_rvas.setdefault(value, hex(at-image.base))
                            pair = re.fullmatch(r":([a-z -]+):([a-z -]+)(?::(STANDARD|ALWAYS_PLURAL)\])?", value)
                            if edition == "classic" and pair:
                                piece_fields.append((edition, hex(at-image.base), "INSTRUMENT_PIECE name fields", pair[1], pair[2], pair[3] or "separate count-mode token", value))
                            if value.startswith("[NAME:"):
                                body = []
                                for next_at, next_ins in instructions[index+1:index+100]:
                                    field_ref = re.search(r"# (?:0x)?([0-9a-f]+)", next_ins)
                                    field_value = image.string(int(field_ref[1],16)) if field_ref else None
                                    if field_value == "]":
                                        body.append(f"{next_at-image.base:#x} literal ]")
                                        break
                                    if field_value is not None:
                                        body.append(f"{next_at-image.base:#x} literal {field_value!r}")
                                    elif re.match(r"lea\s+rdx,\[rbp", next_ins) or next_ins.startswith(("cmp ","cmov", "j")):
                                        body.append(f"{next_at-image.base:#x} {next_ins}")
                                name_productions.append((edition, hex(rva), hex(at-image.base), value, "; ".join(body)))
                if immediate := re.search(r"(?:mov|movabs)\s+(?:WORD|DWORD|QWORD) PTR \[[^]]+\],0x([0-9a-f]+)$", ins):
                    number = int(immediate[1], 16)
                    width = max(1, (number.bit_length()+7)//8)
                    value = number.to_bytes(width, "little")
                    if width >= 2 and all(32 <= b < 127 for b in value):
                        value = value.decode("ascii")
                        note += " ; inline=" + json.dumps(value)
                        literals.append((edition, label, hex(rva), hex(at-image.base), "", "inline-immediate-fragment", value))
                mnemonic = ins.split()[0]
                if mnemonic in ("call", "jmp"):
                    target = re.match(r"(?:call|jmp)\s+0x([0-9a-f]+)$", ins)
                    calls.append((edition, label, hex(rva), hex(at-image.base), mnemonic,
                                  hex(int(target[1],16)-image.base) if target else ins.split(None,1)[1]))
                if mnemonic.startswith("j") or mnemonic.startswith("cmov") or mnemonic.startswith("set"):
                    target = re.match(r"j[a-z]+\s+0x([0-9a-f]+)$", ins)
                    branches.append((edition, label, hex(rva), hex(at-image.base), mnemonic,
                                     hex(int(target[1],16)-image.base) if target else ins.split(None,1)[1],
                                     hex(instructions[index+1][0]-image.base) if index+1 < len(instructions) else ""))
                lines.append(f"{at-image.base:#010x}: {ins}{note}")
            for at, (table, targets) in switches.items():
                for case, target in enumerate(targets):
                    selectors.append((edition, label, hex(rva), hex(at-image.base), hex(table), case, hex(target)))
            if edition == "classic" and "instrument-raw-writer" in labels:
                piece_fields.extend((edition, writer_literal_rvas[plural], role+" finite noun selector", singular, plural,
                                     "STANDARD or ALWAYS_PLURAL selected by native count", singular+":"+plural)
                                    for _, singular, plural, role in finite_percussion if plural in writer_literal_rvas)
            if source_name == filename:
                (DEST / filename).write_text("\n".join(lines)+"\n", encoding="utf-8")
        print(edition + ": saved native item naming sources; writer=" + hex(writer))
    write_tsv("native-functions.tsv", ("edition", "image_identity", "owner", "function_rva", "code_end_rva", "unwind_end_rva", "source"), functions)
    write_tsv("native-owners.tsv", ("edition", "image_identity", "type", "vtable_rva", "slot", "target_rva"), owners)
    write_tsv("native-literals.tsv", ("edition", "owner", "function_rva", "instruction_rva", "literal_rva", "encoding", "source"), literals)
    write_tsv("native-calls.tsv", ("edition", "owner", "function_rva", "instruction_rva", "instruction", "target"), calls)
    write_tsv("native-branches.tsv", ("edition", "owner", "function_rva", "instruction_rva", "instruction", "target_or_operands", "fallthrough_rva"), branches)
    write_tsv("native-selectors.tsv", ("edition", "owner", "function_rva", "instruction_rva", "table_rva", "case", "target_rva"), selectors)
    write_tsv("native-instrument-writers.tsv", ("edition", "image_identity", "function_rva", "unwind_end_rva", "source"), writer_rows)
    write_tsv("native-name-productions.tsv", ("edition", "function_rva", "name_instruction_rva", "name_prefix_literal", "native_field_sequence"), name_productions)
    write_tsv("native-piece-fields.tsv", ("edition", "instruction_rva", "field_role", "singular", "plural", "count_mode", "literal_source"), piece_fields)
    raw_rows = []
    source_dir = DEST / "raw-sources"
    source_dir.mkdir(exist_ok=True)
    steam_root = Path(config["reference"]).parent
    for raw_root in (steam_root / "data/vanilla", steam_root / "data/installed_mods"):
        if not raw_root.exists():
            continue
        for path in raw_root.rglob("*.txt"):
            if path.name not in ("item_tool.txt", "item_weapon.txt", "item_instrument_example.txt"):
                continue
            data = path.read_text(encoding="utf-8", errors="replace")
            relative = path.relative_to(steam_root).as_posix()
            (source_dir / relative.replace("/", "__")).write_text(data, encoding="utf-8")
            token = ""
            for number, line in enumerate(data.splitlines(), 1):
                for entry in re.findall(r"\[([^]]+)\]", line):
                    fields = entry.split(":")
                    if fields[0] in ("ITEM_TOOL", "ITEM_WEAPON", "ITEM_INSTRUMENT"):
                        token = ":".join(fields[:2])
                    if fields[0] in ("ITEM_TOOL", "ITEM_WEAPON", "ITEM_INSTRUMENT", "NAME", "ADJECTIVE", "DESCRIPTION"):
                        raw_rows.append((relative, number, token, fields[0], ":".join(fields[1:])))
    write_tsv("raw-name-fields.tsv", ("source", "line", "owner", "field", "value"), raw_rows)
    (DEST / "native-image-sources.json").write_text(json.dumps({"images":config,
        "purpose":"Offline decompiled naming source material, no game execution or translation evaluation",
        "reused_sources":["data/extracted/item-description-sources.tsv", "data/extracted/item-info-title-sources.tsv", "data/extracted/item-raw-title-sources.tsv", "data/extracted/adventure-action-menu/native-owners.tsv"]}, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")


if __name__ == "__main__":
    main()
