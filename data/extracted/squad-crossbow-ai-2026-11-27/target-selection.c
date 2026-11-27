/* dungeon context and conflict target selection | VA [0x1414fe070, 0x14150061c) | Ghidra decompilation */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414fe070(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  int *piVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong *plVar26;
  uint uVar27;
  longlong lVar28;
  longlong *plVar29;
  short sVar30;
  int iVar31;
  undefined8 *puVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined4 *puVar37;
  undefined2 uVar38;
  longlong *plVar39;
  ulonglong uVar40;
  undefined4 in_R10D;
  ulonglong uVar41;
  longlong lVar42;
  longlong *plVar43;
  int iVar44;
  undefined8 *puVar45;
  bool bVar46;
  double dVar47;
  undefined8 extraout_XMM0_Qa;
  double dVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 unaff_XMM6 [16];
  undefined4 auStackX_8 [2];
  undefined2 auStackX_10 [4];
  longlong *plStack_1120;
  int iStack_1110;
  undefined2 auStack_10f8 [2];
  undefined2 auStack_10f4 [2];
  undefined2 auStack_10f0 [2];
  undefined1 auStack_10ec [4];
  int *piStack_10e8;
  int *piStack_10e0;
  longlong *plStack_10d8;
  longlong lStack_10d0;
  longlong *plStack_10c8;
  undefined8 *puStack_10c0;
  undefined8 *puStack_10b8;
  longlong *plStack_10b0;
  undefined8 uStack_10a8;
  longlong *plStack_10a0;
  undefined8 *puStack_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  int iStack_1088;
  undefined4 uStack_1084;
  int iStack_1078;
  undefined4 uStack_1074;
  char cStack_1070;
  undefined7 uStack_106f;
  longlong lStack_1068;
  undefined1 auStack_1058 [16];
  int iStack_1048;
  undefined4 uStack_1044;
  char cStack_1040;
  undefined7 uStack_103f;
  longlong lStack_1038;
  char cStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  longlong lStack_1008;
  longlong alStack_1000 [399];
  uint uStack_388;
  int aiStack_378 [200];
  ulonglong uStack_58;
  undefined8 uStack_40;
  
  uStack_40 = 0x1414fe092;
  lVar20 = FUN_141554810();
  lVar20 = -lVar20;
  *(undefined1 (*) [16])(&stack0x00001128 + lVar20) = unaff_XMM6;
  uStack_58 = _DAT_1418be040 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar20);
  bVar46 = true;
  sVar13 = (short)param_1[0x6c];
  if ((sVar13 == 5) ||
     (((((sVar13 - 6U & 0xfffc) == 0 && (sVar13 != 7)) ||
       (*(short *)((longlong)param_1 + 0x814) == 3)) || (*(short *)((longlong)param_1 + 0x814) == 4)
      ))) {
    bVar46 = false;
  }
  bVar8 = false;
  if ((*(uint *)(param_1 + 0x23) & 0x1000) == 0) {
    bVar8 = bVar46;
  }
  if ((param_1[0x1b0] != 0) && (*(short *)(param_1[0x1b0] + 0x48) < 1)) {
    bVar8 = false;
  }
  uVar18 = *(uint *)(param_1 + 0x22);
  plStack_10d8 = param_2;
  if ((((((uVar18 & 2) != 0) || ((uVar18 >> 8 & 1) != 0)) ||
       (((uVar18 >> 0x19 & 1) != 0 || (0 < (short)param_1[0x100])))) ||
      ((((lVar24 = param_1[0x9b], lVar24 != 0 && (*(short *)(lVar24 + 0x14) == 0x17)) &&
        ((short)param_1[0x15] == *(short *)(lVar24 + 0x1c))) &&
       (*(short *)((longlong)param_1 + 0xaa) == *(short *)(lVar24 + 0x1e))))) || (!bVar8)) {
    *(undefined4 *)((longlong)param_1 + 0x11e4) = 0;
    goto LAB_1414ffcd7;
  }
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe1a7;
  uVar17 = FUN_14139be10(param_1);
  piStack_10e8 = (int *)CONCAT44(piStack_10e8._4_4_,uVar17);
  sVar13 = *(short *)((longlong)param_1 + 300);
  sVar15 = *(short *)((longlong)param_1 + 0xa4);
  if (((sVar15 < 0) ||
      ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar15)) ||
     ((sVar13 < 0 ||
      (lVar24 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar15 * 8),
      lVar42 = *(longlong *)(lVar24 + 0x178),
      (ulonglong)(*(longlong *)(lVar24 + 0x180) - lVar42 >> 3) <= (ulonglong)(longlong)sVar13)))) {
    lVar24 = 0;
  }
  else {
    lVar24 = *(longlong *)(lVar42 + (longlong)sVar13 * 8);
  }
  uVar18 = 0;
  uStack_10a8 = (undefined8 *)(CONCAT44(uStack_10a8._4_4_,in_R10D) & 0xffffffffffffff00);
  lVar42 = 1;
  lStack_10d0 = lVar24;
  if (_DAT_1418be238 == 0) {
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe22a;
    cVar10 = func_0x0001413a7620(param_1);
    uVar18 = uVar18 & 0xff;
    if (cVar10 != '\0') {
      uVar18 = (uint)lVar42;
    }
    uStack_10a8 = (undefined8 *)CONCAT44(uStack_10a8._4_4_,uVar18);
  }
  iVar34 = *(int *)((longlong)param_1 + 0x11e4);
  lVar28 = 6;
  puVar21 = (undefined8 *)((longlong)param_1 + 0xec4);
  piVar23 = aiStack_378;
  do {
    piVar33 = piVar23;
    puVar45 = puVar21;
    uVar5 = puVar45[1];
    *(undefined8 *)piVar33 = *puVar45;
    *(undefined8 *)(piVar33 + 2) = uVar5;
    uVar5 = puVar45[3];
    *(undefined8 *)(piVar33 + 4) = puVar45[2];
    *(undefined8 *)(piVar33 + 6) = uVar5;
    uVar5 = puVar45[5];
    *(undefined8 *)(piVar33 + 8) = puVar45[4];
    *(undefined8 *)(piVar33 + 10) = uVar5;
    uVar5 = puVar45[7];
    *(undefined8 *)(piVar33 + 0xc) = puVar45[6];
    *(undefined8 *)(piVar33 + 0xe) = uVar5;
    uVar5 = puVar45[9];
    *(undefined8 *)(piVar33 + 0x10) = puVar45[8];
    *(undefined8 *)(piVar33 + 0x12) = uVar5;
    uVar5 = puVar45[0xb];
    *(undefined8 *)(piVar33 + 0x14) = puVar45[10];
    *(undefined8 *)(piVar33 + 0x16) = uVar5;
    uVar5 = puVar45[0xd];
    *(undefined8 *)(piVar33 + 0x18) = puVar45[0xc];
    *(undefined8 *)(piVar33 + 0x1a) = uVar5;
    uVar5 = puVar45[0xf];
    *(undefined8 *)(piVar33 + 0x1c) = puVar45[0xe];
    *(undefined8 *)(piVar33 + 0x1e) = uVar5;
    lVar28 = lVar28 - lVar42;
    puVar21 = puVar45 + 0x10;
    piVar23 = piVar33 + 0x20;
  } while (lVar28 != 0);
  uVar5 = puVar45[0x11];
  *(undefined8 *)(piVar33 + 0x20) = puVar45[0x10];
  *(undefined8 *)(piVar33 + 0x22) = uVar5;
  *(undefined1 (*) [16])(piVar33 + 0x24) = *(undefined1 (*) [16])(puVar45 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x11e4) = 0;
  uVar38 = *(undefined2 *)((longlong)param_1 + 0xac);
  uVar2 = *(undefined2 *)((longlong)param_1 + 0xaa);
  lVar42 = param_1[0x15];
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe2de;
  puVar21 = (undefined8 *)FUN_1414bbbe0(0x1423f3970,(short)lVar42,uVar2,uVar38);
  if (puVar21 == (undefined8 *)0x0) {
LAB_1414fe300:
    uVar38 = *(undefined2 *)((longlong)param_1 + 0xac);
    uVar2 = *(undefined2 *)((longlong)param_1 + 0xaa);
    uVar3 = (undefined2)param_1[0x15];
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe325;
    uVar18 = func_0x000140069640(0x1423f3970,uVar3,uVar2);
    if ((uVar18 >> 0x17 & 1) == 0) {
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe34d;
      uVar18 = func_0x00014007f270(0x1423f3970,uVar3,uVar2);
      if ((uVar18 >> 0xe & 1) == 0) {
        uVar22 = 3;
        goto LAB_1414fe42f;
      }
      *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) = uVar38;
      *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) = uVar2;
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe378;
      FUN_14007f300(0x1423f3970,&stack0x00000028 + lVar20,&stack0x00000038 + lVar20,uVar3);
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe38f;
      sVar13 = FUN_140f94110(_DAT_14250dfd8,*(undefined2 *)(&stack0x00000028 + lVar20),
                             *(undefined2 *)(&stack0x00000038 + lVar20));
      if (0x19 < sVar13) {
        sVar13 = 0x19;
      }
      iVar31 = (int)(short)param_1[0x15] / 0x30 + _DAT_14250a568;
      *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) = *(undefined2 *)((longlong)param_1 + 0xac)
      ;
      *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) = *(undefined2 *)((longlong)param_1 + 0xaa)
      ;
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe401;
      FUN_14007f300(0x1423f3970,&stack0x00000028 + lVar20,&stack0x00000038 + lVar20);
      *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) =
           *(undefined2 *)(&stack0x00000038 + lVar20);
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe420;
      uVar22 = FUN_140f93f50(_DAT_14250dfd8,(int)((iVar31 >> 0x1f & 0xfU) + iVar31) >> 4 & 0xffff);
      if (0x19 < (short)uVar22) {
        uVar22 = 0x19;
      }
    }
    else {
      sVar13 = 0x19;
      uVar22 = 0xf;
    }
  }
  else {
    pcVar4 = *(code **)*puVar21;
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe2f1;
    sVar13 = (*pcVar4)(puVar21);
    if (sVar13 != 9) goto LAB_1414fe300;
    uVar22 = 0xf;
LAB_1414fe42f:
    sVar13 = 0x19;
  }
  iVar31 = 0;
  if ((*(uint *)(param_1 + 0x23) & 0x1000) == 0) {
    if (lVar24 != 0) {
      iVar31 = *(int *)(lVar24 + 0x4290);
    }
  }
  else {
    iVar31 = 10000;
  }
  puStack_10b8 = (undefined8 *)CONCAT44(puStack_10b8._4_4_,iVar31);
  sVar15 = (short)uVar22;
  if (sVar15 < 0x19) {
    uVar19 = ((iVar31 + 100) * (int)sVar15) / 100;
    uVar18 = (int)sVar15 + 1;
    if ((int)uVar18 <= (int)uVar19) {
      uVar18 = uVar19;
    }
    uVar22 = (ulonglong)uVar18;
    if (0x19 < (int)uVar18) {
      uVar22 = 0x19;
    }
  }
  uVar17 = (undefined4)uVar22;
  if (sVar13 < (short)uVar22) {
    uVar17 = (undefined4)CONCAT62((int6)(uVar22 >> 0x10),sVar13);
  }
  puStack_1098 = (undefined8 *)CONCAT44(puStack_1098._4_4_,uVar17);
  cVar10 = '\0';
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe4af;
  cVar11 = func_0x00014133cae0(param_1);
  if (cVar11 == '\0') {
    cVar10 = '\x01';
    goto LAB_1414fe4b6;
  }
  if (lVar24 == 0) {
    sVar15 = 0;
    uVar18 = 0;
LAB_1414fe51d:
    puStack_10c0 = (undefined8 *)CONCAT44(puStack_10c0._4_4_,uVar18);
  }
  else {
    if ((*(int *)(lVar24 + 0x6b0) < 7) || ((*(byte *)(*(longlong *)(lVar24 + 0x6a8) + 6) & 4) == 0))
    {
      bVar46 = false;
    }
    else {
      bVar46 = true;
    }
    if (bVar46) {
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe4f8;
      FUN_14139e410();
      if ((*(uint *)(param_1 + 0x23) & 0x1000000) == 0) goto LAB_1414fe4b6;
      cVar10 = '\x01';
LAB_1414fe4bb:
      sVar15 = *(short *)(lVar24 + 0x49e);
      uVar18 = (uint)*(ushort *)(lVar24 + 0x4a0);
      goto LAB_1414fe51d;
    }
LAB_1414fe4b6:
    if (lVar24 != 0) goto LAB_1414fe4bb;
    uVar18 = 0;
    puStack_10c0 = (undefined8 *)((ulonglong)puStack_10c0 & 0xffffffff00000000);
    sVar15 = 0;
  }
  iVar31 = *(int *)((longlong)param_1 + 0x4b4);
  iVar44 = -iVar31;
  if (-iVar31 < 0) {
    iVar44 = iVar31;
  }
  iVar35 = (int)param_1[0x97];
  iVar36 = -iVar35;
  if (-iVar35 < 0) {
    iVar36 = iVar35;
  }
  if ((iVar44 < 0xb) && (iVar36 < 0xb)) {
    dVar47 = *(double *)(((longlong)iVar44 * 0xb + (longlong)iVar36) * 8 + 0x14250dba0);
  }
  else {
    auVar49._0_8_ = (double)(iVar31 * iVar31 + iVar35 * iVar35);
    auVar49._8_8_ = 0;
    if (auVar49._0_8_ < 0.0) {
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe590;
      dVar47 = (double)func_0x0001415548d0();
    }
    else {
      auVar49 = sqrtpd(unaff_XMM6,auVar49);
      dVar47 = auVar49._0_8_;
    }
  }
  iStack_1090 = (int)*(double *)((longlong)((int)sVar15 / 2) * 8 + 0x14250d5f8);
  iStack_1088 = (int)*(double *)((longlong)((int)(short)uVar18 / 2) * 8 + 0x14250d5f8);
  (&stack0x00000028)[lVar20] = 0;
  if ((*(longlong *)(lVar24 + 0x42a0) - *(longlong *)(lVar24 + 0x4298) >> 3 != 0) ||
     ((*(byte *)((longlong)param_1 + 0x824) & 1) != 0)) {
    (&stack0x00000028)[lVar20] = 1;
  }
  uStack_388 = 0;
  plStack_10c8 = _DAT_1424075b8;
  plStack_10a0 = _DAT_1424075b0;
  plVar39 = _DAT_1424075b8;
  lStack_1068 = (longlong)iVar34;
LAB_1414fe612:
  if (plStack_10a0 < plVar39) {
    plVar43 = (longlong *)*plStack_10a0;
    *(longlong **)(&stack0x00000040 + lVar20) = plVar43;
    iVar34 = 0;
    *(undefined4 *)(&stack0x0000002c + lVar20) = 0;
    plVar29 = plVar43 + 200;
    if (0 < (int)*plVar29) {
      (&stack0x00000034)[lVar20] = cVar10;
      sVar30 = sVar15;
LAB_1414fe660:
      plVar39 = (longlong *)*plVar43;
      if (plVar39 != param_1) {
        for (piVar23 = (int *)param_1[0x13a]; piVar23 < (int *)param_1[0x13b]; piVar23 = piVar23 + 1
            ) {
          if ((int)plVar39[0x26] == *piVar23) goto LAB_1414fea9a;
        }
        if (_DAT_1418be238 != 1) {
LAB_1414fe6e0:
          lVar24 = param_1[0x241];
          if (lVar24 == 0) goto LAB_1414fe75a;
          if ((plVar39[0x241] != 0) && (*(int *)(lVar24 + 0x44) == *(int *)(plVar39[0x241] + 0x44)))
          goto LAB_1414fea9a;
          iVar34 = *(int *)(lVar24 + 4);
          if (iVar34 == -1) {
LAB_1414fe75a:
            if ((&stack0x00000028)[lVar20] != '\0') {
              sVar14 = *(short *)((longlong)plVar39 + 300);
              sVar16 = *(short *)((longlong)plVar39 + 0xa4);
              if ((((-1 < sVar16) &&
                   ((ulonglong)(longlong)sVar16 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))
                   ) && (-1 < sVar14)) &&
                 ((lVar24 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar16 * 8),
                  lVar42 = *(longlong *)(lVar24 + 0x178),
                  (ulonglong)(longlong)sVar14 <
                  (ulonglong)(*(longlong *)(lVar24 + 0x180) - lVar42 >> 3) &&
                  (lVar24 = *(longlong *)(lVar42 + (longlong)sVar14 * 8), lVar24 != 0)))) {
                lVar24 = lVar24 + 0x3eb0;
                uVar41 = *(ulonglong *)(lStack_10d0 + 0x42a0);
                for (uVar22 = *(ulonglong *)(lStack_10d0 + 0x4298); uVar22 < uVar41;
                    uVar22 = uVar22 + 8) {
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe803;
                  cVar11 = FUN_1406d20e0(lVar24);
                  if (cVar11 != '\0') goto LAB_1414fe904;
                }
                if ((*(byte *)((longlong)param_1 + 0x824) & 1) != 0) {
                  puVar45 = (undefined8 *)param_1[0x195];
                  for (puVar21 = (undefined8 *)param_1[0x194]; puVar21 < puVar45;
                      puVar21 = puVar21 + 1) {
                    piVar23 = (int *)*puVar21;
                    plVar26 = *(longlong **)(piVar23 + 0xe);
                    puVar32 = *(undefined8 **)
                               (*(longlong *)(_DAT_14251ba88 + (longlong)*piVar23 * 8) + 0x20);
                    uVar12 = (&stack0x00000034)[lVar20];
                    for (plVar43 = *(longlong **)(piVar23 + 0xc); plVar43 != plVar26;
                        plVar43 = plVar43 + 1) {
                      (&stack0x00000030)[lVar20] = uVar12;
                      *(short *)(&stack0x00000038 + lVar20) = sVar30;
                      (&stack0x00000034)[lVar20] = uVar12;
                      if (plVar26 <= plVar43) break;
                      if (((*(uint *)(*plVar43 + 0x88) & 1) == 0) &&
                         ((*(uint *)(*plVar43 + 0x88) & 2) != 0)) {
                        pcVar4 = (code *)**(undefined8 **)*puVar32;
                        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe89d;
                        sVar15 = (*pcVar4)();
                        if (sVar15 == 0x20) {
                          sVar30 = *(short *)(&stack0x00000038 + lVar20);
                          (&stack0x00000034)[lVar20] = (&stack0x00000030)[lVar20];
                          *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe8c7;
                          cVar10 = FUN_1406d20e0(lVar24);
                          if (cVar10 != '\0') {
                            cVar10 = (&stack0x00000034)[lVar20];
                            sVar15 = sVar30;
                            goto LAB_1414fe904;
                          }
                        }
                      }
                      puVar32 = puVar32 + 1;
                      sVar30 = *(short *)(&stack0x00000038 + lVar20);
                      uVar12 = (&stack0x00000030)[lVar20];
                      (&stack0x00000034)[lVar20] = uVar12;
                    }
                  }
                  cVar10 = (&stack0x00000034)[lVar20];
                  sVar15 = sVar30;
                }
              }
            }
            iVar31 = (int)(short)plVar39[0x15] - (int)(short)param_1[0x15];
            if (((iVar31 + 0x1aU < 0x35) &&
                (iVar44 = (int)*(short *)((longlong)plVar39 + 0xaa) -
                          (int)*(short *)((longlong)param_1 + 0xaa), iVar44 + 0x1aU < 0x34)) &&
               (iVar34 = (int)*(short *)((longlong)plVar39 + 0xac) -
                         (int)*(short *)((longlong)param_1 + 0xac), iVar34 + 0x1aU < 0x35)) {
              iVar35 = -iVar34;
              if (-iVar34 < 0) {
                iVar35 = iVar34;
              }
              iVar36 = -iVar44;
              if (-iVar44 < 0) {
                iVar36 = iVar44;
              }
              iVar34 = -iVar31;
              if (-iVar31 < 0) {
                iVar34 = iVar31;
              }
              iVar34 = iVar35 + iVar36 + iVar34;
              piStack_10e0 = (int *)CONCAT44(piStack_10e0._4_4_,iVar34);
              if (((short)plVar39[0x100] < 1) && (cVar11 = (char)plVar39[0x286], cVar11 != '\0')) {
                if ((cVar11 == '\x01') || (cVar11 == '\x02')) {
LAB_1414febaa:
                  bVar46 = true;
                }
                else {
                  uVar38 = *(undefined2 *)((longlong)plVar39 + 300);
                  uVar2 = *(undefined2 *)((longlong)plVar39 + 0xa4);
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414feb9b;
                  cVar11 = func_0x00014071b820(0x14250eec8,uVar2,uVar38);
                  if (cVar11 == '\0') {
                    *(undefined1 *)(plVar39 + 0x286) = 0;
                    goto LAB_1414febcc;
                  }
                  if (cVar11 != '\"') {
                    *(undefined1 *)(plVar39 + 0x286) = 1;
                    goto LAB_1414febaa;
                  }
                  *(undefined1 *)(plVar39 + 0x286) = 2;
                  pcVar4 = *(code **)(*plVar39 + 0x10);
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414febbe;
                  cVar11 = (*pcVar4)(plVar39);
                  bVar46 = cVar11 != '\0';
                }
              }
              else {
LAB_1414febcc:
                bVar46 = false;
              }
              sVar14 = *(short *)(((longlong)iVar31 * 0x35 + (longlong)iVar44) * 2 + 0x14250b06c);
              *(short *)(&stack0x00000038 + lVar20) = sVar14;
              sVar16 = (short)puStack_1098;
              if (bVar46) {
                sVar16 = sVar13;
              }
              if (sVar14 <= sVar16) {
                *(undefined4 *)(&stack0xfffffffffffffff8 + lVar20) = piStack_10e8._0_4_;
                *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) =
                     *(undefined2 *)((longlong)param_1 + 0xac);
                *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) =
                     *(undefined2 *)((longlong)param_1 + 0xaa);
                lVar24 = param_1[0x15];
                uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                lVar42 = plVar39[0x15];
                *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fec49;
                cVar11 = FUN_140aa84d0((short)lVar42,uVar2,uVar38,(short)lVar24);
                if (cVar11 != '\0') {
                  lVar24 = 0;
                  if (0 < lStack_1068) {
                    do {
                      if (aiStack_378[lVar24] == (int)plVar39[0x26]) goto LAB_1414fe9c2;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 < lStack_1068);
                  }
                  if (_DAT_1418be238 == 1) {
                    if (sVar14 < 0xb) {
                      iVar34 = (int)(short)plVar39[0x15] - (int)(short)param_1[0x15];
                      iVar31 = (int)*(short *)((longlong)plVar39 + 0xaa) -
                               (int)*(short *)((longlong)param_1 + 0xaa);
                      if (((iVar34 + 10U < 0x15) && (iVar31 + 10U < 0x15)) &&
                         (cVar11 = *(char *)((longlong)iVar34 * 0x15 + param_1[0x279] + 0xdc +
                                            (longlong)iVar31), (&stack0x00000030)[lVar20] = cVar11,
                         cVar11 != '\0')) goto LAB_1414fed9a;
                      goto LAB_1414fea91;
                    }
                    if ((cVar10 != '\0') || (sVar15 == 0x168)) goto LAB_1414fed91;
                    if (((short)puStack_10c0 == 0x168) && (sVar15 == 0)) {
                      (&stack0x00000030)[lVar20] = 1;
                    }
                    else {
                      iVar34 = (iVar44 * (int)param_1[0x97] +
                               iVar31 * *(int *)((longlong)param_1 + 0x4b4)) * 100;
                      auVar51._0_8_ = (double)(iVar44 * iVar44 + iVar31 * iVar31);
                      auVar51._8_8_ = 0;
                      if (auVar51._0_8_ < 0.0) {
                        *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414fed6c;
                        dVar48 = (double)func_0x0001415548d0();
                      }
                      else {
                        auVar49 = sqrtpd(ZEXT816(0),auVar51);
                        dVar48 = auVar49._0_8_;
                      }
                      if ((int)(dVar48 * dVar47) * iStack_1090 <= iVar34) goto LAB_1414fed91;
                      if (iVar34 < (int)(dVar48 * dVar47) * iStack_1088) goto LAB_1414fea91;
                      (&stack0x00000030)[lVar20] = 1;
                    }
                  }
                  else {
LAB_1414fed91:
                    (&stack0x00000030)[lVar20] = 2;
                  }
LAB_1414fed9a:
                  uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                  uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                  lVar24 = plVar39[0x15];
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fedc1;
                  puVar21 = (undefined8 *)FUN_1414bbbe0(0x1423f3970,(short)lVar24,uVar2,uVar38);
                  if (puVar21 == (undefined8 *)0x0) {
LAB_1414fedde:
                    uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                    uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                    uVar3 = (undefined2)plVar39[0x15];
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fee05;
                    uVar18 = func_0x000140069640(0x1423f3970,uVar3,uVar2);
                    if ((uVar18 >> 0x17 & 1) != 0) {
                      sVar14 = 0xf;
                      goto LAB_1414feef7;
                    }
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fee24;
                    uVar18 = func_0x00014007f270(0x1423f3970,uVar3,uVar2);
                    if ((uVar18 >> 0xe & 1) == 0) {
                      sVar14 = 3;
                      goto LAB_1414feef7;
                    }
                    *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) = uVar38;
                    *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) = uVar2;
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fee4d;
                    FUN_14007f300(0x1423f3970,auStack_10f4,auStack_10f8,uVar3);
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fee62;
                    sVar16 = FUN_140f94110(_DAT_14250dfd8,auStack_10f4[0],auStack_10f8[0]);
                    if (0x19 < sVar16) {
                      sVar16 = 0x19;
                    }
                    iVar34 = (int)(short)plVar39[0x15] / 0x30 + _DAT_14250a568;
                    *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) =
                         *(undefined2 *)((longlong)plVar39 + 0xac);
                    *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) =
                         *(undefined2 *)((longlong)plVar39 + 0xaa);
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414feec4;
                    FUN_14007f300(0x1423f3970,auStack_10ec,auStack_10f0);
                    *(undefined2 *)(&stack0xffffffffffffffe8 + lVar20) = auStack_10f0[0];
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414feee1;
                    sVar14 = FUN_140f93f50(_DAT_14250dfd8,
                                           (int)((iVar34 >> 0x1f & 0xfU) + iVar34) >> 4 & 0xffff);
                    if (sVar14 < 0x1a) {
                      if (0x18 < sVar14) goto LAB_1414fef2f;
                      goto LAB_1414feefc;
                    }
                    sVar14 = 0x19;
                  }
                  else {
                    pcVar4 = *(code **)*puVar21;
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fedce;
                    sVar14 = (*pcVar4)(puVar21);
                    if (sVar14 != 9) goto LAB_1414fedde;
                    sVar14 = 0xf;
LAB_1414feef7:
                    sVar16 = 0x19;
LAB_1414feefc:
                    iVar31 = (((int)puStack_10b8 + 100) * (int)sVar14) / 100;
                    iVar34 = sVar14 + 1;
                    if (iVar34 <= iVar31) {
                      iVar34 = iVar31;
                    }
                    sVar14 = (short)iVar34;
                    if (0x19 < iVar34) {
                      sVar14 = 0x19;
                    }
                  }
LAB_1414fef2f:
                  if (sVar14 <= sVar16) {
                    sVar16 = sVar14;
                  }
                  plStack_10b0 = (longlong *)CONCAT44(plStack_10b0._4_4_,(int)sVar16);
                  bVar46 = false;
                  lVar24 = plVar39[0x15];
                  uVar17 = piStack_10e8._0_4_;
                  if (0 < (short)lVar24) {
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = piStack_10e8._0_4_;
                    uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                    uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fef73;
                    cVar11 = FUN_1414ba7a0(0x1423f3970,(short)lVar24 + -1,uVar2,uVar38);
                    bVar46 = false;
                    if (cVar11 == '\0') {
                      bVar46 = true;
                    }
                  }
                  sVar14 = (short)plVar39[0x15];
                  if ((int)sVar14 < _DAT_14250a55c + -1) {
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = uVar17;
                    uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                    uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fefb7;
                    cVar11 = FUN_1414ba7a0(0x1423f3970,CONCAT22(sVar14 >> 0xf,sVar14 + 1),uVar2,
                                           uVar38);
                    if (cVar11 == '\0') {
                      bVar46 = true;
                    }
                  }
                  sVar14 = *(short *)((longlong)plVar39 + 0xaa);
                  if (0 < sVar14) {
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = uVar17;
                    uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                    lVar24 = plVar39[0x15];
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414feff6;
                    cVar11 = FUN_1414ba7a0(0x1423f3970,(short)lVar24,sVar14 + -1,uVar38);
                    if (cVar11 == '\0') {
                      bVar46 = true;
                    }
                  }
                  sVar14 = *(short *)((longlong)plVar39 + 0xaa);
                  if ((int)sVar14 < _DAT_14250a560 + -1) {
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = uVar17;
                    uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                    lVar24 = plVar39[0x15];
                    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff03c;
                    cVar11 = FUN_1414ba7a0(0x1423f3970,(short)lVar24,
                                           CONCAT22(sVar14 >> 0xf,sVar14 + 1),uVar38);
                    if (cVar11 != '\0') goto LAB_1414ff040;
                  }
                  else {
LAB_1414ff040:
                    if (!bVar46) goto LAB_1414ff04f;
                  }
                  plStack_10b0 = (longlong *)CONCAT44(plStack_10b0._4_4_,(int)sVar16 / 2);
LAB_1414ff04f:
                  iVar34 = *(int *)((longlong)plVar39 + 0x6b4);
                  iVar31 = (int)(iVar34 + (iVar34 >> 0x1f & 3U)) >> 2;
                  if ((*(uint *)(plVar39 + 0x22) & 0x8000) == 0) {
                    iVar31 = iVar34;
                  }
                  uVar18 = 0;
                  uVar38 = *(undefined2 *)((longlong)plVar39 + 0xac);
                  uVar2 = *(undefined2 *)((longlong)plVar39 + 0xaa);
                  lVar24 = plVar39[0x15];
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff0a2;
                  sVar14 = func_0x0001400695b0(0x1423f3970,(short)lVar24,uVar2,uVar38);
                  if ((sVar14 == 0x22) || (sVar14 == 0x185)) {
                    uVar18 = 400;
                  }
                  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff0cb;
                  lVar24 = FUN_1414ea5a0(0x1423f3970,(short)lVar24,uVar2);
                  if ((((lVar24 != 0) && (iVar34 = *(int *)(lVar24 + 8), -1 < iVar34)) &&
                      ((ulonglong)(longlong)iVar34 <
                       (ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3))) &&
                     (*(longlong *)(_DAT_14250ed78 + (longlong)iVar34 * 8) != 0)) {
                    uVar19 = (int)(short)plVar39[0x15] & 0x8000000f;
                    if ((int)uVar19 < 0) {
                      uVar19 = (uVar19 - 1 | 0xfffffff0) + 1;
                    }
                    uVar27 = (int)*(short *)((longlong)plVar39 + 0xaa) & 0x8000000f;
                    if ((int)uVar27 < 0) {
                      uVar27 = (uVar27 - 1 | 0xfffffff0) + 1;
                    }
                    bVar1 = *(byte *)((longlong)(short)uVar27 + 0xc +
                                     (longlong)(short)uVar19 * 0x10 + lVar24);
                    if (bVar1 < 0x43) {
                      if ((0x21 < bVar1) && (uVar18 < 200)) {
                        uVar18 = 200;
                      }
                    }
                    else if (uVar18 < 400) {
                      uVar18 = 400;
                    }
                  }
                  iVar34 = (int)plStack_10b0;
                  if (iVar31 < (int)uVar18) {
                    iVar34 = (int)plStack_10b0 / 2;
                  }
                  iVar44 = (int)((iVar34 >> 0x1f & 3U) + iVar34) >> 2;
                  if ((&stack0x00000030)[lVar20] != '\x01') {
                    iVar44 = iVar34;
                  }
                  puVar21 = (undefined8 *)plVar39[0xfa];
                  iVar34 = 10000;
LAB_1414ff1c0:
                  if ((undefined8 *)plVar39[0xfb] <= puVar21) goto LAB_1414ff20b;
                  puVar37 = (undefined4 *)*puVar21;
                  switch(*puVar37) {
                  case 0:
                    if ((int)puVar37[5] < iVar34) {
                      puVar21 = puVar21 + 1;
                      iVar34 = puVar37[5];
                      goto LAB_1414ff1c0;
                    }
                    break;
                  case 1:
                  case 2:
                  case 9:
                  case 10:
                  case 0xb:
                    iVar31 = iVar31 * 2;
                    break;
                  case 5:
                    if (iVar34 <= (int)puVar37[8]) break;
                    puVar21 = puVar21 + 1;
                    iVar34 = puVar37[8];
                    goto LAB_1414ff1c0;
                  }
                  puVar21 = puVar21 + 1;
                  goto LAB_1414ff1c0;
                }
              }
            }
          }
          else {
            if (iVar34 != (int)plVar39[0x28]) {
              lVar24 = plVar39[0x186];
              *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe72f;
              lVar24 = FUN_140b6ad70(0x14251c138,(int)lVar24,(longlong)plVar39 + 0x1274);
              if (lVar24 != 0) {
                *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe741;
                sVar14 = FUN_140baf080(lVar24,0,iVar34);
                if (sVar14 != 0) goto LAB_1414fe746;
              }
              goto LAB_1414fe75a;
            }
LAB_1414fe746:
            *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe751;
            iVar34 = FUN_1414fc280();
            if (iVar34 != -1) goto LAB_1414fe75a;
          }
          goto LAB_1414fea91;
        }
        if ((*(int *)((longlong)param_1 + 0x4b4) != 0) || ((int)param_1[0x97] != 0)) {
          if ((param_1[0x279] == 0) || ((*(uint *)(param_1 + 0x23) & 0x800000) != 0)) {
            *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe6d7;
            FUN_1414029e0(param_1);
            iVar34 = *(int *)(&stack0x0000002c + lVar20);
          }
          goto LAB_1414fe6e0;
        }
        goto LAB_1414fea9a;
      }
      goto LAB_1414fea9f;
    }
    goto LAB_1414feac9;
  }
  if (_DAT_1418be238 == 1) {
LAB_1414ff47c:
    plVar29 = &lStack_1008;
    puVar37 = (undefined4 *)((longlong)param_1 + 0xec4);
    plVar39 = plStack_10d8 + 4;
    bVar46 = false;
    bVar7 = false;
    if (0 < (int)uStack_388) {
      uVar22 = (ulonglong)uStack_388;
      do {
        lVar24 = *plVar29;
        *puVar37 = *(undefined4 *)(lVar24 + 0x130);
        *plVar39 = lVar24;
        if ((*(uint *)(lVar24 + 0x11c) & 4) != 0) {
          bVar46 = true;
        }
        if ((*(uint *)(lVar24 + 0x11c) & 8) != 0) {
          bVar7 = true;
        }
        plVar29 = plVar29 + 2;
        puVar37 = puVar37 + 1;
        plVar39 = plVar39 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      if (((bVar46) || (bVar7)) && (lVar24 = param_1[0x153], lVar24 != 0)) {
        puVar45 = *(undefined8 **)(lVar24 + 0x388);
        for (puVar21 = *(undefined8 **)(lVar24 + 0x380); puVar21 < puVar45; puVar21 = puVar21 + 1) {
          iVar34 = *(int *)*puVar21;
          bVar6 = bVar7;
          if (((iVar34 == 0x12) || (bVar6 = bVar46, iVar34 == 0x13)) && (bVar6)) {
            ((int *)*puVar21)[2] = 400;
            *(uint *)(param_1[0x153] + 0x398) = *(uint *)(param_1[0x153] + 0x398) & 0xfffffffe;
          }
        }
      }
    }
  }
  else {
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff35b;
    uVar18 = FUN_140ece790();
    if (uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x28f5c29
       ) goto LAB_1414ff47c;
    plVar29 = &lStack_1008;
    puVar37 = (undefined4 *)((longlong)param_1 + 0xec4);
    plVar39 = plStack_10d8 + 4;
    if (0 < (int)uStack_388) {
      uVar22 = (ulonglong)uStack_388;
      do {
        lVar24 = *plVar29;
        *puVar37 = *(undefined4 *)(lVar24 + 0x130);
        *plVar39 = lVar24;
        plVar29 = plVar29 + 2;
        puVar37 = puVar37 + 1;
        plVar39 = plVar39 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  param_2 = plStack_10d8;
  *(uint *)((longlong)param_1 + 0x11e4) = uStack_388;
  *(uint *)(plStack_10d8 + 0xcc) = uStack_388;
  if (_DAT_1418be238 != 1) {
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff3ee;
    uVar18 = FUN_140ece790();
    if (0x28f5c28 < uVar18 + (int)((longlong)((ulonglong)uVar18 * 0x100000003) >> 0x3f) * 0x7fffffff
       ) goto LAB_1414ffcd7;
  }
  plVar39 = _DAT_142408208;
  if (((*(short *)((longlong)param_1 + 0x814) == -1) && ((short)param_1[0x6c] == -1)) &&
     (param_1[0x1b0] == 0)) {
    if (((int)param_1[0x250] < 8) || ((*(byte *)(param_1[0x24f] + 7) & 4) == 0)) {
      if (((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) != 0) ||
         ((*(uint *)(param_1 + 0x105) & 0x2000000) == 0)) goto LAB_1414ffcd7;
    }
    else if ((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) != 0) goto LAB_1414ffcd7;
    plVar29 = _DAT_142408200;
    if ((param_1[0x9b] == 0) || (*(short *)(param_1[0x9b] + 0x14) != 0xdd)) {
LAB_1414ff5b3:
      param_2 = plStack_10d8;
      if (plVar39 <= plVar29) goto LAB_1414ffcd7;
      lVar24 = *plVar29;
      if ((*(int *)(lVar24 + 0xc0) == -1) || ((*(byte *)(lVar24 + 0x10) & 1) == 0))
      goto LAB_1414ff748;
      *(undefined2 *)(&stack0x00000028 + lVar20) = 0x8ad0;
      if ((*(uint *)(lVar24 + 0x10) & 0x10) != 0) goto LAB_1414ff748;
      if ((*(uint *)(lVar24 + 0x10) & 8) == 0) {
        sVar30 = *(short *)(lVar24 + 8);
        *(short *)(&stack0x00000028 + lVar20) = sVar30;
        sVar15 = *(short *)(lVar24 + 10);
        *(short *)(&stack0x00000030 + lVar20) = sVar15;
        uVar38 = *(undefined2 *)(lVar24 + 0xc);
LAB_1414ff6d8:
        *(undefined2 *)(&stack0x00000034 + lVar20) = uVar38;
      }
      else {
        puVar45 = *(undefined8 **)(lVar24 + 0x40);
        for (puVar21 = *(undefined8 **)(lVar24 + 0x38); puVar21 < puVar45; puVar21 = puVar21 + 1) {
          pcVar4 = *(code **)(*(longlong *)*puVar21 + 0x10);
          *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff60e;
          iVar34 = (*pcVar4)();
          if (iVar34 == 0xb) {
            pcVar4 = *(code **)(*(longlong *)*puVar21 + 0x18);
            *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff655;
            lVar42 = (*pcVar4)();
            if (lVar42 != 0) {
              *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414ff677;
              FUN_140ca3790(lVar42,&stack0x00000028 + lVar20,&stack0x00000030 + lVar20,
                            &stack0x00000034 + lVar20);
              goto LAB_1414ff677;
            }
          }
          else if (iVar34 == 0x12) {
            pcVar4 = *(code **)(*(longlong *)*puVar21 + 0x20);
            *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff621;
            lVar42 = (*pcVar4)();
            if (lVar42 != 0) {
              *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff63d;
              FUN_14137fd40(lVar42,&stack0x00000028 + lVar20,&stack0x00000030 + lVar20,
                            &stack0x00000034 + lVar20);
              sVar15 = *(short *)(&stack0x00000030 + lVar20);
              sVar30 = *(short *)(&stack0x00000028 + lVar20);
              goto LAB_1414ff6dd;
            }
          }
        }
        for (puVar21 = *(undefined8 **)(lVar24 + 0x20); puVar21 < *(undefined8 **)(lVar24 + 0x28);
            puVar21 = puVar21 + 1) {
          if (*(int *)*puVar21 == 7) {
            lVar42 = *(longlong *)((int *)*puVar21 + 2);
            sVar30 = *(short *)(lVar42 + 4);
            *(short *)(&stack0x00000028 + lVar20) = sVar30;
            sVar15 = *(short *)(lVar42 + 6);
            *(short *)(&stack0x00000030 + lVar20) = sVar15;
            uVar38 = *(undefined2 *)(lVar42 + 8);
            goto LAB_1414ff6d8;
          }
        }
LAB_1414ff677:
        sVar15 = *(short *)(&stack0x00000030 + lVar20);
        sVar30 = *(short *)(&stack0x00000028 + lVar20);
      }
LAB_1414ff6dd:
      if (sVar30 == -30000) goto LAB_1414ffcb3;
      sVar14 = *(short *)((longlong)param_1 + 0xaa);
      uVar18 = (uint)(short)param_1[0x15];
      if (_DAT_1418be238 == 1) {
        if (((((int)sVar30 - uVar18) + 0x1a < 0x35) && (((int)sVar15 - (int)sVar14) + 0x1aU < 0x35))
           && (*(short *)(((longlong)(int)((int)sVar30 - uVar18) * 0x35 +
                          (longlong)((int)sVar15 - (int)sVar14)) * 2 + 0x14250b06c) <= sVar13)) {
LAB_1414ff7b6:
          *(undefined4 *)(&stack0xfffffffffffffff8 + lVar20) = piStack_10e8._0_4_;
          *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) =
               *(undefined2 *)(&stack0x00000034 + lVar20);
          *(short *)(&stack0xffffffffffffffe8 + lVar20) = sVar15;
          uVar38 = *(undefined2 *)((longlong)param_1 + 0xac);
          *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff7e5;
          cVar10 = FUN_140aa84d0(uVar18 & 0xffff,sVar14,uVar38,sVar30);
          if (cVar10 == '\0') goto LAB_1414ff748;
          iVar34 = *(int *)(lVar24 + 0xc0);
          iVar31 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
          if ((iVar31 != 0) && (iVar34 != -1)) {
            uVar40 = 0;
            iVar31 = iVar31 + -1;
            uVar41 = uVar40;
            uVar22 = uVar40;
            if (-1 < iVar31) {
              do {
                iVar35 = (int)uVar41 + iVar31 >> 1;
                uVar22 = *(ulonglong *)(_DAT_142407530 + (longlong)iVar35 * 8);
                iVar44 = *(int *)(uVar22 + 0x130);
                if (iVar44 == iVar34) break;
                iVar36 = iVar35 + -1;
                if (iVar44 < iVar34) {
                  uVar41 = (ulonglong)(iVar35 + 1);
                  iVar36 = iVar31;
                }
                iVar31 = iVar36;
                uVar22 = uVar40;
              } while ((int)uVar41 <= iVar31);
            }
            if (uVar22 != 0) {
              uVar41 = _DAT_14250a1a0 - _DAT_14250a198 >> 3;
              uVar18 = (uint)uVar41;
              if (uVar18 == 0) {
                iVar34 = -1;
                uVar40 = 0xffffffff;
              }
              else {
                while (uVar19 = (uint)uVar40, 0x40 < (int)uVar18) {
                  uVar18 = (uint)(uVar41 >> 1) & 0x7fffffff;
                  uVar27 = uVar18 + uVar19;
                  if (*(int *)(uVar22 + 0x7f8) <
                      **(int **)(_DAT_14250a198 + (longlong)(int)uVar27 * 8)) {
                    uVar27 = uVar19;
                  }
                  uVar40 = (ulonglong)uVar27;
                  uVar18 = (int)uVar41 - uVar18;
                  uVar41 = (ulonglong)uVar18;
                }
                iVar34 = uVar18 + uVar19;
              }
              if ((iVar34 != -1) && ((int)uVar40 < iVar34)) {
                lVar24 = (longlong)(int)uVar40;
                do {
                  iVar31 = (int)uVar40;
                  if (*(int *)(uVar22 + 0x7f8) == **(int **)(_DAT_14250a198 + lVar24 * 8)) {
                    lVar24 = *(longlong *)(_DAT_14250a198 + (longlong)iVar31 * 8);
                    cStack_1040 = (char)lVar24;
                    uStack_103f = (undefined7)((ulonglong)lVar24 >> 8);
                    iStack_1078 = -1;
                    cStack_1070 = '\0';
                    uStack_106f = 0;
                    auStack_1058._4_4_ = uStack_1044;
                    auStack_1058._0_4_ = iVar31;
                    auStack_1058[8] = cStack_1040;
                    auStack_1058._9_7_ = uStack_103f;
                    iStack_1048 = iVar31;
                    if (lVar24 == 0) goto LAB_1414ff748;
                    uVar5 = auStack_1058._8_8_;
                    if (((_DAT_1418be238 == 0) && ((*(byte *)(lVar24 + 0xec) & 2) == 0)) &&
                       (*(int *)(lVar24 + 0xd0) == -1)) {
                      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff962;
                      cVar10 = func_0x0001413a7620(uVar22);
                      if ((cVar10 != '\0') ||
                         ((*(int *)(uVar22 + 0x140) != -1 &&
                          (*(int *)(uVar22 + 0x140) == _DAT_1423b5af0)))) {
                        lVar24 = uVar22 + 0x1448;
                        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff989;
                        iVar34 = _Mtx_trylock(lVar24);
                        cStack_1030 = iVar34 == 0;
                        lStack_1038 = lVar24;
                        if (iVar34 == 0) {
                          iVar34 = *(int *)(uVar5 + 0xf0);
                          *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff9ae;
                          FUN_1413feb00(uVar22,0,(short)iVar34);
                          *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414ff9bc;
                          _Mtx_unlock(lVar24);
                        }
                      }
                    }
                    if ((int)param_1[0x26] == *(int *)(uVar5 + 0x68)) goto LAB_1414ff748;
                    plVar43 = param_1 + 0x1b7;
                    puVar21 = (undefined8 *)param_1[0x3b];
                    puVar45 = (undefined8 *)param_1[0x3c];
                    goto LAB_1414ff9e3;
                  }
                  uVar40 = (ulonglong)(iVar31 + 1);
                  lVar24 = lVar24 + 1;
                } while (lVar24 < iVar34);
              }
              cStack_1070 = '\0';
              uStack_106f = 0;
              iStack_1078 = -1;
              auStack_1058._4_4_ = uStack_1074;
              auStack_1058._0_4_ = 0xffffffff;
              auStack_1058._8_8_ = 0;
              plVar29 = plVar29 + 1;
              goto LAB_1414ff5b3;
            }
          }
        }
      }
      else {
        iVar31 = (int)(short)((short)param_1[0x15] - sVar30);
        iVar34 = (int)(short)(*(short *)((longlong)param_1 + 0xac) -
                             *(short *)(&stack0x00000034 + lVar20));
        fVar50 = (float)(iVar34 * iVar34 + iVar31 * iVar31 +
                        (int)(short)(sVar14 - sVar15) * (int)(short)(sVar14 - sVar15));
        if (fVar50 < 0.0) {
          *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff7a4;
          fVar50 = (float)func_0x0001415548d6();
          uVar18 = (uint)*(ushort *)(param_1 + 0x15);
        }
        else {
          fVar50 = SQRT(fVar50);
        }
        if ((short)(int)fVar50 < 5) goto LAB_1414ff7b6;
      }
LAB_1414ff748:
      plVar29 = plVar29 + 1;
      goto LAB_1414ff5b3;
    }
  }
LAB_1414ffcd7:
  if (bVar8) {
    iStack_1110 = -1;
    uStack_1028 = 0;
    uStack_1020 = 0;
    uStack_1018 = 0;
    puVar45 = (undefined8 *)param_1[0x164];
    for (puVar21 = (undefined8 *)param_1[0x163]; puVar21 < puVar45; puVar21 = puVar21 + 2) {
      iVar34 = *(int *)*puVar21;
      iVar31 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
      if ((iVar31 != 0) && (iVar34 != -1)) {
        iVar31 = iVar31 + -1;
        iVar44 = 0;
        lVar24 = 0;
        if (-1 < iVar31) {
          do {
            iVar36 = iVar44 + iVar31 >> 1;
            lVar24 = *(longlong *)(_DAT_142407530 + (longlong)iVar36 * 8);
            iVar35 = *(int *)(lVar24 + 0x130);
            if (iVar35 == iVar34) break;
            iVar9 = iVar36 + -1;
            if (iVar35 < iVar34) {
              iVar9 = iVar31;
              iVar44 = iVar36 + 1;
            }
            iVar31 = iVar9;
            lVar24 = 0;
          } while (iVar44 <= iVar31);
        }
        if (lVar24 != 0) {
          uVar17 = *(undefined4 *)(lVar24 + 0x130);
          *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414ffd8f;
          FUN_1400bb4a0(uVar17,&uStack_1028);
        }
      }
    }
    piVar23 = (int *)param_1[0x61];
    lVar24 = _DAT_142505ca0;
    piStack_10e8 = piVar23;
    for (piStack_10e0 = (int *)param_1[0x60]; piStack_10e0 < piVar23;
        piStack_10e0 = piStack_10e0 + 1) {
      iVar34 = *piStack_10e0;
      lVar42 = _DAT_142505ca8 - lVar24 >> 3;
      if ((lVar42 != 0) && (iVar34 != -1)) {
        iVar31 = 0;
        iVar44 = (int)lVar42 + -1;
        if (-1 < iVar44) {
          do {
            iVar35 = iVar31 + iVar44 >> 1;
            piVar33 = *(int **)(lVar24 + (longlong)iVar35 * 8);
            if (*piVar33 == iVar34) goto LAB_1414ffe22;
            iVar36 = iVar35 + -1;
            if (*piVar33 < iVar34) {
              iVar36 = iVar44;
              iVar31 = iVar35 + 1;
            }
            iVar44 = iVar36;
          } while (iVar31 <= iVar44);
        }
        piVar33 = (int *)0x0;
LAB_1414ffe22:
        if ((piVar33 != (int *)0x0) && ((short)piVar33[1] == 2)) {
          puStack_10c0 = *(undefined8 **)(piVar33 + 4);
          for (puVar21 = *(undefined8 **)(piVar33 + 2); piVar23 = piStack_10e8,
              lVar24 = _DAT_142505ca0, uStack_10a8 = puVar21, puVar21 < puStack_10c0;
              puVar21 = puVar21 + 1) {
            pcVar4 = (code *)**(undefined8 **)*puVar21;
            *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffe59;
            sVar13 = (*pcVar4)();
            plVar39 = plStack_10d8;
            if ((sVar13 == 8) &&
               (plStack_10c8 = (longlong *)*puVar21,
               (*(byte *)((longlong)plStack_10c8 + 0x14) & 1) == 0)) {
              puVar32 = (undefined8 *)plStack_10c8[10];
              puStack_10b8 = puVar32;
              for (puVar45 = (undefined8 *)plStack_10c8[9]; puVar21 = uStack_10a8,
                  puStack_1098 = puVar45, puVar45 < puVar32; puVar45 = puVar45 + 1) {
                piVar23 = (int *)*puVar45;
                *(int **)(&stack0x00000040 + lVar20) = piVar23;
                lVar24 = param_1[0x186];
                *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffeb2;
                FUN_1400bc210(&lStack_1038,piVar23 + 2,(int)lVar24);
                plStack_10a0._0_4_ = -1;
                plStack_10a0 = (longlong *)0xffffffff;
                iVar34 = (int)plStack_10a0;
                if (cStack_1030 != '\0') {
                  iVar34 = (int)lStack_1038;
                }
                if (iVar34 != -1) {
LAB_1414fff02:
                  if (piVar23[0x15] == -1) {
                    *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414fff10;
                    FUN_141532f20(piVar23);
                  }
                  plVar29 = plStack_10c8;
                  if ((int)plVar39[2] < piVar23[0x15]) {
                    *(int *)(plVar39 + 2) = piVar23[0x15];
                  }
                  if ((int)plVar39[3] < piVar23[0x14] - piVar23[0x15]) {
                    *(int *)(plVar39 + 3) = piVar23[0x14] - piVar23[0x15];
                  }
                  plVar43 = *(longlong **)(piVar23 + 0xe);
                  plVar26 = *(longlong **)(piVar23 + 0x10);
                  plStack_10b0 = plVar26;
LAB_1414fff41:
                  while (puVar32 = puStack_10b8, puVar45 = puStack_1098, plVar43 < plVar26) {
                    iVar34 = *(int *)*plVar43;
                    if (iVar34 == *piVar23) goto LAB_14150052d;
                    if ((((int *)*plVar43)[1] == 0) && (param_1[0x1b0] == 0)) {
                      if (((int)param_1[0x250] < 8) || ((*(byte *)(param_1[0x24f] + 7) & 4) == 0)) {
                        if (((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) == 0) &&
                           ((*(uint *)(param_1 + 0x105) & 0x2000000) != 0)) goto LAB_14150052d;
                        goto LAB_1414fffbe;
                      }
                      if ((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) != 0)
                      goto LAB_1414fffbe;
                      plVar43 = plVar43 + 1;
                    }
                    else {
LAB_1414fffbe:
                      lVar24 = plVar29[9];
                      uVar22 = plVar29[10] - lVar24 >> 3;
                      uVar18 = (uint)uVar22;
                      if (uVar18 == 0) {
                        iVar44 = -1;
                        iVar31 = -1;
                      }
                      else {
                        iVar31 = 0;
                        while (0x40 < (int)uVar18) {
                          uVar18 = (uint)(uVar22 >> 1) & 0x7fffffff;
                          iVar44 = uVar18 + iVar31;
                          if (iVar34 < **(int **)(lVar24 + (longlong)iVar44 * 8)) {
                            iVar44 = iVar31;
                          }
                          uVar18 = (int)uVar22 - uVar18;
                          uVar22 = (ulonglong)uVar18;
                          iVar31 = iVar44;
                        }
                        iVar44 = iVar31 + uVar18;
                      }
                      if ((iVar44 == -1) || (iVar44 <= iVar31)) goto LAB_141500528;
                      lVar42 = (longlong)iVar31;
                      puVar21 = (undefined8 *)(lVar24 + lVar42 * 8);
                      do {
                        if (iVar34 == *(int *)*puVar21) {
                          lVar24 = *(longlong *)(lVar24 + (longlong)iVar31 * 8);
                          if (lVar24 == 0) goto LAB_141500528;
                          (&stack0x00000028)[lVar20] = 0;
                          piVar23 = *(int **)(lVar24 + 0x20);
                          piVar33 = *(int **)(lVar24 + 0x28);
                          goto LAB_141500080;
                        }
                        iVar31 = iVar31 + 1;
                        lVar42 = lVar42 + 1;
                        puVar21 = puVar21 + 1;
                      } while (lVar42 < iVar44);
                      piVar23 = *(int **)(&stack0x00000040 + lVar20);
                      plVar43 = plVar43 + 1;
                    }
                  }
                  goto LAB_141500544;
                }
                lVar24 = param_1[0x26];
                *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffee5;
                FUN_1400bc210(auStack_1058,piVar23 + 8,(int)lVar24);
                lStack_10d0._0_4_ = -1;
                lStack_10d0 = 0xffffffff;
                iVar34 = (int)lStack_10d0;
                if (auStack_1058[8] != '\0') {
                  iVar34 = auStack_1058._0_4_;
                }
                if (iVar34 != -1) goto LAB_1414fff02;
LAB_141500544:
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500582;
    FUN_140070d80(&uStack_1028);
    param_2 = plStack_10d8;
  }
  if (((*(byte *)((longlong)param_2 + 0xc) & 1) == 0) || (*param_2 != param_1[0x92])) {
    param_1[0x92] = 0;
  }
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1415005b1;
  FUN_1415530b0(uStack_58 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar20));
  return;
LAB_1414fe904:
  iVar44 = (int)(short)plVar39[0x15] - (int)(short)param_1[0x15];
  sVar14 = *(short *)((longlong)param_1 + 0xaa);
  iVar34 = (int)*(short *)((longlong)plVar39 + 0xaa) - (int)sVar14;
  sVar16 = *(short *)((longlong)param_1 + 0xac);
  iVar31 = (int)*(short *)((longlong)plVar39 + 0xac) - (int)sVar16;
  if (((((iVar44 < -0x1a) || (iVar34 < -0x1a)) || (iVar31 < -0x1a)) ||
      ((0x1a < iVar44 || (0x1a < iVar34)))) || (0x1a < iVar31)) goto LAB_1414fea91;
  *(undefined4 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
  *(short *)(&stack0xfffffffffffffff0 + lVar20) = sVar16;
  *(short *)(&stack0xffffffffffffffe8 + lVar20) = sVar14;
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe996;
  cVar11 = FUN_140aa84d0();
  if (cVar11 == '\0') goto LAB_1414fea91;
  iVar35 = -iVar31;
  if (-iVar31 < 0) {
    iVar35 = iVar31;
  }
  iVar31 = -iVar34;
  if (-iVar34 < 0) {
    iVar31 = iVar34;
  }
  iVar34 = -iVar44;
  if (-iVar44 < 0) {
    iVar34 = iVar44;
  }
  iVar34 = iVar35 + iVar31 + iVar34;
  goto LAB_1414fe9c2;
LAB_1414ff20b:
  if (iVar34 < 0x19) {
    iVar31 = ((iVar34 * -2 + 0x4b) * iVar31) / 0x19;
  }
  if (iVar31 < 500) {
    if (iVar31 < 200) {
      iVar44 = (iVar31 * iVar44) / 200;
    }
  }
  else {
    iVar44 = iVar31 / 100 + iVar44;
  }
  sVar14 = *(short *)(&stack0x00000038 + lVar20);
  if ((((&stack0x00000030)[lVar20] == '\x01') || (1 < sVar14)) && (iVar44 <= sVar14)) {
    iVar34 = ((sVar14 - iVar44) + 1) * 5;
    if ((*(uint *)(plVar39 + 0x22) & 0x40000) != 0) {
      *(undefined4 *)(&stack0x00000018 + lVar20) = 0xffffffff;
      *(undefined2 *)((longlong)auStackX_10 + lVar20) = 0xffff;
      *(undefined4 *)((longlong)auStackX_8 + lVar20) = 3;
      *(undefined8 *)(&stack0x00000000 + lVar20) = 0;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
      *(undefined4 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
      *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 1;
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff2f8;
      iVar31 = FUN_1413812a0(plVar39,0xd,0xb,0xf);
      iVar34 = iVar34 + iVar31;
    }
    *(undefined4 *)(&stack0x00000018 + lVar20) = 0xffffffff;
    *(undefined2 *)((longlong)auStackX_10 + lVar20) = 0xffff;
    *(undefined4 *)((longlong)auStackX_8 + lVar20) = 3;
    *(undefined8 *)(&stack0x00000000 + lVar20) = 0;
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = 0;
    *(undefined4 *)(&stack0xfffffffffffffff0 + lVar20) = 0;
    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar20) = 0;
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff338;
    iVar31 = FUN_1413812a0(param_1,0xe,0xb,0xf);
    if (iVar31 <= iVar34) goto LAB_1414fea91;
  }
  iVar34 = (int)piStack_10e0;
LAB_1414fe9c2:
  if (((*(uint *)(plVar39 + 0x22) & 0x40000) != 0) && ((char)uStack_10a8 != '\0')) {
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414fe9dd;
    cVar11 = func_0x0001413a7620(plVar39);
    if (cVar11 == '\0') {
      *(undefined1 **)((longlong)&uStack_40 + lVar20) = &LAB_1414fe9e8;
      FUN_14137aec0(extraout_XMM0_Qa,0);
    }
  }
  uVar18 = uStack_388;
  if (((int)uStack_388 < 200) ||
     (uVar18 = uStack_388 - 1, iVar34 < (int)alStack_1000[(longlong)(int)(uStack_388 - 1) * 2])) {
    uStack_388 = uVar18;
    uVar18 = uStack_388;
    uVar22 = (ulonglong)(int)uStack_388;
    alStack_1000[uVar22 * 2 + -1] = (longlong)plVar39;
    *(int *)(alStack_1000 + uVar22 * 2) = iVar34;
    uStack_388 = uStack_388 + 1;
    if (0 < (int)uVar18) {
      do {
        uVar41 = uVar22 & 0xffffffff;
        if ((int)alStack_1000[uVar22 & 0xfffffffe] <= (int)alStack_1000[uVar41 * 2]) break;
        uVar22 = uVar22 >> 1 & 0x7fffffff;
        auVar49 = *(undefined1 (*) [16])(alStack_1000 + uVar22 * 2 + -1);
        *(undefined1 (*) [16])(alStack_1000 + uVar22 * 2 + -1) =
             *(undefined1 (*) [16])(alStack_1000 + uVar41 * 2 + -1);
        *(undefined1 (*) [16])(alStack_1000 + uVar41 * 2 + -1) = auVar49;
      } while ((int)uVar22 != 0);
    }
  }
LAB_1414fea91:
  iVar34 = *(int *)(&stack0x0000002c + lVar20);
LAB_1414fea9a:
  plVar43 = *(longlong **)(&stack0x00000040 + lVar20);
LAB_1414fea9f:
  iVar34 = iVar34 + 1;
  *(int *)(&stack0x0000002c + lVar20) = iVar34;
  plVar43 = plVar43 + 1;
  *(longlong **)(&stack0x00000040 + lVar20) = plVar43;
  if ((int)*plVar29 <= iVar34) goto code_r0x0001414feab9;
  goto LAB_1414fe660;
code_r0x0001414feab9:
  cVar10 = (&stack0x00000034)[lVar20];
  plVar39 = plStack_10c8;
  sVar15 = sVar30;
LAB_1414feac9:
  plStack_10a0 = plStack_10a0 + 1;
  goto LAB_1414fe612;
LAB_1414ffcb3:
  plVar29 = plVar29 + 1;
  goto LAB_1414ff5b3;
LAB_1414ff9e3:
  if (puVar45 <= puVar21) goto LAB_1414ffad5;
  pcVar4 = *(code **)(*(longlong *)*puVar21 + 0x10);
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ff9f5;
  iVar34 = (*pcVar4)();
  if (iVar34 == 3) {
    pcVar4 = *(code **)(*(longlong *)*puVar21 + 0x48);
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffa09;
    lVar24 = (*pcVar4)();
    if (((lVar24 != 0) && (0 < *(int *)(lVar24 + 0x60))) && ((**(byte **)(lVar24 + 0x58) & 1) != 0))
    {
      if (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) == 0) {
        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffa44;
        plStack_10c8 = (longlong *)FUN_1415530e0(0x68);
        *plStack_10c8 = 0;
        plStack_10c8[1] = 0;
        plStack_10c8[2] = 0;
        plStack_10c8[3] = 0;
        plStack_10c8[4] = 0;
        plStack_10c8[5] = 0;
        plStack_10c8[6] = 0;
        plStack_10c8[7] = 0;
        plStack_10c8[8] = 0;
        plStack_10c8[9] = 0;
        plStack_10c8[10] = 0;
        plStack_10c8[0xb] = 0;
        plStack_10c8[0xc] = 0;
        *(longlong **)(*(longlong *)(lVar24 + 0x10) + 0x130) = plStack_10c8;
      }
      if (*(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40) == 0) {
        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffaa7;
        plStack_10c8 = (longlong *)FUN_1415530e0(0x170);
        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffab3;
        uVar25 = func_0x0001400764b0(plStack_10c8);
        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40) = uVar25;
      }
      plVar43 = (longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x130) + 0x40) + 0x50);
    }
    goto LAB_1414ffad5;
  }
  puVar21 = puVar21 + 1;
  goto LAB_1414ff9e3;
LAB_1414ffad5:
  for (puVar21 = (undefined8 *)*plVar43; puVar21 < (undefined8 *)plVar43[1]; puVar21 = puVar21 + 1)
  {
    if ((*(int *)*puVar21 == *(int *)uVar5) &&
       ((iVar34 = ((int *)*puVar21)[2], iVar34 == 1 || (iVar34 == 0)))) goto LAB_1414ff748;
  }
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffb16;
  plStack_10c8 = (longlong *)FUN_1415530e0(0x40);
  *plStack_10c8 = -1;
  *(int *)(plStack_10c8 + 1) = -1;
  ((int *)((longlong)plStack_10c8 + 0xc))[0] = 0;
  ((int *)((longlong)plStack_10c8 + 0xc))[1] = 0;
  *(int *)((longlong)plStack_10c8 + 0x14) = 0;
  plStack_10c8[3] = -1;
  plStack_10c8[4] = -1;
  plStack_10c8[5] = -1;
  plStack_10c8[6] = -1;
  *(int *)(plStack_10c8 + 7) = -0x752f7530;
  *(undefined2 *)((longlong)plStack_10c8 + 0x3c) = 0x8ad0;
  *(int *)plStack_10c8 = *(int *)uVar5;
  *(int *)((longlong)plStack_10c8 + 4) = *(int *)(uVar5 + 0xd0);
  *(int *)(plStack_10c8 + 1) = 1;
  *(int *)((longlong)plStack_10c8 + 0xc) = _DAT_142167754;
  iVar34 = _DAT_142167754;
  *(int *)(plStack_10c8 + 2) = _DAT_1423aa348;
  *(int *)(uVar5 + 0x20) = iVar34;
  *(int *)(uVar5 + 0x24) = (int)plStack_10c8[2];
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffbae;
  FUN_141403d00(param_1,plStack_10c8,uVar5);
  for (plVar43 = (longlong *)param_1[0x1ba]; plVar43 < (longlong *)param_1[0x1bb];
      plVar43 = plVar43 + 1) {
    lVar24 = *plVar43;
    if (((*(byte *)(lVar24 + 0x20) & 1) == 0) &&
       ((((*(int *)(lVar24 + 0x10) < _DAT_142167754 ||
          ((*(int *)(lVar24 + 0x10) == _DAT_142167754 && (*(int *)(lVar24 + 0x14) <= _DAT_1423aa348)
           ))) && (*(int *)(lVar24 + 0x24) == 2)) && (*(int *)(lVar24 + 4) == *(int *)uVar5))))
    goto LAB_1414ff748;
  }
  lVar24 = param_1[0x186];
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffc21;
  lVar24 = FUN_140b6ad70(0x14251c138,(int)lVar24,(longlong)param_1 + 0x1274);
  if (((lVar24 != 0) && (*(longlong *)(lVar24 + 0x130) != 0)) &&
     (lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x130) + 0x40), lVar24 != 0)) {
    for (plVar43 = *(longlong **)(lVar24 + 0x68); plVar43 < *(longlong **)(lVar24 + 0x70);
        plVar43 = plVar43 + 1) {
      lVar42 = *plVar43;
      if ((((*(byte *)(lVar42 + 0x20) & 1) == 0) &&
          ((*(int *)(lVar42 + 0x10) < _DAT_142167754 ||
           ((*(int *)(lVar42 + 0x10) == _DAT_142167754 &&
            (*(int *)(lVar42 + 0x14) <= _DAT_1423aa348)))))) &&
         ((*(int *)(lVar42 + 0x24) == 2 && (*(int *)(lVar42 + 4) == *(int *)uVar5))))
      goto LAB_1414ff748;
    }
  }
  iVar34 = *(int *)uVar5;
  *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffc94;
  cVar10 = FUN_14140b0a0(param_1,iVar34);
  if (cVar10 == '\0') {
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1414ffcaa;
    FUN_141408220(param_1,uVar5,1);
    plVar29 = plVar29 + 1;
    goto LAB_1414ff5b3;
  }
  goto LAB_1414ff748;
LAB_141500080:
  plVar26 = plStack_10b0;
  if ((piVar23 == piVar33) || (piVar33 <= piVar23)) goto LAB_1415004f6;
  iVar34 = *piVar23;
  iVar31 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
  if ((iVar31 == 0) || (iVar34 == -1)) {
LAB_1415004ed:
    piVar23 = piVar23 + 1;
  }
  else {
    iVar44 = 0;
    iVar31 = iVar31 + -1;
    if (-1 < iVar31) {
      do {
        iVar35 = iVar44 + iVar31 >> 1;
        plStack_1120 = *(longlong **)(_DAT_142407530 + (longlong)iVar35 * 8);
        if ((int)plStack_1120[0x26] == iVar34) goto LAB_141500123;
        iVar36 = iVar35 + -1;
        if ((int)plStack_1120[0x26] < iVar34) {
          iVar36 = iVar31;
          iVar44 = iVar35 + 1;
        }
        iVar31 = iVar36;
      } while (iVar44 <= iVar31);
    }
    plStack_1120 = (longlong *)0x0;
LAB_141500123:
    if (((plStack_1120 == (longlong *)0x0) || (plStack_1120 == param_1)) ||
       ((*(uint *)(plStack_1120 + 0x22) & 0x2000002) != 0)) goto LAB_1415004ed;
    if ((*(uint *)(*plVar43 + 4) != 6) && (param_1[0x1b0] == 0)) {
      if (((int)param_1[0x250] < 8) || ((*(byte *)(param_1[0x24f] + 7) & 4) == 0)) {
        if (((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) == 0) &&
           ((*(uint *)(param_1 + 0x105) & 0x2000000) != 0)) goto LAB_1415001ab;
      }
      else if ((*(uint *)((longlong)param_1 + 0x82c) & 0x2000000) == 0) {
LAB_1415001ab:
        if ((*(uint *)(plStack_1120 + 0x23) & 0x400000) != 0) goto LAB_1415004ed;
      }
    }
    if ((((*(uint *)(plStack_1120 + 0x22) >> 0xf & 1) != 0) &&
        (((*(uint *)(*plVar43 + 4) < 2 || (*(int *)(*plVar43 + 4) == 2)) ||
         (*(int *)(*plVar43 + 4) == 3)))) ||
       ((((short)plStack_1120[0x14] == 0x67 || ((short)plStack_1120[0x14] == 0x68)) &&
        (*(int *)(*plVar43 + 4) == 3)))) goto LAB_1415004ed;
    *(undefined4 *)(&stack0x0000002c + lVar20) = 0;
    *(undefined2 *)(&stack0xfffffffffffffff8 + lVar20) = *(undefined2 *)((longlong)param_1 + 0xac);
    *(undefined2 *)(&stack0xfffffffffffffff0 + lVar20) = *(undefined2 *)((longlong)param_1 + 0xaa);
    *(short *)(&stack0xffffffffffffffe8 + lVar20) = (short)param_1[0x15];
    uVar38 = *(undefined2 *)((longlong)plStack_1120 + 0xac);
    uVar2 = *(undefined2 *)((longlong)plStack_1120 + 0xaa);
    lVar42 = plStack_1120[0x15];
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500259;
    cVar10 = FUN_141465cd0(0x1423f3970,(short)lVar42,uVar2,uVar38);
    (&stack0x00000030)[lVar20] = cVar10;
    if (cVar10 == '\0') {
      iVar34 = *(int *)(&stack0x0000002c + lVar20);
    }
    else {
      *(uint *)((longlong)plVar39 + 0xc) = *(uint *)((longlong)plVar39 + 0xc) | 2;
      iVar34 = 1000000;
    }
    switch(*(undefined4 *)(*plVar43 + 4)) {
    case 1:
      iVar34 = iVar34 + 500;
      break;
    case 2:
      iVar34 = iVar34 + 1000;
      break;
    case 3:
      iVar34 = iVar34 + 2000;
      break;
    case 4:
      iVar34 = iVar34 + 3000;
      break;
    case 5:
      iVar34 = iVar34 + 4000;
      break;
    case 6:
      iVar34 = iVar34 + 5000;
    }
    for (puVar21 = (undefined8 *)plStack_1120[0xfa];
        (puVar21 != (undefined8 *)plStack_1120[0xfb] && (puVar21 < (undefined8 *)plStack_1120[0xfb])
        ); puVar21 = puVar21 + 1) {
      if ((*(int *)*puVar21 == 1) && (((int *)*puVar21)[2] == (int)param_1[0x26])) {
        iVar34 = iVar34 + 10000;
      }
    }
    *(int *)(&stack0x0000002c + lVar20) = iVar34;
    (&stack0x00000028)[lVar20] = 0;
    plVar26 = plVar39 + 4;
    iVar31 = 0;
    if (0 < (int)plVar39[0xcc]) {
      do {
        if ((longlong *)*plVar26 == plStack_1120) {
          (&stack0x00000028)[lVar20] = 1;
          *(int *)(&stack0x0000002c + lVar20) = iVar34 + 500000;
          break;
        }
        iVar31 = iVar31 + 1;
        plVar26 = plVar26 + 1;
      } while (iVar31 < (int)plVar39[0xcc]);
    }
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x14150036b;
    plVar26 = (longlong *)FUN_1413e51b0(param_1);
    if (plVar26 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar26 + 0x58);
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500379;
      lVar42 = (*pcVar4)(plVar26);
      if (lVar42 != 0) {
        lVar28 = plStack_1120[0x26];
        *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500395;
        FUN_1400bc210(&iStack_1048,lVar42,(int)lVar28);
        iStack_1088 = -1;
        uStack_1084 = 0;
        iVar34 = -1;
        if (cStack_1040 != '\0') {
          iVar34 = iStack_1048;
        }
        if (iVar34 != -1) {
          *(int *)(&stack0x0000002c + lVar20) = *(int *)(&stack0x0000002c + lVar20) + 750000;
        }
      }
    }
    lVar42 = plStack_1120[0x26];
    *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x1415003d8;
    FUN_1400bc210(&iStack_1078,&uStack_1028,(int)lVar42);
    iStack_1090 = -1;
    uStack_108c = 0;
    iVar34 = -1;
    if (cStack_1070 != '\0') {
      iVar34 = iStack_1078;
    }
    if (iVar34 != -1) {
      *(int *)(&stack0x0000002c + lVar20) = *(int *)(&stack0x0000002c + lVar20) + 2000000;
    }
    iVar44 = (int)(short)((short)param_1[0x15] - (short)plStack_1120[0x15]);
    iVar34 = (int)(short)(*(short *)((longlong)param_1 + 0xaa) -
                         *(short *)((longlong)plStack_1120 + 0xaa));
    iVar31 = (int)(short)(*(short *)((longlong)param_1 + 0xac) -
                         *(short *)((longlong)plStack_1120 + 0xac));
    fVar50 = (float)(iVar31 * iVar31 + iVar34 * iVar34 + iVar44 * iVar44);
    if (fVar50 < 0.0) {
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500470;
      fVar50 = (float)func_0x0001415548d6();
    }
    else {
      fVar50 = SQRT(fVar50);
    }
    iVar34 = *(int *)(&stack0x0000002c + lVar20) + (10000 - (short)(int)fVar50);
    if ((iStack_1110 == -1) || (iStack_1110 < iVar34)) {
      *plVar39 = (longlong)plStack_1120;
      *(undefined4 *)(plVar39 + 1) = *(undefined4 *)(*plVar43 + 4);
      plVar39[0xcd] = (longlong)plVar29;
      uVar18 = *(uint *)((longlong)plVar39 + 0xc) & 0xfffffff7;
      if ((&stack0x00000030)[lVar20] != '\0') {
        uVar18 = *(uint *)((longlong)plVar39 + 0xc) | 8;
      }
      if ((&stack0x00000028)[lVar20] == '\0') {
        uVar18 = uVar18 & 0xfffffffb;
      }
      else {
        uVar18 = uVar18 | 4;
      }
      *(uint *)((longlong)plVar39 + 0xc) = uVar18;
      iStack_1110 = iVar34;
    }
    *(uint *)((longlong)plVar39 + 0xc) = *(uint *)((longlong)plVar39 + 0xc) | 1;
    (&stack0x00000028)[lVar20] = 1;
    piVar23 = piVar23 + 1;
  }
  goto LAB_141500080;
LAB_1415004f6:
  if ((&stack0x00000028)[lVar20] != '\0') {
    if (*(int *)(lVar24 + 0x54) == -1) {
      *(undefined8 *)((longlong)&uStack_40 + lVar20) = 0x141500513;
      FUN_141532f20(lVar24);
    }
    *(int *)((longlong)plVar39 + 0x14) =
         *(int *)((longlong)plVar39 + 0x14) + *(int *)(lVar24 + 0x54);
    *(int *)((longlong)plVar39 + 0x1c) =
         *(int *)((longlong)plVar39 + 0x1c) + (*(int *)(lVar24 + 0x50) - *(int *)(lVar24 + 0x54));
  }
LAB_141500528:
  piVar23 = *(int **)(&stack0x00000040 + lVar20);
LAB_14150052d:
  plVar43 = plVar43 + 1;
  goto LAB_1414fff41;
}
