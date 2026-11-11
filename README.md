# DFCN · 矮人要塞简体中文汉化

[![License: CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC_BY--NC--SA_4.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc-sa/4.0/)

DFCN 是 **Byayoi 同人社区**的《Dwarf Fortress（矮人要塞）》汉化作品，结合社区译文与本地修订，让中文玩家更方便地阅读游戏界面、人物信息、物品描述和传说故事。

社区官网：[byayoi.org](https://byayoi.org/)

项目在游戏渲染阶段捕获英文文本，通过词表与语法规则生成中文，再进行字形测量、换行和覆盖绘制，不修改游戏 RAW 或存档。提供 Windows 与 Linux 原生适配；Windows 支持 Steam 53.17 / 53.16 与官网免费版 53.16，Linux 适配 53.16。

Windows 本版的显示语言由配置中的 BCP 47 标签 `language` 控制：默认 `zh-Hans` 为简体中文，`zh-Hant` 将全部译文通过离线 OpenCC 转为台湾正体及常用词汇，也接受 `zh-CN` / `zh-TW`、`zh-Hans-CN` / `zh-Hant-TW`。自定义小队名称保持原样。配置模板位于 `data/runtime/config.ini`，已安装游戏优先读取游戏根目录的 `dfcn_config.ini`。

**Shift+F8** 在简体与台湾正体之间切换，并刷新字体与译文排版；左右 Shift 均可，长按不重复触发。语言选择在本次运行及核心重载后保留，不改写配置文件，也不改变汉化显示开关。

Linux 遇到未收录的游戏 Build ID 时，会读取当前进程的 ELF 加载地址，并使用随包发布的 `data/runtime/native-addresses/elf-seed.bin` 自动解析函数和全局对象地址。完整解析后按游戏文件及特征数据的指纹缓存结果；同一进程内重载核心沿用 Windows 的地址表复用机制，直接读取独立保留的密封字节缓存，省去游戏 ELF 文件的重复读取、哈希与解析。游戏映像、加载地址或特征数据变化时重新解析；存在歧义、缺失地址或不兼容的 ABI 时会说明具体原因并停止安装钩子。启动时无需 Python、反汇编工具或参考游戏文件，自动扫描不保证兼容任意新版本。

Linux 核心重载安装、卸载钩子时，在各自阶段内复用内存映射信息，避免每个内存页查询和跳板分配都重复扫描 `/proc/self/maps`；汉化自身的映射、权限变更同步更新这份快照，阶段结束后释放。

Windows 与 Linux 共用汉化数据载入优化：TOML 规则图按节点及引用分析循环，避免沿每条引用路径重复遍历共享词汇；发音模型一次读取并预分配弧数组；DFHack 目录先筛选相关词条再复制数据。显式重载仍重新读取配置、词表、规则和模型文件。

## Windows 安装与使用

当前运行包适用于 **Windows x64 的 Dwarf Fortress Steam 53.17 / 53.16 与官网免费版 53.16**，无需编译，也无需安装 DFHack 或其他外部 Mod。

**Steam 创意工坊：**订阅 [DFCN 汉化](https://steamcommunity.com/sharedfiles/filedetails/?id=3811193379) 并下载完成后，运行订阅目录 `你的 Steam 库目录/steamapps/workshop/content/975370/3811193379/` 中的 [`install.bat`](workshop/content/install.bat)。脚本使用 Windows 自带 PowerShell，自动查找 Steam 游戏目录，安装 `dfhooks.dll` 并生成指向订阅目录的 `dfhooks_dfcn.ini`，无需手动复制文件或编辑路径，支持跨 Steam 库和中文路径。也可单独下载该 BAT 运行，它会查找已经下载的汉化订阅内容。

脚本优先选择与订阅内容同库的游戏，无法唯一确定时显示目录供选择；官网版或未被自动找到的安装，可将游戏文件夹或 `Dwarf Fortress.exe` 拖到 BAT 上。已有引导文件被替换前会备份，旧版游戏根目录的 `dfhooks_dfcn.dll` 会改名备份以避免重复加载，`dfcn_config.ini` 保持原样。核心与词表留在完整的订阅目录，后续由 Steam 更新；移动目录后重新运行脚本即可。

汉化启动时优先读取游戏根目录的 `dfcn_config.ini`；文件不存在时，从订阅目录的 `DFCN/dfcn/data/runtime/config.ini` 复制生成，已有文件不会覆盖。订阅目录中的 `config.ini` 保留为默认模板，复制失败时作为回退配置。手动安装、路径示例与卸载方法见 [安装说明](workshop/content/INSTALL.txt)。

**GitHub Release：**从 [v53.17-20261111](https://github.com/pokemonchw/dfcn/releases/tag/v53.17-20261111) 下载 `DFCN-Windows-x64-minimal.zip`，解压后将全部内容按原有目录结构复制到游戏根目录，包括 `dfhooks.dll`、`dfhooks_dfcn.ini` 和整个 `dfcn` 文件夹。汉化设置同样使用游戏根目录的 `dfcn_config.ini`，首次启动时由 `dfcn/data/runtime/config.ini` 复制生成，已有文件不会覆盖；复制失败时读取默认模板。完整变化见 Release 更新日志。

Windows 汉化核心与翻译数据按汉化模块所在目录定位，支持将运行文件保留在工坊目录；用户配置统一使用游戏根目录的 `dfcn_config.ini`。游戏中按 **Shift+F10** 开启或关闭汉化，保留当前核心与数据；按 **Shift+F5** 关闭再开启汉化时，重新加载核心与数据。数据仅在启动、**Shift+F5** 重新开启或 **Ctrl+Shift+F10** 显式刷新时加载，不自动检查文件变化。安装仅添加汉化自身文件，不改写磁盘上的游戏本体、RAW 或存档；取消订阅不会删除已复制的入口文件和 `dfcn_config.ini`，卸载时需手动移除自己安装的汉化文件。

Windows 本版提供 **Shift+F6**：扩展默认启用，首次按下停用全部扩展 TSV 词表与 TOML 规则，立即重新载入本体汉化并开启显示；再次按下恢复扩展并重新载入汉化。左右 Shift 均可，长按不重复切换。扩展开关只影响本次运行，跨 **Shift+F5** 核心重载保留，不写入配置文件。

**Shift+F1** 打开或关闭汉化设置菜单，提供切换中英文、切换繁简体、切换四族语言音译、开关 DFHack（需已安装 DFHack）、重载汉化、导出整张地图（全部已知层）六项。切换与重载选项执行后自动关闭；导出选项显示结果、层数和文件位置。也可按 Esc、右键或点击菜单外空白处关闭；英文模式下仍可打开。四族语言默认采用中文音译，可切换为原文拼写，选择保留到本次游戏结束，并跨核心重载保留。DFHack 选项与 Shift+F11 相同，未安装或接口未就绪时不执行。重载汉化会重新载入核心与数据并开启汉化。

**地形蓝图导出**直接读取整张本地地图，不需要 DFHack。从地图原点 X=0、Y=0 开始覆盖完整宽高，遍历所有 Z 层，导出其中有已揭示地形的全部楼层，不受镜头位置、缩放或当前显示楼层影响；未揭示格子单独标记，整层未知时省略。文件为 `dfcn/blueprints/terrain-日期-时间.dfplan.json`，同名时自动追加序号，可由 `/home/lulika/workspace/byayoi/tools/dfbluepaint` 的导入功能载入。保留墙、地板、楼梯、斜坡、水、岩浆、植被等地形和原始 X/Y/Z 坐标；导出的是地形，不包含建筑、物品或单位。全部楼层存入同一个文件，使用无损连续格编码 `cellsRle` 缩减重复数据。dfbluepaint 同步支持该编码、超过 24 层及完整 int16 Z 坐标，地图宽高上限扩大为 32767 格，并兼容原有 `cells` 数组格式；文件上限为 256 MB，超出时报告失败，不裁切地图或截断楼层。

Windows 同时安装 **DFHack 53.16-r2 / r3、53.17-r1** 时，可按 **Shift+F11** 关闭 DFHack，再按一次恢复。开关独立于汉化：关闭时暂停插件更新、界面 hook、热键、命令与 Lua 定时回调，保留驻留核心、插件配置、存档数据和世界卸载清理。已打开的 DFHack 界面会关闭；已执行的游戏或存档修改不会回滚。

已支持汉化搜索的界面可使用中文、英文、拼音全拼与首字母，并提供输入容错和物品类别匹配。需要近义匹配时，可订阅[独立离线语义搜索模型](https://steamcommunity.com/sharedfiles/filedetails/?id=3823451988)。核心在启动时自动识别模型，无需联网或在世界模组列表中启用；未安装模型时，普通文字、拼音与容错搜索仍可使用。

## 骑兵模组

[骑兵 / Fortress Cavalry](https://steamcommunity.com/sharedfiles/filedetails/?id=3828843073) 是独立的创意工坊模组，适用于 Windows x64 Steam 版 Dwarf Fortress 53.16，需要 DFCN v53.16-20261028.2 或更新版本。支持坐骑分配、日常与军务骑乘、坐骑跟随、骑术成长、共同负重及飞行坐骑寻路。

订阅并下载后由 DFCN 在加载时识别，无需 DFHack 或在创建世界时启用。骑兵 DLL 仅随独立模组提供，汉化主包不包含该文件。详情见[模组说明](workshop/riding/content/INSTALL.txt)。

## Linux 安装与使用

当前本体 Steam 创意工坊项目提供 Windows x64 运行文件。Linux 使用独立的 GitHub 运行包，不使用 Windows 的 `dfhooks_dfcn.ini`。

**GitHub Release：**从 [v53.16-20261008-linux](https://github.com/pokemonchw/dfcn/releases/tag/v53.16-20261008-linux) 下载 `DFCN-Linux-x64-minimal.zip`，将全部内容按原有目录结构解压到包含 `dwarfort` 的游戏根目录，包括 `libdfhooks.so` 和完整 `dfcn` 文件夹。

上述 Linux 已发布运行包的汉化设置位于**游戏目录**的 `dfcn/data/runtime/config.ini`。更新时按原有目录结构解压完整运行包，可先保留自己修改过的配置。Linux 包同时提供 Steam 版与官网免费版的地址绑定，依赖系统的 SDL2、FreeType、Fontconfig、libstdc++ 和 glibc；这些系统库及游戏程序不包含在运行包中。系统没有可用中文字体时，需安装系统中文字体，供 Fontconfig 选择。纯汉化数据无需在创建世界时启用，也无需 DFHack。

Linux 已发布核心同样使用 **Shift+F10** 切换汉化并保留核心与数据；**Shift+F5** 关闭再开启时重新读取核心与数据；**Ctrl+Shift+F10** 显式刷新数据。卸载时移除自己安装的 `libdfhooks.so` 和 `dfcn` 汉化目录；无需删除游戏或存档。

Linux 源码已实现 **Shift+F6**、**Shift+F8** 和游戏根目录 `dfcn_config.ini` 配置，当前 Linux 发布包尚未包含这些功能及本版 Windows 的后续修复。

## Mod 汉化数据扩展

支持扩展加载的 DFCN 核心在启动或显式重新加载数据时，发现已下载的创意工坊汉化数据 mod，以及游戏 `mods`、`data/installed_mods` 中的本地数据包。纯翻译数据无需加入新建世界的 RAW 加载顺序。扩展的词表和递归规则独立载入，安装、更新或移除后在下一次加载数据时处理。

Windows 本版可用 **Shift+F6** 临时停用或恢复全部扩展数据，并立即重新载入汉化；扩展停用时继续使用本体词表和规则。当前 Linux 发布包尚未包含此快捷键。

目前公开提供 **Dwarvemon、Dwarvemon Entity Type、Dwarvemon Entity All、Dwarvemon Beta、Real Book/Scroll Content!、Mcnuggy's Mythical Beasts** 六个独立创意工坊汉化数据包；其余 17 个 Mod 汉化数据包已下架（设为私密），本地资源与源码目录保留。六个公开数据包的订阅链接见 [Mod 汉化数据扩展索引](workshop/README.local-zh-CN.md)。

使用扩展需要安装 [DFCN 汉化核心](https://steamcommunity.com/sharedfiles/filedetails/?id=3811193379)，并订阅对应的原模组和汉化数据包。DFCN 自动读取已下载的数据，无需手工复制，也无需在创建世界的模组列表中启用汉化数据包；原模组按其作者说明使用。

[Dwarvemon 简体中文汉化](https://steamcommunity.com/sharedfiles/filedetails/?id=3815355177)仅提供基础 **Dwarvemon** 的专用翻译。Entity Type、Entity All 和 Beta 各有独立汉化包，分别订阅即可。没有完整译文的 mod 名称、简介和工坊名称保留原文；用户自定义小队名称始终保持原样。

制作其他 mod 的汉化扩展时，使用同一数据声明格式即可，无需向核心添加 mod 名称或专属词条。参见 [汉化数据扩展格式](docs/translation-extensions.zh-CN.md)。

## 维护者打包

打包使用已有 Windows 编译产物和运行数据。执行根目录的 `package-workshop.cmd`，或使用 Windows PowerShell 执行 `-File tools/package-workshop.ps1`。发布汉化本体时使用 `-File tools/package-workshop.ps1 -BaseOnly`，生成本体的 Windows 整包、工坊包与独立原生模组包，跳过汉化数据扩展和语义模型。打包不编译代码，也不需要下载 Linux 运行包。

该入口先生成 `DFCN-Windows-x64-minimal.zip`，包含完整 Windows 运行文件、汉化数据与许可说明。在临时副本上使用固定 Windows 工具链的 `strip.exe --strip-unneeded` 移除核心与加载器的静态符号和调试数据，保留动态导出；本机部署 DLL 不变。

工坊入口从 `info.txt`、`INSTALL.txt`、`CHANGELOG.txt`、`install.bat` 和 Windows 运行 ZIP 重建整个 `workshop/content`，不沿用内容目录中的旧 ZIP、缓存或其他遗留文件。`DFCN/` 保持完整 Windows 运行目录，入口配置改为工坊订阅路径，并提供对应的工坊安装说明。

入口生成 `DFCN-Windows-workshop.zip`，并将 Dwarvemon、Dwarvemon Beta、Dwarvemon Entity All、Dwarvemon Entity Type、Real Book/Scroll Content!、Mcnuggy's Mythical Beasts 六个公开汉化数据扩展分别打包为各自目录中的 `<mod ID>.zip`，跳过私密包。另在 `workshop/semantic-search` 生成独立模型包 `dfcn_semantic_search.zip`。骑兵模组单独生成 `workshop/riding/dfcn-riding.zip`，不包含在汉化主包中。独立汉化扩展、语义模型与原始玩法模组不并入本体；工坊上传使用 `workshop/content`。Linux 独立运行包仍从 [v53.16-20261008-linux](https://github.com/pokemonchw/dfcn/releases/tag/v53.16-20261008-linux) 获取。

Linux 宿主打包已有的 Windows 交叉编译产物时，使用固定 Python 执行
`tools/package-windows-cross.py`。该脚本读取同一 Windows 运行文件清单，
使用已安装的 MinGW-w64 `strip` 处理临时 DLL 副本，生成完整 Windows 包、
Windows 工坊包和六个公开扩展 ZIP，不编译或生成数据。
工坊发布工具 `tools/publish-workshop.py` 支持 Linux 已安装的 Steamworks 库及现有登录会话。

当前 Windows 发布版本为 **v53.17-20261111**，变化见
[更新日志](docs/releases/v53.17-20261111.md)。

## Linux 交叉编译 Windows x64

显式构建 Windows DLL 时使用根目录 `build-windows-cross.sh`。它使用 Linux 上运行的
MinGW-w64 编译器，输出 `build/windows-x64/dfcn_core.dll`、
`build/windows-x64/dfhooks_dfcn.dll` 和独立鼠标坐标模块
`build/windows-x64/dfcn_mouse_coordinates.dll`，默认不向游戏目录部署。日常本机构建继续使用
`build-deploy.sh` / `build-deploy.ps1`。

需要同时把这些 Windows DLL 部署到当前项目根目录时，执行
`build-windows-cross.sh --deploy-project`。构建目录仍保留同一次编译的产物，
已有词表、规则和其他运行数据原地使用；此选项不会写入 Linux `.so` 或游戏引导文件。

依赖为现有 Codex Python runtime、Linux 版 MinGW-w64 POSIX 线程工具链
（固定使用 `$HOME/.local/share/dfcn-toolchains/mingw-w64-16.2.0/usr/bin/x86_64-w64-mingw32-g++`，
需包含静态 `libwinpthread.a`）和 Windows x64 SDL2 MinGW 开发包。
本机工具链由 Arch 官方 MinGW-w64 软件包安装到上述用户目录，不需要管理员权限。
`--sdl-root` 指向开发包内的 `x86_64-w64-mingw32`
目录，其中应有 `include/SDL2/SDL.h` 和 `lib/libSDL2.dll.a`；不能使用 Linux SDL2
开发库。参考 [MinGW-w64 工具链说明](https://www.mingw-w64.org/downloads/)。

```bash
/bin/bash '/home/lulika/workspace/dfcn/build-windows-cross.sh'
```

默认 SDK 为 `$HOME/.local/opt/SDL2-2.30.11/x86_64-w64-mingw32`，可用
`--sdl-root /path/to/SDL2/x86_64-w64-mingw32` 指定已安装位置。
可用 `--cross-compiler /absolute/path/to/g++`
显式指定其他已安装的 Linux MinGW-w64 POSIX 编译器，用 `--output-dir /path/to/output`
改变输出目录；相对 SDK 和输出路径按调用时的当前目录解析。脚本不会下载、安装、
扫描或自动切换工具链，缺少依赖时直接报告具体路径。

脚本固定使用 C++20、`-O2`，不添加调试信息，静态链接 GCC、C++ 和 winpthreads
运行库，SDL2 仍通过导入库动态链接；核心版本号与 PE 校验和使用现有构建逻辑。
相关链接选项见 [GCC 文档](https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html)。
两个 DLL 均编译完成后才替换输出目录中的已有产物，临时源码与候选文件在结束时清理。

交叉编译使用当前仓库已有的 `.inc`、生成头文件和 Windows 绑定，不运行数据生成器，
也不读取 Windows 游戏映像来重新提取绑定。生成文件需与当前源码配套。
输出仅包含两个 DLL，不是完整安装包；运行时仍需现有 Windows 安装的加载入口、
SDL2 与配套汉化数据。退出码 `0` 表示 DLL 编译输出完成，非零表示失败，
不代表已在 Windows 游戏内观察到运行效果。

## 技术栈

- **C++20**：原生加载器、汉化核心、文本捕获与界面排版。
- **SDL2 与字体渲染**：中文绘制；Linux 使用 FreeType / Fontconfig，Windows 使用 GDI。
- **TSV / TOML + [toml++](https://github.com/marzer/tomlplusplus)**：维护词表、配置和递归翻译规则，处理动态名称与组合句式。
- **Python**：原文提取、翻译数据整理、原生绑定生成及构建部署工具。

## 上游参考与致谢

- [DFHack / dfhooks](https://github.com/DFHack/dfhooks) 与 [df-structures](https://github.com/DFHack/df-structures)：加载入口与游戏结构定义参考。
- [DFI18n 简体中文数据](https://github.com/DFI18n/dfi18n-data-zh-hans) 与 [dfint 翻译数据](https://github.com/dfint/translations-backup)：基础译文及生物、动植物等文本。
- [dfzh](https://github.com/wodzys/dwarf-fortress-chinese)：词表、TOML 规则及递归翻译引擎。
- [ECDICT](https://github.com/skywind3000/ECDICT)：程序生成词汇的英汉释义参考。

感谢矮人要塞中文维基翻译组及各上游项目的贡献者。第三方代码与数据遵循各自许可，翻译数据署名及许可详情见 [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)。

## Codex 的贡献

本项目使用 **OpenAI Codex** 协助开发与维护，参与代码编写、跨平台适配、翻译规则整理、中文渲染与排版修复，以及构建部署工具和文档编写；开发工作结合社区译文、维护者需求与玩家反馈持续推进。

## 许可

本项目原创内容采用 [CC BY-NC-SA 4.0（署名—非商业性使用—相同方式共享）](https://creativecommons.org/licenses/by-nc-sa/4.0/)，完整条款见 [LICENSE](LICENSE)。使用时须保留署名、遵守非商业限制，分享改编成果时采用相同许可。

第三方代码、译文及其他上游资源保留各自许可与署名，详见 [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md) 及对应许可文件。

更多技术与使用说明见 [README.zh-CN.md](README.zh-CN.md)。
