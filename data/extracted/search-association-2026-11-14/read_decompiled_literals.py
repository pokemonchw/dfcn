"""Read disk-image literal operands still named UNK by the offline decompiler."""
from pathlib import Path
import json
import re
import struct

out = Path(__file__).resolve().parent
root = out.parents[2]
image = Path(json.loads((root / "data/runtime/native-pe-images.json").read_text())["game"])
raw = image.read_bytes()
pe = struct.unpack_from("<I", raw, 0x3c)[0]
opt = pe + 24
base = struct.unpack_from("<Q", raw, opt + 24)[0]
table = opt + struct.unpack_from("<H", raw, pe + 20)[0]
sections = [struct.unpack_from("<8sIIII", raw, table + 40 * i)
            for i in range(struct.unpack_from("<H", raw, pe + 6)[0])]
rows = ["function\tc_line\tvirtual_address\tliteral"]
for source in sorted(out.glob("*.c")):
    for line_no, line in enumerate(source.read_text().splitlines(), 1):
        for address in re.findall(r"\bUNK_([0-9a-fA-F]+)\b", line):
            rva = int(address, 16) - base
            section = next((s for s in sections if s[2] <= rva < s[2] + s[3]), None)
            if section is None or section[0].rstrip(b"\0") != b".rdata":
                continue
            at = section[4] + rva - section[2]
            end = raw.find(b"\0", at, at + 4096)
            value = raw[at:end] if end != -1 else b""
            if len(value) < 3 or not all(32 <= c <= 126 or c in (9, 10, 13) for c in value):
                continue
            text = value.decode("ascii").replace("\t", "\\t").replace("\r", "\\r").replace("\n", "\\n")
            rows.append(f"{source.stem}\t{line_no}\t0x{address}\t{text}")
(out / "decompiled-literals.tsv").write_text("\n".join(rows) + "\n", encoding="utf-8")
print("Read native literal operands into", out / "decompiled-literals.tsv")
