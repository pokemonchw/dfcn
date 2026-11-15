"""Extract the current image-information editor and artwork source branches.

Reads the configured PE files, literal operands, RTTI virtuals and jump tables
for offline Ghidra decompilation. Never executes the game or a translator.
"""
from pathlib import Path
import csv
import hashlib
import json
import re
import struct

from native_caption_image import CaptionImage
from extract_legends_catalog import NativeImage
from extract_adventure_journal_agreements_pe import literal_operands, native_switches

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/image-information-current"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())
    rows = {name: [] for name in ("functions", "ghidra-functions", "literals", "calls", "branches", "conditions", "switches", "virtuals", "noreturn")}
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        native = NativeImage(image.path)
        references = list(native.references())
        anchors = {
            "Image information for engraving": "image-header",
            "Action or relationship": "image-editor-render",
            "migrating ": "selected-description",
            "This artwork is a": "artwork-description",
        }
        roots = {}
        for _, owner, _, _, text in references:
            if text in anchors and (text != "migrating " or 0x200000 < owner < 0x230000):
                roots[owner] = anchors[text]

        def occurrences(value):
            offset = 0
            while (offset := image.raw.find(value, offset)) >= 0:
                yield offset
                offset += 1

        # Read every actual element/property implementation, including base
        # empty implementations, from its MSVC RTTI instead of an enum guess.
        for match in re.finditer(rb"\.\?AVart_image_(?:element|property)[a-z_]*@@\0", image.raw):
            label = match.group()[:-1].decode().removeprefix(".?AV").removesuffix("@@")
            descriptor = image.address(match.start()) - image.base - 16
            for hit in occurrences(struct.pack("<I", descriptor)):
                if hit < 12:
                    continue
                col = hit - 12
                signature, offset, construction, _, _, self_id = struct.unpack_from("<6I", image.raw, col)
                if (signature, offset, construction) != (1, 0, 0):
                    continue
                if self_id != image.address(col) - image.base:
                    continue
                for reference in occurrences(struct.pack("<Q", image.base + self_id)):
                    vtable = image.address(reference) + 8
                    slot = 0x38 if "element" in label else 0x28
                    target = image.uint64(vtable + slot) - image.base
                    rows["virtuals"].append((edition, label, hex(vtable-image.base), hex(slot), hex(target)))
                    roots.setdefault(target, label)

        # These dynamic leaves are complete source boundaries already shared
        # by item/RAW/history translation. Retain their native calls as edges.
        # Additional finite suppliers are selected from the actual root calls.
        initial = dict(roots)
        artwork = next(start for start, role in roots.items() if role == "artwork-description")
        extents = dict(native.function_ends)
        for start, role in initial.items():
            end = native.function_ends.get(start)
            if end is None:
                continue
            body = list(image.instructions(image.base+start, image.base+end))
            for _, instruction in body:
                match = re.fullmatch(r"call\s+0x([0-9a-f]+)", instruction)
                if not match:
                    continue
                callee = int(match[1], 16)-image.base
                literals = {text for _, owner, _, _, text in references if owner == callee}
                selected = None
                if {"ninety", " billion"} <= literals:
                    selected = "number-words"
                elif "military organization" in literals and "craft" in literals:
                    selected = "entity-type"
                elif "well-designed" in literals:
                    selected = "design-quality"
                elif "peasant" in literals or "Peasant" in literals:
                    selected = "profession"
                elif "a fortress" in literals or "dark fortress" in literals:
                    selected = "site-type"
                elif role == "image-header" and callee > 0x100000 and len(literals) > 20:
                    selected = "job-header"
                elif role == "image-header" and "Surgery" in literals:
                    selected = "job-title-wrapper"
                elif role == "selected-description" and " has been lost to time" in literals:
                    selected = "selected-biography"
                elif role == "selected-description" and " are made from " in literals:
                    selected = "selected-item-description"
                elif role == "artwork-description" and " bars" in literals:
                    selected = "item-noun"
                elif role == "artwork-description" and {"bone", "cloth", "ivory/tooth"} <= literals:
                    selected = "material-name"
                elif role == "image-editor-render" and 0x200000 < callee < 0x230000 and callee in extents:
                    children = list(image.instructions(image.base+callee,image.base+extents[callee]))
                    if any(text == f"call   {image.base+artwork:#x}" or
                           re.fullmatch(rf"call\s+0x{image.base+artwork:x}",text) for _,text in children):
                        selected = "preview-description"
                if selected:
                    roots.setdefault(callee, selected)
        # Creature domain and guild profession switches are finite suppliers.
        # Follow the actual direct operands; no fixed 53.16 RVA is reused.
        for start, role in list(roots.items()):
            if role not in ("art_image_element_creaturest", "artwork-description", "selected-description"):
                continue
            for _, instruction in image.instructions(image.base+start,image.base+extents[start]):
                match = re.fullmatch(r"call\s+0x([0-9a-f]+)",instruction)
                if not match:
                    continue
                callee = int(match[1],16)-image.base
                literals = {text for _,owner,_,_,text in references if owner == callee}
                if "the " in literals and callee in extents and extents[callee]-callee < 0x400:
                    roots.setdefault(callee,"deity-domain-article")
                    for _, child in image.instructions(image.base+callee,image.base+extents[callee]):
                        found = re.fullmatch(r"call\s+0x([0-9a-f]+)",child)
                        if not found:
                            continue
                        leaf = int(found[1],16)-image.base
                        stop = extents.get(leaf,next((value for value in native.starts if value>leaf),leaf))
                        if stop-leaf > 0x2000 or stop<=leaf:
                            continue
                        leaf_body=list(image.instructions(image.base+leaf,image.base+stop))
                        words={value for _,text in leaf_body for _,kind,value in literal_operands(image,text) if kind=="cstring"}
                        if {"war","fortresses"} <= words:
                            roots.setdefault(leaf,"deity-domain-nouns")
                            extents[leaf]=stop
                if "Axe Lord" in literals and "Elite Bowman" in literals:
                    roots.setdefault(callee,"guild-profession")
        digest = hashlib.sha256(image.raw).hexdigest()
        for start, role in roots.items():
            # The base empty formatter has no unwind record; both of its
            # short/heap string returns fit the original 26-byte leaf.
            end = extents.get(start, start+26)
            body = list(image.instructions(image.base+start, image.base+end))
            switches = native_switches(image, body, edition, role)
            code_end = min([end] + [int(row[3],16) for row in switches if start <= int(row[3],16) < end])
            body = [(pc, text) for pc, text in body if pc < image.base+code_end]
            switches = [row for row in switches if int(row[2],16) < code_end]
            filename = f"pe-{edition}-{role}.asm"
            rows["functions"].append((edition,image.identity,str(image.path),digest,role,hex(start),hex(end)))
            rows["ghidra-functions"].append((edition,image.identity,role,hex(start),hex(code_end),filename))
            lines = [f"; {edition} {image.identity}; {role}; RVA {start:#x}..{end:#x}; code ends {code_end:#x}"]
            for index, (pc, instruction) in enumerate(body):
                values = literal_operands(image,instruction)
                lines.append(f"{pc-image.base:#x}: {instruction}" + "".join(f" ; {kind}={value!r}" for _,kind,value in values))
                rows["literals"].extend((edition,role,hex(pc-image.base),operand,kind,value) for operand,kind,value in values)
                if match := re.fullmatch(r"(call|jmp)\s+0x([0-9a-f]+)", instruction):
                    target = int(match[2],16)-image.base
                    if match[1] == "call" or not start <= target < end:
                        rows["calls"].append((edition,role,hex(pc-image.base),hex(target),match[1]))
                        terminal_end = extents.get(target, target)
                        if 0 < terminal_end-target <= 32:
                            terminal = list(image.instructions(image.base+target,image.base+terminal_end))
                            if terminal[-1][1] == "int3" and any("call" in text and "QWORD PTR [rip" in text for _,text in terminal):
                                rows["noreturn"].append((edition,role,hex(target),hex(terminal_end),"imported throw followed by int3"))
                if match := re.fullmatch(r"(j\w+)\s+0x([0-9a-f]+)", instruction):
                    following = body[index+1][0]-image.base if index+1<len(body) else code_end
                    rows["branches"].append((edition,role,hex(pc-image.base),match[1],hex(int(match[2],16)-image.base),hex(following)))
                if re.match(r"(?:cmp|test|bt)\s",instruction):
                    rows["conditions"].append((edition,role,hex(pc-image.base),instruction))
            rows["switches"].extend(switches)
            (OUT/filename).write_text("\n".join(lines)+"\n",encoding="utf-8")
        print(edition,image.identity,{hex(start):role for start,role in roots.items()})
    columns = {
        "functions": "edition image source_path sha256 role start_rva end_rva",
        "ghidra-functions": "edition image role start_rva end_rva assembly_file",
        "literals": "edition role instruction_rva operand kind text",
        "calls": "edition role instruction_rva callee_rva operation",
        "branches": "edition role instruction_rva branch target_rva fallthrough_rva",
        "conditions": "edition role instruction_rva condition",
        "switches": "edition role dispatch_rva table_rva remap_rva selector table_index target_rva",
        "virtuals": "edition class vtable_rva slot target_rva",
        "noreturn": "edition role start_rva end_rva source",
    }
    for name,content in rows.items():
        with (OUT/f"pe-{name}.tsv").open("w",encoding="utf-8",newline="") as stream:
            writer=csv.writer(stream,delimiter="\t",lineterminator="\n")
            writer.writerow(columns[name].split())
            writer.writerows(content)


if __name__ == "__main__":
    main()
