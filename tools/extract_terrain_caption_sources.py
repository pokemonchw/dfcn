"""Read complete terrain-caption producers from the configured Windows images.

This source reader does not load the game, attach to it, translate text, build
resources, or exercise runtime behaviour. It retains disassembly, direct and
indirect branches, literal operands, direct calls and binary switch entries.
"""
from __future__ import annotations

import bisect
import csv
import json
from pathlib import Path
import re
import struct
import xml.etree.ElementTree as ET

from extract_legends_catalog import NativeImage
from native_caption_image import CaptionImage

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/terrain-captions"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"


def owner(native, address):
    index = bisect.bisect_right(native.starts, address) - 1
    if index < 0 or address >= native.functions[index][1]:
        raise ValueError(f"No native unwind owner for {address:#x}")
    return native.function_owners[native.functions[index][0]]


def direct_calls(native, targets):
    _, rva, _, disk, size = next(s for s in native.sections if s[0] == ".text")
    # Search overlapping byte positions. An E8 byte in the preceding
    # instruction's immediate/displacement must not swallow a real CALL.
    for match in re.finditer(b"(?=(\xe8....))", native.raw[disk:disk+size], re.S):
        address = rva + match.start()
        target = address + 5 + struct.unpack_from("<i", match[1], 1)[0]
        if target in targets:
            try:
                yield address, target, owner(native, address)
            except ValueError:
                pass


def write_tsv(name, headers, rows):
    with (DEST/name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(headers)
        writer.writerows(rows)


def tiletype_sources(native, edition, terrain, rows):
    """Join decoded native routes to the repository's structural enum names.

    The early wall gate is the literal arithmetic at terrain+0xe1..+0x24f,
    including its two binary remaps. XML attributes are interpretation aids,
    never substituted for the actual dispatch/remap bytes.
    """
    definitions = ET.parse(ROOT/"data/upstream/df-structures/df.d_basics.xml")
    enumeration = next(element for element in definitions.iter("enum-type")
                       if element.get("type-name") == "tiletype")
    value = -1
    wall = terrain+0x5ac3

    def destination(table, remap, selector):
        mapped = native.raw[native.offset(remap+selector)]
        target = struct.unpack_from("<I", native.raw, native.offset(table+mapped*4))[0]
        return mapped, target

    for element in enumeration.findall("enum-item"):
        value = int(element.get("value"),0) if element.get("value") else value+1
        attrs = {item.get("name"):item.get("value") for item in element.findall("item-attr")}
        early = value in {0xd7,0x147,0x14b,0x168,0x1b4}
        early |= value <= 0x144 and value in {0x144,0xac,0xad,0xae}
        if 0x145 <= value <= 0x1b3:
            early |= destination(terrain+0x61d0,terrain+0x61d8,value-0x145)[1] == wall
        early |= value in {0x165,0x166,0x167,0x53,0x4f,0x50,0x51,0x52,
                          0x1eb,0x164,0x41,0x142,0x143,0x1b0,0x1ea,0x105}
        if 0x109 <= value <= 0x1fe:
            early |= destination(terrain+0x6248,terrain+0x6250,value-0x109)[1] == wall
        if 1 <= value <= 694:
            mapped, main = destination(terrain+0x6348,terrain+0x658c,value-1)
        else:
            mapped, main = "out-of-range", terrain+0x5ab1
        rows["tiles"].append((edition,value,element.get("name"),element.get("original-name",""),
                               attrs.get("shape","NONE"),attrs.get("material","NONE"),
                               attrs.get("special","NONE"),attrs.get("direction","--------"),
                               mapped,hex(main),int(early),hex(wall if early else main)))


def decode_switches(native, edition, role, instructions, rows):
    """Decode MSVC image-relative tables, including compressed selector maps.

    The recorded selector is the actual bounded index used by that branch;
    preceding arithmetic is retained verbatim as its source expression. Alias
    selectors are emitted independently, including entries reaching default.
    """
    for index,(address,text) in enumerate(instructions):
        if not re.fullmatch(r"jmp\s+(?:rax|rcx|rdx|r8|r9|r10|r11)",text):
            continue
        context = instructions[max(0,index-24):index]
        load = next(((at,line,match) for at,line in reversed(context)
                     if (match := re.search(r"DWORD PTR \[[^]]+\*4\+0x([0-9a-f]+)\]",line))),None)
        if not load:
            continue
        at,line,match = load
        table = int(match[1],16)
        before = [(pc,code) for pc,code in context if pc < at]
        bound = next(((pc,code,m) for pc,code in reversed(before)
                      if (m := re.fullmatch(r"cmp\s+\w+,0x([0-9a-f]+)",code))),None)
        mask = next(((pc,code,m) for pc,code in reversed(before)
                     if (m := re.fullmatch(r"and\s+eax,0x([0-9a-f]+)",code))),None)
        if mask and (bound is None or mask[0] > bound[0]):
            bound = mask
        else:
            mask = None
        if not bound:
            raise ValueError(f"Unresolved switch range in {edition} {role} at {address-native.base:#x}")
        remap = next(((pc,code,m) for pc,code in reversed(before) if pc > bound[0]
                      and (m := re.search(r"BYTE PTR \[[^]]+\*1\+0x([0-9a-f]+)\]",code))),None)
        count = int(bound[2][1],16)+1
        mapping = int(remap[2][1],16) if remap else None
        expression = " ; ".join(code for pc,code in before if pc <= bound[0])
        for selector in range(count):
            mapped = native.raw[native.offset(mapping+selector)] if mapping else selector
            destination = struct.unpack_from("<I",native.raw,native.offset(table+mapped*4))[0]
            rows["switches"].append((edition,role,hex(address-native.base),hex(table),
                                     hex(mapping) if mapping else "",selector,mapped,
                                     hex(destination),int(not mask or selector & ~int(mask[2][1],16) == 0),expression))
        if not mask:
            guard = next((code for pc,code in before if pc > bound[0]
                          and re.fullmatch(r"ja\s+0x[0-9a-f]+",code)),None)
            if guard:
                destination = int(guard.split()[-1],16)-native.base
                rows["switches"].append((edition,role,hex(address-native.base),hex(table),
                                         hex(mapping) if mapping else "","out-of-range","",
                                         hex(destination),1,expression))


def dump(image, edition, role, start, end, rows):
    instructions = list(image.instructions(image.base+start, image.base+end))
    lines = [f"; {edition}; {image.identity}; {role}; RVA {start:#x}..{end:#x}"]
    for address, instruction in instructions:
        rva = address-image.base
        note = ""
        ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
        if ref:
            target = int(ref[1], 16)
            value = image.string(target)
            if value is not None:
                note = " ; literal=" + json.dumps(value, ensure_ascii=False)
                rows["literals"].append((edition,role,hex(start),hex(rva),hex(target-image.base),value))
        immediate = re.fullmatch(r"movabs\s+\w+,0x([0-9a-f]+)",instruction)
        if immediate:
            content = int(immediate[1],16).to_bytes(8,"little").split(b"\0",1)[0]
            if len(content) >= 3 and all(32 <= byte <= 126 for byte in content):
                value = content.decode("ascii")
                rows["inline"].append((edition,role,hex(start),hex(rva),content.hex(),value,instruction))
                note += " ; inline-bytes="+json.dumps(value)
        call = re.match(r"call\s+0x([0-9a-f]+)$", instruction)
        if call:
            rows["calls"].append((edition,role,hex(start),hex(rva),hex(int(call[1],16)-image.base)))
        branch = re.match(r"(j\w+)\s+(.+)$", instruction)
        if branch:
            operand = branch[2]
            if operand.startswith("0x"):
                operand = hex(int(operand,16)-image.base)
            rows["branches"].append((edition,role,hex(start),hex(rva),branch[1],operand))
        lines.append(f"{rva:#010x}: {instruction}{note}")
    (DEST/f"{edition}-{role}.asm").write_text("\n".join(lines)+"\n", encoding="utf-8")
    return instructions


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT/"data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    rows = {name: [] for name in ("owners","literals","inline","calls","branches","consumers","switches","draws","tiles")}
    for edition in ("reference","classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        native = NativeImage(image.path)
        refs = list(native.references())
        terrain = next(start for _,start,_,_,text in refs if text == " Cavern Floor")
        lookinfo = next(start for _,start,_,_,text in refs if text == "A Campfire" and start < 0x500000)
        tiletype_sources(native,edition,terrain,rows)
        # Both editions share these exact instruction positions relative to
        # their own discovered formatter start. The return precedes tables;
        # tables are decoded as data below, never counted as instructions.
        roles = {
            "terrain": (terrain, terrain+0x61cd),
            "lookinfo": (lookinfo, lookinfo+0x1c7e),
            "lookinfo-producer": (lookinfo+0x1d90, lookinfo+0x1d90+0x1beb),
            "adventure-look-renderer": ((0x7f3cb0 if edition == "reference" else 0x7f1530),
                                        (0x7f6aee if edition == "reference" else 0x7f436e)),
        }
        known = ({"material-noun":0x14d1920,"grass-event-lookup":0x14d1330,
                  "construction-material":0xa46f20,"plant-parts":0x13ffd20,
                  "material-decode":0x14d0c70,"material-lookup":0x14add70}
                 if edition == "reference" else
                 {"material-noun":0x14cc890,"grass-event-lookup":0x14cc2a0,
                  "construction-material":0xa44750,"plant-parts":0x13fac90,
                  "material-decode":0x14cbbe0,"material-lookup":0x14a8ce0})
        for role,start in known.items():
            roles[role] = (start, native.function_ends[start])
        roles["plant-parts"] = (known["plant-parts"],known["plant-parts"]+0x519)
        roles["material-decode"] = (known["material-decode"],known["material-decode"]+0x4bf)
        # The HUD calls the length-guard wrapper, whose tail jump reaches the
        # same shortening implementation used by cached lookinfo captions.
        # These leaf wrappers have no pdata owner; keep their exact code end.
        shorten = 0x52d910 if edition == "reference" else 0x52b330
        wrapper = 0x52dee0 if edition == "reference" else 0x52b900
        roles["spoor-shorten"] = (shorten, native.function_ends[shorten])
        roles["spoor-shorten-wrapper"] = (wrapper, wrapper+0xe)
        for role,(start,end) in roles.items():
            end = end or native.function_ends[start]
            unwind_end = native.function_ends.get(start)
            rows["owners"].append((edition,image.identity,role,hex(start),hex(end),hex(unwind_end) if unwind_end else "leaf; no pdata",str(image.path)))
            instructions = dump(image,edition,role,start,end,rows)
            decode_switches(native,edition,role,instructions,rows)
            if role == "adventure-look-renderer":
                shift = 0 if edition == "reference" else 0x2780
                draws = {
                    0x7f3f46:("paging-hint"," to view other pages"),
                    0x7f4181:("separator","terrain"),0x7f419e:("caption","terrain/item/unit/building/vermin/flow/indented-item shared draw"),
                    0x7f4217:("separator","item"),0x7f42af:("separator","indented-item"),
                    0x7f4329:("separator","unit"),0x7f43d5:("separator","building"),
                    0x7f445f:("separator","vermin"),0x7f4613:("separator","flow"),
                    0x7f48cd:("separator","fire"),0x7f48fb:("caption","A Fire"),
                    0x7f495c:("separator","campfire"),0x7f498a:("caption","A Campfire"),
                    0x7f49eb:("separator","track/spoor"),0x7f4ed2:("caption","track/spoor complete assembly"),
                    0x7f4f2f:("separator","water"),
                    0x7f4f77:("prefix","Stagnant salt water ["),0x7f4fa5:("prefix","Stagnant water ["),
                    0x7f4fcc:("prefix","Salt water ["),0x7f4fef:("prefix","Water ["),
                    0x7f502e:("depth","water: lookinfo +0x8"),0x7f5052:("suffix","water: /7]"),
                    0x7f50bd:("separator","magma/lava"),
                    0x7f5114:("prefix","Lava ["),0x7f5137:("prefix","Magma ["),
                    0x7f5176:("depth","magma/lava: lookinfo +0x8"),0x7f519a:("suffix","magma/lava: /7]"),
                    0x7f522c:("separator","surface-deposit"),0x7f539e:("caption","surface-deposit complete assembly"),
                }
                for pc,code in instructions:
                    at = pc-image.base
                    if at+shift in draws:
                        part,source = draws[at+shift]
                        rows["draws"].append((edition,hex(at),hex(at+5),part,source,code))
        targets = {terrain:"terrain",lookinfo:"lookinfo",lookinfo+0x1d90:"lookinfo-producer"}
        chunks = []
        for site,target,owning in direct_calls(native, targets):
            # Byte searches are navigation hints until decoded as a CALL from
            # the real owning function's instruction stream.
            candidates = list(image.instructions(image.base+owning,image.base+min(native.function_ends[owning],site+5)))
            actual = next((text for at,text in candidates if at-image.base == site),None)
            if actual != f"call   {image.base+target:#x}":
                continue
            before = candidates[max(0,len(candidates)-22):]
            # Decode beyond the desired context edge, then select whole
            # instructions: --stop-address in an instruction would otherwise
            # print its truncated bytes as bogus source instructions.
            after = [(at,code) for at,code in image.instructions(
                     image.base+site+5,image.base+min(native.function_ends[owning],site+0x190))
                     if at-image.base < site+0x180]
            rows["consumers"].append((edition,targets[target],hex(site),hex(owning),hex(native.function_ends[owning]),hex(target)))
            chunks += [f"; {targets[target]} CALL {site:#x}; owner {owning:#x}"]
            chunks += [f"{at-image.base:#010x}: {text}" for at,text in before+after]
        (DEST/f"{edition}-consumer-contexts.asm").write_text("\n".join(chunks)+"\n",encoding="utf-8")
    write_tsv("native-owners.tsv",("edition","image_identity","role","start_rva","code_end_rva","unwind_end_rva","image_path"),rows["owners"])
    write_tsv("native-literals.tsv",("edition","role","owner_rva","instruction_rva","literal_rva","source"),rows["literals"])
    write_tsv("native-inline-literals.tsv",("edition","role","owner_rva","instruction_rva","little_endian_bytes","source","instruction"),rows["inline"])
    write_tsv("native-calls.tsv",("edition","role","owner_rva","call_rva","target_rva"),rows["calls"])
    write_tsv("native-branches.tsv",("edition","role","owner_rva","branch_rva","opcode","destination"),rows["branches"])
    write_tsv("native-consumers.tsv",("edition","target_role","call_rva","owner_rva","owner_end_rva","target_rva"),rows["consumers"])
    write_tsv("native-switches.tsv",("edition","role","dispatch_rva","table_rva","remap_rva","selector","mapped_index","destination_rva","reachable_mask","selector_context"),rows["switches"])
    write_tsv("native-look-draws.tsv",("edition","call_rva","return_rva","part","source","instruction"),rows["draws"])
    write_tsv("native-tile-types.tsv",("edition","tiletype","structural_name","native_enum_name","shape","material","special","direction","main_mapped_index","main_destination_rva","early_wall_gate","effective_entry_rva"),rows["tiles"])
    print(f"Read native caption producers from both configured images into {DEST}")


if __name__ == "__main__":
    main()
