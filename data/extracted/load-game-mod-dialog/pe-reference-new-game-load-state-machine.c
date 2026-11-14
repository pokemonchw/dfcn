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

