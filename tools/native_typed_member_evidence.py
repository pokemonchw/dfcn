"""Image-owned compound declarations for normal typed receiver discovery.

The normal build supplies an identity-pinned profile. This module only reuses
its official XML and measured MSVC library layouts; it never fetches a release,
executes a game, or turns a version label into an address/ABI declaration.
"""
from __future__ import annotations

from pathlib import Path
import hashlib
import json
import pickle
import re
import struct
import time
import xml.etree.ElementTree as ET

from build_history_layouts import consumer_requirements, semantic_id


def _receivers(root):
    expression = r'\bDFCN_NATIVE_COMPOUND_RECEIVER\(\s*(0[xX][0-9a-fA-F]+|[0-9]+)\s*,\s*"([A-Za-z_][A-Za-z0-9_:]*)"\s*\)'
    result = {}
    for address, name in re.findall(expression, consumer_requirements(root)[0]):
        owner = int(address, 0)
        if result.setdefault(owner, name) != name:
            raise RuntimeError(f'Conflicting compound receiver contracts at {owner:#x}')
    return result


def prepare_reference_catalog(root: Path, path: Path, objdump: Path):
    """Retain only proved direct-call ancestors before the normal CFG pass.

    This is an input to the existing source-arguments/seed production, not a
    new discovery entry point or a collection of required runtime addresses.
    """
    from native_pe_seed_evidence import Reader, _read
    from native_reference_resources import _Coordinates, _recover, _merged_identity, _admit_slice, PeImage
    from pe_instruction_match import _region_rows
    if struct.unpack_from('<I', path.read_bytes(), 8)[0] < 2:
        return path
    required, known, patterns, _, imports = _read(path)
    canonical = [i for i, entry in enumerate(known) if entry[0].decode().endswith(' Steam')]
    if len(canonical) != 1:
        return path
    ci = canonical[0]
    source_cache = root / 'data/extracted/cache/native-build' / ('pe-3-' + known[ci][1][:32].hex() + '.pickle')
    if not source_cache.is_file():
        return path
    shapes, refs, _ = pickle.loads(source_cache.read_bytes())
    whole = {p[0]: p for p in patterns if p[1] & 2 and p[0] == p[2]}
    contracts = _receivers(root)
    needed = set(contracts)
    if not needed:
        return path
    # Include only cached caller dependencies of declared object receivers.
    # No scan of the installed target and no unbounded executable traversal.
    config = json.loads((root / 'data/runtime/native-pe-images.json').read_text(encoding='utf-8-sig'))
    classic = config.get('classic')
    if not classic:
        return path
    classic = Path(classic)
    image = PeImage(classic if classic.is_absolute() else root / classic)
    identity = hashlib.sha256(image.data).digest() + struct.pack('<II', image.timestamp, image.size)
    editions = [i for i, entry in enumerate(known) if entry[0].decode().endswith(' Classic') and entry[1] == identity]
    if len(editions) != 1:
        raise RuntimeError('Typed source ancestors require the packaged exact Classic identity')
    vi = editions[0]
    coordinates = list(struct.iter_unpack('<III', known[vi][2]))
    forward = _Coordinates(coordinates)
    inverse = _Coordinates((native, native + end - begin, begin) for begin, end, native in coordinates)
    added, attempted = {}, {}
    while True:
        old = len(needed)
        for owner, pattern in list(whole.items()):
            if owner not in needed and any(width == 4 and offset and next_at == offset + 4 and
                    raw_target in needed and pattern[3][offset - 1] == 0xe8
                    for offset, width, next_at, raw_target, _ in pattern[5]):
                needed.add(owner)
        for owner, references in refs.items():
            if owner in whole or (owner not in needed and
                    not any(target in needed and kind == 'code' for _, target, kind in references)):
                continue
            if owner not in attempted:
                native = forward.unique(owner)
                attempted[owner] = _recover(image, objdump, native, forward, inverse, shapes, refs,
                    source_only=True) if native is not None else None
            restored = attempted[owner]
            if restored is None or restored[0] != owner or not restored[1] & 2 or (owner not in needed and not any(
                    width == 4 and offset and next_at == offset + 4 and target in needed and restored[3][offset - 1] == 0xe8
                    for offset, width, next_at, target, _ in restored[5])):
                continue
            whole[owner] = restored
            added[owner] = restored
            needed.add(owner)
        if len(needed) == old:
            break
    for owner, name in sorted(contracts.items()):
        if owner not in whole:
            print(f'Typed source receiver {name} at {owner:#x} has no complete reviewed body; retaining its unresolved feature.', flush=True)

    # Bounded argument proofs consume complete stdlib machine-code families,
    # including the actual import thunks reached by those bodies. Reuse their
    # literal production templates only to select dependency work; _recover
    # still authenticates every added byte against the retained canonical
    # shape, every relocation and the exact reviewed Classic identity.
    bounded_header = root / 'src/native_bounded_argument_discovery.h'
    families = []
    if bounded_header.is_file():
        for encoded, relocations in re.findall(
                r'\b(?:body|raw)\(address,\s*"([0-9a-f]+)"\s*,\s*\{([^}]*)\}',
                bounded_header.read_text(encoding='utf-8')):
            expected = bytes.fromhex(encoded)
            mutable = set()
            for value in relocations.split(','):
                if value.strip():
                    start = int(value.strip(), 0)
                    if start < 0 or start + 4 > len(expected):
                        raise RuntimeError('Bounded argument template has an invalid relocation')
                    mutable.update(range(start, start + 4))
            families.append((expected, mutable))
    def family(pattern):
        return any(len(pattern[3]) == len(expected) and all(
            at in mutable or value == expected[at] for at, value in enumerate(pattern[3]))
            for expected, mutable in families)

    logical_entries = None
    def complete_family(pattern):
        nonlocal logical_entries
        if family(pattern):
            return pattern
        # A release compiler may split one function into several CHAININFO
        # records. A matching prefix is only a reason to request its actual
        # parent-owned fragments, never a certificate for the missing bytes.
        candidates = [(expected, mutable) for expected, mutable in families
                      if len(pattern[3]) < len(expected) and all(
                          at in mutable or value == expected[at] for at, value in enumerate(pattern[3]))]
        if not candidates:
            return None
        if logical_entries is None:
            from native_method_abi_evidence import _unwind_entries
            logical_entries = _unwind_entries(image)
        reference = pattern[0]
        native = forward.unique(reference)
        entry = logical_entries.get(native)
        if entry is None or not any(len(expected) == entry[1] - native for expected, _ in candidates):
            return None
        raw, mask, fixups = bytearray(), bytearray(), []
        at = native
        while at < entry[1]:
            # Each fragment is independently authenticated by its retained
            # canonical full shape and every original relocation. No unknown
            # callee is admitted by this composition.
            fragment = _recover(image, objdump, at, forward, inverse, shapes, refs)
            if fragment is None or not fragment[1] & 2 or fragment[0] != reference + len(raw) or not fragment[3] or \
                    forward.unique(fragment[0], len(fragment[3])) != at or at + len(fragment[3]) > entry[1]:
                return None
            offset = len(raw)
            raw.extend(fragment[3]); mask.extend(fragment[4])
            fixups.extend((start + offset, width, next_at + offset, target, kind)
                          for start, width, next_at, target, kind in fragment[5])
            at += len(fragment[3])
        merged = reference, 1027, reference, bytes(raw), bytes(mask), sorted(fixups)
        if not family(merged) or merged[3][:len(pattern[3])] != pattern[3]:
            return None
        # Source CFG input only: do not give this composite an edition range,
        # target function identity, or runtime scan-pattern permission.
        whole[reference] = merged; added[reference] = merged
        return merged

    # Mirror the source CFG pool's existing-body ancestor/callee closure. Do
    # not enumerate the executable or turn optional proof inputs into required
    # resources. In particular, a common drawing function does not authorize
    # restoring arbitrary unrelated functions from the reference executable.
    graph_owners = {owner for owner, pattern in whole.items() if any(
        owner <= address < owner + len(pattern[3]) for address, _ in required)}
    def calls(pattern):
        return [target for offset, width, next_at, target, kind in pattern[5]
            if width == 4 and offset and next_at == offset + 4 and next_at <= len(pattern[3]) and
            pattern[3][offset - 1] == 0xe8 and kind & 0x100]
    for ancestors in (True, False):
        while True:
            before = len(graph_owners)
            for owner, pattern in whole.items():
                if ancestors:
                    if any(target in graph_owners for target in calls(pattern)): graph_owners.add(owner)
                elif owner in graph_owners:
                    graph_owners.update(target for target in calls(pattern) if target in whole)
            if len(graph_owners) == before: break
    pending = [owner for owner in graph_owners if complete_family(whole[owner]) is not None]
    visited = set()
    import_names = {reference: (library, symbol) for reference, library, symbol in imports}
    new_imports = {}
    actual_imports = {slot: (library.encode(), symbol.encode()) for (library, symbol), slot in image.imports.items()}
    def admit_import(reference):
        actual = forward.unique(reference, 8)
        name = actual_imports.get(actual)
        if name is None:
            return False
        old = import_names.get(reference)
        if old is not None and old != name:
            raise RuntimeError(f'Bounded argument import identity conflicts at {reference:#x}')
        if old is None:
            new_imports[reference] = name
            import_names[reference] = name
        return True
    def read_dependency(address):
        available = [pattern for pattern in [*patterns, *added.values()] if
            pattern[1] & 1 and pattern[0] <= address < pattern[0] + len(pattern[3])]
        available.sort(key=lambda pattern: len(pattern[3]), reverse=True)
        if available and address in whole:
            return complete_family(whole[address])
        native = forward.unique(address)
        if native is None:
            return None
        restored = _recover(image, objdump, native, forward, inverse, shapes, refs)
        if restored is None or not restored[0] <= address < restored[0] + len(restored[3]):
            return None
        if restored[1] & 2:
            # Only complete family bodies are dependencies of this proof.
            if restored[0] != address: return None
            restored = complete_family(restored)
            if restored is None: return None
            if address not in whole:
                whole[address] = restored; added[address] = restored
            return restored
        # A retained gap may contain many leaf functions. Admit only the
        # actually called straight-line leaf ending at RET or a pure tail
        # jump. The entire carrier was authenticated first; it is never
        # published as an executable function or a runtime scan pattern.
        region_native = forward.unique(restored[0], len(restored[3]))
        if region_native is None: return None
        rows = _region_rows(image, objdump, region_native, region_native + len(restored[3]))
        cursor, count = native, 0
        terminal = False
        for at, encoded, assembly in rows:
            if at < native: continue
            if at != cursor or not encoded: break
            operation = re.sub(r'^rex(?:\.[wrxb]+)?\s+', '', assembly).split(None, 1)
            if not operation: break
            operation = operation[0]
            if operation in ('call', 'int3', 'ud2') or (operation.startswith('j') and operation != 'jmp'):
                break
            count += 1; cursor += len(encoded)
            if operation in ('ret', 'retq'):
                terminal = True; break
            if operation == 'jmp':
                terminal = count == 1 and (encoded[:1] == b'\xe9' or encoded[:2] == b'\xff\x25')
                break
        length = cursor - native
        if not terminal or length <= 0 or _admit_slice(image, forward, restored, address, length) is None:
            return None
        begin = address - restored[0]
        fixups = [(at - begin, width, next_at - begin, target, kind)
                  for at, width, next_at, target, kind in restored[5]
                  if at >= begin and at + width <= begin + length]
        leaf = address, 1, 0, restored[3][begin:begin + length], restored[4][begin:begin + length], fixups
        if not any(pattern[0] <= address and address + length <= pattern[0] + len(pattern[3]) for pattern in available):
            added[address] = leaf
        return leaf
    while pending:
        owner = pending.pop()
        if owner in visited: continue
        visited.add(owner)
        pattern = read_dependency(owner)
        if pattern is None: continue
        for offset, width, next_at, target, kind in pattern[5]:
            if width != 4 or not 0 <= offset < next_at <= len(pattern[3]): continue
            if kind & 0x100:
                if offset and pattern[3][offset - 1] in (0xe8, 0xe9): pending.append(target)
            elif offset >= 2 and pattern[3][offset - 2:offset] in (b'\xff\x15', b'\xff\x25'):
                admit_import(target)
    if not added and not new_imports:
        return path
    updated = list(known)
    label, source_identity, ranges, changes = updated[ci]
    updated[ci] = label, source_identity, _merged_identity(list(struct.iter_unpack('<III', ranges)),
        [(p[0], p[0] + len(p[3])) for p in added.values() if not p[1] & 1024]), changes
    label, identity, ranges, changes = updated[vi]
    byte_changes = {address: (before, after) for address, before, after in struct.iter_unpack('<IBB', changes)}
    for pattern in added.values():
        if pattern[1] & 1024:
            continue  # Source code evidence cannot grant an edition's bytes.
        actual = image.read(forward.unique(pattern[0], len(pattern[3])), len(pattern[3]))
        for offset, (before, after) in enumerate(zip(pattern[3], actual)):
            if before == after:
                continue
            address = pattern[0] + offset
            if byte_changes.setdefault(address, (before, after)) != (before, after):
                raise RuntimeError(f'Typed source body conflicts with reviewed bytes at {address:#x}')
    updated[vi] = label, identity, ranges, b''.join(struct.pack('<IBB', at, *value) for at, value in sorted(byte_changes.items()))
    # Preserve every existing pattern and all suffix contracts verbatim.
    data = path.read_bytes()
    reader = Reader(data)
    reader.take(12); reader.take(reader.number() * 8)
    prefix = data[:reader.at]
    for _ in range(reader.number()):
        reader.blob(); reader.take(40); reader.take(reader.number() * 12); reader.take(reader.number() * 6)
    pattern_count = reader.number()
    pattern_start = reader.at
    for _ in range(pattern_count):
        reader.take(12); reader.blob(); reader.blob(); reader.take(reader.number() * 20)
    original_patterns = data[pattern_start:reader.at]
    table_start = reader.at
    schema = struct.unpack_from('<I', data, 8)[0]
    for _ in range(reader.number()):
        reader.number()
        if schema >= 4: reader.number()
        reader.blob(); reader.take(reader.number() * 4)
    original_tables = data[table_start:reader.at]
    for _ in range(reader.number()):
        reader.number(); reader.blob(); reader.blob()
    suffix = data[reader.at:]
    content = bytearray(prefix)
    def number(value):
        content.extend(struct.pack('<I', value))
    def blob(value):
        number(len(value)); content.extend(value)
    number(len(updated))
    for label, identity, ranges, changes in updated:
        blob(label); content.extend(identity)
        number(len(ranges) // 12); content.extend(ranges)
        number(len(changes) // 6); content.extend(changes)
    number(pattern_count + len(added)); content.extend(original_patterns)
    for reference, flags, owner, raw, mask, fixups in added.values():
        content.extend(struct.pack('<III', reference, flags, owner)); blob(raw); blob(mask)
        number(len(fixups))
        for fixup in fixups:
            content.extend(struct.pack('<5I', *fixup))
    content.extend(original_tables)
    number(len(imports) + len(new_imports))
    for reference, library, symbol in imports:
        number(reference); blob(library); blob(symbol)
    for reference, (library, symbol) in sorted(new_imports.items()):
        number(reference); blob(library); blob(symbol)
    content.extend(suffix)
    destination = root / 'data/extracted/cache/native-build/pe-typed-source-catalog.bin'
    destination.parent.mkdir(parents=True, exist_ok=True)
    candidate = destination.with_suffix('.publish')
    candidate.write_bytes(content)
    deadline = time.monotonic() + 3
    while True:
        try:
            candidate.replace(destination)
            break
        except OSError as error:
            if getattr(error, 'winerror', None) not in (5, 32, 33) or time.monotonic() >= deadline:
                raise
            time.sleep(.05)
    print(f'Recovered typed receiver source dependencies: {len(added)} reviewed bodies/leaf dependencies '
          f'({sum(bool(pattern[1] & 1024) for pattern in added.values())} source-only bodies), '
          f'{len(new_imports)} exact import identities.', flush=True)
    return destination


def _source(path):
    types, roots = {}, {}
    for file in sorted(path.glob('df.*.xml')):
        for node in ET.parse(file).getroot():
            if node.tag == 'global-object' and node.get('name') and node.get('type-name'):
                roots[node.get('name')] = node.get('type-name')
            elif node.get('type-name'):
                types[node.get('type-name')] = node
    return types, roots


def _children(name, definitions):
    node = definitions.get(name)
    if node is None:
        return []
    result = _children(node.get('inherits-from'), definitions) if node.get('inherits-from') else []
    for child in node:
        if child.tag == 'compound' and child.get('name') and child.get('type-name'):
            result.append((child.get('name'), child.get('type-name')))
    return result


def _offset(parent, child, member):
    fields = {field['name']: field for field in parent['fields']}
    offsets = set()
    for field in child['fields']:
        outer = fields.get(member + '.' + field['name'])
        if outer is None:
            continue
        if outer['size'] != field['size'] or outer['storage'] != field['storage']:
            return None
        offsets.add(outer['offset'] - field['offset'])
    return next(iter(offsets)) if len(offsets) == 1 and min(offsets) >= 0 else None


def build_typed_member_evidence(root: Path, profiles=()):
    from native_target_abi import _layouts
    records = []
    canonical_source = root / 'data/upstream/df-structures'
    source_types, source_roots = _source(canonical_source)
    source_symbols = next(table for table in ET.parse(canonical_source / 'symbols.xml').getroot()
                          if table.get('name') == 'v0.53.16 win64 STEAM')
    receiver_contracts = _receivers(root)
    for profile in profiles:
        provenance = profile.get('source', {})
        revision = provenance.get('revision', '')
        target_source = root / 'data/extracted/cache/native-abi/sources' / revision
        library = provenance.get('standard_library', {})
        if len(revision) != 40 or not target_source.is_dir() or not library:
            continue
        target_types, target_roots = _source(target_source)
        target_symbols = next((table for table in ET.parse(target_source / 'symbols.xml').getroot()
                               if table.get('name') == provenance.get('table')), None)
        if target_symbols is None:
            continue
        available = {value['name'] for value in profile['canonical_types']} & {value['name'] for value in profile['types']}
        roots = [value for value in profile['roots'] if value['kind'] == 'global-address' and
                 source_roots.get(value['name']) in available and
                 source_roots.get(value['name']) == target_roots.get(value['name'])]
        names, pending = set(), [source_roots[value['name']] for value in roots]
        while pending:
            name = pending.pop()
            if name in names or name not in source_types or name not in target_types:
                continue
            names.add(name)
            right = dict(_children(name, target_types))
            pending.extend(child for member, child in _children(name, source_types) if right.get(member) == child)
        # Only roots that contain named class subobjects seed this contract.
        # Pointer/vector pointees are deliberately outside this embedded-object proof.
        classes = {name for name in names if source_types[name].tag == 'class-type' and target_types[name].tag == 'class-type'}
        relevant = set(classes)
        while True:
            old = len(relevant)
            relevant.update(name for name in names if any(child in relevant for _, child in _children(name, source_types)))
            if len(relevant) == old:
                break
        roots = [value for value in roots if source_roots[value['name']] in relevant]
        if not roots:
            continue
        left = _layouts(root, canonical_source, source_symbols, {'types': []}, sorted(relevant), library['canonical'])
        right = _layouts(root, target_source, target_symbols, {'types': []}, sorted(relevant), library['target'])
        before = {spec['name']: spec for spec in left['types']}
        after = {spec['name']: spec for spec in right['types']}
        names = sorted(before.keys() & after.keys() & relevant)
        identities = {}
        for name in names:
            key = semantic_id(name)
            if not key or identities.setdefault(key, name) != name:
                raise RuntimeError('Typed compound semantic type collision: ' + name)
        payload = bytearray(bytes.fromhex(profile['sha256']) + struct.pack('<II', profile['timestamp'], profile['size']))
        payload.extend(struct.pack('<I', len(names)))
        edges_by_type = {}
        for name in names:
            source, target = before[name], after[name]
            target_fields = {field['name']: field for field in target['fields']}
            fields = []
            for field in source['fields']:
                actual = target_fields.get(field['name'])
                if actual is not None and actual['size'] == field['size'] and actual['storage'] == field['storage'] and field['size']:
                    storage = field['storage']
                    if storage in ('unknown', 'compound'):
                        continue
                    declaration = source_types.get(storage)
                    scalar = storage in ('bool', 'char', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t',
                                         'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 'float', 'double',
                                         'stl-string') or storage.startswith(('pointer<', 'stl-vector')) or (
                                             declaration is not None and declaration.tag in ('enum-type', 'bitfield-type'))
                    # A same-size aggregate does not prove its interior layout.
                    # Its named start is useful for LEA; reads use leaf members.
                    fields.append((field['id'], field['offset'], actual['offset'], field['size'], 0 if scalar else 1))
            edges = []
            target_children = dict(_children(name, target_types))
            for member, child in _children(name, source_types):
                if child not in names or target_children.get(member) != child:
                    continue
                source_at = _offset(source, before[child], member)
                target_at = _offset(target, after[child], member)
                if source_at is not None and target_at is not None:
                    edges.append((semantic_id(child), source_at, target_at))
            edges_by_type[name] = edges
            payload.extend(struct.pack('<4I', semantic_id(name), source['size'], target['size'], len(fields)))
            for field in fields:
                payload.extend(struct.pack('<5I', *field))
            payload.extend(struct.pack('<I', len(edges)))
            for edge in edges:
                payload.extend(struct.pack('<3I', *edge))
        declared = {}
        for value in roots:
            name = source_roots[value['name']]
            if name not in names:
                continue
            pending = [(semantic_id(name), value['reference'], value['target'])]
            while pending:
                type_id, source_at, target_at = pending.pop()
                key = (type_id, source_at)
                if key in declared:
                    if declared[key] != target_at:
                        raise RuntimeError('Conflicting image-owned compound root')
                    continue
                declared[key] = target_at
                parent = identities[type_id]
                pending.extend((child, source_at + old, target_at + new) for child, old, new in edges_by_type[parent])
        payload.extend(struct.pack('<I', len(declared)))
        for (type_id, source_at), target_at in sorted(declared.items()):
            payload.extend(struct.pack('<3I', source_at, target_at, type_id))
        contracts = [(owner, semantic_id(name)) for owner, name in sorted(receiver_contracts.items()) if name in names]
        payload.extend(struct.pack('<I', len(contracts)))
        for contract in contracts:
            payload.extend(struct.pack('<2I', *contract))
        records.append(payload)
        print(f'Prepared typed member declarations: {len(names)} compound types; {len(declared)} image-owned roots.', flush=True)
    return b'DFCNTM01' + struct.pack('<II', 1, len(records)) + b''.join(records)
