/* 09d199a00f90e048598ab445c87ec21bd2038abf0009821482624ed897c89bfe 1800383f0..180038797 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800383f0(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_278 [32];
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined1 uStack_238;
  undefined4 uStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  longlong lStack_208;
  undefined8 *****pppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulonglong uStack_1e8;
  undefined *puStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_160;
  undefined *apuStack_158 [2];
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined *puStack_140;
  undefined1 auStack_138 [96];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c0 [104];
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180095200 ^ (ulonglong)auStack_278;
  uStack_228 = 0;
  puStack_218 = (undefined8 *)0x0;
  puStack_210 = (undefined8 *)0x0;
  lStack_208 = 0;
  puVar1 = (undefined2 *)param_4[1];
  ppuStack_220 = param_1;
  for (puVar8 = (undefined2 *)*param_4; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    __0job_item_df__QEAA_AEBU01__Z(apuStack_158,param_3);
    _uStack_148 = CONCAT24(*puVar8,uStack_148);
    puStack_198 = &UNK_18007b628;
    ppuStack_190 = &puStack_218;
    uStack_160 = &puStack_198;
    ppuStack_220 = apuStack_158;
    lVar5 = _getInstance_Core_DFHack__SAAEAV12_XZ();
    puStack_1d8 = &UNK_18007b7e0;
    pppuStack_1d0 = &ppuStack_220;
    ppuStack_1a0 = &puStack_1d8;
    uStack_238 = 1;
    ppuStack_240 = &puStack_198;
    ppuStack_248 = &puStack_1d8;
    uStack_250 = 1;
    uStack_258 = CONCAT44(uStack_258._4_4_,1);
    _CallLuaModuleFunction_Lua_DFHack__YA_NAEAVcolor_ostream_2_PEAUlua_State__PEBD2HH__QEAV__function___A6AXPEAUlua_State___Z_std__3_N_Z
              (param_2,*(undefined8 *)(lVar5 + 0x1558),"plugins.buildingplan","get_desc");
    if (ppuStack_1a0 != (undefined **)0x0) {
      (**(code **)(*ppuStack_1a0 + 0x20))(ppuStack_1a0,ppuStack_1a0 != &puStack_1d8);
    }
    if (uStack_160 != (undefined **)0x0) {
      (**(code **)(*uStack_160 + 0x20))(uStack_160,uStack_160 != &puStack_198);
    }
    __1job_item_df__QEAA_XZ(apuStack_158);
  }
  uStack_1f8 = 0;
  uStack_1f0 = 4;
  uStack_1e8 = 0xf;
  pppppuStack_200 = (undefined8 ******)0x20726f20;
  apuStack_158[0] = &UNK_180079f28;
  _uStack_148 = &UNK_180079f30;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_c0);
  uStack_228 = 4;
  __0__basic_iostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__Z
            (apuStack_158,&puStack_140,0);
  *(undefined **)((longlong)apuStack_158 + (longlong)*(int *)(apuStack_158[0] + 4)) = &UNK_180079f20
  ;
  *(int *)((longlong)apuStack_158 + (longlong)*(int *)(apuStack_158[0] + 4) + -4) =
       *(int *)(apuStack_158[0] + 4) + -0x98;
  __0__basic_streambuf_DU__char_traits_D_std___std__IEAA_XZ(&puStack_140);
  puVar4 = puStack_210;
  puStack_140 = &UNK_180079dd8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  bVar3 = true;
  for (puVar9 = puStack_218; puVar9 != puVar4; puVar9 = puVar9 + 4) {
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ppppppuVar6 = &pppppuStack_200;
      if (0xf < uStack_1e8) {
        ppppppuVar6 = (undefined8 ******)pppppuStack_200;
      }
      FUN_180011dc0(&stack0xfffffffffffffeb8,ppppppuVar6,uStack_1f0);
    }
    puVar7 = puVar9;
    if (0xf < (ulonglong)puVar9[3]) {
      puVar7 = (undefined8 *)*puVar9;
    }
    FUN_180011dc0(&stack0xfffffffffffffeb8,puVar7,puVar9[2]);
  }
  FUN_18003f2e0(&puStack_140,param_1);
  *(undefined **)((longlong)apuStack_158 + (longlong)*(int *)(apuStack_158[0] + 4)) = &UNK_180079f20
  ;
  *(int *)((longlong)apuStack_158 + (longlong)*(int *)(apuStack_158[0] + 4) + -4) =
       *(int *)(apuStack_158[0] + 4) + -0x98;
  FUN_1800265d0(&puStack_140);
  __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_138);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_c0);
  if (0xf < uStack_1e8) {
    if ((0xfff < uStack_1e8 + 1) &&
       (0x1f < (ulonglong)((longlong)pppppuStack_200 + (-8 - (longlong)pppppuStack_200[-1])))) {
      uStack_258 = 0;
      _invoke_watson(0,0,0,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    func_0x0001800717fc();
  }
  puVar4 = puStack_210;
  uStack_1f0 = 0;
  uStack_1e8 = 0xf;
  pppppuStack_200 = (undefined8 *****)((ulonglong)pppppuStack_200 & 0xffffffffffffff00);
  puVar9 = puStack_218;
  if (puStack_218 != (undefined8 *)0x0) {
    for (; puVar9 != puVar4; puVar9 = puVar9 + 4) {
      FUN_180030f40(puVar9);
    }
    puVar9 = puStack_218;
    if ((0xfff < (lStack_208 - (longlong)puStack_218 & 0xffffffffffffffe0U)) &&
       (puVar9 = (undefined8 *)puStack_218[-1],
       0x1f < (ulonglong)((longlong)puStack_218 + (-8 - (longlong)puVar9)))) {
      uStack_258 = 0;
      _invoke_watson(0,0,0,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    func_0x0001800717fc(puVar9);
  }
  FUN_180071d50(uStack_58 ^ (ulonglong)auStack_278);
  return;
}

