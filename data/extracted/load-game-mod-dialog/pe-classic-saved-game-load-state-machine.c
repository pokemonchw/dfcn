/* classic PE:6aea11a5:0272d000; saved-game-load-state-machine; RVA 0x7d3340..0x7d764c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_saved_game_load_state_machine(longlong *param_1)

{
  short *psVar1;
  uint *puVar2;
  undefined2 uVar3;
  int *piVar4;
  byte ******ppppppbVar5;
  byte ****ppppbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  int iVar13;
  char cVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  byte *******pppppppbVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined4 *puVar25;
  undefined8 *******pppppppuVar26;
  byte *******pppppppbVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined8 uVar30;
  short sVar31;
  byte *******pppppppbVar32;
  byte *****pppppbVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  short sVar39;
  uint uVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  byte *******pppppppbVar43;
  longlong *plVar44;
  byte ******ppppppbVar45;
  short sVar46;
  int *piVar47;
  short sVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  int iVar51;
  short sVar52;
  ulonglong uVar53;
  uint uVar54;
  undefined *puVar55;
  longlong *plVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1e8 [32];
  code *pcStack_1c8;
  longlong *plStack_1c0;
  longlong *plStack_1b8;
  int iStack_1a8;
  short sStack_1a4;
  ushort uStack_1a2;
  short sStack_1a0;
  byte ******appppppbStack_198 [4];
  longlong *aplStack_178 [2];
  longlong *plStack_168;
  undefined8 *******pppppppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  byte *******apppppppbStack_108 [4];
  byte *******pppppppbStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined1 auStack_c8 [32];
  char cStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_1e8;
  uVar57 = 0;
  _DAT_1423ac948 = _DAT_1423ac948 & 0xfffffffd;
  aplStack_178[0] = param_1;
  plStack_168 = param_1;
  uVar59 = FUN_1404125f0(0x1418bd5f0,99);
  puVar12 = _DAT_1425041a8;
  puVar7 = _DAT_142504178;
  puVar41 = _DAT_142504130;
  puVar22 = _DAT_1425040e8;
  plVar28 = _DAT_142401450;
  uVar54 = _DAT_1423ac948;
  _DAT_1423ac948 = _DAT_1423ac948 | 1;
  if (0x33 < *(uint *)(param_1 + 0x33)) goto override_jmp_1407d33bf_case_50;
  iVar16 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x33)) {
  case 0:
    plVar28 = param_1 + 0x34;
    param_1[0x58] = 0x142161ac0;
    param_1[0x59] = 20000;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    param_1[0x5b] = 0x14214e230;
    param_1[0x5c] = 80000;
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(param_1[0x35] + 4) + 8 + (longlong)plVar28,0,0);
    lVar29 = _DAT_14265ace8;
    if (0x7fffffffffffffffU - _DAT_14265ace8 < 5) {
      FUN_140066e50();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar55 = &DAT_14265acd8;
    if (0xf < _DAT_14265acf0) {
      puVar55 = _DAT_14265acd8;
    }
    pppppppbStack_e8 = (byte *******)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar57 = _DAT_14265ace8 + 5;
    uVar50 = 0xf;
    pppppppbVar21 = (byte *******)&pppppppbStack_e8;
    if (0xf < uVar57) {
      uVar50 = uVar57 | 0xf;
      if (uVar50 < 0x8000000000000000) {
        if (uVar50 < 0x16) {
          uVar50 = 0x16;
        }
      }
      else {
        uVar50 = 0x7fffffffffffffff;
      }
      pppppppbVar21 = (byte *******)FUN_140071d90(uVar50 + 1);
      pppppppbStack_e8 = pppppppbVar21;
    }
    uStack_d8 = uVar57;
    uStack_d0 = uVar50;
    *(undefined4 *)pppppppbVar21 = 0x65766173;
    *(byte *)((longlong)pppppppbVar21 + 4) = 0x2f;
    load_supplier_0x154f29e((byte *)((longlong)pppppppbVar21 + 5),puVar55,lVar29);
    *(byte *)((longlong)pppppppbVar21 + uVar57) = 0;
    puVar22 = (undefined8 *)FUN_140070fd0(&pppppppbStack_e8,"/world.sav",10);
    pppppppuStack_148 = (undefined8 *******)*puVar22;
    uStack_140 = puVar22[1];
    uStack_138 = puVar22[2];
    uStack_130 = puVar22[3];
    puVar22[2] = 0;
    puVar22[3] = 0xf;
    *(undefined1 *)puVar22 = 0;
    pppppppuStack_128 = &pppppppuStack_148;
    if (0xf < uStack_130) {
      pppppppuStack_128 = pppppppuStack_148;
    }
    uStack_120 = uStack_138;
    uVar59 = FUN_14154c158();
    FUN_140144750(appppppbStack_198,uVar59,&pppppppuStack_128);
    apppppppbStack_108[0] = appppppbStack_198;
    FUN_14014be40(&uStack_78,appppppbStack_198);
    uStack_58 = uStack_58 & 0xffffffffffffff00;
    FUN_14014c1b0(appppppbStack_198);
    FUN_140a660d0(&uStack_78,auStack_c8);
    if (cStack_a8 == '\0') {
      cVar14 = '\0';
    }
    else {
      uVar30 = FUN_1401bcce0(auStack_c8,auStack_a0);
      cVar14 = FUN_140a65c70(plVar28,uVar30,1);
      FUN_140070e10(auStack_a0);
      if (cStack_a8 != '\0') {
        FUN_14014c1b0(auStack_c8);
      }
    }
    FUN_14014c1b0(&uStack_78);
    FUN_140070e10(&pppppppuStack_148);
    FUN_140070e10(&pppppppbStack_e8);
    if (cVar14 == '\0') {
      *(undefined4 *)(param_1 + 0x33) = 0x33;
    }
    else {
      iStack_1a8 = 1;
      if (param_1[0x48] != 0) {
        _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                  (param_1 + 0x35,param_1 + 0xd0,4);
        _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                  (param_1 + 0x35,&iStack_1a8,4);
        *(bool *)plVar28 = iStack_1a8 != 0;
      }
      if (_DAT_142161ab0 < (int)param_1[0xd0]) {
        *(undefined4 *)(param_1 + 0x33) = 0x33;
        FUN_140a65c10(plVar28);
      }
      else {
        FUN_1407cdee0(param_1 + 0xd1,plVar28);
        FUN_1407abc80(param_1 + 0x5d,plVar28,(int)param_1[0xd0]);
        _DAT_142516014 = (undefined4)param_1[0xcf];
        if ((int)param_1[0xd0] < 0x815) {
          plVar28 = param_1 + 0xbd;
          FUN_1400bcea0(plVar28,"vanilla_descriptors_graphics");
          plVar23 = param_1 + 0xc0;
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          plVar44 = param_1 + 0xc3;
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          param_1 = param_1 + 0xcc;
          FUN_1400bcea0(param_1,"50.01");
          plVar56 = aplStack_178[0];
          plVar42 = aplStack_178[0] + 0xc6;
          FUN_1407d7780(plVar42);
          plVar56 = plVar56 + 0xc9;
          FUN_1400bcea0(plVar56,"Vanilla Descriptors Graphics");
          FUN_1400bcea0(plVar28,"vanilla_plants_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          FUN_1400bcea0(param_1,"50.01");
          FUN_1407d7800(plVar42);
          FUN_1400bcea0(plVar56,"Vanilla Plants Graphics");
          FUN_1400bcea0(plVar28,"vanilla_items_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          FUN_1400bcea0(param_1,"50.01");
          FUN_1407d7880(plVar42);
          FUN_1400bcea0(plVar56,"Vanilla Items Graphics");
          FUN_1400bcea0(plVar28,"vanilla_buildings_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          FUN_1400bcea0(param_1,"50.01");
          FUN_1407d7900(plVar42,"data/vanilla/vanilla_buildings_graphics/");
          FUN_1400bcea0(plVar56,"Vanilla Buildings Graphics");
          FUN_1400bcea0(plVar28,"vanilla_creatures_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          FUN_1400bcea0(param_1,"50.01");
          FUN_1407d7900(plVar42,"data/vanilla/vanilla_creatures_graphics/");
          FUN_1400bcea0(plVar56,"Vanilla Creatures Graphics");
          FUN_1400bcea0(plVar28,"vanilla_interactions_graphics");
          appppppbStack_198[0]._0_4_ = 0x13ed;
          load_supplier_0x709d0(plVar23,appppppbStack_198);
          appppppbStack_198[0] = (byte ******)CONCAT44(appppppbStack_198[0]._4_4_,0x1389);
          load_supplier_0x709d0(plVar44,appppppbStack_198);
          FUN_1400bcea0(param_1,"51.01");
          FUN_1407d7990(plVar42);
          FUN_1400bcea0(plVar56,"Vanilla Interactions Graphics");
          param_1 = aplStack_178[0];
        }
        plStack_1b8 = param_1 + 0xcc;
        plStack_1c0 = param_1 + 0xc9;
        pcStack_1c8 = (code *)(param_1 + 0xc6);
        FUN_1407d16f0(&DAT_14265ad80,param_1 + 0xbd,param_1 + 0xc0,param_1 + 0xc3);
        *(undefined4 *)(param_1 + 0x33) = 1;
        *(int *)((longlong)param_1 + 0x19c) = *(int *)((longlong)param_1 + 0x19c) + 1;
        FUN_1411599d0(0x1426b8030);
      }
    }
    goto override_jmp_1407d33bf_case_50;
  case 1:
    if (DAT_142666e7b != '\0') goto override_jmp_1407d33bf_case_50;
    if (_DAT_14265ad88 < (int)(_DAT_14265ade8 - _DAT_14265ade0 >> 3)) {
      if ((DAT_14265ad8c == '\0') && (DAT_14265ad8d == '\0')) {
        load_resolve_compatible_mod(&DAT_14265ad80,0x14265adb0);
      }
      goto override_jmp_1407d33bf_case_50;
    }
    cVar14 = FUN_1414698d0(0x1423ed870,param_1 + 0x5d,(int)param_1[0xd0]);
    if (cVar14 == '\x01') {
      *(undefined4 *)(param_1 + 0x33) = 0x33;
    }
    else {
      _DAT_1423894d8 = (int)param_1[0xd1] + 1;
      _DAT_14214ddd4 = *(int *)((longlong)param_1 + 0x68c) + 1;
      _DAT_142389d48 = (int)param_1[0xd2] + 1;
      _DAT_142389d10 = *(int *)((longlong)param_1 + 0x694) + 1;
      _DAT_1423a2414 = (int)param_1[0xd3] + 1;
      _DAT_14214dd88 = *(int *)((longlong)param_1 + 0x69c) + 1;
      _DAT_1423a422c = (int)param_1[0xd4] + 1;
      _DAT_142389d3c = *(int *)((longlong)param_1 + 0x6a4) + 1;
      _DAT_142389d08 = (int)param_1[0xd5] + 1;
      _DAT_14214e20c = *(int *)((longlong)param_1 + 0x6ac) + 1;
      _DAT_1423a240c = (int)param_1[0xd6] + 1;
      _DAT_1423894c4 = *(int *)((longlong)param_1 + 0x6b4) + 1;
      _DAT_1423894d4 = (int)param_1[0xd7] + 1;
      _DAT_14214dd90 = *(int *)((longlong)param_1 + 0x6bc) + 1;
      _DAT_1423a2404 = (int)param_1[0xd8] + 1;
      _DAT_142389d40 = *(int *)((longlong)param_1 + 0x6c4) + 1;
      _DAT_14214dd94 = (int)param_1[0xd9] + 1;
      _DAT_1423a4220 = *(int *)((longlong)param_1 + 0x6cc) + 1;
      _DAT_142389d20 = (int)param_1[0xda] + 1;
      _DAT_14214ddcc = *(int *)((longlong)param_1 + 0x6d4) + 1;
      _DAT_14214e218 = (int)param_1[0xdb] + 1;
      _DAT_14214dd8c = *(int *)((longlong)param_1 + 0x6dc) + 1;
      _DAT_142389d04 = (int)param_1[0xdc] + 1;
      _DAT_1423894d0 = *(int *)((longlong)param_1 + 0x6e4) + 1;
      _DAT_14238eb70 = (int)param_1[0xdd] + 1;
      _DAT_141bcf92c = *(int *)((longlong)param_1 + 0x6ec) + 1;
      _DAT_142389d00 = (int)param_1[0xde] + 1;
      _DAT_141bcf920 = *(int *)((longlong)param_1 + 0x6f4) + 1;
      _DAT_142161ab4 = (int)param_1[0xdf] + 1;
      _DAT_141bcf924 = *(int *)((longlong)param_1 + 0x6fc) + 1;
      _DAT_1423a4248 = (int)param_1[0xe0] + 1;
      _DAT_1421668e0 = *(int *)((longlong)param_1 + 0x704) + 1;
      _DAT_1423a2408 = (int)param_1[0xe1] + 1;
      _DAT_14238eb74 = *(int *)((longlong)param_1 + 0x70c) + 1;
      _DAT_14214e208 = (int)param_1[0xe2] + 1;
      _DAT_14214ddc8 = *(int *)((longlong)param_1 + 0x714) + 1;
      _DAT_142389d18 = (int)param_1[0xe3] + 1;
      _DAT_14214dddc = *(int *)((longlong)param_1 + 0x71c) + 1;
      _DAT_14214e210 = (int)param_1[0xe4] + 1;
      _DAT_14214dd98 = *(int *)((longlong)param_1 + 0x724) + 1;
      _DAT_14214dd84 = (int)param_1[0xe5] + 1;
      if (_DAT_14265ad80 != 0x3a) goto override_jmp_1407d33bf_case_50;
      *(undefined4 *)(param_1 + 0x33) = 2;
    }
    break;
  case 2:
    FUN_1407b0ae0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 3;
    break;
  case 3:
    FUN_1407b6320(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 4;
    break;
  case 4:
    FUN_1407b94a0(param_1 + 0x34,(int)param_1[0xd0],1);
    *(undefined4 *)(param_1 + 0x33) = 5;
    break;
  case 5:
    FUN_1407b9b30(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 6;
    break;
  case 6:
    FUN_1407b9540(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 7;
    break;
  case 7:
    FUN_1407ba790(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 8;
    break;
  case 8:
    FUN_1407bc670(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 9;
    break;
  case 9:
    FUN_1407bc700(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 10;
    break;
  case 10:
    FUN_1414e71e0(uVar59,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xb;
    break;
  case 0xb:
    FUN_1407be280(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0xc;
    break;
  case 0xc:
    FUN_1407bf0c0(param_1 + 0x34,0,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xd;
    break;
  case 0xd:
    FUN_1407bf160(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0xe;
    break;
  case 0xe:
    FUN_1407bfe10(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xf;
    break;
  case 0xf:
    FUN_1407c0850(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x10;
    break;
  case 0x10:
    FUN_1407c08c0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x11;
    break;
  case 0x11:
    FUN_1407c0980(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x12;
    break;
  case 0x12:
    FUN_1407c0c50(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x13;
    break;
  case 0x13:
    FUN_1407a2350(&DAT_1424ffb40,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x14;
    break;
  case 0x14:
    FUN_1407a2470(0x1424ffb70,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x15;
    break;
  case 0x15:
    FUN_1407a2f30(0x1424ffba0,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x16;
    break;
  case 0x16:
    FUN_14079f6d0(0x142504008,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x17;
    break;
  case 0x17:
    FUN_14079f210(0x142504038,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x18;
    break;
  case 0x18:
    FUN_1407a04e0(0x142504068,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x19;
    break;
  case 0x19:
    FUN_1407a1f50(0x142504098,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x1a;
    break;
  case 0x1a:
    for (puVar41 = _DAT_1425040e0; puVar41 < puVar22; puVar41 = puVar41 + 1) {
      FUN_1404ee5e0(*puVar41,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1b;
    break;
  case 0x1b:
    for (puVar22 = _DAT_142504128; puVar22 < puVar41; puVar22 = puVar22 + 1) {
      FUN_1407a1400(*puVar22,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1c;
    break;
  case 0x1c:
    for (puVar22 = _DAT_142504170; puVar22 < puVar7; puVar22 = puVar22 + 1) {
      FUN_140123450(*puVar22,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1d;
    break;
  case 0x1d:
    lVar29 = param_1[0xd0];
    for (puVar22 = _DAT_1425041a0; puVar22 < puVar12; puVar22 = puVar22 + 1) {
      FUN_140141030(*puVar22,param_1 + 0x34,0,(int)lVar29);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1e;
    break;
  case 0x1e:
    FUN_1407a0580(0x1425041b8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x1f;
    break;
  case 0x1f:
    FUN_1407a43c0(0x1425041e8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x20;
    break;
  case 0x20:
    FUN_14079f930(0x142504218,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x21;
    break;
  case 0x21:
    FUN_14079efb0(0x142504248,param_1 + 0x34);
    FUN_14079f0d0(0x142504278,param_1 + 0x34);
    FUN_14079f170(0x1425042a8,param_1 + 0x34);
    FUN_14079ed90(0x1425042d8,param_1 + 0x34);
    FUN_14079ef10(0x142504308,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x22;
    break;
  case 0x22:
    FUN_1407a2670(&DAT_142504338,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x23;
    break;
  case 0x23:
    FUN_1407a0230(0x142504368,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x24;
    break;
  case 0x24:
    FUN_14079fe00(0x142504398,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x25;
    break;
  case 0x25:
    FUN_1407a00c0(0x1425043c8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x26;
    break;
  case 0x26:
    FUN_1407c10f0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x27;
    break;
  case 0x27:
    FUN_1407c5f00(0x1423ad5b0,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x28;
    break;
  case 0x28:
    FUN_14148f560(0x1423ed870,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x29;
    break;
  case 0x29:
    FUN_1407c84b0(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x2a;
    break;
  case 0x2a:
    FUN_1407c83d0(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x2b;
    break;
  case 0x2b:
    FUN_1407c90a0(0x14265cef0,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x2c;
    break;
  case 0x2c:
    FUN_1407b4710(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x2d;
    break;
  case 0x2d:
    FUN_140a65c10(param_1 + 0x34);
    _DAT_1418b8218 = (uint)*(short *)((longlong)param_1 + 0x72c);
    if (_DAT_1418b8218 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(*(short *)((longlong)param_1 + 0x72c)) {
      case 0:
        goto override_jmp_1407d4407_case_0;
      case 1:
        _DAT_1418b821c = 1;
      }
    }
    else {
override_jmp_1407d4407_case_0:
      _DAT_1418b821c = 0;
    }
    cVar14 = load_supplier_0x73550(0x1423ad008,0xd);
    if (cVar14 != '\0') {
      DAT_1418f31a6 = 1;
    }
    *(undefined4 *)(param_1 + 0x33) = 0x2e;
    break;
  case 0x2e:
    FUN_141454180(0x1423ed870,(int)param_1[0xd0],1);
    *(undefined4 *)(param_1 + 0x33) = 0x2f;
    break;
  case 0x2f:
    uVar50 = uVar57;
    if (_DAT_1418b821c == 1) {
      _DAT_1426658b4 = 0;
      _DAT_1426665d0 = _DAT_142161ab8;
      _DAT_1426665d4 = _DAT_1423a424c;
      _DAT_1426665d8 = _DAT_14214e21c;
      _DAT_142660068 = _DAT_142660068 & 0xfffeffff;
      DAT_1426658b8 = 0;
      _DAT_142665848 = 0;
      if (((longlong)_DAT_142401450 - (longlong)_DAT_142401448 >> 3 == 0) || (_DAT_142401490 == 0))
      {
        _DAT_142401490 = 0;
      }
      else {
        _DAT_142401490 = *_DAT_142401448;
        if (_DAT_142401490 != 0) {
          uVar54 = _DAT_142660064;
          for (puVar22 = *(undefined8 **)(_DAT_142401490 + 2000);
              puVar22 != *(undefined8 **)(_DAT_142401490 + 0x7d8); puVar22 = puVar22 + 1) {
            if (*(int *)*puVar22 != -1) {
              uVar54 = uVar54 | 1;
              _DAT_142660064 = uVar54;
            }
          }
        }
      }
      iVar18 = (int)(_DAT_142401500 - _DAT_1424014f8 >> 3) + -1;
      lVar29 = (longlong)iVar18;
      if (-1 < iVar18) {
        do {
          lVar24 = *(longlong *)(_DAT_1424014f8 + lVar29 * 8);
          if ((0 < *(int *)(lVar24 + 0x60)) && ((**(byte **)(lVar24 + 0x58) & 1) != 0)) {
            _DAT_142401490 =
                 *(longlong *)(*(longlong *)(_DAT_1424014f8 + (longlong)iVar18 * 8) + 0x18);
            _DAT_142665848 = iVar18;
            break;
          }
          iVar18 = iVar18 + -1;
          lVar29 = lVar29 + -1;
        } while (-1 < lVar29);
      }
      FUN_1400e0b00(0x1418c4380,0x1418c5288,0);
    }
LAB_1407d45a0:
    iVar18 = (int)uVar50;
    if ((ulonglong)(longlong)iVar18 <
        (ulonglong)((longlong)_DAT_142401450 - (longlong)_DAT_142401448 >> 3)) {
      pppppppbVar21 = (byte *******)_DAT_142401448[iVar18];
      if (((ulonglong)pppppppbVar21[0x22] & 0x200) != 0) {
        if (_DAT_142401468 == _DAT_142401470) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc2f0(&DAT_142401460,_DAT_142401468,apppppppbStack_108);
        }
        else {
          *_DAT_142401468 = (longlong)pppppppbVar21;
          _DAT_142401468 = _DAT_142401468 + 1;
          apppppppbStack_108[0] = pppppppbVar21;
        }
      }
      uVar50 = uVar57;
      if (*(short *)(pppppppbVar21 + 0x14) == 0x68) {
        if (_DAT_142401480 == _DAT_142401488) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc2f0(0x142401478,_DAT_142401480,apppppppbStack_108);
        }
        else {
          *_DAT_142401480 = pppppppbVar21;
          _DAT_142401480 = _DAT_142401480 + 1;
          apppppppbStack_108[0] = pppppppbVar21;
        }
      }
LAB_1407d4660:
      do {
        iVar17 = (int)uVar50;
        if ((ulonglong)((longlong)pppppppbVar21[0x164] - (longlong)pppppppbVar21[0x163] >> 4) <=
            (ulonglong)(longlong)iVar17) goto LAB_1407d4843;
        iVar36 = *(int *)((longlong)pppppppbVar21[0x163][(longlong)iVar17 * 2] + 0x14);
        if ((iVar36 != -1) && (iVar35 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar35 != 0)) {
          iVar35 = iVar35 + -1;
          uVar37 = uVar57;
          uVar50 = uVar57;
          if (-1 < iVar35) {
            do {
              iVar51 = (int)uVar37 + iVar35 >> 1;
              uVar50 = *(ulonglong *)(_DAT_1424017d0 + (longlong)iVar51 * 8);
              iVar34 = *(int *)(uVar50 + 0x1c);
              if (iVar34 == iVar36) break;
              iVar13 = iVar51 + -1;
              if (iVar34 < iVar36) {
                uVar37 = (ulonglong)(iVar51 + 1);
                iVar13 = iVar35;
              }
              iVar35 = iVar13;
              uVar50 = uVar57;
            } while ((int)uVar37 <= iVar35);
          }
          if (uVar50 != 0) {
            ppppppbVar45 = (byte ******)pppppppbVar21[0x163][(longlong)iVar17 * 2];
            apppppppbStack_108[0] = (byte *******)FUN_14154de30(0x18);
            *(undefined4 *)apppppppbStack_108[0] = 0xb;
            apppppppbStack_108[0][1] = (byte ******)pppppppbVar21;
            apppppppbStack_108[0][2] = ppppppbVar45;
            puVar22 = *(undefined8 **)(uVar50 + 0x28);
            if (puVar22 == *(undefined8 **)(uVar50 + 0x30)) {
              FUN_1400bc2f0(uVar50 + 0x20,puVar22,apppppppbStack_108);
            }
            else {
              *puVar22 = apppppppbStack_108[0];
              *(longlong *)(uVar50 + 0x28) = *(longlong *)(uVar50 + 0x28) + 8;
            }
          }
        }
        iVar36 = *(int *)(pppppppbVar21[0x163][(longlong)iVar17 * 2] + 3);
        if ((iVar36 != -1) && (iVar35 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar35 != 0)) {
          iVar35 = iVar35 + -1;
          uVar37 = uVar57;
          uVar50 = uVar57;
          if (-1 < iVar35) {
            do {
              iVar51 = (int)uVar37 + iVar35 >> 1;
              uVar50 = *(ulonglong *)(_DAT_1424017d0 + (longlong)iVar51 * 8);
              iVar34 = *(int *)(uVar50 + 0x1c);
              if (iVar34 == iVar36) break;
              iVar13 = iVar51 + -1;
              if (iVar34 < iVar36) {
                uVar37 = (ulonglong)(iVar51 + 1);
                iVar13 = iVar35;
              }
              iVar35 = iVar13;
              uVar50 = uVar57;
            } while ((int)uVar37 <= iVar35);
          }
          if (uVar50 != 0) {
            ppppppbVar45 = (byte ******)pppppppbVar21[0x163][(longlong)iVar17 * 2];
            apppppppbStack_108[0] = (byte *******)FUN_14154de30(0x18);
            *(undefined4 *)apppppppbStack_108[0] = 0xb;
            apppppppbStack_108[0][1] = (byte ******)pppppppbVar21;
            apppppppbStack_108[0][2] = ppppppbVar45;
            puVar22 = *(undefined8 **)(uVar50 + 0x28);
            if (puVar22 != *(undefined8 **)(uVar50 + 0x30)) {
              *puVar22 = apppppppbStack_108[0];
              *(longlong *)(uVar50 + 0x28) = *(longlong *)(uVar50 + 0x28) + 8;
              uVar50 = (ulonglong)(iVar17 + 1);
              goto LAB_1407d4660;
            }
            FUN_1400bc2f0(uVar50 + 0x20,puVar22,apppppppbStack_108);
          }
        }
        uVar50 = (ulonglong)(iVar17 + 1);
      } while( true );
    }
    uVar50 = _DAT_1426b7f28 - _DAT_1426b7f20 >> 3;
    while( true ) {
      uVar54 = (int)uVar50 - 1;
      uVar50 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      lVar29 = *(longlong *)(_DAT_1426b7f20 + (longlong)(int)uVar54 * 8);
      sVar48 = *(short *)(lVar29 + 0xe);
      sVar39 = *(short *)(lVar29 + 0xc);
      sVar46 = *(short *)(lVar29 + 10);
      if (((((sVar46 < 0) || (_DAT_14250445c <= sVar46)) || (sVar39 < 0)) ||
          ((_DAT_142504460 <= sVar39 || (sVar48 < 0)))) || (_DAT_142504464 <= sVar48)) {
LAB_1407d48e5:
        lVar29 = 0x142522488;
      }
      else {
        if ((_DAT_142504428 == 0) ||
           (lVar29 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_142504428 + (longlong)(sVar46 >> 4) * 8) +
                        (longlong)(sVar39 >> 4) * 8) + (longlong)sVar48 * 8), lVar29 == 0))
        goto LAB_1407d48e5;
        lVar29 = lVar29 + 0x68;
      }
      if (*(undefined8 **)(lVar29 + 8) == *(undefined8 **)(lVar29 + 0x10)) {
        FUN_140072190();
      }
      else {
        **(undefined8 **)(lVar29 + 8) = *(undefined8 *)(_DAT_1426b7f20 + (longlong)(int)uVar54 * 8);
        *(longlong *)(lVar29 + 8) = *(longlong *)(lVar29 + 8) + 8;
      }
    }
    _DAT_142508c28 = 0xffffffff;
    _DAT_142508c2c = _DAT_142508c2c | 1;
    uVar50 = uVar57;
    uVar37 = uVar57;
    if (_DAT_142504418 - _DAT_142504410 >> 3 != 0) {
      do {
        *(undefined4 *)(*(longlong *)(_DAT_142504410 + uVar50) + 0x80) = 0xffffffff;
        puVar2 = (uint *)(*(longlong *)(_DAT_142504410 + uVar50) + 0x84);
        *puVar2 = *puVar2 | 1;
        uVar54 = (int)uVar37 + 1;
        uVar50 = uVar50 + 8;
        uVar37 = (ulonglong)uVar54;
      } while ((ulonglong)(longlong)(int)uVar54 < (ulonglong)(_DAT_142504418 - _DAT_142504410 >> 3))
      ;
    }
    uVar50 = _DAT_1423b3b60 - _DAT_1423b3b58 >> 3;
    plVar28 = _DAT_142401430;
    while( true ) {
      uVar54 = (int)uVar50 - 1;
      uVar50 = (ulonglong)uVar54;
      uVar37 = uVar57;
      if ((int)uVar54 < 0) break;
      puVar25 = *(undefined4 **)(_DAT_1423b3b58 + (longlong)(int)uVar54 * 8);
      uVar37 = *(longlong *)(puVar25 + 0x20) - *(longlong *)(puVar25 + 0x1e) >> 2;
      while( true ) {
        uVar54 = (int)uVar37 - 1;
        uVar37 = (ulonglong)uVar54;
        if ((int)uVar54 < 0) break;
        iVar18 = *(int *)(*(longlong *)(puVar25 + 0x1e) + (longlong)(int)uVar54 * 4);
        iVar17 = (int)((longlong)_DAT_142401438 - (longlong)plVar28 >> 3);
        if ((iVar17 != 0) && (iVar18 != -1)) {
          iVar17 = iVar17 + -1;
          uVar49 = uVar57;
          iVar36 = iVar16;
          if (-1 < iVar17) {
            do {
              iVar34 = iVar36 + iVar17 >> 1;
              iVar35 = *(int *)(plVar28[iVar34] + 0x130);
              uVar49 = plVar28[iVar34];
              if (iVar35 == iVar18) break;
              iVar51 = iVar34 + -1;
              if (iVar35 < iVar18) {
                iVar51 = iVar17;
                iVar36 = iVar34 + 1;
              }
              iVar17 = iVar51;
              uVar49 = uVar57;
            } while (iVar36 <= iVar17);
          }
          if (uVar49 != 0) {
            if ((*(byte *)(puVar25 + 0x24) & 2) == 0) {
              FUN_1400bb430(*puVar25);
              plVar28 = _DAT_142401430;
            }
            else {
              FUN_1400bb430(*puVar25);
              plVar28 = _DAT_142401430;
            }
          }
        }
      }
    }
    while( true ) {
      iVar18 = (int)uVar37;
      uVar37 = (ulonglong)iVar18;
      lVar29 = _DAT_142402490;
      uVar50 = uVar57;
      if ((ulonglong)(_DAT_14240a2b0 - _DAT_14240a2a8 >> 3) <= uVar37) break;
      plVar28 = *(longlong **)(_DAT_14240a2a8 + uVar37 * 8);
      (**(code **)(*plVar28 + 0x208))(plVar28,0);
      iVar17 = (**(code **)(**(longlong **)(_DAT_14240a2a8 + uVar37 * 8) + 0xd0))();
      if (iVar17 == 0x1e) {
        pppppppbVar21 = *(byte ********)(_DAT_14240a2a8 + uVar37 * 8);
        if ((*(int *)(pppppppbVar21 + 0x34) == -1) ||
           (lVar29 = FUN_14014f180(&DAT_142401430,*(int *)(pppppppbVar21 + 0x34),
                                   (byte *)((longlong)pppppppbVar21 + 0x1a4)), lVar29 == 0))
        goto LAB_1407d4c2b;
        for (puVar22 = *(undefined8 **)(lVar29 + 0x450); apppppppbStack_108[0] = pppppppbVar21,
            puVar22 != *(undefined8 **)(lVar29 + 0x458); puVar22 = puVar22 + 1) {
          if ((byte *******)*puVar22 == pppppppbVar21) goto LAB_1407d4b57;
        }
        puVar22 = *(undefined8 **)(lVar29 + 0x458);
        if (puVar22 == *(undefined8 **)(lVar29 + 0x460)) {
          FUN_1400bc2f0(lVar29 + 0x450,puVar22,apppppppbStack_108);
        }
        else {
          *puVar22 = pppppppbVar21;
          *(longlong *)(lVar29 + 0x458) = *(longlong *)(lVar29 + 0x458) + 8;
        }
LAB_1407d4b57:
        iVar17 = *(int *)(lVar29 + 0x3c0);
        if (iVar17 == -1) goto LAB_1407d4c2b;
        iVar36 = (int)((longlong)_DAT_142401438 - (longlong)_DAT_142401430 >> 3);
        if ((iVar36 != 0) && (iVar36 = iVar36 + -1, iVar35 = iVar16, -1 < iVar36)) {
          do {
            iVar51 = iVar35 + iVar36 >> 1;
            iVar34 = *(int *)(_DAT_142401430[iVar51] + 0x130);
            uVar50 = _DAT_142401430[iVar51];
            if (iVar34 == iVar17) break;
            iVar13 = iVar51 + -1;
            if (iVar34 < iVar17) {
              iVar13 = iVar36;
              iVar35 = iVar51 + 1;
            }
            iVar36 = iVar13;
            uVar50 = uVar57;
          } while (iVar35 <= iVar36);
        }
        if ((uVar50 == 0) ||
           (cVar14 = (*(code *)(*pppppppbVar21)[0x39])(pppppppbVar21), cVar14 == '\0'))
        goto LAB_1407d4c2b;
        for (puVar22 = *(undefined8 **)(uVar50 + 0x450); puVar22 != *(undefined8 **)(uVar50 + 0x458)
            ; puVar22 = puVar22 + 1) {
          apppppppbStack_108[0] = pppppppbVar21;
          if ((byte *******)*puVar22 == pppppppbVar21) goto LAB_1407d4c2b;
        }
        puVar22 = *(undefined8 **)(uVar50 + 0x458);
        if (puVar22 == *(undefined8 **)(uVar50 + 0x460)) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc2f0(uVar50 + 0x450,puVar22,apppppppbStack_108);
          goto LAB_1407d4c2b;
        }
        *puVar22 = pppppppbVar21;
        *(longlong *)(uVar50 + 0x458) = *(longlong *)(uVar50 + 0x458) + 8;
        uVar37 = (ulonglong)(iVar18 + 1);
        apppppppbStack_108[0] = pppppppbVar21;
      }
      else {
LAB_1407d4c2b:
        uVar37 = (ulonglong)(iVar18 + 1);
      }
    }
    while( true ) {
      iVar18 = (int)uVar50;
      plVar28 = _DAT_1424017e8;
      uVar50 = uVar57;
      if ((ulonglong)(_DAT_142402498 - lVar29 >> 3) <= (ulonglong)(longlong)iVar18) break;
      plVar28 = *(longlong **)(lVar29 + (longlong)iVar18 * 8);
      if ((*(uint *)(plVar28 + 2) & 0x20000) == 0) {
        (**(code **)(*plVar28 + 0x460))();
        lVar29 = _DAT_142402490;
      }
      uVar50 = (ulonglong)(iVar18 + 1);
    }
    while( true ) {
      puVar22 = _DAT_142504100;
      iVar18 = (int)uVar50;
      puVar41 = _DAT_1425040f8;
      if ((ulonglong)((longlong)_DAT_1424017f0 - (longlong)plVar28 >> 3) <=
          (ulonglong)(longlong)iVar18) break;
      plVar23 = (longlong *)plVar28[iVar18];
      if ((*(uint *)(plVar23 + 2) & 0x20000) == 0) {
        (**(code **)(*plVar23 + 0x328))(plVar23,0);
        plVar28 = _DAT_1424017e8;
      }
      uVar50 = (ulonglong)(iVar18 + 1);
    }
    for (; puVar41 != puVar22; puVar41 = puVar41 + 1) {
      if (*(int *)*puVar41 != 0) {
        FUN_14013e330((int *)*puVar41,0x142504110);
      }
    }
    FUN_1414a0ae0(0x1423ed870);
    DAT_1423b657e = 0;
    FUN_141106ca0(0x14240b4e8);
    _DAT_14240b478 = 0x101;
    DAT_14252247c = 1;
    iVar18 = (int)(_DAT_142504418 - _DAT_142504410 >> 3) + -1;
    lVar29 = (longlong)iVar18;
    if (-1 < iVar18) {
      do {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        load_supplier_0x153d280(*(longlong *)(_DAT_142504410 + lVar29 * 8) + 0xba0,&uStack_78);
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    _DAT_14265acbc = 1;
    DAT_1418c9581 = 1;
    _DAT_14265b450 = 0;
    DAT_14265b658 = 1;
    plVar23 = _DAT_142401430;
    plVar28 = _DAT_142401438;
    if (_DAT_1418b821c == 0) {
      FUN_140e811d0();
      plVar23 = _DAT_142401430;
      plVar28 = _DAT_142401438;
    }
    for (; plVar44 = _DAT_142504340, plVar42 = _DAT_142504338, plVar23 < plVar28;
        plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if (*(longlong *)(lVar29 + 0x13d0) != *(longlong *)(lVar29 + 0x13d8)) {
        *(longlong *)(lVar29 + 0x13d8) = *(longlong *)(lVar29 + 0x13d0);
      }
    }
LAB_1407d4df7:
    do {
      if (plVar44 <= plVar42) {
        plVar23 = *(longlong **)(_DAT_142507ed8 + 0x210);
        plVar44 = _DAT_1424017e8;
        for (plVar28 = *(longlong **)(_DAT_142507ed8 + 0x208); plVar28 < plVar23;
            plVar28 = plVar28 + 1) {
          lVar29 = *plVar28;
          uVar50 = *(longlong *)(lVar29 + 0x28) - *(longlong *)(lVar29 + 0x20) >> 3;
          while( true ) {
            uVar54 = (int)uVar50 - 1;
            uVar50 = (ulonglong)uVar54;
            if ((int)uVar54 < 0) break;
            lVar24 = **(longlong **)(*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar54 * 8);
            if (lVar24 != 0) {
              iVar16 = *(int *)(lVar24 + 0x1c);
              uVar37 = (longlong)_DAT_1424017f0 - (longlong)plVar44 >> 3;
              uVar40 = (uint)uVar37;
              uVar49 = uVar57;
              if (uVar40 == 0) {
                iVar18 = -1;
                uVar49 = 0xffffffff;
              }
              else {
                while (uVar19 = (uint)uVar49, 0x40 < (int)uVar40) {
                  uVar40 = (uint)(uVar37 >> 1) & 0x7fffffff;
                  uVar20 = uVar40 + uVar19;
                  if (iVar16 < *(int *)(plVar44[(int)uVar20] + 0x1c)) {
                    uVar20 = uVar19;
                  }
                  uVar40 = (int)uVar37 - uVar40;
                  uVar37 = (ulonglong)uVar40;
                  uVar49 = (ulonglong)uVar20;
                }
                iVar18 = uVar19 + uVar40;
              }
              if (iVar18 != -1) {
                for (lVar24 = (longlong)(int)uVar49; lVar24 < iVar18; lVar24 = lVar24 + 1) {
                  iVar17 = (int)uVar49;
                  if (iVar16 == *(int *)(plVar44[lVar24] + 0x1c)) goto LAB_1407d4fca;
                  uVar49 = (ulonglong)(iVar17 + 1);
                }
              }
              iVar17 = -1;
LAB_1407d4fca:
              if (iVar17 != -1) {
                pppppppuStack_128 = (undefined8 *******)0x0;
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                pppppppuStack_128 = (undefined8 *******)FUN_140071d90(0x40);
                uStack_118 = 0x37;
                uStack_110 = 0x3f;
                *pppppppuStack_128 = (undefined8 ******)0x676e696863746170;
                pppppppuStack_128[1] = (undefined8 ******)0x74707572726f6320;
                *(undefined4 *)(pppppppuStack_128 + 2) = 0x3a6e6f69;
                *(undefined4 *)((longlong)pppppppuStack_128 + 0x14) = 0x65746920;
                *(undefined4 *)(pppppppuStack_128 + 3) = 0x666f206d;
                *(undefined4 *)((longlong)pppppppuStack_128 + 0x1c) = 0x6f6c2d66;
                pppppppuStack_128[4] = (undefined8 ******)0x646e612064656461;
                pppppppuStack_128[5] = (undefined8 ******)0x6e69206f736c6120;
                *(undefined4 *)(pppppppuStack_128 + 6) = 0x616c7020;
                *(undefined2 *)((longlong)pppppppuStack_128 + 0x34) = 0x3a79;
                *(undefined1 *)((longlong)pppppppuStack_128 + 0x36) = 0x20;
                *(undefined1 *)((longlong)pppppppuStack_128 + 0x37) = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                uStack_130 = 0xf;
                pppppppuStack_148 = (undefined8 *******)0x0;
                FUN_140c79f60(**(undefined8 **)
                                (*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar54 * 8),
                              &pppppppuStack_148,0,0xffffffff);
                pppppppuVar26 = &pppppppuStack_148;
                if (0xf < uStack_130) {
                  pppppppuVar26 = pppppppuStack_148;
                }
                FUN_140070fd0(&pppppppuStack_128,pppppppuVar26,uStack_138);
                FUN_140542930(&pppppppuStack_128);
                load_supplier_0x154de20
                          (*(undefined8 *)(*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar54 * 8)
                           ,0x20);
                load_supplier_0x154f5ba();
                *(longlong *)(lVar29 + 0x28) = *(longlong *)(lVar29 + 0x28) + -8;
                if (0xf < uStack_130) {
                  uVar37 = uStack_130 + 1;
                  pppppppuVar26 = pppppppuStack_148;
                  if (0xfff < uVar37) {
                    uVar37 = uStack_130 + 0x28;
                    pppppppuVar26 = (undefined8 *******)pppppppuStack_148[-1];
                    if (0x1f < (ulonglong)
                               ((longlong)pppppppuStack_148 + (-8 - (longlong)pppppppuVar26))) {
                      _invalid_parameter_noinfo_noreturn();
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                  }
                  load_supplier_0x154de20(pppppppuVar26,uVar37);
                }
                uStack_138 = 0;
                uStack_130 = 0xf;
                pppppppuStack_148 =
                     (undefined8 *******)((ulonglong)pppppppuStack_148 & 0xffffffffffffff00);
                FUN_140070e10(&pppppppuStack_128);
                plVar44 = _DAT_1424017e8;
              }
            }
          }
        }
        FUN_140ec9460();
        *(undefined4 *)(aplStack_178[0] + 0x33) = 0x30;
        *(int *)((longlong)aplStack_178[0] + 0x19c) =
             *(int *)((longlong)aplStack_178[0] + 0x19c) + 1;
        goto override_jmp_1407d33bf_case_50;
      }
      iVar18 = *(int *)(*plVar42 + 0xc);
      if ((iVar18 != -1) &&
         (iVar17 = (int)((longlong)_DAT_142401438 - (longlong)_DAT_142401430 >> 3), iVar17 != 0)) {
        iVar17 = iVar17 + -1;
        uVar50 = uVar57;
        iVar36 = iVar16;
        if (-1 < iVar17) {
          do {
            iVar34 = iVar36 + iVar17 >> 1;
            iVar35 = *(int *)(_DAT_142401430[iVar34] + 0x130);
            uVar50 = _DAT_142401430[iVar34];
            if (iVar35 == iVar18) break;
            iVar51 = iVar34 + -1;
            if (iVar35 < iVar18) {
              iVar51 = iVar17;
              iVar36 = iVar34 + 1;
            }
            iVar17 = iVar51;
            uVar50 = uVar57;
          } while (iVar36 <= iVar17);
        }
        if (uVar50 != 0) {
          if (*(longlong **)(uVar50 + 0x13d8) == *(longlong **)(uVar50 + 0x13e0)) {
            FUN_1400bc2f0();
          }
          else {
            **(longlong **)(uVar50 + 0x13d8) = *plVar42;
            *(longlong *)(uVar50 + 0x13d8) = *(longlong *)(uVar50 + 0x13d8) + 8;
          }
        }
      }
      lVar29 = *plVar42;
      if (((*(int *)(lVar29 + 0x14) != -1) && (lVar24 = FUN_14007f0e0(_DAT_142507ed8), lVar24 != 0))
         && (lVar24 = FUN_1400714c0(*(undefined4 *)(lVar29 + 0x10),lVar24 + 0x2b0), lVar24 != 0)) {
        if (*(longlong **)(lVar24 + 0xa8) != *(longlong **)(lVar24 + 0xb0)) {
          **(longlong **)(lVar24 + 0xa8) = lVar29;
          *(longlong *)(lVar24 + 0xa8) = *(longlong *)(lVar24 + 0xa8) + 8;
          plVar42 = plVar42 + 1;
          goto LAB_1407d4df7;
        }
        FUN_1400bc2f0();
      }
      plVar42 = plVar42 + 1;
    } while( true );
  case 0x30:
    _DAT_1423ac948 = uVar54 & 0xfffffffb | 1;
    if (10 < _DAT_1418b8218) {
override_jmp_1407d51e2_case_2:
      *(undefined4 *)(param_1 + 0x33) = 0x33;
      goto override_jmp_1407d33bf_case_50;
    }
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_1418b8218) {
    case 0:
      lVar29 = FUN_1407d0760(CONCAT71((int7)((ulonglong)
                                             (IMAGE_DOS_HEADER_140000000.e_magic +
                                             *(uint *)(&UNK_1407d7748 +
                                                      (longlong)(int)_DAT_1418b8218 * 4)) >> 8),1));
      FUN_141428f20(param_1 + 4,lVar29 + 0x20);
      FUN_140069710(&pppppppuStack_148,"** Loading Fortress **");
      FUN_140542bb0(&pppppppuStack_148);
      if (_DAT_1418b8218 == 4) {
        FUN_1414e9340(0x14265b660);
      }
      else if ((_DAT_1426b1ed0 & 4) == 0) {
        _DAT_1426b1ed0 = _DAT_1426b1ed0 | 4;
        _DAT_1426b1e1c = GetTickCount();
      }
      break;
    case 1:
      lVar29 = FUN_1407fd5c0(0,3);
      FUN_141428f20(param_1 + 4,lVar29 + 0x20);
      FUN_140069710(&pppppppuStack_148,"** Loading Adventurer **");
      FUN_140542bb0(&pppppppuStack_148);
      if (_DAT_1418b8218 == 5) {
        FUN_1414e9340(0x14265b660);
      }
      break;
    case 2:
      goto override_jmp_1407d51e2_case_2;
    }
    FUN_140070e10(&pppppppuStack_148);
    *(undefined4 *)(param_1 + 0x33) = 0x31;
    break;
  case 0x31:
    for (plVar23 = _DAT_142401448; plVar42 = aplStack_178[0], plVar44 = _DAT_142401450,
        plVar23 != plVar28; plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if ((*(byte *)(lVar29 + 0x114) & 0x40) != 0) {
        plVar42 = *(longlong **)(lVar29 + 0x1e0);
        for (plVar44 = *(longlong **)(lVar29 + 0x1d8); plVar44 != plVar42; plVar44 = plVar44 + 1) {
          plVar56 = (longlong *)*plVar44;
          iVar16 = (**(code **)(*plVar56 + 0x10))(plVar56);
          if ((((iVar16 == 3) && (lVar24 = (**(code **)(*plVar56 + 0x48))(plVar56), lVar24 == 0)) &&
              ((int)plVar56[1] != -1)) &&
             ((lVar24 = FUN_140b67b90(0x142516038,*(undefined4 *)(lVar29 + 0xc30),lVar29 + 0x1274),
              lVar24 != 0 && (*(int *)(lVar24 + 0xdc) == (int)plVar56[1])))) {
            FUN_140069710(&pppppppuStack_148,"Patched up nemesis record for nemid");
            FUN_140542fb0((int)plVar56[1],&pppppppuStack_148);
            load_supplier_0x70b20(&pppppppuStack_148,", unid");
            FUN_140542fb0(*(undefined4 *)(lVar29 + 0x130),&pppppppuStack_148);
            FUN_140542930(&pppppppuStack_148);
            FUN_140070e10(&pppppppuStack_148);
            puVar25 = (undefined4 *)FUN_1407a2100();
            *puVar25 = (int)plVar56[1];
            FUN_1400bb560(puVar25,&DAT_1424014f8);
            *(longlong *)(puVar25 + 6) = lVar29;
            puVar25[1] = *(undefined4 *)(lVar29 + 0x130);
            lVar29 = load_supplier_0x7f0b0(&DAT_1423edb78,*(undefined4 *)(lVar29 + 0x140));
            if (lVar29 == 0) {
              load_supplier_0xf61ff0(extraout_XMM0_Da,puVar25 + 2,puVar25 + 3);
            }
            else {
              load_supplier_0x96bfd0(lVar29);
            }
            *(longlong *)(puVar25 + 4) = lVar24;
            cVar14 = load_supplier_0x73550(lVar24 + 200,0xb);
            if (cVar14 != '\0') {
              load_supplier_0xfce80(puVar25 + 0x16,4);
            }
            cVar14 = load_supplier_0x73550(*(longlong *)(puVar25 + 4) + 200,0xc);
            if (cVar14 != '\0') {
              load_supplier_0xfce80(puVar25 + 0x16,5);
            }
            cVar14 = load_supplier_0x73550(*(longlong *)(puVar25 + 4) + 200,0xd);
            if (cVar14 != '\0') {
              load_supplier_0xfce80(puVar25 + 0x16,6);
            }
            cVar14 = load_supplier_0x73550(*(longlong *)(puVar25 + 4) + 200,0xe);
            if (cVar14 != '\0') {
              load_supplier_0xfce80(puVar25 + 0x16,7);
            }
            cVar14 = load_supplier_0x73550(*(longlong *)(puVar25 + 4) + 200,0xf);
            if (cVar14 != '\0') {
              load_supplier_0xfce80(puVar25 + 0x16,8);
            }
            break;
          }
        }
      }
    }
    plVar28 = _DAT_142401448;
    if ((int)aplStack_178[0][0xd0] < 0xdd7) {
      for (; plVar28 != plVar44; plVar28 = plVar28 + 1) {
        lVar29 = *plVar28;
        if ((*(uint *)(lVar29 + 0x110) & 0x1000000) != 0) {
          bVar11 = false;
          bVar10 = false;
          if (_DAT_142401460 != _DAT_142401468) {
            plVar23 = _DAT_142401460;
            do {
              if (*(int *)(*plVar23 + 0x3dc) == *(int *)(lVar29 + 0x130)) {
                if (*(short *)(*plVar23 + 0x3e0) == 1) {
                  bVar11 = true;
                }
                else {
                  bVar10 = true;
                }
              }
              plVar23 = plVar23 + 1;
            } while (plVar23 != _DAT_142401468);
            if (bVar11) {
              *(uint *)(lVar29 + 0x11c) = *(uint *)(lVar29 + 0x11c) | 0x40000;
            }
            if (bVar10) goto LAB_1407d55d6;
          }
          *(uint *)(lVar29 + 0x110) = *(uint *)(lVar29 + 0x110) & 0xfeffffff;
        }
LAB_1407d55d6:
      }
    }
    plVar28 = _DAT_1423af8e0;
    plVar23 = _DAT_1423af8d8;
    if ((int)aplStack_178[0][0xd0] < 0xdcb) {
      for (; plVar23 != plVar28; plVar23 = plVar23 + 1) {
        puVar41 = *(undefined8 **)(*plVar23 + 0x40);
        for (puVar22 = *(undefined8 **)(*plVar23 + 0x38); puVar22 != puVar41; puVar22 = puVar22 + 1)
        {
          FUN_140e85860(*puVar22);
        }
      }
    }
    plVar28 = _DAT_14240ad60;
    plVar23 = _DAT_14240ad58;
    if ((int)plVar42[0xd0] < 0xdc9) {
      for (; plVar23 != plVar28; plVar23 = plVar23 + 1) {
        plVar44 = (longlong *)*plVar23;
        if ((*(byte *)(plVar44 + 0x29) & 0x30) == 0x30) {
          iVar16 = (**(code **)(*plVar44 + 0x70))();
          uVar3 = (undefined2)plVar44[2];
          pcStack_1c8._0_4_ = 7;
          load_supplier_0x69660
                    (0x1423ed870,uVar3,*(undefined2 *)((longlong)plVar44 + 0x1c),(short)plVar44[4]);
          pcStack_1c8 = (code *)CONCAT44(pcStack_1c8._4_4_,iVar16);
          load_supplier_0x14507f0(0x1423ed870,uVar3);
          if (iVar16 != 6) {
            FUN_140a69d30(0x1423ed870,uVar3);
          }
        }
        else {
          iVar16 = (**(code **)(*plVar44 + 0x68))(plVar44);
          uVar3 = (undefined2)plVar44[2];
          pcStack_1c8._0_4_ = 7;
          load_supplier_0x69660
                    (0x1423ed870,uVar3,*(undefined2 *)((longlong)plVar44 + 0x1c),(short)plVar44[4]);
          pcStack_1c8 = (code *)CONCAT44(pcStack_1c8._4_4_,iVar16);
          load_supplier_0x14507f0(0x1423ed870,uVar3);
          if (iVar16 != 6) {
            FUN_140a69d30(0x1423ed870,uVar3);
          }
        }
        if (*(short *)((longlong)plVar44 + 0x14a) < 1) {
          FUN_1405898a0(plVar44);
        }
      }
    }
    if ((int)plVar42[0xd0] < 0x7fc) {
      lVar29 = FUN_1404284d0(0x1423b3bd0);
      FUN_140070e90(lVar29 + 8,"Off duty",8);
      lVar29 = FUN_1404284d0(0x1423b3bd0);
      FUN_140070e90(lVar29 + 8,"Staggered training",0x12);
      lVar29 = FUN_1404284d0(0x1423b3bd0);
      FUN_140070e90(lVar29 + 8,"Constant training",0x11);
      lVar29 = FUN_1404284d0(0x1423b3bd0);
      FUN_140070e90(lVar29 + 8,"Ready",5);
      piVar4 = *(int **)(_DAT_1423b6568 + 0x11d0);
      lVar29 = _DAT_1424ffb40;
      for (piVar47 = *(int **)(_DAT_1423b6568 + 0x11c8); piVar47 < piVar4; piVar47 = piVar47 + 1) {
        iVar16 = *piVar47;
        lVar24 = _DAT_1424ffb48 - lVar29 >> 3;
        if ((lVar24 != 0) && (iVar16 != -1)) {
          iVar17 = (int)lVar24 + -1;
          iVar18 = 0;
          pppppppbVar21 = (byte *******)0x0;
          if (-1 < iVar17) {
            do {
              iVar35 = iVar18 + iVar17 >> 1;
              pppppppbVar21 = *(byte ********)(lVar29 + (longlong)iVar35 * 8);
              iVar36 = *(int *)pppppppbVar21;
              if (iVar36 == iVar16) break;
              iVar34 = iVar35 + -1;
              if (iVar36 < iVar16) {
                iVar34 = iVar17;
                iVar18 = iVar35 + 1;
              }
              iVar17 = iVar34;
              pppppppbVar21 = (byte *******)0x0;
            } while (iVar18 <= iVar17);
          }
          if (pppppppbVar21 != (byte *******)0x0) {
            ppppppbVar5 = pppppppbVar21[0x1b];
            pppppppbVar27 = pppppppbVar21;
            for (ppppppbVar45 = pppppppbVar21[0x1a]; apppppppbStack_108[0] = pppppppbVar27,
                ppppppbVar45 < ppppppbVar5; ppppppbVar45 = ppppppbVar45 + 1) {
              pppppbVar33 = *ppppppbVar45;
              if (pppppbVar33 != (byte *****)0x0) {
                FUN_14154de6c(pppppbVar33,0x58,0xc,FUN_141102be0);
                load_supplier_0x154de20(pppppbVar33,0x420);
              }
              pppppppbVar27 = apppppppbStack_108[0];
            }
            if (pppppppbVar27[0x1a] != pppppppbVar27[0x1b]) {
              pppppppbVar27[0x1b] = pppppppbVar27[0x1a];
            }
            FUN_140070860(pppppppbVar27 + 0x1a,_DAT_1423b3bf8 - _DAT_1423b3bf0 >> 3);
            uVar57 = (longlong)pppppppbVar27[0x1b] - (longlong)apppppppbStack_108[0][0x1a] >> 3;
            while( true ) {
              uVar54 = (int)uVar57 - 1;
              uVar57 = (ulonglong)uVar54;
              lVar29 = _DAT_1424ffb40;
              if ((int)uVar54 < 0) break;
              pppppppuVar26 = (undefined8 *******)FUN_14154de30(0x420);
              pcStack_1c8 = FUN_141102be0;
              pppppppuStack_128 = pppppppuVar26;
              FUN_14154e458(pppppppuVar26,0x58,0xc);
              lVar29 = (longlong)(int)uVar54;
              pppppppbVar21[0x1a][lVar29] = (byte *****)pppppppuVar26;
              FUN_1411054e0(pppppppbVar21,pppppppbVar21[0x1a][lVar29]);
              pppppppbVar43 = *(byte ********)(_DAT_1423b3bf0 + lVar29 * 8);
              pppppppbVar27 = pppppppbVar43 + 1;
              pppppppbVar32 = pppppppbVar27;
              if ((byte ******)0xf < pppppppbVar43[4]) {
                pppppppbVar32 = (byte *******)*pppppppbVar27;
              }
              apppppppbStack_108[0] = pppppppbVar43;
              if ((pppppppbVar43[3] == (byte ******)0x8) &&
                 (iVar16 = load_supplier_0x154f5b4(pppppppbVar32), iVar16 == 0)) {
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 4) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x22) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0xf) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x7a) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x1a) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0xd2) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x25) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x12a) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x30) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x182) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x3b) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x1da) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x46) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x232) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x51) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x28a) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x5c) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x2e2) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x67) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x33a) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x72) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x392) = 1;
                *(undefined2 *)(pppppppbVar21[0x1a][lVar29] + 0x7d) = 0;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][lVar29] + 0x3ea) = 1;
              }
              if ((byte ******)0xf < pppppppbVar43[4]) {
                pppppppbVar27 = (byte *******)*pppppppbVar27;
              }
              if ((pppppppbVar43[3] == (byte ******)0x12) &&
                 (iVar16 = load_supplier_0x154f5b4(pppppppbVar27,"Staggered training"), iVar16 == 0)
                 ) {
                for (uVar40 = 0; (int)uVar40 < 0xc; uVar40 = uVar40 + 1) {
                  *(undefined2 *)
                   (pppppppbVar21[0x1a][(int)uVar54] + (longlong)(int)uVar40 * 0xb + 4) = 0;
                  *(undefined2 *)
                   ((longlong)pppppppbVar21[0x1a][(int)uVar54] + (longlong)(int)uVar40 * 0x58 + 0x22
                   ) = 1;
                  if (((ulonglong)*pppppppbVar21 & 1) == 0) {
                    if (((int)uVar40 < 3) || (uVar40 - 6 < 3)) {
LAB_1407d5c26:
                      pppppppbVar27 = (byte *******)FUN_14154de30();
                      pppppppbVar27[2] = (byte ******)0x0;
                      pppppppbVar27[3] = (byte ******)0x0;
                      pppppppbVar27[4] = (byte ******)0x0;
                      pppppppbVar27[5] = (byte ******)0x0;
                      *pppppppbVar27 = (byte ******)0x0;
                      *(undefined4 *)(pppppppbVar27 + 1) = 10;
                      pppppppbStack_e8 = pppppppbVar27;
                      appppppbStack_198[0] = (byte ******)FUN_14154de30(0x20);
                      appppppbStack_198[0][1] = (byte *****)0xffffffffffffffff;
                      appppppbStack_198[0][2] = (byte *****)0xffffffffffffffff;
                      *(undefined4 *)(appppppbStack_198[0] + 3) = 0xffffffff;
                      *(undefined4 *)((longlong)appppppbStack_198[0] + 0x1c) = 0;
                      *appppppbStack_198[0] = (byte *****)&UNK_141655238;
                      *pppppppbVar27 = appppppbStack_198[0];
                      *(undefined4 *)(appppppbStack_198[0] + 2) = _DAT_142161ab8;
                      *(undefined4 *)((longlong)*pppppppbVar27 + 0x14) = _DAT_1423a424c;
                      FUN_1402857c0(pppppppbVar27 + 2,
                                    (longlong)pppppppbVar21[0x15] - (longlong)pppppppbVar21[0x14] >>
                                    3,0);
                      FUN_140286670(pppppppbVar27 + 2);
                      pppppbVar33 = pppppppbVar21[0x1a][(int)uVar54] +
                                    (longlong)(int)uVar40 * 0xb + 5;
                      ppppbVar6 = pppppbVar33[1];
                      if (ppppbVar6 == pppppbVar33[2]) {
                        FUN_1400bc2f0(pppppbVar33,ppppbVar6,&pppppppbStack_e8);
                      }
                      else {
                        *ppppbVar6 = (byte ***)pppppppbVar27;
                        pppppbVar33[1] = pppppbVar33[1] + 1;
                      }
                      *(undefined2 *)
                       (pppppppbVar21[0x1a][(int)uVar54] + (longlong)(int)uVar40 * 0xb + 4) = 0;
                      *(undefined2 *)
                       ((longlong)pppppppbVar21[0x1a][(int)uVar54] +
                       (longlong)(int)uVar40 * 0x58 + 0x22) = 0;
                    }
                  }
                  else if ((2 < uVar40) && (2 < uVar40 - 6)) goto LAB_1407d5c26;
                }
              }
              pppppppbVar43 = apppppppbStack_108[0];
              iVar16 = 0;
              pppppppbVar27 = apppppppbStack_108[0] + 1;
              if ((byte ******)0xf < apppppppbStack_108[0][4]) {
                pppppppbVar27 = (byte *******)*pppppppbVar27;
              }
              if ((apppppppbStack_108[0][3] == (byte ******)0x11) &&
                 (iVar18 = load_supplier_0x154f5b4(pppppppbVar27,"Constant training"), iVar18 == 0))
              {
                for (; pppppppbVar43 = apppppppbStack_108[0], iStack_1a8 = iVar16, iVar16 < 0xc;
                    iVar16 = iVar16 + 1) {
                  pppppppbVar27 = (byte *******)FUN_14154de30(0x30);
                  pppppppbVar27[2] = (byte ******)0x0;
                  pppppppbVar27[3] = (byte ******)0x0;
                  pppppppbVar27[4] = (byte ******)0x0;
                  pppppppbVar27[5] = (byte ******)0x0;
                  *pppppppbVar27 = (byte ******)0x0;
                  *(undefined4 *)(pppppppbVar27 + 1) = 10;
                  pppppppbStack_e8 = pppppppbVar27;
                  appppppbStack_198[0] = (byte ******)FUN_14154de30(0x20);
                  appppppbStack_198[0][1] = (byte *****)0xffffffffffffffff;
                  appppppbStack_198[0][2] = (byte *****)0xffffffffffffffff;
                  *(undefined4 *)(appppppbStack_198[0] + 3) = 0xffffffff;
                  *(undefined4 *)((longlong)appppppbStack_198[0] + 0x1c) = 0;
                  *appppppbStack_198[0] = (byte *****)&UNK_141655238;
                  *pppppppbVar27 = appppppbStack_198[0];
                  *(undefined4 *)(appppppbStack_198[0] + 2) = _DAT_142161ab8;
                  *(undefined4 *)((longlong)*pppppppbVar27 + 0x14) = _DAT_1423a424c;
                  FUN_1402857c0(pppppppbVar27 + 2,
                                (longlong)pppppppbVar21[0x15] - (longlong)pppppppbVar21[0x14] >> 3,0
                               );
                  FUN_140286670(pppppppbVar27 + 2);
                  appppppbStack_198[0] = (byte ******)((longlong)iVar16 * 0x58);
                  pppppbVar33 = (byte *****)
                                ((longlong)appppppbStack_198[0] +
                                (longlong)(pppppppbVar21[0x1a][(int)uVar54] + 5));
                  ppppbVar6 = pppppbVar33[1];
                  if (ppppbVar6 == pppppbVar33[2]) {
                    FUN_1400bc2f0(pppppbVar33,ppppbVar6,&pppppppbStack_e8);
                  }
                  else {
                    *ppppbVar6 = (byte ***)pppppppbVar27;
                    pppppbVar33[1] = pppppbVar33[1] + 1;
                  }
                  *(undefined2 *)
                   ((longlong)appppppbStack_198[0] +
                   (longlong)(pppppppbVar21[0x1a][(int)uVar54] + 4)) = 0;
                  *(undefined2 *)
                   ((longlong)appppppbStack_198[0] +
                   (longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x22) = 0;
                }
              }
              pppppppbVar27 = pppppppbVar43 + 1;
              if ((byte ******)0xf < pppppppbVar43[4]) {
                pppppppbVar27 = (byte *******)*pppppppbVar27;
              }
              if ((pppppppbVar43[3] == (byte ******)0x5) &&
                 (iVar16 = load_supplier_0x154f5b4(pppppppbVar27,"Ready"), iVar16 == 0)) {
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 4) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x22) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0xf) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x7a) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x1a) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0xd2) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x25) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x12a) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x30) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x182) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x3b) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x1da) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x46) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x232) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x51) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x28a) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x5c) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x2e2) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x67) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x33a) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x72) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x392) = 0;
                *(undefined2 *)(pppppppbVar21[0x1a][(int)uVar54] + 0x7d) = 2;
                *(undefined2 *)((longlong)pppppppbVar21[0x1a][(int)uVar54] + 0x3ea) = 0;
              }
            }
          }
        }
      }
    }
    plVar28 = _DAT_1423edb80;
    bVar11 = false;
    for (plVar23 = _DAT_1423edb78; plVar23 < plVar28; plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      iVar16 = (int)(*(longlong *)(lVar29 + 0x930) - *(longlong *)(lVar29 + 0x928) >> 1) + -1;
      lVar24 = (longlong)iVar16;
      if (-1 < iVar16) {
        do {
          psVar1 = (short *)(*(longlong *)(lVar29 + 0x928) + lVar24 * 2);
          if ((*psVar1 == 0) && (*(int *)(*(longlong *)(lVar29 + 0x940) + lVar24 * 4) == -1)) {
            *psVar1 = 6;
            bVar11 = true;
          }
          lVar24 = lVar24 + -1;
        } while (-1 < lVar24);
      }
    }
    if (bVar11) {
      FUN_140542d00();
    }
    if (_DAT_1418b821c == 0) {
      lVar29 = _DAT_142504428;
      iVar16 = _DAT_142504460;
      iVar18 = _DAT_14250445c;
      iVar17 = _DAT_142504464;
      for (sVar48 = 0; sVar48 < iVar18; sVar48 = sVar48 + 1) {
        for (sVar39 = 0; sVar39 < iVar16; sVar39 = sVar39 + 1) {
          for (sVar46 = 0; sVar46 < iVar17; sVar46 = sVar46 + 1) {
            if ((((-1 < sVar48) && (sVar48 < iVar18)) && (-1 < sVar39)) &&
               (((sVar39 < iVar16 && (-1 < sVar46)) && (sVar46 < iVar17)))) {
              sVar15 = sVar48 >> 4;
              sVar31 = sVar39 >> 4;
              if ((lVar29 != 0) &&
                 (lVar24 = *(longlong *)
                            (*(longlong *)
                              (*(longlong *)(lVar29 + (longlong)sVar15 * 8) + (longlong)sVar31 * 8)
                            + (longlong)sVar46 * 8), lVar24 != 0)) {
                uVar54 = (int)sVar48 & 0x8000000f;
                if ((int)uVar54 < 0) {
                  uVar54 = (uVar54 - 1 | 0xfffffff0) + 1;
                }
                uVar40 = (int)sVar39 & 0x8000000f;
                if ((int)uVar40 < 0) {
                  uVar40 = (uVar40 - 1 | 0xfffffff0) + 1;
                }
                uVar54 = *(uint *)(lVar24 + 0x6a0 +
                                  ((longlong)(int)uVar54 * 0x10 + (longlong)(int)uVar40) * 4);
                plVar28 = _DAT_142401448;
                if ((uVar54 & 8) != 0) {
                  for (; plVar28 < _DAT_142401450; plVar28 = plVar28 + 1) {
                    lVar24 = *plVar28;
                    if ((((*(uint *)(lVar24 + 0x110) & 0x2010202) == 0) &&
                        ((*(uint *)(lVar24 + 0x118) & 0x180000) == 0)) &&
                       ((*(uint *)(lVar24 + 0x110) >> 0xf & 1) == 0)) {
                      if ((*(uint *)(lVar24 + 0x118) >> 10 & 1) == 0) {
                        if ((*(short *)(lVar24 + 0xa8) == sVar48) &&
                           (*(short *)(lVar24 + 0xaa) == sVar39)) {
LAB_1407d6344:
                          if (*(short *)(lVar24 + 0xac) == sVar46) goto LAB_1407d63fc;
                        }
                      }
                      else {
                        iVar35 = (int)*(short *)(lVar24 + 0xa8) - (int)sVar48;
                        iVar36 = -iVar35;
                        if (iVar36 < 0) {
                          iVar36 = iVar35;
                        }
                        if (iVar36 < 2) {
                          iVar35 = (int)*(short *)(lVar24 + 0xaa) - (int)sVar39;
                          iVar36 = -iVar35;
                          if (iVar36 < 0) {
                            iVar36 = iVar35;
                          }
                          if (iVar36 < 2) goto LAB_1407d6344;
                        }
                      }
                    }
                  }
                  if (((sVar48 < iVar18) && (sVar39 < iVar16)) &&
                     ((sVar46 < iVar17 && (lVar29 != 0)))) {
                    uVar40 = (int)sVar48 & 0x8000000f;
                    if ((int)uVar40 < 0) {
                      uVar40 = (uVar40 - 1 | 0xfffffff0) + 1;
                    }
                    uVar19 = (int)sVar39 & 0x8000000f;
                    if ((int)uVar19 < 0) {
                      uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                    }
                    puVar2 = (uint *)(*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar29 + (longlong)sVar15 * 8) +
                                         (longlong)sVar31 * 8) + (longlong)sVar46 * 8) + 0x6a0 +
                                     ((longlong)(int)uVar40 * 0x10 + (longlong)(int)uVar19) * 4);
                    *puVar2 = *puVar2 & 0xfffffff7;
                  }
                  FUN_140542d00("removed erroneous unit occupancy flag");
                  lVar29 = _DAT_142504428;
                  iVar16 = _DAT_142504460;
                  iVar18 = _DAT_14250445c;
                  iVar17 = _DAT_142504464;
                }
LAB_1407d63fc:
                plVar28 = _DAT_142401448;
                if ((uVar54 & 0x10) != 0) {
                  for (; plVar28 < _DAT_142401450; plVar28 = plVar28 + 1) {
                    lVar24 = *plVar28;
                    if ((((*(uint *)(lVar24 + 0x110) & 0x2010202) == 0) &&
                        ((*(uint *)(lVar24 + 0x118) & 0x180000) == 0)) &&
                       ((*(uint *)(lVar24 + 0x110) >> 0xf & 1) != 0)) {
                      if ((*(uint *)(lVar24 + 0x118) >> 10 & 1) == 0) {
                        if ((*(short *)(lVar24 + 0xa8) == sVar48) &&
                           (*(short *)(lVar24 + 0xaa) == sVar39)) {
LAB_1407d6498:
                          if (*(short *)(lVar24 + 0xac) == sVar46) goto LAB_1407d6555;
                        }
                      }
                      else {
                        iVar35 = (int)*(short *)(lVar24 + 0xa8) - (int)sVar48;
                        iVar36 = -iVar35;
                        if (iVar36 < 0) {
                          iVar36 = iVar35;
                        }
                        if (iVar36 < 2) {
                          iVar35 = (int)*(short *)(lVar24 + 0xaa) - (int)sVar39;
                          iVar36 = -iVar35;
                          if (iVar36 < 0) {
                            iVar36 = iVar35;
                          }
                          if (iVar36 < 2) goto LAB_1407d6498;
                        }
                      }
                    }
                  }
                  if (((sVar48 < iVar18) && (sVar39 < iVar16)) &&
                     ((sVar46 < iVar17 &&
                      ((lVar29 != 0 &&
                       (lVar29 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar29 + (longlong)sVar15 * 8) +
                                    (longlong)sVar31 * 8) + (longlong)sVar46 * 8), lVar29 != 0))))))
                  {
                    uVar54 = (int)sVar48 & 0x8000000f;
                    if ((int)uVar54 < 0) {
                      uVar54 = (uVar54 - 1 | 0xfffffff0) + 1;
                    }
                    uVar40 = (int)sVar39 & 0x8000000f;
                    if ((int)uVar40 < 0) {
                      uVar40 = (uVar40 - 1 | 0xfffffff0) + 1;
                    }
                    puVar2 = (uint *)(lVar29 + 0x6a0 +
                                     ((longlong)(int)uVar54 * 0x10 + (longlong)(int)uVar40) * 4);
                    *puVar2 = *puVar2 & 0xffffffef;
                  }
                  FUN_140542d00("removed erroneous unit ground occupancy flag");
                  lVar29 = _DAT_142504428;
                  iVar16 = _DAT_142504460;
                  iVar18 = _DAT_14250445c;
                  iVar17 = _DAT_142504464;
                }
              }
            }
LAB_1407d6555:
          }
        }
      }
    }
    uVar57 = 0;
    plVar23 = _DAT_1424017e8;
    plVar28 = _DAT_1424017f0;
    if ((longlong)_DAT_142401450 - (longlong)_DAT_142401448 >> 3 != 0) {
      uVar37 = 0;
      plVar44 = _DAT_142401430;
      uVar50 = uVar57;
      do {
        lVar29 = *(longlong *)((longlong)_DAT_142401448 + uVar57);
        lVar24 = *(longlong *)(lVar29 + 0xb18);
        uVar49 = uVar37;
        uVar58 = uVar37;
        if (*(longlong *)(lVar29 + 0xb20) - lVar24 >> 4 != 0) {
          do {
            iVar16 = **(int **)(lVar24 + uVar49);
            iVar18 = (int)((longlong)_DAT_142401438 - (longlong)plVar44 >> 3);
            if ((iVar18 != 0) && (iVar16 != -1)) {
              iVar18 = iVar18 + -1;
              uVar53 = uVar37;
              iVar17 = 0;
              if (-1 < iVar18) {
                do {
                  iVar35 = iVar17 + iVar18 >> 1;
                  iVar36 = *(int *)(plVar44[iVar35] + 0x130);
                  uVar53 = plVar44[iVar35];
                  if (iVar36 == iVar16) break;
                  iVar34 = iVar35 + -1;
                  if (iVar36 < iVar16) {
                    iVar34 = iVar18;
                    iVar17 = iVar35 + 1;
                  }
                  iVar18 = iVar34;
                  uVar53 = uVar37;
                } while (iVar17 <= iVar18);
              }
              if (((uVar53 != 0) &&
                  (plVar28 = *(longlong **)(uVar53 + 0x5f8), plVar28 != (longlong *)0x0)) &&
                 (lVar24 = *(longlong *)(uVar49 + *(longlong *)(lVar29 + 0xb18)),
                 (ulonglong)(plVar28[1] - *plVar28 >> 3) <=
                 (ulonglong)(longlong)*(int *)(lVar24 + 8))) {
                *(undefined4 *)(lVar24 + 8) = 0;
                plVar44 = _DAT_142401430;
              }
            }
            uVar54 = (int)uVar58 + 1;
            lVar24 = *(longlong *)(lVar29 + 0xb18);
            uVar49 = uVar49 + 0x10;
            uVar58 = (ulonglong)uVar54;
          } while ((ulonglong)(longlong)(int)uVar54 <
                   (ulonglong)(*(longlong *)(lVar29 + 0xb20) - lVar24 >> 4));
        }
        uVar54 = (int)uVar50 + 1;
        uVar50 = (ulonglong)uVar54;
        uVar57 = uVar57 + 8;
        plVar23 = _DAT_1424017e8;
        plVar28 = _DAT_1424017f0;
      } while ((ulonglong)(longlong)(int)uVar54 <
               (ulonglong)((longlong)_DAT_142401450 - (longlong)_DAT_142401448 >> 3));
    }
    for (; plVar23 < plVar28; plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if ((*(byte *)(lVar29 + 0x10) & 1) != 0) {
        pcStack_1c8 = (code *)CONCAT62(pcStack_1c8._2_6_,*(undefined2 *)(lVar29 + 0xc));
        FUN_14146f610(0x1423ed870,*(undefined4 *)(lVar29 + 0x1c),*(undefined2 *)(lVar29 + 8),
                      *(undefined2 *)(lVar29 + 10));
      }
    }
    _DAT_142522480 = 0;
    uVar57 = (longlong)_DAT_1424017f0 - (longlong)_DAT_1424017e8 >> 3;
    while( true ) {
      uVar54 = (int)uVar57 - 1;
      uVar57 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      (**(code **)(*(longlong *)_DAT_1424017e8[(int)uVar54] + 0x120))();
    }
    iVar16 = (int)((longlong)_DAT_142401450 - (longlong)_DAT_142401448 >> 3) + -1;
    lVar29 = (longlong)iVar16;
    if (-1 < iVar16) {
      do {
        *(undefined4 *)(_DAT_142401448[lVar29] + 0x128c) = 0xffffffff;
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    FUN_14146e070(0x1423ed870);
    FUN_14146ebd0(0x1423ed870);
    FUN_141496b80(0x1423ed870,1);
    uVar57 = _DAT_1424ffb48 - _DAT_1424ffb40 >> 3;
    while( true ) {
      plVar28 = _DAT_1423b5c78;
      uVar54 = (int)uVar57 - 1;
      uVar57 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      puVar25 = *(undefined4 **)(_DAT_1424ffb40 + (longlong)(int)uVar54 * 8);
      uVar50 = *(longlong *)(puVar25 + 0x2a) - *(longlong *)(puVar25 + 0x28) >> 3;
      while( true ) {
        uVar54 = (int)uVar50 - 1;
        uVar50 = (ulonglong)uVar54;
        if ((int)uVar54 < 0) break;
        lVar29 = FUN_1413e0200(&DAT_142401430,
                               **(undefined4 **)
                                 (*(longlong *)(puVar25 + 0x28) + (longlong)(int)uVar54 * 8));
        if ((lVar29 != 0) && ((*(int *)(lVar29 + 0x1f0) == -1 || (*(int *)(lVar29 + 500) == -1)))) {
          pppppppuStack_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          pppppppuStack_128 = (undefined8 *******)FUN_140071d90(0x20);
          uStack_118 = 0x1f;
          uStack_110 = 0x1f;
          *pppppppuStack_128 = (undefined8 ******)0x6e69726961706552;
          pppppppuStack_128[1] = (undefined8 ******)0x2064617571732067;
          pppppppuStack_128[2] = (undefined8 ******)0x726f66206f666e69;
          *(undefined4 *)(pppppppuStack_128 + 3) = 0x696e5520;
          *(undefined2 *)((longlong)pppppppuStack_128 + 0x1c) = 0x2074;
          *(undefined1 *)((longlong)pppppppuStack_128 + 0x1e) = 0x23;
          *(undefined1 *)((longlong)pppppppuStack_128 + 0x1f) = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_130 = 0xf;
          pppppppuStack_148 = (undefined8 *******)0x0;
          FUN_140543070(*(undefined4 *)(lVar29 + 0x130),&pppppppuStack_148);
          pppppppuVar26 = &pppppppuStack_148;
          if (0xf < uStack_130) {
            pppppppuVar26 = pppppppuStack_148;
          }
          FUN_140070fd0(&pppppppuStack_128,pppppppuVar26,uStack_138);
          if (0xf < uStack_130) {
            uVar37 = uStack_130 + 1;
            pppppppuVar26 = pppppppuStack_148;
            if (0xfff < uVar37) {
              uVar37 = uStack_130 + 0x28;
              pppppppuVar26 = (undefined8 *******)pppppppuStack_148[-1];
              if (0x1f < (ulonglong)((longlong)pppppppuStack_148 + (-8 - (longlong)pppppppuVar26)))
              {
                _invalid_parameter_noinfo_noreturn();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            load_supplier_0x154de20(pppppppuVar26,uVar37);
          }
          FUN_140542930(&pppppppuStack_128);
          *(undefined4 *)(lVar29 + 0x1f0) = *puVar25;
          *(uint *)(lVar29 + 500) = uVar54;
          FUN_140070e10();
        }
      }
    }
    lVar29 = _DAT_14240a290;
    plVar23 = _DAT_1423b5c70;
    if (_DAT_1418b821c == 0) {
      for (; plVar23 < plVar28; plVar23 = plVar23 + 1) {
        puVar22 = *(undefined8 **)(*plVar23 + 0x28);
        puVar41 = *(undefined8 **)(*plVar23 + 0x30);
LAB_1407d69a4:
        if (puVar22 < puVar41) {
          apppppppbStack_108[0] = (byte *******)*puVar22;
          ppppppbVar45 = apppppppbStack_108[0][0x105];
          ppppppbVar5 = apppppppbStack_108[0][0x106];
          pppppppbStack_e8 = apppppppbStack_108[0];
LAB_1407d69d0:
          do {
            if (ppppppbVar5 <= ppppppbVar45) goto LAB_1407d6aa0;
            iVar16 = *(int *)*ppppppbVar45;
            if ((iVar16 != -1) && (lVar24 = _DAT_14240a298 - lVar29 >> 3, lVar24 != 0)) {
              iVar18 = 0;
              iVar17 = (int)lVar24 + -1;
              if (-1 < iVar17) {
                do {
                  iVar36 = iVar18 + iVar17 >> 1;
                  plVar44 = *(longlong **)(lVar29 + (longlong)iVar36 * 8);
                  if ((int)plVar44[10] == iVar16) goto LAB_1407d6a3b;
                  iVar35 = iVar36 + -1;
                  if ((int)plVar44[10] < iVar16) {
                    iVar35 = iVar17;
                    iVar18 = iVar36 + 1;
                  }
                  iVar17 = iVar35;
                } while (iVar18 <= iVar17);
              }
              plVar44 = (longlong *)0x0;
LAB_1407d6a3b:
              if ((plVar44 != (longlong *)0x0) &&
                 (iVar16 = (**(code **)(*plVar44 + 0xd0))(), lVar29 = _DAT_14240a290, iVar16 == 0x1d
                 )) {
                puVar7 = (undefined8 *)plVar44[0x13b];
                if (puVar7 != (undefined8 *)plVar44[0x13c]) {
                  *puVar7 = apppppppbStack_108[0];
                  plVar44[0x13b] = plVar44[0x13b] + 8;
                  ppppppbVar45 = ppppppbVar45 + 1;
                  lVar29 = _DAT_14240a290;
                  goto LAB_1407d69d0;
                }
                FUN_1400bc2f0(plVar44 + 0x13a,puVar7,&pppppppbStack_e8);
                lVar29 = _DAT_14240a290;
              }
            }
            ppppppbVar45 = ppppppbVar45 + 1;
          } while( true );
        }
      }
    }
    *(undefined1 *)(aplStack_178[0] + 3) = 3;
    *(undefined4 *)(aplStack_178[0] + 0x33) = 0x32;
    *(int *)((longlong)aplStack_178[0] + 0x19c) = *(int *)((longlong)aplStack_178[0] + 0x19c) + 1;
    iVar16 = *(int *)(_DAT_142507ed8 + 0xa0) + 0xf >> 4;
    apppppppbStack_108[0] = (byte *******)CONCAT44(apppppppbStack_108[0]._4_4_,iVar16);
    iVar18 = *(int *)(_DAT_142507ed8 + 0xa4) + 0xf >> 4;
    pppppppbStack_e8 = (byte *******)CONCAT44(pppppppbStack_e8._4_4_,iVar18);
    uVar54 = 0;
    lVar29 = _DAT_142507ed8;
    while( true ) {
      uVar40 = 0;
      uStack_1a2 = (ushort)uVar54;
      sVar48 = 0;
      if ((short)iVar16 <= (short)uStack_1a2) break;
      while (sVar39 = (short)uVar54, sStack_1a4 = sVar48, sVar48 < (short)iVar18) {
        bVar11 = false;
        lVar24 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar29 + 0x483c8) + (longlong)sVar39 * 8) + 8 +
                  (longlong)sVar48 * 0x20);
        iVar18 = (int)pppppppbStack_e8;
        if (lVar24 == 0) {
LAB_1407d70ef:
          sVar48 = sVar48 + 1;
        }
        else {
          sVar39 = sVar39 * 0x10;
          sStack_1a0 = sVar48 * 0x10;
          sVar46 = sStack_1a0 + 0xf;
          iVar16 = *(int *)(lVar29 + 0xa0);
          uVar40 = iVar16 - 1;
          if ((short)(sVar39 + 0xfU) < iVar16) {
            uVar40 = (uint)(ushort)(sVar39 + 0xfU);
          }
          iStack_1a8 = CONCAT22(iStack_1a8._2_2_,(short)uVar40);
          iVar17 = *(int *)(lVar29 + 0xa4);
          if (iVar17 <= sVar46) {
            sVar46 = (short)iVar17 + -1;
          }
          iVar36 = (short)uVar40 + 1;
          appppppbStack_198[0] = (byte ******)CONCAT44(appppppbStack_198[0]._4_4_,iVar36);
          uVar19 = uVar40;
          if (iVar36 < sVar39) goto LAB_1407d70ef;
          do {
            if (((short)uVar19 < sVar39) && (sVar39 < iVar16)) break;
            sVar15 = sStack_1a0;
            if ((int)sStack_1a0 <= sVar46 + 1) {
              do {
                if ((sVar46 < sVar15) && (sVar15 < iVar17)) break;
                uVar54 = (int)sVar39 & 0x8000000f;
                if ((int)uVar54 < 0) {
                  uVar54 = (uVar54 - 1 | 0xfffffff0) + 1;
                }
                uVar19 = (int)sVar15 & 0x8000000f;
                if ((int)uVar19 < 0) {
                  uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                }
                sVar52 = (short)uVar54;
                sVar31 = (short)uVar19;
                lVar38 = (longlong)sVar52 * 0x10 + (longlong)sVar31;
                iVar16 = *(int *)(lVar24 + 0x1800 + lVar38 * 0x28);
                if (((-1 < iVar16) &&
                    ((ulonglong)(longlong)iVar16 <
                     (ulonglong)(*(longlong *)(lVar29 + 600) - *(longlong *)(lVar29 + 0x250) >> 3)))
                   && (lVar8 = *(longlong *)(*(longlong *)(lVar29 + 0x250) + (longlong)iVar16 * 8),
                      (ulonglong)(*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 1) <=
                      (ulonglong)(longlong)*(int *)(lVar24 + 0x1804 + lVar38 * 0x28))) {
                  bVar11 = true;
                }
                iVar16 = *(int *)(lVar24 + 0x1808 + lVar38 * 0x28);
                if (((-1 < iVar16) &&
                    ((ulonglong)(longlong)iVar16 <
                     (ulonglong)(*(longlong *)(lVar29 + 600) - *(longlong *)(lVar29 + 0x250) >> 3)))
                   && (lVar38 = *(longlong *)(*(longlong *)(lVar29 + 0x250) + (longlong)iVar16 * 8),
                      (ulonglong)(*(longlong *)(lVar38 + 0xd0) - *(longlong *)(lVar38 + 200) >> 1)
                      <= (ulonglong)
                         (longlong)
                         *(int *)(lVar24 + 0x180c +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28))) {
                  bVar11 = true;
                }
                iVar16 = *(int *)(lVar24 + ((longlong)sVar52 * 0x10 + (longlong)sVar31 + 0x9a) *
                                           0x28);
                if (((-1 < iVar16) &&
                    ((ulonglong)(longlong)iVar16 <
                     (ulonglong)(*(longlong *)(lVar29 + 600) - *(longlong *)(lVar29 + 0x250) >> 3)))
                   && (lVar38 = *(longlong *)(*(longlong *)(lVar29 + 0x250) + (longlong)iVar16 * 8),
                      (ulonglong)(*(longlong *)(lVar38 + 0xd0) - *(longlong *)(lVar38 + 200) >> 1)
                      <= (ulonglong)
                         (longlong)
                         *(int *)(lVar24 + 0x1814 +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28))) {
                  bVar11 = true;
                }
                iVar16 = *(int *)(lVar24 + 0x1818 +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28);
                if (((-1 < iVar16) &&
                    ((ulonglong)(longlong)iVar16 <
                     (ulonglong)(*(longlong *)(lVar29 + 600) - *(longlong *)(lVar29 + 0x250) >> 3)))
                   && (lVar38 = *(longlong *)(*(longlong *)(lVar29 + 0x250) + (longlong)iVar16 * 8),
                      (ulonglong)(*(longlong *)(lVar38 + 0xd0) - *(longlong *)(lVar38 + 200) >> 1)
                      <= (ulonglong)
                         (longlong)
                         *(int *)(lVar24 + 0x181c +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28))) {
                  bVar11 = true;
                }
                iVar16 = *(int *)(lVar24 + 0x1820 +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28);
                if (((-1 < iVar16) &&
                    ((ulonglong)(longlong)iVar16 <
                     (ulonglong)(*(longlong *)(lVar29 + 600) - *(longlong *)(lVar29 + 0x250) >> 3)))
                   && (lVar38 = *(longlong *)(*(longlong *)(lVar29 + 0x250) + (longlong)iVar16 * 8),
                      (ulonglong)(*(longlong *)(lVar38 + 0xd0) - *(longlong *)(lVar38 + 200) >> 1)
                      <= (ulonglong)
                         (longlong)
                         *(int *)(lVar24 + 0x1824 +
                                 ((longlong)sVar52 * 0x10 + (longlong)sVar31) * 0x28))) {
                  bVar11 = true;
                }
                sVar15 = sVar15 + 1;
                iVar17 = *(int *)(lVar29 + 0xa4);
              } while ((int)sVar15 <= sVar46 + 1);
              iVar16 = *(int *)(lVar29 + 0xa0);
              uVar19 = uVar40 & 0xffff;
            }
            sVar39 = sVar39 + 1;
          } while (sVar39 <= iVar36);
          if (bVar11) {
            pppppppuStack_148 = (undefined8 *******)0x0;
            uStack_140 = 0;
            uStack_138 = 0;
            uStack_130 = 0;
            pppppppuStack_148 = (undefined8 *******)FUN_140071d90(0x20);
            uStack_138 = 0x1c;
            uStack_130 = 0x1f;
            *pppppppuStack_148 = (undefined8 ******)0x726f632065766168;
            pppppppuStack_148[1] = (undefined8 ******)0x6165662074707572;
            pppppppuStack_148[2] = (undefined8 ******)0x70616d2065727574;
            *(undefined4 *)(pppppppuStack_148 + 3) = 0x20746120;
            *(undefined1 *)((longlong)pppppppuStack_148 + 0x1c) = 0;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_110 = 0xf;
            pppppppuStack_128 = (undefined8 *******)0x0;
            uVar54 = (uint)(short)uStack_1a2;
            FUN_140543070(uVar54 + 1,&pppppppuStack_128);
            pppppppuVar26 = &pppppppuStack_128;
            if (0xf < uStack_110) {
              pppppppuVar26 = pppppppuStack_128;
            }
            FUN_140070fd0(&pppppppuStack_148,pppppppuVar26,uStack_118);
            if (0xf < uStack_110) {
              uVar57 = uStack_110 + 1;
              pppppppuVar26 = pppppppuStack_128;
              if (0xfff < uVar57) {
                uVar57 = uStack_110 + 0x28;
                pppppppuVar26 = (undefined8 *******)pppppppuStack_128[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuStack_128 + (-8 - (longlong)pppppppuVar26))
                   ) goto LAB_1407d705f;
              }
              load_supplier_0x154de20(pppppppuVar26,uVar57);
            }
            FUN_140070fd0(&pppppppuStack_148,"-",1);
            sVar48 = sStack_1a4;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_110 = 0xf;
            pppppppuStack_128 = (undefined8 *******)0x0;
            FUN_140543070(sStack_1a4 + 1,&pppppppuStack_128);
            pppppppuVar26 = &pppppppuStack_128;
            if (0xf < uStack_110) {
              pppppppuVar26 = pppppppuStack_128;
            }
            FUN_140070fd0(&pppppppuStack_148,pppppppuVar26,uStack_118);
            if (0xf < uStack_110) {
              uVar57 = uStack_110 + 1;
              pppppppuVar26 = pppppppuStack_128;
              if (0xfff < uVar57) {
                uVar57 = uStack_110 + 0x28;
                pppppppuVar26 = (undefined8 *******)pppppppuStack_128[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuStack_128 + (-8 - (longlong)pppppppuVar26))
                   ) {
LAB_1407d705f:
                  _invalid_parameter_noinfo_noreturn();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              load_supplier_0x154de20(pppppppuVar26,uVar57);
            }
            FUN_140542930(&pppppppuStack_148);
            if (0xf < uStack_130) {
              uVar57 = uStack_130 + 1;
              pppppppuVar26 = pppppppuStack_148;
              if (0xfff < uVar57) {
                uVar57 = uStack_130 + 0x28;
                pppppppuVar26 = (undefined8 *******)pppppppuStack_148[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuStack_148 + (-8 - (longlong)pppppppuVar26))
                   ) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              load_supplier_0x154de20(pppppppuVar26,uVar57);
            }
            sVar48 = sVar48 + 1;
            lVar29 = _DAT_142507ed8;
            iVar18 = (int)pppppppbStack_e8;
          }
          else {
            uVar54 = (uint)uStack_1a2;
            sVar48 = sVar48 + 1;
          }
        }
      }
      uVar54 = (uint)(ushort)(sVar39 + 1);
      iVar16 = (int)apppppppbStack_108[0];
    }
    if ((int)aplStack_178[0][0xd0] < 0xdd0) {
      sVar48 = 0;
      lVar29 = _DAT_142504428;
      iVar16 = _DAT_14250445c;
      iVar18 = _DAT_142504464;
      iVar17 = _DAT_142504460;
      puVar22 = _DAT_1425040f8;
      puVar41 = _DAT_142504100;
      if (0 < _DAT_14250445c) {
        do {
          uVar54 = 0;
          sVar39 = 0;
          if (0 < iVar17) {
            do {
              iVar36 = 0;
              sVar46 = 0;
              if (0 < iVar17) {
                do {
                  if (((((-1 < sVar48) && ((int)uVar40 < iVar16)) && (-1 < sVar39)) &&
                      (((int)uVar54 < iVar17 && (-1 < sVar46)))) && (iVar36 < iVar18)) {
                    if ((lVar29 != 0) &&
                       (lVar24 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar29 + (longlong)(sVar48 >> 4) * 8) +
                                    (longlong)(sVar39 >> 4) * 8) + (longlong)sVar46 * 8),
                       lVar24 != 0)) {
                      uVar19 = uVar40 & 0x8000000f;
                      if ((int)uVar19 < 0) {
                        uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                      }
                      uVar20 = uVar54 & 0x8000000f;
                      if ((int)uVar20 < 0) {
                        uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                      }
                      if (((((*(uint *)(lVar24 + 0x6a0 +
                                       ((longlong)(int)uVar19 * 0x10 + (longlong)(int)uVar20) * 4) &
                             0x10000000) != 0) && ((int)uVar40 < iVar16)) && ((int)uVar54 < iVar17))
                         && ((iVar36 < iVar18 && (lVar29 != 0)))) {
                        uVar19 = uVar40 & 0x8000000f;
                        if ((int)uVar19 < 0) {
                          uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                        }
                        uVar20 = uVar54 & 0x8000000f;
                        if ((int)uVar20 < 0) {
                          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                        }
                        puVar2 = (uint *)(*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(lVar29 + (longlong)(sVar48 >> 4) * 8) +
                                             (longlong)(sVar39 >> 4) * 8) + (longlong)sVar46 * 8) +
                                          0x6a0 + ((longlong)(int)uVar19 * 0x10 +
                                                  (longlong)(int)uVar20) * 4);
                        *puVar2 = *puVar2 & 0xefffffff;
                        lVar29 = _DAT_142504428;
                        iVar16 = _DAT_14250445c;
                        iVar18 = _DAT_142504464;
                        iVar17 = _DAT_142504460;
                      }
                    }
                  }
                  sVar46 = sVar46 + 1;
                  iVar36 = (int)sVar46;
                } while (iVar36 < iVar17);
              }
              sVar39 = sVar39 + 1;
              uVar54 = (uint)sVar39;
            } while ((int)uVar54 < iVar17);
          }
          sVar48 = sVar48 + 1;
          uVar40 = (uint)sVar48;
          puVar22 = _DAT_1425040f8;
          puVar41 = _DAT_142504100;
        } while ((int)uVar40 < iVar16);
      }
      for (; puVar7 = _DAT_142504100, bVar11 = puVar22 != _DAT_142504100, _DAT_142504100 = puVar41,
          bVar11; puVar22 = puVar22 + 1) {
        piVar47 = (int *)*puVar22;
        if (*piVar47 == 1) {
          lVar24 = *(longlong *)(piVar47 + 0x14);
          uVar54 = (int)*(short *)(lVar24 + 0x1a) - 1;
          uVar40 = (uint)(short)uVar54;
          if ((int)uVar40 <= *(short *)(lVar24 + 0x1a) + 1) {
            do {
              uVar19 = (int)*(short *)(lVar24 + 0x1c) - 1;
              uVar20 = (uint)(short)uVar19;
              sVar48 = (short)uVar54;
              if ((int)uVar20 <= *(short *)(lVar24 + 0x1c) + 1) {
                do {
                  sVar39 = *(short *)(lVar24 + 0x1e);
                  sVar46 = (short)uVar19;
                  if (((-1 < sVar48) && ((int)uVar40 < iVar16)) &&
                     ((-1 < sVar46 &&
                      ((((int)uVar20 < iVar17 && (-1 < sVar39)) && (sVar39 < iVar18)))))) {
                    if ((lVar29 != 0) &&
                       (lVar24 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar29 + (longlong)(sVar48 >> 4) * 8) +
                                    (longlong)(sVar46 >> 4) * 8) + (longlong)sVar39 * 8),
                       lVar24 != 0)) {
                      uVar54 = uVar40 & 0x8000000f;
                      if ((int)uVar54 < 0) {
                        uVar54 = (uVar54 - 1 | 0xfffffff0) + 1;
                      }
                      uVar20 = uVar20 & 0x8000000f;
                      if ((int)uVar20 < 0) {
                        uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                      }
                      puVar2 = (uint *)(lVar24 + 0x6a0 +
                                       ((longlong)(int)uVar54 * 0x10 + (longlong)(int)uVar20) * 4);
                      *puVar2 = *puVar2 | 0x10000000;
                      lVar29 = _DAT_142504428;
                      iVar16 = _DAT_14250445c;
                      iVar18 = _DAT_142504464;
                      iVar17 = _DAT_142504460;
                    }
                  }
                  uVar19 = (uint)(ushort)(sVar46 + 1U);
                  lVar24 = *(longlong *)(piVar47 + 0x14);
                  uVar20 = (uint)(short)(sVar46 + 1U);
                } while ((int)uVar20 <= *(short *)(lVar24 + 0x1c) + 1);
              }
              uVar54 = (uint)(ushort)(sVar48 + 1U);
              uVar40 = (uint)(short)(sVar48 + 1U);
            } while ((int)uVar40 <= *(short *)(lVar24 + 0x1a) + 1);
          }
        }
        puVar41 = _DAT_142504100;
        _DAT_142504100 = puVar7;
      }
    }
  case 0x32:
    goto override_jmp_1407d33bf_case_50;
  case 0x33:
    FUN_140a94020(0);
    lVar29 = FUN_14025b120(3);
    FUN_140069710(auStack_c8,"Warning Modal");
    uVar30 = FUN_141428a00(param_1 + 4,&pppppppbStack_e8,auStack_c8);
    FUN_1407dfca0(aplStack_178,uVar30);
    FUN_1400e26a0(&pppppppbStack_e8);
    FUN_140070e10(auStack_c8);
    plVar28 = aplStack_178[0];
    if (aplStack_178[0] != (longlong *)0x0) {
      pppppppuStack_128 = (undefined8 *******)appppppbStack_198;
      uVar30 = load_supplier_0xf1090(appppppbStack_198,aplStack_178);
      FUN_140069710(auStack_a0,"Warning Modal");
      FUN_14048cd10(lVar29 + 0x20,&pppppppuStack_128,auStack_a0,uVar30);
      FUN_1400e26a0(&pppppppuStack_128);
      FUN_140070e10(auStack_a0);
      FUN_140069710(auStack_a0,&DAT_1416c7840);
      FUN_1400f1920(plVar28,apppppppbStack_108,auStack_a0);
      FUN_140070e10(auStack_a0);
      pppppppbVar21 = apppppppbStack_108[0];
      FUN_140069710(auStack_c8,"Error");
      FUN_1407dfd20(pppppppbVar21,&pppppppuStack_148,auStack_c8,
                    "Game load has been aborted due to an error.");
      FUN_140070e10(auStack_c8);
      (**(code **)(*plVar28 + 0x20))(plVar28);
      FUN_1400e26a0(&pppppppuStack_148);
      FUN_1400e26a0(apppppppbStack_108);
    }
    _DAT_1418b821c = 3;
    _DAT_1418b8218 = 0xc;
    DAT_1418f3197 = 0;
    *(undefined1 *)(param_1 + 3) = 2;
    FUN_1400e26a0(aplStack_178);
    goto override_jmp_1407d33bf_case_50;
  }
  *(int *)((longlong)param_1 + 0x19c) = *(int *)((longlong)param_1 + 0x19c) + 1;
override_jmp_1407d33bf_case_50:
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_1e8);
  return;
LAB_1407d6aa0:
  puVar22 = puVar22 + 1;
  goto LAB_1407d69a4;
LAB_1407d4843:
  uVar50 = (ulonglong)(iVar18 + 1);
  goto LAB_1407d45a0;
}

