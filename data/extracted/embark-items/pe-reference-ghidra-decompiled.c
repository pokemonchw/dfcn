/* reference PE:6aea05a1:02734000; category; RVA 0x768c00..0x7690a4 */

void equipment_category(undefined8 param_1,ushort param_2)

{
  if (param_2 < 0x40) {
                    /* WARNING: Switch is manually overridden */
    switch(param_2) {
    case 0:
      FUN_140070f00(param_1,"Leather",7);
      return;
    case 1:
      FUN_140070f00(param_1,"Cloth (Plant)",0xd);
      return;
    case 2:
      FUN_140070f00(param_1,"Cloth (Silk)",0xc);
      return;
    case 3:
      FUN_140070f00(param_1,"Crafts",6);
      return;
    case 4:
      FUN_140070f00(param_1,"Wood",4);
      return;
    case 5:
      FUN_140070f00(param_1,"Metal Bars",10);
      return;
    case 6:
      FUN_140070f00(param_1,"Small Cut Gems",0xe);
      return;
    case 7:
      FUN_140070f00(param_1,"Large Cut Gems",0xe);
      return;
    case 8:
      FUN_140070f00(param_1,"Stone Blocks",0xc);
      return;
    case 9:
      FUN_140070f00(param_1,"Seeds",5);
      return;
    case 10:
      FUN_140070f00(param_1,"Anvils",6);
      return;
    case 0xb:
      FUN_140070f00(param_1,"Weapons",7);
      return;
    case 0xc:
      FUN_140070f00(param_1,"Training Weapons",0x10);
      return;
    case 0xd:
      FUN_140070f00(param_1,"Ammo",4);
      return;
    case 0xe:
      FUN_140070f00(param_1,"Trap Components",0xf);
      return;
    case 0xf:
      FUN_140070f00(param_1,"Digging Implements",0x12);
      return;
    case 0x10:
      FUN_140070f00(param_1,"Bodywear",8);
      return;
    case 0x11:
      FUN_140070f00(param_1,"Headwear",8);
      return;
    case 0x12:
      FUN_140070f00(param_1,"Handwear",8);
      return;
    case 0x13:
      FUN_140070f00(param_1,"Footwear",8);
      return;
    case 0x14:
      FUN_140070f00(param_1,"Legwear",7);
      return;
    case 0x15:
      FUN_140070f00(param_1,"Shields",7);
      return;
    case 0x16:
      FUN_140070f00(param_1,"Toys",4);
      return;
    case 0x17:
      FUN_140070f00(param_1,"Instruments",0xb);
      return;
    case 0x18:
      FUN_140070f00(param_1,"Pets",4);
      return;
    case 0x19:
      FUN_140070f00(param_1,"Drinks",6);
      return;
    case 0x1a:
      FUN_140070f00(param_1,"Cheeses",7);
      return;
    case 0x1b:
      FUN_140070f00(param_1,"Powders",7);
      return;
    case 0x1c:
      FUN_140070f00(param_1,"Extracts",8);
      return;
    case 0x1d:
      FUN_140070f00(param_1,"Meat",4);
      return;
    case 0x1e:
      FUN_140070f00(param_1,"Fish",4);
      return;
    case 0x1f:
      FUN_140070f00(param_1,"Plants",6);
      return;
    case 0x20:
      FUN_140070f00(param_1,"Fruit and Nuts",0xe);
      return;
    case 0x21:
      FUN_140070f00(param_1,"Garden Vegetables",0x11);
      return;
    case 0x22:
      FUN_140070f00(param_1,"Meat/Fish Recipes",0x11);
      return;
    case 0x23:
      FUN_140070f00(param_1,"Other Recipes",0xd);
      return;
    case 0x24:
      FUN_140070f00(param_1,"Stone",5);
      return;
    case 0x25:
      FUN_140070f00(param_1,"Cages",5);
      return;
    case 0x26:
      FUN_140070f00(param_1,"Bags (Leather)",0xe);
      return;
    case 0x27:
      FUN_140070f00(param_1,"Bags (Plant)",0xc);
      return;
    case 0x28:
      FUN_140070f00(param_1,"Bags (Silk)",0xb);
      return;
    case 0x29:
      FUN_140070f00(param_1,"Thread (Plant)",0xe);
      return;
    case 0x2a:
      FUN_140070f00(param_1,"Thread (Silk)",0xd);
      return;
    case 0x2b:
      FUN_140070f00(param_1,"Ropes (Plant)",0xd);
      return;
    case 0x2c:
      FUN_140070f00(param_1,"Ropes (Silk)",0xc);
      return;
    case 0x2d:
      FUN_140070f00(param_1,"Barrels",7);
      return;
    case 0x2e:
      FUN_140070f00(param_1,"Flasks/Waterskins",0x11);
      return;
    case 0x2f:
      FUN_140070f00(param_1,"Quivers",7);
      return;
    case 0x30:
      FUN_140070f00(param_1,"Backpacks",9);
      return;
    case 0x31:
      FUN_140070f00(param_1,"Sand",4);
      return;
    case 0x32:
      FUN_140070f00(param_1,"Glass",5);
      return;
    case 0x33:
      FUN_140070f00(param_1,"Miscellaneous",0xd);
      return;
    case 0x34:
      FUN_140070f00(param_1,"Buckets",7);
      return;
    case 0x35:
      FUN_140070f00(param_1,"Splints",7);
      return;
    case 0x36:
      FUN_140070f00(param_1,"Crutches",8);
      return;
    case 0x37:
      FUN_140070f00(param_1,"Eggs",4);
      return;
    case 0x38:
      FUN_140070f00(param_1,"Bags (Yarn)",0xb);
      return;
    case 0x39:
      FUN_140070f00(param_1,"Ropes (Yarn)",0xc);
      return;
    case 0x3a:
      FUN_140070f00(param_1,"Cloth (Yarn)",0xc);
      return;
    case 0x3b:
      FUN_140070f00(param_1,"Thread (Yarn)",0xd);
      return;
    case 0x3c:
      FUN_140070f00(param_1,"Tools",5);
      return;
    case 0x3d:
      FUN_140070f00(param_1,"Clay",4);
      return;
    case 0x3e:
      FUN_140070f00(param_1,"Sheet",5);
      return;
    case 0x3f:
      FUN_140070f00(param_1,"Cups/Mugs/Goblets",0x11);
      return;
    }
  }
  return;
}


/* reference PE:6aea05a1:02734000; available-choice; RVA 0x8db530..0x8db58c */

void equipment_available_choice(undefined2 *param_1,undefined8 param_2)

{
  equipment_item_name(param_2,*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 4),0xffffffff
                      ,0,0,0,0xffffffff,0xffffffff,1,0,0);
  return;
}


/* reference PE:6aea05a1:02734000; item-name; RVA 0xa9c6b0..0xaa1b80 */

/* WARNING: Switch with 1 destination removed at 0x000140a9f12b */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void equipment_item_name(undefined8 *param_1,ushort param_2,short param_3,ushort param_4,
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
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_2b8;
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
    iVar10 = FUN_1413797d0(param_2,param_3,param_10);
    if (iVar10 == 1) {
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6c616d73);
      uVar5 = 0x6c;
    }
    else {
      lVar30 = 0;
      if (iVar10 != 2) goto LAB_140a9c7fc;
      uStack_230 = (undefined8 *)CONCAT44(uStack_230._4_4_,0x6772616c);
      uVar5 = 0x65;
    }
    lVar30 = 5;
    uVar23 = (ulonglong)uStack_230 >> 0x28;
    uStack_230._0_5_ = CONCAT14(uVar5,(undefined4)uStack_230);
    uStack_230 = (undefined8 *)(CONCAT35((int3)uVar23,(undefined5)uStack_230) & 0xffff00ffffffffff);
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
    FUN_140071040(param_1,"grown ",6);
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    pcVar21 = "item";
    goto LAB_140aa1aed;
  }
  sVar29 = (short)param_5;
  iVar10 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(uStack_26e) {
  case 0:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        equipment_supplier_0x70b90(param_1,"metal");
      }
      else {
        equipment_supplier_0x70cc0(auStack_f0);
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,auStack_f0,0,param_5);
        equipment_supplier_0xbb340(param_1,auStack_f0);
        FUN_140070e80(auStack_f0);
        if ((-1 < (int)param_5) && (uVar22 < (ulonglong)(_DAT_14250ed50 - _DAT_14250ed48 >> 3))) {
          lVar30 = *(longlong *)(_DAT_14250ed48 + uVar22 * 8);
          if ((*(int *)(lVar30 + 0x40) < 4) ||
             ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 3) & 2) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            equipment_supplier_0x70b90(param_1," wafers");
            goto LAB_140aa1b0b;
          }
        }
      }
      equipment_supplier_0x70b90(param_1," bars");
    }
    else if (param_4 == 7) {
      if (param_5 == 1) {
        equipment_supplier_0x70b90(param_1,"charcoal");
      }
      else {
        pcVar21 = "coke";
        if (param_5 != 0) {
          pcVar21 = "refined coal";
        }
        equipment_supplier_0x70b90(param_1,pcVar21);
      }
    }
    else if (param_4 == 0xffff) {
      equipment_supplier_0x70b90(param_1,"bars");
    }
    else {
      equipment_supplier_0x70cc0(auStack_110);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,auStack_110,param_4,param_5);
      equipment_supplier_0xbb340(param_1,auStack_110);
      FUN_140070e80(auStack_110);
    }
    goto LAB_140aa1b0b;
  case 1:
    uStack_298 = 0xffffffff;
    if ((param_11 != -1) &&
       (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), uStack_298 = 0xffffffff, iVar10 != 0))
    {
      iVar10 = iVar10 + -1;
      if (-1 < iVar10) {
        do {
          iVar26 = (int)uVar23 + iVar10 >> 1;
          plVar13 = *(longlong **)(_DAT_1424078d0 + (longlong)iVar26 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto LAB_140a9cedd;
          iVar14 = iVar26 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            uVar23 = (ulonglong)(iVar26 + 1);
            iVar14 = iVar10;
          }
          iVar10 = iVar14;
        } while ((int)uVar23 <= iVar14);
      }
      plVar13 = (longlong *)0x0;
LAB_140a9cedd:
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
    cVar7 = FUN_1414fb130(param_13,&pppppppuStack_1d0,param_4,param_5);
    if (cVar7 == '\0') {
      if (param_4 == 0xffff) {
        equipment_supplier_0x70b90(param_1,"cut gems");
      }
      else if (param_4 == 3) {
        equipment_supplier_0x70b90(param_1,"cut green glass gems");
      }
      else if (param_4 == 4) {
        equipment_supplier_0x70b90(param_1,"cut clear glass gems");
      }
      else if (param_4 == 5) {
        equipment_supplier_0x70b90(param_1,"cut crystal glass gems");
      }
      else if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          equipment_supplier_0x70b90(param_1,"gems");
        }
      }
      else {
        equipment_supplier_0x70cc0(auStack_d0);
        uStack_298 = CONCAT31(uStack_298._1_3_,1);
        FUN_1414eaa00(0x1423f3970,auStack_d0,param_4,param_5);
        equipment_supplier_0xbb340(param_1,auStack_d0);
        FUN_140070e80(auStack_d0);
      }
    }
    else {
      pppppppuVar20 = &pppppppuStack_1d0;
      if (0xf < uStack_1b8) {
        pppppppuVar20 = pppppppuStack_1d0;
      }
      FUN_140071040(param_1,pppppppuVar20,uStack_1c0);
    }
    if (0xf < uStack_1b8) {
      if (0xfff < uStack_1b8 + 1) {
        uVar22 = uStack_1b8 + 0x28;
        pppppppuVar20 = (undefined8 *******)pppppppuStack_1d0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1d0 + (-8 - (longlong)pppppppuVar20)))
        goto LAB_140aa079e;
      }
      equipment_supplier_0x15530d0();
    }
    uStack_1c0 = 0;
    uStack_1b8 = 0xf;
    pppppppuStack_1d0 = (undefined8 *******)((ulonglong)pppppppuStack_1d0 & 0xffffffffffffff00);
    goto LAB_140aa1b0b;
  case 2:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
      FUN_140071040(param_1,"blocks",6);
    }
    else if (*(longlong *)(lVar30 + 0x340) == 0) {
      equipment_supplier_0x70b90(param_1,"blocks");
    }
    else {
      equipment_supplier_0xbb340(param_1,lVar30 + 0x330);
    }
    goto LAB_140aa1b0b;
  case 3:
    if (param_4 == 0xffff) {
      FUN_140071040(param_1,"rough gems",10);
    }
    else if (param_4 == 3) {
      equipment_supplier_0x70b90(param_1,"raw green glass");
    }
    else if (param_4 == 4) {
      equipment_supplier_0x70b90(param_1,"raw clear glass");
    }
    else if (param_4 == 5) {
      equipment_supplier_0x70b90(param_1,"raw crystal glass");
    }
    else if (param_5 == 0xffffffff) {
      if (param_4 == 0) {
        equipment_supplier_0x70b90(param_1,"rough gems");
      }
    }
    else {
      equipment_supplier_0x70cc0(auStack_170);
      equipment_supplier_0x70b90(param_1,"rough ");
      uStack_298 = CONCAT31(uStack_298._1_3_,1);
      FUN_1414eaa00(0x1423f3970,auStack_170,param_4,param_5);
      equipment_supplier_0xbb340(param_1,auStack_170);
      FUN_140070e80(auStack_170);
    }
    goto LAB_140aa1b0b;
  case 4:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        equipment_supplier_0x70b90(param_1,"stone boulders");
      }
      else {
        equipment_supplier_0x70cc0(auStack_150);
        FUN_1414ea960(0x1423f3970,auStack_150,0,param_5);
        equipment_supplier_0xbb340(param_1,auStack_150);
        FUN_140070e80(auStack_150);
      }
    }
    else if ((param_4 == 0xffff) && (param_13 == 0)) {
      equipment_supplier_0x70b90(param_1,"boulders");
    }
    else {
      equipment_supplier_0x70cc0(auStack_130);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,auStack_130,param_4,param_5);
      equipment_supplier_0xbb340(param_1,auStack_130);
      FUN_140070e80(auStack_130);
    }
    goto LAB_140aa1b0b;
  case 5:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      if ((param_7 & 0x20) == 0) {
LAB_140a9c900:
        FUN_140071040(param_1,"logs",4);
      }
    }
    else {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      if ((param_7 & 0x20) == 0) {
        FUN_1400bb1b0(param_1,0x20);
        goto LAB_140a9c900;
      }
    }
    goto LAB_140aa1b0b;
  case 6:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\t';
    pcVar21 = "floodgate";
    break;
  case 8:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bed";
    break;
  case 9:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        equipment_supplier_0x70b90(param_1,"chair");
        goto LAB_140aa1afb;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9dc07:
      if (((((param_13 & 4) == 0) &&
           (cVar7 = FUN_141475150(0x1423f3970,0x1d,param_4,param_5), cVar7 == '\0')) &&
          ((param_13 & 0x10) == 0)) &&
         (((cVar7 = FUN_141475150(0x1423f3970,0x1e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 & 8) == 0)) &&
          ((cVar7 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 >> 0xc & 1) == 0)))))) {
        equipment_supplier_0x70b90(param_1,"chain");
        goto LAB_140aa1afb;
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
      if (!bVar3) goto LAB_140a9dc07;
    }
    pcVar21 = "rope";
    goto LAB_140aa1aed;
  case 0xb:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9dd30:
      if ((((((param_13 & 4) == 0) &&
            (cVar7 = FUN_141475150(0x1423f3970,0x1d,param_4,param_5), cVar7 == '\0')) &&
           ((param_13 & 0x10) == 0)) &&
          ((cVar7 = FUN_141475150(0x1423f3970,0x1e,param_4,param_5), cVar7 == '\0' &&
           ((param_13 & 8) == 0)))) &&
         ((cVar7 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5), cVar7 == '\0' &&
          ((param_13 >> 0xc & 1) == 0)))) {
        cVar7 = FUN_141475150(0x1423f3970,0x31,param_4,param_5);
        if (cVar7 == '\0') {
          equipment_supplier_0x70b90(param_1,"flask");
        }
        else {
          equipment_supplier_0x70b90(param_1,"vial");
        }
        goto LAB_140aa1afb;
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
      if (!bVar3) goto LAB_140a9dd30;
    }
    cVar7 = '\t';
    pcVar21 = "waterskin";
    break;
  case 0xc:
    if ((param_4 == 0xffff) && (param_13 == 0)) {
LAB_140a9e295:
      cVar7 = '\x06';
      pcVar21 = "goblet";
      break;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    FUN_140071040(param_1,pppppppuVar20,lStack_240);
    FUN_1400bb1b0(param_1,0x20);
    if ((ushort)(param_4 - 0x1a3) < 200) {
      equipment_supplier_0x70b90(param_1,"cup");
    }
    else {
      if ((param_4 != 0) || (cVar7 = FUN_141475150(0x1423f3970,0x2f,0,param_5), cVar7 != '\0'))
      goto LAB_140a9e295;
      equipment_supplier_0x70b90(param_1,"mug");
    }
    goto LAB_140aa1afb;
  case 0xd:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(_DAT_14250f280 - _DAT_14250f278 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f278 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_14250f278 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            equipment_supplier_0xbb340(param_1,lVar18 + lVar30);
            goto LAB_140aa1b0b;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(_DAT_14250efe0 - _DAT_14250efd8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250efd8 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_14250efd8 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            equipment_supplier_0xbb340(param_1,lVar18 + lVar30);
            goto LAB_140aa1b0b;
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "window";
    break;
  case 0x10:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "barrel";
    break;
  case 0x12:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "bucket";
    break;
  case 0x13:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "animal trap";
    break;
  case 0x14:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "table";
    break;
  case 0x15:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        equipment_supplier_0x70b90(param_1,"casket");
        goto LAB_140aa1afb;
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
        equipment_supplier_0x70b90(param_1,"sarcophag");
        pcVar21 = "i";
        if (param_6 == 1) {
          pcVar21 = "us";
        }
        equipment_supplier_0x70b90(param_1,pcVar21);
        goto LAB_140aa1b0b;
      }
    }
    equipment_supplier_0x70b90(param_1,"coffin");
    goto LAB_140aa1afb;
  case 0x16:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "statue";
    break;
  case 0x17:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    cVar7 = '\x06';
    pcVar21 = "corpse";
    break;
  case 0x18:
    iVar10 = (int)(_DAT_14250efb0 - _DAT_14250efa8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250efa8 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250efa8 + (longlong)iVar10 * 8);
          if (lVar18 != 0) goto LAB_140aa10c2;
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
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    equipment_supplier_0x70b90(param_1,"weapon");
    goto LAB_140aa1afb;
  case 0x19:
    if (lVar30 != 0) {
      equipment_supplier_0xbb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(_DAT_14250f298 - _DAT_14250f290 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f290 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250f290 + (longlong)iVar10 * 8);
          if (lVar18 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
              equipment_supplier_0xbb340(param_1,lVar18 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              equipment_supplier_0xbb340(param_1,lVar18 + 0xe8);
              equipment_supplier_0x70b90(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar18 + 0xd8) != 0) {
                pppppppuVar20 = (undefined8 *******)(lVar18 + 200);
                goto LAB_140aa12db;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140aa12db:
              equipment_supplier_0xbb340(param_1,pppppppuVar20);
              FUN_1400bb1b0(param_1,0x20);
            }
            cVar7 = FUN_141475150(0x1423f3970,0x2f,param_4,param_5);
            if (cVar7 == '\0') goto LAB_140aa113b;
            lVar30 = lVar18 + 0x118;
            goto LAB_140aa1314;
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
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (1 < (int)param_6) {
      equipment_supplier_0x70b90(param_1,"suits of ");
    }
    equipment_supplier_0x70b90(param_1,"armor");
    goto LAB_140aa1b0b;
  case 0x1a:
    if (lVar30 != 0) {
      equipment_supplier_0xbb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar18 = 0;
    iVar10 = (int)(_DAT_14250f2f8 - _DAT_14250f2f0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f2f0 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250f2f0 + (longlong)iVar10 * 8);
          if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
            equipment_supplier_0xbb340(param_1,lVar18 + 0xa8);
            equipment_supplier_0x70b90(param_1," ");
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
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (lVar18 != 0) {
LAB_140aa16c2:
      lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
      if (lVar30 != 0) {
        if ((*(int *)(lVar30 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar30 = lVar18 + 0xe8;
LAB_140aa1314:
          cVar7 = equipment_supplier_0x735c0(lVar30,7);
          if (cVar7 != '\0') {
            equipment_supplier_0x70b90(param_1,"chain ");
          }
        }
      }
      goto LAB_140aa113b;
    }
    FUN_140071040(param_1,"footwear",8);
    goto LAB_140aa1b0b;
  case 0x1b:
    iVar10 = (int)(_DAT_14250f310 - _DAT_14250f308 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f308 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250f308 + (longlong)iVar10 * 8);
          if (lVar18 != 0) goto LAB_140aa10c2;
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
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    equipment_supplier_0x70b90(param_1,"shield");
    if (param_6 == 1) {
      equipment_supplier_0x70b90(param_1,"/buckler");
      goto LAB_140aa1b47;
    }
    FUN_1400bb1b0(param_1,0x73);
    equipment_supplier_0x70b90(param_1,"/buckler");
    goto LAB_140aa1b01;
  case 0x1c:
    if (lVar30 != 0) {
      puVar12 = &uStack_230;
      if (0xf < uStack_218) {
        puVar12 = uStack_230;
      }
      FUN_140071040(param_1,puVar12,lVar30);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar18 = 0;
    iVar10 = (int)(_DAT_14250f328 - _DAT_14250f320 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f320 + lVar30 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250f320 + (longlong)iVar10 * 8);
          if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
            equipment_supplier_0xbb340(param_1,lVar18 + 0xa8);
            equipment_supplier_0x70b90(param_1," ");
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
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (lVar18 != 0) goto LAB_140aa16c2;
    FUN_140071040(param_1,"headwear",8);
    goto LAB_140aa1b0b;
  case 0x1d:
    if (lVar30 != 0) {
      equipment_supplier_0xbb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = 0;
    iVar10 = (int)(_DAT_14250f2e0 - _DAT_14250f2d8 >> 3) + -1;
    lVar18 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f2d8 + lVar18 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_14250f2d8 + (longlong)iVar10 * 8);
          if ((lVar30 != 0) && (*(longlong *)(lVar30 + 0xb8) != 0)) {
            equipment_supplier_0xbb340(param_1,lVar30 + 0xa8);
            equipment_supplier_0x70b90(param_1," ");
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
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (((param_11 != -1) &&
        (plVar13 = (longlong *)FUN_140073d10(&DAT_1424078d0,param_11), plVar13 != (longlong *)0x0))
       && (lVar18 = (**(code **)(*plVar13 + 0x208))(plVar13), lVar18 != 0)) {
      cVar7 = equipment_supplier_0x735c0(lVar18,0);
      if (cVar7 != '\0') {
        equipment_supplier_0x70b90(param_1,"right ");
      }
      cVar7 = equipment_supplier_0x735c0(lVar18,1);
      if (cVar7 != '\0') {
        equipment_supplier_0x70b90(param_1,"left ");
      }
    }
    if (lVar30 == 0) {
      equipment_supplier_0x70b90(param_1,"handwear");
    }
    else {
      cVar7 = FUN_141475150(0x1423f3970,0x2f,param_4,param_5);
      if ((cVar7 != '\0') && (cVar7 = equipment_supplier_0x735c0(lVar30 + 0xe8,7), cVar7 != '\0')) {
        equipment_supplier_0x70b90(param_1,"chain ");
      }
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x88);
      if (param_6 != 1) goto LAB_140aa0e74;
      equipment_supplier_0xbb340(param_1,lVar30 + 0x68);
    }
    goto LAB_140aa1b0b;
  case 0x1e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9d613:
      if (param_4 != 0) {
        if (param_4 != 0xffff) goto LAB_140a9d642;
        if (param_6 == 1) {
          equipment_supplier_0x70b90(param_1,"box");
          goto LAB_140aa1b47;
        }
        pcVar21 = "boxe";
        goto LAB_140a9d66a;
      }
      cVar7 = FUN_141475150(0x1423f3970,0x2f,0,param_5);
      if (cVar7 == '\0') {
        pcVar21 = "coffer";
      }
      else {
LAB_140a9d642:
        pcVar21 = "chest";
      }
      equipment_supplier_0x70b90(param_1,pcVar21);
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
      if (!bVar3) goto LAB_140a9d613;
      FUN_140071040(param_1,"box",3);
      if (param_6 == 1) goto LAB_140aa1b47;
      pcVar21 = "e";
LAB_140a9d66a:
      equipment_supplier_0x70b90(param_1,pcVar21);
    }
    FUN_140071040(param_1,"s",1);
    goto LAB_140aa1b0b;
  case 0x1f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bag";
    break;
  case 0x20:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x03';
    pcVar21 = "bin";
    break;
  case 0x21:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "armor stand";
    break;
  case 0x22:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "weapon rack";
    break;
  case 0x23:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "cabinet";
    break;
  case 0x24:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\b';
    pcVar21 = "figurine";
    break;
  case 0x25:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "amulet";
    break;
  case 0x26:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "scepter";
    break;
  case 0x27:
    iVar10 = (int)(_DAT_14250f2b0 - _DAT_14250f2a8 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f2a8 + lVar30 * 8) + 0x28) == param_3) {
          uVar23 = *(ulonglong *)(_DAT_14250f2a8 + (longlong)iVar10 * 8);
          if ((uVar23 != 0) && (*(longlong *)(uVar23 + 0xb8) != 0)) {
            equipment_supplier_0xbb340(param_1,uVar23 + 0xa8);
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
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (uVar23 == 0) {
      FUN_140071040(param_1,"ammunition",10);
    }
    else {
      lVar30 = uVar23 + 0x88;
      if (param_6 == 1) {
        lVar30 = uVar23 + 0x68;
      }
      equipment_supplier_0xbb340(param_1,lVar30);
    }
    goto LAB_140aa1b0b;
  case 0x28:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "crown";
    break;
  case 0x29:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    pcVar21 = "ring";
    goto LAB_140aa1aed;
  case 0x2a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\a';
    pcVar21 = "earring";
    break;
  case 0x2b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
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
    FUN_140071040(param_1,pcVar21,uVar27);
    plVar13 = (longlong *)0x0;
    if ((param_11 == -1) || (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar10 == 0)) {
LAB_140a9fc90:
      uStack_298 = 0xffffffff;
    }
    else {
      iVar10 = iVar10 + -1;
      plVar19 = plVar13;
      plVar16 = plVar13;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar19 + iVar10 >> 1;
          plVar16 = *(longlong **)(_DAT_1424078d0 + (longlong)iVar14 * 8);
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
      if (plVar16 == (longlong *)0x0) goto LAB_140a9fc90;
      uStack_298 = (**(code **)(*plVar16 + 0x748))(plVar16);
    }
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)0x0;
    uStack_288 = param_13;
    uStack_290 = param_6;
    cVar7 = FUN_1414fb130(0,&pppppppuStack_1b0,param_4,param_5);
    if (cVar7 == '\0') {
      if (param_4 == 3) {
        equipment_supplier_0x70b90(param_1,"green glass ");
      }
      else if (param_4 == 4) {
        equipment_supplier_0x70b90(param_1,"clear glass ");
      }
      else {
        if (param_4 != 5) {
          if (param_4 == 0xffff) {
            if (param_13 == 0) goto LAB_140a9fd43;
LAB_140a9fdb5:
            equipment_supplier_0x70cc0(auStack_70);
            uStack_288 = uStack_288 & 0xffff0000;
            uStack_290 = CONCAT31(uStack_290._1_3_,1);
            uStack_298 = param_13;
            FUN_1414eab90(0x1423f3970,auStack_70,param_4,param_5);
            equipment_supplier_0xbb340(param_1,auStack_70);
            equipment_supplier_0x70b90(param_1," gem");
            if (param_6 != 1) {
              FUN_1400bb1b0(param_1,0x73);
            }
            puVar15 = auStack_70;
          }
          else {
            if (param_4 != 0) goto LAB_140a9fdb5;
            equipment_supplier_0x70cc0(auStack_190);
            if (param_6 == 1) {
              uStack_298 = (uint)uStack_298._1_3_ << 8;
            }
            else {
              uStack_298 = CONCAT31(uStack_298._1_3_,1);
            }
            FUN_1414eaa00(0x1423f3970,auStack_190,0,param_5);
            equipment_supplier_0xbb340(param_1,auStack_190);
            puVar15 = auStack_190;
          }
          FUN_140070e80(puVar15);
          goto LAB_140a9fe28;
        }
        equipment_supplier_0x70b90(param_1,"crystal glass ");
      }
LAB_140a9fd43:
      equipment_supplier_0x70b90(param_1,"gem");
      if (param_6 != 1) {
        FUN_1400bb1b0(param_1,0x73);
      }
    }
    else {
      pppppppuVar20 = &pppppppuStack_1b0;
      if (0xf < uStack_198) {
        pppppppuVar20 = pppppppuStack_1b0;
      }
      FUN_140071040(param_1,pppppppuVar20,uStack_1a0);
    }
LAB_140a9fe28:
    if (0xf < uStack_198) {
      uVar22 = uStack_198 + 1;
      pppppppuVar20 = pppppppuStack_1b0;
      if (0xfff < uVar22) {
        uVar22 = uStack_198 + 0x28;
        pppppppuVar20 = (undefined8 *******)pppppppuStack_1b0[-1];
        if (0x1f < (ulonglong)((longlong)pppppppuStack_1b0 + (-8 - (longlong)pppppppuVar20))) {
LAB_140aa079e:
          _invalid_parameter_noinfo_noreturn(pppppppuVar20,uVar22);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      equipment_supplier_0x15530d0(pppppppuVar20,uVar22);
    }
    uStack_1a0 = 0;
    uStack_198 = 0xf;
    pppppppuStack_1b0 = (undefined8 *******)((ulonglong)pppppppuStack_1b0 & 0xffffffffffffff00);
    goto LAB_140aa1b0b;
  case 0x2d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "anvil";
    break;
  case 0x2e:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    if ((param_13 >> 9 & 1) == 0) {
      if ((param_13 & 0x20) == 0) {
        if ((param_13 & 0x40) == 0) {
          if ((param_13 & 1) == 0) {
            if ((param_13 & 8) == 0) {
              if ((param_13 & 0x10) == 0) {
                if ((char)param_13 < '\0') {
                  equipment_supplier_0x70b90(param_1,"wooden body part");
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        pcVar21 = "strand body part";
                        if ((param_13 >> 0xd & 1) == 0) {
                          pcVar21 = "body part";
                        }
                        equipment_supplier_0x70b90(param_1,pcVar21);
                      }
                      else {
                        equipment_supplier_0x70b90(param_1,"yarn body part");
                      }
                    }
                    else {
                      equipment_supplier_0x70b90(param_1,"pearl");
                    }
                  }
                  else {
                    equipment_supplier_0x70b90(param_1,"horn");
                  }
                }
                else {
                  equipment_supplier_0x70b90(param_1,"soap body part");
                }
              }
              else {
                equipment_supplier_0x70b90(param_1,"leather body part");
              }
            }
            else {
              equipment_supplier_0x70b90(param_1,"silk body part");
            }
          }
          else {
            equipment_supplier_0x70b90(param_1,"plant part");
          }
        }
        else {
          equipment_supplier_0x70b90(param_1,"shell");
        }
      }
      else {
        equipment_supplier_0x70b90(param_1,"bone");
      }
      goto LAB_140aa1afb;
    }
    if (param_6 == 1) {
      equipment_supplier_0x70b90(param_1,"tooth");
      goto LAB_140aa1b47;
    }
    equipment_supplier_0x70b90(param_1,"teeth");
    goto LAB_140aa1b0b;
  case 0x2f:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"Rotten ",7);
    }
    if (param_4 == 0xffff) {
      FUN_140071040(param_1,"remains",7);
    }
    else {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if ((-1 < (short)param_4) && (uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
        pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
        if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
          if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
            pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
          }
          FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
        }
      }
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
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
      pppppppuVar20 = &pppppppuStack_210;
      if (0xf < uStack_1f8) {
        pppppppuVar20 = pppppppuStack_210;
      }
      FUN_140071040(param_1,pppppppuVar20,uStack_200);
      if (0xf < uStack_1f8) {
        uVar22 = uStack_1f8 + 1;
        pppppppuVar20 = pppppppuStack_210;
        if (0xfff < uVar22) {
          uVar22 = uStack_1f8 + 0x28;
          pppppppuVar20 = (undefined8 *******)pppppppuStack_210[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_210 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_140aa079e;
        }
        equipment_supplier_0x15530d0(pppppppuVar20,uVar22);
      }
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)((ulonglong)pppppppuStack_210 & 0xffffffffffffff00);
    }
    goto LAB_140aa1b0b;
  case 0x30:
    if ((param_7 >> 8 & 1) != 0) {
      equipment_supplier_0x70b90(param_1,"rotten ");
    }
    if ((param_7 & 4) != 0) {
      equipment_supplier_0x70b90(param_1,"preserved ");
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,"meat",4);
      goto LAB_140aa1b0b;
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
      equipment_supplier_0x70b90(param_1,"meat");
      goto LAB_140aa1b0b;
    }
    uVar32 = extraout_XMM0_Da;
    if (*(longlong *)(lVar30 + 0x2f8) != 0) {
      equipment_supplier_0xbb340(param_1,lVar30 + 0x2e8);
      uVar32 = FUN_1400bb1b0(param_1,0x20);
    }
    uVar24 = FUN_14071b3a0(uVar32,param_4,param_5);
    if (uVar24 != 0xffffffff) {
      FUN_140abd670(uVar24 & 0xffff,&pppppppuStack_250,0,0xffffffff);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (*(longlong *)(lVar30 + 0x2b8) != 0) {
      if (param_6 == 1) {
        equipment_supplier_0xbb340(param_1,lVar30 + 0x2a8);
        goto LAB_140aa1b47;
      }
      equipment_supplier_0xbb340(param_1,lVar30 + 0x2c8);
      goto LAB_140aa1b0b;
    }
    equipment_supplier_0xbb340(param_1,lVar30 + 0xb8);
    if ((int)param_6 < 2) {
      equipment_supplier_0x70b90(param_1," chop");
      goto LAB_140aa1b47;
    }
    equipment_supplier_0x70b90(param_1," chops");
    goto LAB_140aa1b11;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    if (param_4 == 0xffff) {
      equipment_supplier_0x70b90(param_1,"fish");
      goto LAB_140aa1b0b;
    }
    lStack_240 = 0;
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    *(undefined1 *)pppppppuVar20 = 0;
    if (((sVar29 == -1) || ((short)param_4 < 0)) ||
       (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar25 || (sVar29 < 0)))) {
LAB_140aa0de1:
      uStack_298 = uStack_298 & 0xffffff00;
      FUN_14025a490(0x14250eec8,&pppppppuStack_250,param_4,1);
    }
    else {
      lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
      lVar18 = *(longlong *)(lVar30 + 0x178);
      if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3) <= (ulonglong)(longlong)sVar29)
      goto LAB_140aa0de1;
      lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
      if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
        if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
          pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
        }
        FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
      }
      if (lStack_240 == 0) goto LAB_140aa0de1;
    }
    equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    cVar7 = equipment_supplier_0xf3d20(0x14250eec8,param_4,param_5 & 0xffff);
LAB_140aa0b6a:
    if (cVar7 == '\0') {
      equipment_supplier_0x70b90(param_1,", ");
      uVar27 = 0xc;
    }
    else {
      if (cVar7 != '\x01') goto LAB_140aa1b0b;
      equipment_supplier_0x70b90(param_1,", ");
      uVar27 = 0xb;
    }
    goto LAB_140aa1b03;
  case 0x32:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    FUN_140071040(param_1,"raw ",4);
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto LAB_140aa0ab0;
      }
      else if (-1 < (short)param_4) {
        if ((uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar29)) {
          lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
          lVar18 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
            pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
              }
              FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto LAB_140aa0af4;
          }
        }
LAB_140aa0ab0:
        if (uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
          lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
          pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
            }
            FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
LAB_140aa0af4:
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      if ((((short)param_4 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar25)) ||
         (sVar29 < 0)) {
LAB_140aa0b63:
        cVar7 = -1;
      }
      else {
        lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
        lVar18 = *(longlong *)(lVar30 + 0x178);
        if ((ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3) <=
            (ulonglong)(param_5 & 0xffff)) goto LAB_140aa0b63;
        cVar7 = *(char *)(*(longlong *)(lVar18 + (ulonglong)(param_5 & 0xffff) * 8) + 0x15b8);
      }
      goto LAB_140aa0b6a;
    }
    FUN_140071040(param_1,"fish",4);
    goto LAB_140aa1b0b;
  case 0x33:
    if (param_4 != 0xffff) {
      pcVar21 = "live ";
LAB_140aa0e4f:
      equipment_supplier_0x70b90(param_1,pcVar21);
      FUN_140abd670(param_4,&pppppppuStack_250,param_6 != 1,0xffffffff);
      pppppppuVar20 = &pppppppuStack_250;
      goto LAB_140aa0e74;
    }
    equipment_supplier_0x70b90(param_1,"small live animal");
    goto LAB_140aa1afb;
  case 0x34:
    if (param_4 != 0xffff) {
      pcVar21 = "tame ";
      goto LAB_140aa0e4f;
    }
    equipment_supplier_0x70b90(param_1,"small tame animal");
    goto LAB_140aa1afb;
  case 0x35:
    if ((ushort)(param_4 - 0x1a3) < 200) {
      equipment_supplier_0xa7e760(0x14250ed78,&pppppppuStack_250,param_5);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        pppppppuVar20 = &pppppppuStack_250;
        if (0xf < uStack_238) {
          pppppppuVar20 = pppppppuStack_250;
        }
        FUN_140071040(param_1,pppppppuVar20,lStack_240);
        uVar27 = 0x20;
        goto LAB_140aa1b03;
      }
      equipment_supplier_0x70b90(param_1,"seeds");
    }
    goto LAB_140aa1b0b;
  case 0x36:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"withered ",9);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,"plant",5);
      if (param_6 == 1) goto LAB_140aa1b47;
      equipment_supplier_0x70b90(param_1,"s");
    }
    else {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      FUN_140146430(0x14250ed78,param_5,&pppppppuStack_250,0);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    goto LAB_140aa1b0b;
  case 0x37:
    if ((param_5 == 0xffffffff) && (param_13 == 0)) {
      equipment_supplier_0x70b90(param_1,"tanned hide");
      goto LAB_140aa1afb;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
LAB_140a9e8b1:
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    FUN_140071040(param_1,pppppppuVar20,lStack_240);
    goto LAB_140aa1b0b;
  case 0x38:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"withered ",9);
    }
    if ((ushort)(param_4 - 0x1a3) < 200) {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      equipment_supplier_0xa7e7b0(0x14250ed78,&pppppppuStack_250,param_5,(int)param_3);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        goto LAB_140a9e8b1;
      }
      if (param_6 == 1) {
        equipment_supplier_0x70b90(param_1,"leaf or fruit");
        goto LAB_140aa1b47;
      }
      equipment_supplier_0x70b90(param_1,"leaves and fruit");
    }
    goto LAB_140aa1b0b;
  case 0x39:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
LAB_140a9e64f:
      if ((param_13 & 8) != 0) goto LAB_140a9e655;
    }
    else {
      if ((*(int *)(lVar30 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar30 + 0x290) + 3) & 0x40) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140a9e64f;
LAB_140a9e655:
      if ((param_7 & 0x200) != 0) {
        equipment_supplier_0x70b90(param_1,"web");
        goto LAB_140aa1afb;
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
        equipment_supplier_0x70b90(param_1,"strands");
        goto LAB_140aa1b0b;
      }
    }
    cVar7 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5);
    if (cVar7 == '\0') {
      equipment_supplier_0x70b90(param_1,"thread");
    }
    else {
      equipment_supplier_0x70b90(param_1,"yarn");
    }
    goto LAB_140aa1b0b;
  case 0x3a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"cloth",5);
    goto LAB_140aa1b0b;
  case 0x3b:
    cVar7 = '\x05';
    pcVar21 = "totem";
    break;
  case 0x3c:
    iVar10 = (int)(_DAT_14250f340 - _DAT_14250f338 >> 3) + -1;
    lVar18 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f338 + lVar18 * 8) + 0x28) == param_3) {
          lVar18 = *(longlong *)(_DAT_14250f338 + (longlong)iVar10 * 8);
          if (lVar18 != 0) {
            if ((1 < (int)param_6) && (*(longlong *)(lVar18 + 0xb8) != 0)) {
              equipment_supplier_0xbb340(param_1,lVar18 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
              lVar30 = lStack_220;
            }
            if (lVar30 != 0) {
              equipment_supplier_0xbb340(param_1,&uStack_230);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              equipment_supplier_0xbb340(param_1,lVar18 + 0xe8);
              equipment_supplier_0x70b90(param_1," ");
            }
            if ((param_4 == 0xffff) && (param_13 == 0)) {
              if (*(longlong *)(lVar18 + 0xd8) != 0) {
                pppppppuVar20 = (undefined8 *******)(lVar18 + 200);
                goto LAB_140aa1a2b;
              }
            }
            else {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140aa1a2b:
              equipment_supplier_0xbb340(param_1,pppppppuVar20);
              FUN_1400bb1b0(param_1,0x20);
            }
            lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
            if (lVar30 == 0) goto LAB_140aa113b;
            if ((*(int *)(lVar30 + 0x298) < 6) ||
               (-1 < *(char *)(*(longlong *)(lVar30 + 0x290) + 5))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140aa113b;
            lVar30 = lVar18 + 0x128;
            goto LAB_140aa1314;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    if (lVar30 != 0) {
      equipment_supplier_0xbb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"legwear",7);
    goto LAB_140aa1b0b;
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
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
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
      FUN_140071040(param_1,puVar12,lVar30);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "quiver";
    break;
  case 0x3f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"catapult parts",0xe);
    goto LAB_140aa1b0b;
  case 0x40:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"ballista parts",0xe);
    goto LAB_140aa1b0b;
  case 0x41:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = (int)(_DAT_14250f2c8 - _DAT_14250f2c0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f2c0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_14250f2c0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            lVar18 = 0x88;
            if (param_6 == 1) {
              lVar18 = 0x68;
            }
            equipment_supplier_0xbb340(param_1,lVar18 + lVar30);
            goto LAB_140aa1b0b;
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    FUN_140071040(param_1,"siege ammo",10);
    goto LAB_140aa1b0b;
  case 0x42:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x13';
    pcVar21 = "ballista arrow head";
    break;
  case 0x43:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"mechanisms",10);
    goto LAB_140aa1b0b;
  case 0x44:
    iVar10 = (int)(_DAT_14250efc8 - _DAT_14250efc0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250efc0 + lVar30 * 8) + 0x28) == param_3) {
          lVar30 = *(longlong *)(_DAT_14250efc0 + (longlong)iVar10 * 8);
          if (lVar30 != 0) {
            if (*(longlong *)(lVar30 + 0xb8) != 0) {
              equipment_supplier_0xbb340(param_1,lVar30 + 0xa8);
              equipment_supplier_0x70b90(param_1," ");
            }
            if ((param_4 != 0xffff) || (param_13 != 0)) {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
              FUN_1400bb1b0(param_1,0x20);
            }
            lVar18 = lVar30 + 0x88;
            if (param_6 == 1) {
              lVar18 = lVar30 + 0x68;
            }
            equipment_supplier_0xbb340(param_1,lVar18);
            goto LAB_140aa1b0b;
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
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x0e';
    pcVar21 = "trap component";
    break;
  case 0x45:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = CONCAT22(uStack_288._2_2_,1);
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9e8b1;
    }
    equipment_supplier_0x70b90(param_1,"drink");
    goto LAB_140aa1afb;
  case 0x46:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    iVar10 = 0;
    if ((param_11 != -1) && (iVar26 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar26 != 0)) {
      iVar26 = iVar26 + -1;
      if (-1 < iVar26) {
        do {
          iVar14 = iVar10 + iVar26 >> 1;
          lVar30 = *(longlong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
          if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9f28d;
          iVar11 = iVar14 + -1;
          if (*(int *)(lVar30 + 0x1c) < param_11) {
            iVar11 = iVar26;
            iVar10 = iVar14 + 1;
          }
          iVar26 = iVar11;
        } while (iVar10 <= iVar11);
      }
      lVar30 = 0;
LAB_140a9f28d:
      if ((lVar30 != 0) && (*(int *)(lVar30 + 200) != -1)) {
        equipment_supplier_0xbb340
                  (param_1,*(longlong *)(_DAT_142519538 + (longlong)*(int *)(lVar30 + 200) * 8) +
                           0x50);
        equipment_supplier_0x70b90(param_1," dye mix");
        goto LAB_140aa1b0b;
      }
    }
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      equipment_supplier_0x70b90(param_1,"powder");
    }
    else {
      uStack_288 = CONCAT22(uStack_288._2_2_,3);
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    goto LAB_140aa1b0b;
  case 0x47:
    if ((param_7 & 0x100) != 0) {
      equipment_supplier_0x70b90(param_1,"rotten ");
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9e8b1;
    }
    equipment_supplier_0x70b90(param_1,"cheese");
    goto LAB_140aa1b0b;
  case 0x48:
    cVar7 = '\r';
    pcVar21 = "prepared meal";
    break;
  default:
    sVar29 = 0;
    sStack_26c = 0;
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
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
      iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        iVar26 = 0;
        if (-1 < iVar10) {
          do {
            iVar14 = iVar26 + iVar10 >> 1;
            lStack_258 = *(longlong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
            if (*(int *)(lStack_258 + 0x1c) == param_11) goto LAB_140a9eb3b;
            iVar11 = iVar14 + -1;
            if (*(int *)(lStack_258 + 0x1c) < param_11) {
              iVar11 = iVar10;
              iVar26 = iVar14 + 1;
            }
            iVar10 = iVar11;
          } while (iVar26 <= iVar10);
        }
        lStack_258 = 0;
LAB_140a9eb3b:
        lVar30 = lStack_258;
        uVar23 = 0;
        if (((lStack_258 != 0) &&
            (plVar13 = *(longlong **)(lStack_258 + 0x98), plVar13 != (longlong *)0x0)) &&
           (lVar18 = *plVar13, uVar17 = uVar23, plVar13[1] - lVar18 >> 3 != 0)) {
          do {
            iVar10 = (int)**(short **)(uVar23 + lVar18);
            if (iVar10 == 0xd) {
LAB_140a9ec15:
              cStack_277 = '\x01';
            }
            else if ((iVar10 == 0xf) || (iVar10 == 0x10)) {
override_jmp_140a9ebeb_case_7:
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
              uVar8 = FUN_1414751b0(0x1423f3970,iVar10,
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
                  goto LAB_140a9ec15;
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
                  goto override_jmp_140a9ebeb_case_7;
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
            FUN_140071040(param_1,"filthy ",7);
          }
          if (cStack_275 != '\0') {
            FUN_140071040(param_1,"sticky ",7);
          }
          if (cStack_277 != '\0') {
            FUN_140071040(param_1,"vomitous ",9);
          }
          if (cStack_274 != '\0') {
            FUN_140071040(param_1,"slimy ",6);
          }
          if (cStack_273 != '\0') {
            FUN_140071040(param_1,"stagnant ",9);
          }
          if (cStack_276 != '\0') {
            FUN_140071040(param_1,"dirty ",6);
          }
          if (cStack_272 != '\0') {
            FUN_140071040(param_1,"gooey ",6);
          }
          if (cStack_271 != '\0') {
            FUN_140071040(param_1,"purulent ",9);
          }
          if (cStack_270 != '\0') {
            FUN_140071040(param_1,"ichorous ",9);
          }
          if (cStack_26f != '\0') {
            FUN_140071040(param_1,"bloody ",7);
          }
        }
      }
    }
    sVar29 = (short)uVar25;
    if (uStack_26e == 0x49) {
      if ((sVar29 == -1) && (param_13 == 0)) {
        equipment_supplier_0x70b90(param_1,"liquid");
        goto LAB_140a9f01c;
      }
      if ((param_11 == -1) || (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar10 == 0)) {
LAB_140a9eeff:
        uStack_288 = CONCAT22(uStack_288._2_2_,1);
LAB_140a9efe0:
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,uVar25 & 0xffff,uVar22 & 0xffffffff);
      }
      else {
        uVar31 = 0;
        iVar10 = iVar10 + -1;
        uVar17 = uVar31;
        uVar23 = uVar31;
        if (-1 < iVar10) {
          do {
            iVar14 = (int)uVar17 + iVar10 >> 1;
            uVar23 = *(ulonglong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
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
           (199 < (ushort)(sVar29 - 0x13U))) goto LAB_140a9eeff;
        equipment_supplier_0x70cc0(auStack_b0);
        FUN_140abd670(uVar22 & 0xffff,auStack_b0,0,0xffffffff);
        FUN_140070bd0(&pppppppuStack_250,auStack_b0);
        equipment_supplier_0x70b90(&pppppppuStack_250," paste");
        FUN_140070e80(auStack_b0);
      }
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
    }
    else if (uStack_26e == 0x4b) {
      if ((sVar29 != -1) || (param_13 != 0)) {
        iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
        if ((iVar10 == 0) || (param_11 == -1)) {
LAB_140a9efca:
          uVar28 = 0;
        }
        else {
          iVar26 = 0;
          iVar10 = iVar10 + -1;
          if (-1 < iVar10) {
            do {
              iVar14 = iVar26 + iVar10 >> 1;
              lVar30 = *(longlong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
              if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9ef9c;
              iVar11 = iVar14 + -1;
              if (*(int *)(lVar30 + 0x1c) < param_11) {
                iVar11 = iVar10;
                iVar26 = iVar14 + 1;
              }
              iVar10 = iVar11;
            } while (iVar26 <= iVar10);
          }
          lVar30 = 0;
LAB_140a9ef9c:
          if (lVar30 == 0) goto LAB_140a9efca;
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
        goto LAB_140a9efe0;
      }
      equipment_supplier_0x70b90(param_1,"glob");
    }
LAB_140a9f01c:
    if (((0 < sStack_26c) && (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar10 != 0)) &&
       (param_11 != -1)) {
      uVar23 = 0;
      iVar10 = iVar10 + -1;
      uVar25 = uVar23;
      uVar22 = uVar23;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)uVar25 + iVar10 >> 1;
          uVar22 = *(ulonglong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
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
               (uVar9 = FUN_1414751b0(0x1423f3970,iVar10,
                                      *(undefined4 *)(*(short **)(uVar23 + lVar30) + 2)), 7 < uVar9)
               ) {
              if (!bVar3) {
                equipment_supplier_0x70b90(param_1," laced with ");
                bVar3 = true;
              }
              equipment_supplier_0x70cc0(auStack_90);
              puVar1 = *(undefined2 **)(uVar23 + **(longlong **)(uVar22 + 0x98));
              uStack_288 = CONCAT22(uStack_288._2_2_,puVar1[4]);
              uStack_290 = uStack_290 & 0xffffff00;
              uStack_298 = 0;
              FUN_1414eab90(0x1423f3970,auStack_90,*puVar1,*(undefined4 *)(puVar1 + 2));
              equipment_supplier_0xbb340(param_1,auStack_90);
              if (sVar29 < 3) {
                if (sVar29 == 2) {
                  pcVar21 = " and ";
                  goto LAB_140a9f1bd;
                }
              }
              else {
                pcVar21 = ", ";
LAB_140a9f1bd:
                equipment_supplier_0x70b90(param_1,pcVar21);
              }
              sVar29 = sVar29 + -1;
              FUN_140070e80(auStack_90);
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
    goto LAB_140aa1b0b;
  case 0x4a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    pcVar21 = "coin";
    goto LAB_140aa1aed;
  case 0x4c:
    bVar4 = false;
    if (param_4 == 0) {
      if (((int)param_5 < 0) || ((ulonglong)(_DAT_14250ed50 - _DAT_14250ed48 >> 3) <= uVar22)) {
        FUN_140071040(param_1,"small ",6);
      }
      else {
        lVar30 = *(longlong *)(_DAT_14250ed48 + uVar22 * 8);
        if ((*(int *)(lVar30 + 0x40) < 3) ||
           ((*(byte *)(*(longlong *)(lVar30 + 0x38) + 2) & 0x20) == 0)) {
          bVar3 = false;
        }
        if (!bVar3) goto LAB_140a9caf8;
        bVar4 = true;
      }
LAB_140a9cb1f:
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)0x0;
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_1f0,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_1f0;
      if (0xf < uStack_1d8) {
        pppppppuVar20 = pppppppuStack_1f0;
      }
      FUN_140071040(param_1,pppppppuVar20,uStack_1e0);
      if (!bVar4) {
        FUN_1400bb1b0(param_1,0x20);
      }
      if (0xf < uStack_1d8) {
        uVar22 = uStack_1d8 + 1;
        pppppppuVar20 = pppppppuStack_1f0;
        if (0xfff < uVar22) {
          uVar22 = uStack_1d8 + 0x28;
          pppppppuVar20 = (undefined8 *******)pppppppuStack_1f0[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuStack_1f0 + (-8 - (longlong)pppppppuVar20)))
          goto LAB_140aa079e;
        }
        equipment_supplier_0x15530d0(pppppppuVar20,uVar22);
      }
      uStack_1e0 = 0;
      uStack_1d8 = 0xf;
      pppppppuStack_1f0 = (undefined8 *******)((ulonglong)pppppppuStack_1f0 & 0xffffffffffffff00);
      if (!bVar4) goto LAB_140a9cbd8;
    }
    else {
LAB_140a9caf8:
      FUN_140071040(param_1,"small ",6);
      if ((param_4 != 0xffff) || (param_13 != 0)) goto LAB_140a9cb1f;
LAB_140a9cbd8:
      FUN_140071040(param_1,"rock",4);
    }
    if (param_1[2] == 0) {
      FUN_140070f00(param_1,"small rock",10);
    }
    goto LAB_140aa1b0b;
  case 0x4d:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
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
        FUN_140071040(param_1,"tube",4);
        goto LAB_140aa1b0b;
      }
    }
    FUN_140071040(param_1,"pipe section",0xc);
    goto LAB_140aa1b0b;
  case 0x4e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\v';
    pcVar21 = "hatch cover";
    break;
  case 0x4f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "grate";
    break;
  case 0x50:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x05';
    pcVar21 = "quern";
    break;
  case 0x51:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\t';
    pcVar21 = "millstone";
    break;
  case 0x52:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    cVar7 = '\x06';
    pcVar21 = "splint";
    break;
  case 0x53:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    pcVar21 = "crutch";
    goto LAB_140a9c97f;
  case 0x54:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    uVar27 = 0xe;
    pcVar21 = "traction bench";
    goto LAB_140a9c985;
  case 0x55:
    if (param_11 == -1) {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
        FUN_1400bb1b0(param_1,0x20);
      }
      FUN_140071040(param_1,"limb/body ",10);
LAB_140a9d8e6:
      pcVar21 = "cast";
    }
    else {
      iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        if (-1 < iVar10) {
          do {
            iVar26 = (int)uVar23 + iVar10 >> 1;
            lVar30 = *(longlong *)(_DAT_1424078d0 + (longlong)iVar26 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9d80d;
            iVar14 = iVar26 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              uVar23 = (ulonglong)(iVar26 + 1);
              iVar14 = iVar10;
            }
            iVar10 = iVar14;
          } while ((int)uVar23 <= iVar14);
        }
        lVar30 = 0;
LAB_140a9d80d:
        if (lVar30 != 0) {
          equipment_supplier_0xbb340(param_1,lVar30 + 0x108);
          if (*(longlong *)(lVar30 + 0x118) != 0) {
            FUN_1400bb1b0(param_1,0x20);
          }
          equipment_supplier_0xbb340(param_1,lVar30 + 0xe8);
          if (*(longlong *)(lVar30 + 0xf8) != 0) {
            FUN_1400bb1b0(param_1,0x20);
            pcVar21 = "cast";
            goto LAB_140aa1aed;
          }
          goto LAB_140a9d8e6;
        }
      }
      equipment_supplier_0x70b90(param_1,"limb/body ");
      pcVar21 = "cast";
    }
    goto LAB_140aa1aed;
  case 0x56:
    iVar10 = (int)(_DAT_14250eff8 - _DAT_14250eff0 >> 3) + -1;
    lVar30 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250eff0 + lVar30 * 8) + 0x28) == param_3) {
          uVar23 = *(ulonglong *)(_DAT_14250eff0 + (longlong)iVar10 * 8);
          if ((uVar23 != 0) && (*(longlong *)(uVar23 + 0xe8) != 0)) {
            equipment_supplier_0xbb340(param_1,uVar23 + 0xd8);
            equipment_supplier_0x70b90(param_1," ");
          }
          break;
        }
        iVar10 = iVar10 + -1;
        lVar30 = lVar30 + -1;
      } while (-1 < lVar30);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      if (((uVar23 != 0) &&
          (((iVar10 = FUN_1400ec750(10,uVar23 + 0xc0), iVar10 != -1 &&
            (cVar7 = FUN_141475150(0x1423f3970,0x41,param_4,param_5), cVar7 != '\0')) &&
           (plVar13 = (longlong *)FUN_140073d10(&DAT_1424078d0,param_11), plVar13 != (longlong *)0x0
           )))) && (cVar7 = (**(code **)(*plVar13 + 0x728))(plVar13), cVar7 == '\0')) {
        equipment_supplier_0x70b90(param_1,"unglazed ");
      }
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_11 != -1) && (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar10 != 0)) {
      plVar19 = (longlong *)0x0;
      iVar10 = iVar10 + -1;
      plVar16 = plVar19;
      plVar13 = plVar19;
      if (-1 < iVar10) {
        do {
          iVar14 = (int)plVar16 + iVar10 >> 1;
          plVar13 = *(longlong **)(_DAT_1424078d0 + (longlong)iVar14 * 8);
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
         (lVar30 = *(longlong *)(_DAT_142519550 + (longlong)iVar10 * 8),
         puVar12 = *(undefined8 **)(lVar30 + 0x90),
         *(longlong *)(lVar30 + 0x98) - (longlong)puVar12 >> 3 != 0)) {
        equipment_supplier_0xbb340(param_1,*puVar12);
        FUN_1400bb1b0(param_1,0x20);
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
    equipment_supplier_0xbb340(param_1,lVar30 + uVar23);
    goto LAB_140aa1b0b;
  case 0x57:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    iVar10 = 0;
    iVar26 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
    if ((iVar26 != 0) && (param_11 != -1)) {
      iVar26 = iVar26 + -1;
      if (-1 < iVar26) {
        do {
          iVar14 = iVar10 + iVar26 >> 1;
          plVar13 = *(longlong **)(_DAT_1424078d0 + (longlong)iVar14 * 8);
          if (*(int *)((longlong)plVar13 + 0x1c) == param_11) goto LAB_140aa02bd;
          iVar11 = iVar14 + -1;
          if (*(int *)((longlong)plVar13 + 0x1c) < param_11) {
            iVar11 = iVar26;
            iVar10 = iVar14 + 1;
          }
          iVar26 = iVar11;
        } while (iVar10 <= iVar11);
      }
      plVar13 = (longlong *)0x0;
LAB_140aa02bd:
      if (plVar13 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar13 + 0x718))(plVar13);
        if (uVar9 < 0x1a) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar9) {
          case 0:
            equipment_supplier_0x70b90(param_1,"memorial");
            break;
          default:
            goto override_jmp_140aa02f0_case_1;
          case 7:
            equipment_supplier_0x70b90(param_1,"food imports sign");
            break;
          case 8:
            equipment_supplier_0x70b90(param_1,"clothing imports sign");
            break;
          case 9:
            equipment_supplier_0x70b90(param_1,"general imports sign");
            break;
          case 10:
            equipment_supplier_0x70b90(param_1,"cloth shop sign");
            break;
          case 0xb:
            equipment_supplier_0x70b90(param_1,"leather shop sign");
            break;
          case 0xc:
            equipment_supplier_0x70b90(param_1,"woven clothing shop sign");
            break;
          case 0xd:
            equipment_supplier_0x70b90(param_1,"leather clothing shop sign");
            break;
          case 0xe:
            equipment_supplier_0x70b90(param_1,"bone carver\'s shop sign");
            break;
          case 0xf:
            equipment_supplier_0x70b90(param_1,"gem cutter\'s shop sign");
            break;
          case 0x10:
            equipment_supplier_0x70b90(param_1,"weaponsmith\'s shop sign");
            break;
          case 0x11:
            equipment_supplier_0x70b90(param_1,"bowyer\'s shop sign");
            break;
          case 0x12:
            equipment_supplier_0x70b90(param_1,"blacksmith\'s shop sign");
            break;
          case 0x13:
            equipment_supplier_0x70b90(param_1,"armorsmith\'s shop sign");
            break;
          case 0x14:
            equipment_supplier_0x70b90(param_1,"metal craft shop sign");
            break;
          case 0x15:
            equipment_supplier_0x70b90(param_1,"leather goods shop sign");
            break;
          case 0x16:
            equipment_supplier_0x70b90(param_1,"carpenter\'s shop sign");
            break;
          case 0x17:
            equipment_supplier_0x70b90(param_1,"stone furniture shop sign");
            break;
          case 0x18:
            equipment_supplier_0x70b90(param_1,"metal furniture shop sign");
            break;
          case 0x19:
            equipment_supplier_0x70b90(param_1,"tavern sign");
          }
        }
        else {
override_jmp_140aa02f0_case_1:
          equipment_supplier_0x70b90(param_1,"slab");
        }
        goto LAB_140aa1afb;
      }
    }
    pcVar21 = "slab";
LAB_140aa1aed:
    cVar7 = '\x04';
    break;
  case 0x58:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    if (param_4 != 0xffff) {
      lStack_240 = 0;
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      *(undefined1 *)pppppppuVar20 = 0;
      if (sVar29 == -1) {
        if (-1 < (short)param_4) goto LAB_140aa0c8a;
      }
      else if (-1 < (short)param_4) {
        if ((uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar29)) {
          lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
          lVar18 = *(longlong *)(lVar30 + 0x178);
          if ((ulonglong)(longlong)sVar29 < (ulonglong)(*(longlong *)(lVar30 + 0x180) - lVar18 >> 3)
             ) {
            lVar30 = *(longlong *)(lVar18 + (longlong)sVar29 * 8);
            pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
            if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
              if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
                pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
              }
              FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
            }
            if (lStack_240 != 0) goto LAB_140aa0cce;
          }
        }
LAB_140aa0c8a:
        if (uVar25 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
          lVar30 = *(longlong *)(_DAT_14250eee8 + uVar25 * 8);
          pppppppuVar20 = (undefined8 *******)(lVar30 + 0x20);
          if (&pppppppuStack_250 != (undefined8 ********)pppppppuVar20) {
            if (0xf < *(ulonglong *)(lVar30 + 0x38)) {
              pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
            }
            FUN_140070f00(&pppppppuStack_250,pppppppuVar20,*(undefined8 *)(lVar30 + 0x30));
          }
        }
      }
LAB_140aa0cce:
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_140071040(param_1," ",1);
    }
    FUN_140071040(param_1,"egg",3);
    goto LAB_140aa1b0b;
  case 0x59:
    uVar27 = 7;
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_140071040(param_1,"-bound ",7);
    }
    if (param_6 == 1) {
      uVar27 = 5;
    }
    pcVar21 = "codices";
    if (param_6 == 1) {
      pcVar21 = "codex";
    }
    FUN_140071040(param_1,pcVar21,uVar27);
    goto LAB_140aa1b0b;
  case 0x5a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      iVar26 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
      if ((iVar26 == 0) || (param_11 == -1)) {
LAB_140a9e816:
        uVar28 = 0;
      }
      else {
        iVar26 = iVar26 + -1;
        if (-1 < iVar26) {
          do {
            iVar14 = iVar10 + iVar26 >> 1;
            lVar30 = *(longlong *)(_DAT_1424078d0 + (longlong)iVar14 * 8);
            if (*(int *)(lVar30 + 0x1c) == param_11) goto LAB_140a9e7ed;
            iVar11 = iVar14 + -1;
            if (*(int *)(lVar30 + 0x1c) < param_11) {
              iVar11 = iVar26;
              iVar10 = iVar14 + 1;
            }
            iVar26 = iVar11;
          } while (iVar10 <= iVar26);
        }
        lVar30 = 0;
LAB_140a9e7ed:
        if (lVar30 == 0) goto LAB_140a9e816;
        if ((*(uint *)(lVar30 + 0xec) & 1) == 0) {
          if ((*(uint *)(lVar30 + 0xec) & 2) == 0) goto LAB_140a9e816;
          uVar28 = 5;
        }
        else {
          uVar28 = 4;
        }
      }
      uStack_288 = CONCAT22(uStack_288._2_2_,uVar28);
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"sheet",5);
    goto LAB_140aa1b0b;
  case 0x5b:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = (uint)uStack_290._1_3_ << 8;
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    pcVar21 = "branch";
LAB_140a9c97f:
    uVar27 = 6;
LAB_140a9c985:
    FUN_140071040(param_1,pcVar21,uVar27);
    if (param_6 == 1) goto LAB_140aa1b47;
    FUN_140071040(param_1,"es",2);
    goto LAB_140aa1b0b;
  case 0x5c:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
    }
    FUN_140071040(param_1,"bolt thrower parts",0x12);
    goto LAB_140aa1b0b;
  }
  FUN_140071040(param_1,pcVar21,cVar7);
LAB_140aa1afb:
  if (param_6 != 1) {
LAB_140aa1b01:
    uVar27 = 0x73;
LAB_140aa1b03:
    FUN_1400bb1b0(param_1,uVar27);
LAB_140aa1b0b:
    if (1 < (int)param_6) {
LAB_140aa1b11:
      FUN_140071040(param_1," [",2);
      FUN_140545610(param_6,param_1);
      FUN_140071040(param_1,"]",1);
    }
  }
LAB_140aa1b47:
  FUN_140070e80(&pppppppuStack_250);
  FUN_140070e80(&uStack_230);
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_2b8);
  return;
LAB_140aa10c2:
  if (*(longlong *)(lVar18 + 0xb8) != 0) {
    equipment_supplier_0xbb340(param_1,lVar18 + 0xa8);
    equipment_supplier_0x70b90(param_1," ");
  }
  if ((param_4 != 0xffff) || (param_13 != 0)) {
    uStack_288 = uStack_288 & 0xffff0000;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    FUN_1414eab90(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    equipment_supplier_0xbb340(param_1,&pppppppuStack_250);
    FUN_1400bb1b0(param_1,0x20);
  }
LAB_140aa113b:
  pppppppuVar20 = (undefined8 *******)(lVar18 + 0x88);
  if (param_6 == 1) {
    equipment_supplier_0xbb340(param_1,lVar18 + 0x68);
  }
  else {
LAB_140aa0e74:
    equipment_supplier_0xbb340(param_1,pppppppuVar20);
  }
  goto LAB_140aa1b0b;
}


/* reference PE:6aea05a1:02734000; prepare; RVA 0x1071450..0x107aae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void equipment_prepare(longlong param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined2 *puVar19;
  short *psVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  char *pcVar25;
  short sVar26;
  int iVar27;
  int iVar28;
  char *pcVar29;
  longlong lVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined4 *puVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  longlong lVar41;
  int iVar42;
  longlong lVar43;
  bool bVar44;
  undefined1 auStack_d08 [32];
  int iStack_ce8;
  uint uStack_ce0;
  uint uStack_cd8;
  ulonglong uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined1 uStack_cb0;
  undefined4 uStack_ca8;
  undefined4 uStack_ca0;
  int iStack_c98;
  int iStack_c94;
  int iStack_c90;
  undefined8 uStack_c88;
  uint uStack_c80;
  longlong lStack_c78;
  uint uStack_c70;
  undefined8 uStack_c68;
  int iStack_c60;
  int iStack_c5c;
  int iStack_c58;
  uint uStack_c54;
  uint uStack_c50;
  int iStack_c4c;
  undefined1 auStack_c48 [4];
  int iStack_c44;
  int iStack_c40;
  int iStack_c3c;
  ulonglong uStack_c38;
  int iStack_c30;
  undefined4 *puStack_c28;
  undefined8 uStack_c20;
  ulonglong uStack_c18;
  undefined8 uStack_c10;
  int iStack_c08;
  int iStack_c04;
  undefined8 uStack_c00;
  ulonglong uStack_bf8;
  undefined1 uStack_bf0;
  undefined1 auStack_bef [7];
  undefined8 uStack_be8;
  int iStack_be0;
  undefined8 uStack_bd8;
  int iStack_bd0;
  int iStack_bcc;
  undefined8 *puStack_bc8;
  undefined1 auStack_bc0 [8];
  undefined4 auStack_bb8 [2];
  undefined8 *puStack_bb0;
  undefined1 auStack_ba8 [8];
  int iStack_ba0;
  undefined4 uStack_b9c;
  undefined4 uStack_b98;
  undefined4 uStack_b94;
  int iStack_b90;
  int iStack_b8c;
  int iStack_b88;
  undefined4 uStack_b84;
  undefined4 auStack_b80 [2];
  ulonglong uStack_b78;
  undefined4 uStack_b70;
  undefined4 uStack_b6c;
  undefined1 auStack_b68 [8];
  undefined1 auStack_b60 [8];
  undefined4 uStack_b58;
  undefined4 uStack_b54;
  int iStack_b50;
  int iStack_b4c;
  undefined4 uStack_b48;
  int iStack_b44;
  undefined8 uStack_b40;
  ulonglong uStack_b38;
  ulonglong uStack_b30;
  undefined1 auStack_b28 [8];
  undefined1 auStack_b20 [32];
  undefined1 auStack_b00 [32];
  undefined1 auStack_ae0 [32];
  undefined1 auStack_ac0 [32];
  undefined1 auStack_aa0 [32];
  undefined1 auStack_a80 [32];
  undefined1 auStack_a60 [32];
  undefined1 auStack_a40 [32];
  undefined1 auStack_a20 [16];
  ulonglong uStack_a10;
  undefined1 auStack_a00 [16];
  int iStack_9f0;
  undefined1 auStack_9e0 [32];
  undefined1 auStack_9c0 [32];
  undefined1 auStack_9a0 [32];
  undefined1 auStack_980 [32];
  undefined1 auStack_960 [32];
  undefined1 auStack_940 [32];
  undefined1 auStack_920 [32];
  undefined1 auStack_900 [32];
  undefined1 auStack_8e0 [32];
  undefined1 auStack_8c0 [32];
  undefined1 auStack_8a0 [32];
  undefined1 auStack_880 [32];
  undefined1 auStack_860 [32];
  undefined1 auStack_840 [32];
  undefined1 auStack_820 [32];
  undefined1 auStack_800 [32];
  undefined1 auStack_7e0 [32];
  undefined1 auStack_7c0 [32];
  undefined1 auStack_7a0 [32];
  undefined1 auStack_780 [32];
  undefined1 auStack_760 [32];
  undefined1 auStack_740 [32];
  undefined1 auStack_720 [32];
  undefined1 auStack_700 [32];
  undefined1 auStack_6e0 [32];
  undefined1 auStack_6c0 [32];
  undefined1 auStack_6a0 [32];
  undefined1 auStack_680 [32];
  undefined1 auStack_660 [32];
  undefined1 auStack_640 [32];
  undefined1 auStack_620 [32];
  undefined1 auStack_600 [32];
  undefined1 auStack_5e0 [32];
  undefined1 auStack_5c0 [32];
  undefined1 auStack_5a0 [32];
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [32];
  undefined1 auStack_540 [32];
  undefined1 auStack_520 [32];
  undefined1 auStack_500 [32];
  undefined1 auStack_4e0 [32];
  undefined1 auStack_4c0 [32];
  undefined1 auStack_4a0 [32];
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [32];
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [32];
  undefined1 auStack_400 [32];
  undefined1 auStack_3e0 [32];
  undefined1 auStack_3c0 [32];
  undefined1 auStack_3a0 [32];
  undefined1 auStack_380 [32];
  undefined1 auStack_360 [32];
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [32];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_d08;
  lStack_c78 = param_1;
  iStack_c30 = param_2;
  if (_DAT_1418be234 == 8) goto LAB_14107aab3;
  iStack_c4c = -1;
  uStack_c50 = 0xffffffff;
  if (DAT_1423b2a55 != '\0') {
    equipment_supplier_0xbc970(0x14266c870,&iStack_c4c,&uStack_c50);
  }
  if (*(char *)(param_1 + 0x1e38) != '\0') {
    if (_DAT_1418be234 == 3) {
      *(undefined4 *)(param_1 + 0x198) = 0x72502020;
      *(undefined4 *)(param_1 + 0x19c) = 0x72617065;
      *(undefined4 *)(param_1 + 0x1a0) = 0x6f662065;
      *(undefined4 *)(param_1 + 0x1a4) = 0x68742072;
      *(undefined4 *)(param_1 + 0x1a8) = 0x78452065;
      *(undefined4 *)(param_1 + 0x1ac) = 0x69646570;
      *(undefined4 *)(param_1 + 0x1b0) = 0x6e6f6974;
      *(undefined4 *)(param_1 + 0x1b4) = 0x206f7420;
      *(undefined1 *)(param_1 + 0x1b8) = 0;
      equipment_supplier_0x70cc0(auStack_7a0);
      FUN_140aadad0(param_1 + 0x1d48);
      lVar13 = equipment_supplier_0x70b40(auStack_7a0);
      puVar18 = auStack_7a0;
    }
    else {
      *(undefined8 *)(param_1 + 0x198) = 0x7261706572502020;
      *(undefined8 *)(param_1 + 0x1a0) = 0x687420726f662065;
      *(undefined8 *)(param_1 + 0x1a8) = 0x656e72756f4a2065;
      *(undefined4 *)(param_1 + 0x1b0) = 0x6f742079;
      *(undefined2 *)(param_1 + 0x1b4) = 0x20;
      equipment_supplier_0x70cc0(auStack_7e0);
      FUN_140aadad0(param_1 + 0x1d48);
      lVar13 = equipment_supplier_0x70b40(auStack_7e0);
      puVar18 = auStack_7e0;
    }
    pcVar25 = (char *)(param_1 + 0x197);
    do {
      pcVar25 = pcVar25 + 1;
    } while (*pcVar25 != '\0');
    lVar41 = 0;
    do {
      cVar1 = *(char *)(lVar13 + lVar41);
      pcVar25[lVar41] = cVar1;
      lVar41 = lVar41 + 1;
    } while (cVar1 != '\0');
    pcVar25 = (char *)(param_1 + 0x197);
    do {
      pcVar29 = pcVar25;
      pcVar25 = pcVar29 + 1;
    } while (*pcVar25 != '\0');
    pcVar25[0] = ' ';
    pcVar25[1] = ' ';
    pcVar29[3] = '\0';
    equipment_supplier_0x69460(puVar18);
    *(undefined1 *)(param_1 + 0x1e38) = 0;
  }
  FUN_1408d8160(param_1 + 0x198,0,0);
  cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
  iVar37 = _DAT_1423efc04;
  iVar28 = _DAT_1423efc08;
  if (cVar1 != '\0') {
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    iVar37 = _DAT_1423efc04;
    iVar28 = _DAT_1423efc08;
    iVar35 = 0;
    if (0 < _DAT_1423efc04) {
      do {
        iVar27 = 0;
        if (0 < iVar28) {
          do {
            equipment_supplier_0xbc750(0x14266c870,iVar27,iVar35);
            equipment_supplier_0xaf4570(0x14266c870,_DAT_14266e8c4);
            FUN_1400bc7c0(0x14266c870,0,1);
            iVar27 = iVar27 + 1;
            iVar37 = _DAT_1423efc04;
            iVar28 = _DAT_1423efc08;
          } while (iVar27 < _DAT_1423efc08);
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 < iVar37);
    }
  }
  cVar1 = 0x77 < iVar37;
  uStack_c54 = (uint)(byte)cVar1;
  iStack_c5c = 1;
  iVar35 = iVar37 + -2;
  iVar37 = (_DAT_1423efc2c * iVar37) / 100;
  if (iVar37 < 0x72) {
    iVar37 = 0x72;
  }
  if (iVar37 < iVar35) {
    iVar27 = (iVar35 - iVar37) / 2;
    iStack_c5c = ((iVar35 - iVar37) - iVar27) + 1;
    iVar35 = iVar35 - iVar27;
  }
  iVar37 = iStack_c5c;
  iStack_c40 = iVar28 + -8;
  iVar36 = 0x1c;
  iStack_c3c = 0x1c;
  iVar21 = (iVar35 - iStack_c5c) + -0xb;
  iVar27 = 0xa8;
  if (iVar21 < 0xa9) {
    do {
      iVar36 = iVar36 + -1;
      iVar27 = iVar27 + -6;
      iStack_c3c = iVar36;
      if (iVar27 < 0x3d) break;
    } while (iVar21 <= iVar27);
  }
  iVar21 = iStack_c3c;
  uStack_bf8 = CONCAT44(uStack_bf8._4_4_,(iVar35 + iStack_c3c * -6 + -5 + iStack_c5c) / 2 + 4);
  iStack_c58 = iVar28 + -6;
  iVar27 = iVar28 + -2;
  iVar28 = iVar28 + -0x11;
  uStack_c20 = CONCAT44(uStack_c20._4_4_,
                        (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU) >>
                             0x1f) + iVar28 / 3 + (iVar28 >> 0x1f));
  uStack_c68 = CONCAT44(uStack_c68._4_4_,3);
  iStack_c94 = iVar27;
  iStack_c44 = iVar35;
  cVar2 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
  if (cVar2 != '\0') {
    iVar28 = 0;
    if (0 < _DAT_1423efc04) {
      do {
        equipment_supplier_0xbc750(0x14266c870,0,iVar28);
        FUN_1400bc7c0(0x14266c870,0,1);
        equipment_supplier_0xbc750(0x14266c870,_DAT_1423efc08 + -1,iVar28);
        FUN_1400bc7c0(0x14266c870,0,1);
        iVar28 = iVar28 + 1;
        param_1 = lStack_c78;
      } while (iVar28 < _DAT_1423efc04);
    }
    iVar28 = 1;
    if (1 < _DAT_1423efc08 + -1) {
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar28,0);
        FUN_1400bc7c0(0x14266c870,0,1);
        equipment_supplier_0xbc750(0x14266c870,iVar28,_DAT_1423efc04 + -1);
        FUN_1400bc7c0(0x14266c870,0);
        iVar28 = iVar28 + 1;
        param_1 = lStack_c78;
      } while (iVar28 < _DAT_1423efc08 + -1);
    }
    cVar1 = (char)uStack_c54;
  }
  uStack_c70 = CONCAT31(uStack_c70._1_3_,1);
  if ((((DAT_1418c4d48 != '\0') || (DAT_1418c4f98 != '\0')) || (*(char *)(param_1 + 0x76c) != '\0'))
     || (*(char *)(param_1 + 0x7c8) != '\0')) {
    uStack_c70 = (uint)uStack_c70._1_3_ << 8;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0);
  iStack_c98 = 5;
  iVar28 = iVar37;
  if (cVar1 == '\0') {
    for (; iVar37 <= iVar35; iVar37 = iVar37 + 1) {
      iVar28 = 2;
      puVar31 = (undefined4 *)0x14266e17c;
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
        equipment_supplier_0xaf4570(0x14266c870,*puVar31);
        cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar1 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        iVar28 = iVar28 + 1;
        puVar31 = puVar31 + 1;
      } while ((longlong)puVar31 < 0x14266e188);
      iVar27 = iStack_c94;
      param_1 = lStack_c78;
      iVar28 = iStack_c5c;
      iVar21 = iStack_c3c;
    }
  }
  else {
    lVar13 = (longlong)iVar37;
    if (lVar13 <= iVar35) {
      iVar28 = iVar37 + 3;
      lVar41 = (lVar13 - iVar35) * 3;
      lVar43 = lVar13;
      do {
        lVar30 = 0;
        iVar35 = 2;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
          if (iVar28 < iVar37) {
            if (iVar37 < iStack_c44 + -3) {
              uVar10 = *(undefined4 *)(lVar30 * 4 + 0x14266e17c);
            }
            else {
              uVar10 = *(undefined4 *)((lVar30 + lVar41) * 4 + 0x14266e058);
            }
          }
          else {
            uVar10 = *(undefined4 *)((lVar30 + (lVar43 - lVar13) * 3) * 4 + 0x14266e004);
          }
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          if ((char)uStack_c70 != '\0') {
            equipment_supplier_0xbc750(0x14266c870,iStack_c40 + -2 + iVar35,iVar37);
            if (iVar28 < iVar37) {
              if (iVar37 < iStack_c44 + -3) {
                uVar10 = *(undefined4 *)(lVar30 * 4 + 0x14266e17c);
              }
              else {
                uVar10 = *(undefined4 *)((lVar30 + lVar41) * 4 + 0x14266e058);
              }
            }
            else {
              uVar10 = *(undefined4 *)((lVar30 + (lVar43 - lVar13) * 3) * 4 + 0x14266e004);
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
            if (cVar1 != '\0') {
              FUN_1400bc7c0(0x14266c870,0,1);
            }
          }
          equipment_supplier_0xbc750(0x14266c870,iStack_c94 + -4 + iVar35,iVar37);
          if (iVar28 < iVar37) {
            if (iVar37 < iStack_c44 + -3) {
              uVar10 = *(undefined4 *)(lVar30 * 4 + 0x14266e188);
            }
            else {
              uVar10 = *(undefined4 *)((lVar30 + lVar41) * 4 + 0x14266e0b8);
            }
          }
          else {
            uVar10 = *(undefined4 *)((lVar30 + (lVar43 - lVar13) * 3) * 4 + 0x14266e064);
          }
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          iVar35 = iVar35 + 1;
          lVar30 = lVar30 + 1;
        } while (lVar30 < 3);
        iVar37 = iVar37 + 1;
        lVar43 = lVar43 + 1;
        lVar41 = lVar41 + 3;
        param_1 = lStack_c78;
      } while (lVar43 <= iStack_c44);
    }
    iVar28 = iStack_c94 + -3;
    iVar37 = 5;
    if (4 < iVar28) {
      iVar35 = iStack_c44 - iStack_c5c;
      do {
        puVar31 = (undefined4 *)0x14266e16c;
        iVar27 = iStack_c5c;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar37,iVar27);
          equipment_supplier_0xaf4570(0x14266c870,puVar31[-4]);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35 + -3 + iVar27);
          equipment_supplier_0xaf4570(0x14266c870,*puVar31);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          iVar27 = iVar27 + 1;
          puVar31 = puVar31 + 1;
        } while ((longlong)puVar31 < 0x14266e17c);
        iVar37 = iVar37 + 1;
        param_1 = lStack_c78;
      } while (iVar37 <= iVar28);
    }
    iVar28 = iStack_c5c;
    iVar21 = iStack_c3c;
    iVar27 = iStack_c94;
    iVar35 = iStack_c44;
    if ((char)uStack_c70 != '\0') {
      puVar31 = (undefined4 *)0x14266e138;
      iVar37 = iStack_c44 + -3;
      iVar36 = iStack_c5c - iStack_c44;
      do {
        lVar13 = 3;
        iVar28 = iStack_c40;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37 + iVar36 + 4);
          equipment_supplier_0xaf4570(0x14266c870,puVar31[-9]);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
          equipment_supplier_0xaf4570(0x14266c870,*puVar31);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          iVar28 = iVar28 + 1;
          puVar31 = puVar31 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        iVar37 = iVar37 + 1;
        param_1 = lStack_c78;
        iVar28 = iStack_c5c;
        iVar21 = iStack_c3c;
        iVar27 = iStack_c94;
        iVar35 = iStack_c44;
      } while ((longlong)puVar31 < 0x14266e15c);
    }
  }
  if (*(char *)(param_1 + 0x6f4) != '\0') {
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,6,iVar28 + 4);
    FUN_140069780(auStack_260,"Custom settings");
    FUN_140af3400(0x14266c870,auStack_260,0,0);
    equipment_supplier_0x69460(auStack_260);
    iVar21 = iVar35 + -4;
    iVar27 = (iVar27 + -0xc) / 3;
    uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar27);
    uStack_c00 = equipment_supplier_0x70480(param_1 + 0x728);
    iVar37 = iVar35 + -6;
    if ((int)uStack_c00 <= iVar27) {
      iVar37 = iVar21;
    }
    iVar36 = iVar28 + 0x40;
    iVar27 = iVar28 + 0x42;
    iStack_c90 = iVar28 + 0x43;
    iVar42 = iVar28 + 0x5d;
    iVar22 = iVar28 + 0x5e;
    iVar23 = iVar28 + 0x60;
    iStack_c60 = iVar28 + 0x61;
    iVar28 = iVar28 + 99;
    if (iVar37 <= iVar28) {
      iVar36 = iVar37 + -0x24;
      iVar27 = iVar37 + -0x22;
      iStack_c90 = iVar37 + -0x21;
      iVar42 = iVar37 + -7;
      iVar22 = iVar37 + -6;
      iVar23 = iVar37 + -4;
      iStack_c60 = iVar37 + -3;
      iVar28 = iVar37 + -1;
    }
    uStack_bf8 = CONCAT44(uStack_bf8._4_4_,iVar28);
    puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar22);
    uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar23);
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar36);
    uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar27);
    for (iVar28 = iVar35 + -0xb; iStack_c94 = iVar37, iStack_c30 = iVar42, iVar28 <= iVar21;
        iVar28 = iVar28 + 1) {
      iVar37 = 5;
      puVar31 = (undefined4 *)0x1423f2f30;
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar37,iVar28);
        if (iVar28 == iVar35 + -0xb) {
          uVar10 = puVar31[-2];
        }
        else if (iVar28 == iVar21) {
          uVar10 = *puVar31;
        }
        else {
          uVar10 = puVar31[-1];
        }
        equipment_supplier_0xaf4570(0x14266c870,uVar10);
        iVar37 = iVar37 + 1;
        puVar31 = puVar31 + 3;
      } while ((longlong)puVar31 < 0x1423f2f49);
      param_1 = lStack_c78;
      iVar42 = iStack_c30;
      iVar37 = iStack_c94;
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,6,iVar35 + -9);
    FUN_140069780(auStack_420,"Done");
    FUN_140af3400(0x14266c870,auStack_420,0,0);
    equipment_supplier_0x69460(auStack_420);
    iStack_c98 = 9;
    uStack_c54 = *(uint *)(param_1 + 0x6f8);
    uStack_c80 = uStack_c54 + (int)uStack_c10;
    iVar28 = (int)uStack_c10;
    if ((int)uStack_c54 < (int)uStack_c80) {
      lVar13 = param_1 + 0x728;
      do {
        if ((int)(uint)uStack_c00 <= (int)uStack_c54) break;
        iVar28 = iStack_c5c + 4;
        if (iVar28 <= iVar37) {
          iVar21 = iStack_c98 + 2;
          iVar35 = iVar28;
          iVar27 = iStack_c98;
          do {
            iVar36 = iVar27;
            if (iVar27 <= iVar21) {
              if (iVar35 == iVar37) {
                puVar31 = (undefined4 *)0x1423f2f0c;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar27,iVar35);
                  puVar16 = puVar31 + -2;
                  if (iVar35 != iVar28) {
                    puVar16 = puVar31;
                  }
                  equipment_supplier_0xaf4570(0x14266c870,*puVar16);
                  iVar27 = iVar27 + 1;
                  puVar31 = puVar31 + 3;
                  param_1 = lStack_c78;
                  iVar37 = iStack_c94;
                  iVar36 = iStack_c98;
                } while (iVar27 <= iVar21);
              }
              else {
                puVar31 = (undefined4 *)0x1423f2f08;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar27,iVar35);
                  puVar16 = puVar31 + -1;
                  if (iVar35 != iVar28) {
                    puVar16 = puVar31;
                  }
                  equipment_supplier_0xaf4570(0x14266c870,*puVar16);
                  iVar27 = iVar27 + 1;
                  puVar31 = puVar31 + 3;
                  param_1 = lStack_c78;
                  iVar37 = iStack_c94;
                  iVar36 = iStack_c98;
                } while (iVar27 <= iVar21);
              }
            }
            iVar27 = iVar36;
            iVar35 = iVar35 + 1;
          } while (iVar35 <= iVar37);
          lVar13 = param_1 + 0x728;
        }
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar28 = iStack_c5c;
        iVar37 = iStack_c98 + 2;
        equipment_supplier_0xbc750(0x14266c870,iStack_c98 + 1,iStack_c5c + 6);
        uVar33 = uStack_c54;
        lVar41 = (longlong)(int)uStack_c54;
        plVar14 = (longlong *)equipment_supplier_0x70850(lVar13,lVar41);
        FUN_140af3400(0x14266c870,*plVar14 + 8,0,0);
        puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,lVar41);
        cVar1 = (**(code **)(*(longlong *)*puVar15 + 0x20))();
        if (cVar1 != '\0') {
          equipment_supplier_0xbc750(0x14266c870,iVar37,iVar28 + 8);
          equipment_supplier_0xbc760(0x14266c870,2,0,0);
          FUN_140069780(auStack_3a0,"Range: ");
          FUN_140af3400(0x14266c870,auStack_3a0,0,0);
          equipment_supplier_0x69460(auStack_3a0);
          equipment_supplier_0x70cc0(auStack_8a0);
          puVar15 = (undefined8 *)equipment_supplier_0x70850(param_1 + 0x728,lVar41);
          uVar10 = (**(code **)(*(longlong *)*puVar15 + 0x30))();
          FUN_140545790(uVar10,auStack_8a0);
          FUN_140af3400(0x14266c870,auStack_8a0,0,0);
          FUN_140069780(auStack_720," to ");
          FUN_140af3400(0x14266c870,auStack_720,0,0);
          equipment_supplier_0x69460(auStack_720);
          puVar15 = (undefined8 *)equipment_supplier_0x70850(param_1 + 0x728,lVar41);
          uVar10 = (**(code **)(*(longlong *)*puVar15 + 0x38))();
          FUN_140545790(uVar10,auStack_8a0);
          FUN_140af3400(0x14266c870,auStack_8a0,0,0);
          equipment_supplier_0x69460(auStack_8a0);
        }
        lVar13 = param_1 + 0x728;
        puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,lVar41);
        cVar1 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
        iVar28 = iStack_c90;
        if (cVar1 == '\0') {
          iVar27 = iStack_c90;
          iVar35 = iStack_c98;
          if (iStack_c90 <= iVar42) {
            do {
              iVar21 = iVar35;
              if (iVar35 <= iVar37) {
                puVar31 = (undefined4 *)0x1423f33b4;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar35,iVar27);
                  if (iVar27 == iVar28) {
                    uVar10 = puVar31[-0x12];
                  }
                  else if (iVar27 == iVar42 + -3) {
                    uVar10 = *puVar31;
                  }
                  else if (iVar27 == iVar42 + -2) {
                    uVar10 = puVar31[3];
                  }
                  else if (iVar27 == iVar42 + -1) {
                    uVar10 = puVar31[6];
                  }
                  else if (iVar27 == iVar42) {
                    uVar10 = puVar31[9];
                  }
                  else {
                    uVar10 = puVar31[-0xf];
                  }
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                  cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar1 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar35 = iVar35 + 1;
                  puVar31 = puVar31 + 1;
                  param_1 = lStack_c78;
                  iVar21 = iStack_c98;
                } while (iVar35 <= iVar37);
              }
              iVar27 = iVar27 + 1;
              iVar35 = iVar21;
            } while (iVar27 <= iVar42);
            lVar13 = param_1 + 0x728;
            uVar33 = uStack_c54;
          }
          equipment_supplier_0xbc760(0x14266c870,3,0,1);
          iVar37 = iStack_c98;
          equipment_supplier_0xbc750(0x14266c870,iStack_c98 + 1,iVar28 + 2);
          if ((uVar33 == *(uint *)(param_1 + 0x700)) && (*(char *)(param_1 + 0x6fd) != '\0')) {
            FUN_140070c00(auStack_780,param_1 + 0x708);
            uVar11 = GetTickCount();
            if (uVar11 % 1000 < 500) {
              equipment_supplier_0x70b90(auStack_780,"_");
            }
            FUN_140af3400(0x14266c870,auStack_780,0,0);
            puVar18 = auStack_780;
          }
          else {
            equipment_supplier_0x70cc0(auStack_760);
            puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)(int)uVar33);
            (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,auStack_760);
            FUN_140af3400(0x14266c870,auStack_760,0,0);
            puVar18 = auStack_760;
          }
        }
        else {
          iVar35 = iStack_c90;
          iVar27 = iStack_c98;
          if (iStack_c90 <= iVar42) {
            do {
              iVar21 = iVar27;
              if (iVar27 <= iVar37) {
                if (iVar35 == iVar42) {
                  puVar31 = (undefined4 *)0x1423f2f30;
                  do {
                    equipment_supplier_0xbc750(0x14266c870,iVar27,iVar35);
                    puVar16 = puVar31 + -2;
                    if (iVar35 != iVar28) {
                      puVar16 = puVar31;
                    }
                    equipment_supplier_0xaf4570(0x14266c870,*puVar16);
                    iVar27 = iVar27 + 1;
                    puVar31 = puVar31 + 3;
                    param_1 = lStack_c78;
                    iVar21 = iStack_c98;
                  } while (iVar27 <= iVar37);
                }
                else {
                  puVar31 = (undefined4 *)0x1423f2f2c;
                  do {
                    equipment_supplier_0xbc750(0x14266c870,iVar27,iVar35);
                    puVar16 = puVar31 + -1;
                    if (iVar35 != iVar28) {
                      puVar16 = puVar31;
                    }
                    equipment_supplier_0xaf4570(0x14266c870,*puVar16);
                    iVar27 = iVar27 + 1;
                    puVar31 = puVar31 + 3;
                    param_1 = lStack_c78;
                    iVar21 = iStack_c98;
                  } while (iVar27 <= iVar37);
                }
              }
              iVar35 = iVar35 + 1;
              iVar27 = iVar21;
            } while (iVar35 <= iVar42);
            lVar13 = param_1 + 0x728;
            uVar33 = uStack_c54;
          }
          equipment_supplier_0xbc760(0x14266c870,3,0,1);
          iVar37 = iStack_c98;
          equipment_supplier_0xbc750(0x14266c870,iStack_c98 + 1,iVar28 + 2);
          equipment_supplier_0x70cc0(auStack_7c0);
          puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)(int)uVar33);
          (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,auStack_7c0);
          FUN_140af3400(0x14266c870,auStack_7c0,0,0);
          puVar18 = auStack_7c0;
        }
        equipment_supplier_0x69460(puVar18);
        puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)(int)uVar33);
        cVar1 = (**(code **)(*(longlong *)*puVar15 + 0x28))();
        if (cVar1 != '\0') {
          lVar41 = (longlong)(int)uStack_c68;
          lVar13 = (longlong)(int)uStack_c88;
          if (lVar41 <= lVar13) {
            iVar28 = iVar37 + 2;
            lVar43 = lVar41;
            uStack_be8 = (undefined4 *)lVar13;
            uStack_bd8 = (undefined4 *)lVar41;
            do {
              if (iVar37 <= iVar28) {
                lVar30 = -lVar41;
                iVar35 = iVar37;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar35);
                  equipment_supplier_0xaf4ba0
                            (0x14266c870,*(undefined4 *)((lVar43 + lVar30) * 4 + 0x1423f2fdc));
                  iVar35 = iVar35 + 1;
                  lVar30 = lVar30 + 3;
                  lVar13 = (longlong)uStack_be8;
                  lVar41 = (longlong)uStack_bd8;
                  iVar37 = iStack_c98;
                } while (iVar35 <= iVar28);
              }
              lVar43 = lVar43 + 1;
              param_1 = lStack_c78;
              iVar42 = iStack_c30;
            } while (lVar43 <= lVar13);
          }
          puVar16 = (undefined4 *)(longlong)(int)puStack_c28;
          puVar31 = (undefined4 *)(longlong)(int)(uint)uStack_c38;
          uVar33 = uStack_c54;
          uStack_be8 = puVar31;
          uStack_bd8 = puVar16;
          if ((longlong)puVar16 <= (longlong)puVar31) {
            iVar28 = iVar37 + 2;
            puVar34 = puVar16;
            do {
              if (iVar37 <= iVar28) {
                lVar13 = -(longlong)puVar16;
                iVar35 = iVar37;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar35);
                  equipment_supplier_0xaf4ba0
                            (0x14266c870,
                             *(undefined4 *)(((longlong)puVar34 + lVar13) * 4 + 0x1423f3000));
                  iVar35 = iVar35 + 1;
                  lVar13 = lVar13 + 3;
                  puVar31 = uStack_be8;
                  puVar16 = uStack_bd8;
                  iVar37 = iStack_c98;
                } while (iVar35 <= iVar28);
              }
              puVar34 = (undefined4 *)((longlong)puVar34 + 1);
              param_1 = lStack_c78;
              iVar42 = iStack_c30;
              uVar33 = uStack_c54;
            } while ((longlong)puVar34 <= (longlong)puVar31);
          }
        }
        lVar13 = param_1 + 0x728;
        puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)(int)uVar33);
        cVar1 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
        if (cVar1 != '\0') {
          puVar16 = (undefined4 *)(longlong)iStack_c60;
          puVar31 = (undefined4 *)(longlong)(int)uStack_bf8;
          uStack_be8 = puVar31;
          uStack_bd8 = puVar16;
          if ((longlong)puVar16 <= (longlong)puVar31) {
            iVar28 = iVar37 + 2;
            puVar34 = puVar16;
            do {
              if (iVar37 <= iVar28) {
                lVar13 = -(longlong)puVar16;
                iVar35 = iVar37;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar35);
                  equipment_supplier_0xaf4ba0
                            (0x14266c870,
                             *(undefined4 *)(((longlong)puVar34 + lVar13) * 4 + 0x1423f3024));
                  iVar35 = iVar35 + 1;
                  lVar13 = lVar13 + 3;
                  puVar31 = uStack_be8;
                  puVar16 = uStack_bd8;
                  param_1 = lStack_c78;
                  iVar37 = iStack_c98;
                } while (iVar35 <= iVar28);
              }
              puVar34 = (undefined4 *)((longlong)puVar34 + 1);
              iVar42 = iStack_c30;
            } while ((longlong)puVar34 <= (longlong)puVar31);
          }
          lVar13 = param_1 + 0x728;
        }
        iStack_c98 = iVar37 + 3;
        uStack_c54 = uStack_c54 + 1;
        iVar37 = iStack_c94;
      } while ((int)uStack_c54 < (int)uStack_c80);
      iVar28 = (int)uStack_c10;
    }
    iVar37 = (int)uStack_c00;
    if (iVar28 < iVar37) {
      equipment_supplier_0xbc990(auStack_ae0);
      uStack_cd8 = iVar28 * 3 + 7;
      uStack_ce0 = 10;
      iStack_ce8 = iVar28;
      equipment_supplier_0xbc9b0(auStack_ae0,*(undefined4 *)(param_1 + 0x6f8),0,iVar37 + -1);
      uStack_ce0 = 1;
      iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x6fc));
      FUN_1414284b0(auStack_ae0,iStack_c4c,uStack_c50,iStack_c94 + 1);
    }
    goto LAB_14107aab3;
  }
  if (*(char *)(param_1 + 0x76c) == '\0') {
    if (DAT_1418c4d48 != '\0') {
      equipment_supplier_0x4287a0(0x1418c3620,&uStack_b94,&uStack_b98);
      FUN_1401ff3a0(&DAT_1418c4d48,iStack_c30,uStack_b94,uStack_b98);
      goto LAB_14107aab3;
    }
    if (DAT_1418c4f98 != '\0') {
      equipment_supplier_0x4287a0(0x1418c3620,&uStack_b84,&uStack_b6c);
      FUN_140202f00(&DAT_1418c4f98,iStack_c30,uStack_b84,uStack_b6c);
      goto LAB_14107aab3;
    }
    if (*(char *)(param_1 + 0x7c8) != '\0') {
      equipment_supplier_0xbc760(0x14266c870,7,0,1);
      equipment_supplier_0xbc750(0x14266c870,4,iVar28 + 4);
      FUN_140069780(auStack_460,"Embark preparations were not completed.");
      FUN_140af3400(0x14266c870,auStack_460,0,0);
      equipment_supplier_0x69460(auStack_460);
      iVar37 = iStack_c44;
      uStack_c68 = CONCAT44(uStack_c68._4_4_,iStack_c44 + -4);
      iVar27 = iVar27 + -8;
      uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar27);
      uStack_be8 = (undefined4 *)(param_1 + 0x7b0);
      iVar35 = equipment_supplier_0x70480(uStack_be8);
      puVar31 = uStack_be8;
      if (iVar27 < iVar35) {
        uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar37 + -6);
      }
      if (0 < iVar35) {
        iVar21 = 6;
        iVar37 = iVar35 - iVar27;
        if (*(int *)(param_1 + 0x7cc) <= iVar35 - iVar27) {
          iVar37 = *(int *)(param_1 + 0x7cc);
        }
        iVar36 = 0;
        if (-1 < iVar37) {
          iVar36 = iVar37;
        }
        iVar37 = iVar36 + iVar27;
        if (iVar36 < iVar37) {
          do {
            if (iVar35 <= iVar36) break;
            equipment_supplier_0xbc750(0x14266c870,iVar21,iVar28 + 4);
            equipment_supplier_0xbc760(0x14266c870,4,0,1);
            puVar15 = (undefined8 *)equipment_supplier_0x70850(puVar31,(longlong)iVar36);
            FUN_140af3400(0x14266c870,*puVar15,0,0);
            iVar21 = iVar21 + 1;
            iVar36 = iVar36 + 1;
          } while (iVar36 < iVar37);
          param_1 = lStack_c78;
          iVar27 = (int)uStack_c88;
        }
        if (iVar27 < iVar35) {
          equipment_supplier_0xbc990(auStack_b00);
          uStack_cd8 = iVar27 + 4;
          uStack_ce0 = 7;
          iStack_ce8 = iVar27;
          equipment_supplier_0xbc9b0(auStack_b00,*(undefined4 *)(param_1 + 0x7cc),0,iVar35 + -1);
          uStack_ce0 = 0;
          iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 2000));
          FUN_1414284b0(auStack_b00,iStack_c4c,uStack_c50,(int)uStack_c68 + 1);
        }
      }
      goto LAB_14107aab3;
    }
    uVar11 = 0;
    cVar1 = '\0';
    uVar33 = uVar11;
    if (*(char *)(param_1 + 0x7d1) == '\0') {
      uVar33 = (uint)(*(char *)(param_1 + 0x76d) == '\0');
    }
    if (*(char *)(param_1 + 0x7f8) == '\0') {
      cVar1 = (char)uVar33;
    }
    if (cVar1 != '\0') {
      iStack_c90 = (int)uStack_bf8;
      uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar21 + -1);
      iVar28 = iStack_c58 + 1;
      puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar28);
      puVar31 = (undefined4 *)0x142677020;
      iVar35 = (int)uStack_bf8;
      iVar37 = iVar21 + -1;
      do {
        iVar27 = 0;
        if (0 < iVar37) {
          do {
            puVar16 = (undefined4 *)0x142677014;
            iVar28 = iStack_c58;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar28,iVar27 + iVar35);
              if ((uVar11 == 3) &&
                 (lVar13 = equipment_supplier_0x70480(param_1 + 0x7b0), lVar13 == 0)) {
                if (iVar27 == 0) {
                  uVar10 = puVar16[-6];
                }
                else if (iVar27 == iStack_c3c + -2) {
                  uVar10 = *puVar16;
                }
                else {
                  uVar10 = puVar16[-3];
                }
              }
              else if (iVar27 == 0) {
                uVar10 = puVar16[-0xf];
              }
              else if (iVar27 == iStack_c3c + -2) {
                uVar10 = puVar16[-9];
              }
              else {
                uVar10 = puVar16[-0xc];
              }
              equipment_supplier_0xaf4570(0x14266c870,uVar10);
              iVar28 = iVar28 + 1;
              puVar16 = puVar16 + 1;
            } while ((longlong)puVar16 < 0x142677020);
            iVar27 = iVar27 + 1;
            iVar35 = iStack_c90;
          } while (iVar27 < (int)uStack_c88);
          iVar28 = (int)puStack_c28;
        }
        if ((uVar11 == 3) && (lVar13 = equipment_supplier_0x70480(param_1 + 0x7b0), lVar13 == 0)) {
          uVar40 = 0;
        }
        else {
          uVar40 = 7;
        }
        equipment_supplier_0xbc760(0x14266c870,uVar40,0,1);
        equipment_supplier_0x70cc0(auStack_920);
        if (uVar11 < 6) {
                    /* WARNING: Switch is manually overridden */
          switch(uVar11) {
          case 0:
            pcVar25 = "Fortress Name";
            break;
          case 1:
            pcVar25 = "Group Name";
            break;
          case 2:
            pcVar25 = "Group Symbol";
            break;
          case 3:
            pcVar25 = "Problems";
            break;
          case 4:
            pcVar25 = "Save Profile";
            break;
          case 5:
            pcVar25 = "Embark!";
          }
          equipment_supplier_0x70bb0(auStack_920,pcVar25);
        }
        equipment_supplier_0x70960(auStack_920);
        iVar27 = iStack_c3c;
        equipment_supplier_0xbc750(0x14266c870,iVar28);
        FUN_140af3400(0x14266c870,auStack_920,0,0);
        iVar35 = iVar35 + iVar27;
        iStack_c90 = iVar35;
        equipment_supplier_0x69460(auStack_920);
        uVar11 = uVar11 + 1;
        iVar37 = (int)uStack_c88;
      } while ((int)uVar11 < 6);
      if ((char)uStack_c54 != '\0') {
        iVar28 = (int)uStack_bf8 + iVar27 * 6 + -2;
        do {
          lVar13 = 3;
          iVar37 = iStack_c58;
          do {
            equipment_supplier_0xbc750(0x14266c870,iVar37,iVar28 + ~(iVar27 * 6));
            equipment_supplier_0xaf4ba0(0x14266c870,puVar31[-0x1e],0);
            equipment_supplier_0xbc750(0x14266c870,iVar37,iVar28);
            equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
            iVar37 = iVar37 + 1;
            puVar31 = puVar31 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          iVar28 = iVar28 + 1;
          param_1 = lStack_c78;
        } while ((longlong)puVar31 < 0x142677050);
      }
    }
    iVar28 = 0;
    uStack_bd8 = (undefined4 *)CONCAT44(iStack_c5c + 0x15,iStack_c5c + 5);
    iStack_bd0 = iStack_c5c + 0x25;
    uStack_be8 = (undefined4 *)CONCAT44(iStack_c5c + 0x24,iStack_c5c + 0x14);
    iStack_be0 = iStack_c5c + 0x34;
    uStack_c88 = 0;
    do {
      iVar37 = *(int *)((longlong)&uStack_bd8 + uStack_c88);
      iVar35 = iVar37;
      if (iVar37 <= *(int *)((longlong)&uStack_be8 + uStack_c88)) {
        do {
          equipment_supplier_0xbc750(0x14266c870,1,iVar35);
          if (iVar35 == iVar37) {
            uVar10 = _DAT_14266e75c;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e798;
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,2,iVar35);
            uVar10 = _DAT_14266e760;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e79c;
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,3,iVar35);
            uVar10 = _DAT_14266e764;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e7a0;
            }
          }
          else if (iVar35 == iVar37 + 1) {
            uVar10 = _DAT_14266e768;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e7a4;
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,2,iVar35);
            uVar10 = _DAT_14266e76c;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e7a8;
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,3,iVar35);
            uVar10 = _DAT_14266e770;
            if (*(int *)(param_1 + 0x740) == iVar28) {
              uVar10 = _DAT_14266e7ac;
            }
          }
          else {
            if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88)) {
              uVar10 = _DAT_14266e78c;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7c8;
              }
            }
            else if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88) + -1) {
              uVar10 = _DAT_14266e780;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7bc;
              }
            }
            else {
              uVar10 = _DAT_14266e7b0;
              if (*(int *)(param_1 + 0x740) != iVar28) {
                uVar10 = _DAT_14266e774;
              }
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,2,iVar35);
            if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88)) {
              uVar10 = _DAT_14266e790;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7cc;
              }
            }
            else if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88) + -1) {
              uVar10 = _DAT_14266e784;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7c0;
              }
            }
            else {
              uVar10 = _DAT_14266e7b4;
              if (*(int *)(param_1 + 0x740) != iVar28) {
                uVar10 = _DAT_14266e778;
              }
            }
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            equipment_supplier_0xbc750(0x14266c870,3,iVar35);
            if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88)) {
              uVar10 = _DAT_14266e794;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7d0;
              }
            }
            else if (iVar35 == *(int *)((longlong)&uStack_be8 + uStack_c88) + -1) {
              uVar10 = _DAT_14266e788;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7c4;
              }
            }
            else {
              uVar10 = _DAT_14266e77c;
              if (*(int *)(param_1 + 0x740) == iVar28) {
                uVar10 = _DAT_14266e7b8;
              }
            }
          }
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
          iVar35 = iVar35 + 1;
        } while (iVar35 <= *(int *)((longlong)&uStack_be8 + uStack_c88));
      }
      iVar37 = 0;
      cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
      if (cVar1 == '\0') {
        equipment_supplier_0xbc760(0x14266c870,7,0,*(int *)(param_1 + 0x740) == iVar28);
      }
      else {
        bVar44 = *(int *)(param_1 + 0x740) != iVar28;
        iVar35 = iVar37;
        if (bVar44) {
          iVar35 = 0xff;
        }
        uVar40 = 0x2c;
        if (bVar44) {
          uVar40 = 0xff;
        }
        uVar24 = 0x46;
        if (bVar44) {
          uVar24 = 0xff;
        }
        equipment_supplier_0xbc780(0x14266c870,uVar24,uVar40,iVar35);
        equipment_supplier_0xbc7a0(0x14266c870,0,0,0);
      }
      equipment_supplier_0xbc750(0x14266c870,2);
      equipment_supplier_0x70cc0(auStack_9c0);
      if (iVar28 == 0) {
        FUN_140abd670(_DAT_1423b5afc,auStack_9c0,1,0xffffffff);
        FUN_140546b30(auStack_9c0);
        uVar32 = equipment_supplier_0x70960(auStack_9c0);
        if (0xc < uVar32) {
          pcVar25 = "Citizens";
          goto LAB_141074659;
        }
      }
      else {
        if (iVar28 == 1) {
          pcVar25 = "Items";
        }
        else {
          if (iVar28 != 2) goto LAB_141074665;
          pcVar25 = "Animals";
        }
LAB_141074659:
        equipment_supplier_0x70bb0(auStack_9c0,pcVar25);
      }
LAB_141074665:
      cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
      if (cVar1 == '\0') {
        equipment_supplier_0x70960(auStack_9c0);
        equipment_supplier_0xbc750(0x14266c870,2);
        FUN_140af3400(0x14266c870,auStack_9c0,0,0);
      }
      else {
        lVar13 = equipment_supplier_0x70960(auStack_9c0);
        if (lVar13 != 0) {
          uVar32 = 0;
          do {
            equipment_supplier_0x70960(auStack_9c0);
            equipment_supplier_0xbc750(0x14266c870,2);
            cVar1 = equipment_supplier_0x227660(0x1423b2710);
            if (cVar1 == '\0') {
              pcVar25 = (char *)equipment_supplier_0xfcbe0(auStack_9c0,uVar32);
              uVar10 = *(undefined4 *)((longlong)*pcVar25 * 4 + 0x1423f00d0);
            }
            else {
              pcVar25 = (char *)equipment_supplier_0xfcbe0(auStack_9c0,uVar32);
              uVar10 = *(undefined4 *)((longlong)*pcVar25 * 4 + 0x1423f04d0);
            }
            uStack_cd8 = CONCAT31(uStack_cd8._1_3_,1);
            uStack_ce0 = 2;
            iStack_ce8 = 1;
            FUN_140af4810(0x14266c870,uVar10,0,2);
            iVar37 = iVar37 + 1;
            uVar32 = (ulonglong)iVar37;
            uVar17 = equipment_supplier_0x70960(auStack_9c0);
            param_1 = lStack_c78;
          } while (uVar32 < uVar17);
        }
      }
      equipment_supplier_0xbc760(0x14266c870,7,0);
      equipment_supplier_0x69460(auStack_9c0);
      iVar28 = iVar28 + 1;
      uStack_c88 = uStack_c88 + 4;
    } while (iVar28 < 3);
    uStack_be8 = (undefined4 *)0x14266e0e4;
    if (*(int *)(param_1 + 0x740) == 0) {
      cVar1 = (char)uStack_c54;
      iVar28 = iStack_c5c;
      if (cVar1 != '\0') {
        iVar28 = iStack_c5c + 3;
      }
      uVar33 = iVar28 + 3;
      iStack_c98 = _DAT_1423efc04 / 2;
      iVar28 = iStack_c98 + -3;
      iVar37 = iStack_c44;
      if (cVar1 != '\0') {
        iVar37 = iStack_c44 + -3;
      }
      iStack_c90 = iVar28;
      uStack_c80 = uVar33;
      iVar27 = equipment_supplier_0x70a80
                         (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
      iVar35 = iVar37 + -5;
      if (iVar27 <= (int)uStack_c20) {
        iVar35 = iVar37 + -3;
      }
      iStack_c94 = iVar35;
      equipment_supplier_0xbc760(0x14266c870,7,0,1);
      equipment_supplier_0xbc750(0x14266c870,5,(int)(iVar28 + uVar33) / 2 + -6);
      FUN_140069780(auStack_2e0,"Your Citizens");
      FUN_140af3400(0x14266c870,auStack_2e0,0,0);
      equipment_supplier_0x69460(auStack_2e0);
      iVar37 = iStack_c98;
      if (DAT_1418c6380 == '\0') {
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar37 = iStack_c98;
        equipment_supplier_0xbc750(0x14266c870,5,iStack_c98 + 8);
        FUN_140069780(auStack_4e0,"Available Skills");
        FUN_140af3400(0x14266c870,auStack_4e0,0,0);
        equipment_supplier_0x69460(auStack_4e0);
        if ((-1 < *(int *)(param_1 + 0x744)) &&
           (uVar32 = equipment_supplier_0x70480(param_1 + 0x498), iVar37 = iStack_c98,
           (ulonglong)(longlong)*(int *)(param_1 + 0x744) < uVar32)) {
          equipment_supplier_0x70cc0(auStack_840);
          plVar14 = (longlong *)
                    equipment_supplier_0x70850(param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
          FUN_140545790((int)*(short *)(*plVar14 + 0x2ec),auStack_840);
          plVar14 = (longlong *)
                    equipment_supplier_0x70850(param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
          equipment_supplier_0xbc760(0x14266c870,7,0,0 < *(short *)(*plVar14 + 0x2ec));
          iVar37 = equipment_supplier_0x70960(auStack_840);
          equipment_supplier_0xbc750(0x14266c870,5,(iVar35 - iVar37) + -0x14);
          FUN_140af3400(0x14266c870,auStack_840,0,0);
          equipment_supplier_0xbc750(0x14266c870,5,iVar35 + -0x13);
          plVar14 = (longlong *)
                    equipment_supplier_0x70850(param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
          if (*(short *)(*plVar14 + 0x2ec) == 1) {
            FUN_140069780(auStack_4a0,"skill pick left");
            FUN_140af3400(0x14266c870,auStack_4a0,0,0);
            puVar18 = auStack_4a0;
          }
          else {
            FUN_140069780(auStack_4c0,"skill picks left");
            FUN_140af3400(0x14266c870,auStack_4c0,0,0);
            puVar18 = auStack_4c0;
          }
          equipment_supplier_0x69460(puVar18);
          equipment_supplier_0x69460(auStack_840);
          iVar37 = iStack_c98;
        }
      }
      if (cVar1 != '\0') {
        puStack_c28 = (undefined4 *)0x14266e0e4;
        uStack_c88 = CONCAT44(uStack_c88._4_4_,3 - iStack_c40);
        iVar28 = iStack_c40;
        iVar35 = 3 - iStack_c40;
        do {
          lVar13 = 4;
          puVar31 = puStack_c28;
          do {
            equipment_supplier_0xbc750(0x14266c870,iVar28 + iVar35,iVar37);
            equipment_supplier_0xaf4570(0x14266c870,puVar31[-8]);
            cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
            if (cVar1 != '\0') {
              FUN_1400bc7c0(0x14266c870,0,1);
            }
            equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
            equipment_supplier_0xaf4570(0x14266c870,*puVar31);
            cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
            if (cVar1 != '\0') {
              FUN_1400bc7c0(0x14266c870,0,1);
            }
            iVar37 = iVar37 + 1;
            puVar31 = puVar31 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          iVar28 = iVar28 + 1;
          puStack_c28 = puStack_c28 + 1;
          iVar37 = iStack_c98;
          iVar35 = (int)uStack_c88;
        } while ((longlong)puStack_c28 < 0x14266e0ec);
        iVar35 = iStack_c40 + -1;
        iVar37 = 5;
        param_1 = lStack_c78;
        uVar33 = uStack_c80;
        iVar28 = iStack_c90;
        if (4 < iVar35) {
          do {
            puVar31 = (undefined4 *)0x14266e104;
            iVar28 = iStack_c98;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar37,iVar28);
              equipment_supplier_0xaf4570(0x14266c870,*puVar31);
              cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
              if (cVar1 != '\0') {
                FUN_1400bc7c0(0x14266c870,0,1);
              }
              iVar28 = iVar28 + 1;
              puVar31 = puVar31 + 1;
            } while ((longlong)puVar31 < 0x14266e114);
            iVar37 = iVar37 + 1;
            param_1 = lStack_c78;
            uVar33 = uStack_c80;
            iVar28 = iStack_c90;
          } while (iVar37 <= iVar35);
        }
      }
      equipment_supplier_0x70cc0(auStack_9e0);
      equipment_supplier_0x70cc0(auStack_100);
      *(undefined4 *)(param_1 + 0x768) = 8;
      *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x744);
      iVar35 = equipment_supplier_0x70480(param_1 + 0x1f30);
      iVar37 = (int)uStack_c20;
      uStack_c88 = (ulonglong)*(uint *)(param_1 + 0x748);
      if (iVar35 - (int)uStack_c20 < (int)*(uint *)(param_1 + 0x748)) {
        iVar35 = equipment_supplier_0x70480(param_1 + 0x1f30);
        uVar11 = iVar35 - iVar37;
        uStack_c88 = (ulonglong)uVar11;
        *(uint *)(param_1 + 0x748) = uVar11;
      }
      if ((int)uStack_c88 < 0) {
        *(undefined4 *)(param_1 + 0x748) = 0;
        uStack_c88 = 0;
      }
      if ((int)uStack_c88 < iVar37 + (int)uStack_c88) {
        do {
          uVar32 = uStack_c88;
          uVar17 = equipment_supplier_0x70480(param_1 + 0x1f30);
          iVar37 = (int)uVar32;
          if (uVar17 <= (ulonglong)(longlong)iVar37) break;
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          iVar35 = uVar33;
          if ((int)uVar33 <= iVar28) {
            do {
              iVar37 = *(int *)(param_1 + 0x768);
              if (iVar37 < iVar37 + 3) {
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
                  if (iVar35 == uVar33) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e410);
                  }
                  else if (iVar35 == uVar33 + 1) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                  }
                  else if (iVar35 == uVar33 + 2) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                  }
                  else if (iVar35 == uVar33 + 3) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                  }
                  else if (iVar35 == uVar33 + 4) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e428);
                  }
                  else {
                    lVar13 = (longlong)(iVar37 - *(int *)(param_1 + 0x768));
                    if (iVar35 == iVar28) {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                    }
                    else {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                    }
                  }
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                  cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar1 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar37 = iVar37 + 1;
                } while (iVar37 < *(int *)(param_1 + 0x768) + 3);
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 <= iVar28);
            iVar37 = (int)uStack_c88;
          }
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 == '\0') {
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,uVar33 + 2);
            puVar15 = (undefined8 *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            FUN_14134c4d0(*puVar15,0,1,0);
            puVar15 = (undefined8 *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            uVar3 = (*(code *)**(undefined8 **)*puVar15)((undefined8 *)*puVar15,0);
            FUN_1400bc7c0(0x14266c870,uVar3,1);
          }
          else {
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768),uVar33);
            equipment_supplier_0x70cc0(auStack_480);
            puVar15 = (undefined8 *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            uVar40 = *puVar15;
            plVar14 = (longlong *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            uVar7 = *(undefined2 *)(*plVar14 + 0xa0);
            plVar14 = (longlong *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            uVar8 = *(undefined2 *)(*plVar14 + 300);
            plVar14 = (longlong *)equipment_supplier_0x70850(param_1 + 0x1f30,(longlong)iVar37);
            uStack_cb8 = 0;
            uStack_cc0 = 0;
            uStack_cd0 = CONCAT44(uStack_cd0._4_4_,0x400);
            uStack_cd8 = CONCAT22(uStack_cd8._2_2_,uVar7);
            uStack_ce0 = CONCAT22(uStack_ce0._2_2_,0xffff);
            iStack_ce8 = CONCAT22(iStack_ce8._2_2_,0xffff);
            uStack_cc8 = uVar40;
            iVar28 = FUN_1400f3d80(0x14250eec8,auStack_480,*(undefined2 *)(*plVar14 + 0xa4),uVar8);
            if (iVar28 != 0) {
              uStack_cd8 = uStack_cd8 & 0xffffff00;
              uStack_ce0 = 3;
              iStack_ce8 = 5;
              FUN_140af4810(0x14266c870,iVar28,2);
            }
            equipment_supplier_0x69460(auStack_480);
            uVar33 = uStack_c80;
          }
          lVar13 = param_1 + 0x1f30;
          puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)iVar37);
          FUN_14134c4d0(*puVar15,0,1,0);
          plVar14 = (longlong *)equipment_supplier_0x70850(lVar13,(longlong)iVar37);
          iVar28 = uVar33 + 8;
          if (*(int *)(*plVar14 + 0x3d0) == -1) {
            iVar28 = uVar33 + 7;
          }
          equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar28);
          puVar15 = (undefined8 *)equipment_supplier_0x70850(lVar13,(longlong)iVar37);
          FUN_141349540(*puVar15,auStack_9e0,0);
          iVar28 = iStack_c90;
          iVar35 = iStack_c90 - uVar33;
          uVar32 = equipment_supplier_0x70960(auStack_9e0);
          if ((ulonglong)(longlong)(iVar35 + -0x1d) <= uVar32) {
            if (-1 < iVar35 + -0x1e) {
              equipment_supplier_0xe2860(auStack_9e0,(longlong)iVar35 + -0x1e,0);
            }
            uVar33 = uStack_c80;
            if (3 < iVar35 + -0x1e) {
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_9e0,(longlong)iVar35 + -0x21);
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_9e0,(longlong)(iVar35 + -0x20));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_9e0,(longlong)(iVar35 + -0x1f));
              *puVar18 = 0x2e;
              uVar33 = uStack_c80;
            }
          }
          FUN_140af3400(0x14266c870,auStack_9e0,0,0);
          iVar27 = iVar28 + -9;
          iVar35 = iVar28 + -0x15;
          for (iVar21 = iVar35; iVar21 <= iVar27; iVar21 = iVar21 + 1) {
            equipment_supplier_0xbc750(0x14266c870,*(undefined4 *)(param_1 + 0x768),iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 == '\0')) {
              uVar10 = _DAT_142677074;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142677080, iVar21 == iVar27)) {
                uVar10 = _DAT_14267708c;
              }
            }
            else {
              uVar10 = _DAT_142676fd8;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142676ff0, iVar21 != iVar27)) {
                uVar10 = _DAT_142676fe4;
              }
            }
            equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 == '\0')) {
              if (iVar21 == iVar35) {
                equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
              }
              else {
                uVar10 = _DAT_142677084;
                if (iVar21 == iVar27) {
                  equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
                }
                else {
LAB_141075192:
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                }
              }
            }
            else if (iVar21 == iVar35) {
              equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
            }
            else {
              uVar10 = _DAT_142676fe8;
              if (iVar21 != iVar27) goto LAB_141075192;
              equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
            }
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 2,iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 == '\0')) {
              uVar10 = _DAT_14267707c;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142677088, iVar21 == iVar27)) {
                uVar10 = _DAT_142677094;
              }
            }
            else {
              uVar10 = _DAT_142676fe0;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142676ff8, iVar21 != iVar27)) {
                uVar10 = _DAT_142676fec;
              }
            }
            equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
            uVar33 = uStack_c80;
          }
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar28 + -0x14);
          FUN_140069780(auStack_880,"Skills");
          plVar14 = (longlong *)equipment_supplier_0x70850(param_1 + 0x498,(longlong)iVar37);
          if (0 < *(short *)(*plVar14 + 0x2ec)) {
            equipment_supplier_0x70b90(auStack_880," (");
            plVar14 = (longlong *)equipment_supplier_0x70850(param_1 + 0x498,(longlong)iVar37);
            FUN_140545610((int)*(short *)(*plVar14 + 0x2ec),auStack_880);
            equipment_supplier_0x70b90(auStack_880,")");
          }
          FUN_140af3400(0x14266c870,auStack_880,0,0);
          iVar27 = iVar28 + -1;
          iVar35 = iVar28 + -6;
          for (iVar21 = iVar35; iVar21 <= iVar27; iVar21 = iVar21 + 1) {
            equipment_supplier_0xbc750(0x14266c870,*(undefined4 *)(param_1 + 0x768),iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 != '\0')) {
              uVar10 = _DAT_142677074;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142677080, iVar21 == iVar27)) {
                uVar10 = _DAT_14267708c;
              }
            }
            else {
              uVar10 = _DAT_142676fd8;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142676ff0, iVar21 != iVar27)) {
                uVar10 = _DAT_142676fe4;
              }
            }
            equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 != '\0')) {
              if (iVar21 == iVar35) {
                equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
              }
              else {
                uVar10 = _DAT_142677084;
                if (iVar21 == iVar27) {
                  equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
                }
                else {
LAB_1410753ff:
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                }
              }
            }
            else if (iVar21 == iVar35) {
              equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
            }
            else {
              uVar10 = _DAT_142676fe8;
              if (iVar21 != iVar27) goto LAB_1410753ff;
              equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
            }
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 2,iVar21);
            if ((*(int *)(param_1 + 0x744) == iVar37) && (DAT_1418c6380 != '\0')) {
              uVar10 = _DAT_14267707c;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142677088, iVar21 == iVar27)) {
                uVar10 = _DAT_142677094;
              }
            }
            else {
              uVar10 = _DAT_142676fe0;
              if ((iVar21 != iVar35) && (uVar10 = _DAT_142676ff8, iVar21 != iVar27)) {
                uVar10 = _DAT_142676fec;
              }
            }
            equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
            uVar33 = uStack_c80;
          }
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1);
          FUN_140069780(auStack_380,"View");
          FUN_140af3400(0x14266c870,auStack_380,0,0);
          equipment_supplier_0x69460(auStack_380);
          *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
          equipment_supplier_0x69460(auStack_880);
          uStack_c88 = (ulonglong)(iVar37 + 1U);
        } while ((int)(iVar37 + 1U) < (int)uStack_c20 + *(int *)(param_1 + 0x748));
      }
      if (DAT_1418c6380 == '\0') {
        iVar28 = iStack_c98 + 0x17;
        iStack_c08 = iStack_c98 + 0x27;
        iStack_c04 = iStack_c98 + 0x37;
        uStack_bd8 = (undefined4 *)CONCAT44(iStack_c98 + 0x26,iStack_c98 + 0x16);
        iStack_bd0 = iStack_c98 + 0x36;
        iStack_bcc = iStack_c98 + 0x46;
        if ((iStack_c94 - (iStack_c98 + 6)) + 1 < 0x40) {
          iVar28 = iStack_c98 + 0x13;
          uStack_bd8 = (undefined4 *)CONCAT44(iStack_c98 + 0x1c,iStack_c98 + 0x12);
          iStack_c08 = iStack_c98 + 0x1d;
          iStack_bd0 = iStack_c98 + 0x27;
          iStack_c04 = iStack_c98 + 0x28;
          iStack_bcc = iStack_c98 + 0x31;
        }
        uStack_c10 = (short *)CONCAT44(iVar28,iStack_c98 + 7);
        iVar28 = 0;
        puStack_c28 = (undefined4 *)((ulonglong)puStack_c28 & 0xffffffff00000000);
        uStack_c38 = 0;
        do {
          iVar37 = *(int *)((longlong)&uStack_c10 + uStack_c38);
          uStack_c88 = CONCAT44(uStack_c88._4_4_,*(int *)((longlong)&uStack_bd8 + uStack_c38));
          uVar32 = uStack_c38;
          iVar35 = iVar37;
          if (iVar37 <= *(int *)((longlong)&uStack_bd8 + uStack_c38)) {
            do {
              equipment_supplier_0xbc750(0x14266c870,1,iVar35);
              if (iVar35 == iVar37) {
                uVar10 = _DAT_14266e75c;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e798;
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,2,iVar35);
                uVar10 = _DAT_14266e760;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e79c;
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,3,iVar35);
                uVar10 = _DAT_14266e764;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e7a0;
                }
              }
              else if (iVar35 == iVar37 + 1) {
                uVar10 = _DAT_14266e768;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e7a4;
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,2,iVar35);
                uVar10 = _DAT_14266e76c;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e7a8;
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,3,iVar35);
                uVar10 = _DAT_14266e770;
                if (*(int *)(param_1 + 0x750) == iVar28) {
                  uVar10 = _DAT_14266e7ac;
                }
              }
              else {
                if (iVar35 == *(int *)((longlong)&uStack_bd8 + uVar32)) {
                  uVar10 = _DAT_14266e78c;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7c8;
                  }
                }
                else if (iVar35 == *(int *)((longlong)&uStack_bd8 + uVar32) + -1) {
                  uVar10 = _DAT_14266e780;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7bc;
                  }
                }
                else {
                  uVar10 = _DAT_14266e7b0;
                  if (*(int *)(param_1 + 0x750) != iVar28) {
                    uVar10 = _DAT_14266e774;
                  }
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,2,iVar35);
                if (iVar35 == *(int *)((longlong)&uStack_bd8 + uStack_c38)) {
                  uVar10 = _DAT_14266e790;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7cc;
                  }
                }
                else if (iVar35 == *(int *)((longlong)&uStack_bd8 + uStack_c38) + -1) {
                  uVar10 = _DAT_14266e784;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7c0;
                  }
                }
                else {
                  uVar10 = _DAT_14266e7b4;
                  if (*(int *)(param_1 + 0x750) != iVar28) {
                    uVar10 = _DAT_14266e778;
                  }
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                equipment_supplier_0xbc750(0x14266c870,3,iVar35);
                uVar32 = uStack_c38;
                if (iVar35 == *(int *)((longlong)&uStack_bd8 + uStack_c38)) {
                  uVar10 = _DAT_14266e794;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7d0;
                  }
                }
                else if (iVar35 == *(int *)((longlong)&uStack_bd8 + uStack_c38) + -1) {
                  uVar10 = _DAT_14266e788;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7c4;
                  }
                }
                else {
                  uVar10 = _DAT_14266e77c;
                  if (*(int *)(param_1 + 0x750) == iVar28) {
                    uVar10 = _DAT_14266e7b8;
                  }
                }
              }
              equipment_supplier_0xaf4570(0x14266c870,uVar10);
              iVar35 = iVar35 + 1;
            } while (iVar35 <= (int)uStack_c88);
          }
          iVar37 = 0;
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 == '\0') {
            equipment_supplier_0xbc760(0x14266c870,7,0,*(int *)(param_1 + 0x750) == iVar28);
          }
          else {
            bVar44 = *(int *)(param_1 + 0x750) != iVar28;
            iVar35 = iVar37;
            if (bVar44) {
              iVar35 = 0xff;
            }
            uVar40 = 0x2c;
            if (bVar44) {
              uVar40 = 0xff;
            }
            uVar24 = 0x46;
            if (bVar44) {
              uVar24 = 0xff;
            }
            equipment_supplier_0xbc780(0x14266c870,uVar24,uVar40,iVar35);
            equipment_supplier_0xbc7a0(0x14266c870,0,0,0);
          }
          equipment_supplier_0xbc750(0x14266c870,2);
          equipment_supplier_0x70cc0(auStack_980);
          if (iVar28 == 0) {
            pcVar25 = "Crucial";
LAB_14107591c:
            equipment_supplier_0x70bb0(auStack_980,pcVar25);
          }
          else {
            if (iVar28 == 1) {
              pcVar25 = "Labor";
              goto LAB_14107591c;
            }
            if (iVar28 == 2) {
              pcVar25 = "Combat";
              goto LAB_14107591c;
            }
            if (iVar28 == 3) {
              pcVar25 = "Other";
              goto LAB_14107591c;
            }
          }
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 == '\0') {
            equipment_supplier_0x70960(auStack_980);
            equipment_supplier_0xbc750(0x14266c870,2);
            FUN_140af3400(0x14266c870,auStack_980,0,0);
          }
          else {
            lVar13 = equipment_supplier_0x70960(auStack_980);
            if (lVar13 != 0) {
              uVar32 = 0;
              do {
                equipment_supplier_0x70960(auStack_980);
                equipment_supplier_0xbc750(0x14266c870,2);
                cVar1 = equipment_supplier_0x227660(0x1423b2710);
                if (cVar1 == '\0') {
                  pcVar25 = (char *)equipment_supplier_0xfcbe0(auStack_980,uVar32);
                  uVar10 = *(undefined4 *)((longlong)*pcVar25 * 4 + 0x1423f00d0);
                }
                else {
                  pcVar25 = (char *)equipment_supplier_0xfcbe0(auStack_980,uVar32);
                  uVar10 = *(undefined4 *)((longlong)*pcVar25 * 4 + 0x1423f04d0);
                }
                uStack_cd8 = CONCAT31(uStack_cd8._1_3_,1);
                uStack_ce0 = 2;
                iStack_ce8 = 1;
                FUN_140af4810(0x14266c870,uVar10,0,2);
                iVar37 = iVar37 + 1;
                uVar32 = (ulonglong)iVar37;
                uVar17 = equipment_supplier_0x70960(auStack_980);
              } while (uVar32 < uVar17);
              param_1 = lStack_c78;
              uVar32 = uStack_c38;
              iVar28 = (int)puStack_c28;
            }
          }
          equipment_supplier_0xbc760(0x14266c870,7,0);
          equipment_supplier_0x69460(auStack_980);
          iVar28 = iVar28 + 1;
          puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar28);
          uStack_c38 = uVar32 + 4;
        } while (iVar28 < 4);
        *(undefined4 *)(param_1 + 0x768) = 8;
        *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x758);
        iVar37 = equipment_supplier_0x70a80
                           (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
        iVar28 = (int)uStack_c20;
        uStack_c88 = (ulonglong)*(uint *)(param_1 + 0x748);
        if (iVar37 - (int)uStack_c20 < (int)*(uint *)(param_1 + 0x748)) {
          iVar37 = equipment_supplier_0x70a80
                             (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
          uStack_c88 = (ulonglong)(uint)(iVar37 - iVar28);
          *(int *)(param_1 + 0x748) = iVar37 - iVar28;
        }
        if ((int)uStack_c88 < 0) {
          *(undefined4 *)(param_1 + 0x748) = 0;
          uStack_c88 = 0;
        }
        if ((int)uStack_c88 < (int)uStack_c88 + iVar28) {
          do {
            uVar32 = uStack_c88;
            uVar17 = equipment_supplier_0x70a80
                               (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
            iVar37 = (int)uVar32;
            if (uVar17 <= (ulonglong)(longlong)iVar37) break;
            equipment_supplier_0xbc760(0x14266c870,7,0,1);
            iVar28 = iStack_c94;
            iVar27 = iStack_c98 + 6;
            iVar35 = iVar27;
            if (iVar27 <= iStack_c94) {
              do {
                iVar37 = *(int *)(param_1 + 0x768);
                if (iVar37 < iVar37 + 3) {
                  do {
                    equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
                    lVar13 = (longlong)(iVar37 - *(int *)(param_1 + 0x768));
                    if (iVar35 == iVar27) {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e218);
                    }
                    else if (iVar35 == iVar28) {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                    }
                    else {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                    }
                    equipment_supplier_0xaf4570(0x14266c870,uVar10);
                    cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar1 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    iVar37 = iVar37 + 1;
                  } while (iVar37 < *(int *)(param_1 + 0x768) + 3);
                }
                iVar35 = iVar35 + 1;
              } while (iVar35 <= iVar28);
              iVar37 = (int)uStack_c88;
            }
            equipment_supplier_0xbc760(0x14266c870,7,0,1);
            equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iStack_c98 + 8);
            plVar14 = (longlong *)
                      equipment_supplier_0x70850
                                (param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
            lVar13 = *plVar14;
            psVar20 = (short *)equipment_supplier_0x70a70
                                         (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) *
                                                    0x18,(longlong)iVar37);
            if (*(int *)(lVar13 + 0x7c + (longlong)*psVar20 * 4) < 1) {
              equipment_supplier_0x70bb0(auStack_9e0,"Not");
            }
            else {
              plVar14 = (longlong *)
                        equipment_supplier_0x70850
                                  (param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
              lVar13 = *plVar14;
              psVar20 = (short *)equipment_supplier_0x70a70
                                           (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) *
                                                      0x18,(longlong)iVar37);
              equipment_supplier_0x78cdb0
                        (auStack_9e0,*(undefined4 *)(lVar13 + 0x7c + (longlong)*psVar20 * 4));
            }
            FUN_140af3400(0x14266c870,auStack_9e0,3,0);
            cVar1 = equipment_supplier_0x70b50(auStack_9e0);
            if (cVar1 == '\0') {
              FUN_140069780(auStack_440," ");
              FUN_140af3400(0x14266c870,auStack_440,3,0);
              equipment_supplier_0x69460(auStack_440);
            }
            plVar14 = (longlong *)
                      equipment_supplier_0x70850
                                (param_1 + 0x1f30,(longlong)*(int *)(param_1 + 0x744));
            uVar7 = *(undefined2 *)(*plVar14 + 300);
            plVar14 = (longlong *)
                      equipment_supplier_0x70850
                                (param_1 + 0x1f30,(longlong)*(int *)(param_1 + 0x744));
            uVar8 = *(undefined2 *)(*plVar14 + 0xa4);
            puVar19 = (undefined2 *)
                      equipment_supplier_0x70a70
                                (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18,
                                 (longlong)iVar37);
            FUN_14078dd20(auStack_9e0,*puVar19,uVar8,uVar7);
            FUN_140af3400(0x14266c870,auStack_9e0,0,0);
            psVar20 = (short *)equipment_supplier_0x70a70
                                         (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) *
                                                    0x18,(longlong)iVar37);
            sVar26 = *psVar20;
            uStack_c70 = CONCAT22(uStack_c70._2_2_,sVar26);
            equipment_supplier_0xbc760(0x14266c870,7,0,1);
            iVar37 = iVar28 + -6;
            iVar35 = *(int *)(param_1 + 0x768);
            plVar14 = (longlong *)
                      equipment_supplier_0x70850
                                (param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744));
            if ((*(short *)(*plVar14 + 0x2ec) < 1) ||
               (plVar14 = (longlong *)
                          equipment_supplier_0x70850
                                    (param_1 + 0x498,(longlong)*(int *)(param_1 + 0x744)),
               4 < *(int *)(*plVar14 + 0x7c + (longlong)sVar26 * 4))) {
              puVar31 = (undefined4 *)0x14266e554;
              do {
                lVar13 = 3;
                iVar28 = iVar35;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar28 = iVar28 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar37 = iVar37 + 1;
              } while ((longlong)puVar31 < 0x14266e578);
              sVar26 = (short)uStack_c70;
            }
            else if ((((iStack_c4c < iVar37) || (iVar28 + -4 < iStack_c4c)) ||
                     ((int)uStack_c50 < iVar35)) || (iVar35 + 2 < (int)uStack_c50)) {
              puVar31 = (undefined4 *)0x14266e4e8;
              do {
                lVar13 = 3;
                iVar28 = iVar35;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar28 = iVar28 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar37 = iVar37 + 1;
              } while ((longlong)puVar31 < 0x14266e50c);
            }
            else if (DAT_1423b2a4c == '\0') {
              puVar31 = (undefined4 *)0x14266e50c;
              do {
                lVar13 = 3;
                iVar28 = iVar35;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar28 = iVar28 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar37 = iVar37 + 1;
              } while ((longlong)puVar31 < 0x14266e530);
            }
            else {
              puVar31 = (undefined4 *)0x14266e530;
              do {
                lVar13 = 3;
                iVar28 = iVar35;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar28 = iVar28 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar37 = iVar37 + 1;
              } while ((longlong)puVar31 < 0x14266e554);
            }
            param_1 = lStack_c78;
            iVar37 = iStack_c94;
            iVar35 = iStack_c94 + -3;
            iVar28 = *(int *)(lStack_c78 + 0x768);
            plVar14 = (longlong *)
                      equipment_supplier_0x70850
                                (lStack_c78 + 0x498,(longlong)*(int *)(lStack_c78 + 0x744));
            if (*(int *)(*plVar14 + 0x7c + (longlong)sVar26 * 4) < 1) {
              puVar31 = (undefined4 *)0x14266e5e4;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              } while ((longlong)puVar31 < 0x14266e608);
            }
            else if (((iStack_c4c < iVar35) || (iVar37 + -1 < iStack_c4c)) ||
                    (((int)uStack_c50 < iVar28 || (iVar28 + 2 < (int)uStack_c50)))) {
              puVar31 = (undefined4 *)0x14266e578;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              } while ((longlong)puVar31 < 0x14266e59c);
            }
            else if (DAT_1423b2a4c == '\0') {
              puVar31 = (undefined4 *)0x14266e59c;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              } while ((longlong)puVar31 < 0x14266e5c0);
            }
            else {
              puVar31 = (undefined4 *)0x14266e5c0;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              } while ((longlong)puVar31 < 0x14266e5e4);
            }
            *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
            uVar33 = (int)uStack_c88 + 1;
            uStack_c88 = (ulonglong)uVar33;
            iVar28 = (int)uStack_c20;
          } while ((int)uVar33 < *(int *)(param_1 + 0x748) + (int)uStack_c20);
        }
        iVar37 = equipment_supplier_0x70a80
                           (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
        if (iVar28 < iVar37) {
          equipment_supplier_0xbc990(auStack_a80);
          iVar37 = equipment_supplier_0x70a80
                             (param_1 + ((longlong)*(int *)(param_1 + 0x750) + 0x32) * 0x18);
          uStack_ce0 = 9;
          iStack_ce8 = iVar28;
          uStack_cd8 = (iVar28 + 2) * 3;
          equipment_supplier_0xbc9b0(auStack_a80,*(undefined4 *)(param_1 + 0x758),0,iVar37 + -1);
          uStack_ce0 = 0;
          iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x754));
          FUN_1414284b0(auStack_a80,iStack_c4c,uStack_c50,iStack_c94 + 1);
        }
      }
      else {
        FUN_140150630(&DAT_1418c6380,iStack_c30,iStack_c98 + 6,iStack_c94);
      }
      equipment_supplier_0x69460(auStack_100);
      equipment_supplier_0x69460(auStack_9e0);
    }
    if (*(int *)(param_1 + 0x740) == 1) {
      iVar28 = 0;
      pcVar25 = (char *)(param_1 + 0x1c58);
      lVar13 = param_1 + 0x1250;
      lVar43 = 0x6b;
      lVar41 = 0x6b;
      do {
        iVar37 = equipment_supplier_0x70480(lVar13);
        if (0 < iVar37) {
          if (*pcVar25 == '\0') {
            iVar28 = iVar28 + 2;
          }
          else {
            iVar28 = iVar28 + iVar37 * 3 + 2;
          }
        }
        lVar13 = lVar13 + 0x18;
        pcVar25 = pcVar25 + 1;
        lVar41 = lVar41 + -1;
      } while (lVar41 != 0);
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_4e = 0;
      iVar37 = 0;
      puVar15 = &uStack_b8;
      lVar13 = param_1 + 0x800;
      iStack_c60 = iVar28;
      do {
        lVar41 = equipment_supplier_0x70480(lVar13);
        if (lVar41 != 0) {
          equipment_supplier_0x70870(lVar13,auStack_ba8);
          equipment_supplier_0x70860(lVar13,auStack_b68);
          puVar18 = (undefined1 *)equipment_supplier_0x70450(auStack_ba8,&uStack_bf0,auStack_b68);
          cVar1 = equipment_supplier_0x66de0(*puVar18,0);
          while (cVar1 != '\0') {
            plVar14 = (longlong *)equipment_supplier_0x70440(auStack_ba8);
            if ('\0' < *(char *)(*plVar14 + 0xc)) {
              *(undefined1 *)puVar15 = 1;
              iVar37 = iVar37 + 1;
              break;
            }
            equipment_supplier_0x70430(auStack_ba8);
            puVar18 = (undefined1 *)equipment_supplier_0x70450(auStack_ba8,&uStack_bf0,auStack_b68);
            cVar1 = equipment_supplier_0x66de0(*puVar18,0);
          }
        }
        lVar13 = lVar13 + 0x18;
        puVar15 = (undefined8 *)((longlong)puVar15 + 1);
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
      puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar37);
      iStack_c90 = 0;
      equipment_supplier_0x70870
                (param_1 + (longlong)*(short *)(param_1 + 0x1cc8) * 0x18 + 0x800,&puStack_bc8);
      equipment_supplier_0x70860
                (param_1 + (longlong)*(short *)(param_1 + 0x1cc8) * 0x18 + 0x800,&puStack_bb0);
      puVar18 = (undefined1 *)equipment_supplier_0x70450(&puStack_bc8,auStack_bef,&puStack_bb0);
      cVar1 = equipment_supplier_0x66de0(*puVar18,0);
      iVar37 = iStack_c90;
      uVar32 = uStack_c68;
      iVar35 = 0;
      while (uStack_c68 = uVar32, cVar1 != '\0') {
        plVar14 = (longlong *)equipment_supplier_0x70440(&puStack_bc8);
        iVar37 = iVar35 + 1;
        if (*(char *)(*plVar14 + 0xc) < '\x01') {
          iVar37 = iVar35;
        }
        equipment_supplier_0x70430(&puStack_bc8);
        puVar18 = (undefined1 *)equipment_supplier_0x70450(&puStack_bc8,auStack_bef,&puStack_bb0);
        cVar1 = equipment_supplier_0x66de0(*puVar18,0);
        uVar32 = uStack_c68;
        iVar35 = iVar37;
      }
      iVar35 = (_DAT_1423efc04 / 2 - iStack_c5c) + -0x17;
      if (iVar35 < 0x28) {
        iVar35 = 0x28;
      }
      iVar27 = (iStack_c44 - _DAT_1423efc04 / 2) + -0x23;
      if (iVar27 < 0x28) {
        iVar27 = 0x28;
      }
      iVar21 = iStack_c5c;
      if ((char)uStack_c54 != '\0') {
        iVar21 = iStack_c5c + 3;
      }
      iVar36 = iVar21 + 3;
      uVar11 = iVar21 + 2 + iVar35;
      uVar17 = (ulonglong)uVar11;
      uVar33 = uVar11 + 3;
      iVar35 = uVar11 + 9;
      uStack_c10._4_4_ = (undefined4)((ulonglong)uStack_c10 >> 0x20);
      uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar35);
      iVar23 = uVar11 + 0x2b;
      iStack_c94 = uVar11 + 0x30;
      iVar21 = 2;
      if ((char)uStack_c54 != '\0') {
        iVar21 = -1;
      }
      iVar27 = iVar21 + iStack_c94 + iVar27;
      iVar21 = (((iStack_c5c * 2 - iVar36) - iStack_c94) - iVar35) + 0x1b + iVar27 + iVar23 + uVar11
      ;
      uStack_c00 = CONCAT44(uStack_c00._4_4_,iVar36);
      iStack_c98 = iVar27;
      uStack_c70 = uVar33;
      if (_DAT_1423efc04 < iVar21) {
        iVar21 = iVar21 - _DAT_1423efc04;
        iVar22 = iStack_c94;
        if (iVar21 < 1) goto LAB_1410766b6;
        iVar42 = (uVar11 - iVar36) + 1;
        do {
          do {
            iVar12 = (iVar27 - iVar22) + 1;
            if (iVar12 < 0x3d) {
              if (iVar21 < 1) goto LAB_1410766b6;
              if (iVar42 < 0x3d) {
                iVar42 = (iVar23 - iVar35) + 1;
                goto LAB_141076630;
              }
              if (0x3c < iVar12) goto LAB_1410765ce;
            }
            else {
LAB_1410765ce:
              iVar27 = iVar27 + -1;
              iVar21 = iVar21 + -1;
              iStack_c98 = iVar27;
            }
            if (iVar21 < 1) goto LAB_1410766b6;
          } while (iVar42 < 0x3d);
          uVar17 = (ulonglong)((int)uVar17 - 1);
          iVar42 = iVar42 + -1;
          uVar33 = uVar33 - 1;
          iVar35 = iVar35 + -1;
          uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar35);
          iVar23 = iVar23 + -1;
          iStack_c94 = iVar22 + -1;
          iVar27 = iVar27 + -1;
          iVar21 = iVar21 + -1;
          iStack_c98 = iVar27;
          uStack_c70 = uVar33;
          iVar22 = iStack_c94;
        } while (0 < iVar21);
        uStack_c00 = CONCAT44(uStack_c00._4_4_,iVar36);
        uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar35);
      }
      goto LAB_141076723;
    }
    goto LAB_14107855b;
  }
  iVar37 = iVar28 + 4;
  uStack_bf8 = CONCAT44(uStack_bf8._4_4_,iVar37);
  uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar28 + 0x10);
  iStack_c90 = 0xd;
  iStack_c60 = iVar28 + 5;
  uStack_c54 = iVar28 + 0x47;
  iVar21 = (iVar27 + -0x1d) / 3;
  iStack_c3c = iVar21;
  uStack_c20 = equipment_supplier_0x70480(param_1 + 0x790);
  if (iVar21 < (int)uStack_c20) {
    uStack_c54 = iStack_c5c + 0x45;
  }
  uStack_c00 = CONCAT44(uStack_c00._4_4_,iStack_c5c + 0x50);
  if ((int)uStack_c20 == 0) {
    iVar27 = iVar27 + 2;
    iStack_c90 = iVar27 / 3 + (iVar27 >> 0x1f);
    iVar21 = (int)(((longlong)iVar27 / 3 + ((longlong)iVar27 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar27 = iVar21 + -6 + iStack_c90;
    iStack_c90 = iVar21 + 4 + iStack_c90;
    iStack_c98 = iVar27;
  }
  else {
    iVar27 = 5;
  }
  iVar35 = (iVar35 - iStack_c5c) + -100;
  iVar21 = 0;
  if (-1 < iVar35) {
    iVar21 = iVar35;
  }
  uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar21);
  uStack_c80 = iVar21 / 2 + 0x47 + iVar37;
  uStack_c88 = CONCAT44(uStack_c88._4_4_,uStack_c80 + 10);
  iStack_c40 = uStack_c80 + 0x10;
  iStack_c44 = uStack_c80 + 0x19;
  puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar27 + 4);
  iStack_c58 = uStack_c80 + 0x13;
  if (iVar37 <= iVar28 + 0x10) {
    do {
      lVar13 = 0;
      iVar28 = (int)uStack_c68;
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar27,iVar37);
        lVar41 = lVar13 * 4;
        if (iVar37 == (int)uStack_bf8) {
          uVar10 = *(undefined4 *)(&DAT_142676fd8 + lVar41);
        }
        else if (iVar37 == iVar28) {
          uVar10 = *(undefined4 *)(&DAT_142676ff0 + lVar41);
        }
        else {
          while (uVar10 = *(undefined4 *)(&DAT_142676fe4 + lVar41), lVar13 == 1) {
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            iVar27 = iVar27 + 1;
            equipment_supplier_0xbc750(0x14266c870,iVar27,iVar37);
            lVar41 = 8;
            lVar13 = 2;
          }
        }
        equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
        iVar27 = iVar27 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < 3);
      iVar37 = iVar37 + 1;
      iVar27 = iStack_c98;
    } while (iVar37 <= iVar28);
    param_1 = lStack_c78;
    iVar37 = (int)uStack_bf8;
  }
  iVar28 = iStack_c5c;
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar27 + 1,iVar37 + 2);
  FUN_140069780(auStack_700,"Play now!");
  FUN_140af3400(0x14266c870,auStack_700,0,0);
  equipment_supplier_0x69460(auStack_700);
  equipment_supplier_0xbc750(0x14266c870,iVar27 + 4,iVar28 + 6);
  FUN_140069780(auStack_6e0,"Start immediately with the default skills, equipment, and animals.");
  FUN_140af3400(0x14266c870,auStack_6e0,0,0);
  equipment_supplier_0x69460(auStack_6e0);
  if (iVar37 <= iVar28 + 0x28) {
    iVar28 = (int)uStack_bf8;
    do {
      lVar13 = 0;
      iVar35 = iStack_c90;
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
        lVar41 = lVar13 * 4;
        if (iVar37 == iVar28) {
          uVar10 = *(undefined4 *)(&DAT_142676fd8 + lVar41);
        }
        else if (iVar37 == iStack_c5c + 0x28) {
          uVar10 = *(undefined4 *)(&DAT_142676ff0 + lVar41);
        }
        else {
          while (uVar10 = *(undefined4 *)(&DAT_142676fe4 + lVar41), lVar13 == 1) {
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            iVar35 = iVar35 + 1;
            equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
            lVar41 = 8;
            lVar13 = 2;
          }
        }
        equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
        iVar35 = iVar35 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < 3);
      iVar37 = iVar37 + 1;
    } while (iVar37 <= iStack_c5c + 0x28);
    param_1 = lStack_c78;
    iVar28 = iStack_c5c;
    iVar37 = (int)uStack_bf8;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  iVar35 = iStack_c90;
  equipment_supplier_0xbc750(0x14266c870,iStack_c90 + 1,iVar37 + 2);
  FUN_140069780(auStack_6c0,"Prepare for the journey carefully");
  FUN_140af3400(0x14266c870,auStack_6c0,0,0);
  equipment_supplier_0x69460(auStack_6c0);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 4,iVar28 + 6);
  FUN_140069780(auStack_6a0,"Choose your own skills, equipment, and animals.");
  FUN_140af3400(0x14266c870,auStack_6a0,0,0);
  equipment_supplier_0x69460(auStack_6a0);
  uVar40 = uStack_c20;
  iVar28 = (int)uStack_c20;
  if (0 < iVar28) {
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,0x18,iVar37);
    FUN_140069780(auStack_680,"Prepare using a saved embark profile:");
    FUN_140af3400(0x14266c870,auStack_680,0,0);
    equipment_supplier_0x69460(auStack_680);
    iStack_c94 = 0x1a;
    iVar37 = *(int *)(param_1 + 0x7a8);
    *(int *)(param_1 + 0x748) = iVar37;
    iVar35 = iVar28 - iStack_c3c;
    if (iVar35 < iVar37) {
      *(int *)(param_1 + 0x748) = iVar35;
      iVar37 = iVar35;
    }
    if (iVar37 < 0) {
      *(undefined4 *)(param_1 + 0x748) = 0;
      uStack_c10._0_4_ = 0;
      iVar37 = (int)uStack_c10;
    }
    uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar37);
    iVar35 = iStack_c3c;
    if (iVar37 < iVar37 + iStack_c3c) {
      uVar32 = param_1 + 0x790;
      uStack_bf8 = uVar32;
      do {
        iVar27 = iStack_c94;
        iVar28 = (int)uVar40;
        if (iVar28 <= iVar37) break;
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar28 = iStack_c60 + 1;
        uStack_c68 = CONCAT44(uStack_c68._4_4_,uStack_c54 - 1);
        if (iVar28 <= (int)(uStack_c54 - 1)) {
          do {
            lVar13 = 0;
            iVar37 = (int)uStack_c68;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar27,iVar28);
              lVar41 = lVar13 * 4;
              if (iVar28 == iStack_c60 + 1) {
                uVar10 = *(undefined4 *)(&DAT_142676fd8 + lVar41);
              }
              else if (iVar28 == iVar37) {
                uVar10 = *(undefined4 *)(&DAT_142676ff0 + lVar41);
              }
              else {
                while (uVar10 = *(undefined4 *)(&DAT_142676fe4 + lVar41), lVar13 == 1) {
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                  iVar27 = iVar27 + 1;
                  equipment_supplier_0xbc750(0x14266c870,iVar27,iVar28);
                  lVar41 = 8;
                  lVar13 = 2;
                }
              }
              equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
              iVar27 = iVar27 + 1;
              lVar13 = lVar13 + 1;
            } while (lVar13 < 3);
            iVar28 = iVar28 + 1;
            uVar32 = uStack_bf8;
            param_1 = lStack_c78;
            iVar27 = iStack_c94;
            iVar35 = iStack_c3c;
          } while (iVar28 <= iVar37);
        }
        lVar13 = (longlong)(int)uStack_c10;
        puVar15 = (undefined8 *)equipment_supplier_0x70850(uVar32,lVar13);
        iVar28 = equipment_supplier_0x70960(*puVar15);
        equipment_supplier_0xbc750
                  (0x14266c870,iVar27 + 1,(int)(uStack_c54 + iStack_c60) / 2 - (iVar28 + 1) / 2);
        equipment_supplier_0xbc760(0x14266c870,2,0,1);
        puVar15 = (undefined8 *)equipment_supplier_0x70850(uVar32,lVar13);
        FUN_140af3400(0x14266c870,*puVar15,0,0);
        iVar28 = iStack_c5c + 0x49;
        if (iVar28 <= (int)(uint)uStack_c00) {
          do {
            lVar13 = 0;
            iVar37 = (uint)uStack_c00;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar27,iVar28);
              lVar41 = lVar13 * 4;
              if (iVar28 == iStack_c5c + 0x49) {
                uVar10 = *(undefined4 *)(lVar41 + 0x142677050);
              }
              else if (iVar28 == iVar37) {
                uVar10 = *(undefined4 *)(lVar41 + 0x142677068);
              }
              else {
                while (uVar10 = *(undefined4 *)(lVar41 + 0x14267705c), lVar13 == 1) {
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                  iVar27 = iVar27 + 1;
                  equipment_supplier_0xbc750(0x14266c870,iVar27,iVar28);
                  lVar41 = 8;
                  lVar13 = 2;
                }
              }
              equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
              iVar27 = iVar27 + 1;
              lVar13 = lVar13 + 1;
            } while (lVar13 < 3);
            iVar28 = iVar28 + 1;
            uVar32 = uStack_bf8;
            param_1 = lStack_c78;
            iVar27 = iStack_c94;
            iVar35 = iStack_c3c;
          } while (iVar28 <= iVar37);
        }
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        equipment_supplier_0xbc750(0x14266c870,iVar27 + 1);
        FUN_140069780(auStack_660,"Delete");
        FUN_140af3400(0x14266c870,auStack_660,0,0);
        equipment_supplier_0x69460(auStack_660);
        iStack_c94 = iVar27 + 3;
        iVar37 = (int)uStack_c10 + 1;
        uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar37);
        iVar28 = (int)uStack_c20;
        uVar40 = uStack_c20;
      } while (iVar37 < *(int *)(param_1 + 0x748) + iVar35);
    }
    if (iVar35 < iVar28) {
      equipment_supplier_0xbc990(auStack_ac0);
      uStack_ce0 = 0x1b;
      iStack_ce8 = iVar35;
      uStack_cd8 = (iVar35 + 8) * 3;
      equipment_supplier_0xbc9b0(auStack_ac0,*(undefined4 *)(param_1 + 0x7a8),0,iVar28 + -1);
      uStack_ce0 = 0;
      iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x7ac));
      FUN_1414284b0(auStack_ac0,iStack_c4c,uStack_c50,uStack_c54 + 1);
    }
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  uVar33 = uStack_c80;
  iVar27 = iStack_c98;
  equipment_supplier_0xbc750(0x14266c870,iStack_c98 + 1,uStack_c80);
  FUN_140069780(auStack_640,"Enemies:");
  FUN_140af3400(0x14266c870,auStack_640,0,0);
  equipment_supplier_0x69460(auStack_640);
  iVar21 = uVar33 + 0xe;
  iVar28 = uVar33 + 10;
  iVar35 = iVar27;
  for (iVar37 = iVar28; iVar37 <= iVar21; iVar37 = iVar37 + 1) {
    equipment_supplier_0xbc750(0x14266c870,iStack_c98,iVar37);
    if (*(int *)(param_1 + 0x530) == 0) {
      uVar10 = _DAT_142677074;
      if ((iVar37 != iVar28) && (uVar10 = _DAT_142677080, iVar37 == iVar21)) {
        uVar10 = _DAT_14267708c;
      }
    }
    else {
      uVar10 = _DAT_142676fd8;
      if ((iVar37 != iVar28) && (uVar10 = _DAT_142676ff0, iVar37 != iVar21)) {
        uVar10 = _DAT_142676fe4;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    equipment_supplier_0xbc750(0x14266c870,iVar27 + 1,iVar37);
    if (*(int *)(param_1 + 0x530) == 0) {
      if (iVar37 == iVar28) {
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
      }
      else {
        uVar10 = _DAT_142677084;
        if (iVar37 == iVar21) {
          equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
        }
        else {
LAB_1410730d3:
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
        }
      }
    }
    else if (iVar37 == iVar28) {
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
    }
    else {
      uVar10 = _DAT_142676fe8;
      if (iVar37 != iVar21) goto LAB_1410730d3;
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
    }
    equipment_supplier_0xbc750(0x14266c870,iVar27 + 2,iVar37);
    if (*(int *)(param_1 + 0x530) == 0) {
      uVar10 = _DAT_14267707c;
      if ((iVar37 != iVar28) && (uVar10 = _DAT_142677088, iVar37 == iVar21)) {
        uVar10 = _DAT_142677094;
      }
    }
    else {
      uVar10 = _DAT_142676fe0;
      if ((iVar37 != iVar28) && (uVar10 = _DAT_142676ff8, iVar37 != iVar21)) {
        uVar10 = _DAT_142676fec;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    iVar35 = iStack_c98;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,uVar33 + 0xb);
  FUN_140069780(auStack_620,"Off");
  FUN_140af3400(0x14266c870,auStack_620,0,0);
  equipment_supplier_0x69460(auStack_620);
  iVar21 = iStack_c40;
  iVar27 = iStack_c98;
  iVar37 = iStack_c40 + 7;
  iVar36 = iStack_c40;
  if (iStack_c40 <= iVar37) {
    do {
      equipment_supplier_0xbc750(0x14266c870,iVar27,iVar36);
      if (*(int *)(param_1 + 0x530) == 1) {
        uVar10 = _DAT_142677074;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142677080, iVar36 == iVar37)) {
          uVar10 = _DAT_14267708c;
        }
      }
      else {
        uVar10 = _DAT_142676fd8;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142676ff0, iVar36 != iVar37)) {
          uVar10 = _DAT_142676fe4;
        }
      }
      equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
      equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,iVar36);
      if (*(int *)(param_1 + 0x530) == 1) {
        if (iVar36 == iVar21) {
          equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
        }
        else {
          uVar10 = _DAT_142677084;
          if (iVar36 == iVar37) {
            equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
          }
          else {
LAB_1410732bc:
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
          }
        }
      }
      else if (iVar36 == iVar21) {
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
      }
      else {
        uVar10 = _DAT_142676fe8;
        if (iVar36 != iVar37) goto LAB_1410732bc;
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
      }
      equipment_supplier_0xbc750(0x14266c870,iVar35 + 2,iVar36);
      if (*(int *)(param_1 + 0x530) == 1) {
        uVar10 = _DAT_14267707c;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142677088, iVar36 == iVar37)) {
          uVar10 = _DAT_142677094;
        }
      }
      else {
        uVar10 = _DAT_142676fe0;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142676ff8, iVar36 != iVar37)) {
          uVar10 = _DAT_142676fec;
        }
      }
      equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
      iVar36 = iVar36 + 1;
    } while (iVar36 <= iVar37);
    iVar35 = iStack_c98;
    iVar28 = (int)uStack_c88;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,iVar21 + 1);
  FUN_140069780(auStack_600,"Normal");
  FUN_140af3400(0x14266c870,auStack_600,0,0);
  equipment_supplier_0x69460(auStack_600);
  iVar21 = iStack_c44;
  iVar27 = iStack_c98;
  iVar37 = iStack_c44 + 5;
  iVar36 = iStack_c44;
  if (iStack_c44 <= iVar37) {
    do {
      equipment_supplier_0xbc750(0x14266c870,iVar27,iVar36);
      if (*(int *)(param_1 + 0x530) == 2) {
        uVar10 = _DAT_142677074;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142677080, iVar36 == iVar37)) {
          uVar10 = _DAT_14267708c;
        }
      }
      else {
        uVar10 = _DAT_142676fd8;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142676ff0, iVar36 != iVar37)) {
          uVar10 = _DAT_142676fe4;
        }
      }
      equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
      equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,iVar36);
      if (*(int *)(param_1 + 0x530) == 2) {
        if (iVar36 == iVar21) {
          equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
        }
        else {
          uVar10 = _DAT_142677084;
          if (iVar36 == iVar37) {
            equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
          }
          else {
LAB_1410734bc:
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
          }
        }
      }
      else if (iVar36 == iVar21) {
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
      }
      else {
        uVar10 = _DAT_142676fe8;
        if (iVar36 != iVar37) goto LAB_1410734bc;
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
      }
      equipment_supplier_0xbc750(0x14266c870,iVar35 + 2,iVar36);
      if (*(int *)(param_1 + 0x530) == 2) {
        uVar10 = _DAT_14267707c;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142677088, iVar36 == iVar37)) {
          uVar10 = _DAT_142677094;
        }
      }
      else {
        uVar10 = _DAT_142676fe0;
        if ((iVar36 != iVar21) && (uVar10 = _DAT_142676ff8, iVar36 != iVar37)) {
          uVar10 = _DAT_142676fec;
        }
      }
      equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
      iVar36 = iVar36 + 1;
    } while (iVar36 <= iVar37);
    iVar35 = iStack_c98;
    iVar28 = (int)uStack_c88;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,iVar21 + 1);
  FUN_140069780(auStack_5e0,"Hard");
  FUN_140af3400(0x14266c870,auStack_5e0,0,0);
  equipment_supplier_0x69460(auStack_5e0);
  if ((*(int *)(param_1 + 0x530) == 3) && (8 < (int)(uint)uStack_c38)) {
    equipment_supplier_0xbc760(0x14266c870,2,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar35 + 1,iVar21 + 8);
    FUN_140069780(auStack_5c0,"(Custom)");
    FUN_140af3400(0x14266c870,auStack_5c0,0,0);
    equipment_supplier_0x69460(auStack_5c0);
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 5,uStack_c80);
  FUN_140069780(auStack_5a0,"Economy:");
  FUN_140af3400(0x14266c870,auStack_5a0,0,0);
  equipment_supplier_0x69460(auStack_5a0);
  puVar31 = puStack_c28;
  iVar21 = iVar28 + 7;
  iVar37 = iVar35;
  for (iVar27 = iVar28; iVar27 <= iVar21; iVar27 = iVar27 + 1) {
    equipment_supplier_0xbc750(0x14266c870,(ulonglong)puVar31 & 0xffffffff,iVar27);
    if (*(int *)(param_1 + 0x534) == 0) {
      uVar10 = _DAT_142677074;
      if ((iVar27 != iVar28) && (uVar10 = _DAT_142677080, iVar27 == iVar21)) {
        uVar10 = _DAT_14267708c;
      }
    }
    else {
      uVar10 = _DAT_142676fd8;
      if ((iVar27 != iVar28) && (uVar10 = _DAT_142676ff0, iVar27 != iVar21)) {
        uVar10 = _DAT_142676fe4;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    equipment_supplier_0xbc750(0x14266c870,iVar35 + 5,iVar27);
    if (*(int *)(param_1 + 0x534) == 0) {
      if (iVar27 == iVar28) {
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
      }
      else {
        uVar10 = _DAT_142677084;
        if (iVar27 == iVar21) {
          equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
        }
        else {
LAB_14107377a:
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
        }
      }
    }
    else if (iVar27 == iVar28) {
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
    }
    else {
      uVar10 = _DAT_142676fe8;
      if (iVar27 != iVar21) goto LAB_14107377a;
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
    }
    equipment_supplier_0xbc750(0x14266c870,iVar35 + 6,iVar27);
    if (*(int *)(param_1 + 0x534) == 0) {
      uVar10 = _DAT_14267707c;
      if ((iVar27 != iVar28) && (uVar10 = _DAT_142677088, iVar27 == iVar21)) {
        uVar10 = _DAT_142677094;
      }
    }
    else {
      uVar10 = _DAT_142676fe0;
      if ((iVar27 != iVar28) && (uVar10 = _DAT_142676ff8, iVar27 != iVar21)) {
        uVar10 = _DAT_142676fec;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    iVar37 = iStack_c98;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar37 + 5,iVar28 + 1);
  FUN_140069780(auStack_580,"Normal");
  FUN_140af3400(0x14266c870,auStack_580,0,0);
  equipment_supplier_0x69460(auStack_580);
  iVar21 = iStack_c58;
  iVar28 = iStack_c58 + 5;
  iVar35 = iVar37;
  for (iVar27 = iStack_c58; iVar27 <= iVar28; iVar27 = iVar27 + 1) {
    equipment_supplier_0xbc750(0x14266c870,(ulonglong)puVar31 & 0xffffffff,iVar27);
    if (*(int *)(param_1 + 0x534) == 1) {
      uVar10 = _DAT_142677074;
      if ((iVar27 != iVar21) && (uVar10 = _DAT_142677080, iVar27 == iVar28)) {
        uVar10 = _DAT_14267708c;
      }
    }
    else {
      uVar10 = _DAT_142676fd8;
      if ((iVar27 != iVar21) && (uVar10 = _DAT_142676ff0, iVar27 != iVar28)) {
        uVar10 = _DAT_142676fe4;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    equipment_supplier_0xbc750(0x14266c870,iVar37 + 5,iVar27);
    if (*(int *)(param_1 + 0x534) == 1) {
      if (iVar27 == iVar21) {
        equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677078,0);
      }
      else {
        uVar10 = _DAT_142677084;
        if (iVar27 == iVar28) {
          equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142677090,0);
        }
        else {
LAB_14107397a:
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
        }
      }
    }
    else if (iVar27 == iVar21) {
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676fdc,0);
    }
    else {
      uVar10 = _DAT_142676fe8;
      if (iVar27 != iVar28) goto LAB_14107397a;
      equipment_supplier_0xaf4ba0(0x14266c870,_DAT_142676ff4,0);
    }
    equipment_supplier_0xbc750(0x14266c870,iVar37 + 6,iVar27);
    if (*(int *)(param_1 + 0x534) == 1) {
      uVar10 = _DAT_14267707c;
      if ((iVar27 != iVar21) && (uVar10 = _DAT_142677088, iVar27 == iVar28)) {
        uVar10 = _DAT_142677094;
      }
    }
    else {
      uVar10 = _DAT_142676fe0;
      if ((iVar27 != iVar21) && (uVar10 = _DAT_142676ff8, iVar27 != iVar28)) {
        uVar10 = _DAT_142676fec;
      }
    }
    equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
    iVar35 = iStack_c98;
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 5,iVar21 + 1);
  FUN_140069780(auStack_560,"Hard");
  FUN_140af3400(0x14266c870,auStack_560,0,0);
  equipment_supplier_0x69460(auStack_560);
  if ((*(int *)(param_1 + 0x534) == 2) && (8 < (int)(uint)uStack_c38)) {
    equipment_supplier_0xbc760(0x14266c870,2,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar35 + 5,iVar21 + 8);
    FUN_140069780(auStack_540,"(Custom)");
    FUN_140af3400(0x14266c870,auStack_540,0,0);
    equipment_supplier_0x69460(auStack_540);
  }
  uVar33 = uStack_c80;
  if ((int)uStack_c80 <= (int)(uStack_c80 + 0x10)) {
    iVar28 = uStack_c80 + 0x10;
    uVar11 = uStack_c80;
    do {
      lVar13 = 0;
      iVar35 = iVar35 + 8;
      do {
        lVar41 = lVar13 * 4;
        _DAT_14266c8f8 = iVar35;
        if (uVar11 == uVar33) {
          uVar10 = *(undefined4 *)(&DAT_142676fd8 + lVar41);
        }
        else if (uVar11 == iVar28) {
          uVar10 = *(undefined4 *)(&DAT_142676ff0 + lVar41);
        }
        else {
          while (uVar10 = *(undefined4 *)(&DAT_142676fe4 + lVar41), uVar33 = uStack_c80,
                _DAT_14266c8f8 = iVar35, lVar13 == 1) {
            _DAT_14266c8f4 = uVar11;
            equipment_supplier_0xaf4570(0x14266c870,uVar10);
            iVar35 = iVar35 + 1;
            lVar41 = 8;
            lVar13 = 2;
          }
        }
        iVar35 = _DAT_14266c8f8;
        _DAT_14266c8f4 = uVar11;
        equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
        iVar35 = iVar35 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < 3);
      uVar11 = uVar11 + 1;
      param_1 = lStack_c78;
      iVar35 = iStack_c98;
    } while ((int)uVar11 <= iVar28);
  }
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,iVar35 + 9,uVar33 + 1);
  FUN_140069780(auStack_520,"Custom settings");
  FUN_140af3400(0x14266c870,auStack_520,0,0);
  equipment_supplier_0x69460(auStack_520);
  if (0 < *(int *)(param_1 + 0x528)) {
    equipment_supplier_0x4287a0(0x1418c3620,&iStack_ba0,&iStack_b90);
    iVar35 = ((iStack_b90 - iStack_ba0) + -0x13) / 2 + iStack_ba0;
    iVar23 = iVar35 + 0x13;
    iVar36 = _DAT_1423efc08 / 2;
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar36);
    iVar28 = iVar36 + -1;
    iVar37 = iVar36 + 1;
    iVar21 = iVar35;
    iVar27 = iVar28;
    if (iVar28 <= iVar37) {
      do {
        for (; iVar21 <= iVar23; iVar21 = iVar21 + 1) {
          equipment_supplier_0xbc750(0x14266c870,iVar27,iVar21);
          FUN_1400bc7c0(0x14266c870,0,0);
          if (iVar27 == iVar28) {
            uVar10 = _DAT_14266e194;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1a0, iVar21 == iVar23)) {
              uVar10 = _DAT_14266e1ac;
            }
          }
          else if (iVar27 == iVar37) {
            uVar10 = _DAT_14266e19c;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1a8, iVar21 == iVar23)) {
              uVar10 = _DAT_14266e1b4;
            }
          }
          else {
            uVar10 = _DAT_14266e198;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1b0, iVar21 != iVar23)) {
              uVar10 = _DAT_14266e1a4;
            }
          }
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
        }
        iVar27 = iVar27 + 1;
        iVar21 = iVar35;
      } while (iVar27 <= iVar37);
      iVar36 = (int)uStack_c68;
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar36,iVar35 + 2);
    FUN_140069780(auStack_500,"Preparing map...");
    FUN_140af3400(0x14266c870,auStack_500,0,0);
    equipment_supplier_0x69460(auStack_500);
  }
  if (DAT_1418c92f0 == '\0') goto LAB_14107aab3;
  equipment_supplier_0x4287a0(0x1418c3620,&uStack_b9c,&uStack_b70);
  goto LAB_14107aaa4;
  while( true ) {
    iVar23 = iVar23 + -1;
    iVar42 = iVar42 + -1;
    iStack_c94 = iVar22 + -1;
    iVar27 = iVar27 + -1;
    iVar21 = iVar21 + -1;
    iStack_c98 = iVar27;
    iVar22 = iStack_c94;
    if (iVar21 < 1) break;
LAB_141076630:
    if (iVar42 < 0x19) {
      iVar42 = ((int)uVar17 - iVar36) + 1;
      goto LAB_141076661;
    }
  }
  uStack_c00 = CONCAT44(uStack_c00._4_4_,iVar36);
  goto LAB_141076723;
LAB_141078279:
  equipment_supplier_0x70430(auStack_bc0);
  puVar18 = (undefined1 *)equipment_supplier_0x70450(auStack_bc0,auStack_c48,auStack_b60);
  cVar1 = equipment_supplier_0x66de0(*puVar18,0);
  if (cVar1 == '\0') goto LAB_1410782a8;
  goto LAB_141078210;
  while( true ) {
    uVar17 = (ulonglong)((int)uVar17 - 1);
    iVar42 = iVar42 + -1;
    uVar33 = uVar33 - 1;
    iVar35 = iVar35 + -1;
    uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar35);
    iVar23 = iVar23 + -1;
    iStack_c94 = iVar22 + -1;
    iVar27 = iVar27 + -1;
    iVar21 = iVar21 + -1;
    iStack_c98 = iVar27;
    uStack_c70 = uVar33;
    iVar22 = iStack_c94;
    if (iVar21 < 1) break;
LAB_141076661:
    do {
      iVar12 = (iVar27 - iVar22) + 1;
      if (iVar12 < 0x29) {
        if ((iVar42 < 0x29) || (iVar21 < 1)) goto LAB_1410766b6;
        if (0x28 < iVar12) goto LAB_14107667b;
      }
      else {
LAB_14107667b:
        iVar27 = iVar27 + -1;
        iVar21 = iVar21 + -1;
        iStack_c98 = iVar27;
      }
      if (iVar21 < 1) goto LAB_1410766b6;
    } while (iVar42 < 0x29);
  }
LAB_1410766b6:
  uStack_c00 = CONCAT44(uStack_c00._4_4_,iVar36);
  if (0 < iVar21) {
    uStack_c68._0_4_ = (int)uVar32;
    iStack_c94 = iVar22;
    do {
      if ((int)uStack_c68 < 2) break;
      uStack_c68._0_4_ = (int)uStack_c68 + -1;
      iVar36 = iVar36 + -1;
      uVar17 = (ulonglong)((int)uVar17 - 1);
      uVar33 = uVar33 - 2;
      iVar35 = iVar35 + -3;
      iVar23 = iVar23 + -3;
      iStack_c94 = iStack_c94 + -4;
      iVar28 = iVar27 + -4;
      iVar22 = iVar21 + -5;
      iVar21 = 0;
      if (-1 < iVar22) {
        iVar21 = iVar22;
      }
      iVar27 = iVar28 - iVar22;
      if (-1 < iVar22) {
        iVar27 = iVar28;
      }
    } while (0 < iVar21);
    uStack_c68._4_4_ = (undefined4)(uVar32 >> 0x20);
    uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iVar35);
    uStack_c00 = CONCAT44(uStack_c00._4_4_,iVar36);
    iVar28 = iStack_c60;
    iStack_c98 = iVar27;
    uStack_c70 = uVar33;
  }
LAB_141076723:
  uVar32 = (ulonglong)((int)uVar17 - 2);
  if (iVar28 <= iStack_c40 + -9) {
    uVar32 = uVar17;
  }
  iVar28 = (int)uStack_c20;
  iVar27 = iVar23 + -2;
  if ((int)puStack_c28 <= (int)uStack_c20) {
    iVar27 = iVar23;
  }
  uStack_c88._4_4_ = (undefined4)(uStack_c88 >> 0x20);
  uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar27);
  if ((int)uStack_c20 < iVar37) {
    iStack_c98 = iStack_c98 + -2;
  }
  iStack_c90 = iVar37;
  uStack_c80 = (uint)uVar32;
  equipment_supplier_0xbc760(0x14266c870,7,0,CONCAT71((int7)(uVar17 >> 8),1));
  equipment_supplier_0xbc750(0x14266c870,5,iVar36 + 2);
  FUN_140069780(auStack_400,"Your Items");
  FUN_140af3400(0x14266c870,auStack_400,0,0);
  equipment_supplier_0x69460(auStack_400);
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0x70cc0(auStack_940);
  FUN_140545790(*(undefined4 *)(param_1 + 0x1f4c),auStack_940);
  iVar37 = equipment_supplier_0x70960(auStack_940);
  equipment_supplier_0xbc750(0x14266c870,5,((uint)uVar32 - iVar37) + -0xf);
  FUN_140069780(auStack_3e0,"Points Left: ");
  FUN_140af3400(0x14266c870,auStack_3e0,3,0);
  equipment_supplier_0x69460(auStack_3e0);
  FUN_140af3400(0x14266c870,auStack_940,0,0);
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  equipment_supplier_0xbc750(0x14266c870,5,(iVar27 + iVar35) / 2 + -7);
  FUN_140069780(auStack_3c0,"Available Items");
  FUN_140af3400(0x14266c870,auStack_3c0,0,0);
  equipment_supplier_0x69460(auStack_3c0);
  if ((char)uStack_c54 != '\0') {
    uStack_bd8 = (undefined4 *)0x14266e0e4;
    uStack_c38 = CONCAT44(uStack_c38._4_4_,3 - iStack_c40);
    iVar28 = iStack_c40;
    iVar37 = 3 - iStack_c40;
    do {
      lVar13 = 4;
      puVar31 = uStack_bd8;
      do {
        equipment_supplier_0xbc750(0x14266c870,iVar37 + iVar28,uVar33);
        equipment_supplier_0xaf4570(0x14266c870,puVar31[-8]);
        cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar1 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        equipment_supplier_0xbc750(0x14266c870,iVar28,uVar33);
        equipment_supplier_0xaf4570(0x14266c870,*puVar31);
        cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar1 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        uVar33 = uVar33 + 1;
        puVar31 = puVar31 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar28 = iVar28 + 1;
      uStack_bd8 = uStack_bd8 + 1;
      uVar33 = uStack_c70;
      iVar37 = (uint)uStack_c38;
    } while ((longlong)uStack_bd8 < 0x14266e0ec);
    iVar37 = iStack_c40 + -1;
    iVar28 = 5;
    if (4 < iVar37) {
      do {
        puVar31 = (undefined4 *)0x14266e104;
        uVar33 = uStack_c70;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,uVar33);
          equipment_supplier_0xaf4570(0x14266c870,*puVar31);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar33 = uVar33 + 1;
          puVar31 = puVar31 + 1;
        } while ((longlong)puVar31 < 0x14266e114);
        iVar28 = iVar28 + 1;
      } while (iVar28 <= iVar37);
    }
    uVar32 = (ulonglong)uStack_c80;
    param_1 = lStack_c78;
    iVar28 = (int)uStack_c20;
  }
  equipment_supplier_0x70cc0(auStack_e0);
  iVar37 = 0;
  sVar26 = 0;
  iVar35 = iStack_c40 + -9;
  if (0 < *(int *)(param_1 + 0x748) + iVar35) {
    do {
      lVar13 = equipment_supplier_0x70480(param_1 + (longlong)sVar26 * 0x18 + 0x1250);
      while (lVar13 == 0) {
        sVar26 = sVar26 + 1;
        if (0x6a < sVar26) goto LAB_141076ac6;
        lVar13 = equipment_supplier_0x70480(param_1 + (longlong)sVar26 * 0x18 + 0x1250);
      }
      iVar37 = iVar37 + 1;
    } while (iVar37 < *(int *)(param_1 + 0x748) + iVar35);
  }
LAB_141076ac6:
  *(int *)(param_1 + 0x768) = 8 - *(int *)(param_1 + 0x1cc4);
  iVar28 = iVar28 * 3 + 7;
  sVar26 = 0;
  uStack_c70 = uStack_c70 & 0xffff0000;
  uVar33 = (uint)uStack_c00 + 2;
  uStack_c38 = CONCAT44(uStack_c38._4_4_,uVar33);
  uVar11 = (uint)uStack_c00;
  do {
    iVar37 = equipment_supplier_0x70480(param_1 + (longlong)sVar26 * 0x18 + 0x1250);
    if (0 < iVar37) {
      iVar37 = *(int *)(param_1 + 0x768);
      if (((7 < iVar37) && (iVar37 <= iVar28)) || ((7 < iVar37 + 1 && (iVar37 + 1 <= iVar28)))) {
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        uVar39 = (uint)uVar32;
        uVar38 = uVar11;
        if ((int)uVar11 <= (int)uVar39) {
          do {
            iVar37 = *(int *)(param_1 + 0x768);
            if (iVar37 < iVar37 + 2) {
              do {
                if ((7 < iVar37) && (iVar37 <= iVar28)) {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  lVar13 = (longlong)(iVar37 - *(int *)(param_1 + 0x768));
                  if (uVar38 == uVar11) {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2b4);
                  }
                  else if (uVar38 == uVar39) {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2cc);
                  }
                  else {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2c0);
                  }
                  equipment_supplier_0xaf4570(0x14266c870,uVar10);
                  cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar1 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0);
                  }
                }
                iVar37 = iVar37 + 1;
              } while (iVar37 < *(int *)(param_1 + 0x768) + 2);
            }
            uVar38 = uVar38 + 1;
          } while ((int)uVar38 <= (int)uVar39);
          uVar33 = uVar11 + 2;
          sVar26 = (short)uStack_c70;
        }
        equipment_supplier_0x70cc0(auStack_8c0);
        equipment_category(auStack_8c0,sVar26);
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
        iVar37 = *(int *)(param_1 + 0x768);
        if (cVar1 == '\0') {
          if ((7 < iVar37 + 1) && (iVar37 + 1 <= iVar28)) {
            equipment_supplier_0xbc750(0x14266c870);
            FUN_140af3400(0x14266c870,auStack_8c0,0,0);
          }
        }
        else {
          if ((7 < iVar37) && (iVar37 <= iVar28)) {
            equipment_supplier_0xbc750(0x14266c870);
            iStack_ce8 = 8;
            FUN_140af3310(0x14266c870,auStack_8c0,0,0);
          }
          iVar37 = *(int *)(param_1 + 0x768) + 1;
          if ((7 < iVar37) && (iVar37 <= iVar28)) {
            equipment_supplier_0xbc750(0x14266c870);
            iStack_ce8 = 0x10;
            FUN_140af3310(0x14266c870,auStack_8c0,0,0);
          }
        }
        equipment_supplier_0x69460(auStack_8c0);
      }
      *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 2;
      if (*(char *)((longlong)sVar26 + 0x1c58 + param_1) != '\0') {
        equipment_supplier_0x70870(param_1 + (longlong)sVar26 * 0x18 + 0x1250,&uStack_c18);
        equipment_supplier_0x70860(param_1 + (longlong)sVar26 * 0x18 + 0x1250,&uStack_b38);
        while( true ) {
          uVar38 = (uint)uVar32;
          if (uStack_c18 == uStack_b38) break;
          cVar1 = '\x01';
          if (uStack_c18 < uStack_b38) {
            cVar1 = -1;
          }
          if (-1 < cVar1) break;
          if ((5 < *(int *)(param_1 + 0x768)) && (*(int *)(param_1 + 0x768) <= iVar28)) {
            equipment_supplier_0xbc760(0x14266c870,7,0,1);
            for (uVar39 = uVar11; (int)uVar39 <= (int)uVar38; uVar39 = uVar39 + 1) {
              iVar37 = *(int *)(param_1 + 0x768);
              if (iVar37 < iVar37 + 3) {
                do {
                  if ((7 < iVar37) && (iVar37 <= iVar28)) {
                    equipment_supplier_0xbc750(0x14266c870,iVar37,uVar39);
                    if (uVar39 == uVar11) {
                      uVar10 = *(undefined4 *)
                                ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e410);
                    }
                    else if (((uVar39 == uVar11 + 1) || (uVar39 == uVar33)) ||
                            (uVar39 == uVar11 + 3)) {
                      uVar10 = *(undefined4 *)
                                ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                    }
                    else if (uVar39 == uVar11 + 4) {
                      uVar10 = *(undefined4 *)
                                ((longlong)(iVar37 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e428);
                    }
                    else {
                      lVar13 = (longlong)(iVar37 - *(int *)(param_1 + 0x768));
                      if (uVar39 == uVar38) {
                        uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                      }
                      else {
                        uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                      }
                    }
                    equipment_supplier_0xaf4570(0x14266c870,uVar10);
                    cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar1 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                  }
                  iVar37 = iVar37 + 1;
                } while (iVar37 < *(int *)(param_1 + 0x768) + 3);
              }
            }
            iVar37 = *(int *)(param_1 + 0x768);
            if ((7 < iVar37) && (iVar37 <= (int)uStack_c20 * 3 + 5)) {
              equipment_supplier_0xbc750(0x14266c870,iVar37,uVar11);
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar33 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              sVar26 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              sVar5 = (**(code **)(*(longlong *)*puVar15 + 8))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              sVar6 = (*(code *)**(undefined8 **)*puVar15)();
              iStack_ce8 = (int)sVar26;
              uStack_ce0 = uVar33;
              iVar37 = FUN_140c9b580(&DAT_1424078d0,iStack_c30,(int)sVar6,(int)sVar5);
              uVar38 = uStack_c80;
              if (iVar37 != 0) {
                uStack_cd8 = uStack_cd8 & 0xffffff00;
                uStack_ce0 = 3;
                iStack_ce8 = 5;
                FUN_140af4810(0x14266c870,iVar37,2);
                uVar38 = uStack_c80;
              }
            }
            iVar37 = *(int *)(param_1 + 0x768) + 1;
            if ((7 < iVar37) && (iVar37 <= iVar28)) {
              equipment_supplier_0xbc760(0x14266c870,7,0,1);
              equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,uVar11 + 7);
              equipment_supplier_0x70cc0(auStack_9a0);
              equipment_supplier_0x70cc0(auStack_740);
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              iVar37 = (**(code **)(*(longlong *)*puVar15 + 0x478))();
              if (1 < iVar37) {
                FUN_140545610(iVar37,auStack_9a0);
                equipment_supplier_0x70b90(auStack_9a0," ");
              }
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar10 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar7 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar8 = (**(code **)(*(longlong *)*puVar15 + 8))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar9 = (*(code *)**(undefined8 **)*puVar15)();
              uStack_ce0 = 0xffffffff;
              if (iVar37 == 1) {
                uStack_ce0 = 1;
              }
              uStack_ca0 = 0;
              uStack_ca8 = 0;
              uStack_cb0 = 1;
              uStack_cb8 = CONCAT44(uStack_cb8._4_4_,0xffffffff);
              uStack_cc0 = CONCAT44(uStack_cc0._4_4_,0xffffffff);
              uStack_cc8 = 0;
              uStack_cd0 = uStack_cd0 & 0xffffffffffffff00;
              uStack_cd8 = 0;
              iStack_ce8 = uVar10;
              equipment_item_name(auStack_740,uVar9,uVar8,uVar7);
              equipment_supplier_0xbb340(auStack_9a0,auStack_740);
              iVar37 = uStack_c80 - uVar11;
              uVar32 = equipment_supplier_0x70960(auStack_9a0);
              if ((ulonglong)(longlong)(iVar37 + -0x16) <= uVar32) {
                if (-1 < iVar37 + -0x17) {
                  equipment_supplier_0xe2860(auStack_9a0,(longlong)iVar37 + -0x17,0);
                }
                if (3 < iVar37 + -0x17) {
                  puVar18 = (undefined1 *)
                            equipment_supplier_0xfcbe0(auStack_9a0,(longlong)iVar37 + -0x1a);
                  *puVar18 = 0x2e;
                  puVar18 = (undefined1 *)
                            equipment_supplier_0xfcbe0(auStack_9a0,(longlong)(iVar37 + -0x19));
                  *puVar18 = 0x2e;
                  puVar18 = (undefined1 *)
                            equipment_supplier_0xfcbe0(auStack_9a0,(longlong)(iVar37 + -0x18));
                  *puVar18 = 0x2e;
                }
              }
              FUN_140af3400(0x14266c870,auStack_9a0,0,0);
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              iVar37 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar7 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar8 = (**(code **)(*(longlong *)*puVar15 + 8))();
              puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
              uVar9 = (*(code *)**(undefined8 **)*puVar15)();
              iStack_ce8 = iVar37;
              uVar10 = equipment_supplier_0x105ac20(param_1,uVar9,uVar8,uVar7);
              FUN_140545790(uVar10,auStack_9a0);
              equipment_supplier_0x70b90(auStack_9a0," pts");
              uVar38 = uStack_c80;
              equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,uStack_c80 - 0xf)
              ;
              FUN_140af3400(0x14266c870,auStack_9a0,0,0);
              equipment_supplier_0x69460(auStack_740);
              equipment_supplier_0x69460(auStack_9a0);
            }
            equipment_supplier_0xbc760(0x14266c870,7,0,1);
            iVar37 = *(int *)(param_1 + 0x768);
            puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
            iVar35 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
            puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
            uVar7 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
            puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
            uVar8 = (**(code **)(*(longlong *)*puVar15 + 8))();
            puVar15 = (undefined8 *)equipment_supplier_0x70440(&uStack_c18);
            uVar9 = (*(code *)**(undefined8 **)*puVar15)();
            iStack_ce8 = iVar35;
            iVar35 = equipment_supplier_0x105ac20(param_1,uVar9,uVar8,uVar7);
            if (*(int *)(param_1 + 0x1f4c) < iVar35) {
              lVar13 = 0;
              do {
                lVar41 = 0;
                iVar35 = iVar37;
                do {
                  if ((7 < iVar35) && (iVar35 <= iVar28)) {
                    equipment_supplier_0xbc750(0x14266c870,iVar35);
                    equipment_supplier_0xaf4ba0
                              (0x14266c870,*(undefined4 *)((lVar41 + lVar13) * 4 + 0x14266e554));
                  }
                  iVar35 = iVar35 + 1;
                  lVar41 = lVar41 + 1;
                } while (lVar41 < 3);
                lVar13 = lVar13 + 3;
              } while (lVar13 < 9);
            }
            else if (((((iStack_c4c < (int)(uVar38 - 6)) || ((int)(uVar38 - 4) < iStack_c4c)) ||
                      ((int)uStack_c50 < iVar37)) ||
                     ((iVar37 + 2 < (int)uStack_c50 || (*(int *)(param_1 + 0x768) < 8)))) ||
                    ((int)uStack_c20 * 3 + 5 < *(int *)(param_1 + 0x768))) {
              lVar13 = 0;
              do {
                lVar41 = 0;
                iVar35 = iVar37;
                do {
                  if ((7 < iVar35) && (iVar35 <= iVar28)) {
                    equipment_supplier_0xbc750(0x14266c870,iVar35);
                    equipment_supplier_0xaf4ba0
                              (0x14266c870,*(undefined4 *)((lVar13 + lVar41) * 4 + 0x14266e4e8));
                  }
                  iVar35 = iVar35 + 1;
                  lVar41 = lVar41 + 1;
                } while (lVar41 < 3);
                lVar13 = lVar13 + 3;
              } while (lVar13 < 9);
            }
            else {
              lVar13 = 0;
              if (DAT_1423b2a4c == '\0') {
                do {
                  lVar41 = 0;
                  iVar35 = iVar37;
                  do {
                    if ((7 < iVar35) && (iVar35 <= iVar28)) {
                      equipment_supplier_0xbc750(0x14266c870,iVar35);
                      equipment_supplier_0xaf4ba0
                                (0x14266c870,*(undefined4 *)((lVar13 + lVar41) * 4 + 0x14266e50c));
                    }
                    iVar35 = iVar35 + 1;
                    lVar41 = lVar41 + 1;
                  } while (lVar41 < 3);
                  lVar13 = lVar13 + 3;
                } while (lVar13 < 9);
              }
              else {
                do {
                  lVar41 = 0;
                  iVar35 = iVar37;
                  do {
                    if ((7 < iVar35) && (iVar35 <= iVar28)) {
                      equipment_supplier_0xbc750(0x14266c870,iVar35);
                      equipment_supplier_0xaf4ba0
                                (0x14266c870,*(undefined4 *)((lVar41 + lVar13) * 4 + 0x14266e530));
                    }
                    iVar35 = iVar35 + 1;
                    lVar41 = lVar41 + 1;
                  } while (lVar41 < 3);
                  lVar13 = lVar13 + 3;
                } while (lVar13 < 9);
              }
            }
            iVar37 = *(int *)(lStack_c78 + 0x768);
            if ((((iStack_c4c < (int)(uStack_c80 - 3)) || ((int)(uStack_c80 - 1) < iStack_c4c)) ||
                ((int)uStack_c50 < iVar37)) ||
               (((iVar37 + 2 < (int)uStack_c50 || (iVar37 < 8)) ||
                ((int)uStack_c20 * 3 + 5 < iVar37)))) {
              lVar13 = 0;
              do {
                lVar41 = 0;
                iVar35 = iVar37;
                do {
                  if ((7 < iVar35) && (iVar35 <= iVar28)) {
                    equipment_supplier_0xbc750(0x14266c870,iVar35);
                    equipment_supplier_0xaf4ba0
                              (0x14266c870,*(undefined4 *)((lVar13 + lVar41) * 4 + 0x14266e578));
                  }
                  iVar35 = iVar35 + 1;
                  lVar41 = lVar41 + 1;
                } while (lVar41 < 3);
                lVar13 = lVar13 + 3;
              } while (lVar13 < 9);
            }
            else {
              lVar13 = 0;
              if (DAT_1423b2a4c == '\0') {
                do {
                  lVar41 = 0;
                  iVar35 = iVar37;
                  do {
                    if ((7 < iVar35) && (iVar35 <= iVar28)) {
                      equipment_supplier_0xbc750(0x14266c870,iVar35);
                      equipment_supplier_0xaf4ba0
                                (0x14266c870,*(undefined4 *)((lVar13 + lVar41) * 4 + 0x14266e59c));
                    }
                    iVar35 = iVar35 + 1;
                    lVar41 = lVar41 + 1;
                  } while (lVar41 < 3);
                  lVar13 = lVar13 + 3;
                } while (lVar13 < 9);
              }
              else {
                do {
                  lVar41 = 0;
                  iVar35 = iVar37;
                  do {
                    if ((7 < iVar35) && (iVar35 <= iVar28)) {
                      equipment_supplier_0xbc750(0x14266c870,iVar35);
                      equipment_supplier_0xaf4ba0
                                (0x14266c870,*(undefined4 *)((lVar13 + lVar41) * 4 + 0x14266e5c0));
                    }
                    iVar35 = iVar35 + 1;
                    lVar41 = lVar41 + 1;
                  } while (lVar41 < 3);
                  lVar13 = lVar13 + 3;
                } while (lVar13 < 9);
              }
            }
            param_1 = lStack_c78;
            uVar11 = (uint)uStack_c00;
            uVar33 = (uint)uStack_c38;
          }
          *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
          equipment_supplier_0x70430(&uStack_c18);
          uVar32 = (ulonglong)uStack_c80;
        }
        sVar26 = (short)uStack_c70;
      }
      iVar37 = (int)uVar32;
      if (iVar28 < *(int *)(param_1 + 0x768)) break;
    }
    iVar37 = (int)uVar32;
    sVar26 = sVar26 + 1;
    uStack_c70 = CONCAT22(uStack_c70._2_2_,sVar26);
  } while (sVar26 < 0x6b);
  iVar28 = iStack_c60;
  if (iStack_c40 + -9 < iStack_c60) {
    iVar27 = (int)uStack_c20;
    iVar35 = (int)uStack_c20 + 2;
    equipment_supplier_0xbc990(auStack_a60);
    iStack_ce8 = iVar27 * 3;
    uStack_ce0 = 9;
    uStack_cd8 = iVar35 * 3;
    equipment_supplier_0xbc9b0(auStack_a60,*(undefined4 *)(param_1 + 0x1cc4),0,iVar28 + -1);
    uStack_ce0 = 0;
    iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x1cd4));
    FUN_1414284b0(auStack_a60,iStack_c4c,uStack_c50,iVar37 + 1);
  }
  *(undefined4 *)(param_1 + 0x768) = 8;
  iVar28 = *(int *)(param_1 + 0x1ccc);
  uVar33 = (int)uStack_c20 + -1 + iVar28;
  iVar35 = 0;
  uStack_c38 = uStack_c38 & 0xffffffff00000000;
  uVar11 = 0;
  iVar37 = (int)uStack_c10;
  uStack_c80 = uVar33;
  iStack_c60 = iVar28;
  do {
    if (*(char *)((longlong)&uStack_b8 + (longlong)(int)uVar11) != '\0') {
      if (iVar35 < iVar28) {
        iVar35 = iVar35 + 1;
        uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar35);
      }
      else {
        if ((int)uVar33 < iVar35) break;
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar27 = (int)uStack_c88;
        if (iVar37 <= (int)uStack_c88) {
          iVar28 = (int)uStack_c10;
          do {
            iVar35 = *(int *)(param_1 + 0x768);
            if (iVar35 < iVar35 + 3) {
              do {
                if ((int)*(short *)(param_1 + 0x1cc8) == uVar11) {
                  if (iVar37 == iVar28) {
                    uVar10 = *(undefined4 *)
                              ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e2d8);
                  }
                  else {
                    lVar13 = (longlong)(iVar35 - *(int *)(param_1 + 0x768));
                    if (iVar37 == iVar27) {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2f0);
                    }
                    else {
                      uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2e4);
                    }
                  }
                }
                else if (iVar37 == iVar28) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e2b4);
                }
                else {
                  lVar13 = (longlong)(iVar35 - *(int *)(param_1 + 0x768));
                  if (iVar37 == iVar27) {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2cc);
                  }
                  else {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e2c0);
                  }
                }
                _DAT_14266c8f4 = iVar37;
                _DAT_14266c8f8 = iVar35;
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                  FUN_1400bc7c0(0x14266c870,0,1);
                }
                iVar35 = iVar35 + 1;
              } while (iVar35 < *(int *)(param_1 + 0x768) + 3);
            }
            iVar37 = iVar37 + 1;
          } while (iVar37 <= iVar27);
          iVar28 = iStack_c60;
          uVar33 = uStack_c80;
          iVar35 = (uint)uStack_c38;
          iVar37 = (int)uStack_c10;
        }
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        equipment_supplier_0x70cc0(auStack_820);
        equipment_category(auStack_820,uVar11 & 0xffff);
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1);
        FUN_140af3400(0x14266c870,auStack_820,0,0);
        iVar35 = iVar35 + 1;
        uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar35);
        *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
        if ((int)uStack_c20 * 3 + 8 <= *(int *)(param_1 + 0x768)) {
          equipment_supplier_0x69460(auStack_820);
          break;
        }
        equipment_supplier_0x69460(auStack_820);
      }
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x6b);
  iVar37 = (int)puStack_c28;
  iVar28 = (int)uStack_c20;
  if ((int)uStack_c20 < (int)puStack_c28) {
    iVar35 = (int)uStack_c20 + 2;
    equipment_supplier_0xbc990(auStack_a40);
    uStack_ce0 = 9;
    iStack_ce8 = iVar28;
    uStack_cd8 = iVar35 * 3;
    equipment_supplier_0xbc9b0(auStack_a40,*(undefined4 *)(param_1 + 0x1ccc),0,iVar37 + -1);
    uStack_ce0 = 0;
    iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x1cd5));
    FUN_1414284b0(auStack_a40,iStack_c4c,uStack_c50,(int)uStack_c88 + 1);
  }
  iVar37 = iStack_c94;
  iVar28 = iVar28 + -1;
  iVar35 = 2;
  if (iStack_c90 <= iVar28) {
    iVar35 = 0;
  }
  iVar35 = iVar35 + iStack_c98;
  iVar21 = 8;
  puVar31 = (undefined4 *)0x14266e3a4;
  iVar27 = iVar37;
  do {
    for (; iVar27 <= iVar35; iVar27 = iVar27 + 1) {
      if (iVar27 == iVar37) {
        uVar10 = puVar31[-6];
      }
      else if (iVar27 == iVar35 + -3) {
        uVar10 = *puVar31;
      }
      else if (iVar27 == iVar35 + -2) {
        uVar10 = puVar31[3];
      }
      else if (iVar27 == iVar35 + -1) {
        uVar10 = puVar31[6];
      }
      else if (iVar27 == iVar35) {
        uVar10 = puVar31[9];
      }
      else {
        uVar10 = puVar31[-3];
      }
      _DAT_14266c8f4 = iVar27;
      _DAT_14266c8f8 = iVar21;
      equipment_supplier_0xaf4570(0x14266c870,uVar10);
      if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
        FUN_1400bc7c0(0x14266c870,0,1);
      }
    }
    iVar21 = iVar21 + 1;
    puVar31 = puVar31 + 1;
    iVar27 = iVar37;
  } while ((longlong)puVar31 < 0x14266e3b0);
  equipment_supplier_0xbc760(0x14266c870,7,0,1);
  iVar37 = iVar37 + 2;
  puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar37);
  equipment_supplier_0xbc750(0x14266c870,9,iVar37);
  param_1 = lStack_c78;
  FUN_140070bd0(auStack_940,lStack_c78 + 0x1cd8);
  cVar1 = equipment_supplier_0x70b50(auStack_940);
  if (cVar1 == '\0') {
LAB_141077b57:
    if (*(char *)(param_1 + 0x1cf8) != '\0') goto LAB_141077b61;
  }
  else {
    if (*(char *)(param_1 + 0x1cf8) == '\0') {
      equipment_supplier_0xbc760(0x14266c870,0,0,1);
      equipment_supplier_0x70b90(auStack_940,"...");
      goto LAB_141077b57;
    }
LAB_141077b61:
    uVar33 = GetTickCount();
    if (uVar33 % 1000 < 500) {
      equipment_supplier_0x70b90(auStack_940,"_");
    }
  }
  FUN_140af3400(0x14266c870,auStack_940,0,0);
  *(undefined4 *)(param_1 + 0x768) = 0xb;
  iVar35 = *(int *)(param_1 + 0x1cd0);
  uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar35);
  iVar27 = iVar35 + -1 + iVar28;
  iVar21 = 0;
  uStack_c88 = uStack_c88 & 0xffffffff00000000;
  iStack_c60 = iVar27;
  puStack_bc8 = (undefined8 *)
                equipment_supplier_0x70870
                          (param_1 + (longlong)*(short *)(param_1 + 0x1cc8) * 0x18 + 0x800,
                           auStack_b28);
  puStack_bc8 = (undefined8 *)*puStack_bc8;
  puVar15 = puStack_bb0;
  while (puStack_bc8 != puVar15) {
    cVar1 = '\x01';
    if (puStack_bc8 < puVar15) {
      cVar1 = -1;
    }
    if (-1 < cVar1) break;
    psVar20 = (short *)*puStack_bc8;
    uStack_c10 = psVar20;
    if ((char)psVar20[6] < '\x01') {
LAB_14107835e:
      puStack_bc8 = puStack_bc8 + 1;
    }
    else {
      if (iVar35 <= iVar21) {
        if (iVar21 <= iVar27) {
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          iVar27 = iStack_c94;
          iVar35 = iStack_c98;
          for (iVar28 = iStack_c94; iVar28 <= iVar35; iVar28 = iVar28 + 1) {
            iVar21 = *(int *)(param_1 + 0x768);
            if (iVar21 < iVar21 + 3) {
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar21,iVar28);
                if (iVar28 == iVar27) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar21 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e410);
                }
                else if (iVar28 == iVar27 + 1) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar21 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                }
                else if (iVar28 == iVar37) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar21 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                }
                else if (iVar28 == iVar27 + 3) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar21 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                }
                else if (iVar28 == iVar27 + 4) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar21 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e428);
                }
                else {
                  lVar13 = (longlong)(iVar21 - *(int *)(param_1 + 0x768));
                  if (iVar28 == iVar35) {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                  }
                  else {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                  }
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                if (cVar1 != '\0') {
                  FUN_1400bc7c0(0x14266c870,0,1);
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < *(int *)(param_1 + 0x768) + 3);
            }
            psVar20 = uStack_c10;
          }
          equipment_supplier_0xbc750(0x14266c870,*(undefined4 *)(param_1 + 0x768),iVar27);
          iStack_ce8 = (int)psVar20[2];
          uStack_ce0 = *(uint *)(psVar20 + 4);
          iVar28 = FUN_140c9b580(&DAT_1424078d0,iStack_c30,(int)*psVar20,(int)psVar20[1]);
          if (iVar28 != 0) {
            uStack_cd8 = uStack_cd8 & 0xffffff00;
            uStack_ce0 = 3;
            iStack_ce8 = 5;
            FUN_140af4810(0x14266c870,iVar28,2);
          }
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar27 + 7);
          equipment_supplier_0x70cc0(auStack_960);
          equipment_available_choice(psVar20,auStack_960);
          iVar27 = iVar35 - iVar27;
          uVar32 = equipment_supplier_0x70960(auStack_960);
          if ((ulonglong)(longlong)(iVar27 + -0x16) <= uVar32) {
            equipment_supplier_0xe2860(auStack_960,(longlong)iVar27 + -0x17,0);
            if (3 < iVar27 + -0x17) {
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_960,(longlong)iVar27 + -0x1a);
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_960,(longlong)(iVar27 + -0x19));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        equipment_supplier_0xfcbe0(auStack_960,(longlong)(iVar27 + -0x18));
              *puVar18 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_960,0,0);
          equipment_supplier_0x70cc0(auStack_860);
          iStack_ce8 = *(int *)(psVar20 + 4);
          uVar10 = equipment_supplier_0x105ac20(param_1,*psVar20,psVar20[1],psVar20[2]);
          FUN_140545790(uVar10,auStack_860);
          equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar35 + -0xf);
          FUN_140af3400(0x14266c870,auStack_860,0,0);
          FUN_140069780(auStack_360," pts");
          FUN_140af3400(0x14266c870,auStack_360,0,0);
          equipment_supplier_0x69460(auStack_360);
          equipment_supplier_0xbc760(0x14266c870,7,0,1);
          iVar28 = iVar35 + -6;
          iVar37 = *(int *)(param_1 + 0x768);
          iStack_ce8 = *(int *)(psVar20 + 4);
          iVar27 = equipment_supplier_0x105ac20(param_1,*psVar20,psVar20[1],psVar20[2]);
          if (*(int *)(param_1 + 0x1f4c) < iVar27) {
            puVar31 = (undefined4 *)0x14266e554;
            do {
              lVar13 = 3;
              iVar35 = iVar37;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar35,iVar28);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                iVar35 = iVar35 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              iVar28 = iVar28 + 1;
              psVar20 = uStack_c10;
              param_1 = lStack_c78;
            } while ((longlong)puVar31 < 0x14266e578);
          }
          else if ((((iStack_c4c < iVar28) || (iVar35 + -4 < iStack_c4c)) ||
                   ((int)uStack_c50 < iVar37)) || (iVar37 + 2 < (int)uStack_c50)) {
            puVar31 = (undefined4 *)0x14266e4e8;
            do {
              lVar13 = 3;
              iVar35 = iVar37;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar35,iVar28);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                iVar35 = iVar35 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              iVar28 = iVar28 + 1;
              psVar20 = uStack_c10;
            } while ((longlong)puVar31 < 0x14266e50c);
          }
          else if (DAT_1423b2a4c == '\0') {
            puVar31 = (undefined4 *)0x14266e50c;
            do {
              lVar13 = 3;
              iVar35 = iVar37;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar35,iVar28);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                iVar35 = iVar35 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              iVar28 = iVar28 + 1;
              param_1 = lStack_c78;
            } while ((longlong)puVar31 < 0x14266e530);
          }
          else {
            puVar31 = (undefined4 *)0x14266e530;
            do {
              lVar13 = 3;
              iVar35 = iVar37;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar35,iVar28);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                iVar35 = iVar35 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              iVar28 = iVar28 + 1;
              psVar20 = uStack_c10;
            } while ((longlong)puVar31 < 0x14266e554);
          }
          iVar37 = iStack_c98;
          iVar35 = iStack_c98 + -3;
          iVar28 = *(int *)(param_1 + 0x768);
          equipment_supplier_0x70870
                    (param_1 + (longlong)*(short *)(param_1 + 0x1cc8) * 0x18 + 0x1250,auStack_bc0);
          equipment_supplier_0x70860
                    (param_1 + (longlong)*(short *)(param_1 + 0x1cc8) * 0x18 + 0x1250,auStack_b60);
          puVar18 = (undefined1 *)equipment_supplier_0x70450(auStack_bc0,auStack_c48,auStack_b60);
          cVar1 = equipment_supplier_0x66de0(*puVar18,0);
          if (cVar1 != '\0') {
LAB_141078210:
            puVar15 = (undefined8 *)equipment_supplier_0x70440(auStack_bc0);
            sVar26 = (*(code *)**(undefined8 **)*puVar15)();
            if (sVar26 != *psVar20) goto LAB_141078279;
            puVar15 = (undefined8 *)equipment_supplier_0x70440(auStack_bc0);
            sVar26 = (**(code **)(*(longlong *)*puVar15 + 8))();
            if (sVar26 != psVar20[1]) goto LAB_141078279;
            puVar15 = (undefined8 *)equipment_supplier_0x70440(auStack_bc0);
            sVar26 = (**(code **)(*(longlong *)*puVar15 + 0x10))();
            if (sVar26 != psVar20[2]) goto LAB_141078279;
            puVar15 = (undefined8 *)equipment_supplier_0x70440(auStack_bc0);
            iVar27 = (**(code **)(*(longlong *)*puVar15 + 0x18))();
            if (iVar27 != *(int *)(psVar20 + 4)) goto LAB_141078279;
            if (((iStack_c4c < iVar35) || (iVar37 + -1 < iStack_c4c)) ||
               (((int)uStack_c50 < iVar28 || (iVar28 + 2 < (int)uStack_c50)))) {
              puVar31 = (undefined4 *)0x14266e578;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar35 = iVar35 + 1;
              } while ((longlong)puVar31 < 0x14266e59c);
            }
            else if (DAT_1423b2a4c == '\0') {
              puVar31 = (undefined4 *)0x14266e59c;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar35 = iVar35 + 1;
              } while ((longlong)puVar31 < 0x14266e5c0);
            }
            else {
              puVar31 = (undefined4 *)0x14266e5c0;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                iVar35 = iVar35 + 1;
              } while ((longlong)puVar31 < 0x14266e5e4);
            }
            goto LAB_141078304;
          }
LAB_1410782a8:
          puVar31 = (undefined4 *)0x14266e5e4;
          do {
            lVar13 = 3;
            iVar37 = iVar28;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar37,iVar35);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
              iVar37 = iVar37 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar35 = iVar35 + 1;
          } while ((longlong)puVar31 < 0x14266e608);
LAB_141078304:
          iVar21 = (int)uStack_c88 + 1;
          uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar21);
          *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
          iVar28 = (int)uStack_c20 + -1;
          if (*(int *)(param_1 + 0x768) < iVar28 * 3 + 0xb) {
            equipment_supplier_0x69460(auStack_860);
            equipment_supplier_0x69460(auStack_960);
            puVar15 = puStack_bb0;
            iVar35 = (uint)uStack_c38;
            iVar27 = iStack_c60;
            iVar37 = (int)puStack_c28;
            goto LAB_14107835e;
          }
          equipment_supplier_0x69460(auStack_860);
          equipment_supplier_0x69460(auStack_960);
        }
        break;
      }
      iVar21 = iVar21 + 1;
      uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar21);
      puStack_bc8 = puStack_bc8 + 1;
    }
  }
  if (iVar28 < iStack_c90) {
    iStack_b44 = (iVar28 + 3) * 3;
    uStack_b40 = 0;
    uStack_b58 = *(undefined4 *)(param_1 + 0x1cd0);
    uStack_b54 = 0;
    iStack_b50 = iStack_c90 + -1;
    uStack_b48 = 0xc;
    iStack_b4c = iVar28;
    FUN_1400bc9e0(&uStack_b58);
    uStack_ce0 = 0;
    iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x1cd6));
    FUN_1414284b0(&uStack_b58,iStack_c4c,uStack_c50,iStack_c98 + 1);
  }
  FUN_140070e80(auStack_e0);
  FUN_140070e80(auStack_940);
LAB_14107855b:
  if (*(int *)(param_1 + 0x740) == 2) {
    equipment_supplier_0x697c0(auStack_a00,auStack_c48[0]);
    equipment_supplier_0x711b0(auStack_a00);
    equipment_supplier_0x697c0(auStack_a20,auStack_c48[0]);
    equipment_supplier_0x711b0(auStack_a20);
    iVar28 = iStack_c5c + (int)uStack_c68;
    if ((char)uStack_c54 != '\0') {
      iVar28 = iStack_c5c + (int)uStack_c68 + 3;
    }
    iStack_c94 = _DAT_1423efc04 / 2;
    plVar14 = (longlong *)(param_1 + 0x1d18);
    iVar35 = (int)uStack_c20;
    iVar37 = (iStack_c94 - (int)uStack_c68) + -2;
    if ((int)(*(longlong *)(param_1 + 0x1d20) - *plVar14 >> 2) <= (int)uStack_c20) {
      iVar37 = iStack_c94 - (int)uStack_c68;
    }
    uStack_c10 = (short *)CONCAT44(uStack_c10._4_4_,iStack_c94 + 3 + (int)uStack_c68);
    iVar27 = iStack_c44 - (int)uStack_c68;
    if ((char)uStack_c54 != '\0') {
      iVar27 = (iStack_c44 - (int)uStack_c68) + -3;
    }
    uStack_c80 = iVar27 + -2;
    if ((int)(*(longlong *)(param_1 + 0x1210) - *(longlong *)(param_1 + 0x1208) >> 2) <=
        (int)uStack_c20) {
      uStack_c80 = iVar27;
    }
    _DAT_14266c8fc = 0x1010007;
    _DAT_14266c8f4 = iVar28 + 2;
    _DAT_14266c8f8 = 5;
    iStack_c60 = iVar37;
    FUN_140069780(auStack_340,"Your Animals");
    FUN_140af3400(0x14266c870,auStack_340,0,0);
    FUN_140070e80(auStack_340);
    _DAT_14266c8fc = 0x1010007;
    FUN_140545790(*(undefined4 *)(param_1 + 0x1f4c),auStack_a00);
    _DAT_14266c8f4 = (iVar37 - iStack_9f0) + -0xf;
    _DAT_14266c8f8 = 5;
    FUN_140069780(auStack_320,"Points Left: ");
    FUN_140af3400(0x14266c870,auStack_320,3,0);
    FUN_140070e80(auStack_320);
    FUN_140af3400(0x14266c870,auStack_a00,0,0);
    *(undefined4 *)(param_1 + 0x768) = 8;
    uVar33 = *(uint *)(param_1 + 0x770);
    uStack_c88 = (ulonglong)uVar33;
    *(uint *)(param_1 + 0x748) = uVar33;
    if ((int)(*(longlong *)(param_1 + 0x1d20) - *plVar14 >> 2) - iVar35 < (int)uVar33) {
      iVar27 = equipment_supplier_0x709a0(plVar14);
      uStack_c88 = (ulonglong)(uint)(iVar27 - iVar35);
      *(int *)(param_1 + 0x748) = iVar27 - iVar35;
    }
    if ((int)uStack_c88 < 0) {
      *(undefined4 *)(param_1 + 0x748) = 0;
      uStack_c88 = 0;
    }
    if ((int)uStack_c88 < iVar35 + (int)uStack_c88) {
      do {
        uVar32 = uStack_c88;
        uVar17 = equipment_supplier_0x709a0(plVar14);
        iVar35 = (int)uVar32;
        if (uVar17 <= (ulonglong)(longlong)iVar35) break;
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar27 = iVar28;
        if (iVar28 <= iVar37) {
          do {
            iVar35 = *(int *)(param_1 + 0x768);
            if (iVar35 < iVar35 + 3) {
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar35,iVar27);
                if (iVar27 == iVar28) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e410);
                }
                else if (((iVar27 == iVar28 + 1) || (iVar27 == iVar28 + 2)) ||
                        (iVar27 == iVar28 + 3)) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
                }
                else if (iVar27 == iVar28 + 4) {
                  uVar10 = *(undefined4 *)
                            ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e428);
                }
                else {
                  lVar13 = (longlong)(iVar35 - *(int *)(param_1 + 0x768));
                  if (iVar27 == iVar37) {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                  }
                  else {
                    uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                  }
                }
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
                if (cVar1 != '\0') {
                  FUN_1400bc7c0(0x14266c870,0,1);
                }
                iVar35 = iVar35 + 1;
              } while (iVar35 < *(int *)(param_1 + 0x768) + 3);
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 <= iVar37);
          iVar35 = (int)uStack_c88;
        }
        lVar13 = (longlong)iVar35 * 4;
        lVar41 = (longlong)*(int *)(lVar13 + *(longlong *)(param_1 + 0x1d18));
        uVar7 = *(undefined2 *)(*(longlong *)(param_1 + 0x1238) + lVar41 * 2);
        uStack_c70 = CONCAT22(uStack_c70._2_2_,uVar7);
        uVar33 = *(uint *)(*(longlong *)(param_1 + 0x1208) + lVar41 * 4);
        uVar8 = *(undefined2 *)(*(longlong *)(param_1 + 0x1220) + lVar41 * 2);
        _DAT_14266c8f8 = *(undefined4 *)(param_1 + 0x768);
        _DAT_14266c8f4 = iVar28;
        equipment_supplier_0x697c0(auStack_800);
        equipment_supplier_0x711b0(auStack_800);
        sVar26 = (short)uVar33;
        if ((-1 < sVar26) && (sVar26 < (short)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
          uStack_cc0 = 0;
          uStack_cc8 = 0;
          uStack_cd0 = 0;
          uStack_cd8 = 0x400;
          uStack_ce0 = CONCAT22(uStack_ce0._2_2_,uVar7);
          iStack_ce8 = CONCAT22(iStack_ce8._2_2_,0xffff);
          iVar37 = FUN_1406efb50(*(undefined8 *)(_DAT_14250eee8 + (longlong)sVar26 * 8),uVar8,
                                 auStack_800,0xffffffff);
          if (iVar37 != 0) {
            uStack_cd8 = uStack_cd8 & 0xffffff00;
            uStack_ce0 = 3;
            iStack_ce8 = 5;
            FUN_140af4810(0x14266c870,iVar37,2);
          }
        }
        _DAT_14266c8fc = 0x1010007;
        _DAT_14266c8f8 = *(int *)(param_1 + 0x768) + 1;
        _DAT_14266c8f4 = iVar28 + 7;
        FUN_140545790(*(undefined4 *)(lVar13 + *(longlong *)(param_1 + 0x1d30)),auStack_a00);
        FUN_140af3400(0x14266c870,auStack_a00,3,0);
        FUN_140069780(auStack_300," ");
        FUN_140af3400(0x14266c870,auStack_300,3,0);
        FUN_140070e80(auStack_300);
        equipment_supplier_0x70ee0(auStack_a20,0);
        uStack_cd8 = CONCAT22(uStack_cd8._2_2_,0xfffe);
        uStack_ce0 = uStack_ce0 & 0xffffff00;
        iStack_ce8 = CONCAT31(iStack_ce8._1_3_,
                              *(int *)(lVar13 + *(longlong *)(param_1 + 0x1d30)) != 1);
        FUN_1413469d0(auStack_a20,uVar7,uVar33 & 0xffff,uVar8);
        bVar4 = equipment_supplier_0xf3d20(0x14250eec8,uVar33 & 0xffff,uVar8);
        if ((bVar4 < 2) && (equipment_supplier_0x70b90(auStack_a20,", "), bVar4 == 0)) {
          uVar40 = 0xc;
LAB_141078ab3:
          FUN_1400bb360(auStack_a20,uVar40);
        }
        else if (bVar4 == 1) {
          uVar40 = 0xb;
          goto LAB_141078ab3;
        }
        iVar37 = iStack_c60 - iVar28;
        if (((ulonglong)(longlong)(iVar37 + -0xe) <= uStack_a10) &&
           (equipment_supplier_0xe2860(auStack_a20,(longlong)iVar37 + -0xf,0), 3 < iVar37 + -0xf)) {
          puVar18 = (undefined1 *)equipment_supplier_0xfcbe0(auStack_a20,(longlong)iVar37 + -0x12);
          *puVar18 = 0x2e;
          puVar18 = (undefined1 *)equipment_supplier_0xfcbe0(auStack_a20,(longlong)(iVar37 + -0x11))
          ;
          *puVar18 = 0x2e;
          puVar18 = (undefined1 *)equipment_supplier_0xfcbe0(auStack_a20,(longlong)(iVar37 + -0x10))
          ;
          *puVar18 = 0x2e;
        }
        FUN_140af3400(0x14266c870,auStack_a20,0,0);
        uVar10 = FUN_14105ac40(param_1,(short)uStack_c70,uVar33 & 0xffff,uVar8);
        FUN_140545790(uVar10,auStack_a00);
        FUN_140071040(auStack_a00," pts",4);
        iVar21 = iStack_c60;
        _DAT_14266c8f8 = *(int *)(param_1 + 0x768) + 1;
        _DAT_14266c8f4 = iStack_c60 + -0xf;
        FUN_140af3400(0x14266c870,auStack_a00,0,0);
        _DAT_14266c8fc = 0x1010007;
        iVar37 = iVar21 + -6;
        iVar35 = *(int *)(param_1 + 0x768);
        iStack_c90 = iVar35;
        iVar36 = FUN_14105ac40(param_1,(short)uStack_c70,uVar33 & 0xffff,uVar8);
        iVar27 = iStack_c90;
        if (*(int *)(param_1 + 0x1f4c) < iVar36) {
          puVar31 = (undefined4 *)0x14266e554;
          do {
            lVar13 = 3;
            iVar35 = iVar27;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar37 = iVar37 + 1;
          } while ((longlong)puVar31 < 0x14266e578);
        }
        else if ((((iStack_c4c < iVar37) || (iVar21 + -4 < iStack_c4c)) ||
                 ((int)uStack_c50 < iVar35)) || (iVar35 + 2 < (int)uStack_c50)) {
          puVar31 = (undefined4 *)0x14266e4e8;
          do {
            lVar13 = 3;
            iVar35 = iVar27;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar37 = iVar37 + 1;
          } while ((longlong)puVar31 < 0x14266e50c);
        }
        else if (DAT_1423b2a4c == '\0') {
          puVar31 = (undefined4 *)0x14266e50c;
          do {
            lVar13 = 3;
            iVar35 = iVar27;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar37 = iVar37 + 1;
          } while ((longlong)puVar31 < 0x14266e530);
        }
        else {
          puVar31 = (undefined4 *)0x14266e530;
          do {
            lVar13 = 3;
            iVar35 = iVar27;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31,0);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar37 = iVar37 + 1;
          } while ((longlong)puVar31 < 0x14266e554);
        }
        iVar37 = *(int *)(lStack_c78 + 0x768);
        if (((iStack_c4c < iStack_c60 + -3) || (iStack_c60 + -1 < iStack_c4c)) ||
           (((int)uStack_c50 < iVar37 || (iVar37 + 2 < (int)uStack_c50)))) {
          puVar31 = (undefined4 *)0x14266e578;
          do {
            lVar13 = 3;
            iVar35 = iVar37;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          } while ((longlong)puVar31 < 0x14266e59c);
        }
        else if (DAT_1423b2a4c == '\0') {
          puVar31 = (undefined4 *)0x14266e59c;
          do {
            lVar13 = 3;
            iVar35 = iVar37;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          } while ((longlong)puVar31 < 0x14266e5c0);
        }
        else {
          puVar31 = (undefined4 *)0x14266e5c0;
          do {
            lVar13 = 3;
            iVar35 = iVar37;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar35 = iVar35 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          } while ((longlong)puVar31 < 0x14266e5e4);
        }
        param_1 = lStack_c78;
        *(int *)(lStack_c78 + 0x768) = *(int *)(lStack_c78 + 0x768) + 3;
        equipment_supplier_0x69460(auStack_800);
        uVar33 = (int)uStack_c88 + 1;
        uStack_c88 = (ulonglong)uVar33;
        plVar14 = (longlong *)(param_1 + 0x1d18);
        iVar37 = iStack_c60;
      } while ((int)uVar33 < (int)uStack_c20 + *(int *)(param_1 + 0x748));
    }
    iVar35 = equipment_supplier_0x709a0(param_1 + 0x1d18);
    iVar28 = (int)uStack_c20;
    if ((int)uStack_c20 < iVar35) {
      iVar35 = (int)uStack_c20 + 2;
      equipment_supplier_0xbc990(auStack_aa0);
      iVar27 = equipment_supplier_0x709a0(param_1 + 0x1d18);
      uStack_ce0 = 9;
      iStack_ce8 = iVar28;
      uStack_cd8 = iVar35 * 3;
      equipment_supplier_0xbc9b0(auStack_aa0,*(undefined4 *)(param_1 + 0x770),0,iVar27 + -1);
      uStack_ce0 = 0;
      iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x774));
      FUN_1414284b0(auStack_aa0,iStack_c4c,uStack_c50,iVar37 + 1);
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    uVar33 = uStack_c80;
    iVar37 = (int)uStack_c10;
    equipment_supplier_0xbc750(0x14266c870,5,(int)(uStack_c80 + (int)uStack_c10) / 2 + -9);
    FUN_140069780(auStack_2c0,"Available Animals");
    FUN_140af3400(0x14266c870,auStack_2c0,0,0);
    equipment_supplier_0x69460(auStack_2c0);
    if ((char)uStack_c54 != '\0') {
      uStack_c68 = CONCAT44(uStack_c68._4_4_,3 - iStack_c40);
      puVar31 = (undefined4 *)0x14266e0e4;
      iVar28 = iStack_c40;
      iVar37 = 3 - iStack_c40;
      do {
        lVar13 = 4;
        iVar35 = iStack_c94;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28 + iVar37,iVar35);
          equipment_supplier_0xaf4570(0x14266c870,puVar31[-8]);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar35);
          equipment_supplier_0xaf4570(0x14266c870,*puVar31);
          cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar1 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          iVar35 = iVar35 + 1;
          puVar31 = puVar31 + 2;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        iVar28 = iVar28 + 1;
        puVar31 = uStack_be8 + 1;
        iVar37 = (int)uStack_c68;
        uStack_be8 = puVar31;
      } while ((longlong)puVar31 < 0x14266e0ec);
      uStack_c68 = CONCAT44(uStack_c68._4_4_,iStack_c40 + -1);
      iVar28 = 5;
      if (4 < iStack_c40 + -1) {
        do {
          puVar31 = (undefined4 *)0x14266e104;
          iVar37 = iStack_c94;
          do {
            equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
            equipment_supplier_0xaf4570(0x14266c870,*puVar31);
            cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
            if (cVar1 != '\0') {
              FUN_1400bc7c0(0x14266c870,0,1);
            }
            iVar37 = iVar37 + 1;
            puVar31 = puVar31 + 1;
          } while ((longlong)puVar31 < 0x14266e114);
          iVar28 = iVar28 + 1;
        } while (iVar28 <= (int)uStack_c68);
      }
      param_1 = lStack_c78;
      iVar37 = (int)uStack_c10;
      uVar33 = uStack_c80;
      iVar28 = (int)uStack_c20;
    }
    *(undefined4 *)(param_1 + 0x768) = 8;
    uVar11 = *(uint *)(param_1 + 0x75c);
    uStack_c68 = (ulonglong)uVar11;
    *(uint *)(param_1 + 0x748) = uVar11;
    if ((int)(*(longlong *)(param_1 + 0x1210) - *(longlong *)(param_1 + 0x1208) >> 2) - iVar28 <
        (int)uVar11) {
      iVar35 = equipment_supplier_0x709a0(param_1 + 0x1208);
      uStack_c68 = (ulonglong)(uint)(iVar35 - iVar28);
      *(int *)(param_1 + 0x748) = iVar35 - iVar28;
    }
    if ((int)uStack_c68 < 0) {
      *(undefined4 *)(param_1 + 0x748) = 0;
      uStack_c68 = 0;
    }
    if ((int)uStack_c68 < (int)uStack_c68 + iVar28) {
      do {
        uVar32 = uStack_c68;
        uVar17 = equipment_supplier_0x709a0(param_1 + 0x1208);
        if (uVar17 <= (ulonglong)(longlong)(int)uVar32) break;
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        for (iVar28 = iVar37; iVar28 <= (int)uVar33; iVar28 = iVar28 + 1) {
          iVar35 = *(int *)(param_1 + 0x768);
          if (iVar35 < iVar35 + 3) {
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar35,iVar28);
              if (iVar28 == iVar37) {
                uVar10 = *(undefined4 *)
                          ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e410);
              }
              else if (iVar28 == iVar37 + 1) {
                uVar10 = *(undefined4 *)
                          ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
              }
              else if (iVar28 == iVar37 + 2) {
                uVar10 = *(undefined4 *)
                          ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
              }
              else if (iVar28 == iVar37 + 3) {
                uVar10 = *(undefined4 *)
                          ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e41c);
              }
              else if (iVar28 == iVar37 + 4) {
                uVar10 = *(undefined4 *)
                          ((longlong)(iVar35 - *(int *)(param_1 + 0x768)) * 4 + 0x14266e428);
              }
              else {
                lVar13 = (longlong)(iVar35 - *(int *)(param_1 + 0x768));
                if (iVar28 == uVar33) {
                  uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e230);
                }
                else {
                  uVar10 = *(undefined4 *)(lVar13 * 4 + 0x14266e224);
                }
              }
              equipment_supplier_0xaf4570(0x14266c870,uVar10);
              cVar1 = equipment_supplier_0x735c0(&DAT_1423efbf0,0);
              if (cVar1 != '\0') {
                FUN_1400bc7c0(0x14266c870,0,1);
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < *(int *)(param_1 + 0x768) + 3);
          }
        }
        equipment_supplier_0xbc750(0x14266c870,*(undefined4 *)(param_1 + 0x768),iVar37);
        equipment_supplier_0x70cc0(auStack_280);
        iVar35 = (int)uStack_c68;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1238,(longlong)iVar35);
        uVar7 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1220,(longlong)iVar35);
        uVar8 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70990(param_1 + 0x1208,(longlong)iVar35);
        uStack_cb8 = 0;
        uStack_cc0 = 0;
        uStack_cc8 = 0;
        uStack_cd0 = CONCAT44(uStack_cd0._4_4_,0x400);
        uStack_cd8 = CONCAT22(uStack_cd8._2_2_,uVar7);
        uStack_ce0 = CONCAT22(uStack_ce0._2_2_,0xffff);
        iStack_ce8 = CONCAT22(iStack_ce8._2_2_,0xffff);
        iVar28 = FUN_1400f3d80(0x14250eec8,auStack_280,*puVar19,uVar8);
        if (iVar28 != 0) {
          uStack_cd8 = uStack_cd8 & 0xffffff00;
          uStack_ce0 = 3;
          iStack_ce8 = 5;
          FUN_140af4810(0x14266c870,iVar28,2);
        }
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,iVar37 + 7);
        psVar20 = (short *)equipment_supplier_0x70a70(param_1 + 0x1d00,(longlong)iVar35);
        if (0 < *psVar20) {
          psVar20 = (short *)equipment_supplier_0x70a70(param_1 + 0x1d00,(longlong)iVar35);
          FUN_140545790((int)*psVar20,auStack_a00);
          FUN_140af3400(0x14266c870,auStack_a00,3,0);
          FUN_140069780(auStack_2a0," ");
          FUN_140af3400(0x14266c870,auStack_2a0,3,0);
          equipment_supplier_0x69460(auStack_2a0);
        }
        FUN_140070b60(auStack_a20,0);
        psVar20 = (short *)equipment_supplier_0x70a70(param_1 + 0x1d00,(longlong)iVar35);
        sVar26 = *psVar20;
        iVar28 = (int)uStack_c68;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1220,(longlong)iVar28);
        uVar7 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70990(param_1 + 0x1208,(longlong)iVar28);
        uVar8 = *puVar19;
        puVar19 = (undefined2 *)
                  equipment_supplier_0x70a70(param_1 + 0x1238,(longlong)(int)uStack_c68);
        uStack_cd8 = CONCAT22(uStack_cd8._2_2_,0xfffe);
        uStack_ce0 = uStack_ce0 & 0xffffff00;
        iStack_ce8 = CONCAT31(iStack_ce8._1_3_,sVar26 != 1);
        FUN_1413469d0(auStack_a20,*puVar19,uVar8,uVar7);
        FUN_140546b30(auStack_a20);
        iVar35 = (int)uStack_c68;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1220,(longlong)iVar35);
        uVar7 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70990(param_1 + 0x1208,(longlong)iVar35);
        bVar4 = equipment_supplier_0xf3d20(0x14250eec8,*puVar19,uVar7);
        if ((bVar4 < 2) && (equipment_supplier_0x70b90(auStack_a20,", "), bVar4 == 0)) {
          uVar40 = 0xc;
LAB_141079625:
          FUN_1400bb360(auStack_a20,uVar40);
        }
        else if (bVar4 == 1) {
          uVar40 = 0xb;
          goto LAB_141079625;
        }
        iVar37 = uStack_c80 - iVar37;
        uVar32 = equipment_supplier_0x70960(auStack_a20);
        if ((ulonglong)(longlong)(iVar37 + -0xe) <= uVar32) {
          equipment_supplier_0xe2860(auStack_a20,(longlong)iVar37 + -0xf,0);
          if (3 < iVar37 + -0xf) {
            puVar18 = (undefined1 *)equipment_supplier_0xfcbe0(auStack_a20,(longlong)iVar37 + -0x12)
            ;
            *puVar18 = 0x2e;
            puVar18 = (undefined1 *)
                      equipment_supplier_0xfcbe0(auStack_a20,(longlong)(iVar37 + -0x11));
            *puVar18 = 0x2e;
            puVar18 = (undefined1 *)
                      equipment_supplier_0xfcbe0(auStack_a20,(longlong)(iVar37 + -0x10));
            *puVar18 = 0x2e;
          }
        }
        FUN_140af3400(0x14266c870,auStack_a20,0,0);
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1220,(longlong)iVar35);
        uVar7 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70990(param_1 + 0x1208,(longlong)iVar35);
        uVar8 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1238,(longlong)iVar35);
        uVar10 = FUN_14105ac40(param_1,*puVar19,uVar8,uVar7);
        FUN_140545790(uVar10,auStack_a00);
        equipment_supplier_0x70b90(auStack_a00," pts");
        uVar33 = uStack_c80;
        equipment_supplier_0xbc750(0x14266c870,*(int *)(param_1 + 0x768) + 1,uStack_c80 + -0xf);
        FUN_140af3400(0x14266c870,auStack_a00,0,0);
        equipment_supplier_0xbc760(0x14266c870,7,0,1);
        iVar28 = *(int *)(param_1 + 0x768);
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1220,(longlong)iVar35);
        uVar7 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70990(param_1 + 0x1208,(longlong)iVar35);
        uVar8 = *puVar19;
        puVar19 = (undefined2 *)equipment_supplier_0x70a70(param_1 + 0x1238,(longlong)iVar35);
        iVar37 = FUN_14105ac40(param_1,*puVar19,uVar8,uVar7);
        if (*(int *)(param_1 + 0x1f4c) < iVar37) {
          puVar31 = (undefined4 *)0x14266e554;
          do {
            lVar13 = 3;
            iVar37 = iVar28;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar37 = iVar37 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            param_1 = lStack_c78;
          } while ((longlong)puVar31 < 0x14266e578);
LAB_141079974:
          iVar35 = (int)uStack_c68;
        }
        else {
          if ((((iStack_c4c < (int)(uVar33 + -6)) || ((int)(uVar33 + -4) < iStack_c4c)) ||
              ((int)uStack_c50 < iVar28)) || (iVar28 + 2 < (int)uStack_c50)) {
            puVar31 = (undefined4 *)0x14266e4e8;
            do {
              lVar13 = 3;
              iVar37 = iVar28;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar37);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                iVar37 = iVar37 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            } while ((longlong)puVar31 < 0x14266e50c);
            goto LAB_141079974;
          }
          if (DAT_1423b2a4c != '\0') {
            puVar31 = (undefined4 *)0x14266e530;
            do {
              lVar13 = 3;
              iVar37 = iVar28;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar37);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                iVar37 = iVar37 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            } while ((longlong)puVar31 < 0x14266e554);
            goto LAB_141079974;
          }
          puVar31 = (undefined4 *)0x14266e50c;
          do {
            lVar13 = 3;
            iVar37 = iVar28;
            do {
              equipment_supplier_0xbc750(0x14266c870,iVar37);
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar37 = iVar37 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            param_1 = lStack_c78;
          } while ((longlong)puVar31 < 0x14266e530);
        }
        uVar33 = uStack_c80;
        iVar37 = uStack_c80 + -3;
        iVar28 = *(int *)(param_1 + 0x768);
        psVar20 = (short *)equipment_supplier_0x70a70(param_1 + 0x1d00,(longlong)iVar35);
        if (*psVar20 < 1) {
          puVar31 = (undefined4 *)0x14266e5e4;
          do {
            lVar13 = 3;
            iVar27 = iVar28;
            do {
              _DAT_14266c8f4 = iVar37;
              _DAT_14266c8f8 = iVar27;
              equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
              iVar27 = iVar27 + 1;
              puVar31 = puVar31 + 1;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar37 = iVar37 + 1;
            param_1 = lStack_c78;
          } while ((longlong)puVar31 < 0x14266e608);
        }
        else {
          if (((iStack_c4c < iVar37) || ((int)(uVar33 + -1) < iStack_c4c)) ||
             (((int)uStack_c50 < iVar28 || (iVar28 + 2 < (int)uStack_c50)))) {
            puVar31 = (undefined4 *)0x14266e578;
            do {
              lVar13 = 3;
              iVar37 = iVar28;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar37);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                iVar37 = iVar37 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            } while ((longlong)puVar31 < 0x14266e59c);
          }
          else {
            if (DAT_1423b2a4c == '\0') {
              puVar31 = (undefined4 *)0x14266e59c;
              do {
                lVar13 = 3;
                iVar37 = iVar28;
                do {
                  equipment_supplier_0xbc750(0x14266c870,iVar37);
                  equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                  iVar37 = iVar37 + 1;
                  puVar31 = puVar31 + 1;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
                param_1 = lStack_c78;
              } while ((longlong)puVar31 < 0x14266e5c0);
              goto LAB_141079b48;
            }
            puVar31 = (undefined4 *)0x14266e5c0;
            do {
              lVar13 = 3;
              iVar37 = iVar28;
              do {
                equipment_supplier_0xbc750(0x14266c870,iVar37);
                equipment_supplier_0xaf4ba0(0x14266c870,*puVar31);
                iVar37 = iVar37 + 1;
                puVar31 = puVar31 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            } while ((longlong)puVar31 < 0x14266e5e4);
          }
          iVar35 = (int)uStack_c68;
        }
LAB_141079b48:
        *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 3;
        equipment_supplier_0x69460(auStack_280);
        uStack_c68 = (ulonglong)(iVar35 + 1U);
        iVar37 = (int)uStack_c10;
        uVar33 = uStack_c80;
        iVar28 = (int)uStack_c20;
      } while ((int)(iVar35 + 1U) < *(int *)(param_1 + 0x748) + (int)uStack_c20);
    }
    iVar37 = equipment_supplier_0x709a0(param_1 + 0x1208);
    if (iVar28 < iVar37) {
      equipment_supplier_0xbc990(auStack_b20);
      iVar37 = equipment_supplier_0x709a0(param_1 + 0x1208);
      uStack_ce0 = 9;
      iStack_ce8 = iVar28;
      uStack_cd8 = (iVar28 + 2) * 3;
      equipment_supplier_0xbc9b0(auStack_b20,*(undefined4 *)(param_1 + 0x75c),0,iVar37 + -1);
      uStack_ce0 = 0;
      iStack_ce8 = CONCAT31(iStack_ce8._1_3_,*(undefined1 *)(param_1 + 0x76e));
      FUN_1414284b0(auStack_b20,iStack_c4c,uStack_c50,uStack_c80 + 1);
    }
    equipment_supplier_0x69460(auStack_a20);
    equipment_supplier_0x69460(auStack_a00);
  }
  uVar32 = uStack_bf8;
  iVar28 = iStack_c58;
  if (*(char *)(param_1 + 0x7f8) != '\0') {
    iVar28 = iStack_c3c * 4;
    iVar27 = iVar28 + (int)uStack_bf8;
    iVar35 = (int)uStack_bf8 + 0xc + iVar28;
    uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar35);
    uStack_c88 = CONCAT44(uStack_c88._4_4_,iVar27 + 0xe);
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar28 + 0x18 + (int)uStack_bf8);
    iStack_c90 = iVar27;
    equipment_supplier_0xbc760(0x14266c870,4,0,1);
    iVar28 = iStack_c58;
    equipment_supplier_0xbc750(0x14266c870,iStack_c58,uVar32 & 0xffffffff);
    FUN_140069780(auStack_240,"Warning!  The following embark profile name is already in use:");
    FUN_140af3400(0x14266c870,auStack_240,0,0);
    equipment_supplier_0x69460(auStack_240);
    equipment_supplier_0xbc760(0x14266c870,3,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,uVar32 & 0xffffffff);
    FUN_140af3400(0x14266c870,param_1 + 0x7d8,0,0);
    iVar37 = iVar27;
    if (iVar27 <= iVar35) {
      do {
        lVar13 = 0;
        iVar35 = (uint)uStack_c38;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar27);
          lVar41 = lVar13 * 4;
          if (iVar27 == iStack_c90) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fd8 + lVar41),0);
          }
          else if (iVar27 == iVar35) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          else {
            while (lVar13 == 1) {
              equipment_supplier_0xaf4570();
              iVar28 = iVar28 + 1;
              equipment_supplier_0xbc750(0x14266c870,iVar28);
              lVar41 = 8;
              lVar13 = 2;
            }
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fe4 + lVar41),0);
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
        iVar27 = iVar27 + 1;
        param_1 = lStack_c78;
        iVar37 = iStack_c90;
        iVar28 = iStack_c58;
      } while (iVar27 <= iVar35);
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,iVar37 + 2);
    FUN_140069780(auStack_220,"Overwrite");
    FUN_140af3400(0x14266c870,auStack_220,0,0);
    equipment_supplier_0x69460(auStack_220);
    iVar37 = iVar37 + 0xe;
    iVar35 = (int)uStack_c68;
    iVar27 = iVar37;
    if (iVar37 <= (int)uStack_c68) {
      do {
        lVar13 = 0;
        do {
          lVar41 = lVar13 * 4;
          _DAT_14266c8f4 = iVar37;
          _DAT_14266c8f8 = iVar28;
          if (iVar37 == iVar27) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fd8 + lVar41),0);
          }
          else if (iVar37 == iVar35) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          else {
            while (_DAT_14266c8f8 = iVar28, lVar13 == 1) {
              _DAT_14266c8f4 = iVar37;
              equipment_supplier_0xaf4570(0x14266c870);
              iVar28 = iVar28 + 1;
              lVar41 = 8;
              lVar13 = 2;
            }
            _DAT_14266c8f4 = iVar37;
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fe4 + lVar41),0);
            iVar35 = (int)uStack_c68;
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
          iVar27 = (int)uStack_c88;
        } while (lVar13 < 3);
        iVar37 = iVar37 + 1;
        param_1 = lStack_c78;
        iVar28 = iStack_c58;
      } while (iVar37 <= iVar35);
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,(int)uStack_c88 + 2);
    FUN_140069780(auStack_200,"Go back");
    FUN_140af3400(0x14266c870,auStack_200,0,0);
    equipment_supplier_0x69460(auStack_200);
  }
  uVar32 = uStack_bf8;
  if ((*(char *)(param_1 + 0x7d1) != '\0') && (*(char *)(param_1 + 0x7f8) == '\0')) {
    iVar37 = (int)uStack_bf8 + iStack_c3c * 4;
    uStack_c38 = CONCAT44(uStack_c38._4_4_,iVar37);
    puStack_c28 = (undefined4 *)CONCAT44(puStack_c28._4_4_,iVar37 + 7);
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar37 + 9);
    iStack_c90 = iVar37 + 0x11;
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28,uVar32 & 0xffffffff);
    FUN_140069780(auStack_1e0,"To save these settings, choose a name for this embark profile:");
    FUN_140af3400(0x14266c870,auStack_1e0,0,0);
    equipment_supplier_0x69460(auStack_1e0);
    equipment_supplier_0xbc760(0x14266c870,3,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,uVar32 & 0xffffffff);
    FUN_140af3400(0x14266c870,param_1 + 0x7d8,0,0);
    uVar33 = GetTickCount();
    uVar11 = uVar33 + (int)((ulonglong)uVar33 / 1000) * -1000;
    if (uVar11 < 500) {
      FUN_1400bc7c0(0x14266c870,CONCAT71((int7)((ulonglong)uVar33 / 1000 >> 8),0x5f),
                    CONCAT71((uint7)(uint3)(uVar11 >> 8),1));
    }
    iVar35 = iVar37 + 9;
    if (iVar37 <= iVar37 + 7) {
      do {
        lVar13 = 0;
        iVar35 = (int)puStack_c28;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar37);
          lVar41 = lVar13 * 4;
          if (iVar37 == (uint)uStack_c38) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fd8 + lVar41),0);
          }
          else if (iVar37 == iVar35) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          else {
            while (lVar13 == 1) {
              equipment_supplier_0xaf4570();
              iVar28 = iVar28 + 1;
              equipment_supplier_0xbc750(0x14266c870,iVar28);
              lVar41 = 8;
              lVar13 = 2;
            }
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fe4 + lVar41),0);
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
        iVar37 = iVar37 + 1;
        iVar28 = iStack_c58;
      } while (iVar37 <= iVar35);
      param_1 = lStack_c78;
      iVar35 = (int)uStack_c68;
      iVar37 = (uint)uStack_c38;
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,iVar37 + 2);
    FUN_140069780(auStack_1c0,"Save");
    FUN_140af3400(0x14266c870,auStack_1c0,0,0);
    equipment_supplier_0x69460(auStack_1c0);
    if (iVar35 <= iVar37 + 0x11) {
      do {
        iVar37 = iStack_c90;
        lVar13 = 0;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar35);
          lVar41 = lVar13 * 4;
          if (iVar35 == (int)uStack_c68) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fd8 + lVar41),0);
          }
          else if (iVar35 == iVar37) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          else {
            while (lVar13 == 1) {
              equipment_supplier_0xaf4570();
              iVar28 = iVar28 + 1;
              equipment_supplier_0xbc750(0x14266c870,iVar28);
              lVar41 = 8;
              lVar13 = 2;
            }
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fe4 + lVar41),0);
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
        iVar35 = iVar35 + 1;
        iVar28 = iStack_c58;
      } while (iVar35 <= iVar37);
      param_1 = lStack_c78;
      iVar35 = (int)uStack_c68;
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,iVar35 + 2);
    FUN_140069780(auStack_1a0,"Abort");
    FUN_140af3400(0x14266c870,auStack_1a0,0,0);
    equipment_supplier_0x69460(auStack_1a0);
  }
  if (*(char *)(param_1 + 0x76d) != '\0') {
    uVar32 = uStack_bf8 & 0xffffffff;
    iStack_c90 = iStack_c3c * 4 + (int)uStack_bf8;
    uStack_c88 = CONCAT44(uStack_c88._4_4_,iStack_c90 + 0xe);
    iStack_c60 = (int)uStack_bf8 + 0x10 + iStack_c3c * 4;
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iStack_c90 + 0x1a);
    iVar37 = 0;
    equipment_supplier_0x70870(param_1 + 0x498,&uStack_b78);
    equipment_supplier_0x70860(param_1 + 0x498,&uStack_b30);
    while (uStack_b78 != uStack_b30) {
      cVar1 = '\x01';
      if (uStack_b78 < uStack_b30) {
        cVar1 = -1;
      }
      if (-1 < cVar1) break;
      plVar14 = (longlong *)equipment_supplier_0x70440(&uStack_b78);
      iVar37 = iVar37 + *(short *)(*plVar14 + 0x2ec);
      equipment_supplier_0x70430(&uStack_b78);
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,uVar32);
    iVar35 = iStack_c60;
    iVar27 = (int)uStack_c88;
    if ((*(int *)(param_1 + 0x1f4c) < 1) && (iVar37 < 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 3;
    }
    FUN_140069780(auStack_180,"Are you sure?");
    FUN_140af3400(0x14266c870,auStack_180,uVar3,0);
    equipment_supplier_0x69460(auStack_180);
    if (0 < *(int *)(param_1 + 0x1f4c)) {
      equipment_supplier_0xbc760(0x14266c870,6,0,1);
      FUN_140069780(auStack_900,"  ");
      FUN_140545610(*(undefined4 *)(param_1 + 0x1f4c),auStack_900);
      equipment_supplier_0x70b90(auStack_900," point");
      if (1 < *(int *)(param_1 + 0x1f4c)) {
        equipment_supplier_0x70b90(auStack_900,"s");
      }
      equipment_supplier_0x70b90(auStack_900," remain");
      if (*(int *)(param_1 + 0x1f4c) == 1) {
        equipment_supplier_0x70b90(auStack_900,"s");
      }
      equipment_supplier_0x70b90(auStack_900,"!");
      uVar40 = 0;
      if (0 < iVar37) {
        uVar40 = 3;
      }
      FUN_140af3400(0x14266c870,auStack_900,uVar40,0);
      equipment_supplier_0x69460(auStack_900);
    }
    if (0 < iVar37) {
      equipment_supplier_0xbc760(0x14266c870,6,0,1);
      FUN_140069780(auStack_8e0,"  ");
      FUN_140545610(iVar37,auStack_8e0);
      equipment_supplier_0x70b90(auStack_8e0," unpicked skill");
      if (1 < iVar37) {
        equipment_supplier_0x70b90(auStack_8e0,"s");
      }
      equipment_supplier_0x70b90(auStack_8e0,"!");
      FUN_140af3400(0x14266c870,auStack_8e0,0,0);
      equipment_supplier_0x69460(auStack_8e0);
    }
    if (iStack_c90 <= iVar27) {
      iVar37 = (int)uStack_c88;
      iVar27 = iStack_c90;
      do {
        lVar13 = 0;
        do {
          lVar41 = lVar13 * 4;
          _DAT_14266c8f8 = iVar28;
          if (iVar27 == iStack_c90) {
            uVar10 = *(undefined4 *)(&DAT_142676fd8 + lVar41);
LAB_14107a696:
            iVar28 = _DAT_14266c8f8;
            _DAT_14266c8f4 = iVar27;
            equipment_supplier_0xaf4ba0(0x14266c870,uVar10,0);
          }
          else {
            if (iVar27 != iVar37) {
              while (uVar10 = *(undefined4 *)(&DAT_142676fe4 + lVar41), _DAT_14266c8f8 = iVar28,
                    lVar13 == 1) {
                _DAT_14266c8f4 = iVar27;
                equipment_supplier_0xaf4570(0x14266c870,uVar10);
                iVar28 = iVar28 + 1;
                lVar41 = 8;
                lVar13 = 2;
              }
              goto LAB_14107a696;
            }
            _DAT_14266c8f4 = iVar27;
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
        iVar27 = iVar27 + 1;
        param_1 = lStack_c78;
        iVar28 = iStack_c58;
        iVar35 = iStack_c60;
      } while (iVar27 <= iVar37);
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar28 + 1,iStack_c90 + 2);
    FUN_140069780(auStack_160,"I am ready!");
    FUN_140af3400(0x14266c870,auStack_160,0,0);
    equipment_supplier_0x69460(auStack_160);
    iVar37 = iVar35;
    if (iVar35 <= (int)uStack_c68) {
      do {
        lVar13 = 0;
        iVar27 = (int)uStack_c68;
        do {
          equipment_supplier_0xbc750(0x14266c870,iVar28,iVar35);
          lVar41 = lVar13 * 4;
          if (iVar35 == iStack_c60) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fd8 + lVar41),0);
          }
          else if (iVar35 == iVar27) {
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676ff0 + lVar41),0);
          }
          else {
            while (lVar13 == 1) {
              equipment_supplier_0xaf4570();
              iVar28 = iVar28 + 1;
              equipment_supplier_0xbc750(0x14266c870,iVar28);
              lVar41 = 8;
              lVar13 = 2;
            }
            equipment_supplier_0xaf4ba0(0x14266c870,*(undefined4 *)(&DAT_142676fe4 + lVar41),0);
          }
          iVar28 = iVar28 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < 3);
        iVar35 = iVar35 + 1;
        param_1 = lStack_c78;
        iVar28 = iStack_c58;
        iVar37 = iStack_c60;
      } while (iVar35 <= iVar27);
    }
    _DAT_14266c8fc = 0x1010007;
    _DAT_14266c8f4 = iVar37 + 2;
    _DAT_14266c8f8 = iVar28 + 1;
    FUN_140069780(auStack_140,"Go back");
    FUN_140af3400(0x14266c870,auStack_140,0,0);
    FUN_140070e80(auStack_140);
  }
  if (0 < *(int *)(param_1 + 0x528)) {
    equipment_supplier_0x4287a0(0x1418c3620,&iStack_b8c,&iStack_b88);
    iVar35 = ((iStack_b88 - iStack_b8c) + -0x13) / 2 + iStack_b8c;
    iVar23 = iVar35 + 0x13;
    iVar36 = _DAT_1423efc08 / 2;
    uStack_c68 = CONCAT44(uStack_c68._4_4_,iVar36);
    iVar28 = iVar36 + -1;
    iVar37 = iVar36 + 1;
    iVar21 = iVar35;
    iVar27 = iVar28;
    if (iVar28 <= iVar37) {
      do {
        for (; iVar21 <= iVar23; iVar21 = iVar21 + 1) {
          equipment_supplier_0xbc750(0x14266c870,iVar27,iVar21);
          FUN_1400bc7c0(0x14266c870,0,0);
          if (iVar27 == iVar28) {
            uVar10 = _DAT_14266e194;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1a0, iVar21 == iVar23)) {
              uVar10 = _DAT_14266e1ac;
            }
          }
          else if (iVar27 == iVar37) {
            uVar10 = _DAT_14266e19c;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1a8, iVar21 == iVar23)) {
              uVar10 = _DAT_14266e1b4;
            }
          }
          else {
            uVar10 = _DAT_14266e198;
            if ((iVar21 != iVar35) && (uVar10 = _DAT_14266e1b0, iVar21 != iVar23)) {
              uVar10 = _DAT_14266e1a4;
            }
          }
          equipment_supplier_0xaf4570(0x14266c870,uVar10);
        }
        iVar27 = iVar27 + 1;
        iVar21 = iVar35;
      } while (iVar27 <= iVar37);
      iVar36 = (int)uStack_c68;
    }
    equipment_supplier_0xbc760(0x14266c870,7,0,1);
    equipment_supplier_0xbc750(0x14266c870,iVar36,iVar35 + 2);
    FUN_140069780(auStack_120,"Preparing map...");
    FUN_140af3400(0x14266c870,auStack_120,0,0);
    equipment_supplier_0x69460(auStack_120);
  }
  if (DAT_1418c92f0 != '\0') {
    equipment_supplier_0x4287a0(0x1418c3620,auStack_bb8,auStack_b80);
    uStack_b9c = auStack_bb8[0];
    uStack_b70 = auStack_b80[0];
LAB_14107aaa4:
    FUN_1401e0e90(&DAT_1418c92f0,iStack_c30,uStack_b9c,uStack_b70);
  }
LAB_14107aab3:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_d08);
  return;
}


