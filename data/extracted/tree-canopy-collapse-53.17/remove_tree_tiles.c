/* Actual Ghidra output; researcher-assigned name. VA 0x1414dd810..0x1414df58e; see image.txt for input identity. */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_tree_tiles(longlong param_1,short param_2,ushort param_3,short param_4,char param_5,
                      uint param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  short sVar12;
  undefined2 uVar13;
  ushort uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  short *psVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined8 *******pppppppuVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  int iVar35;
  bool bVar36;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1a8 [32];
  short *psStack_188;
  short *psStack_180;
  short *psStack_178;
  int *piStack_170;
  short *psStack_168;
  char cStack_158;
  short sStack_156;
  longlong lStack_150;
  short sStack_148;
  short asStack_144 [2];
  short asStack_140 [2];
  int iStack_13c;
  short asStack_138 [2];
  short asStack_134 [2];
  int iStack_130;
  longlong lStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  short sStack_112;
  ushort uStack_110;
  short sStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  short *psStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_1a8;
  uVar30 = (uint)(short)param_3;
  uVar29 = (uint)param_2;
  lStack_150 = param_1;
  if (param_5 != '\0') {
    FUN_1414eb980(param_1,param_2,param_3,param_4);
  }
  sVar12 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  if ((((sVar12 == 1) || (sVar12 == 0x20)) || (sVar12 == 0x23)) || (sVar12 == 0x2a))
  goto LAB_1414de835;
  uVar13 = func_0x0001400695b0(param_1,param_2,param_3);
  cVar10 = func_0x00014024af40(uVar13);
  if (cVar10 != '\0') goto LAB_1414de835;
  uVar13 = func_0x0001400695b0(param_1,param_2,param_3);
  cVar10 = func_0x00014024ae20(uVar13);
  if (cVar10 != '\0') goto LAB_1414de835;
  uVar14 = func_0x0001400695b0(param_1,param_2,param_3);
  uVar21 = (ulonglong)uVar14;
  uVar31 = (uint)uVar14;
  if (((((uVar31 == 0x53) || (uVar14 == 0x4f)) ||
       ((uVar14 == 0x50 || ((uVar14 == 0x51 || (uVar14 == 0x52)))))) || (uVar14 == 0x1eb)) ||
     ((((((uVar14 == 0xd7 || (uVar14 == 0x147)) || (uVar14 == 0x14b)) ||
        ((uVar14 == 0x168 || (uVar14 == 0x1b4)))) ||
       ((cVar10 = func_0x0001402c6be0(uVar14), cVar10 != '\0' ||
        ((uVar27 = (uint)uVar21, uVar27 == 0x165 || (uVar27 == 0x166)))))) || (uVar27 == 0x167))))
  goto LAB_1414de835;
  if (uVar27 < 0x165) {
    if (((uVar27 == 0x164) || (uVar27 == 0x41)) || (uVar27 == 0x142)) goto LAB_1414de835;
    bVar36 = uVar27 == 0x143;
  }
  else {
    if (uVar31 == 0x1b0) goto LAB_1414de835;
    bVar36 = uVar31 == 0x1ea;
  }
  if (((bVar36) || (cVar10 = func_0x0001402c7160(uVar21 & 0xffff), cVar10 != '\0')) ||
     ((uVar31 == 0x103 || ((uVar31 == 0x105 || (uVar31 == 0x106)))))) goto LAB_1414de835;
  iVar17 = (int)param_4;
  if (param_2 < 0) goto LAB_1414ddb8a;
  if (((((short)param_3 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)uVar29)) ||
      (*(int *)(param_1 + 0x116bf0) <= (int)uVar30)) ||
     ((param_4 < 0 || (*(int *)(param_1 + 0x116bf4) <= iVar17)))) {
LAB_1414ddb01:
    if (((int)uVar29 < *(int *)(param_1 + 0x116bec)) &&
       ((((-1 < (short)param_3 && ((int)uVar30 < *(int *)(param_1 + 0x116bf0))) && (-1 < param_4))
        && (iVar17 < *(int *)(param_1 + 0x116bf4))))) {
      if ((*(longlong *)(param_1 + 0x116bb8) == 0) ||
         (lVar19 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(param_1 + 0x116bb8) + (longlong)(param_2 >> 4) * 8) +
                      (ulonglong)(param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar19 == 0))
      goto LAB_1414ddb8a;
      uVar31 = uVar29 & 0x8000000f;
      if ((int)uVar31 < 0) {
        uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
      }
      uVar14 = *(ushort *)
                (lVar19 + (((longlong)(int)uVar31 + 5) * 0x10 + (ulonglong)(uVar30 & 0xf)) * 2);
    }
    else {
LAB_1414ddb8a:
      uVar14 = 0;
    }
    if (0x1d9 < uVar14) {
      if (((uVar14 != 0x1da) && (uVar14 != 0x1db)) && (uVar14 != 0x1dc)) {
        bVar36 = uVar14 == 0x1e9;
        goto LAB_1414ddbc8;
      }
      goto LAB_1414ddbcf;
    }
    if ((((uVar14 == 0x1d9) || (uVar14 == 0x2b)) || (uVar14 == 0x2c)) ||
       ((uVar14 == 0x2d || (uVar14 == 0x2e)))) goto LAB_1414ddbcf;
    bVar36 = uVar14 == 0x2f;
LAB_1414ddbc8:
    if (bVar36) goto LAB_1414ddbcf;
    cVar10 = '\0';
  }
  else {
    uVar14 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
    if (uVar14 < 0x165) {
      if (((uVar14 != 0x164) && (uVar14 != 0x41)) && (uVar14 != 0x142)) {
        bVar36 = uVar14 == 0x143;
LAB_1414ddaaf:
        if ((((!bVar36) && (uVar14 != 0x53)) && (uVar14 != 0x4f)) &&
           (((uVar14 != 0x50 && (uVar14 != 0x51)) &&
            ((uVar14 != 0x52 &&
             ((uVar14 != 0x1eb && (cVar10 = func_0x0001402c7160(uVar14), cVar10 == '\0'))))))))
        goto LAB_1414ddb01;
      }
    }
    else if (uVar14 != 0x1b0) {
      bVar36 = uVar14 == 0x1ea;
      goto LAB_1414ddaaf;
    }
LAB_1414ddbcf:
    cVar10 = '\x01';
  }
  cStack_158 = cVar10;
  if (param_6 != 2) {
    bVar36 = false;
    uVar14 = func_0x0001400695b0(lStack_150,param_2,param_3,param_4);
    uVar31 = (uint)uVar14;
    cVar11 = func_0x00014024b500(uVar14);
    if (cVar11 != '\0') {
      if (((param_5 != '\0') && (param_6 < 2)) &&
         ((lVar19 = FUN_141418ad0(extraout_XMM0_Da,param_2,param_3,param_4), lStack_128 = lVar19,
          lVar19 != 0 && (*(short *)(lVar19 + 8) <= param_4)))) {
        lVar25 = *(longlong *)(lVar19 + 0x40);
        if (lVar25 != 0) {
          sVar12 = *(short *)(lVar19 + 4) - (short)(*(int *)(lVar25 + 0x2c) / 2);
          asStack_140[0] = 0;
          sStack_156 = sVar12;
          if (0 < *(int *)(lVar25 + 0x2c)) {
            iStack_13c = 0;
            do {
              sVar33 = *(short *)(lVar19 + 6) - (short)(*(int *)(lVar25 + 0x30) / 2);
              asStack_134[0] = 0;
              sStack_148 = sVar33;
              if (0 < *(int *)(lVar25 + 0x30)) {
                iStack_130 = 0;
                iVar17 = iStack_13c;
                sStack_156 = sVar12;
                do {
                  cStack_158 = '\0';
                  sVar32 = *(short *)(lVar25 + 0x28) + -1 + *(short *)(lVar19 + 8);
                  asStack_138[0] = *(short *)(lVar25 + 0x28) + -1;
                  iVar18 = iStack_130;
                  sStack_148 = sVar33;
                  if (-1 < asStack_138[0]) {
                    sVar34 = sVar32 + -1;
                    lStack_120 = (longlong)asStack_138[0] << 3;
                    do {
                      lVar25 = lStack_150;
                      sVar15 = *(short *)(*(longlong *)(**(longlong **)(lVar19 + 0x40) + lStack_120)
                                         + (longlong)
                                           (iVar18 * *(int *)((longlong)
                                                              *(longlong **)(lVar19 + 0x40) + 0x2c)
                                           + iVar17) * 2);
                      if ((sVar15 != 0) && (sVar15 != 0x80)) {
                        cStack_158 = '\x01';
                        asStack_144[0] = sVar34;
                        uVar14 = func_0x0001400695b0(lStack_150,sVar12,sVar33,sVar34);
                        uVar29 = (uint)uVar14;
                        if (((((uVar29 == 0xd7) ||
                              (((uVar29 == 0x147 || (uVar29 == 0x14b)) || (uVar29 == 0x168)))) ||
                             (((uVar29 == 0x1b4 ||
                               (cVar10 = func_0x0001402c6be0(uVar14), cVar10 != '\0')) ||
                              (uVar29 == 0x165)))) || ((uVar29 == 0x166 || (uVar29 == 0x167)))) ||
                           ((uVar14 - 0x103 & 0xfffd) == 0)) {
                          cVar10 = func_0x00014028c900(uVar14);
                          if (cVar10 == '\0') {
                            cVar10 = func_0x00014028cbb0(uVar14);
                            if (cVar10 != '\0') {
                              uVar29 = FUN_140ece790();
                              uVar29 = uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff;
                              uVar30 = uVar29 >> 0x1d;
                              if (uVar29 >> 0x1d == 0) {
                                uVar13 = 0x154;
                              }
                              else if (uVar30 == 1) {
                                uVar13 = 0x155;
                              }
                              else if (uVar30 == 2) {
                                uVar13 = 0x156;
                              }
                              else {
                                uVar13 = 0x157;
                              }
                              goto LAB_1414de2ea;
                            }
                            cVar10 = func_0x00014028cd40(uVar14);
                            if (cVar10 != '\0') {
                              uVar29 = FUN_140ece790();
                              uVar29 = uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff;
                              uVar30 = uVar29 >> 0x1d;
                              if (uVar29 >> 0x1d == 0) {
                                uVar13 = 0x1b5;
                              }
                              else if (uVar30 == 1) {
                                uVar13 = 0x1b6;
                              }
                              else if (uVar30 == 2) {
                                uVar13 = 0x1b7;
                              }
                              else {
                                uVar13 = 0x1b8;
                              }
                              goto LAB_1414de2ea;
                            }
                            cVar10 = func_0x00014024af40(uVar14);
                            if (cVar10 == '\0') {
                              iVar17 = FUN_14014f7a0(lVar25,sVar12,sVar33);
                              if (-1 < iVar17) {
                                if ((ulonglong)(longlong)iVar17 <
                                    (ulonglong)
                                    (*(longlong *)(lVar25 + 0x11b3e0) -
                                     *(longlong *)(lVar25 + 0x11b3d8) >> 3)) {
                                  lVar19 = *(longlong *)
                                            (*(longlong *)(lVar25 + 0x11b3d8) + (longlong)iVar17 * 8
                                            );
                                  if ((*(int *)(lVar19 + 0x40) < 2) ||
                                     ((*(byte *)(*(longlong *)(lVar19 + 0x38) + 1) & 8) == 0)) {
                                    bVar36 = false;
                                  }
                                  else {
                                    bVar36 = true;
                                  }
                                  if (bVar36) {
                                    uVar29 = FUN_140ece790();
                                    uVar29 = uVar29 + (int)((longlong)
                                                            ((ulonglong)uVar29 * 0x100000003) >>
                                                           0x3f) * 0x7fffffff;
                                    uVar30 = uVar29 >> 0x1d;
                                    if (uVar29 >> 0x1d == 0) {
                                      uVar13 = 0x15c;
                                    }
                                    else if (uVar30 == 1) {
                                      uVar13 = 0x15d;
                                    }
                                    else if (uVar30 == 2) {
                                      uVar13 = 0x15e;
                                    }
                                    else {
                                      uVar13 = 0x15f;
                                    }
                                    goto LAB_1414de2ea;
                                  }
                                }
                              }
                              if (uVar14 != 0x103) {
                                uVar29 = FUN_140ece790();
                                uVar29 = uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003)
                                                       >> 0x3f) * 0x7fffffff;
                                uVar30 = uVar29 >> 0x1d;
                                if (uVar29 >> 0x1d == 0) {
                                  uVar13 = 0x14c;
                                }
                                else if (uVar30 == 1) {
                                  uVar13 = 0x14d;
                                }
                                else if (uVar30 == 2) {
                                  uVar13 = 0x14e;
                                }
                                else {
                                  uVar13 = 0x14f;
                                }
                                goto LAB_1414de2ea;
                              }
                              psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0x104);
                            }
                            else {
                              psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0xff);
                            }
                          }
                          else {
                            uVar29 = FUN_140ece790();
                            uVar29 = uVar29 + (int)((longlong)((ulonglong)uVar29 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff;
                            uVar30 = uVar29 >> 0x1d;
                            if (uVar29 >> 0x1d == 0) {
                              uVar13 = 0x150;
                            }
                            else if (uVar30 == 1) {
                              uVar13 = 0x151;
                            }
                            else if (uVar30 == 2) {
                              uVar13 = 0x152;
                            }
                            else {
                              uVar13 = 0x153;
                            }
LAB_1414de2ea:
                            psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
                          }
                          func_0x000140291d30(lVar25,sVar12,sVar33,sVar32);
                        }
                        else {
                          uVar13 = func_0x0001400695b0(lVar25,sVar12,sVar33);
                          cVar10 = func_0x000140259d80(uVar13);
                          uVar13 = 1;
                          if (cVar10 == '\0') {
                            uVar13 = 0x20;
                          }
                          psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
                          func_0x000140291d30(lVar25,sVar12,sVar33,sVar32);
                          sVar15 = func_0x0001400695b0(lVar25,sVar12);
                          if (sVar15 == 0x1eb) {
LAB_1414dde7d:
                            psStack_180 = (short *)CONCAT44(psStack_180._4_4_,
                                                            (int)(*(longlong *)(lVar25 + 0x158) -
                                                                  *(longlong *)(lVar25 + 0x150) >> 3
                                                                 ) + -1);
                            psStack_188 = (short *)((ulonglong)psStack_188 & 0xffffffff00000000);
                            lVar19 = FUN_140a60840(lVar25,sVar12,sVar33,sVar34);
                            if (lVar19 != 0) {
                              psVar20 = (short *)FUN_1415530e0(0x1c);
                              psVar20[3] = -1;
                              psVar20[4] = -1;
                              psVar20[5] = -1;
                              psVar20[6] = -1;
                              psVar20[7] = -1;
                              *(undefined1 *)(psVar20 + 8) = 0;
                              psVar20[9] = 0x20;
                              psVar20[10] = -1;
                              psVar20[0xc] = -1;
                              psVar20[0xd] = -1;
                              *psVar20 = sVar12;
                              psVar20[1] = sVar33;
                              psVar20[2] = sVar32;
                              psVar20[3] = *(short *)(lVar19 + 6);
                              psVar20[4] = *(short *)(lVar19 + 8);
                              psVar20[5] = *(short *)(lVar19 + 10);
                              *(undefined4 *)(psVar20 + 6) = *(undefined4 *)(lVar19 + 0xc);
                              *(undefined1 *)(psVar20 + 8) = 2;
                              psStack_98 = psVar20;
                              sVar15 = func_0x0001400695b0(lVar25,sVar12,sVar33,sVar32);
                              psVar20[9] = sVar15;
                              FUN_140a60320(lVar25,psVar20);
                              psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0x1e9);
                              func_0x000140291d30(lVar25,sVar12,sVar33,sVar32);
                            }
                          }
                          else {
                            uVar13 = func_0x0001400695b0(lVar25,sVar12,sVar33);
                            cVar10 = func_0x0001402c7160(uVar13);
                            if (cVar10 != '\0') {
                              uVar13 = func_0x0001400695b0(lVar25,sVar12,sVar33);
                              cVar10 = func_0x00014024ae20(uVar13);
                              if (cVar10 != '\0') goto LAB_1414dde7d;
                            }
                          }
                          uVar21 = func_0x000140069640(0x1423f3970,sVar12,sVar33,sVar32);
                          if (((uVar21 & 7) != 0) &&
                             (iVar17 = (int)(_DAT_1424103b0 - _DAT_1424103a8 >> 3) + -1,
                             lVar19 = (longlong)iVar17, -1 < iVar17)) {
                            lVar25 = lVar19 * 8;
                            do {
                              if ((*(int *)(*(longlong *)(lVar25 + _DAT_1424103a8) + 0x20) ==
                                   (int)sVar32) &&
                                 (iVar17 = (**(code **)(**(longlong **)(_DAT_1424103a8 + lVar19 * 8)
                                                       + 0xd0))(), iVar17 != 0x13)) {
                                plVar24 = *(longlong **)(_DAT_1424103a8 + lVar19 * 8);
                                cVar10 = (**(code **)(*plVar24 + 0x130))(plVar24);
                                if ((cVar10 != '\0') && ((int)sVar32 == (int)plVar24[4])) {
                                  cVar10 = (**(code **)(*plVar24 + 0x140))(plVar24);
                                  if ((cVar10 == '\0') || (plVar24[6] == 0)) {
                                    if (((int)plVar24[1] <= (int)sVar12) &&
                                       ((((int)sVar12 <= *(int *)((longlong)plVar24 + 0x14) &&
                                         (*(int *)((longlong)plVar24 + 0xc) <= (int)sVar33)) &&
                                        ((int)sVar33 <= (int)plVar24[3])))) goto LAB_1414de049;
                                  }
                                  else {
                                    cVar10 = FUN_140571c90(plVar24,sVar12,sVar33,sVar32);
                                    if (cVar10 != '\0') {
LAB_1414de049:
                                      FUN_1405a1250(*(undefined8 *)(_DAT_1424103a8 + lVar19 * 8),0,1
                                                    ,0);
                                    }
                                  }
                                }
                              }
                              lVar19 = lVar19 + -1;
                              lVar25 = lVar25 + -8;
                              sVar34 = asStack_144[0];
                            } while (-1 < lVar19);
                          }
                        }
                        FUN_1414c3bf0(0x1423f3970,sVar12,sVar33,sVar32);
                        sVar15 = sVar12 + -2;
                        iVar35 = (int)sVar12;
                        lVar19 = lStack_128;
                        sVar12 = sStack_156;
                        iVar17 = iStack_13c;
                        iVar18 = iStack_130;
                        if ((int)sVar15 <= iVar35 + 2) {
                          do {
                            uVar29 = (uint)(short)(sVar33 + -2);
                            sVar12 = sStack_156;
                            sVar34 = asStack_144[0];
                            iVar17 = iStack_13c;
                            iVar18 = iStack_130;
                            lVar19 = lStack_128;
                            uVar30 = uVar29;
                            while (sStack_156 = sVar12, asStack_144[0] = sVar34, iStack_13c = iVar17
                                  , iStack_130 = iVar18, lStack_128 = lVar19,
                                  (int)uVar30 <= sVar33 + 2) {
                              uVar21 = func_0x000140069640(0x1423f3970,sVar15,uVar29 & 0xffff,sVar32
                                                          );
                              sVar12 = sStack_156;
                              lVar19 = lStack_128;
                              sVar34 = asStack_144[0];
                              iVar17 = iStack_13c;
                              iVar18 = iStack_130;
                              if ((uVar21 & 7) != 0) {
                                DAT_142411579 = 1;
                                goto LAB_1414de3a7;
                              }
                              uVar14 = (short)uVar29 + 1;
                              uVar29 = (uint)uVar14;
                              uVar30 = (uint)(short)uVar14;
                            }
                            sVar15 = sVar15 + 1;
                          } while ((int)sVar15 <= iVar35 + 2);
                        }
                      }
LAB_1414de3a7:
                      sVar32 = sVar32 + -1;
                      sVar34 = sVar34 + -1;
                      asStack_138[0] = asStack_138[0] + -1;
                      lStack_120 = lStack_120 + -8;
                      asStack_144[0] = sVar34;
                    } while (-1 < asStack_138[0]);
                  }
                  sVar12 = *(short *)(lVar19 + 8);
                  sVar34 = 0;
                  lVar25 = *(longlong *)(lVar19 + 0x40);
                  sVar32 = sStack_156;
                  sVar33 = sVar12;
                  cVar10 = cStack_158;
                  if (0 < *(int *)(lVar25 + 0x40)) {
                    do {
                      sVar15 = sStack_148;
                      sVar33 = sVar33 + -1;
                      cVar11 = *(char *)((longlong)(iVar18 * *(int *)(lVar25 + 0x2c) + iVar17) +
                                        *(longlong *)
                                         (*(longlong *)(lVar25 + 0x38) + (longlong)sVar34 * 8));
                      if ((cVar11 != '\0') && (cVar11 != -0x80)) {
                        lVar19 = (longlong)sStack_148;
                        sVar16 = func_0x0001400695b0(lStack_150,sVar32,sStack_148,sVar33);
                        iVar17 = iStack_13c;
                        iVar18 = iStack_130;
                        cVar10 = cStack_158;
                        if (sVar16 == 0x5c) {
                          uVar29 = (uint)sStack_156;
                          if (((sStack_156 < 0) || (_DAT_14250a55c <= (int)uVar29)) ||
                             ((sVar15 < 0 ||
                              (((_DAT_14250a560 <= sVar15 || (sVar33 < 0)) ||
                               (_DAT_14250a564 <= sVar33)))))) {
                            if (-1 < sStack_156) goto LAB_1414de529;
LAB_1414de5fb:
                            sVar16 = 0;
                          }
                          else {
                            if ((_DAT_14250a528 != 0) &&
                               (lVar19 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (_DAT_14250a528 + ((longlong)sStack_156 >> 4) * 8) +
                                            (lVar19 >> 4) * 8) + (longlong)sVar33 * 8), lVar19 != 0)
                               ) {
                              uVar30 = uVar29 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              uVar31 = (int)sVar15 & 0x8000000f;
                              if ((int)uVar31 < 0) {
                                uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar19 + (((longlong)(int)uVar30 + 5) * 0x10 + (longlong)(int)uVar31
                                         ) * 2) = 0x105;
                            }
LAB_1414de529:
                            if (((*(int *)(lStack_150 + 0x116bec) <= (int)sStack_156) ||
                                (sStack_148 < 0)) ||
                               ((*(int *)(lStack_150 + 0x116bf0) <= (int)sVar15 ||
                                ((((sVar12 < 0 || (*(int *)(lStack_150 + 0x116bf4) <= (int)sVar12))
                                  || (*(longlong *)(lStack_150 + 0x116bb8) == 0)) ||
                                 (lVar19 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(lStack_150 + 0x116bb8) +
                                                ((longlong)sStack_156 >> 4) * 8) +
                                              ((longlong)sStack_148 >> 4) * 8) +
                                            (longlong)sVar12 * 8), lVar19 == 0))))))
                            goto LAB_1414de5fb;
                            uVar30 = (int)sStack_156 & 0x8000000f;
                            if ((int)uVar30 < 0) {
                              uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                            }
                            uVar31 = (int)sVar15 & 0x8000000f;
                            if ((int)uVar31 < 0) {
                              uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
                            }
                            sVar16 = *(short *)(lVar19 + (((longlong)(int)uVar30 + 5) * 0x10 +
                                                         (longlong)(int)uVar31) * 2);
                          }
                          if (((sVar16 == 1) || (sVar16 == 0x20)) ||
                             ((sVar16 == 0x23 || (sVar32 = sStack_156, sVar16 == 0x2a)))) {
                            uVar30 = FUN_140ece790();
                            uVar30 = uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >>
                                                   0x3f) * 0x7fffffff;
                            uVar31 = uVar30 >> 0x1d;
                            if (uVar30 >> 0x1d == 0) {
                              uVar13 = 0x15c;
                            }
                            else if (uVar31 == 1) {
                              uVar13 = 0x15d;
                            }
                            else if (uVar31 == 2) {
                              uVar13 = 0x15e;
                            }
                            else {
                              uVar13 = 0x15f;
                            }
                            if ((((-1 < sStack_156) && ((int)uVar29 < _DAT_14250a55c)) &&
                                ((-1 < sStack_148 &&
                                 (((sVar15 < _DAT_14250a560 && (-1 < sVar12)) &&
                                  (sVar12 < _DAT_14250a564)))))) &&
                               ((_DAT_14250a528 != 0 &&
                                (lVar19 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (_DAT_14250a528 + ((longlong)sStack_156 >> 4) * 8) +
                                             ((longlong)sStack_148 >> 4) * 8) + (longlong)sVar12 * 8
                                           ), lVar19 != 0)))) {
                              uVar29 = uVar29 & 0x8000000f;
                              if ((int)uVar29 < 0) {
                                uVar29 = (uVar29 - 1 | 0xfffffff0) + 1;
                              }
                              uVar30 = (int)sVar15 & 0x8000000f;
                              if ((int)uVar30 < 0) {
                                uVar30 = (uVar30 - 1 | 0xfffffff0) + 1;
                              }
                              *(undefined2 *)
                               (lVar19 + (((longlong)(int)uVar29 + 5) * 0x10 + (longlong)(int)uVar30
                                         ) * 2) = uVar13;
                            }
                            cStack_158 = '\x01';
                            sVar32 = sStack_156;
                            iVar17 = iStack_13c;
                            iVar18 = iStack_130;
                            cVar10 = cStack_158;
                          }
                        }
                      }
                      sVar12 = sVar12 + -1;
                      sVar34 = sVar34 + 1;
                      lVar25 = *(longlong *)(lStack_128 + 0x40);
                      lVar19 = lStack_128;
                    } while ((int)sVar34 < *(int *)(lVar25 + 0x40));
                  }
                  sVar33 = sStack_148;
                  sVar12 = sStack_156;
                  if (cVar10 != '\0') {
                    FUN_1414be950(0x1423f3970,sStack_156,sStack_148);
                    adjacent_tile(0x1423f3970,sVar12,sVar33,1);
                  }
                  sVar33 = sVar33 + 1;
                  asStack_134[0] = asStack_134[0] + 1;
                  lVar25 = *(longlong *)(lVar19 + 0x40);
                  iStack_130 = (int)asStack_134[0];
                  sStack_148 = sVar33;
                } while (iStack_130 < *(int *)(lVar25 + 0x30));
              }
              sVar12 = sVar12 + 1;
              asStack_140[0] = asStack_140[0] + 1;
              iStack_13c = (int)asStack_140[0];
              sStack_156 = sVar12;
            } while (iStack_13c < *(int *)(lVar25 + 0x2c));
          }
        }
        iVar17 = (int)(*(longlong *)(lStack_150 + 0x1dde0) - *(longlong *)(lStack_150 + 0x1ddd8) >>
                      3) + -1;
        if (-1 < iVar17) {
          lVar25 = (longlong)iVar17;
          plVar24 = (longlong *)(*(longlong *)(lStack_150 + 0x1ddd8) + lVar25 * 8);
          do {
            if (*plVar24 == lVar19) {
              lVar19 = *(longlong *)(*(longlong *)(lStack_150 + 0x1ddd8) + (longlong)iVar17 * 8);
              if (lVar19 != 0) {
                FUN_141415e50(lVar19);
                func_0x0001415530d0(lVar19,0x48);
              }
              break;
            }
            iVar17 = iVar17 + -1;
            plVar24 = plVar24 + -1;
            lVar25 = lVar25 + -1;
          } while (-1 < lVar25);
        }
      }
      goto LAB_1414de835;
    }
    switch(uVar31) {
    case 0x158:
    case 0x159:
    case 0x15a:
    case 0x15b:
    case 0x17f:
    case 0x180:
    case 0x181:
    case 0x182:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18a:
    case 0x18b:
    case 0x18c:
    case 0x18d:
      if (((param_5 == '\0') && (param_6 < 2)) &&
         (lVar19 = FUN_1414ea5a0(0x1423f3970,param_2,param_3,param_4), lVar19 != 0)) {
        uVar31 = uVar29 & 0x8000000f;
        if ((int)uVar31 < 0) {
          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
        }
        uVar27 = uVar30 & 0x8000000f;
        if ((int)uVar27 < 0) {
          uVar27 = (uVar27 - 1 | 0xfffffff0) + 1;
        }
        lVar19 = (longlong)(short)uVar31 * 0x10 + lVar19;
        pcVar1 = (char *)((longlong)(short)uVar27 + 0xc + lVar19);
        *pcVar1 = *pcVar1 + -10;
        if (*pcVar1 != '\0') break;
        *(undefined1 *)((longlong)(short)uVar27 + 0xc + lVar19) = 0;
      }
      uVar31 = FUN_140ece790();
      uVar31 = uVar31 + (int)((longlong)((ulonglong)uVar31 * 0x100000003) >> 0x3f) * 0x7fffffff;
      uVar27 = uVar31 >> 0x1d;
      if (uVar31 >> 0x1d == 0) {
        uVar13 = 0x15c;
      }
      else if (uVar27 == 1) {
        uVar13 = 0x15d;
      }
      else if (uVar27 == 2) {
        uVar13 = 0x15e;
      }
      else {
        uVar13 = 0x15f;
      }
      psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
      func_0x000140291d30(lStack_150,param_2,param_3,param_4);
    }
    uVar14 = func_0x0001400695b0(lStack_150,param_2,param_3,param_4);
    if (uVar14 < 0xe8) {
      if (uVar14 != 0xe7) {
        if (uVar14 == 0x22) {
          psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0x185);
          func_0x000140291d30(lStack_150,param_2,param_3,param_4);
          bVar36 = true;
        }
        else if (uVar14 == 0xe3) {
          psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0x184);
          func_0x000140291d30(lStack_150,param_2,param_3,param_4);
          bVar36 = true;
        }
        else if ((uVar14 == 0xe5) || (uVar14 == 0xe6)) goto LAB_1414de9cf;
        goto LAB_1414deb84;
      }
LAB_1414de9cf:
      if ((param_5 != '\0') || (1 < param_6)) {
        psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0xed);
        func_0x000140291d30(lStack_150,param_2,param_3,param_4);
        goto LAB_1414deb84;
      }
      lVar25 = FUN_1414ea5a0(0x1423f3970,param_2,param_3,param_4);
      lVar19 = lStack_150;
      if (lVar25 == 0) {
        psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0xed);
        func_0x000140291d30(lStack_150,param_2,param_3,param_4);
      }
      else {
        uVar31 = uVar29 & 0x8000000f;
        if ((int)uVar31 < 0) {
          uVar31 = (uVar31 - 1 | 0xfffffff0) + 1;
        }
        uVar27 = uVar30 & 0x8000000f;
        if ((int)uVar27 < 0) {
          uVar27 = (uVar27 - 1 | 0xfffffff0) + 1;
        }
        lVar25 = (longlong)(short)uVar31 * 0x10 + lVar25;
        pcVar1 = (char *)((longlong)(short)uVar27 + 0xc + lVar25);
        *pcVar1 = *pcVar1 + -10;
        if (*pcVar1 == '\0') {
          *(undefined1 *)((longlong)(short)uVar27 + 0xc + lVar25) = 0;
          psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0xed);
          func_0x000140291d30(lStack_150,param_2,param_3,param_4);
        }
      }
    }
    else {
      if (uVar14 == 0xe8) goto LAB_1414de9cf;
      if ((uVar14 == 0x184) || (uVar14 == 0x185)) {
        uVar31 = FUN_140ece790();
        uVar31 = uVar31 + (int)((longlong)((ulonglong)uVar31 * 0x100000003) >> 0x3f) * 0x7fffffff;
        uVar27 = uVar31 >> 0x1d;
        if (uVar31 >> 0x1d == 0) {
          uVar13 = 0x15c;
        }
        else if (uVar27 == 1) {
          uVar13 = 0x15d;
        }
        else if (uVar27 == 2) {
          uVar13 = 0x15e;
        }
        else {
          uVar13 = 0x15f;
        }
        psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
        func_0x000140291d30(lStack_150,param_2,param_3,param_4);
        bVar36 = true;
      }
LAB_1414deb84:
      lVar19 = lStack_150;
      if (param_5 != '\0') {
        psStack_168 = asStack_134;
        piStack_170 = &iStack_13c;
        psStack_178 = asStack_140;
        psStack_180 = asStack_138;
        psStack_188 = asStack_144;
        FUN_1414e9ee0(0x1423f3970,param_2,param_3,param_4);
        lVar19 = lStack_150;
        uVar14 = func_0x0001400695b0(lStack_150,param_2,param_3,param_4);
        if (uVar14 < 0x35) {
          if ((0x12009002000040U >> ((ulonglong)uVar14 & 0x3f) & 1) == 0) goto LAB_1414dec54;
LAB_1414dec05:
          uVar13 = func_0x0001400695b0(lVar19,param_2,param_3);
          cVar11 = func_0x00014028c900(uVar13);
          if (cVar11 == '\0') {
            uVar13 = func_0x0001400695b0(lVar19,param_2,param_3);
            cVar11 = func_0x00014028cbb0(uVar13);
            if (cVar11 == '\0') {
              uVar13 = func_0x0001400695b0(lVar19,param_2,param_3);
              cVar11 = func_0x00014028cd40(uVar13);
              if (cVar11 == '\0') {
                if (((asStack_140[0] == 0) && (-1 < iStack_13c)) &&
                   ((ulonglong)(longlong)iStack_13c <
                    (ulonglong)
                    (*(longlong *)(lVar19 + 0x11b3e0) - *(longlong *)(lVar19 + 0x11b3d8) >> 3))) {
                  lVar25 = *(longlong *)
                            (*(longlong *)(lVar19 + 0x11b3d8) + (longlong)iStack_13c * 8);
                  if ((*(int *)(lVar25 + 0x40) < 2) ||
                     ((*(byte *)(*(longlong *)(lVar25 + 0x38) + 1) & 8) == 0)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  uVar13 = 0x28;
                  if (bVar5) goto LAB_1414def13;
                }
                uVar13 = 0x38;
              }
              else {
                uVar13 = 0x3b;
              }
            }
            else {
              uVar13 = 0x3e;
            }
          }
          else {
            uVar13 = 0x25;
          }
LAB_1414def13:
          psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
          func_0x000140291d30(lVar19,param_2,param_3);
        }
        else {
          if ((((uVar14 == 0x37) || (uVar14 == 0x3a)) || (uVar14 == 0x3d)) ||
             ((uVar14 == 0x1dd || (uVar14 == 0x1ff)))) goto LAB_1414dec05;
LAB_1414dec54:
          uVar14 = func_0x0001400695b0(lVar19,param_2,param_3);
          if (uVar14 < 0x36) {
            if ((0x24012004000020U >> ((ulonglong)uVar14 & 0x3f) & 1) == 0) goto LAB_1414decb1;
          }
          else if ((((uVar14 != 0x38) && (uVar14 != 0x3b)) && (uVar14 != 0x3e)) &&
                  ((uVar14 != 0x1de && (uVar14 != 0x200)))) {
LAB_1414decb1:
            uVar13 = func_0x0001400695b0(lVar19,param_2,param_3);
            cVar11 = func_0x000140259d80(uVar13);
            if ((cVar11 != '\0') &&
               (sVar12 = func_0x0001400695b0(lVar19,param_2,param_3,param_4 + 1), sVar12 == 1)) {
              psStack_188 = (short *)CONCAT62(psStack_188._2_6_,0x20);
              func_0x000140291d30(lVar19,param_2,param_3);
            }
            if (((asStack_140[0] == 0) && (-1 < iStack_13c)) &&
               ((ulonglong)(longlong)iStack_13c <
                (ulonglong)
                (*(longlong *)(lVar19 + 0x11b3e0) - *(longlong *)(lVar19 + 0x11b3d8) >> 3))) {
              lVar25 = *(longlong *)(*(longlong *)(lVar19 + 0x11b3d8) + (longlong)iStack_13c * 8);
              if ((*(int *)(lVar25 + 0x40) < 2) ||
                 ((*(byte *)(*(longlong *)(lVar25 + 0x38) + 1) & 8) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                if ((*(int *)(lVar25 + 0x40) < 2) ||
                   ((*(byte *)(*(longlong *)(lVar25 + 0x38) + 1) & 0x20) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  uVar31 = FUN_140ece790();
                  uVar31 = uVar31 + (int)((longlong)((ulonglong)uVar31 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                  uVar27 = uVar31 >> 0x1d;
                  if (uVar31 >> 0x1d == 0) {
                    uVar13 = 0x15c;
                  }
                  else if (uVar27 == 1) {
                    uVar13 = 0x15d;
                  }
                  else if (uVar27 == 2) {
                    uVar13 = 0x15e;
                  }
                  else {
                    uVar13 = 0x15f;
                  }
                }
                else {
                  uVar13 = 0x101;
                }
                psStack_188 = (short *)CONCAT62(psStack_188._2_6_,uVar13);
                func_0x000140291d30(lVar19,param_2,param_3,param_4);
                goto LAB_1414def23;
              }
            }
            uVar31 = FUN_140ece790();
            uVar31 = uVar31 + (int)((longlong)((ulonglong)uVar31 * 0x100000003) >> 0x3f) *
                              0x7fffffff;
            uVar27 = uVar31 >> 0x1d;
            if (uVar31 >> 0x1d == 0) {
              uVar13 = 0x14c;
            }
            else if (uVar27 == 1) {
              uVar13 = 0x14d;
            }
            else if (uVar27 == 2) {
              uVar13 = 0x14e;
            }
            else {
              uVar13 = 0x14f;
            }
            goto LAB_1414def13;
          }
        }
LAB_1414def23:
        FUN_141455cf0(lVar19,param_2,param_3,param_4);
      }
    }
    if (((_DAT_1418be238 == 0) &&
        (iVar18 = func_0x0001414559f0(lVar19,param_2,param_3,param_4), iVar18 == 0x10)) && (bVar36))
    {
      psStack_188._0_4_ = iVar18;
      func_0x00014014f710(lVar19,param_2,param_3);
      psStack_188._0_4_ = 0x20;
      func_0x00014014f710(lVar19,param_2);
      psStack_188 = (short *)CONCAT44(psStack_188._4_4_,0x40);
      func_0x00014014f710(lVar19,param_2);
    }
    lVar25 = lStack_150;
    plVar24 = *(longlong **)(lVar19 + 0x14cd8);
    param_1 = lStack_150;
    while (lStack_150 = param_1, plVar24 != (longlong *)0x0) {
      lVar19 = *plVar24;
      if (((*(short *)(lVar19 + 0x14) == 0xc) && ((*(byte *)(lVar19 + 0x40) & 1) == 0)) &&
         ((*(short *)(lVar19 + 0x1c) == param_2 &&
          ((*(ushort *)(lVar19 + 0x1e) == param_3 && (*(short *)(lVar19 + 0x20) == param_4)))))) {
        plVar24 = (longlong *)plVar24[2];
        (*(code *)**(undefined8 **)(lVar25 + 0x14cc0))();
        cVar10 = cStack_158;
        param_1 = lStack_150;
      }
      else {
        plVar24 = (longlong *)plVar24[2];
        cVar10 = cStack_158;
      }
    }
  }
  if (cVar10 == '\0') goto LAB_1414de835;
  if (((((-1 < param_2) && (-1 < (short)param_3)) && ((int)uVar29 < *(int *)(param_1 + 0x116bec)))
      && (((int)uVar30 < *(int *)(param_1 + 0x116bf0) && (-1 < param_4)))) &&
     (iVar17 < *(int *)(param_1 + 0x116bf4))) {
    uVar14 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
    if (uVar14 < 0x165) {
      if (((uVar14 == 0x164) || (uVar14 == 0x41)) || (uVar14 == 0x142)) goto LAB_1414de835;
      bVar36 = uVar14 == 0x143;
    }
    else {
      if (uVar14 == 0x1b0) goto LAB_1414de835;
      bVar36 = uVar14 == 0x1ea;
    }
    if ((((((bVar36) || (uVar14 == 0x53)) || (uVar14 == 0x4f)) ||
         ((uVar14 == 0x50 || (uVar14 == 0x51)))) || (uVar14 == 0x52)) ||
       ((uVar14 == 0x1eb || (cVar10 = func_0x0001402c7160(uVar14), cVar10 != '\0'))))
    goto LAB_1414de835;
  }
  uVar14 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  if (uVar14 < 0x1da) {
    if (((uVar14 == 0x1d9) || (uVar14 == 0x2b)) ||
       ((uVar14 == 0x2c || ((uVar14 == 0x2d || (uVar14 == 0x2e)))))) goto LAB_1414de835;
    bVar36 = uVar14 == 0x2f;
  }
  else {
    if (((uVar14 == 0x1da) || (uVar14 == 0x1db)) || (uVar14 == 0x1dc)) goto LAB_1414de835;
    bVar36 = uVar14 == 0x1e9;
  }
  if ((!bVar36) &&
     (iVar17 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(lStack_150 + 0x78) >> 3) + -1,
     -1 < iVar17)) {
    lVar19 = (longlong)iVar17 * 8;
    lVar25 = lStack_150;
    do {
      puVar2 = *(undefined4 **)(lVar19 + *(longlong *)(lVar25 + 0x78));
      if (((*(short *)(puVar2 + 3) == param_2) && (*(ushort *)((longlong)puVar2 + 0xe) == param_3))
         && (*(short *)(puVar2 + 4) == param_4)) {
        if (*(short *)((longlong)puVar2 + 0x22) == 5) {
          lVar22 = FUN_1400693f0(lVar25 + 0x1287c8,*puVar2);
          lVar25 = FUN_1413e54b0(lStack_150 + 0x13bc0,*puVar2);
          lStack_120 = lVar25;
          if (lVar22 != 0) {
            if (_DAT_1418be238 == 0) {
              bVar4 = DAT_1423b3524 & 0x70;
            }
            else {
              bVar4 = DAT_1423b3524 & 8;
            }
            if (bVar4 != 0) {
              uStack_88 = 0;
              uStack_80 = 0;
              uStack_78 = 0xf;
              puStack_90 = (undefined8 *)0x0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0xf;
              pppppppuStack_70 = (undefined8 *******)0x0;
              if (param_6 == 1) {
                puStack_90 = (undefined8 *)FUN_140071e00(0x30);
                uVar9 = _UNK_1417a99d4;
                uVar8 = _UNK_1417a99d0;
                uVar7 = _UNK_1417a99cc;
                uStack_80 = 0x20;
                uStack_78 = 0x2f;
                *(undefined4 *)puStack_90 = _DAT_1417a99c8;
                *(undefined4 *)((longlong)puStack_90 + 4) = uVar7;
                *(undefined4 *)(puStack_90 + 1) = uVar8;
                *(undefined4 *)((longlong)puStack_90 + 0xc) = uVar9;
                uVar6 = _UNK_1417a99e0;
                puStack_90[2] = _DAT_1417a99d8;
                puStack_90[3] = uVar6;
                *(undefined1 *)(puStack_90 + 4) = 0;
              }
              else {
                puStack_90 = (undefined8 *)FUN_140071e00(0x20);
                uVar6 = _UNK_1417a99b0;
                uStack_80 = 0x1c;
                uStack_78 = 0x1f;
                *puStack_90 = _DAT_1417a99a8;
                puStack_90[1] = uVar6;
                puStack_90[2] = _DAT_1417a99b8;
                *(undefined4 *)(puStack_90 + 3) = _DAT_1417a99c0;
                *(undefined1 *)((longlong)puStack_90 + 0x1c) = 0;
              }
              if (((*(longlong *)(lVar22 + 0x130) == 0) ||
                  (lVar23 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + 0x58), lVar23 == 0)) ||
                 ((*(int *)(lVar23 + 0x30) == -1 ||
                  (lVar23 = FUN_140073ba0(0x14250a168), lVar23 == 0)))) {
                lVar23 = lVar22 + 0x38;
              }
              else {
                lVar23 = FUN_140c521e0(lVar23);
              }
              if ((lVar23 != 0) && (*(char *)(lVar23 + 0x72) != '\0')) {
                FUN_140aadad0(lVar23,&pppppppuStack_70);
              }
              pppppppuVar28 = &pppppppuStack_70;
              if (0xf < uStack_58) {
                pppppppuVar28 = pppppppuStack_70;
              }
              FUN_140071040(&puStack_90,pppppppuVar28,uStack_60);
              FUN_140071040(&puStack_90,&UNK_1416096b8,1);
              uStack_10c = 0;
              uStack_108 = 0x8ad08ad0;
              uStack_104 = 0x8ad0;
              uStack_100 = 0;
              uStack_f8 = 0;
              uStack_f0 = 0;
              uStack_e8 = 0xffffffffffffffff;
              uStack_e0 = 0xffffffff;
              uStack_dc = 0;
              uStack_d8 = 0xffffffff;
              uStack_118 = 0x40101;
              uStack_114 = 0;
              uStack_fc = 2000;
              sStack_112 = param_2;
              uStack_110 = param_3;
              sStack_10e = param_4;
              FUN_1400e5250(0x142505cd0,&puStack_90,&uStack_118);
              if (0xf < uStack_58) {
                if (0xfff < uStack_58 + 1) {
                  if (0x1f < (ulonglong)
                             ((longlong)pppppppuStack_70 + (-8 - (longlong)pppppppuStack_70[-1]))) {
                    _invalid_parameter_noinfo_noreturn(pppppppuStack_70[-1],uStack_58 + 0x28);
                    goto LAB_1414df546;
                  }
                }
                func_0x0001415530d0();
              }
              uStack_60 = 0;
              uStack_58 = 0xf;
              pppppppuStack_70 =
                   (undefined8 *******)((ulonglong)pppppppuStack_70 & 0xffffffffffffff00);
              if (0xf < uStack_78) {
                uVar21 = uStack_78 + 1;
                puVar26 = puStack_90;
                if (0xfff < uVar21) {
                  uVar21 = uStack_78 + 0x28;
                  puVar26 = (undefined8 *)puStack_90[-1];
                  if (0x1f < (ulonglong)((longlong)puStack_90 + (-8 - (longlong)puVar26))) {
LAB_1414df546:
                    _invalid_parameter_noinfo_noreturn();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                func_0x0001415530d0(puVar26,uVar21);
              }
            }
            if (*(int *)(*(longlong *)(*(longlong *)(lStack_150 + 0x78) + lVar19) + 4) != -1) {
              plVar24 = (longlong *)FUN_14054a680();
              *(undefined4 *)(plVar24 + 5) =
                   *(undefined4 *)(*(longlong *)(*(longlong *)(lStack_150 + 0x78) + lVar19) + 4);
              psStack_180 = (short *)((ulonglong)psStack_180 & 0xffffffffffffff00);
              psStack_188 = (short *)CONCAT71(psStack_188._1_7_,1);
              lVar25 = FUN_1414c3770(lStack_150,param_2,param_3,param_4);
              if (lVar25 != 0) {
                *(undefined4 *)(plVar24 + 6) = *(undefined4 *)(lVar25 + 0x88);
              }
              *(undefined4 *)(plVar24 + 1) = _DAT_142167754;
              *(undefined4 *)((longlong)plVar24 + 0xc) = _DAT_1423aa348;
              (**(code **)(*plVar24 + 0x128))(plVar24);
              FUN_140bcebe0(lVar22,*(undefined4 *)
                                    (*(longlong *)(*(longlong *)(lStack_150 + 0x78) + lVar19) + 4));
              lVar25 = lStack_120;
            }
          }
          if (lVar25 != 0) {
            uStack_c4 = 0xffffffff;
            uStack_c0 = 0;
            uStack_bc = 100;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0x9d;
            func_0x000141408f60(lVar25,&uStack_c8);
          }
        }
        FUN_14054a330(lStack_150,iVar17);
        lVar25 = lStack_150;
      }
      lVar19 = lVar19 + -8;
      iVar17 = iVar17 + -1;
    } while (-1 < iVar17);
  }
LAB_1414de835:
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_1a8);
  return;
}

