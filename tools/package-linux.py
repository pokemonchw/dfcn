"""Package the existing Linux runtime without building or deploying code."""

from pathlib import Path
import os
import subprocess
import sys
import tempfile
import zipfile


ROOT = Path(__file__).resolve().parents[1]
RUNTIME_FILES = (
    "libdfcn_core.so", "libdfhooks.so", "LICENSE", "data/runtime/config.ini",
    "data/runtime/native-addresses/elf-seed.bin",
    "data/runtime/translations.tsv", "data/runtime/name-editor.tsv",
    "data/runtime/instrument-translations.tsv", "data/runtime/adventure-target-translations.tsv",
    "data/runtime/adventure-crafting-translations.tsv",
    "data/runtime/procedural-terms.tsv", "data/runtime/procedural-word-senses.tsv",
    "data/runtime/dfhack-help-translations.tsv", "data/runtime/dfhack-help-overrides.tsv",
    "data/runtime/dfhack-help-command-overrides.tsv", "data/runtime/dfhack-output-core.tsv",
    "data/runtime/dfhack-output-translations.tsv", "data/runtime/dfhack-output-stonesense.tsv",
    "data/runtime/dfhack-overlay-plugin-controls.tsv", "data/runtime/dfhack-overlay-script-controls.tsv",
    "data/runtime/civilization-name-terms.tsv",
    "data/runtime/site-name-decisions.tsv", "data/runtime/site-name-imagery.tsv",
    "data/runtime/site-government-parent-suffixes.tsv",
    "data/runtime/site-government-name-terms.tsv",
    "data/runtime/site-government-independent-suffixes.tsv",
    "data/runtime/character-name-lexicon.tsv", "data/runtime/character-name-overrides.tsv",
    "data/runtime/character-surname-lexicon.tsv",
    "data/runtime/character-surname-classes.tsv",
    "data/runtime/character-surname-constructions.tsv",
    "data/runtime/character-surname-context-imagery.tsv",
    "data/runtime/english-pronunciation/britfone.csv",
    "data/runtime/english-pronunciation/britfone.LICENSE",
    "data/runtime/english-pronunciation/britfone.README",
    "data/runtime/english-pronunciation/mfa-english-uk.dict",
    "data/runtime/english-pronunciation/mfa-english-uk-g2p.fst",
    "data/runtime/english-pronunciation/mfa-english-uk-g2p-graphemes.sym",
    "data/runtime/english-pronunciation/mfa-english-uk-g2p-phones.sym",
    "data/runtime/english-pronunciation/mfa-english-uk-g2p-meta.json",
    "data/runtime/english-pronunciation/MFA-LICENSE.txt",
    "data/runtime/english-pronunciation/SOURCE",
    "data/runtime/pinyin-data/pinyin.txt", "data/runtime/pinyin-data/SOURCE",
    "data/runtime/phrase-pinyin-data/large_pinyin.txt",
    "data/runtime/phrase-pinyin-data/LICENSE", "data/runtime/phrase-pinyin-data/SOURCE",
)
LICENSE_FILES = (
    "data/upstream/licenses/dfi18n-data.LICENSE.md", "data/upstream/licenses/dfzh-data.LICENSE.md",
    "third_party/dfzh-rules-engine.LICENSE", "third_party/tomlplusplus/LICENSE",
    "third_party/dfhooks.LICENSE", "data/upstream/licenses/ECDICT.LICENSE",
    "third_party/dfhack-help.LICENSE", "third_party/lua-output.LICENSE",
    "third_party/pinyin-data/LICENSE", "data/runtime/phrase-pinyin-data/LICENSE",
    "data/runtime/english-pronunciation/britfone.LICENSE",
    "data/runtime/english-pronunciation/MFA-LICENSE.txt",
)
INSTALLATION = """DFCN Linux x64 / Dwarf Fortress 53.16

此包同时提供 Steam 版与官网免费版的地址绑定，由核心自动选择。
未知版本自动扫描原生 ELF 地址，完整解析后缓存；ABI 不兼容时保留失败原因。
将 libdfhooks.so 和整个 dfcn 文件夹解压到包含 dwarfort 的游戏根目录。
保留游戏原有文件、RAW、存档和设置。无需 DFHack。

这是使用维护者当前 Linux 原生环境构建的运行包，依赖系统的 SDL2、
FreeType、Fontconfig、C++ 运行库及 glibc；不包含这些系统依赖。
未内置字体时，Fontconfig 选择系统已安装的中文无衬线字体。
汉化配置位于 dfcn/data/runtime/config.ini。
运行包不包含游戏程序、源码、本机路径配置或生成工具。
"""


def notices() -> str:
    parts = ["# Minimal runtime: third-party attribution and licenses\n",
             (ROOT / "THIRD_PARTY_NOTICES.md").read_text(encoding="utf-8")]
    for relative in LICENSE_FILES:
        parts.extend([f"\n## {relative}\n", (ROOT / relative).read_text(encoding="utf-8")])
    parts.append("\n## data/upstream/objects.zh-Hans.po translator credits\n")
    with (ROOT / "data/upstream/objects.zh-Hans.po").open(encoding="utf-8") as source:
        for line in source:
            if not line.startswith("#"):
                break
            parts.append(line.rstrip("\n"))
    return "\n".join(parts)


def package() -> None:
    if sys.platform != "linux" or len(sys.argv) != 1:
        raise RuntimeError("Use package-linux.sh on Linux without arguments.")
    strip_tool = Path("/usr/bin/strip")
    if not strip_tool.is_file():
        raise RuntimeError(f"Required native Linux strip tool is missing: {strip_tool}")
    output = ROOT / "DFCN-Linux-x64-minimal.zip"
    descriptor, name = tempfile.mkstemp(prefix="DFCN-Linux-x64-minimal.", suffix=".tmp", dir=ROOT)
    os.close(descriptor)
    candidate = Path(name)
    try:
        with tempfile.TemporaryDirectory(prefix="DFCN-Linux-libraries.", suffix=".tmp", dir=ROOT) as directory, \
                zipfile.ZipFile(candidate, "w", compression=zipfile.ZIP_DEFLATED, compresslevel=9) as archive:
            libraries = {}
            for name in ("libdfcn_core.so", "libdfhooks.so"):
                stripped = Path(directory) / name
                result = subprocess.run([str(strip_tool), "--strip-unneeded", "-o", str(stripped),
                                         str(ROOT / name)], capture_output=True, text=True)
                if result.returncode:
                    raise RuntimeError(f"Linux library stripping failed ({result.returncode}): "
                                       f"{ROOT / name}: {result.stderr.strip()}")
                libraries[name] = stripped
            archive.write(libraries["libdfhooks.so"], "libdfhooks.so")
            for relative in RUNTIME_FILES:
                archive.write(libraries.get(relative, ROOT / relative), "dfcn/" + relative)
            for source in sorted((ROOT / "data/runtime/rulesets").rglob("*.toml")):
                archive.write(source, "dfcn/" + source.relative_to(ROOT).as_posix())
            for name in ("font.ttf", "font.otf", "font.ttc"):
                source = ROOT / "data/runtime" / name
                if source.is_file():
                    archive.write(source, "dfcn/data/runtime/" + name)
                    break
            for name in ("dfhack-help.LICENSE", "lua-output.LICENSE", "pinyin-data/LICENSE"):
                archive.write(ROOT / "third_party" / name, "dfcn/data/runtime/" + name)
            archive.writestr("dfcn/THIRD_PARTY_NOTICES.md", notices())
            archive.writestr("INSTALL.txt", INSTALLATION)
            archive.write(ROOT / "workshop/content/CHANGELOG.txt", "CHANGELOG.txt")
            archive.write(ROOT / "docs/translation-extensions.zh-CN.md",
                          "dfcn/docs/translation-extensions.zh-CN.md")
        os.replace(candidate, output)
        print(f"Created: {output}\nSize: {output.stat().st_size / 1024 / 1024:.2f} MiB", flush=True)
    finally:
        candidate.unlink(missing_ok=True)


if __name__ == "__main__":
    try:
        package()
    except (OSError, RuntimeError, zipfile.BadZipFile) as error:
        print(f"Packaging failed: {error}", file=sys.stderr)
        raise SystemExit(1)
