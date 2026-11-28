/* Actual Ghidra output; researcher-assigned name. VA 0x1414770d0..0x14147ba35; see image.txt for input identity. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void collapse_scan(longlong param_1)

{
  short *psVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  code *pcVar6;
  undefined3 uVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  char *pcVar18;
  uint *puVar19;
  ushort *puVar20;
  short sVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  ushort uVar25;
  short sVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  ushort uVar31;
  short sVar32;
  longlong lVar33;
  char cVar34;
  short sVar35;
  short sVar36;
  char cVar37;
  ulonglong uVar38;
  undefined7 uVar39;
  uint *puVar40;
  short sVar41;
  bool bVar42;
  byte bStackX_10;
  ulonglong uStackX_18;
  char acStackX_20 [8];
  uint in_stack_fffffffffffffe88;
  uint3 uVar43;
  undefined2 uVar44;
  uint in_stack_fffffffffffffea0;
  ushort uStack_144;
  char acStack_142 [2];
  int iStack_140;
  longlong lStack_138;
  uint uStack_130;
  short sStack_12c;
  short sStack_12a;
  char cStack_128;
  longlong lStack_120;
  byte bStack_118;
  longlong lStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  int iStack_d8;
  int iStack_d4;
  longlong lStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  longlong lStack_b8;
  ulonglong *puStack_b0;
  ulonglong *puStack_a8;
  short asStack_a0 [2];
  short asStack_9c [2];
  uint *puStack_98;
  uint *puStack_90;
  undefined1 auStack_88 [4];
  undefined2 auStack_84 [2];
  ulonglong uStack_80;
  short *psStack_78;
  uint *puStack_70;
  uint *puStack_68;
  longlong lStack_60;
  longlong lStack_58;
  
  FUN_1402875a0(acStackX_20,0x18);
  iVar27 = (int)(*(longlong *)(param_1 + 0x128230) - *(longlong *)(param_1 + 0x128228) >> 1) + -1;
  if (-1 < iVar27) {
    lVar29 = (longlong)iVar27 * 2;
    lVar33 = lVar29;
    do {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x128270) + lVar29);
      *psVar1 = *psVar1 + -1;
      if (*(short *)(lVar29 + *(longlong *)(param_1 + 0x128270)) < 1) {
        lVar17 = *(longlong *)(param_1 + 0x128228) + lVar33;
        lVar24 = lVar17 + 2;
        func_0x00014155486a(lVar17,lVar24,*(longlong *)(param_1 + 0x128230) - lVar24);
        *(longlong *)(param_1 + 0x128230) = *(longlong *)(param_1 + 0x128230) + -2;
        lVar17 = *(longlong *)(param_1 + 0x128240) + lVar33;
        lVar24 = lVar17 + 2;
        func_0x00014155486a(lVar17,lVar24,*(longlong *)(param_1 + 0x128248) - lVar24);
        *(longlong *)(param_1 + 0x128248) = *(longlong *)(param_1 + 0x128248) + -2;
        lVar17 = *(longlong *)(param_1 + 0x128258) + lVar33;
        lVar24 = lVar17 + 2;
        func_0x00014155486a(lVar17,lVar24,*(longlong *)(param_1 + 0x128260) - lVar24);
        *(longlong *)(param_1 + 0x128260) = *(longlong *)(param_1 + 0x128260) + -2;
        lVar17 = *(longlong *)(param_1 + 0x128270) + lVar33;
        lVar24 = lVar17 + 2;
        func_0x00014155486a(lVar17,lVar24,*(longlong *)(param_1 + 0x128278) - lVar24);
        *(longlong *)(param_1 + 0x128278) = *(longlong *)(param_1 + 0x128278) + -2;
      }
      lVar33 = lVar33 + -2;
      lVar29 = lVar29 + -2;
      iVar27 = iVar27 + -1;
    } while (-1 < iVar27);
  }
  if (*(longlong *)(param_1 + 0x116bb8) != 0) {
    lStack_b8 = 0;
    puStack_b0 = (ulonglong *)0x0;
    puStack_a8 = (ulonglong *)0x0;
    pcStack_108 = (char *)0x0;
    pcStack_100 = (char *)0x0;
    pcStack_f8 = (char *)0x0;
    lStack_d0 = 0;
    pcStack_c8 = (char *)0x0;
    pcStack_c0 = (char *)0x0;
    lStack_f0 = 0;
    pbStack_e8 = (byte *)0x0;
    pbStack_e0 = (byte *)0x0;
    if ((_DAT_1423b3110 < 1) || ((*_DAT_1423b3108 & 1) == 0)) {
      cStack_128 = '\0';
    }
    else {
      cStack_128 = '\x01';
    }
    puVar19 = *(uint **)(param_1 + 0x11a600);
    uStack_144 = 0;
    iVar27 = *(int *)(param_1 + 0x116be8);
    puStack_68 = puVar19;
    if (0 < iVar27) {
      iStack_140 = 0;
      do {
        if ((*puVar19 & 1) != 0) {
          *puVar19 = *puVar19 | 2;
          sStack_12a = 0;
          if (0 < *(int *)(param_1 + 0x116be0)) {
            iStack_d4 = 0;
            puStack_68 = puVar19;
            do {
              sStack_12c = 0;
              if (0 < *(int *)(param_1 + 0x116be4)) {
                lStack_138 = (longlong)(short)uStack_144 * 8;
                lStack_120 = (longlong)sStack_12a;
                iStack_d8 = 0;
                do {
                  lStack_110 = (longlong)sStack_12c;
                  puVar40 = *(uint **)(lStack_138 +
                                      *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) +
                                       lStack_110 * 8));
                  puStack_98 = puVar40;
                  puStack_70 = puVar40;
                  if (puVar40 != (uint *)0x0) {
                    if (((cStack_128 != '\0') && ((*puVar40 & 2) != 0)) &&
                       (FUN_140550550(puVar40), (*puVar40 & 2) != 0)) {
                      *puVar19 = *puVar19 & 0xfffffffd;
                    }
                    uVar14 = *puVar40;
                    if ((uVar14 & 4) != 0) {
                      if (*(short *)(param_1 + 0x1281dc) == 0x10) {
                        if ((uVar14 & 8) != 0) {
                          *puVar40 = uVar14 & 0xfffffff7;
                          goto LAB_141477370;
                        }
                        *puVar40 = uVar14 & 0xfffffffb;
                      }
                      else {
LAB_141477370:
                        *puVar19 = *puVar19 & 0xfffffffd;
                      }
                      psStack_78 = *(short **)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x116bd8) + lStack_120 * 8) +
                                    lStack_110 * 8);
                      bStack_118 = 0;
                      puVar23 = puVar40 + 0xa8;
                      puStack_90 = puVar23;
                      do {
                        uVar3 = *(ushort *)(param_1 + 0x1281de + (ulonglong)bStack_118 * 2);
                        lVar29 = (longlong)(short)uVar3;
                        uVar4 = *(ushort *)(param_1 + 0x1281fe + (ulonglong)bStack_118 * 2);
                        lVar33 = (longlong)(short)uVar4;
                        bStackX_10 = 0;
                        puVar23 = puVar23 + lVar29 * 0x10 + lVar33;
                        uVar14 = *puVar23;
                        if ((uVar14 & 0x200000) == 0) {
                          bVar9 = (byte)uVar14 & 1;
                          bStackX_10 = bVar9 | 2;
                          if ((uVar14 & 2) == 0) {
                            bStackX_10 = bVar9;
                          }
                          if ((uVar14 & 4) == 0) goto LAB_141477418;
                          bStackX_10 = bStackX_10 | 4;
                          uStack_130 = 0;
                        }
                        else {
LAB_141477418:
                          uStack_130 = uStack_130 & 0xffffff00;
                          if ((uVar14 & 0x200000) != 0) {
                            bVar10 = (byte)uVar14 & 1;
                            bVar9 = bVar10 | 2;
                            if ((uVar14 & 2) == 0) {
                              bVar9 = bVar10;
                            }
                            uStack_130 = (uint)bVar9;
                            if ((uVar14 & 4) != 0) {
                              uStack_130 = bVar9 | 4;
                            }
                          }
                        }
                        psVar1 = (short *)((longlong)puVar40 + lVar33 * 2 + lVar29 * 0x20 + 0xa0);
                        sVar26 = *psVar1;
                        if ((2 < bStackX_10) || (2 < (byte)uStack_130)) {
                          switch(sVar26) {
                          case 0xe7:
                          case 0xe8:
                            sVar26 = 0xe6;
                            break;
                          default:
                            goto LAB_1414774d2;
                          case 0x158:
                          case 0x18a:
                            sVar26 = 0x186;
                            break;
                          case 0x159:
                          case 0x18b:
                            sVar26 = 0x187;
                            break;
                          case 0x15a:
                          case 0x18c:
                            sVar26 = 0x188;
                            break;
                          case 0x15b:
                          case 0x18d:
                            sVar26 = 0x189;
                          }
                          *psVar1 = sVar26;
                        }
LAB_1414774d2:
                        FUN_14054fb90(puVar40,uVar3);
                        bVar5 = false;
                        uStackX_18 = uStackX_18 & 0xffffffffffffff00;
                        if ((char)uStack_130 == '\0') {
                          if ((((((ushort)(sVar26 - 0x16cU) < 0xc) &&
                                ((0xb0bU >> ((ushort)(sVar26 - 0x16cU) & 0x1f) & 1) != 0)) ||
                               (((ushort)(sVar26 - 0x1d4U) < 2 || (sVar26 == 0x1d7)))) &&
                              (uVar3 == 0xf)) &&
                             ((iStack_d4 == *(int *)(param_1 + 0x116be0) + -1 ||
                              (*(longlong *)
                                (lStack_138 +
                                *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(param_1 + 0x116bb8) + 8 + (longlong)iStack_d4 * 8)
                                 + lStack_110 * 8)) == 0)))) {
                            if (bStackX_10 == 7) {
                              if ((*puVar23 & 0x8000000) == 0) {
                                in_stack_fffffffffffffe88 = in_stack_fffffffffffffe88 & 0xffffff00;
                                FUN_140550e00(puVar40,0xf,uVar4,1,in_stack_fffffffffffffe88);
                                bVar5 = true;
                                goto LAB_1414775e3;
                              }
                            }
                            else {
                              bStackX_10 = bStackX_10 + 1;
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,0xf,uVar4,bStackX_10,0);
                            }
                            bVar5 = true;
                          }
LAB_1414775e3:
                          if (((((ushort)(sVar26 - 0x16bU) < 0xe) &&
                               ((0x2929U >> ((ushort)(sVar26 - 0x16bU) & 0x1f) & 1) != 0)) ||
                              (((ushort)(sVar26 - 0x1d3U) < 6 &&
                               ((0x29U >> ((ushort)(sVar26 - 0x1d3U) & 0x1f) & 1) != 0)))) &&
                             (uVar3 == 0)) {
                            uVar43 = (uint3)(in_stack_fffffffffffffe88 >> 8);
                            if (sStack_12a == 0) {
                              if (bStackX_10 == 7) {
                                if ((*puVar23 & 0x8000000) == 0) {
                                  in_stack_fffffffffffffe88 = (uint)uVar43 << 8;
                                  FUN_140550e00(puVar40,0,uVar4,1,in_stack_fffffffffffffe88);
                                }
                              }
                              else {
                                bStackX_10 = bStackX_10 + 1;
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,0,uVar4,bStackX_10,0);
                              }
                              bVar5 = true;
                            }
                            else if (*(longlong *)
                                      (lStack_138 +
                                      *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x116bb8) + -8 + lStack_120 * 8) +
                                       lStack_110 * 8)) == 0) {
                              if (bStackX_10 == 7) {
                                if ((*puVar23 & 0x8000000) == 0) {
                                  in_stack_fffffffffffffe88 = (uint)uVar43 << 8;
                                  FUN_140550e00(puVar40,0,uVar4,1,in_stack_fffffffffffffe88);
                                  bVar5 = true;
                                  goto LAB_141477687;
                                }
                              }
                              else {
                                bStackX_10 = bStackX_10 + 1;
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,0,uVar4,bStackX_10,0);
                              }
                              bVar5 = true;
                            }
                          }
LAB_141477687:
                          if ((((((ushort)(sVar26 - 0x169U) < 0xe) &&
                                ((0x3131U >> ((ushort)(sVar26 - 0x169U) & 0x1f) & 1) != 0)) ||
                               (sVar26 == 0x1d1)) || ((ushort)(sVar26 - 0x1d5U) < 2)) &&
                             (uVar4 == 0xf)) {
                            uVar43 = (uint3)(in_stack_fffffffffffffe88 >> 8);
                            if (iStack_d8 == *(int *)(param_1 + 0x116be4) + -1) {
                              if (bStackX_10 == 7) {
                                if ((*puVar23 & 0x8000000) == 0) {
                                  in_stack_fffffffffffffe88 = (uint)uVar43 << 8;
                                  FUN_140550e00(puVar40,uVar3,0xf,1,in_stack_fffffffffffffe88);
                                }
                              }
                              else {
LAB_141477804:
                                bStackX_10 = bStackX_10 + 1;
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,uVar3,0xf,bStackX_10,0);
                              }
                            }
                            else {
                              if (*(longlong *)
                                   (lStack_138 +
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) + 8 +
                                    (longlong)iStack_d8 * 8)) != 0) goto LAB_141477829;
                              if (bStackX_10 != 7) goto LAB_141477804;
                              if ((*puVar23 & 0x8000000) == 0) {
                                in_stack_fffffffffffffe88 = (uint)uVar43 << 8;
                                FUN_140550e00(puVar40,uVar3,0xf,1,in_stack_fffffffffffffe88);
                              }
                            }
                            bVar5 = true;
                          }
LAB_141477829:
                          if (((((ushort)(sVar26 - 0x16aU) < 0xf) &&
                               ((0x6161U >> ((ushort)(sVar26 - 0x16aU) & 0x1f) & 1) != 0)) ||
                              ((sVar26 == 0x1d2 || ((ushort)(sVar26 - 0x1d7U) < 2)))) &&
                             ((uVar4 == 0 &&
                              ((sStack_12c == 0 ||
                               (*(longlong *)
                                 (lStack_138 +
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8)
                                   + -8 + lStack_110 * 8)) == 0)))))) {
                            if (bStackX_10 == 7) {
                              if ((*puVar23 & 0x8000000) == 0) {
                                in_stack_fffffffffffffe88 = in_stack_fffffffffffffe88 & 0xffffff00;
                                FUN_140550e00(puVar40,uVar3,0,1,in_stack_fffffffffffffe88);
                              }
                            }
                            else {
                              bStackX_10 = bStackX_10 + 1;
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,uVar3,0,bStackX_10,0);
                            }
                            bVar5 = true;
                          }
                          if ((ushort)(sVar26 - 0x59U) < 2) {
                            if (bStackX_10 == 7) {
                              if ((*puVar23 & 0x8000000) == 0) {
                                in_stack_fffffffffffffe88 = in_stack_fffffffffffffe88 & 0xffffff00;
                                FUN_140550e00(puVar40,uVar3,uVar4,1,in_stack_fffffffffffffe88);
                              }
                            }
                            else {
                              bStackX_10 = bStackX_10 + 1;
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,uVar3,uVar4,bStackX_10,0);
                            }
                            uVar14 = FUN_140ece790();
                            if ((uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f)
                                          * 0x7fffffff < 0xccccccd) && (sVar26 == 0x59)) {
                              FUN_14147d320(param_1,uVar3 + (short)puVar40[0x22],
                                            uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                            (short)puVar40[0x23]);
                            }
                            bVar5 = true;
                          }
                          if (bStackX_10 != 7) {
                            if (((*puVar40 & 0x80) == 0) ||
                               (cVar11 = FUN_14055dbd0(puVar40,uVar3), cVar11 == '\0'))
                            goto LAB_141478759;
                            bVar8 = false;
                            bVar42 = false;
                            sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar32 = uVar3 + (short)puVar40[0x22];
                            if (((-1 < (short)(sVar32 + -1)) &&
                                (((sVar32 + -1 < *(int *)(param_1 + 0x116bec) && (-1 < sVar26)) &&
                                 ((int)sVar26 < *(int *)(param_1 + 0x116bf0))))) &&
                               ((-1 < (short)uStack_144 &&
                                (iStack_140 < *(int *)(param_1 + 0x116bf4))))) {
                              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                 (lVar29 = *(longlong *)
                                            (lStack_138 +
                                            *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x116bb8) +
                                               (longlong)((short)(sVar32 + -1) >> 4) * 8) +
                                             (longlong)(sVar26 >> 4) * 8)), lVar29 != 0)) {
                                uVar14 = (int)sVar32 - 1U & 0x8000000f;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                }
                                uVar22 = (int)sVar26 & 0x8000000f;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                }
                                if ((*(uint *)(lVar29 + 0x2a0 +
                                              ((longlong)(int)uVar14 * 0x10 + (longlong)(int)uVar22)
                                              * 4) & 0x400000) != 0) {
                                  sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                  uVar14 = puVar40[0x22];
                                  iVar27 = (ushort)uVar14 - 1;
                                  sVar32 = func_0x0001400695b0(param_1,CONCAT22((short)((uint)iVar27
                                                                                       >> 0x10),
                                                                                (short)iVar27 +
                                                                                uVar3),
                                                               sVar26 + uVar4);
                                  if (((sVar32 == 0xd7) || (sVar32 == 0x147)) ||
                                     ((sVar32 == 0x14b ||
                                      (((sVar32 == 0x1b4 ||
                                        (cVar11 = func_0x0001402c6be0(sVar32), cVar11 != '\0')) ||
                                       (sVar32 == 0x105)))))) {
                                    uVar25 = (ushort)uVar14 + uVar3;
                                    uVar31 = sVar26 + uVar4;
                                    bVar42 = true;
                                    if ((((int)(uVar25 - 1) < *(int *)(param_1 + 0x116bec)) &&
                                        ((int)(uint)uVar31 < *(int *)(param_1 + 0x116bf0))) &&
                                       (iStack_140 < *(int *)(param_1 + 0x116bf4))) {
                                      if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                         (lVar29 = *(longlong *)
                                                    (lStack_138 +
                                                    *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0x116bb8) +
                                                       (longlong)((short)(uVar25 - 1) >> 4) * 8) +
                                                     (ulonglong)(uVar31 >> 4) * 8)), lVar29 != 0)) {
                                        uVar14 = uVar25 - 1 & 0x8000000f;
                                        if ((int)uVar14 < 0) {
                                          uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                        }
                                        bVar8 = false;
                                        if ((*(uint *)(lVar29 + 0x6a0 +
                                                      ((longlong)(int)uVar14 * 0x10 +
                                                      (ulonglong)(uVar31 & 0xf)) * 4) & 0x4000000)
                                            != 0) {
                                          bVar8 = true;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar32 = uVar3 + (short)puVar40[0x22];
                            if (((((-1 < (short)(sVar32 + 1)) &&
                                  (sVar32 + 1 < *(int *)(param_1 + 0x116bec))) && (-1 < sVar26)) &&
                                (((int)sVar26 < *(int *)(param_1 + 0x116bf0) &&
                                 (-1 < (short)uStack_144)))) &&
                               (iStack_140 < *(int *)(param_1 + 0x116bf4))) {
                              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                 (lVar29 = *(longlong *)
                                            (lStack_138 +
                                            *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x116bb8) +
                                               (longlong)((short)(sVar32 + 1) >> 4) * 8) +
                                             (longlong)(sVar26 >> 4) * 8)), lVar29 != 0)) {
                                uVar14 = (int)sVar32 + 1U & 0x8000000f;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                }
                                uVar22 = (int)sVar26 & 0x8000000f;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                }
                                if ((*(uint *)(lVar29 + 0x2a0 +
                                              ((longlong)(int)uVar14 * 0x10 + (longlong)(int)uVar22)
                                              * 4) & 0x400000) != 0) {
                                  sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                  uVar14 = puVar40[0x22];
                                  iVar27 = (ushort)uVar14 + 1;
                                  sVar32 = func_0x0001400695b0(param_1,CONCAT22((short)((uint)iVar27
                                                                                       >> 0x10),
                                                                                (short)iVar27 +
                                                                                uVar3),
                                                               sVar26 + uVar4,uStack_144);
                                  if ((((sVar32 == 0xd7) || (sVar32 == 0x147)) || (sVar32 == 0x14b))
                                     || (((sVar32 == 0x1b4 ||
                                          (cVar11 = func_0x0001402c6be0(sVar32), cVar11 != '\0')) ||
                                         (sVar32 == 0x105)))) {
                                    bVar42 = true;
                                    uVar14 = func_0x000140069640(param_1,(ushort)((ushort)uVar14 +
                                                                                 uVar3) + 1,
                                                                 sVar26 + uVar4,uStack_144);
                                    if ((uVar14 >> 0x1a & 1) != 0) {
                                      bVar8 = true;
                                    }
                                  }
                                }
                              }
                            }
                            sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar26 = uVar3 + (short)puVar40[0x22];
                            if (((-1 < sVar26) && ((int)sVar26 < *(int *)(param_1 + 0x116bec))) &&
                               ((-1 < (short)(sVar32 + -1) &&
                                (((sVar32 + -1 < *(int *)(param_1 + 0x116bf0) &&
                                  (-1 < (short)uStack_144)) &&
                                 (iStack_140 < *(int *)(param_1 + 0x116bf4))))))) {
                              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                 (lVar29 = *(longlong *)
                                            (lStack_138 +
                                            *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x116bb8) +
                                               (longlong)(sVar26 >> 4) * 8) +
                                             (longlong)((short)(sVar32 + -1) >> 4) * 8)),
                                 lVar29 != 0)) {
                                uVar14 = (int)sVar26 & 0x8000000f;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                }
                                uVar22 = (int)sVar32 - 1U & 0x8000000f;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                }
                                if ((*(uint *)(lVar29 + 0x2a0 +
                                              ((longlong)(int)uVar14 * 0x10 + (longlong)(int)uVar22)
                                              * 4) & 0x400000) != 0) {
                                  uVar25 = *(ushort *)((longlong)puVar40 + 0x8a);
                                  uVar14 = puVar40[0x22];
                                  iVar27 = uVar25 - 1;
                                  sVar26 = func_0x0001400695b0(param_1,(short)uVar14 + uVar3,
                                                               CONCAT22((short)((uint)iVar27 >> 0x10
                                                                               ),(short)iVar27 +
                                                                                 uVar4),uStack_144);
                                  if (((sVar26 == 0xd7) || (sVar26 == 0x147)) ||
                                     ((sVar26 == 0x14b ||
                                      (((sVar26 == 0x1b4 ||
                                        (cVar11 = func_0x0001402c6be0(sVar26), cVar11 != '\0')) ||
                                       (sVar26 == 0x105)))))) {
                                    uVar25 = uVar25 + uVar4;
                                    uVar31 = (short)uVar14 + uVar3;
                                    bVar42 = true;
                                    if ((((int)(uint)uVar31 < *(int *)(param_1 + 0x116bec)) &&
                                        ((int)(uVar25 - 1) < *(int *)(param_1 + 0x116bf0))) &&
                                       (iStack_140 < *(int *)(param_1 + 0x116bf4))) {
                                      if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                         (lVar29 = *(longlong *)
                                                    (lStack_138 +
                                                    *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0x116bb8) +
                                                       (ulonglong)(uVar31 >> 4) * 8) +
                                                     (longlong)((short)(uVar25 - 1) >> 4) * 8)),
                                         lVar29 != 0)) {
                                        uVar14 = uVar25 - 1 & 0x8000000f;
                                        if ((int)uVar14 < 0) {
                                          uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                        }
                                        if ((*(uint *)(lVar29 + 0x6a0 +
                                                      ((longlong)(int)uVar14 +
                                                      (ulonglong)(uVar31 & 0xf) * 0x10) * 4) &
                                            0x4000000) != 0) {
                                          bVar8 = true;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar26 = uVar3 + (short)puVar40[0x22];
                            if (((((-1 < sVar26) && ((int)sVar26 < *(int *)(param_1 + 0x116bec))) &&
                                 (-1 < (short)(sVar32 + 1))) &&
                                ((sVar32 + 1 < *(int *)(param_1 + 0x116bf0) &&
                                 (-1 < (short)uStack_144)))) &&
                               (iStack_140 < *(int *)(param_1 + 0x116bf4))) {
                              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                 (lVar29 = *(longlong *)
                                            (lStack_138 +
                                            *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x116bb8) +
                                               (longlong)(sVar26 >> 4) * 8) +
                                             (longlong)((short)(sVar32 + 1) >> 4) * 8)), lVar29 != 0
                                 )) {
                                uVar14 = (int)sVar26 & 0x8000000f;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                }
                                uVar22 = (int)sVar32 + 1U & 0x8000000f;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                }
                                if ((*(uint *)(lVar29 + 0x2a0 +
                                              ((longlong)(int)uVar14 * 0x10 + (longlong)(int)uVar22)
                                              * 4) & 0x400000) != 0) {
                                  uVar25 = *(ushort *)((longlong)puVar40 + 0x8a);
                                  uVar14 = puVar40[0x22];
                                  iVar27 = uVar25 + 1;
                                  sVar26 = func_0x0001400695b0(param_1,(short)uVar14 + uVar3,
                                                               CONCAT22((short)((uint)iVar27 >> 0x10
                                                                               ),(short)iVar27 +
                                                                                 uVar4),uStack_144);
                                  if ((((sVar26 == 0xd7) || (sVar26 == 0x147)) || (sVar26 == 0x14b))
                                     || (((sVar26 == 0x1b4 ||
                                          (cVar11 = func_0x0001402c6be0(sVar26), cVar11 != '\0')) ||
                                         (sVar26 == 0x105)))) {
                                    bVar42 = true;
                                    uVar14 = func_0x000140069640(param_1,(short)uVar14 + uVar3,
                                                                 (ushort)(uVar25 + uVar4) + 1,
                                                                 uStack_144);
                                    if ((uVar14 >> 0x1a & 1) != 0) {
                                      bVar8 = true;
                                    }
                                  }
                                }
                              }
                            }
                            sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar32 = uVar3 + (short)puVar40[0x22];
                            if (((sVar32 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar32)) ||
                               ((sVar26 < 0 ||
                                (((*(int *)(param_1 + 0x116bf0) <= (int)sVar26 ||
                                  ((short)(uStack_144 + 1) < 0)) ||
                                 (*(int *)(param_1 + 0x116bf4) <= (short)uStack_144 + 1)))))) {
LAB_14147855e:
                              if (!bVar42) goto LAB_141478759;
                            }
                            else {
                              if ((*(longlong *)(param_1 + 0x116bb8) == 0) ||
                                 (lVar29 = *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)(param_1 + 0x116bb8) +
                                                (longlong)(sVar32 >> 4) * 8) +
                                              (longlong)(sVar26 >> 4) * 8) + 8 +
                                            (longlong)(short)uStack_144 * 8), lVar29 == 0))
                              goto LAB_14147855e;
                              uVar14 = (int)sVar32 & 0x8000000f;
                              if ((int)uVar14 < 0) {
                                uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                              }
                              uVar22 = (int)sVar26 & 0x8000000f;
                              if ((int)uVar22 < 0) {
                                uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                              }
                              if ((*(uint *)(lVar29 + 0x2a0 +
                                            ((longlong)(int)uVar14 * 0x10 + (longlong)(int)uVar22) *
                                            4) & 0x400000) == 0) goto LAB_14147855e;
                              sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                              uVar14 = puVar40[0x22];
                              sVar32 = func_0x0001400695b0(param_1,(ushort)uVar14 + uVar3,
                                                           sVar26 + uVar4,(short)uStack_144 + 1);
                              if (((sVar32 != 0xd7) && (sVar32 != 0x147)) &&
                                 ((sVar32 != 0x14b &&
                                  (((sVar32 != 0x1b4 &&
                                    (cVar11 = func_0x0001402c6be0(sVar32), cVar11 == '\0')) &&
                                   (sVar32 != 0x105)))))) goto LAB_14147855e;
                              uVar14 = func_0x000140069640(param_1,(uint)(ushort)uVar14 +
                                                                   (uint)uVar3,sVar26 + uVar4,
                                                           uStack_144 + 1);
                              if ((uVar14 >> 0x1a & 1) != 0) {
                                bVar8 = true;
                              }
                            }
                            *puVar40 = *puVar40 | 0xc;
                            puVar19 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar40[0x23] * 4);
                            *puVar19 = *puVar19 | 5;
                            if ((bVar8) ||
                               (uVar14 = FUN_140ece790(),
                               uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f) *
                                        0x7fffffff < 0x418938)) {
                              bStackX_10 = bStackX_10 + 1;
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,uVar3,uVar4,bStackX_10,0);
                            }
                            goto LAB_141478759;
                          }
                          if ((((*puVar23 & 0x400000) != 0) &&
                              (iStack_140 + 1 < *(int *)(param_1 + 0x116be8))) &&
                             (((int)*psStack_78 <= *(int *)(param_1 + 0x116c00) + 1 + iStack_140 &&
                              (lVar24 = *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) +
                                           lStack_110 * 8) + 8 + (longlong)iStack_140 * 8),
                              lVar24 != 0)))) {
                            lVar29 = lVar29 * 0x40 + lVar33 * 4;
                            uVar14 = *(uint *)(lVar29 + 0x2a0 + lVar24);
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              bVar10 = (byte)uVar14 & 1;
                              bVar9 = bVar10 | 2;
                              if ((uVar14 & 2) == 0) {
                                bVar9 = bVar10;
                              }
                              bVar10 = bVar9 | 4;
                              if ((uVar14 & 4) == 0) {
                                bVar10 = bVar9;
                              }
                              uVar22 = (uint)bVar10;
                              if (((bVar10 != 0) && ((uVar14 >> 0x16 & 1) == 0)) &&
                                 ((uVar16 = *(uint *)(lVar29 + 0x6a0 + lVar24) & 7,
                                  (uVar16 - 3 & 0xfffffffc) != 0 || (uVar16 == 4)))) {
                                if ((uVar16 == 7) &&
                                   (iVar27 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1,
                                   -1 < iVar27)) {
                                  lVar29 = (longlong)iVar27;
                                  do {
                                    lVar33 = *(longlong *)(_DAT_142410e58 + lVar29 * 8);
                                    if ((((*(int *)(lVar33 + 0x10) ==
                                           (int)(short)(uVar3 + *(short *)(lVar24 + 0x88))) &&
                                         (*(int *)(lVar33 + 0x1c) ==
                                          (int)(short)(uVar4 + *(short *)(lVar24 + 0x8a)))) &&
                                        (*(int *)(lVar33 + 0x20) == (int)*(short *)(lVar24 + 0x8c)))
                                       && ((*(byte *)(lVar33 + 0x148) & 0x10) != 0))
                                    goto LAB_141477b97;
                                    lVar29 = lVar29 + -1;
                                  } while (-1 < lVar29);
                                }
                                in_stack_fffffffffffffea0 = 0;
                                in_stack_fffffffffffffe88 =
                                     CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                                cVar11 = FUN_14054e030(lVar24,uVar3,uVar4,
                                                       CONCAT71((uint7)(uint3)(uVar14 >> 8),1),
                                                       in_stack_fffffffffffffe88);
                                if (cVar11 != '\0') {
                                  in_stack_fffffffffffffe88 = 0;
                                  FUN_14054eab0(lVar24,uVar3,uVar4,uVar22 - 1,0);
                                  FUN_1414c8ca0(param_1,uVar3 + *(short *)(lVar24 + 0x88),
                                                uVar4 + *(short *)(lVar24 + 0x8a),
                                                (short)puVar40[0x23]);
                                }
                              }
                            }
                          }
LAB_141477b97:
                          uVar30 = (ulonglong)uStack_130;
LAB_141477ba0:
                          bVar42 = false;
                          if (uVar3 == 0) {
                            if ((puVar40[0x13] == 0) &&
                               ((puVar40[(longlong)(short)uVar4 + 0x1a8] & 0x40) != 0)) {
                              if (sStack_12a == 0) {
                                bVar42 = true;
                              }
                              else if (*(longlong *)
                                        (lStack_138 +
                                        *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(param_1 + 0x116bb8) + -8 +
                                           (longlong)sStack_12a * 8) + lStack_110 * 8)) == 0) {
                                bVar42 = true;
                              }
                            }
                          }
                          else if (((uVar3 == 0xf) && (puVar40[0x13] == 0)) &&
                                  ((puVar40[(longlong)(short)uVar4 + 0x298] & 0x40) != 0)) {
                            if (iStack_d4 == *(int *)(param_1 + 0x116be0) + -1) {
                              bVar42 = true;
                            }
                            else {
                              bVar42 = *(longlong *)
                                        (lStack_138 +
                                        *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(param_1 + 0x116bb8) + 8 +
                                           (longlong)iStack_d4 * 8) + lStack_110 * 8)) == 0;
                            }
                          }
                          if (uVar4 == 0) {
                            if ((puVar40[0x13] != 0) ||
                               ((puVar40[(longlong)(short)uVar3 * 0x10 + 0x1a8] & 0x40) == 0))
                            goto LAB_141479469;
                            if (sStack_12c != 0) {
                              lVar29 = *(longlong *)
                                        (lStack_138 +
                                        *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) + -8
                                         + (longlong)sStack_12c * 8));
joined_r0x000141479467:
                              if (lVar29 != 0) goto LAB_141479469;
                            }
                          }
                          else {
                            if (((uVar4 == 0xf) && (puVar40[0x13] == 0)) &&
                               ((puVar40[(longlong)(short)uVar3 * 0x10 + 0x1b7] & 0x40) != 0)) {
                              if (iStack_d8 != *(int *)(param_1 + 0x116be4) + -1) {
                                lVar29 = *(longlong *)
                                          (lStack_138 +
                                          *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) +
                                            8 + (longlong)iStack_d8 * 8));
                                goto joined_r0x000141479467;
                              }
                              goto LAB_141479472;
                            }
LAB_141479469:
                            if (!bVar42) goto LAB_1414794fe;
                          }
LAB_141479472:
                          if (((char)bStackX_10 < '\a') &&
                             (cVar11 = FUN_1414c3940(param_1,uVar3 + (short)puVar40[0x22],
                                                     uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                                     uStack_144), cVar11 != '\0')) {
                            bStackX_10 = bStackX_10 + 1;
                            in_stack_fffffffffffffe88 = 0;
                            FUN_14054eab0(puVar40,uVar3,uVar4,bStackX_10,0);
                            if (bStackX_10 == 1) {
                              FUN_1414be100(param_1,uVar3 + (short)puVar40[0x22],
                                            uVar4 + *(short *)((longlong)puVar40 + 0x8a),uStack_144)
                              ;
                            }
                          }
                          bVar5 = true;
                        }
                        else {
                          if ((char)uStack_130 == '\x01') {
                            *puVar40 = *puVar40 | 0xc;
                            puVar19 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar40[0x23] * 4);
                            *puVar19 = *puVar19 | 5;
                            uVar14 = FUN_140ece790();
                            if (uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f)
                                         * 0x7fffffff < 0x20c49c) {
                              uVar14 = puVar40[0x23];
                              sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar26 = uVar3 + (short)puVar40[0x22];
                              cVar11 = func_0x0001402c78e0(param_1,sVar26,sVar32,(short)uVar14 + -1)
                              ;
                              if (cVar11 == '\0') {
                                uVar30 = (ulonglong)uVar3;
                              }
                              else {
                                uVar30 = (ulonglong)(short)uVar3;
                                uVar22 = puVar40[uVar30 * 0x10 + (longlong)(short)uVar4 + 0x1a8] & 7
                                ;
                                if (((uVar22 - 3 & 0xfffffffc) != 0) || (uVar22 == 4)) {
                                  if ((uVar22 == 7) &&
                                     (iVar27 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1,
                                     -1 < iVar27)) {
                                    lVar29 = (longlong)iVar27;
                                    do {
                                      lVar33 = *(longlong *)(_DAT_142410e58 + lVar29 * 8);
                                      if ((((*(int *)(lVar33 + 0x10) == (int)sVar26) &&
                                           (*(int *)(lVar33 + 0x1c) == (int)sVar32)) &&
                                          (*(int *)(lVar33 + 0x20) == (int)(short)uVar14)) &&
                                         ((*(byte *)(lVar33 + 0x148) & 0x10) != 0))
                                      goto LAB_141478a34;
                                      lVar29 = lVar29 + -1;
                                    } while (-1 < lVar29);
                                  }
                                  in_stack_fffffffffffffea0 = 0;
                                  in_stack_fffffffffffffe88 =
                                       CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                                  cVar11 = FUN_14054e030(puVar40,uVar3,uVar4,1,
                                                         in_stack_fffffffffffffe88);
                                  if (cVar11 != '\0') goto LAB_141478759;
                                }
                              }
LAB_141478a34:
                              in_stack_fffffffffffffe88 = 0x200000;
                              FUN_14054eab0(puVar40,uVar30 & 0xffff,uVar4,0,0x200000);
                              uStack_130 = uStack_130 & 0xffffff00;
                            }
                          }
LAB_141478759:
                          if (bStackX_10 == 1) {
                            *puVar40 = *puVar40 | 0xc;
                            puVar19 = (uint *)(_DAT_14250df70 + (longlong)(short)puVar40[0x23] * 4);
                            *puVar19 = *puVar19 | 5;
                            uVar14 = FUN_140ece790();
                            if (uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f)
                                         * 0x7fffffff < 0x20c49c) {
                              uVar44 = (undefined2)puVar40[0x23];
                              iVar27 = *(int *)(param_1 + 0x116bf8);
                              iVar28 = *(int *)(param_1 + 0x116bfc);
                              in_stack_fffffffffffffe88 =
                                   CONCAT22((short)(in_stack_fffffffffffffe88 >> 0x10),
                                            uVar4 + *(short *)((longlong)puVar40 + 0x8a));
                              FUN_14007f300(param_1,asStack_a0,asStack_9c,
                                            uVar3 + (short)puVar40[0x22],in_stack_fffffffffffffe88,
                                            uVar44);
                              sVar32 = asStack_a0[0] -
                                       (short)((int)((iVar27 >> 0x1f & 0xfU) + iVar27) >> 4);
                              asStack_a0[0] = sVar32 + 1;
                              sVar26 = asStack_9c[0] -
                                       (short)((int)((iVar28 >> 0x1f & 0xfU) + iVar28) >> 4);
                              asStack_9c[0] = sVar26 + 1;
                              if (*(char *)((longlong)sVar32 * 5 + (longlong)sVar26 + 0x142153e8e)
                                  != '\0') {
                                sVar26 = (short)puVar40[0x23];
                                sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                sVar41 = uVar3 + (short)puVar40[0x22];
                                if (((-1 < sVar41) && ((int)sVar41 < *(int *)(param_1 + 0x116bec)))
                                   && ((-1 < sVar32 &&
                                       ((((int)sVar32 < *(int *)(param_1 + 0x116bf0) &&
                                         (-1 < sVar26)) &&
                                        ((int)sVar26 < *(int *)(param_1 + 0x116bf4))))))) {
                                  if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                     (lVar29 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (*(longlong *)(param_1 + 0x116bb8) +
                                                    (longlong)(sVar41 >> 4) * 8) +
                                                  (longlong)(sVar32 >> 4) * 8) +
                                                (longlong)sVar26 * 8), lVar29 != 0)) {
                                    uVar14 = (int)sVar41 & 0x8000000f;
                                    if ((int)uVar14 < 0) {
                                      uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar22 = (int)sVar32 & 0x8000000f;
                                    if ((int)uVar22 < 0) {
                                      uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                    }
                                    if ((*(uint *)(lVar29 + 0x2a0 +
                                                  ((longlong)(int)uVar14 * 0x10 +
                                                  (longlong)(int)uVar22) * 4) & 0x10000) != 0)
                                    goto LAB_141479331;
                                  }
                                }
                              }
                              uVar14 = puVar40[0x23];
                              sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar26 = uVar3 + (short)puVar40[0x22];
                              cVar11 = func_0x00014024b990(param_1,sVar26,sVar32,(short)uVar14 + -1)
                              ;
                              if ((cVar11 != '\0') &&
                                 ((uVar22 = puVar40[(longlong)(short)uVar3 * 0x10 +
                                                    (longlong)(short)uVar4 + 0x1a8] & 7,
                                  (uVar22 - 3 & 0xfffffffc) != 0 || (uVar22 == 4)))) {
                                if ((uVar22 == 7) &&
                                   (iVar27 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1,
                                   -1 < iVar27)) {
                                  lVar29 = (longlong)iVar27;
                                  do {
                                    lVar33 = *(longlong *)(_DAT_142410e58 + lVar29 * 8);
                                    if ((((*(int *)(lVar33 + 0x10) == (int)sVar26) &&
                                         (*(int *)(lVar33 + 0x1c) == (int)sVar32)) &&
                                        (*(int *)(lVar33 + 0x20) == (int)(short)uVar14)) &&
                                       ((*(byte *)(lVar33 + 0x148) & 0x10) != 0))
                                    goto LAB_141478a85;
                                    lVar29 = lVar29 + -1;
                                  } while (-1 < lVar29);
                                }
                                in_stack_fffffffffffffea0 = 0;
                                in_stack_fffffffffffffe88 =
                                     CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                                cVar11 = FUN_14054e030(puVar40,uVar3,uVar4,1,
                                                       in_stack_fffffffffffffe88,uVar44,0,0);
                                if (cVar11 != '\0') goto LAB_141479331;
                              }
LAB_141478a85:
                              lVar29 = lStack_138;
                              cVar34 = '\0';
                              cVar37 = '\0';
                              cVar12 = '\0';
                              sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar32 = uVar3 + (short)puVar40[0x22];
                              cVar11 = cVar37;
                              if ((((-1 < (short)(sVar32 + -1)) &&
                                   (sVar32 + -1 < *(int *)(param_1 + 0x116bec))) &&
                                  ((cVar11 = cVar12, -1 < sVar26 &&
                                   (((int)sVar26 < *(int *)(param_1 + 0x116bf0) &&
                                    (-1 < (short)uStack_144)))))) &&
                                 (iStack_140 < *(int *)(param_1 + 0x116bf4))) {
                                lVar33 = *(longlong *)(param_1 + 0x116bb8);
                                cVar11 = cVar37;
                                if ((lVar33 != 0) &&
                                   (lVar24 = *(longlong *)
                                              (lStack_138 +
                                              *(longlong *)
                                               (*(longlong *)
                                                 (lVar33 + (longlong)((short)(sVar32 + -1) >> 4) * 8
                                                 ) + (longlong)(sVar26 >> 4) * 8)), lVar24 != 0)) {
                                  uVar14 = (int)sVar32 - 1U & 0x8000000f;
                                  if ((int)uVar14 < 0) {
                                    uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar22 = (int)sVar26 & 0x8000000f;
                                  if ((int)uVar22 < 0) {
                                    uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                  }
                                  if ((*(uint *)(lVar24 + 0x2a0 +
                                                ((longlong)(int)uVar14 * 0x10 +
                                                (longlong)(int)uVar22) * 4) & 0x400000) != 0) {
                                    uVar25 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                    uVar31 = uVar3 + (short)puVar40[0x22];
                                    if ((int)(uint)uVar25 < *(int *)(param_1 + 0x116bf0)) {
                                      uVar14 = uVar31 - 1 & 0x8000000f;
                                      if ((int)uVar14 < 0) {
                                        uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                      }
                                      sVar26 = *(short *)(*(longlong *)
                                                           (lStack_138 +
                                                           *(longlong *)
                                                            (*(longlong *)
                                                              (lVar33 + (longlong)
                                                                        ((short)(uVar31 - 1) >> 4) *
                                                                        8) +
                                                            (ulonglong)(uVar25 >> 4) * 8)) +
                                                         (((longlong)(int)uVar14 + 5) * 0x10 +
                                                         (ulonglong)(uVar25 & 0xf)) * 2);
                                    }
                                    else {
                                      sVar26 = 0;
                                    }
                                    if ((((sVar26 == 0xd7) || (sVar26 == 0x147)) ||
                                        (sVar26 == 0x14b)) ||
                                       (((sVar26 == 0x1b4 ||
                                         (cVar11 = func_0x0001402c6be0(sVar26), cVar11 != '\0')) ||
                                        (cVar11 = cVar34, sVar26 == 0x105)))) {
                                      cVar11 = '\x01';
                                    }
                                  }
                                }
                              }
                              sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar32 = uVar3 + (short)puVar40[0x22];
                              if (((-1 < (short)(sVar32 + 1)) &&
                                  (sVar32 + 1 < *(int *)(param_1 + 0x116bec))) &&
                                 ((-1 < sVar26 &&
                                  ((((int)sVar26 < *(int *)(param_1 + 0x116bf0) &&
                                    (-1 < (short)uStack_144)) &&
                                   (iStack_140 < *(int *)(param_1 + 0x116bf4))))))) {
                                lVar33 = *(longlong *)(param_1 + 0x116bb8);
                                if ((lVar33 != 0) &&
                                   (lVar24 = *(longlong *)
                                              (lVar29 + *(longlong *)
                                                         (*(longlong *)
                                                           (lVar33 + (longlong)
                                                                     ((short)(sVar32 + 1) >> 4) * 8)
                                                         + (longlong)(sVar26 >> 4) * 8)),
                                   lVar24 != 0)) {
                                  uVar14 = (int)sVar32 + 1U & 0x8000000f;
                                  if ((int)uVar14 < 0) {
                                    uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar22 = (int)sVar26 & 0x8000000f;
                                  if ((int)uVar22 < 0) {
                                    uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                  }
                                  if ((*(uint *)(lVar24 + 0x2a0 +
                                                ((longlong)(int)uVar14 * 0x10 +
                                                (longlong)(int)uVar22) * 4) & 0x400000) != 0) {
                                    uVar25 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                    sVar26 = uVar3 + (short)puVar40[0x22];
                                    if ((int)(uint)uVar25 < *(int *)(param_1 + 0x116bf0)) {
                                      uVar14 = (int)sVar26 + 1U & 0x8000000f;
                                      if ((int)uVar14 < 0) {
                                        uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                      }
                                      sVar26 = *(short *)(*(longlong *)
                                                           (lVar29 + *(longlong *)
                                                                      (*(longlong *)
                                                                        (lVar33 + (longlong)
                                                                                  ((short)(sVar26 + 
                                                  1) >> 4) * 8) + (ulonglong)(uVar25 >> 4) * 8)) +
                                                  (((longlong)(int)uVar14 + 5) * 0x10 +
                                                  (ulonglong)(uVar25 & 0xf)) * 2);
                                    }
                                    else {
                                      sVar26 = 0;
                                    }
                                    if (((sVar26 == 0xd7) || (sVar26 == 0x147)) ||
                                       ((sVar26 == 0x14b ||
                                        (((sVar26 == 0x1b4 ||
                                          (cVar12 = func_0x0001402c6be0(sVar26), cVar12 != '\0')) ||
                                         (sVar26 == 0x105)))))) {
                                      cVar11 = '\x01';
                                    }
                                  }
                                }
                              }
                              sVar32 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar26 = uVar3 + (short)puVar40[0x22];
                              if (((sVar26 < 0) || (*(int *)(param_1 + 0x116bec) <= (int)sVar26)) ||
                                 ((((short)(sVar32 + -1) < 0 ||
                                   ((*(int *)(param_1 + 0x116bf0) <= sVar32 + -1 ||
                                    ((short)uStack_144 < 0)))) ||
                                  (*(int *)(param_1 + 0x116bf4) <= iStack_140))))
                              goto LAB_141478f9c;
                              if (*(longlong *)(param_1 + 0x116bb8) == 0) {
                                sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                sVar32 = uVar3 + (short)puVar40[0x22];
LAB_141478fbc:
                                if (*(int *)(param_1 + 0x116bec) <= (int)sVar32) goto LAB_141479166;
LAB_141478fd1:
                                sVar26 = uVar4 + sVar26;
                                if ((((short)(sVar26 + 1) < 0) ||
                                    (*(int *)(param_1 + 0x116bf0) <= sVar26 + 1)) ||
                                   (((short)uStack_144 < 0 ||
                                    (*(int *)(param_1 + 0x116bf4) <= iStack_140))))
                                goto LAB_141479166;
                                if ((*(longlong *)(param_1 + 0x116bb8) == 0) ||
                                   (lVar33 = *(longlong *)
                                              (lVar29 + *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)(param_1 + 0x116bb8) +
                                                           (longlong)(sVar32 >> 4) * 8) +
                                                         (longlong)((short)(sVar26 + 1) >> 4) * 8)),
                                   lVar33 == 0)) goto LAB_141479166;
                                uVar14 = (int)sVar26 + 1U & 0x8000000f;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                }
                                uVar22 = (int)sVar32 & 0x8000000f;
                                if ((int)uVar22 < 0) {
                                  uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                }
                                if ((*(uint *)(lVar33 + 0x2a0 +
                                              ((longlong)(int)uVar14 + (longlong)(int)uVar22 * 0x10)
                                              * 4) & 0x400000) == 0) goto LAB_141479166;
                                sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                uVar25 = uVar3 + (short)puVar40[0x22];
                                if ((int)(uint)uVar25 < *(int *)(param_1 + 0x116bec)) {
                                  uVar14 = (int)sVar26 + 1U & 0x8000000f;
                                  if ((int)uVar14 < 0) {
                                    uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                  }
                                  sVar26 = *(short *)(*(longlong *)
                                                       (lVar29 + *(longlong *)
                                                                  (*(longlong *)
                                                                    (*(longlong *)
                                                                      (param_1 + 0x116bb8) +
                                                                    (ulonglong)(uVar25 >> 4) * 8) +
                                                                  (longlong)
                                                                  ((short)(sVar26 + 1) >> 4) * 8)) +
                                                     ((longlong)(int)uVar14 +
                                                     ((ulonglong)(uVar25 & 0xf) + 5) * 0x10) * 2);
                                }
                                else {
                                  sVar26 = 0;
                                }
                                if ((((sVar26 != 0xd7) && (sVar26 != 0x147)) && (sVar26 != 0x14b))
                                   && (((sVar26 != 0x1b4 &&
                                        (cVar12 = func_0x0001402c6be0(sVar26), cVar12 == '\0')) &&
                                       (sVar26 != 0x105)))) goto LAB_141479166;
                                cVar11 = '\x01';
                                sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                sVar32 = uVar3 + (short)puVar40[0x22];
LAB_14147919c:
                                sVar26 = uVar4 + sVar26;
                                if ((((-1 < sVar26) && ((int)sVar26 < *(int *)(param_1 + 0x116bf0)))
                                    && (-1 < (short)(uStack_144 + 1))) &&
                                   ((short)uStack_144 + 1 < *(int *)(param_1 + 0x116bf4))) {
                                  lVar29 = *(longlong *)(param_1 + 0x116bb8);
                                  if ((lVar29 != 0) &&
                                     (lVar33 = *(longlong *)
                                                (*(longlong *)
                                                  (*(longlong *)
                                                    (lVar29 + (longlong)(sVar32 >> 4) * 8) +
                                                  (longlong)(sVar26 >> 4) * 8) + 8 +
                                                (longlong)(short)uStack_144 * 8), lVar33 != 0)) {
                                    uVar14 = (int)sVar32 & 0x8000000f;
                                    if ((int)uVar14 < 0) {
                                      uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                    }
                                    uVar22 = (int)sVar26 & 0x8000000f;
                                    if ((int)uVar22 < 0) {
                                      uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                    }
                                    if ((*(uint *)(lVar33 + 0x2a0 +
                                                  ((longlong)(int)uVar14 * 0x10 +
                                                  (longlong)(int)uVar22) * 4) & 0x400000) != 0) {
                                      uVar31 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                      uVar25 = uVar3 + (short)puVar40[0x22];
                                      if (((int)(uint)uVar25 < *(int *)(param_1 + 0x116bec)) &&
                                         ((int)(uint)uVar31 < *(int *)(param_1 + 0x116bf0))) {
                                        sVar26 = *(short *)(*(longlong *)
                                                             (*(longlong *)
                                                               (*(longlong *)
                                                                 (lVar29 + (ulonglong)(uVar25 >> 4)
                                                                           * 8) +
                                                               (ulonglong)(uVar31 >> 4) * 8) + 8 +
                                                             (longlong)(short)uStack_144 * 8) +
                                                           (((ulonglong)(uVar25 & 0xf) + 5) * 0x10 +
                                                           (ulonglong)(uVar31 & 0xf)) * 2);
                                      }
                                      else {
                                        sVar26 = 0;
                                      }
                                      if (((((sVar26 == 0xd7) || (sVar26 == 0x147)) ||
                                           (sVar26 == 0x14b)) ||
                                          ((sVar26 == 0x1b4 ||
                                           (cVar12 = func_0x0001402c6be0(sVar26), cVar12 != '\0'))))
                                         || (sVar26 == 0x105)) goto LAB_141479331;
                                    }
                                  }
                                }
                              }
                              else {
                                lVar33 = *(longlong *)
                                          (lVar29 + *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0x116bb8) +
                                                       (longlong)(sVar26 >> 4) * 8) +
                                                     (longlong)((short)(sVar32 + -1) >> 4) * 8));
                                if (lVar33 != 0) {
                                  uVar14 = (int)sVar26 & 0x8000000f;
                                  if ((int)uVar14 < 0) {
                                    uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                  }
                                  uVar22 = (int)sVar32 - 1U & 0x8000000f;
                                  if ((int)uVar22 < 0) {
                                    uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                  }
                                  if ((*(uint *)(lVar33 + 0x2a0 +
                                                ((longlong)(int)uVar14 * 0x10 +
                                                (longlong)(int)uVar22) * 4) & 0x400000) == 0)
                                  goto LAB_141478f9c;
                                  uVar31 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                                  uVar25 = uVar3 + (short)puVar40[0x22];
                                  if ((int)(uint)uVar25 < *(int *)(param_1 + 0x116bec)) {
                                    uVar14 = uVar31 - 1 & 0x8000000f;
                                    if ((int)uVar14 < 0) {
                                      uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                    }
                                    sVar26 = *(short *)(*(longlong *)
                                                         (lVar29 + *(longlong *)
                                                                    (*(longlong *)
                                                                      (*(longlong *)
                                                                        (param_1 + 0x116bb8) +
                                                                      (ulonglong)(uVar25 >> 4) * 8)
                                                                    + (longlong)
                                                                      ((short)(uVar31 - 1) >> 4) * 8
                                                                    )) +
                                                       (((ulonglong)(uVar25 & 0xf) + 5) * 0x10 +
                                                       (longlong)(int)uVar14) * 2);
                                  }
                                  else {
                                    sVar26 = 0;
                                  }
                                  if (((((sVar26 != 0xd7) && (sVar26 != 0x147)) && (sVar26 != 0x14b)
                                       ) && ((sVar26 != 0x1b4 &&
                                             (cVar12 = func_0x0001402c6be0(sVar26), cVar12 == '\0'))
                                            )) && (sVar26 != 0x105)) goto LAB_141478f9c;
                                  cVar11 = '\x01';
                                  sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                  sVar32 = uVar3 + (short)puVar40[0x22];
                                  goto LAB_141478fd1;
                                }
LAB_141478f9c:
                                sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                sVar32 = uVar3 + (short)puVar40[0x22];
                                if (-1 < sVar32) goto LAB_141478fbc;
LAB_141479166:
                                sVar26 = *(short *)((longlong)puVar40 + 0x8a);
                                sVar32 = uVar3 + (short)puVar40[0x22];
                                if ((-1 < sVar32) && ((int)sVar32 < *(int *)(param_1 + 0x116bec)))
                                goto LAB_14147919c;
                              }
                              if (cVar11 == '\0') {
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,uVar3,uVar4,0,0);
                                bStackX_10 = 0;
                              }
                            }
                          }
LAB_141479331:
                          uVar30 = (ulonglong)uStack_130;
                          if ((char)uStack_130 == '\0') goto LAB_141477ba0;
                        }
LAB_1414794fe:
                        bVar42 = false;
                        if (uVar3 == 0) {
                          if ((puVar40[0x13] == 0x200000) &&
                             ((puVar40[(longlong)(short)uVar4 + 0x1a8] & 0x40) != 0)) {
                            if (sStack_12a == 0) {
                              bVar42 = true;
                            }
                            else if (*(longlong *)
                                      (lStack_138 +
                                      *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x116bb8) + -8 +
                                         (longlong)sStack_12a * 8) + lStack_110 * 8)) == 0) {
                              bVar42 = true;
                            }
                          }
                        }
                        else if (((uVar3 == 0xf) && (puVar40[0x13] == 0x200000)) &&
                                ((puVar40[(longlong)(short)uVar4 + 0x298] & 0x40) != 0)) {
                          if (iStack_d4 == *(int *)(param_1 + 0x116be0) + -1) {
                            bVar42 = true;
                          }
                          else {
                            bVar42 = *(longlong *)
                                      (lStack_138 +
                                      *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x116bb8) + 8 +
                                         (longlong)iStack_d4 * 8) + lStack_110 * 8)) == 0;
                          }
                        }
                        if (uVar4 == 0) {
                          if ((puVar40[0x13] == 0x200000) &&
                             (((puVar40[(longlong)(short)uVar3 * 0x10 + 0x1a8] & 0x40) != 0 &&
                              ((sStack_12c == 0 ||
                               (*(longlong *)
                                 (lStack_138 +
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8)
                                   + -8 + (longlong)sStack_12c * 8)) == 0)))))) goto LAB_141479673;
LAB_14147966e:
                          if (bVar42) goto LAB_141479673;
                          cVar11 = (char)uStackX_18;
                        }
                        else {
                          if (((uVar4 != 0xf) || (puVar40[0x13] != 0x200000)) ||
                             (((puVar40[(longlong)(short)uVar3 * 0x10 + 0x1b7] & 0x40) == 0 ||
                              ((iStack_d8 != *(int *)(param_1 + 0x116be4) + -1 &&
                               (*(longlong *)
                                 (lStack_138 +
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8)
                                   + 8 + (longlong)iStack_d8 * 8)) != 0)))))) goto LAB_14147966e;
LAB_141479673:
                          if (((byte)uVar30 < 7) &&
                             (cVar11 = FUN_1414c3940(param_1,uVar3 + (short)puVar40[0x22],
                                                     uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                                     uStack_144), cVar11 != '\0')) {
                            cVar11 = (byte)uVar30 + 1;
                            uStack_130 = (uint)CONCAT71((int7)(uVar30 >> 8),cVar11);
                            in_stack_fffffffffffffe88 = 0x200000;
                            FUN_14054eab0(puVar40,uVar3,uVar4,cVar11,0x200000);
                          }
                          cVar11 = '\x01';
                        }
                        if ((((char)bStackX_10 < '\x01') || (bVar5)) ||
                           (iStack_140 + *(int *)(param_1 + 0x116c00) != (int)psStack_78[1])) {
LAB_14147985c:
                          if (('\x01' < (char)bStackX_10) && (!bVar5)) {
                            if (uVar3 == 0) {
                              if ((sStack_12a == 0) ||
                                 (*(longlong *)
                                   (lStack_138 +
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x116bb8) + -8 +
                                      (longlong)sStack_12a * 8) + lStack_110 * 8)) == 0)) {
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,0,uVar4,bStackX_10 - 1,0);
                                sVar32 = *(short *)((longlong)puVar40 + 0x8a);
                                sVar26 = (short)puVar40[0x22];
LAB_141479935:
                                bStackX_10 = bStackX_10 - 1;
                                FUN_1414c8ca0(param_1,sVar26,uVar4 + sVar32,(short)puVar40[0x23]);
                              }
                            }
                            else if ((uVar3 == 0xf) &&
                                    ((iStack_d4 == *(int *)(param_1 + 0x116be0) + -1 ||
                                     (*(longlong *)
                                       (lStack_138 +
                                       *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)(param_1 + 0x116bb8) + 8 +
                                          (longlong)iStack_d4 * 8) + lStack_110 * 8)) == 0)))) {
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,0xf,uVar4,bStackX_10 - 1,0);
                              sVar32 = *(short *)((longlong)puVar40 + 0x8a);
                              sVar26 = (short)puVar40[0x22] + 0xf;
                              goto LAB_141479935;
                            }
                            if (uVar4 == 0) {
                              if ((sStack_12c == 0) ||
                                 (*(longlong *)
                                   (lStack_138 +
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) + -8 +
                                    (longlong)sStack_12c * 8)) == 0)) {
                                in_stack_fffffffffffffe88 = 0;
                                FUN_14054eab0(puVar40,uVar3,0,bStackX_10 - 1,0);
                                sVar26 = *(short *)((longlong)puVar40 + 0x8a);
LAB_1414799a8:
                                bStackX_10 = bStackX_10 - 1;
                                FUN_1414c8ca0(param_1,uVar3 + (short)puVar40[0x22],sVar26,
                                              (short)puVar40[0x23]);
                              }
                            }
                            else if ((uVar4 == 0xf) &&
                                    ((iStack_d8 == *(int *)(param_1 + 0x116be4) + -1 ||
                                     (*(longlong *)
                                       (lStack_138 +
                                       *(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) + 8 +
                                        (longlong)iStack_d8 * 8)) == 0)))) {
                              in_stack_fffffffffffffe88 = 0;
                              FUN_14054eab0(puVar40,uVar3,0xf,bStackX_10 - 1,0);
                              sVar26 = *(short *)((longlong)puVar40 + 0x8a) + 0xf;
                              goto LAB_1414799a8;
                            }
                          }
                        }
                        else {
                          uVar14 = puVar40[0x23];
                          sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                          sVar32 = uVar3 + (short)puVar40[0x22];
                          cVar12 = func_0x00014024b990(param_1,sVar32,sVar26,(ushort)uVar14 - 1);
                          if (cVar12 != '\a') goto LAB_14147985c;
                          in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffff00;
                          in_stack_fffffffffffffe88 =
                               CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                          cVar12 = FUN_141460470(param_1,sVar32,sVar26,(ushort)uVar14,
                                                 in_stack_fffffffffffffe88,1,0,
                                                 in_stack_fffffffffffffea0,0);
                          if (cVar12 == '\0') goto LAB_14147985c;
                          in_stack_fffffffffffffe88 =
                               CONCAT22((short)(in_stack_fffffffffffffe88 >> 0x10),
                                        uVar4 + *(short *)((longlong)puVar40 + 0x8a));
                          FUN_14007f300(0x1423f3970,auStack_84,auStack_88,
                                        uVar3 + (short)puVar40[0x22],in_stack_fffffffffffffe88,
                                        (short)puVar40[0x23]);
                          uVar15 = FUN_140f6e8b0(_DAT_14250dfd8,auStack_84[0]);
                          switch(uVar15) {
                          case 0x1b:
                          case 0x1c:
                          case 0x1d:
                          case 0x1e:
                          case 0x1f:
                          case 0x20:
                          case 0x21:
                          case 0x22:
                          case 0x23:
                          case 0x24:
                          case 0x25:
                          case 0x26:
                          case 0x27:
                          case 0x28:
                          case 0x29:
                          case 0x2a:
                          case 0x2b:
                          case 0x2c:
                          case 0x2d:
                          case 0x2e:
                          case 0x2f:
                            bStackX_10 = 0;
                            in_stack_fffffffffffffe88 = 0;
                            FUN_14054eab0(puVar40,uVar3,uVar4,0,0);
                            FUN_1414c8ca0(param_1,uVar3 + (short)puVar40[0x22],
                                          uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                          (short)puVar40[0x23]);
                            break;
                          default:
                            goto LAB_14147985c;
                          }
                        }
                        uVar14 = (uint)uVar4;
                        uVar30 = (ulonglong)uStack_130;
                        bVar9 = (byte)uStack_130;
                        if ((1 < bVar9) && (cVar11 == '\0')) {
                          uVar7 = (undefined3)(uStack_130 >> 8);
                          if (uVar3 == 0) {
                            if (sStack_12a == 0) {
                              uStack_130 = CONCAT31(uVar7,bVar9 - 1);
                              uVar30 = (ulonglong)uStack_130;
                              in_stack_fffffffffffffe88 = 0x200000;
                              FUN_14054eab0(puVar40,0,uVar14,uVar30 & 0xff,0x200000);
                              sVar26 = (short)puVar40[0x22];
                            }
                            else {
                              if (*(longlong *)
                                   (lStack_138 +
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)(param_1 + 0x116bb8) + -8 +
                                      (longlong)sStack_12a * 8) + lStack_110 * 8)) != 0)
                              goto LAB_141479b9e;
                              uStack_130 = CONCAT31(uVar7,bVar9 - 1);
                              uVar30 = (ulonglong)uStack_130;
                              in_stack_fffffffffffffe88 = 0x200000;
                              FUN_14054eab0(puVar40,0,uVar14,uVar30 & 0xff,0x200000);
                              sVar26 = (short)puVar40[0x22];
                            }
LAB_141479b82:
                            FUN_1414c8ca0(param_1,sVar26,
                                          uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                          (short)puVar40[0x23]);
                          }
                          else if ((uVar3 == 0xf) &&
                                  ((iStack_d4 == *(int *)(param_1 + 0x116be0) + -1 ||
                                   (*(longlong *)
                                     (lStack_138 +
                                     *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x116bb8) + 8 +
                                        (longlong)iStack_d4 * 8) + lStack_110 * 8)) == 0)))) {
                            uStack_130 = CONCAT31(uVar7,bVar9 - 1);
                            uVar30 = (ulonglong)uStack_130;
                            in_stack_fffffffffffffe88 = 0x200000;
                            FUN_14054eab0(puVar40,0xf,uVar14,uVar30 & 0xff,0x200000);
                            sVar26 = (short)puVar40[0x22] + 0xf;
                            goto LAB_141479b82;
                          }
LAB_141479b9e:
                          uVar39 = (undefined7)(uVar30 >> 8);
                          if (uVar4 == 0) {
                            if ((sStack_12c == 0) ||
                               (*(longlong *)
                                 (lStack_138 +
                                 *(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8)
                                   + -8 + (longlong)sStack_12c * 8)) == 0)) {
                              cVar11 = (char)uVar30 + -1;
                              uVar30 = CONCAT71(uVar39,cVar11);
                              uStack_130 = (uint)uVar30;
                              in_stack_fffffffffffffe88 = 0x200000;
                              FUN_14054eab0(puVar40,uVar3,0,cVar11,0x200000);
                              sVar26 = *(short *)((longlong)puVar40 + 0x8a);
LAB_141479c78:
                              FUN_1414c8ca0(param_1,uVar3 + (short)puVar40[0x22],sVar26,
                                            (short)puVar40[0x23]);
                            }
                          }
                          else if ((uVar4 == 0xf) &&
                                  ((iStack_d8 == *(int *)(param_1 + 0x116be4) + -1 ||
                                   (*(longlong *)
                                     (lStack_138 +
                                     *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) + 8 +
                                      (longlong)iStack_d8 * 8)) == 0)))) {
                            cVar11 = (char)uVar30 + -1;
                            uVar30 = CONCAT71(uVar39,cVar11);
                            in_stack_fffffffffffffe88 = 0x200000;
                            uStack_130 = (uint)uVar30;
                            FUN_14054eab0(puVar40,uVar3,0xf,cVar11,0x200000);
                            sVar26 = *(short *)((longlong)puVar40 + 0x8a) + 0xf;
                            goto LAB_141479c78;
                          }
                        }
                        cVar11 = (char)uVar30;
                        if ('\0' < cVar11) {
                          acStackX_20[0] = '\0';
                          uVar22 = puVar40[(longlong)(short)uVar3 * 0x10 + (longlong)(short)uVar4 +
                                           0x1a8] & 7;
                          if (((uVar22 - 3 & 0xfffffffc) != 0) || (uVar22 == 4)) {
                            if ((uVar22 == 7) &&
                               (iVar27 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1,
                               -1 < iVar27)) {
                              lVar29 = (longlong)iVar27;
                              do {
                                lVar33 = *(longlong *)(_DAT_142410e58 + lVar29 * 8);
                                if ((((*(int *)(lVar33 + 0x10) ==
                                       (int)(short)(uVar3 + (short)puVar40[0x22])) &&
                                     (*(int *)(lVar33 + 0x1c) ==
                                      (int)(short)(uVar4 + *(short *)((longlong)puVar40 + 0x8a))))
                                    && (*(int *)(lVar33 + 0x20) == (int)(short)puVar40[0x23])) &&
                                   ((*(byte *)(lVar33 + 0x148) & 0x10) != 0)) goto LAB_141479f45;
                                lVar29 = lVar29 + -1;
                              } while (-1 < lVar29);
                            }
                            in_stack_fffffffffffffea0 = 0;
                            in_stack_fffffffffffffe88 =
                                 CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                            cVar12 = FUN_14054e030(puVar40,uVar3,uVar14,1,in_stack_fffffffffffffe88)
                            ;
                            if (cVar12 != '\0') {
                              sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                              sVar32 = uVar3 + (short)puVar40[0x22];
                              if ((((-1 < sVar32) && ((int)sVar32 < *(int *)(param_1 + 0x116bec)))
                                  && ((-1 < sVar26 &&
                                      (((int)sVar26 < *(int *)(param_1 + 0x116bf0) &&
                                       (0 < (short)uStack_144)))))) &&
                                 ((short)uStack_144 + -1 < *(int *)(param_1 + 0x116bf4))) {
                                if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0x116bb8) +
                                         (longlong)(sVar32 >> 4) * 8) + (longlong)(sVar26 >> 4) * 8)
                                      + -8 + (longlong)(short)uStack_144 * 8) != 0)) {
                                  cVar12 = FUN_1414c3940(param_1,uVar3 + (short)puVar40[0x22],
                                                         uVar4 + *(short *)((longlong)puVar40 + 0x8a
                                                                           ),(short)uStack_144 + -1)
                                  ;
                                  if (cVar12 == '\0') goto LAB_141479f45;
                                  lVar29 = (longlong)(short)uStack_144 * 8 + -8;
                                  uVar14 = uVar14 & 0xffffff00;
                                  uVar22 = *(uint *)(*(longlong *)
                                                      (lVar29 + *(longlong *)
                                                                 (*(longlong *)
                                                                   (*(longlong *)
                                                                     (param_1 + 0x116bb8) +
                                                                   lStack_120 * 8) + lStack_110 * 8)
                                                      ) + 0x2a0 +
                                                    ((longlong)(short)uVar3 * 0x10 +
                                                    (longlong)(short)uVar4) * 4);
                                  if ((uVar22 >> 0x15 & 1) == 0) {
LAB_141479ebb:
                                    bVar9 = 7 - (char)uVar14;
                                    uVar22 = (uint)bVar9;
                                    if (cVar11 < (char)bVar9) {
                                      uVar22 = (uint)uVar30 & 0xff;
                                    }
                                    cVar11 = cVar11 - (char)uVar22;
                                    uVar30 = CONCAT71((int7)(uVar30 >> 8),cVar11);
                                    FUN_14054eab0(puVar40,uVar3,uVar4,cVar11,0x200000);
                                    in_stack_fffffffffffffe88 = 0x200000;
                                    FUN_14054eab0(*(undefined8 *)
                                                   (lVar29 + *(longlong *)
                                                              (*(longlong *)
                                                                (*(longlong *)(param_1 + 0x116bb8) +
                                                                lStack_120 * 8) + lStack_110 * 8)),
                                                  uVar3,uVar4,uVar22 + uVar14,0x200000);
                                    uStack_130 = (uint)uVar30;
                                    if (cVar11 < '\x01') goto LAB_141479f45;
                                  }
                                  else {
                                    bVar10 = (byte)uVar22 & 1;
                                    bVar9 = bVar10 | 2;
                                    if ((uVar22 & 2) == 0) {
                                      bVar9 = bVar10;
                                    }
                                    bVar10 = bVar9 | 4;
                                    if ((uVar22 & 4) == 0) {
                                      bVar10 = bVar9;
                                    }
                                    uVar14 = (uint)bVar10;
                                    if (bVar10 < 7) goto LAB_141479ebb;
                                  }
                                  acStackX_20[0] = '\x01';
                                  goto LAB_141479f45;
                                }
                              }
                              in_stack_fffffffffffffe88 = 0x200000;
                              FUN_14054eab0(puVar40,uVar3,uVar14,0,0x200000);
                              FUN_1414c8ca0(param_1,uVar3 + (short)puVar40[0x22],
                                            uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                            (short)puVar40[0x23]);
                              goto LAB_14147a5c7;
                            }
                          }
LAB_141479f45:
                          if (('\x01' < (char)uVar30) || (acStackX_20[0] != '\0')) {
                            sVar32 = -1;
                            lVar33 = (longlong)(short)(uVar4 - 1) << 2;
                            sVar26 = -1;
                            lVar29 = lVar33;
                            while( true ) {
                              do {
                                puVar19 = puStack_98;
                                if (((sVar32 != 0) || (sVar26 != 0)) &&
                                   (cVar11 = FUN_1414c3940(param_1,sVar32 + (short)puStack_98[0x22]
                                                                   + uVar3,
                                                           sVar26 + *(short *)((longlong)puStack_98
                                                                              + 0x8a) + uVar4,
                                                           uStack_144), cVar11 != '\0')) {
                                  uVar14 = (uint)(short)uVar3;
                                  iVar27 = (int)sVar32 + uVar14;
                                  if (((iVar27 < 0) || ((int)sVar26 + (int)(short)uVar4 < 0)) ||
                                     ((0xf < iVar27 || (0xf < (int)sVar26 + (int)(short)uVar4)))) {
                                    sVar41 = sStack_12a;
                                    if (iVar27 < 0) {
                                      sVar41 = sStack_12a + -1;
                                    }
                                    sVar35 = sStack_12c;
                                    if ((int)sVar26 + (int)(short)uVar4 < 0) {
                                      sVar35 = sStack_12c + -1;
                                    }
                                    if (0xf < (int)((int)sVar32 + uVar14)) {
                                      sVar41 = sVar41 + 1;
                                    }
                                    if (0xf < (int)sVar26 + (int)(short)uVar4) {
                                      sVar35 = sVar35 + 1;
                                    }
                                    if (((-1 < sVar41) &&
                                        ((int)sVar41 < *(int *)(param_1 + 0x116be0))) &&
                                       ((-1 < sVar35 &&
                                        (((int)sVar35 < *(int *)(param_1 + 0x116be4) &&
                                         (uStack_80 = *(ulonglong *)
                                                       (lStack_138 +
                                                       *(longlong *)
                                                        (*(longlong *)
                                                          (*(longlong *)(param_1 + 0x116bb8) +
                                                          (longlong)sVar41 * 8) +
                                                        (longlong)sVar35 * 8)), uStack_80 != 0))))))
                                    {
                                      uVar14 = uVar14 + 0x10 + (int)sVar32 & 0x8000000f;
                                      if ((int)uVar14 < 0) {
                                        uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar22 = (short)uVar4 + 0x10 + (int)sVar26 & 0x8000000f;
                                      if ((int)uVar22 < 0) {
                                        uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                      }
                                      bVar9 = 0;
                                      uVar16 = *(uint *)(uStack_80 + 0x2a0 +
                                                        ((longlong)(short)uVar14 * 0x10 +
                                                        (longlong)(short)uVar22) * 4);
                                      if ((uVar16 >> 0x15 & 1) != 0) {
                                        bVar10 = (byte)uVar16 & 1;
                                        bVar9 = bVar10 | 2;
                                        if ((uVar16 & 2) == 0) {
                                          bVar9 = bVar10;
                                        }
                                        if ((uVar16 & 4) != 0) {
                                          bVar9 = bVar9 | 4;
                                        }
                                      }
                                      uStackX_18 = CONCAT71(uStackX_18._1_7_,bVar9);
                                      if ((char)bVar9 < (char)uStack_130) {
                                        if (puStack_b0 == puStack_a8) {
                                          FUN_140072200(&lStack_b8,puStack_b0,&uStack_80);
                                        }
                                        else {
                                          *puStack_b0 = uStack_80;
                                          puStack_b0 = puStack_b0 + 1;
                                        }
                                        acStack_142[0] = (char)uVar14;
                                        if (pcStack_100 == pcStack_f8) {
                                          FUN_1401fd030(&pcStack_108,pcStack_100,acStack_142);
                                        }
                                        else {
                                          *pcStack_100 = acStack_142[0];
                                          pcStack_100 = pcStack_100 + 1;
                                        }
                                        acStack_142[0] = (char)uVar22;
                                        if (pcStack_c8 == pcStack_c0) {
                                          FUN_1401fd030(&lStack_d0,pcStack_c8,acStack_142);
                                        }
                                        else {
                                          *pcStack_c8 = acStack_142[0];
                                          pcStack_c8 = pcStack_c8 + 1;
                                        }
                                        if (pbStack_e8 == pbStack_e0) {
                                          FUN_1401fd030(&lStack_f0,pbStack_e8,&uStackX_18);
                                        }
                                        else {
                                          *pbStack_e8 = bVar9;
                                          pbStack_e8 = pbStack_e8 + 1;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    bVar9 = 0;
                                    uVar22 = *(uint *)((longlong)puVar19 +
                                                      lVar29 + (longlong)(short)(uVar3 + sVar32) *
                                                               0x40 + 0x2a0);
                                    if ((uVar22 >> 0x15 & 1) != 0) {
                                      bVar10 = (byte)uVar22 & 1;
                                      bVar9 = bVar10 | 2;
                                      if ((uVar22 & 2) == 0) {
                                        bVar9 = bVar10;
                                      }
                                      if ((uVar22 & 4) != 0) {
                                        bVar9 = bVar9 | 4;
                                      }
                                    }
                                    uStackX_18 = CONCAT71(uStackX_18._1_7_,bVar9);
                                    if ((char)bVar9 < (char)uStack_130) {
                                      if (puStack_b0 == puStack_a8) {
                                        FUN_140072200(&lStack_b8,puStack_b0,&puStack_70);
                                        uVar14 = (uint)uVar3;
                                      }
                                      else {
                                        *puStack_b0 = (ulonglong)puVar19;
                                        puStack_b0 = puStack_b0 + 1;
                                      }
                                      acStack_142[0] = (char)sVar32 + (char)uVar14;
                                      if (pcStack_100 == pcStack_f8) {
                                        FUN_1401fd030(&pcStack_108,pcStack_100,acStack_142);
                                      }
                                      else {
                                        *pcStack_100 = acStack_142[0];
                                        pcStack_100 = pcStack_100 + 1;
                                      }
                                      acStack_142[0] = (char)sVar26 + (char)uVar4;
                                      if (pcStack_c8 == pcStack_c0) {
                                        FUN_1401fd030(&lStack_d0,pcStack_c8,acStack_142);
                                      }
                                      else {
                                        *pcStack_c8 = acStack_142[0];
                                        pcStack_c8 = pcStack_c8 + 1;
                                      }
                                      if (pbStack_e8 == pbStack_e0) {
                                        FUN_1401fd030(&lStack_f0,pbStack_e8,&uStackX_18);
                                      }
                                      else {
                                        *pbStack_e8 = bVar9;
                                        pbStack_e8 = pbStack_e8 + 1;
                                      }
                                    }
                                  }
                                }
                                sVar26 = sVar26 + 1;
                                lVar29 = lVar29 + 4;
                              } while (sVar26 < 2);
                              sVar32 = sVar32 + 1;
                              if (1 < sVar32) break;
                              sVar26 = -1;
                              lVar29 = lVar33;
                            }
                            puVar40 = puStack_98;
                            if (pcStack_100 != pcStack_108) {
                              do {
                                uVar14 = (int)pcStack_100 - (int)pcStack_108;
                                if (uVar14 < 2) {
                                  sVar26 = 0;
                                }
                                else {
                                  uVar22 = FUN_140ece790();
                                  sVar26 = (short)((uVar22 + (int)((longlong)
                                                                   ((ulonglong)uVar22 * 0x100000003)
                                                                  >> 0x3f) * 0x7fffffff) /
                                                  ((int)(0x7fffffff / (ulonglong)uVar14) + 1U));
                                }
                                puVar40 = puStack_98;
                                lVar33 = (longlong)sVar26;
                                plVar2 = (longlong *)(lStack_b8 + lVar33 * 8);
                                lVar29 = *plVar2;
                                cVar11 = pcStack_108[lVar33];
                                cVar12 = *(char *)(lVar33 + lStack_d0);
                                cVar37 = *(char *)(lVar33 + lStack_f0);
                                cVar34 = (char)uStack_130;
                                if ((cVar37 < cVar34) &&
                                   (('\x01' < cVar34 || (acStackX_20[0] != '\0')))) {
                                  if ((cVar37 == '\0') || ((int)cVar37 < cVar34 + -1)) {
                                    FUN_1414c8b80(param_1,uVar3 + (short)puStack_98[0x22],
                                                  uVar4 + *(short *)((longlong)puStack_98 + 0x8a),
                                                  (short)cVar11 + *(short *)(lVar29 + 0x88),
                                                  (short)cVar12 + *(short *)(lVar29 + 0x8a),
                                                  (short)puStack_98[0x23]);
                                  }
                                  cVar34 = (char)uStack_130 + -1;
                                  uStack_130 = CONCAT31((int3)(uStack_130 >> 8),cVar34);
                                  *(char *)(lVar33 + lStack_f0) =
                                       *(char *)(lVar33 + lStack_f0) + '\x01';
                                  FUN_14054eab0(puVar40,uVar3,uVar4,cVar34,0x200000);
                                  in_stack_fffffffffffffe88 = 0x200000;
                                  FUN_14054eab0(lVar29,(short)cVar11,(short)cVar12,cVar37 + '\x01',
                                                0x200000);
                                  cVar11 = FUN_1414c3940(param_1,(short)cVar11 +
                                                                 *(short *)(lVar29 + 0x88),
                                                         (short)cVar12 + *(short *)(lVar29 + 0x8a),
                                                         uStack_144);
                                  if (cVar11 == '\0') {
                                    lVar33 = lStack_b8 + (longlong)sVar26 * 8;
                                    lVar29 = lVar33 + 8;
                                    func_0x00014155486a(lVar33,lVar29,(longlong)puStack_b0 - lVar29)
                                    ;
                                    puStack_b0 = puStack_b0 + -1;
                                    pcVar18 = pcStack_108 + sVar26;
                                    func_0x00014155486a(pcVar18,pcVar18 + 1,
                                                        (longlong)pcStack_100 -
                                                        (longlong)(pcVar18 + 1));
                                    pcStack_100 = pcStack_100 + -1;
                                    lVar29 = sVar26 + lStack_d0 + 1;
                                    func_0x00014155486a(sVar26 + lStack_d0,lVar29,
                                                        (longlong)pcStack_c8 - lVar29);
                                    pcStack_c8 = pcStack_c8 + -1;
                                    lVar29 = sVar26 + lStack_f0 + 1;
                                    func_0x00014155486a(sVar26 + lStack_f0,lVar29,
                                                        (longlong)pbStack_e8 - lVar29);
                                    goto LAB_14147a5af;
                                  }
                                }
                                else {
                                  func_0x00014155486a(plVar2,plVar2 + 1,
                                                      (longlong)puStack_b0 - (longlong)(plVar2 + 1))
                                  ;
                                  puStack_b0 = puStack_b0 + -1;
                                  pcVar18 = pcStack_108 + lVar33;
                                  func_0x00014155486a(pcVar18,pcVar18 + 1,
                                                      (longlong)pcStack_100 -
                                                      (longlong)(pcVar18 + 1));
                                  pcStack_100 = pcStack_100 + -1;
                                  lVar29 = lStack_d0 + lVar33 + 1;
                                  func_0x00014155486a(lStack_d0 + lVar33,lVar29,
                                                      (longlong)pcStack_c8 - lVar29);
                                  pcStack_c8 = pcStack_c8 + -1;
                                  lVar29 = lStack_f0 + lVar33 + 1;
                                  func_0x00014155486a(lStack_f0 + lVar33,lVar29,
                                                      (longlong)pbStack_e8 - lVar29);
                                  puVar40 = puStack_98;
LAB_14147a5af:
                                  pbStack_e8 = pbStack_e8 + -1;
                                }
                              } while (pcStack_100 != pcStack_108);
                            }
                          }
                        }
LAB_14147a5c7:
                        if ('\0' < (char)bStackX_10) {
                          bVar5 = false;
                          acStackX_20[0] = '\0';
                          uVar38 = (ulonglong)(short)uVar3;
                          uVar30 = (ulonglong)(short)uVar4;
                          uVar14 = puVar40[uVar38 * 0x10 + uVar30 + 0x1a8] & 7;
                          if (((uVar14 - 3 & 0xfffffffc) == 0) && (uVar14 != 4)) {
LAB_14147a867:
                            if (('\x01' < (char)bStackX_10) || (bVar5)) {
                              sVar32 = -1;
                              sVar26 = (short)uVar30;
                              do {
                                sVar41 = -1;
                                lVar29 = (longlong)(short)(sVar26 + -1) << 2;
                                do {
                                  puVar19 = puStack_98;
                                  if ((sVar32 != 0) || (sVar41 != 0)) {
                                    sVar35 = (short)uVar30;
                                    cVar11 = FUN_1414c3940(param_1,sVar32 + (short)puStack_98[0x22]
                                                                   + (short)uVar38,
                                                           sVar41 + *(short *)((longlong)puStack_98
                                                                              + 0x8a) + sVar35,
                                                           uStack_144);
                                    if (cVar11 == '\0') {
LAB_14147adfa:
                                      uVar38 = (ulonglong)uVar3;
                                    }
                                    else {
                                      uVar14 = (uint)(short)uVar3;
                                      uVar38 = (ulonglong)uVar14;
                                      iVar27 = (int)sVar32 + uVar14;
                                      if ((((iVar27 < 0) || ((int)sVar41 + (int)sVar35 < 0)) ||
                                          (0xf < iVar27)) || (0xf < (int)sVar41 + (int)sVar35)) {
                                        sVar21 = sStack_12a;
                                        if (iVar27 < 0) {
                                          sVar21 = sStack_12a + -1;
                                        }
                                        sVar36 = sStack_12c;
                                        if ((int)sVar41 + (int)sVar35 < 0) {
                                          sVar36 = sStack_12c + -1;
                                        }
                                        if (0xf < (int)((int)sVar32 + uVar14)) {
                                          sVar21 = sVar21 + 1;
                                        }
                                        if (0xf < (int)sVar41 + (int)sVar35) {
                                          sVar36 = sVar36 + 1;
                                        }
                                        if (((-1 < sVar21) &&
                                            ((int)sVar21 < *(int *)(param_1 + 0x116be0))) &&
                                           ((-1 < sVar36 &&
                                            (((int)sVar36 < *(int *)(param_1 + 0x116be4) &&
                                             (uStack_80 = *(ulonglong *)
                                                           (lStack_138 +
                                                           *(longlong *)
                                                            (*(longlong *)
                                                              (*(longlong *)(param_1 + 0x116bb8) +
                                                              (longlong)sVar21 * 8) +
                                                            (longlong)sVar36 * 8)), uStack_80 != 0))
                                            )))) {
                                          uVar14 = uVar14 + 0x10 + (int)sVar32 & 0x8000000f;
                                          if ((int)uVar14 < 0) {
                                            uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                          }
                                          uVar22 = sVar35 + 0x10 + (int)sVar41 & 0x8000000f;
                                          if ((int)uVar22 < 0) {
                                            uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                          }
                                          bVar9 = 0;
                                          uVar16 = *(uint *)(uStack_80 + 0x2a0 +
                                                            ((longlong)(short)uVar14 * 0x10 +
                                                            (longlong)(short)uVar22) * 4);
                                          if ((uVar16 >> 0x15 & 1) == 0) {
                                            bVar10 = (byte)uVar16 & 1;
                                            bVar9 = bVar10 | 2;
                                            if ((uVar16 & 2) == 0) {
                                              bVar9 = bVar10;
                                            }
                                            if ((uVar16 & 4) != 0) {
                                              bVar9 = bVar9 | 4;
                                            }
                                          }
                                          uStackX_18 = CONCAT71(uStackX_18._1_7_,bVar9);
                                          if ((char)bVar9 < (char)bStackX_10) {
                                            if (puStack_b0 == puStack_a8) {
                                              FUN_140072200(&lStack_b8,puStack_b0,&uStack_80);
                                            }
                                            else {
                                              *puStack_b0 = uStack_80;
                                              puStack_b0 = puStack_b0 + 1;
                                            }
                                            acStack_142[0] = (char)uVar14;
                                            if (pcStack_100 == pcStack_f8) {
                                              FUN_1401fd030(&pcStack_108,pcStack_100,acStack_142);
                                            }
                                            else {
                                              *pcStack_100 = acStack_142[0];
                                              pcStack_100 = pcStack_100 + 1;
                                            }
                                            acStack_142[0] = (char)uVar22;
                                            if (pcStack_c8 == pcStack_c0) {
                                              FUN_1401fd030(&lStack_d0,pcStack_c8,acStack_142);
                                            }
                                            else {
                                              *pcStack_c8 = acStack_142[0];
                                              pcStack_c8 = pcStack_c8 + 1;
                                            }
                                            if (pbStack_e8 == pbStack_e0) {
                                              FUN_1401fd030(&lStack_f0,pbStack_e8,&uStackX_18);
                                            }
                                            else {
                                              *pbStack_e8 = bVar9;
                                              pbStack_e8 = pbStack_e8 + 1;
                                            }
                                            uVar30 = (ulonglong)uVar4;
                                            goto LAB_14147adfa;
                                          }
                                          uVar30 = (ulonglong)uVar4;
                                        }
                                      }
                                      else {
                                        bVar9 = 0;
                                        uVar22 = *(uint *)((longlong)puVar19 +
                                                          lVar29 + (longlong)(short)(uVar3 + sVar32)
                                                                   * 0x40 + 0x2a0);
                                        if ((uVar22 >> 0x15 & 1) == 0) {
                                          bVar10 = (byte)uVar22 & 1;
                                          bVar9 = bVar10 | 2;
                                          if ((uVar22 & 2) == 0) {
                                            bVar9 = bVar10;
                                          }
                                          if ((uVar22 & 4) != 0) {
                                            bVar9 = bVar9 | 4;
                                          }
                                        }
                                        uStackX_18 = CONCAT71(uStackX_18._1_7_,bVar9);
                                        if ((char)bVar9 < (char)bStackX_10) {
                                          if (puStack_b0 == puStack_a8) {
                                            FUN_140072200(&lStack_b8,puStack_b0,&puStack_70);
                                            uVar14 = (uint)uVar3;
                                          }
                                          else {
                                            *puStack_b0 = (ulonglong)puVar19;
                                            puStack_b0 = puStack_b0 + 1;
                                          }
                                          acStack_142[0] = (char)uVar14 + (char)sVar32;
                                          if (pcStack_100 == pcStack_f8) {
                                            FUN_1401fd030(&pcStack_108,pcStack_100,acStack_142);
                                          }
                                          else {
                                            *pcStack_100 = acStack_142[0];
                                            pcStack_100 = pcStack_100 + 1;
                                          }
                                          acStack_142[0] = (char)sVar41 + (char)uVar30;
                                          if (pcStack_c8 == pcStack_c0) {
                                            FUN_1401fd030(&lStack_d0,pcStack_c8,acStack_142);
                                          }
                                          else {
                                            *pcStack_c8 = acStack_142[0];
                                            pcStack_c8 = pcStack_c8 + 1;
                                          }
                                          if (pbStack_e8 == pbStack_e0) {
                                            FUN_1401fd030(&lStack_f0,pbStack_e8,&uStackX_18);
                                          }
                                          else {
                                            *pbStack_e8 = bVar9;
                                            pbStack_e8 = pbStack_e8 + 1;
                                          }
                                          goto LAB_14147adfa;
                                        }
                                      }
                                    }
                                  }
                                  sVar41 = sVar41 + 1;
                                  lVar29 = lVar29 + 4;
                                } while (sVar41 < 2);
                                sVar32 = sVar32 + 1;
                              } while (sVar32 < 2);
                              puVar40 = puStack_98;
                              if (pcStack_100 != pcStack_108) {
                                uStackX_18 = (longlong)(short)uVar38 << 6;
                                uStack_80 = (longlong)(short)uVar30 * 4;
                                do {
                                  uVar14 = (int)pcStack_100 - (int)pcStack_108;
                                  if (uVar14 < 2) {
                                    sVar26 = 0;
                                    uVar25 = (ushort)uVar38;
                                  }
                                  else {
                                    uVar22 = FUN_140ece790();
                                    sVar26 = (short)((uVar22 + (int)((longlong)
                                                                     ((ulonglong)uVar22 *
                                                                     0x100000003) >> 0x3f) *
                                                               0x7fffffff) /
                                                    ((int)(0x7fffffff / (ulonglong)uVar14) + 1U));
                                    uVar25 = uVar3;
                                  }
                                  lVar33 = (longlong)sVar26;
                                  plVar2 = (longlong *)(lStack_b8 + lVar33 * 8);
                                  lVar29 = *plVar2;
                                  cVar11 = pcStack_108[lVar33];
                                  cVar12 = *(char *)(lVar33 + lStack_d0);
                                  cVar37 = *(char *)(lVar33 + lStack_f0);
                                  if ((cVar37 < (char)bStackX_10) &&
                                     (('\x01' < (char)bStackX_10 || (acStackX_20[0] != '\0')))) {
                                    if ((cVar37 == '\0') || ((int)cVar37 < (char)bStackX_10 + -1)) {
                                      FUN_1414c8b80(param_1,uVar25 + (short)puStack_98[0x22],
                                                    uVar4 + *(short *)((longlong)puStack_98 + 0x8a),
                                                    (short)cVar11 + *(short *)(lVar29 + 0x88),
                                                    (short)cVar12 + *(short *)(lVar29 + 0x8a),
                                                    (short)puStack_98[0x23]);
                                    }
                                    bStackX_10 = bStackX_10 - 1;
                                    in_stack_fffffffffffffe88 = 0;
                                    FUN_14054eab0(puStack_98,uVar3,uVar4,bStackX_10,0);
                                    bVar9 = 0;
                                    lStack_60 = (longlong)cVar11 * 0x40 + lVar29;
                                    lStack_58 = (longlong)cVar12 * 4;
                                    uVar14 = *(uint *)(lStack_58 + 0x2a0 + lStack_60);
                                    if ((uVar14 >> 0x15 & 1) != 0) {
                                      bVar10 = (byte)uVar14 & 1;
                                      bVar9 = bVar10 | 2;
                                      if ((uVar14 & 2) == 0) {
                                        bVar9 = bVar10;
                                      }
                                      if ((uVar14 & 4) != 0) {
                                        bVar9 = bVar9 | 4;
                                      }
                                    }
                                    if (bVar9 != 0) {
                                      FUN_14054efd0(lVar29,(longlong)cVar11 & 0xffff,
                                                    (longlong)cVar12 & 0xffff);
                                      lVar33 = lStack_b8 + (longlong)sVar26 * 8;
                                      lVar29 = lVar33 + 8;
                                      func_0x00014155486a(lVar33,lVar29,
                                                          (longlong)puStack_b0 - lVar29);
                                      puStack_b0 = puStack_b0 + -1;
                                      pcVar18 = pcStack_108 + sVar26;
                                      func_0x00014155486a(pcVar18,pcVar18 + 1,
                                                          (longlong)pcStack_100 -
                                                          (longlong)(pcVar18 + 1));
                                      pcStack_100 = pcStack_100 + -1;
                                      lVar29 = sVar26 + lStack_d0 + 1;
                                      func_0x00014155486a(sVar26 + lStack_d0,lVar29,
                                                          (longlong)pcStack_c8 - lVar29);
                                      lVar33 = sVar26 + lStack_f0;
                                      goto LAB_14147b11c;
                                    }
                                    pcVar18 = (char *)(sVar26 + lStack_f0);
                                    *pcVar18 = *pcVar18 + '\x01';
                                    in_stack_fffffffffffffe88 = 0;
                                    FUN_14054eab0();
                                    if (cVar37 == '\0') {
                                      puVar19 = (uint *)(lStack_60 + 0x2a0 + lStack_58);
                                      *puVar19 = *puVar19 |
                                                 *(uint *)((longlong)puStack_90 +
                                                          uStack_80 + uStackX_18) & 0xc0000000;
                                    }
                                  }
                                  else {
                                    func_0x00014155486a(plVar2,plVar2 + 1,
                                                        (longlong)puStack_b0 -
                                                        (longlong)(plVar2 + 1));
                                    puStack_b0 = puStack_b0 + -1;
                                    pcVar18 = pcStack_108 + lVar33;
                                    func_0x00014155486a(pcVar18,pcVar18 + 1,
                                                        (longlong)pcStack_100 -
                                                        (longlong)(pcVar18 + 1));
                                    pcStack_100 = pcStack_100 + -1;
                                    lVar29 = lStack_d0 + lVar33 + 1;
                                    func_0x00014155486a(lStack_d0 + lVar33,lVar29,
                                                        (longlong)pcStack_c8 - lVar29);
                                    lVar33 = lStack_f0 + lVar33;
LAB_14147b11c:
                                    pcStack_c8 = pcStack_c8 + -1;
                                    func_0x00014155486a(lVar33,lVar33 + 1,
                                                        (longlong)pbStack_e8 - (lVar33 + 1));
                                    pbStack_e8 = pbStack_e8 + -1;
                                  }
                                  puVar40 = puStack_98;
                                  if (pcStack_100 == pcStack_108) break;
                                  uVar38 = (ulonglong)uVar3;
                                } while( true );
                              }
                            }
                          }
                          else {
                            if ((uVar14 == 7) &&
                               (iVar27 = (int)(_DAT_142410e60 - _DAT_142410e58 >> 3) + -1,
                               -1 < iVar27)) {
                              lVar29 = (longlong)iVar27;
                              do {
                                lVar33 = *(longlong *)(_DAT_142410e58 + lVar29 * 8);
                                if ((((*(int *)(lVar33 + 0x10) ==
                                       (int)(short)(uVar3 + (short)puVar40[0x22])) &&
                                     (*(int *)(lVar33 + 0x1c) ==
                                      (int)(short)(uVar4 + *(short *)((longlong)puVar40 + 0x8a))))
                                    && (*(int *)(lVar33 + 0x20) == (int)(short)puVar40[0x23])) &&
                                   ((*(byte *)(lVar33 + 0x148) & 0x10) != 0)) goto LAB_14147a867;
                                lVar29 = lVar29 + -1;
                              } while (-1 < lVar29);
                            }
                            in_stack_fffffffffffffea0 = 0;
                            in_stack_fffffffffffffe88 =
                                 CONCAT31((int3)(in_stack_fffffffffffffe88 >> 8),1);
                            cVar11 = FUN_14054e030(puVar40,uVar3,uVar4,1,in_stack_fffffffffffffe88);
                            if (cVar11 == '\0') goto LAB_14147a867;
                            sVar26 = uVar4 + *(short *)((longlong)puVar40 + 0x8a);
                            sVar32 = (short)uVar38 + (short)puVar40[0x22];
                            if ((((-1 < sVar32) && ((int)sVar32 < *(int *)(param_1 + 0x116bec))) &&
                                ((-1 < sVar26 &&
                                 (((int)sVar26 < *(int *)(param_1 + 0x116bf0) &&
                                  (0 < (short)uStack_144)))))) &&
                               ((short)uStack_144 + -1 < *(int *)(param_1 + 0x116bf4))) {
                              if ((*(longlong *)(param_1 + 0x116bb8) != 0) &&
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(param_1 + 0x116bb8) +
                                       (longlong)(sVar32 >> 4) * 8) + (longlong)(sVar26 >> 4) * 8) +
                                    -8 + (longlong)(short)uStack_144 * 8) != 0)) {
                                cVar11 = FUN_1414c3940(param_1,(short)uVar38 + (short)puVar40[0x22],
                                                       uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                                       (short)uStack_144 + -1);
                                if (cVar11 != '\0') {
                                  lVar29 = (longlong)(short)uStack_144 * 8 + -8;
                                  lVar24 = *(longlong *)
                                            (lVar29 + *(longlong *)
                                                       (*(longlong *)
                                                         (*(longlong *)(param_1 + 0x116bb8) +
                                                         lStack_120 * 8) + lStack_110 * 8));
                                  uVar22 = (uint)param_1 & 0xffffff00;
                                  lVar33 = ((longlong)(short)uVar3 * 0x10 + (longlong)(short)uVar4)
                                           * 4 + 0x2a0;
                                  uVar14 = *(uint *)(lVar24 + lVar33);
                                  if ((uVar14 >> 0x15 & 1) != 0) {
LAB_14147a986:
                                    bVar9 = 7 - (char)uVar22;
                                    if ((char)bStackX_10 < (char)bVar9) {
                                      bVar9 = bStackX_10;
                                    }
                                    bStackX_10 = bStackX_10 - bVar9;
                                    in_stack_fffffffffffffe88 = 0;
                                    FUN_14054eab0(puVar40,uVar3,uVar4,bStackX_10,0);
                                    bVar5 = '\0' < (char)bStackX_10;
                                    lVar29 = *(longlong *)
                                              (lVar29 + *(longlong *)
                                                         (*(longlong *)
                                                           (*(longlong *)(param_1 + 0x116bb8) +
                                                           lStack_120 * 8) + lStack_110 * 8));
                                    uVar14 = *(uint *)(lVar33 + lVar29);
                                    acStackX_20[0] = bVar5;
                                    if ((uVar14 >> 0x15 & 1) != 0) {
                                      bVar13 = (byte)uVar14 & 1;
                                      bVar10 = bVar13 | 2;
                                      if ((uVar14 & 2) == 0) {
                                        bVar10 = bVar13;
                                      }
                                      bVar13 = bVar10 | 4;
                                      if ((uVar14 & 4) == 0) {
                                        bVar13 = bVar10;
                                      }
                                      if (bVar13 != 0) {
                                        FUN_14054efd0(lVar29,uVar3,uVar4);
                                        goto LAB_14147a85a;
                                      }
                                    }
                                    uVar14 = FUN_140ece790();
                                    uVar30 = (ulonglong)uVar4;
                                    if (uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003)
                                                      >> 0x3f) * 0x7fffffff < 0xccccccd) {
                                      FUN_14147d320(param_1,sStack_12a * 0x10 + uVar3,
                                                    sStack_12c * 0x10 + uVar4,uStack_144 - 1);
                                    }
                                    lVar29 = lStack_110;
                                    in_stack_fffffffffffffe88 = 0;
                                    FUN_14054eab0(*(undefined8 *)
                                                   (*(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0x116bb8) +
                                                       lStack_120 * 8) + lStack_110 * 8) + -8 +
                                                   (longlong)(short)uStack_144 * 8),uVar3,uVar30,
                                                  bVar9 + uVar22,0);
                                    if ((char)uVar22 == '\0') {
                                      uVar38 = (ulonglong)(short)uVar3;
                                      puVar19 = (uint *)(*(longlong *)
                                                          (*(longlong *)
                                                            (*(longlong *)
                                                              (*(longlong *)(param_1 + 0x116bb8) +
                                                              lStack_120 * 8) + lVar29 * 8) + -8 +
                                                          (longlong)(short)uStack_144 * 8) +
                                                         (longlong)(short)uVar4 * 4 + 0x2a0 +
                                                        uVar38 * 0x40);
                                      *puVar19 = *puVar19 |
                                                 puVar40[uVar38 * 0x10 +
                                                         (longlong)(short)uVar4 + 0xa8] & 0xc0000000
                                      ;
                                      acStackX_20[0] = bVar5;
                                    }
                                    else {
                                      uVar38 = (ulonglong)uVar3;
                                      acStackX_20[0] = bVar5;
                                    }
                                    goto LAB_14147a867;
                                  }
                                  bVar10 = (byte)uVar14 & 1;
                                  bVar9 = bVar10 | 2;
                                  if ((uVar14 & 2) == 0) {
                                    bVar9 = bVar10;
                                  }
                                  bVar10 = bVar9 | 4;
                                  if ((uVar14 & 4) == 0) {
                                    bVar10 = bVar9;
                                  }
                                  uVar22 = (uint)bVar10;
                                  if (bVar10 != 7) goto LAB_14147a986;
                                  if ((uVar14 >> 0x1b & 1) == 0) {
                                    bStackX_10 = FUN_140550e00(lVar24,uVar3,uVar4,bStackX_10,
                                                               in_stack_fffffffffffffe88 &
                                                               0xffffff00);
                                    in_stack_fffffffffffffe88 = 0;
                                    FUN_14054eab0(puVar40,uVar3,uVar4,bStackX_10,0);
                                  }
                                  acStackX_20[0] = '\0' < (char)bStackX_10;
                                  bVar5 = (bool)acStackX_20[0];
LAB_14147a85a:
                                  uVar30 = (ulonglong)uVar4;
                                }
                                uVar38 = (ulonglong)uVar3;
                                goto LAB_14147a867;
                              }
                            }
                            in_stack_fffffffffffffe88 = 0;
                            FUN_14054eab0(puVar40,uVar38 & 0xffff,uVar4,0,0);
                            FUN_1414c8ca0(param_1,uVar3 + (short)puVar40[0x22],
                                          uVar4 + *(short *)((longlong)puVar40 + 0x8a),
                                          (short)puVar40[0x23]);
                          }
                          uVar30 = (ulonglong)(short)uVar3;
                          puVar19 = puVar40 + 0xa8;
                          uVar38 = (ulonglong)(short)uVar4;
                          if ((puVar19[uVar30 * 0x10 + uVar38] & 0x40000000) == 0) {
                            sVar26 = -1;
                            do {
                              sVar32 = -1;
                              lVar29 = (longlong)(short)(uVar4 - 1) << 2;
                              do {
                                if ((sVar26 != 0) || (sVar32 != 0)) {
                                  sVar41 = (short)uVar30;
                                  iVar27 = (int)sVar26 + (int)sVar41;
                                  sVar35 = (short)uVar38;
                                  if ((iVar27 < 0) ||
                                     ((((int)sVar32 + (int)sVar35 < 0 || (0xf < iVar27)) ||
                                      (0xf < (int)sVar32 + (int)sVar35)))) {
                                    sVar21 = sStack_12a;
                                    if (iVar27 < 0) {
                                      sVar21 = sStack_12a + -1;
                                    }
                                    sVar36 = sStack_12c;
                                    if ((int)sVar32 + (int)sVar35 < 0) {
                                      sVar36 = sStack_12c + -1;
                                    }
                                    if (0xf < (int)sVar26 + (int)sVar41) {
                                      sVar21 = sVar21 + 1;
                                    }
                                    if (0xf < (int)sVar32 + (int)sVar35) {
                                      sVar36 = sVar36 + 1;
                                    }
                                    puVar19 = puStack_90;
                                    if (((-1 < sVar21) &&
                                        ((int)sVar21 < *(int *)(param_1 + 0x116be0))) &&
                                       ((-1 < sVar36 &&
                                        (((int)sVar36 < *(int *)(param_1 + 0x116be4) &&
                                         (lVar33 = *(longlong *)
                                                    (lStack_138 +
                                                    *(longlong *)
                                                     (*(longlong *)
                                                       (*(longlong *)(param_1 + 0x116bb8) +
                                                       (longlong)sVar21 * 8) + (longlong)sVar36 * 8)
                                                    ), lVar33 != 0)))))) {
                                      uVar14 = sVar41 + 0x10 + (int)sVar26 & 0x8000000f;
                                      if ((int)uVar14 < 0) {
                                        uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar22 = sVar35 + 0x10 + (int)sVar32 & 0x8000000f;
                                      if ((int)uVar22 < 0) {
                                        uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                                      }
                                      uVar16 = *(uint *)(lVar33 + 0x2a0 +
                                                        ((longlong)(short)uVar14 * 0x10 +
                                                        (longlong)(short)uVar22) * 4);
                                      if ((uVar16 >> 0x15 & 1) == 0) {
                                        bVar10 = (byte)uVar16 & 1;
                                        bVar9 = bVar10 | 2;
                                        if ((uVar16 & 2) == 0) {
                                          bVar9 = bVar10;
                                        }
                                        bVar10 = bVar9 | 4;
                                        if ((uVar16 & 4) == 0) {
                                          bVar10 = bVar9;
                                        }
                                        if (bVar10 != 0) {
                                          puVar40 = (uint *)(lVar33 + 0x2a0 +
                                                            ((longlong)(int)uVar14 * 0x10 +
                                                            (longlong)(int)uVar22) * 4);
                                          *puVar40 = *puVar40 & 0xbfffffff;
                                        }
                                      }
                                      uVar38 = (ulonglong)uVar4;
                                      uVar30 = (ulonglong)uVar3;
                                    }
                                  }
                                  else {
                                    uVar14 = *(uint *)((longlong)puVar19 +
                                                      lVar29 + (longlong)(short)(sVar41 + sVar26) *
                                                               0x40);
                                    if ((uVar14 >> 0x15 & 1) == 0) {
                                      bVar10 = (byte)uVar14 & 1;
                                      bVar9 = bVar10 | 2;
                                      if ((uVar14 & 2) == 0) {
                                        bVar9 = bVar10;
                                      }
                                      bVar10 = bVar9 | 4;
                                      if ((uVar14 & 4) == 0) {
                                        bVar10 = bVar9;
                                      }
                                      if (bVar10 != 0) {
                                        puVar19[(ulonglong)(uint)((int)sVar26 + (int)sVar41) * 0x10
                                                + (ulonglong)(uint)((int)sVar35 + (int)sVar32)] =
                                             puVar19[(ulonglong)(uint)((int)sVar26 + (int)sVar41) *
                                                     0x10 + (ulonglong)
                                                            (uint)((int)sVar35 + (int)sVar32)] &
                                             0xbfffffff;
                                      }
                                    }
                                  }
                                }
                                sVar32 = sVar32 + 1;
                                lVar29 = lVar29 + 4;
                              } while (sVar32 < 2);
                              sVar26 = sVar26 + 1;
                            } while (sVar26 < 2);
                            sVar26 = (short)uVar38;
                            if ((0 < iStack_140) &&
                               (lVar29 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8) +
                                            lStack_110 * 8) + -8 + (longlong)(short)uStack_144 * 8),
                               lVar29 != 0)) {
                              uVar14 = *(uint *)(lVar29 + 0x2a0 +
                                                ((longlong)(short)uVar3 * 0x10 + (longlong)sVar26) *
                                                4);
                              if ((uVar14 >> 0x15 & 1) == 0) {
                                bVar10 = (byte)uVar14 & 1;
                                bVar9 = bVar10 | 2;
                                if ((uVar14 & 2) == 0) {
                                  bVar9 = bVar10;
                                }
                                bVar10 = bVar9 | 4;
                                if ((uVar14 & 4) == 0) {
                                  bVar10 = bVar9;
                                }
                                if (bVar10 != 0) {
                                  *(uint *)(lVar29 + 0x2a0 +
                                           ((longlong)(short)uVar3 * 0x10 + (longlong)sVar26) * 4) =
                                       uVar14 & 0xbfffffff;
                                }
                              }
                            }
                            puVar40 = puStack_98;
                            if (((iStack_140 + 1 < *(int *)(param_1 + 0x116be8)) &&
                                (lVar29 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(param_1 + 0x116bb8) + lStack_120 * 8)
                                             + lStack_110 * 8) + 8 + (longlong)(short)uStack_144 * 8
                                           ), lVar29 != 0)) &&
                               (uVar14 = *(uint *)(lVar29 + 0x2a0 +
                                                  ((longlong)(short)uVar3 * 0x10 + (longlong)sVar26)
                                                  * 4), (uVar14 >> 0x15 & 1) == 0)) {
                              bVar10 = (byte)uVar14 & 1;
                              bVar9 = bVar10 | 2;
                              if ((uVar14 & 2) == 0) {
                                bVar9 = bVar10;
                              }
                              bVar10 = bVar9 | 4;
                              if ((uVar14 & 4) == 0) {
                                bVar10 = bVar9;
                              }
                              if (bVar10 != 0) {
                                *(uint *)(lVar29 + 0x2a0 +
                                         ((longlong)(short)uVar3 * 0x10 + (longlong)sVar26) * 4) =
                                     uVar14 & 0xbfffffff;
                              }
                            }
                          }
                        }
                        bStack_118 = bStack_118 + 1;
                        puVar23 = puVar40 + 0xa8;
                        puVar19 = puStack_68;
                      } while ((char)bStack_118 < '\x10');
                    }
                  }
                  sStack_12c = sStack_12c + 1;
                  iStack_d8 = (int)sStack_12c;
                } while (iStack_d8 < *(int *)(param_1 + 0x116be4));
              }
              sStack_12a = sStack_12a + 1;
              iStack_d4 = (int)sStack_12a;
            } while (iStack_d4 < *(int *)(param_1 + 0x116be0));
          }
          if (((byte)*puVar19 & 6) == 2) {
            *puVar19 = *puVar19 & 0xfffffffe;
          }
        }
        uStack_144 = uStack_144 + 1;
        puVar19 = puVar19 + 1;
        iVar27 = *(int *)(param_1 + 0x116be8);
        iStack_140 = (int)(short)uStack_144;
        puStack_68 = puVar19;
      } while (iStack_140 < iVar27);
    }
    puVar19 = *(uint **)(param_1 + 0x11a600);
    sVar26 = 0;
    if (0 < iVar27) {
      do {
        *puVar19 = *puVar19 & 0xfffffff9;
        sVar26 = sVar26 + 1;
        puVar19 = puVar19 + 1;
      } while ((int)sVar26 < *(int *)(param_1 + 0x116be8));
    }
    func_0x00014147c120(param_1);
    lVar29 = *(longlong *)(param_1 + 0x116ba8) - *(longlong *)(param_1 + 0x116ba0) >> 3;
    if (lVar29 != 0) {
      for (iVar27 = (int)lVar29 / 1000 + 1; 0 < iVar27; iVar27 = iVar27 + -1) {
        iVar28 = *(int *)(param_1 + 0x128220);
        if ((ulonglong)(*(longlong *)(param_1 + 0x116ba8) - *(longlong *)(param_1 + 0x116ba0) >> 3)
            <= (ulonglong)(longlong)iVar28) {
          iVar28 = 0;
          *(undefined4 *)(param_1 + 0x128220) = 0;
        }
        lVar29 = *(longlong *)(*(longlong *)(param_1 + 0x116ba0) + (longlong)iVar28 * 8);
        puVar20 = (ushort *)(lVar29 + 0x1da0);
        lVar33 = 0x10;
        do {
          lVar24 = 0x10;
          do {
            if ((*puVar20 & 0x3c0) != 0) {
              *puVar20 = *puVar20 | 0xfc00;
            }
            puVar20 = puVar20 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        sVar26 = (short)((longlong)(ulonglong)(uint)(*(int *)(lVar29 + 0x10) - *(int *)(lVar29 + 8))
                        >> 3) + -1;
        if (-1 < sVar26) {
          lVar33 = (longlong)sVar26 << 3;
          do {
            sVar32 = (**(code **)**(undefined8 **)(lVar33 + *(longlong *)(lVar29 + 8)))();
            if ((sVar32 != 1) &&
               (cVar11 = (**(code **)(**(longlong **)(lVar33 + *(longlong *)(lVar29 + 8)) + 0x18))()
               , cVar11 != '\0')) {
              plVar2 = *(longlong **)(lVar33 + *(longlong *)(lVar29 + 8));
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x20))(plVar2,1);
              }
              lVar17 = *(longlong *)(lVar29 + 8) + lVar33;
              lVar24 = lVar17 + 8;
              func_0x00014155486a(lVar17,lVar24,*(longlong *)(lVar29 + 0x10) - lVar24);
              *(longlong *)(lVar29 + 0x10) = *(longlong *)(lVar29 + 0x10) + -8;
            }
            lVar33 = lVar33 + -8;
            sVar26 = sVar26 + -1;
          } while (-1 < sVar26);
        }
        *(int *)(param_1 + 0x128220) = *(int *)(param_1 + 0x128220) + 1;
      }
    }
    if (0x100 < *(short *)(param_1 + 0x1281dc)) {
      FUN_14147c090(param_1);
    }
    if (((1 < _DAT_1423b3110) && ((_DAT_1423b3108[1] & 4) != 0)) &&
       ((0 < *(int *)(param_1 + 0x1282a8) && ((**(byte **)(param_1 + 0x1282a0) & 1) != 0)))) {
      sVar26 = *(short *)(param_1 + 0x116be0) + -1;
      if (-1 < sVar26) {
        lVar29 = (longlong)sVar26 << 3;
        do {
          sVar32 = *(short *)(param_1 + 0x116be4) + -1;
          if (-1 < sVar32) {
            lVar33 = (longlong)sVar32 << 3;
            do {
              lVar24 = *(longlong *)
                        (lVar33 + *(longlong *)(*(longlong *)(param_1 + 0x116bd8) + lVar29));
              if ((((lVar24 != 0) && (0 < *(int *)(lVar24 + 0x1850))) &&
                  ((**(byte **)(lVar24 + 0x1848) & 1) != 0)) &&
                 (FUN_140559b60(lVar24), 0 < *(int *)(lVar24 + 0x1850))) {
                **(byte **)(lVar24 + 0x1848) = **(byte **)(lVar24 + 0x1848) & 0xfe;
              }
              lVar33 = lVar33 + -8;
              sVar32 = sVar32 + -1;
            } while (-1 < sVar32);
          }
          lVar29 = lVar29 + -8;
          sVar26 = sVar26 + -1;
        } while (-1 < sVar26);
      }
      if (0 < *(int *)(param_1 + 0x1282a8)) {
        **(byte **)(param_1 + 0x1282a0) = **(byte **)(param_1 + 0x1282a0) & 0xfe;
      }
      cavern_event(param_1);
    }
    FUN_14013d2d0(&lStack_f0);
    FUN_14013d2d0(&lStack_d0);
    FUN_14013d2d0(&pcStack_108);
    FUN_1400681a0(&lStack_b8);
  }
  iVar27 = _Mtx_lock(0x1418beb70);
  if (iVar27 != 0) {
    __Throw_Cpp_error_std__YAXH_Z(5);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (_DAT_1418bebbc == 0x7fffffff) {
    _DAT_1418bebbc = 0x7ffffffe;
    __Throw_Cpp_error_std__YAXH_Z(6);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  _DAT_1426bde48 = _DAT_1426bde48 + -0x10;
  _Mtx_unlock(0x1418beb70);
  return;
}

