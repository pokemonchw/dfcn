/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x1407dd040..0x1407dd104 */

void FUN_1407dd040(longlong param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 auStackX_10 [4];
  undefined4 auStackX_18 [2];
  int aiStackX_20 [2];
  
  puVar1 = *(undefined2 **)(param_1 + 0xf0);
  auStackX_10[0] = param_2;
  auStackX_18[0] = param_3;
  aiStackX_20[0] = param_4;
  if (puVar1 == *(undefined2 **)(param_1 + 0xf8)) {
    FUN_140071040(param_1 + 0xe8,puVar1,auStackX_10);
  }
  else {
    *puVar1 = param_2;
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 2;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x108);
  if (puVar2 == *(undefined4 **)(param_1 + 0x110)) {
    FUN_140070e20(param_1 + 0x100,puVar2,auStackX_18);
  }
  else {
    *puVar2 = param_3;
    *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + 4;
  }
  piVar3 = *(int **)(param_1 + 0x120);
  if (piVar3 != *(int **)(param_1 + 0x128)) {
    *piVar3 = param_4;
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 4;
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + param_4;
    return;
  }
  FUN_140070e20(param_1 + 0x118,piVar3,aiStackX_20);
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + param_4;
  return;
}

