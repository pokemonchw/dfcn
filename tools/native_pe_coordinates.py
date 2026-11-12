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
    'native_ime_adapter.inc',  # The fixed image coordinates belong to SDL2.dll.
    'native_pe_binding.h',    # Relocation interface and image metadata, not owners.
    'native_pe_resolver.h',   # Runtime seed/cache parsing uses numeric metadata.
    'native_pe_5317_bindings.inc',  # Reviewed migration pairs, not reference consumers.
    'native_pe_classic_5317_bindings.inc',  # Edition-specific 53.17 migration pairs.
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


def _constant_alternatives(tokens, constants):
    """Read scalar caller coordinates, including both arms of a conditional."""
    pairs = _pairs(tokens)
    while tokens[:1] == ['('] and pairs.get(0) == len(tokens) - 1:
        tokens = tokens[1:-1]
        pairs = _pairs(tokens)
    value = _number(tokens, constants)
    if value is not None:
        return (value,)
    question, nested, index = None, 0, 0
    while index < len(tokens):
        if tokens[index] in ('(', '[', '{') and index in pairs:
            index = pairs[index] + 1
            continue
        if tokens[index] == '?':
            if question is None:
                question = index
            else:
                nested += 1
        elif tokens[index] == ':' and question is not None:
            if nested:
                nested -= 1
            else:
                return (*_constant_alternatives(tokens[question + 1:index], constants),
                        *_constant_alternatives(tokens[index + 1:], constants))
        index += 1
    return ()


def _resource_lambdas(tokens, pairs, apis, elf):
    """Follow explicit lambda parameters into the native binding APIs only."""
    result = []
    for index, token in enumerate(tokens):
        if token != '=' or tokens[index + 1:index + 2] != ['['] or index + 1 not in pairs:
            continue
        name = _assignment_name(tokens, index)
        if not name or not _IDENTIFIER.fullmatch(name):
            continue
        parameters = pairs[index + 1] + 1
        if tokens[parameters:parameters + 1] != ['('] or parameters not in pairs:
            continue
        arguments = _parts(tokens, pairs, parameters + 1, pairs[parameters])
        names = []
        for begin, end in arguments:
            declaration = tokens[begin:end]
            if '=' in declaration:
                declaration = declaration[:declaration.index('=')]
            names.append(declaration[-1] if declaration and
                         _IDENTIFIER.fullmatch(declaration[-1]) else None)
        body = pairs[parameters] + 1
        while body < len(tokens) and tokens[body] not in ('{', ';'):
            body += 1
        if body not in pairs or tokens[body] != '{':
            continue
        body_end = pairs[body]
        scopes = [end for begin, end in pairs.items()
                  if tokens[begin] == '{' and begin < index < body_end < end]
        if not scopes:
            continue
        flows = set()
        for call in range(body + 1, body_end):
            api = tokens[call]
            if api not in apis or tokens[call + 1:call + 2] != ['('] or call + 1 not in pairs:
                continue
            args = _parts(tokens, pairs, call + 2, pairs[call + 1])
            coordinate = apis[api]
            if len(args) <= coordinate:
                continue
            source = tokens[slice(*args[coordinate])]
            if len(source) != 1 or source[0] not in names:
                continue
            byte_parameter = count_parameter = None
            if api in ('native_pe_bytes', 'native_reference_bytes', 'native_pe_match') and len(args) > coordinate + 1:
                source = ''.join(tokens[slice(*args[coordinate + 1])])
                source = re.sub(r'\.data\(\)$', '', source)
                if source in names:
                    byte_parameter = names.index(source)
            if api == 'native_pe_match' and len(args) > 3:
                source = tokens[slice(*args[3])]
                if len(source) == 1 and source[0] in names:
                    count_parameter = names.index(source[0])
            bias = (0x400000 if api in ('native_reference_rva', 'native_reference_address') else 0) if elf else None
            flows.add((names.index(tokens[slice(*args[coordinate])][0]),
                       byte_parameter, count_parameter, bias))
        if flows:
            result.append((name, body_end + 1, min(scopes), len(arguments), flows))
    return result


def _scope(tokens, pairs, position):
    scopes = [(begin, end) for begin, end in pairs.items()
              if tokens[begin] == '{' and begin < position < end]
    return max(scopes, default=(-1, len(tokens)))


def _scalar_arrays(tokens, pairs, constants):
    arrays = []
    for begin, end in pairs.items():
        if tokens[begin] != '{' or begin >= end:
            continue
        variable = _initializer_name(tokens, pairs, begin)
        if not variable:
            continue
        left, right = begin, end + 1
        while tokens[left] == '{' and pairs.get(left) == right - 1:
            left, right = left + 1, right - 1
        parts = _parts(tokens, pairs, left, right)
        values = [_number(tokens[a:b], constants) for a, b in parts]
        if values and all(value is not None for value in values):
            scope_begin, scope_end = _scope(tokens, pairs, begin)
            arrays.append((variable, begin, scope_begin, scope_end, values))
    return arrays


def _array_values(arrays, variable, position):
    visible = [(declaration, values) for name, declaration, begin, end, values in arrays
               if name == variable and declaration < position and begin < position < end]
    return max(visible, default=(0, ()))[1]


def _range_variables(tokens, pairs, constants, arrays):
    variables = []
    for index, token in enumerate(tokens):
        if token != 'for' or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        close = pairs[index + 1]
        colon, at = None, index + 2
        while at < close:
            if tokens[at] in ('(', '[', '{') and at in pairs:
                at = pairs[at] + 1
                continue
            if tokens[at] == ':':
                colon = at
                break
            at += 1
        if colon is None or not _IDENTIFIER.fullmatch(tokens[colon - 1]):
            continue
        source = tokens[colon + 1:close]
        if len(source) == 1:
            values = _array_values(arrays, source[0], index)
        elif source[:1] == ['{'] and pairs.get(colon + 1) == close - 1:
            values = [_number(tokens[a:b], constants)
                      for a, b in _parts(tokens, pairs, colon + 2, close - 1)]
            if any(value is None for value in values):
                continue
        else:
            continue
        body, end = close + 1, close + 1
        if tokens[body:body + 1] == ['{']:
            end = pairs.get(body, body)
        else:
            while end < len(tokens) and tokens[end] != ';':
                end = pairs[end] + 1 if tokens[end] in ('(', '[', '{') and end in pairs else end + 1
        if values:
            variables.append((tokens[colon - 1], body, end, values))
    return variables


def _coordinate_values(expression, constants, arrays, variables, position):
    values = _constant_alternatives(expression, constants)
    if values:
        return values
    if len(expression) == 1:
        visible = [(begin, values) for name, begin, end, values in variables
                   if expression[0] == name and begin <= position < end]
        return max(visible, default=(0, ()))[1]
    if len(expression) >= 4 and expression[1] == '[' and expression[-1] == ']':
        values = _array_values(arrays, expression[0], position)
        # The scalar table also contains mutable loop initializers (row = 0).
        # Only a literal index selects one entry; a runtime index can consume
        # every entry of this proven constant resource array.
        subscript = _number(expression[2:-1])
        if subscript is not None:
            return values[subscript:subscript + 1] if 0 <= subscript < len(values) else ()
        return values
    return ()


def _native_call_records(tokens, pairs):
    """NativeCall containers, their initializers, and their append arguments.

    A call to native_reference_calls proves the exact container expression's
    type even when its declaration is in an included profile definition.
    Wrapper spelling is never used to recognize these records.
    """
    containers, records = set(), set()
    for index, token in enumerate(tokens):
        if token == 'native_reference_calls' and tokens[index + 1:index + 2] == ['('] and index + 1 in pairs:
            args = _parts(tokens, pairs, index + 2, pairs[index + 1])
            if args:
                expression = tuple(tokens[slice(*args[0])])
                if expression and all(_IDENTIFIER.fullmatch(value) or value in ('.', '->') for value in expression):
                    containers.add((expression, *_scope(tokens, pairs, index)))
        # Existing production declarations use vector<NativeCall>; also accept
        # an explicitly typed NativeCall object without depending on its name.
        if token != 'NativeCall':
            continue
        at = index + 1
        vector = tokens[max(0, index - 2):index] == ['vector', '<']
        if vector:
            if tokens[at:at + 1] != ['>']:
                continue
            at += 1
        while tokens[at:at + 1] in (['const'], ['&'], ['*']):
            at += 1
        if at >= len(tokens) or not _IDENTIFIER.fullmatch(tokens[at]):
            continue
        variable = tokens[at]
        after = at + 1
        if vector:
            scope = _scope(tokens, pairs, index)
            if tokens[after:after + 1] in ([','], [')']):
                # A function parameter belongs to its body, not the enclosing
                # namespace where unrelated variables can share this name.
                parameters = [(left, right) for left, right in pairs.items()
                              if tokens[left] == '(' and left < index < right]
                if not parameters:
                    continue
                body = max(parameters)[1] + 1
                while body < len(tokens) and tokens[body] not in ('{', ';'):
                    body += 1
                if tokens[body:body + 1] != ['{'] or body not in pairs:
                    continue
                scope = body, pairs[body]
            containers.add(((variable,), *scope))
        if tokens[after:after + 1] == ['=']:
            after += 1
        if tokens[after:after + 1] == ['{'] and after in pairs:
            if vector:
                for left, right in _parts(tokens, pairs, after + 1, pairs[after]):
                    if tokens[left:left + 1] == ['{'] and pairs.get(left) == right - 1:
                        records.add((left + 1, right - 1))
            else:
                records.add((after + 1, pairs[after]))
    for expression, scope_begin, scope_end in containers:
        width = len(expression)
        for index in range(scope_begin + 1, scope_end):
            if tuple(tokens[index:index + width]) != expression:
                continue
            after = index + width
            if tokens[after:after + 1] == ['=']:
                after += 1
            if tokens[after:after + 1] == ['{'] and after in pairs:
                for left, right in _parts(tokens, pairs, after + 1, pairs[after]):
                    if tokens[left:left + 1] == ['{'] and pairs.get(left) == right - 1:
                        records.add((left + 1, right - 1))
            elif (tokens[after:after + 1] == ['.'] and tokens[after + 1:after + 2] in
                    (['push_back'], ['emplace_back']) and tokens[after + 2:after + 3] == ['('] and after + 2 in pairs):
                left, right = after + 3, pairs[after + 2]
                if tokens[left:left + 1] == ['{'] and pairs.get(left) == right - 1:
                    left, right = left + 1, right - 1
                records.add((left, right))
    return sorted(records)


def _file_coordinates(name: str, tokens: list[str], required: dict[int, int], elf=False) -> None:
    pairs = _pairs(tokens)
    constants, byte_arrays = {}, {}

    # Search bindings store RVAs regardless of their source filename. Their
    # signature bytes and NativeCall records share the ELF search origin.
    search_coordinates = 'search_profile' in name or any(
        token == 'NativeSearchBinding' and tokens[index + 1:index + 2] == ['<']
        for index, token in enumerate(tokens)
    )
    origin = 0x400000 if elf and (search_coordinates or name == 'native_history_event_profiles_elf.inc') else 0

    def add(rva, width=1, bias=None):
        if rva is not None and 0 < rva < 0x10000000 and width and width > 0:
            rva += origin if bias is None else bias
            required[rva] = max(required.get(rva, 0), width)

    if name == 'native_adventure_introduction.inc':
        # These UTF-16 spans pass through the local append lambda, so its
        # numeric caller arguments are not visible at native_pe_address().
        # Include each literal's zero terminator and the complete patch span.
        for address, content in PE_READONLY_LITERAL_ANCHORS.items():
            add(address, len(content))

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
        'native_reference_bytes': 0, 'native_pe_address': 1,
        'native_reference_address': 1, 'native_pe_match': 1,
        'native_fortress_alert_address': 2 if elf else 1,
    }
    if elf:
        apis.update({'native_reference_va': 0, 'native_elf_history_address': 0})
    else:
        # Shared UI roles retain PE reference coordinates at their consumers.
        # Linux binds those roles separately to its current native producers.
        apis['native_ui_semantic_address'] = 0

    scalar_arrays = _scalar_arrays(tokens, pairs, constants) if not elf else []
    range_variables = _range_variables(tokens, pairs, constants, scalar_arrays) if not elf else []
    if not elf:
        for begin, end in _native_call_records(tokens, pairs):
            parts = _parts(tokens, pairs, begin, end)
            if len(parts) < 3:
                continue
            width = 5
            if len(parts) > 4:
                source = ''.join(tokens[slice(*parts[4])])
                width = max(width, _byte_count(tokens, pairs, *parts[4]) or byte_arrays.get(source, 0))
            for position, extent in ((0, width), (1, 1)):
                for coordinate in _coordinate_values(tokens[slice(*parts[position])], constants,
                                                     scalar_arrays, range_variables, begin):
                    add(coordinate, extent)

    # Names such as address/identity/install have no binding meaning by
    # themselves. Admit their callers only after the local lambda body proves
    # which argument reaches a native coordinate API, and which owns bytes.
    action_writer_field = False
    for alias, begin, end, arity, flows in _resource_lambdas(tokens, pairs, apis, elf):
        for index in range(begin, end):
            if (tokens[index] != alias or tokens[index + 1:index + 2] != ['(']
                    or index + 1 not in pairs or (index and tokens[index - 1] in ('.', '->', '::'))):
                continue
            args = _parts(tokens, pairs, index + 2, pairs[index + 1])
            if len(args) != arity:
                continue
            for coordinate, byte_parameter, count_parameter, bias in flows:
                width = 1
                if byte_parameter is not None:
                    source = ''.join(tokens[slice(*args[byte_parameter])])
                    source = re.sub(r'\.data\(\)$', '', source)
                    width = (_byte_count(tokens, pairs, *args[byte_parameter])
                             or byte_arrays.get(source, 1))
                if count_parameter is not None:
                    width = _number(tokens[slice(*args[count_parameter])], constants) or width
                argument = tokens[slice(*args[coordinate])]
                for address in _coordinate_values(argument, constants, scalar_arrays, range_variables, index):
                    add(address, width, bias)
                if (not elf and name == 'adventure_action_panel.inc'
                        and argument == ['entry', '.', 'rva']):
                    action_writer_field = True

    if action_writer_field:
        # This owner's find_if lambda passes Writer::rva through the proven
        # native address adapter. The other fields are text/flags, never RVAs.
        for begin, end in pairs.items():
            if (tokens[begin] != '{' or begin >= end
                    or _initializer_name(tokens, pairs, begin) != 'writers'
                    or tokens[max(0, begin - 5):begin] != ['Writer', 'writers', '[', ']', '=']):
                continue
            for left, right in _parts(tokens, pairs, begin + 1, end):
                if tokens[left:left + 1] != ['{'] or pairs.get(left) != right - 1:
                    continue
                fields = _parts(tokens, pairs, left + 1, right - 1)
                if fields:
                    add(_number(tokens[slice(*fields[0])], constants))

    for index, token in enumerate(tokens):
        if token not in apis or tokens[index + 1:index + 2] != ['('] or index + 1 not in pairs:
            continue
        args = _parts(tokens, pairs, index + 2, pairs[index + 1])
        position = apis[token]
        if len(args) <= position:
            continue
        coordinates = _coordinate_values(tokens[slice(*args[position])], constants,
                                         scalar_arrays, range_variables, index)
        width = 1
        if token in ('native_pe_bytes', 'native_reference_bytes', 'native_pe_match') and len(args) > position + 1:
            source = ''.join(tokens[slice(*args[position + 1])])
            source = re.sub(r'\.data\(\)$', '', source)
            width = byte_arrays.get(source, 1)
        if token == 'native_pe_match' and len(args) > 3:
            width = _number(tokens[slice(*args[3])], constants) or width
        bias = (0x400000 if token in ('native_reference_rva', 'native_reference_address') else 0) if elf else None
        for rva in coordinates:
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
            if 'reinterpret_cast<' in wrapper and ('capture_' in wrapper or 'dfcn_' in wrapper):
                size = _byte_count(tokens, pairs, *parts[4]) if len(parts) > 4 else None
                add(first, max(5, size or 0))
                add(values[1])
                continue
        if first is None or first < 0x10000:
            continue
        if name in ('native_history_event_profiles.inc', 'native_history_event_profiles_elf.inc') and len(parts) == 6 and all(v is not None for v in values[:5]):
            add(first, 0xd8)  # getType slot 0 and getSentence slot 26.
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
        if (search_coordinates or name == 'native_caption_profile.inc') and len(values) >= 2 and all(v is not None and (v == 0 or v >= 0x10000) for v in values):
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


def collect_required_coordinates(root: Path) -> dict[int, int]:
    """Return recognized Windows game RVAs and their minimum continuous spans.

    ``root`` is the repository root, not the source directory. No binaries are
    opened, no build commands are executed, and this module writes no files.
    """
    required: dict[int, int] = {}
    for path in sorted((Path(root) / 'src').iterdir()):
        if path.suffix not in ('.h', '.inc', '.cpp') or path.name in _EXCLUDED:
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
    return dict(sorted(required.items()))
