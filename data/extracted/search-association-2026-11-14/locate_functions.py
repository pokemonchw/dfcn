"""Locate search functions in the configured disk image for offline decompilation."""
from pathlib import Path
import hashlib
import json
import struct

ROOT = Path(__file__).resolve().parents[3]
OUT = Path(__file__).resolve().parent
image = Path(json.loads((ROOT / "data/runtime/native-pe-images.json").read_text())["game"])
raw = image.read_bytes()
digest = hashlib.sha256(raw).hexdigest()
pe = struct.unpack_from("<I", raw, 0x3c)[0]
if raw[:2] != b"MZ" or raw[pe:pe + 4] != b"PE\0\0":
    raise ValueError("Configured source is not a PE image")
opt = pe + 24
base = struct.unpack_from("<Q", raw, opt + 24)[0]
count = struct.unpack_from("<H", raw, pe + 6)[0]
opt_size = struct.unpack_from("<H", raw, pe + 20)[0]
sections = [struct.unpack_from("<8sIIII", raw, opt + opt_size + i * 40) for i in range(count)]
def offset(rva):
    return next(disk + rva - start for _, _, start, size, disk in sections if start <= rva < start + size)
unwind, unwind_size = struct.unpack_from("<II", raw, opt + 112 + 3 * 8)
functions = list(struct.iter_unpack("<III", raw[offset(unwind):offset(unwind) + unwind_size]))
def owner(row):
    seen = set()
    while row not in seen:
        seen.add(row)
        at = offset(row[2])
        flags, _, codes, _ = struct.unpack_from("4B", raw, at)
        if not (flags >> 3) & 4:
            return row
        row = struct.unpack_from("<III", raw, at + 4 + ((codes + 1) & ~1) * 2)
    raise ValueError("Cyclic unwind chain")

anchors = {
    "work_order_filter": 0x3c3211,
    "workshop_filter": 0x1a8747,
    "stockpile_filter": 0x3bc43e,
    "search_fold": 0x52cee0,
    "job_caption": 0xd032b0,
    "item_requirement_noun": 0xa82c10,
    "tool_use_requirement": 0x724a30,
    "work_order_population": 0x376608,
}
locations = {name: set() for name in anchors}
cache_dir = image.parent / "dfcn/data/runtime/native-addresses/cache"
used = []
for path in sorted(cache_dir.glob(digest + "*")):
    data = path.read_bytes()
    if data[:8] != b"DFCNPC05" or data[44:76].hex() != digest:
        continue
    if hashlib.sha256(data[:-32]).digest() != data[-32:]:
        continue
    n = struct.unpack_from("<I", data, 84)[0]
    ranges = list(struct.iter_unpack("<III", data[88:88 + n * 12]))
    used.append(path.name)
    for name, reference in anchors.items():
        locations[name].update(native + reference - start for start, end, native in ranges if start <= reference < end)

if len(locations["work_order_population"]) == 1:
    call = next(iter(locations["work_order_population"]))
    at = offset(call)
    if raw[at] == 0xe8:
        locations["job_caption"].add(call + 5 + struct.unpack_from("<i", raw, at + 1)[0])

manifest = []
coordinates = ["role\treference_anchor\tcurrent_anchor\towner_start\towner_end\tranges"]
for name, reference in anchors.items():
    found = locations[name]
    if len(found) != 1:
        print(name, "unresolved", sorted(hex(x) for x in found))
        continue
    anchor = next(iter(found))
    containing = next((row for row in functions if row[0] <= anchor < row[1]), None)
    if containing is None:
        print(name, hex(anchor), "leaf without unwind envelope; retained earlier fold decompilation separately")
        continue
    root = owner(containing)
    ranges = sorted(set((a, b) for a, b, u in functions if owner((a, b, u)) == root))
    body = ";".join(f"{base+a:x}-{base+b:x}" for a, b in ranges)
    manifest.append(f"{name}\t{base+root[0]:x}\t{body}")
    coordinates.append(f"{name}\t{reference:#x}\t{anchor:#x}\t{root[0]:#x}\t{root[1]:#x}\t{body}")
    print(name, hex(anchor), hex(root[0]), hex(root[1]))
(OUT / "functions.tsv").write_text("\n".join(manifest) + "\n", encoding="utf-8")
(OUT / "coordinates.tsv").write_text("\n".join(coordinates) + "\n", encoding="utf-8")
(OUT / "disk-image.txt").write_text(f"path={image}\nsha256={digest}\nbase={base:#x}\n" +
    "coordinate_source=existing immutable address caches for this exact disk image; no process reads\n" +
    "\n".join(used) + "\n", encoding="utf-8")
print("image", digest)
