"""Read every PE RIP reference to the cached map-look vector and its owners.

This reads configured images without attaching to the game or invoking a build,
translator, renderer, or runtime behaviour. Byte-displacement hits are only
navigation hints: retained references are decoded from actual unwind owners.
"""
from array import array
import csv
import json
from pathlib import Path
import re
import struct
import sys

from extract_legends_catalog import NativeImage
from native_caption_image import CaptionImage
from extract_terrain_caption_sources import OBJDUMP, owner

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / "data/extracted/terrain-captions"


def write_rows(name, header, rows):
    with (DEST / name).open("w", encoding="utf-8", newline="") as output:
        writer = csv.writer(output, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def virtual_owners(native, function):
    """Read the closest preceding real MSVC vtable locator for each slot."""
    _, start, _, disk, size = next(s for s in native.sections if s[0] == ".rdata")
    region = native.raw[disk:disk+size]
    for match in re.finditer(re.escape(struct.pack("<Q", native.base+function)), region):
        slot = disk+match.start()
        for distance in range(8, 0x808, 8):
            locator = struct.unpack_from("<Q", native.raw, slot-distance)[0]-native.base
            try:
                at = native.offset(locator)
                signature, _, _, descriptor, _, self_rva = struct.unpack_from("<IIIIII", native.raw, at)
                value = native.string(descriptor+16)
            except (ValueError, struct.error):
                continue
            if signature == 1 and self_rva == locator and value and value[1].startswith(".?AV"):
                yield hex(start+match.start()), distance//8-1, hex(locator), hex(descriptor), value[1]
                break


def transfer_edges(native, image, code, start, targets, opcode, decoded):
    """Decode complete owners for overlapping E8/E9 navigation candidates."""
    byte = b"\xe8" if opcode == "call" else b"\xe9"
    spacing = "   " if opcode == "call" else "    "
    for match in re.finditer(b"(?=("+byte+b"....))", code, re.S):
        site = start+match.start()
        target = site+5+struct.unpack_from("<i", match[1], 1)[0]
        if target not in targets:
            continue
        try:
            owning = owner(native, site)
            end = native.function_ends[owning]
        except ValueError:
            index = site-start
            before = list(re.finditer(b"\xcc{2,}", code[max(0,index-256):index]))
            after = re.search(b"\xcc{2,}", code[index:index+256])
            if not before or after is None:
                raise ValueError(f"Unresolved no-pdata {opcode} owner at {site:#x}")
            owning = start+max(0,index-256)+before[-1].end()
            end = site+after.start()
        if owning not in decoded:
            decoded[owning] = list(image.instructions(image.base+owning, image.base+end))
        instructions = decoded[owning]
        actual = next((index for index, (pc, instruction) in enumerate(instructions)
                       if pc-image.base == site and instruction == f"{opcode}{spacing}{image.base+target:#x}"), None)
        if actual is not None:
            yield site, target, owning, end, instructions, actual


def main():
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())
    rows, owners, ownership, leaf_calls, tails = [], [], [], [], []
    with (DEST/"native-consumers.tsv").open(encoding="utf-8", newline="") as source:
        consumers = list(csv.DictReader(source, delimiter="\t"))
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        native = NativeImage(image.path)
        look = 0x269bc20 if edition == "reference" else 0x2695b10
        _, start, _, disk, size = next(s for s in native.sections if s[0] == ".text")
        code = native.raw[disk:disk + size]
        candidates = set()
        leaf_sites = set()
        # RIP displacement is followed by at most eight immediate bytes.
        # All alignment phases are read; actual instruction decode below
        # discards arithmetic coincidences and retains exact target fields.
        for phase in range(4):
            words = array("i")
            words.frombytes(code[phase:phase + ((len(code) - phase) // 4) * 4])
            if sys.byteorder != "little":
                words.byteswap()
            for index, displacement in enumerate(words):
                target = start + phase + index * 4 + 4 + displacement
                if look - 8 <= target <= look + 24:
                    site = start + phase + index * 4
                    try:
                        candidates.add(owner(native, site))
                    except ValueError:
                        leaf_sites.add(site)
        print(f"{edition}: decoding {len(candidates)} candidate owner procedures", flush=True)
        boundaries = {begin: native.function_ends[begin] for begin in candidates}
        # Four MSVC leaf procedures have no .pdata entries. The actual code
        # boundaries below retain the terminating RET/tail-JMP and omit INT3
        # alignment padding. Any additional byte hit is reported for source
        # investigation rather than silently equated with an absent reference.
        leaves = ((0x420dd0, 0x420de3), (0x420df0, 0x420dfe),
                  (0x420e00, 0x420e0e), (0x420e10, 0x420e37)) if edition == "reference" else (
                  (0x41e990, 0x41e9a3), (0x41e9b0, 0x41e9be),
                  (0x41e9c0, 0x41e9ce), (0x41e9d0, 0x41e9f7))
        boundaries.update(leaves)
        unresolved = sorted(site for site in leaf_sites
                            if not any(begin <= site < end for begin, end in leaves))
        for site in unresolved:
            # A raw four-byte coincidence can straddle two instructions in
            # an unrelated leaf. Decode the complete INT3-padded leaf before
            # rejecting such a navigation hit (reference0xc60226 is one).
            index = site-start
            padding = list(re.finditer(b"\xcc{2,}", code[max(0,index-256):index]))
            end_padding = re.search(b"\xcc{2,}", code[index:index+256])
            if not padding or end_padding is None:
                raise ValueError(f"Unresolved unowned displacement at {site:#x}")
            begin = start+max(0,index-256)+padding[-1].end()
            end = site+end_padding.start()
            boundaries[begin] = end
        decoded = {}
        vector_owners = set()
        for owning in sorted(boundaries):
            instructions = list(image.instructions(image.base + owning,
                                                   image.base + boundaries[owning]))
            decoded[owning] = instructions
            refs = []
            for pc, instruction in instructions:
                match = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                if match:
                    target = int(match[1], 16) - image.base
                    if look <= target < look + 24:
                        refs.append((pc - image.base, target, instruction))
            if not refs:
                continue
            vector_owners.add(owning)
            filename = f"{edition}-look-vector-owner-{owning:x}.asm"
            lines = [f"; {edition}; {image.identity}; look vector {look:#x}; "
                     f"owner {owning:#x}..{boundaries[owning]:#x}" +
                     ("; leaf, no .pdata" if owning not in candidates else "")]
            for pc, instruction in instructions:
                match = re.search(r"# (?:0x)?([0-9a-f]+)", instruction)
                literal = image.string(int(match[1], 16)) if match else None
                lines.append(f"{pc-image.base:#010x}: {instruction}" +
                             (" ; literal=" + json.dumps(literal) if literal else ""))
            (DEST / filename).write_text("\n".join(lines) + "\n", encoding="utf-8")
            owners.append((edition, image.identity, hex(look), hex(owning),
                           hex(boundaries[owning]), len(refs), filename))
            rows.extend((edition, hex(look), hex(owning), hex(pc),
                         hex(target), target-look, instruction) for pc, target, instruction in refs)
        # A consumer can obtain vector pointers from dedicated leaves without
        # referencing the global itself. Close that source edge by finding all
        # overlapping E8 byte positions and decoding each real caller owner.
        leaf_roles = {leaves[0][0]: "size", leaves[1][0]: "end-iterator",
                      leaves[2][0]: "begin-iterator", leaves[3][0]: "pointer-push"}
        contexts = []
        for site,target,owning,end,instructions,actual in transfer_edges(
                native,image,code,start,leaf_roles,"call",decoded):
            leaf_calls.append((edition, hex(site), hex(site+5), hex(target), leaf_roles[target],
                               hex(owning), hex(end), int(owning in vector_owners)))
            contexts.append(f"; {edition}; actual {leaf_roles[target]} call {site:#x}; "
                            f"owner {owning:#x}..{end:#x}; direct vector refs={owning in vector_owners}")
            contexts.extend(f"{pc-image.base:#010x}: {instruction}" for pc, instruction
                            in instructions[max(0,actual-20):actual+41])
            if owning not in vector_owners:
                lines = [f"; {edition}; {image.identity}; leaf caller; owner {owning:#x}..{end:#x}"]
                lines.extend(f"{pc-image.base:#010x}: {instruction}" for pc, instruction in instructions)
                (DEST/f"{edition}-look-leaf-caller-owner-{owning:x}.asm").write_text(
                    "\n".join(lines)+"\n", encoding="utf-8")
        (DEST/f"{edition}-look-leaf-callers.asm").write_text("\n".join(contexts)+"\n", encoding="utf-8")
        tail_targets = dict(leaf_roles)
        tail_targets[0xe7d330 if edition == "reference" else 0xe782a0] = "terrain"
        for site,target,owning,end,instructions,actual in transfer_edges(
                native,image,code,start,tail_targets,"jmp",decoded):
            tails.append((edition,hex(site),hex(target),tail_targets[target],hex(owning),hex(end),
                          int(owning in native.function_ends)))
            lines = [f"; {edition}; {image.identity}; actual tail {site:#x} ->{target:#x}; owner {owning:#x}..{end:#x}"]
            lines.extend(f"{pc-image.base:#010x}: {instruction}" for pc,instruction in instructions)
            (DEST/f"{edition}-terrain-look-tail-owner-{owning:x}.asm").write_text(
                "\n".join(lines)+"\n",encoding="utf-8")
        helpers = (("addst-flag", 0xad9870, 0xad995b),
                   ("addst", 0xad9960, 0xad9a33),
                   ("top-addst", 0xad9a40, 0xad9afc)) if edition == "reference" else (
                   ("addst-flag", 0xad68b0, 0xad699b),
                   ("addst", 0xad69a0, 0xad6a73),
                   ("top-addst", 0xad6a80, 0xad6b3c))
        for role, begin, end in helpers:
            lines = [f"; {edition}; {image.identity}; {role}; RVA {begin:#x}..{end:#x}"]
            lines.extend(f"{pc-image.base:#010x}: {instruction}" for pc, instruction
                         in image.instructions(image.base+begin, image.base+end))
            (DEST/f"{edition}-{role}.asm").write_text("\n".join(lines)+"\n", encoding="utf-8")
        # The actual Fortress virtual input and render wrapper own the cached
        # coordinate refresh and main renderer call. Neither is inferred from
        # the supplied frame's appearance.
        roles = (("fortress-input", 0x8b3170), ("fortress-render-wrapper", 0x8bcc70)) if edition == "reference" else (
                 ("fortress-input", 0x8b09f0), ("fortress-render-wrapper", 0x8ba4f0))
        for role, begin in roles:
            end = native.function_ends[begin]
            lines = [f"; {edition}; {image.identity}; {role}; RVA {begin:#x}..{end:#x}"]
            lines.extend(f"{pc-image.base:#010x}: {instruction}" for pc, instruction
                         in image.instructions(image.base+begin, image.base+end))
            (DEST/f"{edition}-{role}.asm").write_text("\n".join(lines)+"\n", encoding="utf-8")
        terrain_owners = sorted({int(row["owner_rva"], 16) for row in consumers
                                 if row["edition"] == edition and row["target_role"] == "terrain"})
        for begin in terrain_owners+[address for _, address in roles]:
            slots = list(virtual_owners(native, begin))
            if slots:
                ownership.extend((edition, hex(begin), *record) for record in slots)
            else:
                ownership.append((edition, hex(begin), "", "", "", "", "no direct vtable slot reference"))
    write_rows("native-look-vector-owners.tsv",
               ("edition", "image_identity", "list_rva", "owner_rva", "owner_end_rva",
                "reference_count", "disassembly_file"), owners)
    write_rows("native-look-vector-references.tsv",
               ("edition", "list_rva", "owner_rva", "instruction_rva", "target_rva",
                "field_offset", "instruction"), rows)
    write_rows("native-terrain-consumer-ownership.tsv",
               ("edition", "owner_rva", "slot_rva", "slot_index", "locator_rva",
                "type_descriptor_rva", "native_class"), ownership)
    write_rows("native-look-leaf-callers.tsv",
               ("edition", "call_rva", "return_rva", "target_rva", "leaf_role", "owner_rva",
                "owner_end_rva", "caller_has_direct_vector_reference"), leaf_calls)
    write_rows("native-terrain-look-tail-edges.tsv",
               ("edition","jump_rva","target_rva","target_role","owner_rva","owner_end_rva",
                "has_unwind_owner"),tails)
    print(f"Retained {len(rows)} decoded cached-look vector references in {len(owners)} owners")


if __name__ == "__main__":
    main()
