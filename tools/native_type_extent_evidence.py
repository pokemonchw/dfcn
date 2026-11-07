"""Describe sizeof operands in verified MSVC deleting destructors.

The source declaration labels an actual sized-delete operand; it never supplies
the target size. Runtime discovery reads that operand in the target method and
independently checks its vtable ownership and delete callee.
"""
from __future__ import annotations

import struct
import bisect
import hashlib
import json
from pathlib import Path
import re

from pe_instruction_match import _branch_displacement, _memory_displacement, _region_rows


def _recover_required(reference, types, table_slots, owners, instructions):
    """Recover absent required wrappers through the reviewed Classic map.

    A complete mapped instruction span and every recorded byte translation
    are required. Only relocation bytes may differ between the two reviewed
    editions, so Classic disassembly also describes the recovered opcodes.
    """
    if not reference:
        return
    root, known, objdump = reference
    from build_pe_image_bindings import PeImage
    from native_reference_semantics import _Coordinates
    config = root / 'data/runtime/native-pe-images.json'
    configured = json.loads(config.read_text(encoding='utf-8-sig')).get('classic') if config.is_file() else None
    if not configured:
        return
    path = Path(configured)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    matched = [entry for entry in known if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(matched) != 1:
        return
    _, _, ranges, changes = matched[0]
    forward = _Coordinates(list(struct.iter_unpack('<III', ranges)))
    changes = sorted(struct.iter_unpack('<IBB', changes))
    change_starts = [entry[0] for entry in changes]
    required = set()
    for spec in types.values():
        if not spec.get('flags') or not spec['reference_table']:
            continue
        slots = table_slots.get(spec['reference_table'], ())
        for method in spec['methods']:
            if method['name'] == '~' and method['slot'] // 8 < len(slots):
                owner = slots[method['slot'] // 8]
                if owner and owner not in owners:
                    required.add(owner)
    for owner in sorted(required):
        native = forward.unique(owner)
        index = bisect.bisect_left(image.starts, native) if native else len(image.starts)
        if index >= len(image.starts) or image.starts[index] != native:
            continue
        begin, end = image.functions[index]
        if end - begin > 65536 or forward.unique(owner, end - begin) != begin:
            continue
        rows = _region_rows(image, objdump, begin, end)
        if not rows:
            continue
        raw = bytearray(image.read(begin, end - begin))
        mask = bytearray(len(raw))
        decoded = []
        for address, encoded, assembly in rows:
            offset = address - begin
            assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip().lower()
            assembly = re.sub(r'^(?:rex(?:\.[wrxb]+)?\s+)+', '', assembly)
            mnemonic, _, arguments = assembly.partition(' ')
            branch = _branch_displacement(encoded)
            if branch and mnemonic == 'call':
                at, width = branch
                mask[offset + at:offset + at + width] = b'\x01' * width
            memory = _memory_displacement(encoded) if '[rip' in assembly else None
            if memory and memory[1]:
                mask[offset + memory[0]:offset + memory[0] + 4] = b'\x01' * 4
            decoded.append((offset, encoded, mnemonic, [argument.strip() for argument in arguments.split(',')], None))
        valid = True
        at = bisect.bisect_left(change_starts, owner)
        while at < len(changes) and changes[at][0] < owner + len(raw):
            address, original, actual = changes[at]
            offset = address - owner
            if raw[offset] != actual:
                raise RuntimeError('Reviewed extent reference byte differs at ' + hex(address))
            if not mask[offset]:
                valid = False
                break
            raw[offset] = original
            at += 1
        if not valid:
            continue
        decoded = [(offset, bytes(raw[offset:offset + len(encoded)]), mnemonic, args, memory)
                   for offset, encoded, mnemonic, args, memory in decoded]
        owners[owner] = bytes(raw), bytes(mask)
        instructions[owner] = decoded


def build_type_extent_evidence(types, table_slots, functions, instructions, reference=()):
    owners = {owner: (raw, mask) for owner, raw, mask, _ in functions}
    _recover_required(reference, types, table_slots, owners, instructions)
    entries = []
    for spec in types.values():
        if not spec['reference_table'] or not 0 < spec['alignment'] <= 16:
            continue
        slots = table_slots.get(spec['reference_table'], ())
        for method in spec['methods']:
            if method['name'] != '~' or method['slot'] // 8 >= len(slots):
                continue
            owner = slots[method['slot'] // 8]
            if owner not in owners:
                continue
            rows = instructions.get(owner, ())
            raw, mask = owners[owner]
            # These compiler-generated wrappers retain the original this in
            # a nonvolatile register across destruction, conditionally call
            # sized delete with its exact complete-object extent, then return
            # the same object pointer. Accept only this closed instruction
            # contract; arbitrary calls preceded by a size are insufficient.
            saved = {args[0] for _, _, mnemonic, args, _ in rows
                     if mnemonic == 'mov' and len(args) == 2 and args[1] == 'rcx' and
                     args[0] in ('rbx', 'rbp', 'rsi', 'rdi', 'r12', 'r13', 'r14', 'r15')}
            returns = {args[1] for _, _, mnemonic, args, _ in rows
                       if mnemonic == 'mov' and len(args) == 2 and args[0] == 'rax'}
            preserved = saved & returns
            if not preserved:
                continue
            candidates = []
            for index in range(2, len(rows)):
                call_at, call_raw, mnemonic, args, _ = rows[index]
                branch = _branch_displacement(call_raw)
                if mnemonic != 'call' or len(call_raw) != 5 or call_raw[0] != 0xe8 or branch != (1, 4):
                    continue
                this_at, this_raw, this_mnemonic, this_args, _ = rows[index - 1]
                size_at, size_raw, size_mnemonic, size_args, _ = rows[index - 2]
                if (this_mnemonic != 'mov' or len(this_args) != 2 or this_args[0] != 'rcx' or
                        this_args[1] not in preserved or size_mnemonic != 'mov' or
                        len(size_raw) != 5 or size_raw[0] != 0xba or
                        int.from_bytes(size_raw[1:], 'little') != spec['size'] or
                        size_at + 5 != this_at or this_at + len(this_raw) != call_at):
                    continue
                # The delete flag branch must skip exactly this call group.
                if index < 4:
                    continue
                jump_at, jump_raw, jump_mnemonic, _, _ = rows[index - 3]
                test_at, _, test_mnemonic, test_args, _ = rows[index - 4]
                jump = _branch_displacement(jump_raw)
                if (jump_mnemonic not in ('je', 'jz') or not jump or test_mnemonic != 'test' or
                        len(test_args) != 2 or test_args[1] not in ('0x1', '1')):
                    continue
                at, width = jump
                if jump_at + len(jump_raw) + int.from_bytes(jump_raw[at:at + width], 'little', signed=True) != call_at + 5:
                    continue
                selected = bytearray(mask)
                # Control-flow bytes are part of the constructor contract.
                for offset, encoded, operation, _, _ in rows:
                    relative = _branch_displacement(encoded)
                    if relative and operation != 'call':
                        at, width = relative
                        selected[offset + at:offset + at + width] = bytes(width)
                selected[size_at + 1:size_at + 5] = b'\x01' * 4
                target = owner + call_at + 5 + int.from_bytes(call_raw[1:], 'little', signed=True)
                candidates.append((spec['id'], spec['reference_table'], owner, target,
                                   size_at + 1, 4, call_at + 1, call_at + 5, spec['size'],
                                   raw, bytes(selected)))
            if len(candidates) == 1:
                entries.extend(candidates)
    content = bytearray(b'DFCNTE01')
    content.extend(struct.pack('<II', 1, len(entries)))
    for entry in entries:
        content.extend(struct.pack('<9I', *entry[:9]))
        for blob in entry[9:]:
            content.extend(struct.pack('<I', len(blob)))
            content.extend(blob)
    print(f'Generated native object extent evidence: {len(entries)} sized deleting destructors.', flush=True)
    return bytes(content)
