/* Actual Ghidra decompilation; PE:6aea05a1:02734000	peak-volcano-create	0x140f67700	0x140f6d7b0	0x140f6d7b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f67700(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  ushort *puVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined *puVar9;
  undefined2 uVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  ushort uVar14;
  short sVar15;
  short sVar16;
  undefined2 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int *piVar25;
  uint *puVar26;
  undefined8 uVar27;
  longlong *plVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  byte bVar36;
  uint uVar37;
  short *psVar38;
  ulonglong uVar39;
  short sVar40;
  uint uVar41;
  uint uVar42;
  short *psVar43;
  ulonglong uVar44;
  int iVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  int iVar50;
  longlong lVar51;
  longlong lVar52;
  uint uVar53;
  int iVar54;
  short sVar55;
  int iVar56;
  ulonglong uVar57;
  int iVar58;
  short sVar59;
  uint uVar60;
  int iVar61;
  bool bVar62;
  undefined1 auVar63 [16];
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStack_4a8 [32];
  uint uStack_488;
  short *psStack_480;
  short *psStack_478;
  ushort *puStack_470;
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint uStack_458;
  int iStack_454;
  ulonglong uStack_450;
  longlong lStack_448;
  int iStack_440;
  uint uStack_43c;
  int iStack_438;
  int iStack_434;
  int iStack_430;
  uint uStack_42c;
  undefined *puStack_428;
  int *piStack_420;
  ulonglong uStack_418;
  longlong lStack_410;
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  longlong lStack_3c0;
  longlong lStack_3b8;
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [40];
  undefined4 uStack_368;
  undefined1 uStack_264;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int aiStack_1d8 [24];
  undefined8 uStack_178;
  undefined2 uStack_170;
  short asStack_168 [4];
  short sStack_160;
  undefined2 uStack_15c;
  ushort auStack_138 [4];
  ushort uStack_130;
  ushort uStack_12e;
  ushort uStack_12c;
  ushort uStack_12a;
  ushort uStack_128;
  ushort uStack_126;
  ushort uStack_124;
  ushort uStack_122;
  ushort uStack_120;
  ushort uStack_11e;
  ushort uStack_11c;
  ushort uStack_11a;
  ushort uStack_118;
  ushort uStack_116;
  ushort uStack_114;
  ushort uStack_112;
  ushort uStack_110;
  ushort uStack_10e;
  ushort uStack_10c;
  ushort uStack_10a;
  short asStack_108 [4];
  short sStack_100;
  undefined2 uStack_fc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  
  uStack_78 = _DAT_1418be040 ^ (ulonglong)auStack_4a8;
  iStack_430 = -1;
  uVar44 = 0;
  lStack_410 = param_1;
  if (_DAT_14250dfe0 == 1) {
    _DAT_142167754 = 1;
    _DAT_1423aa348 = 0xffffffff;
    DAT_1418f9296 = 0xff;
    _DAT_142153ec4 = 0xffffffff;
    *(undefined1 *)(param_1 + 0x4844c) = 1;
    *(undefined4 *)(param_1 + 0x48448) = 1;
    *(undefined1 *)(param_1 + 0x48454) = 1;
    *(undefined4 *)(param_1 + 0x48458) = 0;
    FUN_141456460(&DAT_14250dfe0);
    _DAT_142660e78 = 0;
    supplier_0x1400708c0(0x142661558);
    _DAT_14251bc20 = _DAT_142167750;
    _DAT_142660dd0 = _DAT_142167750;
    iVar18 = supplier_0x140070480(param_1 + 0x48460);
    iVar18 = iVar18 + -1;
    if (-1 < iVar18) {
      lVar47 = (longlong)iVar18;
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x48460,lVar47);
        if (*plVar23 != 0) {
          FUN_140291bf0(*plVar23,1);
        }
        lVar47 = lVar47 + -1;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    supplier_0x1400708c0(param_1 + 0x48460);
    supplier_0x1409105d0(0x14251c138);
    iVar18 = supplier_0x140070480(0x14251c7a0);
    iVar18 = iVar18 + -1;
    if (-1 < iVar18) {
      lVar47 = (longlong)iVar18;
      do {
        plVar23 = (longlong *)supplier_0x140070850(0x14251c7a0,lVar47);
        if (*plVar23 != 0) {
          FUN_140f6d7b0(*plVar23,1);
        }
        lVar47 = lVar47 + -1;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    supplier_0x1400708c0(0x14251c7a0);
    FUN_140fa65c0(param_1,_DAT_14250e194,_DAT_14250e198);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      FUN_140f18380((longlong *)(param_1 + 0x158),*(undefined2 *)(param_1 + 0xa0),
                    *(undefined2 *)(param_1 + 0xa4));
    }
    if (*(longlong *)(param_1 + 0x168) == 0) {
      FUN_140f18380((longlong *)(param_1 + 0x168),*(undefined2 *)(param_1 + 0xa0),
                    *(undefined2 *)(param_1 + 0xa4));
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      FUN_140f14a90(param_1 + 0x128,*(undefined2 *)(param_1 + 0xa0),*(undefined2 *)(param_1 + 0xa4))
      ;
    }
    FUN_140f9b580(param_1 + 0xc0,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    if ((*(longlong *)(param_1 + 0x2c8) != 0) &&
       (iVar18 = (*(int *)(param_1 + 0xa4) + 0xf >> 4) * (*(int *)(param_1 + 0xa0) + 0xf >> 4),
       uVar39 = uVar44, 0 < iVar18)) {
      do {
        uVar19 = FUN_140ece790();
        *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + uVar39 * 4) = uVar19;
        uVar39 = uVar39 + 1;
      } while ((longlong)uVar39 < (longlong)iVar18);
    }
    puVar3 = *(ushort **)(param_1 + 0x2b8);
    if (puVar3 != (ushort *)0x0) {
      for (iVar18 = *(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0xa0); 0 < iVar18;
          iVar18 = iVar18 + -1) {
        uVar14 = FUN_140073560(5);
        *puVar3 = *puVar3 | uVar14;
        sVar15 = FUN_140073560(5);
        *puVar3 = *puVar3 | sVar15 << 3;
        sVar15 = FUN_140073560(5);
        *puVar3 = *puVar3 | sVar15 << 6;
        sVar15 = FUN_140073560(5);
        *puVar3 = *puVar3 | sVar15 << 9;
        sVar15 = FUN_140073560(5);
        *puVar3 = *puVar3 | sVar15 << 0xc;
        puVar3 = puVar3 + 1;
      }
    }
    pbVar4 = *(byte **)(param_1 + 0x2c0);
    if (pbVar4 != (byte *)0x0) {
      for (iVar18 = *(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0xa0); 0 < iVar18;
          iVar18 = iVar18 + -1) {
        bVar11 = FUN_140073560(5);
        *pbVar4 = *pbVar4 | bVar11;
        pbVar4 = pbVar4 + 1;
      }
    }
    FUN_1402919e0(&uStack_368);
    FUN_140070bd0(&uStack_368,0x14251bc78);
    uStack_264 = 1;
    uStack_45c = 0xffffffff;
    FUN_140ee7310(param_1,&uStack_368,&uStack_45c);
    FUN_14029cde0(&uStack_368);
  }
  if (_DAT_14250dfe0 == 2) {
    uVar39 = uVar44;
    if (0 < *(int *)(param_1 + 0xa0)) {
      do {
        if (0 < *(int *)(param_1 + 0xa4)) {
          lVar47 = (longlong)(int)uVar39;
          uVar57 = uVar44;
          do {
            iVar18 = (int)uVar57;
            lVar52 = (longlong)iVar18;
            lVar51 = 0x10;
            lVar48 = lVar52 * 0x70 + 0x34;
            do {
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + -8 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + -4 + lVar48) = 0x8ad0
                ;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + -4 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) || (*(longlong *)(lVar51 + _DAT_14251c0e8) == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + -2 + lVar48) = 0x8ad0
                ;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + -2 + lVar48) =
                     *(undefined2 *)
                      (*(longlong *)(*(longlong *)(lVar51 + _DAT_14251c0e8) + lVar47 * 8) +
                      lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 8 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)(lVar48 + *(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8))
                     = 0x8ad0;
              }
              else {
                *(undefined2 *)(lVar48 + *(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8))
                     = *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 0x10 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 2 + lVar48) = 0x8ad0;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 2 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 0x18 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 4 + lVar48) = 0x8ad0;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 4 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 0x20 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 6 + lVar48) = 0x8ad0;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 6 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 0x28 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 8 + lVar48) = 0x8ad0;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 8 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              if ((_DAT_14251c0e8 == 0) ||
                 (lVar5 = *(longlong *)(lVar51 + 0x30 + _DAT_14251c0e8), lVar5 == 0)) {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 10 + lVar48) = 0x8ad0
                ;
              }
              else {
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 10 + lVar48) =
                     *(undefined2 *)(*(longlong *)(lVar5 + lVar47 * 8) + lVar52 * 2);
              }
              lVar48 = lVar48 + 0x10;
              lVar51 = lVar51 + 0x40;
            } while (lVar51 < 0xd0);
            supplier_0x140144de0
                      ((longlong)iVar18 * 0x70 +
                       *(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 0x20);
            supplier_0x1400708c0
                      ((longlong)iVar18 * 0x70 +
                       *(longlong *)(*(longlong *)(param_1 + 0x2b0) + lVar47 * 8) + 8);
            uVar57 = (ulonglong)(iVar18 + 1U);
          } while ((int)(iVar18 + 1U) < *(int *)(param_1 + 0xa4));
        }
        uVar41 = (int)uVar39 + 1;
        uVar39 = (ulonglong)uVar41;
      } while ((int)uVar41 < *(int *)(param_1 + 0xa0));
    }
    FUN_1409137b0(param_1 + 0xe8);
    FUN_140fa1320(param_1);
    lVar47 = supplier_0x140070480(param_1 + 0x220);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x220,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6d880(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x220);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x220);
    lVar47 = supplier_0x140070480(param_1 + 0x268);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x268,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6d8d0(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x268);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x268);
    lVar47 = supplier_0x140070480(param_1 + 0x238);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x238,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6d9a0(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x238);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x238);
    lVar47 = supplier_0x140070480(param_1 + 0x250);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x250,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6daa0(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x250);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x250);
    lVar47 = supplier_0x140070480(param_1 + 0x280);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x280,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6db40(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x280);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x280);
    lVar47 = supplier_0x140070480(param_1 + 0x298);
    uVar39 = uVar44;
    uVar57 = uVar44;
    if (lVar47 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(param_1 + 0x298,uVar39);
        if (*plVar23 != 0) {
          FUN_140f6db90(*plVar23,1);
        }
        uVar41 = (int)uVar57 + 1;
        uVar24 = supplier_0x140070480(param_1 + 0x298);
        uVar39 = (longlong)(int)uVar41;
        uVar57 = (ulonglong)uVar41;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(param_1 + 0x298);
    switch(_DAT_14251c110) {
    case 0:
      *(undefined2 *)(param_1 + 0xb0) = 0xffff;
      break;
    case 1:
      uVar17 = FUN_140073560(2);
      *(undefined2 *)(param_1 + 0xb0) = uVar17;
      break;
    case 2:
      uVar17 = FUN_140073560(3);
      *(undefined2 *)(param_1 + 0xb0) = uVar17;
      break;
    case 3:
      *(undefined2 *)(param_1 + 0xb0) = 0;
      break;
    case 4:
      *(undefined2 *)(param_1 + 0xb0) = 1;
      break;
    case 5:
      *(undefined2 *)(param_1 + 0xb0) = 2;
    }
    *(undefined2 *)(param_1 + 0xb2) = 0;
    psVar38 = (short *)((longlong)&uStack_368 + 2);
    psVar43 = (short *)&DAT_14251bea0;
    uVar39 = uVar44;
    uVar57 = uVar44;
LAB_140f68040:
    do {
      iVar18 = (int)uVar57;
      switch(iVar18) {
      case 0:
      case 1:
      case 3:
      case 5:
      case 6:
      case 7:
        sVar15 = psVar43[-0x30];
        iVar34 = (int)sVar15;
        *(short *)((longlong)asStack_168 + uVar39) = sVar15;
        sVar16 = *psVar43;
        iVar50 = (int)sVar16;
        *(short *)((longlong)asStack_108 + uVar39) = sVar16;
        *(short *)((longlong)&uStack_d8 + uVar39) = psVar43[0x30];
        *(short *)((longlong)&uStack_a8 + uVar39) = psVar43[0x60];
        psVar38[-1] = sVar15;
        iVar45 = iVar50 + iVar34 * 4;
        *psVar38 = ((short)(iVar45 / 5) + (short)(iVar45 >> 0x1f)) -
                   (short)((longlong)iVar45 * 0x66666667 >> 0x3f);
        iVar45 = iVar34 * 3 + iVar50 * 2;
        psVar38[1] = ((short)(iVar45 / 5) + (short)(iVar45 >> 0x1f)) -
                     (short)((longlong)iVar45 * 0x66666667 >> 0x3f);
        iVar45 = iVar50 * 3 + iVar34 * 2;
        psVar38[2] = ((short)(iVar45 / 5) + (short)(iVar45 >> 0x1f)) -
                     (short)((longlong)iVar45 * 0x66666667 >> 0x3f);
        iVar34 = iVar34 + iVar50 * 4;
        psVar38[3] = ((short)(iVar34 / 5) + (short)(iVar34 >> 0x1f)) -
                     (short)((longlong)iVar34 * 0x66666667 >> 0x3f);
        psVar38[4] = sVar16;
        break;
      case 4:
        *(undefined2 *)((longlong)asStack_168 + uVar39) = 0x21;
        *(undefined2 *)((longlong)asStack_108 + uVar39) = 0x41;
        iVar45 = *(int *)(param_1 + 0xa0) * 200;
        uStack_d0 = CONCAT22(uStack_d0._2_2_,
                             ((short)(iVar45 / 0x101) + (short)(iVar45 >> 0x1f)) -
                             (short)((longlong)iVar45 * 0x7f807f81 >> 0x3f));
        iVar45 = *(int *)(param_1 + 0xa4) * 200;
        uStack_a0 = CONCAT22(uStack_a0._2_2_,
                             ((short)(iVar45 / 0x101) + (short)(iVar45 >> 0x1f)) -
                             (short)((longlong)iVar45 * 0x7f807f81 >> 0x3f));
        uVar57 = (ulonglong)(iVar18 + 1);
        psVar43 = psVar43 + 2;
        psVar38 = psVar38 + 6;
        uVar39 = uVar39 + 2;
        goto LAB_140f68040;
      }
      uVar57 = (ulonglong)(iVar18 + 1U);
      psVar43 = psVar43 + 2;
      psVar38 = psVar38 + 6;
      uVar39 = uVar39 + 2;
    } while ((int)(iVar18 + 1U) < 0x18);
    iStack_434 = *(int *)(param_1 + 0xa0) + -1;
    iVar18 = *(int *)(param_1 + 0xa4) + -1;
    uVar19 = uStack_d8;
    uVar64 = uStack_d4;
    uVar65 = uStack_d0;
    uVar66 = uStack_cc;
    uVar67 = uStack_c8;
    uVar68 = uStack_c4;
    uVar69 = uStack_c0;
    uVar70 = uStack_bc;
    uVar71 = uStack_b8;
    uVar72 = uStack_b4;
    uVar73 = uStack_b0;
    uVar74 = uStack_ac;
    if (iVar18 < iStack_434) {
      uVar19 = uStack_a8;
      uVar64 = uStack_a4;
      uVar65 = uStack_a0;
      uVar66 = uStack_9c;
      uVar67 = uStack_98;
      uVar68 = uStack_94;
      uVar69 = uStack_90;
      uVar70 = uStack_8c;
      uVar71 = uStack_88;
      uVar72 = uStack_84;
      uVar73 = uStack_80;
      uVar74 = uStack_7c;
      iStack_434 = iVar18;
    }
    iVar18 = 1;
    if (1 < _DAT_14251c058) {
      iVar18 = _DAT_14251c058;
    }
    if (iVar18 < _DAT_14251c070) {
      iVar18 = _DAT_14251c070;
    }
    if (iVar18 < _DAT_14251c088) {
      iVar18 = _DAT_14251c088;
    }
    if (iVar18 < _DAT_14251c0a0) {
      iVar18 = _DAT_14251c0a0;
    }
    if (iVar18 < _DAT_14251c0b8) {
      iVar18 = _DAT_14251c0b8;
    }
    if (iVar18 < _DAT_14251c0d0) {
      iVar18 = _DAT_14251c0d0;
    }
    supplier_0x140067130(auStack_3b0);
    supplier_0x140070a40(auStack_3b0,&iStack_434);
    param_1 = lStack_410;
    while ((lStack_410 = param_1, 8 < iStack_434 && (iVar18 = iVar18 + -1, 0 < iVar18))) {
      iStack_434 = iStack_434 >> 1;
      supplier_0x140070a40(auStack_3b0,&iStack_434);
      param_1 = lStack_410;
    }
    piVar25 = aiStack_1d8;
    do {
      switch((int)uVar44) {
      case 0:
        puStack_428 = &DAT_14251c05c;
        iVar18 = _DAT_14251c05c;
        break;
      case 1:
        puStack_428 = &DAT_14251c074;
        iVar18 = _DAT_14251c074;
        break;
      default:
        puStack_428 = (undefined *)0x0;
        goto LAB_140f68323;
      case 3:
        puStack_428 = &DAT_14251c0bc;
        iVar18 = _DAT_14251c0bc;
        break;
      case 5:
        puStack_428 = &DAT_14251c08c;
        iVar18 = _DAT_14251c08c;
        break;
      case 6:
        puStack_428 = &DAT_14251c0d4;
        iVar18 = _DAT_14251c0d4;
        break;
      case 7:
        puStack_428 = &DAT_14251c0a4;
        iVar18 = _DAT_14251c0a4;
      }
      *piVar25 = *(int *)(puStack_428 + 0x10) + *(int *)(puStack_428 + 0xc) +
                 *(int *)(puStack_428 + 8) + *(int *)(puStack_428 + 4) + iVar18;
LAB_140f68323:
      uStack_468 = (int)uVar44 + 1;
      uVar44 = (ulonglong)uStack_468;
      piVar25 = piVar25 + 1;
    } while ((int)uStack_468 < 0x18);
    do {
      iVar18 = 0;
      auStack_138[0] = (ushort)uVar19;
      auStack_138[1] = (ushort)((uint)uVar19 >> 0x10);
      auStack_138[2] = (ushort)uVar64;
      auStack_138[3] = (ushort)((uint)uVar64 >> 0x10);
      uStack_130 = (ushort)uVar65;
      uStack_12e = (ushort)((uint)uVar65 >> 0x10);
      uStack_12c = (ushort)uVar66;
      uStack_12a = (ushort)((uint)uVar66 >> 0x10);
      uStack_128 = (ushort)uVar67;
      uStack_126 = (ushort)((uint)uVar67 >> 0x10);
      uStack_124 = (ushort)uVar68;
      uStack_122 = (ushort)((uint)uVar68 >> 0x10);
      uStack_120 = (ushort)uVar69;
      uStack_11e = (ushort)((uint)uVar69 >> 0x10);
      uStack_11c = (ushort)uVar70;
      uStack_11a = (ushort)((uint)uVar70 >> 0x10);
      uStack_118 = (ushort)uVar71;
      uStack_116 = (ushort)((uint)uVar71 >> 0x10);
      uStack_114 = (ushort)uVar72;
      uStack_112 = (ushort)((uint)uVar72 >> 0x10);
      uStack_110 = (ushort)uVar73;
      uStack_10e = (ushort)((uint)uVar73 >> 0x10);
      uStack_10c = (ushort)uVar74;
      uStack_10a = (ushort)((uint)uVar74 >> 0x10);
      lVar47 = _DAT_14251c0e8;
      if (0 < *(int *)(param_1 + 0xa0)) {
        uStack_468 = 0x18;
        iVar45 = iVar18;
        do {
          lVar51 = 0x34;
          lVar52 = 0x10;
          lVar48 = 2;
          do {
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + -8 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -4 + lVar51)
                   = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x44 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -2 + lVar51)
                   = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x42 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 8 + lVar47) == 0)) {
              *(undefined2 *)
               (lVar51 + *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8)) =
                   0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x40 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x10 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 2 + lVar51) =
                   0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x3e +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x18 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 4 + lVar51) =
                   0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x3c +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x20 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 6 + lVar51) =
                   0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x3a +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x28 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 8 + lVar51) =
                   0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x38 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x30 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 10 + lVar51)
                   = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x36 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x38 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 0xc + lVar51)
                   = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x34 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x40 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 0xe + lVar51)
                   = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x32 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x48 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 0x10 + lVar51
               ) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x30 +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar52 + 0x50 + lVar47) == 0)) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + 0x12 + lVar51
               ) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar45 * 8) + -0x2e +
               ((longlong)*(int *)(param_1 + 0xa4) * 0x38 + lVar48) * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            lVar51 = lVar51 + 0x18;
            lVar52 = lVar52 + 0x60;
            lVar5 = lVar48 + 10;
            lVar48 = lVar48 + 0xc;
          } while (lVar5 < 0x18);
          iVar45 = iVar45 + 1;
        } while (iVar45 < *(int *)(param_1 + 0xa0));
        uVar44 = 0x18;
      }
      if (0 < *(int *)(param_1 + 0xa4)) {
        uStack_468 = 0x18;
        iVar45 = iVar18;
        do {
          lVar51 = 0x10;
          lVar48 = 2;
          do {
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + -8 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x2c + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x2c + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x2e + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x2e + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 8 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x30 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x30 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x10 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x32 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x32 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x18 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x34 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x34 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x20 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x36 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x36 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x28 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x38 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x38 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x30 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x3a + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x3a + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x38 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x3c + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x3c + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x40 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x3e + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x3e + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x48 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x40 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x40 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            if ((lVar47 == 0) || (*(longlong *)(lVar51 + 0x50 + lVar47) == 0)) {
              lVar47 = (longlong)iVar45 * 0x38 + lVar48;
              *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x42 + lVar47 * 2) = 0x8ad0;
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x42 + lVar47 * 2) = 0x8ad0;
              lVar47 = _DAT_14251c0e8;
            }
            lVar51 = lVar51 + 0x60;
            lVar52 = lVar48 + 10;
            lVar48 = lVar48 + 0xc;
          } while (lVar52 < 0x18);
          iVar45 = iVar45 + 1;
        } while (iVar45 < *(int *)(param_1 + 0xa4));
        uVar44 = 0x18;
      }
      iStack_438 = 0;
      lVar47 = supplier_0x1400709a0();
      if (lVar47 != 0) {
        uVar39 = 0;
        uStack_450 = 0;
        do {
          uStack_43c = 0;
          uVar57 = (ulonglong)(int)uVar44;
          uStack_418 = uVar57;
          do {
            if ((iVar18 == 0) && (uStack_43c == 1)) break;
            iStack_440 = 0;
            uStack_45c = 0;
            uVar41 = uStack_43c;
            if (0 < *(int *)(param_1 + 0xa4)) {
              do {
                iVar45 = iStack_440;
                uVar24 = 0;
                if (iVar18 == 0) {
                  uStack_460 = 0;
                  piVar25 = (int *)supplier_0x140070990(auStack_3b0,0);
                  iStack_454 = *piVar25;
LAB_140f68b79:
                  uStack_464 = (uint)uVar24;
                  uVar41 = uStack_43c;
                  iVar18 = iStack_438;
                  if ((int)uStack_464 < *(int *)(param_1 + 0xa0)) {
                    lVar47 = (longlong)iVar45;
                    uStack_178 = lVar47 * 0x70;
                    lStack_448 = lVar47;
                    do {
                      lVar48 = uStack_178;
                      sVar15 = FUN_140073560(((int)sStack_100 - (int)sStack_160) + 1);
                      uVar39 = (ulonglong)(int)uVar24;
                      *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar39 * 8) + 0x38 +
                                lVar48) = sVar15 + sStack_160;
                      uStack_458 = 0;
                      do {
                        uVar41 = uStack_458;
                        switch(uStack_458) {
                        case 0:
                          uStack_468 = 0;
                          uVar57 = 0;
                          uStack_418 = 0;
                          uVar44 = 0;
                          break;
                        case 1:
                          uStack_468 = 1;
                          uVar57 = 1;
                          uStack_418 = 1;
                          uVar44 = 1;
                          break;
                        case 2:
                          uStack_468 = 3;
                          uVar57 = 3;
                          uStack_418 = 3;
                          uVar44 = 3;
                          break;
                        case 3:
                          uVar57 = 5;
                          goto LAB_140f68c58;
                        case 4:
                          uVar57 = 6;
                          goto LAB_140f68c58;
                        case 5:
                          uVar57 = 7;
LAB_140f68c58:
                          uStack_468 = (uint)uVar57;
                          uVar44 = uVar57;
                          uStack_418 = uVar57;
                        }
                        if ((_DAT_14251c0e8 == 0) ||
                           (*(longlong *)(_DAT_14251c0e8 + (uVar57 * 2 + 2) * 4) == 0)) {
                          switch((int)uVar44) {
                          case 0:
                            piStack_420 = (int *)&DAT_14251c058;
                            puStack_428 = &DAT_14251c05c;
                            break;
                          case 1:
                            piStack_420 = (int *)&DAT_14251c070;
                            puStack_428 = &DAT_14251c074;
                            break;
                          default:
                            break;
                          case 3:
                            piStack_420 = (int *)&DAT_14251c0b8;
                            puStack_428 = &DAT_14251c0bc;
                            break;
                          case 5:
                            piStack_420 = (int *)&DAT_14251c088;
                            puStack_428 = &DAT_14251c08c;
                            break;
                          case 6:
                            piStack_420 = (int *)&DAT_14251c0d0;
                            puStack_428 = &DAT_14251c0d4;
                            break;
                          case 7:
                            piStack_420 = (int *)&DAT_14251c0a0;
                            puStack_428 = &DAT_14251c0a4;
                          }
                          puVar9 = puStack_428;
                          if (((iStack_438 < *piStack_420) && (*piStack_420 != 1)) &&
                             (0 < aiStack_1d8[uVar57])) {
                            iVar18 = FUN_140073560();
                            uVar49 = 0;
                            uVar24 = uVar49;
                            do {
                              if (((int)uVar49 == 4) || (iVar18 < *(int *)(puVar9 + uVar24 * 4))) {
                                sVar16 = *(short *)((longlong)&uStack_368 +
                                                   (uVar24 + uVar57 * 6) * 2);
                                sVar15 = FUN_140073560(((int)*(short *)((longlong)&uStack_368 +
                                                                       (uVar24 + uVar57 * 6) * 2 + 2
                                                                       ) - (int)sVar16) + 1);
                                sVar15 = sVar15 + sVar16;
                                goto LAB_140f68da9;
                              }
                              iVar18 = iVar18 - *(int *)(puVar9 + uVar24 * 4);
                              uVar33 = (int)uVar49 + 1;
                              uVar49 = (ulonglong)uVar33;
                              uVar24 = uVar24 + 1;
                            } while ((int)uVar33 < 5);
                            uVar24 = (ulonglong)uStack_464;
                          }
                          else if (iStack_438 == 0) {
                            sVar15 = FUN_140073560(((int)asStack_108[uVar57] -
                                                   (int)asStack_168[uVar57]) + 1);
                            sVar15 = sVar15 + asStack_168[uVar57];
LAB_140f68da9:
                            *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar39 * 8) +
                                       0x30 + (lVar47 * 0x38 + uVar57) * 2) = sVar15;
                            uVar24 = (ulonglong)uStack_464;
                          }
                          else {
                            uVar20 = FUN_140073560((short)auStack_138[uVar57] * 2 + 1);
                            uVar24 = uStack_450;
                            sVar15 = (short)uVar20 - auStack_138[uVar57];
                            uStack_42c = CONCAT22((short)((uint)uVar20 >> 0x10),sVar15);
                            if (uStack_460 == 0) {
                              if (uStack_43c == 0) {
                                lVar47 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar39 * 8);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uStack_450);
                                iVar34 = iStack_440 - *piVar25;
                                lVar48 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar39 * 8);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uStack_450);
                                iVar18 = *piVar25 + iStack_440;
                                iVar45 = FUN_140073560(2);
                                sVar15 = sVar15 + (short)((int)*(short *)(lVar47 + uVar57 * 2 + 0x30
                                                                         + (longlong)iVar34 * 0x70)
                                                          + iVar45 + *(short *)(lVar48 + uVar57 * 2
                                                                                + 0x30 + (longlong)
                                                                                         iVar18 * 
                                                  0x70) >> 1);
                              }
                              else {
                                lStack_3c0 = *(longlong *)
                                              (*(longlong *)(param_1 + 0x2b0) + uVar39 * 8);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uStack_450);
                                lStack_3b8 = (longlong)(iStack_440 - *piVar25) * 0x70;
                                lVar47 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar39 * 8);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uVar24);
                                iVar18 = *piVar25 + iStack_440;
                                lVar48 = *(longlong *)(param_1 + 0x2b0);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uVar24);
                                iVar50 = uStack_464 - *piVar25;
                                lVar51 = *(longlong *)(lStack_410 + 0x2b0);
                                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uVar24);
                                iVar45 = *piVar25 + uStack_464;
                                lVar52 = lStack_448 * 0x38 + uStack_418;
                                iVar34 = FUN_140073560(4);
                                sVar15 = (short)uStack_42c +
                                         (short)((int)*(short *)(lStack_3c0 + uStack_418 * 2 + 0x30
                                                                + lStack_3b8) +
                                                 (int)*(short *)(uStack_418 * 2 + lVar47 + 0x30 +
                                                                (longlong)iVar18 * 0x70) +
                                                 iVar34 + *(short *)(*(longlong *)
                                                                      (lVar51 + (longlong)iVar45 * 8
                                                                      ) + 0x30 + lVar52 * 2) +
                                                 (int)*(short *)(*(longlong *)
                                                                  (lVar48 + (longlong)iVar50 * 8) +
                                                                 0x30 + lVar52 * 2) >> 2);
                                uVar57 = uStack_418;
                                param_1 = lStack_410;
                              }
                              uVar44 = (ulonglong)uStack_468;
                              uVar41 = uStack_458;
                            }
                            else {
                              lVar47 = *(longlong *)(param_1 + 0x2b0);
                              lVar48 = lStack_448 * 0x38 + uVar57;
                              iVar18 = FUN_140073560(2);
                              sVar15 = sVar15 + (short)((int)*(short *)(*(longlong *)
                                                                         (lVar47 + (longlong)
                                                                                   (int)(uStack_460
                                                                                        + uStack_464
                                                                                        ) * 8) +
                                                                        0x30 + lVar48 * 2) +
                                                        iVar18 + *(short *)(*(longlong *)
                                                                             (lVar47 + (longlong)
                                                                                       (int)(
                                                  uStack_464 - uStack_460) * 8) + 0x30 + lVar48 * 2)
                                                  >> 1);
                            }
                            do {
                              while( true ) {
                                sVar16 = asStack_168[uVar57];
                                bVar62 = sVar15 < sVar16;
                                if (bVar62) {
                                  sVar15 = FUN_140073560((int)sVar16 - (int)sVar15);
                                  sVar15 = sVar15 + asStack_168[uVar57];
                                }
                                if (sVar15 <= asStack_108[uVar57]) break;
                                sVar15 = FUN_140073560((int)sVar15 - (int)asStack_108[uVar57]);
                                sVar15 = asStack_108[uVar57] - sVar15;
                              }
                            } while (bVar62);
                            uVar24 = (ulonglong)(int)uStack_464;
                            *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + uVar24 * 8) +
                                       0x30 + (lStack_448 * 0x38 + uVar57) * 2) = sVar15;
                            uVar39 = uVar24;
                            lVar47 = lStack_448;
                          }
                        }
                        uStack_458 = uVar41 + 1;
                      } while ((int)uStack_458 < 6);
                      uStack_464 = (int)uVar24 + iStack_454;
                      uVar24 = (ulonglong)uStack_464;
                      uVar39 = uStack_450;
                      iVar45 = iStack_440;
                      uVar41 = uStack_43c;
                      iVar18 = iStack_438;
                    } while ((int)uStack_464 < *(int *)(param_1 + 0xa0));
                  }
                }
                else {
                  uVar33 = uStack_45c & 0x80000001;
                  if ((int)uVar33 < 0) {
                    uVar33 = (uVar33 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar33 == 1) {
                    if (uVar41 != 0) goto LAB_140f68b5a;
LAB_140f68b68:
                    uStack_460 = (uint)uVar24;
                    piVar25 = (int *)supplier_0x140070990(auStack_3b0,uVar39);
                    iStack_454 = *piVar25 * 2;
                    goto LAB_140f68b79;
                  }
                  if (uVar41 == 0) {
LAB_140f68b5a:
                    puVar26 = (uint *)supplier_0x140070990(auStack_3b0,uVar39);
                    uVar24 = (ulonglong)*puVar26;
                    goto LAB_140f68b68;
                  }
                }
                piVar25 = (int *)supplier_0x140070990(auStack_3b0,uVar39);
                iStack_440 = iVar45 + *piVar25;
                uStack_45c = uStack_45c + 1;
              } while (iStack_440 < *(int *)(param_1 + 0xa4));
            }
            uStack_43c = uVar41 + 1;
          } while ((int)uStack_43c < 2);
          iVar45 = supplier_0x1400709a0(auStack_3b0);
          if (iVar18 != iVar45 + -1) {
            auVar63._2_2_ = auStack_138[1];
            auVar63._0_2_ = auStack_138[0];
            auVar63._4_2_ = auStack_138[2];
            auVar63._6_2_ = auStack_138[3];
            auVar63._8_2_ = uStack_130;
            auVar63._10_2_ = uStack_12e;
            auVar63._12_2_ = uStack_12c;
            auVar63._14_2_ = uStack_12a;
            auVar63 = psraw(auVar63,1);
            sVar15 = auVar63._0_2_;
            auStack_138[0] = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._2_2_;
            auStack_138[1] = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._4_2_;
            auStack_138[2] = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._6_2_;
            auStack_138[3] = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._8_2_;
            uStack_130 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._10_2_;
            uStack_12e = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._12_2_;
            uStack_12c = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._14_2_;
            uStack_12a = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            auVar6._2_2_ = uStack_126;
            auVar6._0_2_ = uStack_128;
            auVar6._4_2_ = uStack_124;
            auVar6._6_2_ = uStack_122;
            auVar6._8_2_ = uStack_120;
            auVar6._10_2_ = uStack_11e;
            auVar6._12_2_ = uStack_11c;
            auVar6._14_2_ = uStack_11a;
            auVar63 = psraw(auVar6,1);
            sVar15 = auVar63._0_2_;
            uStack_128 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._2_2_;
            uStack_126 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._4_2_;
            uStack_124 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._6_2_;
            uStack_122 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._8_2_;
            uStack_120 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._10_2_;
            uStack_11e = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._12_2_;
            uStack_11c = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._14_2_;
            uStack_11a = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            auVar7._2_2_ = uStack_116;
            auVar7._0_2_ = uStack_118;
            auVar7._4_2_ = uStack_114;
            auVar7._6_2_ = uStack_112;
            auVar7._8_2_ = uStack_110;
            auVar7._10_2_ = uStack_10e;
            auVar7._12_2_ = uStack_10c;
            auVar7._14_2_ = uStack_10a;
            auVar63 = psraw(auVar7,1);
            sVar15 = auVar63._0_2_;
            uStack_118 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._2_2_;
            uStack_116 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._4_2_;
            uStack_114 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._6_2_;
            uStack_112 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._8_2_;
            uStack_110 = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._10_2_;
            uStack_10e = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._12_2_;
            uStack_10c = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            sVar15 = auVar63._14_2_;
            uStack_10a = (ushort)(1 < sVar15) * sVar15 | (ushort)(1 >= sVar15);
            uVar44 = 0x18;
            uStack_468 = 0x18;
          }
          iVar18 = iVar18 + 1;
          uVar39 = (ulonglong)iVar18;
          uStack_450 = uVar39;
          iStack_438 = iVar18;
          uVar57 = supplier_0x1400709a0(auStack_3b0);
        } while (uVar39 < uVar57);
      }
      iVar45 = 0;
      iVar18 = 0;
      if (2 < _DAT_14251bd30) {
        *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x30) = 0x32;
        *(undefined2 *)
         (*(longlong *)
           (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) + 0x30) =
             0x32;
        *(undefined2 *)
         ((longlong)*(int *)(param_1 + 0xa4) * 0x70 + -0x40 + **(longlong **)(param_1 + 0x2b0)) =
             0x32;
        *(undefined2 *)
         (*(longlong *)
           (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) + -0x40 +
         (longlong)*(int *)(param_1 + 0xa4) * 0x70) = 0x32;
      }
      puStack_470 = (ushort *)&uStack_d8;
      psStack_478 = asStack_108;
      psStack_480 = asStack_168;
      uStack_488 = uStack_488 & 0xffff0000;
      FUN_140f72410(param_1,0,*(short *)(param_1 + 0xa0) + -1,0);
      puStack_470 = (ushort *)&uStack_d8;
      psStack_478 = asStack_108;
      psStack_480 = asStack_168;
      uStack_488._0_2_ = *(short *)(param_1 + 0xa4) + -1;
      FUN_140f72410(param_1,0,*(short *)(param_1 + 0xa0) + -1);
      uStack_488._0_2_ = *(short *)(param_1 + 0xa4) + -1;
      puStack_470 = (ushort *)&uStack_a8;
      psStack_478 = asStack_108;
      psStack_480 = asStack_168;
      FUN_140f72410(param_1,0,0,0);
      sVar15 = *(short *)(param_1 + 0xa0) + -1;
      puStack_470 = (ushort *)&uStack_a8;
      psStack_478 = asStack_108;
      psStack_480 = asStack_168;
      uStack_488 = CONCAT22(uStack_488._2_2_,*(short *)(param_1 + 0xa4) + -1);
      FUN_140f72410(param_1,sVar15,sVar15,0);
      iVar34 = 0;
      if (_DAT_14251bd30 == 4) {
        iVar50 = iVar45;
        if (0 < *(int *)(param_1 + 0xa0)) {
          do {
            *(undefined2 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + 0x30) = 0x32;
            *(undefined2 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + -0x40 +
             (longlong)*(int *)(param_1 + 0xa4) * 0x70) = 0x32;
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa0));
        }
        iVar50 = iVar45;
        if (0 < *(int *)(param_1 + 0xa4)) {
          do {
            *(undefined2 *)(**(longlong **)(param_1 + 0x2b0) + 0x30 + (longlong)iVar50 * 0x70) =
                 0x32;
            *(undefined2 *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) + 0x30
             + (longlong)iVar50 * 0x70) = 0x32;
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa4));
        }
      }
      if (_DAT_14251bd30 == 3) {
        iVar21 = FUN_140073560(4);
        iVar50 = iVar45;
        if (0 < *(int *)(param_1 + 0xa0)) {
          do {
            if (iVar21 != 0) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + 0x30) = 0x32;
            }
            if (iVar21 != 1) {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + -0x40 +
               (longlong)*(int *)(param_1 + 0xa4) * 0x70) = 0x32;
            }
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa0));
        }
        iVar50 = iVar45;
        if (0 < *(int *)(param_1 + 0xa4)) {
          do {
            if ((iVar21 == 2) ||
               (*(undefined2 *)((longlong)iVar50 * 0x70 + 0x30 + **(longlong **)(param_1 + 0x2b0)) =
                     0x32, iVar21 != 3)) {
              *(undefined2 *)
               (*(longlong *)
                 (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) +
                0x30 + (longlong)iVar50 * 0x70) = 0x32;
            }
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa4));
        }
      }
      if (_DAT_14251bd30 == 2) {
        iVar50 = FUN_140073560(4);
        iVar21 = FUN_140073560(3);
        uVar41 = iVar50 + 1 + iVar21 & 0x80000003;
        if ((int)uVar41 < 0) {
          uVar41 = (uVar41 - 1 | 0xfffffffc) + 1;
        }
        if (((iVar50 == 0) || (uVar41 == 0)) && (iVar21 = iVar45, 0 < *(int *)(param_1 + 0xa0))) {
          do {
            *(undefined2 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar21 * 8) + 0x30) = 0x32;
            iVar21 = iVar21 + 1;
          } while (iVar21 < *(int *)(param_1 + 0xa0));
        }
        if (((iVar50 == 1) || (uVar41 == 1)) && (iVar21 = iVar45, 0 < *(int *)(param_1 + 0xa0))) {
          do {
            *(undefined2 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar21 * 8) + -0x40 +
             (longlong)*(int *)(param_1 + 0xa4) * 0x70) = 0x32;
            iVar21 = iVar21 + 1;
          } while (iVar21 < *(int *)(param_1 + 0xa0));
        }
        if (((iVar50 == 2) || (uVar41 == 2)) && (iVar21 = iVar45, 0 < *(int *)(param_1 + 0xa4))) {
          do {
            *(undefined2 *)((longlong)iVar21 * 0x70 + 0x30 + **(longlong **)(param_1 + 0x2b0)) =
                 0x32;
            iVar21 = iVar21 + 1;
          } while (iVar21 < *(int *)(param_1 + 0xa4));
        }
        if (((iVar50 == 3) || (uVar41 == 3)) && (iVar50 = iVar45, 0 < *(int *)(param_1 + 0xa4))) {
          do {
            *(undefined2 *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) + 0x30
             + (longlong)iVar50 * 0x70) = 0x32;
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa4));
        }
      }
      if (_DAT_14251bd30 == 1) {
        iVar50 = FUN_140073560(4);
        if (iVar50 == 0) {
          iVar50 = iVar45;
          if (0 < *(int *)(param_1 + 0xa0)) {
            do {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + 0x30) = 0x32;
              iVar50 = iVar50 + 1;
            } while (iVar50 < *(int *)(param_1 + 0xa0));
          }
        }
        else if (iVar50 == 1) {
          iVar50 = iVar45;
          if (0 < *(int *)(param_1 + 0xa0)) {
            do {
              *(undefined2 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar50 * 8) + -0x40 +
               (longlong)*(int *)(param_1 + 0xa4) * 0x70) = 0x32;
              iVar50 = iVar50 + 1;
            } while (iVar50 < *(int *)(param_1 + 0xa0));
          }
        }
        else if (iVar50 == 2) {
          iVar50 = iVar45;
          if (0 < *(int *)(param_1 + 0xa4)) {
            do {
              *(undefined2 *)((longlong)iVar50 * 0x70 + 0x30 + **(longlong **)(param_1 + 0x2b0)) =
                   0x32;
              iVar50 = iVar50 + 1;
            } while (iVar50 < *(int *)(param_1 + 0xa4));
          }
        }
        else if ((iVar50 == 3) && (iVar50 = iVar45, 0 < *(int *)(param_1 + 0xa4))) {
          do {
            *(undefined2 *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)*(int *)(param_1 + 0xa0) * 8) + 0x30
             + (longlong)iVar50 * 0x70) = 0x32;
            iVar50 = iVar50 + 1;
          } while (iVar50 < *(int *)(param_1 + 0xa4));
        }
      }
      if (((_DAT_14251c0e8 != 0) && (*(longlong *)(_DAT_14251c0e8 + 8) != 0)) ||
         ((1 < _DAT_14251c058 || (99 < _DAT_14251be40)))) break;
      iVar50 = iVar34;
      iVar21 = iVar45;
      if (0 < (int)*(uint *)(param_1 + 0xa0)) {
        plVar23 = *(longlong **)(param_1 + 0x2b0);
        uVar39 = (ulonglong)*(uint *)(param_1 + 0xa0);
        iVar50 = iVar45;
        do {
          iVar35 = iVar21 + 1;
          if (99 < *(short *)(*plVar23 + 0x30)) {
            iVar35 = iVar21;
          }
          iVar21 = iVar35;
          if (*(short *)(*plVar23 + -0x40 + (longlong)*(int *)(param_1 + 0xa4) * 0x70) < 100) {
            iVar50 = iVar50 + 1;
          }
          plVar23 = plVar23 + 1;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      if (0 < (int)*(uint *)(param_1 + 0xa4)) {
        psVar38 = (short *)((*(longlong **)(param_1 + 0x2b0))
                            [(longlong)*(int *)(param_1 + 0xa0) + -1] + 0x30);
        psVar43 = (short *)(**(longlong **)(param_1 + 0x2b0) + 0x30);
        uVar39 = (ulonglong)*(uint *)(param_1 + 0xa4);
        iVar34 = iVar45;
        iVar18 = iVar45;
        do {
          iVar45 = iVar34 + 1;
          if (99 < *psVar43) {
            iVar45 = iVar34;
          }
          iVar34 = iVar45;
          if (*psVar38 < 100) {
            iVar18 = iVar18 + 1;
          }
          psVar43 = psVar43 + 0x38;
          psVar38 = psVar38 + 0x38;
          uVar39 = uVar39 - 1;
        } while (uVar39 != 0);
      }
      iVar45 = *(int *)(param_1 + 0xa4);
      bVar11 = (iVar34 == iVar45) + 1;
      if (iVar18 != iVar45) {
        bVar11 = iVar34 == iVar45;
      }
      iVar35 = *(int *)(param_1 + 0xa0);
      uVar41 = bVar11 + 1;
      if (iVar50 != iVar35) {
        uVar41 = (uint)bVar11;
      }
      uVar33 = uVar41 + 1;
      if (iVar21 != iVar35) {
        uVar33 = uVar41;
      }
      iVar45 = (int)(iVar45 + (iVar45 >> 0x1f & 7U)) >> 3;
      bVar11 = (iVar45 <= iVar34) + 1;
      if (iVar18 < iVar45) {
        bVar11 = iVar45 <= iVar34;
      }
      iVar18 = (int)(iVar35 + (iVar35 >> 0x1f & 7U)) >> 3;
      bVar36 = bVar11 + 1;
      if (iVar50 < iVar18) {
        bVar36 = bVar11;
      }
      bVar11 = bVar36 + 1;
      if (iVar21 < iVar18) {
        bVar11 = bVar36;
      }
    } while (((int)(uint)bVar11 < _DAT_14251bd2c) || ((int)uVar33 < _DAT_14251bd30));
    uVar44 = 0;
    if (((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 0x38) == 0)) &&
       (_DAT_14251c0d0 == 1)) {
      lVar47 = 0xf;
      do {
        uVar10 = uStack_fc;
        lVar48 = *(longlong *)(param_1 + 0x2b0);
        iVar18 = FUN_140073560(*(undefined4 *)(param_1 + 0xa0));
        lVar48 = *(longlong *)(lVar48 + (longlong)iVar18 * 8);
        iVar18 = FUN_140073560(*(undefined4 *)(param_1 + 0xa4));
        uVar17 = uStack_15c;
        *(undefined2 *)(lVar48 + 0x3c + (longlong)iVar18 * 0x70) = uVar10;
        lVar48 = *(longlong *)(param_1 + 0x2b0);
        iVar18 = FUN_140073560(*(undefined4 *)(param_1 + 0xa0));
        lVar48 = *(longlong *)(lVar48 + (longlong)iVar18 * 8);
        iVar18 = FUN_140073560(*(undefined4 *)(param_1 + 0xa4));
        *(undefined2 *)(lVar48 + 0x3c + (longlong)iVar18 * 0x70) = uVar17;
        lVar47 = lVar47 + -1;
      } while (lVar47 != 0);
    }
    uStack_468 = 0;
    iVar18 = iStack_434;
    uVar41 = uStack_468;
    if (0 < *(int *)(param_1 + 0xa0) - iStack_434) {
      do {
        uVar41 = 0;
        if (0 < *(int *)(param_1 + 0xa4) - iVar18) {
          do {
            puStack_470 = auStack_138;
            psStack_478 = asStack_108;
            psStack_480 = asStack_168;
            uStack_488 = CONCAT22(uStack_488._2_2_,(short)iVar18 + (short)uVar41);
            FUN_140f72410(param_1,uVar44 & 0xffff,iVar18 + (int)uVar44,uVar41 & 0xffff);
            uVar41 = uVar41 + iStack_434;
            iVar18 = iStack_434;
          } while ((int)uVar41 < *(int *)(param_1 + 0xa4) - iStack_434);
        }
        uVar41 = (int)uVar44 + iVar18;
        uVar44 = (ulonglong)uVar41;
      } while ((int)uVar41 < *(int *)(param_1 + 0xa0) - iVar18);
    }
    uStack_468 = uVar41;
    supplier_0x140067150(auStack_3b0);
  }
  else {
    uVar44 = (ulonglong)uStack_42c;
    uStack_468 = uStack_42c;
  }
  lVar47 = param_1;
  if (_DAT_14250dfe0 == 3) {
    iVar18 = *(int *)(param_1 + 0xa4);
    iVar45 = (iVar18 * iVar18 * 200) / 0x10201;
    iVar34 = iVar18 * iVar18 * 0x96;
    uVar44 = (ulonglong)((longlong)iVar34 * 0x7f017e03) >> 0x20;
    iVar34 = iVar34 / 0x10201;
    if (iVar45 < 1) {
      iVar45 = 1;
    }
    if (iVar34 < 1) {
      iVar34 = 1;
    }
    sVar15 = *(short *)(param_1 + 0xb0);
    if (sVar15 == 0) {
      iVar50 = 0;
      if (0 < iVar18) {
        do {
          iVar18 = 0;
          if (0 < *(int *)(param_1 + 0xa0)) {
            do {
              iVar21 = *(int *)(param_1 + 0xa4) >> 1;
              lVar48 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar18 * 8);
              iVar35 = iVar21 - iVar50;
              iVar35 = iVar35 * iVar35;
              if (iVar50 < iVar21) {
                uVar44 = (longlong)iVar35 % (longlong)iVar45;
                psVar38 = (short *)(lVar48 + 0x36 + (longlong)iVar50 * 0x70);
                *psVar38 = *psVar38 - (short)(iVar35 / iVar45);
              }
              else {
                uVar44 = (longlong)iVar35 % (longlong)iVar34;
                psVar38 = (short *)(lVar48 + 0x36 + (longlong)iVar50 * 0x70);
                *psVar38 = *psVar38 + (short)(iVar35 / iVar34);
              }
              uVar44 = uVar44 & 0xffffffff;
              iVar18 = iVar18 + 1;
            } while (iVar18 < *(int *)(param_1 + 0xa0));
          }
          iVar50 = iVar50 + 1;
        } while (iVar50 < *(int *)(param_1 + 0xa4));
      }
    }
    else if (sVar15 == 1) {
      iVar50 = 0;
      if (0 < iVar18) {
        do {
          iVar18 = 0;
          if (0 < *(int *)(param_1 + 0xa0)) {
            do {
              iVar21 = *(int *)(param_1 + 0xa4);
              iVar35 = iVar21 >> 1;
              lVar48 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar18 * 8);
              if (iVar50 < iVar35) {
                uVar14 = *(short *)((longlong)(iVar21 - iVar50) * 0x70 + -0x3a + lVar48) -
                         (short)(((iVar35 - iVar50) * (iVar35 - iVar50)) / iVar45);
                uVar44 = (ulonglong)uVar14;
                *(ushort *)((longlong)(iVar21 - iVar50) * 0x70 + -0x3a + lVar48) = uVar14;
              }
              else {
                uVar44 = (longlong)(iVar21 - iVar50) * 0x70;
                *(short *)((uVar44 - 0x3a) + lVar48) =
                     (short)(((iVar35 - iVar50) * (iVar35 - iVar50)) / iVar34) +
                     *(short *)((longlong)(iVar21 - iVar50) * 0x70 + -0x3a + lVar48);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < *(int *)(param_1 + 0xa0));
          }
          iVar50 = iVar50 + 1;
        } while (iVar50 < *(int *)(param_1 + 0xa4));
      }
    }
    else if ((sVar15 == 2) && (iVar50 = 0, 0 < iVar18)) {
      do {
        sVar15 = (short)iVar50;
        if ((int)sVar15 < iVar18 / 2) {
          uVar44 = (ulonglong)(ushort)(sVar15 * 2);
        }
        else {
          sVar16 = ((short)(iVar18 / 2) - sVar15) * 2 + (short)iVar18 + -1;
          sVar15 = 0;
          if (-1 < sVar16) {
            sVar15 = sVar16;
          }
          uVar41 = iVar18 - 1;
          if (sVar15 < iVar18) {
            uVar41 = CONCAT22((short)(uVar41 >> 0x10),sVar15);
          }
          uVar44 = (ulonglong)uVar41;
        }
        iVar18 = 0;
        if (0 < *(int *)(param_1 + 0xa0)) {
          sVar15 = (short)uVar44;
          lVar48 = (longlong)iVar50 * 0x70;
          do {
            iVar21 = *(int *)(param_1 + 0xa4) >> 1;
            lVar51 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar18 * 8);
            iVar35 = iVar21 - sVar15;
            iVar35 = iVar35 * iVar35;
            if (sVar15 < iVar21) {
              uVar44 = (longlong)iVar35 % (longlong)iVar45;
              *(short *)(lVar48 + 0x36 + lVar51) =
                   *(short *)(lVar51 + 0x36 + lVar48) - (short)(iVar35 / iVar45);
            }
            else {
              uVar44 = (longlong)iVar35 % (longlong)iVar34;
              *(short *)(lVar48 + 0x36 + lVar51) =
                   (short)(iVar35 / iVar34) + *(short *)(lVar51 + 0x36 + lVar48);
            }
            uVar44 = uVar44 & 0xffffffff;
            iVar18 = iVar18 + 1;
          } while (iVar18 < *(int *)(param_1 + 0xa0));
        }
        iVar50 = iVar50 + 1;
        iVar18 = *(int *)(param_1 + 0xa4);
      } while (iVar50 < iVar18);
    }
    supplier_0x140067130(auStack_408,uVar44);
    supplier_0x140067130(auStack_3d8);
    iVar18 = 0;
    if (0 < *(int *)(param_1 + 0xa0)) {
      do {
        iVar45 = 0;
        if (0 < *(int *)(param_1 + 0xa4)) {
          do {
            lVar51 = (longlong)iVar45 * 0x70;
            lVar48 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar18 * 8);
            if (399 < *(short *)(lVar48 + 0x30 + lVar51)) {
              *(undefined2 *)(lVar48 + 0x30 + lVar51) = 399;
            }
            if (0x17b < *(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x2b0) + (longlong)iVar18 * 8) + 0x30 +
                                  lVar51)) {
              uStack_468._0_2_ = (short)iVar18;
              supplier_0x140070b20(auStack_408,&uStack_468);
              uStack_468 = CONCAT22(uStack_468._2_2_,(short)iVar45);
              supplier_0x140070b20(auStack_3d8,&uStack_468);
            }
            iVar45 = iVar45 + 1;
          } while (iVar45 < *(int *)(param_1 + 0xa4));
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(param_1 + 0xa0));
    }
    uVar44 = supplier_0x140070a80(auStack_408);
    uVar39 = (ulonglong)_DAT_14251bd28;
    uStack_450 = uVar39;
    if ((uVar44 < uVar39) && (_DAT_14250dfe8 == 0)) {
      FUN_140069780(auStack_3b0,"Not enough peaks: ");
      uVar27 = supplier_0x140070a80(auStack_408);
      FUN_140545610(uVar27,auStack_3b0);
      supplier_0x140070b90(auStack_3b0,"<");
      FUN_140545610(_DAT_14251bd28,auStack_3b0);
      FUN_140762ed0(auStack_3b0,0);
      supplier_0x140069460(auStack_3b0);
    }
    else {
      uVar44 = supplier_0x140070a80(auStack_408);
      if (uVar44 < uVar39) {
        uVar39 = supplier_0x140070a80(auStack_408);
        uStack_450 = uVar39;
      }
      if ((int)uVar39 != 0) {
        plVar23 = (longlong *)(param_1 + 0x280);
        do {
          iVar18 = (int)uVar39;
          lVar48 = supplier_0x140070480(plVar23);
          if (lVar48 == 0) {
            uVar27 = supplier_0x140070a80();
            uVar33 = FUN_140073560(uVar27);
LAB_140f69f47:
            if (uVar33 != 0xffffffff) {
              uStack_178 = FUN_1415530e0(0x98);
              lStack_448 = FUN_140f180b0(uStack_178);
              uStack_488 = 0x24;
              FUN_140aac2a0(&DAT_14250fbf0,lStack_448,0xffffffff,0x13);
              lVar51 = (longlong)(int)uVar33;
              puVar29 = (undefined2 *)supplier_0x140070a70(auStack_408,lVar51);
              *(undefined2 *)(lStack_448 + 0x78) = *puVar29;
              puVar29 = (undefined2 *)supplier_0x140070a70(auStack_3d8,lVar51);
              *(undefined2 *)(lStack_448 + 0x7a) = *puVar29;
              supplier_0x1400bafb0(plVar23,&lStack_448);
              lVar48 = *(longlong *)(lVar47 + 0x2b0);
              psVar38 = (short *)supplier_0x140070a70(auStack_408,lVar51);
              lVar48 = *(longlong *)(lVar48 + (longlong)*psVar38 * 8);
              psVar38 = (short *)supplier_0x140070a70(auStack_3d8,lVar51);
              *(undefined2 *)(lVar48 + 0x30 + (longlong)*psVar38 * 0x70) = 400;
              lVar48 = *(longlong *)(lVar47 + 0x2b0);
              psVar38 = (short *)supplier_0x140070a70(auStack_408,lVar51);
              lVar48 = *(longlong *)(lVar48 + (longlong)*psVar38 * 8);
              psVar38 = (short *)supplier_0x140070a70(auStack_3d8,lVar51);
              supplier_0x1400fcef0((longlong)*psVar38 * 0x70 + 0x20 + lVar48,0xd);
              FUN_1400fcbb0(auStack_408,lVar51);
              FUN_1400fcbb0(auStack_3d8,lVar51);
            }
          }
          else {
            iVar45 = -1;
            iStack_454 = -1;
            uVar33 = 0xffffffff;
            uStack_45c = 0xffffffff;
            uVar41 = 0;
            uStack_458 = 0;
            lVar48 = supplier_0x140070a80();
            if (lVar48 != 0) {
              uVar44 = 0;
              do {
                uVar57 = 0;
                iVar18 = -1;
                uVar39 = uVar57;
                if (*(longlong *)(param_1 + 0x288) - *plVar23 >> 3 != 0) {
                  do {
                    plVar28 = (longlong *)supplier_0x140070850(plVar23,uVar57);
                    sVar15 = *(short *)(*plVar28 + 0x7a);
                    psVar38 = (short *)supplier_0x140070a70(auStack_3d8,uVar44);
                    sVar16 = *psVar38;
                    plVar28 = (longlong *)supplier_0x140070850(plVar23,uVar57);
                    sVar59 = *(short *)(*plVar28 + 0x78);
                    psVar38 = (short *)supplier_0x140070a70(auStack_408,uVar44);
                    iVar34 = (int)sVar59 - (int)*psVar38;
                    iVar45 = -iVar34;
                    if (iVar45 < 0) {
                      iVar45 = iVar34;
                    }
                    iVar50 = (int)sVar15 - (int)sVar16;
                    iVar34 = -iVar50;
                    if (iVar34 < 0) {
                      iVar34 = iVar50;
                    }
                    if ((iVar18 == -1) || (iVar45 + iVar34 < iVar18)) {
                      iVar18 = iVar45 + iVar34;
                    }
                    uVar41 = (int)uVar39 + 1;
                    uVar57 = (ulonglong)(int)uVar41;
                    uVar39 = (ulonglong)uVar41;
                    iVar45 = iStack_454;
                    uVar41 = uStack_458;
                    uVar33 = uStack_45c;
                  } while (uVar57 < (ulonglong)(*(longlong *)(param_1 + 0x288) - *plVar23 >> 3));
                }
                if ((iVar45 == -1) || (iVar45 < iVar18)) {
                  iVar45 = iVar18;
                  uStack_45c = uVar41;
                  iStack_454 = iVar18;
                  uVar33 = uVar41;
                }
                uVar41 = uVar41 + 1;
                uVar44 = (ulonglong)(int)uVar41;
                uStack_458 = uVar41;
                uVar39 = supplier_0x140070a80(auStack_408);
              } while (uVar44 < uVar39);
              iVar18 = (int)uStack_450;
              lVar47 = lStack_410;
              goto LAB_140f69f47;
            }
          }
          uVar39 = (ulonglong)(iVar18 - 1U);
          uStack_450 = uVar39;
        } while (iVar18 - 1U != 0);
      }
      if ((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) {
        uVar44 = 0;
        iVar18 = 0;
        if (0 < (int)*(uint *)(lVar47 + 0xa0)) {
          uVar24 = (ulonglong)*(uint *)(lVar47 + 0xa0);
          uVar39 = uVar44;
          uVar57 = uVar44;
          do {
            if (0 < (int)*(uint *)(lVar47 + 0xa4)) {
              psVar38 = (short *)(*(longlong *)(uVar57 + *(longlong *)(lVar47 + 0x2b0)) + 0x30);
              uVar49 = (ulonglong)*(uint *)(lVar47 + 0xa4);
              do {
                if (*psVar38 < 300) {
                  if (*psVar38 < 100) {
                    uVar39 = (ulonglong)((int)uVar39 + 1);
                  }
                }
                else {
                  uVar44 = (ulonglong)((int)uVar44 + 1);
                }
                psVar38 = psVar38 + 0x38;
                uVar49 = uVar49 - 1;
              } while (uVar49 != 0);
            }
            iVar18 = (int)uVar39;
            uVar57 = uVar57 + 8;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        iVar45 = *(int *)(lVar47 + 0xa4);
        uVar39 = (ulonglong)*(uint *)(lVar47 + 0xa0);
        iVar34 = (int)uVar44;
        if (((int)((*(uint *)(lVar47 + 0xa0) * iVar45 - iVar18) - iVar34) < _DAT_14251bfd4) &&
           (_DAT_14250dfec == 0)) {
          FUN_140069780(auStack_3b0,"Not enough medium altitudes");
          FUN_140762ed0(auStack_3b0,1);
          supplier_0x140069460(auStack_3b0);
        }
        else {
          sVar16 = 3;
          sVar15 = 3;
          iVar50 = _DAT_14251bfd4;
          iVar21 = _DAT_14251bfd8;
          if (iVar18 < _DAT_14251bfd8) {
            do {
              iVar34 = (int)uVar44;
              uVar57 = 0;
              if (sVar15 < 1) goto LAB_140f6a2d6;
              sVar15 = sVar15 + -1;
              iVar18 = 0;
              uVar44 = uVar57;
              uVar24 = uVar57;
              if (0 < (int)uVar39) {
                do {
                  iVar18 = 0;
                  if (0 < iVar45) {
                    lVar48 = (longlong)(int)uVar24;
                    do {
                      lVar52 = (longlong)iVar18 * 0x70;
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                      sVar59 = *(short *)(lVar51 + 0x30 + lVar52);
                      if (sVar59 < 300) {
                        *(short *)(lVar51 + 0x30 + lVar52) = sVar59 + -10;
                        lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                        if (*(short *)(lVar51 + 0x30 + lVar52) < 1) {
                          *(undefined2 *)(lVar51 + 0x30 + lVar52) = 1;
                        }
                      }
                      else {
                        uVar44 = (ulonglong)((int)uVar44 + 1);
                      }
                      if (*(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) +
                                     0x30 + lVar52) < 100) {
                        uVar57 = (ulonglong)((int)uVar57 + 1);
                      }
                      iVar18 = iVar18 + 1;
                      iVar45 = *(int *)(lVar47 + 0xa4);
                    } while (iVar18 < iVar45);
                  }
                  iVar18 = (int)uVar57;
                  uVar41 = (int)uVar24 + 1;
                  uVar24 = (ulonglong)uVar41;
                  uVar39 = (ulonglong)*(uint *)(lVar47 + 0xa0);
                  iVar50 = _DAT_14251bfd4;
                  iVar21 = _DAT_14251bfd8;
                } while ((int)uVar41 < (int)*(uint *)(lVar47 + 0xa0));
              }
              iVar34 = (int)uVar44;
              if (((((int)uVar39 * iVar45 - iVar18) - iVar34 < iVar50) && (sVar15 == 0)) &&
                 (_DAT_14250dff0 == 0)) {
                FUN_140069780(auStack_3b0,"Not enough medium altitudes after shift down");
                FUN_140762ed0(auStack_3b0,2);
                supplier_0x140069460(auStack_3b0);
                goto LAB_140f6afab;
              }
              if (iVar21 <= iVar18) goto LAB_140f6a2d6;
            } while ((sVar15 != 0) || (_DAT_14250dff4 != 0));
            FUN_140069780(auStack_3b0,"Not enough low altitudes after shift down: ");
            FUN_140545610(iVar18 - _DAT_14251bfd8,auStack_3b0);
            FUN_140762ed0(auStack_3b0,3);
            supplier_0x140069460(auStack_3b0);
          }
          else {
LAB_140f6a2d6:
            iVar18 = _DAT_14251bfdc;
            if (iVar34 < _DAT_14251bfdc) {
              do {
                if (sVar16 < 1) goto LAB_140f6a448;
                sVar16 = sVar16 + -1;
                iVar35 = 0;
                iVar34 = iVar35;
                iVar21 = iVar35;
                if (0 < (int)uVar39) {
                  do {
                    iVar18 = 0;
                    if (0 < iVar45) {
                      lVar48 = (longlong)iVar21;
                      do {
                        lVar52 = (longlong)iVar18 * 0x70;
                        lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                        sVar15 = *(short *)(lVar51 + 0x30 + lVar52);
                        if (sVar15 < 100) {
                          iVar34 = iVar34 + 1;
                        }
                        else if (sVar15 < 400) {
                          *(short *)(lVar51 + 0x30 + lVar52) = sVar15 + 10;
                          lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                          if (399 < *(short *)(lVar51 + 0x30 + lVar52)) {
                            *(undefined2 *)(lVar51 + 0x30 + lVar52) = 399;
                          }
                        }
                        if (299 < *(short *)(*(longlong *)
                                              (*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                                            lVar52)) {
                          iVar35 = iVar35 + 1;
                        }
                        iVar18 = iVar18 + 1;
                        iVar45 = *(int *)(lVar47 + 0xa4);
                      } while (iVar18 < iVar45);
                    }
                    iVar21 = iVar21 + 1;
                    uVar39 = (ulonglong)*(uint *)(lVar47 + 0xa0);
                    iVar50 = _DAT_14251bfd4;
                    iVar18 = _DAT_14251bfdc;
                  } while (iVar21 < (int)*(uint *)(lVar47 + 0xa0));
                }
                if (((((int)uVar39 * iVar45 - iVar34) - iVar35 < iVar50) && (sVar16 == 0)) &&
                   (_DAT_14250dff8 == 0)) {
                  FUN_140069780(auStack_3b0,"Not enough medium altitudes after shift up");
                  FUN_140762ed0(auStack_3b0,4);
                  supplier_0x140069460(auStack_3b0);
                  goto LAB_140f6afab;
                }
                if (iVar18 <= iVar35) goto LAB_140f6a448;
              } while ((sVar16 != 0) || (_DAT_14250dffc != 0));
              FUN_140069780(auStack_3b0,"Not enough high altitudes after shift up");
              FUN_140762ed0(auStack_3b0,5);
              supplier_0x140069460(auStack_3b0);
            }
            else {
LAB_140f6a448:
              uVar22 = 0;
              uVar41 = uVar22;
              uVar33 = uVar22;
              if (0 < (int)uVar39) {
                plVar23 = *(longlong **)(lVar47 + 0x2b0);
                uVar53 = 0;
                do {
                  uVar33 = uVar53 + 1;
                  if (99 < *(short *)(*plVar23 + 0x30)) {
                    uVar33 = uVar53;
                  }
                  if (*(short *)((longlong)iVar45 * 0x70 + -0x40 + *plVar23) < 100) {
                    uVar41 = uVar41 + 1;
                  }
                  plVar23 = plVar23 + 1;
                  uVar39 = uVar39 - 1;
                  uVar53 = uVar33;
                } while (uVar39 != 0);
              }
              uVar53 = *(uint *)(lVar47 + 0xa4);
              uVar42 = uVar22;
              if (0 < (int)uVar53) {
                psVar38 = (short *)((*(longlong **)(lVar47 + 0x2b0))
                                    [(longlong)*(int *)(lVar47 + 0xa0) + -1] + 0x30);
                psVar43 = (short *)(**(longlong **)(lVar47 + 0x2b0) + 0x30);
                uVar44 = (ulonglong)uVar53;
                do {
                  uVar2 = uVar22 + 1;
                  if (99 < *psVar43) {
                    uVar2 = uVar22;
                  }
                  uVar22 = uVar2;
                  if (*psVar38 < 100) {
                    uVar42 = uVar42 + 1;
                  }
                  psVar43 = psVar43 + 0x38;
                  psVar38 = psVar38 + 0x38;
                  uVar44 = uVar44 - 1;
                } while (uVar44 != 0);
              }
              bVar11 = (uVar22 == uVar53) + 1;
              if (uVar42 != uVar53) {
                bVar11 = uVar22 == uVar53;
              }
              uVar2 = *(uint *)(lVar47 + 0xa0);
              uVar37 = bVar11 + 1;
              if (uVar41 != uVar2) {
                uVar37 = (uint)bVar11;
              }
              uVar60 = uVar37 + 1;
              if (uVar33 != uVar2) {
                uVar60 = uVar37;
              }
              iVar18 = (int)(uVar53 + ((int)uVar53 >> 0x1f & 7U)) >> 3;
              bVar11 = (iVar18 <= (int)uVar22) + 1;
              if ((int)uVar42 < iVar18) {
                bVar11 = iVar18 <= (int)uVar22;
              }
              iVar18 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
              uVar22 = bVar11 + 1;
              if ((int)uVar41 < iVar18) {
                uVar22 = (uint)bVar11;
              }
              uVar41 = uVar22 + 1;
              if ((int)uVar33 < iVar18) {
                uVar41 = uVar22;
              }
              if (((int)uVar41 < _DAT_14251bd2c) && (_DAT_14250e000 == 0)) {
                FUN_140069780(auStack_3b0,"Not enough partial edge oceans");
                FUN_140762ed0(auStack_3b0,6);
                supplier_0x140069460(auStack_3b0);
              }
              else {
                if ((_DAT_14251bd30 <= (int)uVar60) || (_DAT_14250e000 != 0)) goto LAB_140f6a607;
                FUN_140069780(auStack_3b0,"Not enough complete edge oceans");
                FUN_140762ed0(auStack_3b0,6);
                supplier_0x140069460(auStack_3b0);
              }
            }
          }
        }
      }
      else {
LAB_140f6a607:
        iVar21 = 0;
        iVar54 = 0;
        iStack_454 = 0;
        iVar46 = 0;
        iStack_438 = 0;
        iStack_440 = 0;
        uStack_458 = 0;
        lStack_448 = 0;
        uStack_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        uStack_43c = 0;
        iVar18 = *(int *)(lVar47 + 0xa0);
        iVar45 = iVar46;
        iVar34 = iVar46;
        iVar50 = iVar46;
        iVar35 = iVar21;
        iVar56 = iVar21;
        iVar58 = iVar21;
        iVar61 = iVar21;
        if (0 < iVar18) {
          do {
            uVar41 = 0;
            iVar54 = iVar61;
            iVar45 = iVar58;
            iVar34 = iVar56;
            iVar46 = iVar35;
            iVar50 = iVar21;
            if (0 < *(int *)(lVar47 + 0xa4)) {
              uStack_178 = (longlong)(int)uStack_43c;
              do {
                uVar17 = supplier_0x140f94210(lVar47,uStack_43c & 0xffff,uVar41 & 0xffff);
                lVar51 = (longlong)(int)uVar41 * 0x70;
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + uStack_178 * 8) + 0x34 + lVar51) =
                     uVar17;
                lVar48 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + uStack_178 * 8);
                sVar15 = *(short *)(lVar51 + 0x32 + lVar48);
                if (sVar15 < 0x42) {
                  if (sVar15 < 0x21) {
                    iStack_454 = iStack_454 + 1;
                  }
                }
                else {
                  iVar61 = iVar61 + 1;
                }
                sVar15 = *(short *)(lVar51 + 0x3a + lVar48);
                if (sVar15 < 0x42) {
                  if (sVar15 < 0x21) {
                    iStack_438 = iStack_438 + 1;
                  }
                }
                else {
                  iVar35 = iVar35 + 1;
                }
                iVar45 = iStack_438;
                sVar15 = *(short *)((longlong)(int)uVar41 * 0x70 + 0x3e + lVar48);
                if (sVar15 < 0x42) {
                  if (sVar15 < 0x21) {
                    iStack_440 = iStack_440 + 1;
                  }
                }
                else {
                  iVar56 = iVar56 + 1;
                }
                sVar15 = *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + uStack_178 * 8) +
                                    0x3c + (longlong)(int)uVar41 * 0x70);
                if (sVar15 < 0x42) {
                  if (sVar15 < 0x21) {
                    uStack_458 = uStack_458 + 1;
                  }
                }
                else {
                  iVar21 = iVar21 + 1;
                }
                iVar18 = FUN_140f6ee60(lVar47,(undefined2)uStack_43c,uVar41 & 0xffff);
                piVar25 = (int *)((longlong)&uStack_208 + (longlong)iVar18 * 4);
                *piVar25 = *piVar25 + 1;
                uVar41 = uVar41 + 1;
                iVar54 = iVar61;
                iVar34 = iVar56;
                iVar46 = iVar35;
                iVar50 = iVar21;
              } while ((int)uVar41 < *(int *)(lVar47 + 0xa4));
            }
            uStack_43c = uStack_43c + 1;
            iVar18 = *(int *)(lVar47 + 0xa0);
            iVar21 = iVar50;
            iVar35 = iVar46;
            iVar56 = iVar34;
            iVar58 = iVar45;
            iVar61 = iVar54;
          } while ((int)uStack_43c < iVar18);
        }
        iVar21 = iStack_454;
        uVar41 = 0;
        lStack_448 = uStack_1e8;
        if ((((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 0x10) == 0)) &&
            (((iVar18 * *(int *)(lVar47 + 0xa4) - iVar54) - iStack_454 < _DAT_14251be10 ||
             ((iStack_454 < _DAT_14251be14 || (iVar54 < _DAT_14251be18)))))) &&
           (_DAT_14250e004 == 0)) {
          FUN_140069780(auStack_3b0,"Rainfall not evenly distributed: ");
          FUN_140545610(iVar21,auStack_3b0);
          supplier_0x140070b90(auStack_3b0,"-");
          FUN_140545610((*(int *)(lVar47 + 0xa4) * *(int *)(lVar47 + 0xa0) - iVar54) - iVar21,
                        auStack_3b0);
          supplier_0x140070b90(auStack_3b0,"-");
          FUN_140545610(iVar54,auStack_3b0);
          FUN_140762ed0(auStack_3b0,7);
          supplier_0x140069460(auStack_3b0);
        }
        else if ((((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 0x30) == 0)) &&
                 (((iVar18 * *(int *)(lVar47 + 0xa4) - iVar46) - iVar45 < _DAT_14251be1c ||
                  ((iVar45 < _DAT_14251be20 || (iVar46 < _DAT_14251be24)))))) &&
                (_DAT_14250e008 == 0)) {
          FUN_140069780(auStack_3b0,"Flat/rough areas not evenly distributed: ");
          FUN_140545610(iVar45,auStack_3b0);
          supplier_0x140070b90(auStack_3b0,"-");
          FUN_140545610((*(int *)(lVar47 + 0xa4) * *(int *)(lVar47 + 0xa0) - iVar46) - iVar45,
                        auStack_3b0);
          supplier_0x140070b90(auStack_3b0,"-");
          FUN_140545610(iVar46,auStack_3b0);
          FUN_140762ed0(auStack_3b0,8);
          supplier_0x140069460(auStack_3b0);
        }
        else if ((((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 0x40) == 0)) &&
                 (((iVar18 * *(int *)(lVar47 + 0xa4) - iVar34) - iStack_440 < _DAT_14251be28 ||
                  ((iStack_440 < _DAT_14251be2c || (iVar34 < _DAT_14251be30)))))) &&
                (_DAT_14250e00c == 0)) {
          FUN_140069780(auStack_3b0,"Savagery not evenly distributed");
          FUN_140762ed0(auStack_3b0,9);
          supplier_0x140069460(auStack_3b0);
        }
        else if (((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 0x38) == 0)) &&
                ((((int)((iVar18 * *(int *)(lVar47 + 0xa4) - iVar50) - uStack_458) < _DAT_14251be34
                  || (((int)uStack_458 < _DAT_14251be38 || (iVar50 < _DAT_14251be3c)))) &&
                 (_DAT_14250e010 == 0)))) {
          FUN_140069780(auStack_3b0,"Volcanism not evenly distributed");
          FUN_140762ed0(auStack_3b0,10);
          supplier_0x140069460(auStack_3b0);
        }
        else if ((((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) ||
                 (*(longlong *)(_DAT_14251c0e8 + 0x10) == 0)) ||
                ((*(longlong *)(_DAT_14251c0e8 + 0x20) == 0 ||
                 (*(longlong *)(_DAT_14251c0e8 + 0x30) == 0)))) {
          iVar18 = (int)uStack_208;
          if (((int)uStack_208 < _DAT_14251bd38) && (_DAT_14250e014 == 0)) {
            FUN_140069780(auStack_3b0,"Initial swamp square count fails by ");
            FUN_140545610(iVar18 - _DAT_14251bd38,auStack_3b0);
            FUN_140762ed0(auStack_3b0,0xb);
            supplier_0x140069460(auStack_3b0);
          }
          else {
            iVar18 = uStack_208._4_4_;
            if ((uStack_208._4_4_ < _DAT_14251bd3c) && (_DAT_14250e018 == 0)) {
              FUN_140069780(auStack_3b0,"Initial desert square count fails by ");
              FUN_140545610(iVar18 - _DAT_14251bd3c,auStack_3b0);
              FUN_140762ed0(auStack_3b0,0xc);
              supplier_0x140069460(auStack_3b0);
            }
            else {
              iVar18 = (int)uStack_200;
              if (((int)uStack_200 < _DAT_14251bd40) && (_DAT_14250e01c == 0)) {
                FUN_140069780(auStack_3b0,"Initial forest square count fails by ");
                FUN_140545610(iVar18 - _DAT_14251bd40,auStack_3b0);
                FUN_140762ed0(auStack_3b0,0xd);
                supplier_0x140069460(auStack_3b0);
              }
              else {
                iVar18 = uStack_200._4_4_;
                if ((uStack_200._4_4_ < _DAT_14251bd44) && (_DAT_14250e020 == 0)) {
                  FUN_140069780(auStack_3b0,"Initial mountain square count fails by ");
                  FUN_140545610(iVar18 - _DAT_14251bd44,auStack_3b0);
                  FUN_140762ed0(auStack_3b0,0xe);
                  supplier_0x140069460(auStack_3b0);
                }
                else {
                  iVar18 = (int)uStack_1f8;
                  if (((int)uStack_1f8 < _DAT_14251bd48) && (_DAT_14250e024 == 0)) {
                    FUN_140069780(auStack_3b0,"Initial ocean square count fails by ");
                    FUN_140545610(iVar18 - _DAT_14251bd48,auStack_3b0);
                    FUN_140762ed0(auStack_3b0,0xf);
                    supplier_0x140069460(auStack_3b0);
                  }
                  else {
                    iVar18 = (int)uStack_1f0;
                    if (((int)uStack_1f0 < _DAT_14251bd50) && (_DAT_14250e028 == 0)) {
                      FUN_140069780(auStack_3b0,"Initial glacier square count fails by ");
                      FUN_140545610(iVar18 - _DAT_14251bd50,auStack_3b0);
                      FUN_140762ed0(auStack_3b0,0x10);
                      supplier_0x140069460(auStack_3b0);
                    }
                    else {
                      iVar18 = uStack_1f0._4_4_;
                      if ((uStack_1f0._4_4_ < _DAT_14251bd54) && (_DAT_14250e02c == 0)) {
                        FUN_140069780(auStack_3b0,"Initial tundra square count fails by ");
                        FUN_140545610(iVar18 - _DAT_14251bd54,auStack_3b0);
                        FUN_140762ed0(auStack_3b0,0x11);
                        supplier_0x140069460(auStack_3b0);
                      }
                      else if (((int)uStack_1e8 < _DAT_14251bd58) && (_DAT_14250e030 == 0)) {
                        FUN_140069780(auStack_3b0,"Initial grassland square count fails by ");
                        FUN_140545610((int)lStack_448 - _DAT_14251bd58,auStack_3b0);
                        FUN_140762ed0(auStack_3b0,0x12);
                        supplier_0x140069460(auStack_3b0);
                      }
                      else {
                        iVar18 = uStack_1e8._4_4_;
                        if ((_DAT_14251bd5c <= uStack_1e8._4_4_) || (_DAT_14250e034 != 0))
                        goto LAB_140f6ad58;
                        FUN_140069780(auStack_3b0,"Initial hill square count fails by ");
                        FUN_140545610(iVar18 - _DAT_14251bd5c,auStack_3b0);
                        FUN_140762ed0(auStack_3b0,0x13);
                        supplier_0x140069460(auStack_3b0);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_140f6ad58:
          if (0 < *(int *)(lVar47 + 0xa4)) {
            do {
              uVar33 = 0;
              if (0 < *(int *)(lVar47 + 0xa0)) {
                lVar48 = (longlong)(int)uVar41 * 0x70;
                do {
                  lVar52 = (longlong)(int)uVar33;
                  lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                  sVar15 = *(short *)(lVar51 + 0x30 + lVar48);
                  if (sVar15 < 300) {
                    if (99 < sVar15) {
                      *(short *)(lVar51 + 0x30 + lVar48) = sVar15 + -100;
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                      *(short *)(lVar51 + 0x30 + lVar48) =
                           (short)(int)((float)(int)*(short *)(lVar51 + 0x30 + lVar48) * 0.25);
                      psVar38 = (short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8)
                                          + 0x30 + lVar48);
                      *psVar38 = *psVar38 + 100;
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                      if (0x95 < *(short *)(lVar51 + 0x30 + lVar48)) {
                        *(undefined2 *)(lVar51 + 0x30 + lVar48) = 0x95;
                      }
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                      if (*(short *)(lVar51 + 0x30 + lVar48) < 100) {
                        *(undefined2 *)(lVar51 + 0x30 + lVar48) = 100;
                      }
                    }
                  }
                  else {
                    *(short *)(lVar51 + 0x30 + lVar48) = sVar15 + -0x96;
                  }
                  cVar12 = supplier_0x1400735c0
                                     (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8) +
                                      0x20 + lVar48,0xd);
                  if ((cVar12 != '\0') &&
                     (lVar51 = supplier_0x140fa1160(lVar47,uVar33 & 0xffff,uVar41 & 0xffff),
                     lVar51 != 0)) {
                    *(undefined2 *)(lVar51 + 0x90) =
                         *(undefined2 *)
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)(int)uVar33 * 8)
                           + 0x30 + lVar48);
                  }
                  uVar33 = uVar33 + 1;
                } while ((int)uVar33 < *(int *)(lVar47 + 0xa0));
              }
              uVar41 = uVar41 + 1;
            } while ((int)uVar41 < *(int *)(lVar47 + 0xa4));
          }
          supplier_0x140067130(auStack_3f0);
          supplier_0x140067130(auStack_390);
          uVar44 = 0;
          uStack_468 = 0;
          uVar41 = uStack_468;
          if (0 < *(int *)(lVar47 + 0xa0)) {
            do {
              iVar18 = 0;
              if (0 < *(int *)(lVar47 + 0xa4)) {
                do {
                  if (99 < *(short *)(*(longlong *)
                                       (*(longlong *)(lVar47 + 0x2b0) + (longlong)(int)uVar44 * 8) +
                                      0x3c + (longlong)iVar18 * 0x70)) {
                    uStack_468._0_2_ = (short)uVar44;
                    supplier_0x140070b20(auStack_3f0,&uStack_468);
                    uStack_468 = CONCAT22(uStack_468._2_2_,(short)iVar18);
                    supplier_0x140070b20(auStack_390,&uStack_468);
                  }
                  iVar18 = iVar18 + 1;
                } while (iVar18 < *(int *)(lVar47 + 0xa4));
              }
              uVar41 = (int)uVar44 + 1;
              uVar44 = (ulonglong)uVar41;
            } while ((int)uVar41 < *(int *)(lVar47 + 0xa0));
          }
          uStack_468 = uVar41;
          uVar39 = supplier_0x140070a80(auStack_3f0);
          uVar57 = (ulonglong)_DAT_14251bd34;
          if ((uVar57 <= uVar39) || (_DAT_14250e038 != 0)) {
            uVar39 = supplier_0x140070a80(auStack_3f0);
            if (uVar39 < uVar57) {
              uVar57 = supplier_0x140070a80(auStack_3f0);
            }
            if (0 < (int)uVar57) {
              do {
                uVar27 = supplier_0x140070a80(auStack_3f0);
                iVar18 = FUN_140073560(uVar27);
                lVar48 = (longlong)iVar18;
                psVar38 = (short *)supplier_0x140070a70(auStack_3f0,lVar48);
                sVar15 = *psVar38;
                psVar38 = (short *)supplier_0x140070a70(auStack_390,lVar48);
                sVar16 = *psVar38;
                FUN_1400fcbb0(auStack_3f0,lVar48);
                FUN_1400fcbb0(auStack_390,lVar48);
                lVar48 = (longlong)sVar16 * 0x70;
                supplier_0x1400fcef0
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)sVar15 * 8) +
                           0x20 + lVar48,0xd);
                uStack_178 = FUN_1415530e0(0x98);
                uStack_450 = FUN_140f180b0(uStack_178);
                uStack_488 = 0x26;
                FUN_140aac2a0(&DAT_14250fbf0,uStack_450,0xffffffff,0x13);
                *(short *)(uStack_450 + 0x78) = sVar15;
                *(short *)(uStack_450 + 0x7a) = sVar16;
                *(undefined2 *)(uStack_450 + 0x90) =
                     *(undefined2 *)
                      (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)sVar15 * 8) + 0x30 +
                      lVar48);
                supplier_0x1400fcef0(uStack_450 + 0x80,0);
                supplier_0x1400bafb0(lVar47 + 0x280,&uStack_450);
                uVar41 = (int)uVar57 - 1;
                uVar57 = (ulonglong)uVar41;
              } while (0 < (int)uVar41);
              uVar44 = (ulonglong)uStack_468;
            }
            supplier_0x140067610(auStack_390);
            supplier_0x140067610(auStack_3f0);
            supplier_0x140067610(auStack_3d8);
            supplier_0x140067610(auStack_408);
            goto LAB_140f6b134;
          }
          FUN_140069780(auStack_3b0,"Not enough volcanos");
          FUN_140762ed0(auStack_3b0,0x14);
          supplier_0x140069460(auStack_3b0);
          supplier_0x140067610(auStack_390);
          supplier_0x140067610(auStack_3f0);
        }
      }
    }
LAB_140f6afab:
    FUN_140070de0(auStack_3d8);
    FUN_140070de0(auStack_408);
    goto LAB_140f6d6b2;
  }
LAB_140f6b134:
  if (_DAT_14250dfe0 != 4) {
    uVar39 = 0;
    if (_DAT_14250dfe0 == 5) {
      uVar57 = (ulonglong)_DAT_14250e19c;
      uVar44 = uVar39;
      if (0 < *(int *)(lVar47 + 0xa4)) {
        do {
          cVar12 = supplier_0x1400735c0
                             ((longlong)(int)uVar44 * 0x70 +
                              *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + uVar57 * 8) + 0x20,2);
          if (cVar12 != '\0') {
            FUN_140f706c0(lVar47,uVar57 & 0xffff,uVar44 & 0xffff);
          }
          uVar41 = (int)uVar44 + 1;
          uVar44 = (ulonglong)uVar41;
        } while ((int)uVar41 < *(int *)(lVar47 + 0xa4));
      }
      _DAT_14250e19c = _DAT_14250e19c + 1;
      if (_DAT_14250e19c != _DAT_14250e194) goto LAB_140f6d6b2;
      do {
        bVar8 = false;
        bVar62 = false;
        uStack_468 = 0;
        uVar44 = uVar39;
        if (*(int *)(lVar47 + 0xa0) < 1) break;
        do {
          if (0 < *(int *)(lVar47 + 0xa4)) {
            uVar57 = uVar39;
            do {
              cVar12 = supplier_0x1400735c0
                                 ((longlong)(int)uVar57 * 0x70 +
                                  *(longlong *)
                                   (*(longlong *)(lVar47 + 0x2b0) + (longlong)(int)uVar44 * 8) +
                                  0x20,0);
              if ((cVar12 != '\0') &&
                 (cVar12 = FUN_140f70060(lVar47,uVar44 & 0xffff,uVar57 & 0xffff), bVar62 = bVar8,
                 cVar12 != '\0')) {
                bVar8 = true;
                bVar62 = true;
              }
              uVar41 = (int)uVar57 + 1;
              uVar57 = (ulonglong)uVar41;
            } while ((int)uVar41 < *(int *)(lVar47 + 0xa4));
          }
          uVar41 = (int)uVar44 + 1;
          uVar44 = (ulonglong)uVar41;
        } while ((int)uVar41 < *(int *)(lVar47 + 0xa0));
        uStack_468 = uVar41;
      } while (bVar62);
      FUN_140f94260(lVar47);
    }
    if (_DAT_14250dfe0 == 6) {
      if (_DAT_14250e1a0 == 0) {
        FUN_140fada10(lVar47);
        uStack_45c = 0;
        lVar48 = supplier_0x140070480(lVar47 + 0x280);
        if (lVar48 != 0) {
          do {
            sVar59 = 100;
            plVar23 = (longlong *)supplier_0x140070850(lVar47 + 0x280,uVar39);
            sVar15 = *(short *)(*plVar23 + 0x78);
            uStack_464 = CONCAT22(uStack_464._2_2_,sVar15);
            plVar23 = (longlong *)supplier_0x140070850(lVar47 + 0x280,uVar39);
            sVar16 = *(short *)(*plVar23 + 0x7a);
            uStack_460 = CONCAT22(uStack_460._2_2_,sVar16);
            sVar55 = -1;
            do {
              sVar40 = -1;
              do {
                if ((((sVar55 != 0) || (sVar40 != 0)) &&
                    (iVar18 = (int)sVar55 + (int)sVar15, -1 < iVar18)) &&
                   (iVar18 < *(int *)(lVar47 + 0xa0))) {
                  iVar45 = (int)sVar40 + (int)sVar16;
                  if ((iVar45 < 0) || (*(int *)(lVar47 + 0xa4) <= iVar45)) {
                    sVar15 = (short)uStack_464;
                  }
                  else {
                    plVar23 = (longlong *)supplier_0x140070850(lVar47 + 0x280,uVar39);
                    cVar12 = supplier_0x1400735c0(*plVar23 + 0x80,0);
                    if (cVar12 != '\0') {
                      lVar51 = (longlong)iVar18;
                      lVar48 = (longlong)iVar45 * 0x70;
                      cVar12 = supplier_0x1400735c0
                                         (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8)
                                          + 0x20 + lVar48,0);
                      if (((cVar12 == '\0') ||
                          (cVar12 = supplier_0x1400735c0
                                              (*(longlong *)
                                                (*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x20
                                               + lVar48,0xf), cVar12 != '\0')) &&
                         (99 < *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8)
                                          + 0x30 + lVar48))) {
                        sVar15 = FUN_140073560(5);
                        psVar38 = (short *)(*(longlong *)
                                             (*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x30 +
                                           lVar48);
                        *psVar38 = *psVar38 + sVar15 + 10;
                        lVar52 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8);
                        if (*(short *)(lVar52 + 0x3c + lVar48) < 0x5a) {
                          *(undefined2 *)(lVar52 + 0x3c + lVar48) = 0x5a;
                        }
                        lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8);
                        if (0xf9 < *(short *)(lVar51 + 0x30 + lVar48)) {
                          *(undefined2 *)(lVar51 + 0x30 + lVar48) = 0xf9;
                        }
                      }
                    }
                    lVar51 = (ulonglong)(uint)((int)sVar40 + (int)(short)uStack_460) * 0x70;
                    lVar48 = *(longlong *)
                              (*(longlong *)(lVar47 + 0x2b0) +
                              (ulonglong)(uint)((int)sVar55 + (int)(short)uStack_464) * 8);
                    sVar16 = (short)uStack_460;
                    sVar15 = (short)uStack_464;
                    if (sVar59 < *(short *)(lVar48 + 0x30 + lVar51)) {
                      sVar59 = *(short *)(lVar48 + 0x30 + lVar51);
                    }
                  }
                }
                sVar40 = sVar40 + 1;
              } while (sVar40 < 2);
              sVar55 = sVar55 + 1;
            } while (sVar55 < 2);
            plVar23 = (longlong *)supplier_0x140070850(lVar47 + 0x280,uVar39);
            sVar16 = *(short *)(*plVar23 + 0x90);
            sVar55 = FUN_140073560(5);
            lVar51 = (longlong)sVar15;
            lVar52 = (longlong)(short)uStack_460 * 0x70;
            *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x30 + lVar52) =
                 sVar55 + 10 + sVar59;
            lVar48 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8);
            if (*(short *)(lVar48 + 0x30 + lVar52) < sVar16) {
              *(short *)(lVar48 + 0x30 + lVar52) = sVar16;
            }
            lVar48 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8);
            if (0xfa < *(short *)(lVar48 + 0x30 + lVar52)) {
              *(undefined2 *)(lVar48 + 0x30 + lVar52) = 0xfa;
            }
            sVar16 = FUN_140073560(0x15);
            sVar15 = *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x30 +
                               lVar52);
            lVar48 = lVar47 + 0x280;
            plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar39);
            *(short *)(*plVar23 + 0x90) = sVar16 + 10 + sVar15;
            plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar39);
            if (0x118 < *(short *)(*plVar23 + 0x90)) {
              plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar39);
              *(undefined2 *)(*plVar23 + 0x90) = 0x118;
            }
            uStack_45c = uStack_45c + 1;
            uVar39 = (ulonglong)(int)uStack_45c;
            uVar44 = supplier_0x140070480(lVar48);
          } while (uVar39 < uVar44);
          uVar44 = (ulonglong)uStack_468;
        }
        iStack_430 = 0;
        iVar18 = *(int *)(lVar47 + 0xa4);
        if (0 < iVar18) {
          do {
            uVar44 = 0;
            iVar18 = iStack_430;
            if (0 < *(int *)(lVar47 + 0xa0)) {
              lVar48 = (longlong)iStack_430 * 0x70;
              lStack_448 = lVar48;
              do {
                sVar15 = 0;
                iVar45 = (int)uVar44;
                cVar12 = supplier_0x1400735c0
                                   (*(longlong *)
                                     (*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) + 0x20 +
                                    lVar48,0);
                if ((cVar12 != '\0') &&
                   (cVar12 = supplier_0x1400735c0
                                       (*(longlong *)
                                         (*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) +
                                        0x20 + lVar48,0xf), cVar12 == '\0')) {
                  sVar16 = 0;
                  uStack_464 = uStack_464 & 0xffff0000;
                  sVar59 = -1;
                  do {
                    sVar55 = -1;
                    do {
                      if ((sVar59 != 0) || (sVar55 != 0)) {
                        iVar34 = sVar59 + iVar45;
                        if ((iVar34 < 0) ||
                           (((*(int *)(lVar47 + 0xa0) <= iVar34 ||
                             (iVar50 = sVar55 + iVar18, iVar50 < 0)) ||
                            (*(int *)(lVar47 + 0xa4) <= iVar50)))) {
                          sVar16 = (short)uStack_464;
                        }
                        else {
                          lVar51 = (longlong)iVar34;
                          lVar48 = (longlong)iVar50 * 0x70;
                          cVar12 = supplier_0x1400735c0
                                             (*(longlong *)
                                               (*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x20 +
                                              lVar48,0);
                          if ((cVar12 == '\0') ||
                             (cVar12 = supplier_0x1400735c0
                                                 (*(longlong *)
                                                   (*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) +
                                                  0x20 + lVar48,0xf), cVar12 != '\0')) {
                            sVar16 = (short)uStack_464 +
                                     *(short *)(*(longlong *)
                                                 (*(longlong *)(lVar47 + 0x2b0) + lVar51 * 8) + 0x30
                                               + lVar48);
                            uStack_464 = CONCAT22(uStack_464._2_2_,sVar16);
                            sVar15 = sVar15 + 1;
                            iVar18 = iStack_430;
                          }
                          else {
                            sVar16 = (short)uStack_464;
                            iVar18 = iStack_430;
                          }
                        }
                      }
                      sVar55 = sVar55 + 1;
                    } while (sVar55 < 2);
                    sVar59 = sVar59 + 1;
                  } while (sVar59 < 2);
                  lVar48 = lStack_448;
                  if (0 < sVar15) {
                    sVar16 = sVar16 / sVar15;
                    if (sVar16 < 0x96) {
                      if (sVar16 < 100) {
                        sVar16 = 100;
                      }
                    }
                    else {
                      sVar16 = 0x95;
                    }
                    *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) +
                               0x30 + lStack_448) = sVar16;
                  }
                }
                uVar44 = (ulonglong)(iVar45 + 1U);
              } while ((int)(iVar45 + 1U) < *(int *)(lVar47 + 0xa0));
            }
            iStack_430 = iVar18 + 1;
            iVar18 = *(int *)(lVar47 + 0xa4);
          } while (iStack_430 < iVar18);
        }
        uVar39 = 0;
        if ((_DAT_14251c100 != 0) && (uStack_45c = 0, uVar57 = uVar39, 0 < iVar18)) {
          do {
            uVar33 = (uint)uVar57;
            sVar15 = FUN_140671ad0(lVar47,uVar57 & 0xffff);
            uVar41 = uVar33;
            if (sVar15 != 0) {
              iVar45 = (int)sVar15;
              iVar18 = -iVar45;
              if (-iVar45 < 0) {
                iVar18 = iVar45;
              }
              sVar16 = (short)(iVar45 / iVar18);
              sVar15 = *(short *)(lVar47 + 0xa0);
              uVar57 = uVar39;
              if ((sVar16 != 1) && (uVar57 = uVar44, sVar16 == -1)) {
                uVar57 = (ulonglong)(*(int *)(lVar47 + 0xa0) - 1);
              }
              uVar44 = uVar57;
              lVar48 = (longlong)(int)uVar33 * 0x70;
              sVar59 = *(short *)(*(longlong *)
                                   (*(longlong *)(lVar47 + 0x2b0) + (longlong)(int)uVar44 * 8) +
                                  0x30 + lVar48);
              if (sVar15 != 0) {
                sVar55 = 0;
                do {
                  if ((int)sVar15 < *(int *)(lVar47 + 0xa0)) {
                    lVar52 = (longlong)(int)uVar44;
                    lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                    sVar40 = *(short *)(lVar51 + ((longlong)(int)uVar33 * 0x1c + 0xc) * 4);
                    if ((sVar59 < sVar40) &&
                       ((0x95 < sVar40 || (0x31 < *(short *)(lVar51 + lVar48 + 0x3a))))) {
                      psVar38 = (short *)(lVar51 + lVar48 + 0x32);
                      *psVar38 = *psVar38 + sVar55 * 10;
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                      if (100 < *(short *)(lVar51 + 0x32 + lVar48)) {
                        *(undefined2 *)(lVar51 + 0x32 + lVar48) = 100;
                      }
                      sVar55 = sVar55 + 1;
                      sVar59 = sVar40;
                      if ((short)iVar18 < sVar55) {
                        sVar55 = (short)iVar18;
                      }
                    }
                    else if (sVar55 < 1) {
                      sVar59 = 0;
                    }
                    else {
                      psVar38 = (short *)(lVar51 + lVar48 + 0x32);
                      *psVar38 = *psVar38 + sVar55 * -10;
                      lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                      if (*(short *)(lVar51 + 0x32 + lVar48) < 0) {
                        *(undefined2 *)(lVar51 + 0x32 + lVar48) = 0;
                      }
                      sVar55 = sVar55 + -1;
                    }
                  }
                  uVar44 = (ulonglong)(uint)((int)uVar44 + (int)sVar16);
                  sVar15 = sVar15 + -1;
                  uVar41 = uStack_45c;
                } while (sVar15 != 0);
              }
            }
            uStack_45c = uVar41 + 1;
            uVar57 = (ulonglong)uStack_45c;
          } while ((int)uStack_45c < *(int *)(lVar47 + 0xa4));
        }
        FUN_140fada10(lVar47);
        uVar44 = uVar39;
        if (0 < *(int *)(lVar47 + 0xa4)) {
          do {
            if (0 < *(int *)(lVar47 + 0xa0)) {
              lVar48 = (longlong)(int)uVar44 * 0x70;
              uVar57 = uVar39;
              do {
                iVar45 = (int)uVar57;
                lVar52 = (longlong)iVar45;
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                iVar18 = (int)*(short *)(lVar51 + 0x30 + lVar48);
                if (99 < iVar18) {
                  iVar18 = iVar18 + -100;
                  iVar18 = iVar18 * iVar18;
                  psVar38 = (short *)(lVar51 + 0x36 + lVar48);
                  *psVar38 = *psVar38 -
                             (((short)(iVar18 / 1000) + (short)(iVar18 >> 0x1f)) -
                             (short)((longlong)iVar18 * 0x10624dd3 >> 0x3f));
                }
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                iVar18 = (int)*(short *)(lVar51 + lVar48 + 0x36);
                if ((_DAT_14251beac < iVar18) && (0 < _DAT_14251beac)) {
                  lVar5 = (longlong)((iVar18 - _DAT_14251beac) * 0x19) / (longlong)_DAT_14251beac;
                  sVar15 = (short)lVar5;
                  if (0x19 < (int)lVar5) {
                    sVar15 = 0x19;
                  }
                  *(short *)(lVar51 + lVar48 + 0x36) = sVar15 + (short)_DAT_14251beac;
                }
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar52 * 8);
                sVar15 = *(short *)(lVar51 + 0x32 + lVar48);
                if (((0x41 < sVar15) && (sVar16 = *(short *)(lVar51 + 0x36 + lVar48), sVar16 < 0x96)
                    ) && (0xa6 - sVar15 <= (int)sVar16)) {
                  *(short *)(lVar51 + 0x36 + lVar48) = 0xa6 - sVar15;
                }
                uVar17 = supplier_0x140f94210(lVar47,uVar57 & 0xffff,uVar44 & 0xffff);
                *(undefined2 *)
                 (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) + 0x34 +
                 lVar48) = uVar17;
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8);
                if (*(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) +
                               0x30 + lVar48) < 100) {
                  *(undefined2 *)(lVar51 + 0x4c + lVar48) = 100;
                }
                else {
                  *(undefined2 *)(lVar51 + 0x4c + lVar48) = 0;
                }
                uVar57 = (ulonglong)(iVar45 + 1U);
              } while ((int)(iVar45 + 1U) < *(int *)(lVar47 + 0xa0));
            }
            uVar41 = (int)uVar44 + 1;
            uVar44 = (ulonglong)uVar41;
          } while ((int)uVar41 < *(int *)(lVar47 + 0xa4));
          uVar44 = uVar39;
          if (0 < *(int *)(lVar47 + 0xa4)) {
            do {
              iVar18 = (int)uVar44;
              if (0 < *(int *)(lVar47 + 0xa0)) {
                uStack_178 = (longlong)iVar18 * 0x70;
                uVar44 = uVar39;
                do {
                  iVar45 = (int)uVar44;
                  if (*(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8)
                                 + 0x4c + uStack_178) == 100) {
                    sVar59 = -1;
                    sVar15 = sVar59;
                    sVar16 = sVar59;
                    do {
                      if ((((sVar16 != 0) || (sVar15 != 0)) &&
                          ((iVar34 = sVar16 + iVar45, -1 < iVar34 &&
                           ((iVar34 < *(int *)(lVar47 + 0xa0) &&
                            (iVar50 = sVar15 + iVar18, -1 < iVar50)))))) &&
                         (iVar50 < *(int *)(lVar47 + 0xa4))) {
                        lVar48 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar34 * 8)
                        ;
                        if (*(short *)(lVar48 + 0x4c + (longlong)iVar50 * 0x70) == 0) {
                          *(undefined2 *)(lVar48 + 0x4c + (longlong)iVar50 * 0x70) = 0x42;
                        }
                      }
                      sVar15 = sVar15 + 1;
                    } while ((sVar15 < 2) || (sVar16 = sVar16 + 1, sVar15 = sVar59, sVar16 < 2));
                  }
                  uVar44 = (ulonglong)(iVar45 + 1U);
                } while ((int)(iVar45 + 1U) < *(int *)(lVar47 + 0xa0));
              }
              uVar44 = (ulonglong)(iVar18 + 1U);
            } while ((int)(iVar18 + 1U) < *(int *)(lVar47 + 0xa4));
            uVar44 = uVar39;
            if (0 < *(int *)(lVar47 + 0xa4)) {
              do {
                iVar18 = (int)uVar44;
                if (0 < *(int *)(lVar47 + 0xa0)) {
                  uStack_178 = (longlong)iVar18 * 0x70;
                  uVar44 = uVar39;
                  do {
                    iVar45 = (int)uVar44;
                    if (*(short *)(*(longlong *)
                                    (*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8) + 0x4c +
                                  uStack_178) == 0x42) {
                      sVar59 = -1;
                      sVar15 = sVar59;
                      sVar16 = sVar59;
                      do {
                        if (((((sVar16 != 0) || (sVar15 != 0)) &&
                             (iVar34 = sVar16 + iVar45, -1 < iVar34)) &&
                            ((iVar34 < *(int *)(lVar47 + 0xa0) &&
                             (iVar50 = sVar15 + iVar18, -1 < iVar50)))) &&
                           (iVar50 < *(int *)(lVar47 + 0xa4))) {
                          lVar48 = *(longlong *)
                                    (*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar34 * 8);
                          if (*(short *)(lVar48 + 0x4c + (longlong)iVar50 * 0x70) == 0) {
                            *(undefined2 *)(lVar48 + 0x4c + (longlong)iVar50 * 0x70) = 0x21;
                          }
                        }
                        sVar15 = sVar15 + 1;
                      } while ((sVar15 < 2) || (sVar16 = sVar16 + 1, sVar15 = sVar59, sVar16 < 2));
                    }
                    uVar44 = (ulonglong)(iVar45 + 1U);
                  } while ((int)(iVar45 + 1U) < *(int *)(lVar47 + 0xa0));
                }
                uVar44 = (ulonglong)(iVar18 + 1U);
              } while ((int)(iVar18 + 1U) < *(int *)(lVar47 + 0xa4));
            }
          }
        }
        FUN_140f6f070(lVar47);
        if (((((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) ||
             (*(longlong *)(_DAT_14251c0e8 + 0x10) == 0)) ||
            ((*(longlong *)(_DAT_14251c0e8 + 0x20) == 0 ||
             (*(longlong *)(_DAT_14251c0e8 + 0x30) == 0)))) &&
           ((uVar44 = supplier_0x140070480(lVar47 + 0x238),
            (ulonglong)(longlong)_DAT_14251bdb8 <= uVar44 && (_DAT_14250e064 == 0)))) {
          FUN_140069780(auStack_390,"Too many distinct subregions (over by ");
          iVar18 = supplier_0x140070480(lVar47 + 0x238);
          FUN_140545610(iVar18 - _DAT_14251bdb8,auStack_390);
          supplier_0x140070b90(auStack_390,")");
          FUN_140762ed0(auStack_390,0x1f);
          supplier_0x140069460(auStack_390);
          goto LAB_140f6d6b2;
        }
        FUN_140fc6b10(lVar47);
        FUN_140fc6970(lVar47 + 0xc0,*(undefined4 *)(lVar47 + 0xa0),*(undefined4 *)(lVar47 + 0xa4));
        supplier_0x140070870(lVar47 + 0x238,&uStack_450);
        supplier_0x140070860(lVar47 + 0x238,&uStack_418);
        puVar30 = (undefined1 *)supplier_0x140070450(&uStack_450,&uStack_464,&uStack_418);
        cVar12 = supplier_0x140066de0(*puVar30,0);
        while (cVar12 != '\0') {
          plVar23 = (longlong *)supplier_0x140070440(&uStack_450);
          lVar48 = *plVar23;
          *(undefined8 *)(lVar48 + 0xb4) = 0;
          supplier_0x140070870(lVar48 + 0x80,&piStack_420);
          supplier_0x140070860(lVar48 + 0x80,&lStack_410);
          supplier_0x140070870(lVar48 + 0x98,&lStack_448);
          supplier_0x140070860(lVar48 + 0x98,&uStack_178);
          puVar30 = (undefined1 *)supplier_0x140070450(&piStack_420,&uStack_460,&lStack_410);
          cVar12 = supplier_0x140066de0(*puVar30,0);
          while (cVar12 != '\0') {
            puVar29 = (undefined2 *)supplier_0x140070440(&lStack_448);
            uVar17 = *puVar29;
            puVar29 = (undefined2 *)supplier_0x140070440(&piStack_420);
            cVar12 = FUN_140f6ff80(lVar47,*puVar29,uVar17);
            if (cVar12 != '\0') {
              psVar38 = (short *)supplier_0x140070440(&lStack_448);
              sVar15 = *psVar38;
              psVar38 = (short *)supplier_0x140070440(&piStack_420);
              cVar12 = FUN_140fcc000(lVar47,(int)*psVar38,(int)sVar15);
              if (cVar12 != '\0') {
                *(int *)(lVar48 + 0xb8) = *(int *)(lVar48 + 0xb8) + 1;
                lVar51 = *(longlong *)(lVar47 + 0x2b0);
                psVar38 = (short *)supplier_0x140070440(&piStack_420);
                lVar51 = *(longlong *)(lVar51 + (longlong)*psVar38 * 8);
                psVar38 = (short *)supplier_0x140070440(&lStack_448);
                if (0x41 < *(short *)(lVar51 + 0x3e + (longlong)*psVar38 * 0x70)) {
                  *(int *)(lVar48 + 0xb4) = *(int *)(lVar48 + 0xb4) + 1;
                }
              }
            }
            supplier_0x140070a60(&piStack_420);
            supplier_0x140070a60(&lStack_448);
            puVar30 = (undefined1 *)supplier_0x140070450(&piStack_420,&uStack_460,&lStack_410);
            cVar12 = supplier_0x140066de0(*puVar30,0);
          }
          supplier_0x140070430(&uStack_450);
          puVar30 = (undefined1 *)supplier_0x140070450(&uStack_450,&uStack_464,&uStack_418);
          cVar12 = supplier_0x140066de0(*puVar30,0);
        }
        sVar16 = 0;
        uStack_468 = uStack_468 & 0xffff0000;
        uVar41 = uStack_468;
        lVar48 = lVar47 + 0x298;
        uStack_468._0_2_ = 0;
        sVar15 = (short)uStack_468;
        uStack_468 = uVar41;
        do {
          uVar44 = 0;
          FUN_140fa6bb0(lVar47,sVar16 == 1);
          uStack_460 = uStack_460 & 0xffff0000;
          lVar51 = supplier_0x140070480(lVar48);
          if (lVar51 != 0) {
            do {
              sVar59 = 0;
              if (sVar16 == 0) {
                plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                lVar51 = *plVar23;
                plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                uVar27 = supplier_0x140070a80(*plVar23 + 0x78);
                FUN_140070a90(lVar51 + 0xd8,uVar27);
              }
              plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
              lVar51 = supplier_0x140070a80(*plVar23 + 0xd8);
              if (lVar51 != 0) {
                uVar39 = 0;
                do {
                  plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                  puVar29 = (undefined2 *)supplier_0x140070a70(*plVar23 + 0x78,uVar39);
                  uVar17 = *puVar29;
                  plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                  puVar29 = (undefined2 *)supplier_0x140070a70(*plVar23 + 0x90,uVar39);
                  sVar15 = FUN_140f97fa0(lVar47,uVar17,*puVar29,0);
                  if (sVar15 < 99) {
                    sVar15 = 99;
                  }
                  if (0 < sVar59) {
                    plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                    psVar38 = (short *)supplier_0x140070a70(*plVar23 + 0xd8,(longlong)sVar59 + -1);
                    if (*psVar38 < sVar15) {
                      plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                      psVar38 = (short *)supplier_0x140070a70(*plVar23 + 0xd8,(longlong)sVar59 + -1)
                      ;
                      sVar15 = *psVar38;
                    }
                  }
                  plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                  psVar38 = (short *)supplier_0x140070a70(*plVar23 + 0xd8,uVar39);
                  *psVar38 = sVar15;
                  sVar59 = sVar59 + 1;
                  plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                  uVar39 = (ulonglong)sVar59;
                  uVar57 = supplier_0x140070a80(*plVar23 + 0xd8);
                } while (uVar39 < uVar57);
              }
              plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
              uVar17 = *(undefined2 *)(*plVar23 + 0xf2);
              plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
              lVar51 = FUN_140fa11e0(lVar47,*(undefined2 *)(*plVar23 + 0xf0),uVar17);
              if (lVar51 != 0) {
                lVar52 = supplier_0x140070a80(lVar51 + 0xd8);
                if (lVar52 == 0) {
                  if (DAT_14250e5f4 == '\0') {
                    uStack_488 = 1;
                    FUN_140288040(&uStack_368,"errorlog.txt",10);
                    cVar12 = supplier_0x140548570(&uStack_368);
                    if (cVar12 != '\0') {
                      uVar27 = FUN_1400716d0(&uStack_368,"A world gen error from DF ");
                      uVar27 = supplier_0x1400716b0(uVar27,0x14251bc28);
                      uVar27 = FUN_1400716d0(uVar27," will be logged after parameter dump.");
                      __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
                                (uVar27,FUN_1400718b0);
                      __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
                                (&uStack_368,FUN_1400718b0);
                      FUN_140f9d2a0(0x14251bc58,&uStack_368);
                    }
                    FUN_1402473a0(&uStack_368);
                    DAT_14250e5f4 = '\x01';
                    FUN_1402443d0(&uStack_368);
                  }
                  FUN_140069780(auStack_390,"Error sorting rivers: working with ");
                  FUN_140545610((int)(short)uStack_460,auStack_390);
                  supplier_0x140070b90(auStack_390," ran into ");
                  uVar39 = 0;
                  lVar52 = supplier_0x140070480(lVar48);
                  uVar44 = uVar39;
                  if (lVar52 != 0) {
                    do {
                      plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
                      if (*plVar23 == lVar51) {
                        FUN_140545610(uVar39,auStack_390);
                        break;
                      }
                      uVar41 = (int)uVar39 + 1;
                      uVar39 = (ulonglong)uVar41;
                      uVar57 = supplier_0x140070480(lVar48);
                      uVar44 = (longlong)(int)uVar41;
                    } while ((ulonglong)(longlong)(int)uVar41 < uVar57);
                  }
                  FUN_140544f90(auStack_390);
                  supplier_0x140069460(auStack_390);
                }
                else {
                  psVar38 = (short *)supplier_0x140070a70(lVar51 + 0xd8,(longlong)(short)uStack_464)
                  ;
                  sVar16 = *psVar38;
                  while (sVar15 < sVar16) {
                    psVar38 = (short *)supplier_0x140070a70
                                                 (lVar51 + 0xd8,(longlong)(short)uStack_464);
                    *psVar38 = sVar15;
                    sVar16 = (short)uStack_464 + 1;
                    uStack_464 = CONCAT22(uStack_464._2_2_,sVar16);
                    uVar44 = supplier_0x140070a80(lVar51 + 0xd8);
                    if (uVar44 <= (ulonglong)(longlong)sVar16) break;
                    psVar38 = (short *)supplier_0x140070a70(lVar51 + 0xd8,(longlong)sVar16);
                    sVar16 = *psVar38;
                  }
                }
              }
              sVar16 = (short)uStack_460 + 1;
              uStack_460 = CONCAT22(uStack_460._2_2_,sVar16);
              uVar44 = (ulonglong)sVar16;
              uVar39 = supplier_0x140070480(lVar48);
              sVar16 = (short)uStack_468;
            } while (uVar44 < uVar39);
          }
          sVar16 = sVar16 + 1;
          uStack_468 = CONCAT22(uStack_468._2_2_,sVar16);
        } while (sVar16 < 2);
        FUN_140fa6ac0(lVar47);
        FUN_140fa6870(lVar47);
        if (_DAT_14250e1a0 != 0) goto LAB_140f6d191;
      }
      else {
LAB_140f6d191:
        if (_DAT_14250e1a4 <= _DAT_14250e1a0) {
          FUN_140fa6f90(lVar47);
          goto LAB_140f6d1a9;
        }
      }
      FUN_140fd05e0(&uStack_178);
      do {
        FUN_140fa8730(lVar47);
        lVar48 = FUN_140fd0660(&uStack_178);
        if (0x31 < lVar48) break;
      } while ((_DAT_14250e1a0 == 0) || (_DAT_14250e1a0 < _DAT_14250e1a4));
      goto LAB_140f6d6b2;
    }
LAB_140f6d1a9:
    plVar23 = (longlong *)0x0;
    iVar18 = 0;
    if (_DAT_14250dfe0 == 7) {
      iVar45 = 0;
      if (0 < (int)*(uint *)(lVar47 + 0xa0)) {
        uVar44 = (ulonglong)*(uint *)(lVar47 + 0xa0);
        plVar28 = plVar23;
        plVar32 = plVar23;
        do {
          if (0 < (int)*(uint *)(lVar47 + 0xa4)) {
            psVar38 = (short *)(*(longlong *)((longlong)plVar32 + *(longlong *)(lVar47 + 0x2b0)) +
                               0x30);
            uVar39 = (ulonglong)*(uint *)(lVar47 + 0xa4);
            do {
              if (*psVar38 < 0x96) {
                if (*psVar38 < 100) {
                  plVar28 = (longlong *)(ulonglong)((int)plVar28 + 1);
                }
              }
              else {
                plVar23 = (longlong *)(ulonglong)((int)plVar23 + 1);
              }
              psVar38 = psVar38 + 0x38;
              uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
          }
          iVar18 = (int)plVar23;
          iVar45 = (int)plVar28;
          plVar32 = plVar32 + 1;
          uVar44 = uVar44 - 1;
        } while (uVar44 != 0);
      }
      if ((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) {
        if (((*(int *)(lVar47 + 0xa4) * *(int *)(lVar47 + 0xa0) - iVar45) - iVar18 < _DAT_14251bfd4)
           && (_DAT_14250e068 == 0)) {
          FUN_140069780(auStack_390,"Not enough medium altitude locations after erosion");
          FUN_140762ed0(auStack_390,0x20);
          supplier_0x140069460(auStack_390);
          goto LAB_140f6d6b2;
        }
        if ((((0 < _DAT_14251bd2c) || (0 < _DAT_14251bd30)) && (iVar45 < _DAT_14251bfd8)) &&
           (_DAT_14250e06c == 0)) {
          FUN_140069780(auStack_390,"Not enough low altitude locations after erosion: ");
          FUN_140545610(iVar45 - _DAT_14251bfd8,auStack_390);
          FUN_140762ed0(auStack_390,0x21);
          supplier_0x140069460(auStack_390);
          goto LAB_140f6d6b2;
        }
        if ((iVar18 < _DAT_14251bfdc) && (_DAT_14250e070 == 0)) {
          FUN_140069780(auStack_390,"Not enough high altitude locations after erosion");
          FUN_140762ed0(auStack_390,0x22);
          supplier_0x140069460(auStack_390);
          goto LAB_140f6d6b2;
        }
      }
    }
    else {
      if (_DAT_14250dfe0 == 8) {
        FUN_140f79300(lVar47);
        FUN_140f91c20(lVar47);
      }
      if (_DAT_14250dfe0 == 9) {
        uStack_460 = uStack_460 & 0xffffff00;
        if (DAT_142660e78 == '\0') {
          uVar33 = GetTickCount();
          uVar41 = uVar33;
          do {
            cVar12 = FUN_140f885d0(lVar47,&uStack_460);
            if (cVar12 != '\0') {
              if ((char)uStack_460 != '\0') goto LAB_140f6d6b2;
              FUN_140f6dc20(lVar47);
              break;
            }
            uVar41 = GetTickCount();
          } while ((uVar41 - uVar33 < 100) || (uVar41 < uVar33));
          if ((1000 < uVar41 - _DAT_14250ed08) || (uVar41 < _DAT_14250ed08)) {
            _DAT_14250ed08 = uVar41;
            iVar18 = supplier_0x140070480(0x14251c138);
            iVar45 = iVar18 + -1;
            plVar28 = plVar23;
            if (iVar18 + -1000 <= iVar45) {
              do {
                if (iVar45 < 0) break;
                plVar32 = (longlong *)supplier_0x140070850(0x14251c138,(longlong)iVar45);
                plVar32 = (longlong *)*plVar32;
                if ((int)plVar32[4] <= _DAT_14250ed0c) break;
                uVar41 = (**(code **)(*plVar32 + 0xf0))(plVar32);
                if ((int)plVar23 < (int)uVar41) {
                  plVar23 = (longlong *)(ulonglong)uVar41;
                  plVar28 = plVar32;
                }
                iVar45 = iVar45 + -1;
              } while (iVar18 + -1000 <= iVar45);
              if (plVar28 != (longlong *)0x0) {
                _DAT_14250ed0c = (int)plVar28[4];
                supplier_0x140070cc0(auStack_390);
                supplier_0x1400736b0(&uStack_368);
                uStack_368 = uStack_368 | 2;
                uStack_488 = uStack_488 & 0xffffff00;
                (**(code **)(*plVar28 + 0xd0))(plVar28,auStack_390,&uStack_368,1);
                supplier_0x140070b90(auStack_390,"[R]");
                FUN_140d69ba0(0x14250ecc8,auStack_390);
                _DAT_14250ecf8 = 0;
                FUN_140d69970(0x14250ecc8,0x4e);
                supplier_0x140069460(auStack_390);
              }
            }
          }
        }
        else {
          uVar39 = (ulonglong)_DAT_14250e5f8;
          uVar44 = supplier_0x140070480(0x14250e610);
          if (uVar39 < uVar44) {
            puVar31 = (undefined8 *)supplier_0x140070850(0x14250e610,uVar39);
            uVar27 = *puVar31;
            FUN_1409262c0(uVar27);
            FUN_1409260d0(uVar27);
            _DAT_14250e5f8 = _DAT_14250e5f8 + 1;
          }
          else {
            uVar39 = (ulonglong)_DAT_14250e5fc;
            uVar44 = supplier_0x140070480(0x1423f3c78);
            if (uVar39 < uVar44) {
              puVar31 = (undefined8 *)supplier_0x140070850(0x1423f3c78,uVar39);
              FUN_14096e3a0(*puVar31);
              _DAT_14250e5fc = _DAT_14250e5fc + 1;
            }
            else {
              uVar39 = (ulonglong)_DAT_14250e600;
              uVar44 = supplier_0x140070480(0x1423f3c78);
              if (uVar39 < uVar44) {
                puVar31 = (undefined8 *)supplier_0x140070850(0x1423f3c78,uVar39);
                FUN_14096d620(*puVar31);
                _DAT_14250e600 = _DAT_14250e600 + 1;
              }
              else {
                uVar44 = supplier_0x140070480(lVar47 + 0x178);
                if ((ulonglong)(longlong)_DAT_14250e604 < uVar44) {
                  FUN_140f8e770(lVar47);
                  _DAT_14250e604 = _DAT_14250e604 + 1;
                }
                else {
                  FUN_14145c4d0(0x1423f3970);
                  FUN_14145a1a0(0x1423f3970);
                  FUN_14145a760(0x1423f3970);
                  FUN_14145c0a0(0x1423f3970);
                  FUN_14145c320(0x1423f3970);
                  FUN_141528190(0x1423f3970);
                  FUN_141526ee0(0x1423f3970);
                  FUN_141526bd0(0x1423f3970);
                  supplier_0x140eceb30();
                  _DAT_14250dfe0 = _DAT_14250dfe0 + 1;
                }
              }
            }
          }
        }
        goto LAB_140f6d6b2;
      }
    }
    _DAT_14250dfe0 = _DAT_14250dfe0 + 1;
    if (_DAT_14250dfe0 == 9) {
      _DAT_14250e728 = 0;
      supplier_0x1400708c0(0x14250e730);
      supplier_0x1400708c0(0x14250ed10);
      supplier_0x1400708c0(0x14250e748);
      supplier_0x1400708c0(0x14250e760);
      _DAT_14250e778 = 0;
    }
    goto LAB_140f6d6b2;
  }
  if (_DAT_14250e678 == 0) {
    _DAT_14250e678 = _DAT_14251c0f8 + 1;
    uVar57 = 0;
    _DAT_14250e67c = 0;
    FUN_140f6f070(lVar47);
    uStack_178 = 0;
    uStack_170 = 0;
    lVar48 = lVar47 + 0x238;
    lVar51 = supplier_0x140070480(lVar48);
    uVar44 = uVar57;
    uVar39 = uVar57;
    if (lVar51 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
        switch(*(undefined2 *)(*plVar23 + 0x7c)) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
          plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
          bVar62 = SBORROW4(*(int *)(*plVar23 + 0xb0),0x23);
          iVar18 = *(int *)(*plVar23 + 0xb0) + -0x23;
          break;
        case 3:
          plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
          bVar62 = SBORROW4(*(int *)(*plVar23 + 0xb8),0x14);
          iVar18 = *(int *)(*plVar23 + 0xb8) + -0x14;
          break;
        default:
          goto LAB_140f6b21d;
        }
        if (bVar62 == iVar18 < 0) {
          plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
          pcVar1 = (char *)((longlong)&uStack_178 + (longlong)*(short *)(*plVar23 + 0x7c));
          *pcVar1 = *pcVar1 + '\x01';
        }
LAB_140f6b21d:
        uVar41 = (int)uVar39 + 1;
        uVar24 = supplier_0x140070480(lVar48);
        uVar44 = (longlong)(int)uVar41;
        uVar39 = (ulonglong)uVar41;
        lVar47 = lStack_410;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    if (((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) ||
       ((*(longlong *)(_DAT_14251c0e8 + 0x10) == 0 ||
        ((*(longlong *)(_DAT_14251c0e8 + 0x20) == 0 || (*(longlong *)(_DAT_14251c0e8 + 0x30) == 0)))
        ))) {
      iVar18 = (int)(char)uStack_178;
      if ((iVar18 < _DAT_14251bd60) && (_DAT_14250e03c == 0)) {
        FUN_140069780(auStack_390,"Swamp region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd60,auStack_390);
        FUN_140762ed0(auStack_390,0x15);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._1_1_;
      if ((iVar18 < _DAT_14251bd64) && (_DAT_14250e040 == 0)) {
        FUN_140069780(auStack_390,"Desert region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd64,auStack_390);
        FUN_140762ed0(auStack_390,0x16);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._2_1_;
      if ((iVar18 < _DAT_14251bd68) && (_DAT_14250e044 == 0)) {
        FUN_140069780(auStack_390,"Forest region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd68,auStack_390);
        FUN_140762ed0(auStack_390,0x17);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._3_1_;
      if ((iVar18 < _DAT_14251bd6c) && (_DAT_14250e048 == 0)) {
        FUN_140069780(auStack_390,"Mountain region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd6c,auStack_390);
        FUN_140762ed0(auStack_390,0x18);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._4_1_;
      if ((iVar18 < _DAT_14251bd70) && (_DAT_14250e04c == 0)) {
        FUN_140069780(auStack_390,"Ocean region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd70,auStack_390);
        FUN_140762ed0(auStack_390,0x19);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._6_1_;
      if ((iVar18 < _DAT_14251bd78) && (_DAT_14250e050 == 0)) {
        FUN_140069780(auStack_390,"Glacier region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd78,auStack_390);
        FUN_140762ed0(auStack_390,0x1a);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_178._7_1_;
      if ((iVar18 < _DAT_14251bd7c) && (_DAT_14250e054 == 0)) {
        FUN_140069780(auStack_390,"Tundra region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd7c,auStack_390);
        FUN_140762ed0(auStack_390,0x1b);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)(char)uStack_170;
      if ((iVar18 < _DAT_14251bd80) && (_DAT_14250e058 == 0)) {
        FUN_140069780(auStack_390,"Grassland region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd80,auStack_390);
        FUN_140762ed0(auStack_390,0x1c);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
      iVar18 = (int)uStack_170._1_1_;
      if ((iVar18 < _DAT_14251bd84) && (_DAT_14250e05c == 0)) {
        FUN_140069780(auStack_390,"Hill region count fails by ");
        FUN_140545610(iVar18 - _DAT_14251bd84,auStack_390);
        FUN_140762ed0(auStack_390,0x1d);
        supplier_0x140069460(auStack_390);
        goto LAB_140f6d6b2;
      }
    }
    if ((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) {
      FUN_140f904c0(lVar47);
    }
    lVar48 = lVar47 + 0x220;
    lVar51 = supplier_0x140070480(lVar48);
    uVar44 = uVar57;
    uVar39 = uVar57;
    if (lVar51 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
        if (*plVar23 != 0) {
          FUN_140f6d880(*plVar23,1);
        }
        uVar41 = (int)uVar39 + 1;
        uVar24 = supplier_0x140070480(lVar48);
        uVar44 = (longlong)(int)uVar41;
        uVar39 = (ulonglong)uVar41;
        lVar47 = lStack_410;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(lVar47 + 0x220);
    lVar48 = lVar47 + 0x268;
    lVar51 = supplier_0x140070480(lVar48);
    uVar44 = uVar57;
    uVar39 = uVar57;
    if (lVar51 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(lVar48,uVar44);
        if (*plVar23 != 0) {
          FUN_140f6d8d0(*plVar23,1);
        }
        uVar41 = (int)uVar39 + 1;
        uVar24 = supplier_0x140070480(lVar48);
        uVar44 = (longlong)(int)uVar41;
        uVar39 = (ulonglong)uVar41;
        lVar47 = lStack_410;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(lVar47 + 0x268);
    lVar51 = supplier_0x140070480(lVar47 + 0x238);
    lVar48 = lVar47;
    if (lVar51 != 0) {
      uVar44 = uVar57;
      uVar39 = uVar57;
      do {
        plVar23 = (longlong *)supplier_0x140070850(lVar47 + 0x238,uVar44);
        if (*plVar23 != 0) {
          FUN_140f6d9a0(*plVar23,1);
        }
        uVar41 = (int)uVar39 + 1;
        uVar39 = (ulonglong)uVar41;
        uVar44 = (ulonglong)(int)uVar41;
        uVar24 = supplier_0x140070480(lVar47 + 0x238);
        lVar48 = lStack_410;
      } while (uVar44 < uVar24);
    }
    supplier_0x1400708c0(lVar48 + 0x238);
    lVar51 = lVar48 + 0x250;
    lVar52 = supplier_0x140070480(lVar51);
    uVar44 = uVar57;
    uVar39 = uVar57;
    lVar47 = lVar48;
    if (lVar52 != 0) {
      do {
        plVar23 = (longlong *)supplier_0x140070850(lVar51,uVar44);
        if (*plVar23 != 0) {
          FUN_140f6daa0(*plVar23,1);
        }
        uVar41 = (int)uVar39 + 1;
        uVar24 = supplier_0x140070480(lVar51);
        uVar44 = (longlong)(int)uVar41;
        uVar39 = (ulonglong)uVar41;
        lVar47 = lStack_410;
      } while ((ulonglong)(longlong)(int)uVar41 < uVar24);
    }
    supplier_0x1400708c0(lVar47 + 0x250);
    supplier_0x1400708c0(0x14250e648);
    supplier_0x1400708c0(0x14250e660);
    sVar15 = 0xfa;
    iVar18 = *(int *)(lVar47 + 0xa0);
    uVar41 = uStack_42c;
    if (iVar18 < 1) {
LAB_140f6b846:
      uVar41 = *(int *)(lVar47 + 0xa4) >> 1;
      _DAT_14250e640 = iVar18 >> 1;
    }
    else {
      do {
        uVar33 = 0;
        iVar45 = (int)uVar57;
        if (0 < *(int *)(lVar47 + 0xa4)) {
          lVar48 = (longlong)iVar45;
          do {
            lVar51 = (longlong)(int)uVar33 * 0x70;
            if (0x95 < *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                                 lVar51)) {
              uStack_468._0_2_ = (short)uVar57;
              supplier_0x140070b20(0x14250e648,&uStack_468);
              uStack_468 = CONCAT22(uStack_468._2_2_,(short)uVar33);
              supplier_0x140070b20(0x14250e660,&uStack_468);
              iVar18 = *(int *)(lVar47 + 0xa0) >> 2;
              if ((iVar18 < iVar45) && (iVar45 < *(int *)(lVar47 + 0xa0) - iVar18)) {
                iVar18 = *(int *)(lVar47 + 0xa4) >> 2;
                if ((iVar18 < (int)uVar33) &&
                   ((((int)uVar33 < *(int *)(lVar47 + 0xa4) - iVar18 &&
                     (lVar52 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8),
                     *(short *)(lVar52 + 0x30 + lVar51) < sVar15)) &&
                    (cVar12 = supplier_0x1400735c0(lVar52 + 0x20 + lVar51,0xd), cVar12 == '\0')))) {
                  sVar15 = *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) +
                                      0x30 + lVar51);
                  uVar41 = uVar33;
                  iStack_430 = iVar45;
                }
              }
            }
            uVar33 = uVar33 + 1;
          } while ((int)uVar33 < *(int *)(lVar47 + 0xa4));
        }
        uVar57 = (ulonglong)(iVar45 + 1U);
        iVar18 = *(int *)(lVar47 + 0xa0);
      } while ((int)(iVar45 + 1U) < iVar18);
      _DAT_14250e640 = iStack_430;
      if (iStack_430 == -1) goto LAB_140f6b846;
    }
    _DAT_14250e644 = uVar41;
    if (((_DAT_14251c0e8 == 0) || (*(longlong *)(_DAT_14251c0e8 + 8) == 0)) &&
       ((uVar44 = supplier_0x140070a80(0x14250e648), uVar44 < (ulonglong)(longlong)_DAT_14251bdb0 &&
        (_DAT_14250e060 == 0)))) {
      FUN_140069780(auStack_390,"Not enough river start points before erosion");
      FUN_140762ed0(auStack_390,0x1e);
      supplier_0x140069460(auStack_390);
      goto LAB_140f6d6b2;
    }
  }
  iVar18 = _DAT_14250e67c;
  uVar44 = (ulonglong)_DAT_14251bdb4;
  uVar39 = supplier_0x140070a80(0x14250e648);
  if (uVar39 < uVar44) {
    uVar44 = supplier_0x140070a80(0x14250e648);
  }
  if (iVar18 == _DAT_14250e678 + -1) {
    if (_DAT_14251bea0 < 0xfa) {
      sVar15 = _DAT_14251bea0;
      if (_DAT_14251bea0 < 0x65) goto LAB_140f6bae4;
    }
    else {
      sVar15 = 0xf9;
    }
    do {
      cVar12 = '\x01';
      uStack_460 = CONCAT31(uStack_460._1_3_,1);
      iVar45 = 0;
      supplier_0x1400708c0(0x14250e648);
      supplier_0x1400708c0(0x14250e660);
      iVar18 = iVar45;
      if (0 < *(int *)(lVar47 + 0xa0)) {
        do {
          iVar34 = 0;
          if (0 < *(int *)(lVar47 + 0xa4)) {
            do {
              lVar48 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)iVar45 * 8);
              if ((*(short *)(lVar48 + 0x30 + (longlong)iVar34 * 0x70) == sVar15) &&
                 (cVar13 = supplier_0x1400735c0(lVar48 + 0x20 + (longlong)iVar34 * 0x70,0),
                 cVar13 == '\0')) {
                uStack_468._0_2_ = (short)iVar45;
                supplier_0x140070b20(0x14250e648,&uStack_468);
                uStack_468 = CONCAT22(uStack_468._2_2_,(short)iVar34);
                supplier_0x140070b20(0x14250e660,&uStack_468);
                iVar18 = iVar18 + 1;
                if (1000 < iVar18) {
                  cVar12 = '\0';
                  break;
                }
              }
              iVar34 = iVar34 + 1;
            } while (iVar34 < *(int *)(lVar47 + 0xa4));
            if (1000 < iVar18) break;
          }
          iVar45 = iVar45 + 1;
        } while (iVar45 < *(int *)(lVar47 + 0xa0));
        uStack_460 = CONCAT31(uStack_460._1_3_,cVar12);
      }
      lVar48 = supplier_0x140070a80(0x14250e648);
      if (lVar48 != 0) {
        do {
          uVar27 = supplier_0x140070a80(0x14250e648);
          iVar18 = FUN_140073560(uVar27);
          lVar48 = (longlong)iVar18;
          psVar38 = (short *)supplier_0x140070a70(0x14250e648,lVar48);
          sVar16 = *psVar38;
          psVar38 = (short *)supplier_0x140070a70(0x14250e660,lVar48);
          sVar59 = *psVar38;
          FUN_1400fcbb0(0x14250e648,lVar48);
          FUN_1400fcbb0(0x14250e660,lVar48);
          supplier_0x1400fcef0
                    ((longlong)sVar59 * 0x70 + 0x20 +
                     *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + (longlong)sVar16 * 8),0x11);
          uStack_488 = CONCAT31(uStack_488._1_3_,1);
          FUN_140f71920(lVar47,sVar16,sVar59,100);
          lVar48 = supplier_0x140070a80(0x14250e648);
        } while (lVar48 != 0);
        cVar12 = (char)uStack_460;
      }
      if (cVar12 != '\0') {
        sVar15 = sVar15 + -1;
      }
    } while (100 < sVar15);
  }
  else {
    uVar41 = (uint)uVar44;
    while (0 < (int)uVar41) {
      uVar27 = supplier_0x140070a80(0x14250e648);
      iVar45 = FUN_140073560(uVar27);
      iVar34 = _DAT_14250e678 + -1;
      lVar48 = (longlong)iVar45;
      puVar29 = (undefined2 *)supplier_0x140070a70(0x14250e660,lVar48);
      uVar17 = *puVar29;
      puVar29 = (undefined2 *)supplier_0x140070a70(0x14250e648,lVar48);
      uStack_488 = CONCAT31(uStack_488._1_3_,iVar18 == iVar34);
      FUN_140f71920(lVar47,*puVar29,uVar17,100);
      if (iVar18 == _DAT_14250e678 + -1) {
        FUN_1400fcbb0(0x14250e648,lVar48);
        FUN_1400fcbb0(0x14250e660,lVar48);
      }
      uVar41 = (int)uVar44 - 1;
      uVar44 = (ulonglong)uVar41;
    }
  }
LAB_140f6bae4:
  if ((_DAT_14251c0fc != 0) && (iVar18 = 0, 0 < *(int *)(lVar47 + 0xa0))) {
    do {
      iVar45 = 0;
      if (0 < *(int *)(lVar47 + 0xa4)) {
        lVar48 = (longlong)iVar18;
        do {
          lVar51 = (longlong)iVar45 * 0x70;
          if (99 < *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                             lVar51)) {
            if ((0 < iVar18) && (iVar34 = FUN_140073560(100), iVar34 == 0)) {
              lVar52 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + -8 + (longlong)iVar18 * 8);
              if ((*(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                             lVar51) + 0xf < (int)*(short *)(lVar52 + 0x30 + lVar51)) &&
                 (cVar12 = supplier_0x1400735c0(lVar51 + 0x20 + lVar52,0xd), cVar12 == '\0')) {
                *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + -8 + (longlong)iVar18 * 8)
                           + 0x30 + lVar51) =
                     *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                               lVar51) + 0xf;
              }
            }
            if ((iVar18 < *(int *)(lVar47 + 0xa0) + -1) &&
               (iVar34 = FUN_140073560(100), iVar34 == 0)) {
              lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + 8 + (longlong)iVar18 * 8);
              if ((*(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                             (longlong)iVar45 * 0x70) + 0xf <
                   (int)*(short *)(lVar51 + 0x30 + (longlong)iVar45 * 0x70)) &&
                 (cVar12 = supplier_0x1400735c0((longlong)iVar45 * 0x70 + 0x20 + lVar51,0xd),
                 cVar12 == '\0')) {
                *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + 8 + (longlong)iVar18 * 8) +
                           0x30 + (longlong)iVar45 * 0x70) =
                     *(short *)(*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x30 +
                               (longlong)iVar45 * 0x70) + 0xf;
              }
            }
            if ((0 < iVar45) && (iVar34 = FUN_140073560(100), iVar34 == 0)) {
              lVar52 = (longlong)(iVar45 + -1) * 0x70;
              lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
              if ((*(short *)((longlong)iVar45 * 0x70 + 0x30 + lVar51) + 0xf <
                   (int)*(short *)(lVar52 + 0x30 + lVar51)) &&
                 (cVar12 = supplier_0x1400735c0(lVar51 + 0x20 + lVar52,0xd), cVar12 == '\0')) {
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                *(short *)(lVar52 + 0x30 + lVar51) =
                     *(short *)((longlong)iVar45 * 0x70 + 0x30 + lVar51) + 0xf;
              }
            }
            if ((iVar45 < *(int *)(lVar47 + 0xa4) + -1) &&
               (iVar34 = FUN_140073560(100), iVar34 == 0)) {
              lVar52 = ((longlong)iVar45 + 1) * 0x70;
              lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
              if ((*(short *)((longlong)iVar45 * 0x70 + 0x30 + lVar51) + 0xf <
                   (int)*(short *)(lVar51 + 0x30 + lVar52)) &&
                 (cVar12 = supplier_0x1400735c0(lVar51 + 0x20 + lVar52,0xd), cVar12 == '\0')) {
                lVar51 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
                *(short *)(lVar52 + 0x30 + lVar51) =
                     *(short *)((longlong)iVar45 * 0x70 + 0x30 + lVar51) + 0xf;
              }
            }
          }
          iVar45 = iVar45 + 1;
        } while (iVar45 < *(int *)(lVar47 + 0xa4));
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(lVar47 + 0xa0));
  }
  _DAT_14250e67c = _DAT_14250e67c + 1;
  if (_DAT_14250e67c == _DAT_14250e678) {
    iVar18 = 0;
    if (0 < *(int *)(lVar47 + 0xa0)) {
      do {
        iVar45 = 0;
        if (0 < *(int *)(lVar47 + 0xa4)) {
          lVar48 = (longlong)iVar18;
          do {
            lVar51 = (longlong)iVar45 * 0x70;
            cVar12 = supplier_0x1400735c0
                               (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 +
                                lVar51,4);
            if (cVar12 != '\0') {
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,4
                        );
            }
            lVar52 = *(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8);
            if ((0x95 < *(short *)(lVar52 + 0x30 + lVar51)) &&
               (cVar12 = supplier_0x1400735c0(lVar52 + 0x20 + lVar51,0), cVar12 != '\0')) {
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,0
                        );
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,5
                        );
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,6
                        );
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,7
                        );
              supplier_0x1400fcf20
                        (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 + lVar51,8
                        );
              if (0 < iVar18) {
                supplier_0x1400fcf20
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + -8 + (longlong)iVar18 * 8)
                           + 0x20 + lVar51,7);
              }
              if (iVar18 < *(int *)(lVar47 + 0xa0) + -1) {
                supplier_0x1400fcf20
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + 8 + (longlong)iVar18 * 8) +
                           0x20 + lVar51,8);
              }
              if (0 < iVar45) {
                supplier_0x1400fcf20
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 +
                           (longlong)(iVar45 + -1) * 0x70,6);
              }
              if (iVar45 < *(int *)(lVar47 + 0xa4) + -1) {
                supplier_0x1400fcf20
                          (*(longlong *)(*(longlong *)(lVar47 + 0x2b0) + lVar48 * 8) + 0x20 +
                           (longlong)(iVar45 + 1) * 0x70,5);
              }
            }
            iVar45 = iVar45 + 1;
          } while (iVar45 < *(int *)(lVar47 + 0xa4));
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(lVar47 + 0xa0));
    }
    _DAT_14250dfe0 = _DAT_14250dfe0 + 1;
  }
LAB_140f6d6b2:
  FUN_1415530b0(uStack_78 ^ (ulonglong)auStack_4a8);
  return;
}

