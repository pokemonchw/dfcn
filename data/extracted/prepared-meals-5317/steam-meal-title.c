
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cba4b0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined1 auVar1 [8];
  short sVar2;
  longlong lVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined8 ***pppuStack_68;
  undefined1 auStack_60 [8];
  longlong lStack_58;
  ulonglong uStack_50;
  char acStack_48 [24];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 2) & 0x100) != 0) {
    FUN_140071040(param_2,"rotten ",7);
  }
  lVar8 = 0;
  lVar6 = -1;
  if (param_1[0x1d] - param_1[0x1c] >> 3 != 0) {
    lVar3 = *(longlong *)param_1[0x1c];
    uStack_b8 = *(undefined4 *)(lVar3 + 8);
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_80 = 1;
    uStack_88 = 0xffffffff;
    uStack_90 = 0xffffffff;
    uStack_98 = 0;
    uStack_a0 = 1;
    uStack_a8 = 0;
    uStack_b0 = 1;
    image_item_noun(param_2,*(undefined2 *)(lVar3 + 2),*(undefined2 *)(lVar3 + 4),
                    *(undefined2 *)(lVar3 + 6));
    FUN_140071040(param_2," ",1);
  }
  auStack_60 = (undefined1  [8])0x0;
  lStack_58 = 0;
  uVar7 = 0xf;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  sVar2 = (**(code **)(*param_1 + 8))(param_1);
  iVar4 = (int)(_DAT_14250f358 - _DAT_14250f350 >> 3) + -1;
  lVar3 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar9 = _DAT_14250f350;
      if (*(short *)(*(longlong *)(_DAT_14250f350 + lVar3 * 8) + 0x28) == sVar2) goto LAB_140cba6f4;
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  do {
    auVar1 = auStack_60;
    lStack_58 = 0xd;
    pppuStack_68 = _DAT_141721d68;
    auStack_60[4] = DAT_141721d74;
    auStack_60._0_4_ = _DAT_141721d70;
    auStack_60._6_2_ = auVar1._6_2_;
    auStack_60[5] = 0;
    lVar8 = 0xd;
LAB_140cba61c:
    ppppuVar5 = &pppuStack_68;
    if (0xf < uVar7) {
      ppppuVar5 = (undefined8 ****)pppuStack_68;
    }
    lVar9 = lVar8;
    FUN_140071040(param_2,ppppuVar5);
    if ((1 < (int)param_1[0x10]) && (param_3 == '\0')) {
      _itoa((int)param_1[0x10],acStack_48,10);
      FUN_140071040(param_2," [",2);
      lVar3 = lVar6;
      do {
        lVar6 = lVar3 + 1;
        lVar9 = lVar3 + 1;
        lVar3 = lVar6;
      } while (acStack_48[lVar9] != '\0');
      FUN_140071040(param_2,acStack_48,lVar6);
      lVar9 = 1;
      FUN_140071040(param_2,"]");
    }
    if (uStack_50 < 0x10) goto LAB_140cba748;
    if (uStack_50 + 1 < 0x1000) {
LAB_140cba743:
      load_supplier_0x15530d0();
LAB_140cba748:
      FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_d8);
      return;
    }
    iVar4 = (int)uStack_50 + 0x28;
    if ((ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)pppuStack_68[-1])) < 0x20)
    goto LAB_140cba743;
    _invalid_parameter_noinfo_noreturn();
LAB_140cba6f4:
    lVar3 = *(longlong *)(lVar9 + (longlong)iVar4 * 8);
  } while (lVar3 == 0);
  ppppuVar5 = (undefined8 ****)(lVar3 + 0x68);
  if (&pppuStack_68 != ppppuVar5) {
    if (0xf < *(ulonglong *)(lVar3 + 0x80)) {
      ppppuVar5 = (undefined8 ****)*ppppuVar5;
    }
    FUN_140070f00(&pppuStack_68,ppppuVar5,*(undefined8 *)(lVar3 + 0x78));
    uVar7 = uStack_50;
    lVar8 = lStack_58;
  }
  goto LAB_140cba61c;
}

