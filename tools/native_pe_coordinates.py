"""Collect reference PE resources consumed by the native binding sources.

This is a build-data input reader, not a C++ parser or a separate validation
command. ``collect_required_coordinates(root)`` returns {RVA: contiguous bytes}
for the Windows bindings whose lexical forms are known here. Unknown dynamic
expressions are left to their owning generator; numeric field offsets and ELF
alternatives are never promoted to executable resources by their magnitude.
"""
from __future__ import annotations

import ast
from pathlib import Path
import re


# Native types used by our ownership bindings but absent from the upstream
# symbol catalog. Coordinates come from each configured image's MSVC RTTI;
# the normal generator resolves the type name before admitting the pair.
PE_VTABLE_TYPE_ANCHORS = {
    0x163c1c0: (0x16370a0, '.?AVlabor_list_widget@@'),
}

# The native MessageBoxW patch owns these complete immutable UTF-16 literals.
# Their exact contents provide edition-independent identities even when the
# surrounding initializer differs and has no paired instruction reference.
PE_READONLY_LITERAL_ANCHORS = {
    0x16aba48: 'FATAL ERROR'.encode('utf-16-le') + b'\0\0',
    0x16ad410: 'Could not locate adventure start square'.encode('utf-16-le') + b'\0\0',
}

# Explicit virtual slots consumed by caption widgets. Other vtables retain
# only the extent requested by their owner; a short class must not inherit
# another widget's larger virtual interface merely because both have RTTI.
PE_VTABLE_CONSUMED_SLOTS = {
    0x15eef60: 4,
    0x1618aa0: 4,
    0x162dc10: 4,
    0x1710d18: 4,
    0x15eb4a8: 4,
    0x15f6ee8: 5,
    0x15f6f68: 4,
}


_TOKEN = re.compile(
    r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|'
    r'0[xX][0-9a-fA-F]+[uUlL]*|\d+[uUlL]*|[A-Za-z_]\w*|'
    r'::|->|==|!=|<=|>=|&&|\|\||[^\s]'
)
_COMMENTS = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*[\s\S]*?\*/')
_IDENTIFIER = re.compile(r'[A-Za-z_]\w*\Z')

# The shared search files intentionally retain both ABI alternatives without
# preprocessor gates. Select the PE aggregate, not arbitrary numeric ranges.
_SEARCH_ELEMENT = {
    'native_arena_tree_search_profile.inc': 0,
    'native_conversation_search_profile.inc': 0,
    'native_item_search_profile.inc': 0,
    'native_legends_search_profile.inc': 0,
    'native_symbol_search_profile.inc': 0,
    'native_unit_search_profile.inc': 0,
    'native_workshop_search_profile.inc': 0,
    'native_stocks_search_profile.inc': 1,
    # Their PE aggregates reside in the separately read *_profile_pe.inc.
    'native_material_search_profile.inc': None,
    'native_stockpile_search_profile.inc': None,
}
_EXCLUDED = {
    'native_dfhack_display_inputs.inc', # Current renderer instruction sites are discovered from function scopes.
    'native_dfhack_display_input_ui_profile.inc', # Canonical scope provenance, never target patch locations.
    'native_ime_adapter.inc',  # The fixed image coordinates belong to SDL2.dll.
    'native_pe_binding.h',    # Relocation interface and image metadata, not owners.
    'native_pe_resolver.h',   # Runtime seed/cache parsing uses numeric metadata.
    'native_pe_image.h',      # PE directory fields and SHA256, not game resources.
}


def _without_comments(text: str) -> str:
    return _COMMENTS.sub(lambda m: ' ' if m[0].startswith(('//', '/*')) else m[0], text)


def _condition(expression: str, defined: set[str]) -> bool:
    expression = re.sub(r'defined\s*(?:\(\s*(\w+)\s*\)|(\w+))',
        lambda m: '1' if (m[1] or m[2]) in defined else '0', expression)
    expression = re.sub(r'\b[A-Za-z_]\w*\b', lambda m: '1' if m[0] in defined else '0', expression)
    expression = expression.replace('&&', ' and ').replace('||', ' or ')
    expression = re.sub(r'!(?!=)', ' not ', expression).strip()
    try:
        node = ast.parse(expression, mode='eval').body
    except SyntaxError:
        return False

    def value(item):
        if isinstance(item, ast.Constant) and isinstance(item.value, (int, bool)):
            return bool(item.value)
        if isinstance(item, ast.UnaryOp) and isinstance(item.op, ast.Not):
            return not value(item.operand)
        if isinstance(item, ast.BoolOp):
            values = [value(child) for child in item.values]
            return all(values) if isinstance(item.op, ast.And) else any(values)
        return False

    return value(node)


def _windows_source(text: str, defined=None, keep_includes=False) -> str:
    defined = set(defined) if defined is not None else {'_WIN32', '_WIN64', '__MINGW32__', '__MINGW64__', '__GNUC__', '__x86_64__'}
    active = True
    stack = []
    lines = []
    for line in _without_comments(text).splitlines():
        directive = re.match(r'\s*#\s*(\w+)\s*(.*)', line)
        if not directive:
            if active:
                lines.append(line)
            continue
        kind, argument = directive.groups()
        if kind in ('if', 'ifdef', 'ifndef'):
            selected = (_condition(argument, defined) if kind == 'if'
                        else (argument.strip() in defined) == (kind == 'ifdef'))
            stack.append([active, selected])
            active = active and selected
        elif kind == 'elif' and stack:
            parent, taken = stack[-1]
            selected = not taken and _condition(argument, defined)
            stack[-1][1] = taken or selected
            active = parent and selected
        elif kind == 'else' and stack:
            parent, taken = stack[-1]
            active = parent and not taken
            stack[-1][1] = True
        elif kind == 'endif' and stack:
            active = stack.pop()[0]
        elif kind == 'define' and active:
            name = re.match(r'\w+', argument)
            if name:
                defined.add(name[0])
        elif kind == 'undef' and active:
            defined.discard(argument.strip())
        elif kind == 'include' and active and keep_includes:
            lines.append(line)
    return '\n'.join(lines)


def _pairs(tokens: list[str]) -> dict[int, int]:
    result, stack = {}, []
    closing = {')': '(', ']': '[', '}': '{'}
    for index, token in enumerate(tokens):
        if token in ('(', '[', '{'):
            stack.append((token, index))
        elif token in closing and stack and stack[-1][0] == closing[token]:
            _, begin = stack.pop()
            result[begin] = index
            result[index] = begin
    return result


def _parts(tokens, pairs, begin, end):
    """Split an initializer/call interior, respecting nested delimiters."""
    result, start, index = [], begin, begin
    while index < end:
        if tokens[index] in ('(', '[', '{') and index in pairs:
            index = pairs[index] + 1
            continue
        if tokens[index] == ',':
            if start < index:
                result.append((start, index))
            start = index + 1
        index += 1
    if start < end:
        result.append((start, end))
    return result


def _number(tokens, constants=None):
    if len(tokens) == 4 and tokens[:2] == ['uintptr_t', '('] and tokens[-1] == ')':
        return _number(tokens[2:3], constants)
    text = ''.join(tokens)
    if constants and text in constants:
        return constants[text]
    if re.fullmatch(r'(?:0[xX][0-9a-fA-F]+|\d+)[uUlL]*', text):
        return int(re.sub(r'[uUlL]+$', '', text), 16 if text.lower().startswith('0x') else 10)
    return None


def _byte_count(tokens, pairs, begin, end):
    while begin < end and tokens[begin] == '{' and pairs.get(begin) == end - 1:
        begin, end = begin + 1, end - 1
    parts = _parts(tokens, pairs, begin, end)
    values = [_number(tokens[a:b]) for a, b in parts]
    return len(values) if values and all(v is not None and 0 <= v <= 255 for v in values) else None


def _select_search_element(name: str, tokens: list[str], elf=False) -> list[str]:
    # PE unit search now consumes a typed callable contract. Its legacy ELF
    # alternatives remain in the platform-excluded aggregate below it.
    if name == 'native_unit_search_profile.inc' and not elf:
        return tokens
    if name not in _SEARCH_ELEMENT:
        return tokens
    pairs = _pairs(tokens)
    for index, token in enumerate(tokens):
        if token != 'bindings' or tokens[index + 1:index + 3] != ['[', ']']:
            continue
        begin = index + 3
        if tokens[begin:begin + 1] == ['=']:
            begin += 1
        if tokens[begin:begin + 1] != ['{'] or begin not in pairs:
            continue
        end = pairs[begin]
        selected = _SEARCH_ELEMENT[name]
        if elf:
            selected = 0 if name in ('native_stocks_search_profile.inc', 'native_material_search_profile.inc',
                                      'native_stockpile_search_profile.inc') else 1
        entries = _parts(tokens, pairs, begin + 1, end)
        # Missing the known lexical aggregate is not permission to admit ELF.
        if selected is not None and selected >= len(entries):
            raise ValueError(f'Cannot select Windows search binding in {name}')
        body = [] if selected is None else tokens[slice(*entries[selected])]
        return tokens[:begin + 1] + body + tokens[end:]
    raise ValueError(f'Cannot locate search bindings array in {name}')


def _assignment_name(tokens, index):
    end = index
    begin = end - 1
    if begin < 0 or not _IDENTIFIER.fullmatch(tokens[begin]):
        return None
    while begin >= 2 and tokens[begin - 1] in ('.', '::', '->') and _IDENTIFIER.fullmatch(tokens[begin - 2]):
        begin -= 2
    return ''.join(tokens[begin:end])


def _initializer_name(tokens, pairs, begin):
    before = begin - 1
    if before >= 0 and tokens[before] == '=':
        before -= 1
    if before >= 0 and tokens[before] == ']' and before in pairs:
        before = pairs[before] - 1
    return tokens[before] if before >= 0 and _IDENTIFIER.fullmatch(tokens[before]) else None


def _native_call_coordinates(tokens, pairs, constants, byte_arrays, add):
    """Read actual NativeCall aggregates, independent of callback spelling.

    The container's C++ type (or the typed native_reference_calls API) owns
    these records. An integer array alone is not a list of game coordinates;
    it is expanded only as the range of a loop that submits NativeCall sites.
    This collects requirements, never target addresses or executable bytes.
    """
    braces = sorted((a, b) for a, b in pairs.items() if a < b and tokens[a] == '{')

    def scope(index):
        containing = [(a, b) for a, b in braces if a < index < b]
        return max(containing, default=(-1, len(tokens)))

    def qualified(parts):
        value = ''.join(parts)
        return value if re.fullmatch(r'[A-Za-z_]\w*(?:(?:\.|->)[A-Za-z_]\w*)*', value) else None

    containers, initializers = [], []
    for index, token in enumerate(tokens):
        if token != 'NativeCall':
            continue
        after = index + 1
        collection = index > 0 and tokens[index - 1] == '<'
        if collection:
            # vector<NativeCall> and array<NativeCall, N>. No arbitrary
            # surrounding template or member named `calls` grants this type.
            if index < 2 or tokens[index - 2] not in ('vector', 'array'):
                continue
            while after < len(tokens) and tokens[after] not in ('>', ';', '{'):
                after += 1
            if after == len(tokens) or tokens[after] != '>':
                continue
            after += 1
        elif tokens[after:after + 1] == ['{']:
            initializers.append((after, pairs.get(after, after), False))
            continue
        while tokens[after:after + 1] in (['&'], ['*'], ['const']):
            after += 1
        if after >= len(tokens) or not _IDENTIFIER.fullmatch(tokens[after]):
            continue
        name, declaration = tokens[after], after
        after += 1
        if tokens[after:after + 1] == ['['] and after in pairs:
            collection = True
            after = pairs[after] + 1
        if tokens[after:after + 1] == ['=']:
            after += 1
        if tokens[after:after + 1] == ['{'] and after in pairs:
            initializers.append((after, pairs[after], collection))
        if collection:
            left, right = scope(declaration)
            arguments = [(a, b) for a, b in pairs.items()
                         if a < declaration < b and tokens[a] == '(']
            if arguments:
                # A typed parameter owns only its function body, not every
                # later local called `calls` in the same namespace/file.
                _, close = max(arguments)
                body = close + 1
                if tokens[body:body + 1] == ['{'] and body in pairs:
                    containers.append((name, body, pairs[body]))
            else:
                containers.append((name, declaration, right))

    # Includes typed parameters and profile members whose declaration lives
    # in another source file. The API's argument, not its identifier's name,
    # proves that these push_back records are NativeCalls.
    for index, token in enumerate(tokens):
        if token != 'native_reference_calls' or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        arguments = _parts(tokens, pairs, index + 2, pairs[index + 1])
        if not arguments:
            continue
        name = qualified(tokens[slice(*arguments[0])])
        if name:
            left, right = scope(index)
            containers.append((name, left, right))

    for index, token in enumerate(tokens):
        if token != '=' or tokens[index + 1:index + 2] != ['{'] or index + 1 not in pairs:
            continue
        name = _assignment_name(tokens, index)
        if name and any(key == name and left < index < right for key, left, right in containers):
            initializers.append((index + 1, pairs[index + 1], True))

    arrays = []
    for begin, end in braces:
        name = _initializer_name(tokens, pairs, begin)
        if not name:
            continue
        parts = _parts(tokens, pairs, begin + 1, end)
        values = [_number(tokens[a:b], constants) for a, b in parts]
        if values and all(value is not None for value in values):
            arrays.append((name, begin, scope(begin)[1], values))

    loops = []
    for index, token in enumerate(tokens):
        if token != 'for' or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        end = pairs[index + 1]
        colons = [at for at in range(index + 2, end) if tokens[at] == ':']
        if len(colons) != 1 or ';' in tokens[index + 2:end]:
            continue
        colon = colons[0]
        if colon == index + 2 or not _IDENTIFIER.fullmatch(tokens[colon - 1]):
            continue
        source = tokens[colon + 1:end]
        values = None
        if len(source) == 1:
            matches = [entry for entry in arrays if entry[0] == source[0] and entry[1] < index < entry[2]]
            if matches:
                values = max(matches, key=lambda entry: entry[1])[3]
        elif source[:1] == ['{'] and pairs.get(colon + 1) == end - 1:
            entries = _parts(tokens, pairs, colon + 2, end - 1)
            candidates = [_number(tokens[a:b], constants) for a, b in entries]
            if candidates and all(value is not None for value in candidates):
                values = candidates
        if values is None:
            continue
        begin = end + 1
        if tokens[begin:begin + 1] == ['{'] and begin in pairs:
            stop = pairs[begin]
        else:
            stop = begin
            while stop < len(tokens) and tokens[stop] != ';':
                if tokens[stop] in ('(', '[', '{') and stop in pairs:
                    stop = pairs[stop] + 1
                else:
                    stop += 1
        loops.append((begin, stop, tokens[colon - 1], values))

    def record(begin, end):
        parts = _parts(tokens, pairs, begin, end)
        if len(parts) < 3:
            return
        sites = [_number(tokens[slice(*parts[0])], constants)]
        if sites[0] is None:
            expression = ''.join(tokens[slice(*parts[0])])
            matches = [entry for entry in loops if entry[0] <= begin < entry[1] and entry[2] == expression]
            if matches:
                sites = max(matches, key=lambda entry: entry[0])[3]
        target = _number(tokens[slice(*parts[1])], constants)
        width = 5
        if len(parts) > 4:
            original = tokens[slice(*parts[4])]
            width = max(width, _byte_count(tokens, pairs, *parts[4]) or byte_arrays.get(''.join(original), 0))
        for site in sites:
            add(site, width)
        add(target)

    for begin, end, collection in initializers:
        if begin >= end:
            continue
        if not collection:
            record(begin + 1, end)
            continue
        entries = _parts(tokens, pairs, begin + 1, end)
        # std::array's extra aggregate braces do not introduce a record.
        if len(entries) == 1:
            a, b = entries[0]
            if tokens[a:a + 2] == ['{', '{'] and pairs.get(a) == b - 1:
                entries = _parts(tokens, pairs, a + 1, b - 1)
        for a, b in entries:
            if tokens[a:a + 1] == ['{'] and pairs.get(a) == b - 1:
                record(a + 1, b - 1)

    for index, token in enumerate(tokens):
        if token not in ('push_back', 'emplace_back') or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        if index < 2 or tokens[index - 1] not in ('.', '->'):
            continue
        start = index - 2
        while start >= 2 and tokens[start - 1] in ('.', '->') and _IDENTIFIER.fullmatch(tokens[start - 2]):
            start -= 2
        name = qualified(tokens[start:index - 1])
        if not name or not any(key == name and left < index < right for key, left, right in containers):
            continue
        begin, end = index + 2, pairs[index + 1]
        if tokens[begin:begin + 1] == ['{'] and pairs.get(begin) == end - 1:
            record(begin + 1, end - 1)
        elif token == 'emplace_back':
            record(begin, end)


def _local_resource_facts(tokens, pairs):
    """Resolve the consumed lexical value, not the last same-named local.

    This only sizes source requirements. It grants no target coordinates or
    instruction identity. Unknown constructions stay with their typed owner.
    """
    scopes = [(a, b) for a, b in pairs.items() if a < b and tokens[a] == '{']

    def scope(at):
        return max(((a, b) for a, b in scopes if a < at < b), default=(-1, len(tokens)))

    definitions = {}
    for at, token in enumerate(tokens):
        if token != '=':
            continue
        name = _assignment_name(tokens, at)
        if not name:
            continue
        begin, end = at + 1, at + 1
        if tokens[begin:begin + 1] == ['{'] and begin in pairs:
            end = pairs[begin] + 1
        else:
            while end < len(tokens) and tokens[end] not in (',', ';', '{'):
                if tokens[end] in ('(', '[') and end in pairs:
                    end = pairs[end] + 1
                else:
                    end += 1
        definitions.setdefault(name, []).append((at, scope(at), begin, end))
    for begin, end in scopes:
        name = _initializer_name(tokens, pairs, begin)
        if name:
            definitions.setdefault(name, []).append((begin, scope(begin), begin, end + 1))

    def definition(name, at):
        choices = [entry for entry in definitions.get(name, ())
                   if entry[0] < at and entry[1][0] < at < entry[1][1]]
        return max(choices, key=lambda entry: (entry[1][0], entry[0]), default=None)

    def number(expr, at, arguments=None, seen=frozenset()):
        direct = _number(expr)
        if direct is not None:
            return direct
        name = ''.join(expr)
        if arguments and name in arguments:
            return arguments[name][0]
        value = definition(name, at)
        if value is None or (name, value[0]) in seen:
            return None
        return number(tokens[value[2]:value[3]], value[0], arguments,
                      seen | {(name, value[0])})

    def byte_width(begin, end, at, arguments=None, seen=frozenset()):
        literal = _byte_count(tokens, pairs, begin, end)
        if literal:
            return literal
        while begin < end and tokens[begin] == '{' and pairs.get(begin) == end - 1:
            begin, end = begin + 1, end - 1
        expr = ''.join(tokens[begin:end])
        # A copied iterator range retains its source array's byte count.
        for form in (r'(?:std::)?begin\((\w+)\),(?:std::)?end\((\w+)\)',
                     r'(\w+)\.begin\(\),(\w+)\.end\(\)'):
            match = re.fullmatch(form, expr)
            if match and match[1] == match[2]:
                return named_width(match[1], at, arguments, seen)
        match = re.fullmatch(r'(\w+)\+(0[xX][0-9a-fA-F]+|\d+),\1\+(0[xX][0-9a-fA-F]+|\d+)', expr)
        if match:
            size = named_width(match[1], at, arguments, seen)
            left, right = int(match[2], 0), int(match[3], 0)
            return right - left if size is not None and 0 <= left < right <= size else None
        name = re.sub(r'\.data\(\)$', '', expr)
        return named_width(name, at, arguments, seen)

    def named_width(name, at, arguments=None, seen=frozenset()):
        if arguments and name in arguments:
            return arguments[name][1]
        value = definition(name, at)
        if value is None or (name, value[0]) in seen:
            return None
        return byte_width(value[2], value[3], value[0], arguments,
                          seen | {(name, value[0])})

    def count(expr, at, arguments=None):
        value = number(expr, at, arguments)
        if value is not None:
            return value
        text = ''.join(expr)
        match = re.fullmatch(r'(?:sizeof\((\w+)\)|(\w+)\.size\(\)|std::size\((\w+)\))', text)
        if match:
            return named_width(next(value for value in match.groups() if value), at, arguments)
        return None

    return number, byte_width, count, scope, definition


def _wrapped_byte_requirements(tokens, pairs, facts, add):
    """Follow local lambda parameters only into the actual byte-proof API.

    A wrapper name or an integer by itself is never an address contract. This
    covers identity(rva, bytes) without listing any hook or version address.
    """
    number, byte_width, count, scope, definition = facts
    for at, token in enumerate(tokens):
        if token != '=' or tokens[at + 1:at + 2] != ['['] or at + 1 not in pairs:
            continue
        name = _assignment_name(tokens, at)
        arguments = pairs[at + 1] + 1
        if not name or tokens[arguments:arguments + 1] != ['('] or arguments not in pairs:
            continue
        end = pairs[arguments]
        body = end + 1
        if tokens[body:body + 1] != ['{'] or body not in pairs:
            continue
        params = _parts(tokens, pairs, arguments + 1, end)
        names = [tokens[b - 1] for a, b in params]
        if not all(_IDENTIFIER.fullmatch(value) for value in names):
            continue
        uses = []
        for use in range(body + 1, pairs[body]):
            if tokens[use] not in ('native_pe_match', 'native_pe_bytes', 'native_reference_bytes') or \
                    tokens[use + 1:use + 2] != ['('] or use + 1 not in pairs:
                continue
            uses.append((use, _parts(tokens, pairs, use + 2, pairs[use + 1])))
        if not uses:
            continue
        left, right = scope(at)
        for call in range(pairs[body] + 1, right):
            if tokens[call] != name or tokens[call + 1:call + 2] != ['('] or call + 1 not in pairs:
                continue
            bound = definition(name, call)
            if bound is None or bound[0] != at:
                continue
            values = _parts(tokens, pairs, call + 2, pairs[call + 1])
            if len(values) != len(names):
                continue
            actual = {key: (number(tokens[a:b], call), byte_width(a, b, call))
                      for key, (a, b) in zip(names, values)}
            for use, args in uses:
                match = tokens[use] == 'native_pe_match'
                position = 1 if match else 0
                if len(args) <= position + 1:
                    continue
                rva = number(tokens[slice(*args[position])], use, actual)
                width = byte_width(*args[position + 1], use, actual)
                if match and len(args) > 3:
                    width = count(tokens[slice(*args[3])], use, actual) or width
                if width:
                    add(rva, width)


def _file_coordinates(name: str, tokens: list[str], required: dict[int, int], elf=False) -> None:
    pairs = _pairs(tokens)
    constants, byte_arrays = {}, {}

    origin = 0x400000 if elf and ('search_profile' in name or name == 'native_history_event_profiles_elf.inc') else 0

    def add(rva, width=1, bias=None):
        if rva is not None and 0 < rva < 0x10000000 and width and width > 0:
            rva += origin if bias is None else bias
            required[rva] = max(required.get(rva, 0), width)

    # Resolve only single-valued local assignments; a later unknown assignment
    # does not turn a structure coordinate into a game address.
    for index, token in enumerate(tokens):
        if token != '=':
            continue
        variable = _assignment_name(tokens, index)
        if not variable:
            continue
        end = index + 1
        while end < len(tokens) and tokens[end] not in (',', ';', '{'):
            end += 1
        value = _number(tokens[index + 1:end], constants)
        if value is not None:
            constants[variable] = value
        if tokens[index + 1:index + 2] == ['{'] and index + 1 in pairs:
            size = _byte_count(tokens, pairs, index + 1, pairs[index + 1] + 1)
            if size:
                byte_arrays[variable] = size

    # Array declarations can use direct/list initialization rather than '='.
    for begin, end in pairs.items():
        if tokens[begin] != '{' or begin >= end:
            continue
        size = _byte_count(tokens, pairs, begin, end + 1)
        if not size:
            continue
        variable = _initializer_name(tokens, pairs, begin)
        if variable:
            byte_arrays[variable] = size

    _native_call_coordinates(tokens, pairs, constants, byte_arrays, add)
    local_facts = _local_resource_facts(tokens, pairs)
    local_number, local_bytes, local_count, _, _ = local_facts
    if not elf:
        _wrapped_byte_requirements(tokens, pairs, local_facts, add)

    call_arrays = {
        'native_rich_profile.inc': {'wrap_calls', 'draw_calls'},
        'native_history_profile.inc': {'item_calls'},
        'native_caption_profile.inc': {'roster_shorten_calls'},
    }.get(name, set())
    for begin, end in pairs.items():
        if tokens[begin] != '{' or begin >= end or _initializer_name(tokens, pairs, begin) not in call_arrays:
            continue
        left, right = begin, end + 1
        while tokens[left] == '{' and pairs.get(left) == right - 1:
            left, right = left + 1, right - 1
        for a, b in _parts(tokens, pairs, left, right):
            add(_number(tokens[a:b], constants), 5)

    apis = {
        'native_pe_rva': 0, 'native_pe_bytes': 0, 'native_reference_rva': 0,
        'native_reference_bytes': 0, 'native_pe_address': 1, 'native_pe_type_identity': 1,
        'native_reference_address': 1, 'native_pe_match': 1,
        'native_fortress_alert_address': 2 if elf else 1,
    }
    if elf:
        apis.update({'native_reference_va': 0, 'native_elf_history_address': 0})
    for index, token in enumerate(tokens):
        if token not in apis or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        args = _parts(tokens, pairs, index + 2, pairs[index + 1])
        position = apis[token]
        if len(args) <= position:
            continue
        rva = local_number(tokens[slice(*args[position])], index)
        width = 1
        if token in ('native_pe_bytes', 'native_reference_bytes', 'native_pe_match') and len(args) > position + 1:
            width = local_bytes(*args[position + 1], index) or 1
        if token == 'native_pe_match' and len(args) > 3:
            width = local_count(tokens[slice(*args[3])], index) or width
        bias = (0x400000 if token in ('native_reference_rva', 'native_reference_address') else 0) if elf else None
        add(rva, width, bias)

    for begin, end in pairs.items():
        if tokens[begin] != '{' or begin >= end:
            continue
        parts = _parts(tokens, pairs, begin + 1, end)
        if not parts:
            continue
        values = [_number(tokens[a:b], constants) for a, b in parts]
        first = values[0]
        # The history range-for lists feed NativeCall.site through a variable.
        # Only this explicit uintptr_t(...) list form is admitted here.
        if name in ('native_history_profile.inc', 'native_history_profile_elf.inc') and all(
                tokens[a:b][:2] == ['uintptr_t', '('] and value is not None and value >= 0x10000
                for (a, b), value in zip(parts, values)):
            for value in values:
                add(value, 5)
            continue
        # A call-site variable does not obscure its literal target coordinate.
        if len(parts) >= 3 and values[1] is not None:
            wrapper = ''.join(tokens[slice(*parts[2])])
            if (('reinterpret_cast<' in wrapper and ('capture_' in wrapper or 'dfcn_' in wrapper))
                    or 'native_history_formatter_callback(' in wrapper):
                size = _byte_count(tokens, pairs, *parts[4]) if len(parts) > 4 else None
                add(first, max(5, size or 0))
                add(values[1])
                continue
        if first is None or first < 0x10000:
            continue
        if name in ('native_history_event_profiles.inc', 'native_history_event_profiles_elf.inc') and len(parts) == 6 and all(v is not None for v in values[:5]):
            # Windows event identity uses verified RTTI -> canonical event
            # kind. Its semantic catalog owns the vtable root and virtual ABI;
            # old immediate-return bytes and sentence bodies are not consumed.
            if elf:
                add(first, 0xd8)
                add(values[1], values[4])
                add(values[2])
            continue
        if name == 'native_stocks_search_profile.inc' and len(parts) == 3 and values[1] is not None and values[1] > first:
            add(first, values[1] - first)
            continue
        # Signature and inline patch records both begin {RVA, {byte,...}}.
        if len(parts) >= 2:
            size = _byte_count(tokens, pairs, *parts[1])
            # Vector signatures may copy a named std::array's iterator range.
            if not size:
                source = ''.join(tokens[slice(*parts[1])])
                match = re.fullmatch(r'\{([A-Za-z_]\w*)\.begin\(\),\1\.end\(\)\}', source)
                if match:
                    size = byte_arrays.get(match[1])
            if size and tokens[parts[1][0]] == '{':
                add(first, size)
                continue
        # NativeCall: site, target, wrapper, optional relay arguments,
        # optional original inline operation and optional relay suffix.
        if len(parts) >= 3 and values[1] is not None:
            wrapper = ''.join(tokens[slice(*parts[2])])
            if name == 'native_caption_profile.inc' and wrapper.startswith('NativeFieldKind::'):
                add(first, 5)
                add(values[1], 5)
                continue
        if elf and name == 'native_history_profile_elf.inc' and len(parts) == 2 and values[1] is not None:
            add(first, 5)  # ItemCall {absolute call address, semantic role}.
        # The selected search ABI has scalar arrays of native resource labels.
        if ('search_profile' in name or name == 'native_caption_profile.inc') and len(values) >= 2 and all(v is not None and (v == 0 or v >= 0x10000) for v in values):
            for value in values:
                add(value)

    if name == 'native_history_page_adapter.inc':
        # Binding {symbol, PE RVA, ELF VA}; only the PE column is consumed.
        for begin, end in pairs.items():
            if tokens[begin] != '{' or begin >= end:
                continue
            parts = _parts(tokens, pairs, begin + 1, end)
            if len(parts) == 3 and ''.join(tokens[slice(*parts[0])]).startswith('Symbol::'):
                add(_number(tokens[slice(*parts[2 if elf else 1])]))

    # These profile scalar members are mapped through the local bind_rva
    # lambda, so there is no literal argument at its native_pe_rva call.
    if name == 'native_caption_profile.inc':
        for variable, value in constants.items():
            if variable in {'profile.resize_target', 'profile.draw_target',
                    'profile.map_track_shorten_call', 'profile.map_track_shorten_target',
                    'profile.adventure_look_track_shorten_call',
                    'profile.adventure_look_track_shorten_target',
                    'profile.roster_shorten_target', 'profile.announcement_popup_call',
                    'profile.announcement_popup_target'}:
                add(value, 5 if variable.endswith('_call') else 1)


def collect_required_coordinates(root: Path, exclude_names=()) -> dict[int, int]:
    """Return recognized Windows game RVAs and their minimum continuous spans.

    ``root`` is the repository root, not the source directory. No binaries are
    opened, no build commands are executed, and this module writes no files.
    """
    required: dict[int, int] = {}
    for path in sorted((Path(root) / 'src').iterdir()):
        if path.suffix not in ('.h', '.inc', '.cpp') or path.name in _EXCLUDED or path.name in exclude_names:
            continue
        if '_elf' in path.stem or 'build_bindings' in path.stem:
            continue
        text = _windows_source(path.read_text(encoding='utf-8-sig'))
        # Generated layout binding calls contain either virtual-slot offsets
        # or vtable/global RVAs. Only the latter are executable resources.
        if path.name == 'native_history_layouts.inc':
            for match in re.finditer(r'\bDFCN_NATIVE_BINDING\s*\(\s*(0x[0-9a-fA-F]+|\d+)\s*,', text):
                rva = int(match[1], 0)
                if rva >= 0x10000:
                    required[rva] = max(required.get(rva, 0), 1)
            continue
        tokens = _select_search_element(path.name, _TOKEN.findall(text))
        _file_coordinates(path.name, tokens, required)
    # These complete inline operations have a distinct runtime contract:
    # actual string object, width register and paired draw are all proved.
    # Their historical byte lengths must not also require an unchanged frame.
    from native_inline_resize_evidence import collect_inline_resize_coordinates
    for reference in collect_inline_resize_coordinates(Path(root)):
        required.pop(reference, None)
    return dict(sorted(required.items()))


def collect_identity_only_coordinates(root: Path) -> set[int]:
    """Explicit vptr-comparison contracts with no additional byte/slot owner.

    Merely requesting one byte does not prove identity-only use. The owning
    C++ call must name this API, and another resource contract takes priority.
    """
    identities, ordinary = set(), {}
    for path in sorted((Path(root) / 'src').iterdir()):
        if path.suffix not in ('.h', '.inc', '.cpp') or path.name in _EXCLUDED:
            continue
        if '_elf' in path.stem or 'build_bindings' in path.stem or path.name == 'native_history_layouts.inc':
            continue
        tokens = _select_search_element(path.name, _TOKEN.findall(_windows_source(path.read_text(encoding='utf-8-sig'))))
        pairs = _pairs(tokens)
        for index, token in enumerate(tokens):
            if token != 'native_pe_type_identity' or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
                continue
            args = _parts(tokens, pairs, index + 2, pairs[index + 1])
            value = _number(tokens[slice(*args[1])]) if len(args) == 2 else None
            if value is None or value < 0x10000:
                raise ValueError(f'Type-identity binding needs a literal canonical coordinate in {path.name}')
            identities.add(value)
        ordinary_tokens = ['identity_contract' if token == 'native_pe_type_identity' else token for token in tokens]
        _file_coordinates(path.name, ordinary_tokens, ordinary)
    for reference in identities:
        if any(address <= reference < address + length for address, length in ordinary.items()):
            raise ValueError(f'Type identity also has a direct byte/slot consumer at {reference:#x}')
    return identities
