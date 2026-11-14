/* Original PE owner: classic	import-item	0x140a99510	0x140a9ebfc */

/* WARNING: Switch with 1 destination removed at 0x000140a9bf8b */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_import_item(undefined8 *param_1,ushort param_2,short param_3,ushort param_4,
                        uint param_5,uint param_6,uint param_7,char param_8,longlong param_9,
                        undefined2 param_10,int param_11,char param_12,uint param_13,byte param_14)

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
        mission_supplier_140070b20(param_1,"metal");
      }
      else {
        mission_supplier_140070c50(auStack_f0);
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414e58e0(0x1423ed870,auStack_f0,0,param_5);
        mission_supplier_1400bb2d0(param_1,auStack_f0);
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
            mission_supplier_140070b20(param_1," wafers");
            goto LAB_140a9e96b;
          }
        }
      }
      mission_supplier_140070b20(param_1," bars");
    }
    else if (param_4 == 7) {
      if (param_5 == 1) {
        mission_supplier_140070b20(param_1,"charcoal");
      }
      else {
        pcVar21 = "coke";
        if (param_5 != 0) {
          pcVar21 = "refined coal";
        }
        mission_supplier_140070b20(param_1,pcVar21);
      }
    }
    else if (param_4 == 0xffff) {
      mission_supplier_140070b20(param_1,"bars");
    }
    else {
      mission_supplier_140070c50(auStack_110);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,auStack_110,param_4,param_5);
      mission_supplier_1400bb2d0(param_1,auStack_110);
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
        mission_supplier_140070b20(param_1,"cut gems");
      }
      else if (param_4 == 3) {
        mission_supplier_140070b20(param_1,"cut green glass gems");
      }
      else if (param_4 == 4) {
        mission_supplier_140070b20(param_1,"cut clear glass gems");
      }
      else if (param_4 == 5) {
        mission_supplier_140070b20(param_1,"cut crystal glass gems");
      }
      else if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          mission_supplier_140070b20(param_1,"gems");
        }
      }
      else {
        mission_supplier_140070c50(auStack_d0);
        uStack_298 = CONCAT31(uStack_298._1_3_,1);
        FUN_1414e5750(0x1423ed870,auStack_d0,param_4,param_5);
        mission_supplier_1400bb2d0(param_1,auStack_d0);
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
      mission_supplier_14154de20();
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
      FUN_140070fd0(param_1,"blocks",6);
    }
    else if (*(longlong *)(lVar30 + 0x340) == 0) {
      mission_supplier_140070b20(param_1,"blocks");
    }
    else {
      mission_supplier_1400bb2d0(param_1,lVar30 + 0x330);
    }
    goto LAB_140a9e96b;
  case 3:
    if (param_4 == 0xffff) {
      FUN_140070fd0(param_1,"rough gems",10);
    }
    else if (param_4 == 3) {
      mission_supplier_140070b20(param_1,"raw green glass");
    }
    else if (param_4 == 4) {
      mission_supplier_140070b20(param_1,"raw clear glass");
    }
    else if (param_4 == 5) {
      mission_supplier_140070b20(param_1,"raw crystal glass");
    }
    else if (param_5 == 0xffffffff) {
      if (param_4 == 0) {
        mission_supplier_140070b20(param_1,"rough gems");
      }
    }
    else {
      mission_supplier_140070c50(auStack_170);
      mission_supplier_140070b20(param_1,"rough ");
      uStack_298 = CONCAT31(uStack_298._1_3_,1);
      FUN_1414e5750(0x1423ed870,auStack_170,param_4,param_5);
      mission_supplier_1400bb2d0(param_1,auStack_170);
      FUN_140070e10(auStack_170);
    }
    goto LAB_140a9e96b;
  case 4:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        mission_supplier_140070b20(param_1,"stone boulders");
      }
      else {
        mission_supplier_140070c50(auStack_150);
        FUN_1414e56b0(0x1423ed870,auStack_150,0,param_5);
        mission_supplier_1400bb2d0(param_1,auStack_150);
        FUN_140070e10(auStack_150);
      }
    }
    else if ((param_4 == 0xffff) && (param_13 == 0)) {
      mission_supplier_140070b20(param_1,"boulders");
    }
    else {
      mission_supplier_140070c50(auStack_130);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,auStack_130,param_4,param_5);
      mission_supplier_1400bb2d0(param_1,auStack_130);
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
        mission_supplier_140070b20(param_1,"chair");
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9aa67:
      if (((((param_13 & 4) == 0) &&
           (cVar7 = FUN_14146fea0(0x1423ed870,0x1d,param_4,param_5), cVar7 == '\0')) &&
          ((param_13 & 0x10) == 0)) &&
         (((cVar7 = FUN_14146fea0(0x1423ed870,0x1e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 & 8) == 0)) &&
          ((cVar7 = FUN_14146fea0(0x1423ed870,0x3e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 >> 0xc & 1) == 0)))))) {
        mission_supplier_140070b20(param_1,"chain");
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
          mission_supplier_140070b20(param_1,"flask");
        }
        else {
          mission_supplier_140070b20(param_1,"vial");
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
      mission_supplier_140070b20(param_1,"cup");
    }
    else {
      if ((param_4 != 0) || (cVar7 = FUN_14146fea0(0x1423ed870,0x2f,0,param_5), cVar7 != '\0'))
      goto LAB_140a9b0f5;
      mission_supplier_140070b20(param_1,"mug");
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
            mission_supplier_1400bb2d0(param_1,lVar18 + lVar30);
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
            mission_supplier_1400bb2d0(param_1,lVar18 + lVar30);
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
        mission_supplier_140070b20(param_1,"casket");
        goto LAB_140a9e95b;
      }
    }
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        mission_supplier_140070b20(param_1,"sarcophag");
        pcVar21 = "i";
        if (param_6 == 1) {
          pcVar21 = "us";
        }
        mission_supplier_140070b20(param_1,pcVar21);
        goto LAB_140a9e96b;
      }
    }
    mission_supplier_140070b20(param_1,"coffin");
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
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    mission_supplier_140070b20(param_1,"weapon");
    goto LAB_140a9e95b;
  case 0x19:
    if (lVar30 != 0) {
      mission_supplier_1400bb2d0(param_1,&uStack_230);
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
              mission_supplier_1400bb2d0(param_1,lVar18 + 0xa8);
              FUN_1400bb140(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              mission_supplier_1400bb2d0(param_1,lVar18 + 0xe8);
              mission_supplier_140070b20(param_1," ");
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
              mission_supplier_1400bb2d0(param_1,pppppppuVar20);
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
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    if (1 < (int)param_6) {
      mission_supplier_140070b20(param_1,"suits of ");
    }
    mission_supplier_140070b20(param_1,"armor");
    goto LAB_140a9e96b;
  case 0x1a:
    if (lVar30 != 0) {
      mission_supplier_1400bb2d0(param_1,&uStack_230);
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
            mission_supplier_1400bb2d0(param_1,lVar18 + 0xa8);
            mission_supplier_140070b20(param_1," ");
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
      lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
          cVar7 = mission_supplier_140073550(lVar30,7);
          if (cVar7 != '\0') {
            mission_supplier_140070b20(param_1,"chain ");
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
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    mission_supplier_140070b20(param_1,"shield");
    if (param_6 == 1) {
      mission_supplier_140070b20(param_1,"/buckler");
      goto LAB_140a9e9a7;
    }
    FUN_1400bb140(param_1,0x73);
    mission_supplier_140070b20(param_1,"/buckler");
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
            mission_supplier_1400bb2d0(param_1,lVar18 + 0xa8);
            mission_supplier_140070b20(param_1," ");
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
      mission_supplier_1400bb2d0(param_1,&uStack_230);
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
            mission_supplier_1400bb2d0(param_1,lVar30 + 0xa8);
            mission_supplier_140070b20(param_1," ");
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
      cVar7 = mission_supplier_140073550(lVar18,0);
      if (cVar7 != '\0') {
        mission_supplier_140070b20(param_1,"right ");
      }
      cVar7 = mission_supplier_140073550(lVar18,1);
      if (cVar7 != '\0') {
        mission_supplier_140070b20(param_1,"left ");
      }
    }
    if (lVar30 == 0) {
      mission_supplier_140070b20(param_1,"handwear");
    }
    else {
      cVar7 = FUN_14146fea0(0x1423ed870,0x2f,param_4,param_5);
      if ((cVar7 != '\0') && (cVar7 = mission_supplier_140073550(lVar30 + 0xe8,7), cVar7 != '\0')) {
        mission_supplier_140070b20(param_1,"chain ");
      }
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x88);
      if (param_6 != 1) goto LAB_140a9dcd4;
      mission_supplier_1400bb2d0(param_1,lVar30 + 0x68);
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9a473:
      if (param_4 != 0) {
        if (param_4 != 0xffff) goto LAB_140a9a4a2;
        if (param_6 == 1) {
          mission_supplier_140070b20(param_1,"box");
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
      mission_supplier_140070b20(param_1,pcVar21);
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
      mission_supplier_140070b20(param_1,pcVar21);
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
            mission_supplier_1400bb2d0(param_1,uVar23 + 0xa8);
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
      mission_supplier_1400bb2d0(param_1,lVar30);
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
        mission_supplier_140070b20(param_1,"green glass ");
      }
      else if (param_4 == 4) {
        mission_supplier_140070b20(param_1,"clear glass ");
      }
      else {
        if (param_4 != 5) {
          if (param_4 == 0xffff) {
            if (param_13 == 0) goto LAB_140a9cba3;
LAB_140a9cc15:
            mission_supplier_140070c50(auStack_70);
            uStack_288 = uStack_288 & 0xffff0000;
            uStack_290 = CONCAT31(uStack_290._1_3_,1);
            uStack_298 = param_13;
            FUN_1414e58e0(0x1423ed870,auStack_70,param_4,param_5);
            mission_supplier_1400bb2d0(param_1,auStack_70);
            mission_supplier_140070b20(param_1," gem");
            if (param_6 != 1) {
              FUN_1400bb140(param_1,0x73);
            }
            puVar15 = auStack_70;
          }
          else {
            if (param_4 != 0) goto LAB_140a9cc15;
            mission_supplier_140070c50(auStack_190);
            if (param_6 == 1) {
              uStack_298 = (uint)uStack_298._1_3_ << 8;
            }
            else {
              uStack_298 = CONCAT31(uStack_298._1_3_,1);
            }
            FUN_1414e5750(0x1423ed870,auStack_190,0,param_5);
            mission_supplier_1400bb2d0(param_1,auStack_190);
            puVar15 = auStack_190;
          }
          FUN_140070e10(puVar15);
          goto LAB_140a9cc88;
        }
        mission_supplier_140070b20(param_1,"crystal glass ");
      }
LAB_140a9cba3:
      mission_supplier_140070b20(param_1,"gem");
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
      mission_supplier_14154de20(pppppppuVar20,uVar22);
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
                  mission_supplier_140070b20(param_1,"wooden body part");
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        pcVar21 = "strand body part";
                        if ((param_13 >> 0xd & 1) == 0) {
                          pcVar21 = "body part";
                        }
                        mission_supplier_140070b20(param_1,pcVar21);
                      }
                      else {
                        mission_supplier_140070b20(param_1,"yarn body part");
                      }
                    }
                    else {
                      mission_supplier_140070b20(param_1,"pearl");
                    }
                  }
                  else {
                    mission_supplier_140070b20(param_1,"horn");
                  }
                }
                else {
                  mission_supplier_140070b20(param_1,"soap body part");
                }
              }
              else {
                mission_supplier_140070b20(param_1,"leather body part");
              }
            }
            else {
              mission_supplier_140070b20(param_1,"silk body part");
            }
          }
          else {
            mission_supplier_140070b20(param_1,"plant part");
          }
        }
        else {
          mission_supplier_140070b20(param_1,"shell");
        }
      }
      else {
        mission_supplier_140070b20(param_1,"bone");
      }
      goto LAB_140a9e95b;
    }
    if (param_6 == 1) {
      mission_supplier_140070b20(param_1,"tooth");
      goto LAB_140a9e9a7;
    }
    mission_supplier_140070b20(param_1,"teeth");
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
        mission_supplier_14154de20(pppppppuVar20,uVar22);
      }
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)((ulonglong)pppppppuStack_210 & 0xffffffffffffff00);
    }
    goto LAB_140a9e96b;
  case 0x30:
    if ((param_7 >> 8 & 1) != 0) {
      mission_supplier_140070b20(param_1,"rotten ");
    }
    if ((param_7 & 4) != 0) {
      mission_supplier_140070b20(param_1,"preserved ");
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140070fd0(param_1,"meat",4);
      goto LAB_140a9e96b;
    }
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 == 0) {
      mission_supplier_140070b20(param_1,"meat");
      goto LAB_140a9e96b;
    }
    uVar32 = extraout_XMM0_Da;
    if (*(longlong *)(lVar30 + 0x2f8) != 0) {
      mission_supplier_1400bb2d0(param_1,lVar30 + 0x2e8);
      uVar32 = FUN_1400bb140(param_1,0x20);
    }
    uVar24 = FUN_140718ba0(uVar32,param_4,param_5);
    if (uVar24 != 0xffffffff) {
      FUN_140aba4d0(uVar24 & 0xffff,&pppppppuStack_250,0,0xffffffff);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
      FUN_1400bb140(param_1,0x20);
    }
    if (*(longlong *)(lVar30 + 0x2b8) != 0) {
      if (param_6 == 1) {
        mission_supplier_1400bb2d0(param_1,lVar30 + 0x2a8);
        goto LAB_140a9e9a7;
      }
      mission_supplier_1400bb2d0(param_1,lVar30 + 0x2c8);
      goto LAB_140a9e96b;
    }
    mission_supplier_1400bb2d0(param_1,lVar30 + 0xb8);
    if ((int)param_6 < 2) {
      mission_supplier_140070b20(param_1," chop");
      goto LAB_140a9e9a7;
    }
    mission_supplier_140070b20(param_1," chops");
    goto LAB_140a9e971;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"rotten ",7);
    }
    if (param_4 == 0xffff) {
      mission_supplier_140070b20(param_1,"fish");
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
    mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
    cVar7 = mission_supplier_1400f3cb0(0x142508dc8,param_4,param_5 & 0xffff);
LAB_140a9d9ca:
    if (cVar7 == '\0') {
      mission_supplier_140070b20(param_1,", ");
      uVar27 = 0xc;
    }
    else {
      if (cVar7 != '\x01') goto LAB_140a9e96b;
      mission_supplier_140070b20(param_1,", ");
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
      mission_supplier_140070b20(param_1,pcVar21);
      FUN_140aba4d0(param_4,&pppppppuStack_250,param_6 != 1,0xffffffff);
      pppppppuVar20 = &pppppppuStack_250;
      goto LAB_140a9dcd4;
    }
    mission_supplier_140070b20(param_1,"small live animal");
    goto LAB_140a9e95b;
  case 0x34:
    if (param_4 != 0xffff) {
      pcVar21 = "tame ";
      goto LAB_140a9dcaf;
    }
    mission_supplier_140070b20(param_1,"small tame animal");
    goto LAB_140a9e95b;
  case 0x35:
    if ((ushort)(param_4 - 0x1a3) < 200) {
      mission_supplier_140a7b670(&DAT_142508c78,&pppppppuStack_250,param_5);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
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
      mission_supplier_140070b20(param_1,"seeds");
    }
    goto LAB_140a9e96b;
  case 0x36:
    if ((param_7 & 0x100) != 0) {
      FUN_140070fd0(param_1,"withered ",9);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140070fd0(param_1,"plant",5);
      if (param_6 == 1) goto LAB_140a9e9a7;
      mission_supplier_140070b20(param_1,"s");
    }
    else {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      FUN_1401463c0(&DAT_142508c78,param_5,&pppppppuStack_250,0);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
    }
    goto LAB_140a9e96b;
  case 0x37:
    if ((param_5 == 0xffffffff) && (param_13 == 0)) {
      mission_supplier_140070b20(param_1,"tanned hide");
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
      mission_supplier_140a7b6c0(&DAT_142508c78,&pppppppuStack_250,param_5,(int)param_3);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        goto LAB_140a9b711;
      }
      if (param_6 == 1) {
        mission_supplier_140070b20(param_1,"leaf or fruit");
        goto LAB_140a9e9a7;
      }
      mission_supplier_140070b20(param_1,"leaves and fruit");
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
        mission_supplier_140070b20(param_1,"web");
        goto LAB_140a9e95b;
      }
    }
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
    if (lVar30 != 0) {
      if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        mission_supplier_140070b20(param_1,"strands");
        goto LAB_140a9e96b;
      }
    }
    cVar7 = FUN_14146fea0(0x1423ed870,0x3e,param_4,param_5);
    if (cVar7 == '\0') {
      mission_supplier_140070b20(param_1,"thread");
    }
    else {
      mission_supplier_140070b20(param_1,"yarn");
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
              mission_supplier_1400bb2d0(param_1,lVar18 + 0xa8);
              FUN_1400bb140(param_1,0x20);
              lVar30 = lStack_220;
            }
            if (lVar30 != 0) {
              mission_supplier_1400bb2d0(param_1,&uStack_230);
              FUN_1400bb140(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              mission_supplier_1400bb2d0(param_1,lVar18 + 0xe8);
              mission_supplier_140070b20(param_1," ");
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
              mission_supplier_1400bb2d0(param_1,pppppppuVar20);
              FUN_1400bb140(param_1,0x20);
            }
            lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
      mission_supplier_1400bb2d0(param_1,&uStack_230);
      FUN_1400bb140(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
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
            mission_supplier_1400bb2d0(param_1,lVar18 + lVar30);
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
              mission_supplier_1400bb2d0(param_1,lVar30 + 0xa8);
              mission_supplier_140070b20(param_1," ");
            }
            if ((param_4 != 0xffff) || (param_13 != 0)) {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
              mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
              FUN_1400bb140(param_1,0x20);
            }
            lVar18 = lVar30 + 0x88;
            if (param_6 == 1) {
              lVar18 = lVar30 + 0x68;
            }
            mission_supplier_1400bb2d0(param_1,lVar18);
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
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
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
    mission_supplier_140070b20(param_1,"drink");
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
        mission_supplier_1400bb2d0
                  (param_1,*(longlong *)(_DAT_142513438 + (longlong)*(int *)(lVar30 + 200) * 8) +
                           0x50);
        mission_supplier_140070b20(param_1," dye mix");
        goto LAB_140a9e96b;
      }
    }
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      mission_supplier_140070b20(param_1,"powder");
    }
    else {
      uStack_288 = CONCAT22(uStack_288._2_2_,3);
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
      mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
    }
    goto LAB_140a9e96b;
  case 0x47:
    if ((param_7 & 0x100) != 0) {
      mission_supplier_140070b20(param_1,"rotten ");
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9b711;
    }
    mission_supplier_140070b20(param_1,"cheese");
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
        mission_supplier_140070b20(param_1,"liquid");
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
        mission_supplier_140070c50(auStack_b0);
        FUN_140aba4d0(uVar22 & 0xffff,auStack_b0,0,0xffffffff);
        FUN_140070b60(&pppppppuStack_250,auStack_b0);
        mission_supplier_140070b20(&pppppppuStack_250," paste");
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
      mission_supplier_140070b20(param_1,"glob");
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
                mission_supplier_140070b20(param_1," laced with ");
                bVar3 = true;
              }
              mission_supplier_140070c50(auStack_90);
              puVar1 = *(undefined2 **)(uVar23 + **(longlong **)(uVar22 + 0x98));
              uStack_288 = CONCAT22(uStack_288._2_2_,puVar1[4]);
              uStack_290 = uStack_290 & 0xffffff00;
              uStack_298 = 0;
              FUN_1414e58e0(0x1423ed870,auStack_90,*puVar1,*(undefined4 *)(puVar1 + 2));
              mission_supplier_1400bb2d0(param_1,auStack_90);
              if (sVar29 < 3) {
                if (sVar29 == 2) {
                  pcVar21 = " and ";
                  goto LAB_140a9c01d;
                }
              }
              else {
                pcVar21 = ", ";
LAB_140a9c01d:
                mission_supplier_140070b20(param_1,pcVar21);
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
        mission_supplier_14154de20(pppppppuVar20,uVar22);
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
    lVar30 = FUN_1414c1d30(0x1423ed870,param_4,param_5);
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
        mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
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
          mission_supplier_1400bb2d0(param_1,lVar30 + 0x108);
          if (*(longlong *)(lVar30 + 0x118) != 0) {
            FUN_1400bb140(param_1,0x20);
          }
          mission_supplier_1400bb2d0(param_1,lVar30 + 0xe8);
          if (*(longlong *)(lVar30 + 0xf8) != 0) {
            FUN_1400bb140(param_1,0x20);
            pcVar21 = "cast";
            goto LAB_140a9e94d;
          }
          goto LAB_140a9a746;
        }
      }
      mission_supplier_140070b20(param_1,"limb/body ");
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
            mission_supplier_1400bb2d0(param_1,uVar23 + 0xd8);
            mission_supplier_140070b20(param_1," ");
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
        mission_supplier_140070b20(param_1,"unglazed ");
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
        mission_supplier_1400bb2d0(param_1,*puVar12);
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
    mission_supplier_1400bb2d0(param_1,lVar30 + uVar23);
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
            mission_supplier_140070b20(param_1,"memorial");
            break;
          default:
            goto override_jmp_140a9d150_case_1;
          case 7:
            mission_supplier_140070b20(param_1,"food imports sign");
            break;
          case 8:
            mission_supplier_140070b20(param_1,"clothing imports sign");
            break;
          case 9:
            mission_supplier_140070b20(param_1,"general imports sign");
            break;
          case 10:
            mission_supplier_140070b20(param_1,"cloth shop sign");
            break;
          case 0xb:
            mission_supplier_140070b20(param_1,"leather shop sign");
            break;
          case 0xc:
            mission_supplier_140070b20(param_1,"woven clothing shop sign");
            break;
          case 0xd:
            mission_supplier_140070b20(param_1,"leather clothing shop sign");
            break;
          case 0xe:
            mission_supplier_140070b20(param_1,"bone carver\'s shop sign");
            break;
          case 0xf:
            mission_supplier_140070b20(param_1,"gem cutter\'s shop sign");
            break;
          case 0x10:
            mission_supplier_140070b20(param_1,"weaponsmith\'s shop sign");
            break;
          case 0x11:
            mission_supplier_140070b20(param_1,"bowyer\'s shop sign");
            break;
          case 0x12:
            mission_supplier_140070b20(param_1,"blacksmith\'s shop sign");
            break;
          case 0x13:
            mission_supplier_140070b20(param_1,"armorsmith\'s shop sign");
            break;
          case 0x14:
            mission_supplier_140070b20(param_1,"metal craft shop sign");
            break;
          case 0x15:
            mission_supplier_140070b20(param_1,"leather goods shop sign");
            break;
          case 0x16:
            mission_supplier_140070b20(param_1,"carpenter\'s shop sign");
            break;
          case 0x17:
            mission_supplier_140070b20(param_1,"stone furniture shop sign");
            break;
          case 0x18:
            mission_supplier_140070b20(param_1,"metal furniture shop sign");
            break;
          case 0x19:
            mission_supplier_140070b20(param_1,"tavern sign");
          }
        }
        else {
override_jmp_140a9d150_case_1:
          mission_supplier_140070b20(param_1,"slab");
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
    mission_supplier_1400bb2d0(param_1,lVar18 + 0xa8);
    mission_supplier_140070b20(param_1," ");
  }
  if ((param_4 != 0xffff) || (param_13 != 0)) {
    uStack_288 = uStack_288 & 0xffff0000;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414e58e0(0x1423ed870,&pppppppuStack_250,param_4,param_5);
    mission_supplier_1400bb2d0(param_1,&pppppppuStack_250);
    FUN_1400bb140(param_1,0x20);
  }
LAB_140a9df9b:
  pppppppuVar20 = (undefined8 *******)(lVar18 + 0x88);
  if (param_6 == 1) {
    mission_supplier_1400bb2d0(param_1,lVar18 + 0x68);
  }
  else {
LAB_140a9dcd4:
    mission_supplier_1400bb2d0(param_1,pppppppuVar20);
  }
  goto LAB_140a9e96b;
}

