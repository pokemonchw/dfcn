"""Collect ELF reference coordinates for the normal startup-seed build."""
from pathlib import Path
import re

from native_pe_coordinates import _TOKEN, _windows_source, _select_search_element, _file_coordinates


EXCLUDED = {
    'native_reference_binding.inc', 'native_image_adapter.inc', 'native_runtime.h',
    'native_address_scan.h', 'native_elf_resolver.h', 'native_elf_image.h',
    'linux_legends_books.inc',  # Retired, not included by the core.
}


def sources(root):
    directory = Path(root) / 'src'
    pending, visited = [directory / 'dfcn.cpp'], set()
    while pending:
        path = pending.pop()
        if path in visited or not path.is_file():
            continue
        visited.add(path)
        text = _windows_source(path.read_text(encoding='utf-8-sig'),
                               {'__linux__', '__GNUC__', '__x86_64__'}, keep_includes=True)
        pending.extend(directory / name for name in re.findall(r'#\s*include\s*"([^"/]+)"', text)
                       if not name.endswith('_pe.inc'))
    return [p for p in sorted(visited) if p.suffix in ('.h', '.inc', '.cpp')
            and p.name not in EXCLUDED and 'build_bindings' not in p.stem]


def collect(root):
    required = {}
    for path in sources(root):
        text = _windows_source(path.read_text(encoding='utf-8-sig'), {'__linux__', '__GNUC__', '__x86_64__'})
        if path.name == 'native_history_layouts.inc':
            for match in re.finditer(r'DFCN_NATIVE_BINDING\s*\([^,]+,\s*(0x[0-9a-fA-F]+|\d+)\s*\)', text):
                value = int(match[1], 0)
                if value >= 0x10000:
                    required[value + 0x400000] = max(required.get(value + 0x400000, 0), 1)
            continue
        if path.name == 'native_adventure_introduction.inc':
            # This owner's fixed UTF-16 MessageBox patch belongs to PE only.
            continue
        if path.name == 'native_caption_profile.inc':
            # Only the reference column is seed evidence. Classic has its
            # existing packaged map and never borrows reference coordinates.
            begin = text.index('static constexpr NativeElfCaptionProfile native_elf_caption_profiles[]')
            end = text.index('static const NativeElfCaptionProfile *native_elf_caption_profile', begin)
            profile = text[begin:end].split('{"84ba59a59a6bbe4487f933a8c85360a45902749e"', 1)[0]
            for value in re.findall(r'0x[0-9a-f]+', profile):
                required[int(value, 16)] = max(required.get(int(value, 16), 0), 5)
            text = text[:begin] + text[end:]
        if path.name == 'native_rich_profile.inc':
            for value in re.findall(r'steam\s*\?\s*(0x[0-9a-f]+)', text):
                required[int(value, 16)] = 8
            calls = re.search(r'signatures = steam \? std::vector<uintptr_t>\{([^}]+)', text)
            if calls:
                for value in re.findall(r'0x[0-9a-f]+', calls[1]):
                    required[int(value, 16)] = 5
            for value in re.findall(r'\{(0x[0-9a-f]+), 0x[0-9a-f]+, NativeRichCallKind::', text):
                required[int(value, 16)] = 5
        tokens = _select_search_element(path.name, _TOKEN.findall(text), elf=True)
        _file_coordinates(path.name, tokens, required, elf=True)
        if path.name == 'native_history_profile_elf.inc':
            for address, content in re.findall(r'bytes_match\((0x[0-9a-f]+),\s*\{([^}]+)\}', text):
                required[int(address, 16)] = len(re.findall(r'0x[0-9a-f]+', content))
    return dict(sorted(required.items()))
