/* classic PE:6aea11a5:0272d000; art_image_element_treest; RVA 0x14a750..0x14a94e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_treest(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_88 [32];
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418b8040 ^ (ulonglong)auStack_88;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140070fd0(param_2,"a ",2);
    }
  }
  else {
    FUN_140070fd0(param_2,"the ",4);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (1 < iVar2) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words(iVar2,&pppuStack_48);
    ppppuVar7 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar7 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar7,uStack_38);
    FUN_140070fd0(param_2," ",1);
    if (0xf < uStack_30) {
      uVar6 = uStack_30 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar6) {
        uVar6 = uStack_30 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      load_supplier_0x154de20(ppppuVar7,uVar6);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((-1 < iVar2) &&
     ((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_142508c80 - _DAT_142508c78 >> 3))) {
    lVar3 = *(longlong *)(_DAT_142508c78 + (longlong)iVar2 * 8);
    if (*(int *)(param_1 + 8) == 1) {
      ppppuVar7 = (undefined8 ****)(lVar3 + 0x50);
    }
    else {
      ppppuVar7 = (undefined8 ****)(lVar3 + 0x70);
    }
    if (&pppuStack_68 != ppppuVar7) {
      ppppuVar1 = ppppuVar7 + 2;
      if ((undefined8 ***)0xf < ppppuVar7[3]) {
        ppppuVar7 = (undefined8 ****)*ppppuVar7;
      }
      FUN_140070e90(&pppuStack_68,ppppuVar7,*ppppuVar1);
    }
  }
  ppppuVar7 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar7 = (undefined8 ****)pppuStack_68;
  }
  FUN_140070fd0(param_2,ppppuVar7,uStack_58);
  if (0xf < uStack_50) {
    uVar6 = uStack_50 + 1;
    ppppuVar7 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar6) {
      uVar6 = uStack_50 + 0x28;
      ppppuVar7 = (undefined8 ****)pppuStack_68[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar7))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    load_supplier_0x154de20(ppppuVar7,uVar6);
  }
  FUN_14154de00(uStack_28 ^ (ulonglong)auStack_88);
  return;
}

