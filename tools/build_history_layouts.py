#!/usr/bin/env python3
"""Generate native field bindings from the pinned structural source.

The native ABI adapter owns layout, not the event/translation algorithms.
The legacy coordinates identify existing reviewed field accesses; they are not
used as native addresses. No game code is executed by this generator.
"""
from __future__ import annotations
import argparse
from dataclasses import dataclass
from pathlib import Path
import json
import re
import xml.etree.ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / 'data/upstream/df-structures'
SCALARS = {**{f'{sign}int{width}_t': (width // 8, width // 8)
             for sign in ('', 'u') for width in (8, 16, 32, 64)},
           'bool': (1, 1), 's-float': (4, 4), 'd-float': (8, 8), 'size_t': (8, 8), 'long': (4, 4), 'ulong': (4, 4)}
SKIP = {'virtual-methods', 'custom-methods', 'code-helper', 'comment', 'extra-include'}

def align(size: int, alignment: int) -> int:
    return (size + alignment - 1) // alignment * alignment

def ident(name: str) -> str:
    return 'f_' + re.sub('[^a-zA-Z0-9_]', '_', name)

def semantic_id(name: str) -> int:
    value = 2166136261
    for byte in name.encode('utf-8'):
        value = ((value ^ byte) * 16777619) & 0xffffffff
    return value

def storage_name(node: ET.Element) -> str:
    """A source-level storage contract, independent of any target offset."""
    tag = node.tag
    target = node.get('type-name') or node.get('pointer-type')
    if tag in ('pointer', 'ptr-string'):
        return 'pointer<' + (target or 'void') + '>'
    if tag in ('enum', 'bitfield'):
        return node.get('base-type') or target or 'int32_t'
    if tag == 'compound' and target:
        return target
    if tag == 'static-array':
        element = target or (storage_name(node[0]) if len(node) == 1 else 'compound')
        return 'array<' + element + ',' + (node.get('count') or node.get('index-enum', '?')) + '>'
    return tag + ('<' + target + '>' if target else '')

def method_signature(node: ET.Element) -> str:
    result = node.get('ret-type')
    if result is None:
        ret = node.find('ret-type')
        result = storage_name(ret[0]) if ret is not None and len(ret) else 'void'
    arguments = [storage_name(child) for child in node if child.tag not in ('ret-type', 'comment')]
    return result + '(' + ','.join(arguments) + ')'


def consumer_requirements(root: Path):
    consumers = '\n'.join(path.read_text(encoding='utf-8')
                          for path in sorted((root / 'src').iterdir())
                          if path.suffix in ('.h', '.inc', '.cpp') and path.name != 'native_history_layouts.inc')
    fields = set(re.findall(r'\{\s*(?:0x[0-9a-fA-F]+|[0-9]+)[uUlL]*\s*,\s*"([^"]+)"\s*,\s*"([^"]+)"\s*\}', consumers))
    sizes = set(re.findall(r'type_size\(\s*(?:native_history_abi::)?semantic_id\("([^"]+)"\)', consumers))
    # These call sites select their method name from arrays/conditionals. Their
    # semantic requirements are explicit rather than depending on C++ spelling.
    methods = {('renderer', name) for name in ('get_renderer', 'update_tile', 'update_anchor_tile',
               'update_top_tile', 'update_top_anchor_tile', 'update_viewport_tile', 'update_map_port_tile')}
    methods.add(('abstract_interfacest', 'render'))
    methods.add(('abstract_interfacest', 'arrange'))
    methods.update({('renderer_2d_base', 'do_blank_screen_fill'), ('renderer_2d_base', 'update_all')})
    methods.update({('abstract_building', 'getName'), ('abstract_building', 'getType')})
    methods.add(('interface_button_building_new_jobst', 'prepare_tool_tip'))
    return consumers, fields, methods, sizes


def enum_requirements(root: Path):
    # These consumers dispatch from token arrays. Require their complete
    # semantic domain so a reordered union discriminant cannot be mistaken
    # for another native payload.
    result = {'look_info_type': None,
              'flow_type': {'Miasma', 'Steam', 'Mist', 'MaterialDust', 'MagmaMist', 'Smoke', 'Dragonfire',
                            'Fire', 'Web', 'MaterialGas', 'MaterialVapor', 'OceanWave', 'SeaFoam', 'ItemCloud'},
              'lookinfo_liquid_water_flag': {'stagnant', 'salt'},
              'lookinfo_liquid_magma_flag': {'subterranean'}}
    consumers = consumer_requirements(root)[0]
    for owner, token in re.findall(r'enum_value\(\s*"([^"]+)"\s*,\s*"([^"]+)"', consumers):
        if owner not in result:
            result[owner] = set()
        if result[owner] is not None:
            result[owner].add(token)
    return result

@dataclass
class Shape:
    cpp: str
    size: int
    alignment: int
    fields: list[tuple[int, int, str]]

class Generator:
    def __init__(self, library_layouts=None) -> None:
        self.types = {}
        for path in sorted(SOURCE.glob('df.*.xml')):
            for node in ET.parse(path).getroot():
                if node.get('type-name') and node.tag != 'global-object':
                    self.types[node.get('type-name')] = node
        self.cache: dict[str, Shape] = {}
        self.field_storage: dict[tuple[str, str], str] = {}
        self.field_arrays: dict[tuple[str, str], dict] = {}
        self.aggregate_fields: dict[tuple[str, str], tuple[int, int, str]] = {}
        self.library_layouts = library_layouts or {}
        self.semantic_types: set[str] = set()
        consumers, self.required_fields, self.required_methods, self.required_sizes = consumer_requirements(ROOT)
        self.required_fields = {(name, member) for name, member in self.required_fields if name in self.types}
        self.required_methods = {(name, member) for name, member in self.required_methods if name in self.types}
        self.required_sizes &= self.types.keys()
        self.snapshot_types = set(re.findall(r'native_history_layout::f_(\w+)_fields\b', consumers))
        self.required_history_methods = set(re.findall(
            r'(?:native_history_abi::history_method|native_history_formatter_callback)\(\s*"([^"]+)"', consumers))
        self.required_history_methods.update(re.findall(
            r'native_history_abi::method\(\s*native_history_abi::history_event_type\s*,\s*'
            r'native_history_abi::semantic_id\("([^"]+)"\)', consumers))
        # Only the prefix through the last consumed field is a dependency.
        # Later save/compression objects do not participate in these snapshots.
        plotinfo = self.types['plotinfost']
        children = list(plotinfo)
        last = next(i for i, child in enumerate(children) if child.get('name') == 'labor_info')
        for child in children[last + 1:]:
            plotinfo.remove(child)
        # The legacy stocks renderer exposes only its retained filter prefix.
        stocks = self.types['stocks_interfacest']
        children = list(stocks)
        last = next(i for i, child in enumerate(children)
                    if child.get('name') == 'entering_item_filter')
        for child in children[last + 1:]:
            stocks.remove(child)
        # Workshop identity consumes only the RAW token and complete name.
        # Later graphics, requirements and tooltip data are not borrowed.
        building = self.types['building_def']
        children = list(building)
        last = next(i for i, child in enumerate(children)
                    if child.get('name') == 'name')
        for child in children[last + 1:]:
            building.remove(child)
        # Squad captions use the independently authored alias when present.
        # Only this prefix is borrowed; positions, orders and schedules stay
        # outside the name snapshot.
        squad = self.types['squad']
        children = list(squad)
        last = next(i for i, child in enumerate(children)
                    if child.get('name') == 'alias')
        for child in children[last + 1:]:
            squad.remove(child)
        self.lines: list[str] = []
        self.serial = 0
        symbols = ET.parse(SOURCE / 'symbols.xml').getroot()
        self.symbols = [next(table for table in symbols if table.get('name') == name)
                        for name in ('v0.53.16 win64 STEAM', 'v0.53.16 linux64 STEAM')]

    def named(self, name: str) -> Shape:
        if name in SCALARS:
            size, alignment = SCALARS[name]
            cpp = {'s-float': 'float', 'd-float': 'double', 'ulong': 'unsigned long'}.get(name, name)
            return Shape(cpp, size, alignment, [])
        if name in self.cache:
            return self.cache[name]
        if name.startswith('stl-') or name in ('df-flagarray', 'df-array'):
            return self.value(ET.Element(name), name)
        node = self.types[name]
        if node.tag == 'df-other-vectors-type':
            count = self.enum_count(node.attrib['index-enum'])
            return Shape(f'std::array<Vector, {count}>', count * 24, 8, [])
        if node.tag == 'df-linked-list-type':
            return Shape('std::array<uintptr_t, 3>', 24, 8, [])
        if node.tag in ('enum-type', 'bitfield-type'):
            return self.named(node.get('base-type', 'int32_t'))
        shape = self.structure(node, name)
        self.cache[name] = shape
        return shape

    def enum_count(self, name: str) -> int:
        current = -1
        high = -1
        for child in self.types[name]:
            if child.tag == 'enum-item':
                current = int(child.get('value', str(current + 1)), 0)
                high = max(high, current)
        return high + 1

    def virtuals(self, name: str) -> list[ET.Element]:
        node = self.types[name]
        base = node.get('inherits-from')
        methods = list(self.virtuals(base)) if base else []
        for method in node.findall('./virtual-methods/vmethod'):
            key = '~' if method.get('is-destructor') == 'true' else method.get('name')
            existing = next((i for i, entry in enumerate(methods)
                             if ('~' if entry.get('is-destructor') == 'true' else entry.get('name')) == key), None)
            if existing is None:
                methods.append(method)
            else:
                methods[existing] = method
        return methods

    def field_owner(self, name: str, offset: int, path: str) -> str:
        fields = [(at, member) for at, _, member in self.cache[name].fields if member == path]
        if len(fields) < 2 or offset == fields[-1][0]:
            return self.cache[name].cpp
        parent = self.types[name].get('inherits-from')
        if parent and any(at == offset and member == path for at, _, member in self.cache[parent].fields):
            return self.field_owner(parent, offset, path)
        raise ValueError(f'Ambiguous native inherited member: {name}.{path} at {offset:#x}')

    def value(self, node: ET.Element, owner: str) -> Shape:
        tag = node.tag
        if tag in SCALARS:
            return self.named(tag)
        if tag in ('enum', 'bitfield'):
            return self.named(node.get('base-type') or node.get('type-name', 'int32_t'))
        if tag in ('pointer', 'ptr-string'):
            return Shape('uintptr_t', 8, 8, [])
        if tag == 'static-array':
            count = int(node.attrib['count'], 0) if node.get('count') else self.enum_count(node.attrib['index-enum'])
            if node.get('type-name'):
                element = self.named(node.attrib['type-name'])
            elif node.get('pointer-type'):
                element = Shape('uintptr_t', 8, 8, [])
            elif len(node) == 1:
                element = self.value(node[0], owner + '_element')
            else:
                element = self.structure(node, owner + '_element')
            return Shape(f'std::array<{element.cpp}, {count}>', element.size * count, element.alignment, [])
        if tag in ('static-string', 'padding'):
            count = int(node.get('count', node.get('size', '1')), 0)
            return Shape(f'std::array<uint8_t, {count}>', count, 1, [])
        if tag == 'stl-string':
            return Shape('std::string', 32, 8, [])
        if tag == 'stl-fstream':
            measured = getattr(self, 'library_layouts', {}).get(tag)
            if not measured or measured['alignment'] != 8 or measured['size'] % 8:
                raise ValueError(f'MSVC fstream extent requires image-owned destructor evidence: {owner}')
            # Opaque storage only: the build host's standard library is not
            # the game's MSVC ABI and must never supply this sizeof.
            return Shape(f'std::array<uint64_t, {measured["size"] // 8}>', measured['size'], 8, [])
        if tag == 'stl-variant' and node.get('raw-type') == 'std::string, std::function<void()>':
            return Shape('std::variant<std::string, std::function<void()>>', 72, 8, [])
        containers = {
            'stl-set': ('std::set<uintptr_t>', 16),
            'stl-map': ('std::map<uintptr_t, uintptr_t>', 16),
            'stl-unordered-map': ('std::unordered_map<uintptr_t, uintptr_t>', 64),
            'stl-unordered-set': ('std::unordered_set<uintptr_t>', 64),
            'stl-deque': ('std::deque<uintptr_t>', 40),
            # Release MSVC stores a 24-byte word vector and an 8-byte bit
            # count. The debug iterator proxy is absent, just as it is for
            # the ordinary 24-byte vectors above. Counting it here shifts
            # every later member once per embedded bit vector.
            'stl-bit-vector': ('std::vector<bool>', 32),
            'stl-mutex': ('std::mutex', 80),
            'stl-condition-variable': ('std::condition_variable', 72),
            'stl-function': ('std::function<void()>', 64),
            'stl-future': ('std::future<void>', 16),
            'stl-shared-ptr': ('std::shared_ptr<void>', 16),
            'stl-weak-ptr': ('std::weak_ptr<void>', 16),
            'stl-fs-path': ('std::filesystem::path', 32),
            'stl-fs-filetime': ('std::filesystem::file_time_type', 8),
        }
        if tag in containers:
            cpp, size = containers[tag]
            return Shape(cpp, size, 8, [])
        if tag == 'df-array':
            return Shape('DfArray', 16, 8, [])
        if tag == 'df-linked-list':
            return self.named(node.attrib['type-name'])
        if tag == 'stl-vector':
            return Shape('Vector', 24, 8, [])
        if tag == 'df-flagarray':
            return Shape('Flags', 16, 8, [])
        if tag == 'compound':
            if node.get('type-name'):
                return self.named(node.attrib['type-name'])
            return self.structure(node, owner)
        raise ValueError(f'Unimplemented declaration {owner}: {tag} {node.attrib}')

    def structure(self, node: ET.Element, name: str) -> Shape:
        cpp = ident(name)
        union = node.get('is-union') == 'true'
        base_name = node.get('inherits-from')
        base = self.named(base_name) if base_name else None
        polymorphic = node.tag == 'class-type'
        offset = base.size if base else 8 if polymorphic else 0
        alignment = base.alignment if base else 8 if polymorphic else 1
        fields = list(base.fields) if base else []
        if base:
            for _, _, path in base.fields:
                if path:
                    self.field_storage[name, path] = self.field_storage.get((base_name, path), 'unknown')
                    if (base_name, path) in self.field_arrays:
                        self.field_arrays[name, path] = self.field_arrays[base_name, path]
            for (owner, path), aggregate in list(self.aggregate_fields.items()):
                if owner == base_name:
                    self.aggregate_fields[name, path] = aggregate
        members = []
        if polymorphic and not base:
            members.append('    virtual void native_vtable();')
            fields.append((0, 8, ''))
        for index, child in enumerate(node):
            if child.tag in SKIP:
                continue
            member = ident(child.get('name', f'anonymous_{index}'))
            shape = self.value(child, name + '_' + member)
            alignment = max(alignment, shape.alignment)
            start = 0 if union else align(offset, shape.alignment)
            member_type = re.sub(r'\bf_[a-zA-Z0-9_]+', r'native_history_layout::\g<0>', shape.cpp)
            members.append(f'    {member_type} {member};')
            # Keep whole container/pointer ranges, flatten compounds into
            # named members so tail reuse in a derived class is compiler-owned.
            if shape.fields:
                self.aggregate_fields[name, member] = (start, shape.size, storage_name(child))
                for child_offset, length, path in shape.fields:
                    if path:
                        fields.append((start + child_offset, length, member + '.' + path))
                        nested_name = child.get('type-name') or name + '_' + member
                        self.field_storage[name, member + '.' + path] = self.field_storage.get(
                            (nested_name, path), 'unknown')
                        if (nested_name, path) in self.field_arrays:
                            self.field_arrays[name, member + '.' + path] = self.field_arrays[nested_name, path]
            else:
                fields.append((start, shape.size, member))
                self.field_storage[name, member] = storage_name(child)
                if child.tag == 'static-array':
                    enum = child.get('index-enum', '')
                    count = int(child.get('count'), 0) if child.get('count') else self.enum_count(enum)
                    indices = []
                    if enum:
                        ordinal = -1
                        for item in self.types[enum]:
                            if item.tag == 'enum-item':
                                ordinal = int(item.get('value', str(ordinal + 1)), 0)
                                if 0 <= ordinal < count:
                                    indices.append({'name': item.get('name'), 'index': ordinal})
                    self.field_arrays[name, member] = {'index_enum': enum, 'count': count,
                                                       'stride': shape.size // count if count else 0,
                                                       'indices': indices}
            offset = max(offset, start + shape.size) if union else start + shape.size
        kind = 'union' if union else 'struct'
        declaration = f'{kind} {cpp}' + (f' : {base.cpp}' if base else '')
        self.lines.extend([declaration + ' {', *members, '};'])
        return Shape(cpp, align(offset, alignment), alignment, fields)

    def render(self) -> str:
        header = [
            '// Generated by tools/build_history_layouts.py. Do not maintain host-specific event layouts.',
            '// Source: data/upstream/df-structures (DFHack/df-structures at 1dd01aad); borrowed layouts, never native object construction.',
            '// MinGW is not MSVC: use the reviewed MSVC coordinates for that game ABI.',
            '// For the compatible Itanium/libstdc++ ABI the native compiler supplies offsetof.',
            '#ifdef _WIN32',
            '#define DFCN_NATIVE_FIELD(type, member, reference) ::dfcn::native_history_abi::FieldOffset{reference, #type, #member}',
            '#define DFCN_NATIVE_BINDING(pe, elf) pe',
            '#else',
            '#define DFCN_NATIVE_FIELD(type, member, reference) ::dfcn::native_history_abi::FieldOffset{offsetof(type, member), #type, #member}',
            '#define DFCN_NATIVE_BINDING(pe, elf) elf',
            '#endif',
            '#pragma GCC diagnostic push',
            '#pragma GCC diagnostic ignored "-Winvalid-offsetof"',
            'namespace native_history_layout {',
            'struct Vector { uintptr_t begin, end, capacity; };',
            'struct Flags { uintptr_t bytes; int32_t count; };',
            'struct DfArray { uintptr_t bytes; uint16_t count; };',
        ]
        enum = self.types['history_event_type']
        events = []
        value = -1
        for child in enum:
            if child.tag != 'enum-item':
                continue
            value = int(child.get('value', str(value + 1)), 0)
            if value < 0:
                continue
            name = 'history_event_' + child.attrib['name'].lower() + 'st'
            events.append((value, name, self.named(name)))
        if len(events) != 133:
            raise ValueError('The pinned source must describe all 133 native event types')
        world = self.named('world')
        roots = {'world_data', 'world_region', 'world_site', 'world_river', 'region_map_entry',
                 'historical_figure', 'historical_entity',
                 'historical_figure_info', 'interaction_profilest', 'creature_raw', 'caste_raw',
                 'identity', 'artifact_record', 'item', 'item_toolst', 'itemdef_toolst', 'itemdef_instrumentst',
                 'itemdef_weaponst', 'itemdef_armorst', 'itemdef_shoesst',
                 'itemdef_shieldst', 'itemdef_helmst', 'itemdef_glovesst',
                 'itemdef_ammost', 'itemdef_pantsst', 'itemdef_toyst',
                 'itemdef_siegeammost', 'itemdef_trapcompst',
                 'agreement', 'agreement_details', 'agreement_party', 'agreement_entryst',
                 'agreement_details_data_join_party', 'agreement_details_data_offer_service',
                 'agreement_details_data_retrieve_artifact',
                 'activity_entry', 'activity_event_conversationst', 'utterancest',
                 'work_detail', 'labor_work_details_interfacest', 'widget_radio_rows',
                 'custom_stockpile_interfacest', 'construction_interfacest', 'create_work_order_interfacest',
                 'location_selector_interfacest',
                 'entity_entity_link',
                 'entity_raw', 'entity_site_link', 'entity_site_ab_profilest',
                 'entity_position', 'entity_position_assignment',
                 'general_ref_is_artifactst', 'plant_raw', 'material', 'inorganic_raw', 'building_def',
                 'viewscreen_legendsst', 'viewscreen_adventure_logst', 'viewscreen_new_regionst',
                 'viewscreen_choose_start_sitest',
                 'mod_headerst', 'savegame_headerst', 'viewscreen_titlest', 'viewscreen_new_arenast',
                 'viewscreen_dwarfmodest', 'viewscreen_dungeonmodest', 'viewscreen_worldst',
                 'viewscreen_setupadventurest', 'setup_character_info',
                 'widget_textbox', 'stocks_interfacest', 'squad', 'unit',
                 'adventure_interfacest', 'adventure_interface_performst',
                 'performance_menu_choicest', 'view_sheets_interfacest',
                 'widget_unit_list', 'widget_unit_name', 'widget_unit_portrait',
                 'widget_container', 'widget_text', 'widget_text_truncated',
                 'plotinfost', 'report',
                 'adv_announcementst',
                 'name_creator_interfacest', 'language_word', 'language_translation', 'language_name', 'history_event_context'}
        roots.update(name for name, node in self.types.items()
                     if node.tag in ('class-type', 'struct-type') and
                     name.startswith(('history_event_collection', 'abstract_building',
                                      'world_construction', 'interaction_effect',
                                      'creature_interaction_effect_display_name', 'general_ref',
                                      'item_', 'itemimprovement', 'art_image', 'interaction_source')))
        for name in sorted(roots):
            self.named(name)
        self.semantic_types = (roots | {name for _, name, _ in events} | {'world', 'history_event'} |
                               {name for name, _ in self.required_fields | self.required_methods} | self.required_sizes)
        pending = list(self.semantic_types)
        while pending:
            parent = self.types[pending.pop()].get('inherits-from')
            if parent and parent not in self.semantic_types:
                self.semantic_types.add(parent)
                pending.append(parent)
        for name in sorted(self.semantic_types):
            self.named(name)
        lines = [*header, *self.lines,
                 'struct Field { size_t legacy; native_history_abi::FieldOffset native; size_t size; const char *name = nullptr; };',
                 'struct Event { const Field *fields; size_t count; };']
        for value, name, shape in events:
            lines.append(f'static constexpr Field event_{value}[] = {{ // {name}')
            # Unions provide several names at the same address. One range is
            # enough to locate bytes; no semantic alternative is selected here.
            seen = set()
            for legacy, length, path in shape.fields:
                if not path or (legacy, length) in seen:
                    continue
                seen.add((legacy, length))
                member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({self.field_owner(name, legacy, path)}, {path}, 0x{legacy:x}), {length}, "{member}"}},')
            lines.append('};')
        lines.append('static constexpr Event events[] = {')
        for value, _, _ in events:
            lines.append(f'    {{event_{value}, std::size(event_{value})}},')
        lines.append('};')
        lines.append('static constexpr Field world_fields[] = {')
        for legacy, length, path in world.fields:
            if path and length:
                member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({world.cpp}, {path}, 0x{legacy:x}), {length}, "{member}"}},')
        lines.append('};')
        for name in sorted(roots):
            shape = self.cache[name]
            count = sum(bool(path and length) for _, length, path in shape.fields)
            lines.append(f'static constexpr std::array<Field, {count}> {ident(name)}_fields = {{{{')
            for legacy, length, path in shape.fields:
                if path and length:
                    member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                    lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({self.field_owner(name, legacy, path)}, {path}, 0x{legacy:x}), {length}, "{member}"}},')
            lines.append('}};')
        textbox = self.cache['widget_textbox']
        for label, member in (('parent', 'parent'), ('rect', 'rect'),
                              ('visibility', 'flag'), ('string', 'str'),
                              ('flags', 'flags'), ('maxlen', 'maxlen'),
                              ('type', 'textbox_type')):
            path = ident(member)
            if member == 'rect':
                # Compound fields are flattened in the field directory.
                # The render hook consumes the entire inclusive native rect.
                legacy = next(offset for offset, _, field in textbox.fields
                              if field.startswith(path + '.'))
            else:
                legacy = next(offset for offset, _, field in textbox.fields if field == path)
            lines.append(f'static constexpr auto textbox_{label}_offset = '
                         f'DFCN_NATIVE_FIELD({textbox.cpp}, {path}, 0x{legacy:x});')
        stocks = self.cache['stocks_interfacest']
        for label, member in (('open', 'open'), ('filter', 'item_filter'),
                              ('entering_filter', 'entering_item_filter')):
            path = ident(member)
            legacy = next(offset for offset, _, field in stocks.fields if field == path)
            lines.append(f'static constexpr auto stocks_{label}_offset = '
                         f'DFCN_NATIVE_FIELD({stocks.cpp}, {path}, 0x{legacy:x});')
        squad = self.cache['squad']
        alias_path = ident('alias')
        alias_legacy = next(offset for offset, _, field in squad.fields
                            if field == alias_path)
        lines.append('static constexpr auto squad_alias_offset = '
                     f'DFCN_NATIVE_FIELD({squad.cpp}, {alias_path}, 0x{alias_legacy:x});')
        lines.append('struct ModScreenFields { native_history_abi::FieldOffset active, hover_rows; std::array<native_history_abi::FieldOffset, 3> headers; };')
        for name, label, active, headers in (
                ('viewscreen_titlest', 'title', 'managing_mods', ('mod',)),
                ('viewscreen_new_regionst', 'newregion', 'doing_mods',
                 ('object_load_order_mod_header', 'available_mod_header', 'base_available_mod_header')),
                ('viewscreen_new_arenast', 'newarena', 'doing_mods',
                 ('object_load_order_mod_header', 'available_mod_header', 'base_available_mod_header'))):
            screen = self.cache[name]
            def mod_field(member: str) -> str:
                path = '.'.join(ident(part) for part in member.split('.'))
                legacy = next(offset for offset, _, field in screen.fields if field == path)
                return f'DFCN_NATIVE_FIELD({screen.cpp}, {path}, 0x{legacy:x})'
            fields = [mod_field(member) for member in (active, 'hover_mod_description.text')]
            vectors = [mod_field(member) for member in headers]
            vectors.extend('SIZE_MAX' for _ in range(3 - len(vectors)))
            lines.append(f'static constexpr ModScreenFields mod_{label}_fields = {{' +
                         ', '.join(fields) + ', {{' + ', '.join(vectors) + '}}};')
        metadata = self.semantic_metadata()
        for spec in metadata['types']:
            name = spec['name']
            lines.append(f'static constexpr std::array<native_history_abi::FieldSpec, {len(spec["fields"])}> {ident(name)}_semantic_fields = {{{{')
            for field in spec['fields']:
                lines.append(f'    {{{spec["id"]}u, {field["id"]}u, {field["offset"]}u, {field["size"]}u, '
                             f'{json.dumps(field["name"])}, {json.dumps(field["storage"])}}},')
            lines.append('}};')
            methods = spec['methods']
            if methods:
                lines.append(f'static constexpr native_history_abi::MethodSpec {ident(name)}_semantic_methods[] = {{')
                for method in methods:
                    lines.append(f'    {{{spec["id"]}u, {method["id"]}u, {method["slot"]}u, '
                                 f'{method["parameter_shape"]}u, {method["argument_count"]}u, '
                                 f'{json.dumps(method["name"])}, {json.dumps(method["signature"])}}},')
                lines.append('};')
        lines.append('static constexpr native_history_abi::TypeSpec semantic_types[] = {')
        for spec in metadata['types']:
            name = spec['name']
            methods = (f'{ident(name)}_semantic_methods, std::size({ident(name)}_semantic_methods)'
                       if spec['methods'] else 'nullptr, 0')
            lines.append(f'    {{{spec["id"]}u, {spec["parent_id"]}u, {json.dumps(name)}, '
                         f'{json.dumps(spec["original"])}, 0x{spec["reference_table"]:x}u, {spec["size"]}u, '
                         f'{ident(name)}_semantic_fields.data(), std::size({ident(name)}_semantic_fields), {methods}}},')
        lines.append('};')
        for name in sorted(roots):
            methods = self.virtuals(name)
            if not methods:
                continue
            slots = []
            extra = 0
            for index, method in enumerate(methods):
                slots.append(f'DFCN_NATIVE_BINDING({index * 8}, {(index + extra) * 8})')
                if method.get('is-destructor') == 'true':
                    extra += 1
            lines.append(f'static constexpr size_t {ident(name)}_slots[] = {{' + ', '.join(slots) + '};')
        lines.append('struct Object { const char *name, *parent; uintptr_t table; const Field *fields; size_t count; const size_t *slots; size_t slot_count; const native_history_abi::MethodSpec *methods; };')
        lines.append('static constexpr Object objects[] = {')
        for name in sorted(roots):
            original = self.types[name].get('original-name', name)
            addresses = []
            for table, anchor in zip(self.symbols, (0x140000000, 0x400000)):
                node = next((n for n in table if n.tag == 'vtable-address' and n.get('name') == original), None)
                # Library vtables have their own image base and are resolved
                # by the owning runtime adapter, not through the main image.
                addresses.append(int(node.get('value'), 0) - anchor
                                 if node is not None and not node.get('base') else 0)
            slots = f'{ident(name)}_slots, std::size({ident(name)}_slots)' if self.virtuals(name) else 'nullptr, 0'
            methods = f'{ident(name)}_semantic_methods' if self.virtuals(name) else 'nullptr'
            parent = self.types[name].get('inherits-from', '')
            lines.append(f'    {{"{name}", "{parent}", DFCN_NATIVE_BINDING(0x{addresses[0]:x}, 0x{addresses[1]:x}), {ident(name)}_fields.data(), std::size({ident(name)}_fields), {slots}, {methods}}},')
        lines.append('};')
        for symbol in ('world', 'game', 'gametype', 'gamemode', 'd_init', 'gview', 'plotinfo', 'ui_look_list'):
            addresses = []
            for table, anchor in zip(self.symbols, (0x140000000, 0x400000)):
                node = next(n for n in table if n.tag == 'global-address' and n.get('name') == symbol)
                addresses.append(int(node.get('value'), 0) - anchor)
            lines.append(f'static constexpr uintptr_t {symbol}_rva = DFCN_NATIVE_BINDING(0x{addresses[0]:x}, 0x{addresses[1]:x});')
        lines += ['} // namespace native_history_layout', '#pragma GCC diagnostic pop',
                  '#undef DFCN_NATIVE_FIELD', '#undef DFCN_NATIVE_BINDING', '']
        return '\n'.join(lines)

    def semantic_metadata(self) -> dict:
        """Reference identities for instruction evidence, not target layouts."""
        identities = {}
        def identity(name):
            value = semantic_id(name)
            previous = identities.setdefault(value, name)
            if not value or previous != name:
                raise ValueError(f'Native semantic ID collision: {previous!r}, {name!r}')
            return value
        types = []
        for name in sorted(self.semantic_types):
            shape = self.cache[name]
            node = self.types[name]
            original = node.get('original-name', name)
            parent = node.get('inherits-from', '')
            table = next((n for n in self.symbols[0] if n.tag == 'vtable-address'
                          and n.get('name') == original and not n.get('base')), None)
            fields = []
            for offset, size, path in shape.fields:
                if not path or not size:
                    continue
                member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                fields.append({'id': identity(member), 'name': member, 'offset': offset,
                               'size': size, 'storage': self.field_storage.get((name, path), 'unknown'),
                               'flags': (2 if name in self.snapshot_types or name.startswith('history_event_') else 0) |
                                        (3 if (name, member) in self.required_fields else 0)})
                if (name, path) in self.field_arrays:
                    fields[-1]['array'] = self.field_arrays[name, path]
            for (owner, path), (offset, size, storage) in self.aggregate_fields.items():
                if owner == name:
                    member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                    fields.append({'id': identity(member), 'name': member, 'offset': offset,
                                   'size': size, 'storage': storage,
                                   'flags': (2 if name in self.snapshot_types else 0) |
                                            (3 if (name, member) in self.required_fields else 0)})
            # named() lays out inherited storage first. A derived declaration
            # hides an inherited member with the same path; callers access the
            # latter through its parent type identity.
            fields = list({field['id']: field for field in sorted(fields, key=lambda field: field['offset'])}.values())
            methods = []
            for index, method in enumerate(self.virtuals(name)):
                member = '~' if method.get('is-destructor') == 'true' else method.get('name')
                signature = method_signature(method)
                methods.append({'id': identity(member), 'name': member, 'slot': index * 8,
                                'parameter_shape': identity(signature), 'signature': signature,
                                'argument_count': sum(child.tag not in ('ret-type', 'comment') for child in method),
                                'flags': 3 if (name == 'history_event' and member in self.required_history_methods) or
                                              (name, member) in self.required_methods else 0})
            types.append({'id': identity(name), 'name': name, 'original': original,
                          'parent_id': identity(parent) if parent else 0, 'parent': parent,
                          'size': shape.size, 'alignment': shape.alignment,
                          'flags': 1 if name in self.required_sizes else 0,
                          'reference_table': int(table.get('value'), 0) - 0x140000000 if table is not None else 0,
                          'fields': fields, 'methods': methods})
        enums = []
        for name, requested in sorted(enum_requirements(ROOT).items()):
            node = self.types.get(name)
            if node is None:
                continue
            if node.tag not in ('enum-type', 'bitfield-type'):
                raise ValueError('Native enum consumer names a non-enum type: ' + name)
            members, current = [], -1
            for child in node:
                if node.tag == 'enum-type' and child.tag == 'enum-item':
                    current = int(child.get('value', str(current + 1)), 0)
                    value = current
                elif node.tag == 'bitfield-type' and child.tag == 'flag-bit':
                    current += 1
                    width = int(child.get('count', '1'), 0)
                    if width != 1 or current >= 32:
                        if child.get('name') and (requested is None or child.get('name') in requested):
                            raise ValueError('Native bit consumer is not a single 32-bit flag: ' + name)
                        current += width - 1
                        continue
                    value = 1 << current
                else:
                    continue
                token = child.get('name')
                if not token or (requested is not None and token not in requested):
                    continue
                if not -(1 << 31) <= value < (1 << 32):
                    raise ValueError('Native enum value exceeds its contract: ' + name + '.' + token)
                members.append({'id': identity(token), 'name': token, 'value': value, 'flags': 1})
            enums.append({'id': identity(name), 'name': name, 'members': members})
        return {'schema': 1, 'platform': 'windows-x64-msvc', 'types': types, 'enums': enums}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--objdump', type=Path,
                        help='Disassembler from the normal build toolchain for reviewed PE library extents')
    args = parser.parse_args()
    library_layouts = {}
    if args.objdump is not None:
        if not args.objdump.is_file():
            raise RuntimeError(f'Required native disassembler is missing: {args.objdump}')
        from native_standard_library_layouts import canonical_layouts
        # The configured Classic image must match a packaged identity, and
        # its deleting destructor must have a complete reviewed canonical
        # correspondence. Neither the host STL nor the installed target's
        # library sizeof may define this reference declaration.
        library_layouts = canonical_layouts(ROOT, args.objdump)
    output = ROOT / 'src/native_history_layouts.inc'
    generator = Generator(library_layouts)
    text = generator.render()
    if not output.exists() or output.read_text() != text:
        output.write_text(text)
    semantic_output = ROOT / 'data/runtime/native-addresses/pe-layout-semantics.json'
    semantics = json.dumps(generator.semantic_metadata(), ensure_ascii=False, separators=(',', ':')) + '\n'
    if not semantic_output.exists() or semantic_output.read_text(encoding='utf-8') != semantics:
        semantic_output.parent.mkdir(parents=True, exist_ok=True)
        semantic_output.write_text(semantics, encoding='utf-8')
    print(f'Generated native declarations for all 133 history event types: {output}')

if __name__ == '__main__':
    main()
