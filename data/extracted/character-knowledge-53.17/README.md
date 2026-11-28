# 53.17 人物面板「技能 → 知识」的文本来源

资料取自本机 Steam 版（`reference`）和官网版（`classic`）的 Windows x64 映像。[函数索引](sources.tsv) 按版本记录映像标识、指令范围、反汇编和 Ghidra 伪代码。两个版本的文件散列见[映像来源](../musical-form-current/pe-functions.tsv)。地址使用相对映像基址的 RVA。

| 知识记录的类型值 | 列表标题的来源 | 选中记录后的文本 |
| --- | --- | --- |
| 0–13 | 按学科与知识位生成短主题，另绘制九种学科标签之一 | 该详情分派器没有文档分支 |
| 14 | 诗歌形式的 `language_name` | 诗歌形式说明 |
| 15 | 音乐形式的 `language_name` | 音乐形式说明 |
| 16 | 舞蹈形式的 `language_name` | 舞蹈形式说明 |
| 17 | 书面作品保存的标题，空标题显示 `Untitled` | 按体裁生成作品介绍、引用和正文；所引艺术形式可有自己的说明 |

三种艺术形式都由同一个名称函数组合词项、词性、名字和昵称。作品标题从作品记录复制。列表随后调用游戏的首字母大写函数，再依栏宽截字。剩余一至三格时只保留前缀，超过三格才把末三格替换为省略号。详情直接使用原始名称。相关调用见[列表](pe-reference-knowledge-list.c)、[详情分派](pe-reference-knowledge-selection.c)和[名称生成](pe-reference-generated-form-name.c)。

音乐介绍和各段的声部说明都可能直引诗歌形式、引用该形式的一首诗，或引用书面作品的词句。乐曲结构还会再次写出曲名。舞蹈伴奏既能引用音乐形式，也能引用作品标题；剧情分支还可以引用人物和历史事件。故同一艺术标题需要在各处使用一致的译名，而人物、事件、学术主题和作品体裁仍有各自的来源。详见[音乐](pe-reference-knowledge-musical-form.c)、[舞蹈](pe-reference-knowledge-dance-form.c)和[诗歌](pe-reference-knowledge-poetic-form.c)。

[文本操作数](literals.tsv)保留每次引用的指令位置和原字符串，包括空格。同表的 `printable-store` 表示可打印的立即数写入，须结合指令判断其用途。[分支](branches.tsv)、[比较操作数](conditions.tsv)、[跳转表](switches.tsv)和[调用](calls.tsv)可按版本、函数及指令地址关联。运行时生成的标题没有固定枚举，其构造方式保留在相应函数中。

`knowledge-list` 和 `knowledge-selection` 是人物面板大函数中的指令区间。Ghidra 对共享出口和间接跳转的伪代码可能合并分支，精确范围与目标以索引、反汇编和跳转表为准。音区、音色与数词的独立文本函数另见[音乐说明的来源](../musical-form-current/source-grammar.txt)。
