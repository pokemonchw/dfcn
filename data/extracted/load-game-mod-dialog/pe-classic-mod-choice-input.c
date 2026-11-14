/* classic PE:6aea11a5:0272d000; mod-choice-input; RVA 0x7dd660..0x7ddaac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_mod_choice_input
               (longlong param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
               int param_6)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_a8 [32];
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418b8040 ^ (ulonglong)auStack_a8;
  iVar4 = -1;
  iVar11 = -1;
  if (DAT_1423ac955 != '\0') {
    iVar4 = _DAT_142666934;
    iVar11 = _DAT_142666930;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xd) != '\0') {
      iVar6 = (param_5 + param_4) / 2;
      if (((((DAT_1423ac955 != '\0') && (DAT_1423ac94c != '\0')) && (iVar6 + -8 <= iVar11)) &&
          ((iVar11 <= iVar6 + 8 && (param_6 + -10 <= iVar4)))) && (iVar4 <= param_6 + -8)) {
        DAT_1423ac94c = '\0';
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
    }
    goto LAB_1407dd952;
  }
  iVar3 = (param_5 + param_4) / 2;
  iStack_78 = iVar3 + 0x18;
  pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,iVar3 + 0x28);
  iVar6 = param_6 + -10;
  param_6 = param_6 + -8;
  if ((DAT_1423ac955 == '\0') || (DAT_1423ac94c == '\0')) goto LAB_1407dd952;
  if (((iVar11 < iVar3 + -0x28) ||
      (((iVar3 + -0x1f < iVar11 || (iVar4 < iVar6)) || (param_6 < iVar4)))) &&
     ((((iVar11 < iVar3 + -0x1d || (iVar3 + -0x10 < iVar11)) || (iVar4 < iVar6)) ||
      (param_6 < iVar4)))) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
LAB_1407dda00:
      if ((((iStack_78 <= iVar11) && (iVar11 <= iVar3 + 0x28)) && (iVar6 <= iVar4)) &&
         (iVar4 <= param_6)) {
        DAT_1423ac94c = '\0';
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      goto LAB_1407dd952;
    }
    if ((((iVar11 < iVar3 + -0xe) || (iVar3 + 1 < iVar11)) || (iVar4 < iVar6)) || (param_6 < iVar4))
    {
      if (((iVar11 < iVar3 + 3) || (iVar3 + 0x16 < iVar11)) ||
         ((iVar4 < iVar6 || (param_6 < iVar4)))) goto LAB_1407dda00;
      DAT_1423ac94c = '\0';
      *(undefined1 *)(param_1 + 0xc) = 0;
LAB_1407dd9d1:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
    }
    else {
      DAT_1423ac94c = '\0';
      *(undefined1 *)(param_1 + 0xc) = 0;
      if ((iVar3 + 3 <= iVar11) && (iVar11 <= iVar3 + 0x16)) goto LAB_1407dd9d1;
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x158) & 5) == 0) &&
       (iVar4 = FUN_140db7780(), iVar4 != 2)) {
LAB_1407dd9f4:
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(int *)(param_1 + 0x10) = iVar4;
      goto LAB_1407dd952;
    }
  }
  else {
    DAT_1423ac94c = '\0';
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (((iVar3 + -0x1d <= iVar11) && (iVar11 <= iVar3 + -0x10)) && (iVar4 <= param_6)) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_1407dd952;
    if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x158) & 1) == 0) {
      iVar4 = FUN_140db7780();
      if (iVar4 == 2) {
        pppuStack_70 = (undefined8 ***)0x0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        pppuStack_70 = (undefined8 ***)FUN_140071d90(0x20);
        uStack_60 = 0x14;
        uStack_58 = 0x1f;
        *(undefined4 *)pppuStack_70 = 0x61746164;
        *(undefined4 *)((longlong)pppuStack_70 + 4) = 0x736e692f;
        *(undefined4 *)(pppuStack_70 + 1) = 0x6c6c6174;
        *(undefined4 *)((longlong)pppuStack_70 + 0xc) = 0x6d5f6465;
        *(undefined4 *)(pppuStack_70 + 2) = 0x2f73646f;
        *(undefined1 *)((longlong)pppuStack_70 + 0x14) = 0;
        lVar1 = *(longlong *)(param_1 + 0x18);
        puVar8 = (undefined8 *)(lVar1 + 0x40);
        if (0xf < *(ulonglong *)(lVar1 + 0x58)) {
          puVar8 = (undefined8 *)*puVar8;
        }
        FUN_140070fd0(&pppuStack_70,puVar8,*(undefined8 *)(lVar1 + 0x50));
        FUN_140070fd0(&pppuStack_70," (",2);
        FUN_140542fb0(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60),&pppuStack_70);
        FUN_140070fd0(&pppuStack_70,")",1);
        pppuStack_88 = &pppuStack_70;
        if (0xf < uStack_58) {
          pppuStack_88 = pppuStack_70;
        }
        uStack_80 = uStack_60;
        uVar5 = FUN_14154c158();
        FUN_140144750(auStack_50,uVar5,&pppuStack_88);
        FUN_1401fc760((longlong)*(int *)(param_1 + 8) * 0x20 + *(longlong *)(param_3 + 0x78),
                      auStack_50);
        FUN_14014c1b0(auStack_50);
        if (0xf < uStack_58) {
          uVar9 = uStack_58 + 1;
          ppppuVar7 = (undefined8 ****)pppuStack_70;
          if (0xfff < uVar9) {
            uVar9 = uStack_58 + 0x28;
            ppppuVar7 = (undefined8 ****)pppuStack_70[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_70 + (-8 - (longlong)ppppuVar7))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x154de20(ppppuVar7,uVar9);
        }
        goto LAB_1407dd8c5;
      }
      goto LAB_1407dd9f4;
    }
LAB_1407dd8c5:
    *(undefined4 *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60);
    *(undefined4 *)(*(longlong *)(param_3 + 0x60) + (longlong)*(int *)(param_1 + 8) * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x88);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar10 = (undefined8 *)(lVar1 + 0xd0);
    puVar8 = *(undefined8 **)(*(longlong *)(param_3 + 0xb0) + (longlong)*(int *)(param_1 + 8) * 8);
    if (puVar8 != puVar10) {
      if (0xf < *(ulonglong *)(lVar1 + 0xe8)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_140070e90(puVar8,puVar10,*(undefined8 *)(lVar1 + 0xe0));
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar10 = (undefined8 *)(lVar1 + 0x68);
    puVar8 = *(undefined8 **)(*(longlong *)(param_3 + 200) + (longlong)*(int *)(param_1 + 8) * 8);
    if (puVar8 != puVar10) {
      if (0xf < *(ulonglong *)(lVar1 + 0x80)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_140070e90(puVar8,puVar10,*(undefined8 *)(lVar1 + 0x78));
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_1407dd952:
  FUN_14154de00(uStack_30 ^ (ulonglong)auStack_a8);
  return;
}

