/* reference PE:6aea05a1:02734000; new-game-load-state-machine; RVA 0x7d4730..0x7d5c4c */

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
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_2d8;
  iVar26 = 0;
  _DAT_1423b2a48 = _DAT_1423b2a48 & 0xfffffffd;
  lStack_258 = param_1;
  FUN_140414c50(0x1418c3620,99);
  lVar19 = _DAT_142660de8;
  puVar13 = _DAT_14250a488;
  puVar12 = _DAT_14250a458;
  puVar11 = _DAT_14250a368;
  puVar10 = _DAT_14250a338;
  puVar9 = _DAT_14250a308;
  puVar8 = _DAT_14250a2d8;
  puVar7 = _DAT_14250a2a8;
  puVar6 = _DAT_14250a278;
  puVar5 = _DAT_14250a230;
  puVar25 = _DAT_14250a1e8;
  puVar24 = _DAT_14250a1b8;
  puVar23 = _DAT_14250a188;
  puVar20 = _DAT_14250a158;
  _DAT_1423b2a48 = _DAT_1423b2a48 | 1;
  if (0x23 < *(uint *)(param_1 + 0x2e0)) goto LAB_1407d5c16;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    if (0x7fffffffffffffffU - _DAT_142660de8 < 5) {
      FUN_140066ec0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plStack_288 = (longlong *)&DAT_142660dd8;
    if (0xf < _DAT_142660df0) {
      plStack_288 = _DAT_142660dd8;
    }
    ppppuStack_98 = (undefined8 *****)0x0;
    plStack_90 = (longlong *)0x0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar21 = _DAT_142660de8 + 5;
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
      pppppuVar16 = (undefined8 *****)FUN_140071e00(uVar22 + 1);
      ppppuStack_98 = pppppuVar16;
    }
    uStack_88 = uVar21;
    uStack_80 = uVar22;
    *(undefined4 *)pppppuVar16 = 0x65766173;
    *(undefined1 *)((longlong)pppppuVar16 + 4) = 0x2f;
    load_supplier_0x155454e((longlong)pppppuVar16 + 5,plStack_288,lVar19);
    *(undefined1 *)((longlong)pppppuVar16 + uVar21) = 0;
    plVar17 = (longlong *)FUN_140071040(&ppppuStack_98,"/world.dat",10);
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
    uVar15 = FUN_141551408();
    ppppuStack_268 = ppppuStack_128;
    plStack_260 = plStack_120;
    FUN_1401447c0(alStack_f8,uVar15,&ppppuStack_268);
    plStack_288 = alStack_f8;
    FUN_14014beb0(auStack_78,alStack_f8);
    uStack_58 = 0;
    FUN_14014c220(alStack_f8);
    FUN_140a68ac0(auStack_78,&ppppuStack_128);
    if (cStack_108 != '\0') {
      uVar18 = FUN_1401bcd50(&ppppuStack_128,&puStack_d8);
      FUN_140a68660(param_1 + 0x198,uVar18,1);
      FUN_140070e80(&puStack_d8);
      if (cStack_108 != '\0') {
        FUN_14014c220(&ppppuStack_128);
      }
    }
    FUN_14014c220(auStack_78);
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
      load_supplier_0x15530d0(pppppuVar16,uVar21);
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
      load_supplier_0x15530d0(pppppuVar16,uVar21);
    }
    plStack_298 = (longlong *)CONCAT44(plStack_298._4_4_,1);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (param_1 + 0x1a0,param_1 + 0x2e4,4);
      _read___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (param_1 + 0x1a0,&plStack_298,4);
      *(bool *)(param_1 + 0x198) = (int)plStack_298 != 0;
    }
    FUN_140a683b0(param_1 + 0x198,auStack_278,2);
    FUN_1407e1790(param_1 + 0x2e8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_1407ae480(param_1 + 0x4f8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    _DAT_14251c114 = *(undefined4 *)(param_1 + 0x888);
    lStack_2a8 = param_1 + 0x870;
    lStack_2b0 = param_1 + 0x858;
    uStack_2b8 = param_1 + 0x840;
    FUN_1407d40e0(0x142660eb0,param_1 + 0x7f8,param_1 + 0x810,param_1 + 0x828);
    _DAT_142660e80 = 0;
    _DAT_142660e88 = 0;
    _DAT_142660e8c = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 1;
    *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + 1;
    FUN_14115ec80(0x1426be130);
    goto LAB_1407d5c16;
  case 1:
    if (DAT_14266cf7b != '\0') goto LAB_1407d5c16;
    if (_DAT_142660e88 < (int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3)) {
      if ((DAT_142660e8c == '\0') && (DAT_142660e8d == '\0')) {
        load_resolve_compatible_mod(&DAT_142660e80,0x142660eb0);
      }
      goto LAB_1407d5c16;
    }
    cVar14 = FUN_14146eb80(0x1423f3970,param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x2e4));
    if (cVar14 == '\x01') {
      *(undefined4 *)(param_1 + 0x2e0) = 0x23;
    }
    else {
      _DAT_14238f5d8 = *(int *)(param_1 + 0x390) + 1;
      _DAT_14216c5cc = *(int *)(param_1 + 0x394) + 1;
      _DAT_14238fe48 = *(int *)(param_1 + 0x398) + 1;
      _DAT_14238fe10 = *(int *)(param_1 + 0x39c) + 1;
      _DAT_1423a8514 = *(int *)(param_1 + 0x3a0) + 1;
      _DAT_14216c584 = *(int *)(param_1 + 0x3a4) + 1;
      _DAT_1423aa32c = 0;
      _DAT_14238fe3c = 0;
      _DAT_14238fe08 = 0;
      _DAT_142153eac = *(int *)(param_1 + 0x3a8) + 1;
      _DAT_1423a8508 = *(int *)(param_1 + 0x3ac) + 1;
      _DAT_14238f5c4 = 0;
      _DAT_14238f5d4 = *(int *)(param_1 + 0x3b0) + 1;
      _DAT_14216c58c = *(int *)(param_1 + 0x3b4) + 1;
      _DAT_1423a850c = *(int *)(param_1 + 0x3b8) + 1;
      _DAT_14238fe40 = *(int *)(param_1 + 0x3bc) + 1;
      _DAT_14216c594 = *(int *)(param_1 + 0x3c0) + 1;
      _DAT_1423aa320 = *(int *)(param_1 + 0x3c4) + 1;
      _DAT_14238fe20 = *(int *)(param_1 + 0x3c8) + 1;
      _DAT_14216c5c4 = *(int *)(param_1 + 0x3cc) + 1;
      _DAT_142153eb4 = *(int *)(param_1 + 0x3d0) + 1;
      _DAT_14216c588 = *(int *)(param_1 + 0x3d4) + 1;
      _DAT_14238fe04 = *(int *)(param_1 + 0x3d8) + 1;
      _DAT_14238f5d0 = *(int *)(param_1 + 0x3dc) + 1;
      _DAT_142394c70 = *(int *)(param_1 + 0x3e0) + 1;
      _DAT_141bd5a2c = *(int *)(param_1 + 0x3e4) + 1;
      _DAT_14238fe00 = *(int *)(param_1 + 1000) + 1;
      _DAT_141bd5a20 = *(int *)(param_1 + 0x3ec) + 1;
      _DAT_142167758 = *(int *)(param_1 + 0x3f0) + 1;
      _DAT_141bd5a24 = *(int *)(param_1 + 0x3f4) + 1;
      _DAT_142153eb8 = *(int *)(param_1 + 0x3f8) + 1;
      _DAT_14216c580 = *(int *)(param_1 + 0x3fc) + 1;
      _DAT_1423a8504 = *(int *)(param_1 + 0x400) + 1;
      _DAT_142394c74 = *(int *)(param_1 + 0x404) + 1;
      _DAT_142153ea8 = *(int *)(param_1 + 0x408) + 1;
      _DAT_14216c5c0 = *(int *)(param_1 + 0x40c) + 1;
      _DAT_14238fe18 = *(int *)(param_1 + 0x410) + 1;
      _DAT_14216c5d4 = *(int *)(param_1 + 0x414) + 1;
      _DAT_142153eb0 = *(int *)(param_1 + 0x418) + 1;
      _DAT_14216c590 = *(int *)(param_1 + 0x41c) + 1;
      _DAT_142153e84 = *(int *)(param_1 + 0x420) + 1;
      if (_DAT_142660e80 != 0x3a) goto LAB_1407d5c16;
      *(undefined4 *)(param_1 + 0x2e0) = 2;
    }
    break;
  case 2:
    FUN_140f74380(_DAT_14250dfd8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 3;
    break;
  case 3:
    FUN_1407b8b20(param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 4;
    break;
  case 4:
    FUN_1407bee70(param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 5;
    break;
  case 5:
    FUN_1407c18c0(param_1 + 0x198,0x140000001,*(undefined4 *)(param_1 + 0x2e4));
    *(undefined4 *)(param_1 + 0x2e0) = 6;
    break;
  case 6:
    FUN_1407c3450(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 7;
    break;
  case 7:
    FUN_140f1be30(_DAT_14250dfd8,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4),1);
    *(undefined4 *)(param_1 + 0x2e0) = 8;
    break;
  case 8:
    lVar19 = param_1 + 0x198;
    FUN_140a683b0(lVar19,0x14251bc48,4);
    FUN_140a683b0(lVar19,0x14251bc4c,2);
    FUN_140a683b0(lVar19,0x14251bc50,4);
    FUN_140a683b0(lVar19,0x14251bc54,2);
    FUN_140a683b0(lVar19,&plStack_298,4);
    FUN_1400708d0(&DAT_14251c7a0,(longlong)(int)plStack_298);
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_14251c7a8 - _DAT_14251c7a0 >> 3);
        iVar26 = iVar26 + 1) {
      plStack_288 = (longlong *)FUN_1415530e0(0xf0);
      uVar18 = FUN_1407a7f50(plStack_288);
      *(undefined8 *)(_DAT_14251c7a0 + (longlong)iVar26 * 8) = uVar18;
      FUN_1407a7cc0(uVar18,lVar19);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 9;
    break;
  case 9:
    FUN_140b75a40(0x14251c138,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_1407b13c0(0x14251c7b8,param_1 + 0x198);
    FUN_1407ad390(0x1425284d0,param_1 + 0x198);
    FUN_1407b15e0(0x1425284e8,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 10;
    break;
  case 10:
    FUN_1407a6d90(0x14251bc58,param_1 + 0x198,*(undefined4 *)(param_1 + 0x2e4));
    FUN_140a683b0(param_1 + 0x198,0x14251bc20,4);
    FUN_140a68050(param_1 + 0x198,0x14251bc28);
    *(undefined4 *)(param_1 + 0x2e0) = 0xb;
    break;
  case 0xb:
    FUN_1407cacb0(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0xc;
    break;
  case 0xc:
    FUN_1407cabd0(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0xd;
    break;
  case 0xd:
    uVar15 = *(undefined4 *)(param_1 + 0x2e4);
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_142505c60 - _DAT_142505c58 >> 3);
        iVar26 = iVar26 + 1) {
      FUN_141105e60(*(undefined8 *)(_DAT_142505c58 + (longlong)iVar26 * 8),param_1 + 0x198,
                    _DAT_142505c58,uVar15);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0xe;
    break;
  case 0xe:
    for (; (ulonglong)(longlong)iVar26 < (ulonglong)(_DAT_142505c90 - _DAT_142505c88 >> 3);
        iVar26 = iVar26 + 1) {
      FUN_140a683b0(param_1 + 0x198,*(undefined8 *)(_DAT_142505c88 + (longlong)iVar26 * 8),4);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0xf;
    break;
  case 0xf:
    FUN_1407a5730(0x142505ca0,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x10;
    break;
  case 0x10:
    FUN_1407a1ed0(0x14250a108,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x11;
    break;
  case 0x11:
    for (puVar23 = _DAT_14250a150; puVar23 < puVar20; puVar23 = puVar23 + 1) {
      FUN_141547fd0(*puVar23,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x12;
    break;
  case 0x12:
    for (puVar20 = _DAT_14250a180; puVar20 < puVar23; puVar20 = puVar20 + 1) {
      FUN_140c51ee0(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x13;
    break;
  case 0x13:
    for (puVar20 = _DAT_14250a1b0; puVar20 < puVar24; puVar20 = puVar20 + 1) {
      FUN_140c53b40(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x14;
    break;
  case 0x14:
    for (puVar20 = _DAT_14250a1e0; puVar20 < puVar25; puVar20 = puVar20 + 1) {
      FUN_1404f0c40(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x15;
    break;
  case 0x15:
    for (puVar20 = _DAT_14250a228; puVar20 < puVar5; puVar20 = puVar20 + 1) {
      FUN_1407a3c00(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x16;
    break;
  case 0x16:
    for (puVar20 = _DAT_14250a270; puVar20 < puVar6; puVar20 = puVar20 + 1) {
      FUN_1401234c0(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x17;
    break;
  case 0x17:
    uVar15 = *(undefined4 *)(param_1 + 0x2e4);
    for (puVar20 = _DAT_14250a2a0; puVar20 < puVar7; puVar20 = puVar20 + 1) {
      FUN_1401410a0(*puVar20,param_1 + 0x198,1,uVar15);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x18;
    break;
  case 0x18:
    for (puVar20 = _DAT_14250a2d0; puVar20 < puVar8; puVar20 = puVar20 + 1) {
      FUN_140143390(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x19;
    break;
  case 0x19:
    for (puVar20 = _DAT_14250a300; puVar20 < puVar9; puVar20 = puVar20 + 1) {
      FUN_1404f1b80(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1a;
    break;
  case 0x1a:
    for (puVar20 = _DAT_14250a330; puVar20 < puVar10; puVar20 = puVar20 + 1) {
      FUN_1400e3e70(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1b;
    break;
  case 0x1b:
    for (puVar20 = _DAT_14250a360; puVar23 = _DAT_14250a398, puVar24 = _DAT_14250a390,
        puVar20 < puVar11; puVar20 = puVar20 + 1) {
      FUN_140e8dc60(*puVar20,param_1 + 0x198);
    }
    for (; puVar20 = _DAT_14250a3c8, puVar25 = _DAT_14250a3c0, puVar24 < puVar23;
        puVar24 = puVar24 + 1) {
      FUN_140ded430(*puVar24,param_1 + 0x198);
    }
    for (; puVar23 = _DAT_14250a3f8, puVar24 = _DAT_14250a3f0, puVar25 < puVar20;
        puVar25 = puVar25 + 1) {
      FUN_1404f3420(*puVar25,param_1 + 0x198);
    }
    for (; puVar20 = _DAT_14250a428, puVar25 = _DAT_14250a420, puVar24 < puVar23;
        puVar24 = puVar24 + 1) {
      FUN_141051a30(*puVar24,param_1 + 0x198);
    }
    for (; puVar25 < puVar20; puVar25 = puVar25 + 1) {
      FUN_141050e80(*puVar25,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1c;
    break;
  case 0x1c:
    for (puVar20 = _DAT_14250a450; puVar20 < puVar12; puVar20 = puVar20 + 1) {
      FUN_140e28cf0(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1d;
    break;
  case 0x1d:
    for (puVar20 = _DAT_14250a480; puVar20 < puVar13; puVar20 = puVar20 + 1) {
      FUN_14014d940(*puVar20,param_1 + 0x198);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x1e;
    break;
  case 0x1e:
    FUN_1407a2600(0x14250a498,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x1f;
    break;
  case 0x1f:
    FUN_1407a28c0(0x14250a4c8,param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2e0) = 0x20;
    break;
  case 0x20:
    lVar19 = param_1 + 0x198;
    FUN_140a683b0(lVar19,0x1418f9296,1);
    FUN_140a683b0(lVar19,0x142153ec4,4);
    FUN_140a683b0(lVar19,&DAT_1423aa348,4);
    FUN_140a683b0(lVar19,&DAT_142167754,4);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar19 = FUN_14014c160(param_1 + 0x1b8);
      if (lVar19 == 0) {
        _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                  ((longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 4) + param_1 + 0x1a0,2,0);
      }
    }
    *(undefined4 *)(param_1 + 0x2e0) = 0x21;
    break;
  case 0x21:
    FUN_141459430(0x1423f3970,*(undefined4 *)(param_1 + 0x2e4),0);
    *(undefined4 *)(param_1 + 0x2e0) = 0x22;
    break;
  case 0x22:
    plStack_288 = (longlong *)FUN_1415530e0(0x2b8);
    lVar19 = FUN_141084350(plStack_288);
    FUN_140c50360(extraout_XMM0_Qa,lVar19,3,0);
    if ((longlong *)(lVar19 + 0x180) != (longlong *)(param_1 + 0x180)) {
      lVar4 = *(longlong *)(param_1 + 0x180);
      FUN_140248ae0((longlong *)(lVar19 + 0x180),lVar4,*(longlong *)(param_1 + 0x188) - lVar4 >> 4);
    }
    FUN_1402478a0(lVar19 + 0x170,param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x18) = 3;
    goto LAB_1407d5c16;
  case 0x23:
    FUN_140a97170(0);
    plStack_288 = (longlong *)FUN_1415530e0(0xa30);
    lVar19 = FUN_14025b2c0(plStack_288);
    FUN_140c50360(extraout_XMM0_Qa_00,lVar19,3,0);
    alStack_f8[2] = 0xd;
    alStack_f8[3] = 0xf;
    alStack_f8[0] = 0x20676e696e726157;
    alStack_f8[1] = 0x6c61646f4d;
    puVar20 = (undefined8 *)FUN_14142dcb0(param_1 + 0x20,&ppppuStack_98,alStack_f8);
    uStack_2b8 = (ulonglong)uStack_2b8._4_4_ << 0x20;
    plStack_298 = (longlong *)load_supplier_0x155485e(*puVar20,0,0x1418dcb40,0x1418dca88);
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
    FUN_140070e80(alStack_f8);
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
      FUN_14048f370(lVar19 + 0x20,&ppppuStack_128,&puStack_d8,&plStack_288);
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
        load_supplier_0x15530d0(puVar20,uVar21);
      }
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      puStack_d8 = (undefined8 *)FUN_140071e00(0x20);
      uStack_c8 = 0x13;
      uStack_c0 = 0x1f;
      *puStack_d8 = 0x20676e696e726157;
      puStack_d8[1] = 0x7263532074786554;
      *(undefined2 *)(puStack_d8 + 2) = 0x6c6f;
      *(undefined1 *)((longlong)puStack_d8 + 0x12) = 0x6c;
      *(undefined1 *)((longlong)puStack_d8 + 0x13) = 0;
      FUN_1400f1990(plVar17,&ppppuStack_268,&puStack_d8);
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
        load_supplier_0x15530d0(puVar20,uVar21);
      }
      alStack_f8[1] = 0;
      alStack_f8[2] = 5;
      alStack_f8[3] = 0xf;
      alStack_f8[0] = 0x726f727245;
      FUN_1407e26c0(ppppuStack_268,&ppppuStack_b8,alStack_f8,
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
        load_supplier_0x15530d0(lVar19,uVar21);
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
    _DAT_1418be238 = 3;
    _DAT_1418be234 = 0xc;
    DAT_1418f9297 = 0;
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
    goto LAB_1407d5c16;
  }
  *(int *)(param_1 + 0x890) = *(int *)(param_1 + 0x890) + 1;
LAB_1407d5c16:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_2d8);
  return;
}


/* reference PE:6aea05a1:02734000; saved-game-load-state-machine; RVA 0x7d5ce0..0x7d9fec */

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
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_1e8;
  uVar57 = 0;
  _DAT_1423b2a48 = _DAT_1423b2a48 & 0xfffffffd;
  aplStack_178[0] = param_1;
  plStack_168 = param_1;
  uVar59 = FUN_140414c50(0x1418c3620,99);
  puVar12 = _DAT_14250a2a8;
  puVar7 = _DAT_14250a278;
  puVar41 = _DAT_14250a230;
  puVar22 = _DAT_14250a1e8;
  plVar28 = _DAT_142407550;
  uVar54 = _DAT_1423b2a48;
  _DAT_1423b2a48 = _DAT_1423b2a48 | 1;
  if (0x33 < *(uint *)(param_1 + 0x33)) goto override_jmp_1407d5d5f_case_50;
  iVar16 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x33)) {
  case 0:
    plVar28 = param_1 + 0x34;
    param_1[0x58] = 0x142167760;
    param_1[0x59] = 20000;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    param_1[0x5b] = 0x142153ed0;
    param_1[0x5c] = 80000;
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(param_1[0x35] + 4) + 8 + (longlong)plVar28,0,0);
    lVar29 = _DAT_142660de8;
    if (0x7fffffffffffffffU - _DAT_142660de8 < 5) {
      FUN_140066ec0();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar55 = &DAT_142660dd8;
    if (0xf < _DAT_142660df0) {
      puVar55 = _DAT_142660dd8;
    }
    pppppppbStack_e8 = (byte *******)0x0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uVar57 = _DAT_142660de8 + 5;
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
      pppppppbVar21 = (byte *******)FUN_140071e00(uVar50 + 1);
      pppppppbStack_e8 = pppppppbVar21;
    }
    uStack_d8 = uVar57;
    uStack_d0 = uVar50;
    *(undefined4 *)pppppppbVar21 = 0x65766173;
    *(byte *)((longlong)pppppppbVar21 + 4) = 0x2f;
    load_supplier_0x155454e((byte *)((longlong)pppppppbVar21 + 5),puVar55,lVar29);
    *(byte *)((longlong)pppppppbVar21 + uVar57) = 0;
    puVar22 = (undefined8 *)FUN_140071040(&pppppppbStack_e8,"/world.sav",10);
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
    uVar59 = FUN_141551408();
    FUN_1401447c0(appppppbStack_198,uVar59,&pppppppuStack_128);
    apppppppbStack_108[0] = appppppbStack_198;
    FUN_14014beb0(&uStack_78,appppppbStack_198);
    uStack_58 = uStack_58 & 0xffffffffffffff00;
    FUN_14014c220(appppppbStack_198);
    FUN_140a68ac0(&uStack_78,auStack_c8);
    if (cStack_a8 == '\0') {
      cVar14 = '\0';
    }
    else {
      uVar30 = FUN_1401bcd50(auStack_c8,auStack_a0);
      cVar14 = FUN_140a68660(plVar28,uVar30,1);
      FUN_140070e80(auStack_a0);
      if (cStack_a8 != '\0') {
        FUN_14014c220(auStack_c8);
      }
    }
    FUN_14014c220(&uStack_78);
    FUN_140070e80(&pppppppuStack_148);
    FUN_140070e80(&pppppppbStack_e8);
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
      if (_DAT_142167750 < (int)param_1[0xd0]) {
        *(undefined4 *)(param_1 + 0x33) = 0x33;
        FUN_140a68600(plVar28);
      }
      else {
        FUN_1407d06e0(param_1 + 0xd1,plVar28);
        FUN_1407ae480(param_1 + 0x5d,plVar28,(int)param_1[0xd0]);
        _DAT_14251c114 = (undefined4)param_1[0xcf];
        if ((int)param_1[0xd0] < 0x815) {
          plVar28 = param_1 + 0xbd;
          FUN_1400bcf10(plVar28,"vanilla_descriptors_graphics");
          plVar23 = param_1 + 0xc0;
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          plVar44 = param_1 + 0xc3;
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          param_1 = param_1 + 0xcc;
          FUN_1400bcf10(param_1,"50.01");
          plVar56 = aplStack_178[0];
          plVar42 = aplStack_178[0] + 0xc6;
          FUN_1407da120(plVar42);
          plVar56 = plVar56 + 0xc9;
          FUN_1400bcf10(plVar56,"Vanilla Descriptors Graphics");
          FUN_1400bcf10(plVar28,"vanilla_plants_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          FUN_1400bcf10(param_1,"50.01");
          FUN_1407da1a0(plVar42);
          FUN_1400bcf10(plVar56,"Vanilla Plants Graphics");
          FUN_1400bcf10(plVar28,"vanilla_items_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          FUN_1400bcf10(param_1,"50.01");
          FUN_1407da220(plVar42);
          FUN_1400bcf10(plVar56,"Vanilla Items Graphics");
          FUN_1400bcf10(plVar28,"vanilla_buildings_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          FUN_1400bcf10(param_1,"50.01");
          FUN_1407da2a0(plVar42,"data/vanilla/vanilla_buildings_graphics/");
          FUN_1400bcf10(plVar56,"Vanilla Buildings Graphics");
          FUN_1400bcf10(plVar28,"vanilla_creatures_graphics");
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          appppppbStack_198[0]._0_4_ = 0x1389;
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          FUN_1400bcf10(param_1,"50.01");
          FUN_1407da2a0(plVar42,"data/vanilla/vanilla_creatures_graphics/");
          FUN_1400bcf10(plVar56,"Vanilla Creatures Graphics");
          FUN_1400bcf10(plVar28,"vanilla_interactions_graphics");
          appppppbStack_198[0]._0_4_ = 0x13ed;
          load_supplier_0x70a40(plVar23,appppppbStack_198);
          appppppbStack_198[0] = (byte ******)CONCAT44(appppppbStack_198[0]._4_4_,0x1389);
          load_supplier_0x70a40(plVar44,appppppbStack_198);
          FUN_1400bcf10(param_1,"51.01");
          FUN_1407da330(plVar42);
          FUN_1400bcf10(plVar56,"Vanilla Interactions Graphics");
          param_1 = aplStack_178[0];
        }
        plStack_1b8 = param_1 + 0xcc;
        plStack_1c0 = param_1 + 0xc9;
        pcStack_1c8 = (code *)(param_1 + 0xc6);
        FUN_1407d4090(&DAT_142660e80,param_1 + 0xbd,param_1 + 0xc0,param_1 + 0xc3);
        *(undefined4 *)(param_1 + 0x33) = 1;
        *(int *)((longlong)param_1 + 0x19c) = *(int *)((longlong)param_1 + 0x19c) + 1;
        FUN_14115ec80(0x1426be130);
      }
    }
    goto override_jmp_1407d5d5f_case_50;
  case 1:
    if (DAT_14266cf7b != '\0') goto override_jmp_1407d5d5f_case_50;
    if (_DAT_142660e88 < (int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3)) {
      if ((DAT_142660e8c == '\0') && (DAT_142660e8d == '\0')) {
        load_resolve_compatible_mod(&DAT_142660e80,0x142660eb0);
      }
      goto override_jmp_1407d5d5f_case_50;
    }
    cVar14 = FUN_14146eb80(0x1423f3970,param_1 + 0x5d,(int)param_1[0xd0]);
    if (cVar14 == '\x01') {
      *(undefined4 *)(param_1 + 0x33) = 0x33;
    }
    else {
      _DAT_14238f5d8 = (int)param_1[0xd1] + 1;
      _DAT_14216c5cc = *(int *)((longlong)param_1 + 0x68c) + 1;
      _DAT_14238fe48 = (int)param_1[0xd2] + 1;
      _DAT_14238fe10 = *(int *)((longlong)param_1 + 0x694) + 1;
      _DAT_1423a8514 = (int)param_1[0xd3] + 1;
      _DAT_14216c584 = *(int *)((longlong)param_1 + 0x69c) + 1;
      _DAT_1423aa32c = (int)param_1[0xd4] + 1;
      _DAT_14238fe3c = *(int *)((longlong)param_1 + 0x6a4) + 1;
      _DAT_14238fe08 = (int)param_1[0xd5] + 1;
      _DAT_142153eac = *(int *)((longlong)param_1 + 0x6ac) + 1;
      _DAT_1423a8508 = (int)param_1[0xd6] + 1;
      _DAT_14238f5c4 = *(int *)((longlong)param_1 + 0x6b4) + 1;
      _DAT_14238f5d4 = (int)param_1[0xd7] + 1;
      _DAT_14216c58c = *(int *)((longlong)param_1 + 0x6bc) + 1;
      _DAT_1423a850c = (int)param_1[0xd8] + 1;
      _DAT_14238fe40 = *(int *)((longlong)param_1 + 0x6c4) + 1;
      _DAT_14216c594 = (int)param_1[0xd9] + 1;
      _DAT_1423aa320 = *(int *)((longlong)param_1 + 0x6cc) + 1;
      _DAT_14238fe20 = (int)param_1[0xda] + 1;
      _DAT_14216c5c4 = *(int *)((longlong)param_1 + 0x6d4) + 1;
      _DAT_142153eb4 = (int)param_1[0xdb] + 1;
      _DAT_14216c588 = *(int *)((longlong)param_1 + 0x6dc) + 1;
      _DAT_14238fe04 = (int)param_1[0xdc] + 1;
      _DAT_14238f5d0 = *(int *)((longlong)param_1 + 0x6e4) + 1;
      _DAT_142394c70 = (int)param_1[0xdd] + 1;
      _DAT_141bd5a2c = *(int *)((longlong)param_1 + 0x6ec) + 1;
      _DAT_14238fe00 = (int)param_1[0xde] + 1;
      _DAT_141bd5a20 = *(int *)((longlong)param_1 + 0x6f4) + 1;
      _DAT_142167758 = (int)param_1[0xdf] + 1;
      _DAT_141bd5a24 = *(int *)((longlong)param_1 + 0x6fc) + 1;
      _DAT_142153eb8 = (int)param_1[0xe0] + 1;
      _DAT_14216c580 = *(int *)((longlong)param_1 + 0x704) + 1;
      _DAT_1423a8504 = (int)param_1[0xe1] + 1;
      _DAT_142394c74 = *(int *)((longlong)param_1 + 0x70c) + 1;
      _DAT_142153ea8 = (int)param_1[0xe2] + 1;
      _DAT_14216c5c0 = *(int *)((longlong)param_1 + 0x714) + 1;
      _DAT_14238fe18 = (int)param_1[0xe3] + 1;
      _DAT_14216c5d4 = *(int *)((longlong)param_1 + 0x71c) + 1;
      _DAT_142153eb0 = (int)param_1[0xe4] + 1;
      _DAT_14216c590 = *(int *)((longlong)param_1 + 0x724) + 1;
      _DAT_142153e84 = (int)param_1[0xe5] + 1;
      if (_DAT_142660e80 != 0x3a) goto override_jmp_1407d5d5f_case_50;
      *(undefined4 *)(param_1 + 0x33) = 2;
    }
    break;
  case 2:
    FUN_1407b32e0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 3;
    break;
  case 3:
    FUN_1407b8b20(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 4;
    break;
  case 4:
    FUN_1407bbca0(param_1 + 0x34,(int)param_1[0xd0],1);
    *(undefined4 *)(param_1 + 0x33) = 5;
    break;
  case 5:
    FUN_1407bc330(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 6;
    break;
  case 6:
    FUN_1407bbd40(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 7;
    break;
  case 7:
    FUN_1407bcf90(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 8;
    break;
  case 8:
    FUN_1407bee70(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 9;
    break;
  case 9:
    FUN_1407bef00(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 10;
    break;
  case 10:
    FUN_1414ec490(uVar59,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xb;
    break;
  case 0xb:
    FUN_1407c0a80(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0xc;
    break;
  case 0xc:
    FUN_1407c18c0(param_1 + 0x34,0,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xd;
    break;
  case 0xd:
    FUN_1407c1960(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0xe;
    break;
  case 0xe:
    FUN_1407c2610(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0xf;
    break;
  case 0xf:
    FUN_1407c3050(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x10;
    break;
  case 0x10:
    FUN_1407c30c0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x11;
    break;
  case 0x11:
    FUN_1407c3180(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x12;
    break;
  case 0x12:
    FUN_1407c3450(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x13;
    break;
  case 0x13:
    FUN_1407a4b50(&DAT_142505c40,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x14;
    break;
  case 0x14:
    FUN_1407a4c70(0x142505c70,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x15;
    break;
  case 0x15:
    FUN_1407a5730(0x142505ca0,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x16;
    break;
  case 0x16:
    FUN_1407a1ed0(0x14250a108,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x17;
    break;
  case 0x17:
    FUN_1407a1a10(0x14250a138,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x18;
    break;
  case 0x18:
    FUN_1407a2ce0(0x14250a168,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x19;
    break;
  case 0x19:
    FUN_1407a4750(0x14250a198,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x1a;
    break;
  case 0x1a:
    for (puVar41 = _DAT_14250a1e0; puVar41 < puVar22; puVar41 = puVar41 + 1) {
      FUN_1404f0c40(*puVar41,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1b;
    break;
  case 0x1b:
    for (puVar22 = _DAT_14250a228; puVar22 < puVar41; puVar22 = puVar22 + 1) {
      FUN_1407a3c00(*puVar22,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1c;
    break;
  case 0x1c:
    for (puVar22 = _DAT_14250a270; puVar22 < puVar7; puVar22 = puVar22 + 1) {
      FUN_1401234c0(*puVar22,param_1 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1d;
    break;
  case 0x1d:
    lVar29 = param_1[0xd0];
    for (puVar22 = _DAT_14250a2a0; puVar22 < puVar12; puVar22 = puVar22 + 1) {
      FUN_1401410a0(*puVar22,param_1 + 0x34,0,(int)lVar29);
    }
    *(undefined4 *)(param_1 + 0x33) = 0x1e;
    break;
  case 0x1e:
    FUN_1407a2d80(0x14250a2b8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x1f;
    break;
  case 0x1f:
    FUN_1407a6bc0(0x14250a2e8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x20;
    break;
  case 0x20:
    FUN_1407a2130(0x14250a318,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x21;
    break;
  case 0x21:
    FUN_1407a17b0(0x14250a348,param_1 + 0x34);
    FUN_1407a18d0(0x14250a378,param_1 + 0x34);
    FUN_1407a1970(0x14250a3a8,param_1 + 0x34);
    FUN_1407a1590(0x14250a3d8,param_1 + 0x34);
    FUN_1407a1710(0x14250a408,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x22;
    break;
  case 0x22:
    FUN_1407a4e70(&DAT_14250a438,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x23;
    break;
  case 0x23:
    FUN_1407a2a30(0x14250a468,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x24;
    break;
  case 0x24:
    FUN_1407a2600(0x14250a498,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x25;
    break;
  case 0x25:
    FUN_1407a28c0(0x14250a4c8,param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x26;
    break;
  case 0x26:
    FUN_1407c38f0(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x27;
    break;
  case 0x27:
    FUN_1407c8700(0x1423b36b0,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x28;
    break;
  case 0x28:
    FUN_141494810(0x1423f3970,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x29;
    break;
  case 0x29:
    FUN_1407cacb0(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x2a;
    break;
  case 0x2a:
    FUN_1407cabd0(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x33) = 0x2b;
    break;
  case 0x2b:
    FUN_1407cb8a0(0x142662ff0,param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x2c;
    break;
  case 0x2c:
    FUN_1407b6f10(param_1 + 0x34,(int)param_1[0xd0]);
    *(undefined4 *)(param_1 + 0x33) = 0x2d;
    break;
  case 0x2d:
    FUN_140a68600(param_1 + 0x34);
    _DAT_1418be234 = (uint)*(short *)((longlong)param_1 + 0x72c);
    if (_DAT_1418be234 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(*(short *)((longlong)param_1 + 0x72c)) {
      case 0:
        goto override_jmp_1407d6da7_case_0;
      case 1:
        _DAT_1418be238 = 1;
      }
    }
    else {
override_jmp_1407d6da7_case_0:
      _DAT_1418be238 = 0;
    }
    cVar14 = load_supplier_0x735c0(0x1423b3108,0xd);
    if (cVar14 != '\0') {
      DAT_1418f92a6 = 1;
    }
    *(undefined4 *)(param_1 + 0x33) = 0x2e;
    break;
  case 0x2e:
    FUN_141459430(0x1423f3970,(int)param_1[0xd0],1);
    *(undefined4 *)(param_1 + 0x33) = 0x2f;
    break;
  case 0x2f:
    uVar50 = uVar57;
    if (_DAT_1418be238 == 1) {
      _DAT_14266b9b4 = 0;
      _DAT_14266c6d0 = _DAT_142167754;
      _DAT_14266c6d4 = _DAT_1423aa348;
      _DAT_14266c6d8 = _DAT_142153ec0;
      _DAT_142666168 = _DAT_142666168 & 0xfffeffff;
      DAT_14266b9b8 = 0;
      _DAT_14266b948 = 0;
      if (((longlong)_DAT_142407550 - (longlong)_DAT_142407548 >> 3 == 0) || (_DAT_142407590 == 0))
      {
        _DAT_142407590 = 0;
      }
      else {
        _DAT_142407590 = *_DAT_142407548;
        if (_DAT_142407590 != 0) {
          uVar54 = _DAT_142666164;
          for (puVar22 = *(undefined8 **)(_DAT_142407590 + 2000);
              puVar22 != *(undefined8 **)(_DAT_142407590 + 0x7d8); puVar22 = puVar22 + 1) {
            if (*(int *)*puVar22 != -1) {
              uVar54 = uVar54 | 1;
              _DAT_142666164 = uVar54;
            }
          }
        }
      }
      iVar18 = (int)(_DAT_142407600 - _DAT_1424075f8 >> 3) + -1;
      lVar29 = (longlong)iVar18;
      if (-1 < iVar18) {
        do {
          lVar24 = *(longlong *)(_DAT_1424075f8 + lVar29 * 8);
          if ((0 < *(int *)(lVar24 + 0x60)) && ((**(byte **)(lVar24 + 0x58) & 1) != 0)) {
            _DAT_142407590 =
                 *(longlong *)(*(longlong *)(_DAT_1424075f8 + (longlong)iVar18 * 8) + 0x18);
            _DAT_14266b948 = iVar18;
            break;
          }
          iVar18 = iVar18 + -1;
          lVar29 = lVar29 + -1;
        } while (-1 < lVar29);
      }
      FUN_1400e0b70(0x1418ca3b0,0x1418cb2b8,0);
    }
LAB_1407d6f40:
    iVar18 = (int)uVar50;
    if ((ulonglong)(longlong)iVar18 <
        (ulonglong)((longlong)_DAT_142407550 - (longlong)_DAT_142407548 >> 3)) {
      pppppppbVar21 = (byte *******)_DAT_142407548[iVar18];
      if (((ulonglong)pppppppbVar21[0x22] & 0x200) != 0) {
        if (_DAT_142407568 == _DAT_142407570) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc360(&DAT_142407560,_DAT_142407568,apppppppbStack_108);
        }
        else {
          *_DAT_142407568 = (longlong)pppppppbVar21;
          _DAT_142407568 = _DAT_142407568 + 1;
          apppppppbStack_108[0] = pppppppbVar21;
        }
      }
      uVar50 = uVar57;
      if (*(short *)(pppppppbVar21 + 0x14) == 0x68) {
        if (_DAT_142407580 == _DAT_142407588) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc360(0x142407578,_DAT_142407580,apppppppbStack_108);
        }
        else {
          *_DAT_142407580 = pppppppbVar21;
          _DAT_142407580 = _DAT_142407580 + 1;
          apppppppbStack_108[0] = pppppppbVar21;
        }
      }
LAB_1407d7000:
      do {
        iVar17 = (int)uVar50;
        if ((ulonglong)((longlong)pppppppbVar21[0x164] - (longlong)pppppppbVar21[0x163] >> 4) <=
            (ulonglong)(longlong)iVar17) goto LAB_1407d71e3;
        iVar36 = *(int *)((longlong)pppppppbVar21[0x163][(longlong)iVar17 * 2] + 0x14);
        if ((iVar36 != -1) && (iVar35 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar35 != 0)) {
          iVar35 = iVar35 + -1;
          uVar37 = uVar57;
          uVar50 = uVar57;
          if (-1 < iVar35) {
            do {
              iVar51 = (int)uVar37 + iVar35 >> 1;
              uVar50 = *(ulonglong *)(_DAT_1424078d0 + (longlong)iVar51 * 8);
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
            apppppppbStack_108[0] = (byte *******)FUN_1415530e0(0x18);
            *(undefined4 *)apppppppbStack_108[0] = 0xb;
            apppppppbStack_108[0][1] = (byte ******)pppppppbVar21;
            apppppppbStack_108[0][2] = ppppppbVar45;
            puVar22 = *(undefined8 **)(uVar50 + 0x28);
            if (puVar22 == *(undefined8 **)(uVar50 + 0x30)) {
              FUN_1400bc360(uVar50 + 0x20,puVar22,apppppppbStack_108);
            }
            else {
              *puVar22 = apppppppbStack_108[0];
              *(longlong *)(uVar50 + 0x28) = *(longlong *)(uVar50 + 0x28) + 8;
            }
          }
        }
        iVar36 = *(int *)(pppppppbVar21[0x163][(longlong)iVar17 * 2] + 3);
        if ((iVar36 != -1) && (iVar35 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar35 != 0)) {
          iVar35 = iVar35 + -1;
          uVar37 = uVar57;
          uVar50 = uVar57;
          if (-1 < iVar35) {
            do {
              iVar51 = (int)uVar37 + iVar35 >> 1;
              uVar50 = *(ulonglong *)(_DAT_1424078d0 + (longlong)iVar51 * 8);
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
            apppppppbStack_108[0] = (byte *******)FUN_1415530e0(0x18);
            *(undefined4 *)apppppppbStack_108[0] = 0xb;
            apppppppbStack_108[0][1] = (byte ******)pppppppbVar21;
            apppppppbStack_108[0][2] = ppppppbVar45;
            puVar22 = *(undefined8 **)(uVar50 + 0x28);
            if (puVar22 != *(undefined8 **)(uVar50 + 0x30)) {
              *puVar22 = apppppppbStack_108[0];
              *(longlong *)(uVar50 + 0x28) = *(longlong *)(uVar50 + 0x28) + 8;
              uVar50 = (ulonglong)(iVar17 + 1);
              goto LAB_1407d7000;
            }
            FUN_1400bc360(uVar50 + 0x20,puVar22,apppppppbStack_108);
          }
        }
        uVar50 = (ulonglong)(iVar17 + 1);
      } while( true );
    }
    uVar50 = _DAT_1426be028 - _DAT_1426be020 >> 3;
    while( true ) {
      uVar54 = (int)uVar50 - 1;
      uVar50 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      lVar29 = *(longlong *)(_DAT_1426be020 + (longlong)(int)uVar54 * 8);
      sVar48 = *(short *)(lVar29 + 0xe);
      sVar39 = *(short *)(lVar29 + 0xc);
      sVar46 = *(short *)(lVar29 + 10);
      if (((((sVar46 < 0) || (_DAT_14250a55c <= sVar46)) || (sVar39 < 0)) ||
          ((_DAT_14250a560 <= sVar39 || (sVar48 < 0)))) || (_DAT_14250a564 <= sVar48)) {
LAB_1407d7285:
        lVar29 = 0x142528588;
      }
      else {
        if ((_DAT_14250a528 == 0) ||
           (lVar29 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_14250a528 + (longlong)(sVar46 >> 4) * 8) +
                        (longlong)(sVar39 >> 4) * 8) + (longlong)sVar48 * 8), lVar29 == 0))
        goto LAB_1407d7285;
        lVar29 = lVar29 + 0x68;
      }
      if (*(undefined8 **)(lVar29 + 8) == *(undefined8 **)(lVar29 + 0x10)) {
        FUN_140072200();
      }
      else {
        **(undefined8 **)(lVar29 + 8) = *(undefined8 *)(_DAT_1426be020 + (longlong)(int)uVar54 * 8);
        *(longlong *)(lVar29 + 8) = *(longlong *)(lVar29 + 8) + 8;
      }
    }
    _DAT_14250ed28 = 0xffffffff;
    _DAT_14250ed2c = _DAT_14250ed2c | 1;
    uVar50 = uVar57;
    uVar37 = uVar57;
    if (_DAT_14250a518 - _DAT_14250a510 >> 3 != 0) {
      do {
        *(undefined4 *)(*(longlong *)(_DAT_14250a510 + uVar50) + 0x80) = 0xffffffff;
        puVar2 = (uint *)(*(longlong *)(_DAT_14250a510 + uVar50) + 0x84);
        *puVar2 = *puVar2 | 1;
        uVar54 = (int)uVar37 + 1;
        uVar50 = uVar50 + 8;
        uVar37 = (ulonglong)uVar54;
      } while ((ulonglong)(longlong)(int)uVar54 < (ulonglong)(_DAT_14250a518 - _DAT_14250a510 >> 3))
      ;
    }
    uVar50 = _DAT_1423b9c60 - _DAT_1423b9c58 >> 3;
    plVar28 = _DAT_142407530;
    while( true ) {
      uVar54 = (int)uVar50 - 1;
      uVar50 = (ulonglong)uVar54;
      uVar37 = uVar57;
      if ((int)uVar54 < 0) break;
      puVar25 = *(undefined4 **)(_DAT_1423b9c58 + (longlong)(int)uVar54 * 8);
      uVar37 = *(longlong *)(puVar25 + 0x20) - *(longlong *)(puVar25 + 0x1e) >> 2;
      while( true ) {
        uVar54 = (int)uVar37 - 1;
        uVar37 = (ulonglong)uVar54;
        if ((int)uVar54 < 0) break;
        iVar18 = *(int *)(*(longlong *)(puVar25 + 0x1e) + (longlong)(int)uVar54 * 4);
        iVar17 = (int)((longlong)_DAT_142407538 - (longlong)plVar28 >> 3);
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
              FUN_1400bb4a0(*puVar25);
              plVar28 = _DAT_142407530;
            }
            else {
              FUN_1400bb4a0(*puVar25);
              plVar28 = _DAT_142407530;
            }
          }
        }
      }
    }
    while( true ) {
      iVar18 = (int)uVar37;
      uVar37 = (ulonglong)iVar18;
      lVar29 = _DAT_142408590;
      uVar50 = uVar57;
      if ((ulonglong)(_DAT_1424103b0 - _DAT_1424103a8 >> 3) <= uVar37) break;
      plVar28 = *(longlong **)(_DAT_1424103a8 + uVar37 * 8);
      (**(code **)(*plVar28 + 0x208))(plVar28,0);
      iVar17 = (**(code **)(**(longlong **)(_DAT_1424103a8 + uVar37 * 8) + 0xd0))();
      if (iVar17 == 0x1e) {
        pppppppbVar21 = *(byte ********)(_DAT_1424103a8 + uVar37 * 8);
        if ((*(int *)(pppppppbVar21 + 0x34) == -1) ||
           (lVar29 = FUN_14014f1f0(&DAT_142407530,*(int *)(pppppppbVar21 + 0x34),
                                   (byte *)((longlong)pppppppbVar21 + 0x1a4)), lVar29 == 0))
        goto LAB_1407d75cb;
        for (puVar22 = *(undefined8 **)(lVar29 + 0x450); apppppppbStack_108[0] = pppppppbVar21,
            puVar22 != *(undefined8 **)(lVar29 + 0x458); puVar22 = puVar22 + 1) {
          if ((byte *******)*puVar22 == pppppppbVar21) goto LAB_1407d74f7;
        }
        puVar22 = *(undefined8 **)(lVar29 + 0x458);
        if (puVar22 == *(undefined8 **)(lVar29 + 0x460)) {
          FUN_1400bc360(lVar29 + 0x450,puVar22,apppppppbStack_108);
        }
        else {
          *puVar22 = pppppppbVar21;
          *(longlong *)(lVar29 + 0x458) = *(longlong *)(lVar29 + 0x458) + 8;
        }
LAB_1407d74f7:
        iVar17 = *(int *)(lVar29 + 0x3c0);
        if (iVar17 == -1) goto LAB_1407d75cb;
        iVar36 = (int)((longlong)_DAT_142407538 - (longlong)_DAT_142407530 >> 3);
        if ((iVar36 != 0) && (iVar36 = iVar36 + -1, iVar35 = iVar16, -1 < iVar36)) {
          do {
            iVar51 = iVar35 + iVar36 >> 1;
            iVar34 = *(int *)(_DAT_142407530[iVar51] + 0x130);
            uVar50 = _DAT_142407530[iVar51];
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
        goto LAB_1407d75cb;
        for (puVar22 = *(undefined8 **)(uVar50 + 0x450); puVar22 != *(undefined8 **)(uVar50 + 0x458)
            ; puVar22 = puVar22 + 1) {
          apppppppbStack_108[0] = pppppppbVar21;
          if ((byte *******)*puVar22 == pppppppbVar21) goto LAB_1407d75cb;
        }
        puVar22 = *(undefined8 **)(uVar50 + 0x458);
        if (puVar22 == *(undefined8 **)(uVar50 + 0x460)) {
          apppppppbStack_108[0] = pppppppbVar21;
          FUN_1400bc360(uVar50 + 0x450,puVar22,apppppppbStack_108);
          goto LAB_1407d75cb;
        }
        *puVar22 = pppppppbVar21;
        *(longlong *)(uVar50 + 0x458) = *(longlong *)(uVar50 + 0x458) + 8;
        uVar37 = (ulonglong)(iVar18 + 1);
        apppppppbStack_108[0] = pppppppbVar21;
      }
      else {
LAB_1407d75cb:
        uVar37 = (ulonglong)(iVar18 + 1);
      }
    }
    while( true ) {
      iVar18 = (int)uVar50;
      plVar28 = _DAT_1424078e8;
      uVar50 = uVar57;
      if ((ulonglong)(_DAT_142408598 - lVar29 >> 3) <= (ulonglong)(longlong)iVar18) break;
      plVar28 = *(longlong **)(lVar29 + (longlong)iVar18 * 8);
      if ((*(uint *)(plVar28 + 2) & 0x20000) == 0) {
        (**(code **)(*plVar28 + 0x460))();
        lVar29 = _DAT_142408590;
      }
      uVar50 = (ulonglong)(iVar18 + 1);
    }
    while( true ) {
      puVar22 = _DAT_14250a200;
      iVar18 = (int)uVar50;
      puVar41 = _DAT_14250a1f8;
      if ((ulonglong)((longlong)_DAT_1424078f0 - (longlong)plVar28 >> 3) <=
          (ulonglong)(longlong)iVar18) break;
      plVar23 = (longlong *)plVar28[iVar18];
      if ((*(uint *)(plVar23 + 2) & 0x20000) == 0) {
        (**(code **)(*plVar23 + 0x328))(plVar23,0);
        plVar28 = _DAT_1424078e8;
      }
      uVar50 = (ulonglong)(iVar18 + 1);
    }
    for (; puVar41 != puVar22; puVar41 = puVar41 + 1) {
      if (*(int *)*puVar41 != 0) {
        FUN_14013e3a0((int *)*puVar41,0x14250a210);
      }
    }
    FUN_1414a5d90(0x1423f3970);
    DAT_1423bc67e = 0;
    FUN_14110bf50(0x1424115e8);
    _DAT_142411578 = 0x101;
    DAT_14252857c = 1;
    iVar18 = (int)(_DAT_14250a518 - _DAT_14250a510 >> 3) + -1;
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
        load_supplier_0x1542530(*(longlong *)(_DAT_14250a510 + lVar29 * 8) + 0xba0,&uStack_78);
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    _DAT_142660dbc = 1;
    DAT_1418cf5b1 = 1;
    _DAT_142661550 = 0;
    DAT_142661758 = 1;
    plVar23 = _DAT_142407530;
    plVar28 = _DAT_142407538;
    if (_DAT_1418be238 == 0) {
      FUN_140e86480();
      plVar23 = _DAT_142407530;
      plVar28 = _DAT_142407538;
    }
    for (; plVar44 = _DAT_14250a440, plVar42 = _DAT_14250a438, plVar23 < plVar28;
        plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if (*(longlong *)(lVar29 + 0x13d0) != *(longlong *)(lVar29 + 0x13d8)) {
        *(longlong *)(lVar29 + 0x13d8) = *(longlong *)(lVar29 + 0x13d0);
      }
    }
LAB_1407d7797:
    do {
      if (plVar44 <= plVar42) {
        plVar23 = *(longlong **)(_DAT_14250dfd8 + 0x210);
        plVar44 = _DAT_1424078e8;
        for (plVar28 = *(longlong **)(_DAT_14250dfd8 + 0x208); plVar28 < plVar23;
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
              uVar37 = (longlong)_DAT_1424078f0 - (longlong)plVar44 >> 3;
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
                  if (iVar16 == *(int *)(plVar44[lVar24] + 0x1c)) goto LAB_1407d796a;
                  uVar49 = (ulonglong)(iVar17 + 1);
                }
              }
              iVar17 = -1;
LAB_1407d796a:
              if (iVar17 != -1) {
                pppppppuStack_128 = (undefined8 *******)0x0;
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                pppppppuStack_128 = (undefined8 *******)FUN_140071e00(0x40);
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
                FUN_140c7d140(**(undefined8 **)
                                (*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar54 * 8),
                              &pppppppuStack_148,0,0xffffffff);
                pppppppuVar26 = &pppppppuStack_148;
                if (0xf < uStack_130) {
                  pppppppuVar26 = pppppppuStack_148;
                }
                FUN_140071040(&pppppppuStack_128,pppppppuVar26,uStack_138);
                FUN_140544f90(&pppppppuStack_128);
                load_supplier_0x15530d0
                          (*(undefined8 *)(*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar54 * 8)
                           ,0x20);
                load_supplier_0x155486a();
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
                  load_supplier_0x15530d0(pppppppuVar26,uVar37);
                }
                uStack_138 = 0;
                uStack_130 = 0xf;
                pppppppuStack_148 =
                     (undefined8 *******)((ulonglong)pppppppuStack_148 & 0xffffffffffffff00);
                FUN_140070e80(&pppppppuStack_128);
                plVar44 = _DAT_1424078e8;
              }
            }
          }
        }
        FUN_140ece710();
        *(undefined4 *)(aplStack_178[0] + 0x33) = 0x30;
        *(int *)((longlong)aplStack_178[0] + 0x19c) =
             *(int *)((longlong)aplStack_178[0] + 0x19c) + 1;
        goto override_jmp_1407d5d5f_case_50;
      }
      iVar18 = *(int *)(*plVar42 + 0xc);
      if ((iVar18 != -1) &&
         (iVar17 = (int)((longlong)_DAT_142407538 - (longlong)_DAT_142407530 >> 3), iVar17 != 0)) {
        iVar17 = iVar17 + -1;
        uVar50 = uVar57;
        iVar36 = iVar16;
        if (-1 < iVar17) {
          do {
            iVar34 = iVar36 + iVar17 >> 1;
            iVar35 = *(int *)(_DAT_142407530[iVar34] + 0x130);
            uVar50 = _DAT_142407530[iVar34];
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
            FUN_1400bc360();
          }
          else {
            **(longlong **)(uVar50 + 0x13d8) = *plVar42;
            *(longlong *)(uVar50 + 0x13d8) = *(longlong *)(uVar50 + 0x13d8) + 8;
          }
        }
      }
      lVar29 = *plVar42;
      if (((*(int *)(lVar29 + 0x14) != -1) && (lVar24 = FUN_14007f150(_DAT_14250dfd8), lVar24 != 0))
         && (lVar24 = FUN_140071530(*(undefined4 *)(lVar29 + 0x10),lVar24 + 0x2b0), lVar24 != 0)) {
        if (*(longlong **)(lVar24 + 0xa8) != *(longlong **)(lVar24 + 0xb0)) {
          **(longlong **)(lVar24 + 0xa8) = lVar29;
          *(longlong *)(lVar24 + 0xa8) = *(longlong *)(lVar24 + 0xa8) + 8;
          plVar42 = plVar42 + 1;
          goto LAB_1407d7797;
        }
        FUN_1400bc360();
      }
      plVar42 = plVar42 + 1;
    } while( true );
  case 0x30:
    _DAT_1423b2a48 = uVar54 & 0xfffffffb | 1;
    if (10 < _DAT_1418be234) {
override_jmp_1407d7b82_case_2:
      *(undefined4 *)(param_1 + 0x33) = 0x33;
      goto override_jmp_1407d5d5f_case_50;
    }
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_1418be234) {
    case 0:
      lVar29 = FUN_1407d2f60(CONCAT71((int7)((ulonglong)
                                             (IMAGE_DOS_HEADER_140000000.e_magic +
                                             *(uint *)(&UNK_1407da0e8 +
                                                      (longlong)(int)_DAT_1418be234 * 4)) >> 8),1));
      FUN_14142e1d0(param_1 + 4,lVar29 + 0x20);
      FUN_140069780(&pppppppuStack_148,"** Loading Fortress **");
      FUN_140545210(&pppppppuStack_148);
      if (_DAT_1418be234 == 4) {
        FUN_1414ee5f0(0x142661760);
      }
      else if ((_DAT_1426b7fd0 & 4) == 0) {
        _DAT_1426b7fd0 = _DAT_1426b7fd0 | 4;
        _DAT_1426b7f1c = GetTickCount();
      }
      break;
    case 1:
      lVar29 = FUN_1407fff60(0,3);
      FUN_14142e1d0(param_1 + 4,lVar29 + 0x20);
      FUN_140069780(&pppppppuStack_148,"** Loading Adventurer **");
      FUN_140545210(&pppppppuStack_148);
      if (_DAT_1418be234 == 5) {
        FUN_1414ee5f0(0x142661760);
      }
      break;
    case 2:
      goto override_jmp_1407d7b82_case_2;
    }
    FUN_140070e80(&pppppppuStack_148);
    *(undefined4 *)(param_1 + 0x33) = 0x31;
    break;
  case 0x31:
    for (plVar23 = _DAT_142407548; plVar42 = aplStack_178[0], plVar44 = _DAT_142407550,
        plVar23 != plVar28; plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if ((*(byte *)(lVar29 + 0x114) & 0x40) != 0) {
        plVar42 = *(longlong **)(lVar29 + 0x1e0);
        for (plVar44 = *(longlong **)(lVar29 + 0x1d8); plVar44 != plVar42; plVar44 = plVar44 + 1) {
          plVar56 = (longlong *)*plVar44;
          iVar16 = (**(code **)(*plVar56 + 0x10))(plVar56);
          if ((((iVar16 == 3) && (lVar24 = (**(code **)(*plVar56 + 0x48))(plVar56), lVar24 == 0)) &&
              ((int)plVar56[1] != -1)) &&
             ((lVar24 = FUN_140b6ad70(0x14251c138,*(undefined4 *)(lVar29 + 0xc30),lVar29 + 0x1274),
              lVar24 != 0 && (*(int *)(lVar24 + 0xdc) == (int)plVar56[1])))) {
            FUN_140069780(&pppppppuStack_148,"Patched up nemesis record for nemid");
            FUN_140545610((int)plVar56[1],&pppppppuStack_148);
            load_supplier_0x70b90(&pppppppuStack_148,", unid");
            FUN_140545610(*(undefined4 *)(lVar29 + 0x130),&pppppppuStack_148);
            FUN_140544f90(&pppppppuStack_148);
            FUN_140070e80(&pppppppuStack_148);
            puVar25 = (undefined4 *)FUN_1407a4900();
            *puVar25 = (int)plVar56[1];
            FUN_1400bb5d0(puVar25,&DAT_1424075f8);
            *(longlong *)(puVar25 + 6) = lVar29;
            puVar25[1] = *(undefined4 *)(lVar29 + 0x130);
            lVar29 = load_supplier_0x7f120(&DAT_1423f3c78,*(undefined4 *)(lVar29 + 0x140));
            if (lVar29 == 0) {
              load_supplier_0xf672a0(extraout_XMM0_Da,puVar25 + 2,puVar25 + 3);
            }
            else {
              load_supplier_0x96e9c0(lVar29);
            }
            *(longlong *)(puVar25 + 4) = lVar24;
            cVar14 = load_supplier_0x735c0(lVar24 + 200,0xb);
            if (cVar14 != '\0') {
              load_supplier_0xfcef0(puVar25 + 0x16,4);
            }
            cVar14 = load_supplier_0x735c0(*(longlong *)(puVar25 + 4) + 200,0xc);
            if (cVar14 != '\0') {
              load_supplier_0xfcef0(puVar25 + 0x16,5);
            }
            cVar14 = load_supplier_0x735c0(*(longlong *)(puVar25 + 4) + 200,0xd);
            if (cVar14 != '\0') {
              load_supplier_0xfcef0(puVar25 + 0x16,6);
            }
            cVar14 = load_supplier_0x735c0(*(longlong *)(puVar25 + 4) + 200,0xe);
            if (cVar14 != '\0') {
              load_supplier_0xfcef0(puVar25 + 0x16,7);
            }
            cVar14 = load_supplier_0x735c0(*(longlong *)(puVar25 + 4) + 200,0xf);
            if (cVar14 != '\0') {
              load_supplier_0xfcef0(puVar25 + 0x16,8);
            }
            break;
          }
        }
      }
    }
    plVar28 = _DAT_142407548;
    if ((int)aplStack_178[0][0xd0] < 0xdd7) {
      for (; plVar28 != plVar44; plVar28 = plVar28 + 1) {
        lVar29 = *plVar28;
        if ((*(uint *)(lVar29 + 0x110) & 0x1000000) != 0) {
          bVar11 = false;
          bVar10 = false;
          if (_DAT_142407560 != _DAT_142407568) {
            plVar23 = _DAT_142407560;
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
            } while (plVar23 != _DAT_142407568);
            if (bVar11) {
              *(uint *)(lVar29 + 0x11c) = *(uint *)(lVar29 + 0x11c) | 0x40000;
            }
            if (bVar10) goto LAB_1407d7f76;
          }
          *(uint *)(lVar29 + 0x110) = *(uint *)(lVar29 + 0x110) & 0xfeffffff;
        }
LAB_1407d7f76:
      }
    }
    plVar28 = _DAT_1423b59e0;
    plVar23 = _DAT_1423b59d8;
    if ((int)aplStack_178[0][0xd0] < 0xdcb) {
      for (; plVar23 != plVar28; plVar23 = plVar23 + 1) {
        puVar41 = *(undefined8 **)(*plVar23 + 0x40);
        for (puVar22 = *(undefined8 **)(*plVar23 + 0x38); puVar22 != puVar41; puVar22 = puVar22 + 1)
        {
          FUN_140e8ab10(*puVar22);
        }
      }
    }
    plVar28 = _DAT_142410e60;
    plVar23 = _DAT_142410e58;
    if ((int)plVar42[0xd0] < 0xdc9) {
      for (; plVar23 != plVar28; plVar23 = plVar23 + 1) {
        plVar44 = (longlong *)*plVar23;
        if ((*(byte *)(plVar44 + 0x29) & 0x30) == 0x30) {
          iVar16 = (**(code **)(*plVar44 + 0x70))();
          uVar3 = (undefined2)plVar44[2];
          pcStack_1c8._0_4_ = 7;
          load_supplier_0x696d0
                    (0x1423f3970,uVar3,*(undefined2 *)((longlong)plVar44 + 0x1c),(short)plVar44[4]);
          pcStack_1c8 = (code *)CONCAT44(pcStack_1c8._4_4_,iVar16);
          load_supplier_0x1455aa0(0x1423f3970,uVar3);
          if (iVar16 != 6) {
            FUN_140a6ce20(0x1423f3970,uVar3);
          }
        }
        else {
          iVar16 = (**(code **)(*plVar44 + 0x68))(plVar44);
          uVar3 = (undefined2)plVar44[2];
          pcStack_1c8._0_4_ = 7;
          load_supplier_0x696d0
                    (0x1423f3970,uVar3,*(undefined2 *)((longlong)plVar44 + 0x1c),(short)plVar44[4]);
          pcStack_1c8 = (code *)CONCAT44(pcStack_1c8._4_4_,iVar16);
          load_supplier_0x1455aa0(0x1423f3970,uVar3);
          if (iVar16 != 6) {
            FUN_140a6ce20(0x1423f3970,uVar3);
          }
        }
        if (*(short *)((longlong)plVar44 + 0x14a) < 1) {
          FUN_14058c0a0(plVar44);
        }
      }
    }
    if ((int)plVar42[0xd0] < 0x7fc) {
      lVar29 = FUN_14042ab30(0x1423b9cd0);
      FUN_140070f00(lVar29 + 8,"Off duty",8);
      lVar29 = FUN_14042ab30(0x1423b9cd0);
      FUN_140070f00(lVar29 + 8,"Staggered training",0x12);
      lVar29 = FUN_14042ab30(0x1423b9cd0);
      FUN_140070f00(lVar29 + 8,"Constant training",0x11);
      lVar29 = FUN_14042ab30(0x1423b9cd0);
      FUN_140070f00(lVar29 + 8,"Ready",5);
      piVar4 = *(int **)(_DAT_1423bc668 + 0x11d0);
      lVar29 = _DAT_142505c40;
      for (piVar47 = *(int **)(_DAT_1423bc668 + 0x11c8); piVar47 < piVar4; piVar47 = piVar47 + 1) {
        iVar16 = *piVar47;
        lVar24 = _DAT_142505c48 - lVar29 >> 3;
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
                FUN_14155311c(pppppbVar33,0x58,0xc,FUN_141107e90);
                load_supplier_0x15530d0(pppppbVar33,0x420);
              }
              pppppppbVar27 = apppppppbStack_108[0];
            }
            if (pppppppbVar27[0x1a] != pppppppbVar27[0x1b]) {
              pppppppbVar27[0x1b] = pppppppbVar27[0x1a];
            }
            FUN_1400708d0(pppppppbVar27 + 0x1a,_DAT_1423b9cf8 - _DAT_1423b9cf0 >> 3);
            uVar57 = (longlong)pppppppbVar27[0x1b] - (longlong)apppppppbStack_108[0][0x1a] >> 3;
            while( true ) {
              uVar54 = (int)uVar57 - 1;
              uVar57 = (ulonglong)uVar54;
              lVar29 = _DAT_142505c40;
              if ((int)uVar54 < 0) break;
              pppppppuVar26 = (undefined8 *******)FUN_1415530e0(0x420);
              pcStack_1c8 = FUN_141107e90;
              pppppppuStack_128 = pppppppuVar26;
              FUN_141553708(pppppppuVar26,0x58,0xc);
              lVar29 = (longlong)(int)uVar54;
              pppppppbVar21[0x1a][lVar29] = (byte *****)pppppppuVar26;
              FUN_14110a790(pppppppbVar21,pppppppbVar21[0x1a][lVar29]);
              pppppppbVar43 = *(byte ********)(_DAT_1423b9cf0 + lVar29 * 8);
              pppppppbVar27 = pppppppbVar43 + 1;
              pppppppbVar32 = pppppppbVar27;
              if ((byte ******)0xf < pppppppbVar43[4]) {
                pppppppbVar32 = (byte *******)*pppppppbVar27;
              }
              apppppppbStack_108[0] = pppppppbVar43;
              if ((pppppppbVar43[3] == (byte ******)0x8) &&
                 (iVar16 = load_supplier_0x1554864(pppppppbVar32), iVar16 == 0)) {
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
                 (iVar16 = load_supplier_0x1554864(pppppppbVar27,"Staggered training"), iVar16 == 0)
                 ) {
                for (uVar40 = 0; (int)uVar40 < 0xc; uVar40 = uVar40 + 1) {
                  *(undefined2 *)
                   (pppppppbVar21[0x1a][(int)uVar54] + (longlong)(int)uVar40 * 0xb + 4) = 0;
                  *(undefined2 *)
                   ((longlong)pppppppbVar21[0x1a][(int)uVar54] + (longlong)(int)uVar40 * 0x58 + 0x22
                   ) = 1;
                  if (((ulonglong)*pppppppbVar21 & 1) == 0) {
                    if (((int)uVar40 < 3) || (uVar40 - 6 < 3)) {
LAB_1407d85c6:
                      pppppppbVar27 = (byte *******)FUN_1415530e0();
                      pppppppbVar27[2] = (byte ******)0x0;
                      pppppppbVar27[3] = (byte ******)0x0;
                      pppppppbVar27[4] = (byte ******)0x0;
                      pppppppbVar27[5] = (byte ******)0x0;
                      *pppppppbVar27 = (byte ******)0x0;
                      *(undefined4 *)(pppppppbVar27 + 1) = 10;
                      pppppppbStack_e8 = pppppppbVar27;
                      appppppbStack_198[0] = (byte ******)FUN_1415530e0(0x20);
                      appppppbStack_198[0][1] = (byte *****)0xffffffffffffffff;
                      appppppbStack_198[0][2] = (byte *****)0xffffffffffffffff;
                      *(undefined4 *)(appppppbStack_198[0] + 3) = 0xffffffff;
                      *(undefined4 *)((longlong)appppppbStack_198[0] + 0x1c) = 0;
                      *appppppbStack_198[0] = (byte *****)&UNK_14165a378;
                      *pppppppbVar27 = appppppbStack_198[0];
                      *(undefined4 *)(appppppbStack_198[0] + 2) = _DAT_142167754;
                      *(undefined4 *)((longlong)*pppppppbVar27 + 0x14) = _DAT_1423aa348;
                      FUN_140287e20(pppppppbVar27 + 2,
                                    (longlong)pppppppbVar21[0x15] - (longlong)pppppppbVar21[0x14] >>
                                    3,0);
                      FUN_140288cd0(pppppppbVar27 + 2);
                      pppppbVar33 = pppppppbVar21[0x1a][(int)uVar54] +
                                    (longlong)(int)uVar40 * 0xb + 5;
                      ppppbVar6 = pppppbVar33[1];
                      if (ppppbVar6 == pppppbVar33[2]) {
                        FUN_1400bc360(pppppbVar33,ppppbVar6,&pppppppbStack_e8);
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
                  else if ((2 < uVar40) && (2 < uVar40 - 6)) goto LAB_1407d85c6;
                }
              }
              pppppppbVar43 = apppppppbStack_108[0];
              iVar16 = 0;
              pppppppbVar27 = apppppppbStack_108[0] + 1;
              if ((byte ******)0xf < apppppppbStack_108[0][4]) {
                pppppppbVar27 = (byte *******)*pppppppbVar27;
              }
              if ((apppppppbStack_108[0][3] == (byte ******)0x11) &&
                 (iVar18 = load_supplier_0x1554864(pppppppbVar27,"Constant training"), iVar18 == 0))
              {
                for (; pppppppbVar43 = apppppppbStack_108[0], iStack_1a8 = iVar16, iVar16 < 0xc;
                    iVar16 = iVar16 + 1) {
                  pppppppbVar27 = (byte *******)FUN_1415530e0(0x30);
                  pppppppbVar27[2] = (byte ******)0x0;
                  pppppppbVar27[3] = (byte ******)0x0;
                  pppppppbVar27[4] = (byte ******)0x0;
                  pppppppbVar27[5] = (byte ******)0x0;
                  *pppppppbVar27 = (byte ******)0x0;
                  *(undefined4 *)(pppppppbVar27 + 1) = 10;
                  pppppppbStack_e8 = pppppppbVar27;
                  appppppbStack_198[0] = (byte ******)FUN_1415530e0(0x20);
                  appppppbStack_198[0][1] = (byte *****)0xffffffffffffffff;
                  appppppbStack_198[0][2] = (byte *****)0xffffffffffffffff;
                  *(undefined4 *)(appppppbStack_198[0] + 3) = 0xffffffff;
                  *(undefined4 *)((longlong)appppppbStack_198[0] + 0x1c) = 0;
                  *appppppbStack_198[0] = (byte *****)&UNK_14165a378;
                  *pppppppbVar27 = appppppbStack_198[0];
                  *(undefined4 *)(appppppbStack_198[0] + 2) = _DAT_142167754;
                  *(undefined4 *)((longlong)*pppppppbVar27 + 0x14) = _DAT_1423aa348;
                  FUN_140287e20(pppppppbVar27 + 2,
                                (longlong)pppppppbVar21[0x15] - (longlong)pppppppbVar21[0x14] >> 3,0
                               );
                  FUN_140288cd0(pppppppbVar27 + 2);
                  appppppbStack_198[0] = (byte ******)((longlong)iVar16 * 0x58);
                  pppppbVar33 = (byte *****)
                                ((longlong)appppppbStack_198[0] +
                                (longlong)(pppppppbVar21[0x1a][(int)uVar54] + 5));
                  ppppbVar6 = pppppbVar33[1];
                  if (ppppbVar6 == pppppbVar33[2]) {
                    FUN_1400bc360(pppppbVar33,ppppbVar6,&pppppppbStack_e8);
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
                 (iVar16 = load_supplier_0x1554864(pppppppbVar27,"Ready"), iVar16 == 0)) {
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
    plVar28 = _DAT_1423f3c80;
    bVar11 = false;
    for (plVar23 = _DAT_1423f3c78; plVar23 < plVar28; plVar23 = plVar23 + 1) {
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
      FUN_140545360();
    }
    if (_DAT_1418be238 == 0) {
      lVar29 = _DAT_14250a528;
      iVar16 = _DAT_14250a560;
      iVar18 = _DAT_14250a55c;
      iVar17 = _DAT_14250a564;
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
                plVar28 = _DAT_142407548;
                if ((uVar54 & 8) != 0) {
                  for (; plVar28 < _DAT_142407550; plVar28 = plVar28 + 1) {
                    lVar24 = *plVar28;
                    if ((((*(uint *)(lVar24 + 0x110) & 0x2010202) == 0) &&
                        ((*(uint *)(lVar24 + 0x118) & 0x180000) == 0)) &&
                       ((*(uint *)(lVar24 + 0x110) >> 0xf & 1) == 0)) {
                      if ((*(uint *)(lVar24 + 0x118) >> 10 & 1) == 0) {
                        if ((*(short *)(lVar24 + 0xa8) == sVar48) &&
                           (*(short *)(lVar24 + 0xaa) == sVar39)) {
LAB_1407d8ce4:
                          if (*(short *)(lVar24 + 0xac) == sVar46) goto LAB_1407d8d9c;
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
                          if (iVar36 < 2) goto LAB_1407d8ce4;
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
                  FUN_140545360("removed erroneous unit occupancy flag");
                  lVar29 = _DAT_14250a528;
                  iVar16 = _DAT_14250a560;
                  iVar18 = _DAT_14250a55c;
                  iVar17 = _DAT_14250a564;
                }
LAB_1407d8d9c:
                plVar28 = _DAT_142407548;
                if ((uVar54 & 0x10) != 0) {
                  for (; plVar28 < _DAT_142407550; plVar28 = plVar28 + 1) {
                    lVar24 = *plVar28;
                    if ((((*(uint *)(lVar24 + 0x110) & 0x2010202) == 0) &&
                        ((*(uint *)(lVar24 + 0x118) & 0x180000) == 0)) &&
                       ((*(uint *)(lVar24 + 0x110) >> 0xf & 1) != 0)) {
                      if ((*(uint *)(lVar24 + 0x118) >> 10 & 1) == 0) {
                        if ((*(short *)(lVar24 + 0xa8) == sVar48) &&
                           (*(short *)(lVar24 + 0xaa) == sVar39)) {
LAB_1407d8e38:
                          if (*(short *)(lVar24 + 0xac) == sVar46) goto LAB_1407d8ef5;
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
                          if (iVar36 < 2) goto LAB_1407d8e38;
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
                  FUN_140545360("removed erroneous unit ground occupancy flag");
                  lVar29 = _DAT_14250a528;
                  iVar16 = _DAT_14250a560;
                  iVar18 = _DAT_14250a55c;
                  iVar17 = _DAT_14250a564;
                }
              }
            }
LAB_1407d8ef5:
          }
        }
      }
    }
    uVar57 = 0;
    plVar23 = _DAT_1424078e8;
    plVar28 = _DAT_1424078f0;
    if ((longlong)_DAT_142407550 - (longlong)_DAT_142407548 >> 3 != 0) {
      uVar37 = 0;
      plVar44 = _DAT_142407530;
      uVar50 = uVar57;
      do {
        lVar29 = *(longlong *)((longlong)_DAT_142407548 + uVar57);
        lVar24 = *(longlong *)(lVar29 + 0xb18);
        uVar49 = uVar37;
        uVar58 = uVar37;
        if (*(longlong *)(lVar29 + 0xb20) - lVar24 >> 4 != 0) {
          do {
            iVar16 = **(int **)(lVar24 + uVar49);
            iVar18 = (int)((longlong)_DAT_142407538 - (longlong)plVar44 >> 3);
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
                plVar44 = _DAT_142407530;
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
        plVar23 = _DAT_1424078e8;
        plVar28 = _DAT_1424078f0;
      } while ((ulonglong)(longlong)(int)uVar54 <
               (ulonglong)((longlong)_DAT_142407550 - (longlong)_DAT_142407548 >> 3));
    }
    for (; plVar23 < plVar28; plVar23 = plVar23 + 1) {
      lVar29 = *plVar23;
      if ((*(byte *)(lVar29 + 0x10) & 1) != 0) {
        pcStack_1c8 = (code *)CONCAT62(pcStack_1c8._2_6_,*(undefined2 *)(lVar29 + 0xc));
        FUN_1414748c0(0x1423f3970,*(undefined4 *)(lVar29 + 0x1c),*(undefined2 *)(lVar29 + 8),
                      *(undefined2 *)(lVar29 + 10));
      }
    }
    _DAT_142528580 = 0;
    uVar57 = (longlong)_DAT_1424078f0 - (longlong)_DAT_1424078e8 >> 3;
    while( true ) {
      uVar54 = (int)uVar57 - 1;
      uVar57 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      (**(code **)(*(longlong *)_DAT_1424078e8[(int)uVar54] + 0x120))();
    }
    iVar16 = (int)((longlong)_DAT_142407550 - (longlong)_DAT_142407548 >> 3) + -1;
    lVar29 = (longlong)iVar16;
    if (-1 < iVar16) {
      do {
        *(undefined4 *)(_DAT_142407548[lVar29] + 0x128c) = 0xffffffff;
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    FUN_141473320(0x1423f3970);
    FUN_141473e80(0x1423f3970);
    FUN_14149be30(0x1423f3970,1);
    uVar57 = _DAT_142505c48 - _DAT_142505c40 >> 3;
    while( true ) {
      plVar28 = _DAT_1423bbd78;
      uVar54 = (int)uVar57 - 1;
      uVar57 = (ulonglong)uVar54;
      if ((int)uVar54 < 0) break;
      puVar25 = *(undefined4 **)(_DAT_142505c40 + (longlong)(int)uVar54 * 8);
      uVar50 = *(longlong *)(puVar25 + 0x2a) - *(longlong *)(puVar25 + 0x28) >> 3;
      while( true ) {
        uVar54 = (int)uVar50 - 1;
        uVar50 = (ulonglong)uVar54;
        if ((int)uVar54 < 0) break;
        lVar29 = FUN_1413e54b0(&DAT_142407530,
                               **(undefined4 **)
                                 (*(longlong *)(puVar25 + 0x28) + (longlong)(int)uVar54 * 8));
        if ((lVar29 != 0) && ((*(int *)(lVar29 + 0x1f0) == -1 || (*(int *)(lVar29 + 500) == -1)))) {
          pppppppuStack_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          pppppppuStack_128 = (undefined8 *******)FUN_140071e00(0x20);
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
          FUN_140545790(*(undefined4 *)(lVar29 + 0x130),&pppppppuStack_148);
          pppppppuVar26 = &pppppppuStack_148;
          if (0xf < uStack_130) {
            pppppppuVar26 = pppppppuStack_148;
          }
          FUN_140071040(&pppppppuStack_128,pppppppuVar26,uStack_138);
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
            load_supplier_0x15530d0(pppppppuVar26,uVar37);
          }
          FUN_140544f90(&pppppppuStack_128);
          *(undefined4 *)(lVar29 + 0x1f0) = *puVar25;
          *(uint *)(lVar29 + 500) = uVar54;
          FUN_140070e80();
        }
      }
    }
    lVar29 = _DAT_142410390;
    plVar23 = _DAT_1423bbd70;
    if (_DAT_1418be238 == 0) {
      for (; plVar23 < plVar28; plVar23 = plVar23 + 1) {
        puVar22 = *(undefined8 **)(*plVar23 + 0x28);
        puVar41 = *(undefined8 **)(*plVar23 + 0x30);
LAB_1407d9344:
        if (puVar22 < puVar41) {
          apppppppbStack_108[0] = (byte *******)*puVar22;
          ppppppbVar45 = apppppppbStack_108[0][0x105];
          ppppppbVar5 = apppppppbStack_108[0][0x106];
          pppppppbStack_e8 = apppppppbStack_108[0];
LAB_1407d9370:
          do {
            if (ppppppbVar5 <= ppppppbVar45) goto LAB_1407d9440;
            iVar16 = *(int *)*ppppppbVar45;
            if ((iVar16 != -1) && (lVar24 = _DAT_142410398 - lVar29 >> 3, lVar24 != 0)) {
              iVar18 = 0;
              iVar17 = (int)lVar24 + -1;
              if (-1 < iVar17) {
                do {
                  iVar36 = iVar18 + iVar17 >> 1;
                  plVar44 = *(longlong **)(lVar29 + (longlong)iVar36 * 8);
                  if ((int)plVar44[10] == iVar16) goto LAB_1407d93db;
                  iVar35 = iVar36 + -1;
                  if ((int)plVar44[10] < iVar16) {
                    iVar35 = iVar17;
                    iVar18 = iVar36 + 1;
                  }
                  iVar17 = iVar35;
                } while (iVar18 <= iVar17);
              }
              plVar44 = (longlong *)0x0;
LAB_1407d93db:
              if ((plVar44 != (longlong *)0x0) &&
                 (iVar16 = (**(code **)(*plVar44 + 0xd0))(), lVar29 = _DAT_142410390, iVar16 == 0x1d
                 )) {
                puVar7 = (undefined8 *)plVar44[0x13b];
                if (puVar7 != (undefined8 *)plVar44[0x13c]) {
                  *puVar7 = apppppppbStack_108[0];
                  plVar44[0x13b] = plVar44[0x13b] + 8;
                  ppppppbVar45 = ppppppbVar45 + 1;
                  lVar29 = _DAT_142410390;
                  goto LAB_1407d9370;
                }
                FUN_1400bc360(plVar44 + 0x13a,puVar7,&pppppppbStack_e8);
                lVar29 = _DAT_142410390;
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
    iVar16 = *(int *)(_DAT_14250dfd8 + 0xa0) + 0xf >> 4;
    apppppppbStack_108[0] = (byte *******)CONCAT44(apppppppbStack_108[0]._4_4_,iVar16);
    iVar18 = *(int *)(_DAT_14250dfd8 + 0xa4) + 0xf >> 4;
    pppppppbStack_e8 = (byte *******)CONCAT44(pppppppbStack_e8._4_4_,iVar18);
    uVar54 = 0;
    lVar29 = _DAT_14250dfd8;
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
LAB_1407d9a8f:
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
          if (iVar36 < sVar39) goto LAB_1407d9a8f;
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
            pppppppuStack_148 = (undefined8 *******)FUN_140071e00(0x20);
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
            FUN_140545790(uVar54 + 1,&pppppppuStack_128);
            pppppppuVar26 = &pppppppuStack_128;
            if (0xf < uStack_110) {
              pppppppuVar26 = pppppppuStack_128;
            }
            FUN_140071040(&pppppppuStack_148,pppppppuVar26,uStack_118);
            if (0xf < uStack_110) {
              uVar57 = uStack_110 + 1;
              pppppppuVar26 = pppppppuStack_128;
              if (0xfff < uVar57) {
                uVar57 = uStack_110 + 0x28;
                pppppppuVar26 = (undefined8 *******)pppppppuStack_128[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuStack_128 + (-8 - (longlong)pppppppuVar26))
                   ) goto LAB_1407d99ff;
              }
              load_supplier_0x15530d0(pppppppuVar26,uVar57);
            }
            FUN_140071040(&pppppppuStack_148,"-",1);
            sVar48 = sStack_1a4;
            uStack_120 = 0;
            uStack_118 = 0;
            uStack_110 = 0xf;
            pppppppuStack_128 = (undefined8 *******)0x0;
            FUN_140545790(sStack_1a4 + 1,&pppppppuStack_128);
            pppppppuVar26 = &pppppppuStack_128;
            if (0xf < uStack_110) {
              pppppppuVar26 = pppppppuStack_128;
            }
            FUN_140071040(&pppppppuStack_148,pppppppuVar26,uStack_118);
            if (0xf < uStack_110) {
              uVar57 = uStack_110 + 1;
              pppppppuVar26 = pppppppuStack_128;
              if (0xfff < uVar57) {
                uVar57 = uStack_110 + 0x28;
                pppppppuVar26 = (undefined8 *******)pppppppuStack_128[-1];
                if (0x1f < (ulonglong)((longlong)pppppppuStack_128 + (-8 - (longlong)pppppppuVar26))
                   ) {
LAB_1407d99ff:
                  _invalid_parameter_noinfo_noreturn();
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              load_supplier_0x15530d0(pppppppuVar26,uVar57);
            }
            FUN_140544f90(&pppppppuStack_148);
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
              load_supplier_0x15530d0(pppppppuVar26,uVar57);
            }
            sVar48 = sVar48 + 1;
            lVar29 = _DAT_14250dfd8;
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
      lVar29 = _DAT_14250a528;
      iVar16 = _DAT_14250a55c;
      iVar18 = _DAT_14250a564;
      iVar17 = _DAT_14250a560;
      puVar22 = _DAT_14250a1f8;
      puVar41 = _DAT_14250a200;
      if (0 < _DAT_14250a55c) {
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
                        lVar29 = _DAT_14250a528;
                        iVar16 = _DAT_14250a55c;
                        iVar18 = _DAT_14250a564;
                        iVar17 = _DAT_14250a560;
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
          puVar22 = _DAT_14250a1f8;
          puVar41 = _DAT_14250a200;
        } while ((int)uVar40 < iVar16);
      }
      for (; puVar7 = _DAT_14250a200, bVar11 = puVar22 != _DAT_14250a200, _DAT_14250a200 = puVar41,
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
                      lVar29 = _DAT_14250a528;
                      iVar16 = _DAT_14250a55c;
                      iVar18 = _DAT_14250a564;
                      iVar17 = _DAT_14250a560;
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
        puVar41 = _DAT_14250a200;
        _DAT_14250a200 = puVar7;
      }
    }
  case 0x32:
    goto override_jmp_1407d5d5f_case_50;
  case 0x33:
    FUN_140a97170(0);
    lVar29 = FUN_14025b280(3);
    FUN_140069780(auStack_c8,"Warning Modal");
    uVar30 = FUN_14142dcb0(param_1 + 4,&pppppppbStack_e8,auStack_c8);
    FUN_1407e2640(aplStack_178,uVar30);
    FUN_1400e2710(&pppppppbStack_e8);
    FUN_140070e80(auStack_c8);
    plVar28 = aplStack_178[0];
    if (aplStack_178[0] != (longlong *)0x0) {
      pppppppuStack_128 = (undefined8 *******)appppppbStack_198;
      uVar30 = load_supplier_0xf1100(appppppbStack_198,aplStack_178);
      FUN_140069780(auStack_a0,"Warning Modal");
      FUN_14048f370(lVar29 + 0x20,&pppppppuStack_128,auStack_a0,uVar30);
      FUN_1400e2710(&pppppppuStack_128);
      FUN_140070e80(auStack_a0);
      FUN_140069780(auStack_a0,&DAT_1416cc968);
      FUN_1400f1990(plVar28,apppppppbStack_108,auStack_a0);
      FUN_140070e80(auStack_a0);
      pppppppbVar21 = apppppppbStack_108[0];
      FUN_140069780(auStack_c8,"Error");
      FUN_1407e26c0(pppppppbVar21,&pppppppuStack_148,auStack_c8,
                    "Game load has been aborted due to an error.");
      FUN_140070e80(auStack_c8);
      (**(code **)(*plVar28 + 0x20))(plVar28);
      FUN_1400e2710(&pppppppuStack_148);
      FUN_1400e2710(apppppppbStack_108);
    }
    _DAT_1418be238 = 3;
    _DAT_1418be234 = 0xc;
    DAT_1418f9297 = 0;
    *(undefined1 *)(param_1 + 3) = 2;
    FUN_1400e2710(aplStack_178);
    goto override_jmp_1407d5d5f_case_50;
  }
  *(int *)((longlong)param_1 + 0x19c) = *(int *)((longlong)param_1 + 0x19c) + 1;
override_jmp_1407d5d5f_case_50:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_1e8);
  return;
LAB_1407d9440:
  puVar22 = puVar22 + 1;
  goto LAB_1407d9344;
LAB_1407d71e3:
  uVar50 = (ulonglong)(iVar18 + 1);
  goto LAB_1407d6f40;
}


/* reference PE:6aea05a1:02734000; new-game-load-renderer; RVA 0x7da3b0..0x7dbc6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_new_game_load_renderer(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  int iStack_68;
  int iStack_64;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  if ((_DAT_1423efbf8 < 1) || ((*_DAT_1423efbf0 & 1) == 0)) {
    _DAT_14266cadc = -1;
  }
  else {
    _DAT_14266cadc = _DAT_14266cae0;
  }
  DAT_14266cad8 = 0;
  load_supplier_0xc4b030(&iStack_64,&iStack_68);
  FUN_1408d8160(0,0xff,0);
  iVar9 = _DAT_1423efc08 + -1;
  if (_DAT_14266cadc == -1) {
    _DAT_14266c8fc = 0x1000006;
    iVar6 = 0;
    _DAT_14266c8f4 = iStack_64;
    if (-1 < iVar9) {
      do {
        for (; _DAT_14266c8f4 <= iStack_68; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar6 == 0) {
            uVar5 = _DAT_1423f312c;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3130, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f3134;
            }
          }
          else if (iVar6 == iVar9) {
            uVar5 = _DAT_1423f3144;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3148, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f314c;
            }
          }
          else {
            uVar5 = _DAT_1423f3138;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3140, _DAT_14266c8f4 != iStack_68)) {
              uVar5 = _DAT_1423f313c;
            }
          }
          _DAT_14266c8f8 = iVar6;
          load_supplier_0xaf4570(0x14266c870,uVar5);
        }
        iVar6 = iVar6 + 1;
        _DAT_14266c8f4 = iStack_64;
      } while (iVar6 <= iVar9);
    }
  }
  _DAT_14266c8fc = 0x1010007;
  iVar7 = _DAT_142660ed8 + _DAT_142660ed4 + *(int *)(param_1 + 0x2e0);
  iVar6 = iStack_64 + 5;
  iVar1 = iStack_68 + -6;
  iVar8 = 0;
  if (-1 < iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = ((iVar1 - iVar6) * iVar8) / ((int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3) * 2 + 0x24) +
          iVar6;
  iVar8 = iVar6;
  if (iVar6 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = iStack_68 + -7;
  if (iVar8 <= iStack_68 + -7) {
    iVar7 = iVar8;
  }
  iVar9 = iVar9 / 5;
  for (_DAT_14266c8f4 = iVar6; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
    if (iVar7 < _DAT_14266c8f4) {
      uVar5 = _DAT_1423f2d24;
      if ((_DAT_14266c8f4 != iVar6) && (uVar5 = _DAT_1423f2d2c, _DAT_14266c8f4 != iVar1)) {
        uVar5 = _DAT_1423f2d28;
      }
    }
    else {
      uVar5 = _DAT_1423f2d18;
      if ((_DAT_14266c8f4 != iVar6) && (uVar5 = _DAT_1423f2d1c, _DAT_14266c8f4 == iVar1)) {
        uVar5 = _DAT_1423f2d20;
      }
    }
    _DAT_14266c8f8 = iVar9 + 6;
    load_supplier_0xaf4ba0(0x14266c870,uVar5,0);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar9 + 1;
  pcStack_60 = (char *)0x0;
  uStack_58 = 0;
  _DAT_14266c8f4 = iVar6;
  pcStack_60 = (char *)FUN_140071e00(0x20);
  uStack_50 = 0x1f;
  uStack_48 = 0x1f;
  builtin_strncpy(pcStack_60,"Loading world to start new game",0x20);
  FUN_140af3400(0x14266c870,&pcStack_60);
  FUN_140070e80(&pcStack_60);
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar9 + 4;
  _DAT_14266c8f4 = iVar6;
  if (0x23 < *(uint *)(param_1 + 0x2e0)) goto LAB_1407da78a;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x2e0)) {
  case 0:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e696e65704f;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 1:
    if (0x39 < _DAT_142660e80 - 1U) goto override_jmp_1407da7d1_case_19;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_142660e80 - 1U) {
    case 0:
      if ((_DAT_142660ed4 < 0) ||
         ((ulonglong)(_DAT_142660f68 - _DAT_142660f60 >> 3) <= (ulonglong)(longlong)_DAT_142660ed4))
      {
        FUN_140069780(&pcStack_60,"Loading object files...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        break;
      }
      FUN_140069780(&pcStack_60,"Loading object files...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      FUN_140070e80(&pcStack_60);
      iVar6 = _DAT_142660ed4;
LAB_1407da82a:
      FUN_140af3400(0x14266c870,*(undefined8 *)(_DAT_142660f60 + (longlong)iVar6 * 8));
      goto override_jmp_1407da7d1_case_19;
    case 1:
      FUN_140069780(&pcStack_60,"Sorting text...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 2:
      FUN_140069780(&pcStack_60,"Sorting languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 3:
      FUN_140069780(&pcStack_60,"Sorting descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 4:
      FUN_140069780(&pcStack_60,"Sorting material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 5:
      FUN_140069780(&pcStack_60,"Sorting inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 6:
      FUN_140069780(&pcStack_60,"Sorting plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 7:
      FUN_140069780(&pcStack_60,"Sorting tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 8:
      FUN_140069780(&pcStack_60,"Sorting items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 9:
      FUN_140069780(&pcStack_60,"Sorting buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 10:
      FUN_140069780(&pcStack_60,"Sorting body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xb:
      FUN_140069780(&pcStack_60,"Sorting creature bodies...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xc:
      FUN_140069780(&pcStack_60,"Sorting creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xd:
      FUN_140069780(&pcStack_60,"Sorting creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xe:
      FUN_140069780(&pcStack_60,"Sorting entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xf:
      FUN_140069780(&pcStack_60,"Sorting reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x10:
      FUN_140069780(&pcStack_60,"Sorting interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x11:
      FUN_140069780(&pcStack_60,"Sorting music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x12:
      FUN_140069780(&pcStack_60,"Sorting sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    default:
      goto override_jmp_1407da7d1_case_19;
    case 0x14:
      FUN_140069780(&pcStack_60,"Processing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x15:
      FUN_140069780(&pcStack_60,"Processing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x16:
      FUN_140069780(&pcStack_60,"Processing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x17:
      FUN_140069780(&pcStack_60,"Processing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x18:
      FUN_140069780(&pcStack_60,"Processing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x19:
      FUN_140069780(&pcStack_60,"Processing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1a:
      FUN_140069780(&pcStack_60,"Processing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1b:
      FUN_140069780(&pcStack_60,"Processing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1c:
      FUN_140069780(&pcStack_60,"Processing music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1d:
      FUN_140069780(&pcStack_60,"Processing sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1e:
      FUN_140069780(&pcStack_60,"Finalizing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1f:
      FUN_140069780(&pcStack_60,"Finalizing descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x20:
      FUN_140069780(&pcStack_60,"Finalizing material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x21:
      FUN_140069780(&pcStack_60,"Finalizing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x22:
      FUN_140069780(&pcStack_60,"Finalizing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x23:
      FUN_140069780(&pcStack_60,"Finalizing tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x24:
      FUN_140069780(&pcStack_60,"Finalizing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x25:
      FUN_140069780(&pcStack_60,"Finalizing buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x26:
      FUN_140069780(&pcStack_60,"Finalizing body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x27:
      FUN_140069780(&pcStack_60,"Finalizing creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x28:
      FUN_140069780(&pcStack_60,"Finalizing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x29:
      FUN_140069780(&pcStack_60,"Finalizing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2a:
      FUN_140069780(&pcStack_60,"Finalizing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2b:
      FUN_140069780(&pcStack_60,"Finalizing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2e:
      FUN_140069780(&pcStack_60,"Preparing material data...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2f:
      FUN_140069780(&pcStack_60,"Generating inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x30:
      FUN_140069780(&pcStack_60,"Generating plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x31:
      FUN_140069780(&pcStack_60,"Generating items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x32:
      FUN_140069780(&pcStack_60,"Generating creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x33:
      FUN_140069780(&pcStack_60,"Generating entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x34:
      FUN_140069780(&pcStack_60,"Generating reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x35:
      FUN_140069780(&pcStack_60,"Generating interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x37:
      FUN_140069780(&pcStack_60,"Finalizing generated objects...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x38:
      if ((-1 < _DAT_142660ed8) && (_DAT_142660ed8 < (int)(_DAT_142660f68 - _DAT_142660f60 >> 3))) {
        FUN_140069780(&pcStack_60,"Preparing graphics...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        FUN_140070e80(&pcStack_60);
        iVar6 = _DAT_142660ed8;
        goto LAB_1407da82a;
      }
      FUN_140069780(&pcStack_60,"Preparing graphics...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x39:
      FUN_140069780(&pcStack_60,"Finishing...");
      FUN_140af3400(0x14266c870,&pcStack_60);
    }
    FUN_140070e80(&pcStack_60);
override_jmp_1407da7d1_case_19:
    if ((DAT_142660e8c != '\0') || (DAT_142660e8d != '\0')) {
      load_mod_load_dialog(&DAT_142660e80,iStack_64,iStack_68,iVar9 + 6);
    }
    goto LAB_1407da78a;
  case 2:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Allocating space...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 3:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x10;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading items...",0x11);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 4:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading buildings...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 5:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading entities...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 6:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1b;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading coin information...",0x1c);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 7:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading map data...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 8:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x20;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading civilized populations...",0x21);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 9:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x12;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading history...",0x13);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading parameters...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xb:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading artifacts...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xc:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x24;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading active historical figures...",0x25);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xd:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading squads...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xe:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading formations...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0xf:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading activities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading interactions...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x11:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1a;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading written content...",0x1b);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x12:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading identities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x13:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading incidents...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x14:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading crimes...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x15:
    FUN_140069780(&pcStack_60,"Loading vehicles...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x16:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading armies...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x17:
    FUN_140069780(&pcStack_60,"Loading army controllers...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x18:
    FUN_140069780(&pcStack_60,"Loading tracking information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x19:
    FUN_140069780(&pcStack_60,"Loading cultural identities...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1a:
    FUN_140069780(&pcStack_60,"Loading agreements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1b:
    FUN_140069780(&pcStack_60,"Loading art forms...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1c:
    FUN_140069780(&pcStack_60,"Loading occupations...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1d:
    FUN_140069780(&pcStack_60,"Loading belief systems...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1e:
    FUN_140069780(&pcStack_60,"Loading image sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x1f:
    FUN_140069780(&pcStack_60,"Loading divination sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    FUN_140070e80(&pcStack_60);
    goto LAB_1407da78a;
  case 0x20:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e69736f6c43;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x21:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x23;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Rebuilding temporary information...",0x24);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x22:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Preparing game...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x23:
    uStack_58 = 0;
    uStack_50 = 7;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x2164656c696146;
    FUN_140af3400(0x14266c870,&pcStack_60);
    if (uStack_48 < 0x10) goto LAB_1407da78a;
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
      goto joined_r0x0001407dbc5d;
    }
    goto LAB_1407da785;
  }
  if (0xf < uStack_48) {
    if (0xfff < uStack_48 + 1) {
      lVar2 = *(longlong *)(pcStack_60 + -8);
      lVar4 = (longlong)pcStack_60 - lVar2;
joined_r0x0001407dbc5d:
      if (0x1f < lVar4 - 8U) {
        _invalid_parameter_noinfo_noreturn(lVar2,uStack_48 + 0x28);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
LAB_1407da785:
    load_supplier_0x15530d0();
  }
LAB_1407da78a:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}


/* reference PE:6aea05a1:02734000; load-game-renderer; RVA 0x7dbdf0..0x7dd92c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_load_game_renderer(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  int iStack_68;
  int iStack_64;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  if ((_DAT_1423efbf8 < 1) || ((*_DAT_1423efbf0 & 1) == 0)) {
    _DAT_14266cadc = -1;
  }
  else {
    _DAT_14266cadc = _DAT_14266cae0;
  }
  DAT_14266cad8 = 0;
  if (((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) && (*(ushort *)(param_1 + 0x72c) < 0xb)
     ) {
                    /* WARNING: Switch is manually overridden */
    switch(*(ushort *)(param_1 + 0x72c)) {
    case 0:
      _DAT_14266cadc = 5;
      _DAT_14266cae0 = 5;
      break;
    case 1:
      _DAT_14266cadc = 6;
      _DAT_14266cae0 = 6;
    }
  }
  load_supplier_0xc4b030(&iStack_64,&iStack_68);
  FUN_1408d8160(0,0xff,0);
  iVar10 = _DAT_1423efc08 + -1;
  if (_DAT_14266cadc == -1) {
    _DAT_14266c8fc = 0x1000006;
    iVar8 = 0;
    _DAT_14266c8f4 = iStack_64;
    if (-1 < iVar10) {
      do {
        for (; _DAT_14266c8f4 <= iStack_68; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar8 == 0) {
            uVar5 = _DAT_1423f312c;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3130, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f3134;
            }
          }
          else if (iVar8 == iVar10) {
            uVar5 = _DAT_1423f3144;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3148, _DAT_14266c8f4 == iStack_68)) {
              uVar5 = _DAT_1423f314c;
            }
          }
          else {
            uVar5 = _DAT_1423f3138;
            if ((_DAT_14266c8f4 != iStack_64) &&
               (uVar5 = _DAT_1423f3140, _DAT_14266c8f4 != iStack_68)) {
              uVar5 = _DAT_1423f313c;
            }
          }
          _DAT_14266c8f8 = iVar8;
          load_supplier_0xaf4570(0x14266c870,uVar5);
        }
        iVar8 = iVar8 + 1;
        _DAT_14266c8f4 = iStack_64;
      } while (iVar8 <= iVar10);
    }
  }
  _DAT_14266c8fc = 0x1010007;
  iVar8 = iStack_64 + 5;
  iVar1 = iStack_68 + -6;
  iVar6 = *(int *)(param_1 + 0x198) + _DAT_142660ed8 + _DAT_142660ed4;
  iVar9 = 0;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = ((iVar1 - iVar8) * iVar9) / ((int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3) * 2 + 0x35) +
          iVar8;
  iVar9 = iVar8;
  if (iVar8 <= iVar6) {
    iVar9 = iVar6;
  }
  iVar6 = iStack_68 + -7;
  if (iVar9 <= iStack_68 + -7) {
    iVar6 = iVar9;
  }
  iVar10 = iVar10 / 5;
  for (_DAT_14266c8f4 = iVar8; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
    if (iVar6 < _DAT_14266c8f4) {
      uVar5 = _DAT_1423f2d24;
      if ((_DAT_14266c8f4 != iVar8) && (uVar5 = _DAT_1423f2d2c, _DAT_14266c8f4 != iVar1)) {
        uVar5 = _DAT_1423f2d28;
      }
    }
    else {
      uVar5 = _DAT_1423f2d18;
      if ((_DAT_14266c8f4 != iVar8) && (uVar5 = _DAT_1423f2d1c, _DAT_14266c8f4 == iVar1)) {
        uVar5 = _DAT_1423f2d20;
      }
    }
    _DAT_14266c8f8 = iVar10 + 6;
    load_supplier_0xaf4ba0(0x14266c870,uVar5,0);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar10 + 1;
  pcStack_60 = (char *)0x0;
  uStack_58 = 0;
  _DAT_14266c8f4 = iVar8;
  pcStack_60 = (char *)FUN_140071e00(0x30);
  uStack_50 = 0x28;
  uStack_48 = 0x2f;
  builtin_strncpy(pcStack_60,"Loading world and continuing active game",0x29);
  FUN_140af3400(0x14266c870,&pcStack_60);
  if (0xf < uStack_48) {
    uVar7 = uStack_48 + 1;
    pcVar4 = pcStack_60;
    if (0xfff < uVar7) {
      uVar7 = uStack_48 + 0x28;
      pcVar4 = *(char **)(pcStack_60 + -8);
      if ((char *)0x1f < pcStack_60 + (-8 - (longlong)pcVar4)) goto LAB_1407dd563;
    }
    load_supplier_0x15530d0(pcVar4,uVar7);
  }
  _DAT_14266c8fc = 0x1010007;
  _DAT_14266c8f8 = iVar10 + 4;
  _DAT_14266c8f4 = iVar8;
  if (0x32 < *(uint *)(param_1 + 0x198)) goto LAB_1407dd901;
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x198)) {
  case 0:
    uStack_50 = 0xf;
    uStack_48 = 0xf;
    pcStack_60 = (char *)0x20676e696e65704f;
    uStack_58 = 0x2e2e2e656c6966;
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 1:
    if (0x39 < _DAT_142660e80 - 1U) goto override_jmp_1407dc25c_case_19;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_142660e80 - 1U) {
    case 0:
      if ((_DAT_142660ed4 < 0) ||
         ((ulonglong)(_DAT_142660f68 - _DAT_142660f60 >> 3) <= (ulonglong)(longlong)_DAT_142660ed4))
      {
        FUN_140069780(&pcStack_60,"Loading object files...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        break;
      }
      FUN_140069780(&pcStack_60,"Loading object files...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      FUN_140070e80(&pcStack_60);
      iVar8 = _DAT_142660ed4;
LAB_1407dc2b5:
      FUN_140af3400(0x14266c870,*(undefined8 *)(_DAT_142660f60 + (longlong)iVar8 * 8));
      goto override_jmp_1407dc25c_case_19;
    case 1:
      FUN_140069780(&pcStack_60,"Sorting text...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 2:
      FUN_140069780(&pcStack_60,"Sorting languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 3:
      FUN_140069780(&pcStack_60,"Sorting descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 4:
      FUN_140069780(&pcStack_60,"Sorting material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 5:
      FUN_140069780(&pcStack_60,"Sorting inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 6:
      FUN_140069780(&pcStack_60,"Sorting plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 7:
      FUN_140069780(&pcStack_60,"Sorting tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 8:
      FUN_140069780(&pcStack_60,"Sorting items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 9:
      FUN_140069780(&pcStack_60,"Sorting buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 10:
      FUN_140069780(&pcStack_60,"Sorting body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xb:
      FUN_140069780(&pcStack_60,"Sorting creature bodies...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xc:
      FUN_140069780(&pcStack_60,"Sorting creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xd:
      FUN_140069780(&pcStack_60,"Sorting creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xe:
      FUN_140069780(&pcStack_60,"Sorting entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0xf:
      FUN_140069780(&pcStack_60,"Sorting reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x10:
      FUN_140069780(&pcStack_60,"Sorting interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x11:
      FUN_140069780(&pcStack_60,"Sorting music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x12:
      FUN_140069780(&pcStack_60,"Sorting sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    default:
      goto override_jmp_1407dc25c_case_19;
    case 0x14:
      FUN_140069780(&pcStack_60,"Processing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x15:
      FUN_140069780(&pcStack_60,"Processing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x16:
      FUN_140069780(&pcStack_60,"Processing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x17:
      FUN_140069780(&pcStack_60,"Processing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x18:
      FUN_140069780(&pcStack_60,"Processing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x19:
      FUN_140069780(&pcStack_60,"Processing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1a:
      FUN_140069780(&pcStack_60,"Processing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1b:
      FUN_140069780(&pcStack_60,"Processing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1c:
      FUN_140069780(&pcStack_60,"Processing music...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1d:
      FUN_140069780(&pcStack_60,"Processing sounds...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1e:
      FUN_140069780(&pcStack_60,"Finalizing languages...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x1f:
      FUN_140069780(&pcStack_60,"Finalizing descriptors...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x20:
      FUN_140069780(&pcStack_60,"Finalizing material templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x21:
      FUN_140069780(&pcStack_60,"Finalizing inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x22:
      FUN_140069780(&pcStack_60,"Finalizing plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x23:
      FUN_140069780(&pcStack_60,"Finalizing tissue templates...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x24:
      FUN_140069780(&pcStack_60,"Finalizing items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x25:
      FUN_140069780(&pcStack_60,"Finalizing buildings...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x26:
      FUN_140069780(&pcStack_60,"Finalizing body detail plans...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x27:
      FUN_140069780(&pcStack_60,"Finalizing creature variations...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x28:
      FUN_140069780(&pcStack_60,"Finalizing creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x29:
      FUN_140069780(&pcStack_60,"Finalizing entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2a:
      FUN_140069780(&pcStack_60,"Finalizing reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2b:
      FUN_140069780(&pcStack_60,"Finalizing interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2e:
      FUN_140069780(&pcStack_60,"Preparing material data...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x2f:
      FUN_140069780(&pcStack_60,"Generating inorganics...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x30:
      FUN_140069780(&pcStack_60,"Generating plants...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x31:
      FUN_140069780(&pcStack_60,"Generating items...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x32:
      FUN_140069780(&pcStack_60,"Generating creatures...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x33:
      FUN_140069780(&pcStack_60,"Generating entities...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x34:
      FUN_140069780(&pcStack_60,"Generating reactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x35:
      FUN_140069780(&pcStack_60,"Generating interactions...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x37:
      FUN_140069780(&pcStack_60,"Finalizing generated objects...");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x38:
      if ((-1 < _DAT_142660ed8) && (_DAT_142660ed8 < (int)(_DAT_142660f68 - _DAT_142660f60 >> 3))) {
        FUN_140069780(&pcStack_60,"Preparing graphics...  ");
        FUN_140af3400(0x14266c870,&pcStack_60);
        FUN_140070e80(&pcStack_60);
        iVar8 = _DAT_142660ed8;
        goto LAB_1407dc2b5;
      }
      FUN_140069780(&pcStack_60,"Preparing graphics...  ");
      FUN_140af3400(0x14266c870,&pcStack_60);
      break;
    case 0x39:
      FUN_140069780(&pcStack_60,"Finishing...");
      FUN_140af3400(0x14266c870,&pcStack_60);
    }
    FUN_140070e80(&pcStack_60);
override_jmp_1407dc25c_case_19:
    if ((DAT_142660e8c != '\0') || (DAT_142660e8d != '\0')) {
      load_mod_load_dialog(&DAT_142660e80,iStack_64,iStack_68,iVar10 + 6);
    }
    goto LAB_1407dd901;
  case 2:
    FUN_140069780(&pcStack_60,&DAT_141620980);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 3:
    FUN_140069780(&pcStack_60,"Loading items...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 4:
    FUN_140069780(&pcStack_60,"Loading units...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 5:
    FUN_140069780(&pcStack_60,"Loading jobs...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 6:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading schedules...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 7:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading projectiles...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 8:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading buildings...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 9:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading machines...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading flow guides...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xb:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x12;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading effects...",0x13);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xc:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading entities...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xd:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x30);
    uStack_50 = 0x23;
    uStack_48 = 0x2f;
    builtin_strncpy(pcStack_60,"Loading local animal populations...",0x24);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xe:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading events...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0xf:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading mandates...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x10:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x16;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading work quotas...",0x17);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x11:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading world events...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x12:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1b;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading coin information...",0x1c);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x13:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading squads...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x14:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading formations...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x15:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading activities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x16:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x17;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading interactions...",0x18);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x17:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x1a;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading written content...",0x1b);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x18:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x15;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading identities...",0x16);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x19:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x14;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading incidents...",0x15);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x1a:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading crimes...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    goto LAB_1407dc1fb;
  case 0x1b:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x13;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading vehicles...",0x14);
    FUN_140af3400(0x14266c870,&pcStack_60);
LAB_1407dc1fb:
    if (0xf < uStack_48) {
      if (0xfff < uStack_48 + 1) {
        pcVar4 = *(char **)(pcStack_60 + -8);
        lVar3 = (longlong)pcStack_60 - (longlong)pcVar4;
joined_r0x0001407dd55d:
        uVar7 = uStack_48 + 0x28;
        if (0x1f < lVar3 - 8U) {
LAB_1407dd563:
          _invalid_parameter_noinfo_noreturn(pcVar4,uVar7);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_1407dc235:
      load_supplier_0x15530d0();
    }
    goto LAB_1407dd901;
  case 0x1c:
    pcStack_60 = (char *)0x0;
    uStack_58 = 0;
    pcStack_60 = (char *)FUN_140071e00(0x20);
    uStack_50 = 0x11;
    uStack_48 = 0x1f;
    builtin_strncpy(pcStack_60,"Loading armies...",0x12);
    FUN_140af3400(0x14266c870,&pcStack_60);
    if (uStack_48 < 0x10) goto LAB_1407dd901;
    if (0xfff < uStack_48 + 1) {
      pcVar4 = *(char **)(pcStack_60 + -8);
      lVar3 = (longlong)pcStack_60 - (longlong)pcVar4;
      goto joined_r0x0001407dd55d;
    }
    goto LAB_1407dc235;
  case 0x1d:
    FUN_140069780(&pcStack_60,"Loading army controllers...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x1e:
    FUN_140069780(&pcStack_60,"Loading tracking information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x1f:
    FUN_140069780(&pcStack_60,"Loading cultural identities...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x20:
    FUN_140069780(&pcStack_60,"Loading agreements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x21:
    FUN_140069780(&pcStack_60,"Loading art forms...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x22:
    FUN_140069780(&pcStack_60,"Loading occupations...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x23:
    FUN_140069780(&pcStack_60,"Loading belief systems...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x24:
    FUN_140069780(&pcStack_60,"Loading image sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x25:
    FUN_140069780(&pcStack_60,"Loading divination sets...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x26:
    FUN_140069780(&pcStack_60,"Loading announcements...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x27:
    FUN_140069780(&pcStack_60,"Loading fortress information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x28:
    FUN_140069780(&pcStack_60,"Loading world information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x29:
    FUN_140069780(&pcStack_60,&DAT_1416cda80);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2a:
    FUN_140069780(&pcStack_60,&DAT_1416cda98);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2b:
    FUN_140069780(&pcStack_60,"Loading adventure...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2c:
    FUN_140069780(&pcStack_60,"Loading general information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2d:
    FUN_140069780(&pcStack_60,"Closing file...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2e:
    FUN_140069780(&pcStack_60,&DAT_1416cd960);
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x2f:
    FUN_140069780(&pcStack_60,"Rebuilding more temporary information...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x30:
    FUN_140069780(&pcStack_60,"Preparing game screen...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x31:
    FUN_140069780(&pcStack_60,"Handling compatibility issues...");
    FUN_140af3400(0x14266c870,&pcStack_60);
    break;
  case 0x32:
    FUN_140069780(&pcStack_60,"Finishing...");
    FUN_140af3400(0x14266c870,&pcStack_60);
  }
  FUN_140070e80(&pcStack_60);
LAB_1407dd901:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}


/* reference PE:6aea05a1:02734000; new-game-mod-step; RVA 0x7ddb10..0x7ddbeb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong load_new_game_mod_step(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 auStackX_8 [2];
  undefined4 auStackX_18 [4];
  
  load_supplier_0xc4b030(auStackX_18,auStackX_8);
  iVar3 = _DAT_1423efc08 + -1;
  uVar1 = (longlong)iVar3 * 0x66666667 & 0xffffffff;
  iVar4 = iVar3 / 5 + (iVar3 >> 0x1f);
  if ((*(int *)(param_1 + 0x2e0) == 1) && ((DAT_142660e8c != '\0' || (DAT_142660e8d != '\0')))) {
    uVar1 = load_mod_choice_input
                      (&DAT_142660e80,iVar4,0x142660eb0,auStackX_18[0],(undefined4)auStackX_8[0],
                       (6 - (iVar3 >> 0x1f)) + iVar4);
    if ((char)uVar1 != '\0') {
      DAT_142661758 = 0;
      auStackX_8[0] = FUN_1415530e0(0xa30);
      lVar2 = FUN_14025b2c0(auStackX_8[0]);
      uVar1 = FUN_140c50360();
      *(undefined1 *)(lVar2 + 0x798) = 1;
      _DAT_1418be238 = 3;
      _DAT_1418be234 = 0xc;
      DAT_1418f9297 = 0;
      *(undefined1 *)(param_1 + 0x18) = 3;
    }
  }
  return uVar1;
}


/* reference PE:6aea05a1:02734000; saved-game-mod-step; RVA 0x7ddbf0..0x7ddccb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong load_saved_game_mod_step(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 auStackX_8 [2];
  undefined4 auStackX_18 [4];
  
  load_supplier_0xc4b030(auStackX_18,auStackX_8);
  iVar3 = _DAT_1423efc08 + -1;
  uVar1 = (longlong)iVar3 * 0x66666667 & 0xffffffff;
  iVar4 = iVar3 / 5 + (iVar3 >> 0x1f);
  if ((*(int *)(param_1 + 0x198) == 1) && ((DAT_142660e8c != '\0' || (DAT_142660e8d != '\0')))) {
    uVar1 = load_mod_choice_input
                      (&DAT_142660e80,iVar4,0x142660eb0,auStackX_18[0],(undefined4)auStackX_8[0],
                       (6 - (iVar3 >> 0x1f)) + iVar4);
    if ((char)uVar1 != '\0') {
      DAT_142661758 = 0;
      auStackX_8[0] = FUN_1415530e0(0xa30);
      lVar2 = FUN_14025b2c0(auStackX_8[0]);
      uVar1 = FUN_140c50360();
      *(undefined1 *)(lVar2 + 0x798) = 1;
      _DAT_1418be238 = 3;
      _DAT_1418be234 = 0xc;
      DAT_1418f9297 = 0;
      *(undefined1 *)(param_1 + 0x18) = 3;
    }
  }
  return uVar1;
}


/* reference PE:6aea05a1:02734000; resolve-compatible-mod; RVA 0x7dfc50..0x7dfff1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_resolve_compatible_mod(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 ***pppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 **appuStack_88 [2];
  longlong lStack_78;
  ulonglong uStack_70;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_d8;
  iVar6 = *(int *)(param_1 + 8);
  if ((iVar6 < 0) ||
     ((int)(*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30) >> 3) <= iVar6))
  goto LAB_1407dffc3;
  FUN_140070c00(appuStack_88,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar6 * 8));
  iVar6 = *(int *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar4 = _DAT_1418cff98;
  for (plVar12 = _DAT_1418cff90; plVar12 < plVar4; plVar12 = plVar12 + 1) {
    lVar2 = *plVar12;
    plVar8 = (longlong *)(lVar2 + 0x40);
    pppuVar9 = appuStack_88;
    if (0xf < uStack_70) {
      pppuVar9 = (undefined8 ***)appuStack_88[0];
    }
    if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
      plVar8 = (longlong *)*plVar8;
    }
    if (*(longlong *)(lVar2 + 0x50) == lStack_78) {
      iVar5 = load_supplier_0x1554864(plVar8,pppuVar9);
      if (iVar5 == 0) {
        if (*(int *)(lVar2 + 0x60) == iVar6) {
          *(longlong *)(param_1 + 0x20) = lVar2;
        }
        if (((*(longlong *)(param_1 + 0x18) == 0) ||
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x60) < *(int *)(lVar2 + 0x60))) &&
           (*(int *)(lVar2 + 0x88) <= iVar6)) {
          *(longlong *)(param_1 + 0x18) = lVar2;
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x18) != lVar2)) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 == 0) {
LAB_1407dffb6:
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      if ((*(uint *)(lVar3 + 0x158) & 4) != 0) {
        *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(lVar3 + 0x60);
        *(undefined4 *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x88);
        goto LAB_1407dfdb8;
      }
      uVar1 = *(uint *)(param_1 + 0x28);
      if ((uVar1 & 1) == 0) {
        if (((uVar1 & 2) == 0) || (lVar2 == 0)) {
          *(undefined1 *)(param_1 + 0xc) = 1;
          goto LAB_1407dffba;
        }
        if ((*(byte *)(lVar2 + 0x158) & 5) == 0) {
          iVar6 = FUN_140dbb840();
          if (iVar6 != 2) {
            *(int *)(param_1 + 0x10) = iVar6;
            goto LAB_1407dffb6;
          }
        }
      }
      else {
        if ((*(uint *)(lVar3 + 0x158) & 1) == 0) {
          iVar6 = FUN_140dbb840(uVar1,lVar3);
          if (iVar6 != 2) {
            *(int *)(param_1 + 0x10) = iVar6;
            *(undefined1 *)(param_1 + 0xd) = 1;
            goto LAB_1407dffba;
          }
          ppuStack_a8 = (undefined8 **)0x0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          ppuStack_a8 = (undefined8 **)FUN_140071e00(0x20);
          uStack_98 = 0x14;
          uStack_90 = 0x1f;
          *(undefined4 *)ppuStack_a8 = 0x61746164;
          *(undefined4 *)((longlong)ppuStack_a8 + 4) = 0x736e692f;
          *(undefined4 *)(ppuStack_a8 + 1) = 0x6c6c6174;
          *(undefined4 *)((longlong)ppuStack_a8 + 0xc) = 0x6d5f6465;
          *(undefined4 *)(ppuStack_a8 + 2) = 0x2f73646f;
          *(undefined1 *)((longlong)ppuStack_a8 + 0x14) = 0;
          lVar2 = *(longlong *)(param_1 + 0x18);
          puVar10 = (undefined8 *)(lVar2 + 0x40);
          if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
            puVar10 = (undefined8 *)*puVar10;
          }
          FUN_140071040(&ppuStack_a8,puVar10,*(undefined8 *)(lVar2 + 0x50));
          FUN_140071040(&ppuStack_a8," (",2);
          FUN_140545610(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60),&ppuStack_a8);
          FUN_140071040(&ppuStack_a8,")",1);
          ppuStack_b8 = &ppuStack_a8;
          if (0xf < uStack_90) {
            ppuStack_b8 = ppuStack_a8;
          }
          uStack_b0 = uStack_98;
          uVar7 = FUN_141551408();
          FUN_1401447c0(auStack_68,uVar7,&ppuStack_b8);
          FUN_1401fc7d0((longlong)*(int *)(param_1 + 8) * 0x20 + *(longlong *)(param_2 + 0x78),
                        auStack_68);
          FUN_14014c220(auStack_68);
          FUN_140070e80(&ppuStack_a8);
        }
        *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60);
        *(undefined4 *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_1 + 8) * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x88);
        lVar2 = *(longlong *)(param_1 + 0x18);
        puVar11 = (undefined8 *)(lVar2 + 0xd0);
        puVar10 = *(undefined8 **)
                   (*(longlong *)(param_2 + 0xb0) + (longlong)*(int *)(param_1 + 8) * 8);
        if (puVar10 != puVar11) {
          if (0xf < *(ulonglong *)(lVar2 + 0xe8)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_140070f00(puVar10,puVar11,*(undefined8 *)(lVar2 + 0xe0));
        }
        lVar2 = *(longlong *)(param_1 + 0x18);
        puVar11 = (undefined8 *)(lVar2 + 0x68);
        puVar10 = *(undefined8 **)
                   (*(longlong *)(param_2 + 200) + (longlong)*(int *)(param_1 + 8) * 8);
        if (puVar10 != puVar11) {
          if (0xf < *(ulonglong *)(lVar2 + 0x80)) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_140070f00(puVar10,puVar11,*(undefined8 *)(lVar2 + 0x78));
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    if ((*(byte *)(lVar2 + 0x158) & 5) == 0) {
      iVar6 = FUN_140dbb840();
      if (iVar6 != 2) {
        *(int *)(param_1 + 0x10) = iVar6;
        *(undefined1 *)(param_1 + 0xd) = 1;
        goto LAB_1407dffba;
      }
    }
LAB_1407dfdb8:
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
LAB_1407dffba:
  FUN_140070e80(appuStack_88);
LAB_1407dffc3:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_d8);
  return;
}


/* reference PE:6aea05a1:02734000; mod-choice-input; RVA 0x7e0000..0x7e044c */

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
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_a8;
  iVar4 = -1;
  iVar11 = -1;
  if (DAT_1423b2a55 != '\0') {
    iVar4 = _DAT_14266ca34;
    iVar11 = _DAT_14266ca30;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_1 + 0xd) != '\0') {
      iVar6 = (param_5 + param_4) / 2;
      if (((((DAT_1423b2a55 != '\0') && (DAT_1423b2a4c != '\0')) && (iVar6 + -8 <= iVar11)) &&
          ((iVar11 <= iVar6 + 8 && (param_6 + -10 <= iVar4)))) && (iVar4 <= param_6 + -8)) {
        DAT_1423b2a4c = '\0';
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
    }
    goto LAB_1407e02f2;
  }
  iVar3 = (param_5 + param_4) / 2;
  iStack_78 = iVar3 + 0x18;
  pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,iVar3 + 0x28);
  iVar6 = param_6 + -10;
  param_6 = param_6 + -8;
  if ((DAT_1423b2a55 == '\0') || (DAT_1423b2a4c == '\0')) goto LAB_1407e02f2;
  if (((iVar11 < iVar3 + -0x28) ||
      (((iVar3 + -0x1f < iVar11 || (iVar4 < iVar6)) || (param_6 < iVar4)))) &&
     ((((iVar11 < iVar3 + -0x1d || (iVar3 + -0x10 < iVar11)) || (iVar4 < iVar6)) ||
      (param_6 < iVar4)))) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
LAB_1407e03a0:
      if ((((iStack_78 <= iVar11) && (iVar11 <= iVar3 + 0x28)) && (iVar6 <= iVar4)) &&
         (iVar4 <= param_6)) {
        DAT_1423b2a4c = '\0';
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      goto LAB_1407e02f2;
    }
    if ((((iVar11 < iVar3 + -0xe) || (iVar3 + 1 < iVar11)) || (iVar4 < iVar6)) || (param_6 < iVar4))
    {
      if (((iVar11 < iVar3 + 3) || (iVar3 + 0x16 < iVar11)) ||
         ((iVar4 < iVar6 || (param_6 < iVar4)))) goto LAB_1407e03a0;
      DAT_1423b2a4c = '\0';
      *(undefined1 *)(param_1 + 0xc) = 0;
LAB_1407e0371:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
    }
    else {
      DAT_1423b2a4c = '\0';
      *(undefined1 *)(param_1 + 0xc) = 0;
      if ((iVar3 + 3 <= iVar11) && (iVar11 <= iVar3 + 0x16)) goto LAB_1407e0371;
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x158) & 5) == 0) &&
       (iVar4 = FUN_140dbb840(), iVar4 != 2)) {
LAB_1407e0394:
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(int *)(param_1 + 0x10) = iVar4;
      goto LAB_1407e02f2;
    }
  }
  else {
    DAT_1423b2a4c = '\0';
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (((iVar3 + -0x1d <= iVar11) && (iVar11 <= iVar3 + -0x10)) && (iVar4 <= param_6)) {
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_1407e02f2;
    if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x158) & 1) == 0) {
      iVar4 = FUN_140dbb840();
      if (iVar4 == 2) {
        pppuStack_70 = (undefined8 ***)0x0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        pppuStack_70 = (undefined8 ***)FUN_140071e00(0x20);
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
        FUN_140071040(&pppuStack_70,puVar8,*(undefined8 *)(lVar1 + 0x50));
        FUN_140071040(&pppuStack_70," (",2);
        FUN_140545610(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x60),&pppuStack_70);
        FUN_140071040(&pppuStack_70,")",1);
        pppuStack_88 = &pppuStack_70;
        if (0xf < uStack_58) {
          pppuStack_88 = pppuStack_70;
        }
        uStack_80 = uStack_60;
        uVar5 = FUN_141551408();
        FUN_1401447c0(auStack_50,uVar5,&pppuStack_88);
        FUN_1401fc7d0((longlong)*(int *)(param_1 + 8) * 0x20 + *(longlong *)(param_3 + 0x78),
                      auStack_50);
        FUN_14014c220(auStack_50);
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
          load_supplier_0x15530d0(ppppuVar7,uVar9);
        }
        goto LAB_1407e0265;
      }
      goto LAB_1407e0394;
    }
LAB_1407e0265:
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
      FUN_140070f00(puVar8,puVar10,*(undefined8 *)(lVar1 + 0xe0));
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar10 = (undefined8 *)(lVar1 + 0x68);
    puVar8 = *(undefined8 **)(*(longlong *)(param_3 + 200) + (longlong)*(int *)(param_1 + 8) * 8);
    if (puVar8 != puVar10) {
      if (0xf < *(ulonglong *)(lVar1 + 0x80)) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_140070f00(puVar8,puVar10,*(undefined8 *)(lVar1 + 0x78));
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_1407e02f2:
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_a8);
  return;
}


/* reference PE:6aea05a1:02734000; mod-load-dialog; RVA 0x7e0450..0x7e1318 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_mod_load_dialog(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_e8 [32];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  longlong lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_e8;
  iVar13 = *(int *)(param_1 + 8);
  lStack_a0 = param_1;
  if ((-1 < iVar13) && (iVar13 < (int)(_DAT_142660ee8 - _DAT_142660ee0 >> 3))) {
    FUN_140070c00(auStack_58,*(undefined8 *)(_DAT_142660f60 + (longlong)iVar13 * 8));
    FUN_140070c00(auStack_78,*(undefined8 *)(_DAT_142660f78 + (longlong)*(int *)(param_1 + 8) * 8));
    if (*(char *)(param_1 + 0xc) == '\0') {
      if (*(char *)(param_1 + 0xd) != '\0') {
        iVar7 = (param_2 + param_3) / 2;
        iVar13 = iVar7 + -0x23;
        iVar12 = iVar7 + 0x23;
        iVar8 = (iVar12 + iVar13) / 2;
        iVar1 = iVar8 + -8;
        iVar15 = iVar8 + 8;
        iStack_c8 = param_4 + -10;
        iStack_b4 = param_4 + -8;
        _DAT_14266c8fc = 0x1000006;
        for (iVar14 = param_4 + -0xf; _DAT_14266c8f4 = iVar13, iVar14 <= param_4 + -7;
            iVar14 = iVar14 + 1) {
          for (; _DAT_14266c8f4 <= iVar12; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
            if (iVar14 == param_4 + -0xf) {
              uVar10 = _DAT_1423f312c;
              if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3130, _DAT_14266c8f4 == iVar12))
              {
                uVar10 = _DAT_1423f3134;
              }
            }
            else if (iVar14 == param_4 + -7) {
              uVar10 = _DAT_1423f3144;
              if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3148, _DAT_14266c8f4 == iVar12))
              {
                uVar10 = _DAT_1423f314c;
              }
            }
            else {
              uVar10 = _DAT_1423f3138;
              if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3140, _DAT_14266c8f4 != iVar12))
              {
                uVar10 = _DAT_1423f313c;
              }
            }
            _DAT_14266c8f8 = iVar14;
            load_supplier_0xaf4570(0x14266c870,uVar10);
          }
        }
        _DAT_14266c8fc = 0x1010007;
        iVar7 = iVar7 + -0x21;
        _DAT_14266c8f8 = param_4 + -0xd;
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        _DAT_14266c8f4 = iVar7;
        if (*(int *)(lStack_a0 + 0x10) == 0) {
          puStack_98 = (undefined8 *)FUN_140071e00(0x20);
          uStack_88 = 0x16;
          uStack_80 = 0x1f;
          *puStack_98 = 0x742064656c696146;
          puStack_98[1] = 0x6c6174736e69206f;
          *(undefined4 *)(puStack_98 + 2) = 0x6f6d206c;
          *(undefined2 *)((longlong)puStack_98 + 0x14) = 0x3a64;
          *(undefined1 *)((longlong)puStack_98 + 0x16) = 0;
          FUN_140af3400(0x14266c870,&puStack_98);
        }
        else {
          puStack_98 = (undefined8 *)FUN_140071e00(0x20);
          uStack_88 = 0x1e;
          uStack_80 = 0x1f;
          *puStack_98 = 0x742064656c696146;
          puStack_98[1] = 0x6320646e6966206f;
          puStack_98[2] = 0x6c62697461706d6f;
          *(undefined4 *)(puStack_98 + 3) = 0x6f6d2065;
          *(undefined2 *)((longlong)puStack_98 + 0x1c) = 0x3a64;
          *(undefined1 *)((longlong)puStack_98 + 0x1e) = 0;
          FUN_140af3400(0x14266c870,&puStack_98);
        }
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          puVar9 = puStack_98;
          if (0xfff < uVar11) {
            puVar9 = (undefined8 *)puStack_98[-1];
            uVar11 = uStack_80 + 0x28;
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
            goto LAB_1407e12cb;
          }
          load_supplier_0x15530d0(puVar9,uVar11);
        }
        _DAT_14266c8f8 = param_4 + -0xc;
        _DAT_14266c8f4 = iVar7;
        FUN_140af3400(0x14266c870,auStack_58);
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x20;
        FUN_140af3400(0x14266c870,&puStack_98);
        FUN_140070e80(&puStack_98);
        FUN_140af3400(0x14266c870,auStack_78);
        iVar14 = iStack_b4;
        _DAT_14266c8f8 = iStack_c8;
        for (iVar13 = iStack_c8; _DAT_14266c8f4 = iVar1, iVar13 <= iVar14; iVar13 = iVar13 + 1) {
          for (; _DAT_14266c8f4 <= iVar15; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
            if (iVar13 == _DAT_14266c8f8) {
              uVar10 = _DAT_1423f2f4c;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f50, _DAT_14266c8f4 == iVar15))
              {
                uVar10 = _DAT_1423f2f54;
              }
            }
            else if (iVar13 == iVar14) {
              uVar10 = _DAT_1423f2f64;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f68, _DAT_14266c8f4 == iVar15))
              {
                uVar10 = _DAT_1423f2f6c;
              }
            }
            else {
              uVar10 = _DAT_1423f2f58;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f60, _DAT_14266c8f4 != iVar15))
              {
                uVar10 = _DAT_1423f2f5c;
              }
            }
            _DAT_14266c8f8 = iVar13;
            load_supplier_0xaf4570(0x14266c870,uVar10);
            _DAT_14266c8f8 = iStack_c8;
          }
        }
        _DAT_14266c8f4 = iVar8 + -6;
        _DAT_14266c8f8 = _DAT_14266c8f8 + 1;
        uStack_88 = 0xd;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x206f74206b636142;
        uStack_90 = 0x656c746974;
        FUN_140af3400(0x14266c870,&puStack_98);
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          puVar9 = puStack_98;
          if (0xfff < uVar11) {
            uVar11 = uStack_80 + 0x28;
            puVar9 = (undefined8 *)puStack_98[-1];
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
            goto LAB_1407e12cb;
          }
          load_supplier_0x15530d0(puVar9,uVar11);
        }
      }
    }
    else {
      iVar7 = (param_2 + param_3) / 2;
      iVar13 = iVar7 + -0x2a;
      iVar12 = iVar7 + 0x2a;
      iVar15 = iVar7 + -0x28;
      iStack_c4 = iVar7 + -0x1d;
      iVar1 = iVar7 + -0x10;
      iStack_c0 = iVar7 + -0xe;
      iStack_a8 = iVar7 + 1;
      iStack_bc = iVar7 + 3;
      iStack_a4 = iVar7 + 0x16;
      iStack_b8 = iVar7 + 0x18;
      iStack_b4 = iVar7 + 0x28;
      iStack_b0 = param_4 + -10;
      iStack_ac = param_4 + -8;
      _DAT_14266c8fc = 0x1000006;
      iVar8 = param_4 + -0xf;
      iStack_c8 = iVar8;
      for (iVar14 = iVar8; _DAT_14266c8f4 = iVar13, iVar14 <= param_4 + -7; iVar14 = iVar14 + 1) {
        for (; _DAT_14266c8f4 <= iVar12; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar14 == iVar8) {
            uVar10 = _DAT_1423f312c;
            if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3130, _DAT_14266c8f4 == iVar12)) {
              uVar10 = _DAT_1423f3134;
            }
          }
          else if (iVar14 == param_4 + -7) {
            uVar10 = _DAT_1423f3144;
            if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3148, _DAT_14266c8f4 == iVar12)) {
              uVar10 = _DAT_1423f314c;
            }
          }
          else {
            uVar10 = _DAT_1423f3138;
            if ((_DAT_14266c8f4 != iVar13) && (uVar10 = _DAT_1423f3140, _DAT_14266c8f4 != iVar12)) {
              uVar10 = _DAT_1423f313c;
            }
          }
          _DAT_14266c8f8 = iVar14;
          load_supplier_0xaf4570(0x14266c870,uVar10);
        }
      }
      iVar13 = iVar7 + -0x1f;
      _DAT_14266c8fc = 0x1010007;
      _DAT_14266c8f8 = iStack_c8 + 2;
      puStack_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      _DAT_14266c8f4 = iVar15;
      puStack_98 = (undefined8 *)FUN_140071e00(0x30);
      uStack_88 = 0x29;
      uStack_80 = 0x2f;
      *puStack_98 = 0x6f6320726577654e;
      puStack_98[1] = 0x656c62697461706d;
      puStack_98[2] = 0x6e6f697372657620;
      puStack_98[3] = 0x20646f6d20666f20;
      puStack_98[4] = 0x6465746365746564;
      *(undefined1 *)(puStack_98 + 5) = 0x3a;
      *(undefined1 *)((longlong)puStack_98 + 0x29) = 0;
      FUN_140af3400(0x14266c870,&puStack_98);
      if (0xf < uStack_80) {
        uVar11 = uStack_80 + 1;
        puVar9 = puStack_98;
        if (0xfff < uVar11) {
          uVar11 = uStack_80 + 0x28;
          puVar9 = (undefined8 *)puStack_98[-1];
          if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
          goto LAB_1407e12cb;
        }
        load_supplier_0x15530d0(puVar9,uVar11);
      }
      _DAT_14266c8f8 = iStack_c8 + 3;
      _DAT_14266c8f4 = iVar15;
      FUN_140af3400(0x14266c870,auStack_58);
      uStack_90 = 0;
      uStack_88 = 1;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x20;
      FUN_140af3400(0x14266c870,&puStack_98);
      FUN_140070e80(&puStack_98);
      lVar6 = lStack_a0;
      iVar14 = iStack_b0;
      iVar8 = iStack_b0;
      iVar12 = iStack_ac;
      if (*(longlong *)(lStack_a0 + 0x18) != 0) {
        FUN_140af3400(0x14266c870,*(longlong *)(lStack_a0 + 0x18) + 0x68);
        uStack_88 = 0xc;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x7520657661732820;
        uStack_90 = 0x20736573;
        FUN_140af3400(0x14266c870,&puStack_98);
        FUN_140070e80(&puStack_98);
        FUN_140af3400(0x14266c870,auStack_78);
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          uStack_88 = 0xb;
          uStack_80 = 0xf;
          puStack_98 = (undefined8 *)0x6f6620746f6e202c;
          uStack_90 = 0x646e75;
          FUN_140af3400(0x14266c870,&puStack_98);
          if (0xf < uStack_80) {
            uVar11 = uStack_80 + 1;
            puVar9 = puStack_98;
            if (0xfff < uVar11) {
              uVar11 = uStack_80 + 0x28;
              puVar9 = (undefined8 *)puStack_98[-1];
              if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9)))
              goto LAB_1407e12cb;
            }
            load_supplier_0x15530d0(puVar9,uVar11);
          }
        }
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x29;
        FUN_140af3400(0x14266c870,&puStack_98);
        FUN_140070e80(&puStack_98);
        iVar14 = iStack_b0;
        iVar8 = iStack_b0;
        iVar12 = iStack_ac;
      }
      for (; iVar5 = iStack_ac, iVar4 = iStack_b0, bVar3 = iVar14 <= iStack_ac,
          _DAT_14266c8f4 = iVar15, iStack_ac = iVar12, bVar3; iVar14 = iVar14 + 1) {
        for (; iStack_b0 = iVar8, _DAT_14266c8f4 <= iVar13; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar14 == iVar4) {
            uVar10 = _DAT_1423f2f28;
            if ((_DAT_14266c8f4 != iVar15) && (uVar10 = _DAT_1423f2f2c, _DAT_14266c8f4 == iVar13)) {
              uVar10 = _DAT_1423f2f30;
            }
          }
          else if (iVar14 == iVar5) {
            uVar10 = _DAT_1423f2f40;
            if ((_DAT_14266c8f4 != iVar15) && (uVar10 = _DAT_1423f2f44, _DAT_14266c8f4 == iVar13)) {
              uVar10 = _DAT_1423f2f48;
            }
          }
          else {
            uVar10 = _DAT_1423f2f34;
            if ((_DAT_14266c8f4 != iVar15) && (uVar10 = _DAT_1423f2f3c, _DAT_14266c8f4 != iVar13)) {
              uVar10 = _DAT_1423f2f38;
            }
          }
          _DAT_14266c8f8 = iVar14;
          load_supplier_0xaf4570(0x14266c870,uVar10);
          iVar8 = iStack_b0;
        }
        iVar8 = iStack_b0;
        iVar12 = iStack_ac;
        iStack_ac = iVar5;
        iStack_b0 = iVar4;
      }
      _DAT_14266c8f4 = iVar7 + -0x26;
      iVar13 = iStack_b0 + 1;
      uStack_90 = 0;
      uStack_88 = 6;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x657461647055;
      _DAT_14266c8f8 = iVar13;
      iStack_b0 = iVar8;
      FUN_140af3400(0x14266c870,&puStack_98);
      FUN_140070e80(&puStack_98);
      _DAT_14266c8f4 = iStack_c4;
      for (iVar14 = iVar4; iVar7 = _DAT_14266c8f4, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
        for (; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar14 == iVar4) {
            uVar10 = _DAT_1423f2f28;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f2c, _DAT_14266c8f4 == iVar1)) {
              uVar10 = _DAT_1423f2f30;
            }
          }
          else if (iVar14 == iVar5) {
            uVar10 = _DAT_1423f2f40;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f44, _DAT_14266c8f4 == iVar1)) {
              uVar10 = _DAT_1423f2f48;
            }
          }
          else {
            uVar10 = _DAT_1423f2f34;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f3c, _DAT_14266c8f4 != iVar1)) {
              uVar10 = _DAT_1423f2f38;
            }
          }
          _DAT_14266c8f8 = iVar14;
          load_supplier_0xaf4570(0x14266c870,uVar10);
          iVar7 = iStack_c4;
        }
        _DAT_14266c8f4 = iVar7;
      }
      _DAT_14266c8f4 = iStack_c4 + 2;
      uStack_88 = 10;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x6120657461647055;
      uStack_90 = 0x6c6c;
      _DAT_14266c8f8 = iVar13;
      FUN_140af3400(0x14266c870,&puStack_98);
      FUN_140070e80(&puStack_98);
      iVar15 = iStack_a8;
      iVar1 = iStack_c0;
      iVar14 = iVar4;
      iVar7 = iStack_b8;
      iVar8 = iStack_b4;
      iVar12 = iVar4;
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        for (; _DAT_14266c8f4 = iVar1, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
          for (; _DAT_14266c8f4 <= iVar15; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
            if (iVar14 == iVar4) {
              uVar10 = _DAT_1423f2f04;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f08, _DAT_14266c8f4 == iVar15))
              {
                uVar10 = _DAT_1423f2f0c;
              }
            }
            else if (iVar14 == iVar5) {
              uVar10 = _DAT_1423f2f1c;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f20, _DAT_14266c8f4 == iVar15))
              {
                uVar10 = _DAT_1423f2f24;
              }
            }
            else {
              uVar10 = _DAT_1423f2f10;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f18, _DAT_14266c8f4 != iVar15))
              {
                uVar10 = _DAT_1423f2f14;
              }
            }
            _DAT_14266c8f8 = iVar14;
            load_supplier_0xaf4570(0x14266c870,uVar10);
            iVar1 = iStack_c0;
          }
        }
        _DAT_14266c8f4 = iStack_c0 + 2;
        uStack_88 = 0xc;
        uStack_80 = 0xf;
        puStack_98 = (undefined8 *)0x70752074276e6f44;
        uStack_90 = 0x65746164;
        _DAT_14266c8f8 = iVar13;
        FUN_140af3400(0x14266c870,&puStack_98);
        FUN_140070e80(&puStack_98);
        iVar7 = iStack_a4;
        iVar1 = iStack_bc;
        for (iVar14 = iVar4; _DAT_14266c8f4 = iVar1, iVar14 <= iVar5; iVar14 = iVar14 + 1) {
          for (; _DAT_14266c8f4 <= iVar7; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
            if (iVar14 == iVar4) {
              uVar10 = _DAT_1423f2f04;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f08, _DAT_14266c8f4 == iVar7)) {
                uVar10 = _DAT_1423f2f0c;
              }
            }
            else if (iVar14 == iVar5) {
              uVar10 = _DAT_1423f2f1c;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f20, _DAT_14266c8f4 == iVar7)) {
                uVar10 = _DAT_1423f2f24;
              }
            }
            else {
              uVar10 = _DAT_1423f2f10;
              if ((_DAT_14266c8f4 != iVar1) && (uVar10 = _DAT_1423f2f18, _DAT_14266c8f4 != iVar7)) {
                uVar10 = _DAT_1423f2f14;
              }
            }
            _DAT_14266c8f8 = iVar14;
            load_supplier_0xaf4570(0x14266c870,uVar10);
            iVar1 = iStack_bc;
          }
        }
        _DAT_14266c8f4 = iStack_bc + 2;
        puStack_98 = (undefined8 *)0x0;
        uStack_90 = 0;
        _DAT_14266c8f8 = iVar13;
        puStack_98 = (undefined8 *)FUN_140071e00(0x20);
        uStack_88 = 0x10;
        uStack_80 = 0x1f;
        *puStack_98 = 0x70752074276e6f44;
        puStack_98[1] = 0x796e612065746164;
        *(undefined1 *)(puStack_98 + 2) = 0;
        FUN_140af3400(0x14266c870,&puStack_98);
        iVar7 = iStack_b8;
        iVar8 = iStack_b4;
        if (0xf < uStack_80) {
          if (0xfff < uStack_80 + 1) {
            uVar11 = uStack_80 + 0x28;
            puVar9 = (undefined8 *)puStack_98[-1];
            if (0x1f < (ulonglong)((longlong)puStack_98 + (-8 - (longlong)puVar9))) {
LAB_1407e12cb:
              _invalid_parameter_noinfo_noreturn(puVar9,uVar11);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x15530d0();
          iVar7 = iStack_b8;
          iVar8 = iStack_b4;
        }
      }
      for (; iVar1 = iStack_b4, iStack_b4 = iVar8, _DAT_14266c8f4 = iVar7, iVar12 <= iVar5;
          iVar12 = iVar12 + 1) {
        for (; _DAT_14266c8f4 <= iVar1; _DAT_14266c8f4 = _DAT_14266c8f4 + 1) {
          if (iVar12 == iVar4) {
            uVar10 = _DAT_1423f2f4c;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f50, _DAT_14266c8f4 == iVar1)) {
              uVar10 = _DAT_1423f2f54;
            }
          }
          else if (iVar12 == iVar5) {
            uVar10 = _DAT_1423f2f64;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f68, _DAT_14266c8f4 == iVar1)) {
              uVar10 = _DAT_1423f2f6c;
            }
          }
          else {
            uVar10 = _DAT_1423f2f58;
            if ((_DAT_14266c8f4 != iVar7) && (uVar10 = _DAT_1423f2f60, _DAT_14266c8f4 != iVar1)) {
              uVar10 = _DAT_1423f2f5c;
            }
          }
          _DAT_14266c8f8 = iVar12;
          load_supplier_0xaf4570(0x14266c870,uVar10);
          iVar7 = iStack_b8;
        }
        iVar8 = iStack_b4;
        iStack_b4 = iVar1;
      }
      _DAT_14266c8f4 = iStack_b8 + 2;
      uStack_88 = 0xd;
      uStack_80 = 0xf;
      puStack_98 = (undefined8 *)0x206f74206b636142;
      uStack_90 = 0x656c746974;
      _DAT_14266c8f8 = iVar13;
      FUN_140af3400(0x14266c870,&puStack_98);
      FUN_140070e80(&puStack_98);
    }
    FUN_140070e80(auStack_78);
    FUN_140070e80(auStack_58);
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_e8);
  return;
}


