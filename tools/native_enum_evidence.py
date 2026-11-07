"""Build canonical enum dispatch contracts from the normal seed inputs.

The reviewed addresses below identify source consumers, never a target
version. Target ordinals are recovered from the target's actual jump tables.
"""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import struct

from build_history_layouts import semantic_id
from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates


def build_enum_evidence(root, known, metadata, patterns, decoded):
    owner = 0x406860  # NativeCaptionBuildFn(lookinfost *), the actual consumer.
    pattern = next((entry for entry in patterns if entry[0] == owner and entry[1] & 2), None)
    if pattern is None:
        raise RuntimeError('Missing canonical look-record enum consumer')
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    path = Path(config['classic'])
    if not path.is_absolute():
        path = root / path
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [entry for entry in known if entry[0].decode().endswith(' Classic') and entry[1] == identity]
    if len(editions) != 1:
        raise RuntimeError('Enum source requires the exact packaged canonical Classic identity')
    ranges = list(struct.iter_unpack('<III', editions[0][2]))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    _, _, _, raw, mask, fixups = pattern
    segments = []

    def segment(begin, end, mutable=()):
        first, last = begin - owner, end - owner
        body, selected = raw[first:last], bytearray(mask[first:last])
        if len(body) != end - begin:
            raise RuntimeError('Truncated canonical enum dispatch')
        local = []
        for at, width, stop, target, kind in fixups:
            if first <= at and at + width <= last:
                local.append((at - first, width, stop - first, target, kind))
        for at, width in mutable:
            selected[at:at + width] = b'\x01' * width
        # Branch destinations remain exact within each segment. All masks
        # must belong to a reviewed relocation or explicit selector operand.
        allowed = {at + index for at, width, *_ in local for index in range(width)}
        allowed.update(at + index for at, width in mutable for index in range(width))
        for at in range(len(selected)):
            if at not in allowed:
                selected[at] = 0
        segments.append((begin, body, bytes(selected), local))
        return len(segments) - 1

    # Prefix proves entry RCX -> RSI. Its independent display-string LEA can
    # change member displacement without changing that register provenance.
    prefix = segment(owner, 0x4068b6, ((0x40689e - owner, 1),))
    outer = segment(0x4068b6, 0x4068e2, ((5, 1), (32, 4), (38, 4)))
    flow = segment(0x407119, 0x407139, ((4, 1), (12, 1)))
    water = segment(0x407731, 0x407781, ((2, 1), (7, 1), (9, 1)))
    magma = segment(0x40782f, 0x407851, ((2, 1),))
    expected = ((outer, 0, bytes.fromhex('48630183f80f')),
                (flow, 0, bytes.fromhex('480fbf4604bf0500000083f80d')),
                (water, 0, bytes.fromhex('8b4e048bc183e0033c03')),
                (magma, 0, bytes.fromhex('8b46044123c5448bc8')))
    for index, at, value in expected:
        if segments[index][1][at:at + len(value)] != value:
            raise RuntimeError('Canonical enum selector changed; source contract requires review')
    enums = {entry['name']: entry for entry in metadata['enums']}
    switches = []
    for name, index, bound, table_operand, parent in (
            ('look_info_type', outer, 5, 23, 0),
            ('flow_type', flow, 12, 23, semantic_id('Flow'))):
        source = enums[name]
        count = segments[index][1][bound] + 1
        instruction = segments[index][0] + table_operand - 4
        native = forward.unique(instruction, 8)
        if native is None:
            raise RuntimeError('Canonical enum table instruction has no unique reviewed coordinate')
        encoded = image.read(native, 8)
        if encoded[:4] != bytes.fromhex('418b8c87'):
            raise RuntimeError('Canonical enum table load differs')
        table = struct.unpack_from('<I', encoded, 4)[0]
        targets = struct.unpack('<' + 'I' * count, image.read(table, count * 4))
        cases = []
        for token in source['members']:
            value = token['value']
            if not 0 <= value < count:
                if token.get('flags'):
                    raise RuntimeError('Required enum token is outside the canonical dispatch')
                continue
            reference = inverse.unique(targets[value])
            if reference is None:
                raise RuntimeError('Canonical enum case has no unique reviewed inverse')
            cases.append((token['id'], reference))
        if len({target for _, target in cases}) != len(cases):
            raise RuntimeError('Canonical enum dispatch merges named cases')
        switches.append((source['id'], index, bound, table_operand, parent, cases))
    content = bytearray()
    def number(value): content.extend(struct.pack('<I', value))
    def blob(value): number(len(value)); content.extend(value)
    number(1); number(owner); number(prefix); number(outer)
    number(len(segments))
    for reference, body, selected, local in segments:
        number(reference); blob(body); blob(selected); number(len(local))
        for entry in local: content.extend(struct.pack('<IIIII', *entry))
    number(len(switches))
    for type_id, index, bound, table_operand, parent, cases in switches:
        for value in (type_id, index, bound, table_operand, parent, len(cases)): number(value)
        for entry in cases: content.extend(struct.pack('<II', *entry))
    # Each flag's source identity is the named liquid branch and the actual
    # register test, including the source of that register in the dispatch.
    number(3)
    for name, token, index, parent, value_at in (
            ('lookinfo_liquid_water_flag', 'stagnant', water, 'Water', 32),
            ('lookinfo_liquid_water_flag', 'salt', water, 'Water', 38),
            ('lookinfo_liquid_magma_flag', 'subterranean', magma, 'Magma', 32)):
        for value in (semantic_id(name), semantic_id(token), index, semantic_id(parent), value_at): number(value)
    number(water); number(7); number(9)
    print('Canonical enum evidence: 2 typed dispatch tables and 3 liquid flag branches.', flush=True)
    return bytes(content)
