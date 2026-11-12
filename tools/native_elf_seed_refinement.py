"""Retain ELF reference evidence when the installed game advances.

Called only by the normal build. Instruction windows are derived exclusively
from the frozen 53.16 seed; the installed game never replaces that reference.
"""
from __future__ import annotations

import bisect
from dataclasses import dataclass
from pathlib import Path
import struct

from native_pe_seed_refinement import (
    Reader, Pattern, GENERATED, _decode, _windows, _leaves, _opcode, _invalid,
)
from native_elf_coordinates import collect
from pe_instruction_match import _branch_displacement


@dataclass
class Catalog:
    build: bytes
    digest: bytes
    required: dict
    layouts: list
    patterns: list
    tables: list
    imports: list
    contracts: list


def _stocks_fragments(root):
    """Read the existing ELF routine fragments, excluding trailing padding."""
    from native_pe_coordinates import _TOKEN, _windows_source, _select_search_element, _pairs, _parts, _number
    path = root / 'src/native_stocks_search_profile.inc'
    text = _windows_source(path.read_text(), {'__linux__', '__GNUC__', '__x86_64__'})
    tokens = _select_search_element(path.name, _TOKEN.findall(text), elf=True)
    pairs = _pairs(tokens)
    patterns, required = [], {}
    for begin, end in pairs.items():
        if begin >= end or tokens[begin] != '{': continue
        fields = _parts(tokens, pairs, begin + 1, end)
        if len(fields) != 3: continue
        first, last = (_number(tokens[a:b]) for a, b in fields[:2])
        if first is None or last is None or not 0x400000 < first < last: continue
        left, right = fields[2]
        if tokens[left] != '{': continue
        fragments = []
        for a, b in _parts(tokens, pairs, left + 1, right - 1):
            if tokens[a] != '{': break
            entry = _parts(tokens, pairs, a + 1, b - 1)
            if len(entry) != 2: break
            offset = _number(tokens[slice(*entry[0])])
            x, y = entry[1]
            if offset is None or tokens[x] != '{': break
            raw = [_number(tokens[c:d]) for c, d in _parts(tokens, pairs, x + 1, y - 1)]
            if not raw or any(v is None or not 0 <= v <= 255 for v in raw): break
            fragments.append((offset, bytes(raw)))
        else:
            origin = first + 0x400000
            required[origin] = 1
            for offset, raw in fragments:
                required[origin + offset] = len(raw)
                patterns.append((Pattern(origin + offset, 1, raw, bytes(len(raw)), ()), origin))
    if len({owner for _, owner in patterns}) != 2:
        raise RuntimeError('Cannot retain both ELF Stocks filter routine declarations')
    decoded = _decode([p for p, _ in patterns], Path('/usr/bin/objdump'), root)
    from pe_instruction_match import _memory_displacement
    result = []
    for index, (pattern, owner) in enumerate(patterns):
        mask, fixups = bytearray(pattern.mask), []
        for position, raw, assembly in decoded.get(index, []):
            branch = _branch_displacement(raw)
            memory = _memory_displacement(raw) if '[' in assembly else None
            if branch:
                offset, width = branch
                target = pattern.reference + position + len(raw) + int.from_bytes(raw[offset:offset + width], 'little', signed=True)
                fixups.append((position + offset, width, position + len(raw), target, 0x100))
                mask[position + offset:position + offset + width] = b'\x01' * width
            elif memory and memory[1]:
                offset = memory[0]
                target = pattern.reference + position + len(raw) + int.from_bytes(raw[offset:offset + 4], 'little', signed=True)
                fixups.append((position + offset, 4, position + len(raw), target, 0))
                mask[position + offset:position + offset + 4] = b'\x01' * 4
        result.append((Pattern(pattern.reference, 1, pattern.raw, bytes(mask), tuple(fixups)), owner))
    return result, required


def read(content):
    source = Reader(content)
    if source.take(8) != b'DFCNEL01' or source.number() != 1 or source.number() != 2:
        raise RuntimeError('ELF reference retention requires the packaged schema-1 seed')
    catalogs = []
    for _ in range(2):
        build, digest = source.blob(), source.take(32)
        required = dict(struct.unpack('<II', source.take(8)) for _ in range(source.number()))
        layouts = [struct.unpack('<II', source.take(8)) for _ in range(source.number())]
        patterns = []
        for _ in range(source.number()):
            reference, flags, owner = source.number(), source.number(), source.number()
            raw, mask = source.blob(), source.blob()
            fixups = tuple(struct.unpack('<IIIII', source.take(20)) for _ in range(source.number()))
            if not raw or len(raw) != len(mask) or any(value > 1 for value in mask):
                raise RuntimeError('Invalid retained ELF instruction evidence')
            if not flags & GENERATED:
                patterns.append((Pattern(reference, flags, raw, mask, fixups), owner))
        tables = []
        for _ in range(source.number()):
            address, name = source.number(), source.blob()
            slots = [source.number() for _ in range(source.number())]
            tables.append((address, name, slots))
        imports = [(source.number(), source.blob(), source.blob(), source.number())
                   for _ in range(source.number())]
        contracts = [(source.blob(), source.number(), source.number(), source.number())
                     for _ in range(source.number())]
        catalogs.append(Catalog(build, digest, required, layouts, patterns, tables, imports, contracts))
    if source.at != len(content):
        raise RuntimeError('Unexpected retained ELF reference suffix')
    if (catalogs[0].build != b'bcc6789e6fb477b785a2b02be80b8b1b054ff88c' or
            catalogs[1].build != b'f45d1ee1b60004b61116fcaaf96602b305170619'):
        raise RuntimeError('ELF evidence must retain the reviewed Steam 53.16 executable/library identities')
    return catalogs


def write(catalogs):
    output = bytearray(b'DFCNEL01' + struct.pack('<II', 1, len(catalogs)))

    def number(value):
        output.extend(struct.pack('<I', value))

    def blob(value):
        number(len(value)); output.extend(value)

    for catalog in catalogs:
        blob(catalog.build); output.extend(catalog.digest)
        for spans in (sorted(catalog.required.items()), catalog.layouts):
            number(len(spans))
            for address, length in spans:
                number(address); number(length)
        number(len(catalog.patterns))
        for pattern, owner in catalog.patterns:
            number(pattern.reference); number(pattern.flags); number(owner)
            blob(pattern.raw); blob(pattern.mask); number(len(pattern.fixups))
            for fixup in pattern.fixups:
                output.extend(struct.pack('<IIIII', *fixup))
        number(len(catalog.tables))
        for address, name, slots in catalog.tables:
            number(address); blob(name); number(len(slots))
            for slot in slots:
                number(slot)
        number(len(catalog.imports))
        for address, kind, name, extent in catalog.imports:
            number(address); blob(kind); blob(name); number(extent)
        number(len(catalog.contracts))
        for name, address, size, kind in catalog.contracts:
            blob(name); number(address); number(size); number(kind)
    return output


def refine(root: Path, path: Path):
    if not path.is_file():
        raise RuntimeError(f'The installed ELF is newer than the reference and its retained seed is absent: {path}')
    original = path.read_bytes()
    catalogs = read(original)
    main = catalogs[0]
    stocks, stocks_required = _stocks_fragments(root)
    known = {(p.reference, p.raw) for p, _ in main.patterns}
    main.patterns.extend((p, owner) for p, owner in stocks if (p.reference, p.raw) not in known)
    # All later consumers must be backed by retained instruction bytes or the
    # existing reviewed edition map, rather than a replacement executable.
    edition_text = (root / 'src/native_elf_build_bindings.inc').read_text(encoding='utf-8')
    ranges_text = edition_text.split('native_elf_edition_bytes', 1)[0]
    ranges = [tuple(int(value, 16) for value in row) for row in re_ranges(ranges_text)]
    starts = [row[0] for row in ranges]
    consumed = collect(root)
    consumed.update(stocks_required)
    for _, owner in stocks:
        main.required[owner] = stocks_required[owner]
    main.required = {address: length for address, length in main.required.items() if address in consumed}
    for address, length in consumed.items():
        if address < 0x400000:
            continue  # RVA operands are also collected in their ELF VA form.
        if main.required.get(address, 0) >= length:
            continue
        backed = any(pattern.reference <= address and address + length <= pattern.reference + len(pattern.raw)
                     for pattern, _ in main.patterns)
        index = bisect.bisect_right(starts, address) - 1
        if not backed and (index < 0 or address + length > ranges[index][1]):
            raise RuntimeError(f'No retained ELF reference evidence for consumer {address:#x}+{length:#x}')
        main.required[address] = max(length, main.required.get(address, 0))
    for catalog in catalogs:
        catalog.patterns = [(Pattern(pattern.reference, 1 if pattern.flags == 3 else pattern.flags,
            pattern.raw, pattern.mask, pattern.fixups), owner) for pattern, owner in catalog.patterns]
        patterns = [pattern for pattern, _ in catalog.patterns]
        decoded = _decode(patterns, Path('/usr/bin/objdump'), root)
        entries = {slot for _, _, slots in catalog.tables for slot in slots if slot}
        for index, rows in decoded.items():
            for position, raw, assembly in rows:
                branch = _branch_displacement(raw)
                if branch and _opcode(raw) == 0xe8 and not _invalid((position, raw, assembly)):
                    offset, width = branch
                    target = patterns[index].reference + position + len(raw) + int.from_bytes(
                        raw[offset:offset + width], 'little', signed=True)
                    if 0 < target < 0x4000000:
                        entries.add(target)
        targets = dict(catalog.required)
        for entry in entries:
            targets.setdefault(entry, 1)
        for pattern in patterns:
            targets.setdefault(pattern.reference, 1)
        target_starts, entry_starts = sorted(targets), sorted(entries)
        additions = {}
        for index, rows in decoded.items():
            pattern, owner = catalog.patterns[index]
            values = list(_windows(pattern, rows, targets, target_starts, entries, 0x4000000))
            first = bisect.bisect_left(entry_starts, pattern.reference)
            last = bisect.bisect_left(entry_starts, pattern.reference + len(pattern.raw))
            values.extend(_leaves(pattern, rows, entry_starts[first:last], 0x4000000))
            for value in values:
                additions.setdefault(value, owner)
        catalog.patterns.extend(sorted(additions.items(), key=lambda pair: (
            pair[0].reference, pair[0].flags, len(pair[0].raw), pair[0].raw)))
        if len(catalog.patterns) > 100000:
            raise RuntimeError('Retained ELF instruction windows exceed the runtime capacity')
        print(f'ELF reference {catalog.build.decode()}: {len(catalog.required)} resources; '
              f'{len(patterns)} original patterns and {len(additions)} instruction windows.', flush=True)
    output = write(catalogs)
    if output != original:
        candidate = path.with_name(path.name + '.publish')
        try:
            candidate.write_bytes(output)
            candidate.replace(path)
        finally:
            candidate.unlink(missing_ok=True)


def re_ranges(text):
    import re
    return re.findall(r'\{0x([0-9a-f]+), 0x([0-9a-f]+), 0x([0-9a-f]+)\}', text)


def _state(reader):
    size = reader.number()
    ranges = [struct.unpack('<III', reader.take(12)) for _ in range(reader.number())]
    changes = {reader.number(): tuple(reader.take(2)) for _ in range(reader.number())}
    return size, ranges, changes


def _resolve(ranges, address, length=1):
    index = bisect.bisect_right(ranges, (address, 0x100000000, 0x100000000)) - 1
    if index >= 0 and address + length <= ranges[index][1]:
        begin, _, target = ranges[index]
        return target + address - begin
    return 0


def _write_states(states):
    output = bytearray(b'DFCNLS01' + struct.pack('<I', 1))
    for size, ranges, changes in states:
        output.extend(struct.pack('<II', size, len(ranges)))
        for row in ranges:
            output.extend(struct.pack('<III', *row))
        output.extend(struct.pack('<I', len(changes)))
        for address, values in sorted(changes.items()):
            output.extend(struct.pack('<I', address) + bytes(values))
    return output


def _semantic_points(reference, image, pairs, missing):
    """Compiler register allocation is not part of a caption's provenance.

    Only return identities and the two material-renderer declarations use
    this path. Patch relays continue to require exact register operands.
    """
    import difflib
    import re
    from collections import Counter
    from pe_instruction_match import _instruction_key
    registers = re.compile(r'\b(?:r(?:[abcd]x|[sd]i|[sb]p|[89]|1[0-5])|e(?:[abcd]x|[sd]i|[sb]p)|'
                           r'r(?:[89]|1[0-5])[dwb]|[abcd][xlh]|[sd]il|[sb]pl)\b')
    def key(owner, row):
        text = _instruction_key(owner, row)[1]
        return registers.sub('reg', text)
    evidence = {}
    for (begin, end), (native, native_end) in pairs:
        left = reference.rows.get(begin, [])
        right = [row for row in image.rows.get(native, []) if row[0] < native_end]
        if not left or not right: continue
        a, b = [key(reference, row) for row in left], [key(image, row) for row in right]
        width = 6
        ac = Counter(tuple(a[i:i + width]) for i in range(len(a) - width + 1))
        bc = Counter(tuple(b[i:i + width]) for i in range(len(b) - width + 1))
        for block in difflib.SequenceMatcher(None, a, b, autojunk=False).get_matching_blocks():
            if block.size < width: continue
            if not any(ac[tuple(a[i:i + width])] == bc[tuple(a[i:i + width])] == 1
                       for i in range(block.a, block.a + block.size - width + 1)): continue
            for offset in range(block.size):
                old, new = left[block.a + offset], right[block.b + offset]
                length = missing.get(old[0])
                if length == 1:
                    evidence.setdefault(old[0], set()).add(new[0])
                elif old[0] in (0xd8e33e, 0xd8ebf0) and length:
                    rows = list(zip(left[block.a + offset:block.a + block.size], right[block.b + offset:block.b + block.size]))
                    if rows and rows[-1][0][0] + len(rows[-1][0][1]) >= old[0] + length and all(
                            y[0] - x[0] == new[0] - old[0] and len(x[1]) == len(y[1]) for x, y in rows):
                        evidence.setdefault(old[0], set()).add(new[0])
                if _opcode(old[1]) == 0xe8 and missing.get(old[0] + len(old[1])) == 1:
                    evidence.setdefault(old[0] + len(old[1]), set()).add(new[0] + len(new[1]))
    return evidence


def _rtti(image, name):
    """Primary Itanium table, identified by its typeinfo and zero top offset."""
    if hasattr(image, 'vtable_index'):
        return image.vtable_index.get(name, [])
    types, tables = {}, {}
    regions = []
    for begin, _, offset, length, flags in image.segments:
        if flags & 1: continue
        words = [value[0] for value in struct.iter_unpack('<Q', image.data[offset:offset + length // 8 * 8])]
        regions.append((begin, words))
        for index, pointer in enumerate(words):
            owner = image.section(pointer)
            if not owner or owner[4] & (0x20000000 | 0x80000000): continue
            try:
                raw = image.read(pointer, min(4096, owner[0] + owner[3] - pointer)).split(b'\0', 1)[0]
            except ValueError:
                continue
            if raw and (raw[0] == 78 or 48 <= raw[0] <= 57) and all(
                    48 <= byte <= 57 or 65 <= byte <= 90 or 97 <= byte <= 122 or byte == 95 for byte in raw):
                types[begin + index * 8 - 8] = raw.decode()
    for begin, words in regions:
        for index in range(len(words) - 2):
            methods = words[index + 2:index + 6]
            code = [image.section(pointer) for pointer in methods if pointer]
            if (not words[index] and code and all(section and section[4] & 0x20000000 for section in code)
                    and (label := types.get(words[index + 1]))):
                tables.setdefault(label, []).append(begin + index * 8 + 16)
    image.vtable_index = tables
    return tables.get(name, [])


def _library_media_ranges(catalog, image, missing, decoded, existing, translations, instruction_changes):
    # The reviewed 53.17 library retains these function sizes/ABIs and adds
    # two int32 audio settings before init's font/atlas tail. Admit only those
    # +8 disp32 changes, with every other non-address byte unchanged.
    if image.build != '7f1f71e5c17e2aa97c9f23ffddf63e63d186af45': return
    from pe_instruction_match import _memory_displacement
    symbols = {address: name.decode() for name, address, _, kind in catalog.contracts if kind == 2}
    for index, (pattern, _) in enumerate(catalog.patterns):
        if pattern.reference not in missing or pattern.reference not in symbols: continue
        target, size, _ = image.symbols[symbols[pattern.reference]]
        if size != len(pattern.raw): continue
        native = image.read(target, size)
        allowed = bytearray(pattern.mask)
        for offset, raw, assembly in decoded.get(index, []):
            if '[' not in assembly: continue
            operand = _memory_displacement(raw)
            if not operand or operand[1]: continue
            position = offset + operand[0]
            old = int.from_bytes(pattern.raw[position:position + 4], 'little', signed=True)
            new = int.from_bytes(native[position:position + 4], 'little', signed=True)
            if old >= 0xd8 and new == old + 8:
                allowed[position:position + 4] = b'\x01' * 4
        if any(a != b and not mask for a, b, mask in zip(pattern.raw, native, allowed)): continue
        stop = pattern.reference + size
        existing[:] = [row for row in existing if not (row[0] < stop and pattern.reference < row[1])]
        for address in list(instruction_changes):
            if pattern.reference <= address < stop: del instruction_changes[address]
        existing.append((pattern.reference, pattern.reference + size, target))
        translations.update({pattern.reference + offset: (a, b)
                             for offset, (a, b) in enumerate(zip(pattern.raw, native)) if a != b})


def generate_current(generator, executable, destination, env):
    """Compose the installed edition from retained instructions and ELF identities."""
    import re
    import subprocess
    import tempfile
    from types import SimpleNamespace
    from build_elf_runtime_seed import SeedImage
    from pe_instruction_match import match_instruction_regions
    root = Path(__file__).resolve().parents[1]
    seed = root / 'data/runtime/native-addresses/elf-seed.bin'
    catalogs = read(seed.read_bytes())
    paths = [Path(executable), Path(executable).parent / 'libg_src_lib.so']
    import hashlib
    if destination.is_file():
        cached = destination.read_bytes()
        identities = b''.join(hashlib.sha256(path.read_bytes()).digest() for path in [*paths, seed])
        if (cached[:12] == b'DFCNLA01' + struct.pack('<I', 1) and cached[12:108] == identities and
                cached[-32:] == hashlib.sha256(cached[:-32]).digest()):
            print('Reusing native ELF edition bindings for the installed executable/library and current seed.', flush=True)
            return
    images = None
    supplements = None
    with tempfile.TemporaryDirectory(prefix='.dfcn-elf-edition-', dir=root) as temporary:
        output = Path(temporary) / 'edition.bin'
        additions = Path(temporary) / 'instructions.bin'
        arguments = [str(generator), str(seed), *map(str, paths), str(output)]
        for _ in range(8):
            result = subprocess.run(arguments + ([str(additions)] if supplements else []), env=env,
                                    cwd=root, text=True, capture_output=True)
            if result.returncode == 0:
                candidate = destination.with_name(destination.name + '.publish')
                try:
                    candidate.write_bytes(output.read_bytes())
                    candidate.replace(destination)
                finally:
                    candidate.unlink(missing_ok=True)
                print(result.stdout.strip(), flush=True)
                return
            if result.returncode != 3 or not output.is_file():
                raise RuntimeError(result.stderr.strip() or result.stdout.strip() or 'Native ELF edition generation failed')
            reader = Reader(output.read_bytes())
            if reader.take(8) != b'DFCNLA01' or reader.number() != 1:
                raise RuntimeError('Invalid native ELF edition generation output')
            reader.take(96)
            partial = [_state(reader), _state(reader)]
            if images is None:
                images = [SeedImage(path) for path in paths]
                for image in images:
                    image.disassemble()
                    image.rows = image.instructions
                    from build_elf_runtime_seed import _absolute_operand
                    image.absolute_targets = {operand[2] for rows in image.rows.values() for row in rows
                                              if (operand := _absolute_operand(image, row))}
                supplements = [(image.size, [], {}) for image in images]
            progress = False
            for index, (catalog, image, state) in enumerate(zip(catalogs, images, partial)):
                _, bound, _ = state
                missing = {address: length for address, length in catalog.required.items()
                           if not _resolve(bound, address, length)}
                if not missing: continue
                patterns = [pattern for pattern, _ in catalog.patterns]
                decoded = _decode(patterns, Path('/usr/bin/objdump'), root)
                pairs = []
                source_rows = {}
                owners = {}
                entry_owners = {owner for _, owner in catalog.patterns}
                caller_owners = {}
                for position, (pattern, owner) in enumerate(catalog.patterns):
                    if position not in decoded: continue
                    rows = [(pattern.reference + offset, raw, asm) for offset, raw, asm in decoded[position]]
                    if (pattern.reference not in source_rows or
                            rows[-1][0] + len(rows[-1][1]) > source_rows[pattern.reference][-1][0] + len(source_rows[pattern.reference][-1][1])):
                        source_rows[pattern.reference] = rows
                    target = _resolve(bound, pattern.reference)
                    if target:
                        at = bisect.bisect_right(image.starts, target) - 1
                        if at >= 0 and target < image.functions[at][1]:
                            owners.setdefault(owner, set()).add(image.functions[at])
                    for offset, width, next_, reference_target, kind in pattern.fixups:
                        if not kind & 0x100 or reference_target not in entry_owners: continue
                        operand = _resolve(bound, pattern.reference + offset, width)
                        if not operand: continue
                        value = int.from_bytes(image.read(operand, width), 'little', signed=(kind & 0xff) == 0)
                        target = operand + next_ - offset + value if kind & 0xff == 0 else value
                        at = bisect.bisect_left(image.starts, target)
                        if at < len(image.starts) and image.starts[at] == target:
                            caller_owners.setdefault(reference_target, set()).add(image.functions[at])
                for owner, candidates in caller_owners.items():
                    if len(candidates) == 1: owners[owner] = candidates
                for owner in entry_owners:
                    target = _resolve(bound, owner)
                    at = bisect.bisect_left(image.starts, target)
                    if target and at < len(image.starts) and image.starts[at] == target:
                        owners[owner] = {image.functions[at]}
                # A changed routine can lose every equal byte window while
                # retaining its callees and literal/global identities. Require
                # a unique owner supported by several independent operands.
                if not hasattr(image, 'operand_owners'):
                    image.operand_owners = {}
                    for address, target in {**image.data_references, **image.call_references}.items():
                        at = bisect.bisect_right(image.starts, address) - 1
                        if at >= 0 and address < image.functions[at][1]:
                            image.operand_owners.setdefault(target, set()).add(image.functions[at])
                for pattern, owner in catalog.patterns:
                    if owners.get(owner) or not any(pattern.reference <= address < pattern.reference + len(pattern.raw)
                                                    for address in missing): continue
                    operands = {target for _, _, _, target, _ in pattern.fixups
                                if not owner <= target < pattern.reference + len(pattern.raw)}
                    hits = {}
                    for operand in operands:
                        native = _resolve(bound, operand)
                        if not native: continue
                        for candidate in image.operand_owners.get(native, ()):
                            hits[candidate] = hits.get(candidate, 0) + 1
                    ranked = sorted(hits.items(), key=lambda pair: pair[1], reverse=True)
                    if ranked and ranked[0][1] >= 4 and (len(ranked) == 1 or ranked[0][1] >= ranked[1][1] + 3):
                        owners[owner] = {ranked[0][0]}
                for table, name, slots in catalog.tables:
                    targets = _rtti(image, name.decode()) if index == 0 else []
                    if len(targets) != 1: continue
                    for slot, reference in enumerate(slots):
                        if reference:
                            target = struct.unpack('<Q', image.read(targets[0] + slot * 8, 8))[0]
                            at = bisect.bisect_left(image.starts, target)
                            if at < len(image.starts) and image.starts[at] == target:
                                owners.setdefault(reference, set()).add(image.functions[at])
                if index == 1:
                    for name, reference, _, kind in catalog.contracts:
                        symbol = image.symbols.get(name.decode())
                        if kind == 2 and symbol:
                            target, length, _ = symbol
                            owners[reference] = {(target, target + length)}
                elif index == 0:
                    # Retained inventories identify virtual option providers
                    # by their class and actual slot, independent of code size.
                    if not hasattr(image, 'inventory_owners'):
                        image.inventory_owners = {}
                        for path in (root / 'data/extracted/adventure-inventory').glob('*.asm'):
                            with path.open() as stream: header = stream.readline()
                            match = re.search(r'native unwind (0x[0-9a-f]+)', header)
                            if not match: continue
                            reference = int(match[1], 16)
                            for name, slot in re.findall(r'(adventure_[a-z0-9_]+st)\+(0x[0-9a-f]+)', header):
                                tables = _rtti(image, str(len(name)) + name)
                                if len(tables) != 1: continue
                                target = struct.unpack('<Q', image.read(tables[0] + int(slot, 16), 8))[0]
                                at = bisect.bisect_left(image.starts, target)
                                if at < len(image.starts) and image.starts[at] == target:
                                    image.inventory_owners.setdefault(reference, set()).add(image.functions[at])
                    owners.update(image.inventory_owners)
                for pattern, owner in catalog.patterns:
                    if pattern.reference not in source_rows or not any(
                            pattern.reference <= address <= pattern.reference + len(pattern.raw) for address in missing):
                        continue
                    candidates = owners.get(owner, set())
                    if len(candidates) != 1: continue
                    target, end = next(iter(candidates))
                    pairs.append(((pattern.reference, pattern.reference + len(pattern.raw)), (target, end)))
                print(f'Composing ELF {"game" if index == 0 else "graphics"}: '
                      f'{len(missing)} remaining spans, {len(pairs)} anchored instruction regions.', flush=True)
                absolute_targets = {fixup[3] for pattern in patterns for fixup in pattern.fixups if fixup[4] & 0xff in (1, 2)}
                call_targets = {fixup[3] for pattern in patterns for fixup in pattern.fixups}
                canonical, reverse = {}, {}
                for target in call_targets:
                    native = _resolve(bound, target)
                    if native:
                        canonical[target] = target
                        reverse.setdefault(native, set()).add(target)
                image.canonical_calls = {native: next(iter(values)) for native, values in reverse.items() if len(values) == 1}
                image.frame_operands = True
                canonical = {target: target for target in canonical if _resolve(bound, target) in image.canonical_calls}
                reference = SimpleNamespace(base=0, rows=source_rows,
                    absolute_targets=absolute_targets, canonical_calls=canonical, frame_operands=True,
                    section=lambda address: (0, 0x4000000, 0, 0, 0))
                evidence, original = {}, {}
                for pattern in patterns:
                    for address, length in missing.items():
                        if pattern.reference <= address and address + length <= pattern.reference + len(pattern.raw):
                            for offset in range(length): original[address + offset] = pattern.raw[address + offset - pattern.reference]
                for pair in pairs:
                    matched, _ = match_instruction_regions(reference, image, Path('/usr/bin/objdump'), [pair], missing)
                    for address, length in missing.items():
                        for begin, end, target in matched:
                            if begin <= address and address + length <= end:
                                native = target + address - begin
                                if any(old_begin < address + length and address < old_end and
                                       native - address != old_native - old_begin for old_begin, old_end, old_native in bound):
                                    continue
                                evidence.setdefault(address, set()).add(native)
                            elif address == end and length == 1:
                                previous = next((row for row in source_rows[pair[0][0]]
                                                 if row[0] + len(row[1]) == end), None)
                                if previous and _opcode(previous[1]) == 0xe8:
                                    evidence.setdefault(address, set()).add(target + end - begin)
                for address, targets in _semantic_points(reference, image, pairs, missing).items():
                    if address not in evidence:
                        evidence[address] = targets
                ranges, changes = [], {}
                for address, targets in evidence.items():
                    length = missing[address]
                    if len(targets) != 1 or (length != 1 and any(address + offset not in original for offset in range(length))): continue
                    target = next(iter(targets))
                    ranges.append((address, address + length, target))
                    for offset, value in enumerate(image.read(target, length)):
                        if address + offset in original and original[address + offset] != value:
                            changes[address + offset] = original[address + offset], value
                size, existing, translations = supplements[index]
                previous = list(existing)
                for address, length in missing.items():
                    if length == 1 and len(owners.get(address, set())) == 1:
                        existing.append((address, address + 1, next(iter(owners[address]))[0]))
                if index == 0:
                    if image.build == 'f9d13d46a8b7e2e8b70c380127decf53c43581bd':
                        # Reviewed 53.17 producers: aligned item type/subtype
                        # caption, New temple, adventure Okay/More, and W.
                        # The last changed from an inline character to a
                        # literal append; it retains its own addst return.
                        reviewed = {0xd8ebf0: 0xd91220, 0xda4c5e: 0xdadfcf,
                                    0x11b30c3: 0x11bb4a3, 0x11b3c4b: 0x11bc02b,
                                    0x11c1f6f: 0x11ca345, 0x168128e: 0x168d68e,
                                    0xda7c46: 0xda5fb6, 0xda8467: 0xda67d7,
                                    0xdaac85: 0xda9005}
                        for address, target in reviewed.items():
                            length = missing.get(address)
                            if not length: continue
                            existing.append((address, address + length, target))
                            changes.update({address + offset: (original[address + offset], value)
                                            for offset, value in enumerate(image.read(target, length))
                                            if address + offset in original and original[address + offset] != value})
                    # A type's primary table is a data identity even when its
                    # render/feed body changed. Virtual call consumers retain
                    # their separate function/instruction ABI requirements.
                    for table, name, slots in catalog.tables:
                        if table not in missing: continue
                        targets = _rtti(image, name.decode())
                        if len(targets) == 1:
                            existing.append((table, table + len(slots) * 8, targets[0]))
                    # Read-only rel32 jump tables follow their case labels,
                    # not a constant section delta. Establish the complete
                    # table from independently mapped branch destinations.
                    for pattern, _ in catalog.patterns:
                        if not pattern.flags & 4 or pattern.reference not in missing or len(pattern.raw) % 4: continue
                        destinations = [pattern.reference + value[0] for value in struct.iter_unpack('<i', pattern.raw)]
                        known = [(slot, _resolve(bound, target)) for slot, target in enumerate(destinations)]
                        known = [(slot, target) for slot, target in known if target]
                        if len(known) < 3: continue
                        candidates = []
                        first_slot, first_target = known[0]
                        for start, _, offset, length, flags in image.segments:
                            if flags & 3: continue
                            for position in range(0, length - len(pattern.raw) + 1, 4):
                                native = start + position
                                if native + struct.unpack_from('<i', image.data, offset + position + first_slot * 4)[0] != first_target: continue
                                if all(native + struct.unpack_from('<i', image.data, offset + position + slot * 4)[0] == target
                                       for slot, target in known): candidates.append(native)
                        if len(candidates) == 1:
                            native = candidates[0]
                            existing.append((pattern.reference, pattern.reference + len(pattern.raw), native))
                            changes.update({pattern.reference + offset: (old, new)
                                            for offset, (old, new) in enumerate(zip(pattern.raw, image.read(native, len(pattern.raw)))) if old != new})
                for begin, end, native in ranges:
                    if any(old_begin < end and begin < old_end and native - begin != old_native - old_begin
                           for old_begin, old_end, old_native in [*bound, *existing]): continue
                    existing.append((begin, end, native))
                if index == 0:
                    # 53.17 adds media fields in init (owned by g_src), while
                    # these game/world objects retain their 53.16 layouts.
                    # Roots still require the scanner's independent producers.
                    if image.build == 'f9d13d46a8b7e2e8b70c380127decf53c43581bd':
                        for address, length in missing.items():
                            for object_, extent in catalog.layouts:
                                target = _resolve(bound, object_)
                                if target and object_ <= address and address + length <= object_ + extent:
                                    existing.append((address, address + length, target + address - object_))
                else:
                    _library_media_ranges(catalog, image, missing, decoded, existing, translations, changes)
                from build_pe_5317_bindings import _merge
                merged = _merge(existing)
                progress = progress or merged != previous
                translations.update(changes)
                # Byte translations must be inside an admitted linear range.
                translations = {address: values for address, values in translations.items() if _resolve(merged, address)}
                supplements[index] = size, merged, translations
            if not progress:
                details = []
                for catalog, image, state in zip(catalogs, images, partial):
                    for address, length in catalog.required.items():
                        if _resolve(state[1], address, length): continue
                        own = {owner for pattern, owner in catalog.patterns if pattern.reference <= address <= pattern.reference + len(pattern.raw)}
                        mapped = set()
                        for pattern, owner in catalog.patterns:
                            if owner not in own: continue
                            target = _resolve(state[1], pattern.reference)
                            at = bisect.bisect_right(image.starts, target) - 1
                            if target and at >= 0 and target < image.functions[at][1]: mapped.add(image.functions[at])
                        details.append(f'{address:#x}+{length}: owners {sorted(own)} -> {sorted(mapped)}')
                details.append('ELF game root: ' + hex(_resolve(partial[0][1], 0x26f6260)))
                raise RuntimeError(result.stderr.strip() + '\n' + '\n'.join(details))
            additions.write_bytes(_write_states(supplements))
        raise RuntimeError('Native ELF edition composition did not converge')
