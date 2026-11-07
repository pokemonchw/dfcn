"""Source-owned tooltip contracts for the normal address catalog build."""
from __future__ import annotations

import json
import struct
import hashlib
from pathlib import Path

from build_history_layouts import semantic_id
from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source, _file_coordinates
from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates


def build_workshop_recipe_evidence(root, patterns, metadata, tables, known):
    path = root / 'src/native_workshop_recipe_profile.inc'
    tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8')))
    pairs = _pairs(tokens)
    declarations = []
    for at, token in enumerate(tokens[:-1]):
        if token != 'native_pe_workshop_recipe' or tokens[at + 1] != '(':
            continue
        parts = _parts(tokens, pairs, at + 2, pairs[at + 1])
        if len(parts) != 8:
            raise RuntimeError('Recipe declaration needs a named method and five numeric contracts')
        names = [json.loads(tokens[first]) for first, last in parts[:3]
                 if last == first + 1 and tokens[first].startswith('"')]
        values = [_number(tokens[first:last]) for first, last in parts[3:]]
        if len(names) != 3 or any(not value for value in values):
            raise RuntimeError('Recipe declaration must use literal source identities')
        declarations.append((*names, *values))
    required = {}
    _file_coordinates(path.name, tokens, required)
    configured = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig')).get('classic')
    path = Path(configured) if configured else None
    if path and not path.is_absolute():
        path = root / path
    if declarations and (not path or not path.is_file()):
        raise RuntimeError('Recipe import semantics need the reviewed reference image')
    image = PeImage(path) if declarations else None
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size) if image else b''
    profiles = [entry for entry in known if entry[0].endswith(b'Classic') and entry[1] == identity]
    if declarations and len(profiles) != 1:
        raise RuntimeError('Recipe reference import image identity differs')
    coordinates = _Coordinates(list(struct.iter_unpack('<III', profiles[0][2]))) if declarations else None
    content = bytearray(b'DFCNWR01' + struct.pack('<II', 1, len(declarations)))

    def number(value):
        content.extend(struct.pack('<I', value))

    def blob(value):
        number(len(value))
        content.extend(value)

    for name, type_name, method_name, owner, paragraph, clear, compare, width in declarations:
        thunk = coordinates.unique(compare, 6)
        code = image.read(thunk, 6) if thunk else b''
        imported = image.imports.get(('vcruntime140.dll', 'memcmp'))
        if len(code) != 6 or code[:2] != b'\xff\x25' or not imported or thunk + 6 + struct.unpack_from('<i', code, 2)[0] != imported:
            raise RuntimeError(f'Recipe comparison {compare:#x} is not the reviewed memcmp import thunk')
        types = [item for item in metadata['types'] if item['name'] == type_name]
        if len(types) != 1:
            raise RuntimeError(f'Recipe semantic type is unavailable: {type_name}')
        source = types[0]
        methods = [item for item in source['methods'] if item['name'] == method_name]
        if len(methods) != 1 or methods[0]['signature'] != 'void(pointer<curses_text_boxst>)':
            raise RuntimeError('Recipe formatter has no unambiguous named box argument contract')
        method = methods[0]
        candidates = [(reference, rtti, slots) for reference, rtti, slots in tables
                      if rtti.decode('ascii') == f'.?AV{type_name}@@' and
                      len(slots) >= method['slot'] // 2 + 4 and
                      struct.unpack_from('<I', slots, method['slot'] // 2)[0] == owner]
        bodies = [item for item in patterns if item[0] == owner and item[1] & 2]
        if len(candidates) != 1 or len(bodies) != 1:
            raise RuntimeError(f'Recipe method 0x{owner:x} lacks complete source RTTI/function evidence')
        table, rtti, _ = candidates[0]
        _, _, _, raw, _, fixups = bodies[0]
        spans = sorted((address, address + length) for address, length in required.items()
                       if owner <= address and address + length <= owner + len(raw))
        merged = []
        for begin, end in spans:
            if merged and begin <= merged[-1][1]:
                merged[-1] = (merged[-1][0], max(end, merged[-1][1]))
            else:
                merged.append((begin, end))
        calls = sorted(owner + offset - 1 for offset, length, following, target, kind in fixups
                       if target == paragraph and length == 4 and offset and raw[offset - 1] == 0xe8
                       and any(begin <= owner + offset - 1 and owner + offset + 4 <= end
                               for begin, end in merged))
        if not merged or not calls or not 1 <= width <= 4096:
            raise RuntimeError('Recipe source hooks do not own complete paragraph/inline spans')
        for value in (semantic_id(name), owner, source['id'], method['id'], method['slot'],
                      method['parameter_shape'], table, paragraph, clear, compare, width):
            number(value)
        blob(rtti)
        number(len(merged))
        for begin, end in merged:
            number(begin)
            number(end)
        number(len(calls))
        for call in calls:
            number(call)
    print(f'Prepared {len(declarations)} named workshop-tooltip contracts.', flush=True)
    return bytes(content)
