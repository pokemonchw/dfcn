/* resolve conflict, including ranged combat and pursuit | VA [0x14151b9f0, 0x14151e8e2) | Ghidra decompilation */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14151b9f0(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  short sVar4;
  short sVar5;
  undefined8 *****pppppuVar6;
  uint *puVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  int *piVar11;
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  undefined2 uVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  longlong lVar25;
  char *pcVar26;
  undefined8 ******ppppppuVar27;
  undefined4 *puVar28;
  longlong lVar29;
  undefined8 *****pppppuVar30;
  longlong *plVar31;
  ulonglong uVar32;
  int *piVar33;
  int *piVar34;
  longlong *plVar35;
  longlong *plVar36;
  uint *puVar37;
  undefined8 ******ppppppuVar38;
  byte bVar39;
  undefined8 *puVar40;
  longlong *plVar41;
  ulonglong *****pppppuVar42;
  int iVar43;
  int iVar44;
  undefined8 *puVar45;
  longlong *plVar46;
  short sVar47;
  uint uVar48;
  int iVar49;
  byte *pbVar50;
  ulonglong ******ppppppuVar51;
  short *psVar52;
  byte bVar53;
  short sVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  ulonglong uVar58;
  bool bVar59;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar60;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  float fVar61;
  undefined1 auStack_558 [32];
  int *piStack_538;
  longlong *plStack_530;
  undefined2 uStack_528;
  undefined1 uStack_520;
  undefined4 uStack_518;
  char cStack_510;
  char cStack_508;
  char cStack_507;
  ushort uStack_506;
  ushort auStack_504 [2];
  short sStack_500;
  ushort auStack_4fc [2];
  undefined1 auStack_4f8 [8];
  longlong *plStack_4f0;
  uint uStack_4e8;
  undefined1 auStack_4e4 [4];
  longlong *plStack_4e0;
  undefined4 uStack_4d8;
  longlong *plStack_4d0;
  uint uStack_4c8;
  longlong lStack_4c0;
  int *apiStack_4b8 [2];
  undefined4 uStack_4a8;
  undefined1 uStack_4a4;
  undefined2 uStack_4a2;
  undefined2 uStack_4a0;
  undefined2 uStack_49e;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined2 uStack_494;
  undefined4 uStack_490;
  undefined2 uStack_48c;
  longlong lStack_488;
  undefined8 *****pppppuStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  int *piStack_458;
  int *piStack_450;
  ulonglong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  longlong lStack_430;
  ulonglong ****ppppuStack_428;
  undefined8 *****pppppuStack_420;
  undefined8 *****pppppuStack_418;
  ulonglong uStack_410;
  undefined8 *****pppppuStack_408;
  undefined8 uStack_400;
  ulonglong uStack_3f8;
  ulonglong uStack_3f0;
  ulonglong *****pppppuStack_3e8;
  undefined8 uStack_3e0;
  undefined8 *****pppppuStack_3d8;
  ulonglong uStack_3d0;
  longlong lStack_3c8;
  longlong lStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3a8 [32];
  undefined1 auStack_388 [32];
  int aiStack_368 [3];
  undefined8 uStack_35c;
  undefined8 uStack_354;
  undefined4 uStack_34c;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined2 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined2 uStack_2d0;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_558;
  lVar25 = *param_3;
  ppppppuVar38 = (undefined8 ******)0x0;
  uStack_448 = 0;
  lVar29 = *(longlong *)(param_1 + 0x490);
  if (*(longlong *)(param_1 + 0x490) != lVar25) {
    *(longlong *)(param_1 + 0x490) = lVar25;
    *(undefined4 *)(param_1 + 0x498) = 0;
    lVar29 = lVar25;
  }
  plStack_4d0 = param_3;
  piStack_458 = param_2;
  lStack_430 = param_1;
  if ((*(byte *)((longlong)param_3 + 0xc) & 4) == 0) {
    *(undefined8 *)(param_1 + 0x490) = 0;
LAB_14151ba7a:
    uVar20 = FUN_140ece790();
    if (uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x6666667
       ) {
      iVar21 = FUN_140073560(0x28);
      *(int *)(param_1 + 0x4c0) = iVar21 * 0x9d;
      func_0x000141403610(param_1,*(undefined4 *)((longlong)iVar21 * 8 + 0x14250d4b8),
                          *(undefined4 *)((longlong)iVar21 * 8 + 0x14250d4bc));
    }
  }
  else if (lVar29 == 0) goto LAB_14151ba7a;
  if (((0 < *(short *)(param_1 + 0x800)) || (9 < *(short *)(param_1 + 0x804))) ||
     (99 < *(int *)(param_1 + 0x978))) goto LAB_14151e7ba;
  FUN_140074e10(param_1,0x37,200);
  if ((param_3[0xcd] != 0) && (*(longlong *)(param_1 + 0x490) != 0)) {
    *(undefined4 *)(param_3[0xcd] + 0x68) = 0;
  }
  uStack_4d8 = 0xffffffff;
  if (((*param_3 != 0) && ((int)param_3[1] - 4U < 3)) &&
     (*(int *)(param_1 + 0x3d0) == *(int *)(*param_3 + 0x130))) {
    lVar25 = func_0x0001413cc070(param_1);
    ppppppuVar27 = ppppppuVar38;
    uVar60 = extraout_XMM0_Qa;
    if (lVar25 != 0) {
      plVar31 = *(longlong **)(lVar25 + 0x118);
      plStack_4f0 = *(longlong **)(lVar25 + 0x120);
      plStack_4e0 = plVar31;
      pcVar26 = (char *)func_0x000140070450(&plStack_4e0,&cStack_507,&plStack_4f0);
      cVar13 = *pcVar26;
      uVar60 = extraout_XMM0_Qa_00;
      while (ppppppuVar27 = (undefined8 ******)0x0, cVar13 < '\0') {
        puVar45 = (undefined8 *)*plVar31;
        sVar15 = (**(code **)*puVar45)(puVar45);
        if (sVar15 == 10) {
          ppppppuVar27 = (undefined8 ******)FUN_140073ba0(0x14250a318,*(undefined4 *)(puVar45 + 3));
          uVar60 = extraout_XMM0_Qa_02;
          break;
        }
        plVar31 = plVar31 + 1;
        plStack_4e0 = plVar31;
        pcVar26 = (char *)func_0x000140070450(&plStack_4e0,&cStack_507,&plStack_4f0);
        uVar60 = extraout_XMM0_Qa_01;
        cVar13 = *pcVar26;
      }
    }
    *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
    if ((_DAT_1418be238 == 1) && (*param_3 == _DAT_142407590)) {
      FUN_1404ea5f0(uVar60,*(undefined4 *)(param_1 + 0xc30),*(undefined4 *)(*param_3 + 0xc30));
      FUN_1402888e0(*(undefined4 *)(param_1 + 0xc30),0x14266ba88);
      FUN_1402888e0(*(undefined4 *)(param_1 + 0xc30),0x14266baa0);
      FUN_1402888e0(*(undefined4 *)(param_1 + 0xc30),0x14266bab8);
      FUN_1402888e0(*(undefined4 *)(param_1 + 0xc30),0x14266bad0);
    }
    puVar28 = (undefined4 *)FUN_1413ca0e0(param_1,3);
    lVar29 = FUN_1413ca0e0(*param_3,3);
    if ((puVar28 != (undefined4 *)0x0) && (lVar29 != 0)) {
      puVar28[8] = 0xffffffff;
      FUN_1402888e0(*puVar28,lVar29 + 0x28);
    }
    if (lVar25 != 0) {
      FUN_140bce9f0(lVar25,10,*(undefined4 *)(*param_3 + 0xc30),0);
    }
    lVar25 = func_0x0001413cc070(*param_3);
    if (lVar25 != 0) {
      FUN_140bce9f0(lVar25,10,*(undefined4 *)(param_1 + 0xc30),0);
    }
    lVar25 = *(longlong *)(param_1 + 0x1208);
    if (((lVar25 != 0) && (*(int *)(lVar25 + 0x4c) == *(int *)(*param_3 + 0xc30))) &&
       (*(int *)(lVar25 + 0x138) == 10)) {
      *(undefined8 *)(param_1 + 0x1208) = 0;
      *(undefined4 *)(param_1 + 0x1200) = 0xffffffff;
      FUN_141406b30(param_1);
    }
    if (ppppppuVar27 != (undefined8 ******)0x0) {
      pppppuVar6 = ppppppuVar27[6];
      for (pppppuVar30 = ppppppuVar27[5]; pppppuVar30 < pppppuVar6; pppppuVar30 = pppppuVar30 + 1) {
        if (*(int *)(*pppppuVar30 + 3) == 0) {
          *(undefined4 *)((*pppppuVar30)[2] + 3) = _DAT_142167754;
          *(undefined4 *)((longlong)(*pppppuVar30)[2] + 0x1c) = _DAT_1423aa348;
        }
      }
    }
    *(undefined4 *)(param_1 + 0xc0) = 0x8ad08ad0;
    *(undefined4 *)(param_1 + 0xc4) = 0xffff8ad0;
    if (*(longlong *)(param_1 + 200) != *(longlong *)(param_1 + 0xd0)) {
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 0xe0) != *(longlong *)(param_1 + 0xe8)) {
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe0);
    }
    if (*(longlong *)(param_1 + 0xf8) != *(longlong *)(param_1 + 0x100)) {
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0xf8);
    }
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0xf;
      uStack_340 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_308 = 0xf;
      uStack_320 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_35c = 0;
      uStack_354 = 0;
      uStack_34c = 0;
      uStack_300 = 0xffffffffffffffff;
      uStack_2e0 = 0xffffffff;
      uStack_2dc = 0xffff;
      uStack_2d8 = 0xffffffff;
      uStack_2d4 = 0x8ad08ad0;
      uStack_2d0 = 0x8ad0;
      aiStack_368[0] = CONCAT22(aiStack_368[0]._2_2_,0x4d);
      piStack_538 = aiStack_368;
      FUN_14133d990(param_1,0,0,0);
      FUN_140070d80(&uStack_2f8);
      FUN_140070e80(&uStack_320);
      FUN_140070e80(&uStack_340);
    }
    if (ppppppuVar27 != (undefined8 ******)0x0) {
      plVar31 = (longlong *)FUN_140492810();
      *(undefined4 *)((longlong)plVar31 + 0x34) = *(undefined4 *)(param_1 + 0xc30);
      *(undefined4 *)(plVar31 + 5) = *(undefined4 *)ppppppuVar27;
      *(undefined4 *)((longlong)plVar31 + 0x2c) = 0xffffffff;
      *(undefined4 *)(plVar31 + 6) = 0x25;
      *(undefined4 *)(plVar31 + 1) = _DAT_142167754;
      *(undefined4 *)((longlong)plVar31 + 0xc) = _DAT_1423aa348;
      (**(code **)(*plVar31 + 0x128))(plVar31);
    }
  }
  FUN_1413afa00(param_1);
  if (((int)param_3[1] == 2) || ((int)param_3[1] - 5U < 2)) {
    plVar31 = *(longlong **)(param_1 + 0x408);
    plVar35 = *(longlong **)(param_1 + 0x410);
LAB_14151c170:
    do {
      ppppppuVar38 = (undefined8 ******)0x0;
      param_3 = plStack_4d0;
      if (plVar35 <= plVar31) goto LAB_14151c5c9;
      cVar13 = (**(code **)(**(longlong **)*plVar31 + 0x758))();
      if (((cVar13 != '\0') && (*(short *)((undefined8 *)*plVar31 + 1) == 10)) &&
         (sVar15 = FUN_14139f2f0(param_1,0,*(undefined8 *)*plVar31,0xffffffff), sVar15 != -1)) {
        *(undefined2 *)(*plVar31 + 8) = 1;
        *(short *)(*plVar31 + 10) = sVar15;
        *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x4200;
        if (_DAT_1418be238 == 0) {
          if ((DAT_1423b33d8 & 0x70) == 0) {
            plVar31 = plVar31 + 1;
            goto LAB_14151c170;
          }
        }
        else if ((DAT_1423b33d8 & 8) == 0) goto LAB_14151c43a;
        func_0x000140070cc0(&pppppuStack_3e8);
        piStack_538 = (int *)CONCAT71(piStack_538._1_7_,1);
        FUN_141346d40(param_1,&pppppuStack_3e8,1,1);
        FUN_140071040(&pppppuStack_3e8,&UNK_141631fc8,7);
        func_0x000140070cc0(auStack_388);
        FUN_140c7d140(*(undefined8 *)*plVar31,auStack_388,0,1);
        func_0x0001400bb340(&pppppuStack_3e8,auStack_388);
        func_0x000140070b90(&pppppuStack_3e8,&UNK_141609848);
        func_0x000140070cc0(auStack_3a8);
        FUN_140abe2f0(*(undefined1 *)(param_1 + 0x12e),auStack_3a8,0);
        func_0x0001400bb340(&pppppuStack_3e8,auStack_3a8);
        func_0x000140070b90(&pppppuStack_3e8,&UNK_1416039f0);
        uStack_400 = 0;
        uStack_3f0 = 0xf;
        uVar58 = (ulonglong)*(short *)(*plVar31 + 10);
        if (*(short *)(*plVar31 + 10) < 0) {
LAB_14151c58c:
          uStack_3f8 = 9;
          pppppuStack_408 = (undefined8 ******)0x7261702079646f62;
          uStack_400 = 0x74;
        }
        else {
          plVar36 = *(longlong **)(param_1 + 0x5f8);
          if ((ulonglong)(plVar36[1] - *plVar36 >> 3) <= uVar58) goto LAB_14151c58c;
          lVar25 = *(longlong *)(*plVar36 + uVar58 * 8);
          uStack_3f8 = 0;
          pppppuStack_408 = (undefined8 ******)0x0;
          if (*(longlong *)(lVar25 + 0x98) - *(longlong *)(lVar25 + 0x90) >> 3 == 0) {
            FUN_140071040(&pppppuStack_408,&DAT_1416a0ac0,9);
            uVar12 = uStack_3f0;
            uVar32 = uStack_3f8;
            if (1 < *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x5f8) + uVar58 * 8) + 0x84)) {
              if (uStack_3f8 < uStack_3f0) {
                ppppppuVar38 = &pppppuStack_408;
                if (0xf < uStack_3f0) {
                  ppppppuVar38 = (undefined8 ******)pppppuStack_408;
                }
                puVar2 = (undefined2 *)((longlong)ppppppuVar38 + uStack_3f8);
                uStack_3f8 = uStack_3f8 + 1;
                *puVar2 = 0x73;
              }
              else {
                if (uStack_3f8 == 0x7fffffffffffffff) goto LAB_14151e7ea;
                uVar58 = uStack_3f8 + 1 | 0xf;
                if (uVar58 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uStack_3f0 >> 1) < uStack_3f0) {
                    uVar58 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar3 = uStack_3f0 + (uStack_3f0 >> 1);
                    if (uVar58 < uVar3) {
                      uVar58 = uVar3;
                    }
                  }
                }
                else {
                  uVar58 = 0x7fffffffffffffff;
                }
                ppppppuVar38 = (undefined8 ******)FUN_140071e00(uVar58 + 1);
                pppppuVar30 = pppppuStack_408;
                uStack_3f8 = uVar32 + 1;
                uStack_3f0 = uVar58;
                if (uVar12 < 0x10) {
                  func_0x00014155454e(ppppppuVar38,&pppppuStack_408,uVar32);
                  *(undefined2 *)((longlong)ppppppuVar38 + uVar32) = 0x73;
                  pppppuStack_408 = ppppppuVar38;
                }
                else {
                  func_0x00014155454e(ppppppuVar38,pppppuStack_408,uVar32);
                  *(undefined2 *)((longlong)ppppppuVar38 + uVar32) = 0x73;
                  ppppppuVar27 = (undefined8 ******)pppppuVar30;
                  if (0xfff < uVar12 + 1) {
                    ppppppuVar27 = (undefined8 ******)pppppuVar30[-1];
                    if (0x1f < (ulonglong)((longlong)pppppuVar30 + (-8 - (longlong)ppppppuVar27))) {
                      _invalid_parameter_noinfo_noreturn(ppppppuVar27,uVar12 + 0x28);
                      param_3 = plStack_4d0;
                      goto LAB_14151c5c9;
                    }
                  }
                  func_0x0001415530d0(ppppppuVar27);
                  pppppuStack_408 = ppppppuVar38;
                }
              }
            }
          }
          else {
            lVar25 = *(longlong *)(*plVar36 + uVar58 * 8);
            if (*(int *)(lVar25 + 0x84) < 2) {
              puVar45 = *(undefined8 **)(lVar25 + 0x90);
            }
            else {
              puVar45 = *(undefined8 **)(lVar25 + 0xa8);
            }
            func_0x0001400bb340(&pppppuStack_408,*puVar45);
          }
        }
        FUN_140546b30(&pppppuStack_408);
        ppppppuVar38 = &pppppuStack_408;
        if (0xf < uStack_3f0) {
          ppppppuVar38 = (undefined8 ******)pppppuStack_408;
        }
        FUN_140071040(&pppppuStack_3e8,ppppppuVar38,uStack_3f8);
        FUN_140070e80(&pppppuStack_408);
        func_0x000140070b90(&pppppuStack_3e8,&UNK_141603844);
        uStack_49c = 0;
        uStack_498 = 0x8ad08ad0;
        uStack_494 = 0x8ad0;
        uStack_490 = 0;
        pppppuStack_480 = (undefined8 ******)0x0;
        uStack_478 = 0xffffffffffffffff;
        uStack_470 = 0xffffffff;
        uStack_46c = 0;
        uStack_468 = 0xffffffff;
        uStack_4a8 = 0x600ae;
        uStack_4a4 = 1;
        uStack_48c = 2000;
        uStack_4a2 = *(undefined2 *)(param_1 + 0xa8);
        uStack_4a0 = *(undefined2 *)(param_1 + 0xaa);
        uStack_49e = *(undefined2 *)(param_1 + 0xac);
        lStack_488 = param_1;
        FUN_1400e5250(0x142505cd0,&pppppuStack_3e8,&uStack_4a8);
        FUN_140070e80(auStack_3a8);
        FUN_140070e80(auStack_388);
        FUN_140070e80(&pppppuStack_3e8);
      }
LAB_14151c43a:
      plVar31 = plVar31 + 1;
    } while( true );
  }
  plVar35 = *(longlong **)(param_1 + 0x410);
  for (plVar31 = *(longlong **)(param_1 + 0x408); plVar31 < plVar35; plVar31 = plVar31 + 1) {
    cVar13 = (**(code **)(**(longlong **)*plVar31 + 0x758))();
    if (((cVar13 != '\0') && (*(short *)((undefined8 *)*plVar31 + 1) == 1)) &&
       (cVar13 = FUN_141379a00(param_1,*(undefined8 *)*plVar31), cVar13 == '\0')) {
      puVar45 = (undefined8 *)*plVar31;
      cVar13 = func_0x0001413799b0(param_1,*puVar45);
      if (cVar13 == '\0') {
        *(undefined2 *)(puVar45 + 1) = 10;
        *(undefined2 *)(*plVar31 + 10) = 0;
        cVar13 = func_0x00014007f460(0x1423b3120,0xaf);
        if (cVar13 != '\0') {
          func_0x000140070cc0(&ppppuStack_428);
          piStack_538 = (int *)CONCAT71(piStack_538._1_7_,1);
          FUN_141346d40(param_1,&ppppuStack_428,1,1);
          func_0x000140070b90(&ppppuStack_428,&UNK_141631fd0);
          func_0x000140070cc0(&lStack_3c8);
          FUN_140c7d140(*(undefined8 *)*plVar31,&lStack_3c8,0,1);
          func_0x0001400bb340(&ppppuStack_428,&lStack_3c8);
          func_0x000140070b90(&ppppuStack_428,&UNK_141608834);
          func_0x000140070cc0(&pppppuStack_408);
          FUN_140abe2f0(*(undefined1 *)(param_1 + 0x12e),&pppppuStack_408,0);
          func_0x0001400bb340(&ppppuStack_428,&pppppuStack_408);
          func_0x000140070b90(&ppppuStack_428,&UNK_1416039f0);
          func_0x000140070cc0(&pppppuStack_3e8);
          piStack_538 = (int *)CONCAT62(piStack_538._2_6_,2);
          FUN_14134cee0(param_1,&pppppuStack_3e8,*(undefined2 *)(*plVar31 + 10),0);
          FUN_140546b30(&pppppuStack_3e8);
          func_0x0001400bb340(&ppppuStack_428,&pppppuStack_3e8);
          FUN_140070e80(&pppppuStack_3e8);
          func_0x000140070b90(&ppppuStack_428,&UNK_141603844);
          func_0x00014007f210(&uStack_4a8);
          uStack_4a8 = 0x600af;
          uStack_4a4 = 1;
          uStack_48c = 2000;
          uStack_4a2 = *(undefined2 *)(param_1 + 0xa8);
          uStack_4a0 = *(undefined2 *)(param_1 + 0xaa);
          uStack_49e = *(undefined2 *)(param_1 + 0xac);
          lStack_488 = param_1;
          FUN_1400e5250(0x142505cd0,&ppppuStack_428,&uStack_4a8);
          FUN_140070e80(&pppppuStack_408);
          FUN_140070e80(&lStack_3c8);
          FUN_140070e80(&ppppuStack_428);
        }
      }
    }
  }
LAB_14151c5c9:
  uVar22 = SUB84(ppppppuVar38,0);
  if ((*(longlong *)(param_1 + 0x490) != 0) ||
     (uVar20 = FUN_140ece790(),
     uVar20 + (int)((longlong)((ulonglong)uVar20 * 0x100000003) >> 0x3f) * 0x7fffffff < 0xccccccd))
  {
    pppppuStack_418 = (undefined8 *****)CONCAT44(pppppuStack_418._4_4_,0xffffffff);
    ppppuStack_428 = (ulonglong ****)CONCAT44(ppppuStack_428._4_4_,uVar22);
    pppppuStack_420 = ppppppuVar38;
    FUN_1414017e0(param_1,&ppppuStack_428,param_3);
  }
  if (*(int *)(param_1 + 0xd98) != -1) {
    lVar25 = *(longlong *)(param_1 + 0x490);
    if (lVar25 != 0) {
      iVar55 = (int)(short)(*(short *)(param_1 + 0xa8) - *(short *)(lVar25 + 0xa8));
      iVar43 = (int)(short)(*(short *)(param_1 + 0xaa) - *(short *)(lVar25 + 0xaa));
      iVar21 = (int)(short)(*(short *)(param_1 + 0xac) - *(short *)(lVar25 + 0xac));
      fVar61 = (float)(iVar43 * iVar43 + iVar55 * iVar55 + iVar21 * iVar21);
      if (fVar61 < 0.0) {
        fVar61 = (float)func_0x0001415548d6();
      }
      else {
        fVar61 = SQRT(fVar61);
      }
      if ((short)(int)fVar61 < 7) goto LAB_14151e7ba;
    }
    uStack_3e0 = 0;
    uStack_3d0 = 0xf;
    pppppuStack_3e8 = (ulonglong *****)0x0;
    piStack_538 = (int *)CONCAT71(piStack_538._1_7_,1);
    pppppuStack_3d8 = ppppppuVar38;
    FUN_141346d40(param_1,&pppppuStack_3e8,1,1);
    pppppuVar30 = pppppuStack_3d8;
    ppppuStack_428 = (ulonglong ****)0x0;
    pppppuStack_420 = (undefined8 ******)0x0;
    pppppuStack_418 = (undefined8 ******)0x0;
    uStack_410 = 0;
    ppppppuVar51 = &pppppuStack_3e8;
    if (0xf < uStack_3d0) {
      ppppppuVar51 = (ulonglong ******)pppppuStack_3e8;
    }
    if ((undefined8 ******)0x7fffffffffffffff < pppppuStack_3d8) {
LAB_14151e7f0:
      FUN_140066ec0();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pppppuStack_3d8 < (undefined8 ******)0x10) {
      pppppuStack_418 = pppppuStack_3d8;
      uStack_410 = 0xf;
      ppppuStack_428 = (ulonglong ****)*ppppppuVar51;
      pppppuStack_420 = ppppppuVar51[1];
    }
    else {
      uVar32 = (ulonglong)pppppuStack_3d8 | 0xf;
      uVar58 = 0x7fffffffffffffff;
      if ((uVar32 < 0x8000000000000000) && (uVar58 = uVar32, uVar32 < 0x16)) {
        uVar58 = 0x16;
      }
      ppppuStack_428 = (ulonglong ****)FUN_140071e00(uVar58 + 1);
      pppppuStack_418 = pppppuVar30;
      uStack_410 = uVar58;
      func_0x00014155454e(ppppuStack_428,ppppppuVar51,(longlong)pppppuVar30 + 1);
    }
    FUN_140071040(&ppppuStack_428,&UNK_1416039f0,1);
    lVar25 = *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0x30) +
              (longlong)*(int *)(param_1 + 0xd98) * 8);
    puVar45 = (undefined8 *)(lVar25 + 0x180);
    if (0xf < *(ulonglong *)(lVar25 + 0x198)) {
      puVar45 = (undefined8 *)*puVar45;
    }
    FUN_140071040(&ppppuStack_428,puVar45,*(undefined8 *)(lVar25 + 400));
    FUN_1414011c0(param_1,&ppppuStack_428);
    FUN_140071040(&ppppuStack_428,&UNK_141603844,1);
    uStack_498 = 0x8ad08ad0;
    uStack_494 = 0x8ad0;
    uStack_478 = 0xffffffffffffffff;
    uStack_470 = 0xffffffff;
    uStack_468 = 0xffffffff;
    uStack_4a8 = 0x70094;
    uStack_4a4 = 1;
    uStack_48c = 2000;
    uStack_4a2 = *(undefined2 *)(param_1 + 0xa8);
    uStack_4a0 = *(undefined2 *)(param_1 + 0xaa);
    uStack_49e = *(undefined2 *)(param_1 + 0xac);
    uStack_49c = uVar22;
    uStack_490 = uVar22;
    lStack_488 = param_1;
    pppppuStack_480 = ppppppuVar38;
    uStack_46c = uVar22;
    FUN_1400e5250(0x142505cd0,&ppppuStack_428,&uStack_4a8);
    puVar7 = *(uint **)(param_1 + 0x4f8);
    for (puVar37 = *(uint **)(param_1 + 0x4f0); puVar37 < puVar7; puVar37 = puVar37 + 1) {
      *puVar37 = *puVar37 & 0xffe7ffff;
    }
    *(undefined4 *)(param_1 + 0xd98) = 0xffffffff;
    FUN_14139ad00(param_1);
    *(undefined4 *)(param_1 + 0xc0) = 0x8ad08ad0;
    *(undefined4 *)(param_1 + 0xc4) = 0xffff8ad0;
    if (*(longlong *)(param_1 + 200) != *(longlong *)(param_1 + 0xd0)) {
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 0xe0) != *(longlong *)(param_1 + 0xe8)) {
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe0);
    }
    if (*(longlong *)(param_1 + 0xf8) != *(longlong *)(param_1 + 0x100)) {
      *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0xf8);
    }
    FUN_140070e80(&ppppuStack_428);
    FUN_140070e80(&pppppuStack_3e8);
    goto LAB_14151e7ba;
  }
  if ((*param_3 == 0) || (*(int *)(param_1 + 0x3d8) != -1)) goto LAB_14151e7ba;
  plVar31 = *(longlong **)(param_1 + 0x490);
  auStack_504[0] = *(ushort *)(param_1 + 0x354);
  auStack_4fc[0] = *(ushort *)(param_1 + 0x356);
  sStack_500 = *(short *)(param_1 + 0x358);
  plStack_4e0 = plVar31;
  if (plVar31 != (longlong *)0x0) {
    *(int *)(param_1 + 0x350) = (int)plVar31[0x26];
    *(short *)(param_1 + 0x354) = (short)plVar31[0x15];
    *(undefined2 *)(param_1 + 0x356) = *(undefined2 *)((longlong)plVar31 + 0xaa);
    *(undefined2 *)(param_1 + 0x358) = *(undefined2 *)((longlong)plVar31 + 0xac);
    *(undefined4 *)(param_1 + 0x35c) = 300;
    auStack_504[0] = *(ushort *)(plVar31 + 0x15);
    auStack_4fc[0] = *(ushort *)((longlong)plVar31 + 0xaa);
    sStack_500 = *(short *)((longlong)plVar31 + 0xac);
    if ((*(int *)(param_1 + 0x3d4) == (int)plVar31[0x26]) || ((int)plVar31[0x26] == -1)) {
      FUN_141367440(param_1);
    }
  }
  if (auStack_504[0] == 0x8ad0) goto LAB_14151e7ba;
  uVar16 = FUN_140073810(*(short *)(param_1 + 0xa8) - auStack_504[0],
                         *(short *)(param_1 + 0xaa) - auStack_4fc[0],
                         *(short *)(param_1 + 0xac) - sStack_500);
  uStack_506 = uVar16;
  piVar33 = (int *)FUN_141356c40(param_1,1);
  apiStack_4b8[0] = piVar33;
  lVar25 = FUN_141357e20(param_1,piVar33,0,&cStack_507);
  lStack_4c0 = lVar25;
  bVar59 = false;
  if ((piVar33 != (int *)0x0) &&
     (sVar15 = (*(code *)**(undefined8 **)piVar33)(piVar33), sVar15 == 0x18)) {
    bVar59 = false;
    if (*(longlong *)(*(longlong *)(piVar33 + 0x3a) + 0xe8) != 0) {
      bVar59 = true;
    }
  }
  if ((((*(longlong *)(param_1 + 0x4d8) != 0) &&
       (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) == 0x1a)) && (0xb < (short)uVar16)) &&
     (((*(uint *)(param_1 + 0x110) & 0x40000) != 0 || (0xe < (short)uVar16)))) {
    bVar59 = false;
  }
  iVar21 = (int)plStack_4d0[1];
  if (1 < iVar21 - 5U) {
    bVar59 = false;
  }
  uVar22 = 0xffffffff;
  if (plStack_4d0[0xcd] != 0) {
    uVar22 = *(undefined4 *)(plStack_4d0[0xcd] + 0xc);
  }
  cVar13 = FUN_1413589e0(param_1,uVar22);
  if ((cVar13 == '\0') && (((iVar21 == 1 || (iVar21 == 2)) || (iVar21 == 3)))) {
    cVar13 = '\x01';
  }
  uVar20 = _DAT_1418be234 - 4;
  if ((*(longlong *)(param_1 + 0x4d8) != 0) &&
     (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) == 0x1a)) {
    if (plVar31 == (longlong *)0x0) {
LAB_14151cbcf:
      cVar13 = '\x01';
    }
    else {
      cVar14 = func_0x0001413a7400(plVar31);
      if ((((cVar14 != '\0') && (plVar31[0x1b0] == 0)) &&
          ((*(uint *)(plVar31 + 0x23) & 0x1000) == 0)) &&
         (cVar14 = func_0x000140073e80(0x14250eec8,*(undefined2 *)((longlong)plVar31 + 0xa4),
                                       *(undefined2 *)((longlong)plVar31 + 300),0x2e),
         cVar14 == '\0')) {
        cVar14 = func_0x000140074860(plVar31,0x3a);
        if (cVar14 == '\0') goto LAB_14151cbcf;
        if (_DAT_1423bc668 != 0) {
          if (((ushort)(*(short *)(_DAT_1423bc668 + 0xd0e) - 1U) < 2) ||
             (*(short *)(_DAT_1423bc668 + 0xd0e) == 0x10)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) goto LAB_14151cbcf;
        }
      }
    }
  }
  if (1 < uVar20) {
    cVar14 = func_0x0001413a7400(param_1);
    if (cVar14 != '\0') {
      cVar14 = func_0x0001400ff410();
      if (cVar14 == '\0') {
        uVar18 = *(undefined2 *)(param_1 + 0xa4);
        cVar14 = func_0x0001400e4bf0(0x14250eec8,uVar18,0x40);
        iVar21 = _DAT_1418be238;
        if ((((cVar14 == '\0') && ((*(uint *)(param_1 + 0x11c) & 0x1000) == 0)) &&
            ((*(short *)(param_1 + 0x360) != 7 && (2 < *(ushort *)(param_1 + 0x814))))) &&
           ((_DAT_1418be238 == 0 ||
            (cVar14 = func_0x000140073e80(0x14250eec8,uVar18,*(undefined2 *)(param_1 + 300),0x22),
            plVar31 = plStack_4e0, cVar14 != '\0')))) {
          sVar15 = 3;
          if ((iVar21 == 0) &&
             ((cVar14 = func_0x000140073e80(0x14250eec8,uVar18,*(undefined2 *)(param_1 + 300),0x14),
              cVar14 != '\0' &&
              (((*(short *)(param_1 + 0x334) != -1 || (*(int *)(param_1 + 0x338) != -1)) ||
               (*(int *)(param_1 + 0x33c) != -1)))))) {
            sVar15 = 10;
          }
          plVar31 = plStack_4e0;
          lVar25 = lStack_4c0;
          if (sVar15 < (short)uStack_506) {
            cVar13 = '\0';
          }
        }
      }
      if (((*(uint *)(param_1 + 0x110) >> 0x13 & 1) == 0) &&
         ((*(uint *)(param_1 + 0x110) >> 0x15 & 1) != 0)) {
        cVar13 = '\x01';
      }
    }
    if (((*(uint *)(param_1 + 0x118) & 0x10000) != 0) &&
       (*(int *)(param_1 + 0xd90) == *(int *)(param_1 + 0xa4))) {
      cVar13 = '\0';
    }
  }
  bVar9 = false;
  if (((*(longlong *)(param_1 + 0x1208) != 0) &&
      (*(int *)(*(longlong *)(param_1 + 0x1208) + 0x138) == 10)) &&
     (bVar9 = false, 1 < (short)uStack_506)) {
    bVar9 = true;
  }
  if ((((*(uint *)(param_1 + 0x110) & 0x20000) != 0) && (*(int *)(param_1 + 0x150) != -1)) &&
     (*(int *)(param_1 + 0x158) == 10)) {
    bVar9 = true;
  }
  uVar18 = 0x19;
  if ((bVar59) && (lVar25 == 0)) {
    if ((*(longlong *)(param_1 + 0x4d8) != 0) &&
       (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) == 0x1a)) {
      func_0x0001402276d0(aiStack_368);
      aiStack_368[0] = CONCAT22(aiStack_368[0]._2_2_,uVar18);
      piStack_538 = aiStack_368;
      FUN_14133d990(param_1,0,0,0);
      FUN_14022f4d0(aiStack_368);
    }
    cVar13 = '\0';
    if ((*(longlong *)(param_1 + 0x4d8) == 0) &&
       (lVar29 = func_0x000140074de0(param_1,0x53), lVar29 == 0)) {
      FUN_140074e10(param_1,0x53,500);
      piVar34 = (int *)FUN_1413e51b0(param_1);
      *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) | 1;
      func_0x000140671a80(aiStack_368);
      plStack_530 = (longlong *)CONCAT44(plStack_530._4_4_,100);
      piStack_538 = piVar34;
      FUN_140a23c90(param_1,aiStack_368,plStack_4d0,1);
      cVar13 = '\0';
      if (aiStack_368[0] == 0x24) {
        FUN_14150ce70(param_1,aiStack_368,plStack_4d0);
        goto LAB_14151e7ba;
      }
    }
  }
  if (*piStack_458 - 1U < 2) {
    cVar13 = '\0';
  }
  if (*(longlong *)(param_1 + 0xb20) - *(longlong *)(param_1 + 0xb18) >> 4 != 0) {
    cVar13 = '\x01';
  }
  lVar29 = func_0x000140074de0(param_1,0x16);
  if ((lVar29 != 0) || ((*(uint *)(param_1 + 0x110) & 0x200) != 0)) {
    cVar13 = '\x01';
  }
  cStack_508 = '\0';
  lVar29 = *(longlong *)(param_1 + 0x4d8);
  if (lVar29 != 0) {
    iVar21 = (int)*(short *)(lVar29 + 0x14);
    switch(iVar21) {
    case 0x1a:
    case 0x1c:
    case 0x23:
    case 0xdc:
      cStack_508 = '\x01';
      break;
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0xf6:
    case 0xf7:
      cVar13 = func_0x0001400747f0(param_1,0xf);
      if (cVar13 == '\0') {
        if (iVar21 != 0x33) {
          FUN_1413e4d00(param_1);
          FUN_1413e4c20(param_1);
        }
        FUN_140a05350(param_1,plStack_4d0);
      }
      goto LAB_14151e7ba;
    }
    if ((((iVar21 == 0x33) && (lVar25 == 0)) &&
        (puVar45 = (undefined8 *)func_0x000140d211b0(lVar29,0), puVar45 != (undefined8 *)0x0)) &&
       (sVar15 = (*(code *)**(undefined8 **)*puVar45)(), sVar15 == 0x27)) goto LAB_14151e7ba;
  }
  if (bVar59) {
    if (((plVar31 == (longlong *)0x0) || (lVar25 == 0)) || (piVar33 == (int *)0x0)) {
      if (((cVar13 != '\0') &&
          (plVar35 = (longlong *)FUN_1413e51b0(param_1), plVar35 != (longlong *)0x0)) &&
         (iVar21 = (**(code **)(*plVar35 + 0x18))(plVar35), iVar21 == 0)) goto LAB_14151e7ba;
    }
    else if ((cVar13 != '\0') || (iVar21 = FUN_140073560(5), iVar21 == 0)) {
      FUN_1413e51b0(param_1);
      if (((*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) & 0xfffffffffffffffeU) == 0
          ) && ((*(uint *)(param_1 + 0x110) & 0x8200) == 0)) {
        uStack_4e8 = uStack_4e8 & 0xffffff00;
        sVar15 = *(short *)((longlong)plVar31 + 0xac);
        sVar47 = *(short *)(param_1 + 0xac);
        sVar17 = *(short *)((longlong)plVar31 + 0xaa);
        sVar19 = *(short *)(param_1 + 0xaa);
        lVar25 = plStack_4e0[0x15];
        sVar4 = *(short *)(param_1 + 0xa8);
        sStack_500 = FUN_140073810((short)lVar25 - sVar4,sVar17 - sVar19,sVar15 - sVar47);
        if (sStack_500 < 6) {
          iVar21 = -((int)sVar15 - (int)sVar47);
          if (iVar21 < 0) {
            iVar21 = (int)sVar15 - (int)sVar47;
          }
          if (iVar21 < 2) {
            cStack_510 = '\x01';
            uStack_518 = 0xffffffff;
            uStack_520 = 0;
            uStack_528 = CONCAT11(uStack_528._1_1_,1);
            plStack_530 = (longlong *)CONCAT62(plStack_530._2_6_,sVar15);
            piStack_538 = (int *)CONCAT62(piStack_538._2_6_,sVar17);
            cVar13 = FUN_140aa8e50(sVar4,sVar19,sVar47,(short)lVar25);
            uStack_4e8 = uStack_4e8 & 0xff;
            if (cVar13 != '\0') {
              uStack_4e8 = 1;
            }
          }
        }
        lStack_3c8 = 0;
        lStack_3c0 = 0;
        uStack_3b8 = 0;
        ppppuStack_428 = (ulonglong ****)0x0;
        pppppuStack_420 = (undefined8 ******)0x0;
        pppppuStack_418 = (undefined8 ******)0x0;
        uVar20 = (int)*(short *)(param_1 + 0xa8) - 1;
        auStack_4fc[0] = (ushort)uVar20;
        if ((int)(short)auStack_4fc[0] <= *(short *)(param_1 + 0xa8) + 1) {
          do {
            iVar21 = (int)*(short *)(param_1 + 0xaa);
            uVar48 = iVar21 - 1;
            auStack_504[0] = (ushort)uVar48;
            sVar15 = (short)uVar20;
            if ((int)(short)auStack_504[0] <= iVar21 + 1) {
              uVar56 = uVar48 & 0xffff;
              do {
                sVar47 = (short)uVar48;
                if (((sVar15 != *(short *)(param_1 + 0xa8)) || ((short)uVar56 != (short)iVar21)) &&
                   (uVar58 = func_0x000140069640(0x1423f3970,uVar20 & 0xffff,uVar48 & 0xffff,
                                                 *(undefined2 *)(param_1 + 0xac)), (uVar58 & 8) == 0
                   )) {
                  piStack_538 = (int *)((ulonglong)piStack_538 & 0xffffffffffffff00);
                  cVar13 = FUN_14137f170(param_1,uVar20 & 0xffff,uVar48 & 0xffff);
                  if (cVar13 != '\0') {
                    sVar17 = *(short *)((longlong)plStack_4e0 + 0xac);
                    sVar19 = *(short *)(param_1 + 0xac);
                    sVar4 = *(short *)((longlong)plStack_4e0 + 0xaa);
                    sVar5 = (short)plStack_4e0[0x15];
                    sVar54 = sVar17 - sVar19;
                    if ((char)uStack_4e8 == '\0') {
                      sVar54 = FUN_140073810(sVar5 - sVar15,sVar4 - sVar47,sVar54);
                      if (sVar54 < sStack_500) {
                        cStack_510 = '\x02';
                        uStack_518 = 0xffffffff;
                        uStack_520 = 0;
                        uStack_528 = CONCAT11(uStack_528._1_1_,1);
                        plStack_530 = (longlong *)CONCAT62(plStack_530._2_6_,sVar17);
                        piStack_538 = (int *)CONCAT62(piStack_538._2_6_,sVar4);
                        cVar13 = FUN_140aa8e50(uVar20 & 0xffff,uVar48 & 0xffff,sVar19,sVar5);
                        if ((cVar13 != '\0') && (1 < _DAT_142153e80)) {
                          uVar18 = func_0x0001400695b0(0x1423f3970,_DAT_141bd5a8c,_DAT_141bd5a8e,
                                                       _DAT_141bd5a90);
                          cVar13 = func_0x0001402c6cb0(uVar18);
                          if (cVar13 != '\0') goto LAB_14151d265;
                        }
                      }
                    }
                    else {
                      sVar17 = FUN_140073810(sVar5 - sVar15,sVar4 - sVar47,sVar54);
                      if (sStack_500 < sVar17) {
LAB_14151d265:
                        func_0x000140070b20(&lStack_3c8,auStack_4fc);
                        func_0x000140070b20(&ppppuStack_428,auStack_504);
                      }
                    }
                  }
                }
                auStack_504[0] = sVar47 + 1;
                uVar48 = (uint)auStack_504[0];
                uVar56 = (uint)(short)auStack_504[0];
                iVar21 = (int)*(short *)(param_1 + 0xaa);
              } while ((int)uVar56 <= iVar21 + 1);
            }
            auStack_4fc[0] = sVar15 + 1;
            uVar20 = (uint)auStack_4fc[0];
          } while ((int)(short)auStack_4fc[0] <= *(short *)(param_1 + 0xa8) + 1);
        }
        lVar25 = lStack_3c8;
        if (lStack_3c0 - lStack_3c8 >> 1 != 0) {
          iVar21 = FUN_140073560();
          sVar15 = *(short *)(lVar25 + (longlong)iVar21 * 2);
          sVar47 = *(short *)((longlong)ppppuStack_428 + (longlong)iVar21 * 2);
          piStack_538 = (int *)CONCAT44(piStack_538._4_4_,0xd8);
          FUN_140074ea0(param_1,sVar15,sVar47,*(undefined2 *)(param_1 + 0xac));
          uVar22 = FUN_141360970(param_1,0,1);
          *(undefined4 *)(param_1 + 0xc60) = uVar22;
          FUN_1413d19b0(param_1);
          *(undefined4 *)(param_1 + 0xc60) = 0;
          iVar21 = FUN_14134d520(param_1,1,1,&piStack_458);
          if ((sVar15 != *(short *)(param_1 + 0xa8)) && (sVar47 != *(short *)(param_1 + 0xaa))) {
            iVar21 = (int)((iVar21 * 0x16a >> 0x1f & 0xffU) + iVar21 * 0x16a) >> 8;
          }
          iVar55 = FUN_140073560(100);
          iVar43 = iVar21 / 100 + 1;
          if (iVar21 % 100 <= iVar55) {
            iVar43 = iVar21 / 100;
          }
          puVar28 = (undefined4 *)FUN_140660420(param_1);
          *puVar28 = 0;
          *(undefined2 *)(puVar28 + 2) = *(undefined2 *)(param_1 + 0xa8);
          *(undefined2 *)((longlong)puVar28 + 10) = *(undefined2 *)(param_1 + 0xaa);
          *(undefined2 *)(puVar28 + 3) = *(undefined2 *)(param_1 + 0xac);
          puVar28[4] = iVar43;
          puVar28[5] = iVar43;
          if (piStack_458 == (int *)0x0) {
            puVar28[6] = 0;
          }
          else {
            iVar21 = piStack_458[5];
            puVar28[6] = iVar21;
            if (((5 < iVar21) && (1 < iVar43)) &&
               (puVar28[6] = iVar21 / iVar43, iVar21 / iVar43 < 5)) {
              puVar28[6] = 5;
            }
          }
          puVar28[7] = 0;
        }
        FUN_140070de0(&ppppuStack_428);
        FUN_140070de0(&lStack_3c8);
        plVar31 = plStack_4e0;
        piVar33 = apiStack_4b8[0];
      }
      iVar21 = FUN_141357010(param_1,piVar33,0);
      cStack_510 = (9 < iVar21) + '\x01';
      uVar18 = 0xffff;
      uStack_518 = 0xffffffff;
      uStack_520 = 0;
      uStack_528 = CONCAT11(uStack_528._1_1_,1);
      plStack_530 = (longlong *)
                    CONCAT62(plStack_530._2_6_,*(undefined2 *)((longlong)plVar31 + 0xac));
      piStack_538 = (int *)CONCAT62(piStack_538._2_6_,*(undefined2 *)((longlong)plVar31 + 0xaa));
      cVar13 = FUN_140aa8e50(*(undefined2 *)(param_1 + 0xa8),*(undefined2 *)(param_1 + 0xaa),
                             *(undefined2 *)(param_1 + 0xac),(short)plVar31[0x15]);
      if (cVar13 == '\0') goto LAB_14151e7ba;
      if (cStack_508 == '\0') {
        FUN_1413cbcf0(param_1);
      }
      if (plStack_4d0[0xcd] != 0) {
        *(undefined4 *)(plStack_4d0[0xcd] + 0x6c) = 0;
      }
      piStack_538 = (int *)CONCAT71(piStack_538._1_7_,1);
      uVar60 = FUN_14066cd50(&DAT_142662f68,param_1,plVar31,piVar33);
      uVar22 = 0;
      if (0 < _DAT_142662fb0) {
        iVar21 = FUN_1414fc280(uVar60,param_1,plVar31);
        if ((iVar21 == -1) && ((*(byte *)(param_1 + 0x114) & 2) != 0)) {
          iVar21 = 2;
        }
        iVar55 = 0;
        iVar43 = -100000;
        iVar57 = 0;
        puVar45 = _DAT_142662f68;
        lVar25 = 0;
        if (0 < _DAT_142662fb0) {
          do {
            iVar44 = 2;
            puVar40 = (undefined8 *)*puVar45;
            if (((iVar21 == 2) || (iVar21 - 5U < 2)) || ((*(uint *)(puVar40 + 3) & 0x10000) == 0)) {
              uVar20 = *(uint *)(puVar40 + 3);
              if ((uVar20 & 1) == 0) {
                if ((uVar20 & 2) == 0) {
                  if (((uVar20 & 4) == 0) && ((uVar20 >> 10 & 1) == 0)) {
                    iVar44 = ((uVar20 >> 0xb & 1) != 0) + 1;
                  }
                }
                else {
                  iVar44 = 3;
                }
              }
              else {
                iVar44 = (*(int *)(puVar40 + 2) >> 0x1f & 0xfffffff8U) + 0xc;
              }
              if (((*(longlong *)(param_1 + 0x4d8) != 0) &&
                  (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) == 0xdf)) &&
                 ((int *)*puVar40 == piVar33)) {
                iVar44 = iVar44 + 100000;
              }
              iVar49 = *(int *)(puVar40 + 2);
              if (iVar49 < -2) {
                iVar44 = iVar44 + -1000;
              }
              else if (iVar49 == -2) {
                iVar44 = iVar44 + -800;
              }
              else if (iVar49 == -1) {
                iVar44 = iVar44 + -400;
              }
              else if (iVar49 == 1) {
                iVar44 = iVar44 * 2;
              }
              else if (iVar49 == 2) {
                iVar44 = iVar44 * 3;
              }
              else if (2 < iVar49) {
                iVar44 = iVar44 * 4;
              }
              uVar20 = *(uint *)(puVar40 + 3);
              if ((uVar20 >> 0xc & 1) == 0) {
                if ((uVar20 >> 0xd & 1) == 0) {
                  if ((uVar20 >> 0xe & 1) != 0) {
                    iVar44 = iVar44 + -1;
                  }
                }
                else {
                  iVar44 = iVar44 + -5;
                }
              }
              else {
                iVar44 = iVar44 + -9;
              }
              iVar49 = *(int *)((longlong)puVar40 + 0x14) + -2;
              if ((uVar20 >> 0xf & 1) == 0) {
                iVar49 = *(int *)((longlong)puVar40 + 0x14);
              }
              iVar23 = iVar44 + 2;
              if ((uVar20 & 0x10) == 0) {
                iVar23 = iVar44;
              }
              iVar44 = iVar23 + 2;
              if ((uVar20 & 8) == 0) {
                iVar44 = iVar23;
              }
              if (iVar49 < -2) {
                iVar44 = iVar44 + -100;
              }
              else if (iVar49 == -2) {
                iVar44 = iVar44 + -0x32;
              }
              else if (iVar49 == -1) {
                iVar44 = iVar44 + -0x19;
              }
              else if (iVar49 == 1) {
                iVar44 = iVar44 + 1;
              }
              else if (iVar49 == 2) {
                iVar44 = iVar44 + 2;
              }
              else if (2 < iVar49) {
                iVar44 = iVar44 + 3;
              }
              lVar29 = 0;
              iVar49 = 0;
              if ((iVar43 < iVar44) ||
                 ((iVar44 == iVar43 &&
                  (lVar29 = lVar25, iVar44 = iVar43, iVar49 = iVar55, lVar25 < 200)))) {
                aiStack_368[lVar29] = iVar57;
                iVar55 = iVar49 + 1;
                lVar25 = lVar29 + 1;
                iVar43 = iVar44;
              }
            }
            iVar57 = iVar57 + 1;
            puVar45 = puVar45 + 1;
          } while (iVar57 < _DAT_142662fb0);
          if (0 < iVar55) {
            iVar21 = FUN_140073560(iVar55);
            uVar18 = *(undefined2 *)(_DAT_142662f68[aiStack_368[iVar21]] + 0xc);
            plVar31 = plStack_4e0;
            uVar22 = *(undefined4 *)(_DAT_142662f68[aiStack_368[iVar21]] + 0x10);
            goto LAB_14151d6fd;
          }
        }
        uVar18 = 0xffff;
        plVar31 = plStack_4e0;
        uVar22 = 0;
      }
LAB_14151d6fd:
      if (cStack_507 == '\0') {
        cVar13 = func_0x0001400747f0(param_1,0x18);
        if (cVar13 == '\0') {
          puVar28 = (undefined4 *)FUN_140660420(param_1);
          *puVar28 = 0x18;
          uVar24 = FUN_1406712f0(param_1,piVar33);
          puVar28[2] = uVar24;
          puVar28[3] = piVar33[7];
          puVar28[4] = *(undefined4 *)(lStack_4c0 + 0x1c);
          puVar28[5] = 1;
          puVar28[6] = (int)plVar31[0x26];
          *(short *)(puVar28 + 7) = (short)plVar31[0x15];
          *(undefined2 *)((longlong)puVar28 + 0x1e) = *(undefined2 *)((longlong)plVar31 + 0xaa);
          *(undefined2 *)(puVar28 + 8) = *(undefined2 *)((longlong)plVar31 + 0xac);
          *(undefined2 *)((longlong)puVar28 + 0x22) = uVar18;
          puVar28[9] = uVar22;
        }
      }
      else {
        puVar28 = (undefined4 *)FUN_140660420();
        *puVar28 = 0x19;
        uVar24 = FUN_1406712b0(extraout_XMM0_Qa_03,piVar33);
        puVar28[2] = uVar24;
        puVar28[3] = piVar33[7];
        puVar28[4] = *(undefined4 *)(lStack_4c0 + 0x1c);
        puVar28[5] = 0;
        puVar28[6] = (int)plVar31[0x26];
        *(short *)(puVar28 + 7) = (short)plVar31[0x15];
        *(undefined2 *)((longlong)puVar28 + 0x1e) = *(undefined2 *)((longlong)plVar31 + 0xaa);
        *(undefined2 *)(puVar28 + 8) = *(undefined2 *)((longlong)plVar31 + 0xac);
        *(undefined2 *)((longlong)puVar28 + 0x22) = uVar18;
        puVar28[9] = uVar22;
      }
      goto LAB_14151e7ba;
    }
  }
  uVar16 = uStack_506;
  lVar25 = *(longlong *)(param_1 + 0x5f8);
  if ((*(byte *)(lVar25 + 0xe0) & 1) == 0) {
    if (cVar13 != '\0') goto LAB_14151de78;
LAB_14151db40:
    bVar59 = false;
    lVar25 = *(longlong *)(param_1 + 0x4d8);
    if (((lVar25 != 0) && (*(short *)(lVar25 + 0x14) == 0x1c)) &&
       (plVar31 = (longlong *)FUN_140d21780(lVar25,0x17), plVar31 == plStack_4e0)) {
      bVar59 = plStack_4e0 != (longlong *)0x0;
    }
    if ((*(short *)(param_1 + 0xc6) == 6) && (5 < (short)uVar16)) {
      bVar59 = true;
    }
    if (*(longlong *)(param_1 + 0xd80) == 0) {
      if (!bVar59) {
        ppppppuVar38 = (undefined8 ******)func_0x000140074de0(param_1,0x31);
        if ((ppppppuVar38 == (undefined8 ******)0x0) && ((*(byte *)(param_1 + 0x110) & 1) != 0)) {
          pppppuStack_418 = (undefined8 *****)CONCAT44(pppppuStack_418._4_4_,0xffffffff);
          ppppuStack_428 = (ulonglong ****)CONCAT44(ppppuStack_428._4_4_,3);
          pppppuStack_420 = ppppppuVar38;
          FUN_1414017e0(param_1,&ppppuStack_428,plStack_4d0);
          FUN_140074e10(param_1,0x31,10);
        }
        cVar13 = func_0x000140074ce0(param_1);
        if (((cVar13 == '\0') || (*(int *)(param_1 + 0x984) < 0xed8)) &&
           ((*(byte *)(param_1 + 0xbdc) & 1) == 0)) {
          lVar25 = *(longlong *)(param_1 + 0x5f8);
          *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(lVar25 + 0x1b4);
          *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(lVar25 + 0x1b8);
          *(undefined4 *)(param_1 + 0xdf0) = *(undefined4 *)(lVar25 + 0x1bc);
          *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(lVar25 + 0x1c0);
          *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(lVar25 + 0x1c4);
        }
      }
    }
    else {
      bVar59 = true;
    }
    if (((((*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) & 0xfffffffffffffffeU) == 0
          ) || ((ushort)(*(short *)(param_1 + 0xc6) - 0x87U) < 2)) ||
        (((ushort)(*(short *)(param_1 + 0xc6) - 5U) < 2 ||
         (lVar25 = func_0x000140074de0(param_1,0x17), cVar13 = cStack_508, lVar25 == 0)))) &&
       (cVar13 = cStack_508, !bVar59)) {
      if (*(short *)(param_1 + 0xc6) == 6) {
        func_0x0001400708c0(param_1 + 0x170);
        func_0x0001400708c0(param_1 + 0x188);
        func_0x0001400708c0(param_1 + 0x1a0);
      }
      lVar25 = *(longlong *)(param_1 + 0x1208);
      if ((lVar25 != 0) && (*(int *)(lVar25 + 0x138) == 1)) {
        **(uint **)(lVar25 + 0x130) = **(uint **)(lVar25 + 0x130) | 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1208) + 0x10) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1208) + 0x130) + 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x1208) + 0x14) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1208) + 0x130) + 8);
      }
      FUN_140074e10(param_1,0x17,200);
      cStack_507 = '\0';
      FUN_140a4ead0(param_1,0xf);
      cVar13 = _DAT_142153e80 == 0;
      bVar59 = false;
      if ((bool)cVar13) {
        plStack_530 = (longlong *)CONCAT62(plStack_530._2_6_,0x8ad0);
        piStack_538 = (int *)CONCAT62(piStack_538._2_6_,0x8ad0);
        FUN_140a4d690(param_1,0xf,0,0xffff8ad0);
        cStack_507 = '\x01';
        bVar59 = _DAT_142153e80 == 0;
      }
      uVar16 = auStack_504[0];
      if (bVar59 || _DAT_142153e80 < 0) {
        FUN_140074e10(param_1,0x16,200);
        cVar13 = cStack_508;
      }
      else {
        lStack_3c8 = 0;
        lStack_3c0 = 0;
        uStack_3b8 = 0;
        ppppuStack_428 = (ulonglong ****)0x0;
        pppppuStack_420 = (undefined8 ******)0x0;
        pppppuStack_418 = (undefined8 ******)0x0;
        pppppuStack_408 = (undefined8 ******)0x0;
        uStack_400 = 0;
        uStack_3f8 = 0;
        if (0 < _DAT_142153e80) {
          psVar52 = (short *)0x141bd5a82;
          iVar21 = _DAT_142153e80;
          do {
            sVar15 = psVar52[1];
            sVar47 = *psVar52;
            sVar17 = psVar52[-1];
            sVar19 = FUN_140073810(uVar16 - sVar17,auStack_4fc[0] - sVar47,sStack_500 - sVar15);
            if (((sVar17 != *(short *)(param_1 + 0xa8)) || (sVar47 != *(short *)(param_1 + 0xaa)))
               || (sVar15 != *(short *)(param_1 + 0xac))) {
              sVar15 = (short)uStack_4d8;
              if ((sVar15 < sVar19) || (sVar15 == -1)) {
                func_0x0001400708c0(&lStack_3c8);
                func_0x0001400708c0(&ppppuStack_428);
                func_0x0001400708c0(&pppppuStack_408);
                uStack_4d8 = CONCAT22(uStack_4d8._2_2_,sVar19);
              }
              else if (sVar19 != sVar15) goto LAB_14151e670;
              lVar25 = (longlong)(int)uStack_448;
              func_0x000140070b20(&lStack_3c8,lVar25 * 0xc + 0x141bd5a80);
              func_0x000140070b20(&ppppuStack_428,lVar25 * 0xc + 0x141bd5a82);
              func_0x000140070b20(&pppppuStack_408,lVar25 * 0xc + 0x141bd5a84);
              iVar21 = _DAT_142153e80;
            }
LAB_14151e670:
            uVar20 = (int)uStack_448 + 1;
            uStack_448 = (ulonglong)uVar20;
            psVar52 = psVar52 + 6;
            cVar13 = cStack_507;
          } while ((int)uVar20 < iVar21);
        }
        lVar25 = lStack_3c8;
        if (lStack_3c0 - lStack_3c8 >> 1 != 0) {
          iVar21 = FUN_140073560();
          lVar29 = (longlong)iVar21;
          if ((*(longlong *)(param_1 + 0x4d8) == 0) ||
             (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) != 0xdc)) {
            FUN_1413cbcf0(param_1);
          }
          uVar22 = 0x82;
          if (cVar13 != '\0') {
            uVar22 = 0xb5;
          }
          piStack_538 = (int *)CONCAT44(piStack_538._4_4_,uVar22);
          FUN_140074ea0(param_1,*(undefined2 *)(lVar25 + lVar29 * 2),
                        *(undefined2 *)((longlong)ppppuStack_428 + lVar29 * 2),
                        *(undefined2 *)((longlong)pppppuStack_408 + lVar29 * 2));
          FUN_1413d19b0(param_1);
          cVar13 = func_0x000140074d90(param_1);
          if (((cVar13 != '\0') && (cVar13 = func_0x000140074d40(), cVar13 != '\0')) &&
             (cVar13 = func_0x0001400747f0(extraout_XMM0_Qa_04,7), cVar13 == '\0')) {
            uVar60 = 0x47;
            if (*piStack_458 != 2) {
              uVar60 = 0x48;
            }
            FUN_141406700(param_1,uVar60);
          }
          FUN_140070de0(&pppppuStack_408);
          FUN_140070de0(&ppppuStack_428);
          FUN_140070de0(&lStack_3c8);
          goto LAB_14151e7ba;
        }
        FUN_140070de0(&pppppuStack_408);
        FUN_140070de0(&ppppuStack_428);
        FUN_140070de0(&lStack_3c8);
        cVar13 = cStack_508;
      }
    }
  }
  else {
    if (cVar13 == '\0') {
      if (((short)uStack_506 < 5) && (*(int *)(param_1 + 0xd98) == -1)) {
        plVar31 = *(longlong **)(lVar25 + 0x30);
        piStack_450 = *(int **)(lVar25 + 0x38);
        uVar58 = 0;
        uStack_4c8 = 0;
        plStack_4f0 = plVar31;
        pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4f8,&piStack_450);
        if (*pcVar26 < (char)uVar58) {
          do {
            uVar20 = (uint)uVar58;
            piVar33 = (int *)*plVar31;
            apiStack_4b8[0] = piVar33;
            if (*piVar33 == 0) {
              plVar35 = *(longlong **)(piVar33 + 10);
              uStack_438 = *(undefined8 *)(piVar33 + 0xc);
              puVar45 = *(undefined8 **)(piVar33 + 0x10);
              plStack_4f0 = plVar35;
              pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4e4,&uStack_438);
              cVar13 = *pcVar26;
              while (cVar13 < '\0') {
                sVar15 = FUN_14077bfa0(*plVar35,1);
                if (sVar15 != -1) {
                  if (sVar15 == 0) {
                    uStack_4e8 = FUN_14077ab80(*puVar45,1);
                  }
                  uVar58 = (ulonglong)uStack_4e8;
                  plVar36 = (longlong *)**(undefined8 **)(param_1 + 0x5f8);
                  uStack_440 = (*(undefined8 **)(param_1 + 0x5f8))[1];
                  pbVar50 = *(byte **)(param_1 + 0x4f0);
                  plStack_4f0 = plVar36;
                  pcVar26 = (char *)func_0x000140070450(&plStack_4f0,&cStack_507,&uStack_440);
                  if (*pcVar26 < '\0') {
                    lStack_4c0 = CONCAT44(lStack_4c0._4_4_,(int)sVar15);
                    iVar21 = (int)sVar15;
                    do {
                      if (iVar21 == 0) {
                        cVar13 = func_0x0001400735c0(*plVar36 + 0x48,uVar58 & 0xffffffff);
                        if (cVar13 != '\0') goto LAB_14151d995;
                      }
                      else {
                        if (iVar21 == 1) {
                          cVar13 = FUN_140071470(*plVar36,*puVar45);
                          if (cVar13 != '\0') goto LAB_14151d995;
                        }
                        else {
                          if (iVar21 == 2) {
                            uVar60 = *puVar45;
                            cVar13 = FUN_140071470(*plVar36 + 0x20,uVar60);
                            if ((cVar13 == '\0') &&
                               (cVar13 = FUN_1400714b0(uVar60,&UNK_14169c058), cVar13 == '\0'))
                            goto LAB_14151d99e;
                          }
LAB_14151d995:
                          uVar20 = uStack_4c8;
                          if ((*pbVar50 & 2) != 0) goto LAB_14151db0f;
                        }
LAB_14151d99e:
                        uVar58 = (ulonglong)uStack_4e8;
                      }
                      plVar36 = plVar36 + 1;
                      pbVar50 = pbVar50 + 4;
                      plStack_4f0 = plVar36;
                      pcVar26 = (char *)func_0x000140070450(&plStack_4f0,&cStack_507,&uStack_440);
                      iVar21 = (int)lStack_4c0;
                    } while (*pcVar26 < '\0');
                  }
                }
                plVar35 = plVar35 + 1;
                puVar45 = puVar45 + 1;
                plStack_4f0 = plVar35;
                pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4e4,&uStack_438);
                piVar33 = apiStack_4b8[0];
                uVar20 = uStack_4c8;
                cVar13 = *pcVar26;
              }
              *(uint *)(param_1 + 0xd98) = uVar20;
              FUN_14139ad00(param_1);
              func_0x000140075090(param_1);
              piVar34 = *(int **)(piVar33 + 0xc);
              puVar45 = *(undefined8 **)(piVar33 + 0x10);
              piStack_458 = piVar34;
              for (piVar33 = *(int **)(piVar33 + 10); piVar11 = apiStack_4b8[0],
                  piStack_450 = piVar33, piVar33 < piVar34; piVar33 = piVar33 + 2) {
                auStack_504[0] = FUN_14077bfa0(*(undefined8 *)piVar33,1);
                if (auStack_504[0] != 0xffff) {
                  if (auStack_504[0] == 0) {
                    uVar22 = FUN_14077ab80(*puVar45,1);
                    lStack_4c0 = CONCAT44(lStack_4c0._4_4_,uVar22);
                  }
                  uVar16 = auStack_504[0];
                  plVar31 = (longlong *)**(undefined8 **)(param_1 + 0x5f8);
                  plVar35 = (longlong *)(*(undefined8 **)(param_1 + 0x5f8))[1];
                  puVar37 = *(uint **)(param_1 + 0x4f0);
                  iVar21 = (int)lStack_4c0;
                  bVar53 = (byte)lStack_4c0;
                  while (piVar34 = piStack_458, param_1 = lStack_430, piVar33 = piStack_450,
                        plVar31 < plVar35) {
                    if (uVar16 == 0) {
                      if ((((-1 < iVar21) && (iVar43 = iVar21 >> 3, -1 < iVar43)) &&
                          (iVar43 < *(int *)(*plVar31 + 0x50))) &&
                         (((byte)(1 << (bVar53 & 7)) &
                          *(byte *)((longlong)iVar43 + *(longlong *)(*plVar31 + 0x48))) != 0))
                      goto LAB_14151dbf5;
LAB_14151dc01:
                      plVar31 = plVar31 + 1;
                      puVar37 = puVar37 + 1;
                    }
                    else if (uVar16 == 1) {
                      plVar46 = (longlong *)*puVar45;
                      plVar41 = (longlong *)*plVar31;
                      plVar36 = plVar46 + 2;
                      if (0xf < (ulonglong)plVar46[3]) {
                        plVar46 = (longlong *)*plVar46;
                      }
                      plVar1 = plVar41 + 2;
                      if (0xf < (ulonglong)plVar41[3]) {
                        plVar41 = (longlong *)*plVar41;
                      }
                      if (*plVar1 != *plVar36) goto LAB_14151dc01;
                      iVar43 = func_0x000141554864(plVar41,plVar46);
                      if (iVar43 == 0) {
LAB_14151dbf5:
                        *puVar37 = *puVar37 & 0xfff7ffff | 0x100000;
                        goto LAB_14151dc01;
                      }
                      plVar31 = plVar31 + 1;
                      puVar37 = puVar37 + 1;
                    }
                    else {
                      if (uVar16 != 2) goto LAB_14151dbf5;
                      plVar36 = (longlong *)*puVar45;
                      lVar25 = *plVar31;
                      puVar40 = (undefined8 *)(lVar25 + 0x20);
                      plVar46 = plVar36;
                      if (0xf < (ulonglong)plVar36[3]) {
                        plVar46 = (longlong *)*plVar36;
                      }
                      if (0xf < *(ulonglong *)(lVar25 + 0x38)) {
                        puVar40 = (undefined8 *)*puVar40;
                      }
                      if (*(longlong *)(lVar25 + 0x30) == plVar36[2]) {
                        iVar43 = func_0x000141554864(puVar40,plVar46);
                        if (iVar43 == 0) goto LAB_14151dbf5;
                        plVar36 = (longlong *)*puVar45;
                      }
                      cVar13 = FUN_1400714b0(plVar36,&UNK_14169c058);
                      if (cVar13 != '\0') goto LAB_14151dbf5;
                      plVar31 = plVar31 + 1;
                      puVar37 = puVar37 + 1;
                    }
                  }
                }
                puVar45 = puVar45 + 1;
              }
              puVar7 = *(uint **)(param_1 + 0x4f8);
              for (puVar37 = *(uint **)(param_1 + 0x4f0); puVar37 < puVar7; puVar37 = puVar37 + 1) {
                if ((*puVar37 >> 0x14 & 1) == 0) {
                  *puVar37 = *puVar37 | 0x80000;
                }
              }
              if (*(longlong *)(apiStack_4b8[0] + 0x4c) != 0) {
                uStack_3e0 = 0;
                pppppuStack_3d8 = (undefined8 ******)0x0;
                uStack_3d0 = 0xf;
                pppppuStack_3e8 = (ulonglong *****)0x0;
                piStack_538 = (int *)CONCAT71(piStack_538._1_7_,1);
                FUN_141346d40(param_1,&pppppuStack_3e8,1,1);
                pppppuVar30 = pppppuStack_3d8;
                ppppuStack_428 = (ulonglong ****)0x0;
                pppppuStack_420 = (undefined8 ******)0x0;
                pppppuStack_418 = (undefined8 ******)0x0;
                uStack_410 = 0;
                ppppppuVar51 = &pppppuStack_3e8;
                if (0xf < uStack_3d0) {
                  ppppppuVar51 = (ulonglong ******)pppppuStack_3e8;
                }
                if ((undefined8 ******)0x7fffffffffffffff < pppppuStack_3d8) {
                  FUN_140066ec0();
LAB_14151e7ea:
                  FUN_140066ec0();
                  goto LAB_14151e7f0;
                }
                if (pppppuStack_3d8 < (undefined8 ******)0x10) {
                  pppppuStack_418 = pppppuStack_3d8;
                  uStack_410 = 0xf;
                  ppppuStack_428 = (ulonglong ****)*ppppppuVar51;
                  pppppuStack_420 = ppppppuVar51[1];
                }
                else {
                  uVar32 = (ulonglong)pppppuStack_3d8 | 0xf;
                  uVar58 = 0x7fffffffffffffff;
                  if ((uVar32 < 0x8000000000000000) && (uVar58 = uVar32, uVar32 < 0x16)) {
                    uVar58 = 0x16;
                  }
                  ppppuStack_428 = (ulonglong ****)FUN_140071e00(uVar58 + 1);
                  pppppuStack_418 = pppppuVar30;
                  uStack_410 = uVar58;
                  func_0x00014155454e(ppppuStack_428,ppppppuVar51,(longlong)pppppuVar30 + 1);
                }
                FUN_140071040(&ppppuStack_428,&UNK_1416039f0,1);
                plVar31 = (longlong *)(piVar11 + 0x48);
                if (0xf < *(ulonglong *)(piVar11 + 0x4e)) {
                  plVar31 = (longlong *)*plVar31;
                }
                FUN_140071040(&ppppuStack_428,plVar31,*(undefined8 *)(piVar11 + 0x4c));
                FUN_1414011c0(param_1,&ppppuStack_428);
                FUN_140071040(&ppppuStack_428,&UNK_141603844,1);
                uStack_49c = 0;
                uStack_498 = 0x8ad08ad0;
                uStack_494 = 0x8ad0;
                uStack_490 = 0;
                pppppuStack_480 = (undefined8 ******)0x0;
                uStack_478 = 0xffffffffffffffff;
                uStack_470 = 0xffffffff;
                uStack_46c = 0;
                uStack_468 = 0xffffffff;
                uStack_4a8 = 0x70094;
                uStack_4a4 = 1;
                uStack_48c = 2000;
                uStack_4a2 = *(undefined2 *)(param_1 + 0xa8);
                uStack_4a0 = *(undefined2 *)(param_1 + 0xaa);
                uStack_49e = *(undefined2 *)(param_1 + 0xac);
                lStack_488 = param_1;
                FUN_1400e5250(0x142505cd0,&ppppuStack_428,&uStack_4a8);
                if (0xf < uStack_410) {
                  uVar58 = uStack_410 + 1;
                  pppppuVar42 = (ulonglong *****)ppppuStack_428;
                  if (0xfff < uVar58) {
                    uVar58 = uStack_410 + 0x28;
                    pppppuVar42 = (ulonglong *****)ppppuStack_428[-1];
                    if (0x1f < (ulonglong)((longlong)ppppuStack_428 + (-8 - (longlong)pppppuVar42)))
                    {
                      _invalid_parameter_noinfo_noreturn();
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  func_0x0001415530d0(pppppuVar42,uVar58);
                }
                pppppuStack_418 = (undefined8 ******)0x0;
                uStack_410 = 0xf;
                ppppuStack_428 = (ulonglong ****)((ulonglong)ppppuStack_428 & 0xffffffffffffff00);
                FUN_140070e80(&pppppuStack_3e8);
              }
              func_0x000141377450(param_1);
              FUN_141377290(param_1);
              goto LAB_14151e7ba;
            }
LAB_14151db0f:
            plVar31 = plVar31 + 1;
            uStack_4c8 = uVar20 + 1;
            uVar58 = (ulonglong)uStack_4c8;
            plStack_4f0 = plVar31;
            pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4f8,&piStack_450);
            uVar16 = uStack_506;
          } while (*pcVar26 < '\0');
        }
      }
      goto LAB_14151db40;
    }
LAB_14151de78:
    if (plVar31 == (longlong *)0x0) {
LAB_14151dfa9:
      cVar13 = cStack_508;
      if ((!bVar9) && ((*(uint *)(param_1 + 0x110) & 0x200) == 0)) {
        bVar53 = 1;
        cVar13 = func_0x000140074ce0();
        uVar10 = auStack_4fc[0];
        sVar15 = sStack_500;
        uVar16 = auStack_504[0];
        if ((cVar13 == '\0') || (*(int *)(param_1 + 0x984) < 0xed8)) {
          bVar39 = 0;
          if (*(longlong *)(param_1 + 0xd80) == 0) {
            bVar39 = bVar53;
          }
          if ((bVar39 != 0) && ((*(byte *)(param_1 + 0xbdc) & bVar53) == 0)) {
            lVar25 = *(longlong *)(param_1 + 0x5f8);
            *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(lVar25 + 0x1b4);
            *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(lVar25 + 0x1b8);
            *(undefined4 *)(param_1 + 0xdf0) = *(undefined4 *)(lVar25 + 0x1bc);
            *(undefined4 *)(param_1 + 0xdf4) = *(undefined4 *)(lVar25 + 0x1c0);
            *(undefined4 *)(param_1 + 0xdf8) = *(undefined4 *)(lVar25 + 0x1c4);
          }
        }
        bVar59 = false;
        cVar13 = cStack_508;
        if (((*(ushort *)(param_1 + 0xc0) != auStack_504[0]) ||
            (*(ushort *)(param_1 + 0xc2) != auStack_4fc[0])) ||
           (*(short *)(param_1 + 0xc4) != sStack_500)) {
          if (*(longlong *)(param_1 + 0xd0) - (longlong)*(short **)(param_1 + 200) >> 1 != 0) {
            sVar47 = **(short **)(param_1 + 200);
            sVar17 = *(short *)(param_1 + 0xa8);
            if (sVar17 < (short)auStack_504[0]) {
              if (sVar47 < sVar17) {
                bVar59 = true;
              }
            }
            else if ((short)auStack_504[0] < sVar17) {
              bVar59 = sVar17 < sVar47;
            }
            sVar47 = *(short *)(param_1 + 0xaa);
            if (sVar47 < (short)auStack_4fc[0]) {
              if (**(short **)(param_1 + 0xe0) < sVar47) {
                bVar59 = true;
              }
            }
            else if (((short)auStack_4fc[0] < sVar47) && (sVar47 < **(short **)(param_1 + 0xe0))) {
              bVar59 = true;
            }
            sVar47 = *(short *)(param_1 + 0xac);
            if (sVar47 < sStack_500) {
              if (sVar47 <= **(short **)(param_1 + 0xf8)) {
LAB_14151e13a:
                if (!bVar59) goto LAB_14151e7a3;
              }
            }
            else if ((sVar47 <= sStack_500) || (**(short **)(param_1 + 0xf8) <= sVar47))
            goto LAB_14151e13a;
            iVar21 = FUN_140073560(3);
            cVar13 = cStack_508;
            if (iVar21 == 0) goto LAB_14151e7a3;
          }
          cVar13 = cStack_508;
          if ((short)uStack_506 < 0x15) {
            if (((*(ushort *)(param_1 + 0xa8) != uVar16) || (*(ushort *)(param_1 + 0xaa) != uVar10))
               || (*(short *)(param_1 + 0xac) != sVar15)) {
              if ((*(longlong *)(param_1 + 0x4d8) == 0) ||
                 (*(short *)(*(longlong *)(param_1 + 0x4d8) + 0x14) != 0x1a)) {
                if ((short)uStack_506 < 8) {
                  plStack_530 = (longlong *)CONCAT62(plStack_530._2_6_,0x8ad0);
                  piStack_538 = (int *)CONCAT62(piStack_538._2_6_,0x8ad0);
                  FUN_140a4d690(param_1,(uint)uStack_506 + (uint)uStack_506,0,0xffff8ad0);
                  iVar21 = func_0x00014025a9f0(0x1423f3970,uVar16,uVar10,sVar15);
                  if (iVar21 < _DAT_142660dbc) {
                    goto LAB_14151e271;
                  }
                }
                else {
LAB_14151e271:
                  plStack_530 = (longlong *)CONCAT62(plStack_530._2_6_,0x8ad0);
                  piStack_538 = (int *)CONCAT62(piStack_538._2_6_,0x8ad0);
                  FUN_140a4d690(param_1,0x15,0,0xffff8ad0);
                }
                iVar21 = func_0x00014025a9f0(0x1423f3970,uVar16,uVar10,sVar15);
                if (iVar21 < _DAT_142660dbc) goto LAB_14151e2d4;
                if (cStack_508 == '\0') {
                  FUN_1413cbcf0(param_1);
                }
                piStack_538 = (int *)CONCAT44(piStack_538._4_4_,0xb3);
              }
              else {
                piStack_538 = (int *)((ulonglong)piStack_538 & 0xffffffffffffff00);
                cVar13 = FUN_1413bd210(param_1,uVar16,uVar10,sVar15);
                if (cVar13 == '\0') {
LAB_14151e2d4:
                  if (plVar31 != (longlong *)0x0) {
                    FUN_1413cbe60(param_1,(int)plVar31[0x26]);
                  }
                  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
                  *(undefined4 *)(param_1 + 0x354) = 0x8ad08ad0;
                  *(undefined2 *)(param_1 + 0x358) = 0x8ad0;
                  *(undefined4 *)(param_1 + 0x35c) = 0;
                  *(undefined8 *)(param_1 + 0x490) = 0;
                  cVar13 = cStack_508;
                  goto LAB_14151e7a3;
                }
                if (cStack_508 == '\0') {
                  FUN_1413cbcf0(param_1);
                }
                piStack_538 = (int *)CONCAT44(piStack_538._4_4_,0x81);
              }
              FUN_140074ea0(param_1,uVar16,uVar10,sVar15);
              FUN_1413d19b0(param_1);
              goto LAB_14151e7ba;
            }
            if (cStack_508 == '\0') {
              FUN_1413cbcf0(param_1);
            }
            piStack_538 = (int *)CONCAT44(piStack_538._4_4_,0x96);
            FUN_140074ea0(param_1,uVar16,uVar10,sVar15);
          }
        }
      }
    }
    else {
      uStack_528 = *(undefined2 *)((longlong)plVar31 + 0xac);
      plStack_530 = (longlong *)
                    CONCAT62(plStack_530._2_6_,*(undefined2 *)((longlong)plVar31 + 0xaa));
      piStack_538 = (int *)CONCAT62(piStack_538._2_6_,(short)plVar31[0x15]);
      cVar13 = FUN_141465cd0(0x1423f3970,*(undefined2 *)(param_1 + 0xa8),
                             *(undefined2 *)(param_1 + 0xaa),*(undefined2 *)(param_1 + 0xac));
      if (cVar13 == '\0') goto LAB_14151dfa9;
      bVar59 = false;
      uVar60 = 0;
      plVar31 = *(longlong **)(param_1 + 2000);
      apiStack_4b8[0] = *(int **)(param_1 + 0x7d8);
      plStack_4f0 = plVar31;
      pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4f8,apiStack_4b8);
      if (*pcVar26 < '\0') {
        do {
          iVar21 = *(int *)*plVar31;
          if (iVar21 == 0) {
            uVar60 = 1;
          }
          else if ((iVar21 == 1) && ((((int *)*plVar31)[0xf] & 0x200U) == 0)) {
            bVar59 = true;
          }
          plVar31 = plVar31 + 1;
          plStack_4f0 = plVar31;
          pcVar26 = (char *)func_0x000140070450(&plStack_4f0,auStack_4f8,apiStack_4b8);
        } while (*pcVar26 < '\0');
        if ((char)uVar60 == '\0') goto LAB_14151df49;
      }
      else {
LAB_14151df49:
        if (*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 1 != 0) {
          func_0x000140075090(param_1);
        }
      }
      cVar13 = cStack_508;
      if (!bVar59) {
        plStack_530 = plStack_4d0;
        piStack_538 = (int *)0x0;
        FUN_14065d560(param_1,*(undefined8 *)(param_1 + 0x490),0,0);
        uVar22 = FUN_140073560(0x2711);
        *(undefined4 *)(param_1 + 0x4e8) = uVar22;
        cVar13 = cStack_508;
      }
    }
  }
LAB_14151e7a3:
  if ((*(longlong *)(param_1 + 0x490) != 0) && (cVar13 == '\0')) {
    FUN_1413cbcf0(param_1);
  }
LAB_14151e7ba:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_558);
  return;
}
