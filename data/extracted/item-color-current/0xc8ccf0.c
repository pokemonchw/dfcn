
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c8ccf0(longlong *param_1,longlong *param_2,undefined1 param_3,char param_4,
                  undefined8 param_5,uint param_6)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  char *pcVar25;
  short sVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  short sVar30;
  short sVar31;
  longlong lVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined1 auStack_248 [32];
  uint uStack_228;
  ulonglong uStack_220;
  uint uStack_218;
  uint uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  uint uStack_1f8;
  undefined1 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e0;
  char cStack_1d8;
  char cStack_1d7;
  undefined1 uStack_1d6;
  longlong *plStack_1d0;
  uint auStack_1c8 [2];
  short asStack_1c0 [4];
  int aiStack_1b8 [2];
  longlong *plStack_1b0;
  uint uStack_1a8;
  longlong *plStack_1a0;
  int *piStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  longlong alStack_180 [4];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  longlong lStack_120;
  longlong lStack_118;
  undefined1 auStack_100 [40];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
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
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_248;
  cStack_1d8 = param_4;
  uStack_1d6 = param_3;
  plStack_1d0 = param_1;
  plStack_1a0 = param_2;
  if (param_4 == '\0') {
    supplier_140070b90(param_2,"[P]");
  }
  sVar6 = (**(code **)*param_1)(param_1);
  bVar35 = false;
  if (sVar6 == 0x36) {
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    cVar3 = supplier_14014ef20(0x14250ed78,uVar9,4);
    bVar35 = false;
    if (cVar3 != '\0') {
      bVar35 = true;
    }
  }
  bVar34 = false;
  sVar6 = (**(code **)*param_1)(param_1);
  bVar33 = false;
  if (sVar6 == 5) {
    bVar34 = true;
    bVar33 = false;
    if ((*(byte *)(param_1 + 2) & 0x20) == 0) {
      bVar33 = true;
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (((((sVar6 == 3) || (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 1)) ||
       (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 2)) ||
      ((sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x3f ||
       (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x5c)))) ||
     (((sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x43 ||
       ((sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x40 ||
        (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x2f)))) ||
      (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x35)))) {
    bVar34 = true;
    bVar33 = true;
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x39) {
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    cVar3 = FUN_141475150(0x1423f3970,0x1e,uVar7,uVar9);
    if ((cVar3 == '\0') && ((*(uint *)(param_1 + 2) & 0x200) == 0)) {
      uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      cVar3 = FUN_141475150(0x1423f3970,0x2f,uVar7,uVar9);
      bVar34 = true;
      if (cVar3 != '\0') {
        bVar33 = true;
      }
    }
    else {
      bVar34 = false;
      bVar33 = false;
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((((sVar6 == 0x3a) || (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x4b)) ||
      (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x49)) ||
     (((sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x46 ||
       (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x47)) ||
      (sVar6 = (**(code **)*param_1)(param_1), sVar6 == 0x30)))) {
    bVar34 = true;
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 4) {
    bVar34 = true;
    sVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((sVar6 == 0) && (iVar10 = (**(code **)(*param_1 + 0x18))(param_1), iVar10 != -1)) {
      bVar33 = false;
    }
    else {
      bVar33 = true;
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0) {
    bVar34 = true;
    sVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    bVar33 = sVar6 != 7;
  }
  cVar3 = (**(code **)(*param_1 + 0x6c0))(param_1);
  if ((cVar3 != '\0') && (*(char *)((longlong)param_1 + 0x13a) != '\0')) {
    bVar34 = true;
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x37) {
    iVar10 = (**(code **)(*param_1 + 0x18))(param_1);
    bVar34 = iVar10 != -1;
  }
  iVar10 = (**(code **)(*param_1 + 0x478))(param_1);
  if (bVar35) {
    iVar10 = (**(code **)(*param_1 + 0x478))(param_1);
    if (iVar10 < 2) {
      pcVar25 = "This is a bundle of";
    }
    else {
      supplier_140070b90(param_2,"These are ");
      uVar9 = (**(code **)(*param_1 + 0x478))(param_1);
      FUN_140545610(uVar9,param_2);
      pcVar25 = " bundles of";
    }
LAB_140c8d0d7:
    supplier_140070b90(param_2,pcVar25);
  }
  else if (iVar10 == 1) {
    pcVar25 = "These are";
    if (!bVar33) {
      pcVar25 = "This is";
    }
    supplier_140070b90(param_2,pcVar25);
    if (!bVar34) {
      supplier_140070b90(param_2," a");
      sVar6 = (**(code **)(*param_1 + 0x508))(param_1);
      if ((sVar6 == 4) && ((*(uint *)(param_1 + 2) & 0x40000) == 0)) {
        pcVar25 = "n";
        goto LAB_140c8d0d7;
      }
    }
  }
  else {
    supplier_140070b90(param_2,"This is a stack of");
    iVar10 = (**(code **)(*param_1 + 0x478))(param_1);
    if (1 < iVar10) {
      supplier_140070b90(param_2," ");
      uVar9 = (**(code **)(*param_1 + 0x478))(param_1);
      FUN_140545610(uVar9,param_2);
    }
  }
  supplier_140070cc0(auStack_140);
  FUN_140c7d140(param_1,auStack_140,1,0xffffffff);
  if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
    sVar6 = (**(code **)*param_1)(param_1);
    if (sVar6 == 0x48) {
      sVar6 = (**(code **)(*param_1 + 0x508))();
      if (sVar6 == 1) {
        pcVar25 = " well-prepared";
      }
      else if (sVar6 == 2) {
        pcVar25 = " finely-prepared";
      }
      else if (sVar6 == 3) {
        pcVar25 = " superiorly prepared";
      }
      else if (sVar6 == 4) {
        pcVar25 = " exceptional prepared";
      }
      else {
        if (sVar6 != 5) goto LAB_140c8d1c8;
        pcVar25 = " masterfully prepared";
      }
    }
    else {
      sVar6 = (**(code **)(*param_1 + 0x508))(param_1);
      if (sVar6 == 1) {
        pcVar25 = " well-crafted";
      }
      else if (sVar6 == 2) {
        pcVar25 = " finely-crafted";
      }
      else if (sVar6 == 3) {
        pcVar25 = " superior quality";
      }
      else if (sVar6 == 4) {
        pcVar25 = " exceptional";
      }
      else {
        if (sVar6 != 5) goto LAB_140c8d1c8;
        pcVar25 = " masterful";
      }
    }
    supplier_140070b90(param_2,pcVar25);
  }
LAB_140c8d1c8:
  supplier_140070b90(param_2," ");
  supplier_1400bb340(param_2,auStack_140);
  if (((*(uint *)(param_1 + 2) & 0x8000000) == 0) &&
     (sVar6 = (**(code **)(*param_1 + 0x508))(param_1), sVar6 == 5)) {
    uVar9 = (**(code **)(*param_1 + 0x1e8))(param_1);
    lVar13 = FUN_1400693f0(0x14251c138,uVar9);
    if (lVar13 == 0) {
      supplier_140070b90(param_2," created by an unknown artisan");
    }
    else {
      supplier_140070b90(param_2," created by ");
      if ((param_6 & 2) != 0) {
        supplier_140070b90(param_2,"[LPAGE:HF:");
        FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
        supplier_140070b90(param_2,"]");
      }
      lVar13 = FUN_140c27320(lVar13);
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
        FUN_140aadad0(lVar13,auStack_140);
      }
      supplier_1400bb340(param_2,auStack_140);
      if ((param_6 & 2) != 0) {
        supplier_140070b90(param_2,"[/LPAGE]");
      }
    }
  }
  supplier_140070b90(param_2,".  ");
  if ((*(uint *)(param_1 + 2) & 0x8000000) != 0) {
    supplier_140070b90(param_2,"All ");
    supplier_140070cc0(alStack_180);
    uVar7 = (**(code **)(*param_1 + 0x590))(param_1);
    cVar3 = supplier_1401bdae0(0x14250eec8,uVar7,0x19);
    if (cVar3 == '\0') {
      supplier_140070bb0(alStack_180,"craftsman");
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x590))(param_1);
      uStack_220 = uStack_220 & 0xffffffffffffff00;
      uStack_228 = uStack_228 & 0xffffff00;
      FUN_1401bdb30(0x14250eec8,alStack_180,uVar7,0x19);
    }
    supplier_1400bb340(param_2,alStack_180);
    supplier_140070b90(param_2,"ship is of the highest quality.  ");
    supplier_140069460(alStack_180);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((((sVar6 == 0x19) || (sVar6 == 0x1a)) || (sVar6 == 0x1c)) ||
     ((sVar6 == 0x1d || (sVar6 == 0x3c)))) {
    sVar6 = (**(code **)(*param_1 + 0x590))(param_1);
    supplier_140ae67e0(asStack_1c0,aiStack_1b8);
    if ((sVar6 != -1) && (sVar6 != asStack_1c0[0])) {
      supplier_140070b90(param_2,"It is sized for ");
      supplier_140070cc0(auStack_160);
      FUN_140abd670(sVar6,auStack_160,1,0xffffffff);
      supplier_1400bb340(param_2,auStack_160);
      supplier_140070b90(param_2,".  ");
      supplier_140069460(auStack_160);
    }
  }
  (**(code **)(*param_1 + 0x230))(param_1,&piStack_198,&uStack_188);
  if (piStack_198 != (int *)0x0) {
    if (*piStack_198 == -1) {
      FUN_140ce01c0(param_1,0xffffffff,0xffffffff,0xffffffff);
      if ((int)param_1[10] != -1) {
        FUN_140ce00d0(param_1);
      }
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0x7fffffff;
      if (*piStack_198 == -1) goto LAB_140c8d554;
    }
    lVar13 = FUN_14146c4a0(0x1423f3970,piStack_198,uStack_188);
    if (lVar13 != 0) {
      supplier_140070cc0(alStack_180);
      uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
      uStack_200 = CONCAT31(uStack_200._1_3_,param_4);
      uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
      uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
      uStack_218 = 4;
      uStack_220 = CONCAT71(uStack_220._1_7_,param_3);
      uStack_228 = uStack_228 & 0xffffff00;
      FUN_14146ad80(0x1423f3970,lVar13,alStack_180,0);
      uVar14 = supplier_140070960(alStack_180);
      if ((uVar14 < 0x50) || (param_4 != '\0')) {
        supplier_1400bb340(param_2,alStack_180);
      }
      else {
        supplier_140070b90(param_2,"[R]");
        supplier_1400bb340(param_2,alStack_180);
        supplier_140070b90(param_2,"[R]");
      }
      supplier_140069460(alStack_180);
    }
  }
LAB_140c8d554:
  sVar6 = (**(code **)*param_1)(param_1);
  uVar14 = 0;
  if (sVar6 == 0x48) {
    supplier_140070b90(param_2,"The ingredients are ");
    plVar22 = param_1 + 0x1c;
    iVar10 = supplier_140070480(plVar22);
joined_r0x000140c8d58f:
    iVar10 = iVar10 + -1;
    cVar3 = cStack_1d8;
    if (-1 < iVar10) {
      do {
        lVar13 = (longlong)iVar10;
        plVar15 = (longlong *)supplier_140070850(plVar22,lVar13);
        sVar6 = *(short *)(*plVar15 + 0x10);
        if (sVar6 == 1) {
          pcVar25 = "well-";
LAB_140c8d5f9:
          supplier_140070b90(param_2,pcVar25);
        }
        else {
          if (sVar6 == 2) {
            pcVar25 = "finely ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 3) {
            pcVar25 = "superiorly ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 4) {
            pcVar25 = "exceptionally ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 5) {
            pcVar25 = "masterfully ";
            goto LAB_140c8d5f9;
          }
        }
        puVar16 = (undefined8 *)supplier_140070850(plVar22,lVar13);
        pcVar25 = "cooked ";
        if (*(short *)*puVar16 == 0) {
          pcVar25 = "minced ";
        }
        supplier_140070b90(param_2,pcVar25);
        plVar15 = (longlong *)supplier_140070850(plVar22,lVar13);
        uVar28 = *(uint *)(*plVar15 + 8);
        plVar15 = (longlong *)supplier_140070850(plVar22,lVar13);
        uVar7 = *(undefined2 *)(*plVar15 + 6);
        plVar15 = (longlong *)supplier_140070850(plVar22,lVar13);
        uVar1 = *(undefined2 *)(*plVar15 + 4);
        plVar15 = (longlong *)supplier_140070850(plVar22,lVar13);
        uStack_1e0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 1;
        uStack_1f8 = 0xffffffff;
        uStack_200 = 0xffffffff;
        uStack_208 = 0;
        uStack_210 = uStack_210 & 0xffffff00;
        uStack_218 = 0;
        uStack_220 = CONCAT44(uStack_220._4_4_,1);
        uStack_228 = uVar28;
        FUN_140a9c6b0(auStack_140,*(undefined2 *)(*plVar15 + 2),uVar1,uVar7);
        supplier_1400bb340(param_2,auStack_140);
        if (1 < iVar10) {
          pcVar25 = ", ";
          goto LAB_140c8d6f7;
        }
        if (iVar10 != 1) goto LAB_140c8d6f0;
        supplier_140070b90(param_2," and ");
        iVar10 = 0;
      } while( true );
    }
    goto LAB_140c8d71c;
  }
  cVar5 = (**(code **)(*param_1 + 0x5a8))(param_1);
  cVar3 = cStack_1d8;
  if (cVar5 != '\0') {
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
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
    param_1 = param_1 + 0x1a;
    lVar13 = supplier_140070480(param_1);
    uVar21 = uStack_d0 & 0xffff;
    sVar31 = (short)uStack_d0;
    uVar19 = uVar14;
    sVar6 = uStack_d0._6_2_;
    sVar26 = uStack_d0._4_2_;
    sVar30 = uStack_d0._2_2_;
    if (lVar13 != 0) {
      do {
        puVar16 = (undefined8 *)supplier_140070850(param_1,uVar14);
        iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
        if (iVar10 == 1) {
          plVar22 = (longlong *)supplier_140070850(param_1,uVar14);
          lVar13 = *plVar22;
          if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
            if (*(short *)(lVar13 + 8) == 0) {
              cVar3 = FUN_141475150(0x1423f3970,0x2f,0,*(undefined4 *)(lVar13 + 0xc));
              if (cVar3 == '\0') {
                cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(lVar13 + 8),
                                      *(undefined4 *)(lVar13 + 0xc));
                if ((cVar3 != '\0') ||
                   (cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(lVar13 + 8),
                                          *(undefined4 *)(lVar13 + 0xc)), cVar3 != '\0'))
                goto LAB_140c8d8f5;
                uVar8 = (short)uVar21 + 1;
                uVar21 = (ulonglong)uVar8;
                uStack_d0 = CONCAT62(uStack_d0._2_6_,uVar8);
              }
              else {
                uStack_d0._0_4_ = CONCAT22(sVar30 + 1,(undefined2)uStack_d0);
                sVar30 = sVar30 + 1;
              }
            }
            else {
LAB_140c8d8f5:
              uStack_d0._0_6_ = CONCAT24(sVar26 + 1,(undefined4)uStack_d0);
              sVar26 = sVar26 + 1;
            }
          }
          else {
            uStack_d0 = CONCAT26(sVar6 + 1,(undefined6)uStack_d0);
            sVar6 = sVar6 + 1;
          }
        }
        else {
          puVar16 = (undefined8 *)supplier_140070850(param_1,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          *(short *)(&uStack_d8 + iVar10) = *(short *)(&uStack_d8 + iVar10) + 1;
          uVar21 = uStack_d0 & 0xffff;
          sVar6 = uStack_d0._6_2_;
          sVar26 = uStack_d0._4_2_;
          sVar30 = uStack_d0._2_2_;
        }
        sVar31 = (short)uVar21;
        uVar28 = (int)uVar19 + 1;
        uVar14 = (ulonglong)(int)uVar28;
        uVar18 = supplier_140070480(param_1);
        param_2 = plStack_1a0;
        uVar19 = (ulonglong)uVar28;
      } while (uVar14 < uVar18);
    }
    plVar22 = plStack_1d0;
    if ((((0 < sVar31) || (0 < sVar30)) || (0 < sVar26)) || ((0 < sVar6 || (0 < (short)uStack_c0))))
    {
      cVar3 = '\x01';
      auStack_1c8[0] = (uint)(0 < sVar31);
      if (0 < sVar30) {
        auStack_1c8[0] = auStack_1c8[0] + 1;
      }
      if (0 < sVar26) {
        auStack_1c8[0] = auStack_1c8[0] + 1;
      }
      if (0 < sVar6) {
        auStack_1c8[0] = auStack_1c8[0] + 1;
      }
      if (0 < (short)uStack_c0) {
        auStack_1c8[0] = auStack_1c8[0] + 1;
      }
      cStack_1d7 = '\x01';
      uVar29 = 0;
      plVar20 = plStack_1d0 + 0x1a;
      plVar15 = &uStack_d0;
      uVar28 = auStack_1c8[0];
      do {
        uVar14 = 0;
        asStack_1c0[0] = (short)*plVar15;
        if (0 < asStack_1c0[0]) {
          plStack_1b0 = plVar15;
          if (cVar3 != '\0') {
            supplier_140070b90(param_2,"It is ");
            cStack_1d7 = '\0';
          }
          if (uVar29 == 0) {
            pcVar25 = "encrusted with";
LAB_140c8da31:
            supplier_140070b90(param_2,pcVar25);
          }
          else {
            if (uVar29 == 1) {
              pcVar25 = "studded with";
              goto LAB_140c8da31;
            }
            if (uVar29 == 2) {
              pcVar25 = "decorated with";
              goto LAB_140c8da31;
            }
            if (uVar29 == 3) {
              pcVar25 = "glazed with";
              goto LAB_140c8da31;
            }
          }
          supplier_140070b90(param_2," ");
          aiStack_1b8[0] = 0;
          lVar13 = supplier_140070480(plVar20);
          if (lVar13 != 0) {
            do {
              puVar16 = (undefined8 *)supplier_140070850(plVar20,uVar14);
              iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
              if (iVar10 == 1) {
                plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                lVar13 = *plVar15;
                if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
                  if (uVar29 < 3) {
                    plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                    if (*(short *)(*plVar15 + 8) == 0) {
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar15 + 8),uVar9);
                      if (cVar3 == '\0') {
                        plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                        uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                        plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                        cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(*plVar15 + 8),uVar9);
                        if (cVar3 == '\0') {
                          plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                          uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                          plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                          cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(*plVar15 + 8),uVar9
                                               );
                          if ((cVar3 == '\0') && (uVar29 == 0)) goto LAB_140c8dcd0;
                        }
                      }
                    }
                    plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                    if (*(short *)(*plVar15 + 8) == 0) {
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar15 + 8),uVar9);
                      if (cVar3 == '\0') {
                        plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                        uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                        plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                        cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(*plVar15 + 8),uVar9);
                        if (cVar3 == '\0') {
                          plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                          uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                          plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                          cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(*plVar15 + 8),uVar9
                                               );
                          if (cVar3 == '\0') goto LAB_140c8dc56;
                        }
                        if (uVar29 == 2) goto LAB_140c8dcd0;
                      }
                    }
LAB_140c8dc56:
                    plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                    if (*(short *)(*plVar15 + 8) == 0) {
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                      plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar15 + 8),uVar9);
                      if ((cVar3 != '\0') && (uVar29 == 1)) goto LAB_140c8dcd0;
                    }
                    plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                    if (*(short *)(*plVar15 + 8) == 0) goto LAB_140c8df5f;
                    bVar35 = uVar29 == 2;
                    goto LAB_140c8dcca;
                  }
                }
                else {
                  bVar35 = uVar29 == 3;
LAB_140c8dcca:
                  if (!bVar35) goto LAB_140c8df5f;
                }
LAB_140c8dcd0:
                if ((*(uint *)(plVar22 + 2) & 0x8000000) == 0) {
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  sVar6 = *(short *)(*plVar15 + 0x18);
                  if (uVar29 == 3) {
                    if (sVar6 == 1) {
                      pcVar25 = "well-prepared ";
                    }
                    else if (sVar6 == 2) {
                      pcVar25 = "finely-prepared ";
                    }
                    else if (sVar6 == 3) {
LAB_140c8dd22:
                      pcVar25 = "superior quality ";
                    }
                    else if (sVar6 == 4) {
                      pcVar25 = "exceptionally prepared ";
                    }
                    else {
                      if (sVar6 != 5) goto LAB_140c8dd80;
                      pcVar25 = "masterfully prepared ";
                    }
                  }
                  else if (sVar6 == 1) {
                    pcVar25 = "well-crafted ";
                  }
                  else if (sVar6 == 2) {
                    pcVar25 = "finely-crafted ";
                  }
                  else {
                    if (sVar6 == 3) goto LAB_140c8dd22;
                    if (sVar6 == 4) {
                      pcVar25 = "exceptionally worked ";
                    }
                    else {
                      if (sVar6 != 5) goto LAB_140c8dd80;
                      pcVar25 = "masterfully worked ";
                    }
                  }
                  supplier_140070b90(param_2,pcVar25);
                }
LAB_140c8dd80:
                supplier_140070cc0(alStack_180);
                uVar28 = *(uint *)(lVar13 + 0x2c);
                if (uVar28 == 0xffffffff) {
LAB_140c8dde7:
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  uStack_218 = uStack_218 & 0xffff0000;
                  uStack_220 = uStack_220 & 0xffffffffffffff00;
                  uStack_228 = 0;
                  FUN_1414eab90(0x1423f3970,alStack_180,*(undefined2 *)(*plVar15 + 8),uVar9);
                }
                else {
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  uStack_218 = 0;
                  uStack_220 = CONCAT44(uStack_220._4_4_,0xffffffff);
                  uStack_228 = uVar28;
                  cVar3 = FUN_1414fb130(0x1423f3970,alStack_180,*(undefined2 *)(*plVar15 + 8),uVar9)
                  ;
                  if (cVar3 == '\0') goto LAB_140c8dde7;
                }
                supplier_1400bb340(param_2,alStack_180);
                if (((*(uint *)(plVar22 + 2) & 0x8000000) == 0) &&
                   (plVar15 = (longlong *)supplier_140070850(plVar20,uVar14),
                   *(short *)(*plVar15 + 0x18) == 5)) {
                  plVar15 = (longlong *)supplier_140070850(plVar20,uVar14);
                  lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar15 + 0x10));
                  if (lVar13 == 0) {
                    pcVar25 = " by an unknown artist";
                  }
                  else {
                    supplier_140070b90(param_2," by ");
                    if ((param_6 & 2) != 0) {
                      supplier_140070b90(param_2,"[LPAGE:HF:");
                      FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                      supplier_140070b90(param_2,"]");
                    }
                    lVar13 = FUN_140c27320(lVar13);
                    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                      FUN_140aadad0(lVar13,alStack_180);
                    }
                    supplier_1400bb340(param_2,alStack_180);
                    if ((param_6 & 2) == 0) goto LAB_140c8df1b;
                    pcVar25 = "[/LPAGE]";
                  }
                  supplier_140070b90(param_2,pcVar25);
                }
LAB_140c8df1b:
                asStack_1c0[0] = asStack_1c0[0] + -1;
                *(short *)plStack_1b0 = asStack_1c0[0];
                if (asStack_1c0[0] < 2) {
                  if (0 < asStack_1c0[0]) {
                    pcVar25 = " and ";
                    goto LAB_140c8df48;
                  }
                }
                else {
                  pcVar25 = ", ";
LAB_140c8df48:
                  supplier_140070b90(param_2,pcVar25);
                }
                supplier_140069460(alStack_180);
              }
LAB_140c8df5f:
              aiStack_1b8[0] = aiStack_1b8[0] + 1;
              uVar14 = (ulonglong)aiStack_1b8[0];
              uVar19 = supplier_140070480(plVar20);
              plVar15 = plStack_1b0;
              uVar28 = auStack_1c8[0];
            } while (uVar14 < uVar19);
          }
          uVar28 = uVar28 - 1;
          if ((int)uVar28 < 2) {
            pcVar25 = " and ";
            if ((int)uVar28 < 1) {
              pcVar25 = ".  ";
            }
          }
          else {
            pcVar25 = ", ";
          }
          auStack_1c8[0] = uVar28;
          supplier_140070b90(param_2,pcVar25);
          cVar3 = cStack_1d7;
        }
        iVar10 = 0;
        uVar29 = uVar29 + 1;
        plVar15 = (longlong *)((longlong)plVar15 + 2);
      } while ((int)uVar29 < 4);
      uVar14 = uStack_c0 & 0xffff;
      plStack_1b0 = plVar15;
      if (0 < (short)uStack_c0) {
        if (cVar3 != '\0') {
          supplier_140070b90(param_2,"It is ");
        }
        supplier_140070b90(param_2,"encircled with bands of ");
        plVar15 = plStack_1d0;
        plVar22 = plStack_1d0 + 0x1a;
        lVar13 = supplier_140070480(plVar22);
        if (lVar13 != 0) {
          uVar19 = 0;
          do {
            puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar19);
            iVar12 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
            if (iVar12 == 3) {
              plVar20 = (longlong *)supplier_140070850(plVar22,uVar19);
              lVar13 = *plVar20;
              if ((*(uint *)(plVar15 + 2) & 0x8000000) == 0) {
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                sVar6 = *(short *)(*plVar15 + 0x18);
                if (sVar6 == 1) {
                  pcVar25 = "well-crafted ";
                }
                else if (sVar6 == 2) {
                  pcVar25 = "finely-crafted ";
                }
                else if (sVar6 == 3) {
                  pcVar25 = "superior quality ";
                }
                else if (sVar6 == 4) {
                  pcVar25 = "exceptionally worked ";
                }
                else {
                  if (sVar6 != 5) goto LAB_140c8e0b3;
                  pcVar25 = "masterfully worked ";
                }
                supplier_140070b90(param_2,pcVar25);
              }
LAB_140c8e0b3:
              supplier_140070cc0(alStack_180);
              uVar28 = *(uint *)(lVar13 + 0x28);
              if (uVar28 == 0xffffffff) {
LAB_140c8e115:
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                FUN_1414eab90(0x1423f3970,alStack_180,*(undefined2 *)(*plVar15 + 8),uVar9);
              }
              else {
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                uVar9 = *(undefined4 *)(*plVar15 + 0xc);
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                uStack_218 = 0;
                uStack_220 = CONCAT44(uStack_220._4_4_,0xffffffff);
                uStack_228 = uVar28;
                cVar3 = FUN_1414fb130(0x1423f3970,alStack_180,*(undefined2 *)(*plVar15 + 8),uVar9);
                if (cVar3 == '\0') goto LAB_140c8e115;
              }
              supplier_1400bb340(param_2,alStack_180);
              plVar15 = plStack_1d0;
              if (((*(uint *)(plStack_1d0 + 2) & 0x8000000) == 0) &&
                 (plVar20 = (longlong *)supplier_140070850(plVar22,uVar19),
                 *(short *)(*plVar20 + 0x18) == 5)) {
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar15 + 0x10));
                plVar15 = plStack_1d0;
                if (lVar13 != 0) {
                  supplier_140070b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                    supplier_140070b90(param_2,"]");
                  }
                  lVar13 = FUN_140c27320(lVar13);
                  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar13,alStack_180);
                  }
                  supplier_1400bb340(param_2,alStack_180);
                  plVar15 = plStack_1d0;
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[/LPAGE]");
                    plVar15 = plStack_1d0;
                  }
                }
              }
              uVar8 = (short)uVar14 - 1;
              uVar14 = (ulonglong)uVar8;
              if ((short)uVar8 < 2) {
                if (0 < (short)uVar8) {
                  pcVar25 = " and ";
                  goto LAB_140c8e265;
                }
              }
              else {
                pcVar25 = ", ";
LAB_140c8e265:
                supplier_140070b90(param_2,pcVar25);
              }
              supplier_140069460(alStack_180);
            }
            iVar10 = iVar10 + 1;
            uVar19 = (ulonglong)iVar10;
            uVar21 = supplier_140070480(plVar22);
            uVar28 = auStack_1c8[0];
          } while (uVar19 < uVar21);
        }
        if ((int)(uVar28 - 1) < 2) {
          pcVar25 = " and ";
          if ((int)(uVar28 - 1) < 1) {
            pcVar25 = ".  ";
          }
        }
        else {
          pcVar25 = ", ";
        }
        supplier_140070b90(param_2,pcVar25);
      }
    }
    plVar22 = plStack_1d0;
    uVar14 = 0;
    if (0 < (short)uStack_a0) {
      plVar15 = plStack_1d0 + 0x1a;
      plStack_1b0 = plVar15;
      lVar13 = supplier_140070480(plVar15);
      uVar19 = uVar14;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 7) {
            supplier_140070cc0(auStack_160);
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uVar28 = *(uint *)(*plVar20 + 0x10);
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uVar9 = *(undefined4 *)(*plVar20 + 0xc);
            plVar15 = (longlong *)supplier_140070850(plVar15,uVar14);
            uVar7 = *(undefined2 *)(*plVar15 + 8);
            lVar13 = plVar22[2];
            plVar22 = (longlong *)supplier_140070850(plStack_1b0,uVar14);
            uStack_210 = param_6;
            uStack_220 = CONCAT44(uStack_220._4_4_,uVar9);
            uStack_228 = CONCAT22(uStack_228._2_2_,uVar7);
            uStack_218 = uVar28;
            FUN_140cc4a60(0x1424078d0,auStack_160,*(undefined1 *)(*plVar22 + 0x18),
                          ~(byte)((uint)(int)lVar13 >> 0x1b) & 1);
            supplier_1400bb340(param_2,auStack_160);
            supplier_140069460(auStack_160);
            plVar15 = plStack_1b0;
            plVar22 = plStack_1d0;
          }
          uVar28 = (int)uVar19 + 1;
          uVar14 = (ulonglong)(int)uVar28;
          uVar21 = supplier_140070480(plVar15);
          uVar19 = (ulonglong)uVar28;
        } while (uVar14 < uVar21);
      }
    }
    plVar22 = plStack_1d0;
    uVar14 = 0;
    if (0 < (short)uStack_a8) {
      plVar15 = plStack_1d0 + 0x1a;
      lVar13 = supplier_140070480(plVar15);
      uVar19 = uVar14;
      uVar21 = uVar14;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar19);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 6) {
            plVar22 = (longlong *)supplier_140070850(plVar15,uVar19);
            lVar13 = *plVar22;
            supplier_140070cc0(auStack_160);
            uStack_220 = lVar13 + 0x40;
            uStack_210 = param_6;
            uStack_218 = *(uint *)(lVar13 + 0x30);
            uStack_228 = *(uint *)(lVar13 + 0x2c);
            FUN_140cc4f60(0x1424078d0,auStack_160,*(undefined1 *)(lVar13 + 0x34),
                          *(undefined2 *)(lVar13 + 0x28));
            supplier_1400bb340(param_2,auStack_160);
            uStack_1a8 = uStack_1a8 & 0xff;
            if (*(short *)(lVar13 + 0x28) != -1) {
              uStack_1a8 = 1;
            }
            supplier_140069460(auStack_160);
          }
          uVar28 = (int)uVar21 + 1;
          uVar18 = supplier_140070480(plVar15);
          uVar19 = (longlong)(int)uVar28;
          plVar22 = plStack_1d0;
          uVar21 = (ulonglong)uVar28;
        } while ((ulonglong)(longlong)(int)uVar28 < uVar18);
      }
    }
    if (0 < (short)uStack_68) {
      plVar15 = plVar22 + 0x1a;
      lVar13 = supplier_140070480(plVar15);
      uVar19 = uVar14;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 0xe) {
            plVar22 = (longlong *)supplier_140070850(plVar15,uVar14);
            lVar13 = *plVar22;
            supplier_140070cc0(auStack_160);
            uStack_220 = lVar13 + 0x40;
            uStack_210 = param_6;
            uStack_218 = *(uint *)(lVar13 + 0x30);
            uStack_228 = *(uint *)(lVar13 + 0x2c);
            FUN_140cc59a0(0x1424078d0,auStack_160,*(undefined1 *)(lVar13 + 0x34),
                          *(undefined2 *)(lVar13 + 0x28));
            supplier_1400bb340(param_2,auStack_160);
            uVar4 = (char)uStack_1a8;
            if (*(short *)(lVar13 + 0x28) != -1) {
              uVar4 = 1;
            }
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,uVar4);
            supplier_140069460(auStack_160);
          }
          uVar28 = (int)uVar19 + 1;
          uVar14 = (ulonglong)(int)uVar28;
          uVar21 = supplier_140070480(plVar15);
          plVar22 = plStack_1d0;
          uVar19 = (ulonglong)uVar28;
        } while (uVar14 < uVar21);
      }
    }
    if (0 < (short)uStack_80) {
      uVar19 = 0;
      plVar15 = plVar22 + 0x1a;
      lVar13 = supplier_140070480(plVar15);
      uVar14 = uVar19;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 0xb) {
            supplier_140070b90(param_2,"The ");
            sVar6 = (**(code **)*plVar22)(plVar22);
            if (sVar6 == 0xd) {
              lVar13 = plVar22[0x1d];
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
              lVar32 = *plVar20;
              supplier_140070870(lVar13 + 200,aiStack_1b8);
              supplier_140070860(lVar13 + 200,&plStack_1b0);
              puVar23 = (undefined1 *)supplier_140070450(aiStack_1b8,&cStack_1d7,&plStack_1b0);
              cVar3 = supplier_140066de0(*puVar23,0);
              while (cVar3 != '\0') {
                puVar16 = (undefined8 *)supplier_140070440(aiStack_1b8);
                cVar3 = FUN_140071470(*puVar16,lVar32 + 0x28);
                if (cVar3 != '\0') {
                  plVar20 = (longlong *)supplier_140070440(aiStack_1b8);
                  supplier_1400bb340(param_2,*plVar20 + 0x48);
                  plVar20 = (longlong *)supplier_140070440(aiStack_1b8);
                  pcVar25 = " are made from ";
                  if ((*(byte *)(*plVar20 + 0x88) & 2) == 0) {
                    pcVar25 = " is made from ";
                  }
                  supplier_140070b90(param_2,pcVar25);
                }
                supplier_140070430(aiStack_1b8);
                puVar23 = (undefined1 *)supplier_140070450(aiStack_1b8,&cStack_1d7,&plStack_1b0);
                cVar3 = supplier_140066de0(*puVar23,0);
              }
            }
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            sVar6 = *(short *)(*plVar20 + 0x18);
            if (sVar6 == 1) {
              pcVar25 = "well-crafted ";
LAB_140c8e751:
              supplier_140070b90(param_2,pcVar25);
            }
            else {
              if (sVar6 == 2) {
                pcVar25 = "finely-crafted ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 3) {
                pcVar25 = "superior quality ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 4) {
                pcVar25 = "exceptionally worked ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 5) {
                pcVar25 = "masterfully worked ";
                goto LAB_140c8e751;
              }
            }
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uVar9 = *(undefined4 *)(*plVar20 + 0xc);
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uStack_218 = uStack_218 & 0xffff0000;
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(*plVar20 + 8),uVar9);
            supplier_1400bb340(param_2,auStack_140);
            if (((*(uint *)(plVar22 + 2) & 0x8000000) == 0) &&
               (plVar20 = (longlong *)supplier_140070850(plVar15,uVar14),
               *(short *)(*plVar20 + 0x18) == 5)) {
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
              lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar20 + 0x10));
              if (lVar13 != 0) {
                supplier_140070b90(param_2," by ");
                if ((param_6 & 2) != 0) {
                  supplier_140070b90(param_2,"[LPAGE:HF:");
                  FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                  supplier_140070b90(param_2,"]");
                }
                lVar13 = FUN_140c27320(lVar13);
                if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                  FUN_140aadad0(lVar13,auStack_140);
                }
                supplier_1400bb340(param_2,auStack_140);
                if ((param_6 & 2) != 0) {
                  supplier_140070b90(param_2,"[/LPAGE]");
                }
              }
            }
            supplier_140070b90(param_2,".  ");
          }
          uVar28 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar28;
          uVar21 = supplier_140070480(plVar15);
          uVar14 = (longlong)(int)uVar28;
        } while ((ulonglong)(longlong)(int)uVar28 < uVar21);
      }
    }
    if (0 < (short)uStack_b0) {
      iVar10 = 0;
      plVar15 = plVar22 + 0x1a;
      lVar13 = supplier_140070480(plVar15);
      if (lVar13 != 0) {
        uVar14 = 0;
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar14);
          iVar12 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar12 == 5) {
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            iVar12 = *(int *)(*plVar20 + 0x28);
            if (iVar12 == 0) {
              pcVar25 = "The handle is made from ";
LAB_140c8e938:
              supplier_140070b90(param_2,pcVar25);
            }
            else {
              if (iVar12 == 1) {
                pcVar25 = "The rollers are made from ";
                goto LAB_140c8e938;
              }
              if (iVar12 == 2) {
                pcVar25 = "The rope is ";
                goto LAB_140c8e938;
              }
              if (iVar12 == 3) {
                pcVar25 = "The chain is ";
                goto LAB_140c8e938;
              }
            }
            if ((*(uint *)(plVar22 + 2) & 0x8000000) == 0) {
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
              sVar6 = *(short *)(*plVar20 + 0x18);
              if (sVar6 == 1) {
                pcVar25 = "well-crafted ";
              }
              else if (sVar6 == 2) {
                pcVar25 = "finely-crafted ";
              }
              else if (sVar6 == 3) {
                pcVar25 = "superior quality ";
              }
              else if (sVar6 == 4) {
                pcVar25 = "exceptionally worked ";
              }
              else {
                if (sVar6 != 5) goto LAB_140c8e9a8;
                pcVar25 = "masterfully worked ";
              }
              supplier_140070b90(param_2,pcVar25);
            }
LAB_140c8e9a8:
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uVar9 = *(undefined4 *)(*plVar20 + 0xc);
            plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
            uStack_218 = uStack_218 & 0xffff0000;
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(*plVar20 + 8),uVar9);
            supplier_1400bb340(param_2,auStack_140);
            if (((*(uint *)(plVar22 + 2) & 0x8000000) == 0) &&
               (plVar20 = (longlong *)supplier_140070850(plVar15,uVar14),
               *(short *)(*plVar20 + 0x18) == 5)) {
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar14);
              lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar20 + 0x10));
              if (lVar13 != 0) {
                supplier_140070b90(param_2," by ");
                if ((param_6 & 2) != 0) {
                  supplier_140070b90(param_2,"[LPAGE:HF:");
                  FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                  supplier_140070b90(param_2,"]");
                }
                lVar13 = FUN_140c27320(lVar13);
                if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                  FUN_140aadad0(lVar13,auStack_140);
                }
                supplier_1400bb340(param_2,auStack_140);
                if ((param_6 & 2) != 0) {
                  supplier_140070b90(param_2,"[/LPAGE]");
                }
              }
            }
            supplier_140070b90(param_2,".  ");
          }
          iVar10 = iVar10 + 1;
          uVar14 = (ulonglong)iVar10;
          uVar19 = supplier_140070480(plVar15);
        } while (uVar14 < uVar19);
      }
    }
    sVar6 = (short)uStack_b8;
    uVar14 = uStack_c8 & 0xffff;
    if ((0 < (short)uStack_c8) || (0 < (short)uStack_b8)) {
      uVar28 = (uint)(0 < (short)uStack_c8);
      if (0 < (short)uStack_b8) {
        uVar28 = uVar28 + 1;
      }
      cVar3 = '\x01';
      auStack_1c8[0] = uVar28;
      if (0 < (short)uStack_c8) {
        supplier_140070b90(param_2,"This object ");
        cStack_1d7 = '\0';
        supplier_140070b90(param_2,"is adorned with hanging rings of ");
        uVar21 = 0;
        plVar15 = plStack_1d0 + 0x1a;
        lVar13 = supplier_140070480(plVar15);
        plVar22 = plStack_1d0;
        uVar19 = uVar21;
        cVar3 = '\0';
        if (lVar13 != 0) {
          do {
            puVar16 = (undefined8 *)supplier_140070850(plVar15,uVar21);
            iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
            if (iVar10 == 2) {
              if ((*(uint *)(plVar22 + 2) & 0x8000000) == 0) {
                plVar20 = (longlong *)supplier_140070850(plVar15,uVar21);
                sVar6 = *(short *)(*plVar20 + 0x18);
                if (sVar6 == 1) {
                  pcVar25 = "well-crafted ";
                }
                else if (sVar6 == 2) {
                  pcVar25 = "finely-crafted ";
                }
                else if (sVar6 == 3) {
                  pcVar25 = "superior quality ";
                }
                else if (sVar6 == 4) {
                  pcVar25 = "exceptionally worked ";
                }
                else {
                  if (sVar6 != 5) goto LAB_140c8ec15;
                  pcVar25 = "masterfully worked ";
                }
                supplier_140070b90(param_2,pcVar25);
              }
LAB_140c8ec15:
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar21);
              uVar9 = *(undefined4 *)(*plVar20 + 0xc);
              plVar20 = (longlong *)supplier_140070850(plVar15,uVar21);
              uStack_218 = uStack_218 & 0xffff0000;
              uStack_220 = uStack_220 & 0xffffffffffffff00;
              uStack_228 = 0;
              FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(*plVar20 + 8),uVar9);
              supplier_1400bb340(param_2,auStack_140);
              if (((*(uint *)(plVar22 + 2) & 0x8000000) == 0) &&
                 (plVar20 = (longlong *)supplier_140070850(plVar15,uVar21),
                 *(short *)(*plVar20 + 0x18) == 5)) {
                plVar20 = (longlong *)supplier_140070850(plVar15,uVar21);
                lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar20 + 0x10));
                if (lVar13 != 0) {
                  supplier_140070b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                    supplier_140070b90(param_2,"]");
                  }
                  lVar13 = FUN_140c27320(lVar13);
                  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar13,auStack_140);
                  }
                  supplier_1400bb340(param_2,auStack_140);
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[/LPAGE]");
                  }
                }
              }
              uVar8 = (short)uVar14 - 1;
              uVar14 = (ulonglong)uVar8;
              if ((short)uVar8 < 2) {
                if ((short)uVar8 < 1) goto LAB_140c8ed64;
                pcVar25 = " and ";
              }
              else {
                pcVar25 = ", ";
              }
              supplier_140070b90(param_2,pcVar25);
            }
LAB_140c8ed64:
            uVar28 = (int)uVar19 + 1;
            uVar21 = (ulonglong)(int)uVar28;
            uVar18 = supplier_140070480(plVar15);
            uVar19 = (ulonglong)uVar28;
          } while (uVar21 < uVar18);
          sVar6 = (short)uStack_b8;
          cVar3 = cStack_1d7;
        }
        uVar28 = auStack_1c8[0] - 1;
        if ((int)uVar28 < 2) {
          pcVar25 = " and ";
          if ((int)uVar28 < 1) {
            pcVar25 = ".  ";
          }
        }
        else {
          pcVar25 = ", ";
        }
        auStack_1c8[0] = uVar28;
        supplier_140070b90(param_2,pcVar25);
      }
      if (0 < sVar6) {
        if (cVar3 != '\0') {
          supplier_140070b90(param_2,"This object ");
        }
        supplier_140070b90(param_2,"menaces with spikes of ");
        plVar15 = plStack_1d0;
        uVar19 = 0;
        plVar22 = plStack_1d0 + 0x1a;
        lVar13 = supplier_140070480(plVar22);
        uVar14 = uVar19;
        if (lVar13 != 0) {
          do {
            puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar19);
            iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
            if (iVar10 == 4) {
              if ((*(uint *)(plVar15 + 2) & 0x8000000) == 0) {
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                sVar26 = *(short *)(*plVar15 + 0x18);
                if (sVar26 == 1) {
                  pcVar25 = "well-crafted ";
                }
                else if (sVar26 == 2) {
                  pcVar25 = "finely-crafted ";
                }
                else if (sVar26 == 3) {
                  pcVar25 = "superior quality ";
                }
                else if (sVar26 == 4) {
                  pcVar25 = "exceptionally worked ";
                }
                else {
                  if (sVar26 != 5) goto LAB_140c8ee96;
                  pcVar25 = "masterfully worked ";
                }
                supplier_140070b90(param_2,pcVar25);
              }
LAB_140c8ee96:
              plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
              uVar9 = *(undefined4 *)(*plVar15 + 0xc);
              plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
              uStack_218 = uStack_218 & 0xffff0000;
              uStack_220 = uStack_220 & 0xffffffffffffff00;
              uStack_228 = 0;
              FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(*plVar15 + 8),uVar9);
              supplier_1400bb340(param_2,auStack_140);
              plVar15 = plStack_1d0;
              if (((*(uint *)(plStack_1d0 + 2) & 0x8000000) == 0) &&
                 (plVar20 = (longlong *)supplier_140070850(plVar22,uVar19),
                 *(short *)(*plVar20 + 0x18) == 5)) {
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar19);
                lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar15 + 0x10));
                plVar15 = plStack_1d0;
                if (lVar13 != 0) {
                  supplier_140070b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar13 + 0xe0),param_2);
                    supplier_140070b90(param_2,"]");
                  }
                  lVar13 = FUN_140c27320(lVar13);
                  if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar13,auStack_140);
                  }
                  supplier_1400bb340(param_2,auStack_140);
                  plVar15 = plStack_1d0;
                  if ((param_6 & 2) != 0) {
                    supplier_140070b90(param_2,"[/LPAGE]");
                    plVar15 = plStack_1d0;
                  }
                }
              }
              sVar6 = sVar6 + -1;
              if (sVar6 < 2) {
                if (sVar6 < 1) goto LAB_140c8efeb;
                pcVar25 = " and ";
              }
              else {
                pcVar25 = ", ";
              }
              supplier_140070b90(param_2,pcVar25);
            }
LAB_140c8efeb:
            uVar28 = (int)uVar14 + 1;
            uVar19 = (ulonglong)(int)uVar28;
            uVar21 = supplier_140070480(plVar22);
            uVar14 = (ulonglong)uVar28;
            uVar28 = auStack_1c8[0];
          } while (uVar19 < uVar21);
        }
        if ((int)(uVar28 - 1) < 2) {
          pcVar25 = " and ";
          if ((int)(uVar28 - 1) < 1) {
            pcVar25 = ".  ";
          }
        }
        else {
          pcVar25 = ", ";
        }
        supplier_140070b90(param_2,pcVar25);
      }
    }
    param_1 = plStack_1d0;
    uVar14 = 0;
    if (0 < (short)uStack_d8) {
      plVar22 = plStack_1d0 + 0x1a;
      lVar13 = supplier_140070480(plVar22);
      uVar19 = uVar14;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 0) {
            puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar14);
            lVar13 = (*(code *)**(undefined8 **)*puVar16)((undefined8 *)*puVar16,param_1);
            if (lVar13 != 0) {
              if ((_DAT_1418be238 == 1) ||
                 (cVar3 = supplier_1400735c0(0x1423b3108,0xf), cVar3 != '\0')) {
                FUN_140bad470(0x14251c138,lVar13);
              }
              supplier_140070cc0(alStack_180);
              cVar3 = cStack_1d8;
              uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
              uStack_200 = CONCAT31(uStack_200._1_3_,cStack_1d8);
              uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
              uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
              uStack_218 = 0x10;
              uStack_220 = CONCAT71(uStack_220._1_7_,uStack_1d6);
              uStack_228 = uStack_228 & 0xffffff00;
              FUN_14146ad80(0x1423f3970,lVar13,alStack_180,(*(uint *)(param_1 + 2) & 0x8000000) != 0
                           );
              if (*(int *)(lVar13 + 0xb0) == 0x18) {
                supplier_140070b90(alStack_180,"It is made from ");
                supplier_140070850(plVar22,uVar14);
                plVar15 = (longlong *)supplier_140070850(plVar22,uVar14);
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(*plVar15 + 8));
                supplier_1400bb340(alStack_180,auStack_140);
                supplier_140070b90(alStack_180,".  ");
              }
              uVar14 = supplier_140070960(alStack_180);
              if ((uVar14 < 0x50) || (cVar3 != '\0')) {
                supplier_1400bb340(param_2,alStack_180);
              }
              else {
                supplier_140070b90(param_2,"[R]");
                supplier_1400bb340(param_2,alStack_180);
                supplier_140070b90(param_2,"[R]");
              }
              supplier_140069460(alStack_180);
            }
          }
          uVar28 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar28;
          uVar14 = (ulonglong)(int)uVar28;
          uVar21 = supplier_140070480(plVar22);
        } while (uVar14 < uVar21);
      }
    }
    uVar14 = 0;
    if ((0 < (short)uStack_98) &&
       (lVar13 = supplier_140070480(param_1 + 0x1a), uVar19 = uVar14, lVar13 != 0)) {
      do {
        puVar16 = (undefined8 *)supplier_140070850(param_1 + 0x1a,uVar14);
        iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
        if (iVar10 == 8) {
          puVar16 = (undefined8 *)supplier_140070850(param_1 + 0x1a,uVar14);
          lVar13 = (*(code *)**(undefined8 **)*puVar16)((undefined8 *)*puVar16,param_1);
          if (lVar13 != 0) {
            if ((_DAT_1418be238 == 1) ||
               (cVar3 = supplier_1400735c0(0x1423b3108,0xf), cVar3 != '\0')) {
              FUN_140bad470(0x14251c138,lVar13);
            }
            supplier_140070cc0(alStack_180);
            uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
            uStack_200 = CONCAT31(uStack_200._1_3_,cStack_1d8);
            uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
            uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
            uStack_218 = 0x10;
            uStack_220 = CONCAT71(uStack_220._1_7_,uStack_1d6);
            uStack_228 = uStack_228 & 0xffffff00;
            FUN_14146ad80(0x1423f3970,lVar13,alStack_180,(*(uint *)(param_1 + 2) & 0x8000000) != 0);
            plVar22 = (longlong *)supplier_140070850(param_1 + 0x1a,uVar14);
            lVar32 = *plVar22;
            cVar3 = FUN_141475150(0x1423f3970,0x18,*(undefined2 *)(lVar32 + 8),
                                  *(undefined4 *)(lVar32 + 0xc));
            if (((cVar3 == '\0') &&
                (cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(lVar32 + 8),
                                       *(undefined4 *)(lVar32 + 0xc)), cVar3 == '\0')) &&
               (cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(lVar32 + 8)), cVar3 == '\0'))
            {
              if (*(int *)(lVar13 + 0xb0) == 0x18) {
                supplier_140070b90(alStack_180,"It is made from ");
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)(lVar32 + 8));
                supplier_1400bb340(alStack_180,auStack_140);
                supplier_140070b90(alStack_180,".  ");
              }
            }
            else {
              supplier_140070cc0(&lStack_120);
              uStack_210 = param_6;
              uStack_218 = *(uint *)(lVar32 + 0x38);
              uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(lVar32 + 0xc));
              uStack_228 = CONCAT22(uStack_228._2_2_,*(undefined2 *)(lVar32 + 8));
              FUN_140cc4a60(0x1424078d0,&lStack_120,*(undefined1 *)(lVar32 + 0x3c));
              supplier_1400bb340(alStack_180,&lStack_120);
              if (*(short *)(lVar32 + 0x40) != -1) {
                supplier_140070cc0(auStack_160);
                uStack_220 = lVar32 + 0x58;
                uStack_210 = param_6;
                uStack_218 = *(uint *)(lVar32 + 0x48);
                uStack_228 = *(uint *)(lVar32 + 0x44);
                FUN_140cc4f60(0x1424078d0,auStack_160,*(undefined1 *)(lVar32 + 0x4c));
                supplier_1400bb340(alStack_180,auStack_160);
                supplier_140069460(auStack_160);
              }
              supplier_140069460(&lStack_120);
            }
            uVar14 = supplier_140070960(alStack_180);
            if ((uVar14 < 0x50) || (cStack_1d8 != '\0')) {
              supplier_1400bb340(param_2,alStack_180);
            }
            else {
              supplier_140070b90(param_2,"[R]");
              supplier_1400bb340(param_2,alStack_180);
              supplier_140070b90(param_2,"[R]");
            }
            supplier_140069460(alStack_180);
          }
        }
        uVar28 = (int)uVar19 + 1;
        uVar14 = (ulonglong)(int)uVar28;
        uVar21 = supplier_140070480(param_1 + 0x1a);
        uVar19 = (ulonglong)uVar28;
      } while (uVar14 < uVar21);
    }
    iVar10 = 0;
    if (0 < (short)uStack_70) {
      aiStack_1b8[0] = 0;
      plVar22 = param_1 + 0x1a;
      plStack_190 = plVar22;
      lVar13 = supplier_140070480(plVar22);
      if (lVar13 != 0) {
        uVar14 = 0;
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar14);
          iVar12 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar12 == 0xd) {
            plVar22 = (longlong *)supplier_140070850(plVar22,uVar14);
            lVar13 = FUN_140073ba0(0x14250a498,*(undefined4 *)(*plVar22 + 0x28));
            if (lVar13 == 0) break;
            iVar10 = -1;
            iVar12 = -1;
            iVar11 = -1;
            bVar33 = true;
            bVar35 = true;
            supplier_140070870(lVar13 + 8,auStack_1c8);
            supplier_140070860(lVar13 + 8,&plStack_1b0);
            puVar23 = (undefined1 *)supplier_140070450(auStack_1c8,&cStack_1d7,&plStack_1b0);
            cVar3 = supplier_140066de0(*puVar23,0);
            if (cVar3 != '\0') {
              do {
                if ((iVar10 == -1) ||
                   (plVar22 = (longlong *)supplier_140070440(auStack_1c8),
                   *(int *)(*plVar22 + 0xc) < iVar10)) {
                  plVar22 = (longlong *)supplier_140070440(auStack_1c8);
                  iVar10 = *(int *)(*plVar22 + 0xc);
                }
                if ((iVar12 == -1) ||
                   (plVar22 = (longlong *)supplier_140070440(auStack_1c8),
                   iVar12 < *(int *)(*plVar22 + 0xc))) {
                  plVar22 = (longlong *)supplier_140070440(auStack_1c8);
                  iVar12 = *(int *)(*plVar22 + 0xc);
                }
                puVar16 = (undefined8 *)supplier_140070440(auStack_1c8);
                if (iVar11 == -1) {
                  iVar11 = *(int *)*puVar16;
                }
                else {
                  bVar35 = bVar33;
                  if (*(int *)*puVar16 != iVar11) {
                    bVar33 = false;
                    bVar35 = false;
                  }
                }
                supplier_140070430(auStack_1c8);
                puVar23 = (undefined1 *)supplier_140070450(auStack_1c8,&cStack_1d7,&plStack_1b0);
                cVar3 = supplier_140066de0(*puVar23,0);
                param_2 = plStack_1a0;
              } while (cVar3 != '\0');
            }
            bVar33 = true;
            if (((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) &&
               ((*(longlong *)(_DAT_142407590 + 0xa98) == 0 ||
                ((lVar32 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218),
                 lVar32 == 0 || (*(int *)(lVar32 + 4) < 1)))))) {
              bVar33 = false;
            }
            supplier_140070cc0(&lStack_120);
            uVar27 = supplier_140070480(lVar13 + 8);
            FUN_140547840(uVar27,&lStack_120);
            supplier_140070cc0(alStack_180);
            if (*(int *)(lVar13 + 4) == 0) {
              supplier_140070b90(alStack_180,"On the faces of the object are ");
            }
            if ((bVar35) && (iVar11 != -1)) {
              if (iVar11 == 0) {
                supplier_140070b90(alStack_180,"a series of ");
                supplier_1400bb340(alStack_180,&lStack_120);
                pcVar25 = " images";
                goto LAB_140c8f977;
              }
              if (iVar11 == 1) {
                supplier_140070b90(alStack_180,"a series of ");
                supplier_1400bb340(alStack_180,&lStack_120);
                supplier_140070b90(alStack_180," words");
                if (!bVar33) {
                  pcVar25 = " which you cannot read";
                  goto LAB_140c8f977;
                }
              }
              else {
                if (iVar11 == 2) {
                  supplier_140070b90(alStack_180,"a series of ");
                  supplier_1400bb340(alStack_180,&lStack_120);
                  pcVar25 = " symbols";
                  goto LAB_140c8f977;
                }
                if (iVar11 == 3) {
                  supplier_140070b90(alStack_180,"dots");
                  if ((iVar10 != -1) && (iVar12 != iVar10)) {
                    supplier_140070b90(alStack_180,", ranging from ");
                    supplier_140070cc0(auStack_160);
                    FUN_140547840(iVar10,auStack_160);
                    supplier_1400bb340(alStack_180,auStack_160);
                    supplier_140070b90(alStack_180," to ");
                    supplier_140070cc0(auStack_100);
                    FUN_140547840(iVar12,auStack_100);
                    supplier_1400bb340(alStack_180,auStack_100);
                    supplier_140069460(auStack_100);
                    supplier_140069460(auStack_160);
                  }
                }
                else if (((iVar11 == 4) && (supplier_140070b90(alStack_180,"numbers"), iVar10 != -1)
                         ) && (iVar12 != iVar10)) {
                  supplier_140070b90(alStack_180,", ranging from ");
                  supplier_140070cc0(auStack_100);
                  FUN_140547840(iVar10,auStack_100);
                  supplier_1400bb340(alStack_180,auStack_100);
                  supplier_140070b90(alStack_180," to ");
                  supplier_140070cc0(auStack_160);
                  FUN_140547840(iVar12,auStack_160);
                  supplier_1400bb340(alStack_180,auStack_160);
                  supplier_140069460(auStack_160);
                  supplier_140069460(auStack_100);
                }
              }
            }
            else {
              supplier_140070b90(alStack_180,"a series of ");
              supplier_1400bb340(alStack_180,&lStack_120);
              pcVar25 = " images and symbols";
LAB_140c8f977:
              supplier_140070b90(alStack_180,pcVar25);
            }
            supplier_140070b90(alStack_180,".");
            supplier_1400bb340(param_2,alStack_180);
            param_1 = plStack_1d0;
            if ((*(int *)(lVar13 + 4) == 0) && (bVar33)) {
              iVar10 = (**(code **)(*plStack_1d0 + 0x750))(plStack_1d0);
              if ((-1 < iVar10) &&
                 ((iVar12 = supplier_140070480(lVar13 + 8), iVar10 < iVar12 &&
                  ((*(byte *)(param_1 + 2) & 0x21) != 0)))) {
                supplier_140070b90(param_2,"  ");
                supplier_140070b90(param_2,"The upward face is ");
                supplier_140070cc0(auStack_100);
                puVar16 = (undefined8 *)supplier_140070850(lVar13 + 8,(longlong)iVar10);
                FUN_140877150(*puVar16,auStack_100);
                supplier_1400bb340(param_2,auStack_100);
                supplier_140070b90(param_2,".");
                supplier_140069460(auStack_100);
              }
            }
            supplier_140069460(alStack_180);
            supplier_140069460(&lStack_120);
            plVar22 = plStack_190;
            iVar10 = aiStack_1b8[0];
          }
          iVar10 = iVar10 + 1;
          uVar14 = (ulonglong)iVar10;
          aiStack_1b8[0] = iVar10;
          uVar19 = supplier_140070480(plVar22);
        } while (uVar14 < uVar19);
      }
    }
    uVar14 = 0;
    if (0 < (short)uStack_78) {
      plVar22 = param_1 + 0x1a;
      lVar13 = supplier_140070480(plVar22);
      uVar19 = uVar14;
      if (lVar13 != 0) {
        do {
          puVar16 = (undefined8 *)supplier_140070850(plVar22,uVar14);
          iVar10 = (**(code **)(*(longlong *)*puVar16 + 0x28))();
          if (iVar10 == 0xc) {
            plVar15 = (longlong *)supplier_140070850(plVar22,uVar14);
            lVar13 = *plVar15;
            lVar32 = supplier_1400709a0(lVar13 + 0x28);
            if (lVar32 != 0) {
              if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
                if ((*(longlong *)(_DAT_142407590 + 0xa98) == 0) ||
                   ((lVar32 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218),
                    lVar32 == 0 || (*(int *)(lVar32 + 4) < 1)))) {
                  if (cStack_1d8 != '\0') {
                    supplier_140070b90(param_2,"  ");
                    supplier_140070b90(param_2,"There is writing on this item, but you cannot read."
                                      );
                    goto LAB_140c8fc74;
                  }
                  supplier_140070b90(param_2,"[R]");
                  supplier_140070b90(param_2,"There is writing on this item, but you cannot read.");
                  pcVar25 = "[R]";
                }
                else {
                  if ((_DAT_1418be238 != 1) || (_DAT_142407590 == 0)) goto LAB_140c8fb8d;
                  lVar32 = supplier_1413cc070();
                  if ((lVar32 != 0) &&
                     ((*(longlong *)(lVar32 + 0x130) != 0 &&
                      (lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x40), lVar32 != 0))))
                  {
                    puVar24 = (undefined4 *)supplier_140070990(lVar13 + 0x28,0);
                    iVar10 = FUN_1400bb5a0(*puVar24,lVar32 + 0x20);
                    if (iVar10 != -1) goto LAB_140c8fb8d;
                  }
                  if (cStack_1d8 != '\0') {
                    supplier_140070b90(param_2,"  ");
                    supplier_140070b90(param_2,
                                       "There is writing on this item which you have not read.");
                    goto LAB_140c8fc74;
                  }
                  supplier_140070b90(param_2,"[R]");
                  supplier_140070b90(param_2,
                                     "There is writing on this item which you have not read.");
                  pcVar25 = "[R]";
                }
              }
              else {
LAB_140c8fb8d:
                if (cStack_1d8 == '\0') {
                  supplier_140070b90(param_2,"[R]");
                  FUN_140cde700(lVar13,param_2,param_6);
                  pcVar25 = "[R]";
                }
                else {
                  supplier_140070b90(param_2,"  ");
                  FUN_140cde700(lVar13,param_2,param_6);
LAB_140c8fc74:
                  pcVar25 = "  ";
                }
              }
              supplier_140070b90(param_2,pcVar25);
            }
          }
          uVar28 = (int)uVar19 + 1;
          uVar14 = (ulonglong)(int)uVar28;
          uVar21 = supplier_140070480(plVar22);
          param_1 = plStack_1d0;
          uVar19 = (ulonglong)uVar28;
        } while (uVar14 < uVar21);
      }
    }
    sVar6 = (**(code **)*param_1)(param_1);
    cVar3 = cStack_1d8;
    if ((sVar6 == 0x3a) && ((char)uStack_1a8 == '\0')) {
      iVar10 = (**(code **)(*param_1 + 0x6b0))(param_1);
      cVar3 = cStack_1d8;
      if ((-1 < iVar10) &&
         (iVar12 = supplier_140070480(&DAT_142519538), cVar3 = cStack_1d8, iVar10 < iVar12)) {
        supplier_140070b90(param_2,"The material is ");
        plVar22 = (longlong *)supplier_140070850(&DAT_142519538,(longlong)iVar10);
        supplier_1400bb340(param_2,*plVar22 + 0x50);
        supplier_140070b90(param_2,".");
        cVar3 = cStack_1d8;
        if (cStack_1d8 == '\0') {
          supplier_140070b90(param_2,"[R]");
        }
        else {
          supplier_140070b90(param_2,"  ");
        }
      }
    }
  }
LAB_140c8d71c:
  uVar14 = 0;
  sVar6 = (**(code **)*param_1)(param_1);
  plVar22 = plStack_1d0;
  if ((sVar6 == 0x59) &&
     (lVar13 = plStack_1d0[0x1a], param_1 = plVar22, plStack_1d0[0x1b] - lVar13 >> 3 != 0)) {
    lVar32 = 0;
    uVar19 = uVar14;
    do {
      iVar10 = (**(code **)(**(longlong **)(lVar32 + lVar13) + 0x28))();
      if (iVar10 == 9) {
        plVar15 = (longlong *)supplier_140070850(plVar22 + 0x1a,uVar14);
        lVar13 = *plVar15;
        lVar17 = supplier_1400709a0(lVar13 + 0x30);
        cVar3 = cStack_1d8;
        if (lVar17 == 0) {
          if (cStack_1d8 == '\0') {
            supplier_140070b90(param_2,"[R]");
            pcVar25 = "The pages are blank.";
LAB_140c8fec7:
            supplier_140070b90(param_2,pcVar25);
            supplier_140070b90(param_2,"[R]");
          }
          else {
            supplier_140070b90(param_2,"  ");
            pcVar25 = "The pages are blank.";
LAB_140c8fd72:
            supplier_140070b90(param_2,pcVar25);
            supplier_140070b90(param_2,"  ");
          }
        }
        else {
          if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
            if ((*(longlong *)(_DAT_142407590 + 0xa98) == 0) ||
               ((lVar17 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218),
                lVar17 == 0 || (*(int *)(lVar17 + 4) < 1)))) {
              cVar3 = cStack_1d8;
              if (cStack_1d8 != '\0') {
                supplier_140070b90(param_2,"  ");
                pcVar25 = "There is writing in the book, but you cannot read.";
                goto LAB_140c8fd72;
              }
              supplier_140070b90(param_2,"[R]");
              pcVar25 = "There is writing in the book, but you cannot read.";
              goto LAB_140c8fec7;
            }
            if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
              lVar17 = supplier_1413cc070();
              if ((lVar17 != 0) &&
                 ((*(longlong *)(lVar17 + 0x130) != 0 &&
                  (lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x40), lVar17 != 0)))) {
                puVar24 = (undefined4 *)supplier_140070990(lVar13 + 0x30,0);
                iVar10 = FUN_1400bb5a0(*puVar24,lVar17 + 0x20);
                if (iVar10 != -1) goto LAB_140c8fe2e;
              }
              cVar3 = cStack_1d8;
              if (cStack_1d8 != '\0') {
                supplier_140070b90(param_2,"  ");
                pcVar25 = "You have not read this book.";
                goto LAB_140c8fd72;
              }
              supplier_140070b90(param_2,"[R]");
              pcVar25 = "You have not read this book.";
              goto LAB_140c8fec7;
            }
          }
LAB_140c8fe2e:
          if (cStack_1d8 == '\0') {
            supplier_140070b90(param_2,"[R]");
            FUN_140cded10(lVar13,param_2,plVar22 + 0x1d,param_6);
            pcVar25 = "[R]";
          }
          else {
            supplier_140070b90(param_2,"  ");
            FUN_140cded10(lVar13,param_2,plVar22 + 0x1d,param_6);
            pcVar25 = "  ";
          }
          supplier_140070b90(param_2,pcVar25);
          cVar3 = cStack_1d8;
        }
      }
      uVar28 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar28;
      lVar32 = lVar32 + 8;
      lVar13 = plVar22[0x1a];
      uVar14 = (ulonglong)(int)uVar28;
    } while (uVar14 < (ulonglong)(plVar22[0x1b] - lVar13 >> 3));
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x39) {
    if (((short)param_1[0x18] == -1) && ((int)param_1[0x1b] == -1)) {
      iVar10 = (**(code **)(*param_1 + 0x6b0))(param_1);
      if ((-1 < iVar10) && (iVar12 = supplier_140070480(&DAT_142519538), iVar10 < iVar12)) {
        supplier_140070b90(param_2,"The material is ");
        plVar22 = (longlong *)supplier_140070850(&DAT_142519538,(longlong)iVar10);
        supplier_1400bb340(param_2,*plVar22 + 0x50);
        supplier_140070b90(param_2,".");
        if (cVar3 == '\0') {
          supplier_140070b90(param_2,"[R]");
        }
        else {
          supplier_140070b90(param_2,"  ");
        }
      }
    }
    else {
      supplier_140070b90(param_2,"The thread is ");
      uVar8 = FUN_141475520(0x1423f3970,(short)param_1[0x18],
                            *(undefined4 *)((longlong)param_1 + 0xc4));
      uVar28 = *(uint *)(param_1 + 0x1b);
      if (uVar28 == 0xffffffff) {
        uVar28 = (uint)uVar8;
      }
      if ((short)uVar28 == -1) {
        supplier_140070b90(param_2,"gray");
      }
      else {
        plVar22 = (longlong *)supplier_140070850(&DAT_142519538,(longlong)(short)uVar28);
        supplier_1400bb340(param_2,*plVar22 + 0x50);
      }
      if (0 < *(short *)((longlong)param_1 + 0xcc)) {
        supplier_140070b90(param_2,", ");
        sVar6 = *(short *)((longlong)param_1 + 0xcc);
        if (sVar6 == 1) {
          pcVar25 = "well-";
LAB_140c900ff:
          supplier_140070b90(param_2,pcVar25);
        }
        else {
          if (sVar6 == 2) {
            pcVar25 = "finely ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 3) {
            pcVar25 = "superbly ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 4) {
            pcVar25 = "exceptionally ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 5) {
            pcVar25 = "masterfully ";
            goto LAB_140c900ff;
          }
        }
        supplier_140070b90(param_2,"colored");
      }
      lVar13 = supplier_1400709a0(param_1 + 0x1c);
      if (lVar13 == 0) {
        if ((short)param_1[0x18] != -1) {
          supplier_140070b90(param_2," with ");
          uStack_218 = CONCAT22(uStack_218._2_2_,3);
          uStack_220 = uStack_220 & 0xffffffffffffff00;
          uStack_228 = 0;
          FUN_1414eab90(0x1423f3970,auStack_140,(short)param_1[0x18],
                        *(undefined4 *)((longlong)param_1 + 0xc4));
          supplier_1400bb340(param_2,auStack_140);
        }
      }
      else {
        supplier_140067130(&lStack_120);
        supplier_140067130(alStack_180);
        uVar19 = 0;
        iVar10 = supplier_1400709a0(param_1 + 0x1c);
        uVar14 = uVar19;
        if (0 < iVar10) {
          do {
            FUN_14013dfa0(*(undefined4 *)(param_1[0x1c] + uVar14 * 4),
                          *(undefined4 *)(param_1[0x1f] + uVar14 * 4),&lStack_120,alStack_180);
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar14 < (longlong)iVar10);
        }
        FUN_140071040(param_2," with ",6);
        if (1 < (ulonglong)(lStack_118 - lStack_120 >> 2)) {
          supplier_140070b90(param_2,"a mixture of ");
        }
        cVar3 = cStack_1d7;
        iVar10 = (int)(lStack_118 - lStack_120 >> 2);
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          uVar14 = uVar19;
          do {
            supplier_1400697c0(auStack_160,cVar3);
            supplier_1400711b0(auStack_160);
            uStack_218 = CONCAT22(uStack_218._2_2_,3);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            FUN_1414eab90(0x1423f3970,auStack_160,*(undefined2 *)(lStack_120 + uVar14 * 4),
                          *(undefined4 *)(alStack_180[0] + uVar14 * 4));
            supplier_1400bb340(param_2,auStack_160);
            iVar12 = (int)uVar19;
            if (iVar12 < iVar10 + -1) {
              if (2 < lVar13) {
                FUN_140071040(param_2,", ",2);
              }
              if (iVar12 == iVar10 + -2) {
                if (lVar13 == 2) {
                  FUN_140071040(param_2," ",1);
                }
                FUN_140071040(param_2,"and ",4);
              }
            }
            FUN_140070e80(auStack_160);
            uVar19 = (ulonglong)(iVar12 + 1);
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar14 < lVar13);
        }
        FUN_140070d80(alStack_180);
        FUN_140070d80(&lStack_120);
        param_1 = plStack_1d0;
      }
      if ((*(short *)((longlong)param_1 + 0xcc) == 5) &&
         (lVar13 = FUN_1400693f0(0x14251c138,(int)param_1[0x19]), lVar13 != 0)) {
        FUN_140071040(param_2," by ",4);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[LPAGE:HF:",10);
          uVar9 = *(undefined4 *)(lVar13 + 0xe0);
          supplier_140070cc0(auStack_100);
          FUN_140545790(uVar9,auStack_100);
          supplier_1400bb340(param_2,auStack_100);
          FUN_140070e80(auStack_100);
          FUN_140071040(param_2,"]",1);
        }
        lVar32 = supplier_140c272f0(lVar13);
        if (lVar32 == 0) {
          lVar13 = lVar13 + 0x38;
        }
        else {
          lVar13 = FUN_140c521e0(lVar32);
        }
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
          FUN_140aadad0(lVar13,auStack_140);
        }
        supplier_1400bb340(param_2,auStack_140);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[/LPAGE]",8);
        }
      }
      FUN_140071040(param_2,".  ",3);
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x37) {
    if ((*(short *)((longlong)param_1 + 0xc4) == -1) && ((int)param_1[0x1b] == -1)) {
      iVar10 = (**(code **)(*param_1 + 0x6b0))(param_1);
      if ((-1 < iVar10) && (iVar12 = supplier_140070480(&DAT_142519538), iVar10 < iVar12)) {
        supplier_140070b90(param_2,"The material is ");
        plVar22 = (longlong *)supplier_140070850(&DAT_142519538,(longlong)iVar10);
        supplier_1400bb340(param_2,*plVar22 + 0x50);
        supplier_140070b90(param_2,".");
        if (cStack_1d8 == '\0') {
          supplier_140070b90(param_2,"[R]");
        }
        else {
          supplier_140070b90(param_2,"  ");
        }
      }
    }
    else {
      FUN_140071040(param_2,"The material is ",0x10);
      uVar8 = FUN_141475520(0x1423f3970,*(undefined2 *)((longlong)param_1 + 0xc4),(int)param_1[0x19]
                           );
      uVar28 = *(uint *)(param_1 + 0x1b);
      if (uVar28 == 0xffffffff) {
        uVar28 = (uint)uVar8;
      }
      if ((short)uVar28 == -1) {
        FUN_140071040(param_2,"gray",4);
      }
      else {
        supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)(short)uVar28 * 8) +
                                   0x50);
      }
      if (0 < (short)param_1[0x1a]) {
        FUN_140071040(param_2,", ",2);
        sVar6 = (short)param_1[0x1a];
        if (sVar6 == 1) {
          pcVar25 = "well-";
LAB_140c905ff:
          supplier_140070b90(param_2,pcVar25);
        }
        else {
          if (sVar6 == 2) {
            pcVar25 = "finely ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 3) {
            pcVar25 = "superbly ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 4) {
            pcVar25 = "exceptionally ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 5) {
            pcVar25 = "masterfully ";
            goto LAB_140c905ff;
          }
        }
        FUN_140071040(param_2,"colored",7);
      }
      if (param_1[0x1d] - param_1[0x1c] >> 2 == 0) {
        if (*(short *)((longlong)param_1 + 0xc4) != -1) {
          supplier_140070b90(param_2," with ");
          uStack_218 = CONCAT22(uStack_218._2_2_,3);
          uStack_220 = uStack_220 & 0xffffffffffffff00;
          uStack_228 = 0;
          FUN_1414eab90(0x1423f3970,auStack_140,*(undefined2 *)((longlong)param_1 + 0xc4),
                        (int)param_1[0x19]);
          supplier_1400bb340(param_2,auStack_140);
        }
      }
      else {
        supplier_140067130(&lStack_120);
        supplier_140067130(alStack_180);
        uVar19 = 0;
        iVar10 = (int)(param_1[0x1d] - param_1[0x1c] >> 2);
        uVar14 = uVar19;
        if (0 < iVar10) {
          do {
            FUN_14013dfa0(*(undefined4 *)(param_1[0x1c] + uVar14 * 4),
                          *(undefined4 *)(param_1[0x1f] + uVar14 * 4),&lStack_120,alStack_180);
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar14 < (longlong)iVar10);
        }
        FUN_140071040(param_2," with ",6);
        if (1 < (ulonglong)(lStack_118 - lStack_120 >> 2)) {
          FUN_140071040(param_2,"a mixture of ",0xd);
        }
        cVar3 = cStack_1d7;
        iVar10 = (int)(lStack_118 - lStack_120 >> 2);
        lVar13 = (longlong)iVar10;
        if (0 < iVar10) {
          uVar14 = uVar19;
          do {
            supplier_1400697c0(auStack_160,cVar3);
            supplier_1400711b0(auStack_160);
            uStack_218 = CONCAT22(uStack_218._2_2_,3);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            FUN_1414eab90(0x1423f3970,auStack_160,*(undefined2 *)(lStack_120 + uVar14 * 4),
                          *(undefined4 *)(alStack_180[0] + uVar14 * 4));
            supplier_1400bb340(param_2,auStack_160);
            iVar12 = (int)uVar19;
            if (iVar12 < iVar10 + -1) {
              if (2 < lVar13) {
                FUN_140071040(param_2,", ",2);
              }
              if (iVar12 == iVar10 + -2) {
                if (lVar13 == 2) {
                  FUN_140071040(param_2," ",1);
                }
                FUN_140071040(param_2,"and ",4);
              }
            }
            FUN_140070e80(auStack_160);
            uVar19 = (ulonglong)(iVar12 + 1);
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar14 < lVar13);
        }
        FUN_140070d80(alStack_180);
        FUN_140070d80(&lStack_120);
        param_1 = plStack_1d0;
      }
      if (((short)param_1[0x1a] == 5) &&
         (lVar13 = FUN_1400693f0(0x14251c138,*(undefined4 *)((longlong)param_1 + 0xcc)), lVar13 != 0
         )) {
        FUN_140071040(param_2," by ",4);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[LPAGE:HF:",10);
          uVar9 = *(undefined4 *)(lVar13 + 0xe0);
          supplier_140070cc0(auStack_100);
          FUN_140545790(uVar9,auStack_100);
          supplier_1400bb340(param_2,auStack_100);
          FUN_140070e80(auStack_100);
          FUN_140071040(param_2,"]",1);
        }
        lVar32 = supplier_140c272f0(lVar13);
        if (lVar32 == 0) {
          lVar13 = lVar13 + 0x38;
        }
        else {
          lVar13 = FUN_140c521e0(lVar32);
        }
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x72) != '\0')) {
          FUN_140aadad0(lVar13,auStack_140);
        }
        supplier_1400bb340(param_2,auStack_140);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[/LPAGE]",8);
        }
      }
      FUN_140071040(param_2,".  ",3);
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  cVar3 = cStack_1d8;
  if (((sVar6 == 0x4a) && (sVar6 = (short)param_1[0x1d], -1 < sVar6)) &&
     ((ulonglong)(longlong)sVar6 < (ulonglong)(_DAT_1423f3c18 - _DAT_1423f3c10 >> 3))) {
    uVar27 = *(undefined8 *)(_DAT_1423f3c10 + (longlong)sVar6 * 8);
    supplier_1400697c0(alStack_180,cStack_1d7);
    supplier_1400711b0(alStack_180);
    FUN_1405d8380(uVar27,alStack_180,uStack_1d6,param_6);
    cVar3 = cStack_1d8;
    if (cStack_1d8 == '\0') {
      FUN_140071040(param_2,"[R]",3);
      supplier_1400bb340(param_2,alStack_180);
      uVar27 = 3;
      pcVar25 = "[R]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      supplier_1400bb340(param_2,alStack_180);
      uVar27 = 2;
      pcVar25 = "  ";
    }
    FUN_140071040(param_2,pcVar25,uVar27);
    FUN_140070e80(alStack_180);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x46) {
    uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1);
    sVar6 = FUN_141475520(0x1423f3970,uVar7,uVar9);
    if (sVar6 != -1) {
      FUN_140071040(param_2,"When used as a dye, it produces ",0x20);
      supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)sVar6 * 8) + 0x50);
      FUN_140071040(param_2,".",1);
      if (cVar3 == '\0') {
        uVar27 = 3;
        pcVar25 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar25 = "  ";
      }
      FUN_140071040(param_2,pcVar25,uVar27);
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((sVar6 == 0x57) && (param_1[0x1f] != 0)) {
    if (((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) &&
       ((lVar13 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218), lVar13 == 0 ||
        (*(int *)(lVar13 + 4) < 1)))) {
      if (cVar3 == '\0') {
        FUN_140071040(param_2,"[R]",3);
        FUN_140071040(param_2,"There is writing on the slab, but you cannot read.",0x32);
        FUN_140071040(param_2,"[R]",3);
      }
      else {
        FUN_140071040(param_2,"  ",2);
        FUN_140071040(param_2,"There is writing on the slab, but you cannot read.",0x32);
        FUN_140071040(param_2,"  ",2);
      }
    }
    else {
      if (cVar3 == '\0') {
        uVar27 = 3;
        pcVar25 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar25 = "  ";
      }
      FUN_140071040(param_2,pcVar25,uVar27);
      FUN_140071040(param_2,"The slab reads \"",0x10);
      supplier_1400bb340(param_2,param_1 + 0x1d);
      FUN_140071040(param_2,"\".",2);
      if (cVar3 == '\0') {
        uVar27 = 3;
        pcVar25 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar25 = "  ";
      }
      FUN_140071040(param_2,pcVar25,uVar27);
      if ((((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) &&
          (*(short *)((longlong)param_1 + 0x10c) == 0x1a)) && ((int)param_1[0x21] != -1)) {
        lVar13 = supplier_1413cc070();
        lVar32 = FUN_1400693f0(0x14251c138,(int)param_1[0x21]);
        if (((lVar13 != 0) && (lVar32 != 0)) &&
           ((*(longlong *)(lVar32 + 0x130) != 0 &&
            (lVar17 = *(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x58), lVar17 != 0)))) {
          supplier_140070870(lVar17 + 0x38,&plStack_1d0);
          supplier_140070860(*(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x58) + 0x38,&plStack_1a0
                            );
          puVar23 = (undefined1 *)supplier_140070450(&plStack_1d0,&cStack_1d7,&plStack_1a0);
          cVar5 = supplier_140066de0(*puVar23,0);
          while (cVar5 != '\0') {
            puVar24 = (undefined4 *)supplier_140070440(&plStack_1d0);
            puVar24 = (undefined4 *)FUN_140073ba0(0x14250a168,*puVar24);
            if (((puVar24 != (undefined4 *)0x0) && (puVar24[0x24] == 2)) &&
               (puVar24[0x23] == *(int *)(lVar32 + 0xe0))) {
              lVar17 = *(longlong *)(lVar13 + 0x130);
              if (lVar17 == 0) {
                plStack_190 = (longlong *)FUN_1415530e0(0x68);
                lVar17 = supplier_1400766b0(plStack_190);
                *(longlong *)(lVar13 + 0x130) = lVar17;
              }
              if (*(longlong *)(lVar17 + 0x40) == 0) {
                plStack_1b0 = (longlong *)FUN_1415530e0(0x170);
                uVar27 = supplier_1400764b0(plStack_1b0);
                *(undefined8 *)(*(longlong *)(lVar13 + 0x130) + 0x40) = uVar27;
              }
              FUN_1400bb4a0(*puVar24,*(longlong *)(*(longlong *)(lVar13 + 0x130) + 0x40) + 0x38);
            }
            supplier_140070980(&plStack_1d0);
            puVar23 = (undefined1 *)supplier_140070450(&plStack_1d0,&cStack_1d7,&plStack_1a0);
            cVar5 = supplier_140066de0(*puVar23,0);
          }
        }
      }
    }
  }
  sVar6 = (**(code **)(*param_1 + 0x1d8))(param_1);
  if (sVar6 < 1) goto LAB_140c90fb0;
  uVar7 = (**(code **)*param_1)(param_1);
  switch(uVar7) {
  case 0x17:
  case 0x2e:
  case 0x2f:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x48:
  case 0x58:
LAB_140c90f6c:
    if (sVar6 == 1) {
LAB_140c90f9b:
      pcVar25 = "This object is showing some wear.  ";
      uVar27 = 0x23;
    }
    else if (sVar6 == 2) {
      uVar27 = 0x1e;
      pcVar25 = "This object is heavily worn.  ";
    }
    else {
      if (sVar6 != 3) goto LAB_140c90fb0;
      uVar27 = 0x19;
      pcVar25 = "This object is mangled.  ";
    }
    break;
  default:
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar13 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar9);
    if ((lVar13 == 0) || (cVar5 = supplier_1400735c0(lVar13 + 0x290,0x18), cVar5 == '\0')) {
      uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      lVar13 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar9);
      if ((lVar13 == 0) || (cVar5 = supplier_1400735c0(lVar13 + 0x290,0x1e), cVar5 == '\0')) {
        uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        lVar13 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar9);
        if ((lVar13 == 0) || (cVar5 = supplier_1400735c0(lVar13 + 0x290,0x3e), cVar5 == '\0'))
        goto LAB_140c90f6c;
      }
    }
    if (sVar6 == 1) goto LAB_140c90f9b;
    if (sVar6 == 2) {
      uVar27 = 0x1c;
      pcVar25 = "This object is threadbare.  ";
    }
    else {
      if (sVar6 != 3) goto LAB_140c90fb0;
      uVar27 = 0x1c;
      pcVar25 = "This object is in tatters.  ";
    }
  }
  FUN_140071040(param_2,pcVar25,uVar27);
LAB_140c90fb0:
  cVar5 = (**(code **)(*param_1 + 0x448))(param_1);
  if ((((cVar5 != '\0') && (sVar6 = (**(code **)*param_1)(param_1), sVar6 != 0x4b)) &&
      (sVar6 = (**(code **)*param_1)(param_1), cVar5 = cStack_1d7, sVar6 != 0x49)) &&
     ((plVar22 = (longlong *)param_1[0x13], plVar22 != (longlong *)0x0 &&
      (plVar22[1] - *plVar22 >> 3 != 0)))) {
    iVar10 = 0;
    lVar13 = 0;
    do {
      FUN_140071040(param_2,"It is ",6);
      if (*(int *)(*(longlong *)(*(longlong *)param_1[0x13] + lVar13) + 0x10) < 100) {
        uVar27 = 9;
        pcVar25 = "spattered";
      }
      else {
        uVar27 = 6;
        pcVar25 = "coated";
      }
      FUN_140071040(param_2,pcVar25,uVar27);
      FUN_140071040(param_2," with ",6);
      supplier_1400697c0(auStack_160,cVar5);
      supplier_1400711b0(auStack_160);
      puVar2 = *(undefined2 **)(*(longlong *)param_1[0x13] + lVar13);
      uStack_218 = CONCAT22(uStack_218._2_2_,puVar2[4]);
      uStack_220 = uStack_220 & 0xffffffffffffff00;
      uStack_228 = 0;
      FUN_1414eab90(0x1423f3970,auStack_160,*puVar2,*(undefined4 *)(puVar2 + 2));
      supplier_1400bb340(param_2,auStack_160);
      FUN_140071040(param_2,".  ",3);
      FUN_140070e80(auStack_160);
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 8;
    } while ((ulonglong)(longlong)iVar10 <
             (ulonglong)(((longlong *)param_1[0x13])[1] - *(longlong *)param_1[0x13] >> 3));
  }
  puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x5e0))(param_1);
  if (puVar16 != (undefined8 *)0x0) {
    supplier_140070d70(&plStack_1d0,*puVar16,puVar16);
    supplier_140070d70(&plStack_1a0,puVar16[1],puVar16);
    if (plStack_1d0 != plStack_1a0) {
      do {
        iVar10 = *(int *)*plStack_1d0;
        if ((-1 < iVar10) && (iVar10 < (int)(_DAT_142519950 - _DAT_142519948 >> 3))) {
          puVar16 = *(undefined8 **)
                     (*(longlong *)(*(longlong *)(_DAT_142519948 + (longlong)iVar10 * 8) + 0x50) +
                     (longlong)((int *)*plStack_1d0)[1] * 8);
          sVar6 = (**(code **)*puVar16)(puVar16);
          if (sVar6 == 10) {
            supplier_1400bb340(param_2,puVar16 + 0x81);
            FUN_140071040(param_2,"  ",2);
          }
        }
        plStack_1d0 = plStack_1d0 + 1;
      } while (plStack_1d0 != plStack_1a0);
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((sVar6 == 0x56) && (*(longlong *)(param_1[0x1d] + 0x198) != 0)) {
    if (cVar3 == '\0') {
      FUN_140071040(param_2,"[B]",3);
      supplier_1400bb340(param_2,param_1[0x1d] + 0x188);
      uVar27 = 3;
      pcVar25 = "[B]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      supplier_1400bb340(param_2,param_1[0x1d] + 0x188);
      uVar27 = 2;
      pcVar25 = "  ";
    }
    FUN_140071040(param_2,pcVar25,uVar27);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((sVar6 == 0xd) && (*(longlong *)(param_1[0x1d] + 0x288) != 0)) {
    if (cVar3 == '\0') {
      FUN_140071040(param_2,"[B]",3);
      supplier_1400bb340(param_2,param_1[0x1d] + 0x278);
      uVar27 = 3;
      pcVar25 = "[B]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      supplier_1400bb340(param_2,param_1[0x1d] + 0x278);
      uVar27 = 2;
      pcVar25 = "  ";
    }
    FUN_140071040(param_2,pcVar25,uVar27);
  }
  FUN_140070e80(auStack_140);
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_248);
  return;
LAB_140c8d6f0:
  pcVar25 = ".  ";
LAB_140c8d6f7:
  supplier_140070b90(param_2,pcVar25);
  param_1 = plStack_1d0;
  goto joined_r0x000140c8d58f;
}

