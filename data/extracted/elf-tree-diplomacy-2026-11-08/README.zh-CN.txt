精灵伐木协定、外交关系与战争：离线反编译资料
日期：2026-11-08

正文：../../../docs/elf-tree-diplomacy-research-2026-11-08.zh-CN.txt
本目录是该研究引用的函数原始材料；不是游戏源代码，也不是运行测试结果。

一、来源与版本

对象：本机 Steam Windows x64 Dwarf Fortress 53.16。
来源文件：D:\program\steam\steamapps\common\Dwarf Fortress\Dwarf Fortress.exe
PE 标识：PE:6a70a6d9:02711000；ImageBase：0x140000000。
文件大小：26,507,264 字节。
SHA-256：205770918fd54c96cbbcf89223ebd449e2e113c7c873ed81177c4511a3450db7。
以上身份信息同时保存在 image-identity.tsv；不包含游戏可执行文件。

工具：Ghidra 12.1.4、固定 w64devkit 2.9.1 中的 objdump，
以及仓库既有 tools/native_caption_image.py、
tools/extract_adventure_conversation_events.py 的只读 PE/展开表读取接口。
Ghidra 采用独立临时导入、-noanalysis、-readOnly，按函数区间反汇编并反编译。
没有启动游戏、读取进程或运行日志、操作窗口，也没有修改或部署游戏文件。

二、目录与阅读顺序

functions.tsv：所有归档函数的文件前缀、绝对虚拟地址起点、排他终点及用途。
events/：接受、拒绝、结算事件的 diplomacy_value / attack_desire / trade_desire，
        以及事件加入双方历史记录的函数。
        vtable-slots.tsv 保留当前 PE 中三个虚表的 64 位指针槽读取结果。
quota/：旧配额结算及树木移除时扣减额度。
fortress/：和平状态下的进攻资格、历史进攻欲望及赠礼抵消、10/30 门槛、
          外交事件调度、入侵军队构建、会谈主题与消息传播辅助函数。
world/：世界外交历史与通用评价、贸易欲望、战争关系写入，
       以及人格随机掷骰和盟友力量辅助函数。
scripts/：研究时使用的 Ghidra 导出脚本及当时的函数清单快照。

.c 是实际 Ghidra 反编译输出，未改写为手工伪代码。
.asm 是从对应磁盘映像提取的 x64 指令文本，包含地址，省略机器码字节。
world/personality_roll.asm 与 world/allied_strength.asm 只归档反汇编，未生成 .c。
说明名和脚本添加的函数名属于研究命名；原始程序缺少这些公开符号。
字段、枚举和虚表方法的解释对照仓库 data/upstream/df-structures/ 下的 XML；
解释仍需与本机指令相互核对，不能单凭结构名称断定行为。
虚表地址同时对应 df-structures/symbols.xml 的 53.16 Steam 段；
df.history_event.xml 中 history_event 的前三个计分虚方法提供槽位语义。
concluded 的外交与贸易槽指向同一个函数，故归档名为 concluded_diplomacy_trade。

三、反编译输出的限制

参数和返回类型部分由 Ghidra 推断，部分小型事件方法设置了已由汇编确认的 int
返回类型。未为全部被调用函数恢复完整原型；因此 .c 的类型、参数数量、局部变量
名、DAT_/FUN_/supplier_ 名称不能视为原始源代码声明。
条件和整数舍入以 .asm 为准，尤其是负数算术右移、年度外交汇总跳过年龄 1/2
年的分支，以及世界 AI 中的多次独立人格随机数。

fortress/140e5d220.c 的末段包含 Ghidra 跟随尾跳得到的 140e5f890 内容；
140e5d220.asm 仅保留清单区间，尾跳目标另存为 140e5f890.c/.asm。
大型函数有跳转表、展开表片段和大量间接调用；正文只对已沿调用与原指令定位
到的分支下结论，不宣称已经完整恢复全部外交和战争系统。

四、脚本快照与复用

scripts/events/DecompileDiplomacy.java 和 scripts/world/DecompileDiplomacy.java
分别对应两个批次，类名相同，应使用各自独立的 -scriptPath。
脚本唯一参数是输出目录；它从该目录读取 functions.tsv 和相应名字的 .asm，
建立函数边界及直接被调用函数占位，再生成 .c。两个批次的原清单保留在各自
脚本目录中；复制到临时输出目录时也需提供本目录对应 events/ 或 world/ 的 .asm。
不得把根目录的索引 functions.tsv 当作这些脚本的三列输入。

scripts/quota/ReadQuotaBreach.java 是本轮最后使用的版本，
从输出目录的 attack-functions.tsv 读取五个 fortress 函数；原清单随脚本保存。
quota/ 中两个函数使用该脚本早期的固定目标版本导出；该早期快照未保留。
若复用最终脚本导出它们，输入清单可按根索引取两个地址范围，保持两列十六进制
格式且不带表头和 0x 前缀；这不会改变已归档的原始输出。

scripts/fortress/ReadDiplomacyFlow.java 是最后使用的版本，固定导出
140acaa50 和 1413f51f0；140915f10.c 是本轮此前用同一脚本框架更换目标后导出。
其原始函数范围保留在根索引中；最终脚本快照不能直接覆盖本轮所有早期目标。

scripts/war/DecompileWarThreshold.java 及 functions.tsv 是当时四个目标的快照，
使用内置 security_check_cookie callfixup。该批中本目录只保留 fn_140976010；
另外两个外交汇总函数使用更早的 world/ 版本归档，未参与最终结论的军队辅助
大函数不归档。复用时先按需要裁减临时清单，再提供对应 .asm。

脚本是提取过程的来源材料，不是测试脚本或构建部署入口。
可在拥有同版本游戏文件的独立临时 Ghidra 工程中复用；不要覆盖已归档输出，
也不要把反编译结果编译为游戏模块。

五、复用仓库已有材料

以下为先前已提交的反编译资料，本次不重复复制：
  ../elf-tree-quota/diplomacy-input.c 及 .asm：接受/拒绝操作与配额生成。
  ../elf-tree-quota/diplomacy-text.c 及 .asm：对话内容和缓存配额。
  ../adventure-popup-pe/pe-producer-ac5b30.c：会面结束时安装协议事件。
  ../adventure-popup-pe/pe-producer-e39910.c：季节入口、外交事件与入侵调度。
  ../world-evolution-2026-10-29/decompiled/economy_973780.c：世界文明行动决策。
  ../world-evolution-2026-10-29/assembly/economy_973780.asm：相应世界 AI 原指令。

公开资料对照：
  https://www.dwarffortresswiki.org/index.php/Elf#Diplomats
  https://dwarffortresswiki.org/index.php/Diplomat
Wiki 的“交替接受/拒绝可保持联盟”作为待解释的经验描述；本轮确认了计分和
相关判定路径，未将经验描述直接视为强制 ALLIANCE 状态或免战保证。
