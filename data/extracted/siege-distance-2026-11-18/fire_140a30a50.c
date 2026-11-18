/* Actual Ghidra output, research name; VA 0x140a30a50..0x140a32534. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fire_140a30a50(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  int iVar26;
  ushort uVar27;
  int iVar28;
  int iVar29;
  byte bVar30;
  longlong *plVar31;
  longlong lVar32;
  ushort uVar33;
  int *piVar34;
  short sVar35;
  longlong lVar36;
  uint uVar37;
  short sVar38;
  uint uVar39;
  uint uVar40;
  ushort uVar41;
  uint uVar42;
  uint uVar43;
  int *piVar44;
  float fVar45;
  undefined1 auStack_208 [32];
  undefined2 *puStack_1e8;
  undefined4 uStack_1e0;
  longlong *plStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined2 uStack_1c0;
  undefined4 uStack_1b8;
  ushort auStack_1a8 [2];
  byte bStack_1a4;
  ushort uStack_1a0;
  char cStack_19c;
  ushort auStack_198 [2];
  uint uStack_194;
  ushort auStack_190 [2];
  ushort auStack_18c [2];
  ushort auStack_188 [4];
  longlong lStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  longlong *plStack_160;
  ulonglong *puStack_158;
  longlong *plStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  char cStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 uStack_120;
  char cStack_118;
  undefined2 auStack_108 [6];
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_208;
  lVar20 = *(longlong *)(param_1 + 0x4d8);
  uVar42 = 0xffff8ad0;
  if (*(short *)(param_1 + 0xc0) == -30000) {
    uVar40 = *(uint *)(lVar20 + 0x2c);
    *(uint *)(lVar20 + 0x2c) = uVar40 & 0xfffffff3;
    if (*(short *)(lVar20 + 0x14) != 0x92) {
      *(uint *)(lVar20 + 0x2c) = uVar40 & 0xffffffd3;
    }
  }
  uVar40 = *(uint *)(lVar20 + 0x2c);
  lStack_180 = param_1;
  lStack_170 = param_2;
  uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
  if ((((uVar40 & 4) != 0) ||
      (uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168), (uVar40 & 8) != 0)) ||
     (((uVar40 & 0x20) != 0 &&
      (uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168), *(short *)(lVar20 + 0x14) != 0x92
      )))) goto LAB_140a32408;
  puVar4 = *(undefined8 **)(lVar20 + 0xb8);
  for (puVar21 = *(undefined8 **)(lVar20 + 0xb0); plVar18 = (longlong *)0x0, puVar21 < puVar4;
      puVar21 = puVar21 + 1) {
    iVar13 = (**(code **)(*(longlong *)*puVar21 + 0x10))();
    if (iVar13 == 0x24) {
      plVar18 = (longlong *)(**(code **)(*(longlong *)*puVar21 + 0x30))();
      break;
    }
  }
  plStack_160 = plVar18;
  if (plVar18 == (longlong *)0x0) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xf;
    uStack_e0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_a0 = 0xffffffffffffffff;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffff;
    uStack_78 = 0xffffffff;
    uStack_74 = 0x8ad08ad0;
    uStack_70 = 0x8ad0;
    auStack_108[0] = 0x20;
    puStack_1e8 = auStack_108;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_98);
    FUN_140070e80(&uStack_c0);
    FUN_140070e80(&uStack_e0);
    uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
    goto LAB_140a32408;
  }
  iVar13 = (**(code **)(*plVar18 + 0xd0))();
  if (iVar13 != 0x16) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xf;
    uStack_e0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_a0 = 0xffffffffffffffff;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffff;
    uStack_78 = 0xffffffff;
    uStack_74 = 0x8ad08ad0;
    uStack_70 = 0x8ad0;
    auStack_108[0] = 0x21;
    puStack_1e8 = auStack_108;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_98);
    FUN_140070e80(&uStack_c0);
    FUN_140070e80(&uStack_e0);
    uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
    goto LAB_140a32408;
  }
  if ((short)plVar18[0x29] != 2) {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0xf;
    uStack_e0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xf;
    uStack_c0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_fc = 0;
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_a0 = 0xffffffffffffffff;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffff;
    uStack_78 = 0xffffffff;
    uStack_74 = 0x8ad08ad0;
    uStack_70 = 0x8ad0;
    auStack_108[0] = 0x21;
    puStack_1e8 = auStack_108;
    FUN_14133d990(param_1,1,0,0);
    FUN_140070d80(&uStack_98);
    FUN_140070e80(&uStack_c0);
    FUN_140070e80(&uStack_e0);
    uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
    goto LAB_140a32408;
  }
  if ((ulonglong)(plVar18[0x26] - plVar18[0x25] >> 3) < 5) {
    puStack_1e8 = (undefined2 *)0x0;
    FUN_14133d990(param_1,1,0,0);
    uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
    if ((('\0' < *(char *)((longlong)plVar18 + 0x14c)) &&
        (uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168),
        *(longlong *)(param_1 + 0x4d8) == 0)) &&
       (plStack_150 = plVar18 + 0xb, uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168),
       (plVar18[0xc] - plVar18[0xb] & 0xfffffffffffffff8U) == 0)) {
      cVar9 = (**(code **)(*plVar18 + 600))(plVar18);
      plVar24 = _DAT_142407a70;
      plVar23 = _DAT_142407a68;
      if (cVar9 == '\0') {
        for (; plVar23 != plVar24; plVar23 = plVar23 + 1) {
          puVar22 = (ulonglong *)*plVar23;
          puStack_158 = puVar22;
          cVar9 = FUN_140cab070(puVar22);
          if (cVar9 != '\0') {
            uVar42 = (uint)puVar22[2];
            if ((((uVar42 & 0x20) == 0) && ((*(byte *)((longlong)puVar22 + 0x14) & 8) == 0)) &&
               (((uVar42 & 0xe92c12) == 0 && (-1 < (char)uVar42)))) {
              uStack_60 = 0;
              uStack_58 = 4;
              uStack_50 = 0xf;
              uStack_68 = 0x544c4f42;
              cVar9 = (**(code **)(*puVar22 + 0x490))(puVar22,&uStack_68);
              FUN_140070e80(&uStack_68);
              if (cVar9 != '\0') {
                cStack_19c = '\0';
                bStack_1a4 = 0;
                uVar17 = *(undefined4 *)((longlong)puVar22 + 0x1c);
                FUN_1400bc210(&uStack_140,0x1423bb5e8,uVar17);
                plVar18 = _DAT_1423bbd18;
                lStack_170._0_4_ = -1;
                lStack_170 = 0xffffffff;
                iVar13 = (int)lStack_170;
                if (cStack_138 != '\0') {
                  iVar13 = (int)uStack_140;
                }
                if (iVar13 != -1) {
                  if (_DAT_1423bbd10 != _DAT_1423bbd18) {
                    uStack_168._0_2_ = 0xffff;
                    uStack_168._2_2_ = 0xffff;
                    uStack_164 = 0;
                    plVar31 = _DAT_1423bbd10;
                    do {
                      FUN_1400bc210(&uStack_130,*plVar31 + 0x18,uVar17);
                      iVar13 = -1;
                      if (cStack_128 != '\0') {
                        iVar13 = (int)uStack_130;
                      }
                      if (iVar13 != -1) {
                        cStack_19c = '\x01';
                        break;
                      }
                      plVar31 = plVar31 + 1;
                    } while (plVar31 != plVar18);
                  }
                  piVar44 = *(int **)(_DAT_1423bc668 + 0x11c8);
                  piVar5 = *(int **)(_DAT_1423bc668 + 0x11d0);
                  bVar30 = bStack_1a4;
                  if (piVar44 != piVar5) {
                    uVar19 = _DAT_142505c48 - _DAT_142505c40 >> 3;
                    lVar20 = _DAT_142505c40;
                    uStack_178 = uVar19;
                    do {
                      iVar13 = *piVar44;
                      if ((uVar19 != 0) && (iVar13 != -1)) {
                        iVar14 = (int)uVar19 + -1;
                        iVar15 = 0;
                        piVar34 = (int *)0x0;
                        if (-1 < iVar14) {
                          do {
                            iVar26 = iVar15 + iVar14 >> 1;
                            piVar34 = *(int **)(lVar20 + (longlong)iVar26 * 8);
                            iVar28 = *piVar34;
                            if (iVar28 == iVar13) break;
                            iVar29 = iVar26 + -1;
                            if (iVar28 < iVar13) {
                              iVar29 = iVar14;
                              iVar15 = iVar26 + 1;
                            }
                            iVar14 = iVar29;
                            piVar34 = (int *)0x0;
                            lVar20 = _DAT_142505c40;
                          } while (iVar15 <= iVar14);
                        }
                        uVar19 = uStack_178;
                        lVar20 = _DAT_142505c40;
                        if (piVar34 != (int *)0x0) {
                          plVar18 = *(longlong **)(piVar34 + 0x50);
                          plVar31 = *(longlong **)(piVar34 + 0x52);
                          if (plVar18 != plVar31) {
                            uStack_148 = 0xffffffff;
                            uStack_144 = 0;
                            do {
                              FUN_1400bc210(&uStack_120,*plVar18 + 0x18,
                                            *(undefined4 *)((longlong)puStack_158 + 0x1c));
                              iVar13 = -1;
                              if (cStack_118 != '\0') {
                                iVar13 = (int)uStack_120;
                              }
                              if (iVar13 != -1) {
                                bVar30 = 1;
                                goto LAB_140a31067;
                              }
                              plVar18 = plVar18 + 1;
                              uVar19 = uStack_178;
                              lVar20 = _DAT_142505c40;
                            } while (plVar18 != plVar31);
                          }
                        }
                      }
                      piVar44 = piVar44 + 1;
                      bVar30 = bStack_1a4;
                    } while (piVar44 != piVar5);
                  }
LAB_140a31067:
                  if ((cStack_19c != '\0') || (puVar22 = puStack_158, bVar30 != 0))
                  goto LAB_140a31196;
                }
                auStack_1a8[0] = 0x8ad0;
                if ((puVar22[2] & 0x10) == 0) {
                  if ((puVar22[2] & 8) == 0) {
                    auStack_1a8[0] = (ushort)puVar22[1];
                    auStack_198[0] = *(ushort *)((longlong)puVar22 + 10);
                    uVar11 = *(undefined2 *)((longlong)puVar22 + 0xc);
LAB_140a31165:
                    uStack_194 = CONCAT22(uStack_194._2_2_,uVar11);
                  }
                  else {
                    puVar4 = (undefined8 *)puVar22[8];
                    for (puVar21 = (undefined8 *)puVar22[7]; puVar21 < puVar4; puVar21 = puVar21 + 1
                        ) {
                      iVar13 = (**(code **)(*(longlong *)*puVar21 + 0x10))();
                      if (iVar13 == 0xb) {
                        lVar20 = (**(code **)(*(longlong *)*puVar21 + 0x18))();
                        if (lVar20 != 0) {
                          FUN_140ca3790(lVar20,auStack_1a8,auStack_198,&uStack_194);
                          goto LAB_140a3116a;
                        }
                      }
                      else if ((iVar13 == 0x12) &&
                              (lVar20 = (**(code **)(*(longlong *)*puVar21 + 0x20))(), lVar20 != 0))
                      {
                        FUN_14137fd40(lVar20,auStack_1a8,auStack_198,&uStack_194);
                        goto LAB_140a3116a;
                      }
                    }
                    for (puVar21 = (undefined8 *)puVar22[4]; puVar21 < (undefined8 *)puVar22[5];
                        puVar21 = puVar21 + 1) {
                      if (*(int *)*puVar21 == 7) {
                        lVar20 = *(longlong *)((int *)*puVar21 + 2);
                        auStack_1a8[0] = *(ushort *)(lVar20 + 4);
                        auStack_198[0] = *(ushort *)(lVar20 + 6);
                        uVar11 = *(undefined2 *)(lVar20 + 8);
                        goto LAB_140a31165;
                      }
                    }
                  }
LAB_140a3116a:
                  lVar20 = lStack_180;
                  if (auStack_1a8[0] != 0x8ad0) {
                    puStack_1e8 = (undefined2 *)CONCAT71(puStack_1e8._1_7_,1);
                    cVar9 = FUN_1413bd210(lStack_180,auStack_1a8[0],auStack_198[0],
                                          (undefined2)uStack_194);
                    if (cVar9 != '\0') {
                      puStack_158 = (ulonglong *)FUN_1415530e0(0x148);
                      puVar22 = (ulonglong *)FUN_140d19db0(puStack_158,0);
                      *(undefined2 *)((longlong)puVar22 + 0x14) = 0xf6;
                      *(short *)((longlong)puVar22 + 0x1c) = (short)plStack_160[2];
                      *(undefined2 *)((longlong)puVar22 + 0x1e) =
                           *(undefined2 *)((longlong)plStack_160 + 0x1c);
                      *(short *)(puVar22 + 4) = (short)plStack_160[4];
                      puStack_158 = puVar22;
                      FUN_140d21440(puVar22,0x24,(int)plStack_160[10]);
                      puVar21 = (undefined8 *)plStack_150[1];
                      if (puVar21 == (undefined8 *)plStack_150[2]) {
                        FUN_1400bc360(plStack_150,puVar21,&puStack_158);
                      }
                      else {
                        *puVar21 = puVar22;
                        plStack_150[1] = plStack_150[1] + 8;
                      }
                      FUN_140d21860(puVar22);
                      FUN_141340d60(lVar20,puVar22);
                      goto LAB_140a32408;
                    }
                  }
                }
              }
            }
          }
LAB_140a31196:
          plVar18 = plStack_160;
        }
        *(undefined2 *)((longlong)plVar18 + 0x14e) = 100;
      }
    }
    goto LAB_140a32408;
  }
  if (*(char *)((longlong)plVar18 + 0x14c) < '\x02') goto LAB_140a323f3;
  bStack_1a4 = *(byte *)((longlong)plVar18 + 0x14b);
  uVar40 = 0x8ad0;
  auStack_198[0] = 0x8ad0;
  uVar19 = 0;
  uStack_178 = 0;
  if (0 < *(int *)(param_2 + 0x660)) {
    auStack_1a8[0] = 0xffff;
    puStack_158 = (ulonglong *)(param_2 + 0x20);
    uStack_194 = 0;
    uVar43 = (uint)uStack_1a0;
    uVar16 = (uint)uStack_1a0;
    lVar20 = lStack_170;
    do {
      uVar6 = *puStack_158;
      if (((*(int *)(uVar6 + 0x3d8) != -1) || ((*(uint *)(uVar6 + 0x110) & 0x2010000) != 0)) ||
         (0 < *(short *)(uVar6 + 0x800))) goto LAB_140a31564;
      sVar12 = FUN_1413a7840(uVar6);
      if ((int)sVar12 - 1U < 0x10) {
                    /* WARNING: Switch is manually overridden */
        switch((int)sVar12 - 1U) {
        case 0:
        case 4:
          break;
        default:
          goto override_jmp_140a312fd_case_1;
        case 5:
          if ((*(byte *)(uVar6 + 0x11c) & 0x80) != 0) goto override_jmp_140a312fd_case_1;
        }
      }
      else {
override_jmp_140a312fd_case_1:
        cVar9 = FUN_14140bba0(lStack_180,uVar6);
        lVar20 = lStack_170;
        uVar19 = uStack_178;
        if (cVar9 == '\0') goto LAB_140a31564;
      }
      uStack_1a0 = *(ushort *)(uVar6 + 0xa8);
      uVar39 = *(uint *)(plVar18 + 2);
      iVar15 = (int)(short)uStack_1a0 - uVar39;
      iVar13 = -iVar15;
      if (iVar13 < 0) {
        iVar13 = iVar15;
      }
      sVar12 = *(short *)(uVar6 + 0xaa);
      uVar37 = *(uint *)((longlong)plVar18 + 0x1c);
      iVar14 = (int)sVar12 - uVar37;
      iVar15 = -iVar14;
      if (iVar15 < 0) {
        iVar15 = iVar14;
      }
      iVar14 = (int)plVar18[4];
      uStack_168._0_2_ = (ushort)iVar14;
      uStack_168._2_2_ = (undefined2)((uint)iVar14 >> 0x10);
      iVar14 = *(short *)(uVar6 + 0xac) - iVar14;
      iVar28 = -iVar14;
      if (iVar28 < 0) {
        iVar28 = iVar14;
      }
      iVar15 = (int)(short)iVar15 * (int)(short)iVar15;
      plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,iVar15);
      iVar13 = (int)(short)iVar13 * (int)(short)iVar13;
      iVar14 = (int)(short)iVar28 * (int)(short)iVar28;
      lVar20 = lStack_170;
      uVar19 = uStack_178;
      if ((iVar15 + iVar13 < iVar14) ||
         (((int)(short)uStack_1a0 == uVar39 && ((int)sVar12 == uVar37)))) goto LAB_140a31564;
      fVar45 = (float)(iVar15 + iVar14 + iVar13);
      if (fVar45 < 0.0) {
        fVar45 = (float)callee_1415548d6(fVar45);
        uVar37 = *(uint *)((longlong)plVar18 + 0x1c);
        uVar39 = *(uint *)(plVar18 + 2);
      }
      else {
        fVar45 = SQRT(fVar45);
      }
      plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,(int)fVar45);
      sVar35 = (short)(int)fVar45;
      lVar20 = lStack_170;
      uVar19 = uStack_178;
      if (((auStack_1a8[0] != 0xffff) && ((short)auStack_1a8[0] < sVar35)) || (0x19 < sVar35))
      goto LAB_140a31564;
      sVar12 = sVar12 - (short)uVar37;
      sVar35 = uStack_1a0 - (short)uVar39;
      iVar13 = -(int)sVar35;
      if (iVar13 < 0) {
        iVar13 = (int)sVar35;
      }
      iVar15 = -(int)sVar12;
      if (iVar15 < 0) {
        iVar15 = (int)sVar12;
      }
      iVar14 = (int)(short)iVar13;
      iVar13 = (int)(short)iVar15;
      if ((sVar12 < 0) && (iVar14 * 2 <= iVar13)) {
LAB_140a31478:
        bVar30 = 0;
      }
      else if ((sVar12 < 1) || (iVar13 < iVar14 * 2)) {
        if (sVar35 < 0) {
          if (iVar14 < iVar13 * 2) {
            if (sVar12 < 1) {
              if (-1 < sVar12) goto LAB_140a31478;
              bVar30 = 7;
            }
            else {
              bVar30 = 5;
            }
          }
          else {
            bVar30 = 6;
          }
        }
        else {
          if (sVar35 < 1) goto LAB_140a31478;
          if (iVar14 < iVar13 * 2) {
            if (sVar12 < 0) {
              bVar30 = 1;
            }
            else {
              if (sVar12 < 1) goto LAB_140a31478;
              bVar30 = 3;
            }
          }
          else {
            bVar30 = 2;
          }
        }
      }
      else {
        bVar30 = 4;
      }
      if (7 < bVar30) goto LAB_140a314db;
                    /* WARNING: Switch is manually overridden */
      switch(bVar30) {
      case 0:
        uVar16 = uVar39 & 0xffff;
        goto LAB_140a314d7;
      case 1:
        uVar16 = uVar39 - 1;
        goto LAB_140a314d7;
      case 2:
        uVar16 = uVar39 - 1;
        uVar43 = uVar37 & 0xffff;
        break;
      case 3:
        uVar16 = uVar39 - 1;
        uVar43 = uVar37 - 1;
        break;
      case 4:
        uVar16 = uVar39 & 0xffff;
        uVar43 = uVar37 - 1;
        break;
      case 5:
        uVar16 = uVar39 + 1;
        uVar43 = uVar37 - 1;
        break;
      case 6:
        uVar16 = uVar39 + 1;
        uVar43 = uVar37 & 0xffff;
        break;
      case 7:
        uVar16 = uVar39 + 1;
LAB_140a314d7:
        uVar43 = uVar37 + 1;
      }
LAB_140a314db:
      if ((short)uVar16 != -30000) {
        puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffffffffff00);
        cVar9 = FUN_14137f170(lStack_180,uVar16 & 0xffff,uVar43 & 0xffff,(ushort)uStack_168);
        lVar20 = lStack_170;
        uVar19 = uStack_178;
        if (cVar9 != '\0') {
          uVar42 = uVar16 & 0xffff;
          uVar40 = uVar43 & 0xffff;
          auStack_198[0] = (ushort)uStack_168;
          auStack_1a8[0] = (ushort)plStack_160;
          uVar19 = uVar6;
          bStack_1a4 = bVar30;
          uStack_178 = uVar6;
        }
      }
LAB_140a31564:
      uStack_194 = uStack_194 + 1;
      puStack_158 = puStack_158 + 1;
    } while ((int)uStack_194 < *(int *)(lVar20 + 0x660));
  }
  auStack_190[0] = 0x8ad0;
  auStack_18c[0] = 0x8ad0;
  auStack_188[0] = 0x8ad0;
  if (uVar19 != 0) {
    if ((*(uint *)(uVar19 + 0x110) & 0x2000000) == 0) {
      auStack_190[0] = *(ushort *)(uVar19 + 0xa8);
      auStack_18c[0] = *(ushort *)(uVar19 + 0xaa);
      auStack_188[0] = *(ushort *)(uVar19 + 0xac);
    }
    else {
      puVar4 = *(undefined8 **)(uVar19 + 0x1e0);
      for (puVar21 = *(undefined8 **)(uVar19 + 0x1d8); puVar21 < puVar4; puVar21 = puVar21 + 1) {
        iVar13 = (**(code **)(*(longlong *)*puVar21 + 0x10))();
        if ((iVar13 == 0xb) && (lVar20 = (**(code **)(*(longlong *)*puVar21 + 0x18))(), lVar20 != 0)
           ) {
          FUN_140ca3790(lVar20,auStack_190,auStack_18c,auStack_188);
          break;
        }
      }
    }
  }
  plVar23 = _DAT_1424110e8;
  cStack_19c = '\0';
  uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168);
  if ((auStack_190[0] != 0x8ad0) ||
     (uStack_168 = CONCAT22(uStack_168._2_2_,(ushort)uStack_168),
     *(char *)((longlong)plVar18 + 0x14c) != '\x04')) goto LAB_140a31c07;
  uStack_1a0 = 0xffff;
  plVar24 = _DAT_1424110e0;
  if (_DAT_1424110e0 != _DAT_1424110e8) {
    do {
      plVar31 = (longlong *)*plVar24;
      iVar13 = (**(code **)(*plVar31 + 0x120))(plVar31);
      if ((iVar13 <= (short)plVar31[0x24]) &&
         (cVar9 = (**(code **)(*plVar31 + 600))(plVar31), cVar9 == '\0')) {
        iVar13 = (int)plVar31[2];
        plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,iVar13);
        uVar16 = *(uint *)(plVar18 + 2);
        iVar15 = -(iVar13 - uVar16);
        if (iVar15 < 0) {
          iVar15 = iVar13 - uVar16;
        }
        iVar14 = *(int *)((longlong)plVar31 + 0x1c);
        iVar26 = iVar14 - *(int *)((longlong)plVar18 + 0x1c);
        iVar28 = -iVar26;
        if (iVar28 < 0) {
          iVar28 = iVar26;
        }
        iVar26 = (int)plVar18[4];
        uStack_168._0_2_ = (ushort)iVar26;
        uStack_168._2_2_ = (undefined2)((uint)iVar26 >> 0x10);
        iVar26 = (int)plVar31[4] - iVar26;
        iVar29 = -iVar26;
        if (iVar29 < 0) {
          iVar29 = iVar26;
        }
        iVar26 = (int)(short)iVar28 * (int)(short)iVar28;
        iVar15 = (int)(short)iVar15 * (int)(short)iVar15;
        iVar28 = (int)(short)iVar29 * (int)(short)iVar29;
        if (iVar28 <= iVar15 + iVar26) {
          fVar45 = (float)(iVar28 + iVar26 + iVar15);
          if (fVar45 < 0.0) {
            fVar45 = (float)callee_1415548d6(fVar45);
            uVar16 = *(uint *)(plVar18 + 2);
            iVar13 = (int)plStack_160;
          }
          else {
            fVar45 = SQRT(fVar45);
          }
          plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,(int)fVar45);
          sVar12 = (short)(int)fVar45;
          if (((uStack_1a0 == 0xffff) || (sVar12 <= (short)uStack_1a0)) && (sVar12 < 0x1a)) {
            uVar27 = (ushort)*(undefined4 *)((longlong)plVar18 + 0x1c);
            sVar12 = (short)iVar14 - uVar27;
            sVar38 = (short)uVar16;
            sVar35 = (short)iVar13 - sVar38;
            iVar13 = -(int)sVar35;
            if (iVar13 < 0) {
              iVar13 = (int)sVar35;
            }
            iVar15 = -(int)sVar12;
            if (iVar15 < 0) {
              iVar15 = (int)sVar12;
            }
            iVar14 = (int)(short)iVar13;
            iVar13 = (int)(short)iVar15;
            if ((sVar12 < 0) && (iVar14 * 2 <= iVar13)) {
LAB_140a317e6:
              bVar30 = 0;
            }
            else if ((sVar12 < 1) || (iVar13 < iVar14 * 2)) {
              if (sVar35 < 0) {
                if (iVar14 < iVar13 * 2) {
                  if (sVar12 < 1) {
                    if (-1 < sVar12) goto LAB_140a317e6;
                    bVar30 = 7;
                  }
                  else {
                    bVar30 = 5;
                  }
                }
                else {
                  bVar30 = 6;
                }
              }
              else {
                if (sVar35 < 1) goto LAB_140a317e6;
                if (iVar14 < iVar13 * 2) {
                  if (sVar12 < 0) {
                    bVar30 = 1;
                  }
                  else {
                    if (sVar12 < 1) goto LAB_140a317e6;
                    bVar30 = 3;
                  }
                }
                else {
                  bVar30 = 2;
                }
              }
            }
            else {
              bVar30 = 4;
            }
            if (*(byte *)((longlong)plVar18 + 0x14a) == bVar30) {
              if (bVar30 < 8) {
                auStack_1a8[0] = uVar27;
                    /* WARNING: Switch is manually overridden */
                switch(bVar30) {
                case 0:
                  uVar16 = uVar16 & 0xffff;
                  uStack_194 = CONCAT22(uStack_194._2_2_,sVar38);
                  auStack_1a8[0] = uVar27 + 1;
                  break;
                case 1:
                  uVar16 = uVar16 - 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  auStack_1a8[0] = uVar27 + 1;
                  break;
                case 2:
                  uVar16 = uVar16 - 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  break;
                case 3:
                  uVar16 = uVar16 - 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  auStack_1a8[0] = uVar27 - 1;
                  break;
                case 4:
                  uVar16 = uVar16 & 0xffff;
                  uStack_194 = CONCAT22(uStack_194._2_2_,sVar38);
                  auStack_1a8[0] = uVar27 - 1;
                  break;
                case 5:
                  uVar16 = uVar16 + 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  auStack_1a8[0] = uVar27 - 1;
                  break;
                case 6:
                  uVar16 = uVar16 + 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  break;
                case 7:
                  uVar16 = uVar16 + 1;
                  uStack_194 = CONCAT22(uStack_194._2_2_,(short)uVar16);
                  auStack_1a8[0] = uVar27 + 1;
                }
              }
              else {
                uVar16 = uStack_194 & 0xffff;
              }
              if ((short)uVar16 != -30000) {
                puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffffffffff00);
                cVar9 = FUN_14137f170(lStack_180,uVar16 & 0xffff,auStack_1a8[0],(ushort)uStack_168);
                if ((cVar9 != '\0') && (iVar13 = FUN_14139bee0(lStack_180), iVar13 != 0)) {
                  uVar17 = FUN_14139be10(lStack_180);
                  plStack_1d8 = (longlong *)CONCAT44(plStack_1d8._4_4_,uVar17);
                  uStack_1e0 = CONCAT22(uStack_1e0._2_2_,(short)plVar31[4]);
                  puStack_1e8 = (undefined2 *)
                                CONCAT62(puStack_1e8._2_6_,*(undefined2 *)((longlong)plVar31 + 0x1c)
                                        );
                  cVar9 = FUN_140aa84d0(*(undefined2 *)(lStack_180 + 0xa8),
                                        *(undefined2 *)(lStack_180 + 0xaa),
                                        *(undefined2 *)(lStack_180 + 0xac),(short)plVar31[2]);
                  if (cVar9 != '\0') {
                    auStack_190[0] = *(ushort *)(plVar31 + 2);
                    auStack_18c[0] = *(ushort *)((longlong)plVar31 + 0x1c);
                    auStack_188[0] = *(ushort *)(plVar31 + 4);
                    uVar42 = uStack_194 & 0xffff;
                    uVar40 = (uint)auStack_1a8[0];
                    auStack_198[0] = (ushort)uStack_168;
                    uStack_1a0 = (ushort)plStack_160;
                    cStack_19c = '\x01';
                    bStack_1a4 = bVar30;
                  }
                }
              }
            }
          }
        }
      }
      plVar24 = plVar24 + 1;
    } while (plVar24 != plVar23);
    if (auStack_190[0] != 0x8ad0) goto LAB_140a31c07;
  }
  uVar27 = *(ushort *)(plVar18 + 2);
  uVar41 = *(ushort *)((longlong)plVar18 + 0x1c);
  uVar16 = (uint)uVar41;
  uStack_1a0 = *(ushort *)(plVar18 + 4);
  if (7 < *(byte *)((longlong)plVar18 + 0x14a)) goto LAB_140a31a23;
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)((longlong)plVar18 + 0x14a)) {
  case 0:
    goto override_jmp_140a319f3_case_7;
  case 1:
    uVar27 = uVar27 + 0x19;
    goto override_jmp_140a319f3_case_7;
  case 2:
    uVar27 = uVar27 + 0x19;
    break;
  case 3:
    uVar27 = uVar27 + 0x19;
  case 4:
    uVar16 = (uint)(ushort)(uVar41 + 0x19);
    break;
  case 5:
    uVar27 = uVar27 - 0x19;
    uVar16 = (uint)(ushort)(uVar41 + 0x19);
    break;
  case 6:
    uVar27 = uVar27 - 0x19;
    break;
  case 7:
    uVar27 = uVar27 - 0x19;
override_jmp_140a319f3_case_7:
    uVar16 = (uint)(ushort)(uVar41 - 0x19);
  }
LAB_140a31a23:
  uStack_168 = 0;
  if (-1 < (short)uVar27) {
    uStack_168 = (uint)uVar27;
  }
  if ((short)uVar16 < 0) {
    uVar16 = 0;
  }
  uVar27 = (ushort)uVar16;
  if (_DAT_14250a55c <= (short)(ushort)uStack_168) {
    uStack_168 = _DAT_14250a55c - 1;
  }
  if (_DAT_14250a560 <= (int)uVar16) {
    uVar27 = (short)_DAT_14250a560 - 1;
  }
  sVar12 = uVar27 - *(short *)((longlong)plVar18 + 0x1c);
  sVar35 = (short)uStack_168 - (short)plVar18[2];
  iVar13 = -(int)sVar35;
  if (iVar13 < 0) {
    iVar13 = (int)sVar35;
  }
  iVar15 = -(int)sVar12;
  if (iVar15 < 0) {
    iVar15 = (int)sVar12;
  }
  iVar14 = (int)(short)iVar13;
  iVar13 = (int)(short)iVar15;
  if ((sVar12 < 0) && (iVar14 * 2 <= iVar13)) {
LAB_140a31af7:
    bVar30 = 0;
  }
  else if ((sVar12 < 1) || (iVar13 < iVar14 * 2)) {
    if (sVar35 < 0) {
      if (iVar14 < iVar13 * 2) {
        if (sVar12 < 1) {
          if (-1 < sVar12) goto LAB_140a31af7;
          bVar30 = 7;
        }
        else {
          bVar30 = 5;
        }
      }
      else {
        bVar30 = 6;
      }
    }
    else {
      if (sVar35 < 1) goto LAB_140a31af7;
      if (iVar14 < iVar13 * 2) {
        if (sVar12 < 0) {
          bVar30 = 1;
        }
        else {
          if (sVar12 < 1) goto LAB_140a31af7;
          bVar30 = 3;
        }
      }
      else {
        bVar30 = 2;
      }
    }
  }
  else {
    bVar30 = 4;
  }
  auStack_1a8[0] = *(ushort *)(plVar18 + 4);
  uVar41 = uStack_1a0;
  uVar33 = uStack_1a0;
  if (bVar30 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(bVar30) {
    case 0:
      uVar41 = *(ushort *)(plVar18 + 2);
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) + 1;
      break;
    case 1:
      uVar41 = (short)plVar18[2] - 1;
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) + 1;
      break;
    case 2:
      uVar41 = (short)plVar18[2] - 1;
      uVar33 = *(ushort *)((longlong)plVar18 + 0x1c);
      break;
    case 3:
      uVar41 = (short)plVar18[2] - 1;
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) - 1;
      break;
    case 4:
      uVar41 = *(ushort *)(plVar18 + 2);
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) - 1;
      break;
    case 5:
      uVar41 = (short)plVar18[2] + 1;
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) - 1;
      break;
    case 6:
      uVar41 = (short)plVar18[2] + 1;
      uVar33 = *(ushort *)((longlong)plVar18 + 0x1c);
      break;
    case 7:
      uVar41 = (short)plVar18[2] + 1;
      uVar33 = *(short *)((longlong)plVar18 + 0x1c) + 1;
    }
  }
  if (uVar41 != 0x8ad0) {
    puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffffffffff00);
    cVar9 = FUN_14137f170(lStack_180,uVar41,uVar33,auStack_1a8[0]);
    if (cVar9 == '\0') goto LAB_140a31c07;
    auStack_190[0] = (ushort)uStack_168;
    auStack_188[0] = uStack_1a0;
    uVar40 = (uint)uVar33;
    uVar33 = auStack_1a8[0];
    auStack_18c[0] = uVar27;
    goto LAB_140a31ed2;
  }
LAB_140a31c07:
  lVar20 = lStack_180;
  uVar41 = (ushort)uVar42;
  bVar30 = bStack_1a4;
  uVar33 = auStack_198[0];
  if (uVar41 != 0x8ad0) goto LAB_140a31ed2;
  uVar33 = *(ushort *)(plVar18 + 4);
  if (7 < *(byte *)((longlong)plVar18 + 0x14a)) goto LAB_140a31cec;
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)((longlong)plVar18 + 0x14a)) {
  case 0:
    uVar42 = (uint)*(ushort *)(plVar18 + 2);
    goto LAB_140a31cad;
  case 1:
    uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
    goto LAB_140a31cad;
  case 2:
    uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
    uVar40 = (uint)*(ushort *)((longlong)plVar18 + 0x1c);
    break;
  case 3:
    uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
    uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
    break;
  case 4:
    uVar42 = (uint)*(ushort *)(plVar18 + 2);
    uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
    break;
  case 5:
    uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
    uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
    break;
  case 6:
    uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
    uVar40 = (uint)*(ushort *)((longlong)plVar18 + 0x1c);
    break;
  case 7:
    uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
LAB_140a31cad:
    uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) + 1);
  }
  if ((short)uVar42 == -30000) {
LAB_140a31cec:
    bStack_1a4 = *(byte *)((longlong)plVar18 + 0x14a);
    uVar41 = (ushort)uVar42;
    bVar30 = bStack_1a4;
    if (uVar41 == 0x8ad0) goto LAB_140a31d02;
  }
  else {
    puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffffffffff00);
    cVar9 = FUN_14137f170(lStack_180,uVar42,uVar40,uVar33);
    if (cVar9 != '\0') goto LAB_140a31cec;
    uVar42 = 0xffff8ad0;
LAB_140a31d02:
    iVar13 = 0;
    do {
      if (iVar13 == *(char *)((longlong)plVar18 + 0x14a)) goto LAB_140a31de4;
      uVar33 = *(ushort *)(plVar18 + 4);
      bVar30 = (byte)iVar13;
      if (7 < bVar30) goto LAB_140a31dc1;
                    /* WARNING: Switch is manually overridden */
      switch(bVar30) {
      case 0:
        uVar42 = (uint)*(ushort *)(plVar18 + 2);
        goto LAB_140a31db8;
      case 1:
        uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
        goto LAB_140a31db8;
      case 2:
        uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
        uVar40 = (uint)*(ushort *)((longlong)plVar18 + 0x1c);
        break;
      case 3:
        uVar42 = (uint)(ushort)((short)plVar18[2] - 1);
        uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
        break;
      case 4:
        uVar42 = (uint)*(ushort *)(plVar18 + 2);
        uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
        break;
      case 5:
        uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
        uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) - 1);
        break;
      case 6:
        uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
        uVar40 = (uint)*(ushort *)((longlong)plVar18 + 0x1c);
        break;
      case 7:
        uVar42 = (uint)(ushort)((short)plVar18[2] + 1);
LAB_140a31db8:
        uVar40 = (uint)(ushort)(*(short *)((longlong)plVar18 + 0x1c) + 1);
      }
LAB_140a31dc1:
      uVar41 = (ushort)uVar42;
      if (uVar41 != 0x8ad0) {
        puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffffffffff00);
        cVar9 = FUN_14137f170(lVar20,uVar42 & 0xffff,uVar40,uVar33);
        if (cVar9 != '\0') break;
      }
LAB_140a31de4:
      uVar41 = (ushort)uVar42;
      iVar13 = iVar13 + 1;
      bVar30 = bStack_1a4;
    } while (iVar13 < 8);
    if (uVar41 == 0x8ad0) {
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0xf;
      uStack_e0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0xf;
      uStack_c0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_fc = 0;
      uStack_f4 = 0;
      uStack_ec = 0;
      uStack_a0 = 0xffffffffffffffff;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffff;
      uStack_78 = 0xffffffff;
      uStack_74 = 0x8ad08ad0;
      uStack_70 = 0x8ad0;
      auStack_108[0] = 0x50;
      puStack_1e8 = auStack_108;
      FUN_14133d990(lVar20,1,0,0);
      FUN_140070d80(&uStack_98);
      FUN_140070e80(&uStack_c0);
      FUN_140070e80(&uStack_e0);
      goto LAB_140a32408;
    }
  }
LAB_140a31ed2:
  param_1 = lStack_180;
  if (((*(ushort *)(lStack_180 + 0xa8) != uVar41) ||
      (*(short *)(lStack_180 + 0xaa) != (short)uVar40)) ||
     (*(ushort *)(lStack_180 + 0xac) != uVar33)) {
    puStack_1e8 = (undefined2 *)((ulonglong)puStack_1e8 & 0xffffffff00000000);
    FUN_140074ea0(lStack_180,uVar41,uVar40,uVar33);
    goto LAB_140a32408;
  }
  if (*(char *)((longlong)plVar18 + 0x14d) != '\0') goto LAB_140a32408;
  if (((*(char *)((longlong)plVar18 + 0x14c) < '\x03') ||
      (*(byte *)((longlong)plVar18 + 0x14a) != bVar30)) || (auStack_190[0] == 0x8ad0)) {
    bVar1 = *(byte *)((longlong)plVar18 + 0x14a);
    if ((bVar1 != bVar30) && ((char)plVar18[0x2a] < '\x01')) {
      cVar10 = bVar30 - bVar1;
      cVar9 = cVar10 + '\b';
      if (-5 < cVar10) {
        cVar9 = cVar10;
      }
      cVar10 = cVar9 + -8;
      if (cVar9 < '\x05') {
        cVar10 = cVar9;
      }
      uVar42 = (int)(char)bVar1 + 1;
      if (cVar10 < '\x01') {
        uVar42 = (int)(char)bVar1 + 7;
      }
      uVar42 = uVar42 & 0x80000007;
      if ((int)uVar42 < 0) {
        uVar42 = (uVar42 - 1 | 0xfffffff8) + 1;
      }
      *(char *)((longlong)plVar18 + 0x14a) = (char)uVar42;
      *(undefined1 *)(plVar18 + 0x2a) = 4;
    }
    goto LAB_140a32408;
  }
  plVar23 = (longlong *)**(longlong **)(plVar18[0x25] + 0x20);
  cVar9 = (**(code **)(*plVar23 + 0x448))(plVar23);
  if ((cVar9 == '\0') || ((int)plVar23[0x10] == 1)) {
    FUN_140c7b1e0(plVar23,2);
  }
  else {
    plVar23 = (longlong *)(**(code **)(*plVar23 + 0x388))(plVar23,1,0);
    (**(code **)(*plVar23 + 0x328))(plVar23,1);
  }
  if (plVar23 == (longlong *)0x0) {
LAB_140a323f3:
    puStack_1e8 = (undefined2 *)0x0;
    FUN_14133d990(param_1,1,0,0);
    goto LAB_140a32408;
  }
  uStack_1a0 = auStack_190[0];
  auStack_198[0] = auStack_18c[0];
  auStack_1a8[0] = auStack_188[0];
  if ((*(uint *)(param_1 + 0x118) >> 0x16 & 1) != 0) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xffbfffff;
    FUN_14065d210(param_1);
  }
  (**(code **)(*plVar23 + 0x710))(plVar23);
  plVar24 = (longlong *)FUN_1400bb3f0(*(undefined4 *)((longlong)plVar23 + 0x1c),param_1 + 0xd50);
  if (plVar24 == (longlong *)0x0) {
    plVar24 = (longlong *)FUN_1415530e0(0x10);
    *(undefined4 *)plVar24 = 0xffffffff;
    *(undefined8 *)((longlong)plVar24 + 4) = 0;
    *(undefined4 *)((longlong)plVar24 + 0xc) = 0;
    *(undefined4 *)plVar24 = *(undefined4 *)((longlong)plVar23 + 0x1c);
    plStack_150 = plVar24;
    FUN_1400bb5d0(plVar24,param_1 + 0xd50);
  }
  *(int *)((longlong)plVar24 + 0xc) = *(int *)((longlong)plVar24 + 0xc) + 1;
  lVar36 = _DAT_1423f3c80;
  lVar20 = _DAT_1423b59d8;
  if (_DAT_1418be238 == 0) {
    if (DAT_1418be2e6 == '\x01') {
LAB_140a320eb:
      *(uint *)(plVar23 + 2) = *(uint *)(plVar23 + 2) | 0x80000;
      FUN_140c7b1e0(plVar23,3);
      goto LAB_140a32102;
    }
    if ((DAT_1418be2e6 == '\x02') &&
       (iVar13 = (int)(_DAT_1423b59e0 - _DAT_1423b59d8 >> 3) + -1, -1 < iVar13)) {
      lVar32 = (longlong)iVar13;
      do {
        lVar7 = *(longlong *)(lVar20 + lVar32 * 8);
        iVar13 = *(int *)(lVar7 + 4);
        if ((iVar13 == -1) || ((lVar36 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0)) {
LAB_140a320cd:
          uVar27 = *(ushort *)(lVar7 + 0x18);
          if (((uVar27 & 1) != 0) && (((uVar27 & 2) != 0 && (param_1 = lStack_180, iVar13 != -1))))
          goto LAB_140a320eb;
        }
        else {
          lVar25 = FUN_1400bb6d0(iVar13,&DAT_1423f3c78);
          if ((lVar25 == 0) ||
             ((*(int *)(*(longlong *)(lVar25 + 8) + 0x3a8) < 1 ||
              ((**(byte **)(*(longlong *)(lVar25 + 8) + 0x3a0) & 4) == 0)))) goto LAB_140a320cd;
        }
        lVar32 = lVar32 + -1;
      } while (-1 < lVar32);
    }
  }
  else {
LAB_140a32102:
    if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
      FUN_1407fdb30(0x159d);
    }
  }
  plVar24 = (longlong *)FUN_1415530e0(0xa0);
  plStack_150 = plVar24;
  projectile_base_init(plVar24,0);
  *plVar24 = (longlong)&UNK_141678420;
  if ((*(uint *)(plVar23 + 2) & 0x20000000) == 0) {
    FUN_140c7dc00(plVar23);
  }
  iVar13 = *(int *)((longlong)plVar23 + 0x74);
  if ((*(uint *)(plVar23 + 2) & 0x20000000) == 0) {
    FUN_140c7dc00(plVar23);
  }
  uVar19 = uStack_178;
  lVar20 = lStack_180;
  lVar36 = (longlong)(int)plVar23[0xf] + (longlong)iVar13 * 1000000;
  if (lVar36 < 1) {
    iVar13 = 200;
  }
  else {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = SUB168(SEXT816(1000000000),8);
    iVar13 = SUB164((auVar8 << 0x40 | ZEXT816(1000000000)) / SEXT816(lVar36),0);
  }
  *(int *)(plVar24 + 0xb) = iVar13;
  iVar15 = 200;
  if (iVar13 < 0xc9) {
    if (iVar13 < 0x14) {
      iVar15 = 0x14;
      goto LAB_140a321a3;
    }
  }
  else {
LAB_140a321a3:
    iVar13 = iVar15;
    *(int *)(plVar24 + 0xb) = iVar13;
  }
  uVar11 = (undefined2)plVar18[2];
  *(undefined2 *)(plVar24 + 4) = uVar11;
  uVar2 = *(undefined2 *)((longlong)plVar18 + 0x1c);
  *(undefined2 *)((longlong)plVar24 + 0x22) = uVar2;
  uVar3 = (undefined2)plVar18[4];
  *(undefined2 *)((longlong)plVar24 + 0x24) = uVar3;
  *(undefined2 *)((longlong)plVar24 + 0x32) = uVar11;
  *(undefined2 *)((longlong)plVar24 + 0x34) = uVar2;
  *(undefined2 *)((longlong)plVar24 + 0x36) = uVar3;
  *(ushort *)((longlong)plVar24 + 0x26) = uStack_1a0;
  *(ushort *)(plVar24 + 5) = auStack_198[0];
  *(ushort *)((longlong)plVar24 + 0x2a) = auStack_1a8[0];
  *(undefined4 *)(plVar24 + 7) = 0;
  *(undefined4 *)(plVar24 + 8) = 0;
  *(int *)((longlong)plVar24 + 0x3c) = iVar13;
  if (0x3c < iVar13) {
    iVar13 = 0x3c;
    *(undefined4 *)((longlong)plVar24 + 0x3c) = 0x3c;
  }
  if ((uStack_178 != 0) && ((*(uint *)(uStack_178 + 0x110) & 0x8000) != 0)) {
    iVar15 = (int)*(short *)(lStack_180 + 0xa8) - (int)(short)uStack_1a0;
    iVar13 = -iVar15;
    if (iVar13 < 0) {
      iVar13 = iVar15;
    }
    *(int *)((longlong)plVar24 + 0x3c) = iVar13;
    iVar14 = (int)*(short *)(lStack_180 + 0xaa) - (int)(short)auStack_198[0];
    iVar15 = -iVar14;
    if (iVar15 < 0) {
      iVar15 = iVar14;
    }
    if (iVar13 < iVar15) {
      *(int *)((longlong)plVar24 + 0x3c) = iVar15;
      iVar13 = iVar15;
    }
  }
  *(int *)((longlong)plVar24 + 0x44) = iVar13 + -1;
  *(undefined2 *)((longlong)plVar24 + 0x2c) = uVar11;
  *(undefined2 *)((longlong)plVar24 + 0x2e) = uVar2;
  *(undefined2 *)(plVar24 + 6) = uVar3;
  plVar24[0x13] = (longlong)plVar23;
  *(undefined2 *)(plVar23 + 1) = uVar11;
  *(undefined2 *)(plVar24[0x13] + 10) = *(undefined2 *)((longlong)plVar24 + 0x2e);
  *(short *)(plVar24[0x13] + 0xc) = (short)plVar24[6];
  FUN_140073c90(plVar24[0x13],0xc,(int)plVar24[2]);
  plVar24[3] = lVar20;
  *(undefined4 *)((longlong)plVar24 + 0x4c) = 0;
  *(uint *)(plVar23 + 2) = *(uint *)(plVar23 + 2) | 2;
  if (uVar19 != 0) {
    *(undefined4 *)(plVar24 + 0xd) = *(undefined4 *)(uVar19 + 0x130);
  }
  uStack_1e0 = 3;
  if (cStack_19c == '\0') {
    uStack_1e0 = 1;
  }
  uStack_1b8 = 0xffffffff;
  uStack_1c0 = 0x2f;
  uStack_1c8 = 1;
  uStack_1d0 = 0;
  puStack_1e8 = (undefined2 *)CONCAT44(puStack_1e8._4_4_,uStack_1e0);
  plStack_1d8 = plVar23;
  iVar13 = FUN_1413812a0(lVar20,0x39,0xb,0xf);
  *(int *)(plVar24 + 10) = iVar13 + 100;
  if (uVar19 != 0) {
    FUN_1414fc5c0(0x1423f3970,lVar20,uVar19,6);
  }
  if (*(short *)(lVar20 + 0x814) == 2) {
    *(uint *)(plVar24 + 9) = *(uint *)(plVar24 + 9) | 0x40;
  }
  *(undefined1 *)((longlong)plVar18 + 0x14d) = 1;
  FUN_1413843f0(lVar20);
LAB_140a32408:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_208);
  return;
}

