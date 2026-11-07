"""Describe consumed stack operands from the retained canonical instructions.

Invoked by the normal seed refresh. A local object's address is related to a
second local only after the runtime proves both complete instruction blocks in
the same actual unwind owner. No source stack displacement is a target default.
"""
from __future__ import annotations

import bisect
import re
import struct

from build_history_layouts import consumer_requirements
from pe_instruction_match import _branch_displacement, _opcode_start


def _declarations(root):
    literal = r'(0[xX][0-9a-fA-F]+|[0-9]+)[uUlL]*'
    expression = (r'\bnative_pe_frame_relative\(\s*[^,\n]+,\s*' + literal +
                  r'\s*,\s*' + literal + r'\s*,\s*' + literal +
                  r'\s*(?:,\s*"([A-Za-z_][A-Za-z0-9_:]*)")?\s*\)')
    return sorted({(*[int(value, 0) for value in match[:3]], match[3])
                   for match in re.findall(expression, consumer_requirements(root)[0])})


def _requirements(root):
    return sorted({entry[:3] for entry in _declarations(root)})


def _stack_operand(raw, assembly):
    assembly = assembly.split('#', 1)[0].strip().lower()
    # RBP candidates are admitted by _blocks only with a complete source
    # CFG interval proving their entry-RSP origin; spelling alone is not proof.
    memory = re.search(r'\[(rsp|rbp)(?:([+-])0x([0-9a-f]+))?\]', assembly)
    if not memory:
        return None
    index = _opcode_start(raw)
    if index >= len(raw) or any(byte in raw[:index] for byte in (0x67, 0x26, 0x2e, 0x36, 0x3e, 0x64, 0x65)):
        return None
    rex = next((byte for byte in raw[:index] if 0x40 <= byte <= 0x4f), 0)
    opcode = raw[index]
    if opcode in (0xc4, 0xc5, 0x62):
        return None
    index += 1
    if opcode == 0x0f:
        if index >= len(raw):
            return None
        second = raw[index]
        index += 1 + (second in (0x38, 0x3a))
    if index >= len(raw):
        return None
    modrm = raw[index]
    index += 1
    mode, rm = modrm >> 6, modrm & 7
    if mode == 3 or rex & 1:
        return None
    if rm == 4:
        if index >= len(raw):
            return None
        sib = raw[index]
        index += 1
        if sib & 7 != 4 or (sib >> 3) & 7 != 4 or rex & 2:
            return None
        base = 4
    elif rm == 5 and mode in (1, 2):
        base = 5
    else:
        return None
    if memory[1] != ('rsp' if base == 4 else 'rbp'):
        return None
    width = 1 if mode == 1 else 4 if mode == 2 else 0
    if index + width > len(raw):
        return None
    displacement = int.from_bytes(raw[index:index + width], 'little', signed=True) if width else 0
    printed = int(memory[3], 16) * (-1 if memory[2] == '-' else 1) if memory[3] else 0
    if printed != displacement:
        return None
    flags = 1 if re.match(r'lea\b', assembly) else 0
    if base == 5 and flags and not rex & 8:
        return None
    size = re.search(r'\b(byte|word|dword|qword|xmmword|ymmword|zmmword) ptr\b', assembly)
    access = {'byte': 1, 'word': 2, 'dword': 4, 'qword': 8,
              'xmmword': 16, 'ymmword': 32, 'zmmword': 64}.get(size[1], 0) if size else 0
    if not flags and not access:
        return None
    return index, width, base, 0 if flags else access, flags


def _blocks(pattern, rows, requested, verified=(), anchors=(), receiver=None, source_origins=()):
    reference, flags, owner, raw, original_mask, fixups = pattern
    if not flags & 2 or not owner or not rows:
        return
    if rows[0][0]:
        return
    # Unwind extents may include inline jump-table data after the reachable
    # code. Require complete instructions in the consumed CFG run, not an
    # invented decoding of the function's unrelated data tail.
    from native_pe_seed_evidence import _reachable_instruction_runs
    runs = _reachable_instruction_runs(rows, len(raw))
    reachable = {row[0] for run in runs for row in run}
    if not rows:
        return
    positions = {row[0]: index for index, row in enumerate(rows)}
    boundaries = {0, len(rows)}
    for index in range(1, len(rows)):
        if rows[index - 1][0] + len(rows[index - 1][1]) != rows[index][0]:
            boundaries.add(index)
    for index, (position, encoded, assembly) in enumerate(rows):
        mnemonic = assembly.strip().split()[0].lower()
        branch = _branch_displacement(encoded)
        if branch and mnemonic != 'call':
            at, width = branch
            target = position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in positions:
                boundaries.add(positions[target])
        if mnemonic.startswith(('j', 'loop', 'ret')) or mnemonic in ('call', 'int3', 'ud2'):
            boundaries.add(index + 1)
    boundaries = sorted(boundaries)
    selected = set()
    for instruction in requested:
        row = positions.get(instruction - reference)
        if row is None or (instruction - reference not in reachable and instruction not in verified):
            continue
        part = bisect.bisect_right(boundaries, row) - 1
        selected.add((boundaries[part], boundaries[part + 1]))
    for first, last in sorted(selected):
        if any(left[0] + len(left[1]) != right[0]
               for left, right in zip(rows[first:last - 1], rows[first + 1:last])):
            continue
        begin = rows[first][0]
        end = rows[last - 1][0] + len(rows[last - 1][1])
        block = raw[begin:end]
        mask = bytearray(original_mask[begin:end])
        relocated = [(at - begin, width, next_at - begin if next_at else 0, target, kind)
                     for at, width, next_at, target, kind in fixups
                     if begin <= at and at + width <= end]
        covered = {at + byte for at, width, _, _, _ in relocated for byte in range(width)}
        operands = []
        for position, encoded, assembly in rows[first:last]:
            local = position - begin
            operand = _stack_operand(encoded, assembly)
            if operand is not None and operand[2] == 5 and not any(
                    begin <= reference + position and reference + position + len(encoded) <= end and flags & 2
                    for begin, end, _, _, flags in source_origins):
                operand = None
            if operand is not None:
                at, width, base, access, operand_flags = operand
                mask[local + at:local + at + width] = b'\x01' * width
                covered.update(range(local + at, local + at + width))
                operands.append((local, len(encoded), local + at, width, base, access, operand_flags))
            elif reference + position in anchors and len(encoded) == 5 and encoded[0] == 0xe8:
                # The relay supplies the actual caller RSP at this proved
                # CALL. It is an origin, never a fabricated stack operand.
                operands.append((local, 5, local, 0, 4, 0, 2))
            branch = _branch_displacement(encoded)
            if branch:
                at, width = branch
                target = reference + position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
                if not reference + begin <= target < reference + end:
                    if not any(entry[0] == local + at for entry in relocated):
                        relocated.append((local + at, width, local + len(encoded), target, 0x100))
                    mask[local + at:local + at + width] = b'\x01' * width
                    covered.update(range(local + at, local + at + width))
        # Every wildcard has an explicit relocation or stack-operand proof.
        # Source masks with other unknown changes cannot identify a local.
        if any(value and index not in covered for index, value in enumerate(mask)):
            continue
        # A short loop increment still joins its predecessor and successor.
        # Keep it for the closed CFG proof; the consumer must not admit such
        # a block as an independent identity from its stack shape alone.
        if not any(reference + position in requested for position, _, _ in rows[first:last]):
            continue
        from native_frame_receiver_evidence import member_operands
        members = member_operands(reference + begin, owner, block,
            [(position - begin, encoded, assembly) for position, encoded, assembly in rows[first:last]], receiver)
        yield reference + begin, owner, block, bytes(mask), sorted(relocated), operands, members


def _argument_parts(argument_evidence):
    origins = b''
    source_graphs = b''
    if argument_evidence:
        if len(argument_evidence) < 16 or argument_evidence[:8] != b'DFCNAA01':
            raise RuntimeError('Invalid exact-reference entry-argument evidence')
        version, count = struct.unpack_from('<II', argument_evidence, 8)
        if version not in (1, 2, 3) or count > 1000000:
            raise RuntimeError('Unsupported exact-reference entry-argument evidence')
        cursor = 16
        for _ in range(count):
            if cursor + 24 > len(argument_evidence):
                raise RuntimeError('Truncated exact-reference entry-argument site')
            width = struct.unpack_from('<I', argument_evidence, cursor + 20)[0]
            if width != 3 or cursor + 24 + width > len(argument_evidence):
                raise RuntimeError('Invalid exact-reference entry-argument instruction')
            cursor += 24 + width
        if version >= 2:
            suffix = argument_evidence[cursor:]
            if len(suffix) < 4:
                raise RuntimeError('Truncated exact-reference stack origins')
            origin_count = struct.unpack_from('<I', suffix)[0]
            extent = 4 + origin_count * 24
            if origin_count > 1000000 or len(suffix) < extent or (version == 2 and len(suffix) != extent):
                raise RuntimeError('Invalid exact-reference stack origins')
            origins = suffix[:extent]
            if version == 3:
                if len(suffix) < extent + 4:
                    raise RuntimeError('Truncated exact-reference typed CFGs')
                source_graphs = b'DFCNTG01' + struct.pack('<I', 1) + suffix[extent:]
        elif cursor != len(argument_evidence):
            raise RuntimeError('Unexpected exact-reference entry-argument suffix')
        # Entry-argument sites retain their existing runtime contract; the
        # complete-CFG stack intervals are a distinct Frame v9 payload.
        argument_evidence = b'DFCNAA01' + struct.pack('<II', 1, count) + argument_evidence[16:cursor]
    return argument_evidence, origins, source_graphs


def build_frame_evidence(root, patterns, decoded, known=(), objdump=None, argument_evidence=b'', target_profiles=()):
    argument_evidence, origins, source_graphs = _argument_parts(argument_evidence)
    source_origins = {}
    if origins:
        for index in range(struct.unpack_from('<I', origins)[0]):
            owner, begin, end, rsp, rbp, flags = struct.unpack_from('<IIIiiI', origins, 4 + index * 24)
            if not owner or begin < owner or end <= begin or not flags or flags & ~3:
                raise RuntimeError('Invalid canonical frame origin interval')
            intervals = source_origins.setdefault(owner, [])
            if intervals and intervals[-1][1] > begin:
                raise RuntimeError('Overlapping canonical frame origin intervals')
            intervals.append((begin, end, rsp, rbp, flags))
    requirements = _requirements(root)
    receivers = {}
    for anchor, member, width, name in _declarations(root):
        if not name:
            continue
        owners = {pattern[2] for pattern in patterns if pattern[1] & 2 and
                  pattern[0] <= anchor < pattern[0] + len(pattern[3])}
        if len(owners) != 1:
            raise RuntimeError(f'Typed frame anchor {anchor:#x} has no unique source owner')
        owner = next(iter(owners))
        if receivers.setdefault(owner, name) != name:
            raise RuntimeError(f'Conflicting frame receiver type at {owner:#x}')
    from native_frame_receiver_evidence import receiver_layouts, receiver_sites
    receiver_types = receiver_layouts(root, known, patterns, decoded, receivers)
    typed_sites = receiver_sites(root, known, patterns, decoded, receiver_types, objdump=objdump)
    anchors = {anchor for anchor, _, _ in requirements}
    requested = {value for anchor, member, width in requirements for value in (anchor, member)}
    # Retain the intervening CFG as well. Repeated draw/resize blocks are
    # distinguished by their proved call sites and branch edges, not by the
    # local string's historical stack displacement.
    # Include nearby producers and consumers as identity context. A generic
    # truncate/draw sequence can occur many times in one function; its real
    # predecessor or successor supplies the semantic identity. This only
    # retains complete source blocks: the runtime still proves every operand
    # and CFG edge before using any coordinate.
    intervals = [(max(0, min(anchor, member) - 512), max(anchor, member) + 512)
                 for anchor, member, _ in requirements if abs(anchor - member) <= 8192]
    for index, pattern in enumerate(patterns):
        if not pattern[1] & 2:
            continue
        for offset, _, _ in decoded.get(index, ()):
            address = pattern[0] + offset
            if any(begin <= address <= end for begin, end in intervals):
                requested.add(address)
    from native_reference_semantics import verified_reference_instruction_sites
    verified = verified_reference_instruction_sites(root, known, requested, patterns, decoded, objdump)
    blocks = {}
    for index, pattern in enumerate(patterns):
        reference, _, _, raw, _, _ = pattern
        selected = {site for site in requested if reference <= site < reference + len(raw)}
        if not selected:
            continue
        for block in _blocks(pattern, decoded.get(index, ()), selected, verified, anchors,
                             receiver_types.get(pattern[2]), source_origins.get(pattern[2], ())):
            previous = blocks.setdefault(block[0], block)
            if previous != block:
                raise RuntimeError(f'Conflicting canonical frame block at {block[0]:#x}')
    content = bytearray(b'DFCNFR01')
    def number(value):
        content.extend(struct.pack('<I', value))
    def blob(value):
        number(len(value))
        content.extend(value)
    number(11)
    number(len(requirements))
    for requirement in requirements:
        content.extend(struct.pack('<3I', *requirement))
    number(len(blocks))
    for reference, owner, raw, mask, fixups, operands, members in sorted(blocks.values()):
        number(reference)
        number(owner)
        blob(raw)
        blob(mask)
        number(len(fixups))
        for fixup in fixups:
            content.extend(struct.pack('<5I', *fixup))
        number(len(operands))
        for operand in operands:
            content.extend(struct.pack('<7I', *operand))
        number(len(members))
        for member in members:
            content.extend(struct.pack('<7I', *member))
    from native_reference_semantics import reference_frame_registers
    frames = reference_frame_registers(root, known, [pattern[2] for pattern in patterns if pattern[2]],
                                      patterns=patterns, decoded=decoded, objdump=objdump)
    number(len(frames))
    for frame in frames:
        content.extend(struct.pack('<4I', *frame))
    number(len(typed_sites))
    for reference, owner, raw, member in typed_sites:
        number(reference)
        number(owner)
        blob(raw)
        content.extend(struct.pack('<7I', *member))
    from native_receiver_alias_evidence import build_receiver_alias_sites
    receiver_aliases = build_receiver_alias_sites(root, known, patterns, decoded)
    number(len(receiver_aliases))
    for *fields, raw in receiver_aliases:
        content.extend(struct.pack('<8I', *fields))
        blob(raw)
    blob(argument_evidence)
    content.extend(origins or struct.pack('<I', 0))
    blob(source_graphs)
    from native_typed_member_evidence import build_typed_member_evidence
    blob(build_typed_member_evidence(root, target_profiles))
    print(f'Generated native frame evidence: {len(requirements)} consumed local pairs; {len(blocks)} complete blocks; '
          f'{len(frames)} proved source frame registers; '
          f'{sum(len(block[6]) for block in blocks.values())} local typed receiver members; '
          f'{len(typed_sites)} independent receiver sites; '
          f'{len(receiver_aliases)} typed nonvolatile receiver loads.', flush=True)
    return bytes(content)
