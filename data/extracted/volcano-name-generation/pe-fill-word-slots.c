/* Actual Ghidra decompilation; PE:6aea05a1:02734000	fill-word-slots	0x140d4d220	0x140d4dbc4	0x140d4d28a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4d220(longlong param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStackX_18 [2];
  int iStackX_20;
  undefined4 auStack_48 [4];
  
  plVar4 = (longlong *)(param_1 + 8);
  lVar6 = 6;
  do {
    if (plVar4[-1] != *plVar4) {
      *plVar4 = plVar4[-1];
    }
    if (plVar4[0x11] != plVar4[0x12]) {
      plVar4[0x12] = plVar4[0x11];
    }
    plVar4 = plVar4 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = *param_2;
  iStackX_20 = 0;
  if (0 < (int)(param_2[1] - lVar6 >> 2)) {
    lVar7 = 0;
    do {
      iVar5 = iStackX_20;
      iVar1 = *(int *)(lVar6 + lVar7 * 4);
      if ((-1 < iVar1) && (iVar1 < (int)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) {
        lVar6 = *(longlong *)(_DAT_14250fbf0 + (longlong)iVar1 * 8);
        aiStackX_18[0] = iVar1;
        if ((*(byte *)(lVar6 + 0x148) & 1) != 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 0;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 0;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 2) != 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 1;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 1;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 4) != 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 2;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 2;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 8) != 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 3;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 3;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 0x10) != 0) {
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 0;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 0;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 0x20) != 0) {
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 1;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 1;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 0x40) != 0) {
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 2;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 2;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
        }
        if ((*(byte *)(lVar6 + 0x148) & 0x80) != 0) {
          piVar2 = *(int **)(param_1 + 0x38);
          if (piVar2 == *(int **)(param_1 + 0x40)) {
            FUN_140072450(param_1 + 0x30,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 200);
          auStack_48[0] = 0;
          if (puVar3 == *(undefined4 **)(param_1 + 0xd0)) {
            FUN_14028ae70(param_1 + 0xc0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 0;
            *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x100) != 0) {
          piVar2 = *(int **)(param_1 + 0x38);
          if (piVar2 == *(int **)(param_1 + 0x40)) {
            FUN_140072450(param_1 + 0x30,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 200);
          auStack_48[0] = 1;
          if (puVar3 == *(undefined4 **)(param_1 + 0xd0)) {
            FUN_14028ae70(param_1 + 0xc0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 1;
            *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 4;
          }
        }
        if (*(longlong *)(lVar6 + 0x70) != 0) {
          piVar2 = *(int **)(param_1 + 0x50);
          if (piVar2 == *(int **)(param_1 + 0x58)) {
            FUN_140072450(param_1 + 0x48,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xe0);
          auStack_48[0] = 2;
          if (puVar3 == *(undefined4 **)(param_1 + 0xe8)) {
            FUN_14028ae70(param_1 + 0xd8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 2;
            *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x200) != 0) {
          piVar2 = *(int **)(param_1 + 0x68);
          if (piVar2 == *(int **)(param_1 + 0x70)) {
            FUN_140072450(param_1 + 0x60,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xf8);
          auStack_48[0] = 0;
          if (puVar3 == *(undefined4 **)(param_1 + 0x100)) {
            FUN_14028ae70(param_1 + 0xf0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 0;
            *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x400) != 0) {
          piVar2 = *(int **)(param_1 + 0x68);
          if (piVar2 == *(int **)(param_1 + 0x70)) {
            FUN_140072450(param_1 + 0x60,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xf8);
          auStack_48[0] = 1;
          if (puVar3 == *(undefined4 **)(param_1 + 0x100)) {
            FUN_14028ae70(param_1 + 0xf0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 1;
            *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x800) != 0) {
          piVar2 = *(int **)(param_1 + 0x68);
          if (piVar2 == *(int **)(param_1 + 0x70)) {
            FUN_140072450(param_1 + 0x60,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xf8);
          auStack_48[0] = 2;
          if (puVar3 == *(undefined4 **)(param_1 + 0x100)) {
            FUN_14028ae70(param_1 + 0xf0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 2;
            *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x1000) != 0) {
          piVar2 = *(int **)(param_1 + 0x68);
          if (piVar2 == *(int **)(param_1 + 0x70)) {
            FUN_140072450(param_1 + 0x60,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xf8);
          auStack_48[0] = 3;
          if (puVar3 == *(undefined4 **)(param_1 + 0x100)) {
            FUN_14028ae70(param_1 + 0xf0,puVar3,auStack_48);
          }
          else {
            *puVar3 = 3;
            *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x2000) != 0) {
          piVar2 = *(int **)(param_1 + 0x80);
          if (piVar2 == *(int **)(param_1 + 0x88)) {
            FUN_140072450(param_1 + 0x78,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x110);
          auStack_48[0] = 0;
          if (puVar3 == *(undefined4 **)(param_1 + 0x118)) {
            FUN_14028ae70(param_1 + 0x108,puVar3,auStack_48);
          }
          else {
            *puVar3 = 0;
            *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x4000) != 0) {
          piVar2 = *(int **)(param_1 + 0x80);
          if (piVar2 == *(int **)(param_1 + 0x88)) {
            FUN_140072450(param_1 + 0x78,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x110);
          auStack_48[0] = 1;
          if (puVar3 == *(undefined4 **)(param_1 + 0x118)) {
            FUN_14028ae70(param_1 + 0x108,puVar3,auStack_48);
          }
          else {
            *puVar3 = 1;
            *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 4;
          }
        }
        if ((*(uint *)(lVar6 + 0x148) & 0x8000) != 0) {
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 4;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 4;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
          piVar2 = *(int **)(param_1 + 8);
          if (piVar2 == *(int **)(param_1 + 0x10)) {
            FUN_140072450(param_1,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x98);
          auStack_48[0] = 7;
          if (puVar3 == *(undefined4 **)(param_1 + 0xa0)) {
            FUN_14028ae70(param_1 + 0x90,puVar3,auStack_48);
          }
          else {
            *puVar3 = 7;
            *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 4;
          }
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 4;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 4;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 5;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 5;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 6;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
          }
          else {
            *puVar3 = 6;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
          }
          piVar2 = *(int **)(param_1 + 0x20);
          if (piVar2 == *(int **)(param_1 + 0x28)) {
            FUN_140072450(param_1 + 0x18,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0xb0);
          auStack_48[0] = 7;
          if (puVar3 == *(undefined4 **)(param_1 + 0xb8)) {
            FUN_14028ae70(param_1 + 0xa8,puVar3,auStack_48);
            iVar5 = iStackX_20;
          }
          else {
            *puVar3 = 7;
            *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 4;
            iVar5 = iStackX_20;
          }
        }
        if (*(longlong *)(lVar6 + 0x130) != 0) {
          piVar2 = *(int **)(param_1 + 0x80);
          if (piVar2 == *(int **)(param_1 + 0x88)) {
            FUN_140072450(param_1 + 0x78,piVar2,aiStackX_18);
          }
          else {
            *piVar2 = iVar1;
            *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 4;
          }
          puVar3 = *(undefined4 **)(param_1 + 0x110);
          aiStackX_18[0] = 8;
          if (puVar3 == *(undefined4 **)(param_1 + 0x118)) {
            FUN_14028ae70(param_1 + 0x108,puVar3,aiStackX_18);
          }
          else {
            *puVar3 = 8;
            *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 4;
          }
        }
      }
      lVar6 = *param_2;
      iStackX_20 = iVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (iStackX_20 < (int)(param_2[1] - lVar6 >> 2));
  }
  return;
}

