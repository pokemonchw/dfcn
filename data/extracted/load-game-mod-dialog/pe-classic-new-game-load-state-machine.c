/* classic PE:6aea11a5:0272d000; new-game-load-state-machine; RVA 0x7d1d90..0x7d32ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_new_game_load_state_machine(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char cVar14;
  undefined4 uVar15;
  undefined8 *****pppppuVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auStack_2d8 [32];
  undefined8 uStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong *plStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  undefined1 auStack_278 [16];
  undefined8 ****ppppuStack_268;
  longlong *plStack_260;
  longlong lStack_258;
  undefined8 ****ppppuStack_128;
  longlong *plStack_120;
  char cStack_108;
  longlong alStack_f8 [4];
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 ****ppppuStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  ulonglong uStack_a0;
  undefined8 ****ppppuStack_98;
  longlong *plStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined1 auStack_78 [32];
  undefined1 uStack_58;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_2d8;
  iVar26 = 0;
  _DAT_1423ac948 = _DAT_1423ac948 & 0xfffffffd;
  lStack_258 = param_1;
  FUN_1404125f0(0x1418bd5f0,99);
  lVar19 = _DAT_14265ace8;
  puVar13 = _DAT_142504388;
  puVar12 = _DAT_142504358;
  puVar11 = _DAT_142504268;
  puVar10 = _DAT_142504238;
  puVar9 = _DAT_142504208;
  puVar8 = _DAT_1425041d8;
  puVar7 = _DAT_1425041a8;
  puVar6 = _DAT_142504178;
  puVar5 = _DAT_142504130;
  puVar25 = _DAT_1425040e8;
  puVar24 = _DAT_1425040b8;
  puVar23 = _DAT_142504088;
  puVar20 = _DAT_142504058;
  _DAT_1423ac948 = _DAT_1423ac948 | 1;
  if (0x23 < *(uint *)(param_1 + 0x2e0)) goto LAB_1407d3276;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    if (0x7fffffffffffffffU - _DAT_14265ace8 < 5) {
      FUN_140066e50();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plStack_288 = (longlong *)&DAT_14265acd8;
    if (0xf < _DAT_14265acf0) {
      plStack_288 = _DAT_14265acd8;
    }
    ppppuStack_98 = (undefined8 *****)0x0;
    plStack_90 = (longlong *)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar21 = _DAT_14265ace8 + 5;
    uVar22 = 0xf;
    pppppuVar16 = &ppppuStack_98;
    if (0xf < uVar21) {
      uVar22 = uVar21 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppuVar16 = (undefined8 *****)FUN_140071d90(uVar22 + 1);
      ppppuStack_98 = pppppuVar16;
    }
    uStack_88 = uVar21;
    uStack_80 = uVar22;
    *(undefined4 *)pppppuVar16 = 0x65766173;
    *(undefined1 *)((longlong)pppppuVar16 + 4) = 0x2f;
    load_supplier_0x154f29e((longlong)pppppuVar16 + 5,plStack_288,lVar19);
    *(undefined1 *)((longlong)pppppuVar16 + uVar21) = 0;
    plVar17 = (longlong *)FUN_140070fd0(&ppppuStack_98,"/world.dat",10);
    ppppuStack_b8 = (undefined8 ****)*plVar17;
    plStack_b0 = (longlong *)plVar17[1];
    plStack_120 = (longlong *)plVar17[2];
    uStack_a0 = plVar17[3];
    plVar17[2] = 0;
    plVar17[3] = 0xf;
    *(undefined1 *)plVar17 = 0;
    ppppuStack_128 = &ppppuStack_b8;
    if (0xf < uStack_a0) {
      ppppuStack_128 = ppppuStack_b8;
    }
    plStack_a8 = plStack_120;
    uVar15 = FUN_14154c158();
    ppppuStack_268 = ppppuStack_128;
    plStack_260 = plStack_120;
    FUN_140144750(alStack_f8,uVar15,&ppppuStack_268);
    plStack_288 = alStack_f8;
    FUN_14014be40(auStack_78,alStack_f8);
    uStack_58 = 0;
    FUN_14014c1b0(alStack_f8);
    FUN_140a660d0(auStack_78,&ppppuStack_128);
    if (cStack_108 != '\0') {
      uVar18 = FUN_1401bcce0(&ppppuStack_128,&puStack_d8);
      FUN_140a65c70(param_1 + 0x198,uVar18,1);
      FUN_140070e10(&puStack_d8);
      if (cStack_108 != '\0') {
        FUN_14014c1b0(&ppppuStack_128);
      }
    }
    FUN_14014c1b0(auStack_78);
    if (0xf < uStack_a0) {
      uVar21 = uStack_a0 + 1;
      pppppuVar16 = (undefined8 *****)ppppuStack_b8;
      if (0xfff < uVar21) {
        uVar21 = uStack_a0 + 0x28;
        pppppuVar16 = (undefined8 *****)ppppuStack_b8[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_b8 + (-8 - (longlong)pppppuVar16))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      load_supplier_0x154de20(pppppuVar16,uVar21);
    }
    plStack_a8 = (longlong *)0x0;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 ****)((ulonglong)ppppuStack_b8 & 0xffffffffffffff00);
    if (0xf < uStack_80) {
      uVar21 = uStack_80 + 1;
      pppppuVar16 = (undefined8 *****)ppppuStack_98;
      if (0xfff < uVar21) {
        uVar21 = uStack_80 + 0x28;
        pppppuVar16 = (undefined8 *****)ppppuStack_98[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)pppppuVar16))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      load_supplier_0x154de20(pppppuVar16,uVar21);
    }
    plStack_298 = (longlong *)CONCAT44(plStack_298._4_4_,1);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (param_1 + 0x1a0,param_1 + 0x2e4,4);
      _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (param_1 + 0x1a0,&plStack_298,4);
      *(bool *)(param_1 + 0x198) = (int)plStack_298 != 0;
    }
    FUN_140a659c0(param_1 + 0x198,auStack_278,2);
    FUN_1407dedf0(param_1 + 0x2e8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_1407abc80(param_1 + 0x4f8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    _DAT_142516014 = *(undefined4 *)(param_1 + 0x888);
    lStack_2a8 = param_1 + 0x870;
    lStack_2b0 = param_1 + 0x858;
    uStack_2b8 = param_1 + 0x840;
    FUN_1407d1740(0x14265adb0,param_1 + 0x7f8,param_1 + 0x810,param_1 + 0x828);
    _DAT_14265ad80 = 0;
    _DAT_14265ad88 = 0;
    _DAT_14265ad8c = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 1;
    *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + 1;
    FUN_1411599d0(0x1426b8030);
    goto LAB_1407d3276;
  case 1:
    if (DAT_142666e7b != '\0') goto LAB_1407d3276;
    if (_DAT_14265ad88 < (int)(_DAT_14265ade8 - _DAT_14265ade0 >> 3)) {
      if ((DAT_14265ad8c == '\0') && (DAT_14265ad8d == '\0')) {
        load_resolve_compatible_mod(&DAT_14265ad80,0x14265adb0);
      }
      goto LAB_1407d3276;
    }
    cVar14 = FUN_1414698d0(0x1423ed870,param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x2e4));
    if (cVar14 == '\x01') {
      *(undefined4 *)(param_1 + 0x2e0) = 0x23;
    }
    else {
      _DAT_1423894d8 = *(int *)(param_1 + 0x390) + 1;
      _DAT_14214ddd4 = *(int *)(param_1 + 0x394) + 1;
      _DAT_142389d48 = *(int *)(param_1 + 0x398) + 1;
      _DAT_142389d10 = *(int *)(param_1 + 0x39c) + 1;
      _DAT_1423a2414 = *(int *)(param_1 + 0x3a0) + 1;
      _DAT_14214dd88 = *(int *)(param_1 + 0x3a4) + 1;
      _DAT_1423a422c = 0;
      _DAT_142389d3c = 0;
      _DAT_142389d08 = 0;
      _DAT_14214e20c = *(int *)(param_1 + 0x3a8) + 1;
      _DAT_1423a240c = *(int *)(param_1 + 0x3ac) + 1;
      _DAT_1423894c4 = 0;
      _DAT_1423894d4 = *(int *)(param_1 + 0x3b0) + 1;
      _DAT_14214dd90 = *(int *)(param_1 + 0x3b4) + 1;
      _DAT_1423a2404 = *(int *)(param_1 + 0x3b8) + 1;
      _DAT_142389d40 = *(int *)(param_1 + 0x3bc) + 1;
      _DAT_14214dd94 = *(int *)(param_1 + 0x3c0) + 1;
      _DAT_1423a4220 = *(int *)(param_1 + 0x3c4) + 1;
      _DAT_142389d20 = *(int *)(param_1 + 0x3c8) + 1;
      _DAT_14214ddcc = *(int *)(param_1 + 0x3cc) + 1;
      _DAT_14214e218 = *(int *)(param_1 + 0x3d0) + 1;
      _DAT_14214dd8c = *(int *)(param_1 + 0x3d4) + 1;
      _DAT_142389d04 = *(int *)(param_1 + 0x3d8) + 1;
      _DAT_1423894d0 = *(int *)(param_1 + 0x3dc) + 1;
      _DAT_14238eb70 = *(int *)(param_1 + 0x3e0) + 1;
      _DAT_141bcf92c = *(int *)(param_1 + 0x3e4) + 1;
      _DAT_142389d00 = *(int *)(param_1 + 1000) + 1;
      _DAT_141bcf920 = *(int *)(param_1 + 0x3ec) + 1;
      _DAT_142161ab4 = *(int *)(param_1 + 0x3f0) + 1;
      _DAT_141bcf924 = *(int *)(param_1 + 0x3f4) + 1;
      _DAT_1423a4248 = *(int *)(param_1 + 0x3f8) + 1;
      _DAT_1421668e0 = *(int *)(param_1 + 0x3fc) + 1;
      _DAT_1423a2408 = *(int *)(param_1 + 0x400) + 1;
      _DAT_14238eb74 = *(int *)(param_1 + 0x404) + 1;
      _DAT_14214e208 = *(int *)(param_1 + 0x408) + 1;
      _DAT_14214ddc8 = *(int *)(param_1 + 0x40c) + 1;
      _DAT_142389d18 = *(int *)(param_1 + 0x410) + 1;
      _DAT_14214dddc = *(int *)(param_1 + 0x414) + 1;
      _DAT_14214e210 = *(int *)(param_1 + 0x418) + 1;
      _DAT_14214dd98 = *(int *)(param_1 + 0x41c) + 1;
      _DAT_14214dd84 = *(int *)(param_1 + 0x420) + 1;
      if (_DAT_14265ad80 != 0x3a) goto LAB_1407d3276;
      *(undefined4 *)(param_1 + 0x2e0) = 2;
    }
    break;
  case 2:
    FUN_140f6f0d0(_DAT_142507ed8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 3;
    break;
  case 3:
    FUN_1407b6320(param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 4;
    break;
  case 4:
    FUN_1407bc670(param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 5;
    break;
  case 5:
    FUN_1407bf0c0(param_1 + 0x198,0x140000001,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 6;
    break;
  case 6:
    FUN_1407c0c50(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 7;
    break;
  case 7:
    FUN_140f16b80(_DAT_142507ed8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4),1);
    *(undefined4 *)(param_1 + 0x2e0) = 8;
    break;
  case 8:
    lVar19 = param_1 + 0x198;
    FUN_140a659c0(lVar19,0x142515b48,4);
    FUN_140a659c0(lVar19,0x142515b4c,2);
    FUN_140a659c0(lVar19,0x142515b50,4);
    FUN_140a659c0(lVar19,0x142515b54,2);
    FUN_140a659c0(lVar19,&plStack_298,4);
    FUN_140070860(&DAT_1425166a0,(longlong)(int)plStack_298);
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_1425166a8 - _DAT_1425166a0 >> 3);
        iVar26 = iVar26 + 1) {
      plStack_288 = (longlong *)FUN_14154de30(0xf0);
      uVar18 = FUN_1407a5750(plStack_288);
      *(undefined8 *)(_DAT_1425166a0 + (longlong)iVar26 * 8) = uVar18;
      FUN_1407a54c0(uVar18,lVar19);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 9;
    break;
  case 9:
    FUN_140b72860(0x142516038,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_1407aebc0(0x1425166b8,param_1 + 0x198);
    FUN_1407aab90(0x1425223d0,param_1 + 0x198);
    FUN_1407aede0(0x1425223e8,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 10;
    break;
  case 10:
    FUN_1407a4590(0x142515b58,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_140a659c0(param_1 + 0x198,0x142515b20,4);
    FUN_140a65660(param_1 + 0x198,0x142515b28);
    *(undefined4 *)(param_1 + 0x2e0) = 0xb;
    break;
  case 0xb:
    FUN_1407c84b0(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0xc;
    break;
  case 0xc:
    FUN_1407c83d0(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0xd;
    break;
  case 0xd:
    uVar15 = *(undefined4 *)(param_1 + 0x2e4);
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_1424ffb60 - _DAT_1424ffb58 >> 3);
        iVar26 = iVar26 + 1) {
      FUN_141100bb0(*(undefined8 *)(_DAT_1424ffb58 + (longlong)iVar26 * 8),param_1 + 0x198,
                    _DAT_1424ffb58,uVar15);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0xe;
    break;
  case 0xe:
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_1424ffb90 - _DAT_1424ffb88 >> 3);
        iVar26 = iVar26 + 1) {
      FUN_140a659c0(param_1 + 0x198,*(undefined8 *)(_DAT_1424ffb88 + (longlong)iVar26 * 8),4);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0xf;
    break;
  case 0xf:
    FUN_1407a2f30(0x1424ffba0,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x10;
    break;
  case 0x10:
    FUN_14079f6d0(0x142504008,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x11;
    break;
  case 0x11:
    for (puVar23 = _DAT_142504050; puVar23 < puVar20; puVar23 = puVar23 + 1) {
      FUN_141542d20(*puVar23,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x12;
    break;
  case 0x12:
    for (puVar20 = _DAT_142504080; puVar20 < puVar23; puVar20 = puVar20 + 1) {
      FUN_140c4ed00(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x13;
    break;
  case 0x13:
    for (puVar20 = _DAT_1425040b0; puVar20 < puVar24; puVar20 = puVar20 + 1) {
      FUN_140c50960(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x14;
    break;
  case 0x14:
    for (puVar20 = _DAT_1425040e0; puVar20 < puVar25; puVar20 = puVar20 + 1) {
      FUN_1404ee5e0(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x15;
    break;
  case 0x15:
    for (puVar20 = _DAT_142504128; puVar20 < puVar5; puVar20 = puVar20 + 1) {
      FUN_1407a1400(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x16;
    break;
  case 0x16:
    for (puVar20 = _DAT_142504170; puVar20 < puVar6; puVar20 = puVar20 + 1) {
      FUN_140123450(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x17;
    break;
  case 0x17:
    uVar15 = *(undefined4 *)(param_1 + 0x2e4);
    for (puVar20 = _DAT_1425041a0; puVar20 < puVar7; puVar20 = puVar20 + 1) {
      FUN_140141030(*puVar20,param_1 + 0x198,1,uVar15);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x18;
    break;
  case 0x18:
    for (puVar20 = _DAT_1425041d0; puVar20 < puVar8; puVar20 = puVar20 + 1) {
      FUN_140143320(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x19;
    break;
  case 0x19:
    for (puVar20 = _DAT_142504200; puVar20 < puVar9; puVar20 = puVar20 + 1) {
      FUN_1404ef520(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1a;
    break;
  case 0x1a:
    for (puVar20 = _DAT_142504230; puVar20 < puVar10; puVar20 = puVar20 + 1) {
      FUN_1400e3e00(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1b;
    break;
  case 0x1b:
    for (puVar20 = _DAT_142504260; puVar23 = _DAT_142504298, puVar24 = _DAT_142504290,
        puVar20 < puVar11; puVar20 = puVar20 + 1) {
      FUN_140e889b0(*puVar20,param_1 + 0x198);
    }
    for (; puVar20 = _DAT_1425042c8, puVar25 = _DAT_1425042c0, puVar24 < puVar23;
        puVar24 = puVar24 + 1) {
      FUN_140de8180(*puVar24,param_1 + 0x198);
    }
    for (; puVar23 = _DAT_1425042f8, puVar24 = _DAT_1425042f0, puVar25 < puVar20;
        puVar25 = puVar25 + 1) {
      FUN_1404f0dc0(*puVar25,param_1 + 0x198);
    }
    for (; puVar20 = _DAT_142504328, puVar25 = _DAT_142504320, puVar24 < puVar23;
        puVar24 = puVar24 + 1) {
      FUN_14104c780(*puVar24,param_1 + 0x198);
    }
    for (; puVar25 < puVar20; puVar25 = puVar25 + 1) {
      FUN_14104bbd0(*puVar25,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1c;
    break;
  case 0x1c:
    for (puVar20 = _DAT_142504350; puVar20 < puVar12; puVar20 = puVar20 + 1) {
      FUN_140e23a40(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1d;
    break;
  case 0x1d:
    for (puVar20 = _DAT_142504380; puVar20 < puVar13; puVar20 = puVar20 + 1) {
      FUN_14014d8d0(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1e;
    break;
  case 0x1e:
    FUN_14079fe00(0x142504398,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x1f;
    break;
  case 0x1f:
    FUN_1407a00c0(0x1425043c8,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x20;
    break;
  case 0x20:
    lVar19 = param_1 + 0x198;
    FUN_140a659c0(lVar19,0x1418f3196,1);
    FUN_140a659c0(lVar19,0x14214e220,4);
    FUN_140a659c0(lVar19,&DAT_1423a424c,4);
    FUN_140a659c0(lVar19,&DAT_142161ab8,4);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar19 = FUN_14014c0f0(param_1 + 0x1b8);
      if (lVar19 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                  ((longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 4) + param_1 + 0x1a0,2,0);
      }
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x21;
    break;
  case 0x21:
    FUN_141454180(0x1423ed870,*(undefined4 *)(param_1 + 0x2e4),0);
    *(undefined4 *)(param_1 + 0x2e0) = 0x22;
    break;
  case 0x22:
    plStack_288 = (longlong *)FUN_14154de30(0x2b8);
    lVar19 = FUN_14107f0a0(plStack_288);
    FUN_140c4d180(extraout_XMM0_Qa,lVar19,3,0);
    if ((longlong *)(lVar19 + 0x180) != (longlong *)(param_1 + 0x180)) {
      lVar4 = *(longlong *)(param_1 + 0x180);
      FUN_140248a70((longlong *)(lVar19 + 0x180),lVar4,*(longlong *)(param_1 + 0x188) - lVar4 >> 4);
    }
    FUN_140247830(lVar19 + 0x170,param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x18) = 3;
    goto LAB_1407d3276;
  case 0x23:
    FUN_140a94020(0);
    plStack_288 = (longlong *)FUN_14154de30(0xa30);
    lVar19 = FUN_14025b160(plStack_288);
    FUN_140c4d180(extraout_XMM0_Qa_00,lVar19,3,0);
    alStack_f8[2] = 0xd;
    alStack_f8[3] = 0xf;
    alStack_f8[0] = 0x20676e696e726157;
    alStack_f8[1] = 0x6c61646f4d;
    puVar20 = (undefined8 *)FUN_141428a00(param_1 + 0x20,&ppppuStack_98,alStack_f8);
    uStack_2b8 = (ulonglong)uStack_2b8._4_4_ << 0x20;
    plStack_298 = (longlong *)load_supplier_0x154f5ae(*puVar20,0,0x1418d6b20,0x1418d6a68);
    plVar17 = plStack_90;
    if (plStack_298 == (longlong *)0x0) {
      plStack_298 = (longlong *)0x0;
      plStack_290 = (longlong *)0x0;
    }
    else {
      plStack_290 = (longlong *)puVar20[1];
      *puVar20 = 0;
      puVar20[1] = 0;
    }
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar26 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17);
        }
      }
    }
    plVar17 = plStack_298;
    FUN_140070e10(alStack_f8);
    if (plVar17 != (longlong *)0x0) {
      if (plStack_290 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_290 + 1) = (int)plStack_290[1] + 1;
        UNLOCK();
        plVar17 = plStack_298;
      }
      plStack_288 = plStack_298;
      plStack_280 = plStack_290;
      uStack_c8 = 0xd;
      uStack_c0 = 0xf;
      puStack_d8 = (undefined8 *)0x20676e696e726157;
      uStack_d0 = 0x6c61646f4d;
      FUN_14048cd10(lVar19 + 0x20,&ppppuStack_128,&puStack_d8,&plStack_288);
      plVar1 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_120 + 1;
        lVar19 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        plVar17 = plStack_298;
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar26 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar17 = plStack_298;
          if (iVar26 == 1) {
            (**(code **)(*plStack_120 + 8))();
            plVar17 = plStack_298;
          }
        }
      }
      if (0xf < uStack_c0) {
        uVar21 = uStack_c0 + 1;
        puVar20 = puStack_d8;
        if (0xfff < uVar21) {
          uVar21 = uStack_c0 + 0x28;
          puVar20 = (undefined8 *)puStack_d8[-1];
          if (0x1f < (ulonglong)((longlong)puStack_d8 + (-8 - (longlong)puVar20))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        load_supplier_0x154de20(puVar20,uVar21);
      }
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puStack_d8 = (undefined8 *)FUN_140071d90(0x20);
      uStack_c8 = 0x13;
      uStack_c0 = 0x1f;
      *puStack_d8 = 0x20676e696e726157;
      puStack_d8[1] = 0x7263532074786554;
      *(undefined2 *)(puStack_d8 + 2) = 0x6c6f;
      *(undefined1 *)((longlong)puStack_d8 + 0x12) = 0x6c;
      *(undefined1 *)((longlong)puStack_d8 + 0x13) = 0;
      FUN_1400f1920(plVar17,&ppppuStack_268,&puStack_d8);
      if (0xf < uStack_c0) {
        uVar21 = uStack_c0 + 1;
        puVar20 = puStack_d8;
        if (0xfff < uVar21) {
          uVar21 = uStack_c0 + 0x28;
          puVar20 = (undefined8 *)puStack_d8[-1];
          if (0x1f < (ulonglong)((longlong)puStack_d8 + (-8 - (longlong)puVar20))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        load_supplier_0x154de20(puVar20,uVar21);
      }
      alStack_f8[1] = 0;
      alStack_f8[2] = 5;
      alStack_f8[3] = 0xf;
      alStack_f8[0] = 0x726f727245;
      FUN_1407dfd20(ppppuStack_268,&ppppuStack_b8,alStack_f8,
                    "Worldgen has been aborted due to an error.");
      if (0xf < (ulonglong)alStack_f8[3]) {
        uVar21 = alStack_f8[3] + 1;
        lVar19 = alStack_f8[0];
        if (0xfff < uVar21) {
          uVar21 = alStack_f8[3] + 0x28;
          lVar19 = *(longlong *)(alStack_f8[0] + -8);
          if (0x1f < (alStack_f8[0] - lVar19) - 8U) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        load_supplier_0x154de20(lVar19,uVar21);
      }
      (**(code **)(*plVar17 + 0x20))(plVar17);
      plVar17 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar26 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar26 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      plVar17 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_260 + 1;
        lVar19 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar26 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar26 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
    }
    plVar17 = plStack_290;
    _DAT_1418b821c = 3;
    _DAT_1418b8218 = 0xc;
    DAT_1418f3197 = 0;
    *(undefined1 *)(param_1 + 0x18) = 2;
    if (plStack_290 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_290 + 1;
      lVar19 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*plStack_290)(plStack_290);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        iVar26 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          (**(code **)(*plStack_290 + 8))();
        }
      }
    }
    goto LAB_1407d3276;
  }
  *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + 1;
LAB_1407d3276:
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_2d8);
  return;
}

