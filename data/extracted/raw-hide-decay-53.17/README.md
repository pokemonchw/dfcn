# 生皮在储存区中的腐烂机制

在 Steam Windows 版《矮人要塞》53.17 中，“新鲜生皮”储存区设置决定搬运工把生皮送到哪里。生皮落地入库后仍按身体部件累计腐烂计时。要保留皮料，需要在生皮腐烂前鞣成皮革。

## 反编译依据

以下三个 C 文件由 Ghidra 12.1.4 从同一份 Windows x64 `Dwarf Fortress.exe` 导出。映像 SHA-256 为 `3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16`，首选基址为 `0x140000000`。函数名按用途命名，地址表每行依次为函数名、起始 VA、结束 VA（不含）。[函数地址表](functions.tsv)

1. 对尚未腐烂的物品，更新函数先判断物品类型能否获得储存区保护。类型符合且地格带有 `pile` 标志时，才会因位于储存区而清零计时。[腐烂更新函数](item_decay_update.c#L85-L92)
2. 生皮属于 `CORPSEPIECE`（`0x2e`）。储存区资格函数的类型跳表把它送到 `0x140c8b651`，返回假。作为对照，鲜肉 `MEAT`（`0x30`）进入 `0x140c8b6e4`，符合条件的新鲜肉可获得保护。[储存区资格函数](stockpile_preservation_eligibility.c#L66-L79)
3. 对放在地上且没有其他保护的普通生皮，更新函数递增计时，累计到 200 次腐烂更新时调用状态转换函数。身体部件进入 `case 0x2e`，首次腐烂时设置物品标志 `0x100`。[计时递增](item_decay_update.c#L127) · [阈值判断](item_decay_update.c#L194-L198) · [身体部件分支](decay_transition.c#L154-L160) · [腐烂标志写入](decay_transition.c#L389)

## 原版材料与制革配方

游戏内的 `data/vanilla/vanilla_materials/objects/material_template_default.txt` 在 `SKIN_TEMPLATE` 中声明了 `[ROTS]`，同时用 `TAN_MAT` 指定可鞣制出的皮革材料。`data/vanilla/vanilla_reactions/objects/reaction_other.txt` 中的 `TAN_A_HIDE` 要求原料满足 `[USE_BODY_COMPONENT][UNROTTEN]` 并带有 `TAN_MAT`，产物类型是 `SKIN_TANNED`。已经腐烂的生皮不能用于这项配方。

Wiki 的身体部件表将皮列为废弃物储存区接收、会腐烂、可由制革坊加工的物品。肉类产业条目也说明了及时鞣制的必要性。[身体部件表](https://dwarffortresswiki.org/index.php/Body_parts) · [肉类产业与制革](https://dwarffortresswiki.org/index.php/Meat_industry)
