"""Resolve a game's ABI declarations during the normal production build.

Version text only narrows an upstream tag search. Admission requires the PE
identity declared by symbols.xml and all declared primary RTTI names/addresses.
The resulting data belongs to the complete executable SHA256, never a version
label. No game process is opened and no target code is executed.
"""
from __future__ import annotations

import hashlib
import io
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import urllib.error
import urllib.parse
import urllib.request
import xml.etree.ElementTree as ET
import zipfile

from build_history_layouts import Generator, consumer_requirements
from build_pe_image_bindings import PeImage
from native_graphics_header_layout import augment_graphics
from native_standard_library_layouts import canonical_layouts, measured_layouts

SCHEMA = 1
EXTRA_TYPES = ('graphic', 'init', 'enabler', 'renderer', 'renderer_2d_base', 'renderer_2d',
               'abstract_interfacest', 'widget', 'widget_text', 'widget_nineslice', 'history_event_context',
               'graphic_viewportst', 'graphic_map_portst', 'help_interfacest', 'gamest',
               'interface_button_building_new_jobst')
OFFICIAL = 'https://api.github.com/repos/DFHack/df-structures/'
RAW = 'https://raw.githubusercontent.com/DFHack/df-structures/'


class SourceUnavailable(RuntimeError):
    pass


def _fetch(url, maximum=32 * 1024 * 1024):
    request = urllib.request.Request(url, headers={'User-Agent': 'DFCN-native-ABI-builder',
                                                  'Accept': 'application/vnd.github+json'})
    try:
        with urllib.request.urlopen(request, timeout=45) as response:
            content = response.read(maximum + 1)
    except (OSError, urllib.error.URLError) as error:
        raise SourceUnavailable(f'Cannot obtain official native ABI declarations from {url}: {error}') from error
    if len(content) > maximum:
        raise RuntimeError(f'Official native ABI response is too large: {url}')
    return content


def _publish(path, content):
    path.parent.mkdir(parents=True, exist_ok=True)
    candidate = path.with_name(path.name + '.publish')
    try:
        candidate.write_bytes(content)
        candidate.replace(path)
    finally:
        candidate.unlink(missing_ok=True)


def _release_refs(version):
    # The public Git transport does not consume the unauthenticated REST API
    # quota. Arguments are passed directly, never interpolated into a shell.
    try:
        process = subprocess.run(['git', 'ls-remote', '--tags',
                                  'https://github.com/DFHack/df-structures.git', version + '-r*'],
                                 capture_output=True, text=True, encoding='utf-8', timeout=45,
                                 env={**os.environ, 'GIT_TERMINAL_PROMPT': '0'}, check=False)
        if process.returncode == 0:
            plain, peeled = {}, {}
            for line in process.stdout.splitlines():
                parts = line.split()
                if len(parts) != 2 or not re.fullmatch(r'[0-9a-f]{40}', parts[0]):
                    continue
                name = parts[1]
                destination = peeled if name.endswith('^{}') else plain
                destination[name.removesuffix('^{}')] = parts[0]
            return [{'ref': name, 'object': {'type': 'commit', 'sha': peeled.get(name, sha)}}
                    for name, sha in plain.items()]
        print('Official ABI Git tag lookup unavailable; trying the public API: ' + process.stderr.strip()[:300], flush=True)
    except (OSError, subprocess.TimeoutExpired) as error:
        print(f'Official ABI Git tag lookup unavailable; trying the public API: {error}', flush=True)
    return json.loads(_fetch(OFFICIAL + 'git/matching-refs/tags/' + urllib.parse.quote(version, safe=''), 4 * 1024 * 1024))


def _version_hints(image):
    hints = []
    # The PE resource's version is a search hint, not evidence of compatibility.
    pe = struct.unpack_from('<I', image.data, 0x3c)[0]
    resource, length = struct.unpack_from('<II', image.data, pe + 24 + 112 + 2 * 8)
    if resource and length:
        data = image.read(resource, length)
        key = 'VS_VERSION_INFO\0'.encode('utf-16le')
        at = data.find(key)
        while at >= 0:
            value = (at + len(key) + 3) & ~3
            if value + 52 <= len(data) and struct.unpack_from('<I', data, value)[0] == 0xfeef04bd:
                high, low = struct.unpack_from('<II', data, value + 8)
                major, minor, patch = high >> 16, high & 65535, low >> 16
                if major == 0 and minor:
                    hints.append(f'{minor}.{patch:02d}')
                elif major:
                    hints.append(f'{major}.{minor:02d}')
            at = data.find(key, at + len(key))
    for match in re.finditer(rb'Dwarf Fortress[^\x00-\x1f\x7f-\xff]{0,64}?([0-9]{2,3}\.[0-9]{2})', image.data):
        hints.append(match[1].decode('ascii'))
    # Some releases store only the standalone build label. It narrows the
    # official search in exactly the same way; timestamp/RTTI admission still
    # decides whether any fetched declaration belongs to this image.
    for match in re.finditer(rb'\x00([0-9]{2,3}\.[0-9]{2})\x00', image.data):
        hints.append(match[1].decode('ascii'))
    return list(dict.fromkeys(hints))


def _identity_table(image, content):
    root = ET.fromstring(content)
    candidates = []
    for table in root.findall('symbol-table'):
        if table.get('os-type') != 'windows':
            continue
        timestamps = [int(entry.get('value'), 0) for entry in table.findall('binary-timestamp')]
        hashes = [entry.get('value', '').lower() for entry in table.findall('md5-hash')]
        if image.timestamp not in timestamps:
            continue
        if hashes and hashlib.md5(image.data).hexdigest() not in hashes:
            continue
        candidates.append(table)
    if len(candidates) != 1:
        return None
    table = candidates[0]
    matched = 0
    failures = []
    for entry in table.findall('vtable-address'):
        if entry.get('base') or not entry.get('value'):
            continue
        name = entry.get('name')
        rva = int(entry.get('value'), 0) - image.base
        try:
            actual = image.vtable_type(rva)
            decorated = '@'.join(reversed(name.split('::')))
            valid = actual in (f'.?AV{decorated}@@', f'.?AU{decorated}@@')
        except (ValueError, IndexError, struct.error):
            valid = False
        if valid:
            matched += 1
        else:
            failures.append(name)
    if failures or matched < 32:
        raise RuntimeError('Official ABI timestamp matched but RTTI image identity differs: ' +
                           ', '.join(failures[:8]) + f' ({matched} matched)')
    return table


def _source(root, image, cache):
    local = root / 'data/upstream/df-structures'
    symbols = (local / 'symbols.xml').read_bytes()
    table = _identity_table(image, symbols)
    if table is not None:
        return local, table, {'url': 'https://github.com/DFHack/df-structures', 'revision': 'pinned-local'}
    # Previously fetched sources are selected by their declared image identity,
    # never by a locally inferred version directory name.
    for source in sorted((cache / 'sources').glob('*/symbols.xml')):
        table = _identity_table(image, source.read_bytes())
        if table is not None:
            return source.parent, table, {'url': RAW + source.parent.name, 'revision': source.parent.name}
    hints = _version_hints(image)
    if not hints:
        raise SourceUnavailable(f'No official ABI source cached for PE timestamp {image.timestamp:#x}; executable has no release search hint')
    errors = []
    for version in hints:
        print(f'Locating official native ABI declarations: {version}; PE timestamp {image.timestamp:#x}.', flush=True)
        refs = _release_refs(version)
        if not isinstance(refs, list):
            raise RuntimeError('Invalid official native ABI tag index')
        refs = [ref for ref in refs if re.fullmatch(re.escape('refs/tags/' + version) + r'-r[0-9]+(?:[.-][A-Za-z0-9]+)*', ref.get('ref', ''))]
        refs.sort(key=lambda ref: tuple(int(part) for part in re.findall(r'\d+', ref['ref'])), reverse=True)
        for ref in refs:
            target = ref['object']
            for _ in range(4):
                if target['type'] == 'commit':
                    break
                if target['type'] != 'tag':
                    raise RuntimeError('Official ABI release does not identify a commit')
                target = json.loads(_fetch(OFFICIAL + 'git/tags/' + target['sha'], 1024 * 1024))['object']
            commit = target['sha']
            if target['type'] != 'commit' or not re.fullmatch(r'[0-9a-f]{40}', commit):
                raise RuntimeError('Invalid official ABI source commit')
            symbols = _fetch(RAW + commit + '/symbols.xml', 4 * 1024 * 1024)
            table = _identity_table(image, symbols)
            if table is None:
                errors.append(ref['ref'])
                continue
            archive = _fetch('https://codeload.github.com/DFHack/df-structures/zip/' + commit)
            destination = cache / 'sources' / commit
            with zipfile.ZipFile(io.BytesIO(archive)) as package:
                total = 0
                for item in package.infolist():
                    parts = Path(item.filename).parts
                    if len(parts) != 2 or not re.fullmatch(r'(?:df\.[A-Za-z0-9_.-]+|symbols)\.xml', parts[-1]):
                        continue
                    total += item.file_size
                    if item.file_size > 16 * 1024 * 1024 or total > 128 * 1024 * 1024:
                        raise RuntimeError('Official ABI source archive exceeds its bounds')
                    _publish(destination / parts[-1], package.read(item))
            if not (destination / 'symbols.xml').is_file() or (destination / 'symbols.xml').read_bytes() != symbols:
                raise RuntimeError('Official ABI source archive differs from its pinned symbols')
            return destination, table, {'url': RAW + commit, 'revision': commit,
                                        'tag': ref['ref'], 'archive_sha256': hashlib.sha256(archive).hexdigest()}
    raise SourceUnavailable(f'No official ABI declaration matches PE timestamp {image.timestamp:#x}; searched ' + ', '.join(errors))


def _layouts(root, source, symbols, reference, extra_types, library_layouts=None):
    # Reuse the production MSVC layout calculator, without rendering C++ or
    # replacing the pinned reference declarations with an installed version.
    generator = Generator.__new__(Generator)
    generator.types = {}
    for path in sorted(source.glob('df.*.xml')):
        for node in ET.parse(path).getroot():
            if node.get('type-name') and node.tag != 'global-object':
                generator.types[node.get('type-name')] = node
    generator.cache = {}
    generator.field_storage = {}
    generator.field_arrays = {}
    generator.aggregate_fields = {}
    generator.library_layouts = library_layouts or {}
    generator.lines = []
    generator.serial = 0
    generator.symbols = [symbols]
    _, generator.required_fields, generator.required_methods, generator.required_sizes = consumer_requirements(root)
    generator.required_fields = {(name, member) for name, member in generator.required_fields if name in generator.types}
    generator.required_methods = {(name, member) for name, member in generator.required_methods if name in generator.types}
    generator.required_sizes &= generator.types.keys()
    generator.snapshot_types = {spec['name'] for spec in reference['types'] if any(field.get('flags', 0) & 2 for field in spec['fields'])}
    generator.required_history_methods = {method['name'] for spec in reference['types'] if spec['name'] == 'history_event'
                                          for method in spec['methods'] if method.get('flags', 0) & 1}
    generator.semantic_types = ({spec['name'] for spec in reference['types']} | set(extra_types)) & generator.types.keys()
    incomplete = set()
    for name, last_member in (('plotinfost', 'labor_info'), ('stocks_interfacest', 'entering_item_filter'),
                              ('building_def', 'name'), ('squad', 'alias'), ('enabler', 'textures'),
                              ('gamest', 'main_interface'), ('main_interface', 'hover_announcement_alert_button_width')):
        if name not in generator.types:
            continue
        if name == 'stocks_interfacest' and 'gamest' in generator.semantic_types:
            # Stocks is embedded before other consumed main_interface
            # members. Its snapshot prefix cannot stand in for sizeof here.
            continue
        node = generator.types[name]
        children = list(node)
        last = next((i for i, child in enumerate(children) if child.get('name') == last_member), None)
        if last is not None:
            for child in children[last + 1:]:
                node.remove(child)
            if last + 1 < len(children):
                incomplete.add(name)
    for name in sorted(generator.semantic_types):
        try:
            generator.named(name)
        except (ValueError, KeyError) as error:
            if name in extra_types and not any(spec['name'] == name for spec in reference['types']):
                generator.semantic_types.discard(name)
                print(f'Optional native declaration {name} is unavailable; retaining instruction discovery: {error}', flush=True)
                continue
            raise RuntimeError(f'Cannot derive target ABI declaration for {name}: {error}') from error
    result = generator.semantic_metadata()
    for spec in result['types']:
        if spec['name'] in incomplete:
            spec['extent_complete'] = False
    return result


def prepare_target(root: Path, game: Path, extra_types=(), objdump=None):
    """Return an image-owned ABI profile; this has no standalone CLI entry."""
    extra_types = tuple(sorted(set(EXTRA_TYPES) | set(extra_types)))
    image = PeImage(game)
    digest = hashlib.sha256(image.data).hexdigest()
    reference_path = root / 'data/runtime/native-addresses/pe-layout-semantics.json'
    reference_bytes = reference_path.read_bytes()
    reference = json.loads(reference_bytes)
    revision = hashlib.sha256(reference_bytes + Path(__file__).read_bytes() +
                              (root / 'tools/build_history_layouts.py').read_bytes() +
                              (root / 'tools/native_graphics_header_layout.py').read_bytes() +
                              (root / 'tools/native_graphics_image_evidence.py').read_bytes() +
                              (root / 'tools/native_standard_library_layouts.py').read_bytes() +
                              (root / 'tools/native_method_abi_evidence.py').read_bytes() +
                              ','.join(sorted(extra_types)).encode('utf-8')).hexdigest()
    cache = root / 'data/extracted/cache/native-abi'
    path = cache / (digest + '.json')
    if path.is_file():
        try:
            cached = json.loads(path.read_text(encoding='utf-8'))
            if cached.get('schema') == SCHEMA and cached.get('revision') == revision and cached.get('sha256') == digest:
                print(f'Using cached native ABI declarations: {cached["source"]["table"]}; SHA256 {digest}.', flush=True)
                return cached
        except (ValueError, KeyError):
            pass
    try:
        source, symbols, provenance = _source(root, image, cache)
    except SourceUnavailable as error:
        print(f'Native ABI declarations unavailable; continuing instruction discovery: {error}', flush=True)
        return None
    print(f'Deriving native ABI declarations: {symbols.get("name")}; SHA256 {digest}.', flush=True)
    reference_symbols = ET.parse(root / 'data/upstream/df-structures/symbols.xml').getroot()
    # The pinned source table owns the coordinates consumed by recipes.
    source_table = next(table for table in reference_symbols if table.get('name') == 'v0.53.16 win64 STEAM')
    reference_library = canonical_layouts(root, objdump)
    target_library = measured_layouts(image, objdump)
    provenance['standard_library'] = {'canonical': reference_library, 'target': target_library}
    canonical = _layouts(root, root / 'data/upstream/df-structures', source_table, {'types': []}, extra_types, reference_library)
    by_name = {spec['name']: spec for spec in reference['types']}
    by_name.update({spec['name']: spec for spec in canonical['types'] if spec['name'] not in by_name})
    reference = {**reference, 'types': list(by_name.values())}
    target = _layouts(root, source, symbols, reference, extra_types, target_library)
    from native_method_abi_evidence import amend_method_contracts
    provenance['method_parameters'] = amend_method_contracts(image, reference, target, objdump, symbols, source)
    source_release = re.search(r'v0\.(\d+\.\d+)', source_table.get('name', ''))
    target_release = re.search(r'v0\.(\d+\.\d+)', symbols.get('name', ''))
    if source_release and target_release:
        try:
            provenance['graphics_headers'] = augment_graphics(root, source_release[1], target_release[1],
                                                              canonical, target, _fetch, _publish, image, objdump,
                                                              next((int(node.get('value'), 0) - image.base for node in symbols
                                                                    if node.tag == 'global-address' and node.get('name') == 'gps'), None))
        except SourceUnavailable as error:
            print(f'Official graphics headers unavailable; retaining instruction discovery for opaque members: {error}', flush=True)
    roots = []
    actual_roots = {(node.tag, node.get('name')): node for node in symbols
                    if node.tag in ('global-address', 'vtable-address') and not node.get('base')}
    for node in source_table:
        if node.tag not in ('global-address', 'vtable-address') or node.get('base'):
            continue
        actual = actual_roots.get((node.tag, node.get('name')))
        if actual is None:
            continue
        address = int(actual.get('value'), 0) - image.base
        if not image.section(address):
            raise RuntimeError('Official native root is outside the executable: ' + node.get('name'))
        roots.append({'reference': int(node.get('value'), 0) - 0x140000000, 'target': address,
                      'name': node.get('name'), 'kind': node.tag})
    provenance['table'] = symbols.get('name')
    profile = {'schema': SCHEMA, 'revision': revision, 'sha256': digest,
               'timestamp': image.timestamp, 'size': image.size, 'source': provenance,
               'roots': roots, 'types': target['types'], 'canonical_types': reference['types'],
               'enums': target['enums']}
    _publish(path, (json.dumps(profile, ensure_ascii=False, separators=(',', ':')) + '\n').encode('utf-8'))
    print(f'Prepared image-owned native ABI declarations: {len(profile["types"])} types; {len(roots)} named roots.', flush=True)
    return profile
