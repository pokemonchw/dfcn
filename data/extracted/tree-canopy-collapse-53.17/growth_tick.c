/* Actual Ghidra output; researcher-assigned name. VA 0x141416800..0x14141892b; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong growth_tick(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  char cVar15;
  short sVar16;
  short sVar17;
  undefined2 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined2 *puVar25;
  byte bVar26;
  ushort uVar27;
  short *psVar28;
  short sVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  ushort *puVar33;
  longlong *plVar34;
  longlong *plVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ushort uVar38;
  uint uVar39;
  ulonglong unaff_RDI;
  int iVar40;
  int iVar41;
  longlong *plVar42;
  longlong *plVar43;
  short sVar44;
  uint uVar45;
  uint uVar46;
  short sVar47;
  byte unaff_R14B;
  short sVar48;
  bool bVar49;
  longlong *plStackX_8;
  ushort auStackX_10 [4];
  undefined8 *puStackX_18;
  int iStackX_20;
  ushort in_stack_ffffffffffffff48;
  ushort in_stack_ffffffffffffff50;
  ushort in_stack_ffffffffffffff58;
  int iStack_78;
  
  plVar42 = param_1;
  plStackX_8 = param_1;
  FUN_140287660(auStackX_10,0x15);
  sVar44 = (short)param_1[1];
  uVar36 = (ulonglong)sVar44;
  sVar47 = *(short *)((longlong)param_1 + 6);
  uVar45 = (uint)sVar47;
  plVar43 = (longlong *)(ulonglong)uVar45;
  sVar48 = *(short *)((longlong)param_1 + 4);
  uVar46 = (uint)sVar48;
  uVar37 = (ulonglong)uVar46;
  if (((((-1 < sVar48) && ((int)uVar46 < _DAT_14250a55c)) && (-1 < sVar47)) &&
      (((int)uVar45 < _DAT_14250a560 && (-1 < sVar44)))) && (sVar44 < _DAT_14250a564)) {
    sVar16 = sVar48 >> 4;
    sVar29 = sVar47 >> 4;
    if ((_DAT_14250a528 != (longlong *)0x0) &&
       (lVar30 = *(longlong *)
                  (*(longlong *)(_DAT_14250a528[sVar16] + (longlong)sVar29 * 8) + uVar36 * 8),
       lVar30 != 0)) {
      uVar31 = uVar46 & 0x8000000f;
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
      }
      param_1 = (longlong *)(ulonglong)uVar31;
      uVar39 = uVar45 & 0x8000000f;
      if ((int)uVar39 < 0) {
        uVar39 = (uVar39 - 1 | 0xfffffff0) + 1;
      }
      unaff_RDI = (ulonglong)uVar39;
      uVar38 = *(ushort *)
                (lVar30 + (((longlong)(short)uVar31 + 5) * 0x10 + (longlong)(short)uVar39) * 2);
      uVar20 = *(uint *)(lVar30 + 0x2a0 +
                        ((longlong)(short)uVar31 * 0x10 + (longlong)(short)uVar39) * 4);
      bVar14 = (byte)uVar20 & 1;
      bVar26 = bVar14 | 2;
      if ((uVar20 & 2) == 0) {
        bVar26 = bVar14;
      }
      unaff_R14B = bVar26 | 4;
      if ((uVar20 & 4) == 0) {
        unaff_R14B = bVar26;
      }
      iVar19 = -1;
      iVar21 = -1;
      if (((_DAT_1418be238 == 0) || (_DAT_142153ec0 == (_DAT_142153ec0 / 0x5a0) * 0x5a0)) &&
         (iVar21 = -1, iVar19 = -1, (*(byte *)(plStackX_8 + 2) & 4) == 0)) {
        iVar19 = *(int *)((longlong)plStackX_8 + 0xc) / 0x9d80;
        iVar40 = *(int *)((longlong)plStackX_8 + 0xc) + 1;
        *(int *)((longlong)plStackX_8 + 0xc) = iVar40;
        iVar21 = iVar40 / 0x9d80;
        if (50399999 < iVar40) {
          ((short *)((longlong)plStackX_8 + 0xc))[0] = 0xb00;
          ((short *)((longlong)plStackX_8 + 0xc))[1] = 0x301;
        }
      }
      sVar17 = (short)*plStackX_8;
      plVar23 = plStackX_8;
      if ((sVar17 == 0) || (sVar17 == 1)) {
        if ((((unaff_R14B != 0) && (((*(byte *)(plStackX_8 + 2) & 4) == 0 && (uVar38 == 0xe3)))) &&
            (sVar48 = *(short *)((longlong)plStackX_8 + 2), -1 < sVar48)) &&
           ((((ulonglong)(longlong)sVar48 < (ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) &&
             (cVar15 = *(char *)(*(longlong *)(_DAT_14250ed78 + (longlong)sVar48 * 8) + 0x282),
             cVar15 <= (char)unaff_R14B)) && ('\0' < cVar15)))) {
          if ((((int)uVar46 < _DAT_14250a55c) && ((int)uVar45 < _DAT_14250a560)) &&
             ((sVar44 < _DAT_14250a564 &&
              ((plVar43 = (longlong *)(ulonglong)CONCAT22(sVar47 >> 0xf,sVar29),
               _DAT_14250a528 != (longlong *)0x0 &&
               (lVar30 = *(longlong *)
                          (*(longlong *)(_DAT_14250a528[sVar16] + (longlong)sVar29 * 8) + uVar36 * 8
                          ), lVar30 != 0)))))) {
            *(undefined2 *)
             (lVar30 + (((longlong)(int)uVar31 + 5) * 0x10 + (longlong)(int)uVar39) * 2) = 0x184;
          }
          *(uint *)(plStackX_8 + 2) = *(uint *)(plStackX_8 + 2) | 4;
        }
        if (*(int *)((longlong)plStackX_8 + 0xc) < 0x1d880) goto LAB_141416ee5;
        if (uVar38 == 0xe3) {
          sVar44 = (short)plStackX_8[1];
          lVar30 = (longlong)sVar44;
          sVar47 = *(short *)((longlong)plStackX_8 + 6);
          uVar45 = (uint)sVar47;
          sVar48 = *(short *)((longlong)plStackX_8 + 4);
          uVar46 = (uint)sVar48;
          if ((((((-1 < sVar48) && ((int)uVar46 < _DAT_14250a55c)) && (-1 < sVar47)) &&
               (((int)uVar45 < _DAT_14250a560 && (-1 < sVar44)))) && (sVar44 < _DAT_14250a564)) &&
             ((unaff_RDI = (ulonglong)uVar45, _DAT_14250a528 != (longlong *)0x0 &&
              (lVar4 = *(longlong *)
                        (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8) +
                        lVar30 * 8), lVar4 != 0)))) {
            uVar31 = uVar46 & 0x8000000f;
            if ((int)uVar31 < 0) {
              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
            }
            uVar39 = uVar45 & 0x8000000f;
            if ((int)uVar39 < 0) {
              uVar39 = (uVar39 - 1 | 0xfffffff0) + 1;
            }
            if ((*(byte *)(lVar4 + 0x6a0 +
                          ((longlong)(int)uVar31 * 0x10 + (longlong)(int)uVar39) * 4) & 0x20) != 0)
            goto LAB_141416ee5;
          }
          unaff_RDI = (ulonglong)uVar45;
          uVar36 = func_0x000140069640(0x1423f3970,sVar48,sVar47);
          plVar23 = plStackX_8;
          if ((uVar36 & 8) != 0) goto LAB_141416ee5;
          if (((((-1 < sVar48) && ((int)uVar46 < _DAT_14250a55c)) && (-1 < sVar47)) &&
              (((int)uVar45 < _DAT_14250a560 && (-1 < (short)lVar30)))) &&
             (((int)lVar30 < _DAT_14250a564 &&
              ((_DAT_14250a528 != (longlong *)0x0 &&
               (lVar30 = *(longlong *)
                          (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8)
                          + lVar30 * 8), lVar30 != 0)))))) {
            uVar31 = uVar46 & 0x8000000f;
            if ((int)uVar31 < 0) {
              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
            }
            uVar39 = uVar45 & 0x8000000f;
            if ((int)uVar39 < 0) {
              uVar39 = (uVar39 - 1 | 0xfffffff0) + 1;
            }
            unaff_RDI = (ulonglong)uVar39;
            if ((*(byte *)(lVar30 + 0x6a0 +
                          ((longlong)(int)uVar31 * 0x10 + (longlong)(int)uVar39) * 4) & 0x10) != 0)
            goto LAB_141416ee5;
          }
          uVar36 = func_0x000140069640(0x1423f3970,sVar48,sVar47);
          plVar23 = plStackX_8;
          if ((uVar36 & 7) != 0) goto LAB_141416ee5;
          iVar19 = ((int)uVar46 / 0x30) * 0x30;
          iVar21 = ((int)uVar45 / 0x30) * 0x30;
          puStackX_18 = (undefined8 *)FUN_1415530e0(0x48);
          plVar23 = plStackX_8;
          uVar36 = 0;
          *puStackX_18 = 0;
          puStackX_18[1] = 0;
          puStackX_18[2] = 0;
          puStackX_18[3] = 0;
          puStackX_18[4] = 0;
          *(undefined4 *)((longlong)puStackX_18 + 0x2c) = 7;
          *(undefined4 *)(puStackX_18 + 6) = 7;
          puStackX_18[7] = 0;
          *(undefined4 *)(puStackX_18 + 8) = 0;
          *(undefined2 *)((longlong)puStackX_18 + 0x44) = 0;
          plStackX_8[8] = (longlong)puStackX_18;
          *(undefined4 *)(puStackX_18 + 5) = 10;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (longlong)*(int *)(plStackX_8[8] + 0x28);
          uVar22 = SUB168(ZEXT816(8) * auVar7,0);
          if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)plVar23[8] = uVar22;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (longlong)*(int *)(plVar23[8] + 0x28);
          uVar22 = SUB168(ZEXT816(2) * auVar8,0);
          if (SUB168(ZEXT816(2) * auVar8,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)(plVar23[8] + 8) = uVar22;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (longlong)*(int *)(plVar23[8] + 0x28);
          uVar22 = SUB168(ZEXT816(2) * auVar9,0);
          if (SUB168(ZEXT816(2) * auVar9,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)(plVar23[8] + 0x10) = uVar22;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (longlong)*(int *)(plVar23[8] + 0x28);
          uVar22 = SUB168(ZEXT816(2) * auVar10,0);
          if (SUB168(ZEXT816(2) * auVar10,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)(plVar23[8] + 0x18) = uVar22;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (longlong)*(int *)(plVar23[8] + 0x28);
          uVar22 = SUB168(ZEXT816(2) * auVar11,0);
          if (SUB168(ZEXT816(2) * auVar11,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)(plVar23[8] + 0x20) = uVar22;
          lVar30 = plVar23[8];
          uVar37 = uVar36;
          uVar32 = uVar36;
          if (0 < *(int *)(lVar30 + 0x28)) {
            do {
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (longlong)(*(int *)(lVar30 + 0x30) * *(int *)(lVar30 + 0x2c));
              uVar22 = SUB168(ZEXT816(2) * auVar12,0);
              if (SUB168(ZEXT816(2) * auVar12,8) != 0) {
                uVar22 = 0xffffffffffffffff;
              }
              uVar22 = func_0x000141553434(uVar22);
              *(undefined8 *)(uVar32 + *(longlong *)plVar23[8]) = uVar22;
              plVar42 = (longlong *)plVar23[8];
              func_0x000141554566(*(undefined8 *)(uVar32 + *plVar42),0,
                                  (longlong)*(int *)((longlong)plVar42 + 0x2c) *
                                  (longlong)(int)plVar42[6] * 2);
              *(short *)(uVar36 + *(longlong *)(plVar23[8] + 8)) =
                   (short)(*(int *)(plVar23[8] + 0x2c) / 2);
              *(short *)(uVar36 + *(longlong *)(plVar23[8] + 0x10)) =
                   (short)(*(int *)(plVar23[8] + 0x2c) / 2);
              *(short *)(uVar36 + *(longlong *)(plVar23[8] + 0x18)) =
                   (short)(*(int *)(plVar23[8] + 0x30) / 2);
              *(short *)(uVar36 + *(longlong *)(plVar23[8] + 0x20)) =
                   (short)(*(int *)(plVar23[8] + 0x30) / 2);
              uVar45 = (int)uVar37 + 1;
              uVar36 = uVar36 + 2;
              lVar30 = plVar23[8];
              uVar37 = (ulonglong)uVar45;
              uVar32 = uVar32 + 8;
            } while ((int)uVar45 < *(int *)(lVar30 + 0x28));
          }
          iVar40 = 0;
          *(undefined4 *)(lVar30 + 0x40) = 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (longlong)*(int *)(plVar23[8] + 0x40);
          uVar22 = SUB168(ZEXT816(8) * auVar13,0);
          if (SUB168(ZEXT816(8) * auVar13,8) != 0) {
            uVar22 = 0xffffffffffffffff;
          }
          uVar22 = func_0x000141553434(uVar22);
          *(undefined8 *)(plVar23[8] + 0x38) = uVar22;
          puVar24 = (undefined8 *)plVar23[8];
          if (0 < *(int *)(puVar24 + 8)) {
            lVar30 = 0;
            do {
              uVar22 = func_0x000141553434((longlong)
                                           (*(int *)(puVar24 + 6) *
                                           *(int *)((longlong)puVar24 + 0x2c)));
              *(undefined8 *)(lVar30 + *(longlong *)(plVar23[8] + 0x38)) = uVar22;
              lVar4 = plVar23[8];
              func_0x000141554566(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + lVar30),0,
                                  (longlong)*(int *)(lVar4 + 0x30) *
                                  (longlong)*(int *)(lVar4 + 0x2c));
              iVar40 = iVar40 + 1;
              lVar30 = lVar30 + 8;
              puVar24 = (undefined8 *)plVar23[8];
            } while (iVar40 < *(int *)(puVar24 + 8));
          }
          *(undefined2 *)
           (*(longlong *)*puVar24 +
           (longlong)
           ((*(int *)(puVar24 + 6) / 2) * *(int *)((longlong)puVar24 + 0x2c) +
           *(int *)((longlong)puVar24 + 0x2c) / 2) * 2) = 1;
          tree_geometry(plVar23,3);
          iVar41 = 0;
          puVar5 = (ulonglong *)plVar23[8];
          uVar45 = (int)puVar5[6] * *(int *)((longlong)puVar5 + 0x2c);
          plVar43 = (longlong *)(ulonglong)uVar45;
          sVar44 = 0;
          iVar40 = (int)puVar5[5];
          if (0 < iVar40) {
            unaff_RDI = *puVar5;
            do {
              psVar28 = *(short **)(unaff_RDI + (longlong)sVar44 * 8);
              plVar42 = plVar43;
              if (0 < (int)uVar45) {
                do {
                  if ((*psVar28 != 0) && (-1 < (char)*psVar28)) {
                    iVar41 = iVar41 + 1;
                  }
                  psVar28 = psVar28 + 1;
                  plVar42 = (longlong *)((longlong)plVar42 + -1);
                } while (plVar42 != (longlong *)0x0);
              }
              sVar44 = sVar44 + 1;
            } while (sVar44 < iVar40);
            if (1 < iVar41) {
              tree_map_update(plVar23);
              lVar30 = plVar23[8];
              sVar44 = *(short *)((longlong)plVar23 + 4) - (short)(*(int *)(lVar30 + 0x2c) / 2);
              sVar47 = 0;
              plVar42 = plStackX_8;
              plVar23 = plStackX_8;
              if (*(int *)(lVar30 + 0x2c) < 1) goto LAB_141416ee5;
              do {
                plVar23 = plStackX_8;
                plVar43 = plVar42;
                if (iVar19 <= sVar44) {
                  if (iVar19 + 0x2f < (int)sVar44) goto LAB_141416ee5;
                  sVar48 = *(short *)((longlong)plVar42 + 6) - (short)(*(int *)(lVar30 + 0x30) / 2);
                  unaff_RDI = 0;
                  if (0 < *(int *)(lVar30 + 0x30)) {
                    do {
                      if (iVar21 <= sVar48) {
                        plVar43 = plStackX_8;
                        if (iVar21 + 0x2f < (int)sVar48) break;
                        column_update(0x1423f3970,sVar44,sVar48);
                        FUN_1414cc2c0(0x1423f3970,sVar44,sVar48,1);
                      }
                      sVar48 = sVar48 + 1;
                      uVar38 = (short)unaff_RDI + 1;
                      unaff_RDI = (ulonglong)uVar38;
                      lVar30 = plVar23[8];
                      plVar43 = plStackX_8;
                    } while ((int)(short)uVar38 < *(int *)(lVar30 + 0x30));
                  }
                }
                sVar44 = sVar44 + 1;
                sVar47 = sVar47 + 1;
                plVar42 = plVar43;
                plVar23 = plStackX_8;
                if (*(int *)(lVar30 + 0x2c) <= (int)sVar47) goto LAB_141416ee5;
              } while( true );
            }
          }
          unaff_RDI = 0;
          if (puVar5 != (ulonglong *)0x0) {
            if (*puVar5 != 0) {
              uVar36 = unaff_RDI;
              if (0 < iVar40) {
                do {
                  func_0x0001415530d0(*(undefined8 *)(uVar36 + *puVar5));
                  uVar45 = (int)unaff_RDI + 1;
                  unaff_RDI = (ulonglong)uVar45;
                  uVar36 = uVar36 + 8;
                } while ((int)uVar45 < (int)puVar5[5]);
              }
              func_0x0001415530d0(*puVar5);
            }
            uVar36 = 0;
            if (puVar5[1] != 0) {
              func_0x0001415530d0();
            }
            if (puVar5[2] != 0) {
              func_0x0001415530d0();
            }
            if (puVar5[3] != 0) {
              func_0x0001415530d0();
            }
            if (puVar5[4] != 0) {
              func_0x0001415530d0();
            }
            unaff_RDI = uVar36;
            if (puVar5[7] != 0) {
              if (0 < (int)puVar5[8]) {
                do {
                  func_0x0001415530d0(*(undefined8 *)(unaff_RDI + puVar5[7]));
                  uVar45 = (int)uVar36 + 1;
                  uVar36 = (ulonglong)uVar45;
                  unaff_RDI = unaff_RDI + 8;
                } while ((int)uVar45 < (int)puVar5[8]);
              }
              func_0x0001415530d0(puVar5[7]);
            }
            func_0x0001415530d0(puVar5,0x48);
          }
          plVar23[8] = 0;
          sVar44 = (short)plVar23[1];
          sVar47 = *(short *)((longlong)plVar23 + 6);
          sVar48 = *(short *)((longlong)plVar23 + 4);
          if ((((-1 < sVar48) && (sVar48 < _DAT_14250a55c)) && (-1 < sVar47)) &&
             (((sVar47 < _DAT_14250a560 && (-1 < sVar44)) && (sVar44 < _DAT_14250a564)))) {
            plVar43 = _DAT_14250a528;
            if ((_DAT_14250a528 != (longlong *)0x0) &&
               (lVar30 = *(longlong *)
                          (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8)
                          + (longlong)sVar44 * 8), lVar30 != 0)) {
              uVar45 = (int)sVar48 & 0x8000000f;
              if ((int)uVar45 < 0) {
                uVar45 = (uVar45 - 1 | 0xfffffff0) + 1;
              }
              uVar46 = (int)sVar47 & 0x8000000f;
              if ((int)uVar46 < 0) {
                uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
              }
              *(undefined2 *)
               (lVar30 + (((longlong)(int)uVar45 + 5) * 0x10 + (longlong)(int)uVar46) * 2) = 0x184;
            }
          }
          *(uint *)(plVar23 + 2) = *(uint *)(plVar23 + 2) | 4;
          goto LAB_141416ee5;
        }
        plVar42 = (longlong *)plStackX_8[8];
        if (plVar42 == (longlong *)0x0) goto LAB_141416ee5;
        if (iVar21 <= iVar19) goto LAB_141416ee5;
        if (*(int *)((longlong)plStackX_8 + 0x1c) != -1) goto LAB_141416ee5;
        iVar19 = ((int)*(short *)((longlong)plStackX_8 + 4) / 0x30) * 0x30;
        iVar21 = ((int)*(short *)((longlong)plStackX_8 + 6) / 0x30) * 0x30;
        uVar45 = iVar19 + 0x2f;
        unaff_RDI = (ulonglong)uVar45;
        sVar47 = *(short *)((longlong)plStackX_8 + 4) -
                 (short)(*(int *)((longlong)plVar42 + 0x2c) / 2);
        sVar44 = 0;
        puStackX_18 = (undefined8 *)((ulonglong)puStackX_18 & 0xffffffffffff0000);
        iStackX_20 = iVar19;
        if (0 < *(int *)((longlong)plVar42 + 0x2c)) {
          do {
            uVar46 = (uint)sVar47;
            if (iVar19 <= (int)uVar46) {
              plVar43 = plVar42;
              if ((int)unaff_RDI < (int)uVar46) break;
              sVar48 = *(short *)((longlong)plStackX_8 + 6) - (short)((int)plVar42[6] / 2);
              auStackX_10[0] = 0;
              plVar43 = plStackX_8;
              if ((int)plVar42[6] < 1) {
                unaff_RDI = (ulonglong)(iVar19 + 0x2f);
              }
              else {
                do {
                  uVar31 = (uint)sVar48;
                  if (iVar21 <= (int)uVar31) {
                    if (iVar21 + 0x2f < (int)uVar31) break;
                    sVar16 = (short)plVar43[1];
                    sVar29 = 0;
                    if (0 < (int)plVar42[5]) {
                      iVar19 = (int)(short)auStackX_10[0];
                      do {
                        puVar33 = (ushort *)
                                  (*(longlong *)(*plVar42 + (longlong)sVar29 * 8) +
                                  (longlong)
                                  (iVar19 * *(int *)((longlong)plVar42 + 0x2c) + (int)sVar44) * 2);
                        uVar38 = *puVar33;
                        if ((((uVar38 != 0x80) && ((uVar38 & 1) != 0)) &&
                            ((sVar17 = func_0x0001400695b0(0x1423f3970,sVar47,sVar48),
                             sVar17 == 0x5e || (sVar17 == 0x86)))) &&
                           (((((*puVar33 = 0, -1 < sVar47 && ((int)uVar46 < _DAT_14250a55c)) &&
                              (-1 < sVar48)) && (((int)uVar31 < _DAT_14250a560 && (-1 < sVar16))))
                            && (sVar16 < _DAT_14250a564)))) {
                          if ((_DAT_14250a528 != (longlong *)0x0) &&
                             (lVar30 = *(longlong *)
                                        (*(longlong *)
                                          (_DAT_14250a528[sVar47 >> 4] + (longlong)(sVar48 >> 4) * 8
                                          ) + (longlong)sVar16 * 8), lVar30 != 0)) {
                            uVar39 = uVar46 & 0x8000000f;
                            if ((int)uVar39 < 0) {
                              uVar39 = (uVar39 - 1 | 0xfffffff0) + 1;
                            }
                            uVar20 = uVar31 & 0x8000000f;
                            if ((int)uVar20 < 0) {
                              uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined2 *)
                             (lVar30 + (((longlong)(int)uVar39 + 5) * 0x10 + (longlong)(int)uVar20)
                                       * 2) = 0x20;
                          }
                        }
                        sVar16 = sVar16 + 1;
                        sVar29 = sVar29 + 1;
                        plVar42 = (longlong *)plStackX_8[8];
                      } while ((int)sVar29 < (int)plVar42[5]);
                      plVar43 = plStackX_8;
                      sVar44 = (short)puStackX_18;
                    }
                  }
                  sVar48 = sVar48 + 1;
                  auStackX_10[0] = auStackX_10[0] + 1;
                } while ((int)(short)auStackX_10[0] < (int)plVar42[6]);
                unaff_RDI = (ulonglong)uVar45;
                iVar19 = iStackX_20;
              }
            }
            sVar47 = sVar47 + 1;
            sVar44 = sVar44 + 1;
            puStackX_18 = (undefined8 *)CONCAT62(puStackX_18._2_6_,sVar44);
            plVar43 = plVar42;
          } while ((int)sVar44 < *(int *)((longlong)plVar42 + 0x2c));
        }
        plVar23 = plStackX_8;
        tree_geometry(plStackX_8,1);
        tree_map_update(plVar23);
        lVar30 = plVar23[8];
        sVar47 = *(short *)((longlong)plVar23 + 4) - (short)(*(int *)(lVar30 + 0x2c) / 2);
        sVar44 = 0;
        if (*(int *)(lVar30 + 0x2c) < 1) goto LAB_141416ee5;
        do {
          if (iVar19 <= sVar47) {
            if ((int)unaff_RDI < (int)sVar47) goto LAB_141416ee5;
            sVar48 = *(short *)((longlong)plVar23 + 6) - (short)(*(int *)(lVar30 + 0x30) / 2);
            sVar16 = 0;
            iVar19 = iStackX_20;
            if (0 < *(int *)(lVar30 + 0x30)) {
              do {
                if (iVar21 <= sVar48) {
                  iVar19 = iStackX_20;
                  if (iVar21 + 0x2f < (int)sVar48) break;
                  column_update(0x1423f3970,sVar47,sVar48);
                  FUN_1414cc2c0(0x1423f3970,sVar47,sVar48,1);
                }
                sVar48 = sVar48 + 1;
                sVar16 = sVar16 + 1;
                lVar30 = plVar23[8];
                iVar19 = iStackX_20;
              } while ((int)sVar16 < *(int *)(lVar30 + 0x30));
            }
          }
          sVar47 = sVar47 + 1;
          sVar44 = sVar44 + 1;
          unaff_RDI = (ulonglong)(iVar19 + 0x2f);
          if (*(int *)(lVar30 + 0x2c) <= (int)sVar44) goto LAB_141416ee5;
        } while( true );
      }
      if ((sVar17 != 2) && (sVar17 != 3)) goto LAB_141416ee5;
      plVar42 = (longlong *)0x185;
      uVar18 = 0x185;
      if (uVar38 == 0x22) goto LAB_141416b97;
      if (uVar38 == 0x185) goto LAB_141416b97;
      bVar26 = unaff_R14B;
      if (uVar38 < 0x165) {
        if (uVar38 != 0x164) {
          unaff_R14B = 0;
          bVar26 = unaff_R14B;
          switch(uVar38) {
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x2f:
          case 0x53:
          case 0xf1:
          case 0xfe:
          case 0xff:
          case 0x100:
          case 0x102:
            break;
          default:
            goto LAB_141416b74;
          }
        }
      }
      else {
        if (0x299 < uVar38) {
          bVar26 = 0;
          switch(uVar38) {
          case 0x29a:
          case 0x29b:
          case 0x29c:
          case 0x29d:
          case 0x29e:
          case 0x29f:
          case 0x2a0:
          case 0x2a1:
          case 0x2a2:
          case 0x2a3:
          case 0x2a4:
          case 0x2a5:
          case 0x2a6:
          case 0x2a7:
            goto LAB_141416abb;
          default:
            goto LAB_141416b74;
          }
        }
        if (uVar38 != 0x299) {
          unaff_R14B = 0;
          bVar26 = unaff_R14B;
          switch(uVar38) {
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x23f:
          case 0x240:
          case 0x241:
          case 0x242:
          case 0x243:
          case 0x244:
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x248:
          case 0x249:
          case 0x24a:
          case 0x24b:
          case 0x24c:
          case 0x24d:
            break;
          default:
            goto LAB_141416b74;
          }
        }
      }
LAB_141416abb:
      unaff_R14B = bVar26;
      if ((((int)uVar46 < _DAT_14250a55c) && ((int)uVar45 < _DAT_14250a560)) &&
         (sVar44 < _DAT_14250a564)) {
        uVar37 = (ulonglong)CONCAT22(sVar48 >> 0xf,sVar16);
        plVar43 = (longlong *)(ulonglong)CONCAT22(sVar47 >> 0xf,sVar29);
        if (((_DAT_14250a528 != (longlong *)0x0) &&
            (*(longlong *)
              (*(longlong *)(_DAT_14250a528[sVar16] + (longlong)sVar29 * 8) + uVar36 * 8) != 0)) &&
           (plVar42 = (longlong *)FUN_14054ac50(), plVar42 != (longlong *)0x0)) {
          uVar45 = (int)*(short *)((longlong)plStackX_8 + 4) & 0x8000000f;
          if ((int)uVar45 < 0) {
            uVar45 = (uVar45 - 1 | 0xfffffff0) + 1;
          }
          uVar46 = (int)*(short *)((longlong)plStackX_8 + 6) & 0x8000000f;
          if ((int)uVar46 < 0) {
            uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
          }
          sVar44 = *(short *)((longlong)plVar42 +
                             ((longlong)(int)uVar45 * 0x10 + (longlong)(int)uVar46) * 2 + 8);
          if (sVar44 == 0x22) goto LAB_141418630;
          if (sVar44 == 0x185) goto LAB_141418630;
        }
      }
    }
  }
LAB_141416b74:
  uVar32 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  do {
    uVar18 = SUB82(plVar42,0);
    uVar46 = (uint)uVar37;
    uVar31 = (uint)uVar32;
    iVar19 = _Mtx_lock(0x1418beb70);
    if (iVar19 == 0) {
      if (_DAT_1418bebbc == 0x7fffffff) {
        _DAT_1418bebbc = 0x7ffffffe;
        __Throw_Cpp_error_std__YAXH_Z(6);
        pcVar6 = (code *)swi(3);
        uVar36 = (*pcVar6)();
        return uVar36;
      }
      _DAT_1426bde48 = _DAT_1426bde48 + -0x10;
      _Mtx_unlock(0x1418beb70);
      return uVar32 & 0xff;
    }
    __Throw_Cpp_error_std__YAXH_Z(5);
LAB_141416b97:
    plVar42 = plStackX_8;
    cVar15 = '\0';
    if (unaff_R14B != 0) {
      sVar44 = *(short *)((longlong)plStackX_8 + 2);
      if ((sVar44 < 0) ||
         ((ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) <= (ulonglong)(longlong)sVar44)) {
        cVar15 = '\0';
      }
      else {
        cVar15 = *(char *)(*(longlong *)(_DAT_14250ed78 + (longlong)sVar44 * 8) + 0x280);
      }
    }
    plVar23 = plStackX_8;
    if ((((*(uint *)(plStackX_8 + 2) & 2) != 0) || ((cVar15 <= (char)unaff_R14B && ('\0' < cVar15)))
        ) && ((*(uint *)(plStackX_8 + 2) & 4) == 0)) {
      if ((((int)uVar46 < _DAT_14250a55c) && ((int)plVar43 < _DAT_14250a560)) &&
         ((int)uVar36 < _DAT_14250a564)) {
        sVar44 = (short)plVar43 >> 4;
        plVar43 = (longlong *)CONCAT62((int6)((ulonglong)plVar43 >> 0x10),sVar44);
        if ((_DAT_14250a528 != (longlong *)0x0) &&
           (lVar30 = *(longlong *)
                      (*(longlong *)
                        (_DAT_14250a528[(short)((short)uVar46 >> 4)] + (longlong)sVar44 * 8) +
                      uVar36 * 8), lVar30 != 0)) {
          *(undefined2 *)
           (lVar30 + (((longlong)(int)uVar31 + 5) * 0x10 + (longlong)(int)unaff_RDI) * 2) = uVar18;
        }
      }
      *(uint *)(plStackX_8 + 2) = *(uint *)(plStackX_8 + 2) | 4;
      plVar23 = _DAT_142408648;
      while (plVar23 != (longlong *)0x0) {
        lVar30 = *plVar23;
        if (((*(short *)(lVar30 + 0x14) == 0xc) &&
            (*(short *)(lVar30 + 0x1c) == *(short *)((longlong)plVar42 + 4))) &&
           ((*(short *)(lVar30 + 0x1e) == *(short *)((longlong)plVar42 + 6) &&
            (*(short *)(lVar30 + 0x20) == (short)plVar42[1])))) {
          plVar23 = (longlong *)plVar23[2];
          if (lVar30 != 0) {
            FUN_140a812d0();
          }
        }
        else {
          plVar23 = (longlong *)plVar23[2];
        }
      }
      plVar23 = plStackX_8;
      if (_DAT_1418be238 == 0) {
        sVar44 = (short)plVar42[1];
        sVar47 = *(short *)((longlong)plVar42 + 6);
        sVar48 = *(short *)((longlong)plVar42 + 4);
        if (((((-1 < sVar48) && (sVar48 < _DAT_14250a55c)) && (-1 < sVar47)) &&
            ((sVar47 < _DAT_14250a560 && (-1 < sVar44)))) && (sVar44 < _DAT_14250a564)) {
          if ((_DAT_14250a528 != (longlong *)0x0) &&
             (lVar30 = *(longlong *)
                        (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8) +
                        (longlong)sVar44 * 8), lVar30 != 0)) {
            uVar45 = (int)sVar48 & 0x8000000f;
            if ((int)uVar45 < 0) {
              uVar45 = (uVar45 - 1 | 0xfffffff0) + 1;
            }
            uVar46 = (int)sVar47 & 0x8000000f;
            if ((int)uVar46 < 0) {
              uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
            }
            puVar1 = (uint *)(lVar30 + 0x2a0 +
                             ((longlong)(int)uVar45 * 0x10 + (longlong)(int)uVar46) * 4);
            *puVar1 = *puVar1 & 0xffffffef;
          }
        }
        sVar44 = (short)plVar42[1];
        sVar47 = *(short *)((longlong)plVar42 + 6);
        sVar48 = *(short *)((longlong)plVar42 + 4);
        if ((((-1 < sVar48) && (sVar48 < _DAT_14250a55c)) && (-1 < sVar47)) &&
           (((sVar47 < _DAT_14250a560 && (-1 < sVar44)) && (sVar44 < _DAT_14250a564)))) {
          if ((_DAT_14250a528 != (longlong *)0x0) &&
             (lVar30 = *(longlong *)
                        (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8) +
                        (longlong)sVar44 * 8), lVar30 != 0)) {
            uVar45 = (int)sVar48 & 0x8000000f;
            if ((int)uVar45 < 0) {
              uVar45 = (uVar45 - 1 | 0xfffffff0) + 1;
            }
            uVar46 = (int)sVar47 & 0x8000000f;
            if ((int)uVar46 < 0) {
              uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
            }
            puVar1 = (uint *)(lVar30 + 0x2a0 +
                             ((longlong)(int)uVar45 * 0x10 + (longlong)(int)uVar46) * 4);
            *puVar1 = *puVar1 & 0xffffffdf;
          }
        }
        sVar44 = (short)plVar42[1];
        sVar47 = *(short *)((longlong)plVar42 + 6);
        sVar48 = *(short *)((longlong)plVar42 + 4);
        uVar45 = (uint)sVar48;
        plVar43 = (longlong *)(ulonglong)uVar45;
        if ((((-1 < sVar48) && ((int)uVar45 < _DAT_14250a55c)) && (-1 < sVar47)) &&
           (((sVar47 < _DAT_14250a560 && (-1 < sVar44)) && (sVar44 < _DAT_14250a564)))) {
          plVar43 = (longlong *)(ulonglong)CONCAT22(sVar48 >> 0xf,sVar48 >> 4);
          if ((_DAT_14250a528 != (longlong *)0x0) &&
             (lVar30 = *(longlong *)
                        (*(longlong *)(_DAT_14250a528[sVar48 >> 4] + (longlong)(sVar47 >> 4) * 8) +
                        (longlong)sVar44 * 8), lVar30 != 0)) {
            uVar45 = uVar45 & 0x8000000f;
            if ((int)uVar45 < 0) {
              uVar45 = (uVar45 - 1 | 0xfffffff0) + 1;
            }
            uVar46 = (int)sVar47 & 0x8000000f;
            if ((int)uVar46 < 0) {
              uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
            }
            puVar1 = (uint *)(lVar30 + 0x2a0 +
                             ((longlong)(int)uVar45 * 0x10 + (longlong)(int)uVar46) * 4);
            *puVar1 = *puVar1 & 0xffffffbf;
          }
        }
      }
    }
LAB_141416ee5:
    if ((((plVar23[8] != 0) && ((*(byte *)(plVar23 + 2) & 4) == 0)) &&
        (sVar44 = *(short *)((longlong)plVar23 + 2), -1 < sVar44)) &&
       (((ulonglong)(longlong)sVar44 < (ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) &&
        (lVar30 = *(longlong *)(_DAT_14250ed78 + (longlong)sVar44 * 8), lVar30 != 0)))) {
      plVar42 = *(longlong **)(lVar30 + 0x658);
      plVar3 = *(longlong **)(lVar30 + 0x660);
      while (plVar42 < plVar3) {
        lVar30 = *plVar42;
        if ((*(byte *)(lVar30 + 0x14c) & 1) == 0) {
LAB_1414184da:
          plVar42 = plVar42 + 1;
        }
        else {
          uVar45 = *(uint *)(lVar30 + 0x140);
          unaff_RDI = (ulonglong)uVar45;
          if (uVar45 == 0xffffffff) goto LAB_1414184da;
          iVar19 = (_DAT_1423aa348 + 2000) % 0x62700;
          if (iVar19 <= _DAT_1423aa348) {
            if (((int)uVar45 <= iVar19) || (_DAT_1423aa348 <= (int)uVar45)) {
LAB_141417c42:
              uVar46 = *(uint *)(lVar30 + 0x144);
              uVar27 = (ushort)(uVar46 >> 3) & 1;
              uVar38 = uVar27 | 0x1e;
              if ((uVar46 & 4) == 0) {
                uVar38 = uVar27;
              }
              uVar27 = uVar38 | 0x20;
              if ((uVar46 & 2) == 0) {
                uVar27 = uVar38;
              }
              auStackX_10[0] = uVar27 | 0x40;
              if ((uVar46 & 1) == 0) {
                auStackX_10[0] = uVar27;
              }
              plVar43 = (longlong *)(ulonglong)auStackX_10[0];
              iStack_78 = 0;
              plVar34 = (longlong *)plVar23[8];
              plVar35 = plStackX_8;
              if (0 < (int)plVar34[5]) {
                do {
                  if (*(longlong *)(*plVar34 + (longlong)iStack_78 * 8) != 0) {
                    lVar30 = *plVar42;
                    iVar19 = *(int *)(lVar30 + 0x150);
                    if ((iVar19 != -1) || (*(int *)(lVar30 + 0x154) != -1)) {
                      sVar44 = *(short *)((longlong)plVar34 + 0x44);
                      if (0 < sVar44) {
                        if (iVar19 == -1) {
                          sVar47 = -10000;
                        }
                        else {
                          sVar47 = (short)((sVar44 * iVar19) / 100);
                        }
                        if (*(int *)(lVar30 + 0x154) == -1) {
                          sVar44 = 10000;
                        }
                        else {
                          sVar44 = (short)(((int)sVar44 * *(int *)(lVar30 + 0x154)) / 100);
                        }
                        if ((iStack_78 < sVar47) || (sVar44 < iStack_78)) goto LAB_1414184ab;
                      }
                      plVar43 = (longlong *)(ulonglong)auStackX_10[0];
                    }
                    puVar33 = *(ushort **)(*plVar34 + (longlong)iStack_78 * 8);
                    iVar19 = (int)plVar34[6] * *(int *)((longlong)plVar34 + 0x2c);
                    iStackX_20 = 0;
                    if (0 < iVar19) {
LAB_141417d93:
                      iVar21 = iStackX_20;
                      if ((*puVar33 & (ushort)plVar43) != 0) {
                        lVar30 = plVar35[8];
                        uVar36 = (longlong)iStackX_20 / (longlong)*(int *)(lVar30 + 0x2c);
                        sVar44 = ((short)(iStackX_20 % *(int *)(lVar30 + 0x2c)) -
                                 (short)(*(int *)(lVar30 + 0x2c) / 2)) +
                                 *(short *)((longlong)plVar35 + 4);
                        sVar47 = ((short)((longlong)
                                          ((ulonglong)(uint)((int)uVar36 >> 0x1f) << 0x20 |
                                          uVar36 & 0xffffffff) % (longlong)*(int *)(lVar30 + 0x30))
                                 - (short)(*(int *)(lVar30 + 0x30) / 2)) +
                                 *(short *)((longlong)plVar35 + 6);
                        sVar48 = (short)iStack_78 + (short)plVar35[1];
                        uVar18 = func_0x0001400695b0(0x1423f3970,sVar44,sVar47,sVar48);
                        plVar43 = _DAT_1424115c0;
                        _DAT_1418cffe8 =
                             (((longlong)sVar48 + (longlong)_DAT_14250a570) * 10000 +
                              (longlong)_DAT_14250a56c * 0x30 + (longlong)sVar47) * 10000 +
                             (longlong)_DAT_14250a568 * 0x30 + -0x61c8864680b583eb +
                             (longlong)sVar44;
                        uVar36 = (_DAT_1418cffe8 >> 0x1e ^ _DAT_1418cffe8) * -0x40a7b892e31b1a47;
                        uVar46 = (uint)((uVar36 >> 0x1b ^ uVar36) * -0x6b2fb644ecceee15 >> 0x20);
                        uVar46 = (int)((uVar46 >> 0x1f ^ uVar46) % 2000 + _DAT_1423aa348) % 0x62700;
                        if (_DAT_1418be238 == 0) {
                          if ((int)uVar45 < (int)uVar46) {
                            iVar40 = uVar46 - 0x626f6;
                          }
                          else {
                            iVar40 = uVar46 + 10;
                          }
                          if ((int)uVar45 < iVar40) {
LAB_141417f0b:
                            puVar24 = (undefined8 *)0x0;
                            uVar46 = 0;
                            switch(uVar18) {
                            case 0x6b:
                            case 0x6c:
                            case 0x6f:
                            case 0x70:
                            case 0x71:
                            case 0x72:
                            case 0x95:
                            case 0xaf:
                            case 0xb0:
                            case 0xb1:
                            case 0xb2:
                            case 0xb3:
                            case 0xda:
                            case 0xdb:
                            case 0xdc:
                            case 0xdd:
                              uVar46 = 4;
                              break;
                            case 0x6d:
                            case 0x73:
                              uVar46 = 2;
                              break;
                            case 0x74:
                              uVar46 = 1;
                            }
                            lVar30 = *plVar42;
                            if ((*(uint *)(lVar30 + 0x144) & uVar46) != 0) {
                              if ((*(byte *)(lVar30 + 0x14c) & 2) == 0) {
                                for (plVar23 = *(longlong **)(lVar30 + 0x110);
                                    plVar34 = _DAT_1424115b8,
                                    plVar23 < *(longlong **)(lVar30 + 0x118); plVar23 = plVar23 + 1)
                                {
                                  iVar21 = *(int *)(*plVar23 + 0xc);
                                  puStackX_18 = puVar24;
                                  if (iVar21 == -1) goto LAB_141418280;
                                  iVar40 = *(int *)(*plVar23 + 0x10);
                                  if (iVar40 < iVar21) {
                                    if (iVar40 <= (int)uVar45) goto LAB_141418280;
                                    bVar49 = SBORROW4(uVar45,iVar21);
                                    iVar40 = uVar45 - iVar21;
LAB_141418248:
                                    if (bVar49 == iVar40 < 0) goto LAB_141418280;
                                  }
                                  else if (iVar21 <= (int)uVar45) {
                                    bVar49 = SBORROW4(iVar40,uVar45);
                                    iVar40 = iVar40 - uVar45;
                                    goto LAB_141418248;
                                  }
                                  puVar24 = (undefined8 *)(ulonglong)((int)puVar24 + 1);
                                }
                                puStackX_18 = (undefined8 *)
                                              (ulonglong)
                                              ((int)((longlong)*(longlong **)(lVar30 + 0x118) -
                                                     *(longlong *)(lVar30 + 0x110) >> 3) - 1);
LAB_141418280:
                                do {
                                  if (plVar43 <= plVar34) goto LAB_1414182ea;
                                  puVar24 = (undefined8 *)*plVar34;
                                  sVar16 = (**(code **)*puVar24)(puVar24);
                                  if ((((sVar16 == 1) &&
                                       (lVar30 = *plVar42,
                                       *(short *)(puVar24 + 2) == *(short *)(lVar30 + 0x100))) &&
                                      (*(short *)((longlong)puVar24 + 0x12) ==
                                       *(short *)(lVar30 + 0x102))) &&
                                     (((*(short *)((longlong)puVar24 + 0x14) ==
                                        *(short *)(lVar30 + 0x104) &&
                                       (*(int *)(puVar24 + 3) == *(int *)(lVar30 + 0x108))) &&
                                      ((*(int *)((longlong)puVar24 + 0x1c) == (int)puStackX_18 &&
                                       (*(int *)(puVar24 + 4) == 0)))))) goto LAB_14141833d;
                                  plVar34 = plVar34 + 1;
                                } while( true );
                              }
                              sVar16 = sVar48;
                              if (-1 < sVar44) {
                                while ((((sVar16 = sVar16 + -1, iVar21 = iStackX_20,
                                         sVar44 < _DAT_14250a55c && (-1 < sVar47)) &&
                                        ((sVar47 < _DAT_14250a560 &&
                                         ((-1 < sVar48 && (sVar48 < _DAT_14250a564)))))) &&
                                       ((_DAT_14250a528 != (longlong *)0x0 &&
                                        (lVar30 = *(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528[(longlong)sVar44 >> 4] +
                                                     ((longlong)sVar47 >> 4) * 8) +
                                                   (longlong)sVar48 * 8), lVar30 != 0))))) {
                                  puStackX_18 = (undefined8 *)
                                                CONCAT44(puStackX_18._4_4_,(int)sVar47);
                                  uVar46 = (int)sVar47 & 0x8000000f;
                                  if ((int)uVar46 < 0) {
                                    uVar46 = (uVar46 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)sVar44 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xff00;
                                  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xff00;
                                  in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xff00;
                                  cVar15 = FUN_14054e280(lVar30,uVar31,uVar46,1,
                                                         in_stack_ffffffffffffff48,
                                                         in_stack_ffffffffffffff50,
                                                         in_stack_ffffffffffffff58,0);
                                  iVar21 = iStackX_20;
                                  if (cVar15 == '\0') break;
                                  if ((((sVar44 < 0) || (_DAT_14250a55c <= sVar44)) ||
                                      (_DAT_14250a560 <= (int)puStackX_18)) ||
                                     (((sVar16 < 0 || (_DAT_14250a564 <= sVar16)) ||
                                      (cVar15 = FUN_1414c3aa0(0x1423f3970,sVar44,sVar47,sVar16),
                                      iVar21 = iStackX_20, cVar15 == '\0')))) goto LAB_141418471;
                                  uVar46 = func_0x000140069640(0x1423f3970,sVar44);
                                  iVar21 = iStackX_20;
                                  if ((((uVar46 & 7) == 6) ||
                                      (((uVar46 & 7) == 7 &&
                                       (cVar15 = FUN_1405c17f0(0x142410388,sVar44,sVar47),
                                       iVar21 = iStackX_20, cVar15 != '\0')))) ||
                                     (cVar15 = FUN_140142fc0(0x1423f3970,sVar44,sVar47,sVar16),
                                     iVar21 = iStackX_20, '\x06' < cVar15)) goto LAB_141418471;
                                  sVar48 = sVar48 + -1;
                                }
                              }
                              iVar40 = 0;
                              lVar30 = *plVar42;
                              for (plVar43 = *(longlong **)(lVar30 + 0x110);
                                  plVar43 < *(longlong **)(lVar30 + 0x118); plVar43 = plVar43 + 1) {
                                iVar41 = *(int *)(*plVar43 + 0xc);
                                if (iVar41 == -1) goto LAB_1414181a6;
                                iVar2 = *(int *)(*plVar43 + 0x10);
                                if (iVar2 < iVar41) {
                                  if (iVar2 <= (int)uVar45) goto LAB_1414181a6;
                                  bVar49 = SBORROW4(uVar45,iVar41);
                                  iVar2 = uVar45 - iVar41;
LAB_14141818a:
                                  if (bVar49 == iVar2 < 0) goto LAB_1414181a6;
                                }
                                else if (iVar41 <= (int)uVar45) {
                                  bVar49 = SBORROW4(iVar2,uVar45);
                                  iVar2 = iVar2 - uVar45;
                                  goto LAB_14141818a;
                                }
                                iVar40 = iVar40 + 1;
                              }
                              iVar40 = (int)((longlong)*(longlong **)(lVar30 + 0x118) -
                                             *(longlong *)(lVar30 + 0x110) >> 3) + -1;
LAB_1414181a6:
                              in_stack_ffffffffffffff58 = *(ushort *)(lVar30 + 0x104);
                              in_stack_ffffffffffffff50 = *(ushort *)(lVar30 + 0x102);
                              in_stack_ffffffffffffff48 = *(ushort *)(lVar30 + 0x100);
                              FUN_1414c8730(0x1423f3970,sVar44,sVar47,sVar48,
                                            in_stack_ffffffffffffff48,in_stack_ffffffffffffff50,
                                            in_stack_ffffffffffffff58,
                                            *(undefined4 *)(lVar30 + 0x108),iVar40,
                                            *(undefined4 *)(lVar30 + 0x148));
                            }
                          }
                        }
                        else if (uVar46 == uVar45) goto LAB_141417f0b;
                        goto LAB_141418471;
                      }
                      goto LAB_141418483;
                    }
                  }
LAB_1414184ab:
                  unaff_RDI = (ulonglong)uVar45;
                  iStack_78 = iStack_78 + 1;
                  plVar34 = (longlong *)plVar35[8];
                  plVar43 = (longlong *)(ulonglong)auStackX_10[0];
                  plVar23 = plStackX_8;
                } while (iStack_78 < (int)plVar34[5]);
              }
            }
            goto LAB_1414184da;
          }
          if ((int)uVar45 < _DAT_1423aa348) goto LAB_1414184da;
          if ((int)uVar45 <= iVar19) goto LAB_141417c42;
          plVar42 = plVar42 + 1;
        }
      }
    }
    uVar37 = 0;
    unaff_R14B = 0;
    uVar38 = *(ushort *)(plVar23 + 1);
    uVar27 = *(ushort *)((longlong)plVar23 + 6);
    uVar36 = (ulonglong)uVar27;
    sVar44 = *(short *)((longlong)plVar23 + 4);
    plVar42 = (longlong *)(ulonglong)uVar27;
    uVar45 = func_0x00014007f270(0x1423f3970,sVar44);
    if ((uVar45 >> 0x10 & 1) != 0) {
      uVar45 = (int)((_DAT_14250a568 >> 0x1f & 0xfU) + _DAT_14250a568) >> 4;
      unaff_RDI = (ulonglong)uVar45;
      iVar19 = (_DAT_14250a56c >> 0x1f & 0xfU) + _DAT_14250a56c;
      FUN_14007f300(0x1423f3970,&plStackX_8,auStackX_10,sVar44,uVar27,uVar38);
      plVar42 = (longlong *)
                ((longlong)(short)((short)plStackX_8 - (short)uVar45) * 5 +
                (longlong)(short)(auStackX_10[0] - (short)(iVar19 >> 4)));
      in_stack_ffffffffffffff48 = uVar27;
      in_stack_ffffffffffffff50 = uVar38;
      if (*(char *)((longlong)plVar42 + 0x142153e8e) == '\x01') {
        plVar42 = (longlong *)(ulonglong)*(ushort *)((longlong)plVar23 + 6);
        in_stack_ffffffffffffff48 =
             func_0x00014024b900(0x1423f3970,*(short *)((longlong)plVar23 + 4),plVar42,
                                 (short)plVar23[1]);
        FUN_141419390(plVar23);
        in_stack_ffffffffffffff50 = uVar38;
      }
    }
    uVar45 = (int)(plVar23[6] - plVar23[5] >> 3) - 1;
    param_1 = (longlong *)(ulonglong)uVar45;
    if (-1 < (int)uVar45) {
      uVar36 = (longlong)(int)uVar45 * 8;
      unaff_RDI = uVar36;
      do {
        plVar42 = *(longlong **)(unaff_RDI + plVar23[5]);
        if ((*(byte *)((longlong)plVar42 + 0x14) & 1) != 0) {
          *(int *)(plVar42 + 2) = (int)plVar42[2] + -1;
        }
        if ((int)plVar42[2] == 0) {
          func_0x0001415530d0(plVar42,0x18);
          plVar42 = (longlong *)(plVar23[6] - (plVar23[5] + uVar36 + 8));
          func_0x00014155486a();
          plVar23[6] = plVar23[6] + -8;
        }
        uVar36 = uVar36 - 8;
        unaff_RDI = unaff_RDI - 8;
        uVar45 = (int)param_1 - 1;
        param_1 = (longlong *)(ulonglong)uVar45;
      } while (-1 < (int)uVar45);
    }
LAB_141418630:
    uVar32 = (ulonglong)param_1 & 0xffffffffffffff00;
  } while( true );
LAB_1414182ea:
  puVar24 = (undefined8 *)FUN_140a75660(1);
  *(undefined2 *)(puVar24 + 2) = *(undefined2 *)(*plVar42 + 0x100);
  *(undefined2 *)((longlong)puVar24 + 0x12) = *(undefined2 *)(*plVar42 + 0x102);
  *(undefined2 *)((longlong)puVar24 + 0x14) = *(undefined2 *)(*plVar42 + 0x104);
  *(undefined4 *)(puVar24 + 3) = *(undefined4 *)(*plVar42 + 0x108);
  *(int *)((longlong)puVar24 + 0x1c) = (int)puStackX_18;
LAB_14141833d:
  sVar16 = *(short *)(*plVar42 + 0x148);
  if ((((sVar44 < 0) || (_DAT_14250a55c <= sVar44)) ||
      ((sVar47 < 0 || (((_DAT_14250a560 <= sVar47 || (sVar48 < 0)) || (_DAT_14250a564 <= sVar48)))))
      ) || ((_DAT_14250a528 == (longlong *)0x0 ||
            (lVar30 = *(longlong *)
                       (*(longlong *)
                         (_DAT_14250a528[(longlong)sVar44 >> 4] + ((longlong)sVar47 >> 4) * 8) +
                       (longlong)sVar48 * 8), lVar30 == 0)))) {
    plVar43 = (longlong *)0x142528588;
  }
  else {
    plVar43 = (longlong *)(lVar30 + 0x68);
  }
  iVar21 = (int)(plVar43[1] - *plVar43 >> 3) + -1;
  lVar30 = (longlong)iVar21;
  if (-1 < iVar21) {
    do {
      psVar28 = *(short **)(*plVar43 + lVar30 * 8);
      if ((((*(byte *)((longlong)psVar28 + 0x17) & 1) == 0) && (psVar28[5] == sVar44)) &&
         ((psVar28[6] == sVar47 &&
          ((((psVar28[7] == sVar48 && (*psVar28 == 0xd)) &&
            (*(int *)(psVar28 + 0xc) == *(int *)(puVar24 + 1))) &&
           (sVar29 = sVar16 + psVar28[4], psVar28[4] = sVar29, 10000 < sVar29)))))) {
        psVar28[4] = 10000;
      }
      lVar30 = lVar30 + -1;
      plVar35 = plStackX_8;
    } while (-1 < lVar30);
  }
  puVar25 = (undefined2 *)FUN_140a6d290(0x14250ed28,sVar44,sVar47,sVar48);
  *puVar25 = 0xd;
  puVar25[4] = sVar16;
  puVar25[5] = sVar44;
  puVar25[6] = sVar47;
  puVar25[7] = sVar48;
  *(undefined4 *)(puVar25 + 0xc) = *(undefined4 *)(puVar24 + 1);
  iVar21 = iStackX_20;
LAB_141418471:
  iStackX_20 = iVar21;
  plVar43 = (longlong *)(ulonglong)auStackX_10[0];
LAB_141418483:
  iStackX_20 = iStackX_20 + 1;
  puVar33 = puVar33 + 1;
  if (iVar19 <= iStackX_20) goto LAB_1414184ab;
  goto LAB_141417d93;
}

