"""Package existing cross-built Windows DLLs and Workshop content on Linux."""

from pathlib import Path
import importlib.util
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
import zipfile


ROOT = Path(__file__).resolve().parents[1]
WORKSHOP = ROOT / "workshop"
STRIP = (Path.home() / ".local/share/dfcn-toolchains/mingw-w64-16.2.0/usr/bin/"
         "x86_64-w64-mingw32-strip")
BOOTSTRAP = (Path.home() / ".local/share/Steam/steamapps/common/Dwarf Fortress/dfhooks.dll")


def write_archive(directory, destination, prefix=""):
    candidate = destination.with_suffix(destination.suffix + ".tmp")
    try:
        with zipfile.ZipFile(candidate, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as archive:
            for path in sorted(directory.rglob("*")):
                if path.is_symlink():
                    raise RuntimeError(f"Package content must not contain symlinks: {path}")
                if path.is_file():
                    archive.write(path, prefix + path.relative_to(directory).as_posix())
        os.replace(candidate, destination)
        print(f"Created: {destination} ({destination.stat().st_size / 1024 / 1024:.2f} MiB)",
              flush=True)
    finally:
        candidate.unlink(missing_ok=True)


def package():
    if sys.platform != "linux" or len(sys.argv) != 1:
        raise RuntimeError("Run package-windows-cross.py on Linux without arguments.")
    # Reuse the existing Windows package's explicit runtime manifest.
    script = (ROOT / "tools/package-windows.ps1").read_text(encoding="utf-8-sig")
    manifest = re.search(r"foreach \(\$name in @\((.*?)\n    \)\)", script, re.S)
    if manifest is None:
        raise RuntimeError("Windows runtime manifest was not found in package-windows.ps1.")
    runtime_files = re.findall(r"'([^']+)'", manifest.group(1))
    spec = importlib.util.spec_from_file_location("package_notices", ROOT / "tools/package-linux.py")
    notices_module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(notices_module)
    item = json.loads((WORKSHOP / "published-item.json").read_text(encoding="utf-8-sig"))
    item_id = str(item["publishedfileid"])
    if not item_id.isdecimal():
        raise RuntimeError("Saved Workshop item ID is invalid.")
    with tempfile.TemporaryDirectory(prefix="package-windows-", suffix=".tmp", dir=WORKSHOP) as tmp:
        staging = Path(tmp)
        runtime = staging / "runtime"
        runtime.mkdir()

        def copy(source, relative):
            target = runtime / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source, target)
            return target

        copy(BOOTSTRAP, "dfhooks.dll")
        (runtime / "dfhooks_dfcn.ini").write_text("dfcn/dfhooks_dfcn.dll\n", encoding="utf-8")
        for source, destination in (
            ("LICENSE", "dfcn/LICENSE"),
            ("docs/install-windows.zh-CN.txt", "INSTALL.txt"),
            ("workshop/content/CHANGELOG.txt", "CHANGELOG.txt"),
            ("docs/translation-extensions.zh-CN.md", "dfcn/docs/translation-extensions.zh-CN.md"),
        ):
            copy(ROOT / source, destination)
        for relative in runtime_files:
            source = (ROOT / "build/windows-x64" / relative if relative.endswith(".dll")
                      else ROOT / relative)
            target = copy(source, "dfcn/" + relative)
            if relative.endswith(".dll"):
                subprocess.run([str(STRIP), "--strip-unneeded", str(target)], check=True)
        for directory, pattern in (("data/runtime/rulesets", "*.toml"),
                                   ("data/runtime/opencc", "*")):
            for source in sorted((ROOT / directory).rglob(pattern)):
                if source.is_file():
                    copy(source, "dfcn/" + source.relative_to(ROOT).as_posix())
        for name in ("font.ttf", "font.otf", "font.ttc"):
            source = ROOT / "data/runtime" / name
            if source.is_file():
                copy(source, "dfcn/data/runtime/" + name)
                license_path = ROOT / "data/runtime/font.LICENSE.txt"
                if license_path.is_file():
                    copy(license_path, "dfcn/data/runtime/font.LICENSE.txt")
                break
        for name in ("dfhack-help.LICENSE", "lua-output.LICENSE", "pinyin-data/LICENSE"):
            copy(ROOT / "third_party" / name, "dfcn/data/runtime/" + name)
        copy(ROOT / "compat/hde64/LICENSE.txt", "dfcn/data/runtime/hde64.LICENSE.txt")
        (runtime / "dfcn/THIRD_PARTY_NOTICES.md").write_text(notices_module.notices(),
                                                           encoding="utf-8")
        write_archive(runtime, ROOT / "DFCN-Windows-x64-minimal.zip")

        payload = staging / "content"
        payload.mkdir()
        for name in ("info.txt", "INSTALL.txt", "CHANGELOG.txt", "install.bat"):
            shutil.copyfile(WORKSHOP / "content" / name, payload / name)
        shutil.move(runtime, payload / "DFCN")
        (payload / "DFCN/dfhooks_dfcn.ini").write_text(
            f"../../workshop/content/975370/{item_id}/DFCN/dfcn/dfhooks_dfcn.dll\n",
            encoding="utf-8")
        shutil.copyfile(payload / "INSTALL.txt", payload / "DFCN/INSTALL.txt")
        write_archive(payload, ROOT / "DFCN-Windows-workshop.zip")
        previous = staging / "previous-content"
        os.replace(WORKSHOP / "content", previous)
        try:
            os.replace(payload, WORKSHOP / "content")
        except OSError:
            os.replace(previous, WORKSHOP / "content")
            raise

    for directory in sorted(WORKSHOP.iterdir()):
        metadata = directory / "publish.json"
        content = directory / "content"
        if not metadata.is_file() or not (content / "dfcn-extension.toml").is_file():
            continue
        publish = json.loads(metadata.read_text(encoding="utf-8-sig"))
        if publish.get("visibility") != 0:
            continue
        identities = re.findall(r"(?m)^\s*\[ID:([A-Za-z0-9_-]+)\]\s*$",
                                (content / "info.txt").read_text(encoding="utf-8-sig"))
        if len(identities) != 1:
            raise RuntimeError(f"Public extension must have one mod ID: {content}")
        write_archive(content, directory / f"{identities[0]}.zip", identities[0] + "/")


if __name__ == "__main__":
    try:
        package()
    except (OSError, RuntimeError, subprocess.CalledProcessError) as error:
        print(f"Packaging failed: {error}", file=sys.stderr)
        raise SystemExit(1)
