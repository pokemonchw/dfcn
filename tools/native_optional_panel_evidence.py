"""Owned inline panels and their native control-flow boundaries.

This producer is called by the normal PE catalog build. It records canonical
code, never a target-release address or an absence inferred from text.
"""
from __future__ import annotations

import json
import bisect
import re
import struct

from build_history_layouts import semantic_id
from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source


def _declarations(root):
    text = (root / 'src/native_petition_layer_render.inc').read_text(encoding='utf-8-sig')
    tokens = _TOKEN.findall(_windows_source(text))
    pairs = _pairs(tokens)
    for at, token in enumerate(tokens[:-1]):
        if token != 'DFCN_NATIVE_OPTIONAL_PANEL' or tokens[at + 1] != '(':
            continue
        parts = _parts(tokens, pairs, at + 2, pairs[at + 1])
        if len(parts) != 12 or parts[0][1] != parts[0][0] + 1:
            raise RuntimeError('Inline panel requires its name and eleven source boundaries')
        name = json.loads(tokens[parts[0][0]])
        numbers = [_number(tokens[first:last]) for first, last in parts[1:]]
        if not name or any(not value for value in numbers):
            raise RuntimeError('Inline panel boundaries must be explicit source coordinates')
        yield name, numbers


def _branch(address, raw):
    if len(raw) == 2 and (0x70 <= raw[0] <= 0x7f or raw[0] == 0xeb):
        return address + len(raw) + struct.unpack_from('<b', raw, 1)[0]
    if len(raw) == 5 and raw[0] in (0xe8, 0xe9):
        return address + len(raw) + struct.unpack_from('<i', raw, 1)[0]
    if len(raw) == 6 and raw[:1] == b'\x0f' and 0x80 <= raw[1] <= 0x8f:
        return address + len(raw) + struct.unpack_from('<i', raw, 2)[0]
    return None


def _owned_switch_words(body, rows, begin, end, patterns):
    """Recognize bounded, image-relative MSVC switches owned by the panel.

    An inline table outside the panel's code interval is not an incoming
    edge when its complete dispatcher and every case belong to that panel.
    Return the exact RVA words, plus instructions needing reviewed boundaries.
    No table with another retained address reference is granted ownership.
    """
    owner, _, _, content, _, fixups = body
    words, requested = set(), set()
    registers = {name: index for index, names in enumerate((
        ('rax', 'eax'), ('rcx', 'ecx'), ('rdx', 'edx'), ('rbx', 'ebx'),
        ('rsp', 'esp'), ('rbp', 'ebp'), ('rsi', 'esi'), ('rdi', 'edi')))
        for name in names}
    registers.update({name: index for index in range(8, 16)
                      for name in (f'r{index}', f'r{index}d')})

    def reg(value):
        return registers.get(value, -1)

    def row_sequence(start):
        sequence = []
        for _ in range(8):
            row = rows.get(start)
            if row is None or not begin <= start < end or start + len(row[0]) > end:
                return []
            sequence.append((start, row[0], row[1].split('#', 1)[0].strip().lower()))
            start += len(row[0])
        return sequence

    for start in sorted(rows):
        if not begin <= start < end:
            continue
        sequence = row_sequence(start)
        if len(sequence) != 8:
            continue
        text = [value[2] for value in sequence]
        compare = re.fullmatch(r'cmp\s+([a-z0-9]+),(0x[0-9a-f]+|[0-9]+)', text[0])
        extend = re.fullmatch(r'movsxd\s+([a-z0-9]+),([a-z0-9]+)', text[2])
        base = re.fullmatch(r'lea\s+([a-z0-9]+),\[rip[^\]]*\]', text[3])
        remap = re.fullmatch(r'movzx\s+([a-z0-9]+),byte ptr \[([a-z0-9]+)\+([a-z0-9]+)\*1\+(0x[0-9a-f]+)\]', text[4])
        table = re.fullmatch(r'mov\s+([a-z0-9]+),dword ptr \[([a-z0-9]+)\+([a-z0-9]+)\*4\+(0x[0-9a-f]+)\]', text[5])
        add = re.fullmatch(r'add\s+([a-z0-9]+),([a-z0-9]+)', text[6])
        jump = re.fullmatch(r'jmp\s+([a-z0-9]+)', text[7])
        if not all((compare, extend, base, remap, table, add, jump)):
            continue
        branch_raw = sequence[1][1]
        if not (branch_raw[:1] == b'\x77' or branch_raw[:2] == b'\x0f\x87'):
            continue
        default = _branch(sequence[1][0], branch_raw)
        count = int(compare[2], 0) + 1
        if not 1 <= count <= 4096 or not begin <= (default or 0) < end:
            continue
        index, image_base, destination = reg(extend[1]), reg(base[1]), reg(table[1])
        if min(index, image_base, destination) < 0 or len({index, image_base, destination}) != 3 or \
                reg(compare[1]) != reg(extend[2]) or \
                (reg(remap[1]), reg(remap[2]), reg(remap[3])) != (index, image_base, index) or \
                (reg(table[2]), reg(table[3])) != (image_base, index) or \
                (reg(add[1]), reg(add[2]), reg(jump[1])) != (destination, image_base, destination):
            continue
        base_at, base_raw, _ = sequence[3]
        if len(base_raw) != 7 or base_at + 7 + struct.unpack_from('<i', base_raw, 3)[0] != 0:
            continue
        remap_at, table_at = int(remap[4], 16), int(table[4], 16)
        if not owner <= remap_at or remap_at + count > owner + len(content):
            continue
        selectors = content[remap_at - owner:remap_at - owner + count]
        table_count = max(selectors) + 1
        if not owner <= table_at or table_at + table_count * 4 > owner + len(content):
            continue
        targets = struct.unpack_from('<' + 'I' * table_count, content, table_at - owner)
        if any(not begin <= value < end or value not in rows for value in targets):
            continue
        spans = ((remap_at, remap_at + count), (table_at, table_at + table_count * 4))
        if any(first < end and begin < last for first, last in spans) or \
                spans[0][0] < spans[1][1] and spans[1][0] < spans[0][1]:
            continue
        operand_sites = {}
        for instruction, target in ((sequence[4], remap_at), (sequence[5], table_at)):
            address, raw, _ = instruction
            matches = [owner + offset for offset, width, following, value, kind in fixups
                       if value == target and kind & 0xff == 1 and width == 4 and
                       address <= owner + offset and owner + offset + width <= address + len(raw)]
            if len(matches) != 1:
                break
            operand_sites[matches[0]] = target
        if len(operand_sites) != 2:
            continue
        owned = True
        dispatch_end = sequence[-1][0] + len(sequence[-1][1])
        for other in patterns:
            for offset, width, following, target, kind in other[5]:
                if any(first <= target < last for first, last in spans) and \
                        operand_sites.get(other[0] + offset) != target:
                    owned = False
                # Every execution of either load must pass through the bound
                # and index conversion. A branch/address into the dispatcher
                # after its first instruction would invalidate that bound.
                if start < target < dispatch_end:
                    owned = False
        # Address literals in this complete owner must likewise be the two
        # decoded table-load operands, never an unclassified table escape.
        for offset in range(len(content) - 3):
            target = struct.unpack_from('<I', content, offset)[0]
            if any(first <= target < last for first, last in spans) and \
                    operand_sites.get(owner + offset) != target:
                owned = False
            if start < target < dispatch_end:
                owned = False
        if not owned:
            continue
        words.update(table_at + index * 4 for index in range(table_count))
        requested.update(value[0] for value in sequence)
        requested.update(targets)
    return words, requested


def _build_optional_panel_evidence(root, known, patterns, decoded, required, declarations, objdump=None):
    from native_reference_semantics import verified_reference_instruction_sites, reference_frame_registers
    contracts = []
    for name, numbers in declarations:
        owner, begin, end, guard, guard_end, tail, resume_anchor, resume_end, successor, successor_end, selector = numbers
        if not owner < guard < guard_end <= tail < begin < end <= resume_anchor < resume_end <= successor < successor_end:
            raise RuntimeError('Inline panel source boundaries are not ordered')
        bodies = [(index, value) for index, value in enumerate(patterns)
                  if value[0] == owner and value[1] & 2 and successor_end <= owner + len(value[3])]
        if len(bodies) != 1:
            raise RuntimeError(f'Inline panel {name} has no complete canonical owner')
        index, body = bodies[0]
        rows = {owner + offset: (raw, asm) for offset, raw, asm in decoded[index]}
        blocks, requested = [], []
        for first, last in ((guard, guard_end), (tail, begin), (end, resume_end), (successor, successor_end)):
            cursor, selected = first, []
            while cursor < last:
                row = rows.get(cursor)
                if row is None or not row[0] or cursor + len(row[0]) > last:
                    raise RuntimeError(f'Inline panel {name} lacks a complete source instruction at {cursor:#x}')
                selected.append(cursor); requested.append(cursor)
                cursor += len(row[0])
            blocks.append((first, body[3][first - owner:last - owner]))
        verified = verified_reference_instruction_sites(root, known, requested, patterns, decoded, objdump=objdump)
        if set(requested) - set(verified):
            raise RuntimeError(f'Inline panel {name} lacks reviewed canonical instruction boundaries')
        incoming = set()
        # Examine all retained source instruction scopes, not just the four
        # matching anchors. Another scope or an address-taken local entry
        # cannot acquire this feature's absence permission.
        for other_index, other in enumerate(patterns):
            if other[1] & 2 and begin <= other[0] < end:
                raise RuntimeError(f'Inline panel {name} contains a separate source function entry')
            for offset, raw, _ in decoded.get(other_index, ()):
                address = other[0] + offset
                target = _branch(address, raw)
                if target is not None and begin <= target < end and not begin <= address < end:
                    if not guard <= address < guard_end or target != begin or raw[0] in (0xe8, 0xe9, 0xeb):
                        raise RuntimeError(f'Inline panel {name} has an unowned source incoming edge at {address:#x}')
                    incoming.add(address)
                if address + len(raw) == begin and not begin <= address < end:
                    if raw[0] not in (0xe9, 0xeb, 0xc3, 0xc2, 0xcc):
                        raise RuntimeError(f'Inline panel {name} has an unowned source fallthrough')
        for other in patterns:
            for offset, width, following, target, kind in other[5]:
                if begin <= target < end and not begin <= other[0] + offset < end:
                    # Direct branch relocations were independently classified
                    # above. Every other source address reference is an entry
                    # ambiguity, including RIP LEA and absolute pointers.
                    if not any(address <= other[0] + offset < address + len(rows[address][0])
                               for address in incoming):
                        raise RuntimeError(f'Inline panel {name} has an unowned source address reference')
        if len(incoming) < 2:
            raise RuntimeError(f'Inline panel {name} lacks its complete guarded incoming edges')
        # MSVC PE switch/continuation tables store RVAs. Absolute references
        # are covered by the retained relocation identities above.
        # An address-taken interior cannot be declared absent from direct CFG
        # edges alone. Do not admit such a source panel.
        relative_rows = sorted((address, address + len(raw)) for address, (raw, _) in rows.items()
                               if _branch(address, raw) is not None)
        relative_starts = [first for first, _ in relative_rows]
        relative_windows = set()
        owned_switch_words, switch_instructions = _owned_switch_words(body, rows, begin, end, patterns)
        if switch_instructions - verified_reference_instruction_sites(root, known, switch_instructions,
                patterns, decoded, objdump=objdump):
            raise RuntimeError(f'Inline panel {name} has an unproved internal switch dispatcher')
        for position in range(0, len(body[3]) - 3):
            if begin - owner <= position < end - owner:
                continue
            target = struct.unpack_from('<I', body[3], position)[0]
            if begin <= target < end:
                if owner + position in owned_switch_words:
                    continue
                # A sliding byte window can combine a branch opcode with its
                # relative displacement into a coincidental absolute RVA.
                # Admit that interpretation only at independently reviewed
                # complete instruction boundaries. Its real relative edge
                # was checked above; no table/address reference is skipped.
                address = owner + position
                at = bisect.bisect_right(relative_starts, address) - 1
                if at >= 0 and address + 4 <= relative_rows[at][1]:
                    relative_windows.add(relative_rows[at][0])
                    continue
                raise RuntimeError(f'Inline panel {name} has a source table/address reference at {owner + position:#x}')
        if relative_windows - verified_reference_instruction_sites(root, known, relative_windows,
                patterns, decoded, objdump=objdump):
            raise RuntimeError(f'Inline panel {name} has an unproved source relative-branch window')
        frames = reference_frame_registers(root, known, [owner], patterns=patterns,
                                          decoded=decoded, objdump=objdump)
        frame = next((value for value in frames if value[0] == owner and value[1] & 0xff == 5), None)
        if frame is None or frame[2] > guard or frame[3] < successor_end:
            raise RuntimeError(f'Inline panel {name} lacks its actual source frame interval')
        spans = sorted((address, address + width) for address, width in required
                       if begin <= address < end and address + width <= end)
        if not spans or any(address < begin < address + width or address < end < address + width
                            for address, width in required):
            raise RuntimeError(f'Inline panel {name} crosses another resource contract')
        merged = []
        for first, last in spans:
            if merged and first <= merged[-1][1]: merged[-1] = merged[-1][0], max(last, merged[-1][1])
            else: merged.append((first, last))
        contracts.append((semantic_id(name), numbers, frame[2:], blocks, sorted(incoming), merged))
    output = bytearray(b'DFCNPF01' + struct.pack('<II', 1, len(contracts)))
    for identity, numbers, frame, blocks, incoming, spans in contracts:
        output.extend(struct.pack('<14I', identity, *numbers, *frame))
        for reference, raw in blocks:
            output.extend(struct.pack('<II', reference, len(raw)) + raw)
        output.extend(struct.pack('<I', len(incoming)))
        for reference in incoming: output.extend(struct.pack('<I', reference))
        output.extend(struct.pack('<I', len(spans)))
        for span in spans: output.extend(struct.pack('<II', *span))
    return bytes(output)


def build_optional_panel_evidence(root, known, patterns, decoded, required, objdump=None):
    records = []
    for declaration in _declarations(root):
        try:
            blob = _build_optional_panel_evidence(root, known, patterns, decoded, required,
                                                  [declaration], objdump=objdump)
        except RuntimeError as error:
            # An unavailable optional proof owns no absence permission. The
            # normal required resources and consumers remain unchanged, while
            # independently proved translation features can still be built.
            print(f'Optional panel evidence unavailable: {error}; retaining its required resources.', flush=True)
            continue
        records.append(blob[16:])
    print(f'Prepared {len(records)} native optional-panel CFG contracts.', flush=True)
    return b'DFCNPF01' + struct.pack('<II', 1, len(records)) + b''.join(records)
