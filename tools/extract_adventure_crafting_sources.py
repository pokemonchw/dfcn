"""Read native Adventure crafting producers, branches and raw text fields.

This is static source extraction for translation work. It does not run the
game, attach to a process, invoke a translation or build any project output.
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
DEST = ROOT / "data/extracted/adventure-crafting"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
TITLE = "What do you want to do?  Items must be in a grasp or on the ground here."


def occurrences(raw, needle):
    at = 0
    while (at := raw.find(needle, at)) >= 0:
        yield at
        at += 1


def owner(native, address):
    index = bisect.bisect_right(native.starts, address) - 1
    if index < 0:
        return None
    begin, end = native.functions[index]
    return native.function_owners[begin] if address < end else None


def rip_owners(image, native, targets):
    """Find candidates from displacement bytes, then decode actual operands."""
    _, section_rva, _, disk, size = next(s for s in native.sections if s[0] == ".text")
    raw = image.raw
    candidates = set()
    for at in range(disk, disk + size - 5):
        if raw[at] & 0xc7 != 5:
            continue
        address = section_rva + at - disk
        target = address + 5 + struct.unpack_from("<i", raw, at + 1)[0]
        if target in targets:
            owning = owner(native, address)
            if owning is not None:
                candidates.add(owning)
    for owning in sorted(candidates):
        for address, instruction in image.instructions(image.base + owning, image.base + native.function_ends[owning]):
            ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
            if ref and int(ref[1], 16) - image.base in targets:
                yield address - image.base, int(ref[1], 16) - image.base, owning, instruction


def rtti_tables(image, labels):
    for label in labels:
        at = image.raw.find((".?AV" + label + "@@\0").encode("ascii"))
        type_id = image.address(at) - 16 - image.base
        for hit in occurrences(image.raw, struct.pack("<I", type_id)):
            if hit < 12:
                continue
            col = hit - 12
            try:
                sig, disp, ctor, _, hierarchy, self_id = struct.unpack_from("<6I", image.raw, col)
                if (sig, disp, ctor, self_id) != (1, 0, 0, image.address(col) - image.base):
                    continue
                for ref in occurrences(image.raw, struct.pack("<Q", image.base + self_id)):
                    table = image.address(ref) + 8
                    getter = image.uint64(table + 0x38)
                    image.offset(getter)
                    yield label, table - image.base, getter - image.base, hierarchy
            except (ValueError, struct.error):
                continue


def dump(image, native, start, label, edition, rows, end=None):
    end = end or native.function_ends[start]
    rows["owners"].append((edition, image.identity, label, hex(start), hex(end), str(image.path)))
    lines = [f"# {edition} {image.identity}; {label}; RVA {start:#x}..{end:#x}"]
    instructions = list(image.instructions(image.base + start, image.base + end))
    for index, (address, instruction) in enumerate(instructions):
        rva = address - image.base
        note = ""
        ref = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
        if ref:
            target = int(ref[1], 16)
            value = image.string(target)
            if value:
                note = " ; literal=" + json.dumps(value)
                rows["literals"].append((edition, label, hex(start), hex(rva), hex(target - image.base), value))
        immediate = re.search(r"\bmov(?:abs)?\s+(?:(?:BYTE|WORD|DWORD|QWORD) PTR \[[^]]+\]|\w+),0x([0-9a-f]+)$", instruction)
        if immediate:
            number = int(immediate[1], 16)
            width = max(1, (number.bit_length() + 7) // 8)
            value = number.to_bytes(width, "little")
            if all(32 <= b <= 126 for b in value):
                source = value.decode("ascii")
                note += " ; inline_fragment=" + json.dumps(source)
                rows["inline"].append((edition, label, hex(start), hex(rva), source))
        call = re.match(r"(?:call|jmp)\s+0x([0-9a-f]+)$", instruction)
        if call:
            rows["calls"].append((edition, label, hex(start), hex(rva), instruction.split()[0], hex(int(call[1], 16) - image.base)))
        indirect = re.match(r"call\s+QWORD PTR \[(?!rip)(.*)\]", instruction)
        if indirect:
            rows["dispatch"].append((edition, label, hex(start), hex(rva), indirect[1]))
        branch = re.match(r"(j\w+)\s+0x([0-9a-f]+)$", instruction)
        if branch:
            rows["branches"].append((edition, label, hex(start), hex(rva), branch[1], hex(int(branch[2], 16) - image.base)))
        indirect_jump = re.match(r"jmp\s+(\w+)$", instruction)
        if indirect_jump:
            rows["branches"].append((edition, label, hex(start), hex(rva), "indirect-jmp", indirect_jump[1]))
        switch = re.match(r"mov\s+\w+,DWORD PTR \[\w+\+(\w+)\*4\+0x([0-9a-f]+)\]", instruction)
        if switch:
            alias = {"rax": "eax", "rcx": "ecx", "rdx": "edx"}.get(switch[1], switch[1] + "d")
            preceding = instructions[max(0, index - 12):index]
            bound = next(((at, int(match[1], 16)) for at, ins in reversed(preceding)
                          if (match := re.match(r"cmp\s+" + alias + r",0x([0-9a-f]+)$", ins))), None)
            if bound:
                table = int(switch[2], 16)
                mapping = next((int(match[1], 16) for _, ins in preceding
                                if (match := re.match(r"movzx\s+" + alias + r",BYTE PTR \[\w+\+\w+\*1\+0x([0-9a-f]+)\]", ins))), None)
                for case in range(bound[1] + 1):
                    mapped = image.raw[image.offset(image.base + mapping) + case] if mapping is not None else case
                    target = struct.unpack_from("<I", image.raw, image.offset(image.base + table + mapped * 4))[0]
                    rows["switches"].append((edition, label, hex(start), hex(rva), hex(bound[0] - image.base),
                                              hex(table), hex(mapping) if mapping is not None else "", str(case), str(mapped), hex(target)))
        lines.append(f"{rva:#010x}: {instruction}{note}")
    (DEST / f"{edition}-{label}.asm").write_text("\n".join(lines) + "\n", encoding="utf-8")


def write_tsv(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as out:
        writer = csv.writer(out, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def main():
    DEST.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    rows = {key: [] for key in ("owners", "literals", "inline", "calls", "dispatch", "branches", "switches")}
    tables, refs, producers, draws, truncations, inline_resizes = [], [], [], [], [], []
    for edition, key in (("steam", "reference"), ("classic", "classic")):
        image = CaptionImage(Path(config[key]), OBJDUMP)
        native = NativeImage(image.path)
        title = image.address(image.raw.find(TITLE.encode("ascii") + b"\0")) - image.base
        title_refs = list(rip_owners(image, native, set(range(title, title + len(TITLE)))))
        render = title_refs[0][2]
        regions = sorted(start for start in native.function_ends if render <= start < render + 0x532a)
        labels = ("craft-render", "craft-input", "butcher-and-reagent-selection", "reagent-availability",
                  "reagent-candidates", "category-tree-builder", "reagent-item-matcher",
                  "reagent-choice", "reaction-start", "reaction-completion")
        for start, label in zip(regions, labels):
            dump(image, native, start, label, edition, rows)
        render_instructions = list(image.instructions(image.base + render, image.base + native.function_ends[render]))
        draw_roles = ("Prompt/Cancel", "Prompt/Reagent", "Prompt/ButcheryTool", "Prompt/Carcass",
                      "Prompt/Crafting", "Message/NoItem", "Message/NoButcheryTool", "Message/NoCarcass",
                      "Caption/CategoryOrRecipeOrItem", "Message/Hunger", "Message/NoCarcass",
                      "Message/NoButcheryTool", "Description/Category", "Needs/Recipe")
        selected = [(address, int(match[1], 16)) for address, instruction in render_instructions
                    if (match := re.match(r"call\s+0x([0-9a-f]+)$", instruction))
                    and int(match[1], 16) - image.base in (0xad9960, 0xad69a0)]
        for (address, target), role in zip(selected, draw_roles):
            next_instruction = next(code for code, _ in render_instructions if code > address)
            draws.append((edition, image.identity, hex(render), hex(address - image.base),
                          hex(next_instruction - image.base), hex(target - image.base), role))
        for role, begin, end, string_local in (("Caption", 0xcfb, 0xde7, "rbp-0x10"),
                                                ("Description", 0x1106, 0x1157, "rbp+0x10"),
                                                ("Needs", 0x13cf, 0x1424, "rbp-0x30")):
            truncations.append((edition, image.identity, role, hex(render + begin), hex(render + end),
                                string_local, "native byte truncation; no line wrapping"))
        # Whole instruction ranges replacing the inlined std::string resize.
        # The following short jump is excluded; no interior branch targets.
        # Argument instructions establish native RCX/RDX/R8B for resize.
        for role, begin, end, arguments, semantics in (
                ("Caption", 0xd37, 0xd4d, "48 8d 4d f0 48 89 da 45 31 c0",
                 "rcx=rbp-0x10; rdx=rbx; r8b=0; following cmp replaces flags and dots reload rax"),
                ("Description", 0x1131, 0x1146, "48 8d 4d 10 45 31 c0",
                 "rcx=rbp+0x10; rdx=width; r8b=0; following addst resets rcx/rdx/r9 and ignores r8"),
                ("Needs", 0x13fd, 0x1413, "48 8d 4d d0 45 31 c0",
                 "rcx=rbp-0x30; rdx=width; r8b=0; following addst resets rcx/rdx/r9 and ignores r8")):
            at = image.offset(image.base + render + begin)
            inline_resizes.append((edition, image.identity, role, "inline-shrink", hex(render + begin),
                                   hex(render + end), image.raw[at:at + end - begin].hex(" "), arguments,
                                   "", "false", semantics))
        for role, begin, pad, semantics in (
                ("Caption", 0xda3, "true", "append one zero before tail dots; convert append count to total width"),
                ("Description", 0x1152, "false", "growth path preserves source; no dots follow; convert append count to total width"),
                ("Needs", 0x141f, "false", "growth path preserves source; no dots follow; convert append count to total width")):
            at = image.offset(image.base + render + begin)
            target = render + begin + 5 + struct.unpack_from("<i", image.raw, at + 1)[0]
            inline_resizes.append((edition, image.identity, role, "append-pad", hex(render + begin),
                                   hex(render + begin + 5), image.raw[at:at + 5].hex(" "), "48 03 51 10",
                                   hex(target), pad, semantics))
        # The count helper is a leaf with six mode-dependent returns and no
        # unwind record. Its extent ends at the next native function boundary.
        counter = next(int(row[5], 16) for row in rows["calls"] if row[0] == edition and row[1] == "craft-render")
        counter_end = next(start for start in native.starts if start > counter)
        dump(image, native, counter, "craft-row-count", edition, rows, counter_end)
        category_ref = next((ref for ref in image.instructions(image.base + render, image.base + native.function_ends[render])
                             if re.search(r"\bmov\s+rbx,QWORD PTR \[rip", ref[1])), None)
        category_global = int(re.search(r"# (?:0x)?([0-9a-f]+)", category_ref[1])[1], 16) - image.base
        category_refs = list(rip_owners(image, native, set(range(category_global, category_global + 0x18))))
        for address, target, owning, instruction in category_refs:
            refs.append((edition, image.identity, hex(address), hex(target), hex(owning), instruction))
        parser_ref = next(ref for ref in native.references() if ref[4] == "CATEGORY_DESCRIPTION")
        dump(image, native, parser_ref[1], "reaction-raw-parser", edition, rows)
        # CATEGORY allocates an 0x88-byte record and calls this constructor;
        # its string fields are subsequently assigned by the raw parser.
        constructor = 0xed06f0 if edition == "steam" else 0xecb660
        dump(image, native, constructor, "category-record-constructor", edition, rows, constructor + 0x59)
        filter_ref = next(ref for ref in native.references() if ref[4] == "unused ")
        dump(image, native, filter_ref[1], "reagent-item-filter-description", edition, rows)
        item_ref = next(ref for ref in native.references() if ref[4] == "bone carver's shop sign")
        dump(image, native, item_ref[1], "reagent-item-type-name", edition, rows)
        # This helper copies an unknown reaction class verbatim and appends
        # one space. It does not fold case or replace RAW token underscores.
        token_append = 0x724a30 if edition == "steam" else 0x722450
        dump(image, native, token_append, "reaction-class-token-space", edition, rows)
        # The item reagent builds a fresh job_itemst. Its leaf constructor
        # sets dimension and reaction-index to -1 before field assignment.
        job_item_constructor = 0x1fb050 if edition == "steam" else 0x1fafe0
        dump(image, native, job_item_constructor, "reagent-filter-constructor", edition, rows,
             job_item_constructor + 0x123)
        for label, table, getter, hierarchy in sorted(set(rtti_tables(image, ("reaction_reagentst", "reaction_reagent_itemst")))):
            tables.append((edition, image.identity, label, hex(table), "0x38", hex(getter), hex(hierarchy)))
            end = native.function_ends.get(getter)
            if end is None:
                # The abstract base slot is the shared three-byte RET 0
                # leaf; neighbouring no-op methods are separate producers.
                end = getter + 3 if label == "reaction_reagentst" else next(start for start in native.starts if start > getter)
            dump(image, native, getter, label + "-description", edition, rows, end)
        for address, target, owning, instruction in title_refs:
            refs.append((edition, image.identity, hex(address), hex(target), hex(owning), instruction))
        # Keep call-site positions for the root renderer so its whole UI path
        # can be associated with the semantic crafting context.
        for at in occurrences(image.raw, b"\xe8"):
            try:
                address = image.address(at) - image.base
                if address + 5 + struct.unpack_from("<i", image.raw, at + 1)[0] != render:
                    continue
                owning = owner(native, address)
                if owning is not None:
                    for code, instruction in image.instructions(image.base + owning, image.base + native.function_ends[owning]):
                        if code - image.base == address and re.match(r"call\s+0x", instruction):
                            producers.append((edition, hex(owning), hex(address), hex(render)))
            except (ValueError, struct.error):
                continue
        print(f"{edition}: {image.identity}; renderer={render:#x}; category_vector={category_global:#x}")
    write_tsv("native-owners.tsv", ("edition", "image_identity", "role", "start_rva", "end_rva", "path"), rows["owners"])
    write_tsv("native-literals.tsv", ("edition", "role", "owner_rva", "instruction_rva", "literal_rva", "text"), rows["literals"])
    write_tsv("native-inline-fragments.tsv", ("edition", "role", "owner_rva", "instruction_rva", "text_fragment"), rows["inline"])
    write_tsv("native-calls.tsv", ("edition", "role", "owner_rva", "instruction_rva", "instruction", "target_rva"), rows["calls"])
    write_tsv("native-virtual-dispatch.tsv", ("edition", "role", "owner_rva", "instruction_rva", "operand"), rows["dispatch"])
    write_tsv("native-branches.tsv", ("edition", "role", "owner_rva", "instruction_rva", "branch", "target_rva"), rows["branches"])
    write_tsv("native-switch-branches.tsv", ("edition", "role", "owner_rva", "instruction_rva", "bound_instruction_rva", "table_rva", "compressed_mapping_rva", "case_index", "mapped_index", "target_rva"), rows["switches"])
    write_tsv("native-reagent-vtables.tsv", ("edition", "image_identity", "type", "vtable_rva", "description_slot", "description_rva", "hierarchy_rva"), tables)
    write_tsv("native-source-references.tsv", ("edition", "image_identity", "instruction_rva", "target_rva", "owner_rva", "instruction"), refs)
    write_tsv("native-render-callers.tsv", ("edition", "owner_rva", "instruction_rva", "renderer_rva"), producers)
    write_tsv("native-draw-calls.tsv", ("edition", "image_identity", "renderer_rva", "instruction_rva", "return_rva", "addst_rva", "role"), draws)
    write_tsv("native-truncation-sources.tsv", ("edition", "image_identity", "role", "begin_rva", "end_rva", "full_source_string", "semantics"), truncations)
    write_tsv("native-inline-resizes.tsv", ("edition", "image_identity", "role", "branch", "begin_rva", "end_rva",
              "original_bytes", "argument_bytes", "append_target_rva", "zero_pad_one", "semantics"), inline_resizes)


if __name__ == "__main__":
    main()
