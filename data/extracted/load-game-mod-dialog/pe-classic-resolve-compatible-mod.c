/* classic PE:6aea11a5:0272d000; resolve-compatible-mod; RVA 0x7dd2b0..0x7dd651 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_resolve_compatible_mod(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 ***pppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 **appuStack_88 [2];
  longlong lStack_78;
  ulonglong uStack_70;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_d8;
  iVar6 = *(int *)(param_1 + 8);
  if ((iVar6 < 0) ||
     ((int)(*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30) >> 3) <= iVar6))
  goto LAB_1407dd623;
  FUN_140070b90(appuStack_88,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar6 * 8));
  iVar6 = *(int *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar4 = _DAT_1418c9f68;
  for (plVar12 = _DAT_1418c9f60; plVar12 < plVar4; plVar12 = plVar12 + 1) {
    lVar2 = *plVar12;
    plVar8 = (longlong *)(lVar2 + 0x40);
    pppuVar9 = appuStack_88;
    if (0xf < uStack_70) {
      pppuVar9 = (undefined8 ***)appuStack_88[0];
    }
    if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
      plVar8 = (longlong *)*plVar8;
    }
    if (*(longlong *)(lVar2 + 0x50) == lStack_78) {
      iVar5 = load_supplier_0x154f5b4(plVar8,pppuVar9);
      if (iVar5 == 0) {
        if (*(int *)(lVar2 + 0x60) == iVar6) {
          *(longlong *)(param_1 + 0x20) = lVar2;
        }
        if (((*(longlong *)(param_1 + 0x18) == 0) ||
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x60) < *(int *)(lVar2 + 0x60))) &&
           (*(int *)(lVar2 + 0x88) <= iVar6)) {
          *(longlong *)(param_1 + 0x18) = lVar2;
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x18) != lVar2)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 == 0) {
LAB_1407dd616:
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      if ((*(uint *)(lVar3 + 0x158) & 4) != 0) {
        *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(lVar3 + 0x60);
        *(undefined4 *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x88);
        goto LAB_1407dd418;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      if ((uVar1 & 1) == 0) {
        if (((uVar1 & 2) == 0) || (lVar2 == 0)) {
          *(undefined1 *)(param_1 + 0xc) = 1;
          goto LAB_1407dd61a;
        }
        if ((*(byte *)(lVar2 + 0x158) & 5) == 0) {
          iVar6 = FUN_140db7780();
          if (iVar6 != 2) {
            *(int *)(param_1 + 0x10) = iVar6;
            goto LAB_1407dd616;
          }
        }
      }
      else {
        if ((*(uint *)(lVar3 + 0x158) & 1) == 0) {
          iVar6 = FUN_140db7780(uVar1,lVar3);
          if (iVar6 != 2) {
            *(int *)(param_1 + 0x10) = iVar6;
            *(undefined1 *)(param_1 + 0xd) = 1;
            goto LAB_1407dd61a;
          }
          ppuStack_a8 = (undefined8 **)0x0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          ppuStack_a8 = (undefined8 **)FUN_140071d90(0x20);
          uStack_98 = 0x14;
          uStack_90 = 0x1f;
          *(undefined4 *)ppuStack_a8 = 0x61746164;
          *(undefined4 *)((longlong)ppuStack_a8 + 4) = 0x736e692f;
          *(undefined4 *)(ppuStack_a8 + 1) = 0x6c6c6174;
          *(undefined4 *)((longlong)ppuStack_a8 + 0xc) = 0x6d5f6465;
          *(undefined4 *)(ppuStack_a8 + 2) = 0x2f73646f;
          *(undefined1 *)((longlong)ppuStack_a8 + 0x14) = 0;
          lVar2 = *(longlong *)(param_1 + 0x18);
          puVar10 = (undefined8 *)(lVar2 + 0x40);
          if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
            puVar10 = (undefined8 *)*puVar10;
          }
          FUN_140070fd0(&ppuStack_a8,puVar10,*(undefined8 *)(lVar2 + 0x50));
          FUN_140070fd0(&ppuStack_a8," (",2);
          FUN_140542fb0(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60),&ppuStack_a8);
          FUN_140070fd0(&ppuStack_a8,")",1);
          ppuStack_b8 = &ppuStack_a8;
          if (0xf < uStack_90) {
            ppuStack_b8 = ppuStack_a8;
          }
          uStack_b0 = uStack_98;
          uVar7 = FUN_14154c158();
          FUN_140144750(auStack_68,uVar7,&ppuStack_b8);
          FUN_1401fc760((longlong)*(int *)(param_1 + 8) * 0x20 + *(longlong *)(param_2 + 0x78),
                        auStack_68);
          FUN_14014c1b0(auStack_68);
          FUN_140070e10(&ppuStack_a8);
        }
        *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60);
        *(undefined4 *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x88);
        lVar2 = *(longlong *)(param_1 + 0x18);
        puVar11 = (undefined8 *)(lVar2 + 0xd0);
        puVar10 = *(undefined8 **)
                   (*(longlong *)(param_2 + 0xb0) + (longlong)*(int *)(param_1 + 8) * 8);
        if (puVar10 != puVar11) {
          if (0xf < *(ulonglong *)(lVar2 + 0xe8)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_140070e90(puVar10,puVar11,*(undefined8 *)(lVar2 + 0xe0));
        }
        lVar2 = *(longlong *)(param_1 + 0x18);
        puVar11 = (undefined8 *)(lVar2 + 0x68);
        puVar10 = *(undefined8 **)
                   (*(longlong *)(param_2 + 200) + (longlong)*(int *)(param_1 + 8) * 8);
        if (puVar10 != puVar11) {
          if (0xf < *(ulonglong *)(lVar2 + 0x80)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_140070e90(puVar10,puVar11,*(undefined8 *)(lVar2 + 0x78));
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 0x158) & 5) == 0) {
      iVar6 = FUN_140db7780();
      if (iVar6 != 2) {
        *(int *)(param_1 + 0x10) = iVar6;
        *(undefined1 *)(param_1 + 0xd) = 1;
        goto LAB_1407dd61a;
      }
    }
LAB_1407dd418:
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
LAB_1407dd61a:
  FUN_140070e10(appuStack_88);
LAB_1407dd623:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_d8);
  return;
}

