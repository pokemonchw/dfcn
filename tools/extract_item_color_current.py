"""Offline PE 53.17 item coloration/condition source extraction, not a test.

Run with the project's fixed Python. Then use DecompileItemColor.java against
the same PE in Ghidra; functions.tsv and literal-addresses.tsv are its inputs.
No translation generator, game process, or build is invoked here.
"""
import argparse
import csv
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess

from extract_legends_catalog import NativeImage

ROOT = Path(__file__).resolve().parents[1]
OBJDUMP = (Path("C:/Users/WIN11/AppData/Local/Programs/dfcn-toolchains/") /
           "w64devkit-2.9.1/w64devkit/bin/objdump.exe")
FUNCTIONS = (0xC8CCF0, 0xCC4F60, 0xCC59A0, 0x1475520, 0x14EAB90)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", type=Path)
    parser.add_argument("--output", type=Path,
                        default=ROOT / "data/extracted/item-color-current")
    args = parser.parse_args()
    exe = args.exe or Path(json.loads(
        (ROOT / "data/runtime/native-pe-images.json").read_text())['game'])
    image = NativeImage(exe)
    pe = struct.unpack_from("<I", image.raw, 60)[0]
    identity = (struct.unpack_from("<I", image.raw, pe + 8)[0],
                struct.unpack_from("<I", image.raw, pe + 24 + 56)[0])
    if identity != (0x6AEA05A1, 0x02734000):
        raise ValueError(f"Relocate source bindings for this PE: {identity!r}")
    out = args.output
    out.mkdir(parents=True, exist_ok=True)

    def table(name, header, rows):
        with (out / name).open('w', encoding='utf-8', newline='') as stream:
            writer = csv.writer(stream, delimiter='\t')
            if header:
                writer.writerow(header)
            writer.writerows(rows)

    table('functions.tsv', None, ((hex(start), hex(image.function_ends[start]))
                                 for start in FUNCTIONS))
    branches = []
    for start in FUNCTIONS:
        assembly = subprocess.check_output([
            str(OBJDUMP), '-d', '-Mintel', '--no-show-raw-insn',
            f'--start-address={image.base + start}',
            f'--stop-address={image.base + image.function_ends[start]}', str(exe)], text=True)
        (out / f'{start:#x}.asm').write_text(assembly, encoding='utf-8')
        for line in assembly.splitlines():
            match = re.match(r'\s*([0-9a-f]+):\s+(j\w+|call)\s+(.*)', line)
            if match:
                branches.append((hex(start), *match.groups()))
    table('branches.tsv', ('function_rva', 'instruction_va', 'opcode', 'operand'), branches)
    literals = []
    for instruction, owner, end, offset, text in image.references():
        if owner not in FUNCTIONS:
            continue
        address = next(rva + offset - raw for _, rva, _, raw, size in image.sections
                       if raw <= offset < raw + size)
        literals.append((hex(owner), hex(instruction), hex(address), text))
    table('literal-addresses.tsv', ('owner_rva', 'instruction_rva', 'literal_rva', 'text'), literals)
    leaves = []
    tokens = r'\[(?:DESCRIPTOR_COLOR|NAME|STATE_NAME|STATE_ADJ|STATE_NAME_ADJ|PREFIX|MATERIAL|USE_MATERIAL|USE_MATERIAL_TEMPLATE|MATERIAL_TEMPLATE|DYE|POWDER_DYE|BASE_COLOR):[^\]]*\]'
    for folder in ('data/vanilla', 'data/installed_mods'):
        for path in sorted((exe.parent / folder).glob('*/objects/*.txt')):
            for line, text in enumerate(path.read_text(encoding='cp437').splitlines(), 1):
                leaves.extend((str(path.relative_to(exe.parent)), line, token)
                              for token in re.findall(tokens, text))
    table('raw-leaves.tsv', ('file', 'line', 'token'), leaves)
    (out / 'image.txt').write_text(
        f'Windows x64 PE:{identity[0]:08x}:{identity[1]:08x}\n{exe}\n'
        f'sha256={hashlib.sha256(image.raw).hexdigest()}\n', encoding='utf-8')


if __name__ == '__main__':
    main()
