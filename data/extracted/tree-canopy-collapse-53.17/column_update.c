/* Actual Ghidra output; researcher-assigned name. VA 0x1414be950..0x1414bed79; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void column_update(longlong param_1,short param_2,short param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_208 [32];
  undefined2 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  longlong lStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [120];
  longlong lStack_120;
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_208;
  uVar14 = (uint)param_3;
  uVar13 = (uint)param_2;
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)uVar13)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x116bf0) <= (int)uVar14)) {
    pppuStack_58 = (undefined8 ***)0x0;
    uStack_50 = 0;
    plStack_48 = (longlong *)0x0;
    uStack_40 = 0;
    pppuStack_58 = (undefined8 ***)FUN_140071e00(0x20);
    pppuVar4 = _UNK_1417a8810;
    plStack_48 = (longlong *)0x1d;
    uStack_40 = 0x1f;
    *pppuStack_58 = _DAT_1417a8808;
    pppuStack_58[1] = pppuVar4;
    pppuStack_58[2] = _DAT_1417a8818;
    *(undefined4 *)(pppuStack_58 + 3) = _DAT_1417a8820;
    *(undefined1 *)((longlong)pppuStack_58 + 0x1c) = DAT_1417a8824;
    *(undefined1 *)((longlong)pppuStack_58 + 0x1d) = 0;
    FUN_140545610(uVar13,&pppuStack_58);
    FUN_140071040(&pppuStack_58,&UNK_141619364,1);
    FUN_140545610(uVar14,&pppuStack_58);
    FUN_140071040(&pppuStack_58,&UNK_1416039f0,1);
    FUN_140545610(*(int *)(param_1 + 0x116be0) << 4,&pppuStack_58);
    FUN_140071040(&pppuStack_58,&UNK_141619364,1);
    FUN_140545610(*(int *)(param_1 + 0x116be4) << 4,&pppuStack_58);
    if (plStack_48 != (longlong *)0x0) {
      uStack_1c8 = 0x1418be170;
      iVar6 = _Mtx_lock(0x1418be170);
      if (iVar6 != 0) {
        __Throw_Cpp_error_std__YAXH_Z(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (_DAT_1418be1bc == 0x7fffffff) {
        _DAT_1418be1bc = 0x7ffffffe;
        __Throw_Cpp_error_std__YAXH_Z(6);
      }
      FUN_140288040(&lStack_1a8,&UNK_141672020,10);
      if (lStack_120 != 0) {
        lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        if (*(char *)(lVar8 + 0x10) == '\0') {
          func_0x0001415537e0();
        }
        puVar12 = (undefined8 *)(lVar8 + 0x228);
        if (*(longlong *)(lVar8 + 0x238) != 0) {
          if (*(char *)(lVar8 + 0x10) == '\0') {
            func_0x0001415537e0();
          }
          puVar10 = puVar12;
          if (0xf < *(ulonglong *)(lVar8 + 0x240)) {
            puVar10 = (undefined8 *)*puVar12;
          }
          uVar7 = FUN_1400716d0(&lStack_1a8,puVar10);
          __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
                    (uVar7,FUN_1400718b0);
          if (*(char *)(lVar8 + 0x10) == '\0') {
            func_0x0001415537e0();
          }
          *(undefined8 *)(lVar8 + 0x238) = 0;
          if (0xf < *(ulonglong *)(lVar8 + 0x240)) {
            puVar12 = (undefined8 *)*puVar12;
          }
          *(undefined1 *)puVar12 = 0;
        }
        ppppuVar9 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar9 = (undefined8 ****)pppuStack_58;
        }
        uVar7 = FUN_1400716d0(&lStack_1a8,ppppuVar9);
        __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
                  (uVar7,FUN_1400718b0);
      }
      lVar8 = FUN_14014c160(auStack_1a0);
      if (lVar8 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                  (auStack_1a0 + (longlong)*(int *)(lStack_1a8 + 4) + -8,2,0);
      }
      if ((0 < _DAT_1423efc50) && ((*_DAT_1423efc48 & 8) != 0)) {
        uStack_60 = 0;
        ppppuVar9 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar9 = (undefined8 ****)pppuStack_58;
        }
        uStack_1d0 = plStack_48;
        plVar5 = uStack_1d0;
        uStack_1d8._0_4_ = SUB84(ppppuVar9,0);
        uStack_1d8._4_4_ = (undefined4)((ulonglong)ppppuVar9 >> 0x20);
        uStack_1d0._0_4_ = SUB84(plStack_48,0);
        uStack_1d0._4_4_ = (int)((ulonglong)plStack_48 >> 0x20);
        uStack_1b8 = (undefined4)uStack_1d8;
        uStack_1b4 = uStack_1d8._4_4_;
        uStack_1b0 = (undefined4)uStack_1d0;
        iStack_1ac = uStack_1d0._4_4_;
        uStack_1d8 = ppppuVar9;
        uStack_1d0 = plVar5;
        FUN_141429c60(&uStack_1d8,&uStack_1b8,auStack_98);
        plVar5 = uStack_1d0;
        if (uStack_1d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_1d0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*uStack_1d0)(uStack_1d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*uStack_1d0 + 8))();
            }
          }
        }
      }
      *(undefined **)(auStack_1a0 + (longlong)*(int *)(lStack_1a8 + 4) + -8) = &UNK_1416319b8;
      *(int *)((longlong)&iStack_1ac + (longlong)*(int *)(lStack_1a8 + 4)) =
           *(int *)(lStack_1a8 + 4) + -0xa8;
      FUN_14014baf0(auStack_1a0);
      __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_198);
      __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_100);
      _Mtx_unlock(0x1418be170);
    }
    if (0xf < uStack_40) {
      uVar11 = uStack_40 + 1;
      ppppuVar9 = (undefined8 ****)pppuStack_58;
      if (0xfff < uVar11) {
        uVar11 = uStack_40 + 0x28;
        ppppuVar9 = (undefined8 ****)pppuStack_58[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar9))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x0001415530d0(ppppuVar9,uVar11);
    }
  }
  else {
    uStack_1e8 = (undefined2)(uVar14 >> 4);
    FUN_1414ca9a0(param_1,uVar13 >> 4,(short)(uVar13 >> 4));
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_208);
  return;
}

