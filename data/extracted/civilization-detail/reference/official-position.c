/* Original PE owner: reference	official-position	0x140df5730	0x140df5925 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_official_position(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 *puStack_78;
  undefined1 uStack_70;
  undefined2 uStack_68;
  char acStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 ***pppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_1418be040 ^ (ulonglong)auStack_98;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  puStack_78 = &uStack_50;
  lVar6 = FUN_140c032e0(*(undefined8 *)(param_1 + 0x10),param_3,acStack_58,&uStack_48);
  if (lVar6 != 0) {
    cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 6);
    if (acStack_58[0] == '\0') {
      lVar8 = 0x98;
      if (cVar2 == '\0') {
        lVar7 = 0xd8;
        bVar12 = *(longlong *)(lVar6 + 0xe8) == 0;
      }
      else {
        lVar7 = lVar8;
        if (cVar2 != '\x01') goto LAB_140df5803;
        lVar7 = 0x118;
        bVar12 = *(longlong *)(lVar6 + 0x128) == 0;
      }
LAB_140df57fc:
      if (bVar12) {
        lVar7 = lVar8;
      }
    }
    else {
      lVar8 = 0x158;
      if (cVar2 == '\0') {
        lVar7 = 0x198;
        bVar12 = *(longlong *)(lVar6 + 0x1a8) == 0;
        goto LAB_140df57fc;
      }
      lVar7 = lVar8;
      if (cVar2 == '\x01') {
        lVar7 = 0x1d8;
        bVar12 = *(longlong *)(lVar6 + 0x1e8) == 0;
        goto LAB_140df57fc;
      }
    }
LAB_140df5803:
    plVar10 = (longlong *)(lVar6 + lVar7);
    plVar1 = plVar10 + 2;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140071040(param_2,plVar10,*plVar1);
    if (0 < *(short *)(lVar6 + 0x2c8)) {
      FUN_1409d7a60(uStack_48,uStack_50,param_2);
    }
  }
  if (param_2[2] != 0) {
    if (**(short **)(param_1 + 0x10) == 0x66) goto LAB_140df590d;
    FUN_140071040(param_2,"/",1);
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xf;
  pppuStack_40 = (undefined8 ****)0x0;
  puVar3 = *(undefined2 **)(param_1 + 0x10);
  uStack_68 = 0xfffe;
  uStack_70 = 1;
  puStack_78 = (undefined8 *)((ulonglong)puStack_78 & 0xffffffffffffff00);
  FUN_1413469d0(&pppuStack_40,*puVar3,puVar3[1],puVar3[2]);
  ppppuVar9 = &pppuStack_40;
  if (0xf < uStack_28) {
    ppppuVar9 = (undefined8 ****)pppuStack_40;
  }
  FUN_140071040(param_2,ppppuVar9,uStack_30);
  if (0xf < uStack_28) {
    uVar11 = uStack_28 + 1;
    ppppuVar9 = (undefined8 ****)pppuStack_40;
    if (0xfff < uVar11) {
      uVar11 = uStack_28 + 0x28;
      ppppuVar9 = (undefined8 ****)pppuStack_40[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_40 + (-8 - (longlong)ppppuVar9))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    mission_supplier_1415530d0(ppppuVar9,uVar11);
  }
LAB_140df590d:
  FUN_1415530b0(uStack_20 ^ (ulonglong)auStack_98);
  return;
}

