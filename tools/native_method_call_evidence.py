"""Retain named virtual-call preparation for automatic ABI adaptation.

The consumer names the method and both supported callback contracts. The
runtime must prove its actual receiver, arguments and indirect call together;
a vtable slot value alone never identifies a call site.
"""
from __future__ import annotations

import re
import struct

from build_history_layouts import semantic_id
from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source
from native_reference_semantics import reference_frame_registers


def _suffix_features(root, patterns, decoded):
    """Read source-owned feature groups, then prove their source anchors.

    The annotation owns only the optional history suffix hooks. Names, authored
    aliases, base return text and announcement delivery remain ordinary required
    consumers. No target version or target coordinate participates here.
    """
    groups = []
    for path in sorted((root / 'src').iterdir()):
        if path.suffix not in ('.inc', '.cpp', '.h'):
            continue
        tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8')))
        pairs = _pairs(tokens)
        for at, token in enumerate(tokens[:-1]):
            if token != 'native_pe_return_suffix_feature' or tokens[at + 1] != '(':
                continue
            end = pairs[at + 1]
            args = _parts(tokens, pairs, at + 2, end)
            if len(args) != 4 or args[0][1] - args[0][0] != 1:
                continue  # The function declaration is not a consumer.
            name = tokens[args[0][0]]
            if not name.startswith('"'):
                continue
            numbers = []
            for begin, finish in args[1:3]:
                values = tokens[begin:finish]
                if not values or values[0] != '{' or values[-1] != '}':
                    raise RuntimeError('A suffix feature needs literal source anchor lists')
                values = [_number([value]) for value in values[1:-1] if value != ',']
                if not values or any(not value for value in values):
                    raise RuntimeError('Invalid suffix feature source anchor')
                numbers.append(values)
            begin, finish = args[3]
            callee_args = _parts(tokens, pairs, begin + 1, finish - 1)
            declared = []
            for first_arg, last_arg in callee_args:
                value = tokens[first_arg:last_arg]
                if len(value) != 4 or value[:2] != ['native_pe_rva', '('] or value[-1] != ')':
                    raise RuntimeError('Suffix feature callees must retain explicit normal-build address requirements')
                declared.append(_number(value[2:3]))
            if len(declared) != 3 or any(not value for value in declared):
                raise RuntimeError('Incomplete suffix feature callee requirements')
            if tokens[end + 1:end + 3] != [')', '{']:
                raise RuntimeError('Suffix feature hooks must be owned by its guarded block')
            first, last = end + 2, pairs[end + 2]
            spans, cleanup = [], set()
            for begin, finish in pairs.items():
                if not first < begin < finish < last or tokens[begin] != '{':
                    continue
                parts = _parts(tokens, pairs, begin + 1, finish)
                if len(parts) < 3:
                    continue
                site, callee = (_number(tokens[slice(*part)]) for part in parts[:2])
                if not site or callee is None:
                    continue
                wrapper = tokens[slice(*parts[2])]
                if 'reinterpret_cast' not in wrapper and 'native_history_formatter_callback' not in wrapper:
                    continue
                width = 5
                if not callee:
                    if len(parts) < 5:
                        raise RuntimeError('An indirect suffix hook needs complete instruction bytes')
                    original = tokens[slice(*parts[4])]
                    width = len([value for value in original[1:-1] if value != ','])
                spans.append((site, width))
                if any('destroy' in value for value in wrapper):
                    cleanup.add(callee)
            if not spans or len(cleanup) != 1:
                raise RuntimeError('Suffix feature has no unique source string cleanup contract')
            groups.append((name[1:-1], *numbers, sorted(spans), next(iter(cleanup)), declared))

    def source(site):
        choices = []
        for index, pattern in enumerate(patterns):
            if pattern[1] & 2 and pattern[0] <= site < pattern[0] + len(pattern[3]):
                rows = decoded.get(index, ())
                row = next((at for at, value in enumerate(rows) if pattern[0] + value[0] == site), None)
                if row is not None:
                    choices.append((len(pattern[3]), pattern, rows, row))
        if not choices:
            raise RuntimeError(f'Suffix feature anchor {site:#x} has no complete source instruction')
        return min(choices, key=lambda value: value[0])[1:]

    def direct(pattern, row):
        position, raw, _ = row
        if len(raw) != 5 or raw[0] != 0xe8:
            raise RuntimeError('Suffix feature anchor is not an actual direct call')
        return pattern[0] + position + 5 + int.from_bytes(raw[1:], 'little', signed=True)

    def literal(address):
        values = set()
        for reference, flags, _, raw, _, _ in patterns:
            if flags & 4 and reference <= address < reference + len(raw):
                value = raw[address - reference:]
                end = value.find(b'\0')
                if end >= 7 and all(32 <= byte <= 126 for byte in value[:end]):
                    values.add(value[:end + 1])
        if len(values) != 1:
            raise RuntimeError(f'Suffix feature literal {address:#x} lacks one reviewed immutable identity')
        return next(iter(values))

    from pe_instruction_match import _memory_displacement, _branch_displacement
    result = []
    for name, prefixes, sinks, spans, cleanup, declared in groups:
        owners, appends, constructors, tags = set(), set(), set(), set()
        texts = []
        for site in prefixes:
            pattern, rows, at = source(site)
            owners.add(pattern[2]); appends.add(direct(pattern, rows[at]))
            candidates = []
            for position, raw, assembly in rows[max(0, at - 3):at]:
                memory = _memory_displacement(raw)
                if re.match(r'\s*lea\s+rdx,', assembly) and memory and memory[1]:
                    offset = memory[0]
                    candidates.append(pattern[0] + position + len(raw) +
                                      int.from_bytes(raw[offset:offset + 4], 'little', signed=True))
            if len(candidates) != 1:
                raise RuntimeError(f'Suffix base text at {site:#x} has no unique literal argument')
            texts.append((site, literal(candidates[0])))
        # Several literal variants can converge on the same append call. The
        # declared calls own the feature, but its absence proof must account
        # for every source literal path, including a direct jump to shared
        # RCX preparation. Retain those paths from actual source instructions.
        pattern, rows, _ = source(prefixes[0])
        positions = {pattern[0] + row[0]: row for row in rows}
        variants = []
        reached_prefixes = set()
        for position, raw, assembly in rows:
            memory = _memory_displacement(raw)
            if not re.match(r'\s*lea\s+rdx,', assembly) or not memory or not memory[1]:
                continue
            address = pattern[0] + position
            cursor, output, visited = address + len(raw), None, set()
            while cursor in positions and cursor not in visited and len(visited) < 16:
                visited.add(cursor)
                row = positions[cursor]
                operation = row[2].strip().lower().split()[0]
                if cursor in prefixes and output is not None:
                    target = address + len(raw) + int.from_bytes(raw[memory[0]:memory[0] + 4], 'little', signed=True)
                    variants.append((address, literal(target)))
                    reached_prefixes.add(cursor)
                    break
                if re.match(r'\s*lea\s+rcx,\[(?:rbp|rsp)[^]]*\]', row[2]):
                    if output is not None:
                        break
                    output = cursor
                elif operation == 'jmp':
                    branch = _branch_displacement(row[1])
                    if not branch:
                        break
                    offset, width = branch
                    cursor += len(row[1]) + int.from_bytes(row[1][offset:offset + width], 'little', signed=True)
                    continue
                elif operation != 'nop':
                    break
                cursor += len(row[1])
        if reached_prefixes != set(prefixes):
            raise RuntimeError('Suffix base calls lack complete literal-to-local-string argument paths')
        texts = sorted(variants)
        for site in sinks:
            pattern, rows, at = source(site)
            owners.add(pattern[2]); constructors.add(direct(pattern, rows[at]))
            if at == 0 or at + 1 >= len(rows):
                raise RuntimeError('Incomplete suffix announcement constructor anchor')
            before, after = rows[at - 1], rows[at + 1]
            lea = re.match(r'\s*lea\s+rcx,(\[(?:rbp|rsp)[^]]*\])', before[2])
            store = re.match(r'\s*mov\s+DWORD PTR (\[(?:rbp|rsp)[^]]*\]),(0x[0-9a-f]+)', after[2])
            if not lea or not store or lea[1] != store[1] or rows[at][0] + 5 != after[0]:
                raise RuntimeError(f'Suffix announcement at {site:#x} lacks same-object initialization')
            tags.add(int(store[2], 16))
        if len(owners) != 1 or len(appends) != 1 or len(constructors) != 1 or len(tags) != 1:
            raise RuntimeError('Suffix feature anchors do not describe one native return-message operation')
        if declared != [next(iter(appends)), next(iter(constructors)), cleanup]:
            raise RuntimeError('Suffix feature callee requirements disagree with its complete source instructions')
        owner = next(iter(owners))
        for site, width in spans:
            pattern, rows, at = source(site)
            if pattern[2] != owner or not 5 <= width <= 64:
                raise RuntimeError('Suffix hook lies outside its independently owned caller')
        result.append((semantic_id(name), owner, next(iter(appends)), next(iter(constructors)),
                       cleanup, next(iter(tags)), texts, spans))
    return result


def _requirements(root):
    result = {}
    for path in sorted((root / 'src').iterdir()):
        if path.suffix not in ('.inc', '.cpp', '.h'):
            continue
        tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8')))
        pairs = _pairs(tokens)
        for begin, end in pairs.items():
            if begin >= end or tokens[begin] != '{':
                continue
            parts = _parts(tokens, pairs, begin + 1, end)
            if len(parts) < 5:
                continue
            site = _number(tokens[slice(*parts[0])])
            if not site or _number(tokens[slice(*parts[1])]) != 0:
                continue
            wrapper = tokens[slice(*parts[2])]
            if len(wrapper) < 4 or wrapper[:2] != ['native_history_formatter_callback', '(']:
                continue
            method = wrapper[2]
            if method not in ('"getSentence"', '"getPhrase"'):
                raise RuntimeError(f'Unknown named history formatter contract at {site:#x}')
            original = tokens[slice(*parts[4])]
            if not original or original[0] != '{' or original[-1] != '}':
                raise RuntimeError(f'Named formatter needs literal source instruction bytes at {site:#x}')
            numbers = [_number([value]) for value in original[1:-1] if value != ',']
            if not 5 <= len(numbers) <= 64 or any(value is None or not 0 <= value <= 255 for value in numbers):
                raise RuntimeError(f'Invalid named formatter source span at {site:#x}')
            value = method[1:-1], bytes(numbers)
            previous = result.setdefault(site, value)
            if previous != value:
                raise RuntimeError(f'Conflicting named formatter contract at {site:#x}')
    return result


def _source(pattern, rows, site, original):
    reference, flags, owner, raw, mask, fixups = pattern
    if not flags & 2 or not owner or not rows:
        return None
    offset = site - reference
    if offset < 0 or offset + len(original) > len(raw) or raw[offset:offset + len(original)] != original:
        return None
    positions = {row[0]: index for index, row in enumerate(rows)}
    first = positions.get(offset)
    last = next((index for index, row in enumerate(rows)
                 if row[0] + len(row[1]) == offset + len(original)), None)
    if first is None or last is None or last < first:
        return None
    call_position, encoded, assembly = rows[last]
    # The final operation must be an actual indirect CALL, including the
    # optional REX prefix. An adjacent direct call has a different contract.
    opcode = 1 if 0x40 <= encoded[0] <= 0x4f else 0
    if opcode + 1 >= len(encoded) or encoded[opcode] != 0xff or (encoded[opcode + 1] >> 3) & 7 != 2:
        return None
    boundaries = {0}
    for index, row in enumerate(rows[:last]):
        operation = row[2].strip().lower().split()[0]
        opcode = 1 if 0x40 <= row[1][0] <= 0x4f else 0
        indirect = (opcode + 1 < len(row[1]) and row[1][opcode] == 0xff and
                    (row[1][opcode + 1] >> 3) & 7 == 2)
        # Retain direct constructor/helper calls as independent identities.
        # Stopping at each CALL would make repeated formatter preparations in
        # one caller indistinguishable even when their enclosing blocks differ.
        if operation.startswith(('j', 'loop', 'ret')) or operation in ('int3', 'ud2') or indirect:
            boundaries.add(index + 1)
        if index + 1 < len(rows) and row[0] + len(row[1]) != rows[index + 1][0]:
            boundaries.add(index + 1)
    # A branch can enter in the middle of a lexical sequence. Its target is
    # another block start even when the branch itself lies after this call.
    from pe_instruction_match import _branch_displacement
    for position, encoded, assembly in rows:
        branch = _branch_displacement(encoded)
        if branch and not re.match(r'\s*call\b', assembly):
            at, width = branch
            target = position + len(encoded) + int.from_bytes(encoded[at:at + width], 'little', signed=True)
            if target in positions:
                boundaries.add(positions[target])
    start = max(value for value in boundaries if value <= first)
    # Preserve a bounded conditional predecessor when this is its fallthrough
    # edge. It often owns the event lookup / named string that distinguishes
    # two otherwise identical virtual calls in the same logical caller.
    for _ in range(2):
        if not start:
            break
        previous = rows[start - 1]
        operation = previous[2].strip().lower().split()[0]
        if not operation.startswith('j') or operation == 'jmp' or previous[0] + len(previous[1]) != rows[start][0]:
            break
        earlier = max(value for value in boundaries if value < start)
        if last - earlier + 1 > 96:
            break
        start = earlier
    selected = rows[start:last + 1]
    if len(selected) > 96 or any(left[0] + len(left[1]) != right[0]
                                 for left, right in zip(selected, selected[1:])):
        return None
    begin, end = selected[0][0], call_position + len(rows[last][1])
    relocated = [(at - begin, width, next_at - begin if next_at else 0, target, kind)
                 for at, width, next_at, target, kind in fixups if begin <= at and at + width <= end]
    described = {at + byte for at, width, _, _, _ in relocated for byte in range(width)}
    if any(value and index not in described for index, value in enumerate(mask[begin:end])):
        return None
    context_first, context_last = first, last
    while context_first and first - context_first < 96:
        previous, current = rows[context_first - 1], rows[context_first]
        if previous[0] + len(previous[1]) != current[0]:
            break
        context_first -= 1
    while context_last + 1 < len(rows) and context_last - last < 96:
        current, following = rows[context_last], rows[context_last + 1]
        if current[0] + len(current[1]) != following[0]:
            break
        context_last += 1
    cb, ce = rows[context_first][0], rows[context_last][0] + len(rows[context_last][1])
    context_fixups = [(at - cb, width, next_at - cb if next_at else 0, target, kind)
                      for at, width, next_at, target, kind in fixups if cb <= at and at + width <= ce]
    return (owner, reference + begin, call_position - begin, raw[begin:end], mask[begin:end], relocated,
            reference + cb, raw[cb:ce], context_fixups)


def build_method_call_evidence(root, metadata, patterns, decoded, known=(), objdump=None):
    requirements = _requirements(root)
    history = next(spec for spec in metadata['types'] if spec['name'] == 'history_event')
    methods = {method['name']: method for method in history['methods']}
    sources = {}
    for site, (name, original) in requirements.items():
        candidates = []
        for index, pattern in enumerate(patterns):
            if pattern[0] <= site < pattern[0] + len(pattern[3]):
                candidate = _source(pattern, decoded.get(index, ()), site, original)
                if candidate is not None:
                    candidates.append(candidate)
        if not candidates:
            raise RuntimeError(f'Named history call {site:#x} has no retained complete source preparation')
        candidate = min(candidates, key=lambda value: len(value[3]))
        if any(value != candidate for value in candidates if len(value[3]) == len(candidate[3])):
            raise RuntimeError(f'Named history call {site:#x} has ambiguous source preparation')
        sources[site] = candidate
    frames = {owner: (register, ready, end) for owner, register, ready, end in
              reference_frame_registers(root, known, [value[0] for value in sources.values()],
                                        patterns=patterns, decoded=decoded, objdump=objdump)}
    content = bytearray(b'DFCNMC01')
    def number(value):
        content.extend(struct.pack('<I', value))
    def blob(value):
        number(len(value)); content.extend(value)
    number(3)
    number(len(requirements))
    for site, (name, original) in sorted(requirements.items()):
        owner, reference, call, raw, mask, fixups, context_reference, context, context_fixups = sources[site]
        method = methods[name]
        frame, ready, end = frames.get(owner, (0, 0, 0))
        values = (site, len(original), owner, history['id'], semantic_id(name), method['slot'],
                  method['parameter_shape'], method['argument_count'], frame, ready, end, reference, call)
        content.extend(struct.pack('<13I', *values))
        blob(raw); blob(mask)
        number(len(fixups))
        for fixup in fixups:
            content.extend(struct.pack('<5I', *fixup))
        number(context_reference)
        blob(context)
        number(len(context_fixups))
        for fixup in context_fixups:
            content.extend(struct.pack('<5I', *fixup))
    features = _suffix_features(root, patterns, decoded)
    number(len(features))
    for identity, owner, append, constructor, cleanup, tag, texts, spans in features:
        content.extend(struct.pack('<6I', identity, owner, append, constructor, cleanup, tag))
        number(len(texts))
        for site, text in texts:
            number(site); blob(text)
        number(len(spans))
        for site, width in spans:
            content.extend(struct.pack('<2I', site, width))
    print(f'Generated named virtual-call evidence: {len(requirements)} complete receiver/argument preparations.', flush=True)
    return bytes(content)
