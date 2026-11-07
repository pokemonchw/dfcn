"""Discover graphics member anchors from the admitted PE's own instructions.

The global object's address establishes this-pointer provenance. Complete
decoded functions also prove direct RIP-relative accesses to proposed named
members. Control-flow joins intersect pointer provenance and unknown writes
discard it.
"""
from __future__ import annotations

import bisect
from collections import defaultdict, deque
import re

from native_history_semantic_evidence import _REGISTERS, _REG_ALIASES, _VOLATILE, _memory_operand
from pe_instruction_match import _branch_displacement, _memory_displacement, _region_rows


def member_anchors(image, objdump, root, wanted=()):
    candidates = set()
    wanted = set(wanted)
    leaf_bounds = {}
    for begin, end, raw, size, flags in image.sections:
        if not flags & 0x20000000:
            continue
        code = image.data[raw:raw + size]
        # This byte search only selects functions for complete decoding. A
        # match is not itself instruction evidence; the decoder below must
        # establish the exact operand boundary and RIP target.
        for match in re.finditer(rb'[\x40-\x4f]?[\x8b\x89\x8d][\x05\x0d\x15\x1d\x25\x2d\x35\x3d]....', code, re.S):
            position = begin + match.start()
            target = position + len(match[0]) + int.from_bytes(match[0][-4:], 'little', signed=True)
            if target == root and match[0][-6] != 0x8d:
                continue
            if target != root and target - root not in wanted:
                continue
            index = bisect.bisect_right(image.starts, position) - 1
            if index >= 0 and position < image.functions[index][1]:
                low, high = image.functions[index]
                contents = image.read(low, high - low)
                prefix = len(contents) - len(contents.lstrip(b'\xcc'))
                suffix = len(contents) - len(contents.rstrip(b'\xcc'))
                if prefix:
                    # PE unwind gaps include compiler padding around small
                    # no-frame tail-call wrappers. Decode the complete leaf
                    # body, not the preceding INT3 padding as its CFG entry.
                    leaf_bounds[low + prefix] = (low + prefix, high - suffix)
                    low += prefix
                candidates.add(low)
    pending = deque((owner, False) for owner in sorted(candidates))
    visited, anchors = {}, defaultdict(set)
    while pending:
        owner, method = pending.popleft()
        if owner in visited and (visited[owner] or not method):
            continue
        if len(visited) > 1024:
            raise RuntimeError('Graphics object instruction graph exceeds its bounds')
        visited[owner] = method
        if len(visited) % 32 == 0:
            print(f'  Graphics object instruction scopes: {len(visited)}.', flush=True)
        if owner in leaf_bounds:
            begin, end = leaf_bounds[owner]
        else:
            index = bisect.bisect_left(image.starts, owner)
            if index >= len(image.starts) or image.starts[index] != owner:
                continue
            begin, end = image.functions[index]
        rows = _region_rows(image, objdump, begin, end)
        if not rows:
            continue
        parsed = []
        for address, raw, assembly in rows:
            assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip().lower()
            assembly = re.sub(r'^(?:rex(?:\.[wrxb]+)?\s+)+', '', assembly)
            assembly = re.sub(r'^(?:(?:data16|data32|cs|ds|es|ss|fs|gs)\s+)+(?=nop\b)', '', assembly)
            mnemonic, _, operands = assembly.partition(' ')
            args = [part.strip() for part in operands.split(',')]
            if mnemonic == 'xchg' and len(args) == 2 and args[0] == args[1]:
                mnemonic, args = 'nop', []
            parsed.append((address, raw, mnemonic, args, _memory_operand(raw, assembly)))
            memory = _memory_displacement(raw) if '[rip' in assembly else None
            if memory and memory[1]:
                at = memory[0]
                offset = address + len(raw) + int.from_bytes(raw[at:at + 4], 'little', signed=True) - root
                if offset in wanted:
                    anchors[offset].add(owner)
        positions = {row[0]: index for index, row in enumerate(parsed)}
        incoming, queue = {0: {'rcx': 0} if method else {}}, deque([0])
        visits = 0
        while queue:
            index = queue.popleft()
            visits += 1
            if visits > len(parsed) * 64:
                incoming.clear()
                break
            address, raw, mnemonic, args, memory = parsed[index]
            registers = dict(incoming[index])
            destination = _REG_ALIASES.get(args[0]) if args else None
            value = None
            if mnemonic == 'mov' and len(args) == 2 and args[0] in _REGISTERS and args[1] in _REGISTERS:
                value = registers.get(args[1])
            elif mnemonic == 'lea' and args[0] in _REGISTERS:
                if memory and memory[0] in registers:
                    value = registers[memory[0]] + memory[1]
                elif len(raw) == 7 and raw[0] in (0x48, 0x4c) and raw[1] == 0x8d and raw[2] & 0xc7 == 5:
                    target = address + len(raw) + int.from_bytes(raw[3:], 'little', signed=True)
                    if target == root:
                        value = 0
            elif mnemonic in ('add', 'sub') and args[0] in _REGISTERS and args[0] in registers and len(args) == 2:
                if re.fullmatch(r'0x[0-9a-f]+|[0-9]+', args[1]):
                    value = registers[args[0]] + int(args[1], 0) * (-1 if mnemonic == 'sub' else 1)
            if destination and mnemonic not in ('cmp', 'test', 'push', 'bt', 'call') and not mnemonic.startswith('j'):
                registers.pop(destination, None)
                if value is not None:
                    registers[destination] = value
            if mnemonic.startswith('call'):
                for register in _VOLATILE:
                    registers.pop(register, None)
            if mnemonic in ('mul', 'imul', 'div', 'idiv', 'lods', 'lodsq', 'lodsd', 'stos', 'stosq', 'stosd', 'xchg', 'leave'):
                registers.clear()
            if mnemonic not in ('mov', 'movzx', 'movsx', 'movsxd', 'lea', 'cmp', 'test', 'push', 'pop',
                                'add', 'sub', 'and', 'or', 'xor', 'not', 'neg', 'inc', 'dec',
                                'shl', 'shr', 'sar', 'sal', 'rol', 'ror', 'nop', 'ret', 'retq',
                                'int3', 'ud2', 'bt', 'bts', 'btr', 'btc', 'call', 'cdqe', 'cqo',
                                'xorps', 'xorpd', 'pxor', 'pand', 'pandn', 'por', 'pshufd') and not (
                    mnemonic.startswith('j') or mnemonic.startswith('cmov') or mnemonic.startswith('set') or
                    mnemonic.startswith('movap') or mnemonic.startswith('movup') or mnemonic.startswith('movdq')):
                registers.clear()
            if mnemonic in ('cdqe', 'cqo'):
                registers.pop('rax', None)
                registers.pop('rdx', None)
            following = []
            branch = _branch_displacement(raw)
            if mnemonic.startswith('j') or mnemonic.startswith('loop'):
                if branch:
                    at, width = branch
                    target = address + len(raw) + int.from_bytes(raw[at:at + width], 'little', signed=True)
                    if target in positions:
                        following.append(positions[target])
                if mnemonic != 'jmp' and index + 1 < len(parsed):
                    following.append(index + 1)
            elif mnemonic not in ('ret', 'retq', 'int3', 'ud2') and index + 1 < len(parsed):
                following.append(index + 1)
            for successor in following:
                existing = incoming.get(successor)
                merged = registers if existing is None else {
                    register: value for register, value in existing.items() if registers.get(register) == value}
                if existing is None or merged != existing:
                    incoming[successor] = dict(merged)
                    queue.append(successor)
        for index, (address, raw, mnemonic, args, memory) in enumerate(parsed):
            registers = incoming.get(index, {})
            if memory and memory[0] in registers and (memory[4] or mnemonic == 'lea'):
                offset = registers[memory[0]] + memory[1]
                if 0 <= offset < 16 * 1024 * 1024:
                    anchors[offset].add(owner)
            if mnemonic not in ('call', 'jmp') or 'rcx' not in registers:
                continue
            offset = registers['rcx']
            if 0 <= offset < 16 * 1024 * 1024:
                anchors[offset].add(owner)
            branch = _branch_displacement(raw)
            if not offset and branch:
                at, width = branch
                target = address + len(raw) + int.from_bytes(raw[at:at + width], 'little', signed=True)
                if target not in positions:
                    pending.append((target, True))
    print(f'Observed graphics object members in {len(visited)} decoded function scopes; '
          f'{sum(len(owners) >= 2 for owners in anchors.values())} independent member anchors.', flush=True)
    return anchors
