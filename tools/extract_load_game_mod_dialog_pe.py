"""Extract PE load-game mod selection, errors, input branches and progress text.

This is an offline source extraction from both configured game images. It
retains original branch edges, literals and switch aliases without running
the game or translations.
"""
from pathlib import Path
import csv
import hashlib
import json
import re

from native_caption_image import CaptionImage
from extract_fortress_weapon_picker_pe import complete_unwind_owners
from extract_adventure_journal_agreements_pe import literal_operands, native_switches

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/load-game-mod-dialog"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"
OWNERS = {
    'reference': {
        0x7d4730: 'new-game-load-state-machine',
        0x7d5ce0: 'saved-game-load-state-machine',
        0x7da3b0: 'new-game-load-renderer',
        0x7dbdf0: 'load-game-renderer',
        0x7ddb10: 'new-game-mod-step',
        0x7ddbf0: 'saved-game-mod-step',
        0x7dfc50: 'resolve-compatible-mod',
        0x7e0000: 'mod-choice-input',
        0x7e0450: 'mod-load-dialog',
    },
    'classic': {
        0x7d1d90: 'new-game-load-state-machine',
        0x7d3340: 'saved-game-load-state-machine',
        0x7d7a10: 'new-game-load-renderer',
        0x7d9450: 'load-game-renderer',
        0x7db170: 'new-game-mod-step',
        0x7db250: 'saved-game-mod-step',
        0x7dd2b0: 'resolve-compatible-mod',
        0x7dd660: 'mod-choice-input',
        0x7ddab0: 'mod-load-dialog',
    },
}


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text(encoding="utf-8"))
    rows = {name: [] for name in ("functions", "ghidra-functions", "literals", "calls", "branches", "conditions", "switches", "strings")}
    for edition, owners in OWNERS.items():
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        complete = complete_unwind_owners(image)
        digest = hashlib.sha256(image.raw).hexdigest()
        for start_rva, role in owners.items():
            end_rva, fragments = complete[start_rva]
            start, end = image.base + start_rva, image.base + end_rva
            body = list(image.instructions(start, end))
            switches = native_switches(image, body, edition, role)
            code_end = min([end] + [image.base + int(row[3], 16) for row in switches
                                   if start <= image.base + int(row[3], 16) < end])
            body = [(pc, text) for pc, text in body if pc < code_end]
            filename = f"pe-{edition}-{role}.asm"
            rows["functions"].append((edition, image.identity, str(image.path), digest, role,
                                       hex(start_rva), hex(end_rva), hex(image.base),
                                       ";".join(f"{a:#x}..{b:#x}" for a,b in fragments)))
            rows["ghidra-functions"].append((edition, image.identity, role, hex(start_rva), hex(code_end-image.base), filename))
            basis = "complete PE unwind owner"
            lines = [f"; {edition} {image.identity}; {role}; {basis} RVA {start_rva:#x}..{end_rva:#x}"]
            seen_strings = set()
            for index, (pc, instruction) in enumerate(body):
                values = literal_operands(image, instruction)
                lines.append(f"{pc-image.base:#x}: {instruction}" + "".join(f" ; {kind}={value!r}" for _,kind,value in values))
                # Restore complete C strings even when MSVC copies them with
                # several vector/scalar loads; keep raw operands separately.
                for operand, kind, _ in values:
                    if kind not in ("cstring", "vector"): continue
                    address = int(operand.split("/")[0], 16)
                    offset = image.offset(address)
                    value = image.string(address)
                    if not value or (32 <= image.raw[offset-1] < 127): continue
                    if address not in seen_strings:
                        rows["strings"].append((edition, role, hex(pc-image.base), hex(address-image.base), value))
                        seen_strings.add(address)
                rows["literals"].extend((edition, role, hex(pc-image.base), operand, kind, value) for operand,kind,value in values)
                if found := re.match(r"(call|jmp)\s+(?:0x)?([0-9a-f]+)$", instruction):
                    target = int(found[2],16)
                    if found[1] == "call" or not start <= target < end:
                        rows["calls"].append((edition, role, hex(pc-image.base), hex(target-image.base), found[1]))
                if found := re.match(r"(j\w+)\s+(?:0x)?([0-9a-f]+)$", instruction):
                    rows["branches"].append((edition, role, hex(pc-image.base), found[1], hex(int(found[2],16)-image.base), hex(body[index+1][0]-image.base) if index+1<len(body) else hex(code_end-image.base)))
                if re.match(r"(?:cmp|test|bt)\s", instruction):
                    rows["conditions"].append((edition, role, hex(pc-image.base), instruction))
            rows["switches"].extend(switches)
            (OUT / filename).write_text("\n".join(lines)+"\n", encoding="utf-8")
    columns = {
        "functions": ("edition", "image", "source_path", "sha256", "role", "start_rva", "end_rva", "image_base", "source_ranges"),
        "ghidra-functions": ("edition", "image", "role", "start_rva", "end_rva", "assembly_file"),
        "strings": ("edition", "role", "instruction_rva", "string_rva", "text"),
        "literals": ("edition", "role", "instruction_rva", "operand", "kind", "text"),
        "calls": ("edition", "role", "instruction_rva", "callee_rva", "operation"),
        "branches": ("edition", "role", "instruction_rva", "branch", "target_rva", "fallthrough_rva"),
        "conditions": ("edition", "role", "instruction_rva", "condition"),
        "switches": ("edition", "role", "dispatch_rva", "table_rva", "remap_rva", "selector", "table_index", "target_rva"),
    }
    for name, content in rows.items():
        with (OUT / f"pe-{name}.tsv").open("w", encoding="utf-8", newline="") as stream:
            writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
            writer.writerow(columns[name])
            writer.writerows(content)
    print(f"Extracted {len(rows['functions'])} complete PE source owners")


if __name__ == "__main__":
    main()
