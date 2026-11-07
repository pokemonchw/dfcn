"""Corroborate omitted virtual parameters with the actual Windows callee.

Some upstream XML releases omit a trailing pair of bool parameters. Incoming
argument reads need an independent implementation or a typed actual caller
in the same real RTTI family. An unused register never proves an argument
was removed, and no executable version selects a calling convention.
"""
from __future__ import annotations

from collections import deque
import re
import struct
import subprocess
import xml.etree.ElementTree as ET

from pe_instruction_match import _LINE, _branch_displacement, _memory_displacement


def _inherits(image, table, original):
    try:
        locator = struct.unpack('<Q', image.read(table - 8, 8))[0] - image.base
        signature, offset, constructor, descriptor, hierarchy, self_rva = struct.unpack('<6I', image.read(locator, 24))
        if signature != 1 or offset or self_rva != locator:
            return False
        signature, attributes, count, bases = struct.unpack('<4I', image.read(hierarchy, 16))
        if not 1 <= count <= 512:
            return False
        decorated = '@'.join(reversed(original.split('::'))) + '@@'
        names = [('.?A' + prefix + decorated).encode() + b'\0' for prefix in ('V', 'U')]
        for index in range(count):
            base = struct.unpack('<I', image.read(bases + index * 4, 4))[0]
            descriptor = struct.unpack('<I', image.read(base, 4))[0]
            if any(image.read(descriptor + 16, len(name)) == name for name in names):
                return True
    except (ValueError, struct.error):
        return False
    return False


def _unwind_entries(image):
    pe = struct.unpack_from('<I', image.data, 0x3c)[0]
    address, size = struct.unpack_from('<II', image.data, pe + 24 + 112 + 3 * 8)
    if size % 12:
        raise RuntimeError('Invalid Windows method unwind directory')
    entries = {begin: (begin, end, unwind) for begin, end, unwind in
               (struct.unpack('<III', image.read(address + at, 12)) for at in range(0, size, 12))}
    def owner(entry):
        seen = set()
        while True:
            begin, end, unwind = entry
            if begin in seen or len(seen) >= 64:
                return None
            seen.add(begin)
            header = image.read(unwind, 4)
            if header[0] & 7 != 1:
                return None
            if not header[0] >> 3 & 4:
                return begin
            at = unwind + 4 + ((header[2] + 1) & ~1) * 2
            parent = struct.unpack('<III', image.read(at, 12))
            if entries.get(parent[0]) != parent:
                return None
            entry = parent
    groups = {}
    for entry in entries.values():
        root = owner(entry)
        if root is not None:
            groups.setdefault(root, []).append(entry)
    result = {}
    for root, fragments in groups.items():
        begin, end, unwind = entries[root]
        # A primary unwind record can end in the prologue while subsequent
        # CHAININFO records own the body. Only explicitly chained, contiguous
        # fragments extend the method; adjacency by itself grants nothing.
        for fragment in sorted(fragments):
            if fragment[0] == end:
                end = fragment[1]
        result[root] = begin, end, unwind
    return result


def _allocations(image, entry):
    begin, end, unwind = entry
    header = image.read(unwind, 4)
    if header[0] & 7 != 1 or header[0] >> 3 & 4 or begin + header[1] > end:
        return None
    codes = image.read(unwind + 4, header[2] * 2)
    operations, at = [], 0
    while at < header[2]:
        offset, code = codes[at * 2:at * 2 + 2]
        operation, info = code & 15, code >> 4
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
        if at + slots > header[2] or offset > header[1]:
            return None
        if size:
            operations.append((begin + offset, size))
        at += slots
    return begin + header[1], operations


def _rows(image, objdump, begin, end):
    # A complete method can have an inline dispatch table at its end. Retain
    # individual decoded boundaries; only entry-reachable direct CFG paths
    # below can provide parameter evidence.
    end = min(end, begin + 16384)
    process = subprocess.run([str(objdump), '-d', '-w', '-z', '-M', 'intel',
                              f'--start-address={image.base + begin:#x}',
                              f'--stop-address={image.base + end:#x}', str(image.path)],
                             capture_output=True, text=True, encoding='utf-8', errors='replace', check=False)
    if process.returncode:
        raise RuntimeError('Native method parameter disassembly failed: ' + process.stderr.strip())
    result = {}
    for line in process.stdout.splitlines():
        match = _LINE.match(line)
        if match:
            address, raw = int(match[1], 16) - image.base, bytes.fromhex(match[2])
            if raw and begin <= address and address + len(raw) <= end:
                result[address] = raw, match[3].split('#', 1)[0].strip().lower()
    return result


def _incoming_bools(image, objdump, entry):
    layout = _allocations(image, entry)
    if layout is None:
        return None
    prologue_end, allocations = layout
    code = _rows(image, objdump, entry[0], entry[1])
    pending, visited = deque([(entry[0], True, True)]), set()
    fourth, fifth = set(), set()
    while pending:
        address, r9_incoming, stack_incoming = pending.popleft()
        state = address, r9_incoming, stack_incoming
        if state in visited or address not in code:
            continue
        visited.add(state)
        if len(visited) > 32768:
            return None
        raw, assembly = code[address]
        operation, _, operands = assembly.partition(' ')
        args = [arg.strip() for arg in operands.split(',')]
        if operation.startswith(('ret', 'loop')) or operation in ('leave', 'enter', 'int3', 'ud2'):
            continue
        # The register evidence is a byte read of the original fourth total
        # argument, before a local definition or an intervening ABI call.
        zeroing = operation in ('xor', 'sub') and len(args) == 2 and args[0] == args[1]
        if r9_incoming and not zeroing and any(re.fullmatch(r'r9b', arg) for arg in args[1:]):
            if operation in ('mov', 'movzx', 'movsx', 'cmp', 'test', 'and', 'or', 'xor'):
                fourth.add(address)
        if args and args[0] in ('r9', 'r9d', 'r9w', 'r9b') and operation not in ('cmp', 'test', 'push', 'bt'):
            r9_incoming = False
        if operation in ('xchg', 'xadd') and any(arg in ('r9', 'r9d', 'r9w', 'r9b') for arg in args):
            r9_incoming = False
        allocation = sum(size for at, size in allocations if at <= address)
        for index, arg in enumerate(args):
            match = re.fullmatch(r'(byte|word|dword|qword|xmmword) ptr \[rsp([+-]0x[0-9a-f]+)?\]', arg)
            if not match:
                continue
            offset = (int(match[2], 16) if match[2] else 0) - allocation
            width = {'byte': 1, 'word': 2, 'dword': 4, 'qword': 8, 'xmmword': 16}[match[1]]
            if offset <= 0x28 < offset + width:
                read = index > 0 or operation in ('cmp', 'test', 'bt')
                if stack_incoming and read and offset == 0x28 and width == 1:
                    fifth.add(address)
                if index == 0 and operation not in ('cmp', 'test', 'bt'):
                    stack_incoming = False
        if address >= prologue_end and args and args[0] in ('rsp', 'esp', 'sp', 'spl') and operation not in ('cmp', 'test'):
            continue
        if address >= prologue_end and operation in ('push', 'pop'):
            continue
        if operation == 'call':
            r9_incoming = False
        branch = _branch_displacement(raw)
        if operation.startswith('j'):
            if branch is None:
                continue
            at, width = branch
            target = address + len(raw) + int.from_bytes(raw[at:at + width], 'little', signed=True)
            pending.append((target, r9_incoming, stack_incoming))
            if operation == 'jmp':
                continue
        pending.append((address + len(raw), r9_incoming, stack_incoming))
    if fourth and fifth:
        return {'function': entry[0], 'r9_byte_reads': sorted(fourth), 'incoming_stack_bool_reads': sorted(fifth),
                'entry_stack_offset': 0x28, 'unwind': entry[2]}
    return None


_REGISTERS = [tuple(value.split('/')) for value in (
    'rax/eax/ax/al', 'rcx/ecx/cx/cl', 'rdx/edx/dx/dl', 'rbx/ebx/bx/bl',
    'rsp/esp/sp/spl', 'rbp/ebp/bp/bpl', 'rsi/esi/si/sil', 'rdi/edi/di/dil',
    *(f'r{index}/r{index}d/r{index}w/r{index}b' for index in range(8, 16)))]
_REGISTER = {name: index for index, names in enumerate(_REGISTERS) for name in names}
_MEMORY = re.compile(r'(byte|word|dword|qword|xmmword) ptr \[([^]]+)\]')


def _vector_roots(image, target, symbols, source, family):
    """Use the pinned XML's explicit pointer element type, not its spelling alone."""
    declarations = {}
    for path in sorted(source.glob('*.xml')):
        for node in ET.parse(path).getroot():
            if node.get('type-name'):
                declarations[node.get('type-name')] = node
    def field(node, parts):
        for index, part in enumerate(parts):
            node = next((child for child in node if child.get('name') == part), None)
            if node is None:
                return None
            if index + 1 < len(parts) and node.get('type-name'):
                node = declarations.get(node.get('type-name'))
                if node is None:
                    return None
        return node
    roots = {node.get('name'): int(node.get('value'), 0) - image.base for node in symbols
             if node.tag == 'global-address' and not node.get('base')}
    result = {}
    for spec in target['types']:
        if spec['name'] not in roots or spec['name'] not in declarations:
            continue
        for member in spec['fields']:
            if member['storage'] != 'stl-vector<' + family + '>' or member['size'] != 24:
                continue
            node = field(declarations[spec['name']], member['name'].split('.'))
            if node is not None and node.tag == 'stl-vector' and node.get('pointer-type') == family:
                address = roots[spec['name']] + member['offset']
                if image.section(address) and image.section(address + 23):
                    result[address] = spec['name'] + '.' + member['name']
    return result


def _typed_call(image, objdump, entry, slot, vectors):
    """Prove a five-argument call on a receiver of the named virtual family.

    Pointer-array roots are identity-pinned declarations; actual RIP loads,
    pointer-sized indexing, vtable load and the dispatch must form one CFG
    path. The caller is independently identified by its own RTTI method.
    """
    layout = _allocations(image, entry)
    if layout is None:
        return None
    prologue_end, _ = layout
    code = _rows(image, objdump, entry[0], entry[1])
    # Values are (kind, identity): pointer, typed vector, object, vtable, bool.
    initial = [(0, 0)] * 16
    initial[1], initial[2], initial[8], initial[9] = (3, entry[0]), (1, 2), (1, 8), (5, 9)
    pending, visited = deque([(entry[0], tuple(initial), False)]), set()
    while pending:
        address, values, fifth = pending.popleft()
        state = address, values, fifth
        if state in visited or address not in code:
            continue
        visited.add(state)
        if len(visited) > 32768:
            return None
        values = list(values)
        raw, assembly = code[address]
        operation, _, operands = assembly.partition(' ')
        args = [arg.strip() for arg in operands.split(',')]
        destination = _REGISTER.get(args[0]) if args else None
        if operation.startswith(('ret', 'loop')) or operation in ('leave', 'enter', 'int3', 'ud2'):
            continue
        if operation == 'call':
            memory = _MEMORY.fullmatch(args[0]) if args else None
            dispatch = re.fullmatch(r'(r\w+)\+0x([0-9a-f]+)', memory[2]) if memory else None
            base = _REGISTER.get(dispatch[1]) if dispatch else None
            if (base is not None and int(dispatch[2], 16) == slot and values[base][0] == 4 and
                    values[1] == (3, values[base][1]) and values[2][0] == values[8][0] == 1 and
                    values[9][0] == 5 and fifth):
                return {'function': entry[0], 'call': address, 'slot': slot,
                        'receiver': 'RTTI this or identity-pinned pointer vector',
                        'pointer_vectors': vectors}
            for register in (0, 1, 2, 8, 9, 10, 11):
                values[register] = (0, 0)
            fifth = False
        elif operation in ('mov', 'movzx', 'movsx') and len(args) == 2:
            source_register = _REGISTER.get(args[1])
            if destination is not None:
                value = (0, 0)
                if source_register is not None:
                    if args[0] == _REGISTERS[destination][0] and args[1] == _REGISTERS[source_register][0]:
                        value = values[source_register]
                    elif args[1] == _REGISTERS[source_register][3] and values[source_register][0] == 5:
                        value = values[source_register]
                elif args[1] in ('0x0', '0x1') and args[0] in ('r9b', 'r9d'):
                    value = (5, address)
                else:
                    memory = _MEMORY.fullmatch(args[1])
                    if memory and memory[1] == 'qword' and args[0] == _REGISTERS[destination][0]:
                        expression = memory[2]
                        relocated = _memory_displacement(raw)
                        if relocated and relocated[1]:
                            at = relocated[0]
                            target = address + len(raw) + int.from_bytes(raw[at:at + 4], 'little', signed=True)
                            if target in vectors:
                                value = (2, target)
                        base = _REGISTER.get(expression)
                        if base is not None and values[base][0] == 3:
                            value = (4, values[base][1])
                        indexed = re.fullmatch(r'(r\w+)\+(r\w+)\*8', expression)
                        if indexed and values[_REGISTER.get(indexed[1], 0)][0] == 2:
                            value = (3, address)
                        if expression.startswith(('rsp', 'rbp')):
                            value = (1, address)
                    elif memory and memory[1] == 'byte':
                        # A byte load defines a bool-sized argument, independently
                        # of whether this caller itself uses its incoming bools.
                        value = (5, address)
                values[destination] = value
            else:
                memory = _MEMORY.fullmatch(args[0])
                if memory and memory[2] == 'rsp+0x20':
                    fifth = memory[1] == 'byte' and (args[1] in ('0x0', '0x1') or
                            (source_register is not None and values[source_register][0] == 5))
        elif operation == 'lea' and destination is not None:
            values[destination] = (1, address) if args[1].startswith(('[rsp', '[rbp')) else (0, 0)
        elif destination is not None and operation not in ('cmp', 'test', 'bt', 'push'):
            values[destination] = (0, 0)
        if address >= prologue_end and (destination == 4 and operation not in ('cmp', 'test') or operation in ('push', 'pop')):
            continue
        branch = _branch_displacement(raw)
        if operation.startswith('j'):
            if branch is None:
                continue
            at, width = branch
            target = address + len(raw) + int.from_bytes(raw[at:at + width], 'little', signed=True)
            pending.append((target, tuple(values), fifth))
            if operation == 'jmp':
                continue
        pending.append((address + len(raw), tuple(values), fifth))
    return None


def amend_method_contracts(image, reference, target, objdump, symbols=(), xml_source=None):
    if objdump is None:
        return []
    source_types = {spec['name']: spec for spec in reference['types']}
    target_types = {spec['name']: spec for spec in target['types']}
    groups = {}
    for name, spec in target_types.items():
        original = source_types.get(name)
        if original is None:
            continue
        methods = {method['name']: method for method in original['methods']}
        for method in spec['methods']:
            source = methods.get(method['name'])
            if (not source or source['argument_count'] != 4 or method['argument_count'] != 2 or
                    not source['signature'].endswith(',bool,bool)') or
                    source['signature'][:-11] + ')' != method['signature']):
                continue
            family = original
            while family.get('parent') in source_types:
                parent = source_types[family['parent']]
                inherited = next((entry for entry in parent['methods'] if entry['name'] == method['name']), None)
                if inherited is None or inherited['signature'] != source['signature']:
                    break
                family = parent
            key = family['name'], method['name']
            groups.setdefault(key, []).append((spec, method, source, family))
    entries = _unwind_entries(image)
    evidence, inspected = [], {}
    for (family_name, method_name), members in sorted(groups.items()):
        witnesses = {}
        for spec, method, source, family in members:
            table = spec.get('reference_table', 0)
            if not table or not _inherits(image, table, family.get('original', family_name)):
                continue
            function = struct.unpack('<Q', image.read(table + method['slot'], 8))[0] - image.base
            if function not in entries or function in witnesses:
                continue
            if function not in inspected:
                inspected[function] = _incoming_bools(image, objdump, entries[function])
            proof = inspected[function]
            if proof:
                witnesses[function] = {**proof, 'type': spec['name'], 'table': table, 'slot': method['slot']}
            if len(witnesses) >= 2:
                break
        if not witnesses:
            continue
        callers = []
        if len(witnesses) == 1 and xml_source is not None:
            vectors = _vector_roots(image, target, symbols, xml_source, family_name)
            caller_functions = set()
            for (other_family, other_name), candidates in sorted(groups.items()):
                if other_family != family_name or other_name == method_name:
                    continue
                for spec, method, original, family in candidates:
                    table = spec.get('reference_table', 0)
                    if not table or not _inherits(image, table, family.get('original', family_name)):
                        continue
                    function = struct.unpack('<Q', image.read(table + method['slot'], 8))[0] - image.base
                    if function in caller_functions or function in witnesses or function not in entries:
                        continue
                    caller_functions.add(function)
                    entry = entries[function]
                    wanted = members[0][1]['slot']
                    if struct.pack('<I', wanted) not in image.read(entry[0], min(entry[1] - entry[0], 16384)):
                        continue
                    proof = _typed_call(image, objdump, entry, wanted, vectors)
                    if proof:
                        callers.append({**proof, 'type': spec['name'], 'method': other_name, 'table': table})
                        break
                if callers:
                    break
        if len(witnesses) < 2 and not callers:
            raise RuntimeError(f'Image contradicts omitted bool parameters for {family_name}.{method_name}, '
                               'but an independent implementation or typed caller is not yet proved')
        for spec, method, source, family in members:
            method.update(signature=source['signature'], argument_count=source['argument_count'],
                          parameter_shape=source['parameter_shape'])
        evidence.append({'family': family_name, 'method': method_name, 'source': 'PE incoming argument reads',
                         'implementations': list(witnesses.values()), 'callers': callers})
        print(f'Corrected native method declaration {family_name}.{method_name}: '
              f'{len(witnesses)} Windows implementations and {len(callers)} independent typed callers '
              'prove both bool parameters.', flush=True)
    return evidence
