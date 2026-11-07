"""Source-owned chooser details, produced only by the normal catalog build."""
from __future__ import annotations

import json
import re
import struct

from build_history_layouts import semantic_id
from native_pe_coordinates import _TOKEN, _number, _pairs, _parts, _windows_source
from native_inline_resize_evidence import _requirements, _shape


def _declarations(root):
    path = root / 'src/native_caption_profile.inc'
    tokens = _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8-sig')))
    pairs = _pairs(tokens)
    result = []
    for at, token in enumerate(tokens[:-1]):
        if token != 'DFCN_NATIVE_CHOOSER_SUFFIX' or tokens[at + 1] != '(':
            continue
        parts = _parts(tokens, pairs, at + 2, pairs[at + 1])
        if len(parts) != 7 or parts[0][1] != parts[0][0] + 1:
            raise RuntimeError('Chooser suffix needs a name and six source coordinates')
        name = json.loads(tokens[parts[0][0]])
        numbers = [_number(tokens[begin:end]) for begin, end in parts[1:]]
        if not name or any(not value for value in numbers):
            raise RuntimeError('Chooser suffix coordinates must be literal source identities')
        result.append((name, *numbers))
    return result


def build_chooser_feature_evidence(root, known, patterns, decoded, required, inline_blob, objdump=None):
    from native_pe_seed_evidence import Reader
    from native_reference_semantics import verified_reference_instruction_sites
    reader = Reader(inline_blob)
    magic, version = reader.take(8), reader.number()
    if magic != b'DFCNIR01' or version not in (2, 3):
        raise RuntimeError('Chooser suffix needs formatter-owned inline evidence')
    inline = {}
    for _ in range(reader.number()):
        reference, owner, draw, callee, flags = struct.unpack('<5I', reader.take(20))
        raw = reader.blob()
        producer, argument, resize = struct.unpack('<3I', reader.take(12))
        if version >= 3:
            reader.number()  # Optional immediate source width; chooser uses a register width.
        inline[reference] = (owner, draw, callee, flags, raw, producer, argument, resize)
    requirements = _requirements(root)
    contracts = []
    for name, owner, primary, grow, footer, anchor, end in _declarations(root):
        source = inline.get(primary)
        if not source or source[0] != owner or not source[5] or not owner < primary < source[1] < footer <= anchor < end:
            raise RuntimeError('Chooser main name lacks an independently received formatter/string contract')
        bodies = [(index, item) for index, item in enumerate(patterns)
                  if item[0] == owner and item[1] & 2 and end <= owner + len(item[3])]
        if len(bodies) != 1:
            raise RuntimeError('Chooser source owner is not a complete unique canonical body')
        index, body = bodies[0]
        rows = {owner + offset: (raw, assembly) for offset, raw, assembly in decoded[index]}
        cursor, sites = anchor, []
        while cursor < end:
            if cursor not in rows or cursor + len(rows[cursor][0]) > end:
                raise RuntimeError('Chooser footer does not end at complete source instruction boundaries')
            sites.append(cursor)
            cursor += len(rows[cursor][0])
        if cursor != end or not sites:
            raise RuntimeError('Chooser footer has no complete source continuation')
        # The final main-name destruction is immediately before the footer.
        # It must pass the same native local that the retained name resize owns.
        cleanup_call = [address for address, (raw, _) in rows.items()
                        if address + len(raw) == footer and len(raw) == 5 and raw[0] == 0xe8]
        if len(cleanup_call) != 1:
            raise RuntimeError('Chooser footer has no final native-string cleanup')
        call = cleanup_call[0]
        preparation = [(address, raw, assembly) for address, (raw, assembly) in rows.items()
                       if address + len(raw) == call]
        shape = _shape(source[4])
        from native_inline_resize_evidence import _frame_address
        if len(preparation) != 1 or preparation[0][2].lower().split(None, 1)[0] != 'lea':
            raise RuntimeError('Chooser cleanup does not receive its native string')
        if preparation[0][2].lower().split(None, 1)[1].split(',', 1)[0].strip() != 'rcx':
            raise RuntimeError('Chooser cleanup has no native this argument')
        operand = preparation[0][2].split(',', 1)[1].split('#', 1)[0].strip()
        if _frame_address(operand) != (shape[0], shape[2]):
            raise RuntimeError('Chooser cleanup and main-name string disagree')
        sites.extend((preparation[0][0], call, grow))
        verified = verified_reference_instruction_sites(root, known, sites, patterns, decoded, objdump=objdump)
        if set(sites) - set(verified):
            raise RuntimeError('Chooser footer lacks exact reviewed source instruction evidence')
        cleanup = call + 5 + struct.unpack_from('<i', rows[call][0], 1)[0]
        grow_raw = rows.get(grow, (b'', ''))[0]
        if len(grow_raw) != 5 or grow_raw[0] != 0xe8 or not primary < grow < source[1]:
            raise RuntimeError('Chooser name grow arm has no explicit source CALL')
        append = grow + 5 + struct.unpack_from('<i', grow_raw, 1)[0]
        begin = source[1] + 5
        draw_next = rows.get(begin, (b'', ''))[0]
        if not draw_next:
            raise RuntimeError('Chooser name draw has no complete source return boundary')
        spans = [(address, address + width) for address, width in required
                 if begin < address < footer and address + width <= footer]
        if any(address == begin and width != 1 for address, width in required):
            raise RuntimeError('Chooser name return boundary also owns an unadapted instruction span')
        owned = sorted(reference for reference in requirements if begin <= reference < footer)
        if len(owned) < 2:
            raise RuntimeError('Chooser details do not own their complete separate inline operations')
        for reference in owned:
            raw, _ = requirements[reference]
            if reference + len(raw) > footer:
                raise RuntimeError('Chooser inline crosses the owned suffix boundary')
            spans.append((reference, reference + len(raw)))
        merged = []
        for left, right in sorted(spans):
            if merged and left <= merged[-1][1]:
                merged[-1] = merged[-1][0], max(right, merged[-1][1])
            else:
                merged.append((left, right))
        raw = body[3][anchor - owner:end - owner]
        fixups = [(offset + owner - anchor, width, following + owner - anchor if following else 0, target, kind)
                  for offset, width, following, target, kind in body[5]
                  if anchor <= owner + offset and owner + offset + width <= end]
        if len({target for _, _, _, target, kind in fixups if not kind & 0x100}) < 2:
            raise RuntimeError('Chooser footer needs independent global texture/output identities')
        grow_next = rows.get(grow + 5, (b'', ''))[0]
        if not grow_next:
            raise RuntimeError('Chooser grow arm has no complete source continuation')
        contracts.append((semantic_id(name), owner, primary, source[1], draw_next[0], grow, append, grow_next[0], cleanup, begin, footer,
                          anchor, raw, fixups, merged, owned))
    content = bytearray(b'DFCNCF01' + struct.pack('<II', 3, len(contracts)))
    for identity, owner, primary, draw, draw_next, grow, append, grow_next, cleanup, begin, footer, anchor, raw, fixups, spans, owned in contracts:
        content.extend(struct.pack('<12I', identity, owner, primary, draw, draw_next, grow, append, grow_next, cleanup, begin, footer, anchor))
        content.extend(struct.pack('<I', len(raw)) + raw)
        content.extend(struct.pack('<I', len(fixups)))
        for item in fixups:
            content.extend(struct.pack('<5I', *item))
        content.extend(struct.pack('<I', len(spans)))
        for span in spans:
            content.extend(struct.pack('<2I', *span))
        content.extend(struct.pack('<I', len(owned)))
        for reference in owned:
            content.extend(struct.pack('<I', reference))
    rows = _row_contracts(root, known, patterns, decoded, required, inline, objdump)
    content.extend(struct.pack('<I', len(rows)))
    for row in rows:
        content.extend(row)
    print(f'Prepared {len(contracts)} chooser second-line and {len(rows)} complete row ownership contracts.', flush=True)
    return bytes(content)


def _row_contracts(root, known, patterns, decoded, required, inline, objdump):
    """Keep source ownership separate from the target's compiler forms.

    The declarations name a complete source construction interval. Neither a
    release number nor the spelling of a target caption grants a row role.
    Every instruction in the source natural loop is reviewed against the
    exact reference image before its calls, literal arguments and optional
    suffix are retained.
    """
    from native_reference_semantics import verified_reference_instruction_sites
    from native_inline_resize_evidence import _call_arguments, _frame_address
    from pe_instruction_match import _branch_displacement
    tokens = _TOKEN.findall(_windows_source((root / 'src/native_caption_profile.inc').read_text(encoding='utf-8-sig')))
    pairs = _pairs(tokens)
    declarations, variants = [], {}
    for at, token in enumerate(tokens[:-1]):
        if token == 'DFCN_NATIVE_CHOOSER_LITERAL_VARIANT' and tokens[at + 1] == '(':
            parts = _parts(tokens, pairs, at + 2, pairs[at + 1])
            if len(parts) != 3 or any(b != a + 1 or not tokens[a].startswith('"') for a, b in parts):
                raise RuntimeError('Chooser literal variant needs three explicit string literals')
            name, canonical, alternate = [json.loads(tokens[a]) for a, _ in parts]
            canonical, alternate = canonical.encode('utf-8') + b'\0', alternate.encode('utf-8') + b'\0'
            if not name or canonical == alternate or any(not 1 < len(v) <= 256 or b'\0' in v[:-1]
                                                        for v in (canonical, alternate)):
                raise RuntimeError('Invalid chooser UI literal variant')
            variants.setdefault(name, []).append((canonical, alternate))
            continue
        if token != 'DFCN_NATIVE_CHOOSER_ROW' or tokens[at + 1] != '(':
            continue
        parts = _parts(tokens, pairs, at + 2, pairs[at + 1])
        if len(parts) != 6:
            raise RuntimeError('Chooser row needs a name and five source coordinates/kind')
        name = json.loads(tokens[parts[0][0]])
        values = [_number(tokens[a:b]) for a, b in parts[1:]]
        if not name or any(not value for value in values) or values[-1] not in (1, 2):
            raise RuntimeError('Invalid chooser row source declaration')
        declarations.append((name, *values))
    if set(variants) - {entry[0] for entry in declarations}:
        raise RuntimeError('Chooser UI literal variant has no owning row contract')
    result = []
    for name, owner, primary, begin, construction_end, literal_kind in declarations:
        spec = inline.get(primary)
        if not spec or spec[0] != owner or len(spec[4]) != 5 or spec[4][0] != 0xe8 or not owner < begin < construction_end < primary < spec[1]:
            raise RuntimeError('Chooser row has no complete source resize CALL and draw')
        bodies = [(i, p) for i, p in enumerate(patterns) if p[0] == owner and p[1] & 2]
        if len(bodies) != 1:
            raise RuntimeError('Chooser row has no unique complete canonical owner')
        index, body = bodies[0]
        code = {owner + offset: (raw, asm) for offset, raw, asm in decoded[index]}
        branches, previous, predecessors = {}, {}, {}
        for pc, (raw, asm) in code.items():
            following = pc + len(raw)
            previous[following] = pc
            mnemonic = asm.split(None, 1)[0].lower()
            branch = _branch_displacement(raw)
            if mnemonic.startswith('j') and branch:
                pos, width = branch
                target = following + int.from_bytes(raw[pos:pos + width], 'little', signed=True)
                branches[pc] = target
                predecessors.setdefault(target, set()).add(pc)
            if mnemonic not in ('jmp', 'ret', 'retq', 'int3', 'ud2') and following in code:
                predecessors.setdefault(following, set()).add(pc)
        loops = []
        for latch, header in branches.items():
            if not header <= begin < primary < spec[1] < latch or header not in code:
                continue
            members, todo = {header}, [latch]
            while todo:
                pc = todo.pop()
                if pc in members:
                    continue
                members.add(pc)
                todo.extend(predecessors.get(pc, ()))
                if len(members) > 4096:
                    break
            if len(members) > 4096 or any(pc < header or pc > latch for pc in members):
                continue
            if any(p not in members for pc in members - {header} for p in predecessors.get(pc, ())):
                continue
            loops.append((len(members), header, latch, members))
        if not loops:
            raise RuntimeError('Chooser source name has no closed natural row loop')
        loops.sort(key=lambda value: value[:3])
        if len(loops) > 1 and loops[0][0] == loops[1][0]:
            raise RuntimeError('Chooser source row loop is ambiguous')
        _, header, latch, members = loops[0]
        if set(members) - verified_reference_instruction_sites(root, known, members, patterns, decoded, objdump):
            raise RuntimeError('Chooser row lacks complete reviewed source instructions')
        # The source declaration owns one complete construction graph, not a
        # convenient instruction window. Every arm must reach its declared
        # end, with no transfer into a half-constructed local.
        construction, active = set(), set()
        def construction_path(pc):
            if pc == construction_end:
                return
            if pc in active or not begin <= pc < construction_end or pc not in members:
                raise RuntimeError('Chooser source construction escapes or cycles')
            if pc in construction:
                return
            raw, asm = code[pc]
            op = asm.split(None, 1)[0].lower()
            if op.startswith(('ret', 'loop')) or op in ('int3', 'ud2') or (op in ('jmp', 'call') and pc not in branches and raw[0] != 0xe8):
                raise RuntimeError('Chooser source construction has an unclassified transfer')
            active.add(pc)
            if pc in branches:
                construction_path(branches[pc])
            if op != 'jmp':
                construction_path(pc + len(raw))
            active.remove(pc)
            construction.add(pc)
        construction_path(begin)
        if construction != {pc for pc in members if begin <= pc < construction_end}:
            raise RuntimeError('Chooser source construction contains an unreachable role')
        if any(parent not in construction for pc in construction - {begin}
               for parent in predecessors.get(pc, ())):
            raise RuntimeError('Chooser source construction has an external interior entry')
        if any(parent not in construction for parent in predecessors.get(construction_end, ())):
            raise RuntimeError('Chooser source construction end can bypass its lifetime')
        args = _call_arguments(code, primary)
        local = args.get('rcx')
        if not isinstance(local, tuple) or args.get('r8') != 0:
            raise RuntimeError('Chooser row resize lost its exact string/zero-fill arguments')

        def arguments(call):
            values, pc = {}, call
            for _ in range(24):
                if pc in branch_entries:
                    break
                pc = previous.get(pc)
                if pc is None:
                    break
                raw, asm = code[pc]
                parts = asm.split('#', 1)[0].strip().lower().split(None, 1)
                op = parts[0]
                operands = [v.strip() for v in parts[1].split(',')] if len(parts) == 2 else []
                if op.startswith(('j', 'ret', 'loop')) or op in ('call', 'int3', 'ud2'):
                    break
                if len(operands) != 2 or op in ('cmp', 'test', 'bt'):
                    continue
                for reg, aliases in (('rcx', ('rcx', 'ecx', 'cx', 'cl', 'ch')),
                                     ('rdx', ('rdx', 'edx', 'dx', 'dl', 'dh'))):
                    if reg in values or operands[0] not in aliases:
                        continue
                    value = None
                    if op == 'lea' and operands[0] == reg:
                        value = _frame_address(operands[1])
                        if value is None and '[rip' in operands[1]:
                            fixups = [f for f in body[5] if pc <= owner + f[0] < pc + len(raw) and not f[4] & 0x100]
                            if len(fixups) == 1:
                                value = ('literal', fixups[0][3])
                    values[reg] = value
            return values

        branch_entries = set(branches.values())
        calls, roles, literals, literal_references, constructor = [], set(), [], set(), 0
        for pc in sorted(members):
            raw, asm = code[pc]
            if len(raw) != 5 or raw[0] != 0xe8:
                continue
            target = pc + 5 + int.from_bytes(raw[1:], 'little', signed=True)
            if pc < construction_end:
                calls.append(target)
            if not begin <= pc < construction_end:
                continue
            passed = arguments(pc)
            if not constructor:
                if passed.get('rcx') != local:
                    raise RuntimeError('Chooser row begins without its exact string constructor')
                constructor = target
                continue
            if passed.get('rcx') == local and isinstance(passed.get('rdx'), tuple) and passed['rdx'][0] == 'literal':
                reference = passed['rdx'][1]
                payloads = [p[3] for p in patterns if p[0] == reference and p[1] & 4 and p[3].endswith(b'\0')]
                if len(set(payloads)) != 1 or not 1 < len(payloads[0]) <= 256:
                    raise RuntimeError('Chooser literal has no complete immutable source payload')
                literals.append((target, literal_kind, payloads[0]))
                literal_references.add(reference)
            else:
                output = [(reg, passed.get(reg)) for reg in ('rcx', 'rdx') if passed.get(reg) == local]
                if output:
                    if len(output) != 1:
                        raise RuntimeError('Chooser producer aliases both output parameters')
                    roles.add((target, 1 if output[0][0] == 'rcx' else 2))
        if not constructor or not roles or len(set(literals)) != 1:
            raise RuntimeError('Chooser source needs exact constructor, formatter and literal method roles')
        # A complete immutable argument supplies an independent source identity.
        # Repeated source literals would make this row role ambiguous even if
        # a target happened to leave only one matching construction.
        if len(literal_references) != 1 or sum(1 for f in body[5]
                if not f[4] & 0x100 and f[3] in literal_references) != 1:
            raise RuntimeError('Chooser source literal role is not independently unique')
        cleanup = []
        for pc in sorted(members):
            raw, _ = code[pc]
            if pc > spec[1] and len(raw) == 5 and raw[0] == 0xe8 and arguments(pc).get('rcx') == local:
                cleanup.append((pc, pc + 5 + int.from_bytes(raw[1:], 'little', signed=True)))
        if len(cleanup) != 1:
            raise RuntimeError('Chooser source row does not close one exact name lifetime')
        owned = sorted(ref for ref, other in inline.items() if other[0] == owner and spec[1] < ref < cleanup[0][0])
        draw_calls = {pc for pc in members if len(code[pc][0]) == 5 and code[pc][0][0] == 0xe8 and
                      pc + 5 + int.from_bytes(code[pc][0][1:], 'little', signed=True) == spec[2]}
        if len(owned) != 2 or draw_calls != {spec[1], *(inline[ref][1] for ref in owned)}:
            raise RuntimeError('Chooser source row does not own exactly a name and two status draws')
        spans = [(pc, pc + width) for pc, width in required if spec[1] + 5 < pc < cleanup[0][0] and pc + width <= cleanup[0][0]]
        spans.extend((ref, ref + len(inline[ref][4])) for ref in owned)
        merged = []
        for left, right in sorted(spans):
            if merged and left <= merged[-1][1]:
                merged[-1] = merged[-1][0], max(merged[-1][1], right)
            else:
                merged.append((left, right))
        writes = []
        for pc, (raw, asm) in code.items():
            if not begin <= pc < primary or '[rip' not in asm.split(',', 1)[0].lower():
                continue
            operands = [f[3] for f in body[5] if pc <= owner + f[0] < pc + len(raw) and not f[4] & 0x100]
            if len(operands) != 1 or not re.match(r'mov\s+dword ptr\s*\[rip', asm.lower()):
                raise RuntimeError('Unclassified write in chooser source construction')
            writes.extend(operands)
        receiver = arguments(spec[1]).get('rcx')
        if not isinstance(receiver, tuple) or receiver[0] != 'literal':
            raise RuntimeError('Chooser source draw has no independent global graphics receiver')
        fields = (semantic_id(name), owner, primary, spec[1], code[spec[1] + 5][0][0], spec[7], constructor,
                  cleanup[0][1], local[0], local[1] & 0xffffffff, header, latch, begin, construction_end, receiver[1])
        row = bytearray(struct.pack('<15I', *fields))
        for values, width in ((sorted(set(calls)), 1), (sorted(roles), 2), (sorted(set(writes)), 1), (merged, 2), (owned, 1)):
            row.extend(struct.pack('<I', len(values)))
            for value in values:
                row.extend(struct.pack('<' + 'I' * width, *((value,) if width == 1 else value)))
        method, kind, literal = literals[0]
        row.extend(struct.pack('<III', method, kind, len(literal)) + literal)
        declared = variants.get(name, [])
        if any(canonical != literal for canonical, _ in declared) or (declared and kind != 2):
            raise RuntimeError('Chooser UI variant disagrees with its exact source assignment role')
        alternates = sorted({alternate for _, alternate in declared})
        if len(alternates) != len(declared) or len(alternates) > 8:
            raise RuntimeError('Duplicate or excessive chooser UI literal variants')
        row.extend(struct.pack('<I', len(alternates)))
        for alternate in alternates:
            row.extend(struct.pack('<I', len(alternate)) + alternate)
        result.append(row)
    return result
