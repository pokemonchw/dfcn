/* Actual Ghidra output; researcher-assigned name. VA 0x140559b60..0x14055a2b4; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_column_spans(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  ushort uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  short sVar19;
  longlong *plVar20;
  short sVar21;
  longlong lVar22;
  short sVar23;
  undefined1 auStack_108 [32];
  ushort uStack_e8;
  undefined8 *puStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  undefined8 *apuStack_c8 [2];
  longlong alStack_b8 [16];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_108;
  sVar23 = *(short *)(param_1 + 0x1a5a);
  lVar22 = param_1 + 0x28;
  apuStack_c8[0] = (undefined8 *)0x10;
  plStack_d0 = (longlong *)param_1;
  do {
    sVar15 = *(short *)((longlong)plStack_d0 + 0x1a5c);
    plStack_d8 = (longlong *)0x10;
    sVar21 = uStack_e8;
    do {
      lVar2 = *(longlong *)(lVar22 + 0x10);
      while (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 8) != 0) {
          *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
        }
        func_0x0001415530d0();
        lVar2 = *(longlong *)(lVar22 + 0x10);
      }
      iVar13 = 0;
      bVar4 = false;
      bVar5 = false;
      sVar19 = 0;
      uStack_e8 = sVar21;
      if (0 < _DAT_14250a564) {
        do {
          iVar8 = cave_tile_class(0x1423f3970,sVar23,sVar15,sVar19);
          if (iVar8 == 0) {
            if (!bVar4) {
              bVar4 = true;
              cVar7 = FUN_1414e95f0(0x1423f3970,sVar23,sVar15,sVar19);
              sVar21 = sVar19;
              if (cVar7 == '\0') {
                bVar5 = true;
              }
            }
            if (iVar13 == _DAT_14250a564 + -1) {
LAB_140559dca:
              puVar10 = (undefined8 *)FUN_1415530e0(0x10);
              *puVar10 = &UNK_141672498;
              *(undefined2 *)((longlong)puVar10 + 0xc) = 30000;
              *(undefined1 *)((longlong)puVar10 + 0xe) = 0;
              *(short *)((longlong)puVar10 + 10) = sVar19;
              *(short *)(puVar10 + 1) = sVar21;
              if (bVar5) {
                *(undefined1 *)((longlong)puVar10 + 0xe) = 1;
              }
              if (((((-1 < sVar23) && (sVar23 < _DAT_14250a55c)) && (-1 < sVar15)) &&
                  ((sVar15 < _DAT_14250a560 && (-1 < sVar21)))) && (sVar21 < _DAT_14250a564)) {
                if ((_DAT_14250a528 != 0) &&
                   (lVar2 = *(longlong *)
                             (*(longlong *)
                               (*(longlong *)(_DAT_14250a528 + (longlong)(sVar23 >> 4) * 8) +
                               (longlong)(sVar15 >> 4) * 8) + (longlong)sVar21 * 8), lVar2 != 0)) {
                  uVar14 = (int)sVar23 & 0x8000000f;
                  if ((int)uVar14 < 0) {
                    uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                  }
                  uVar9 = (int)sVar15 & 0x8000000f;
                  if ((int)uVar9 < 0) {
                    uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
                  }
                  if (*(short *)(lVar2 + (((longlong)(int)uVar14 + 5) * 0x10 + (longlong)(int)uVar9)
                                         * 2) == 0x103) {
                    *(byte *)((longlong)puVar10 + 0xe) = *(byte *)((longlong)puVar10 + 0xe) | 2;
                  }
                }
              }
              puStack_e0 = puVar10;
              puStack_e0 = (undefined8 *)FUN_1415530e0(0x18);
              puStack_e0[2] = 0;
              *puStack_e0 = puVar10;
              puStack_e0[1] = lVar22;
              puStack_e0[2] = *(undefined8 *)(lVar22 + 0x10);
              if (*(longlong *)(lVar22 + 0x10) != 0) {
                *(undefined8 **)(*(longlong *)(lVar22 + 0x10) + 8) = puStack_e0;
              }
              bVar4 = false;
              *(undefined8 **)(lVar22 + 0x10) = puStack_e0;
              bVar5 = false;
            }
          }
          else {
            if (bVar4) goto LAB_140559dca;
            if (iVar8 == 1) {
              puVar10 = (undefined8 *)FUN_1415530e0(0x10);
              *puVar10 = &UNK_141672498;
              *(undefined2 *)((longlong)puVar10 + 0xc) = 30000;
              *(undefined1 *)((longlong)puVar10 + 0xe) = 0;
              *(short *)(puVar10 + 1) = sVar19;
              *(short *)((longlong)puVar10 + 10) = sVar19;
              puStack_e0 = puVar10;
              cVar7 = FUN_1414e95f0(0x1423f3970,sVar23,sVar15,sVar19);
              if (cVar7 == '\0') {
                *(byte *)((longlong)puVar10 + 0xe) = *(byte *)((longlong)puVar10 + 0xe) | 1;
              }
              puStack_e0 = (undefined8 *)FUN_1415530e0(0x18);
              puStack_e0[2] = 0;
              *puStack_e0 = puVar10;
              puStack_e0[1] = lVar22;
              puStack_e0[2] = *(undefined8 *)(lVar22 + 0x10);
              if (*(longlong *)(lVar22 + 0x10) != 0) {
                *(undefined8 **)(*(longlong *)(lVar22 + 0x10) + 8) = puStack_e0;
              }
              *(undefined8 **)(lVar22 + 0x10) = puStack_e0;
            }
          }
          sVar19 = sVar19 + 1;
          iVar13 = (int)sVar19;
          uStack_e8 = sVar21;
        } while (iVar13 < _DAT_14250a564);
      }
      plVar6 = plStack_d0;
      lVar22 = lVar22 + 0x18;
      sVar15 = sVar15 + 1;
      plStack_d8 = (longlong *)((longlong)plStack_d8 + -1);
      sVar21 = uStack_e8;
    } while (plStack_d8 != (longlong *)0x0);
    sVar23 = sVar23 + 1;
    apuStack_c8[0] = (undefined8 *)((longlong)apuStack_c8[0] + -1);
  } while (apuStack_c8[0] != (undefined8 *)0x0);
  span_topology(plStack_d0);
  sVar23 = 0;
  uStack_e8 = 0;
  uVar18 = 0;
  do {
    plVar20 = (longlong *)0x0;
    plVar11 = (longlong *)(uVar18 << 4);
    plStack_d8 = plVar11;
    do {
      sVar15 = (short)plVar20;
      for (plStack_d0 = *(longlong **)
                         ((longlong)plVar6 + 0x38 + ((longlong)plVar20 + (longlong)plVar11) * 0x18);
          plStack_d0 != (longlong *)0x0; plStack_d0 = (longlong *)plStack_d0[2]) {
        lVar22 = *plStack_d0;
        if (*(short *)(lVar22 + 0xc) == 30000) {
          sVar21 = *(short *)(lVar22 + 8);
          uVar14 = (int)plVar20 + 1;
          uVar12 = (ushort)uVar14;
          bVar1 = *(byte *)(lVar22 + 0xe);
          *(short *)(lVar22 + 0xc) = sVar23;
          iVar13 = ((int)*(short *)(*plStack_d0 + 10) - (int)*(short *)(*plStack_d0 + 8)) * 10;
          while (iVar13 = iVar13 + 2, (short)uVar12 < 0x10) {
            uVar12 = (ushort)uVar14;
            plVar17 = *(longlong **)
                       ((longlong)plVar6 + 0x38 +
                       ((longlong)(short)uVar12 + (longlong)plVar11) * 0x18);
            while( true ) {
              if (plVar17 == (longlong *)0x0) goto LAB_140559fc9;
              lVar22 = *plVar17;
              if ((*(short *)(lVar22 + 8) == sVar21) && (*(byte *)(lVar22 + 0xe) == bVar1)) break;
              plVar17 = (longlong *)plVar17[2];
            }
            if (*(short *)(lVar22 + 0xc) != 30000) break;
            *(short *)(lVar22 + 0xc) = sVar23;
            uVar12 = uVar12 + 1;
            uVar14 = (uint)uVar12;
            iVar13 = iVar13 + ((int)*(short *)(*plVar17 + 10) - (int)*(short *)(*plVar17 + 8)) * 10;
          }
LAB_140559fc9:
          uVar14 = (int)uVar18 + 1;
          uVar16 = (ushort)uVar14;
          while (plVar17 = plVar20, (short)uVar16 < 0x10) {
            uVar16 = (ushort)uVar14;
            plVar11 = plVar20;
            if (sVar15 < (short)uVar12) {
              plVar17 = (longlong *)((longlong)(short)uVar16 * 0x10);
              do {
                sVar19 = (short)plVar11;
                plVar3 = *(longlong **)
                          ((longlong)plVar6 + 0x38 + ((longlong)sVar19 + (longlong)plVar17) * 0x18);
                while( true ) {
                  if (plVar3 == (longlong *)0x0) goto LAB_14055a0a8;
                  lVar22 = *plVar3;
                  if ((*(short *)(lVar22 + 8) == sVar21) && (*(byte *)(lVar22 + 0xe) == bVar1))
                  break;
                  plVar3 = (longlong *)plVar3[2];
                }
                if (*(short *)(lVar22 + 0xc) != 30000) goto LAB_14055a0a8;
                plVar11 = (longlong *)(ulonglong)(ushort)(sVar19 + 1U);
                alStack_b8[sVar19] = lVar22;
              } while ((short)(sVar19 + 1U) < (short)uVar12);
              if (sVar15 < (short)uVar12) {
                plVar11 = alStack_b8 + (longlong)plVar20;
                uVar18 = (ulonglong)(ushort)(uVar12 - sVar15);
                do {
                  lVar22 = *plVar11;
                  plVar11 = plVar11 + 1;
                  *(short *)(lVar22 + 0xc) = sVar23;
                  iVar13 = iVar13 + ((int)*(short *)(lVar22 + 10) - (int)*(short *)(lVar22 + 8)) *
                                    10 + 2;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
            }
            uVar16 = uVar16 + 1;
            uVar14 = (uint)uVar16;
          }
LAB_14055a0a8:
          puStack_e0 = (undefined8 *)FUN_1415530e0(0x68,plVar11,plVar17);
          *puStack_e0 = &UNK_141672308;
          puStack_e0[3] = 0;
          uVar14 = 0;
          puStack_e0[4] = 0;
          puStack_e0[5] = 0;
          puStack_e0[6] = 0;
          puStack_e0[7] = 0;
          puStack_e0[8] = 0;
          puStack_e0[9] = 0;
          puStack_e0[10] = 0;
          puStack_e0[0xb] = 0;
          *(undefined4 *)(puStack_e0 + 0xc) = 0;
          *(int *)(puStack_e0 + 1) = iVar13;
          *(ushort *)((longlong)puStack_e0 + 0xc) = uStack_e8;
          *(short *)((longlong)puStack_e0 + 0xe) = sVar15;
          *(ushort *)(puStack_e0 + 2) = uVar16 - 1;
          *(ushort *)((longlong)puStack_e0 + 0x12) = uVar12 - 1;
          *(short *)((longlong)puStack_e0 + 0x14) = sVar21;
          if ((bVar1 & 1) != 0) {
            *(undefined4 *)(puStack_e0 + 0xc) = 2;
            uVar14 = 2;
          }
          if ((bVar1 & 2) != 0) {
            *(uint *)(puStack_e0 + 0xc) = uVar14 | 4;
          }
          puVar10 = *(undefined8 **)((longlong)plVar6 + 0x1830);
          apuStack_c8[0] = puStack_e0;
          if (puVar10 == *(undefined8 **)((longlong)plVar6 + 0x1838)) {
            FUN_1400bc360((longlong)plVar6 + 0x1828,puVar10,apuStack_c8);
          }
          else {
            *puVar10 = puStack_e0;
            *(longlong *)((longlong)plVar6 + 0x1830) = *(longlong *)((longlong)plVar6 + 0x1830) + 8;
          }
          uVar18 = (ulonglong)uStack_e8;
          sVar23 = sVar23 + 1;
          plVar11 = plStack_d8;
        }
      }
      plVar20 = (longlong *)(ulonglong)(ushort)(sVar15 + 1U);
    } while ((short)(sVar15 + 1U) < 0x10);
    uStack_e8 = (short)uVar18 + 1;
    uVar18 = (ulonglong)uStack_e8;
  } while ((short)uStack_e8 < 0x10);
  sVar15 = *(short *)((longlong)plVar6 + 0x1a5a) >> 4;
  sVar23 = *(short *)((longlong)plVar6 + 0x1a5c) >> 4;
  iVar13 = (int)(*(longlong *)((longlong)plVar6 + 0x1830) - *(longlong *)((longlong)plVar6 + 0x1828)
                >> 3) + -1;
  lVar22 = (longlong)iVar13;
  plStack_d0 = (longlong *)0x0;
  if (-1 < iVar13) {
    do {
      FUN_14055a2c0(*(undefined8 *)(*(longlong *)((longlong)plVar6 + 0x1828) + lVar22 * 8),sVar15,
                    sVar23);
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  sVar21 = 0;
  *(undefined2 *)((longlong)plVar6 + 0x1840) = 0;
  if (0 < _DAT_14250a564) {
    do {
      if (*(longlong *)
           (*(longlong *)
             (*(longlong *)((longlong)sVar15 * 8 + _DAT_14250a528) + (longlong)sVar23 * 8) +
           (longlong)sVar21 * 8) != 0) break;
      sVar21 = sVar21 + 1;
      *(short *)((longlong)plVar6 + 0x1840) = sVar21;
    } while (sVar21 < _DAT_14250a564);
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_108);
  return;
}

