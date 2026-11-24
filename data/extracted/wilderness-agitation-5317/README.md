# Dwarf Fortress 53.17 蛮荒之地的地表动物暴动

要塞在蛮荒地区伐木、捕鱼会累积地表激怒值。游戏在生成一群野生动物时掷一次骰，再把结果用于这群中符合条件的个体。激怒值可以累积多年，所以即使刚消灭上一群，下一群仍可能以相近的概率暴动。[入场判定](wildlife.c#L1724) · [个体标志写入](wildlife.c#L1839) · [英文 Wiki 的动物骚动条目](https://www.dwarffortresswiki.org/index.php/Creature#Agitation)

## 计数、入场与衰减

| 环节 | 53.17 原版行为 | 反编译位置 |
| --- | --- | --- |
| 地表伐木 | 每伐倒一棵树加 100，以树为单位。地表计数最高 100,000。 | [tree.c](tree.c#L325) |
| 地表捕鱼 | 每次走到捕鱼结算分支加 1，最高 100,000。加点发生在检查可捕对象列表是否为空之前，空手也可能加点。 | [fish.c](fish.c#L214) |
| 地下洞穴 | 伐木或捕鱼的位置若归属洞穴层，相应增量写入该层自己的计数器。 | [伐木分支](tree.c#L341) · [捕鱼分支](fish.c#L222) |
| 年度衰减 | 每年从地表计数里扣除难度预设的衰减值，最低到 0。 | [calendar.c](calendar.c#L439) |

生成动物时，游戏用要塞站点的世界坐标读取区域格的蛮荒度。数值至少为 **66** 才进入暴动判定。善良、中立、邪恶阵营都可以达到这一档，分别对应 Joyous Wilds、Untamed Wilds 和 Terrifying。[区域字段定义](../../upstream/df-structures/df.region.xml) · [英文 Wiki 的环境分类](https://dwarffortresswiki.org/index.php/Surroundings#Savage)

游戏从 0 到「荒野敏感度」抽一个整数（含两端）。当 **地表激怒值 > 荒野激怒值下限 + 随机数** 时，这一群通过判定。随后游戏在创建个体的循环里检查入场类别和种群来源，给符合条件的个体写入 `agitated_wilderness_creature` 标志。因而概率指的是下一群符合条件的动物入场时暴动的概率。[掷骰与比较](wildlife.c#L1724) · [标志位定义](../../upstream/df-structures/df.unit.xml) · [原始指令摘录](mechanics-excerpts.asm)

## 原版难度举例

下表假设从零开始，只在地表砍树，期间没有跨年。[普通与困难的预设数值](difficulty.c#L59)

| 敌人难度 | 激怒值下限 | 敏感度 | 每年衰减 | 下一群符合条件的地表动物 |
| --- | ---: | ---: | ---: | --- |
| 普通 | 2,000 | 10,000 | 500 | 20 棵时概率为零，21 棵约 1%，70 棵约 50%，121 棵必定暴动。 |
| 困难 | 0 | 10,000 | 100 | 1 棵约 1%，50 棵约 50%，101 棵必定暴动。 |

普通难度下砍完 70 棵树，地表激怒值为 7,000。此后若没有新增激怒值，经过 10 次年度衰减才会降回 2,000。DFHack 的 `agitation-rebalance` 启用地表功能时，会在暴动动物入场后主动将计数降回下限。[DFHack 对原版机制的说明](https://docs.dfhack.org/en/latest/docs/tools/agitation-rebalance.html#how-the-df-agitation-system-works) · [模组对地表计数的改动](https://docs.dfhack.org/en/latest/docs/tools/agitation-rebalance.html#what-does-this-mod-do)

## 映像与地址

资料来自 Steam Windows x64 版 `Dwarf Fortress.exe` 53.17，SHA-256 为 `3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16`。以下地址均为 VA，映像基址为 `0x140000000`。五份 C 文件为 Ghidra 12.1.2 的静态反编译输出，函数按用途命名，变量名与类型由工具推断。原始指令采用 Intel 语法。本次研究未在存档中实测。

| 函数 | 入口 VA | 关键指令 VA |
| --- | --- | --- |
| 动物入场 | `0x140aba230` | `0x140abcb9d` 判断蛮荒度，`0x140abcc06` 比较激怒值，`0x140abcf0a` 写入个体标志 |
| 伐木结算 | `0x140de4e20` | `0x140de57c3` 地表激怒值加 100 |
| 捕鱼结算 | `0x14135bec0` | `0x14135c3d4` 地表激怒值加 1 |
| 年度更新 | `0x141463030` | `0x1414643f5` 扣除地表年度衰减值 |
| 敌人难度预设 | `0x141089560` | `0x1410895a3` 与 `0x141089703` 分别开始写入困难与普通的荒野参数 |

`0x1423b38b4` 是地表激怒值。`0x1423bc4f4`、`0x1423bc4f8` 和 `0x1423bc4fc` 依次是荒野敏感度、激怒值下限和年度衰减值。[难度字段和地表计数的结构定义](../../upstream/df-structures/df.plotinfo.xml)
