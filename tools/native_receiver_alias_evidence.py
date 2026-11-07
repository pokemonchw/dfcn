"""Produce typed loads through proved nonvolatile entry-receiver aliases.

Only the normal seed producer invokes this module. The reference image must
match a reviewed edition exactly; neither a guessed register nor a nearby
integer is enough to describe a member operand.
"""
from __future__ import annotations

from collections import deque
import hashlib
import json
from pathlib import Path
import re
import struct

from build_history_layouts import consumer_requirements
from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates

_GPRS = [('rax', 'eax', 'ax', 'al'), ('rcx', 'ecx', 'cx', 'cl'),
         ('rdx', 'edx', 'dx', 'dl'), ('rbx', 'ebx', 'bx', 'bl'),
         ('rsp', 'esp', 'sp', 'spl'), ('rbp', 'ebp', 'bp', 'bpl'),
         ('rsi', 'esi', 'si', 'sil'), ('rdi', 'edi', 'di', 'dil')]
_GPRS += [(f'r{n}', f'r{n}d', f'r{n}w', f'r{n}b') for n in range(8, 16)]
_REG = {name: (index, width) for index, names in enumerate(_GPRS)
        for name, width in zip(names, (8, 4, 2, 1))}
_NONVOLATILE = {3, 5, 6, 7, 12, 13, 14, 15}
_VOLATILE = sum(1 << index for index in (0, 1, 2, 8, 9, 10, 11))


def _parts(assembly):
    text = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', assembly.lower()).split('#', 1)[0].strip()
    values = text.split(None, 1)
    return (values[0], [item.strip() for item in values[1].split(',')] if len(values) > 1 else []) if values else ('', [])


def _transfer(mask, operation, operands):
    if operation.startswith('loop'):
        return mask & ~(1 << 1)
    if operation == 'call':
        return mask & ~_VOLATILE
    if operation.startswith(('j', 'loop', 'ret')) or operation in ('cmp', 'test', 'bt', 'nop', 'int3', 'push'):
        return mask
    if operation == 'leave':
        return mask & ~((1 << 4) | (1 << 5))
    if operation in ('mul', 'div', 'idiv') or operation == 'imul' and len(operands) < 2:
        return mask & ~((1 << 0) | (1 << 2))
    if operation in ('cdqe', 'cwde', 'cbw'):
        return mask & ~(1 << 0)
    if operation in ('cqo', 'cdq', 'cwd'):
        return mask & ~(1 << 2)
    if not operands:
        return 0
    if operation in ('xchg', 'xadd'):
        for operand in operands:
            if operand in _REG:
                mask &= ~(1 << _REG[operand][0])
        return mask
    destination = _REG.get(operands[0])
    if not destination:
        # Ordinary explicit stores and SIMD operations do not assign a GPR.
        explicit_store = operation in ('mov', 'movsd', 'movss', 'movdqu', 'movdqa', 'movups', 'movaps',
                                       'add', 'sub', 'and', 'or', 'xor', 'inc', 'dec', 'neg', 'not',
                                       'shl', 'shr', 'sar')
        return mask if (explicit_store and '[' in operands[0]) or operands[0].startswith(('xmm', 'ymm', 'mm')) else 0
    source = _REG.get(operands[1]) if len(operands) > 1 else None
    copied = operation == 'mov' and destination[1] == 8 and source and source[1] == 8 and mask & (1 << source[0])
    mask &= ~(1 << destination[0])
    return mask | (1 << destination[0]) if copied else mask


def _lineage(reference, raw, rows):
    code = {reference + offset: (encoded, assembly) for offset, encoded, assembly in rows}
    if reference not in code or any(raw[at - reference:at - reference + len(value[0])] != value[0]
                                    for at, value in code.items()):
        return {}
    incoming, pending = {reference: 1 << 1}, deque([reference])
    while pending:
        address = pending.popleft()
        encoded, assembly = code[address]
        operation, operands = _parts(assembly)
        after = _transfer(incoming[address], operation, operands)
        next_at = address + len(encoded)
        successors = []
        if operation.startswith('ret') or operation == 'int3':
            pass
        elif operation.startswith(('j', 'loop')):
            # The retained instruction owns the displacement; objdump's
            # printed absolute address can belong to a different image base.
            from pe_instruction_match import _branch_displacement
            branch = _branch_displacement(encoded)
            if not branch:
                return {}
            at, width = branch
            successors.append(next_at + int.from_bytes(encoded[at:at + width], 'little', signed=True))
            if operation != 'jmp':
                successors.append(next_at)
        else:
            successors.append(next_at)
        for target in successors:
            if target not in code:
                return {}
            value = after if target not in incoming else incoming[target] & after
            if target not in incoming or value != incoming[target]:
                incoming[target] = value
                pending.append(target)
    return incoming


def build_receiver_alias_sites(root, known, patterns, decoded):
    expression = r'\bDFCN_NATIVE_RECEIVER\(\s*(0[xX][0-9a-fA-F]+|[0-9]+)\s*,\s*"([A-Za-z_][A-Za-z0-9_:]*)"\s*\)'
    declarations = {}
    for owner, name in re.findall(expression, consumer_requirements(root)[0]):
        owner = int(owner, 0)
        if owner in declarations and declarations[owner] != name:
            raise RuntimeError(f'Conflicting declared receiver types at {owner:#x}')
        declarations[owner] = name
    if not declarations:
        return []
    metadata = json.loads((root / 'data/runtime/native-addresses/pe-layout-semantics.json').read_text(encoding='utf-8'))
    types = {entry['name']: entry for entry in metadata['types']}
    configured = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig')).get('classic')
    path = Path(configured) if configured else None
    if path and not path.is_absolute():
        path = root / path
    if not path or not path.is_file():
        return []
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known if entry[1] == identity]
    if len(profiles) != 1:
        return []
    forward = _Coordinates(struct.iter_unpack('<III', profiles[0][2]))
    changes = {address: native for address, source, native in struct.iter_unpack('<IBB', profiles[0][3])}
    result = []
    for index, pattern in enumerate(patterns):
        reference, flags, owner, raw, mask, _ = pattern
        if not flags & 2 or reference != owner or owner not in declarations:
            continue
        native = forward.unique(reference, len(raw))
        if native is None or image.read(native, len(raw)) != bytes(changes.get(reference + at, value) for at, value in enumerate(raw)):
            continue
        spec = types.get(declarations[owner])
        if not spec:
            raise RuntimeError(f'Unknown declared receiver type {declarations[owner]}')
        rows = decoded.get(index, ())
        lineage = _lineage(reference, raw, rows)
        for offset, encoded, assembly in rows:
            # First version deliberately keeps instruction size, operand
            # width and destination register unchanged. Only a non-SIB
            # QWORD MOV from a named receiver field can change its base.
            if len(encoded) not in (4, 7) or encoded[0] & 0xf8 != 0x48 or encoded[1] != 0x8b:
                continue
            modrm = encoded[2]; mode, base = modrm >> 6, (modrm & 7) + (8 if encoded[0] & 1 else 0)
            width = 1 if mode == 1 else 4 if mode == 2 else 0
            if not width or len(encoded) != 3 + width or modrm & 7 == 4 or base not in _NONVOLATILE:
                continue
            if not lineage.get(reference + offset, 0) & (1 << base) or any(mask[offset:offset + len(encoded)]):
                continue
            displacement = int.from_bytes(encoded[3:], 'little', signed=True)
            fields = [field for field in spec['fields'] if field['offset'] <= displacement and
                      displacement + 8 <= field['offset'] + field['size']]
            if not fields:
                continue
            field = min(fields, key=lambda entry: (entry['name'].count('.'), len(entry['name'])))
            result.append((reference + offset, owner, spec['id'], field['id'], displacement - field['offset'],
                           base, 3, width, encoded))
    return sorted(set(result))
