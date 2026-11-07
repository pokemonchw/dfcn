"""Describe a native callable filter without carrying its private stack ABI.

The normal seed build recovers the callable identity from the exact reviewed
Classic image. Runtime discovery must independently prove the target invoker,
captured widget, named query member and all comparison call contracts.
"""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import re
import struct

from build_history_layouts import semantic_id
from build_pe_image_bindings import PeImage
from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source
from native_reference_semantics import _Coordinates


def _contracts(root):
    result = []
    for path in sorted((root / 'src').iterdir()):
        if path.suffix not in ('.inc', '.h', '.cpp'):
            continue
        tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8')))
        pairs = _pairs(tokens)
        for at, token in enumerate(tokens[:-1]):
            if token != 'native_pe_callable_search' or tokens[at + 1] != '(':
                continue
            args = _parts(tokens, pairs, at + 2, pairs[at + 1])
            if len(args) != 7 or args[0][1] != args[0][0] + 1:
                continue
            name = tokens[args[0][0]]
            if not name.startswith('"'):
                continue
            numbers = [_number(tokens[first:last]) for first, last in args[1:]]
            if any(not value for value in numbers):
                raise RuntimeError('Callable search needs literal reference contracts')
            result.append((json.loads(name), *numbers))
    if len({entry[0] for entry in result}) != len(result):
        raise RuntimeError('Duplicated callable-search identity')
    return result


def _tables_containing(image, entry):
    """A function pointer is admitted only through a valid primary RTTI COL."""
    needle = struct.pack('<Q', image.base + entry)
    result = []
    for rva, _, raw, length, flags in image.sections:
        if flags & 0x20000000:
            continue
        data = image.data[raw:raw + length]
        at = -1
        while (at := data.find(needle, at + 1)) >= 0:
            pointer = rva + at
            if pointer % 8:
                continue
            # std::_Func_base has a bounded six-method interface. We do not
            # assume which slot invokes the callable: its machine body proves it.
            for slot in range(6):
                table = pointer - slot * 8
                try:
                    name = image.vtable_type(table)
                    if name.startswith('.?AV?$_Func_impl_no_alloc@'):
                        result.append((table, name))
                except (ValueError, IndexError, struct.error, UnicodeDecodeError):
                    pass
    return sorted(set(result))


def _invokers(image, predicate):
    result = []
    # Win64's aggregate-by-reference adapter copies exactly sixteen bytes and
    # passes a pointer to that copy. The capture offset is read, not inferred
    # from the spelling of the std::function implementation class.
    form = re.compile(rb'\x48\x83\xec(.)\x0f\x10\x02\x48\x83\xc1(.)'
                      rb'\x48\x8d\x54\x24(.)\x0f\x29\x44\x24(.)'
                      rb'\xe8(.{4})\x48\x83\xc4(.)\xc3', re.S)
    for rva, _, raw, length, flags in image.sections:
        if not flags & 0x20000000:
            continue
        for match in form.finditer(image.data, raw, raw + length):
            entry = rva + match.start() - raw
            allocation, capture, local, copied, displacement, restored = match.groups()
            target = entry + 26 + struct.unpack('<i', displacement)[0]
            if target != predicate or allocation != restored or local != copied or \
                    local[0] < 32 or local[0] + 16 > allocation[0] or capture[0] != 8:
                continue
            if not any(begin == entry and end == entry + 31 for begin, end in image.functions):
                continue
            result.extend((entry, capture[0], table, name)
                          for table, name in _tables_containing(image, entry))
    return result


def build_callable_search_evidence(root, known, patterns, metadata):
    declarations = _contracts(root)
    content = bytearray(b'DFCNCS01' + struct.pack('<II', 1, len(declarations)))
    if not declarations:
        return bytes(content)
    configured = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig')).get('classic')
    path = Path(configured or '')
    if not path.is_absolute():
        path = root / path
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    profiles = [profile for profile in known if profile[1] == identity and profile[0].endswith(b' Classic')]
    if len(profiles) != 1:
        raise RuntimeError('Callable source requires the exact reviewed Classic identity')
    profile = profiles[0]
    forward = _Coordinates(struct.iter_unpack('<III', profile[2]))
    changes = {address: native for address, reference, native in struct.iter_unpack('<IBB', profile[3])}
    wholes = [pattern for pattern in patterns if pattern[1] & 2 and pattern[0] == pattern[2]]

    def reviewed_body(reference):
        matches = [pattern for pattern in wholes if pattern[0] <= reference < pattern[0] + len(pattern[3])]
        if len(matches) != 1:
            raise RuntimeError(f'Callable source {reference:#x} has no unique complete body')
        pattern = matches[0]
        actual = forward.unique(pattern[0], len(pattern[3]))
        expected = bytes(changes.get(pattern[0] + at, value) for at, value in enumerate(pattern[3]))
        if actual is None or image.read(actual, len(expected)) != expected:
            raise RuntimeError(f'Callable source {reference:#x} lacks reviewed complete byte evidence')
        return actual

    for name, owner, query_call, fold, find, item, unit in sorted(declarations):
        predicate = reviewed_body(owner)
        query_owner = reviewed_body(query_call)
        invokers = _invokers(image, predicate)
        queries = _tables_containing(image, query_owner)
        if len(invokers) != 1 or len(queries) != 1:
            raise RuntimeError(f'Callable {name} has no unique RTTI invoker/query implementation')
        _, capture, _, predicate_name = invokers[0]
        query_name = queries[0][1]
        variant = '@_NV?$variant@PEAVunitst@@PEAVitemst@@@std@@@std@@'
        if not predicate_name.endswith(variant) or not query_name.endswith('@XPEAVtextbox@3@@std@@'):
            raise RuntimeError(f'Unsupported callable search source argument declaration: {name}')
        types = metadata['types']
        if isinstance(types, dict):
            types = types.values()
        widget = next((entry for entry in types if entry['name'] == 'widget_unit_list'), None)
        field = next((entry for entry in widget['fields'] if entry['name'] == 'filter_str'), None) if widget else None
        if not field or field['size'] != 32:
            raise RuntimeError('Callable search lacks the named native query string declaration')
        content.extend(struct.pack('<11I', semantic_id(name), owner, query_call, fold, find,
                                   item, unit, semantic_id('widget_unit_list'), semantic_id('filter_str'),
                                   field.get('offset', field.get('reference')), capture))
        for text in (predicate_name, query_name):
            encoded = text.encode('ascii')
            content.extend(struct.pack('<I', len(encoded)) + encoded)
    print(f'Prepared {len(declarations)} typed callable-search contracts.', flush=True)
    return bytes(content)
