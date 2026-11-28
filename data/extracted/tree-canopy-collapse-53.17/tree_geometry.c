/* Actual Ghidra output; researcher-assigned name. VA 0x141419a60..0x14141d2ee; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tree_geometry(longlong param_1,int param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  short sVar11;
  char cVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  longlong *plVar35;
  longlong *plVar36;
  ulonglong uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  longlong *plVar42;
  ulonglong uVar43;
  short sVar44;
  short sVar45;
  int iVar46;
  int iVar47;
  longlong lVar48;
  int *piVar49;
  byte *pbVar50;
  ushort uVar51;
  int iVar52;
  short sVar53;
  int iVar54;
  short sVar55;
  bool bVar56;
  bool bVar57;
  int aiStack_20108 [32672];
  undefined1 auStack_288 [32];
  longlong lStack_268;
  int iStack_260;
  char cStack_25c;
  ulonglong uStack_258;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  int iStack_240;
  char cStack_23c;
  int *piStack_238;
  int iStack_230;
  int iStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  int iStack_218;
  uint uStack_214;
  uint uStack_210;
  longlong lStack_208;
  uint uStack_200;
  int iStack_1fc;
  longlong *plStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong *plStack_1e0;
  uint auStack_1d8 [52];
  int iStack_108;
  longlong alStack_104 [25];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_288;
  sVar29 = *(short *)(param_1 + 2);
  lStack_268 = param_1;
  if (((sVar29 < 0) ||
      ((ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) <= (ulonglong)(longlong)sVar29)) ||
     (lVar25 = *(longlong *)(_DAT_14250ed78 + (longlong)sVar29 * 8), lStack_1f0 = lVar25,
     lVar25 == 0)) goto LAB_14141d2b3;
  iVar22 = (int)((ulonglong)((longlong)*(int *)(param_1 + 0xc) * -0x2ff2ff2f) >> 0x20) +
           *(int *)(param_1 + 0xc);
  iStack_22c = (iVar22 >> 0xf) - (iVar22 >> 0x1f);
  iVar22 = iStack_22c - param_2;
  if (iVar22 < 0) {
    iStack_22c = param_2;
  }
  uStack_210 = 0;
  uStack_21c = 0;
  iStack_230 = 0;
  if (-1 < iVar22) {
    iStack_230 = iVar22;
  }
  iStack_1fc = 0;
  uVar23 = 0;
  uVar15 = 0;
  iStack_240 = 0;
  uStack_24c = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x40) + 0x44) = 0;
  iStack_218 = 0;
  uStack_250 = 0;
  uStack_214 = 0;
  func_0x000141554566(&iStack_108,0,200);
  if ((*(int *)(lVar25 + 0x48) < 1) ||
     (cStack_25c = '\x01', (**(byte **)(lVar25 + 0x40) & 0x40) == 0)) {
    cStack_25c = '\0';
  }
  plVar19 = *(longlong **)(param_1 + 0x40);
  sVar29 = 0;
  uStack_248 = uStack_248 & 0xffff0000;
  lStack_208 = lVar25;
  sVar30 = *(short *)(param_1 + 4) - (short)(*(int *)((longlong)plVar19 + 0x2c) / 2);
  iVar22 = 0;
  if (0 < *(int *)((longlong)plVar19 + 0x2c)) {
    iStack_260 = 0;
    do {
      iVar52 = 0;
      sVar44 = 0;
      uStack_258 = uStack_258 & 0xffffffffffff0000;
      sVar31 = *(short *)(param_1 + 6) - (short)((int)plVar19[6] / 2);
      iVar22 = iStack_260;
      if (0 < (int)plVar19[6]) {
        do {
          sVar53 = 0;
          sVar29 = *(short *)(param_1 + 8);
          if (0 < (int)plVar19[5]) {
            do {
              lVar48 = (longlong)sVar53;
              lVar24 = (longlong)(*(int *)((longlong)plVar19 + 0x2c) * iVar52 + iVar22);
              lVar25 = *(longlong *)(*plVar19 + lVar48 * 8);
              uVar51 = *(ushort *)(lVar25 + lVar24 * 2);
              iVar22 = iStack_260;
              if ((uVar51 & 1) == 0) {
                if (uVar51 == 0) {
                  if (sVar53 == 0) {
                    if ((((-1 < sVar30) && (sVar30 < _DAT_14250a55c)) && (-1 < sVar31)) &&
                       (((sVar31 < _DAT_14250a560 && (-1 < sVar29)) &&
                        ((sVar29 < _DAT_14250a564 &&
                         (cVar12 = FUN_1414c3aa0(0x1423f3970,sVar30,sVar31,sVar29), cVar12 != '\0'))
                        )))) {
                      uVar51 = func_0x0001400695b0(0x1423f3970,sVar30);
                      if (uVar51 < 0x165) {
                        if (((uVar51 != 0x164) && (uVar51 != 0x41)) && (uVar51 != 0x142)) {
                          bVar56 = uVar51 == 0x143;
LAB_141419d73:
                          if (!bVar56) {
                            uVar23 = func_0x000140069640(0x1423f3970,sVar30,sVar31,sVar29);
                            if ((uVar23 & 7) != 6) {
                              iVar22 = iStack_260;
                              if ((uVar23 & 7) != 7) goto LAB_141419f47;
                              cVar12 = FUN_1405c1940(0x142410388,sVar30,sVar31);
                              if ((cVar12 == '\0') &&
                                 (cVar12 = FUN_1405c1a20(0x142410388,sVar30,sVar31), cVar12 == '\0')
                                 ) {
                                cVar12 = FUN_1405c17f0(0x142410388,sVar30,sVar31);
                                bVar56 = cVar12 == '\0';
                                goto LAB_141419de0;
                              }
                            }
                          }
                        }
                      }
                      else if (uVar51 != 0x1b0) {
                        bVar56 = uVar51 == 0x1ea;
                        goto LAB_141419d73;
                      }
                    }
LAB_141419de6:
                    *(undefined2 *)(lVar25 + lVar24 * 2) = 0x80;
                    iVar22 = iStack_260;
                  }
                  else {
                    if (((sVar30 < 0) || (_DAT_14250a55c <= sVar30)) ||
                       ((sVar31 < 0 ||
                        ((((_DAT_14250a560 <= sVar31 || (sVar29 < 0)) || (_DAT_14250a564 <= sVar29))
                         || ((_DAT_14250a528 == 0 ||
                             (lVar48 = *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)
                                            (_DAT_14250a528 + ((longlong)sVar30 >> 4) * 8) +
                                          ((longlong)sVar31 >> 4) * 8) + (longlong)sVar29 * 8),
                             lVar48 == 0)))))))) {
                      sVar44 = 0;
                    }
                    else {
                      uVar23 = (int)sVar30 & 0x8000000f;
                      if ((int)uVar23 < 0) {
                        uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
                      }
                      uVar15 = (int)sVar31 & 0x8000000f;
                      if ((int)uVar15 < 0) {
                        uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
                      }
                      sVar44 = *(short *)(lVar48 + (((longlong)(int)uVar23 + 5) * 0x10 +
                                                   (longlong)(int)uVar15) * 2);
                    }
                    if (((sVar44 != 1) && (sVar44 != 0x20)) && (sVar44 != 0x23)) {
                      bVar56 = sVar44 == 0x2a;
LAB_141419de0:
                      iVar22 = iStack_260;
                      if (!bVar56) goto LAB_141419de6;
                    }
                  }
                }
                else if (cStack_25c == '\0') {
                  if ((uVar51 & 0x1e) == 0) {
                    if ((uVar51 & 0x20) != 0) {
                      uStack_21c = uStack_21c + 1;
                    }
                  }
                  else {
                    uStack_210 = uStack_210 + 1;
                  }
                }
                else if ((uVar51 & 0x10) != 0) {
                  iVar38 = iStack_260 - *(int *)((longlong)plVar19 + 0x2c) / 2;
                  iVar14 = -iVar38;
                  if (iVar14 < 0) {
                    iVar14 = iVar38;
                  }
                  iVar46 = iVar52 - (int)plVar19[6] / 2;
                  iVar38 = -iVar46;
                  if (iVar38 < 0) {
                    iVar38 = iVar46;
                  }
                  iVar46 = (&iStack_108)[lVar48];
                  if ((&iStack_108)[lVar48] < iVar14) {
                    (&iStack_108)[lVar48] = iVar14;
                    iVar46 = iVar14;
                  }
                  if (iVar46 < iVar38) {
                    (&iStack_108)[lVar48] = iVar38;
                  }
                }
              }
              else {
                if (*(short *)((longlong)plVar19 + 0x44) < sVar53) {
                  *(short *)((longlong)plVar19 + 0x44) = sVar53;
                }
                iVar14 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2;
                if (iStack_260 < iVar14) {
                  uStack_24c = uStack_24c + 1;
                }
                else {
                  uStack_24c = uVar23;
                  if (iVar14 < iStack_260) {
                    iStack_218 = iStack_218 + 1;
                  }
                }
                iVar14 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2;
                if (iVar52 < iVar14) {
                  uStack_250 = uStack_250 + 1;
                  iStack_240 = iStack_240 + 1;
                }
                else {
                  uStack_250 = uVar15;
                  if (iVar14 < iVar52) {
                    uStack_214 = uStack_214 + 1;
                  }
                  iStack_240 = iStack_240 + 1;
                }
              }
LAB_141419f47:
              sVar53 = sVar53 + 1;
              sVar29 = sVar29 + 1;
              plVar19 = *(longlong **)(lStack_268 + 0x40);
              uVar23 = uStack_24c;
              uVar15 = uStack_250;
            } while ((int)sVar53 < (int)plVar19[5]);
            sVar44 = (short)uStack_258;
          }
          sVar29 = 0;
          if (0 < (int)plVar19[8]) {
            do {
              iVar14 = iStack_1fc + 1;
              if ((*(byte *)((longlong)(iVar52 * *(int *)((longlong)plVar19 + 0x2c) + iVar22) +
                            *(longlong *)(plVar19[7] + (longlong)sVar29 * 8)) & 1) == 0) {
                iVar14 = iStack_1fc;
              }
              iStack_1fc = iVar14;
              sVar29 = sVar29 + 1;
            } while ((int)sVar29 < (int)plVar19[8]);
          }
          sVar44 = sVar44 + 1;
          sVar31 = sVar31 + 1;
          iVar52 = (int)sVar44;
          uStack_258 = CONCAT62(uStack_258._2_6_,sVar44);
          plVar19 = *(longlong **)(lStack_268 + 0x40);
          param_1 = lStack_268;
        } while (iVar52 < (int)plVar19[6]);
        sVar29 = (short)uStack_248;
      }
      sVar29 = sVar29 + 1;
      sVar30 = sVar30 + 1;
      uStack_248 = CONCAT22(uStack_248._2_2_,sVar29);
      iStack_260 = (int)sVar29;
      iVar22 = iStack_240;
    } while ((int)sVar29 < *(int *)((longlong)plVar19 + 0x2c));
  }
  iVar52 = *(short *)(param_1 + 8) + _DAT_14250a570;
  iStack_260 = iVar52;
  sVar29 = (*(short *)(param_1 + 6) / 0x30) * 0x30;
  sVar30 = (*(short *)(param_1 + 4) / 0x30) * 0x30;
  if ((((-1 < sVar30) && (sVar30 < _DAT_14250a55c)) && (-1 < sVar29)) &&
     (((sVar29 < _DAT_14250a560 && (_DAT_14250a548 != 0)) &&
      (lVar25 = *(longlong *)
                 (*(longlong *)(_DAT_14250a548 + ((longlong)sVar30 >> 4) * 8) +
                 ((longlong)sVar29 >> 4) * 8), lVar25 != 0)))) {
    plStack_1f8 = *(longlong **)(lVar25 + 0x1a68);
    plStack_1e0 = *(longlong **)(lVar25 + 0x1a70);
    while (uVar23 = uStack_24c, iVar22 = iStack_240, uVar15 = uStack_250, plStack_1f8 < plStack_1e0)
    {
      lVar25 = *plStack_1f8;
      if (lVar25 == param_1) {
LAB_14141a4ee:
        plStack_1f8 = plStack_1f8 + 1;
        param_1 = lStack_268;
      }
      else {
        plVar19 = *(longlong **)(lVar25 + 0x40);
        if (plVar19 != (longlong *)0x0) {
          uVar26 = 0;
          uStack_258 = uStack_258 & 0xffffffff00000000;
          if (0 < (int)plVar19[5]) {
            piStack_238 = (int *)0x0;
            do {
              iVar14 = 0;
              iVar22 = (int)uVar26;
              if (0 < *(int *)((longlong)plVar19 + 0x2c)) {
                do {
                  iVar22 = 0;
                  if (0 < (int)plVar19[6]) {
                    do {
                      plVar36 = *(longlong **)(param_1 + 0x40);
                      iVar38 = *(int *)((longlong)plVar36 + 0x2c);
                      iVar46 = (int)*(short *)(lVar25 + 4) +
                               ((iVar38 / 2 - *(int *)((longlong)plVar19 + 0x2c) / 2) -
                               (int)*(short *)(param_1 + 4)) + iVar14;
                      iVar39 = (int)*(short *)(lVar25 + 6) +
                               (((int)plVar36[6] / 2 - (int)plVar19[6] / 2) -
                               (int)*(short *)(lStack_268 + 6)) + iVar22;
                      iVar47 = ((int)*(short *)(lVar25 + 8) - (int)*(short *)(lStack_268 + 8)) +
                               (int)uStack_258;
                      if (((-1 < iVar47) && (iVar47 < (int)plVar36[5])) &&
                         ((-1 < iVar46 &&
                          ((((iVar46 < iVar38 && (-1 < iVar39)) && (iVar39 < (int)plVar36[6])) &&
                           ((sVar29 = *(short *)(*(longlong *)((longlong)piStack_238 + *plVar19) +
                                                (longlong)
                                                (iVar22 * *(int *)((longlong)plVar19 + 0x2c) +
                                                iVar14) * 2), -1 < (char)sVar29 && (sVar29 != 0)))))
                          ))) {
                        puVar1 = (ushort *)
                                 (*(longlong *)(*plVar36 + (longlong)iVar47 * 8) +
                                 (longlong)(iVar39 * iVar38 + iVar46) * 2);
                        *puVar1 = *puVar1 | 0x80;
                      }
                      uVar26 = uStack_258 & 0xffffffff;
                      plVar19 = *(longlong **)(lVar25 + 0x40);
                      iVar22 = iVar22 + 1;
                      param_1 = lStack_268;
                    } while (iVar22 < (int)plVar19[6]);
                  }
                  iVar22 = (int)uVar26;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < *(int *)((longlong)plVar19 + 0x2c));
              }
              uVar23 = iVar22 + 1;
              uVar26 = (ulonglong)uVar23;
              piStack_238 = piStack_238 + 2;
              uStack_258 = CONCAT44(uStack_258._4_4_,uVar23);
            } while ((int)uVar23 < (int)plVar19[5]);
          }
          uVar26 = 0;
          uStack_258 = uStack_258 & 0xffffffff00000000;
          if (0 < (int)plVar19[8]) {
            piStack_238 = (int *)0x0;
            do {
              iVar22 = 0;
              iVar14 = (int)uVar26;
              if (0 < *(int *)((longlong)plVar19 + 0x2c)) {
                do {
                  iVar14 = 0;
                  if (0 < (int)plVar19[6]) {
                    do {
                      lVar24 = *(longlong *)(param_1 + 0x40);
                      iVar38 = *(int *)(lVar24 + 0x2c);
                      iVar39 = (int)*(short *)(lVar25 + 4) +
                               ((iVar38 / 2 - *(int *)((longlong)plVar19 + 0x2c) / 2) -
                               (int)*(short *)(param_1 + 4)) + iVar22;
                      iVar47 = (int)*(short *)(lVar25 + 6) +
                               ((*(int *)(lVar24 + 0x30) / 2 - (int)plVar19[6] / 2) -
                               (int)*(short *)(param_1 + 6)) + iVar14;
                      iVar46 = ((int)*(short *)(param_1 + 8) - (int)*(short *)(lVar25 + 8)) +
                               (int)uStack_258;
                      if (((-1 < iVar46) && (iVar46 < *(int *)(lVar24 + 0x40))) &&
                         (((-1 < iVar39 &&
                           (((iVar39 < iVar38 && (-1 < iVar47)) &&
                            (iVar47 < *(int *)(lVar24 + 0x30))))) &&
                          ((cVar12 = *(char *)((longlong)
                                               (iVar14 * *(int *)((longlong)plVar19 + 0x2c) + iVar22
                                               ) + *(longlong *)(plVar19[7] + (longlong)piStack_238)
                                              ), -1 < cVar12 && (cVar12 != '\0')))))) {
                        pbVar50 = (byte *)(*(longlong *)
                                            (*(longlong *)(lVar24 + 0x38) + (longlong)iVar46 * 8) +
                                          (longlong)(iVar47 * iVar38 + iVar39));
                        *pbVar50 = *pbVar50 | 0x80;
                      }
                      uVar26 = uStack_258 & 0xffffffff;
                      plVar19 = *(longlong **)(lVar25 + 0x40);
                      iVar14 = iVar14 + 1;
                      param_1 = lStack_268;
                    } while (iVar14 < (int)plVar19[6]);
                  }
                  iVar14 = (int)uVar26;
                  iVar22 = iVar22 + 1;
                  param_1 = lStack_268;
                } while (iVar22 < *(int *)((longlong)plVar19 + 0x2c));
              }
              uVar23 = iVar14 + 1;
              uVar26 = (ulonglong)uVar23;
              piStack_238 = piStack_238 + 2;
              uStack_258 = CONCAT44(uStack_258._4_4_,uVar23);
              param_1 = lStack_268;
            } while ((int)uVar23 < (int)plVar19[8]);
          }
          goto LAB_14141a4ee;
        }
        plVar19 = *(longlong **)(param_1 + 0x40);
        iVar22 = *(int *)((longlong)plVar19 + 0x2c);
        iVar38 = ((int)*(short *)(lVar25 + 4) + iVar22 / 2) - (int)*(short *)(lStack_268 + 4);
        iVar46 = ((int)*(short *)(lVar25 + 6) + (int)plVar19[6] / 2) -
                 (int)*(short *)(lStack_268 + 6);
        iVar14 = (int)*(short *)(lVar25 + 8) - (int)*(short *)(lStack_268 + 8);
        if (((iVar14 < 0) || ((int)plVar19[5] <= iVar14)) ||
           ((iVar38 < 0 || (((iVar22 <= iVar38 || (iVar46 < 0)) || ((int)plVar19[6] <= iVar46))))))
        goto LAB_14141a4ee;
        puVar1 = (ushort *)
                 (*(longlong *)(*plVar19 + (longlong)iVar14 * 8) +
                 (longlong)(iVar22 * iVar46 + iVar38) * 2);
        *puVar1 = *puVar1 | 0x80;
        plStack_1f8 = plStack_1f8 + 1;
        param_1 = lStack_268;
      }
    }
  }
  if (iStack_230 < iStack_22c) {
    piVar49 = (int *)(lStack_208 + 0x748);
    piStack_238 = piVar49;
    iVar14 = iStack_22c;
    do {
      lVar25 = lStack_208;
      uStack_228 = uVar15;
      uStack_200 = uVar23;
      if (cStack_25c == '\0') {
        if (iStack_230 % *(int *)(lStack_208 + 0x730) == 0) {
          lVar24 = *(longlong *)(param_1 + 0x40);
          uVar23 = *(int *)(lVar24 + 0x2c) / 2;
          iVar22 = *(int *)(lStack_208 + 0x73c);
          uVar15 = *(int *)(lVar24 + 0x30) / 2;
          uStack_248 = uVar15;
          lVar48 = lVar24;
          if ((0x90 < iVar52) && (1 < iVar22)) {
            lVar32 = lVar24;
            if (0x96 - iVar52 <= iVar22) {
              lVar32 = *(longlong *)(lStack_268 + 0x40);
              iVar22 = 0x96 - iVar52;
            }
            if (iVar22 < 1) {
              iVar22 = 1;
              lVar48 = lVar32;
            }
          }
          iVar14 = *(int *)(lVar24 + 0x28) + -2;
          if (iVar22 <= iVar14) {
            iVar14 = iVar22;
          }
          uStack_258 = CONCAT44(uStack_258._4_4_,iVar14);
          if (*(short *)(lVar24 + 0x44) < 1) {
            uStack_224 = 0;
LAB_14141ae53:
            uVar26 = (ulonglong)uStack_224;
            bVar57 = false;
            bVar56 = false;
            uStack_244 = CONCAT22(uStack_244._2_2_,(short)uVar23);
            uStack_220 = CONCAT22(uStack_220._2_2_,(short)uVar15);
            plVar19 = *(longlong **)(lStack_268 + 0x40);
            uStack_248 = CONCAT22(uStack_248._2_2_,(short)uStack_224);
            sVar29 = (short)uStack_224;
            uVar33 = uVar15;
            uVar40 = uVar23;
            if ((*(byte *)(*(longlong *)(*plVar19 + (longlong)(int)uStack_224 * 8) +
                          (longlong)(int)(uVar15 * *(int *)((longlong)plVar19 + 0x2c) + uVar23) * 2)
                & 1) != 0) {
              do {
                if (iVar14 <= (int)uVar26) break;
                uStack_244 = CONCAT22(uStack_244._2_2_,(short)uVar23);
                uStack_220 = CONCAT22(uStack_220._2_2_,(short)uVar15);
                uStack_248 = CONCAT22(uStack_248._2_2_,(short)uVar26);
                if ((!bVar56) || (*piVar49 < 2)) {
                  uStack_224 = (int)uVar26 + 1;
                }
                iVar22 = *(int *)((longlong)plVar19 + 0x2c);
                if ((*(byte *)(*(longlong *)(*plVar19 + (longlong)(int)uStack_224 * 8) +
                              (longlong)(int)(iVar22 * uVar15 + uVar23) * 2) & 0x80) != 0) {
                  bVar57 = true;
                  sVar29 = (short)uVar26;
                  uVar33 = uVar15;
                  uVar40 = uVar23;
                  goto LAB_14141b1c9;
                }
                bVar56 = false;
                if (1 < *piVar49) {
                  if (iVar22 < 0) {
                    iVar22 = iVar22 + 1;
                  }
                  iVar52 = (int)plVar19[6];
                  iVar22 = iVar22 >> 1;
                  if (iVar52 < 0) {
                    iVar52 = iVar52 + 1;
                  }
                  iVar52 = iVar52 >> 1;
                  iVar14 = (int)*(short *)(lStack_268 + 4) % 0x30;
                  iVar38 = iVar14;
                  if (-1 < iVar14 - (iVar22 + -2)) {
                    iVar38 = iVar22 + -2;
                  }
                  iVar39 = (int)*(short *)(lStack_268 + 6) % 0x30;
                  iVar46 = iVar39;
                  if (-1 < iVar39 - (iVar52 + -2)) {
                    iVar46 = iVar52 + -2;
                  }
                  if (0x2f < iVar38 + iVar14) {
                    iVar38 = 0x2f - iVar14;
                  }
                  if (0x2f < iVar46 + iVar39) {
                    iVar46 = 0x2f - iVar39;
                  }
                  uVar33 = FUN_140ece790();
                  uVar33 = uVar33 + (int)((longlong)((ulonglong)uVar33 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                  uVar40 = uVar33 >> 0x1d;
                  piVar49 = piStack_238;
                  iVar14 = (int)uStack_258;
                  if (uVar33 >> 0x1d == 0) {
                    if ((iVar22 - iVar38 < (int)uVar23) &&
                       ((int)uVar23 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2)) {
                      if ((int)uStack_24c <= iStack_218) {
                        uVar23 = uVar23 - 1;
                      }
                      bVar56 = (int)uStack_24c <= iStack_218;
                    }
                    else if ((*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2 <= (int)uVar23)
                            && (((int)uVar23 < iVar22 + iVar38 && (iStack_218 <= (int)uStack_24c))))
                    {
                      uVar23 = uVar23 + 1;
                      bVar56 = true;
                    }
                  }
                  else if (uVar40 == 1) {
                    if ((iVar52 - iVar46 < (int)uVar15) &&
                       ((int)uVar15 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2)) {
                      if ((int)uStack_250 <= (int)uStack_214) {
                        uVar15 = uVar15 - 1;
                      }
                      bVar56 = (int)uStack_250 <= (int)uStack_214;
                    }
                    else if ((*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2 <= (int)uVar15)
                            && (((int)uVar15 < iVar52 + iVar46 &&
                                ((int)uStack_214 <= (int)uStack_250)))) {
                      uVar15 = uVar15 + 1;
                      bVar56 = true;
                    }
                  }
                  else if (uVar40 == 2) {
                    iVar52 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2;
                    if (((int)uVar23 < iVar52) || (iVar22 + iVar38 <= (int)uVar23)) {
                      if ((iVar22 - iVar38 < (int)uVar23) &&
                         (((int)uVar23 <= iVar52 && ((int)uStack_24c <= iStack_218)))) {
                        uVar23 = uVar23 - 1;
                        bVar56 = true;
                      }
                    }
                    else {
                      if (iStack_218 <= (int)uStack_24c) {
                        uVar23 = uVar23 + 1;
                      }
                      bVar56 = iStack_218 <= (int)uStack_24c;
                    }
                  }
                  else if (uVar40 == 3) {
                    iVar22 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2;
                    if (((int)uVar15 < iVar22) || (iVar52 + iVar46 <= (int)uVar15)) {
                      if ((iVar52 - iVar46 < (int)uVar15) &&
                         (((int)uVar15 <= iVar22 && ((int)uStack_250 <= (int)uStack_214)))) {
                        uVar15 = uVar15 - 1;
                        bVar56 = true;
                      }
                    }
                    else {
                      if ((int)uStack_214 <= (int)uStack_250) {
                        uVar15 = uVar15 + 1;
                      }
                      bVar56 = (int)uStack_214 <= (int)uStack_250;
                    }
                  }
                }
                uVar26 = (ulonglong)(int)uStack_224;
                plVar19 = *(longlong **)(lStack_268 + 0x40);
              } while ((*(byte *)(*(longlong *)(*plVar19 + uVar26 * 8) +
                                 (longlong)
                                 (int)(uVar15 * *(int *)((longlong)plVar19 + 0x2c) + uVar23) * 2) &
                       1) != 0);
              sVar29 = (short)uStack_248;
              uVar33 = uStack_220;
              uVar40 = uStack_244;
            }
LAB_14141b1c9:
            iVar22 = (int)plVar19[6] / 2;
            if ((int)uVar15 < iVar22) {
              if ((int)(uStack_214 + 1) < (int)uStack_250) {
                bVar57 = true;
              }
            }
            else if ((iVar22 < (int)uVar15) && ((int)(uStack_250 + 1) < (int)uStack_214)) {
              bVar57 = true;
            }
            iVar22 = *(int *)((longlong)plVar19 + 0x2c) / 2;
            if ((int)uVar23 < iVar22) {
              if (iStack_218 + 1 < (int)uStack_24c) {
                bVar57 = true;
              }
            }
            else if ((iVar22 < (int)uVar23) && ((int)(uStack_24c + 1) < iStack_218)) {
              bVar57 = true;
            }
            param_1 = lStack_268;
            iVar52 = iStack_260;
            if (((int)uStack_224 <= iVar14) && (!bVar57)) {
              lVar24 = (longlong)(int)(*(int *)((longlong)plVar19 + 0x2c) * uVar15 + uVar23);
              lVar25 = *(longlong *)(*plVar19 + (longlong)(int)uStack_224 * 8);
              uVar16 = 0;
              if ((0 < (int)(uVar23 - 1)) &&
                 (uVar16 = 0, (*(byte *)(lVar25 + -2 + lVar24 * 2) & 0x81) != 0)) {
                uVar16 = 1;
              }
              iVar22 = *(int *)((longlong)plVar19 + 0x2c);
              if (((int)(uVar23 + 1) < iVar22) && ((*(byte *)(lVar25 + 2 + lVar24 * 2) & 0x81) != 0)
                 ) {
                uVar16 = uVar16 + 1;
              }
              if ((0 < (int)(uVar15 - 1)) &&
                 ((*(byte *)(lVar25 + (longlong)(int)(iVar22 * (uVar15 - 1) + uVar23) * 2) & 0x81)
                  != 0)) {
                uVar16 = uVar16 + 1;
              }
              if (((int)(uVar15 + 1) < (int)plVar19[6]) &&
                 ((*(byte *)(lVar25 + (longlong)(int)((uVar15 + 1) * iVar22 + uVar23) * 2) & 0x81)
                  != 0)) {
                uVar16 = uVar16 + 1;
              }
              uVar51 = *(ushort *)(lVar25 + lVar24 * 2);
              if (((uVar51 & 1) == 0) && (uVar16 < 2)) {
                if ((uVar51 & 0x1e) == 0) {
                  if ((uVar51 & 0x20) != 0) {
                    uStack_21c = uStack_21c + -1;
                  }
                }
                else {
                  uStack_210 = uStack_210 - 1;
                }
                uVar51 = uVar51 & 0xf8ff;
                *(ushort *)(lVar25 + lVar24 * 2) = uVar51 | 1;
                if ((int)sVar29 < (int)uStack_224) {
                  uVar51 = uVar51 | 0x601;
LAB_14141b355:
                  *(ushort *)(lVar25 + lVar24 * 2) = uVar51;
                }
                else {
                  if ((int)uVar23 < (int)(short)uVar40) {
                    uVar51 = uVar51 | 0x401;
                    goto LAB_14141b355;
                  }
                  if ((int)(short)uVar40 < (int)uVar23) {
                    uVar51 = uVar51 | 0x301;
                    goto LAB_14141b355;
                  }
                  if ((int)uVar15 < (int)(short)uVar33) {
                    uVar51 = uVar51 | 0x201;
                    goto LAB_14141b355;
                  }
                  if ((int)(short)uVar33 < (int)uVar15) {
                    uVar51 = uVar51 | 0x101;
                    goto LAB_14141b355;
                  }
                }
                if ((int)*(short *)(*(longlong *)(lStack_268 + 0x40) + 0x44) < (int)uStack_224) {
                  *(short *)(*(longlong *)(lStack_268 + 0x40) + 0x44) = (short)uStack_224;
                }
                iVar22 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2;
                if ((int)uVar23 < iVar22) {
                  uStack_24c = uStack_24c + 1;
                }
                else {
                  uStack_24c = uStack_200;
                  if (iVar22 < (int)uVar23) {
                    iStack_218 = iStack_218 + 1;
                  }
                }
                iVar22 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2;
                if ((int)uVar15 < iVar22) {
                  uStack_250 = uStack_250 + 1;
                }
                else {
                  uStack_250 = uStack_228;
                  if (iVar22 < (int)uVar15) {
                    uStack_214 = uStack_214 + 1;
                  }
                }
                iStack_240 = iStack_240 + 1;
              }
            }
          }
          else {
            uVar33 = (int)*(short *)(lVar24 + 0x44) + 1;
            if (uVar33 < 2) {
              uStack_224 = 0;
            }
            else {
              uVar40 = FUN_140ece790();
              lVar48 = *(longlong *)(lStack_268 + 0x40);
              uStack_224 = (uVar40 + (int)((longlong)((ulonglong)uVar40 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / ((int)(0x7fffffff / (ulonglong)uVar33) + 1U);
              piVar49 = piStack_238;
            }
            uVar26 = 0;
            uVar33 = -(uint)(*piVar49 != 0) & 2;
            uVar40 = uVar33;
            if (1 < *piVar49) {
              lVar48 = *(longlong *)(lStack_268 + 0x40);
              iVar22 = *(int *)(lVar48 + 0x2c);
              if (iVar22 < 0) {
                iVar22 = iVar22 + 1;
              }
              iVar52 = *(int *)(lVar48 + 0x30);
              uVar40 = (iVar22 >> 1) - 2;
              if ((int)uVar40 <= (int)uVar33) {
                uVar40 = uVar33;
              }
              if (iVar52 < 0) {
                iVar52 = iVar52 + 1;
              }
              uVar16 = (iVar52 >> 1) - 2;
              if ((int)uVar33 < (int)uVar16) {
                uVar33 = uVar16;
              }
            }
            iVar22 = *(int *)(lVar25 + 0x740);
            iVar52 = *(int *)(lVar48 + 0x2c) / 2;
            uVar16 = iVar52 - iVar22;
            if ((int)(uVar40 + iVar22) <= iVar52) {
              uVar16 = uVar40;
            }
            iVar52 = *(int *)(lVar48 + 0x30) / 2;
            uStack_244 = uVar16;
            uVar40 = iVar52 - iVar22;
            if ((int)(uVar33 + iVar22) <= iVar52) {
              uVar40 = uVar33;
            }
            uVar33 = -uVar16;
            param_1 = lStack_268;
            iVar52 = iStack_260;
            if ((int)uVar33 <= (int)uVar16) {
              plVar19 = (longlong *)((longlong)(int)uStack_224 * 8);
              uVar17 = -uVar40;
              plStack_1f8 = plVar19;
              uStack_220 = uVar17;
              uVar23 = uVar23 + uVar33;
              uVar28 = uVar26;
              uVar37 = uVar26;
              do {
                if ((int)uVar17 <= (int)uVar40) {
                  iVar22 = *(int *)((longlong)*(longlong **)(lStack_268 + 0x40) + 0x2c);
                  lVar25 = *(longlong *)((longlong)plVar19 + **(longlong **)(lStack_268 + 0x40));
                  uVar41 = uVar17 + uVar15;
                  iVar14 = uVar41 * iVar22 + uVar23;
                  uVar34 = uVar17;
                  do {
                    iVar38 = (int)uVar37;
                    if ((*(byte *)(lVar25 + (longlong)iVar14 * 2) & 1) != 0) {
                      if (iStack_218 < (int)uStack_24c) {
                        if (-1 < (int)uVar33) {
LAB_14141ad44:
                          if ((((int)uStack_250 <= (int)uStack_214) || (-1 < (int)uVar34)) &&
                             (((int)uStack_214 <= (int)uStack_250 || ((int)uVar34 < 1)))) {
                            if (*piStack_238 < 2) {
LAB_14141ad8a:
                              if (0x18 < (longlong)uVar26) goto LAB_14141ada4;
                            }
                            else {
                              uVar15 = -uVar33;
                              if ((int)-uVar33 < 0) {
                                uVar15 = uVar33;
                              }
                              uVar16 = -uVar34;
                              if ((int)-uVar34 < 0) {
                                uVar16 = uVar34;
                              }
                              if ((int)uVar15 < (int)uVar16) {
                                uVar15 = uVar16;
                              }
                              if ((int)uVar15 <= (int)(uint)uVar28) {
                                if (uVar15 != (uint)uVar28) goto LAB_14141ada4;
                                goto LAB_14141ad8a;
                              }
                              iVar38 = 0;
                              uVar26 = 0;
                              uVar28 = (ulonglong)uVar15;
                            }
                            auStack_1d8[uVar26 * 2] = uVar23;
                            uVar37 = (ulonglong)(iVar38 + 1);
                            auStack_1d8[uVar26 * 2 + 1] = uVar41;
                            uVar26 = uVar26 + 1;
                          }
                        }
                      }
                      else if ((iStack_218 <= (int)uStack_24c) || ((int)uVar33 < 1))
                      goto LAB_14141ad44;
                    }
LAB_14141ada4:
                    uVar34 = uVar34 + 1;
                    uVar41 = uVar41 + 1;
                    iVar14 = iVar14 + iVar22;
                    plVar19 = plStack_1f8;
                    uVar17 = uStack_220;
                    uVar15 = uStack_248;
                    uVar16 = uStack_244;
                  } while ((int)uVar34 <= (int)uVar40);
                }
                uVar33 = uVar33 + 1;
                uVar23 = uVar23 + 1;
              } while ((int)uVar33 <= (int)uVar16);
              if (0 < (int)(uint)uVar37) {
                if ((uint)uVar37 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar23 = FUN_140ece790();
                  uVar15 = (uVar23 + (int)((longlong)((ulonglong)uVar23 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / ((int)(0x7fffffff / uVar37) + 1U);
                }
                uVar23 = auStack_1d8[(longlong)(int)uVar15 * 2];
                uVar15 = auStack_1d8[(longlong)(int)uVar15 * 2 + 1];
                piVar49 = piStack_238;
                iVar14 = (int)uStack_258;
                goto LAB_14141ae53;
              }
            }
          }
        }
        if (((iStack_230 % *(int *)(lStack_208 + 0x750) == 0) && (0 < iStack_230)) &&
           (iVar52 < 0x91)) {
          lVar25 = *(longlong *)(param_1 + 0x40);
          uStack_248 = uStack_248 & 0xffff0000;
          sVar29 = 0;
          uVar23 = iStack_230 / *(int *)(lStack_208 + 0x750) + 1;
          lStack_1e8 = CONCAT44(lStack_1e8._4_4_,uVar23);
          if (-1 < *(short *)(lVar25 + 0x44)) {
            do {
              uVar26 = (ulonglong)uVar23;
              lVar24 = *(longlong *)(lVar25 + 0x10);
              lVar48 = *(longlong *)(lVar25 + 8);
              lVar32 = (longlong)sVar29;
              sVar30 = *(short *)(lVar24 + lVar32 * 2);
              uVar28 = (ulonglong)(uint)(int)sVar30;
              sVar44 = *(short *)(lVar48 + lVar32 * 2);
              uStack_224 = CONCAT22(uStack_224._2_2_,sVar30);
              uStack_220 = CONCAT22(uStack_220._2_2_,sVar44);
              if (sVar29 == 0) {
                uVar15 = *(uint *)(lStack_208 + 0x74c);
                if ((int)uVar23 <= (int)*(uint *)(lStack_208 + 0x74c)) {
                  uVar15 = uVar23;
                }
              }
              else {
                iVar22 = (int)*(short *)(lVar25 + 0x44);
                if (sVar29 == *(short *)(lVar25 + 0x44)) {
                  uVar23 = 1;
                }
                else {
                  uVar15 = (uint)sVar29;
                  uVar28 = (ulonglong)uVar15;
                  iVar52 = (iVar22 - uVar15) * uVar23 + uVar15;
                  uVar23 = iVar52 / iVar22;
                  uVar26 = (longlong)iVar52 % (longlong)iVar22 & 0xffffffff;
                }
                uVar15 = *(uint *)(lStack_208 + 0x74c);
                if ((int)uVar23 <= (int)*(uint *)(lStack_208 + 0x74c)) {
                  uVar15 = uVar23;
                }
                if (0 < sVar29) {
                  uVar23 = ((int)*(short *)(lVar24 + -2 + lVar32 * 2) -
                           (int)*(short *)(lVar48 + -2 + lVar32 * 2)) + 1;
                  uVar28 = (ulonglong)uVar23;
                  if ((int)uVar23 < (int)uVar15) {
                    uVar15 = uVar23;
                  }
                }
              }
              if (((int)sVar30 - (int)sVar44) + 1 < (int)uVar15) {
                bVar56 = false;
                uStack_200 = CONCAT22(uStack_200._2_2_,
                                      *(undefined2 *)(*(longlong *)(lVar25 + 0x18) + lVar32 * 2));
                uStack_228 = CONCAT22(uStack_228._2_2_,
                                      *(undefined2 *)(*(longlong *)(lVar25 + 0x20) + lVar32 * 2));
                if (sVar29 == 0) {
LAB_14141b58f:
                  if (uVar15 == 3) {
                    *(short *)(*(longlong *)(lVar25 + 8) + (longlong)sVar29 * 2) =
                         (short)(*(int *)(lVar25 + 0x2c) / 2) + -1;
                    *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10) +
                              (longlong)sVar29 * 2) =
                         (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2) + 1;
                    *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18) +
                              (longlong)sVar29 * 2) =
                         (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + -1;
                    *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) +
                              (longlong)sVar29 * 2) =
                         (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + 1;
                  }
                  else {
                    uVar23 = FUN_140ece790(uVar28,uVar26);
                    uVar23 = uVar23 + (int)((longlong)((ulonglong)uVar23 * 0x100000003) >> 0x3f) *
                                      0x7fffffff;
                    uVar15 = uVar23 >> 0x1d;
                    if (uVar23 >> 0x1d == 0) {
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 8) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2) + -1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + -1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2);
                    }
                    else if (uVar15 == 1) {
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 8) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2) + 1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + -1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2);
                    }
                    else if (uVar15 == 2) {
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 8) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2) + -1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + 1;
                    }
                    else if (uVar15 == 3) {
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 8) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2) + 1;
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2);
                      *(short *)(*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) +
                                (longlong)sVar29 * 2) =
                           (short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2) + 1;
                    }
                  }
                }
                else {
                  if ((uVar15 == 2) &&
                     (uVar23 = (uint)*(short *)(lVar48 + -2 + (longlong)sVar29 * 2),
                     uVar28 = (ulonglong)uVar23,
                     (int)*(short *)(lVar24 + -2 + (longlong)sVar29 * 2) - uVar23 == 2)) {
                    bVar56 = true;
                    uVar26 = 2;
                  }
                  else {
                    lVar25 = (longlong)sVar29 * 2 + -2;
                    *(undefined2 *)(lVar48 + (longlong)sVar29 * 2) =
                         *(undefined2 *)(lVar48 + -2 + (longlong)sVar29 * 2);
                    lVar24 = *(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x10);
                    *(undefined2 *)(lVar24 + (longlong)sVar29 * 2) =
                         *(undefined2 *)(lVar25 + lVar24);
                    lVar24 = *(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x18);
                    *(undefined2 *)(lVar24 + (longlong)sVar29 * 2) =
                         *(undefined2 *)(lVar25 + lVar24);
                    uVar28 = (ulonglong)sVar29;
                    uVar26 = *(ulonglong *)(*(longlong *)(lStack_268 + 0x40) + 0x20);
                    *(undefined2 *)(uVar26 + uVar28 * 2) = *(undefined2 *)(lVar25 + uVar26);
                    lVar25 = *(longlong *)(lStack_268 + 0x40);
                  }
                  if (bVar56) goto LAB_14141b58f;
                }
                bVar57 = true;
                bVar56 = true;
                sVar30 = (*(short *)(lStack_268 + 6) / 0x30) * 0x30;
                sVar44 = (*(short *)(lStack_268 + 4) / 0x30) * 0x30;
                if (((sVar44 < 0) || (_DAT_14250a55c <= sVar44)) ||
                   ((sVar30 < 0 || ((_DAT_14250a560 <= sVar30 || (_DAT_14250a548 == 0)))))) {
                  plVar19 = *(longlong **)(lStack_268 + 0x40);
                  lVar25 = (longlong)sVar29 * 2;
                  lVar24 = (longlong)sVar29 * 2;
                }
                else {
                  lVar25 = *(longlong *)
                            (*(longlong *)(_DAT_14250a548 + ((longlong)sVar44 >> 4) * 8) +
                            ((longlong)sVar30 >> 4) * 8);
                  if (lVar25 != 0) {
                    lVar24 = *(longlong *)(lStack_268 + 0x40);
                    sVar30 = *(short *)(*(longlong *)(lVar24 + 8) + (longlong)sVar29 * 2);
                    sVar44 = *(short *)(*(longlong *)(lVar24 + 0x10) + (longlong)sVar29 * 2);
                    uStack_244 = CONCAT22(uStack_244._2_2_,sVar44);
                    sVar31 = *(short *)(*(longlong *)(lVar24 + 0x18) + (longlong)sVar29 * 2);
                    uStack_258 = CONCAT62(uStack_258._2_6_,sVar31);
                    sVar53 = *(short *)(*(longlong *)(lVar24 + 0x20) + (longlong)sVar29 * 2);
                    plVar19 = *(longlong **)(lVar25 + 0x1a68);
                    plStack_1f8 = *(longlong **)(lVar25 + 0x1a70);
                    while (sVar29 = (short)uStack_248, plVar19 < plStack_1f8) {
                      lVar25 = *plVar19;
                      if (lVar25 == lStack_268) {
LAB_14141bac2:
                        plVar19 = plVar19 + 1;
                      }
                      else {
                        sVar29 = *(short *)(lStack_268 + 8) - *(short *)(lVar25 + 8);
                        if (sVar29 == 0) {
                          sVar13 = -(short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2);
                          if (((short)(*(short *)(lStack_268 + 4) + sVar30 + sVar13) <=
                               *(short *)(lVar25 + 4)) &&
                             (*(short *)(lVar25 + 4) <=
                              (short)(sVar13 + sVar44 + *(short *)(lStack_268 + 4)))) {
                            sVar13 = -(short)(*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2)
                            ;
                            if (((short)(sVar13 + sVar31 + *(short *)(lStack_268 + 6)) <=
                                 *(short *)(lVar25 + 6)) &&
                               (*(short *)(lVar25 + 6) <=
                                (short)(*(short *)(lStack_268 + 6) + sVar53 + sVar13))) {
                              lVar25 = (longlong)(short)uStack_248 * 2;
                              lVar24 = (longlong)(short)uStack_248 * 2;
                              plVar19 = *(longlong **)(lStack_268 + 0x40);
                              sVar29 = (short)uStack_248;
                              goto LAB_14141bae9;
                            }
                          }
                        }
                        plVar36 = *(longlong **)(lVar25 + 0x40);
                        if (plVar36 == (longlong *)0x0) goto LAB_14141bac2;
                        sVar55 = (*(short *)(lStack_268 + 4) - *(short *)(lVar25 + 4)) + sVar44;
                        sVar13 = (sVar31 - *(short *)(lVar25 + 6)) + *(short *)(lStack_268 + 6);
                        if ((sVar29 < 0) || ((int)plVar36[5] <= (int)sVar29)) goto LAB_14141bac2;
                        sVar45 = (*(short *)(lStack_268 + 4) - *(short *)(lVar25 + 4)) + sVar30;
                        if (sVar45 <= sVar55) {
                          sVar11 = sVar13;
                          do {
                            for (; sVar11 <= (short)((*(short *)(lStack_268 + 6) -
                                                     *(short *)(lVar25 + 6)) + sVar53);
                                sVar11 = sVar11 + 1) {
                              if (-1 < sVar45) {
                                if (((((int)sVar45 < *(int *)((longlong)plVar36 + 0x2c)) &&
                                     (-1 < sVar11)) && ((int)sVar11 < (int)plVar36[6])) &&
                                   (bVar56 = bVar57,
                                   (*(byte *)(*(longlong *)((longlong)sVar29 * 8 + *plVar36) +
                                             (longlong)
                                             (*(int *)((longlong)plVar36 + 0x2c) * (int)sVar11 +
                                             (int)sVar45) * 2) & 1) != 0)) {
                                  bVar57 = false;
                                  bVar56 = false;
                                }
                              }
                            }
                            sVar45 = sVar45 + 1;
                            sVar11 = sVar13;
                          } while (sVar45 <= sVar55);
                        }
                        sVar29 = (short)uStack_248;
                        if (!bVar56) break;
                        plVar19 = plVar19 + 1;
                      }
                    }
                  }
                  plVar19 = *(longlong **)(lStack_268 + 0x40);
                  lVar25 = (longlong)sVar29 * 2;
                  lVar24 = (longlong)sVar29 * 2;
                  if (!bVar56) {
LAB_14141bae9:
                    *(undefined2 *)(lVar25 + plVar19[1]) = (undefined2)uStack_220;
                    *(undefined2 *)(lVar24 + *(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20))
                         = (undefined2)uStack_224;
                    *(undefined2 *)
                     (*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 8) + (longlong)sVar29 * 2) =
                         (undefined2)uStack_200;
                    *(undefined2 *)
                     (*(longlong *)(*(longlong *)(lStack_268 + 0x40) + 0x20) + (longlong)sVar29 * 2)
                         = (undefined2)uStack_228;
                    goto LAB_14141bc38;
                  }
                }
                sVar30 = *(short *)(lVar25 + plVar19[1]);
                uStack_258 = CONCAT62(uStack_258._2_6_,sVar30);
                if (sVar30 <= *(short *)(lVar24 + plVar19[2])) {
                  lVar25 = (longlong)sVar29;
                  uVar23 = uStack_21c;
                  do {
                    sVar29 = *(short *)(plVar19[3] + lVar25 * 2);
                    if (sVar29 <= *(short *)(plVar19[4] + lVar25 * 2)) {
                      do {
                        lVar48 = (longlong)
                                 ((int)sVar29 * *(int *)((longlong)plVar19 + 0x2c) + (int)sVar30);
                        lVar24 = *(longlong *)(*plVar19 + lVar25 * 8);
                        uVar51 = *(ushort *)(lVar24 + lVar48 * 2);
                        if (-1 < (char)uVar51) {
                          *(ushort *)(lVar24 + lVar48 * 2) = uVar51 & 0xf8ff | 0x800;
                          if ((uVar51 & 1) == 0) {
                            if ((uVar51 & 0x1e) == 0) {
                              if ((uVar51 & 0x20) != 0) {
                                uVar23 = uVar23 + -1;
                              }
                            }
                            else {
                              uStack_210 = uStack_210 - 1;
                            }
                            *(ushort *)(lVar24 + lVar48 * 2) = uVar51 & 0xf8ff | 0x801;
                          }
                        }
                        plVar19 = *(longlong **)(lStack_268 + 0x40);
                        sVar29 = sVar29 + 1;
                      } while (sVar29 <= *(short *)(plVar19[4] + lVar25 * 2));
                      uStack_21c = uVar23;
                      sVar30 = (short)uStack_258;
                    }
                    sVar30 = sVar30 + 1;
                    uStack_258 = CONCAT62(uStack_258._2_6_,sVar30);
                    sVar29 = (short)uStack_248;
                  } while (sVar30 <= *(short *)(plVar19[2] + lVar25 * 2));
                }
              }
LAB_14141bc38:
              lVar25 = *(longlong *)(lStack_268 + 0x40);
              sVar29 = sVar29 + 1;
              uStack_248 = CONCAT22(uStack_248._2_2_,sVar29);
              param_1 = lStack_268;
              uVar23 = (uint)lStack_1e8;
            } while (sVar29 <= *(short *)(lVar25 + 0x44));
          }
        }
        piVar49 = piStack_238;
        uVar23 = uStack_24c;
        iVar14 = iStack_22c;
        iVar22 = iStack_240;
        uVar15 = uStack_250;
        iVar52 = iStack_260;
        if (*(short *)(*(longlong *)(param_1 + 0x40) + 0x44) != 0) {
          iVar22 = iStack_240 * *(int *)(lStack_208 + 0x734);
          uStack_220 = iVar22 / 10 - uStack_210;
          if (9 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x2c)) {
            uStack_220 = iVar22 / 2 - uStack_210;
          }
          uVar23 = uStack_220;
          if (0 < (int)uStack_220) {
LAB_14141bcd7:
            if (0 < (int)uVar23) {
              plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,uVar23 - 1);
              uStack_200 = 5;
              do {
                plVar19 = (longlong *)0x0;
                lVar25 = *(longlong *)(param_1 + 0x40);
                uStack_200 = uStack_200 - 1;
                sVar29 = *(short *)(lVar25 + 0x44);
                plStack_1e0 = (longlong *)CONCAT44(plStack_1e0._4_4_,*(int *)(lVar25 + 0x2c) + -1);
                uStack_228 = *(int *)(lVar25 + 0x30) - 1;
                uVar23 = *(int *)(lVar25 + 0x2c) / 2;
                uVar15 = *(int *)(lVar25 + 0x30) / 2;
                if ((uint)(int)sVar29 < 2) {
                  uStack_244 = 0;
                }
                else {
                  uVar33 = FUN_140ece790();
                  uStack_244 = (uVar33 + (int)((longlong)((ulonglong)uVar33 * 0x100000003) >> 0x3f)
                                         * 0x7fffffff) /
                               ((int)(0x7fffffff / (ulonglong)(uint)(int)sVar29) + 1U);
                }
                plVar36 = *(longlong **)(lStack_268 + 0x40);
                uVar26 = (longlong)(int)uStack_244 * 8 + 8;
                uStack_258 = uVar26;
                iVar22 = *(int *)((longlong)plVar36 + 0x2c);
                plVar27 = (longlong *)(longlong)(int)(iVar22 * uVar15 + uVar23);
                plVar21 = (longlong *)*plVar36;
                if ((*(byte *)(plVar21[(longlong)(int)uStack_244 + 1] + (longlong)plVar27 * 2) & 1)
                    == 0) {
                  if (iVar22 < 0) {
                    iVar22 = iVar22 + 1;
                  }
                  iVar52 = (int)plVar36[6];
                  iVar22 = (iVar22 >> 1) + -2;
                  lStack_1e8 = CONCAT44(lStack_1e8._4_4_,iVar22);
                  if (iVar52 < 0) {
                    iVar52 = iVar52 + 1;
                  }
                  uVar33 = -iVar22;
                  iVar52 = (iVar52 >> 1) + -2;
                  if ((int)uVar33 <= iVar22) {
                    uVar40 = -iVar52;
                    uVar23 = uVar23 + uVar33;
                    plVar36 = plVar19;
                    plVar42 = plVar19;
                    do {
                      plVar27 = (longlong *)(ulonglong)uVar40;
                      if ((int)uVar40 <= iVar52) {
                        plVar21 = *(longlong **)(lStack_268 + 0x40);
                        lVar25 = *(longlong *)(uVar26 + *plVar21);
                        iVar14 = *(int *)((longlong)plVar21 + 0x2c);
                        iVar38 = (uVar40 + uVar15) * iVar14 + uVar23;
                        do {
                          iVar46 = (int)plVar27;
                          if ((*(byte *)(lVar25 + (longlong)iVar38 * 2) & 1) != 0) {
                            uVar16 = -uVar33;
                            if ((int)-uVar33 < 0) {
                              uVar16 = uVar33;
                            }
                            plVar21 = (longlong *)(ulonglong)(uint)-iVar46;
                            if (-iVar46 < 0) {
                              plVar21 = plVar27;
                            }
                            plVar27 = (longlong *)(ulonglong)uVar16;
                            if ((int)uVar16 < (int)plVar21) {
                              plVar27 = plVar21;
                            }
                            plVar35 = (longlong *)0x0;
                            iVar39 = 0;
                            if (((int)plVar42 < (int)plVar27) ||
                               (((int)plVar27 == (int)plVar42 &&
                                (plVar35 = plVar36, plVar27 = plVar42, iVar39 = (int)plVar19,
                                (longlong)plVar36 < 0x19)))) {
                              auStack_1d8[(longlong)plVar35 * 2] = uVar23;
                              plVar19 = (longlong *)(ulonglong)(iVar39 + 1);
                              auStack_1d8[(longlong)plVar35 * 2 + 1] = iVar46 + uVar15;
                              plVar36 = (longlong *)((longlong)plVar35 + 1);
                              plVar42 = plVar27;
                            }
                          }
                          plVar27 = (longlong *)(ulonglong)(iVar46 + 1U);
                          iVar38 = iVar38 + iVar14;
                          uVar26 = uStack_258;
                        } while ((int)(iVar46 + 1U) <= iVar52);
                      }
                      uVar33 = uVar33 + 1;
                      uVar23 = uVar23 + 1;
                    } while ((int)uVar33 <= iVar22);
                    if (0 < (int)(uint)plVar19) {
                      if ((uint)plVar19 < 2) {
                        uVar15 = 0;
                      }
                      else {
                        uVar23 = FUN_140ece790();
                        uVar23 = uVar23 + (int)((longlong)((ulonglong)uVar23 * 0x100000003) >> 0x3f)
                                          * 0x7fffffff;
                        uVar15 = (int)(0x7fffffff / (ulonglong)plVar19) + 1;
                        plVar21 = (longlong *)(ulonglong)uVar15;
                        uVar15 = uVar23 / uVar15;
                        plVar27 = (longlong *)((ulonglong)uVar23 % (ulonglong)plVar21);
                      }
                      uVar23 = auStack_1d8[(longlong)(int)uVar15 * 2];
                      uVar15 = auStack_1d8[(longlong)(int)uVar15 * 2 + 1];
                      goto LAB_14141bef1;
                    }
                  }
                }
                else {
LAB_14141bef1:
                  iVar22 = uVar15 + 1;
                  uStack_248 = CONCAT22(uStack_248._2_2_,(short)uVar23);
                  uStack_258 = CONCAT62(uStack_258._2_6_,(short)uVar15);
                  iVar52 = uVar15 - 1;
                  uStack_224 = 10;
                  iVar14 = uVar23 + 1;
                  lStack_1e8 = (longlong)(int)uStack_244 * 8 + 8;
                  sVar29 = (short)uVar23;
                  do {
                    uVar16 = FUN_140ece790(plVar21,plVar27);
                    uVar16 = uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                      0x7fffffff;
                    uVar17 = uVar16 >> 0x1d;
                    uVar33 = uVar15;
                    uVar40 = uVar23;
                    if (uVar16 >> 0x1d == 0) {
                      if (((0 < (int)uVar23) &&
                          ((int)sVar29 - *(int *)(lStack_208 + 0x740) < (int)uVar23)) &&
                         (((int)uVar23 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2 &&
                          ((int)uVar23 <= (int)sVar29)))) {
                        uVar40 = uVar23 - 1;
                        iVar14 = iVar14 + -1;
                      }
                    }
                    else if (uVar17 == 1) {
                      if ((((0 < (int)uVar15) &&
                           ((int)(short)uStack_258 - *(int *)(lStack_208 + 0x740) < (int)uVar15)) &&
                          ((int)uVar15 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2)) &&
                         ((int)uVar15 <= (int)(short)uStack_258)) {
                        iVar52 = iVar52 + -1;
                        iVar22 = iVar22 + -1;
                        uVar33 = uVar15 - 1;
                      }
                    }
                    else if (uVar17 == 2) {
                      if (((*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2 <= (int)uVar23) &&
                          ((int)uVar23 < *(int *)(lStack_208 + 0x740) + (int)sVar29)) &&
                         (((int)uVar23 < (int)plStack_1e0 && ((int)sVar29 <= (int)uVar23)))) {
                        iVar14 = iVar14 + 1;
                        uVar40 = uVar23 + 1;
                      }
                    }
                    else if (((uVar17 == 3) &&
                             (*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2 <= (int)uVar15))
                            && (((int)uVar15 < *(int *)(lStack_208 + 0x740) + (int)(short)uStack_258
                                && (((int)uVar15 < (int)uStack_228 &&
                                    ((int)(short)uStack_258 <= (int)uVar15)))))) {
                      iVar52 = iVar52 + 1;
                      iVar22 = iVar22 + 1;
                      uVar33 = uVar15 + 1;
                    }
                    plVar21 = *(longlong **)(lStack_268 + 0x40);
                    uVar16 = *(uint *)((longlong)plVar21 + 0x2c);
                    plVar27 = (longlong *)(ulonglong)uVar16;
                    lVar24 = (longlong)(int)(uVar16 * uVar33 + uVar40);
                    lVar25 = *(longlong *)(lStack_1e8 + *plVar21);
                    uVar51 = *(ushort *)(lVar25 + lVar24 * 2);
                    puVar1 = (ushort *)(lVar25 + lVar24 * 2);
                    if ((char)uVar51 < '\0') break;
                    if ((uVar51 & 0x9f) == 0) {
                      uVar17 = 0;
                      if ((1 < (int)uVar40) && ((*(byte *)(lVar25 + -2 + lVar24 * 2) & 0x9f) != 0))
                      {
                        uVar17 = 1;
                      }
                      if ((iVar14 < (int)uVar16) &&
                         ((*(byte *)(lVar25 + 2 + lVar24 * 2) & 0x9f) != 0)) {
                        uVar17 = uVar17 + 1;
                      }
                      if ((0 < iVar52) &&
                         (plVar27 = (longlong *)(ulonglong)(uVar16 * iVar52),
                         (*(byte *)(lVar25 + (longlong)(int)(uVar40 + uVar16 * iVar52) * 2) & 0x9f)
                         != 0)) {
                        uVar17 = uVar17 + 1;
                      }
                      if (iVar22 < (int)plVar21[6]) {
                        plVar27 = (longlong *)
                                  (longlong)
                                  (int)(iVar22 * *(int *)((longlong)plVar21 + 0x2c) + uVar40);
                        plVar21 = *(longlong **)(lStack_1e8 + *plVar21);
                        if ((*(byte *)((longlong)plVar21 + (longlong)plVar27 * 2) & 0x9f) != 0) {
                          uVar17 = uVar17 + 1;
                        }
                      }
                      if (uVar17 < 2) {
                        if ((uVar40 == uVar23) && (uVar33 == uVar15)) {
LAB_14141c3a4:
                          if ((int)uVar33 < (int)uVar15) {
                            *puVar1 = *puVar1 | 0x230;
                            puVar1 = (ushort *)
                                     (*(longlong *)
                                       (**(longlong **)(lStack_268 + 0x40) + 8 +
                                       (longlong)(int)uStack_244 * 8) +
                                     (longlong)
                                     (int)(uVar15 * *(int *)((longlong)
                                                             *(longlong **)(lStack_268 + 0x40) +
                                                            0x2c) + uVar23) * 2);
                            *puVar1 = *puVar1 | 4;
                          }
                          else if ((int)uVar23 < (int)uVar40) {
                            *puVar1 = *puVar1 | 0x322;
                            puVar1 = (ushort *)
                                     (*(longlong *)
                                       (**(longlong **)(lStack_268 + 0x40) + 8 +
                                       (longlong)(int)uStack_244 * 8) +
                                     (longlong)
                                     (int)(uVar15 * *(int *)((longlong)
                                                             *(longlong **)(lStack_268 + 0x40) +
                                                            0x2c) + uVar23) * 2);
                            *puVar1 = *puVar1 | 8;
                          }
                          else {
                            if ((int)uVar33 <= (int)uVar15) goto LAB_14141c3b7;
                            *puVar1 = *puVar1 | 0x124;
                            puVar1 = (ushort *)
                                     (*(longlong *)
                                       (**(longlong **)(lStack_268 + 0x40) + 8 +
                                       (longlong)(int)uStack_244 * 8) +
                                     (longlong)
                                     (int)(uVar15 * *(int *)((longlong)
                                                             *(longlong **)(lStack_268 + 0x40) +
                                                            0x2c) + uVar23) * 2);
                            *puVar1 = *puVar1 | 0x10;
                          }
                        }
                        else {
                          *puVar1 = *puVar1 & 0xf8ff;
                          uStack_210 = uStack_210 + 1;
                          uStack_220 = uStack_220 - 1;
                          if ((*puVar1 & 0x20) != 0) {
                            uStack_21c = uStack_21c + -1;
                          }
                          if ((int)uVar23 <= (int)uVar40) goto LAB_14141c3a4;
                          *puVar1 = *puVar1 | 0x428;
                          puVar1 = (ushort *)
                                   (*(longlong *)
                                     (**(longlong **)(lStack_268 + 0x40) + 8 +
                                     (longlong)(int)uStack_244 * 8) +
                                   (longlong)
                                   (int)(uVar15 * *(int *)((longlong)
                                                           *(longlong **)(lStack_268 + 0x40) + 0x2c)
                                        + uVar23) * 2);
                          *puVar1 = *puVar1 | 2;
                        }
                        param_1 = lStack_268;
                        if (((int)uStack_200 < 1) ||
                           (uVar23 = (uint)plStack_1f8, (int)uStack_220 < 1)) goto LAB_14141c1f6;
                        goto LAB_14141bcd7;
                      }
                      break;
                    }
LAB_14141c3b7:
                    uStack_224 = uStack_224 - 1;
                    uVar15 = uVar33;
                    sVar29 = (short)uStack_248;
                    uVar23 = uVar40;
                  } while (0 < (int)uStack_224);
                }
                param_1 = lStack_268;
              } while (0 < (int)uStack_200);
            }
          }
LAB_14141c1f6:
          iVar22 = iStack_240 * *(int *)(lStack_208 + 0x738);
          uStack_244 = iVar22 / 10 - uStack_21c;
          if (9 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x2c)) {
            uStack_244 = iVar22 / 2 - uStack_21c;
          }
          if (0 < (int)uStack_244) {
            do {
              iVar22 = iStack_260;
              lVar24 = lStack_268;
              lVar25 = *(longlong *)(param_1 + 0x40);
              uVar23 = *(uint *)(lStack_208 + 0x744);
              if ((9 < *(int *)(lVar25 + 0x2c)) && (0 < (int)uVar23)) {
                uVar23 = *(int *)(lVar25 + 0x2c) / 2;
              }
              uVar26 = 0;
              uVar15 = 0;
              if (iStack_260 < 0x91) {
                uVar15 = uVar23;
              }
              uVar33 = (int)*(short *)(param_1 + 4) % 0x30;
              uVar23 = uVar33;
              if (-1 < (int)(uVar33 - uVar15)) {
                uVar23 = uVar15;
              }
              uVar40 = (int)*(short *)(lStack_268 + 6) % 0x30;
              uVar15 = uVar40;
              if (-1 < (int)(uVar40 - uVar23)) {
                uVar15 = uVar23;
              }
              if (0x2f < (int)(uVar15 + uVar33)) {
                uVar15 = 0x2f - uVar33;
              }
              if (0x2f < (int)(uVar15 + uVar40)) {
                uVar15 = 0x2f - uVar40;
              }
              iVar52 = *(int *)(lVar25 + 0x2c);
              iVar14 = *(int *)(lVar25 + 0x30);
              uVar23 = iVar52 / 2;
              uVar33 = iVar14 / 2;
              uStack_224 = 0;
              if (-1 < (int)(uVar23 - uVar15)) {
                uStack_224 = uVar23 - uVar15;
              }
              uStack_248 = uVar33 + uVar15;
              uStack_200 = iVar52 - 1;
              if ((int)(uVar23 + uVar15) < iVar52) {
                uStack_200 = uVar23 + uVar15;
              }
              uVar40 = 0;
              uStack_220 = uVar33 - uVar15;
              if ((int)(uVar33 - uVar15) < 0) {
                uStack_220 = uVar40;
              }
              if (iVar14 <= (int)(uVar33 + uVar15)) {
                uStack_248 = iVar14 - 1;
              }
              sVar29 = *(short *)(lVar25 + 0x44);
              if (1 < (uint)(int)sVar29) {
                uVar15 = FUN_140ece790();
                uVar40 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) /
                         ((int)(0x7fffffff / (ulonglong)(uint)(int)sVar29) + 1U);
              }
              plVar36 = *(longlong **)(lVar24 + 0x40);
              iVar52 = uVar40 + 1;
              uStack_258 = CONCAT44(uStack_258._4_4_,iVar52);
              plVar19 = (longlong *)((longlong)iVar52 * 8);
              plStack_1e0 = plVar19;
              uVar28 = *(ulonglong *)((longlong)plVar19 + *plVar36);
              if ((*(byte *)(uVar28 + (longlong)
                                      (int)(*(int *)((longlong)plVar36 + 0x2c) * uVar33 + uVar23) *
                                      2) & 1) == 0) {
                iVar22 = *(int *)((longlong)plVar36 + 0x2c) / 2 + -1;
                plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iVar22);
                uVar15 = -iVar22;
                iVar52 = (int)plVar36[6] / 2 + -1;
                param_1 = lStack_268;
                if (iVar22 < (int)uVar15) break;
                uVar40 = -iVar52;
                uVar23 = uVar23 + uVar15;
                uVar37 = uVar26;
                uVar43 = uVar26;
                do {
                  uVar28 = (ulonglong)uVar40;
                  if ((int)uVar40 <= iVar52) {
                    iVar14 = *(int *)((longlong)*(longlong **)(lVar24 + 0x40) + 0x2c);
                    lVar25 = *(longlong *)((longlong)plVar19 + **(longlong **)(lVar24 + 0x40));
                    iVar38 = (uVar33 + uVar40) * iVar14 + uVar23;
                    do {
                      iVar39 = (int)uVar26;
                      iVar46 = (int)uVar28;
                      if ((*(byte *)(lVar25 + (longlong)iVar38 * 2) & 1) != 0) {
                        uVar16 = -uVar15;
                        if ((int)-uVar15 < 0) {
                          uVar16 = uVar15;
                        }
                        uVar20 = (ulonglong)(uint)-iVar46;
                        if (-iVar46 < 0) {
                          uVar20 = uVar28;
                        }
                        uVar28 = (ulonglong)uVar16;
                        if ((int)uVar16 < (int)uVar20) {
                          uVar28 = uVar20;
                        }
                        if ((int)uVar43 < (int)uVar28) {
                          iVar39 = 0;
                          uVar37 = 0;
                          uVar43 = uVar28;
                        }
                        else if (((int)uVar28 != (int)uVar43) || (0x18 < (longlong)uVar37))
                        goto LAB_14141c5bf;
                        auStack_1d8[uVar37 * 2] = uVar23;
                        uVar26 = (ulonglong)(iVar39 + 1);
                        auStack_1d8[uVar37 * 2 + 1] = iVar46 + uVar33;
                        uVar37 = uVar37 + 1;
                      }
LAB_14141c5bf:
                      uVar28 = (ulonglong)(iVar46 + 1U);
                      iVar38 = iVar38 + iVar14;
                      lVar24 = lStack_268;
                      plVar19 = plStack_1e0;
                    } while ((int)(iVar46 + 1U) <= iVar52);
                  }
                  uVar15 = uVar15 + 1;
                  uVar23 = uVar23 + 1;
                } while ((int)uVar15 <= iVar22);
                if ((int)(uint)uVar26 < 1) break;
                if ((uint)uVar26 < 2) {
                  uVar15 = 0;
                }
                else {
                  uVar23 = FUN_140ece790();
                  uVar23 = uVar23 + (int)((longlong)((ulonglong)uVar23 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                  uVar33 = (int)(0x7fffffff / uVar26) + 1;
                  uVar15 = uVar23 / uVar33;
                  uVar28 = (ulonglong)uVar23 % (ulonglong)uVar33;
                }
                uVar23 = auStack_1d8[(longlong)(int)uVar15 * 2];
                uVar33 = auStack_1d8[(longlong)(int)uVar15 * 2 + 1];
                iVar22 = iStack_260;
                iVar52 = (int)uStack_258;
              }
              uVar15 = *(int *)(*(longlong *)(lVar24 + 0x40) + 0x28) - 1;
              uVar26 = (ulonglong)uVar15;
              if ((0x90 < iVar22) && (1 < (int)uVar15)) {
                if ((int)(0x97U - iVar22) <= (int)uVar15) {
                  uVar15 = 0x97U - iVar22;
                }
                uVar26 = (ulonglong)uVar15;
                if ((int)uVar15 < 2) {
                  uVar26 = 2;
                }
              }
              iVar14 = 10;
              lVar25 = (longlong)iVar52;
              iVar22 = (int)uVar26;
              while( true ) {
                uVar15 = FUN_140ece790(uVar26,uVar28);
                uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x1999999a;
                uVar40 = uVar23;
                iVar38 = (int)uStack_258;
                uVar16 = uVar33;
                if (uVar15 == 0) {
                  if (((int)uStack_224 < (int)uVar23) &&
                     ((int)uVar23 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2)) {
                    uVar40 = uVar23 - 1;
                  }
                  else if ((*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2 <= (int)uVar23) &&
                          ((int)uVar23 < (int)uStack_200)) {
                    uVar40 = uVar23 + 1;
                  }
                }
                else if (uVar15 == 1) {
                  if (((int)uStack_220 < (int)uVar33) &&
                     ((int)uVar33 <= *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2)) {
                    uVar16 = uVar33 - 1;
                  }
                  else if ((*(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2 <= (int)uVar33) &&
                          ((int)uVar33 < (int)uStack_248)) {
                    uVar16 = uVar33 + 1;
                  }
                }
                else if (uVar15 == 2) {
                  iVar46 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c) / 2;
                  if (((int)uVar23 < iVar46) || ((int)uStack_200 <= (int)uVar23)) {
                    if (((int)uStack_224 < (int)uVar23) && ((int)uVar23 <= iVar46)) {
                      uVar40 = uVar23 - 1;
                    }
                  }
                  else {
                    uVar40 = uVar23 + 1;
                  }
                }
                else if (uVar15 == 3) {
                  iVar46 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30) / 2;
                  if (((int)uVar33 < iVar46) || ((int)uStack_248 <= (int)uVar33)) {
                    if (((int)uStack_220 < (int)uVar33) && ((int)uVar33 <= iVar46)) {
                      uVar16 = uVar33 - 1;
                    }
                  }
                  else {
                    uVar16 = uVar33 + 1;
                  }
                }
                else if (((uVar15 == 4) && (iVar14 == 10)) && (lVar25 < iVar22)) {
                  iVar38 = (int)uStack_258 + 1;
                  uStack_258 = CONCAT44(uStack_258._4_4_,iVar38);
                  lVar25 = lVar25 + 1;
                }
                uVar28 = (ulonglong)
                         (int)(uVar16 * *(int *)((longlong)*(longlong **)(lStack_268 + 0x40) + 0x2c)
                              + uVar40);
                uVar26 = *(ulonglong *)(**(longlong **)(lStack_268 + 0x40) + lVar25 * 8);
                uVar51 = *(ushort *)(uVar26 + uVar28 * 2);
                param_1 = lStack_268;
                if ((char)uVar51 < '\0') goto LAB_14141c8c6;
                if ((uVar51 & 0x3f) == 0) break;
                iVar14 = iVar14 + -1;
                uVar23 = uVar40;
                iVar52 = iVar38;
                uVar33 = uVar16;
                if (iVar14 < 1) goto LAB_14141c8c6;
              }
              uVar51 = uVar51 & 0xf8ff;
              if (iVar52 < iVar38) {
                uVar51 = uVar51 | 0x600;
              }
              else if ((int)uVar16 < (int)uVar33) {
                uVar51 = uVar51 | 0x200;
              }
              else if ((int)uVar33 < (int)uVar16) {
                uVar51 = uVar51 | 0x100;
              }
              else if ((int)uVar40 < (int)uVar23) {
                uVar51 = uVar51 | 0x400;
              }
              else if ((int)uVar23 < (int)uVar40) {
                uVar51 = uVar51 | 0x300;
              }
              uStack_21c = uStack_21c + 1;
              *(ushort *)(uVar26 + uVar28 * 2) = uVar51 | 0x20;
              uStack_244 = uStack_244 - 1;
              if ((int)uStack_244 < 1) break;
            } while( true );
          }
LAB_14141c8c6:
          lVar25 = lStack_268;
          piVar49 = piStack_238;
          uVar23 = uStack_24c;
          iVar14 = iStack_22c;
          iVar22 = iStack_240;
          uVar15 = uStack_250;
          iVar52 = iStack_260;
          if (0 < (iStack_240 * *(int *)(lStack_208 + 0x75c)) / 10 - iStack_1fc) {
            lVar24 = *(longlong *)(param_1 + 0x40);
            iVar22 = *(int *)(lStack_208 + 0x760);
            iVar38 = *(int *)(lVar24 + 0x2c);
            if ((iVar38 < 10) || (iVar22 < 1)) {
              iVar14 = iVar38 / 2;
              bVar57 = SBORROW4(iVar22,iVar14);
              iVar52 = iVar22 - iVar14;
              bVar56 = iVar22 == iVar14;
              if (iVar14 < iVar22) goto LAB_14141c945;
            }
            else {
              iVar22 = iVar38 / 2;
LAB_14141c945:
              iVar14 = iVar38 / 2;
              bVar57 = SBORROW4(iVar22,iVar14);
              iVar52 = iVar22 - iVar14;
              bVar56 = iVar22 == iVar14;
            }
            iVar46 = iVar38 / 2;
            iVar14 = iVar46;
            if (bVar56 || bVar57 != iVar52 < 0) {
              iVar14 = iVar22;
            }
            iVar22 = 0;
            if (iStack_260 < 0x91) {
              iVar22 = iVar14;
            }
            iVar14 = (int)*(short *)(lStack_268 + 4) % 0x30;
            iVar52 = iVar14;
            if (-1 < iVar14 - iVar22) {
              iVar52 = iVar22;
            }
            iVar22 = (int)*(short *)(lStack_268 + 6) % 0x30;
            iVar39 = iVar22;
            if (-1 < iVar22 - iVar52) {
              iVar39 = iVar52;
            }
            iVar52 = iVar38;
            if (0x2f < iVar39 + iVar14) {
              iVar52 = *(int *)(lVar24 + 0x2c);
              iVar39 = 0x2f - iVar14;
            }
            if (0x2f < iVar39 + iVar22) {
              iVar39 = 0x2f - iVar22;
              iVar38 = iVar52;
            }
            iVar22 = *(int *)(lVar24 + 0x30);
            iVar18 = iVar22 / 2;
            iVar47 = 0;
            if (-1 < iVar46 - iVar39) {
              iVar47 = iVar46 - iVar39;
            }
            iVar54 = iVar18 + iVar39;
            iVar3 = iVar38 + -1;
            if (iVar39 + iVar46 < iVar38) {
              iVar3 = iVar39 + iVar46;
            }
            iVar39 = iVar18 - iVar39;
            if (iVar39 < 0) {
              iVar39 = 0;
            }
            if (iVar22 <= iVar54) {
              iVar54 = iVar22 + -1;
            }
            iVar46 = 10;
            iVar38 = iVar38 / 2;
            do {
              lVar24 = *(longlong *)(lVar25 + 0x40);
              pbVar50 = (byte *)((longlong)(*(int *)(lVar24 + 0x2c) * iVar18 + iVar38) +
                                **(longlong **)(lVar24 + 0x38));
              param_1 = lVar25;
              piVar49 = piStack_238;
              uVar23 = uStack_24c;
              iVar14 = iStack_22c;
              iVar22 = iStack_240;
              uVar15 = uStack_250;
              iVar52 = iStack_260;
              if ((char)*pbVar50 < '\0') break;
              sVar29 = *(short *)(lVar25 + 8);
              sVar30 = (*(short *)(lVar25 + 6) - (short)(*(int *)(lVar24 + 0x30) / 2)) +
                       (short)iVar18;
              sVar44 = ((short)iVar38 - (short)(*(int *)(lVar24 + 0x2c) / 2)) +
                       *(short *)(lVar25 + 4);
              if (((sVar44 < 0) || (_DAT_14250a55c <= sVar44)) ||
                 ((sVar30 < 0 ||
                  ((((_DAT_14250a560 <= sVar30 || (sVar29 < 1)) || (_DAT_14250a564 <= sVar29 + -1))
                   || ((_DAT_14250a528 == 0 ||
                       (lVar24 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(_DAT_14250a528 + ((longlong)sVar44 >> 4) * 8) +
                                    ((longlong)sVar30 >> 4) * 8) + -8 + (longlong)sVar29 * 8),
                       lVar24 == 0)))))))) break;
              uVar33 = (int)sVar44 & 0x8000000f;
              if ((int)uVar33 < 0) {
                uVar33 = (uVar33 - 1 | 0xfffffff0) + 1;
              }
              uVar40 = (int)sVar30 & 0x8000000f;
              if ((int)uVar40 < 0) {
                uVar40 = (uVar40 - 1 | 0xfffffff0) + 1;
              }
              if (*(short *)(lVar24 + (((longlong)(int)uVar33 + 5) * 0x10 + (longlong)(int)uVar40) *
                                      2) != 0x105) break;
              if ((*pbVar50 & 1) == 0) {
                iStack_1fc = iStack_1fc + 1;
                *pbVar50 = *pbVar50 | 1;
                break;
              }
              iVar46 = iVar46 + -1;
              uVar23 = FUN_140ece790();
              uVar23 = uVar23 + (int)((longlong)((ulonglong)uVar23 * 0x100000003) >> 0x3f) *
                                0x7fffffff >> 0x1d;
              if (uVar23 == 0) {
                if ((iVar47 < iVar38) &&
                   (iVar38 <= *(int *)(*(longlong *)(lVar25 + 0x40) + 0x2c) / 2)) {
                  iVar38 = iVar38 + -1;
                }
                else if (iVar38 < iVar3) {
LAB_14141cc26:
                  iVar38 = iVar38 + 1;
                }
              }
              else if (uVar23 == 1) {
                if ((iVar39 < iVar18) &&
                   (iVar18 <= *(int *)(*(longlong *)(lVar25 + 0x40) + 0x30) / 2)) {
                  iVar18 = iVar18 + -1;
                }
                else if (iVar18 < iVar54) {
                  iVar18 = iVar18 + 1;
                }
              }
              else if (uVar23 == 2) {
                if ((*(int *)(*(longlong *)(lVar25 + 0x40) + 0x2c) / 2 <= iVar38) &&
                   (iVar38 < iVar3)) goto LAB_14141cc26;
                if (iVar47 < iVar38) {
                  iVar38 = iVar38 + -1;
                }
              }
              else if (uVar23 == 3) {
                if ((iVar18 < *(int *)(*(longlong *)(lVar25 + 0x40) + 0x30) / 2) ||
                   (iVar54 <= iVar18)) {
                  if (iVar39 < iVar18) {
                    iVar18 = iVar18 + -1;
                  }
                }
                else {
                  iVar18 = iVar18 + 1;
                }
              }
              piVar49 = piStack_238;
              uVar23 = uStack_24c;
              iVar14 = iStack_22c;
              iVar22 = iStack_240;
              uVar15 = uStack_250;
              iVar52 = iStack_260;
            } while (0 < iVar46);
          }
        }
      }
      else {
        if (iStack_230 == 0) {
          puVar2 = *(undefined8 **)(param_1 + 0x40);
          lVar25 = (longlong)
                   ((*(int *)(puVar2 + 6) / 2) * *(int *)((longlong)puVar2 + 0x2c) +
                   *(int *)((longlong)puVar2 + 0x2c) / 2);
          uVar51 = *(ushort *)(*(longlong *)*puVar2 + lVar25 * 2);
          iVar14 = iStack_22c;
          if ((uVar51 & 0x81) == 0) {
            iVar22 = iVar22 + 1;
            *(ushort *)(*(longlong *)*puVar2 + lVar25 * 2) = uVar51 | 1;
            iStack_240 = iVar22;
          }
        }
        if ((iVar22 != 0) && (iStack_230 % *(int *)(lStack_208 + 0x754) == 0)) {
          plVar19 = *(longlong **)(param_1 + 0x40);
          iVar38 = 1;
          uStack_258 = CONCAT44(uStack_258._4_4_,1);
          if (1 < (int)plVar19[5]) {
            plStack_1f8 = alStack_104;
            lVar24 = 8;
            lVar25 = lStack_208;
            do {
              if ((iVar38 == 1) || ((int)*plStack_1f8 < *(int *)((longlong)plStack_1f8 + -4) + -1))
              {
                iVar52 = (int)*(short *)(param_1 + 4) % 0x30;
                iVar22 = iVar52;
                if (-1 < iVar52 - *(int *)(lVar25 + 0x758)) {
                  iVar22 = *(int *)(lVar25 + 0x758);
                }
                iVar46 = (int)*(short *)(param_1 + 6) % 0x30;
                iVar14 = iVar46;
                if (-1 < iVar46 - iVar22) {
                  iVar14 = iVar22;
                }
                if (0x2f < iVar14 + iVar52) {
                  iVar14 = 0x2f - iVar52;
                }
                if (0x2f < iVar14 + iVar46) {
                  iVar14 = 0x2f - iVar46;
                }
                iVar22 = (int)*plStack_1f8;
                if (iVar22 <= iVar14) {
                  bVar56 = false;
                  iVar52 = *(int *)((longlong)plVar19 + 0x2c) / 2;
                  if (iVar22 == 0) {
                    lVar48 = (longlong)
                             (((int)plVar19[6] / 2) * *(int *)((longlong)plVar19 + 0x2c) + iVar52);
                    puVar1 = (ushort *)(*(longlong *)(lVar24 + *plVar19) + lVar48 * 2);
                    uVar51 = *(ushort *)(*(longlong *)(lVar24 + *plVar19) + lVar48 * 2);
                    if (-1 < (char)uVar51) {
                      *puVar1 = uVar51 | 0x10;
                      if ((uVar51 & 0x700) == 0) {
                        *puVar1 = uVar51 | 0x610;
                      }
                      bVar56 = true;
LAB_14141aaf5:
                      if (bVar56) goto LAB_14141aafa;
                    }
                  }
                  else {
                    iVar14 = 1;
                    if (iVar22 + -1 != 0) {
                      iVar14 = iVar22 + -1;
                    }
                    iVar46 = iVar52 - iVar14;
                    if (iVar46 <= iVar52 + iVar14) {
                      do {
                        lVar25 = *(longlong *)(lVar24 + *plVar19);
                        iVar52 = (int)plVar19[6] / 2 - iVar22;
                        if ((*(byte *)(lVar25 + (longlong)
                                                ((iVar52 + 1) * *(int *)((longlong)plVar19 + 0x2c) +
                                                iVar46) * 2) & 0x10) != 0) {
                          lVar48 = (longlong)(iVar52 * *(int *)((longlong)plVar19 + 0x2c) + iVar46);
                          uVar51 = *(ushort *)(lVar25 + lVar48 * 2);
                          puVar1 = (ushort *)(lVar25 + lVar48 * 2);
                          if (-1 < (char)uVar51) {
                            *puVar1 = uVar51 | 0x10;
                            if ((uVar51 & 0x700) == 0) {
                              *puVar1 = uVar51 | 0x210;
                            }
                            bVar56 = true;
                          }
                        }
                        plVar19 = *(longlong **)(lStack_268 + 0x40);
                        iVar52 = (int)plVar19[6] / 2 + iVar22;
                        lVar25 = *(longlong *)(lVar24 + *plVar19);
                        if ((*(byte *)(lVar25 + (longlong)
                                                ((iVar52 + -1) * *(int *)((longlong)plVar19 + 0x2c)
                                                + iVar46) * 2) & 0x10) != 0) {
                          lVar48 = (longlong)(iVar52 * *(int *)((longlong)plVar19 + 0x2c) + iVar46);
                          uVar51 = *(ushort *)(lVar25 + lVar48 * 2);
                          puVar1 = (ushort *)(lVar25 + lVar48 * 2);
                          if (-1 < (char)uVar51) {
                            *puVar1 = uVar51 | 0x10;
                            if ((uVar51 & 0x700) == 0) {
                              *puVar1 = uVar51 | 0x110;
                            }
                            bVar56 = true;
                          }
                        }
                        plVar19 = *(longlong **)(lStack_268 + 0x40);
                        iVar46 = iVar46 + 1;
                        lVar25 = lStack_208;
                        iVar38 = (int)uStack_258;
                      } while (iVar46 <= *(int *)((longlong)plVar19 + 0x2c) / 2 + iVar14);
                    }
                    iVar52 = (int)plVar19[6] / 2;
                    iVar46 = iVar52 - iVar14;
                    if (iVar46 <= iVar52 + iVar14) {
                      do {
                        lVar48 = (longlong)
                                 (*(int *)((longlong)plVar19 + 0x2c) * iVar46 +
                                 (*(int *)((longlong)plVar19 + 0x2c) / 2 - iVar22));
                        lVar25 = *(longlong *)(lVar24 + *plVar19);
                        if (((*(byte *)(lVar25 + 2 + lVar48 * 2) & 0x10) != 0) &&
                           (uVar51 = *(ushort *)(lVar25 + lVar48 * 2), -1 < (char)uVar51)) {
                          *(ushort *)(lVar25 + lVar48 * 2) = uVar51 | 0x10;
                          if ((uVar51 & 0x700) == 0) {
                            *(ushort *)(lVar25 + lVar48 * 2) = uVar51 | 0x410;
                          }
                          bVar56 = true;
                        }
                        iVar52 = *(int *)((longlong)*(longlong **)(lStack_268 + 0x40) + 0x2c);
                        lVar48 = (longlong)(iVar52 * iVar46 + iVar52 / 2 + iVar22);
                        lVar25 = *(longlong *)(lVar24 + **(longlong **)(lStack_268 + 0x40));
                        if (((*(byte *)(lVar25 + -2 + lVar48 * 2) & 0x10) != 0) &&
                           (uVar51 = *(ushort *)(lVar25 + lVar48 * 2), -1 < (char)uVar51)) {
                          *(ushort *)(lVar25 + lVar48 * 2) = uVar51 | 0x10;
                          if ((uVar51 & 0x700) == 0) {
                            *(ushort *)(lVar25 + lVar48 * 2) = uVar51 | 0x310;
                          }
                          bVar56 = true;
                        }
                        plVar19 = *(longlong **)(lStack_268 + 0x40);
                        iVar46 = iVar46 + 1;
                        lVar25 = lStack_208;
                        iVar38 = (int)uStack_258;
                      } while (iVar46 <= (int)plVar19[6] / 2 + iVar14);
                    }
                    if (iVar22 != 1) {
                      lStack_208 = lVar25;
                      param_1 = lStack_268;
                      if (iVar22 != 3) goto LAB_14141aaf5;
                    }
                    plVar19 = *(longlong **)(lStack_268 + 0x40);
                    iVar52 = *(int *)((longlong)plVar19 + 0x2c);
                    iVar46 = (iVar22 == 3) + 1;
                    iVar39 = iVar52 / 2 - iVar46;
                    iVar14 = (int)plVar19[6] / 2 - iVar46;
                    lVar32 = (longlong)(iVar52 * iVar14 + iVar39);
                    lVar48 = *(longlong *)(lVar24 + *plVar19);
                    uVar51 = *(ushort *)(lVar48 + lVar32 * 2);
                    if ((-1 < (char)uVar51) &&
                       (((*(byte *)(lVar48 + 2 + lVar32 * 2) & 0x10) != 0 ||
                        ((*(byte *)(lVar48 + (longlong)((iVar14 + 1) * iVar52 + iVar39) * 2) & 0x10)
                         != 0)))) {
                      *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x10;
                      if ((uVar51 & 0x700) == 0) {
                        *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x210;
                      }
                      bVar56 = true;
                    }
                    plVar19 = *(longlong **)(lStack_268 + 0x40);
                    iVar14 = *(int *)((longlong)plVar19 + 0x2c);
                    iVar52 = iVar46 + iVar14 / 2;
                    iVar39 = (int)plVar19[6] / 2 - iVar46;
                    lVar32 = (longlong)(iVar14 * iVar39 + iVar52);
                    lVar48 = *(longlong *)(lVar24 + *plVar19);
                    uVar51 = *(ushort *)(lVar48 + lVar32 * 2);
                    if ((-1 < (char)uVar51) &&
                       (((*(byte *)(lVar48 + -2 + lVar32 * 2) & 0x10) != 0 ||
                        ((*(byte *)(lVar48 + (longlong)((iVar39 + 1) * iVar14 + iVar52) * 2) & 0x10)
                         != 0)))) {
                      *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x10;
                      if ((uVar51 & 0x700) == 0) {
                        *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x210;
                      }
                      bVar56 = true;
                    }
                    plVar19 = *(longlong **)(lStack_268 + 0x40);
                    iVar52 = *(int *)((longlong)plVar19 + 0x2c);
                    iVar39 = iVar52 / 2 - iVar46;
                    iVar14 = (int)plVar19[6] / 2 + iVar46;
                    lVar32 = (longlong)(iVar14 * iVar52 + iVar39);
                    lVar48 = *(longlong *)(lVar24 + *plVar19);
                    uVar51 = *(ushort *)(lVar48 + lVar32 * 2);
                    if ((-1 < (char)uVar51) &&
                       (((*(byte *)(lVar48 + 2 + lVar32 * 2) & 0x10) != 0 ||
                        ((*(byte *)(lVar48 + (longlong)((iVar14 + -1) * iVar52 + iVar39) * 2) & 0x10
                         ) != 0)))) {
                      *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x10;
                      if ((uVar51 & 0x700) == 0) {
                        *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x110;
                      }
                      bVar56 = true;
                    }
                    plVar19 = *(longlong **)(lStack_268 + 0x40);
                    iVar14 = *(int *)((longlong)plVar19 + 0x2c);
                    iVar52 = iVar46 + iVar14 / 2;
                    iVar46 = (int)plVar19[6] / 2 + iVar46;
                    lVar32 = (longlong)(iVar46 * iVar14 + iVar52);
                    lVar48 = *(longlong *)(lVar24 + *plVar19);
                    uVar51 = *(ushort *)(lVar48 + lVar32 * 2);
                    param_1 = lStack_268;
                    if (((char)uVar51 < '\0') ||
                       (((*(byte *)(lVar48 + -2 + lVar32 * 2) & 0x10) == 0 &&
                        ((*(byte *)(lVar48 + (longlong)((iVar46 + -1) * iVar14 + iVar52) * 2) & 0x10
                         ) == 0)))) goto LAB_14141aaf5;
                    *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x10;
                    if ((uVar51 & 0x700) == 0) {
                      *(ushort *)(lVar48 + lVar32 * 2) = uVar51 | 0x110;
                    }
LAB_14141aafa:
                    *(int *)plStack_1f8 = iVar22 + 1;
                    param_1 = lStack_268;
                  }
                }
              }
              plVar19 = *(longlong **)(param_1 + 0x40);
              iVar38 = iVar38 + 1;
              plStack_1f8 = (longlong *)((longlong)plStack_1f8 + 4);
              uStack_258 = CONCAT44(uStack_258._4_4_,iVar38);
              lVar24 = lVar24 + 8;
              piVar49 = piStack_238;
              uVar23 = uStack_24c;
              iVar14 = iStack_22c;
              iVar22 = iStack_240;
              uVar15 = uStack_250;
              iVar52 = iStack_260;
            } while (iVar38 < (int)plVar19[5]);
          }
        }
      }
      iStack_230 = iStack_230 + 1;
    } while (iStack_230 < iVar14);
  }
  iVar22 = *(int *)(lStack_208 + 0x48);
  if (iVar22 < 10) {
LAB_14141ccb8:
    uStack_200 = uStack_200 & 0xffffff00;
  }
  else {
    uStack_200 = CONCAT31(uStack_200._1_3_,1);
    if ((*(byte *)(*(longlong *)(lStack_208 + 0x40) + 9) & 0x10) == 0) goto LAB_14141ccb8;
  }
  if ((iVar22 < 0xb) || ((*(byte *)(*(longlong *)(lStack_208 + 0x40) + 10) & 1) == 0)) {
    bVar56 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141ccf4;
LAB_14141cd06:
    bVar57 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cd1a;
LAB_14141cd30:
    iVar22 = *(int *)(lStack_208 + 0x48);
    bVar6 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cd48;
LAB_14141cd5a:
    bVar8 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cd6e;
LAB_14141cd80:
    bVar7 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cd94;
LAB_14141cdac:
    iVar22 = *(int *)(lStack_208 + 0x48);
    cStack_23c = '\0';
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cdc7;
    cStack_23c = '\0';
LAB_14141cddc:
    bVar9 = false;
    lVar25 = lStack_208;
    if (10 < iVar22) goto LAB_14141cde7;
LAB_14141cdf5:
    uStack_244 = uStack_244 & 0xffffff00;
  }
  else {
    bVar56 = true;
    lVar25 = lStack_1f0;
LAB_14141ccf4:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 2) == 0) goto LAB_14141cd06;
    bVar57 = true;
    lVar25 = lStack_1f0;
LAB_14141cd1a:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 4) == 0) goto LAB_14141cd30;
    iVar22 = *(int *)(lStack_1f0 + 0x48);
    bVar6 = true;
    lVar25 = lStack_1f0;
LAB_14141cd48:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 8) == 0) goto LAB_14141cd5a;
    bVar8 = true;
    lVar25 = lStack_1f0;
LAB_14141cd6e:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 0x10) == 0) goto LAB_14141cd80;
    bVar7 = true;
    lVar25 = lStack_1f0;
LAB_14141cd94:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 0x20) == 0) goto LAB_14141cdac;
    iVar22 = *(int *)(lStack_1f0 + 0x48);
    cStack_23c = '\x01';
    lVar25 = lStack_1f0;
LAB_14141cdc7:
    if ((*(byte *)(*(longlong *)(lVar25 + 0x40) + 10) & 0x40) == 0) goto LAB_14141cddc;
    bVar9 = true;
    lVar25 = lStack_1f0;
LAB_14141cde7:
    uStack_244 = CONCAT31(uStack_244._1_3_,1);
    if (-1 < *(char *)(*(longlong *)(lVar25 + 0x40) + 10)) goto LAB_14141cdf5;
  }
  iVar22 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x2c);
  iVar52 = iVar22 / 2;
  iStack_22c = iVar22 + -1;
  iVar14 = (int)*(short *)(lStack_268 + 4) % 0x30;
  uStack_21c = iVar52 - iVar14;
  if (-1 < iVar14 - iVar52) {
    uStack_21c = 0;
  }
  if (0x2f < iVar52 + iVar14) {
    iStack_22c = iStack_22c + ((0x2f - iVar22 / 2) - iVar14);
  }
  iVar14 = (int)*(short *)(lStack_268 + 6);
  iVar22 = *(int *)(*(longlong *)(lStack_268 + 0x40) + 0x30);
  iVar52 = iVar22 / 2;
  iStack_218 = iVar22 + -1;
  uVar23 = iVar52 - iVar14;
  if (-1 < iVar14 - iVar52) {
    uVar23 = 0;
  }
  plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,uVar23);
  if (0x2f < iVar52 + iVar14 % 0x30) {
    iStack_218 = iVar22 + ((0x2e - iVar22 / 2) - iVar14 % 0x30);
  }
  uVar26 = (ulonglong)uStack_21c;
  sVar29 = (short)uStack_21c;
  while (iVar22 = (int)sVar29, iVar22 <= iStack_22c) {
    iVar52 = (int)(short)uVar23;
    uStack_258._2_6_ = (undefined6)(uStack_258 >> 0x10);
    uStack_258 = CONCAT62(uStack_258._2_6_,(short)uVar23);
    uVar15 = uVar23;
    if (iVar52 <= iStack_218) {
      do {
        plVar19 = *(longlong **)(lStack_268 + 0x40);
        sVar30 = 0;
        sVar29 = (short)uVar15;
        if (0 < (int)plVar19[5]) {
          iStack_1fc = 0;
          do {
            iVar14 = iVar52 * *(int *)((longlong)plVar19 + 0x2c);
            lStack_1f0 = (longlong)(iVar22 + iVar14);
            lStack_208 = *(longlong *)(*plVar19 + (longlong)sVar30 * 8);
            if (*(short *)(lStack_208 + lStack_1f0 * 2) == 0) {
              bVar4 = false;
              bVar5 = false;
              cStack_25c = '\0';
              uStack_214 = uStack_214 & 0xffffff00;
              uVar33 = uStack_224 >> 8;
              uStack_224 = uStack_224 & 0xffffff00;
              uVar15 = uStack_220 >> 8;
              uStack_220 = uStack_220 & 0xffffff00;
              uStack_210 = uStack_210 & 0xffffff00;
              uStack_228 = uStack_228 & 0xffffff00;
              uVar40 = uStack_248 >> 8;
              uStack_248 = uStack_248 & 0xffffff00;
              if (0 < (short)uStack_21c) {
                uVar51 = *(ushort *)(lStack_208 + -2 + lStack_1f0 * 2);
                if ((uVar51 & 1) == 0) {
                  if ((uVar51 & 0x1e) == 0) {
                    bVar4 = false;
                    if ((uVar51 & 0x20) != 0) {
                      bVar4 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                }
                else {
                  cStack_25c = '\x01';
                }
              }
              if (iVar22 < *(int *)((longlong)plVar19 + 0x2c) + -1) {
                uVar51 = *(ushort *)(lStack_208 + 2 + (longlong)(iVar22 + iVar14) * 2);
                if ((uVar51 & 1) == 0) {
                  if ((uVar51 & 0x1e) == 0) {
                    if ((uVar51 & 0x20) != 0) {
                      bVar4 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                }
                else {
                  cStack_25c = '\x01';
                }
              }
              if (0 < (short)uStack_258) {
                uVar51 = *(ushort *)
                          (*(longlong *)(*plVar19 + (longlong)sVar30 * 8) +
                          (longlong)((iVar52 + -1) * *(int *)((longlong)plVar19 + 0x2c) + iVar22) *
                          2);
                if ((uVar51 & 1) == 0) {
                  if ((uVar51 & 0x1e) == 0) {
                    if ((uVar51 & 0x20) != 0) {
                      bVar4 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                }
                else {
                  cStack_25c = '\x01';
                }
              }
              if (iVar52 < (int)plVar19[6] + -1) {
                uVar51 = *(ushort *)
                          (*(longlong *)(*plVar19 + (longlong)sVar30 * 8) +
                          (longlong)((iVar52 + 1) * *(int *)((longlong)plVar19 + 0x2c) + iVar22) * 2
                          );
                if ((uVar51 & 1) == 0) {
                  if ((uVar51 & 0x1e) == 0) {
                    if ((uVar51 & 0x20) != 0) {
                      bVar4 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                }
                else {
                  cStack_25c = '\x01';
                }
              }
              if (iStack_1fc < (int)plVar19[5] + -1) {
                uVar51 = *(ushort *)
                          (*(longlong *)(*plVar19 + 8 + (longlong)iStack_1fc * 8) +
                          (longlong)(iVar52 * *(int *)((longlong)plVar19 + 0x2c) + iVar22) * 2);
                if ((uVar51 & 1) == 0) {
                  if ((uVar51 & 0x1e) == 0) {
                    uStack_214 = (uint)((uVar51 & 0x20) != 0);
                  }
                  else {
                    uStack_224 = CONCAT31((int3)uVar33,1);
                  }
                }
                else {
                  uStack_220 = CONCAT31((int3)uVar15,1);
                }
              }
              uVar15 = uStack_210;
              if (sVar30 < 1) {
LAB_14141d150:
                bVar10 = false;
              }
              else {
                uVar51 = *(ushort *)
                          (*(longlong *)(*plVar19 + -8 + (longlong)iStack_1fc * 8) +
                          (longlong)(iVar52 * *(int *)((longlong)plVar19 + 0x2c) + iVar22) * 2);
                if ((uVar51 & 1) != 0) {
                  uStack_248 = CONCAT31((int3)uVar40,1);
                  goto LAB_14141d150;
                }
                if ((uVar51 & 0x1e) == 0) {
                  uVar15 = (uint)((uVar51 & 0x20) != 0);
                  goto LAB_14141d150;
                }
                bVar10 = true;
              }
              if ((((((((bVar4) && ((char)uStack_200 != '\0')) || ((bVar5 && (bVar6)))) ||
                     ((cStack_25c != '\0' && (cStack_23c != '\0')))) ||
                    (((char)uStack_214 != '\0' && (bVar57)))) ||
                   (((((char)uStack_224 != '\0' && (bVar7)) ||
                     (((char)uStack_220 != '\0' && ((char)uStack_244 != '\0')))) ||
                    (((char)uVar15 != '\0' && (bVar56)))))) || ((bVar10 && (bVar8)))) ||
                 (((char)uStack_248 != '\0' && (bVar9)))) {
                *(undefined2 *)
                 (*(longlong *)(**(longlong **)(lStack_268 + 0x40) + (longlong)sVar30 * 8) +
                 (longlong)
                 (iVar52 * *(int *)((longlong)*(longlong **)(lStack_268 + 0x40) + 0x2c) + iVar22) *
                 2) = 0x40;
              }
            }
            sVar30 = sVar30 + 1;
            iStack_1fc = (int)sVar30;
            plVar19 = *(longlong **)(lStack_268 + 0x40);
            sVar29 = (short)uStack_258;
          } while (iStack_1fc < (int)plVar19[5]);
        }
        uVar51 = sVar29 + 1;
        iVar52 = (int)(short)uVar51;
        uStack_258 = CONCAT62(uStack_258._2_6_,uVar51);
        uVar15 = (uint)uVar51;
      } while (iVar52 <= iStack_218);
      uVar26 = (ulonglong)uStack_21c;
    }
    sVar29 = (short)uVar26 + 1;
    uVar26 = CONCAT62((int6)(uVar26 >> 0x10),sVar29);
    uStack_21c = (uint)uVar26;
  }
LAB_14141d2b3:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_288);
  return;
}

