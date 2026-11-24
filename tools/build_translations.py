#!/usr/bin/env python3
"""Build DFCN's compact runtime dictionary from the bundled community data.

The source data intentionally stays in its original CSV/TOML form so updates can
be reviewed and regenerated instead of hand-editing a large generated TSV.
"""

from __future__ import annotations

import argparse
import ast
import collections
import csv
import json
import os
import re
import stat
import sys
import tempfile
import tomllib
from contextlib import contextmanager
from dataclasses import dataclass
from pathlib import Path
from legends_grammar import compile_events, indexed as index_template_target
from book_title_grammar import compile_book_title_phrases
from magical_materials import material_names
from extract_tooltip_catalog import building_tooltip_sources
from extract_workshop_tooltip_catalog import native_game_directory, workshop_tooltip_sources
from announcement_grammar import combat_entries


ROOT = Path(__file__).resolve().parents[1]
GAME = native_game_directory(ROOT)
CREATURE_RAW_ROOTS = (
    GAME / "data/vanilla/vanilla_creatures/objects",
    GAME / "data/vanilla/vanilla_creatures_extinct/objects",
)
CREATURE_GENDER_MARKERS = "雌雄公母"


@dataclass(frozen=True)
class Entry:
    source: str
    target: str
    flags: str
    origin: str
    priority: int


def normalize_source(text: str) -> str:
    """Normalize punctuation that DF's one-byte screen grid renders as ASCII."""
    return text.translate(
        str.maketrans(
            {
                "\u2018": "'",
                "\u2019": "'",
                "\u201c": '"',
                "\u201d": '"',
                "\u2013": "-",
                "\u2014": "-",
                "\u2026": "...",
                "\u00a0": " ",
            }
        )
    )


def tsv_escape_bytes(data: bytes) -> str:
    out: list[str] = []
    for value in data:
        if value == 0x5C:
            out.append("\\\\")
        elif value == 0x09:
            out.append("\\t")
        elif value == 0x0A:
            out.append("\\n")
        elif value == 0x0D:
            out.append("\\r")
        elif value == 0x23 and not out:
            out.append("\\#")
        elif 0x20 <= value < 0x7F:
            out.append(chr(value))
        else:
            out.append(f"\\x{value:02X}")
    return "".join(out)


def tsv_escape_target(text: str) -> str:
    return (
        text.replace("\\", "\\\\")
        .replace("\t", "\\t")
        .replace("\n", "\\n")
        .replace("\r", "\\r")
    )


def screen_bytes(source: str) -> bytes | None:
    source = normalize_source(source)
    try:
        return source.encode("cp437")
    except UnicodeEncodeError:
        return None


def ascii_fold(text: str) -> str:
    return "".join(chr(ord(char) + 32) if "A" <= char <= "Z" else char for char in text)


def is_keybinding_code(raw_label: str) -> bool:
    """Return whether *raw_label* is a complete DF key identifier.

    Key identifiers are protocol-like UI values, not prose.  They must remain
    canonical English (with optional SDL punctuation-name normalization done
    by the runtime), otherwise a dictionary hit can briefly render translated
    key names before the structured key-binding layout is recognized.
    """
    label = raw_label.strip()
    if not label:
        return False

    modifier = re.compile(r"^(?:Shift|Ctrl|Alt|Meta)\s*\+\s*")
    while match := modifier.match(label):
        label = label[match.end() :].strip()
    if not label:
        return False

    named = {
        "Enter", "Numpad Enter", "ESC", "Escape", "Tab", "Space",
        "Backspace", "Delete", "Insert", "Home", "End", "Page Up",
        "Page Down", "PgUp", "PgDn", "Up", "Down", "Left", "Right",
        "up", "down", "left", "right", "Leftbracket", "Rightbracket",
        "Left bracket", "Right bracket", "Equals", "Minus", "Plus",
        "Mwheel up", "Mwheel down", "Caps Lock", "Num Lock",
        "Scroll Lock", "Print Screen", "Pause", "Exclaim", "Quotedbl",
        "Hash", "Dollar", "Percent", "Ampersand", "Quote", "Leftparen",
        "Rightparen", "Asterisk", "Comma", "Period", "Slash", "Colon",
        "Semicolon", "Less", "Greater", "Question", "At", "Backslash",
        "Caret", "Underscore", "Backquote", "Pipe",
    }
    if label in named:
        return True
    if label.startswith("Numpad "):
        key = label[7:].strip()
        return bool(re.fullmatch(r"\d+", key)) or key in {
            "+", "-", "*", "/", ".", "Plus", "Minus", "Multiply",
            "Divide", "Period", "Enter",
        }
    return bool(
        re.fullmatch(r"[!-~]", label)
        or re.fullmatch(r"F\d+", label)
        or re.fullmatch(r"Mouse \d+", label)
    )


def unescape_local_source(text: str) -> str:
    """Decode the mapping syntax used by screen dumps and the collector.

    ``\\xNN`` denotes a raw CP437 screen byte, not Unicode U+00NN.  Decoding
    through CP437 before ``screen_bytes()`` makes the later encode round-trip
    to exactly the original byte (notably the sex glyphs at 0x0B/0x0C).
    Unknown escapes are preserved so literal paths remain usable.
    """
    output: list[str] = []
    index = 0
    while index < len(text):
        char = text[index]
        if char != "\\" or index + 1 >= len(text):
            output.append(char)
            index += 1
            continue
        escaped = text[index + 1]
        if escaped == "x" and index + 3 < len(text):
            digits = text[index + 2 : index + 4]
            if re.fullmatch(r"[0-9A-Fa-f]{2}", digits):
                output.append(bytes([int(digits, 16)]).decode("cp437"))
                index += 4
                continue
        replacements = {"\\": "\\", "t": "\t", "n": "\n", "r": "\r", "#": "#"}
        if escaped in replacements:
            output.append(replacements[escaped])
            index += 2
            continue
        output.extend(("\\", escaped))
        index += 2
    return "".join(output)


def parse_local(path: Path) -> list[Entry]:
    entries: list[Entry] = []
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) < 2:
            print(f"warning: {path}:{line_no}: malformed local rule", file=sys.stderr)
            continue
        entries.append(Entry(unescape_local_source(fields[0]), fields[1],
                             fields[2] if len(fields) > 2 else "", "local", 400))
    return entries


def require_conversation_keywords(chosen: dict[bytes, Entry], path: Path) -> int:
    """Do not publish a dictionary missing an inventoried native search word."""
    # Native removes duplicate words from each entire keyword vector. A word
    # must therefore remain translatable on its own even when a reviewed
    # contextual phrase containing that word also exists in the catalog.
    with path.open(encoding="utf-8-sig", newline="") as source:
        rows = csv.DictReader((line for line in source if not line.startswith("#")),
                              delimiter="\t")
        if rows.fieldnames != ["keyword", "source_function", "source_address", "data_address"]:
            raise ValueError(f"Invalid conversation keyword source columns: {path}")
        keywords = set()
        for row in rows:
            keyword = row["keyword"]
            if not keyword or not row["source_function"] or not row["source_address"]:
                raise ValueError(f"Incomplete conversation keyword provenance: {row!r}")
            keywords.add(keyword)
    if not keywords:
        raise ValueError(f"Empty conversation keyword source catalog: {path}")
    missing = []
    for keyword in sorted(keywords):
        key = screen_bytes("Conversation keyword: " + keyword)
        entry = chosen.get(key)
        if (entry is None or not entry.target.strip() or
                re.search(r"[A-Za-z{}]", entry.target) or "t" in entry.flags):
            missing.append(keyword)
    if missing:
        raise ValueError("Missing complete conversation keyword translations: " + repr(missing))
    return len(keywords)


def require_key_context(source: str, path: Path, line_no: int) -> None:
    if "{k}" not in source:
        return
    # Keys are typed slots in reviewed complete messages. A bare slot or two
    # adjacent slots could turn arbitrary English into a sequence of letters.
    if not source.split("{k}", 1)[0].strip() or re.search(r"\{k\}\s*\{k\}", source):
        raise ValueError(f"{path}:{line_no}: key slots require fixed text context: {source!r}")


def ui_message_variants(source: str, target: str) -> list[tuple[str, str, bool]]:
    """Expand one authored optional native fragment into complete messages.

    [[...]] pairs source and target syntax, including any intervening fields.
    Index captures before removing the fragment so Chinese reordering cannot
    silently bind a remaining target field to a different source occurrence.
    The boolean identifies the omitted branch, which may be shared by several
    native alternatives (for example the climbing medium variants).
    """
    optional = re.compile(r"\[\[([^\[\]]+)\]\]")
    groups = [list(optional.finditer(value)) for value in (source, target)]
    if any("[[" in optional.sub("", value) or "]]" in optional.sub("", value)
           for value in (source, target)) or [len(group) for group in groups] not in ([0, 0], [1, 1]):
        raise ValueError("UI optional fragments require one non-nested source/target pair")
    if not groups[0]:
        return [(source, target, False)]

    target, _ = index_template_target(source, target)
    field = re.compile(r"\{([ksncdpertbqmviuf])([1-9][0-9]*)?\}")
    counts: collections.Counter = collections.Counter()

    def index_source(match: re.Match) -> str:
        kind = match[1]
        counts[kind] += 1
        return f"{{{kind}{counts[kind]}}}"

    indexed_source = field.sub(index_source, source)
    source_group = optional.search(indexed_source)
    target_group = optional.search(target)
    if set(field.findall(source_group[1])) != set(field.findall(target_group[1])):
        raise ValueError("UI optional source/target fragments must retain the same captures")
    variants = []
    for present in (True, False):
        source_variant = optional.sub(lambda match: match[1] if present else "", indexed_source)
        target_variant = optional.sub(lambda match: match[1] if present else "", target)
        counts.clear()
        remap: dict[tuple[str, str], str] = {}
        for match in field.finditer(source_variant):
            kind, original_index = match.groups()
            counts[kind] += 1
            remap[kind, original_index] = f"{{{kind}{counts[kind]}}}"
        source_variant = field.sub(lambda match: "{" + match[1] + "}", source_variant)
        target_variant = field.sub(lambda match: remap[match.groups()], target_variant)
        variants.append((" ".join(source_variant.split()), target_variant.strip(), not present))
    return variants


def parse_ui_messages(path: Path, inventory: Path, *, documented_provenance: bool = False) -> list[Entry]:
    """Compile whole UI messages and require every inventoried native draw."""
    entries: dict[str, Entry] = {}
    identities: set[str] = set()
    compiled_identities: dict[str, tuple[Entry, bool]] = {}
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 2:
            raise ValueError(f"{path}:{line_no}: expected complete English and Chinese")
        source = " ".join(unescape_local_source(fields[0]).split())
        target = fields[1].strip()
        if not source or not target or screen_bytes(source) is None:
            raise ValueError(f"{path}:{line_no}: invalid complete UI message: {source!r}")
        if re.search(r"[{}]", re.sub(r"\{[ksncdpertbqmviuf]\}", "", source)) or re.search(
                r"[{}]", re.sub(r"\{[ksncdpertbqmviuf](?:[1-9][0-9]*)?\}", "", target)):
            raise ValueError(f"{path}:{line_no}: invalid UI message template")
        # Mirror the runtime prose trie: native spacing is not identity.
        identity = "".join(source.split())
        if identity in identities:
            raise ValueError(f"{path}:{line_no}: repeated complete UI message: {source!r}")
        identities.add(identity)
        try:
            variants = ui_message_variants(source, target)
        except ValueError as error:
            raise ValueError(f"{path}:{line_no}: {error}") from error
        for source, target, omitted in variants:
            if not source or not target:
                raise ValueError(f"{path}:{line_no}: optional UI fragment leaves an empty message")
            template = bool(re.search(r"\{[ksncdpertbqmviuf]\}", source))
            if template:
                require_key_context(source, path, line_no)
                literals = re.split(r"\{[ksncdpertbqmviuf]\}", source)
                if ("{k}" in source and not literals[0].strip()) or not any(
                        part.strip() for part in literals) or any(
                        not part.strip() for part in literals[1:-1]):
                    raise ValueError(f"{path}:{line_no}: UI captures require fixed literal boundaries")
                target, _ = index_template_target(source, target)
            elif "{" in target or "}" in target:
                raise ValueError(f"{path}:{line_no}: target capture without source capture")
            dialogue = path.name in {"announcement-dialogue-translations.tsv",
                                     "announcement-dialogue-extra-translations.tsv"}
            flags = ("hPt" if template else "hP") + ("D" if dialogue else "")
            entry = Entry(source, target, flags, "DFCN UI messages", 400)
            identity = "".join(source.split())
            if previous := compiled_identities.get(identity):
                # Only identical omitted productions may converge. Authored
                # duplicates and conflicting translations remain errors.
                if not (omitted or previous[1]) or previous[0] != entry:
                    raise ValueError(f"{path}:{line_no}: conflicting/repeated UI variant: {source!r}")
                compiled_identities[identity] = (entry, omitted and previous[1])
            else:
                compiled_identities[identity] = (entry, omitted)
            entries[source] = entry

    reviewed: set[tuple[str, str, str]] = set()
    missing: list[str] = []
    for line_no, raw in enumerate(inventory.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 3 or not fields[0] or not fields[1] or not (
                re.search(r"\b0x[0-9a-fA-F]+\b", fields[1]) if documented_provenance else re.fullmatch(
                    r"0x[0-9a-fA-F]+(?:\+0x[0-9a-fA-F]+)*", fields[1])):
            raise ValueError(f"{inventory}:{line_no}: expected family, native source address/offset sequence and source")
        family, address, source = fields
        source = " ".join(unescape_local_source(source).split())
        if not source or (family, address, source) in reviewed:
            raise ValueError(f"{inventory}:{line_no}: empty source or repeated native draw")
        reviewed.add((family, address, source))
        if source not in entries:
            missing.append(f"{family} ({address}): {source}")
    if not reviewed:
        raise ValueError(f"{inventory}: no reviewed native UI sources")
    if missing:
        raise ValueError("Missing complete UI translations:\n" + "\n".join(missing))
    return list(entries.values())


def parse_help_documents(path: Path, inventory: Path) -> list[Entry]:
    """Compile native help fragments against the reviewed source inventory.

    A nonempty dictionary alone says nothing about missing tutorial branches.
    Track source strings separately from their translations, as for tooltips
    and UI messages, so a missing branch cannot be silently published.
    """
    entries: dict[str, Entry] = {}
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) not in (2, 3) or (len(fields) == 3 and fields[2] != "t"):
            raise ValueError(f"{path}:{line_no}: expected complete help source, translation and optional t flag")
        source = " ".join(unescape_local_source(fields[0]).split())
        target = fields[1].strip()
        if not source or not target or screen_bytes(source) is None:
            raise ValueError(f"{path}:{line_no}: invalid or untranslated help fragment: {source!r}")
        visible_target = re.sub(r"\[C:[0-7]:[0-7]:[01]\]", "", target)
        if "[C:" in visible_target or not visible_target.strip():
            raise ValueError(f"{path}:{line_no}: invalid help color tag or empty visible translation")
        # This native divine production inserts an inorganic material noun,
        # not a place/entity name. Its runtime resolver owns this one s slot.
        kinds = "persdk" if source == (
            "The remnants of creation, {s}, belong with my followers, {e}."
        ) else "perdk"
        template = bool(re.search(rf"\{{[{kinds}]\}}", source))
        if len(fields) == 3 and not template:
            raise ValueError(f"{path}:{line_no}: help template flag without captures")
        if "{" in source or "}" in source or "{" in target or "}" in target:
            if not template or re.search(r"[{}]", re.sub(rf"\{{[{kinds}]\}}", "", source)):
                raise ValueError(f"{path}:{line_no}: invalid help name/place template: {source!r}")
            if re.search(r"[{}]", re.sub(rf"\{{[{kinds}](?:[1-9][0-9]*)?\}}", "", target)):
                raise ValueError(f"{path}:{line_no}: invalid help target captures: {target!r}")
            # Reuse shared capture indexing: every dynamic person/place must
            # survive Chinese word reordering exactly once.
            target, _ = index_template_target(source, target)
        require_key_context(source, path, line_no)
        # The shared runtime matches complete prose independently of wrapping.
        identity = "".join(source.split())
        if identity in entries and entries[identity].target != target:
            raise ValueError(f"{path}:{line_no}: conflicting help translations: {source!r}")
        entries[identity] = Entry(source, target, "hqt" if template else "hq", "DFCN help", 400)

    reviewed: set[tuple[str, str, str]] = set()
    objectives: set[str] = set()
    missing: list[str] = []
    for line_no, raw in enumerate(inventory.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 3 or not fields[0].strip() or not fields[1].strip():
            raise ValueError(f"{inventory}:{line_no}: expected family, provenance and help source")
        family, provenance, source = fields
        source = " ".join(unescape_local_source(source).split())
        if not source:
            raise ValueError(f"{inventory}:{line_no}: empty native help source")
        reviewed.add((family, provenance, source))
        identity = "".join(source.split())
        if family == "tutorial-objective":
            objectives.add(identity)
        if identity not in entries:
            missing.append(f"{family} ({provenance}): {source}")
    if not reviewed:
        raise ValueError(f"{inventory}: no reviewed native help sources")
    if missing:
        raise ValueError("Missing complete help/tutorial translations:\n" + "\n".join(missing))
    # Objectives share the help frame but are independent native controls,
    # often in two columns beside checkmarks. Keep their source identity in
    # the compiled catalog so the renderer never reflows them as body prose.
    return [Entry(entry.source, entry.target,
                  entry.flags + ("O" if identity in objectives else ""), entry.origin, entry.priority)
            for identity, entry in entries.items()]


def parse_item_descriptions(path: Path) -> list[Entry]:
    """Compile the item generator's sentence and noun grammar in separate scopes."""
    entries: list[Entry] = []
    seen: set[tuple[str, str]] = set()
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 3 or fields[0] not in {"sentence", "term", "predicate"}:
            raise ValueError(f"{path}:{line_no}: expected scope, English, Chinese")
        scope, source, target = fields
        source = " ".join(unescape_local_source(source).split())
        if not source or not target.strip() or (scope, source) in seen:
            raise ValueError(f"{path}:{line_no}: empty or repeated item description rule")
        seen.add((scope, source))
        # Item captions capitalize each word while prose uses the same noun
        # in lower case. Fold only term literals; keep captured names intact.
        flags = {"sentence": "hH", "term": "hIi", "predicate": "hJ"}[scope]
        if re.search(r"\{[dsnrpaticebqukmflvjo]\}", source):
            flags += "t"
        entries.append(Entry(source, target, flags, "DFCN item descriptions", 400))
    return entries


def parse_po_field(block: str, name: str) -> str:
    """Return one possibly-wrapped gettext field from an entry block."""
    parts: list[str] = []
    active = False
    prefix = name + " "
    for line in block.splitlines():
        if line.startswith(prefix):
            active = True
            parts.append(ast.literal_eval(line[len(prefix) :]))
            continue
        if active and line.startswith('"'):
            parts.append(ast.literal_eval(line))
            continue
        if active:
            break
    return "".join(parts)


def normalize_description(text: str) -> str:
    """Match DF prose independently of RAW/PO wrapping whitespace."""
    return " ".join(text.split())


def parse_creature_description_po(path: Path) -> dict[str, str]:
    """Load complete translated ``[DESCRIPTION:]`` values from gettext."""
    translated: dict[str, str] = {}
    for block in re.split(r"\n\s*\n", path.read_text(encoding="utf-8-sig")):
        source = parse_po_field(block, "msgid")
        target = parse_po_field(block, "msgstr")
        if not (source.startswith("[DESCRIPTION:") and source.endswith("]")):
            continue
        if not (target.startswith("[DESCRIPTION:") and target.endswith("]")):
            continue
        source = normalize_description(source[len("[DESCRIPTION:") : -1])
        target = target[len("[DESCRIPTION:") : -1].strip()
        if not source or not target:
            continue
        previous = translated.get(source)
        if previous is not None and previous != target:
            raise ValueError(f"{path}: conflicting creature description: {source!r}")
        translated[source] = target
    return translated


CREATURE_NAME_TAG_FIELDS = {
    "NAME": 3,
    "CASTE_NAME": 3,
    "GENERAL_CHILD_NAME": 2,
    "CHILDNAME": 2,
    "GENERAL_BABY_NAME": 2,
    "BABYNAME": 2,
}


def parse_creature_name_tag(text: str) -> tuple[str, list[str]] | None:
    """Return the translated name forms carried by one creature RAW tag."""
    match = re.fullmatch(r"\[([A-Z_]+):(.*)\]", text)
    if match is None:
        return None
    tag, payload = match.groups()
    expected_fields = CREATURE_NAME_TAG_FIELDS.get(tag)
    if expected_fields is None:
        return None
    fields = payload.split(":")
    if len(fields) != expected_fields:
        return None
    return tag, fields


def parse_creature_names(
    path: Path,
) -> tuple[list[Entry], dict[str, set[str]]]:
    """Load every adult, caste, child, and baby name form from gettext.

    The embark animal picker uses plural caste and juvenile forms directly
    from the creature RAWs.  The recursive community rules mostly expose only
    singular names, so flattening those rules alone leaves suffixes such as
    ``gobblers`` and ``calves`` in English.  The PO keeps the complete RAW tag
    on both sides and therefore provides a finite source for all of the forms.

    Context-free duplicates with genuinely different translations are left to
    the higher-priority reviewed dictionaries.  Sex markers are removed here
    because creature pickers render their own independent female/male glyph.

    CHILD tags are shared by animals and sapient creatures. Only animal
    CHILD forms should be standardized as ``adult name + 幼崽``; sapient
    age names retain their reviewed baby/child translations.
    """
    targets_by_source: dict[str, set[str]] = collections.defaultdict(set)
    animal_juvenile_adults: dict[str, set[str]] = collections.defaultdict(set)
    name_state_by_context: dict[str, dict[str, str]] = collections.defaultdict(dict)
    sapient_contexts = installed_sapient_creature_contexts(CREATURE_RAW_ROOTS)
    for block in re.split(r"\n\s*\n", path.read_text(encoding="utf-8-sig")):
        context = parse_po_field(block, "msgctxt")
        if not context.startswith("CREATURE:"):
            continue
        source_tag = parse_creature_name_tag(parse_po_field(block, "msgid"))
        if source_tag is None:
            continue
        source_kind, source_fields = source_tag
        name_state = name_state_by_context[context]
        if source_kind == "NAME":
            name_state["base"] = normalize_source(source_fields[0]).strip()
        elif source_kind == "CASTE_NAME":
            name_state["caste"] = normalize_source(source_fields[0]).strip()
        elif (source_kind in ("GENERAL_CHILD_NAME", "CHILDNAME") and
              context not in sapient_contexts):
            adult_key = "base" if source_kind == "GENERAL_CHILD_NAME" else "caste"
            adult_source = name_state.get(adult_key) or name_state.get("base", "")
            if adult_source:
                for juvenile_source in source_fields:
                    juvenile_source = normalize_source(juvenile_source).strip()
                    if juvenile_source and juvenile_source != adult_source:
                        animal_juvenile_adults[juvenile_source].add(adult_source)

        target_tag = parse_creature_name_tag(parse_po_field(block, "msgstr"))
        if target_tag is None:
            continue
        target_kind, target_fields = target_tag
        if source_kind != target_kind or len(source_fields) != len(target_fields):
            continue
        for source, target in zip(source_fields, target_fields):
            source = normalize_source(source).strip()
            target = remove_creature_gender_markers(target.strip())
            if (not source or not target or source == target or
                    not re.search(r"[\u3400-\u9fff]", target)):
                continue
            targets_by_source[source].add(target)

    entries = [
        Entry(
            source,
            next(iter(targets)),
            "wi",
            "DFI18n creature names",
            190,
        )
        for source, targets in sorted(targets_by_source.items())
        if len(targets) == 1
    ]
    return entries, dict(animal_juvenile_adults)


def parse_preference_strings(path: Path, *, include_plants: bool = False) -> list[Entry]:
    """Load complete ``[PREFSTRING:]`` phrases from gettext.

    Character preference prose inserts these RAW values after ``for their``.
    They are not creature names and were therefore skipped by the existing PO
    import, leaving otherwise complete generated paragraphs with an English
    tail such as ``casques``. Community entries occasionally use different
    Chinese synonyms for the same English phrase. Those finite conflicts are
    reviewed below so every vanilla preference string still has one stable
    context-free rendering.
    """
    reviewed_conflicts = {
        "great size": "巨大体型",
        "curiosity": "好奇心",
        "fishing ability": "捕鱼能力",
        "ear tufts": "耳羽",
        "strength": "力量",
        "wool": "羊毛",
        "jutting teeth": "凸出的牙齿",
        "terrifying features": "恐怖的面容",
        "ability to hold liquor": "酒量",
        "tusks": "獠牙",
        "speed": "速度",
        "stripes": "条纹",
        "long bodies": "修长的身躯",
        "grace": "优雅",
        "underground communities": "地下社群",
        "striped faces": "带条纹的脸",
        "large striped tails": "带条纹的大尾巴",
        "roars": "咆哮",
        "spotted coats": "斑点皮毛",
        "antics": "滑稽动作",
        "ability to swing through the trees": "在树间荡跃的能力",
        "patience": "耐心",
        "ability to change color": "变色能力",
        "eyes": "眼睛",
        "dewlaps": "喉垂",
        "playfulness": "淘气",
        "feeding habits": "取食习性",
        "roots": "根系",
    }
    targets_by_source: dict[str, set[str]] = collections.defaultdict(set)
    for block in re.split(r"\n\s*\n", path.read_text(encoding="utf-8-sig")):
        context = parse_po_field(block, "msgctxt")
        contexts = ("CREATURE:", "PLANT:") if include_plants else ("CREATURE:",)
        if not context.startswith(contexts):
            continue
        source_match = re.fullmatch(
            r"\[PREFSTRING:(.*)\]", parse_po_field(block, "msgid")
        )
        target_match = re.fullmatch(
            r"\[PREFSTRING:(.*)\]", parse_po_field(block, "msgstr")
        )
        if source_match is None or target_match is None:
            continue
        source = normalize_source(source_match.group(1)).strip()
        target = target_match.group(1).strip()
        if (not source or not target or source == target or
                not re.search(r"[\u3400-\u9fff]", target)):
            continue
        targets_by_source[source].add(target)

    entries: list[Entry] = []
    for source, targets in sorted(targets_by_source.items()):
        target = reviewed_conflicts.get(source)
        if target is None:
            if len(targets) != 1:
                raise ValueError(
                    f"unreviewed creature preference conflict: {source!r}: "
                    f"{sorted(targets)!r}"
                )
            target = next(iter(targets))
        entries.append(Entry(
            source,
            target,
            "wi",
            "DFI18n creature preference strings",
            190,
        ))
    return entries


def write_preference_vocabulary(args: argparse.Namespace) -> None:
    """Compile native preference fields without polluting UI word senses.

    PREFSTRING is a complete noun phrase, not a list of words. In particular,
    commas/``and`` inside it belong to that phrase. Keep all plants, living
    animals, extinct animals and procedural-creature reasons in this scoped
    table; the general dictionary still keeps its existing creature import.
    """
    reasons = {
        entry.source: entry.target
        for entry in parse_preference_strings(args.creature_objects, include_plants=True)
    }
    for entry in parse_local(args.preference_overrides):
        reasons[entry.source] = entry.target

    # Refuse to silently generate an incomplete vocabulary when installed
    # RAWs introduce a new reason. This is an input requirement of the asset
    # compiler, not a runtime translation/self-test.
    required: set[str] = set()
    roots = (*CREATURE_RAW_ROOTS, GAME / "data/vanilla/vanilla_plants/objects")
    for root in roots:
        for raw in sorted(root.glob("*.txt")):
            required.update(re.findall(
                r"\[PREFSTRING:([^\]]+)\]", raw.read_text(encoding="cp437")
            ))
    missing = sorted(required - reasons.keys())
    if missing:
        raise ValueError("PREFSTRING needs a reviewed translation: " + ", ".join(missing))

    # 0x480271 reads STATE_NAME, while the food selector's DRINK,
    # LIQUID_MISC, POWDER_MISC and CHEESE calls insert complete RAW material
    # names without a trailing item-category word. The general dictionary
    # deliberately drops adjective/noun conflicts, so it cannot be the
    # authoritative vocabulary for those fields (hempseed oil, rice flour,
    # every millet beer and every creature cheese are affected). Import the
    # complete translated RAW fields into the preference namespace instead.
    # Keep names containing commas/conjunctions whole, just like PREFSTRING.
    field_targets: dict[str, set[str]] = collections.defaultdict(set)
    material_field_targets: dict[str, set[str]] = collections.defaultdict(set)
    material_state_sources: set[str] = set()
    item_field_targets: dict[tuple[str, str, str], set[str]] = collections.defaultdict(set)
    for block in re.split(r"\n\s*\n", args.creature_objects.read_text(encoding="utf-8-sig")):
        context = parse_po_field(block, "msgctxt")
        source_tag = re.fullmatch(r"\[([A-Z_]+):(.*)\]", parse_po_field(block, "msgid"))
        if source_tag is None:
            continue
        tag = source_tag[1]
        sources = source_tag[2].split(":")
        # A reviewed override can supply a missing or ambiguous gettext
        # translation, but only a real STATE_NAME field licenses that key in
        # the material-state vocabulary used after a creature/owner prefix.
        if tag in {"STATE_NAME", "STATE_NAME_ADJ"} and len(sources) == 2:
            material_state_sources.add(normalize_source(sources[1]).strip())
        target_tag = re.fullmatch(r"\[([A-Z_]+):(.*)\]", parse_po_field(block, "msgstr"))
        if target_tag is None or tag != target_tag[1]:
            continue
        targets = target_tag[2].split(":")
        # SEED permits an empty trailing color field. Some gettext entries
        # omit its final colon; the two name fields still have the same roles.
        if tag == "SEED":
            while sources and not sources[-1]:
                sources.pop()
            while targets and not targets[-1]:
                targets.pop()
        if len(sources) != len(targets):
            continue
        if context.startswith("ITEM_") and tag in {"NAME", "ADJECTIVE"}:
            for source, target in zip(sources, targets):
                source, target = normalize_source(source).strip(), target.strip()
                if source and target and re.search(r"[\u3400-\u9fff]", target):
                    item_field_targets[context, tag, source].add(target)
        if tag in {"STATE_NAME", "STATE_NAME_ADJ"}:
            if len(sources) != 2 or sources[0] != targets[0]:
                continue
            pairs = zip(sources[1:], targets[1:])
        elif context.startswith("PLANT:") and tag in {
            "NAME", "NAME_PLURAL", "SEED", "GROWTH_NAME",
        }:
            pairs = zip(sources, targets)
        elif context.startswith(("SHAPE:", "ITEM_")) and tag == "NAME":
            pairs = zip(sources, targets)
        else:
            continue
        for source, target in pairs:
            source, target = normalize_source(source).strip(), target.strip()
            if source and target and re.search(r"[\u3400-\u9fff]", target):
                field_targets[source].add(target)
                if tag in {"STATE_NAME", "STATE_NAME_ADJ"}:
                    material_field_targets[source].add(target)

    # The plural item supplier joins a subtype's ADJECTIVE and NAME fields.
    # A comma inside an adjective (large, serrated discs) belongs to this one
    # item, not to the outer preference list. Build only combinations present
    # in the installed RAW object, with translations from that object's PO
    # context and its established item-type dictionary.
    item_literal_targets: dict[str, dict[str, str]] = {}
    item_raw_root = GAME / "data/vanilla/vanilla_items/objects"
    for raw in sorted(item_raw_root.glob("*.txt")):
        for item in re.finditer(
                r"\[(ITEM_[A-Z_]+):([^\]:]+)\](.*?)(?=\[ITEM_[A-Z_]+:|\Z)",
                raw.read_text(encoding="cp437"), re.S):
            item_type, item_id, body = item.groups()
            raw_names = re.search(r"\[NAME:([^\]]+)\]", body)
            raw_adjective = re.search(r"\[ADJECTIVE:([^\]]+)\]", body)
            if raw_names is None or raw_adjective is None:
                continue
            if item_type not in item_literal_targets:
                candidates: dict[str, set[str]] = collections.defaultdict(set)
                item_rules = args.rulesets / "items" / (item_type[5:].lower() + ".toml")
                if item_rules.is_file():
                    document = tomllib.loads(item_rules.read_text(encoding="utf-8"))
                    for ruleset in document.get("rulesets", []):
                        for source, target in ruleset.get("rules", {}).items():
                            if "{" not in source + target and re.search(r"[\u3400-\u9fff]", target):
                                candidates[normalize_source(source).strip()].add(target)
                item_literal_targets[item_type] = {
                    source: next(iter(targets)) for source, targets in candidates.items()
                    if len(targets) == 1
                }
            literals = item_literal_targets[item_type]
            context = item_type + ":" + item_id

            def item_field_target(tag: str, source: str) -> str | None:
                # In particular, the trap-component dictionary repairs the
                # malformed PO adjective [ADJECTIVE:巨大:锯齿状] and preserves
                # its existing 大型锯盘 spelling without inventing RAW fields.
                if source in literals:
                    return literals[source]
                targets = item_field_targets.get((context, tag, source), set())
                return next(iter(targets)) if len(targets) == 1 else None

            adjective = normalize_source(raw_adjective[1]).strip()
            translated_adjective = item_field_target("ADJECTIVE", adjective)
            if not adjective or translated_adjective is None:
                continue
            for raw_name in raw_names[1].split(":")[:2]:
                name = normalize_source(raw_name).strip()
                translated_name = item_field_target("NAME", name)
                if name and translated_name is not None:
                    field_targets[adjective + " " + name].add(
                        translated_adjective + translated_name)

    terms = {source: next(iter(targets))
             for source, targets in field_targets.items() if len(targets) == 1}
    material_states = {source: next(iter(targets))
                       for source, targets in material_field_targets.items() if len(targets) == 1}
    # Preserve the established material, plant/seed/growth and item nouns.
    # Adjective, prefix and suffix leaves are grammatical components; they
    # must not override a whole source field with a different word sense.
    scoped_leaves = (
        ("materials/state.toml", {"", "shared::main", "dairy"}),
        ("plants/name.toml", {"singular", "plural"}),
        ("plants/seed.toml", {"singular", "plural"}),
        ("plants/growth.toml", {"singular", "plural"}),
    )
    for relative, names in scoped_leaves:
        document = tomllib.loads((args.rulesets / relative).read_text(encoding="utf-8"))
        for ruleset in document.get("rulesets", []):
            if ruleset.get("name", "") not in names:
                continue
            for source, target in ruleset.get("rules", {}).items():
                if "{" not in source + target and re.search(r"[\u3400-\u9fff]", target):
                    source = normalize_source(source).strip()
                    terms[source] = target
                    if relative == "materials/state.toml":
                        material_state_sources.add(source)
                        material_states[source] = target

    # Color words overlap materials/creatures (amber, bronze, cardinal, ...).
    # Their prefixed form must use the color namespace, never a generic noun
    # followed by another 色 (which produced e.g. 黑色色).
    colors = tomllib.loads((args.rulesets / "color.toml").read_text(encoding="utf-8"))
    color_count = 0
    for ruleset in colors.get("rulesets", []):
        if ruleset.get("name") == "name":
            for source, target in ruleset.get("rules", {}).items():
                if "{" not in source + target:
                    terms["the color " + source] = target
                    color_count += 1
    # Explicit fallback labels emitted by the installed game's preference
    # generator when the referenced food/item is no longer available.
    terms.update({
        "unknown meat": "不明肉类", "unknown fish": "不明鱼类",
        "unknown plants": "不明植物", "unknown drink": "不明酒饮",
        "unknown liquid": "不明液体", "unknown seeds": "不明种子",
        "unknown leaves": "不明叶片", "unknown powder": "不明粉末",
        "unknown cheese": "不明奶酪", "unknown item": "不明物品",
    })
    for entry in parse_local(ROOT / "data/runtime/preference-term-overrides.tsv"):
        terms[entry.source] = entry.target
        if entry.source in material_state_sources:
            material_states[entry.source] = entry.target

    output = args.preference_output
    output.parent.mkdir(parents=True, exist_ok=True)
    with atomic_dictionary_output(output) as stream:
        stream.write("// GENERATED by tools/build_translations.py.\n")
        stream.write("// Sources: installed item RAWs, data/upstream/objects.zh-Hans.po, data/runtime/rulesets/zh-Hans/{items/*,materials/state,plants/name,plants/seed,plants/growth,color}.toml, data/runtime/preference-{reason,term}-overrides.tsv.\n")
        stream.write("// Scoped preferences and shared description colors; see THIRD_PARTY_NOTICES.md.\n")
        for name, values in (("preference_reasons", reasons), ("preference_terms", terms),
                             ("preference_material_states", material_states)):
            stream.write("static const std::unordered_map<std::string_view, std::string_view> " + name + " = {\n")
            for source, target in sorted(values.items()):
                if not target or not re.search(r"[\u3400-\u9fff]", target):
                    raise ValueError(f"invalid preference translation: {source!r}: {target!r}")
                stream.write("    {" + json.dumps(source, ensure_ascii=False) + ", " +
                             json.dumps(target, ensure_ascii=False) + "},\n")
            stream.write("};\n")
    print(f"Generated {output}: {len(reasons)} reasons, {color_count} color phrases, "
          f"{len(terms) - color_count} RAW field/material/food/shape terms, "
          f"{len(material_states)} material states")


def parse_shape_names(path: Path) -> list[Entry]:
    """Load singular/plural shape nouns and adjectives from gettext.

    Shape preferences are emitted directly in character prose (`octahedra`,
    `dodecahedra`, ...), while the recursive item rules only need shape names
    inside decorated item phrases and do not expose every bare plural at the
    root.  Import the finite RAW vocabulary so preference paragraphs can be
    translated as complete semantic blocks.
    """
    targets_by_source: dict[str, set[str]] = collections.defaultdict(set)
    for block in re.split(r"\n\s*\n", path.read_text(encoding="utf-8-sig")):
        if not parse_po_field(block, "msgctxt").startswith("SHAPE:"):
            continue
        source_tag = re.fullmatch(
            r"\[(NAME|ADJ):(.*)\]", parse_po_field(block, "msgid")
        )
        target_tag = re.fullmatch(
            r"\[(NAME|ADJ):(.*)\]", parse_po_field(block, "msgstr")
        )
        if source_tag is None or target_tag is None or \
                source_tag.group(1) != target_tag.group(1):
            continue
        source_fields = source_tag.group(2).split(":")
        target_fields = target_tag.group(2).split(":")
        if len(source_fields) != len(target_fields):
            continue
        for source, target in zip(source_fields, target_fields):
            source = normalize_source(source).strip()
            target = target.strip()
            if (not source or not target or source == target or
                    not re.search(r"[\u3400-\u9fff]", target)):
                continue
            targets_by_source[source].add(target)

    return [
        Entry(source, next(iter(targets)), "wi", "DFI18n shape names", 190)
        for source, targets in sorted(targets_by_source.items())
        if len(targets) == 1
    ]


def legends_body_parts(path: Path, chosen: dict[bytes, Entry]) -> list[Entry]:
    """Import the bundled BODY vocabulary while preserving established terms.

    BP and INDIVIDUAL_NAME include singular teeth, numbered digits and unusual
    animal anatomy. They were never imported by the creature-name extractor.
    Existing literal names (including the paired plural) take precedence over
    community alternatives; these additions remain in the Legends namespace.
    """
    existing = {entry.source.lower(): entry.target for entry in chosen.values()
                if "t" not in entry.flags and "a" not in entry.flags}
    targets: dict[str, set[str]] = collections.defaultdict(set)
    for block in re.split(r"\n\s*\n", path.read_text(encoding="utf-8-sig")):
        if not parse_po_field(block, "msgctxt").startswith("BODY:"):
            continue
        source = parse_po_field(block, "msgid")
        target = parse_po_field(block, "msgstr").replace("：", ":")
        source_tag = re.fullmatch(r"\[(BP:[^:]+|INDIVIDUAL_NAME):(.*)\]", source)
        target_tag = re.fullmatch(r"\[(BP:[^:]+|INDIVIDUAL_NAME):(.*)\]", target)
        if not source_tag or not target_tag or source_tag[1] != target_tag[1]:
            continue
        names = source_tag[2].split(":")
        glosses = target_tag[2].split(":")
        if len(names) != len(glosses):
            if names[-1] == "STP" and len(glosses) + 1 == len(names) and glosses[-1].endswith("STP"):
                glosses[-1] = glosses[-1][:-3]
                glosses.append("STP")
            else:
                continue
        established = next((existing[name.lower()] for name in names
                            if name != "STP" and name.lower() in existing), None)
        for name, gloss in zip(names, glosses):
            if name == "STP" or not gloss or re.search(r"[A-Za-z]", gloss):
                continue
            targets[name].add(existing.get(name.lower(), established or gloss))
    return [Entry(source, next(iter(values)), "h", "DFI18n Legends anatomy", 190)
            for source, values in sorted(targets.items()) if len(values) == 1]


def parse_creature_description_overrides(path: Path) -> dict[str, str]:
    """Load reviewed additions and wording refinements for creature prose."""
    translated: dict[str, str] = {}
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 2 or not all(field.strip() for field in fields):
            raise ValueError(f"{path}:{line_no}: expected English and Chinese description")
        source, target = fields
        source = normalize_description(source)
        if source in translated:
            raise ValueError(f"{path}:{line_no}: duplicate description: {source!r}")
        translated[source] = target.strip()
    return translated


def installed_creature_descriptions(
    raw_roots: tuple[Path, ...],
) -> dict[str, list[tuple[str, str]]]:
    """Return every unique built-in description and the creatures using it."""
    descriptions: dict[str, list[tuple[str, str]]] = collections.defaultdict(list)
    creature_id = ""
    for raw_root in raw_roots:
        if not raw_root.is_dir():
            raise FileNotFoundError(f"creature RAW directory is missing: {raw_root}")
        for path in sorted(raw_root.glob("creature_*.txt")):
            for line in path.read_text(encoding="cp437", errors="replace").splitlines():
                stripped = line.strip()
                match = re.match(r"^\[CREATURE:([^]]+)\]", stripped)
                if match:
                    creature_id = match.group(1)
                    continue
                match = re.match(r"^\[DESCRIPTION:(.*)\]$", stripped)
                if not match:
                    continue
                source = normalize_description(match.group(1))
                descriptions[source].append((creature_id, path.name))
    return dict(descriptions)


ANIMAL_PERSON_DESCRIPTION_OVERRIDES = {
    "A man-shaped abomination made entirely of blood. These cursed creatures are only found very near the underworld.":
        "一种完全由血构成的可憎人形生物。只有在非常靠近地狱的地方，才能见到这些受诅咒的生物。",
    "A large humanoid monster from the wild tundra. It has translucent skin, icicles for teeth, red glowing eyes and pointed ears.":
        "一种来自荒野苔原、模样如同怪物的大型人形生物。它的皮肤半透明，牙齿形似冰柱，双眼泛着红光，耳朵尖长。",
    "These evil creatures resemble walking frogs with arms and the intelligence to use them. They live in the waters far under the earth.":
        "这些邪恶的人形生物像直立行走的青蛙，长有手臂，并具有使用工具的智慧。它们生活在远离地表的地下水域。",
    "These creatures are shaped like men covered with rough scales. They have the head and tail of a lizard and possess a dark and evil intelligence. They are found deep under the earth.":
        "这些人形生物全身覆盖着粗糙鳞片，长有蜥蜴的头和尾巴，并拥有黑暗邪恶的智慧。它们出没于地下深处。",
    "A large white snake with the arms and torso of a man. These creatures are evil and live far underground.":
        "一种形似大白蛇的人形生物，长有手臂和直立的躯干。它们生性邪恶，住在很深的地下。",
    "A large adder with the torso and arms of a man.":
        "一种形似巨型蝰蛇的人形生物，长有手臂和直立的躯干。",
    "A large copperhead snake with the arms of a man.":
        "一种形似巨型铜头蛇的人形生物，长有手臂。",
    "A large anaconda with the torso and arms of a man.":
        "一种形似巨型森蚺的人形生物，长有手臂和直立的躯干。",
    "A large python with arms of a man.":
        "一种形似巨型蟒蛇的人形生物，长有手臂。",
    "A large bushmaster with the arms of a man.":
        "一种形似巨型巨蝮的人形生物，长有手臂。",
    "A large slug-like creature with the torso of a man. Its face is a mockery of teeth and slime.":
        "一种体型像巨型蛞蝓的人形生物。它的面部只见利齿与黏液，模样骇人。",
}


def normalize_animal_person_description(source: str, target: str) -> str:
    """Describe ``*_MAN`` creatures as humanoids, never as ordinary people."""
    if source in ANIMAL_PERSON_DESCRIPTION_OVERRIDES:
        return ANIMAL_PERSON_DESCRIPTION_OVERRIDES[source]

    # Community entries use several literal renderings of "person". Preserve
    # their translated animal anatomy while making the subject categorically
    # non-human and using the natural classifier for a kind of creature.
    replacements = (
        ("人型生物", "人形生物"),
        ("类人生物", "人形生物"),
        ("人形动物", "人形生物"),
        ("动物人", "人形生物"),
        ("水生人类", "水生人形生物"),
        ("四眼鱼人", "四眼鱼类人形生物"),
        ("树懒人", "树懒类人形生物"),
        ("马人", "马类人形生物"),
        ("鸟人", "鸟类人形生物"),
        ("鲨鱼人", "鲨鱼类人形生物"),
        ("蜥蜴人", "蜥蜴类人形生物"),
        ("蛇人", "蛇类人形生物"),
        ("恐龙人", "恐龙类人形生物"),
        ("他们", "它们"),
    )
    for old, new in replacements:
        target = target.replace(old, new)

    target = re.sub(r"^一个", "一种", target)
    target = re.sub(r"^一位", "一种", target)
    target = re.sub(r"的羽毛人(?=[。.]|$)", "、身披羽毛的人形生物", target)
    target = re.sub(r"的彩人(?=[。.]|$)", "、体色斑斓的人形生物", target)
    target = target.replace("剧毒人", "具有剧毒的人形生物")
    target = target.replace("无腿人", "没有腿的人形生物")
    target = target.replace("细长男子", "身形细长的人形生物")
    target = target.replace("小个子", "小型人形生物")
    target = re.sub(r"的人(?=[。.,，]|$)", "的人形生物", target)
    target = re.sub(r"人(?=[。.,，]|$)", "人形生物", target)
    target = target.replace(".", "。")
    if target.startswith("一只") and "人形生物" in target:
        target = "一种" + target[2:]

    # Smooth the handful of adjective+noun sequences exposed by replacing the
    # old terminal 人. These are grammatical refinements, not species cases.
    target = target.replace("的绿色的人形生物", "、体色绿色的人形生物")
    target = target.replace("的色彩鲜艳的人形生物", "、体色鲜艳的人形生物")
    target = target.replace("的色彩斑斓的人形生物", "、体色斑斓的人形生物")
    target = target.replace("身形大的人形生物", "体型庞大的人形生物")
    target = target.replace("身形高大的人形生物", "体型高大的人形生物")
    return target


def parse_creature_descriptions(po_path: Path, overrides_path: Path) -> list[Entry]:
    """Build a complete exact dictionary for all installed vanilla species.

    This is deliberately coverage-checked against the installed RAWs. A game
    update that adds or changes even one description therefore stops dictionary
    generation with the creature IDs, instead of leaking English into gameplay.
    """
    upstream = parse_creature_description_po(po_path)
    overrides = parse_creature_description_overrides(overrides_path)
    installed = installed_creature_descriptions(CREATURE_RAW_ROOTS)

    stale = sorted(overrides.keys() - installed.keys())
    if stale:
        raise RuntimeError(
            "creature-description overrides no longer present in installed RAWs:\n  "
            + "\n  ".join(stale)
        )

    combined = dict(upstream)
    combined.update(overrides)
    missing = sorted(installed.keys() - combined.keys())
    if missing:
        details = [
            f"{source}\n    used by: "
            + ", ".join(f"{creature_id} ({path})" for creature_id, path in installed[source])
            for source in missing
        ]
        raise RuntimeError(
            f"{len(missing)} untranslated built-in creature descriptions:\n  "
            + "\n  ".join(details)
        )

    entries: list[Entry] = []
    for source in installed:
        target = combined[source]
        uses = installed[source]
        animal_person_uses = [
            creature_id for creature_id, _path in uses
            if creature_id.endswith("_MAN")
        ]
        if animal_person_uses and len(animal_person_uses) != len(uses):
            raise RuntimeError(
                "description is shared by animal-person and non-animal-person creatures: "
                f"{source!r}"
            )
        if animal_person_uses:
            target = normalize_animal_person_description(source, target)
            if "人形生物" not in target:
                raise RuntimeError(
                    "animal-person description does not identify a humanoid creature: "
                    f"{', '.join(animal_person_uses)}: {target!r}"
                )
        if not re.search(r"[\u3400-\u9fff]", target):
            raise RuntimeError(f"creature description is not translated: {source!r}")
        is_override = source in overrides
        entries.append(Entry(
            source,
            target,
            "l",
            "DFCN animal-person descriptions" if animal_person_uses else
            "DFCN creature descriptions" if is_override else
            "DFI18n creature descriptions",
            425 if animal_person_uses else 420 if is_override else 405,
        ))
    return entries


def parse_dfi18n_simple(path: Path) -> list[Entry]:
    entries: list[Entry] = []
    with path.open(encoding="utf-8-sig", newline="") as handle:
        for line_no, row in enumerate(csv.reader(handle), 1):
            if line_no == 1 or len(row) != 3:
                continue
            source, target, _tags = row
            if not source:
                continue
            entries.append(Entry(source, target, "w", "DFI18n simple", 300))
    return entries


def parse_dfzh_csv(path: Path, *, word: bool) -> list[Entry]:
    """Parse the deliberately simple quote-delimited format used by dfzh."""
    entries: list[Entry] = []
    for line_no, line in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if len(line) < 5 or not (line.startswith('"') and line.endswith('"')):
            continue
        fields = line[1:-1].split('\",\"')
        if len(fields) not in (2, 3) or not fields[0]:
            continue
        source, target = fields[:2]
        # DFCN renders one grid row at a time; multi-line/color-stream entries
        # belong to dfzh's sentence renderer and cannot be represented here.
        if "\\n" in target or "\\a" in target or "\n" in source + target:
            continue
        flags = "w"
        if "{d}" in target:
            numbers = list(re.finditer(r"\d+", source))
            if len(numbers) != target.count("{d}"):
                continue
            pieces: list[str] = []
            cursor = 0
            for match in numbers:
                pieces.extend((source[cursor : match.start()], "{d}"))
                cursor = match.end()
            pieces.append(source[cursor:])
            source = "".join(pieces)
            flags += "t"
        origin = "dfzh word" if word else "dfzh exact"
        entries.append(Entry(source, target, flags, origin, 350 if not word else 325))
    return entries


def plant_wood_log_entries(root: Path, candidates: list[Entry]) -> list[Entry]:
    """Name harvested logs after their RAW plant, not a finished wood material.

    The same complete entries feed the dictionary and the scoped item grammar.
    Plant names, explicit wood adjectives and the log noun come from the
    existing tables. RAW state names do not necessarily end in "wood": ash,
    oak and birch also name harvested logs, not generic material homonyms.
    """
    names_document = tomllib.loads((root / "plants/name.toml").read_text(encoding="utf-8"))
    names = {source: target for ruleset in names_document.get("rulesets", [])
             if ruleset.get("name") == "singular"
             for source, target in ruleset.get("rules", {}).items()
             if "{" not in source}
    # Local terminology takes precedence over imported plant spellings.
    for entry in sorted(candidates, key=lambda entry: entry.priority):
        if entry.source in names and not any(flag in entry.flags for flag in "hrq"):
            names[entry.source] = entry.target
    material_document = tomllib.loads((root / "materials/state.toml").read_text(encoding="utf-8"))
    wood_adjectives = {source: target for ruleset in material_document.get("rulesets", [])
                       if ruleset.get("name") == "adjective"
                       for source, target in ruleset.get("rules", {}).items()
                       if "{" not in source}
    wood_document = tomllib.loads((root / "items/wood.toml").read_text(encoding="utf-8"))
    log_noun = next(ruleset["rules"]["logs"] for ruleset in wood_document["rulesets"]
                    if "logs" in ruleset.get("rules", {}))
    entries: dict[str, Entry] = {}
    for path in sorted((GAME / "data/vanilla").glob("*/objects/*.txt")):
        raw = path.read_text(encoding="utf-8", errors="replace")
        if "[OBJECT:PLANT]" not in raw:
            continue
        for plant in re.split(r"\[PLANT:[^\]]+\]", raw)[1:]:
            name = re.search(r"\[NAME:([^\]]+)\]", plant)
            if not name:
                continue
            material = re.search(
                r"\[USE_MATERIAL_TEMPLATE:WOOD:WOOD_TEMPLATE\](.*?)(?=\[USE_MATERIAL_TEMPLATE:|\Z)",
                plant, re.S)
            if not material:
                continue
            wood_names = re.findall(r"\[STATE_(?:NAME|ADJ|NAME_ADJ):ALL_SOLID:([^\]]+)\]",
                                    material.group(1))
            if not wood_names:
                continue
            plant_name = names.get(name.group(1))
            if not plant_name:
                raise ValueError(f"{path}: missing existing plant translation: {name.group(1)}")
            for wood_name in wood_names:
                for noun in ("log", "logs"):
                    source = f"{wood_name} {noun}"
                    wood_name_zh = wood_adjectives.get(wood_name, plant_name)
                    entries[source] = Entry(source, wood_name_zh + log_noun, "wi",
                                            "DFCN plant logs", 450)
    return list(entries.values())


def parse_literal_rulesets(root: Path) -> list[Entry]:
    """Flatten only context-independent literal leaves of the recursive rules.

    A literal used with two different Chinese translations is context-sensitive
    (for example ``ash`` can mean 白蜡树 or 灰烬) and is skipped. Longer parent
    rules and the exact dictionaries still translate those cases safely.
    """
    targets: dict[str, set[str]] = collections.defaultdict(set)
    sources: dict[str, set[str]] = collections.defaultdict(set)
    short_native_targets: dict[str, set[str]] = collections.defaultdict(set)
    for path in sorted(root.rglob("*.toml")):
        # Anatomy, appearance, contaminant labels and woven-material qualifiers
        # are scoped consumers, not global word rules. Raw fibers keep their
        # material-state names; covering/spatter keep their deposit context.
        relative_path = path.relative_to(root).as_posix()
        if relative_path.startswith("health/appearance/") or relative_path in {
            "health/bodypart/raw_names.toml", "health/appearance.toml",
            "health/contaminant.toml",
            "creatures/name/raw_names.toml",
            "items/wood/raw_names.toml",
            # Grown wood resolves timber adjectives to the source plant only
            # in that item grammar; ordinary wood keeps its material meaning.
            "items/grown.toml",
            "materials/woven_plant.toml",
            "activities.toml",
            # Fortress LAND_NAME denotes a title only in its typed columns.
            "fortress/status.toml",
        }:
            continue
        document = tomllib.loads(path.read_text(encoding="utf-8"))
        # Built-in material keys are native IDs, not display words. Exporting
        # them would let e.g. WATER's solid-state name alter ordinary water.
        if document.get("base") == "materials::builtin":
            continue
        for ruleset in document.get("rulesets", []):
            # Finished-material qualifiers belong to typed item slots only.
            # Keep their 毛质/丝质/etc. out of raw-material and general words.
            if (document.get("base") in {"materials", "materials::job"}
                    and ruleset.get("name") == "finished_adjective"):
                continue
            # Unit-label states require a complete creature after the prefix.
            # Agitated here is wildlife status, not the homonymous emotion.
            if document.get("base") == "creatures::caste" and ruleset.get("name") in {
                "name::prefix", "name::purpose",
            }:
                continue
            # Equipment sizes/shapes are scoped meanings, just like appearance
            # predicates. Do not export 小型/大型 into ordinary prose leaves.
            if document.get("base") == "items" and ruleset.get("name") in {
                "prefix::equipment_modifier", "prefix::equipment_size",
            }:
                continue
            # Procedural weapon nouns share spellings with skills and body
            # parts. They are reachable through the item grammar, never new
            # global literals that suppress those established meanings.
            if document.get("base") == "items::weapon" and ruleset.get("name") in {
                "singular::generated", "plural::generated",
            }:
                continue
            for source, target in ruleset.get("rules", {}).items():
                if not isinstance(source, str) or not isinstance(target, str):
                    continue
                if not source or not target or source == target:
                    continue
                if any(mark in source + target for mark in ("{", "}", "\n", "[C:")):
                    continue
                # Short native roots (Id, Ad, ...) have reviewed pronunciations
                # too. Export them only to the name vocabulary, never as global
                # word rules that could consume English particles or UI labels.
                if (document.get("base", "").startswith("dwarf_language::")
                        and len(source.strip()) < 3):
                    short_native_targets[ascii_fold(source)].add(target)
                # Tiny grammar particles only make sense inside their namespace;
                # flattening them would turn every English article/suffix into an
                # isolated overlay and reduce readability.
                if len(source.strip()) < 3 or source.strip().lower() in {"the", "and"}:
                    continue
                folded = ascii_fold(source)
                sources[folded].add(source)
                targets[folded].add(target)

    return [
        Entry(
            min(sources[folded], key=lambda source: (source != ascii_fold(source), source)),
            next(iter(translations)),
            "wi",
            "dfzh literal ruleset",
            200,
        )
        for folded, translations in targets.items()
        if len(translations) == 1
    ] + [
        Entry("Native name pronunciation: " + folded, next(iter(translations)),
              "h", "dfzh literal ruleset", 200)
        for folded, translations in short_native_targets.items()
        if len(translations) == 1
    ]


def parse_gendered_animal_people(path: Path) -> list[Entry]:
    """Build one canonical, gender-neutral vocabulary for animal people.

    The upstream creature-caste rules are context-aware, so the generic
    literal flattener deliberately drops entries whose older ``name`` rules
    disagree with their ``caste`` rules. That made the runtime rebuild a label
    word by word and produced mixtures such as ``土豚男人``. A base with both a
    ``man`` and ``woman`` caste is an animal-person family rather than a
    material creature such as ``magma man``. Emit the complete family here and
    normalize all four forms to ``<动物>人``. The picker already renders a
    separate sex glyph, so repeating sex inside the name is both noisy and
    inconsistent with creatures whose caste name is gender-neutral.
    """
    document = tomllib.loads(path.read_text(encoding="utf-8"))
    rules: dict[str, str] = {}
    for ruleset in document.get("rulesets", []):
        for source, target in ruleset.get("rules", {}).items():
            if isinstance(source, str) and isinstance(target, str):
                rules[source] = target.strip()

    male_bases = {source[:-4] for source in rules if source.endswith(" man")}
    female_bases = {source[:-6] for source in rules if source.endswith(" woman")}

    def animal_name(base: str) -> str | None:
        direct = rules.get(base, "").strip()
        if direct:
            return direct
        # Some families omit the neutral caste name. Recover it from either
        # translated gendered caste, discarding the old 男/女 vs 雄/雌 prefix.
        for suffix, prefixes in ((" man", "雄男"), (" woman", "雌女")):
            target = rules.get(base + suffix, "").strip()
            if target.endswith("人") and target[:1] in prefixes:
                return target[1:-1]
        return None

    entries: list[Entry] = []
    for base in sorted(male_bases & female_bases):
        translated = animal_name(base)
        if not translated:
            continue
        for suffix in (" man", " men", " woman", " women"):
            entries.append(Entry(
                base + suffix,
                translated + "人",
                "wi",
                "DFCN creature castes",
                390,
            ))
    return entries


def parse_extinct_creatures(path: Path) -> list[Entry]:
    """Load complete, geography-neutral names for vanilla extinct creatures.

    Vanilla exposes each extinct creature twice in the arena raws: once as an
    animal and once as an animal-person family.  Community dictionaries cover
    these unevenly and often fall back to a Latin transliteration (or retain a
    real-world place embedded in the scientific name).  Keep the reviewed
    semantic names in a small source table and expand every row into the two
    animal number forms plus all four gender-neutral animal-person forms.
    """
    entries: list[Entry] = []
    translated_by_singular: dict[str, str] = {}
    for line_no, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if not raw or raw.startswith("#"):
            continue
        fields = raw.split("\t")
        if len(fields) != 3 or not all(field.strip() for field in fields):
            raise ValueError(f"{path}:{line_no}: expected singular, plural, and Chinese name")
        singular, plural, translated = (field.strip() for field in fields)
        translated_by_singular[singular] = translated
        for source in dict.fromkeys((singular, plural)):
            entries.append(Entry(
                source, translated, "wi", "DFCN extinct creatures", 410,
            ))
        for suffix in (" man", " men", " woman", " women"):
            entries.append(Entry(
                singular + suffix,
                translated + "人",
                "wi",
                "DFCN extinct creatures",
                410,
            ))

    # A few extinct animals use ordinary husbandry caste words (sow/boar or
    # hen/cock). Without a complete rule the runtime translates the parts
    # independently, producing nonsense such as ``雕齿兽猪``. Map every such
    # caste alias back to the reviewed species name; ♀/♂ remains a separate UI
    # glyph. This is raw-driven so newly added extinct castes cannot regress.
    raw_root = CREATURE_RAW_ROOTS[1]
    if raw_root.is_dir():
        creature_id = ""
        base_names: tuple[str, str] | None = None
        caste_names: list[str] = []

        def flush_creature() -> None:
            if (not creature_id or creature_id.endswith("_MAN") or
                    base_names is None or base_names[0] not in translated_by_singular):
                return
            translated = translated_by_singular[base_names[0]]
            base_forms = set(base_names)
            for source in dict.fromkeys(caste_names):
                if source in base_forms:
                    continue
                entries.append(Entry(
                    source, translated, "wi", "DFCN extinct creature castes", 410,
                ))

        for raw_path in sorted(raw_root.glob("creature_*.txt")):
            for line in raw_path.read_text(encoding="cp437", errors="replace").splitlines():
                stripped = line.strip()
                match = re.match(r"^\[CREATURE:([^]]+)\]", stripped)
                if match:
                    flush_creature()
                    creature_id = match.group(1)
                    base_names = None
                    caste_names = []
                    continue
                match = re.match(r"^\[NAME:([^]:]+):([^]:]+):", stripped)
                if match and base_names is None:
                    base_names = match.groups()
                    continue
                match = re.match(r"^\[CASTE_NAME:([^]:]+):([^]:]+):", stripped)
                if match:
                    caste_names.extend(match.groups())
        flush_creature()
    return entries


def installed_sapient_creature_contexts(raw_roots: tuple[Path, ...]) -> set[str]:
    """Identify sapient RAW owners, independently of their juvenile name tags."""
    contexts: set[str] = set()
    for raw_root in raw_roots:
        if not raw_root.is_dir():
            continue
        for path in sorted(raw_root.glob("creature_*.txt")):
            # Restrict parsing to RAW token lines, excluding explanatory prose.
            tokens = "\n".join(
                line for line in path.read_text(encoding="cp437", errors="replace").splitlines()
                if line.lstrip().startswith("[")
            )
            creatures = re.split(r"\[CREATURE:([^\]]+)\]", tokens)
            for creature_id, body in zip(creatures[1::2], creatures[2::2]):
                # Learning creatures include kobolds even without CAN_SPEAK.
                if "[INTELLIGENT]" in body or "[CAN_LEARN]" in body:
                    contexts.add(f"CREATURE:{creature_id}")
    return contexts


def installed_creature_name_forms(raw_roots: tuple[Path, ...]) -> dict[str, set[str]]:
    """Read number roles from RAWs, including castes and juvenile aliases."""
    names: dict[str, set[str]] = {"singular": set(), "plural": set()}
    name_pattern = re.compile(
        r"\[(?:NAME|CASTE_NAME|GENERAL_CHILD_NAME|CHILDNAME|"
        r"GENERAL_BABY_NAME|BABYNAME):([^]:]*):([^]:]*)[:\]]"
    )
    for raw_root in raw_roots:
        if not raw_root.is_dir():
            continue
        for path in sorted(raw_root.glob("creature_*.txt")):
            for line in path.read_text(encoding="cp437", errors="replace").splitlines():
                for match in name_pattern.finditer(line):
                    for role, part in zip(names, match.groups()):
                        if part.strip():
                            names[role].add(ascii_fold(normalize_source(part.strip())))
    return names


def installed_creature_name_sources(raw_roots: tuple[Path, ...]) -> set[str]:
    """Return every adult and juvenile name form in installed creature RAWs."""
    return set().union(*installed_creature_name_forms(raw_roots).values())


def remove_creature_gender_markers(target: str) -> str:
    """Remove textual sex markers; the UI retains its independent ♀/♂ glyph."""
    target = target.replace("雌性", "").replace("雄性", "")
    # Sex markers are grammatical prefixes in creature names.  Do not erase
    # the same characters when they are lexical parts of a species name (for
    # example the 母 in 水母).  Size words may precede the marker in caste names.
    return re.sub(r"^((?:超)?巨型|大型|小型)?[雌雄公母]", r"\1", target)


def remove_creature_domestic_marker(target: str) -> str:
    """Remove 家 used only to distinguish ordinary domestic creature names."""
    return re.sub(r"^((?:超)?巨型|大型|小型|幼年)?家(?=[\u3400-\u9fff])", r"\1", target)


def normalize_creature_name(target: str) -> str:
    """Apply the project-wide spelling policy for a displayed creature name."""
    return remove_creature_domestic_marker(
        remove_creature_gender_markers(target)
    )


def is_creature_name_context(source: str, creature_names: set[str]) -> bool:
    """Recognize raw names plus the finite UI wrappers used around those names."""
    folded = normalize_source(source).strip().lower()
    if folded in creature_names:
        return True

    # Adventure rows add selection text or a comma-delimited origin/caste.
    candidates = {folded}
    if folded.startswith("select "):
        candidates.add(folded[7:].strip())
    if "," in folded:
        candidates.add(folded.split(",", 1)[0].strip())
        candidates.add(folded.rsplit(",", 1)[-1].strip())

    # Legends historical-figure rows prefix the raw creature name with sex.
    for candidate in tuple(candidates):
        if candidate.startswith("female ") or candidate.startswith("male "):
            candidates.add(candidate.split(" ", 1)[1])
    return any(candidate in creature_names for candidate in candidates)


def normalize_creature_names(chosen: dict[bytes, Entry]) -> int:
    """Normalize creature names without changing descriptive prose."""
    creature_names = installed_creature_name_sources(CREATURE_RAW_ROOTS)
    if not creature_names:
        return 0

    changed = 0
    for encoded, entry in tuple(chosen.items()):
        if not is_creature_name_context(entry.source, creature_names):
            continue
        target = normalize_creature_name(entry.target)
        if not target or target == entry.target:
            continue
        chosen[encoded] = Entry(
            entry.source, target, entry.flags, entry.origin, entry.priority,
        )
        changed += 1
    return changed


def installed_trainable_creature_name_sources(
    raw_roots: tuple[Path, ...],
) -> dict[str, set[str]]:
    """Return adult name forms that DF may prefix with war or hunting."""
    sources = {"war": set(), "hunting": set()}
    name_pattern = re.compile(r"\[(?:NAME|CASTE_NAME):([^]:]*):([^]:]*)[:\]]")
    for raw_root in raw_roots:
        if not raw_root.is_dir():
            continue
        for path in sorted(raw_root.glob("creature_*.txt")):
            names: set[str] = set()
            training: set[str] = set()

            def flush_creature() -> None:
                if "both" in training:
                    sources["war"].update(names)
                    sources["hunting"].update(names)
                if "war" in training:
                    sources["war"].update(names)
                if "hunting" in training:
                    sources["hunting"].update(names)

            for line in path.read_text(encoding="cp437", errors="replace").splitlines():
                stripped = line.strip()
                if stripped.startswith("[CREATURE:"):
                    flush_creature()
                    names = set()
                    training = set()
                    continue
                for match in name_pattern.finditer(stripped):
                    names.update(
                        part.strip().lower()
                        for part in match.groups()
                        if part.strip()
                    )
                if "[TRAINABLE]" in stripped:
                    training.add("both")
                if "[TRAINABLE_WAR]" in stripped:
                    training.add("war")
                if "[TRAINABLE_HUNTING]" in stripped:
                    training.add("hunting")
            flush_creature()
    return sources


def standardize_trained_animal_names(chosen: dict[bytes, Entry]) -> int:
    """Give every trained animal the same explicit Chinese role prefix."""
    role_prefixes = {
        "war": "受过战斗训练的",
        "hunting": "受过狩猎训练的",
    }
    trained_sources = installed_trainable_creature_name_sources(CREATURE_RAW_ROOTS)
    standardized = 0
    for role, target_prefix in role_prefixes.items():
        for creature_source in sorted(trained_sources[role]):
            creature_encoded = screen_bytes(creature_source)
            creature_entry = (
                chosen.get(creature_encoded) if creature_encoded is not None else None
            )
            if creature_entry is None or not creature_entry.target:
                continue
            source = f"{role} {creature_source}"
            encoded = screen_bytes(source)
            if encoded is None or not encoded:
                continue
            previous = chosen.get(encoded)
            chosen[encoded] = Entry(
                source,
                target_prefix + creature_entry.target,
                previous.flags if previous is not None else "wi",
                "DFCN standardized trained animals",
                500,
            )
            standardized += 1
    return standardized


def standardize_animal_juvenile_names(
    chosen: dict[bytes, Entry],
    juvenile_adults: dict[str, set[str]],
) -> int:
    """Render every unambiguous animal CHILD name as its adult name plus 幼崽."""
    standardized = 0
    for juvenile_source, adult_sources in juvenile_adults.items():
        adult_targets: set[str] = set()
        for adult_source in adult_sources:
            adult_encoded = screen_bytes(adult_source)
            adult_entry = chosen.get(adult_encoded) if adult_encoded is not None else None
            if adult_entry is None:
                adult_targets.clear()
                break
            adult_targets.add(adult_entry.target)
        if len(adult_targets) != 1:
            continue

        juvenile_encoded = screen_bytes(juvenile_source)
        if juvenile_encoded is None or not juvenile_encoded:
            continue
        previous = chosen.get(juvenile_encoded)
        chosen[juvenile_encoded] = Entry(
            juvenile_source,
            next(iter(adult_targets)) + "幼崽",
            previous.flags if previous is not None else "wi",
            "DFCN standardized animal juveniles",
            500,
        )
        standardized += 1
    return standardized


def generated_context_rules() -> list[Entry]:
    """Finite procedural strings that the game assembles outside TOML rules."""
    vices = {
        "Greed": "贪婪",
        "Avarice": "贪婪",
        "Jealousy": "嫉妒",
        "Cupidity": "贪欲",
        "Gluttony": "暴食",
    }
    virtues = {
        "Enterprise": "进取",
        "Resourcefulness": "智谋",
        "Determination": "决心",
        "Mettle": "勇气",
        "Dynamism": "活力",
        "Toil": "辛劳",
        "Diligence": "勤奋",
        "Exertion": "努力",
        "Tenacity": "韧性",
        # 53.16 also selects this shared descriptor from another string table.
        "Perseverance": "毅力",
        "Industry": "勤勉",
        "Labor": "劳动",
    }
    title_rules = [
        Entry(
            f"Histories of {vice} and {virtue}",
            f"{vice_zh}与{virtue_zh}的编年史",
            "w",
            "DFCN generated context",
            390,
        )
        for vice, vice_zh in vices.items()
        for virtue, virtue_zh in virtues.items()
    ]
    magical_rules = [
        Entry(source, target, flags, "DFCN magical materials", 395)
        for source, noun, qualifier in material_names(ROOT)
        for target, flags in ((noun, "wim"), (qualifier, "hMi"))
    ]
    return title_rules + magical_rules


def generated_build_menu_rules(chosen: dict[bytes, Entry]) -> list[Entry]:
    """Resolve building shorthand without changing profession or item nouns."""
    # Only English identities live here. The full building names are reviewed
    # in the dictionary and shared with placement prompts, not a second glossary.
    aliases = {
        "Bowyer": "Bowyer's Workshop",
        "Carpenter": "Carpenter's Workshop",
        "Crafts": "Craftsdwarf's Workshop",
        "Jeweler": "Jeweler's Workshop",
        "Mechanic": "Mechanic's Shop",
        "Metalsmith": "Metalsmith's Forge",
        "Siege": "Siege Workshop",
        "Stoneworker": "Stoneworker's Shop",
        "Leather": "Leather Works",
        "Clothes": "Clothier's Shop",
        "Clothier": "Clothier's Shop",
        "Dyer": "Dyer's Shop",
        "Butcher": "Butcher's Shop",
        "Tanner": "Tanner's Shop",
        "Farmer": "Farmer's Workshop",
    }
    folded = {encoded.lower(): entry for encoded, entry in chosen.items()
              if "i" in entry.flags}
    entries = []
    for caption, building in aliases.items():
        key = building.encode("ascii")
        entry = chosen.get(key) or folded.get(key.lower())
        if entry is None:
            raise ValueError(f"Missing complete build-menu building name: {building}")
        entries.append(Entry(f"Build menu: {caption}", entry.target, "wi",
                             "DFCN build-menu building aliases", 390))
    return entries


def generated_calendar_rules(chosen: dict[bytes, Entry]) -> list[Entry]:
    """Compose dates from reviewed fields, never a second month/season glossary."""
    months = (
        ("Granite", "early spring"), ("Slate", "mid-spring"), ("Felsite", "late spring"),
        ("Hematite", "early summer"), ("Malachite", "mid-summer"), ("Galena", "late summer"),
        ("Limestone", "early autumn"), ("Sandstone", "mid-autumn"), ("Timber", "late autumn"),
        ("Moonstone", "early winter"), ("Opal", "mid-winter"), ("Obsidian", "late winter"),
    )
    year = chosen[b"Year {d}"].target
    # The source's first number is the day; the second is the year. Explicit
    # occurrence numbers preserve both values when the translation moves year
    # first; year and day both retain their original digits.
    year = year.replace("{d}", "{d2}")
    log_date = chosen[b"Adventurer log date: {s} / {s}"].target
    rules = []
    for month, season in months:
        day = chosen[f"{{d}}th {month}".encode("ascii")].target
        season_zh = chosen[season.encode("ascii")].target
        # Native save/world cards use midspring/midsummer/midautumn/midwinter.
        # Keep the reviewed hyphenated forms and share their translations.
        season_forms = (season, season.replace("mid-", "mid", 1)) \
            if season.startswith("mid-") else (season,)
        for alias in season_forms[1:]:
            rules.append(Entry(alias, season_zh, "wi", "DFCN generated calendar", 390))
        indexed_day = day.replace("{d}", "{d1}")
        short_date = year + "，" + indexed_day
        full_date = year + "，" + season_zh + "，" + indexed_day
        event_date = log_date.replace("{s1}", indexed_day).replace("{s2}", year)
        for suffix in ("st", "nd", "rd", "th"):
            source = f"{{d}}{suffix} {month}"
            rules.append(Entry(source, day, "wt", "DFCN generated calendar", 390))
            # Event hearing paragraphs reuse both reviewed day/month and
            # year fields. Keep this complete date scope out of global text
            # matching, while retaining each source number's own position.
            rules.append(Entry(
                f"Announcement combat journal-calendar-date [$digits,$digits]: "
                f"{{s}}{suffix} {month} in the year {{s}}",
                year.replace("{d2}", "{s2}") + indexed_day.replace("{d1}", "{s1}"),
                "l", "DFCN generated calendar", 390))
            # Adventure HUD omits the season and the literal "Year". Match
            # the entire compact date so its trailing bare number keeps the
            # reviewed year format and shares one translated layout span.
            rules.append(Entry(f"{source}, {{d}}", short_date,
                               "wti", "DFCN generated calendar", 390))
            for season_form in season_forms:
                rules.append(Entry(f"{source}, {season_form}, {{d}}", full_date,
                                   "wti", "DFCN generated calendar", 390))
            # Event cards reuse the same reviewed date fields and retain one
            # complete prose span instead of separately translated fragments.
            rules.append(Entry(
                f"This event occurred on the {source} in the year {{d}}.",
                event_date, "wtl", "DFCN generated calendar", 390))
    return rules


def generated_companion_location_rules(chosen: dict[bytes, Entry]) -> list[Entry]:
    """Expand companion bearings using the same reviewed compass vocabulary."""
    # Consume the authored format instead of publishing a generic {s} capture:
    # these one-letter bearings must never become global keyboard replacements.
    template = chosen.pop(b"Visible: {s}")
    if template.target.count("{s}") != 1:
        raise ValueError("Companion visibility format must retain one bearing")
    # Expansion removes the capture, but retains authored layout and matching
    # flags so location text stays aligned with the companion's identity row.
    literal_flags = "".join(flag for flag in template.flags if flag not in "tx")
    bearings = (
        "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
        "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW",
    )
    rules = []
    for bearing in bearings:
        direction = chosen[f"Adventure compass: {bearing}".encode("ascii")].target
        rules.append(Entry(
            template.source.replace("{s}", bearing),
            template.target.replace("{s}", direction),
            literal_flags, "DFCN companion locations", 390,
        ))
    return rules



def build(args: argparse.Namespace) -> tuple[list[Entry], collections.Counter[str]]:
    candidates: list[Entry] = []
    creature_descriptions = parse_creature_descriptions(
        args.creature_objects, args.creature_descriptions
    )
    candidates += creature_descriptions
    creature_name_entries, animal_juvenile_adults = parse_creature_names(
        args.creature_objects
    )
    candidates += creature_name_entries
    candidates += parse_preference_strings(args.creature_objects)
    candidates += parse_shape_names(args.creature_objects)
    candidates += parse_literal_rulesets(args.rulesets)
    candidates += parse_gendered_animal_people(
        args.rulesets / "creatures" / "caste.toml"
    )
    candidates += parse_extinct_creatures(args.extinct)
    candidates += generated_context_rules()
    candidates += parse_dfi18n_simple(args.simple)
    candidates += parse_dfzh_csv(args.word, word=True)
    candidates += parse_dfzh_csv(args.exact, word=False)
    candidates += parse_local(args.local)
    candidates += parse_local(ROOT / "data/runtime/book-title-translations.tsv")
    candidates += parse_local(ROOT / "data/runtime/book-title-reference-translations.tsv")
    candidates += parse_local(ROOT / "data/runtime/conversation-choice-translations.tsv")
    candidates += [Entry(source, target, flags, "DFCN native book title phrases", 400)
                   for source, target, flags in compile_book_title_phrases(
                       ROOT / "data/runtime/book-title-phrases.tsv")]
    candidates += parse_local(ROOT / "data/runtime/workshop-recipe-translations.tsv")
    candidates += plant_wood_log_entries(args.rulesets, candidates)
    candidates += parse_item_descriptions(ROOT / "data/runtime/item-description-translations.tsv")
    # Native UI explanations are whole messages, not help-only prose or
    # independently translated words. Keep a separate, reviewed catalog.
    candidates += parse_ui_messages(ROOT / "data/runtime/ui-messages.tsv", ROOT / "data/extracted/ui-message-sources.tsv")
    # Shared announcement constructors and active RAW text use the same hP
    # compiler and runtime. RAW provenance also records generator/file/line
    # references: one native constructor can emit several reviewed sentences.
    for family in ("system", "raw", "world", "performance"):
        candidates += parse_ui_messages(ROOT / f"data/runtime/announcement-{family}-translations.tsv",
            ROOT / f"data/extracted/announcement-{family}-sources.tsv", documented_provenance=True)
    candidates += parse_ui_messages(ROOT / "data/runtime/adventure-announcements.tsv",
        ROOT / "data/extracted/adventure-announcement-sources.tsv", documented_provenance=True)
    candidates += parse_local(ROOT / "data/runtime/announcement-performance-fields.tsv")
    candidates += parse_local(ROOT / "data/runtime/announcement-world-fields.tsv")
    candidates += parse_local(ROOT / "data/runtime/announcement-dialogue-fields.tsv")
    candidates += combat_entries(ROOT / "data/runtime/announcement-combat-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-rumor-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-dialogue-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/adventure-announcement-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-description-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-biography-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-boast-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-diplomacy-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-trade-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-dialogue-extra-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/conversation-choice-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-reference-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-event-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-status-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-arrival-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-negotiation-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-artifact-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-mandate-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/announcement-cancellation-grammar.tsv", Entry)
    candidates += parse_local(ROOT / "data/runtime/announcement-job-fields.tsv")
    candidates += combat_entries(ROOT / "data/runtime/justice-interrogation-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/adventure-journal-grammar.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/adventure-journal-event-titles.tsv", Entry)
    candidates += combat_entries(ROOT / "data/runtime/memorial-inscription-grammar.tsv", Entry)
    candidates += parse_ui_messages(ROOT / "data/runtime/announcement-dialogue-translations.tsv",
        ROOT / "data/extracted/announcement-dialogue-sources.tsv", documented_provenance=True)
    candidates += parse_ui_messages(ROOT / "data/runtime/announcement-dialogue-extra-translations.tsv",
        ROOT / "data/extracted/announcement-dialogue-extra-sources.tsv", documented_provenance=True)
    # A complete hover description has its own namespace. It must not be
    # chopped into global word replacements or shadow a Legends clause.
    tooltip_catalog = parse_local(ROOT / "data/runtime/tooltip-translations.tsv")
    tooltip_catalog += parse_local(ROOT / "data/runtime/workshop-tooltip-translations.tsv")
    # ELF 53.16 c82ba0..c86451 submits the same complete weather prose
    # through 17ea070 (sky at c8524d, sun at c830b3, stars at c832d7).
    # Share its authored literals with announcements without exposing other
    # tooltip families or their material-template semantics to the UI trie.
    weather_sources = {
        " ".join(fields[3].split())
        for line in (ROOT / "data/extracted/tooltip-sources.tsv").read_text().splitlines()
        if line and not line.startswith("#")
        and len(fields := line.split("\t", 3)) == 4
        and fields[1] == "dynamic-weather"
    }
    candidates += [Entry(" ".join(entry.source.split()), entry.target, "hP",
                         "DFCN shared weather announcements", 390)
                   for entry in tooltip_catalog
                   if entry.flags == "" and " ".join(entry.source.split()) in weather_sources]
    tooltip_sources = {
        " ".join(line.split("\t", 3)[3].split())
        for line in (ROOT / "data/extracted/tooltip-sources.tsv").read_text().splitlines()
        if line and not line.startswith("#")
    }
    supplied_sources = {" ".join(entry.source.split()) for entry in tooltip_catalog}
    workshop_sources = {
        " ".join(line.split("\t", 3)[3].split())
        for line in (ROOT / "data/extracted/workshop-tooltip-sources.tsv").read_text(encoding="utf-8").splitlines()
        if line and not line.startswith("#")
    }
    native_workshop_sources = {source for _, _, _, source in workshop_tooltip_sources(GAME)}
    if missing := native_workshop_sources - workshop_sources:
        raise ValueError("Missing workshop tooltip source inventory: " + repr(sorted(missing)))
    tooltip_sources |= workshop_sources
    # Custom workshops load their TOOLTIP from RAW, not the executable's
    # fixed initializer. Require them in the same source/translation catalog.
    raw_tooltips = {source for _, _, _, source in building_tooltip_sources(GAME)}
    if missing := raw_tooltips - tooltip_sources:
        raise ValueError("Missing RAW building tooltip sources: " + repr(sorted(missing)))
    if missing := tooltip_sources - supplied_sources:
        raise ValueError("Missing complete tooltip translations: " + repr(sorted(missing)))
    # The legacy CSV spreads these paragraphs across fixed-width English
    # rows, even cutting Chinese words in half. Do not publish those stale
    # opening rows beside the complete RAW descriptions. Ordinary nouns and
    # whole captions retain their established translations.
    candidates = [entry for entry in candidates if not (
        entry.origin == "DFI18n simple" and entry.source.endswith(" ") and
        len(entry.source.split()) > 1 and
        (fragment := " ".join(entry.source.split())) not in supplied_sources and
        any(f" {fragment} " in f" {source} " for source in raw_tooltips)
    )]
    for entry in tooltip_catalog:
        if not entry.target.strip():
            raise ValueError(f"Untranslated tooltip source: {entry.source}")
        if entry.flags not in {"", "t"}:
            raise ValueError(f"Invalid tooltip flags for {entry.source!r}: {entry.flags!r}")
        source = " ".join(entry.source.split())
        target = entry.target
        template = entry.flags == "t"
        if template:
            if not re.search(r"\{[sd]\}", source) or re.search(
                    r"[{}]", re.sub(r"\{[sd]\}", "", source)) or re.search(
                    r"[{}]", re.sub(r"\{[sd](?:[1-9][0-9]*)?\}", "", target)):
                raise ValueError(f"Invalid tooltip material/number template: {source!r}")
            literals = re.split(r"\{[sd]\}", source)
            if not any(part.strip() for part in literals) or any(
                    not part.strip() for part in literals[1:-1]):
                raise ValueError(f"Tooltip captures require fixed literal boundaries: {source!r}")
            # A material/item capture is one complete translated name. Reuse
            # shared indexing so Chinese may reorder fields but cannot omit
            # or repeat any material or number from the native description.
            target, _ = index_template_target(source, target)
        elif re.search(r"[{}]", source + target):
            raise ValueError(f"Tooltip captures require the t flag: {source!r}")
        candidates.append(Entry(source, target, "hjt" if template else "hj",
                                "DFCN tooltips", 400))
    # Help is a complete-document namespace. Short connectors and captions
    # must never replace similarly-spelled ordinary UI or keyboard labels.
    candidates += parse_help_documents(ROOT / "data/runtime/help-translations.tsv", ROOT / "data/extracted/help-sources.tsv")
    # DFHack help is a separate document catalog. The prefix is never visible
    # on screen: only the DFHack help renderer consumes these complete blocks.
    candidates += parse_local(ROOT / "data/runtime/dfhack-help-translations.tsv")
    candidates += parse_local(ROOT / "data/runtime/dfhack-help-overrides.tsv")
    candidates += parse_local(ROOT / "data/runtime/dfhack-help-command-overrides.tsv")
    candidates += [Entry(source, target, flags, "DFCN Legends event families", 390)
                   for source, target, flags in compile_events(ROOT / "data/runtime/legends-events.tsv")]
    candidates += [Entry(source, target, flags, "DFCN Legends creature descriptions", 390)
                   for source, target, flags in compile_events(ROOT / "data/runtime/legends-creature-descriptions.tsv")]

    # Higher-priority sources win. Within a source, later rows win to mirror
    # DFCN's historic duplicate behavior.
    chosen: dict[bytes, Entry] = {}
    chosen_order: dict[bytes, int] = {}
    spheres: dict[bytes, Entry] = {}
    legends: dict[bytes, Entry] = {}
    help_entries: dict[bytes, Entry] = {}
    tooltip_entries: dict[bytes, Entry] = {}
    ui_entries: dict[bytes, Entry] = {}
    ui_conflicts: list[str] = []
    stats: collections.Counter[str] = collections.Counter()
    for order, entry in enumerate(candidates):
        # Both a creature RAW and a weapon RAW supply this literal. Only
        # the object-specific dictionaries can translate the bare caption.
        if entry.source.lower() == "pike":
            continue
        # The older row-based dictionary erases continuation rows after
        # translating an opening row. Those empty replacements cannot be
        # reused as independent substring rules: they silently delete prose.
        # Complete documents now own their source spans in the runtime.
        if not entry.target.strip():
            stats["empty deletion rules omitted"] += 1
            continue
        # Home is also the adventure background tab, Delete labels save
        # actions, and Pause is a world-generation button. Keep their reviewed
        # values for contextual lookup; the runtime excludes them from the trie so key
        # bindings cannot become UI action/tab captions.
        # Scoped prose punctuation is not a key-binding caption. Dropping
        # `.` makes a complete colored `Site.` run fail after name parsing.
        if ("h" not in entry.flags and "q" not in entry.flags and is_keybinding_code(entry.source)
                and entry.source not in {"Home", "Delete", "Pause"}):
            stats["keycode rules omitted"] += 1
            continue
        encoded = screen_bytes(entry.source)
        if encoded is None or not encoded:
            stats["unencodable"] += 1
            continue
        # Sphere vocabulary has its own semantic namespace at runtime. Do not
        # let Rain/rain, Order/order, etc. displace ordinary UI translations,
        # or let a UI entry erase the sphere when regenerating the TSV.
        if "P" in entry.flags:
            previous = ui_entries.get(encoded)
            if previous is not None and previous.priority == entry.priority and previous.target != entry.target:
                ui_conflicts.append(repr(entry.source) + ": " +
                    repr(previous.target) + " / " + repr(entry.target))
            if previous is None or entry.priority > previous.priority:
                ui_entries[encoded] = entry
            continue
        if "j" in entry.flags:
            tooltip_entries[encoded] = entry
            continue
        if "q" in entry.flags:
            help_entries[encoded] = entry
            continue
        if "h" in entry.flags:
            # Description nouns, clipped continuations, identities, event
            # titles and participants retain their own same-spelled rules.
            scope = next((flag for flag in ("H", "I", "J", "v", "C", "N", "E", "u") if flag in entry.flags), "")
            key = (b"\x00" + scope.encode("ascii") if scope else b"") + encoded
            previous = legends.get(key)
            if previous is None or entry.priority >= previous.priority:
                legends[key] = entry
            continue
        if "r" in entry.flags:
            key = encoded.lower()
            previous = spheres.get(key)
            if previous is None or entry.priority >= previous.priority:
                spheres[key] = entry
            continue
        previous = chosen.get(encoded)
        if (entry.source.startswith("Announcement combat ") and previous is not None
                and previous.priority == entry.priority and previous.target != entry.target):
            ui_conflicts.append(repr(entry.source) + ": " +
                repr(previous.target) + " / " + repr(entry.target))
        if previous is None or entry.priority >= previous.priority:
            if previous is not None:
                stats["overridden"] += 1
            chosen[encoded] = entry
            chosen_order[encoded] = order

    if ui_conflicts:
        raise ValueError("Conflicting complete UI/announcement translations:\n" + "\n".join(ui_conflicts))

    # Case-insensitive rules live in one ASCII-folded trie at runtime.  Two
    # differently-capitalized source rows therefore address the same node even
    # though their encoded bytes differ.  Let source priority and source-file
    # order decide that collision here; otherwise the generated TSV sort order
    # decides it accidentally (for example `Good`/`good` and `Low`/`low`).
    casefold_winners: dict[bytes, tuple[bytes, Entry, int]] = {}
    casefold_losers: set[bytes] = set()
    for encoded, entry in chosen.items():
        if "i" not in entry.flags:
            continue
        folded = bytes(
            value + 32 if 0x41 <= value <= 0x5A else value
            for value in encoded
        )
        order = chosen_order[encoded]
        previous = casefold_winners.get(folded)
        if previous is None:
            casefold_winners[folded] = (encoded, entry, order)
            continue
        previous_encoded, previous_entry, previous_order = previous
        if (entry.priority, order) >= (previous_entry.priority, previous_order):
            casefold_losers.add(previous_encoded)
            casefold_winners[folded] = (encoded, entry, order)
        else:
            casefold_losers.add(encoded)
    for encoded in casefold_losers:
        del chosen[encoded]
        stats["casefold overridden"] += 1

    stats["inventoried conversation keywords"] = require_conversation_keywords(
        chosen, ROOT / "data/extracted/conversation-keyword-sources.tsv")

    for entry in [*generated_calendar_rules(chosen), *generated_build_menu_rules(chosen),
                  *generated_companion_location_rules(chosen)]:
        encoded = screen_bytes(entry.source)
        previous = chosen.get(encoded)
        if previous is None or entry.priority >= previous.priority:
            chosen[encoded] = entry

    stats["normalized creature names"] = normalize_creature_names(chosen)
    stats["standardized animal juvenile names"] = standardize_animal_juvenile_names(
        chosen, animal_juvenile_adults
    )
    stats["standardized trained animal names"] = standardize_trained_animal_names(
        chosen
    )

    for entry in legends_body_parts(args.creature_objects, chosen):
        encoded = screen_bytes(entry.source)
        if encoded:
            legends.setdefault(encoded, entry)

    # RAW introductions are complete prose, not row-local substring rules.
    # Keep one selected translation (including normal override priority) and
    # route it through the shared UI paragraph matcher. Without h, the same
    # literal remains available to typed species/Legends exact lookups.
    for description in creature_descriptions:
        encoded = screen_bytes(description.source)
        entry = chosen[encoded]
        chosen[encoded] = Entry(
            entry.source, entry.target,
            entry.flags if "P" in entry.flags else entry.flags + "P",
            entry.origin, entry.priority,
        )

    # Speech ownership survives another catalogue/override selecting the same
    # sentence's wording. It changes parser precedence, not its translation.
    dialogue_sources = {screen_bytes(entry.source) for entry in candidates if "D" in entry.flags}
    for encoded in dialogue_sources:
        if (entry := ui_entries.get(encoded)) is not None and "D" not in entry.flags:
            ui_entries[encoded] = Entry(entry.source, entry.target, entry.flags + "D",
                                       entry.origin, entry.priority)

    entries = sorted(
        [*chosen.values(), *spheres.values(), *legends.values(), *help_entries.values(),
         *tooltip_entries.values(), *ui_entries.values()],
        key=lambda entry: (-len(screen_bytes(entry.source) or b""), entry.source, entry.flags),
    )
    for entry in entries:
        stats[entry.origin] += 1
    stats["total"] = len(entries)
    return entries, stats


@contextmanager
def atomic_dictionary_output(path: Path):
    """Publish a complete dictionary without truncating the hot-reloaded file."""
    path.parent.mkdir(parents=True, exist_ok=True)
    staged: Path | None = None
    try:
        # The staged file contains only newly generated data, not an old-file
        # copy. Use the destination directory so replace stays atomic, and a
        # unique name so simultaneous generators cannot share a partial file.
        with tempfile.NamedTemporaryFile(
            mode="w", encoding="utf-8", newline="\n", dir=path.parent,
            prefix=f".{path.name}.", suffix=".build", delete=False,
        ) as output:
            staged = Path(output.name)
            yield output
            output.flush()
            os.fsync(output.fileno())
        if path.exists():
            # Preserve unchanged generated headers so a prose-only dictionary
            # update does not rebuild or replace the loaded native core.
            if path.read_text(encoding="utf-8") == staged.read_text(encoding="utf-8"):
                return
            staged.chmod(stat.S_IMODE(path.stat().st_mode))
        try:
            staged.replace(path)
        except PermissionError as original:
            if os.name != "nt" or not path.exists():
                raise
            # Reuse the entry's native replacement for files still held by
            # readers. Publish the complete new dictionary atomically while
            # existing handles retain the old file; never truncate it in place
            # or override permissions/read-only attributes.
            from build import windows_atomic_rename
            try:
                windows_atomic_rename(staged.absolute(), path.absolute())
            except OSError as native_error:
                raise OSError(
                    f"Cannot publish {path}; replace: {original}; "
                    f"native rename: {native_error}"
                ) from native_error
    finally:
        if staged is not None:
            staged.unlink(missing_ok=True)


def write_creature_name_rules(rulesets: Path, established: dict[bytes, Entry]) -> None:
    """Bridge reviewed RAW names into the same scoped grammar as other species.

    The flat TSV already contains extinct species and trained caste names, but that
    alone cannot satisfy materials' ::creatures::name reference. Generate
    only missing literal forms; never learn species from arbitrary UI words,
    copy translations into code, or import this generated output as an input.
    """
    document = tomllib.loads((rulesets / "creatures/name.toml").read_text(encoding="utf-8"))
    existing: dict[str, set[str]] = {"singular": set(), "plural": set()}
    for ruleset in document.get("rulesets", []):
        role = ruleset.get("name")
        if role not in existing:
            continue
        existing[role].update(
            ascii_fold(normalize_source(source))
            for source in ruleset.get("rules", {}) if "{" not in source
        )
    folded_literals = {ascii_fold(normalize_source(entry.source)): entry
                       for entry in established.values() if "i" in entry.flags}
    names = installed_creature_name_forms(CREATURE_RAW_ROOTS)
    # The native name formatter adds training roles to eligible adult RAW
    # names. Share the same finite identities as the flat TSV generator;
    # otherwise the typed creature parser treats e.g. hunting dog as a
    # generated hunting-flavored dog and overrides its reviewed full name.
    # Keep each RAW number role and read every translation from established.
    trainable = installed_trainable_creature_name_sources(CREATURE_RAW_ROOTS)
    for sources in names.values():
        raw_sources = set(sources)
        sources.update(
            f"{training} {source}"
            for training, eligible in trainable.items()
            for source in raw_sources & eligible
        )
    path = rulesets / "creatures/name/raw_names.toml"
    count = 0
    with atomic_dictionary_output(path) as output:
        output.write("# GENERATED by tools/build_translations.py; do not edit.\n")
        output.write("# Sources: installed creature RAW names and the existing translation tables.\n")
        output.write("# Missing scoped species/caste/juvenile/trained forms only; not a global word dictionary.\n")
        output.write('base = "creatures::name::raw_names"\n')
        for role, sources in names.items():
            output.write(f'\n[[rulesets]]\nname = "{role}"\n[rulesets.rules]\n')
            for source in sorted(sources - existing[role]):
                entry = established.get(screen_bytes(source)) or folded_literals.get(source)
                if entry is None or not entry.target.strip():
                    continue
                if any(flag in entry.flags for flag in "htnrq") or any(
                        mark in entry.source + entry.target for mark in ("{", "}", "\n", "[C:")):
                    continue
                output.write(json.dumps(source, ensure_ascii=False) + " = " +
                             json.dumps(entry.target, ensure_ascii=False) + "\n")
                count += 1
    print(f"Generated {path}: {count} shared creature name forms")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--local", type=Path, default=ROOT / "data/runtime/local-overrides.tsv")
    parser.add_argument("--simple", type=Path, default=ROOT / "data/upstream/simple.zh-Hans.csv")
    parser.add_argument("--exact", type=Path, default=ROOT / "data/upstream/dfzh_dict_exact.csv")
    parser.add_argument("--word", type=Path, default=ROOT / "data/upstream/dfzh_dict_word.csv")
    parser.add_argument("--rulesets", type=Path, default=ROOT / "data/runtime/rulesets/zh-Hans")
    parser.add_argument("--extinct", type=Path, default=ROOT / "data/runtime/extinct-creatures.tsv")
    parser.add_argument(
        "--creature-objects",
        type=Path,
        default=ROOT / "data/upstream/objects.zh-Hans.po",
    )
    parser.add_argument(
        "--creature-descriptions",
        type=Path,
        default=ROOT / "data/runtime/creature-description-overrides.tsv",
    )
    parser.add_argument("--output", type=Path, default=ROOT / "data/runtime/translations.tsv")
    parser.add_argument("--preference-overrides", type=Path,
                        default=ROOT / "data/runtime/preference-reason-overrides.tsv")
    parser.add_argument("--preference-output", type=Path,
                        default=ROOT / "src/preference_vocabulary.inc")
    args = parser.parse_args()

    entries, stats = build(args)
    write_preference_vocabulary(args)
    # Share the complete reviewed BODY vocabulary with health, inventory and
    # Legends. Keep it out of the global literal extractor on subsequent runs.
    established = {screen_bytes(entry.source): entry for entry in entries
                   if "h" not in entry.flags and "r" not in entry.flags and "q" not in entry.flags}
    write_creature_name_rules(args.rulesets, established)
    wood_names_path = args.rulesets / "items/wood/raw_names.toml"
    with atomic_dictionary_output(wood_names_path) as output:
        output.write("# GENERATED by tools/build_translations.py; do not edit.\n")
        output.write("# RAW wood materials + existing plant names and log noun.\n")
        output.write('base = "items::wood::raw_names"\n\n[[rulesets]]\n[rulesets.rules]\n')
        for entry in entries:
            if entry.origin == "DFCN plant logs":
                output.write(json.dumps(entry.source, ensure_ascii=False) + " = " +
                             json.dumps(entry.target, ensure_ascii=False) + "\n")
    legends_literals = {entry.source: entry.target for entry in entries
                        if "h" in entry.flags and not any(flag in entry.flags for flag in "qjtvHIJPN")}
    anatomy = legends_body_parts(args.creature_objects, established)
    anatomy_path = args.rulesets / "health/bodypart/raw_names.toml"
    with atomic_dictionary_output(anatomy_path) as output:
        output.write("# GENERATED by tools/build_translations.py; do not edit.\n")
        output.write("# Sources: existing translations and DFI18n BODY/INDIVIDUAL_NAME.\n")
        output.write("# Scoped anatomy only; attribution: THIRD_PARTY_NOTICES.md.\n")
        output.write('base = "health::bodypart::raw_names"\n\n')
        output.write("[[rulesets]]\n[rulesets.rules]\n")
        for entry in anatomy:
            target = legends_literals.get(entry.source, entry.target)
            output.write(json.dumps(entry.source, ensure_ascii=False) + " = " +
                         json.dumps(target, ensure_ascii=False) + "\n")
    print(f"Generated {anatomy_path}: {len(anatomy)} shared anatomy names")
    with atomic_dictionary_output(args.output) as output:
        output.write("# GENERATED by tools/build_translations.py; edit the authored files in data/runtime: ui-messages.tsv, item-description-translations.tsv, tooltip-translations.tsv, workshop-tooltip-translations.tsv, workshop-recipe-translations.tsv, help-translations.tsv, dfhack-help-translations.tsv, dfhack-help-overrides.tsv, magical-material-vocabulary.tsv, local-overrides.tsv, book-title-translations.tsv, book-title-reference-translations.tsv, book-title-phrases.tsv, legends-events.tsv, legends-creature-descriptions.tsv, extinct-creatures.tsv, or creature-description-overrides.tsv instead.\n")
        output.write("# Item description scopes: H=complete item sentences, I=item noun grammar, J=item predicates (all with h); I {k}=quoted printed language word, {f}/{l}=solid/liquid food ingredient; {v}=native color, {j}=dye material list, H {o}=RAW craft profession; captures are resolved only by the shared item description parser.\n")
        output.write("# Historical identity scope (N with h): quoted or unnamed identities, with {n}=person, {p}=organization and {s}=species/profession; excluded from prose and participant matching.\n")
        output.write("# Numeric targets: {d1}/{d2} reference numbered numeric captures without exchanging day/year values; digits remain unchanged.\n")
        output.write("# Help templates (hqt): {p}=person/deity, {e}=place/entity/name, {r}=deity spheres, {d}=number, {k}=current native key sequence; every capture is retained once, with indexed targets for Chinese word order.\n")
        output.write("# UI key templates (hPt): complete messages with contextual {k} slots; preserve current bindings and native colors.\n")
        output.write("# Help objective controls (O with hq): complete independent fields, retaining native columns, progress numbers and checkmarks.\n")
        output.write("# Format: source<TAB>replacement UTF-8<TAB>flags (w=word boundary, p=literal prefix requires a following word, t=template, i=ASCII case-fold, l=left-align prose, o=operation title layout, x=strict semantic captures (display may preserve whole fields after unique fixed-boundary proof), a=adventure prose only, h=Legends detail only, b=Legends book title grammar (with h/t), u=Legends participant relations (with h/t), v=Legends description noun phrases (with h), r=deity sphere vocabulary only, q=complete help/tutorial prose only, j=complete hover/hotkey prose only (with h), D=reviewed spoken dialogue (with hP), P=complete UI prose/message (h=lookup-scoped; without h also available to exact lookup), m=magical material noun, M=material qualifier (with h, excluded from prose); {d}=number, {s}=term, a/h {n}=name/{r}=spheres, a {p}=clause, h {p}=place/{a}=participant/{t}=anatomy/{c}=spelled count/{i}=item/{e}=event/{b}=book title/{q}=color; h targets allow indexed occurrences such as {n2}/{p3})\n")
        output.write("# Community translation attribution and licenses: THIRD_PARTY_NOTICES.md\n")
        for entry in entries:
            encoded = screen_bytes(entry.source)
            assert encoded is not None
            output.write(tsv_escape_bytes(encoded))
            output.write("\t")
            output.write(tsv_escape_target(entry.target))
            if entry.flags:
                output.write("\t")
                output.write(entry.flags)
            output.write("\n")

    print("Generated", args.output)
    for key in ("total", "local", "DFCN help", "DFCN tooltips", "DFCN Legends event families", "DFI18n Legends anatomy", "DFCN animal-person descriptions", "DFCN creature descriptions", "DFI18n creature descriptions", "DFI18n creature names", "DFI18n creature preference strings", "DFI18n shape names", "DFCN standardized animal juveniles", "DFCN standardized trained animals", "DFCN generated context", "DFCN magical materials", "DFCN creature castes", "DFCN extinct creatures", "DFCN extinct creature castes", "normalized creature names", "standardized animal juvenile names", "standardized trained animal names", "dfzh exact", "dfzh word", "DFI18n simple", "dfzh literal ruleset", "keycode rules omitted", "overridden", "casefold overridden", "unencodable"):
        print(f"  {key}: {stats[key]}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
