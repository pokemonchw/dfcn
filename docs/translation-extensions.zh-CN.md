# 汉化数据扩展

数据扩展是独立的矮人要塞 mod。DFCN 在运行时发现其声明，载入 TSV 词表和 TOML 递归规则，不执行扩展代码。翻译资源保存在数据 mod 内，不复制进本体词表，也不参与本体词表或核心的编译。

Windows [v53.16-20261009](https://github.com/pokemonchw/dfcn/releases/tag/v53.16-20261009) 提供 **Shift+F6** 扩展开关。扩展默认启用；首次按下停用全部扩展 TSV 词表和 TOML 规则，立即重新载入本体汉化并开启显示；再次按下恢复扩展并重新载入汉化。左右 Shift 均可，长按不重复切换。开关只影响本次运行，跨 **Shift+F5** 核心重载保留，不写入配置文件。Linux 源码已实现此快捷键，当前 Linux 发布包尚未包含。

## 已发布的数据包

公开提供 Dwarvemon、Dwarvemon Beta、Dwarvemon Entity All、Dwarvemon Entity Type 四个独立汉化数据包。[DFCN 本体工坊项目](https://steamcommunity.com/sharedfiles/filedetails/?id=3811193379)提供通用扩展自动加载能力。订阅对应原模组和汉化数据包后自动识别，无需手工复制数据，也无需在创建世界时启用汉化数据包。

[GitHub Release v53.16-20261010.2](https://github.com/pokemonchw/dfcn/releases/tag/v53.16-20261010.2)提供 Windows 核心运行包 `DFCN-Windows-x64-minimal.zip` 及以下四个独立数据 ZIP：

| 原模组与支持范围 | 工坊汉化数据 | 独立 ZIP |
| --- | --- | --- |
| Dwarvemon 2.22：基础宝可梦、生物、道具、材料、工坊、招式及战斗与历史文本 | [订阅](https://steamcommunity.com/sharedfiles/filedetails/?id=3815355177) | [dfcn_dwarvemon_zh_hans.zip](https://github.com/pokemonchw/dfcn/releases/download/v53.16-20261010.2/dfcn_dwarvemon_zh_hans.zip) |
| Dwarvemon Beta 2.22：Beta 与随包的 PMD、TCG、MissingNo 等可选模块 | [订阅](https://steamcommunity.com/sharedfiles/filedetails/?id=3815791420) | [dfcn_dwarvemon_beta_zh_hans.zip](https://github.com/pokemonchw/dfcn/releases/download/v53.16-20261010.2/dfcn_dwarvemon_beta_zh_hans.zip) |
| Dwarvemon Entity All 2.22：模组名称与文明配置简介；生物和物品译文需配合 Dwarvemon 汉化数据 | [订阅](https://steamcommunity.com/sharedfiles/filedetails/?id=3815791319) | [dfcn_dwarvemon_entity_all_zh_hans.zip](https://github.com/pokemonchw/dfcn/releases/download/v53.16-20261010.2/dfcn_dwarvemon_entity_all_zh_hans.zip) |
| Dwarvemon Entity Type 2.22：模组名称与文明配置简介；生物和物品译文需配合 Dwarvemon 汉化数据 | [订阅](https://steamcommunity.com/sharedfiles/filedetails/?id=3815791235) | [dfcn_dwarvemon_entity_type_zh_hans.zip](https://github.com/pokemonchw/dfcn/releases/download/v53.16-20261010.2/dfcn_dwarvemon_entity_type_zh_hans.zip) |

独立 ZIP 中的整个 mod 文件夹解压至游戏 `mods` 目录即可，各包分别安装。基础 Dwarvemon 与 Beta 使用各自的专用汉化数据，Entity All、Entity Type 也分别提供独立包。其余 18 个汉化数据包保持私密，不在本次 Release 中提供。更新或移除数据后，核心在下次启动或显式重新加载数据时识别相应变化；没有完整译文的 mod 名称、简介和工坊名称保留原文，用户自定义小队名称保持原样。

## 数据声明与规则

包的根目录放置标准 `info.txt`，使用独立、稳定的 `[ID:...]` 和递增的 `[NUMERIC_VERSION:...]`。纯翻译包无需修改 RAW，无需在新建世界时启用。

同一目录下的 `dfcn-extension.toml` 声明：

```toml
schema = 1
id = "my-mod-zh-hans"
version = 1
language = "zh-Hans"
name = "某个 Mod 的汉化数据"
translations = "dfcn/translations.tsv"
rulesets = "dfcn/rulesets/zh-Hans"
```

资源路径相对数据包根目录，必须留在本包内。`translations` 指向运行时格式的 UTF-8 TSV，列为原文、中文译文、匹配标记。规则标记与本体 `translations.tsv` 一致；完整简介使用 `lP`，名称或专用完整字段使用 `l`，公告使用已有 `Announcement combat ...` 专用键。动物偏好理由使用 `Preference reason: 原文` 专用键，使译文不依赖本体编译词库。

`rulesets` 指向 TOML 根目录，文件的相对路径必须与 `base` 命名空间一致。例如 `creatures/name/my_mod.toml` 使用 `base = "creatures::name::my_mod"`。扩展不能定义根命名空间；可用相同相对路径的片段向已有命名空间添加规则。片段只包含扩展的新增或覆盖规则，保留本体语法，并可引用本包的其他命名空间。

本体先载入，扩展按稳定的 `id` 顺序合并；后序扩展覆盖同原文、同语义域的译文。规则片段的完整字面词条优先。相同扩展 `id` 的多份安装按 `info.txt` 数字版本选择，同版本优先本地安装副本。更新数据时同步提高数字版本，避免旧本地副本遮盖新的订阅版本。

启动或显式重新载入数据时，核心重新读取扩展列表、声明和数据文件，重新构建词表及规则图，不自动检查文件变化。停用或移除扩展后重新使用本体数据；没有完整译文的 mod 名称、简介和工坊名称保留原文。用户自定义的小队名称始终保持原样。

维护者将数据包放在 `workshop/<包目录>/content`，使用 `package-workshop.cmd` 打包公开扩展；入口按 `publish.json` 的公开状态选择数据包，以 `info.txt` 中的 mod ID 命名 ZIP，根目录保留同名 mod 文件夹与其完整资源。仅修改汉化数据无需编译或运行生成器。本地安装与 Steam 上传分别处理；发布身份文件按各包的发布配置目录保存，不共用本体的 Workshop ID。

## DFHack 界面与动态正文

扩展 TSV 可以直接使用本体既有的 `DFHack GUI ...`、`DFHack output: ...`、`DFHack help: ...`、日期和死因专用键。核心在资源更新时将这些记录加入对应的界面及输出词表；扩展移除后也会移除其记录，不需要将它们复制进本体的专用 TSV。

完整的 `WrappedLabel` 正文使用显式声明，例如以下记录的三列用制表符分隔：

```text
DFHack GUI Extension prose: focus:codex-narrator||content	::subscribed_books	l
```

`focus:...` 是实际父 Screen 的 `focus_path`，`content` 是正文控件的 `view_id`。也可以用固定父 Window 的完整 `frame_title` 代替 `focus:...`。核心只处理声明指定的真实控件，读取其已经生成的完整 `text_to_wrap`、原生行缓存及裁剪区域，不调用扩展 Lua。包含书名的可变窗口标题使用固定 focus 声明。

正文 TOML 用作者的完整句式定义中文词序，普通规则引用翻译固定词池。真实人物和地点与作者生成的角色称号、缺省名称混合时，可以使用具名捕获：`{@bt_person|::my_mod::vocabulary::person}`。捕获值在指定词池有完整译文时使用译文，其他值原样保留。源句和译句中的完整捕获标识必须一致。`@bt_` 捕获允许后续分隔词的最多 64 个候选位置，以容纳多个单词组成的真实名称；普通 `@` 捕获仍使用首个分隔位置。视角、文体等有限标签直接引用词池，避免句尾的开放捕获把后续正文识别成标签。

正文书名字段可以声明 `{@bt_title|::text::book}`，沿用本体书名翻译并保留无法识别的标题。

规则中真正显示的花括号写成 `{{` 和 `}}`。例如原 Mod 遗留在正文中的字面 `{b_race}` 写为 `{{b_race}}`，不会误当成词池引用。长文先按完整段落或诗节处理，未识别段落再按完整句子处理已知内容并保留未知句；数据作者仍应翻译当前原 Mod 的全部作者文本和动态词池。

作者的程序可能在已写好的段落中插入衔接词或重复词。数据可以声明 `DFHack GUI Extension prose normalize: <相同控件键>|01`，译文列为正则表达式、转义制表符 `\t`、替换文本，支持 `$1` 等捕获组；序号决定应用顺序。核心先解析原文，仅在原文失配时应用这些数据声明，并将译文位置映射回原始正文；保留的身份文本从原始正文恢复，避免规范形改写真实名称。源规则需要保留原作者句式及对应的规范形变体。该处理仅作用于声明的正文控件，不进入全局名称或小队别名逻辑。
