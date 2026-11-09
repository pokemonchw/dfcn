"""Refine stored PE reference instructions inside the normal native build.

The original schema-1 seed remains the source of every byte and identity.
No installed executable is promoted to a reference image, and this module has
no standalone command. Generated windows keep all non-address operands exact.
"""
from __future__ import annotations

import bisect
from dataclasses import dataclass
import hashlib
import os
from pathlib import Path
import pickle
import re
import struct
import subprocess
import tempfile

from pe_instruction_match import _branch_displacement, _opcode_start


GENERATED = 16
HINT_ONLY = 8
_LINE = re.compile(r'^\s*([0-9a-f]+):\s*\t([0-9a-f ]+)\t(.*)$')


class Reader:
    def __init__(self, content):
        self.content, self.at = content, 0

    def take(self, count):
        end = self.at + count
        if count < 0 or end > len(self.content):
            raise RuntimeError('Truncated PE reference refinement source')
        value = self.content[self.at:end]
        self.at = end
        return value

    def number(self):
        return struct.unpack('<I', self.take(4))[0]

    def blob(self):
        return self.take(self.number())


@dataclass(frozen=True)
class Pattern:
    reference: int
    flags: int
    raw: bytes
    mask: bytes
    fixups: tuple


def _read(content):
    source = Reader(content)
    if source.take(8) != b'DFCNPE01' or source.number() != 1:
        raise RuntimeError('PE reference refinement requires the existing schema-1 seed')
    required = dict(struct.unpack('<II', source.take(8)) for _ in range(source.number()))
    image_size = 0
    for _ in range(source.number()):
        label, identity = source.blob(), source.take(40)
        if label == b'53.16 Steam':
            image_size = struct.unpack_from('<I', identity, 36)[0]
        source.take(source.number() * 12)
        source.take(source.number() * 6)
    if not image_size:
        raise RuntimeError('The PE refinement seed has no fixed Steam 53.16 reference identity')
    prefix = content[:source.at]
    patterns = []
    for _ in range(source.number()):
        reference, flags = source.number(), source.number()
        raw, mask = source.blob(), source.blob()
        fixups = tuple(struct.unpack('<IIIII', source.take(20)) for _ in range(source.number()))
        if not raw or len(raw) != len(mask) or any(value > 1 for value in mask):
            raise RuntimeError('Invalid original PE refinement pattern')
        # Recompute from the original evidence, never from our previous windows.
        if not flags & GENERATED:
            patterns.append(Pattern(reference, flags, raw, mask, fixups))
    suffix = content[source.at:]
    slots = set()
    for _ in range(source.number()):
        source.number()
        source.blob()
        slots.update(source.number() for _ in range(source.number()))
    for _ in range(source.number()):
        source.number()
        source.blob()
        source.blob()
    if source.at != len(content):
        raise RuntimeError('Unexpected schema-1 PE refinement source suffix')
    return prefix, patterns, suffix, required, slots, image_size


def retained_prefix(root: Path, content: bytes):
    """Extend consumption spans using the frozen, reviewed edition map.

    A newly discovered source consumer is not new instruction evidence. Its
    complete span must already have a mapping in the frozen Classic profile.
    Keep all original patterns unchanged; versions without matching evidence
    or an exact reviewed binding will still refuse the unresolved resource.
    """
    from native_pe_coordinates import collect_required_coordinates

    source = Reader(content)
    if source.take(8) != b'DFCNPE01' or source.number() != 1:
        raise RuntimeError('Retaining PE references requires a schema-1 seed')
    required = dict(struct.unpack('<II', source.take(8)) for _ in range(source.number()))
    editions = []
    for _ in range(source.number()):
        label, identity = source.blob(), source.take(40)
        ranges = [struct.unpack('<III', source.take(12)) for _ in range(source.number())]
        changes = source.take(source.number() * 6)
        editions.append((label, identity, ranges, changes))
    steam = next((edition for edition in editions if edition[0] == b'53.16 Steam'), None)
    classic = next((edition for edition in editions if edition[0] == b'53.16 Classic'), None)
    if steam is None or classic is None:
        raise RuntimeError('The frozen Steam/Classic 53.16 reference identities are required')

    def identity_ranges(spans):
        result = []
        for address, length in sorted(spans.items()):
            if not address or not length or address + length > struct.unpack_from('<I', steam[1], 36)[0]:
                raise RuntimeError(f'Invalid frozen PE reference span: 0x{address:x}+0x{length:x}')
            if result and address <= result[-1][1]:
                begin, end, native = result[-1]
                result[-1] = begin, max(end, address + length), native
            else:
                result.append((address, address + length, address))
        return result

    classic_starts = [begin for begin, _, _ in classic[2]]

    def covered(ranges, starts, address, length):
        index = bisect.bisect_right(starts, address) - 1
        return index >= 0 and address + length <= ranges[index][1]

    for address, length in collect_required_coordinates(root).items():
        if length > required.get(address, 0):
            if not covered(classic[2], classic_starts, address, length):
                raise RuntimeError(f'The frozen PE edition map cannot establish reference span '
                                   f'0x{address:x}+0x{length:x}; restore the fixed reference '
                                   'images before adding this binding')
        required[address] = max(required.get(address, 0), length)
    steam_ranges = identity_ranges(required)
    output = bytearray(b'DFCNPE01')
    output.extend(struct.pack('<II', 1, len(required)))
    for address, length in sorted(required.items()):
        output.extend(struct.pack('<II', address, length))
    output.extend(struct.pack('<I', len(editions)))
    for label, identity, ranges, changes in editions:
        if label == b'53.16 Steam':
            ranges = steam_ranges
        output.extend(struct.pack('<I', len(label)))
        output.extend(label)
        output.extend(identity)
        output.extend(struct.pack('<I', len(ranges)))
        for row in ranges:
            output.extend(struct.pack('<III', *row))
        output.extend(struct.pack('<I', len(changes) // 6))
        output.extend(changes)
    return bytes(output), required


def _decode(patterns, objdump, root):
    content = bytearray()
    bounds = []
    for index, pattern in enumerate(patterns):
        if not pattern.flags & 1 or not any(value == 0 for value in pattern.mask):
            continue
        bounds.append((len(content), len(content) + len(pattern.raw), index))
        content.extend(pattern.raw)
        content.extend(b'\xcc' * 16)
    digest = hashlib.sha256(content)
    digest.update(repr(bounds).encode('ascii'))
    cache = root / 'data/extracted/cache/native-build' / ('pe-refinement-code-1-' + digest.hexdigest() + '.pickle')
    if cache.is_file():
        return pickle.loads(cache.read_bytes())
    starts = [begin for begin, _, _ in bounds]
    decoded = {}
    with tempfile.TemporaryDirectory(prefix='dfcn-pe-reference-') as temporary:
        binary = Path(temporary) / 'reference-instructions.bin'
        binary.write_bytes(content)
        with tempfile.TemporaryFile() as errors:
            process = subprocess.Popen([str(objdump), '-D', '-w', '-z', '-b', 'binary',
                                        '-m', 'i386:x86-64', '-M', 'intel', str(binary)],
                                       stdout=subprocess.PIPE, stderr=errors,
                                       text=True, encoding='utf-8', errors='replace')
            try:
                for line in process.stdout:
                    match = _LINE.match(line)
                    if not match:
                        continue
                    address = int(match[1], 16)
                    index = bisect.bisect_right(starts, address) - 1
                    if index < 0:
                        continue
                    begin, end, pattern_index = bounds[index]
                    raw = bytes.fromhex(match[2])
                    if raw and address + len(raw) <= end:
                        decoded.setdefault(pattern_index, []).append((address - begin, raw, match[3]))
            finally:
                process.stdout.close()
            if process.wait():
                errors.seek(0)
                raise RuntimeError('Fixed native objdump could not decode reference evidence: ' +
                                   errors.read().decode('utf-8', errors='replace').strip())
    # A gap or undecoded byte never becomes part of a generated instruction window.
    decoded = {index: rows for index, rows in decoded.items()
               if rows and rows[0][0] == 0
               and rows[-1][0] + len(rows[-1][1]) == len(patterns[index].raw)
               and all(left[0] + len(left[1]) == right[0] for left, right in zip(rows, rows[1:]))}
    cache.parent.mkdir(parents=True, exist_ok=True)
    cache.write_bytes(pickle.dumps(decoded, protocol=5))
    return decoded


def _opcode(raw):
    at = _opcode_start(raw)
    return raw[at] if at < len(raw) else -1


def _invalid(row):
    return row[1] == b'\xcc' or '(bad)' in row[2] or row[2].lstrip().startswith('.')


def _return(row):
    return _opcode(row[1]) in (0xc2, 0xc3)


def _control(row):
    raw = row[1]
    if _branch_displacement(raw):
        return True
    at = _opcode_start(raw)
    return (at + 1 < len(raw) and raw[at] == 0xff and ((raw[at + 1] >> 3) & 7) in (2, 3, 4, 5))


def _exact_run(mask):
    best, start, run = 0, 0, 0
    for index, value in enumerate(mask):
        run = 0 if value else run + 1
        if run > best:
            best, start = run, index + 1 - run
    return start, best


def _window(pattern, rows, first, last, instruction_starts, image_size, *, leaf=False):
    begin = rows[first][0]
    end = rows[last - 1][0] + len(rows[last - 1][1])
    if any(_invalid(row) for row in rows[first:last]):
        return None
    mask = bytearray(pattern.mask[begin:end])
    fixups = []
    for at, width, next_at, target, kind in pattern.fixups:
        if at < end and begin < at + width:
            if at < begin or at + width > end or (next_at and not begin <= next_at <= end):
                return None
            fixups.append((at - begin, width, next_at - begin if next_at else 0, target, kind))
    for position, raw, _ in rows[first:last]:
        operand = _branch_displacement(raw)
        if not operand:
            continue
        offset, width = operand
        target = pattern.reference + position + len(raw) + int.from_bytes(raw[offset:offset + width], 'little', signed=True)
        local = position - begin + offset
        if any(at == local for at, *_ in fixups):
            continue
        # Previously internal relative edges were exact bytes. Preserve their
        # target identity explicitly; never wildcard an arbitrary immediate.
        if pattern.reference <= target < pattern.reference + len(pattern.raw):
            if target - pattern.reference not in instruction_starts or not 0 < target < image_size:
                return None
            mask[local:local + width] = b'\x01' * width
            fixups.append((local, width, position - begin + len(raw), target, 0x100))
    explained = bytearray(len(mask))
    for at, width, _, _, _ in fixups:
        explained[at:at + width] = b'\x01' * width
    if bytes(explained) != bytes(mask):
        return None
    raw = pattern.raw[begin:end]
    if not leaf:
        anchor, run = _exact_run(mask)
        if mask.count(0) < 16 or run < 8:
            return None
        # Demand unique fixed context inside the stored source routine too.
        key = raw[anchor:anchor + run]
        cursor, matches = 0, 0
        while True:
            hit = pattern.raw.find(key, cursor)
            if hit < 0:
                break
            cursor = hit + 1
            candidate = hit - anchor
            if candidate >= 0 and candidate + len(raw) <= len(pattern.raw) and all(
                    wildcard or pattern.raw[candidate + index] == value
                    for index, (value, wildcard) in enumerate(zip(raw, mask))):
                matches += 1
                if matches > 1:
                    return None
        if matches != 1:
            return None
    return Pattern(pattern.reference + begin, 1 | GENERATED | (HINT_ONLY if leaf else 0),
                   raw, bytes(mask), tuple(sorted(fixups)))


def _windows(pattern, rows, targets, target_starts, entries, image_size):
    starts = [row[0] for row in rows]
    instruction_starts = set(starts)
    selected = bisect.bisect_left(target_starts, pattern.reference)
    while selected < len(target_starts):
        address = target_starts[selected]
        selected += 1
        if address >= pattern.reference + len(pattern.raw):
            break
        length = targets[address]
        offset = address - pattern.reference
        first = bisect.bisect_right(starts, offset) - 1
        last = bisect.bisect_left(starts, offset + length)
        if first < 0 or last > len(rows) or last <= first or rows[last - 1][0] + len(rows[last - 1][1]) < offset + length:
            continue
        if any(_invalid(row) for row in rows[first:last]):
            continue
        lower, upper = first, last
        while lower > 0 and not _invalid(rows[lower - 1]) and not _return(rows[lower - 1]):
            lower -= 1
        while upper < len(rows) and not _invalid(rows[upper]) and not _return(rows[upper - 1]):
            upper += 1
        for budget in (32, 64, 96):
            for direction in ('right', 'balanced', 'left'):
                left, right = first, last
                while rows[right - 1][0] + len(rows[right - 1][1]) - rows[left][0] < budget:
                    can_left, can_right = left > lower, right < upper
                    if not can_left and not can_right:
                        break
                    grow_left = can_left and (not can_right or direction == 'left' or
                                             (direction == 'balanced' and first - left <= right - last))
                    if grow_left:
                        left -= 1
                    else:
                        right += 1
                complete_leaf = (pattern.reference + starts[left] in entries
                                 and _return(rows[right - 1])
                                 and rows[right - 1][0] + len(rows[right - 1][1]) - starts[left] <= 48
                                 and not any(_control(row) for row in rows[left:right]))
                value = _window(pattern, rows, left, right, instruction_starts, image_size,
                                leaf=complete_leaf)
                if value:
                    yield value


def _leaves(pattern, rows, entries, image_size):
    starts = [row[0] for row in rows]
    instruction_starts = set(starts)
    for entry in entries:
        first = bisect.bisect_left(starts, entry - pattern.reference)
        if first == len(rows) or starts[first] != entry - pattern.reference:
            continue
        for last in range(first, min(len(rows), first + 16)):
            row = rows[last]
            if _invalid(row) or _control(row) or row[0] + len(row[1]) - starts[first] > 48:
                break
            if _return(row):
                value = _window(pattern, rows, first, last + 1, instruction_starts, image_size, leaf=True)
                if value:
                    yield value
                break


def refine(root: Path, path: Path, objdump: Path) -> None:
    if not objdump.is_file():
        raise RuntimeError(f'Required fixed native disassembler is missing: {objdump}')
    original = path.read_bytes()
    prefix, patterns, suffix, required, slots, image_size = _read(original)
    prefix, required = retained_prefix(root, prefix)
    decoded = _decode(patterns, objdump, root)
    # A .text switch-RVA array is executable-section data, not instructions.
    # The existing all-address table records delimit it even inside a stored
    # whole routine; none of those bytes may nominate CALL targets or context.
    data_spans = sorted((value.reference, value.reference + len(value.raw))
                        for value in patterns if value.flags & 1
                        and not any(byte == 0 for byte in value.mask))
    for index, rows in decoded.items():
        reference = patterns[index].reference
        overlaps = [(begin - reference, end - reference) for begin, end in data_spans
                    if begin < reference + len(patterns[index].raw) and reference < end]
        if overlaps:
            decoded[index] = [(position, raw, '.reference-data' if any(
                begin < position + len(raw) and position < end for begin, end in overlaps) else assembly)
                for position, raw, assembly in rows]
    entries = set(slots)
    # Only original RTTI slots and decoded direct CALL destinations establish
    # callable starts. Tiny functions are never admitted by global byte search.
    for index, rows in decoded.items():
        for position, raw, assembly in rows:
            branch = _branch_displacement(raw)
            if branch and _opcode(raw) == 0xe8 and not _invalid((position, raw, assembly)):
                offset, width = branch
                target = patterns[index].reference + position + len(raw) + int.from_bytes(
                    raw[offset:offset + width], 'little', signed=True)
                if 0 < target < image_size:
                    entries.add(target)
    targets = dict(required)
    for entry in slots:
        targets.setdefault(entry, 1)
    for index in decoded:
        targets.setdefault(patterns[index].reference, 1)
    target_starts = sorted(targets)
    entry_starts = sorted(entries)
    additions = set()
    originals = set(patterns)
    for index, rows in decoded.items():
        pattern = patterns[index]
        additions.update(_windows(pattern, rows, targets, target_starts, entries, image_size))
        first = bisect.bisect_left(entry_starts, pattern.reference)
        last = bisect.bisect_left(entry_starts, pattern.reference + len(pattern.raw))
        additions.update(_leaves(pattern, rows, entry_starts[first:last], image_size))
    additions.difference_update(originals)
    ordered = sorted(additions, key=lambda value: (value.reference, value.flags, len(value.raw), value.raw, value.mask, value.fixups))
    if len(patterns) + len(ordered) > 100000:
        raise RuntimeError('Refined PE reference evidence exceeds the runtime pattern capacity')
    output = bytearray(prefix)
    output.extend(struct.pack('<I', len(patterns) + len(ordered)))
    for pattern in [*patterns, *ordered]:
        output.extend(struct.pack('<II', pattern.reference, pattern.flags))
        for blob in (pattern.raw, pattern.mask):
            output.extend(struct.pack('<I', len(blob)))
            output.extend(blob)
        output.extend(struct.pack('<I', len(pattern.fixups)))
        for fixup in pattern.fixups:
            output.extend(struct.pack('<IIIII', *fixup))
    output.extend(suffix)
    if output != original:
        descriptor, temporary = tempfile.mkstemp(prefix=path.name + '.refine-', suffix='.tmp', dir=path.parent)
        candidate = Path(temporary)
        try:
            with os.fdopen(descriptor, 'wb') as stream:
                stream.write(output)
            os.replace(candidate, path)
        finally:
            candidate.unlink(missing_ok=True)
    print(f'PE reference instruction evidence: {len(patterns)} original patterns, '
          f'{len(ordered)} exact windows and hinted complete RET methods; schema 1 preserved.', flush=True)
