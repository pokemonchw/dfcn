"""Extract the installed PE queued-job text graph for offline decompilation.

No game process or translation code is executed. Original branches, literals,
selector aliases and dynamic identity suppliers are retained for Ghidra.
"""
from pathlib import Path
import bisect
import csv
import hashlib
import json
import re

from native_caption_image import CaptionImage
from extract_legends_catalog import NativeImage
from extract_fortress_weapon_picker_pe import OBJDUMP, complete_unwind_owners
from extract_adventure_journal_agreements_pe import literal_operands, native_switches

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "data/extracted/workshop-queue-5317"


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    config = json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())
    rows = {key: [] for key in ("functions", "ghidra-functions", "calls", "literals",
                               "branches", "conditions", "switches")}
    for edition in ("reference", "classic"):
        image = CaptionImage(Path(config[edition]), OBJDUMP)
        native = NativeImage(image.path)
        references = list(native.references())
        suffix_pc, caption, _, _, _ = next(row for row in references
                                          if row[4] == " (engrave memorial)")
        complete = complete_unwind_owners(image)
        entries = sorted(complete)
        wrapper = entries[bisect.bisect_left(entries, caption) - 1]
        owners = {wrapper: "job-object-caption", caption: "job-caption"}
        for offset, role in ((-0xac, "memorial-language-name"),
                             (-0x57, "memorial-unit-identity"),
                             (-0x1d, "memorial-race-caste")):
            pc = image.base + suffix_pc + offset
            instruction = next(image.instructions(pc, pc + 5))[1]
            target = re.fullmatch(r"call\s+0x([0-9a-f]+)", instruction)
            if target is None:
                raise ValueError(f"{edition}: changed memorial supplier at {pc:#x}")
            owners[int(target[1], 16) - image.base] = role
        unit_identity = next(start for start, role in owners.items()
                             if role == "memorial-unit-identity")
        role_pc = image.base + unit_identity + 0x263
        role_call = next(image.instructions(role_pc, role_pc + 5))[1]
        role_target = re.fullmatch(r"call\s+0x([0-9a-f]+)", role_call)
        if role_target is None:
            raise ValueError(f"{edition}: changed unit role supplier at {role_pc:#x}")
        owners[int(role_target[1], 16) - image.base] = "memorial-unit-role"
        for _, start, _, _, literal in references:
            if literal == " slabs engraved":
                owners[start] = ("memorial-choice-refresh" if complete[start][0] - start < 0x1000
                                 else "task-choice-construction")
        # Follow the material supplier actually called by the full caption.
        calls = {int(m[1], 16) - image.base for _, op in image.instructions(
            image.base + caption, image.base + complete[caption][0])
            if (m := re.fullmatch(r"call\s+0x([0-9a-f]+)", op))}
        for _, start, _, _, literal in references:
            if literal == "unknown material" and start in calls:
                owners[start] = "material-caption"
            if literal == "string too long":
                owners[start] = "string-length-error"
        digest = hashlib.sha256(image.raw).hexdigest()
        bodies = [(start, complete[start][0], role, "complete unwind owner")
                  for start, role in owners.items()]
        # This is the complete per-job loop in the building-sheet renderer;
        # other building panels are outside this region. Its incoming frame
        # and external exits remain explicit in the original assembly.
        shift = 0 if edition == "reference" else -0x70
        bodies.append((0x187524 + shift, 0x187e7b + shift, "queued-job-render-loop",
                       "per-job renderer region; containing owner 0x150630/0x1505c0"))
        for start, end, role, extent in bodies:
            body = list(image.instructions(image.base + start, image.base + end))
            switches = native_switches(image, body, edition, role)
            stop = min([end] + [int(row[3], 16) for row in switches
                               if start <= int(row[3], 16) < end])
            body = [(pc, op) for pc, op in body if pc < image.base + stop]
            filename = f"pe-{edition}-{role}.asm"
            rows["functions"].append((edition, image.identity, str(image.path), digest,
                                      role, hex(start), hex(end), extent))
            rows["ghidra-functions"].append((edition, image.identity, role, hex(start),
                                             hex(stop), filename))
            lines = [f"; {edition}; {image.identity}; {digest}; {role}; {extent}"]
            for index, (pc, op) in enumerate(body):
                values = literal_operands(image, op)
                lines.append(f"{pc-image.base:#x}: {op}" + "".join(
                    f" ; {kind}={value!r}" for _, kind, value in values))
                rows["literals"].extend((edition, role, hex(pc-image.base), address, kind, value)
                                        for address, kind, value in values)
                if match := re.fullmatch(r"(call|jmp)\s+0x([0-9a-f]+)", op):
                    target = int(match[2], 16) - image.base
                    if match[1] == "call" or not start <= target < end:
                        rows["calls"].append((edition, role, hex(pc-image.base), hex(target), match[1]))
                if match := re.fullmatch(r"(j\w+)\s+0x([0-9a-f]+)", op):
                    rows["branches"].append((edition, role, hex(pc-image.base), match[1],
                        hex(int(match[2], 16)-image.base),
                        hex(body[index+1][0]-image.base) if index+1 < len(body) else hex(stop)))
                if re.match(r"(?:cmp|test|bt)\s", op):
                    rows["conditions"].append((edition, role, hex(pc-image.base), op))
            rows["switches"].extend(switches)
            (OUT / filename).write_text("\n".join(lines) + "\n", encoding="utf-8")
        print(f"{edition}: {image.identity}, {len(bodies)} native text bodies")
    columns = {
        "functions": ("edition", "image", "source_path", "sha256", "role", "start_rva", "end_rva", "extent"),
        "ghidra-functions": ("edition", "image", "role", "start_rva", "end_rva", "assembly_file"),
        "calls": ("edition", "role", "instruction_rva", "callee_rva", "operation"),
        "literals": ("edition", "role", "instruction_rva", "operand", "kind", "text"),
        "branches": ("edition", "role", "instruction_rva", "opcode", "target_rva", "fallthrough_rva"),
        "conditions": ("edition", "role", "instruction_rva", "instruction"),
        "switches": ("edition", "role", "dispatch_rva", "table_rva", "remap_rva", "selector", "mapped_index", "target_rva"),
    }
    for key, fields in columns.items():
        with (OUT / f"pe-{key}.tsv").open("w", encoding="utf-8", newline="") as target:
            writer = csv.writer(target, delimiter="\t", lineterminator="\n")
            writer.writerow(fields)
            writer.writerows(rows[key])


if __name__ == "__main__":
    main()
