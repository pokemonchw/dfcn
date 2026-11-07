"""Extend the shipped reference evidence for runtime ABI discovery.

Called by build.py, including builds without the original reference executable.
The shipped seed owns the reference bytes. The fixed native disassembler only
decodes those bytes; no installed game's addresses become reference coordinates.
"""
from __future__ import annotations

import bisect
import hashlib
import json
import pickle
from pathlib import Path
import re
import struct
import subprocess
import tempfile
import time

from pe_instruction_match import _branch_displacement, _opcode_start


class Reader:
    def __init__(self, content):
        self.content, self.at = content, 0

    def take(self, count):
        stop = self.at + count
        if stop > len(self.content):
            raise RuntimeError('Truncated reference discovery seed')
        result = self.content[self.at:stop]
        self.at = stop
        return result

    def number(self):
        return struct.unpack('<I', self.take(4))[0]

    def blob(self):
        return self.take(self.number())


def _read(path):
    reader = Reader(path.read_bytes())
    if reader.take(8) != b'DFCNPE01':
        raise RuntimeError('Invalid reference discovery seed')
    schema = reader.number()
    if schema not in (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13):
        raise RuntimeError(f'Unsupported reference discovery schema {schema}')
    required = [struct.unpack('<II', reader.take(8)) for _ in range(reader.number())]
    known = []
    for _ in range(reader.number()):
        label = reader.blob()
        identity = reader.take(40)
        ranges = reader.take(reader.number() * 12)
        changes = reader.take(reader.number() * 6)
        known.append((label, identity, ranges, changes))
    patterns = []
    for _ in range(reader.number()):
        reference, flags = reader.number(), reader.number()
        owner = reader.number() if schema >= 2 else 0
        raw, mask = reader.blob(), reader.blob()
        fixups = [struct.unpack('<IIIII', reader.take(20)) for _ in range(reader.number())]
        if not flags & 24:
            patterns.append((reference, flags, owner, raw, mask, fixups))
    tables = []
    for _ in range(reader.number()):
        reference = reader.number()
        usage = reader.number() if schema >= 4 else 0
        name = reader.blob()
        slots = reader.take(reader.number() * 4)
        tables.append((reference, name, slots))
    imports = [(reader.number(), reader.blob(), reader.blob()) for _ in range(reader.number())]
    if schema >= 2:
        reader.take(reader.number() * 16)
    if schema >= 3:
        reader.blob()
        reader.blob()
    if schema >= 5:
        reader.blob()
    if schema >= 6:
        reader.blob()
    if schema >= 7:
        reader.blob()
    if schema >= 8:
        reader.blob()
    if schema >= 9:
        reader.blob()
    if schema >= 10:
        reader.blob()
    if schema >= 11:
        reader.blob()
    if schema >= 12:
        reader.blob()
    if schema >= 13:
        reader.blob()
    if reader.at != len(reader.content):
        raise RuntimeError('Unexpected reference discovery seed suffix')
    return required, known, patterns, tables, imports


def _graphics_fields(root):
    """Read the canonical ABI declarations, including MSVC alignment.

    Padding has no semantic identity. Exposed scalar/array storage is split
    into independently addressed elements, so growing an enum cannot shift
    all subsequent entries through a single blanket array binding.
    """
    text = (root / 'compat/graphics_abi.h').read_text(encoding='utf-8')
    body = text.split('struct graphicst {', 1)[1].split('\n};', 1)[0]
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', body, flags=re.S)
    scalar = {'std::uint8_t': (1, 1), 'std::int8_t': (1, 1), 'bool': (1, 1),
              'std::int16_t': (2, 2), 'std::int32_t': (4, 4), 'std::uint32_t': (4, 4),
              'long': (4, 4), 'float': (4, 4), 'std::int64_t': (8, 8)}
    offset = 0
    fields = []
    declarations = {}
    consumers = '\n'.join(path.read_text(encoding='utf-8-sig') for path in (root / 'src').iterdir()
                          if path.suffix in ('.h', '.inc', '.cpp') and 'build_bindings' not in path.name)
    used_fields = set(re.findall(r'(?:\.|->)\s*([A-Za-z_]\w*)', consumers))
    for invocation in re.findall(r'\b(?:offsetof|DFCN_[A-Z_]+)\s*\([^\n;]*', consumers):
        used_fields.update(re.findall(r'\b[A-Za-z_]\w*\b', invocation))
    texture_fields = set(re.findall(r'DFCN_TEXTURE_FIELD\((\w+)\s*,', consumers))
    for declaration in body.split(';'):
        declaration = declaration.strip()
        if not declaration:
            continue
        match = re.fullmatch(r'([\w:]+)\s+(\*\s*)?(\w+)\s*((?:\[[0-9a-fx]+\])*)', declaration)
        if not match:
            raise RuntimeError(f'Unsupported canonical graphicst declaration: {declaration}')
        kind, pointer, name, dimensions = match.groups()
        size, alignment = (8, 8) if pointer else scalar[kind]
        offset = (offset + alignment - 1) & -alignment
        count = 1
        shape = [int(value, 0) for value in re.findall(r'\[([^]]+)\]', dimensions)]
        for value in shape:
            count *= value
        declarations[name] = (offset, size * count, shape)
        if 'alignment' not in name and not name.startswith('texture_storage_'):
            if name in ('texpos_button_main', 'texpos_button_building_info', 'tex'):
                stride = size * count // shape[0]
                for element in range(shape[0]):
                    required = name == 'tex' and element in (7, 8, 9)
                    fields.append((0x0264a3f0, offset + element * stride, stride, 5 if required else 4))
            else:
                used = name in used_fields
                if name.startswith('texpos_'):
                    used |= name[7:] in texture_fields
                fields.append((0x0264a3f0, offset, size * count, 5 if used else 4))
        offset += count * size
    expected = re.search(r'static_assert\(sizeof\(graphicst\)\s*==\s*(0x[0-9a-f]+|\d+)', text)
    if expected and (offset + 7) & -8 != int(expected[1], 0):
        raise RuntimeError('Canonical graphicst declaration size differs from its ABI contract')
    return fields, declarations


def _init_fields(root):
    """Export only the canonical init members actually borrowed by the UI."""
    import ast
    def number(text):
        node = ast.parse(text, mode='eval').body
        def value(part):
            if isinstance(part, ast.Constant) and isinstance(part.value, int):
                return part.value
            if isinstance(part, ast.BinOp) and isinstance(part.op, (ast.Add, ast.Sub)):
                return value(part.left) + (1 if isinstance(part.op, ast.Add) else -1) * value(part.right)
            raise RuntimeError('Unsupported native init declaration extent')
        return value(node)
    source = (root / 'src/native_runtime.h').read_text(encoding='utf-8')
    body = source.split('struct NativeUiSettingsAbi {', 1)[1].split('\n};', 1)[0]
    body = re.sub(r'/\*.*?\*/|//[^\n]*', '', body, flags=re.S)
    fields = [(0x023cd770, 0, 16, 1)]
    fields.extend((0x023cd770, offset, 4, 1) for offset in (0x14, 0x18, 0x3c, 0x50))
    fields.extend((0x02390290, offset, width, 1) for offset, width in ((0x8, 1), (0x38, 8), (0x338, 4), (0x348, 24)))
    fields.extend((0x023cd770, offset, 1024, 1) for offset in
                  (0xd8, 0x4d8, 0x8d8, 0x18d8, 0x1cd8, 0x20d8, 0x24d8, 0x28d8, 0x2cd8))
    offset = 0
    for declaration in body.split(';'):
        declaration = declaration.strip()
        if not declaration:
            continue
        match = re.fullmatch(r'(std::uint8_t|int32_t)\s+(.+)', declaration, re.S)
        if not match:
            raise RuntimeError(f'Unsupported native init declaration: {declaration}')
        size = 1 if match[1] == 'std::uint8_t' else 4
        for member in match[2].split(','):
            parsed = re.fullmatch(r'\s*(\w+)\s*((?:\[[^]]+\])*)\s*', member)
            if not parsed:
                raise RuntimeError(f'Unsupported native init member: {member}')
            offset = (offset + size - 1) & -size
            extent = size
            for dimension in re.findall(r'\[([^]]+)\]', parsed[2]):
                extent *= number(dimension)
            if not parsed[1].endswith('_storage'):
                fields.append((0x023cd770, offset, extent, 1))
            offset += extent
    return fields


def _unborrowed_texture_fields(profiles, fields):
    """Retain native texture operands beyond the host's borrowed graphics view.

    These named textures are read by whole renderer scopes even though the UI
    snapshot has no corresponding storage. Their addresses stay native; they
    must not be mistaken for an unknown member inside the full game object.
    """
    graphics = 0x0264a3f0
    occupied = [(offset, offset + width) for root, offset, width, _ in fields if root == graphics]
    borrowed_end = max(end for _, end in occupied)
    declarations = {}
    for profile in profiles:
        source = next((spec for spec in profile['canonical_types'] if spec['name'] == 'graphic'), None)
        if not source or not source.get('texture_members_complete'):
            continue
        for field in source['fields']:
            if (field.get('declaration_source') != 'official-graphics-header' or
                    not field['name'].startswith('texpos_') or field['offset'] < borrowed_end):
                continue
            array = field.get('array')
            count, stride = (array['count'], array['stride']) if array else (1, field['size'])
            if not count or not stride or count * stride != field['size']:
                continue
            for index in range(count):
                offset = field['offset'] + index * stride
                identity = (field['name'], index, stride)
                previous = declarations.setdefault(offset, identity)
                if previous != identity:
                    raise RuntimeError('Conflicting canonical texture declarations')
    fields.extend((graphics, offset, identity[2], 0) for offset, identity in sorted(declarations.items())
                  if not any(begin < offset + identity[2] and offset < end for begin, end in occupied))


def _graphics_tokens(root, declarations):
    from build_pe_runtime_seed import Writer
    stored = root / 'data/runtime/native-addresses/graphics-token-semantics.json'
    source = root.parent / 'dfcn-native-reference/linux-53.16/graphics.h'
    groups = [('texpos_button_main', 'InterfaceButtonMainType', 'INTERFACE_BUTTON_MAIN_'),
              ('texpos_button_building_info', 'InterfaceButtonBuildingInfoType', 'INTERFACE_BUTTON_BUILDING_INFO_')]
    if source.is_file():
        reference = re.sub(r'/\*.*?\*/|//[^\n]*', '', source.read_text(encoding='utf-8'), flags=re.S)
        arrays = []
        for field, enum, prefix in groups:
            match = re.search(r'enum\s+' + enum + r'\s*\{([^}]+)\}', reference)
            if not match:
                raise RuntimeError(f'Missing canonical graphics enum {enum}')
            tokens = []
            ordinal = 0
            for entry in match[1].split(','):
                entry = entry.strip()
                if not entry:
                    continue
                pieces = entry.split('=')
                name = pieces[0].strip()
                if len(pieces) == 2:
                    ordinal = int(pieces[1].strip(), 0)
                if name.startswith(prefix) and ordinal >= 0:
                    token_prefix = 'INTERFACE_BUTTON_' if field == 'texpos_button_building_info' else prefix
                    tokens.append({'index': ordinal, 'token': name[len(token_prefix):]})
                ordinal += 1
            arrays.append({'field': field, 'tokens': tokens})
        content = {'schema': 1, 'source': 'Bay 12 53.16 graphics.h canonical enum identities', 'arrays': arrays}
        encoded = json.dumps(content, ensure_ascii=False, indent=2) + '\n'
        if not stored.is_file() or stored.read_text(encoding='utf-8') != encoded:
            stored.write_text(encoded, encoding='utf-8')
    else:
        if not stored.is_file():
            raise RuntimeError('Canonical graphics token identities are unavailable')
        content = json.loads(stored.read_text(encoding='utf-8'))
    writer = Writer()
    writer.u32(2)
    writer.u32(len(content['arrays']))
    for array in content['arrays']:
        offset, size, shape = declarations[array['field']]
        count = shape[0]
        if [token['index'] for token in array['tokens']] != list(range(count)):
            raise RuntimeError(f'Canonical enum does not cover {array["field"]}')
        for value in (0x0264a3f0, offset, size // count, count):
            writer.u32(value)
        for token in array['tokens']:
            aliases = [token['token']]
            if array['field'] == 'texpos_button_main':
                aliases.append('BUTTON_' + token['token'])
            writer.u32(len(aliases))
            for alias in aliases:
                writer.text(alias)
    return writer.content


def _display_scopes(root, patterns, known):
    from build_pe_runtime_seed import Writer
    stored = root / 'data/runtime/native-addresses/graphics-display-scopes.json'
    if stored.is_file():
        scopes = json.loads(stored.read_text(encoding='utf-8'))['scopes']
    else:
        source = '\n'.join((root / 'src' / name).read_text(encoding='utf-8') for name in
                           ('native_dfhack_display_inputs.inc', 'native_dfhack_display_input_ui_profile.inc'))
        sites = {int(value, 16) for value in re.findall(r'native_pe_bytes\(0x([0-9a-f]+)', source)}
        cache = re.search(r'\bnative_texture_base\s*=\s*native_pe_address\(base,\s*(0x[0-9a-f]+)', source)
        if not sites or not cache:
            raise RuntimeError('Canonical display scope identities are unavailable')
        cache = int(cache[1], 0)
        functions = sorted((ref, ref + len(raw)) for ref, flags, _, raw, _, _ in patterns if flags & 2)
        starts = [begin for begin, _ in functions]
        scopes_by_owner = {}
        for site in sorted(sites | {cache}):
            index = bisect.bisect_right(starts, site) - 1
            if index < 0 or site >= functions[index][1]:
                raise RuntimeError(f'Canonical display instruction has no function scope: {site:#x}')
            owner = functions[index][0]
            scopes_by_owner[owner] = scopes_by_owner.get(owner, 0) | int(site == cache)
        scopes = [{'owner': owner, 'flags': flags} for owner, flags in sorted(scopes_by_owner.items())]
        stored.write_text(json.dumps({'schema': 1, 'scopes': scopes}, indent=2) + '\n', encoding='utf-8')
    from native_reference_semantics import normalize_reference_scopes
    scopes = normalize_reference_scopes(root, known, scopes)
    writer = Writer()
    writer.u32(1)
    writer.u32(len(scopes))
    for scope in scopes:
        writer.u32(scope['owner'])
        writer.u32(scope['flags'])
    return writer.content


def _instruction_fields(root, patterns, decoded, fields):
    """Retain opaque fields consumed by native display instruction selectors.

    Their reference object has padding in the C++ view, but the selected native
    instruction still owns an exact scalar access. Do not relocate an entire
    opaque region based on that one access.
    """
    display = '\n'.join(path.read_text(encoding='utf-8') for path in
                        (root / 'src').glob('native_dfhack_display_input*.inc'))
    selected = {int(value, 16) for value in re.findall(
        r'append\(native_pe_address\(base,\s*0x[0-9a-f]+\),\s*0x([0-9a-f]+)', display)}
    graphics_fields = [field for field in fields if field[0] == 0x0264a3f0]
    graphics_fields.sort(key=lambda field: field[1])
    starts = [field[1] for field in graphics_fields]
    def exposed(offset):
        index = bisect.bisect_right(starts, offset) - 1
        return index >= 0 and offset < graphics_fields[index][1] + graphics_fields[index][2]
    extent = max(offset + width for _, offset, width, _ in graphics_fields)
    additions = {}
    for index, rows in decoded.items():
        reference, _, _, raw, mask, fixups = patterns[index]
        positions = [row[0] for row in rows]
        for at, encoded_width, next_at, target, kind in fixups:
            offset = target - 0x0264a3f0
            if kind & 0x100 or not 0 <= offset < extent:
                continue
            if exposed(offset):
                continue
            row_index = bisect.bisect_right(positions, at) - 1
            if row_index < 0:
                continue
            position, encoded, assembly = rows[row_index]
            if at + encoded_width > position + len(encoded):
                continue
            operand = re.search(r'\b(BYTE|WORD|DWORD|QWORD|XMMWORD) PTR\b', assembly, re.I)
            width = {'BYTE': 1, 'WORD': 2, 'DWORD': 4, 'QWORD': 8, 'XMMWORD': 16}.get(
                operand[1].upper(), 0) if operand else 0
            required = offset in selected
            if required and not width:
                # LEA references establish an address, not the scalar extent.
                # Other accesses (including the selector itself) supply that.
                continue
            # An address-only relocation need not authorize borrowed data.
            flags = 5 if required else 0
            old_width, old_flags = additions.get(offset, (0, 0))
            additions[offset] = max(old_width, width if required else 1), old_flags | flags
    for offset in selected:
        if not exposed(offset) and offset not in additions:
            raise RuntimeError(f'Display selector lacks a scalar-width contract at graphics+{offset:#x}')
    for offset, (width, flags) in sorted(additions.items()):
        if not flags and any(begin <= offset and offset + width <= begin + size
                             for _, begin, size, _ in graphics_fields):
            continue
        if any(begin < offset + width and offset < begin + size for _, begin, size, _ in graphics_fields):
            raise RuntimeError(f'Overlapping native graphic operand contract at {offset:#x}')
        fields.append((0x0264a3f0, offset, width, flags))
        graphics_fields.append((0x0264a3f0, offset, width, flags))
    fields.sort()


def _access_widths(patterns, decoded):
    """Carry the exact reference memory operand extent into runtime evidence."""
    sizes = {'BYTE': 1, 'WORD': 2, 'DWORD': 4, 'QWORD': 8, 'XMMWORD': 16}
    for index, rows in decoded.items():
        reference, flags, owner, raw, mask, fixups = patterns[index]
        positions = [row[0] for row in rows]
        annotated = []
        for at, width, next_at, target, kind in fixups:
            kind &= 0xffff
            row_index = bisect.bisect_right(positions, at) - 1
            if row_index >= 0 and not kind & 0x1ff:
                position, encoded, assembly = rows[row_index]
                operand = re.search(r'\b(BYTE|WORD|DWORD|QWORD|XMMWORD) PTR\b', assembly, re.I)
                if at + width <= position + len(encoded) and operand and not re.match(r'\s*lea\b', assembly):
                    kind |= sizes[operand[1].upper()] << 16
            annotated.append((at, width, next_at, target, kind))
        patterns[index] = reference, flags, owner, raw, mask, sorted(annotated)


def _decode(patterns, objdump, root):
    """Decode all independent stored instruction spans in one native process."""
    content = bytearray()
    bounds = []
    for index, (reference, flags, owner, raw, mask, fixups) in enumerate(patterns):
        if not flags & 1 or flags & 4 or not any(value == 0 for value in mask):
            continue
        bounds.append((len(content), len(content) + len(raw), index))
        content.extend(raw)
        content.extend(b'\xcc' * 16)
    starts = [begin for begin, _, _ in bounds]
    digest = hashlib.sha256(content)
    digest.update(repr(bounds).encode('ascii'))
    cache = root / 'data/extracted/cache/native-build' / ('seed-code-1-' + digest.hexdigest() + '.pickle')
    if cache.is_file():
        return pickle.loads(cache.read_bytes())
    rows = {}
    with tempfile.TemporaryDirectory(prefix='dfcn-reference-instructions-') as temporary:
        source = Path(temporary) / 'reference.bin'
        source.write_bytes(content)
        process = subprocess.Popen([str(objdump), '-D', '-w', '-z', '-b', 'binary',
                                    '-m', 'i386:x86-64', '-M', 'intel', str(source)],
                                   stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                                   text=True, encoding='utf-8', errors='replace')
        line_pattern = re.compile(r'^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)$')
        for line in process.stdout:
            match = line_pattern.match(line)
            if not match:
                continue
            address = int(match[1], 16)
            index = bisect.bisect_right(starts, address) - 1
            if index < 0:
                continue
            begin, end, pattern_index = bounds[index]
            raw = bytes.fromhex(match[2])
            if raw and address + len(raw) <= end:
                rows.setdefault(pattern_index, []).append((address - begin, raw, match[3]))
        errors = process.stderr.read()
        if process.wait():
            raise RuntimeError(f'Native reference disassembly failed: {errors.strip()}')
    cache.parent.mkdir(parents=True, exist_ok=True)
    cache.write_bytes(pickle.dumps(rows, protocol=5))
    return rows


def _block(pattern, rows, first, last, flags, owner, fixup_positions, minimum_fixed=16):
    reference, _, _, raw, mask, fixups = pattern
    begin = rows[first][0]
    end = rows[last - 1][0] + len(rows[last - 1][1])
    selected = bytearray(mask[begin:end])
    selected_fixups = fixups[bisect.bisect_left(fixup_positions, begin):bisect.bisect_left(fixup_positions, end)]
    relocated = [(at - begin, width, next_at - begin if next_at else 0, target, kind)
                 for at, width, next_at, target, kind in selected_fixups
                 if begin <= at and at + width <= end]
    instruction_starts = {reference + position for position, _, _ in rows[first:last]}
    for position, encoded, _ in rows[first:last]:
        operand = _branch_displacement(encoded)
        if not operand:
            continue
        offset, width = operand
        target = reference + position + len(encoded) + int.from_bytes(
            encoded[offset:offset + width], 'little', signed=True)
        if not 0 <= target <= 0xffffffff:
            return None
        # Keep internal edges too. Their instruction destinations, rather
        # than a source byte delta, must survive near/short branch changes.
        if reference + begin <= target < reference + end and target not in instruction_starts:
            return None
        local = position - begin + offset
        if any(at == local for at, *_ in relocated):
            continue
        selected[local:local + width] = b'\x01' * width
        relocated.append((local, width, position - begin + len(encoded), target, 0x100))
    if sum(value == 0 for value in selected) < minimum_fixed:
        return None
    return (reference + begin, flags | 1, owner, raw[begin:end], bytes(selected), sorted(relocated))


def _instruction_mnemonic(assembly):
    # Objdump prints redundant, valid REX prefixes separately (e.g. 40 55
    # is "rex push rbp"). Only a prefix with no following opcode is invalid.
    value = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', assembly.strip(), flags=re.I)
    return value.split(None, 1)[0].lower() if value else ''


def _reachable_instruction_runs(rows, extent):
    """Return directly reachable code, excluding embedded data and padding.

    A .pdata extent can end in switch tables. Requiring objdump to consume
    every table byte used to discard all identity anchors for such functions.
    Start only at the real unwind entry, follow exact direct branch edges,
    and stop at returns and unknown indirect transfers. No table bytes or
    guessed indirect destinations become independent function evidence.
    """
    by_position = {position: index for index, (position, _, _) in enumerate(rows)}
    pending, reached = [0], set()
    while pending:
        position = pending.pop()
        while position not in reached:
            index = by_position.get(position)
            if index is None:
                break
            _, encoded, assembly = rows[index]
            if not encoded or position + len(encoded) > extent:
                break
            mnemonic = _instruction_mnemonic(assembly)
            if mnemonic in {'', '(bad)', '.byte'} or mnemonic.startswith('rex'):
                break
            reached.add(position)
            opcode_at = _opcode_start(encoded)
            if opcode_at >= len(encoded):
                break
            opcode = encoded[opcode_at]
            if opcode in (0xc2, 0xc3, 0xca, 0xcb, 0xcc, 0xf4) or mnemonic == 'ud2':
                break
            branch = _branch_displacement(encoded)
            conditional = 0x70 <= opcode <= 0x7f or 0xe0 <= opcode <= 0xe3 or (
                opcode == 0x0f and opcode_at + 1 < len(encoded) and 0x80 <= encoded[opcode_at + 1] <= 0x8f)
            jump = opcode in (0xe9, 0xeb) or (opcode == 0xff and opcode_at + 1 < len(encoded)
                and ((encoded[opcode_at + 1] >> 3) & 7) in (4, 5))
            if conditional or jump:
                if branch:
                    at, width = branch
                    target = position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
                    if target in by_position:
                        pending.append(target)
                if jump or not branch:
                    break
            position += len(encoded)
    runs, current = [], []
    for row in rows:
        if row[0] not in reached:
            if current:
                runs.append(current)
                current = []
            continue
        if current and current[-1][0] + len(current[-1][1]) != row[0]:
            runs.append(current)
            current = []
        current.append(row)
    if current:
        runs.append(current)
    return runs


def _required_basic_blocks(pattern, rows, required_starts, required):
    """Keep complete decoded CFG blocks around consumed instruction sites.

    Fixed instruction-count windows can straddle unrelated branches. Blocks
    retain all source opcode/register bytes and the same checked fixups; they
    do not authorize a callee's Nth occurrence or a function-wide relocation.
    """
    reference, flags, owner, raw, _, fixups = pattern
    if not owner or not flags & 2 or not rows:
        return
    positions = {row[0]: index for index, row in enumerate(rows)}
    ordered = list(positions)
    boundaries = {0, len(rows)}
    for index in range(1, len(rows)):
        if rows[index - 1][0] + len(rows[index - 1][1]) != rows[index][0]:
            boundaries.add(index)
    for index, (position, encoded, assembly) in enumerate(rows):
        mnemonic = _instruction_mnemonic(assembly)
        operand = _branch_displacement(encoded)
        if operand and mnemonic != 'call':
            at, width = operand
            target = position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in positions:
                boundaries.add(positions[target])
        if mnemonic.startswith('j') or mnemonic.startswith('loop') or mnemonic.startswith('ret') or mnemonic == 'int3':
            boundaries.add(index + 1)
    boundaries = sorted(boundaries)
    fixup_positions = [item[0] for item in fixups]
    first_required = bisect.bisect_left(required_starts, reference)
    end_required = bisect.bisect_left(required_starts, reference + len(raw))
    used = set()
    for address, length in required[first_required:end_required]:
        first = positions.get(address - reference)
        if first is None:
            # A consumer can own an operand byte or a return address. Include
            # its complete containing instruction, never start inside it.
            first = bisect.bisect_right(ordered, address - reference) - 1
            if first < 0 or rows[first][0] + len(rows[first][1]) <= address - reference:
                continue
        left = bisect.bisect_right(boundaries, first) - 1
        right = left + 1
        end = address - reference + length
        while right < len(boundaries) - 1 and rows[boundaries[right]][0] < end:
            right += 1
        first, last = boundaries[left], boundaries[right]
        selected = rows[first:last]
        if (not selected or selected[-1][0] + len(selected[-1][1]) < end or
                any(previous[0] + len(previous[1]) != current[0]
                    for previous, current in zip(selected, selected[1:])) or
                any(not encoded or _instruction_mnemonic(assembly) in {'', '(bad)', '.byte'}
                    or _instruction_mnemonic(assembly).startswith('rex')
                    for _, encoded, assembly in selected)):
            continue
        if (first, last) in used:
            continue
        used.add((first, last))
        value = _block(pattern, rows, first, last, 8 | 256, owner, fixup_positions)
        if value:
            yield value, tuple(reference + position for position, _, _ in selected)


def _required_call_prefixes(pattern, rows, consumed, required_starts, required):
    """Retain source call contexts without claiming their tail closes a CFG.

    A consumed draw can precede an unrelated helper in one long basic block.
    Keep its complete straight-line preparation from the original block entry
    through the consumed E8, rather than requiring that later helper too.
    Bit 2048 makes these caller-only evidence: no initial span, scope, branch
    landing or closed-component evidence may be published from the prefix.
    """
    reference, _, owner, raw, _, fixups = pattern
    positions = {row[0]: index for index, row in enumerate(rows)}
    required_calls = {}
    begin = bisect.bisect_left(required_starts, reference)
    end = bisect.bisect_left(required_starts, reference + len(raw))
    for address, width in required[begin:end]:
        call = address if width == 5 else address - 5 if width == 1 else -1
        index = positions.get(call - reference)
        if index is None or rows[index][1][:1] != b'\xe8' or len(rows[index][1]) != 5:
            continue
        after = index + 1
        # The requested return PC may be a NOP. Retain a complete successor
        # instruction when it remains in this straight-line source context.
        if width == 1 and after < len(rows) and rows[after][0] == call - reference + 5:
            mnemonic = _instruction_mnemonic(rows[after][2])
            if not (mnemonic.startswith(('j', 'loop', 'ret')) or mnemonic in {'int3', 'ud2'}):
                after += 1
        required_calls[index] = max(required_calls.get(index, 0), after)
    fixup_positions = [item[0] for item in fixups]
    emitted = set()
    for block, _ in consumed:
        first = positions.get(block[0] - reference)
        block_end = block[0] - reference + len(block[3])
        if first is None:
            continue
        for call, last in required_calls.items():
            if call < first or rows[call][0] + 5 > block_end:
                continue
            # Do not extend a prefix across an existing block boundary.
            if rows[last - 1][0] + len(rows[last - 1][1]) > block_end:
                last = call + 1
            stop = rows[last - 1][0] + len(rows[last - 1][1])
            if stop >= block_end or stop - rows[first][0] > 1024 or (first, last) in emitted:
                continue
            selected = rows[first:last]
            if any(_instruction_mnemonic(assembly).startswith(('j', 'loop', 'ret')) or
                   _instruction_mnemonic(assembly) in {'int3', 'ud2'} for _, _, assembly in selected):
                continue
            value = _block(pattern, rows, first, last, 8 | 2048, owner, fixup_positions, 24)
            if value:
                emitted.add((first, last))
                yield value, tuple(reference + position for position, _, _ in selected)


def _required_landing_blocks(pattern, rows, consumed, literal_roots, required_starts, required):
    """Supply complete source contexts for consumed blocks' local edges.

    A shared cleanup landing can have many identical draw/destructor tails.
    Its physical fallthrough predecessor may contain the immutable text that
    identifies that particular path. Short conditional landings retain both
    forward CFG arms through complete identity-bearing successor blocks;
    strongly connected loops contribute their complete decoded CFG at once.
    Keep those complete source paths,
    rather than cropping a new window around whichever target happened to
    match. Only source CFG edges drive the finite work queue; every emitted
    instruction is subjected to the same reviewed-boundary proof as consumed
    blocks. These contexts confer neither a function scope nor byte bindings.
    """
    reference, flags, owner, raw, _, fixups = pattern
    if not owner or not flags & 2 or not rows:
        return
    positions = {row[0]: index for index, row in enumerate(rows)}
    first_required = bisect.bisect_left(required_starts, reference)
    end_required = bisect.bisect_left(required_starts, reference + len(raw))
    required_calls = set()
    for address, length in required[first_required:end_required]:
        candidates = [positions.get(address - reference)] if length <= 5 else []
        if length == 1:
            candidates.append(positions.get(address - reference - 5))
        for index in candidates:
            if index is not None and len(rows[index][1]) == 5 and rows[index][1][0] == 0xe8:
                required_calls.add(index)
    if not consumed and not required_calls:
        return
    boundaries = {0, len(rows)}
    destinations = {}
    for index, (position, encoded, assembly) in enumerate(rows):
        if index and rows[index - 1][0] + len(rows[index - 1][1]) != position:
            boundaries.add(index)
        mnemonic = _instruction_mnemonic(assembly)
        operand = _branch_displacement(encoded)
        if operand and (mnemonic.startswith('j') or mnemonic.startswith('loop')):
            at, width = operand
            target = position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in positions:
                destinations[index] = positions[target]
                boundaries.add(positions[target])
        if (mnemonic.startswith(('j', 'loop', 'ret')) or
                mnemonic in {'int3', 'ud2', 'hlt'}):
            boundaries.add(index + 1)
    boundaries = sorted(boundaries)
    blocks = list(zip(boundaries, boundaries[1:]))
    block_of = {}
    valid, literals = [], []
    fixup_positions = [item[0] for item in fixups]
    for number, (first, last) in enumerate(blocks):
        selected = rows[first:last]
        valid.append(bool(selected) and all(encoded and
            _instruction_mnemonic(assembly) not in {'', '(bad)', '.byte', 'int3', 'ud2', 'hlt'} and
            not _instruction_mnemonic(assembly).startswith('rex')
            for _, encoded, assembly in selected) and all(
                left[0] + len(left[1]) == right[0] for left, right in zip(selected, selected[1:])))
        literal = False
        for index in range(first, last):
            block_of[index] = number
            position, encoded, assembly = rows[index]
            if _instruction_mnemonic(assembly) != 'lea':
                continue
            begin = bisect.bisect_left(fixup_positions, position)
            end = bisect.bisect_left(fixup_positions, position + len(encoded))
            literal |= any(target in literal_roots and not kind & 0x100
                           for _, _, _, target, kind in fixups[begin:end])
        literals.append(literal)
    def successors(number):
        first, last = blocks[number]
        if not valid[number]:
            return None
        # A compound may not cross unresolved transfers, even if some
        # unrelated instruction in the block happens to carry an identity.
        for index in range(first, last):
            _, encoded, assembly = rows[index]
            mnemonic = _instruction_mnemonic(assembly)
            if (mnemonic.startswith(('ret', 'iret')) or mnemonic in {'int3', 'ud2', 'hlt'} or
                    (mnemonic.startswith(('j', 'loop')) and index not in destinations) or
                    (mnemonic == 'call' and not _branch_displacement(encoded))):
                return None
        mnemonic = _instruction_mnemonic(rows[last - 1][2])
        result = []
        if last - 1 in destinations:
            result.append(block_of[destinations[last - 1]])
        if mnemonic not in {'jmp', 'jmpq'}:
            if (number + 1 >= len(blocks) or rows[last - 1][0] + len(rows[last - 1][1]) !=
                    rows[blocks[number + 1][0]][0]):
                return None
            result.append(number + 1)
        return tuple(sorted(set(result)))

    following_blocks = [successors(number) for number in range(len(blocks))]
    incoming = [[] for _ in blocks]
    for number, following in enumerate(following_blocks):
        for target in following or ():
            incoming[target].append(number)
    # Collapse actual cycles before asking whether every outgoing arm has
    # identity evidence. A loop can contain many short basic blocks while
    # its complete instruction sequence is independently distinctive.
    # Iterative traversals also bound host stack use for large native owners.
    reached, finished_order = set(), []
    for number in range(len(blocks)):
        if number in reached:
            continue
        pending = [(number, False)]
        while pending:
            current, finished = pending.pop()
            if finished:
                finished_order.append(current)
                continue
            if current in reached:
                continue
            reached.add(current)
            pending.append((current, True))
            pending.extend((target, False) for target in reversed(following_blocks[current] or ())
                           if target not in reached)
    components, component_of = [], {}
    for number in reversed(finished_order):
        if number in component_of:
            continue
        component = len(components)
        pending, members = [number], []
        while pending:
            current = pending.pop()
            if current in component_of:
                continue
            component_of[current] = component
            members.append(current)
            pending.extend(incoming[current])
        components.append(tuple(sorted(members)))
    cyclic = [len(members) > 1 or members[0] in (following_blocks[members[0]] or ())
              for members in components]
    component_successors = [tuple(sorted({component_of[target]
        for number in members for target in following_blocks[number] or ()
        if component_of[target] != component}))
        for component, members in enumerate(components)]
    component_valid = [all(following_blocks[number] is not None for number in members)
                       for members in components]

    def build_component_context(component):
        """Reach complete identity-bearing successors along both CFG arms.

        A short landing is never independently eligible. Its entire finite
        forward context must be independently unique in each image, and the
        runtime may publish it only inside a closed component with at least
        64 fixed bytes and two external identities. No branch chooses among
        multiple short-block matches.
        """
        pending, retained, retained_blocks, terminal, graph = [component], set(), set(), set(), {}
        while pending:
            current = pending.pop()
            if current in retained:
                continue
            retained.add(current)
            members = components[current]
            retained_blocks.update(members)
            first, last = blocks[members[0]][0], blocks[members[-1]][1]
            first_all, last_all = blocks[min(retained_blocks)][0], blocks[max(retained_blocks)][1]
            if rows[last_all - 1][0] + len(rows[last_all - 1][1]) - rows[first_all][0] > 1024:
                return None
            if not component_valid[current]:
                return None
            following = component_successors[current]
            # A noncontiguous SCC cannot count unrelated physical gaps as
            # identity. Its real outgoing paths may close those gaps later.
            contiguous = members[-1] - members[0] + 1 == len(members)
            value = _block(pattern, rows, first, last, 8 | 256, owner, fixup_positions) if contiguous else None
            identity = value and any(not kind & 0x100 or (
                not kind & 0xff and width == 4 and at and next_at == at + 4 and value[3][at - 1] == 0xe8)
                for at, width, next_at, target, kind in value[5] if target)
            if identity and (current != component or cyclic[current]):
                terminal.add(current)
                continue
            graph[current] = following
            pending.extend(following)
        # The condensed graph is acyclic. Each complete SCC contributes all
        # of its actual instructions and internal edges; every retained
        # outgoing arm still has to reach a complete identity-bearing unit.
        finished = set(terminal)
        while True:
            added = {current for current, following in graph.items()
                     if following and all(next_block in finished for next_block in following)} - finished
            if not added:
                break
            finished.update(added)
        if component not in finished:
            return None
        lower, upper = min(retained_blocks), max(retained_blocks)
        # The wire format is a contiguous instruction span. Never include
        # unrelated blocks or embedded bytes between the actual CFG arms.
        if retained_blocks != set(range(lower, upper + 1)):
            return None
        begin, finish = blocks[lower][0], blocks[upper][1]
        if any(rows[index - 1][0] + len(rows[index - 1][1]) != rows[index][0]
               for index in range(begin + 1, finish)):
            return None
        value = _block(pattern, rows, begin, finish, 8 | 256 | 512, owner, fixup_positions)
        return (begin, finish, value) if value else None

    component_contexts = {}

    def component_context(number):
        component = component_of[number]
        if component not in component_contexts:
            component_contexts[component] = build_component_context(component)
        return component_contexts[component]

    pending = []
    for _, sites in consumed:
        for site in sites:
            destination = destinations.get(positions[site - reference])
            if destination is not None:
                pending.append(block_of[destination])
    # A required CALL can occupy a complete block with fewer than 16 fixed
    # bytes. Retain it only as a CFG entry, never as an independently matched
    # short pattern. A complete SCC/forward context must earn all existing
    # uniqueness, fixed-byte, external-identity and closed-edge requirements.
    pending.extend(block_of[index] for index in sorted(required_calls))
    visited, emitted = set(), set()
    while pending:
        number = pending.pop()
        if number in visited:
            continue
        visited.add(number)
        first, last = blocks[number]
        if not valid[number]:
            continue
        # Follow only actual local direct transfers. A missing/oversized
        # context remains unresolved; it does not authorize a guessed path.
        for index in range(first, last):
            if index in destinations:
                pending.append(block_of[destinations[index]])
        end = rows[last - 1][0] + len(rows[last - 1][1])
        starts = [first]
        predecessor = number
        while not literals[predecessor] and predecessor:
            previous_first, previous_last = blocks[predecessor - 1]
            _, previous_raw, previous_assembly = rows[previous_last - 1]
            mnemonic = _instruction_mnemonic(previous_assembly)
            if (not valid[predecessor - 1] or not previous_raw or
                    rows[previous_last - 1][0] + len(previous_raw) != rows[blocks[predecessor][0]][0] or
                    mnemonic.startswith(('j', 'loop', 'ret')) or mnemonic in {'int3', 'ud2', 'hlt'} or
                    end - rows[previous_first][0] > 1024):
                break
            predecessor -= 1
        if predecessor < number and literals[predecessor]:
            starts.append(blocks[predecessor][0])
        base = _block(pattern, rows, first, last, 8 | 256, owner, fixup_positions)
        if base is None or cyclic[component_of[number]]:
            compound = component_context(number)
            if compound is not None:
                begin, finish, context = compound
                for index in range(begin, finish):
                    if index in destinations:
                        pending.append(block_of[destinations[index]])
                final_block = block_of[finish - 1]
                pending.extend(following_blocks[final_block] or ())
                # Preserve a literal-bearing fallthrough producer when the
                # landing's own forward shape is shared by several paths.
                # The combined source/target span still needs independent
                # uniqueness and the same component-only publication gate.
                for context_begin in sorted({begin} | {start for start in starts if start < begin}):
                    if (rows[finish - 1][0] + len(rows[finish - 1][1]) - rows[context_begin][0] > 1024 or
                            (context_begin, finish, 512) in emitted):
                        continue
                    combined = context if context_begin == begin else _block(pattern, rows,
                        context_begin, finish, 8 | 256 | 512, owner, fixup_positions)
                    if combined:
                        emitted.add((context_begin, finish, 512))
                        yield combined, tuple(reference + position for position, _, _ in rows[context_begin:finish])
        for begin in starts:
            context = base if begin == first else _block(pattern, rows, begin, last, 8 | 256, owner, fixup_positions)
            if ((begin, last, 0) in emitted or end - rows[begin][0] > 1024):
                continue
            emitted.add((begin, last, 0))
            if context:
                yield context, tuple(reference + position for position, _, _ in rows[begin:last])


def _leaf_blocks(pattern, rows, required_starts, required):
    """Separate leaf routines from the old surrounding-byte contexts.

    MSVC leaf functions need not have unwind entries.  Only complete decoded
    runs bounded by actual INT3 padding are used; a return or tail branch must
    terminate the run.  Neighbouring routines never contribute identity bytes.
    Matching still requires an unambiguous complete body and its operand graph.
    """
    ref, _, owner, raw, _, fixups = pattern
    if owner:
        return
    fixup_positions = [fixup[0] for fixup in fixups]
    first = 0
    while first < len(rows):
        if rows[first][1] == b'\xcc':
            first += 1
            continue
        last = first
        while last < len(rows) and rows[last][1] != b'\xcc':
            last += 1
        if first and last < len(rows) and rows[first - 1][1] == b'\xcc':
            begin = ref + rows[first][0]
            end = ref + rows[last][0]
            at = bisect.bisect_left(required_starts, begin)
            terminal = rows[last - 1][2].split(None, 1)[0]
            if terminal in ('ret', 'retq', 'jmp', 'jmpq') and at < len(required) and required[at][0] < end:
                finish = last
                # A seven-byte leaf can use its immediately following padding
                # byte for the eight-byte search index, never its next sibling.
                while finish < len(rows) and rows[finish][1] == b'\xcc' and rows[finish - 1][0] + len(rows[finish - 1][1]) - rows[first][0] < 8:
                    finish += 1
                value = _block(pattern, rows, first, finish, 16, begin, fixup_positions, 8)
                if value:
                    yield value
        first = last + 1


def _named_global_fields(required, profiles):
    """Give named global members their own address contract.

    A root establishes only the object address. Interior references must be
    matched to a declared member, never relocated by the root's delta.
    """
    result = {}
    for profile in profiles:
        types = {spec['name']: spec for spec in profile['canonical_types']}
        roots = {entry['name']: entry['reference'] for entry in profile['roots']
                 if entry['kind'] == 'global-address'}
        for global_name, type_name in (('game', 'gamest'), ('plotinfo', 'plotinfost'), ('world', 'world')):
            source, root = types.get(type_name), roots.get(global_name)
            if not source or not root:
                continue
            for address, length in required:
                if not root < address < root + source['size']:
                    continue
                offset = address - root
                if not any(field['offset'] <= offset and offset + length <= field['offset'] + field['size']
                           for field in source['fields']):
                    continue
                # A one-byte resource asks only for this named address; it
                # does not claim the complete enclosing aggregate is movable.
                value = (root, offset, length, 0 if length == 1 else 1)
                previous = result.setdefault((root, offset), value)
                if previous != value:
                    raise RuntimeError('Conflicting canonical global member contract')
    return list(result.values())


def refresh(root: Path, path: Path, objdump: Path, target_profiles=(), argument_evidence=b'', reference_catalog=None):
    required, known, patterns, tables, imports = _read(reference_catalog or path)
    from native_pe_coordinates import collect_required_coordinates, collect_identity_only_coordinates
    required = list(collect_required_coordinates(root).items())
    identity_only = collect_identity_only_coordinates(root)
    from native_reference_resources import prepare_required_resources
    known, patterns = prepare_required_resources(root, known, patterns, required, objdump)
    from native_reference_semantics import augment_reference_call_targets
    known, patterns = augment_reference_call_targets(root, known, patterns, objdump)
    print(f'Preparing automatic layout evidence from {len(patterns)} stored reference spans.', flush=True)
    whole = sorted((ref, ref + len(raw)) for ref, flags, _, raw, _, _ in patterns if flags & 2)
    starts = [begin for begin, _ in whole]
    for index, pattern in enumerate(patterns):
        ref, flags, owner, raw, mask, fixups = pattern
        at = bisect.bisect_right(starts, ref) - 1
        if not owner and at >= 0 and ref + len(raw) <= whole[at][1]:
            owner = whole[at][0]
        patterns[index] = ref, flags, owner, raw, mask, fixups
    from native_reference_semantics import normalize_reference_scopes
    parent_owners = normalize_reference_scopes(root, known,
        [{'owner': owner, 'flags': 0} for owner in sorted({pattern[2] for pattern in patterns if pattern[2]})],
        return_owners=True)
    patterns = [(ref, flags, parent_owners.get(owner, owner), raw, mask, fixups)
                for ref, flags, owner, raw, mask, fixups in patterns]
    fields, declarations = _graphics_fields(root)
    _unborrowed_texture_fields(target_profiles, fields)
    fields.extend(_init_fields(root))
    fields.extend(_named_global_fields(required, target_profiles))
    graphics_tokens = _graphics_tokens(root, declarations)
    display_scopes = _display_scopes(root, patterns, known)
    decoded = _decode(patterns, objdump, root)
    print(f'Decoded reference instructions in {len(decoded)} spans.', flush=True)
    _access_widths(patterns, decoded)
    from native_inline_resize_evidence import build_inline_resize_evidence, inline_resize_dependencies
    inline_resizes = build_inline_resize_evidence(root, known, patterns, decoded, objdump=objdump)
    resize_dependencies = inline_resize_dependencies(inline_resizes)
    extended_required = dict(required)
    for reference, width in resize_dependencies.items():
        extended_required[reference] = max(extended_required.get(reference, 0), width)
    if extended_required != dict(required):
        required = sorted(extended_required.items())
        known, patterns = prepare_required_resources(root, known, patterns, required, objdump)
        # An independently described formatter may require another retained
        # source body. Rebuild instruction indices and operand widths after
        # normal reviewed recovery instead of using indices from the old
        # pattern collection or assuming every dependency was a draw.
        known, patterns = augment_reference_call_targets(root, known, patterns, objdump)
        decoded = _decode(patterns, objdump, root)
        _access_widths(patterns, decoded)
    from native_reference_semantics import augment_reference_literals
    augment_reference_literals(root, known, patterns)
    _instruction_fields(root, patterns, decoded, fields)
    additions = {}
    required_starts = [address for address, _ in required]
    # An original direct-CALL operand requests the callee's complete leaf
    # identity even when that helper is not directly consumed by a hook.
    # This does not add an optional helper to the required resource set.
    leaf_required = dict(required)
    for _, flags, _, raw, _, fixups in patterns:
        if not flags & 1:
            continue
        for offset, width, next_at, target, kind in fixups:
            if (kind & 0x100 and not kind & 0xff and width == 4 and offset and
                    next_at == offset + 4 and raw[offset - 1] == 0xe8):
                leaf_required[target] = max(leaf_required.get(target, 0), 1)
    leaf_required = sorted(leaf_required.items())
    leaf_starts = [address for address, _ in leaf_required]
    required_blocks = {}
    landing_blocks = set()
    literal_roots = {reference for reference, flags, _, raw, _, _ in patterns
                     if flags & 4 and len(raw) >= 5 and raw[-1] == 0 and all(
                         byte in (9, 10, 13) or 32 <= byte <= 126 for byte in raw[:-1])}
    reachable_sites = set()
    for index, rows in decoded.items():
        pattern = patterns[index]
        ref, flags, owner, raw, mask, fixups = pattern
        if not rows or rows[0][0] != 0:
            continue
        # Whole unwind extents can contain inline switch data. Code identity
        # is supplied only by entry-reachable instructions, independently of
        # whether objdump happens to decode the final data bytes exactly.
        if owner and flags & 2:
            fixup_positions = [fixup[0] for fixup in fixups]
            for run in _reachable_instruction_runs(rows, len(raw)):
                reachable_sites.update(ref + position for position, _, _ in run)
                if len(raw) < 48:
                    continue
                for first in range(0, len(run), 12):
                    last = min(len(run), first + 12)
                    value = _block(pattern, run, first, last, 24, owner, fixup_positions)
                    if value:
                        additions[(value[0], value[1], value[3])] = value
            # A consumed instruction beyond an indirect dispatch is still a
            # source code anchor when the reviewed exact baseline confirms
            # its entire block. Unrelated trailing jump-table bytes cannot
            # suppress these blocks or authorize bytes across a decode gap.
            consumed = list(_required_basic_blocks(pattern, rows, required_starts, required))
            for value, sites in consumed:
                required_blocks[(value[0], value[1], value[3])] = value, sites
            for value, sites in _required_call_prefixes(pattern, rows, consumed, required_starts, required):
                required_blocks[(value[0], value[1], value[3])] = value, sites
            for value, sites in _required_landing_blocks(pattern, rows, consumed, literal_roots,
                                                        required_starts, required):
                key = value[0], value[1], value[3]
                required_blocks[key] = value, sites
                landing_blocks.add(key)
        if rows[-1][0] + len(rows[-1][1]) != len(raw) or any(
                left[0] + len(left[1]) != right[0] for left, right in zip(rows, rows[1:])):
            continue
        if not owner:
            for value in _leaf_blocks(pattern, rows, leaf_starts, leaf_required):
                additions[(value[0], value[1], value[3])] = value
            continue
        positions = [position for position, _, _ in rows]
        fixup_positions = [fixup[0] for fixup in fixups]
        anchors = set()
        at = bisect.bisect_left(required_starts, ref)
        while at < len(required) and required[at][0] < ref + len(raw):
            address, length = required[at]
            first = max(0, bisect.bisect_right(positions, address - ref) - 1)
            last = bisect.bisect_left(positions, address - ref + length)
            anchors.add((max(0, first - 3), min(len(rows), max(last, first + 1) + 5)))
            at += 1
        for position, _, _, target, _ in fixups:
            if 0x0264a3f0 <= target < 0x0264a3f0 + 0x40000:
                first = max(0, bisect.bisect_right(positions, position) - 1)
                anchors.add((max(0, first - 4), min(len(rows), first + 5)))
        for first, last in sorted(anchors):
            value = _block(pattern, rows, first, last, 8, owner, fixup_positions)
            if value:
                additions[(value[0], value[1], value[3])] = value
    from native_reference_semantics import verified_reference_instruction_sites
    verify_sites = {site for _, sites in required_blocks.values() for site in sites if site not in reachable_sites}
    verified_sites = verified_reference_instruction_sites(root, known, verify_sites, patterns, decoded, objdump) if verify_sites else set()
    retained_blocks = 0
    for key, (value, sites) in required_blocks.items():
        if all(site in reachable_sites or site in verified_sites for site in sites):
            additions[key] = value
            retained_blocks += 1
    print(f'Canonical consumed code: {retained_blocks}/{len(required_blocks)} complete blocks have proved instruction boundaries.', flush=True)
    print(f'Canonical local control flow: {sum(key in additions for key in landing_blocks)}/{len(landing_blocks)} '
          'complete landing/producer contexts retained.', flush=True)
    patterns.extend(additions.values())
    print(f'Prepared {len(additions)} independent instruction blocks and {len(fields)} field contracts.', flush=True)
    from native_reference_semantics import augment_reference_tables
    metadata = json.loads((root / 'data/runtime/native-addresses/pe-layout-semantics.json').read_text(encoding='utf-8'))
    semantic_tables = augment_reference_tables(root, known, tables, metadata,
        [spec for profile in target_profiles for spec in profile['canonical_types']])
    existing_tables = {reference for reference, _, _ in tables}
    new_roots = {reference for reference, _, _ in semantic_tables if reference not in existing_tables
                 and any(address == reference and length <= 8 for address, length in required)}
    tables.extend((reference, name, slots[:4]) for reference, name, slots in semantic_tables
                  if reference in new_roots)
    from native_identity_tables import augment_identity_tables
    decoded_by_pattern = {id(entry): decoded[index] for index, entry in enumerate(patterns) if index in decoded}
    patterns = [entry for entry in patterns if not entry[1] & 64]
    patterns, tables = augment_identity_tables(root, known, patterns, tables, dict(required), identity_only)
    decoded = {index: decoded_by_pattern[id(entry)] for index, entry in enumerate(patterns)
               if id(entry) in decoded_by_pattern}
    if new_roots:
        for index, (label, identity, ranges, changes) in enumerate(known):
            decoded_ranges = list(struct.iter_unpack('<III', ranges))
            if not decoded_ranges or any(begin != native for begin, end, native in decoded_ranges):
                continue
            # The exact canonical image owns reference coordinates. The
            # reviewed other-edition table and RTTI proved these new roots;
            # extend only those consumer spans, never surrounding code.
            intervals = [(begin, end) for begin, end, _ in decoded_ranges]
            intervals.extend((address, address + length) for address, length in required if address in new_roots)
            merged = []
            for begin, end in sorted(intervals):
                if merged and begin <= merged[-1][1]:
                    merged[-1] = merged[-1][0], max(merged[-1][1], end)
                else:
                    merged.append((begin, end))
            encoded = b''.join(struct.pack('<III', begin, end, begin) for begin, end in merged)
            known[index] = label, identity, encoded, changes
    from build_pe_runtime_seed import Writer
    writer = Writer()
    writer.content.extend(b'DFCNPE01')
    writer.u32(13)
    writer.u32(len(required))
    for value in required:
        writer.content.extend(struct.pack('<II', *value))
    writer.u32(len(known))
    for label, identity, ranges, changes in known:
        writer.sized(label)
        writer.content.extend(identity)
        writer.u32(len(ranges) // 12)
        writer.content.extend(ranges)
        writer.u32(len(changes) // 6)
        writer.content.extend(changes)
    writer.u32(len(patterns))
    for reference, flags, owner, raw, mask, fixups in patterns:
        writer.u32(reference)
        writer.u32(flags)
        writer.u32(owner)
        writer.sized(raw)
        writer.sized(mask)
        writer.u32(len(fixups))
        for value in fixups:
            writer.content.extend(struct.pack('<IIIII', *value))
    writer.u32(len(tables))
    from native_pe_coordinates import collect_required_coordinates
    external = collect_required_coordinates(root, exclude_names={'native_history_layouts.inc'})
    for reference, name, slots in tables:
        writer.u32(reference)
        # Serialized method RVAs are u32; the actual MSVC vtable slots are
        # pointers. Keep direct consumers in the table's upper half visible.
        table_extent = (len(slots) // 4) * 8
        usage = 3 if reference in identity_only else (0 if any(
            address < reference + table_extent and reference < address + length
            for address, length in external.items()) else 1)
        writer.u32(usage)
        writer.sized(name)
        selected_slots = slots[:4] if usage else slots
        writer.u32(len(selected_slots) // 4)
        writer.content.extend(selected_slots)
    writer.u32(len(imports))
    for reference, library, symbol in imports:
        writer.u32(reference)
        writer.sized(library)
        writer.sized(symbol)
    writer.u32(len(fields))
    for value in fields:
        writer.content.extend(struct.pack('<IIII', *value))
    from native_history_semantic_evidence import build_semantic_evidence
    from native_enum_evidence import build_enum_evidence
    enum_evidence = build_enum_evidence(root, known, metadata, patterns, decoded)
    writer.sized(build_semantic_evidence(metadata, patterns, semantic_tables, decoded,
                                       target_profiles=target_profiles, global_specs=fields,
                                       enum_evidence=enum_evidence, extent_reference=(root, known, objdump)))
    writer.sized(graphics_tokens)
    writer.sized(display_scopes)
    from native_frame_evidence import build_frame_evidence
    writer.sized(build_frame_evidence(root, patterns, decoded, known=known, objdump=objdump,
                                     argument_evidence=argument_evidence, target_profiles=target_profiles))
    from native_method_call_evidence import build_method_call_evidence
    writer.sized(build_method_call_evidence(root, metadata, patterns, decoded, known=known, objdump=objdump))
    writer.sized(inline_resizes)
    from native_callable_search_evidence import build_callable_search_evidence
    writer.sized(build_callable_search_evidence(root, known, patterns, metadata))
    from native_text_draw_evidence import build_text_draw_evidence
    writer.sized(build_text_draw_evidence(root, known, patterns, required, decoded,
                                         objdump=objdump, receiver=0x264a3f0))
    from native_workshop_recipe_evidence import build_workshop_recipe_evidence
    writer.sized(build_workshop_recipe_evidence(root, patterns, metadata, semantic_tables, known))
    from native_chooser_feature_evidence import build_chooser_feature_evidence
    writer.sized(build_chooser_feature_evidence(root, known, patterns, decoded, required, inline_resizes, objdump=objdump))
    from native_optional_panel_evidence import build_optional_panel_evidence
    writer.sized(build_optional_panel_evidence(root, known, patterns, decoded, required, objdump=objdump))
    candidate = path.with_name(path.name + '.publish')
    try:
        candidate.write_bytes(writer.content)
        # Windows readers and antivirus scanners may briefly deny delete
        # sharing after reading either file. Keep the old complete seed in
        # place and retry only the same atomic replacement, never truncate
        # or publish a partially written catalog.
        deadline = time.monotonic() + 3.0
        while True:
            try:
                candidate.replace(path)
                break
            except OSError as error:
                if getattr(error, 'winerror', None) not in (5, 32, 33) or time.monotonic() >= deadline:
                    raise
                time.sleep(0.1)
    finally:
        candidate.unlink(missing_ok=True)
    print(f'Generated automatic ABI discovery evidence: {len(patterns)} instruction spans; '
          f'{len(fields)} semantic graphics elements.', flush=True)
