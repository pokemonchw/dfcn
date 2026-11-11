/* Actual Ghidra decompilation; PE:6aea05a1:02734000	category-dispatch	0x140aac2a0	0x140aac2f5	0x140aac2f5 */

void FUN_140aac2a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                  uint param_5)

{
  if (param_5 < 0x44) {
    FUN_140aac300(param_2,param_3,param_4,param_1 + 0x48 + (longlong)(int)param_5 * 0x120,
                  param_1 + 0x4cc8 + (longlong)(int)param_5 * 0x120);
  }
  return;
}

