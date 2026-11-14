/* Original PE owner: reference	native-name	0x140aadad0	0x140aae171 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_native_name(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x72) != '\0') {
    uVar11 = 0;
    if (_DAT_1418be234 < 0xb) {
      uVar11 = *(uint *)((longlong)(int)_DAT_1418be234 * 4 + 0x1423b2f60);
    }
    param_2[2] = 0;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar6 = 0;
    if ((*(longlong *)(param_1 + 0x30) == 0) || ((uVar11 & 0xfffffffd) != 0)) {
      FUN_140070c00(&pppuStack_58,param_1);
      FUN_1405468a0(&pppuStack_58);
      ppppuVar8 = &pppuStack_58;
      if (0xf < uStack_40) {
        ppppuVar8 = (undefined8 ****)pppuStack_58;
      }
      FUN_140071040(param_2,ppppuVar8,lStack_48);
      lVar3 = *(longlong *)(param_1 + 0x10);
      FUN_140070e80(&pppuStack_58);
      bVar12 = lVar3 != 0;
    }
    else {
      FUN_1400bb1b0(param_2,0x60);
      plVar9 = (longlong *)(param_1 + 0x20);
      if (0xf < *(ulonglong *)(param_1 + 0x38)) {
        plVar9 = (longlong *)*plVar9;
      }
      FUN_140071040(param_2,plVar9,*(undefined8 *)(param_1 + 0x30));
      FUN_1400bb1b0(param_2,0x27);
      bVar12 = true;
    }
    puVar6 = (undefined8 *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (uVar11 == 1) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1400bb1b0(param_2,0x60);
        if (0xf < *(ulonglong *)(param_1 + 0x38)) {
          puVar6 = (undefined8 *)*puVar6;
        }
        FUN_140071040(param_2,puVar6,*(undefined8 *)(param_1 + 0x30));
        FUN_1400bb1b0(param_2,0x27);
        bVar12 = true;
      }
      if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar11 == 2)) goto LAB_140aae14c;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    uVar7 = (ulonglong)iVar1;
    if ((iVar1 != -1) || (*(int *)(param_1 + 0x44) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if ((((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
          (-1 < iVar2)) &&
         (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar2 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x44);
      if (((-1 < *(int *)(param_1 + 0x44)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1405468a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140071040(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      FUN_140070e80(&pppuStack_58);
    }
    if (((*(int *)(param_1 + 0x54) != -1) || (*(int *)(param_1 + 0x48) != -1)) ||
       (*(int *)(param_1 + 0x4c) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
      if (((-1 < *(int *)(param_1 + 0x48)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x4c);
      if ((((-1 < *(int *)(param_1 + 0x4c)) &&
           (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x50);
      if (((-1 < *(int *)(param_1 + 0x50)) &&
          (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x54);
      if ((((-1 < *(int *)(param_1 + 0x54)) &&
           (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140071040(param_2," ",1);
        }
        FUN_1405468a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140071040(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        mission_supplier_1415530d0(ppppuVar8,uVar7);
      }
    }
    iVar1 = *(int *)(param_1 + 0x58);
    uVar7 = (ulonglong)iVar1;
    if (iVar1 != -1) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if (((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3))) &&
         ((-1 < iVar2 &&
          (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250fc28 - _DAT_14250fc20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_14250fc20 + (longlong)iVar2 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140071040(&pppuStack_58,plVar10,*plVar9);
        if (lStack_48 != 0) {
          if (bVar12) {
            FUN_140071040(param_2," ",1);
          }
          FUN_1405468a0(&pppuStack_58);
          ppppuVar8 = &pppuStack_58;
          if (0xf < uStack_40) {
            ppppuVar8 = (undefined8 ****)pppuStack_58;
          }
          FUN_140071040(param_2,ppppuVar8,lStack_48);
        }
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        mission_supplier_1415530d0(ppppuVar8,uVar7);
      }
    }
  }
LAB_140aae14c:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_78);
  return;
}

