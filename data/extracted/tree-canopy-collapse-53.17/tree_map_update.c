/* Actual Ghidra output; researcher-assigned name. VA 0x14141d2f0..0x1414279cc; see image.txt for input identity. */

/* WARNING: Removing unreachable block (ram,0x0001414247fd) */
/* WARNING: Removing unreachable block (ram,0x000141424805) */
/* WARNING: Removing unreachable block (ram,0x00014142480d) */
/* WARNING: Removing unreachable block (ram,0x0001414248f8) */
/* WARNING: Removing unreachable block (ram,0x0001414230c1) */
/* WARNING: Removing unreachable block (ram,0x0001414230c9) */
/* WARNING: Removing unreachable block (ram,0x0001414230d1) */
/* WARNING: Removing unreachable block (ram,0x0001414231bc) */
/* WARNING: Removing unreachable block (ram,0x000141424909) */
/* WARNING: Removing unreachable block (ram,0x000141424911) */
/* WARNING: Removing unreachable block (ram,0x0001414231cd) */
/* WARNING: Removing unreachable block (ram,0x0001414231d5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tree_map_update(longlong param_1)

{
  ushort *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  ushort uVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  bool bVar27;
  ushort uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ushort uVar33;
  ushort uVar34;
  short sVar35;
  int iVar36;
  int iVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  ushort uStackX_18;
  short sStackX_20;
  short sStack_98;
  short sStack_96;
  ushort uStack_94;
  short sStack_88;
  
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (sVar3 = *(short *)(param_1 + 2), -1 < sVar3)) &&
      ((ulonglong)(longlong)sVar3 < (ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3))) &&
     (lVar25 = *(longlong *)(_DAT_14250ed78 + (longlong)sVar3 * 8), lVar25 != 0)) {
    if ((*(int *)(lVar25 + 0x48) < 1) || (bVar9 = true, (**(byte **)(lVar25 + 0x40) & 0x40) == 0)) {
      bVar9 = false;
    }
    sStack_96 = 0;
    sVar3 = (*(short *)(param_1 + 4) / 0x30) * 0x30;
    sVar6 = (*(short *)(param_1 + 6) / 0x30) * 0x30;
    iVar32 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x2c);
    uStackX_18 = *(short *)(param_1 + 4) - (short)(iVar32 / 2);
    lVar25 = _DAT_14250a528;
    if (0 < iVar32) {
      do {
        if (sVar3 <= (short)uStackX_18) {
          if ((short)(sVar3 + 0x2f) < (short)uStackX_18) {
            return;
          }
          plVar19 = *(longlong **)(param_1 + 0x40);
          sStack_98 = 0;
          uStack_94 = *(short *)(param_1 + 6) - (short)((int)plVar19[6] / 2);
          if (0 < (int)plVar19[6]) {
            do {
              if (sVar6 <= (short)uStack_94) {
                if ((short)(sVar6 + 0x2f) < (short)uStack_94) break;
                sStackX_20 = *(short *)(param_1 + 8);
                sStack_88 = 0;
                if (0 < (int)plVar19[5]) {
                  iVar32 = (int)sStack_98;
                  iVar36 = (int)sStack_96;
                  do {
                    iVar4 = *(int *)((longlong)plVar19 + 0x2c);
                    lVar18 = (longlong)sStack_88;
                    lVar25 = lVar18 * 8;
                    lVar21 = *(longlong *)(*plVar19 + lVar18 * 8);
                    lVar23 = (longlong)(iVar4 * iVar32 + iVar36);
                    uVar28 = *(ushort *)(lVar21 + lVar23 * 2);
                    if (uVar28 == 0x80) goto LAB_141425663;
                    bVar26 = (byte)uVar28;
                    if ((uVar28 & 1) == 0) {
                      if (bVar9) {
                        if ((uVar28 & 0x10) == 0) {
                          if (((uVar28 != 0) || (sStack_88 < 2)) ||
                             ((*(byte *)(*(longlong *)(*plVar19 + -8 + lVar18 * 8) + lVar23 * 2) &
                              0x10) == 0)) goto LAB_141425663;
                          if (sStack_96 < 1) {
                            uVar28 = 0;
                          }
                          else {
                            uVar28 = *(ushort *)
                                      (lVar21 + -2 + (longlong)(iVar4 * iVar32 + iVar36) * 2) & 0x10
                            ;
                          }
                          if (sStack_98 < 1) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = *(ushort *)
                                      (lVar21 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) &
                                     0x10;
                          }
                          if (iVar36 < iVar4 + -1) {
                            uVar29 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + 2 +
                                      (longlong)(iVar4 * iVar32 + iVar36) * 2) & 0x10;
                          }
                          else {
                            uVar29 = 0;
                          }
                          iVar17 = (int)plVar19[6] + -1;
                          if (iVar32 < iVar17) {
                            uVar20 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) +
                                      (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) & 0x10;
                          }
                          else {
                            uVar20 = 0;
                          }
                          uVar22 = 0;
                          if ((sStack_96 < 1) || (sStack_98 < 1)) {
                            uVar34 = 0;
                            if (0 < sStack_96) goto LAB_14142541d;
LAB_14142544a:
                            uVar34 = 0;
                          }
                          else {
                            uVar34 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + -2 +
                                      (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) & 0x10;
LAB_14142541d:
                            uVar22 = uVar34;
                            if (iVar17 <= iVar32) goto LAB_14142544a;
                            uVar34 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + -2 +
                                      (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) & 0x10;
                          }
                          if ((iVar36 < iVar4 + -1) && (0 < sStack_98)) {
                            uVar33 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + 2 +
                                      (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) & 0x10;
LAB_1414254a2:
                            if ((int)plVar19[6] + -1 <= iVar32) goto LAB_1414254d1;
                            uVar13 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + 2 +
                                      (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) & 0x10;
                          }
                          else {
                            uVar33 = 0;
                            if (iVar36 < iVar4 + -1) goto LAB_1414254a2;
LAB_1414254d1:
                            uVar13 = 0;
                          }
                          if ((((uVar14 == 0) && (uVar20 == 0)) && (uVar29 == 0)) &&
                             (((uVar28 == 0 && (uVar22 == 0)) &&
                              ((uVar34 == 0 && ((uVar33 == 0 && (uVar13 == 0)))))))) {
                            puVar1 = (ushort *)
                                     (*(longlong *)
                                       (**(longlong **)(param_1 + 0x40) + (longlong)sStack_88 * 8) +
                                     (longlong)
                                     (iVar32 * *(int *)((longlong)*(longlong **)(param_1 + 0x40) +
                                                       0x2c) + iVar36) * 2);
                            *puVar1 = *puVar1 | 0x40;
                            uVar30 = FUN_140ece790();
                            uVar30 = uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff;
                            uVar31 = uVar30 >> 0x1d;
                            if (uVar30 >> 0x1d == 0) {
                              uVar30 = (uint)(short)uStackX_18;
                              if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                                if (((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   ((-1 < (short)uStack_94 &&
                                    (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      (sStackX_20 < _DAT_14250a564)) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x7f;
                                }
                              }
                              else if (((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                      && (((-1 < (short)uStack_94 &&
                                           ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)
                                             ) && (sStackX_20 < _DAT_14250a564)))) &&
                                          ((_DAT_14250a528 != 0 &&
                                           (lVar25 = *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)
                                                          (_DAT_14250a528 +
                                                          ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xa7;
                              }
                            }
                            else if (uVar31 == 1) {
                              uVar30 = (uint)(short)uStackX_18;
                              if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                                if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                    ((-1 < (short)uStack_94 &&
                                     ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      (sStackX_20 < _DAT_14250a564)))))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x80;
                                }
                              }
                              else if (((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                      && ((-1 < (short)uStack_94 &&
                                          (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)
                                             ) && (sStackX_20 < _DAT_14250a564)) &&
                                           ((_DAT_14250a528 != 0 &&
                                            (lVar25 = *(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)
                                                           (_DAT_14250a528 +
                                                           ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                         ((longlong)(short)uStack_94 >> 4) * 8) +
                                                       (longlong)sStackX_20 * 8), lVar25 != 0)))))))
                                      ) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xa8;
                              }
                            }
                            else if (uVar31 == 2) {
                              uVar30 = (uint)(short)uStackX_18;
                              if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                                if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                    ((-1 < (short)uStack_94 &&
                                     ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      (sStackX_20 < _DAT_14250a564)))))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x81;
                                }
                              }
                              else if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                       && ((-1 < (short)uStack_94 &&
                                           ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)
                                             ) && (sStackX_20 < _DAT_14250a564)))))) &&
                                      ((_DAT_14250a528 != 0 &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xa9;
                              }
                            }
                            else if (uVar31 == 3) {
                              uVar30 = (uint)(short)uStackX_18;
                              if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                                if (((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   ((-1 < (short)uStack_94 &&
                                    (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      (sStackX_20 < _DAT_14250a564)) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x82;
                                }
                              }
                              else if (((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                      && (((-1 < (short)uStack_94 &&
                                           ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)
                                             ) && (sStackX_20 < _DAT_14250a564)))) &&
                                          ((_DAT_14250a528 != 0 &&
                                           (lVar25 = *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)
                                                          (_DAT_14250a528 +
                                                          ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xaa;
                              }
                            }
                          }
                          else {
                            lVar25 = *(longlong *)(*plVar19 + (longlong)sStack_88 * 8);
                            *(ushort *)(lVar25 + (longlong)(iVar36 + iVar4 * iVar32) * 2) =
                                 *(ushort *)(lVar25 + (longlong)(iVar4 * iVar32 + iVar36) * 2) |
                                 0x20;
                            if (-1 < (short)uStackX_18) {
                              uVar30 = (uint)(short)uStackX_18;
                              uVar31 = (uint)(short)uStackX_18;
                              lVar25 = (longlong)(short)uStackX_18 >> 4;
                              if ((*(uint *)(param_1 + 0x10) & 4) == 0) {
                                if ((((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                                     ((short)uStack_94 < _DAT_14250a560)) &&
                                    ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar21 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar21 != 0)))) {
                                  uVar15 = uVar30 & 0x8000000f;
                                  if ((int)uVar15 < 0) {
                                    uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar16 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar16 < 0) {
                                    uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar21 + (((longlong)(int)uVar15 + 5) * 0x10 +
                                             (longlong)(int)uVar16) * 2) = 0x75;
                                }
                              }
                              else if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                      && ((((short)uStack_94 < _DAT_14250a560 &&
                                           (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                            (_DAT_14250a528 != 0)))) &&
                                          (lVar21 = *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                       ((longlong)(short)uStack_94 >> 4) * 8) +
                                                     (longlong)sStackX_20 * 8), lVar21 != 0)))) {
                                uVar15 = uVar31 & 0x8000000f;
                                if ((int)uVar15 < 0) {
                                  uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                                }
                                uVar16 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar21 + (((longlong)(int)uVar15 + 5) * 0x10 +
                                           (longlong)(int)uVar16) * 2) = 0x9d;
                              }
                              if ((((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                                   (((short)uStack_94 < _DAT_14250a560 &&
                                    ((-1 < (short)(sStackX_20 + 1) &&
                                     (sStackX_20 + 1 < _DAT_14250a564)))))) && (_DAT_14250a528 != 0)
                                  ) && (lVar21 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) + 8 +
                                                  (longlong)sStackX_20 * 8), lVar21 != 0)) {
                                uVar15 = uVar31 & 0x8000000f;
                                if ((int)uVar15 < 0) {
                                  uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                                }
                                uVar16 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                                }
                                if (((((*(short *)(lVar21 + (((longlong)(int)uVar15 + 5) * 0x10 +
                                                            (longlong)(int)uVar16) * 2) == 0x20) &&
                                      (-1 < (short)uStackX_18)) && ((int)uVar31 < _DAT_14250a55c))
                                    && (((short)uStack_94 < _DAT_14250a560 &&
                                        (sStackX_20 + 1 < _DAT_14250a564)))) &&
                                   (_DAT_14250a528 != 0)) {
                                  uVar30 = uVar30 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                       ((longlong)(short)uStack_94 >> 4) * 8) + 8 +
                                     (longlong)sStackX_20 * 8) +
                                   (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31) * 2)
                                       = 1;
                                }
                              }
                            }
                          }
                        }
                        else {
                          if (sStack_96 < 1) {
                            uVar28 = 0;
                          }
                          else {
                            uVar28 = *(ushort *)(lVar21 + -2 + lVar23 * 2) & 0x10;
                          }
                          uVar14 = 0;
                          iVar4 = *(int *)((longlong)plVar19 + 0x2c);
                          if (sStack_98 < 1) {
                            uVar29 = 0;
                          }
                          else {
                            uVar29 = *(ushort *)
                                      (lVar21 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) &
                                     0x10;
                          }
                          if (iVar36 < iVar4 + -1) {
                            uVar20 = *(ushort *)(lVar21 + 2 + lVar23 * 2) & 0x10;
                          }
                          else {
                            uVar20 = 0;
                          }
                          iVar17 = (int)plVar19[6] + -1;
                          if (iVar32 < iVar17) {
                            uVar22 = *(ushort *)
                                      (lVar21 + (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) &
                                     0x10;
                          }
                          else {
                            uVar22 = 0;
                          }
                          if ((sStack_96 < 1) || (sStack_98 < 1)) {
                            uVar33 = 0;
                            uVar34 = uVar14;
                            if (0 < sStack_96) goto LAB_141421d5d;
                          }
                          else {
                            uVar33 = *(ushort *)
                                      (lVar21 + -2 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2)
                                     & 0x10;
LAB_141421d5d:
                            uVar34 = uVar33;
                            if (iVar32 < iVar17) {
                              uVar14 = *(ushort *)
                                        (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + -2 +
                                        (longlong)
                                        ((iVar32 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar36)
                                        * 2) & 0x10;
                            }
                          }
                          iVar4 = *(int *)((longlong)plVar19 + 0x2c);
                          if ((iVar36 < iVar4 + -1) && (0 < sStack_98)) {
                            uVar33 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + 2 +
                                      (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) & 0x10;
LAB_141421de7:
                            if ((int)plVar19[6] + -1 <= iVar32) goto LAB_141421e1e;
                            uVar13 = *(ushort *)
                                      (*(longlong *)(*plVar19 + (longlong)sStack_88 * 8) + 2 +
                                      (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) & 0x10;
                          }
                          else {
                            uVar33 = 0;
                            if (iVar36 < iVar4 + -1) goto LAB_141421de7;
LAB_141421e1e:
                            uVar13 = 0;
                          }
                          cVar11 = (uVar34 != 0) + '\x01';
                          if (uVar33 == 0) {
                            cVar11 = uVar34 != 0;
                          }
                          cVar5 = cVar11 + '\x01';
                          if (uVar14 == 0) {
                            cVar5 = cVar11;
                          }
                          cVar11 = cVar5 + '\x01';
                          if (uVar13 == 0) {
                            cVar11 = cVar5;
                          }
                          if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                            if (uVar29 != 0) {
                              if (uVar22 == 0) {
LAB_141423b30:
                                if (uVar20 == 0) {
                                  if (uVar28 == 0) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                    {
                                      if (((-1 < (short)uStack_94) &&
                                          ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                           && (sStackX_20 < _DAT_14250a564)))) &&
                                         (_DAT_14250a528 != 0)) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x77;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (-1 < (short)uStackX_18) {
                                      if (uVar34 == 0) {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if (((-1 < (short)uStack_94) &&
                                            ((short)uStack_94 < _DAT_14250a560)) &&
                                           ((-1 < sStackX_20 &&
                                            ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))
                                            ))) {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0x7b;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      else {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if ((((-1 < (short)uStack_94) &&
                                             ((short)uStack_94 < _DAT_14250a560)) &&
                                            (-1 < sStackX_20)) &&
                                           ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                        {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 9;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                }
                                else if (uVar28 == 0) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (-1 < (short)uStackX_18) {
                                    if (uVar33 == 0) {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((short)uStack_94 < _DAT_14250a560)) &&
                                         ((-1 < sStackX_20 &&
                                          ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))
                                         ) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x7c;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 8;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                else if ((uVar33 == 0) || (uVar34 == 0)) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) {
                                    if ((((-1 < (short)uStack_94) &&
                                         ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20))
                                       && ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x14;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) {
                                    if (((-1 < (short)uStack_94) &&
                                        ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)))) &&
                                       (_DAT_14250a528 != 0)) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0xd;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                goto LAB_141424e5c;
                              }
                              if (uVar20 == 0) {
                                if (uVar28 == 0) {
                                  if (uVar22 == 0) goto LAB_141423b30;
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if (((-1 < (short)uStack_94) &&
                                      ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                       (sStackX_20 < _DAT_14250a564)))) && (_DAT_14250a528 != 0)) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x16;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else if ((uVar34 == 0) || (uVar14 == 0)) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if ((((-1 < (short)uStack_94) &&
                                       ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)) &&
                                     ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x11;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if (((-1 < (short)uStack_94) &&
                                      ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                       (sStackX_20 < _DAT_14250a564)))) && (_DAT_14250a528 != 0)) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xf;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                              }
                              else if (uVar28 == 0) {
                                if ((uVar33 == 0) || (uVar13 == 0)) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if ((((-1 < (short)uStack_94) &&
                                       ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)) &&
                                     ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x12;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if ((-1 < (short)uStack_94) &&
                                     (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                       (sStackX_20 < _DAT_14250a564)) && (_DAT_14250a528 != 0)))) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xe;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                              }
                              else {
                                uVar30 = (uint)(short)uStackX_18;
                                if ((short)uStackX_18 < 0) goto LAB_141424e5c;
                                if (cVar11 == '\0') {
                                  if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                  if (((-1 < (short)uStack_94) &&
                                      ((short)uStack_94 < _DAT_14250a560)) &&
                                     ((-1 < sStackX_20 &&
                                      ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x10;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else {
                                  if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                  if ((((-1 < (short)uStack_94) &&
                                       ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)) &&
                                     ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 7;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                              }
                              goto LAB_141424e65;
                            }
                            if (uVar22 != 0) {
                              if (uVar20 == 0) {
                                if (uVar28 == 0) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) {
                                    if (((-1 < (short)uStack_94) &&
                                        ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)))) &&
                                       (_DAT_14250a528 != 0)) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x78;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (-1 < (short)uStackX_18) {
                                    if (uVar14 == 0) {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((short)uStack_94 < _DAT_14250a560)) &&
                                         ((-1 < sStackX_20 &&
                                          ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))
                                         ) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x7d;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0xb;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                              }
                              else {
                                if (uVar28 != 0) {
                                  if ((uVar13 == 0) || (uVar14 == 0)) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                    goto LAB_141424e5c;
                                    if ((((-1 < (short)uStack_94) &&
                                         ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20))
                                       && ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x15;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                    goto LAB_141424e5c;
                                    if (((-1 < (short)uStack_94) &&
                                        ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)))) &&
                                       (_DAT_14250a528 != 0)) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0xc;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  goto LAB_141424e65;
                                }
                                uVar30 = (uint)(short)uStackX_18;
                                if (-1 < (short)uStackX_18) {
                                  if (uVar13 == 0) {
                                    if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                    if (((-1 < (short)uStack_94) &&
                                        ((short)uStack_94 < _DAT_14250a560)) &&
                                       ((-1 < sStackX_20 &&
                                        ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x7e;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  else {
                                    if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                    if ((((-1 < (short)uStack_94) &&
                                         ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20))
                                       && ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 10;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  goto LAB_141424e65;
                                }
                              }
                              goto LAB_141424e5c;
                            }
                            if ((uVar20 != 0) && (uVar28 != 0)) {
                              uVar30 = (uint)(short)uStackX_18;
                              if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                              goto LAB_141424e5c;
                              if ((((-1 < (short)uStack_94) && ((short)uStack_94 < _DAT_14250a560))
                                  && (-1 < sStackX_20)) &&
                                 ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                lVar25 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 +
                                              ((longlong)(short)uStackX_18 >> 4) * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8);
                                if (lVar25 == 0) goto LAB_141424bda;
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x17;
                                uVar30 = (uint)uStackX_18;
                              }
                              goto LAB_141424e65;
                            }
                            if (uVar20 == 0) {
                              if (uVar28 == 0) goto LAB_141424be7;
                              uVar30 = (uint)(short)uStackX_18;
                              if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                              goto LAB_141424e5c;
                              if (((-1 < (short)uStack_94) &&
                                  ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                   (sStackX_20 < _DAT_14250a564)))) && (_DAT_14250a528 != 0)) {
                                lVar25 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 +
                                              ((longlong)(short)uStackX_18 >> 4) * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8);
                                if (lVar25 != 0) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x7a;
                                }
                                goto LAB_141424bda;
                              }
                              goto LAB_141424e65;
                            }
                            if (uVar28 == 0) {
                              uVar30 = (uint)(short)uStackX_18;
                              if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                              goto LAB_141424e5c;
                              if (((-1 < (short)uStack_94) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                lVar25 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 +
                                              ((longlong)(short)uStackX_18 >> 4) * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8);
                                if (lVar25 == 0) goto LAB_141424bda;
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x79;
                                uVar30 = (uint)uStackX_18;
                              }
                              goto LAB_141424e65;
                            }
LAB_141424be7:
                            uVar30 = (uint)(short)uStackX_18;
                            if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                            goto LAB_141424e5c;
                            if (((short)uStack_94 < 0) ||
                               (((_DAT_14250a560 <= (short)uStack_94 || (sStackX_20 < 0)) ||
                                (_DAT_14250a564 <= sStackX_20)))) goto LAB_141424e65;
                            if (_DAT_14250a528 != 0) {
                              lVar25 = *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)
                                            (_DAT_14250a528 + ((longlong)(short)uStackX_18 >> 4) * 8
                                            ) + ((longlong)(short)uStack_94 >> 4) * 8) +
                                        (longlong)sStackX_20 * 8);
                              if (lVar25 != 0) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x76;
                              }
                              uVar30 = (uint)uStackX_18;
                            }
LAB_141424cc4:
                            if ((((short)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                               (((short)uStack_94 < _DAT_14250a560 &&
                                (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                 (_DAT_14250a528 != 0)))))) {
                              lVar25 = *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)
                                            (_DAT_14250a528 + ((longlong)(short)uStackX_18 >> 4) * 8
                                            ) + ((longlong)(short)uStack_94 >> 4) * 8) +
                                        (longlong)sStackX_20 * 8);
                              if (lVar25 != 0) {
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                FUN_14055c0a0(lVar25,uVar31,uVar30);
                              }
                              uVar30 = (uint)uStackX_18;
                            }
                          }
                          else {
                            if (uVar29 == 0) {
                              if (uVar22 != 0) {
                                if (uVar20 == 0) {
                                  if (uVar28 == 0) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                    {
                                      if ((((-1 < (short)uStack_94) &&
                                           (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                           )) && (sStackX_20 < _DAT_14250a564)) &&
                                         (_DAT_14250a528 != 0)) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0xa0;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (-1 < (short)uStackX_18) {
                                      if (uVar14 == 0) {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if ((((-1 < (short)uStack_94) &&
                                             ((short)uStack_94 < _DAT_14250a560)) &&
                                            (-1 < sStackX_20)) &&
                                           ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                        {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0xa5;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      else {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if (((-1 < (short)uStack_94) &&
                                            ((short)uStack_94 < _DAT_14250a560)) &&
                                           ((-1 < sStackX_20 &&
                                            ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))
                                            ))) {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0x42;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                }
                                else {
                                  if (uVar28 != 0) {
                                    if ((uVar13 == 0) || (uVar14 == 0)) {
                                      uVar30 = (uint)(short)uStackX_18;
                                      if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30)
                                         ) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x58;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      uVar30 = (uint)(short)uStackX_18;
                                      if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30)
                                         ) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                           && (sStackX_20 < _DAT_14250a564)))) &&
                                         (_DAT_14250a528 != 0)) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x44;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (-1 < (short)uStackX_18) {
                                    if (uVar13 == 0) {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((short)uStack_94 < _DAT_14250a560)) &&
                                         ((-1 < sStackX_20 &&
                                          ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))
                                         ) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0xa6;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x40;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                goto LAB_141424e5c;
                              }
                              if ((uVar20 == 0) || (uVar28 == 0)) {
                                if (uVar20 == 0) {
                                  if (uVar28 == 0) goto LAB_1414234af;
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if (((-1 < (short)uStack_94) &&
                                      ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                       (sStackX_20 < _DAT_14250a564)))) && (_DAT_14250a528 != 0)) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xa2;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else if (uVar28 == 0) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                  goto LAB_141424e5c;
                                  if (((-1 < (short)uStack_94) &&
                                      ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                       (sStackX_20 < _DAT_14250a564)))) && (_DAT_14250a528 != 0)) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xa1;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                                else {
LAB_1414234af:
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((short)uStackX_18 < 0) goto LAB_141424e5c;
                                  if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                      && (((short)uStack_94 < _DAT_14250a560 &&
                                          ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                                     (_DAT_14250a528 != 0)) {
                                    lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8);
                                    if (lVar25 == 0) goto LAB_141424bda;
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x9e;
                                    uVar30 = (uint)uStackX_18;
                                  }
                                }
                              }
                              else {
                                uVar30 = (uint)(short)uStackX_18;
                                if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                goto LAB_141424e5c;
                                if (((-1 < (short)uStack_94) &&
                                    (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                   ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))) {
                                  lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (_DAT_14250a528 +
                                                ((longlong)(short)uStackX_18 >> 4) * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8);
                                  if (lVar25 == 0) goto LAB_141424bda;
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xe2;
                                  uVar30 = (uint)uStackX_18;
                                }
                              }
                            }
                            else {
                              if (uVar22 == 0) {
LAB_1414223f4:
                                if (uVar20 == 0) {
                                  if (uVar28 == 0) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                    {
                                      if (((-1 < (short)uStack_94) &&
                                          (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x9f;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (-1 < (short)uStackX_18) {
                                      if (uVar34 == 0) {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if ((((-1 < (short)uStack_94) &&
                                             ((short)uStack_94 < _DAT_14250a560)) &&
                                            (-1 < sStackX_20)) &&
                                           ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                        {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0xa3;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      else {
                                        if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                        if (((-1 < (short)uStack_94) &&
                                            ((short)uStack_94 < _DAT_14250a560)) &&
                                           ((-1 < sStackX_20 &&
                                            ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))
                                            ))) {
                                          lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8);
                                          if (lVar25 == 0) goto LAB_141424bda;
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0x30;
                                          uVar30 = (uint)uStackX_18;
                                        }
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                }
                                else if (uVar28 == 0) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (-1 < (short)uStackX_18) {
                                    if (uVar33 == 0) {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((short)uStack_94 < _DAT_14250a560)) &&
                                         ((-1 < sStackX_20 &&
                                          ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))
                                         ) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0xa4;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x21;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                else if ((uVar33 == 0) || (uVar34 == 0)) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) {
                                    if ((((-1 < (short)uStack_94) &&
                                         ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20))
                                       && ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x57;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) {
                                    if (((-1 < (short)uStack_94) &&
                                        ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)))) &&
                                       (_DAT_14250a528 != 0)) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) {
LAB_141424bda:
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      else {
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x45;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                              }
                              else {
                                if (uVar20 == 0) {
                                  if (uVar28 == 0) {
                                    if (uVar22 == 0) goto LAB_1414223f4;
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                    goto LAB_141424e5c;
                                    if ((-1 < (short)uStack_94) &&
                                       (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)) && (_DAT_14250a528 != 0))
                                       )) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0xab;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  else if ((uVar34 == 0) || (uVar14 == 0)) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                    goto LAB_141424e5c;
                                    if ((((-1 < (short)uStack_94) &&
                                         ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20))
                                       && ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0))))
                                    {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x55;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (((short)uStackX_18 < 0) || (_DAT_14250a55c <= (int)uVar30))
                                    goto LAB_141424e5c;
                                    if (((-1 < (short)uStack_94) &&
                                        ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                         && (sStackX_20 < _DAT_14250a564)))) &&
                                       (_DAT_14250a528 != 0)) {
                                      lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8);
                                      if (lVar25 == 0) goto LAB_141424bda;
                                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x4e;
                                      uVar30 = (uint)uStackX_18;
                                    }
                                  }
                                  goto LAB_141424e65;
                                }
                                if (uVar28 == 0) {
                                  if ((uVar33 == 0) || (uVar13 == 0)) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                    {
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x56;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                  else {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if ((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c))
                                    {
                                      if (((-1 < (short)uStack_94) &&
                                          ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))
                                           && (sStackX_20 < _DAT_14250a564)))) &&
                                         (_DAT_14250a528 != 0)) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x4d;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                      goto LAB_141424e65;
                                    }
                                  }
                                }
                                else {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (-1 < (short)uStackX_18) {
                                    if (cVar11 == '\0') {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if (((-1 < (short)uStack_94) &&
                                          ((short)uStack_94 < _DAT_14250a560)) &&
                                         ((-1 < sStackX_20 &&
                                          ((sStackX_20 < _DAT_14250a564 && (_DAT_14250a528 != 0)))))
                                         ) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x54;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    else {
                                      if (_DAT_14250a55c <= (int)uVar30) goto LAB_141424e5c;
                                      if ((((-1 < (short)uStack_94) &&
                                           ((short)uStack_94 < _DAT_14250a560)) && (-1 < sStackX_20)
                                          ) && ((sStackX_20 < _DAT_14250a564 &&
                                                (_DAT_14250a528 != 0)))) {
                                        lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8);
                                        if (lVar25 == 0) goto LAB_141424bda;
                                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x1f;
                                        uVar30 = (uint)uStackX_18;
                                      }
                                    }
                                    goto LAB_141424e65;
                                  }
                                }
                              }
LAB_141424e5c:
                              uVar30 = (uint)(short)uStackX_18;
                            }
LAB_141424e65:
                            if (-1 < (short)uVar30) goto LAB_141424cc4;
                          }
                          FUN_141455cf0(0x1423f3970,uVar30,uStack_94,sStackX_20);
                          if (-1 < (short)uStackX_18) {
                            uVar30 = (uint)(short)uStackX_18;
                            lVar25 = (longlong)(short)uStackX_18 >> 4;
                            if (((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                && (((short)uStack_94 < _DAT_14250a560 &&
                                    ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                               ((_DAT_14250a528 != 0 &&
                                (lVar21 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                             ((longlong)(short)uStack_94 >> 4) * 8) +
                                           (longlong)sStackX_20 * 8), lVar21 != 0)))) {
                              uVar31 = uVar30 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              uVar15 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar31 * 0x10 + (longlong)(int)uVar15
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffffeff;
                            }
                            else if ((short)uStackX_18 < 0) goto LAB_14142520e;
                            if (((((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                                  ((short)uStack_94 < _DAT_14250a560)) &&
                                 ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                (_DAT_14250a528 != 0)) &&
                               (lVar21 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8), lVar21 != 0)) {
                              uVar31 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              uVar15 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar31 * 0x10 + (longlong)(int)uVar15
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffffdff;
                            }
                            else if ((short)uStackX_18 < 0) goto LAB_14142520e;
                            uVar31 = (uint)(short)uStackX_18;
                            if (((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                                (((short)uStack_94 < _DAT_14250a560 &&
                                 (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                  (_DAT_14250a528 != 0)))))) &&
                               (lVar21 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8), lVar21 != 0)) {
                              uVar15 = uVar30 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffffbff;
                            }
                            else if ((short)uStackX_18 < 0) goto LAB_14142520e;
                            if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                               ((((short)uStack_94 < _DAT_14250a560 &&
                                 ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                ((_DAT_14250a528 != 0 &&
                                 (lVar21 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar21 != 0)))))) {
                              uVar15 = uVar31 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffff7ff;
                            }
                            else if ((short)uStackX_18 < 0) goto LAB_14142520e;
                            if (((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                                ((short)uStack_94 < _DAT_14250a560)) &&
                               (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                ((_DAT_14250a528 != 0 &&
                                 (lVar21 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar21 != 0)))))) {
                              uVar15 = uVar30 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xffffefff;
                            }
                            else if ((short)uStackX_18 < 0) goto LAB_14142520e;
                            if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                               (((short)uStack_94 < _DAT_14250a560 &&
                                ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                  (_DAT_14250a528 != 0)) &&
                                 (lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                              uVar31 = uVar31 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              uVar30 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar25 + 0x6a0 +
                                               ((longlong)(int)uVar31 * 0x10 + (longlong)(int)uVar30
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xffffff7f;
                            }
                          }
LAB_14142520e:
                          iVar37 = _DAT_14250a564;
                          iVar17 = _DAT_14250a560;
                          iVar4 = _DAT_14250a55c;
                          lVar25 = _DAT_14250a528;
                          cVar11 = FUN_140142fc0(0x1423f3970,uStackX_18,uStack_94,sStackX_20);
                          if ((((cVar11 < '\x01') || ((short)uStackX_18 < 0)) ||
                              ((iVar4 <= (short)uStackX_18 ||
                               (((short)uStack_94 < 0 || (iVar17 <= (short)uStack_94)))))) ||
                             ((sStackX_20 < 0 || ((iVar37 <= sStackX_20 || (lVar25 == 0)))))) {
                            uVar24 = (ulonglong)uStackX_18;
                          }
                          else {
                            uVar24 = (ulonglong)(short)uStackX_18;
                            lVar25 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(lVar25 + ((longlong)uVar24 >> 4) * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8);
                            if (lVar25 != 0) {
                              uVar30 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              FUN_14054eab0(lVar25,uVar31,uVar30,0,0);
                            }
                          }
                          FUN_141475770(0x1423f3970,uVar24 & 0xffff,uStack_94,sStackX_20);
                        }
                      }
                      else {
                        sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18,uStack_94,sStackX_20);
                        bVar39 = false;
                        if (((sVar12 == 1) || (sVar12 == 0x20)) ||
                           ((sVar12 == 0x23 || (sVar12 == 0x2a)))) {
                          bVar39 = true;
                        }
                        else if ((0x2f < (ushort)(sVar12 - 0x6dU)) ||
                                ((0xc000000000c3U >> ((ulonglong)(ushort)(sVar12 - 0x6dU) & 0x3f) &
                                 1) == 0)) goto LAB_141425663;
                        lVar21 = (longlong)sStack_88;
                        uVar30 = (uint)(short)uStackX_18;
                        uVar31 = (uint)(short)uStackX_18;
                        lVar25 = (longlong)(short)uStackX_18 >> 4;
                        if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                          if (0 < sStack_88) {
                            if (((bVar26 & 0x3e) == 0x20) ||
                               ((*(byte *)(*(longlong *)(*plVar19 + -8 + lVar21 * 8) +
                                          (longlong)
                                          (iVar32 * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2
                                          ) & 1) == 0)) {
                              bVar41 = false;
                            }
                            else {
                              bVar41 = true;
                            }
                            if (bVar41) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (0 < sStackX_20)) &&
                                  ((sStackX_20 + -1 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar18 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) + -8 +
                                               (longlong)sStackX_20 * 8), lVar18 != 0)))))))) {
                                uVar15 = uVar31 & 0x8000000f;
                                if ((int)uVar15 < 0) {
                                  uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                                }
                                uVar16 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                                }
                                if (*(short *)(lVar18 + (((longlong)(int)uVar15 + 5) * 0x10 +
                                                        (longlong)(int)uVar16) * 2) == 0x5e)
                                goto LAB_141425663;
                              }
                              puVar1 = (ushort *)
                                       (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar21 * 8)
                                       + (longlong)
                                         (iVar32 * *(int *)((longlong)*(longlong **)(param_1 + 0x40)
                                                           + 0x2c) + iVar36) * 2);
                              *puVar1 = *puVar1 | 1;
                              if (((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x5e;
                              }
                              goto LAB_141425663;
                            }
                          }
                          if (uVar28 != 0) {
                            uVar14 = uVar28 & 0x1e;
                            if (uVar14 == 0x1e) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb3;
                              }
                            }
                            else if (uVar14 == 0x1c) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xaf;
                              }
                            }
                            else if (uVar14 == 0x1a) {
                              if ((((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                    (-1 < (short)uStack_94)) &&
                                   (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                  (sStackX_20 < _DAT_14250a564)) &&
                                 ((_DAT_14250a528 != 0 &&
                                  (lVar25 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                               ((longlong)(short)uStack_94 >> 4) * 8) +
                                             (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb2;
                              }
                            }
                            else if (uVar14 == 0x16) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xb0;
                              }
                            }
                            else if (uVar14 == 0xe) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb1;
                              }
                            }
                            else if (uVar14 == 6) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x6f;
                              }
                            }
                            else if (uVar14 == 10) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x6c;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x12) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x71;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0xc) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x70;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x14) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x6b;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x18) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x72;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 2) {
                              if ((((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                    (-1 < (short)uStack_94)) &&
                                   (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                  (sStackX_20 < _DAT_14250a564)) &&
                                 ((_DAT_14250a528 != 0 &&
                                  (lVar25 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                               ((longlong)(short)uStack_94 >> 4) * 8) +
                                             (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xdd;
                              }
                            }
                            else {
joined_r0x000141426d60:
                              if (((((bVar26 & 0x1e) == 4) || ((bVar26 & 0x1e) == 8)) ||
                                  ((bVar26 & 0x1e) == 0x10)) ||
                                 (((uVar28 & 0x20) != 0 || (((uVar28 & 0x40) != 0 && (bVar39)))))) {
                                func_0x000140291d30(0x1423f3970,uStackX_18,uStack_94);
                              }
                            }
                          }
                        }
                        else {
                          if (0 < sStack_88) {
                            if (((bVar26 & 0x3e) == 0x20) ||
                               ((*(byte *)(*(longlong *)(*plVar19 + -8 + lVar21 * 8) +
                                          (longlong)
                                          (iVar32 * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2
                                          ) & 1) == 0)) {
                              bVar41 = false;
                            }
                            else {
                              bVar41 = true;
                            }
                            if (bVar41) {
                              if ((((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                    (-1 < (short)uStack_94)) &&
                                   (((short)uStack_94 < _DAT_14250a560 && (0 < sStackX_20)))) &&
                                  (sStackX_20 + -1 < _DAT_14250a564)) &&
                                 ((_DAT_14250a528 != 0 &&
                                  (lVar18 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                               ((longlong)(short)uStack_94 >> 4) * 8) + -8 +
                                             (longlong)sStackX_20 * 8), lVar18 != 0)))) {
                                uVar15 = uVar30 & 0x8000000f;
                                if ((int)uVar15 < 0) {
                                  uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                                }
                                uVar16 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                                }
                                if (*(short *)(lVar18 + (((longlong)(int)uVar15 + 5) * 0x10 +
                                                        (longlong)(int)uVar16) * 2) == 0x5e)
                                goto LAB_141425663;
                              }
                              puVar1 = (ushort *)
                                       (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar21 * 8)
                                       + (longlong)
                                         (iVar32 * *(int *)((longlong)*(longlong **)(param_1 + 0x40)
                                                           + 0x2c) + iVar36) * 2);
                              *puVar1 = *puVar1 | 1;
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x86;
                              }
                              goto LAB_141425663;
                            }
                          }
                          if (uVar28 != 0) {
                            uVar14 = uVar28 & 0x1e;
                            if (uVar14 == 0x1e) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb8;
                              }
                            }
                            else if (uVar14 == 0x1c) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xb4;
                              }
                            }
                            else if (uVar14 == 0x1a) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb7;
                              }
                            }
                            else if (uVar14 == 0x16) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xb5;
                              }
                            }
                            else if (uVar14 == 0xe) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0xb6;
                              }
                            }
                            else if (uVar14 == 6) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x97;
                              }
                            }
                            else if (uVar14 == 10) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x94;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x12) {
                              if ((((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                    (-1 < (short)uStack_94)) &&
                                   (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                  (sStackX_20 < _DAT_14250a564)) &&
                                 ((_DAT_14250a528 != 0 &&
                                  (lVar25 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                               ((longlong)(short)uStack_94 >> 4) * 8) +
                                             (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x99;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0xc) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x98;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x14) {
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x93;
                              }
                            }
                            else if ((bVar26 & 0x1e) == 0x18) {
                              if (((((-1 < (short)uStackX_18) && ((int)uVar30 < _DAT_14250a55c)) &&
                                   (-1 < (short)uStack_94)) &&
                                  (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                 ((sStackX_20 < _DAT_14250a564 &&
                                  ((_DAT_14250a528 != 0 &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar31 = uVar31 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                uVar30 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar31 + 5) * 0x10 +
                                           (longlong)(int)uVar30) * 2) = 0x9a;
                              }
                            }
                            else {
                              if ((bVar26 & 0x1e) != 2) goto joined_r0x000141426d60;
                              if ((((-1 < (short)uStackX_18) && ((int)uVar31 < _DAT_14250a55c)) &&
                                  (-1 < (short)uStack_94)) &&
                                 ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                  ((sStackX_20 < _DAT_14250a564 &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                uVar30 = uVar30 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xe1;
                              }
                            }
                          }
                        }
                      }
                    }
                    else {
                      bVar39 = false;
                      bVar40 = false;
                      bVar38 = false;
                      bVar41 = false;
                      if ((0 < sStack_96) && ((*(byte *)(lVar21 + -2 + lVar23 * 2) & 1) != 0)) {
                        sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 - 1,uStack_94,sStackX_20
                                                    );
                        bVar38 = sVar12 != 0x5e;
                      }
                      if ((0 < sStack_98) &&
                         ((*(byte *)(lVar21 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) & 1)
                          != 0)) {
                        sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18,uStack_94 - 1);
                        bVar39 = sVar12 != 0x5e;
                      }
                      iVar17 = iVar4 + -1;
                      if ((iVar36 < iVar17) && ((*(byte *)(lVar21 + 2 + lVar23 * 2) & 1) != 0)) {
                        sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 + 1,uStack_94);
                        bVar40 = sVar12 != 0x5e;
                      }
                      iVar37 = (int)plVar19[6] + -1;
                      if ((iVar32 < iVar37) &&
                         ((*(byte *)(lVar21 + (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) & 1) !=
                          0)) {
                        sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18,uStack_94 + 1);
                        bVar41 = sVar12 != 0x5e;
                      }
                      bVar8 = false;
                      bVar27 = false;
                      bVar42 = false;
                      if ((((sStack_96 < 1) || (sStack_98 < 1)) ||
                          ((*(byte *)(lVar21 + -2 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2)
                           & 1) == 0)) ||
                         (sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 - 1,uStack_94 - 1),
                         sVar12 == 0x5e)) {
                        uVar30 = 0;
                        if (0 < sStack_96) goto LAB_14141d6f9;
                      }
                      else {
                        bVar8 = true;
                        uVar30 = 1;
LAB_14141d6f9:
                        if ((iVar32 < iVar37) &&
                           ((*(byte *)(lVar21 + -2 + (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2)
                            & 1) != 0)) {
                          sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 - 1,uStack_94 + 1);
                          bVar42 = sVar12 != 0x5e;
                        }
                      }
                      bVar43 = false;
                      if (((iVar36 < iVar17) && (0 < sStack_98)) &&
                         (((*(byte *)(lVar21 + 2 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) &
                           1) != 0 &&
                          (sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 + 1,uStack_94 - 1),
                          sVar12 != 0x5e)))) {
                        bVar27 = true;
                        bVar10 = true;
LAB_14141d7b2:
                        bVar7 = bVar10;
                        if ((iVar32 < iVar37) &&
                           ((*(byte *)(lVar21 + 2 + (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) &
                            1) != 0)) {
                          sVar12 = func_0x0001400695b0(0x1423f3970,uStackX_18 + 1,uStack_94 + 1);
                          bVar43 = sVar12 != 0x5e;
                        }
                      }
                      else {
                        bVar7 = false;
                        bVar10 = false;
                        if (iVar36 < iVar17) goto LAB_14141d7b2;
                      }
                      if (sStack_96 < 1) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = *(ushort *)(lVar21 + -2 + lVar23 * 2) & 2;
                      }
                      if (sStack_98 < 1) {
                        uVar29 = 0;
                      }
                      else {
                        uVar29 = *(ushort *)
                                  (lVar21 + (longlong)((iVar32 + -1) * iVar4 + iVar36) * 2) & 4;
                      }
                      uVar20 = 0;
                      if (iVar36 < iVar17) {
                        uVar20 = *(ushort *)(lVar21 + 2 + lVar23 * 2) & 8;
                      }
                      bVar10 = false;
                      if (iVar32 < iVar37) {
                        bVar10 = false;
                        if ((*(byte *)(lVar21 + (longlong)((iVar32 + 1) * iVar4 + iVar36) * 2) &
                            0x10) != 0) {
                          bVar10 = true;
                        }
                      }
                      uVar31 = uVar30 + 1;
                      if (!bVar7) {
                        uVar31 = uVar30;
                      }
                      uVar30 = uVar31 + 1;
                      if (!bVar42) {
                        uVar30 = uVar31;
                      }
                      uVar31 = uVar30 + 1;
                      if (!bVar43) {
                        uVar31 = uVar30;
                      }
                      if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
                        if ((uVar28 & 0x800) == 0) {
                          uVar28 = uVar28 & 0x700;
                          if ((((bVar39) && (uVar28 != 0x100)) && (0 < sStack_98)) &&
                             ((*(ushort *)
                                (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar25) +
                                (longlong)
                                ((iVar32 + -1) *
                                 *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c) + iVar36)
                                * 2) & 0x700) != 0x200)) {
                            bVar39 = false;
                          }
                          if (((bVar41) && (uVar28 != 0x200)) &&
                             ((plVar19 = *(longlong **)(param_1 + 0x40),
                              iVar32 < (int)plVar19[6] + -1 &&
                              (bVar41 = true,
                              (*(ushort *)
                                (*(longlong *)(lVar25 + *plVar19) +
                                (longlong)
                                ((iVar32 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2) &
                              0x700) != 0x100)))) {
                            bVar41 = false;
                          }
                          if (((bVar38) && (uVar28 != 0x300)) &&
                             ((0 < sStack_96 &&
                              ((*(ushort *)
                                 (*(longlong *)(lVar25 + **(longlong **)(param_1 + 0x40)) + -2 +
                                 (longlong)
                                 (iVar32 * *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c)
                                 + iVar36) * 2) & 0x700) != 0x400)))) {
                            bVar38 = false;
                          }
                          if ((bVar40) && (uVar28 != 0x400)) {
                            iVar4 = *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c);
                            if ((iVar36 < iVar4 + -1) &&
                               ((*(ushort *)
                                  (*(longlong *)(lVar25 + **(longlong **)(param_1 + 0x40)) + 2 +
                                  (longlong)(iVar4 * iVar32 + iVar36) * 2) & 0x700) != 0x300)) {
                              bVar40 = false;
                            }
                          }
                          if (((0 < sStack_98) &&
                              (uVar28 = *(ushort *)
                                         (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar25) +
                                         (longlong)
                                         ((iVar32 + -1) *
                                          *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c)
                                         + iVar36) * 2), (uVar28 & 0x700) == 0x200)) &&
                             ((uVar28 & 0x1e) != 0)) {
                            bVar39 = true;
                          }
                          plVar19 = *(longlong **)(param_1 + 0x40);
                          bVar27 = true;
                          if (((iVar32 < (int)plVar19[6] + -1) &&
                              (uVar28 = *(ushort *)
                                         (*(longlong *)(lVar25 + *plVar19) +
                                         (longlong)
                                         ((iVar32 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar36
                                         ) * 2), (uVar28 & 0x700) == 0x100)) &&
                             ((uVar28 & 0x1e) != 0)) {
                            bVar41 = bVar27;
                          }
                          if (((0 < sStack_96) &&
                              (uVar28 = *(ushort *)
                                         (*(longlong *)(lVar25 + *plVar19) + -2 +
                                         (longlong)
                                         (iVar32 * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2)
                              , (uVar28 & 0x700) != 0x400)) && ((uVar28 & 0x1e) != 0)) {
                            bVar38 = bVar27;
                          }
                          if (((iVar36 < *(int *)((longlong)plVar19 + 0x2c) + -1) &&
                              (uVar28 = *(ushort *)
                                         (*(longlong *)(lVar25 + *plVar19) + 2 +
                                         (longlong)
                                         (*(int *)((longlong)plVar19 + 0x2c) * iVar32 + iVar36) * 2)
                              , (uVar28 & 0x700) != 0x300)) && ((uVar28 & 0x1e) != 0)) {
                            bVar40 = bVar27;
                          }
                          if (bVar39) {
                            if (bVar41) {
                              if ((bVar40) && (bVar38)) goto LAB_14141df25;
                            }
                            else if ((bVar40) && (bVar38)) goto LAB_14141e00d;
                            if (-1 < (short)uStackX_18) {
                              if (bVar41) {
                                if (bVar38) {
LAB_14141de3a:
                                  if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                       (-1 < (short)uStack_94)) &&
                                      (((short)uStack_94 < _DAT_14250a560 &&
                                       (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                        (_DAT_14250a528 != 0)))))) &&
                                     (lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xc2;
                                  }
                                }
                                else {
                                  if (!bVar40) goto LAB_14141e989;
LAB_14141e2e0:
                                  if (((((((short)uStackX_18 < _DAT_14250a55c) &&
                                         (-1 < (short)uStack_94)) &&
                                        ((short)uStack_94 < _DAT_14250a560)) &&
                                       ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                      (_DAT_14250a528 != 0)) &&
                                     (lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xc1;
                                  }
                                }
                              }
                              else if (bVar40) {
LAB_14141ee49:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) &&
                                    (((short)uStack_94 < _DAT_14250a560 &&
                                     (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                      (_DAT_14250a528 != 0)))))) &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xce;
                                }
                              }
                              else if (bVar38) {
LAB_14141ed4e:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) &&
                                    ((((short)uStack_94 < _DAT_14250a560 &&
                                      ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                     (_DAT_14250a528 != 0)))) &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xcd;
                                }
                              }
                              else if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                        (-1 < (short)uStack_94)) &&
                                       ((short)uStack_94 < _DAT_14250a560)) &&
                                      (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                       ((_DAT_14250a528 != 0 &&
                                        (lVar25 = *(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (_DAT_14250a528 +
                                                       ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                     ((longlong)(short)uStack_94 >> 4) * 8) +
                                                   (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xd5;
                              }
                            }
                          }
                          else if (bVar41) {
                            if ((bVar40) && (bVar38)) goto LAB_14141ec40;
                            if (-1 < (short)uStackX_18) {
                              if (bVar40) {
LAB_14141e88f:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) &&
                                    (((short)uStack_94 < _DAT_14250a560 &&
                                     ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xd0;
                                }
                              }
                              else {
                                if (!bVar38) {
                                  if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                       (-1 < (short)uStack_94)) &&
                                      ((short)uStack_94 < _DAT_14250a560)) &&
                                     (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                      ((_DAT_14250a528 != 0 &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xd6;
                                  }
                                  goto LAB_14141f99d;
                                }
LAB_14141e796:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) && ((short)uStack_94 < _DAT_14250a560)
                                    ) && (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                          ((_DAT_14250a528 != 0 &&
                                           (lVar25 = *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)
                                                          (_DAT_14250a528 +
                                                          ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xcf;
                                }
                              }
                            }
                          }
                          else if (bVar40) {
                            if (bVar38) goto LAB_14141ef31;
                            if (((-1 < (short)uStackX_18) && ((short)uStackX_18 < _DAT_14250a55c))
                               && ((((-1 < (short)uStack_94 &&
                                     (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                    (sStackX_20 < _DAT_14250a564)) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                              uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0xd9;
                            }
                          }
                          else {
                            if (!bVar38) goto LAB_14141f019;
                            if ((((((-1 < (short)uStackX_18) && ((short)uStackX_18 < _DAT_14250a55c)
                                   ) && (-1 < (short)uStack_94)) &&
                                 (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                                (sStackX_20 < _DAT_14250a564)) &&
                               ((_DAT_14250a528 != 0 &&
                                (lVar25 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (_DAT_14250a528 +
                                               ((longlong)(short)uStackX_18 >> 4) * 8) +
                                             ((longlong)(short)uStack_94 >> 4) * 8) +
                                           (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                              uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0xd8;
                            }
                          }
                        }
                        else if (bVar39) {
                          if (bVar41) {
                            if (bVar40) {
                              if (bVar38) {
                                if (uVar31 == 4) {
                                  if ((((-1 < (short)uStackX_18) &&
                                       ((short)uStackX_18 < _DAT_14250a55c)) &&
                                      (-1 < (short)uStack_94)) &&
                                     ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      ((sStackX_20 < _DAT_14250a564 &&
                                       ((_DAT_14250a528 != 0 &&
                                        (lVar25 = *(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (_DAT_14250a528 +
                                                       ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                     ((longlong)(short)uStack_94 >> 4) * 8) +
                                                   (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 200;
                                  }
                                }
                                else if (uVar31 < 2) {
LAB_14141df25:
                                  if (((-1 < (short)uStackX_18) &&
                                      ((short)uStackX_18 < _DAT_14250a55c)) &&
                                     (((-1 < (short)uStack_94 &&
                                       ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                        (sStackX_20 < _DAT_14250a564)))) &&
                                      ((_DAT_14250a528 != 0 &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 199;
                                  }
                                }
                                else {
                                  if (uVar31 != 3) {
                                    if (bVar27) {
                                      if (bVar8) {
LAB_14141ec40:
                                        if ((((-1 < (short)uStackX_18) &&
                                             ((short)uStackX_18 < _DAT_14250a55c)) &&
                                            ((-1 < (short)uStack_94 &&
                                             ((((short)uStack_94 < _DAT_14250a560 &&
                                               (-1 < sStackX_20)) && (sStackX_20 < _DAT_14250a564)))
                                             ))) && ((_DAT_14250a528 != 0 &&
                                                     (lVar25 = *(longlong *)
                                                                (*(longlong *)
                                                                  (*(longlong *)
                                                                    (_DAT_14250a528 +
                                                                    ((longlong)(short)uStackX_18 >>
                                                                    4) * 8) +
                                                                  ((longlong)(short)uStack_94 >> 4)
                                                                  * 8) + (longlong)sStackX_20 * 8),
                                                     lVar25 != 0)))) {
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0xc4;
                                        }
                                        goto LAB_14141f99d;
                                      }
                                      if (bVar42) goto LAB_14141df25;
                                      if (bVar43) goto LAB_14141de23;
                                    }
                                    else if (bVar8) {
                                      if (bVar42) goto LAB_14141e2c3;
                                      if (bVar43) goto LAB_14141df25;
                                    }
                                    goto LAB_14141e00d;
                                  }
                                  if (!bVar27) {
                                    if ((short)uStackX_18 < 0) goto LAB_14141f99d;
                                    goto LAB_14141da63;
                                  }
                                  if (bVar8) {
                                    if (bVar43) {
                                      if (bVar42) goto LAB_14141ec40;
                                      if (-1 < (short)uStackX_18) goto LAB_14141dd35;
                                    }
                                    else if (-1 < (short)uStackX_18) goto LAB_14141dc45;
                                  }
                                  else if (-1 < (short)uStackX_18) goto LAB_14141db54;
                                }
                              }
                              else if ((bVar27) && (bVar43)) {
                                if (-1 < (short)uStackX_18) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (uVar14 == 0) {
                                    if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                        && (((short)uStack_94 < _DAT_14250a560 &&
                                            (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             (_DAT_14250a528 != 0)))))) &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x8a;
                                    }
                                  }
                                  else if (((((int)uVar30 < _DAT_14250a55c) &&
                                            (-1 < (short)uStack_94)) &&
                                           (((short)uStack_94 < _DAT_14250a560 &&
                                            ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564))))))
                                          && ((_DAT_14250a528 != 0 &&
                                              (lVar25 = *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)
                                                             (_DAT_14250a528 +
                                                             ((longlong)(short)uStackX_18 >> 4) * 8)
                                                           + ((longlong)(short)uStack_94 >> 4) * 8)
                                                         + (longlong)sStackX_20 * 8), lVar25 != 0)))
                                          ) {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x92;
                                  }
                                }
                              }
                              else {
LAB_14141e2c3:
                                if (-1 < (short)uStackX_18) goto LAB_14141e2e0;
                              }
                            }
                            else {
                              if (!bVar38) goto LAB_14141e588;
                              if ((bVar8) && (bVar42)) {
                                if (-1 < (short)uStackX_18) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (uVar20 == 0) {
                                    if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                        && ((short)uStack_94 < _DAT_14250a560)) &&
                                       (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                        ((_DAT_14250a528 != 0 &&
                                         (lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x89;
                                    }
                                  }
                                  else if ((((int)uVar30 < _DAT_14250a55c) &&
                                           (-1 < (short)uStack_94)) &&
                                          (((short)uStack_94 < _DAT_14250a560 &&
                                           ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             (_DAT_14250a528 != 0)) &&
                                            (lVar25 = *(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)
                                                           (_DAT_14250a528 +
                                                           ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                         ((longlong)(short)uStack_94 >> 4) * 8) +
                                                       (longlong)sStackX_20 * 8), lVar25 != 0))))))
                                  {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x91;
                                  }
                                }
                              }
                              else {
LAB_14141de23:
                                if (-1 < (short)uStackX_18) goto LAB_14141de3a;
                              }
                            }
                          }
                          else {
LAB_14141e588:
                            if (bVar41) {
                              if ((bVar40) || (bVar38)) {
LAB_14141f019:
                                if ((((-1 < (short)uStackX_18) &&
                                     (((short)uStackX_18 < _DAT_14250a55c && (-1 < (short)uStack_94)
                                      ))) && ((short)uStack_94 < _DAT_14250a560)) &&
                                   ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                     (_DAT_14250a528 != 0)) &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x85;
                                }
                              }
                              else if (-1 < (short)uStackX_18) {
LAB_14141e989:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) &&
                                    (((short)uStack_94 < _DAT_14250a560 &&
                                     ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xc5;
                                }
                              }
                            }
                            else if (bVar40) {
                              if (bVar38) {
                                if ((bVar27) && (bVar8)) {
                                  if (-1 < (short)uStackX_18) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (bVar10) {
                                      if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)
                                          ) && (((short)uStack_94 < _DAT_14250a560 &&
                                                ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)
                                                   ) && (_DAT_14250a528 != 0)) &&
                                                 (lVar25 = *(longlong *)
                                                            (*(longlong *)
                                                              (*(longlong *)
                                                                (_DAT_14250a528 +
                                                                ((longlong)(short)uStackX_18 >> 4) *
                                                                8) + ((longlong)(short)uStack_94 >>
                                                                     4) * 8) +
                                                            (longlong)sStackX_20 * 8), lVar25 != 0))
                                                )))) {
                                        uVar30 = uVar30 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x90;
                                      }
                                    }
                                    else if (((((int)uVar30 < _DAT_14250a55c) &&
                                              (-1 < (short)uStack_94)) &&
                                             ((short)uStack_94 < _DAT_14250a560)) &&
                                            (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             ((_DAT_14250a528 != 0 &&
                                              (lVar25 = *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)
                                                             (_DAT_14250a528 +
                                                             ((longlong)(short)uStackX_18 >> 4) * 8)
                                                           + ((longlong)(short)uStack_94 >> 4) * 8)
                                                         + (longlong)sStackX_20 * 8), lVar25 != 0)))
                                             ))) {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x88;
                                    }
                                  }
                                }
                                else {
LAB_14141e00d:
                                  if ((((-1 < (short)uStackX_18) &&
                                       ((short)uStackX_18 < _DAT_14250a55c)) &&
                                      ((-1 < (short)uStack_94 &&
                                       (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20))))))
                                     && ((sStackX_20 < _DAT_14250a564 &&
                                         ((_DAT_14250a528 != 0 &&
                                          (lVar25 = *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (_DAT_14250a528 +
                                                         ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                       ((longlong)(short)uStack_94 >> 4) * 8) +
                                                     (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xc3;
                                  }
                                }
                              }
                              else if (-1 < (short)uStackX_18) {
                                if (!bVar27) goto LAB_14141e796;
LAB_14141da63:
                                if ((((((short)uStackX_18 < _DAT_14250a55c) &&
                                      (-1 < (short)uStack_94)) &&
                                     ((short)uStack_94 < _DAT_14250a560)) &&
                                    ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x8d;
                                }
                              }
                            }
                            else {
                              if (!bVar38) goto LAB_14141f019;
                              if (-1 < (short)uStackX_18) {
                                if (!bVar8) goto LAB_14141e88f;
LAB_14141db54:
                                if ((((((short)uStackX_18 < _DAT_14250a55c) &&
                                      (-1 < (short)uStack_94)) &&
                                     ((short)uStack_94 < _DAT_14250a560)) &&
                                    ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                   ((_DAT_14250a528 != 0 &&
                                    (lVar25 = *(longlong *)
                                               (*(longlong *)
                                                 (*(longlong *)
                                                   (_DAT_14250a528 +
                                                   ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                 ((longlong)(short)uStack_94 >> 4) * 8) +
                                               (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x8e;
                                }
                              }
                            }
                          }
                        }
                        else if (bVar41) {
                          if (bVar40) {
                            if (bVar38) {
                              if ((!bVar43) || (!bVar42)) goto LAB_14141ec40;
                              if (-1 < (short)uStackX_18) {
                                uVar30 = (uint)(short)uStackX_18;
                                if (uVar29 == 0) {
                                  if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                      && ((short)uStack_94 < _DAT_14250a560)) &&
                                     (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                      ((_DAT_14250a528 != 0 &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x87;
                                  }
                                }
                                else if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                        && (((short)uStack_94 < _DAT_14250a560 &&
                                            ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                              (_DAT_14250a528 != 0)) &&
                                             (lVar25 = *(longlong *)
                                                        (*(longlong *)
                                                          (*(longlong *)
                                                            (_DAT_14250a528 +
                                                            ((longlong)(short)uStackX_18 >> 4) * 8)
                                                          + ((longlong)(short)uStack_94 >> 4) * 8) +
                                                        (longlong)sStackX_20 * 8), lVar25 != 0))))))
                                {
                                  uVar30 = uVar30 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x8f;
                                }
                              }
                            }
                            else if (-1 < (short)uStackX_18) {
                              if (!bVar43) goto LAB_14141ed4e;
LAB_14141dc45:
                              if ((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                 && (((((short)uStack_94 < _DAT_14250a560 &&
                                       ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                      (_DAT_14250a528 != 0)) &&
                                     (lVar25 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (_DAT_14250a528 +
                                                    ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                  ((longlong)(short)uStack_94 >> 4) * 8) +
                                                (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x8b;
                              }
                            }
                          }
                          else {
                            if (!bVar38) goto LAB_14141f019;
                            if (-1 < (short)uStackX_18) {
                              if (!bVar42) goto LAB_14141ee49;
LAB_14141dd35:
                              if (((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                  && (((short)uStack_94 < _DAT_14250a560 &&
                                      (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                       (_DAT_14250a528 != 0)))))) &&
                                 (lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (_DAT_14250a528 +
                                                ((longlong)(short)uStackX_18 >> 4) * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0x8c;
                              }
                            }
                          }
                        }
                        else {
                          if ((!bVar40) || (!bVar38)) goto LAB_14141f019;
LAB_14141ef31:
                          if (((-1 < (short)uStackX_18) &&
                              (((((short)uStackX_18 < _DAT_14250a55c && (-1 < (short)uStack_94)) &&
                                ((short)uStack_94 < _DAT_14250a560)) &&
                               ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                             ((_DAT_14250a528 != 0 &&
                              (lVar25 = *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (_DAT_14250a528 +
                                             ((longlong)(short)uStackX_18 >> 4) * 8) +
                                           ((longlong)(short)uStack_94 >> 4) * 8) +
                                         (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                            uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)(short)uStack_94 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined2 *)
                             (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31)
                                       * 2) = 0xc6;
                          }
                        }
                        goto LAB_14141f99d;
                      }
                      if ((uVar28 & 0x800) == 0) {
                        uVar28 = uVar28 & 0x700;
                        if (((bVar39) && (uVar28 != 0x100)) &&
                           ((0 < sStack_98 &&
                            ((*(ushort *)
                               (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar25) +
                               (longlong)
                               ((iVar32 + -1) *
                                *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c) + iVar36)
                               * 2) & 0x700) != 0x200)))) {
                          bVar39 = false;
                        }
                        if ((((bVar41) && (uVar28 != 0x200)) &&
                            (plVar19 = *(longlong **)(param_1 + 0x40), iVar32 < (int)plVar19[6] + -1
                            )) && (bVar41 = true,
                                  (*(ushort *)
                                    (*(longlong *)(lVar25 + *plVar19) +
                                    (longlong)
                                    ((iVar32 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2
                                    ) & 0x700) != 0x100)) {
                          bVar41 = false;
                        }
                        if (((bVar38) && (uVar28 != 0x300)) &&
                           ((0 < sStack_96 &&
                            ((*(ushort *)
                               (*(longlong *)(lVar25 + **(longlong **)(param_1 + 0x40)) + -2 +
                               (longlong)
                               (iVar32 * *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c) +
                               iVar36) * 2) & 0x700) != 0x400)))) {
                          bVar38 = false;
                        }
                        if ((bVar40) && (uVar28 != 0x400)) {
                          iVar4 = *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c);
                          if ((iVar36 < iVar4 + -1) &&
                             ((*(ushort *)
                                (*(longlong *)(lVar25 + **(longlong **)(param_1 + 0x40)) + 2 +
                                (longlong)(iVar4 * iVar32 + iVar36) * 2) & 0x700) != 0x300)) {
                            bVar40 = false;
                          }
                        }
                        if (((0 < sStack_98) &&
                            (uVar28 = *(ushort *)
                                       (*(longlong *)(**(longlong **)(param_1 + 0x40) + lVar25) +
                                       (longlong)
                                       ((iVar32 + -1) *
                                        *(int *)((longlong)*(longlong **)(param_1 + 0x40) + 0x2c) +
                                       iVar36) * 2), (uVar28 & 0x700) == 0x200)) &&
                           ((uVar28 & 0x1e) != 0)) {
                          bVar39 = true;
                        }
                        plVar19 = *(longlong **)(param_1 + 0x40);
                        bVar27 = true;
                        if (((iVar32 < (int)plVar19[6] + -1) &&
                            (uVar28 = *(ushort *)
                                       (*(longlong *)(lVar25 + *plVar19) +
                                       (longlong)
                                       ((iVar32 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar36)
                                       * 2), (uVar28 & 0x700) == 0x100)) && ((uVar28 & 0x1e) != 0))
                        {
                          bVar41 = bVar27;
                        }
                        if (((0 < sStack_96) &&
                            (uVar28 = *(ushort *)
                                       (*(longlong *)(lVar25 + *plVar19) + -2 +
                                       (longlong)
                                       (iVar32 * *(int *)((longlong)plVar19 + 0x2c) + iVar36) * 2),
                            (uVar28 & 0x700) == 0x400)) && ((uVar28 & 0x1e) != 0)) {
                          bVar38 = bVar27;
                        }
                        if (((iVar36 < *(int *)((longlong)plVar19 + 0x2c) + -1) &&
                            (uVar28 = *(ushort *)
                                       (*(longlong *)(lVar25 + *plVar19) + 2 +
                                       (longlong)
                                       (*(int *)((longlong)plVar19 + 0x2c) * iVar32 + iVar36) * 2),
                            (uVar28 & 0x700) == 0x300)) && ((uVar28 & 0x1e) != 0)) {
                          bVar40 = bVar27;
                        }
                        if (bVar39) {
                          if (bVar41) {
                            if ((bVar40) && (bVar38)) goto LAB_1414209d0;
                          }
                          else if ((bVar40) && (bVar38)) goto LAB_141420ac9;
                          if (-1 < (short)uStackX_18) {
                            if (bVar41) {
                              if (bVar38) {
LAB_141420bd6:
                                if ((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94)
                                    ) && (((((short)uStack_94 < _DAT_14250a560 &&
                                            ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                           (_DAT_14250a528 != 0)) &&
                                          (lVar25 = *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (_DAT_14250a528 +
                                                         ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                       ((longlong)(short)uStack_94 >> 4) * 8) +
                                                     (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xba;
                                }
                              }
                              else if (bVar40) {
LAB_141420cb7:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) && ((short)uStack_94 < _DAT_14250a560)
                                    ) && (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                          ((_DAT_14250a528 != 0 &&
                                           (lVar25 = *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)
                                                          (_DAT_14250a528 +
                                                          ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xb9;
                                }
                              }
                              else {
LAB_141420189:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) &&
                                    (((short)uStack_94 < _DAT_14250a560 &&
                                     (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                      (_DAT_14250a528 != 0)))))) &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0xbd;
                                }
                              }
                            }
                            else if (bVar40) {
LAB_141420d94:
                              if ((((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94)
                                    ) && (((short)uStack_94 < _DAT_14250a560 &&
                                          ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                                  (_DAT_14250a528 != 0)) &&
                                 (lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (_DAT_14250a528 +
                                                ((longlong)(short)uStackX_18 >> 4) * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xca;
                              }
                            }
                            else if (bVar38) {
LAB_141420e6e:
                              if ((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                 && (((short)uStack_94 < _DAT_14250a560 &&
                                     ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                       (_DAT_14250a528 != 0)) &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xc9;
                              }
                            }
                            else if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                      (-1 < (short)uStack_94)) &&
                                     ((short)uStack_94 < _DAT_14250a560)) &&
                                    (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                              uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0xd1;
                            }
                          }
                          goto LAB_14141f99d;
                        }
                        if (bVar41) {
                          if ((bVar40) && (bVar38)) goto LAB_14142102a;
                          if ((short)uStackX_18 < 0) goto LAB_14141f99d;
                          if (bVar40) {
LAB_141421131:
                            if (((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                && (((short)uStack_94 < _DAT_14250a560 &&
                                    (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                     (_DAT_14250a528 != 0)))))) &&
                               (lVar25 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 +
                                              ((longlong)(short)uStackX_18 >> 4) * 8) +
                                            ((longlong)(short)uStack_94 >> 4) * 8) +
                                          (longlong)sStackX_20 * 8), lVar25 != 0)) {
                              uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0xcc;
                            }
                          }
                          else {
                            if (!bVar38) {
                              if ((((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94)
                                    ) && (((short)uStack_94 < _DAT_14250a560 &&
                                          ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) &&
                                  (_DAT_14250a528 != 0)) &&
                                 (lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (_DAT_14250a528 +
                                                ((longlong)(short)uStackX_18 >> 4) * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 0xd2;
                              }
                              goto LAB_14141f99d;
                            }
LAB_14142120b:
                            if ((((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                 && ((short)uStack_94 < _DAT_14250a560)) &&
                                ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                               ((_DAT_14250a528 != 0 &&
                                (lVar25 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (_DAT_14250a528 +
                                               ((longlong)(short)uStackX_18 >> 4) * 8) +
                                             ((longlong)(short)uStack_94 >> 4) * 8) +
                                           (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                              uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)(short)uStack_94 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0xcb;
                            }
                          }
                          goto LAB_14141f99d;
                        }
                        if (bVar40) {
                          if (bVar38) goto LAB_1414213c7;
                          if ((((((-1 < (short)uStackX_18) && ((short)uStackX_18 < _DAT_14250a55c))
                                && (-1 < (short)uStack_94)) &&
                               (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                              (sStackX_20 < _DAT_14250a564)) &&
                             ((_DAT_14250a528 != 0 &&
                              (lVar25 = *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (_DAT_14250a528 +
                                             ((longlong)(short)uStackX_18 >> 4) * 8) +
                                           ((longlong)(short)uStack_94 >> 4) * 8) +
                                         (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                            uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)(short)uStack_94 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined2 *)
                             (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31)
                                       * 2) = 0xd4;
                          }
                          goto LAB_14141f99d;
                        }
                        if (bVar38) {
                          if ((((-1 < (short)uStackX_18) && ((short)uStackX_18 < _DAT_14250a55c)) &&
                              (-1 < (short)uStack_94)) &&
                             ((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                              ((sStackX_20 < _DAT_14250a564 &&
                               ((_DAT_14250a528 != 0 &&
                                (lVar25 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (_DAT_14250a528 +
                                               ((longlong)(short)uStackX_18 >> 4) * 8) +
                                             ((longlong)(short)uStack_94 >> 4) * 8) +
                                           (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                            uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)(short)uStack_94 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined2 *)
                             (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31)
                                       * 2) = 0xd3;
                          }
                          goto LAB_14141f99d;
                        }
                        if (((((short)uStackX_18 < 0) || (_DAT_14250a55c <= (short)uStackX_18)) ||
                            ((short)uStack_94 < 0)) ||
                           (((_DAT_14250a560 <= (short)uStack_94 || (sStackX_20 < 0)) ||
                            (_DAT_14250a564 <= sStackX_20)))) goto LAB_14141f99d;
                        if ((_DAT_14250a528 != 0) &&
                           (lVar25 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (_DAT_14250a528 + ((longlong)(short)uStackX_18 >> 4) * 8)
                                        + ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8), lVar25 != 0)) {
                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                          if ((int)uVar30 < 0) {
                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                          }
                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                          if ((int)uVar31 < 0) {
                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                          }
                          *(undefined2 *)
                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31) *
                                     2) = 0x5d;
                        }
LAB_14142174f:
                        if (((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                            ((short)uStack_94 < _DAT_14250a560)) &&
                           ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) {
                          if ((_DAT_14250a528 != 0) &&
                             (lVar25 = *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)
                                            (_DAT_14250a528 + ((longlong)(short)uStackX_18 >> 4) * 8
                                            ) + ((longlong)(short)uStack_94 >> 4) * 8) +
                                        (longlong)sStackX_20 * 8), lVar25 != 0)) {
                            uVar30 = (int)(short)uStack_94 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)(short)uStackX_18 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            FUN_14055c0a0(lVar25,uVar31,uVar30);
                          }
                        }
                      }
                      else {
                        if (bVar39) {
                          if (bVar41) {
                            if (bVar40) {
                              if (bVar38) {
                                if (uVar31 == 4) {
                                  if (((((-1 < (short)uStackX_18) &&
                                        ((short)uStackX_18 < _DAT_14250a55c)) &&
                                       ((-1 < (short)uStack_94 &&
                                        (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))))
                                       ) && (sStackX_20 < _DAT_14250a564)) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xc0;
                                  }
                                }
                                else if (uVar31 < 2) {
LAB_1414209d0:
                                  if (((-1 < (short)uStackX_18) &&
                                      (((short)uStackX_18 < _DAT_14250a55c &&
                                       (-1 < (short)uStack_94)))) &&
                                     (((short)uStack_94 < _DAT_14250a560 &&
                                      ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                        (_DAT_14250a528 != 0)) &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xbf;
                                  }
                                }
                                else {
                                  if (uVar31 != 3) {
                                    if (bVar27) {
                                      if (bVar8) {
LAB_14142102a:
                                        if (((-1 < (short)uStackX_18) &&
                                            (((short)uStackX_18 < _DAT_14250a55c &&
                                             (-1 < (short)uStack_94)))) &&
                                           (((short)uStack_94 < _DAT_14250a560 &&
                                            ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                              (_DAT_14250a528 != 0)) &&
                                             (lVar25 = *(longlong *)
                                                        (*(longlong *)
                                                          (*(longlong *)
                                                            (_DAT_14250a528 +
                                                            ((longlong)(short)uStackX_18 >> 4) * 8)
                                                          + ((longlong)(short)uStack_94 >> 4) * 8) +
                                                        (longlong)sStackX_20 * 8), lVar25 != 0))))))
                                        {
                                          uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                          if ((int)uVar30 < 0) {
                                            uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                          if ((int)uVar31 < 0) {
                                            uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                          }
                                          *(undefined2 *)
                                           (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                     (longlong)(int)uVar31) * 2) = 0xbc;
                                        }
                                        goto LAB_14141f99d;
                                      }
                                      if (bVar42) goto LAB_1414209d0;
                                      if (bVar43) goto LAB_14141f97b;
                                    }
                                    else if (bVar8) {
                                      if (bVar42) goto LAB_14141f9c9;
                                      if (bVar43) goto LAB_1414209d0;
                                    }
                                    goto LAB_141420ac9;
                                  }
                                  if (!bVar27) {
                                    if ((short)uStackX_18 < 0) goto LAB_14141f99d;
                                    goto LAB_14141ff96;
                                  }
                                  if (bVar8) {
                                    if (bVar43) {
                                      if (bVar42) goto LAB_14142102a;
                                      if (-1 < (short)uStackX_18) goto LAB_141420561;
                                    }
                                    else if (-1 < (short)uStackX_18) goto LAB_141420466;
                                  }
                                  else if (-1 < (short)uStackX_18) goto LAB_14142008f;
                                }
                              }
                              else if ((bVar27) && (bVar43)) {
                                if (-1 < (short)uStackX_18) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (uVar14 == 0) {
                                    if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                        && ((short)uStack_94 < _DAT_14250a560)) &&
                                       (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                        ((_DAT_14250a528 != 0 &&
                                         (lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x62;
                                    }
                                  }
                                  else if (((((int)uVar30 < _DAT_14250a55c) &&
                                            (-1 < (short)uStack_94)) &&
                                           (((short)uStack_94 < _DAT_14250a560 &&
                                            (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             (_DAT_14250a528 != 0)))))) &&
                                          (lVar25 = *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (_DAT_14250a528 +
                                                         ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                       ((longlong)(short)uStack_94 >> 4) * 8) +
                                                     (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x6a;
                                  }
                                }
                              }
                              else {
LAB_14141f9c9:
                                if (-1 < (short)uStackX_18) goto LAB_141420cb7;
                              }
                            }
                            else {
                              if (!bVar38) goto LAB_14141fd8e;
                              if ((bVar8) && (bVar42)) {
                                if (-1 < (short)uStackX_18) {
                                  uVar30 = (uint)(short)uStackX_18;
                                  if (uVar20 == 0) {
                                    if ((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                       && (((short)uStack_94 < _DAT_14250a560 &&
                                           ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             (_DAT_14250a528 != 0)) &&
                                            (lVar25 = *(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)
                                                           (_DAT_14250a528 +
                                                           ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                         ((longlong)(short)uStack_94 >> 4) * 8) +
                                                       (longlong)sStackX_20 * 8), lVar25 != 0))))))
                                    {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x61;
                                    }
                                  }
                                  else if (((((int)uVar30 < _DAT_14250a55c) &&
                                            (-1 < (short)uStack_94)) &&
                                           ((((short)uStack_94 < _DAT_14250a560 &&
                                             ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564))))
                                            && (_DAT_14250a528 != 0)))) &&
                                          (lVar25 = *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)
                                                         (_DAT_14250a528 +
                                                         ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                       ((longlong)(short)uStack_94 >> 4) * 8) +
                                                     (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x69;
                                  }
                                }
                              }
                              else {
LAB_14141f97b:
                                if (-1 < (short)uStackX_18) goto LAB_141420bd6;
                              }
                            }
                          }
                          else {
LAB_14141fd8e:
                            if (bVar41) {
                              if ((bVar40) || (bVar38)) {
LAB_14142064c:
                                if (((-1 < (short)uStackX_18) &&
                                    ((short)uStackX_18 < _DAT_14250a55c)) &&
                                   ((-1 < (short)uStack_94 &&
                                    (((((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)) &&
                                      (sStackX_20 < _DAT_14250a564)) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x5d;
                                }
                              }
                              else if (-1 < (short)uStackX_18) goto LAB_141420189;
                            }
                            else if (bVar40) {
                              if (bVar38) {
                                if ((bVar27) && (bVar8)) {
                                  if (-1 < (short)uStackX_18) {
                                    uVar30 = (uint)(short)uStackX_18;
                                    if (bVar10) {
                                      if (((((int)uVar30 < _DAT_14250a55c) &&
                                           (-1 < (short)uStack_94)) &&
                                          (((short)uStack_94 < _DAT_14250a560 &&
                                           (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                            (_DAT_14250a528 != 0)))))) &&
                                         (lVar25 = *(longlong *)
                                                    (*(longlong *)
                                                      (*(longlong *)
                                                        (_DAT_14250a528 +
                                                        ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                                    (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                        uVar30 = uVar30 & 0x8000000f;
                                        if ((int)uVar30 < 0) {
                                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                        }
                                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                        if ((int)uVar31 < 0) {
                                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                        }
                                        *(undefined2 *)
                                         (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                   (longlong)(int)uVar31) * 2) = 0x68;
                                      }
                                    }
                                    else if (((((int)uVar30 < _DAT_14250a55c) &&
                                              (-1 < (short)uStack_94)) &&
                                             ((short)uStack_94 < _DAT_14250a560)) &&
                                            (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                             ((_DAT_14250a528 != 0 &&
                                              (lVar25 = *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)
                                                             (_DAT_14250a528 +
                                                             ((longlong)(short)uStackX_18 >> 4) * 8)
                                                           + ((longlong)(short)uStack_94 >> 4) * 8)
                                                         + (longlong)sStackX_20 * 8), lVar25 != 0)))
                                             ))) {
                                      uVar30 = uVar30 & 0x8000000f;
                                      if ((int)uVar30 < 0) {
                                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                      if ((int)uVar31 < 0) {
                                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                      }
                                      *(undefined2 *)
                                       (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) = 0x60;
                                    }
                                  }
                                }
                                else {
LAB_141420ac9:
                                  if ((((-1 < (short)uStackX_18) &&
                                       (((short)uStackX_18 < _DAT_14250a55c &&
                                        (-1 < (short)uStack_94)))) &&
                                      ((short)uStack_94 < _DAT_14250a560)) &&
                                     ((((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                       (_DAT_14250a528 != 0)) &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                                    uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0xbb;
                                  }
                                }
                              }
                              else if (-1 < (short)uStackX_18) {
                                if (!bVar27) goto LAB_14142120b;
LAB_14141ff96:
                                if (((((((short)uStackX_18 < _DAT_14250a55c) &&
                                       (-1 < (short)uStack_94)) &&
                                      ((short)uStack_94 < _DAT_14250a560)) &&
                                     ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                    (_DAT_14250a528 != 0)) &&
                                   (lVar25 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (_DAT_14250a528 +
                                                  ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                ((longlong)(short)uStack_94 >> 4) * 8) +
                                              (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x65;
                                }
                              }
                            }
                            else {
                              if (!bVar38) goto LAB_14142064c;
                              if (-1 < (short)uStackX_18) {
                                if (!bVar8) goto LAB_141421131;
LAB_14142008f:
                                if (((((short)uStackX_18 < _DAT_14250a55c) &&
                                     (-1 < (short)uStack_94)) && ((short)uStack_94 < _DAT_14250a560)
                                    ) && (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                          ((_DAT_14250a528 != 0 &&
                                           (lVar25 = *(longlong *)
                                                      (*(longlong *)
                                                        (*(longlong *)
                                                          (_DAT_14250a528 +
                                                          ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                  uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x66;
                                }
                              }
                            }
                          }
                        }
                        else if (bVar41) {
                          if (bVar40) {
                            if (bVar38) {
                              if ((!bVar43) || (!bVar42)) goto LAB_14142102a;
                              if (-1 < (short)uStackX_18) {
                                uVar30 = (uint)(short)uStackX_18;
                                if (uVar29 == 0) {
                                  if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                      && ((short)uStack_94 < _DAT_14250a560)) &&
                                     (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                      ((_DAT_14250a528 != 0 &&
                                       (lVar25 = *(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)
                                                      (_DAT_14250a528 +
                                                      ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                    ((longlong)(short)uStack_94 >> 4) * 8) +
                                                  (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                    uVar30 = uVar30 & 0x8000000f;
                                    if ((int)uVar30 < 0) {
                                      uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                    if ((int)uVar31 < 0) {
                                      uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                    }
                                    *(undefined2 *)
                                     (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                               (longlong)(int)uVar31) * 2) = 0x5f;
                                  }
                                }
                                else if (((((int)uVar30 < _DAT_14250a55c) && (-1 < (short)uStack_94)
                                          ) && (((short)uStack_94 < _DAT_14250a560 &&
                                                (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564))
                                                 && (_DAT_14250a528 != 0)))))) &&
                                        (lVar25 = *(longlong *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (_DAT_14250a528 +
                                                       ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                     ((longlong)(short)uStack_94 >> 4) * 8) +
                                                   (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                  uVar30 = uVar30 & 0x8000000f;
                                  if ((int)uVar30 < 0) {
                                    uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                  if ((int)uVar31 < 0) {
                                    uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                  }
                                  *(undefined2 *)
                                   (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                             (longlong)(int)uVar31) * 2) = 0x67;
                                }
                              }
                            }
                            else if (-1 < (short)uStackX_18) {
                              if (!bVar43) goto LAB_141420e6e;
LAB_141420466:
                              if ((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                 && ((((short)uStack_94 < _DAT_14250a560 &&
                                      ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) &&
                                     ((_DAT_14250a528 != 0 &&
                                      (lVar25 = *(longlong *)
                                                 (*(longlong *)
                                                   (*(longlong *)
                                                     (_DAT_14250a528 +
                                                     ((longlong)(short)uStackX_18 >> 4) * 8) +
                                                   ((longlong)(short)uStack_94 >> 4) * 8) +
                                                 (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 99;
                              }
                            }
                          }
                          else {
                            if (!bVar38) goto LAB_14142064c;
                            if (-1 < (short)uStackX_18) {
                              if (!bVar42) goto LAB_141420d94;
LAB_141420561:
                              if (((((short)uStackX_18 < _DAT_14250a55c) && (-1 < (short)uStack_94))
                                  && (((short)uStack_94 < _DAT_14250a560 &&
                                      (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                                       (_DAT_14250a528 != 0)))))) &&
                                 (lVar25 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (_DAT_14250a528 +
                                                ((longlong)(short)uStackX_18 >> 4) * 8) +
                                              ((longlong)(short)uStack_94 >> 4) * 8) +
                                            (longlong)sStackX_20 * 8), lVar25 != 0)) {
                                uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                                if ((int)uVar30 < 0) {
                                  uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                                }
                                uVar31 = (int)(short)uStack_94 & 0x8000000f;
                                if ((int)uVar31 < 0) {
                                  uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                                }
                                *(undefined2 *)
                                 (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                           (longlong)(int)uVar31) * 2) = 100;
                              }
                            }
                          }
                        }
                        else {
                          if ((!bVar40) || (!bVar38)) goto LAB_14142064c;
LAB_1414213c7:
                          if ((((-1 < (short)uStackX_18) && ((short)uStackX_18 < _DAT_14250a55c)) &&
                              (((-1 < (short)uStack_94 &&
                                (((short)uStack_94 < _DAT_14250a560 && (-1 < sStackX_20)))) &&
                               (sStackX_20 < _DAT_14250a564)))) &&
                             ((_DAT_14250a528 != 0 &&
                              (lVar25 = *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (_DAT_14250a528 +
                                             ((longlong)(short)uStackX_18 >> 4) * 8) +
                                           ((longlong)(short)uStack_94 >> 4) * 8) +
                                         (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                            uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)(short)uStack_94 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined2 *)
                             (lVar25 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31)
                                       * 2) = 0xbe;
                          }
                        }
LAB_14141f99d:
                        if (-1 < (short)uStackX_18) goto LAB_14142174f;
                      }
                      uVar30 = (uint)(short)uStack_94;
                      uVar31 = (uint)(short)uStackX_18;
                      FUN_141455cf0(0x1423f3970,uStackX_18,uStack_94,sStackX_20);
                      lVar25 = (longlong)(short)uStackX_18 >> 4;
                      if ((short)uStackX_18 < 0) {
LAB_14142194f:
                        if (-1 < (short)uStackX_18) goto LAB_141421959;
                      }
                      else {
                        if (((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                            (((int)uVar30 < _DAT_14250a560 &&
                             (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                              (_DAT_14250a528 != 0)))))) &&
                           (lVar21 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8), lVar21 != 0)) {
                          uVar15 = uVar31 & 0x8000000f;
                          if ((int)uVar15 < 0) {
                            uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                          }
                          uVar16 = uVar30 & 0x8000000f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                          }
                          puVar2 = (uint *)(lVar21 + 0x6a0 +
                                           ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16) *
                                           4);
                          *puVar2 = *puVar2 & 0xfffffeff;
                        }
                        if (((_DAT_14250a55c <= (int)uVar31) || ((short)uStack_94 < 0)) ||
                           ((_DAT_14250a560 <= (int)uVar30 ||
                            ((sStackX_20 < 0 || (_DAT_14250a564 <= sStackX_20))))))
                        goto LAB_14142194f;
                        if (_DAT_14250a528 != 0) {
                          lVar21 = *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                      ((longlong)(short)uStack_94 >> 4) * 8) +
                                    (longlong)sStackX_20 * 8);
                          if (lVar21 != 0) {
                            uVar15 = uVar31 & 0x8000000f;
                            if ((int)uVar15 < 0) {
                              uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                            }
                            uVar16 = uVar30 & 0x8000000f;
                            if ((int)uVar16 < 0) {
                              uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                            }
                            puVar2 = (uint *)(lVar21 + 0x6a0 +
                                             ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16)
                                             * 4);
                            *puVar2 = *puVar2 & 0xfffffdff;
                          }
                          goto LAB_14142194f;
                        }
LAB_141421959:
                        if (((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                            ((int)uVar30 < _DAT_14250a560)) &&
                           ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) {
                          if (_DAT_14250a528 != 0) {
                            lVar21 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8);
                            if (lVar21 != 0) {
                              uVar15 = uVar31 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = uVar30 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffffbff;
                            }
                            goto LAB_1414219f0;
                          }
                        }
                        else {
LAB_1414219f0:
                          if ((short)uStackX_18 < 0) goto LAB_141421bd3;
                        }
                        if ((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                           (((int)uVar30 < _DAT_14250a560 &&
                            ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))))) {
                          if (_DAT_14250a528 != 0) {
                            lVar21 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8);
                            if (lVar21 != 0) {
                              uVar15 = uVar31 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = uVar30 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xfffff7ff;
                            }
                            goto LAB_141421a91;
                          }
                        }
                        else {
LAB_141421a91:
                          if ((short)uStackX_18 < 0) goto LAB_141421bd3;
                        }
                        if (((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                            ((int)uVar30 < _DAT_14250a560)) &&
                           ((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)))) {
                          if (_DAT_14250a528 != 0) {
                            lVar21 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8);
                            if (lVar21 != 0) {
                              uVar15 = uVar31 & 0x8000000f;
                              if ((int)uVar15 < 0) {
                                uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                              }
                              uVar16 = uVar30 & 0x8000000f;
                              if ((int)uVar16 < 0) {
                                uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar21 + 0x6a0 +
                                               ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xffffefff;
                            }
                            goto LAB_141421b32;
                          }
                        }
                        else {
LAB_141421b32:
                          if ((short)uStackX_18 < 0) goto LAB_141421bd3;
                        }
                        if ((((int)uVar31 < _DAT_14250a55c) && (-1 < (short)uStack_94)) &&
                           ((((int)uVar30 < _DAT_14250a560 &&
                             (((-1 < sStackX_20 && (sStackX_20 < _DAT_14250a564)) &&
                              (_DAT_14250a528 != 0)))) &&
                            (lVar25 = *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(_DAT_14250a528 + lVar25 * 8) +
                                         ((longlong)(short)uStack_94 >> 4) * 8) +
                                       (longlong)sStackX_20 * 8), lVar25 != 0)))) {
                          uVar15 = uVar31 & 0x8000000f;
                          if ((int)uVar15 < 0) {
                            uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                          }
                          uVar16 = uVar30 & 0x8000000f;
                          if ((int)uVar16 < 0) {
                            uVar16 = (uVar16 - 1 | 0xfffffff0) + 1;
                          }
                          puVar2 = (uint *)(lVar25 + 0x6a0 +
                                           ((longlong)(int)uVar15 * 0x10 + (longlong)(int)uVar16) *
                                           4);
                          *puVar2 = *puVar2 & 0xffffff7f;
                        }
                      }
LAB_141421bd3:
                      lVar25 = _DAT_14250a528;
                      cVar11 = FUN_140142fc0(0x1423f3970,uStackX_18,uStack_94,sStackX_20);
                      if (((('\0' < cVar11) && (-1 < (short)uStackX_18)) &&
                          (((int)uVar31 < _DAT_14250a55c &&
                           ((-1 < (short)uStack_94 && ((int)uVar30 < _DAT_14250a560)))))) &&
                         ((-1 < sStackX_20 &&
                          (((sStackX_20 < _DAT_14250a564 && (lVar25 != 0)) &&
                           (lVar25 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (lVar25 + ((longlong)(short)uStackX_18 >> 4) * 8) +
                                        ((longlong)(short)uStack_94 >> 4) * 8) +
                                      (longlong)sStackX_20 * 8), lVar25 != 0)))))) {
                        uVar30 = uVar30 & 0x8000000f;
                        if ((int)uVar30 < 0) {
                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                        }
                        uVar31 = uVar31 & 0x8000000f;
                        if ((int)uVar31 < 0) {
                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                        }
                        FUN_14054eab0(lVar25,uVar31 & 0xffff,uVar30 & 0xffff,0,0);
                      }
                      FUN_141475770(0x1423f3970,uStackX_18,uStack_94,sStackX_20);
                    }
LAB_141425663:
                    sStackX_20 = sStackX_20 + 1;
                    sStack_88 = sStack_88 + 1;
                    plVar19 = *(longlong **)(param_1 + 0x40);
                    lVar25 = _DAT_14250a528;
                  } while ((int)sStack_88 < (int)plVar19[5]);
                }
                sVar35 = 0;
                sVar12 = *(short *)(param_1 + 8);
                if (0 < (int)plVar19[8]) {
                  do {
                    sVar12 = sVar12 + -1;
                    bVar26 = *(byte *)((longlong)
                                       ((int)sStack_98 * *(int *)((longlong)plVar19 + 0x2c) +
                                       (int)sStack_96) +
                                      *(longlong *)(plVar19[7] + (longlong)sVar35 * 8));
                    if ((((bVar26 != 0x80) && ((bVar26 & 1) != 0)) && (-1 < (short)uStackX_18)) &&
                       (((((short)uStackX_18 < _DAT_14250a55c && (-1 < (short)uStack_94)) &&
                         (((short)uStack_94 < _DAT_14250a560 &&
                          ((-1 < sVar12 && (sVar12 < _DAT_14250a564)))))) &&
                        ((lVar25 != 0 &&
                         (lVar21 = *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        (lVar25 + ((longlong)(short)uStackX_18 >> 4) * 8) +
                                      ((longlong)(short)uStack_94 >> 4) * 8) + (longlong)sVar12 * 8)
                         , lVar21 != 0)))))) {
                      uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                      if ((int)uVar30 < 0) {
                        uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                      }
                      uVar31 = (int)(short)uStack_94 & 0x8000000f;
                      if ((int)uVar31 < 0) {
                        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                      }
                      if ((((*(short *)(lVar21 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                 (longlong)(int)uVar31) * 2) == 0x105) &&
                           ((short)uStackX_18 < _DAT_14250a55c)) &&
                          ((short)uStack_94 < _DAT_14250a560)) &&
                         ((sVar12 < _DAT_14250a564 && (lVar25 != 0)))) {
                        uVar30 = (int)(short)uStackX_18 & 0x8000000f;
                        if ((int)uVar30 < 0) {
                          uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                        }
                        uVar31 = (int)(short)uStack_94 & 0x8000000f;
                        if ((int)uVar31 < 0) {
                          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                        }
                        *(undefined2 *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(lVar25 + ((longlong)(short)uStackX_18 >> 4) * 8) +
                             ((longlong)(short)uStack_94 >> 4) * 8) + (longlong)sVar12 * 8) +
                         (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31) * 2) = 0x5c;
                        lVar25 = _DAT_14250a528;
                      }
                    }
                    plVar19 = *(longlong **)(param_1 + 0x40);
                    sVar35 = sVar35 + 1;
                  } while ((int)sVar35 < (int)plVar19[8]);
                }
              }
              sStack_98 = sStack_98 + 1;
              uStack_94 = uStack_94 + 1;
            } while ((int)sStack_98 < (int)plVar19[6]);
          }
        }
        sStack_96 = sStack_96 + 1;
        uStackX_18 = uStackX_18 + 1;
      } while ((int)sStack_96 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x2c));
    }
  }
  return;
}

