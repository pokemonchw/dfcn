"""Extract native Justice / Intelligence / Organizations source material.

The configured game images are read statically.  No game process, translation,
build, test, or display operation is performed.  The source inventory retains
actual operands and control edges for both editions, including the catalog
producer rather than inferring chart text from a screenshot.
"""
from __future__ import annotations

import csv
import json
from pathlib import Path
import re
import struct

from native_caption_image import CaptionImage
from extract_adventure_action_menu_sources import dump
from extract_fortress_alert_ui_sources import references

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/justice-organizations"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
ROOTS = {
    "reference": {
        0x4751a0: "intelligence-input", 0x4769d0: "intelligence-renderer",
        0x479330: "intelligence-search-filter", 0x46faa0: "intelligence-refresh",
        0x2b6760: "intelligence-catalog-producer", 0xd1650: "organization-title-layout",
        0xd2cb50: "surname-word", 0xb9b80: "append-character",
        0xc3a4f0: "identity-name", 0x52d3c0: "uppercase-name-fragment",
        0xa946e0: "language-name-renderer", 0x2b66a0: "intelligence-actor-constructor",
    },
    "classic": {
        0x472d60: "intelligence-input", 0x474590: "intelligence-renderer",
        0x476ef0: "intelligence-search-filter", 0x46d660: "intelligence-refresh",
        0x2b4320: "intelligence-catalog-producer", 0xd15e0: "organization-title-layout",
        0xd29b90: "surname-word", 0xb9b10: "append-character",
        0xc37530: "identity-name", 0x52ade0: "uppercase-name-fragment",
        0xa91760: "language-name-renderer", 0x2b4260: "intelligence-actor-constructor",
    },
}
ENDS = {
    "reference": {0x2b6760: 0x2b8f45, 0xd1650: 0xd1832, 0xd2cb50: 0xd2cc1c,
                  0xb9b80: 0xb9cc4, 0x2b66a0: 0x2b6760,
                  0xc3a4f0: 0xc3a588, 0x52d3c0: 0x52d5fe},
    "classic": {0x2b4320: 0x2b6b05, 0xd15e0: 0xd17c2, 0xd29b90: 0xd29c5c,
                0xb9b10: 0xb9c54, 0x2b4260: 0x2b4320,
                0xc37530: 0xc375c8, 0x52ade0: 0x52b01e},
}


def write_tsv(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def main():
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    DEST.mkdir(parents=True, exist_ok=True)
    owners, literals, calls, edges, tables = [], [], [], [], []
    images = {}
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        images[edition] = {"path": str(image.path), "identity": image.identity, "image_base": hex(image.base)}
        targets = {}
        for text in ("Selected actor: ", "Organizations", " members"):
            offset = -1
            while (offset := image.raw.find(text.encode("ascii") + b"\0", offset + 1)) >= 0:
                targets[image.address(offset)] = text
        for start, address, target, text in references(image, targets):
            owners.append((edition, image.identity, "literal-anchor", hex(start-image.base),
                           hex(image.functions[start]-image.base), hex(address-image.base),
                           hex(target-image.base), text))
        roots = dict(ROOTS[edition])
        # Read the uppercase helper from the real node producer call operand.
        for address,instruction in image.instructions(image.base+(0x2b6760 if edition=="reference" else 0x2b4320)):
            if address-image.base == (0x2b793e if edition=="reference" else 0x2b54fe):
                call=re.fullmatch(r"call\s+0x([0-9a-f]+)",instruction)
                if call:
                    roots={a:b for a,b in roots.items() if b!="uppercase-name-fragment"}
                    roots[int(call[1],16)-image.base]="uppercase-name-fragment"
        for rva, label in sorted(roots.items()):
            start = image.base+rva
            end=image.base+ENDS[edition][rva] if rva in ENDS[edition] else image.functions.get(start,start+256)
            owners.append((edition, image.identity, label, hex(rva),
                           hex(end-image.base), "", "", ""))
            # dump uses the exception table for its default endpoint.  Supply
            # exact native code endpoints to leave embedded jump-table bytes
            # as data rather than inventing instructions/edges for those bytes.
            image.functions[start]=end
            (DEST / f"{edition}-{label}.asm").write_text(
                dump(image,start,label,edition,literals,calls,edges),encoding="utf-8")
        table = 0x2b8fcc if edition == "reference" else 0x2b6b8c
        # The producer's range check and indirect jump select the native role
        # branch using a table of signed image-relative offsets.
        for index in range(11):
            value = struct.unpack_from("<I",image.raw,image.offset(image.base+table)+index*4)[0]
            tables.append((edition,image.identity,"organization-node-role",hex(table+index*4),
                           index+5,hex(value)))
        tail_start,tail_end=(0x2b8f48,0x2b9040) if edition=="reference" else (0x2b6b08,0x2b6c00)
        for entry in range(tail_start,tail_end,4):
            value=struct.unpack_from("<I",image.raw,image.offset(image.base+entry))[0]
            tables.append((edition,image.identity,"catalog-embedded-switch-table",hex(entry),"",hex(value)))
        word_table=0xd2cc1c if edition=="reference" else 0xd29c5c
        for index in range(9):
            entry=word_table+index*4
            value=struct.unpack_from("<I",image.raw,image.offset(image.base+entry))[0]
            tables.append((edition,image.identity,"surname-word-part",hex(entry),index,hex(value)))
        uppercase_table=0x52d600 if edition=="reference" else 0x52b020
        for index in range(36):
            entry=uppercase_table+index*4
            value=struct.unpack_from("<I",image.raw,image.offset(image.base+entry))[0]
            tables.append((edition,image.identity,"uppercase-extended-byte",hex(entry),index,hex(value)))
    (DEST / "native-images.json").write_text(json.dumps(images,indent=2)+"\n",encoding="utf-8")
    write_tsv("native-owners.tsv",("edition","image_identity","role","owner_rva","end_rva","anchor_rva","literal_rva","text"),owners)
    write_tsv("native-literals.tsv",("edition","image_identity","owner","owner_rva","instruction_rva","source_kind","literal_rva","operand_role","text"),literals)
    write_tsv("native-calls.tsv",("edition","image_identity","owner","owner_rva","instruction_rva","target_rva","opcode"),calls)
    write_tsv("native-branch-edges.tsv",("edition","image_identity","owner","owner_rva","instruction_rva","condition","target_rva","fallthrough_rva"),edges)
    write_tsv("native-role-jump-table.tsv",("edition","image_identity","table_role","entry_rva","enum_value","target_rva"),tables)


if __name__ == "__main__":
    main()
