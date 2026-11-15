/* reference PE:6aea05a1:02734000; art_image_element_shapest; RVA 0x148ce0..0x148fab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_shapest(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 ****ppppuVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_88 [32];
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  param_2[2] = 0;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar8 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ***)0x0;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140071040(param_2,"a ",2);
    }
  }
  else {
    FUN_140071040(param_2,"the ",4);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (1 < iVar4) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words(iVar4,&pppuStack_48);
    ppppuVar10 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar10 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar10,uStack_38);
    FUN_140071040(param_2," ",1);
    if (0xf < uStack_30) {
      uVar9 = uStack_30 + 1;
      ppppuVar10 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar9) {
        uVar9 = uStack_30 + 0x28;
        ppppuVar10 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar10))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar10,uVar9);
    }
  }
  sVar2 = *(short *)(param_1 + 0x14);
  sVar3 = *(short *)(param_1 + 0x10);
  lStack_58 = 0;
  pppuStack_68 = (undefined8 ***)((ulonglong)pppuStack_68 & 0xffffffffffffff00);
  if ((((-1 < sVar3) &&
       ((ulonglong)(longlong)sVar3 < (ulonglong)(_DAT_142519558 - _DAT_142519550 >> 3))) &&
      (-1 < sVar2)) &&
     ((lVar5 = *(longlong *)(_DAT_142519550 + (longlong)sVar3 * 8),
      lVar6 = *(longlong *)(lVar5 + 0x90),
      (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar5 + 0x98) - lVar6 >> 3) &&
      (ppppuVar10 = *(undefined8 *****)(lVar6 + (longlong)sVar2 * 8), &pppuStack_68 != ppppuVar10)))
     ) {
    ppppuVar1 = ppppuVar10 + 2;
    if ((undefined8 ***)0xf < ppppuVar10[3]) {
      ppppuVar10 = (undefined8 ****)*ppppuVar10;
    }
    FUN_140070f00(&pppuStack_68,ppppuVar10,*ppppuVar1);
    if (lStack_58 != 0) {
      ppppuVar10 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar10 = (undefined8 ****)pppuStack_68;
      }
      FUN_140071040(param_2,ppppuVar10);
      FUN_140071040(param_2," ",1);
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  sVar2 = *(short *)(param_1 + 0x10);
  lStack_58 = 0;
  ppppuVar10 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar10 = (undefined8 ****)pppuStack_68;
  }
  *(undefined1 *)ppppuVar10 = 0;
  if ((-1 < sVar2) &&
     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_142519558 - _DAT_142519550 >> 3))) {
    lVar5 = *(longlong *)(_DAT_142519550 + (longlong)sVar2 * 8);
    if (iVar4 == 1) {
      ppppuVar10 = (undefined8 ****)(lVar5 + 0x50);
    }
    else {
      ppppuVar10 = (undefined8 ****)(lVar5 + 0x70);
    }
    if (&pppuStack_68 != ppppuVar10) {
      ppppuVar1 = ppppuVar10 + 2;
      if ((undefined8 ***)0xf < ppppuVar10[3]) {
        ppppuVar10 = (undefined8 ****)*ppppuVar10;
      }
      FUN_140070f00(&pppuStack_68,ppppuVar10,*ppppuVar1);
    }
  }
  ppppuVar10 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar10 = (undefined8 ****)pppuStack_68;
  }
  FUN_140071040(param_2,ppppuVar10,lStack_58);
  if (0xf < uStack_50) {
    uVar9 = uStack_50 + 1;
    ppppuVar10 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar9) {
      uVar9 = uStack_50 + 0x28;
      ppppuVar10 = (undefined8 ****)pppuStack_68[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar10)))
      {
        _invalid_parameter_noinfo_noreturn();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar10,uVar9);
  }
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_88);
  return;
}

