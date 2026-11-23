/* classic PE:6aea11a5:0272d000; reaction-category-tooltip; RVA 0x8d9c30..0x8d9cd7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_reaction_category_tooltip(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  FUN_1400bcf70(param_2);
  puVar2 = _DAT_142513608;
  puVar6 = _DAT_142513600;
  while( true ) {
    if (puVar2 <= puVar6) {
      return;
    }
    plVar5 = (longlong *)(param_1 + 0x48);
    plVar1 = (longlong *)*puVar6;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      plVar5 = (longlong *)*plVar5;
    }
    plVar4 = plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar4 = (longlong *)*plVar1;
    }
    if ((plVar1[2] == *(longlong *)(param_1 + 0x58)) &&
       (iVar3 = workshop_supplier_0x154f5b4(plVar4,plVar5), iVar3 == 0)) break;
    puVar6 = puVar6 + 1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  workshop_tooltip_paragraph_splitter(param_2,plVar1 + 0xd,0x1d);
  return;
}


/* classic PE:6aea11a5:0272d000; task-choice-tooltip; RVA 0x8d9ce0..0x8dae58 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_task_choice_tooltip(longlong param_1,longlong *param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 *****pppppuVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ******ppppppuVar6;
  longlong *plVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *******pppppppuVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 ******ppppppuVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStack_3c8 [32];
  undefined2 uStack_3a8;
  undefined4 uStack_3a0;
  longlong lStack_398;
  undefined4 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_360;
  undefined8 *******pppppppuStack_358;
  undefined8 *******pppppppuStack_350;
  undefined8 *******pppppppuStack_348;
  undefined8 ******ppppppuStack_340;
  undefined8 ******ppppppuStack_338;
  undefined8 uStack_330;
  longlong *plStack_328;
  undefined8 ******ppppppuStack_320;
  longlong lStack_318;
  longlong *plStack_310;
  longlong lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *******pppppppuStack_2f0;
  undefined8 uStack_2e8;
  ulonglong uStack_2e0;
  ulonglong uStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined8 uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulonglong uStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulonglong uStack_278;
  undefined2 uStack_268;
  undefined2 uStack_266;
  undefined2 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_24c;
  undefined4 uStack_244;
  undefined4 uStack_23c;
  undefined4 uStack_234;
  undefined8 ***apppuStack_228 [4];
  undefined8 ***apppuStack_208 [4];
  undefined4 uStack_1e8;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 ***apppuStack_1d8 [3];
  undefined1 uStack_1c0;
  undefined2 uStack_1be;
  undefined4 uStack_1bc;
  undefined1 auStack_180 [40];
  undefined2 uStack_158;
  undefined2 uStack_156;
  undefined2 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_124;
  undefined8 ****appppuStack_118 [4];
  undefined8 ****appppuStack_f8 [4];
  undefined4 uStack_d8;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 ****appppuStack_c8 [3];
  undefined1 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined1 auStack_70 [40];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_3c8;
  plStack_328 = param_2;
  lStack_318 = param_1;
  FUN_1400bcf70(param_2);
  ppppppuStack_340 = (undefined8 ******)0x0;
  ppppppuStack_338 = (undefined8 ******)0x0;
  uVar15 = 0;
  uStack_330 = 0;
  lStack_398 = param_1 + 0x50;
  uStack_368 = *(undefined4 *)(param_1 + 0x94);
  uStack_370 = *(undefined4 *)(param_1 + 0x90);
  uStack_378 = CONCAT44(uStack_378._4_4_,*(undefined4 *)(param_1 + 0x8c));
  uStack_380 = *(undefined4 *)(param_1 + 0x80);
  uStack_388 = *(undefined4 *)(param_1 + 0x7c);
  uStack_390 = *(undefined4 *)(param_1 + 0x84);
  uStack_3a0 = *(undefined4 *)(param_1 + 0x78);
  uStack_3a8 = *(undefined2 *)(param_1 + 0x74);
  workshop_tooltip_job_products
            (&ppppppuStack_340,*(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x70),
             *(undefined2 *)(param_1 + 0x72));
  ppppppuVar10 = ppppppuStack_340;
  ppppppuVar22 = ppppppuStack_340;
  ppppppuVar6 = ppppppuStack_338;
  if ((longlong)ppppppuStack_338 - (longlong)ppppppuStack_340 >> 3 != 0) {
    if (param_2[1] - *param_2 >> 3 != 0) {
      pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
      *pppppppuVar9 = (undefined8 ******)0x0;
      pppppppuVar9[1] = (undefined8 ******)0x0;
      pppppppuVar9[2] = (undefined8 ******)0x0;
      pppppppuVar9[3] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar9 = 0;
      pppppppuStack_358 = pppppppuVar9;
      FUN_140070e90(pppppppuVar9,&UNK_141601728,0);
      puVar13 = (undefined8 *)param_2[1];
      if (puVar13 == (undefined8 *)param_2[2]) {
        FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_358);
      }
      else {
        *puVar13 = pppppppuVar9;
        param_2[1] = param_2[1] + 8;
      }
    }
    uStack_280 = 9;
    uStack_278 = 0xf;
    ppppppuStack_290 = (undefined8 ******)0x73656375646f7250;
    uStack_288 = 0x3a;
    plStack_310 = (longlong *)0x0;
    lStack_308 = 0;
    uStack_300 = 0;
    pppppppuStack_358 = (undefined8 *******)FUN_14154de30(0x20);
    *pppppppuStack_358 = (undefined8 ******)0x0;
    pppppppuStack_358[1] = (undefined8 ******)0x0;
    pppppppuStack_358[2] = (undefined8 ******)0x0;
    pppppppuStack_358[3] = (undefined8 ******)0xf;
    *(undefined1 *)pppppppuStack_358 = 0;
    if (pppppppuStack_358 != &ppppppuStack_290) {
      FUN_140070e90(pppppppuStack_358,&ppppppuStack_290,9);
    }
    FUN_1400bc2f0(&plStack_310,0);
    bVar5 = false;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0xf;
    pppppppuStack_2f0 = (undefined8 *******)0x0;
    pppppppuVar9 = (undefined8 *******)(lStack_308 - (longlong)plStack_310 >> 3);
    lVar21 = lStack_308;
    param_2 = plStack_328;
    uVar23 = uVar15;
    plVar27 = plStack_310;
    pppppppuStack_350 = pppppppuVar9;
    if (pppppppuVar9 != (undefined8 *******)0x0) {
      do {
        plVar19 = plStack_328;
        iVar26 = 0;
        lVar21 = 0;
        puVar13 = (undefined8 *)*plVar27;
        if (puVar13[2] != 0) {
          do {
            iVar25 = iVar26;
            if (bVar5) {
              if (0xf < (ulonglong)puVar13[3]) {
                puVar13 = (undefined8 *)*puVar13;
              }
              if (*(char *)(lVar21 + (longlong)puVar13) != ' ') {
                bVar5 = false;
                goto LAB_1408d9f34;
              }
            }
            else {
LAB_1408d9f34:
              FUN_1400bb140(&pppppppuStack_2f0);
              uVar15 = uStack_2e0;
              if (0x1d < uStack_2e0) {
                iVar14 = 0;
                lVar28 = 0;
                puVar13 = (undefined8 *)*plVar27;
                do {
                  iVar25 = iVar25 + -1;
                  lVar21 = lVar21 + -1;
                  iVar14 = iVar14 + 1;
                  lVar28 = lVar28 + 1;
                  puVar11 = puVar13;
                  if (0xf < (ulonglong)puVar13[3]) {
                    puVar11 = (undefined8 *)*puVar13;
                  }
                } while ((*(char *)(lVar21 + (longlong)puVar11) != ' ') && (0 < lVar21));
                if ((longlong)iVar14 == uStack_2e0) {
                  FUN_1404fc970(puVar13,(longlong)(iVar26 + -1)," ",1);
                }
                else {
                  uVar15 = uStack_2e0 - lVar28;
                  if (uStack_2e0 < uVar15) {
                    FUN_1400e2870(&pppppppuStack_2f0,uVar15 - uStack_2e0);
                  }
                  else {
                    pppppppuVar9 = &pppppppuStack_2f0;
                    if (0xf < uStack_2d8) {
                      pppppppuVar9 = pppppppuStack_2f0;
                    }
                    uStack_2e0 = uVar15;
                    *(undefined1 *)((longlong)pppppppuVar9 + uVar15) = 0;
                  }
                  pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
                  *pppppppuVar9 = (undefined8 ******)0x0;
                  pppppppuVar9[1] = (undefined8 ******)0x0;
                  pppppppuVar9[2] = (undefined8 ******)0x0;
                  pppppppuVar9[3] = (undefined8 ******)0xf;
                  *(undefined1 *)pppppppuVar9 = 0;
                  pppppppuStack_358 = pppppppuVar9;
                  if ((undefined8 ********)pppppppuVar9 != &pppppppuStack_2f0) {
                    pppppppuVar12 = &pppppppuStack_2f0;
                    if (0xf < uStack_2d8) {
                      pppppppuVar12 = pppppppuStack_2f0;
                    }
                    FUN_140070e90(pppppppuVar9,pppppppuVar12);
                  }
                  if ((undefined8 *)plVar19[1] == (undefined8 *)plVar19[2]) {
                    FUN_1400bc2f0(plVar19);
                  }
                  else {
                    *(undefined8 *)plVar19[1] = pppppppuVar9;
                    plVar19[1] = plVar19[1] + 8;
                  }
                  bVar5 = true;
                }
                uStack_2e0 = 0;
                pppppppuVar9 = &pppppppuStack_2f0;
                if (0xf < uStack_2d8) {
                  pppppppuVar9 = pppppppuStack_2f0;
                }
                *(undefined1 *)pppppppuVar9 = 0;
                uVar15 = uStack_2e0;
              }
            }
            iVar26 = iVar25 + 1;
            lVar21 = lVar21 + 1;
            puVar13 = (undefined8 *)*plVar27;
            pppppppuVar9 = pppppppuStack_350;
          } while ((ulonglong)(longlong)iVar26 < (ulonglong)puVar13[2]);
        }
        lVar21 = lStack_308;
        uVar29 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar29;
        plVar27 = plVar27 + 1;
      } while ((undefined8 *******)(longlong)(int)uVar29 < pppppppuVar9);
      param_2 = plStack_328;
      if (uVar15 != 0) {
        pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
        *pppppppuVar9 = (undefined8 ******)0x0;
        pppppppuVar9[1] = (undefined8 ******)0x0;
        pppppppuVar9[2] = (undefined8 ******)0x0;
        pppppppuVar9[3] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar9 = 0;
        pppppppuStack_358 = pppppppuVar9;
        if ((undefined8 ********)pppppppuVar9 != &pppppppuStack_2f0) {
          pppppppuVar12 = &pppppppuStack_2f0;
          if (0xf < uStack_2d8) {
            pppppppuVar12 = pppppppuStack_2f0;
          }
          FUN_140070e90(pppppppuVar9,pppppppuVar12,uVar15);
        }
        param_2 = plStack_328;
        puVar13 = (undefined8 *)plStack_328[1];
        if (puVar13 == (undefined8 *)plStack_328[2]) {
          FUN_1400bc2f0(plStack_328,puVar13,&pppppppuStack_358);
        }
        else {
          *puVar13 = pppppppuVar9;
          plStack_328[1] = plStack_328[1] + 8;
        }
      }
    }
    plVar27 = plStack_310;
    FUN_140070e10(&pppppppuStack_2f0);
    lVar28 = lStack_308;
    if (pppppppuStack_350 != (undefined8 *******)0x0) {
      do {
        lVar28 = *plVar27;
        if (lVar28 != 0) {
          FUN_140070e10(lVar28);
          workshop_supplier_0x154de20(lVar28,0x20);
        }
        workshop_supplier_0x154f5ba(plVar27,plVar27 + 1,lVar21 - (longlong)(plVar27 + 1));
        lVar21 = lVar21 + -8;
        lVar28 = lVar21;
      } while (lVar21 - (longlong)plVar27 >> 3 != 0);
    }
    lStack_308 = lVar28;
    FUN_140068130(&plStack_310);
    ppppppuVar10 = ppppppuStack_340;
    ppppppuVar22 = ppppppuStack_340;
    ppppppuVar6 = ppppppuStack_338;
    param_1 = lStack_318;
    if (0xf < uStack_278) {
      uVar15 = uStack_278 + 1;
      ppppppuVar10 = ppppppuStack_290;
      if (0xfff < uVar15) {
        uVar15 = uStack_278 + 0x28;
        ppppppuVar10 = (undefined8 ******)ppppppuStack_290[-1];
        if (0x1f < (ulonglong)((longlong)ppppppuStack_290 + (-8 - (longlong)ppppppuVar10))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      workshop_supplier_0x154de20(ppppppuVar10,uVar15);
      ppppppuVar10 = ppppppuStack_340;
      ppppppuVar22 = ppppppuStack_340;
      ppppppuVar6 = ppppppuStack_338;
      param_1 = lStack_318;
    }
  }
  for (; ppppppuVar8 = ppppppuStack_338, ppppppuStack_340 = ppppppuVar22,
      ppppppuVar10 != ppppppuStack_338; ppppppuVar10 = ppppppuVar10 + 1) {
    ppppuVar1 = *ppppppuVar10;
    ppppppuStack_338 = ppppppuVar6;
    workshop_supplier_0x1fddc0(&uStack_268);
    uStack_268 = *(undefined2 *)ppppuVar1;
    uStack_266 = *(undefined2 *)((longlong)ppppuVar1 + 2);
    uStack_264 = *(undefined2 *)((longlong)ppppuVar1 + 4);
    uStack_260 = *(undefined4 *)(ppppuVar1 + 1);
    uStack_25c = *(undefined4 *)((longlong)ppppuVar1 + 0xc);
    uStack_24c = *(undefined4 *)(ppppuVar1 + 3);
    uStack_244 = *(undefined4 *)((longlong)ppppuVar1 + 0x1c);
    uStack_23c = *(undefined4 *)(ppppuVar1 + 4);
    uStack_234 = *(undefined4 *)((longlong)ppppuVar1 + 0x24);
    ppppuVar16 = ppppuVar1 + 6;
    if (apppuStack_228 != ppppuVar16) {
      if ((undefined8 ***)0xf < ppppuVar1[9]) {
        ppppuVar16 = (undefined8 ****)*ppppuVar16;
      }
      FUN_140070e90(apppuStack_228,ppppuVar16,ppppuVar1[8]);
    }
    uStack_1e3 = ppppuVar1[8] != (undefined8 ***)0x0;
    ppppuVar16 = ppppuVar1 + 10;
    if (apppuStack_208 != ppppuVar16) {
      if ((undefined8 ***)0xf < ppppuVar1[0xd]) {
        ppppuVar16 = (undefined8 ****)*ppppuVar16;
      }
      FUN_140070e90(apppuStack_208,ppppuVar16,ppppuVar1[0xc]);
    }
    uStack_1e2 = ppppuVar1[0xc] != (undefined8 ***)0x0;
    uStack_1e8 = *(undefined4 *)(ppppuVar1 + 5);
    uStack_1e0 = *(undefined4 *)(ppppuVar1 + 0xe);
    ppppuVar16 = ppppuVar1 + 0xf;
    if (apppuStack_1d8 != ppppuVar16) {
      FUN_1400bbf00(apppuStack_1d8,*ppppuVar16,
                    (longlong)ppppuVar1[0x10] - (longlong)*ppppuVar16 >> 2);
    }
    uStack_1c0 = (longlong)ppppuVar1[0x10] - (longlong)*ppppuVar16 >> 2 != 0;
    uStack_1dc = *(undefined4 *)(ppppuVar1 + 0x12);
    uStack_1be = *(undefined2 *)((longlong)ppppuVar1 + 0x94);
    uStack_1bc = *(undefined4 *)(ppppuVar1 + 0x13);
    lStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0xf;
    plStack_310 = (longlong *)0x0;
    workshop_job_item_requirement(&uStack_268,&plStack_310,*(undefined2 *)(ppppuVar1 + 2));
    FUN_140544330(&plStack_310);
    workshop_tooltip_paragraph_splitter(param_2,&plStack_310,0x1d);
    FUN_140070e10(&plStack_310);
    FUN_140070d10(auStack_180);
    FUN_140070d10(apppuStack_1d8);
    FUN_140070e10(apppuStack_208);
    FUN_140070e10(apppuStack_228);
    ppppppuVar22 = ppppppuStack_340;
    ppppppuVar6 = ppppppuStack_338;
    ppppppuStack_338 = ppppppuVar8;
  }
  iVar26 = (int)((longlong)ppppppuVar6 - (longlong)ppppppuVar22 >> 3) + -1;
  lVar21 = (longlong)iVar26;
  ppppppuStack_338 = ppppppuVar6;
  if (-1 < iVar26) {
    do {
      ppppuVar16 = ppppppuVar22[lVar21];
      if (ppppuVar16 != (undefined8 ****)0x0) {
        FUN_140070d10(ppppuVar16 + 0xf);
        FUN_140070e10(ppppuVar16 + 10);
        FUN_140070e10(ppppuVar16 + 6);
        workshop_supplier_0x154de20(ppppuVar16,0xb0);
        ppppppuVar22 = ppppppuStack_340;
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  if (ppppppuVar22 != ppppppuStack_338) {
    ppppppuStack_338 = ppppppuVar22;
  }
  FUN_140068130(&ppppppuStack_340);
  ppppppuStack_340 = (undefined8 ******)0x0;
  ppppppuStack_338 = (undefined8 ******)0x0;
  uStack_330 = 0;
  lStack_398 = param_1 + 0x50;
  uStack_360 = *(undefined4 *)(param_1 + 0x94);
  uStack_368 = *(undefined4 *)(param_1 + 0x90);
  uStack_370 = *(undefined4 *)(param_1 + 0x8c);
  uStack_378 = *(undefined8 *)(param_1 + 0x40);
  uStack_380 = *(undefined4 *)(param_1 + 0x80);
  uStack_388 = *(undefined4 *)(param_1 + 0x7c);
  uStack_390 = *(undefined4 *)(param_1 + 0x84);
  uStack_3a0 = *(undefined4 *)(param_1 + 0x78);
  uStack_3a8 = *(undefined2 *)(param_1 + 0x74);
  workshop_tooltip_job_reagents
            (&ppppppuStack_340,*(undefined2 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x70),
             *(undefined2 *)(param_1 + 0x72));
  pppppppuStack_358 = (undefined8 *******)ppppppuStack_338;
  ppppppuStack_320 = ppppppuStack_340;
  if ((longlong)ppppppuStack_338 - (longlong)ppppppuStack_340 >> 3 != 0) {
    if (param_2[1] - *param_2 >> 3 != 0) {
      ppppppuVar10 = (undefined8 ******)FUN_14154de30(0x20);
      *ppppppuVar10 = (undefined8 *****)0x0;
      ppppppuVar10[1] = (undefined8 *****)0x0;
      ppppppuVar10[2] = (undefined8 *****)0x0;
      ppppppuVar10[3] = (undefined8 *****)0xf;
      *(undefined1 *)ppppppuVar10 = 0;
      pppppppuStack_358 = (undefined8 *******)ppppppuVar10;
      FUN_140070e90(ppppppuVar10,&UNK_141601728,0);
      puVar13 = (undefined8 *)param_2[1];
      if (puVar13 == (undefined8 *)param_2[2]) {
        FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_358);
      }
      else {
        *puVar13 = ppppppuVar10;
        param_2[1] = param_2[1] + 8;
      }
    }
    uStack_300 = 9;
    uStack_2f8 = 0xf;
    plStack_310 = (longlong *)0x7365726975716552;
    lStack_308 = 0x3a;
    workshop_tooltip_paragraph_splitter(param_2,&plStack_310,0x1d);
    FUN_140070e10(&plStack_310);
  }
  pppppppuVar9 = (undefined8 *******)ppppppuStack_338;
  pppppppuStack_358 = (undefined8 *******)ppppppuStack_338;
  ppppppuStack_320 = ppppppuStack_340;
  if (ppppppuStack_340 != ppppppuStack_338) {
    do {
      ppppppuVar10 = ppppppuStack_320;
      pppppuVar2 = *ppppppuStack_320;
      workshop_supplier_0x1fddc0(&uStack_158);
      uStack_158 = *(undefined2 *)pppppuVar2;
      uStack_156 = *(undefined2 *)((longlong)pppppuVar2 + 2);
      uStack_154 = *(undefined2 *)((longlong)pppppuVar2 + 4);
      uStack_150 = *(undefined4 *)(pppppuVar2 + 1);
      uStack_14c = *(undefined4 *)((longlong)pppppuVar2 + 0xc);
      uStack_13c = *(undefined4 *)(pppppuVar2 + 3);
      uStack_134 = *(undefined4 *)((longlong)pppppuVar2 + 0x1c);
      uStack_12c = *(undefined4 *)(pppppuVar2 + 4);
      uStack_124 = *(undefined4 *)((longlong)pppppuVar2 + 0x24);
      pppppuVar17 = pppppuVar2 + 6;
      if (appppuStack_118 != pppppuVar17) {
        if ((undefined8 ****)0xf < pppppuVar2[9]) {
          pppppuVar17 = (undefined8 *****)*pppppuVar17;
        }
        FUN_140070e90(appppuStack_118,pppppuVar17,pppppuVar2[8]);
      }
      uStack_d3 = pppppuVar2[8] != (undefined8 ****)0x0;
      pppppuVar17 = pppppuVar2 + 10;
      if (appppuStack_f8 != pppppuVar17) {
        if ((undefined8 ****)0xf < pppppuVar2[0xd]) {
          pppppuVar17 = (undefined8 *****)*pppppuVar17;
        }
        FUN_140070e90(appppuStack_f8,pppppuVar17,pppppuVar2[0xc]);
      }
      uStack_d2 = pppppuVar2[0xc] != (undefined8 ****)0x0;
      uStack_d8 = *(undefined4 *)(pppppuVar2 + 5);
      uStack_d0 = *(undefined4 *)(pppppuVar2 + 0xe);
      pppppuVar17 = pppppuVar2 + 0xf;
      if (appppuStack_c8 != pppppuVar17) {
        FUN_1400bbf00(appppuStack_c8,*pppppuVar17,
                      (longlong)pppppuVar2[0x10] - (longlong)*pppppuVar17 >> 2);
      }
      uStack_b0 = (longlong)pppppuVar2[0x10] - (longlong)*pppppuVar17 >> 2 != 0;
      uStack_cc = *(undefined4 *)(pppppuVar2 + 0x12);
      uStack_ae = *(undefined2 *)((longlong)pppppuVar2 + 0x94);
      uStack_ac = *(undefined4 *)(pppppuVar2 + 0x13);
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0xf;
      pppppppuStack_2b0 = (undefined8 *******)0x0;
      workshop_job_item_requirement(&uStack_158,&pppppppuStack_2b0,*(undefined2 *)(pppppuVar2 + 2));
      FUN_140544330(&pppppppuStack_2b0);
      plStack_310 = (longlong *)0x0;
      lStack_308 = 0;
      uStack_300 = 0;
      pppppppuStack_350 = (undefined8 *******)FUN_14154de30(0x20);
      *pppppppuStack_350 = (undefined8 ******)0x0;
      pppppppuStack_350[1] = (undefined8 ******)0x0;
      pppppppuStack_350[2] = (undefined8 ******)0x0;
      pppppppuStack_350[3] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuStack_350 = 0;
      if ((undefined8 ********)pppppppuStack_350 != &pppppppuStack_2b0) {
        pppppppuVar12 = &pppppppuStack_2b0;
        if (0xf < uStack_298) {
          pppppppuVar12 = pppppppuStack_2b0;
        }
        FUN_140070e90(pppppppuStack_350,pppppppuVar12,uStack_2a0);
      }
      FUN_1400bc2f0(&plStack_310,0);
      bVar5 = false;
      uStack_2c8 = 0;
      uVar23 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0xf;
      pppppppuStack_2d0 = (undefined8 *******)0x0;
      pppppppuStack_350 = (undefined8 *******)((ulonglong)pppppppuStack_350 & 0xffffffff00000000);
      pppppppuStack_348 = (undefined8 *******)(lStack_308 - (longlong)plStack_310 >> 3);
      plVar27 = plStack_310;
      uVar15 = uVar23;
      if (pppppppuStack_348 != (undefined8 *******)0x0) {
        do {
          iVar26 = 0;
          lVar21 = 0;
          puVar13 = (undefined8 *)*plVar27;
          if (puVar13[2] != 0) {
            do {
              iVar25 = iVar26;
              if (bVar5) {
                if (0xf < (ulonglong)puVar13[3]) {
                  puVar13 = (undefined8 *)*puVar13;
                }
                if (*(char *)((longlong)puVar13 + lVar21) != ' ') {
                  bVar5 = false;
                  goto LAB_1408da801;
                }
              }
              else {
LAB_1408da801:
                FUN_1400bb140(&pppppppuStack_2d0);
                uVar15 = uStack_2c0;
                if (0x1d < uStack_2c0) {
                  iVar14 = 0;
                  lVar28 = 0;
                  puVar13 = (undefined8 *)*plVar27;
                  do {
                    iVar25 = iVar25 + -1;
                    lVar21 = lVar21 + -1;
                    iVar14 = iVar14 + 1;
                    lVar28 = lVar28 + 1;
                    puVar11 = puVar13;
                    if (0xf < (ulonglong)puVar13[3]) {
                      puVar11 = (undefined8 *)*puVar13;
                    }
                  } while ((*(char *)((longlong)puVar11 + lVar21) != ' ') && (0 < lVar21));
                  if ((longlong)iVar14 == uStack_2c0) {
                    FUN_1404fc970(puVar13,(longlong)(iVar26 + -1)," ",1);
                  }
                  else {
                    uVar15 = uStack_2c0 - lVar28;
                    if (uStack_2c0 < uVar15) {
                      FUN_1400e2870(&pppppppuStack_2d0,uVar15 - uStack_2c0);
                    }
                    else {
                      pppppppuVar9 = &pppppppuStack_2d0;
                      if (0xf < uStack_2b8) {
                        pppppppuVar9 = pppppppuStack_2d0;
                      }
                      uStack_2c0 = uVar15;
                      *(undefined1 *)((longlong)pppppppuVar9 + uVar15) = 0;
                    }
                    pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
                    *pppppppuVar9 = (undefined8 ******)0x0;
                    pppppppuVar9[1] = (undefined8 ******)0x0;
                    pppppppuVar9[2] = (undefined8 ******)0x0;
                    pppppppuVar9[3] = (undefined8 ******)0xf;
                    *(undefined1 *)pppppppuVar9 = 0;
                    pppppppuStack_350 = pppppppuVar9;
                    if ((undefined8 ********)pppppppuVar9 != &pppppppuStack_2d0) {
                      pppppppuVar12 = &pppppppuStack_2d0;
                      if (0xf < uStack_2b8) {
                        pppppppuVar12 = pppppppuStack_2d0;
                      }
                      FUN_140070e90(pppppppuVar9,pppppppuVar12);
                    }
                    if ((undefined8 *)param_2[1] == (undefined8 *)param_2[2]) {
                      FUN_1400bc2f0(param_2);
                    }
                    else {
                      *(undefined8 *)param_2[1] = pppppppuVar9;
                      param_2[1] = param_2[1] + 8;
                    }
                    bVar5 = true;
                  }
                  uStack_2c0 = 0;
                  pppppppuVar9 = &pppppppuStack_2d0;
                  if (0xf < uStack_2b8) {
                    pppppppuVar9 = pppppppuStack_2d0;
                  }
                  *(undefined1 *)pppppppuVar9 = 0;
                  uVar15 = uStack_2c0;
                }
              }
              iVar26 = iVar25 + 1;
              lVar21 = lVar21 + 1;
              puVar13 = (undefined8 *)*plVar27;
            } while ((ulonglong)(longlong)iVar26 < (ulonglong)puVar13[2]);
          }
          ppppppuVar10 = ppppppuStack_320;
          pppppppuVar9 = pppppppuStack_358;
          uVar29 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar29;
          plVar27 = plVar27 + 1;
        } while ((undefined8 *******)(longlong)(int)uVar29 < pppppppuStack_348);
        if (uVar15 != 0) {
          pppppppuVar12 = (undefined8 *******)FUN_14154de30(0x20);
          *pppppppuVar12 = (undefined8 ******)0x0;
          pppppppuVar12[1] = (undefined8 ******)0x0;
          pppppppuVar12[2] = (undefined8 ******)0x0;
          pppppppuVar12[3] = (undefined8 ******)0xf;
          *(undefined1 *)pppppppuVar12 = 0;
          pppppppuStack_348 = pppppppuVar12;
          if ((undefined8 ********)pppppppuVar12 != &pppppppuStack_2d0) {
            pppppppuVar18 = &pppppppuStack_2d0;
            if (0xf < uStack_2b8) {
              pppppppuVar18 = pppppppuStack_2d0;
            }
            FUN_140070e90(pppppppuVar12,pppppppuVar18,uVar15);
          }
          puVar13 = (undefined8 *)param_2[1];
          if (puVar13 == (undefined8 *)param_2[2]) {
            FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_348);
          }
          else {
            *puVar13 = pppppppuVar12;
            param_2[1] = param_2[1] + 8;
          }
        }
      }
      FUN_140070e10(&pppppppuStack_2d0);
      plVar27 = plStack_310;
      lVar21 = lStack_308;
      if (lStack_308 - (longlong)plStack_310 >> 3 != 0) {
        plVar19 = plStack_310 + 1;
        do {
          lVar28 = *plVar27;
          if (lVar28 != 0) {
            FUN_140070e10(lVar28);
            workshop_supplier_0x154de20(lVar28,0x20);
          }
          workshop_supplier_0x154f5ba(plVar27,plVar19,lVar21 - (longlong)plVar19);
          lVar21 = lVar21 + -8;
          param_2 = plStack_328;
        } while (lVar21 - (longlong)plVar27 >> 3 != 0);
      }
      lStack_308 = lVar21;
      FUN_140068130(&plStack_310);
      FUN_140070e10(&pppppppuStack_2b0);
      FUN_140070d10(auStack_70);
      FUN_140070d10(appppuStack_c8);
      FUN_140070e10(appppuStack_f8);
      FUN_140070e10(appppuStack_118);
      ppppppuStack_320 = ppppppuVar10 + 1;
      param_1 = lStack_318;
    } while ((undefined8 *******)ppppppuStack_320 != pppppppuVar9);
  }
  iVar26 = (int)((longlong)ppppppuStack_338 - (longlong)ppppppuStack_340 >> 3) + -1;
  lVar21 = (longlong)iVar26;
  ppppppuVar10 = ppppppuStack_340;
  if (-1 < iVar26) {
    do {
      pppppuVar17 = ppppppuVar10[lVar21];
      if (pppppuVar17 != (undefined8 *****)0x0) {
        FUN_140070d10(pppppuVar17 + 0xf);
        FUN_140070e10(pppppuVar17 + 10);
        FUN_140070e10(pppppuVar17 + 6);
        workshop_supplier_0x154de20(pppppuVar17,0xb0);
        ppppppuVar10 = ppppppuStack_340;
      }
      lVar21 = lVar21 + -1;
    } while (-1 < lVar21);
  }
  if (ppppppuVar10 != ppppppuStack_338) {
    ppppppuStack_338 = ppppppuVar10;
  }
  FUN_140068130(&ppppppuStack_340);
  lVar21 = _DAT_1425135f0;
  puVar13 = _DAT_1425135e8;
  if (*(int *)(param_1 + 0x48) == 0xd1) {
    lVar28 = param_1 + 0x50;
    if (0xf < *(ulonglong *)(param_1 + 0x68)) {
      lVar28 = *(longlong *)(param_1 + 0x50);
    }
    lVar3 = *(longlong *)(param_1 + 0x60);
    iVar26 = 0;
    puVar11 = _DAT_1425135e8;
    if (_DAT_1425135f0 - (longlong)_DAT_1425135e8 >> 3 != 0) {
      do {
        plVar27 = (longlong *)*puVar11;
        plVar19 = plVar27;
        if (0xf < (ulonglong)plVar27[3]) {
          plVar19 = (longlong *)*plVar27;
        }
        if ((lVar3 == plVar27[2]) &&
           (iVar25 = workshop_supplier_0x154f5b4(lVar28,plVar19,lVar3), iVar25 == 0)) {
          lVar21 = puVar13[iVar26];
          if (lVar21 != 0) {
            plVar19 = *(longlong **)(lVar21 + 0x168);
            for (plVar27 = *(longlong **)(lVar21 + 0x160); plVar27 < plVar19; plVar27 = plVar27 + 1)
            {
              if (*(longlong *)(*plVar27 + 0x10) != 0) {
                if (param_2[1] - *param_2 >> 3 != 0) {
                  pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
                  *pppppppuVar9 = (undefined8 ******)0x0;
                  pppppppuVar9[1] = (undefined8 ******)0x0;
                  pppppppuVar9[2] = (undefined8 ******)0x0;
                  pppppppuVar9[3] = (undefined8 ******)0xf;
                  *(undefined1 *)pppppppuVar9 = 0;
                  pppppppuStack_348 = pppppppuVar9;
                  FUN_140070e90(pppppppuVar9,&UNK_141601728,0);
                  puVar13 = (undefined8 *)param_2[1];
                  if (puVar13 == (undefined8 *)param_2[2]) {
                    FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_348);
                  }
                  else {
                    *puVar13 = pppppppuVar9;
                    param_2[1] = param_2[1] + 8;
                  }
                }
                workshop_tooltip_paragraph_splitter(param_2,*plVar27);
              }
              plVar7 = _DAT_142508ef8;
              lVar21 = *plVar27;
              plVar24 = _DAT_142508ef0;
              if (*(short *)(lVar21 + 0x20) == 0x56) {
                for (; plVar24 < plVar7; plVar24 = plVar24 + 1) {
                  plVar20 = (longlong *)(lVar21 + 0x28);
                  lVar28 = *plVar24;
                  puVar13 = (undefined8 *)(lVar28 + 8);
                  if (0xf < *(ulonglong *)(lVar21 + 0x40)) {
                    plVar20 = (longlong *)*plVar20;
                  }
                  if (0xf < *(ulonglong *)(lVar28 + 0x20)) {
                    puVar13 = (undefined8 *)*puVar13;
                  }
                  if ((*(longlong *)(lVar28 + 0x18) == *(longlong *)(lVar21 + 0x38)) &&
                     (iVar26 = workshop_supplier_0x154f5b4(puVar13,plVar20), iVar26 == 0)) {
                    if (param_2[1] - *param_2 >> 3 != 0) {
                      pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
                      *pppppppuVar9 = (undefined8 ******)0x0;
                      pppppppuVar9[1] = (undefined8 ******)0x0;
                      pppppppuVar9[2] = (undefined8 ******)0x0;
                      pppppppuVar9[3] = (undefined8 ******)0xf;
                      *(undefined1 *)pppppppuVar9 = 0;
                      pppppppuStack_348 = pppppppuVar9;
                      FUN_140070e90(pppppppuVar9,&UNK_141601728,0);
                      puVar13 = (undefined8 *)param_2[1];
                      if (puVar13 == (undefined8 *)param_2[2]) {
                        FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_348);
                      }
                      else {
                        *puVar13 = pppppppuVar9;
                        param_2[1] = param_2[1] + 8;
                      }
                    }
                    workshop_tooltip_paragraph_splitter(param_2,*plVar24 + 0x188);
                    break;
                  }
                }
              }
              plVar7 = _DAT_142509180;
              lVar21 = *plVar27;
              plVar24 = _DAT_142509178;
              if (*(short *)(lVar21 + 0x20) == 0xd) {
                for (; plVar24 < plVar7; plVar24 = plVar24 + 1) {
                  plVar20 = (longlong *)(lVar21 + 0x28);
                  lVar28 = *plVar24;
                  puVar13 = (undefined8 *)(lVar28 + 8);
                  if (0xf < *(ulonglong *)(lVar21 + 0x40)) {
                    plVar20 = (longlong *)*plVar20;
                  }
                  if (0xf < *(ulonglong *)(lVar28 + 0x20)) {
                    puVar13 = (undefined8 *)*puVar13;
                  }
                  if ((*(longlong *)(lVar28 + 0x18) == *(longlong *)(lVar21 + 0x38)) &&
                     (iVar26 = workshop_supplier_0x154f5b4(puVar13,plVar20), iVar26 == 0)) {
                    if (param_2[1] - *param_2 >> 3 != 0) {
                      pppppppuVar9 = (undefined8 *******)FUN_14154de30(0x20);
                      *pppppppuVar9 = (undefined8 ******)0x0;
                      pppppppuVar9[1] = (undefined8 ******)0x0;
                      pppppppuVar9[2] = (undefined8 ******)0x0;
                      pppppppuVar9[3] = (undefined8 ******)0xf;
                      *(undefined1 *)pppppppuVar9 = 0;
                      pppppppuStack_348 = pppppppuVar9;
                      FUN_140070e90(pppppppuVar9,&UNK_141601728,0);
                      puVar13 = (undefined8 *)param_2[1];
                      if (puVar13 == (undefined8 *)param_2[2]) {
                        FUN_1400bc2f0(param_2,puVar13,&pppppppuStack_348);
                      }
                      else {
                        *puVar13 = pppppppuVar9;
                        param_2[1] = param_2[1] + 8;
                      }
                    }
                    workshop_tooltip_paragraph_splitter(param_2,*plVar24 + 0x278);
                    break;
                  }
                }
              }
            }
          }
          break;
        }
        iVar26 = iVar26 + 1;
        puVar11 = puVar11 + 1;
      } while ((ulonglong)(longlong)iVar26 < (ulonglong)(lVar21 - (longlong)puVar13 >> 3));
    }
  }
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_3c8);
  return;
}


/* classic PE:6aea11a5:0272d000; task-availability-and-requirement; RVA 0x8db020..0x8dbfff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_task_availability_and_requirement(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 ***pppuVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 ***pppuVar23;
  undefined *puVar24;
  undefined8 **ppuVar25;
  char *pcVar26;
  undefined8 *puVar27;
  undefined8 ****ppppuVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined4 *puVar33;
  undefined8 ***pppuVar34;
  undefined8 **ppuVar35;
  undefined8 **ppuVar36;
  longlong lVar37;
  undefined8 **ppuVar38;
  undefined1 auStack_3c8 [32];
  undefined8 *puStack_3a8;
  longlong *plStack_3a0;
  undefined4 uStack_398;
  bool bStack_388;
  int iStack_384;
  longlong *plStack_380;
  longlong lStack_378;
  undefined8 **ppuStack_370;
  longlong lStack_368;
  undefined8 *puStack_360;
  longlong lStack_358;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  undefined8 uStack_330;
  undefined4 auStack_328 [2];
  longlong lStack_320;
  undefined4 *puStack_318;
  undefined4 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  longlong lStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined4 *puStack_2d0;
  undefined4 *puStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined1 auStack_288 [8];
  char cStack_280;
  undefined2 auStack_278 [2];
  undefined2 uStack_274;
  undefined8 uStack_268;
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [36];
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined2 uStack_1c0;
  longlong *plStack_1a8;
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [40];
  undefined8 ***pppuStack_58;
  undefined8 ***pppuStack_50;
  undefined8 ***pppuStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_3c8;
  lStack_2c0 = 0;
  lStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_380 = param_1;
  workshop_supplier_0x1fddc0(auStack_168);
  uStack_158 = 0x1424019b0;
  FUN_140a406f0(auStack_168,&lStack_2c0);
  lVar37 = _DAT_142508c50 - _DAT_142508c48 >> 3;
  lStack_340 = 0;
  lStack_338 = 0;
  uStack_330 = 0;
  lStack_358 = 0;
  lStack_350 = 0;
  lStack_348 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  lStack_320 = 0;
  puStack_318 = (undefined4 *)0x0;
  puStack_310 = (undefined4 *)0x0;
  iVar10 = (int)lVar37;
  uVar29 = (ulonglong)iVar10;
  lStack_368 = lVar37;
  if (iVar10 != 0) {
    FUN_1400722f0(&lStack_340,uVar29);
  }
  lVar17 = lStack_350;
  uVar11 = lStack_350 - lStack_358 >> 2;
  if (uVar29 < uVar11) {
    lStack_350 = lStack_358 + uVar29 * 4;
  }
  else if (uVar11 < uVar29) {
    if ((ulonglong)(lStack_348 - lStack_358 >> 2) < uVar29) {
      FUN_1400722f0(&lStack_358,uVar29);
    }
    else {
      workshop_supplier_0x154f2b6(lStack_350,0,(uVar29 - uVar11) * 4);
      lStack_350 = lVar17 + (uVar29 - uVar11) * 4;
    }
  }
  iVar8 = (int)(lStack_338 - lStack_340 >> 2) + -1;
  lVar17 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      *(undefined4 *)(lStack_340 + lVar17 * 4) = 0;
      *(undefined4 *)(lStack_358 + lVar17 * 4) = 0;
      lVar17 = lVar17 + -1;
    } while (-1 < lVar17);
  }
  iVar8 = (int)(lStack_2b8 - lStack_2c0 >> 3) + -1;
  lVar17 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      sVar7 = (**(code **)(**(longlong **)(lStack_2c0 + lVar17 * 8) + 0x10))();
      if (((sVar7 == 0) &&
          (iVar8 = (**(code **)(**(longlong **)(lStack_2c0 + lVar17 * 8) + 0x18))(), -1 < iVar8)) &&
         (iVar8 < iVar10)) {
        uVar29 = (ulonglong)iVar8;
        piVar1 = (int *)(lStack_340 + uVar29 * 4);
        iVar8 = *piVar1;
        if (((iVar8 < 100) &&
            (*piVar1 = iVar8 + 1, uVar29 < (ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3))) &&
           (lVar21 = *(longlong *)(_DAT_142508c48 + uVar29 * 8), lVar21 != 0)) {
          iVar8 = (int)(*(longlong *)(lVar21 + 0x70) - *(longlong *)(lVar21 + 0x68) >> 1) + -1;
          lVar20 = (longlong)iVar8;
          if (-1 < iVar8) {
            do {
              piVar1 = (int *)(lStack_358 +
                              (longlong)*(short *)(*(longlong *)(lVar21 + 0x68) + lVar20 * 2) * 4);
              *piVar1 = *piVar1 + 1;
              lVar20 = lVar20 + -1;
            } while (-1 < lVar20);
          }
          iVar8 = (int)(*(longlong *)(lVar21 + 0x658) - *(longlong *)(lVar21 + 0x650) >> 3) + -1;
          lVar20 = (longlong)iVar8;
          if (-1 < iVar8) {
            do {
              iVar8 = FUN_1400bcdd0(&uStack_2a8,
                                    *(undefined8 *)(*(longlong *)(lVar21 + 0x650) + lVar20 * 8));
              if ((ulonglong)((longlong)puStack_318 - lStack_320 >> 2) <= (ulonglong)(longlong)iVar8
                 ) {
                iStack_384 = 0;
                if (puStack_318 == puStack_310) {
                  FUN_1400723e0(&lStack_320,puStack_318,&iStack_384);
                }
                else {
                  *puStack_318 = 0;
                  puStack_318 = puStack_318 + 1;
                }
              }
              piVar1 = (int *)(lStack_320 + (longlong)iVar8 * 4);
              *piVar1 = *piVar1 + 1;
              lVar20 = lVar20 + -1;
            } while (-1 < lVar20);
          }
        }
      }
      lVar17 = lVar17 + -1;
    } while (-1 < lVar17);
  }
  cVar6 = (**(code **)(*param_1 + 0x228))();
  if (cVar6 == '\0') {
    workshop_supplier_0x1fddc0(auStack_278);
    auStack_278[0] = 0;
    uStack_274 = 7;
    uStack_268 = 0x142401b48;
    uStack_1c4 = (undefined2)param_1[2];
    uStack_1c2 = *(undefined2 *)((longlong)param_1 + 0x1c);
    uStack_1c0 = (undefined2)param_1[4];
    plStack_1a8 = param_1;
    lVar17 = FUN_140a3da50(auStack_278);
    FUN_140070d10(auStack_190);
    FUN_140070d10(auStack_1e8);
    FUN_140070e10(auStack_218);
    FUN_140070e10();
    bStack_388 = lVar17 != 0;
  }
  else {
    bStack_388 = true;
  }
  pppuStack_58 = (undefined8 ****)0x0;
  pppuStack_50 = (undefined8 ****)0x0;
  pppuStack_48 = (undefined8 ****)0x0;
  iStack_384 = 0;
  if (_DAT_1425135f0 - _DAT_1425135e8 >> 3 != 0) {
    lStack_378 = 0;
    lVar17 = _DAT_1425135e8;
LAB_1408db3c0:
    pppuVar19 = pppuStack_48;
    iVar10 = iStack_384;
    lVar37 = lStack_368;
    if (_DAT_1423b6568 != 0) {
      lVar37 = *(longlong *)(lVar17 + lStack_378 * 8);
      if (*(longlong *)(lVar37 + 0x150) != 0) {
        cVar6 = FUN_1408daf70(0x1423ad5b0,iStack_384);
        iVar8 = (**(code **)(*param_1 + 0xd0))(param_1);
        sVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
        iVar9 = (**(code **)*param_1)(param_1);
        pppuVar18 = pppuStack_50;
        iVar16 = (int)(*(longlong *)(lVar37 + 0xc0) - *(longlong *)(lVar37 + 0xb8) >> 2) + -1;
        lVar17 = _DAT_1425135e8;
        if (-1 < iVar16) {
          lVar21 = (longlong)iVar16;
          do {
            if (((*(int *)(*(longlong *)(lVar37 + 0xb8) + lVar21 * 4) == iVar8) &&
                (*(int *)(*(longlong *)(lVar37 + 0xd0) + lVar21 * 4) == (int)sVar7)) &&
               (*(int *)(*(longlong *)(lVar37 + 0xe8) + lVar21 * 4) == iVar9)) {
              ppppuVar28 = (undefined8 ****)pppuStack_58;
              if (cVar6 != '\0') goto LAB_1408db490;
              break;
            }
            lVar21 = lVar21 + -1;
          } while (-1 < lVar21);
        }
      }
      goto LAB_1408db7ae;
    }
  }
LAB_1408db7e9:
  FUN_1400bcf70(&pppuStack_58);
  FUN_140068130(&pppuStack_58);
  if (((_DAT_1418bd778 == (undefined8 **)0x0) &&
      (iVar10 = (**(code **)(*param_1 + 0xd0))(param_1), iVar10 == 5)) &&
     ((sVar7 = (**(code **)(*param_1 + 0xd8))(param_1), sVar7 == 1 || (sVar7 == 4)))) {
    lVar17 = FUN_1408c8390();
    bVar5 = bStack_388;
    *(longlong **)(lVar17 + 0x40) = param_1;
    *(undefined4 *)(lVar17 + 0x48) = 0x5a;
    if (bStack_388 == false) {
      *(undefined1 *)(lVar17 + 0x89) = 1;
      FUN_140070e90(lVar17 + 0x98,"[Requires fuel]",0xf);
    }
    uVar11 = 0;
    uVar29 = uVar11;
    if (0 < (int)lVar37) {
      do {
        if (uVar29 < (ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3)) {
          lVar17 = *(longlong *)(_DAT_142508c48 + uVar11 * 8);
          if ((*(int *)(lVar17 + 0x40) < 2) ||
             ((*(byte *)(*(longlong *)(lVar17 + 0x38) + 1) & 2) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar17 = FUN_1408c8390();
            *(longlong **)(lVar17 + 0x40) = param_1;
            *(undefined4 *)(lVar17 + 0x48) = 0x59;
            *(undefined2 *)(lVar17 + 0x74) = 0;
            *(int *)(lVar17 + 0x78) = (int)uVar29;
            if (bVar5 == false) {
              *(undefined1 *)(lVar17 + 0x89) = 1;
              if (*(int *)(lStack_340 + uVar11 * 4) < 1) {
                uVar32 = 0x14;
                pcVar26 = "[Requires ore, fuel]";
              }
              else {
LAB_1408db949:
                uVar32 = 0xf;
                pcVar26 = "[Requires fuel]";
              }
            }
            else {
              if (0 < *(int *)(lStack_340 + uVar11 * 4)) goto LAB_1408db962;
              *(undefined1 *)(lVar17 + 0x89) = 1;
              if (0 < *(int *)(lStack_340 + uVar11 * 4)) goto LAB_1408db949;
              uVar32 = 0xe;
              pcVar26 = "[Requires ore]";
            }
            FUN_140070e90(lVar17 + 0x98,pcVar26,uVar32);
          }
        }
LAB_1408db962:
        uVar11 = uVar11 + 1;
        uVar29 = (ulonglong)((int)uVar29 + 1);
      } while ((longlong)uVar11 < (longlong)(int)lVar37);
    }
  }
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  puStack_2f8 = (undefined8 *)0x0;
  uStack_2d8 = 0;
  puStack_2d0 = (undefined4 *)0x0;
  puStack_2c8 = (undefined4 *)0x0;
  lStack_2f0 = 0;
  puStack_2e8 = (undefined8 *)0x0;
  puStack_2e0 = (undefined8 *)0x0;
  iStack_384 = 0;
  puVar14 = (undefined8 *)0x0;
  if (_DAT_1425135f0 - _DAT_1425135e8 >> 3 == 0) {
LAB_1408dbc59:
    iVar10 = 0;
    uVar29 = (longlong)puVar14 - (longlong)puStack_308 >> 3;
    if (uVar29 != 0) {
      puStack_360 = (undefined8 *)(lStack_2f0 - (longlong)puStack_308);
      puVar14 = puStack_308;
      do {
        lVar37 = *(longlong *)((longlong)puVar14 + (longlong)puStack_360);
        lVar17 = FUN_1408c8390();
        *(longlong **)(lVar17 + 0x40) = plStack_380;
        *(undefined4 *)(lVar17 + 0x48) = 0xd1;
        plVar22 = (longlong *)*puVar14;
        if ((longlong *)(lVar17 + 0x50) != plVar22) {
          plVar3 = plVar22 + 2;
          if (0xf < (ulonglong)plVar22[3]) {
            plVar22 = (longlong *)*plVar22;
          }
          FUN_140070e90(lVar17 + 0x50,plVar22,*plVar3);
        }
        if (((*(int *)(lVar37 + 0x48) < 1) || ((**(byte **)(lVar37 + 0x40) & 1) == 0)) ||
           (bStack_388 != false)) {
          iVar8 = (int)(*(longlong *)(lVar37 + 0x58) - *(longlong *)(lVar37 + 0x50) >> 3) + -1;
          if (-1 < iVar8) {
            lVar21 = (longlong)iVar8;
            do {
              plVar22 = *(longlong **)(*(longlong *)(lVar37 + 0x50) + lVar21 * 8);
              if ((*(byte *)((longlong)plVar22 + 0x2c) & 2) == 0) {
                uStack_398 = *(undefined4 *)(lVar37 + 0x118);
                plStack_3a0 = &lStack_320;
                puStack_3a8 = &uStack_2a8;
                cVar6 = (**(code **)(*plVar22 + 8))(plVar22,plStack_380,&lStack_340,&lStack_358);
                if (cVar6 == '\0') {
                  pppuStack_50 = (undefined8 ****)0x0;
                  pppuStack_48 = (undefined8 ****)0x0;
                  uStack_40 = 0xf;
                  pppuStack_58 = (undefined8 ****)0x0;
                  plVar22 = *(longlong **)(*(longlong *)(lVar37 + 0x50) + (longlong)iVar8 * 8);
                  (**(code **)(*plVar22 + 0x38))
                            (plVar22,&pppuStack_58,*(undefined4 *)(lVar37 + 0x118));
                  FUN_140070fd0(lVar17 + 0x98,"[Requires ",10);
                  ppppuVar28 = &pppuStack_58;
                  if (0xf < uStack_40) {
                    ppppuVar28 = (undefined8 ****)pppuStack_58;
                  }
                  FUN_140070fd0(lVar17 + 0x98,ppppuVar28,pppuStack_48);
                  FUN_140070fd0(lVar17 + 0x98,"]",1);
                  if (0xf < uStack_40) {
                    if (0xfff < uStack_40 + 1) {
                      if (0x1f < (ulonglong)
                                 ((longlong)pppuStack_58 + (-8 - (longlong)pppuStack_58[-1]))) {
                        _invalid_parameter_noinfo_noreturn(pppuStack_58[-1],uStack_40 + 0x28);
                        goto LAB_1408dbf3c;
                      }
                    }
                    workshop_supplier_0x154de20();
                  }
                  break;
                }
              }
              iVar8 = iVar8 + -1;
              lVar21 = lVar21 + -1;
            } while (-1 < lVar21);
          }
        }
        else {
          FUN_140070e90(lVar17 + 0x98,"[Requires fuel]",0xf);
        }
        *(undefined1 *)(lVar17 + 0x89) = 1;
        iVar10 = iVar10 + 1;
        puVar14 = puVar14 + 1;
      } while ((ulonglong)(longlong)iVar10 < uVar29);
    }
LAB_1408dbf3c:
    FUN_140068130(&lStack_2f0);
    FUN_140070d10(&uStack_2d8);
    FUN_1400bcf70(&puStack_308);
    FUN_140068130(&puStack_308);
    FUN_140070d10(&lStack_320);
    FUN_1400bcf70(&uStack_2a8);
    FUN_140068130(&uStack_2a8);
    FUN_140070d10(&lStack_358);
    FUN_140070d10(&lStack_340);
    FUN_140070d10(auStack_80);
    FUN_140070d10(auStack_d8);
    FUN_140070e10(auStack_108);
    FUN_140070e10(auStack_128);
    FUN_140068130(&lStack_2c0);
    FUN_14154de00(uStack_38 ^ (ulonglong)auStack_3c8);
    return;
  }
  lStack_378 = 0;
  puVar33 = (undefined4 *)0x0;
  puVar30 = (undefined8 *)0x0;
LAB_1408db9d0:
  iVar10 = iStack_384;
  if (_DAT_1423b6568 != 0) {
    puVar31 = *(undefined8 **)(lStack_378 + _DAT_1425135e8);
    puVar15 = puVar31 + 0x28;
    puVar24 = &DAT_1418bd768;
    if (0xf < _DAT_1418bd780) {
      puVar24 = _DAT_1418bd768;
    }
    if (0xf < (ulonglong)puVar31[0x2b]) {
      puVar15 = (undefined8 *)*puVar15;
    }
    puStack_360 = puVar31;
    if (((undefined8 **)puVar31[0x2a] == _DAT_1418bd778) &&
       (iVar8 = workshop_supplier_0x154f5b4(puVar15,puVar24), lVar37 = _DAT_1423b6568, iVar8 == 0))
    {
      bVar5 = false;
      FUN_1400bc1a0(auStack_288,*(longlong *)(_DAT_1423b6568 + 8) + 0x3ce8,iVar10);
      lStack_368._0_4_ = -1;
      lStack_368 = 0xffffffff;
      iVar8 = (int)lStack_368;
      if (cStack_280 != '\0') {
        iVar8 = auStack_288._0_4_;
      }
      if (iVar8 == -1) {
        FUN_1400bc1a0(&pppuStack_58,lVar37 + 0x298,iVar10);
        ppuStack_370._0_4_ = -1;
        ppuStack_370 = (undefined8 ***)0xffffffff;
        iVar10 = (int)ppuStack_370;
        if ((char)pppuStack_50 != '\0') {
          iVar10 = (int)pppuStack_58;
        }
        if ((iVar10 == -1) &&
           ((*(int *)(*(longlong *)(lStack_378 + _DAT_1425135e8) + 0x48) < 1 ||
            ((**(byte **)(*(longlong *)(lStack_378 + _DAT_1425135e8) + 0x40) & 0x10) == 0)))) {
          bVar5 = true;
        }
      }
      plVar22 = plStack_380;
      iVar10 = (**(code **)(*plStack_380 + 0xd0))(plStack_380);
      sVar7 = (**(code **)(*plVar22 + 0xd8))(plVar22);
      iVar8 = (**(code **)*plStack_380)(plStack_380);
      plVar22 = plStack_380;
      iVar9 = (int)((longlong)(puVar31[0x18] - puVar31[0x17]) >> 2) + -1;
      if (-1 < iVar9) {
        lVar37 = (longlong)iVar9;
        do {
          if (((*(int *)(puVar31[0x17] + lVar37 * 4) == iVar10) &&
              (*(int *)(puVar31[0x1a] + lVar37 * 4) == (int)sVar7)) &&
             (*(int *)(puVar31[0x1d] + lVar37 * 4) == iVar8)) {
            uVar2 = *(undefined4 *)(puVar31[0x20] + (longlong)iVar9 * 4);
            auStack_328[0] = uVar2;
            if (!bVar5) {
              if (((0 < *(int *)(puVar31 + 9)) && ((*(byte *)puVar31[8] & 1) != 0)) &&
                 (bStack_388 == false)) goto LAB_1408dbd00;
              iVar10 = (int)((longlong)(puVar31[0xb] - puVar31[10]) >> 3) + -1;
              if (iVar10 < 0) goto LAB_1408dbbef;
              lVar37 = (longlong)iVar10;
              goto LAB_1408dbba1;
            }
            break;
          }
          iVar9 = iVar9 + -1;
          lVar37 = lVar37 + -1;
        } while (-1 < lVar37);
      }
    }
    goto LAB_1408dbc1e;
  }
  goto LAB_1408dbc59;
LAB_1408db490:
  if ((ppppuVar28 == (undefined8 ****)pppuVar18) || (pppuVar18 <= ppppuVar28)) goto LAB_1408db4d8;
  plVar22 = (longlong *)(lVar37 + 0x140);
  pppuVar12 = *ppppuVar28;
  if (0xf < *(ulonglong *)(lVar37 + 0x158)) {
    plVar22 = (longlong *)*plVar22;
  }
  pppuVar34 = pppuVar12 + 2;
  if ((undefined8 **)0xf < pppuVar12[3]) {
    pppuVar12 = (undefined8 ***)*pppuVar12;
  }
  if ((*pppuVar34 == *(undefined8 ***)(lVar37 + 0x150)) &&
     (iVar8 = workshop_supplier_0x154f5b4(pppuVar12,plVar22), lVar17 = _DAT_1425135e8,
     iVar10 = iStack_384, iVar8 == 0)) goto LAB_1408db7ae;
  ppppuVar28 = ppppuVar28 + 1;
  goto LAB_1408db490;
LAB_1408db4d8:
  pppuVar34 = (undefined8 ***)(lVar37 + 0x140);
  pppuVar12 = (undefined8 ***)FUN_14154de30(0x20);
  *pppuVar12 = (undefined8 **)0x0;
  pppuVar12[1] = (undefined8 **)0x0;
  pppuVar12[2] = (undefined8 **)0x0;
  pppuVar12[3] = (undefined8 **)0xf;
  *(undefined1 *)pppuVar12 = 0;
  ppuStack_370 = pppuVar12;
  if (pppuVar12 != pppuVar34) {
    pppuVar23 = pppuVar34;
    if (0xf < *(ulonglong *)(lVar37 + 0x158)) {
      pppuVar23 = (undefined8 ***)*pppuVar34;
    }
    FUN_140070e90(pppuVar12,pppuVar23,*(undefined8 *)(lVar37 + 0x150));
  }
  if (pppuVar18 == pppuVar19) {
    FUN_1400bc2f0(&pppuStack_58,pppuVar18,&ppuStack_370);
    puVar30 = _DAT_142513600;
    puVar14 = _DAT_142513608;
  }
  else {
    *pppuVar18 = pppuVar12;
    pppuStack_50 = pppuVar18 + 1;
    puVar30 = _DAT_142513600;
    puVar14 = _DAT_142513608;
  }
  for (; lVar17 = _DAT_1425135e8, iVar10 = iStack_384, puVar30 < puVar14; puVar30 = puVar30 + 1) {
    pppuVar19 = (undefined8 ***)*puVar30;
    pppuVar18 = pppuVar34;
    if (0xf < *(ulonglong *)(lVar37 + 0x158)) {
      pppuVar18 = (undefined8 ***)*pppuVar34;
    }
    pppuVar12 = pppuVar19;
    if ((undefined8 **)0xf < pppuVar19[3]) {
      pppuVar12 = (undefined8 ***)*pppuVar19;
    }
    if ((pppuVar19[2] == *(undefined8 ***)(lVar37 + 0x150)) &&
       (iVar10 = workshop_supplier_0x154f5b4(pppuVar12,pppuVar18), iVar10 == 0)) {
      lVar17 = _DAT_1425135e8;
      iVar10 = iStack_384;
      if (pppuVar19 != (undefined8 ***)0x0) goto LAB_1408db5b0;
      break;
    }
  }
  goto LAB_1408db7ae;
LAB_1408db5b0:
  puVar24 = &DAT_1418bd768;
  if (0xf < _DAT_1418bd780) {
    puVar24 = _DAT_1418bd768;
  }
  ppuVar35 = pppuVar19[6];
  pppuVar18 = pppuVar19 + 4;
  ppuVar38 = pppuVar19[7];
  if ((undefined8 **)0xf < ppuVar38) {
    pppuVar18 = (undefined8 ***)pppuVar19[4];
  }
  puVar30 = _DAT_142513600;
  puVar14 = _DAT_142513608;
  if ((ppuVar35 != _DAT_1418bd778) ||
     (iVar10 = workshop_supplier_0x154f5b4(pppuVar18,puVar24,ppuVar35), puVar30 = _DAT_142513600,
     puVar14 = _DAT_142513608, iVar10 != 0)) {
    for (; pppuVar18 = pppuVar19, puVar30 < puVar14; puVar30 = puVar30 + 1) {
      pppuVar18 = (undefined8 ***)*puVar30;
      pppuVar12 = pppuVar19 + 4;
      ppuVar13 = ppuVar35;
      ppuVar25 = ppuVar38;
      if ((undefined8 **)0xf < ppuVar38) {
        pppuVar12 = (undefined8 ***)pppuVar19[4];
        ppuVar13 = pppuVar19[6];
        ppuVar25 = pppuVar19[7];
      }
      pppuVar34 = pppuVar18;
      ppuVar36 = ppuVar35;
      if ((undefined8 **)0xf < pppuVar18[3]) {
        pppuVar34 = (undefined8 ***)*pppuVar18;
        ppuVar36 = ppuVar13;
        ppuVar38 = ppuVar25;
      }
      if ((pppuVar18[2] == ppuVar35) &&
         (iVar10 = workshop_supplier_0x154f5b4(pppuVar34,pppuVar12), iVar10 == 0)) break;
      ppuVar35 = ppuVar36;
    }
    pppuVar12 = pppuStack_50;
    lVar17 = _DAT_1425135e8;
    ppppuVar28 = (undefined8 ****)pppuStack_58;
    param_1 = plStack_380;
    iVar10 = iStack_384;
    if (pppuVar18 == (undefined8 ***)0x0) goto LAB_1408db7ae;
    for (; ppppuVar28 < pppuVar12; ppppuVar28 = ppppuVar28 + 1) {
      pppuVar19 = *ppppuVar28;
      pppuVar34 = pppuVar18;
      if ((undefined8 **)0xf < pppuVar18[3]) {
        pppuVar34 = (undefined8 ***)*pppuVar18;
      }
      pppuVar23 = pppuVar19 + 2;
      if ((undefined8 **)0xf < pppuVar19[3]) {
        pppuVar19 = (undefined8 ***)*pppuVar19;
      }
      if ((*pppuVar23 == pppuVar18[2]) &&
         (iVar8 = workshop_supplier_0x154f5b4(pppuVar19,pppuVar34), lVar17 = _DAT_1425135e8,
         param_1 = plStack_380, iVar10 = iStack_384, iVar8 == 0)) goto LAB_1408db7ae;
    }
    pppuVar34 = (undefined8 ***)FUN_14154de30(0x20);
    *pppuVar34 = (undefined8 **)0x0;
    pppuVar34[1] = (undefined8 **)0x0;
    pppuVar34[2] = (undefined8 **)0x0;
    pppuVar34[3] = (undefined8 **)0xf;
    *(undefined1 *)pppuVar34 = 0;
    ppuStack_370 = pppuVar34;
    if (pppuVar34 != pppuVar18) {
      pppuVar19 = pppuVar18;
      if ((undefined8 **)0xf < pppuVar18[3]) {
        pppuVar19 = (undefined8 ***)*pppuVar18;
      }
      FUN_140070e90(pppuVar34,pppuVar19,pppuVar18[2]);
    }
    pppuVar19 = pppuVar18;
    if (pppuVar12 == pppuStack_48) {
      FUN_1400bc2f0(&pppuStack_58,pppuVar12,&ppuStack_370);
    }
    else {
      *pppuVar12 = pppuVar34;
      pppuStack_50 = pppuVar12 + 1;
    }
    goto LAB_1408db5b0;
  }
  puVar14 = (undefined8 *)FUN_14154de30(0x68);
  puStack_360 = puVar14;
  FUN_1407dc670(puVar14);
  param_1 = plStack_380;
  *puVar14 = &UNK_1416d9f70;
  pppuVar18 = (undefined8 ***)(puVar14 + 9);
  *pppuVar18 = (undefined8 **)0x0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0xf;
  *(undefined1 *)pppuVar18 = 0;
  puVar14[8] = plStack_380;
  if (pppuVar18 != pppuVar19) {
    pppuVar12 = pppuVar19;
    if ((undefined8 **)0xf < pppuVar19[3]) {
      pppuVar12 = (undefined8 ***)*pppuVar19;
    }
    FUN_140070e90(pppuVar18,pppuVar12,pppuVar19[2]);
  }
  *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(pppuVar19 + 0xc);
  lVar17 = _DAT_1425135e8;
  iVar10 = iStack_384;
LAB_1408db7ae:
  iStack_384 = iVar10 + 1;
  lStack_378 = lStack_378 + 1;
  lVar37 = lStack_368;
  if ((ulonglong)(_DAT_1425135f0 - lVar17 >> 3) <= (ulonglong)(longlong)iStack_384)
  goto LAB_1408db7e9;
  goto LAB_1408db3c0;
LAB_1408dbba1:
  do {
    plVar3 = *(longlong **)(puVar31[10] + lVar37 * 8);
    if ((*(byte *)((longlong)plVar3 + 0x2c) & 2) == 0) {
      uStack_398 = *(undefined4 *)(puVar31 + 0x23);
      plStack_3a0 = &lStack_320;
      puStack_3a8 = &uStack_2a8;
      cVar6 = (**(code **)(*plVar3 + 8))(plVar3,plVar22,&lStack_340,&lStack_358);
      if (cVar6 == '\0') goto LAB_1408dbd00;
    }
    lVar37 = lVar37 + -1;
  } while (-1 < lVar37);
LAB_1408dbbef:
  lVar37 = FUN_1408c8390();
  *(longlong **)(lVar37 + 0x40) = plVar22;
  *(undefined4 *)(lVar37 + 0x48) = 0xd1;
  if ((undefined8 *)(lVar37 + 0x50) != puVar31) {
    puVar15 = puVar31 + 2;
    if (0xf < (ulonglong)puVar31[3]) {
      puVar31 = (undefined8 *)*puVar31;
    }
    FUN_140070e90((undefined8 *)(lVar37 + 0x50),puVar31,*puVar15);
  }
LAB_1408dbc1e:
  iStack_384 = iStack_384 + 1;
  lStack_378 = lStack_378 + 8;
  if ((ulonglong)(_DAT_1425135f0 - _DAT_1425135e8 >> 3) <= (ulonglong)(longlong)iStack_384)
  goto LAB_1408dbc59;
  goto LAB_1408db9d0;
LAB_1408dbd00:
  puVar15 = (undefined8 *)FUN_14154de30(0x20);
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0xf;
  *(undefined1 *)puVar15 = 0;
  puStack_290 = puVar15;
  if (puVar15 != puVar31) {
    puVar27 = puVar31;
    if (0xf < (ulonglong)puVar31[3]) {
      puVar27 = (undefined8 *)*puVar31;
    }
    FUN_140070e90(puVar15,puVar27,puVar31[2]);
  }
  if (puVar14 == puStack_2f8) {
    FUN_1400bc2f0(&puStack_308,puVar14,&puStack_290);
  }
  else {
    *puVar14 = puVar15;
    puStack_300 = puVar14 + 1;
  }
  puVar14 = puStack_300;
  if (puVar33 == puStack_2c8) {
    FUN_1400723e0(&uStack_2d8,puVar33,auStack_328);
  }
  else {
    *puVar33 = uVar2;
    puStack_2d0 = puVar33 + 1;
  }
  puVar33 = puStack_2d0;
  if (puVar30 == puStack_2e0) {
    FUN_1400bc2f0(&lStack_2f0,puVar30,&puStack_360);
    puVar30 = puStack_2e8;
  }
  else {
    *puVar30 = puVar31;
    puStack_2e8 = puVar30 + 1;
    puVar30 = puStack_2e8;
  }
  goto LAB_1408dbc1e;
}


/* classic PE:6aea11a5:0272d000; tooltip-job-products; RVA 0xd2abd0..0xd2b930 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_tooltip_job_products
               (longlong param_1,short param_2,undefined8 param_3,undefined2 param_4,
               undefined2 param_5,int param_6,undefined8 *param_7,byte param_8,undefined8 param_9,
               undefined4 param_10)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined2 *apuStack_38 [2];
  
  uVar5 = (int)param_2 - 0xe;
  if (0xe7 < uVar5) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch((&UNK_140d2b988)[(int)uVar5]) {
  case 0:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      *apuStack_38[0] = 0x39;
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      *apuStack_38[0] = 0x39;
    }
    goto LAB_140d2b900;
  case 1:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    uVar5 = (int)param_2 - 0x43;
    if (uVar5 < 0xb3) {
                    /* WARNING: Switch is manually overridden */
      switch((&UNK_140d2bb64)[(int)uVar5]) {
      case 0:
        *apuStack_38[0] = 6;
        break;
      case 1:
        *apuStack_38[0] = 7;
        break;
      case 2:
        *apuStack_38[0] = 8;
        break;
      case 3:
        *apuStack_38[0] = 9;
        break;
      case 4:
        *apuStack_38[0] = 0x15;
        break;
      case 5:
        *apuStack_38[0] = 0x14;
        break;
      case 6:
        *apuStack_38[0] = 0x1e;
        break;
      case 7:
        *apuStack_38[0] = 0x1f;
        break;
      case 8:
        *apuStack_38[0] = 0x20;
        break;
      case 9:
        *apuStack_38[0] = 0x21;
        break;
      case 10:
        *apuStack_38[0] = 0x22;
        break;
      case 0xb:
        *apuStack_38[0] = 0x23;
        break;
      case 0xc:
        *apuStack_38[0] = 0x16;
        break;
      case 0xd:
        *apuStack_38[0] = 2;
        break;
      case 0xe:
        *apuStack_38[0] = 3;
        break;
      case 0xf:
        *apuStack_38[0] = 0x4a;
        break;
      case 0x10:
        *apuStack_38[0] = 0x18;
        break;
      case 0x11:
        *apuStack_38[0] = 0x2d;
        break;
      case 0x12:
        *apuStack_38[0] = 0x3f;
        break;
      case 0x13:
        *apuStack_38[0] = 0x40;
        break;
      case 0x14:
        *apuStack_38[0] = 0x19;
        break;
      case 0x15:
        *apuStack_38[0] = 0x1c;
        break;
      case 0x16:
        *apuStack_38[0] = 0x3c;
        break;
      case 0x17:
        *apuStack_38[0] = 0x1d;
        break;
      case 0x18:
        *apuStack_38[0] = 0x1a;
        break;
      case 0x19:
        *apuStack_38[0] = 0x1b;
        break;
      case 0x1a:
        *apuStack_38[0] = 0x10;
        break;
      case 0x1b:
        *apuStack_38[0] = 10;
        break;
      case 0x1c:
        *apuStack_38[0] = 0xb;
        break;
      case 0x1d:
        *apuStack_38[0] = 0xc;
        break;
      case 0x1e:
        *apuStack_38[0] = 0xe;
        break;
      case 0x1f:
        *apuStack_38[0] = 0x13;
        break;
      case 0x20:
        *apuStack_38[0] = 0x11;
        break;
      case 0x21:
        *apuStack_38[0] = 0x12;
        break;
      case 0x22:
        *apuStack_38[0] = 0xf;
        break;
      case 0x23:
        *apuStack_38[0] = 0x27;
        break;
      case 0x24:
        *apuStack_38[0] = 0x3d;
        break;
      case 0x25:
        *apuStack_38[0] = 0x3e;
        break;
      case 0x26:
        *apuStack_38[0] = 0x42;
        break;
      case 0x27:
        *apuStack_38[0] = 0x43;
        break;
      case 0x28:
        *apuStack_38[0] = 0x44;
        break;
      case 0x29:
        *apuStack_38[0] = 0x4d;
        break;
      case 0x2a:
        *apuStack_38[0] = 0x4e;
        break;
      case 0x2b:
        *apuStack_38[0] = 0x4f;
        break;
      case 0x2c:
        *apuStack_38[0] = 0x50;
        break;
      case 0x2d:
        *apuStack_38[0] = 0x51;
        break;
      case 0x2e:
        *apuStack_38[0] = 0x52;
        break;
      case 0x2f:
        *apuStack_38[0] = 0x53;
        break;
      case 0x30:
        *apuStack_38[0] = 0x54;
        break;
      case 0x31:
        *apuStack_38[0] = 0x57;
        break;
      case 0x32:
        *apuStack_38[0] = 0x56;
        break;
      case 0x33:
        *apuStack_38[0] = 0x24;
        break;
      case 0x34:
        *apuStack_38[0] = 0x25;
        break;
      case 0x35:
        *apuStack_38[0] = 0x26;
        break;
      case 0x36:
        *apuStack_38[0] = 0x28;
        break;
      case 0x37:
        *apuStack_38[0] = 0x29;
        break;
      case 0x38:
        *apuStack_38[0] = 0x2a;
        break;
      case 0x39:
        *apuStack_38[0] = 0x2b;
        break;
      case 0x3a:
        *apuStack_38[0] = 0x2c;
        break;
      case 0x3b:
        *apuStack_38[0] = 0x5c;
      }
    }
    apuStack_38[0][2] = param_5;
    *(int *)(apuStack_38[0] + 4) = param_6;
    apuStack_38[0][1] = param_4;
    goto LAB_140d2b900;
  case 2:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    uVar4 = 0x2c;
LAB_140d2b8ec:
    apuStack_38[0][2] = param_5;
    *(int *)(apuStack_38[0] + 4) = param_6;
    goto LAB_140d2b8fc;
  case 3:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      uVar4 = 0x2c;
      apuStack_38[0][2] = param_5;
    }
    else {
      *puVar12 = apuStack_38[0];
      uVar4 = 0x2c;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      apuStack_38[0][2] = param_5;
    }
    goto LAB_140d2b8fc;
  case 4:
    if (((-1 < param_6) &&
        ((ulonglong)(longlong)param_6 < (ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3))) &&
       ((lVar3 = *(longlong *)(_DAT_142508c48 + (longlong)param_6 * 8), lVar3 != 0 &&
        (iVar6 = 0, *(longlong *)(lVar3 + 0x70) - *(longlong *)(lVar3 + 0x68) >> 1 != 0)))) {
      uVar4 = workshop_supplier_0xcd4c20(_DAT_142508c48,0);
      lVar11 = 0;
      do {
        apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
        apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
        puVar12 = *(undefined8 **)(param_1 + 8);
        if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
          FUN_1400bc2f0(param_1,puVar12,apuStack_38);
        }
        else {
          *puVar12 = apuStack_38[0];
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
        }
        *apuStack_38[0] = 0;
        iVar6 = iVar6 + 1;
        apuStack_38[0][2] = 0;
        psVar1 = (short *)(lVar11 + *(longlong *)(lVar3 + 0x68));
        lVar11 = lVar11 + 2;
        *(int *)(apuStack_38[0] + 4) = (int)*psVar1;
        *(undefined4 *)(apuStack_38[0] + 8) = 1;
        apuStack_38[0][10] = uVar4;
      } while ((ulonglong)(longlong)iVar6 <
               (ulonglong)(*(longlong *)(lVar3 + 0x70) - *(longlong *)(lVar3 + 0x68) >> 1));
    }
    break;
  case 5:
    if ((((-1 < param_6) &&
         ((ulonglong)(longlong)param_6 < (ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3))) &&
        (lVar3 = *(longlong *)(_DAT_142508c48 + (longlong)param_6 * 8), lVar3 != 0)) &&
       (iVar6 = 0, *(longlong *)(lVar3 + 0xb8) - *(longlong *)(lVar3 + 0xb0) >> 1 != 0)) {
      uVar4 = workshop_supplier_0xcd4c20(_DAT_142508c48,0x39);
      lVar11 = 0;
      do {
        apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
        apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
        puVar12 = *(undefined8 **)(param_1 + 8);
        if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
          FUN_1400bc2f0(param_1,puVar12,apuStack_38);
        }
        else {
          *puVar12 = apuStack_38[0];
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
        }
        *apuStack_38[0] = 0x39;
        iVar6 = iVar6 + 1;
        apuStack_38[0][2] = 0;
        psVar1 = (short *)(*(longlong *)(lVar3 + 0xb0) + lVar11);
        lVar11 = lVar11 + 2;
        *(int *)(apuStack_38[0] + 4) = (int)*psVar1;
        *(undefined4 *)(apuStack_38[0] + 8) = 1;
        apuStack_38[0][10] = uVar4;
      } while ((ulonglong)(longlong)iVar6 <
               (ulonglong)(*(longlong *)(lVar3 + 0xb8) - *(longlong *)(lVar3 + 0xb0) >> 1));
    }
    break;
  case 6:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    *apuStack_38[0] = 0x31;
    *(undefined4 *)(apuStack_38[0] + 6) = 0x10;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    apuStack_38[0][10] = 0x50;
    break;
  case 7:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    *apuStack_38[0] = 0x47;
    *(undefined4 *)(apuStack_38[0] + 6) = 0x10;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    apuStack_38[0][10] = 0x50;
    break;
  case 8:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    *apuStack_38[0] = 0x48;
    *(undefined4 *)(apuStack_38[0] + 6) = 0x10;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    apuStack_38[0][10] = 0x50;
    break;
  case 9:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      uVar4 = 0x3a;
    }
    else {
      *puVar12 = apuStack_38[0];
      uVar4 = 0x3a;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    goto LAB_140d2b8fc;
  case 10:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    *apuStack_38[0] = 0x3b;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    apuStack_38[0][10] = 0x50;
    break;
  case 0xb:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if ((param_8 & 2) == 0) {
      if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
        FUN_1400bc2f0(param_1,puVar12,apuStack_38);
        uVar4 = 0x41;
      }
      else {
        *puVar12 = apuStack_38[0];
        uVar4 = 0x41;
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      }
      goto LAB_140d2b8ec;
    }
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      uVar4 = 0x41;
      *(uint *)(apuStack_38[0] + 6) = *(uint *)(apuStack_38[0] + 6) | 0x4000;
    }
    else {
      *puVar12 = apuStack_38[0];
      uVar4 = 0x41;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      *(uint *)(apuStack_38[0] + 6) = *(uint *)(apuStack_38[0] + 6) | 0x4000;
    }
    goto LAB_140d2b8fc;
  case 0xc:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      apuStack_38[0][2] = 7;
      *apuStack_38[0] = 0;
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      apuStack_38[0][2] = 7;
      *apuStack_38[0] = 0;
    }
    goto LAB_140d2b900;
  case 0xd:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      apuStack_38[0][2] = 9;
      *apuStack_38[0] = 0;
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      apuStack_38[0][2] = 9;
      *apuStack_38[0] = 0;
    }
    goto LAB_140d2b900;
  case 0xe:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      uVar4 = 0x49;
      apuStack_38[0][2] = 0xb;
    }
    else {
      *puVar12 = apuStack_38[0];
      uVar4 = 0x49;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      apuStack_38[0][2] = 0xb;
    }
LAB_140d2b8fc:
    *apuStack_38[0] = uVar4;
    goto LAB_140d2b900;
  case 0xf:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      apuStack_38[0][2] = 8;
      *apuStack_38[0] = 0;
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      apuStack_38[0][2] = 8;
      *apuStack_38[0] = 0;
    }
LAB_140d2b900:
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    uVar4 = workshop_supplier_0xcd4c20();
    apuStack_38[0][10] = uVar4;
    break;
  case 0x10:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      *apuStack_38[0] = 0x39;
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
      *apuStack_38[0] = 0x39;
    }
    goto LAB_140d2b38e;
  case 0x11:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
      uVar4 = 0x3a;
    }
    else {
      *puVar12 = apuStack_38[0];
      uVar4 = 0x3a;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    goto LAB_140d2b38a;
  case 0x12:
    puVar12 = param_7;
    if (0xf < (ulonglong)param_7[3]) {
      puVar12 = (undefined8 *)*param_7;
    }
    lVar3 = param_7[2];
    uVar9 = 0;
    uVar14 = _DAT_1425135f0 - (longlong)_DAT_1425135e8 >> 3;
    uVar8 = uVar9;
    puVar13 = _DAT_1425135e8;
    if (uVar14 != 0) {
      do {
        plVar2 = (longlong *)*puVar13;
        plVar7 = plVar2;
        if (0xf < (ulonglong)plVar2[3]) {
          plVar7 = (longlong *)*plVar2;
        }
        if ((lVar3 == plVar2[2]) &&
           (iVar6 = workshop_supplier_0x154f5b4(puVar12,plVar7,lVar3), iVar6 == 0)) {
          lVar3 = _DAT_1425135e8[(int)uVar8];
          if (lVar3 == 0) {
            return;
          }
          lVar11 = *(longlong *)(lVar3 + 0x68);
          uVar8 = uVar9;
          if (*(longlong *)(lVar3 + 0x70) - lVar11 >> 3 == 0) {
            return;
          }
          do {
            iVar6 = (**(code **)**(undefined8 **)(lVar11 + uVar8))();
            if ((iVar6 == 0) &&
               ((lVar11 = *(longlong *)(uVar8 + *(longlong *)(lVar3 + 0x68)),
                *(int *)(lVar11 + 0x68) < 1 || ((**(byte **)(lVar11 + 0x60) & 0x20) == 0)))) {
              apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
              apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
              puVar12 = *(undefined8 **)(param_1 + 8);
              if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
                FUN_1400bc2f0(param_1,puVar12,apuStack_38);
              }
              else {
                *puVar12 = apuStack_38[0];
                *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
              }
              *apuStack_38[0] = *(undefined2 *)(lVar11 + 0x48);
              apuStack_38[0][1] = *(undefined2 *)(lVar11 + 0x4a);
              apuStack_38[0][2] = *(undefined2 *)(lVar11 + 0x4c);
              *(undefined4 *)(apuStack_38[0] + 4) = *(undefined4 *)(lVar11 + 0x50);
              *(undefined4 *)(apuStack_38[0] + 8) = 1;
              puVar10 = apuStack_38[0];
              uVar4 = workshop_supplier_0xcd4c20();
              puVar10[10] = uVar4;
            }
            lVar11 = *(longlong *)(lVar3 + 0x68);
            uVar5 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar5;
            uVar8 = uVar8 + 8;
          } while ((ulonglong)(longlong)(int)uVar5 <
                   (ulonglong)(*(longlong *)(lVar3 + 0x70) - lVar11 >> 3));
          return;
        }
        uVar5 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar5;
        puVar13 = puVar13 + 1;
      } while ((ulonglong)(longlong)(int)uVar5 < uVar14);
    }
    break;
  case 0x13:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 == *(longlong **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,plVar2,apuStack_38);
    }
    else {
      *plVar2 = (longlong)apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    *(int *)(apuStack_38[0] + 0x4c) = param_6;
    *(undefined4 *)(apuStack_38[0] + 6) = 0x10;
    *(undefined4 *)(apuStack_38[0] + 0xc) = 1;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    apuStack_38[0][10] = 0x50;
    break;
  case 0x14:
    apuStack_38[0] = (undefined2 *)FUN_14154de30(0xb0);
    apuStack_38[0] = (undefined2 *)workshop_supplier_0xa7e080(apuStack_38[0]);
    puVar12 = *(undefined8 **)(param_1 + 8);
    if (puVar12 == *(undefined8 **)(param_1 + 0x10)) {
      FUN_1400bc2f0(param_1,puVar12,apuStack_38);
    }
    else {
      *puVar12 = apuStack_38[0];
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    }
    uVar4 = 0x37;
LAB_140d2b38a:
    *apuStack_38[0] = uVar4;
LAB_140d2b38e:
    *(uint *)(apuStack_38[0] + 0xc) = *(uint *)(apuStack_38[0] + 0xc) | 4;
    *(undefined4 *)(apuStack_38[0] + 8) = 1;
    uVar4 = workshop_supplier_0xcd4c20();
    apuStack_38[0][10] = uVar4;
    *(undefined4 *)(apuStack_38[0] + 0x4c) = param_10;
  }
  return;
}


/* classic PE:6aea11a5:0272d000; tooltip-job-reagents; RVA 0xd1e7b0..0xd21380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_tooltip_job_reagents
               (longlong *param_1,ushort param_2,short param_3,short param_4,short param_5,
               int param_6,undefined8 *param_7,uint param_8,uint param_9,undefined4 param_10,
               longlong *param_11,undefined8 param_12,int param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ushort uVar16;
  undefined8 *puVar17;
  short *psStackX_8;
  ushort uStackX_10;
  longlong *plStack_48;
  
  plVar9 = (longlong *)param_1[1];
  uStackX_10 = param_2;
  for (plVar11 = (longlong *)*param_1; plVar11 != plVar9; plVar11 = plVar11 + 1) {
    lVar7 = *plVar11;
    if (lVar7 != 0) {
      FUN_140070d10(lVar7 + 0x78);
      FUN_140070e10(lVar7 + 0x50);
      FUN_140070e10(lVar7 + 0x30);
      workshop_supplier_0x154de20(lVar7,0xb0);
    }
  }
  plVar11 = param_1 + 1;
  if (*param_1 != *plVar11) {
    param_1[1] = *param_1;
  }
  puVar1 = _DAT_1425135e8;
  if (0xe7 < (int)(short)uStackX_10 - 0xeU) {
    return;
  }
                    /* WARNING: Switch is manually overridden */
  switch((&UNK_140d2143c)[(int)((int)(short)uStackX_10 - 0xeU)]) {
  case 0:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = param_5;
    psStackX_8[8] = 10;
    psStackX_8[9] = 0;
    psStackX_8[0x38] = 10;
    psStackX_8[0x39] = 0;
    *psStackX_8 = 0x39;
    psStackX_8[6] = 0x20;
    psStackX_8[7] = 0;
    psStackX_8[10] = 0x48;
    break;
  case 1:
    bVar2 = true;
    if ((param_5 == 0) && (param_6 == -1)) {
LAB_140d1f48e:
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 4;
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      if (param_6 == -1) {
        if (uStackX_10 == 0x60) {
          psStackX_8[6] = 0x80;
          psStackX_8[7] = 0;
        }
        else {
          psStackX_8[0xc] = 0x800;
          psStackX_8[0xd] = 0;
        }
        psStackX_8[0xe] = 0x40;
        psStackX_8[0xf] = 0;
      }
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      uVar16 = uStackX_10;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
      if (uVar16 == 0x60) {
        psStackX_8 = (short *)FUN_14154de30(0xb0);
        psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 == (undefined8 *)param_1[2]) {
          FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
        }
        else {
          *puVar1 = psStackX_8;
          param_1[1] = param_1[1] + 8;
        }
        *psStackX_8 = 5;
        if (param_6 == -1) {
          psStackX_8[0xc] = 0x4000;
          psStackX_8[0xd] = 0;
        }
        else {
          psStackX_8[2] = param_5;
          *(int *)(psStackX_8 + 4) = param_6;
        }
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
        psVar6 = psStackX_8;
        sVar4 = workshop_supplier_0xcd4c20();
        psVar6[10] = sVar4;
      }
    }
    else {
      lVar7 = workshop_material_record_lookup(0x1423ed870,param_5,param_6);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 8) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x10) == 0)) {
          bVar2 = false;
        }
        if (bVar2) goto LAB_140d1f48e;
      }
    }
    if ((param_8 & 2) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      psStackX_8[2] = param_5;
      *psStackX_8 = 5;
      *(int *)(psStackX_8 + 4) = param_6;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
    }
    if ((param_8 & 8) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0x3a;
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      psStackX_8[8] = 10000;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
      psVar6[0xc] = -0x8000;
      psVar6[0xd] = 0;
      psVar6[0x38] = 10000;
      psVar6[0x39] = 0;
      if (DAT_14214e22c != '\0') {
        psVar6[0xc] = -0x7ffc;
        psVar6[0xd] = 0;
      }
    }
    if ((param_8 >> 0xc & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      psStackX_8[2] = param_5;
      *psStackX_8 = 0x3a;
      *(int *)(psStackX_8 + 4) = param_6;
      psStackX_8[8] = 10000;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
      psVar6[0xc] = 0;
      psVar6[0xd] = -0x8000;
      psVar6[0x38] = 10000;
      psVar6[0x39] = 0;
      if (DAT_14214e22c != '\0') {
        psVar6[0xc] = 4;
        psVar6[0xd] = -0x8000;
      }
    }
    if ((param_8 >> 8 & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
      if (param_6 == -1) {
        psVar6[0xc] = 0;
        psVar6[0xd] = 0x100;
      }
      else {
        psVar6[2] = param_5;
        *(int *)(psVar6 + 4) = param_6;
      }
    }
    if ((param_8 & 4) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0x3a;
      psStackX_8[8] = 10000;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
      if (param_6 == -1) {
        psVar6[0xc] = 0x4000;
        psVar6[0xd] = 0;
      }
      else {
        psVar6[2] = param_5;
        *(int *)(psVar6 + 4) = param_6;
      }
      psVar6[0x38] = 10000;
      psVar6[0x39] = 0;
      if (DAT_14214e22c != '\0') {
        *(uint *)(psVar6 + 0xc) = *(uint *)(psVar6 + 0xc) | 4;
      }
    }
    if ((param_8 & 0x10) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(int *)(psStackX_8 + 4) = param_6;
      *psStackX_8 = 0x37;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psVar6 = psStackX_8;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
    }
    if ((param_8 & 0x40) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      if (param_6 != -1) {
        psStackX_8[2] = param_5;
        *(int *)(psStackX_8 + 4) = param_6;
      }
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x204;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 >> 9 & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      if (param_6 != -1) {
        psStackX_8[2] = param_5;
        *(int *)(psStackX_8 + 4) = param_6;
      }
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x600;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 >> 10 & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      if (param_6 != -1) {
        psStackX_8[2] = param_5;
        *(int *)(psStackX_8 + 4) = param_6;
      }
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x210;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 >> 0xb & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      if (param_6 != -1) {
        psStackX_8[2] = param_5;
        *(int *)(psStackX_8 + 4) = param_6;
      }
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x220;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 & 0x20) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      if (param_6 != -1) {
        psStackX_8[2] = param_5;
        *(int *)(psStackX_8 + 4) = param_6;
      }
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x202;
      if ((((ushort)(uStackX_10 - 0x50) < 0x32) &&
          ((0x2003000210005U >> ((ulonglong)(uStackX_10 - 0x50) & 0x3f) & 1) != 0)) ||
         ((ushort)(uStackX_10 - 0xe6) < 8)) {
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
      }
      else {
        psStackX_8[8] = 3;
        psStackX_8[9] = 0;
      }
      psStackX_8[10] = 0x15;
    }
    lVar7 = workshop_material_record_lookup(0x1423ed870,param_5,param_6);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (param_5 == 5) {
LAB_140d1fbde:
          psStackX_8 = (short *)FUN_14154de30(0xb0);
          psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
          puVar1 = (undefined8 *)param_1[1];
          if (puVar1 == (undefined8 *)param_1[2]) {
            FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
          }
          else {
            *puVar1 = psStackX_8;
            param_1[1] = param_1[1] + 8;
          }
          *psStackX_8 = 0;
          psStackX_8[2] = 10;
          psStackX_8[8] = 1;
          psStackX_8[9] = 0;
          psVar6 = psStackX_8;
          sVar4 = workshop_supplier_0xcd4c20();
          psVar6[10] = sVar4;
        }
        else {
          psStackX_8 = (short *)FUN_14154de30(0xb0);
          psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
          puVar1 = (undefined8 *)param_1[1];
          if (puVar1 == (undefined8 *)param_1[2]) {
            FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
          }
          else {
            *puVar1 = psStackX_8;
            param_1[1] = param_1[1] + 8;
          }
          psStackX_8[6] = 0;
          psStackX_8[7] = 0x80;
          psStackX_8[8] = 1;
          psStackX_8[9] = 0;
          psStackX_8[10] = 0x51;
          if (param_5 != 3) goto LAB_140d1fbde;
        }
        plStack_48 = param_1 + 2;
        if (param_5 == 5) {
          psStackX_8 = (short *)FUN_14154de30(0xb0);
          psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
          puVar1 = (undefined8 *)param_1[1];
          if (puVar1 == (undefined8 *)*plStack_48) {
            FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
          }
          else {
            *puVar1 = psStackX_8;
            param_1[1] = param_1[1] + 8;
          }
          *psStackX_8 = 3;
          psStackX_8[0xc] = 0x10;
          psStackX_8[0xd] = 0;
          psStackX_8[8] = 1;
          psStackX_8[9] = 0;
          psVar6 = psStackX_8;
          sVar4 = workshop_supplier_0xcd4c20();
          psVar6[10] = sVar4;
        }
        if ((param_11 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*param_11 + 0x228))(), cVar3 == '\0')) {
          psStackX_8 = (short *)FUN_14154de30(0xb0);
          psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
          puVar1 = (undefined8 *)param_1[1];
          if (puVar1 == (undefined8 *)param_1[2]) {
            FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
          }
          else {
            *puVar1 = psStackX_8;
            param_1[1] = param_1[1] + 8;
          }
          *psStackX_8 = 0;
          psStackX_8[2] = 7;
          psStackX_8[8] = 1;
          psStackX_8[9] = 0;
          psVar6 = psStackX_8;
          sVar4 = workshop_supplier_0xcd4c20();
          psVar6[10] = sVar4;
        }
      }
    }
    lVar7 = workshop_material_record_lookup(0x1423ed870,param_5,param_6);
    if (lVar7 == 0) {
      return;
    }
    if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if ((param_6 < 0) ||
       ((ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3) <= (ulonglong)(longlong)param_6)) {
LAB_140d20074:
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0;
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      if ((int)(short)uStackX_10 - 0x50U < 0x9e) {
                    /* WARNING: Switch is manually overridden */
        switch((&UNK_140d21664)[(int)((int)(short)uStackX_10 - 0x50U)]) {
        case 0:
          psStackX_8[8] = 1;
          psStackX_8[9] = 0;
          break;
        case 1:
          iVar5 = *(int *)(*(longlong *)(_DAT_142508ea8 + (longlong)param_4 * 8) + 0x100);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 2:
          iVar5 = *(int *)(*(longlong *)(_DAT_142509190 + (longlong)param_4 * 8) + 0x114);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 3:
          iVar5 = *(int *)(*(longlong *)(_DAT_142509220 + (longlong)param_4 * 8) + 0xe0);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 4:
          iVar5 = *(int *)(*(longlong *)(_DAT_142509238 + (longlong)param_4 * 8) + 0x120);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 5:
          iVar5 = *(int *)(*(longlong *)(_DAT_1425091d8 + (longlong)param_4 * 8) + 0xe0);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 6:
          iVar5 = *(int *)(*(longlong *)(_DAT_1425091f0 + (longlong)param_4 * 8) + 0xe0);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 7:
          iVar5 = *(int *)(*(longlong *)(_DAT_142509208 + (longlong)param_4 * 8) + 0xd4);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 8:
          iVar5 = *(int *)(*(longlong *)(_DAT_142508ec0 + (longlong)param_4 * 8) + 0xd4);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 9:
          iVar5 = *(int *)(*(longlong *)(_DAT_142508ef0 + (longlong)param_4 * 8) + 0x128);
          *(int *)(psStackX_8 + 8) =
               iVar5 / 3 + (iVar5 >> 0x1f) +
               (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          break;
        case 10:
          goto override_jmp_140d200ef_case_1;
        }
      }
      else {
override_jmp_140d200ef_case_1:
        psStackX_8[8] = 3;
        psStackX_8[9] = 0;
      }
      iVar5 = *(int *)(psStackX_8 + 8);
      if (*(int *)(psStackX_8 + 8) < 1) {
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
        iVar5 = 1;
      }
LAB_140d20285:
      psStackX_8[0x38] = 0x96;
      psStackX_8[0x39] = 0;
      iVar5 = iVar5 * 0x96;
LAB_140d20293:
      *(int *)(psStackX_8 + 8) = iVar5;
    }
    else {
      lVar7 = *(longlong *)(_DAT_142508c48 + (longlong)param_6 * 8);
      if ((*(int *)(lVar7 + 0x40) < 4) || ((*(byte *)(*(longlong *)(lVar7 + 0x38) + 3) & 2) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d20074;
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      uVar12 = (int)(short)uStackX_10 - 100;
      if (uVar12 < 0x21) {
                    /* WARNING: Switch is manually overridden */
        switch((&UNK_140d21540)[(int)uVar12]) {
        case 0:
          lVar7 = *(longlong *)(_DAT_142509190 + (longlong)param_4 * 8);
          if (*(int *)(lVar7 + 0x120) < 1) goto LAB_140d1fec7;
          pbVar8 = *(byte **)(lVar7 + 0x118);
          goto LAB_140d1fe55;
        case 1:
          lVar7 = _DAT_142509220;
          break;
        case 2:
          lVar7 = *(longlong *)(_DAT_142509238 + (longlong)param_4 * 8);
          if (0 < *(int *)(lVar7 + 0x130)) {
            pbVar8 = *(byte **)(lVar7 + 0x128);
            goto LAB_140d1fe55;
          }
          goto LAB_140d1fec7;
        case 3:
          lVar7 = _DAT_1425091d8;
          break;
        case 4:
          lVar7 = _DAT_1425091f0;
          break;
        case 5:
          *psStackX_8 = 0x3a;
          goto LAB_140d1fecb;
        case 6:
          goto override_jmp_140d1fe33_case_3;
        }
        lVar7 = *(longlong *)(lVar7 + (longlong)param_4 * 8);
        if (*(int *)(lVar7 + 0xf0) < 1) goto LAB_140d1fec7;
        pbVar8 = *(byte **)(lVar7 + 0xe8);
LAB_140d1fe55:
        if ((*pbVar8 & 1) == 0) goto LAB_140d1fec7;
        *psStackX_8 = 0x3a;
      }
      else {
override_jmp_140d1fe33_case_3:
LAB_140d1fec7:
        *psStackX_8 = 0;
      }
LAB_140d1fecb:
      uVar12 = (int)(short)uStackX_10 - 0x43;
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      if (uVar12 < 0x96) {
                    /* WARNING: Switch is manually overridden */
        switch((&UNK_140d215a0)[(int)uVar12]) {
        case 0:
          psStackX_8[8] = 9;
          psStackX_8[9] = 0;
          break;
        case 1:
          psStackX_8[8] = 3;
          psStackX_8[9] = 0;
          break;
        case 2:
          psStackX_8[8] = 4;
          psStackX_8[9] = 0;
          break;
        case 3:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142508ea8 + (longlong)param_4 * 8) + 0x100);
          break;
        case 4:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142509190 + (longlong)param_4 * 8) + 0x114);
          break;
        case 5:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142509220 + (longlong)param_4 * 8) + 0xe0);
          break;
        case 6:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142509238 + (longlong)param_4 * 8) + 0x120);
          break;
        case 7:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_1425091d8 + (longlong)param_4 * 8) + 0xe0);
          break;
        case 8:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_1425091f0 + (longlong)param_4 * 8) + 0xe0);
          break;
        case 9:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142509208 + (longlong)param_4 * 8) + 0xd4);
          break;
        case 10:
          psStackX_8[8] = 6;
          psStackX_8[9] = 0;
          break;
        case 0xb:
          psStackX_8[8] = 2;
          psStackX_8[9] = 0;
          break;
        case 0xc:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142508ec0 + (longlong)param_4 * 8) + 0xd4);
          break;
        case 0xd:
          *(undefined4 *)(psStackX_8 + 8) =
               *(undefined4 *)(*(longlong *)(_DAT_142508ef0 + (longlong)param_4 * 8) + 0x128);
          break;
        case 0xe:
          goto override_jmp_140d1fef9_case_3;
        }
      }
      else {
override_jmp_140d1fef9_case_3:
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
      }
      iVar5 = *(int *)(psStackX_8 + 8);
      if (*(int *)(psStackX_8 + 8) < 1) {
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
        iVar5 = 1;
      }
      if (*psStackX_8 == 0x3a) {
        iVar5 = iVar5 * 10000;
        psStackX_8[0x38] = 10000;
        psStackX_8[0x39] = 0;
        goto LAB_140d20293;
      }
      if (*psStackX_8 == 0) goto LAB_140d20285;
    }
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    if ((param_11 == (longlong *)0x0) || (cVar3 = (**(code **)(*param_11 + 0x228))(), cVar3 == '\0')
       ) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psVar6 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      psStackX_8 = psVar6;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
        *psStackX_8 = 0;
        psStackX_8[2] = 7;
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
        sVar4 = workshop_supplier_0xcd4c20();
        psStackX_8[10] = sVar4;
      }
      else {
        *puVar1 = psVar6;
        param_1[1] = param_1[1] + 8;
        *psVar6 = 0;
        psVar6[2] = 7;
        psVar6[8] = 1;
        psVar6[9] = 0;
        sVar4 = workshop_supplier_0xcd4c20();
        psVar6[10] = sVar4;
      }
    }
    break;
  case 2:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 0xe) = *(uint *)(psStackX_8 + 0xe) | 0x100000;
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 3;
    goto LAB_140d1eb20;
  case 3:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x1000000;
    *psStackX_8 = 3;
    psStackX_8[2] = param_5;
    goto LAB_140d1eb20;
  case 4:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      *(uint *)(psStackX_8 + 0xe) = *(uint *)(psStackX_8 + 0xe) | 0x100000;
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
      *(uint *)(psStackX_8 + 0xe) = *(uint *)(psStackX_8 + 0xe) | 0x100000;
    }
    goto LAB_140d212c2;
  case 5:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x1000000;
    psStackX_8[2] = param_5;
    goto LAB_140d212d2;
  case 6:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 4;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20(4,4);
    psVar6[10] = sVar4;
    goto LAB_140d20a99;
  case 7:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[0xc] = 0x1400;
    psStackX_8[0xd] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x58;
LAB_140d20a99:
    if ((param_11 == (longlong *)0x0) || (cVar3 = (**(code **)(*param_11 + 0x228))(), cVar3 == '\0')
       ) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0;
      psStackX_8[2] = 7;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      sVar4 = workshop_supplier_0xcd4c20();
      psStackX_8[10] = sVar4;
    }
    break;
  case 8:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 4;
    goto LAB_140d1eb20;
  case 9:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      sVar4 = 0x35;
    }
    else {
      *puVar1 = psStackX_8;
      sVar4 = 0x35;
      *plVar11 = *plVar11 + 8;
    }
    goto LAB_140d1eb0c;
  case 10:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 != (longlong *)param_1[2]) {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
      psStackX_8[6] = 1;
      psStackX_8[7] = 0;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 1;
      return;
    }
    goto LAB_140d2110e;
  case 0xb:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x12;
    psStackX_8[7] = 0x40;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x19;
    break;
  case 0xc:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      sVar4 = 0x32;
      psStackX_8[6] = 0x10;
      psStackX_8[7] = 0;
    }
    else {
      *puVar1 = psStackX_8;
      sVar4 = 0x32;
      param_1[1] = param_1[1] + 8;
      psStackX_8[6] = 0x10;
      psStackX_8[7] = 0;
    }
    goto LAB_140d1eb1c;
  case 0xd:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 0x36;
    psStackX_8[6] = 0x14;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x400;
    psStackX_8[7] = 0;
    *psStackX_8 = 0x1f;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20(0x1f,0x1f);
    psStackX_8[10] = sVar4;
    break;
  case 0xe:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = (short)param_6;
    *psStackX_8 = param_3;
    psStackX_8[1] = param_4;
    goto LAB_140d1eb20;
  case 0xf:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0x200;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x50;
    break;
  case 0x10:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    sVar4 = 0x36;
    psStackX_8[6] = 0x810;
    psStackX_8[7] = 0;
LAB_140d1eb0c:
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    goto LAB_140d1eb1c;
  case 0x11:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 0xe) = *(uint *)(psStackX_8 + 0xe) | 0x20000;
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 4;
    goto LAB_140d1eb20;
  case 0x12:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 2;
    goto LAB_140d1eb80;
  case 0x13:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 0x36;
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 8;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      sVar4 = 0x11;
    }
    else {
      *puVar1 = psStackX_8;
      sVar4 = 0x11;
      param_1[1] = param_1[1] + 8;
    }
    goto LAB_140d1ecbb;
  case 0x14:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x2010;
    psStackX_8[7] = 0x10;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x50;
    if (0 < (int)((int)param_5 - 1U)) {
      uVar14 = (ulonglong)((int)param_5 - 1U);
      do {
        psStackX_8 = (short *)FUN_14154de30(0xb0);
        psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
        plVar11 = (longlong *)param_1[1];
        if (plVar11 == (longlong *)param_1[2]) {
          FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
        }
        else {
          *plVar11 = (longlong)psStackX_8;
          param_1[1] = param_1[1] + 8;
        }
        psStackX_8[6] = 0x2010;
        psStackX_8[7] = 0;
        psStackX_8[8] = 1;
        psStackX_8[9] = 0;
        psStackX_8[10] = 0x50;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    break;
  case 0x15:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = param_5;
    *psStackX_8 = 0x39;
    psStackX_8[6] = 0x40;
    psStackX_8[7] = 0;
    if ((param_8 >> 0xc & 1) == 0) {
      if ((param_8 & 1) == 0) {
        if ((param_8 & 8) != 0) {
          psStackX_8[0xc] = -0x8000;
          psStackX_8[0xd] = 0;
        }
      }
      else {
        psStackX_8[0xc] = 0x4000;
        psStackX_8[0xd] = 0;
      }
    }
    else {
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = -0x8000;
    }
    if (param_9 != 0) {
      *(uint *)(psStackX_8 + 0xc) = *(uint *)(psStackX_8 + 0xc) | 4;
    }
    psStackX_8[8] = 15000;
    psStackX_8[9] = 0;
    psStackX_8[0x38] = 15000;
    psStackX_8[0x39] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x16:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
    psStackX_8[0xc] = 0;
    psStackX_8[0xd] = 0x208;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x15;
    break;
  case 0x17:
    if ((param_8 & 0x20) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)*plVar11;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        *plVar11 = *plVar11 + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x202;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    plVar11 = param_1 + 1;
    if ((param_8 & 0x40) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)*plVar11;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        *plVar11 = *plVar11 + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x204;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 >> 9 & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)*plVar11;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        *plVar11 = *plVar11 + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x600;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    plVar11 = param_1 + 1;
    if ((param_8 >> 10 & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)*plVar11;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        *plVar11 = *plVar11 + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x210;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    if ((param_8 >> 0xb & 1) != 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)*plVar11;
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        *plVar11 = *plVar11 + 8;
      }
      *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x220;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 0x15;
    }
    plVar9 = param_1 + 1;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar9;
    if (plVar11 != (longlong *)param_1[2]) {
      *plVar11 = (longlong)psStackX_8;
      *plVar9 = *plVar9 + 8;
      psStackX_8[6] = 1;
      psStackX_8[7] = 0;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      psStackX_8[10] = 1;
      return;
    }
LAB_140d2110e:
    FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    psStackX_8[6] = 1;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 1;
    break;
  case 0x18:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    *psStackX_8 = 5;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    if ((param_8 & 2) == 0) {
      psStackX_8 = (short *)FUN_14154de30(0xb0);
      psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      *psStackX_8 = 0x42;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      sVar4 = workshop_supplier_0xcd4c20();
      psStackX_8[10] = sVar4;
    }
    break;
  case 0x19:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    *psStackX_8 = 4;
    psStackX_8[2] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    psStackX_8[0xc] = 0x800;
    psStackX_8[0xd] = 0;
    psStackX_8[0xe] = 0x40;
    psStackX_8[0xf] = 0;
    break;
  case 0x1a:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x400;
    psStackX_8[7] = 0;
    *psStackX_8 = 0x10;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x1b:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 0xe) = *(uint *)(psStackX_8 + 0xe) | 0x20000;
LAB_140d212c2:
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
LAB_140d212d2:
    *psStackX_8 = 1;
    uVar12 = 1;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 1;
    psStackX_8[7] = 0;
    if ((param_9 >> 10 & 1) != 0) {
      uVar12 = 0x8000001;
      psStackX_8[6] = 1;
      psStackX_8[7] = 0x800;
    }
    if ((param_9 & 4) != 0) {
      uVar12 = uVar12 | 0x60000000;
      *(uint *)(psStackX_8 + 6) = uVar12;
    }
    if ((param_9 & 0x40) != 0) {
      *(uint *)(psStackX_8 + 6) = uVar12 | 0x10000000;
    }
    psStackX_8[10] = 1;
    goto LAB_140d21364;
  case 0x1c:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      psStackX_8[6] = 0x4010;
      psStackX_8[7] = 0;
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
      psStackX_8[6] = 0x4010;
      psStackX_8[7] = 0;
    }
LAB_140d1eb80:
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 0x36;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    goto LAB_140d1ebac;
  case 0x1d:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = -0x7ff0;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x18;
    goto LAB_140d1ebac;
  case 0x1e:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 1;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x18;
LAB_140d1ebac:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    *psStackX_8 = 0xb;
    psStackX_8[6] = 0x400;
    psStackX_8[7] = 0x100;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x1f:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0;
    psStackX_8[7] = 0x20;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x18;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x1f;
    break;
  case 0x20:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      *psStackX_8 = 5;
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
      *psStackX_8 = 5;
    }
    goto LAB_140d1eb20;
  case 0x21:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = 9;
    *psStackX_8 = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    sVar4 = 0x12;
LAB_140d1ecbb:
    *psStackX_8 = sVar4;
    psStackX_8[6] = 0x400;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x22:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)param_1[1];
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0;
    psStackX_8[7] = -0x8000;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x33;
    break;
  case 0x23:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[2] = 8;
    *psStackX_8 = 0;
    goto LAB_140d1eb20;
  case 0x24:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = 9;
    *psStackX_8 = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x25:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *psStackX_8 = 0x39;
    psStackX_8[6] = 0x40;
    psStackX_8[7] = 0;
    psStackX_8[0xc] = 2;
    psStackX_8[0xd] = 0;
    *(int *)(psStackX_8 + 0x4c) = param_13;
    psStackX_8[8] = 15000;
    psStackX_8[9] = 0;
    psStackX_8[0x38] = 15000;
    psStackX_8[0x39] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 == (longlong *)param_1[2]) {
LAB_140d20601:
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    goto LAB_140d20611;
  case 0x26:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *psStackX_8 = 0x3a;
    psStackX_8[0xc] = 2;
    psStackX_8[0xd] = 0;
    *(int *)(psStackX_8 + 0x4c) = param_13;
    psStackX_8[8] = 10000;
    psStackX_8[9] = 0;
    psStackX_8[0x38] = 10000;
    psStackX_8[0x39] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20(0x3a,0x3a);
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 == (longlong *)param_1[2]) goto LAB_140d20601;
    *plVar11 = (longlong)psStackX_8;
    param_1[1] = param_1[1] + 8;
LAB_140d20611:
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0;
    if (param_13 == -1) {
      param_14 = param_10;
    }
    psStackX_8[0xc] = 1;
    psStackX_8[0xd] = 0;
    *(undefined4 *)(psStackX_8 + 0x4c) = param_14;
    psStackX_8[10] = 0x50;
    goto LAB_140d21364;
  case 0x27:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar9 = (longlong *)*plVar11;
    if (plVar9 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar9,&psStackX_8);
    }
    else {
      *plVar9 = (longlong)psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 1;
    psStackX_8[6] = 0x400;
    psStackX_8[7] = 0;
    psStackX_8[0xc] = 8;
    psStackX_8[0xd] = 0;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if ((param_8 & 0x10) == 0) {
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      psStackX_8[2] = param_5;
      *(int *)(psStackX_8 + 4) = param_6;
      *psStackX_8 = 0x3a;
      if ((param_8 & 4) != 0) {
        psStackX_8[0xc] = 0x4000;
        psStackX_8[0xd] = 0;
      }
      if ((param_8 & 8) != 0) {
        psStackX_8[0xc] = -0x8000;
        psStackX_8[0xd] = 0;
      }
      if ((param_8 >> 0xc & 1) != 0) {
        psStackX_8[0xc] = 0;
        psStackX_8[0xd] = -0x8000;
      }
      if (DAT_14214e22c != '\0') {
        *(uint *)(psStackX_8 + 0xc) = *(uint *)(psStackX_8 + 0xc) | 4;
      }
      psStackX_8[8] = 10000;
      psStackX_8[9] = 0;
      psStackX_8[0x38] = 10000;
      psStackX_8[0x39] = 0;
      sVar4 = workshop_supplier_0xcd4c20(0x3a,0x3a);
      psStackX_8[10] = sVar4;
    }
    else {
      if (puVar1 == (undefined8 *)param_1[2]) {
        FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      }
      else {
        *puVar1 = psStackX_8;
        param_1[1] = param_1[1] + 8;
      }
      *psStackX_8 = 0x37;
      *(int *)(psStackX_8 + 4) = param_6;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      sVar4 = workshop_supplier_0xcd4c20();
      psStackX_8[10] = sVar4;
    }
    break;
  case 0x28:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[2] = param_5;
    *(int *)(psStackX_8 + 4) = param_6;
    *psStackX_8 = 0x14;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    *psStackX_8 = 0x43;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psVar6 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    psStackX_8 = psVar6;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      *psStackX_8 = 10;
      psStackX_8[8] = 1;
      psStackX_8[9] = 0;
      sVar4 = workshop_supplier_0xcd4c20();
      psStackX_8[10] = sVar4;
    }
    else {
      *puVar1 = psVar6;
      param_1[1] = param_1[1] + 8;
      *psVar6 = 10;
      psVar6[8] = 1;
      psVar6[9] = 0;
      sVar4 = workshop_supplier_0xcd4c20();
      psVar6[10] = sVar4;
    }
    break;
  case 0x29:
    puVar17 = param_7;
    if (0xf < (ulonglong)param_7[3]) {
      puVar17 = (undefined8 *)*param_7;
    }
    uVar13 = 0;
    lVar7 = param_7[2];
    uVar14 = uVar13;
    puVar15 = _DAT_1425135e8;
    if (_DAT_1425135f0 - (longlong)_DAT_1425135e8 >> 3 == 0) {
      return;
    }
    while( true ) {
      plVar11 = (longlong *)*puVar15;
      plVar9 = plVar11;
      if (0xf < (ulonglong)plVar11[3]) {
        plVar9 = (longlong *)*plVar11;
      }
      if ((lVar7 == plVar11[2]) &&
         (iVar5 = workshop_supplier_0x154f5b4(puVar17,plVar9,lVar7), iVar5 == 0)) break;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      puVar15 = puVar15 + 1;
      if ((ulonglong)(_DAT_1425135f0 - (longlong)puVar1 >> 3) <= (ulonglong)(longlong)(int)uVar12) {
        return;
      }
    }
    lVar7 = puVar1[(int)uVar14];
    if (lVar7 == 0) {
      return;
    }
    lVar10 = *(longlong *)(lVar7 + 0x50);
    uVar14 = uVar13;
    if (*(longlong *)(lVar7 + 0x58) - lVar10 >> 3 != 0) {
      do {
        plVar11 = *(longlong **)(uVar14 + lVar10);
        if ((*(byte *)((longlong)plVar11 + 0x2c) & 2) == 0) {
          (**(code **)(*plVar11 + 0x20))(plVar11,param_1,uVar13,*(undefined4 *)(lVar7 + 0x118));
        }
        lVar10 = *(longlong *)(lVar7 + 0x50);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar14 = uVar14 + 8;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(lVar7 + 0x58) - lVar10 >> 3));
    }
    if ((param_11 != (longlong *)0x0) && (cVar3 = (**(code **)(*param_11 + 0x228))(), cVar3 != '\0')
       ) {
      return;
    }
    if (*(int *)(lVar7 + 0x48) < 1) {
      return;
    }
    if ((**(byte **)(lVar7 + 0x40) & 1) == 0) {
      return;
    }
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      *psStackX_8 = 0;
      psStackX_8[2] = 7;
    }
    else {
      *puVar1 = psStackX_8;
      param_1[1] = param_1[1] + 8;
      *psStackX_8 = 0;
      psStackX_8[2] = 7;
    }
    goto LAB_140d1eb20;
  case 0x2a:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
      sVar4 = 0x57;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x2000;
    }
    else {
      *puVar1 = psStackX_8;
      sVar4 = 0x57;
      *plVar11 = *plVar11 + 8;
      psStackX_8[0xc] = 0;
      psStackX_8[0xd] = 0x2000;
    }
LAB_140d1eb1c:
    *psStackX_8 = sVar4;
LAB_140d1eb20:
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    sVar4 = workshop_supplier_0xcd4c20();
    psStackX_8[10] = sVar4;
    break;
  case 0x2b:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar9 = (longlong *)*plVar11;
    if (plVar9 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar9,&psStackX_8);
    }
    else {
      *plVar9 = (longlong)psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *(uint *)(psStackX_8 + 6) = *(uint *)(psStackX_8 + 6) | 0x10;
    psStackX_8[0xc] = 0;
    psStackX_8[0xd] = 0x4200;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x15;
    break;
  case 0x2c:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar9 = (longlong *)*plVar11;
    if (plVar9 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar9,&psStackX_8);
    }
    else {
      *plVar9 = (longlong)psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    psStackX_8[0xc] = 1;
    psStackX_8[0xd] = 0;
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[10] = 0x50;
    *(int *)(psStackX_8 + 0x4c) = param_13;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    *(undefined4 *)(psStackX_8 + 0x4c) = param_14;
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0;
    psStackX_8[0xc] = 1;
    psStackX_8[0xd] = 0;
    psStackX_8[10] = 0x50;
    goto LAB_140d21364;
  case 0x2d:
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    puVar1 = (undefined8 *)*plVar11;
    if (puVar1 == (undefined8 *)param_1[2]) {
      FUN_1400bc2f0(param_1,puVar1,&psStackX_8);
    }
    else {
      *puVar1 = psStackX_8;
      *plVar11 = *plVar11 + 8;
    }
    *psStackX_8 = 0x37;
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
    psStackX_8[0xc] = 2;
    psStackX_8[0xd] = 0;
    *(int *)(psStackX_8 + 0x4c) = param_13;
    psVar6 = psStackX_8;
    sVar4 = workshop_supplier_0xcd4c20();
    psVar6[10] = sVar4;
    psStackX_8 = (short *)FUN_14154de30(0xb0);
    psStackX_8 = (short *)workshop_supplier_0xa7e080(psStackX_8);
    plVar11 = (longlong *)*plVar11;
    if (plVar11 == (longlong *)param_1[2]) {
      FUN_1400bc2f0(param_1,plVar11,&psStackX_8);
    }
    else {
      *plVar11 = (longlong)psStackX_8;
      param_1[1] = param_1[1] + 8;
    }
    psStackX_8[6] = 0x10;
    psStackX_8[7] = 0;
    if (param_13 == -1) {
      param_14 = param_10;
    }
    *(undefined4 *)(psStackX_8 + 0x4c) = param_14;
    psStackX_8[0xc] = 1;
    psStackX_8[0xd] = 0;
    psStackX_8[10] = 0x50;
LAB_140d21364:
    psStackX_8[8] = 1;
    psStackX_8[9] = 0;
  }
  return;
}


/* classic PE:6aea11a5:0272d000; job-item-requirement; RVA 0xa41e70..0xa435f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_job_item_requirement(ushort *param_1,undefined8 *param_2,short param_3)

{
  ushort uVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  uint uVar19;
  undefined8 uVar20;
  bool bVar21;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  short sStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418b8040 ^ (ulonglong)auStack_f8;
  param_2[2] = 0;
  puVar13 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar13 = 0;
  sStack_88 = param_3;
  if (1 < param_3) {
    uVar19 = (uint)param_3;
    if (*param_1 < 0x5b) {
                    /* WARNING: Switch is manually overridden */
      switch((&UNK_140a43608)[(short)*param_1]) {
      case 0:
        if (0x95 < uVar19) {
          uVar19 = uVar19 / 0x96;
        }
        break;
      case 1:
        if (14999 < uVar19) {
          uVar19 = uVar19 / 15000;
        }
        break;
      case 2:
        if (9999 < uVar19) {
          uVar19 = uVar19 / 10000;
        }
      }
    }
    if ((int)uVar19 < 1) {
      uVar19 = 1;
    }
    FUN_140542fb0(uVar19,param_2);
    FUN_1400bb140(param_2,0x20);
  }
  iVar6 = *(int *)(param_1 + 0x44);
  if (1 < iVar6) {
    uVar1 = *param_1;
    if (uVar1 == 0x39) {
      bVar21 = iVar6 == 15000;
LAB_140a41f8e:
      if (!bVar21) goto LAB_140a41fa5;
    }
    else {
      if (uVar1 == 0x3a) {
        bVar21 = iVar6 == 10000;
        goto LAB_140a41f8e;
      }
      if ((uVar1 != 0x5a) || (iVar6 != 10000)) goto LAB_140a41fa5;
    }
    FUN_140070fd0(param_2,"unused ",7);
  }
LAB_140a41fa5:
  if ((param_1[6] & 1) != 0) {
    FUN_140070fd0(param_2,"improvable ",0xb);
  }
  if ((param_1[6] & 2) != 0) {
    FUN_140070fd0(param_2,"butcherable ",0xc);
  }
  if ((param_1[6] & 4) != 0) {
    FUN_140070fd0(param_2,"millable ",9);
  }
  if ((param_1[6] & 8) != 0) {
    FUN_140070fd0(param_2,"possibly buriable ",0x12);
  }
  if ((param_1[6] & 0x10) != 0) {
    FUN_140070fd0(param_2,"unrotten ",9);
  }
  if ((param_1[6] & 0x20) != 0) {
    FUN_140070fd0(param_2,"undisturbed ",0xc);
  }
  cVar5 = (char)*(uint *)(param_1 + 6);
  if ((*(uint *)(param_1 + 6) & 0x40) != 0) {
    FUN_140070fd0(param_2,"collected ",10);
    cVar5 = (char)*(undefined4 *)(param_1 + 6);
  }
  if ((*(int *)(param_1 + 4) == -1) && (cVar5 < '\0')) {
    FUN_140070fd0(param_2,"sharpenable ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x100) != 0) {
    FUN_140070fd0(param_2,"murdered ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x400) != 0) {
    FUN_140070fd0(param_2,"empty ",6);
  }
  if ((*(uint *)(param_1 + 6) & 0x800) != 0) {
    FUN_140070fd0(param_2,"processable ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x2000) != 0) {
    FUN_140070fd0(param_2,"cookable ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x100000) != 0) {
    FUN_140070fd0(param_2,"solid ",6);
  }
  if ((*(uint *)(param_1 + 6) & 0x4000) != 0) {
    FUN_140070fd0(param_2,"extract-bearing plant ",0x16);
  }
  if ((*(uint *)(param_1 + 6) & 0x8000) != 0) {
    FUN_140070fd0(param_2,"extract-bearing fish ",0x15);
  }
  if ((*(uint *)(param_1 + 6) & 0x10000) != 0) {
    FUN_140070fd0(param_2,"extract-bearing small creature ",0x1f);
  }
  if ((*(uint *)(param_1 + 6) & 0x20000) != 0) {
    FUN_140070fd0(param_2,"processable (to vial) ",0x16);
  }
  if ((*(uint *)(param_1 + 6) & 0x80000) != 0) {
    FUN_140070fd0(param_2,"processable (to barrel) ",0x18);
  }
  if ((*(uint *)(param_1 + 6) & 0x200000) != 0) {
    FUN_140070fd0(param_2,"tameable small creature ",0x18);
  }
  if ((*(uint *)(param_1 + 6) & 0x400000) != 0) {
    FUN_140070fd0(param_2,"nearby ",7);
  }
  if ((*(uint *)(param_1 + 6) & 0x800000) != 0) {
    FUN_140070fd0(param_2,"sand-bearing ",0xd);
  }
  if ((*(uint *)(param_1 + 6) & 0x1000000) != 0) {
    FUN_140070fd0(param_2,"glass ",6);
  }
  if (*(int *)(param_1 + 6) < 0) {
    FUN_140070fd0(param_2,"lye-bearing ",0xc);
  }
  if ((*(uint *)(param_1 + 6) & 0x2000000) != 0) {
    FUN_140070fd0(param_2,"milk ",5);
  }
  if ((*(uint *)(param_1 + 6) & 0x4000000) != 0) {
    FUN_140070fd0(param_2,"milkable ",9);
  }
  if ((*(uint *)(param_1 + 6) & 0x8000000) != 0) {
    FUN_140070fd0(param_2,"finished good ",0xe);
  }
  if ((*(uint *)(param_1 + 6) & 0x10000000) != 0) {
    FUN_140070fd0(param_2,"ammo ",5);
  }
  if ((*(uint *)(param_1 + 6) & 0x20000000) != 0) {
    FUN_140070fd0(param_2,"furniture ",10);
  }
  if ((param_1[0xe] & 1) != 0) {
    iVar6 = *(int *)(param_1 + 0x56);
    if ((-1 < iVar6) && (iVar6 < (int)(_DAT_142513440 - _DAT_142513438 >> 3))) {
      lVar7 = *(longlong *)(_DAT_142513438 + (longlong)iVar6 * 8);
      puVar13 = (undefined8 *)(lVar7 + 0x50);
      if (0xf < *(ulonglong *)(lVar7 + 0x68)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_140070fd0(param_2,puVar13,*(undefined8 *)(lVar7 + 0x60));
      FUN_140070fd0(param_2," ",1);
    }
    FUN_140070fd0(param_2,"dye ",4);
  }
  if ((param_1[0xe] & 2) != 0) {
    FUN_140070fd0(param_2,"dyeable ",8);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x80000) != 0) {
    FUN_140070fd0(param_2,"totemable ",10);
  }
  if ((param_1[0xe] & 0x10) != 0) {
    FUN_140070fd0(param_2,"glass-making ",0xd);
  }
  if ((param_1[0xe] & 4) != 0) {
    FUN_140070fd0(param_2,"dyed ",5);
  }
  uVar19 = *(uint *)(param_1 + 0xe);
  if ((uVar19 >> 10 & 1) != 0) {
    FUN_140070fd0(param_2,"melt-designated ",0x10);
    uVar19 = *(uint *)(param_1 + 0xe);
  }
  if ((*(int *)(param_1 + 4) == -1) && ((uVar19 >> 9 & 1) != 0)) {
    FUN_140070fd0(param_2,"deep material ",0xe);
  }
  if ((param_1[0xe] & 8) != 0) {
    FUN_140070fd0(param_2,"sewn-imageless ",0xf);
  }
  if ((param_1[0xe] & 0x20) != 0) {
    FUN_140070fd0(param_2,"screw ",6);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((param_1[0xe] & 0x80) != 0) {
      FUN_140070fd0(param_2,"fire-safe ",10);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x100) != 0) {
      FUN_140070fd0(param_2,"magma-safe ",0xb);
    }
    if ((param_1[0xe] & 0x40) != 0) {
      FUN_140070fd0(param_2,"building material ",0x12);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x800) != 0) {
      FUN_140070fd0(param_2,"non-economic ",0xd);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x4000) != 0) {
      FUN_140070fd0(param_2,"plant ",6);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x8000) != 0) {
      FUN_140070fd0(param_2,"silk ",5);
    }
    if (*(int *)(param_1 + 0xe) < 0) {
      FUN_140070fd0(param_2,"yarn ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x10000) != 0) {
      FUN_140070fd0(param_2,"leather ",8);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x20000) != 0) {
      FUN_140070fd0(param_2,"bone ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x40000000) != 0) {
      FUN_140070fd0(param_2,"hair/wool ",10);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x40000) != 0) {
      FUN_140070fd0(param_2,"shell ",6);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x100000) != 0) {
      FUN_140070fd0(param_2,"horn ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x200000) != 0) {
      FUN_140070fd0(param_2,"pearl ",6);
    }
  }
  if ((*(uint *)(param_1 + 0xe) & 0x400000) != 0) {
    FUN_140070fd0(param_2,"plaster-containing ",0x13);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((*(uint *)(param_1 + 0xe) & 0x1000000) != 0) {
      FUN_140070fd0(param_2,"soap ",5);
    }
    if ((*(uint *)(param_1 + 0xe) & 0x4000000) != 0) {
      FUN_140070fd0(param_2,"ivory/tooth ",0xc);
    }
  }
  if ((*(uint *)(param_1 + 0xe) & 0x8000000) != 0) {
    FUN_140070fd0(param_2,"lye/milk-free ",0xe);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x10000000) != 0) {
    FUN_140070fd0(param_2,"blunt ",6);
  }
  if ((*(uint *)(param_1 + 0xe) & 0x20000000) != 0) {
    FUN_140070fd0(param_2,"unengraved ",0xb);
  }
  if ((param_1[0x12] & 1) != 0) {
    FUN_140070fd0(param_2,"unimproved ",0xb);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x800) != 0) {
    FUN_140070fd0(param_2,"written-on ",0xb);
  }
  if ((param_1[0x12] & 4) != 0) {
    FUN_140070fd0(param_2,"non-absorbent ",0xe);
  }
  if ((param_1[0x12] & 0x80) != 0) {
    FUN_140070fd0(param_2,"food storage ",0xd);
  }
  if ((param_1[0x12] & 8) != 0) {
    FUN_140070fd0(param_2,"non-pressed ",0xc);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if ((*(uint *)(param_1 + 0x12) & 0x80000) != 0) {
      FUN_140070fd0(param_2,"woven ",6);
    }
    if ((param_1[0x12] & 0x40) != 0) {
      FUN_140070fd0(param_2,"hard ",5);
    }
    if ((*(uint *)(param_1 + 0x12) & 0x100) != 0) {
      FUN_140070fd0(param_2,"metal ",6);
    }
    if ((*(uint *)(param_1 + 0x12) & 0x200) != 0) {
      FUN_140070fd0(param_2,"sand ",5);
    }
  }
  if ((*(uint *)(param_1 + 0x12) & 0x1000) != 0) {
    FUN_140070fd0(param_2,"edged ",6);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x2000) != 0) {
    FUN_140070fd0(param_2,"on-ground ",10);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x4000) != 0) {
    FUN_140070fd0(param_2,"divine ",7);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x8000) != 0) {
    FUN_140070fd0(param_2,"artifact ",9);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x40000) != 0) {
    FUN_140070fd0(param_2,"non-artifact ",0xd);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x10000) != 0) {
    FUN_140070fd0(param_2,"wooden ",7);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x20000) != 0) {
    FUN_140070fd0(param_2,"stone ",6);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x100000) != 0) {
    FUN_140070fd0(param_2,"gem ",4);
  }
  if ((*(uint *)(param_1 + 0x12) & 0x400000) != 0) {
    FUN_140070fd0(param_2,"grown ",6);
  }
  if (*(int *)(param_1 + 4) == -1) {
    if (*(int *)(param_1 + 0x40) != -1) {
      uStack_58 = 0;
      uStack_48 = 0xf;
      lStack_50 = 0;
      pppuStack_60 = (undefined8 ****)0x0;
      lVar7 = workshop_material_record_lookup(0x1423ed870,0);
      if (lVar7 == 0) {
        pcVar15 = "unknown material";
        uVar20 = 0x10;
      }
      else {
        if (*(longlong *)(lVar7 + 0x530) != 0) {
          plVar14 = (longlong *)(lVar7 + 0x520);
          if (0xf < *(ulonglong *)(lVar7 + 0x538)) {
            plVar14 = (longlong *)*plVar14;
          }
          FUN_140070fd0(&pppuStack_60,plVar14,*(undefined8 *)(lVar7 + 0x530));
          FUN_140070fd0(&pppuStack_60," ",1);
        }
        pcVar15 = (char *)(lVar7 + 0xb8);
        uVar20 = *(undefined8 *)(lVar7 + 200);
        if (0xf < *(ulonglong *)(lVar7 + 0xd0)) {
          pcVar15 = *(char **)pcVar15;
        }
      }
      FUN_140070fd0(&pppuStack_60,pcVar15,uVar20);
      lVar7 = lStack_50;
      if (0x7fffffffffffffffU - lStack_50 < 9) {
                    /* WARNING: Subroutine does not return */
        workshop_string_length_error();
      }
      ppppuVar10 = &pppuStack_60;
      if (0xf < uStack_48) {
        ppppuVar10 = (undefined8 ****)pppuStack_60;
      }
      pppuStack_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      uVar16 = lStack_50 + 9;
      uVar17 = 0xf;
      ppppuVar8 = &pppuStack_80;
      if (0xf < uVar16) {
        uVar17 = uVar16 | 0xf;
        if (uVar17 < 0x8000000000000000) {
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
        }
        else {
          uVar17 = 0x7fffffffffffffff;
        }
        ppppuVar8 = (undefined8 ****)FUN_140071d90(uVar17 + 1);
        pppuStack_80 = ppppuVar8;
      }
      uStack_70 = uVar16;
      uStack_68 = uVar17;
      workshop_supplier_0x154f29e(ppppuVar8,ppppuVar10,lVar7);
      *(undefined8 *)((longlong)ppppuVar8 + lVar7) = 0x676e69726165622d;
      *(undefined1 *)((longlong)ppppuVar8 + lVar7 + 8) = 0x20;
      *(undefined1 *)((longlong)ppppuVar8 + uVar16) = 0;
      ppppuVar10 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar10 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar10,uStack_70);
      if (0xf < uStack_68) {
        uVar16 = uStack_68 + 1;
        ppppuVar10 = (undefined8 ****)pppuStack_80;
        if (0xfff < uVar16) {
          uVar16 = uStack_68 + 0x28;
          ppppuVar10 = (undefined8 ****)pppuStack_80[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar10))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        workshop_supplier_0x154de20(ppppuVar10,uVar16);
      }
      if (0xf < uStack_48) {
        uVar16 = uStack_48 + 1;
        ppppuVar10 = (undefined8 ****)pppuStack_60;
        if (0xfff < uVar16) {
          uVar16 = uStack_48 + 0x28;
          ppppuVar10 = (undefined8 ****)pppuStack_60[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar10))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        workshop_supplier_0x154de20(ppppuVar10,uVar16);
      }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      puVar12 = param_1 + 0x20;
      lVar7 = *(longlong *)(param_1 + 0x28);
      uVar16 = *(ulonglong *)(param_1 + 0x2c);
      puVar11 = puVar12;
      if (0xf < uVar16) {
        puVar11 = *(ushort **)puVar12;
      }
      if ((lVar7 == 0x11) &&
         (iVar6 = workshop_supplier_0x154f5b4(puVar11,"CALCIUM_CARBONATE",0x11), iVar6 == 0)) {
        FUN_140070fd0(param_2,"calcite/limestone/chalk/marble ",0x1f);
      }
      else {
        if (0xf < uVar16) {
          puVar12 = *(ushort **)puVar12;
        }
        if ((lVar7 == 9) && (iVar6 = workshop_supplier_0x154f5b4(puVar12,"CAN_GLAZE",9), iVar6 == 0)
           ) {
          FUN_140070fd0(param_2,"glazable ",9);
        }
        else {
          puVar12 = param_1 + 0x20;
          lVar7 = *(longlong *)(param_1 + 0x28);
          uVar16 = *(ulonglong *)(param_1 + 0x2c);
          if (0xf < uVar16) {
            puVar12 = *(ushort **)puVar12;
          }
          if ((lVar7 == 3) && (iVar6 = workshop_supplier_0x154f5b4(puVar12,"FAT",3), iVar6 == 0)) {
            FUN_140070fd0(param_2,"fat ",4);
          }
          else {
            puVar12 = param_1 + 0x20;
            if (0xf < uVar16) {
              puVar12 = *(ushort **)puVar12;
            }
            if ((lVar7 == 4) && (iVar6 = workshop_supplier_0x154f5b4(puVar12,"FLUX",4), iVar6 == 0))
            {
              FUN_140070fd0(param_2,"flux ",5);
            }
            else {
              puVar12 = param_1 + 0x20;
              lVar7 = *(longlong *)(param_1 + 0x28);
              uVar16 = *(ulonglong *)(param_1 + 0x2c);
              if (0xf < uVar16) {
                puVar12 = *(ushort **)puVar12;
              }
              if ((lVar7 == 6) &&
                 (iVar6 = workshop_supplier_0x154f5b4(puVar12,"GYPSUM",6), iVar6 == 0)) {
                FUN_140070fd0(param_2,"gypsum ",7);
              }
              else {
                puVar12 = param_1 + 0x20;
                if (0xf < uVar16) {
                  puVar12 = *(ushort **)puVar12;
                }
                if ((lVar7 == 0xb) &&
                   (iVar6 = workshop_supplier_0x154f5b4(puVar12,"PAPER_PLANT",0xb), iVar6 == 0)) {
                  FUN_140070fd0(param_2,"paper-making ",0xd);
                }
                else {
                  puVar12 = param_1 + 0x20;
                  lVar7 = *(longlong *)(param_1 + 0x28);
                  uVar16 = *(ulonglong *)(param_1 + 0x2c);
                  if (0xf < uVar16) {
                    puVar12 = *(ushort **)puVar12;
                  }
                  if ((lVar7 == 0xc) &&
                     (iVar6 = workshop_supplier_0x154f5b4(puVar12,"PAPER_SLURRY",0xc), iVar6 == 0))
                  {
                    FUN_140070fd0(param_2,"paper-slurry ",0xd);
                  }
                  else {
                    puVar12 = param_1 + 0x20;
                    if (0xf < uVar16) {
                      puVar12 = *(ushort **)puVar12;
                    }
                    if ((lVar7 == 6) &&
                       (iVar6 = workshop_supplier_0x154f5b4(puVar12,"TALLOW",6), iVar6 == 0)) {
                      FUN_140070fd0(param_2,"tallow ",7);
                    }
                    else {
                      puVar12 = param_1 + 0x20;
                      if (0xf < *(ulonglong *)(param_1 + 0x2c)) {
                        puVar12 = *(ushort **)puVar12;
                      }
                      if ((*(longlong *)(param_1 + 0x28) == 3) &&
                         (iVar6 = workshop_supplier_0x154f5b4(puVar12,"WAX"), iVar6 == 0)) {
                        FUN_140070fd0(param_2,"wax ",4);
                      }
                      else {
                        puVar9 = (undefined8 *)
                                 workshop_string_with_appended_character(&pppuStack_80,param_1 + 0x20,0x20);
                        puVar13 = puVar9 + 2;
                        if (0xf < (ulonglong)puVar9[3]) {
                          puVar9 = (undefined8 *)*puVar9;
                        }
                        FUN_140070fd0(param_2,puVar9,*puVar13);
                        FUN_140070e10(&pppuStack_80);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      puVar12 = param_1 + 0x30;
      lVar7 = *(longlong *)(param_1 + 0x38);
      uVar16 = *(ulonglong *)(param_1 + 0x3c);
      puVar11 = puVar12;
      if (0xf < uVar16) {
        puVar11 = *(ushort **)puVar12;
      }
      if ((lVar7 == 8) && (iVar6 = workshop_supplier_0x154f5b4(puVar11,"BAG_ITEM",8), iVar6 == 0)) {
        FUN_140070fd0(param_2,"bag-processable ",0x10);
      }
      else {
        if (0xf < uVar16) {
          puVar12 = *(ushort **)puVar12;
        }
        if ((lVar7 == 9) && (iVar6 = workshop_supplier_0x154f5b4(puVar12,"DRINK_MAT",9), iVar6 == 0)
           ) {
          FUN_140070fd0(param_2,"fermentable ",0xc);
        }
        else {
          puVar12 = param_1 + 0x30;
          lVar7 = *(longlong *)(param_1 + 0x38);
          uVar16 = *(ulonglong *)(param_1 + 0x3c);
          if (0xf < uVar16) {
            puVar12 = *(ushort **)puVar12;
          }
          if ((lVar7 == 9) &&
             (iVar6 = workshop_supplier_0x154f5b4(puVar12,"FIRED_MAT",9), iVar6 == 0)) {
            FUN_140070fd0(param_2,"clay ",5);
          }
          else {
            puVar12 = param_1 + 0x30;
            if (0xf < uVar16) {
              puVar12 = *(ushort **)puVar12;
            }
            if ((lVar7 == 9) &&
               (iVar6 = workshop_supplier_0x154f5b4(puVar12,"GLAZE_MAT",9), iVar6 == 0)) {
              FUN_140070fd0(param_2,"glaze ",6);
            }
            else {
              puVar12 = param_1 + 0x30;
              lVar7 = *(longlong *)(param_1 + 0x38);
              uVar16 = *(ulonglong *)(param_1 + 0x3c);
              if (0xf < uVar16) {
                puVar12 = *(ushort **)puVar12;
              }
              if ((lVar7 == 0x13) &&
                 (iVar6 = workshop_supplier_0x154f5b4(puVar12,"HONEYCOMB_PRESS_MAT",0x13),
                 iVar6 == 0)) {
                FUN_140070fd0(param_2,"honey-bearing ",0xe);
              }
              else {
                puVar12 = param_1 + 0x30;
                if (0xf < uVar16) {
                  puVar12 = *(ushort **)puVar12;
                }
                if ((lVar7 == 0xd) &&
                   (iVar6 = workshop_supplier_0x154f5b4(puVar12,"PARCHMENT_MAT",0xd), iVar6 == 0)) {
                  FUN_140070fd0(param_2,"parchment-producing ",0x14);
                }
                else {
                  puVar12 = param_1 + 0x30;
                  lVar7 = *(longlong *)(param_1 + 0x38);
                  uVar16 = *(ulonglong *)(param_1 + 0x3c);
                  if (0xf < uVar16) {
                    puVar12 = *(ushort **)puVar12;
                  }
                  if ((lVar7 == 0x10) &&
                     (iVar6 = workshop_supplier_0x154f5b4(puVar12,"PRESS_LIQUID_MAT",0x10),
                     iVar6 == 0)) {
                    FUN_140070fd0(param_2,"oil-bearing ",0xc);
                  }
                  else {
                    puVar12 = param_1 + 0x30;
                    if (0xf < uVar16) {
                      puVar12 = *(ushort **)puVar12;
                    }
                    if ((lVar7 == 0xf) &&
                       (iVar6 = workshop_supplier_0x154f5b4(puVar12,"PRESS_PAPER_MAT",0xf),
                       iVar6 == 0)) {
                      FUN_140070fd0(param_2,"paper-slurryable ",0x11);
                    }
                    else {
                      puVar12 = param_1 + 0x30;
                      lVar7 = *(longlong *)(param_1 + 0x38);
                      uVar16 = *(ulonglong *)(param_1 + 0x3c);
                      if (0xf < uVar16) {
                        puVar12 = *(ushort **)puVar12;
                      }
                      if ((lVar7 == 10) &&
                         (iVar6 = workshop_supplier_0x154f5b4(puVar12,"RENDER_MAT",10), iVar6 == 0))
                      {
                        FUN_140070fd0(param_2,"renderable ",0xb);
                      }
                      else {
                        puVar12 = param_1 + 0x30;
                        if (0xf < uVar16) {
                          puVar12 = *(ushort **)puVar12;
                        }
                        if ((lVar7 == 8) &&
                           (iVar6 = workshop_supplier_0x154f5b4(puVar12,"SOAP_MAT",8), iVar6 == 0))
                        {
                          FUN_140070fd0(param_2,"fatty ",6);
                        }
                        else {
                          puVar12 = param_1 + 0x30;
                          lVar7 = *(longlong *)(param_1 + 0x38);
                          uVar16 = *(ulonglong *)(param_1 + 0x3c);
                          if (0xf < uVar16) {
                            puVar12 = *(ushort **)puVar12;
                          }
                          if ((lVar7 == 7) &&
                             (iVar6 = workshop_supplier_0x154f5b4(puVar12,"TAN_MAT",7), iVar6 == 0))
                          {
                            FUN_140070fd0(param_2,"tannable ",9);
                          }
                          else {
                            puVar12 = param_1 + 0x30;
                            if (0x7fffffffffffffffU - lVar7 < 0xb) {
                    /* WARNING: Subroutine does not return */
                              workshop_string_length_error();
                            }
                            if (0xf < uVar16) {
                              puVar12 = *(ushort **)puVar12;
                            }
                            pppuStack_80 = (undefined8 ****)0x0;
                            uStack_78 = 0;
                            uVar16 = lVar7 + 0xb;
                            uVar17 = 0xf;
                            ppppuVar10 = &pppuStack_80;
                            if (0xf < uVar16) {
                              uVar17 = uVar16 | 0xf;
                              if (uVar17 < 0x8000000000000000) {
                                if (uVar17 < 0x16) {
                                  uVar17 = 0x16;
                                }
                              }
                              else {
                                uVar17 = 0x7fffffffffffffff;
                              }
                              ppppuVar10 = (undefined8 ****)FUN_140071d90(uVar17 + 1);
                              pppuStack_80 = ppppuVar10;
                            }
                            uStack_70 = uVar16;
                            uStack_68 = uVar17;
                            workshop_supplier_0x154f29e(ppppuVar10,puVar12,lVar7);
                            *(undefined8 *)((longlong)ppppuVar10 + lVar7) = 0x696375646f72702d;
                            *(undefined2 *)((longlong)ppppuVar10 + lVar7 + 8) = 0x676e;
                            *(undefined1 *)((longlong)ppppuVar10 + lVar7 + 10) = 0x20;
                            *(undefined1 *)((longlong)ppppuVar10 + uVar16) = 0;
                            ppppuVar10 = &pppuStack_80;
                            if (0xf < uStack_68) {
                              ppppuVar10 = (undefined8 ****)pppuStack_80;
                            }
                            FUN_140070fd0(param_2,ppppuVar10,uStack_70);
                            if (0xf < uStack_68) {
                              uVar16 = uStack_68 + 1;
                              ppppuVar10 = (undefined8 ****)pppuStack_80;
                              if (0xfff < uVar16) {
                                uVar16 = uStack_68 + 0x28;
                                ppppuVar10 = (undefined8 ****)pppuStack_80[-1];
                                if (0x1f < (ulonglong)
                                           ((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar10))) {
                                  _invalid_parameter_noinfo_noreturn();
                                  pcVar4 = (code *)swi(3);
                                  (*pcVar4)();
                                  return;
                                }
                              }
                              workshop_supplier_0x154de20(ppppuVar10,uVar16);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x46);
  if (((-1 < iVar6) &&
      ((ulonglong)(longlong)iVar6 < (ulonglong)(_DAT_1425135f0 - _DAT_1425135e8 >> 3))) &&
     (lVar7 = *(longlong *)(_DAT_1425135e8 + (longlong)iVar6 * 8), lVar7 != 0)) {
    piVar2 = *(int **)(param_1 + 0x4c);
    for (piVar18 = *(int **)(param_1 + 0x48); piVar18 < piVar2; piVar18 = piVar18 + 1) {
      lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (longlong)*piVar18 * 8);
      puVar13 = (undefined8 *)(lVar3 + 8);
      if (0xf < *(ulonglong *)(lVar3 + 0x20)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_140070fd0(param_2,puVar13,*(undefined8 *)(lVar3 + 0x18));
      FUN_140070fd0(param_2,"-containing ",0xc);
    }
  }
  if (((-1 < *(int *)(param_1 + 0x56)) &&
      (*(int *)(param_1 + 0x56) < (int)(_DAT_142513440 - _DAT_142513438 >> 3))) &&
     ((param_1[0xe] & 1) == 0)) {
    FUN_140070fd0(param_2,"color ",6);
    lVar7 = *(longlong *)(_DAT_142513438 + (longlong)*(int *)(param_1 + 0x56) * 8);
    puVar13 = (undefined8 *)(lVar7 + 0x50);
    if (0xf < *(ulonglong *)(lVar7 + 0x68)) {
      puVar13 = (undefined8 *)*puVar13;
    }
    FUN_140070fd0(param_2,puVar13,*(undefined8 *)(lVar7 + 0x60));
    FUN_140070fd0(param_2," ",1);
  }
  if (0x19 < param_1[0x55]) goto LAB_140a43463;
                    /* WARNING: Switch is manually overridden */
  switch(param_1[0x55]) {
  case 0:
    uVar20 = 0xe;
    pcVar15 = "liquid cooking";
    break;
  case 1:
    uVar20 = 0xc;
    pcVar15 = "liquid scoop";
    break;
  case 2:
    uVar20 = 0x1a;
    pcVar15 = "powder grinding receptacle";
    break;
  case 3:
    pcVar15 = "powder grinding";
    goto LAB_140a43455;
  case 4:
    uVar20 = 0xc;
    pcVar15 = "meat carving";
    break;
  case 5:
    uVar20 = 0xb;
    pcVar15 = "meat boning";
    break;
  case 6:
    uVar20 = 0xc;
    pcVar15 = "meat slicing";
    break;
  case 7:
    uVar20 = 0xd;
    pcVar15 = "meat cleaving";
    break;
  case 8:
    uVar20 = 0x13;
    pcVar15 = "meat-carving holder";
    break;
  case 9:
    uVar20 = 0xe;
    pcVar15 = "meal container";
    break;
  case 10:
    uVar20 = 0x10;
    pcVar15 = "liquid container";
    break;
  case 0xb:
    uVar20 = 0xc;
    pcVar15 = "food storage";
    break;
  case 0xc:
    uVar20 = 4;
    pcVar15 = "hive";
    break;
  case 0xd:
    uVar20 = 8;
    pcVar15 = "nest box";
    break;
  case 0xe:
    uVar20 = 0x16;
    pcVar15 = "small object container";
    break;
  case 0xf:
    uVar20 = 10;
    pcVar15 = "track cart";
    break;
  case 0x10:
    uVar20 = 0x13;
    pcVar15 = "heavy object hauler";
    break;
  case 0x11:
    uVar20 = 0xe;
    pcVar15 = "stand-and-work";
    break;
  case 0x12:
    uVar20 = 0xc;
    pcVar15 = "sheet roller";
    break;
  case 0x13:
    uVar20 = 0x16;
    pcVar15 = "folded sheet protector";
    break;
  case 0x14:
    uVar20 = 0x11;
    pcVar15 = "writing container";
    break;
  case 0x15:
    uVar20 = 8;
    pcVar15 = "bookcase";
    break;
  case 0x16:
    uVar20 = 0xe;
    pcVar15 = "display object";
    break;
  case 0x17:
    uVar20 = 0x12;
    pcVar15 = "offering placement";
    break;
  case 0x18:
    uVar20 = 10;
    pcVar15 = "divination";
    break;
  case 0x19:
    pcVar15 = "games of chance";
LAB_140a43455:
    uVar20 = 0xf;
  }
  FUN_140070e90(param_2,pcVar15,uVar20);
LAB_140a43463:
  if ((*(uint *)(param_1 + 0xe) & 0x2000000) == 0) {
    if (param_1[0x55] != 0xffff) {
      if (((*param_1 == 0x56) && (param_1[1] == 0xffff)) &&
         ((param_1[2] == 0xffff && (*(int *)(param_1 + 4) == -1)))) goto LAB_140a435a4;
      FUN_140070fd0(param_2," ",1);
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0xf;
    pppuStack_80 = (undefined8 ****)0x0;
    uStack_d0 = 1;
    if (sStack_88 != 1) {
      uStack_d0 = 0xffffffff;
    }
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 1;
    uStack_a8 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d8 = *(undefined4 *)(param_1 + 4);
    workshop_requirement_item_noun(&pppuStack_80,*param_1,param_1[1],param_1[2]);
    ppppuVar10 = &pppuStack_80;
    if (0xf < uStack_68) {
      ppppuVar10 = (undefined8 ****)pppuStack_80;
    }
    FUN_140070fd0(param_2,ppppuVar10,uStack_70);
    if (0xf < uStack_68) {
      uVar16 = uStack_68 + 1;
      ppppuVar10 = (undefined8 ****)pppuStack_80;
      if (0xfff < uVar16) {
        uVar16 = uStack_68 + 0x28;
        ppppuVar10 = (undefined8 ****)pppuStack_80[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar10))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      workshop_supplier_0x154de20(ppppuVar10,uVar16);
    }
  }
  else {
    if (param_1[0x55] != 0xffff) {
      FUN_140070fd0(param_2," ",1);
    }
    FUN_140070fd0(param_2,"body part",9);
  }
LAB_140a435a4:
  if ((*(uint *)(param_1 + 6) & 0x40000000) != 0) {
    FUN_140070fd0(param_2," that isn\'t a bin",0x11);
  }
  FUN_14154de00(uStack_40 ^ (ulonglong)auStack_f8);
  return;
}


/* classic PE:6aea11a5:0272d000; tooltip-paragraph-splitter; RVA 0x8fe410..0x8fe531 */

void workshop_tooltip_paragraph_splitter(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puStackX_20;
  longlong *plStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  if (0 < param_3) {
    plStack_38 = (longlong *)0x0;
    lStack_30 = 0;
    uStack_28 = 0;
    puStackX_20 = (undefined8 *)FUN_14154de30(0x20);
    *puStackX_20 = 0;
    puStackX_20[1] = 0;
    puStackX_20[2] = 0;
    puStackX_20[3] = 0xf;
    *(undefined1 *)puStackX_20 = 0;
    if (puStackX_20 != param_2) {
      puVar1 = param_2 + 2;
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      FUN_140070e90(puStackX_20,param_2,*puVar1);
    }
    FUN_1400bc2f0(&plStack_38,0,&puStackX_20);
    workshop_tooltip_paragraph_list_splitter(param_1,&plStack_38,param_3);
    plVar4 = plStack_38;
    lVar5 = lStack_30;
    if (lStack_30 - (longlong)plStack_38 >> 3 != 0) {
      plVar2 = plStack_38 + 1;
      do {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          FUN_140070e10(lVar3);
          workshop_supplier_0x154de20(lVar3,0x20);
        }
        workshop_supplier_0x154f5ba(plVar4,plVar2,lVar5 - (longlong)plVar2);
        lVar5 = lVar5 + -8;
      } while (lVar5 - (longlong)plVar4 >> 3 != 0);
    }
    lStack_30 = lVar5;
    FUN_140068130(&plStack_38);
  }
  return;
}


/* classic PE:6aea11a5:0272d000; material-record-lookup; RVA 0x14c1d30..0x14c1e5f */

longlong workshop_material_record_lookup(longlong param_1,ushort param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (199 < (ushort)(param_2 - 0x1a3)) {
    if (((ushort)(param_2 - 0x13) < 200) || ((ushort)(param_2 - 0xdb) < 200)) {
      lVar2 = FUN_140718c60(param_1 + 0x11b558);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x126cd0);
      }
      return lVar2;
    }
    if (param_2 != 0) {
      if (0x292 < param_2) {
        return 0;
      }
      return *(longlong *)(param_1 + 0x126c38 + (longlong)(short)param_2 * 8);
    }
    if (-1 < param_3) {
      if (((ulonglong)(longlong)param_3 <
           (ulonglong)(*(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3))
         && (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x11b3d8) + (longlong)param_3 * 8),
            lVar2 != 0)) {
        return lVar2 + 0x1a8;
      }
    }
    return *(longlong *)(param_1 + 0x126c38);
  }
  if (-1 < param_3) {
    if (((ulonglong)(longlong)param_3 <
         (ulonglong)(*(longlong *)(param_1 + 0x11b410) - *(longlong *)(param_1 + 0x11b408) >> 3)) &&
       (-1 < (short)(param_2 - 0x1a3))) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x11b408) + (longlong)param_3 * 8);
      lVar1 = *(longlong *)(lVar2 + 0x2a0);
      if (((longlong)(short)param_2 - 0x1a3U <
           (ulonglong)(*(longlong *)(lVar2 + 0x2a8) - lVar1 >> 3)) &&
         (lVar2 = *(longlong *)(lVar1 + ((longlong)(short)param_2 - 0x1a3U) * 8), lVar2 != 0)) {
        return lVar2;
      }
    }
  }
  return *(longlong *)(param_1 + 0x127950);
}


/* classic PE:6aea11a5:0272d000; string-with-appended-character; RVA 0x73b820..0x73b8f9 */

undefined8 *
workshop_string_with_appended_character(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  lVar2 = param_2[2];
  if (lVar2 != 0x7fffffffffffffff) {
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar1 = lVar2 + 1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = 0xf;
    param_1[2] = 0;
    param_1[3] = 0;
    puVar3 = param_1;
    if (0xf < uVar1) {
      uVar4 = uVar1 | 0xf;
      if (uVar4 < 0x8000000000000000) {
        if (uVar4 < 0x16) {
          uVar4 = 0x16;
        }
      }
      else {
        uVar4 = 0x7fffffffffffffff;
      }
      puVar3 = (undefined8 *)FUN_140071d90(uVar4 + 1);
      *param_1 = puVar3;
    }
    param_1[2] = uVar1;
    param_1[3] = uVar4;
    workshop_supplier_0x154f29e(puVar3,param_2,lVar2);
    *(undefined1 *)((longlong)puVar3 + lVar2) = param_3;
    *(undefined1 *)((longlong)puVar3 + uVar1) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  workshop_string_length_error();
}


/* classic PE:6aea11a5:0272d000; requirement-item-noun; RVA 0xa99510..0xa9e9e0 */

/* WARNING: Switch with 1 destination removed at 0x000140a9bf8b */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_requirement_item_noun
               (undefined8 *param_1,ushort param_2,short param_3,ushort param_4,uint param_5,
               uint param_6,uint param_7,char param_8,longlong param_9,undefined2 param_10,
               int param_11,char param_12,uint param_13,byte param_14)

{
  undefined2 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 *******pppppppuVar20;
  char *pcVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined2 uVar28;
  short sVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar32;
  undefined1 auStack_2b8 [32];
  uint uStack_298;
  uint uStack_290;
  undefined4 uStack_288;
  char cStack_278;
  char cStack_277;
  char cStack_276;
  char cStack_275;
  char cStack_274;
  char cStack_273;
  char cStack_272;
  char cStack_271;
  char cStack_270;
  char cStack_26f;
  ushort uStack_26e;
  short sStack_26c;
  ushort uStack_26a;
  uint uStack_264;
  int iStack_260;
  longlong lStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  ulonglong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  longlong lStack_220;
  ulonglong uStack_218;
  undefined8 *******pppppppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418b8040 ^ (ulonglong)auStack_2b8;
  uVar25 = (ulonglong)(short)param_4;
  uVar22 = (ulonglong)(int)param_5;
  uStack_264 = param_5;
  iStack_260 = param_11;
  uStack_228 = 0;
  lStack_220 = 0;
  uStack_218 = 0xf;
  uStack_230 = (undefined8 *)0x0;
  lVar30 = 0;
  uStack_26e = param_2;
  uStack_26a = param_4;
  if ((param_12 == '\0') &&
     ((((param_2 == 0x19 || (param_2 == 0x1a)) || (param_2 == 0x1c)) ||
      ((param_2 == 0x1d || (param_2 == 0x3c)))))) {
    iVar10 = FUN_141374520(param_2,param_3,param_10);
    if (iVar10 == 1) {
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6c616d73);
      uVar5 = 0x6c;
    }
    else {
      lVar30 = 0;
      if (iVar10 != 2) goto LAB_140a9965c;
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6772616c);
      uVar5 = 0x65;
    }
    lVar30 = 5;
    uVar23 = (ulonglong)uStack_230 >> 0x28;
    uStack_230._0_5_ = CONCAT14(uVar5,(undefined4)uStack_230);
    uStack_230 = (undefined8 *)(CONCAT35((int3)uVar23,(undefined5)uStack_230) & 0xffff00ffffffffff);
    lStack_220 = 5;
  }
LAB_140a9965c:
  if (param_8 == '\0') {
    param_1[2] = 0;
    puVar12 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar12 = (undefined8 *)*param_1;
    }
    *(undefined1 *)puVar12 = 0;
    lVar30 = lStack_220;
  }
  if ((param_14 & 4) != 0) {
    FUN_140070fd0(param_1,"grown ",6);
    lVar30 = lStack_220;
  }
  uStack_248 = 0;
  uVar23 = 0;
  lStack_240 = 0;
  uStack_238 = 0xf;
  pppppppuStack_250 = (undefined8 *******)0x0;
  bVar3 = true;
  if (0x5c < uStack_26e) {
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    pcVar21 = "item";
    goto LAB_140a9e94d;
  }
  sVar29 = (short)param_5;
  iVar10 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(uStack_26e) {
  case 0:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        workshop_supplier_0x70b20(param_1,"metal");
      }
      else {
        workshop_supplier_0x70c50(auStack_f0);
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414e58e0(0x1423ed870,auStack_f0,0,param_5);
        workshop_supplier_0xbb2d0(param_1,auStack_f0);
        FUN_140070e10(auStack_f0);
        if ((-1 < (int)param_5) && (uVar22 < (ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3))) {
          lVar30 = *(longlong *)(_DAT_142508c48 + uVar22 * 8);
          if ((*(int *)(lVar30 + 0x40) < 4) ||
             ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 3) & 2) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            workshop_supplier_0x70b20(param_1," wafers");
            goto LAB_140a9e96b;
          }
        }
      }
      workshop_supplier_0x70b20(param_1," bars");
    }
    else if (param_4 == 7) {
      if (param_5 == 1) {
        workshop_supplier_0x70b20(param_1,"charcoal");
      }
      else {
        pcVar21 = "coke";
        if (param_5 != 0) {
          pcVar21 = "refined coal";
        }
        workshop_supplier_0x70b20(param_1,pcVar21);
      }
    }
    else if (param_4 == 0xffff) {
      workshop_supplier_0x70b20(param_1,"bars");
    }
    else {
      workshop_supplier_0x70c50(auStack_110);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,auStack_110,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,auStack_110);
      FUN_140070e10(auStack_110);
    }
    goto LAB_140a9e96b;
  case 1:
    uStack_298 = 0xffffffff;
    if ((param_11 != -1) &&
       (iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), uStack_298 = 0xffffffff, iVar10 != 0))
    {
      iVar10 = iVar10 + -1;
      if (-1 < iVar10) {
        do {
          iVar26 = (int)uVar23 + iVar10 >> 1;
          plVar13 = *(longlong **)(_DAT_1424017d0 + (longlong)iVar26 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto LAB_140a99d3d;
          iVar14 = iVar26 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            uVar23 = (ulonglong)(iVar26 + 1);
            iVar14 = iVar10;
          }
          iVar10 = iVar14;
        } while ((int)uVar23 <= iVar14);
      }
      plVar13 = (longlong *)0x0;
LAB_140a99d3d:
      if (plVar13 != (longlong *)0x0) {
        uStack_298 = (**(code **)(*plVar13 + 0x748))(plVar13);
      }
    }
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0xf;
    pppppppuStack_1d0 = (undefined8 *******)0x0;
    uStack_288 = param_13;
    uStack_290 = 0xffffffff;
    cVar7 = FUN_1414f5e80(param_13,&pppppppuStack_1d0,param_4,param_5);
    if (cVar7 == '\0') {
      if (param_4 == 0xffff) {
        workshop_supplier_0x70b20(param_1,"cut gems");
      }
      else if (param_4 == 3) {
        workshop_supplier_0x70b20(param_1,"cut green glass gems");
      }
      else if (param_4 == 4) {
        workshop_supplier_0x70b20(param_1,"cut clear glass gems");
      }
      else if (param_4 == 5) {
        workshop_supplier_0x70b20(param_1,"cut crystal glass gems");
      }
      else if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          workshop_supplier_0x70b20(param_1,"gems");
        }
      }
      else {
        workshop_supplier_0x70c50(auStack_d0);
        uStack_298 = CONCAT31(uStack_298._1_3_,1);
        FUN_1414e5750(0x1423ed870,auStack_d0,param_4,param_5);
        workshop_supplier_0xbb2d0(param_1,auStack_d0);
        FUN_140070e10(auStack_d0);
      }
    }
    else {
      pppppppuVar20 = &pppppppuStack_1d0;
      if (0xf < uStack_1b8) {
        pppppppuVar20 = pppppppuStack_1d0;
      }
      FUN_140070fd0(param_1,pppppppuVar20,uStack_1c0);
    }
    if (0xf < uStack_1b8) {
      if (0xfff < uStack_1b8 + 1) {
        uVar22 = uStack_1b8 + 0x28;
        pppppppuVar20 = (undefined8 *******)pppppppuStack_1d0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1d0 + (-8 - (longlong)pppppppuVar20)))
        goto LAB_140a9d5fe;
      }
      workshop_supplier_0x154de20();
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0xf;
    pppppppuStack_1d0 = (undefined8 *******)((ulonglong)pppppppuStack_1d0 & 0xffffffffffffff00);
    goto LAB_140a9e96b;
  case 2:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
      FUN_140070fd0(param_1,"blocks",6);
    }
    else if (*(longlong *)(lVar30 + 0x340) == 0) {
      workshop_supplier_0x70b20(param_1,"blocks");
    }
    else {
      workshop_supplier_0xbb2d0(param_1,lVar30 + 0x330);
    }
    goto LAB_140a9e96b;
  case 3:
    if (param_4 == 0xffff) {
      FUN_140070fd0(param_1,"rough gems",10);
    }
    else if (param_4 == 3) {
      workshop_supplier_0x70b20(param_1,"raw green glass");
    }
    else if (param_4 == 4) {
      workshop_supplier_0x70b20(param_1,"raw clear glass");
    }
    else if (param_4 == 5) {
      workshop_supplier_0x70b20(param_1,"raw crystal glass");
    }
    else if (param_5 == 0xffffffff) {
      if (param_4 == 0) {
        workshop_supplier_0x70b20(param_1,"rough gems");
      }
    }
    else {
      workshop_supplier_0x70c50(auStack_170);
      workshop_supplier_0x70b20(param_1,"rough ");
      uStack_298 = CONCAT31(uStack_298._1_3_,1);
      FUN_1414e5750(0x1423ed870,auStack_170,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,auStack_170);
      FUN_140070e10(auStack_170);
    }
    goto LAB_140a9e96b;
  case 4:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        workshop_supplier_0x70b20(param_1,"stone boulders");
      }
      else {
        workshop_supplier_0x70c50(auStack_150);
        FUN_1414e56b0(0x1423ed870,auStack_150,0,param_5);
        workshop_supplier_0xbb2d0(param_1,auStack_150);
        FUN_140070e10(auStack_150);
      }
    }
    else if ((param_4 == 0xffff) && (param_13 == 0)) {
      workshop_supplier_0x70b20(param_1,"boulders");
    }
    else {
      workshop_supplier_0x70c50(auStack_130);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,auStack_130,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,auStack_130);
      FUN_140070e10(auStack_130);
    }
    goto LAB_140a9e96b;
  case 5:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      if ((param_7 & 0x20) == 0) {
LAB_140a99760:
        FUN_140070fd0(param_1,"logs",4);
      }
    }
    else {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      if ((param_7 & 0x20) == 0) {
        FUN_1400bb140(param_1,0x20);
        goto LAB_140a99760;
      }
    }
    goto LAB_140a9e96b;
  case 6:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (((lVar30 == 0) || (*(int *)(lVar30 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    cVar7 = cVar6 * '\x02' + '\x04';
    pcVar21 = "portal";
    if (cVar6 == '\0') {
      pcVar21 = "door";
    }
    break;
  case 7:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\t';
    pcVar21 = "floodgate";
    break;
  case 8:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bed";
    break;
  case 9:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        workshop_supplier_0x70b20(param_1,"chair");
        goto LAB_140a9e95b;
      }
    }
    cVar7 = '\x06';
    pcVar21 = "throne";
    break;
  case 10:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9aa67:
      if (((((param_13 & 4) == 0) &&
           (cVar7 = FUN_14146fea0(0x1423ed870,0x1d,param_4,param_5), cVar7 == '\0')) &&
          ((param_13 & 0x10) == 0)) &&
         (((cVar7 = FUN_14146fea0(0x1423ed870,0x1e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 & 8) == 0)) &&
          ((cVar7 = FUN_14146fea0(0x1423ed870,0x3e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 >> 0xc & 1) == 0)))))) {
        workshop_supplier_0x70b20(param_1,"chain");
        goto LAB_140a9e95b;
      }
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 3) & 1) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140a9aa67;
    }
    pcVar21 = "rope";
    goto LAB_140a9e94d;
  case 0xb:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9ab90:
      if ((((((param_13 & 4) == 0) &&
            (cVar7 = FUN_14146fea0(0x1423ed870,0x1d,param_4,param_5), cVar7 == '\0')) &&
           ((param_13 & 0x10) == 0)) &&
          ((cVar7 = FUN_14146fea0(0x1423ed870,0x1e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 & 8) == 0)))) &&
         ((cVar7 = FUN_14146fea0(0x1423ed870,0x3e,param_4,param_5), cVar7 == '\0' &&
          ((param_13 >> 0xc & 1) == 0)))) {
        cVar7 = FUN_14146fea0(0x1423ed870,0x31,param_4,param_5);
        if (cVar7 == '\0') {
          workshop_supplier_0x70b20(param_1,"flask");
        }
        else {
          workshop_supplier_0x70b20(param_1,"vial");
        }
        goto LAB_140a9e95b;
      }
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 3) & 1) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140a9ab90;
    }
    cVar7 = '\t';
    pcVar21 = "waterskin";
    break;
  case 0xc:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
LAB_140a9b0f5:
      cVar7 = '\x06';
      pcVar21 = "goblet";
      break;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
    FUN_1400bb140(param_1,0x20);
    if ((ushort)(param_4 - 0x1a3) < 200) {
      workshop_supplier_0x70b20(param_1,"cup");
    }
    else {
      if ((param_4 != 0) || (cVar7 = FUN_14146fea0(0x1423ed870,0x2f,0,param_5), cVar7 != '\0'))
      goto LAB_140a9b0f5;
      workshop_supplier_0x70b20(param_1,"mug");
    }
    goto LAB_140a9e95b;
  case 0xd:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    iVar10 = (int)(_DAT_142509180 - _DAT_142509178 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142509178 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_142509178 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            workshop_supplier_0xbb2d0(param_1,lVar18 + lVar30);
            goto LAB_140a9e96b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    cVar7 = '\x12';
    pcVar21 = "musical instrument";
    break;
  case 0xe:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    iVar10 = (int)(_DAT_142508ee0 - _DAT_142508ed8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142508ed8 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_142508ed8 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            workshop_supplier_0xbb2d0(param_1,lVar18 + lVar30);
            goto LAB_140a9e96b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    cVar7 = '\x03';
    pcVar21 = "toy";
    break;
  case 0xf:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "window";
    break;
  case 0x10:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (((lVar30 == 0) || (*(int *)(lVar30 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    cVar7 = '\t';
    if (!bVar3) {
      cVar7 = '\x04';
    }
    pcVar21 = "terrarium";
    if (!bVar3) {
      pcVar21 = "cage";
    }
    break;
  case 0x11:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "barrel";
    break;
  case 0x12:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "bucket";
    break;
  case 0x13:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "animal trap";
    break;
  case 0x14:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "table";
    break;
  case 0x15:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        workshop_supplier_0x70b20(param_1,"casket");
        goto LAB_140a9e95b;
      }
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        workshop_supplier_0x70b20(param_1,"sarcophag");
        pcVar21 = "i";
        if (param_6 == 1) {
          pcVar21 = "us";
        }
        workshop_supplier_0x70b20(param_1,pcVar21);
        goto LAB_140a9e96b;
      }
    }
    workshop_supplier_0x70b20(param_1,"coffin");
    goto LAB_140a9e95b;
  case 0x16:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "statue";
    break;
  case 0x17:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    cVar7 = '\x06';
    pcVar21 = "corpse";
    break;
  case 0x18:
    iVar10 = (int)(_DAT_142508eb0 - _DAT_142508ea8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142508ea8 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_142508ea8 + (longlong)iVar10 * 8);
          if (lVar18 != 0) goto LAB_140a9df22;
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    workshop_supplier_0x70b20(param_1,"weapon");
    goto LAB_140a9e95b;
  case 0x19:
    if (lVar30 != 0) {
      workshop_supplier_0xbb2d0(param_1,&uStack_230);
      FUN_1400bb140(param_1,0x20);
    }
    iVar10 = (int)(_DAT_142509198 - _DAT_142509190 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142509190 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_142509190 + (longlong)iVar10 * 8);
          if (lVar18 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
              workshop_supplier_0xbb2d0(param_1,lVar18 + 0xa8);
              FUN_1400bb140(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              workshop_supplier_0xbb2d0(param_1,lVar18 + 0xe8);
              workshop_supplier_0x70b20(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar18 + 0xd8) != 0) {
                pppppppuVar20 = (undefined8 *******)(lVar18 + 200);
                goto LAB_140a9e13b;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140a9e13b:
              workshop_supplier_0xbb2d0(param_1,pppppppuVar20);
              FUN_1400bb140(param_1,0x20);
            }
            cVar7 = FUN_14146fea0(0x1423ed870,0x2f,param_4,param_5);
            if (cVar7 == '\0') goto LAB_140a9df9b;
            lVar30 = lVar18 + 0x118;
            goto LAB_140a9e174;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    if (1 < (int)param_6) {
      workshop_supplier_0x70b20(param_1,"suits of ");
    }
    workshop_supplier_0x70b20(param_1,"armor");
    goto LAB_140a9e96b;
  case 0x1a:
    if (lVar30 != 0) {
      workshop_supplier_0xbb2d0(param_1,&uStack_230);
      FUN_1400bb140(param_1,0x20);
    }
    lVar18 = 0;
    iVar10 = (int)(_DAT_1425091f8 - _DAT_1425091f0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_1425091f0 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_1425091f0 + (longlong)iVar10 * 8);
          if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
            workshop_supplier_0xbb2d0(param_1,lVar18 + 0xa8);
            workshop_supplier_0x70b20(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    if (lVar18 != 0) {
LAB_140a9e522:
      lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
      if (lVar30 != 0) {
        if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar30 = lVar18 + 0xe8;
LAB_140a9e174:
          cVar7 = workshop_supplier_0x73550(lVar30,7);
          if (cVar7 != '\0') {
            workshop_supplier_0x70b20(param_1,"chain ");
          }
        }
      }
      goto LAB_140a9df9b;
    }
    FUN_140070fd0(param_1,"footwear",8);
    goto LAB_140a9e96b;
  case 0x1b:
    iVar10 = (int)(_DAT_142509210 - _DAT_142509208 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142509208 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_142509208 + (longlong)iVar10 * 8);
          if (lVar18 != 0) goto LAB_140a9df22;
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    workshop_supplier_0x70b20(param_1,"shield");
    if (param_6 == 1) {
      workshop_supplier_0x70b20(param_1,"/buckler");
      goto LAB_140a9e9a7;
    }
    FUN_1400bb140(param_1,0x73);
    workshop_supplier_0x70b20(param_1,"/buckler");
    goto LAB_140a9e961;
  case 0x1c:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140070fd0(param_1,puVar12,lVar30);
      FUN_1400bb140(param_1,0x20);
    }
    lVar18 = 0;
    iVar10 = (int)(_DAT_142509228 - _DAT_142509220 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142509220 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_142509220 + (longlong)iVar10 * 8);
          if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
            workshop_supplier_0xbb2d0(param_1,lVar18 + 0xa8);
            workshop_supplier_0x70b20(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    if (lVar18 != 0) goto LAB_140a9e522;
    FUN_140070fd0(param_1,"headwear",8);
    goto LAB_140a9e96b;
  case 0x1d:
    if (lVar30 != 0) {
      workshop_supplier_0xbb2d0(param_1,&uStack_230);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = 0;
    iVar10 = (int)(_DAT_1425091e0 - _DAT_1425091d8 >> 3) + -1;
    lVar18 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_1425091d8 + lVar18 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_1425091d8 + (longlong)iVar10 * 8);
          if ((lVar30 != 0) && (*(longlong *)(lVar30 + 0xb8) != 0)) {
            workshop_supplier_0xbb2d0(param_1,lVar30 + 0xa8);
            workshop_supplier_0x70b20(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    if (((param_11 != -1) &&
        (plVar13 = (longlong *)FUN_140073ca0(&DAT_1424017d0,param_11), plVar13 != (longlong *)0x0))
       && (lVar18 = (**(code **)(*plVar13 + 0x208))(plVar13), lVar18 != 0)) {
      cVar7 = workshop_supplier_0x73550(lVar18,0);
      if (cVar7 != '\0') {
        workshop_supplier_0x70b20(param_1,"right ");
      }
      cVar7 = workshop_supplier_0x73550(lVar18,1);
      if (cVar7 != '\0') {
        workshop_supplier_0x70b20(param_1,"left ");
      }
    }
    if (lVar30 == 0) {
      workshop_supplier_0x70b20(param_1,"handwear");
    }
    else {
      cVar7 = FUN_14146fea0(0x1423ed870,0x2f,param_4,param_5);
      if ((cVar7 != '\0') && (cVar7 = workshop_supplier_0x73550(lVar30 + 0xe8,7), cVar7 != '\0')) {
        workshop_supplier_0x70b20(param_1,"chain ");
      }
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x88);
      if (param_6 != 1) goto LAB_140a9dcd4;
      workshop_supplier_0xbb2d0(param_1,lVar30 + 0x68);
    }
    goto LAB_140a9e96b;
  case 0x1e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9a473:
      if (param_4 != 0) {
        if (param_4 != 0xffff) goto LAB_140a9a4a2;
        if (param_6 == 1) {
          workshop_supplier_0x70b20(param_1,"box");
          goto LAB_140a9e9a7;
        }
        pcVar21 = "boxe";
        goto LAB_140a9a4ca;
      }
      cVar7 = FUN_14146fea0(0x1423ed870,0x2f,0,param_5);
      if (cVar7 == '\0') {
        pcVar21 = "coffer";
      }
      else {
LAB_140a9a4a2:
        pcVar21 = "chest";
      }
      workshop_supplier_0x70b20(param_1,pcVar21);
      if (param_6 == 1) goto LAB_140a9e9a7;
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 7) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140a9a473;
      FUN_140070fd0(param_1,"box",3);
      if (param_6 == 1) goto LAB_140a9e9a7;
      pcVar21 = "e";
LAB_140a9a4ca:
      workshop_supplier_0x70b20(param_1,pcVar21);
    }
    FUN_140070fd0(param_1,"s",1);
    goto LAB_140a9e96b;
  case 0x1f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bag";
    break;
  case 0x20:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bin";
    break;
  case 0x21:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "armor stand";
    break;
  case 0x22:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "weapon rack";
    break;
  case 0x23:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "cabinet";
    break;
  case 0x24:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\b';
    pcVar21 = "figurine";
    break;
  case 0x25:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "amulet";
    break;
  case 0x26:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "scepter";
    break;
  case 0x27:
    iVar10 = (int)(_DAT_1425091b0 - _DAT_1425091a8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_1425091a8 + lVar30 * 8) + 0x28) == param_3) {
          uVar23 = *(ulonglong *)(_DAT_1425091a8 + (longlong)iVar10 * 8);
          if ((uVar23 != 0) && (*(longlong *)(uVar23 + 0xb8) != 0)) {
            workshop_supplier_0xbb2d0(param_1,uVar23 + 0xa8);
            FUN_1400bb140(param_1,0x20);
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    if (uVar23 == 0) {
      FUN_140070fd0(param_1,"ammunition",10);
    }
    else {
      lVar30 = uVar23 + 0x88;
      if (param_6 == 1) {
        lVar30 = uVar23 + 0x68;
      }
      workshop_supplier_0xbb2d0(param_1,lVar30);
    }
    goto LAB_140a9e96b;
  case 0x28:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "crown";
    break;
  case 0x29:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    pcVar21 = "ring";
    goto LAB_140a9e94d;
  case 0x2a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "earring";
    break;
  case 0x2b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\b';
    pcVar21 = "bracelet";
    break;
  case 0x2c:
    if (param_9 == 0) {
      uVar27 = 6;
      pcVar21 = "large ";
    }
    else {
      uVar27 = 8;
      pcVar21 = "perfect ";
    }
    FUN_140070fd0(param_1,pcVar21,uVar27);
    plVar13 = (longlong *)0x0;
    if ((param_11 == -1) || (iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar10 == 0)) {
LAB_140a9caf0:
      uStack_298 = 0xffffffff;
    }
    else {
      iVar10 = iVar10 + -1;
      plVar19 = plVar13;
      plVar16 = plVar13;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar19 + iVar10 >> 1;
          plVar16 = *(longlong **)(_DAT_1424017d0 + (longlong)iVar14 * 8);
          iVar26 = *(int *)((longlong)plVar16 + 0x1c);
          if (iVar26 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar26 < param_11) {
            plVar19 = (longlong *)(ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          plVar16 = plVar13;
          iVar10 = iVar11;
        } while ((int)plVar19 <= iVar11);
      }
      if (plVar16 == (longlong *)0x0) goto LAB_140a9caf0;
      uStack_298 = (**(code **)(*plVar16 + 0x748))(plVar16);
    }
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    uStack_288 = param_13;
    uStack_290 = param_6;
    cVar7 = FUN_1414f5e80(0,&pppppppuStack_1b0,param_4,param_5);
    if (cVar7 == '\0') {
      if (param_4 == 3) {
        workshop_supplier_0x70b20(param_1,"green glass ");
      }
      else if (param_4 == 4) {
        workshop_supplier_0x70b20(param_1,"clear glass ");
      }
      else {
        if (param_4 != 5) {
          if (param_4 == 0xffff) {
            if (param_13 == 0) goto LAB_140a9cba3;
LAB_140a9cc15:
            workshop_supplier_0x70c50(auStack_70);
            uStack_288 = uStack_288 & 0xffff0000;
            uStack_290 = CONCAT31(uStack_290._1_3_,1);
            uStack_298 = param_13;
            FUN_1414e58e0(0x1423ed870,auStack_70,param_4,param_5);
            workshop_supplier_0xbb2d0(param_1,auStack_70);
            workshop_supplier_0x70b20(param_1," gem");
            if (param_6 != 1) {
              FUN_1400bb140(param_1,0x73);
            }
            puVar15 = auStack_70;
          }
          else {
            if (param_4 != 0) goto LAB_140a9cc15;
            workshop_supplier_0x70c50(auStack_190);
            if (param_6 == 1) {
              uStack_298 = (uint)uStack_298._1_3_ << 8;
            }
            else {
              uStack_298 = CONCAT31(uStack_298._1_3_,1);
            }
            FUN_1414e5750(0x1423ed870,auStack_190,0,param_5);
            workshop_supplier_0xbb2d0(param_1,auStack_190);
            puVar15 = auStack_190;
          }
          FUN_140070e10(puVar15);
          goto LAB_140a9cc88;
        }
        workshop_supplier_0x70b20(param_1,"crystal glass ");
      }
LAB_140a9cba3:
      workshop_supplier_0x70b20(param_1,"gem");
      if (param_6 != 1) {
        FUN_1400bb140(param_1,0x73);
      }
    }
    else {
      pppppppuVar20 = &pppppppuStack_1b0;
      if (0xf < uStack_198) {
        pppppppuVar20 = pppppppuStack_1b0;
      }
      FUN_140070fd0(param_1,pppppppuVar20,uStack_1a0);
    }
LAB_140a9cc88:
    if (0xf < uStack_198) {
      uVar22 = uStack_198 + 1;
      pppppppuVar20 = pppppppuStack_1b0;
      if (0xfff < uVar22) {
        uVar22 = uStack_198 + 0x28;
        pppppppuVar20 = (undefined8 *******)pppppppuStack_1b0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1b0 + (-8 - (longlong)pppppppuVar20))) {
LAB_140a9d5fe:
          _invalid_parameter_noinfo_noreturn(pppppppuVar20,uVar22);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      workshop_supplier_0x154de20(pppppppuVar20,uVar22);
    }
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)((ulonglong)pppppppuStack_1b0 & 0xffffffffffffff00);
    goto LAB_140a9e96b;
  case 0x2d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "anvil";
    break;
  case 0x2e:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    if ((param_13 >> 9 & 1) == 0) {
      if ((param_13 & 0x20) == 0) {
        if ((param_13 & 0x40) == 0) {
          if ((param_13 & 1) == 0) {
            if ((param_13 & 8) == 0) {
              if ((param_13 & 0x10) == 0) {
                if ((char)param_13 < '\0') {
                  workshop_supplier_0x70b20(param_1,"wooden body part");
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        pcVar21 = "strand body part";
                        if ((param_13 >> 0xd & 1) == 0) {
                          pcVar21 = "body part";
                        }
                        workshop_supplier_0x70b20(param_1,pcVar21);
                      }
                      else {
                        workshop_supplier_0x70b20(param_1,"yarn body part");
                      }
                    }
                    else {
                      workshop_supplier_0x70b20(param_1,"pearl");
                    }
                  }
                  else {
                    workshop_supplier_0x70b20(param_1,"horn");
                  }
                }
                else {
                  workshop_supplier_0x70b20(param_1,"soap body part");
                }
              }
              else {
                workshop_supplier_0x70b20(param_1,"leather body part");
              }
            }
            else {
              workshop_supplier_0x70b20(param_1,"silk body part");
            }
          }
          else {
            workshop_supplier_0x70b20(param_1,"plant part");
          }
        }
        else {
          workshop_supplier_0x70b20(param_1,"shell");
        }
      }
      else {
        workshop_supplier_0x70b20(param_1,"bone");
      }
      goto LAB_140a9e95b;
    }
    if (param_6 == 1) {
      workshop_supplier_0x70b20(param_1,"tooth");
      goto LAB_140a9e9a7;
    }
    workshop_supplier_0x70b20(param_1,"teeth");
    goto LAB_140a9e96b;
  case 0x2f:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"Rotten ",7);
    }
    if (param_4 == 0xffff) {
      FUN_140070fd0(param_1,"remains",7);
    }
    else {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if ((-1 < (short)param_4) && (uVar25 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3))) {
        lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
        pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
        if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
          if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
            pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
          }
          FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
        }
      }
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)0x0;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      if (param_6 == 1) {
        uStack_298 = 0xf;
      }
      else {
        uStack_298 = 0x10;
      }
      FUN_1401464d0(0x142508dc8,&pppppppuStack_210,param_4,param_5 & 0xffff);
      pppppppuVar20 = &pppppppuStack_210;
      if (0xf < uStack_1f8) {
        pppppppuVar20 = pppppppuStack_210;
      }
      FUN_140070fd0(param_1,pppppppuVar20,uStack_200);
      if (0xf < uStack_1f8) {
        uVar22 = uStack_1f8 + 1;
        pppppppuVar20 = pppppppuStack_210;
        if (0xfff < uVar22) {
          uVar22 = uStack_1f8 + 0x28;
          pppppppuVar20 = (undefined8 *******)pppppppuStack_210[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_210 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_140a9d5fe;
        }
        workshop_supplier_0x154de20(pppppppuVar20,uVar22);
      }
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)((ulonglong)pppppppuStack_210 & 0xffffffffffffff00);
    }
    goto LAB_140a9e96b;
  case 0x30:
    if ((param_7 >> 8 & 1) != 0) {
      workshop_supplier_0x70b20(param_1,"rotten ");
    }
    if ((param_7 & 4) != 0) {
      workshop_supplier_0x70b20(param_1,"preserved ");
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140070fd0(param_1,"meat",4);
      goto LAB_140a9e96b;
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
      workshop_supplier_0x70b20(param_1,"meat");
      goto LAB_140a9e96b;
    }
    uVar32 = extraout_XMM0_Da;
    if (*(longlong *)(lVar30 + 0x2f8) != 0) {
      workshop_supplier_0xbb2d0(param_1,lVar30 + 0x2e8);
      uVar32 = FUN_1400bb140(param_1,0x20);
    }
    uVar24 = FUN_140718ba0(uVar32,param_4,param_5);
    if (uVar24 != 0xffffffff) {
      FUN_140aba4d0(uVar24 & 0xffff,&pppppppuStack_250,0,0xffffffff);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    if (*(longlong *)(lVar30 + 0x2b8) != 0) {
      if (param_6 == 1) {
        workshop_supplier_0xbb2d0(param_1,lVar30 + 0x2a8);
        goto LAB_140a9e9a7;
      }
      workshop_supplier_0xbb2d0(param_1,lVar30 + 0x2c8);
      goto LAB_140a9e96b;
    }
    workshop_supplier_0xbb2d0(param_1,lVar30 + 0xb8);
    if ((int)param_6 < 2) {
      workshop_supplier_0x70b20(param_1," chop");
      goto LAB_140a9e9a7;
    }
    workshop_supplier_0x70b20(param_1," chops");
    goto LAB_140a9e971;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    if (param_4 == 0xffff) {
      workshop_supplier_0x70b20(param_1,"fish");
      goto LAB_140a9e96b;
    }
    lStack_240 = 0;
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    *(undefined1 *)pppppppuVar20 = 0;
    if (((sVar29 == -1) || ((short)param_4 < 0)) ||
       (((ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3) <= uVar25 || (sVar29 < 0)))) {
LAB_140a9dc41:
      uStack_298 = uStack_298 & 0xffffff00;
      FUN_14025a330(0x142508dc8,&pppppppuStack_250,param_4,1);
    }
    else {
      lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
      lVar18 = *(longlong *)(lVar30 + 0x178);
      if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3) <= (ulonglong)(longlong)sVar29)
      goto LAB_140a9dc41;
      lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
      if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
        if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
          pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
        }
        FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
      }
      if (lStack_240 == 0) goto LAB_140a9dc41;
    }
    workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    cVar7 = workshop_supplier_0xf3cb0(0x142508dc8,param_4,param_5 & 0xffff);
LAB_140a9d9ca:
    if (cVar7 == '\0') {
      workshop_supplier_0x70b20(param_1,", ");
      uVar27 = 0xc;
    }
    else {
      if (cVar7 != '\x01') goto LAB_140a9e96b;
      workshop_supplier_0x70b20(param_1,", ");
      uVar27 = 0xb;
    }
    goto LAB_140a9e963;
  case 0x32:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    FUN_140070fd0(param_1,"raw ",4);
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto LAB_140a9d910;
      }
      else if (-1 < (short)param_4) {
        if ((uVar25 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) && (-1 < sVar29)) {
          lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
          lVar18 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
            pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
              }
              FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto LAB_140a9d954;
          }
        }
LAB_140a9d910:
        if (uVar25 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) {
          lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
          pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
            }
            FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
LAB_140a9d954:
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      if ((((short)param_4 < 0) || ((ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3) <= uVar25)) ||
         (sVar29 < 0)) {
LAB_140a9d9c3:
        cVar7 = -1;
      }
      else {
        lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
        lVar18 = *(longlong *)(lVar30 + 0x178);
        if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3) <=
            (ulonglong)(param_5 & 0xffff)) goto LAB_140a9d9c3;
        cVar7 = *(char *)(*(longlong *)(lVar18 + (ulonglong)(param_5 & 0xffff) * 8) + 0x15b8);
      }
      goto LAB_140a9d9ca;
    }
    FUN_140070fd0(param_1,"fish",4);
    goto LAB_140a9e96b;
  case 0x33:
    if (param_4 != 0xffff) {
      pcVar21 = "live ";
LAB_140a9dcaf:
      workshop_supplier_0x70b20(param_1,pcVar21);
      FUN_140aba4d0(param_4,&pppppppuStack_250,param_6 != 1,0xffffffff);
      pppppppuVar20 = &pppppppuStack_250;
      goto LAB_140a9dcd4;
    }
    workshop_supplier_0x70b20(param_1,"small live animal");
    goto LAB_140a9e95b;
  case 0x34:
    if (param_4 != 0xffff) {
      pcVar21 = "tame ";
      goto LAB_140a9dcaf;
    }
    workshop_supplier_0x70b20(param_1,"small tame animal");
    goto LAB_140a9e95b;
  case 0x35:
    if ((ushort)(param_4 - 0x1a3) < 200) {
      workshop_supplier_0xa7b670(0x142508c78,&pppppppuStack_250,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
        pppppppuVar20 = &pppppppuStack_250;
        if (0xf < uStack_238) {
          pppppppuVar20 = pppppppuStack_250;
        }
        FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
        uVar27 = 0x20;
        goto LAB_140a9e963;
      }
      workshop_supplier_0x70b20(param_1,"seeds");
    }
    goto LAB_140a9e96b;
  case 0x36:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"withered ",9);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140070fd0(param_1,"plant",5);
      if (param_6 == 1) goto LAB_140a9e9a7;
      workshop_supplier_0x70b20(param_1,"s");
    }
    else {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      FUN_1401463c0(0x142508c78,param_5,&pppppppuStack_250,0);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    }
    goto LAB_140a9e96b;
  case 0x37:
    if ((param_5 == 0xffffffff) && (param_13 == 0)) {
      workshop_supplier_0x70b20(param_1,"tanned hide");
      goto LAB_140a9e95b;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
LAB_140a9b711:
    uStack_298 = param_13;
    FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
    goto LAB_140a9e96b;
  case 0x38:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"withered ",9);
    }
    if ((ushort)(param_4 - 0x1a3) < 200) {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      workshop_supplier_0xa7b6c0(0x142508c78,&pppppppuStack_250,param_5,(int)param_3);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        goto LAB_140a9b711;
      }
      if (param_6 == 1) {
        workshop_supplier_0x70b20(param_1,"leaf or fruit");
        goto LAB_140a9e9a7;
      }
      workshop_supplier_0x70b20(param_1,"leaves and fruit");
    }
    goto LAB_140a9e96b;
  case 0x39:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9b4af:
      if ((param_13 & 8) != 0) goto LAB_140a9b4b5;
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 3) & 0x40) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140a9b4af;
LAB_140a9b4b5:
      if ((param_7 & 0x200) != 0) {
        workshop_supplier_0x70b20(param_1,"web");
        goto LAB_140a9e95b;
      }
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        workshop_supplier_0x70b20(param_1,"strands");
        goto LAB_140a9e96b;
      }
    }
    cVar7 = FUN_14146fea0(0x1423ed870,0x3e,param_4,param_5);
    if (cVar7 == '\0') {
      workshop_supplier_0x70b20(param_1,"thread");
    }
    else {
      workshop_supplier_0x70b20(param_1,"yarn");
    }
    goto LAB_140a9e96b;
  case 0x3a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"cloth",5);
    goto LAB_140a9e96b;
  case 0x3b:
    cVar7 = '\x05';
    pcVar21 = "totem";
    break;
  case 0x3c:
    iVar10 = (int)(_DAT_142509240 - _DAT_142509238 >> 3) + -1;
    lVar18 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142509238 + lVar18 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_142509238 + (longlong)iVar10 * 8);
          if (lVar18 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
              workshop_supplier_0xbb2d0(param_1,lVar18 + 0xa8);
              FUN_1400bb140(param_1,0x20);
              lVar30 = lStack_220;
            }
            if (lVar30 != 0) {
              workshop_supplier_0xbb2d0(param_1,&uStack_230);
              FUN_1400bb140(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              workshop_supplier_0xbb2d0(param_1,lVar18 + 0xe8);
              workshop_supplier_0x70b20(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar18 + 0xd8) != 0) {
                pppppppuVar20 = (undefined8 *******)(lVar18 + 200);
                goto LAB_140a9e88b;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140a9e88b:
              workshop_supplier_0xbb2d0(param_1,pppppppuVar20);
              FUN_1400bb140(param_1,0x20);
            }
            lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
            if (lVar30 == 0) goto LAB_140a9df9b;
            if ((*(int *)(lVar30 + 0x298) < 6) ||
               (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140a9df9b;
            lVar30 = lVar18 + 0x128;
            goto LAB_140a9e174;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    if (lVar30 != 0) {
      workshop_supplier_0xbb2d0(param_1,&uStack_230);
      FUN_1400bb140(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"legwear",7);
    goto LAB_140a9e96b;
  case 0x3d:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140070fd0(param_1,puVar12,lVar30);
      FUN_1400bb140(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\b';
    pcVar21 = "backpack";
    break;
  case 0x3e:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140070fd0(param_1,puVar12,lVar30);
      FUN_1400bb140(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "quiver";
    break;
  case 0x3f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"catapult parts",0xe);
    goto LAB_140a9e96b;
  case 0x40:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"ballista parts",0xe);
    goto LAB_140a9e96b;
  case 0x41:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    iVar10 = (int)(_DAT_1425091c8 - _DAT_1425091c0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_1425091c0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_1425091c0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            workshop_supplier_0xbb2d0(param_1,lVar18 + lVar30);
            goto LAB_140a9e96b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    FUN_140070fd0(param_1,"siege ammo",10);
    goto LAB_140a9e96b;
  case 0x42:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x13';
    pcVar21 = "ballista arrow head";
    break;
  case 0x43:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"mechanisms",10);
    goto LAB_140a9e96b;
  case 0x44:
    iVar10 = (int)(_DAT_142508ec8 - _DAT_142508ec0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142508ec0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_142508ec0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            if (*(longlong *)(lVar30 + 0xb8) != 0) {
              workshop_supplier_0xbb2d0(param_1,lVar30 + 0xa8);
              workshop_supplier_0x70b20(param_1," ");
            }
            if ((param_4 != 0xffff) || (param_13 != 0)) {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
              workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
              FUN_1400bb140(param_1,0x20);
            }
            lVar18 = lVar30 + 0x88;
            if (param_6 == 1) {
              lVar18 = lVar30 + 0x68;
            }
            workshop_supplier_0xbb2d0(param_1,lVar18);
            goto LAB_140a9e96b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x0e';
    pcVar21 = "trap component";
    break;
  case 0x45:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = CONCAT22(uStack_288._2_2_,1);
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9b711;
    }
    workshop_supplier_0x70b20(param_1,"drink");
    goto LAB_140a9e95b;
  case 0x46:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    iVar10 = 0;
    if ((param_11 != -1) && (iVar26 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar26 != 0)) {
      iVar26 = iVar26 + -1;
      if (-1 < iVar26) {
        do {
          iVar14 = iVar10 + iVar26 >> 1;
          lVar30 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
          if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9c0ed;
          iVar11 = iVar14 + -1;
          if (*(int *)(lVar30 + 0x1c) < param_11) {
            iVar11 = iVar26;
            iVar10 = iVar14 + 1;
          }
          iVar26 = iVar11;
        } while (iVar10 <= iVar11);
      }
      lVar30 = 0;
LAB_140a9c0ed:
      if ((lVar30 != 0) && (*(int *)(lVar30 + 200) != -1)) {
        workshop_supplier_0xbb2d0
                  (param_1,*(longlong *)(_DAT_142513438 + (longlong)*(int *)(lVar30 + 200) * 8) +
                           0x50);
        workshop_supplier_0x70b20(param_1," dye mix");
        goto LAB_140a9e96b;
      }
    }
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      workshop_supplier_0x70b20(param_1,"powder");
    }
    else {
      uStack_288 = CONCAT22(uStack_288._2_2_,3);
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    }
    goto LAB_140a9e96b;
  case 0x47:
    if ((param_7 & 0x100) != 0) {
      workshop_supplier_0x70b20(param_1,"rotten ");
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9b711;
    }
    workshop_supplier_0x70b20(param_1,"cheese");
    goto LAB_140a9e96b;
  case 0x48:
    cVar7 = '\r';
    pcVar21 = "prepared meal";
    break;
  default:
    sVar29 = 0;
    sStack_26c = 0;
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    uVar9 = uStack_26e;
    if (param_11 != -1) {
      cVar7 = '\0';
      cStack_278 = '\0';
      cStack_275 = '\0';
      cStack_277 = '\0';
      cStack_274 = '\0';
      cStack_273 = '\0';
      cStack_276 = '\0';
      cStack_272 = '\0';
      cStack_271 = '\0';
      cStack_270 = '\0';
      cStack_26f = '\0';
      iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        iVar26 = 0;
        if (-1 < iVar10) {
          do {
            iVar14 = iVar26 + iVar10 >> 1;
            lStack_258 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
            if (*(int *)(lStack_258 + 0x1c) == param_11) goto LAB_140a9b99b;
            iVar11 = iVar14 + -1;
            if (*(int *)(lStack_258 + 0x1c) < param_11) {
              iVar11 = iVar10;
              iVar26 = iVar14 + 1;
            }
            iVar10 = iVar11;
          } while (iVar26 <= iVar10);
        }
        lStack_258 = 0;
LAB_140a9b99b:
        lVar30 = lStack_258;
        uVar23 = 0;
        if (((lStack_258 != 0) &&
            (plVar13 = *(longlong **)(lStack_258 + 0x98), plVar13 != (longlong *)0x0)) &&
           (lVar18 = *plVar13, uVar17 = uVar23, plVar13[1] - lVar18 >> 3 != 0)) {
          do {
            iVar10 = (int)**(short **)(uVar23 + lVar18);
            if (iVar10 == 0xd) {
LAB_140a9ba75:
              cStack_277 = '\x01';
            }
            else if ((iVar10 == 0xf) || (iVar10 == 0x10)) {
override_jmp_140a9ba4b_case_7:
              cStack_278 = '\x01';
              cVar7 = '\x01';
            }
            else if (iVar10 == 0x11) {
              cStack_275 = '\x01';
            }
            else if (iVar10 == 0x12) {
              if (uVar9 == 0x49) {
                cStack_273 = '\x01';
              }
              else {
                cStack_276 = '\x01';
              }
            }
            else {
              uVar8 = FUN_14146ff00(0x1423ed870,iVar10,
                                    *(undefined4 *)(*(short **)(uVar23 + lVar18) + 2));
              cVar7 = cStack_278;
              if (uVar8 < 8) {
                    /* WARNING: Switch is manually overridden */
                switch(uVar8) {
                case 0:
                  cStack_26f = '\x01';
                  break;
                case 1:
                  cStack_274 = '\x01';
                  break;
                case 2:
                  goto LAB_140a9ba75;
                case 3:
                  cStack_270 = '\x01';
                  break;
                case 4:
                  cStack_271 = '\x01';
                  break;
                case 5:
                  cStack_272 = '\x01';
                  break;
                case 6:
                  cStack_276 = '\x01';
                  break;
                case 7:
                  goto override_jmp_140a9ba4b_case_7;
                }
              }
              else {
                sVar29 = sVar29 + 1;
              }
            }
            param_11 = iStack_260;
            uVar24 = (int)uVar17 + 1;
            uVar23 = uVar23 + 8;
            lVar18 = **(longlong **)(lVar30 + 0x98);
            uVar17 = (ulonglong)uVar24;
          } while ((ulonglong)(longlong)(int)uVar24 <
                   (ulonglong)((*(longlong **)(lVar30 + 0x98))[1] - lVar18 >> 3));
          uVar25 = (ulonglong)uStack_26a;
          uVar22 = (ulonglong)uStack_264;
          sStack_26c = sVar29;
          if (cVar7 != '\0') {
            FUN_140070fd0(param_1,"filthy ",7);
          }
          if (cStack_275 != '\0') {
            FUN_140070fd0(param_1,"sticky ",7);
          }
          if (cStack_277 != '\0') {
            FUN_140070fd0(param_1,"vomitous ",9);
          }
          if (cStack_274 != '\0') {
            FUN_140070fd0(param_1,"slimy ",6);
          }
          if (cStack_273 != '\0') {
            FUN_140070fd0(param_1,"stagnant ",9);
          }
          if (cStack_276 != '\0') {
            FUN_140070fd0(param_1,"dirty ",6);
          }
          if (cStack_272 != '\0') {
            FUN_140070fd0(param_1,"gooey ",6);
          }
          if (cStack_271 != '\0') {
            FUN_140070fd0(param_1,"purulent ",9);
          }
          if (cStack_270 != '\0') {
            FUN_140070fd0(param_1,"ichorous ",9);
          }
          if (cStack_26f != '\0') {
            FUN_140070fd0(param_1,"bloody ",7);
          }
        }
      }
    }
    sVar29 = (short)uVar25;
    if (uStack_26e == 0x49) {
      if ((sVar29 == -1) && (param_13 == 0)) {
        workshop_supplier_0x70b20(param_1,"liquid");
        goto LAB_140a9be7c;
      }
      if ((param_11 == -1) || (iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar10 == 0)) {
LAB_140a9bd5f:
        uStack_288 = CONCAT22(uStack_288._2_2_,1);
LAB_140a9be40:
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,uVar25 & 0xffff,uVar22 & 0xffffffff);
      }
      else {
        uVar31 = 0;
        iVar10 = iVar10 + -1;
        uVar17 = uVar31;
        uVar23 = uVar31;
        if (-1 < iVar10) {
          do {
            iVar14 = (int)uVar17 + iVar10 >> 1;
            uVar23 = *(ulonglong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
            iVar26 = *(int *)(uVar23 + 0x1c);
            if (iVar26 == param_11) break;
            iVar11 = iVar14 + -1;
            if (iVar26 < param_11) {
              uVar17 = (ulonglong)(iVar14 + 1);
              iVar11 = iVar10;
            }
            uVar23 = uVar31;
            iVar10 = iVar11;
          } while ((int)uVar17 <= iVar11);
        }
        if (((uVar23 == 0) || ((*(byte *)(uVar23 + 200) & 1) == 0)) ||
           (199 < (ushort)(sVar29 - 0x13U))) goto LAB_140a9bd5f;
        workshop_supplier_0x70c50(auStack_b0);
        FUN_140aba4d0(uVar22 & 0xffff,auStack_b0,0,0xffffffff);
        FUN_140070b60(&pppppppuStack_250,auStack_b0);
        workshop_supplier_0x70b20(&pppppppuStack_250," paste");
        FUN_140070e10(auStack_b0);
      }
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
    }
    else if (uStack_26e == 0x4b) {
      if ((sVar29 != -1) || (param_13 != 0)) {
        iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
        if ((iVar10 == 0) || (param_11 == -1)) {
LAB_140a9be2a:
          uVar28 = 0;
        }
        else {
          iVar26 = 0;
          iVar10 = iVar10 + -1;
          if (-1 < iVar10) {
            do {
              iVar14 = iVar26 + iVar10 >> 1;
              lVar30 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
              if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9bdfc;
              iVar11 = iVar14 + -1;
              if (*(int *)(lVar30 + 0x1c) < param_11) {
                iVar11 = iVar10;
                iVar26 = iVar14 + 1;
              }
              iVar10 = iVar11;
            } while (iVar26 <= iVar10);
          }
          lVar30 = 0;
LAB_140a9bdfc:
          if (lVar30 == 0) goto LAB_140a9be2a;
          if ((*(uint *)(lVar30 + 0xc4) & 4) == 0) {
            if ((*(uint *)(lVar30 + 0xc4) & 2) == 0) {
              uVar28 = 0;
            }
            else {
              uVar28 = 5;
            }
          }
          else {
            uVar28 = 4;
          }
        }
        uStack_288 = CONCAT22(uStack_288._2_2_,uVar28);
        goto LAB_140a9be40;
      }
      workshop_supplier_0x70b20(param_1,"glob");
    }
LAB_140a9be7c:
    if (((0 < sStack_26c) && (iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar10 != 0)) &&
       (param_11 != -1)) {
      uVar23 = 0;
      iVar10 = iVar10 + -1;
      uVar25 = uVar23;
      uVar22 = uVar23;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)uVar25 + iVar10 >> 1;
          uVar22 = *(ulonglong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
          iVar26 = *(int *)(uVar22 + 0x1c);
          if (iVar26 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar26 < param_11) {
            uVar25 = (ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          iVar10 = iVar11;
          uVar22 = uVar23;
        } while ((int)uVar25 <= iVar10);
      }
      if ((uVar22 != 0) && (plVar13 = *(longlong **)(uVar22 + 0x98), plVar13 != (longlong *)0x0)) {
        bVar3 = false;
        lVar30 = *plVar13;
        uVar25 = uVar23;
        sVar29 = sStack_26c;
        if (plVar13[1] - lVar30 >> 3 != 0) {
          do {
            iVar10 = (int)**(short **)(uVar23 + lVar30);
            if (((((iVar10 != 0xd) && (iVar10 != 0xf)) && (iVar10 != 0x10)) &&
                ((iVar10 != 0x11 && (iVar10 != 0x12)))) &&
               (uVar9 = FUN_14146ff00(0x1423ed870,iVar10,
                                      *(undefined4 *)(*(short **)(uVar23 + lVar30) + 2)), 7 < uVar9)
               ) {
              if (!bVar3) {
                workshop_supplier_0x70b20(param_1," laced with ");
                bVar3 = true;
              }
              workshop_supplier_0x70c50(auStack_90);
              puVar1 = *(undefined2 **)(uVar23 + **(longlong **)(uVar22 + 0x98));
              uStack_288 = CONCAT22(uStack_288._2_2_,puVar1[4]);
              uStack_290 = uStack_290 & 0xffffff00;
              uStack_298 = 0;
              FUN_1414e58e0(0x1423ed870,auStack_90,*puVar1,*(undefined4 *)(puVar1 + 2));
              workshop_supplier_0xbb2d0(param_1,auStack_90);
              if (sVar29 < 3) {
                if (sVar29 == 2) {
                  pcVar21 = " and ";
                  goto LAB_140a9c01d;
                }
              }
              else {
                pcVar21 = ", ";
LAB_140a9c01d:
                workshop_supplier_0x70b20(param_1,pcVar21);
              }
              sVar29 = sVar29 + -1;
              FUN_140070e10(auStack_90);
            }
            uVar24 = (int)uVar25 + 1;
            uVar23 = uVar23 + 8;
            lVar30 = **(longlong **)(uVar22 + 0x98);
            uVar25 = (ulonglong)uVar24;
          } while ((ulonglong)(longlong)(int)uVar24 <
                   (ulonglong)((*(longlong **)(uVar22 + 0x98))[1] - lVar30 >> 3));
        }
      }
    }
    goto LAB_140a9e96b;
  case 0x4a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    pcVar21 = "coin";
    goto LAB_140a9e94d;
  case 0x4c:
    bVar4 = false;
    if (param_4 == 0) {
      if (((int)param_5 < 0) || ((ulonglong)(_DAT_142508c50 - _DAT_142508c48 >> 3) <= uVar22)) {
        FUN_140070fd0(param_1,"small ",6);
      }
      else {
        lVar30 = *(longlong *)(_DAT_142508c48 + uVar22 * 8);
        if ((*(int *)(lVar30 + 0x40) < 3) ||
           ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 2) & 0x20) == 0)) {
          bVar3 = false;
        }
        if (!bVar3) goto LAB_140a99958;
        bVar4 = true;
      }
LAB_140a9997f:
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)0x0;
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_1f0,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_1f0;
      if (0xf < uStack_1d8) {
        pppppppuVar20 = pppppppuStack_1f0;
      }
      FUN_140070fd0(param_1,pppppppuVar20,uStack_1e0);
      if (!bVar4) {
        FUN_1400bb140(param_1,0x20);
      }
      if (0xf < uStack_1d8) {
        uVar22 = uStack_1d8 + 1;
        pppppppuVar20 = pppppppuStack_1f0;
        if (0xfff < uVar22) {
          uVar22 = uStack_1d8 + 0x28;
          pppppppuVar20 = (undefined8 *******)pppppppuStack_1f0[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_1f0 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_140a9d5fe;
        }
        workshop_supplier_0x154de20(pppppppuVar20,uVar22);
      }
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)((ulonglong)pppppppuStack_1f0 & 0xffffffffffffff00);
      if (!bVar4) goto LAB_140a99a38;
    }
    else {
LAB_140a99958:
      FUN_140070fd0(param_1,"small ",6);
      if ((param_4 != 0xffff) || (param_13 != 0)) goto LAB_140a9997f;
LAB_140a99a38:
      FUN_140070fd0(param_1,"rock",4);
    }
    if (param_1[2] == 0) {
      FUN_140070e90(param_1,"small rock",10);
    }
    goto LAB_140a9e96b;
  case 0x4d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    lVar30 = workshop_material_record_lookup(0x1423ed870,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 7) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140070fd0(param_1,"tube",4);
        goto LAB_140a9e96b;
      }
    }
    FUN_140070fd0(param_1,"pipe section",0xc);
    goto LAB_140a9e96b;
  case 0x4e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "hatch cover";
    break;
  case 0x4f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "grate";
    break;
  case 0x50:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "quern";
    break;
  case 0x51:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\t';
    pcVar21 = "millstone";
    break;
  case 0x52:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "splint";
    break;
  case 0x53:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    pcVar21 = "crutch";
    goto LAB_140a997df;
  case 0x54:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    uVar27 = 0xe;
    pcVar21 = "traction bench";
    goto LAB_140a997e5;
  case 0x55:
    if (param_11 == -1) {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
        workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
        FUN_1400bb140(param_1,0x20);
      }
      FUN_140070fd0(param_1,"limb/body ",10);
LAB_140a9a746:
      pcVar21 = "cast";
    }
    else {
      iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        if (-1 < iVar10) {
          do {
            iVar26 = (int)uVar23 + iVar10 >> 1;
            lVar30 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar26 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9a66d;
            iVar14 = iVar26 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              uVar23 = (ulonglong)(iVar26 + 1);
              iVar14 = iVar10;
            }
            iVar10 = iVar14;
          } while ((int)uVar23 <= iVar14);
        }
        lVar30 = 0;
LAB_140a9a66d:
        if (lVar30 != 0) {
          workshop_supplier_0xbb2d0(param_1,lVar30 + 0x108);
          if (*(longlong *)(lVar30 + 0x118) != 0) {
            FUN_1400bb140(param_1,0x20);
          }
          workshop_supplier_0xbb2d0(param_1,lVar30 + 0xe8);
          if (*(longlong *)(lVar30 + 0xf8) != 0) {
            FUN_1400bb140(param_1,0x20);
            pcVar21 = "cast";
            goto LAB_140a9e94d;
          }
          goto LAB_140a9a746;
        }
      }
      workshop_supplier_0x70b20(param_1,"limb/body ");
      pcVar21 = "cast";
    }
    goto LAB_140a9e94d;
  case 0x56:
    iVar10 = (int)(_DAT_142508ef8 - _DAT_142508ef0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142508ef0 + lVar30 * 8) + 0x28) == param_3) {
          uVar23 = *(ulonglong *)(_DAT_142508ef0 + (longlong)iVar10 * 8);
          if ((uVar23 != 0) && (*(longlong *)(uVar23 + 0xe8) != 0)) {
            workshop_supplier_0xbb2d0(param_1,uVar23 + 0xd8);
            workshop_supplier_0x70b20(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      if (((uVar23 != 0) &&
          (((iVar10 = FUN_1400ec6e0(10,uVar23 + 0xc0), iVar10 != -1 &&
            (cVar7 = FUN_14146fea0(0x1423ed870,0x41,param_4,param_5), cVar7 != '\0')) &&
           (plVar13 = (longlong *)FUN_140073ca0(&DAT_1424017d0,param_11), plVar13 != (longlong *)0x0
           )))) && (cVar7 = (**(code **)(*plVar13 + 0x728))(plVar13), cVar7 == '\0')) {
        workshop_supplier_0x70b20(param_1,"unglazed ");
      }
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    if ((param_11 != -1) && (iVar10 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3), iVar10 != 0)) {
      plVar19 = (longlong *)0x0;
      iVar10 = iVar10 + -1;
      plVar16 = plVar19;
      plVar13 = plVar19;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar16 + iVar10 >> 1;
          plVar13 = *(longlong **)(_DAT_1424017d0 + (longlong)iVar14 * 8);
          iVar26 = *(int *)((longlong)plVar13 + 0x1c);
          if (iVar26 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar26 < param_11) {
            plVar16 = (longlong *)(ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          plVar13 = plVar19;
          iVar10 = iVar11;
        } while ((int)plVar16 <= iVar11);
      }
      if (((plVar13 != (longlong *)0x0) &&
          (iVar10 = (**(code **)(*plVar13 + 0x748))(plVar13), iVar10 != -1)) &&
         (lVar30 = *(longlong *)(_DAT_142513450 + (longlong)iVar10 * 8),
         puVar12 = *(undefined8 **)(lVar30 + 0x90),
         *(longlong *)(lVar30 + 0x98) - (longlong)puVar12 >> 3 != 0)) {
        workshop_supplier_0xbb2d0(param_1,*puVar12);
        FUN_1400bb140(param_1,0x20);
      }
    }
    if (uVar23 == 0) {
      cVar7 = '\x04';
      pcVar21 = "tool";
      break;
    }
    lVar30 = 0x88;
    if (param_6 == 1) {
      lVar30 = 0x68;
    }
    workshop_supplier_0xbb2d0(param_1,lVar30 + uVar23);
    goto LAB_140a9e96b;
  case 0x57:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    iVar10 = 0;
    iVar26 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
    if ((iVar26 != 0) && (param_11 != -1)) {
      iVar26 = iVar26 + -1;
      if (-1 < iVar26) {
        do {
          iVar14 = iVar10 + iVar26 >> 1;
          plVar13 = *(longlong **)(_DAT_1424017d0 + (longlong)iVar14 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto LAB_140a9d11d;
          iVar11 = iVar14 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            iVar11 = iVar26;
            iVar10 = iVar14 + 1;
          }
          iVar26 = iVar11;
        } while (iVar10 <= iVar11);
      }
      plVar13 = (longlong *)0x0;
LAB_140a9d11d:
      if (plVar13 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x718))(plVar13);
        if (uVar9 < 0x1a) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar9) {
          case 0:
            workshop_supplier_0x70b20(param_1,"memorial");
            break;
          default:
            goto override_jmp_140a9d150_case_1;
          case 7:
            workshop_supplier_0x70b20(param_1,"food imports sign");
            break;
          case 8:
            workshop_supplier_0x70b20(param_1,"clothing imports sign");
            break;
          case 9:
            workshop_supplier_0x70b20(param_1,"general imports sign");
            break;
          case 10:
            workshop_supplier_0x70b20(param_1,"cloth shop sign");
            break;
          case 0xb:
            workshop_supplier_0x70b20(param_1,"leather shop sign");
            break;
          case 0xc:
            workshop_supplier_0x70b20(param_1,"woven clothing shop sign");
            break;
          case 0xd:
            workshop_supplier_0x70b20(param_1,"leather clothing shop sign");
            break;
          case 0xe:
            workshop_supplier_0x70b20(param_1,"bone carver\'s shop sign");
            break;
          case 0xf:
            workshop_supplier_0x70b20(param_1,"gem cutter\'s shop sign");
            break;
          case 0x10:
            workshop_supplier_0x70b20(param_1,"weaponsmith\'s shop sign");
            break;
          case 0x11:
            workshop_supplier_0x70b20(param_1,"bowyer\'s shop sign");
            break;
          case 0x12:
            workshop_supplier_0x70b20(param_1,"blacksmith\'s shop sign");
            break;
          case 0x13:
            workshop_supplier_0x70b20(param_1,"armorsmith\'s shop sign");
            break;
          case 0x14:
            workshop_supplier_0x70b20(param_1,"metal craft shop sign");
            break;
          case 0x15:
            workshop_supplier_0x70b20(param_1,"leather goods shop sign");
            break;
          case 0x16:
            workshop_supplier_0x70b20(param_1,"carpenter\'s shop sign");
            break;
          case 0x17:
            workshop_supplier_0x70b20(param_1,"stone furniture shop sign");
            break;
          case 0x18:
            workshop_supplier_0x70b20(param_1,"metal furniture shop sign");
            break;
          case 0x19:
            workshop_supplier_0x70b20(param_1,"tavern sign");
          }
        }
        else {
override_jmp_140a9d150_case_1:
          workshop_supplier_0x70b20(param_1,"slab");
        }
        goto LAB_140a9e95b;
      }
    }
    pcVar21 = "slab";
LAB_140a9e94d:
    cVar7 = '\x04';
    break;
  case 0x58:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto LAB_140a9daea;
      }
      else if (-1 < (short)param_4) {
        if ((uVar25 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) && (-1 < sVar29)) {
          lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
          lVar18 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
            pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
              }
              FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto LAB_140a9db2e;
          }
        }
LAB_140a9daea:
        if (uVar25 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) {
          lVar30 = *(longlong *)(_DAT_142508de8 + uVar25 * 8);
          pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
            }
            FUN_140070e90(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
LAB_140a9db2e:
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_140070fd0(param_1," ",1);
    }
    FUN_140070fd0(param_1,"egg",3);
    goto LAB_140a9e96b;
  case 0x59:
    uVar27 = 7;
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_140070fd0(param_1,"-bound ",7);
    }
    if (param_6 == 1) {
      uVar27 = 5;
    }
    pcVar21 = "codices";
    if (param_6 == 1) {
      pcVar21 = "codex";
    }
    FUN_140070fd0(param_1,pcVar21,uVar27);
    goto LAB_140a9e96b;
  case 0x5a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      iVar26 = (int)(_DAT_1424017d8 - _DAT_1424017d0 >> 3);
      if ((iVar26 == 0) || (param_11 == -1)) {
LAB_140a9b676:
        uVar28 = 0;
      }
      else {
        iVar26 = iVar26 + -1;
        if (-1 < iVar26) {
          do {
            iVar14 = iVar10 + iVar26 >> 1;
            lVar30 = *(longlong *)(_DAT_1424017d0 + (longlong)iVar14 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9b64d;
            iVar11 = iVar14 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              iVar11 = iVar26;
              iVar10 = iVar14 + 1;
            }
            iVar26 = iVar11;
          } while (iVar10 <= iVar26);
        }
        lVar30 = 0;
LAB_140a9b64d:
        if (lVar30 == 0) goto LAB_140a9b676;
        if ((*(uint *)(lVar30 + 0xec) & 1) == 0) {
          if ((*(uint *)(lVar30 + 0xec) & 2) == 0) goto LAB_140a9b676;
          uVar28 = 5;
        }
        else {
          uVar28 = 4;
        }
      }
      uStack_288 = CONCAT22(uStack_288._2_2_,uVar28);
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"sheet",5);
    goto LAB_140a9e96b;
  case 0x5b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    pcVar21 = "branch";
LAB_140a997df:
    uVar27 = 6;
LAB_140a997e5:
    FUN_140070fd0(param_1,pcVar21,uVar27);
    if (param_6 == 1) goto LAB_140a9e9a7;
    FUN_140070fd0(param_1,"es",2);
    goto LAB_140a9e96b;
  case 0x5c:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140070fd0(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb140(param_1,0x20);
    }
    FUN_140070fd0(param_1,"bolt thrower parts",0x12);
    goto LAB_140a9e96b;
  }
  FUN_140070fd0(param_1,pcVar21,cVar7);
LAB_140a9e95b:
  if (param_6 != 1) {
LAB_140a9e961:
    uVar27 = 0x73;
LAB_140a9e963:
    FUN_1400bb140(param_1,uVar27);
LAB_140a9e96b:
    if (1 < (int)param_6) {
LAB_140a9e971:
      FUN_140070fd0(param_1," [",2);
      FUN_140542fb0(param_6,param_1);
      FUN_140070fd0(param_1,"]",1);
    }
  }
LAB_140a9e9a7:
  FUN_140070e10(&pppppppuStack_250);
  FUN_140070e10(&uStack_230);
  FUN_14154de00(uStack_50 ^ (ulonglong)auStack_2b8);
  return;
LAB_140a9df22:
  if (*(longlong *)(lVar18 + 0xb8) != 0) {
    workshop_supplier_0xbb2d0(param_1,lVar18 + 0xa8);
    workshop_supplier_0x70b20(param_1," ");
  }
  if ((param_4 != 0xffff) || (param_13 != 0)) {
    uStack_288 = uStack_288 & 0xffff0000;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
    workshop_supplier_0xbb2d0(param_1,&pppppppuStack_250);
    FUN_1400bb140(param_1,0x20);
  }
LAB_140a9df9b:
  pppppppuVar20 = (undefined8 *******)(lVar18 + 0x88);
  if (param_6 == 1) {
    workshop_supplier_0xbb2d0(param_1,lVar18 + 0x68);
  }
  else {
LAB_140a9dcd4:
    workshop_supplier_0xbb2d0(param_1,pppppppuVar20);
  }
  goto LAB_140a9e96b;
}


/* classic PE:6aea11a5:0272d000; string-length-error; RVA 0x66e50..0x66e62 */

void workshop_string_length_error(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* classic PE:6aea11a5:0272d000; tooltip-paragraph-list-splitter; RVA 0x8fe540..0x8fe816 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_tooltip_paragraph_list_splitter(longlong param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  int iStack_78;
  int iStack_74;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  if (0 < param_3) {
    uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_98;
    bVar1 = false;
    uStack_60 = 0;
    uVar6 = 0;
    uStack_58 = 0;
    uStack_50 = 0xf;
    pppuStack_68 = (undefined8 ****)0x0;
    iStack_78 = 0;
    lVar9 = *param_2;
    iStack_74 = param_3;
    if (param_2[1] - lVar9 >> 3 != 0) {
      lVar10 = 0;
      do {
        iVar12 = 0;
        lVar8 = 0;
        if (*(longlong *)(*(longlong *)(lVar9 + lVar10) + 0x10) != 0) {
          do {
            iVar11 = iVar12;
            if (bVar1) {
              puVar2 = *(undefined8 **)(lVar9 + lVar10);
              if (0xf < (ulonglong)puVar2[3]) {
                puVar2 = (undefined8 *)*puVar2;
              }
              if (*(char *)(lVar8 + (longlong)puVar2) != ' ') {
                bVar1 = false;
                goto LAB_1408fe5e4;
              }
            }
            else {
LAB_1408fe5e4:
              FUN_1400bb140(&pppuStack_68);
              uVar6 = uStack_58;
              if ((ulonglong)(longlong)iStack_74 < uStack_58) {
                iVar5 = 0;
                lVar9 = 0;
                puVar2 = *(undefined8 **)(lVar10 + *param_2);
                do {
                  iVar11 = iVar11 + -1;
                  lVar8 = lVar8 + -1;
                  iVar5 = iVar5 + 1;
                  lVar9 = lVar9 + 1;
                  puVar3 = puVar2;
                  if (0xf < (ulonglong)puVar2[3]) {
                    puVar3 = (undefined8 *)*puVar2;
                  }
                } while ((*(char *)(lVar8 + (longlong)puVar3) != ' ') && (0 < lVar8));
                if ((longlong)iVar5 == uStack_58) {
                  FUN_1404fc970(puVar2,(longlong)(iVar12 + -1)," ",1);
                }
                else {
                  uVar6 = uStack_58 - lVar9;
                  if (uStack_58 < uVar6) {
                    FUN_1400e2870(&pppuStack_68,uVar6 - uStack_58);
                  }
                  else {
                    ppppuVar4 = &pppuStack_68;
                    if (0xf < uStack_50) {
                      ppppuVar4 = (undefined8 ****)pppuStack_68;
                    }
                    uStack_58 = uVar6;
                    *(undefined1 *)((longlong)ppppuVar4 + uVar6) = 0;
                  }
                  ppppuVar4 = (undefined8 ****)FUN_14154de30(0x20);
                  *ppppuVar4 = (undefined8 ***)0x0;
                  ppppuVar4[1] = (undefined8 ***)0x0;
                  ppppuVar4[2] = (undefined8 ***)0x0;
                  ppppuVar4[3] = (undefined8 ***)0xf;
                  *(undefined1 *)ppppuVar4 = 0;
                  pppuStack_70 = ppppuVar4;
                  if (ppppuVar4 != &pppuStack_68) {
                    ppppuVar7 = &pppuStack_68;
                    if (0xf < uStack_50) {
                      ppppuVar7 = (undefined8 ****)pppuStack_68;
                    }
                    FUN_140070e90(ppppuVar4,ppppuVar7);
                  }
                  if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
                    FUN_1400bc2f0(param_1);
                  }
                  else {
                    **(undefined8 **)(param_1 + 8) = ppppuVar4;
                    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
                  }
                  bVar1 = true;
                }
                uStack_58 = 0;
                ppppuVar4 = &pppuStack_68;
                if (0xf < uStack_50) {
                  ppppuVar4 = (undefined8 ****)pppuStack_68;
                }
                *(undefined1 *)ppppuVar4 = 0;
                uVar6 = uStack_58;
              }
            }
            iVar12 = iVar11 + 1;
            lVar8 = lVar8 + 1;
            lVar9 = *param_2;
          } while ((ulonglong)(longlong)iVar12 <
                   *(ulonglong *)(*(longlong *)(lVar9 + lVar10) + 0x10));
        }
        iStack_78 = iStack_78 + 1;
        lVar10 = lVar10 + 8;
      } while ((ulonglong)(longlong)iStack_78 < (ulonglong)(param_2[1] - lVar9 >> 3));
      if (uVar6 != 0) {
        ppppuVar4 = (undefined8 ****)FUN_14154de30(0x20);
        *ppppuVar4 = (undefined8 ***)0x0;
        ppppuVar4[1] = (undefined8 ***)0x0;
        ppppuVar4[2] = (undefined8 ***)0x0;
        ppppuVar4[3] = (undefined8 ***)0xf;
        *(undefined1 *)ppppuVar4 = 0;
        pppuStack_70 = ppppuVar4;
        if (ppppuVar4 != &pppuStack_68) {
          ppppuVar7 = &pppuStack_68;
          if (0xf < uStack_50) {
            ppppuVar7 = (undefined8 ****)pppuStack_68;
          }
          FUN_140070e90(ppppuVar4,ppppuVar7,uVar6);
        }
        puVar2 = *(undefined8 **)(param_1 + 8);
        if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
          FUN_1400bc2f0(param_1,puVar2,&pppuStack_70);
        }
        else {
          *puVar2 = ppppuVar4;
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
        }
      }
    }
    FUN_140070e10(&pppuStack_68);
    FUN_14154de00(uStack_48 ^ (ulonglong)auStack_98);
  }
  return;
}


/* classic PE:6aea11a5:0272d000; reaction-reagent-description; RVA 0xeef290..0xeef42e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_reaction_reagent_description(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_168 [32];
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined2 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_114;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong alStack_b8 [3];
  undefined1 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined1 auStack_60 [40];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_168;
  workshop_supplier_0x1fddc0(&uStack_148);
  uStack_148 = *(undefined2 *)(param_1 + 0x30);
  uStack_146 = *(undefined2 *)(param_1 + 0x32);
  uStack_144 = *(undefined2 *)(param_1 + 0x34);
  iStack_140 = (int)*(short *)(param_1 + 0x36);
  uStack_13c = *(undefined4 *)(param_1 + 0x78);
  uStack_12c = *(undefined4 *)(param_1 + 0x7c);
  uStack_124 = *(undefined4 *)(param_1 + 0x80);
  uStack_11c = *(undefined4 *)(param_1 + 0x84);
  uStack_114 = *(undefined4 *)(param_1 + 0x88);
  plVar1 = (longlong *)(param_1 + 0x38);
  if ((longlong *)auStack_108 != plVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0x50)) {
      plVar1 = (longlong *)*plVar1;
    }
    FUN_140070e90(auStack_108,plVar1,*(undefined8 *)(param_1 + 0x48));
  }
  uStack_c3 = *(longlong *)(param_1 + 0x48) != 0;
  plVar1 = (longlong *)(param_1 + 0x58);
  if ((longlong *)auStack_e8 != plVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      plVar1 = (longlong *)*plVar1;
    }
    FUN_140070e90(auStack_e8,plVar1,*(undefined8 *)(param_1 + 0x68));
  }
  uStack_c2 = *(longlong *)(param_1 + 0x68) != 0;
  uStack_c8 = *(undefined4 *)(param_1 + 0x8c);
  uStack_c0 = *(undefined4 *)(param_1 + 0x90);
  plVar1 = (longlong *)(param_1 + 0x98);
  if (alStack_b8 != plVar1) {
    FUN_1400bbf00(alStack_b8,*plVar1,*(longlong *)(param_1 + 0xa0) - *plVar1 >> 2);
  }
  uStack_a0 = *(longlong *)(param_1 + 0xa0) - *plVar1 >> 2 != 0;
  uStack_9e = *(undefined2 *)(param_1 + 0xb0);
  uStack_9c = *(undefined4 *)(param_1 + 0xb4);
  uStack_bc = param_3;
  workshop_job_item_requirement(&uStack_148,param_2,1);
  FUN_140544330(param_2);
  FUN_140070d10(auStack_60);
  FUN_140070d10(alStack_b8);
  FUN_140070e10(auStack_e8);
  FUN_140070e10(auStack_108);
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_168);
  return;
}


