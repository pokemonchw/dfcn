/* Actual Ghidra decompilation; PE:6aea05a1:02734000	name-editor-init	0x1401fef30	0x1401ff105	0x1401ff105 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401fef30(undefined1 *param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  longlong param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  
  if (*(int *)(param_3 + 0x6c) == -1) {
    if (param_5 == 0) {
      return;
    }
    iVar2 = FUN_1401fd1c0(&DAT_14250fbf0,*(longlong *)(param_5 + 8) + 0x3b0);
    *(int *)(param_3 + 0x6c) = iVar2;
    if (iVar2 == -1) {
      return;
    }
  }
  *param_1 = 0;
  iVar2 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  param_1[0x17e] = 0;
  puVar3 = (undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 400) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x198)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(longlong *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(longlong *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  piStack_38 = (int *)0x0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (_DAT_14250fbf8 - _DAT_14250fbf0 >> 3 != 0) {
    FUN_140072360(&piStack_38);
  }
  piVar4 = piStack_38;
  if (_DAT_14250fbf8 - _DAT_14250fbf0 >> 3 != 0) {
    do {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3));
  }
  FUN_140d4d220(param_1 + 0x28,&piStack_38);
  FUN_1401ff110(param_1);
  if (piStack_38 != (int *)0x0) {
    uVar5 = lStack_28 - (longlong)piStack_38 & 0xfffffffffffffffc;
    piVar4 = piStack_38;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      piVar4 = *(int **)(piStack_38 + -2);
      if (0x1f < (ulonglong)((longlong)piStack_38 + (-8 - (longlong)piVar4))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    supplier_0x1415530d0(piVar4,uVar5);
  }
  return;
}

