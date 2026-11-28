/* Actual Ghidra output; researcher-assigned name. VA 0x14055ab70..0x14055bb40; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void drop_unsupported(longlong param_1,short param_2,short param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  short sVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  undefined2 *puVar26;
  ushort uVar27;
  uint uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uStack_68;
  ushort uStack_64;
  ushort uStack_62;
  undefined1 uStack_60;
  
  param_2 = param_2 * 0x10;
  uVar27 = param_2 + *(short *)(param_1 + 0xc);
  uVar14 = param_3 << 4;
  uVar7 = (uint)uVar14;
  uVar21 = (uint)(short)uVar27;
  if ((int)uVar21 <= (int)*(short *)(param_1 + 0x10) + (int)param_2) {
    do {
      uVar29 = (short)uVar7 + *(short *)(param_1 + 0xe);
      uVar28 = (uint)(short)uVar29;
      uVar22 = uVar21;
      uVar18 = (uint)uVar27;
      if ((int)uVar28 <= (int)*(short *)(param_1 + 0x12) + (int)(short)uVar14) {
        do {
          uStack_68 = *(ushort *)(param_1 + 0x14);
          uVar11 = (ulonglong)(uint)(int)(short)uStack_68;
          uStack_60 = 0;
          uVar24 = uVar11;
          uStack_64 = uStack_68;
          uStack_62 = uStack_68;
          uVar2 = 0;
          if ((short)uStack_68 < _DAT_14250a564) {
            do {
              uStack_60 = uVar2;
              iVar19 = (int)uVar11;
              uVar15 = (ushort)uVar24;
              sVar20 = (short)uVar18;
              iVar6 = FUN_1414caa60(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff);
              if (iVar6 == -1) break;
              if ((((sVar20 < 0) || (_DAT_14250a55c <= (int)uVar22)) || ((short)uVar29 < 0)) ||
                 (((_DAT_14250a560 <= (int)uVar28 || ((short)uVar15 < 0)) ||
                  ((_DAT_14250a564 <= iVar19 ||
                   ((_DAT_14250a528 == 0 ||
                    (lVar10 = *(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                 ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8),
                    lVar10 == 0)))))))) {
                uVar5 = 0;
              }
              else {
                uVar7 = uVar22 & 0x8000000f;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                }
                uVar8 = uVar28 & 0x8000000f;
                if ((int)uVar8 < 0) {
                  uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                }
                uVar5 = *(undefined2 *)
                         (lVar10 + (((longlong)(int)uVar7 + 5) * 0x10 + (longlong)(int)uVar8) * 2);
              }
              iVar9 = iVar6;
              cVar3 = func_0x00014024af40(uVar5);
              if (cVar3 == '\0') {
                uStack_60 = 1;
              }
              if (-1 < sVar20) {
                if ((int)uVar22 < _DAT_14250a55c) {
                  if (((((-1 < (short)uVar29) && ((int)uVar28 < _DAT_14250a560)) &&
                       (-1 < (short)uVar15)) && ((iVar19 < _DAT_14250a564 && (_DAT_14250a528 != 0)))
                      ) && (lVar10 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8)
                                        + ((longlong)(short)uVar29 >> 4) * 8) +
                                      (longlong)(short)uVar15 * 8), lVar10 != 0)) {
                    uVar7 = uVar22 & 0x8000000f;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                    }
                    uVar8 = uVar28 & 0x8000000f;
                    if ((int)uVar8 < 0) {
                      uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                    }
                    puVar25 = (uint *)(lVar10 + 0x2a0 +
                                      ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                    *puVar25 = *puVar25 & 0xffffffef;
                  }
                  if (((_DAT_14250a55c <= (int)uVar22) || ((short)uVar29 < 0)) ||
                     ((_DAT_14250a560 <= (int)uVar28 ||
                      (((short)uVar15 < 0 || (_DAT_14250a564 <= iVar19)))))) goto LAB_14055ae62;
                  if (_DAT_14250a528 != 0) {
                    lVar10 = *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8);
                    if (lVar10 != 0) {
                      uVar7 = uVar22 & 0x8000000f;
                      if ((int)uVar7 < 0) {
                        uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                      }
                      uVar8 = uVar28 & 0x8000000f;
                      if ((int)uVar8 < 0) {
                        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                      }
                      puVar25 = (uint *)(lVar10 + 0x2a0 +
                                        ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                      *puVar25 = *puVar25 & 0xffffffdf;
                    }
                    goto LAB_14055ae62;
                  }
                }
                else {
LAB_14055ae62:
                  if (sVar20 < 0) goto LAB_14055aefb;
                }
                if (((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                    ((int)uVar28 < _DAT_14250a560)) &&
                   (((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)) &&
                    ((_DAT_14250a528 != 0 &&
                     (lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                     , lVar10 != 0)))))) {
                  uVar7 = uVar22 & 0x8000000f;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                  }
                  uVar8 = uVar28 & 0x8000000f;
                  if ((int)uVar8 < 0) {
                    uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                  }
                  puVar25 = (uint *)(lVar10 + 0x2a0 +
                                    ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                  *puVar25 = *puVar25 & 0xffffffbf;
                }
              }
LAB_14055aefb:
              if (iVar9 == 0) {
                if ((short)uStack_64 < (short)uVar15) {
                  uStack_64 = uVar15;
                }
                FUN_1414cce00();
              }
              else {
                uVar11 = func_0x000140069640(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff);
                if ((uVar11 & 7) != 0) {
                  iVar9 = (int)(_DAT_1424103b0 - _DAT_1424103a8 >> 3) + -1;
                  lVar10 = (longlong)iVar9;
                  if (-1 < iVar9) {
                    do {
                      plVar1 = *(longlong **)(_DAT_1424103a8 + lVar10 * 8);
                      if (((int)plVar1[4] == iVar19) &&
                         (iVar9 = (**(code **)(*plVar1 + 0xd0))(), iVar9 != 0x13)) {
                        plVar1 = *(longlong **)(_DAT_1424103a8 + lVar10 * 8);
                        cVar4 = (**(code **)(*plVar1 + 0x130))(plVar1);
                        if ((cVar4 != '\0') && (iVar19 == (int)plVar1[4])) {
                          cVar4 = (**(code **)(*plVar1 + 0x140))(plVar1);
                          if ((cVar4 == '\0') || (plVar1[6] == 0)) {
                            if (((int)plVar1[1] <= (int)sVar20) &&
                               ((((int)sVar20 <= *(int *)((longlong)plVar1 + 0x14) &&
                                 (*(int *)((longlong)plVar1 + 0xc) <= (int)uVar28)) &&
                                ((int)uVar28 <= (int)plVar1[3])))) goto LAB_14055afe9;
                          }
                          else {
                            cVar4 = FUN_140571c90(plVar1,uVar18 & 0xffff,uVar29,uVar24 & 0xffff);
                            if (cVar4 != '\0') {
LAB_14055afe9:
                              FUN_1405a1250(*(undefined8 *)(_DAT_1424103a8 + lVar10 * 8),0,1,0);
                            }
                          }
                        }
                      }
                      lVar10 = lVar10 + -1;
                    } while (-1 < lVar10);
                  }
                  uVar22 = (uint)sVar20;
                }
              }
              if (((((sVar20 < 0) || (_DAT_14250a55c <= (int)uVar22)) ||
                   (((short)uVar29 < 0 || ((_DAT_14250a560 <= (int)uVar28 || ((short)uVar15 < 1)))))
                   ) || ((_DAT_14250a564 <= iVar19 + -1 ||
                         ((_DAT_14250a528 == 0 ||
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                              ((longlong)(short)uVar29 >> 4) * 8) + -8 + (longlong)(short)uVar15 * 8
                            ) == 0)))))) &&
                 (cVar4 = FUN_1414e95f0(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff),
                 cVar4 == '\0')) {
                if (((((((cVar3 != '\0') && (-1 < sVar20)) && ((int)uVar22 < _DAT_14250a55c)) &&
                      ((-1 < (short)uVar29 && ((int)uVar28 < _DAT_14250a560)))) &&
                     (-1 < (short)uVar15)) && ((iVar19 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                   && ((*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                           ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8) != 0
                       && (lVar10 = FUN_14054ac50(), lVar10 != 0)))) {
                  uVar7 = uVar22 & 0x8000000f;
                  if ((int)uVar7 < 0) {
                    uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                  }
                  uVar28 = uVar28 & 0x8000000f;
                  if ((int)uVar28 < 0) {
                    uVar28 = (uVar28 - 1 | 0xfffffff0) + 1;
                  }
                  if ((((int)uVar22 < _DAT_14250a55c) && ((short)uVar29 < _DAT_14250a560)) &&
                     ((short)uVar15 < _DAT_14250a564)) {
                    if (_DAT_14250a528 == 0) {
                      puVar25 = (uint *)0x0;
                    }
                    else {
                      puVar25 = *(uint **)(*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                            ((longlong)(short)uVar29 >> 4) * 8) +
                                          (longlong)(short)uVar15 * 8);
                    }
                    lVar12 = (longlong)(short)uVar7 * 0x10 + (longlong)(short)uVar28;
                  }
                  else {
                    lVar12 = (longlong)(short)uVar7 * 0x10 + (longlong)(short)uVar28;
                    puVar25 = (uint *)0x0;
                  }
                  puVar26 = (undefined2 *)(lVar10 + lVar12 * 2 + 8);
                  iVar19 = (int)(short)uVar15;
                  if (((sVar20 < _DAT_14250a55c) && ((short)uVar29 < _DAT_14250a560)) &&
                     ((iVar19 < _DAT_14250a564 &&
                      ((_DAT_14250a528 != 0 &&
                       (lVar10 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                    ((longlong)(short)uVar29 >> 4) * 8) +
                                  (longlong)(short)uVar15 * 8), lVar10 != 0)))))) {
                    *(undefined2 *)
                     (lVar10 + (((longlong)(int)uVar7 + 5) * 0x10 + (longlong)(int)uVar28) * 2) =
                         *puVar26;
                  }
                  *puVar26 = 0x20;
                  *puVar25 = *puVar25 | 2;
                  uVar22 = (uint)sVar20;
                  uVar28 = (uint)(short)uVar29;
                  puVar25 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar25[0x23] * 4);
                  *puVar25 = *puVar25 | 5;
                  if ((((((int)uVar22 < _DAT_14250a55c) && ((int)uVar28 < _DAT_14250a560)) &&
                       (-1 < (short)(uVar15 + 1))) &&
                      ((iVar19 + 1 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) &&
                     (puVar25 = *(uint **)(*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                            ((longlong)(short)uVar29 >> 4) * 8) + 8 +
                                          (longlong)(short)uVar15 * 8), puVar25 != (uint *)0x0)) {
                    *puVar25 = *puVar25 | 2;
                    puVar25 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar25[0x23] * 4);
                    *puVar25 = *puVar25 | 5;
                  }
                }
                uVar5 = func_0x0001400695b0(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff);
                cVar3 = func_0x00014024ae20(uVar5);
                if ((cVar3 != '\0') &&
                   ((lVar10 = FUN_140a60840(0x1423f3970,uVar18 & 0xffff,uVar29), lVar10 == 0 ||
                    ((*(byte *)(lVar10 + 0x10) & 2) == 0)))) {
                  uVar8 = (uint)uVar29;
                  uVar7 = uVar18 & 0xffff;
                  uVar30 = uVar15;
                  FUN_1414ce660(0x1423f3970);
                  if ((sVar20 < 0) || (_DAT_14250a55c <= (int)uVar22)) {
LAB_14055b4bb:
                    FUN_141455cf0(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff,uVar7,uVar8,
                                  uVar30);
                    if (sVar20 < 0) goto LAB_14055b7f3;
                  }
                  else {
                    if (((((-1 < (short)uVar29) && ((int)uVar28 < _DAT_14250a560)) &&
                         (-1 < (short)uVar15)) &&
                        ((iVar19 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) &&
                       (lVar10 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                    ((longlong)(short)uVar29 >> 4) * 8) +
                                  (longlong)(short)uVar15 * 8), lVar10 != 0)) {
                      uVar23 = uVar28 & 0x8000000f;
                      if ((int)uVar23 < 0) {
                        uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
                      }
                      uVar13 = uVar22 & 0x8000000f;
                      if ((int)uVar13 < 0) {
                        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                      }
                      FUN_14055c0a0(lVar10,uVar13,uVar23);
                    }
                    if (((_DAT_14250a55c <= (int)uVar22) || ((short)uVar29 < 0)) ||
                       ((_DAT_14250a560 <= (int)uVar28 ||
                        (((short)uVar15 < 0 || (_DAT_14250a564 <= iVar19)))))) goto LAB_14055b4bb;
                    if (_DAT_14250a528 != 0) {
                      lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                      ;
                      if (lVar10 != 0) {
                        uVar23 = uVar22 & 0x8000000f;
                        if ((int)uVar23 < 0) {
                          uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
                        }
                        uVar13 = uVar28 & 0x8000000f;
                        if ((int)uVar13 < 0) {
                          uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                        }
                        puVar25 = (uint *)(lVar10 + 0x6a0 +
                                          ((longlong)(int)uVar23 * 0x10 + (longlong)(int)uVar13) * 4
                                          );
                        *puVar25 = *puVar25 & 0xffffff7f;
                      }
                      goto LAB_14055b4bb;
                    }
                    FUN_141455cf0(0x1423f3970,uVar18 & 0xffff,uVar29,uVar24 & 0xffff,uVar7,uVar8,
                                  uVar30);
                  }
                  if (((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                      ((int)uVar28 < _DAT_14250a560)) &&
                     ((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)))) {
                    if (_DAT_14250a528 != 0) {
                      lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                      ;
                      if (lVar10 != 0) {
                        uVar7 = uVar22 & 0x8000000f;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                        }
                        uVar8 = uVar28 & 0x8000000f;
                        if ((int)uVar8 < 0) {
                          uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                        }
                        puVar25 = (uint *)(lVar10 + 0x6a0 +
                                          ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                        *puVar25 = *puVar25 & 0xfffffeff;
                      }
                      goto LAB_14055b573;
                    }
                  }
                  else {
LAB_14055b573:
                    if (sVar20 < 0) goto LAB_14055b7f3;
                  }
                  if ((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                     (((int)uVar28 < _DAT_14250a560 &&
                      ((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)))))) {
                    if (_DAT_14250a528 != 0) {
                      lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                      ;
                      if (lVar10 != 0) {
                        uVar7 = uVar22 & 0x8000000f;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                        }
                        uVar8 = uVar28 & 0x8000000f;
                        if ((int)uVar8 < 0) {
                          uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                        }
                        puVar25 = (uint *)(lVar10 + 0x6a0 +
                                          ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                        *puVar25 = *puVar25 & 0xfffffdff;
                      }
                      goto LAB_14055b613;
                    }
                  }
                  else {
LAB_14055b613:
                    if (sVar20 < 0) goto LAB_14055b7f3;
                  }
                  if (((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                      ((int)uVar28 < _DAT_14250a560)) &&
                     ((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)))) {
                    if (_DAT_14250a528 != 0) {
                      lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                      ;
                      if (lVar10 != 0) {
                        uVar7 = uVar22 & 0x8000000f;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                        }
                        uVar8 = uVar28 & 0x8000000f;
                        if ((int)uVar8 < 0) {
                          uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                        }
                        puVar25 = (uint *)(lVar10 + 0x6a0 +
                                          ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                        *puVar25 = *puVar25 & 0xfffffbff;
                      }
                      goto LAB_14055b6b3;
                    }
                  }
                  else {
LAB_14055b6b3:
                    if (sVar20 < 0) goto LAB_14055b7f3;
                  }
                  if ((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                     (((int)uVar28 < _DAT_14250a560 &&
                      ((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)))))) {
                    if (_DAT_14250a528 != 0) {
                      lVar10 = *(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                  ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8)
                      ;
                      if (lVar10 != 0) {
                        uVar7 = uVar22 & 0x8000000f;
                        if ((int)uVar7 < 0) {
                          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                        }
                        uVar8 = uVar28 & 0x8000000f;
                        if ((int)uVar8 < 0) {
                          uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
                        }
                        puVar25 = (uint *)(lVar10 + 0x6a0 +
                                          ((longlong)(int)uVar7 * 0x10 + (longlong)(int)uVar8) * 4);
                        *puVar25 = *puVar25 & 0xfffff7ff;
                      }
                      goto LAB_14055b753;
                    }
                  }
                  else {
LAB_14055b753:
                    if (sVar20 < 0) goto LAB_14055b7f3;
                  }
                  if ((((((int)uVar22 < _DAT_14250a55c) && (-1 < (short)uVar29)) &&
                       ((int)uVar28 < _DAT_14250a560)) &&
                      ((-1 < (short)uVar15 && (iVar19 < _DAT_14250a564)))) &&
                     ((_DAT_14250a528 != 0 &&
                      (lVar10 = *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                                   ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8
                                 ), lVar10 != 0)))) {
                    uVar22 = uVar22 & 0x8000000f;
                    if ((int)uVar22 < 0) {
                      uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                    }
                    uVar7 = uVar28 & 0x8000000f;
                    if ((int)uVar7 < 0) {
                      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
                    }
                    puVar25 = (uint *)(lVar10 + 0x6a0 +
                                      ((longlong)(int)uVar22 * 0x10 + (longlong)(int)uVar7) * 4);
                    *puVar25 = *puVar25 & 0xffffefff;
                  }
                }
              }
LAB_14055b7f3:
              uVar11 = (ulonglong)((int)uVar24 - 1);
              if (-1 < sVar20) {
                while (((sVar20 < _DAT_14250a55c && (-1 < (short)uVar29)) &&
                       ((((int)uVar28 < _DAT_14250a560 &&
                         (((uVar15 = (ushort)uVar11, -1 < (short)uVar15 &&
                           ((short)uVar15 < _DAT_14250a564)) && (_DAT_14250a528 != 0)))) &&
                        ((*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(_DAT_14250a528 + ((longlong)sVar20 >> 4) * 8) +
                             ((longlong)(short)uVar29 >> 4) * 8) + (longlong)(short)uVar15 * 8) != 0
                         && (iVar19 = FUN_1414caa60(0x1423f3970,uVar18 & 0xffff,uVar29,
                                                    uVar11 & 0xffff), iVar19 != 0))))))) {
                  FUN_1414cb0a0(0x1423f3970,uVar18 & 0xffff,uVar29,(int)uVar11 + 1,uVar18 & 0xffff,
                                uVar29,uVar15);
                  if ((short)uVar15 < (short)uStack_68) {
                    FUN_1414cce00(0x1423f3970,uVar18 & 0xffff,uVar29,uVar11 & 0xffff);
                    uStack_68 = uVar15;
                  }
                  uVar11 = CONCAT62((int6)(uVar11 >> 0x10),uVar15 - 1);
                }
                uVar24 = (ulonglong)uStack_62;
              }
              uVar22 = uVar21;
              if (iVar6 != 0) break;
              uStack_62 = (short)uVar24 + 1;
              uVar22 = (uint)sVar20;
              uVar11 = (ulonglong)(uint)(int)(short)uStack_62;
              uVar24 = CONCAT62((int6)(uVar24 >> 0x10),uStack_62);
              uVar2 = uStack_60;
            } while ((short)uStack_62 < _DAT_14250a564);
          }
          if ((int)(short)uStack_68 <= (short)uStack_64 + 1) {
            do {
              if ((short)uStack_68 <= (short)uStack_64) {
                FUN_1414cd1c0(0x1423f3970,uVar27,uVar29,uStack_68,uStack_60);
              }
              FUN_1414c3bf0(0x1423f3970,uVar27,uVar29,uStack_68);
              uVar7 = (uint)(short)(uVar27 - 2);
              if ((int)uVar7 <= (int)(uVar22 + 2)) {
                uVar24 = (ulonglong)uStack_68;
                do {
                  uVar18 = (uint)(short)(uVar29 - 2);
                  uVar28 = uVar18;
                  while (uStack_68 = (ushort)uVar24, (int)uVar28 <= (short)uVar29 + 2) {
                    uVar11 = func_0x000140069640(0x1423f3970,uVar7 & 0xffff,uVar18 & 0xffff);
                    uStack_68 = (ushort)uVar24;
                    if ((uVar11 & 7) != 0) {
                      DAT_142411579 = 1;
                      goto LAB_14055b9fe;
                    }
                    uVar15 = (short)uVar18 + 1;
                    uVar18 = (uint)uVar15;
                    uVar28 = (uint)(short)uVar15;
                  }
                  uVar15 = (short)uVar7 + 1;
                  uVar7 = (uint)uVar15;
                } while ((int)(short)uVar15 <= (int)(uVar22 + 2));
              }
LAB_14055b9fe:
              uStack_68 = uStack_68 + 1;
            } while ((int)(short)uStack_68 <= (short)uStack_64 + 1);
          }
          uVar7 = (uint)(short)uVar14;
          uVar29 = uVar29 + 1;
          uVar22 = (uint)(short)uVar27;
          uVar28 = (uint)(short)uVar29;
          uVar18 = uVar22;
        } while ((int)uVar28 <= (int)((int)*(short *)(param_1 + 0x12) + uVar7));
      }
      uVar27 = uVar27 + 1;
      uVar21 = (uint)(short)uVar27;
    } while ((int)uVar21 <= (int)*(short *)(param_1 + 0x10) + (int)param_2);
  }
  FUN_1414be950(0x1423f3970,param_2,uVar7 & 0xffff);
  DAT_14252857c = 1;
  sVar20 = param_2 + *(short *)(param_1 + 0xc);
  if ((int)sVar20 <= (int)*(short *)(param_1 + 0x10) + (int)param_2) {
    sVar16 = (short)uVar7;
    iVar6 = (int)*(short *)(param_1 + 0x12) + (int)sVar16;
    do {
      sVar17 = (short)uVar7 + *(short *)(param_1 + 0xe);
      if (sVar17 <= iVar6) {
        do {
          FUN_1414cc2c0(0x1423f3970,sVar20,sVar17,1);
          sVar17 = sVar17 + 1;
          iVar6 = (int)*(short *)(param_1 + 0x12) + (int)sVar16;
        } while (sVar17 <= iVar6);
      }
      sVar20 = sVar20 + 1;
      uVar7 = (uint)uVar14;
    } while ((int)sVar20 <= (int)*(short *)(param_1 + 0x10) + (int)param_2);
  }
  return;
}

