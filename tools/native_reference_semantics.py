"""Recover canonical virtual-method identities from a reviewed edition map.

This module is called only by the normal build's seed refresh. It can decode
stored instructions but never starts an executable. A Classic image is usable
only when its complete digest, timestamp and image size match a packaged known
edition; every recovered coordinate must have a unique proved inverse mapping.
"""
from __future__ import annotations

import bisect
import hashlib
import json
from pathlib import Path
import pickle
import re
import struct
import subprocess

from build_pe_image_bindings import PeImage


class _Coordinates:
    """Interval lookup retaining ambiguity, including overlapping aliases."""
    def __init__(self, ranges):
        self.ranges = sorted(ranges)
        self.starts = [begin for begin, _, _ in self.ranges]
        self.ends = []
        maximum = 0
        for begin, end, target in self.ranges:
            if not begin or end <= begin or not target:
                raise RuntimeError('Invalid reviewed reference-semantic range')
            maximum = max(maximum, end)
            self.ends.append(maximum)

    def unique(self, address, length=1):
        at = bisect.bisect_right(self.starts, address) - 1
        matches = set()
        while at >= 0 and self.ends[at] >= address + length:
            begin, end, target = self.ranges[at]
            if begin <= address and address + length <= end:
                matches.add(target + address - begin)
            at -= 1
        return next(iter(matches)) if len(matches) == 1 else None


def _writes_rbp(assembly):
    assembly = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', assembly.strip(), flags=re.I)
    parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
    if not parts:
        return False
    operation = parts[0]
    if operation in ('leave', 'enter'):
        return True
    if len(parts) < 2:
        return False
    operands = [value.strip() for value in parts[1].split(',')]
    registers = {'rbp', 'ebp', 'bp', 'bpl'}
    if operation in ('xchg', 'xadd'):
        return any(value in registers for value in operands)
    return operands[0] in registers and operation not in ('cmp', 'test', 'push', 'bt', 'call', 'jmp')


def _prologue_allocations(image, entry, header):
    if header[0] >> 3 & 4:
        return None
    codes = image.read(entry[2] + 4, header[2] * 2)
    events = {}
    at = 0
    while at < header[2]:
        end, packed = codes[at * 2:at * 2 + 2]
        operation, info = packed & 15, packed >> 4
        slots, size = 1, 0
        if operation == 0:
            size = 8
        elif operation == 1:
            slots = 2 if info == 0 else 3 if info == 1 else 0
            if not slots or at + slots > header[2]:
                return None
            size = struct.unpack_from('<H' if info == 0 else '<I', codes, at * 2 + 2)[0] * (8 if info == 0 else 1)
        elif operation == 2:
            size = info * 8 + 8
        elif operation == 3:
            if info:
                return None
        elif operation in (4, 8):
            slots = 2
        elif operation in (5, 9):
            slots = 3
        else:
            return None
        if at + slots > header[2] or end > header[1] or size and end in events:
            return None
        if size:
            events[end] = size
        at += slots
    return events


def _prologue_alias(image, entry, header, owner, rows, forward, changes):
    """Prove affine register copies of entry RSP on an actual straight prologue."""
    events = _prologue_allocations(image, entry, header)
    if events is None:
        return None
    names = ('rax', 'rcx', 'rdx', 'rbx', 'rsp', 'rbp', 'rsi', 'rdi') + tuple(f'r{n}' for n in range(8, 16))
    aliases = {}
    partial = {f'e{name[1:]}': name for name in names[:8]}
    partial.update({name[1:]: name for name in names[:8]})
    partial.update(dict(zip(('al', 'cl', 'dl', 'bl', 'spl', 'bpl', 'sil', 'dil'), names)))
    partial.update(dict(zip(('ah', 'ch', 'dh', 'bh'), names)))
    partial.update({f'r{n}{suffix}': f'r{n}' for n in range(8, 16) for suffix in ('d', 'w', 'b')})
    previous = 0
    for position, encoded, assembly in rows:
        actual = forward.unique(owner + position, len(encoded))
        if position != previous or actual != entry[0] + position or position + len(encoded) > header[1]:
            return None
        translated = bytes(changes.get(owner + position + index, value) for index, value in enumerate(encoded))
        if image.read(actual, len(encoded)) != translated:
            return None
        previous = position + len(encoded)
        before = sum(size for end, size in events.items() if end <= position)
        after = sum(size for end, size in events.items() if end <= previous)
        aliases['rsp'] = -before
        assembly = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', assembly, flags=re.I)
        parts = assembly.split('#', 1)[0].strip().lower().split(None, 1)
        operation = parts[0] if parts else ''
        operands = [value.strip() for value in parts[1].split(',')] if len(parts) > 1 else []
        if operation not in ('mov', 'movabs', 'movsx', 'movzx', 'movsxd', 'movaps', 'movups',
                             'movdqa', 'movdqu', 'movss', 'movsd', 'movq', 'movd', 'lea',
                             'push', 'sub', 'add', 'xor', 'and', 'or', 'test', 'cmp', 'bt',
                             'nop', 'call', 'xchg', 'xadd', 'imul', 'mul', 'div', 'idiv',
                             'xorps', 'pxor', 'endbr64'):
            return None
        if operation.startswith(('j', 'loop', 'ret')) or operation in ('int3', 'leave', 'enter', 'pop'):
            return None
        if operation == 'push':
            if after - before != 8:
                return None
        elif operands and operands[0] == 'rsp' and operation not in ('cmp', 'test', 'bt'):
            if operation != 'sub' or len(operands) != 2 or after <= before:
                return None
            if operands[1].startswith('0x') and int(operands[1], 16) != after - before:
                return None
        elif after != before:
            return None
        destination, value = None, None
        if len(operands) == 2 and operands[0] in names:
            destination = operands[0]
            if operation == 'mov' and operands[1] in aliases:
                value = aliases[operands[1]]
            elif operation == 'lea':
                match = re.fullmatch(r'\[([a-z0-9]+)([+-]0x[0-9a-f]+)?\]', operands[1])
                if match and match[1] in aliases:
                    value = aliases[match[1]] + int(match[2] or '0', 16)
            elif operation in ('add', 'sub') and operands[0] in aliases and re.fullmatch(r'(?:0x[0-9a-f]+|[0-9]+)', operands[1]):
                value = aliases[operands[0]] + int(operands[1], 0) * (-1 if operation == 'sub' else 1)
        if operation == 'call':
            for register in ('rax', 'rcx', 'rdx', 'r8', 'r9', 'r10', 'r11'):
                aliases.pop(register, None)
        elif operation in ('mul', 'div', 'idiv') or operation == 'imul' and len(operands) == 1:
            aliases.pop('rax', None)
            aliases.pop('rdx', None)
        elif operands and operation not in ('cmp', 'test', 'bt', 'push', 'nop'):
            for operand in (operands if operation in ('xchg', 'xadd') else operands[:1]):
                aliases.pop(partial.get(operand, operand), None)
        if destination and value is not None:
            aliases[destination] = value
        if operation in ('lea', 'mov') and destination == 'rbp' and value is not None:
            return previous
    return None


def reference_frame_registers(root, known, owners, *, patterns=(), decoded=None, objdump=None):
    """Recover frame-register contracts from the exact reviewed baseline.

    RBP is otherwise an ordinary object register. Only real UNWIND_INFO and
    uniquely mapped entry/prologue coordinates can authorize its stack use.
    """
    config = root / 'data/runtime/native-pe-images.json'
    if not config.is_file():
        return []
    name = json.loads(config.read_text(encoding='utf-8-sig')).get('classic')
    if not name:
        return []
    path = Path(name)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return []
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known
                if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(profiles) != 1:
        return []
    ranges = list(struct.iter_unpack('<III', profiles[0][2]))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    pe = struct.unpack_from('<I', image.data, 0x3c)[0]
    pdata, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
    if length % 12:
        raise RuntimeError('Invalid baseline frame unwind table')
    entries = {entry[0]: entry for entry in
               (struct.unpack('<III', image.read(pdata + offset, 12)) for offset in range(0, length, 12))}
    result = []
    source = {pattern[0]: (pattern, (decoded or {}).get(index, ()))
              for index, pattern in enumerate(patterns) if pattern[1] & 2 and pattern[0] == pattern[2]}
    changes = {address: native for address, reference, native in struct.iter_unpack('<IBB', profiles[0][3])}
    for owner in sorted(set(owners)):
        native = forward.unique(owner)
        entry = entries.get(native)
        visited = set()
        while entry:
            if entry[0] in visited:
                raise RuntimeError('Cyclic baseline frame unwind chain')
            visited.add(entry[0])
            header = image.read(entry[2], 4)
            if header[0] & 7 != 1:
                raise RuntimeError('Unsupported baseline frame unwind metadata')
            if not header[0] >> 3 & 4:
                break
            parent = struct.unpack('<III', image.read(entry[2] + 4 + ((header[2] + 1) & ~1) * 2, 12))
            if entries.get(parent[0]) != parent:
                raise RuntimeError('Inconsistent baseline frame unwind parent')
            entry = parent
        if not entry or inverse.unique(entry[0]) != owner:
            continue
        header = image.read(entry[2], 4)
        register = header[3] & 15
        ready = inverse.unique(entry[0] + header[1])
        extent = inverse.unique(entry[1] - 1)
        if register and ready is not None and extent is not None and ready >= owner and forward.unique(ready) == entry[0] + header[1]:
            result.append((owner, register, ready, extent + 1))
            continue
        # Fixed-RSP MSVC frames can use RBP as a stack alias without an unwind
        # frame-register designation. Authorize only a canonical MOV/LEA whose
        # bytes agree with the exact reviewed image, until its first clobber.
        item = source.get(owner)
        if register or not item:
            continue
        pattern, rows = item
        definition = _prologue_alias(image, entry, header, owner, rows, forward, changes)
        if definition is None:
            continue
        end = len(pattern[3])
        previous = definition
        for position, encoded, assembly in rows:
            if position < definition:
                continue
            if position != previous:
                end = previous
                break
            if _writes_rbp(assembly):
                end = position
                break
            previous = position + len(encoded)
        if end > definition and forward.unique(owner + definition) is not None and forward.unique(owner + end - 1) is not None:
            result.append((owner, 0x100 | 5, owner + definition, owner + end))
    return result


def _reviewed_instruction_rows(root, image, objdump, sites):
    """Keep proved image instruction boundaries independently of data tails.

    The ordinary PE shape cache intentionally retains only complete functions.
    It cannot supply individual boundaries in a routine with inline switch
    data. Decode those actual unwind extents here, retaining each complete
    instruction without interpreting missing tail bytes as code.
    """
    extents = set()
    for site in sites:
        index = bisect.bisect_right(image.starts, site) - 1
        if index >= 0:
            begin, end = image.functions[index]
            if begin <= site < end:
                extents.add((begin, end))
    if not extents:
        return {}
    extents = sorted(extents)
    starts = [begin for begin, _ in extents]
    digest = hashlib.sha256(image.data)
    digest.update(repr(extents).encode('ascii'))
    cache = root / 'data/extracted/cache/native-build' / ('reference-boundaries-2-' + digest.hexdigest() + '.pickle')
    if cache.is_file():
        return pickle.loads(cache.read_bytes())
    print(f'Reading reviewed instruction boundaries in {len(extents)} baseline code extents.', flush=True)
    process = subprocess.Popen([str(objdump), '-d', '-w', '-M', 'intel', str(image.path)],
                               stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                               text=True, encoding='utf-8', errors='replace')
    expression = re.compile(r'^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)$')
    result = {}
    for line in process.stdout:
        match = expression.match(line)
        if not match:
            continue
        address = int(match[1], 16) - image.base
        index = bisect.bisect_right(starts, address) - 1
        if index < 0:
            continue
        begin, end = extents[index]
        encoded = bytes.fromhex(match[2])
        assembly = re.sub(r'^\s*rex(?:\.[wrxb]+)?\s+', '', match[3].strip(), flags=re.I)
        mnemonic = assembly.split(None, 1)[0].lower() if assembly else ''
        if (not encoded or not begin <= address < end or address + len(encoded) > end or
                mnemonic in {'', '(bad)', '.byte'} or mnemonic.startswith('rex')):
            continue
        if image.read(address, len(encoded)) != encoded:
            raise RuntimeError(f'Reviewed baseline instruction differs from image at {address:#x}')
        result[address] = encoded
    errors = process.stderr.read()
    if process.wait():
        raise RuntimeError(f'Reviewed baseline disassembly failed: {errors.strip()}')
    cache.parent.mkdir(parents=True, exist_ok=True)
    cache.write_bytes(pickle.dumps(result, protocol=5))
    return result


def verified_reference_instruction_sites(root, known, sites, patterns, decoded, objdump=None):
    """Confirm explicit consumer instructions against reviewed baseline code."""
    config = root / 'data/runtime/native-pe-images.json'
    if not config.is_file():
        return set()
    name = json.loads(config.read_text(encoding='utf-8-sig')).get('classic')
    if not name:
        return set()
    path = Path(name)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return set()
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(profiles) != 1:
        return set()
    coordinates = _Coordinates(struct.iter_unpack('<III', profiles[0][2]))
    changes = {address: native for address, reference, native in struct.iter_unpack('<IBB', profiles[0][3])}
    native_sites = {coordinates.unique(site) for site in sites if coordinates.unique(site) is not None}
    if not objdump:
        return set()
    native_rows = _reviewed_instruction_rows(root, image, objdump, native_sites)
    confirmed = set()
    for index, pattern in enumerate(patterns):
        if not pattern[1] & 2:
            continue
        for offset, raw, assembly in decoded.get(index, ()):
            reference = pattern[0] + offset
            if reference not in sites:
                continue
            native = coordinates.unique(reference, len(raw))
            translated = bytes(changes.get(reference + at, value) for at, value in enumerate(raw))
            if native in native_rows and native_rows[native] == translated and image.read(native, len(raw)) == translated:
                confirmed.add(reference)
    return confirmed


def augment_reference_literals(root, known, patterns):
    """Recover immutable object identities used by retained code operands.

    They are operand identities, not new consumer requirements. The original
    seed only retained required data, which left single-caller literals with
    no independent evidence and prevented otherwise proved caller matching.
    """
    config = root / 'data/runtime/native-pe-images.json'
    if not config.is_file():
        return
    configured = json.loads(config.read_text(encoding='utf-8-sig')).get('classic')
    if not configured:
        return
    path = Path(configured)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(profiles) != 1:
        return
    profile = profiles[0]
    coordinates = _Coordinates(struct.iter_unpack('<III', profile[2]))
    changes = {address: (reference, native) for address, reference, native in struct.iter_unpack('<IBB', profile[3])}
    targets = {}
    for _, flags, _, _, _, fixups in patterns:
        if not flags & 1:
            continue
        for _, _, _, target, kind in fixups:
            if target and not kind & 0x100:
                targets[target] = max(targets.get(target, 0), kind >> 16)
    existing = {(reference, raw) for reference, flags, _, raw, _, _ in patterns if flags & 4}
    existing_indices = {(reference, raw): index for index, (reference, flags, _, raw, _, _) in enumerate(patterns) if flags & 4}
    additions = []
    for reference, width in sorted(targets.items()):
        native = coordinates.unique(reference)
        if native is None:
            continue
        section = image.section(native)
        if not section or section[4] & (0x20000000 | 0x80000000):
            continue
        available = min(512, section[1] - native, section[0] + section[3] - native)
        if available < 5:
            continue
        stored = image.read(native, available)
        terminator = stored.find(b'\0')
        if terminator < 4 or terminator + 1 < width:
            continue
        # No neighbour strings or alignment padding participate in identity.
        # A wider decoded memory read needs another complete payload proof.
        stored = stored[:terminator + 1]
        complete_span = len(stored) >= 8 and coordinates.unique(reference, len(stored)) == native
        raw = bytearray(stored)
        valid = True
        for index, byte in (enumerate(stored) if complete_span else ()):
            change = changes.get(reference + index)
            if change:
                original, actual = change
                if actual != byte:
                    valid = False
                    break
                raw[index] = original
        if (not valid or raw[-1] or any(byte not in (9, 10, 13) and not 32 <= byte <= 126 for byte in raw[:-1])):
            continue
        raw = bytes(raw)
        flags = 4 if complete_span else 36
        if flags & 32 and (native == section[0] or image.read(native - 1, 1) == b'\0'):
            flags |= 128
        if (reference, raw) not in existing:
            # A reviewed root identifies the same immutable object. Its
            # complete Classic contents are an identity anchor, not a claim
            # that canonical interior coordinates or bytes were retained.
            additions.append((reference, flags, 0, raw, bytes(len(raw)), []))
            existing.add((reference, raw))
        elif flags & 128:
            index = existing_indices.get((reference, raw))
            if index is not None and patterns[index][1] & 32:
                entry = patterns[index]
                patterns[index] = (entry[0], entry[1] | 128, *entry[2:])
    patterns.extend(additions)
    print(f'Canonical immutable operands: {len(additions)} reviewed identities added '
          f'({sum(bool(entry[1] & 32) for entry in additions)} root-only).', flush=True)


def augment_reference_call_targets(root, known, patterns, objdump):
    """Restore missing callee bodies authenticated by original source shapes.

    The caller graph can name leaf routines absent from the consumed-resource
    seed. The exact reviewed Classic edition may supply their source bytes
    only after its complete region shape and every relocation agree with the
    retained original executable evidence. Subsequent leaf splitting, not a
    whole gap relocation, gives these bytes a callable identity.
    """
    from native_reference_resources import _recover
    config = root / 'data/runtime/native-pe-images.json'
    if not config.is_file() or not objdump:
        return known, patterns
    configured = json.loads(config.read_text(encoding='utf-8-sig')).get('classic')
    if not configured:
        return known, patterns
    path = Path(configured)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return known, patterns
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    classics = [index for index, entry in enumerate(known)
                if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    originals = [entry for entry in known if entry[0].decode('utf-8').endswith(' Steam')]
    if len(classics) != 1 or len(originals) != 1:
        return known, patterns
    cache = root / 'data/extracted/cache/native-build' / ('pe-3-' + originals[0][1][:32].hex() + '.pickle')
    if not cache.is_file():
        return known, patterns
    shapes, refs, _ = pickle.loads(cache.read_bytes())
    profile = known[classics[0]]
    ranges = list(struct.iter_unpack('<III', profile[2]))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    pe = struct.unpack_from('<I', image.data, 0x3c)[0]
    pdata, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
    unwind = sorted(struct.unpack('<III', image.read(pdata + at, 12))[:2] for at in range(0, length, 12))
    unwind_starts = [begin for begin, _ in unwind]
    covered = sorted((ref, ref + len(raw)) for ref, flags, _, raw, _, _ in patterns if flags & 1)
    covered_starts, covered_ends, maximum = [], [], 0
    for begin, end in covered:
        maximum = max(maximum, end)
        covered_starts.append(begin)
        covered_ends.append(maximum)
    targets = {target for _, flags, _, raw, _, fixups in patterns if flags & 1
               for offset, width, next_at, target, kind in fixups
               if kind & 0x100 and not kind & 0xff and width == 4 and offset and
               next_at == offset + 4 and raw[offset - 1] == 0xe8}
    additions, visited, leaves, functions = [], set(), 0, 0
    changes = {address: (source, target) for address, source, target in struct.iter_unpack('<IBB', profile[3])}
    pending, cursor = sorted(targets), 0
    while cursor < len(pending):
        target = pending[cursor]
        cursor += 1
        at = bisect.bisect_right(covered_starts, target) - 1
        if at >= 0 and target < covered_ends[at]:
            continue
        native = forward.unique(target)
        if native is None:
            continue
        at = bisect.bisect_right(unwind_starts, native) - 1
        has_unwind = at >= 0 and native < unwind[at][1]
        at = bisect.bisect_right(image.starts, native) - 1
        if at < 0 or not image.functions[at][0] <= native < image.functions[at][1] or at in visited:
            continue
        visited.add(at)
        restored = _recover(image, objdump, native, forward, inverse, shapes, refs)
        if restored is None:
            continue
        reference, _, _, raw, mask, fixups = restored
        # Close the original callee dependency graph in this production run.
        # A newly recovered body may call another previously unretained
        # routine; builds must not be used as iterations of this algorithm.
        for offset, width, next_at, destination, kind in fixups:
            if (kind & 0x100 and not kind & 0xff and width == 4 and offset and
                    next_at == offset + 4 and raw[offset - 1] == 0xe8 and destination not in targets):
                targets.add(destination)
                pending.append(destination)
        actual = image.read(forward.unique(reference, len(raw)), len(raw))
        for offset, (source, byte) in enumerate(zip(raw, actual)):
            if source != byte and changes.setdefault(reference + offset, (source, byte)) != (source, byte):
                raise RuntimeError(f'Restored leaf bytes conflict with reviewed source at {reference + offset:#x}')
        if has_unwind:
            additions.append(restored)
            functions += 1
        else:
            additions.append((reference, 65, 0, raw, mask, fixups))
            leaves += 1
    patterns = list(patterns) + additions
    for index, pattern in enumerate(patterns):
        reference, flags, owner, raw, mask, fixups = pattern
        if not flags & 64 or raw[:1] == b'\xcc':
            continue
        # Include carriers recovered for newly required resources as well as
        # caller dependencies. Their actual gap boundary may start at the
        # first leaf instruction, with the reviewed padding just before it.
        begin = forward.unique(reference, len(raw))
        if (begin is not None and reference > 1 and begin > 1 and
                forward.unique(reference - 1, len(raw) + 1) == begin - 1 and
                image.read(begin - 1, 1) == b'\xcc' and changes.get(reference - 1, (0xcc, 0xcc)) == (0xcc, 0xcc)):
            reference -= 1
            raw, mask = b'\xcc' + raw, b'\0' + mask
            fixups = [(offset + 1, width, next_at + 1 if next_at else 0, target, kind)
                      for offset, width, next_at, target, kind in fixups]
            patterns[index] = (reference, flags, owner, raw, mask, fixups)
    known = list(known)
    known[classics[0]] = (*profile[:3], b''.join(struct.pack('<IBB', address, source, target)
                                              for address, (source, target) in sorted(changes.items())))
    print(f'Canonical caller dependencies: {leaves} complete reviewed leaf regions and '
          f'{functions} unwind bodies recovered.', flush=True)
    return known, patterns


def normalize_reference_scopes(root, known, scopes, *, return_owners=False):
    """Name split display bodies by their proved parent unwind function.

    Only the packaged exact Classic identity can supply missing reference
    unwind metadata. Both the input fragment and parent use reviewed maps.
    No target executable or relative fragment displacement becomes a baseline.
    """
    unchanged = {scope['owner']: scope['owner'] for scope in scopes} if return_owners else scopes
    config = root / 'data/runtime/native-pe-images.json'
    if not config.is_file():
        return unchanged
    name = json.loads(config.read_text(encoding='utf-8-sig')).get('classic')
    if not name:
        return unchanged
    path = Path(name)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return unchanged
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [entry for entry in known
                if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(profiles) != 1:
        return unchanged
    ranges = list(struct.iter_unpack('<III', profiles[0][2]))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    pe = struct.unpack_from('<I', image.data, 0x3c)[0]
    pdata, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
    if length % 12:
        raise RuntimeError('Invalid reviewed Classic unwind table')
    entries = {entry[0]: entry for entry in
               (struct.unpack('<III', image.read(pdata + offset, 12)) for offset in range(0, length, 12))}
    result = {}
    owners = {}
    changed = 0
    for scope in scopes:
        reference = scope['owner']
        native = forward.unique(reference)
        entry = entries.get(native)
        visited = set()
        while entry:
            begin, end, unwind = entry
            if begin in visited:
                raise RuntimeError('Cyclic reviewed Classic unwind chain')
            visited.add(begin)
            header = image.read(unwind, 4)
            if not header[0] >> 3 & 4:
                break
            chained = struct.unpack('<III', image.read(unwind + 4 + ((header[2] + 1) & ~1) * 2, 12))
            if entries.get(chained[0]) != chained:
                raise RuntimeError('Reviewed Classic unwind chain has no exact parent entry')
            entry = chained
        if entry and entry[0] != native:
            parent = inverse.unique(entry[0])
            if parent is not None and forward.unique(parent) == entry[0]:
                reference = parent
                changed += 1
        owners[scope['owner']] = reference
        result[reference] = result.get(reference, 0) | scope['flags']
    if changed:
        print(f'Canonical {"code" if return_owners else "display"} scopes: {changed} split bodies bound to proved parent functions.', flush=True)
    if return_owners:
        return owners
    return [{'owner': owner, 'flags': flags} for owner, flags in sorted(result.items())]


def augment_reference_tables(root: Path, known, tables, metadata, extra_types=()):
    """Return semantic-only tables with proved canonical method RVAs.

    ``known`` and ``tables`` use native_pe_seed_evidence._read's tuples. The
    returned tuples are ``(reference_table, RTTI_name_bytes, u32_slot_bytes)``.
    Missing or ambiguous inverses remain zero, never a nearest-address guess.
    Callers may feed this result to build_semantic_evidence without adding the
    enlarged tables to the address catalog's required resources.
    """
    result = {reference: (name, bytearray(slots)) for reference, name, slots in tables}
    if len(result) != len(tables):
        raise RuntimeError('Duplicate canonical virtual table in reference seed')
    config_path = root / 'data/runtime/native-pe-images.json'
    if not config_path.is_file():
        return list(tables)
    configured = json.loads(config_path.read_text(encoding='utf-8-sig')).get('classic')
    if not configured:
        return list(tables)
    path = Path(configured)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        print('Canonical virtual methods: configured Classic reference is unavailable.', flush=True)
        return list(tables)
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    candidates = [entry for entry in known
                  if entry[0].decode('utf-8').endswith(' Classic') and entry[1] == identity]
    if len(candidates) != 1:
        print('Canonical virtual methods: Classic image has no unique packaged exact identity.', flush=True)
        return list(tables)
    _, _, encoded_ranges, _ = candidates[0]
    if len(encoded_ranges) % 12:
        raise RuntimeError('Truncated reviewed Classic coordinate map')
    ranges = list(struct.iter_unpack('<III', encoded_ranges))
    forward = _Coordinates(ranges)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in ranges)
    types = {spec['name']: spec for spec in metadata['types']}
    for spec in extra_types:
        previous = types.setdefault(spec['name'], spec)
        if previous['reference_table'] != spec['reference_table']:
            raise RuntimeError(f'Conflicting canonical table identity for {spec["name"]}')
    recovered = 0
    enlarged = 0
    unresolved = 0
    for spec in types.values():
        reference = spec['reference_table']
        methods = spec['methods']
        if not reference or not methods:
            continue
        offsets = [method['slot'] for method in methods]
        if any(offset < 0 or offset % 8 or offset >= 32768 for offset in offsets):
            raise RuntimeError(f'Invalid canonical method slot for {spec["name"]}')
        native = forward.unique(reference, 8)
        if native is None:
            unresolved += len(methods)
            continue
        actual_name = image.vtable_type(native)
        decorated = '@'.join(reversed((spec.get('original') or spec['name']).split('::')))
        if actual_name not in (f'.?AV{decorated}@@', f'.?AU{decorated}@@'):
            raise RuntimeError(f'Reviewed Classic table identity differs for {spec["name"]}: {actual_name}')
        name = actual_name.encode('utf-8')
        previous_name, previous_slots = result.get(reference, (name, bytearray()))
        if previous_name != name or len(previous_slots) % 4:
            raise RuntimeError(f'Canonical table evidence disagrees at {reference:#x}')
        slots = bytearray(previous_slots)
        count = max(len(slots) // 4, max(offsets) // 8 + 1)
        slots.extend(bytes(count * 4 - len(slots)))
        changed = False
        for index in range(count):
            # Prove this slot's coordinate independently, including the final
            # byte. A mapped root never grants an unproved table-wide delta.
            slot = forward.unique(reference + index * 8, 8)
            if slot != native + index * 8:
                unresolved += 1
                continue
            pointer = struct.unpack('<Q', image.read(slot, 8))[0] - image.base
            section = image.section(pointer)
            if not section or not section[4] & 0x20000000:
                raise RuntimeError(f'Non-executable reviewed Classic method at {slot:#x}')
            function = inverse.unique(pointer)
            if function is None:
                unresolved += 1
                continue
            previous = struct.unpack_from('<I', slots, index * 4)[0]
            if previous and previous != function:
                raise RuntimeError(f'Canonical method evidence disagrees at {reference + index * 8:#x}')
            if not previous:
                struct.pack_into('<I', slots, index * 4, function)
                recovered += 1
                changed = True
        if changed:
            result[reference] = name, slots
            enlarged += 1
    print(f'Canonical virtual methods: recovered {recovered} method identities across {enlarged} tables; '
          f'{unresolved} slots remain without a unique reviewed inverse.', flush=True)
    return [(reference, name, bytes(slots)) for reference, (name, slots) in sorted(result.items())]
