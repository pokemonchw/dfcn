"""Attach source type identities to reference instruction operands.

This is called by the normal seed build. It consumes its existing disassembly
and optional image-owned declarations prepared by native_target_abi.
"""
from __future__ import annotations

import re
import struct
import bisect
from collections import defaultdict, deque

from pe_instruction_match import _branch_displacement, _opcode_start
from build_history_layouts import semantic_id
from native_type_extent_evidence import build_type_extent_evidence


_REGISTERS = ('rax', 'rcx', 'rdx', 'rbx', 'rsp', 'rbp', 'rsi', 'rdi',
              'r8', 'r9', 'r10', 'r11', 'r12', 'r13', 'r14', 'r15')
_VOLATILE = {'rax', 'rcx', 'rdx', 'r8', 'r9', 'r10', 'r11'}
_REG_ALIASES = {}
for _register in _REGISTERS:
    _REG_ALIASES[_register] = _register
    if _register.startswith('r') and _register[1:].isdigit():
        for _suffix in ('d', 'w', 'b'):
            _REG_ALIASES[_register + _suffix] = _register
    else:
        _REG_ALIASES['e' + _register[1:]] = _register
        _REG_ALIASES[_register[1:]] = _register
for _short, _full in {'al': 'rax', 'ah': 'rax', 'cl': 'rcx', 'ch': 'rcx',
                      'dl': 'rdx', 'dh': 'rdx', 'bl': 'rbx', 'bh': 'rbx',
                      'sil': 'rsi', 'dil': 'rdi', 'bpl': 'rbp', 'spl': 'rsp'}.items():
    _REG_ALIASES[_short] = _full


def _memory_operand(raw, assembly):
    """Decode only ordinary unindexed base+disp operands we can type exactly."""
    operand = re.search(r'\[([a-z0-9]+)(?:([+-])0x([0-9a-f]+))?\]', assembly)
    if not operand or operand[1] not in _REGISTERS or operand[1] == 'rsp':
        return None
    index = _opcode_start(raw)
    if index >= len(raw) or 0x67 in raw[:index]:
        return None
    opcode = raw[index]
    if opcode in (0xc4, 0xc5, 0x62):
        return None
    index += 1
    if opcode == 0x0f:
        if index >= len(raw):
            return None
        second = raw[index]
        index += 1 + (second in (0x38, 0x3a))
    if index >= len(raw):
        return None
    modrm = raw[index]
    index += 1
    mode, base = modrm >> 6, modrm & 7
    if mode == 3:
        return None
    if base == 4:
        if index >= len(raw):
            return None
        sib = raw[index]
        index += 1
        if (sib >> 3) & 7 != 4 or (mode == 0 and sib & 7 == 5):
            return None
    elif mode == 0 and base == 5:
        return None
    width = 1 if mode == 1 else 4 if mode == 2 else 0
    if index + width > len(raw):
        return None
    displacement = int.from_bytes(raw[index:index + width], 'little', signed=True) if width else 0
    printed = int(operand[3], 16) * (-1 if operand[2] == '-' else 1) if operand[3] else 0
    if printed != displacement:
        return None
    size = re.search(r'\b(byte|word|dword|qword|xmmword) ptr\b', assembly)
    access = {'byte': 1, 'word': 2, 'dword': 4, 'qword': 8, 'xmmword': 16}.get(size[1], 0) if size else 0
    return operand[1], displacement, index, width, access


def _instructions(pattern, rows):
    reference, flags, owner, raw, mask, fixups = pattern
    if not flags & 2 or reference != owner or not rows or len(rows[0]) < 3:
        return None
    if rows[0][0] or rows[-1][0] + len(rows[-1][1]) != len(raw):
        return None
    if any(left[0] + len(left[1]) != right[0] for left, right in zip(rows, rows[1:])):
        return None
    result = []
    for offset, encoded, assembly in rows:
        assembly = re.sub(r'\s*<[^>]*>', '', assembly.split('#', 1)[0]).strip().lower()
        mnemonic, _, operands = assembly.partition(' ')
        result.append((offset, encoded, mnemonic, [value.strip() for value in operands.split(',')],
                       _memory_operand(encoded, assembly)))
    return result


def _unambiguous_members(fields):
    """A physical access may name a member and its containing aggregates.

    Overlapping sibling paths are union alternatives. Register provenance and
    a displacement alone do not establish their active discriminant.
    """
    names = [field['name'] for field in fields]
    return all(left == right or left.startswith(right + '.') or right.startswith(left + '.')
               for index, left in enumerate(names) for right in names[index + 1:])


def _typed_operands(instructions, owner_type, types):
    """Intersect register provenance at control-flow joins before using it.

    A load of a declared pointer can establish a new pointed-to type. Arithmetic
    and unknown writes kill provenance; a nearby displacement never supplies it.
    """
    offsets = {row[0]: index for index, row in enumerate(instructions)}
    incoming = {0: {'rcx': owner_type}}
    pending = deque([0])
    visits = 0
    while pending:
        index = pending.popleft()
        visits += 1
        if visits > len(instructions) * 64:
            return []
        offset, raw, mnemonic, operands, memory = instructions[index]
        registers = dict(incoming[index])
        destination = _REG_ALIASES.get(operands[0]) if operands else None
        typed_result = None
        if memory and memory[0] in registers:
            spec = types[registers[memory[0]]]
            candidates = spec['_at'].get(memory[1], ())
            if not _unambiguous_members(candidates):
                candidates = ()
            if mnemonic == 'mov' and len(operands) == 2 and operands[0] in _REGISTERS and '[' in operands[1]:
                pointed = {field['storage'][8:-1] for field in candidates
                           if field['storage'].startswith('pointer<') and field['storage'].endswith('>')}
                if len(pointed) == 1 and next(iter(pointed)) in types:
                    typed_result = next(iter(pointed))
            elif mnemonic == 'lea' and len(operands) == 2 and operands[0] in _REGISTERS:
                embedded = {field['storage'] for field in candidates if field['storage'] in types}
                if len(embedded) == 1:
                    typed_result = next(iter(embedded))
        if mnemonic == 'mov' and len(operands) == 2 and operands[0] in _REGISTERS and operands[1] in _REGISTERS:
            typed_result = registers.get(operands[1])
        # Comparison, branches and stores do not overwrite a register operand.
        if destination and mnemonic not in ('cmp', 'test', 'push', 'bt', 'call') and not mnemonic.startswith('j'):
            registers.pop(destination, None)
            if typed_result:
                registers[destination] = typed_result
        if mnemonic.startswith('call'):
            for register in _VOLATILE:
                registers.pop(register, None)
        if mnemonic in ('mul', 'imul', 'div', 'idiv', 'lods', 'lodsq', 'lodsd', 'stos', 'stosq', 'stosd', 'xchg', 'leave'):
            # These have implicit writes or more than one destination.
            registers.clear()
        if mnemonic not in ('mov', 'movzx', 'movsx', 'movsxd', 'lea', 'cmp', 'test', 'push', 'pop',
                            'add', 'sub', 'and', 'or', 'xor', 'not', 'neg', 'inc', 'dec',
                            'shl', 'shr', 'sar', 'sal', 'rol', 'ror', 'nop', 'ret', 'retq',
                            'int3', 'ud2', 'bt', 'bts', 'btr', 'btc', 'call', 'cdqe', 'cqo') and not (
                mnemonic.startswith('j') or mnemonic.startswith('cmov') or mnemonic.startswith('set') or
                mnemonic.startswith('movap') or mnemonic.startswith('movup') or mnemonic.startswith('movdq')):
            registers.clear()
        if mnemonic in ('cdqe', 'cqo'):
            registers.pop('rax', None)
            registers.pop('rdx', None)
        next_indices = []
        branch = _branch_displacement(raw)
        if mnemonic.startswith('j') or mnemonic.startswith('loop'):
            if branch:
                at, width = branch
                target = offset + len(raw) + int.from_bytes(raw[at:at + width], 'little', signed=True)
                if target in offsets:
                    next_indices.append(offsets[target])
            if mnemonic != 'jmp' and index + 1 < len(instructions):
                next_indices.append(index + 1)
        elif mnemonic not in ('ret', 'retq', 'int3', 'ud2') and index + 1 < len(instructions):
            next_indices.append(index + 1)
        for successor in next_indices:
            existing = incoming.get(successor)
            merged = registers if existing is None else {
                register: kind for register, kind in existing.items() if registers.get(register) == kind}
            if existing is None or merged != existing:
                incoming[successor] = dict(merged)
                pending.append(successor)
    result = []
    for index, (offset, raw, mnemonic, operands, memory) in enumerate(instructions):
        registers = incoming.get(index, {})
        if not memory or memory[0] not in registers or (not memory[4] and mnemonic != 'lea'):
            continue
        spec = types[registers[memory[0]]]
        base, displacement, encoded_offset, encoded_width, access = memory
        index = bisect.bisect_right(spec['_starts'], displacement) - 1
        candidates = []
        while index >= 0 and spec['_ends'][index] >= displacement + access:
            field = spec['_ordered'][index]
            if field['offset'] <= displacement and displacement + access <= field['offset'] + field['size']:
                candidates.append(field)
            index -= 1
        eligible = []
        for field in candidates:
            delta = displacement - field['offset']
            if delta < 0 or access > field['size'] - delta:
                continue
            if not access and delta:
                continue
            # Fixed scalar storage and the physical members of standard ABI
            # containers can be evidenced. An array's indices need identities
            # of their own; a single displacement cannot prove its full layout.
            if (field['storage'].startswith('array<') and not re.fullmatch(r'array<[^,]+,[0-9]+>', field['storage'])) or (
                    field['size'] > 64 and mnemonic != 'lea'):
                continue
            eligible.append(field)
        operand_flags = 0
        if not _unambiguous_members(eligible):
            # A shared union span has a physical identity even when the
            # instruction does not establish which alternative is active.
            # Drop enclosing aggregates, and admit only exact aliases. The
            # reader must independently authenticate this storage evidence;
            # it must never promote the representative to a semantic leaf.
            leaves = [field for field in eligible if not any(
                other['name'].startswith(field['name'] + '.') for other in eligible)]
            if len({field['name'] for field in leaves}) < 2 or len({
                    (field['offset'], field['size']) for field in leaves}) != 1:
                continue
            eligible = [min(leaves, key=lambda field: (field['name'], field['id']))]
            operand_flags = 1
        for field in eligible:
            delta = displacement - field['offset']
            result.append((spec['id'], field['id'], offset + len(raw), delta, access,
                           offset + encoded_offset, encoded_width, operand_flags))
    return result


def _scalar_storage(storage):
    return 'byte-boolean' if storage in ('bool', 'int8_t', 'uint8_t') else storage


def _array_leaf(storage):
    while storage.startswith('array<') and storage.endswith('>'):
        storage = storage[6:-1].rsplit(',', 1)[0]
    return storage


def _global_bindings(profile, global_specs):
    source_types = {spec['name']: spec for spec in profile['canonical_types']}
    target_types = {spec['name']: spec for spec in profile['types']}
    roots = {entry['name']: entry for entry in profile['roots'] if entry['kind'] == 'global-address'}
    result = []
    absent = []
    def translated(field, target, delta, width):
        source_array, target_array = field.get('array'), target.get('array')
        if not source_array:
            if _scalar_storage(field['storage']) != _scalar_storage(target['storage']) or delta + width > target['size']:
                return None
            prefix = field['name'] + '.'
            children = [member for member in source['fields'] if member['name'].startswith(prefix)]
            if children:
                first, consumed = None, 0
                while consumed < width:
                    position = field['offset'] + delta + consumed
                    candidates = sorted((member for member in children if member['offset'] <= position < member['offset'] + member['size']),
                                        key=lambda member: (member['size'], -len(member['name'])))
                    if not candidates:
                        return None
                    member = candidates[0]
                    actual_member = target_fields.get(member['name'])
                    if actual_member is None:
                        return None
                    length = min(width - consumed, member['offset'] + member['size'] - position)
                    actual = translated(member, actual_member, position - member['offset'], length)
                    if actual is None or actual == 'absent':
                        return None
                    if first is None:
                        first = actual
                    elif actual != first + consumed:
                        return None
                    consumed += length
                return first
            return target['offset'] + delta
        if not target_array or not source_array['stride'] or not target_array['stride']:
            return None
        if not source_array['index_enum'] and (
                source_array['count'] != target_array['count'] or source_array['stride'] != target_array['stride']):
            # A DFHack opaque texture_indicesN is a span, not a declaration of
            # each sprite's identity. Both the count and the numbering of those
            # spans change as the real graphicst gains members. Such elements
            # need token/instruction evidence instead of a same-index guess.
            return None
        if field['storage'].rsplit(',', 1)[0] != target['storage'].rsplit(',', 1)[0]:
            return None
        source_names = {entry['index']: entry['name'] for entry in source_array['indices']}
        target_names = {entry['name']: entry['index'] for entry in target_array['indices']}
        if source_array['index_enum'] and (not target_array.get('index_enum') or
                len(target_names) != target_array['count'] or
                set(target_names.values()) != set(range(target_array['count']))):
            # Missing enum metadata cannot establish that an element was
            # removed. Keep it unresolved until a complete named domain exists.
            return None
        first = None
        consumed = 0
        while consumed < width:
            index, inside = divmod(delta + consumed, source_array['stride'])
            if index >= source_array['count']:
                return None
            if source_array['index_enum']:
                actual_index = target_names.get(source_names.get(index))
                if actual_index is None:
                    # An entire canonical element is explicitly absent from
                    # this image's declared enum, not an unresolved address.
                    if not consumed and not inside and width == source_array['stride'] and source_names.get(index):
                        return 'absent'
                    return None
            else:
                actual_index = index
            count = min(width - consumed, source_array['stride'] - inside)
            if actual_index >= target_array['count'] or inside + count > target_array['stride']:
                return None
            actual = target['offset'] + actual_index * target_array['stride'] + inside
            if first is None:
                first = actual
            elif actual != first + consumed:
                return None
            consumed += count
        return first
    for global_name, type_name in (('gps', 'graphic'), ('init', 'init'), ('enabler', 'enabler'),
                                   ('game', 'gamest'), ('plotinfo', 'plotinfost'), ('world', 'world')):
        root = roots.get(global_name)
        source, target = source_types.get(type_name), target_types.get(type_name)
        if not root or not source or not target:
            continue
        target_fields = {field['name']: field for field in target['fields']}
        for object_rva, offset, width, flags in global_specs:
            if object_rva != root['reference']:
                continue
            candidates = sorted((field for field in source['fields']
                                 if field['offset'] <= offset and offset + width <= field['offset'] + field['size']),
                                key=lambda field: (field['size'], -len(field['name'])))
            for field in candidates:
                actual = target_fields.get(field['name'])
                if actual is None:
                    if (flags & 4 and source.get('texture_members_complete') and
                            target.get('texture_members_complete') and
                            field.get('declaration_source') == 'official-graphics-header' and
                            field['name'].startswith('texpos_') and field['storage'] == 'int32_t'):
                        # A complete, image-bounded official declaration can
                        # explicitly omit a newer scalar texture slot. There
                        # is no native address to invent for that member.
                        absent.append((object_rva, offset))
                        break
                    # Flattening a single-member compound is a declaration
                    # spelling change. Match its unique leaf name and complete
                    # scalar storage, without inheriting a parent's offset.
                    leaf = field['name'].rsplit('.', 1)[-1]
                    aliases = [member for member in target['fields'] if member['name'] == leaf and
                               member['size'] == field['size'] and _array_leaf(member['storage']) == _array_leaf(field['storage'])]
                    parent = source_types[type_name]['fields']
                    prefix = field['name'].rsplit('.', 1)[0] + '.'
                    wrapped = '.' in field['name'] and sum(member['name'].startswith(prefix) for member in parent) == 1
                    if (wrapped and len(aliases) == 1 and field.get('array') and aliases[0].get('array') and
                            not field['array']['index_enum'] and not aliases[0]['array']['index_enum']):
                        result.append((object_rva, offset, aliases[0]['offset'] + offset - field['offset'], width, 0xffffffff, flags))
                    break
                native_offset = translated(field, actual, offset - field['offset'], width)
                if native_offset == 'absent' and flags & 4:
                    absent.append((object_rva, offset))
                elif native_offset is not None and native_offset != 'absent':
                    result.append((object_rva, offset, native_offset, width, 0xffffffff, flags))
                # An incompatible narrow member cannot fall back to a broad
                # enclosing compound's delta and silently change identities.
                break
    return result, absent


def _construction_storage(spec, field):
    # The local context factory writes only nullptr into these two fields;
    # their pointees are never read or fabricated. A renamed evidence class
    # therefore does not change this construction contract.
    if (spec['name'] == 'history_event_context' and
            field['name'] in ('interrogator_relationships', 'interrogation') and
            field['size'] == 8 and field['storage'].startswith('pointer<')):
        return 'null-pointer'
    return _scalar_storage(field['storage'])


def _compatible_member(source, target, field, actual):
    def storage(spec, member):
        value = _construction_storage(spec, member)
        # A generated C++ declaration can spell a fixed enum-indexed array
        # with its numeric extent. The array metadata below independently
        # checks every token/index, count and stride; preserve the complete
        # inner element type and normalize only that outer index spelling.
        if member.get('array') and value.startswith('array<') and value.endswith('>'):
            return 'array<' + value[6:-1].rsplit(',', 1)[0] + '>'
        return value
    if field['storage'] == 'unknown' or storage(source, field) != storage(target, actual) or field['size'] != actual['size'] or field.get('array') != actual.get('array'):
        return False
    prefix = field['name'] + '.'
    def descendants(spec, parent):
        return {member['name'][len(prefix):]: (member['offset'] - parent['offset'], member['size'], storage(spec, member), member.get('array'))
                for member in spec['fields'] if member['name'].startswith(prefix)}
    return descendants(source, field) == descendants(target, actual)


def build_semantic_evidence(metadata, patterns, tables, decoded, target_profiles=(), global_specs=(), enum_evidence=b'', extent_reference=()):
    """Return a versioned binary semantic section for the existing seed writer."""
    if metadata.get('schema') != 1 or metadata.get('platform') != 'windows-x64-msvc':
        raise RuntimeError('Unsupported native semantic source schema')
    types = {spec['name']: spec for spec in metadata['types']}
    for profile in target_profiles:
        for spec in profile['canonical_types']:
            types.setdefault(spec['name'], spec)
    identities = {}
    for spec in [*types.values(), *(spec for profile in target_profiles for spec in profile['types'])]:
        named_ids = [(spec['id'], spec['name'])]
        named_ids.extend((field['id'], field['name']) for field in spec['fields'])
        named_ids.extend((method['id'], method['name']) for method in spec['methods'])
        named_ids.extend((method['parameter_shape'], method['signature']) for method in spec['methods'])
        for value, name in named_ids:
            previous = identities.setdefault(value, name)
            if not value or semantic_id(name) != value or previous != name:
                raise RuntimeError(f'Native semantic identity collision: {previous!r}, {name!r}')
    enums = metadata.get('enums', [])
    for spec in [*enums, *(spec for profile in target_profiles for spec in profile.get('enums', []))]:
        for value, name in [(spec['id'], spec['name']), *((item['id'], item['name']) for item in spec['members'])]:
            previous = identities.setdefault(value, name)
            if not value or semantic_id(name) != value or previous != name:
                raise RuntimeError(f'Native semantic identity collision: {previous!r}, {name!r}')
    for spec in types.values():
        spec['_ordered'] = sorted(spec['fields'], key=lambda field: field['offset'])
        spec['_starts'] = [field['offset'] for field in spec['_ordered']]
        spec['_ends'] = []
        spec['_at'] = defaultdict(list)
        extent = 0
        for field in spec['_ordered']:
            extent = max(extent, field['offset'] + field['size'])
            spec['_ends'].append(extent)
            spec['_at'][field['offset']].append(field)
    table_slots = {reference: struct.unpack('<' + 'I' * (len(slots) // 4), slots)
                   for reference, _, slots in tables}
    owners = defaultdict(set)
    for spec in types.values():
        for function in table_slots.get(spec['reference_table'], ()):
            owners[function].add(spec['name'])
    functions = []
    function_instructions = {}
    print(f'Generating typed native operand evidence: {len(types)} source types; {len(owners)} method functions.', flush=True)
    for index, pattern in enumerate(patterns):
        reference, flags, owner, raw, mask, fixups = pattern
        if owner not in owners:
            continue
        rows = _instructions(pattern, decoded.get(index, ()))
        if rows is None:
            continue
        operands = sorted(set(operand for name in owners[owner]
                              for operand in _typed_operands(rows, name, types)))
        selected = bytearray(mask)
        for offset, encoded, mnemonic, _, _ in rows:
            branch = _branch_displacement(encoded)
            if branch and not mnemonic.startswith('call'):
                at, width = branch
                # These coordinates carry control flow, not object layout.
                # Keep their relative targets so the provenance CFG remains
                # identical throughout an admitted target prefix.
                selected[offset + at:offset + at + width] = b'\x00' * width
        for _, _, _, _, _, at, width, _ in operands:
            if width:
                selected[at:at + width] = b'\x01' * width
        functions.append((owner, raw, bytes(selected), operands))
        function_instructions[owner] = rows
        if len(functions) % 128 == 0:
            print(f'  Typed native functions: {len(functions)}.', flush=True)
    content = bytearray(b'DFCNHA01')
    def number(value):
        content.extend(struct.pack('<I', value))
    def blob(value):
        number(len(value))
        content.extend(value)
    def string(value):
        blob(value.encode('utf-8'))
    number(8)
    number(len(types))
    for spec in types.values():
        for value in (spec['id'], spec['parent_id'], spec['reference_table'], spec.get('flags', 0)):
            number(value)
        string(spec['name'])
        number(len(spec['fields']))
        for field in spec['fields']:
            child_type = types.get(field['storage'], {}).get('id', 0)
            for value in (field['id'], field['offset'], field['size'], child_type, field.get('flags', 0)):
                number(value)
            string(field['name'])
        number(len(spec['methods']))
        slots = table_slots.get(spec['reference_table'], ())
        for method in spec['methods']:
            function = slots[method['slot'] // 8] if method['slot'] // 8 < len(slots) else 0
            for value in (method['id'], method['slot'], method['parameter_shape'], method['argument_count'], function,
                          method.get('flags', 0)):
                number(value)
    number(len(enums))
    for spec in enums:
        number(spec['id'])
        number(len(spec['members']))
        for item in spec['members']:
            for value in (item['id'], item['value'] & 0xffffffff, item['flags']):
                number(value)
    number(len(functions))
    for owner, raw, mask, operands in functions:
        number(owner)
        blob(raw)
        blob(mask)
        number(len(operands))
        for operand in operands:
            content.extend(struct.pack('<IIIIIIII', *operand))
    number(len(target_profiles))
    for profile in target_profiles:
        content.extend(bytes.fromhex(profile['sha256']))
        number(profile['timestamp'])
        number(profile['size'])
        string(profile['source']['url'])
        string(profile['source']['revision'])
        number(len(profile['roots']))
        for root in profile['roots']:
            number(root['reference'])
            number(root['target'])
            number(1 if root['kind'] == 'vtable-address' else 0)
            string(root['name'])
        globals, absent_globals = _global_bindings(profile, global_specs)
        number(len(globals))
        for binding in globals:
            content.extend(struct.pack('<IIIIII', *binding))
        number(len(absent_globals))
        for object_rva, offset in absent_globals:
            number(object_rva)
            number(offset)
        actual_types = {spec['name']: spec for spec in profile['types']}
        admitted = [(source, actual_types[name]) for name, source in types.items() if name in actual_types]
        number(len(admitted))
        for source, target in admitted:
            # The context is constructed locally from reviewed defaults. A
            # changed field set needs explicit constructor evidence; a larger
            # allocation alone cannot supply defaults for a new native member.
            constructor_known = source['name'] != 'history_event_context' or (
                {(field['id'], field['size'], _construction_storage(source, field)) for field in source['fields']} ==
                {(field['id'], field['size'], _construction_storage(target, field)) for field in target['fields']})
            constructor_known &= source.get('extent_complete', True) and target.get('extent_complete', True)
            if source['name'] in ('graphic_viewportst', 'graphic_map_portst'):
                def outputs(spec):
                    return {(field['name'], field['size'], field['storage']) for field in spec['fields']
                            if field['name'].startswith('screentexpos')}
                constructor_known &= outputs(source) == outputs(target)
                def borrowed(spec):
                    return {(field['name'], field['size'], field['storage']) for field in spec['fields']
                            if not field['name'].startswith('screentexpos')}
                constructor_known &= borrowed(source) == borrowed(target)
            for value in (source['id'], target['reference_table'], target['size'],
                          target['alignment'] if constructor_known else 0):
                number(value)
            fields = {field['id']: field for field in target['fields']}
            compatible = [(field, fields[field['id']]) for field in source['fields']
                          if field['id'] in fields and _compatible_member(source, target, field, fields[field['id']])]
            number(len(compatible))
            for _, field in compatible:
                for value in (field['id'], field['offset'], field['size']):
                    number(value)
            methods = {method['id']: method for method in target['methods']}
            compatible_methods = [methods[method['id']] for method in source['methods'] if method['id'] in methods]
            number(len(compatible_methods))
            for method in compatible_methods:
                for value in (method['id'], method['slot'], method['parameter_shape'], method['argument_count']):
                    number(value)
        targets = {spec['id']: spec for spec in profile.get('enums', [])}
        enum_bindings = [(spec['id'], item['id'], item['value'] & 0xffffffff)
                         for spec in enums if spec['id'] in targets
                         for item in targets[spec['id']]['members']
                         if any(source['id'] == item['id'] for source in spec['members'])]
        number(len(enum_bindings))
        for binding in enum_bindings:
            content.extend(struct.pack('<III', *binding))
        print(f'  Image-owned ABI: {profile["source"]["table"]}; {len(globals)} global members; {len(admitted)} types.', flush=True)
    blob(build_type_extent_evidence(types, table_slots, functions, function_instructions, extent_reference))
    blob(enum_evidence)
    print(f'Generated typed native operand evidence: {len(functions)} functions; {len(content)} bytes.', flush=True)
    return bytes(content)
