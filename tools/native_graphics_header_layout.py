"""Complete opaque graphics declarations from the official release headers.

Only declarative integer/array/vector members are parsed. No compiler or game
is executed. Windows sizes come from the same MSVC calculator as symbols.xml,
and independently bounded declaration segments must agree with named XML
anchors. Disagreeing spans remain the instruction resolver's responsibility.
"""
from __future__ import annotations

import ast
import hashlib
import io
import json
from pathlib import Path
import re
import tarfile

from build_history_layouts import align, semantic_id
from native_graphics_image_evidence import member_anchors


def _clean(text):
    return re.sub(r'/\*.*?\*/|//[^\n]*', '', text, flags=re.S)


def _integer(text, constants):
    text = re.sub(r'(?<=\d)[uUlL]+\b', '', text.strip())
    node = ast.parse(text, mode='eval').body
    def value(part):
        if isinstance(part, ast.Constant) and isinstance(part.value, int):
            return part.value
        if isinstance(part, ast.Name):
            return constants[part.id]
        if isinstance(part, ast.UnaryOp):
            item = value(part.operand)
            if isinstance(part.op, ast.USub): return -item
            if isinstance(part.op, ast.UAdd): return item
            if isinstance(part.op, ast.Invert): return ~item
        if isinstance(part, ast.BinOp):
            left, right = value(part.left), value(part.right)
            if isinstance(part.op, ast.Add): return left + right
            if isinstance(part.op, ast.Sub): return left - right
            if isinstance(part.op, ast.Mult): return left * right
            if isinstance(part.op, (ast.Div, ast.FloorDiv)): return left // right
            if isinstance(part.op, ast.LShift): return left << right
            if isinstance(part.op, ast.RShift): return left >> right
            if isinstance(part.op, ast.BitOr): return left | right
            if isinstance(part.op, ast.BitAnd): return left & right
        raise ValueError('Unsupported declarative integer: ' + text)
    return value(node)


def _constants(headers):
    expressions, enumerations = {}, []
    for content in headers.values():
        text = _clean(content)
        for name, expression in re.findall(r'^\s*#define\s+(\w+)\s+([^\n]+)', text, re.M):
            expressions.setdefault(name, expression.strip())
        for match in re.finditer(r'\benum\s+(\w+)\s*(?::[^{}]+)?\{([^{}]*)\}', text, re.S):
            previous, members = None, []
            for entry in match[2].split(','):
                entry = entry.strip()
                if not entry:
                    continue
                assignment = re.fullmatch(r'(\w+)\s*(?:=\s*(.+))?', entry, re.S)
                if not assignment:
                    continue
                name, expression = assignment.groups()
                expressions.setdefault(name, expression or (previous + '+1' if previous else '0'))
                members.append(name)
                previous = name
            enumerations.append((match[1], members))
    constants = {}
    pending = dict(expressions)
    while pending:
        progress = False
        for name, expression in list(pending.items()):
            try:
                constants[name] = _integer(expression, constants)
            except (KeyError, ValueError, SyntaxError, ZeroDivisionError):
                continue
            del pending[name]
            progress = True
        if not progress:
            break
    domains = {}
    for name, members in enumerations:
        for bound in members:
            if not re.search(r'(?:NUM|_COUNT|_MAX)$', bound) or bound not in constants:
                continue
            count = constants[bound]
            indices = [{'name': member, 'index': constants[member]} for member in members
                       if member in constants and 0 <= constants[member] < count and member != bound]
            if count > 0 and {entry['index'] for entry in indices} == set(range(count)):
                domains[bound] = (name, indices)
    return constants, domains


def _headers(root, version, fetch, publish):
    local = root.parent / 'dfcn-native-reference' / ('linux-' + version)
    if (local / 'graphics.h').is_file():
        files = {path.name: path.read_bytes() for path in sorted(local.glob('*.h'))}
        provenance = {'url': f'https://www.bay12games.com/dwarves/df_{version.replace(".", "_")}_linux.tar.bz2'}
    else:
        cache = root / 'data/extracted/cache/native-abi/headers' / version
        manifest = cache / 'source.json'
        if manifest.is_file():
            provenance = json.loads(manifest.read_text(encoding='utf-8'))
            files = {name: (cache / name).read_bytes() for name in provenance['headers']}
            if any(hashlib.sha256(content).hexdigest() != provenance['headers'][name] for name, content in files.items()):
                raise RuntimeError('Cached official graphics header digest differs')
        else:
            url = f'https://www.bay12games.com/dwarves/df_{version.replace(".", "_")}_linux.tar.bz2'
            print(f'Obtaining official graphics declarations: {url}', flush=True)
            archive = fetch(url, 256 * 1024 * 1024)
            files = {}
            with tarfile.open(fileobj=io.BytesIO(archive), mode='r:bz2') as package:
                total = 0
                for member in package:
                    path = Path(member.name)
                    if not member.isfile() or len(path.parts) > 3 or not re.fullmatch(r'[A-Za-z0-9_.-]+\.h', path.name):
                        continue
                    total += member.size
                    if member.size > 16 * 1024 * 1024 or total > 96 * 1024 * 1024:
                        raise RuntimeError('Official graphics declarations exceed their bounds')
                    stream = package.extractfile(member)
                    content = stream.read() if stream else b''
                    if path.name in files and files[path.name] != content:
                        raise RuntimeError('Ambiguous official graphics header: ' + path.name)
                    files[path.name] = content
            if 'graphics.h' not in files:
                raise RuntimeError('Official release does not include graphics.h')
            provenance = {'url': url, 'archive_sha256': hashlib.sha256(archive).hexdigest(),
                          'headers': {name: hashlib.sha256(content).hexdigest() for name, content in files.items()}}
            for name, content in files.items():
                publish(cache / name, content)
            publish(manifest, (json.dumps(provenance, sort_keys=True) + '\n').encode('utf-8'))
    provenance['graphics_sha256'] = hashlib.sha256(files['graphics.h']).hexdigest()
    return {name: content.decode('utf-8-sig', errors='strict') for name, content in files.items()}, provenance


def _prefix_array_domains(headers, graphic, canonical):
    """Restore named array domains omitted by XML without deriving offsets.

    The official declaration supplies names and ordinals; the existing Windows
    member supplies storage. Both must describe the same complete array extent.
    Header enum namespaces are reconciled with the canonical XML by a unique
    common prefix, never by the ordinal of a similarly sized array.
    """
    constants, domains = _constants(headers)
    text = _clean(headers['graphics.h'])
    begin = re.search(r'\b(?:class|struct)\s+graphicst\s*\{', text)
    if not begin:
        return
    prefix = text[begin.end():].split('black_background_texpos', 1)[0]
    canonical_fields = {field['name']: field for field in canonical['fields']}
    for field in graphic['fields']:
        array = field.get('array')
        source = canonical_fields.get(field['name'], {}).get('array')
        if not array or not source or not source.get('index_enum') or not source.get('indices'):
            continue
        declarations = re.findall(r'\b' + re.escape(field['name']) + r'\s*\[\s*(\w+)\s*\]\s*;', prefix)
        if len(declarations) != 1 or declarations[0] not in domains:
            continue
        bound = declarations[0]
        _, indices = domains[bound]
        count = constants[bound]
        if count != array['count'] or count * array['stride'] != field['size']:
            continue
        names = {entry['name'] for entry in source['indices']}
        header_names = {entry['name'] for entry in indices}
        prefixes = {header[:-len(name)] for header in header_names for name in names
                    if header == name or header.endswith('_' + name)}
        candidates = []
        for namespace in prefixes:
            if not all(name.startswith(namespace) for name in header_names):
                continue
            normalized = {name[len(namespace):] for name in header_names}
            overlap = len(normalized & names)
            if overlap >= min(2, len(names)):
                candidates.append((overlap, namespace))
        if not candidates:
            continue
        best = max(score for score, _ in candidates)
        winners = [namespace for score, namespace in candidates if score == best]
        if len(winners) != 1:
            continue
        namespace = winners[0]
        normalized = [{'name': entry['name'][len(namespace):], 'index': entry['index']} for entry in indices]
        if array.get('indices') and {entry['name']: entry['index'] for entry in array['indices']} != {
                entry['name']: entry['index'] for entry in normalized}:
            continue
        field['array'] = {**array, 'index_enum': source['index_enum'], 'indices': normalized}


def _members(headers, graphic, evidence=None):
    constants, domains = _constants(headers)
    text = _clean(headers['graphics.h'])
    begin = re.search(r'\b(?:class|struct)\s+graphicst\s*\{', text)
    if not begin:
        raise RuntimeError('Official graphics.h has no graphicst declaration')
    body = text[begin.end():]
    first = re.search(r'\blong\s+black_background_texpos\s*\[', body)
    if not first:
        raise RuntimeError('Official graphicst has no texture declaration anchor')
    body = body[first.start():]
    xml_fields = {field['name']: field for field in graphic['fields']}
    anchor = xml_fields.get('black_background_texpos')
    if not anchor:
        raise RuntimeError('Official symbols have no texture declaration anchor')
    offset, result, matched = anchor['offset'], [], set()
    boundaries = {offset}
    first_disagreement = None
    last_named = None
    for declaration in body.split(';'):
        declaration = re.sub(r'^\s*#.*$', '', declaration, flags=re.M).strip()
        if '(' in declaration or '{' in declaration or '}' in declaration:
            break
        if not declaration:
            continue
        match = re.fullmatch(r'(long|int32_t|uint32_t|int16_t|uint16_t|uint8_t|int8_t|svector\s*<\s*int32_t\s*>|array_([23])d\s*<([^>]+)>|interface_setst)\s+(.+)', declaration, re.S)
        if not match:
            raise RuntimeError('Unsupported official graphicst texture declaration: ' + declaration[:180])
        kind, dimension_count, template, members = match.groups()
        prefix_dimensions = []
        if dimension_count:
            arguments = [part.strip() for part in template.split(',')]
            if arguments[0] != 'int32_t' or len(arguments) != int(dimension_count) + 1:
                raise RuntimeError('Unsupported graphics array type: ' + kind)
            prefix_dimensions = arguments[1:]
            size, alignment, storage = 4, 4, 'int32_t'
        elif kind.startswith('svector'):
            size, alignment, storage = 24, 8, 'stl-vector<int32_t>'
        elif kind == 'interface_setst':
            size = xml_fields['graphical_interface']['size']
            alignment, storage = 4, 'interface_setst'
        else:
            size = {'long': 4, 'int32_t': 4, 'uint32_t': 4, 'int16_t': 2, 'uint16_t': 2, 'uint8_t': 1, 'int8_t': 1}[kind]
            alignment, storage = size, kind
        for member in members.split(','):
            parsed = re.fullmatch(r'\s*(\w+)\s*((?:\[[^\]]+\])*)\s*', member)
            if not parsed:
                raise RuntimeError('Unsupported graphics texture member: ' + member)
            name, dimensions = parsed.groups()
            dimensions = prefix_dimensions + re.findall(r'\[([^\]]+)\]', dimensions)
            try:
                counts = [_integer(dimension, constants) for dimension in dimensions]
            except (KeyError, ValueError, SyntaxError) as error:
                raise RuntimeError(f'Unresolved official graphics dimension {name}: {dimensions}') from error
            if any(count <= 0 or count > 1000000 for count in counts):
                raise RuntimeError('Invalid official graphics array extent: ' + name)
            extent = size
            for count in counts:
                extent *= count
            offset = align(offset, alignment)
            field = {'id': semantic_id(name), 'name': name, 'offset': offset, 'size': extent, 'storage': storage, 'flags': 0,
                     'declaration_source': 'official-graphics-header'}
            if counts:
                field['storage'] = 'array<' + storage + ',' + str(extent // size) + '>'
                enum, indices = domains.get(dimensions[0].strip(), ('', []))
                field['array'] = {'index_enum': enum, 'count': counts[0], 'stride': extent // counts[0], 'indices': indices}
            if name in xml_fields:
                expected = xml_fields[name]
                if expected['offset'] != offset or expected['size'] != extent:
                    if first_disagreement is None:
                        first_disagreement = min(expected['offset'], offset)
                        print(f'Graphics declarations require PE member evidence from {name}: '
                              f'header {offset:#x}/{extent}, XML {expected["offset"]:#x}/{expected["size"]}.', flush=True)
                elif first_disagreement is None:
                    boundaries.add(offset)
                    matched.add(name)
                if expected['size'] == extent:
                    last_named = (field, expected)
            result.append(field)
            offset += extent
    if callable(evidence):
        evidence = evidence({field['offset'] for field in result if field['name'] in xml_fields})
    if evidence:
        for field in result:
            if len(evidence.get(field['offset'], ())) >= 2:
                boundaries.add(field['offset'])
                matched.add(field['name'])
    extent = align(offset, 8)
    if first_disagreement is None and extent == graphic['size']:
        boundaries.add(offset)
    elif last_named:
        field, expected = last_named
        # The old XML can retain a stale opaque span while the following
        # declaration sizes remain accurate. An independently observed final
        # named member plus matching complete tail sizes establishes extent;
        # the stale XML absolute offset is never used as an address.
        if (field['offset'] in boundaries and
                extent - field['offset'] == graphic['size'] - expected['offset']):
            boundaries.add(offset)
    if len(matched) < 6:
        raise RuntimeError('Official graphics header has too few independent Windows XML anchors')
    limit = max(boundaries)
    verified = [field for field in result if field['offset'] + field['size'] <= limit]
    if limit < offset:
        print(f'Graphics declaration tail needs instruction evidence: {limit:#x}..{offset:#x}.', flush=True)
    return verified, extent if limit == offset else None, first_disagreement


def augment_graphics(root, source_version, target_version, canonical, target, fetch, publish, image=None, objdump=None, gps=None):
    provenance = []
    canonical_graphic = next(spec for spec in canonical['types'] if spec['name'] == 'graphic')
    for version, metadata in ((source_version, canonical), (target_version, target)):
        graphic = next(spec for spec in metadata['types'] if spec['name'] == 'graphic')
        headers, origin = _headers(root, version, fetch, publish)
        _prefix_array_domains(headers, graphic, canonical_graphic)
        evidence = (lambda wanted: member_anchors(image, objdump, gps, wanted)) if metadata is target and image and objdump and gps else None
        fields, extent, disagreement = _members(headers, graphic, evidence)
        by_name = {field['name']: field for field in graphic['fields']
                   if not re.fullmatch(r'texture_indices\d+', field['name']) and
                   (disagreement is None or field['offset'] + field['size'] <= disagreement)}
        for field in fields:
            if field['name'] in by_name:
                # Prefer the complete enum contract where XML only has a count.
                existing = by_name[field['name']]
                field['flags'] = existing.get('flags', 0)
            by_name[field['name']] = field
        graphic['fields'] = list(by_name.values())
        # Absence is meaningful only after the entire versioned declaration
        # has been bounded by the Windows image evidence.
        graphic['texture_members_complete'] = extent is not None
        if extent is not None:
            graphic['size'] = extent
        elif disagreement is not None:
            graphic['size'] = max(graphic['size'], max(field['offset'] + field['size'] for field in fields))
            graphic['alignment'] = 0
        origin['version'] = version
        provenance.append(origin)
        print(f'Prepared official graphics members: {version}; {len(fields)} named declarations.', flush=True)
    return provenance
