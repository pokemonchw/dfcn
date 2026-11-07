"""Describe complete constant text values passed to reviewed native draws.

Only the normal seed build calls this producer. A nearby string is not an
identity: every byte of the same inline std::string, its size, capacity and
terminator must be supplied in one straight-line construction before the call.
"""
from __future__ import annotations

from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess

from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates, reference_frame_registers


_LINE = re.compile(r'^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)$')
_LOCAL = re.compile(r'\[(rsp|rbp)([+-]0x[0-9a-f]+)?\]$')
_GPRS = [('rax', 'eax', 'ax', 'al'), ('rcx', 'ecx', 'cx', 'cl'),
         ('rdx', 'edx', 'dx', 'dl'), ('rbx', 'ebx', 'bx', 'bl'),
         ('rsp', 'esp', 'sp', 'spl'), ('rbp', 'ebp', 'bp', 'bpl'),
         ('rsi', 'esi', 'si', 'sil'), ('rdi', 'edi', 'di', 'dil')]
_GPRS += [(f'r{n}', f'r{n}d', f'r{n}w', f'r{n}b') for n in range(8, 16)]
_REG = {name: (index, width) for index, names in enumerate(_GPRS)
        for name, width in zip(names, (8, 4, 2, 1))}
_WIDTH = {'BYTE': 1, 'WORD': 2, 'DWORD': 4, 'QWORD': 8, 'XMMWORD': 16}


def _local(operand):
    found = _LOCAL.search(operand)
    return (found[1], int(found[2] or '0', 16)) if found else None


def _parts(assembly):
    assembly = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', assembly, flags=re.I)
    code = assembly.split('#', 1)[0].strip().split(None, 1)
    return (code[0], [part.strip() for part in code[1].split(',')] if len(code) > 1 else []) if code else ('', [])


_STRING_NUL = bytes.fromhex('40534883ec2033c00f57c00f110148894110488bd94889411849c7c0ffffffff49ffc04238040275f7e800000000488bc34883c4205bc3')
_STRING_SHORT = bytes.fromhex('48896c2410488974241848897c242041564883ec2048bdffffffffffffff7f498bf84c8bf2488bf14c3bc50f87810000004983f80f77174c89411048c741180f000000e800000000c6043700eb4e')
_STRING_END = bytes.fromhex('488b6c2438488b742440488b7c24484883c420415ec3')


def _short_constructor(image, target):
    cache = getattr(image, '_dfcn_short_constructors', None)
    if cache is None:
        cache = image._dfcn_short_constructors = {}
    if target in cache:
        return cache[target]
    cache[target] = 0
    extent = next((end for begin, end in image.functions if begin == target), 0)
    if not extent:
        return 0
    def matches(template, displacement):
        if target + len(template) > extent:
            return None
        data = image.read(target, len(template))
        return data if data[:displacement] == template[:displacement] and data[displacement + 4:] == template[displacement + 4:] else None
    raw = matches(_STRING_SHORT, 0x44)
    if raw:
        copy = target + 0x48 + struct.unpack_from('<i', raw, 0x44)[0]
        thunk = image.read(copy, 6)
        slot = image.imports.get(('vcruntime140.dll', 'memcpy'))
        end = target + len(raw) + struct.unpack_from('<b', raw, len(raw) - 1)[0]
        if thunk[:2] == b'\xff\x25' and slot and copy + 6 + struct.unpack_from('<i', thunk, 2)[0] == slot and \
                end + len(_STRING_END) <= extent and image.read(end, len(_STRING_END)) == _STRING_END:
            cache[target] = 1
    raw = matches(_STRING_NUL, 0x2a)
    if raw and _short_constructor(image, target + 0x2e + struct.unpack_from('<i', raw, 0x2a)[0]) == 1:
        cache[target] = 2
    return cache[target]


def _constructed_text(image, rows, call, entries, output, frame):
    address, raw, _ = rows[call]
    if len(raw) != 5 or raw[0] != 0xe8:
        return None
    kind = _short_constructor(image, address + 5 + struct.unpack_from('<i', raw, 1)[0])
    if not kind:
        return None
    arguments = {}
    for index in range(call - 1, max(-1, call - 17), -1):
        at, encoded, assembly = rows[index]
        operation, operands = _parts(assembly)
        if rows[index][0] + len(encoded) != rows[index + 1][0] or operation == 'call' or operation.startswith(('j', 'loop', 'ret')):
            break
        if operation not in ('mov', 'movzx', 'movsx', 'movsxd', 'lea', 'cmp', 'test', 'bt', 'nop',
                             'add', 'sub', 'and', 'or', 'xor', 'inc', 'dec', 'neg', 'not',
                             'shl', 'shr', 'sar', 'imul', 'xchg', 'xadd',
                             'movaps', 'movups', 'movdqa', 'movdqu', 'movss', 'movsd',
                             'movq', 'movd', 'xorps', 'pxor'):
            break
        if operation == 'imul' and len(operands) < 2 or operands and operands[0] in ('rsp', 'esp', 'sp', 'spl') and operation not in ('cmp', 'test', 'bt'):
            break
        if operation in ('xchg', 'xadd'):
            if any(operand in ('rsp', 'esp', 'sp', 'spl') for operand in operands):
                break
            for operand in operands:
                register = _REG.get(operand)
                if register and register[0] in (1, 2, 8):
                    arguments.setdefault(register[0], None)
        if operands and operands[0] in _REG and operation not in ('cmp', 'test', 'bt', 'push'):
            register = _REG[operands[0]][0]
            if register in (1, 2, 8) and register not in arguments:
                value = None
                if register == 1 and operation == 'lea' and operands[0] == 'rcx':
                    value = _local(operands[1])
                    if value and value[0] == 'rbp' and not (frame and frame[0] <= at < frame[1]):
                        value = None
                elif register == 2 and operation == 'lea' and operands[0] == 'rdx' and '[rip' in operands[1]:
                    match = re.search(r'# (?:0x)?([0-9a-f]+)', assembly)
                    value = int(match[1], 16) - image.base if match else None
                elif register == 8 and operation == 'mov' and re.fullmatch(r'(?:0x[0-9a-f]+|[0-9]+)', operands[1]):
                    value = int(operands[1], 0)
                arguments[register] = value
        if at in entries:
            break
    if arguments.get(1) != output or arguments.get(2) is None:
        return None
    literal = arguments[2]
    section = image.section(literal)
    if not section or section[4] & 0xa0000000:
        return None
    if kind == 1:
        length = arguments.get(8)
        if length is None or not 1 <= length <= 15:
            return None
        text = image.read(literal, length)
    else:
        data = image.read(literal, 16)
        if b'\0' not in data:
            return None
        text = data.split(b'\0', 1)[0]
    return text if 1 <= len(text) <= 15 and all(32 <= byte <= 126 for byte in text) else None


def _constant_text(image, rows, call_index, entries, frame):
    # RDX is the actual string object, RCX the RIP-relative receiver. Do not
    # infer an object from the stack displacement used by another draw.
    output = receiver = None
    begin = call_index
    for index in range(call_index - 1, max(-1, call_index - 17), -1):
        address, raw, assembly = rows[index]
        operation, operands = _parts(assembly)
        if operation.startswith(('j', 'loop', 'ret')) or operation == 'call':
            break
        if operation not in ('mov', 'movzx', 'movsd', 'movss', 'movdqu', 'movdqa', 'movups', 'movaps',
                             'xor', 'xorps', 'pxor', 'lea', 'cmp', 'test', 'bt', 'nop',
                             'add', 'sub', 'and', 'or', 'inc', 'dec', 'neg', 'not', 'shl', 'shr', 'sar', 'imul'):
            return None
        if operation == 'imul' and len(operands) < 2:
            return None
        if operands and operands[0] in ('rdx', 'edx', 'dx', 'dl') and output is None:
            if operation != 'lea' or operands[0] != 'rdx':
                return None
            output = _local(operands[1])
            if not output or output[0] == 'rbp' and not (frame and frame[0] <= address < frame[1]):
                return None
        if operands and operands[0] in ('rcx', 'ecx', 'cx', 'cl') and receiver is None:
            target = re.search(r'# (?:0x)?([0-9a-f]+)', assembly)
            if operation != 'lea' or operands[0] != 'rcx' or '[rip' not in operands[1] or not target:
                return None
            receiver = int(target[1], 16) - image.base
        if output is not None and receiver is not None:
            break
        if address in entries:
            break
        if index and rows[index - 1][0] + len(rows[index - 1][1]) != address:
            break
    if output is None or receiver is None:
        return None
    while begin and call_index - begin < 128:
        if rows[begin][0] in entries:
            break
        operation, _ = _parts(rows[begin - 1][2])
        if operation == 'call' or operation.startswith(('j', 'loop', 'ret')) or operation == 'int3':
            break
        if rows[begin - 1][0] + len(rows[begin - 1][1]) != rows[begin][0]:
            break
        begin -= 1
    values = [[None] * 16 for _ in range(32)]
    memory = [None] * 32
    if begin and rows[begin][0] not in entries and (text := _constructed_text(image, rows, begin - 1, entries, output, frame)):
        memory[:len(text) + 1] = list(text) + [0]
        memory[16:24] = list(len(text).to_bytes(8, 'little'))
        memory[24:32] = list((15).to_bytes(8, 'little'))
    for address, raw, assembly in rows[begin:call_index]:
        operation, operands = _parts(assembly)
        if (operation in ('push', 'pop', 'pushfq', 'popfq', 'leave', 'enter') or
                operands and operands[0] in ('rsp', 'esp', 'sp', 'spl') and operation not in ('cmp', 'test', 'bt')):
            return None
        if output[0] == 'rbp' and (not frame or not frame[0] <= address < frame[1]):
            return None
        if operation not in ('mov', 'movzx', 'movsd', 'movss', 'movdqu', 'movdqa', 'movups', 'movaps',
                             'xor', 'xorps', 'pxor', 'lea', 'cmp', 'test', 'bt', 'nop',
                             'add', 'sub', 'and', 'or', 'inc', 'dec', 'neg', 'not', 'shl', 'shr', 'sar', 'imul'):
            # Implicit stores and multi-destination operations cannot leave
            # previously known object/register bytes intact.
            values = [[None] * 16 for _ in range(32)]
            memory = [None] * 32
            continue
        if (operation == 'imul' and len(operands) < 2) or (operation == 'movsd' and not operands):
            values = [[None] * 16 for _ in range(32)]
            memory = [None] * 32
            continue
        if not operands:
            continue
        destination = operands[0]
        register = _REG.get(destination)
        xmm = re.fullmatch(r'xmm(\d+)', destination)
        destination_index = register[0] if register else 16 + int(xmm[1]) if xmm else None
        previous = [list(value) for value in values]
        if destination_index is not None and operation not in ('cmp', 'test', 'push', 'bt'):
            values[destination_index] = [None] * 16
        if len(operands) != 2:
            continue
        source = operands[1]
        width = register[1] if register else 16 if xmm else 0
        result = None
        if destination_index is not None:
            if operation in ('xor', 'xorps', 'pxor') and source == destination:
                result = [0] * width
            elif operation in ('mov', 'movzx', 'movsd', 'movss', 'movdqu', 'movdqa', 'movups', 'movaps'):
                if source in _REG:
                    result = previous[_REG[source][0]][:width]
                elif re.fullmatch(r'xmm\d+', source):
                    result = previous[16 + int(source[3:])][:width]
                elif re.fullmatch(r'-?0x[0-9a-f]+|\d+', source):
                    result = list((int(source, 0) % (1 << (width * 8))).to_bytes(width, 'little'))
                elif '[rip' in source:
                    target = re.search(r'# (?:0x)?([0-9a-f]+)', assembly)
                    size = next((size for name, size in _WIDTH.items() if source.startswith(name + ' PTR')), 0)
                    if target and size:
                        at = int(target[1], 16) - image.base
                        section = image.section(at)
                        if section and not section[4] & 0xa0000000:
                            result = list(image.read(at, size))
                            if operation == 'movzx':
                                result.extend([0] * (width - size))
                if operation == 'movsd' and result is not None:
                    result = result[:8]
                if operation == 'movss' and result is not None:
                    result = result[:4]
            if result is not None:
                values[destination_index][:len(result)] = result
                if register and width == 4:
                    values[destination_index][4:8] = [0] * 4
            continue
        if '[' not in destination or operation in ('cmp', 'test', 'bt'):
            continue
        local = _local(destination)
        if not local:
            if '[rip' not in destination:
                memory = [None] * 32
            continue
        if local[0] != output[0]:
            # No assumed relation between an RBP displacement and RSP.
            memory = [None] * 32
            continue
        offset = local[1] - output[1]
        width = next((size for name, size in _WIDTH.items() if destination.startswith(name + ' PTR')), 0)
        if not width:
            memory = [None] * 32
            continue
        if offset >= 32 or offset + width <= 0:
            continue
        if operation in ('mov', 'movsd', 'movss', 'movdqu', 'movdqa', 'movups', 'movaps'):
            if source in _REG:
                result = previous[_REG[source][0]][:width]
            elif re.fullmatch(r'xmm\d+', source):
                result = previous[16 + int(source[3:])][:width]
            elif re.fullmatch(r'-?0x[0-9a-f]+|\d+', source):
                result = list((int(source, 0) % (1 << (width * 8))).to_bytes(width, 'little'))
        for index in range(max(0, offset), min(32, offset + width)):
            memory[index] = result[index - offset] if result is not None else None
    if any(value is None for value in memory[16:32]):
        return None
    size = int.from_bytes(bytes(memory[16:24]), 'little')
    capacity = int.from_bytes(bytes(memory[24:32]), 'little')
    if not 1 <= size <= 15 or capacity != 15 or memory[size] != 0 or any(
            value is None or not 32 <= value <= 126 for value in memory[:size]):
        return None
    return receiver, bytes(memory[:size])


def build_text_draw_evidence(root, known, patterns, required, decoded, *, objdump, receiver):
    from build_pe_runtime_seed import Writer
    writer = Writer(); writer.content.extend(b'DFCNTD01'); writer.u32(1)
    configured = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig')).get('classic')
    path = Path(configured) if configured else None
    if path and not path.is_absolute():
        path = root / path
    if not path or not path.is_file():
        writer.u32(0); return bytes(writer.content)
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known if entry[0].decode().endswith(' Classic') and entry[1] == identity]
    if len(profiles) != 1:
        writer.u32(0); return bytes(writer.content)
    profile = profiles[0]
    ranges = list(struct.iter_unpack('<III', profile[2]))
    forward = _Coordinates(ranges)
    changes = {address: (source, target) for address, source, target in struct.iter_unpack('<IBB', profile[3])}
    native_receiver = forward.unique(receiver)
    whole = [entry for entry in patterns if entry[1] & 2]
    requests = {}
    consumed = set()
    for address, width in required:
        if width == 5:
            consumed.add(address)
        elif width == 1:
            # Return-site consumers own the real E8 and its next instruction,
            # not an arbitrary previous five-byte window. The reviewed image
            # disassembly below must confirm both exact boundaries.
            consumed.update((address, address - 5))
    for reference in sorted(consumed):
        bodies = [entry for entry in whole if entry[0] <= reference and reference + 5 <= entry[0] + len(entry[3])]
        if len(bodies) != 1:
            continue
        body = bodies[0]; offset = reference - body[0]; original = body[3][offset:offset + 5]
        if original[0] != 0xe8:
            continue
        callee = reference + 5 + struct.unpack_from('<i', original, 1)[0]
        actual, target = forward.unique(reference, 5), forward.unique(callee)
        if actual is None or target is None:
            continue
        expected = bytes(changes.get(reference + at, (byte, byte))[1] for at, byte in enumerate(original))
        if image.read(actual, 5) != expected or actual + 5 + struct.unpack_from('<i', expected, 1)[0] != target:
            continue
        region = next(((begin, end) for begin, end in image.functions if begin <= actual < end), None)
        if not region or forward.unique(body[2]) != region[0]:
            continue
        continuation = body[3][offset + 5] + 1 if offset + 5 < len(body[3]) else 0
        requests.setdefault((body[2], region), []).append((reference, callee, actual, target, original, continuation))
    frames = {entry[0]: entry for entry in reference_frame_registers(root, known,
              [owner for owner, _ in requests], patterns=patterns, decoded=decoded, objdump=objdump)}
    # Reviewed x64 MSVC switch tables contain aligned image-relative DWORD
    # destinations (or absolute code pointers). Conservatively retain every
    # such value from immutable image storage as a possible block entry; a
    # text construction may never cross one merely because linear objdump
    # did not print a direct branch to it.
    text_ranges = [(section[0], section[1]) for section in image.sections if section[4] & 0x20000000]
    possible_entries = set()
    for section in image.sections:
        if section[4] & 0x80000000:
            continue
        data = image.data[section[2]:section[2] + (section[3] & ~3)]
        for (value,) in struct.iter_unpack('<I', data):
            for candidate in (value, (value - (image.base & 0xffffffff)) & 0xffffffff):
                if any(begin <= candidate < end for begin, end in text_ranges):
                    possible_entries.add(candidate)
    records = []
    for (owner, region), uses in sorted(requests.items()):
        output = subprocess.check_output([str(objdump), '-d', '-w', '-Mintel',
            f'--start-address={image.base + region[0]:#x}', f'--stop-address={image.base + region[1]:#x}', str(path)], text=True)
        rows = [(int(match[1], 16) - image.base, bytes.fromhex(match[2]), match[3])
                for line in output.splitlines() if (match := _LINE.match(line))]
        entries = {region[0]} | {address for address in possible_entries if region[0] <= address < region[1]}
        for address, raw, assembly in rows:
            operation, _ = _parts(assembly)
            if operation.startswith(('j', 'loop', 'ret')) or operation == 'int3':
                entries.add(address + len(raw))
                branch = re.match(r'\w+\s+(?:0x)?([0-9a-f]+)', assembly)
                if branch:
                    entries.add(int(branch[1], 16) - image.base)
        observed = {}
        targets = {target for _, _, _, target, _, _ in uses}
        frame = None
        if owner in frames and frames[owner][1] & 0xff == 5:
            ready, end = forward.unique(frames[owner][2]), forward.unique(frames[owner][3] - 1)
            if ready is not None and end is not None and ready <= end:
                frame = ready, end + 1
        # A linear disassembler must not hide a second candidate after inline
        # data. Every raw E8 to these callees must have its actual boundary in
        # the retained rows, or this owner supplies no uniqueness proof.
        indexed_calls = {address for address, raw, _ in rows if len(raw) == 5 and raw[0] == 0xe8}
        raw_owner = image.read(region[0], region[1] - region[0])
        raw_calls = {region[0] + offset for offset in range(len(raw_owner) - 4)
                     if raw_owner[offset] == 0xe8 and region[0] + offset + 5 +
                     struct.unpack_from('<i', raw_owner, offset + 1)[0] in targets}
        if not raw_calls.issubset(indexed_calls):
            continue
        for index, (address, raw, assembly) in enumerate(rows):
            if len(raw) != 5 or raw[0] != 0xe8:
                continue
            target = address + 5 + struct.unpack_from('<i', raw, 1)[0]
            if target in targets and (text := _constant_text(image, rows, index, entries, frame)) and text[0] == native_receiver:
                observed[address] = target, text[1]
        counts = Counter(observed.values())
        for reference, callee, actual, target, original, continuation in uses:
            value = observed.get(actual)
            index = next((index for index, row in enumerate(rows) if row[0] == actual), None)
            if index is None or index + 1 >= len(rows) or rows[index + 1][0] != actual + 5:
                continue
            if continuation:
                expected = changes.get(reference + 5, (continuation - 1, continuation - 1))[1]
                if image.read(actual + 5, 1) != bytes([expected]):
                    continue
            if value and counts[value] == 1:
                records.append((reference, owner, callee, receiver, continuation, original, value[1]))
    writer.u32(len(records))
    for reference, owner, callee, receiver, continuation, original, text in sorted(records):
        for value in (reference, owner, callee, receiver, continuation):
            writer.u32(value)
        writer.sized(original); writer.sized(text)
    print(f'Canonical text draws: {len(records)} complete inline-string values own unique reviewed calls.', flush=True)
    return bytes(writer.content)
