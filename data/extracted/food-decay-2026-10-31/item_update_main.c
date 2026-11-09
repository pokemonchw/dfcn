/* Actual Ghidra output, Steam 53.16, VA 140ab6840..140ababaa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void item_update_main(ushort *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  ushort uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  longlong *plVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *****pppppuVar30;
  undefined *puVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  ushort uVar35;
  longlong lVar36;
  short sVar37;
  int iVar38;
  ushort uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  int iVar43;
  longlong *plVar44;
  short sVar45;
  undefined1 auStack_3d8 [32];
  undefined4 uStack_3b8;
  ulonglong uStack_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  ushort auStack_378 [2];
  short asStack_374 [2];
  ushort auStack_370 [2];
  short asStack_36c [2];
  ulonglong uStack_368;
  ushort *puStack_360;
  short asStack_358 [2];
  short asStack_354 [2];
  short asStack_350 [2];
  ushort auStack_34c [2];
  uint uStack_348;
  undefined8 uStack_340;
  ushort auStack_338 [2];
  ushort auStack_334 [2];
  ushort uStack_330;
  int iStack_32c;
  undefined8 *puStack_328;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 uStack_31d;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined1 uStack_31a;
  undefined1 uStack_319;
  undefined1 uStack_318;
  undefined1 auStack_317 [7];
  longlong *plStack_310;
  ushort auStack_308 [2];
  undefined2 auStack_304 [2];
  undefined2 auStack_300 [2];
  short asStack_2fc [2];
  undefined2 auStack_2f8 [4];
  ushort *puStack_2f0;
  undefined2 auStack_2e8 [4];
  undefined8 *puStack_2e0;
  longlong lStack_2d8;
  undefined8 *puStack_2d0;
  undefined2 auStack_2c8 [2];
  undefined2 auStack_2c4 [2];
  undefined2 auStack_2c0 [4];
  longlong lStack_2b8;
  ushort *puStack_2b0;
  ushort *puStack_2a8;
  ulonglong uStack_2a0;
  ushort *puStack_298;
  ushort *puStack_290;
  ushort *apuStack_288 [2];
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [4];
  undefined1 auStack_258 [8];
  longlong lStack_250;
  longlong lStack_248;
  undefined8 uStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined1 uStack_184;
  ushort uStack_182;
  ushort uStack_180;
  ushort uStack_17e;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_138;
  undefined1 uStack_134;
  short sStack_132;
  short sStack_130;
  short sStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_14189c040 ^ (ulonglong)auStack_3d8;
  iVar43 = 0;
  puStack_2f0 = param_1;
  if (_DAT_142374734 % 0x5460 == 0x870) {
    uStack_368 = uStack_368 & 0xffffffff00000000;
    iVar32 = 0;
    iVar15 = 0;
    iVar14 = (int)(*(longlong *)(param_1 + 0xa140) - *(longlong *)(param_1 + 0xa13c) >> 3) + -1;
    lVar29 = (longlong)iVar14;
    if (-1 < iVar14) {
      plVar44 = (longlong *)(*(longlong *)(param_1 + 0xa13c) + lVar29 * 8);
      do {
        iVar14 = iVar15 + 1;
        if ((*(uint *)(*plVar44 + 0x10) & 0x400c11) != 1) {
          iVar14 = iVar15;
        }
        iVar15 = iVar14;
        plVar44 = plVar44 + -1;
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    iVar14 = (int)(*(longlong *)(param_1 + 0xa14c) - *(longlong *)(param_1 + 0xa148) >> 3) + -1;
    lVar29 = (longlong)iVar14;
    if (-1 < iVar14) {
      lVar36 = lVar29 * 8;
      do {
        cVar7 = (**(code **)(**(longlong **)(lVar36 + *(longlong *)(param_1 + 0xa148)) + 0x170))();
        if ((cVar7 != '\0') &&
           (lVar27 = *(longlong *)(*(longlong *)(param_1 + 0xa148) + lVar29 * 8),
           (*(uint *)(lVar27 + 0x10) & 0x400c38) == 0)) {
          FUN_140c8baa0(lVar27,auStack_2c8,auStack_2c4,auStack_2c0);
          cVar7 = stockpile_preservation_eligibility
                            (*(undefined8 *)(*(longlong *)(param_1 + 0xa148) + lVar29 * 8),1);
          if (((cVar7 == '\0') ||
              ((uVar19 = func_0x00014007dc40(param_1,auStack_2c8[0],auStack_2c4[0],auStack_2c0[0]),
               (uVar19 & 8) == 0 ||
               ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa148) + lVar29 * 8) + 0x10) &
                0x100) != 0)))) &&
             ((uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa148) + lVar29 * 8) + 0x10
                                 ), (uVar16 & 4) == 0 || ((uVar16 >> 8 & 1) != 0)))) {
            iVar43 = iVar43 + 1;
          }
        }
        lVar29 = lVar29 + -1;
        lVar36 = lVar36 + -8;
      } while (-1 < lVar29);
      uStack_368 = CONCAT44(uStack_368._4_4_,iVar43);
    }
    iVar14 = 0;
    uVar19 = 0;
    uStack_348 = 0;
    iVar38 = 0;
    puStack_2d0 = (undefined8 *)((ulonglong)puStack_2d0 & 0xffffffff00000000);
    plVar44 = *(longlong **)(param_1 + 0x48);
    puStack_360 = *(ushort **)(param_1 + 0x4c);
    plStack_310 = plVar44;
    pcVar20 = (char *)func_0x00014006ee20(&plStack_310,&uStack_319);
    if (*pcVar20 < '\0') {
      do {
        lVar29 = *plVar44;
        if ((((*(short *)(lVar29 + 0x24) == -1) && (*(int *)(lVar29 + 0x28) == -1)) &&
            (*(int *)(lVar29 + 0x2c) == -1)) &&
           (((*(byte *)(lVar29 + 0x18) & 8) == 0 && (*(longlong *)(lVar29 + 0x10) == 0)))) {
          sVar9 = *(short *)(lVar29 + 0x38);
          if (sVar9 == 0) {
            iVar14 = iVar14 + 1;
          }
          else if (sVar9 == 1) {
            uVar19 = (ulonglong)((int)uVar19 + 1);
          }
          else if (sVar9 == 2) {
            iVar32 = iVar32 + 1;
          }
          else if (sVar9 == 3) {
            iVar38 = iVar38 + 1;
          }
        }
        plVar44 = plVar44 + 1;
        plStack_310 = plVar44;
        pcVar20 = (char *)func_0x00014006ee20(&plStack_310,&uStack_319);
      } while (*pcVar20 < '\0');
      puStack_2d0 = (undefined8 *)CONCAT44(puStack_2d0._4_4_,iVar38);
      uStack_348 = (uint)uVar19;
    }
    plStack_310 = (longlong *)CONCAT44(plStack_310._4_4_,iVar15 >> 2);
    if (((iVar14 < iVar15 >> 2) && (iVar15 = FUN_140071f30(0x1e), iVar15 == 0)) && (iVar14 < 10)) {
      do {
        iVar14 = FUN_140071f30(*(longlong *)(param_1 + 0xa140) - *(longlong *)(param_1 + 0xa13c) >>
                               3);
        lVar29 = *(longlong *)((longlong)iVar14 * 8 + *(longlong *)(param_1 + 0xa13c));
      } while ((*(uint *)(lVar29 + 0x10) & 0x400c11) != 1);
      uStack_3b0 = CONCAT62(uStack_3b0._2_6_,*(undefined2 *)(lVar29 + 0xc));
      uStack_3b8 = CONCAT22(uStack_3b8._2_2_,*(undefined2 *)(lVar29 + 10));
      FUN_14007dcd0(param_1,auStack_370,auStack_378,*(undefined2 *)(lVar29 + 8));
      lStack_250 = 0;
      lStack_248 = 0;
      iVar15 = 0;
      uStack_240 = 0;
      puVar23 = *(undefined8 **)(param_1 + 0x15c);
      puStack_360 = *(ushort **)(param_1 + 0x160);
      uStack_340 = (undefined8 *)((ulonglong)uStack_340._4_4_ << 0x20);
      puStack_328 = puVar23;
      pcVar20 = (char *)func_0x00014006ee20(&puStack_328,&uStack_320);
      uVar35 = auStack_370[0];
      uVar12 = auStack_378[0];
      if (*pcVar20 < '\0') {
        do {
          pcVar20 = (char *)*puVar23;
          if ((((((pcVar20[0xc] & 10U) == 0) &&
                (uVar19 = (ulonglong)*(ushort *)(pcVar20 + 0x10),
                *(ushort *)(pcVar20 + 0x10) == uVar35)) && (*(ushort *)(pcVar20 + 0x12) == uVar12))
              && ((*(short *)(pcVar20 + 0x14) == -1 && (*(int *)(pcVar20 + 0x18) == -1)))) &&
             ((*(int *)(pcVar20 + 0x1c) == -1 &&
              ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))))) {
            uVar40 = (ulonglong)*(ushort *)(pcVar20 + 2);
            cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar40,3);
            if (cVar7 != '\0') {
              uStack_3b8 = 0x23;
              cVar7 = FUN_140abd3a0(uVar40 & 0xffff,uVar19 & 0xffff,1,0xffffffff);
              if (cVar7 == '\0') {
                func_0x00014006f410(&lStack_250,&uStack_340);
              }
            }
          }
          puVar23 = puVar23 + 1;
          iVar15 = iVar15 + 1;
          uStack_340 = (undefined8 *)CONCAT44(uStack_340._4_4_,iVar15);
          puStack_328 = puVar23;
          pcVar20 = (char *)func_0x00014006ee20(&puStack_328,&uStack_320);
        } while (*pcVar20 < '\0');
        iVar43 = (int)uStack_368;
      }
      if (lStack_248 - lStack_250 >> 2 != 0) {
        do {
          iVar15 = FUN_140071f30(lStack_248 - lStack_250 >> 2);
          lVar29 = (longlong)*(int *)(lStack_250 + (longlong)iVar15 * 4) * 8;
          sVar9 = func_0x000140abd500(*(undefined2 *)
                                       (*(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c)) + 2))
          ;
          iVar15 = FUN_140071f30(100);
        } while (sVar9 <= iVar15);
        FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
        lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
        lStack_3a8 = lStack_3a0 + 0x10;
        lVar29 = *(longlong *)((longlong)iVar14 * 8 + *(longlong *)(param_1 + 0xa13c));
        uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
        uStack_3b8 = CONCAT22(uStack_3b8._2_2_,*(undefined2 *)(lVar29 + 0xc));
        FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),*(undefined2 *)(lVar29 + 8),
                      *(undefined2 *)(lVar29 + 10));
      }
      FUN_14006f750(&lStack_250);
    }
    if ((iVar32 < 0x1e) && (iVar32 * 2 < iVar43)) {
      auStack_308[0] = 0x8ad0;
      auStack_304[0] = 0x8ad0;
      auStack_300[0] = 0x8ad0;
      do {
        iVar43 = FUN_140071f30(*(longlong *)(param_1 + 0xa14c) - *(longlong *)(param_1 + 0xa148) >>
                               3);
        lVar29 = (longlong)iVar43 * 8;
        cVar7 = (**(code **)(**(longlong **)(lVar29 + *(longlong *)(param_1 + 0xa148)) + 0x170))();
        if (cVar7 == '\0') goto LAB_140ab6dd6;
        uVar16 = *(uint *)(*(longlong *)(lVar29 + *(longlong *)(param_1 + 0xa148)) + 0x10);
      } while (((uVar16 & 0x400c18) != 0) || ((uVar16 & 0x20) != 0));
      FUN_140c8baa0(*(longlong *)(lVar29 + *(longlong *)(param_1 + 0xa148)),auStack_308,auStack_304,
                    auStack_300);
      stockpile_preservation_eligibility
                (*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0xa148)),1);
LAB_140ab6dd6:
      uVar11 = auStack_300[0];
      uVar10 = auStack_304[0];
      uVar12 = auStack_308[0];
      uStack_330 = auStack_308[0];
      puStack_2e0 = (undefined8 *)CONCAT62(puStack_2e0._2_6_,auStack_300[0]);
      if (auStack_308[0] != 0x8ad0) {
        uStack_3b0 = CONCAT62(uStack_3b0._2_6_,auStack_300[0]);
        uStack_3b8 = CONCAT22(uStack_3b8._2_2_,auStack_304[0]);
        FUN_14007dcd0(param_1,auStack_370,auStack_378,auStack_308[0]);
        lStack_238 = 0;
        lStack_230 = 0;
        uStack_228 = 0;
        puVar23 = *(undefined8 **)(param_1 + 0x15c);
        puStack_360 = *(ushort **)(param_1 + 0x160);
        sVar9 = 0;
        asStack_350[0] = 0;
        uStack_340 = puVar23;
        pcVar20 = (char *)func_0x00014006ee20(&uStack_340,&uStack_31f);
        uVar39 = auStack_370[0];
        uVar35 = auStack_378[0];
        if (*pcVar20 < '\0') {
          do {
            pcVar20 = (char *)*puVar23;
            if (((((pcVar20[0xc] & 10U) == 0) &&
                 (uVar19 = (ulonglong)*(ushort *)(pcVar20 + 0x10),
                 *(ushort *)(pcVar20 + 0x10) == uVar39)) && (*(ushort *)(pcVar20 + 0x12) == uVar35))
               && (((*(short *)(pcVar20 + 0x14) == -1 && (*(int *)(pcVar20 + 0x18) == -1)) &&
                   ((*(int *)(pcVar20 + 0x1c) == -1 &&
                    ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))))))) {
              uVar40 = (ulonglong)*(ushort *)(pcVar20 + 2);
              cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar40,5);
              if (cVar7 != '\0') {
                uStack_3b8 = 0xffffffff;
                cVar7 = FUN_140abd3a0(uVar40 & 0xffff,uVar19 & 0xffff,1,0xffffffff);
                if (cVar7 == '\0') {
                  func_0x00014006f4f0(&lStack_238,asStack_350);
                }
              }
            }
            puVar23 = puVar23 + 1;
            sVar9 = sVar9 + 1;
            asStack_350[0] = sVar9;
            uStack_340 = puVar23;
            pcVar20 = (char *)func_0x00014006ee20(&uStack_340,&uStack_31f);
          } while (*pcVar20 < '\0');
          uVar12 = uStack_330;
          uVar11 = puStack_2e0._0_2_;
        }
        if (lStack_230 - lStack_238 >> 1 != 0) {
          do {
            iVar43 = FUN_140071f30(lStack_230 - lStack_238 >> 1);
            lVar29 = (longlong)*(short *)(lStack_238 + (longlong)iVar43 * 2) * 8;
            sVar9 = func_0x000140abd500(*(undefined2 *)
                                         (*(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c)) + 2
                                         ));
            iVar43 = FUN_140071f30(100);
          } while (sVar9 <= iVar43);
          FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
          lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
          lStack_3a8 = lStack_3a0 + 0x10;
          uStack_3b0 = CONCAT44(uStack_3b0._4_4_,2);
          uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar11);
          FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),uVar12,uVar10);
        }
        FUN_14006f7b0(&lStack_238);
      }
    }
    if ((int)uStack_348 < (*(int *)(param_1 + 0x8b5f6) * *(int *)(param_1 + 0x8b5f8)) / 0xdac + 1) {
      sVar9 = 100;
      do {
        uVar16 = FUN_140071f30(*(undefined4 *)(param_1 + 0x8b5f6));
        uStack_348 = uVar16;
        uVar10 = FUN_140071f30(*(undefined4 *)(param_1 + 0x8b5f8));
        uVar11 = FUN_14149fb70(param_1,uVar16 & 0xffff,uVar10);
        sVar9 = sVar9 + -1;
        uVar17 = func_0x00014007dc40(param_1,uVar16 & 0xffff,uVar10,uVar11);
        if ((uVar17 >> 0xe & 1) != 0) {
          if (0 < sVar9) {
            uStack_3b0 = CONCAT62(uStack_3b0._2_6_,uVar11);
            uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar10);
            FUN_14007dcd0(param_1,auStack_378,auStack_370,(short)uVar16);
            lStack_220 = 0;
            lStack_218 = 0;
            iVar43 = 0;
            uStack_210 = 0;
            puVar23 = *(undefined8 **)(param_1 + 0x15c);
            puStack_360 = *(ushort **)(param_1 + 0x160);
            uStack_340 = (undefined8 *)((ulonglong)uStack_340 & 0xffffffff00000000);
            puStack_328 = puVar23;
            pcVar20 = (char *)func_0x00014006ee20(&puStack_328,&uStack_31e);
            cVar7 = *pcVar20;
            while (cVar7 < '\0') {
              pcVar20 = (char *)*puVar23;
              if (((((((pcVar20[0xc] & 10U) == 0) && (*(ushort *)(pcVar20 + 0x10) == auStack_378[0])
                     ) && (*(ushort *)(pcVar20 + 0x12) == auStack_370[0])) &&
                   ((*(short *)(pcVar20 + 0x14) == -1 && (*(int *)(pcVar20 + 0x18) == -1)))) &&
                  (*(int *)(pcVar20 + 0x1c) == -1)) &&
                 ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))) {
                uVar19 = (ulonglong)*(ushort *)(pcVar20 + 2);
                cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar19,4);
                if (cVar7 != '\0') {
                  uStack_3b0 = CONCAT62(uStack_3b0._2_6_,uVar11);
                  uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar10);
                  cVar7 = FUN_1414c95a0(param_1,uVar19 & 0xffff,0xffffffff,uVar16 & 0xffff);
                  if (cVar7 != '\0') {
                    uStack_3b8 = 0x23;
                    cVar7 = FUN_140abd3a0(*(undefined2 *)(pcVar20 + 2),
                                          *(undefined2 *)(pcVar20 + 0x10),1,0xffffffff);
                    if (cVar7 == '\0') {
                      func_0x00014006f410(&lStack_220,&uStack_340);
                    }
                  }
                }
              }
              puVar23 = puVar23 + 1;
              iVar43 = iVar43 + 1;
              uStack_340 = (undefined8 *)CONCAT44(uStack_340._4_4_,iVar43);
              puStack_328 = puVar23;
              pcVar20 = (char *)func_0x00014006ee20(&puStack_328,&uStack_31e);
              cVar7 = *pcVar20;
            }
            if (lStack_218 - lStack_220 >> 2 != 0) {
              do {
                iVar43 = FUN_140071f30(lStack_218 - lStack_220 >> 2);
                lVar29 = (longlong)*(int *)(lStack_220 + (longlong)iVar43 * 4) * 8;
                sVar9 = func_0x000140abd500(*(undefined2 *)
                                             (*(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c))
                                             + 2));
                iVar43 = FUN_140071f30(100);
              } while (sVar9 <= iVar43);
              FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
              lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
              lStack_3a8 = lStack_3a0 + 0x10;
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,1);
              uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar11);
              FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),uStack_348,uVar10);
            }
            FUN_14006f750(&lStack_220);
          }
          break;
        }
      } while (0 < sVar9);
    }
    if ((int)puStack_2d0 < (*(int *)(param_1 + 0x8b5f6) * *(int *)(param_1 + 0x8b5f8)) / 6000 + 1) {
      sVar9 = 100;
      do {
        uVar16 = FUN_140071f30(*(undefined4 *)(param_1 + 0x8b5f6));
        uStack_348 = uVar16;
        uVar10 = FUN_140071f30(*(undefined4 *)(param_1 + 0x8b5f8));
        iVar43 = FUN_140071f30(2);
        if (iVar43 == 0) {
          uVar12 = FUN_14149fb70(param_1,uVar16 & 0xffff,uVar10);
        }
        else {
          uVar12 = FUN_14149fd10();
        }
        sVar9 = sVar9 + -1;
        uVar17 = func_0x00014007dc40(param_1,uVar16 & 0xffff,uVar10,uVar12);
        if (((uVar17 >> 0xe & 1) != 0) &&
           ((cVar7 = func_0x000140247d80(param_1,uVar16 & 0xffff), cVar7 != '\0' ||
            (cVar7 = func_0x000140247d80(param_1,uVar16 & 0xffff,uVar10,uVar12 - 1), cVar7 != '\0'))
           )) {
          if (0 < sVar9) {
            uStack_3b0 = CONCAT62(uStack_3b0._2_6_,uVar12);
            uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar10);
            FUN_14007dcd0(param_1,auStack_378,auStack_370,uVar16 & 0xffff);
            lStack_208 = 0;
            lStack_200 = 0;
            iVar43 = 0;
            uStack_1f8 = 0;
            puVar23 = *(undefined8 **)(param_1 + 0x15c);
            puStack_360 = *(ushort **)(param_1 + 0x160);
            uStack_340 = (undefined8 *)((ulonglong)uStack_340 & 0xffffffff00000000);
            puStack_2d0 = puVar23;
            pcVar20 = (char *)func_0x00014006ee20(&puStack_2d0,&uStack_31d);
            cVar7 = *pcVar20;
            while (cVar7 < '\0') {
              pcVar20 = (char *)*puVar23;
              if (((((pcVar20[0xc] & 10U) == 0) && (*(ushort *)(pcVar20 + 0x10) == auStack_378[0]))
                  && (*(ushort *)(pcVar20 + 0x12) == auStack_370[0])) &&
                 (((*(short *)(pcVar20 + 0x14) == -1 && (*(int *)(pcVar20 + 0x18) == -1)) &&
                  ((*(int *)(pcVar20 + 0x1c) == -1 &&
                   ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))))))) {
                puVar24 = param_1 + 0x8daac;
                uVar19 = (ulonglong)*(ushort *)(pcVar20 + 2);
                cVar7 = func_0x0001400e35c0(puVar24,uVar19,0x2d);
                if ((cVar7 != '\0') ||
                   ((((cVar7 = func_0x0001400e35c0(puVar24,uVar19 & 0xffff,0x2e), cVar7 != '\0' ||
                      (cVar7 = func_0x0001400e35c0(puVar24,uVar19 & 0xffff,0x2f), cVar7 != '\0')) ||
                     (cVar7 = func_0x0001400e35c0(puVar24,uVar19 & 0xffff,0x30), cVar7 != '\0')) ||
                    ((cVar7 = func_0x0001400e35c0(puVar24,uVar19 & 0xffff,0x31), cVar7 != '\0' ||
                     (cVar7 = func_0x0001400e35c0(puVar24,uVar19 & 0xffff,0x32), cVar7 != '\0'))))))
                {
                  uStack_3b0 = CONCAT62(uStack_3b0._2_6_,uVar12);
                  uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar10);
                  cVar7 = FUN_1414c95a0(param_1,uVar19 & 0xffff,0xffffffff,uVar16 & 0xffff);
                  if (cVar7 != '\0') {
                    uStack_3b8 = 0x23;
                    cVar7 = FUN_140abd3a0(*(undefined2 *)(pcVar20 + 2),
                                          *(undefined2 *)(pcVar20 + 0x10),1,0xffffffff);
                    if (cVar7 == '\0') {
                      func_0x00014006f410(&lStack_208,&uStack_340);
                    }
                  }
                }
              }
              puVar23 = puVar23 + 1;
              iVar43 = iVar43 + 1;
              uStack_340 = (undefined8 *)CONCAT44(uStack_340._4_4_,iVar43);
              puStack_2d0 = puVar23;
              pcVar20 = (char *)func_0x00014006ee20(&puStack_2d0,&uStack_31d);
              cVar7 = *pcVar20;
            }
            if (lStack_200 - lStack_208 >> 2 != 0) {
              do {
                iVar43 = FUN_140071f30(lStack_200 - lStack_208 >> 2);
                lVar29 = (longlong)*(int *)(lStack_208 + (longlong)iVar43 * 4) * 8;
                sVar9 = func_0x000140abd500(*(undefined2 *)
                                             (*(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c))
                                             + 2));
                iVar43 = FUN_140071f30(100);
              } while (sVar9 <= iVar43);
              FUN_141435fb0(*(undefined8 *)(*(longlong *)(param_1 + 0x15c) + lVar29));
              lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
              lStack_3a8 = lStack_3a0 + 0x10;
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,3);
              uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar12);
              FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),uStack_348,uVar10);
            }
            FUN_14006f750(&lStack_208);
          }
          break;
        }
      } while (0 < sVar9);
    }
    uVar19 = 0;
    auStack_378[0] = 0;
    lVar29 = *(longlong *)(param_1 + 0x136e00);
    if (*(longlong *)(param_1 + 0x136e04) - lVar29 >> 3 != 0) {
      do {
        iVar43 = 0;
        plVar44 = *(longlong **)(lVar29 + uVar19 * 8);
        uVar12 = *(ushort *)(*(longlong *)(param_1 + 0x136e0c) + uVar19 * 2);
        uVar35 = *(ushort *)(*(longlong *)(param_1 + 0x136e18) + uVar19 * 2);
        sVar9 = *(short *)(*(longlong *)(param_1 + 0x136e24) + uVar19 * 2);
        uStack_348 = *(uint *)(*(longlong *)(param_1 + 0x136e30) + uVar19 * 4);
        auStack_370[0] = uVar35;
        asStack_350[0] = sVar9;
        uStack_330 = uVar12;
        apuStack_288[0] = (ushort *)(**(code **)(*plVar44 + 0x30))(plVar44);
        if (apuStack_288[0] != (ushort *)0x0) {
          iVar32 = 0;
          uVar19 = (ulonglong)uStack_340 >> 0x20;
          uStack_340 = (undefined8 *)((ulonglong)uStack_340 & 0xffffffff00000000);
          iStack_32c = 0;
          iVar38 = 0;
          plVar26 = *(longlong **)(param_1 + 0x48);
          uVar40 = *(longlong *)(param_1 + 0x4c) - (longlong)plVar26 >> 3;
          iVar14 = iVar43;
          iVar15 = iVar43;
          if (uVar40 != 0) {
            do {
              lVar29 = *plVar26;
              iStack_32c = iVar43;
              iVar32 = iVar14;
              if (((*(ushort *)(lVar29 + 0x20) == uVar12) && (*(ushort *)(lVar29 + 0x22) == uVar35))
                 && ((*(short *)(lVar29 + 0x24) == sVar9 &&
                     ((((*(uint *)(lVar29 + 0x28) == uStack_348 && (*(int *)(lVar29 + 0x2c) == -1))
                       && ((*(byte *)(lVar29 + 0x18) & 8) == 0)) &&
                      (*(longlong *)(lVar29 + 0x10) == 0)))))) {
                sVar37 = *(short *)(lVar29 + 0x38);
                if (sVar37 == 0) {
                  iVar32 = iVar14 + 1;
                }
                else if (sVar37 == 1) {
                  iVar15 = iVar15 + 1;
                }
                else if (sVar37 == 2) {
                  iStack_32c = iVar43 + 1;
                }
              }
              iVar38 = iVar38 + 1;
              plVar26 = plVar26 + 1;
              iVar43 = iStack_32c;
              iVar14 = iVar32;
            } while ((ulonglong)(longlong)iVar38 < uVar40);
            uStack_340 = (undefined8 *)CONCAT44((int)uVar19,iVar15);
          }
          iVar43 = iStack_32c;
          cVar7 = func_0x000140071f90(plVar44 + 1,3);
          if (cVar7 != '\0') {
            if (((iVar32 < (int)plStack_310) && (iVar14 = FUN_140071f30(0x1e), iVar14 == 0)) &&
               (iVar32 < 10)) {
              do {
                iVar14 = FUN_140071f30(*(longlong *)(param_1 + 0xa140) -
                                       *(longlong *)(param_1 + 0xa13c) >> 3);
                lVar36 = (longlong)iVar14;
                lVar29 = *(longlong *)(*(longlong *)(param_1 + 0xa13c) + lVar36 * 8);
                lStack_2d8 = lVar36;
              } while ((*(uint *)(lVar29 + 0x10) & 0x400c11) != 1);
              uStack_3b0 = CONCAT62(uStack_3b0._2_6_,*(undefined2 *)(lVar29 + 0xc));
              uStack_3b8 = CONCAT22(uStack_3b8._2_2_,*(undefined2 *)(lVar29 + 10));
              FUN_14007dcd0(param_1,auStack_25c,auStack_260,*(undefined2 *)(lVar29 + 8));
              lStack_1f0 = 0;
              lStack_1e8 = 0;
              iVar14 = 0;
              uStack_1e0 = 0;
              puVar23 = *(undefined8 **)(param_1 + 0x15c);
              puStack_360 = *(ushort **)(param_1 + 0x160);
              puStack_328 = (undefined8 *)((ulonglong)puStack_328 & 0xffffffff00000000);
              puStack_2e0 = puVar23;
              pcVar20 = (char *)func_0x00014006ee20(&puStack_2e0,&uStack_31c);
              uVar16 = uStack_348;
              sVar9 = asStack_350[0];
              cVar7 = *pcVar20;
              while (cVar7 < '\0') {
                pcVar20 = (char *)*puVar23;
                if (((((pcVar20[0xc] & 10U) == 0) &&
                     (uVar19 = (ulonglong)*(ushort *)(pcVar20 + 0x10),
                     *(ushort *)(pcVar20 + 0x10) == uVar12)) &&
                    ((*(ushort *)(pcVar20 + 0x12) == uVar35 &&
                     (((*(short *)(pcVar20 + 0x14) == sVar9 && (*(uint *)(pcVar20 + 0x18) == uVar16)
                       ) && (*(int *)(pcVar20 + 0x1c) == -1)))))) &&
                   ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))) {
                  uVar40 = (ulonglong)*(ushort *)(pcVar20 + 2);
                  cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar40,3);
                  if (cVar7 != '\0') {
                    uStack_3b8 = 0x23;
                    cVar7 = FUN_140abd3a0(uVar40 & 0xffff,uVar19 & 0xffff,1,0xffffffff);
                    if (cVar7 == '\0') {
                      func_0x00014006f410(&lStack_1f0,&puStack_328);
                    }
                  }
                }
                puVar23 = puVar23 + 1;
                iVar14 = iVar14 + 1;
                puStack_328 = (undefined8 *)CONCAT44(puStack_328._4_4_,iVar14);
                puStack_2e0 = puVar23;
                pcVar20 = (char *)func_0x00014006ee20(&puStack_2e0,&uStack_31c);
                lVar36 = lStack_2d8;
                iVar43 = iStack_32c;
                cVar7 = *pcVar20;
              }
              if (lStack_1e8 - lStack_1f0 >> 2 != 0) {
                do {
                  iVar14 = FUN_140071f30(lStack_1e8 - lStack_1f0 >> 2);
                  lVar29 = (longlong)*(int *)(lStack_1f0 + (longlong)iVar14 * 4) * 8;
                  sVar9 = func_0x000140abd500(*(undefined2 *)
                                               (*(longlong *)
                                                 (lVar29 + *(longlong *)(param_1 + 0x15c)) + 2));
                  iVar14 = FUN_140071f30(100);
                } while (sVar9 <= iVar14);
                FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
                lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
                lStack_3a8 = lStack_3a0 + 0x10;
                lVar29 = *(longlong *)(*(longlong *)(param_1 + 0xa13c) + lVar36 * 8);
                uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
                uStack_3b8 = CONCAT22(uStack_3b8._2_2_,*(undefined2 *)(lVar29 + 0xc));
                FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),*(undefined2 *)(lVar29 + 8),
                              *(undefined2 *)(lVar29 + 10));
                uVar12 = uStack_330;
              }
              FUN_14006f750(&lStack_1f0);
            }
            if ((iVar43 < 0x1e) && (iVar43 * 2 < (int)uStack_368)) {
              asStack_2fc[0] = -30000;
              auStack_2f8[0] = 0x8ad0;
              auStack_2e8[0] = 0x8ad0;
              do {
                iVar43 = FUN_140071f30(*(longlong *)(param_1 + 0xa14c) -
                                       *(longlong *)(param_1 + 0xa148) >> 3);
                lVar29 = (longlong)iVar43 * 8;
                cVar7 = (**(code **)(**(longlong **)(lVar29 + *(longlong *)(param_1 + 0xa148)) +
                                    0x170))();
                if (cVar7 == '\0') goto LAB_140ab7ad6;
                uVar16 = *(uint *)(*(longlong *)(lVar29 + *(longlong *)(param_1 + 0xa148)) + 0x10);
              } while (((uVar16 & 0x400c18) != 0) || ((uVar16 & 0x20) != 0));
              FUN_140c8baa0(*(longlong *)(lVar29 + *(longlong *)(param_1 + 0xa148)),asStack_2fc,
                            auStack_2f8,auStack_2e8);
              stockpile_preservation_eligibility
                        (*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0xa148)),1);
LAB_140ab7ad6:
              uVar11 = auStack_2e8[0];
              uVar10 = auStack_2f8[0];
              puStack_2e0 = (undefined8 *)CONCAT62(puStack_2e0._2_6_,asStack_2fc[0]);
              iStack_32c = CONCAT22(iStack_32c._2_2_,auStack_2f8[0]);
              puStack_328 = (undefined8 *)CONCAT62(puStack_328._2_6_,auStack_2e8[0]);
              if (asStack_2fc[0] != -30000) {
                uStack_3b0 = CONCAT62(uStack_3b0._2_6_,auStack_2e8[0]);
                uStack_3b8 = CONCAT22(uStack_3b8._2_2_,auStack_2f8[0]);
                FUN_14007dcd0(param_1,&puStack_2d0,auStack_258,asStack_2fc[0]);
                lStack_1d8 = 0;
                lStack_1d0 = 0;
                uStack_1c8 = 0;
                puVar24 = *(ushort **)(param_1 + 0x15c);
                lStack_2d8 = *(longlong *)(param_1 + 0x160);
                sVar37 = 0;
                asStack_374[0] = 0;
                puStack_360 = puVar24;
                pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_31b);
                uVar16 = uStack_348;
                sVar9 = asStack_350[0];
                uVar35 = auStack_370[0];
                if (*pcVar20 < '\0') {
                  do {
                    pcVar20 = *(char **)puVar24;
                    if (((((pcVar20[0xc] & 10U) == 0) &&
                         (uVar19 = (ulonglong)*(ushort *)(pcVar20 + 0x10),
                         *(ushort *)(pcVar20 + 0x10) == uVar12)) &&
                        (*(ushort *)(pcVar20 + 0x12) == uVar35)) &&
                       (((*(short *)(pcVar20 + 0x14) == sVar9 &&
                         (*(uint *)(pcVar20 + 0x18) == uVar16)) &&
                        ((*(int *)(pcVar20 + 0x1c) == -1 &&
                         ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))))))) {
                      uVar40 = (ulonglong)*(ushort *)(pcVar20 + 2);
                      cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar40,5);
                      if (cVar7 != '\0') {
                        uStack_3b8 = 0xffffffff;
                        cVar7 = FUN_140abd3a0(uVar40 & 0xffff,uVar19 & 0xffff,1,0xffffffff);
                        if (cVar7 == '\0') {
                          func_0x00014006f4f0(&lStack_1d8,asStack_374);
                        }
                      }
                    }
                    puVar24 = puVar24 + 4;
                    sVar37 = sVar37 + 1;
                    asStack_374[0] = sVar37;
                    puStack_360 = puVar24;
                    pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_31b);
                  } while (*pcVar20 < '\0');
                  uVar10 = (short)iStack_32c;
                  uVar11 = (short)puStack_328;
                }
                if (lStack_1d0 - lStack_1d8 >> 1 != 0) {
                  do {
                    iVar43 = FUN_140071f30(lStack_1d0 - lStack_1d8 >> 1);
                    lVar29 = (longlong)*(short *)(lStack_1d8 + (longlong)iVar43 * 2) * 8;
                    sVar9 = func_0x000140abd500(*(undefined2 *)
                                                 (*(longlong *)
                                                   (lVar29 + *(longlong *)(param_1 + 0x15c)) + 2));
                    iVar43 = FUN_140071f30(100);
                  } while (sVar9 <= iVar43);
                  FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
                  lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
                  lStack_3a8 = lStack_3a0 + 0x10;
                  uStack_3b0 = CONCAT44(uStack_3b0._4_4_,2);
                  uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar11);
                  FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),
                                (ulonglong)puStack_2e0 & 0xffff,uVar10);
                }
                FUN_14006f7b0(&lStack_1d8);
              }
            }
          }
          lVar29 = *(longlong *)(apuStack_288[0] + 0x14);
          lVar36 = *(longlong *)(apuStack_288[0] + 0x18) - lVar29 >> 1;
          iVar43 = (int)lVar36 * 5;
          puStack_2e0 = (undefined8 *)CONCAT44(puStack_2e0._4_4_,iVar43);
          asStack_374[0] = 0;
          if (lVar36 != 0) {
            uVar19 = 0;
            puVar24 = apuStack_288[0];
            iVar14 = (int)uStack_340;
            do {
              if (iVar14 < iVar43) {
                uVar18 = FUN_140071f30(0x30);
                sVar45 = (short)uVar18 + (*(short *)(lVar29 + uVar19 * 2) - param_1[0x8b5fc]) * 0x30
                ;
                iStack_32c = CONCAT22((short)((uint)uVar18 >> 0x10),sVar45);
                lVar29 = *(longlong *)(puVar24 + 0x20);
                sVar9 = FUN_140071f30(0x30);
                sVar9 = (*(short *)(lVar29 + uVar19 * 2) - param_1[0x8b5fe]) * 0x30 + sVar9;
                psVar1 = (short *)(*(longlong *)(puVar24 + 0x2c) + uVar19 * 2);
                sVar37 = FUN_140071f30(((int)*(short *)(*(longlong *)(puVar24 + 0x38) + uVar19 * 2)
                                       - (int)*psVar1) + 1);
                sVar37 = sVar37 + *psVar1;
                uStack_340 = (undefined8 *)CONCAT44(uStack_340._4_4_,iVar14 + 1);
                lStack_1c0 = 0;
                lStack_1b8 = 0;
                iVar43 = 0;
                uStack_1b0 = 0;
                puVar24 = *(ushort **)(param_1 + 0x15c);
                lStack_2d8 = *(longlong *)(param_1 + 0x160);
                puStack_328 = (undefined8 *)((ulonglong)puStack_328 & 0xffffffff00000000);
                puStack_360 = puVar24;
                pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_31a);
                cVar7 = *pcVar20;
                while (cVar7 < '\0') {
                  pcVar20 = *(char **)puVar24;
                  if ((((((pcVar20[0xc] & 10U) == 0) && (*(ushort *)(pcVar20 + 0x10) == uStack_330))
                       && (*(ushort *)(pcVar20 + 0x12) == auStack_370[0])) &&
                      ((*(short *)(pcVar20 + 0x14) == asStack_350[0] &&
                       (*(uint *)(pcVar20 + 0x18) == uStack_348)))) &&
                     ((*(int *)(pcVar20 + 0x1c) == -1 &&
                      ((*(int *)(pcVar20 + 4) != 0 && (*pcVar20 == '\x01')))))) {
                    uVar19 = (ulonglong)*(ushort *)(pcVar20 + 2);
                    cVar7 = func_0x0001400e35c0(param_1 + 0x8daac,uVar19,4);
                    if (cVar7 != '\0') {
                      uStack_3b0 = CONCAT62(uStack_3b0._2_6_,sVar37);
                      uStack_3b8 = CONCAT22(uStack_3b8._2_2_,sVar9);
                      cVar7 = FUN_1414c95a0(param_1,uVar19 & 0xffff,0xffffffff,sVar45);
                      if (cVar7 != '\0') {
                        uStack_3b8 = 0x23;
                        cVar7 = FUN_140abd3a0(*(undefined2 *)(pcVar20 + 2),
                                              *(undefined2 *)(pcVar20 + 0x10),1,0xffffffff);
                        if (cVar7 == '\0') {
                          func_0x00014006f410(&lStack_1c0,&puStack_328);
                        }
                      }
                    }
                  }
                  puVar24 = puVar24 + 4;
                  iVar43 = iVar43 + 1;
                  puStack_328 = (undefined8 *)CONCAT44(puStack_328._4_4_,iVar43);
                  puStack_360 = puVar24;
                  pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_31a);
                  cVar7 = *pcVar20;
                }
                if (lStack_1b8 - lStack_1c0 >> 2 != 0) {
                  do {
                    iVar43 = FUN_140071f30(lStack_1b8 - lStack_1c0 >> 2);
                    lVar29 = (longlong)*(int *)(lStack_1c0 + (longlong)iVar43 * 4) * 8;
                    sVar45 = func_0x000140abd500(*(undefined2 *)
                                                  (*(longlong *)
                                                    (lVar29 + *(longlong *)(param_1 + 0x15c)) + 2));
                    iVar43 = FUN_140071f30(100);
                  } while (sVar45 <= iVar43);
                  FUN_141435fb0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x15c)));
                  lStack_3a0 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x15c));
                  lStack_3a8 = lStack_3a0 + 0x10;
                  uStack_3b0 = CONCAT44(uStack_3b0._4_4_,1);
                  uStack_3b8 = CONCAT22(uStack_3b8._2_2_,sVar37);
                  FUN_1414c6320(param_1,*(undefined2 *)(lStack_3a0 + 2),iStack_32c,sVar9);
                }
                FUN_14006f750(&lStack_1c0);
                puVar24 = apuStack_288[0];
                iVar43 = (int)puStack_2e0;
                iVar14 = (int)uStack_340;
              }
              asStack_374[0] = asStack_374[0] + 1;
              lVar29 = *(longlong *)(puVar24 + 0x14);
              uVar19 = (ulonglong)asStack_374[0];
            } while (uVar19 < (ulonglong)(*(longlong *)(puVar24 + 0x18) - lVar29 >> 1));
          }
        }
        auStack_378[0] = auStack_378[0] + 1;
        lVar29 = *(longlong *)(param_1 + 0x136e00);
        uVar19 = (ulonglong)(short)auStack_378[0];
      } while (uVar19 < (ulonglong)(*(longlong *)(param_1 + 0x136e04) - lVar29 >> 3));
    }
    iVar14 = 0;
    iVar43 = FUN_140071f30(100);
    if (iVar43 == 0) {
      plStack_310 = (longlong *)CONCAT44(plStack_310._4_4_,*(int *)(param_1 + 0x8b5f6));
      iVar43 = *(int *)(param_1 + 0x8b5f8);
      uStack_368 = CONCAT44(uStack_368._4_4_,iVar43);
      iVar15 = iVar43 * *(int *)(param_1 + 0x8b5f6);
      uVar10 = FUN_140071f30(iVar43);
      uVar11 = FUN_140071f30(*(undefined4 *)(param_1 + 0x8b5f6));
      uStack_3b0 = uStack_3b0 & 0xffffffffffff0000;
      uStack_3b8 = CONCAT22(uStack_3b8._2_2_,uVar10);
      FUN_14007dcd0(param_1,&iStack_32c,&puStack_328,uVar11);
      lStack_1a8 = 0;
      lStack_1a0 = 0;
      uStack_198 = 0;
      puVar24 = *(ushort **)(param_1 + 0x15c);
      apuStack_288[0] = *(ushort **)(param_1 + 0x160);
      uStack_340 = (undefined8 *)((ulonglong)uStack_340 & 0xffffffff00000000);
      puStack_360 = puVar24;
      pcVar20 = (char *)func_0x00014006ee20(&puStack_360,auStack_317,apuStack_288);
      if (*pcVar20 < '\0') {
        sVar37 = (short)puStack_328;
        sVar9 = (short)iStack_32c;
        do {
          pcVar20 = *(char **)puVar24;
          if (((((pcVar20[0xc] & 10U) == 0) && (*(short *)(pcVar20 + 0x10) == sVar9)) &&
              (*(short *)(pcVar20 + 0x12) == sVar37)) &&
             (((*(short *)(pcVar20 + 0x14) == -1 && (*(int *)(pcVar20 + 0x18) == -1)) &&
              ((*(int *)(pcVar20 + 0x1c) == -1 && (*(int *)(pcVar20 + 4) != 0)))))) {
            uStack_3b8 = 0xffffffff;
            cVar7 = FUN_140abd3a0(*(undefined2 *)(pcVar20 + 2),*(short *)(pcVar20 + 0x10),1,
                                  0xffffffff);
            if ((cVar7 == '\0') && (*pcVar20 == '\x04')) {
              func_0x00014006f410(&lStack_1a8,&uStack_340);
            }
          }
          puVar24 = puVar24 + 4;
          iVar14 = iVar14 + 1;
          uStack_340 = (undefined8 *)CONCAT44(uStack_340._4_4_,iVar14);
          puStack_360 = puVar24;
          pcVar20 = (char *)func_0x00014006ee20(&puStack_360,auStack_317,apuStack_288);
          param_1 = puStack_2f0;
        } while (*pcVar20 < '\0');
      }
      if (lStack_1a0 - lStack_1a8 >> 2 != 0) {
        do {
          iVar43 = FUN_140071f30(lStack_1a0 - lStack_1a8 >> 2);
          lVar29 = (longlong)*(int *)(lStack_1a8 + (longlong)iVar43 * 4);
          lStack_2d8 = lVar29;
          sVar9 = func_0x000140abd500(*(undefined2 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x15c) + lVar29 * 8) +
                                       2));
          iVar43 = FUN_140071f30(100);
        } while (sVar9 <= iVar43);
        sVar9 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x15c) + lVar29 * 8) + 2);
        uVar8 = func_0x0001406dcfb0(param_1 + 0x8daac,sVar9);
        asStack_374[0] = CONCAT11(asStack_374[0]._1_1_,uVar8);
        puStack_360 = _DAT_1423d1598;
        apuStack_288[0] = _DAT_1423d15a0;
        puVar24 = _DAT_1423d1598;
        pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_318,apuStack_288);
        cVar7 = *pcVar20;
        uVar18 = (int)uStack_368;
        puVar25 = puVar24;
        sVar37 = 0;
        while (cVar7 < '\0') {
          sVar45 = sVar37 + 1;
          if (**(short **)puVar24 != sVar9) {
            puVar24 = puVar25;
            sVar45 = sVar37;
          }
          puVar24 = puVar24 + 4;
          puVar25 = puVar24;
          puStack_360 = puVar24;
          pcVar20 = (char *)func_0x00014006ee20(&puStack_360,&uStack_318,apuStack_288);
          sVar37 = sVar45;
          cVar7 = *pcVar20;
        }
        if (sVar37 < (short)((((short)(iVar15 / 10000) + (short)(iVar15 >> 0x1f)) -
                             (short)((longlong)iVar15 * 0x68db8bad >> 0x3f)) + 2)) {
          auStack_378[0] = 0;
          do {
            iVar43 = 0;
            sVar9 = FUN_140071f30((ulonglong)plStack_310 & 0xffffffff);
            sVar37 = FUN_140071f30(uVar18);
            sVar45 = FUN_14149fb70(param_1,sVar9,sVar37);
            uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
            uStack_3b8 = uStack_3b8 & 0xffffff00;
            cVar7 = FUN_1414adea0(param_1,sVar9,sVar37,sVar45);
            if ((cVar7 == '\0') ||
               (((char)asStack_374[0] != '\0' &&
                (uVar16 = func_0x00014007dc40(param_1,sVar9,sVar37,sVar45), (uVar16 >> 0xf & 1) == 0
                )))) {
              bVar34 = false;
            }
            else {
              bVar34 = true;
            }
            uVar10 = func_0x000140067f80(param_1,sVar9,sVar37,sVar45);
            cVar7 = func_0x0001407dd390(uVar10);
            if (cVar7 == '\0') {
              uVar10 = func_0x000140067f80(param_1,sVar9,sVar37);
              cVar7 = func_0x000140247a10(uVar10);
              if (cVar7 != '\0') goto LAB_140ab83a2;
            }
            else {
LAB_140ab83a2:
              if (bVar34) {
                plVar44 = *(longlong **)(param_1 + 0x48);
                uVar19 = *(longlong *)(param_1 + 0x4c) - (longlong)plVar44 >> 3;
                if (uVar19 == 0) {
LAB_140ab8403:
                  if (sVar9 != -30000) {
                    puVar21 = (undefined2 *)FUN_1405c1410();
                    lVar29 = lStack_2d8;
                    puVar21[2] = sVar9;
                    puVar21[3] = sVar37;
                    puVar21[4] = sVar45;
                    *puVar21 = *(undefined2 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x15c) + lStack_2d8 * 8) + 2)
                    ;
                    puVar21[1] = 0xffff;
                    *(bool *)(puVar21 + 5) = _DAT_14189c298 == 0;
                    puVar21[6] = 0xffff;
                    puVar21[0x1c] = 4;
                    iVar43 = FUN_140071f30(0x2711);
                    *(int *)(puVar21 + 0xe) = iVar43 + 10000;
                    *(uint *)(puVar21 + 0xc) = *(uint *)(puVar21 + 0xc) | 2;
                    lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x15c) + lVar29 * 8);
                    uVar18 = *(undefined4 *)(lVar29 + 0x14);
                    uVar5 = *(undefined4 *)(lVar29 + 0x18);
                    uVar6 = *(undefined4 *)(lVar29 + 0x1c);
                    *(undefined4 *)(puVar21 + 0x10) = *(undefined4 *)(lVar29 + 0x10);
                    *(undefined4 *)(puVar21 + 0x12) = uVar18;
                    *(undefined4 *)(puVar21 + 0x14) = uVar5;
                    *(undefined4 *)(puVar21 + 0x16) = uVar6;
                    *(undefined8 *)(puVar21 + 0x18) = *(undefined8 *)(lVar29 + 0x20);
                    FUN_140a43700(puVar21);
                  }
                  break;
                }
                while ((lVar29 = *plVar44, (*(byte *)(lVar29 + 0x18) & 2) == 0 ||
                       (sVar13 = FUN_1400721e0(*(short *)(lVar29 + 4) - sVar9,
                                               *(short *)(lVar29 + 6) - sVar37,
                                               *(short *)(lVar29 + 8) - sVar45), 0x13 < sVar13))) {
                  iVar43 = iVar43 + 1;
                  plVar44 = plVar44 + 1;
                  if (uVar19 <= (ulonglong)(longlong)iVar43) goto LAB_140ab8403;
                }
              }
            }
            auStack_378[0] = auStack_378[0] + 1;
            if (99 < (short)auStack_378[0]) break;
            uVar18 = (int)uStack_368;
          } while( true );
        }
      }
      FUN_14006f750(&lStack_1a8);
    }
    puVar24 = _DAT_1423d15a0;
    uVar19 = 0;
    for (puVar25 = _DAT_1423d1598; param_1 = puStack_2f0, plVar44 = _DAT_1423e5cc8,
        plVar26 = _DAT_1423e5cc0, puVar25 < puVar24; puVar25 = puVar25 + 4) {
      iVar43 = FUN_140071f30(0xf);
      if (iVar43 == 0) {
        puVar21 = *(undefined2 **)puVar25;
        lStack_278 = 0;
        lStack_270 = 0;
        uStack_268 = 0;
        lStack_3a8 = CONCAT44(lStack_3a8._4_4_,0xffffffff);
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,0x97);
        uStack_3b8 = uStack_3b8 & 0xffffff00;
        FUN_140702470(0x1424eca48,*puVar21,&lStack_278,0xffffffff);
        if ((lStack_270 - lStack_278 & 0xfffffffffffffffeU) != 0) {
          puVar22 = (undefined2 *)FUN_1405c1410();
          puVar22[2] = puVar21[2];
          puVar22[3] = puVar21[3];
          puVar22[4] = puVar21[4];
          *puVar22 = *puVar21;
          if (puVar21[1] == -1) {
            lStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            FUN_14006f380(&lStack_e8,lStack_270 - lStack_278 >> 1);
            lVar29 = func_0x0001400bba60(0x1424eca48,*puVar22);
            uVar40 = uVar19;
            uVar41 = uVar19;
            uVar42 = uVar19;
            if (lStack_270 - lStack_278 >> 1 != 0) {
              do {
                *(undefined4 *)(lStack_e8 + uVar40) =
                     *(undefined4 *)
                      (*(longlong *)(lVar29 + 400) + (longlong)*(short *)(lStack_278 + uVar41) * 4);
                uVar16 = (int)uVar42 + 1;
                uVar40 = uVar40 + 4;
                uVar41 = uVar41 + 2;
                uVar42 = (ulonglong)uVar16;
              } while ((ulonglong)(longlong)(int)uVar16 < (ulonglong)(lStack_270 - lStack_278 >> 1))
              ;
            }
            iVar43 = FUN_14013d0a0(&lStack_e8);
            puVar22[1] = *(undefined2 *)(lStack_278 + (longlong)iVar43 * 2);
            FUN_14006f750(&lStack_e8);
          }
          else {
            puVar22[1] = puVar21[1];
          }
          *(undefined1 *)(puVar22 + 5) = 0;
          iVar43 = func_0x000140a45370(puVar22);
          puVar22[6] = (short)(3000 / (longlong)iVar43);
          uVar18 = *(undefined4 *)(puVar21 + 0x12);
          uVar5 = *(undefined4 *)(puVar21 + 0x14);
          uVar6 = *(undefined4 *)(puVar21 + 0x16);
          *(undefined4 *)(puVar22 + 0x10) = *(undefined4 *)(puVar21 + 0x10);
          *(undefined4 *)(puVar22 + 0x12) = uVar18;
          *(undefined4 *)(puVar22 + 0x14) = uVar5;
          *(undefined4 *)(puVar22 + 0x16) = uVar6;
          *(undefined8 *)(puVar22 + 0x18) = *(undefined8 *)(puVar21 + 0x18);
          puVar22[0x1c] = 8;
          *(undefined4 *)(puVar22 + 0xe) = 1;
          *(uint *)(puVar22 + 0xc) = *(uint *)(puVar22 + 0xc) | 8;
          FUN_140a43700(puVar22,3000 % (longlong)iVar43 & 0xffffffff);
        }
        FUN_14006f7b0(&lStack_278);
      }
    }
    while (plVar26 < plVar44) {
      uVar16 = FUN_140eb68b0();
      if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
          0x8888889) {
        lVar29 = *plVar26;
        lStack_2b8 = 0;
        puStack_2b0 = (ushort *)0x0;
        puStack_2a8 = (ushort *)0x0;
        sVar9 = *(short *)(lVar29 + 0xb8);
        if ((sVar9 < 0) ||
           ((ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) <= (ulonglong)(longlong)sVar9)) {
LAB_140ab87bd:
          puVar24 = (ushort *)0x0;
        }
        else {
          lVar36 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar9 * 8);
          uVar12 = (short)((longlong)
                           (ulonglong)(uint)(*(int *)(lVar36 + 0x180) - *(int *)(lVar36 + 0x178)) >>
                          3) - 1;
          auStack_378[0] = uVar12;
          if ((short)uVar12 < 0) goto LAB_140ab87bd;
          puVar24 = (ushort *)0x0;
          do {
            lVar27 = *(longlong *)(*(longlong *)(lVar36 + 0x178) + (ulonglong)uVar12 * 8);
            if ((0x12 < *(int *)(lVar27 + 0x6b0)) &&
               (*(char *)(*(longlong *)(lVar27 + 0x6a8) + 0x12) < '\0')) {
              if (puVar24 == puStack_2a8) {
                auStack_378[0] = uVar12;
                FUN_140071040(&lStack_2b8,puVar24,auStack_378);
                puVar24 = puStack_2b0;
              }
              else {
                *puVar24 = uVar12;
                puStack_2b0 = puStack_2b0 + 1;
                puVar24 = puStack_2b0;
              }
            }
            uVar12 = uVar12 - 1;
            auStack_378[0] = uVar12;
          } while (-1 < (short)uVar12);
        }
        if (((longlong)puVar24 - lStack_2b8 & 0xfffffffffffffffeU) != 0) {
          auStack_34c[0] = 0x8ad0;
          if ((*(uint *)(lVar29 + 0x10) & 0x10) == 0) {
            if ((*(uint *)(lVar29 + 0x10) & 8) == 0) {
              auStack_34c[0] = *(ushort *)(lVar29 + 8);
              auStack_334[0] = *(ushort *)(lVar29 + 10);
              auStack_338[0] = *(ushort *)(lVar29 + 0xc);
            }
            else {
              puVar2 = *(undefined8 **)(lVar29 + 0x40);
              for (puVar23 = *(undefined8 **)(lVar29 + 0x38); puVar23 < puVar2;
                  puVar23 = puVar23 + 1) {
                iVar43 = (**(code **)(*(longlong *)*puVar23 + 0x10))();
                if (iVar43 == 0xb) {
                  lVar36 = (**(code **)(*(longlong *)*puVar23 + 0x18))();
                  if (lVar36 != 0) {
                    FUN_140c8baa0(lVar36,auStack_34c,auStack_334,auStack_338);
                    goto LAB_140ab8908;
                  }
                }
                else if ((iVar43 == 0x12) &&
                        (lVar36 = (**(code **)(*(longlong *)*puVar23 + 0x20))(), lVar36 != 0)) {
                  FUN_141367430(lVar36,auStack_34c,auStack_334,auStack_338);
                  goto LAB_140ab8908;
                }
              }
              for (puVar23 = *(undefined8 **)(lVar29 + 0x20);
                  puVar23 < *(undefined8 **)(lVar29 + 0x28); puVar23 = puVar23 + 1) {
                if (*(int *)*puVar23 == 7) {
                  lVar36 = *(longlong *)((int *)*puVar23 + 2);
                  auStack_34c[0] = *(ushort *)(lVar36 + 4);
                  auStack_334[0] = *(ushort *)(lVar36 + 6);
                  auStack_338[0] = *(ushort *)(lVar36 + 8);
                  break;
                }
              }
            }
          }
LAB_140ab8908:
          puVar24 = (ushort *)FUN_1405c1410();
          puVar24[2] = auStack_34c[0];
          puVar24[3] = auStack_334[0];
          puVar24[4] = auStack_338[0];
          *puVar24 = *(ushort *)(lVar29 + 0xb8);
          if (*(ushort *)(lVar29 + 0xba) == 0xffff) {
            lStack_d0 = 0;
            uStack_c8 = 0;
            uVar19 = 0;
            uStack_c0 = 0;
            FUN_14006f380(&lStack_d0,(longlong)puStack_2b0 - lStack_2b8 >> 1);
            lVar29 = func_0x0001400bba60(0x1424eca48,*puVar24);
            uVar40 = uVar19;
            uVar41 = uVar19;
            if ((longlong)puStack_2b0 - lStack_2b8 >> 1 != 0) {
              do {
                *(undefined4 *)(lStack_d0 + uVar19) =
                     *(undefined4 *)
                      (*(longlong *)(lVar29 + 400) + (longlong)*(short *)(lStack_2b8 + uVar40) * 4);
                uVar16 = (int)uVar41 + 1;
                uVar19 = uVar19 + 4;
                uVar40 = uVar40 + 2;
                uVar41 = (ulonglong)uVar16;
              } while ((ulonglong)(longlong)(int)uVar16 <
                       (ulonglong)((longlong)puStack_2b0 - lStack_2b8 >> 1));
            }
            iVar43 = FUN_14013d0a0(&lStack_d0);
            puVar24[1] = *(ushort *)(lStack_2b8 + (longlong)iVar43 * 2);
            FUN_14006f750(&lStack_d0);
          }
          else {
            puVar24[1] = *(ushort *)(lVar29 + 0xba);
          }
          *(undefined1 *)(puVar24 + 5) = 0;
          iVar43 = func_0x000140a45370(puVar24);
          puVar24[6] = (ushort)(3000 / (longlong)iVar43);
          puVar24[0x1c] = 8;
          puVar24[0xe] = 1;
          puVar24[0xf] = 0;
          *(uint *)(puVar24 + 0xc) = *(uint *)(puVar24 + 0xc) | 8;
          if ((puVar24[0xc] & 2) != 0) {
            puStack_2f0 = puVar24;
            if (_DAT_1423d15a0 == _DAT_1423d15a8) {
              FUN_140070bd0(&DAT_1423d1598,_DAT_1423d15a0,&puStack_2f0);
            }
            else {
              *(ushort **)_DAT_1423d15a0 = puVar24;
              _DAT_1423d15a0 = _DAT_1423d15a0 + 4;
            }
          }
          FUN_14006f7b0(&lStack_2b8);
          goto LAB_140ab8a6f;
        }
        if (lStack_2b8 == 0) goto LAB_140ab8a6f;
        uVar19 = ((longlong)puStack_2a8 - lStack_2b8 >> 1) * 2;
        if (0xfff < uVar19) {
          uVar19 = uVar19 + 0x27;
          uVar40 = *(ulonglong *)(lStack_2b8 + -8);
          if (0x1f < (lStack_2b8 - uVar40) - 8) goto LAB_140abab59;
        }
        func_0x000141539680();
        lStack_2b8 = 0;
        puStack_2b0 = (ushort *)0x0;
        puStack_2a8 = (ushort *)0x0;
        plVar26 = plVar26 + 1;
      }
      else {
LAB_140ab8a6f:
        plVar26 = plVar26 + 1;
      }
    }
  }
  uVar16 = (int)(*(longlong *)(param_1 + 0x4c) - *(longlong *)(param_1 + 0x48) >> 3) - 1;
  uStack_368 = (ulonglong)uVar16;
  if ((int)uVar16 < 0) {
LAB_140aba260:
    iVar43 = (int)(*(longlong *)(param_1 + 0xa3ec) - *(longlong *)(param_1 + 0xa3e8) >> 3) + -1;
    if (-1 < iVar43) {
      lVar29 = (longlong)iVar43;
      do {
        plVar44 = *(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
        if ((*(uint *)(plVar44 + 2) & 0xc10) != 0) goto LAB_140abab1f;
        sVar9 = (**(code **)(*plVar44 + 0x18))();
        sVar37 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8) + 0x10))
                           ();
        if (((-1 < sVar37) &&
            ((ulonglong)(longlong)sVar37 <
             (ulonglong)(*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3)))
           && (-1 < sVar9)) {
          lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + (longlong)sVar37 * 8);
          lVar27 = *(longlong *)(lVar36 + 0x178);
          if ((ulonglong)(longlong)sVar9 < (ulonglong)(*(longlong *)(lVar36 + 0x180) - lVar27 >> 3))
          {
            lVar36 = *(longlong *)(lVar27 + (longlong)sVar9 * 8);
            if ((*(int *)(lVar36 + 0x6b0) < 4) ||
               ((*(byte *)(*(longlong *)(lVar36 + 0x6a8) + 3) & 0x20) == 0)) {
              bVar34 = false;
            }
            else {
              bVar34 = true;
            }
            if (bVar34) {
              lVar36 = *(longlong *)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
              iVar43 = *(int *)(lVar36 + 0xbc);
              if (0 < iVar43) {
                *(int *)(lVar36 + 0xbc) = iVar43 + -1;
              }
            }
          }
        }
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
        if ((*(byte *)(lVar36 + 0x10) & 0x28) == 0) {
LAB_140aba8f2:
          lVar36 = 0;
          plVar44 = *(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
          if ((*(byte *)(plVar44 + 2) & 0x20) == 0) {
            sVar9 = (**(code **)(*plVar44 + 0x18))();
            sVar37 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8) +
                                 0x10))();
            if (((-1 < sVar37) &&
                ((ulonglong)(longlong)sVar37 <
                 (ulonglong)
                 (*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3))) &&
               (-1 < sVar9)) {
              lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + (longlong)sVar37 * 8);
              lVar3 = *(longlong *)(lVar27 + 0x178);
              if ((ulonglong)(longlong)sVar9 <
                  (ulonglong)(*(longlong *)(lVar27 + 0x180) - lVar3 >> 3)) {
                lVar27 = *(longlong *)(lVar3 + (longlong)sVar9 * 8);
                if ((*(int *)(lVar27 + 0x6b0) < 1) || ((**(byte **)(lVar27 + 0x6a8) & 2) == 0)) {
                  bVar34 = false;
                }
                else {
                  bVar34 = true;
                }
                if (bVar34) {
                  puVar24 = *(ushort **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
                  puVar2 = *(undefined8 **)(puVar24 + 0x20);
                  for (puVar23 = *(undefined8 **)(puVar24 + 0x1c); puVar23 < puVar2;
                      puVar23 = puVar23 + 1) {
                    iVar43 = (**(code **)(*(longlong *)*puVar23 + 0x10))();
                    if (iVar43 == 0xb) {
                      lVar36 = (**(code **)(*(longlong *)*puVar23 + 0x18))();
                      if ((lVar36 != 0) && (cVar7 = FUN_140544f70(lVar36), cVar7 != '\0'))
                      goto LAB_140abab1f;
                      break;
                    }
                  }
                  (**(code **)(*(longlong *)puVar24 + 0x270))(puVar24);
                  iVar43 = (**(code **)(*(longlong *)puVar24 + 0x260))(puVar24);
                  if (20000 < iVar43) {
                    uVar18 = (**(code **)(*(longlong *)puVar24 + 0x18))(puVar24);
                    uVar10 = (**(code **)(*(longlong *)puVar24 + 0x10))(puVar24);
                    uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
                    uStack_3b8 = 0xffffffff;
                    plVar44 = (longlong *)FUN_140c9a510(0x32,0xffffffff,uVar10,uVar18);
                    uVar18 = (**(code **)(*(longlong *)puVar24 + 0x478))(puVar24);
                    *(undefined4 *)(plVar44 + 0x10) = uVar18;
                    (**(code **)(*plVar44 + 0x328))(plVar44,1);
                    FUN_140ca6460(plVar44,puVar24);
                    FUN_140ca66e0(plVar44,puVar24);
                    (**(code **)(*plVar44 + 0x4a8))(plVar44,1);
                    puStack_2f0 = puVar24;
                    if ((*(uint *)(puVar24 + 8) & 0x100000) == 0) {
                      FUN_140c634f0(puVar24,0);
                      if (*(int *)(puVar24 + 0x28) != -1) {
                        FUN_140cc83e0(puVar24);
                      }
                      *(uint *)(puVar24 + 8) = *(uint *)(puVar24 + 8) & 0x7fffffff;
                      (**(code **)(*(longlong *)puVar24 + 0x330))(puVar24);
                    }
                    FUN_140284f10(param_1 + 0xa628,apuStack_288,&puStack_2f0);
                    FUN_140c67590(puStack_2f0);
                    if ((lVar36 != 0) && ((*(byte *)(lVar36 + 0x10) & 1) != 0)) {
                      uStack_3b0 = 0;
                      uStack_3b8 = CONCAT31(uStack_3b8._1_3_,1);
                      FUN_140c88d10(lVar36,*(undefined2 *)(lVar36 + 8),*(undefined2 *)(lVar36 + 10),
                                    *(undefined2 *)(lVar36 + 0xc));
                    }
                  }
                }
              }
            }
          }
        }
        else {
          asStack_36c[0] = -30000;
          if ((*(uint *)(lVar36 + 0x10) & 0x10) != 0) goto LAB_140aba8f2;
          if ((*(uint *)(lVar36 + 0x10) & 8) == 0) {
            asStack_36c[0] = *(short *)(lVar36 + 8);
            asStack_354[0] = *(short *)(lVar36 + 10);
            asStack_358[0] = *(short *)(lVar36 + 0xc);
          }
          else {
            puVar2 = *(undefined8 **)(lVar36 + 0x40);
            for (puVar23 = *(undefined8 **)(lVar36 + 0x38); puVar23 < puVar2; puVar23 = puVar23 + 1)
            {
              iVar43 = (**(code **)(*(longlong *)*puVar23 + 0x10))();
              if (iVar43 == 0xb) {
                lVar27 = (**(code **)(*(longlong *)*puVar23 + 0x18))();
                if (lVar27 != 0) {
                  FUN_140c8baa0(lVar27,asStack_36c,asStack_354,asStack_358);
                  goto LAB_140aba437;
                }
              }
              else if ((iVar43 == 0x12) &&
                      (lVar27 = (**(code **)(*(longlong *)*puVar23 + 0x20))(), lVar27 != 0)) {
                FUN_141367430(lVar27,asStack_36c,asStack_354,asStack_358);
                goto LAB_140aba437;
              }
            }
            for (puVar23 = *(undefined8 **)(lVar36 + 0x20);
                puVar23 < *(undefined8 **)(lVar36 + 0x28); puVar23 = puVar23 + 1) {
              if (*(int *)*puVar23 == 7) {
                lVar36 = *(longlong *)((int *)*puVar23 + 2);
                asStack_36c[0] = *(short *)(lVar36 + 4);
                asStack_354[0] = *(short *)(lVar36 + 6);
                asStack_358[0] = *(short *)(lVar36 + 8);
                break;
              }
            }
          }
LAB_140aba437:
          if (asStack_36c[0] == -30000) goto LAB_140aba8f2;
          bVar33 = false;
          bVar34 = false;
          uVar40 = 0;
          puStack_2f0 = (ushort *)0x0;
          auStack_378[0] = 0xffff;
          uStack_368 = CONCAT44(uStack_368._4_4_,0xffffffff);
          lVar27 = *(longlong *)(param_1 + 0xa3e8);
          lVar36 = *(longlong *)(lVar27 + lVar29 * 8);
          uVar19 = uVar40;
          if (*(longlong *)(lVar36 + 0x40) - *(longlong *)(lVar36 + 0x38) >> 3 != 0) {
            do {
              iVar43 = (**(code **)(**(longlong **)
                                      (uVar40 + *(longlong *)
                                                 (*(longlong *)(lVar27 + lVar29 * 8) + 0x38)) + 0x10
                                   ))();
              if ((iVar43 == 0xb) &&
                 (plVar44 = (longlong *)
                            (**(code **)(**(longlong **)
                                           (uVar40 + *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)(param_1 + 0xa3e8) +
                                                        lVar29 * 8) + 0x38)) + 0x18))(),
                 plVar44 != (longlong *)0x0)) {
                uVar10 = (**(code **)*plVar44)(plVar44);
                switch(uVar10) {
                case 0x17:
                case 0x2e:
                case 0x2f:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x48:
                case 0x58:
                  break;
                default:
                  auStack_378[0] = (**(code **)(*plVar44 + 0x10))(plVar44);
                  uVar18 = (**(code **)(*plVar44 + 0x18))(plVar44);
                  uStack_368 = CONCAT44(uStack_368._4_4_,uVar18);
                  bVar34 = bVar33;
                  if ((*(uint *)(plVar44 + 2) & 0x40000) != 0) {
                    bVar33 = true;
                    bVar34 = true;
                  }
                }
              }
              uVar16 = (int)uVar19 + 1;
              uVar40 = uVar40 + 8;
              lVar27 = *(longlong *)(param_1 + 0xa3e8);
              lVar36 = *(longlong *)(lVar27 + lVar29 * 8);
              uVar19 = (ulonglong)uVar16;
            } while ((ulonglong)(longlong)(int)uVar16 <
                     (ulonglong)(*(longlong *)(lVar36 + 0x40) - *(longlong *)(lVar36 + 0x38) >> 3));
          }
          uVar40 = 0;
          lVar36 = *(longlong *)(lVar27 + lVar29 * 8);
          uVar19 = uVar40;
          puVar24 = puStack_2f0;
          if (*(longlong *)(lVar36 + 0x40) - *(longlong *)(lVar36 + 0x38) >> 3 != 0) {
            do {
              iVar43 = (**(code **)(**(longlong **)
                                      (uVar40 + *(longlong *)
                                                 (*(longlong *)(lVar27 + lVar29 * 8) + 0x38)) + 0x10
                                   ))();
              if (iVar43 == 0x13) {
                puVar24 = (ushort *)
                          (**(code **)(**(longlong **)
                                         (uVar40 + *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8)
                                                    + 0x38)) + 0x20))();
              }
              uVar16 = (int)uVar19 + 1;
              uVar40 = uVar40 + 8;
              lVar27 = *(longlong *)(param_1 + 0xa3e8);
              lVar36 = *(longlong *)(lVar27 + lVar29 * 8);
              uVar19 = (ulonglong)uVar16;
            } while ((ulonglong)(longlong)(int)uVar16 <
                     (ulonglong)(*(longlong *)(lVar36 + 0x40) - *(longlong *)(lVar36 + 0x38) >> 3));
          }
          uVar12 = auStack_378[0];
          if (puVar24 == (ushort *)0x0) {
            if ((auStack_378[0] != 0xffff) && (!bVar34)) {
              uVar10 = (**(code **)(**(longlong **)(lVar27 + lVar29 * 8) + 0x18))();
              uVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8) +
                                   0x10))();
              cVar7 = FUN_140a45ee0(uVar11,uVar10,uVar12,uStack_368 & 0xffffffff);
              if (cVar7 != '\0') {
                uStack_70 = 0;
                uStack_68 = 0;
                uStack_60 = 0xf;
                uStack_78 = 0;
                uStack_50 = 0;
                uStack_48 = 0;
                uStack_40 = 0xf;
                ppppuStack_58 = (undefined8 *****)0x0;
                uVar10 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8)
                                     + 0x18))();
                uVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8)
                                     + 0x10))();
                FUN_140a460f0(uVar11,uVar10,&ppppuStack_58);
                FUN_140c65450(*(undefined8 *)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8),
                              &uStack_78,0,0xffffffff);
                FUN_14006fa10(&uStack_78,&UNK_141671e94,5);
                pppppuVar30 = &ppppuStack_58;
                if (0xf < uStack_40) {
                  pppppuVar30 = (undefined8 *****)ppppuStack_58;
                }
                FUN_14006fa10(&uStack_78,pppppuVar30,uStack_48);
                FUN_14006fa10(&uStack_78,&UNK_1416cf140,0x1c);
                uStack_12c = 0;
                uStack_128 = 0x8ad08ad0;
                uStack_124 = 0x8ad0;
                uStack_120 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                uStack_108 = 0xffffffffffffffff;
                uStack_100 = 0xffffffff;
                uStack_fc = 0;
                uStack_f8 = 0xffffffff;
                uStack_138 = 0x60059;
                uStack_134 = 1;
                uStack_11c = 2000;
                sStack_132 = asStack_36c[0];
                sStack_130 = asStack_354[0];
                sStack_12e = asStack_358[0];
                FUN_1400e3c20(0x1424e3850,&uStack_78,&uStack_138);
                FUN_140c634f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8),2);
                plVar44 = *(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
                (**(code **)(*plVar44 + 800))
                          (plVar44,(int)asStack_36c[0],(int)asStack_354[0],(int)asStack_358[0]);
                FUN_14006f850(&ppppuStack_58);
                if (0xf < uStack_60) {
                  uVar19 = uStack_60 + 1;
                  uVar40 = uStack_78;
                  if (0xfff < uVar19) {
                    uVar19 = uStack_60 + 0x28;
                    uVar40 = *(ulonglong *)(uStack_78 - 8);
                    if (0x1f < (uStack_78 - uVar40) - 8) {
LAB_140abab59:
                      _invalid_parameter_noinfo_noreturn(uVar40,uVar19);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  func_0x000141539680(uVar40,uVar19);
                }
                uStack_68 = 0;
                uStack_60 = 0xf;
                uStack_78 = uStack_78 & 0xffffffffffffff00;
                goto LAB_140abab1f;
              }
            }
            goto LAB_140aba8f2;
          }
          if (((*(longlong *)(puVar24 + 0x26c) == 0) ||
              (*(short *)(*(longlong *)(puVar24 + 0x26c) + 0x14) != 0x17)) ||
             (uVar16 = FUN_140eb68b0(),
             0x147ae14 <
             uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff))
          goto LAB_140aba8f2;
          FUN_140c634f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8),2);
          plVar44 = *(longlong **)(*(longlong *)(param_1 + 0xa3e8) + lVar29 * 8);
          (**(code **)(*plVar44 + 800))
                    (plVar44,(int)asStack_36c[0],(int)asStack_354[0],(int)asStack_358[0]);
        }
LAB_140abab1f:
        lVar29 = lVar29 + -1;
      } while (-1 < lVar29);
    }
    FUN_141539660(uStack_38 ^ (ulonglong)auStack_3d8);
    return;
  }
  plVar44 = (longlong *)(longlong)(int)uVar16;
LAB_140ab8aa8:
  iVar43 = (int)uStack_368;
  uVar19 = 0;
  puVar24 = *(ushort **)(*(longlong *)(param_1 + 0x48) + (longlong)plVar44 * 8);
  plStack_310 = plVar44;
  iVar15 = func_0x000140a45370(puVar24);
  iVar14 = _DAT_142387fc4;
  if (_DAT_14189c298 != 0) {
    iVar14 = _DAT_142374734;
  }
  if ((iVar14 + iVar43) % iVar15 != 0) goto LAB_140aba184;
  if ((puVar24[0xc] & 4) == 0) {
LAB_140ab9427:
    uVar16 = FUN_140eb68b0();
    if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
         0x1999999a) && ((puVar24[0xc] & 6) == 0)) {
      *(char *)(puVar24 + 5) = '\x01' - (char)puVar24[5];
    }
    uVar12 = puVar24[1];
    uVar35 = *puVar24;
    if ((((-1 < (short)uVar35) &&
         ((ulonglong)(longlong)(short)uVar35 <
          (ulonglong)(*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3))) &&
        (-1 < (short)uVar12)) &&
       (lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + (longlong)(short)uVar35 * 8),
       lVar36 = *(longlong *)(lVar29 + 0x178),
       (ulonglong)(longlong)(short)uVar12 < (ulonglong)(*(longlong *)(lVar29 + 0x180) - lVar36 >> 3)
       )) {
      lVar29 = *(longlong *)(lVar36 + (longlong)(short)uVar12 * 8);
      if ((*(int *)(lVar29 + 0x6b0) < 4) ||
         ((*(byte *)(*(longlong *)(lVar29 + 0x6a8) + 3) & 1) == 0)) {
        bVar34 = false;
      }
      else {
        bVar34 = true;
      }
      if (bVar34) {
        uVar12 = puVar24[4];
        uVar35 = puVar24[3];
        uVar39 = puVar24[2];
        uVar40 = uVar19;
        if (((-1 < (short)uVar39) && ((int)(short)uVar39 < *(int *)(param_1 + 0x8b5f6))) &&
           ((-1 < (short)uVar35 &&
            ((((int)(short)uVar35 < *(int *)(param_1 + 0x8b5f8) && (-1 < (short)uVar12)) &&
             ((int)(short)uVar12 < *(int *)(param_1 + 0x8b5fa))))))) {
          if ((*(longlong *)(param_1 + 0x8b5dc) != 0) &&
             (lVar29 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8)
                          + ((longlong)(short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8),
             lVar29 != 0)) {
            uVar16 = (int)(short)uVar39 & 0x8000000f;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
            }
            uVar17 = (int)(short)uVar35 & 0x8000000f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
            }
            uVar40 = (ulonglong)
                     *(ushort *)
                      (lVar29 + (((longlong)(int)uVar16 + 5) * 0x10 + (longlong)(int)uVar17) * 2);
          }
        }
        cVar7 = func_0x000140289050(uVar40);
        if (cVar7 == '\0') {
          *(undefined1 *)(puVar24 + 5) = 0;
        }
      }
    }
    uVar16 = FUN_140eb68b0();
    if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
        0x2aaaaaab) {
LAB_140ab97ae:
      if ((puVar24[0xc] & 2) == 0) {
        uVar16 = FUN_140eb68b0();
        sVar37 = (short)((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x2aaaaaab) + -1;
        uVar16 = FUN_140eb68b0();
        sVar45 = (short)((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x2aaaaaab) + -1;
        sVar9 = 0;
        uVar16 = FUN_140eb68b0();
        if (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x2aaaaaab) {
          sVar37 = 0;
          sVar45 = 0;
          uVar16 = FUN_140eb68b0();
          sVar9 = (ushort)(uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                    0x7fffffff >> 0x1e) * 2 + -1;
        }
        uStack_3b0 = CONCAT62(uStack_3b0._2_6_,sVar9 + puVar24[4]);
        uStack_3b8 = CONCAT22(uStack_3b8._2_2_,sVar45 + puVar24[3]);
        cVar7 = FUN_1414c95a0(param_1,*puVar24,puVar24[1],sVar37 + puVar24[2]);
        if (cVar7 != '\0') {
          lStack_3a8 = CONCAT62(lStack_3a8._2_6_,sVar9 + puVar24[4]);
          uStack_3b0 = CONCAT62(uStack_3b0._2_6_,sVar45 + puVar24[3]);
          uStack_3b8 = CONCAT22(uStack_3b8._2_2_,sVar37 + puVar24[2]);
          cVar7 = FUN_1414472e0(param_1);
          if (cVar7 != '\0') {
            uVar12 = puVar24[2];
            puVar24[2] = sVar37 + uVar12;
            puVar24[3] = puVar24[3] + sVar45;
            puVar24[4] = puVar24[4] + sVar9;
            if (*(longlong *)(puVar24 + 8) != 0) {
              *(ushort *)(*(longlong *)(puVar24 + 8) + 8) = sVar37 + uVar12;
              *(ushort *)(*(longlong *)(puVar24 + 8) + 10) = puVar24[3];
              *(ushort *)(*(longlong *)(puVar24 + 8) + 0xc) = puVar24[4];
            }
            cVar7 = func_0x000140a456c0(puVar24);
            if ((((cVar7 != '\0') && (iVar43 = FUN_140071f30(0x14), iVar43 == 0)) &&
                (lVar29 = func_0x0001400bba90(0x1424eca48,*puVar24,puVar24[1]), lVar29 != 0)) &&
               (*(short *)(lVar29 + 0x3ac0) != -1)) {
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,*(undefined4 *)(lVar29 + 0x3ac4));
              uStack_3b8 = CONCAT22(uStack_3b8._2_2_,*(undefined2 *)(lVar29 + 0x3ac0));
              cVar7 = FUN_1414c9d40(param_1,puVar24[2],puVar24[3],puVar24[4]);
              if (cVar7 != '\0') {
                plVar26 = (longlong *)FUN_1408f24c0();
                *(undefined2 *)(plVar26 + 0x17) = *(undefined2 *)(lVar29 + 0x3ac0);
                *(undefined4 *)((longlong)plVar26 + 0xbc) = *(undefined4 *)(lVar29 + 0x3ac4);
                cVar7 = func_0x000140071f90(lVar29 + 0x6a8,0x34);
                if (cVar7 != '\0') {
                  *(undefined1 *)((longlong)plVar26 + 0x144) = 1;
                }
                *(uint *)(plVar26 + 2) = *(uint *)(plVar26 + 2) | 0x200;
                (**(code **)(*plVar26 + 0x328))(plVar26,1);
                (**(code **)(*plVar26 + 800))
                          (plVar26,(int)(short)puVar24[2],(int)(short)puVar24[3],
                           (int)(short)puVar24[4]);
              }
            }
            iVar43 = (int)(*(longlong *)(param_1 + 0xa35c) - *(longlong *)(param_1 + 0xa358) >> 3) +
                     -1;
            if (-1 < iVar43) {
              uVar40 = (ulonglong)puVar24[2];
              lVar29 = (longlong)iVar43;
              plVar26 = (longlong *)(*(longlong *)(param_1 + 0xa358) + lVar29 * 8);
              do {
                lVar36 = *plVar26;
                if (((*(short *)(lVar36 + 8) == (short)uVar40) &&
                    (*(ushort *)(lVar36 + 10) == puVar24[3])) &&
                   ((*(ushort *)(lVar36 + 0xc) == puVar24[4] &&
                    (cVar7 = func_0x000140a45730(puVar24), cVar7 != '\0')))) {
                  cVar7 = func_0x000140a45470(puVar24);
                  if (cVar7 != '\0') {
                    plVar26 = (longlong *)FUN_140545360();
                    *(ushort *)(plVar26 + 0x17) = *puVar24;
                    *(ushort *)((longlong)plVar26 + 0xba) = puVar24[1];
                    *(undefined4 *)(plVar26 + 0x10) = 1;
                    *(uint *)(plVar26 + 2) = *(uint *)(plVar26 + 2) | 0x80000;
                    (**(code **)(*plVar26 + 0x328))(plVar26,1);
                    (**(code **)(*plVar26 + 800))
                              (plVar26,(int)(short)puVar24[2],(int)(short)puVar24[3],
                               (int)(short)puVar24[4]);
                    (**(code **)(*plVar26 + 0x4a8))(plVar26,1);
                  }
                  goto LAB_140aba239;
                }
                plVar26 = plVar26 + -1;
                lVar29 = lVar29 + -1;
              } while (-1 < lVar29);
            }
          }
        }
      }
    }
    else {
      uVar12 = puVar24[4];
      uVar35 = puVar24[3];
      uVar39 = puVar24[2];
      if ((((short)uVar39 < 0) || (*(int *)(param_1 + 0x8b5f6) <= (int)(short)uVar39)) ||
         (((short)uVar35 < 0 ||
          (((*(int *)(param_1 + 0x8b5f8) <= (int)(short)uVar35 || ((short)uVar12 < 0)) ||
           (*(int *)(param_1 + 0x8b5fa) <= (int)(short)uVar12)))))) goto LAB_140ab96a0;
      if (*(longlong *)(param_1 + 0x8b5dc) == 0) {
        uVar12 = puVar24[4];
        uVar35 = puVar24[3];
        uVar39 = puVar24[2];
LAB_140ab96b8:
        if ((((int)(short)uVar39 < *(int *)(param_1 + 0x8b5f6)) && (-1 < (short)uVar35)) &&
           (((int)(short)uVar35 < *(int *)(param_1 + 0x8b5f8) &&
            ((-1 < (short)uVar12 && ((int)(short)uVar12 < *(int *)(param_1 + 0x8b5fa))))))) {
          if ((*(longlong *)(param_1 + 0x8b5dc) != 0) &&
             (lVar29 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8)
                          + (longlong)((short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8),
             lVar29 != 0)) {
            uVar16 = (int)(short)uVar39 & 0x8000000f;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
            }
            uVar17 = (int)(short)uVar35 & 0x8000000f;
            if ((int)uVar17 < 0) {
              uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
            }
            if ((*(byte *)(lVar29 + 0x6a0 +
                          ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4) & 0x10) != 0)
            goto LAB_140ab977c;
          }
        }
      }
      else {
        lVar29 = *(longlong *)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8) +
                    ((longlong)(short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8);
        if (lVar29 == 0) {
LAB_140ab96a0:
          uVar12 = puVar24[4];
          uVar35 = puVar24[3];
          uVar39 = puVar24[2];
          if (-1 < (short)uVar39) goto LAB_140ab96b8;
        }
        else {
          uVar16 = (int)(short)uVar39 & 0x8000000f;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
          }
          uVar17 = (int)(short)uVar35 & 0x8000000f;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
          }
          if ((*(byte *)(lVar29 + 0x6a0 + ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4
                        ) & 8) == 0) goto LAB_140ab96a0;
LAB_140ab977c:
          uVar16 = FUN_140eb68b0();
          if (0x2aaaaaaa <
              uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff)
          goto LAB_140ab97ae;
        }
      }
    }
    if (((short)puVar24[6] < 1) || (uVar12 = puVar24[6] - 1, puVar24[6] = uVar12, uVar12 != 0)) {
      uVar16 = FUN_140eb68b0();
      if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
           0x1999999a) &&
         ((((char)puVar24[5] != '\0' && (uVar12 = *puVar24, -1 < (short)uVar12)) &&
          ((ulonglong)(longlong)(short)uVar12 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))))
         ) {
        lVar29 = *(longlong *)(_DAT_1424eca68 + (longlong)(short)uVar12 * 8);
        if ((*(int *)(lVar29 + 0x1b0) < 1) || ((**(byte **)(lVar29 + 0x1a8) & 8) == 0)) {
          bVar34 = false;
        }
        else {
          bVar34 = true;
        }
        if ((bVar34) &&
           (iVar43 = (int)(*(longlong *)(param_1 + 0xa140) - *(longlong *)(param_1 + 0xa13c) >> 3) +
                     -1, -1 < iVar43)) {
          lVar29 = (longlong)iVar43;
          do {
            lVar36 = *(longlong *)(*(longlong *)(param_1 + 0xa13c) + lVar29 * 8);
            if (((((*(uint *)(lVar36 + 0x10) & 0x400c11) == 1) &&
                 (*(ushort *)(lVar36 + 8) == puVar24[2])) &&
                (*(ushort *)(lVar36 + 10) == puVar24[3])) &&
               (((*(ushort *)(lVar36 + 0xc) == puVar24[4] && ((short)puVar24[6] < 0xc9)) &&
                ((-1 < (short)puVar24[6] || (iVar14 = FUN_140071f30(200), iVar14 == 0)))))) {
              vermin_consume_item(puVar24,*(undefined8 *)
                                           (*(longlong *)(param_1 + 0xa13c) + (longlong)iVar43 * 8))
              ;
              break;
            }
            iVar43 = iVar43 + -1;
            lVar29 = lVar29 + -1;
          } while (-1 < lVar29);
        }
      }
      uVar16 = FUN_140eb68b0();
      if ((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff <
           0x51eb852) && ((char)puVar24[5] != '\0')) {
        uVar12 = puVar24[1];
        uVar35 = *puVar24;
        if ((-1 < (short)uVar35) &&
           ((((ulonglong)(longlong)(short)uVar35 <
              (ulonglong)(*(longlong *)(param_1 + 0x8dac0) - *(longlong *)(param_1 + 0x8dabc) >> 3)
             && (-1 < (short)uVar12)) &&
            (lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x8dabc) + (longlong)(short)uVar35 * 8),
            lVar36 = *(longlong *)(lVar29 + 0x178),
            (ulonglong)(longlong)(short)uVar12 <
            (ulonglong)(*(longlong *)(lVar29 + 0x180) - lVar36 >> 3))))) {
          lVar29 = *(longlong *)(lVar36 + (longlong)(short)uVar12 * 8);
          if ((*(int *)(lVar29 + 0x6b0) < 4) ||
             ((*(byte *)(*(longlong *)(lVar29 + 0x6a8) + 3) & 0x10) == 0)) {
            bVar34 = false;
          }
          else {
            bVar34 = true;
          }
          if ((bVar34) &&
             (iVar43 = (int)(*(longlong *)(param_1 + 0x9fc0) - *(longlong *)(param_1 + 0x9fbc) >> 3)
                       + -1, -1 < iVar43)) {
            lVar29 = (longlong)iVar43;
            do {
              lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x9fbc) + lVar29 * 8);
              if (((((*(uint *)(lVar36 + 0x10) & 0xc38) == 0) &&
                   (*(ushort *)(lVar36 + 8) == puVar24[2])) &&
                  (*(ushort *)(lVar36 + 10) == puVar24[3])) &&
                 ((*(ushort *)(lVar36 + 0xc) == puVar24[4] &&
                  (cVar7 = FUN_140c89e30(lVar36,0), cVar7 != '\0')))) {
                lVar29 = (longlong)iVar43 * 8;
                (**(code **)(**(longlong **)(lVar29 + *(longlong *)(param_1 + 0x9fbc)) + 0x480))
                          (*(longlong **)(lVar29 + *(longlong *)(param_1 + 0x9fbc)),0xffffffff);
                iVar43 = (**(code **)(**(longlong **)(lVar29 + *(longlong *)(param_1 + 0x9fbc)) +
                                     0x478))();
                if (iVar43 < 1) {
                  uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
                  uStack_3b8 = CONCAT22(uStack_3b8._2_2_,puVar24[4]);
                  FUN_140ab52d0(*(undefined8 *)(lVar29 + *(longlong *)(param_1 + 0x9fbc)),0,
                                puVar24[2],puVar24[3]);
                }
                break;
              }
              iVar43 = iVar43 + -1;
              lVar29 = lVar29 + -1;
            } while (-1 < lVar29);
          }
        }
      }
      uVar12 = puVar24[1];
      sVar9 = 0;
      if (((uVar12 != 0xffff) && (uVar35 = *puVar24, -1 < (short)uVar35)) &&
         (((ulonglong)(longlong)(short)uVar35 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) &&
          ((-1 < (short)uVar12 &&
           (lVar29 = *(longlong *)(_DAT_1424eca68 + (longlong)(short)uVar35 * 8),
           lVar36 = *(longlong *)(lVar29 + 0x178),
           (ulonglong)(longlong)(short)uVar12 <
           (ulonglong)(*(longlong *)(lVar29 + 0x180) - lVar36 >> 3))))))) {
        sVar9 = *(short *)(*(longlong *)(lVar36 + (longlong)(short)uVar12 * 8) + 0x47a);
      }
      uVar16 = FUN_140eb68b0();
      if (((int)((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff)
                / 0x20c49c) < (int)sVar9) && ((char)puVar24[5] != '\0')) {
        uVar12 = puVar24[4];
        uVar35 = puVar24[3];
        uVar39 = puVar24[2];
        if ((((short)uVar39 < 0) ||
            (((*(int *)(param_1 + 0x8b5f6) <= (int)(short)uVar39 || ((short)uVar35 < 0)) ||
             (*(int *)(param_1 + 0x8b5f8) <= (int)(short)uVar35)))) ||
           (((short)uVar12 < 0 || (*(int *)(param_1 + 0x8b5fa) <= (int)(short)uVar12))))
        goto LAB_140ab9fe6;
        if (*(longlong *)(param_1 + 0x8b5dc) == 0) {
          uVar12 = puVar24[4];
          uVar35 = puVar24[3];
          uVar39 = puVar24[2];
LAB_140ab9ffe:
          if ((((int)(short)uVar39 < *(int *)(param_1 + 0x8b5f6)) && (-1 < (short)uVar35)) &&
             (((int)(short)uVar35 < *(int *)(param_1 + 0x8b5f8) &&
              ((-1 < (short)uVar12 && ((int)(short)uVar12 < *(int *)(param_1 + 0x8b5fa))))))) {
            if ((*(longlong *)(param_1 + 0x8b5dc) != 0) &&
               (lVar29 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8
                              ) + (longlong)((short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8)
               , lVar29 != 0)) {
              uVar16 = (int)(short)uVar39 & 0x8000000f;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
              }
              uVar17 = (int)(short)uVar35 & 0x8000000f;
              if ((int)uVar17 < 0) {
                uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
              }
              if ((*(byte *)(lVar29 + 0x6a0 +
                            ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4) & 0x10) != 0
                 ) goto LAB_140aba0c2;
            }
          }
        }
        else {
          lVar29 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8) +
                      (longlong)((short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8);
          if (lVar29 == 0) {
LAB_140ab9fe6:
            uVar12 = puVar24[4];
            uVar35 = puVar24[3];
            uVar39 = puVar24[2];
            if ((short)uVar39 < 0) goto LAB_140aba17f;
            goto LAB_140ab9ffe;
          }
          uVar16 = (int)(short)uVar39 & 0x8000000f;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
          }
          uVar17 = (int)(short)uVar35 & 0x8000000f;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
          }
          if ((*(byte *)(lVar29 + 0x6a0 + ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4
                        ) & 8) == 0) goto LAB_140ab9fe6;
LAB_140aba0c2:
          lVar29 = *(longlong *)(param_1 + 0x9dec);
          uVar40 = uVar19;
          if (*(longlong *)(param_1 + 0x9df0) - lVar29 >> 3 != 0) {
LAB_140aba0f0:
            if (((*(uint *)(*(longlong *)(lVar29 + uVar19) + 0x110) & 0x2010102) != 0) ||
               (cVar7 = FUN_14014da20(*(longlong *)(lVar29 + uVar19),puVar24[2],puVar24[3],
                                      puVar24[4]), cVar7 == '\0')) goto LAB_140aba151;
            FUN_140a457a0(puVar24,*(undefined8 *)(*(longlong *)(param_1 + 0x9dec) + uVar19));
            uVar12 = puVar24[1];
            uVar35 = *puVar24;
            cVar7 = func_0x000140072850(param_1 + 0x8daac,uVar35,uVar12,0x95);
            if (cVar7 == '\0') goto LAB_140aba151;
            cVar7 = func_0x000140072850(param_1 + 0x8daac,uVar35,uVar12,0x96);
            plVar44 = plStack_310;
            if (cVar7 != '\0') {
              plVar44 = (longlong *)FUN_140545360();
              *(ushort *)(plVar44 + 0x17) = *puVar24;
              *(ushort *)((longlong)plVar44 + 0xba) = puVar24[1];
              *(undefined4 *)(plVar44 + 0x10) = 1;
              (**(code **)(*plVar44 + 0x328))(plVar44,1);
              (**(code **)(*plVar44 + 800))
                        (plVar44,(int)(short)puVar24[2],(int)(short)puVar24[3],
                         (int)(short)puVar24[4]);
              (**(code **)(*plVar44 + 0x4a8))(plVar44,1);
              plVar44 = plStack_310;
            }
LAB_140aba239:
            FUN_140a46280(puVar24);
            func_0x00014054b490(param_1,uStack_368 & 0xffffffff);
          }
        }
      }
    }
    else {
      if (*(longlong *)(puVar24 + 8) != 0) {
        *(uint *)(puVar24 + 0xc) = *(uint *)(puVar24 + 0xc) | 1;
        uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
        uStack_3b8 = CONCAT22(uStack_3b8._2_2_,0x8ad0);
        FUN_140ab52d0(*(longlong *)(puVar24 + 8),1,0xffff8ad0,0xffff8ad0);
      }
      lVar29 = FUN_140a422c0(0x1423d17a8,puVar24 + 0x10);
      if (((lVar29 != 0) && (*(int *)(lVar29 + 4) != 0x989681)) &&
         (uVar16 = *(int *)(lVar29 + 4) + *(int *)(puVar24 + 0xe), *(uint *)(lVar29 + 4) = uVar16,
         10000000 < uVar16)) {
        *(undefined4 *)(lVar29 + 4) = 10000000;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)plVar44 * 8) != 0) {
        FUN_14054b4b0();
      }
    }
  }
  else {
    if (_DAT_14189c298 != 1) {
      uVar16 = FUN_140eb68b0();
      if (0x147ae14 <
          uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff)
      goto LAB_140ab9427;
      iVar43 = (int)uStack_368;
    }
    uVar12 = puVar24[4];
    uVar35 = puVar24[3];
    uVar39 = puVar24[2];
    if (((((short)uVar39 < 0) || (*(int *)(param_1 + 0x8b5f6) <= (int)(short)uVar39)) ||
        (((short)uVar35 < 0 ||
         ((*(int *)(param_1 + 0x8b5f8) <= (int)(short)uVar35 || ((short)uVar12 < 0)))))) ||
       (*(int *)(param_1 + 0x8b5fa) <= (int)(short)uVar12)) goto LAB_140ab8bfd;
    if (*(longlong *)(param_1 + 0x8b5dc) == 0) {
      uVar12 = puVar24[4];
      uVar35 = puVar24[3];
      uVar39 = puVar24[2];
LAB_140ab8c15:
      if (((((int)(short)uVar39 < *(int *)(param_1 + 0x8b5f6)) && (-1 < (short)uVar35)) &&
          ((int)(short)uVar35 < *(int *)(param_1 + 0x8b5f8))) &&
         ((-1 < (short)uVar12 && ((int)(short)uVar12 < *(int *)(param_1 + 0x8b5fa))))) {
        if ((*(longlong *)(param_1 + 0x8b5dc) != 0) &&
           (lVar29 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8) +
                        (longlong)((short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8),
           lVar29 != 0)) {
          uVar16 = (int)(short)uVar39 & 0x8000000f;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
          }
          uVar17 = (int)(short)uVar35 & 0x8000000f;
          if ((int)uVar17 < 0) {
            uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
          }
          if ((*(byte *)(lVar29 + 0x6a0 + ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4
                        ) & 0x10) != 0) goto LAB_140ab8cd9;
        }
      }
      goto LAB_140aba184;
    }
    lVar29 = *(longlong *)
              (*(longlong *)
                (*(longlong *)
                  (*(longlong *)(param_1 + 0x8b5dc) + (longlong)((short)uVar39 >> 4) * 8) +
                ((longlong)(short)uVar35 >> 4) * 8) + (longlong)(short)uVar12 * 8);
    if (lVar29 == 0) {
LAB_140ab8bfd:
      uVar12 = puVar24[4];
      uVar35 = puVar24[3];
      uVar39 = puVar24[2];
      if ((short)uVar39 < 0) goto LAB_140aba184;
      goto LAB_140ab8c15;
    }
    uVar16 = (int)(short)uVar39 & 0x8000000f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
    }
    uVar17 = (int)(short)uVar35 & 0x8000000f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
    }
    if ((*(byte *)(lVar29 + 0x6a0 + ((longlong)(int)uVar16 * 0x10 + (longlong)(int)uVar17) * 4) & 8)
        == 0) goto LAB_140ab8bfd;
LAB_140ab8cd9:
    bVar34 = false;
    lVar29 = *(longlong *)(param_1 + 0x9dec);
    uVar40 = uVar19;
    if (*(longlong *)(param_1 + 0x9df0) - lVar29 >> 3 == 0) goto LAB_140aba184;
    do {
      lVar29 = *(longlong *)(lVar29 + uVar19);
      uVar16 = *(uint *)(lVar29 + 0x110);
      if ((((uVar16 & 0x102) == 0) && ((uVar16 >> 0x10 & 1) == 0)) &&
         (((uVar16 >> 0x19 & 1) == 0 &&
          (((*(uint *)(lVar29 + 0x114) & 0x80000) == 0 &&
           (cVar7 = FUN_14014da20(lVar29,puVar24[2],puVar24[3],puVar24[4]), cVar7 != '\0')))))) {
        bVar34 = true;
      }
      uVar16 = (int)uVar40 + 1;
      uVar19 = uVar19 + 8;
      lVar29 = *(longlong *)(param_1 + 0x9dec);
      uVar40 = (ulonglong)uVar16;
    } while ((ulonglong)(longlong)(int)uVar16 <
             (ulonglong)(*(longlong *)(param_1 + 0x9df0) - lVar29 >> 3));
    if (!bVar34) goto LAB_140aba17f;
    uStack_2a0 = 0;
    puStack_298 = (ushort *)0x0;
    puStack_290 = (ushort *)0x0;
    uVar12 = puVar24[0x10];
    uVar35 = *puVar24;
    if (((short)uVar35 < 0) ||
       ((ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) <= (ulonglong)(longlong)(short)uVar35)) {
LAB_140ab8e47:
      puVar25 = (ushort *)0x0;
    }
    else {
      lVar29 = *(longlong *)(_DAT_1424eca68 + (longlong)(short)uVar35 * 8);
      uVar35 = (short)((longlong)
                       (ulonglong)(uint)(*(int *)(lVar29 + 0x180) - *(int *)(lVar29 + 0x178)) >> 3)
               - 1;
      auStack_378[0] = uVar35;
      if ((short)uVar35 < 0) goto LAB_140ab8e47;
      puVar25 = (ushort *)0x0;
      do {
        auStack_378[0] = uVar35;
        cVar7 = func_0x000140702630(*(undefined8 *)
                                     (*(longlong *)(lVar29 + 0x178) + (ulonglong)uVar35 * 8),uVar12)
        ;
        if (cVar7 == '\0') {
          if (puVar25 == puStack_290) {
            FUN_140071040(&uStack_2a0,puVar25,auStack_378);
            puVar25 = puStack_298;
          }
          else {
            *puVar25 = uVar35;
            puStack_298 = puStack_298 + 1;
            puVar25 = puStack_298;
          }
        }
        uVar35 = uVar35 - 1;
        auStack_378[0] = uVar35;
      } while (-1 < (short)uVar35);
    }
    if ((longlong)((longlong)puVar25 - uStack_2a0) >> 1 != 0) {
      bVar34 = false;
      iVar43 = *(int *)(puVar24 + 0xe);
      while (iVar43 != 0) {
        puVar25 = (ushort *)FUN_1405c1410();
        do {
          do {
            uVar16 = FUN_140eb68b0();
            puVar25[2] = (short)((ulonglong)
                                 (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f
                                                ) * 0x7fffffff) / 0x2aaaaaab) + -1 + puVar24[2];
            uVar16 = FUN_140eb68b0();
            uVar12 = (short)((ulonglong)
                             (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                       0x7fffffff) / 0x2aaaaaab) + -1 + puVar24[3];
            uVar19 = (ulonglong)uVar12;
            puVar25[3] = uVar12;
          } while ((short)puVar25[2] < 0);
        } while (((*(int *)(param_1 + 0x8b5f6) + -1 < (int)(short)puVar25[2]) || ((short)uVar12 < 0)
                 ) || (*(int *)(param_1 + 0x8b5f8) + -1 < (int)(short)uVar12));
        puVar25[4] = puVar24[4];
        *puVar25 = *puVar24;
        uVar12 = puVar24[1];
        if (uVar12 == 0xffff) {
          uVar40 = (longlong)((longlong)puStack_298 - uStack_2a0) >> 1;
          if ((uint)uVar40 < 2) {
            uVar17 = 0;
          }
          else {
            uVar16 = FUN_140eb68b0();
            uVar16 = uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                              0x7fffffff;
            uVar28 = (int)(0x7fffffff / (uVar40 & 0xffffffff)) + 1;
            uVar17 = uVar16 / uVar28;
            uVar19 = (ulonglong)uVar16 % (ulonglong)uVar28;
          }
          uVar12 = *(ushort *)(uStack_2a0 + (longlong)(int)uVar17 * 2);
        }
        puVar25[1] = uVar12;
        *(undefined1 *)(puVar25 + 5) = 1;
        iVar43 = func_0x000140a45370(puVar25,uVar19);
        puVar25[6] = (ushort)(9000 / (longlong)iVar43);
        uVar18 = *(undefined4 *)(puVar24 + 0x12);
        uVar5 = *(undefined4 *)(puVar24 + 0x14);
        uVar6 = *(undefined4 *)(puVar24 + 0x16);
        *(undefined4 *)(puVar25 + 0x10) = *(undefined4 *)(puVar24 + 0x10);
        *(undefined4 *)(puVar25 + 0x12) = uVar18;
        *(undefined4 *)(puVar25 + 0x14) = uVar5;
        *(undefined4 *)(puVar25 + 0x16) = uVar6;
        *(longlong *)(puVar25 + 0x18) = *(longlong *)(puVar24 + 0x18);
        puVar25[0x1c] = 5;
        if ((puVar25[0xc] & 2) != 0) {
          puStack_2f0 = puVar25;
          if (_DAT_1423d15a0 == _DAT_1423d15a8) {
            FUN_140070bd0(&DAT_1423d1598,_DAT_1423d15a0,&puStack_2f0);
          }
          else {
            *(ushort **)_DAT_1423d15a0 = puVar25;
            _DAT_1423d15a0 = _DAT_1423d15a0 + 4;
          }
        }
        if (!bVar34) {
          if ((_DAT_14189c298 == 1) && ((DAT_142391094 & 8) != 0)) {
            uStack_90 = 0;
            uStack_88 = 2;
            uStack_80 = 0xf;
            uStack_98 = 0x2041;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0xf;
            ppppuStack_b8 = (undefined8 *****)0x0;
            uVar16 = *(uint *)(puVar24 + 0xe);
            if (uVar16 < 2) {
              uVar12 = *puVar24;
              uStack_a8 = 0;
              ppppuStack_b8 = (undefined8 *****)0x0;
              if ((-1 < (short)uVar12) &&
                 ((ulonglong)(longlong)(short)uVar12 <
                  (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) {
                lVar29 = *(longlong *)(_DAT_1424eca68 + (longlong)(short)uVar12 * 8);
                pppppuVar30 = (undefined8 *****)(lVar29 + 0x20);
                if (&ppppuStack_b8 != pppppuVar30) {
                  if (0xf < *(ulonglong *)(lVar29 + 0x38)) {
                    pppppuVar30 = (undefined8 *****)*pppppuVar30;
                  }
                  FUN_14006f8d0(&ppppuStack_b8,pppppuVar30,*(undefined8 *)(lVar29 + 0x30));
                }
              }
              pppppuVar30 = &ppppuStack_b8;
              if (0xf < uStack_a0) {
                pppppuVar30 = (undefined8 *****)ppppuStack_b8;
              }
              FUN_14006fa10(&uStack_98,pppppuVar30,uStack_a8);
              FUN_14006fa10(&uStack_98,&UNK_1416cf280,0x14);
            }
            else {
              if (uVar16 < 10) {
                FUN_14006fa10(&uStack_98,&UNK_1416cf270,9);
                uVar12 = *puVar24;
                uStack_a8 = 0;
                pppppuVar30 = &ppppuStack_b8;
                if (0xf < uStack_a0) {
                  pppppuVar30 = (undefined8 *****)ppppuStack_b8;
                }
                *(undefined1 *)pppppuVar30 = 0;
                uStack_3b8 = uStack_3b8 & 0xffffff00;
                FUN_140256880(0x1424eca48,&ppppuStack_b8,uVar12,2);
LAB_140ab91f9:
                func_0x0001400b9d10(&uStack_98,&ppppuStack_b8);
                puVar31 = &UNK_1416cf280;
              }
              else {
                if (0x31 < uVar16) {
                  func_0x00014006f560(&uStack_98,&UNK_1416cf160);
                  FUN_140aa3bd0(*puVar24,&ppppuStack_b8,1,0xffffffff);
                  goto LAB_140ab91f9;
                }
                func_0x00014006f580(&uStack_98,&UNK_1416cf188);
                FUN_140aa3bd0(*puVar24,&ppppuStack_b8,1,0xffffffff);
                func_0x0001400b9d10(&uStack_98,&ppppuStack_b8);
                puVar31 = &UNK_1416cf170;
              }
              func_0x00014006f560(&uStack_98,puVar31);
            }
            uStack_17c = 0;
            uStack_178 = 0x8ad08ad0;
            uStack_174 = 0x8ad0;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_158 = 0xffffffffffffffff;
            uStack_150 = 0xffffffff;
            uStack_14c = 0;
            uStack_148 = 0xffffffff;
            uStack_188 = 0x200fd;
            uStack_184 = 1;
            uStack_16c = 0;
            uStack_182 = puVar24[2];
            uStack_180 = puVar24[3];
            uStack_17e = puVar24[4];
            FUN_1400e3c20(0x1424e3850,&uStack_98,&uStack_188);
            if (0xf < uStack_a0) {
              if (uStack_a0 + 1 < 0x1000) {
LAB_140ab92fe:
                func_0x000141539680();
                goto LAB_140ab9303;
              }
              if ((undefined1 *)((longlong)ppppuStack_b8 + (-8 - (longlong)ppppuStack_b8[-1])) <
                  (undefined1 *)0x20) goto LAB_140ab92fe;
              _invalid_parameter_noinfo_noreturn(ppppuStack_b8[-1],uStack_a0 + 0x28);
LAB_140aba259:
              _invalid_parameter_noinfo_noreturn();
              goto LAB_140aba260;
            }
LAB_140ab9303:
            uStack_a8 = 0;
            uStack_a0 = 0xf;
            ppppuStack_b8 = (undefined8 ****)((ulonglong)ppppuStack_b8 & 0xffffffffffffff00);
            if (0xf < uStack_80) {
              uVar40 = uStack_80 + 1;
              uVar19 = uStack_98;
              if (0xfff < uVar40) {
                uVar40 = uStack_80 + 0x28;
                uVar19 = *(ulonglong *)(uStack_98 - 8);
                if (0x1f < (uStack_98 - uVar19) - 8) goto LAB_140aba259;
              }
              func_0x000141539680(uVar19,uVar40);
            }
            uStack_88 = 0;
            uStack_80 = 0xf;
            uStack_98 = uStack_98 & 0xffffffffffffff00;
          }
          bVar34 = true;
        }
        puVar25 = puVar24 + 0xe;
        *(int *)puVar25 = *(int *)puVar25 + -1;
        iVar43 = *(int *)puVar25;
      }
      if (*(longlong *)(puVar24 + 8) != 0) {
        *(uint *)(puVar24 + 0xc) = *(uint *)(puVar24 + 0xc) | 1;
        uStack_3b0._1_7_ = (undefined7)(uStack_3b0 >> 8);
        uStack_3b0 = CONCAT71(uStack_3b0._1_7_,1);
        uStack_3b8._2_2_ = (undefined2)(uStack_3b8 >> 0x10);
        uStack_3b8 = CONCAT22(uStack_3b8._2_2_,0x8ad0);
        FUN_140ab52d0(*(longlong *)(puVar24 + 8),1,0xffff8ad0,0xffff8ad0);
      }
      lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)plVar44 * 8);
      if (lVar29 != 0) {
        FUN_14054b4b0(lVar29);
      }
    }
    if (uStack_2a0 == 0) goto LAB_140aba17f;
    uVar19 = ((longlong)((longlong)puStack_290 - uStack_2a0) >> 1) * 2;
    uVar40 = uStack_2a0;
    if (0xfff < uVar19) {
      uVar19 = uVar19 + 0x27;
      uVar40 = *(ulonglong *)(uStack_2a0 - 8);
      if (0x1f < (uStack_2a0 - uVar40) - 8) goto LAB_140abab59;
    }
    func_0x000141539680(uVar40,uVar19);
    uStack_2a0 = 0;
    puStack_298 = (ushort *)0x0;
    puStack_290 = (ushort *)0x0;
  }
LAB_140aba17f:
  iVar43 = (int)uStack_368;
LAB_140aba184:
  uStack_368 = (ulonglong)(iVar43 - 1U);
  plVar44 = (longlong *)((longlong)plVar44 - 1);
  plStack_310 = plVar44;
  if ((int)(iVar43 - 1U) < 0) goto LAB_140aba260;
  goto LAB_140ab8aa8;
LAB_140aba151:
  uVar16 = (int)uVar40 + 1;
  uVar19 = uVar19 + 8;
  lVar29 = *(longlong *)(param_1 + 0x9dec);
  uVar40 = (ulonglong)uVar16;
  plVar44 = plStack_310;
  if ((ulonglong)(*(longlong *)(param_1 + 0x9df0) - lVar29 >> 3) <= (ulonglong)(longlong)(int)uVar16
     ) goto LAB_140aba17f;
  goto LAB_140aba0f0;
}

