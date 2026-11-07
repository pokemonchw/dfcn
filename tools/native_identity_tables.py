"""Recover required identity-only RTTI roots during the normal seed build."""
from __future__ import annotations

import hashlib
import json
from pathlib import Path
import struct

from build_pe_image_bindings import PeImage
from native_reference_semantics import _Coordinates


def augment_identity_tables(root, known, patterns, tables, required, identities):
    if not identities:
        return patterns, tables
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    path = Path(config['classic'])
    if not path.is_absolute():
        path = root / path
    image = PeImage(path)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [entry for entry in known if entry[0].decode().endswith(' Classic') and entry[1] == identity]
    if len(editions) != 1:
        raise RuntimeError('Identity RTTI source needs the exact packaged canonical Classic image')
    forward = _Coordinates(struct.iter_unpack('<III', editions[0][2]))
    existing = {reference: (name, slots) for reference, name, slots in tables}
    remove = set()
    for reference in sorted(identities):
        if required.get(reference, 0) != 1:
            raise RuntimeError(f'Identity RTTI root also requests native storage at {reference:#x}')
        candidates = [(index, entry) for index, entry in enumerate(patterns)
                      if entry[0] == reference and entry[1] & 4 and not entry[1] & 1]
        if reference not in existing and not candidates:
            raise RuntimeError(f'Identity RTTI root has no canonical readonly pointer-table evidence: {reference:#x}')
        for index, (_, _, _, raw, _, fixups) in candidates:
            pointers = {at: (width, kind) for at, width, _, _, kind in fixups}
            if not raw or len(raw) % 8 or any(pointers.get(at) != (8, 0x102) for at in range(0, len(raw), 8)):
                raise RuntimeError(f'Identity RTTI source is not a complete code-pointer table: {reference:#x}')
            if any(address != reference and address < reference + len(raw) and reference < address + length
                   for address, length in required.items()):
                raise RuntimeError(f'Identity RTTI table also has a direct slot resource: {reference:#x}')
            remove.add(index)
        native = forward.unique(reference)
        if native is None:
            raise RuntimeError(f'Identity RTTI root has no unique reviewed coordinate: {reference:#x}')
        section = image.section(native)
        if not section or section[4] & (0x20000000 | 0x80000000):
            raise RuntimeError(f'Identity RTTI root is not immutable data: {reference:#x}')
        name = image.vtable_type(native).encode('ascii')
        if not name.startswith((b'.?AV', b'.?AU')):
            raise RuntimeError(f'Identity RTTI root has no complete class identity: {reference:#x}')
        first = struct.unpack('<Q', image.read(native, 8))[0] - image.base
        method = image.section(first)
        if not method or not method[4] & 0x20000000:
            raise RuntimeError(f'Identity RTTI root does not contain a native virtual function: {reference:#x}')
        previous = existing.get(reference)
        if previous and previous[0] != name:
            raise RuntimeError(f'Identity RTTI source disagrees with the existing decorated name: {reference:#x}')
        # No source slot identity is needed or asserted. flags=3 at publication
        # requires the type itself to exist and deliberately imports no method.
        existing[reference] = name, bytes(4)
    result = [entry for index, entry in enumerate(patterns) if index not in remove]
    print(f'Canonical identity RTTI: {len(identities)} required type tags; '
          f'{len(remove)} obsolete pointer-content patterns removed.', flush=True)
    return result, [(reference, name, slots) for reference, (name, slots) in sorted(existing.items())]
