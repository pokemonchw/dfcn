"""Retain the declared receiver type and its proved incoming shadow slot.

Used only by the normal seed producer. A field immediate is typed only after
an exact reviewed prologue and a complete MOV-this/ADD-field instruction pair
establish its object lineage. Unrelated integers never become field offsets.
"""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import re
import struct


def receiver_layouts(root, known, patterns, decoded, declarations):
    if not declarations:
        return {}
    from build_pe_image_bindings import PeImage
    from native_reference_semantics import _Coordinates
    from native_method_abi_evidence import _unwind_entries, _allocations
    metadata = json.loads((root / 'data/runtime/native-addresses/pe-layout-semantics.json').read_text(encoding='utf-8'))
    types = {spec['name']: spec for spec in metadata['types']}
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    path = Path(config.get('classic') or '')
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        raise RuntimeError('Typed frame receiver requires its exact reviewed source prologue')
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [entry for entry in known if entry[1] == identity]
    if len(editions) != 1:
        raise RuntimeError('Typed frame receiver source image has no unique reviewed identity')
    forward = _Coordinates(struct.iter_unpack('<III', editions[0][2]))
    changes = {address: native for address, reference, native in struct.iter_unpack('<IBB', editions[0][3])}
    entries = _unwind_entries(image)
    result = {}
    for owner, name in sorted(declarations.items()):
        if name not in types:
            raise RuntimeError(f'Unknown declared frame receiver type {name}')
        source = next(((pattern, decoded.get(index, ())) for index, pattern in enumerate(patterns)
                       if pattern[0] == owner and pattern[1] & 2), None)
        native = forward.unique(owner)
        entry = entries.get(native)
        layout = _allocations(image, entry) if entry else None
        if source is None or layout is None:
            raise RuntimeError(f'Typed receiver {owner:#x} lacks its actual source prologue')
        ready, allocations = layout
        length = ready - native
        pattern, rows = source
        translated = bytes(changes.get(owner + index, value) for index, value in enumerate(pattern[3][:length]))
        if forward.unique(owner, length) != native or image.read(native, length) != translated:
            raise RuntimeError(f'Typed receiver {owner:#x} source prologue is not byte-proved')
        slot, offset = None, 0
        for position, raw, assembly in rows:
            if position >= length:
                break
            if position != offset:
                break
            offset += len(raw)
            text = re.sub(r'^rex(?:\.[wrxb]+)?\s+', '', assembly.strip().lower())
            match = re.fullmatch(r'mov\s+qword ptr \[rsp([+-]0x[0-9a-f]+)?\],rcx', text)
            active = sum(size for at, size in allocations if at <= native + position)
            if match:
                slot = (int(match[1], 16) if match[1] else 0) - active
                break
            if re.match(r'(?:mov|lea|pop|xor|add|sub|and|or)\s+(?:rcx|ecx|cx|cl)\b', text) or text.startswith('call'):
                break
        if slot != 8:
            raise RuntimeError(f'Typed receiver {owner:#x} has no proved incoming RCX shadow slot')
        allocation = sum(size for _, size in allocations)
        for position, raw, assembly in rows:
            if position < length:
                continue
            text = assembly.split('#', 1)[0].strip().lower()
            operation, _, arguments = text.partition(' ')
            parts = [part.strip() for part in arguments.split(',')]
            for index, part in enumerate(parts):
                memory = re.search(r'\[rsp([+-]0x[0-9a-f]+)?\]', part)
                if memory is None:
                    continue
                address = int(memory[1], 16) if memory[1] else 0
                width = next((size for spelling, size in (('xmmword', 16), ('qword', 8), ('dword', 4), ('word', 2), ('byte', 1))
                              if part.startswith(spelling + ' ptr')), 1)
                if address < allocation + slot + 8 and address + width > allocation + slot:
                    if operation == 'lea' or (index == 0 and operation not in ('cmp', 'test', 'bt', 'push')):
                        raise RuntimeError(f'Typed receiver {owner:#x} shadow slot is reused or escapes at {owner + position:#x}')
        fields = {}
        for field in types[name]['fields']:
            # Outer and first nested members may share an address. Prefer
            # the declared outer member, whose identity survives nesting.
            old = fields.get(field['offset'])
            if old is None or (field['name'].count('.'), len(field['name'])) < (old['name'].count('.'), len(old['name'])):
                fields[field['offset']] = field
        result[owner] = types[name]['id'], allocation + slot, slot, fields
    return result


def member_operands(reference, owner, raw, rows, receiver):
    if receiver is None:
        return []
    type_id, shadow, slot, fields = receiver
    result = []
    for left, right in zip(rows, rows[1:]):
        position, encoded, assembly = left
        at, add, text = right
        if position + len(encoded) != at or len(encoded) not in (4, 5, 8) or \
                encoded[0] & 0xfb != 0x48 or encoded[1] != 0x8b or encoded[3] != 0x24 or \
                encoded[2] & 7 != 4 or encoded[2] >> 6 == 3:
            continue
        load_width = (0, 1, 4)[encoded[2] >> 6]
        if len(encoded) != 4 + load_width:
            continue
        load_offset = int.from_bytes(encoded[4:], 'little', signed=True) if load_width else 0
        register = (encoded[2] >> 3 & 7) + (8 if encoded[0] & 4 else 0)
        if load_offset != shadow or register == 4 or not add or add[0] & 0xfe != 0x48:
            continue
        if len(add) == 6 and add[:2] == b'\x48\x05' and register == 0:
            width, displacement = 4, 2
        elif len(add) in (4, 7) and add[1] in (0x81, 0x83) and \
                add[2] & 0xf8 == 0xc0 and (add[2] & 7) + (8 if add[0] & 1 else 0) == register:
            width, displacement = (1 if add[1] == 0x83 else 4), 3
            if len(add) != displacement + width:
                continue
        else:
            continue
        offset = int.from_bytes(add[displacement:], 'little', signed=True)
        field = fields.get(offset)
        if field is None:
            continue
        result.append((at, at + displacement, width, position, type_id, field['id'], slot))
    return result


def receiver_sites(root, known, patterns, decoded, receivers, objdump=None):
    """Describe typed instruction pairs without expanding the Frame CFG.

    A consumer declares the incoming receiver type; receiver_layouts proves
    its actual entry shadow slot and rejects source lifetime reuse. Each pair
    here additionally needs two real reviewed instruction boundaries and one
    continuous reviewed translation. CALL contexts still prove their own full
    control flow and the target receiver lifetime before using these records.
    """
    if not receivers:
        return []
    from build_pe_image_bindings import PeImage
    from native_reference_semantics import _Coordinates, verified_reference_instruction_sites
    candidates = {}
    for index, pattern in enumerate(patterns):
        reference, flags, owner, raw, _, _ = pattern
        receiver = receivers.get(owner)
        if not flags & 2 or receiver is None:
            continue
        rows = decoded.get(index, ())
        for member in member_operands(reference, owner, raw, rows, receiver):
            instruction, displacement, width, load, type_id, field, slot = member
            end = displacement + width
            if not 0 <= load < instruction < end <= len(raw):
                raise RuntimeError('Invalid canonical receiver instruction pair')
            encoded = raw[load:end]
            translated = (instruction - load, displacement - load, width, 0, type_id, field, slot)
            record = (reference + load, owner, encoded, translated)
            previous = candidates.setdefault(reference + load, record)
            if previous != record:
                raise RuntimeError(f'Conflicting canonical receiver pair at {reference + load:#x}')
    sites = {reference + offset for reference, _, _, member in candidates.values()
             for offset in (member[3], member[0])}
    verified = verified_reference_instruction_sites(root, known, sites, patterns, decoded, objdump)
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    path = Path(config.get('classic') or '')
    if not path.is_absolute():
        path = root / path
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [entry for entry in known if entry[1] == identity]
    if len(editions) != 1:
        raise RuntimeError('Typed receiver sites have no unique reviewed source identity')
    forward = _Coordinates(struct.iter_unpack('<III', editions[0][2]))
    changes = {address: native for address, reference, native in struct.iter_unpack('<IBB', editions[0][3])}
    result = []
    for reference, owner, raw, member in sorted(candidates.values()):
        if reference not in verified or reference + member[0] not in verified:
            continue
        native = forward.unique(reference, len(raw))
        translated = bytes(changes.get(reference + offset, value) for offset, value in enumerate(raw))
        if native is None or image.read(native, len(raw)) != translated:
            continue
        result.append((reference, owner, raw, member))
    return result
