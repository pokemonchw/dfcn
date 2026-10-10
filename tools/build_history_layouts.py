#!/usr/bin/env python3
"""Generate native field bindings from the pinned structural source.

The native ABI adapter owns layout, not the event/translation algorithms.
The legacy coordinates identify existing reviewed field accesses; they are not
used as native addresses. No game code is executed by this generator.
"""
from __future__ import annotations
from dataclasses import dataclass
from pathlib import Path
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

@dataclass
class Shape:
    cpp: str
    size: int
    alignment: int
    fields: list[tuple[int, int, str]]

class Generator:
    def __init__(self) -> None:
        self.types = {}
        for path in sorted(SOURCE.glob('df.*.xml')):
            for node in ET.parse(path).getroot():
                if node.get('type-name') and node.tag != 'global-object':
                    self.types[node.get('type-name')] = node
        self.cache: dict[str, Shape] = {}
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
        if tag == 'stl-variant' and node.get('raw-type') == 'std::string, std::function<void()>':
            return Shape('std::variant<std::string, std::function<void()>>', 72, 8, [])
        containers = {
            'stl-set': ('std::set<uintptr_t>', 16),
            'stl-map': ('std::map<uintptr_t, uintptr_t>', 16),
            'stl-unordered-map': ('std::unordered_map<uintptr_t, uintptr_t>', 64),
            'stl-unordered-set': ('std::unordered_set<uintptr_t>', 64),
            'stl-deque': ('std::deque<uintptr_t>', 32),
            'stl-bit-vector': ('std::vector<bool>', 40),
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
                for child_offset, length, path in shape.fields:
                    if path:
                        fields.append((start + child_offset, length, member + '.' + path))
            else:
                fields.append((start, shape.size, member))
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
            '#define DFCN_NATIVE_FIELD(type, member, reference) reference',
            '#define DFCN_NATIVE_BINDING(pe, elf) pe',
            '#else',
            '#define DFCN_NATIVE_FIELD(type, member, reference) offsetof(type, member)',
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
        roots = {'world_data', 'world_region', 'world_site', 'historical_figure', 'historical_entity',
                 'historical_figure_info', 'interaction_profilest', 'creature_raw', 'caste_raw',
                 'identity', 'artifact_record', 'item', 'item_toolst', 'itemdef_toolst', 'itemdef_instrumentst',
                 'itemdef_weaponst', 'itemdef_armorst', 'itemdef_shoesst',
                 'itemdef_shieldst', 'itemdef_helmst', 'itemdef_glovesst',
                 'itemdef_ammost', 'itemdef_pantsst', 'itemdef_toyst',
                 'itemdef_siegeammost', 'itemdef_trapcompst',
                 'agreement', 'agreement_details', 'agreement_details_data_join_party',
                 'activity_entry', 'activity_event_conversationst', 'utterancest',
                 'work_detail', 'labor_work_details_interfacest', 'widget_radio_rows',
                 'custom_stockpile_interfacest', 'construction_interfacest', 'create_work_order_interfacest',
                 'location_selector_interfacest',
                 'entity_entity_link',
                 'entity_raw', 'entity_site_link', 'entity_site_ab_profilest',
                 'entity_position', 'entity_position_assignment',
                 'general_ref_is_artifactst', 'plant_raw', 'material', 'inorganic_raw', 'building_def',
                 'viewscreen_legendsst', 'viewscreen_new_regionst',
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
                 'name_creator_interfacest', 'language_word', 'language_translation', 'language_name'}
        roots.update(name for name, node in self.types.items()
                     if node.tag in ('class-type', 'struct-type') and
                     name.startswith(('history_event_collection', 'abstract_building',
                                      'world_construction', 'interaction_effect',
                                      'creature_interaction_effect_display_name', 'general_ref',
                                      'item_', 'itemimprovement', 'art_image', 'interaction_source')))
        for name in sorted(roots):
            self.named(name)
        lines = [*header, *self.lines,
                 'struct Field { size_t legacy, native, size; const char *name = nullptr; };',
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
                lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({shape.cpp}, {path}, 0x{legacy:x}), {length}}},')
            lines.append('};')
        lines.append('static constexpr Event events[] = {')
        for value, _, _ in events:
            lines.append(f'    {{event_{value}, std::size(event_{value})}},')
        lines.append('};')
        lines.append('static constexpr Field world_fields[] = {')
        for legacy, length, path in world.fields:
            if path and length:
                lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({world.cpp}, {path}, 0x{legacy:x}), {length}}},')
        lines.append('};')
        for name in sorted(roots):
            shape = self.cache[name]
            count = sum(bool(path and length) for _, length, path in shape.fields)
            lines.append(f'static constexpr std::array<Field, {count}> {ident(name)}_fields = {{{{')
            for legacy, length, path in shape.fields:
                if path and length:
                    member = '.'.join(part.removeprefix('f_') for part in path.split('.'))
                    lines.append(f'    {{0x{legacy:x}, DFCN_NATIVE_FIELD({shape.cpp}, {path}, 0x{legacy:x}), {length}, "{member}"}},')
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
            lines.append(f'static constexpr size_t textbox_{label}_offset = '
                         f'DFCN_NATIVE_FIELD({textbox.cpp}, {path}, 0x{legacy:x});')
        stocks = self.cache['stocks_interfacest']
        for label, member in (('open', 'open'), ('filter', 'item_filter'),
                              ('entering_filter', 'entering_item_filter')):
            path = ident(member)
            legacy = next(offset for offset, _, field in stocks.fields if field == path)
            lines.append(f'static constexpr size_t stocks_{label}_offset = '
                         f'DFCN_NATIVE_FIELD({stocks.cpp}, {path}, 0x{legacy:x});')
        squad = self.cache['squad']
        alias_path = ident('alias')
        alias_legacy = next(offset for offset, _, field in squad.fields
                            if field == alias_path)
        lines.append('static constexpr size_t squad_alias_offset = '
                     f'DFCN_NATIVE_FIELD({squad.cpp}, {alias_path}, 0x{alias_legacy:x});')
        lines.append('struct ModScreenFields { size_t active, hover_rows; std::array<size_t, 3> headers; };')
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
        lines.append('struct Object { const char *name, *parent; uintptr_t table; const Field *fields; size_t count; const size_t *slots; size_t slot_count; };')
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
            parent = self.types[name].get('inherits-from', '')
            lines.append(f'    {{"{name}", "{parent}", DFCN_NATIVE_BINDING(0x{addresses[0]:x}, 0x{addresses[1]:x}), {ident(name)}_fields.data(), std::size({ident(name)}_fields), {slots}}},')
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


def main() -> None:
    output = ROOT / 'src/native_history_layouts.inc'
    text = Generator().render()
    if not output.exists() or output.read_text() != text:
        output.write_text(text)
    print(f'Generated native declarations for all 133 history event types: {output}')

if __name__ == '__main__':
    main()
