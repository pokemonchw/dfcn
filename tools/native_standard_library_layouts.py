"""Measure opaque MSVC library objects from each image's deleting destructor.

Used only by the normal ABI build. RTTI names identify the actual library type;
its sized-delete argument supplies the extent. Host STL layouts are irrelevant.
"""
from __future__ import annotations

import bisect
import hashlib
import json
from pathlib import Path
import pickle
import re
import struct

from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates
from pe_instruction_match import _branch_displacement, _memory_displacement, _region_rows


def _occurrences(content, needle):
    at = content.find(needle)
    while at >= 0:
        yield at
        at = content.find(needle, at + 1)


def _tables(image, name):
    descriptors = set()
    for begin, _, raw, size, _ in image.sections:
        for offset in _occurrences(image.data[raw:raw + size], name.encode('ascii') + b'\0'):
            if offset >= 16:
                descriptors.add(begin + offset - 16)
    locators = {}
    readonly = [section for section in image.sections if not section[4] & (0x20000000 | 0x80000000)]
    for begin, _, raw, size, _ in readonly:
        content = image.data[raw:raw + size]
        for descriptor in descriptors:
            for offset in _occurrences(content, struct.pack('<I', descriptor)):
                at = offset - 12
                if at < 0 or at + 24 > len(content):
                    continue
                signature, adjustment, constructor, _, hierarchy, identity = struct.unpack_from('<6I', content, at)
                if signature == 1 and identity == begin + at and image.section(hierarchy) and adjustment < 65536:
                    locators[identity] = adjustment
    for begin, _, raw, size, _ in readonly:
        content = image.data[raw:raw + size]
        for locator, adjustment in locators.items():
            for offset in _occurrences(content, struct.pack('<Q', image.base + locator)):
                if (begin + offset) % 8 or offset + 16 > len(content):
                    continue
                function = struct.unpack_from('<Q', content, offset + 8)[0] - image.base
                section = image.section(function)
                if section and section[4] & 0x20000000:
                    yield begin + offset + 8, adjustment, function


def _free_thunk(image, address):
    imports = {rva for (library, symbol), rva in image.imports.items()
               if symbol == 'free' and (library.startswith('api-ms-win-crt-') or library in ('ucrtbase.dll', 'msvcrt.dll'))}
    visited = set()
    while address not in visited and len(visited) < 8:
        visited.add(address)
        section = image.section(address)
        if not section or not section[4] & 0x20000000:
            return False
        raw = image.read(address, 6)
        if raw[0] == 0xe9:
            address += 5 + int.from_bytes(raw[1:5], 'little', signed=True)
        elif raw[:2] == b'\xff\x25':
            return address + 6 + int.from_bytes(raw[2:6], 'little', signed=True) in imports
        else:
            return False
    return False


def _wrapper(image, address):
    visited = set()
    while address not in visited and len(visited) < 8:
        visited.add(address)
        raw = image.read(address, 12)
        if raw[0] == 0xe9:
            address += 5 + int.from_bytes(raw[1:5], 'little', signed=True)
        elif raw[:8] == b'\x48\x63\x41\xfc\x48\x2b\xc8\xe9':
            # The compiler's vtordisp-adjusting thunk preserves EDX flags.
            address += 12 + int.from_bytes(raw[8:12], 'little', signed=True)
        else:
            return address
    return None


def _shape_signature(image, rows, begin, end):
    # This is the persisted PeImage.disassemble v3 shape contract. It retains
    # all instruction lengths, registers and non-address immediates, including
    # sizeof and the complete-object adjustment in a deleting destructor.
    digest, refs = hashlib.sha256(), []
    cursor = begin
    for address, raw, assembly in rows:
        if address != cursor:
            return None, ()
        cursor += len(raw)
        rip = re.search(r'\[rip[+-]0x[0-9a-f]+\].*#\s*(?:0x)?([0-9a-f]+)', assembly)
        if rip:
            refs.append((address - begin, int(rip[1], 16) - image.base, 'data'))
        assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip()
        assembly = re.sub(r'\[rip[+-]0x[0-9a-f]+\]', '[rip+address]', assembly)
        branch = re.match(r'((?:bnd\s+)?(?:call|j\w+)\s+)(?:0x)?([0-9a-f]+)$', assembly)
        if branch:
            target = int(branch[2], 16) - image.base
            refs.append((address - begin, target, 'code'))
            operand = f'local:{target - begin:x}' if begin <= target < end else 'address'
            assembly = branch[1] + operand
        def table(match):
            target = int(match[1], 16)
            if target >= 0x100000 and image.section(target):
                refs.append((address - begin, target, 'table'))
                return '+image_address]'
            return match[0]
        assembly = re.sub(r'\+0x([0-9a-f]+)\]', table, assembly)
        digest.update(f'{address - begin}:{len(raw)}:{assembly}\n'.encode())
    return (digest.digest(), refs) if cursor == end else (None, ())


def _extent(image, objdump, adjustment, function, review=None):
    owner = _wrapper(image, function)
    index = bisect.bisect_left(image.starts, owner) if owner else len(image.starts)
    if index >= len(image.starts) or image.starts[index] != owner:
        return None
    begin, end = image.functions[index]
    if end - begin > 4096:
        return None
    rows = _region_rows(image, objdump, begin, end)
    parsed = []
    for address, raw, assembly in rows:
        assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip().lower()
        assembly = re.sub(r'^(?:rex(?:\.[wrxb]+)?\s+)+', '', assembly)
        mnemonic, _, arguments = assembly.partition(' ')
        parsed.append((address, raw, mnemonic, [part.strip() for part in arguments.split(',')]))
    complete = set()
    for _, _, mnemonic, args in parsed:
        if len(args) != 2:
            continue
        if not adjustment and mnemonic == 'mov' and args[1] == 'rcx':
            complete.add(args[0])
        if mnemonic == 'lea' and args[1] == f'[rcx-0x{adjustment:x}]':
            complete.add(args[0])
    returned = {args[1] for _, _, mnemonic, args in parsed if mnemonic == 'mov' and len(args) == 2 and args[0] == 'rax'}
    complete &= returned
    values = []
    for index in range(4, len(parsed)):
        call_at, call, operation, _ = parsed[index]
        if operation != 'call' or len(call) != 5 or call[0] != 0xe8:
            continue
        size_at, encoded, size_operation, _ = parsed[index - 2]
        _, _, this_operation, this_args = parsed[index - 1]
        jump_at, jump, jump_operation, _ = parsed[index - 3]
        _, _, test_operation, test_args = parsed[index - 4]
        branch = _branch_displacement(jump)
        if (size_operation != 'mov' or len(encoded) != 5 or encoded[0] != 0xba or this_operation != 'mov' or
                len(this_args) != 2 or this_args[0] != 'rcx' or this_args[1] not in complete or
                jump_operation not in ('je', 'jz') or not branch or test_operation != 'test' or
                len(test_args) != 2 or test_args[1] not in ('0x1', '1')):
            continue
        at, width = branch
        if jump_at + len(jump) + int.from_bytes(jump[at:at + width], 'little', signed=True) != call_at + 5:
            continue
        deletion = call_at + 5 + int.from_bytes(call[1:], 'little', signed=True)
        if not _free_thunk(image, deletion):
            continue
        extent = int.from_bytes(encoded[1:], 'little')
        reference_owner = None
        if review:
            inverse, changes, change_starts, source_shapes, source_refs = review
            reference_owner = inverse.unique(begin, end - begin)
            if reference_owner is None:
                continue
            shape, references = _shape_signature(image, rows, begin, end)
            original_refs = source_refs.get(reference_owner)
            if shape is not None and shape == source_shapes.get(reference_owner) and original_refs is not None:
                # Old reviewed ranges cover many complete functions whose
                # bytes were not individually needed by the old consumer set.
                # Their CALL patches were consequently not serialized. The
                # exact source-image cache still retains every relocation and
                # the complete shape, so prove each target instead of assuming
                # that an absent byte patch means an unchanged displacement.
                if len(original_refs) != len(references):
                    continue
                consistent = True
                for (offset, original, kind), (actual_offset, actual, actual_kind) in zip(original_refs, references):
                    translated = reference_owner + actual - begin if begin <= actual < end else inverse.unique(actual)
                    if offset != actual_offset or kind != actual_kind or translated != original:
                        consistent = False
                        break
                if consistent and (call_at - begin, inverse.unique(deletion), 'code') in original_refs:
                    if 8 <= extent <= 65536 and extent % 8 == 0:
                        values.append((extent, reference_owner))
                    continue
            recovered = bytearray(image.read(begin, end - begin))
            allowed = set(range(size_at - begin + 1, size_at - begin + 5))
            for address, raw, mnemonic, args in parsed:
                relative = _branch_displacement(raw)
                if relative and mnemonic == 'call':
                    at, width = relative
                    allowed.update(range(address - begin + at, address - begin + at + width))
                memory = _memory_displacement(raw) if any('[rip' in arg for arg in args) else None
                if memory and memory[1]:
                    allowed.update(range(address - begin + memory[0], address - begin + memory[0] + 4))
            valid = True
            at = bisect.bisect_left(change_starts, reference_owner)
            while at < len(changes) and changes[at][0] < reference_owner + len(recovered):
                address, original, actual = changes[at]
                offset = address - reference_owner
                if recovered[offset] != actual:
                    raise RuntimeError('Reviewed MSVC library byte differs at ' + hex(address))
                if offset not in allowed:
                    valid = False
                    break
                recovered[offset] = original
                at += 1
            if not valid:
                continue
            source_delete = reference_owner + call_at - begin + 5 + int.from_bytes(
                recovered[call_at - begin + 1:call_at - begin + 5], 'little', signed=True)
            if inverse.unique(deletion) != source_delete:
                continue
            extent = int.from_bytes(recovered[size_at - begin + 1:size_at - begin + 5], 'little')
        if 8 <= extent <= 65536 and extent % 8 == 0:
            values.append((extent, reference_owner or owner))
    return values[0] if len(values) == 1 else None


def measured_layouts(image, objdump, review=None):
    if not objdump:
        return {}
    result = {}
    names = {'stl-fstream': '.?AV?$basic_fstream@DU?$char_traits@D@std@@@std@@'}
    for primitive, name in names.items():
        values = set()
        for table, adjustment, function in _tables(image, name):
            value = _extent(image, objdump, adjustment, function, review)
            if value:
                values.add(value)
        extents = {value[0] for value in values}
        if len(extents) > 1:
            raise RuntimeError('Conflicting image-owned MSVC extent: ' + primitive)
        if len(extents) == 1:
            extent = next(iter(extents))
            result[primitive] = {'size': extent, 'alignment': 8,
                                 'destructors': sorted(value[1] for value in values)}
            print(f'Measured MSVC object {primitive}: {extent:#x} bytes from ' +
                  ', '.join(hex(value[1]) for value in sorted(values)), flush=True)
        else:
            print(f'MSVC object {primitive} has no complete admitted destructor extent' +
                  (' in the reviewed canonical mapping.' if review else ' in this image.'), flush=True)
    return result


def canonical_layouts(root, objdump):
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    configured = config.get('classic')
    if not configured:
        return {}
    path = Path(configured)
    if not path.is_absolute():
        path = root / path
    if not path.is_file():
        return {}
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    seed = root / 'data/runtime/native-addresses/pe-seed.bin'
    if not seed.is_file():
        return {}
    with seed.open('rb') as stream:
        def take(size):
            value = stream.read(size)
            if len(value) != size:
                raise RuntimeError('Truncated canonical MSVC reference evidence')
            return value
        def number():
            return struct.unpack('<I', take(4))[0]
        if take(8) != b'DFCNPE01' or number() not in (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13):
            raise RuntimeError('Unsupported canonical MSVC reference evidence')
        stream.seek(number() * 8, 1)
        editions = []
        for _ in range(number()):
            label, actual = take(number()), take(40)
            ranges, changes = take(number() * 12), take(number() * 6)
            editions.append((label.decode('utf-8'), actual, ranges, changes))
        sources = [actual for label, actual, _, _ in editions if label.endswith(' Steam')]
        source_shapes, source_refs = {}, {}
        if len(sources) == 1:
            cache = root / 'data/extracted/cache/native-build' / ('pe-3-' + sources[0][:32].hex() + '.pickle')
            if cache.is_file():
                source_shapes, source_refs, _ = pickle.loads(cache.read_bytes())
        for label, actual, ranges, changes in editions:
            if actual != identity or not label.endswith(' Classic'):
                continue
            inverse = _Coordinates((native, native + end - begin, begin)
                                   for begin, end, native in struct.iter_unpack('<III', ranges))
            changes = sorted(struct.iter_unpack('<IBB', changes))
            return measured_layouts(image, objdump,
                (inverse, changes, [entry[0] for entry in changes], source_shapes, source_refs))
    return {}
