/* reference PE:6aea05a1:02734000; artwork-description; RVA 0x146ad80..0x146c370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_artwork_description
               (longlong param_1,longlong *param_2,undefined8 *param_3,char param_4,char param_5,
               char param_6,int param_7,short param_8,int param_9,byte param_10,char param_11)

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  undefined8 ****ppppuVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_228 [32];
  undefined1 *puStack_208;
  uint uStack_200;
  uint uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c0;
  longlong lStack_1b8;
  undefined1 auStack_1b0 [8];
  longlong lStack_1a8;
  char cStack_1a0;
  uint auStack_198 [52];
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_228;
  lStack_1a8 = 0;
  lVar8 = param_2[0x18];
  lStack_1b8 = param_1;
  if (((int)lVar8 != -1) && (param_4 == '\0')) {
    lStack_1a8 = FUN_1400693f0(param_1 + 0x1287c8);
  }
  lVar6 = 0;
  if (((param_9 != -1) && (param_9 != (int)lVar8)) && (param_4 == '\0')) {
    lVar6 = FUN_1400693f0(lStack_1b8 + 0x1287c8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0xf;
  pppuStack_a8 = (undefined8 ****)0x0;
  param_3[2] = 0;
  puVar12 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar12 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar12 = 0;
  uVar19 = 0x18;
  if ((param_5 == '\0') || ((longlong *)param_2[0x19] == (longlong *)0x0)) {
    if (param_7 == 4) {
      uVar18 = 9;
      pcVar13 = "The item ";
LAB_14146b58f:
      FUN_140071040(param_3,pcVar13,uVar18);
    }
    else {
      if (param_7 == 0x10) {
        uVar18 = 0xc;
        pcVar13 = "On the item ";
        goto LAB_14146b58f;
      }
      if (param_7 == 0x11) {
        uVar18 = 0x19;
        pcVar13 = "On the front of the coin ";
        goto LAB_14146b58f;
      }
      if (param_7 == 0x12) {
        uVar18 = 0x13;
        pcVar13 = "On the coin\'s back ";
        goto LAB_14146b58f;
      }
      if (param_7 != 0x13) {
        uVar18 = 3;
        pcVar13 = "It ";
        goto LAB_14146b58f;
      }
      FUN_140071040(param_3,"Engraved ",9);
      if (((longlong *)param_2[0x19] != (longlong *)0x0) &&
         (iVar5 = (**(code **)(*(longlong *)param_2[0x19] + 0x10))(), iVar5 == 7)) {
        if (*(short *)(param_2[0x19] + 8) == 0x2b) {
          uVar18 = 0xd;
          pcVar13 = "on the floor ";
        }
        else {
          uVar18 = 0xc;
          pcVar13 = "on the wall ";
        }
        goto LAB_14146b58f;
      }
    }
    FUN_140071040(param_3,"is a",4);
    lVar8 = lStack_1b8;
    if (((param_5 == '\0') && ((longlong *)param_2[0x19] != (longlong *)0x0)) &&
       (iVar5 = (**(code **)(*(longlong *)param_2[0x19] + 0x10))(), lVar8 = lStack_1b8, iVar5 == 8))
    {
      if (param_8 == 1) {
        pcVar13 = " well-crafted";
LAB_14146b62d:
        uVar18 = 0xd;
LAB_14146b633:
        FUN_140071040(param_3,pcVar13,uVar18);
      }
      else {
        if (param_8 == 2) {
          uVar18 = 5;
          pcVar13 = " fine";
          goto LAB_14146b633;
        }
        if (param_8 == 3) {
          uVar18 = 9;
          pcVar13 = " superior";
          goto LAB_14146b633;
        }
        if (param_8 == 4) {
          pcVar13 = "n exceptional";
          goto LAB_14146b62d;
        }
        if (param_8 == 5) {
          uVar18 = 10;
          pcVar13 = " masterful";
          goto LAB_14146b633;
        }
      }
      if (lVar6 != 0) {
        uStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0xf;
        pppuStack_c8 = (undefined8 ****)0x0;
        if (((*(longlong *)(lVar6 + 0x130) == 0) ||
            (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x58), lVar8 == 0)) ||
           ((*(int *)(lVar8 + 0x30) == -1 || (lVar8 = FUN_140073ba0(0x14250a168), lVar8 == 0)))) {
          lVar8 = lVar6 + 0x38;
        }
        else {
          lVar8 = FUN_140c521e0(lVar8);
        }
        if (((lVar8 != 0) && (*(char *)(lVar8 + 0x72) != '\0')) &&
           (FUN_140aadad0(lVar8,&pppuStack_c8), lStack_b8 != 0)) {
          FUN_140071040(param_3," ",1);
          if (param_11 != '\0') {
            FUN_140071040(param_3,"[LPAGE:HF:",10);
            FUN_140545610(*(undefined4 *)(lVar6 + 0xe0),param_3);
            FUN_140071040(param_3,"]",1);
          }
          ppppuVar15 = &pppuStack_c8;
          if (0xf < uStack_b0) {
            ppppuVar15 = (undefined8 ****)pppuStack_c8;
          }
          FUN_140071040(param_3,ppppuVar15,lStack_b8);
          if (param_11 != '\0') {
            FUN_140071040(param_3,"[/LPAGE]",8);
          }
        }
        FUN_140070e80(&pppuStack_c8);
      }
      FUN_140071040(param_3," rendition of ",0xe);
      if (*(char *)((longlong)param_2 + 0xaa) != '\0') {
        if ((param_11 != '\0') && ((int)param_2[0x1b] != -1)) {
          FUN_140071040(param_3,"[LPAGE:ART_IMAGE:",0x11);
          FUN_140545610((int)param_2[0x1b],param_3);
          FUN_140071040(param_3,":",1);
          FUN_140545610((int)*(short *)((longlong)param_2 + 0xdc),param_3);
          FUN_140071040(param_3,"]",1);
        }
        uStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0xf;
        pppuStack_c8 = (undefined8 ****)0x0;
        FUN_140aae180(param_2 + 7,&pppuStack_c8,1,0);
        ppppuVar15 = &pppuStack_c8;
        if (0xf < uStack_b0) {
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
        }
        FUN_140071040(param_3,ppppuVar15,lStack_b8);
        if ((param_11 != '\0') && ((int)param_2[0x1b] != -1)) {
          FUN_140071040(param_3,"[/LPAGE]",8);
        }
        FUN_140071040(param_3,", ",2);
        FUN_140070e80(&pppuStack_c8);
      }
      uVar18 = 1;
      pcVar13 = "a";
LAB_14146b88f:
      FUN_140071040(param_3,pcVar13,uVar18);
      lVar8 = lStack_1b8;
    }
  }
  else {
    iVar5 = (**(code **)(*(longlong *)param_2[0x19] + 0x10))();
    lVar8 = lStack_1b8;
    if (iVar5 == 0) {
      lVar6 = param_2[0x19];
      FUN_140071040(param_3,"This artwork appears on ",0x18);
      lVar8 = lStack_1b8;
      puVar7 = (undefined4 *)FUN_140073e10(lStack_1b8 + 0x14c90,*(undefined4 *)(lVar6 + 8));
      if (puVar7 == (undefined4 *)0x0) {
        FUN_140071040(param_3,"an unknown artifact",0x13);
      }
      else {
        if (param_11 != '\0') {
          sVar4 = (**(code **)**(undefined8 **)(puVar7 + 0x24))();
          if (((sVar4 == 0x59) ||
              (cVar3 = (**(code **)(**(longlong **)(puVar7 + 0x24) + 0xe0))
                                 (*(longlong **)(puVar7 + 0x24),0x14), cVar3 != '\0')) ||
             (sVar4 = (**(code **)**(undefined8 **)(puVar7 + 0x24))(), sVar4 == 0x57)) {
            pcVar13 = "[LPAGE:BOOK:";
            uVar18 = 0xc;
          }
          else {
            pcVar13 = "[LPAGE:ARTIFACT:";
            uVar18 = 0x10;
          }
          FUN_140071040(param_3,pcVar13,uVar18);
          FUN_140545610(*puVar7,param_3);
          FUN_140071040(param_3,"]",1);
        }
        uStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0xf;
        pppuStack_c8 = (undefined8 ****)0x0;
        FUN_140aadad0(puVar7 + 2,&pppuStack_c8);
        ppppuVar15 = &pppuStack_c8;
        if (0xf < uStack_b0) {
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
        }
        FUN_140071040(param_3,ppppuVar15,lStack_b8);
        if (param_11 != '\0') {
          FUN_140071040(param_3,"[/LPAGE]",8);
        }
        if (0xf < uStack_b0) {
          uVar14 = uStack_b0 + 1;
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
          if (0xfff < uVar14) {
            uVar14 = uStack_b0 + 0x28;
            ppppuVar15 = (undefined8 ****)pppuStack_c8[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_c8 + (-8 - (longlong)ppppuVar15))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar15,uVar14);
        }
      }
      if (param_10 == 0) {
        FUN_140071040(param_3,".[B]",4);
      }
      else {
        FUN_140071040(param_3,".  ",3);
      }
    }
    else {
      if (iVar5 != 5) {
        if (iVar5 == 6) {
          uVar14 = (ulonglong)*(int *)(param_2[0x19] + 8);
          if (((ulonglong)
               (*(longlong *)(lStack_1b8 + 0x2a8) - *(longlong *)(lStack_1b8 + 0x2a0) >> 3) <=
               uVar14) || (*(int *)(param_2[0x19] + 8) < 0)) goto LAB_14146b4a6;
          FUN_140071040(param_3,"This artwork appears ",0x15);
          if ((int)param_2[0x16] == 0x11) {
            uVar18 = 0x10;
            pcVar13 = "on the front of ";
LAB_14146b06f:
            FUN_140071040(param_3,pcVar13,uVar18);
          }
          else if ((int)param_2[0x16] == 0x12) {
            uVar18 = 0xf;
            pcVar13 = "on the back of ";
            goto LAB_14146b06f;
          }
          FUN_1405d7e40(*(undefined8 *)(*(longlong *)(lVar8 + 0x2a0) + uVar14 * 8),param_3);
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x2a0) + uVar14 * 8);
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 1;
          uStack_1d8 = 0xffffffff;
          uStack_1e0 = 0xffffffff;
          uStack_1e8 = 0;
          uStack_1f0 = 1;
          uStack_1f8 = 0;
          uStack_200 = 0xffffffff;
          puStack_208 = (undefined1 *)CONCAT44(puStack_208._4_4_,*(undefined4 *)(lVar8 + 8));
          image_item_noun(param_3,0x4a,0xffffffff,*(undefined2 *)(lVar8 + 4));
          if (param_10 == 0) {
            FUN_140071040(param_3,".[B]",4);
            lVar8 = lStack_1b8;
          }
          else {
            FUN_140071040(param_3,".  ",3);
            lVar8 = lStack_1b8;
          }
          goto LAB_14146b4a6;
        }
        if (iVar5 == 7) {
          pcVar13 = "This engraving appears on a floor ";
          if (*(short *)(param_2[0x19] + 8) != 0x2b) {
            pcVar13 = "This engraving appears on a wall ";
          }
          FUN_140071040(param_3,pcVar13,(*(short *)(param_2[0x19] + 8) == 0x2b) + '!');
          lVar8 = lStack_1b8;
          lVar6 = FUN_14007f150(*(undefined8 *)(lStack_1b8 + 0x11a668),
                                *(undefined4 *)((longlong)param_2 + 0xc4));
          if (lVar6 == 0) {
            FUN_140071040(param_3," somewhere",10);
          }
          else {
            FUN_140071040(param_3,"in ",3);
            if (param_11 != '\0') {
              FUN_140071040(param_3,"[LPAGE:SITE:",0xc);
              FUN_140545610(*(undefined4 *)(lVar6 + 0x88),param_3);
              FUN_140071040(param_3,"]",1);
            }
            uStack_c0 = 0;
            lStack_b8 = 0;
            uStack_b0 = 0xf;
            pppuStack_c8 = (undefined8 ****)0x0;
            FUN_140aadad0(lVar6,&pppuStack_c8);
            ppppuVar15 = &pppuStack_c8;
            if (0xf < uStack_b0) {
              ppppuVar15 = (undefined8 ****)pppuStack_c8;
            }
            FUN_140071040(param_3,ppppuVar15,lStack_b8);
            if (param_11 != '\0') {
              FUN_140071040(param_3,"[/LPAGE]",8);
            }
            FUN_140070e80(&pppuStack_c8);
          }
          goto LAB_14146b2c1;
        }
        if (iVar5 != 8) goto LAB_14146b4a6;
        uVar18 = 0x11;
        pcVar13 = "This artwork is a";
        goto LAB_14146b88f;
      }
      lVar8 = param_2[0x19];
      uVar18 = 0x16;
      if (param_7 != 4) {
        uVar18 = 0x1a;
      }
      pcVar13 = "This work of art is a ";
      if (param_7 != 4) {
        pcVar13 = "This artwork appears on a ";
      }
      FUN_140071040(param_3,pcVar13,uVar18);
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 1;
      uStack_1d8 = 0xffffffff;
      uStack_1e0 = 0xffffffff;
      uStack_1e8 = 0;
      uStack_1f0 = 1;
      uStack_1f8 = 0;
      uStack_200 = 1;
      puStack_208 = (undefined1 *)CONCAT44(puStack_208._4_4_,(int)*(short *)(lVar8 + 0x12));
      image_item_noun(param_3,*(undefined2 *)(lVar8 + 8),*(undefined2 *)(lVar8 + 0xc),
                      *(undefined2 *)(lVar8 + 0x10));
      lVar8 = lStack_1b8;
      lVar6 = FUN_14007f150(*(undefined8 *)(lStack_1b8 + 0x11a668),
                            *(undefined4 *)((longlong)param_2 + 0xc4));
      if (lVar6 != 0) {
        FUN_140071040(param_3," and was crafted in ",0x14);
        if (param_11 != '\0') {
          FUN_140071040(param_3,"[LPAGE:SITE:",0xc);
          FUN_140545610(*(undefined4 *)(lVar6 + 0x88),param_3);
          FUN_140071040(param_3,"]",1);
        }
        uStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0xf;
        pppuStack_c8 = (undefined8 ****)0x0;
        FUN_140aadad0(lVar6,&pppuStack_c8);
        ppppuVar15 = &pppuStack_c8;
        if (0xf < uStack_b0) {
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
        }
        FUN_140071040(param_3,ppppuVar15,lStack_b8);
        if (param_11 != '\0') {
          FUN_140071040(param_3,"[/LPAGE]",8);
        }
        if (0xf < uStack_b0) {
          uVar14 = uStack_b0 + 1;
          ppppuVar15 = (undefined8 ****)pppuStack_c8;
          if (0xfff < uVar14) {
            uVar14 = uStack_b0 + 0x28;
            ppppuVar15 = (undefined8 ****)pppuStack_c8[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_c8 + (-8 - (longlong)ppppuVar15))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar15,uVar14);
        }
      }
LAB_14146b2c1:
      pcVar13 = ".[B]";
      if (param_10 != 0) {
        pcVar13 = ".  ";
      }
      FUN_140071040(param_3,pcVar13,((ulonglong)param_10 ^ 1) + 3);
    }
LAB_14146b4a6:
    FUN_140071040(param_3,"It is a",7);
  }
  if (param_4 == '\0') {
    sVar4 = *(short *)((longlong)param_2 + 0xbc);
    if (sVar4 == 1) {
      pcVar13 = " well-designed";
      uVar19 = 0xe;
    }
    else if (sVar4 == 2) {
      pcVar13 = " finely-designed";
      uVar19 = 0x10;
    }
    else if (sVar4 == 3) {
      pcVar13 = " superiorly designed";
      uVar19 = 0x14;
    }
    else if (sVar4 == 4) {
      pcVar13 = "n exceptionally designed";
    }
    else {
      if (sVar4 != 5) goto LAB_14146b919;
      pcVar13 = " masterfully designed";
      uVar19 = 0x15;
    }
  }
  else {
LAB_14146b919:
    uVar19 = 1;
    pcVar13 = "n";
  }
  FUN_140071040(param_3,pcVar13,uVar19);
  FUN_140071040(param_3," image",6);
  if (param_2[1] - *param_2 >> 3 != 0) {
    FUN_140071040(param_3," of ",4);
    uVar17 = 0;
    lVar6 = *param_2;
    uVar14 = uVar17;
    if (param_2[1] - lVar6 >> 3 != 0) {
      do {
        puStack_208 = (undefined1 *)CONCAT71(puStack_208._1_7_,param_11);
        (**(code **)(**(longlong **)(uVar14 + lVar6) + 0x38))
                  (*(longlong **)(uVar14 + lVar6),&pppuStack_a8,0,param_6);
        ppppuVar15 = &pppuStack_a8;
        if (0xf < uStack_90) {
          ppppuVar15 = (undefined8 ****)pppuStack_a8;
        }
        FUN_140071040(param_3,ppppuVar15);
        iVar5 = (int)(param_2[1] - *param_2 >> 3) + -2;
        iVar16 = (int)uVar17;
        if (iVar16 < iVar5) {
          pcVar13 = ", ";
LAB_14146ba13:
          FUN_140071040(param_3,pcVar13);
        }
        else if (iVar16 == iVar5) {
          pcVar13 = " and ";
          goto LAB_14146ba13;
        }
        uVar17 = (ulonglong)(iVar16 + 1U);
        lVar6 = *param_2;
        uVar14 = uVar14 + 8;
      } while ((ulonglong)(longlong)(int)(iVar16 + 1U) < (ulonglong)(param_2[1] - lVar6 >> 3));
    }
  }
  iVar5 = 0;
  if (*(short *)((longlong)param_2 + 0xb4) != -1) {
    FUN_140071040(param_3," in ",4);
    uStack_1f8 = uStack_1f8 & 0xffff0000;
    uStack_200 = uStack_200 & 0xffffff00;
    puStack_208 = (undefined1 *)((ulonglong)puStack_208 & 0xffffffff00000000);
    image_material_name(lVar8,&pppuStack_a8,*(undefined2 *)((longlong)param_2 + 0xb4),
                        (int)param_2[0x17]);
    ppppuVar15 = &pppuStack_a8;
    if (0xf < uStack_90) {
      ppppuVar15 = (undefined8 ****)pppuStack_a8;
    }
    FUN_140071040(param_3,ppppuVar15,uStack_98);
  }
  lVar6 = lStack_1a8;
  if (lStack_1a8 != 0) {
    uStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0xf;
    pppuStack_c8 = (undefined8 ****)0x0;
    if (((*(longlong *)(lStack_1a8 + 0x130) == 0) ||
        (lVar9 = *(longlong *)(*(longlong *)(lStack_1a8 + 0x130) + 0x58), lVar9 == 0)) ||
       ((*(int *)(lVar9 + 0x30) == -1 || (lVar9 = FUN_140073ba0(0x14250a168), lVar9 == 0)))) {
      lVar9 = lVar6 + 0x38;
    }
    else {
      lVar9 = FUN_140c521e0(lVar9);
    }
    if (((lVar9 != 0) && (*(char *)(lVar9 + 0x72) != '\0')) &&
       (FUN_140aadad0(lVar9,&pppuStack_c8), lStack_b8 != 0)) {
      FUN_140071040(param_3," by ",4);
      if (param_11 != '\0') {
        FUN_140071040(param_3,"[LPAGE:HF:",10);
        FUN_140545610(*(undefined4 *)(lVar6 + 0xe0),param_3);
        FUN_140071040(param_3,"]",1);
      }
      ppppuVar15 = &pppuStack_c8;
      if (0xf < uStack_b0) {
        ppppuVar15 = (undefined8 ****)pppuStack_c8;
      }
      FUN_140071040(param_3,ppppuVar15,lStack_b8);
      if (param_11 != '\0') {
        FUN_140071040(param_3,"[/LPAGE]",8);
      }
    }
    FUN_140070e80(&pppuStack_c8);
  }
  FUN_140071040(param_3,".  ",3);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  pppuStack_88 = (undefined8 ****)0x0;
  lVar6 = param_2[3];
  if (param_2[4] - lVar6 >> 3 != 0) {
    lVar9 = 0;
    do {
      puStack_208 = (undefined1 *)CONCAT71(puStack_208._1_7_,param_11);
      (**(code **)(**(longlong **)(lVar9 + lVar6) + 0x28))
                (*(longlong **)(lVar9 + lVar6),&pppuStack_88,param_2,param_6);
      ppppuVar15 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar15 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_3,ppppuVar15,uStack_78);
      iVar5 = iVar5 + 1;
      lVar9 = lVar9 + 8;
      lVar6 = param_2[3];
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_2[4] - lVar6 >> 3));
  }
  lVar6 = lStack_1b8;
  if (param_6 == '\0') goto LAB_14146c32c;
  if (((int)param_2[6] != -1) &&
     (plVar10 = (longlong *)FUN_14007f060(lStack_1b8 + 0x1287c8), lVar8 = lVar6,
     plVar10 != (longlong *)0x0)) {
    uStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0xf;
    pppuStack_c8 = (undefined8 ****)0x0;
    FUN_140071040(param_3,"The artwork relates to ",0x17);
    load_supplier_0x736b0(auStack_198);
    if (param_11 != '\0') {
      auStack_198[0] = auStack_198[0] | 2;
    }
    puStack_208 = (undefined1 *)((ulonglong)puStack_208 & 0xffffffffffffff00);
    (**(code **)(*plVar10 + 0xd8))(plVar10,&pppuStack_c8,auStack_198,1);
    ppppuVar15 = &pppuStack_c8;
    if (0xf < uStack_b0) {
      ppppuVar15 = (undefined8 ****)pppuStack_c8;
    }
    FUN_140071040(param_3,ppppuVar15,lStack_b8);
    lVar8 = *(longlong *)(lVar6 + 0x128840);
    iVar5 = (int)(*(longlong *)(lVar6 + 0x128848) - lVar8 >> 3) + -1;
    if (-1 < iVar5) {
      lVar6 = plVar10[4];
      lVar9 = (longlong)iVar5;
      lStack_1a8._0_4_ = -1;
      iVar5 = (int)lStack_1a8;
      lStack_1a8 = 0xffffffff;
      do {
        plVar10 = *(longlong **)(lVar8 + lVar9 * 8);
        FUN_1400bc210(&lStack_1a8,plVar10 + 1,(int)lVar6);
        iVar16 = iVar5;
        if (cStack_1a0 != '\0') {
          iVar16 = (int)lStack_1a8;
        }
        if (iVar16 != -1) {
          FUN_140071040(param_3," during ",8);
          (**(code **)(*plVar10 + 0x30))(plVar10,&pppuStack_c8);
          ppppuVar15 = &pppuStack_c8;
          if (0xf < uStack_b0) {
            ppppuVar15 = (undefined8 ****)pppuStack_c8;
          }
          FUN_140071040(param_3,ppppuVar15,lStack_b8);
          break;
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    FUN_140071040(param_3,".  ",3);
    FUN_140070e80(&pppuStack_c8);
    lVar8 = lStack_1b8;
  }
  if ((((int)param_2[0x16] != 0x18) || (lVar6 = param_2[0x19], lVar6 == 0)) ||
     (((*(longlong *)(lVar8 + 0x310) - *(longlong *)(lVar8 + 0x308) & 0xfffffffffffffff8U) == 0 ||
      ((((*(int *)(lVar6 + 8) == -1 ||
         (puVar11 = (ushort *)FUN_1400bb6d0(), puVar11 == (ushort *)0x0)) ||
        ((int)(*(longlong *)(puVar11 + 0x760) - *(longlong *)(puVar11 + 0x75c) >> 1) <=
         *(int *)(lVar6 + 0xc))) || (*(int *)(lVar6 + 0xc) < 0)))))) goto LAB_14146c32c;
  FUN_140071040(param_3,"The image ",10);
  sVar4 = *(short *)(*(longlong *)(puVar11 + 0x75c) + (longlong)*(int *)(lVar6 + 0xc) * 2);
  if (sVar4 == 0) {
    uVar19 = 0x10;
    pcVar13 = "is the symbol of";
LAB_14146bed7:
    FUN_140071040(param_3,pcVar13,uVar19);
  }
  else if (sVar4 == 1) {
    uVar19 = 0x13;
    pcVar13 = "was commissioned by";
    goto LAB_14146bed7;
  }
  FUN_140071040(param_3," ",1);
  if (param_11 != '\0') {
    FUN_140071040(param_3,"[LPAGE:ENT:",0xb);
    FUN_140545610(*(undefined4 *)(puVar11 + 2),param_3);
    FUN_140071040(param_3,"]",1);
  }
  if ((char)puVar11[0x49] != '\0') {
    uStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0xf;
    pppuStack_c8 = (undefined8 ****)0x0;
    FUN_140aae180(puVar11 + 0x10,&pppuStack_c8,1,0);
    ppppuVar15 = &pppuStack_c8;
    if (0xf < uStack_b0) {
      ppppuVar15 = (undefined8 ****)pppuStack_c8;
    }
    FUN_140071040(param_3,ppppuVar15,lStack_b8);
    if (param_11 != '\0') {
      FUN_140071040(param_3,"[/LPAGE]",8);
    }
    FUN_140071040(param_3,", ",2);
    if (0xf < uStack_b0) {
      uVar14 = uStack_b0 + 1;
      ppppuVar15 = (undefined8 ****)pppuStack_c8;
      if (0xfff < uVar14) {
        uVar14 = uStack_b0 + 0x28;
        ppppuVar15 = (undefined8 ****)pppuStack_c8[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_c8 + (-8 - (longlong)ppppuVar15))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar15,uVar14);
    }
  }
  FUN_140071040(param_3,"a ",2);
  uVar1 = *puVar11;
  if (uVar1 == 1) {
    uVar19 = 6;
    pcVar13 = "local ";
LAB_14146c056:
    FUN_140071040(param_3,pcVar13,uVar19);
  }
  else {
    if (uVar1 == 3) {
      uVar19 = 10;
      pcVar13 = "migrating ";
      goto LAB_14146c056;
    }
    if (uVar1 == 4) {
      uVar19 = 8;
      pcVar13 = "nomadic ";
      goto LAB_14146c056;
    }
    if (uVar1 == 7) {
      uVar19 = 8;
      pcVar13 = "outcast ";
      goto LAB_14146c056;
    }
  }
  uVar1 = puVar11[0x4c];
  if (uVar1 != 0xffff) {
    uStack_98 = 0;
    ppppuVar15 = &pppuStack_a8;
    if (0xf < uStack_90) {
      ppppuVar15 = (undefined8 ****)pppuStack_a8;
    }
    *(undefined1 *)ppppuVar15 = 0;
    if ((-1 < (short)uVar1) &&
       ((ulonglong)(longlong)(short)uVar1 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
      lVar8 = *(longlong *)(_DAT_14250eee8 + (longlong)(short)uVar1 * 8);
      ppppuVar15 = (undefined8 ****)(lVar8 + 0x60);
      if (&pppuStack_a8 != ppppuVar15) {
        if (0xf < *(ulonglong *)(lVar8 + 0x78)) {
          ppppuVar15 = (undefined8 ****)*ppppuVar15;
        }
        FUN_140070f00(&pppuStack_a8,ppppuVar15,*(undefined8 *)(lVar8 + 0x70));
      }
    }
    ppppuVar15 = &pppuStack_a8;
    if (0xf < uStack_90) {
      ppppuVar15 = (undefined8 ****)pppuStack_a8;
    }
    FUN_140071040(param_3,ppppuVar15,uStack_98);
    FUN_140071040(param_3," ",1);
  }
  if (*puVar11 < 0xb) {
                    /* WARNING: Switch is manually overridden */
    switch(*puVar11) {
    case 0:
      uVar19 = 0xc;
      pcVar13 = "civilization";
      break;
    case 1:
      uVar19 = 10;
      pcVar13 = "government";
      break;
    case 2:
      uVar19 = 6;
      pcVar13 = "vessel";
      break;
    default:
      pcVar13 = "group";
      uVar19 = 5;
      break;
    case 5:
      uVar19 = 8;
      pcVar13 = "religion";
      break;
    case 6:
      uVar19 = 0x15;
      pcVar13 = "military organization";
      break;
    case 8:
      uVar19 = 0x12;
      pcVar13 = "performance troupe";
      break;
    case 9:
      uVar19 = 0x10;
      pcVar13 = "merchant company";
      break;
    case 10:
      for (puVar12 = *(undefined8 **)(puVar11 + 0x50); puVar12 < *(undefined8 **)(puVar11 + 0x54);
          puVar12 = puVar12 + 1) {
        if (*(int *)*puVar12 == 0) {
          sVar4 = (short)((int *)*puVar12)[1];
          if (sVar4 != -1) {
            uStack_c0 = 0;
            lStack_b8 = 0;
            uStack_b0 = 0xf;
            pppuStack_c8 = (undefined8 ****)0x0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0xf;
            uStack_68 = 0;
            uStack_1f0 = 0;
            uStack_1f8 = CONCAT31(uStack_1f8._1_3_,1);
            uStack_200 = CONCAT22(uStack_200._2_2_,0xffff);
            puStack_208 = auStack_1b0;
            image_guild_profession(&pppuStack_c8,&uStack_68,sVar4,_DAT_1423b5afc);
            ppppuVar15 = &pppuStack_c8;
            if (0xf < uStack_b0) {
              ppppuVar15 = (undefined8 ****)pppuStack_c8;
            }
            FUN_140071040(param_3,ppppuVar15,lStack_b8);
            FUN_140070e80(&uStack_68);
            if (0xf < uStack_b0) {
              uVar14 = uStack_b0 + 1;
              ppppuVar15 = (undefined8 ****)pppuStack_c8;
              if (0xfff < uVar14) {
                uVar14 = uStack_b0 + 0x28;
                ppppuVar15 = (undefined8 ****)pppuStack_c8[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_c8 + (-8 - (longlong)ppppuVar15))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              load_supplier_0x15530d0(ppppuVar15,uVar14);
            }
            goto LAB_14146c27d;
          }
          break;
        }
      }
      FUN_140071040(param_3,"craft",5);
LAB_14146c27d:
      FUN_140071040(param_3," guild",6);
      goto LAB_14146c2f7;
    }
    FUN_140071040(param_3,pcVar13,uVar19);
  }
LAB_14146c2f7:
  if (((char)puVar11[0x49] == '\0') && (param_11 != '\0')) {
    FUN_140071040(param_3,"[/LPAGE]",8);
  }
  FUN_140071040(param_3,".  ",3);
LAB_14146c32c:
  FUN_140070e80(&pppuStack_88);
  FUN_140070e80(&pppuStack_a8);
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_228);
  return;
}

