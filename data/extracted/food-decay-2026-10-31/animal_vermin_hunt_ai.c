/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140a3a2e0..140a3bda0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void animal_vermin_hunt_ai(longlong param_1,undefined4 *param_2,ushort *param_3,int param_4)

{
  ulonglong *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  short *psVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  longlong lVar28;
  short *psVar29;
  ulonglong *puVar30;
  uint uVar31;
  ushort *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  short sVar36;
  float fVar37;
  ushort *puStackX_18;
  int aiStackX_20 [2];
  uint in_stack_ffffffffffffff60;
  uint in_stack_ffffffffffffff70;
  ulonglong uStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong *puStack_48;
  longlong lStack_40;
  
  if (0x27 < (int)param_2[1]) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd80) != 0) {
    return;
  }
  puStackX_18 = param_3;
  aiStackX_20[0] = param_4;
  uVar11 = FUN_140eb68b0();
  aiStackX_20[0] = -1;
  if ((uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x28f5c29)
     && (lVar34 = *(longlong *)(param_1 + 0x5f8), (*(uint *)(lVar34 + 0xe0) >> 1 & 1) != 0)) {
    plStack_68 = (longlong *)0x0;
    plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,0xffffffff);
    lStack_70 = CONCAT44(lStack_70._4_4_,2);
    plVar3 = *(longlong **)(lVar34 + 0x38);
    for (plVar16 = *(longlong **)(lVar34 + 0x30); plVar16 < plVar3; plVar16 = plVar16 + 1) {
      if ((*(int *)*plVar16 == 2) &&
         (iVar12 = FUN_1413dec20(param_1,(int *)*plVar16 + 2,&lStack_70), iVar12 == 1)) {
        lVar34 = *plVar16;
        if (lVar34 != 0) {
          *param_2 = 0x4d;
          param_2[1] = 0x28;
          *(longlong *)(param_2 + 0x16) = lVar34;
          return;
        }
        break;
      }
    }
  }
  sVar27 = *(short *)(param_1 + 300);
  sVar36 = *(short *)(param_1 + 0xa4);
  lVar34 = _DAT_1424eca70;
  if ((((-1 < sVar36) &&
       ((ulonglong)(longlong)sVar36 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) &&
      (-1 < sVar27)) &&
     (lVar28 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar36 * 8),
     lVar4 = *(longlong *)(lVar28 + 0x178),
     (ulonglong)(longlong)sVar27 < (ulonglong)(*(longlong *)(lVar28 + 0x180) - lVar4 >> 3))) {
    lVar28 = *(longlong *)(lVar4 + (longlong)sVar27 * 8);
    if ((*(int *)(lVar28 + 0x6b0) < 0x15) ||
       ((*(byte *)(*(longlong *)(lVar28 + 0x6a8) + 0x14) & 0x20) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    lStack_58 = lVar28;
    if ((bVar7) && (lVar28 != 0)) {
      uVar11 = (int)((longlong)_DAT_1423d1588 - (longlong)_DAT_1423d1580 >> 3) - 1;
      uStack_50 = (ulonglong)uVar11;
      if (-1 < (int)uVar11) {
        puStack_48 = _DAT_1423d1580 + (int)uVar11;
        do {
          iVar12 = (int)uStack_50;
          puVar32 = (ushort *)*puStack_48;
          if (((((char)puVar32[5] != '\0') && (puVar32[2] == *(ushort *)(param_1 + 0xa8))) &&
              (puVar32[3] == *(ushort *)(param_1 + 0xaa))) &&
             (puVar32[4] == *(ushort *)(param_1 + 0xac))) {
            uVar2 = *puVar32;
            uVar23 = (ulonglong)(short)uVar2;
            if (((short)uVar2 < 0) || ((ulonglong)(lVar34 - _DAT_1424eca68 >> 3) <= uVar23)) {
              if ((-1 < (short)uVar2) && (uVar23 < (ulonglong)(lVar34 - _DAT_1424eca68 >> 3)))
              goto LAB_140a3a55c;
            }
            else {
              lVar4 = *(longlong *)(_DAT_1424eca68 + uVar23 * 8);
              if ((*(int *)(lVar4 + 0x1b0) < 1) || (-1 < **(char **)(lVar4 + 0x1a8))) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (!bVar7) {
LAB_140a3a55c:
                plVar16 = *(longlong **)(_DAT_1424eca68 + uVar23 * 8);
                if (plVar16 != (longlong *)0x0) {
                  uVar2 = puVar32[1];
                  if (((((ulonglong)*puVar32 < (ulonglong)(lVar34 - _DAT_1424eca68 >> 3)) &&
                       (-1 < (short)uVar2)) &&
                      (lVar4 = *(longlong *)(_DAT_1424eca68 + (ulonglong)*puVar32 * 8),
                      lVar5 = *(longlong *)(lVar4 + 0x178),
                      (ulonglong)(longlong)(short)uVar2 <
                      (ulonglong)(*(longlong *)(lVar4 + 0x180) - lVar5 >> 3))) &&
                     (plVar3 = *(longlong **)(lVar5 + (longlong)(short)uVar2 * 8),
                     plVar3 != (longlong *)0x0)) {
                    lVar34 = *(longlong *)(lVar28 + 0x3ef8);
                    iVar13 = (int)(*(longlong *)(lVar28 + 0x3f00) - lVar34 >> 3) + -1;
                    lVar28 = (longlong)iVar13;
                    if (-1 < iVar13) {
                      do {
                        cVar8 = FUN_1406b8af0(plVar3 + 0x7d6,*(undefined8 *)(lVar34 + lVar28 * 8));
                        if (cVar8 != '\0') goto LAB_140a3a79e;
                        lVar28 = lVar28 + -1;
                      } while (-1 < lVar28);
                      iVar12 = (int)uStack_50;
                    }
                    lStack_40 = *(longlong *)(lStack_58 + 0x3f10);
                    iVar13 = (int)(*(longlong *)(lStack_58 + 0x3f18) - lStack_40 >> 3) + -1;
                    lVar28 = lStack_58;
                    lVar34 = _DAT_1424eca70;
                    if (-1 < iVar13) {
                      uVar23 = plVar16[3];
                      lVar34 = (longlong)iVar13;
                      puVar32 = (ushort *)plVar16[2];
                      puStackX_18 = puVar32;
                      uStack_78 = uVar23;
                      do {
                        plVar20 = *(longlong **)(lStack_40 + lVar34 * 8);
                        puVar1 = (ulonglong *)(plVar20 + 2);
                        if (0xf < (ulonglong)plVar20[3]) {
                          plVar20 = (longlong *)*plVar20;
                        }
                        plVar19 = plVar16;
                        if (0xf < uVar23) {
                          plVar19 = (longlong *)*plVar16;
                        }
                        if ((puVar32 == (ushort *)*puVar1) &&
                           (iVar12 = func_0x00014153ae14(plVar19,plVar20), puVar32 = puStackX_18,
                           uVar23 = uStack_78, iVar12 == 0)) {
                          psVar29 = *(short **)(*(longlong *)(lVar28 + 0x3f28) + lVar34 * 8);
                          lVar4 = *(longlong *)(psVar29 + 8);
                          uVar23 = *(ulonglong *)(psVar29 + 0xc);
                          psVar24 = psVar29;
                          if (0xf < uVar23) {
                            psVar24 = *(short **)psVar29;
                          }
                          plVar20 = plVar3;
                          if (0xf < (ulonglong)plVar3[3]) {
                            plVar20 = (longlong *)*plVar3;
                          }
                          if ((plVar3[2] == lVar4) &&
                             (iVar12 = func_0x00014153ae14(plVar20,psVar24), iVar12 == 0)) {
LAB_140a3a79e:
                            *param_2 = 0x4e;
                            param_2[1] = 0x28;
                            param_2[0xe] = (int)uStack_50;
                            return;
                          }
                          if (0xf < uVar23) {
                            psVar29 = *(short **)psVar29;
                          }
                          lVar28 = lStack_58;
                          puVar32 = puStackX_18;
                          uVar23 = uStack_78;
                          if (((lVar4 == 3) && (*psVar29 == 0x4c41)) && ((char)psVar29[1] == 'L'))
                          goto LAB_140a3a79e;
                        }
                        lVar34 = lVar34 + -1;
                      } while (-1 < lVar34);
                      iVar12 = (int)uStack_50;
                      lVar34 = _DAT_1424eca70;
                    }
                  }
                }
              }
            }
          }
          uStack_50 = (ulonglong)(iVar12 - 1U);
          puStack_48 = puStack_48 + -1;
        } while (-1 < (int)(iVar12 - 1U));
      }
    }
  }
  uVar23 = 0;
  sVar27 = *(short *)(param_1 + 300);
  sVar36 = *(short *)(param_1 + 0xa4);
  if (((-1 < sVar36) && ((ulonglong)(longlong)sVar36 < (ulonglong)(lVar34 - _DAT_1424eca68 >> 3)))
     && ((-1 < sVar27 &&
         (lVar34 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar36 * 8),
         lVar28 = *(longlong *)(lVar34 + 0x178),
         (ulonglong)(longlong)sVar27 < (ulonglong)(*(longlong *)(lVar34 + 0x180) - lVar28 >> 3)))))
  {
    lVar34 = *(longlong *)(lVar28 + (longlong)sVar27 * 8);
    bVar7 = true;
    if ((*(int *)(lVar34 + 0x6b0) < 0x15) ||
       ((*(byte *)(*(longlong *)(lVar34 + 0x6a8) + 0x14) & 0x10) == 0)) {
      bVar7 = false;
    }
    if ((bVar7) && (cVar8 = FUN_1407e0610(param_1), cVar8 != '\0')) {
      iVar12 = *(int *)(param_1 + 0x3bc);
      uVar35 = uVar23;
      if ((iVar12 != -1) &&
         ((iVar13 = (int)(_DAT_1423e50b8 - _DAT_1423e50b0 >> 3), iVar13 != 0 &&
          (iVar13 = iVar13 + -1, uVar33 = uVar23, -1 < iVar13)))) {
        do {
          iVar21 = (int)uVar33 + iVar13 >> 1;
          uVar35 = *(ulonglong *)(_DAT_1423e50b0 + (longlong)iVar21 * 8);
          iVar18 = *(int *)(uVar35 + 0x130);
          if (iVar18 == iVar12) break;
          iVar14 = iVar21 + -1;
          if (iVar18 < iVar12) {
            uVar33 = (ulonglong)(iVar21 + 1);
            iVar14 = iVar13;
          }
          uVar35 = uVar23;
          iVar13 = iVar14;
        } while ((int)uVar33 <= iVar14);
      }
      for (plVar16 = *(longlong **)(param_1 + 0x408); plVar16 < *(longlong **)(param_1 + 0x410);
          plVar16 = plVar16 + 1) {
        if ((short)((longlong *)*plVar16)[1] == 0) {
          if (*(longlong *)*plVar16 != 0) {
            sVar27 = *(short *)(param_1 + 300);
            sVar36 = *(short *)(param_1 + 0xa4);
            if ((((sVar36 < 0) ||
                 ((ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) <= (ulonglong)(longlong)sVar36))
                || (sVar27 < 0)) ||
               (lVar34 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar36 * 8),
               lVar28 = *(longlong *)(lVar34 + 0x178),
               (ulonglong)(*(longlong *)(lVar34 + 0x180) - lVar28 >> 3) <=
               (ulonglong)(longlong)sVar27)) goto LAB_140a3a9ef;
            lVar34 = *(longlong *)(lVar28 + (longlong)sVar27 * 8);
            if ((*(int *)(lVar34 + 0x6b0) < 0x14) ||
               ((*(byte *)(*(longlong *)(lVar34 + 0x6a8) + 0x13) & 2) == 0)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_140a3a9ef;
            bVar7 = false;
            if (uVar35 != 0) {
              *(ulonglong *)(param_1 + 0x3b0) = uVar35;
              *(undefined4 *)(param_1 + 0xbc) = 2;
              *(undefined2 *)(param_1 + 0x3b8) = 0;
              iVar13 = (int)(short)(*(short *)(uVar35 + 0xa8) - *(short *)(param_1 + 0xa8));
              iVar12 = (int)(short)(*(short *)(uVar35 + 0xaa) - *(short *)(param_1 + 0xaa));
              fVar37 = (float)(iVar12 * iVar12 + iVar13 * iVar13);
              if (fVar37 < 0.0) {
                fVar37 = (float)func_0x00014153ae80(fVar37);
              }
              else {
                fVar37 = SQRT(fVar37);
              }
              if (((short)(int)fVar37 < 2) &&
                 (bVar7 = false, *(short *)(uVar35 + 0xac) == *(short *)(param_1 + 0xac))) {
                bVar7 = true;
              }
              if (!bVar7) goto LAB_140a3a9ef;
            }
            plVar16 = *(longlong **)(param_1 + 0x408);
            goto LAB_140a3a9b0;
          }
          break;
        }
      }
      iVar12 = (int)((longlong)_DAT_1423d1588 - (longlong)_DAT_1423d1580 >> 3) + -1;
      if (-1 < iVar12) {
        lVar34 = (longlong)iVar12;
        do {
          uVar23 = _DAT_1423d1580[lVar34];
          if ((((*(char *)(uVar23 + 10) != '\0') &&
               (*(short *)(uVar23 + 4) == *(short *)(param_1 + 0xa8))) &&
              (*(short *)(uVar23 + 6) == *(short *)(param_1 + 0xaa))) &&
             ((*(short *)(uVar23 + 8) == *(short *)(param_1 + 0xac) &&
              (cVar8 = vermin_hunt_eligible(), cVar8 != '\0')))) {
            *param_2 = 0x4f;
            param_2[1] = 0x28;
            param_2[0xe] = iVar12;
            *(ulonglong *)(param_2 + 2) = uVar35;
            return;
          }
          iVar12 = iVar12 + -1;
          lVar34 = lVar34 + -1;
        } while (-1 < lVar34);
      }
      goto LAB_140a3a9ef;
    }
  }
LAB_140a3b4d1:
  puVar1 = _DAT_1423d1588;
  sVar27 = *(short *)(param_1 + 300);
  sVar36 = *(short *)(param_1 + 0xa4);
  if (((-1 < sVar36) &&
      ((ulonglong)(longlong)sVar36 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) &&
     ((-1 < sVar27 &&
      (lVar34 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar36 * 8),
      lVar28 = *(longlong *)(lVar34 + 0x178),
      (ulonglong)(longlong)sVar27 < (ulonglong)(*(longlong *)(lVar34 + 0x180) - lVar28 >> 3))))) {
    lVar34 = *(longlong *)(lVar28 + (longlong)sVar27 * 8);
    if ((*(int *)(lVar34 + 0x6b0) < 0x14) ||
       ((*(byte *)(*(longlong *)(lVar34 + 0x6a8) + 0x13) & 4) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      iVar12 = *(int *)(param_1 + 0x3bc);
      if ((iVar12 != -1) && (iVar13 = (int)(_DAT_1423e50b8 - _DAT_1423e50b0 >> 3), iVar13 != 0)) {
        iVar18 = 0;
        iVar13 = iVar13 + -1;
        if (-1 < iVar13) {
          do {
            iVar21 = iVar18 + iVar13 >> 1;
            lVar34 = *(longlong *)(_DAT_1423e50b0 + (longlong)iVar21 * 8);
            if (*(int *)(lVar34 + 0x130) == iVar12) goto LAB_140a3b5cb;
            iVar14 = iVar21 + -1;
            if (*(int *)(lVar34 + 0x130) < iVar12) {
              iVar14 = iVar13;
              iVar18 = iVar21 + 1;
            }
            iVar13 = iVar14;
          } while (iVar18 <= iVar14);
        }
      }
      lVar34 = 0;
LAB_140a3b5cb:
      uVar23 = 0;
      for (plVar16 = *(longlong **)(param_1 + 0x408); puVar30 = _DAT_1423d1580, uVar35 = uVar23,
          plVar16 < *(longlong **)(param_1 + 0x410); plVar16 = plVar16 + 1) {
        if ((short)((longlong *)*plVar16)[1] == 0) {
          if (*(longlong *)*plVar16 != 0) {
            sVar27 = *(short *)(param_1 + 300);
            sVar36 = *(short *)(param_1 + 0xa4);
            if ((((sVar36 < 0) ||
                 ((ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) <= (ulonglong)(longlong)sVar36))
                || (sVar27 < 0)) ||
               (lVar28 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar36 * 8),
               lVar4 = *(longlong *)(lVar28 + 0x178),
               (ulonglong)(*(longlong *)(lVar28 + 0x180) - lVar4 >> 3) <=
               (ulonglong)(longlong)sVar27)) goto LAB_140a3b752;
            lVar28 = *(longlong *)(lVar4 + (longlong)sVar27 * 8);
            if ((*(int *)(lVar28 + 0x6b0) < 0x14) ||
               ((*(byte *)(*(longlong *)(lVar28 + 0x6a8) + 0x13) & 2) == 0)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_140a3b752;
            if (lVar34 != 0) {
              *(longlong *)(param_1 + 0x3b0) = lVar34;
              *(undefined4 *)(param_1 + 0xbc) = 2;
              *(undefined2 *)(param_1 + 0x3b8) = 0;
              iVar13 = (int)(short)(*(short *)(lVar34 + 0xa8) - *(short *)(param_1 + 0xa8));
              iVar12 = (int)(short)(*(short *)(lVar34 + 0xaa) - *(short *)(param_1 + 0xaa));
              fVar37 = (float)(iVar12 * iVar12 + iVar13 * iVar13);
              if (fVar37 < 0.0) {
                fVar37 = (float)func_0x00014153ae80(fVar37);
              }
              else {
                fVar37 = SQRT(fVar37);
              }
              bVar7 = false;
              if ((short)(int)fVar37 < 2) {
                bVar7 = false;
                if (*(short *)(lVar34 + 0xac) == *(short *)(param_1 + 0xac)) {
                  bVar7 = true;
                }
              }
              if (!bVar7) goto LAB_140a3b752;
            }
            plVar16 = *(longlong **)(param_1 + 0x408);
            goto LAB_140a3b722;
          }
          break;
        }
      }
      for (; puVar30 < puVar1; puVar30 = puVar30 + 1) {
        uVar33 = *puVar30;
        if ((((*(char *)(uVar33 + 10) != '\0') &&
             (*(short *)(uVar33 + 4) == *(short *)(param_1 + 0xa8))) &&
            (*(short *)(uVar33 + 6) == *(short *)(param_1 + 0xaa))) &&
           ((*(short *)(uVar33 + 8) == *(short *)(param_1 + 0xac) &&
            (cVar8 = vermin_hunt_eligible(), cVar8 != '\0')))) {
          *param_2 = 0x4f;
          param_2[1] = 0x28;
          param_2[0xe] = (int)uVar35;
          *(longlong *)(param_2 + 2) = lVar34;
          return;
        }
        uVar35 = (ulonglong)((int)uVar35 + 1);
      }
LAB_140a3b752:
      puVar1 = _DAT_1423d1588;
      for (plVar16 = *(longlong **)(param_1 + 0x408); plVar16 < *(longlong **)(param_1 + 0x410);
          plVar16 = plVar16 + 1) {
        if ((short)((longlong *)*plVar16)[1] == 0) {
          if (*(longlong *)*plVar16 != 0) {
            return;
          }
          break;
        }
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,7);
      for (puVar30 = _DAT_1423d1580; puVar30 < puVar1; puVar30 = puVar30 + 1) {
        uVar35 = *puVar30;
        puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(short *)(uVar35 + 4));
        iVar13 = (int)(short)(*(short *)(param_1 + 0xa8) - *(short *)(uVar35 + 4));
        aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(short *)(uVar35 + 6));
        iVar12 = (int)(short)(*(short *)(param_1 + 0xaa) - *(short *)(uVar35 + 6));
        sVar27 = *(short *)(uVar35 + 8);
        fVar37 = (float)(iVar12 * iVar12 + iVar13 * iVar13);
        if (fVar37 < 0.0) {
          fVar37 = (float)func_0x00014153ae80(fVar37);
        }
        else {
          fVar37 = SQRT(fVar37);
        }
        sVar26 = *(short *)(param_1 + 0xac) - sVar27;
        iVar12 = -(int)sVar26;
        sVar36 = (short)iVar12;
        if (iVar12 < 0) {
          sVar36 = sVar26;
        }
        sVar36 = (short)(int)fVar37 + sVar36;
        if ((sVar36 < (short)uStack_78) && (cVar8 = vermin_hunt_eligible(uVar35), cVar8 != '\0')) {
          cVar8 = FUN_141367790(param_1,(ulonglong)puStackX_18 & 0xffff,(short)aiStackX_20[0],sVar27
                               );
          if (cVar8 == '\0') {
            uVar15 = FUN_141348060(param_1,0,0);
            cVar8 = FUN_1414adea0(0x1423d14f0,(ulonglong)puStackX_18 & 0xffff,(short)aiStackX_20[0],
                                  sVar27,1,uVar15);
            if ((cVar8 != '\0') &&
               (cVar8 = FUN_1413a4910(param_1,*(undefined2 *)(uVar35 + 4),
                                      *(undefined2 *)(uVar35 + 6),*(undefined2 *)(uVar35 + 8),1),
               cVar8 != '\0')) {
              uStack_78 = CONCAT44(uStack_78._4_4_,
                                   CONCAT22((short)((uint)(int)fVar37 >> 0x10),sVar36));
              uVar23 = uVar35;
            }
          }
        }
      }
      if (uVar23 != 0) {
        if (((*(short *)(param_1 + 0xc0) == *(short *)(uVar23 + 4)) &&
            (*(short *)(param_1 + 0xc2) == *(short *)(uVar23 + 6))) &&
           (*(short *)(param_1 + 0xc4) == *(short *)(uVar23 + 8))) {
          return;
        }
        *param_2 = 0x51;
        param_2[1] = 0x28;
        *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(uVar23 + 4);
        *(undefined2 *)((longlong)param_2 + 0x32) = *(undefined2 *)(uVar23 + 6);
        *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(uVar23 + 8);
        return;
      }
      iVar13 = (int)(short)(*(short *)(param_1 + 0xa8) - *(short *)(param_1 + 0xae));
      iVar12 = (int)(short)(*(short *)(param_1 + 0xaa) - *(short *)(param_1 + 0xb0));
      fVar37 = (float)(iVar12 * iVar12 + iVar13 * iVar13);
      if (fVar37 < 0.0) {
        fVar37 = (float)func_0x00014153ae80(fVar37);
      }
      else {
        fVar37 = SQRT(fVar37);
      }
      uVar11 = FUN_140eb68b0();
      if (0x2bb0cf <
          uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
        if (2 < (short)(int)fVar37) {
          return;
        }
        uVar11 = FUN_140eb68b0();
        if (0xa3d70a <
            uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          return;
        }
        if (*(longlong *)(param_1 + 0x3b0) != 0) {
          return;
        }
        if (*(short *)(param_1 + 0xac) != *(short *)(param_1 + 0xb2)) {
          return;
        }
      }
      plVar3 = _DAT_1423e5770;
      lStack_70 = 0;
      plStack_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      plVar16 = (longlong *)0x0;
      plVar20 = _DAT_1423e5768;
      while (lVar34 = lStack_70, plVar20 < plVar3) {
        lVar34 = *plVar20;
        lStack_40 = lVar34;
        if ((*(uint *)(lVar34 + 0x10) & 0x480c11) == 1) {
          aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,0x8ad0);
          if ((*(uint *)(lVar34 + 0x10) & 0x10) == 0) {
            if ((*(uint *)(lVar34 + 0x10) & 8) == 0) {
              aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 8));
              puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 10));
              uVar10 = *(undefined2 *)(lVar34 + 0xc);
LAB_140a3bba8:
              uStack_78 = CONCAT62(uStack_78._2_6_,uVar10);
            }
            else {
              puVar6 = *(undefined8 **)(lVar34 + 0x40);
              for (puVar17 = *(undefined8 **)(lVar34 + 0x38); puVar17 < puVar6;
                  puVar17 = puVar17 + 1) {
                iVar12 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
                if (iVar12 == 0xb) {
                  lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
                  if (lVar28 != 0) {
                    FUN_140c8baa0(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                    goto LAB_140a3bbac;
                  }
                }
                else if ((iVar12 == 0x12) &&
                        (lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x20))(), lVar28 != 0)) {
                  FUN_141367430(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                  goto LAB_140a3bbac;
                }
              }
              for (puVar17 = *(undefined8 **)(lVar34 + 0x20);
                  puVar17 < *(undefined8 **)(lVar34 + 0x28); puVar17 = puVar17 + 1) {
                if (*(int *)*puVar17 == 7) {
                  lVar28 = *(longlong *)((int *)*puVar17 + 2);
                  aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar28 + 4));
                  puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar28 + 6));
                  uVar10 = *(undefined2 *)(lVar28 + 8);
                  goto LAB_140a3bba8;
                }
              }
            }
          }
LAB_140a3bbac:
          plVar19 = plStack_60;
          cVar8 = FUN_1413a4910(param_1,(short)aiStackX_20[0],(ulonglong)puStackX_18 & 0xffff,
                                uStack_78 & 0xffff,1);
          if (cVar8 == '\0') goto LAB_140a3bbfd;
          if (plVar16 == plVar19) {
            FUN_1400bad30(&lStack_70,plVar16,&lStack_40);
            plVar16 = plStack_68;
            goto LAB_140a3bbfd;
          }
          *plVar16 = lVar34;
          plVar16 = plVar16 + 1;
          plVar20 = plVar20 + 1;
          plStack_68 = plVar16;
        }
        else {
LAB_140a3bbfd:
          plVar20 = plVar20 + 1;
        }
      }
      uVar23 = (longlong)plVar16 - lStack_70 >> 3;
      if (uVar23 != 0) {
        uVar11 = 0;
        *(undefined8 *)(param_1 + 0x3b0) = 0;
        if (1 < (uint)uVar23) {
          uVar11 = FUN_140eb68b0();
          uVar11 = (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff
                   ) / ((int)(0x7fffffff / (uVar23 & 0xffffffff)) + 1U);
        }
        lVar34 = *(longlong *)(lVar34 + (longlong)(int)uVar11 * 8);
        aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,0x8ad0);
        if ((*(uint *)(lVar34 + 0x10) & 0x10) == 0) {
          if ((*(uint *)(lVar34 + 0x10) & 8) == 0) {
            aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 8));
            puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 10));
            uVar10 = *(undefined2 *)(lVar34 + 0xc);
LAB_140a3bd41:
            uStack_78 = CONCAT62(uStack_78._2_6_,uVar10);
          }
          else {
            puVar6 = *(undefined8 **)(lVar34 + 0x40);
            for (puVar17 = *(undefined8 **)(lVar34 + 0x38); puVar17 < puVar6; puVar17 = puVar17 + 1)
            {
              iVar12 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
              if (iVar12 == 0xb) {
                lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
                if (lVar28 != 0) {
                  FUN_140c8baa0(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                  goto LAB_140a3bd45;
                }
              }
              else if ((iVar12 == 0x12) &&
                      (lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x20))(), lVar28 != 0)) {
                FUN_141367430(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                goto LAB_140a3bd45;
              }
            }
            for (puVar17 = *(undefined8 **)(lVar34 + 0x20);
                puVar17 < *(undefined8 **)(lVar34 + 0x28); puVar17 = puVar17 + 1) {
              if (*(int *)*puVar17 == 7) {
                lVar34 = *(longlong *)((int *)*puVar17 + 2);
                aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 4));
                puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 6));
                uVar10 = *(undefined2 *)(lVar34 + 8);
                goto LAB_140a3bd41;
              }
            }
          }
        }
LAB_140a3bd45:
        *param_2 = 0x3c;
        param_2[1] = 0x28;
        *(short *)(param_2 + 0xc) = (short)aiStackX_20[0];
        *(short *)((longlong)param_2 + 0x32) = (short)puStackX_18;
        *(short *)(param_2 + 0xd) = (short)uStack_78;
        param_2[0xe] = 0x15;
        param_2[0xf] = 3;
      }
LAB_140a3bd7c:
      FUN_140066b70(&lStack_70);
      return;
    }
  }
  return;
LAB_140a3a9b0:
  if (*(longlong **)(param_1 + 0x410) <= plVar16) goto LAB_140a3a9cd;
  if ((short)((ulonglong *)*plVar16)[1] == 0) {
    uVar23 = *(ulonglong *)*plVar16;
    goto LAB_140a3a9cd;
  }
  plVar16 = plVar16 + 1;
  goto LAB_140a3a9b0;
LAB_140a3a9cd:
  FUN_141329bf0(param_1,uVar23,1,0,1);
LAB_140a3a9ef:
  for (plVar16 = *(longlong **)(param_1 + 0x408); plVar16 < *(longlong **)(param_1 + 0x410);
      plVar16 = plVar16 + 1) {
    if ((short)((longlong *)*plVar16)[1] == 0) {
      if (*(longlong *)*plVar16 != 0) goto LAB_140a3b4d1;
      break;
    }
  }
  sVar27 = 0x23;
  uVar35 = 0;
  uVar23 = uVar35;
  if ((longlong)_DAT_1423d1588 - (longlong)_DAT_1423d1580 >> 3 != 0) {
    do {
      lVar34 = *(longlong *)(uVar35 + (longlong)_DAT_1423d1580);
      cVar8 = vermin_hunt_eligible(lVar34);
      if ((cVar8 != '\0') &&
         (cVar8 = FUN_141366860(param_1,*(undefined2 *)(lVar34 + 4),*(undefined2 *)(lVar34 + 6),
                                *(undefined2 *)(lVar34 + 8),0), cVar8 != '\0')) {
        lVar34 = *(longlong *)(uVar35 + (longlong)_DAT_1423d1580);
        cVar8 = FUN_1413a4910(param_1,*(undefined2 *)(lVar34 + 4),*(undefined2 *)(lVar34 + 6),
                              *(undefined2 *)(lVar34 + 8),1);
        lVar34 = *(longlong *)(uVar35 + (longlong)_DAT_1423d1580);
        if (cVar8 == '\0') {
          sVar36 = *(short *)(lVar34 + 4);
          sVar26 = *(short *)(lVar34 + 6);
          sVar25 = *(short *)(lVar34 + 8);
          if (((sVar36 == *(short *)(param_1 + 0xa8)) && (sVar26 == *(short *)(param_1 + 0xaa))) &&
             (sVar25 < *(short *)(param_1 + 0xac))) {
            cVar8 = FUN_141366860(param_1,sVar36,sVar26,sVar25,0);
            while (cVar8 != '\0') {
              sVar25 = sVar25 + 1;
              in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffff00;
              in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffff00;
              cVar8 = FUN_141447200(0x1423d14f0,sVar36,sVar26,sVar25,1,in_stack_ffffffffffffff60,0,
                                    in_stack_ffffffffffffff70,0);
              if (cVar8 == '\0') break;
              sVar9 = sVar27;
              if (sVar25 == *(short *)(param_1 + 0xac)) goto LAB_140a3af1c;
              cVar8 = FUN_141366860(param_1,sVar36,sVar26,sVar25,0);
            }
          }
        }
        else {
          iVar13 = (int)(short)(*(short *)(param_1 + 0xac) - *(short *)(lVar34 + 8));
          iVar12 = -iVar13;
          if (iVar12 < 0) {
            iVar12 = iVar13;
          }
          iVar18 = (int)(short)(*(short *)(param_1 + 0xa8) - *(short *)(lVar34 + 4));
          iVar13 = (int)(short)(*(short *)(param_1 + 0xaa) - *(short *)(lVar34 + 6));
          fVar37 = (float)(iVar13 * iVar13 + iVar18 * iVar18);
          if (fVar37 < 0.0) {
            fVar37 = (float)func_0x00014153ae80(fVar37);
          }
          else {
            fVar37 = SQRT(fVar37);
          }
          sVar9 = (short)(int)fVar37 + (short)iVar12;
          if (sVar9 < sVar27) {
LAB_140a3af1c:
            sVar27 = sVar9;
            aiStackX_20[0] = (int)uVar23;
          }
        }
      }
      uVar11 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar11;
      uVar35 = uVar35 + 8;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)((longlong)_DAT_1423d1588 - (longlong)_DAT_1423d1580 >> 3));
    if (aiStackX_20[0] != -1) {
      uVar23 = _DAT_1423d1580[aiStackX_20[0]];
      sVar27 = *(short *)(uVar23 + 4);
      sVar36 = *(short *)(uVar23 + 6);
      sVar26 = *(short *)(uVar23 + 8);
      if (((sVar27 == *(short *)(param_1 + 0xa8)) && (sVar36 == *(short *)(param_1 + 0xaa))) &&
         (sVar26 < *(short *)(param_1 + 0xac))) {
        cVar8 = FUN_141366860(param_1,sVar27,sVar36,sVar26,0);
        while (cVar8 != '\0') {
          sVar25 = sVar26 + 1;
          in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 & 0xffffff00;
          in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffff00;
          cVar8 = FUN_141447200(0x1423d14f0,sVar27,sVar36,sVar25,1,in_stack_ffffffffffffff60,0,
                                in_stack_ffffffffffffff70,0);
          if (cVar8 == '\0') break;
          if (sVar25 == *(short *)(param_1 + 0xac)) {
            *param_2 = 0x50;
            goto LAB_140a3af32;
          }
          cVar8 = FUN_141366860(param_1,sVar27,sVar36,sVar25,0);
          sVar26 = sVar25;
        }
      }
      cVar8 = FUN_141366860(param_1,sVar27,sVar36,sVar26,0);
      if (cVar8 != '\0') {
        cVar8 = func_0x00014138ed20(param_1);
        if (cVar8 == '\0') {
          iVar12 = 0xf;
          sVar25 = sVar26;
          while( true ) {
            sVar25 = sVar25 + 1;
            cVar8 = FUN_141367790(param_1,sVar27,sVar36,sVar25);
            if (cVar8 != '\0') break;
            uVar11 = FUN_141348060(param_1,0,0);
            cVar8 = FUN_1414adea0(0x1423d14f0,sVar27,sVar36,sVar25,1,uVar11);
            if (((cVar8 == '\0') || (sVar27 < 0)) ||
               ((_DAT_1424e80dc <= sVar27 ||
                ((((sVar36 < 0 || (_DAT_1424e80e0 <= sVar36)) || (sVar25 < 0)) ||
                 (_DAT_1424e80e4 <= sVar26 + 1)))))) break;
            if ((_DAT_1424e80a8 == 0) ||
               (lVar34 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(_DAT_1424e80a8 + (longlong)(sVar27 >> 4) * 8) +
                            (longlong)(sVar36 >> 4) * 8) + 8 + (longlong)sVar26 * 8), lVar34 == 0))
            break;
            uVar31 = (int)sVar36 & 0x8000000f;
            if ((int)uVar31 < 0) {
              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
            }
            uVar22 = (int)sVar27 & 0x8000000f;
            if ((int)uVar22 < 0) {
              uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
            }
            cVar8 = FUN_140534da0(lVar34,uVar22,uVar31,1,0,uVar11 & 0xffffff00,0,0);
            if (cVar8 == '\0') break;
            sVar26 = sVar26 + 1;
            iVar12 = iVar12 + -1;
            if (iVar12 < 1) break;
          }
        }
        if (((*(short *)(param_1 + 0xc0) != sVar27) || (*(short *)(param_1 + 0xc2) != sVar36)) ||
           (*(short *)(param_1 + 0xc4) != sVar26)) {
          *param_2 = 0x51;
          sVar25 = sVar26;
LAB_140a3af32:
          param_2[1] = 0x28;
          *(short *)(param_2 + 0xc) = sVar27;
          *(short *)((longlong)param_2 + 0x32) = sVar36;
          *(short *)(param_2 + 0xd) = sVar25;
          return;
        }
      }
      goto LAB_140a3b4d1;
    }
  }
  uVar23 = 0;
  iVar13 = (int)(short)(*(short *)(param_1 + 0xa8) - *(short *)(param_1 + 0xae));
  iVar12 = (int)(short)(*(short *)(param_1 + 0xaa) - *(short *)(param_1 + 0xb0));
  fVar37 = (float)(iVar12 * iVar12 + iVar13 * iVar13);
  if (fVar37 < 0.0) {
    fVar37 = (float)func_0x00014153ae80(fVar37);
  }
  else {
    fVar37 = SQRT(fVar37);
  }
  uVar11 = FUN_140eb68b0();
  if ((uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x1b4e81c)
     || (((((short)(int)fVar37 < 3 &&
           (uVar11 = FUN_140eb68b0(),
           uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff <
           0x6666667)) && (*(longlong *)(param_1 + 0x3b0) == 0)) &&
         (*(short *)(param_1 + 0xac) == *(short *)(param_1 + 0xb2))))) {
    lStack_70 = 0;
    plStack_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
    uVar35 = uVar23;
    if ((longlong)_DAT_1423e5770 - (longlong)_DAT_1423e5768 >> 3 != 0) {
      do {
        lVar34 = *(longlong *)(uVar23 + (longlong)_DAT_1423e5768);
        if ((*(uint *)(lVar34 + 0x10) & 0x480c11) == 1) {
          aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,0x8ad0);
          if ((*(uint *)(lVar34 + 0x10) & 0x10) == 0) {
            if ((*(uint *)(lVar34 + 0x10) & 8) == 0) {
              aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 8));
              puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 10));
              uVar10 = *(undefined2 *)(lVar34 + 0xc);
LAB_140a3b165:
              uStack_78 = CONCAT62(uStack_78._2_6_,uVar10);
            }
            else {
              puVar6 = *(undefined8 **)(lVar34 + 0x40);
              for (puVar17 = *(undefined8 **)(lVar34 + 0x38); puVar17 < puVar6;
                  puVar17 = puVar17 + 1) {
                iVar12 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
                if (iVar12 == 0xb) {
                  lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
                  if (lVar28 != 0) {
                    FUN_140c8baa0(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                    goto LAB_140a3b169;
                  }
                }
                else if ((iVar12 == 0x12) &&
                        (lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x20))(), lVar28 != 0)) {
                  FUN_141367430(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                  goto LAB_140a3b169;
                }
              }
              for (puVar17 = *(undefined8 **)(lVar34 + 0x20);
                  puVar17 < *(undefined8 **)(lVar34 + 0x28); puVar17 = puVar17 + 1) {
                if (*(int *)*puVar17 == 7) {
                  lVar34 = *(longlong *)((int *)*puVar17 + 2);
                  aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 4));
                  puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 6));
                  uVar10 = *(undefined2 *)(lVar34 + 8);
                  goto LAB_140a3b165;
                }
              }
            }
          }
LAB_140a3b169:
          plVar3 = plStack_60;
          cVar8 = FUN_1413a4910(param_1,(short)aiStackX_20[0],(ulonglong)puStackX_18 & 0xffff,
                                uStack_78 & 0xffff,1);
          if (cVar8 != '\0') {
            if (plVar16 == plVar3) {
              FUN_1400bad30(&lStack_70,plVar16);
              plVar16 = plStack_68;
            }
            else {
              *plVar16 = *(longlong *)((longlong)_DAT_1423e5768 + uVar23);
              plStack_68 = plVar16 + 1;
              plVar16 = plStack_68;
            }
          }
        }
        uVar11 = (int)uVar35 + 1;
        uVar35 = (ulonglong)uVar11;
        uVar23 = uVar23 + 8;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)((longlong)_DAT_1423e5770 - (longlong)_DAT_1423e5768 >> 3));
    }
    lVar34 = lStack_70;
    uVar23 = (longlong)plVar16 - lStack_70 >> 3;
    if (uVar23 != 0) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
      if ((uint)uVar23 < 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_140eb68b0();
        uVar11 = (uVar11 + (int)((longlong)((ulonglong)uVar11 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar23 & 0xffffffff)) + 1U);
      }
      lVar34 = *(longlong *)(lVar34 + (longlong)(int)uVar11 * 8);
      aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,0x8ad0);
      if ((*(uint *)(lVar34 + 0x10) & 0x10) == 0) {
        if ((*(uint *)(lVar34 + 0x10) & 8) == 0) {
          aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 8));
          puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 10));
          uVar10 = *(undefined2 *)(lVar34 + 0xc);
LAB_140a3b321:
          uStack_78 = CONCAT62(uStack_78._2_6_,uVar10);
        }
        else {
          puVar6 = *(undefined8 **)(lVar34 + 0x40);
          for (puVar17 = *(undefined8 **)(lVar34 + 0x38); puVar17 < puVar6; puVar17 = puVar17 + 1) {
            iVar12 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
            if (iVar12 == 0xb) {
              lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
              if (lVar28 != 0) {
                FUN_140c8baa0(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
                goto LAB_140a3b325;
              }
            }
            else if ((iVar12 == 0x12) &&
                    (lVar28 = (**(code **)(*(longlong *)*puVar17 + 0x20))(), lVar28 != 0)) {
              FUN_141367430(lVar28,aiStackX_20,&puStackX_18,&uStack_78);
              goto LAB_140a3b325;
            }
          }
          for (puVar17 = *(undefined8 **)(lVar34 + 0x20); puVar17 < *(undefined8 **)(lVar34 + 0x28);
              puVar17 = puVar17 + 1) {
            if (*(int *)*puVar17 == 7) {
              lVar34 = *(longlong *)((int *)*puVar17 + 2);
              aiStackX_20[0] = CONCAT22(aiStackX_20[0]._2_2_,*(undefined2 *)(lVar34 + 4));
              puStackX_18 = (ushort *)CONCAT62(puStackX_18._2_6_,*(undefined2 *)(lVar34 + 6));
              uVar10 = *(undefined2 *)(lVar34 + 8);
              goto LAB_140a3b321;
            }
          }
        }
      }
LAB_140a3b325:
      iVar12 = 0xf;
      while( true ) {
        puVar32 = puStackX_18;
        sVar27 = (short)uStack_78 + 1;
        uVar10 = (short)aiStackX_20[0];
        cVar8 = FUN_141367790(param_1,(short)aiStackX_20[0],(ulonglong)puStackX_18 & 0xffff,sVar27);
        if (cVar8 != '\0') break;
        uVar11 = FUN_141348060(param_1,0,0);
        cVar8 = FUN_1414adea0(0x1423d14f0,uVar10,(ulonglong)puVar32 & 0xffff,sVar27,1,uVar11);
        if (cVar8 == '\0') break;
        sVar36 = (short)uStack_78 + 1;
        sVar27 = (short)aiStackX_20[0];
        if (((short)aiStackX_20[0] < 0) || (_DAT_1424e80dc <= (short)aiStackX_20[0]))
        goto LAB_140a3b479;
        if (((short)puStackX_18 < 0) ||
           (((_DAT_1424e80e0 <= (short)puStackX_18 || (sVar36 < 0)) || (_DAT_1424e80e4 <= sVar36))))
        goto LAB_140a3b47e;
        if ((_DAT_1424e80a8 == 0) ||
           (lVar34 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_1424e80a8 + (longlong)((short)aiStackX_20[0] >> 4) * 8)
                        + (longlong)((short)puStackX_18 >> 4) * 8) + (longlong)sVar36 * 8),
           lVar34 == 0)) goto LAB_140a3b47e;
        uVar31 = (int)(short)puStackX_18 & 0x8000000f;
        if ((int)uVar31 < 0) {
          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
        }
        uVar22 = (int)(short)aiStackX_20[0] & 0x8000000f;
        if ((int)uVar22 < 0) {
          uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
        }
        cVar8 = FUN_140534da0(lVar34,uVar22,uVar31,
                              CONCAT71((uint7)(uint3)(int3)(char)((uint)aiStackX_20[0] >> 8),1),0,
                              uVar11 & 0xffffff00,0,0);
        if (cVar8 == '\0') break;
        uStack_78 = CONCAT62(uStack_78._2_6_,(short)uStack_78 + 1);
        iVar12 = iVar12 + -1;
        if (iVar12 < 1) break;
      }
      sVar27 = (short)aiStackX_20[0];
LAB_140a3b479:
LAB_140a3b47e:
      *param_2 = 0x3c;
      param_2[1] = 0x28;
      *(short *)(param_2 + 0xc) = sVar27;
      *(short *)((longlong)param_2 + 0x32) = (short)puStackX_18;
      *(short *)(param_2 + 0xd) = (short)uStack_78;
      param_2[0xe] = 0x15;
      param_2[0xf] = 3;
      goto LAB_140a3bd7c;
    }
    FUN_140066b70(&lStack_70);
  }
  goto LAB_140a3b4d1;
LAB_140a3b722:
  if (*(longlong **)(param_1 + 0x410) <= plVar16) goto LAB_140a3b73f;
  if ((short)((ulonglong *)*plVar16)[1] == 0) {
    uVar35 = *(ulonglong *)*plVar16;
    goto LAB_140a3b73f;
  }
  plVar16 = plVar16 + 1;
  goto LAB_140a3b722;
LAB_140a3b73f:
  FUN_141329bf0(param_1,uVar35,1,0,1);
  goto LAB_140a3b752;
}

