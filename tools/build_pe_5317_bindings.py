"""Compose reviewed 53.17 supplements for the official Windows edition.

Only the normal build calls this module. The frozen feature coordinates still
name Steam 53.16; the reviewed Steam 53.17 supplement supplies the first leg.
Complete instruction shapes, paired address operands and MSVC RTTI establish
the second leg between the two exact 53.17 images. No address delta is inferred
from a neighboring function or from the edition's overall image size.
"""
from __future__ import annotations

import bisect
import difflib
import hashlib
from pathlib import Path
import re
import struct

from build_pe_image_bindings import PeImage, ROOT
from native_pe_seed_refinement import _read as read_reference_seed
from pe_instruction_match import match_instruction_regions


STEAM_DIGEST = '3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16'
CLASSIC_DIGEST = '4f833c9d92136e266e56202987dce40845a41990811413c7766fd526a08a0d8f'

# These owners supply edition-native signatures because 53.17 changed their
# register/stack layout. In particular, inline_original is already native when
# native_reference_calls consults the relocation map; it must not be rewritten.
NATIVE_SIGNATURES = (
    (0x8b9daf, 0x8b9dee), (0x8b9e3a, 0x8b9e5d),
    (0x8b9e99, 0x8b9ea4), (0x8b9ec0, 0x8b9ec5),
)


def _supplement(path):
    ranges, changes = Path(path).read_text(encoding='utf-8').split('inline constexpr Byte', 1)
    pattern = r'\{0x([0-9a-f]+), 0x([0-9a-f]+), 0x([0-9a-f]+)\}'
    read = lambda text: [tuple(int(value, 16) for value in row)
                         for row in re.findall(pattern, text)]
    return read(ranges), {address: (old, new) for address, old, new in read(changes)}


def _reference_bytes(ranges):
    """Read original 53.16 operands, never infer them from a later image.

    The Steam supplement is an address supplement, not an exhaustive byte
    diff. In particular its calls can rely on the scanner to supply changed
    displacements. Reversing only that supplement leaves 53.17 displacements
    mislabeled as 53.16 and conflicts with the scanner's frozen patterns.
    """
    _, patterns, _, _, _, _ = read_reference_seed(
        (ROOT / 'data/runtime/native-addresses/pe-seed.bin').read_bytes())
    required = sorted({address for begin, end, _ in ranges
                       for address in range(begin, end)})
    original = {}

    def retain(begin, raw):
        first = bisect.bisect_left(required, begin)
        last = bisect.bisect_left(required, begin + len(raw))
        for address in required[first:last]:
            value = raw[address - begin]
            previous = original.setdefault(address, value)
            if previous != value:
                raise RuntimeError(f'Conflicting frozen reference bytes at {address:#x}')

    # read_reference_seed deliberately omits derived instruction windows.
    # Every retained byte comes from the original schema-1 reference patterns.
    for pattern in patterns:
        retain(pattern.reference, pattern.raw)

    # This entry owner was added after the frozen seed. Its complete reference
    # prologue is owned by the map hook, has no address operands, and must come
    # from that consumer rather than either installed 53.17 executable.
    source = (ROOT / 'src/native_map_layer_render.inc').read_text(encoding='utf-8')
    signature = re.search(
        r'install\(g_native_map_clear_hook,\s*(0x[0-9a-f]+),\s*\{([^}]+)\}', source)
    if not signature:
        raise RuntimeError('Cannot read the map-clear reference entry signature')
    retain(int(signature[1], 16), bytes(int(value, 16)
        for value in re.findall(r'0x([0-9a-f]+)', signature[2])))
    return original


def _merge(ranges):
    merged = []
    for begin, end, native in sorted(ranges):
        if merged and begin <= merged[-1][1] and native - begin == merged[-1][2] - merged[-1][0]:
            previous = merged[-1]
            merged[-1] = previous[0], max(previous[1], end), previous[2]
        elif merged and begin < merged[-1][1]:
            raise RuntimeError(f'Conflicting 53.17 instruction identities at {begin:#x}')
        else:
            merged.append((begin, end, native))
    return merged


def _rtti_target(image, type_name):
    """Find the primary vtable through the exact type and complete locator."""
    descriptors = []
    encoded = type_name.encode('ascii') + b'\0'
    for begin, _, raw, size, flags in image.sections:
        if flags & 0x20000000:
            continue
        region = image.data[raw:raw + size]
        offset = region.find(encoded)
        while offset >= 0:
            if offset >= 16:
                descriptors.append(begin + offset - 16)
            offset = region.find(encoded, offset + 1)
    locators = []
    for descriptor in descriptors:
        needle = struct.pack('<IIII', 1, 0, 0, descriptor)
        for begin, _, raw, size, flags in image.sections:
            if flags & 0xa0000000:
                continue
            region = image.data[raw:raw + size]
            offset = region.find(needle)
            while offset >= 0:
                if offset + 24 <= size and struct.unpack_from('<I', region, offset + 20)[0] == begin + offset:
                    locators.append(begin + offset)
                offset = region.find(needle, offset + 1)
    targets = set()
    for locator in locators:
        needle = struct.pack('<Q', image.base + locator)
        for begin, _, raw, size, flags in image.sections:
            if flags & 0xa0000000:
                continue
            region = image.data[raw:raw + size]
            offset = region.find(needle)
            while offset >= 0:
                target = begin + offset + 8
                if target % 8 == 0 and offset + 16 <= size:
                    entry = struct.unpack_from('<Q', region, offset + 8)[0] - image.base
                    section = image.section(entry)
                    if section and section[4] & 0x20000000 and image.vtable_type(target) == type_name:
                        targets.add(target)
                offset = region.find(needle, offset + 1)
    if len(targets) != 1:
        raise RuntimeError(f'Classic 53.17 RTTI identity {type_name!r} has {len(targets)} primary vtables')
    return targets.pop()


def generate(steam_path, classic_path, objdump, output):
    steam, classic = PeImage(Path(steam_path)), PeImage(Path(classic_path))
    for image, digest in ((steam, STEAM_DIGEST), (classic, CLASSIC_DIGEST)):
        if hashlib.sha256(image.data).hexdigest() != digest:
            raise RuntimeError(f'The 53.17 supplement requires its exact reviewed PE image: {image.path}')
    reviewed, _ = _supplement(ROOT / 'src/native_pe_5317_bindings.inc')
    reference_bytes = _reference_bytes(reviewed)
    required = {native: end - begin for begin, end, native in reviewed}
    ordered = difflib.SequenceMatcher(None,
        [end - begin for begin, end in steam.functions],
        [end - begin for begin, end in classic.functions], autojunk=False)
    candidates = [(steam.functions[block.a + index], classic.functions[block.b + index])
                  for block in ordered.get_matching_blocks() for index in range(block.size)]
    steam.disassemble(objdump, sorted(required))
    classic.disassemble(objdump, sorted({target for (begin, end), (target, _) in candidates
        if any(begin <= address < end for address in required)}))

    ranges, refs, paired = [], {}, {}

    def bind(begin, end, native):
        ranges.append((begin, end, native))
        paired[begin] = native
        for left, right in zip(steam.refs.get(begin, ()), classic.refs.get(native, ())):
            offset, target, kind = left
            other_offset, other_target, other_kind = right
            if offset == other_offset and kind == other_kind:
                refs.setdefault(target, set()).add(other_target)

    for (begin, end), (native, _) in candidates:
        if begin in steam.shapes and steam.shapes[begin] == classic.shapes.get(native):
            bind(begin, end, native)
    source_shapes, target_shapes = {}, {}
    for image, shapes in ((steam, source_shapes), (classic, target_shapes)):
        for begin, shape in image.shapes.items():
            shapes.setdefault(shape, []).append(begin)
    for shape, starts in source_shapes.items():
        targets = target_shapes.get(shape, ())
        if len(starts) == len(targets) == 1 and starts[0] not in paired:
            begin, native = starts[0], targets[0]
            bind(begin, steam.functions[bisect.bisect_left(steam.starts, begin)][1], native)

    incomplete = [(left, right) for left, right in candidates if left[0] not in paired
                  and any(left[0] <= address < left[1] for address in required)]
    blocks, _ = match_instruction_regions(steam, classic, objdump, incomplete, required)
    ranges.extend(blocks)
    source_refs = {begin + offset: (target, kind) for begin, values in steam.refs.items()
                   for offset, target, kind in values}
    target_refs = {begin + offset: (target, kind) for begin, values in classic.refs.items()
                   for offset, target, kind in values}
    sites = sorted(source_refs)
    for begin, end, native in blocks:
        index = bisect.bisect_left(sites, begin)
        while index < len(sites) and sites[index] < end:
            site = sites[index]
            other = target_refs.get(native + site - begin)
            target, kind = source_refs[site]
            if other and other[1] == kind:
                refs.setdefault(target, set()).add(other[0])
            index += 1
    ranges = _merge(ranges)
    starts = [begin for begin, _, _ in ranges]

    def locate(address, length=1):
        index = bisect.bisect_right(starts, address) - 1
        if index >= 0 and address + length <= ranges[index][1]:
            return ranges[index][2] + address - ranges[index][0]
        return None

    output_ranges, changes = [], {}
    for reference, end, source in reviewed:
        length = end - reference
        section = steam.section(source)
        is_code = bool(section and section[4] & 0x20000000)
        native = locate(source, length) if is_code else None
        table_name = None
        if not is_code:
            try:
                table_name = steam.vtable_type(source)
            except (ValueError, struct.error, UnicodeDecodeError, TypeError):
                pass
            if table_name:
                native = _rtti_target(classic, table_name)
                # RTTI owns the table; every consumed slot must still be code.
                for offset in range(0, length - 7, 8):
                    for image, address in ((steam, source), (classic, native)):
                        entry = struct.unpack('<Q', image.read(address + offset, 8))[0] - image.base
                        target_section = image.section(entry)
                        if not target_section or not target_section[4] & 0x20000000:
                            raise RuntimeError(f'Changed 53.17 virtual slot at {reference + offset:#x}')
            elif len(refs.get(source, ())) == 1:
                native = next(iter(refs[source]))
        if native is None and is_code and length >= 8 and length % 4 == 0 and len(refs.get(source, ())) == 1:
            # RVA switch tables reside in .text. Each destination must already
            # have an instruction identity, in addition to the table reference.
            target = next(iter(refs[source]))
            left = struct.unpack('<' + 'I' * (length // 4), steam.read(source, length))
            right = struct.unpack('<' + 'I' * (length // 4), classic.read(target, length))
            if all(locate(old) == new for old, new in zip(left, right)):
                native = target
        if native is None:
            raise RuntimeError(f'Cannot establish Classic 53.17 supplement {reference:#x}+{length:#x} '
                               f'from Steam coordinate {source:#x}')
        output_ranges.append((reference, end, native))
        if not is_code or any(begin <= reference < stop for begin, stop in NATIVE_SIGNATURES):
            continue
        absent = [address for address in range(reference, end) if address not in reference_bytes]
        if absent:
            # One-byte resources are captured return identities, with no
            # expected opcode buffer to rewrite. Any consumed instruction
            # span must retain an actual reference signature before admission.
            if length == 1:
                continue
            raise RuntimeError(f'Missing frozen reference bytes at {absent[0]:#x} '
                               f'for Classic 53.17 span {reference:#x}+{length:#x}')
        original = bytes(reference_bytes[address] for address in range(reference, end))
        for offset, (old, new) in enumerate(zip(original, classic.read(native, length))):
            if old != new:
                changes[reference + offset] = old, new

    lines = [
        '// Generated only by the normal build from the exact Windows 53.17 editions.',
        '// Coordinates compose the reviewed Steam 53.16 -> Steam 53.17 supplement',
        '// with complete instruction identities, paired operands and MSVC RTTI.',
        '// Operand reference bytes come from the frozen 53.16 seed and owning entry signatures.',
        f'// Steam SHA256: {STEAM_DIGEST}', f'// Classic SHA256: {CLASSIC_DIGEST}',
        'inline constexpr Range kClassic5317Ranges[] = {',
    ]
    lines.extend(f'    {{0x{begin:x}, 0x{end:x}, 0x{native:x}}},' for begin, end, native in output_ranges)
    lines.extend(['};', 'inline constexpr Byte kClassic5317Bytes[] = {'])
    lines.extend(f'    {{0x{address:x}, 0x{old:02x}, 0x{new:02x}}},'
                 for address, (old, new) in sorted(changes.items()))
    lines.extend(['};', ''])
    Path(output).write_text('\n'.join(lines), encoding='utf-8')
    print(f'Generated Classic 53.17 supplements: {len(output_ranges)} ranges; {len(changes)} operand bytes.', flush=True)
