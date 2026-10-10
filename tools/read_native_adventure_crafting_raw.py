"""Extract original adventure reaction RAW fields with read-only process access.

The layouts and global RVAs come from the configured native PE decompilation in
data/extracted/adventure-crafting. No game functions are called and no process
memory is written. The executable base is used only to locate world RAW vectors;
module names, versions, translation state and module information are not saved.
"""

import argparse
import csv
import ctypes as C
from ctypes import wintypes as W
from pathlib import Path
import struct


LAYOUTS = {
    "steam": {"reactions": 0x24F7268, "categories": 0x24F7280},
    "classic": {"reactions": 0x24F1158, "categories": 0x24F1170},
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("pid", type=int)
    parser.add_argument("--image", choices=LAYOUTS, required=True)
    parser.add_argument("--output", type=Path, default=Path(__file__).resolve().parent.parent / "data" / "extracted" / "adventure-crafting")
    args = parser.parse_args()

    kernel = C.WinDLL("kernel32", use_last_error=True)
    kernel.OpenProcess.argtypes = [W.DWORD, W.BOOL, W.DWORD]
    kernel.OpenProcess.restype = W.HANDLE
    kernel.CloseHandle.argtypes = [W.HANDLE]
    kernel.ReadProcessMemory.argtypes = [W.HANDLE, C.c_void_p, C.c_void_p, C.c_size_t, C.POINTER(C.c_size_t)]
    kernel.ReadProcessMemory.restype = W.BOOL
    psapi = C.WinDLL("psapi", use_last_error=True)
    psapi.EnumProcessModules.argtypes = [W.HANDLE, C.POINTER(C.c_void_p), W.DWORD, C.POINTER(W.DWORD)]
    psapi.EnumProcessModules.restype = W.BOOL

    handle = kernel.OpenProcess(0x410, False, args.pid)
    if not handle:
        raise C.WinError(C.get_last_error())

    def read(address, size):
        if size < 0 or size > 1024 * 1024:
            raise ValueError("RAW field read exceeds the extraction bound")
        if not size:
            return b""
        buffer = C.create_string_buffer(size)
        done = C.c_size_t()
        if not kernel.ReadProcessMemory(handle, address, buffer, size, C.byref(done)) or done.value != size:
            raise C.WinError(C.get_last_error())
        return buffer.raw

    def scalar(address, fmt="Q"):
        return struct.unpack("<" + fmt, read(address, struct.calcsize("<" + fmt)))[0]

    def vector(address):
        begin, end, capacity = struct.unpack("<3Q", read(address, 24))
        if not (begin <= end <= capacity) or (end - begin) % 8:
            raise ValueError("Invalid RAW vector layout")
        return [entry[0] for entry in struct.iter_unpack("<Q", read(begin, end - begin))]

    def string(address):
        storage = read(address, 32)
        length, capacity = struct.unpack_from("<2Q", storage, 16)
        if length > capacity or length > 262144:
            raise ValueError("Invalid RAW string layout")
        data = storage[:length] if capacity < 16 else read(struct.unpack_from("<Q", storage)[0], length)
        return data.decode("cp437")

    def write_table(name, header, rows):
        with (args.output / name).open("w", encoding="utf-8", newline="") as output:
            writer = csv.writer(output, delimiter="\t", lineterminator="\n")
            writer.writerow(header)
            writer.writerows(rows)

    try:
        # Only the first executable base is needed. No other module is read,
        # named, inspected or recorded.
        first = (C.c_void_p * 1)()
        needed = W.DWORD()
        if not psapi.EnumProcessModules(handle, first, C.sizeof(first), C.byref(needed)):
            raise C.WinError(C.get_last_error())
        base = first[0]
        layout = LAYOUTS[args.image]
        category_rows = []
        reaction_rows = []
        reagent_rows = []
        text_rows = []

        for index, category in enumerate(vector(base + layout["categories"])):
            token = string(category)
            parent = string(category + 0x20)
            name = string(category + 0x40)
            key = scalar(category + 0x60, "i")
            description = string(category + 0x68)
            category_rows.append([args.image, index, token, parent, name, key, description])
            text_rows.append([args.image, "category", index, token, "name", "category+0x40", name])
            text_rows.append([args.image, "category", index, token, "description", "category+0x68", description])

        adventure_count = 0
        for index, reaction in enumerate(vector(base + layout["reactions"])):
            token = string(reaction)
            name = string(reaction + 0x20)
            category = string(reaction + 0x140)
            flag_data = scalar(reaction + 0x40)
            flag_count = scalar(reaction + 0x48, "i")
            adventure = bool(flag_count > 0 and scalar(flag_data, "B") & 4)
            adventure_count += adventure
            reagent_list = vector(reaction + 0x50)
            reaction_rows.append([args.image, index, token, name, int(adventure), category, len(reagent_list)])
            text_rows.append([args.image, "reaction", index, token, "name", "reaction+0x20", name])
            for reagent_index, reagent in enumerate(reagent_list):
                reagent_name = string(reagent + 0x08)
                quantity = scalar(reagent + 0x28, "i")
                flags = scalar(reagent + 0x2C, "I")
                reagent_rows.append([args.image, index, token, name, int(adventure), category, reagent_index, reagent_name, quantity, flags])
                text_rows.append([args.image, "reagent", index, token, "name", f"reaction.reagents[{reagent_index}]+0x08", reagent_name])

        args.output.mkdir(parents=True, exist_ok=True)
        write_table("raw-live-categories.tsv", ["image", "index", "token", "parent", "name", "key", "description"], category_rows)
        write_table("raw-live-reactions.tsv", ["image", "index", "token", "name", "adventure_enabled", "category", "reagent_count"], reaction_rows)
        write_table("raw-live-reagents.tsv", ["image", "reaction_index", "reaction_token", "reaction_name", "adventure_enabled", "category", "reagent_index", "name", "quantity", "flags"], reagent_rows)
        write_table("raw-live-texts.tsv", ["image", "kind", "index", "token", "field", "native_field", "text"], text_rows)
        print(f"World RAW extracted: {len(category_rows)} categories, {len(reaction_rows)} reactions ({adventure_count} adventure-enabled), {len(reagent_rows)} reagent name fields.")
    finally:
        kernel.CloseHandle(handle)


if __name__ == "__main__":
    main()
