/* Actual Ghidra output; researcher-assigned role. Native entry 140a9c6b0; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void item_requirement_noun
               (undefined8 *param_1,short param_2,short param_3,ushort param_4,uint param_5,
               uint param_6,uint param_7,char param_8,longlong param_9,undefined2 param_10,
               int param_11,char param_12,uint param_13,byte param_14)

{
  undefined2 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  undefined8 uVar28;
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
  short sStack_26e;
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
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_2b8;
  uVar26 = (ulonglong)(short)param_4;
  uVar23 = (ulonglong)(int)param_5;
  uStack_264 = param_5;
  iStack_260 = param_11;
  uStack_228 = 0;
  lStack_220 = 0;
  uStack_218 = 0xf;
  uStack_230 = (undefined8 *)0x0;
  lVar30 = 0;
  sStack_26e = param_2;
  uStack_26a = param_4;
  if ((param_12 == '\0') &&
     ((((param_2 == 0x19 || (param_2 == 0x1a)) || (param_2 == 0x1c)) ||
      ((param_2 == 0x1d || (param_2 == 0x3c)))))) {
    iVar10 = FUN_1413797d0(param_2,param_3,param_10);
    if (iVar10 == 1) {
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6c616d73);
      uVar6 = 0x6c;
    }
    else {
      lVar30 = 0;
      if (iVar10 != 2) goto LAB_140a9c7fc;
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6772616c);
      uVar6 = 0x65;
    }
    lVar30 = 5;
    uVar24 = (ulonglong)uStack_230 >> 0x28;
    uStack_230._0_5_ = CONCAT14(uVar6,(undefined4)uStack_230);
    uStack_230 = (undefined8 *)(CONCAT35((int3)uVar24,(undefined5)uStack_230) & 0xffff00ffffffffff);
    lStack_220 = 5;
  }
LAB_140a9c7fc:
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
    FUN_140071040(param_1,&UNK_1416ec2cc,6);
    lVar30 = lStack_220;
  }
  uStack_248 = 0;
  uVar24 = 0;
  lStack_240 = 0;
  uStack_238 = 0xf;
  pppppppuStack_250 = (undefined8 *******)0x0;
  bVar3 = true;
  sVar29 = (short)param_5;
  iVar10 = 0;
  switch(sStack_26e) {
  case 0:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        supplier_140070b90(param_1,&UNK_1416597e8);
      }
      else {
        supplier_140070cc0(auStack_f0);
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,auStack_f0,0,param_5);
        supplier_1400bb340(param_1,auStack_f0);
        FUN_140070e80(auStack_f0);
        if ((-1 < (int)param_5) &&
           (uVar23 < (ulonglong)(lRam000000014250ed50 - lRam000000014250ed48 >> 3))) {
          lVar30 = *(longlong *)(lRam000000014250ed48 + uVar23 * 8);
          if ((*(int *)(lVar30 + 0x40) < 4) ||
             ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 3) & 2) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            supplier_140070b90(param_1,&UNK_1416f0390);
            goto code_r0x000140aa1b0b;
          }
        }
      }
      supplier_140070b90(param_1,&UNK_1416f0398);
    }
    else if (param_4 == 7) {
      if (param_5 == 1) {
        supplier_140070b90(param_1,&UNK_1416f03a0);
      }
      else {
        puVar22 = &UNK_1416f0348;
        if (param_5 != 0) {
          puVar22 = &UNK_1416f0350;
        }
        supplier_140070b90(param_1,puVar22);
      }
    }
    else if (param_4 == 0xffff) {
      supplier_140070b90(param_1,&UNK_1416f0360);
    }
    else {
      supplier_140070cc0(auStack_110);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,auStack_110,param_4,param_5);
      supplier_1400bb340(param_1,auStack_110);
      FUN_140070e80(auStack_110);
    }
    goto code_r0x000140aa1b0b;
  case 1:
    uStack_298 = 0xffffffff;
    if ((param_11 != -1) &&
       (iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), uStack_298 = 0xffffffff,
       iVar10 != 0)) {
      iVar10 = iVar10 + -1;
      if (-1 < iVar10) {
        do {
          iVar27 = (int)uVar24 + iVar10 >> 1;
          plVar13 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar27 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto code_r0x000140a9cedd;
          iVar14 = iVar27 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            uVar24 = (ulonglong)(iVar27 + 1);
            iVar14 = iVar10;
          }
          iVar10 = iVar14;
        } while ((int)uVar24 <= iVar14);
      }
      plVar13 = (longlong *)0x0;
code_r0x000140a9cedd:
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
    cVar8 = FUN_1414fb130(param_13,&pppppppuStack_1d0,param_4,param_5);
    if (cVar8 == '\0') {
      if (param_4 == 0xffff) {
        supplier_140070b90(param_1,&UNK_14161cef8);
      }
      else if (param_4 == 3) {
        supplier_140070b90(param_1,&UNK_1416f0368);
      }
      else if (param_4 == 4) {
        supplier_140070b90(param_1,&UNK_1416f0308);
      }
      else if (param_4 == 5) {
        supplier_140070b90(param_1,&UNK_1416f0320);
      }
      else if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          supplier_140070b90(param_1,&UNK_1416f0338);
        }
      }
      else {
        supplier_140070cc0(auStack_d0);
        uStack_298 = CONCAT31(uStack_298._1_3_,1);
        FUN_1414eaa00(0x1423f3970,auStack_d0,param_4,param_5);
        supplier_1400bb340(param_1,auStack_d0);
        FUN_140070e80(auStack_d0);
      }
    }
    else {
      pppppppuVar21 = &pppppppuStack_1d0;
      if (0xf < uStack_1b8) {
        pppppppuVar21 = pppppppuStack_1d0;
      }
      FUN_140071040(param_1,pppppppuVar21,uStack_1c0);
    }
    if (0xf < uStack_1b8) {
      if (0xfff < uStack_1b8 + 1) {
        uVar23 = uStack_1b8 + 0x28;
        pppppppuVar21 = (undefined8 *******)pppppppuStack_1d0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1d0 + (-8 - (longlong)pppppppuVar21)))
        goto code_r0x000140aa079e;
      }
      supplier_1415530d0();
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0xf;
    pppppppuStack_1d0 = (undefined8 *******)((ulonglong)pppppppuStack_1d0 & 0xffffffffffffff00);
    goto code_r0x000140aa1b0b;
  case 2:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
      FUN_140071040(param_1,&UNK_1416f0340,6);
    }
    else if (*(longlong *)(lVar30 + 0x340) == 0) {
      supplier_140070b90(param_1,&UNK_1416f0340);
    }
    else {
      supplier_1400bb340(param_1,lVar30 + 0x330);
    }
    goto code_r0x000140aa1b0b;
  case 3:
    if (param_4 == 0xffff) {
      FUN_140071040(param_1,&UNK_14161cf38,10);
    }
    else if (param_4 == 3) {
      supplier_140070b90(param_1,&UNK_1416f0400);
    }
    else if (param_4 == 4) {
      supplier_140070b90(param_1,&UNK_1416f0410);
    }
    else if (param_4 == 5) {
      supplier_140070b90(param_1,&UNK_1416f03b0);
    }
    else if (param_5 == 0xffffffff) {
      if (param_4 == 0) {
        supplier_140070b90(param_1,&UNK_14161cf38);
      }
    }
    else {
      supplier_140070cc0(auStack_170);
      supplier_140070b90(param_1,&UNK_1416ecb08);
      uStack_298 = CONCAT31(uStack_298._1_3_,1);
      FUN_1414eaa00(0x1423f3970,auStack_170,param_4,param_5);
      supplier_1400bb340(param_1,auStack_170);
      FUN_140070e80(auStack_170);
    }
    goto code_r0x000140aa1b0b;
  case 4:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        supplier_140070b90(param_1,&UNK_1416f03e0);
      }
      else {
        supplier_140070cc0(auStack_150);
        FUN_1414ea960(0x1423f3970,auStack_150,0,param_5);
        supplier_1400bb340(param_1,auStack_150);
        FUN_140070e80(auStack_150);
      }
    }
    else if ((param_4 == 0xffff) && (param_13 == 0)) {
      supplier_140070b90(param_1,&UNK_1416f0380);
    }
    else {
      supplier_140070cc0(auStack_130);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,auStack_130,param_4,param_5);
      supplier_1400bb340(param_1,auStack_130);
      FUN_140070e80(auStack_130);
    }
    goto code_r0x000140aa1b0b;
  case 5:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      if ((param_7 & 0x20) == 0) {
code_r0x000140a9c900:
        FUN_140071040(param_1,&UNK_14169c7a4,4);
      }
    }
    else {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      if ((param_7 & 0x20) == 0) {
        FUN_1400bb1b0(param_1,0x20);
        goto code_r0x000140a9c900;
      }
    }
    goto code_r0x000140aa1b0b;
  case 6:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (((lVar30 == 0) || (*(int *)(lVar30 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    cVar8 = cVar7 * '\x02' + '\x04';
    puVar22 = &UNK_1416f02d8;
    if (cVar7 == '\0') {
      puVar22 = &UNK_1416f02e0;
    }
    break;
  case 7:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\t';
    puVar22 = &UNK_1416f02e8;
    break;
  case 8:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x03';
    puVar22 = &UNK_14164bc40;
    break;
  case 9:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        supplier_140070b90(param_1,&UNK_14164bc30);
        goto code_r0x000140aa1afb;
      }
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0914;
    break;
  case 10:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
code_r0x000140a9dc07:
      if (((((param_13 & 4) == 0) &&
           (cVar8 = FUN_141475150(0x1423f3970,0x1d,param_4,param_5), cVar8 == '\0')) &&
          ((param_13 & 0x10) == 0)) &&
         (((cVar8 = FUN_141475150(0x1423f3970,0x1e,param_4,param_5), cVar8 == '\0' &&
           ((param_13 & 8) == 0)) &&
          ((cVar8 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5), cVar8 == '\0' &&
           ((param_13 >> 0xc & 1) == 0)))))) {
        supplier_140070b90(param_1,&UNK_1416f0974);
        goto code_r0x000140aa1afb;
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
      if (!bVar3) goto code_r0x000140a9dc07;
    }
    puVar22 = &UNK_1416f0274;
    goto code_r0x000140aa1aed;
  case 0xb:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
code_r0x000140a9dd30:
      if (((((((param_13 & 4) == 0) &&
             (cVar8 = FUN_141475150(0x1423f3970,0x1d,param_4,param_5), cVar8 == '\0')) &&
            ((param_13 & 0x10) == 0)) &&
           ((cVar8 = FUN_141475150(0x1423f3970,0x1e,param_4,param_5), cVar8 == '\0' &&
            ((param_13 & 8) == 0)))) &&
          (cVar8 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5), cVar8 == '\0')) &&
         ((param_13 >> 0xc & 1) == 0)) {
        cVar8 = FUN_141475150(0x1423f3970,0x31,param_4,param_5);
        if (cVar8 == '\0') {
          supplier_140070b90(param_1,&UNK_1416f0994);
        }
        else {
          supplier_140070b90(param_1,&UNK_1416f098c);
        }
        goto code_r0x000140aa1afb;
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
      if (!bVar3) goto code_r0x000140a9dd30;
    }
    cVar8 = '\t';
    puVar22 = &UNK_1416f0980;
    break;
  case 0xc:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
code_r0x000140a9e295:
      cVar8 = '\x06';
      puVar22 = &UNK_1416f091c;
      break;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    pppppppuVar21 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar21 = pppppppuStack_250;
    }
    FUN_140071040(param_1,pppppppuVar21,lStack_240);
    FUN_1400bb1b0(param_1,0x20);
    if ((ushort)(param_4 - 0x1a3) < 200) {
      supplier_140070b90(param_1,&UNK_1416f096c);
    }
    else {
      if ((param_4 != 0) || (cVar8 = FUN_141475150(0x1423f3970,0x2f,0,param_5), cVar8 != '\0'))
      goto code_r0x000140a9e295;
      supplier_140070b90(param_1,&UNK_1416f0970);
    }
    goto code_r0x000140aa1afb;
  case 0xd:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(lRam000000014250f280 - lRam000000014250f278 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f278 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(lRam000000014250f278 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar19 = 0x88;
            if (param_6 == 1) {
              lVar19 = 0x68;
            }
            supplier_1400bb340(param_1,lVar19 + lVar30);
            goto code_r0x000140aa1b0b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    cVar8 = '\x12';
    puVar22 = &UNK_1416f0948;
    break;
  case 0xe:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(lRam000000014250efe0 - lRam000000014250efd8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250efd8 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(lRam000000014250efd8 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar19 = 0x88;
            if (param_6 == 1) {
              lVar19 = 0x68;
            }
            supplier_1400bb340(param_1,lVar19 + lVar30);
            goto code_r0x000140aa1b0b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    cVar8 = '\x03';
    puVar22 = &UNK_1416eaffc;
    break;
  case 0xf:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0924;
    break;
  case 0x10:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (((lVar30 == 0) || (*(int *)(lVar30 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    cVar8 = '\t';
    if (!bVar3) {
      cVar8 = '\x04';
    }
    puVar22 = &UNK_1416f0930;
    if (!bVar3) {
      puVar22 = &UNK_1416f093c;
    }
    break;
  case 0x11:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f08f4;
    break;
  case 0x12:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f08fc;
    break;
  case 0x13:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\v';
    puVar22 = &UNK_1416f0908;
    break;
  case 0x14:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x05';
    puVar22 = &UNK_14164bc44;
    break;
  case 0x15:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        supplier_140070b90(param_1,&UNK_1416f025c);
        goto code_r0x000140aa1afb;
      }
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        supplier_140070b90(param_1,&UNK_1416f0268);
        puVar22 = &UNK_1416e980c;
        if (param_6 == 1) {
          puVar22 = &UNK_14165def0;
        }
        supplier_140070b90(param_1,puVar22);
        goto code_r0x000140aa1b0b;
      }
    }
    supplier_140070b90(param_1,&UNK_14164bc38);
    goto code_r0x000140aa1afb;
  case 0x16:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0e14;
    break;
  case 0x17:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0be8;
    break;
  case 0x18:
    iVar10 = (int)(lRam000000014250efb0 - lRam000000014250efa8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250efa8 + lVar30 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250efa8 + (longlong)iVar10 * 8);
          if (lVar19 != 0) goto code_r0x000140aa10c2;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    supplier_140070b90(param_1,&UNK_1416eb054);
    goto code_r0x000140aa1afb;
  case 0x19:
    if (lVar30 != 0) {
      supplier_1400bb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(lRam000000014250f298 - lRam000000014250f290 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f290 + lVar30 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250f290 + (longlong)iVar10 * 8);
          if (lVar19 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar19 + 0xb8) != 0)) {
              supplier_1400bb340(param_1,lVar19 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar19 + 0xf8) != 0) {
              supplier_1400bb340(param_1,lVar19 + 0xe8);
              supplier_140070b90(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar19 + 0xd8) != 0) {
                pppppppuVar21 = (undefined8 *******)(lVar19 + 200);
                goto code_r0x000140aa12db;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar21 = &pppppppuStack_250;
code_r0x000140aa12db:
              supplier_1400bb340(param_1,pppppppuVar21);
              FUN_1400bb1b0(param_1,0x20);
            }
            cVar8 = FUN_141475150(0x1423f3970,0x2f,param_4,param_5);
            if (cVar8 == '\0') goto code_r0x000140aa113b;
            lVar30 = lVar19 + 0x118;
            goto code_r0x000140aa1314;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (1 < (int)param_6) {
      supplier_140070b90(param_1,&UNK_1416f0aa0);
    }
    supplier_140070b90(param_1,&UNK_1416eb05c);
    goto code_r0x000140aa1b0b;
  case 0x1a:
    if (lVar30 != 0) {
      supplier_1400bb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar19 = 0;
    iVar10 = (int)(lRam000000014250f2f8 - lRam000000014250f2f0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f2f0 + lVar30 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250f2f0 + (longlong)iVar10 * 8);
          if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0xb8) != 0)) {
            supplier_1400bb340(param_1,lVar19 + 0xa8);
            supplier_140070b90(param_1," ");
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (lVar19 != 0) {
code_r0x000140aa16c2:
      lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
      if (lVar30 != 0) {
        if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar30 = lVar19 + 0xe8;
code_r0x000140aa1314:
          cVar8 = supplier_1400735c0(lVar30,7);
          if (cVar8 != '\0') {
            supplier_140070b90(param_1,&UNK_1416f0a94);
          }
        }
      }
      goto code_r0x000140aa113b;
    }
    FUN_140071040(param_1,&UNK_1416f0a68,8);
    goto code_r0x000140aa1b0b;
  case 0x1b:
    iVar10 = (int)(lRam000000014250f310 - lRam000000014250f308 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f308 + lVar30 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250f308 + (longlong)iVar10 * 8);
          if (lVar19 != 0) goto code_r0x000140aa10c2;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    supplier_140070b90(param_1,&UNK_1416eafe4);
    if (param_6 == 1) {
      supplier_140070b90(param_1,&UNK_1416f0a58);
      goto LAB_140aa1b47;
    }
    FUN_1400bb1b0(param_1,0x73);
    supplier_140070b90(param_1,&UNK_1416f0a58);
    goto code_r0x000140aa1b01;
  case 0x1c:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140071040(param_1,puVar12,lVar30);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar19 = 0;
    iVar10 = (int)(lRam000000014250f328 - lRam000000014250f320 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f320 + lVar30 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250f320 + (longlong)iVar10 * 8);
          if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0xb8) != 0)) {
            supplier_1400bb340(param_1,lVar19 + 0xa8);
            supplier_140070b90(param_1," ");
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (lVar19 != 0) goto code_r0x000140aa16c2;
    FUN_140071040(param_1,&UNK_1416f0a78,8);
    goto code_r0x000140aa1b0b;
  case 0x1d:
    if (lVar30 != 0) {
      supplier_1400bb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = 0;
    iVar10 = (int)(lRam000000014250f2e0 - lRam000000014250f2d8 >> 3) + -1;
    lVar19 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f2d8 + lVar19 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(lRam000000014250f2d8 + (longlong)iVar10 * 8);
          if ((lVar30 != 0) && (*(longlong *)(lVar30 + 0xb8) != 0)) {
            supplier_1400bb340(param_1,lVar30 + 0xa8);
            supplier_140070b90(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (((param_11 != -1) &&
        (plVar13 = (longlong *)FUN_140073d10(0x1424078d0,param_11), plVar13 != (longlong *)0x0)) &&
       (lVar19 = (**(code **)(*plVar13 + 0x208))(plVar13), lVar19 != 0)) {
      cVar8 = supplier_1400735c0(lVar19,0);
      if (cVar8 != '\0') {
        supplier_140070b90(param_1,&UNK_141656244);
      }
      cVar8 = supplier_1400735c0(lVar19,1);
      if (cVar8 != '\0') {
        supplier_140070b90(param_1,&UNK_1416561e0);
      }
    }
    if (lVar30 == 0) {
      supplier_140070b90(param_1,&UNK_1416f0a48);
    }
    else {
      cVar8 = FUN_141475150(0x1423f3970,0x2f,param_4,param_5);
      if ((cVar8 != '\0') && (cVar8 = supplier_1400735c0(lVar30 + 0xe8,7), cVar8 != '\0')) {
        supplier_140070b90(param_1,&UNK_1416f0a94);
      }
      pppppppuVar21 = (undefined8 *******)(lVar30 + 0x88);
      if (param_6 != 1) goto code_r0x000140aa0e74;
      supplier_1400bb340(param_1,lVar30 + 0x68);
    }
    goto code_r0x000140aa1b0b;
  case 0x1e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
code_r0x000140a9d613:
      if (param_4 != 0) {
        if (param_4 != 0xffff) goto code_r0x000140a9d642;
        if (param_6 == 1) {
          supplier_140070b90(param_1,&UNK_1416f02d0);
          goto LAB_140aa1b47;
        }
        puVar22 = &UNK_1416f02ac;
        goto code_r0x000140a9d66a;
      }
      cVar8 = FUN_141475150(0x1423f3970,0x2f,0,param_5);
      if (cVar8 == '\0') {
        puVar22 = &UNK_1416f02a4;
      }
      else {
code_r0x000140a9d642:
        puVar22 = &UNK_141657c28;
      }
      supplier_140070b90(param_1,puVar22);
      if (param_6 == 1) goto LAB_140aa1b47;
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 7) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto code_r0x000140a9d613;
      FUN_140071040(param_1,&UNK_1416f02d0,3);
      if (param_6 == 1) goto LAB_140aa1b47;
      puVar22 = &UNK_1416f02d4;
code_r0x000140a9d66a:
      supplier_140070b90(param_1,puVar22);
    }
    FUN_140071040(param_1,&UNK_1416044f0,1);
    goto code_r0x000140aa1b0b;
  case 0x1f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x03';
    puVar22 = &UNK_1416f02b4;
    break;
  case 0x20:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x03';
    puVar22 = &UNK_1416f02cc;
    break;
  case 0x21:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\v';
    puVar22 = &UNK_141657c00;
    break;
  case 0x22:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\v';
    puVar22 = &UNK_141657c10;
    break;
  case 0x23:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\a';
    puVar22 = &UNK_141657c20;
    break;
  case 0x24:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\b';
    puVar22 = &UNK_1416f0888;
    break;
  case 0x25:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0758;
    break;
  case 0x26:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\a';
    puVar22 = &UNK_1416f0738;
    break;
  case 0x27:
    iVar10 = (int)(lRam000000014250f2b0 - lRam000000014250f2a8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f2a8 + lVar30 * 8) + 0x28) == param_3) {
          uVar24 = *(ulonglong *)(lRam000000014250f2a8 + (longlong)iVar10 * 8);
          if ((uVar24 != 0) && (*(longlong *)(uVar24 + 0xb8) != 0)) {
            supplier_1400bb340(param_1,uVar24 + 0xa8);
            FUN_1400bb1b0(param_1,0x20);
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (uVar24 == 0) {
      FUN_140071040(param_1,&UNK_1416f0728,10);
    }
    else {
      lVar30 = uVar24 + 0x88;
      if (param_6 == 1) {
        lVar30 = uVar24 + 0x68;
      }
      supplier_1400bb340(param_1,lVar30);
    }
    goto code_r0x000140aa1b0b;
  case 0x28:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x05';
    puVar22 = &UNK_1416f0740;
    break;
  case 0x29:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    puVar22 = &UNK_1416f06c8;
    goto code_r0x000140aa1aed;
  case 0x2a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\a';
    puVar22 = &UNK_1416f06d0;
    break;
  case 0x2b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\b';
    puVar22 = &UNK_1416f06d8;
    break;
  case 0x2c:
    if (param_9 == 0) {
      uVar28 = 6;
      puVar22 = &UNK_141666420;
    }
    else {
      uVar28 = 8;
      puVar22 = &UNK_1416f06e8;
    }
    FUN_140071040(param_1,puVar22,uVar28);
    plVar13 = (longlong *)0x0;
    if ((param_11 == -1) ||
       (iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), iVar10 == 0)) {
code_r0x000140a9fc90:
      uStack_298 = 0xffffffff;
    }
    else {
      iVar10 = iVar10 + -1;
      plVar20 = plVar13;
      plVar16 = plVar13;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar20 + iVar10 >> 1;
          plVar16 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar14 * 8);
          iVar27 = *(int *)((longlong)plVar16 + 0x1c);
          if (iVar27 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar27 < param_11) {
            plVar20 = (longlong *)(ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          plVar16 = plVar13;
          iVar10 = iVar11;
        } while ((int)plVar20 <= iVar11);
      }
      if (plVar16 == (longlong *)0x0) goto code_r0x000140a9fc90;
      uStack_298 = (**(code **)(*plVar16 + 0x748))(plVar16);
    }
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    uStack_288 = param_13;
    uStack_290 = param_6;
    cVar8 = FUN_1414fb130(0,&pppppppuStack_1b0,param_4,param_5);
    if (cVar8 == '\0') {
      if (param_4 == 3) {
        supplier_140070b90(param_1,&UNK_1416f06f8);
      }
      else if (param_4 == 4) {
        supplier_140070b90(param_1,&UNK_1416f0708);
      }
      else {
        if (param_4 != 5) {
          if (param_4 == 0xffff) {
            if (param_13 == 0) goto code_r0x000140a9fd43;
code_r0x000140a9fdb5:
            supplier_140070cc0(auStack_70);
            uStack_288 = uStack_288 & 0xffff0000;
            uStack_290 = CONCAT31(uStack_290._1_3_,1);
            uStack_298 = param_13;
            FUN_1414eab90(0x1423f3970,auStack_70,param_4,param_5);
            supplier_1400bb340(param_1,auStack_70);
            supplier_140070b90(param_1,&UNK_1416f06c0);
            if (param_6 != 1) {
              FUN_1400bb1b0(param_1,0x73);
            }
            puVar15 = auStack_70;
          }
          else {
            if (param_4 != 0) goto code_r0x000140a9fdb5;
            supplier_140070cc0(auStack_190);
            if (param_6 == 1) {
              uStack_298 = (uint)uStack_298._1_3_ << 8;
            }
            else {
              uStack_298 = CONCAT31(uStack_298._1_3_,1);
            }
            FUN_1414eaa00(0x1423f3970,auStack_190,0,param_5);
            supplier_1400bb340(param_1,auStack_190);
            puVar15 = auStack_190;
          }
          FUN_140070e80(puVar15);
          goto code_r0x000140a9fe28;
        }
        supplier_140070b90(param_1,&UNK_1416f0718);
      }
code_r0x000140a9fd43:
      supplier_140070b90(param_1,&UNK_1416316ac);
      if (param_6 != 1) {
        FUN_1400bb1b0(param_1,0x73);
      }
    }
    else {
      pppppppuVar21 = &pppppppuStack_1b0;
      if (0xf < uStack_198) {
        pppppppuVar21 = pppppppuStack_1b0;
      }
      FUN_140071040(param_1,pppppppuVar21,uStack_1a0);
    }
code_r0x000140a9fe28:
    if (0xf < uStack_198) {
      uVar23 = uStack_198 + 1;
      pppppppuVar21 = pppppppuStack_1b0;
      if (0xfff < uVar23) {
        uVar23 = uStack_198 + 0x28;
        pppppppuVar21 = (undefined8 *******)pppppppuStack_1b0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1b0 + (-8 - (longlong)pppppppuVar21))) {
code_r0x000140aa079e:
          _invalid_parameter_noinfo_noreturn(pppppppuVar21,uVar23);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      supplier_1415530d0(pppppppuVar21,uVar23);
    }
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)((ulonglong)pppppppuStack_1b0 & 0xffffffffffffff00);
    goto code_r0x000140aa1b0b;
  case 0x2d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x05';
    puVar22 = &UNK_1416f0750;
    break;
  case 0x2e:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    if ((param_13 >> 9 & 1) == 0) {
      if ((param_13 & 0x20) == 0) {
        if ((param_13 & 0x40) == 0) {
          if ((param_13 & 1) == 0) {
            if ((param_13 & 8) == 0) {
              if ((param_13 & 0x10) == 0) {
                if ((char)param_13 < '\0') {
                  supplier_140070b90(param_1,&UNK_1416f0bb8);
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        puVar22 = &UNK_1416f0b68;
                        if ((param_13 >> 0xd & 1) == 0) {
                          puVar22 = &UNK_1416a0ac0;
                        }
                        supplier_140070b90(param_1,puVar22);
                      }
                      else {
                        supplier_140070b90(param_1,&UNK_1416f0b58);
                      }
                    }
                    else {
                      supplier_140070b90(param_1,"pearl");
                    }
                  }
                  else {
                    supplier_140070b90(param_1,"horn");
                  }
                }
                else {
                  supplier_140070b90(param_1,&UNK_1416f0bd0);
                }
              }
              else {
                supplier_140070b90(param_1,&UNK_1416f0ba0);
              }
            }
            else {
              supplier_140070b90(param_1,&UNK_1416f0b90);
            }
          }
          else {
            supplier_140070b90(param_1,&UNK_1416f0bf8);
          }
        }
        else {
          supplier_140070b90(param_1,"shell");
        }
      }
      else {
        supplier_140070b90(param_1,"bone");
      }
      goto code_r0x000140aa1afb;
    }
    if (param_6 == 1) {
      supplier_140070b90(param_1,&UNK_14163167c);
      goto LAB_140aa1b47;
    }
    supplier_140070b90(param_1,&UNK_1416f0bf0);
    goto code_r0x000140aa1b0b;
  case 0x2f:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0b80,7);
    }
    if (param_4 == 0xffff) {
      FUN_140071040(param_1,&UNK_14169ebd0,7);
    }
    else {
      lStack_240 = 0;
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar21 = 0;
      if ((-1 < (short)param_4) &&
         (uVar26 < (ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3))) {
        lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
        pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
        if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
          if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
            pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
          }
          FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
        }
      }
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
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
      FUN_140146540(0x14250eec8,&pppppppuStack_210,param_4,param_5 & 0xffff);
      pppppppuVar21 = &pppppppuStack_210;
      if (0xf < uStack_1f8) {
        pppppppuVar21 = pppppppuStack_210;
      }
      FUN_140071040(param_1,pppppppuVar21,uStack_200);
      if (0xf < uStack_1f8) {
        uVar23 = uStack_1f8 + 1;
        pppppppuVar21 = pppppppuStack_210;
        if (0xfff < uVar23) {
          uVar23 = uStack_1f8 + 0x28;
          pppppppuVar21 = (undefined8 *******)pppppppuStack_210[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_210 + (-8 - (longlong)pppppppuVar21)))
          goto code_r0x000140aa079e;
        }
        supplier_1415530d0(pppppppuVar21,uVar23);
      }
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)((ulonglong)pppppppuStack_210 & 0xffffffffffffff00);
    }
    goto code_r0x000140aa1b0b;
  case 0x30:
    if ((param_7 >> 8 & 1) != 0) {
      supplier_140070b90(param_1,&UNK_1416f0898);
    }
    if ((param_7 & 4) != 0) {
      supplier_140070b90(param_1,&UNK_1416f0ad8);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,&UNK_1416f0a8c,4);
      goto code_r0x000140aa1b0b;
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
      supplier_140070b90(param_1,&UNK_1416f0a8c);
      goto code_r0x000140aa1b0b;
    }
    uVar32 = extraout_XMM0_Da;
    if (*(longlong *)(lVar30 + 0x2f8) != 0) {
      supplier_1400bb340(param_1,lVar30 + 0x2e8);
      uVar32 = FUN_1400bb1b0(param_1,0x20);
    }
    uVar25 = FUN_14071b3a0(uVar32,param_4,param_5);
    if (uVar25 != 0xffffffff) {
      FUN_140abd670(uVar25 & 0xffff,&pppppppuStack_250,0,0xffffffff);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (*(longlong *)(lVar30 + 0x2b8) != 0) {
      if (param_6 == 1) {
        supplier_1400bb340(param_1,lVar30 + 0x2a8);
        goto LAB_140aa1b47;
      }
      supplier_1400bb340(param_1,lVar30 + 0x2c8);
      goto code_r0x000140aa1b0b;
    }
    supplier_1400bb340(param_1,lVar30 + 0xb8);
    if ((int)param_6 < 2) {
      supplier_140070b90(param_1,&UNK_1416f0a84);
      goto LAB_140aa1b47;
    }
    supplier_140070b90(param_1,&UNK_1416f0ae4);
    goto code_r0x000140aa1b11;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    if (param_4 == 0xffff) {
      supplier_140070b90(param_1,&UNK_1416c19a0);
      goto code_r0x000140aa1b0b;
    }
    lStack_240 = 0;
    pppppppuVar21 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar21 = pppppppuStack_250;
    }
    *(undefined1 *)pppppppuVar21 = 0;
    if (((sVar29 == -1) || ((short)param_4 < 0)) ||
       (((ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3) <= uVar26 || (sVar29 < 0))))
    {
code_r0x000140aa0de1:
      uStack_298 = uStack_298 & 0xffffff00;
      FUN_14025a490(0x14250eec8,&pppppppuStack_250,param_4,1);
    }
    else {
      lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
      lVar19 = *(longlong *)(lVar30 + 0x178);
      if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar19 >> 3) <= (ulonglong)(longlong)sVar29)
      goto code_r0x000140aa0de1;
      lVar30 = *(longlong *)(lVar19 + (longlong)sVar29 * 8);
      pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
      if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
        if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
          pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
        }
        FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
      }
      if (lStack_240 == 0) goto code_r0x000140aa0de1;
    }
    supplier_1400bb340(param_1,&pppppppuStack_250);
    cVar8 = func_0x0001400f3d20(0x14250eec8,param_4,param_5 & 0xffff);
code_r0x000140aa0b6a:
    if (cVar8 == '\0') {
      supplier_140070b90(param_1,", ");
      uVar28 = 0xc;
    }
    else {
      if (cVar8 != '\x01') goto code_r0x000140aa1b0b;
      supplier_140070b90(param_1,", ");
      uVar28 = 0xb;
    }
    goto code_r0x000140aa1b03;
  case 0x32:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    FUN_140071040(param_1,&UNK_1416f0b50,4);
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar21 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto code_r0x000140aa0ab0;
      }
      else if (-1 < (short)param_4) {
        if ((uVar26 < (ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3)) &&
           (-1 < sVar29)) {
          lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
          lVar19 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar19 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar19 + (longlong)sVar29 * 8);
            pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
              }
              FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto code_r0x000140aa0af4;
          }
        }
code_r0x000140aa0ab0:
        if (uVar26 < (ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3)) {
          lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
          pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
            }
            FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
code_r0x000140aa0af4:
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      if ((((short)param_4 < 0) ||
          ((ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3) <= uVar26)) || (sVar29 < 0)
         ) {
code_r0x000140aa0b63:
        cVar8 = -1;
      }
      else {
        lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
        lVar19 = *(longlong *)(lVar30 + 0x178);
        if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar19 >> 3) <=
            (ulonglong)(param_5 & 0xffff)) goto code_r0x000140aa0b63;
        cVar8 = *(char *)(*(longlong *)(lVar19 + (ulonglong)(param_5 & 0xffff) * 8) + 0x15b8);
      }
      goto code_r0x000140aa0b6a;
    }
    FUN_140071040(param_1,&UNK_1416c19a0,4);
    goto code_r0x000140aa1b0b;
  case 0x33:
    if (param_4 != 0xffff) {
      puVar22 = &UNK_1416f0af0;
code_r0x000140aa0e4f:
      supplier_140070b90(param_1,puVar22);
      FUN_140abd670(param_4,&pppppppuStack_250,param_6 != 1,0xffffffff);
      pppppppuVar21 = &pppppppuStack_250;
      goto code_r0x000140aa0e74;
    }
    supplier_140070b90(param_1,&UNK_1416f0af8);
    goto code_r0x000140aa1afb;
  case 0x34:
    if (param_4 != 0xffff) {
      puVar22 = &UNK_1416f0b0c;
      goto code_r0x000140aa0e4f;
    }
    supplier_140070b90(param_1,&UNK_1416f0ab0);
    goto code_r0x000140aa1afb;
  case 0x35:
    if ((ushort)(param_4 - 0x1a3) < 200) {
      func_0x000140a7e760(0x14250ed78,&pppppppuStack_250,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        pppppppuVar21 = &pppppppuStack_250;
        if (0xf < uStack_238) {
          pppppppuVar21 = pppppppuStack_250;
        }
        FUN_140071040(param_1,pppppppuVar21,lStack_240);
        uVar28 = 0x20;
        goto code_r0x000140aa1b03;
      }
      supplier_140070b90(param_1,&UNK_1416f0b88);
    }
    goto code_r0x000140aa1b0b;
  case 0x36:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0b18,9);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,"plant",5);
      if (param_6 == 1) goto LAB_140aa1b47;
      supplier_140070b90(param_1,&UNK_1416044f0);
    }
    else {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      FUN_140146430(0x14250ed78,param_5,&pppppppuStack_250,0);
      supplier_1400bb340(param_1,&pppppppuStack_250);
    }
    goto code_r0x000140aa1b0b;
  case 0x37:
    if ((param_5 == 0xffffffff) && (param_13 == 0)) {
      supplier_140070b90(param_1,&UNK_1416f08e8);
      goto code_r0x000140aa1afb;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
code_r0x000140a9e8b1:
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    pppppppuVar21 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar21 = pppppppuStack_250;
    }
    FUN_140071040(param_1,pppppppuVar21,lStack_240);
    goto code_r0x000140aa1b0b;
  case 0x38:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0b18,9);
    }
    if ((ushort)(param_4 - 0x1a3) < 200) {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      func_0x000140a7e7b0(0x14250ed78,&pppppppuStack_250,param_5,(int)param_3);
      supplier_1400bb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        goto code_r0x000140a9e8b1;
      }
      if (param_6 == 1) {
        supplier_140070b90(param_1,&UNK_1416f0b40);
        goto LAB_140aa1b47;
      }
      supplier_140070b90(param_1,&UNK_1416f0b28);
    }
    goto code_r0x000140aa1b0b;
  case 0x39:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
code_r0x000140a9e64f:
      if ((param_13 & 8) != 0) goto code_r0x000140a9e655;
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 3) & 0x40) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto code_r0x000140a9e64f;
code_r0x000140a9e655:
      if ((param_7 & 0x200) != 0) {
        supplier_140070b90(param_1,&UNK_1416f08d0);
        goto code_r0x000140aa1afb;
      }
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        supplier_140070b90(param_1,&UNK_1416f08d8);
        goto code_r0x000140aa1b0b;
      }
    }
    cVar8 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5);
    if (cVar8 == '\0') {
      supplier_140070b90(param_1,&UNK_14163164c);
    }
    else {
      supplier_140070b90(param_1,"yarn");
    }
    goto code_r0x000140aa1b0b;
  case 0x3a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"cloth",5);
    goto code_r0x000140aa1b0b;
  case 0x3b:
    cVar8 = '\x05';
    puVar22 = &UNK_1416f08b0;
    break;
  case 0x3c:
    iVar10 = (int)(lRam000000014250f340 - lRam000000014250f338 >> 3) + -1;
    lVar19 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f338 + lVar19 * 8) + 0x28) == param_3) {
          lVar19 = *(longlong *)(lRam000000014250f338 + (longlong)iVar10 * 8);
          if (lVar19 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar19 + 0xb8) != 0)) {
              supplier_1400bb340(param_1,lVar19 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
              lVar30 = lStack_220;
            }
            if (lVar30 != 0) {
              supplier_1400bb340(param_1,&uStack_230);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar19 + 0xf8) != 0) {
              supplier_1400bb340(param_1,lVar19 + 0xe8);
              supplier_140070b90(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar19 + 0xd8) != 0) {
                pppppppuVar21 = (undefined8 *******)(lVar19 + 200);
                goto code_r0x000140aa1a2b;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar21 = &pppppppuStack_250;
code_r0x000140aa1a2b:
              supplier_1400bb340(param_1,pppppppuVar21);
              FUN_1400bb1b0(param_1,0x20);
            }
            lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
            if (lVar30 == 0) goto code_r0x000140aa113b;
            if ((*(int *)(lVar30 + 0x298) < 6) ||
               (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto code_r0x000140aa113b;
            lVar30 = lVar19 + 0x128;
            goto code_r0x000140aa1314;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
    if (lVar30 != 0) {
      supplier_1400bb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f09f8,7);
    goto code_r0x000140aa1b0b;
  case 0x3d:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140071040(param_1,puVar12,lVar30);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\b';
    puVar22 = &UNK_1416f02b8;
    break;
  case 0x3e:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140071040(param_1,puVar12,lVar30);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0254;
    break;
  case 0x3f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f07c8,0xe);
    goto code_r0x000140aa1b0b;
  case 0x40:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f07b0,0xe);
    goto code_r0x000140aa1b0b;
  case 0x41:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(lRam000000014250f2c8 - lRam000000014250f2c0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250f2c0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(lRam000000014250f2c0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar19 = 0x88;
            if (param_6 == 1) {
              lVar19 = 0x68;
            }
            supplier_1400bb340(param_1,lVar19 + lVar30);
            goto code_r0x000140aa1b0b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    FUN_140071040(param_1,&UNK_1416f0778,10);
    goto code_r0x000140aa1b0b;
  case 0x42:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x13';
    puVar22 = &UNK_1416f0760;
    break;
  case 0x43:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f07f0,10);
    goto code_r0x000140aa1b0b;
  case 0x44:
    iVar10 = (int)(lRam000000014250efc8 - lRam000000014250efc0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250efc0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(lRam000000014250efc0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            if (*(longlong *)(lVar30 + 0xb8) != 0) {
              supplier_1400bb340(param_1,lVar30 + 0xa8);
              supplier_140070b90(param_1," ");
            }
            if ((param_4 != 0xffff) || (param_13 != 0)) {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              supplier_1400bb340(param_1,&pppppppuStack_250);
              FUN_1400bb1b0(param_1,0x20);
            }
            lVar19 = lVar30 + 0x88;
            if (param_6 == 1) {
              lVar19 = lVar30 + 0x68;
            }
            supplier_1400bb340(param_1,lVar19);
            goto code_r0x000140aa1b0b;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x0e';
    puVar22 = &UNK_1416f07a0;
    break;
  case 0x45:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = CONCAT22(uStack_288._2_2_,1);
      uStack_290 = uStack_290 & 0xffffff00;
      goto code_r0x000140a9e8b1;
    }
    supplier_140070b90(param_1,&UNK_1416706c0);
    goto code_r0x000140aa1afb;
  case 0x46:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    iVar10 = 0;
    if ((param_11 != -1) &&
       (iVar27 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), iVar27 != 0)) {
      iVar27 = iVar27 + -1;
      if (-1 < iVar27) {
        do {
          iVar14 = iVar10 + iVar27 >> 1;
          lVar30 = *(longlong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
          if (*(int *)(lVar30 + 0x1c) == param_11) goto code_r0x000140a9f28d;
          iVar11 = iVar14 + -1;
          if (*(int *)(lVar30 + 0x1c) < param_11) {
            iVar11 = iVar27;
            iVar10 = iVar14 + 1;
          }
          iVar27 = iVar11;
        } while (iVar10 <= iVar11);
      }
      lVar30 = 0;
code_r0x000140a9f28d:
      if ((lVar30 != 0) && (*(int *)(lVar30 + 200) != -1)) {
        supplier_1400bb340(param_1,*(longlong *)
                                    (_DAT_142519538 + (longlong)*(int *)(lVar30 + 200) * 8) + 0x50);
        supplier_140070b90(param_1,&UNK_1416f0818);
        goto code_r0x000140aa1b0b;
      }
    }
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      supplier_140070b90(param_1,&UNK_1416f0824);
    }
    else {
      uStack_288 = CONCAT22(uStack_288._2_2_,3);
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      supplier_1400bb340(param_1,&pppppppuStack_250);
    }
    goto code_r0x000140aa1b0b;
  case 0x47:
    if ((param_7 & 0x100) != 0) {
      supplier_140070b90(param_1,&UNK_1416f0898);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      goto code_r0x000140a9e8b1;
    }
    supplier_140070b90(param_1,&UNK_1416f07c0);
    goto code_r0x000140aa1b0b;
  case 0x48:
    cVar8 = '\r';
    puVar22 = &UNK_1416f0ac8;
    break;
  case 0x49:
  case 0x4b:
    sVar29 = 0;
    sStack_26c = 0;
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    sVar5 = sStack_26e;
    if (param_11 != -1) {
      cVar8 = '\0';
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
      iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        iVar27 = 0;
        if (-1 < iVar10) {
          do {
            iVar14 = iVar27 + iVar10 >> 1;
            lStack_258 = *(longlong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
            if (*(int *)(lStack_258 + 0x1c) == param_11) goto code_r0x000140a9eb3b;
            iVar11 = iVar14 + -1;
            if (*(int *)(lStack_258 + 0x1c) < param_11) {
              iVar11 = iVar10;
              iVar27 = iVar14 + 1;
            }
            iVar10 = iVar11;
          } while (iVar27 <= iVar10);
        }
        lStack_258 = 0;
code_r0x000140a9eb3b:
        lVar30 = lStack_258;
        uVar24 = 0;
        if (((lStack_258 != 0) &&
            (plVar13 = *(longlong **)(lStack_258 + 0x98), plVar13 != (longlong *)0x0)) &&
           (lVar19 = *plVar13, uVar17 = uVar24, plVar13[1] - lVar19 >> 3 != 0)) {
          do {
            iVar10 = (int)**(short **)(uVar24 + lVar19);
            if (iVar10 == 0xd) {
code_r0x000140a9ec15:
              cStack_277 = '\x01';
            }
            else if ((iVar10 == 0xf) || (iVar10 == 0x10)) {
code_r0x000140a9edee:
              cStack_278 = '\x01';
              cVar8 = '\x01';
            }
            else if (iVar10 == 0x11) {
              cStack_275 = '\x01';
            }
            else if (iVar10 == 0x12) {
              if (sVar5 == 0x49) {
                cStack_273 = '\x01';
              }
              else {
                cStack_276 = '\x01';
              }
            }
            else {
              uVar9 = FUN_1414751b0(0x1423f3970,iVar10,
                                    *(undefined4 *)(*(short **)(uVar24 + lVar19) + 2));
              cVar8 = cStack_278;
              switch(uVar9) {
              case 0:
                cStack_26f = '\x01';
                break;
              case 1:
                cStack_274 = '\x01';
                break;
              case 2:
                goto code_r0x000140a9ec15;
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
                goto code_r0x000140a9edee;
              default:
                sVar29 = sVar29 + 1;
              }
            }
            param_11 = iStack_260;
            uVar25 = (int)uVar17 + 1;
            uVar24 = uVar24 + 8;
            lVar19 = **(longlong **)(lVar30 + 0x98);
            uVar17 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)((*(longlong **)(lVar30 + 0x98))[1] - lVar19 >> 3));
          uVar26 = (ulonglong)uStack_26a;
          uVar23 = (ulonglong)uStack_264;
          sStack_26c = sVar29;
          if (cVar8 != '\0') {
            FUN_140071040(param_1,&UNK_1416f08a0,7);
          }
          if (cStack_275 != '\0') {
            FUN_140071040(param_1,&UNK_1416f08a8,7);
          }
          if (cStack_277 != '\0') {
            FUN_140071040(param_1,&UNK_1416f0860,9);
          }
          if (cStack_274 != '\0') {
            FUN_140071040(param_1,&UNK_1416f086c,6);
          }
          if (cStack_273 != '\0') {
            FUN_140071040(param_1,&UNK_1416dab38,9);
          }
          if (cStack_276 != '\0') {
            FUN_140071040(param_1,&UNK_1416f0874,6);
          }
          if (cStack_272 != '\0') {
            FUN_140071040(param_1,&UNK_1416f087c,6);
          }
          if (cStack_271 != '\0') {
            FUN_140071040(param_1,&UNK_1416f0830,9);
          }
          if (cStack_270 != '\0') {
            FUN_140071040(param_1,&UNK_1416f0840,9);
          }
          if (cStack_26f != '\0') {
            FUN_140071040(param_1,&UNK_1416f0850,7);
          }
        }
      }
    }
    sVar29 = (short)uVar26;
    if (sStack_26e == 0x49) {
      if ((sVar29 == -1) && (param_13 == 0)) {
        supplier_140070b90(param_1,&UNK_1416c6750);
        goto code_r0x000140a9f01c;
      }
      if ((param_11 == -1) ||
         (iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), iVar10 == 0)) {
code_r0x000140a9eeff:
        uStack_288 = CONCAT22(uStack_288._2_2_,1);
code_r0x000140a9efe0:
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,uVar26 & 0xffff,uVar23 & 0xffffffff);
      }
      else {
        uVar31 = 0;
        iVar10 = iVar10 + -1;
        uVar17 = uVar31;
        uVar24 = uVar31;
        if (-1 < iVar10) {
          do {
            iVar14 = (int)uVar17 + iVar10 >> 1;
            uVar24 = *(ulonglong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
            iVar27 = *(int *)(uVar24 + 0x1c);
            if (iVar27 == param_11) break;
            iVar11 = iVar14 + -1;
            if (iVar27 < param_11) {
              uVar17 = (ulonglong)(iVar14 + 1);
              iVar11 = iVar10;
            }
            uVar24 = uVar31;
            iVar10 = iVar11;
          } while ((int)uVar17 <= iVar11);
        }
        if (((uVar24 == 0) || ((*(byte *)(uVar24 + 200) & 1) == 0)) ||
           (199 < (ushort)(sVar29 - 0x13U))) goto code_r0x000140a9eeff;
        supplier_140070cc0(auStack_b0);
        FUN_140abd670(uVar23 & 0xffff,auStack_b0,0,0xffffffff);
        FUN_140070bd0(&pppppppuStack_250,auStack_b0);
        supplier_140070b90(&pppppppuStack_250,&UNK_1416f0858);
        FUN_140070e80(auStack_b0);
      }
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
    }
    else if (sStack_26e == 0x4b) {
      if ((sVar29 != -1) || (param_13 != 0)) {
        iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
        if ((iVar10 == 0) || (param_11 == -1)) {
code_r0x000140a9efca:
          uVar9 = 0;
        }
        else {
          iVar27 = 0;
          iVar10 = iVar10 + -1;
          if (-1 < iVar10) {
            do {
              iVar14 = iVar27 + iVar10 >> 1;
              lVar30 = *(longlong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
              if (*(int *)(lVar30 + 0x1c) == param_11) goto code_r0x000140a9ef9c;
              iVar11 = iVar14 + -1;
              if (*(int *)(lVar30 + 0x1c) < param_11) {
                iVar11 = iVar10;
                iVar27 = iVar14 + 1;
              }
              iVar10 = iVar11;
            } while (iVar27 <= iVar10);
          }
          lVar30 = 0;
code_r0x000140a9ef9c:
          if (lVar30 == 0) goto code_r0x000140a9efca;
          if ((*(uint *)(lVar30 + 0xc4) & 4) == 0) {
            if ((*(uint *)(lVar30 + 0xc4) & 2) == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = 5;
            }
          }
          else {
            uVar9 = 4;
          }
        }
        uStack_288 = CONCAT22(uStack_288._2_2_,uVar9);
        goto code_r0x000140a9efe0;
      }
      supplier_140070b90(param_1,&UNK_1416f07fc);
    }
code_r0x000140a9f01c:
    if (((0 < sStack_26c) &&
        (iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), iVar10 != 0)) &&
       (param_11 != -1)) {
      uVar24 = 0;
      iVar10 = iVar10 + -1;
      uVar26 = uVar24;
      uVar23 = uVar24;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)uVar26 + iVar10 >> 1;
          uVar23 = *(ulonglong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
          iVar27 = *(int *)(uVar23 + 0x1c);
          if (iVar27 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar27 < param_11) {
            uVar26 = (ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          iVar10 = iVar11;
          uVar23 = uVar24;
        } while ((int)uVar26 <= iVar10);
      }
      if ((uVar23 != 0) && (plVar13 = *(longlong **)(uVar23 + 0x98), plVar13 != (longlong *)0x0)) {
        bVar3 = false;
        lVar30 = *plVar13;
        uVar26 = uVar24;
        sVar29 = sStack_26c;
        if (plVar13[1] - lVar30 >> 3 != 0) {
          do {
            iVar10 = (int)**(short **)(uVar24 + lVar30);
            if ((((iVar10 != 0xd) && (iVar10 != 0xf)) && (iVar10 != 0x10)) &&
               ((iVar10 != 0x11 && (iVar10 != 0x12)))) {
              uVar9 = FUN_1414751b0(0x1423f3970,iVar10,
                                    *(undefined4 *)(*(short **)(uVar24 + lVar30) + 2));
              switch(uVar9) {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
                break;
              default:
                if (!bVar3) {
                  supplier_140070b90(param_1,&UNK_1416f0808);
                  bVar3 = true;
                }
                supplier_140070cc0(auStack_90);
                puVar1 = *(undefined2 **)(uVar24 + **(longlong **)(uVar23 + 0x98));
                uStack_288 = CONCAT22(uStack_288._2_2_,puVar1[4]);
                uStack_290 = uStack_290 & 0xffffff00;
                uStack_298 = 0;
                FUN_1414eab90(0x1423f3970,auStack_90,*puVar1,*(undefined4 *)(puVar1 + 2));
                supplier_1400bb340(param_1,auStack_90);
                if (sVar29 < 3) {
                  if (sVar29 == 2) {
                    pcVar18 = " and ";
                    goto code_r0x000140a9f1bd;
                  }
                }
                else {
                  pcVar18 = ", ";
code_r0x000140a9f1bd:
                  supplier_140070b90(param_1,pcVar18);
                }
                sVar29 = sVar29 + -1;
                FUN_140070e80(auStack_90);
              }
            }
            uVar25 = (int)uVar26 + 1;
            uVar24 = uVar24 + 8;
            lVar30 = **(longlong **)(uVar23 + 0x98);
            uVar26 = (ulonglong)uVar25;
          } while ((ulonglong)(longlong)(int)uVar25 <
                   (ulonglong)((*(longlong **)(uVar23 + 0x98))[1] - lVar30 >> 3));
        }
      }
    }
    goto code_r0x000140aa1b0b;
  case 0x4a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    puVar22 = &UNK_1416f0748;
    goto code_r0x000140aa1aed;
  case 0x4c:
    bVar4 = false;
    if (param_4 == 0) {
      if (((int)param_5 < 0) ||
         ((ulonglong)(lRam000000014250ed50 - lRam000000014250ed48 >> 3) <= uVar23)) {
        FUN_140071040(param_1,&UNK_1416a5df4,6);
      }
      else {
        lVar30 = *(longlong *)(lRam000000014250ed48 + uVar23 * 8);
        if ((*(int *)(lVar30 + 0x40) < 3) ||
           ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 2) & 0x20) == 0)) {
          bVar3 = false;
        }
        if (!bVar3) goto code_r0x000140a9caf8;
        bVar4 = true;
      }
code_r0x000140a9cb1f:
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)0x0;
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_1f0,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_1f0;
      if (0xf < uStack_1d8) {
        pppppppuVar21 = pppppppuStack_1f0;
      }
      FUN_140071040(param_1,pppppppuVar21,uStack_1e0);
      if (!bVar4) {
        FUN_1400bb1b0(param_1,0x20);
      }
      if (0xf < uStack_1d8) {
        uVar23 = uStack_1d8 + 1;
        pppppppuVar21 = pppppppuStack_1f0;
        if (0xfff < uVar23) {
          uVar23 = uStack_1d8 + 0x28;
          pppppppuVar21 = (undefined8 *******)pppppppuStack_1f0[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_1f0 + (-8 - (longlong)pppppppuVar21)))
          goto code_r0x000140aa079e;
        }
        supplier_1415530d0(pppppppuVar21,uVar23);
      }
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)((ulonglong)pppppppuStack_1f0 & 0xffffffffffffff00);
      if (!bVar4) goto code_r0x000140a9cbd8;
    }
    else {
code_r0x000140a9caf8:
      FUN_140071040(param_1,&UNK_1416a5df4,6);
      if ((param_4 != 0xffff) || (param_13 != 0)) goto code_r0x000140a9cb1f;
code_r0x000140a9cbd8:
      FUN_140071040(param_1,&UNK_1416f03c4,4);
    }
    if (param_1[2] == 0) {
      FUN_140070f00(param_1,&UNK_1416f03d0,10);
    }
    goto code_r0x000140aa1b0b;
  case 0x4d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 7) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 6) & 2) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140071040(param_1,&UNK_1416f0784,4);
        goto code_r0x000140aa1b0b;
      }
    }
    FUN_140071040(param_1,&UNK_1416f0790,0xc);
    goto code_r0x000140aa1b0b;
  case 0x4e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\v';
    puVar22 = &UNK_1416f02f8;
    break;
  case 0x4f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x05';
    puVar22 = &UNK_1416f02c4;
    break;
  case 0x50:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x05';
    puVar22 = &UNK_1416f0e00;
    break;
  case 0x51:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\t';
    puVar22 = &UNK_1416f0e08;
    break;
  case 0x52:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar8 = '\x06';
    puVar22 = &UNK_1416f0294;
    break;
  case 0x53:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    puVar22 = &UNK_1416f029c;
    goto code_r0x000140a9c97f;
  case 0x54:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    uVar28 = 0xe;
    puVar22 = &UNK_1416f0df0;
    goto code_r0x000140a9c985;
  case 0x55:
    if (param_11 == -1) {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        supplier_1400bb340(param_1,&pppppppuStack_250);
        FUN_1400bb1b0(param_1,0x20);
      }
      FUN_140071040(param_1,&UNK_1416f0280,10);
code_r0x000140a9d8e6:
      puVar22 = &UNK_1416f028c;
    }
    else {
      iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        if (-1 < iVar10) {
          do {
            iVar27 = (int)uVar24 + iVar10 >> 1;
            lVar30 = *(longlong *)(lRam00000001424078d0 + (longlong)iVar27 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto code_r0x000140a9d80d;
            iVar14 = iVar27 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              uVar24 = (ulonglong)(iVar27 + 1);
              iVar14 = iVar10;
            }
            iVar10 = iVar14;
          } while ((int)uVar24 <= iVar14);
        }
        lVar30 = 0;
code_r0x000140a9d80d:
        if (lVar30 != 0) {
          supplier_1400bb340(param_1,lVar30 + 0x108);
          if (*(longlong *)(lVar30 + 0x118) != 0) {
            FUN_1400bb1b0(param_1,0x20);
          }
          supplier_1400bb340(param_1,lVar30 + 0xe8);
          if (*(longlong *)(lVar30 + 0xf8) != 0) {
            FUN_1400bb1b0(param_1,0x20);
            puVar22 = &UNK_1416f028c;
            goto code_r0x000140aa1aed;
          }
          goto code_r0x000140a9d8e6;
        }
      }
      supplier_140070b90(param_1,&UNK_1416f0280);
      puVar22 = &UNK_1416f028c;
    }
    goto code_r0x000140aa1aed;
  case 0x56:
    iVar10 = (int)(lRam000000014250eff8 - lRam000000014250eff0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250eff0 + lVar30 * 8) + 0x28) == param_3) {
          uVar24 = *(ulonglong *)(lRam000000014250eff0 + (longlong)iVar10 * 8);
          if ((uVar24 != 0) && (*(longlong *)(uVar24 + 0xe8) != 0)) {
            supplier_1400bb340(param_1,uVar24 + 0xd8);
            supplier_140070b90(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      if (((uVar24 != 0) &&
          (((iVar10 = FUN_1400ec750(10,uVar24 + 0xc0), iVar10 != -1 &&
            (cVar8 = FUN_141475150(0x1423f3970,0x41,param_4,param_5), cVar8 != '\0')) &&
           (plVar13 = (longlong *)FUN_140073d10(0x1424078d0,param_11), plVar13 != (longlong *)0x0)))
          ) && (cVar8 = (**(code **)(*plVar13 + 0x728))(plVar13), cVar8 == '\0')) {
        supplier_140070b90(param_1,&UNK_1416f0960);
      }
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_11 != -1) &&
       (iVar10 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3), iVar10 != 0)) {
      plVar20 = (longlong *)0x0;
      iVar10 = iVar10 + -1;
      plVar16 = plVar20;
      plVar13 = plVar20;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar16 + iVar10 >> 1;
          plVar13 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar14 * 8);
          iVar27 = *(int *)((longlong)plVar13 + 0x1c);
          if (iVar27 == param_11) break;
          iVar11 = iVar14 + -1;
          if (iVar27 < param_11) {
            plVar16 = (longlong *)(ulonglong)(iVar14 + 1);
            iVar11 = iVar10;
          }
          plVar13 = plVar20;
          iVar10 = iVar11;
        } while ((int)plVar16 <= iVar11);
      }
      if (((plVar13 != (longlong *)0x0) &&
          (iVar10 = (**(code **)(*plVar13 + 0x748))(plVar13), iVar10 != -1)) &&
         (lVar30 = *(longlong *)(lRam0000000142519550 + (longlong)iVar10 * 8),
         puVar12 = *(undefined8 **)(lVar30 + 0x90),
         *(longlong *)(lVar30 + 0x98) - (longlong)puVar12 >> 3 != 0)) {
        supplier_1400bb340(param_1,*puVar12);
        FUN_1400bb1b0(param_1,0x20);
      }
    }
    if (uVar24 == 0) {
      cVar8 = '\x04';
      puVar22 = &UNK_1416eaf24;
      break;
    }
    lVar30 = 0x88;
    if (param_6 == 1) {
      lVar30 = 0x68;
    }
    supplier_1400bb340(param_1,lVar30 + uVar24);
    goto code_r0x000140aa1b0b;
  case 0x57:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = 0;
    iVar27 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
    if ((iVar27 != 0) && (param_11 != -1)) {
      iVar27 = iVar27 + -1;
      if (-1 < iVar27) {
        do {
          iVar14 = iVar10 + iVar27 >> 1;
          plVar13 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar14 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto code_r0x000140aa02bd;
          iVar11 = iVar14 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            iVar11 = iVar27;
            iVar10 = iVar14 + 1;
          }
          iVar27 = iVar11;
        } while (iVar10 <= iVar11);
      }
      plVar13 = (longlong *)0x0;
code_r0x000140aa02bd:
      if (plVar13 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x718))(plVar13);
        switch(uVar9) {
        case 0:
          supplier_140070b90(param_1,&UNK_1416f0d98);
          break;
        default:
          supplier_140070b90(param_1,&UNK_1416f0be0);
          break;
        case 7:
          supplier_140070b90(param_1,&UNK_1416f0da8);
          break;
        case 8:
          supplier_140070b90(param_1,&UNK_1416f0dc0);
          break;
        case 9:
          supplier_140070b90(param_1,&UNK_1416f0dd8);
          break;
        case 10:
          supplier_140070b90(param_1,&UNK_1416f0d30);
          break;
        case 0xb:
          supplier_140070b90(param_1,&UNK_1416f0d40);
          break;
        case 0xc:
          supplier_140070b90(param_1,&UNK_1416f0d58);
          break;
        case 0xd:
          supplier_140070b90(param_1,&UNK_1416f0d78);
          break;
        case 0xe:
          supplier_140070b90(param_1,&UNK_1416f0cd0);
          break;
        case 0xf:
          supplier_140070b90(param_1,&UNK_1416f0ce8);
          break;
        case 0x10:
          supplier_140070b90(param_1,&UNK_1416f0d00);
          break;
        case 0x11:
          supplier_140070b90(param_1,&UNK_1416f0d18);
          break;
        case 0x12:
          supplier_140070b90(param_1,&UNK_1416f0c70);
          break;
        case 0x13:
          supplier_140070b90(param_1,&UNK_1416f0c88);
          break;
        case 0x14:
          supplier_140070b90(param_1,&UNK_1416f0ca0);
          break;
        case 0x15:
          supplier_140070b90(param_1,&UNK_1416f0cb8);
          break;
        case 0x16:
          supplier_140070b90(param_1,&UNK_1416f0c08);
          break;
        case 0x17:
          supplier_140070b90(param_1,&UNK_1416f0c20);
          break;
        case 0x18:
          supplier_140070b90(param_1,&UNK_1416f0c40);
          break;
        case 0x19:
          supplier_140070b90(param_1,&UNK_1416f0c60);
        }
        goto code_r0x000140aa1afb;
      }
    }
    puVar22 = &UNK_1416f0be0;
    goto code_r0x000140aa1aed;
  case 0x58:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,&UNK_1416f0898,7);
    }
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar21 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto code_r0x000140aa0c8a;
      }
      else if (-1 < (short)param_4) {
        if ((uVar26 < (ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3)) &&
           (-1 < sVar29)) {
          lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
          lVar19 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar19 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar19 + (longlong)sVar29 * 8);
            pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
              }
              FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto code_r0x000140aa0cce;
          }
        }
code_r0x000140aa0c8a:
        if (uVar26 < (ulonglong)(lRam000000014250eef0 - lRam000000014250eee8 >> 3)) {
          lVar30 = *(longlong *)(lRam000000014250eee8 + uVar26 * 8);
          pppppppuVar21 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar21) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar21 = (undefined8 *******)*pppppppuVar21;
            }
            FUN_140070f00(&pppppppuStack_250,pppppppuVar21,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
code_r0x000140aa0cce:
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_140071040(param_1," ",1);
    }
    FUN_140071040(param_1,&UNK_1416f0aec,3);
    goto code_r0x000140aa1b0b;
  case 0x59:
    uVar28 = 7;
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_140071040(param_1,&UNK_1416f08b8,7);
    }
    if (param_6 == 1) {
      uVar28 = 5;
    }
    puVar22 = &UNK_1416f08c0;
    if (param_6 == 1) {
      puVar22 = &UNK_1416f08c8;
    }
    FUN_140071040(param_1,puVar22,uVar28);
    goto code_r0x000140aa1b0b;
  case 0x5a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      iVar27 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
      if ((iVar27 == 0) || (param_11 == -1)) {
code_r0x000140a9e816:
        uVar9 = 0;
      }
      else {
        iVar27 = iVar27 + -1;
        if (-1 < iVar27) {
          do {
            iVar14 = iVar10 + iVar27 >> 1;
            lVar30 = *(longlong *)(lRam00000001424078d0 + (longlong)iVar14 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto code_r0x000140a9e7ed;
            iVar11 = iVar14 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              iVar11 = iVar27;
              iVar10 = iVar14 + 1;
            }
            iVar27 = iVar11;
          } while (iVar10 <= iVar27);
        }
        lVar30 = 0;
code_r0x000140a9e7ed:
        if (lVar30 == 0) goto code_r0x000140a9e816;
        if ((*(uint *)(lVar30 + 0xec) & 1) == 0) {
          if ((*(uint *)(lVar30 + 0xec) & 2) == 0) goto code_r0x000140a9e816;
          uVar9 = 5;
        }
        else {
          uVar9 = 4;
        }
      }
      uStack_288 = CONCAT22(uStack_288._2_2_,uVar9);
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f08e0,5);
    goto code_r0x000140aa1b0b;
  case 0x5b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    puVar22 = &UNK_1416f03f0;
code_r0x000140a9c97f:
    uVar28 = 6;
code_r0x000140a9c985:
    FUN_140071040(param_1,puVar22,uVar28);
    if (param_6 == 1) goto LAB_140aa1b47;
    FUN_140071040(param_1,&UNK_1416f03f8,2);
    goto code_r0x000140aa1b0b;
  case 0x5c:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,&UNK_1416f07d8,0x12);
    goto code_r0x000140aa1b0b;
  default:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar21 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar21 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar21,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    puVar22 = &UNK_141618d48;
code_r0x000140aa1aed:
    cVar8 = '\x04';
  }
  FUN_140071040(param_1,puVar22,cVar8);
code_r0x000140aa1afb:
  if (param_6 != 1) {
code_r0x000140aa1b01:
    uVar28 = 0x73;
code_r0x000140aa1b03:
    FUN_1400bb1b0(param_1,uVar28);
code_r0x000140aa1b0b:
    if (1 < (int)param_6) {
code_r0x000140aa1b11:
      FUN_140071040(param_1,&UNK_141637c6c,2);
      FUN_140545610(param_6,param_1);
      FUN_140071040(param_1,"]",1);
    }
  }
LAB_140aa1b47:
  FUN_140070e80(&pppppppuStack_250);
  FUN_140070e80(&uStack_230);
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_2b8);
  return;
code_r0x000140aa10c2:
  if (*(longlong *)(lVar19 + 0xb8) != 0) {
    supplier_1400bb340(param_1,lVar19 + 0xa8);
    supplier_140070b90(param_1," ");
  }
  if ((param_4 != 0xffff) || (param_13 != 0)) {
    uStack_288 = uStack_288 & 0xffff0000;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    supplier_1400bb340(param_1,&pppppppuStack_250);
    FUN_1400bb1b0(param_1,0x20);
  }
code_r0x000140aa113b:
  pppppppuVar21 = (undefined8 *******)(lVar19 + 0x88);
  if (param_6 == 1) {
    supplier_1400bb340(param_1,lVar19 + 0x68);
  }
  else {
code_r0x000140aa0e74:
    supplier_1400bb340(param_1,pppppppuVar21);
  }
  goto code_r0x000140aa1b0b;
}

