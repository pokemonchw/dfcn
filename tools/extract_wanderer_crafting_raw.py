"""Extract the author's published Wanderer R20a adventure crafting RAW sources.

This archive is the author's older, publicly downloadable release. It is not
presented as the current Steam release. The screenshot's changed headings and
descriptions retain separate screenshot provenance.
"""

import csv
import io
from pathlib import Path
import re
import urllib.request
import zipfile


SOURCE_PAGE = "https://dffd.bay12games.com/file.php?id=11310"
SOURCE_ARCHIVE = "https://dffd.bay12games.com/download.php?f=DF+Wanderer+R20a+ASCII.zip&id=11310"
OUT = Path(__file__).resolve().parent.parent / "data" / "extracted" / "adventure-crafting"
RAW_COPY = OUT / "sources" / "wanderer-r20a-reaction_adventurer.txt"


def write_table(name, header, rows):
    with (OUT / name).open("w", encoding="utf-8", newline="") as stream:
        writer = csv.writer(stream, delimiter="\t", lineterminator="\n")
        writer.writerow(header)
        writer.writerows(rows)


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    RAW_COPY.parent.mkdir(parents=True, exist_ok=True)
    member = "DF Wanderer R20a ASCII/raw/objects/reaction_adventurer.txt"
    if RAW_COPY.is_file():
        content = RAW_COPY.read_text(encoding="utf-8")
    else:
        archive = urllib.request.urlopen(SOURCE_ARCHIVE, timeout=60).read()
        with zipfile.ZipFile(io.BytesIO(archive)) as package:
            content = package.read(member).decode("cp437")
        RAW_COPY.write_text(content, encoding="utf-8", newline="\n")

    starts = list(re.finditer(r"\[REACTION:([^\]]+)\]", content))
    fields = []
    texts = []
    reactions = []
    reagents = []
    category_definitions = []
    for index, marker in enumerate(starts):
        stop = starts[index + 1].start() if index + 1 < len(starts) else len(content)
        block = content[marker.start():stop]
        tokens = list(re.finditer(r"\[([^\[\]]+)\]", block))
        values = {}
        for token in tokens:
            kind, _, value = token.group(1).partition(":")
            values.setdefault(kind, []).append(value)
        reaction = marker.group(1)
        name = "|".join(values.get("NAME", []))
        category = "|".join(values.get("CATEGORY", []))
        adventure = int("ADVENTURE_MODE_ENABLED" in values)
        line = content.count("\n", 0, marker.start()) + 1
        reactions.append([SOURCE_PAGE, SOURCE_ARCHIVE, "R20a", member, line, reaction, name, adventure, category])
        for token in tokens:
            kind, _, value = token.group(1).partition(":")
            line = content.count("\n", 0, marker.start() + token.start()) + 1
            row = [SOURCE_PAGE, SOURCE_ARCHIVE, "R20a", member, line, reaction, adventure, category, kind, value]
            fields.append(row)
            if kind in {"NAME", "CATEGORY_NAME", "CATEGORY_DESCRIPTION", "DESCRIPTION"}:
                texts.append(row)
            if kind in {"CATEGORY_NAME", "CATEGORY_DESCRIPTION", "CATEGORY_PARENT", "CATEGORY_KEY"}:
                category_definitions.append(row)
            if kind == "REAGENT":
                code, _, remainder = value.partition(":")
                reagents.append([SOURCE_PAGE, SOURCE_ARCHIVE, "R20a", member, line, reaction, adventure, category, code, remainder])

    field_header = ["source_url", "archive_url", "version", "member", "line", "reaction", "adventure_enabled", "category", "token", "value"]
    write_table("raw-mod-wanderer-r20a-fields.tsv", field_header, fields)
    write_table("raw-mod-wanderer-r20a-texts.tsv", field_header, texts)
    write_table("raw-mod-wanderer-r20a-category-definitions.tsv", field_header, category_definitions)
    write_table("raw-mod-wanderer-r20a-reactions.tsv", ["source_url", "archive_url", "version", "member", "line", "reaction", "name", "adventure_enabled", "category"], reactions)
    write_table("raw-mod-wanderer-r20a-reagents.tsv", ["source_url", "archive_url", "version", "member", "line", "reaction", "adventure_enabled", "category", "name", "requirements"], reagents)
    print(f"Published Wanderer R20a extracted: {len(reactions)} reactions, {len(fields)} RAW fields, {len(reagents)} reagent names.")
    for row in texts:
        print(f"{row[8]}\t{row[9]}")


if __name__ == "__main__":
    main()
