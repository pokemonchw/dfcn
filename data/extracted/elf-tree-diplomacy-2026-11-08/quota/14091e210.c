
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091e210(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 auStackX_10 [4];
  
  psVar2 = *(short **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x1398));
  if ((*psVar2 == 0) && (psVar2[1] == 2)) {
    iVar1 = *(int *)(psVar2 + 0x1e);
    iVar6 = *(int *)(psVar2 + 0x1c) >> 1;
    if (iVar1 < iVar6) {
      iVar5 = *(int *)(psVar2 + 0x1c) >> 2;
      if (iVar1 < iVar5) {
        if (iVar1 < 0) {
          if (iVar1 < -iVar5) {
            uVar7 = 0xfffd;
            if (-iVar6 <= iVar1) {
              uVar7 = 0xfffe;
            }
          }
          else {
            uVar7 = 0xffff;
          }
        }
        else {
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 2;
    }
    if (*(undefined4 **)(param_3 + 0xe0) == *(undefined4 **)(param_3 + 0xe8)) {
      FUN_140070e20(param_3 + 0xd8);
    }
    else {
      **(undefined4 **)(param_3 + 0xe0) = *(undefined4 *)(param_1 + 4);
      *(longlong *)(param_3 + 0xe0) = *(longlong *)(param_3 + 0xe0) + 4;
    }
    if (*(undefined2 **)(param_3 + 0xf8) == *(undefined2 **)(param_3 + 0x100)) {
      FUN_140071040(param_3 + 0xf0);
    }
    else {
      **(undefined2 **)(param_3 + 0xf8) =
           *(undefined2 *)
            (*(longlong *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x1398)) + 2);
      *(longlong *)(param_3 + 0xf8) = *(longlong *)(param_3 + 0xf8) + 2;
    }
    puVar3 = *(undefined4 **)(param_3 + 0x110);
    if (puVar3 == *(undefined4 **)(param_3 + 0x118)) {
      FUN_140070e20(param_3 + 0x108,puVar3,&DAT_1423746f4);
    }
    else {
      *puVar3 = _DAT_1423746f4;
      *(longlong *)(param_3 + 0x110) = *(longlong *)(param_3 + 0x110) + 4;
    }
    puVar3 = *(undefined4 **)(param_3 + 0x128);
    if (puVar3 == *(undefined4 **)(param_3 + 0x130)) {
      FUN_140070e20(param_3 + 0x120,puVar3,&DAT_142387fc4);
    }
    else {
      *puVar3 = _DAT_142387fc4;
      *(longlong *)(param_3 + 0x128) = *(longlong *)(param_3 + 0x128) + 4;
    }
    puVar4 = *(undefined2 **)(param_3 + 0x140);
    if (puVar4 == *(undefined2 **)(param_3 + 0x148)) {
      auStackX_10[0] = uVar7;
      FUN_140071040(param_3 + 0x138,puVar4,auStackX_10);
    }
    else {
      *puVar4 = uVar7;
      *(longlong *)(param_3 + 0x140) = *(longlong *)(param_3 + 0x140) + 2;
    }
  }
  return;
}

