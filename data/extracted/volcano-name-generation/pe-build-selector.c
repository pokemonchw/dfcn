/* Actual Ghidra decompilation; PE:6aea05a1:02734000	build-selector	0x140d4eb70	0x140d4eea5	0x140d4eea5 */

/* WARNING: Removing unreachable block (ram,0x000140d4ec48) */
/* WARNING: Removing unreachable block (ram,0x000140d4ed68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4eb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  int *piStack_48;
  longlong lStack_40;
  longlong lStack_38;
  int *piStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  piStack_30 = (int *)0x0;
  lStack_28 = 0;
  uVar4 = 0;
  lStack_20 = 0;
  lVar2 = *param_4;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (param_4[1] - lVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(uVar3 + lVar2);
      if ((-1 < iVar1) &&
         ((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc10 - _DAT_14250fc08 >> 3))) {
        FUN_1403d06d0(&piStack_30,*(longlong *)(_DAT_14250fc08 + (longlong)iVar1 * 8) + 0x38);
      }
      uVar6 = (int)uVar5 + 1;
      lVar2 = *param_4;
      uVar3 = uVar3 + 4;
      uVar5 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)(param_4[1] - lVar2 >> 2));
  }
  lVar2 = lStack_28;
  piVar7 = piStack_30;
  if (lStack_28 - (longlong)piStack_30 >> 2 == 0) {
    uVar3 = _DAT_14250fbf8 - _DAT_14250fbf0 >> 3;
    if (uVar3 != 0) {
      if ((ulonglong)(lStack_20 - (longlong)piStack_30 >> 2) < uVar3) {
        FUN_140072360(&piStack_30,uVar3);
        piVar7 = piStack_30;
      }
      else {
        supplier_0x141554566(lStack_28,0,uVar3 * 4);
        lStack_28 = lVar2 + uVar3 * 4;
      }
    }
    uVar5 = lStack_28 - (longlong)piVar7 >> 2;
    uVar3 = uVar4;
    if (uVar5 != 0) {
      do {
        *piVar7 = (int)uVar3;
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        piVar7 = piVar7 + 1;
      } while ((ulonglong)(longlong)(int)uVar6 < uVar5);
    }
  }
  piStack_48 = (int *)0x0;
  lStack_40 = 0;
  lStack_38 = 0;
  lVar2 = *param_5;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (param_5[1] - lVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(uVar3 + lVar2);
      if ((-1 < iVar1) &&
         ((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc10 - _DAT_14250fc08 >> 3))) {
        FUN_1403d06d0(&piStack_48,*(longlong *)(_DAT_14250fc08 + (longlong)iVar1 * 8) + 0x38);
      }
      uVar6 = (int)uVar5 + 1;
      lVar2 = *param_5;
      uVar3 = uVar3 + 4;
      uVar5 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)(param_5[1] - lVar2 >> 2));
  }
  lVar2 = lStack_40;
  piVar7 = piStack_48;
  if (lStack_40 - (longlong)piStack_48 >> 2 == 0) {
    uVar3 = _DAT_14250fbf8 - _DAT_14250fbf0 >> 3;
    if (uVar3 != 0) {
      if ((ulonglong)(lStack_38 - (longlong)piStack_48 >> 2) < uVar3) {
        FUN_140072360(&piStack_48,uVar3);
        piVar7 = piStack_48;
      }
      else {
        supplier_0x141554566(lStack_40,0,uVar3 * 4);
        lStack_40 = lVar2 + uVar3 * 4;
      }
    }
    uVar5 = lStack_40 - (longlong)piVar7 >> 2;
    uVar3 = uVar4;
    if (uVar5 != 0) {
      do {
        *piVar7 = (int)uVar3;
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        piVar7 = piVar7 + 1;
      } while ((ulonglong)(longlong)(int)uVar6 < uVar5);
    }
  }
  lVar2 = *param_6;
  uVar3 = uVar4;
  if (param_6[1] - lVar2 >> 2 != 0) {
    do {
      uVar5 = (ulonglong)*(int *)(uVar4 + lVar2);
      if ((-1 < *(int *)(uVar4 + lVar2)) &&
         (uVar5 < (ulonglong)(_DAT_14250fc10 - _DAT_14250fc08 >> 3))) {
        FUN_140d539c0(&piStack_30,*(longlong *)(_DAT_14250fc08 + uVar5 * 8) + 0x38);
        FUN_140d539c0(&piStack_48,*(longlong *)(_DAT_14250fc08 + uVar5 * 8) + 0x38);
      }
      uVar6 = (int)uVar3 + 1;
      uVar4 = uVar4 + 4;
      lVar2 = *param_6;
      uVar3 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < (ulonglong)(param_6[1] - lVar2 >> 2));
  }
  FUN_140d4d220(param_2,&piStack_30);
  FUN_140d4d220(param_3,&piStack_48);
  FUN_140070d80(&piStack_48);
  FUN_140070d80(&piStack_30);
  return;
}

