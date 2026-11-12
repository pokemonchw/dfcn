"""Bind unchanged instruction blocks inside corresponding Windows routines.

The normal build supplies routine pairs whose identities are already anchored
by the caller. This module admits only contiguous equal instruction blocks with
unique local context; it never infers a function from a nearby address delta.
"""
from __future__ import annotations

import bisect
from collections import Counter
import difflib
import re
import subprocess


_LINE = re.compile(r'^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)$')
_PREFIXES = {0xf0, 0xf2, 0xf3, 0x2e, 0x36, 0x3e, 0x26, 0x64, 0x65, 0x66, 0x67}
_DIRECT_BRANCH = re.compile(
    r'^((?:(?:bnd|notrack)\s+)?(?:call|j\w+|loop\w*)\s+)'
    r'(?:0x[0-9a-f]+|[0-9a-f]+|address|local:-?[0-9a-f]+)$'
)
_REGISTER = re.compile(r'\b(?:r(?:[abcd]x|[sb]p|[sd]i|[89]|1[0-5])|'
                       r'e(?:[abcd]x|[sb]p|[sd]i))\b')


def _opcode_start(raw):
    index = 0
    while index < len(raw) and (raw[index] in _PREFIXES or 0x40 <= raw[index] <= 0x4f):
        index += 1
    return index


def _memory_displacement(raw):
    """Return an encoded disp32 and whether it is RIP relative.

    This is used only for an instruction whose disassembly already has the
    corresponding memory operand. Unsupported encodings remain exact bytes.
    """
    index = _opcode_start(raw)
    if index >= len(raw) or 0x67 in raw[:index]:
        return None
    opcode = raw[index]
    if opcode == 0xc5:  # Two-byte VEX prefix, then opcode and ModRM.
        index += 3
    elif opcode == 0xc4:
        index += 4
    elif opcode == 0x62:
        index += 5
    elif opcode == 0x0f:
        index += 2
        if index <= len(raw) and raw[index - 1] in (0x38, 0x3a):
            index += 1
    else:
        index += 1
    if index >= len(raw):
        return None
    modrm = raw[index]
    index += 1
    mode, rm = modrm >> 6, modrm & 7
    if mode == 3:
        return None
    if rm == 4:
        if index >= len(raw):
            return None
        base = raw[index] & 7
        index += 1
        has_disp32 = mode == 2 or (mode == 0 and base == 5)
        rip = False
    else:
        has_disp32 = mode == 2 or (mode == 0 and rm == 5)
        rip = mode == 0 and rm == 5
    return (index, rip) if has_disp32 and index + 4 <= len(raw) else None


def _branch_displacement(raw):
    index = _opcode_start(raw)
    if index >= len(raw):
        return None
    opcode = raw[index]
    if opcode in (0xe8, 0xe9) and len(raw) == index + 5:
        return index + 1, 4
    if (opcode == 0xeb or 0x70 <= opcode <= 0x7f or 0xe0 <= opcode <= 0xe3) and len(raw) == index + 2:
        return index + 1, 1
    if opcode == 0x0f and index + 1 < len(raw) and 0x80 <= raw[index + 1] <= 0x8f and len(raw) == index + 6:
        return index + 2, 4
    return None


def _instruction_key(image, row):
    address, raw, assembly = row
    raw = bytes(raw)
    assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip().lower()
    assembly = re.sub(r'\s+', ' ', assembly)
    mask = set()
    branch = _DIRECT_BRANCH.fullmatch(assembly)
    displacement = _branch_displacement(raw) if branch else None
    if displacement:
        offset, width = displacement
        mask.update(range(offset, offset + width))
        assembly = branch[1] + 'code_address'
        target = address + len(raw) + int.from_bytes(raw[offset:offset + width], 'little', signed=True)
        identity = getattr(image, 'canonical_calls', {}).get(target)
        if identity is not None:
            assembly += f':{identity:x}'

    memory = _memory_displacement(raw) if '[' in assembly else None
    if getattr(image, 'frame_operands', False):
        frame = re.search(r'\[(?:rsp|rbp)([+-])0x([0-9a-f]+)\]', assembly)
        if frame:
            value = int(frame[2], 16) * (1 if frame[1] == '+' else -1)
            width = 4 if memory else 1
            encoded = (value & ((1 << (width * 8)) - 1)).to_bytes(width, 'little')
            position = memory[0] if memory else raw.find(encoded, _opcode_start(raw) + 2)
            if position >= 0 and raw[position:position + width] == encoded:
                mask.update(range(position, position + width))
                assembly = assembly[:frame.start()] + '[frame_slot]' + assembly[frame.end():]
    if memory:
        offset, rip = memory
        encoded = int.from_bytes(raw[offset:offset + 4], 'little', signed=True)
        if rip:
            operand = re.search(r'\[rip([+-])(?:0x([0-9a-f]+)|(address))\]', assembly)
            if operand:
                # Cached rows already contain the literal "address" marker.
                printed = None if operand[3] else int(operand[2], 16) * (1 if operand[1] == '+' else -1)
                if printed is not None and printed >= 1 << 63:
                    printed -= 1 << 64
                if printed is None or printed == encoded:
                    mask.update(range(offset, offset + 4))
                    target = address + len(raw) + encoded
                    identity = getattr(image, 'canonical_calls', {}).get(target)
                    label = 'data_address' + (f':{identity:x}' if identity is not None else '')
                    assembly = assembly[:operand.start()] + '[rip+' + label + ']' + assembly[operand.end():]
        else:
            operand = re.search(r'\[([^\]]+)\]', assembly)
            if operand and len(_REGISTER.findall(operand[1])) >= 2:
                table = re.search(r'\+(?:0x([0-9a-f]+)|(image_address))$', operand[1])
                rva = int.from_bytes(raw[offset:offset + 4], 'little')
                printed = int(table[1], 16) if table and table[1] else None
                if table and (printed is None or printed == rva) and rva >= 0x100000 and image.section(rva):
                    mask.update(range(offset, offset + 4))
                    begin = operand.start(1) + table.start()
                    end = operand.start(1) + table.end()
                    assembly = assembly[:begin] + '+image_address' + assembly[end:]

    # Opcode, register, size, stack/structure offsets and ordinary immediate
    # bytes stay in the key, even if the textual disassembler omits a detail.
    normalized = bytes(0 if index in mask else value for index, value in enumerate(raw))
    # GCC's non-PIE ELF code also uses MOV reg, absolute-address immediates.
    # Only the ELF adapter's decoded, section-backed address set admits them;
    # ordinary constants and structure displacements remain exact operands.
    absolute = re.fullmatch(r'mov(?:abs)?\s+([a-z0-9]+),0x([0-9a-f]+)', assembly)
    if absolute and int(absolute[2], 16) in getattr(image, 'absolute_targets', ()):
        opcode = _opcode_start(raw)
        width = len(raw) - opcode - 1
        if opcode < len(raw) and 0xb8 <= raw[opcode] <= 0xbf and width in (4, 8):
            mask.update(range(opcode + 1, len(raw)))
            identity = getattr(image, 'canonical_calls', {}).get(int(absolute[2], 16))
            label = 'image_address' + (f':{identity:x}' if identity is not None else '')
            assembly = f'mov {absolute[1]},{label}'
            normalized = bytes(0 if index in mask else value for index, value in enumerate(raw))
    return (len(raw), assembly, normalized, tuple(sorted(mask)))


def _region_rows(image, objdump, begin, end):
    cached = image.rows.get(begin, ())
    selected = [row for row in cached if begin <= row[0] and row[0] + len(row[1]) <= end]
    if selected and selected[0][0] == begin and selected[-1][0] + len(selected[-1][1]) == end and all(
            left[0] + len(left[1]) == right[0] for left, right in zip(selected, selected[1:])):
        return selected

    # Invoked exclusively from the normal build, using its fixed objdump.
    result = subprocess.run(
        [str(objdump), '-d', '-w', '-z', '-M', 'intel',
         f'--start-address={image.base + begin:#x}',
         f'--stop-address={image.base + end:#x}', str(image.path)],
        capture_output=True, text=True, encoding='utf-8', errors='replace', check=False,
    )
    if result.returncode:
        raise RuntimeError(f'Native objdump failed for {image.path} at {begin:#x}: {result.stderr.strip()}')
    rows = []
    for line in result.stdout.splitlines():
        match = _LINE.match(line)
        if not match:
            continue
        address = int(match[1], 16) - image.base
        raw = bytes.fromhex(match[2])
        if raw and begin <= address and address + len(raw) <= end:
            rows.append((address, raw, match[3]))
    # Do not allow a matching block to jump over undecoded bytes or padding.
    if not rows or rows[0][0] != begin or rows[-1][0] + len(rows[-1][1]) != end or any(
            left[0] + len(left[1]) != right[0] for left, right in zip(rows, rows[1:])):
        return []
    image.rows[begin] = rows
    if hasattr(image, 'refs'):
        refs = []
        for row in rows:
            address, raw, _ = row
            _, assembly, _, allowed = _instruction_key(image, row)
            branch = _branch_displacement(raw) if assembly.endswith('code_address') else None
            memory = _memory_displacement(raw) if '[' in assembly else None
            if branch:
                offset, width = branch
                displacement = int.from_bytes(raw[offset:offset + width], 'little', signed=True)
                refs.append((address - begin, address + len(raw) + displacement, 'code'))
            elif memory:
                offset, rip = memory
                if not all(index in allowed for index in range(offset, offset + 4)):
                    continue
                if rip:
                    displacement = int.from_bytes(raw[offset:offset + 4], 'little', signed=True)
                    refs.append((address - begin, address + len(raw) + displacement, 'data'))
                else:
                    refs.append((address - begin, int.from_bytes(raw[offset:offset + 4], 'little'), 'table'))
        image.refs[begin] = refs
    return rows


def _bounds(image, value):
    if isinstance(value, (tuple, list)) and len(value) == 2:
        return tuple(value)
    index = bisect.bisect_left(image.starts, value)
    if index >= len(image.functions) or image.functions[index][0] != value:
        raise ValueError(f'Not a native routine boundary: {value:#x}')
    return image.functions[index]


def _pair_bounds(a, b, pair):
    if len(pair) == 4:
        return (pair[0], pair[1]), (pair[2], pair[3])
    if len(pair) == 2:
        return _bounds(a, pair[0]), _bounds(b, pair[1])
    raise ValueError(f'Unsupported native routine pair: {pair!r}')


def _windows(keys, width):
    return Counter(tuple(keys[index:index + width]) for index in range(len(keys) - width + 1))


def match_instruction_regions(a, b, objdump, region_pairs, required):
    """Return exact instruction ranges and address-operand byte translations.

    Pairs can be ``((start, end), (native_start, native_end))``, four flat
    bounds, or two known function starts. ``required`` supplies reference
    coordinates; only routine pairs containing a requested coordinate need
    disassembly. All returned ranges contain unique instruction context in
    both of those already identified routines.
    """
    coordinates = sorted(required)
    ranges, changes = [], {}
    seen = set()
    for pair in region_pairs:
        (begin, end), (target, native_end) = _pair_bounds(a, b, pair)
        identity = begin, end, target, native_end
        if identity in seen:
            continue
        seen.add(identity)
        index = bisect.bisect_left(coordinates, begin)
        if index == len(coordinates) or coordinates[index] >= end:
            continue
        left = _region_rows(a, objdump, begin, end)
        right = _region_rows(b, objdump, target, native_end)
        if not left or not right:
            continue
        left_keys = [_instruction_key(a, row) for row in left]
        right_keys = [_instruction_key(b, row) for row in right]
        contexts = {width: (_windows(left_keys, width), _windows(right_keys, width)) for width in (2, 4)}
        matcher = difflib.SequenceMatcher(None, left_keys, right_keys, autojunk=False)
        matches = matcher.get_matching_blocks()
        blocks = [(block, 4) for block in matches]
        # No-unwind getters often share a padding region with unrelated code.
        # Admit their complete two-instruction RET-ended body when it occurs
        # exactly once in each already anchored region, never its following
        # padding or the first bytes of a different routine.
        for block in matches:
            for offset in range(block.size - 1):
                first = left_keys[block.a + offset][1]
                last = left_keys[block.a + offset + 1][1]
                if first.startswith(('mov ', 'lea ', 'xor ')) and last == 'ret':
                    blocks.append((difflib.Match(block.a + offset, block.b + offset, 2), 2))
        for block, width in blocks:
            left_windows, right_windows = contexts[width]
            if block.size < width:
                continue
            if any('(bad)' in key[1] or key[1].startswith('.')
                   for key in left_keys[block.a:block.a + block.size]):
                continue
            first = left[block.a][0]
            last = left[block.a + block.size - 1]
            stop = last[0] + len(last[1])
            if width == 4 and stop - first < 12:
                continue
            unique_context = False
            for offset in range(block.size - width + 1):
                context = tuple(left_keys[block.a + offset:block.a + offset + width])
                if len(set(context)) >= min(width, 3) and left_windows[context] == 1 and right_windows[context] == 1:
                    unique_context = True
                    break
            if not unique_context:
                continue
            native_first = right[block.b][0]
            # Equal instruction lengths and contiguous decoding make this a
            # complete linear block. Only individually admitted address fields
            # may differ; no immediate-value rewrite is accepted by this path.
            for offset in range(block.size):
                lrow, rrow = left[block.a + offset], right[block.b + offset]
                allowed = left_keys[block.a + offset][3]
                for byte, (old, new) in enumerate(zip(lrow[1], rrow[1])):
                    if old == new:
                        continue
                    if byte not in allowed:
                        raise RuntimeError('Non-address byte escaped native instruction matching')
                    address = lrow[0] + byte
                    previous = changes.get(address)
                    if previous is not None and previous != (old, new):
                        raise RuntimeError(f'Conflicting native instruction bytes at {address:#x}')
                    changes[address] = old, new
            ranges.append((first, stop, native_first))
    return ranges, changes
