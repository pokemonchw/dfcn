/* Actual Ghidra decompilation; PE:6aea05a1:02734000	squad-create	0x140450d30	0x140451f86	0x140451f86 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140450d30(undefined1 *param_1,longlong *param_2,int param_3,int param_4,uint param_5,int param_6
             )

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined8 *puVar24;
  int iVar25;
  ulonglong uVar26;
  byte *pbVar27;
  int iVar28;
  undefined4 *puVar29;
  uint uVar30;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  byte *pbStack_98;
  undefined4 *puStack_90;
  longlong *plStack_88;
  undefined4 *puStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined4 *puStack_60;
  undefined8 auStack_58 [3];
  
  if ((DAT_1423b2a55 == '\0') || (DAT_1423b2a4d == '\0')) {
    puVar24 = (undefined8 *)((undefined8 *)*param_2)[1];
    cVar4 = *(char *)((longlong)puVar24 + 0x19);
    puVar3 = (undefined8 *)*param_2;
    while (cVar4 == '\0') {
      if (*(int *)((longlong)puVar24 + 0x1c) < 5) {
        puVar7 = (undefined8 *)puVar24[2];
        puVar24 = puVar3;
      }
      else {
        puVar7 = (undefined8 *)*puVar24;
      }
      puVar3 = puVar24;
      puVar24 = puVar7;
      cVar4 = *(char *)((longlong)puVar7 + 0x19);
    }
    if ((*(char *)((longlong)puVar3 + 0x19) != '\0') || (5 < *(int *)((longlong)puVar3 + 0x1c))) {
      iVar14 = -1;
      iVar6 = -1;
      if (DAT_1423b2a55 != '\0') {
        iVar14 = _DAT_14266ca34;
        iVar6 = _DAT_14266ca30;
      }
      if (*(int *)(param_1 + 4) == 0) {
        param_5 = param_6 + -0x44;
        iVar5 = param_6 + -0x1c;
      }
      else {
        param_5 = param_6 + -0xa9;
        if ((int)param_5 < 4) {
          param_5 = 4;
        }
        iVar5 = param_6 + -0x81;
      }
      puStack_90 = (undefined4 *)CONCAT44(puStack_90._4_4_,iVar5);
      iVar15 = (int)(*(longlong *)(_DAT_1423bc668 + 0xf98) - *(longlong *)(_DAT_1423bc668 + 0xf90)
                    >> 3);
      iVar23 = iVar15 + 1;
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,iVar23);
      iVar25 = -4;
      if (iVar23 < 10) {
        iVar25 = -2;
      }
      iVar25 = iVar25 + iVar5;
      piVar22 = (int *)0x0;
      iVar21 = 0;
      if ((((DAT_1423b2a55 != '\0') && (9 < iVar23)) && ((int)param_5 <= param_3)) &&
         (((param_3 <= iVar5 && (0x11 < param_4)) && (param_4 < 0x35)))) {
        uStack_a0 = 0;
        uStack_b8 = (longlong *)(ulonglong)*(uint *)(param_1 + 8);
        uStack_a8 = 0x18;
        iStack_a4 = 0x30;
        uStack_b0 = CONCAT44(9,iVar15);
        FUN_1400bc9e0(&uStack_b8);
        cVar4 = FUN_141428290(&uStack_b8,param_2,param_1 + 8,param_1 + 0xc);
        if (cVar4 != '\0') {
          return 0;
        }
        iVar23 = (int)pbStack_98;
      }
      iVar5 = 9;
      uStack_b0._0_4_ = iVar15;
      if (param_1[0xc] == '\0') {
        if (DAT_1423b2a55 == '\0') {
          return 0;
        }
        if (DAT_1423b2a4c == '\0') {
          return 0;
        }
        if ((((9 < iVar23) && (iVar25 + 1 <= param_3)) && (param_3 <= iVar25 + 2)) &&
           ((0x16 < param_4 && (param_4 < 0x32)))) {
          _DAT_1423b2a4c = _DAT_1423b2a4c & 0xff00;
          uStack_a0 = 0;
          uStack_b8 = (longlong *)(ulonglong)*(uint *)(param_1 + 8);
          uStack_a8 = 0x18;
          iStack_a4 = 0x30;
          uStack_b0._4_4_ = 9;
          FUN_1400bc9e0(&uStack_b8);
          param_1[0xc] = 0;
          if (iVar14 == uStack_a8 + -1) {
            iVar14 = (int)uStack_b8 + -1;
            if ((int)uStack_b8 + -1 < uStack_b8._4_4_) {
              iVar14 = uStack_b8._4_4_;
            }
            *(int *)(param_1 + 8) = iVar14;
            return 1;
          }
          if (iVar14 == iStack_a4 + 1) {
            iVar6 = ((int)uStack_b0 - uStack_b0._4_4_) + 1;
            iVar14 = (int)uStack_b8 + 1;
            if (iVar6 < (int)uStack_b8 + 1) {
              iVar14 = iVar6;
            }
            *(int *)(param_1 + 8) = iVar14;
            return 1;
          }
          if (iVar14 < (int)uStack_a0) {
            iVar14 = (int)uStack_b8 - uStack_b0._4_4_;
            if ((int)uStack_b8 - uStack_b0._4_4_ < uStack_b8._4_4_) {
              iVar14 = uStack_b8._4_4_;
            }
            *(int *)(param_1 + 8) = iVar14;
            return 1;
          }
          if (uStack_a0._4_4_ < iVar14) {
            iVar6 = ((int)uStack_b0 - uStack_b0._4_4_) + 1;
            iVar14 = (int)uStack_b8 + uStack_b0._4_4_;
            if (iVar6 < (int)uStack_b8 + uStack_b0._4_4_) {
              iVar14 = iVar6;
            }
            *(int *)(param_1 + 8) = iVar14;
            return 1;
          }
          param_1[0xc] = 1;
          return 1;
        }
        iVar15 = 0x17;
        uVar30 = iVar23 - 9;
        uVar2 = uVar30;
        if ((int)*(uint *)(param_1 + 8) <= (int)uVar30) {
          uVar2 = *(uint *)(param_1 + 8);
        }
        piVar13 = piVar22;
        if (((int)uVar2 < 0) ||
           (iVar5 = uVar2 + 9, piVar13 = (int *)(ulonglong)uVar2, (int)uVar2 < iVar5)) {
          do {
            iVar28 = (int)piVar13;
            if (iVar23 <= iVar28) break;
            if ((((iVar28 < (int)(*(longlong *)(_DAT_1423bc668 + 0xf98) -
                                  *(longlong *)(_DAT_1423bc668 + 0xf90) >> 3)) &&
                 (iVar25 + -3 <= iVar6)) && (iVar6 <= iVar25)) &&
               ((iVar15 <= iVar14 && (iVar14 <= iVar15 + 2)))) {
              param_5 = uVar30;
              if (DAT_1426bb010 != '\0') {
                FUN_1404fb530(_DAT_1426baff0,0x17);
              }
              _DAT_1423b2a4c = _DAT_1423b2a4c & 0xff00;
              lVar17 = *(longlong *)((longlong)iVar28 * 8 + *(longlong *)(_DAT_1423bc668 + 0xf90));
              if (lVar17 != 0) {
                FUN_14042aa40(lVar17);
                supplier_0x1415530d0(lVar17,0x228);
              }
              lVar18 = _DAT_1423bc668;
              lVar16 = *(longlong *)(_DAT_1423bc668 + 0xf90) + (longlong)iVar28 * 8;
              lVar17 = lVar16 + 8;
              supplier_0x14155486a(lVar16,lVar17,*(longlong *)(_DAT_1423bc668 + 0xf98) - lVar17);
              *(longlong *)(lVar18 + 0xf98) = *(longlong *)(lVar18 + 0xf98) + -8;
              if (*(uint *)(param_1 + 8) != param_5) {
                return 1;
              }
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
              return 1;
            }
            if ((((int)(param_5 + 2) <= iVar6) && (iVar6 <= iVar25)) &&
               ((iVar15 <= iVar14 && (iVar14 <= iVar15 + 2)))) {
              param_5 = uVar30;
              if (DAT_1426bb010 != '\0') {
                FUN_1404fb530(_DAT_1426baff0,0x4c);
              }
              lVar18 = _DAT_1423bc668;
              lVar17 = _DAT_1418c9220;
              _DAT_1423b2a4c = _DAT_1423b2a4c & 0xff00;
              if (*(int *)(param_1 + 4) != 0) {
                if (*(int *)(param_1 + 4) != 1) goto LAB_140451f66;
                uVar26 = (ulonglong)iVar28;
                if (_DAT_1418c9090 == -1) {
                  if (0 < (int)((longlong)_DAT_1418c9060 - _DAT_1418c9058 >> 2)) {
                    pbStack_98 = (byte *)0x0;
                    lVar17 = _DAT_1423bc668;
                    lVar18 = _DAT_142505c40;
                    lVar16 = _DAT_1418c9058;
                    piVar13 = piVar22;
                    do {
                      if ((*(uint *)(_DAT_1418c9070 + ((ulonglong)(longlong)(int)piVar13 >> 5) * 4)
                          & 1 << ((byte)piVar13 & 0x1f)) != 0) {
                        iVar14 = *(int *)((longlong)pbStack_98 + lVar16);
                        lVar8 = _DAT_142505c48 - lVar18 >> 3;
                        if ((lVar8 != 0) && (iVar14 != -1)) {
                          iVar5 = (int)lVar8 + -1;
                          piVar19 = piVar22;
                          iVar6 = iVar21;
                          if (-1 < iVar5) {
                            do {
                              iVar23 = iVar6 + iVar5 >> 1;
                              piVar19 = *(int **)(lVar18 + (longlong)iVar23 * 8);
                              iVar15 = *piVar19;
                              if (iVar15 == iVar14) break;
                              iVar25 = iVar23 + -1;
                              if (iVar15 < iVar14) {
                                iVar25 = iVar5;
                                iVar6 = iVar23 + 1;
                              }
                              iVar5 = iVar25;
                              piVar19 = piVar22;
                            } while (iVar6 <= iVar5);
                          }
                          if (piVar19 != (int *)0x0) {
                            piVar20 = piVar22;
                            if ((-1 < iVar28) &&
                               (uVar26 < (ulonglong)
                                         (*(longlong *)(lVar17 + 0xf98) -
                                          *(longlong *)(lVar17 + 0xf90) >> 3))) {
                              piVar20 = *(int **)(*(longlong *)(lVar17 + 0xf90) + uVar26 * 8);
                            }
                            FUN_141108c20(piVar19,piVar20);
                            piVar19[0x6e] = piVar19[0x6e] | 0x7ff;
                            _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x7ff;
                            lVar17 = _DAT_1423bc668;
                            lVar18 = _DAT_142505c40;
                            lVar16 = _DAT_1418c9058;
                          }
                        }
                      }
                      uVar30 = (int)piVar13 + 1;
                      piVar13 = (int *)(ulonglong)uVar30;
                      pbStack_98 = (byte *)((longlong)pbStack_98 + 4);
                    } while ((int)uVar30 < (int)((longlong)_DAT_1418c9060 - lVar16 >> 2));
                  }
                  goto LAB_140451f66;
                }
                iVar14 = *(int *)(_DAT_1418c9058 + (longlong)_DAT_1418c9090 * 4);
                lVar17 = _DAT_142505c48 - _DAT_142505c40 >> 3;
                if ((lVar17 == 0) || (iVar14 == -1)) goto LAB_140451f66;
                iVar6 = (int)lVar17 + -1;
                piVar13 = piVar22;
                if (iVar6 < 0) goto LAB_14045133d;
                goto LAB_140451311;
              }
              puStack_60 = _DAT_1418c9210;
              if (_DAT_1418c9210 == (undefined4 *)0x0) {
                lStack_68 = _DAT_1418c9220;
                if (_DAT_1418c9220 == 0) goto LAB_140451f66;
                pbStack_78 = (byte *)FUN_1415530e0(0x60);
                puStack_80 = (undefined4 *)FUN_14010aac0(pbStack_78);
                *puStack_80 = *(undefined4 *)(lVar18 + 0x1128);
                *(int *)(lVar18 + 0x1128) = *(int *)(lVar18 + 0x1128) + 1;
                puStack_80[3] = *(undefined4 *)(lVar17 + 0x20);
                if (0 < (int)puStack_80[8]) {
                  **(byte **)(puStack_80 + 6) = **(byte **)(puStack_80 + 6) | 1;
                }
                puVar24 = *(undefined8 **)(lVar18 + 0x1118);
                puStack_60 = puStack_80;
                if (puVar24 == *(undefined8 **)(lVar18 + 0x1120)) {
                  FUN_1400bc360(lVar18 + 0x1110,puVar24,&puStack_80);
                }
                else {
                  *puVar24 = puStack_80;
                  *(longlong *)(lVar18 + 0x1118) = *(longlong *)(lVar18 + 0x1118) + 8;
                }
                if ((3 < *(int *)(lVar17 + 0x30)) &&
                   (pbVar27 = (byte *)(*(longlong *)(lVar17 + 0x28) + 3), *pbVar27 = *pbVar27 | 4,
                   3 < *(int *)(lVar17 + 0x30))) {
                  pbVar27 = (byte *)(*(longlong *)(lVar17 + 0x28) + 3);
                  *pbVar27 = *pbVar27 | 8;
                }
              }
              else {
                lStack_68 = _DAT_1418c9218;
                lVar17 = _DAT_1418c9218;
              }
              if (lVar17 != 0) {
                pbStack_78 = (byte *)FUN_1415530e0(0x1e8);
                pbVar9 = (byte *)FUN_141105540(pbStack_78,0);
                pbStack_98 = pbVar9;
                FUN_14094b310(_DAT_1423bc668,pbVar9 + 8,3);
                pbVar27 = pbVar9 + 0xa0;
                pbStack_78 = pbVar27;
                FUN_14046e010(pbVar27,(longlong)*(short *)(lVar17 + 0x278));
                piVar13 = piVar22;
                piVar19 = piVar22;
                if (*(longlong *)(pbVar9 + 0xa8) - *(longlong *)pbVar27 >> 3 != 0) {
                  do {
                    plStack_88 = (longlong *)FUN_1415530e0(0x198);
                    uVar10 = FUN_14042a7c0(plStack_88);
                    *(undefined8 *)((longlong)piVar13 + *(longlong *)pbVar27) = uVar10;
                    uVar30 = (int)piVar19 + 1;
                    piVar13 = piVar13 + 2;
                    piVar19 = (int *)(ulonglong)uVar30;
                  } while ((ulonglong)(longlong)(int)uVar30 <
                           (ulonglong)(*(longlong *)(pbVar9 + 0xa8) - *(longlong *)pbVar27 >> 3));
                }
                if (-1 < iVar28) {
                  if ((ulonglong)(longlong)iVar28 <
                      (ulonglong)
                      (*(longlong *)(_DAT_1423bc668 + 0xf98) - *(longlong *)(_DAT_1423bc668 + 0xf90)
                      >> 3)) {
                    FUN_141108c20(pbVar9,*(undefined8 *)
                                          (*(longlong *)(_DAT_1423bc668 + 0xf90) +
                                          (longlong)iVar28 * 8));
                  }
                }
                pbVar1 = pbVar9 + 0xd0;
                FUN_1400708d0(pbVar1,_DAT_1423b9cf8 - _DAT_1423b9cf0 >> 3);
                iVar14 = (int)(*(longlong *)(pbVar9 + 0xd8) - *(longlong *)pbVar1 >> 3) + -1;
                lVar17 = (longlong)iVar14;
                if (-1 < iVar14) {
                  puVar29 = (undefined4 *)(lVar17 * 8);
                  puStack_90 = puVar29;
                  do {
                    puStack_80 = puVar29;
                    uVar10 = FUN_1415530e0(0x420);
                    auStack_58[0] = uVar10;
                    FUN_141553708(uVar10,0x58,0xc,&UNK_14042a8e0,FUN_141107e90);
                    *(undefined8 *)((longlong)puVar29 + *(longlong *)pbVar1) = uVar10;
                    FUN_14110a790(pbVar9,*(undefined8 *)((longlong)puStack_90 + *(longlong *)pbVar1)
                                 );
                    lStack_70 = *(longlong *)(_DAT_1423b9cf0 + lVar17 * 8);
                    plVar12 = (longlong *)(lStack_70 + 8);
                    plVar11 = plVar12;
                    if (0xf < *(ulonglong *)(lStack_70 + 0x20)) {
                      plVar11 = (longlong *)*plVar12;
                    }
                    if ((*(longlong *)(lStack_70 + 0x18) == 8) && (*plVar11 == 0x797475642066664f))
                    {
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x20) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x22) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x78) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x7a) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0xd0) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0xd2) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x128) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x12a) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x180) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x182) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x1d8) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x1da) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x230) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x232) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x288) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x28a) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x2e0) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x2e2) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x338) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x33a) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x390) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x392) = 1;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 1000) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x3ea) = 1;
                    }
                    if (0xf < *(ulonglong *)(lStack_70 + 0x20)) {
                      plVar12 = (longlong *)*plVar12;
                    }
                    if ((((*(longlong *)(lStack_70 + 0x18) == 0x12) &&
                         (*plVar12 == 0x6572656767617453)) && (plVar12[1] == 0x696e696172742064)) &&
                       (piVar13 = piVar22, piVar19 = piVar22, (short)plVar12[2] == 0x676e)) {
                      do {
                        *(undefined2 *)
                         (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x20 + (longlong)piVar19
                         ) = 0;
                        *(undefined2 *)
                         (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x22 + (longlong)piVar19
                         ) = 1;
                        if ((*pbVar9 & 1) == 0) {
                          if (2 < (longlong)piVar13 - 3U) {
                            uVar26 = (longlong)piVar13 - 9;
LAB_1404519c2:
                            if (2 < uVar26) {
                              plVar12 = (longlong *)FUN_1415530e0(0x30);
                              plVar12[2] = 0;
                              plVar12[3] = 0;
                              plVar12[4] = 0;
                              plVar12[5] = 0;
                              *plVar12 = 0;
                              *(undefined4 *)(plVar12 + 1) = 10;
                              plStack_88 = plVar12;
                              uStack_b8 = (longlong *)FUN_1415530e0(0x20);
                              uStack_b8[1] = 0xffffffffffffffff;
                              uStack_b8[2] = 0xffffffffffffffff;
                              *(undefined4 *)(uStack_b8 + 3) = 0xffffffff;
                              *(undefined4 *)((longlong)uStack_b8 + 0x1c) = 0;
                              *uStack_b8 = (longlong)&UNK_14165a378;
                              *plVar12 = (longlong)uStack_b8;
                              *(undefined4 *)(uStack_b8 + 2) = _DAT_142167754;
                              *(undefined4 *)(*plVar12 + 0x14) = _DAT_1423aa348;
                              FUN_140287e20(plVar12 + 2,
                                            *(longlong *)(pbStack_98 + 0xa8) -
                                            *(longlong *)(pbStack_98 + 0xa0) >> 3,0);
                              FUN_140288cd0(plVar12 + 2);
                              lVar18 = *(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x28 +
                                       (longlong)piVar19;
                              puVar24 = *(undefined8 **)(lVar18 + 8);
                              if (puVar24 == *(undefined8 **)(lVar18 + 0x10)) {
                                FUN_1400bc360(lVar18,puVar24,&plStack_88);
                              }
                              else {
                                *puVar24 = plVar12;
                                *(longlong *)(lVar18 + 8) = *(longlong *)(lVar18 + 8) + 8;
                              }
                              *(undefined2 *)
                               (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x20 +
                               (longlong)piVar19) = 0;
                              *(undefined2 *)
                               (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x22 +
                               (longlong)piVar19) = 0;
                              pbVar9 = pbStack_98;
                            }
                          }
                        }
                        else if ((int *)0x2 < piVar13) {
                          uVar26 = (longlong)piVar13 - 6;
                          goto LAB_1404519c2;
                        }
                        piVar19 = piVar19 + 0x16;
                        pbVar27 = pbStack_78;
                        piVar13 = (int *)((longlong)piVar13 + 1);
                      } while ((longlong)piVar19 < 0x420);
                    }
                    plVar12 = (longlong *)(lStack_70 + 8);
                    if (0xf < *(ulonglong *)(lStack_70 + 0x20)) {
                      plVar12 = (longlong *)*plVar12;
                    }
                    if (((*(longlong *)(lStack_70 + 0x18) == 0x11) &&
                        (*plVar12 == 0x746e6174736e6f43)) &&
                       ((plVar12[1] == 0x6e696e6961727420 &&
                        (piVar13 = piVar22, (char)plVar12[2] == 'g')))) {
                      do {
                        plVar12 = (longlong *)FUN_1415530e0(0x30);
                        plVar12[2] = 0;
                        plVar12[3] = 0;
                        plVar12[4] = 0;
                        plVar12[5] = 0;
                        *plVar12 = 0;
                        *(undefined4 *)(plVar12 + 1) = 10;
                        uStack_b8 = plVar12;
                        plStack_88 = plVar12;
                        uStack_b8 = (longlong *)FUN_1415530e0(0x20);
                        uStack_b8[1] = 0xffffffffffffffff;
                        uStack_b8[2] = 0xffffffffffffffff;
                        *(undefined4 *)(uStack_b8 + 3) = 0xffffffff;
                        *(undefined4 *)((longlong)uStack_b8 + 0x1c) = 0;
                        *uStack_b8 = (longlong)&UNK_14165a378;
                        *plVar12 = (longlong)uStack_b8;
                        *(undefined4 *)(uStack_b8 + 2) = _DAT_142167754;
                        *(undefined4 *)(*plVar12 + 0x14) = _DAT_1423aa348;
                        FUN_140287e20(plVar12 + 2,
                                      *(longlong *)(pbVar27 + 8) - *(longlong *)pbVar27 >> 3,0);
                        FUN_140288cd0(plVar12 + 2);
                        lVar18 = *(longlong *)(*(longlong *)pbVar1 + lVar17 * 8);
                        puVar24 = *(undefined8 **)((longlong)piVar13 + lVar18 + 0x30);
                        if (puVar24 == *(undefined8 **)((longlong)piVar13 + lVar18 + 0x38)) {
                          FUN_1400bc360();
                        }
                        else {
                          *puVar24 = plVar12;
                          plVar12 = (longlong *)((longlong)piVar13 + lVar18 + 0x30);
                          *plVar12 = *plVar12 + 8;
                        }
                        *(undefined2 *)
                         (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x20 + (longlong)piVar13
                         ) = 0;
                        *(undefined2 *)
                         (*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x22 + (longlong)piVar13
                         ) = 0;
                        piVar13 = piVar13 + 0x16;
                      } while ((longlong)piVar13 < 0x420);
                    }
                    piVar13 = (int *)(lStack_70 + 8);
                    if (0xf < *(ulonglong *)(lStack_70 + 0x20)) {
                      piVar13 = *(int **)piVar13;
                    }
                    if (((*(longlong *)(lStack_70 + 0x18) == 5) && (*piVar13 == 0x64616552)) &&
                       ((char)piVar13[1] == 'y')) {
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x20) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x22) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x78) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x7a) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0xd0) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0xd2) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x128) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x12a) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x180) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x182) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x1d8) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x1da) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x230) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x232) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x288) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x28a) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x2e0) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x2e2) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x338) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x33a) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x390) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x392) = 0;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 1000) = 2;
                      *(undefined2 *)(*(longlong *)(*(longlong *)pbVar1 + lVar17 * 8) + 0x3ea) = 0;
                    }
                    lVar17 = lVar17 + -1;
                    puVar29 = puStack_80 + -2;
                    puStack_90 = puStack_90 + -2;
                    pbVar9 = pbStack_98;
                    puStack_80 = puVar29;
                  } while (-1 < lVar17);
                }
                *(uint *)(pbVar9 + 0x1b8) = *(uint *)(pbVar9 + 0x1b8) | 0x7ff;
                _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x7ff;
                FUN_1400bb4a0(*(undefined4 *)pbVar9,_DAT_1423bc668 + 0x11c8);
                puVar29 = puStack_60;
                *(undefined4 *)(pbVar9 + 0x1c4) = *(undefined4 *)(_DAT_1423bc668 + 4);
                *(undefined4 *)(pbVar9 + 0x1c8) = *(undefined4 *)(lStack_68 + 0x20);
                if (puStack_60 != (undefined4 *)0x0) {
                  *(undefined4 *)(pbVar9 + 0x1cc) = *puStack_60;
                  iVar14 = puStack_60[1];
                  if (((iVar14 != -1) && (lVar17 = FUN_1413e54b0(0x142407530,iVar14), lVar17 != 0))
                     && (*(int *)(lVar17 + 0x1f0) == -1)) {
                    *(int *)**(undefined8 **)(pbVar9 + 0xa0) = iVar14;
                    *(undefined4 *)(lVar17 + 0x1f0) = *(undefined4 *)pbVar9;
                    *(undefined4 *)(lVar17 + 500) = 0;
                    *(uint *)(pbVar9 + 0x1b8) = *(uint *)(pbVar9 + 0x1b8) | 0x7ff;
                    _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x7ff;
                  }
                  puVar29[10] = *(undefined4 *)pbVar9;
                }
                if (DAT_1418c9048 != '\0') {
                  if (_DAT_1418c9060 == _DAT_1418c9068) {
                    FUN_140072450(&DAT_1418c9058,_DAT_1418c9060,pbVar9);
                  }
                  else {
                    *_DAT_1418c9060 = *(undefined4 *)pbVar9;
                    _DAT_1418c9060 = _DAT_1418c9060 + 1;
                  }
                  param_5 = param_5 & 0xffffff00;
                  if (((longlong)_DAT_1418c9088 < 0) && (_DAT_1418c9088 != 0)) {
                    lVar17 = -((~_DAT_1418c9088 >> 5) * 4 + 4);
                  }
                  else {
                    lVar17 = (_DAT_1418c9088 >> 5) * 4;
                  }
                  uStack_b8 = (longlong *)(_DAT_1418c9070 + lVar17);
                  uStack_b0 = (ulonglong)((uint)_DAT_1418c9088 & 0x1f);
                  FUN_14013d670(&DAT_1418c9070,auStack_58,&uStack_b8,&param_5);
                  DAT_1418c9050 = 0;
                  iVar14 = _DAT_1423efc08 + -0x21;
                  _DAT_1418c904c =
                       (int)((longlong)_DAT_1418c9060 - _DAT_1418c9058 >> 2) -
                       (iVar14 / 6 + (iVar14 >> 0x1f) +
                       (int)(((longlong)iVar14 / 6 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                            0x1f));
                }
              }
              goto LAB_140451f66;
            }
            iVar15 = iVar15 + 3;
            piVar13 = (int *)(ulonglong)(iVar28 + 1U);
          } while ((int)(iVar28 + 1U) < iVar5);
        }
        if (iVar6 < (int)param_5) {
          return 0;
        }
        if ((int)puStack_90 < iVar6) {
          return 0;
        }
        if (0x22 < iVar14 - 0x12U) {
          return 0;
        }
        _DAT_1423b2a4c = 0;
        return 0;
      }
      if ((DAT_1423b2a55 == '\0') || (DAT_1423b2a4e == '\0')) {
        param_1[0xc] = 0;
        return 1;
      }
      uStack_a0 = 0;
      uStack_b8._0_4_ = *(int *)(param_1 + 8);
      uStack_b8._4_4_ = 0;
      uStack_a8 = 0x18;
      iStack_a4 = 0x30;
      uStack_b0._4_4_ = 9;
      FUN_1400bc9e0(&uStack_b8);
      uVar26 = (ulonglong)uStack_a8;
      if ((int)uStack_a8 < iVar14) {
        if (iVar14 < iStack_a4) {
          if (iStack_a4 <= (int)uStack_a8) goto LAB_140450fdd;
          iVar6 = (((int)uStack_b0 - uStack_b0._4_4_) - uStack_b8._4_4_) + 1;
          if (-1 < iVar6) {
            iVar21 = iVar6;
          }
          iVar21 = iVar21 * (iVar14 - uStack_a8);
          iVar14 = (iStack_a4 - uStack_a8) + 1;
          uVar26 = (longlong)iVar21 % (longlong)iVar14 & 0xffffffff;
          iVar6 = iVar21 / iVar14 + uStack_b8._4_4_;
          iVar14 = ((int)uStack_b0 - uStack_b0._4_4_) + 1;
          if (iVar14 < iVar6) {
            iVar6 = iVar14;
          }
          if (iVar6 < uStack_b8._4_4_) {
            iVar6 = uStack_b8._4_4_;
          }
        }
        else {
          uStack_b8._0_4_ = ((int)uStack_b0 - uStack_b0._4_4_) + 1;
          iVar6 = uStack_b8._4_4_;
          if (uStack_b8._4_4_ <= (int)uStack_b8) goto LAB_140450fdd;
        }
        uStack_b8._0_4_ = iVar6;
      }
      else {
        uStack_b8._0_4_ = uStack_b8._4_4_;
      }
LAB_140450fdd:
      FUN_1400bc9e0(&uStack_b8,uVar26);
      *(int *)(param_1 + 8) = (int)uStack_b8;
      return 1;
    }
  }
  if (DAT_1426bb010 != '\0') {
    FUN_1404fb530(_DAT_1426baff0,0x3f);
  }
  _DAT_1423b2a4c = _DAT_1423b2a4c & 0xff;
  FUN_1400e27a0(param_2);
  *param_1 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  return 0;
  while( true ) {
    iVar23 = iVar15 + -1;
    if (iVar5 < iVar14) {
      iVar21 = iVar15 + 1;
      iVar23 = iVar6;
    }
    iVar6 = iVar23;
    piVar13 = piVar22;
    if (iVar6 < iVar21) break;
LAB_140451311:
    iVar15 = iVar6 + iVar21 >> 1;
    piVar13 = *(int **)(_DAT_142505c40 + (longlong)iVar15 * 8);
    iVar5 = *piVar13;
    if (iVar5 == iVar14) break;
  }
LAB_14045133d:
  if ((piVar13 != (int *)0x0) &&
     (iVar14 = (int)(*(longlong *)(piVar13 + 0x2a) - *(longlong *)(piVar13 + 0x28) >> 3) + -1,
     puStack_90 = (undefined4 *)(longlong)iVar14, -1 < iVar14)) {
    pbStack_98._0_4_ = -1;
    iVar14 = (int)pbStack_98;
    pbStack_98 = (byte *)0xffffffff;
    lVar17 = _DAT_1423bc668;
    do {
      puVar29 = *(undefined4 **)(*(longlong *)(piVar13 + 0x28) + (longlong)puStack_90 * 8);
      FUN_1400bc210(&uStack_b8,0x1418c9098,*puVar29);
      iVar6 = iVar14;
      if ((char)uStack_b0 != '\0') {
        iVar6 = (int)uStack_b8;
      }
      if (iVar6 != -1) {
        piVar19 = piVar22;
        if ((-1 < iVar28) &&
           (uVar26 < (ulonglong)(*(longlong *)(lVar17 + 0xf98) - *(longlong *)(lVar17 + 0xf90) >> 3)
           )) {
          piVar19 = *(int **)(*(longlong *)(lVar17 + 0xf90) + uVar26 * 8);
        }
        FUN_1411091f0(puVar29 + 0x20,piVar19);
        piVar13[0x6e] = piVar13[0x6e] | 0x7ff;
        _DAT_1423bbcd8 = _DAT_1423bbcd8 | 0x7ff;
        lVar17 = _DAT_1423bc668;
      }
      puStack_90 = (undefined4 *)((longlong)puStack_90 + -1);
    } while (-1 < (longlong)puStack_90);
  }
LAB_140451f66:
  *param_1 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  return 1;
}

