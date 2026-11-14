搜索关联算法：离线反编译来源
日期：2026-11-14

方案正文：D:/workspace/dfcn/docs/search-association-algorithm-2026-11-14.zh-CN.txt

本目录为原生代码研究资料，不是测试、专项检查或游戏内效果记录。
本次没有修改游戏、运行数据、翻译核心和加载器，没有编译部署。

源映像：当前 native-pe-images.json 的 game，Windows x64 Steam 53.17。
SHA-256：3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16

locate_functions.py：读取磁盘 PE 和该映像已有的静态地址缓存定位函数；
  不读取运行进程或游戏日志。按照 PE chained unwind 恢复多个代码区间。
  job_caption 由当前候选填充代码的直接 CALL 目标解析。
  未解析的 tool_use_requirement 没有冒用旧地址导出。
  search_fold 当前入口为 0x5463c0，无 unwind 包围区间；本次未单独反编译。
  旧版折叠函数资料位于 adventure-conversation-keywords，仅作旧版补充。

DecompileSearchAssociation.java：在现有磁盘映像工程内导出六个函数。
  角色名为研究命名；函数参数类型、局部变量名属于 Ghidra 推断。
  job_caption 在 0x140d1fc4c 有 pcode 解码警告；原始警告保留于 .c。
  大型 switch 中 Ghidra 导出的 .asm 仅含 Listing 已识别的指令；
  不把该列表声称为整个函数的完整逐指令反汇编。

read_decompiled_literals.py：从同一磁盘映像读取 C 中 UNK 地址对应的
  .rdata 字符串，写入 decompiled-literals.tsv，以便对照材料变名分支。
  字符串原始片段不自动拼接或改名，例如 boxe 是原生复数拼装片段。

functions.tsv：角色、入口 VA、多个代码区间（右端不含）。
coordinates.tsv：旧引用锚点、当前锚点和函数区间。
  owner_end 为主 unwind 区间右端；ranges 才是完整的已恢复区间集合。
disk-image.txt：磁盘源及用于定位的静态地址资料。
decompiler-image.txt：Ghidra 工程实际导入映像的来源身份。
*.c：实际 Ghidra 反编译输出。
*.asm：Ghidra Listing 指令。
literals.tsv：Listing 已有引用可读取的字面量。
decompiled-literals.tsv：C 中 UNK 字面量的磁盘对照。

执行环境：
  Python：C:/Users/WIN11/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe
  Ghidra：C:/Users/WIN11/AppData/Local/Programs/dfcn-analysis-tools/ghidra_12.1.4_PUBLIC
  JDK：C:/Users/WIN11/AppData/Local/Programs/dfcn-analysis-tools/jdk-25.0.4.1+1
  工程：D:/workspace/dfcn/build/item-color-research/current

Headless 参数为 -process 'Dwarf Fortress.exe' -noanalysis -readOnly，
-scriptPath 指向本目录，-postScript 为 DecompileSearchAssociation.java，
两个脚本参数分别为本目录和上述 SHA-256。
设置 application.settingsdir/application.cachedir 到
D:/workspace/dfcn/.cache/search-association-settings 与 search-association-cache。
首次使用非隔离的默认 OSGi 设置启动失败，改用上述独立设置目录后完成导出。
离线工程只读处理结束时，Ghidra 丢弃了工程内的临时分析修改。
