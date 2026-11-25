
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e5eb00(longlong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  char cVar12;
  short sVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  char *pcVar22;
  longlong lVar23;
  undefined2 *puVar24;
  short *psVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  undefined *puVar33;
  ulonglong uVar34;
  undefined4 uVar35;
  longlong lVar36;
  ushort uVar37;
  int iVar38;
  int *piVar39;
  longlong lVar40;
  longlong *plVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  undefined2 uVar44;
  ulonglong uVar45;
  undefined4 extraout_XMM0_Da;
  longlong lStackX_8;
  longlong *plStack_2440;
  longlong *plStack_2438;
  longlong *plStack_2430;
  longlong *plStack_2428;
  int aiStack_2420 [2];
  longlong *plStack_2418;
  longlong lStack_2410;
  undefined8 uStack_2408;
  longlong lStack_2400;
  longlong *plStack_23f8;
  longlong *plStack_23f0;
  undefined4 *puStack_23e8;
  undefined4 *puStack_23e0;
  undefined8 uStack_23d8;
  longlong lStack_23d0;
  undefined4 uStack_23c8;
  undefined1 uStack_23c4;
  undefined2 uStack_23c2;
  undefined2 uStack_23c0;
  undefined2 uStack_23be;
  undefined2 uStack_23ac;
  longlong lStack_2378;
  undefined4 *puStack_2370;
  undefined4 *puStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined4 *puStack_2350;
  undefined4 *puStack_2348;
  undefined8 uStack_2340;
  undefined1 auStack_2328 [16];
  int iStack_2318;
  int aiStack_2314 [135];
  int iStack_20f8;
  int iStack_20f4;
  int iStack_20f0;
  int iStack_20ec;
  int aiStack_20e8 [2092];
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140e5eb2a;
  lVar21 = FUN_141554810();
  lVar21 = -lVar21;
  uStack_38 = _DAT_1418be040 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar21);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5eb60;
  lStack_23d0 = param_1;
  cVar12 = FUN_140e5e9c0(0x1423b36b0,&stack0x00000020 + lVar21,&stack0x00000028 + lVar21,
                         &stack0x0000001c + lVar21);
  if (cVar12 == '\0') goto LAB_140e62102;
  plStack_2438 = (longlong *)0x0;
  plStack_2430 = (longlong *)0x0;
  plStack_2428 = (longlong *)0x0;
  lVar23 = *(longlong *)(param_1 + 8);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5eb88;
  FUN_140e4e100(auStack_2328);
  lVar26 = *(longlong *)(lVar23 + 0x13b0);
  if (lVar26 == 0) {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ebb7;
    FUN_14104de00(aiStack_20e8);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ebc4;
    FUN_14104dc30(aiStack_20e8);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ebd7;
    FUN_14104edd0(aiStack_20e8,auStack_2328);
    *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5ebe4;
    FUN_1407ab8b0(aiStack_20e8);
  }
  else if (*(int *)(lVar26 + 0x208c) < 2) {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5eba9;
    FUN_14104edd0(lVar26,auStack_2328);
  }
  (&stack0x00000024)[lVar21] = 0;
  bVar6 = false;
  if ((DAT_1418f9296 == '\0') && (*(longlong *)(lVar23 + 0x13b0) != 0)) {
    if (*(int *)(*(longlong *)(lVar23 + 0x13b0) + 0x208c) == 0) {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ec2a;
      FUN_140e7da50(0x1423b36b0);
      bVar6 = true;
      if (((*(byte *)(*(longlong *)(lVar23 + 0x13b0) + 0x20a8) & 1) == 0) || (DAT_1423b375a != '\0')
         ) {
        if (_DAT_1423b3752 < 5) {
          if (DAT_1423b375a == '\0') {
            *(int *)(lVar23 + 0x13cc) = *(int *)(lVar23 + 0x13cc) + *(int *)(lVar23 + 0x13c8);
            *(undefined4 *)(lVar23 + 0x13c8) = 0;
          }
        }
        else if ((DAT_1423b375a == '\0') && (99 < iStack_20f0)) {
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ee25;
          lVar26 = func_0x00014007f120(&DAT_1423f3c78,_DAT_1423b5af0);
          if (lVar26 != 0) {
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ee42;
            lVar36 = FUN_14094ff80(lVar26,_DAT_1423b5af4,0);
            if (lVar36 != 0) {
              uVar35 = *(undefined4 *)(lVar36 + 0xc);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ee5a;
              lVar36 = FUN_1400bb3f0(uVar35,lVar26 + 0x1110);
              if (lVar36 != 0) {
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ee6d;
                lVar26 = FUN_1400bd470(lVar26,lVar36);
                if ((lVar26 != 0) && (sVar13 = *(short *)(lVar26 + 0x2c8), 0 < sVar13)) {
                  uVar35 = *(undefined4 *)(lVar36 + 4);
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ee8d;
                  lVar26 = FUN_1413e54b0(&DAT_142407530,uVar35);
                  if ((lVar26 != 0) && (((*(byte *)(lVar26 + 0x110) & 2) == 0 && (2 < sVar13)))) {
                    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5eeaa;
                    FUN_140e62200(&plStack_2438);
                    (&stack0x00000024)[lVar21] = 1;
                  }
                }
              }
            }
          }
        }
      }
      else {
        _DAT_1423b375a = 0x101;
        iVar38 = 0;
        lVar26 = *(longlong *)(param_1 + 8);
        if (*(longlong *)(lVar26 + 0x1458) - *(longlong *)(lVar26 + 0x1450) >> 3 != 0) {
          lVar36 = 0;
          do {
            lVar40 = *(longlong *)(lVar36 + *(longlong *)(lVar26 + 0x1450));
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ec97;
            cVar12 = func_0x000140df5e20(lVar40,1);
            if ((cVar12 != '\0') && (*(int *)(lVar40 + 0x20) == -1)) {
              uVar35 = *(undefined4 *)(lVar26 + 4);
              uVar3 = *(undefined8 *)(lVar40 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ecb4;
              cVar12 = FUN_140baef80(uVar3,uVar35,0x15);
              if (cVar12 != '\0') {
                lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1450);
                uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
                *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
                uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
                uVar3 = *(undefined8 *)((longlong)iVar38 * 8 + lVar26);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed21;
                FUN_1414f55e0(0x1423f3970,uVar3,*(undefined2 *)(&stack0x00000020 + lVar21),uVar1);
                plVar30 = *(longlong **)
                           (*(longlong *)
                             ((longlong)iVar38 * 8 +
                             *(longlong *)(*(longlong *)(param_1 + 8) + 0x1450)) + 0x18);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed45;
                plStack_2440 = plVar30;
                func_0x0001400bafb0(&plStack_2438,&plStack_2440);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed52;
                lVar26 = FUN_1413ca0e0(plVar30,3);
                if (lVar26 != 0) {
                  lVar36 = plVar30[0x14];
                  *(undefined2 *)(plVar30 + 0x14) = 0x66;
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed7c;
                  FUN_140df8a30(lVar26,*(undefined2 *)(&stack0x00000020 + lVar21),uVar1,uVar44);
                  *(short *)(plVar30 + 0x14) = (short)lVar36;
                }
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed93;
                FUN_140069780(&puStack_2350,&UNK_14174f418);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ed9d;
                func_0x00014007f210(&uStack_23c8);
                uStack_23c8 = 0x70159;
                uStack_23c4 = 1;
                uStack_23ac = 2000;
                uStack_23c2 = *(undefined2 *)(&stack0x00000020 + lVar21);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5edd7;
                uStack_23c0 = uVar1;
                uStack_23be = uVar44;
                FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
                (&stack0x00000024)[lVar21] = 1;
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ede5;
                FUN_140070e80(&puStack_2350);
                break;
              }
            }
            iVar38 = iVar38 + 1;
            lVar36 = lVar36 + 8;
            lVar26 = *(longlong *)(param_1 + 8);
          } while ((ulonglong)(longlong)iVar38 <
                   (ulonglong)(*(longlong *)(lVar26 + 0x1458) - *(longlong *)(lVar26 + 0x1450) >> 3)
                  );
        }
      }
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5eee2;
      func_0x000141554566(aiStack_20e8,0,0x254);
    }
    piVar39 = (int *)(*(longlong *)(lVar23 + 0x13b0) + 0x208c);
    *piVar39 = *piVar39 + 1;
  }
  iVar38 = 0xf;
  if (!bVar6) {
    iVar38 = 6;
  }
  iVar18 = 0;
  *(undefined4 *)(&stack0x0000002c + lVar21) = 0;
  *(int *)(&stack0x00000034 + lVar21) = iVar38;
  if ((_DAT_1423b38bc < 0x9d80) &&
     ((DAT_1418f9296 == '\x01' ||
      (*(int *)(&stack0x00000034 + lVar21) = iVar38, DAT_1418f9296 == '\x02')))) {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ef35;
    iVar17 = FUN_140073560(7);
    iVar17 = iVar17 + 2;
    *(int *)(&stack0x00000034 + lVar21) = iVar38;
    if (0 < iVar17) {
      if (iStack_2318 < iVar17) {
        iStack_2318 = iVar17;
      }
      if (iVar38 < iVar17) {
        iVar38 = iVar17;
      }
      *(int *)(&stack0x00000034 + lVar21) = iVar38;
    }
  }
  plStack_2418 = (longlong *)0x0;
  lStack_2410 = 0;
  uStack_2408 = 0;
  lVar23 = *(longlong *)(param_1 + 8);
  plVar30 = *(longlong **)(lVar23 + 0x1450);
  *(longlong **)(&stack0x00000038 + lVar21) = plVar30;
  *(undefined8 *)(&stack0x00000050 + lVar21) = *(undefined8 *)(lVar23 + 0x1458);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5ef9b;
  pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                        &stack0x00000050 + lVar21);
  cVar12 = *pcVar22;
  plVar41 = _DAT_142407548;
  while (_DAT_142407548 = plVar41, cVar12 < '\0') {
    plVar41 = (longlong *)*plVar30;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5efc1;
    plStack_2440 = plVar41;
    cVar12 = func_0x000140df5e20(plVar41,1);
    if (cVar12 != '\0') {
      lVar23 = plVar41[2];
      lVar26 = 0;
      if (*(longlong *)(lVar23 + 0x130) != 0) {
        lVar26 = *(longlong *)(*(longlong *)(lVar23 + 0x130) + 0x48);
      }
      if (*(short *)(lVar23 + 2) == _DAT_1423b5afc) {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5effe;
        cVar12 = func_0x0001400735c0(lVar23 + 200,7);
        if ((cVar12 == '\0') &&
           (((lVar26 == 0 || (*(longlong *)(lVar26 + 0x160) == 0)) && ((int)plVar41[4] == -1)))) {
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f032;
          cVar12 = FUN_140baef80(lVar23,0xffffffff,2);
          if (cVar12 == '\0') {
            lVar23 = plVar41[2];
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f04b;
            sVar13 = FUN_140baf080(lVar23,4,0xffffffff);
            if (sVar13 == 0) {
              lVar23 = plVar41[2];
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f065;
              sVar13 = FUN_140baf080(lVar23,6,0xffffffff);
              if (sVar13 == 0) {
                lVar23 = plVar41[2];
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f07d;
                sVar13 = FUN_140bb0a50(lVar23,7,0xffffffff);
                if (sVar13 == 0) {
                  lVar23 = plVar41[2];
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f097;
                  sVar13 = FUN_140baf080(lVar23,1,_DAT_1423b5af8);
                  if (sVar13 == 0) {
                    lVar23 = plVar41[2];
                    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f0aa;
                    iVar17 = FUN_140bb09f0(lVar23,2);
                    if (iVar17 != -1) {
                      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f0bc;
                      lVar23 = FUN_1400693f0(0x14251c138,iVar17);
                      if (lVar23 != 0) {
                        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f0d1;
                        cVar12 = FUN_140baef80(lVar23,0xffffffff,2);
                        if (cVar12 != '\0') goto LAB_140e5f0f4;
                      }
                    }
                    lVar23 = plVar41[2];
                    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f0e3;
                    cVar12 = FUN_140c26db0(lVar23,0xa2);
                    if (cVar12 == '\0') {
                      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5f0f4;
                      func_0x0001400bafb0(&plStack_2418,&plStack_2440);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_140e5f0f4:
    plVar30 = plVar30 + 1;
    *(longlong **)(&stack0x00000038 + lVar21) = plVar30;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f111;
    pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                          &stack0x00000050 + lVar21);
    plVar41 = _DAT_142407548;
    cVar12 = *pcVar22;
  }
  iVar17 = 0;
  *(longlong **)(&stack0x00000038 + lVar21) = plVar41;
  *(undefined8 *)(&stack0x00000050 + lVar21) = _DAT_142407550;
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f148;
  pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                        &stack0x00000050 + lVar21);
  cVar12 = *pcVar22;
  while (cVar12 < '\0') {
    if ((*(uint *)(*plVar41 + 0x110) & 0x402) != 2) {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f168;
      cVar12 = func_0x0001413a7620();
      if (cVar12 != '\0') {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f176;
        cVar12 = func_0x000140074860(extraout_XMM0_Da,0x3a);
        if (cVar12 != '\0') {
          iVar17 = iVar17 + 1;
        }
      }
    }
    plVar41 = plVar41 + 1;
    *(longlong **)(&stack0x00000038 + lVar21) = plVar41;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f199;
    pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                          &stack0x00000050 + lVar21);
    cVar12 = *pcVar22;
  }
  puVar28 = *(undefined8 **)(_DAT_1423bc668 + 0x1450);
  *(undefined8 **)(&stack0x00000038 + lVar21) = puVar28;
  *(undefined8 *)(&stack0x00000050 + lVar21) = *(undefined8 *)(_DAT_1423bc668 + 0x1458);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f1d1;
  pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                        &stack0x00000050 + lVar21);
  cVar12 = *pcVar22;
  puVar43 = puVar28;
  while (cVar12 < '\0') {
    uVar3 = *puVar43;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f1ed;
    iVar31 = iVar17;
    cVar12 = func_0x000140df5e20(uVar3,0);
    iVar17 = iVar17 + 1;
    if (cVar12 == '\0') {
      puVar43 = puVar28;
      iVar17 = iVar31;
    }
    puVar28 = puVar43 + 1;
    *(undefined8 **)(&stack0x00000038 + lVar21) = puVar28;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f21c;
    puVar43 = puVar28;
    pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000018 + lVar21,
                                          &stack0x00000050 + lVar21);
    cVar12 = *pcVar22;
  }
  iVar31 = _DAT_1423b3090;
  if (_DAT_1423b3094 < _DAT_1423b3090) {
    iVar31 = _DAT_1423b3094;
  }
  iVar31 = iVar31 - iVar17;
  *(int *)(&stack0x00000030 + lVar21) = iVar31;
  if (iVar31 < 0) {
    *(undefined4 *)(&stack0x00000030 + lVar21) = 0;
LAB_140e5f252:
    (&stack0x00000018)[lVar21] = 1;
  }
  else {
    (&stack0x00000018)[lVar21] = 0;
    if (iVar31 == 0) goto LAB_140e5f252;
  }
  if (0 < iVar38) {
LAB_140e5f270:
    plVar30 = plStack_2418;
    if ((0 < iStack_2318) && (0 < *(int *)(&stack0x00000030 + lVar21))) {
      iVar38 = 0;
      lVar23 = 0;
      iVar17 = 0;
      *(longlong **)(&stack0x00000038 + lVar21) = plStack_2418;
      *(longlong *)(&stack0x00000050 + lVar21) = lStack_2410;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f2bd;
      plVar41 = plStack_2418;
      pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000048 + lVar21,
                                            &stack0x00000050 + lVar21);
      iVar18 = 0;
      if (*pcVar22 < '\0') {
        do {
          sVar13 = **(short **)(*plVar41 + 0x10);
          if (((-1 < sVar13) && (sVar13 < 0x87)) && (0 < aiStack_2314[sVar13])) {
            aiStack_20e8[lVar23] = iVar17;
            iVar38 = iVar38 + 1;
            lVar23 = lVar23 + 1;
            if (1999 < lVar23) break;
          }
          plVar41 = plVar41 + 1;
          *(longlong **)(&stack0x00000038 + lVar21) = plVar41;
          iVar17 = iVar17 + 1;
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f321;
          pcVar22 = (char *)func_0x000140070450(&stack0x00000038 + lVar21,&stack0x00000048 + lVar21,
                                                &stack0x00000050 + lVar21);
        } while (*pcVar22 < '\0');
        lVar23 = lStack_23d0;
        iVar18 = iVar38;
        if (iVar38 < 1) goto LAB_140e605e7;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f33f;
        iVar18 = FUN_140073560(iVar38);
        lVar26 = plVar30[aiStack_20e8[iVar18]];
        *(longlong *)(&stack0x00000040 + lVar21) = lVar26;
        if ((**(short **)(lVar26 + 0x10) == 0x67) || (**(short **)(lVar26 + 0x10) == 0x68))
        goto LAB_140e6072e;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f378;
        FUN_1400bafd0(&plStack_2418);
        plVar30 = plStack_2418;
        iVar18 = 1;
        iVar17 = (int)(lStack_2410 - (longlong)plStack_2418 >> 3) + -1;
        lVar36 = (longlong)iVar17;
        aiStack_2420[0] = iVar17;
        if (-1 < iVar17) {
          do {
            lVar23 = plVar30[lVar36];
            uVar35 = *(undefined4 *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f3bf;
            sVar13 = FUN_140bb0a50(uVar3,2,uVar35);
            if (sVar13 == 0) {
              psVar25 = *(short **)(lVar23 + 0x10);
              sVar13 = *psVar25;
              if ((sVar13 == 0x67) || (sVar13 == 0x68)) {
                uVar35 = *(undefined4 *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f3ea;
                sVar13 = FUN_140bb0a50(psVar25,0,uVar35);
                if (sVar13 < 1) {
                  uVar35 = *(undefined4 *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
                  uVar3 = *(undefined8 *)(lVar23 + 0x10);
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f409;
                  sVar13 = FUN_140bb0a50(uVar3,1,uVar35);
                  if (sVar13 < 1) goto LAB_140e5f410;
                }
                goto LAB_140e5f40e;
              }
            }
            else {
LAB_140e5f40e:
              iVar18 = iVar18 + 1;
            }
LAB_140e5f410:
            lVar36 = lVar36 + -1;
            lVar23 = lStack_23d0;
          } while (-1 < lVar36);
        }
        if (*(int *)(&stack0x00000030 + lVar21) < iVar18) goto LAB_140e6072e;
        *(int *)(&stack0x00000030 + lVar21) = *(int *)(&stack0x00000030 + lVar21) - iVar18;
        lStack_2400 = 0;
        plStack_23f8 = (longlong *)0x0;
        plStack_23f0 = (longlong *)0x0;
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f454;
        FUN_140bae090(uVar3,10,0xffffffff,1);
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f46d;
        FUN_140bae090(uVar3,2,0xffffffff,1);
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f486;
        FUN_140bae090(uVar3,4,0xffffffff,1);
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f49f;
        FUN_140bae090(uVar3,6,0xffffffff,1);
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f4b8;
        FUN_140bae090(uVar3,0xf,0xffffffff,1);
        (&stack0xfffffffffffffff8)[lVar21] = 0;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f4d1;
        FUN_140bae090(uVar3,0xd,0xffffffff,1);
        puStack_23e8 = (undefined4 *)0x0;
        puStack_23e0 = (undefined4 *)0x0;
        uStack_23d8 = 0;
        plVar41 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0xf0);
        puVar29 = puStack_23e0;
        for (plVar30 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0xe8); puStack_23e0 = puVar29,
            puVar9 = puStack_23e8, plVar30 != plVar41; plVar30 = plVar30 + 1) {
          lVar36 = *plVar30;
          uVar35 = *(undefined4 *)(lVar36 + 8);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f516;
          puVar24 = (undefined2 *)FUN_1400bd520(&DAT_1423f3c78,uVar35,lVar36 + 0xc);
          if (puVar24 != (undefined2 *)0x0) {
            switch(*puVar24) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 10:
              uVar35 = *(undefined4 *)(puVar24 + 2);
              *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5f540;
              FUN_1400bb4a0(uVar35,&puStack_23e8);
            }
          }
          puVar29 = puStack_23e0;
        }
        for (; puVar9 != puVar29; puVar9 = puVar9 + 1) {
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar35 = *puVar9;
          uVar3 = *(undefined8 *)(lVar26 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f577;
          FUN_140bae090(uVar3,0xffffffff,uVar35,1);
        }
        (&stack0x00000000)[lVar21] = 0;
        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar21) = 0xffffffff;
        uVar3 = *(undefined8 *)(lVar26 + 0x10);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f59b;
        FUN_140bb06b0(uVar3,0xffffffff,0xffffffff,0xffffffff);
        lVar36 = *(longlong *)(lVar26 + 0x10);
        lVar40 = *(longlong *)(lVar36 + 0x130);
        if (((lVar40 != 0) && (lVar40 = *(longlong *)(lVar40 + 8), lVar40 != 0)) &&
           (*(short *)(lVar40 + 0x60) != 0x66)) {
          *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5f5c9;
          FUN_140bd2d90(lVar36,0x66,0);
        }
        uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
        *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
        uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f5f1;
        FUN_1414f55e0(0x1423f3970,lVar26,*(undefined2 *)(&stack0x00000020 + lVar21),uVar1);
        lVar36 = *(longlong *)(lVar26 + 0x18);
        *(longlong *)(&stack0x00000038 + lVar21) = lVar36;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f609;
        func_0x0001400bafb0(&plStack_2438,&stack0x00000038 + lVar21);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f617;
        func_0x0001400bafb0(&lStack_2400,&stack0x00000038 + lVar21);
        if ((*(short *)(lVar36 + 0xa0) != 0x67) && (*(short *)(lVar36 + 0xa0) != 0x68)) {
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f632;
          uVar14 = FUN_14138c220(lVar36);
          *(undefined2 *)(lVar36 + 0xa0) = uVar14;
        }
        *(undefined2 *)(lVar36 + 0xa2) = *(undefined2 *)(lVar36 + 0xa0);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f64f;
        FUN_1404427d0(lVar36);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f657;
        FUN_140442370(lVar36);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f66c;
        FUN_140df8a30(lVar26,*(undefined2 *)(&stack0x00000020 + lVar21),uVar1,uVar44);
        iStack_2318 = iStack_2318 + -1;
        *(int *)(&stack0x00000034 + lVar21) = *(int *)(&stack0x00000034 + lVar21) + -1;
        *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + 1;
        plVar30 = plStack_23f8;
        if (-1 < iVar17) {
          plStack_2440 = plStack_2418 + iVar17;
          *(longlong **)(&stack0x00000050 + lVar21) = plStack_2440 + 1;
          *(longlong **)(&stack0x00000038 + lVar21) = plStack_23f8;
          do {
            lVar23 = *plStack_2440;
            iVar18 = *(int *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
            plVar41 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0x120);
            lStack_2378 = lVar23;
            for (plVar30 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0x118); plVar30 < plVar41;
                plVar30 = plVar30 + 1) {
              puVar28 = (undefined8 *)*plVar30;
              pcVar4 = *(code **)*puVar28;
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f6e5;
              sVar13 = (*pcVar4)(puVar28);
              if ((sVar13 == 2) && ((*(int *)(puVar28 + 1) == iVar18 || (iVar18 == -1)))) {
                if (*(short *)((longlong)puVar28 + 0xc) != 0) goto LAB_140e5f756;
                break;
              }
            }
            psVar25 = *(short **)(lVar23 + 0x10);
            sVar13 = *psVar25;
            if ((sVar13 == 0x67) || (sVar13 == 0x68)) {
              uVar35 = *(undefined4 *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f72e;
              sVar13 = FUN_140bb0a50(psVar25,0,uVar35);
              if (sVar13 < 1) {
                uVar35 = *(undefined4 *)(*(longlong *)(lVar26 + 0x10) + 0xe0);
                uVar3 = *(undefined8 *)(lVar23 + 0x10);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f74d;
                sVar13 = FUN_140bb0a50(uVar3,1,uVar35);
                if (sVar13 < 1) goto LAB_140e5fad5;
              }
LAB_140e5f756:
              lVar40 = lStack_2410;
              lVar36 = *(longlong *)(&stack0x00000050 + lVar21);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f771;
              func_0x00014155486a(lVar36 + -8,lVar36,lStack_2410 - lVar36);
              lStack_2410 = lVar40 + -8;
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f797;
              FUN_140bae090(uVar3,10,0xffffffff,1);
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f7b0;
              FUN_140bae090(uVar3,2,0xffffffff,1);
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f7c9;
              FUN_140bae090(uVar3,4,0xffffffff,1);
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f7e2;
              FUN_140bae090(uVar3,6,0xffffffff,1);
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f7fb;
              FUN_140bae090(uVar3,0xf,0xffffffff,1);
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f814;
              FUN_140bae090(uVar3,0xd,0xffffffff,1);
              puStack_2370 = (undefined4 *)0x0;
              puStack_2368 = (undefined4 *)0x0;
              uStack_2360 = 0;
              plVar30 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xe8);
              plVar41 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xf0);
              lVar36 = _DAT_1423f3c78;
              puVar29 = puStack_2370;
              puVar9 = puStack_2368;
              if (plVar30 != plVar41) {
                do {
                  lVar23 = *plVar30;
                  iVar18 = *(int *)(lVar23 + 8);
                  iVar17 = (int)(_DAT_1423f3c80 - lVar36 >> 3);
                  if ((iVar17 != 0) && (iVar18 != -1)) {
                    iVar31 = *(int *)(lVar23 + 0xc);
                    if ((-1 < iVar31) && (iVar31 < iVar17)) {
                      puVar24 = *(undefined2 **)(lVar36 + (longlong)iVar31 * 8);
                      if (*(int *)(puVar24 + 2) == iVar18) {
LAB_140e5f8e4:
                        if (puVar24 != (undefined2 *)0x0) {
                          switch(*puVar24) {
                          case 1:
                          case 2:
                          case 3:
                          case 4:
                          case 7:
                          case 8:
                          case 9:
                          case 10:
                            uVar35 = *(undefined4 *)(puVar24 + 2);
                            *(undefined **)((longlong)&uStack_30 + lVar21) = &UNK_140e5f910;
                            FUN_1400bb4a0(uVar35,&puStack_2370);
                            lVar36 = _DAT_1423f3c78;
                          }
                        }
                        goto LAB_140e5f917;
                      }
                      *(undefined4 *)(lVar23 + 0xc) = 0xffffffff;
                      lVar36 = _DAT_1423f3c78;
                    }
                    iVar31 = 0;
                    iVar17 = iVar17 + -1;
                    if (-1 < iVar17) {
                      do {
                        iVar32 = iVar17 + iVar31 >> 1;
                        puVar24 = *(undefined2 **)(lVar36 + (longlong)iVar32 * 8);
                        if (*(int *)(puVar24 + 2) == iVar18) {
                          *(int *)(lVar23 + 0xc) = iVar32;
                          lVar36 = _DAT_1423f3c78;
                          goto LAB_140e5f8e4;
                        }
                        iVar11 = iVar32 + -1;
                        if (*(int *)(puVar24 + 2) < iVar18) {
                          iVar11 = iVar17;
                          iVar31 = iVar32 + 1;
                        }
                        iVar17 = iVar11;
                      } while (iVar31 <= iVar17);
                    }
                  }
LAB_140e5f917:
                  plVar30 = plVar30 + 1;
                } while (plVar30 != plVar41);
                lVar26 = *(longlong *)(&stack0x00000040 + lVar21);
                puVar29 = puStack_2370;
                puVar9 = puStack_2368;
                lVar23 = lStack_2378;
              }
              for (; puVar10 = puStack_2368, puVar29 != puStack_2368; puVar29 = puVar29 + 1) {
                (&stack0xfffffffffffffff8)[lVar21] = 0;
                uVar35 = *puVar29;
                uVar3 = *(undefined8 *)(lVar23 + 0x10);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f956;
                puStack_2368 = puVar9;
                FUN_140bae090(uVar3,0xffffffff,uVar35,1);
                puVar9 = puStack_2368;
                puStack_2368 = puVar10;
              }
              lVar36 = *(longlong *)(lVar23 + 0x10);
              iVar18 = (int)(*(longlong *)(lVar36 + 0x108) - *(longlong *)(lVar36 + 0x100) >> 3) +
                       -1;
              puStack_2368 = puVar9;
              if (-1 < iVar18) {
                lVar40 = (longlong)iVar18 * 8;
                do {
                  pcVar4 = *(code **)**(undefined8 **)(lVar40 + *(longlong *)(lVar36 + 0x100));
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f9a0;
                  (*pcVar4)();
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5f9ad;
                  FUN_140bb0300(lVar36,iVar18,0);
                  lVar40 = lVar40 + -8;
                  iVar18 = iVar18 + -1;
                } while (-1 < iVar18);
              }
              lVar36 = *(longlong *)(lVar23 + 0x10);
              lVar40 = *(longlong *)(lVar36 + 0x130);
              if (((lVar40 != 0) && (lVar40 = *(longlong *)(lVar40 + 8), lVar40 != 0)) &&
                 (*(short *)(lVar40 + 0x60) != 0x66)) {
                *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5f9e3;
                FUN_140bd2d90(lVar36,0x66,0);
              }
              uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
              *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
              uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
              uVar14 = *(undefined2 *)(&stack0x00000020 + lVar21);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fa0f;
              FUN_1414f55e0(0x1423f3970,lVar23,uVar14,uVar1);
              lVar36 = *(longlong *)(lVar23 + 0x18);
              lStack_2378 = lVar36;
              if (plStack_2430 == plStack_2428) {
                *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5fa38;
                FUN_1400bc360(&plStack_2438,plStack_2430,&lStack_2378);
              }
              else {
                *plStack_2430 = lVar36;
                plStack_2430 = plStack_2430 + 1;
              }
              plVar30 = *(longlong **)(&stack0x00000038 + lVar21);
              if (plVar30 == plStack_23f0) {
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fa65;
                FUN_1400bc360(&lStack_2400,plVar30,&lStack_2378);
                *(longlong **)(&stack0x00000038 + lVar21) = plStack_23f8;
              }
              else {
                *plVar30 = lVar36;
                plStack_23f8 = plVar30 + 1;
                *(longlong **)(&stack0x00000038 + lVar21) = plStack_23f8;
              }
              if ((*(short *)(lVar36 + 0xa0) != 0x67) && (*(short *)(lVar36 + 0xa0) != 0x68)) {
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fa89;
                uVar15 = FUN_14138c220(lVar36);
                *(undefined2 *)(lVar36 + 0xa0) = uVar15;
              }
              *(undefined2 *)(lVar36 + 0xa2) = *(undefined2 *)(lVar36 + 0xa0);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5faa6;
              FUN_1404427d0(lVar36);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5faae;
              FUN_140442370(lVar36);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fac2;
              FUN_140df8a30(lVar23,uVar14,uVar1,uVar44);
              iStack_2318 = iStack_2318 + -1;
              *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + 1;
              *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5fad5;
              FUN_140070d80(&puStack_2370);
            }
LAB_140e5fad5:
            aiStack_2420[0] = aiStack_2420[0] + -1;
            *(longlong *)(&stack0x00000050 + lVar21) = *(longlong *)(&stack0x00000050 + lVar21) + -8
            ;
            plStack_2440 = plStack_2440 + -1;
          } while (-1 < aiStack_2420[0]);
          plVar30 = *(longlong **)(&stack0x00000038 + lVar21);
          lVar23 = lStack_23d0;
        }
        lVar26 = *(longlong *)(lVar23 + 8);
        if (lVar26 != 0) {
          for (psVar25 = *(short **)(lVar26 + 0xb38); psVar25 < *(short **)(lVar26 + 0xb40);
              psVar25 = psVar25 + 2) {
            sVar13 = *psVar25;
            if (((sVar13 < 0) ||
                ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar13))
               || ((lVar36 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar13 * 8),
                   *(int *)(lVar36 + 0x1b0) < 9 ||
                   ((*(byte *)(*(longlong *)(lVar36 + 0x1a8) + 8) & 0x40) == 0)))) {
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fb79;
              uVar19 = FUN_140ece790();
              if (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) * 0x7fffffff <
                  0x40000000) {
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fbad;
                uVar19 = FUN_140ece790();
                uVar19 = (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x2aaaaaab;
                if (uVar19 != 0) {
                  uVar45 = (longlong)plVar30 - lStack_2400 >> 3;
                  goto LAB_140e5fbf0;
                }
              }
              break;
            }
          }
        }
        goto LAB_140e605cf;
      }
LAB_140e605e7:
      iVar38 = iVar18;
      sVar13 = 0x66;
      puStack_23e8 = (undefined4 *)0x0;
      puStack_23e0 = (undefined4 *)0x0;
      uStack_23d8 = 0;
      iVar18 = 0;
      piVar39 = aiStack_2314;
      do {
        if (0 < *piVar39) {
          aiStack_2420[0] = CONCAT22(aiStack_2420[0]._2_2_,(short)iVar18);
          *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6061c;
          func_0x000140070b20(&puStack_23e8,aiStack_2420);
        }
        puVar29 = puStack_23e8;
        iVar18 = iVar18 + 1;
        piVar39 = piVar39 + 1;
      } while (iVar18 < 0x87);
      if ((longlong)puStack_23e0 - (longlong)puStack_23e8 >> 1 != 0) {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6063b;
        iVar18 = FUN_140073560();
        sVar13 = *(short *)((longlong)puVar29 + (longlong)iVar18 * 2);
      }
      lStack_2400 = 0;
      plStack_23f8 = (longlong *)0x0;
      plStack_23f0 = (longlong *)0x0;
      *(undefined1 **)((longlong)&lStackX_8 + lVar21) = &stack0x00000030 + lVar21;
      *(longlong **)(&stack0x00000000 + lVar21) = &lStack_2400;
      *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) =
           *(undefined2 *)(&stack0x0000001c + lVar21);
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6068e;
      FUN_1414f3170(0x1423f3970,sVar13,*(undefined2 *)(&stack0x00000020 + lVar21),
                    *(undefined2 *)(&stack0x00000028 + lVar21));
      iVar17 = 0;
      iVar18 = 0;
      if ((longlong)plStack_23f8 - lStack_2400 >> 3 != 0) {
        uVar45 = 0;
        do {
          puVar28 = (undefined8 *)(lStack_2400 + uVar45 * 8);
          uVar3 = *puVar28;
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e606c4;
          cVar12 = func_0x000140074860(uVar3,0x3a);
          if (cVar12 != '\0') {
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e606d0;
            cVar12 = func_0x0001413a7620(uVar3);
            if (cVar12 != '\0') {
              iVar17 = iVar17 + 1;
            }
          }
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e606e3;
          func_0x0001400bafb0(&plStack_2438,puVar28);
          iVar18 = iVar18 + 1;
          uVar45 = (ulonglong)iVar18;
        } while (uVar45 < (ulonglong)((longlong)plStack_23f8 - lStack_2400 >> 3));
      }
      aiStack_2314[sVar13] = aiStack_2314[sVar13] + -1;
      iStack_2318 = iStack_2318 - iVar17;
      *(int *)(&stack0x00000034 + lVar21) = *(int *)(&stack0x00000034 + lVar21) + -1;
      *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + iVar17;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60720;
      FUN_1400681a0(&lStack_2400);
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6072a;
      FUN_140070de0(&puStack_23e8);
      goto LAB_140e6072e;
    }
    goto LAB_140e61aa6;
  }
LAB_140e61cc2:
  if (0x9d7f < _DAT_1423b38bc) {
    if (iStack_20f4 < 1) {
      if (iStack_20ec < 1) goto LAB_140e61f2b;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61e93;
      func_0x000140070cc0(&puStack_2350);
      if ((&stack0x00000024)[lVar21] == '\0') {
        if (iStack_20f0 < 0x32) {
          puVar33 = &UNK_14174ffc0;
        }
        else {
          puVar33 = &UNK_14174ff70;
          if (0x4a < iStack_20f0) {
            puVar33 = &UNK_141750048;
          }
        }
      }
      else if (iStack_20f0 < 0x32) {
        puVar33 = &UNK_14174fc20;
      }
      else if (iStack_20f0 < 0x4b) {
        puVar33 = &UNK_14174fce0;
      }
      else {
        puVar33 = &UNK_14174fcb0;
      }
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61ef4;
      func_0x000140070bb0(&puStack_2350,puVar33);
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61efd;
      func_0x00014007f210(&uStack_23c8);
      uStack_23c8 = 0x40047;
      uStack_23c4 = 1;
      uStack_23ac = 2000;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61f25;
      FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
    }
    else if (iStack_20ec < 1) {
LAB_140e61f2b:
      if (iStack_20f4 < 1) {
        if (((&stack0x00000024)[lVar21] != '\0') || ((&stack0x00000018)[lVar21] != '\0'))
        goto LAB_140e6202b;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61fe8;
        func_0x00014007f210(&uStack_23c8);
        uStack_23c8 = 0x60048;
        uStack_23c4 = 0;
        uStack_23ac = 2000;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6200c;
        FUN_140069780(&puStack_2350,&UNK_141750018);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e62021;
        FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
      }
      else {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61f3c;
        func_0x000140070cc0(&puStack_2350);
        if ((&stack0x00000024)[lVar21] == '\0') {
          if (iStack_20f8 < 0x32) {
            puVar33 = &UNK_14174fde0;
            if (iStack_20f8 < 10) {
              puVar33 = &UNK_14174fc70;
            }
          }
          else {
            puVar33 = &UNK_14174fe30;
          }
        }
        else if (iStack_20f8 < 0x32) {
          if (iStack_20f8 < 10) {
            puVar33 = &UNK_14174fbb8;
          }
          else {
            puVar33 = &UNK_14174fbe8;
          }
        }
        else {
          puVar33 = &UNK_14174fb20;
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61f9d;
        func_0x000140070bb0(&puStack_2350,puVar33);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61fa6;
        func_0x00014007f210(&uStack_23c8);
        uStack_23c8 = 0x40047;
        uStack_23c4 = 1;
        uStack_23ac = 2000;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61fce;
        FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
      }
    }
    else {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61cf6;
      func_0x000140070cc0(&puStack_2350);
      if ((&stack0x00000024)[lVar21] == '\0') {
        if (iStack_20f0 < 0x32) {
          if (iStack_20f8 < 0x32) {
            if (iStack_20f8 < 10) {
              puVar33 = &UNK_14174fac0;
            }
            else {
              puVar33 = &UNK_14174f9a0;
            }
          }
          else {
            puVar33 = &UNK_14174fa00;
          }
        }
        else if (iStack_20f0 < 0x4b) {
          if (iStack_20f8 < 0x32) {
            if (iStack_20f8 < 10) {
              puVar33 = &UNK_14174fd20;
            }
            else {
              puVar33 = &UNK_14174fd80;
            }
          }
          else {
            puVar33 = &UNK_14174fa60;
          }
        }
        else if (iStack_20f8 < 0x32) {
          puVar33 = &UNK_14174fde0;
          if (iStack_20f8 < 10) {
            puVar33 = &UNK_14174fc70;
          }
        }
        else {
          puVar33 = &UNK_14174fe30;
        }
      }
      else if (iStack_20f0 < 0x32) {
        if (iStack_20f8 < 0x32) {
          if (iStack_20f8 < 10) {
            puVar33 = &UNK_14174f780;
          }
          else {
            puVar33 = &UNK_14174f7d0;
          }
        }
        else {
          puVar33 = &UNK_14174f930;
        }
      }
      else if (iStack_20f0 < 0x4b) {
        if (iStack_20f8 < 0x32) {
          if (iStack_20f8 < 10) {
            puVar33 = &UNK_14174fb70;
          }
          else {
            puVar33 = &UNK_14174f820;
          }
        }
        else {
          puVar33 = &UNK_14174f870;
        }
      }
      else if (iStack_20f8 < 0x32) {
        if (iStack_20f8 < 10) {
          puVar33 = &UNK_14174fbb8;
        }
        else {
          puVar33 = &UNK_14174fbe8;
        }
      }
      else {
        puVar33 = &UNK_14174fb20;
      }
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61e46;
      func_0x000140070bb0(&puStack_2350,puVar33);
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61e4f;
      func_0x00014007f210(&uStack_23c8);
      uStack_23c8 = 0x40047;
      uStack_23c4 = 1;
      uStack_23ac = 2000;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61e77;
      FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
    }
    *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6202b;
    FUN_140070e80(&puStack_2350);
  }
  goto LAB_140e6202b;
  while( true ) {
    if (*(int *)(lVar26 + 0x110) < 0) {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e605ae;
      FUN_141342680(lVar26,1,0);
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e605be;
      FUN_14134e000(lVar26,1,0);
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e605c6;
    FUN_141394980(lVar26);
    if ((int)uVar19 < 1) break;
LAB_140e5fbf0:
    uVar19 = uVar19 - 1;
    lVar26 = _DAT_14250eee8;
    do {
      uVar34 = *(longlong *)(*(longlong *)(lVar23 + 8) + 0xb40) -
               *(longlong *)(*(longlong *)(lVar23 + 8) + 0xb38) >> 2;
      if ((uint)uVar34 < 2) {
        uVar20 = 0;
      }
      else {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fc24;
        uVar20 = FUN_140ece790();
        uVar20 = (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar34 & 0xffffffff)) + 1U);
        lVar26 = _DAT_14250eee8;
      }
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(lVar23 + 8) + 0xb38) + (longlong)(int)uVar20 * 4
                       );
      uVar44 = *(undefined2 *)
                (*(longlong *)(*(longlong *)(lVar23 + 8) + 0xbe0) + (longlong)(int)uVar20 * 2);
      sVar13 = (short)uVar2;
    } while ((((-1 < sVar13) &&
              ((ulonglong)(longlong)sVar13 < (ulonglong)(_DAT_14250eef0 - lVar26 >> 3))) &&
             (lVar36 = *(longlong *)(lVar26 + (longlong)sVar13 * 8), 8 < *(int *)(lVar36 + 0x1b0)))
            && ((*(byte *)(*(longlong *)(lVar36 + 0x1a8) + 8) & 0x40) != 0));
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fcb8;
    lVar26 = FUN_1407a2a80();
    *(int *)(lVar26 + 0x130) = _DAT_14238f5d8;
    _DAT_14238f5d8 = _DAT_14238f5d8 + 1;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fcdc;
    FUN_1400bba90(lVar26,&DAT_142407530);
    *(longlong *)(&stack0x00000038 + lVar21) = lVar26;
    if (plStack_2430 == plStack_2428) {
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e5fd03;
      FUN_1400bc360(&plStack_2438,plStack_2430,&stack0x00000038 + lVar21);
    }
    else {
      *plStack_2430 = lVar26;
      plStack_2430 = plStack_2430 + 1;
    }
    *(undefined4 *)(lVar26 + 0x140) = _DAT_1423b5af0;
    *(undefined4 *)(lVar26 + 0xa0) = 0x660066;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fd2b;
    FUN_14139af30(lVar26,uVar2 & 0xffff,uVar44,0);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fd33;
    FUN_14139ada0(lVar26);
    lVar36 = lStack_2400;
    sVar13 = *(short *)(lVar26 + 300);
    uVar34 = (ulonglong)sVar13;
    sVar16 = *(short *)(lVar26 + 0xa4);
    uVar42 = (ulonglong)sVar16;
    if (-1 < sVar16) {
      if (uVar42 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if ((sVar13 < 0) ||
           (lVar40 = *(longlong *)(_DAT_14250eee8 + uVar42 * 8),
           lVar27 = *(longlong *)(lVar40 + 0x178),
           (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3) <= uVar34)) goto LAB_140e5fdde;
        lVar40 = *(longlong *)(lVar27 + uVar34 * 8);
        if ((*(int *)(lVar40 + 0x6b0) < 7) ||
           ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 6) & 0x20) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_140e5fdba;
LAB_140e5fe36:
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fe3b;
        uVar20 = FUN_140ece790();
        if (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff <
            0x10000000) {
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e5fe6f;
          uVar20 = FUN_140ece790();
          if (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff <
              0x40000000) {
LAB_140e5ff1d:
            sVar13 = *(short *)(lVar26 + 300);
            uVar37 = *(ushort *)(lVar26 + 0xa4);
            if (-1 < (short)uVar37) {
LAB_140e5ff30:
              if (((ulonglong)uVar37 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) &&
                 (-1 < sVar13)) {
                lVar40 = *(longlong *)(_DAT_14250eee8 + (ulonglong)uVar37 * 8);
                lVar27 = *(longlong *)(lVar40 + 0x178);
                if ((ulonglong)(longlong)sVar13 <
                    (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3)) {
                  lVar40 = *(longlong *)(lVar27 + (longlong)sVar13 * 8);
                  if ((*(int *)(lVar40 + 0x6b0) < 0xc) ||
                     ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 0xb) & 1) == 0)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    *(undefined2 *)(lVar26 + 0xa0) = 99;
                    goto LAB_140e5ffc3;
                  }
                }
              }
            }
          }
          else {
            sVar13 = *(short *)(lVar26 + 300);
            sVar16 = *(short *)(lVar26 + 0xa4);
            if ((sVar16 < 0) ||
               ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar16))
            goto LAB_140e5ff1d;
            if ((sVar13 < 0) ||
               (lVar40 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar16 * 8),
               lVar27 = *(longlong *)(lVar40 + 0x178),
               (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3) <=
               (ulonglong)(longlong)sVar13)) {
              sVar13 = *(short *)(lVar26 + 300);
              uVar37 = *(ushort *)(lVar26 + 0xa4);
              goto LAB_140e5ff30;
            }
            lVar40 = *(longlong *)(lVar27 + (longlong)sVar13 * 8);
            if ((*(int *)(lVar40 + 0x6b0) < 7) ||
               ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 6) & 0x20) == 0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_140e5ff1d;
          }
          *(undefined2 *)(lVar26 + 0xa0) = 0x62;
        }
      }
      else {
LAB_140e5fdba:
        if ((-1 < sVar16) && (uVar42 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
LAB_140e5fdde:
          if ((-1 < sVar13) &&
             (lVar40 = *(longlong *)(_DAT_14250eee8 + uVar42 * 8),
             lVar27 = *(longlong *)(lVar40 + 0x178),
             uVar34 < (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3))) {
            lVar40 = *(longlong *)(lVar27 + uVar34 * 8);
            if ((*(int *)(lVar40 + 0x6b0) < 0xc) ||
               ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 0xb) & 1) == 0)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_140e5fe36;
          }
        }
      }
    }
LAB_140e5ffc3:
    sVar13 = *(short *)(lVar26 + 300);
    sVar16 = *(short *)(lVar26 + 0xa4);
    if ((((-1 < sVar16) &&
         ((ulonglong)(longlong)sVar16 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
        (-1 < sVar13)) &&
       (lVar40 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar16 * 8),
       lVar27 = *(longlong *)(lVar40 + 0x178),
       (ulonglong)(longlong)sVar13 < (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3))) {
      lVar40 = *(longlong *)(lVar27 + (longlong)sVar13 * 8);
      if ((*(int *)(lVar40 + 0x6b0) < 0xd) ||
         ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 0xc) & 4) == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6003e;
        uVar20 = FUN_140ece790();
        if (0xfffffff <
            uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff) {
          *(undefined2 *)(lVar26 + 0xa0) = 0x67;
        }
      }
    }
    uVar44 = *(undefined2 *)(&stack0x00000020 + lVar21);
    *(undefined2 *)(lVar26 + 0xa8) = uVar44;
    uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
    *(undefined2 *)(lVar26 + 0xaa) = uVar1;
    uVar14 = *(undefined2 *)(&stack0x0000001c + lVar21);
    *(undefined2 *)(lVar26 + 0xac) = uVar14;
    uVar37 = 3;
    uVar35 = 3;
    if (_DAT_1418be238 == 1) {
      uVar37 = 0;
      uVar35 = 0;
    }
    *(undefined2 *)(lVar26 + 0xae) = uVar44;
    *(undefined2 *)(lVar26 + 0xb0) = uVar1;
    *(undefined2 *)(lVar26 + 0xb2) = uVar14;
    *(uint *)(lVar26 + 0xb4) = (uint)uVar37;
    *(undefined2 *)(lVar26 + 0xb8) = 0xffff;
    iVar18 = *(int *)(lVar26 + 0x3dc);
    if ((iVar18 != -1) && (iVar17 = (int)(_DAT_142407538 - _DAT_142407530 >> 3), iVar17 != 0)) {
      iVar31 = 0;
      iVar17 = iVar17 + -1;
      if (-1 < iVar17) {
        do {
          iVar32 = iVar31 + iVar17 >> 1;
          lVar40 = *(longlong *)(_DAT_142407530 + (longlong)iVar32 * 8);
          if (*(int *)(lVar40 + 0x130) == iVar18) goto LAB_140e6012c;
          iVar11 = iVar32 + -1;
          if (*(int *)(lVar40 + 0x130) < iVar18) {
            iVar11 = iVar17;
            iVar31 = iVar32 + 1;
          }
          iVar17 = iVar11;
        } while (iVar31 <= iVar17);
      }
      lVar40 = 0;
LAB_140e6012c:
      if (lVar40 != 0) {
        *(undefined2 *)(lVar40 + 0xae) = *(undefined2 *)(&stack0x00000020 + lVar21);
        *(undefined2 *)(lVar40 + 0xb0) = *(undefined2 *)(&stack0x00000028 + lVar21);
        *(undefined2 *)(lVar40 + 0xb2) = *(undefined2 *)(&stack0x0000001c + lVar21);
        *(undefined4 *)(lVar40 + 0xb4) = uVar35;
        *(undefined2 *)(lVar40 + 0xb8) = 0xffff;
      }
    }
    for (puVar28 = *(undefined8 **)(lVar26 + 0x9a8); puVar28 < *(undefined8 **)(lVar26 + 0x9b0);
        puVar28 = puVar28 + 1) {
      psVar25 = (short *)*puVar28;
      if (*psVar25 == 7) {
        psVar25[2] = 0x9c4;
        psVar25[3] = 0;
        goto LAB_140e601e6;
      }
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e601b1;
    puVar24 = (undefined2 *)FUN_1415530e0(8);
    *(undefined2 **)(&stack0x00000040 + lVar21) = puVar24;
    *puVar24 = 7;
    *(undefined4 *)(puVar24 + 2) = 0x9c4;
    puVar28 = *(undefined8 **)(lVar26 + 0x9b0);
    if (puVar28 == *(undefined8 **)(lVar26 + 0x9b8)) {
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e601e6;
      FUN_1400bc360(lVar26 + 0x9a8,puVar28,&stack0x00000040 + lVar21);
    }
    else {
      *puVar28 = puVar24;
      *(longlong *)(lVar26 + 0x9b0) = *(longlong *)(lVar26 + 0x9b0) + 8;
    }
LAB_140e601e6:
    for (puVar28 = *(undefined8 **)(lVar26 + 0x9a8); puVar28 < *(undefined8 **)(lVar26 + 0x9b0);
        puVar28 = puVar28 + 1) {
      psVar25 = (short *)*puVar28;
      if (*psVar25 == 8) {
        psVar25[2] = -0x7640;
        psVar25[3] = 1;
        goto LAB_140e6024d;
      }
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60219;
    puVar24 = (undefined2 *)FUN_1415530e0(8);
    *(undefined2 **)(&stack0x00000040 + lVar21) = puVar24;
    *puVar24 = 8;
    *(undefined4 *)(puVar24 + 2) = 0x189c0;
    puVar28 = *(undefined8 **)(lVar26 + 0x9b0);
    if (puVar28 == *(undefined8 **)(lVar26 + 0x9b8)) {
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6024d;
      FUN_1400bc360(lVar26 + 0x9a8,puVar28,&stack0x00000040 + lVar21);
    }
    else {
      *puVar28 = puVar24;
      *(longlong *)(lVar26 + 0x9b0) = *(longlong *)(lVar26 + 0x9b0) + 8;
    }
LAB_140e6024d:
    for (puVar28 = *(undefined8 **)(lVar26 + 0x9a8); puVar28 < *(undefined8 **)(lVar26 + 0x9b0);
        puVar28 = puVar28 + 1) {
      psVar25 = (short *)*puVar28;
      if (*psVar25 == 0x18) {
        psVar25[2] = 1;
        psVar25[3] = 0;
        goto LAB_140e602bb;
      }
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60285;
    puVar24 = (undefined2 *)FUN_1415530e0(8);
    *(undefined2 **)(&stack0x00000040 + lVar21) = puVar24;
    *puVar24 = 0x18;
    *(undefined4 *)(puVar24 + 2) = 1;
    puVar28 = *(undefined8 **)(lVar26 + 0x9b0);
    if (puVar28 == *(undefined8 **)(lVar26 + 0x9b8)) {
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e602bb;
      FUN_1400bc360(lVar26 + 0x9a8,puVar28,&stack0x00000040 + lVar21);
    }
    else {
      *puVar28 = puVar24;
      *(longlong *)(lVar26 + 0x9b0) = *(longlong *)(lVar26 + 0x9b0) + 8;
    }
LAB_140e602bb:
    *(uint *)(lVar26 + 0x110) = *(uint *)(lVar26 + 0x110) | 0x4000000;
    *(undefined4 *)(lVar26 + 0x138) = 7;
    for (puVar28 = *(undefined8 **)(lVar26 + 0x9a8); puVar28 < *(undefined8 **)(lVar26 + 0x9b0);
        puVar28 = puVar28 + 1) {
      psVar25 = (short *)*puVar28;
      if (*psVar25 == 0x32) {
        psVar25[2] = -0x7640;
        psVar25[3] = 1;
        goto LAB_140e6033b;
      }
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60305;
    puVar24 = (undefined2 *)FUN_1415530e0(8);
    *(undefined2 **)(&stack0x00000040 + lVar21) = puVar24;
    *puVar24 = 0x32;
    *(undefined4 *)(puVar24 + 2) = 0x189c0;
    puVar28 = *(undefined8 **)(lVar26 + 0x9b0);
    if (puVar28 == *(undefined8 **)(lVar26 + 0x9b8)) {
      *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6033b;
      FUN_1400bc360(lVar26 + 0x9a8,puVar28,&stack0x00000040 + lVar21);
    }
    else {
      *puVar28 = puVar24;
      *(longlong *)(lVar26 + 0x9b0) = *(longlong *)(lVar26 + 0x9b0) + 8;
    }
LAB_140e6033b:
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60343;
    FUN_1413a29c0(lVar26);
    if ((uint)uVar45 < 2) {
      uVar20 = 0;
    }
    else {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60352;
      uVar20 = FUN_140ece790();
      uVar20 = (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               ((int)(0x7fffffff / (uVar45 & 0xffffffff)) + 1U);
    }
    lVar36 = *(longlong *)(lVar36 + (longlong)(int)uVar20 * 8);
    bVar8 = false;
    bVar6 = false;
    uVar37 = *(ushort *)(lVar26 + 300);
    sVar13 = *(short *)(lVar26 + 0xa4);
    uVar34 = (ulonglong)sVar13;
    if (sVar13 < 0) {
LAB_140e6053d:
      if (bVar6) goto LAB_140e60542;
    }
    else {
      if (uVar34 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if ((short)uVar37 < 0) {
LAB_140e60434:
          if (-1 < (short)uVar37) goto LAB_140e60439;
        }
        else {
          lVar40 = *(longlong *)(_DAT_14250eee8 + uVar34 * 8);
          lVar27 = *(longlong *)(lVar40 + 0x178);
          if ((ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3) <=
              (ulonglong)(longlong)(short)uVar37) goto LAB_140e60434;
          lVar40 = *(longlong *)(lVar27 + (longlong)(short)uVar37 * 8);
          if ((*(int *)(lVar40 + 0x6b0) < 0xc) ||
             ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 0xb) & 1) == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_140e60419;
          bVar8 = true;
LAB_140e60439:
          lVar40 = *(longlong *)(_DAT_14250eee8 + uVar34 * 8);
          lVar27 = *(longlong *)(lVar40 + 0x178);
          if ((ulonglong)uVar37 < (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3)) {
            lVar40 = *(longlong *)(lVar27 + (ulonglong)uVar37 * 8);
            if ((*(int *)(lVar40 + 0x6b0) < 7) ||
               ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 6) & 0x20) == 0)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            bVar6 = bVar8;
            if (!bVar7) goto LAB_140e6048e;
            bVar8 = true;
          }
        }
        sVar13 = *(short *)(lVar26 + 300);
        sVar16 = *(short *)(lVar26 + 0xa4);
        bVar6 = bVar8;
      }
      else {
LAB_140e60419:
        if (sVar13 < 0) goto LAB_140e6053d;
        bVar6 = bVar8;
        if (uVar34 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) goto LAB_140e60434;
LAB_140e6048e:
        sVar13 = *(short *)(lVar26 + 300);
        sVar16 = *(short *)(lVar26 + 0xa4);
        if (sVar16 < 0) goto LAB_140e6053d;
      }
      if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar16) ||
         (sVar13 < 0)) goto LAB_140e6053d;
      lVar40 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar16 * 8);
      lVar27 = *(longlong *)(lVar40 + 0x178);
      if (((ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3) <= (ulonglong)(longlong)sVar13)
         || (lVar40 = *(longlong *)(lVar27 + (longlong)sVar13 * 8), lVar40 == 0))
      goto LAB_140e6053d;
      lVar27 = *(longlong *)(lVar40 + 0x15e0) - *(longlong *)(lVar40 + 0x15d8) >> 2;
      if ((lVar27 == 0) ||
         (*(int *)(lVar36 + 0x6ac) <= *(int *)(*(longlong *)(lVar40 + 0x15d8) + -4 + lVar27 * 4)))
      goto LAB_140e6053d;
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60514;
      uVar20 = FUN_140ece790();
      if (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff <
          0x2aaaaaab) goto LAB_140e6053d;
LAB_140e60542:
      *(longlong *)(lVar26 + 0x3b0) = lVar36;
      *(undefined4 *)(lVar26 + 0xbc) = 2;
      *(undefined2 *)(lVar26 + 0x3b8) = 8;
      if ((*(short *)(lVar26 + 0xa0) == 0x66) || ((ushort)(*(short *)(lVar26 + 0xa0) - 0x67U) < 2))
      {
        uVar44 = *(undefined2 *)(lVar26 + 300);
        uVar1 = *(undefined2 *)(lVar26 + 0xa4);
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60586;
        cVar12 = FUN_14138ee10(uVar1,uVar44);
        if (cVar12 != '\0') {
          uVar35 = *(undefined4 *)(lVar36 + 0x130);
          *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e60598;
          FUN_140e74da0(lVar26,uVar35);
        }
      }
    }
  }
LAB_140e605cf:
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e605d8;
  FUN_140070d80(&puStack_23e8);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e605e2;
  FUN_1400681a0(&lStack_2400);
LAB_140e6072e:
  plVar30 = plStack_2418;
  uVar19 = _DAT_1423bc504;
  lVar23 = lStack_2410 - (longlong)plStack_2418;
  if ((DAT_1423b375e != '\0') && (0 < (int)_DAT_1423bc504)) {
    if (_DAT_1423bc504 < 2) {
      uVar19 = 0;
    }
    else {
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60766;
      uVar20 = FUN_140ece790();
      uVar19 = (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               ((int)(0x7fffffff / (ulonglong)uVar19) + 1U);
    }
    plVar41 = _DAT_142407600;
    if ((uVar19 == 0) && (0 < *(int *)(&stack0x00000030 + lVar21))) {
      if ((-1 < _DAT_1423b5afc) &&
         ((ulonglong)(longlong)_DAT_1423b5afc < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)))
      {
        lVar23 = *(longlong *)(_DAT_14250eee8 + (longlong)_DAT_1423b5afc * 8);
        if ((*(int *)(lVar23 + 0x1b0) < 0xe) ||
           ((*(byte *)(*(longlong *)(lVar23 + 0x1a8) + 0xd) & 8) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lStack_2400 = 0;
          plStack_23f8 = (longlong *)0x0;
          plStack_23f0 = (longlong *)0x0;
          lVar23 = _DAT_14250eee8;
          for (plVar30 = _DAT_1424075f8; lVar26 = lStack_2400, plVar30 < plVar41;
              plVar30 = plVar30 + 1) {
            lVar26 = *plVar30;
            *(longlong *)(&stack0x00000040 + lVar21) = lVar26;
            lVar36 = *(longlong *)(lVar26 + 0x10);
            if ((((lVar36 != 0) &&
                 (((0 < *(int *)(lVar36 + 0xd0) && (**(char **)(lVar36 + 200) < '\0')) ||
                  (*(int *)(lVar36 + 0x30) == -1)))) &&
                (((((_DAT_1418be238 != 0 || (*(int *)(lVar36 + 0x28) == -1)) ||
                   (_DAT_142167754 + 2 < *(int *)(lVar36 + 0x28))) ||
                  ((0 < *(int *)(lVar36 + 0xd0) && (**(char **)(lVar36 + 200) < '\0')))) ||
                 (((*(longlong *)(lVar36 + 0x130) != 0 &&
                   (lVar40 = *(longlong *)(*(longlong *)(lVar36 + 0x130) + 0x48), lVar40 != 0)) &&
                  ((*(longlong *)(lVar40 + 0x160) != 0 ||
                   (((*(byte *)(lVar40 + 0x84) & 1) == 0 && ((*(byte *)(lVar40 + 0x80) & 1) != 0))))
                  )))))) &&
               ((*(longlong *)(lVar26 + 0x18) == 0 ||
                (-1 < *(int *)(*(longlong *)(lVar26 + 0x18) + 0x110))))) {
              sVar13 = *(short *)(lVar36 + 4);
              sVar16 = *(short *)(lVar36 + 2);
              if ((((sVar16 < 0) ||
                   ((ulonglong)(_DAT_14250eef0 - lVar23 >> 3) <= (ulonglong)(longlong)sVar16)) ||
                  (sVar13 < 0)) ||
                 (lVar40 = *(longlong *)(lVar23 + (longlong)sVar16 * 8),
                 lVar27 = *(longlong *)(lVar40 + 0x178),
                 (ulonglong)(*(longlong *)(lVar40 + 0x180) - lVar27 >> 3) <=
                 (ulonglong)(longlong)sVar13)) {
LAB_140e6098a:
                lVar36 = *(longlong *)(lVar36 + 0x130);
                if (((lVar36 == 0) || (lVar40 = *(longlong *)(lVar36 + 0x48), lVar40 == 0)) ||
                   (((*(uint *)(lVar40 + 0x7c) & 0x10000000) != 0 ||
                    ((*(uint *)(lVar40 + 0x78) & 0x10000000) == 0)))) goto LAB_140e60ae0;
              }
              else {
                lVar40 = *(longlong *)(lVar27 + (longlong)sVar13 * 8);
                if ((*(int *)(lVar40 + 0x6b0) < 0x15) ||
                   ((*(byte *)(*(longlong *)(lVar40 + 0x6a8) + 0x14) & 4) == 0)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (!bVar6) goto LAB_140e6098a;
                lVar36 = *(longlong *)(lVar36 + 0x130);
                if (((lVar36 != 0) && (*(longlong *)(lVar36 + 0x48) != 0)) &&
                   ((*(uint *)(*(longlong *)(lVar36 + 0x48) + 0x7c) & 0x10000000) != 0))
                goto LAB_140e60ae0;
              }
              lVar40 = *(longlong *)(lVar26 + 0x10);
              if (lVar36 == 0) {
                lVar36 = 0;
              }
              else {
                lVar36 = *(longlong *)(lVar36 + 0x48);
              }
              if (*(short *)(lVar40 + 2) == _DAT_1423b5afc) {
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e609f4;
                cVar12 = func_0x0001400735c0(lVar40 + 200,7);
                if (((cVar12 == '\0') && ((lVar36 == 0 || (*(longlong *)(lVar36 + 0x160) == 0)))) &&
                   (*(int *)(lVar26 + 0x20) == -1)) {
                  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a2a;
                  cVar12 = FUN_140baef80(lVar40,0xffffffff,2);
                  lVar23 = _DAT_14250eee8;
                  if (cVar12 == '\0') {
                    uVar3 = *(undefined8 *)(lVar26 + 0x10);
                    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a43;
                    sVar13 = FUN_140baf080(uVar3,4,0xffffffff);
                    lVar23 = _DAT_14250eee8;
                    if (sVar13 == 0) {
                      uVar3 = *(undefined8 *)(lVar26 + 0x10);
                      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a5d;
                      sVar13 = FUN_140baf080(uVar3,6,0xffffffff);
                      lVar23 = _DAT_14250eee8;
                      if (sVar13 == 0) {
                        uVar3 = *(undefined8 *)(lVar26 + 0x10);
                        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a71;
                        sVar13 = FUN_140bb0a50(uVar3,7,0xffffffff);
                        lVar23 = _DAT_14250eee8;
                        if (sVar13 == 0) {
                          uVar3 = *(undefined8 *)(lVar26 + 0x10);
                          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a8b;
                          sVar13 = FUN_140baf080(uVar3,1,_DAT_1423b5af8);
                          lVar23 = _DAT_14250eee8;
                          if (sVar13 == 0) {
                            uVar3 = *(undefined8 *)(lVar26 + 0x10);
                            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60a9e;
                            iVar38 = FUN_140bb09f0(uVar3,2);
                            if (iVar38 != -1) {
                              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60ab1;
                              lVar23 = FUN_1400693f0(0x14251c138,iVar38);
                              if (lVar23 != 0) {
                                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60ac7;
                                cVar12 = FUN_140baef80(lVar23,0xffffffff,2);
                                lVar23 = _DAT_14250eee8;
                                if (cVar12 != '\0') goto LAB_140e60ae0;
                              }
                            }
                            *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e60ad9;
                            func_0x0001400bafb0(&lStack_2400,&stack0x00000040 + lVar21);
                            lVar23 = _DAT_14250eee8;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_140e60ae0:
          }
          uVar45 = (longlong)plStack_23f8 - lStack_2400 >> 3;
          uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
          if (uVar45 != 0) {
            if ((uint)uVar45 < 2) {
              uVar19 = 0;
            }
            else {
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60b1b;
              uVar19 = FUN_140ece790();
              uVar19 = (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) *
                                 0x7fffffff) / ((int)(0x7fffffff / (uVar45 & 0xffffffff)) + 1U);
            }
            lVar23 = *(longlong *)(lVar26 + (longlong)(int)uVar19 * 8);
            *(longlong *)(&stack0x00000040 + lVar21) = lVar23;
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60b76;
            FUN_140bae090(uVar3,10,0xffffffff,1);
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60b8f;
            FUN_140bae090(uVar3,2,0xffffffff,1);
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60ba8;
            FUN_140bae090(uVar3,4,0xffffffff,1);
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60bc1;
            FUN_140bae090(uVar3,6,0xffffffff,1);
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60bda;
            FUN_140bae090(uVar3,0xf,0xffffffff,1);
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60bf3;
            FUN_140bae090(uVar3,0xd,0xffffffff,1);
            puStack_23e8 = (undefined4 *)0x0;
            puStack_23e0 = (undefined4 *)0x0;
            uStack_23d8 = 0;
            plVar30 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xe8);
            plVar41 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xf0);
            lVar26 = _DAT_1423f3c78;
            puVar29 = puStack_23e8;
            puVar9 = puStack_23e0;
            if (plVar30 != plVar41) {
              do {
                lVar23 = *plVar30;
                iVar38 = *(int *)(lVar23 + 8);
                iVar18 = (int)(_DAT_1423f3c80 - lVar26 >> 3);
                if ((iVar18 != 0) && (iVar38 != -1)) {
                  iVar17 = *(int *)(lVar23 + 0xc);
                  if ((-1 < iVar17) && (iVar17 < iVar18)) {
                    puVar24 = *(undefined2 **)(lVar26 + (longlong)iVar17 * 8);
                    if (*(int *)(puVar24 + 2) == iVar38) {
LAB_140e60cc4:
                      if (puVar24 != (undefined2 *)0x0) {
                        switch(*puVar24) {
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                          uVar35 = *(undefined4 *)(puVar24 + 2);
                          *(undefined **)((longlong)&uStack_30 + lVar21) = &UNK_140e60cf0;
                          FUN_1400bb4a0(uVar35,&puStack_23e8);
                          lVar26 = _DAT_1423f3c78;
                        }
                      }
                      goto LAB_140e60cf7;
                    }
                    *(undefined4 *)(lVar23 + 0xc) = 0xffffffff;
                    lVar26 = _DAT_1423f3c78;
                  }
                  iVar17 = 0;
                  iVar18 = iVar18 + -1;
                  if (-1 < iVar18) {
                    do {
                      iVar31 = iVar18 + iVar17 >> 1;
                      puVar24 = *(undefined2 **)(lVar26 + (longlong)iVar31 * 8);
                      if (*(int *)(puVar24 + 2) == iVar38) {
                        *(int *)(lVar23 + 0xc) = iVar31;
                        lVar26 = _DAT_1423f3c78;
                        goto LAB_140e60cc4;
                      }
                      iVar32 = iVar31 + -1;
                      if (*(int *)(puVar24 + 2) < iVar38) {
                        iVar32 = iVar18;
                        iVar17 = iVar31 + 1;
                      }
                      iVar18 = iVar32;
                    } while (iVar17 <= iVar18);
                  }
                }
LAB_140e60cf7:
                plVar30 = plVar30 + 1;
              } while (plVar30 != plVar41);
              lVar23 = *(longlong *)(&stack0x00000040 + lVar21);
              uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
              puVar29 = puStack_23e8;
              puVar9 = puStack_23e0;
            }
            for (; puVar10 = puStack_23e0, puVar29 != puStack_23e0; puVar29 = puVar29 + 1) {
              (&stack0xfffffffffffffff8)[lVar21] = 0;
              uVar35 = *puVar29;
              uVar3 = *(undefined8 *)(lVar23 + 0x10);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60d39;
              puStack_23e0 = puVar9;
              FUN_140bae090(uVar3,0xffffffff,uVar35,1);
              puVar9 = puStack_23e0;
              puStack_23e0 = puVar10;
            }
            lVar26 = *(longlong *)(lVar23 + 0x10);
            iVar38 = (int)(*(longlong *)(lVar26 + 0x108) - *(longlong *)(lVar26 + 0x100) >> 3) + -1;
            puStack_23e0 = puVar9;
            if (-1 < iVar38) {
              lVar36 = (longlong)iVar38 * 8;
              do {
                pcVar4 = *(code **)**(undefined8 **)(lVar36 + *(longlong *)(lVar26 + 0x100));
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60d80;
                (*pcVar4)();
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60d8d;
                FUN_140bb0300(lVar26,iVar38,0);
                lVar36 = lVar36 + -8;
                iVar38 = iVar38 + -1;
              } while (-1 < iVar38);
            }
            lVar26 = *(longlong *)(lVar23 + 0x10);
            lVar36 = *(longlong *)(lVar26 + 0x130);
            if (((lVar36 != 0) && (lVar36 = *(longlong *)(lVar36 + 8), lVar36 != 0)) &&
               (*(short *)(lVar36 + 0x60) != 0x66)) {
              *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e60dc3;
              FUN_140bd2d90(lVar26,0x66,0);
            }
            *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
            uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
            uVar14 = *(undefined2 *)(&stack0x00000020 + lVar21);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60deb;
            FUN_1414f55e0(0x1423f3970,lVar23,uVar14,uVar1);
            lVar26 = *(longlong *)(lVar23 + 0x18);
            *(longlong *)(&stack0x00000040 + lVar21) = lVar26;
            if (plStack_2430 == plStack_2428) {
              *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e60e16;
              FUN_1400bc360(&plStack_2438,plStack_2430,&stack0x00000040 + lVar21);
            }
            else {
              *plStack_2430 = lVar26;
              plStack_2430 = plStack_2430 + 1;
            }
            sVar13 = *(short *)(lVar26 + 0xa0);
            if ((sVar13 != 0x67) && (sVar13 != 0x68)) {
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60e34;
              sVar13 = FUN_14138c220(lVar26);
              *(short *)(lVar26 + 0xa0) = sVar13;
            }
            *(short *)(lVar26 + 0xa2) = sVar13;
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60e4c;
            FUN_1404427d0(lVar26);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60e54;
            FUN_140442370(lVar26);
            if (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x130) == 0) {
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60e6c;
              puVar28 = (undefined8 *)FUN_1415530e0(0x68);
              *(undefined8 **)(&stack0x00000040 + lVar21) = puVar28;
              *puVar28 = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
              puVar28[3] = 0;
              puVar28[4] = 0;
              puVar28[5] = 0;
              puVar28[6] = 0;
              puVar28[7] = 0;
              puVar28[8] = 0;
              puVar28[9] = 0;
              puVar28[10] = 0;
              puVar28[0xb] = 0;
              puVar28[0xc] = 0;
              *(undefined8 **)(*(longlong *)(lVar23 + 0x10) + 0x130) = puVar28;
            }
            if (*(longlong *)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x130) + 0x58) == 0) {
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60ed4;
              puVar28 = (undefined8 *)FUN_1415530e0(0x60);
              *(undefined8 **)(&stack0x00000040 + lVar21) = puVar28;
              *puVar28 = 0;
              puVar28[1] = 0;
              puVar28[2] = 0;
              puVar28[3] = 0;
              puVar28[4] = 0;
              puVar28[5] = 0;
              puVar28[7] = 0;
              puVar28[8] = 0;
              puVar28[9] = 0;
              *(undefined4 *)(puVar28 + 6) = 0xffffffff;
              *(undefined4 *)(puVar28 + 10) = 0;
              puVar28[0xb] = 0;
              *(undefined8 **)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x130) + 0x58) = puVar28
              ;
            }
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60f23;
            uStack_2358 = FUN_1415530e0(0xe8);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60f31;
            puVar29 = (undefined4 *)FUN_140c519c0(uStack_2358,0);
            puVar29[0x23] = *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
            puVar29[0x20] = (int)*(short *)(*(longlong *)(lVar23 + 0x10) + 2);
            *(undefined2 *)(puVar29 + 0x21) = *(undefined2 *)(*(longlong *)(lVar23 + 0x10) + 4);
            lVar26 = *(longlong *)(lVar23 + 0x10);
            iVar38 = _DAT_142167754;
            iVar18 = _DAT_1423aa348;
            if (*(int *)(lVar26 + 0x18) != -1) {
              iVar38 = *(int *)(lVar26 + 0x18);
              iVar18 = *(int *)(lVar26 + 0x1c);
            }
            if (((*(int *)(lVar26 + 0x14) == -1) || (iVar18 == -1)) || (1 < _DAT_1418be238)) {
              iVar38 = (iVar38 - *(int *)(lVar26 + 0x20)) - *(int *)(lVar26 + 0x10);
            }
            else {
              iVar38 = (iVar38 - *(int *)(lVar26 + 0x20)) - *(int *)(lVar26 + 0x10);
              iVar18 = iVar18 - (*(int *)(lVar26 + 0x24) + *(int *)(lVar26 + 0x14));
              if (iVar18 < 0) {
                iVar18 = (int)((ulonglong)((longlong)(0x62700 - iVar18) * -0x299c335d) >> 0x20);
                iVar38 = iVar38 + ((iVar18 >> 0x10) - (iVar18 >> 0x1f));
              }
            }
            puVar29[0x25] = _DAT_142167754 - iVar38;
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e60fe1;
            uVar19 = FUN_140ece790();
            lVar36 = lStack_23d0;
            puVar29[0x26] =
                 (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / 0x14cf;
            lVar26 = *(longlong *)(lStack_23d0 + 8);
            if (lVar26 != 0) {
              *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6102b;
              FUN_14094b310(lVar26,puVar29 + 2,0);
            }
            puVar29[0x24] = 0;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x130) + 0x58) + 0x30) =
                 *puVar29;
            lVar26 = *(longlong *)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x130) + 0x58);
            uVar35 = *puVar29;
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61063;
            FUN_1400bb4a0(uVar35,lVar26 + 0x38);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61068;
            plVar30 = (longlong *)FUN_140105a90();
            *(undefined4 *)(plVar30 + 5) = *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
            *(undefined4 *)((longlong)plVar30 + 0x2c) = *puVar29;
            if (*(longlong *)(lVar36 + 8) != 0) {
              *(undefined4 *)(plVar30 + 6) = *(undefined4 *)(*(longlong *)(lVar36 + 8) + 4);
            }
            *(int *)(plVar30 + 1) = _DAT_142167754;
            *(int *)((longlong)plVar30 + 0xc) = _DAT_1423aa348;
            pcVar4 = *(code **)(*plVar30 + 0x128);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e610ac;
            (*pcVar4)(plVar30);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e610c0;
            FUN_140df8a30(lVar23,uVar14,uVar1,uVar44);
            iStack_2318 = iStack_2318 + -1;
            *(int *)(&stack0x00000034 + lVar21) = *(int *)(&stack0x00000034 + lVar21) + -1;
            *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + 1;
            *(int *)(&stack0x00000030 + lVar21) = *(int *)(&stack0x00000030 + lVar21) + -1;
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e610db;
            FUN_140070d80(&puStack_23e8);
          }
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e610e5;
          FUN_1400681a0(&lStack_2400);
        }
      }
      goto LAB_140e61a91;
    }
  }
  lVar26 = lStack_2410;
  if (lStack_2410 - (longlong)plVar30 >> 3 != 0) {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61106;
    uVar19 = FUN_140ece790();
    if (((uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) * 0x7fffffff <
          0x20000000) || (0x31 < (int)(lVar23 >> 3))) && (iVar38 == 0)) {
      uVar45 = lVar26 - (longlong)plVar30 >> 3;
      if ((uint)uVar45 < 2) {
        uVar19 = 0;
      }
      else {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6115b;
        uVar19 = FUN_140ece790();
        uVar19 = (uVar19 + (int)((longlong)((ulonglong)uVar19 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / ((int)(0x7fffffff / (uVar45 & 0xffffffff)) + 1U);
      }
      lVar23 = plVar30[(int)uVar19];
      if ((**(short **)(lVar23 + 0x10) != 0x67) && (**(short **)(lVar23 + 0x10) != 0x68)) {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e611ba;
        FUN_1400bafd0(&plStack_2418);
        iVar18 = 1;
        iVar38 = (int)(lStack_2410 - (longlong)plStack_2418 >> 3) + -1;
        plStack_2440 = (longlong *)(longlong)iVar38;
        if (-1 < iVar38) {
          do {
            lVar26 = plStack_2418[(longlong)plStack_2440];
            iVar38 = *(int *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
            plVar41 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x120);
            for (plVar30 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x118); plVar30 < plVar41;
                plVar30 = plVar30 + 1) {
              puVar28 = (undefined8 *)*plVar30;
              pcVar4 = *(code **)*puVar28;
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61216;
              sVar13 = (*pcVar4)(puVar28);
              if ((sVar13 == 2) && ((*(int *)(puVar28 + 1) == iVar38 || (iVar38 == -1)))) {
                if (*(short *)((longlong)puVar28 + 0xc) != 0) {
                  iVar18 = iVar18 + 1;
                  goto LAB_140e61240;
                }
                break;
              }
            }
            psVar25 = *(short **)(lVar26 + 0x10);
            sVar13 = *psVar25;
            if ((sVar13 == 0x67) || (sVar13 == 0x68)) {
              uVar35 = *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e613f9;
              sVar13 = FUN_140bb0a50(psVar25,0,uVar35);
              if (sVar13 < 1) {
                uVar35 = *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
                uVar3 = *(undefined8 *)(lVar26 + 0x10);
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6141f;
                sVar13 = FUN_140bb0a50(uVar3,1,uVar35);
                if (0 < sVar13) {
                  iVar18 = iVar18 + 1;
                }
              }
              else {
                iVar18 = iVar18 + 1;
              }
            }
LAB_140e61240:
            plStack_2440 = (longlong *)((longlong)plStack_2440 + -1);
          } while (-1 < (longlong)plStack_2440);
        }
        lVar26 = lStack_2410;
        plVar30 = plStack_2418;
        if (iVar18 <= *(int *)(&stack0x00000030 + lVar21)) {
          *(int *)(&stack0x00000030 + lVar21) = *(int *)(&stack0x00000030 + lVar21) - iVar18;
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61284;
          FUN_140bae090(uVar3,10,0xffffffff,1);
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6129d;
          FUN_140bae090(uVar3,2,0xffffffff,1);
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e612b6;
          FUN_140bae090(uVar3,4,0xffffffff,1);
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e612cf;
          FUN_140bae090(uVar3,6,0xffffffff,1);
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e612e8;
          FUN_140bae090(uVar3,0xf,0xffffffff,1);
          (&stack0xfffffffffffffff8)[lVar21] = 0;
          uVar3 = *(undefined8 *)(lVar23 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61301;
          FUN_140bae090(uVar3,0xd,0xffffffff,1);
          puStack_23e8 = (undefined4 *)0x0;
          puStack_23e0 = (undefined4 *)0x0;
          uStack_23d8 = 0;
          plVar5 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xf0);
          puVar29 = puStack_23e0;
          lVar36 = _DAT_1423f3c78;
          for (plVar41 = *(longlong **)(*(longlong *)(lVar23 + 0x10) + 0xe8); puVar9 = puStack_23e8,
              puStack_23e0 = puVar29, plVar41 != plVar5; plVar41 = plVar41 + 1) {
            lVar26 = *plVar41;
            iVar38 = *(int *)(lVar26 + 8);
            iVar18 = (int)(_DAT_1423f3c80 - lVar36 >> 3);
            if ((iVar18 != 0) && (iVar38 != -1)) {
              iVar17 = *(int *)(lVar26 + 0xc);
              if ((-1 < iVar17) && (iVar17 < iVar18)) {
                puVar24 = *(undefined2 **)(lVar36 + (longlong)iVar17 * 8);
                if (*(int *)(puVar24 + 2) == iVar38) {
LAB_140e6143b:
                  if (puVar24 != (undefined2 *)0x0) {
                    switch(*puVar24) {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                      uVar35 = *(undefined4 *)(puVar24 + 2);
                      *(undefined **)((longlong)&uStack_30 + lVar21) = &UNK_140e61467;
                      FUN_1400bb4a0(uVar35,&puStack_23e8);
                      lVar36 = _DAT_1423f3c78;
                    }
                  }
                  goto LAB_140e6146e;
                }
                *(undefined4 *)(lVar26 + 0xc) = 0xffffffff;
                lVar36 = _DAT_1423f3c78;
              }
              iVar17 = 0;
              iVar18 = iVar18 + -1;
              if (-1 < iVar18) {
                do {
                  iVar31 = iVar18 + iVar17 >> 1;
                  puVar24 = *(undefined2 **)(lVar36 + (longlong)iVar31 * 8);
                  if (*(int *)(puVar24 + 2) == iVar38) {
                    *(int *)(lVar26 + 0xc) = iVar31;
                    lVar36 = _DAT_1423f3c78;
                    goto LAB_140e6143b;
                  }
                  iVar32 = iVar31 + -1;
                  if (*(int *)(puVar24 + 2) < iVar38) {
                    iVar32 = iVar18;
                    iVar17 = iVar31 + 1;
                  }
                  iVar18 = iVar32;
                } while (iVar17 <= iVar18);
              }
            }
LAB_140e6146e:
            puVar29 = puStack_23e0;
            plVar30 = plStack_2418;
            lVar26 = lStack_2410;
          }
          for (; puVar9 != puVar29; puVar9 = puVar9 + 1) {
            (&stack0xfffffffffffffff8)[lVar21] = 0;
            uVar35 = *puVar9;
            uVar3 = *(undefined8 *)(lVar23 + 0x10);
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e614b6;
            FUN_140bae090(uVar3,0xffffffff,uVar35,1);
          }
          lVar36 = *(longlong *)(lVar23 + 0x10);
          iVar38 = (int)(*(longlong *)(lVar36 + 0x108) - *(longlong *)(lVar36 + 0x100) >> 3) + -1;
          if (-1 < iVar38) {
            lVar40 = (longlong)iVar38 * 8;
            do {
              pcVar4 = *(code **)**(undefined8 **)(lVar40 + *(longlong *)(lVar36 + 0x100));
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61500;
              (*pcVar4)();
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6150d;
              FUN_140bb0300(lVar36,iVar38,0);
              lVar40 = lVar40 + -8;
              iVar38 = iVar38 + -1;
            } while (-1 < iVar38);
          }
          lVar36 = *(longlong *)(lVar23 + 0x10);
          lVar40 = *(longlong *)(lVar36 + 0x130);
          if (((lVar40 != 0) && (lVar40 = *(longlong *)(lVar40 + 8), lVar40 != 0)) &&
             (*(short *)(lVar40 + 0x60) != 0x66)) {
            *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e61543;
            FUN_140bd2d90(lVar36,0x66,0);
          }
          uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
          *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
          uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
          uVar14 = *(undefined2 *)(&stack0x00000020 + lVar21);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6156f;
          FUN_1414f55e0(0x1423f3970,lVar23,uVar14,uVar1);
          lVar36 = *(longlong *)(lVar23 + 0x18);
          *(longlong *)(&stack0x00000040 + lVar21) = lVar36;
          if (plStack_2430 == plStack_2428) {
            *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e6159a;
            FUN_1400bc360(&plStack_2438,plStack_2430,&stack0x00000040 + lVar21);
          }
          else {
            *plStack_2430 = lVar36;
            plStack_2430 = plStack_2430 + 1;
          }
          sVar13 = *(short *)(lVar36 + 0xa0);
          if ((sVar13 != 0x67) && (sVar13 != 0x68)) {
            *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e615b8;
            sVar13 = FUN_14138c220(lVar36);
            *(short *)(lVar36 + 0xa0) = sVar13;
          }
          *(short *)(lVar36 + 0xa2) = sVar13;
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e615d0;
          FUN_1404427d0(lVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e615d8;
          FUN_140442370(lVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e615ec;
          FUN_140df8a30(lVar23,uVar14,uVar1,uVar44);
          iStack_2318 = iStack_2318 + -1;
          *(int *)(&stack0x00000034 + lVar21) = *(int *)(&stack0x00000034 + lVar21) + -1;
          *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + 1;
          uVar19 = (int)(lVar26 - (longlong)plVar30 >> 3) - 1;
          if (-1 < (int)uVar19) {
            plStack_2440 = (longlong *)(longlong)(int)uVar19;
LAB_140e61624:
            lVar26 = plVar30[(longlong)plStack_2440];
            *(longlong *)(&stack0x00000040 + lVar21) = lVar26;
            iVar38 = *(int *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
            plVar41 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x120);
            for (plVar30 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x118); plVar30 < plVar41;
                plVar30 = plVar30 + 1) {
              puVar28 = (undefined8 *)*plVar30;
              pcVar4 = *(code **)*puVar28;
              *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61660;
              sVar13 = (*pcVar4)(puVar28);
              if ((sVar13 == 2) && ((*(int *)(puVar28 + 1) == iVar38 || (iVar38 == -1)))) {
                if (*(short *)((longlong)puVar28 + 0xc) != 0) goto LAB_140e6173d;
                break;
              }
            }
            psVar25 = *(short **)(lVar26 + 0x10);
            if ((*psVar25 == 0x67) || (*psVar25 == 0x68)) {
              iVar38 = *(int *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
              plVar41 = *(longlong **)(psVar25 + 0x90);
              for (plVar30 = *(longlong **)(psVar25 + 0x8c); plVar30 < plVar41;
                  plVar30 = plVar30 + 1) {
                puVar28 = (undefined8 *)*plVar30;
                pcVar4 = *(code **)*puVar28;
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e616c7;
                sVar13 = (*pcVar4)(puVar28);
                if ((sVar13 == 0) && ((*(int *)(puVar28 + 1) == iVar38 || (iVar38 == -1)))) {
                  if (0 < *(short *)((longlong)puVar28 + 0xc)) goto LAB_140e6173d;
                  break;
                }
              }
              iVar38 = *(int *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
              plVar41 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x120);
              for (plVar30 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0x118); plVar30 < plVar41
                  ; plVar30 = plVar30 + 1) {
                puVar28 = (undefined8 *)*plVar30;
                pcVar4 = *(code **)*puVar28;
                *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6171a;
                sVar13 = (*pcVar4)(puVar28);
                if ((sVar13 == 1) && ((*(int *)(puVar28 + 1) == iVar38 || (iVar38 == -1)))) {
                  if (0 < *(short *)((longlong)puVar28 + 0xc)) goto LAB_140e6173d;
                  break;
                }
              }
            }
            goto LAB_140e61a6f;
          }
LAB_140e61a88:
          *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e61a91;
          FUN_140070d80(&puStack_23e8);
        }
      }
    }
  }
LAB_140e61a91:
  iVar18 = *(int *)(&stack0x0000002c + lVar21);
  if (*(int *)(&stack0x00000034 + lVar21) < 1) goto LAB_140e61aa6;
  goto LAB_140e5f270;
LAB_140e6173d:
  lVar36 = lStack_2410;
  plVar30 = plStack_2418 + uVar19;
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61758;
  func_0x00014155486a(plVar30,plVar30 + 1,lStack_2410 - (longlong)(plVar30 + 1));
  lStack_2410 = lVar36 + -8;
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6177f;
  FUN_140bae090(uVar3,10,0xffffffff,1);
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61798;
  FUN_140bae090(uVar3,2,0xffffffff,1);
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e617b1;
  FUN_140bae090(uVar3,4,0xffffffff,1);
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e617ca;
  FUN_140bae090(uVar3,6,0xffffffff,1);
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e617e3;
  FUN_140bae090(uVar3,0xf,0xffffffff,1);
  (&stack0xfffffffffffffff8)[lVar21] = 0;
  uVar3 = *(undefined8 *)(lVar26 + 0x10);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e617fc;
  FUN_140bae090(uVar3,0xd,0xffffffff,1);
  puStack_2350 = (undefined4 *)0x0;
  puStack_2348 = (undefined4 *)0x0;
  uStack_2340 = 0;
  plVar30 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0xe8);
  plVar41 = *(longlong **)(*(longlong *)(lVar26 + 0x10) + 0xf0);
  puVar29 = puStack_2350;
  puVar9 = puStack_2348;
  if (plVar30 != plVar41) {
    do {
      lVar26 = *plVar30;
      iVar38 = *(int *)(lVar26 + 8);
      iVar18 = (int)(_DAT_1423f3c80 - _DAT_1423f3c78 >> 3);
      if ((iVar18 != 0) && (iVar38 != -1)) {
        iVar17 = *(int *)(lVar26 + 0xc);
        if ((-1 < iVar17) && (iVar17 < iVar18)) {
          puVar24 = *(undefined2 **)(_DAT_1423f3c78 + (longlong)iVar17 * 8);
          if (*(int *)(puVar24 + 2) == iVar38) {
LAB_140e618bf:
            if (puVar24 != (undefined2 *)0x0) {
              switch(*puVar24) {
              case 1:
              case 2:
              case 3:
              case 4:
              case 7:
              case 8:
              case 9:
              case 10:
                uVar35 = *(undefined4 *)(puVar24 + 2);
                *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e618e9;
                FUN_1400bb4a0(uVar35);
              }
            }
            goto LAB_140e618e9;
          }
          *(undefined4 *)(lVar26 + 0xc) = 0xffffffff;
        }
        iVar17 = 0;
        iVar18 = iVar18 + -1;
        if (-1 < iVar18) {
          do {
            iVar32 = iVar18 + iVar17 >> 1;
            puVar24 = *(undefined2 **)(_DAT_1423f3c78 + (longlong)iVar32 * 8);
            iVar31 = *(int *)(puVar24 + 2);
            if (iVar31 == iVar38) {
              *(int *)(lVar26 + 0xc) = iVar32;
              goto LAB_140e618bf;
            }
            if (iVar31 < iVar38) {
              iVar17 = iVar32 + 1;
            }
            iVar32 = iVar32 + -1;
            if (iVar31 <= iVar38) {
              iVar32 = iVar18;
            }
            iVar18 = iVar32;
          } while (iVar17 <= iVar18);
        }
      }
LAB_140e618e9:
      plVar30 = plVar30 + 1;
    } while (plVar30 != plVar41);
    lVar26 = *(longlong *)(&stack0x00000040 + lVar21);
    puVar29 = puStack_2350;
    puVar9 = puStack_2348;
  }
  for (; puVar10 = puStack_2348, puVar29 != puStack_2348; puVar29 = puVar29 + 1) {
    (&stack0xfffffffffffffff8)[lVar21] = 0;
    uVar35 = *puVar29;
    uVar3 = *(undefined8 *)(lVar26 + 0x10);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61927;
    puStack_2348 = puVar9;
    FUN_140bae090(uVar3,0xffffffff,uVar35,1);
    puVar9 = puStack_2348;
    puStack_2348 = puVar10;
  }
  lVar36 = *(longlong *)(lVar26 + 0x10);
  iVar38 = (int)(*(longlong *)(lVar36 + 0x108) - *(longlong *)(lVar36 + 0x100) >> 3) + -1;
  puStack_2348 = puVar9;
  if (-1 < iVar38) {
    lVar40 = (longlong)iVar38 * 8;
    do {
      pcVar4 = *(code **)**(undefined8 **)(lVar40 + *(longlong *)(lVar36 + 0x100));
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61970;
      (*pcVar4)();
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6197d;
      FUN_140bb0300(lVar36,iVar38,0);
      lVar40 = lVar40 + -8;
      iVar38 = iVar38 + -1;
    } while (-1 < iVar38);
  }
  lVar36 = *(longlong *)(lVar26 + 0x10);
  lVar40 = *(longlong *)(lVar36 + 0x130);
  if (((lVar40 != 0) && (lVar40 = *(longlong *)(lVar40 + 8), lVar40 != 0)) &&
     (*(short *)(lVar40 + 0x60) != 0x66)) {
    *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e619b3;
    FUN_140bd2d90(lVar36,0x66,0);
  }
  uVar44 = *(undefined2 *)(&stack0x0000001c + lVar21);
  *(undefined2 *)(&stack0xfffffffffffffff8 + lVar21) = uVar44;
  uVar1 = *(undefined2 *)(&stack0x00000028 + lVar21);
  uVar14 = *(undefined2 *)(&stack0x00000020 + lVar21);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e619df;
  FUN_1414f55e0(0x1423f3970,lVar26,uVar14,uVar1);
  lVar36 = *(longlong *)(lVar26 + 0x18);
  *(longlong *)(&stack0x00000040 + lVar21) = lVar36;
  if (plStack_2430 == plStack_2428) {
    *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e61a0a;
    FUN_1400bc360(&plStack_2438,plStack_2430,&stack0x00000040 + lVar21);
  }
  else {
    *plStack_2430 = lVar36;
    plStack_2430 = plStack_2430 + 1;
  }
  sVar13 = *(short *)(lVar36 + 0xa0);
  if ((sVar13 != 0x67) && (sVar13 != 0x68)) {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61a28;
    sVar13 = FUN_14138c220(lVar36);
    *(short *)(lVar36 + 0xa0) = sVar13;
  }
  *(short *)(lVar36 + 0xa2) = sVar13;
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61a40;
  FUN_1404427d0(lVar36);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61a48;
  FUN_140442370(lVar36);
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61a5c;
  FUN_140df8a30(lVar26,uVar14,uVar1,uVar44);
  iStack_2318 = iStack_2318 + -1;
  *(int *)(&stack0x0000002c + lVar21) = *(int *)(&stack0x0000002c + lVar21) + 1;
  *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e61a6f;
  FUN_140070d80(&puStack_2350);
LAB_140e61a6f:
  plStack_2440 = (longlong *)((longlong)plStack_2440 + -1);
  uVar19 = uVar19 - 1;
  plVar30 = plStack_2418;
  if ((int)uVar19 < 0) goto LAB_140e61a88;
  goto LAB_140e61624;
LAB_140e61aa6:
  if (iVar18 < 2) {
    if (iVar18 != 1) goto LAB_140e61cc2;
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61bc2;
    func_0x000140070cc0(&puStack_2350);
    if (iStack_20f0 < 0x32) {
      if (iStack_20f8 < 0x32) {
        if (iStack_20f8 < 10) {
          puVar33 = &UNK_14174f508;
        }
        else {
          puVar33 = &UNK_14174f610;
        }
      }
      else {
        puVar33 = &UNK_14174f660;
      }
    }
    else if (iStack_20f0 < 0x4b) {
      if (iStack_20f8 < 0x32) {
        if (iStack_20f8 < 10) {
          puVar33 = &UNK_14174f538;
        }
        else {
          puVar33 = &UNK_14174f570;
        }
      }
      else {
        puVar33 = &UNK_14174f4c8;
      }
    }
    else if (iStack_20f8 < 0x32) {
      puVar33 = &UNK_14174f8c8;
      if (iStack_20f8 < 10) {
        puVar33 = &UNK_14174f988;
      }
    }
    else {
      puVar33 = &UNK_14174f8f8;
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61c5b;
    func_0x000140070bb0(&puStack_2350,puVar33);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61c64;
    func_0x00014007f210(&uStack_23c8);
    uStack_23c8 = 0x70046;
    uStack_23c4 = 0;
    uStack_23ac = 2000;
    uStack_23c2 = *(undefined2 *)(&stack0x00000020 + lVar21);
    uStack_23c0 = *(undefined2 *)(&stack0x00000028 + lVar21);
    uStack_23be = *(undefined2 *)(&stack0x0000001c + lVar21);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61ca7;
    FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61cb1;
    FUN_140070e80(&puStack_2350);
  }
  else {
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61ab9;
    func_0x000140070cc0(&puStack_2350);
    if (iStack_20f0 < 0x32) {
      if (iStack_20f8 < 0x32) {
        if (iStack_20f8 < 10) {
          puVar33 = &UNK_14174f448;
        }
        else {
          puVar33 = &UNK_14174f480;
        }
      }
      else {
        puVar33 = &UNK_14174f3b0;
      }
    }
    else if (iStack_20f0 < 0x4b) {
      if (iStack_20f8 < 0x32) {
        if (iStack_20f8 < 10) {
          puVar33 = &UNK_14174f370;
        }
        else {
          puVar33 = &UNK_14174f250;
        }
      }
      else {
        puVar33 = &UNK_14174f2a0;
      }
    }
    else if (iStack_20f8 < 0x32) {
      puVar33 = &UNK_14174f5d8;
      if (iStack_20f8 < 10) {
        puVar33 = &UNK_14174f5b8;
      }
    }
    else {
      puVar33 = &UNK_14174f310;
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61b52;
    func_0x000140070bb0(&puStack_2350,puVar33);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61b5b;
    func_0x00014007f210(&uStack_23c8);
    uStack_23c8 = 0x70045;
    uStack_23c4 = 0;
    uStack_23ac = 2000;
    uStack_23c2 = *(undefined2 *)(&stack0x00000020 + lVar21);
    uStack_23c0 = *(undefined2 *)(&stack0x00000028 + lVar21);
    uStack_23be = *(undefined2 *)(&stack0x0000001c + lVar21);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61b9e;
    FUN_1400e5250(0x142505cd0,&puStack_2350,&uStack_23c8);
    *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e61ba8;
    FUN_140070e80(&puStack_2350);
  }
LAB_140e6202b:
  plVar30 = plStack_2438;
  plVar41 = plStack_2430;
  if ((DAT_1423b375c != '\0') &&
     (iVar38 = 0, (longlong)plStack_2430 - (longlong)plStack_2438 >> 3 != 0)) {
    lVar23 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar23 + (longlong)plStack_2438);
      *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e6205e;
      FUN_141383f60(uVar3,200);
      iVar38 = iVar38 + 1;
      lVar23 = lVar23 + 8;
      plVar30 = plStack_2438;
      plVar41 = plStack_2430;
    } while ((ulonglong)(longlong)iVar38 <
             (ulonglong)((longlong)plStack_2430 - (longlong)plStack_2438 >> 3));
  }
  for (; plVar30 < plVar41; plVar30 = plVar30 + 1) {
    lVar23 = *plVar30;
    iVar38 = 0;
    for (puVar28 = *(undefined8 **)(lVar23 + 0x9a8); puVar28 < *(undefined8 **)(lVar23 + 0x9b0);
        puVar28 = puVar28 + 1) {
      psVar25 = (short *)*puVar28;
      if (*psVar25 == 0x10) {
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e620ba;
        func_0x0001415530d0(psVar25,8);
        lVar36 = *(longlong *)(lVar23 + 0x9a8) + (longlong)iVar38 * 8;
        lVar40 = *(longlong *)(lVar23 + 0x9b0);
        lVar26 = lVar36 + 8;
        *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e620db;
        func_0x00014155486a(lVar36,lVar26,lVar40 - lVar26);
        *(longlong *)(lVar23 + 0x9b0) = *(longlong *)(lVar23 + 0x9b0) + -8;
        break;
      }
      iVar38 = iVar38 + 1;
    }
  }
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e620ee;
  FUN_140acdf70();
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e620f8;
  FUN_1400681a0(&plStack_2418);
  *(undefined1 **)((longlong)&uStack_30 + lVar21) = &LAB_140e62102;
  FUN_1400681a0(&plStack_2438);
LAB_140e62102:
  *(undefined8 *)((longlong)&uStack_30 + lVar21) = 0x140e62111;
  FUN_1415530b0(uStack_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar21));
  return;
}

