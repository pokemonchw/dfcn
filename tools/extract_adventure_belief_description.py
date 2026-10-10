"""Read both configured PE belief-tooltip producers and semantic operands.

This static extraction writes disassembly, branch operands and decompiled
source grammar for implementation work. It never runs the game, core,
translations, a generator, a compiler, or a verification procedure.
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
DEST = ROOT / "data/extracted/adventure-belief-description"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"


def owner(image, address):
    starts = sorted(image.functions)
    start = starts[bisect.bisect_right(starts, address) - 1]
    if address >= image.functions[start]:
        raise ValueError(f"No logical unwind owner for {address:#x}")
    return start


def literal_xrefs(image, text):
    targets = set()
    at = image.raw.find(text)
    while at >= 0:
        targets.add(image.address(at))
        at = image.raw.find(text, at + 1)
    for region, offset, size in image.regions:
        for at in range(offset, offset + size - 7):
            if image.raw[at:at + 3] not in (b"\x48\x8d\x15", b"\x4c\x8d\x05", b"\x48\x8d\x0d"):
                continue
            address = region + at - offset
            if address + 7 + struct.unpack_from("<i", image.raw, at + 3)[0] in targets:
                yield address


def direct_calls(image, target):
    for region, offset, size in image.regions:
        at = image.raw.find(b"\xe8", offset, offset + size)
        while offset <= at < offset + size - 5:
            address = region + at - offset
            if address + 5 + struct.unpack_from("<i", image.raw, at + 1)[0] == target:
                try:
                    yield address, owner(image, address)
                except ValueError:
                    pass
            at = image.raw.find(b"\xe8", at + 1, offset + size)


def write_tsv(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def dump(image, start, role, edition, owners, literals, calls, branches, end=None):
    end = end or image.functions[start]
    owners.append((edition, image.identity, role, hex(start-image.base), hex(end-image.base), str(image.path)))
    instructions = list(image.instructions(start, end))
    lines = [f"# {edition} {image.identity}; {role}; RVA {start-image.base:#x}..{end-image.base:#x}"]
    for index, (address, instruction) in enumerate(instructions):
        note = ""
        ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
        if ref:
            target = int(ref[1], 16)
            value = image.string(target)
            if value is not None:
                note = " ; literal=" + json.dumps(value)
                literals.append((edition, role, hex(start-image.base), hex(address-image.base), hex(target-image.base), value))
        call = re.match(r"call\s+0x([0-9a-f]+)$", instruction)
        if call:
            calls.append((edition, role, hex(start-image.base), hex(address-image.base), "direct", hex(int(call[1],16)-image.base)))
        elif instruction.startswith("call"):
            calls.append((edition, role, hex(start-image.base), hex(address-image.base), "indirect", instruction))
        branch = re.match(r"(j\w+)\s+0x([0-9a-f]+)$", instruction)
        if branch:
            context = " | ".join(f"{a-image.base:#x}: {t}" for a,t in instructions[max(0,index-5):index])
            branches.append((edition, role, hex(start-image.base), hex(address-image.base), branch[1], hex(int(branch[2],16)-image.base), context))
        elif instruction.startswith("jmp"):
            branches.append((edition, role, hex(start-image.base), hex(address-image.base), "indirect-jump", instruction, ""))
        lines.append(f"{address-image.base:#010x}: {instruction}{note}")
    (DEST / f"{edition}-{role}.asm").write_text("\n".join(lines) + "\n", encoding="utf-8")
    return instructions


def finite_fields(image, edition, helpers, literals, rows):
    by_address = {int(row[3],16):row for row in literals if row[0] == edition}
    sphere = helpers["sphere-field"]
    wrapper = helpers["domain-field"]
    for enum in range(130):
        case = struct.unpack_from("<I",image.raw,image.offset(image.base+sphere+0xae4+enum*4))[0]
        literal = by_address[case]
        prefix = ""
        if 19 <= enum <= 126:
            choice = image.raw[image.offset(image.base+wrapper+0x11c+enum-19)]
            destination = struct.unpack_from("<I",image.raw,image.offset(image.base+wrapper+0x114+choice*4))[0]
            if destination == wrapper+0x62:
                prefix = "the "
        rows.append((edition,"sphere",str(enum),hex(case),literal[4],literal[5],prefix+literal[5]))
    fallback = by_address[sphere+0xacf]
    rows.append((edition,"sphere","default",fallback[3],fallback[4],fallback[5],fallback[5]))
    structure = helpers["structure-field"]
    instruction = next(t for _,t in image.instructions(image.base+structure,image.functions[image.base+structure]) if "rcx*4+0x" in t)
    table = int(re.search(r"rcx\*4\+0x([0-9a-f]+)",instruction)[1],16)
    for enum in range(14):
        case = struct.unpack_from("<I",image.raw,image.offset(image.base+table+enum*4))[0]
        if enum == 6:
            for subtype,text in ((0,"a dungeon"),(1,"the sewers"),(2,"the catacombs")):
                literal = next(row for row in literals if row[0] == edition and row[1] == "structure-field" and row[5] == text)
                rows.append((edition,"structure",f"6/{subtype}",literal[3],literal[4],text,text))
            rows.append((edition,"structure","6/default",hex(case),"","",""))
        else:
            literal = next(by_address[rva] for rva in sorted(by_address) if case <= rva < case+24)
            rows.append((edition,"structure",str(enum),literal[3],literal[4],literal[5],literal[5]))
    for case in ("missing-site", "missing-building", "unknown-type"):
        candidates = [row for row in literals if row[0] == edition and row[1] == "structure-field" and row[5] == "an unknown building"]
        literal = candidates[0] if case == "unknown-type" else candidates[-1]
        rows.append((edition,"structure",case,literal[3],literal[4],literal[5],literal[5]))
    rows.append((edition,"structure","named","","","{generated language name}","{generated language name}"))
    for field,text in (("entity","an unknown civilization"),("figure","an unknown creature")):
        literal = next(row for row in literals if row[0] == edition and row[1] == field+"-field" and row[5] == text)
        rows.append((edition,field,"missing",literal[3],literal[4],text,text))
    for enum,text in ((0,"goddess"),(1,"god"),("default","deity")):
        literal = next(row for row in literals if row[0] == edition and row[1] == "owner" and row[5] == text)
        rows.append((edition,"gender",str(enum),literal[3],literal[4],text,text))


def source_branches(edition, start, rows):
    delta = start-0x63dd90
    def add(branch, guard, at, text):
        rows.append((edition,branch,guard,hex(at+delta),text))
    add("religion/no-deity","type=1; entity missing or entity.deities empty or first figure missing",0x63e46d,"{religion} is a religion")
    for kind,noun in (("female","goddess"),("male","god"),("other","deity")):
        for scope in ("deity","religion"):
            head = "{deity} is the " if scope == "deity" else "{religion} is a religion whose adherents worship {deity}, the "
            for caste in (False,True):
                for sphere in (False,True):
                    value = head + ("{caste adjective} " if caste else "") + noun + (" of {domain list}" if sphere else "") + "."
                    add(f"{scope}/{kind}/caste-{int(caste)}/domains-{int(sphere)}",f"type={0 if scope == 'deity' else 1}; figure.flags[0]&4; gender={kind}; caste adjective={int(caste)}; spheres nonempty={int(sphere)}",0x63e73e,value)
    for scope in ("deity","religion"):
        head = "{deity} is the force" if scope == "deity" else "{religion} is a religion whose adherents worship {deity}, the force"
        add(f"{scope}/force","figure.flags[0]&8 and !(figure.flags[0]&4); force place missing",0x63e653,head+".")
        add(f"{scope}/force-place","figure.flags[0]&8 and !(figure.flags[0]&4); force place found",0x63e653,head+" which permeates {place}.")
        add(f"{scope}/ordinary-figure","figure has neither deity nor force flags; race is valid; native clears accumulated output before reading race/caste singular",0x63e919,"{creature singular}.")
        add(f"{scope}/figure-name-only","figure has neither deity nor force flags; race == -1",0x63e919,("{deity}" if scope == "deity" else "{religion} is a religion whose adherents worship {deity}")+".")
    add("religion/active-temple","matching site; matching religion temple; not obsolete; active temple selected",0x63ed15,"They worship at {structure}.")
    add("religion/ruined-temple","no active temple; matching religion temple has inactive or ruined flag",0x63ef7b,"Their temple {structure} is ruined.")
    add("religion/no-temple","religion missing, site missing, site vector empty, or no matching eligible temple",0x63eab5,"")
    add("deity/no-temple","type=0 leaves religion pointer null; temple branch requires religion",0x63ead6,"")
    add("domain-list/one","sphere count=1; native iteration starts at last element",0x63e890,"{domain}")
    add("domain-list/two","sphere count=2; reverse native vector order",0x63e901,"{domain[1]} and {domain[0]}")
    add("domain-list/many","sphere count>=3; reverse native vector order; comma while index>=2; and when index=1",0x63e8d1,"{domain[n-1]}, ... {domain[1]} and {domain[0]}")


def main():
    DEST.mkdir(parents=True,exist_ok=True)
    config = json.loads((ROOT/"data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    owners,literals,calls,branches,fields,templates,callers = [],[],[],[],[],[],[]
    helper_sets = {
        "reference": {"domain-field":0x756500,"sphere-field":0x756690,"force-place-field":0x5c3760,"caste-field":0xaa3770,"structure-field":0xb94090,"entity-field":0xb92900,"figure-field":0xb92f10,"language-name":0xa946e0,"cache-wrap":0x8e7310,"cache-lines-wrap":0x8e7440,"site-controller-field":0x9b4e70,"site-type-field":0x10cbe50},
        "classic": {"domain-field":0x753f20,"sphere-field":0x7540b0,"force-place-field":0x5c1180,"caste-field":0xaa07f0,"structure-field":0xb910d0,"entity-field":0xb8f940,"figure-field":0xb8ff50,"language-name":0xa91760,"cache-wrap":0x8e4b80,"cache-lines-wrap":0x8e4cb0,"site-controller-field":0x9b26a0,"site-type-field":0x10c6dc0},
    }
    for edition in ("reference","classic"):
        image = CaptionImage(Path(config[edition]),OBJDUMP)
        native = NativeImage(image.path)
        image.functions = {image.base+begin:image.base+native.function_ends[logical] for begin,logical in native.function_owners.items()}
        reference = next(literal_xrefs(image,b" is a religion\0"))
        start = owner(image,reference)
        dump(image,start,"owner",edition,owners,literals,calls,branches)
        helpers = helper_sets[edition]
        for role,rva in helpers.items():
            end = image.base+rva+0xae4 if role == "sphere-field" else None
            if role == "site-controller-field":
                end = image.base+rva+0x5d
            if role == "site-type-field":
                end = image.base+rva+0x310
            dump(image,image.base+rva,role,edition,owners,literals,calls,branches,end)
        for at,caller in direct_calls(image,start):
            callers.append((edition,hex(at-image.base),hex(caller-image.base),hex(image.functions[caller]-image.base),hex(start-image.base)))
        # Preserve the full faith-page call, cache drawing, and nine-part border
        # path including every conditional jump, not merely the text CALL.
        draw_begin,draw_end = ((0x62cb94,0x62d820) if edition == "reference" else (0x62a5b4,0x62b240))
        dump(image,image.base+draw_begin,"faith-render-path",edition,owners,literals,calls,branches,image.base+draw_end)
        first_begin,first_end = ((0x62c5d0,0x62c720) if edition == "reference" else (0x629ff0,0x62a140))
        dump(image,image.base+first_begin,"hometown-cache-caller",edition,owners,literals,calls,branches,image.base+first_end)
        finite_fields(image,edition,helpers,literals,fields)
        source_branches(edition,start-image.base,templates)
        print(f"{edition} {image.identity}: belief producer {start-image.base:#x}..{image.functions[start]-image.base:#x}")
    write_tsv("native-owners.tsv",("edition","image_identity","role","start_rva","end_rva","path"),owners)
    write_tsv("native-literals.tsv",("edition","role","owner_rva","instruction_rva","literal_rva","text"),literals)
    write_tsv("native-calls.tsv",("edition","role","owner_rva","instruction_rva","call_kind","target_rva_or_operand"),calls)
    write_tsv("native-branches.tsv",("edition","role","owner_rva","instruction_rva","branch","target_rva_or_operand","preceding_instructions"),branches)
    write_tsv("finite-field-values.tsv",("edition","field","case","instruction_rva","literal_rva","base_text","displayed_text"),fields)
    write_tsv("belief-description-branches.tsv",("edition","branch","guard","producer_rva","text"),templates)
    write_tsv("producer-callers.tsv",("edition","call_rva","caller_rva","caller_end_rva","producer_rva"),callers)


if __name__ == "__main__":
    main()
