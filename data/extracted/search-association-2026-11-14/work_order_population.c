/* Actual Ghidra output; researcher-assigned role. Native entry 14037f330; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void work_order_population(undefined1 *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  short *psVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  int iVar17;
  short *psVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong unaff_RBX;
  undefined8 *puVar22;
  ulonglong uVar23;
  int *unaff_RBP;
  undefined2 *puVar24;
  undefined8 *puVar25;
  undefined8 *****pppppuVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong unaff_R15;
  longlong lVar29;
  undefined8 *****unaff_XMM6_Qa;
  undefined8 uStackX_10;
  int *piStackX_18;
  int *piStackX_20;
  int *piStack_b0;
  longlong *plStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  int *piStack_60;
  undefined8 ****appppuStack_58 [2];
  undefined8 uStack_48;
  
  FUN_140315240();
  uVar5 = DAT_1418c83c8;
  uVar4 = DAT_1418c6380;
  FUN_1403c5630(0x1418c3690);
  DAT_1418c9250 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  DAT_1418c9178 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  DAT_1418c9228 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  DAT_1418c5bf8 = 0;
  DAT_1418c5fa8 = 0;
  _DAT_1418c90fc = 0xffffffff;
  FUN_140380d10(0x1418c8210);
  DAT_1418c6380 = 0;
  if ((((DAT_1418c9608 != '\0') && (_DAT_1418c9614 == 8)) && ((_DAT_1418c9610 & 1) != 0)) &&
     ((_DAT_1418c9610 & 2) == 0)) {
    _DAT_1418c9610 = _DAT_1418c9610 | 2;
  }
  DAT_1418c45e0 = 0;
  DAT_1418c4730 = 0;
  DAT_1418c4200 = 0;
  FUN_140373fc0(0x1418c3fc8);
  DAT_1418c4760 = 0;
  FUN_140370460(0x1418c4b18);
  DAT_1418c54d0 = DAT_1418c54d0 & 0xfe;
  DAT_1418c6288 = 0;
  DAT_1418c6130 = 0;
  DAT_1418c60a8 = 0;
  DAT_1418c61e0 = 0;
  DAT_1418c61f8 = 0;
  DAT_1418c6238 = 0;
  DAT_1418c6258 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  DAT_1418c55e8 = 0;
  DAT_1418c6030 = 0;
  DAT_1418c6060 = 0;
  DAT_1418c5b58 = 0;
  DAT_1418c5700 = 0;
  DAT_1418c4d48 = 0;
  DAT_1418c4f98 = 0;
  DAT_1418c3aa8 = 0;
  DAT_1418c92c8 = 0;
  DAT_1418c92f0 = 0;
  if (_DAT_14266cf78 < 2) {
    _DAT_14266cf78 = 2;
  }
  FUN_14142cbf0(0x1418c4988);
  plVar16 = (longlong *)(param_1 + 8);
  DAT_1418c6380 = uVar4;
  DAT_1418c83c8 = uVar5;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  plStack_a8 = plVar16;
  FUN_140ab0bf0(plVar16);
  puVar21 = *(undefined8 **)(param_1 + 0x10);
  for (puVar22 = (undefined8 *)*plVar16; puVar22 < puVar21; puVar22 = puVar22 + 1) {
    puVar1 = (undefined2 *)*puVar22;
    job_caption(0x142408630,puVar1 + 0x28,*puVar1,puVar1[0x14],puVar1[0x15],puVar1[0x16],
                *(undefined4 *)(puVar1 + 0x18),puVar1 + 4,*(undefined4 *)(puVar1 + 0x1a),
                *(undefined4 *)(puVar1 + 0x1c),*(undefined4 *)(puVar1 + 0x1e),0,
                *(undefined4 *)(puVar1 + 0x20),*(undefined4 *)(puVar1 + 0x22),
                *(undefined4 *)(puVar1 + 0x24));
    puVar24 = puVar1 + 0x38;
    if (puVar24 != puVar1 + 0x28) {
      FUN_140070f00(puVar24);
    }
    func_0x0001405463c0(puVar24);
  }
  lVar12 = *(longlong *)(param_1 + 0x10) - *plVar16 >> 3;
  if (lVar12 != 0) {
    qsort(*plVar16,(longlong)(int)lVar12,8,FUN_14037f2a0);
  }
  iVar10 = *(int *)(param_1 + 4);
  if (iVar10 == -1) {
    iVar10 = 0;
    uStackX_10 = uStackX_10 & 0xffffffff00000000;
    do {
      if ((iVar10 != 0x17) && (iVar10 != 6)) {
        piVar13 = (int *)FUN_1415530e0(0x48);
        piVar13[4] = 0;
        piVar13[5] = 0;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[8] = 0;
        piVar13[9] = 0;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        piVar13[0xc] = 0;
        piVar13[0xd] = 0;
        piVar13[0xe] = 0;
        piVar13[0xf] = 0;
        piVar13[0x10] = 0xf;
        piVar13[0x11] = 0;
        *(undefined1 *)(piVar13 + 10) = 0;
        piVar13[1] = -1;
        piVar13[2] = -1;
        piVar13[1] = iVar10;
        *piVar13 = 0xd;
        puVar22 = (undefined8 *)*plVar16;
        puVar21 = (undefined8 *)plVar16[1];
        piStack_a0 = piVar13;
        piStack_98 = piVar13;
LAB_14037fb34:
        if (puVar22 < puVar21) {
          psVar2 = (short *)*puVar22;
          if (*psVar2 == 0xd1) {
            piStack_b0 = (int *)(psVar2 + 4);
            if (0xf < *(ulonglong *)(psVar2 + 0x10)) {
              piStack_b0 = *(int **)(psVar2 + 4);
            }
            iVar10 = 0;
            lVar29 = 0;
            lVar12 = *(longlong *)(psVar2 + 0xc);
            uVar28 = _DAT_1425196f0 - _DAT_1425196e8 >> 3;
            if (uVar28 != 0) {
              do {
                plVar16 = *(longlong **)(lVar29 * 8 + _DAT_1425196e8);
                plVar20 = plVar16;
                if (0xf < (ulonglong)plVar16[3]) {
                  plVar20 = (longlong *)*plVar16;
                }
                if ((lVar12 == plVar16[2]) &&
                   (iVar11 = func_0x000141554864(piStack_b0,plVar20,lVar12), iVar11 == 0)) {
                  lVar12 = *(longlong *)(lVar29 * 8 + _DAT_1425196e8);
                  if (lVar12 != 0) {
                    iVar10 = (int)(*(longlong *)(lVar12 + 0xc0) - *(longlong *)(lVar12 + 0xb8) >> 2)
                             + -1;
                    if (-1 < iVar10) {
                      lVar29 = (longlong)iVar10;
                      goto LAB_14037fc10;
                    }
                  }
                  break;
                }
                iVar10 = iVar10 + 1;
                lVar29 = lVar29 + 1;
              } while ((ulonglong)(longlong)iVar10 < uVar28);
            }
            iVar10 = (int)uStackX_10;
LAB_14037fe5c:
            puVar22 = puVar22 + 1;
          }
          else {
            FUN_1403153d0(*psVar2,psVar2[0x15],psVar2[0x16],*(undefined4 *)(psVar2 + 0x18),
                          *(undefined4 *)(psVar2 + 0x1e),&piStackX_18,&piStackX_20);
            if (((int)piStackX_18 != 0xd) || ((int)piStackX_20 != iVar10)) goto LAB_14037fe5c;
            piVar14 = (int *)FUN_1415530e0(0x98);
            piVar14[2] = 0;
            piVar14[3] = 0;
            piVar14[4] = 0;
            piVar14[5] = 0;
            piVar14[8] = 0xf;
            piVar14[9] = 0;
            piVar14[6] = 0;
            piVar14[7] = 0;
            *(undefined1 *)(piVar14 + 2) = 0;
            piVar14[0x14] = 0;
            piVar14[0x15] = 0;
            piVar14[0x16] = 0;
            piVar14[0x17] = 0;
            piVar14[0x18] = 0;
            piVar14[0x19] = 0;
            piVar14[0x1a] = 0xf;
            piVar14[0x1b] = 0;
            *(undefined1 *)(piVar14 + 0x14) = 0;
            piVar14[0x1c] = 0;
            piVar14[0x1d] = 0;
            piVar14[0x1e] = 0;
            piVar14[0x1f] = 0;
            piVar14[0x20] = 0;
            piVar14[0x21] = 0;
            piVar14[0x22] = 0xf;
            piVar14[0x23] = 0;
            *(undefined1 *)(piVar14 + 0x1c) = 0;
            *(short *)piVar14 = -1;
            piVar14[10] = -1;
            *(short *)(piVar14 + 0xb) = -1;
            piVar14[0xc] = -1;
            piVar14[0xd] = 0;
            piVar14[0xe] = -1;
            piVar14[0xf] = 0;
            piVar14[0x10] = -1;
            piVar14[0x11] = -1;
            piVar14[0x12] = -1;
            piVar14[0x13] = 0;
            *(undefined1 *)(piVar14 + 0x24) = 1;
            piStack_b0 = piVar14;
            piStack_90 = piVar14;
            FUN_140314680(piVar14,*puVar22);
            puVar25 = *(undefined8 **)(piVar13 + 6);
            if (puVar25 == *(undefined8 **)(piVar13 + 8)) {
              FUN_1400bc360(piVar13 + 4,puVar25,&piStack_b0);
              puVar22 = puVar22 + 1;
              iVar10 = (int)uStackX_10;
            }
            else {
              *puVar25 = piVar14;
              *(longlong *)(piVar13 + 6) = *(longlong *)(piVar13 + 6) + 8;
              puVar22 = puVar22 + 1;
              iVar10 = (int)uStackX_10;
            }
          }
          goto LAB_14037fb34;
        }
        puVar22 = *(undefined8 **)(param_1 + 0x28);
        if (puVar22 == *(undefined8 **)(param_1 + 0x30)) {
          FUN_140072200(param_1 + 0x20,puVar22,&piStack_a0);
          plVar16 = plStack_a8;
        }
        else {
          *puVar22 = piStack_98;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
          plVar16 = plStack_a8;
        }
      }
      iVar10 = iVar10 + 1;
      uStackX_10 = CONCAT44(uStackX_10._4_4_,iVar10);
    } while (iVar10 < 0x19);
    iVar10 = 0;
    uStackX_10 = (ulonglong)uStackX_10._4_4_ << 0x20;
    do {
      if (3 < iVar10 - 4U) {
        piVar13 = (int *)FUN_1415530e0(0x48);
        piVar13[4] = 0;
        piVar13[5] = 0;
        piVar13[6] = 0;
        piVar13[7] = 0;
        piVar13[8] = 0;
        piVar13[9] = 0;
        piVar13[10] = 0;
        piVar13[0xb] = 0;
        piVar13[0xc] = 0;
        piVar13[0xd] = 0;
        piVar13[0xe] = 0;
        piVar13[0xf] = 0;
        piVar13[0x10] = 0xf;
        piVar13[0x11] = 0;
        *(undefined1 *)(piVar13 + 10) = 0;
        piVar13[1] = -1;
        piVar13[2] = -1;
        piVar13[1] = iVar10;
        *piVar13 = 5;
        puVar22 = (undefined8 *)*plVar16;
        puVar21 = (undefined8 *)plVar16[1];
        piStack_a0 = piVar13;
        uStack_78 = piVar13;
LAB_14037ff30:
        if (puVar22 < puVar21) {
          psVar2 = (short *)*puVar22;
          if (*psVar2 == 0xd1) {
            piStack_b0 = (int *)(psVar2 + 4);
            if (0xf < *(ulonglong *)(psVar2 + 0x10)) {
              piStack_b0 = *(int **)(psVar2 + 4);
            }
            iVar10 = 0;
            lVar29 = 0;
            lVar12 = *(longlong *)(psVar2 + 0xc);
            uVar28 = _DAT_1425196f0 - _DAT_1425196e8 >> 3;
            if (uVar28 != 0) {
              do {
                plVar16 = *(longlong **)(lVar29 * 8 + _DAT_1425196e8);
                plVar20 = plVar16;
                if (0xf < (ulonglong)plVar16[3]) {
                  plVar20 = (longlong *)*plVar16;
                }
                if ((lVar12 == plVar16[2]) &&
                   (iVar11 = func_0x000141554864(piStack_b0,plVar20,lVar12), iVar11 == 0)) {
                  lVar12 = *(longlong *)(lVar29 * 8 + _DAT_1425196e8);
                  if (lVar12 != 0) {
                    iVar10 = (int)(*(longlong *)(lVar12 + 0xc0) - *(longlong *)(lVar12 + 0xb8) >> 2)
                             + -1;
                    if (-1 < iVar10) {
                      lVar29 = (longlong)iVar10;
                      goto LAB_140380010;
                    }
                  }
                  break;
                }
                iVar10 = iVar10 + 1;
                lVar29 = lVar29 + 1;
              } while ((ulonglong)(longlong)iVar10 < uVar28);
            }
            iVar10 = (int)uStackX_10;
LAB_14038025c:
            puVar22 = puVar22 + 1;
          }
          else {
            FUN_1403153d0(*psVar2,psVar2[0x15],psVar2[0x16],*(undefined4 *)(psVar2 + 0x18),
                          *(undefined4 *)(psVar2 + 0x1e),&piStackX_18,&piStackX_20);
            if (((int)piStackX_18 != 5) || ((int)piStackX_20 != iVar10)) goto LAB_14038025c;
            piVar14 = (int *)FUN_1415530e0(0x98);
            piVar14[2] = 0;
            piVar14[3] = 0;
            piVar14[4] = 0;
            piVar14[5] = 0;
            piVar14[8] = 0xf;
            piVar14[9] = 0;
            piVar14[6] = 0;
            piVar14[7] = 0;
            *(undefined1 *)(piVar14 + 2) = 0;
            piVar14[0x14] = 0;
            piVar14[0x15] = 0;
            piVar14[0x16] = 0;
            piVar14[0x17] = 0;
            piVar14[0x18] = 0;
            piVar14[0x19] = 0;
            piVar14[0x1a] = 0xf;
            piVar14[0x1b] = 0;
            *(undefined1 *)(piVar14 + 0x14) = 0;
            piVar14[0x1c] = 0;
            piVar14[0x1d] = 0;
            piVar14[0x1e] = 0;
            piVar14[0x1f] = 0;
            piVar14[0x20] = 0;
            piVar14[0x21] = 0;
            piVar14[0x22] = 0xf;
            piVar14[0x23] = 0;
            *(undefined1 *)(piVar14 + 0x1c) = 0;
            *(short *)piVar14 = -1;
            piVar14[10] = -1;
            *(short *)(piVar14 + 0xb) = -1;
            piVar14[0xc] = -1;
            piVar14[0xd] = 0;
            piVar14[0xe] = -1;
            piVar14[0xf] = 0;
            piVar14[0x10] = -1;
            piVar14[0x11] = -1;
            piVar14[0x12] = -1;
            piVar14[0x13] = 0;
            *(undefined1 *)(piVar14 + 0x24) = 1;
            piStack_98 = piVar14;
            piStack_90 = piVar14;
            FUN_140314680(piVar14,*puVar22);
            puVar25 = *(undefined8 **)(piVar13 + 6);
            if (puVar25 == *(undefined8 **)(piVar13 + 8)) {
              FUN_1400bc360(piVar13 + 4,puVar25,&piStack_98);
              puVar22 = puVar22 + 1;
              iVar10 = (int)uStackX_10;
            }
            else {
              *puVar25 = piVar14;
              *(longlong *)(piVar13 + 6) = *(longlong *)(piVar13 + 6) + 8;
              puVar22 = puVar22 + 1;
              iVar10 = (int)uStackX_10;
            }
          }
          goto LAB_14037ff30;
        }
        puVar22 = *(undefined8 **)(param_1 + 0x28);
        if (puVar22 == *(undefined8 **)(param_1 + 0x30)) {
          FUN_140072200(param_1 + 0x20,puVar22,&piStack_a0);
          plVar16 = plStack_a8;
        }
        else {
          *puVar22 = uStack_78;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
          plVar16 = plStack_a8;
        }
      }
      iVar10 = iVar10 + 1;
      uStackX_10 = CONCAT44(uStackX_10._4_4_,iVar10);
    } while (iVar10 < 8);
    piStackX_20 = *(int **)(*(longlong *)(_DAT_1423bc668 + 8) + 0x3cb8);
    piVar13 = *(int **)(*(longlong *)(_DAT_1423bc668 + 8) + 0x3cc0);
    lVar12 = _DAT_142519718;
    appppuStack_58[0] = unaff_XMM6_Qa;
LAB_1403802cc:
    for (; piStackX_20 < piVar13; piStackX_20 = piStackX_20 + 1) {
      uVar28 = _DAT_142519720 - lVar12 >> 3;
      uVar27 = (uint)uVar28;
      if (uVar27 == 0) {
        iVar11 = -1;
        iVar10 = -1;
      }
      else {
        iVar10 = 0;
        while (0x40 < (int)uVar27) {
          uVar27 = (uint)(uVar28 >> 1) & 0x7fffffff;
          iVar11 = uVar27 + iVar10;
          if (*piStackX_20 < *(int *)(*(longlong *)(lVar12 + (longlong)iVar11 * 8) + 0x28)) {
            iVar11 = iVar10;
          }
          uVar27 = (int)uVar28 - uVar27;
          uVar28 = (ulonglong)uVar27;
          iVar10 = iVar11;
        }
        iVar11 = iVar10 + uVar27;
      }
      if ((iVar11 != -1) && (iVar10 < iVar11)) {
        lVar29 = (longlong)iVar10;
        do {
          if (*piStackX_20 == *(int *)(*(longlong *)(lVar12 + lVar29 * 8) + 0x28)) {
            uStack_68 = CONCAT44(uStack_68._4_4_,iVar10);
            uStack_88 = 0xffffffff;
            uStack_80 = 0;
            piVar14 = *(int **)(lVar12 + (longlong)iVar10 * 8);
            piStack_60 = piVar14;
            if ((piVar14 == (int *)0x0) || ((piVar14[0x14] != 0xd && (piVar14[0x14] != 5))))
            goto LAB_140380368;
            piVar15 = (int *)FUN_1415530e0(0x48);
            piVar6 = piStack_60;
            piVar15[4] = 0;
            piVar15[5] = 0;
            piVar15[6] = 0;
            piVar15[7] = 0;
            piVar15[8] = 0;
            piVar15[9] = 0;
            piVar15[10] = 0;
            piVar15[0xb] = 0;
            piVar15[0xc] = 0;
            piVar15[0xd] = 0;
            piVar15[0xe] = 0;
            piVar15[0xf] = 0;
            piVar15[0x10] = 0xf;
            piVar15[0x11] = 0;
            *(undefined1 *)(piVar15 + 10) = 0;
            piVar15[0] = -1;
            piVar15[1] = -1;
            piVar15[2] = -1;
            *piVar15 = piVar14[0x14];
            piVar15[1] = piVar14[0x15];
            piVar15[2] = piVar14[10];
            puVar22 = (undefined8 *)*plVar16;
            puVar21 = *(undefined8 **)(param_1 + 0x10);
            piStack_b0 = piVar14;
            piStack_a0 = piVar15;
            piStack_90 = piVar15;
            goto LAB_140380425;
          }
          iVar10 = iVar10 + 1;
          lVar29 = lVar29 + 1;
        } while (lVar29 < iVar11);
      }
      uStack_78 = (int *)CONCAT44(uStack_84,0xffffffff);
      uStack_70 = 0;
      uStack_6c = 0;
LAB_140380368:
      uStack_80 = 0;
      uStack_88 = 0xffffffff;
    }
    plVar20 = (longlong *)(param_1 + 0x20);
    puVar21 = *(undefined8 **)(param_1 + 0x28);
    for (puVar22 = *(undefined8 **)(param_1 + 0x20); puVar22 < puVar21; puVar22 = puVar22 + 1) {
      puVar1 = (undefined2 *)*puVar22;
      FUN_140566800(puVar1 + 0x14,*puVar1,puVar1[2],_DAT_1423b5afc,*(undefined4 *)(puVar1 + 4));
    }
    lVar12 = *(longlong *)(param_1 + 0x28) - *plVar20 >> 3;
    if (lVar12 != 0) {
      qsort(*plVar20,(longlong)(int)lVar12,8,FUN_14037f210);
    }
    piVar14 = (int *)FUN_1415530e0(0x48);
    piVar13 = piVar14 + 10;
    piVar14[4] = 0;
    piVar14[5] = 0;
    piVar14[6] = 0;
    piVar14[7] = 0;
    piVar14[8] = 0;
    piVar14[9] = 0;
    piVar13[0] = 0;
    piVar13[1] = 0;
    piVar14[0xc] = 0;
    piVar14[0xd] = 0;
    piVar14[0xe] = 0;
    piVar14[0xf] = 0;
    piVar14[0x10] = 0xf;
    piVar14[0x11] = 0;
    *(undefined1 *)piVar13 = 0;
    piVar14[0] = -1;
    piVar14[1] = -1;
    piVar14[2] = -1;
    piStackX_18 = piVar14;
    piStack_a0 = piVar14;
    FUN_140070f00(piVar13,&UNK_141645ea0,9);
    *piVar14 = -1;
    lVar29 = *(longlong *)(piVar14 + 6);
    lVar12 = *(longlong *)(piVar14 + 4);
    uVar23 = (ulonglong)(int)(plVar16[1] - *plVar16 >> 3);
    uVar28 = lVar29 - lVar12 >> 3;
    if (uVar23 < uVar28) {
      lVar12 = lVar12 + uVar23 * 8;
LAB_1403807c0:
      *(longlong *)(piVar14 + 6) = lVar12;
    }
    else if (uVar28 < uVar23) {
      if (uVar23 <= (ulonglong)(*(longlong *)(piVar14 + 8) - lVar12 >> 3)) {
        lVar12 = (uVar23 - uVar28) * 8;
        func_0x000141554566(lVar29,0,lVar12);
        lVar12 = lVar29 + lVar12;
        goto LAB_1403807c0;
      }
      FUN_140072110(piVar14 + 4,uVar23);
    }
    puVar21 = *(undefined8 **)(piVar14 + 6);
    puVar25 = (undefined8 *)*plVar16;
    for (puVar22 = *(undefined8 **)(piVar14 + 4); puVar22 < puVar21; puVar22 = puVar22 + 1) {
      piStackX_18 = (int *)FUN_1415530e0();
      piStackX_18[2] = 0;
      piStackX_18[3] = 0;
      piStackX_18[4] = 0;
      piStackX_18[5] = 0;
      piStackX_18[6] = 0;
      piStackX_18[7] = 0;
      piStackX_18[8] = 0xf;
      piStackX_18[9] = 0;
      *(undefined1 *)(piStackX_18 + 2) = 0;
      piStackX_18[0x14] = 0;
      piStackX_18[0x15] = 0;
      piStackX_18[0x16] = 0;
      piStackX_18[0x17] = 0;
      piStackX_18[0x18] = 0;
      piStackX_18[0x19] = 0;
      piStackX_18[0x1a] = 0xf;
      piStackX_18[0x1b] = 0;
      *(undefined1 *)(piStackX_18 + 0x14) = 0;
      piStackX_18[0x1c] = 0;
      piStackX_18[0x1d] = 0;
      piStackX_18[0x1e] = 0;
      piStackX_18[0x1f] = 0;
      piStackX_18[0x20] = 0;
      piStackX_18[0x21] = 0;
      piStackX_18[0x22] = 0xf;
      piStackX_18[0x23] = 0;
      *(undefined1 *)(piStackX_18 + 0x1c) = 0;
      piStackX_18[0xd] = 0;
      piStackX_18[0xf] = 0;
      piStackX_18[0x13] = 0;
      *(short *)piStackX_18 = -1;
      piStackX_18[10] = -1;
      *(short *)(piStackX_18 + 0xb) = -1;
      piStackX_18[0xc] = -1;
      piStackX_18[0xe] = -1;
      piStackX_18[0x10] = -1;
      piStackX_18[0x11] = -1;
      piStackX_18[0x12] = -1;
      *(undefined1 *)(piStackX_18 + 0x24) = 1;
      *puVar22 = piStackX_18;
      FUN_140314680(piStackX_18,*puVar25);
      puVar25 = puVar25 + 1;
    }
    puVar22 = *(undefined8 **)(param_1 + 0x28);
    puVar21 = (undefined8 *)*plVar20;
    if (((longlong)puVar22 - (longlong)puVar21 & 0xfffffffffffffff8U) == 0) {
      puVar21 = puVar22;
      if (puVar22 == *(undefined8 **)(param_1 + 0x30)) {
LAB_1403808e5:
        FUN_140072200(plVar20,puVar21,&piStack_a0);
      }
      else {
        *puVar22 = piVar14;
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      }
    }
    else {
      if (puVar22 == *(undefined8 **)(param_1 + 0x30)) goto LAB_1403808e5;
      if (puVar21 == puVar22) {
        *puVar22 = piVar14;
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
      }
      else {
        *puVar22 = puVar22[-1];
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
        func_0x00014155486a(-(-8 - (longlong)puVar21),puVar21);
        *puVar21 = piVar14;
      }
    }
    iVar10 = (int)(*(longlong *)(param_1 + 0x28) - *plVar20 >> 3) + -1;
    if (-1 < iVar10) {
      lVar12 = (longlong)iVar10 * 8;
      lVar29 = lVar12;
      do {
        lVar3 = *(longlong *)(lVar29 + *plVar20);
        if ((*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x10) & 0xfffffffffffffff8U) == 0)
        {
          if (lVar3 != 0) {
            FUN_140315320();
          }
          lVar3 = *plVar20 + lVar12 + 8;
          func_0x00014155486a(*plVar20 + lVar12,lVar3,*(longlong *)(param_1 + 0x28) - lVar3);
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
        }
        lVar12 = lVar12 + -8;
        lVar29 = lVar29 + -8;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
    }
    goto LAB_140380969;
  }
  lVar12 = _DAT_142410398 - _DAT_142410390 >> 3;
  if (lVar12 != 0) {
    iVar11 = 0;
    iVar9 = (int)lVar12 + -1;
    if (-1 < iVar9) {
      do {
        iVar17 = iVar11 + iVar9 >> 1;
        plVar20 = *(longlong **)(_DAT_142410390 + (longlong)iVar17 * 8);
        if ((int)plVar20[10] == iVar10) goto LAB_14037f678;
        iVar7 = iVar17 + -1;
        if ((int)plVar20[10] < iVar10) {
          iVar7 = iVar9;
          iVar11 = iVar17 + 1;
        }
        iVar9 = iVar7;
      } while (iVar11 <= iVar9);
    }
    plVar20 = (longlong *)0x0;
LAB_14037f678:
    if (plVar20 != (longlong *)0x0) {
      piVar13 = (int *)FUN_1415530e0(0x48);
      piVar13[4] = 0;
      piVar13[5] = 0;
      piVar13[6] = 0;
      piVar13[7] = 0;
      piVar13[8] = 0;
      piVar13[9] = 0;
      piVar13[10] = 0;
      piVar13[0xb] = 0;
      piVar13[0xc] = 0;
      piVar13[0xd] = 0;
      piVar13[0xe] = 0;
      piVar13[0xf] = 0;
      piVar13[0x10] = 0xf;
      piVar13[0x11] = 0;
      *(undefined1 *)(piVar13 + 10) = 0;
      piVar13[0] = -1;
      piVar13[1] = -1;
      piVar13[2] = -1;
      piStackX_20 = piVar13;
      plStack_a8 = (longlong *)(piVar13 + 4);
      piStack_a0 = piVar13;
      (**(code **)(*plVar20 + 0x188))(plVar20);
      iVar10 = (**(code **)(*plVar20 + 0xd0))(plVar20);
      *piVar13 = iVar10;
      sVar8 = (**(code **)(*plVar20 + 0xd8))(plVar20);
      piVar13[1] = (int)sVar8;
      iVar10 = (**(code **)*plVar20)(plVar20);
      piVar13[2] = iVar10;
      puVar22 = (undefined8 *)*plVar16;
      puVar21 = *(undefined8 **)(param_1 + 0x10);
      plVar16 = (longlong *)(piVar13 + 4);
LAB_14037f732:
      if (puVar21 <= puVar22) goto LAB_14037fa7d;
      psVar2 = (short *)*puVar22;
      if (*psVar2 == 0xd1) {
        psVar18 = psVar2 + 4;
        if (0xf < *(ulonglong *)(psVar2 + 0x10)) {
          psVar18 = *(short **)(psVar2 + 4);
        }
        iVar10 = 0;
        lVar29 = 0;
        lVar12 = *(longlong *)(psVar2 + 0xc);
        uVar28 = _DAT_1425196f0 - _DAT_1425196e8 >> 3;
        if (uVar28 != 0) {
          do {
            plVar20 = *(longlong **)(_DAT_1425196e8 + lVar29 * 8);
            plVar16 = plVar20;
            if (0xf < (ulonglong)plVar20[3]) {
              plVar16 = (longlong *)*plVar20;
            }
            if ((lVar12 == plVar20[2]) &&
               (iVar11 = func_0x000141554864(psVar18,plVar16), piVar13 = piStackX_20, iVar11 == 0))
            {
              plVar16 = plStack_a8;
              if (plVar20 != (longlong *)0x0) {
                iVar10 = (int)(plVar20[0x18] - plVar20[0x17] >> 2) + -1;
                if (-1 < iVar10) {
                  lVar12 = (longlong)iVar10;
                  goto LAB_14037f803;
                }
              }
              break;
            }
            iVar10 = iVar10 + 1;
            lVar29 = lVar29 + 1;
            piVar13 = piStackX_20;
            plVar16 = plStack_a8;
          } while ((ulonglong)(longlong)iVar10 < uVar28);
          goto LAB_14037f843;
        }
        puVar22 = puVar22 + 1;
        piVar13 = piStackX_20;
        plVar16 = plStack_a8;
        goto LAB_14037f732;
      }
      if (piVar13[2] != -1) goto LAB_14037f843;
      FUN_1403153d0(*psVar2,psVar2[0x15],psVar2[0x16],*(undefined4 *)(psVar2 + 0x18),
                    *(undefined4 *)(psVar2 + 0x1e),&uStackX_10,&piStackX_18);
      iVar10 = *piVar13;
      iVar11 = piVar13[1];
      if (iVar10 == 0xd) {
        if (iVar11 == 6) {
          iVar11 = 5;
        }
      }
      else if (iVar10 == 5) {
        if (iVar11 == 4) {
          iVar11 = 1;
        }
        else if (iVar11 == 5) {
          iVar11 = 2;
        }
        else if (iVar11 == 6) {
          iVar11 = 3;
        }
      }
      if (((int)uStackX_10 == iVar10) && ((int)piStackX_18 == iVar11)) {
        piVar14 = (int *)FUN_1415530e0(0x98);
        piVar14[2] = 0;
        piVar14[3] = 0;
        piVar14[4] = 0;
        piVar14[5] = 0;
        piVar14[8] = 0xf;
        piVar14[9] = 0;
        piVar14[6] = 0;
        piVar14[7] = 0;
        *(undefined1 *)(piVar14 + 2) = 0;
        piVar14[0x14] = 0;
        piVar14[0x15] = 0;
        piVar14[0x16] = 0;
        piVar14[0x17] = 0;
        piVar14[0x18] = 0;
        piVar14[0x19] = 0;
        piVar14[0x1a] = 0xf;
        piVar14[0x1b] = 0;
        *(undefined1 *)(piVar14 + 0x14) = 0;
        piVar14[0x1c] = 0;
        piVar14[0x1d] = 0;
        piVar14[0x1e] = 0;
        piVar14[0x1f] = 0;
        piVar14[0x20] = 0;
        piVar14[0x21] = 0;
        piVar14[0x22] = 0xf;
        piVar14[0x23] = 0;
        *(undefined1 *)(piVar14 + 0x1c) = 0;
        *(short *)piVar14 = -1;
        piVar14[10] = -1;
        *(short *)(piVar14 + 0xb) = -1;
        piVar14[0xc] = -1;
        piVar14[0xd] = 0;
        piVar14[0xe] = -1;
        piVar14[0xf] = 0;
        piVar14[0x10] = -1;
        piVar14[0x11] = -1;
        piVar14[0x12] = -1;
        piVar14[0x13] = 0;
        *(undefined1 *)(piVar14 + 0x24) = 1;
        piStack_b0 = piVar14;
        piStack_90 = piVar14;
        FUN_140314680(piVar14,*puVar22);
LAB_14037f8f5:
        if ((undefined8 *)plVar16[1] == (undefined8 *)plVar16[2]) {
          FUN_1400bc360(plVar16);
          puVar22 = puVar22 + 1;
        }
        else {
          *(undefined8 *)plVar16[1] = piVar14;
          plVar16[1] = plVar16[1] + 8;
          puVar22 = puVar22 + 1;
        }
        goto LAB_14037f732;
      }
      goto LAB_14037f843;
    }
  }
LAB_140380969:
  uVar28 = _DAT_1418be040 ^ (ulonglong)&uStack_88;
  iVar10 = *(int *)(param_1 + 0x40);
  if ((-1 < iVar10) &&
     (iVar10 < (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8);
      plVar20 = *(longlong **)(lVar12 + 0x18);
      for (plVar16 = *(longlong **)(lVar12 + 0x10); plVar16 < plVar20; plVar16 = plVar16 + 1) {
        *(undefined1 *)(*plVar16 + 0x90) = 1;
      }
    }
    else {
      piStack_90 = (int *)0x1403cc2ec;
      uStackX_10 = unaff_RBX;
      FUN_140070c00(appppuStack_58,param_1 + 0x50);
      piStack_90 = (int *)0x1403cc2f6;
      func_0x0001405463c0(appppuStack_58);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 8)
      ;
      plVar20 = *(longlong **)(lVar12 + 0x18);
      piStackX_18 = unaff_RBP;
      for (plVar16 = *(longlong **)(lVar12 + 0x10); plVar16 < plVar20; plVar16 = plVar16 + 1) {
        lVar12 = *plVar16;
        pppppuVar26 = appppuStack_58;
        if (0xf < unaff_R15) {
          pppppuVar26 = (undefined8 *****)appppuStack_58[0];
        }
        plVar19 = (longlong *)(lVar12 + 0x70);
        if (0xf < *(ulonglong *)(lVar12 + 0x88)) {
          plVar19 = (longlong *)*plVar19;
        }
        uStack_68 = uStack_48;
        piStack_90 = (int *)0x1403cc355;
        lVar29 = FUN_1400e2fc0(plVar19,*(undefined8 *)(lVar12 + 0x80),0,pppppuVar26);
        *(bool *)(lVar12 + 0x90) = lVar29 != -1;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      piStack_90 = (int *)0x1403cc379;
      FUN_140070e80(appppuStack_58);
    }
  }
  piStack_90 = (int *)0x1403cc3aa;
  FUN_1415530b0(uVar28 ^ (ulonglong)&uStack_88);
  return;
  while (lVar29 = lVar29 + -1, -1 < lVar29) {
LAB_14037fc10:
    if (((*(int *)(*(longlong *)(lVar12 + 0xb8) + lVar29 * 4) == 0xd) &&
        (*(int *)(*(longlong *)(lVar12 + 0xd0) + lVar29 * 4) == (int)uStackX_10)) &&
       (*(int *)(*(longlong *)(lVar12 + 0xe8) + lVar29 * 4) == -1)) {
      piVar14 = (int *)FUN_1415530e0(0x98);
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14[4] = 0;
      piVar14[5] = 0;
      piVar14[6] = 0;
      piVar14[7] = 0;
      piVar14[8] = 0xf;
      piVar14[9] = 0;
      *(undefined1 *)(piVar14 + 2) = 0;
      piVar14[0x14] = 0;
      piVar14[0x15] = 0;
      piVar14[0x16] = 0;
      piVar14[0x17] = 0;
      piVar14[0x18] = 0;
      piVar14[0x19] = 0;
      piVar14[0x1a] = 0xf;
      piVar14[0x1b] = 0;
      *(undefined1 *)(piVar14 + 0x14) = 0;
      piVar14[0x1c] = 0;
      piVar14[0x1d] = 0;
      piVar14[0x1e] = 0;
      piVar14[0x1f] = 0;
      piVar14[0x20] = 0;
      piVar14[0x21] = 0;
      piVar14[0x22] = 0xf;
      piVar14[0x23] = 0;
      *(undefined1 *)(piVar14 + 0x1c) = 0;
      *(short *)piVar14 = -1;
      piVar14[10] = -1;
      *(short *)(piVar14 + 0xb) = -1;
      piVar14[0xc] = -1;
      piVar14[0xd] = 0;
      piVar14[0xe] = -1;
      piVar14[0xf] = 0;
      piVar14[0x10] = -1;
      piVar14[0x11] = -1;
      piVar14[0x12] = -1;
      piVar14[0x13] = 0;
      *(undefined1 *)(piVar14 + 0x24) = 1;
      piStack_b0 = piVar14;
      piStack_90 = piVar14;
      FUN_140314680(piVar14,*puVar22);
      puVar25 = *(undefined8 **)(piVar13 + 6);
      if (puVar25 == *(undefined8 **)(piVar13 + 8)) {
        FUN_1400bc360(piVar13 + 4,puVar25,&piStack_b0);
        puVar22 = puVar22 + 1;
        iVar10 = (int)uStackX_10;
      }
      else {
        *puVar25 = piVar14;
        *(longlong *)(piVar13 + 6) = *(longlong *)(piVar13 + 6) + 8;
        puVar22 = puVar22 + 1;
        iVar10 = (int)uStackX_10;
      }
      goto LAB_14037fb34;
    }
  }
  puVar22 = puVar22 + 1;
  iVar10 = (int)uStackX_10;
  goto LAB_14037fb34;
  while (lVar29 = lVar29 + -1, -1 < lVar29) {
LAB_140380010:
    if (((*(int *)(*(longlong *)(lVar12 + 0xb8) + lVar29 * 4) == 5) &&
        (*(int *)(*(longlong *)(lVar12 + 0xd0) + lVar29 * 4) == (int)uStackX_10)) &&
       (*(int *)(*(longlong *)(lVar12 + 0xe8) + lVar29 * 4) == -1)) {
      piVar14 = (int *)FUN_1415530e0(0x98);
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14[4] = 0;
      piVar14[5] = 0;
      piVar14[6] = 0;
      piVar14[7] = 0;
      piVar14[8] = 0xf;
      piVar14[9] = 0;
      *(undefined1 *)(piVar14 + 2) = 0;
      piVar14[0x14] = 0;
      piVar14[0x15] = 0;
      piVar14[0x16] = 0;
      piVar14[0x17] = 0;
      piVar14[0x18] = 0;
      piVar14[0x19] = 0;
      piVar14[0x1a] = 0xf;
      piVar14[0x1b] = 0;
      *(undefined1 *)(piVar14 + 0x14) = 0;
      piVar14[0x1c] = 0;
      piVar14[0x1d] = 0;
      piVar14[0x1e] = 0;
      piVar14[0x1f] = 0;
      piVar14[0x20] = 0;
      piVar14[0x21] = 0;
      piVar14[0x22] = 0xf;
      piVar14[0x23] = 0;
      *(undefined1 *)(piVar14 + 0x1c) = 0;
      *(short *)piVar14 = -1;
      piVar14[10] = -1;
      *(short *)(piVar14 + 0xb) = -1;
      piVar14[0xc] = -1;
      piVar14[0xd] = 0;
      piVar14[0xe] = -1;
      piVar14[0xf] = 0;
      piVar14[0x10] = -1;
      piVar14[0x11] = -1;
      piVar14[0x12] = -1;
      piVar14[0x13] = 0;
      *(undefined1 *)(piVar14 + 0x24) = 1;
      piStack_98 = piVar14;
      piStack_90 = piVar14;
      FUN_140314680(piVar14,*puVar22);
      puVar25 = *(undefined8 **)(piVar13 + 6);
      if (puVar25 == *(undefined8 **)(piVar13 + 8)) {
        FUN_1400bc360(piVar13 + 4,puVar25,&piStack_98);
        puVar22 = puVar22 + 1;
        iVar10 = (int)uStackX_10;
      }
      else {
        *puVar25 = piVar14;
        *(longlong *)(piVar13 + 6) = *(longlong *)(piVar13 + 6) + 8;
        puVar22 = puVar22 + 1;
        iVar10 = (int)uStackX_10;
      }
      goto LAB_14037ff30;
    }
  }
  puVar22 = puVar22 + 1;
  iVar10 = (int)uStackX_10;
  goto LAB_14037ff30;
LAB_140380425:
  piVar14 = piStackX_20;
  if (puVar22 < puVar21) {
    psVar2 = (short *)*puVar22;
    if (*psVar2 == 0xd1) {
      piStackX_18 = (int *)(psVar2 + 4);
      if (0xf < *(ulonglong *)(psVar2 + 0x10)) {
        piStackX_18 = *(int **)(psVar2 + 4);
      }
      iVar10 = 0;
      lVar12 = 0;
      piVar14 = *(int **)(psVar2 + 0xc);
      uVar28 = _DAT_1425196f0 - _DAT_1425196e8 >> 3;
      uStack_78 = piVar14;
      if (uVar28 != 0) {
        do {
          piStack_98 = (int *)(lVar12 * 8);
          plVar16 = *(longlong **)((longlong)piStack_98 + _DAT_1425196e8);
          plVar20 = plVar16;
          if (0xf < (ulonglong)plVar16[3]) {
            plVar20 = (longlong *)*plVar16;
          }
          if ((piVar14 == (int *)plVar16[2]) &&
             (iVar11 = func_0x000141554864(piStackX_18,plVar20,piVar14), piVar14 = uStack_78,
             iVar11 == 0)) {
            lVar12 = *(longlong *)(_DAT_1425196e8 + (longlong)piStack_98);
            if (lVar12 != 0) {
              iVar10 = (int)(*(longlong *)(lVar12 + 0xc0) - *(longlong *)(lVar12 + 0xb8) >> 2) + -1;
              if (-1 < iVar10) {
                lVar29 = (longlong)iVar10;
                goto LAB_140380512;
              }
            }
            break;
          }
          iVar10 = iVar10 + 1;
          lVar12 = lVar12 + 1;
        } while ((ulonglong)(longlong)iVar10 < uVar28);
      }
    }
LAB_140380626:
    puVar22 = puVar22 + 1;
    goto LAB_140380425;
  }
  puVar22 = *(undefined8 **)(param_1 + 0x28);
  if (puVar22 == *(undefined8 **)(param_1 + 0x30)) {
    FUN_140072200(param_1 + 0x20,puVar22,&piStack_a0);
    piStackX_20 = piVar14 + 1;
    lVar12 = _DAT_142519718;
    plVar16 = plStack_a8;
  }
  else {
    *puVar22 = piStack_90;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    piStackX_20 = piStackX_20 + 1;
    lVar12 = _DAT_142519718;
    plVar16 = plStack_a8;
  }
  goto LAB_1403802cc;
  while (lVar29 = lVar29 + -1, -1 < lVar29) {
LAB_140380512:
    if (((*(int *)(*(longlong *)(lVar12 + 0xb8) + lVar29 * 4) == piVar6[0x14]) &&
        (*(int *)(*(longlong *)(lVar12 + 0xd0) + lVar29 * 4) == piStack_b0[0x15])) &&
       (*(int *)(*(longlong *)(lVar12 + 0xe8) + lVar29 * 4) == piStack_b0[10])) {
      piVar14 = (int *)FUN_1415530e0();
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14[4] = 0;
      piVar14[5] = 0;
      piVar14[6] = 0;
      piVar14[7] = 0;
      piVar14[8] = 0xf;
      piVar14[9] = 0;
      *(undefined1 *)(piVar14 + 2) = 0;
      piVar14[0x14] = 0;
      piVar14[0x15] = 0;
      piVar14[0x16] = 0;
      piVar14[0x17] = 0;
      piVar14[0x18] = 0;
      piVar14[0x19] = 0;
      piVar14[0x1a] = 0xf;
      piVar14[0x1b] = 0;
      *(undefined1 *)(piVar14 + 0x14) = 0;
      piVar14[0x1c] = 0;
      piVar14[0x1d] = 0;
      piVar14[0x1e] = 0;
      piVar14[0x1f] = 0;
      piVar14[0x20] = 0;
      piVar14[0x21] = 0;
      piVar14[0x22] = 0xf;
      piVar14[0x23] = 0;
      *(undefined1 *)(piVar14 + 0x1c) = 0;
      piVar14[0xd] = 0;
      piVar14[0xf] = 0;
      piVar14[0x13] = 0;
      *(short *)piVar14 = -1;
      *(short *)(piVar14 + 0xb) = -1;
      piVar14[0xc] = -1;
      piVar14[0xe] = -1;
      piVar14[0x12] = -1;
      piVar14[10] = -1;
      piVar14[0x10] = -1;
      piVar14[0x11] = -1;
      *(undefined1 *)(piVar14 + 0x24) = 1;
      piStackX_18 = piVar14;
      FUN_140314680(piVar14,*puVar22);
      puVar25 = *(undefined8 **)(piVar15 + 6);
      if (puVar25 != *(undefined8 **)(piVar15 + 8)) {
        *puVar25 = piVar14;
        *(longlong *)(piVar15 + 6) = *(longlong *)(piVar15 + 6) + 8;
        puVar22 = puVar22 + 1;
        goto LAB_140380425;
      }
      FUN_1400bc360(piVar15 + 4,puVar25,&piStackX_18);
      goto LAB_140380626;
    }
  }
  puVar22 = puVar22 + 1;
  goto LAB_140380425;
LAB_14037fa7d:
  puVar22 = *(undefined8 **)(param_1 + 0x28);
  if (puVar22 == *(undefined8 **)(param_1 + 0x30)) {
    FUN_140072200(param_1 + 0x20,puVar22,&piStack_a0);
  }
  else {
    *puVar22 = piVar13;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  }
  goto LAB_140380969;
  while (lVar12 = lVar12 + -1, -1 < lVar12) {
LAB_14037f803:
    if (((*(int *)(plVar20[0x17] + lVar12 * 4) == *piStackX_20) &&
        (*(int *)(plVar20[0x1a] + lVar12 * 4) == piStackX_20[1])) &&
       (*(int *)(plVar20[0x1d] + lVar12 * 4) == piStackX_20[2])) {
      piVar14 = (int *)FUN_1415530e0(0x98);
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14[4] = 0;
      piVar14[5] = 0;
      piVar14[6] = 0;
      piVar14[7] = 0;
      piVar14[8] = 0xf;
      piVar14[9] = 0;
      *(undefined1 *)(piVar14 + 2) = 0;
      piVar14[0x14] = 0;
      piVar14[0x15] = 0;
      piVar14[0x16] = 0;
      piVar14[0x17] = 0;
      piVar14[0x18] = 0;
      piVar14[0x19] = 0;
      piVar14[0x1a] = 0xf;
      piVar14[0x1b] = 0;
      *(undefined1 *)(piVar14 + 0x14) = 0;
      piVar14[0x1c] = 0;
      piVar14[0x1d] = 0;
      piVar14[0x1e] = 0;
      piVar14[0x1f] = 0;
      piVar14[0x20] = 0;
      piVar14[0x21] = 0;
      piVar14[0x22] = 0xf;
      piVar14[0x23] = 0;
      *(undefined1 *)(piVar14 + 0x1c) = 0;
      *(short *)piVar14 = -1;
      piVar14[10] = -1;
      *(short *)(piVar14 + 0xb) = -1;
      piVar14[0xc] = -1;
      piVar14[0xd] = 0;
      piVar14[0xe] = -1;
      piVar14[0xf] = 0;
      piVar14[0x10] = -1;
      piVar14[0x11] = -1;
      piVar14[0x12] = -1;
      piVar14[0x13] = 0;
      *(undefined1 *)(piVar14 + 0x24) = 1;
      piStack_b0 = piVar14;
      piStack_90 = piVar14;
      FUN_140314680(piVar14,*puVar22);
      plVar16 = (longlong *)(piVar13 + 4);
      goto LAB_14037f8f5;
    }
  }
  plVar16 = (longlong *)(piStackX_20 + 4);
LAB_14037f843:
  puVar22 = puVar22 + 1;
  goto LAB_14037f732;
}

