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
    0x162dc10: 4,
    0x1710d18: 4,
    0x15eb4a8: 4,
    0x15f6ee8: 5,
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


def _file_coordinates(name: str, tokens: list[str], required: dict[int, int], elf=False) -> None:
    pairs = _pairs(tokens)
    constants, byte_arrays = {}, {}

    origin = 0x400000 if elf and ('search_profile' in name or name == 'native_history_event_profiles_elf.inc') else 0

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
        rva = _number(tokens[slice(*args[position])], constants)
        width = 1
        if token in ('native_pe_bytes', 'native_reference_bytes', 'native_pe_match') and len(args) > position + 1:
            source = ''.join(tokens[slice(*args[position + 1])])
            source = re.sub(r'\.data\(\)$', '', source)
            width = byte_arrays.get(source, 1)
        if token == 'native_pe_match' and len(args) > 3:
            width = _number(tokens[slice(*args[3])], constants) or width
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
