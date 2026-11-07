"""Retain native string-shrink operations and their actual draw consumers.

The source contract is a complete five-instruction MSVC small-string shrink
or a native resize CALL receiving an explicitly identified local string.
The formatter and draw roles admit either target implementation. Frame
locations never serve as target offset fallbacks.
"""
from __future__ import annotations

import re
import struct

from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source


def _memory(raw, at, opcode):
    start = at
    if at >= len(raw) or raw[at] & 0xf8 != 0x48:
        return None
    rex = raw[at]; at += 1
    if raw[at:at + len(opcode)] != opcode:
        return None
    at += len(opcode)
    if at >= len(raw):
        return None
    modrm = raw[at]; at += 1
    mode, reg, base = modrm >> 6, ((modrm >> 3) & 7) + (8 if rex & 4 else 0), modrm & 7
    if mode not in (1, 2) or rex & 3:
        return None
    if base == 4:
        if at >= len(raw) or raw[at] != 0x24:
            return None
        at += 1
    elif base != 5:
        return None
    width = 1 if mode == 1 else 4
    if at + width > len(raw):
        return None
    offset = int.from_bytes(raw[at:at + width], 'little', signed=True)
    return at + width, base, reg, offset, start


def _shape(raw):
    """Decode just the five supported operations, preserving every register."""
    store = _memory(raw, 0, b'\x89')
    if store is None:
        return None
    at, frame, width_reg, size, _ = store
    if width_reg in (0, 4, 5):
        return None  # RAX becomes the data pointer; RSP/RBP own the local frame.
    address = _memory(raw, at, b'\x8d')
    if address is None:
        return None
    at, base, reg, obj, _ = address
    if base != frame or reg != 0 or size != obj + 16:
        return None
    capacity = _memory(raw, at, b'\x83')
    if capacity is None:
        return None
    at, base, reg, offset, _ = capacity
    if base != frame or reg != 7 or offset != obj + 24 or raw[at:at + 1] != b'\x0f':
        return None
    at += 1
    select = _memory(raw, at, b'\x0f\x47')
    if select is None:
        return None
    at, base, reg, offset, _ = select
    if base != frame or reg != 0 or offset != obj:
        return None
    rex = 0
    if at < len(raw) and 0x40 <= raw[at] <= 0x4f:
        rex = raw[at]; at += 1
    if raw[at:at + 2] != b'\xc6\x04' or at + 4 != len(raw) or raw[-1] != 0:
        return None
    sib = raw[at + 2]
    base = (sib & 7) + (8 if rex & 1 else 0)
    index = ((sib >> 3) & 7) + (8 if rex & 2 else 0)
    if sib >> 6 or (sib & 7) == 5 or (index == 4 and not rex & 2) or {base, index} != {0, width_reg}:
        return None
    return frame, width_reg, obj


def _literal(tokens, begin, end):
    part = tokens[begin:end]
    if not part or part[0] != '{' or part[-1] != '}':
        return None
    numbers = [_number([value]) for value in part[1:-1] if value != ',']
    if any(value is None or not 0 <= value <= 255 for value in numbers):
        return None
    return bytes(numbers)


def _requirements(root):
    requirements = {}
    for path in sorted((root / 'src').iterdir()):
        if path.suffix not in ('.inc', '.cpp', '.h'):
            continue
        tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8-sig')))
        pairs = _pairs(tokens)
        initializers = []
        for at, token in enumerate(tokens):
            if token != 'inline_resizes':
                continue
            if tokens[at + 1:at + 3] == ['=', '{'] and at + 2 in pairs:
                for begin, end in _parts(tokens, pairs, at + 3, pairs[at + 2]):
                    if tokens[begin:begin + 1] == ['{'] and pairs.get(begin) == end - 1:
                        initializers.append((begin, end - 1))
            elif tokens[at + 1:at + 5] == ['.', 'push_back', '(', '{'] and at + 4 in pairs:
                initializers.append((at + 4, pairs[at + 4]))
        for begin, end in initializers:
            parts = _parts(tokens, pairs, begin + 1, end)
            if len(parts) < 3:
                continue
            reference = _number(tokens[slice(*parts[0])])
            raw = _literal(tokens, *parts[1])
            call = raw is not None and len(raw) == 5 and raw[0] == 0xe8
            if call and (_literal(tokens, *parts[2]) != b'' or
                         (len(parts) > 4 and _literal(tokens, *parts[4]) != b'')):
                continue  # Custom argument/suffix relays have a separate native operation contract.
            if reference is None or not raw or (not call and _shape(raw) is None):
                continue  # Other resize expressions retain their existing byte contract.
            def boolean(index):
                if len(parts) <= index:
                    return False
                value = tokens[slice(*parts[index])]
                if value not in (['true'], ['false']):
                    raise RuntimeError(f'Inline resize {reference:#x} has a nonliteral mode')
                return value == ['true']
            flags = int(boolean(5)) | (2 if boolean(3) else 0)
            value = raw, flags
            previous = requirements.setdefault(reference, value)
            if previous != value:
                raise RuntimeError(f'Conflicting inline resize declaration at {reference:#x}')
    return requirements


def collect_inline_resize_coordinates(root):
    return set(_requirements(root))


def _draw_targets(root):
    text = _windows_source((root / 'src/native_caption_profile.inc').read_text(encoding='utf-8-sig'))
    result = set()
    for match in re.finditer(r'\bprofile\.(draw_target|flag_draw|top_draw|top_flag_draw|top_simple_draw)\s*=\s*([^;]+);', text):
        value = match[2].strip()
        if re.fullmatch(r'0x[0-9a-fA-F]+|\d+', value):
            result.add(int(value, 0))
        else:
            address = re.search(r'\bnative_pe_address\(\s*profile\.base\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*\)', value)
            if address:
                result.add(int(address[1], 0))
    if not result:
        raise RuntimeError('Caption profile has no declared native string draw target')
    return result


def _frame_address(operand):
    match = re.fullmatch(r'\[(rbp|rsp)([+-]0x[0-9a-f]+)?\]', operand.replace(' ', '').lower())
    return (5 if match[1] == 'rbp' else 4, int(match[2], 16) if match[2] else 0) if match else None


def _call_arguments(code, reference):
    """Read the actual straight-line RCX/local, RDX and zero-R8 definitions."""
    from pe_instruction_match import _branch_displacement
    previous = {address + len(raw): address for address, (raw, _) in code.items()}
    entries = set()
    for address, (raw, assembly) in code.items():
        branch = _branch_displacement(raw)
        if assembly.strip().lower().startswith('j') and branch:
            offset, width = branch
            entries.add(address + len(raw) + int.from_bytes(raw[offset:offset + width], 'little', signed=True))
    found, at = {}, reference
    for _ in range(24):
        if at in entries:
            break  # A branch into argument setup can bypass an earlier definition.
        at = previous.get(at)
        if at is None:
            break
        raw, assembly = code[at]
        parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
        operation = parts[0]
        operands = [value.strip() for value in parts[1].split(',')] if len(parts) > 1 else []
        if operation.startswith(('j', 'ret', 'loop')) or operation in ('call', 'int3', 'ud2'):
            break
        if len(operands) != 2 or operation in ('cmp', 'test', 'bt'):
            continue
        for name, aliases in (('rcx', ('rcx', 'ecx', 'cx', 'cl', 'ch')),
                              ('rdx', ('rdx', 'edx', 'dx', 'dl', 'dh')),
                              ('r8', ('r8', 'r8d', 'r8w', 'r8b'))):
            if name in found or operands[0] not in aliases:
                continue
            value = None
            if name == 'rcx' and operation == 'lea' and operands[0] == 'rcx':
                value = _frame_address(operands[1])
            elif operation == 'xor' and operands[0] == operands[1] and operands[0] in aliases[:2]:
                value = 0
            elif operation == 'mov' and operands[0] in aliases[:2]:
                try:
                    value = int(operands[1], 0)
                except ValueError:
                    pass
            found[name] = value
    return found


def _pair(code, reference, raw, shape, targets, subscripts=()):
    from pe_instruction_match import _branch_displacement
    from native_reference_semantics import _writes_rbp
    begin = reference + len(raw)
    pending, visited, draws = [(begin, None)], set(), set()
    frame, _, obj = shape
    while pending:
        address, rdx = pending.pop()
        key = address, rdx
        if key in visited:
            continue
        visited.add(key)
        if len(visited) > 4096:
            raise RuntimeError(f'Inline resize {reference:#x} has an unbounded draw-consumer path')
        row = code.get(address)
        if row is None:
            continue
        encoded, assembly = row
        parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
        operation = parts[0]
        operands = [value.strip() for value in parts[1].split(',')] if len(parts) > 1 else []
        if operation == 'call':
            if encoded[:1] == b'\xe8' and len(encoded) == 5:
                target = address + 5 + int.from_bytes(encoded[1:], 'little', signed=True)
                if target in targets and rdx == (frame, obj):
                    draws.add((address, target))
                elif target in subscripts:
                    arguments = _call_arguments(code, address)
                    following = code.get(address + 5)
                    if arguments.get('rcx') == (frame, obj) and following and following[0] == b'\xc6\x00\x2e':
                        pending.append((address + 8, None))
            continue  # A helper may mutate/reuse the string. It needs a separate contract.
        if operation.startswith(('ret', 'loop')) or operation in ('int3', 'ud2', 'leave', 'enter', 'push', 'pop'):
            continue
        if _writes_rbp(assembly) or (operands and operands[0] in ('rsp', 'esp', 'sp', 'spl') and
                                    operation not in ('cmp', 'test', 'bt')):
            continue
        if operands and operands[0] in ('rdx', 'edx', 'dx', 'dl', 'dh') and operation not in ('cmp', 'test', 'bt'):
            rdx = _frame_address(operands[1]) if operation == 'lea' and operands[0] == 'rdx' and len(operands) == 2 else None
        branch = _branch_displacement(encoded)
        if operation.startswith('j'):
            if branch is None:
                continue
            at, width = branch
            target = address + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in code:
                pending.append((target, rdx))
            if operation == 'jmp':
                continue
        pending.append((address + len(encoded), rdx))
    if len(draws) != 1:
        raise RuntimeError(f'Inline resize {reference:#x} has {len(draws)} uniquely owned native draw consumers')
    return next(iter(draws))


def _producer_role(code, reference, shape):
    """A real earlier CALL receiving this exact local, across its source CFG.

    Stop at other calls or object initialization/overwrite. Constant fallback
    branches can therefore contribute no role; they cannot borrow a formatter
    that belonged to an earlier lifetime of the same stack storage.
    """
    from pe_instruction_match import _branch_displacement
    frame, _, obj = shape
    before, previous = {}, {}
    for address, (encoded, assembly) in code.items():
        parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
        operation = parts[0]
        following = address + len(encoded)
        previous[following] = address
        if not operation.startswith(('ret', 'loop')) and operation not in ('jmp', 'int3', 'ud2'):
            if following in code:
                before.setdefault(following, []).append(address)
        branch = _branch_displacement(encoded)
        if operation.startswith('j') and branch:
            at, width = branch
            target = following + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in code:
                before.setdefault(target, []).append(address)

    def argument(call, wanted):
        at = call
        aliases = {'rcx', 'ecx', 'cx', 'cl', 'ch'} if wanted == 'rcx' else {'rdx', 'edx', 'dx', 'dl', 'dh'}
        for _ in range(24):
            at = previous.get(at)
            if at is None:
                return None
            encoded, assembly = code[at]
            parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
            operation = parts[0]
            operands = [value.strip() for value in parts[1].split(',')] if len(parts) > 1 else []
            if operation.startswith(('j', 'ret', 'loop')) or operation in ('call', 'int3', 'ud2'):
                return None
            if operands and operands[0] in aliases and operation not in ('cmp', 'test', 'bt'):
                return _frame_address(operands[1]) if operation == 'lea' and operands[0] == wanted else None
        return None

    pending, visited, roles = list(before.get(reference, ())), set(), set()
    while pending:
        at = pending.pop()
        if at in visited:
            continue
        visited.add(at)
        if len(visited) > 4096:
            return 0, 0
        encoded, assembly = code[at]
        parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
        operation = parts[0]
        operands = [value.strip() for value in parts[1].split(',')] if len(parts) > 1 else []
        if operation == 'call':
            if len(encoded) == 5 and encoded[0] == 0xe8:
                target = at + 5 + int.from_bytes(encoded[1:], 'little', signed=True)
                for reg, name in ((1, 'rcx'), (2, 'rdx')):
                    if argument(at, name) == (frame, obj):
                        roles.add((target, reg))
            continue
        if operands and operation not in ('cmp', 'test', 'bt'):
            memory = re.search(r'\[(?:rbp|rsp)(?:[+-]0x[0-9a-f]+)?\]', operands[0])
            if memory:
                local = _frame_address(memory[0])
                if local and local[0] == frame:
                    width = next((size for name, size in (('xmmword', 16), ('qword', 8), ('dword', 4), ('word', 2), ('byte', 1))
                                  if operands[0].startswith(name + ' ptr ')), None)
                    if width is None or local[1] < obj + 32 and local[1] + width > obj:
                        continue
        if operation.startswith('ret') or operation in ('int3', 'ud2', 'leave', 'enter', 'push', 'pop'):
            continue
        pending.extend(before.get(at, ()))
    return next(iter(roles)) if len(roles) == 1 else (0, 0)


def _subscript_targets(patterns, decoded):
    """Find complete operator[] bodies at retained, actual CALL boundaries.

    Reviewed leaf carriers include their surrounding padding until the later
    general leaf pass splits them. Their start is not necessarily the called
    function's start. Require the whole closed body inside one carrier and
    every decoded instruction boundary; never join neighboring byte ranges.
    """
    shape = bytes.fromhex('488379180f7607488b014803c2c3488d0411c3')
    callees = set()
    for _, flags, _, raw, _, fixups in patterns:
        if not flags & 1 or flags & 4:
            continue
        for offset, width, following, target, kind in fixups:
            if (kind & 0x100 and not kind & 0xff and width == 4 and offset and
                    following == offset + 4 and raw[offset - 1:offset] == b'\xe8'):
                callees.add(target)
    result = set()
    for index, (reference, flags, _, raw, _, _) in enumerate(patterns):
        if not flags & 1 or flags & 4:
            continue
        offset = raw.find(shape)
        if offset < 0:
            continue
        rows = {at: encoded for at, encoded, _ in decoded.get(index, ())}
        while offset >= 0:
            if reference + offset in callees:
                cursor, end = offset, offset + len(shape)
                while cursor in rows and cursor < end:
                    encoded = rows[cursor]
                    if cursor + len(encoded) > end or raw[cursor:cursor + len(encoded)] != encoded:
                        break
                    cursor += len(encoded)
                if cursor == end:
                    result.add(reference + offset)
            offset = raw.find(shape, offset + 1)
    return result


def build_inline_resize_evidence(root, known, patterns, decoded, objdump=None):
    requirements = _requirements(root)
    from native_reference_semantics import verified_reference_instruction_sites
    verified = verified_reference_instruction_sites(root, known, requirements, patterns, decoded, objdump)
    owners, code = {}, {}
    for index, (reference, flags, owner, raw, mask, fixups) in enumerate(patterns):
        if not flags & 2 or not owner:
            continue
        rows = decoded.get(index, ())
        target = code.setdefault(owner, {})
        for offset, encoded, assembly in rows:
            value = encoded, assembly
            previous = target.setdefault(reference + offset, value)
            if previous[0] != encoded:
                raise RuntimeError(f'Conflicting inline-resize source boundary at {reference + offset:#x}')
        for site, (expected, mode) in requirements.items():
            offset = site - reference
            if 0 <= offset and offset + len(expected) <= len(raw) and raw[offset:offset + len(expected)] == expected:
                previous = owners.setdefault(site, owner)
                if previous != owner:
                    raise RuntimeError(f'Inline resize {site:#x} has conflicting source callers')
    content = bytearray(b'DFCNIR01' + struct.pack('<II', 3, len(requirements)))
    targets = _draw_targets(root)
    source = _windows_source((root / 'src/native_caption_profile.inc').read_text(encoding='utf-8-sig'))
    resize_targets = {int(value, 0) for value in re.findall(
        r'\bprofile\.resize_target\s*=\s*(0x[0-9a-fA-F]+|\d+)\s*;', source)}
    # Runtime profiles clear unavailable optional entries to zero. That is
    # absence of a binding, not a second native ABI candidate.
    resize_targets.discard(0)
    if len(resize_targets) != 1:
        raise RuntimeError('Caption profile must identify one native string resize ABI')
    resize_target = next(iter(resize_targets))
    subscripts = _subscript_targets(patterns, decoded)
    roles = 0
    for reference, (raw, flags) in sorted(requirements.items()):
        owner = owners.get(reference)
        if not owner or reference not in verified:
            raise RuntimeError(f'Inline resize {reference:#x} lacks a reviewed source instruction boundary')
        selected = code[owner]
        at, count = reference, 0
        while at < reference + len(raw) and at in selected:
            at += len(selected[at][0]); count += 1
        source_call = len(raw) == 5 and raw[0] == 0xe8
        if at != reference + len(raw) or count != (1 if source_call else 5):
            raise RuntimeError(f'Inline resize {reference:#x} is not five complete source instructions')
        source_width = 0
        if source_call:
            arguments = _call_arguments(selected, reference)
            actual = reference + 5 + int.from_bytes(raw[1:], 'little', signed=True)
            local = arguments.get('rcx')
            if actual != resize_target or not isinstance(local, tuple) or arguments.get('r8') != 0:
                raise RuntimeError(f'Inline resize CALL {reference:#x} lacks its native local/zero-fill ABI')
            shape = local[0], 2, local[1]
            width = arguments.get('rdx')
            source_width = width if isinstance(width, int) and 0 < width <= 0xffffffff else 0
        else:
            shape = _shape(raw)
        draw, target = _pair(selected, reference, raw, shape, targets, subscripts)
        content.extend(struct.pack('<6I', reference, owner, draw, target, flags, len(raw)))
        content.extend(raw)
        producer, argument = _producer_role(selected, reference, shape)
        roles += bool(producer)
        content.extend(struct.pack('<3I', producer, argument, resize_target))
        content.extend(struct.pack('<I', source_width))
    print(f'Generated inline resize evidence: {len(requirements)} complete native string operations and paired draws; '
          f'{roles} explicit formatter roles.', flush=True)
    return bytes(content)


def inline_resize_dependencies(blob):
    version = struct.unpack_from('<I', blob, 8)[0]
    count = struct.unpack_from('<I', blob, 12)[0]
    offset, result = 16, {}
    for _ in range(count):
        reference, owner, draw, target, flags, size = struct.unpack_from('<6I', blob, offset)
        offset += 24 + size
        producer = 0
        if version >= 2:
            producer, argument, resize = struct.unpack_from('<3I', blob, offset)
            offset += 12
            result[resize] = max(result.get(resize, 0), 1)
        if version >= 3:
            offset += 4
        # Formatter identity and an independently mapped draw are alternative
        # proofs, not simultaneous global resource requirements. Retained
        # formatter code participates in ordinary discovery; selecting that
        # path still requires its actual binding at runtime. Every operation
        # remains mandatory in complete_inline_resizes, so an unavailable
        # alternative never turns into a silent omission.
        # Without any declared alternative, retain the independent CALL gate.
        if not producer:
            result[draw] = max(result.get(draw, 0), 5)
        result[target] = max(result.get(target, 0), 1)
    if offset != len(blob):
        raise RuntimeError('Invalid inline-resize dependency payload')
    return result
