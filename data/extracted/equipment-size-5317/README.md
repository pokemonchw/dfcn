# Dwarf Fortress 53.17 的装备尺码

原版人类和大象人不能互穿衣甲。人类的成年基准体积是 70,000 cm³，大象人是 2,535,000 cm³。两者可以共用盾牌，也可以使用同一把达到体型要求的武器。

资料取自 Steam Windows x64 版 `Dwarf Fortress.exe`，SHA-256 为 `3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16`。以下函数入口以 RVA 表示，首选映像基址为 `0x140000000`。C 文件保留 Ghidra 12.1.2 的反编译输出，汇编采用 Intel 语法。结论来自静态分析和原版定义，未在游戏中实际穿戴。

## 衣甲如何判定合身

游戏从物品的 `getMakerRace()` 读取装备所用尺码的种族。工坊可以在订单中指定这个种族。函数 `0x1379760` 将物品类型、子类型、尺码种族和穿戴者种族传给 `0x13797D0`。后者分别读取两种生物定义的 `creature_raw.adultsize`（偏移 `0x144`）。同种族的儿童和成年人在这一步使用相同的尺码。[取参汇编](item_race_args.asm) · [取参反编译](item_race_args.c) · [Wiki 衣物尺码](https://dwarffortresswiki.org/Clothing#Size)

这条规则适用于上身衣甲（物品类型 25）、鞋靴（26）、头部装备（28）、手套（29）和腿部装备（60）。设 `S` 为该装备尺码种族的成年体积，`W` 为穿戴者种族的成年体积。对原版的这些正整数，程序先将两个边界分别向下取整。

| 穿戴者体积 | 返回值 | 相对穿戴者的尺码 |
| --- | ---: | --- |
| `W ≤ ⌊6S/7⌋` | 2 | 装备过大，名称可带 `large` |
| `⌊6S/7⌋ < W < ⌊8S/7⌋` | 0 | 尺码合适，无尺码前缀 |
| `W ≥ ⌊8S/7⌋` | 1 | 装备过小，名称可带 `small` |

Ghidra 将返回类型推断为 `bool`。汇编中可见返回值 2，物品名称的调用方也分别处理 1 和 2。穿戴候选筛选使用穿戴者的种族，名称前缀使用界面参照的种族，因此要塞里显示的前缀需要结合实际穿戴者来读。盾牌和小圆盾同属物品类型 27，在此分派表中直接返回 0。[尺码反编译](size_compare.c) · [边界指令](size_compare.asm) · [调用点、分派表与名称前缀](call-sites.asm) · [Wiki 护甲与种族](https://dwarffortresswiki.org/index.php/Armor#Race)

### 原版种族举例

右列是**穿戴者种族的成年体积**，单位为 cm³，表内端点均可穿戴。

| 装备的尺码种族 | 尺码基准 | 能穿它的种族体积范围 |
| --- | ---: | ---: |
| 狗头人（Kobold） | 20,000 | 17,143–22,856 |
| 矮人、精灵、哥布林 | 60,000 | 51,429–68,570 |
| 美洲狮人、鬣狗人 | 65,000 | 55,715–74,284 |
| 人类 | 70,000 | 60,001–79,999 |
| 巨魔 | 250,000 | 214,286–285,713 |
| 大象人 | 2,535,000 | 2,172,858–2,897,141 |

矮人比人类护甲允许的最小体积小 1 cm³。按鬣狗人或美洲狮人打造的同一件胸甲，矮人和人类都能穿。大象人继承普通大象的生物定义，再由 `ANIMAL_PERSON` 变体应用 `GRAVITATE_BODY_SIZE:70000`。成年基准因而是 `(5,000,000 + 70,000) / 2 = 2,535,000`。[Wiki 大象人](https://dwarffortresswiki.org/index.php/Elephant_man) · [Wiki 动物人](https://www.dwarffortresswiki.org/index.php/Animal_people)

原版定义位于游戏的 `data/vanilla/vanilla_creatures/objects/`。常见种族见 `creature_standard.txt`，大象和大象人见 `creature_large_tropical.txt`，动物人变体见 `c_variation_default.txt`。美洲狮和鬣狗分别见 `creature_large_temperate.txt` 和 `creature_tropical_new.txt`。

## 武器与护甲自身体积

武器（物品类型 24）在尺码函数中按子类型读取 `MINIMUM_SIZE`。此处分支以使用者种族的成年基准体积比较，小于该值才判为过大。握持方式另由 `0xFE8C0` 处理，调用者传入单位自身的 `body.size_info.size_base`（偏移 `0x6B0`）。该值**等于或低于**武器的 `TWO_HANDED` 阈值时，双手判定成立。[武器尺码分支](size_compare.c) · [握持调用点](call-sites.asm) · [握持反编译](two_handed.c) · [握持指令](two_handed.asm)

原版 `data/vanilla/vanilla_items/objects/item_weapon.txt` 中，双手剑的 `SIZE` 是 900 cm³，最低使用体型是 62,500 cm³，双手阈值是 77,500 cm³。以个体基础体积恰好等于种族成年基准为例，人类会触发双手判定，大象人可以单手使用同一把剑。[Wiki 武器字段](https://dwarffortresswiki.org/index.php/Weapon_token)

上身护甲另有基础体积函数 `0xCD63F0`。它按覆盖部位从尺码种族的身体数据中取值，再按物品的覆盖率 `COVERAGE` 和层厚 `LAYER_SIZE` 两次乘百分比并取整，结果至少为 1。前表的 70,000 和 2,535,000 都是穿戴者参照体积，胸甲本身的体积由这个函数计算。[上身护甲体积反编译](torso_volume.c) · [对应汇编](torso_volume.asm)
