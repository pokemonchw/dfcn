"""Recover newly consumed canonical code through exact reviewed evidence.

The current game is never a reference source. The retained canonical function
shape and all relocation targets authenticate the packaged Classic body before
any of its bytes are transcribed into the canonical seed.
"""
from __future__ import annotations

import bisect
import hashlib
import json
from pathlib import Path
import pickle
import struct

from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates
from native_standard_library_layouts import _shape_signature
from pe_instruction_match import _branch_displacement, _memory_displacement, _region_rows


def _merged_identity(ranges, additions):
    spans = [(begin, end) for begin, end, native in ranges if begin == native]
    if len(spans) != len(ranges):
        raise RuntimeError('Canonical resource profile contains non-identity coordinates')
    spans.extend(additions)
    merged = []
    for begin, end in sorted(spans):
        if merged and begin <= merged[-1][1]:
            merged[-1] = merged[-1][0], max(merged[-1][1], end)
        else:
            merged.append((begin, end))
    return b''.join(struct.pack('<III', begin, end, begin) for begin, end in merged)


def _recover(image, objdump, native, forward, inverse, shapes, refs, *, source_only=False):
    index = bisect.bisect_right(image.starts, native) - 1
    if index < 0:
        return None
    begin, end = image.functions[index]
    if not begin <= native < end:
        return None
    reference = inverse.unique(begin, end - begin)
    if reference is None or forward.unique(reference, end - begin) != begin:
        return None
    original_refs = refs.get(reference)
    if reference not in shapes or original_refs is None:
        return None
    rows = _region_rows(image, objdump, begin, end)
    shape, actual_refs = _shape_signature(image, rows, begin, end)
    if shape != shapes[reference] or len(original_refs) != len(actual_refs):
        return None
    raw = bytearray(image.read(begin, end - begin))
    mask = bytearray(len(raw))
    fixups = []
    unresolved_calls = False
    by_offset = {address - begin: (encoded, assembly) for address, encoded, assembly in rows}
    for (offset, target, kind), (actual_offset, actual, actual_kind) in zip(original_refs, actual_refs):
        if offset != actual_offset or kind != actual_kind:
            return None
        encoded, assembly = by_offset[offset]
        if kind == 'table' and actual == target:
            # The old shape cache called any large positive memory
            # displacement inside an image section a table RVA. This also
            # includes ordinary object members such as [rcx+disp32]. When
            # both editions retain the exact encoded constant, recover it
            # as an unmasked literal. No relocation or field identity is
            # granted by this legacy classification.
            operand = _memory_displacement(encoded)
            if operand is None or operand[1] or int.from_bytes(encoded[operand[0]:operand[0] + 4], 'little') != target:
                return None
            continue
        expected = begin + target - reference if reference <= target < reference + len(raw) else forward.unique(target)
        if expected != actual:
            # The retained canonical shape covers every instruction length,
            # register and non-address operand; original_refs retains the
            # canonical branch operands themselves. Together they can
            # reconstruct source code even when a *callee identity* has not
            # been reviewed between editions. Do not turn this into an
            # address mapping: only an ordinary external E8 with no existing
            # (possibly contradictory) target correspondence is admissible.
            section = image.section(actual)
            if not (source_only and expected is None and kind == 'code' and
                    encoded[:1] == b'\xe8' and len(encoded) == 5 and section and
                    section[4] & 0x20000000 and not begin <= actual < end):
                return None
            unresolved_calls = True
        if kind == 'code':
            operand = _branch_displacement(encoded)
            if operand is None:
                return None
            at, width = operand
            value = target - (reference + offset + len(encoded))
            if not -(1 << (width * 8 - 1)) <= value < 1 << (width * 8 - 1):
                return None
            raw[offset + at:offset + at + width] = value.to_bytes(width, 'little', signed=True)
            if reference <= target < reference + len(raw):
                continue
            operand_kind = 0x100
        else:
            operand = _memory_displacement(encoded)
            if operand is None or (kind == 'data') != bool(operand[1]) or kind not in ('data', 'table'):
                return None
            at, rip = operand
            width = 4
            value = target - (reference + offset + len(encoded)) if rip else target
            if rip and not -(1 << 31) <= value < 1 << 31:
                return None
            if not rip and not 0 <= value <= 0xffffffff:
                return None
            raw[offset + at:offset + at + width] = value.to_bytes(width, 'little', signed=bool(rip))
            section = image.section(actual)
            operand_kind = (0 if rip else 1) | (0x100 if section and section[4] & 0x20000000 else 0)
        mask[offset + at:offset + at + width] = b'\x01' * width
        fixups.append((offset + at, width, offset + len(encoded), target, operand_kind))
    unwind = getattr(image, '_reference_unwind_extents', None)
    if unwind is None:
        pe = struct.unpack_from('<I', image.data, 0x3c)[0]
        pdata, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
        if length % 12:
            raise RuntimeError('Reviewed reference image has a malformed unwind table')
        unwind = {struct.unpack('<III', image.read(pdata + at, 12))[:2] for at in range(0, length, 12)}
        image._reference_unwind_extents = unwind
    # PeImage.functions also contains gaps holding multiple leaf routines.
    # Such a gap is authenticated source material, never a whole-function
    # identity. The normal seed producer splits complete leaves and removes
    # these bit-64 carriers before writing any runtime scan pattern.
    whole = (begin, end) in unwind
    if unresolved_calls:
        if not whole:
            return None
        # A source-only body is one complete logical entry, not a chained
        # cold fragment whose owner could be rewritten during seed assembly.
        # Such fragments still need their independently reviewed parent.
        pe = struct.unpack_from('<I', image.data, 0x3c)[0]
        pdata, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
        entries = [struct.unpack('<III', image.read(pdata + at, 12)) for at in range(0, length, 12)]
        info = [record[2] for record in entries if record[:2] == (begin, end)]
        if len(info) != 1 or image.read(info[0], 1)[0] & (4 << 3):
            return None
    return reference, (1027 if unresolved_calls else 3) if whole else 65, reference if whole else 0, bytes(raw), bytes(mask), sorted(fixups)


def _admit_slice(image, forward, pattern, address, length):
    reference, _, _, raw, mask, fixups = pattern
    native = forward.unique(address, length)
    if native is None:
        return None
    actual = image.read(native, length)
    offset = address - reference
    covered = set()
    for at, width, next_at, target, kind in fixups:
        if at + width <= offset or at >= offset + length:
            continue
        operand = forward.unique(reference + at, width)
        expected = forward.unique(target)
        if operand is None or expected is None:
            return None
        encoded = image.read(operand, width)
        flavor = kind & 0xff
        if flavor == 2:
            found = int.from_bytes(encoded, 'little') - image.base
        elif flavor == 1:
            found = int.from_bytes(encoded, 'little')
        elif flavor == 0:
            after = forward.unique(reference + next_at)
            if after is None:
                return None
            found = after + int.from_bytes(encoded, 'little', signed=True)
        else:
            return None
        if found != expected:
            return None
        covered.update(range(at, at + width))
    for index, value in enumerate(actual):
        at = offset + index
        if mask[at] and at not in covered:
            return None
        if not mask[at] and value != raw[at]:
            return None
    return native, actual


def prepare_required_resources(root, known, patterns, required, objdump):
    canonical = [index for index, entry in enumerate(known) if entry[0].decode('utf-8').endswith(' Steam')]
    if len(canonical) != 1:
        raise RuntimeError('New reference resources need a unique packaged canonical identity')
    canonical_index = canonical[0]
    label, identity, encoded, changes = known[canonical_index]
    canonical_ranges = list(struct.iter_unpack('<III', encoded))
    canonical_coordinates = _Coordinates(canonical_ranges)
    pending = [(address, length) for address, length in required
               if canonical_coordinates.unique(address, length) != address]
    if not pending:
        return known, patterns
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    configured = config.get('classic')
    if not configured:
        raise RuntimeError(f'Cannot recover new reference resource {pending[0][0]:#x}: no configured reviewed Classic image')
    path = Path(configured)
    image = PeImage(path if path.is_absolute() else root / path)
    actual_identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [index for index, entry in enumerate(known)
                if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == actual_identity]
    if len(editions) != 1:
        raise RuntimeError('Reference resource recovery requires the packaged exact Classic image identity')
    classic_index = editions[0]
    classic_label, classic_identity, classic_ranges, classic_changes = known[classic_index]
    ranges = list(struct.iter_unpack('<III', classic_ranges))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    cache = root / 'data/extracted/cache/native-build' / ('pe-3-' + identity[:32].hex() + '.pickle')
    shapes, refs = {}, {}
    if cache.is_file():
        shapes, refs, _ = pickle.loads(cache.read_bytes())
    byte_changes = {address: (source, target) for address, source, target in struct.iter_unpack('<IBB', classic_changes)}
    patterns = list(patterns)
    admitted, recovered = [], 0
    for address, length in pending:
        native = forward.unique(address, length)
        section = image.section(native) if native is not None else None
        available = [entry for entry in patterns if entry[1] & 1 and
                     entry[0] <= address and address + length <= entry[0] + len(entry[3])]
        if section is not None and not section[4] & 0x20000000:
            # Named data and RTTI have their own semantic producers. A code
            # shape can never authorize a new data object or virtual slot.
            continue
        if native is None:
            if available:
                raise RuntimeError(f'New canonical code {address:#x}+{length:#x} has no unique reviewed coordinate')
            continue
        if not available:
            restored = _recover(image, objdump, native, forward, inverse, shapes, refs)
            if restored is None or not restored[0] <= address or address + length > restored[0] + len(restored[3]):
                raise RuntimeError(f'Cannot restore canonical code {address:#x}+{length:#x}: no complete matching source shape and relocation evidence')
            patterns.append(restored)
            available = [restored]
            recovered += 1
            # Every restored relocation is retained for the reviewed edition,
            # not just the newly requested first byte of a callable entry.
            actual = image.read(forward.unique(restored[0], len(restored[3])), len(restored[3]))
            for index, (source, target) in enumerate(zip(restored[3], actual)):
                if source != target:
                    coordinate = restored[0] + index
                    previous = byte_changes.setdefault(coordinate, (source, target))
                    if previous != (source, target):
                        raise RuntimeError(f'Restored canonical byte conflicts with reviewed data at {coordinate:#x}')
        available.sort(key=lambda entry: len(entry[3]))
        proof = None
        for entry in available:
            evidence = _admit_slice(image, forward, entry, address, length)
            if evidence is not None:
                proof = entry, evidence
                break
        if proof is None:
            raise RuntimeError(f'New canonical code {address:#x}+{length:#x} differs from its admitted instruction operands')
        pattern, (_, actual) = proof
        source = pattern[3][address - pattern[0]:address - pattern[0] + length]
        for index, (original, target) in enumerate(zip(source, actual)):
            if original != target:
                coordinate = address + index
                previous = byte_changes.setdefault(coordinate, (original, target))
                if previous != (original, target):
                    raise RuntimeError(f'New canonical byte conflicts with reviewed data at {coordinate:#x}')
        admitted.append((address, address + length))
    known = list(known)
    known[canonical_index] = label, identity, _merged_identity(canonical_ranges, admitted), changes
    encoded_changes = b''.join(struct.pack('<IBB', address, source, target)
                               for address, (source, target) in sorted(byte_changes.items()))
    known[classic_index] = classic_label, classic_identity, classic_ranges, encoded_changes
    print(f'Recovered canonical code resources: {len(admitted)} new spans; {recovered} complete source regions.', flush=True)
    return known, patterns
