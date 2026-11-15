"""Extract current musical-form prose and its finite text suppliers from PE.

Offline source extraction only. The original instructions, branch edges,
selector aliases and string operands feed DecompileLoadGameModDialogPE.java's
manifest reader; no game process or translation execution is involved.
"""
from pathlib import Path
import csv
import hashlib
import json
import re

from native_caption_image import CaptionImage
from extract_legends_catalog import NativeImage
from extract_adventure_journal_agreements_pe import literal_operands, native_switches

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/musical-form-current"
OBJDUMP = "C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/w64devkit-2.9.1/w64devkit/bin/objdump.exe"


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())
    rows = {name: [] for name in ("functions", "ghidra-functions", "literals", "calls", "branches", "conditions", "switches", "strings")}
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        native = NativeImage(image.path)
        roots = {owner: "musical-form" for _, owner, _, _, text in native.references()
                 if text == "This passage features only melodic tones and intervals.  "}
        if len(roots) != 1:
            raise ValueError(f"Ambiguous musical-form supplier: {edition} {roots}")
        main_start = next(iter(roots))
        body = list(image.instructions(image.base + main_start, image.base + native.function_ends[main_start]))
        callees = {int(match[1], 16) - image.base for _, text in body
                   if (match := re.fullmatch(r"call\s+0x([0-9a-f]+)", text))}
        extents = dict(native.function_ends)
        for start in sorted(callees):
            end = extents.get(start, min((entry for entry in native.starts if entry > start), default=start))
            if end <= start or end - start > 0x2000:
                continue
            helper = list(image.instructions(image.base + start, image.base + end))
            literals = {value for _, text in helper
                        for _, _, value in literal_operands(image, text)}
            if {"crisp", "raspy", "sparkling"} <= literals:
                roots[start] = "timbre-selector"
                extents[start] = end
            elif {"Nineteenth", "Zeroth"} <= literals:
                roots[start] = "ordinal"
            elif {"ninety", " billion"} <= literals:
                roots[start] = "cardinal"
            elif (main_start - 0x2000 < start < main_start and not literals
                  and any(re.fullmatch(r"cmp\s+\w+,0x3e", text) for _, text in helper)
                  and native_switches(image, helper, edition, "register-timbre-choice")):
                roots[start] = "register-timbre-choice"
                extents[start] = end
        digest = hashlib.sha256(image.raw).hexdigest()
        for start, role in roots.items():
            end = extents[start]
            body = list(image.instructions(image.base + start, image.base + end))
            switches = native_switches(image, body, edition, role)
            code_end = min([end] + [int(row[3], 16) for row in switches if start <= int(row[3], 16) < end])
            switches = [row for row in switches if int(row[2], 16) < code_end]
            body = [(pc, text) for pc, text in body if pc < image.base + code_end]
            filename = f"pe-{edition}-{role}.asm"
            rows["functions"].append((edition, image.identity, str(image.path), digest, role, hex(start), hex(end)))
            rows["ghidra-functions"].append((edition, image.identity, role, hex(start), hex(code_end), filename))
            extent_kind = "complete PE unwind owner" if start in native.function_ends else "leaf code followed by selector table"
            lines = [f"; {edition} {image.identity}; {role}; {extent_kind} {start:#x}..{end:#x}; code ends {code_end:#x}"]
            seen_strings = set()
            for index, (pc, instruction) in enumerate(body):
                values = literal_operands(image, instruction)
                lines.append(f"{pc-image.base:#x}: {instruction}" + "".join(f" ; {kind}={value!r}" for _, kind, value in values))
                rows["literals"].extend((edition, role, hex(pc-image.base), operand, kind, value) for operand, kind, value in values)
                for operand, kind, _ in values:
                    if kind not in ("cstring", "vector"):
                        continue
                    address = int(operand.split("/")[0], 16)
                    offset = image.offset(address)
                    value = image.string(address)
                    if not value or 32 <= image.raw[offset-1] < 127 or address in seen_strings:
                        continue
                    rows["strings"].append((edition, role, hex(pc-image.base), hex(address-image.base), value))
                    seen_strings.add(address)
                if match := re.fullmatch(r"(call|jmp)\s+0x([0-9a-f]+)", instruction):
                    target = int(match[2], 16) - image.base
                    if match[1] == "call" or not start <= target < end:
                        rows["calls"].append((edition, role, hex(pc-image.base), hex(target), match[1]))
                if match := re.fullmatch(r"(j\w+)\s+0x([0-9a-f]+)", instruction):
                    following = body[index+1][0]-image.base if index+1 < len(body) else code_end
                    rows["branches"].append((edition, role, hex(pc-image.base), match[1], hex(int(match[2], 16)-image.base), hex(following)))
                if re.match(r"(?:cmp|test|bt)\s", instruction):
                    rows["conditions"].append((edition, role, hex(pc-image.base), instruction))
            rows["switches"].extend(switches)
            (OUT / filename).write_text("\n".join(lines)+"\n", encoding="utf-8")
        print(edition, image.identity, {hex(start): role for start, role in roots.items()})
    columns = {
        "functions": ("edition", "image", "source_path", "sha256", "role", "start_rva", "end_rva"),
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


if __name__ == "__main__":
    main()
