# 成品菜肴的名称与食材说明（Windows 53.17）

以下 RVA 来自本机 Steam 映像 `PE:6aea05a1:02734000` 与官网映像 `PE:6aea11a5:0272d000`。两版从物品种类 `FOOD = 72` 进入同一套说明分支。

| 文本来源 | Steam RVA | 官网 RVA |
| --- | --- | --- |
| 物品详情正文 | [0xc8ccf0](../image-information-current/pe-reference-selected-item-description.c) | [0xc89b10](../image-information-current/pe-classic-selected-item-description.c) |
| 食材列表开头至循环出口 | 0xc8d569–0xc8d71c | 0xc8a389–0xc8a53c |
| 菜名，`item_foodst` 主虚表的 `+0x5e8` 方法 | [0xcba4b0](steam-meal-title.c) | [0xcb72d0](classic-meal-title.c) |
| 物品四元组的名称 | [0xa9c6b0](../image-information-current/pe-reference-item-noun.c) | [0xa99510](../image-information-current/pe-classic-item-noun.c) |
| 材料名称、前缀与物态 | [0x14eab90](../image-information-current/pe-reference-material-name.c) | [0x14e58e0](../image-information-current/pe-classic-material-name.c) |

## 菜名及首句

菜名依次写入可选的 `rotten `、第 0 项食材的名称、空格、菜肴子类型名称。食材为空时直接写菜肴名。当前安装的 `ITEM_FOOD:NAME` 有 `biscuits`、`stew`、`roast`。子类型查找失败时复制 13 个字节的 `Prepared Food`（Steam 常量 RVA `0x1721d68`，官网 `0x171cb28`）。堆叠数大于 1 且调用方要求显示数量时，在标题后写 ` [N]`。物品品质标记由外层标题格式化。

正文的普通菜肴单件用 `This is a`，品质 4 用 `an`。多件用 `This is a stack of N`，数量小于 1 的分支省略 N。品质 0 或超出 1–5 时省略修饰，其余依次为 `well-prepared`、`finely-prepared`、`superiorly prepared`、`exceptional prepared`、`masterfully prepared`。品质 5 可追加 `created by <人物>` 或 `created by an unknown artisan`。神器标志跳过普通品质和制作者后缀，走共用的 `All <工艺>ship is of the highest quality.` 分支。

## 食材列表

正文先写 `The ingredients are `，再从食材向量的最后一项写到第 0 项。记录的 `+0` 为加工方式，`+2/+4/+6/+8` 分别为物品类型、子类型、材料类型、材料索引，`+0x10` 为该项的品质。每个食材独立选择下表中的一格。

| 食材品质 | 加工方式 = 0 | 加工方式 ≠ 0 |
| --- | --- | --- |
| 0 或 1–5 以外 | `minced` | `cooked` |
| 1 | `well-minced` | `well-cooked` |
| 2 | `finely minced` | `finely cooked` |
| 3 | `superiorly minced` | `superiorly cooked` |
| 4 | `exceptionally minced` | `exceptionally cooked` |
| 5 | `masterfully minced` | `masterfully cooked` |

每格后面均写一个空格和数量为 1 的物品名。向量索引大于 1 时，名称后写 `, `。索引为 1 时写 ` and `，索引为 0 时写句点及两个空格。空向量只写列表开头，连句点也省略。汉化将每个品质修饰绑定到同一项，液态食材的 `minced` 用“搅匀”。[正文与品质译文](../../runtime/item-description-translations.tsv)

## 食材名的来源

| 原生分支 | 发出的文本 |
| --- | --- |
| 肉类 48 | 无材料时为 `meat`。有材料时依次取可选的肉类前缀、物种名和单数肉类名。未定义专用肉名时，使用材料固态名加 ` chop`。 |
| 鱼贝 49、未处理的鱼贝 50 | 类型 50 先写 `raw `。缺少物种时用 `fish`，有物种时优先取品种单数名，缺失时取物种单数名。性别值 0 写逗号、空格、CP437 0x0c（♀），值 1 写逗号、空格、0x0b（♂），其他值省略整段性别后缀。 |
| 活的小动物 51 | `live <物种名>` 或 `small live animal`。允许活体烹饪的生物由生物 RAW 标记 `COOKABLE_LIVE`。 |
| 种子 53、植物 54、植物生长物 56 | 取种子、植物或生长物的 RAW 名。相应回退包括材料名、`seeds`、`plant`、`leaf or fruit`。 |
| 酒水 69、粉末 70、奶酪 71、其他液体 73、团块 75 | 取相应物态的材料名，通用名分别为 `drink`、`powder`、`cheese`、`liquid`、`glob`。酒水、其他液体取液态名，粉末取粉态名。材料自己的 `PREFIX` 和具名来源随材料名保留。 |
| 蛋 88 | 可选的品种或物种单数名、空格和 `egg`，缺少物种时只有 `egg`。 |
| 其他记录类型 | 列表调用通用物品名称函数，直接传入记录的四元组。完整类型跳转、物品子类型和材料回退见上表的两版物品名称反编译。正文传入的数量为 1、物品标志为 0、物品实例 ID 为 −1，因此独立物品名中的数量、腐败和实例污染分支不会叠加到每项食材上。 |

两份安装中的菜肴名、肉类前缀和部位、种子与植物生长物字段逐条保留了来源文件和行号。物种、具体品种、材料状态及前缀使用项目已有的提取表。名称随存档生成的材料在运行时按同一物品与材料语法组合。[食物专用 RAW 字段](food-raw-fields.tsv) · [物种与品种名](../character-header-profession-sources.tsv) · [材料状态及前缀](../item-color-current/raw-leaves.tsv)
