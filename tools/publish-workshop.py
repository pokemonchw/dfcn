#!/usr/bin/env python3
"""Publish the prepared DFCN Workshop folder through the logged-in Steam client.

Uses the installed Steamworks library and its flat UGC interface. This helper
does not start Steam or the game, display a window, or require account secrets.
"""

from __future__ import annotations

import argparse
import ctypes as C
import json
import os
from pathlib import Path
import re
import sys
import time


ROOT = Path(__file__).resolve().parents[1]
STEAM_DIR = (Path.home() / ".local/share/Steam" if sys.platform == "linux"
             else Path(r"D:\program\steam"))
GAME_DIR = STEAM_DIR / "steamapps/common/Dwarf Fortress"
STEAM_DLL = (STEAM_DIR / "steamrt64/libsteam_api.so" if sys.platform == "linux"
             else GAME_DIR / "steam_api64.dll")
STATE_FILE = ROOT / "workshop/published-item.json"
INVALID_HANDLE = (1 << 64) - 1
CALLBACK_PACK = 4 if sys.platform == "linux" else 8

U32 = C.c_uint32
U64 = C.c_uint64
I32 = C.c_int32
PTR = C.c_void_p
BOOL = C.c_bool
STR = C.c_char_p


class CallbackMsg(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [("user", I32), ("callback", I32), ("data", PTR), ("size", I32)]


class APICallCompleted(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [("call", U64), ("callback", I32), ("size", U32)]


class QueryCompleted(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [
        ("handle", U64), ("result", I32), ("returned", U32), ("total", U32),
        ("cached", BOOL), ("next_cursor", C.c_char * 256),
    ]


class CreateItemResult(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [("result", I32), ("item_id", U64), ("needs_legal", BOOL)]


class SubmitItemResult(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [("result", I32), ("needs_legal", BOOL), ("item_id", U64)]


class AddDependencyResult(C.Structure):
    _pack_ = CALLBACK_PACK
    _fields_ = [("result", I32), ("item_id", U64), ("child_id", U64)]


class UGCDetails(C.Structure):
    # Valve SDK callback packing is 4 on Linux and 8 on Windows.
    # The trailing size field is present in UGC021; older interfaces leave it.
    _pack_ = CALLBACK_PACK
    _fields_ = [
        ("item_id", U64), ("result", I32), ("file_type", I32),
        ("creator_appid", U32), ("consumer_appid", U32),
        ("title", C.c_char * 129), ("description", C.c_char * 8000),
        ("owner", U64), ("created", U32), ("updated", U32), ("added", U32),
        ("visibility", I32), ("banned", BOOL), ("accepted", BOOL),
        ("tags_truncated", BOOL), ("tags", C.c_char * 1025),
        ("file_handle", U64), ("preview_handle", U64),
        ("filename", C.c_char * 260), ("file_size", I32),
        ("preview_size", I32), ("url", C.c_char * 256),
        ("votes_up", U32), ("votes_down", U32), ("score", C.c_float),
        ("children", U32), ("total_files_size", U64),
    ]


class StringArray(C.Structure):
    _pack_ = 8
    _fields_ = [("strings", C.POINTER(STR)), ("count", I32)]


RESULT_NAMES = {
    1: "OK", 2: "Fail", 3: "NoConnection", 8: "InvalidParam",
    9: "FileNotFound", 15: "AccessDenied", 16: "Timeout", 25: "LimitExceeded",
    29: "DuplicateRequest", 33: "LockingFailed", 37: "IOFailure", 48: "Cancelled",
    50: "AlreadyLoggedInElsewhere", 62: "AccountLogonDenied",
    63: "CannotUseOldPassword", 65: "InvalidLoginAuthCode", 84: "RateLimitExceeded",
    86: "AccountLoginDeniedNeedTwoFactor", 24: "InsufficientPrivilege",
}


def emit(value):
    print(json.dumps(value, ensure_ascii=False), flush=True)


def result_ok(result, operation):
    if result != 1:
        raise RuntimeError(
            f"{operation}: Steam EResult {result} ({RESULT_NAMES.get(result, 'Unknown')})"
        )


def resolve_path(value):
    path = Path(value)
    return path if path.is_absolute() else ROOT / path


def save_state(item_id, metadata, phase, needs_legal=False):
    state = {
        "publishedfileid": str(item_id),
        "appid": int(metadata["appid"]),
        "title": metadata["title"],
        "release_tag": metadata.get("release_tag", ""),
        "workshop_url": f"https://steamcommunity.com/sharedfiles/filedetails/?id={item_id}",
        "phase": phase,
        "needs_workshop_legal_agreement": bool(needs_legal),
    }
    STATE_FILE.parent.mkdir(parents=True, exist_ok=True)
    temporary = STATE_FILE.with_suffix(".json.tmp")
    temporary.write_text(json.dumps(state, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    temporary.replace(STATE_FILE)
    return state


class Steam:
    def __init__(self, appid):
        self.initialized = False
        self.dll_dirs = []
        os.environ["SteamAppId"] = str(appid)
        os.environ["SteamGameId"] = str(appid)
        if sys.platform == "win32":
            for directory in (GAME_DIR, STEAM_DIR):
                self.dll_dirs.append(os.add_dll_directory(str(directory)))
        self.dll = C.CDLL(str(STEAM_DLL))
        if hasattr(self.dll, "SteamAPI_InitFlat"):
            self.bind("SteamAPI_InitFlat", I32, [PTR])
        else:
            self.bind("SteamAPI_Init", BOOL, [])
        self.bind("SteamAPI_Shutdown", None, [])
        self.bind("SteamAPI_GetHSteamPipe", I32, [])
        self.bind("SteamAPI_ManualDispatch_Init", None, [])
        self.bind("SteamAPI_ManualDispatch_RunFrame", None, [I32])
        self.bind("SteamAPI_ManualDispatch_GetNextCallback", BOOL, [I32, C.POINTER(CallbackMsg)])
        self.bind("SteamAPI_ManualDispatch_FreeLastCallback", None, [I32])
        self.bind("SteamAPI_ManualDispatch_GetAPICallResult", BOOL,
                  [I32, U64, PTR, I32, I32, C.POINTER(BOOL)])
        ugc = self.bind_interface("SteamUGC", ("021", "020", "016"))
        user = self.bind_interface("SteamUser", ("023", "021"))
        utils = self.bind_interface("SteamUtils", ("011", "010"))
        self.bind("SteamAPI_ISteamUser_GetSteamID", U64, [PTR])
        self.bind("SteamAPI_ISteamUtils_GetAppID", U32, [PTR])
        self.bind("SteamAPI_ISteamUGC_CreateQueryUserUGCRequest", U64,
                  [PTR, U32, I32, I32, I32, U32, U32, U32])
        self.bind("SteamAPI_ISteamUGC_SendQueryUGCRequest", U64, [PTR, U64])
        self.bind("SteamAPI_ISteamUGC_SetAllowCachedResponse", BOOL, [PTR, U64, U32])
        self.bind("SteamAPI_ISteamUGC_GetQueryUGCResult", BOOL, [PTR, U64, U32, C.POINTER(UGCDetails)])
        self.bind("SteamAPI_ISteamUGC_ReleaseQueryUGCRequest", BOOL, [PTR, U64])
        self.bind("SteamAPI_ISteamUGC_CreateItem", U64, [PTR, U32, I32])
        self.bind("SteamAPI_ISteamUGC_StartItemUpdate", U64, [PTR, U32, U64])
        for name in ("Title", "Description", "Content", "Preview", "UpdateLanguage"):
            self.bind("SteamAPI_ISteamUGC_SetItem" + name, BOOL, [PTR, U64, STR])
        self.bind("SteamAPI_ISteamUGC_SetItemVisibility", BOOL, [PTR, U64, I32])
        self.bind("SteamAPI_ISteamUGC_SetItemTags", BOOL, [PTR, U64, C.POINTER(StringArray)])
        self.bind("SteamAPI_ISteamUGC_SubmitItemUpdate", U64, [PTR, U64, STR])
        self.bind("SteamAPI_ISteamUGC_GetItemUpdateProgress", I32,
                  [PTR, U64, C.POINTER(U64), C.POINTER(U64)])
        if hasattr(self.dll, "SteamAPI_InitFlat"):
            error = C.create_string_buffer(1024)
            result = self.dll.SteamAPI_InitFlat(error)
            if result != 0:
                raise RuntimeError(f"SteamAPI_InitFlat failed ({result}): "
                                   f"{error.value.decode('utf-8', errors='replace')}")
        elif not self.dll.SteamAPI_Init():
            raise RuntimeError("SteamAPI_Init failed; the existing Steam session could not be used")
        self.initialized = True
        self.dll.SteamAPI_ManualDispatch_Init()
        self.pipe = self.dll.SteamAPI_GetHSteamPipe()
        self.ugc = ugc()
        self.user = user()
        self.utils = utils()
        if not all((self.pipe, self.ugc, self.user, self.utils)):
            self.close()
            raise RuntimeError("Steam did not return the required Steamworks interfaces")
        self.appid = self.dll.SteamAPI_ISteamUtils_GetAppID(self.utils)
        if self.appid != appid:
            self.close()
            raise RuntimeError(f"Steam app context is {self.appid}, expected {appid}")
        self.steam_id = self.dll.SteamAPI_ISteamUser_GetSteamID(self.user)
        self.pending_results = {}

    def bind(self, name, result, args):
        function = getattr(self.dll, name)
        function.restype = result
        function.argtypes = args

    def bind_interface(self, name, versions):
        for version in versions:
            symbol = f"SteamAPI_{name}_v{version}"
            if hasattr(self.dll, symbol):
                self.bind(symbol, PTR, [])
                return getattr(self.dll, symbol)
        raise RuntimeError(f"Steamworks library lacks a supported {name} interface: {STEAM_DLL}")

    def close(self):
        if self.initialized:
            self.dll.SteamAPI_Shutdown()
            self.initialized = False
        for directory in self.dll_dirs:
            directory.close()
        self.dll_dirs = []

    def wait_result(self, call, callback_id, structure, operation, timeout=120, update_handle=None):
        if not call:
            raise RuntimeError(f"{operation}: Steam returned an invalid async call handle")
        deadline = time.monotonic() + timeout
        last_progress = None
        next_progress = 0.0
        while time.monotonic() < deadline:
            self.dll.SteamAPI_ManualDispatch_RunFrame(self.pipe)
            message = CallbackMsg()
            while self.dll.SteamAPI_ManualDispatch_GetNextCallback(self.pipe, C.byref(message)):
                try:
                    if message.callback == 703:
                        complete = APICallCompleted.from_buffer_copy(
                            C.string_at(message.data, C.sizeof(APICallCompleted))
                        )
                        raw = C.create_string_buffer(complete.size)
                        failed = BOOL()
                        obtained = self.dll.SteamAPI_ManualDispatch_GetAPICallResult(
                            self.pipe, complete.call, raw, complete.size,
                            complete.callback, C.byref(failed),
                        )
                        self.pending_results[complete.call] = (
                            complete.callback, bytes(raw), bool(failed.value), bool(obtained)
                        )
                finally:
                    self.dll.SteamAPI_ManualDispatch_FreeLastCallback(self.pipe)
            if call in self.pending_results:
                actual_id, raw, failed, obtained = self.pending_results.pop(call)
                if not obtained or failed:
                    raise RuntimeError(f"{operation}: Steam API call failed (IO failure={failed})")
                if actual_id != callback_id or len(raw) < C.sizeof(structure):
                    raise RuntimeError(
                        f"{operation}: unexpected result callback {actual_id}, {len(raw)} bytes"
                    )
                return structure.from_buffer_copy(raw)
            now = time.monotonic()
            if update_handle is not None and now >= next_progress:
                processed, total = U64(), U64()
                status = self.dll.SteamAPI_ISteamUGC_GetItemUpdateProgress(
                    self.ugc, update_handle, C.byref(processed), C.byref(total)
                )
                progress = (status, processed.value, total.value)
                if progress != last_progress:
                    emit({"operation": "upload", "status": status,
                          "bytes_processed": processed.value, "bytes_total": total.value})
                    last_progress = progress
                next_progress = now + 5
            time.sleep(0.1)
        raise RuntimeError(f"{operation}: no Steam result after {timeout} seconds")

    def owned_items(self):
        items = []
        page = 1
        seen = 0
        while True:
            handle = self.dll.SteamAPI_ISteamUGC_CreateQueryUserUGCRequest(
                self.ugc, self.steam_id & 0xFFFFFFFF, 0, -1, 0, 0, self.appid, page
            )
            if handle == INVALID_HANDLE:
                raise RuntimeError("Steam refused the published-items query")
            try:
                self.dll.SteamAPI_ISteamUGC_SetAllowCachedResponse(self.ugc, handle, 0)
                call = self.dll.SteamAPI_ISteamUGC_SendQueryUGCRequest(self.ugc, handle)
                completed = self.wait_result(call, 3401, QueryCompleted, "Query published items")
                result_ok(completed.result, "Query published items")
                for index in range(completed.returned):
                    details = UGCDetails()
                    if not self.dll.SteamAPI_ISteamUGC_GetQueryUGCResult(
                        self.ugc, handle, index, C.byref(details)
                    ):
                        raise RuntimeError("Steam could not read a published-item query result")
                    result_ok(details.result, "Read published item")
                    if details.consumer_appid != self.appid:
                        raise RuntimeError("Steam returned an item for a different app")
                    # A user's published list can include another owner's item.
                    # Only the current owner's entries can select an upload target.
                    if details.owner != self.steam_id:
                        continue
                    items.append({
                        "publishedfileid": str(details.item_id),
                        "title": bytes(details.title).decode("utf-8", errors="replace"),
                        "creator_appid": details.creator_appid,
                    })
                seen += completed.returned
                if seen >= completed.total:
                    return items
                if completed.returned == 0:
                    raise RuntimeError("Steam returned an incomplete published-items list")
                page += 1
            finally:
                self.dll.SteamAPI_ISteamUGC_ReleaseQueryUGCRequest(self.ugc, handle)

    def publish(self, metadata, explicit_item_id=None):
        title = metadata["title"]
        required_items = list(dict.fromkeys(int(value) for value in metadata.get("required_items", [])))
        if any(value <= 0 or value >= INVALID_HANDLE for value in required_items):
            raise ValueError("Required Workshop item IDs must be positive published file IDs")
        if required_items:
            self.bind("SteamAPI_ISteamUGC_AddDependency", U64, [PTR, U64, U64])
        description_path = resolve_path(metadata["description_file"])
        content = resolve_path(metadata["content_folder"])
        preview = resolve_path(metadata["preview_file"])
        description_template = description_path.read_text(encoding="utf-8-sig")
        if not content.is_dir():
            raise RuntimeError(f"Workshop content folder is missing: {content}")
        if not preview.is_file():
            raise RuntimeError(f"Workshop preview image is missing: {preview}")
        if preview.stat().st_size >= 1024 * 1024:
            raise RuntimeError("Workshop preview must be smaller than 1 MiB")
        if len(title.encode("utf-8")) > 128:
            raise RuntimeError("Workshop title exceeds Steam's 128-byte limit")

        items = self.owned_items()
        by_id = {int(item["publishedfileid"]): item for item in items}
        state = json.loads(STATE_FILE.read_text(encoding="utf-8-sig")) if STATE_FILE.exists() else None
        saved_id = int(state["publishedfileid"]) if state and state.get("publishedfileid") else None
        if state and int(state.get("appid", self.appid)) != self.appid:
            raise RuntimeError("Saved Workshop identity belongs to a different app")
        if explicit_item_id and saved_id and explicit_item_id != saved_id:
            raise RuntimeError("Explicit Workshop ID differs from the saved identity; refusing a duplicate")
        item_id = explicit_item_id or saved_id
        if item_id is not None:
            if item_id not in by_id:
                raise RuntimeError(f"Workshop item {item_id} is not in this account's published items for this app")
        else:
            matches = [item for item in items if item["title"] == title]
            if len(matches) > 1:
                raise RuntimeError("Several owned Workshop items match the exact title; choose --item-id")
            if matches:
                item_id = int(matches[0]["publishedfileid"])
            else:
                call = self.dll.SteamAPI_ISteamUGC_CreateItem(self.ugc, self.appid, 0)
                created = self.wait_result(call, 3403, CreateItemResult, "Create Workshop item")
                if created.item_id:
                    save_state(created.item_id, metadata, "created", created.needs_legal)
                result_ok(created.result, "Create Workshop item")
                if not created.item_id:
                    raise RuntimeError("Steam created an item without a published file ID")
                item_id = created.item_id
                emit({"operation": "created", "publishedfileid": str(item_id),
                      "needs_workshop_legal_agreement": bool(created.needs_legal)})
        save_state(item_id, metadata, "preparing")

        for child_id in required_items:
            if child_id == item_id:
                raise ValueError("A Workshop item cannot require itself")
            call = self.dll.SteamAPI_ISteamUGC_AddDependency(self.ugc, item_id, child_id)
            added = self.wait_result(call, 3412, AddDependencyResult, "Add required Workshop item")
            # Re-publishing an item keeps dependencies already added to it.
            if added.result != 29:
                result_ok(added.result, "Add required Workshop item")
            if added.item_id != item_id or added.child_id != child_id:
                raise RuntimeError("Steam returned a different Workshop dependency")
            emit({"operation": "dependency_present" if added.result == 29 else "dependency_added",
                  "publishedfileid": str(item_id),
                  "required_item": str(child_id)})

        description = description_template.replace("__WORKSHOP_ID__", str(item_id))
        if len(description.encode("utf-8")) >= 8000:
            raise RuntimeError("Workshop description exceeds Steam's 7999-byte limit")
        description_path.with_name("description.published.bbcode.txt").write_text(description, encoding="utf-8")
        for filename in ("INSTALL.txt", "info.txt"):
            path = content / filename
            if path.is_file():
                text = path.read_text(encoding="utf-8-sig")
                text = text.replace("__WORKSHOP_ID__", str(item_id)).replace("[STEAM_FILE_ID]", f"[STEAM_FILE_ID:{item_id}]")
                if filename == "info.txt":
                    linked_id = f"[STEAM_FILE_ID:{item_id}]"
                    if re.search(r"\[STEAM_FILE_ID:[^\]]*\]", text):
                        text = re.sub(r"\[STEAM_FILE_ID:[^\]]*\]", linked_id, text)
                    else:
                        text = text.rstrip() + "\n" + linked_id + "\n"
                path.write_text(text, encoding="utf-8")

        handle = self.dll.SteamAPI_ISteamUGC_StartItemUpdate(self.ugc, self.appid, item_id)
        if handle == INVALID_HANDLE:
            raise RuntimeError("Steam refused the Workshop item update")
        setters = [
            ("SetItemTitle", title.encode("utf-8")),
            ("SetItemDescription", description.encode("utf-8")),
            ("SetItemContent", str(content.resolve()).encode("utf-8")),
            ("SetItemPreview", str(preview.resolve()).encode("utf-8")),
            ("SetItemVisibility", int(metadata.get("visibility", 0))),
        ]
        # Keep Chinese text in the default description so every player sees the
        # installation instructions regardless of the Steam language setting.
        for name, value in setters:
            if not getattr(self.dll, "SteamAPI_ISteamUGC_" + name)(self.ugc, handle, value):
                raise RuntimeError(f"Steam rejected {name}")
        tags = [str(tag).encode("utf-8") for tag in metadata.get("tags", [])]
        tag_pointers = (STR * len(tags))(*tags)
        tag_array = StringArray(tag_pointers, len(tags))
        if not self.dll.SteamAPI_ISteamUGC_SetItemTags(self.ugc, handle, C.byref(tag_array)):
            raise RuntimeError("Steam rejected Workshop tags")
        call = self.dll.SteamAPI_ISteamUGC_SubmitItemUpdate(
            self.ugc, handle, metadata.get("changelog", "").encode("utf-8")
        )
        save_state(item_id, metadata, "uploading")
        submitted = self.wait_result(call, 3404, SubmitItemResult, "Submit Workshop item",
                                     timeout=900, update_handle=handle)
        result_ok(submitted.result, "Submit Workshop item")
        final = save_state(item_id, metadata, "published", submitted.needs_legal)
        emit({"operation": "published", **final})
        if submitted.needs_legal:
            raise RuntimeError(
                "Steam accepted the upload but requires this account to accept the Workshop legal agreement; "
                "the saved Workshop item may remain hidden"
            )


def main():
    global STATE_FILE
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=("query", "publish"))
    parser.add_argument("--metadata", default="workshop/publish.json")
    parser.add_argument("--item-id", type=int)
    parser.add_argument("--state-file", help="Identity file for this independently published mod.")
    args = parser.parse_args()
    metadata_path = resolve_path(args.metadata)
    metadata = json.loads(metadata_path.read_text(encoding="utf-8-sig"))
    STATE_FILE = (resolve_path(args.state_file) if args.state_file else
                  metadata_path.parent / "published-item.json")
    steam = Steam(int(metadata["appid"]))
    try:
        if args.command == "query":
            items = steam.owned_items()
            related = [item for item in items if "dfcn" in item["title"].casefold()
                       or item["title"] == metadata["title"]]
            emit({"appid": steam.appid, "total_owned_game_items": len(items), "dfcn_items": related})
        else:
            steam.publish(metadata, args.item_id)
    finally:
        steam.close()


if __name__ == "__main__":
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    try:
        main()
    except (OSError, ValueError, KeyError, RuntimeError) as error:
        emit({"error": str(error)})
        sys.exit(1)
