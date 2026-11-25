
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e62200(longlong param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  short sVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int *piVar17;
  undefined4 uVar18;
  int iVar19;
  undefined2 uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auStack_1e8 [32];
  short *psStack_1c8;
  longlong *plStack_1c0;
  int *piStack_1b8;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined2 uStack_1a4;
  int aiStack_1a0 [2];
  int *piStack_198;
  short asStack_190 [2];
  short asStack_18c [2];
  short asStack_188 [4];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  int aiStack_150 [2];
  int *piStack_148;
  int *piStack_140;
  int *piStack_138;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char acStack_98 [96];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_1e8;
  lStack_d8 = param_1;
  if ((_DAT_1423b99f8 - _DAT_1423b99f0 & 0xfffffffffffffffeU) == 0) goto LAB_140e6359c;
  iVar25 = 0;
  iVar22 = iVar25;
  do {
    if (iVar22 == 1000) goto LAB_140e6359c;
    uVar21 = _DAT_1423b99f8 - _DAT_1423b99f0 >> 1;
    if ((uint)uVar21 < 2) {
      sVar7 = 0;
    }
    else {
      uVar9 = FUN_140ece790();
      sVar7 = (short)((uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U));
    }
    lVar11 = (longlong)sVar7 * 2;
    uVar8 = *(undefined2 *)(_DAT_1423b99f0 + lVar11);
    uVar20 = *(undefined2 *)(_DAT_1423b9a80 + lVar11);
    uVar2 = *(undefined2 *)(_DAT_1423b9b10 + lVar11);
    iVar22 = iVar22 + 1;
    plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
    psStack_1c8 = (short *)((ulonglong)psStack_1c8 & 0xffffffffffffff00);
    uStack_1a8 = uVar20;
    uStack_1a6 = uVar8;
    uStack_1a4 = uVar2;
    cVar6 = FUN_1414c7110(0x1423f3970,uVar8,uVar20,uVar2);
  } while (cVar6 == '\0');
  plStack_1c0 = (longlong *)CONCAT62(plStack_1c0._2_6_,uVar2);
  psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uVar20);
  FUN_14007f300(0x1423f3970,aiStack_1a0,aiStack_150,uVar8);
  if ((((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) == 0) || (_DAT_1423b5af0 == -1)) ||
     (lVar11 = FUN_1400bb6d0(_DAT_1423b5af0,&DAT_1423f3c78), lVar11 == 0)) goto LAB_140e6359c;
  DAT_1423b375a = 1;
  plVar16 = *(longlong **)(lVar11 + 0xd8);
  for (plVar13 = *(longlong **)(lVar11 + 0xd0); plVar13 < plVar16; plVar13 = plVar13 + 1) {
    *(uint *)(*plVar13 + 0x1c) = *(uint *)(*plVar13 + 0x1c) & 0xfffffffd;
  }
  lVar12 = FUN_14094ff80(lVar11,_DAT_1423b5af4,1);
  *(uint *)(lVar12 + 0x1c) = *(uint *)(lVar12 + 0x1c) | 2;
  lStack_168 = 0;
  puStack_160 = (undefined8 *)0x0;
  puStack_158 = (undefined8 *)0x0;
  plVar13 = (longlong *)(lVar11 + 0x1450);
  lVar12 = *plVar13;
  if (*(longlong *)(lVar11 + 0x1458) - lVar12 >> 3 != 0) {
    piStack_198 = (int *)(lVar11 + 4);
    lVar26 = 0;
    do {
      cVar6 = FUN_140baef80(*(undefined8 *)(*(longlong *)(lVar26 + lVar12) + 0x10),*piStack_198,0x15
                           );
      if (cVar6 != '\0') {
        lVar12 = *(longlong *)(lVar26 + *plVar13);
        lVar14 = *(longlong *)(lVar12 + 0x10);
        if ((((lVar14 != 0) &&
             (((0 < *(int *)(lVar14 + 0xd0) && (**(char **)(lVar14 + 200) < '\0')) ||
              (*(int *)(lVar14 + 0x30) == -1)))) &&
            ((((_DAT_1418be238 != 0 || (*(int *)(lVar14 + 0x28) == -1)) ||
              ((_DAT_142167754 + 2 < *(int *)(lVar14 + 0x28) ||
               ((0 < *(int *)(lVar14 + 0xd0) && (**(char **)(lVar14 + 200) < '\0')))))) ||
             ((*(longlong *)(lVar14 + 0x130) != 0 &&
              ((lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x130) + 0x48), lVar14 != 0 &&
               ((*(longlong *)(lVar14 + 0x160) != 0 ||
                (((*(byte *)(lVar14 + 0x84) & 1) == 0 && ((*(byte *)(lVar14 + 0x80) & 1) != 0)))))))
              ))))) &&
           ((*(longlong *)(lVar12 + 0x18) == 0 ||
            (-1 < *(int *)(*(longlong *)(lVar12 + 0x18) + 0x110))))) {
          psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uStack_1a4);
          FUN_1414f55e0(0x1423f3970,lVar12,uVar8,uVar20);
          if (puStack_160 == puStack_158) {
            FUN_1400bc360(&lStack_168);
          }
          else {
            *puStack_160 = *(undefined8 *)(*(longlong *)(lVar26 + *plVar13) + 0x18);
            puStack_160 = puStack_160 + 1;
          }
          lVar12 = *(longlong *)(*(longlong *)(lVar26 + *plVar13) + 0x10);
          plVar3 = *(longlong **)(lVar12 + 0x120);
          for (plVar16 = *(longlong **)(lVar12 + 0x118); plVar16 < plVar3; plVar16 = plVar16 + 1) {
            puVar15 = (undefined8 *)*plVar16;
            sVar7 = (**(code **)*puVar15)(puVar15);
            if (sVar7 == 2) {
              uVar18 = *(undefined4 *)(puVar15 + 1);
              goto LAB_140e62577;
            }
          }
          uVar18 = 0xffffffff;
LAB_140e62577:
          lVar12 = FUN_140df5d70(0x1424075f8,uVar18);
          uVar8 = uStack_1a6;
          uVar20 = uStack_1a8;
          if (((((lVar12 != 0) && (lVar14 = *(longlong *)(lVar12 + 0x10), lVar14 != 0)) &&
               (((0 < *(int *)(lVar14 + 0xd0) && (**(char **)(lVar14 + 200) < '\0')) ||
                (*(int *)(lVar14 + 0x30) == -1)))) &&
              (((((_DAT_1418be238 != 0 || (*(int *)(lVar14 + 0x28) == -1)) ||
                 (_DAT_142167754 + 2 < *(int *)(lVar14 + 0x28))) ||
                ((0 < *(int *)(lVar14 + 0xd0) && (**(char **)(lVar14 + 200) < '\0')))) ||
               (((*(longlong *)(lVar14 + 0x130) != 0 &&
                 (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x130) + 0x48), lVar14 != 0)) &&
                ((*(longlong *)(lVar14 + 0x160) != 0 ||
                 (((*(byte *)(lVar14 + 0x84) & 1) == 0 && ((*(byte *)(lVar14 + 0x80) & 1) != 0))))))
               )))) && ((*(longlong *)(lVar12 + 0x18) == 0 ||
                        (-1 < *(int *)(*(longlong *)(lVar12 + 0x18) + 0x110))))) {
            psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uStack_1a4);
            FUN_1414f55e0(0x1423f3970,lVar12,uStack_1a6,uStack_1a8);
            if (puStack_160 == puStack_158) {
              FUN_1400bc360(&lStack_168);
              uVar20 = uStack_1a8;
            }
            else {
              *puStack_160 = *(undefined8 *)(lVar12 + 0x18);
              puStack_160 = puStack_160 + 1;
              uVar20 = uStack_1a8;
            }
          }
        }
      }
      iVar25 = iVar25 + 1;
      lVar26 = lVar26 + 8;
      lVar12 = *plVar13;
      uVar2 = uStack_1a4;
    } while ((ulonglong)(longlong)iVar25 < (ulonglong)(*(longlong *)(lVar11 + 0x1458) - lVar12 >> 3)
            );
  }
  lStack_d0 = 0;
  lStack_c8 = 0;
  iVar22 = 0;
  uStack_c0 = 0;
  FUN_14091a840(lVar11,&lStack_d0);
  lVar12 = lStack_d0;
  uVar21 = lStack_c8 - lStack_d0 >> 1;
  uVar9 = 0;
  plVar13 = _DAT_142407548;
  plVar16 = _DAT_142407550;
  if (uVar21 != 0) {
LAB_140e62700:
    do {
      if (plVar16 <= plVar13) goto LAB_140e62775;
      lVar26 = *plVar13;
      if ((((*(uint *)(lVar26 + 0x110) & 0x402) != 2) && (cVar6 = citizen(), cVar6 != '\0')) &&
         (*(longlong *)(lVar26 + 0xd80) == 0)) {
        if ((*(int *)(lVar26 + 0x1280) < 8) ||
           ((*(byte *)(*(longlong *)(lVar26 + 0x1278) + 7) & 4) == 0)) {
          if (((*(uint *)(lVar26 + 0x82c) & 0x2000000) == 0) &&
             ((*(uint *)(lVar26 + 0x828) & 0x2000000) != 0)) {
            iVar22 = iVar22 + 1;
          }
        }
        else if ((*(uint *)(lVar26 + 0x82c) & 0x2000000) == 0) {
          iVar22 = iVar22 + 1;
          plVar13 = plVar13 + 1;
          goto LAB_140e62700;
        }
      }
      plVar13 = plVar13 + 1;
    } while( true );
  }
  goto LAB_140e629dd;
  while( true ) {
    iVar19 = iVar19 + -1;
    lVar12 = lVar12 + -1;
    if (lVar12 < 0) break;
LAB_140e62c80:
    lVar26 = *(longlong *)(_DAT_1423b59a0 + lVar12 * 8);
    if ((*(int *)(lVar26 + 8) == iVar25) || (*(int *)(lVar26 + 0xc) == iVar25)) {
      if (*(longlong *)(_DAT_1423b59a0 + (longlong)iVar19 * 8) != 0) {
        FUN_140e74fe0(0x1423b36b0,
                      *(undefined8 *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x1450) + (longlong)iVar22 * 8) + 0x18)
                     );
      }
      break;
    }
  }
LAB_140e62cc1:
  FUN_141362450(*(undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x1450) + (longlong)iVar22 * 8) + 0x18));
  goto LAB_140e62d3e;
LAB_140e62775:
  for (plVar13 = *(longlong **)(_DAT_1423bc668 + 0x1450);
      plVar13 < *(longlong **)(_DAT_1423bc668 + 0x1458); plVar13 = plVar13 + 1) {
    lVar26 = *(longlong *)(*plVar13 + 0x10);
    if ((lVar26 != 0) &&
       ((((0 < *(int *)(lVar26 + 0xd0) && (**(char **)(lVar26 + 200) < '\0')) ||
         (*(int *)(lVar26 + 0x30) == -1)) &&
        ((lVar26 = *(longlong *)(*plVar13 + 0x18), lVar26 == 0 || (-1 < *(int *)(lVar26 + 0x110)))))
       )) {
      iVar22 = iVar22 + 1;
    }
  }
  aiStack_1a0[0] = _DAT_1423b3090;
  if (_DAT_1423b3094 < _DAT_1423b3090) {
    aiStack_1a0[0] = _DAT_1423b3094;
  }
  aiStack_1a0[0] = aiStack_1a0[0] - iVar22;
  if (aiStack_1a0[0] < 0) {
    aiStack_1a0[0] = 0;
  }
  uVar23 = (uint)uVar21;
  if (1 < uVar23) {
    uVar9 = FUN_140ece790();
    uVar9 = (uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U);
  }
  uVar20 = uStack_1a6;
  uVar8 = uStack_1a8;
  piStack_1b8 = aiStack_1a0;
  plStack_1c0 = &lStack_168;
  psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uVar2);
  FUN_1414f3170(0x1423f3970,*(undefined2 *)(lVar12 + (longlong)(int)uVar9 * 2),uStack_1a6,uStack_1a8
               );
  uVar10 = 0;
  uVar9 = uVar10;
  if (1 < uVar23) {
    uVar9 = FUN_140ece790();
    uVar9 = (uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U);
  }
  uVar2 = uStack_1a4;
  piStack_1b8 = aiStack_1a0;
  plStack_1c0 = &lStack_168;
  psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uStack_1a4);
  FUN_1414f3170(0x1423f3970,*(undefined2 *)(lVar12 + (longlong)(int)uVar9 * 2),uVar20,uVar8);
  uVar9 = uVar10;
  if (1 < uVar23) {
    uVar9 = FUN_140ece790();
    uVar9 = (uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U);
  }
  piStack_1b8 = aiStack_1a0;
  plStack_1c0 = &lStack_168;
  psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uVar2);
  FUN_1414f3170(0x1423f3970,*(undefined2 *)(lVar12 + (longlong)(int)uVar9 * 2),uVar20,uVar8);
  if (1 < uVar23) {
    uVar9 = FUN_140ece790();
    uVar10 = (uVar9 + (int)((longlong)((ulonglong)uVar9 * 0x100000003) >> 0x3f) * 0x7fffffff) /
             ((int)(0x7fffffff / (uVar21 & 0xffffffff)) + 1U);
  }
  piStack_1b8 = aiStack_1a0;
  plStack_1c0 = &lStack_168;
  psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uVar2);
  FUN_1414f3170(0x1423f3970,*(undefined2 *)(lVar12 + (longlong)(int)uVar10 * 2),uVar20,uVar8);
LAB_140e629dd:
  aiStack_1a0[0] = 0;
  lVar12 = *(longlong *)(lVar11 + 0x1450);
  if (*(longlong *)(lVar11 + 0x1458) - lVar12 >> 3 != 0) {
    piStack_198 = (int *)(lVar11 + 4);
    plVar13 = (longlong *)(lVar11 + 0x1450);
    lVar26 = 0;
    do {
      iVar22 = aiStack_1a0[0];
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + lVar26) + 0x10);
      if (*piStack_198 == -1) {
        plVar3 = *(longlong **)(lVar12 + 0xf0);
        for (plVar16 = *(longlong **)(lVar12 + 0xe8); iVar22 = aiStack_1a0[0], plVar16 < plVar3;
            plVar16 = plVar16 + 1) {
          plVar4 = (longlong *)*plVar16;
          sVar7 = (**(code **)*plVar4)(plVar4);
          if ((((sVar7 == 10) && (iVar22 = (**(code **)(*plVar4 + 0x30))(plVar4), iVar22 != -1)) &&
              ((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) != 0)) &&
             ((((int)plVar4[1] != -1 &&
               (lVar12 = FUN_1400bb6d0((int)plVar4[1],&DAT_1423f3c78), lVar12 != 0)) &&
              ((lVar14 = FUN_1400bb3f0(iVar22,lVar12 + 0x1110), lVar14 != 0 &&
               ((lVar12 = FUN_1401bc940(*(undefined4 *)(lVar14 + 0xc),lVar12 + 0x10c0), lVar12 != 0
                && (iVar22 = aiStack_1a0[0], *(char *)(lVar12 + 0x32f) != '\0'))))))))
          goto LAB_140e62b3e;
        }
      }
      else if (((_DAT_1423f3c80 - _DAT_1423f3c78 & 0xfffffffffffffff8U) != 0) &&
              (lVar14 = FUN_1400bb6d0(*piStack_198,&DAT_1423f3c78), lVar14 != 0)) {
        psStack_1c8 = (short *)CONCAT44(psStack_1c8._4_4_,0xffffffff);
        cVar6 = func_0x0001409b4620(lVar14,*(undefined4 *)(lVar12 + 0xe0),7,0xffffffff);
        if (cVar6 != '\0') {
LAB_140e62b3e:
          lVar14 = *plVar13;
          lVar12 = *(longlong *)(*(longlong *)(lVar14 + lVar26) + 0x10);
          if (lVar12 == 0) {
LAB_140e62be5:
            if (*(longlong *)(*(longlong *)(lVar14 + lVar26) + 0x18) == 0) goto LAB_140e62bf0;
          }
          else {
            if ((((*(int *)(lVar12 + 0xd0) < 1) || (-1 < **(char **)(lVar12 + 200))) &&
                (*(int *)(lVar12 + 0x30) != -1)) ||
               ((((_DAT_1418be238 == 0 && (*(int *)(lVar12 + 0x28) != -1)) &&
                 ((*(int *)(lVar12 + 0x28) <= _DAT_142167754 + 2 &&
                  ((*(int *)(lVar12 + 0xd0) < 1 || (-1 < **(char **)(lVar12 + 200))))))) &&
                (((*(longlong *)(lVar12 + 0x130) == 0 ||
                  (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + 0x48), lVar12 == 0)) ||
                 ((*(longlong *)(lVar12 + 0x160) == 0 &&
                  (((*(byte *)(lVar12 + 0x84) & 1) != 0 || ((*(byte *)(lVar12 + 0x80) & 1) == 0)))))
                 ))))) {
              lVar14 = *plVar13;
              goto LAB_140e62be5;
            }
            lVar12 = *(longlong *)(*(longlong *)(lVar14 + lVar26) + 0x18);
            if ((lVar12 == 0) || (-1 < *(int *)(lVar12 + 0x110))) {
              psStack_1c8 = (short *)CONCAT62(psStack_1c8._2_6_,uStack_1a4);
              FUN_1414f55e0(0x1423f3970,*(undefined8 *)((longlong)iVar22 * 8 + *plVar13),uStack_1a6,
                            uStack_1a8);
              if (puStack_160 == puStack_158) {
                FUN_1400bc360(&lStack_168);
              }
              else {
                *puStack_160 = *(undefined8 *)
                                (*(longlong *)
                                  ((longlong)iVar22 * 8 + *(longlong *)(lVar11 + 0x1450)) + 0x18);
                puStack_160 = puStack_160 + 1;
              }
              break;
            }
            lVar14 = *plVar13;
          }
          iVar25 = *(int *)(*(longlong *)(*(longlong *)(lVar14 + (longlong)iVar22 * 8) + 0x18) +
                           0xc30);
          if ((iVar25 == -1) ||
             (iVar19 = (int)(_DAT_1423b59a8 - _DAT_1423b59a0 >> 3) + -1, iVar19 < 0))
          goto LAB_140e62cc1;
          lVar12 = (longlong)iVar19;
          goto LAB_140e62c80;
        }
      }
LAB_140e62bf0:
      aiStack_1a0[0] = iVar22 + 1;
      lVar26 = lVar26 + 8;
      lVar12 = *plVar13;
    } while ((ulonglong)(longlong)aiStack_1a0[0] <
             (ulonglong)(*(longlong *)(lVar11 + 0x1458) - lVar12 >> 3));
  }
LAB_140e62d3e:
  puStack_180 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  piStack_148 = (int *)0x0;
  piStack_140 = (int *)0x0;
  piStack_138 = (int *)0x0;
  aiStack_150[0] = 0;
  if ((longlong)puStack_160 - lStack_168 >> 3 != 0) {
    piStack_198 = (int *)0x0;
    do {
      iVar22 = aiStack_150[0];
      piVar24 = piStack_198;
      if (*(undefined8 **)(lStack_d8 + 8) == *(undefined8 **)(lStack_d8 + 0x10)) {
        FUN_1400bc360();
      }
      else {
        **(undefined8 **)(lStack_d8 + 8) = *(undefined8 *)(lStack_168 + (longlong)piStack_198 * 8);
        *(longlong *)(lStack_d8 + 8) = *(longlong *)(lStack_d8 + 8) + 8;
      }
      if (puStack_180 != puStack_178) {
        puStack_178 = puStack_180;
      }
      if (piStack_148 != piStack_140) {
        piStack_140 = piStack_148;
      }
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      acStack_98[0x18] = '\0';
      acStack_98[0x19] = '\0';
      acStack_98[0x1a] = '\0';
      acStack_98[0x1b] = '\0';
      acStack_98[0x1c] = '\0';
      acStack_98[0x1d] = '\0';
      acStack_98[0x1e] = '\0';
      acStack_98[0x1f] = '\0';
      acStack_98[0x20] = '\0';
      acStack_98[0x21] = '\0';
      acStack_98[0x22] = '\0';
      acStack_98[0x23] = '\0';
      acStack_98[0x24] = '\0';
      acStack_98[0x25] = '\0';
      acStack_98[0x26] = '\0';
      acStack_98[0x27] = '\0';
      acStack_98[0x28] = '\0';
      acStack_98[0x29] = '\0';
      acStack_98[0x2a] = '\0';
      acStack_98[0x2b] = '\0';
      acStack_98[0x2c] = '\0';
      acStack_98[0x2d] = '\0';
      acStack_98[0x2e] = '\0';
      acStack_98[0x2f] = '\0';
      acStack_98[0x30] = '\0';
      acStack_98[0x31] = '\0';
      acStack_98[0x32] = '\0';
      acStack_98[0x33] = '\0';
      acStack_98[0x34] = '\0';
      acStack_98[0x35] = '\0';
      acStack_98[0x36] = '\0';
      acStack_98[0x37] = '\0';
      acStack_98[0x38] = '\0';
      acStack_98[0x39] = '\0';
      acStack_98[0x3a] = '\0';
      acStack_98[0x3b] = '\0';
      acStack_98[0x3c] = '\0';
      acStack_98[0x3d] = '\0';
      acStack_98[0x3e] = '\0';
      acStack_98[0x3f] = '\0';
      acStack_98[0x40] = '\0';
      acStack_98[0x41] = '\0';
      acStack_98[0x42] = '\0';
      acStack_98[0x43] = '\0';
      acStack_98[0x44] = '\0';
      acStack_98[0x45] = '\0';
      acStack_98[0x46] = '\0';
      acStack_98[0x47] = '\0';
      acStack_98[0x48] = '\0';
      acStack_98[0x49] = '\0';
      acStack_98[0x4a] = '\0';
      acStack_98[0x4b] = '\0';
      acStack_98[0x4c] = '\0';
      acStack_98[0x4d] = '\0';
      acStack_98[0x4e] = '\0';
      acStack_98[0x4f] = '\0';
      acStack_98[0x50] = '\0';
      acStack_98[0x51] = '\0';
      acStack_98[0x52] = '\0';
      acStack_98[0x53] = '\0';
      acStack_98[0x54] = '\0';
      acStack_98[0x55] = '\0';
      acStack_98[0x56] = '\0';
      acStack_98[0x57] = '\0';
      acStack_98[0x58] = '\0';
      acStack_98[0x59] = '\0';
      acStack_98[0x5a] = '\0';
      acStack_98[0x5b] = '\0';
      acStack_98[0x5c] = 0;
      iVar25 = 0;
      lVar12 = *(longlong *)(lVar11 + 0xcd0);
      if (*(longlong *)(lVar11 + 0xcd8) - lVar12 >> 3 != 0) {
        lVar26 = 0;
        do {
          plVar13 = *(longlong **)(lVar12 + lVar26);
          if ((*(byte *)(plVar13 + 2) & 1) != 0) {
            lVar12 = *(longlong *)(lStack_168 + (longlong)piVar24 * 8);
            cVar6 = (**(code **)(*plVar13 + 0x5a0))(plVar13);
            piVar24 = piStack_198;
            if (cVar6 < '\x01') {
              sVar7 = (**(code **)(*plVar13 + 0x508))(plVar13);
              if (((0 < sVar7) && (*(longlong *)(lVar12 + 0xa98) != 0)) &&
                 (1 < (ushort)(*(short *)(lVar12 + 0xa0) - 0x67U))) {
                uVar8 = (**(code **)*plVar13)(plVar13);
                switch(uVar8) {
                case 0x19:
                case 0x1a:
                case 0x1c:
                case 0x1d:
                case 0x25:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x3c:
                  for (puVar15 = *(undefined8 **)(*(longlong *)(lVar12 + 0xa98) + 0x380);
                      (puVar15 < *(undefined8 **)(*(longlong *)(lVar12 + 0xa98) + 0x388) &&
                      (*(int *)*puVar15 != 0x19)); puVar15 = puVar15 + 1) {
                  }
                }
              }
              plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffffffffff00);
              psStack_1c8 = asStack_190;
              cVar6 = FUN_1413ad030(lVar12,plVar13,asStack_188,asStack_18c);
              piVar24 = piStack_198;
              if (cVar6 != '\0') {
                iVar22 = FUN_141357710(*(undefined8 *)(lStack_168 + (longlong)piStack_198 * 8),
                                       *(undefined8 *)(lVar26 + *(longlong *)(lVar11 + 0xcd0)),0,1);
                iVar19 = 0;
                uVar21 = (longlong)puStack_178 - (longlong)puStack_180 >> 3;
                piVar17 = piStack_148;
                aiStack_1a0[0] = iVar22;
                if (uVar21 != 0) {
                  do {
                    if (*piVar17 < iVar22) {
                      puVar15 = puStack_180 + iVar19;
                      if (puStack_178 == puStack_170) {
                        FUN_1400bc360(&puStack_180,puVar15);
                      }
                      else {
                        uVar5 = *(undefined8 *)(*(longlong *)(lVar11 + 0xcd0) + lVar26);
                        if (puVar15 == puStack_178) {
                          *puStack_178 = uVar5;
                          puStack_178 = puStack_178 + 1;
                        }
                        else {
                          *puStack_178 = puStack_178[-1];
                          lVar12 = (longlong)puStack_178 -
                                   ((longlong)(puStack_178 + -1) - (longlong)puVar15);
                          puStack_178 = puStack_178 + 1;
                          func_0x00014155486a(lVar12,puVar15);
                          *puVar15 = uVar5;
                        }
                      }
                      piVar24 = piStack_148 + iVar19;
                      if (piStack_140 == piStack_138) {
                        FUN_140072450(&piStack_148,piVar24,aiStack_1a0);
                        piVar24 = piStack_198;
                      }
                      else if (piVar24 == piStack_140) {
                        *piStack_140 = iVar22;
                        piStack_140 = piStack_140 + 1;
                        piVar24 = piStack_198;
                      }
                      else {
                        *piStack_140 = piStack_140[-1];
                        lVar12 = (longlong)piStack_140 -
                                 ((longlong)(piStack_140 + -1) - (longlong)piVar24);
                        piStack_140 = piStack_140 + 1;
                        func_0x00014155486a(lVar12,piVar24);
                        *piVar24 = iVar22;
                        piVar24 = piStack_198;
                      }
                      goto LAB_140e6301f;
                    }
                    iVar19 = iVar19 + 1;
                    piVar17 = piVar17 + 1;
                  } while ((ulonglong)(longlong)iVar19 < uVar21);
                }
                if (puStack_178 == puStack_170) {
                  FUN_1400bc360(&puStack_180,puStack_178);
                }
                else {
                  *puStack_178 = *(undefined8 *)(*(longlong *)(lVar11 + 0xcd0) + lVar26);
                  puStack_178 = puStack_178 + 1;
                }
                if (piStack_140 == piStack_138) {
                  FUN_140072450(&piStack_148,piStack_140,aiStack_1a0);
                }
                else {
                  *piStack_140 = iVar22;
                  piStack_140 = piStack_140 + 1;
                }
              }
            }
          }
LAB_140e6301f:
          iVar25 = iVar25 + 1;
          lVar26 = lVar26 + 8;
          lVar12 = *(longlong *)(lVar11 + 0xcd0);
          iVar22 = aiStack_150[0];
        } while ((ulonglong)(longlong)iVar25 <
                 (ulonglong)(*(longlong *)(lVar11 + 0xcd8) - lVar12 >> 3));
      }
      iVar25 = 0;
      if ((longlong)puStack_178 - (longlong)puStack_180 >> 3 != 0) {
        lVar12 = 0;
        do {
          lVar26 = *(longlong *)(lStack_168 + (longlong)piVar24 * 8);
          plVar13 = *(longlong **)((longlong)puStack_180 + lVar12);
          cVar6 = (**(code **)(*plVar13 + 0x5a0))(plVar13);
          piVar24 = piStack_198;
          if (cVar6 < '\x01') {
            sVar7 = (**(code **)(*plVar13 + 0x508))(plVar13);
            if (((0 < sVar7) && (*(longlong *)(lVar26 + 0xa98) != 0)) &&
               (1 < (ushort)(*(short *)(lVar26 + 0xa0) - 0x67U))) {
              uVar8 = (**(code **)*plVar13)(plVar13);
              switch(uVar8) {
              case 0x19:
              case 0x1a:
              case 0x1c:
              case 0x1d:
              case 0x25:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x3c:
                for (puVar15 = *(undefined8 **)(*(longlong *)(lVar26 + 0xa98) + 0x380);
                    (puVar15 < *(undefined8 **)(*(longlong *)(lVar26 + 0xa98) + 0x388) &&
                    (*(int *)*puVar15 != 0x19)); puVar15 = puVar15 + 1) {
                }
              }
            }
            plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffffffffff00);
            psStack_1c8 = asStack_190;
            cVar6 = FUN_1413ad030(lVar26,plVar13,asStack_188,asStack_18c);
            piVar24 = piStack_198;
            if ((cVar6 != '\0') &&
               (sVar7 = (**(code **)**(undefined8 **)((longlong)puStack_180 + lVar12))(),
               piVar24 = piStack_198, acStack_98[sVar7] == '\0')) {
              sVar7 = (**(code **)**(undefined8 **)((longlong)puStack_180 + lVar12))();
              acStack_98[sVar7] = '\x01';
              sVar7 = (**(code **)**(undefined8 **)((longlong)puStack_180 + lVar12))();
              piVar24 = piStack_198;
              if (sVar7 == 0x18) {
                plVar13 = *(longlong **)((longlong)puStack_180 + lVar12);
                sVar7 = (**(code **)(*plVar13 + 0x4f8))(plVar13);
                if ((sVar7 != -1) ||
                   (sVar7 = (**(code **)(*plVar13 + 0x4f0))(plVar13), piVar24 = piStack_198,
                   sVar7 != -1)) {
                  piVar24 = piStack_198;
                  FUN_141354400(*(undefined8 *)(lStack_168 + (longlong)piStack_198 * 8),sVar7);
                  iVar19 = func_0x000140abd840(sVar7);
                  if (iVar19 != -1) {
                    *(undefined1 *)
                     (*(longlong *)(lStack_168 + (longlong)piVar24 * 8) + 0xab8 + (longlong)iVar19)
                         = 1;
                  }
                }
              }
              iVar19 = 0;
              lVar26 = *(longlong *)(lVar11 + 0xcd8);
              plVar13 = *(longlong **)(lVar11 + 0xcd0);
              if (lVar26 - (longlong)plVar13 >> 3 != 0) {
                plVar16 = plVar13;
                do {
                  if (*plVar16 == *(longlong *)((longlong)puStack_180 + lVar12)) {
                    plVar13 = plVar13 + iVar19;
                    func_0x00014155486a(plVar13,plVar13 + 1,lVar26 - (longlong)(plVar13 + 1));
                    *(longlong *)(lVar11 + 0xcd8) = *(longlong *)(lVar11 + 0xcd8) + -8;
                    break;
                  }
                  iVar19 = iVar19 + 1;
                  plVar16 = plVar16 + 1;
                } while ((ulonglong)(longlong)iVar19 < (ulonglong)(lVar26 - (longlong)plVar13 >> 3))
                ;
              }
              puVar1 = (uint *)(*(longlong *)((longlong)puStack_180 + lVar12) + 0x10);
              *puVar1 = *puVar1 & 0xfffffffe;
              FUN_140cc9200(*(undefined8 *)((longlong)puStack_180 + lVar12),0x2c);
              puVar1 = (uint *)(*(longlong *)((longlong)puStack_180 + lVar12) + 0x10);
              *puVar1 = *puVar1 & 0xffff7fff;
              (**(code **)(**(longlong **)((longlong)puStack_180 + lVar12) + 0x328))
                        (*(longlong **)((longlong)puStack_180 + lVar12),1);
              plStack_1c0 = (longlong *)CONCAT71(plStack_1c0._1_7_,1);
              psStack_1c8 = (short *)CONCAT44(psStack_1c8._4_4_,(int)asStack_190[0]);
              FUN_1413412c0(*(undefined8 *)(lStack_168 + (longlong)piVar24 * 8),
                            *(undefined8 *)((longlong)puStack_180 + lVar12),(int)asStack_188[0],
                            (int)asStack_18c[0]);
              cVar6 = FUN_140ca4ec0(*(undefined8 *)((longlong)puStack_180 + lVar12));
              if (cVar6 != '\0') {
                lVar26 = *(longlong *)(lStack_168 + (longlong)piVar24 * 8);
                lVar14 = *(longlong *)((longlong)puStack_180 + lVar12);
                piVar24 = piStack_198;
                if ((*(uint *)(lVar14 + 0x10) & 0x10000) == 0) {
                  FUN_140073c90(lVar14,0x10,*(undefined4 *)(lVar26 + 0x130));
                  *(uint *)(lVar14 + 0x10) = *(uint *)(lVar14 + 0x10) | 0x10000;
                  if (*(undefined4 **)(lVar26 + 0x428) == *(undefined4 **)(lVar26 + 0x430)) {
                    FUN_140072450(lVar26 + 0x420);
                    piVar24 = piStack_198;
                  }
                  else {
                    **(undefined4 **)(lVar26 + 0x428) = *(undefined4 *)(lVar14 + 0x1c);
                    *(longlong *)(lVar26 + 0x428) = *(longlong *)(lVar26 + 0x428) + 4;
                    piVar24 = piStack_198;
                  }
                }
              }
            }
          }
          iVar25 = iVar25 + 1;
          lVar12 = lVar12 + 8;
        } while ((ulonglong)(longlong)iVar25 <
                 (ulonglong)((longlong)puStack_178 - (longlong)puStack_180 >> 3));
      }
      aiStack_150[0] = iVar22 + 1;
      piStack_198 = (int *)((longlong)piVar24 + 1);
    } while ((ulonglong)(longlong)aiStack_150[0] <
             (ulonglong)((longlong)puStack_160 - lStack_168 >> 3));
  }
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_b8 = (undefined8 *)FUN_140071e00(0xc0);
  uStack_a8 = 0xb0;
  uStack_a0 = 0xbf;
  *puStack_b8 = 0x6c75722072756f59;
  puStack_b8[1] = 0x6120736168207265;
  puStack_b8[2] = 0x7720646576697272;
  puStack_b8[3] = 0x7566206120687469;
  puStack_b8[4] = 0x756f746e65206c6c;
  puStack_b8[5] = 0x5920202e65676172;
  puStack_b8[6] = 0x697268742072756f;
  puStack_b8[7] = 0x74697320676e6976;
  puStack_b8[8] = 0x776f6e2073692065;
  puStack_b8[9] = 0x7061632065687420;
  puStack_b8[10] = 0x6e61202c6c617469;
  puStack_b8[0xb] = 0x6320687469772064;
  puStack_b8[0xc] = 0x6465756e69746e6f;
  puStack_b8[0xd] = 0x656e7574726f6620;
  puStack_b8[0xe] = 0x696f7420646e6120;
  puStack_b8[0xf] = 0x6c20656874202c6c;
  puStack_b8[0x10] = 0x666f20646e656765;
  puStack_b8[0x11] = 0x2065757274206120;
  puStack_b8[0x12] = 0x6e6961746e756f4d;
  puStack_b8[0x13] = 0x79616d20656d6f68;
  *(undefined4 *)(puStack_b8 + 0x14) = 0x74657920;
  *(undefined4 *)((longlong)puStack_b8 + 0xa4) = 0x20656220;
  *(undefined4 *)(puStack_b8 + 0x15) = 0x74697277;
  *(undefined4 *)((longlong)puStack_b8 + 0xac) = 0x2e6e6574;
  *(undefined1 *)(puStack_b8 + 0x16) = 0;
  uStack_11c = 0;
  uStack_118 = 0x8ad08ad0;
  uStack_114 = 0x8ad0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffff;
  uStack_ec = 0;
  uStack_e8 = 0xffffffff;
  uStack_128 = 0x70158;
  uStack_124 = 1;
  uStack_10c = 2000;
  uStack_122 = uStack_1a6;
  uStack_120 = uStack_1a8;
  uStack_11e = uStack_1a4;
  FUN_1400e5250(0x142505cd0,&puStack_b8,&uStack_128);
  _DAT_1426b7fd0 = _DAT_1426b7fd0 | 1;
  _DAT_1426b7fd4 = 9;
  FUN_140070e80(&puStack_b8);
  FUN_140070d80(&piStack_148);
  FUN_1400681a0(&puStack_180);
  FUN_140070de0(&lStack_d0);
  FUN_1400681a0(&lStack_168);
LAB_140e6359c:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_1e8);
  return;
}

