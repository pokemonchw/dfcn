Offline static reverse-engineering evidence for the Steam Windows 53.16 image.
Date: 2026-10-31.

Report: D:\workspace\dfcn\docs\food-decay-research-2026-10-31.zh-CN.txt
image.txt contains the Ghidra imported image identity; the disk SHA256 matches it.
vtable.tsv records current-PE virtual targets, not runtime process data.
rot-switch.tsv records the actual item-type dispatch table at VA 140c73a80.
functions.tsv has tab-separated researcher role, start VA, exclusive end VA.
The tile-designation leaf boundary is its final RET, not PE unwind metadata.
Other recorded envelopes were obtained from PE unwind regions.

*.c are actual Ghidra output; descriptive function names are researcher-assigned.
*.asm are original disk disassembly. Linear output can include switch-table data.
decay_caller.asm is the fortress loop; the relevant CALL is at 1408b69a2.
item_update_main is the world event/vermin update, not solely item decay.
item_toolst_age_item is a shared age virtual also used by prepared food.
item_plantst_material_rots is shared by several material-based item types.

Important C inference limitation: vermin_consume_item's first collect argument
appears as zero; machine code preserves the incoming RCX (vermin pointer).
Use the .asm and report explanation for argument semantics.

DecompileFoodDecay.java exports selected functions from a disk-image Ghidra
project. It does not execute the game or modify game/runtime data. Research
script execution is not a plugin build, deployment, runtime data generator,
or a simulation test. The working Ghidra project is located at:
D:\workspace\dfcn\build\food-decay-research-project\food-decay
The initial import has no whole-program analysis; subsequent exports used
-process 'Dwarf Fortress.exe' -noanalysis -readOnly.
Ghidra: C:\Users\WIN11\AppData\Local\Programs\dfcn-analysis-tools\ghidra_12.1.4_PUBLIC
JDK: C:\Users\WIN11\AppData\Local\Programs\dfcn-analysis-tools\jdk-25.0.4.1+1
Decompiler cache/settings are isolated under .cache\food-decay-2026-10-31.

No game executable, DLL, save, runtime data or translation source was changed.
No game window, keyboard/mouse action, live process or gameplay log was accessed.
