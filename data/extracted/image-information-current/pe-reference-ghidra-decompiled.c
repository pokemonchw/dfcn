/* reference PE:6aea05a1:02734000; image-header; RVA 0x202970..0x202ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_image_header(undefined1 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 auStack_178 [32];
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined4 uStack_148;
  undefined8 *puStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined8 ***pppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_178;
  FUN_1401fdfa0();
  FUN_140145b10(param_1 + 0x1d0);
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x448) = 0;
  param_1[0x44a] = 0;
  *(undefined8 *)(param_1 + 0x450) = *param_3;
  *(undefined8 *)(param_1 + 0x458) = param_3[1];
  *(undefined8 *)(param_1 + 0x460) = param_3[2];
  *(undefined8 *)(param_1 + 0x468) = param_3[3];
  *(undefined8 *)(param_1 + 0x470) = param_3[4];
  *(undefined8 *)(param_1 + 0x478) = param_3[5];
  *(undefined8 *)(param_1 + 0x480) = param_3[6];
  *(undefined8 *)(param_1 + 0x488) = param_3[7];
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_3 + 8);
  if (*(undefined4 **)(param_1 + 0x488) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x488) = 0;
  }
  if ((*(int *)(param_1 + 4) == 0) && (*(longlong *)(param_1 + 0x468) != 0)) {
    FUN_140070f00(param_1 + 8,"The symbol of ",0xe);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0xf;
    pppuStack_f8 = (undefined8 ****)0x0;
    FUN_140aae180(*(longlong *)(param_1 + 0x468) + 0x20,&pppuStack_f8,1,0);
    ppppuVar4 = &pppuStack_f8;
    if (0xf < uStack_e0) {
      ppppuVar4 = (undefined8 ****)pppuStack_f8;
    }
    FUN_140071040(param_1 + 8,ppppuVar4,uStack_e8);
    if (0xf < uStack_e0) {
      uVar5 = uStack_e0 + 1;
      ppppuVar4 = (undefined8 ****)pppuStack_f8;
      if (0xfff < uVar5) {
        uVar5 = uStack_e0 + 0x28;
        ppppuVar4 = (undefined8 ****)pppuStack_f8[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_f8 + (-8 - (longlong)ppppuVar4))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar4,uVar5);
    }
  }
  else {
    puVar1 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x450) == 0) {
      if (*(longlong *)(param_1 + 0x458) == 0) {
        if (*(longlong *)(param_1 + 0x460) == 0) {
          if (*(longlong *)(param_1 + 0x478) != 0) {
            FUN_140070f00(puVar1,"Image information for ",0x16);
            plVar8 = *(longlong **)(param_1 + 0x478);
            plVar6 = plVar8 + 2;
            if (0xf < (ulonglong)plVar8[3]) {
              plVar8 = (longlong *)*plVar8;
            }
            FUN_140071040(puVar1,plVar8,*plVar6);
            goto LAB_140202dfd;
          }
          uVar9 = 0x11;
          pcVar7 = "Image information";
        }
        else {
          uVar9 = 0x1f;
          pcVar7 = "Image information for engraving";
        }
        FUN_140070f00(puVar1,pcVar7,uVar9);
      }
      else {
        FUN_140070f00(puVar1,"Image information for ",0x16);
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0xf;
        pppuStack_f8 = (undefined8 ****)0x0;
        lVar2 = *(longlong *)(param_1 + 0x458);
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0xf;
        uStack_d0 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0xf;
        uStack_88 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0xf;
        uStack_68 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0xffffffff;
        uStack_9c = 0;
        uStack_98 = 0xffffffffffffffff;
        uStack_90 = 0xffffffff;
        uStack_48 = 1;
        uStack_d8 = *(undefined2 *)(lVar2 + 4);
        uStack_ac = *(undefined2 *)(lVar2 + 0x30);
        uStack_a8 = *(undefined4 *)(lVar2 + 0x34);
        uStack_b0 = *(undefined4 *)(lVar2 + 6);
        plVar6 = (longlong *)(lVar2 + 0x10);
        uVar11 = *(undefined2 *)(lVar2 + 8);
        uVar10 = *(undefined2 *)(lVar2 + 6);
        if (&uStack_d0 != plVar6) {
          if (0xf < *(ulonglong *)(lVar2 + 0x28)) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_140070f00(&uStack_d0,plVar6,*(undefined8 *)(lVar2 + 0x20));
          uVar11 = uStack_b0._2_2_;
          uVar10 = (undefined2)uStack_b0;
        }
        uStack_138 = *(undefined4 *)(lVar2 + 0x38);
        uStack_130 = *(undefined4 *)(lVar2 + 0x3c);
        uStack_128 = *(undefined4 *)(lVar2 + 0x40);
        uStack_118 = *(undefined4 *)(lVar2 + 0x44);
        uStack_110 = *(undefined4 *)(lVar2 + 0x48);
        uStack_98 = *(undefined8 *)(lVar2 + 0x44);
        uStack_108 = *(undefined4 *)(lVar2 + 0x4c);
        uStack_90 = CONCAT44(uStack_90._4_4_,uStack_108);
        uStack_120 = 0;
        puStack_140 = &uStack_d0;
        uStack_158 = CONCAT62(uStack_158._2_6_,uVar11);
        uStack_150 = uStack_ac;
        uStack_148 = uStack_a8;
        uStack_a4 = uStack_138;
        uStack_a0 = uStack_130;
        uStack_9c = uStack_128;
        image_job_header(0x142408630,&pppuStack_f8,uStack_d8,uVar10);
        if (0 < *(short *)(lVar2 + 0x52)) {
          FUN_140071040(&pppuStack_f8," (",2);
          FUN_140545610((int)*(short *)(lVar2 + 0x52),&pppuStack_f8);
          FUN_140071040(&pppuStack_f8,")",1);
        }
        ppppuVar4 = &pppuStack_f8;
        if (0xf < uStack_e0) {
          ppppuVar4 = (undefined8 ****)pppuStack_f8;
        }
        FUN_140071040(puVar1,ppppuVar4,uStack_e8);
        FUN_140070e80(&uStack_68);
        FUN_140070e80(&uStack_88);
        FUN_140070e80(&uStack_d0);
        FUN_140070e80(&pppuStack_f8);
      }
    }
    else {
      FUN_140070f00(puVar1,"Image information for ",0x16);
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0xf;
      pppuStack_f8 = (undefined8 ****)0x0;
      image_job_title_wrapper(*(undefined8 *)(param_1 + 0x450),&pppuStack_f8);
      ppppuVar4 = &pppuStack_f8;
      if (0xf < uStack_e0) {
        ppppuVar4 = (undefined8 ****)pppuStack_f8;
      }
      FUN_140071040(puVar1,ppppuVar4,uStack_e8);
      FUN_140070e80(&pppuStack_f8);
    }
  }
LAB_140202dfd:
  if (0x4e < *(ulonglong *)(param_1 + 0x18)) {
    FUN_140546df0(param_1 + 8,0x4e);
  }
  lVar2 = *(longlong *)(param_1 + 0x470);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x468) == 0) {
      uStack_158 = 0x142517018;
      FUN_140aac300(param_1 + 0x208,0xffffffff,0xb,0x142512398);
    }
    else {
      FUN_14094b310(*(longlong *)(param_1 + 0x468),param_1 + 0x208);
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  else {
    if (*(char *)(lVar2 + 0xaa) == '\0') {
      if (*(longlong *)(param_1 + 0x468) == 0) {
        uStack_158 = 0x142517018;
        FUN_140aac300(lVar2 + 0x38,0xffffffff,0xb,0x142512398);
      }
      else {
        FUN_14094b310(*(longlong *)(param_1 + 0x468),lVar2 + 0x38);
      }
    }
    FUN_1401fd290(param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x470));
    *(undefined4 *)(param_1 + 0x28) = 6;
    FUN_140212010(param_1);
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_178);
  return;
}


/* reference PE:6aea05a1:02734000; image-editor-render; RVA 0x202f00..0x20c2b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_image_editor_render(longlong param_1,uint param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int *piVar11;
  short *psVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  undefined1 auStack_e28 [32];
  uint *puStack_e08;
  undefined8 uStack_e00;
  int iStack_df8;
  uint uStack_df0;
  undefined8 uStack_de8;
  undefined4 uStack_de0;
  undefined4 uStack_dd8;
  undefined1 uStack_dd0;
  undefined4 uStack_dc8;
  undefined4 uStack_dc0;
  uint uStack_db8;
  longlong lStack_db0;
  uint uStack_da8;
  uint uStack_da4;
  uint uStack_da0;
  uint uStack_d9c;
  uint uStack_d98;
  uint uStack_d94;
  uint uStack_d90;
  uint uStack_d8c;
  int iStack_d88;
  int iStack_d84;
  uint auStack_d80 [2];
  uint uStack_d78;
  uint uStack_d70;
  undefined8 uStack_d68;
  uint uStack_d60;
  uint uStack_d5c;
  ulonglong uStack_d58;
  uint uStack_d50;
  uint uStack_d4c;
  int iStack_d48;
  uint uStack_d44;
  uint uStack_d40;
  undefined1 auStack_d3c [4];
  undefined8 uStack_d38;
  char acStack_d30 [8];
  undefined1 auStack_d28 [8];
  longlong lStack_d20;
  undefined1 auStack_d18 [8];
  undefined1 auStack_d10 [8];
  undefined1 auStack_d08 [8];
  undefined1 auStack_d00 [8];
  undefined1 auStack_cf8 [32];
  undefined1 auStack_cd8 [32];
  undefined1 auStack_cb8 [32];
  undefined1 auStack_c98 [32];
  undefined1 auStack_c78 [32];
  undefined1 auStack_c58 [32];
  undefined1 auStack_c38 [32];
  undefined1 auStack_c18 [32];
  undefined1 auStack_bf8 [32];
  undefined1 auStack_bd8 [32];
  undefined1 auStack_bb8 [32];
  undefined1 auStack_b98 [32];
  undefined1 auStack_b78 [32];
  undefined1 auStack_b58 [32];
  undefined1 auStack_b38 [32];
  undefined1 auStack_b18 [32];
  undefined1 auStack_af8 [16];
  undefined1 auStack_ae8 [32];
  undefined1 auStack_ac8 [32];
  undefined1 auStack_aa8 [32];
  undefined1 auStack_a88 [32];
  undefined1 auStack_a68 [32];
  undefined1 auStack_a48 [32];
  undefined1 auStack_a28 [32];
  undefined1 auStack_a08 [32];
  undefined1 auStack_9e8 [32];
  undefined1 auStack_9c8 [32];
  undefined1 auStack_9a8 [32];
  undefined1 auStack_988 [32];
  undefined1 auStack_968 [32];
  undefined1 auStack_948 [32];
  undefined1 auStack_928 [32];
  undefined1 auStack_908 [32];
  undefined1 auStack_8e8 [32];
  undefined1 auStack_8c8 [32];
  undefined1 auStack_8a8 [32];
  undefined1 auStack_888 [32];
  undefined1 auStack_868 [32];
  undefined1 auStack_848 [32];
  undefined1 auStack_828 [32];
  undefined1 auStack_808 [32];
  undefined1 auStack_7e8 [32];
  undefined1 auStack_7c8 [32];
  undefined1 auStack_7a8 [32];
  undefined1 auStack_788 [32];
  undefined1 auStack_768 [32];
  undefined1 auStack_748 [32];
  undefined1 auStack_728 [32];
  undefined1 auStack_708 [32];
  undefined1 auStack_6e8 [32];
  undefined1 auStack_6c8 [32];
  undefined1 auStack_6a8 [32];
  undefined1 auStack_688 [32];
  undefined1 auStack_668 [32];
  undefined1 auStack_648 [32];
  undefined1 auStack_628 [32];
  undefined1 auStack_608 [32];
  undefined1 auStack_5e8 [32];
  undefined1 auStack_5c8 [32];
  undefined1 auStack_5a8 [32];
  undefined1 auStack_588 [32];
  undefined1 auStack_568 [32];
  undefined1 auStack_548 [32];
  undefined1 auStack_528 [32];
  undefined1 auStack_508 [32];
  undefined1 auStack_4e8 [32];
  undefined1 auStack_4c8 [32];
  undefined1 auStack_4a8 [32];
  undefined1 auStack_488 [32];
  undefined1 auStack_468 [32];
  undefined1 auStack_448 [32];
  undefined1 auStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [32];
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [32];
  undefined1 auStack_388 [32];
  undefined1 auStack_368 [32];
  undefined1 auStack_348 [32];
  undefined1 auStack_328 [32];
  undefined1 auStack_308 [32];
  undefined1 auStack_2e8 [32];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_e28;
  uStack_d8c = 0xffffffff;
  iStack_d84 = -1;
  iStack_d88 = -1;
  lStack_db0 = param_1;
  uStack_d5c = param_2;
  if (DAT_1423b2a55 != '\0') {
    load_supplier_0xbc970(0x14266c870,&iStack_d84,&iStack_d88);
  }
  uStack_e00 = acStack_d30;
  puStack_e08 = auStack_d80;
  iStack_df8 = param_3;
  uStack_df0 = param_4;
  load_supplier_0x2175b0(param_1,&uStack_d60,&iStack_d48,&uStack_d90);
  if (acStack_d30[0] != '\0') {
    iVar29 = uStack_d60 - 2;
    iVar25 = uStack_d90 + 2;
    iVar32 = auStack_d80[0] + 1;
    iVar28 = iStack_d48 + -1;
    for (iVar22 = iVar28; iVar3 = iVar29, iVar22 <= iVar32; iVar22 = iVar22 + 1) {
      for (; iVar3 <= iVar25; iVar3 = iVar3 + 1) {
        load_supplier_0xbc750(0x14266c870,iVar22,iVar3);
        FUN_1400bc7c0(0x14266c870,0,0);
        if (iVar22 == iVar28) {
          uVar16 = _DAT_14266e194;
          if ((iVar3 != iVar29) && (uVar16 = _DAT_14266e1a0, iVar3 == iVar25)) {
            uVar16 = _DAT_14266e1ac;
          }
        }
        else if (iVar22 == iVar32) {
          uVar16 = _DAT_14266e19c;
          if ((iVar3 != iVar29) && (uVar16 = _DAT_14266e1a8, iVar3 == iVar25)) {
            uVar16 = _DAT_14266e1b4;
          }
        }
        else {
          uVar16 = _DAT_14266e198;
          if ((iVar3 != iVar29) && (uVar16 = _DAT_14266e1b0, iVar3 != iVar25)) {
            uVar16 = _DAT_14266e1a4;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
      }
    }
  }
  uVar20 = uStack_d60;
  uStack_d98 = uStack_d90 - 2;
  iVar22 = (uStack_d98 - uStack_d60) + 1;
  if (*(int *)(param_1 + 0x420) != iVar22) {
    *(undefined1 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(int *)(param_1 + 0x420) = iVar22;
    image_preview_description(param_1);
  }
  uVar23 = iStack_d48 + 2;
  iVar22 = iStack_d48 + 5;
  lVar27 = lStack_db0 + 0x400;
  uStack_db8 = uVar23;
  iVar25 = load_supplier_0x70480(lVar27);
  if (4 < iVar25) {
    iVar25 = load_supplier_0x70480(lVar27);
    iVar22 = iVar22 + (6 - iVar25);
    if (iStack_d48 + 0xb < iVar22) {
      iVar22 = iStack_d48 + 0xb;
    }
  }
  iVar29 = (iVar22 - uVar23) + 1;
  iVar25 = load_supplier_0x70480(lVar27);
  uStack_d78 = iVar22 + 2U;
  load_supplier_0xbc760(0x14266c870,7,0,1);
  lVar27 = lStack_db0;
  iVar28 = load_supplier_0x70960(lStack_db0 + 8);
  load_supplier_0xbc750(0x14266c870,iStack_d48,(int)(uStack_d60 + uStack_d90) / 2 - iVar28 / 2);
  FUN_140af3400(0x14266c870,lVar27 + 8,0,0);
  if (*(char *)(lVar27 + 0x448) != '\0') {
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 2,uStack_d60);
    load_supplier_0xbc760(0x14266c870,4,0,1);
    FUN_140069780(auStack_2a8,"Warning!");
    FUN_140af3400(0x14266c870,auStack_2a8,0,0);
    load_supplier_0x69460(auStack_2a8);
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 3,uStack_d60);
    load_supplier_0xbc760(0x14266c870,6,0,1);
    FUN_140069780(auStack_5e8,"You won\'t perform your action if you leave.");
    FUN_140af3400(0x14266c870,auStack_5e8,0,0);
    load_supplier_0x69460(auStack_5e8);
    uVar20 = uStack_d60 + 0x2a;
    uVar23 = iStack_d48 + 10;
    for (uVar26 = uStack_d60; uStack_d9c = uVar23, (int)uVar26 <= (int)uVar20; uVar26 = uVar26 + 1)
    {
      puVar21 = (undefined4 *)&DAT_14266e35c;
      iVar22 = iStack_d48 + 6;
      do {
        load_supplier_0xbc750(0x14266c870,iVar22,uVar26);
        if (uVar26 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar26 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        iVar22 = iVar22 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e368);
      uVar23 = uStack_d9c;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    uStack_db8 = uStack_d60 + 1;
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 7,uStack_db8);
    FUN_140069780(auStack_5c8,"Don\'t perform action");
    FUN_140af3400(0x14266c870,auStack_5c8,0,0);
    load_supplier_0x69460(auStack_5c8);
    for (uVar26 = uStack_d60; (int)uVar26 <= (int)uVar20; uVar26 = uVar26 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,uVar26);
        if (uVar26 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar26 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
      uVar23 = uStack_d9c;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uStack_d9c + 1,uStack_db8);
    FUN_140069780(auStack_5a8,"Keep working");
    FUN_140af3400(0x14266c870,auStack_5a8,0,0);
    load_supplier_0x69460(auStack_5a8);
    goto override_jmp_140203830_case_1;
  }
  if (*(char *)(lVar27 + 0x449) != '\0') {
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 2,uStack_d60);
    load_supplier_0xbc760(0x14266c870,4,0,1);
    FUN_140069780(auStack_508,"Warning!");
    FUN_140af3400(0x14266c870,auStack_508,0,0);
    load_supplier_0x69460(auStack_508);
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 3,uStack_d60);
    load_supplier_0xbc760(0x14266c870,6,0,1);
    FUN_140069780(auStack_468,"Any image data you\'ve changed will be lost.");
    FUN_140af3400(0x14266c870,auStack_468,0,0);
    load_supplier_0x69460(auStack_468);
    uVar20 = uStack_d60 + 0x2a;
    uVar23 = iStack_d48 + 10;
    for (uVar26 = uStack_d60; uStack_d9c = uVar23, (int)uVar26 <= (int)uVar20; uVar26 = uVar26 + 1)
    {
      puVar21 = (undefined4 *)&DAT_14266e35c;
      iVar22 = iStack_d48 + 6;
      do {
        load_supplier_0xbc750(0x14266c870,iVar22,uVar26);
        if (uVar26 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar26 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        iVar22 = iVar22 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e368);
      uVar23 = uStack_d9c;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    uStack_db8 = uStack_d60 + 1;
    load_supplier_0xbc750(0x14266c870,iStack_d48 + 7,uStack_db8);
    FUN_140069780(auStack_328,"Leave editor and discard data");
    FUN_140af3400(0x14266c870,auStack_328,0,0);
    load_supplier_0x69460(auStack_328);
    for (uVar26 = uStack_d60; (int)uVar26 <= (int)uVar20; uVar26 = uVar26 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,uVar26);
        if (uVar26 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar26 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
      uVar23 = uStack_d9c;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uStack_d9c + 1,uStack_db8);
    FUN_140069780(auStack_2c8,"Keep working");
    FUN_140af3400(0x14266c870,auStack_2c8,0,0);
    load_supplier_0x69460(auStack_2c8);
    goto override_jmp_140203830_case_1;
  }
  uVar26 = iVar22 + 2U;
  if (0 < iVar25) {
    load_supplier_0xbc760(0x14266c870,6,0);
    iVar22 = iVar25 - iVar29;
    if (*(int *)(lVar27 + 0x41c) <= iVar25 - iVar29) {
      iVar22 = *(int *)(lVar27 + 0x41c);
    }
    iVar28 = 0;
    if (-1 < iVar22) {
      iVar28 = iVar22;
    }
    iVar22 = iVar28 + iVar29;
    uVar30 = uVar23;
    if (iVar28 < iVar22) {
      lVar13 = lVar27 + 0x400;
      do {
        lVar27 = lStack_db0;
        uVar30 = uStack_db8;
        if (iVar25 <= iVar28) break;
        load_supplier_0xbc750(0x14266c870,uVar23,uVar20);
        puVar5 = (undefined8 *)load_supplier_0x70850(lVar13,(longlong)iVar28);
        FUN_140af3400(0x14266c870,*puVar5,0,0);
        uVar23 = uVar23 + 1;
        iVar28 = iVar28 + 1;
        lVar27 = lStack_db0;
        uVar30 = uStack_db8;
      } while (iVar28 < iVar22);
    }
    uVar26 = uStack_d78;
    if (iVar29 < iVar25) {
      load_supplier_0xbc990(auStack_bb8);
      lVar27 = lStack_db0;
      puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,iVar29);
      iStack_df8 = (uVar30 - 2) + iVar29;
      uStack_e00._0_4_ = uVar30 + 1;
      load_supplier_0xbc9b0(auStack_bb8,*(undefined4 *)(lStack_db0 + 0x41c),0,iVar25 + -1);
      uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
      puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x418));
      FUN_1414284b0(auStack_bb8,iStack_d84,iStack_d88,uStack_d98 + 1);
      uVar26 = uStack_d78;
    }
  }
  uVar20 = uStack_d60;
  uVar30 = uStack_d78;
  uVar23 = uStack_d90;
  iVar22 = *(int *)(lVar27 + 0x28);
  if (0x12 < iVar22 + 1U) goto override_jmp_140203830_case_1;
                    /* WARNING: Switch is manually overridden */
  switch(iVar22 + 1U) {
  case 0:
    uVar20 = uStack_d60 + 0x2a;
    uStack_da4 = uVar26 + 6;
    uStack_d94 = uVar26 + 0xc;
    uStack_d9c = uVar26 + 0xf;
    uVar23 = uVar26 + 3;
    for (uVar18 = uStack_d60; uStack_db8 = uVar23, (int)uVar18 <= (int)uVar20; uVar18 = uVar18 + 1)
    {
      puVar21 = (undefined4 *)&DAT_14266e314;
      uVar23 = uVar30;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
        if (uVar18 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar18 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
      uVar26 = uStack_d78;
      uVar23 = uStack_db8;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 1,uStack_d60 + 1);
    FUN_140069780(auStack_248,"Related to historical figure");
    FUN_140af3400(0x14266c870,auStack_248,0,0);
    load_supplier_0x69460(auStack_248);
    for (uVar26 = uStack_d60; (int)uVar26 <= (int)uVar20; uVar26 = uVar26 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      uVar30 = uVar23;
      do {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar26);
        if (uVar26 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar26 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar30 = uVar30 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar23 + 1,uStack_d60 + 1);
    FUN_140069780(auStack_1e8,"Related to site");
    FUN_140af3400(0x14266c870,auStack_1e8,0,0);
    load_supplier_0x69460(auStack_1e8);
    uVar26 = uStack_da4;
    for (uVar23 = uStack_d60; (int)uVar23 <= (int)uVar20; uVar23 = uVar23 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      uVar30 = uVar26;
      do {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
        if (uVar23 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar30 = uVar30 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 1,uStack_d60 + 1);
    FUN_140069780(auStack_188,"Related to civilization or other group");
    FUN_140af3400(0x14266c870,auStack_188,0,0);
    load_supplier_0x69460(auStack_188);
    uVar23 = uStack_d60;
    bVar2 = true;
    if (*(longlong *)(lStack_db0 + 0x480) != 0) {
      lVar27 = *(longlong *)(*(longlong *)(lStack_db0 + 0x480) + 0x130);
      bVar2 = false;
      if ((lVar27 != 0) && (*(longlong *)(lVar27 + 0x20) != 0)) {
        lVar27 = load_supplier_0x709a0(*(longlong *)(lVar27 + 0x20) + 0x30);
        bVar2 = false;
        if (lVar27 != 0) {
          bVar2 = true;
        }
      }
    }
    for (; (int)uVar23 <= (int)uVar20; uVar23 = uVar23 + 1) {
      iVar22 = uStack_d78 + 9;
      puVar21 = (undefined4 *)&DAT_14266e314;
      do {
        load_supplier_0xbc750(0x14266c870,iVar22,uVar23);
        if (bVar2) {
          if (uVar23 == uStack_d60) {
            uVar16 = puVar21[-6];
          }
          else if (uVar23 == uVar20) {
            uVar16 = *puVar21;
          }
          else {
            uVar16 = puVar21[-3];
          }
        }
        else if (uVar23 == uStack_d60) {
          uVar16 = puVar21[0xc];
        }
        else if (uVar23 == uVar20) {
          uVar16 = puVar21[0x12];
        }
        else {
          uVar16 = puVar21[0xf];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        iVar22 = iVar22 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 10,uStack_d60 + 1);
    FUN_140069780(auStack_128,"Existing image");
    FUN_140af3400(0x14266c870,auStack_128,0,0);
    load_supplier_0x69460(auStack_128);
    uVar26 = uStack_d94;
    for (uVar23 = uStack_d60; (int)uVar23 <= (int)uVar20; uVar23 = uVar23 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      uVar30 = uVar26;
      do {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
        if (uVar23 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar30 = uVar30 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 1,uStack_d60 + 1);
    FUN_140069780(auStack_108,"Specify a new image");
    FUN_140af3400(0x14266c870,auStack_108,0,0);
    load_supplier_0x69460(auStack_108);
    uVar26 = uStack_d9c;
    for (uVar23 = uStack_d60; (int)uVar23 <= (int)uVar20; uVar23 = uVar23 + 1) {
      puVar21 = (undefined4 *)&DAT_14266e314;
      uVar30 = uVar26;
      do {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
        if (uVar23 == uStack_d60) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar20) {
          uVar16 = *puVar21;
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar30 = uVar30 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14266e320);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 1,uStack_d60 + 1);
    if (*(longlong *)(lStack_db0 + 0x478) == 0) {
      FUN_140069780(auStack_88,"Allow artist to choose");
      FUN_140af3400(0x14266c870,auStack_88,0,0);
      load_supplier_0x69460(auStack_88);
    }
    else {
      FUN_140069780(auStack_c8,"Let your mind wander");
      FUN_140af3400(0x14266c870,auStack_c8,0,0);
      load_supplier_0x69460(auStack_c8);
    }
    break;
  case 2:
    iVar22 = uVar26 + 3;
    uVar30 = (int)((auStack_d80[0] - iVar22) + -4) / 3;
    uStack_d94 = uVar30;
    uStack_d68 = load_supplier_0x70480(lVar27 + 0x158);
    uVar26 = uVar23 - 2;
    if ((int)uStack_d68 <= (int)uVar30) {
      uVar26 = uVar23;
    }
    uStack_d98 = auStack_d80[0] - 3;
    iVar25 = 2;
    if ((int)uStack_d68 <= (int)uVar30) {
      iVar25 = 0;
    }
    uVar18 = iVar25 + uVar26;
    puVar21 = (undefined4 *)0x14266e3a4;
    uStack_d70 = auStack_d80[0];
    uVar23 = uVar20;
    uVar30 = uStack_d78;
    do {
      for (; (int)uVar23 <= (int)uVar18; uVar23 = uVar23 + 1) {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
        if (uVar23 == uVar20) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar18 - 3) {
          uVar16 = *puVar21;
        }
        else if (uVar23 == uVar18 - 2) {
          uVar16 = puVar21[3];
        }
        else if (uVar23 == uVar18 - 1) {
          uVar16 = puVar21[6];
        }
        else if (uVar23 == uVar18) {
          uVar16 = puVar21[9];
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar4 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
      }
      uVar30 = uVar30 + 1;
      puVar21 = puVar21 + 1;
      uVar23 = uVar20;
    } while ((longlong)puVar21 < 0x14266e3b0);
    load_supplier_0xbc760(0x14266c870,7,0);
    uVar23 = uStack_d78;
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 2);
    lVar27 = lStack_db0;
    FUN_140070c00(auStack_808,lStack_db0 + 0x38);
    cVar4 = load_supplier_0x70b50(auStack_808);
    if (cVar4 == '\0') {
LAB_140203f87:
      if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140203f8d;
    }
    else {
      if (*(char *)(lVar27 + 0x34) == '\0') {
        load_supplier_0xbc760(0x14266c870,0,0);
        load_supplier_0x70b90(auStack_808,"...");
        goto LAB_140203f87;
      }
LAB_140203f8d:
      if (uStack_d5c % 1000 < 500) {
        load_supplier_0x70b90(auStack_808,"_");
      }
    }
    FUN_140af3400(0x14266c870,auStack_808,0);
    iVar25 = (int)uStack_d68;
    uVar30 = iVar25 - uStack_d94;
    if (*(int *)(lVar27 + 0x30) <= (int)(iVar25 - uStack_d94)) {
      uVar30 = *(uint *)(lVar27 + 0x30);
    }
    uVar18 = 0;
    if (-1 < (int)uVar30) {
      uVar18 = uVar30;
    }
    uStack_db8 = uVar18 + uStack_d94;
    uStack_da4 = uVar18;
    if ((int)uVar18 < (int)uStack_db8) {
      do {
        uStack_da4 = uVar18;
        if ((int)uStack_d68 <= (int)uVar18) break;
        if (((((int)uVar20 <= iStack_d84) && (iStack_d84 <= (int)uVar26)) && (iVar22 <= iStack_d88))
           && (iStack_d88 <= iVar22 + 2)) {
          uStack_d8c = uVar18;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        if ((int)uVar20 <= (int)uVar26) {
          iVar25 = iVar22 + 3;
          uVar23 = uVar20;
          do {
            if (iVar22 < iVar25) {
              if (uVar23 == uVar26) {
                puVar21 = (undefined4 *)0x14266e230;
                iVar28 = iVar22;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -6;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar25);
              }
              else {
                puVar21 = (undefined4 *)0x14266e224;
                iVar28 = iVar22;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -3;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar25);
              }
            }
            uVar23 = uVar23 + 1;
            uVar18 = uStack_da4;
          } while ((int)uVar23 <= (int)uVar26);
        }
        load_supplier_0xbc760(0x14266c870,3,0,1);
        load_supplier_0xbc750(0x14266c870,iVar22 + 1,uVar20);
        load_supplier_0x70cc0(auStack_aa8);
        load_supplier_0x70cc0(auStack_6e8);
        lVar27 = lStack_db0;
        plVar7 = (longlong *)load_supplier_0x70850(lStack_db0 + 0x158,(longlong)(int)uVar18);
        lVar13 = *plVar7 + 0x38;
        lVar6 = load_supplier_0xc272f0();
        if (lVar6 != 0) {
          lVar13 = FUN_140c521e0(lVar6);
        }
        FUN_140aadad0(lVar13,auStack_aa8);
        FUN_140aae180(lVar13,auStack_6e8,1,0);
        load_supplier_0x70b90(auStack_aa8,", \"");
        load_supplier_0xbb340(auStack_aa8,auStack_6e8);
        load_supplier_0x70b90(auStack_aa8,"\"");
        iVar25 = uVar26 - uVar20;
        uVar8 = load_supplier_0x70960(auStack_aa8);
        if ((ulonglong)(longlong)(iVar25 + -2) <= uVar8) {
          if (-1 < iVar25 + -3) {
            load_supplier_0xe2860(auStack_aa8,(longlong)iVar25 + -3);
          }
          lVar27 = lStack_db0;
          if (3 < iVar25 + -3) {
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_aa8,(longlong)iVar25 + -6);
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_aa8,(longlong)(iVar25 + -5));
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_aa8,(longlong)(iVar25 + -4));
            *puVar9 = 0x2e;
            lVar27 = lStack_db0;
          }
        }
        FUN_140af3400(0x14266c870,auStack_aa8,0,0);
        load_supplier_0x69460(auStack_6e8);
        load_supplier_0x69460(auStack_aa8);
        iVar22 = iVar22 + 3;
        uVar18 = uVar18 + 1;
        uStack_da4 = uVar18;
      } while ((int)uVar18 < (int)uStack_db8);
      iVar25 = (int)uStack_d68;
      uVar23 = uStack_d78;
    }
    uVar30 = uStack_d94;
    if ((int)uStack_d94 < iVar25) {
      iVar22 = uStack_d94 * 3;
      load_supplier_0xbc990(auStack_b98);
      lVar27 = lStack_db0;
      puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar30);
      iStack_df8 = uVar23 + 1 + iVar22;
      uStack_e00._0_4_ = uVar23 + 4;
      load_supplier_0xbc9b0(auStack_b98,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d68 + -1);
      uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
      puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
      FUN_1414284b0(auStack_b98,iStack_d84,iStack_d88,uVar26 + 1);
    }
    iVar22 = 0;
    if (uStack_d8c != 0xffffffff) {
      iVar25 = (uStack_d90 - uStack_d60) + 1;
      if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
        *(int *)(lVar27 + 0x440) = iVar25;
        *(uint *)(lVar27 + 0x444) = uStack_d8c;
        image_selected_description(lVar27);
      }
      lVar27 = lVar27 + 0x428;
      lVar13 = load_supplier_0x70480(lVar27);
      if (lVar13 != 0) {
        load_supplier_0xbc760(0x14266c870,6,0,1);
        iVar25 = load_supplier_0x70480(lVar27);
        uVar23 = uStack_d70;
        uVar26 = uStack_d98;
        if (0 < iVar25) {
          do {
            load_supplier_0xbc750(0x14266c870,uVar26,uVar20);
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
            FUN_140af3400(0x14266c870,*puVar5,0,0);
            if ((int)uVar23 < (int)(uVar26 + 1)) break;
            iVar22 = iVar22 + 1;
            iVar25 = load_supplier_0x70480(lVar27);
            uVar26 = uVar26 + 1;
          } while (iVar22 < iVar25);
        }
      }
    }
    load_supplier_0x69460(auStack_808);
    break;
  case 3:
    uVar18 = (int)((auStack_d80[0] - (uVar26 + 3)) + -4) / 3;
    uStack_d94 = uVar18;
    uStack_d68 = load_supplier_0x70480(lVar27 + 0x170);
    uVar30 = uVar23 - 2;
    if ((int)uStack_d68 <= (int)uVar18) {
      uVar30 = uVar23;
    }
    uStack_d98 = auStack_d80[0] - 3;
    iVar22 = 2;
    if ((int)uStack_d68 <= (int)uVar18) {
      iVar22 = 0;
    }
    uVar19 = iVar22 + uVar30;
    puVar21 = (undefined4 *)0x14266e3a4;
    uStack_d70 = auStack_d80[0];
    uVar23 = uVar20;
    uVar18 = uStack_d78;
    do {
      for (; (int)uVar23 <= (int)uVar19; uVar23 = uVar23 + 1) {
        load_supplier_0xbc750(0x14266c870,uVar18,uVar23);
        if (uVar23 == uVar20) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar19 - 3) {
          uVar16 = *puVar21;
        }
        else if (uVar23 == uVar19 - 2) {
          uVar16 = puVar21[3];
        }
        else if (uVar23 == uVar19 - 1) {
          uVar16 = puVar21[6];
        }
        else if (uVar23 == uVar19) {
          uVar16 = puVar21[9];
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar4 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
      }
      uVar18 = uVar18 + 1;
      puVar21 = puVar21 + 1;
      uVar23 = uVar20;
    } while ((longlong)puVar21 < 0x14266e3b0);
    load_supplier_0xbc760(0x14266c870,7,0);
    uVar23 = uStack_d78;
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 2);
    lVar27 = lStack_db0;
    FUN_140070c00(auStack_7e8,lStack_db0 + 0x38);
    cVar4 = load_supplier_0x70b50(auStack_7e8);
    if (cVar4 == '\0') {
LAB_1402045d7:
      if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_1402045dd;
    }
    else {
      if (*(char *)(lVar27 + 0x34) == '\0') {
        load_supplier_0xbc760(0x14266c870,0,0);
        load_supplier_0x70b90(auStack_7e8,"...");
        goto LAB_1402045d7;
      }
LAB_1402045dd:
      if (uStack_d5c % 1000 < 500) {
        load_supplier_0x70b90(auStack_7e8,"_");
      }
    }
    FUN_140af3400(0x14266c870,auStack_7e8,0);
    iVar22 = (int)uStack_d68;
    uVar18 = iVar22 - uStack_d94;
    if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d94)) {
      uVar18 = *(uint *)(lVar27 + 0x30);
    }
    uVar19 = 0;
    if (-1 < (int)uVar18) {
      uVar19 = uVar18;
    }
    uStack_db8 = uStack_d94 + uVar19;
    iVar25 = uVar26 + 3;
    uStack_da4 = uVar19;
    if ((int)uVar19 < (int)uStack_db8) {
      do {
        uStack_da4 = uVar19;
        if ((int)uStack_d68 <= (int)uVar19) break;
        if ((((int)uVar20 <= iStack_d84) && (iStack_d84 <= (int)uVar30)) &&
           ((iVar25 <= iStack_d88 && (iStack_d88 <= iVar25 + 2)))) {
          uStack_d8c = uVar19;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        if ((int)uVar20 <= (int)uVar30) {
          iVar22 = iVar25 + 3;
          uVar23 = uVar20;
          do {
            if (iVar25 < iVar22) {
              if (uVar23 == uVar30) {
                puVar21 = (undefined4 *)0x14266e230;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -6;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar22);
              }
              else {
                puVar21 = (undefined4 *)0x14266e224;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -3;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar22);
              }
            }
            uVar23 = uVar23 + 1;
            uVar19 = uStack_da4;
          } while ((int)uVar23 <= (int)uVar30);
        }
        load_supplier_0xbc760(0x14266c870,3,0,1);
        load_supplier_0xbc750(0x14266c870,iVar25 + 1,uVar20);
        load_supplier_0x70cc0(auStack_a88);
        load_supplier_0x70cc0(auStack_6c8);
        lVar27 = lStack_db0;
        puVar5 = (undefined8 *)load_supplier_0x70850(lStack_db0 + 0x170,(longlong)(int)uVar19);
        uVar15 = *puVar5;
        FUN_140aadad0(uVar15,auStack_a88);
        FUN_140aae180(uVar15,auStack_6c8,1,0);
        load_supplier_0x70b90(auStack_a88,", \"");
        load_supplier_0xbb340(auStack_a88,auStack_6c8);
        load_supplier_0x70b90(auStack_a88,"\"");
        iVar22 = uVar30 - uVar20;
        uVar8 = load_supplier_0x70960(auStack_a88);
        if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
          if (-1 < iVar22 + -3) {
            load_supplier_0xe2860(auStack_a88,(longlong)iVar22 + -3);
          }
          lVar27 = lStack_db0;
          if (3 < iVar22 + -3) {
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a88,(longlong)iVar22 + -6);
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a88,(longlong)(iVar22 + -5));
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a88,(longlong)(iVar22 + -4));
            *puVar9 = 0x2e;
            lVar27 = lStack_db0;
          }
        }
        FUN_140af3400(0x14266c870,auStack_a88,0,0);
        load_supplier_0x69460(auStack_6c8);
        load_supplier_0x69460(auStack_a88);
        uVar19 = uVar19 + 1;
        iVar25 = iVar25 + 3;
        uStack_da4 = uVar19;
      } while ((int)uVar19 < (int)uStack_db8);
      iVar22 = (int)uStack_d68;
      uVar23 = uStack_d78;
    }
    uVar26 = uStack_d94;
    if ((int)uStack_d94 < iVar22) {
      iVar22 = uStack_d94 * 3;
      load_supplier_0xbc990(auStack_b78);
      lVar27 = lStack_db0;
      puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar26);
      iStack_df8 = uVar23 + 1 + iVar22;
      uStack_e00._0_4_ = uVar23 + 4;
      load_supplier_0xbc9b0(auStack_b78,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d68 + -1);
      uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
      puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
      FUN_1414284b0(auStack_b78,iStack_d84,iStack_d88,uVar30 + 1);
    }
    iVar22 = 0;
    if (uStack_d8c != 0xffffffff) {
      iVar25 = (uStack_d90 - uStack_d60) + 1;
      if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
        *(int *)(lVar27 + 0x440) = iVar25;
        *(uint *)(lVar27 + 0x444) = uStack_d8c;
        image_selected_description(lVar27);
      }
      lVar27 = lVar27 + 0x428;
      lVar13 = load_supplier_0x70480(lVar27);
      if (lVar13 != 0) {
        load_supplier_0xbc760(0x14266c870,6,0,1);
        iVar25 = load_supplier_0x70480(lVar27);
        uVar23 = uStack_d70;
        uVar26 = uStack_d98;
        if (0 < iVar25) {
          do {
            load_supplier_0xbc750(0x14266c870,uVar26,uVar20);
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
            FUN_140af3400(0x14266c870,*puVar5,0,0);
            if ((int)uVar23 < (int)(uVar26 + 1)) break;
            iVar22 = iVar22 + 1;
            iVar25 = load_supplier_0x70480(lVar27);
            uVar26 = uVar26 + 1;
          } while (iVar22 < iVar25);
        }
      }
    }
    load_supplier_0x69460(auStack_7e8);
    break;
  case 4:
    uVar18 = (int)((auStack_d80[0] - (uVar26 + 3)) + -4) / 3;
    uStack_d94 = uVar18;
    uStack_d68 = load_supplier_0x70480(lVar27 + 0x188);
    uVar30 = uVar23 - 2;
    if ((int)uStack_d68 <= (int)uVar18) {
      uVar30 = uVar23;
    }
    uStack_d98 = auStack_d80[0] - 3;
    iVar22 = 2;
    if ((int)uStack_d68 <= (int)uVar18) {
      iVar22 = 0;
    }
    uVar19 = iVar22 + uVar30;
    puVar21 = (undefined4 *)0x14266e3a4;
    uStack_d70 = auStack_d80[0];
    uVar23 = uVar20;
    uVar18 = uStack_d78;
    do {
      for (; (int)uVar23 <= (int)uVar19; uVar23 = uVar23 + 1) {
        load_supplier_0xbc750(0x14266c870,uVar18,uVar23);
        if (uVar23 == uVar20) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar19 - 3) {
          uVar16 = *puVar21;
        }
        else if (uVar23 == uVar19 - 2) {
          uVar16 = puVar21[3];
        }
        else if (uVar23 == uVar19 - 1) {
          uVar16 = puVar21[6];
        }
        else if (uVar23 == uVar19) {
          uVar16 = puVar21[9];
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar4 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
      }
      uVar18 = uVar18 + 1;
      puVar21 = puVar21 + 1;
      uVar23 = uVar20;
    } while ((longlong)puVar21 < 0x14266e3b0);
    load_supplier_0xbc760(0x14266c870,7,0);
    uVar23 = uStack_d78;
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 2);
    lVar27 = lStack_db0;
    FUN_140070c00(auStack_7c8,lStack_db0 + 0x38);
    cVar4 = load_supplier_0x70b50(auStack_7c8);
    if (cVar4 == '\0') {
LAB_140204c17:
      if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140204c1d;
    }
    else {
      if (*(char *)(lVar27 + 0x34) == '\0') {
        load_supplier_0xbc760(0x14266c870,0,0);
        load_supplier_0x70b90(auStack_7c8,"...");
        goto LAB_140204c17;
      }
LAB_140204c1d:
      if (uStack_d5c % 1000 < 500) {
        load_supplier_0x70b90(auStack_7c8,"_");
      }
    }
    FUN_140af3400(0x14266c870,auStack_7c8,0);
    iVar22 = (int)uStack_d68;
    uVar18 = iVar22 - uStack_d94;
    if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d94)) {
      uVar18 = *(uint *)(lVar27 + 0x30);
    }
    uVar19 = 0;
    if (-1 < (int)uVar18) {
      uVar19 = uVar18;
    }
    uStack_db8 = uStack_d94 + uVar19;
    iVar25 = uVar26 + 3;
    uStack_da4 = uVar19;
    if ((int)uVar19 < (int)uStack_db8) {
      do {
        uStack_da4 = uVar19;
        if ((int)uStack_d68 <= (int)uVar19) break;
        if (((((int)uVar20 <= iStack_d84) && (iStack_d84 <= (int)uVar30)) && (iVar25 <= iStack_d88))
           && (iStack_d88 <= iVar25 + 2)) {
          uStack_d8c = uVar19;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        if ((int)uVar20 <= (int)uVar30) {
          iVar22 = iVar25 + 3;
          uVar23 = uVar20;
          do {
            if (iVar25 < iVar22) {
              if (uVar23 == uVar30) {
                puVar21 = (undefined4 *)0x14266e230;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -6;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar22);
              }
              else {
                puVar21 = (undefined4 *)0x14266e224;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -3;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar28 < iVar22);
              }
            }
            uVar23 = uVar23 + 1;
            uVar19 = uStack_da4;
          } while ((int)uVar23 <= (int)uVar30);
        }
        load_supplier_0xbc760(0x14266c870,3,0,1);
        load_supplier_0xbc750(0x14266c870,iVar25 + 1,uVar20);
        load_supplier_0x70cc0(auStack_a68);
        load_supplier_0x70cc0(auStack_6a8);
        lVar27 = lStack_db0;
        plVar7 = (longlong *)load_supplier_0x70850(lStack_db0 + 0x188,(longlong)(int)uVar19);
        lVar13 = *plVar7;
        FUN_140aadad0(lVar13 + 0x20,auStack_a68);
        FUN_140aae180(lVar13 + 0x20,auStack_6a8,1,0);
        load_supplier_0x70b90(auStack_a68,", \"");
        load_supplier_0xbb340(auStack_a68,auStack_6a8);
        load_supplier_0x70b90(auStack_a68,"\"");
        iVar22 = uVar30 - uVar20;
        uVar8 = load_supplier_0x70960(auStack_a68);
        if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
          if (-1 < iVar22 + -3) {
            load_supplier_0xe2860(auStack_a68,(longlong)iVar22 + -3);
          }
          lVar27 = lStack_db0;
          if (3 < iVar22 + -3) {
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a68,(longlong)iVar22 + -6);
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a68,(longlong)(iVar22 + -5));
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a68,(longlong)(iVar22 + -4));
            *puVar9 = 0x2e;
            lVar27 = lStack_db0;
          }
        }
        FUN_140af3400(0x14266c870,auStack_a68,0,0);
        load_supplier_0x69460(auStack_6a8);
        load_supplier_0x69460(auStack_a68);
        uVar19 = uVar19 + 1;
        iVar25 = iVar25 + 3;
        uStack_da4 = uVar19;
      } while ((int)uVar19 < (int)uStack_db8);
      iVar22 = (int)uStack_d68;
      uVar23 = uStack_d78;
    }
    uVar26 = uStack_d94;
    if ((int)uStack_d94 < iVar22) {
      iVar22 = uStack_d94 * 3;
      load_supplier_0xbc990(auStack_b58);
      lVar27 = lStack_db0;
      puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar26);
      iStack_df8 = uVar23 + 1 + iVar22;
      uStack_e00._0_4_ = uVar23 + 4;
      load_supplier_0xbc9b0(auStack_b58,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d68 + -1);
      uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
      puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
      FUN_1414284b0(auStack_b58,iStack_d84,iStack_d88,uVar30 + 1);
    }
    iVar22 = 0;
    if (uStack_d8c != 0xffffffff) {
      iVar25 = (uStack_d90 - uStack_d60) + 1;
      if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
        *(int *)(lVar27 + 0x440) = iVar25;
        *(uint *)(lVar27 + 0x444) = uStack_d8c;
        image_selected_description(lVar27);
      }
      lVar27 = lVar27 + 0x428;
      lVar13 = load_supplier_0x70480(lVar27);
      if (lVar13 != 0) {
        load_supplier_0xbc760(0x14266c870,6,0,1);
        iVar25 = load_supplier_0x70480(lVar27);
        uVar23 = uStack_d70;
        uVar26 = uStack_d98;
        if (0 < iVar25) {
          do {
            load_supplier_0xbc750(0x14266c870,uVar26,uVar20);
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
            FUN_140af3400(0x14266c870,*puVar5,0,0);
            if ((int)uVar23 < (int)(uVar26 + 1)) break;
            iVar22 = iVar22 + 1;
            iVar25 = load_supplier_0x70480(lVar27);
            uVar26 = uVar26 + 1;
          } while (iVar22 < iVar25);
        }
      }
    }
    load_supplier_0x69460(auStack_7c8);
    break;
  case 6:
    uVar30 = (int)((auStack_d80[0] - (uVar26 + 3)) + -4) / 3;
    uStack_da4 = uVar30;
    uStack_d58 = load_supplier_0x70480(lVar27 + 0x1b8);
    uVar26 = uVar23 - 2;
    if ((int)uStack_d58 <= (int)uVar30) {
      uVar26 = uVar23;
    }
    iVar22 = 2;
    if ((int)uStack_d58 <= (int)uVar30) {
      iVar22 = 0;
    }
    uVar18 = iVar22 + uVar26;
    puVar21 = (undefined4 *)0x14266e3a4;
    uStack_da8 = uVar26;
    uStack_d98 = auStack_d80[0] - 3;
    uStack_d70 = auStack_d80[0];
    uVar23 = uVar20;
    uVar30 = uStack_d78;
    do {
      for (; (int)uVar23 <= (int)uVar18; uVar23 = uVar23 + 1) {
        load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
        if (uVar23 == uVar20) {
          uVar16 = puVar21[-6];
        }
        else if (uVar23 == uVar18 - 3) {
          uVar16 = *puVar21;
        }
        else if (uVar23 == uVar18 - 2) {
          uVar16 = puVar21[3];
        }
        else if (uVar23 == uVar18 - 1) {
          uVar16 = puVar21[6];
        }
        else if (uVar23 == uVar18) {
          uVar16 = puVar21[9];
        }
        else {
          uVar16 = puVar21[-3];
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
        if (cVar4 != '\0') {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
      }
      uVar30 = uVar30 + 1;
      puVar21 = puVar21 + 1;
      uVar23 = uVar20;
    } while ((longlong)puVar21 < 0x14266e3b0);
    load_supplier_0xbc760(0x14266c870,7,0);
    uVar23 = uStack_d78;
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 2);
    lVar27 = lStack_db0;
    FUN_140070c00(auStack_7a8,lStack_db0 + 0x38);
    cVar4 = load_supplier_0x70b50(auStack_7a8);
    if (cVar4 == '\0') {
LAB_140205257:
      if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_14020525d;
    }
    else {
      if (*(char *)(lVar27 + 0x34) == '\0') {
        load_supplier_0xbc760(0x14266c870,0,0);
        load_supplier_0x70b90(auStack_7a8,"...");
        goto LAB_140205257;
      }
LAB_14020525d:
      if (uStack_d5c % 1000 < 500) {
        load_supplier_0x70b90(auStack_7a8,"_");
      }
    }
    FUN_140af3400(0x14266c870,auStack_7a8,0);
    iVar22 = (int)uStack_d58;
    uVar30 = iVar22 - uStack_da4;
    if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_da4)) {
      uVar30 = *(uint *)(lVar27 + 0x30);
    }
    uStack_d9c = 0;
    if (-1 < (int)uVar30) {
      uStack_d9c = uVar30;
    }
    uStack_db8 = uStack_da4 + uStack_d9c;
    uVar30 = auStack_d80[0] - 3;
    if ((int)uStack_d9c < (int)uStack_db8) {
      uStack_d68 = lVar27 + 0x1b8;
      uVar18 = uStack_d78 + 4;
      lVar13 = lStack_d20;
      do {
        lVar6 = uStack_d68;
        iVar22 = (int)uStack_d58;
        lVar27 = lStack_db0;
        uVar23 = uStack_d78;
        uVar30 = uStack_d98;
        uStack_da0 = uVar18;
        if (iVar22 <= (int)uStack_d9c) break;
        if (((((int)uVar20 <= iStack_d84) && (iStack_d84 <= (int)uVar26)) &&
            ((int)(uVar18 - 1) <= iStack_d88)) && (iStack_d88 <= (int)(uVar18 + 1))) {
          uStack_d8c = uStack_d9c;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        if ((int)uVar20 <= (int)uVar26) {
          iVar22 = uVar18 + 2;
          iVar25 = uVar18 - 1;
          uVar23 = uVar20;
          uVar30 = uStack_da8;
          do {
            if (iVar25 < iVar22) {
              if (uVar23 == uVar30) {
                puVar21 = (undefined4 *)0x14266e230;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -6;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                  uVar30 = uStack_da8;
                } while (iVar28 < iVar22);
              }
              else {
                puVar21 = (undefined4 *)0x14266e224;
                iVar28 = iVar25;
                do {
                  load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                  puVar17 = puVar21 + -3;
                  if (uVar23 != uVar20) {
                    puVar17 = puVar21;
                  }
                  load_supplier_0xaf4570(0x14266c870,*puVar17);
                  cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                  if (cVar4 != '\0') {
                    FUN_1400bc7c0(0x14266c870,0,1);
                  }
                  iVar28 = iVar28 + 1;
                  puVar21 = puVar21 + 1;
                  uVar30 = uStack_da8;
                } while (iVar28 < iVar22);
              }
            }
            uVar23 = uVar23 + 1;
            lVar6 = uStack_d68;
            uVar18 = uStack_da0;
            uVar26 = uStack_da8;
          } while ((int)uVar23 <= (int)uVar30);
        }
        load_supplier_0xbc760(0x14266c870,3,0,1);
        load_supplier_0xbc750(0x14266c870,uVar18,uVar20);
        load_supplier_0x70cc0(auStack_a48);
        load_supplier_0x70cc0(auStack_688);
        lVar31 = (longlong)(int)uStack_d9c;
        plVar7 = (longlong *)load_supplier_0x70850(lVar6,lVar31);
        lVar27 = *plVar7;
        FUN_140aadad0(lVar27 + 0x38,auStack_a48);
        FUN_140aae180(lVar27 + 0x38,auStack_688,1,0);
        load_supplier_0x70b90(auStack_a48,", \"");
        load_supplier_0xbb340(auStack_a48,auStack_688);
        load_supplier_0x70b90(auStack_a48,"\"");
        iVar22 = uVar26 - uVar20;
        uVar8 = load_supplier_0x70960(auStack_a48);
        if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
          if (-1 < iVar22 + -3) {
            load_supplier_0xe2860(auStack_a48,(longlong)iVar22 + -3);
          }
          lVar6 = uStack_d68;
          if (3 < iVar22 + -3) {
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a48,(longlong)iVar22 + -6);
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a48,(longlong)(iVar22 + -5));
            *puVar9 = 0x2e;
            puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a48,(longlong)(iVar22 + -4));
            *puVar9 = 0x2e;
            lVar6 = uStack_d68;
          }
        }
        FUN_140af3400(0x14266c870,auStack_a48,0,0);
        load_supplier_0x69460(auStack_688);
        load_supplier_0x69460(auStack_a48);
        uVar18 = uStack_da0;
        if (_DAT_1418be238 == 0) {
          plVar7 = (longlong *)load_supplier_0x70850(lVar6,lVar31);
          lVar6 = _DAT_1423bc668;
          lVar27 = *plVar7;
          lVar10 = load_supplier_0x7f120(&DAT_1423f3c78,_DAT_1423b5af0);
          iVar22 = 0;
          lVar31 = lVar13;
          do {
            lVar13 = lVar6;
            if ((iVar22 != 0) && (lVar13 = lVar31, iVar22 == 1)) {
              lVar13 = lVar10;
            }
            if (lVar13 != 0) {
              load_supplier_0x70870(lVar13 + 0xeb8,auStack_d28);
              load_supplier_0x70860(lVar13 + 0xeb8,&lStack_d20);
              load_supplier_0x70870(lVar13 + 0xed0,auStack_d18);
              load_supplier_0x70860(lVar13 + 0xed0,auStack_d08);
              load_supplier_0x70870(lVar13 + 0xee8,auStack_d10);
              load_supplier_0x70860(lVar13 + 0xee8,auStack_d00);
              puVar9 = (undefined1 *)load_supplier_0x70450(auStack_d28,auStack_d3c);
              cVar4 = load_supplier_0x66de0(*puVar9,0);
              while (cVar4 != '\0') {
                piVar11 = (int *)load_supplier_0x70440(auStack_d18);
                if ((*(int *)(lVar27 + 0xd8) == *piVar11) &&
                   (psVar12 = (short *)load_supplier_0x70440(auStack_d10),
                   *(short *)(lVar27 + 0xdc) == *psVar12)) {
                  load_supplier_0xbc760(0x14266c870,6,0,1);
                  uVar18 = uStack_da0;
                  load_supplier_0xbc750(0x14266c870,uStack_da0);
                  if (lVar13 == lVar6) {
                    psVar12 = (short *)load_supplier_0x70440(auStack_d28);
                    if (*psVar12 == 0) {
                      FUN_140069780(auStack_568,"Group symbol");
                      FUN_140af3400(0x14266c870,auStack_568,0,0);
                      load_supplier_0x69460(auStack_568);
                      uVar26 = uStack_da8;
                    }
                    else {
                      uVar26 = uStack_da8;
                      if (*psVar12 == 1) {
                        FUN_140069780(auStack_588,"Group commission");
                        FUN_140af3400(0x14266c870,auStack_588,0,0);
                        load_supplier_0x69460(auStack_588);
                        uVar26 = uStack_da8;
                      }
                    }
                  }
                  else {
                    uVar26 = uStack_da8;
                    if (lVar13 == lVar10) {
                      psVar12 = (short *)load_supplier_0x70440(auStack_d28);
                      if (*psVar12 == 0) {
                        FUN_140069780(auStack_528,"Civilization symbol");
                        FUN_140af3400(0x14266c870,auStack_528,0,0);
                        load_supplier_0x69460(auStack_528);
                        uVar26 = uStack_da8;
                      }
                      else {
                        uVar26 = uStack_da8;
                        if (*psVar12 == 1) {
                          FUN_140069780(auStack_548,"Civ commission");
                          FUN_140af3400(0x14266c870,auStack_548,0,0);
                          load_supplier_0x69460(auStack_548);
                          uVar26 = uStack_da8;
                        }
                      }
                    }
                  }
                  goto LAB_1402056f8;
                }
                load_supplier_0x70a60(auStack_d28);
                load_supplier_0x70980(auStack_d18);
                load_supplier_0x70a60(auStack_d10);
                puVar9 = (undefined1 *)load_supplier_0x70450(auStack_d28,auStack_d3c);
                cVar4 = load_supplier_0x66de0(*puVar9,0);
              }
            }
            iVar22 = iVar22 + 1;
            lVar31 = lVar13;
            uVar18 = uStack_da0;
            uVar26 = uStack_da8;
          } while (iVar22 < 2);
        }
LAB_1402056f8:
        uVar18 = uVar18 + 3;
        uStack_d9c = uStack_d9c + 1;
        iVar22 = (int)uStack_d58;
        lVar27 = lStack_db0;
        uVar23 = uStack_d78;
        uVar30 = uStack_d98;
        uStack_da0 = uVar18;
      } while ((int)uStack_d9c < (int)uStack_db8);
    }
    uVar18 = uStack_da4;
    if ((int)uStack_da4 < iVar22) {
      iVar25 = uStack_da4 * 3;
      load_supplier_0xbc990(auStack_b38);
      lVar27 = lStack_db0;
      puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar18);
      iStack_df8 = uVar23 + 1 + iVar25;
      uStack_e00._0_4_ = uVar23 + 4;
      load_supplier_0xbc9b0(auStack_b38,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
      uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
      puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
      FUN_1414284b0(auStack_b38,iStack_d84,iStack_d88,uVar26 + 1);
    }
    iVar22 = 0;
    if (uStack_d8c != 0xffffffff) {
      iVar25 = (uStack_d90 - uStack_d60) + 1;
      if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
        *(int *)(lVar27 + 0x440) = iVar25;
        *(uint *)(lVar27 + 0x444) = uStack_d8c;
        image_selected_description(lVar27);
      }
      lVar27 = lVar27 + 0x428;
      lVar13 = load_supplier_0x70480(lVar27);
      if (lVar13 != 0) {
        load_supplier_0xbc760(0x14266c870,6,0,1);
        iVar25 = load_supplier_0x70480(lVar27);
        uVar23 = uStack_d70;
        if (0 < iVar25) {
          do {
            load_supplier_0xbc750(0x14266c870,uVar30,uVar20);
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
            FUN_140af3400(0x14266c870,*puVar5,0,0);
            uVar30 = uVar30 + 1;
            if ((int)uVar23 < (int)uVar30) break;
            iVar22 = iVar22 + 1;
            iVar25 = load_supplier_0x70480(lVar27);
          } while (iVar22 < iVar25);
        }
      }
    }
    load_supplier_0x69460(auStack_7a8);
    break;
  case 7:
    uStack_d70 = uStack_d60;
    uStack_da0 = uVar26 + 6;
    uStack_d9c = uVar26 + 9;
    uStack_d94 = uVar26 + 0x12;
    uVar23 = uStack_d60 + 5;
    uVar26 = uStack_d78 + 0x16;
    uStack_da4 = uStack_d60 + 7;
    uVar30 = uVar26;
    uVar18 = uStack_d60;
    if (iVar22 == 6) {
      for (; uStack_da8 = uVar30, (int)uVar18 <= (int)uVar23; uVar18 = uVar18 + 1) {
        puVar21 = (undefined4 *)&DAT_14266e314;
        iVar22 = uVar26;
        do {
          load_supplier_0xbc750(0x14266c870,iVar22,uVar18);
          if (uVar18 == uVar20) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar23) {
            uVar16 = *puVar21;
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          iVar22 = iVar22 + 1;
          puVar21 = puVar21 + 1;
        } while ((longlong)puVar21 < 0x14266e320);
        uVar30 = uStack_da8;
      }
      uVar19 = uVar20 + 0xc;
      uVar23 = uVar20 + 7;
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar20 + 1);
      FUN_140069780(auStack_4e8,"Name");
      FUN_140af3400(0x14266c870,auStack_4e8,0,0);
      load_supplier_0x69460(auStack_4e8);
      uVar18 = uStack_da4;
      lVar27 = lStack_db0;
      uVar26 = uVar23;
      for (; (int)uVar23 <= (int)uVar19; uVar23 = uVar23 + 1) {
        puVar21 = (undefined4 *)&DAT_14266e314;
        do {
          load_supplier_0xbc750(0x14266c870,uVar30,uVar23);
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            if (uVar23 == uVar18) {
              uVar16 = puVar21[-0x18];
            }
            else if (uVar23 == uVar19) {
              uVar16 = puVar21[-0x12];
            }
            else {
              uVar16 = puVar21[-0x15];
            }
          }
          else if (uVar23 == uVar18) {
            uVar16 = puVar21[-6];
          }
          else if (uVar23 == uVar19) {
            uVar16 = *puVar21;
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          uVar30 = uVar30 + 1;
          puVar21 = puVar21 + 1;
        } while ((longlong)puVar21 < 0x14266e320);
        uVar26 = uStack_da4;
        uVar30 = uStack_da8;
        uVar20 = uStack_d70;
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar26 + 1);
      FUN_140069780(auStack_4c8,"Done");
      FUN_140af3400(0x14266c870,auStack_4c8,0,0);
      load_supplier_0x69460(auStack_4c8);
      for (iVar22 = uVar20 + 0xe; iVar22 <= (int)(uVar20 + 0x13); iVar22 = iVar22 + 1) {
        puVar21 = (undefined4 *)&DAT_14266e35c;
        do {
          load_supplier_0xbc750(0x14266c870,uVar30,iVar22);
          if (iVar22 == uVar20 + 0xe) {
            uVar16 = puVar21[-6];
          }
          else if (iVar22 == uVar20 + 0x13) {
            uVar16 = *puVar21;
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          uVar30 = uVar30 + 1;
          puVar21 = puVar21 + 1;
        } while ((longlong)puVar21 < 0x14266e368);
        uVar30 = uStack_da8;
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar20 + 0xf);
      FUN_140069780(auStack_4a8,"Back");
      FUN_140af3400(0x14266c870,auStack_4a8,0,0);
      puVar9 = auStack_4a8;
LAB_140205e9a:
      load_supplier_0x69460(puVar9);
    }
    else if (iVar22 - 7U < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(iVar22 - 7U) {
      default:
        uVar23 = uStack_d60 + 7;
        for (uVar30 = uStack_d60; uStack_da8 = uVar26, (int)uVar30 <= (int)uVar23;
            uVar30 = uVar30 + 1) {
          puVar21 = (undefined4 *)&DAT_14266e35c;
          do {
            load_supplier_0xbc750(0x14266c870,uVar26,uVar30);
            if (uVar30 == uVar20) {
              uVar16 = puVar21[-6];
            }
            else if (uVar30 == uVar23) {
              uVar16 = *puVar21;
            }
            else {
              uVar16 = puVar21[-3];
            }
            load_supplier_0xaf4570(0x14266c870,uVar16);
            uVar26 = uVar26 + 1;
            puVar21 = puVar21 + 1;
          } while ((longlong)puVar21 < 0x14266e368);
          uVar26 = uStack_da8;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        load_supplier_0xbc750(0x14266c870,uVar26 + 1,uVar20 + 1);
        FUN_140069780(auStack_488,"Cancel");
        FUN_140af3400(0x14266c870,auStack_488,0,0);
        puVar9 = auStack_488;
        break;
      case 10:
        uVar23 = uStack_d60 + 0xe;
        for (uVar30 = uStack_d60; uStack_da8 = uVar26, (int)uVar30 <= (int)uVar23;
            uVar30 = uVar30 + 1) {
          puVar21 = (undefined4 *)&DAT_14266e35c;
          do {
            load_supplier_0xbc750(0x14266c870,uVar26,uVar30);
            if (uVar30 == uVar20) {
              uVar16 = puVar21[-6];
            }
            else if (uVar30 == uVar23) {
              uVar16 = *puVar21;
            }
            else {
              uVar16 = puVar21[-3];
            }
            load_supplier_0xaf4570(0x14266c870,uVar16);
            uVar26 = uVar26 + 1;
            puVar21 = puVar21 + 1;
          } while ((longlong)puVar21 < 0x14266e368);
          uVar26 = uStack_da8;
        }
        load_supplier_0xbc760(0x14266c870,7,0,1);
        load_supplier_0xbc750(0x14266c870,uVar26 + 1,uVar20 + 1);
        FUN_140069780(auStack_268,"Stop deleting");
        FUN_140af3400(0x14266c870,auStack_268,0,0);
        puVar9 = auStack_268;
      }
      goto LAB_140205e9a;
    }
    uVar30 = uStack_d78;
    lVar27 = lStack_db0;
    uStack_da8 = uStack_d60 + 0x19;
    uVar23 = uVar20 + 9;
    for (uVar26 = uVar20; (int)uVar26 <= (int)uVar23; uVar26 = uVar26 + 1) {
      load_supplier_0xbc750(0x14266c870,uVar30,uVar26);
      if (*(int *)(lVar27 + 0x28) == 7) {
        uVar16 = _DAT_14266e320;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e32c, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e338;
        }
      }
      else {
        uVar16 = _DAT_14266e2fc;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e308, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e314;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar26);
      if (*(int *)(lVar27 + 0x28) == 7) {
        uVar16 = _DAT_14266e324;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e330, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e33c;
        }
      }
      else {
        uVar16 = _DAT_14266e300;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e30c, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e318;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar30 + 2,uVar26);
      if (*(int *)(lVar27 + 0x28) == 7) {
        uVar16 = _DAT_14266e328;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e334, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e340;
        }
      }
      else {
        uVar16 = _DAT_14266e304;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e310, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e31c;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar20 + 1);
    FUN_140069780(auStack_448,"Creature");
    FUN_140af3400(0x14266c870,auStack_448,0,0);
    load_supplier_0x69460(auStack_448);
    lVar27 = lStack_db0;
    uVar23 = uVar20 + 0x12;
    uVar26 = uVar30;
    if ((int)uVar20 <= (int)uVar23) {
      uVar18 = uVar20;
      do {
        load_supplier_0xbc750(0x14266c870,uVar30 + 3,uVar18);
        if (*(int *)(lVar27 + 0x28) == 8) {
          uVar16 = _DAT_14266e320;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e32c, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e338;
          }
        }
        else {
          uVar16 = _DAT_14266e2fc;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e308, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e314;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar30 + 4,uVar18);
        if (*(int *)(lVar27 + 0x28) == 8) {
          uVar16 = _DAT_14266e324;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e330, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e33c;
          }
        }
        else {
          uVar16 = _DAT_14266e300;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e30c, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e318;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar30 + 5,uVar18);
        if (*(int *)(lVar27 + 0x28) == 8) {
          uVar16 = _DAT_14266e328;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e334, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e340;
          }
        }
        else {
          uVar16 = _DAT_14266e304;
          if ((uVar18 != uVar20) && (uVar16 = _DAT_14266e310, uVar18 == uVar23)) {
            uVar16 = _DAT_14266e31c;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar18 = uVar18 + 1;
        uVar26 = uStack_d78;
      } while ((int)uVar18 <= (int)uVar23);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 4,uVar20 + 1);
    FUN_140069780(auStack_428,"Historical figure");
    FUN_140af3400(0x14266c870,auStack_428,0,0);
    load_supplier_0x69460(auStack_428);
    uVar30 = uStack_da0;
    lVar27 = lStack_db0;
    uVar23 = uVar20 + 6;
    for (uVar26 = uVar20; (int)uVar26 <= (int)uVar23; uVar26 = uVar26 + 1) {
      load_supplier_0xbc750(0x14266c870,uVar30,uVar26);
      if (*(int *)(lVar27 + 0x28) == 9) {
        uVar16 = _DAT_14266e320;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e32c, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e338;
        }
      }
      else {
        uVar16 = _DAT_14266e2fc;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e308, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e314;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar30 + 1,uVar26);
      if (*(int *)(lVar27 + 0x28) == 9) {
        uVar16 = _DAT_14266e324;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e330, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e33c;
        }
      }
      else {
        uVar16 = _DAT_14266e300;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e30c, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e318;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar30 + 2,uVar26);
      if (*(int *)(lVar27 + 0x28) == 9) {
        uVar16 = _DAT_14266e328;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e334, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e340;
        }
      }
      else {
        uVar16 = _DAT_14266e304;
        if ((uVar26 != uVar20) && (uVar16 = _DAT_14266e310, uVar26 == uVar23)) {
          uVar16 = _DAT_14266e31c;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    uVar23 = uStack_da0;
    load_supplier_0xbc750(0x14266c870,uStack_da0 + 1,uVar20 + 1);
    FUN_140069780(auStack_408,"Plant");
    FUN_140af3400(0x14266c870,auStack_408,0,0);
    load_supplier_0x69460(auStack_408);
    iVar22 = uVar20 + 8;
    uVar26 = uVar23;
    if (iVar22 <= (int)(uVar20 + 0xd)) {
      iVar25 = uVar20 + 0xd;
      iVar28 = iVar22;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,iVar28);
        if (*(int *)(lStack_db0 + 0x28) == 10) {
          uVar16 = _DAT_14266e320;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e32c, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e338;
          }
        }
        else {
          uVar16 = _DAT_14266e2fc;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e308, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e314;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 1,iVar28);
        if (*(int *)(lStack_db0 + 0x28) == 10) {
          uVar16 = _DAT_14266e324;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e330, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e33c;
          }
        }
        else {
          uVar16 = _DAT_14266e300;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e30c, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e318;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 2,iVar28);
        if (*(int *)(lStack_db0 + 0x28) == 10) {
          uVar16 = _DAT_14266e328;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e334, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e340;
          }
        }
        else {
          uVar16 = _DAT_14266e304;
          if ((iVar28 != iVar22) && (uVar16 = _DAT_14266e310, iVar28 == iVar25)) {
            uVar16 = _DAT_14266e31c;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        iVar28 = iVar28 + 1;
        uVar26 = uStack_da0;
      } while (iVar28 <= iVar25);
    }
    uVar30 = uVar20 + 6;
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar26 + 1,uVar20 + 9);
    FUN_140069780(auStack_3e8,"Tree");
    FUN_140af3400(0x14266c870,auStack_3e8,0,0);
    load_supplier_0x69460(auStack_3e8);
    uVar26 = uStack_d9c;
    lVar27 = lStack_db0;
    for (uVar23 = uVar20; (int)uVar23 <= (int)uVar30; uVar23 = uVar23 + 1) {
      load_supplier_0xbc750(0x14266c870,uVar26,uVar23);
      if (*(int *)(lVar27 + 0x28) == 0xb) {
        uVar16 = _DAT_14266e320;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e32c, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e338;
        }
      }
      else {
        uVar16 = _DAT_14266e2fc;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e308, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e314;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar26 + 1,uVar23);
      if (*(int *)(lVar27 + 0x28) == 0xb) {
        uVar16 = _DAT_14266e324;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e330, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e33c;
        }
      }
      else {
        uVar16 = _DAT_14266e300;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e30c, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e318;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar26 + 2,uVar23);
      if (*(int *)(lVar27 + 0x28) == 0xb) {
        uVar16 = _DAT_14266e328;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e334, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e340;
        }
      }
      else {
        uVar16 = _DAT_14266e304;
        if ((uVar23 != uVar20) && (uVar16 = _DAT_14266e310, uVar23 == uVar30)) {
          uVar16 = _DAT_14266e31c;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    uVar24 = uStack_d9c;
    load_supplier_0xbc750(0x14266c870,uStack_d9c + 1,uVar20 + 1);
    FUN_140069780(auStack_3c8,"Shape");
    FUN_140af3400(0x14266c870,auStack_3c8,0,0);
    load_supplier_0x69460(auStack_3c8);
    lVar27 = lStack_db0;
    uVar26 = uVar20 + 0xf;
    uVar23 = uVar20 + 8;
    uVar30 = uVar20;
    uVar18 = uVar24;
    for (uVar19 = uVar23; (int)uVar19 <= (int)uVar26; uVar19 = uVar19 + 1) {
      load_supplier_0xbc750(0x14266c870,uVar24,uVar19);
      if (*(int *)(lVar27 + 0x28) == 0xc) {
        uVar16 = _DAT_14266e320;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e32c, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e338;
        }
      }
      else {
        uVar16 = _DAT_14266e2fc;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e308, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e314;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar24 + 1,uVar19);
      if (*(int *)(lVar27 + 0x28) == 0xc) {
        uVar16 = _DAT_14266e324;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e330, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e33c;
        }
      }
      else {
        uVar16 = _DAT_14266e300;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e30c, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e318;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      load_supplier_0xbc750(0x14266c870,uVar24 + 2,uVar19);
      if (*(int *)(lVar27 + 0x28) == 0xc) {
        uVar16 = _DAT_14266e328;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e334, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e340;
        }
      }
      else {
        uVar16 = _DAT_14266e304;
        if ((uVar19 != uVar23) && (uVar16 = _DAT_14266e310, uVar19 == uVar26)) {
          uVar16 = _DAT_14266e31c;
        }
      }
      load_supplier_0xaf4570(0x14266c870,uVar16);
      uVar30 = uStack_d70;
      uVar18 = uStack_d9c;
    }
    uVar19 = uVar30 + 9;
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar18 + 1,uVar20 + 9);
    FUN_140069780(auStack_3a8,"Object");
    FUN_140af3400(0x14266c870,auStack_3a8,0,0);
    load_supplier_0x69460(auStack_3a8);
    uVar23 = uStack_d78;
    lVar27 = lStack_db0;
    uVar20 = uVar30;
    if ((int)uVar30 <= (int)uVar19) {
      do {
        load_supplier_0xbc750(0x14266c870,uVar23 + 0xc,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0xd) {
          uVar16 = _DAT_14266e320;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e32c, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e338;
          }
        }
        else {
          uVar16 = _DAT_14266e2fc;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e308, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e314;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 0xd,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0xd) {
          uVar16 = _DAT_14266e324;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e330, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e33c;
          }
        }
        else {
          uVar16 = _DAT_14266e300;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e30c, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e318;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 0xe,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0xd) {
          uVar16 = _DAT_14266e328;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e334, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e340;
          }
        }
        else {
          uVar16 = _DAT_14266e304;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e310, uVar20 == uVar19)) {
            uVar16 = _DAT_14266e31c;
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 <= (int)uVar19);
      uVar26 = uVar30 + 0xf;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    uVar23 = uStack_d78;
    load_supplier_0xbc750(0x14266c870,uStack_d78 + 0xd,uVar30 + 1);
    FUN_140069780(auStack_388,"Artifact");
    FUN_140af3400(0x14266c870,auStack_388,0,0);
    load_supplier_0x69460(auStack_388);
    uVar20 = uVar30 + 0x17;
    uVar18 = uVar30;
    if ((int)uVar30 <= (int)uVar20) {
      do {
        load_supplier_0xbc750(0x14266c870,uVar23 + 0xf,uVar18);
        if (*(int *)(lVar27 + 0x28) == 0xe) {
          uVar16 = _DAT_14266e320;
          if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e32c, uVar18 == uVar20)) {
            uVar16 = _DAT_14266e338;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2b4;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e2c0, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e2cc;
            }
          }
          else {
            uVar16 = _DAT_14266e2fc;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e308, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e314;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 0x10,uVar18);
        if (*(int *)(lVar27 + 0x28) == 0xe) {
          uVar16 = _DAT_14266e324;
          if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e330, uVar18 == uVar20)) {
            uVar16 = _DAT_14266e33c;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2b8;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e2c4, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e2d0;
            }
          }
          else {
            uVar16 = _DAT_14266e300;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e30c, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e318;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,uVar23 + 0x11,uVar18);
        if (*(int *)(lVar27 + 0x28) == 0xe) {
          uVar16 = _DAT_14266e328;
          if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e334, uVar18 == uVar20)) {
            uVar16 = _DAT_14266e340;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2bc;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e2c8, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e2d4;
            }
          }
          else {
            uVar16 = _DAT_14266e304;
            if ((uVar18 != uVar30) && (uVar16 = _DAT_14266e310, uVar18 == uVar20)) {
              uVar16 = _DAT_14266e31c;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 <= (int)uVar20);
      uVar26 = uVar30 + 0xf;
      uVar23 = uStack_d78;
    }
    load_supplier_0xbc760(0x14266c870,7,0,1);
    load_supplier_0xbc750(0x14266c870,uVar23 + 0x10,uVar30 + 1);
    FUN_140069780(auStack_368,"Action or relationship");
    FUN_140af3400(0x14266c870,auStack_368,0,0);
    load_supplier_0x69460(auStack_368);
    if ((int)uVar30 <= (int)uVar26) {
      iVar22 = uStack_d94 + 1;
      iVar25 = uStack_d94 + 2;
      uVar20 = uVar30;
      do {
        load_supplier_0xbc750(0x14266c870,uStack_d94,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0x11) {
          uVar16 = _DAT_14266e368;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e374, uVar20 == uVar26)) {
            uVar16 = _DAT_14266e380;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2b4;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e2c0, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e2cc;
            }
          }
          else {
            uVar16 = _DAT_14266e344;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e350, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e35c;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,iVar22,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0x11) {
          uVar16 = _DAT_14266e36c;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e378, uVar20 == uVar26)) {
            uVar16 = _DAT_14266e384;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2b8;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e2c4, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e2d0;
            }
          }
          else {
            uVar16 = _DAT_14266e348;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e354, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e360;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        load_supplier_0xbc750(0x14266c870,iVar25,uVar20);
        if (*(int *)(lVar27 + 0x28) == 0x11) {
          uVar16 = _DAT_14266e370;
          if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e37c, uVar20 == uVar26)) {
            uVar16 = _DAT_14266e388;
          }
        }
        else {
          lVar13 = load_supplier_0x70480(lVar27 + 0x1d0);
          if (lVar13 == 0) {
            uVar16 = _DAT_14266e2bc;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e2c8, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e2d4;
            }
          }
          else {
            uVar16 = _DAT_14266e34c;
            if ((uVar20 != uVar30) && (uVar16 = _DAT_14266e358, uVar20 == uVar26)) {
              uVar16 = _DAT_14266e364;
            }
          }
        }
        load_supplier_0xaf4570(0x14266c870,uVar16);
        uVar20 = uVar20 + 1;
        uVar23 = uStack_d78;
      } while ((int)uVar20 <= (int)uVar26);
    }
    load_supplier_0xbc760(0x14266c870,7,0);
    load_supplier_0xbc750(0x14266c870,uStack_d94 + 1,uVar30 + 1);
    FUN_140069780(auStack_348,"Delete element");
    FUN_140af3400(0x14266c870,auStack_348,0);
    load_supplier_0x69460(auStack_348);
    uVar26 = uStack_d90;
    uVar20 = uStack_da8;
    uVar30 = *(int *)(lVar27 + 0x28) - 7;
    if (10 < uVar30) break;
                    /* WARNING: Switch is manually overridden */
    switch(uVar30) {
    case 0:
      uVar30 = uStack_da8 + 2;
      uStack_d98 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uStack_d98) + -7) / 3;
      uStack_d70 = uVar18;
      uStack_d68 = load_supplier_0x709a0(lStack_db0 + 0x2b0);
      uStack_da0 = uVar26 - 2;
      if ((int)uStack_d68 <= (int)uVar18) {
        uStack_da0 = uVar26;
      }
      uStack_d40 = auStack_d80[0] - 6;
      uStack_d4c = auStack_d80[0] - 4;
      uStack_da4 = auStack_d80[0] - 2;
      uStack_d38 = CONCAT44(uStack_d38._4_4_,uVar20 + 10);
      uVar26 = uStack_d90 - 9;
      uStack_db8 = uStack_d90 - 7;
      uStack_d50 = uStack_d90 - 3;
      iVar22 = 2;
      if ((int)uStack_d68 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar19 = iVar22 + uStack_da0;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar18 = uVar30;
      uStack_d44 = uVar26;
      do {
        for (; (int)uVar18 <= (int)uVar19; uVar18 = uVar18 + 1) {
          load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
          if (uVar18 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar19 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar18 == uVar19 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar18 == uVar19 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar18 == uVar19) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_768,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_768);
      if (cVar4 == '\0') {
LAB_14020711f:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140207125;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_768,"...");
          goto LAB_14020711f;
        }
LAB_140207125:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_768,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_768,0,0);
      uStack_d9c = uStack_d98;
      iVar22 = (int)uStack_d68;
      uVar20 = iVar22 - uStack_d70;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d70)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uStack_d94 = 0;
      if (-1 < (int)uVar20) {
        uStack_d94 = uVar20;
      }
      uStack_d78 = uStack_d70 + uStack_d94;
      if ((int)uStack_d94 < (int)uStack_d78) {
        lVar13 = lVar27 + 0x2b0;
        uVar20 = uStack_da0;
        do {
          uVar23 = uStack_d9c;
          if (iVar22 <= (int)uStack_d94) break;
          if (((((int)uVar30 <= iStack_d84) && (iStack_d84 <= (int)uVar20)) &&
              ((int)uStack_d9c <= iStack_d88)) && (iStack_d88 <= (int)(uStack_d9c + 2))) {
            uStack_d8c = uStack_d94;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar30 <= (int)uVar20) {
            iVar25 = uVar23 + 3;
            uVar18 = uStack_da0;
            uVar26 = uVar30;
            do {
              uVar20 = uVar23;
              if ((int)uVar23 < iVar25) {
                if (uVar26 == uVar18) {
                  puVar21 = (undefined4 *)0x14266e230;
                  do {
                    puVar17 = puVar21 + -6;
                    if (uVar26 != uVar30) {
                      puVar17 = puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar23;
                    load_supplier_0xaf4570(0x14266c870,*puVar17);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar23 = uVar23 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar23 < iVar25);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  do {
                    puVar17 = puVar21 + -3;
                    if (uVar26 != uVar30) {
                      puVar17 = puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar23;
                    load_supplier_0xaf4570(0x14266c870,*puVar17);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar23 = uVar23 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar23 < iVar25);
                }
              }
              uVar23 = uVar20;
              uVar26 = uVar26 + 1;
              lVar27 = lStack_db0;
              uVar20 = uStack_da0;
            } while ((int)uVar26 <= (int)uVar18);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar30);
          load_supplier_0x70cc0(auStack_ae8);
          lVar6 = (longlong)(int)uStack_d94;
          puVar14 = (undefined2 *)load_supplier_0x70990(lVar27 + 0x2c8,lVar6);
          uVar1 = *puVar14;
          puVar14 = (undefined2 *)load_supplier_0x70990(lVar13,lVar6);
          FUN_140abd670(*puVar14,auStack_ae8,0,uVar1);
          FUN_140546b30(auStack_ae8);
          load_supplier_0x70990(lVar27 + 0x2c8,lVar6);
          puVar14 = (undefined2 *)load_supplier_0x70990(lVar13,lVar6);
          cVar4 = load_supplier_0xf3d20(0x14250eec8,*puVar14);
          if (cVar4 == '\x01') {
            load_supplier_0x70b90(auStack_ae8,", ");
            uVar15 = 0xb;
LAB_1402073de:
            FUN_1400bb360(auStack_ae8,uVar15);
          }
          else if (cVar4 == '\0') {
            load_supplier_0x70b90(auStack_ae8,", ");
            uVar15 = 0xc;
            goto LAB_1402073de;
          }
          iVar25 = uVar20 - uVar30;
          uVar8 = load_supplier_0x70960(auStack_ae8);
          if ((ulonglong)(longlong)(iVar25 + -2) <= uVar8) {
            if (-1 < iVar25 + -3) {
              load_supplier_0xe2860(auStack_ae8,(longlong)iVar25 + -3);
            }
            if (3 < iVar25 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ae8,(longlong)iVar25 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ae8,(longlong)(iVar25 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ae8,(longlong)(iVar25 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_ae8,0,0);
          load_supplier_0x69460(auStack_ae8);
          uStack_d9c = uStack_d9c + 3;
          uStack_d94 = uStack_d94 + 1;
          lVar27 = lStack_db0;
        } while ((int)uStack_d94 < (int)uStack_d78);
        iVar22 = (int)uStack_d68;
        uVar26 = uStack_d44;
      }
      uVar20 = uStack_d70;
      puVar21 = (undefined4 *)0x14266e3a4;
      if ((int)uStack_d70 < iVar22) {
        iVar28 = uStack_d98 + 1;
        iVar29 = uStack_d98 - 2;
        iVar25 = uStack_d70 * 3;
        load_supplier_0xbc990(auStack_b18);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = iVar29 + iVar25;
        uStack_e00._0_4_ = iVar28;
        load_supplier_0xbc9b0(auStack_b18,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_b18,iStack_d84,iStack_d88,uStack_da0 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d4c;
          uVar23 = uStack_d40;
          if (0 < iVar25) {
            do {
              load_supplier_0xbc750(0x14266c870,uVar23,uVar30);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              if ((int)uVar20 < (int)(uVar23 + 1)) break;
              iVar22 = iVar22 + 1;
              iVar25 = load_supplier_0x70480(lVar27);
              uVar23 = uVar23 + 1;
            } while (iVar22 < iVar25);
          }
        }
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_da4 + 1,uVar30);
      FUN_140069780(auStack_308,"Number:");
      FUN_140af3400(0x14266c870,auStack_308,0,0);
      load_supplier_0x69460(auStack_308);
      uVar23 = uStack_da4;
      uVar30 = (uint)uStack_d38;
      uVar20 = uVar30;
      uVar18 = uStack_da4;
      do {
        for (; (int)uVar20 <= (int)uVar26; uVar20 = uVar20 + 1) {
          if (uVar20 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar20 == uVar26 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar20 == uVar26 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar20 == uVar26 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar20 == uVar26) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          _DAT_14266c8f4 = uVar20;
          _DAT_14266c8f8 = uVar18;
          load_supplier_0xaf4570(0x14266c870,uVar16);
          if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar20 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar30 + 2);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_788,lStack_db0 + 0x60);
      cVar4 = load_supplier_0x70b50(auStack_788);
      if (cVar4 == '\0') {
LAB_140207796:
        if (*(char *)(lVar27 + 0x58) != '\0') goto LAB_14020779c;
      }
      else {
        if (*(char *)(lVar27 + 0x58) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_788,"...");
          goto LAB_140207796;
        }
LAB_14020779c:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_788,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_788,0,0);
      load_supplier_0x69460(auStack_788);
      load_supplier_0xbc760(0x14266c870,7,0,0);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26 - 0x1d);
      FUN_140069780(auStack_2e8,"(0 for unnumbered plural)");
      FUN_140af3400(0x14266c870,auStack_2e8,0,0);
      load_supplier_0x69460(auStack_2e8);
      uVar26 = uStack_db8;
      iVar22 = uStack_db8 + 1;
      iVar25 = uStack_db8 + 2;
      uVar20 = uStack_db8 + 3;
      puVar21 = (undefined4 *)0x142672120;
      do {
        _DAT_14266c8f4 = uVar26;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[-6]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = iVar22;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[-3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = iVar25;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,*puVar21);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = uVar20;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        uVar30 = uStack_d50;
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14267212c);
      puVar21 = (undefined4 *)0x142672138;
      uVar20 = uStack_da4;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        uVar23 = uVar30;
        do {
          load_supplier_0xbc750(0x14266c870,uVar20,uVar23);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar23 = uVar23 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar20 = uVar20 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672144);
      FUN_140070e80(auStack_768);
      break;
    case 1:
      uVar19 = uStack_da8 + 2;
      uVar23 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uVar23) + -4) / 3;
      uStack_d98 = uVar18;
      uStack_d68 = load_supplier_0x70480(lStack_db0 + 0x2e0);
      uVar30 = uVar26 - 2;
      if ((int)uStack_d68 <= (int)uVar18) {
        uVar30 = uVar26;
      }
      uStack_d38 = CONCAT44(uStack_d38._4_4_,auStack_d80[0] - 3);
      iVar22 = 2;
      if ((int)uStack_d68 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar24 = iVar22 + uVar30;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar26 = uVar19;
      uStack_d4c = auStack_d80[0];
      uVar18 = uStack_d78;
      do {
        for (; (int)uVar26 <= (int)uVar24; uVar26 = uVar26 + 1) {
          load_supplier_0xbc750(0x14266c870,uVar18,uVar26);
          if (uVar26 == uVar19) {
            uVar16 = puVar21[-6];
          }
          else if (uVar26 == uVar24 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar26 == uVar24 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar26 == uVar24 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar26 == uVar24) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar26 = uVar19;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      uVar26 = uStack_d78;
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_748,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_748);
      if (cVar4 == '\0') {
LAB_140207bd7:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140207bdd;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_748,"...");
          goto LAB_140207bd7;
        }
LAB_140207bdd:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_748,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_748,0,0);
      iVar22 = (int)uStack_d68;
      uVar20 = iVar22 - uStack_d98;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d98)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar20) {
        uVar18 = uVar20;
      }
      uStack_d50 = uVar18 + uStack_d98;
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)uStack_d50) {
        do {
          uStack_db8 = uVar18;
          if ((int)uStack_d68 <= (int)uVar18) break;
          if (((((int)uVar19 <= iStack_d84) && (iStack_d84 <= (int)uVar30)) &&
              ((int)uVar23 <= iStack_d88)) && (iStack_d88 <= (int)(uVar23 + 2))) {
            uStack_d8c = uVar18;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar19 <= (int)uVar30) {
            iVar22 = uVar23 + 3;
            uVar20 = uVar19;
            do {
              if ((int)uVar23 < iVar22) {
                if (uVar20 == uVar30) {
                  puVar21 = (undefined4 *)0x14266e230;
                  uVar26 = uVar23;
                  do {
                    if (uVar20 == uVar19) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar26 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  uVar26 = uVar23;
                  do {
                    if (uVar20 == uVar19) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar26 < iVar22);
                }
              }
              uVar20 = uVar20 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar20 <= (int)uVar30);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar19);
          load_supplier_0x70cc0(auStack_a28);
          load_supplier_0x70cc0(auStack_668);
          lVar27 = lStack_db0;
          plVar7 = (longlong *)load_supplier_0x70850(lStack_db0 + 0x2e0,(longlong)(int)uVar18);
          lVar13 = *plVar7 + 0x38;
          lVar6 = load_supplier_0xc272f0();
          if (lVar6 != 0) {
            lVar13 = FUN_140c521e0(lVar6);
          }
          FUN_140aadad0(lVar13,auStack_a28);
          FUN_140aae180(lVar13,auStack_668,1,0);
          load_supplier_0x70b90(auStack_a28,", \"");
          load_supplier_0xbb340(auStack_a28,auStack_668);
          load_supplier_0x70b90(auStack_a28,"\"");
          iVar22 = uVar30 - uVar19;
          uVar8 = load_supplier_0x70960(auStack_a28);
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_a28,(longlong)iVar22 + -3);
            }
            lVar27 = lStack_db0;
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a28,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a28,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a28,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
              lVar27 = lStack_db0;
            }
          }
          FUN_140af3400(0x14266c870,auStack_a28,0,0);
          load_supplier_0x69460(auStack_668);
          load_supplier_0x69460(auStack_a28);
          uVar23 = uVar23 + 3;
          uVar18 = uVar18 + 1;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d50);
        iVar22 = (int)uStack_d68;
        uVar26 = uStack_d78;
      }
      uVar20 = uStack_d98;
      if ((int)uStack_d98 < iVar22) {
        iVar22 = uStack_d98 * 3;
        load_supplier_0xbc990(auStack_cf8);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = uVar26 + 1 + iVar22;
        uStack_e00._0_4_ = uVar26 + 4;
        load_supplier_0xbc9b0(auStack_cf8,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d68 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_cf8,iStack_d84,iStack_d88,uVar30 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d4c;
          if (0 < iVar25) {
            iVar25 = (uint)uStack_d38;
            do {
              load_supplier_0xbc750(0x14266c870,iVar25,uVar19);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              iVar25 = iVar25 + 1;
              if ((int)uVar20 < iVar25) break;
              iVar22 = iVar22 + 1;
              iVar28 = load_supplier_0x70480(lVar27);
            } while (iVar22 < iVar28);
          }
        }
      }
      load_supplier_0x69460(auStack_748);
      break;
    case 2:
      uVar30 = uStack_da8 + 2;
      uStack_d70 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uStack_d70) + -7) / 3;
      uStack_d98 = uVar18;
      uStack_d58 = load_supplier_0x709a0(lStack_db0 + 0x2f8);
      uStack_d94 = uVar26 - 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        uStack_d94 = uVar26;
      }
      uStack_d4c = auStack_d80[0] - 6;
      uStack_d40 = auStack_d80[0] - 4;
      uStack_da4 = auStack_d80[0] - 2;
      uStack_d44 = uVar20 + 10;
      uVar26 = uStack_d90 - 9;
      uStack_d38 = CONCAT44(uStack_d38._4_4_,uVar26);
      uStack_d9c = uStack_d90 - 7;
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uStack_d90 - 3);
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar19 = iVar22 + uStack_d94;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar18 = uVar30;
      do {
        for (; (int)uVar18 <= (int)uVar19; uVar18 = uVar18 + 1) {
          load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
          if (uVar18 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar19 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar18 == uVar19 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar18 == uVar19 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar18 == uVar19) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_8e8,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_8e8);
      if (cVar4 == '\0') {
LAB_14020825f:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140208265;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_8e8,"...");
          goto LAB_14020825f;
        }
LAB_140208265:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_8e8,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_8e8,0,0);
      uVar23 = uStack_d94;
      uStack_da0 = uStack_d70;
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_d98;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d98)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar20) {
        uVar18 = uVar20;
      }
      uStack_d50 = uVar18 + uStack_d98;
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)uStack_d50) {
        uVar20 = uStack_d70;
        do {
          uStack_db8 = uVar18;
          if ((int)uStack_d58 <= (int)uVar18) break;
          if (((((int)uVar30 <= iStack_d84) && (iStack_d84 <= (int)uVar23)) &&
              ((int)uVar20 <= iStack_d88)) && (iStack_d88 <= (int)(uVar20 + 2))) {
            uStack_d8c = uVar18;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar30 <= (int)uVar23) {
            iVar22 = uVar20 + 3;
            uVar26 = uVar30;
            do {
              uVar18 = uVar20;
              if ((int)uVar20 < iVar22) {
                if (uVar26 == uVar23) {
                  puVar21 = (undefined4 *)0x14266e230;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar20;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar20 = uVar20 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                  } while ((int)uVar20 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar20;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar20 = uVar20 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                  } while ((int)uVar20 < iVar22);
                }
              }
              uVar20 = uVar18;
              uVar26 = uVar26 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar26 <= (int)uVar23);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          uStack_da0 = uVar20 + 3;
          load_supplier_0xbc750(0x14266c870,uVar20 + 1);
          piVar11 = (int *)load_supplier_0x70990(lVar27 + 0x2f8,(longlong)(int)uVar18);
          plVar7 = (longlong *)load_supplier_0x70850(&DAT_14250ed78,(longlong)*piVar11);
          FUN_140070c00(auStack_968,*plVar7 + 0x50);
          FUN_140546b30(auStack_968);
          iVar22 = uVar23 - uVar30;
          uVar8 = load_supplier_0x70960(auStack_968);
          uVar20 = uVar20 + 3;
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_968,(longlong)iVar22 + -3);
            }
            uVar20 = uStack_da0;
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_968,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_968,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_968,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
              uVar20 = uStack_da0;
            }
          }
          FUN_140af3400(0x14266c870,auStack_968,0,0);
          load_supplier_0x69460(auStack_968);
          uVar18 = uVar18 + 1;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d50);
        iVar22 = (int)uStack_d58;
        lVar27 = lStack_db0;
        uVar26 = (uint)uStack_d38;
      }
      uVar20 = uStack_d98;
      puVar21 = (undefined4 *)0x14266e3a4;
      if ((int)uStack_d98 < iVar22) {
        iVar25 = uStack_d70 + 1;
        iVar28 = uStack_d70 - 2;
        iVar22 = uStack_d98 * 3;
        load_supplier_0xbc990(auStack_cd8);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = iVar28 + iVar22;
        uStack_e00._0_4_ = iVar25;
        load_supplier_0xbc9b0(auStack_cd8,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d58 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_cd8,iStack_d84,iStack_d88,uStack_d94 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d40;
          uVar23 = uStack_d4c;
          if (0 < iVar25) {
            do {
              load_supplier_0xbc750(0x14266c870,uVar23,uVar30);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              if ((int)uVar20 < (int)(uVar23 + 1)) break;
              iVar22 = iVar22 + 1;
              iVar25 = load_supplier_0x70480(lVar27);
              uVar23 = uVar23 + 1;
            } while (iVar22 < iVar25);
          }
        }
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_da4 + 1,uVar30);
      FUN_140069780(auStack_288,"Number:");
      FUN_140af3400(0x14266c870,auStack_288,0,0);
      load_supplier_0x69460(auStack_288);
      uVar30 = uStack_d44;
      uVar23 = uStack_da4;
      uVar20 = uVar30;
      uVar18 = uStack_da4;
      do {
        for (; (int)uVar20 <= (int)uVar26; uVar20 = uVar20 + 1) {
          if (uVar20 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar20 == uVar26 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar20 == uVar26 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar20 == uVar26 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar20 == uVar26) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          _DAT_14266c8f4 = uVar20;
          _DAT_14266c8f8 = uVar18;
          load_supplier_0xaf4570(0x14266c870,uVar16);
          if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar20 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar30 + 2);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_728,lStack_db0 + 0x60);
      cVar4 = load_supplier_0x70b50(auStack_728);
      if (cVar4 == '\0') {
LAB_140208846:
        if (*(char *)(lVar27 + 0x58) != '\0') goto LAB_14020884c;
      }
      else {
        if (*(char *)(lVar27 + 0x58) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_728,"...");
          goto LAB_140208846;
        }
LAB_14020884c:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_728,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_728,0,0);
      load_supplier_0x69460(auStack_728);
      load_supplier_0xbc760(0x14266c870,7,0,0);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26 - 0x1d);
      FUN_140069780(auStack_68,"(0 for unnumbered plural)");
      FUN_140af3400(0x14266c870,auStack_68,0,0);
      load_supplier_0x69460(auStack_68);
      uVar26 = uStack_d9c;
      iVar22 = uStack_d9c + 1;
      iVar25 = uStack_d9c + 2;
      uVar20 = uStack_d9c + 3;
      puVar21 = (undefined4 *)0x142672120;
      do {
        _DAT_14266c8f4 = uVar26;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[-6]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = iVar22;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[-3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = iVar25;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,*puVar21);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        _DAT_14266c8f4 = uVar20;
        _DAT_14266c8f8 = uVar23;
        load_supplier_0xaf4570(0x14266c870,puVar21[3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14267212c);
      puVar21 = (undefined4 *)0x142672138;
      iVar22 = (int)uStack_d68;
      uVar20 = uStack_da4;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        iVar25 = iVar22;
        do {
          load_supplier_0xbc750(0x14266c870,uVar20,iVar25);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          iVar25 = iVar25 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar20 = uVar20 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672144);
      load_supplier_0x69460(auStack_8e8);
      break;
    case 3:
      uVar30 = uStack_da8 + 2;
      uStack_d70 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uStack_d70) + -7) / 3;
      uStack_d98 = uVar18;
      uStack_d58 = load_supplier_0x709a0(lStack_db0 + 0x310);
      uStack_d94 = uVar26 - 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        uStack_d94 = uVar26;
      }
      uStack_d38 = CONCAT44(uStack_d38._4_4_,auStack_d80[0] - 6);
      uStack_d4c = auStack_d80[0] - 4;
      uStack_da4 = auStack_d80[0] - 2;
      uStack_d40 = uVar20 + 10;
      uVar26 = uStack_d90 - 9;
      uStack_d9c = uStack_d90 - 7;
      uStack_d44 = uStack_d90 - 3;
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar19 = iVar22 + uStack_d94;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar18 = uVar30;
      lVar27 = uStack_d68;
      uStack_d50 = uVar26;
      do {
        for (; (int)uVar18 <= (int)uVar19; uVar18 = uVar18 + 1) {
          uStack_d68 = lVar27;
          load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
          if (uVar18 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar19 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar18 == uVar19 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar18 == uVar19 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar18 == uVar19) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          lVar27 = uStack_d68;
        }
        uStack_d68._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_8a8,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_8a8);
      if (cVar4 == '\0') {
LAB_140208cbf:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140208cc5;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_8a8,"...");
          goto LAB_140208cbf;
        }
LAB_140208cc5:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_8a8,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_8a8,0,0);
      uVar23 = uStack_d94;
      uStack_da0 = uStack_d70;
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_d98;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d98)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar20) {
        uVar18 = uVar20;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uVar18 + uStack_d98);
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)(uVar18 + uStack_d98)) {
        uVar20 = uStack_d70;
        do {
          uStack_db8 = uVar18;
          if ((int)uStack_d58 <= (int)uVar18) break;
          if (((((int)uVar30 <= iStack_d84) && (iStack_d84 <= (int)uVar23)) &&
              ((int)uVar20 <= iStack_d88)) && (iStack_d88 <= (int)(uVar20 + 2))) {
            uStack_d8c = uVar18;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar30 <= (int)uVar23) {
            iVar22 = uVar20 + 3;
            uVar26 = uVar30;
            do {
              uVar18 = uVar20;
              if ((int)uVar20 < iVar22) {
                if (uVar26 == uVar23) {
                  puVar21 = (undefined4 *)0x14266e230;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar20;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar20 = uVar20 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                  } while ((int)uVar20 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar20;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar20 = uVar20 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                  } while ((int)uVar20 < iVar22);
                }
              }
              uVar20 = uVar18;
              uVar26 = uVar26 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar26 <= (int)uVar23);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          uStack_da0 = uVar20 + 3;
          load_supplier_0xbc750(0x14266c870,uVar20 + 1);
          piVar11 = (int *)load_supplier_0x70990(lVar27 + 0x310,(longlong)(int)uVar18);
          plVar7 = (longlong *)load_supplier_0x70850(&DAT_14250ed78,(longlong)*piVar11);
          FUN_140070c00(auStack_948,*plVar7 + 0x50);
          FUN_140546b30(auStack_948);
          iVar22 = uVar23 - uVar30;
          uVar8 = load_supplier_0x70960(auStack_948);
          uVar20 = uVar20 + 3;
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_948,(longlong)iVar22 + -3);
            }
            uVar20 = uStack_da0;
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_948,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_948,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_948,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
              uVar20 = uStack_da0;
            }
          }
          FUN_140af3400(0x14266c870,auStack_948,0,0);
          load_supplier_0x69460(auStack_948);
          uVar18 = uVar18 + 1;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d68);
        iVar22 = (int)uStack_d58;
        lVar27 = lStack_db0;
        uVar26 = uStack_d50;
      }
      uVar20 = uStack_d98;
      puVar21 = (undefined4 *)0x14266e3a4;
      if ((int)uStack_d98 < iVar22) {
        iVar25 = uStack_d70 + 1;
        iVar28 = uStack_d70 - 2;
        iVar22 = uStack_d98 * 3;
        load_supplier_0xbc990(auStack_cb8);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = iVar28 + iVar22;
        uStack_e00._0_4_ = iVar25;
        load_supplier_0xbc9b0(auStack_cb8,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d58 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_cb8,iStack_d84,iStack_d88,uStack_d94 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d4c;
          if (0 < iVar25) {
            iVar25 = (uint)uStack_d38;
            do {
              load_supplier_0xbc750(0x14266c870,iVar25,uVar30);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              iVar25 = iVar25 + 1;
              if ((int)uVar20 < iVar25) break;
              iVar22 = iVar22 + 1;
              iVar28 = load_supplier_0x70480(lVar27);
            } while (iVar22 < iVar28);
          }
        }
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_da4 + 1,uVar30);
      FUN_140069780(auStack_228,"Number:");
      FUN_140af3400(0x14266c870,auStack_228,0,0);
      load_supplier_0x69460(auStack_228);
      uVar30 = uStack_d40;
      uVar23 = uStack_da4;
      uVar20 = uVar30;
      uVar18 = uStack_da4;
      do {
        for (; (int)uVar20 <= (int)uVar26; uVar20 = uVar20 + 1) {
          if (uVar20 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar20 == uVar26 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar20 == uVar26 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar20 == uVar26 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar20 == uVar26) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          _DAT_14266c8f4 = uVar20;
          _DAT_14266c8f8 = uVar18;
          load_supplier_0xaf4570(0x14266c870,uVar16);
          if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar20 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar30 + 2);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_8c8,lStack_db0 + 0x60);
      cVar4 = load_supplier_0x70b50(auStack_8c8);
      if (cVar4 == '\0') {
LAB_1402092a6:
        if (*(char *)(lVar27 + 0x58) != '\0') goto LAB_1402092ac;
      }
      else {
        if (*(char *)(lVar27 + 0x58) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_8c8,"...");
          goto LAB_1402092a6;
        }
LAB_1402092ac:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_8c8,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_8c8,0,0);
      load_supplier_0x69460(auStack_8c8);
      load_supplier_0xbc760(0x14266c870,7,0,0);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26 - 0x1d);
      FUN_140069780(auStack_208,"(0 for unnumbered plural)");
      FUN_140af3400(0x14266c870,auStack_208,0,0);
      load_supplier_0x69460(auStack_208);
      uVar20 = uStack_d9c;
      iVar22 = uStack_d9c + 1;
      iVar25 = uStack_d9c + 2;
      iVar28 = uStack_d9c + 3;
      puVar21 = (undefined4 *)0x142672120;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,uVar20);
        load_supplier_0xaf4570(0x14266c870,puVar21[-6]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar22);
        load_supplier_0xaf4570(0x14266c870,puVar21[-3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar25);
        load_supplier_0xaf4570(0x14266c870,*puVar21);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar28);
        load_supplier_0xaf4570(0x14266c870,puVar21[3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        uVar26 = uStack_d44;
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14267212c);
      puVar21 = (undefined4 *)0x142672138;
      uVar20 = uStack_da4;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        uVar23 = uVar26;
        do {
          load_supplier_0xbc750(0x14266c870,uVar20,uVar23);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar23 = uVar23 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar20 = uVar20 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672144);
      load_supplier_0x69460(auStack_8a8);
      break;
    case 4:
      uVar30 = uStack_da8 + 2;
      uStack_d98 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uStack_d98) + -7) / 3;
      uStack_db8 = uVar18;
      uStack_d58 = load_supplier_0x709a0(lVar27 + 0x328);
      uStack_da0 = uVar26 - 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        uStack_da0 = uVar26;
      }
      uStack_d38 = CONCAT44(uStack_d38._4_4_,auStack_d80[0] - 6);
      uStack_d4c = auStack_d80[0] - 4;
      uStack_d40 = auStack_d80[0] - 2;
      uStack_d44 = uVar20 + 10;
      uVar26 = uStack_d90 - 9;
      uStack_d70 = uStack_d90 - 7;
      uStack_d94 = uStack_d90 - 3;
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar19 = iVar22 + uStack_da0;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar18 = uVar30;
      lVar27 = uStack_d68;
      uStack_d50 = uVar26;
      do {
        for (; (int)uVar18 <= (int)uVar19; uVar18 = uVar18 + 1) {
          uStack_d68 = lVar27;
          load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
          if (uVar18 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar19 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar18 == uVar19 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar18 == uVar19 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar18 == uVar19) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          lVar27 = uStack_d68;
        }
        uStack_d68._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_708,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_708);
      if (cVar4 == '\0') {
LAB_14020972f:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_140209735;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_708,"...");
          goto LAB_14020972f;
        }
LAB_140209735:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_708,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_708,0,0);
      uStack_d9c = uStack_d98;
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_db8;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_db8)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uStack_da4 = 0;
      if (-1 < (int)uVar20) {
        uStack_da4 = uVar20;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uStack_db8 + uStack_da4);
      if ((int)uStack_da4 < (int)(uStack_db8 + uStack_da4)) {
        lVar13 = lVar27 + 0x328;
        uVar20 = uStack_da0;
        do {
          uVar23 = uStack_d9c;
          if (iVar22 <= (int)uStack_da4) break;
          if (((((int)uVar30 <= iStack_d84) && (iStack_d84 <= (int)uVar20)) &&
              ((int)uStack_d9c <= iStack_d88)) && (iStack_d88 <= (int)(uStack_d9c + 2))) {
            uStack_d8c = uStack_da4;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar30 <= (int)uVar20) {
            iVar25 = uVar23 + 3;
            uVar18 = uStack_da0;
            uVar26 = uVar30;
            do {
              uVar20 = uVar23;
              if ((int)uVar23 < iVar25) {
                if (uVar26 == uVar18) {
                  puVar21 = (undefined4 *)0x14266e230;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar23;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar23 = uVar23 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar23 < iVar25);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  do {
                    if (uVar26 == uVar30) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar26;
                    _DAT_14266c8f8 = uVar23;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar23 = uVar23 + 1;
                    puVar21 = puVar21 + 1;
                    uVar18 = uStack_da0;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar23 < iVar25);
                }
              }
              uVar23 = uVar20;
              uVar26 = uVar26 + 1;
              lVar27 = lStack_db0;
              uVar20 = uStack_da0;
            } while ((int)uVar26 <= (int)uVar18);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1);
          load_supplier_0x70cc0(auStack_a08);
          lVar6 = (longlong)(int)uStack_da4;
          piVar11 = (int *)load_supplier_0x70990(lVar27 + 0x340,lVar6);
          if (*piVar11 != -1) {
            piVar11 = (int *)load_supplier_0x70990(lVar13,lVar6);
            plVar7 = (longlong *)load_supplier_0x70850(&DAT_142519550,(longlong)*piVar11);
            lVar31 = *plVar7;
            piVar11 = (int *)load_supplier_0x70990(lVar27 + 0x340,lVar6);
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar31 + 0x90,(longlong)*piVar11);
            load_supplier_0xbb340(auStack_a08,*puVar5);
            load_supplier_0x70b90(auStack_a08," ");
          }
          piVar11 = (int *)load_supplier_0x70990(lVar13,lVar6);
          plVar7 = (longlong *)load_supplier_0x70850(&DAT_142519550,(longlong)*piVar11);
          load_supplier_0xbb340(auStack_a08,*plVar7 + 0x50);
          FUN_140546b30(auStack_a08);
          iVar25 = uVar20 - uVar30;
          uVar8 = load_supplier_0x70960(auStack_a08);
          if ((ulonglong)(longlong)(iVar25 + -2) <= uVar8) {
            if (-1 < iVar25 + -3) {
              load_supplier_0xe2860(auStack_a08,(longlong)iVar25 + -3);
            }
            if (3 < iVar25 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a08,(longlong)iVar25 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a08,(longlong)(iVar25 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_a08,(longlong)(iVar25 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_a08,0,0);
          load_supplier_0x69460(auStack_a08);
          uStack_d9c = uStack_d9c + 3;
          uStack_da4 = uStack_da4 + 1;
          lVar27 = lStack_db0;
        } while ((int)uStack_da4 < (int)uStack_d68);
        iVar22 = (int)uStack_d58;
        uVar26 = uStack_d50;
      }
      uVar20 = uStack_db8;
      puVar21 = (undefined4 *)0x14266e3a4;
      if ((int)uStack_db8 < iVar22) {
        iVar28 = uStack_d98 + 1;
        iVar29 = uStack_d98 - 2;
        iVar25 = uStack_db8 * 3;
        load_supplier_0xbc990(auStack_c98);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = iVar29 + iVar25;
        uStack_e00._0_4_ = iVar28;
        load_supplier_0xbc9b0(auStack_c98,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_c98,iStack_d84,iStack_d88,uStack_da0 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d4c;
          if (0 < iVar25) {
            iVar25 = (uint)uStack_d38;
            do {
              load_supplier_0xbc750(0x14266c870,iVar25,uVar30);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              iVar25 = iVar25 + 1;
              if ((int)uVar20 < iVar25) break;
              iVar22 = iVar22 + 1;
              iVar28 = load_supplier_0x70480(lVar27);
            } while (iVar22 < iVar28);
          }
        }
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      uVar18 = uStack_d40;
      load_supplier_0xbc750(0x14266c870,uStack_d40 + 1,uVar30);
      FUN_140069780(auStack_1c8,"Number:");
      FUN_140af3400(0x14266c870,auStack_1c8,0,0);
      load_supplier_0x69460(auStack_1c8);
      uVar23 = uStack_d44;
      uVar20 = uVar23;
      uVar30 = uVar18;
      do {
        for (; (int)uVar20 <= (int)uVar26; uVar20 = uVar20 + 1) {
          if (uVar20 == uVar23) {
            uVar16 = puVar21[-6];
          }
          else if (uVar20 == uVar26 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar20 == uVar26 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar20 == uVar26 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar20 == uVar26) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          _DAT_14266c8f4 = uVar20;
          _DAT_14266c8f8 = uVar30;
          load_supplier_0xaf4570(0x14266c870,uVar16);
          if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar30 = uVar30 + 1;
        puVar21 = puVar21 + 1;
        uVar20 = uVar23;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar18 + 1,uVar23 + 2);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_888,lStack_db0 + 0x60);
      cVar4 = load_supplier_0x70b50(auStack_888);
      if (cVar4 == '\0') {
LAB_140209da4:
        if (*(char *)(lVar27 + 0x58) != '\0') goto LAB_140209daa;
      }
      else {
        if (*(char *)(lVar27 + 0x58) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_888,"...");
          goto LAB_140209da4;
        }
LAB_140209daa:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_888,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_888,0,0);
      load_supplier_0x69460(auStack_888);
      load_supplier_0xbc760(0x14266c870,7,0,0);
      load_supplier_0xbc750(0x14266c870,uVar18 + 1,uVar26 - 0x1d);
      FUN_140069780(auStack_1a8,"(0 for unnumbered plural)");
      FUN_140af3400(0x14266c870,auStack_1a8,0,0);
      load_supplier_0x69460(auStack_1a8);
      uVar20 = uStack_d70;
      puVar21 = (undefined4 *)0x142672108;
      uVar23 = uVar18;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        uVar26 = uVar20;
        do {
          load_supplier_0xbc750(0x14266c870,uVar23,uVar26);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar30 = uStack_d94;
          uVar26 = uVar26 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672114);
      puVar21 = (undefined4 *)0x142672138;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        uVar20 = uVar30;
        do {
          load_supplier_0xbc750(0x14266c870,uVar18,uVar20);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar20 = uVar20 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672144);
      load_supplier_0x69460(auStack_708);
      break;
    case 5:
      uVar30 = uStack_da8 + 2;
      uStack_d98 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uStack_d98) + -7) / 3;
      uStack_d94 = uVar18;
      uStack_d58 = load_supplier_0x709a0(lStack_db0 + 0x358);
      uStack_d70 = uVar26 - 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        uStack_d70 = uVar26;
      }
      uStack_d38 = CONCAT44(uStack_d38._4_4_,auStack_d80[0] - 6);
      uStack_d4c = auStack_d80[0] - 4;
      uStack_da0 = auStack_d80[0] - 2;
      uStack_d40 = uVar20 + 10;
      uVar26 = uStack_d90 - 9;
      uStack_d8c = uStack_d90 - 7;
      uStack_d44 = uStack_d90 - 3;
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar19 = iVar22 + uStack_d70;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar18 = uVar30;
      lVar27 = uStack_d68;
      uStack_d50 = uVar26;
      do {
        for (; (int)uVar18 <= (int)uVar19; uVar18 = uVar18 + 1) {
          uStack_d68 = lVar27;
          load_supplier_0xbc750(0x14266c870,uVar23,uVar18);
          if (uVar18 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar18 == uVar19 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar18 == uVar19 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar18 == uVar19 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar18 == uVar19) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          lVar27 = uStack_d68;
        }
        uStack_d68._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
        uVar18 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_848,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_848);
      if (cVar4 == '\0') {
LAB_14020a16f:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_14020a175;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_848,"...");
          goto LAB_14020a16f;
        }
LAB_14020a175:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_848,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_848,0,0);
      uVar23 = uStack_d70;
      uVar18 = 0xffffffff;
      uStack_d9c = uStack_d98;
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_d94;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d94)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uStack_db8 = 0;
      if (-1 < (int)uVar20) {
        uStack_db8 = uVar20;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uStack_db8 + uStack_d94);
      if ((int)uStack_db8 < (int)(uStack_db8 + uStack_d94)) {
        uVar18 = 0xffffffff;
        do {
          uVar26 = uStack_d9c;
          uVar20 = uStack_db8;
          if ((int)uStack_d58 <= (int)uStack_db8) break;
          if (((((int)uVar30 <= iStack_d84) && (iStack_d84 <= (int)uVar23)) &&
              ((int)uStack_d9c <= iStack_d88)) && (iStack_d88 <= (int)(uStack_d9c + 2))) {
            uVar18 = uStack_db8;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar30 <= (int)uVar23) {
            iVar22 = uVar26 + 3;
            uVar19 = uVar30;
            do {
              uVar20 = uVar26;
              if ((int)uVar26 < iVar22) {
                if (uVar19 == uVar23) {
                  puVar21 = (undefined4 *)0x14266e230;
                  do {
                    if (uVar19 == uVar30) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar19;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar26 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  do {
                    if (uVar19 == uVar30) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar19;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                    uVar20 = uStack_d9c;
                  } while ((int)uVar26 < iVar22);
                }
              }
              uVar26 = uVar20;
              uVar19 = uVar19 + 1;
              lVar27 = lStack_db0;
              uVar20 = uStack_db8;
            } while ((int)uVar19 <= (int)uVar23);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          uStack_d9c = uVar26 + 3;
          load_supplier_0xbc750(0x14266c870,uVar26 + 1,uVar30);
          load_supplier_0x70cc0(auStack_9c8);
          puVar14 = (undefined2 *)load_supplier_0x70990(lVar27 + 0x370,(longlong)(int)uVar20);
          lVar27 = lStack_db0;
          uVar1 = *puVar14;
          puVar14 = (undefined2 *)load_supplier_0x70990(lStack_db0 + 0x358);
          uStack_dc0 = 0;
          uStack_dc8 = 0;
          uStack_dd0 = 1;
          uStack_dd8 = 0xffffffff;
          uStack_de0 = 0xffffffff;
          uStack_de8 = 0;
          uStack_df0 = uStack_df0 & 0xffffff00;
          iStack_df8 = 0;
          uStack_e00 = (char *)CONCAT44(uStack_e00._4_4_,1);
          puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,0xffffffff);
          image_item_noun(auStack_9c8,*puVar14,uVar1,0xffffffff);
          FUN_140546b30(auStack_9c8);
          iVar22 = uVar23 - uVar30;
          uVar8 = load_supplier_0x70960(auStack_9c8);
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_9c8,(longlong)iVar22 + -3,0);
            }
            lVar27 = lStack_db0;
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9c8,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9c8,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9c8,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
              lVar27 = lStack_db0;
            }
          }
          FUN_140af3400(0x14266c870,auStack_9c8,0,0);
          load_supplier_0x69460(auStack_9c8);
          uStack_db8 = uVar20 + 1;
        } while ((int)uStack_db8 < (int)uStack_d68);
        iVar22 = (int)uStack_d58;
        uVar26 = uStack_d50;
        uStack_da4 = uVar18;
      }
      puVar21 = (undefined4 *)0x14266e3a4;
      if ((int)uStack_d94 < iVar22) {
        iVar22 = uStack_d98 + 1;
        iVar25 = uStack_d98 + uStack_d94 * 3;
        load_supplier_0xbc990(auStack_c78);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uStack_d94);
        iStack_df8 = iVar25 + -2;
        uStack_e00._0_4_ = iVar22;
        load_supplier_0xbc9b0(auStack_c78,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d58 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_c78,iStack_d84,iStack_d88,uStack_d70 + 1);
      }
      iVar22 = 0;
      if (uVar18 != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uVar18)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uVar18;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          uVar20 = uStack_d4c;
          if (0 < iVar25) {
            iVar25 = (uint)uStack_d38;
            do {
              load_supplier_0xbc750(0x14266c870,iVar25,uVar30);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              iVar25 = iVar25 + 1;
              if ((int)uVar20 < iVar25) break;
              iVar22 = iVar22 + 1;
              iVar28 = load_supplier_0x70480(lVar27);
            } while (iVar22 < iVar28);
          }
        }
      }
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uStack_da0 + 1,uVar30);
      FUN_140069780(auStack_168,"Number:");
      FUN_140af3400(0x14266c870,auStack_168,0,0);
      load_supplier_0x69460(auStack_168);
      uVar30 = uStack_d40;
      uVar23 = uStack_da0;
      uVar20 = uVar30;
      uVar18 = uStack_da0;
      do {
        for (; (int)uVar20 <= (int)uVar26; uVar20 = uVar20 + 1) {
          if (uVar20 == uVar30) {
            uVar16 = puVar21[-6];
          }
          else if (uVar20 == uVar26 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar20 == uVar26 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar20 == uVar26 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar20 == uVar26) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          _DAT_14266c8f4 = uVar20;
          _DAT_14266c8f8 = uVar18;
          load_supplier_0xaf4570(0x14266c870,uVar16);
          if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
        }
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar20 = uVar30;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar30 + 2);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_868,lStack_db0 + 0x60);
      cVar4 = load_supplier_0x70b50(auStack_868);
      if (cVar4 == '\0') {
LAB_14020a7b6:
        if (*(char *)(lVar27 + 0x58) != '\0') goto LAB_14020a7bc;
      }
      else {
        if (*(char *)(lVar27 + 0x58) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_868,"...");
          goto LAB_14020a7b6;
        }
LAB_14020a7bc:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_868,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_868,0,0);
      load_supplier_0x69460(auStack_868);
      load_supplier_0xbc760(0x14266c870,7,0,0);
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26 - 0x1d);
      FUN_140069780(auStack_148,"(0 for unnumbered plural)");
      FUN_140af3400(0x14266c870,auStack_148,0,0);
      load_supplier_0x69460(auStack_148);
      uVar20 = uStack_d8c;
      iVar22 = uStack_d8c + 1;
      iVar25 = uStack_d8c + 2;
      iVar28 = uStack_d8c + 3;
      puVar21 = (undefined4 *)0x142672120;
      do {
        load_supplier_0xbc750(0x14266c870,uVar23,uVar20);
        load_supplier_0xaf4570(0x14266c870,puVar21[-6]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar22);
        load_supplier_0xaf4570(0x14266c870,puVar21[-3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar25);
        load_supplier_0xaf4570(0x14266c870,*puVar21);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        load_supplier_0xbc750(0x14266c870,uVar23,iVar28);
        load_supplier_0xaf4570(0x14266c870,puVar21[3]);
        if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
          FUN_1400bc7c0(0x14266c870,0,1);
        }
        uVar26 = uStack_d44;
        uVar23 = uVar23 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x14267212c);
      puVar21 = (undefined4 *)0x142672138;
      uVar20 = uStack_da0;
      do {
        lVar27 = 4;
        puVar17 = puVar21;
        uVar23 = uVar26;
        do {
          load_supplier_0xbc750(0x14266c870,uVar20,uVar23);
          load_supplier_0xaf4570(0x14266c870,*puVar17);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          uVar23 = uVar23 + 1;
          puVar17 = puVar17 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        uVar20 = uVar20 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)puVar21 < 0x142672144);
      load_supplier_0x69460(auStack_848);
      break;
    case 6:
      uVar19 = uStack_da8 + 2;
      uVar23 = uVar23 + 3;
      uVar18 = (int)((auStack_d80[0] - uVar23) + -4) / 3;
      uStack_d98 = uVar18;
      uStack_d58 = load_supplier_0x70480(lStack_db0 + 0x388);
      uVar30 = uVar26 - 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        uVar30 = uVar26;
      }
      uStack_d38 = CONCAT44(uStack_d38._4_4_,auStack_d80[0]);
      uStack_d50 = auStack_d80[0] - 3;
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar18) {
        iVar22 = 0;
      }
      uVar24 = iVar22 + uVar30;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar26 = uVar19;
      lVar27 = uStack_d68;
      uVar18 = uStack_d78;
      do {
        for (; (int)uVar26 <= (int)uVar24; uVar26 = uVar26 + 1) {
          uStack_d68 = lVar27;
          load_supplier_0xbc750(0x14266c870,uVar18,uVar26);
          if (uVar26 == uVar19) {
            uVar16 = puVar21[-6];
          }
          else if (uVar26 == uVar24 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar26 == uVar24 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar26 == uVar24 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar26 == uVar24) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          lVar27 = uStack_d68;
        }
        uStack_d68._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uVar18 = uVar18 + 1;
        puVar21 = puVar21 + 1;
        uVar26 = uVar19;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      uVar26 = uStack_d78;
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_828,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_828);
      if (cVar4 == '\0') {
LAB_14020ac07:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_14020ac0d;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_828,"...");
          goto LAB_14020ac07;
        }
LAB_14020ac0d:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_828,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_828,0,0);
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_d98;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d98)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar20) {
        uVar18 = uVar20;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uVar18 + uStack_d98);
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)(uVar18 + uStack_d98)) {
        do {
          uStack_db8 = uVar18;
          if ((int)uStack_d58 <= (int)uVar18) break;
          if (((((int)uVar19 <= iStack_d84) && (iStack_d84 <= (int)uVar30)) &&
              ((int)uVar23 <= iStack_d88)) && (iStack_d88 <= (int)(uVar23 + 2))) {
            uStack_d8c = uVar18;
          }
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar19 <= (int)uVar30) {
            iVar22 = uVar23 + 3;
            uVar20 = uVar19;
            do {
              if ((int)uVar23 < iVar22) {
                if (uVar20 == uVar30) {
                  puVar21 = (undefined4 *)0x14266e230;
                  uVar26 = uVar23;
                  do {
                    if (uVar20 == uVar19) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar26 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  uVar26 = uVar23;
                  do {
                    if (uVar20 == uVar19) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar26;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar26 = uVar26 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar26 < iVar22);
                }
              }
              uVar20 = uVar20 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar20 <= (int)uVar30);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1);
          load_supplier_0x70cc0(auStack_ac8);
          load_supplier_0x70cc0(auStack_648);
          lVar27 = lStack_db0;
          plVar7 = (longlong *)load_supplier_0x70850(lStack_db0 + 0x388,(longlong)(int)uVar18);
          lVar13 = *plVar7;
          if (*(char *)(lVar13 + 0x7a) == '\0') {
            load_supplier_0x70bb0(auStack_ac8,"Untitled/unnamed");
          }
          else {
            FUN_140aadad0(lVar13 + 8,auStack_ac8);
            FUN_140aae180(lVar13 + 8,auStack_648,1,0);
            load_supplier_0x70b90(auStack_ac8,", \"");
            load_supplier_0xbb340(auStack_ac8,auStack_648);
            load_supplier_0x70b90(auStack_ac8,"\"");
          }
          iVar22 = uVar30 - uVar19;
          uVar8 = load_supplier_0x70960(auStack_ac8);
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_ac8,(longlong)iVar22 + -3);
            }
            lVar27 = lStack_db0;
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ac8,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ac8,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_ac8,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
              lVar27 = lStack_db0;
            }
          }
          FUN_140af3400(0x14266c870,auStack_ac8,0,0);
          load_supplier_0x69460(auStack_648);
          load_supplier_0x69460(auStack_ac8);
          uVar23 = uVar23 + 3;
          uVar18 = uVar18 + 1;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d68);
        iVar22 = (int)uStack_d58;
        uVar26 = uStack_d78;
      }
      uVar20 = uStack_d98;
      if ((int)uStack_d98 < iVar22) {
        iVar22 = uStack_d98 * 3;
        load_supplier_0xbc990(auStack_c58);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = uVar26 + 1 + iVar22;
        uStack_e00._0_4_ = uVar26 + 4;
        load_supplier_0xbc9b0(auStack_c58,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d58 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_c58,iStack_d84,iStack_d88,uVar30 + 1);
      }
      iVar22 = 0;
      if (uStack_d8c != 0xffffffff) {
        iVar25 = (uStack_d90 - uStack_da8) + -1;
        if ((*(int *)(lVar27 + 0x440) != iVar25) || (*(uint *)(lVar27 + 0x444) != uStack_d8c)) {
          *(int *)(lVar27 + 0x440) = iVar25;
          *(uint *)(lVar27 + 0x444) = uStack_d8c;
          image_selected_description(lVar27);
        }
        lVar27 = lVar27 + 0x428;
        lVar13 = load_supplier_0x70480(lVar27);
        if (lVar13 != 0) {
          load_supplier_0xbc760(0x14266c870,6,0,1);
          iVar25 = load_supplier_0x70480(lVar27);
          if (0 < iVar25) {
            iVar25 = (uint)uStack_d38;
            uVar20 = uStack_d50;
            do {
              load_supplier_0xbc750(0x14266c870,uVar20,uVar19);
              puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)iVar22);
              FUN_140af3400(0x14266c870,*puVar5,0,0);
              uVar20 = uVar20 + 1;
              if (iVar25 < (int)uVar20) break;
              iVar22 = iVar22 + 1;
              iVar28 = load_supplier_0x70480(lVar27);
            } while (iVar22 < iVar28);
          }
        }
      }
      load_supplier_0x69460(auStack_828);
      break;
    case 7:
      uVar18 = uStack_da8 + 2;
      uVar23 = uVar23 + 3;
      uVar30 = (int)((auStack_d80[0] - uVar23) + 1) / 3;
      uStack_d98 = uVar30;
      uStack_d58 = load_supplier_0x709a0(lStack_db0 + 0x3a0);
      uVar26 = uStack_d90 - 2;
      if ((int)uStack_d58 <= (int)uVar30) {
        uVar26 = uStack_d90;
      }
      iVar22 = 2;
      if ((int)uStack_d58 <= (int)uVar30) {
        iVar22 = 0;
      }
      uVar24 = iVar22 + uVar26;
      puVar21 = (undefined4 *)0x14266e3a4;
      uVar30 = uVar18;
      lVar27 = uStack_d68;
      uVar19 = uStack_d78;
      do {
        for (; (int)uVar30 <= (int)uVar24; uVar30 = uVar30 + 1) {
          uStack_d68 = lVar27;
          load_supplier_0xbc750(0x14266c870,uVar19,uVar30);
          if (uVar30 == uVar18) {
            uVar16 = puVar21[-6];
          }
          else if (uVar30 == uVar24 - 3) {
            uVar16 = *puVar21;
          }
          else if (uVar30 == uVar24 - 2) {
            uVar16 = puVar21[3];
          }
          else if (uVar30 == uVar24 - 1) {
            uVar16 = puVar21[6];
          }
          else if (uVar30 == uVar24) {
            uVar16 = puVar21[9];
          }
          else {
            uVar16 = puVar21[-3];
          }
          load_supplier_0xaf4570(0x14266c870,uVar16);
          cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
          if (cVar4 != '\0') {
            FUN_1400bc7c0(0x14266c870,0,1);
          }
          lVar27 = uStack_d68;
        }
        uStack_d68._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 1;
        uVar30 = uVar18;
      } while ((longlong)puVar21 < 0x14266e3b0);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      uVar30 = uStack_d78;
      load_supplier_0xbc750(0x14266c870,uStack_d78 + 1,uVar20 + 4);
      lVar27 = lStack_db0;
      FUN_140070c00(auStack_908,lStack_db0 + 0x38);
      cVar4 = load_supplier_0x70b50(auStack_908);
      if (cVar4 == '\0') {
LAB_14020b247:
        if (*(char *)(lVar27 + 0x34) != '\0') goto LAB_14020b24d;
      }
      else {
        if (*(char *)(lVar27 + 0x34) == '\0') {
          load_supplier_0xbc760(0x14266c870,0,0,1);
          load_supplier_0x70b90(auStack_908,"...");
          goto LAB_14020b247;
        }
LAB_14020b24d:
        if (uStack_d5c % 1000 < 500) {
          load_supplier_0x70b90(auStack_908,"_");
        }
      }
      FUN_140af3400(0x14266c870,auStack_908,0,0);
      iVar22 = (int)uStack_d58;
      uVar20 = iVar22 - uStack_d98;
      if (*(int *)(lVar27 + 0x30) <= (int)(iVar22 - uStack_d98)) {
        uVar20 = *(uint *)(lVar27 + 0x30);
      }
      uVar19 = 0;
      if (-1 < (int)uVar20) {
        uVar19 = uVar20;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uStack_d98 + uVar19);
      uStack_db8 = uVar19;
      if ((int)uVar19 < (int)(uStack_d98 + uVar19)) {
        do {
          uStack_db8 = uVar19;
          if ((int)uStack_d58 <= (int)uVar19) break;
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar18 <= (int)uVar26) {
            iVar22 = uVar23 + 3;
            uVar20 = uVar18;
            do {
              if ((int)uVar23 < iVar22) {
                if (uVar20 == uVar26) {
                  puVar21 = (undefined4 *)0x14266e230;
                  uVar30 = uVar23;
                  do {
                    if (uVar20 == uVar18) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar30;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar30 = uVar30 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar30 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  uVar30 = uVar23;
                  do {
                    if (uVar20 == uVar18) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    _DAT_14266c8f4 = uVar20;
                    _DAT_14266c8f8 = uVar30;
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    if ((0 < _DAT_1423efbf8) && ((*_DAT_1423efbf0 & 1) != 0)) {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar30 = uVar30 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar30 < iVar22);
                }
              }
              uVar20 = uVar20 + 1;
              uVar19 = uStack_db8;
            } while ((int)uVar20 <= (int)uVar26);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar18);
          load_supplier_0x70cc0(auStack_928);
          uVar15 = load_supplier_0x13d470(lStack_db0 + 0x3b8,auStack_af8,(longlong)(int)uVar19);
          load_supplier_0x13d330(uVar15);
          puVar21 = (undefined4 *)load_supplier_0x70990(lStack_db0 + 0x3a0,(longlong)(int)uVar19);
          FUN_1401fe2f0(auStack_928,*puVar21);
          iVar22 = uVar26 - uVar18;
          uVar8 = load_supplier_0x70960(auStack_928);
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_928,(longlong)iVar22 + -3);
            }
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_928,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_928,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_928,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_928,0,0);
          load_supplier_0x69460(auStack_928);
          uVar23 = uVar23 + 3;
          uVar19 = uVar19 + 1;
          uStack_db8 = uVar19;
        } while ((int)uVar19 < (int)uStack_d68);
        iVar22 = (int)uStack_d58;
        uVar30 = uStack_d78;
      }
      uVar20 = uStack_d98;
      if ((int)uStack_d98 < iVar22) {
        iVar22 = uStack_d98 * 3;
        load_supplier_0xbc990(auStack_c38);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar20);
        iStack_df8 = uVar30 + 1 + iVar22;
        uStack_e00._0_4_ = uVar30 + 4;
        load_supplier_0xbc9b0(auStack_c38,*(undefined4 *)(lStack_db0 + 0x30),0,(int)uStack_d58 + -1)
        ;
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_c38,iStack_d84,iStack_d88,uVar26 + 1);
      }
      load_supplier_0x69460(auStack_908);
      break;
    case 8:
      load_supplier_0x70cc0(auStack_628);
      FUN_1401fe2f0(auStack_628,*(undefined4 *)(lVar27 + 0x3f0),*(undefined1 *)(lVar27 + 0x3f4));
      uVar26 = uStack_da8 + 2;
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      FUN_140069780(auStack_e8,"Choose X: ");
      FUN_140af3400(0x14266c870,auStack_e8,3,0);
      load_supplier_0x69460(auStack_e8);
      FUN_140af3400(0x14266c870,auStack_628,0,0);
      iVar22 = uVar23 + 3;
      uVar23 = (int)((auStack_d80[0] - iVar22) + 1) / 3;
      uStack_d98 = uVar23;
      uStack_d58 = load_supplier_0x709a0(lVar27 + 0x3d8);
      uVar20 = uStack_d90 - 2;
      if ((int)uStack_d58 <= (int)uVar23) {
        uVar20 = uStack_d90;
      }
      uVar30 = (int)uStack_d58 - uVar23;
      if (*(int *)(lStack_db0 + 0x30) <= (int)uVar30) {
        uVar30 = *(uint *)(lStack_db0 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar30) {
        uVar18 = uVar30;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uVar23 + uVar18);
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)(uVar23 + uVar18)) {
        do {
          uVar23 = uStack_d98;
          uStack_db8 = uVar18;
          if ((int)uStack_d58 <= (int)uVar18) break;
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar26 <= (int)uVar20) {
            iVar25 = iVar22 + 3;
            uVar23 = uVar26;
            do {
              if (iVar22 < iVar25) {
                if (uVar23 == uVar20) {
                  puVar21 = (undefined4 *)0x14266e230;
                  iVar28 = iVar22;
                  do {
                    load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                    if (uVar23 == uVar26) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    iVar28 = iVar28 + 1;
                    puVar21 = puVar21 + 1;
                  } while (iVar28 < iVar25);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  iVar28 = iVar22;
                  do {
                    load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                    if (uVar23 == uVar26) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    iVar28 = iVar28 + 1;
                    puVar21 = puVar21 + 1;
                  } while (iVar28 < iVar25);
                }
              }
              uVar23 = uVar23 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar23 <= (int)uVar20);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,iVar22 + 1,uVar26);
          load_supplier_0x70cc0(auStack_9a8);
          lVar27 = lStack_db0 + 0x1d0;
          piVar11 = (int *)load_supplier_0x70990(lStack_db0 + 0x3d8,(longlong)(int)uVar18);
          puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)*piVar11);
          puStack_e08 = (uint *)((ulonglong)puStack_e08 & 0xffffffffffffff00);
          (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,auStack_9a8);
          FUN_140546b30(auStack_9a8);
          iVar25 = uVar20 - uVar26;
          uVar8 = load_supplier_0x70960(auStack_9a8);
          if ((ulonglong)(longlong)(iVar25 + -2) <= uVar8) {
            if (-1 < iVar25 + -3) {
              load_supplier_0xe2860(auStack_9a8,(longlong)iVar25 + -3);
            }
            if (3 < iVar25 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9a8,(longlong)iVar25 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9a8,(longlong)(iVar25 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9a8,(longlong)(iVar25 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_9a8,0,0);
          load_supplier_0x69460(auStack_9a8);
          iVar22 = iVar22 + 3;
          uVar18 = uVar18 + 1;
          uVar23 = uStack_d98;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d68);
      }
      uVar26 = uStack_d98;
      iVar22 = (int)uStack_d58;
      if ((int)uVar23 < iVar22) {
        iVar25 = uStack_d78 + 4;
        iVar28 = uStack_d78 + uStack_d98 * 3 + 1;
        load_supplier_0xbc990(auStack_c18);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar26);
        iStack_df8 = iVar28;
        uStack_e00._0_4_ = iVar25;
        load_supplier_0xbc9b0(auStack_c18,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_c18,iStack_d84,iStack_d88,uVar20 + 1);
      }
      load_supplier_0x69460(auStack_628);
      break;
    case 9:
      load_supplier_0x70cc0(auStack_608);
      FUN_1401fe2f0(auStack_608,*(undefined4 *)(lVar27 + 0x3f0),*(undefined1 *)(lVar27 + 0x3f4));
      uVar26 = uStack_da8 + 2;
      load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26);
      load_supplier_0xbc760(0x14266c870,7,0,1);
      FUN_140069780(auStack_a8,"Choose Y: ");
      FUN_140af3400(0x14266c870,auStack_a8,3,0);
      load_supplier_0x69460(auStack_a8);
      FUN_140af3400(0x14266c870,auStack_608,0,0);
      iVar22 = uVar23 + 3;
      uVar23 = (int)((auStack_d80[0] - iVar22) + 1) / 3;
      uStack_d98 = uVar23;
      uStack_d58 = load_supplier_0x709a0(lVar27 + 0x3d8);
      uVar20 = uStack_d90 - 2;
      if ((int)uStack_d58 <= (int)uVar23) {
        uVar20 = uStack_d90;
      }
      uVar30 = (int)uStack_d58 - uVar23;
      if (*(int *)(lStack_db0 + 0x30) <= (int)uVar30) {
        uVar30 = *(uint *)(lStack_db0 + 0x30);
      }
      uVar18 = 0;
      if (-1 < (int)uVar30) {
        uVar18 = uVar30;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uVar18 + uVar23);
      uStack_db8 = uVar18;
      if ((int)uVar18 < (int)(uVar18 + uVar23)) {
        do {
          uVar23 = uStack_d98;
          uStack_db8 = uVar18;
          if ((int)uStack_d58 <= (int)uVar18) break;
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar26 <= (int)uVar20) {
            iVar25 = iVar22 + 3;
            uVar23 = uVar26;
            do {
              if (iVar22 < iVar25) {
                if (uVar23 == uVar20) {
                  puVar21 = (undefined4 *)0x14266e230;
                  iVar28 = iVar22;
                  do {
                    load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                    if (uVar23 == uVar26) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    iVar28 = iVar28 + 1;
                    puVar21 = puVar21 + 1;
                  } while (iVar28 < iVar25);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  iVar28 = iVar22;
                  do {
                    load_supplier_0xbc750(0x14266c870,iVar28,uVar23);
                    if (uVar23 == uVar26) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    iVar28 = iVar28 + 1;
                    puVar21 = puVar21 + 1;
                  } while (iVar28 < iVar25);
                }
              }
              uVar23 = uVar23 + 1;
              uVar18 = uStack_db8;
            } while ((int)uVar23 <= (int)uVar20);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,iVar22 + 1,uVar26);
          load_supplier_0x70cc0(auStack_988);
          lVar27 = lStack_db0 + 0x1d0;
          piVar11 = (int *)load_supplier_0x70990(lStack_db0 + 0x3d8,(longlong)(int)uVar18);
          puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)*piVar11);
          puStack_e08 = (uint *)((ulonglong)puStack_e08 & 0xffffffffffffff00);
          (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,auStack_988);
          FUN_140546b30(auStack_988);
          iVar25 = uVar20 - uVar26;
          uVar8 = load_supplier_0x70960(auStack_988);
          if ((ulonglong)(longlong)(iVar25 + -2) <= uVar8) {
            if (-1 < iVar25 + -3) {
              load_supplier_0xe2860(auStack_988,(longlong)iVar25 + -3);
            }
            if (3 < iVar25 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_988,(longlong)iVar25 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_988,(longlong)(iVar25 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_988,(longlong)(iVar25 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_988,0,0);
          load_supplier_0x69460(auStack_988);
          iVar22 = iVar22 + 3;
          uVar18 = uVar18 + 1;
          uVar23 = uStack_d98;
          uStack_db8 = uVar18;
        } while ((int)uVar18 < (int)uStack_d68);
      }
      uVar26 = uStack_d98;
      iVar22 = (int)uStack_d58;
      if ((int)uVar23 < iVar22) {
        iVar25 = uStack_d78 + 4;
        iVar28 = uStack_d78 + uStack_d98 * 3 + 1;
        load_supplier_0xbc990(auStack_bf8);
        lVar27 = lStack_db0;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar26);
        iStack_df8 = iVar28;
        uStack_e00._0_4_ = iVar25;
        load_supplier_0xbc9b0(auStack_bf8,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_bf8,iStack_d84,iStack_d88,uVar20 + 1);
      }
      load_supplier_0x69460(auStack_608);
      break;
    case 10:
      uVar26 = uStack_da8 + 2;
      uVar23 = (int)((auStack_d80[0] - uVar23) + 1) / 3;
      uStack_db8 = uVar23;
      uStack_d50 = uVar26;
      iVar22 = load_supplier_0x70480(lVar27 + 0x1e8);
      iVar25 = load_supplier_0x70480(lVar27 + 0x1d0);
      uStack_d58 = (ulonglong)(uint)(iVar22 + iVar25);
      uVar20 = uStack_d90 - 2;
      if (iVar22 + iVar25 <= (int)uVar23) {
        uVar20 = uStack_d90;
      }
      uStack_d38 = load_supplier_0x70480(lVar27 + 0x1d0);
      iVar22 = (int)uStack_d58;
      uVar30 = iVar22 - uVar23;
      if (*(int *)(lStack_db0 + 0x30) <= (int)(iVar22 - uVar23)) {
        uVar30 = *(uint *)(lStack_db0 + 0x30);
      }
      uStack_da4 = 0;
      if (-1 < (int)uVar30) {
        uStack_da4 = uVar30;
      }
      uStack_d68 = CONCAT44(uStack_d68._4_4_,uStack_da4 + uStack_db8);
      if ((int)uStack_da4 < (int)(uStack_da4 + uStack_db8)) {
        uVar30 = uStack_da4 - (int)uStack_d38;
        uVar23 = uStack_d78;
        do {
          uVar18 = uStack_da4;
          iVar22 = (int)uStack_d58;
          uStack_d94 = uVar30;
          if (iVar22 <= (int)uStack_da4) break;
          load_supplier_0xbc760(0x14266c870,7,0,1);
          if ((int)uVar26 <= (int)uVar20) {
            iVar22 = uVar23 + 3;
            uVar19 = uVar26;
            do {
              if ((int)uVar23 < iVar22) {
                if (uVar19 == uVar20) {
                  puVar21 = (undefined4 *)0x14266e230;
                  uVar30 = uVar23;
                  do {
                    load_supplier_0xbc750(0x14266c870,uVar30,uVar19);
                    if (uVar19 == uVar26) {
                      uVar16 = puVar21[-6];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar30 = uVar30 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar30 < iVar22);
                }
                else {
                  puVar21 = (undefined4 *)0x14266e224;
                  uVar30 = uVar23;
                  do {
                    load_supplier_0xbc750(0x14266c870,uVar30,uVar19);
                    if (uVar19 == uVar26) {
                      uVar16 = puVar21[-3];
                    }
                    else {
                      uVar16 = *puVar21;
                    }
                    load_supplier_0xaf4570(0x14266c870,uVar16);
                    cVar4 = load_supplier_0x735c0(&DAT_1423efbf0,0);
                    if (cVar4 != '\0') {
                      FUN_1400bc7c0(0x14266c870,0,1);
                    }
                    uVar30 = uVar30 + 1;
                    puVar21 = puVar21 + 1;
                  } while ((int)uVar30 < iVar22);
                }
              }
              uVar19 = uVar19 + 1;
              uVar30 = uStack_d94;
              uVar18 = uStack_da4;
            } while ((int)uVar19 <= (int)uVar20);
          }
          load_supplier_0xbc760(0x14266c870,3,0,1);
          load_supplier_0xbc750(0x14266c870,uVar23 + 1,uVar26);
          load_supplier_0x70cc0(auStack_9e8);
          lVar27 = lStack_db0 + 0x1d0;
          if ((int)uVar18 < (int)(uint)uStack_d38) {
            puVar5 = (undefined8 *)load_supplier_0x70850(lVar27,(longlong)(int)uVar18);
            puStack_e08 = (uint *)((ulonglong)puStack_e08 & 0xffffffffffffff00);
            (**(code **)(*(longlong *)*puVar5 + 0x38))((longlong *)*puVar5,auStack_9e8);
          }
          else {
            puVar5 = (undefined8 *)load_supplier_0x70850(lStack_db0 + 0x1e8,(longlong)(int)uVar30);
            puStack_e08 = (uint *)((ulonglong)puStack_e08 & 0xffffffffffffff00);
            (**(code **)(*(longlong *)*puVar5 + 0x28))((longlong *)*puVar5,auStack_9e8,lVar27,1);
          }
          FUN_140546b30(auStack_9e8);
          iVar22 = uVar20 - uVar26;
          uVar8 = load_supplier_0x70960(auStack_9e8);
          if ((ulonglong)(longlong)(iVar22 + -2) <= uVar8) {
            if (-1 < iVar22 + -3) {
              load_supplier_0xe2860(auStack_9e8,(longlong)iVar22 + -3);
            }
            if (3 < iVar22 + -3) {
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9e8,(longlong)iVar22 + -6);
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9e8,(longlong)(iVar22 + -5));
              *puVar9 = 0x2e;
              puVar9 = (undefined1 *)load_supplier_0xfcbe0(auStack_9e8,(longlong)(iVar22 + -4));
              *puVar9 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,auStack_9e8,0,0);
          load_supplier_0x69460(auStack_9e8);
          puVar21 = (undefined4 *)0x142673470;
          do {
            _DAT_14266c8f4 = uVar20 - 3;
            _DAT_14266c8f8 = uVar23;
            load_supplier_0xaf4ba0(0x14266c870,puVar21[-6]);
            _DAT_14266c8f4 = uVar20 - 2;
            _DAT_14266c8f8 = uVar23;
            load_supplier_0xaf4ba0(0x14266c870,puVar21[-3]);
            _DAT_14266c8f4 = uVar20 - 1;
            _DAT_14266c8f8 = uVar23;
            load_supplier_0xaf4ba0(0x14266c870,*puVar21);
            _DAT_14266c8f4 = uVar20;
            _DAT_14266c8f8 = uVar23;
            load_supplier_0xaf4ba0(0x14266c870,puVar21[3]);
            uVar23 = uVar23 + 1;
            puVar21 = puVar21 + 1;
          } while ((longlong)puVar21 < 0x14267347c);
          uStack_da4 = uStack_da4 + 1;
          uVar30 = uStack_d94 + 1;
          iVar22 = (int)uStack_d58;
          uVar26 = uStack_d50;
          uStack_d94 = uVar30;
        } while ((int)uStack_da4 < (int)uStack_d68);
      }
      uVar26 = uStack_d78;
      uVar23 = uStack_db8;
      if ((int)uStack_db8 < iVar22) {
        load_supplier_0xbc990(auStack_bd8);
        lVar27 = lStack_db0;
        iStack_df8 = uVar26 + uVar23 * 3 + -2;
        puStack_e08 = (uint *)CONCAT44(puStack_e08._4_4_,uVar23);
        uStack_e00._0_4_ = uVar26 + 1;
        load_supplier_0xbc9b0(auStack_bd8,*(undefined4 *)(lStack_db0 + 0x30),0,iVar22 + -1);
        uStack_e00 = (char *)((ulonglong)uStack_e00._4_4_ << 0x20);
        puStack_e08 = (uint *)CONCAT71(puStack_e08._1_7_,*(undefined1 *)(lVar27 + 0x2c));
        FUN_1414284b0(auStack_bd8,iStack_d84,iStack_d88,uVar20 + 1);
      }
    }
  }
override_jmp_140203830_case_1:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_e28);
  return;
}


/* reference PE:6aea05a1:02734000; selected-description; RVA 0x2159e0..0x2166cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_selected_description(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  undefined8 *****pppppuVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 auStack_218 [32];
  undefined1 *puStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  ushort uStack_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [32];
  undefined4 uStack_188;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_218;
  lVar1 = param_1 + 0x428;
  FUN_1400bcfe0(lVar1);
  iVar5 = *(int *)(param_1 + 0x28);
  if (0xc < iVar5 - 1U) goto override_jmp_140215a4c_case_3;
                    /* WARNING: Switch is manually overridden */
  switch(iVar5 - 1U) {
  case 0:
  case 7:
    if (iVar5 == 1) {
      iVar5 = *(int *)(param_1 + 0x444);
      if (iVar5 < 0) goto override_jmp_140215a4c_case_3;
      lVar18 = *(longlong *)(param_1 + 0x158);
      lVar9 = *(longlong *)(param_1 + 0x160);
    }
    else {
      if ((iVar5 != 8) || (iVar5 = *(int *)(param_1 + 0x444), iVar5 < 0))
      goto override_jmp_140215a4c_case_3;
      lVar18 = *(longlong *)(param_1 + 0x2e0);
      lVar9 = *(longlong *)(param_1 + 0x2e8);
    }
    if (((ulonglong)(lVar9 - lVar18 >> 3) <= (ulonglong)(longlong)iVar5) ||
       (lVar18 = *(longlong *)(lVar18 + (longlong)iVar5 * 8), lVar18 == 0))
    goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    load_supplier_0x736b0(auStack_1a8);
    uStack_188 = *(undefined4 *)(lVar18 + 0xe0);
    puStack_1f8 = auStack_1a8;
    image_selected_biography(0x14251c138,&ppppuStack_d8);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    if (uStack_c0 < 0x10) goto override_jmp_140215a4c_case_3;
    uVar11 = uStack_c0 + 1;
    pppppuVar14 = (undefined8 *****)ppppuStack_d8;
    if (0xfff < uVar11) {
      uVar11 = uStack_c0 + 0x28;
      pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
      if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    goto LAB_140215b53;
  case 1:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x178) - *(longlong *)(param_1 + 0x170) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar5 * 8);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf;
    ppppuStack_98 = (undefined8 *****)0x0;
    sVar3 = *(short *)(lVar18 + 0x80);
    if (sVar3 == 0) {
LAB_140215c01:
      if ((*(int *)(lVar18 + 0x348) != 0) || (pcVar13 = "This is a ", *(int *)(lVar18 + 0x34c) < 1))
      {
        pcVar13 = "These are ";
      }
    }
    else if (sVar3 == 1) {
      if ((*(int *)(lVar18 + 0x2a8) < 1) || ((**(byte **)(lVar18 + 0x2a0) & 8) == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pcVar13 = "This is a ";
      if (!bVar8) {
        pcVar13 = "These are ";
      }
    }
    else {
      if (sVar3 == 3) goto LAB_140215c01;
      pcVar13 = "This is a ";
    }
    FUN_140071040(&ppppuStack_98,pcVar13,10);
    lVar9 = load_supplier_0x9ce920(lVar18);
    if (lVar9 != 0) {
      sVar3 = *(short *)(lVar9 + 0x98);
      if (sVar3 != -1) {
        uStack_70 = 0;
        uStack_60 = 0xf;
        uStack_68 = 0;
        ppppuStack_78 = (undefined8 *****)0x0;
        if ((-1 < sVar3) &&
           ((ulonglong)(longlong)sVar3 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
          lVar9 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar3 * 8);
          pppppuVar14 = (undefined8 *****)(lVar9 + 0x60);
          if (&ppppuStack_78 != pppppuVar14) {
            if (0xf < *(ulonglong *)(lVar9 + 0x78)) {
              pppppuVar14 = (undefined8 *****)*pppppuVar14;
            }
            FUN_140070f00(&ppppuStack_78,pppppuVar14,*(undefined8 *)(lVar9 + 0x70));
          }
        }
        pppppuVar14 = &ppppuStack_78;
        if (0xf < uStack_60) {
          pppppuVar14 = (undefined8 *****)ppppuStack_78;
        }
        FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_68);
        FUN_140071040(&ppppuStack_98," ",1);
        if (0xf < uStack_60) {
          uVar11 = uStack_60 + 1;
          pppppuVar14 = (undefined8 *****)ppppuStack_78;
          if (0xfff < uVar11) {
            uVar11 = uStack_60 + 0x28;
            pppppuVar14 = (undefined8 *****)ppppuStack_78[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_78 + (-8 - (longlong)pppppuVar14)))
            goto LAB_140215ebf;
          }
          load_supplier_0x15530d0(pppppuVar14,uVar11);
        }
      }
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 *****)0x0;
    load_supplier_0x10e4760(lVar18,&ppppuStack_b8);
    pppppuVar14 = &ppppuStack_b8;
    if (0xf < uStack_a0) {
      pppppuVar14 = (undefined8 *****)ppppuStack_b8;
    }
    FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_a8);
    lVar18 = load_supplier_0x1be9f0
                       (_DAT_14250dfd8,(int)*(short *)(lVar18 + 0x82),(int)*(short *)(lVar18 + 0x84)
                       );
    if (lVar18 != 0) {
      FUN_140071040(&ppppuStack_98," in ",4);
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      ppppuStack_d8 = (undefined8 *****)0x0;
      FUN_140aae180(lVar18,&ppppuStack_d8,1,0);
      pppppuVar14 = &ppppuStack_d8;
      if (0xf < uStack_c0) {
        pppppuVar14 = (undefined8 *****)ppppuStack_d8;
      }
      FUN_140071040(&ppppuStack_98,pppppuVar14,uStack_c8);
      if (0xf < uStack_c0) {
        uVar11 = uStack_c0 + 1;
        pppppuVar14 = (undefined8 *****)ppppuStack_d8;
        if (0xfff < uVar11) {
          uVar11 = uStack_c0 + 0x28;
          pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
          if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        load_supplier_0x15530d0(pppppuVar14,uVar11);
      }
    }
    FUN_140071040(&ppppuStack_98,".",1);
    FUN_140900dc0(lVar1,&ppppuStack_98,*(undefined4 *)(param_1 + 0x440));
    if (0xf < uStack_a0) {
      uVar11 = uStack_a0 + 1;
      pppppuVar14 = (undefined8 *****)ppppuStack_b8;
      if (0xfff < uVar11) {
        uVar11 = uStack_a0 + 0x28;
        pppppuVar14 = (undefined8 *****)ppppuStack_b8[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_b8 + (-8 - (longlong)pppppuVar14))) {
LAB_140215ebf:
          _invalid_parameter_noinfo_noreturn();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      load_supplier_0x15530d0(pppppuVar14,uVar11);
    }
    uStack_a8 = 0;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 ****)((ulonglong)ppppuStack_b8 & 0xffffffffffffff00);
    if (uStack_80 < 0x10) goto override_jmp_140215a4c_case_3;
    uVar11 = uStack_80 + 1;
    pppppuVar14 = (undefined8 *****)ppppuStack_98;
    if (0xfff < uVar11) {
      uVar11 = uStack_80 + 0x28;
      pppppuVar14 = (undefined8 *****)ppppuStack_98[-1];
      if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)pppppuVar14))) {
        _invalid_parameter_noinfo_noreturn(pppppuVar14,uVar11);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
LAB_140215b53:
    load_supplier_0x15530d0(pppppuVar14,uVar11);
    goto override_jmp_140215a4c_case_3;
  case 2:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    puVar6 = *(ushort **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8);
    uStack_a8 = 10;
    uStack_a0 = 0xf;
    ppppuStack_b8 = (undefined8 *****)0x2073692073696854;
    uStack_b0 = 0x2061;
    uVar2 = *puVar6;
    if (uVar2 == 1) {
      uVar17 = 6;
      pcVar13 = "local ";
LAB_140215fdb:
      FUN_140071040(&ppppuStack_b8,pcVar13,uVar17);
    }
    else {
      if (uVar2 == 3) {
        uVar17 = 10;
        pcVar13 = "migrating ";
        goto LAB_140215fdb;
      }
      if (uVar2 == 4) {
        uVar17 = 8;
        pcVar13 = "nomadic ";
        goto LAB_140215fdb;
      }
      if (uVar2 == 7) {
        uVar17 = 8;
        pcVar13 = "outcast ";
        goto LAB_140215fdb;
      }
    }
    uVar2 = puVar6[0x4c];
    if (uVar2 != 0xffff) {
      uStack_50 = 0;
      uStack_40 = 0xf;
      uStack_48 = 0;
      ppppuStack_58 = (undefined8 *****)0x0;
      if ((-1 < (short)uVar2) &&
         ((ulonglong)(longlong)(short)uVar2 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar18 = *(longlong *)(_DAT_14250eee8 + (longlong)(short)uVar2 * 8);
        pppppuVar14 = (undefined8 *****)(lVar18 + 0x60);
        if (&ppppuStack_58 != pppppuVar14) {
          if (0xf < *(ulonglong *)(lVar18 + 0x78)) {
            pppppuVar14 = (undefined8 *****)*pppppuVar14;
          }
          FUN_140070f00(&ppppuStack_58,pppppuVar14,*(undefined8 *)(lVar18 + 0x70));
        }
      }
      pppppuVar14 = &ppppuStack_58;
      if (0xf < uStack_40) {
        pppppuVar14 = (undefined8 *****)ppppuStack_58;
      }
      FUN_140071040(&ppppuStack_b8,pppppuVar14,uStack_48);
      FUN_140071040(&ppppuStack_b8," ",1);
      FUN_140070e80(&ppppuStack_58);
    }
    if (*puVar6 < 0xb) {
                    /* WARNING: Switch is manually overridden */
      switch(*puVar6) {
      case 0:
        uVar17 = 0xc;
        pcVar13 = "civilization";
        break;
      case 1:
        uVar17 = 10;
        pcVar13 = "government";
        break;
      case 2:
        uVar17 = 6;
        pcVar13 = "vessel";
        break;
      default:
        uVar17 = 5;
        pcVar13 = "group";
        break;
      case 5:
        uVar17 = 8;
        pcVar13 = "religion";
        break;
      case 6:
        uVar17 = 0x15;
        pcVar13 = "military organization";
        break;
      case 8:
        uVar17 = 0x12;
        pcVar13 = "performance troupe";
        break;
      case 9:
        uVar17 = 0x10;
        pcVar13 = "merchant company";
        break;
      case 10:
        for (puVar15 = *(undefined8 **)(puVar6 + 0x50); puVar15 < *(undefined8 **)(puVar6 + 0x54);
            puVar15 = puVar15 + 1) {
          if (*(int *)*puVar15 == 0) {
            sVar3 = (short)((int *)*puVar15)[1];
            if (sVar3 != -1) {
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0xf;
              ppppuStack_d8 = (undefined8 *****)0x0;
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_80 = 0xf;
              ppppuStack_98 = (undefined8 ****)0x0;
              uStack_1e0 = uStack_1e0 & 0xff00;
              uStack_1e8 = CONCAT31(uStack_1e8._1_3_,1);
              uStack_1f0 = CONCAT22(uStack_1f0._2_2_,0xffff);
              puStack_1f8 = auStack_1b8;
              image_guild_profession(&ppppuStack_d8,&ppppuStack_98,sVar3,_DAT_1423b5afc);
              pppppuVar14 = &ppppuStack_d8;
              if (0xf < uStack_c0) {
                pppppuVar14 = (undefined8 *****)ppppuStack_d8;
              }
              FUN_140071040(&ppppuStack_b8,pppppuVar14,uStack_c8);
              if (0xf < uStack_80) {
                uVar11 = uStack_80 + 1;
                ppppuVar12 = ppppuStack_98;
                if (0xfff < uVar11) {
                  uVar11 = uStack_80 + 0x28;
                  ppppuVar12 = (undefined8 ****)ppppuStack_98[-1];
                  if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar11);
              }
              uStack_88 = 0;
              uStack_80 = 0xf;
              ppppuStack_98 = (undefined8 ****)((ulonglong)ppppuStack_98 & 0xffffffffffffff00);
              if (uStack_c0 < 0x10) goto LAB_140216268;
              uVar11 = uStack_c0 + 1;
              pppppuVar14 = (undefined8 *****)ppppuStack_d8;
              if (0xfff < uVar11) {
                uVar11 = uStack_c0 + 0x28;
                pppppuVar14 = (undefined8 *****)ppppuStack_d8[-1];
                if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar14))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              load_supplier_0x15530d0(pppppuVar14,uVar11);
              uVar17 = 6;
              pcVar13 = " guild";
              goto LAB_1402162cf;
            }
            break;
          }
        }
        FUN_140071040(&ppppuStack_b8,"craft",5);
LAB_140216268:
        uVar17 = 6;
        pcVar13 = " guild";
      }
LAB_1402162cf:
      FUN_140071040(&ppppuStack_b8,pcVar13,uVar17);
    }
    FUN_140071040(&ppppuStack_b8,".",1);
    FUN_140900dc0(lVar1,&ppppuStack_b8,*(undefined4 *)(param_1 + 0x440));
    pppppuVar14 = &ppppuStack_b8;
    goto LAB_14021668e;
  default:
    goto override_jmp_140215a4c_case_3;
  case 4:
    iVar5 = *(int *)(param_1 + 0x444);
    if ((iVar5 < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x1c0) - *(longlong *)(param_1 + 0x1b8) >> 3) <=
        (ulonglong)(longlong)iVar5)) goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 1;
    uStack_1d8 = 0xffffffff;
    uStack_1e0 = 0xffff;
    uStack_1e8 = 0xffffffff;
    uStack_1f0 = CONCAT31(uStack_1f0._1_3_,1);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,1);
    image_artwork_description
              (0x1423f3970,*(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 8),
               &ppppuStack_d8,0);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    break;
  case 6:
    uVar11 = (ulonglong)*(int *)(param_1 + 0x444);
    if ((*(int *)(param_1 + 0x444) < 0) ||
       ((ulonglong)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 2) <= uVar11)
       ) goto override_jmp_140215a4c_case_3;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x2c8) + uVar11 * 4);
    lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + uVar11 * 4);
    if (iVar5 == -1) {
      lVar9 = *(longlong *)(_DAT_14250eee8 + lVar18 * 8);
      if (*(longlong *)(lVar9 + 0x180) - *(longlong *)(lVar9 + 0x178) >> 3 == 0)
      goto override_jmp_140215a4c_case_3;
      lVar18 = **(longlong **)(*(longlong *)(_DAT_14250eee8 + lVar18 * 8) + 0x178);
      puVar15 = (undefined8 *)(lVar18 + 0x220);
      ppppuStack_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uVar11 = *(ulonglong *)(lVar18 + 0x230);
      if (0xf < *(ulonglong *)(lVar18 + 0x238)) {
        puVar15 = (undefined8 *)*puVar15;
      }
      if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140066ec0();
      }
      if (uVar11 < 0x10) {
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 ****)*puVar15;
        uStack_d0 = puVar15[1];
        uStack_c8 = uVar11;
      }
      else {
        uVar10 = uVar11 | 0xf;
        uVar16 = 0x7fffffffffffffff;
        if ((uVar10 < 0x8000000000000000) && (uVar16 = uVar10, uVar10 < 0x16)) {
          uVar16 = 0x16;
        }
        ppppuStack_d8 = (undefined8 ****)FUN_140071e00(uVar16 + 1);
        uStack_c8 = uVar11;
        uStack_c0 = uVar16;
        load_supplier_0x155454e(ppppuStack_d8,puVar15,uVar11 + 1);
      }
      FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    }
    else {
      FUN_140070c00(&ppppuStack_d8,
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(_DAT_14250eee8 + lVar18 * 8) + 0x178) +
                     (longlong)iVar5 * 8) + 0x220);
      FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
    }
    break;
  case 0xb:
    uVar11 = (ulonglong)*(int *)(param_1 + 0x444);
    if ((-1 < *(int *)(param_1 + 0x444)) &&
       (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 2)))
    {
      sVar3 = *(short *)(*(longlong *)(param_1 + 0x358) + uVar11 * 4);
      sVar4 = *(short *)(*(longlong *)(param_1 + 0x370) + uVar11 * 4);
      uVar11 = (ulonglong)sVar4;
      if (sVar3 == 0xd) {
        if (((-1 < sVar4) && (uVar11 < (ulonglong)(_DAT_14250f280 - _DAT_14250f278 >> 3))) &&
           (lVar18 = *(longlong *)(_DAT_14250f278 + uVar11 * 8), *(longlong *)(lVar18 + 0x288) != 0)
           ) {
          FUN_140900dc0(lVar1,lVar18 + 0x278,*(undefined4 *)(param_1 + 0x440));
        }
      }
      else if (((sVar3 == 0x56) && (-1 < sVar4)) &&
              ((uVar11 < (ulonglong)(_DAT_14250eff8 - _DAT_14250eff0 >> 3) &&
               (lVar18 = *(longlong *)(_DAT_14250eff0 + uVar11 * 8),
               *(longlong *)(lVar18 + 0x198) != 0)))) {
        FUN_140900dc0(lVar1,lVar18 + 0x188,*(undefined4 *)(param_1 + 0x440));
      }
    }
    goto override_jmp_140215a4c_case_3;
  case 0xc:
    iVar5 = *(int *)(param_1 + 0x444);
    if (((iVar5 < 0) ||
        ((ulonglong)(*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 3) <=
         (ulonglong)(longlong)iVar5)) ||
       (lVar18 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar5 * 8) + 0x90),
       lVar18 == 0)) goto override_jmp_140215a4c_case_3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0xf;
    ppppuStack_d8 = (undefined8 *****)0x0;
    uStack_1f0 = 0;
    puStack_1f8 = (undefined1 *)((ulonglong)puStack_1f8._1_7_ << 8);
    image_selected_item_description(lVar18,&ppppuStack_d8,1);
    FUN_140900dc0(lVar1,&ppppuStack_d8,*(undefined4 *)(param_1 + 0x440));
  }
  pppppuVar14 = &ppppuStack_d8;
LAB_14021668e:
  FUN_140070e80(pppppuVar14);
override_jmp_140215a4c_case_3:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_218);
  return;
}


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


/* reference PE:6aea05a1:02734000; art_image_element_treest; RVA 0x14a7c0..0x14a9be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_treest(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_88 [32];
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140071040(param_2,"a ",2);
    }
  }
  else {
    FUN_140071040(param_2,"the ",4);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (1 < iVar2) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words(iVar2,&pppuStack_48);
    ppppuVar7 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar7 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar7,uStack_38);
    FUN_140071040(param_2," ",1);
    if (0xf < uStack_30) {
      uVar6 = uStack_30 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar6) {
        uVar6 = uStack_30 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar7,uVar6);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((-1 < iVar2) &&
     ((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3))) {
    lVar3 = *(longlong *)(_DAT_14250ed78 + (longlong)iVar2 * 8);
    if (*(int *)(param_1 + 8) == 1) {
      ppppuVar7 = (undefined8 ****)(lVar3 + 0x50);
    }
    else {
      ppppuVar7 = (undefined8 ****)(lVar3 + 0x70);
    }
    if (&pppuStack_68 != ppppuVar7) {
      ppppuVar1 = ppppuVar7 + 2;
      if ((undefined8 ***)0xf < ppppuVar7[3]) {
        ppppuVar7 = (undefined8 ****)*ppppuVar7;
      }
      FUN_140070f00(&pppuStack_68,ppppuVar7,*ppppuVar1);
    }
  }
  ppppuVar7 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar7 = (undefined8 ****)pppuStack_68;
  }
  FUN_140071040(param_2,ppppuVar7,uStack_58);
  if (0xf < uStack_50) {
    uVar6 = uStack_50 + 1;
    ppppuVar7 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar6) {
      uVar6 = uStack_50 + 0x28;
      ppppuVar7 = (undefined8 ****)pppuStack_68[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar7))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar7,uVar6);
  }
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_88);
  return;
}


/* reference PE:6aea05a1:02734000; art_image_element_itemst; RVA 0x149200..0x1497b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_itemst
               (longlong param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  char cStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_f8;
  puVar12 = (undefined4 *)0x0;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  cStack_88 = param_3;
  if ((*(int *)(param_1 + 0x1c) != -1) && (param_4 != '\0')) {
    iVar7 = (int)(_DAT_142408608 - _DAT_142408600 >> 3) + -1;
    if (-1 < iVar7) {
      lVar9 = (longlong)iVar7;
      do {
        lVar1 = *(longlong *)(*(longlong *)(_DAT_142408600 + lVar9 * 8) + 0x90);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1c) == *(int *)(param_1 + 0x1c))) {
          puVar12 = *(undefined4 **)(_DAT_142408600 + (longlong)iVar7 * 8);
          break;
        }
        iVar7 = iVar7 + -1;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    if (puVar12 != (undefined4 *)0x0) {
      if (param_5 != '\0') {
        FUN_140071040(param_2,"[LPAGE:ARTIFACT:",0x10);
        FUN_140545610(*puVar12,param_2);
        FUN_140071040(param_2,"]",1);
      }
      uStack_78 = 0;
      lStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      FUN_140aae180(puVar12 + 2,&pppuStack_80,1,0);
      uVar11 = uStack_68;
      bVar14 = false;
      if (lStack_70 == 0) {
        if (uStack_68 < 8) {
          if (0x7fffffffffffffff - (uStack_68 >> 1) < uStack_68) {
            uVar13 = 0x7fffffffffffffff;
          }
          else {
            uVar10 = uStack_68 + (uStack_68 >> 1);
            uVar13 = 0xf;
            if (0xf < uVar10) {
              uVar13 = uVar10;
            }
          }
          ppppuVar6 = (undefined8 ****)FUN_140071e00(uVar13 + 1);
          lStack_70 = 8;
          *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar6 + 1) = 0;
          param_3 = cStack_88;
          uStack_68 = uVar13;
          if (0xf < uVar11) {
            uVar10 = uVar11 + 1;
            ppppuVar8 = (undefined8 ****)pppuStack_80;
            if (0xfff < uVar10) {
              uVar10 = uVar11 + 0x28;
              ppppuVar8 = (undefined8 ****)pppuStack_80[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar8)))
              goto LAB_140149508;
            }
            load_supplier_0x15530d0(ppppuVar8,uVar10);
            param_3 = cStack_88;
          }
        }
        else {
          ppppuVar6 = &pppuStack_80;
          if (0xf < uStack_68) {
            ppppuVar6 = (undefined8 ****)pppuStack_80;
          }
          lStack_70 = 8;
          *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar6 + 1) = 0;
          ppppuVar6 = (undefined8 ****)pppuStack_80;
        }
        pppuStack_80 = ppppuVar6;
        sVar4 = (**(code **)**(undefined8 **)(puVar12 + 0x24))();
        if (((sVar4 == 0x59) ||
            (cVar3 = (**(code **)(**(longlong **)(puVar12 + 0x24) + 0xe0))
                               (*(longlong **)(puVar12 + 0x24),0x14), cVar3 != '\0')) ||
           (sVar4 = (**(code **)**(undefined8 **)(puVar12 + 0x24))(), sVar4 == 0x57)) {
          uVar11 = uStack_68;
          if (uStack_68 < 8) {
            uVar10 = 0x7fffffffffffffff;
            if (uStack_68 <= 0x7fffffffffffffff - (uStack_68 >> 1)) {
              uVar13 = uStack_68 + (uStack_68 >> 1);
              uVar10 = 0xf;
              if (0xf < uVar13) {
                uVar10 = uVar13;
              }
            }
            ppppuVar6 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
            lStack_70 = 8;
            *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
            *(undefined1 *)(ppppuVar6 + 1) = 0;
            uStack_68 = uVar10;
            if (0xf < uVar11) {
              uVar10 = uVar11 + 1;
              ppppuVar8 = (undefined8 ****)pppuStack_80;
              if (0xfff < uVar10) {
                uVar10 = uVar11 + 0x28;
                ppppuVar8 = (undefined8 ****)pppuStack_80[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar8))) {
LAB_140149508:
                  lStack_70 = 8;
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              load_supplier_0x15530d0(ppppuVar8,uVar10);
            }
          }
          else {
            ppppuVar6 = &pppuStack_80;
            if (0xf < uStack_68) {
              ppppuVar6 = (undefined8 ****)pppuStack_80;
            }
            lStack_70 = 8;
            *ppppuVar6 = (undefined8 ***)0x64656c7469746e55;
            *(undefined1 *)(ppppuVar6 + 1) = 0;
            ppppuVar6 = (undefined8 ****)pppuStack_80;
          }
          pppuStack_80 = ppppuVar6;
          bVar14 = false;
        }
        else {
          FUN_140c7d140(*(undefined8 *)(puVar12 + 0x24),&pppuStack_80,0,1);
          bVar14 = true;
        }
      }
      ppppuVar6 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar6 = (undefined8 ****)pppuStack_80;
      }
      FUN_140071040(param_2,ppppuVar6,lStack_70);
      if (((param_3 == '\0') && (*(longlong *)(puVar12 + 0x24) != 0)) && (!bVar14)) {
        FUN_140071040(param_2," the ",5);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0xf;
        pppuStack_60 = (undefined8 ****)0x0;
        FUN_140c7d140(*(undefined8 *)(puVar12 + 0x24),&pppuStack_60,1,0xffffffff);
        ppppuVar6 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar6 = (undefined8 ****)pppuStack_60;
        }
        FUN_140071040(param_2,ppppuVar6,uStack_50);
        if (0xf < uStack_48) {
          uVar11 = uStack_48 + 1;
          ppppuVar6 = (undefined8 ****)pppuStack_60;
          if (0xfff < uVar11) {
            uVar11 = uStack_48 + 0x28;
            ppppuVar6 = (undefined8 ****)pppuStack_60[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar6))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar6,uVar11);
        }
      }
      if (param_5 != '\0') {
        FUN_140071040(param_2,"[/LPAGE]",8);
      }
      if (0xf < uStack_68) {
        uVar11 = uStack_68 + 1;
        ppppuVar6 = (undefined8 ****)pppuStack_80;
        if (0xfff < uVar11) {
          uVar11 = uStack_68 + 0x28;
          ppppuVar6 = (undefined8 ****)pppuStack_80[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar6))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        load_supplier_0x15530d0(ppppuVar6,uVar11);
      }
      goto LAB_14014978b;
    }
  }
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140071040(param_2,"a ",2);
    }
  }
  else {
    FUN_140071040(param_2,"the ",4);
  }
  iVar7 = *(int *)(param_1 + 8);
  if (1 < iVar7) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf;
    pppuStack_60 = (undefined8 ****)0x0;
    image_number_words(iVar7,&pppuStack_60);
    ppppuVar6 = &pppuStack_60;
    if (0xf < uStack_48) {
      ppppuVar6 = (undefined8 ****)pppuStack_60;
    }
    FUN_140071040(param_2,ppppuVar6,uStack_50);
    FUN_140071040(param_2," ",1);
    if (0xf < uStack_48) {
      uVar11 = uStack_48 + 1;
      ppppuVar6 = (undefined8 ****)pppuStack_60;
      if (0xfff < uVar11) {
        uVar11 = uStack_48 + 0x28;
        ppppuVar6 = (undefined8 ****)pppuStack_60[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar6))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar6,uVar11);
    }
  }
  uStack_d0 = 1;
  if (*(int *)(param_1 + 8) != 1) {
    uStack_d0 = 0xffffffff;
  }
  iStack_d8 = (int)*(short *)(param_1 + 0x16);
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 1;
  uStack_a8 = 0xffffffff;
  uStack_b0 = 0xffffffff;
  uStack_b8 = 0;
  uStack_c0 = 1;
  uStack_c8 = 0;
  image_item_noun(param_2,*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x12),
                  *(undefined2 *)(param_1 + 0x14));
LAB_14014978b:
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_f8);
  return;
}


/* reference PE:6aea05a1:02734000; art_image_property_intransitive_verbst; RVA 0x148550..0x148c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_property_intransitive_verbst
               (longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
               undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined1 uStack_98;
  longlong alStack_88 [3];
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_b8;
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 < 0) || ((ulonglong)(param_3[1] - *param_3 >> 3) <= (ulonglong)(longlong)iVar1))
  goto LAB_140148bff;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar10 = 0xf;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)iVar1 * 8);
  uStack_98 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_68,1);
  iVar1 = *(int *)(*(longlong *)(*param_3 + (longlong)*(int *)(param_1 + 0x18) * 8) + 8);
  alStack_88[1] = 0;
  uStack_70 = 0xf;
  if (iVar1 == 1) {
    uVar9 = 4;
    alStack_88[0] = 0x20736920;
  }
  else {
    uVar9 = 5;
    alStack_88[0] = 0x2065726120;
  }
  ppppuVar6 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar6 = (undefined8 ****)pppuStack_68;
  }
  alStack_88[2] = uVar9;
  FUN_140071040(param_2,ppppuVar6,uStack_58);
  if (0x2f < *(ushort *)(param_1 + 0x1c)) goto override_jmp_14014867d_case_1;
                    /* WARNING: Switch is manually overridden */
  switch(*(ushort *)(param_1 + 0x1c)) {
  case 0:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0xe;
    pcVar7 = "withering away";
    break;
  default:
    goto override_jmp_14014867d_case_1;
  case 4:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "laboring";
    break;
  case 10:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x18;
    pcVar7 = "striking a menacing pose";
    break;
  case 0xb:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "traveling";
    break;
  case 0xe:
    FUN_140071040(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140071040(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140071040(param_2," confused",9);
    goto override_jmp_14014867d_case_1;
  case 0xf:
    FUN_140071040(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140071040(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140071040(param_2," terrified",10);
    goto override_jmp_14014867d_case_1;
  case 0x12:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "burning";
    break;
  case 0x13:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "weeping";
    break;
  case 0x14:
    FUN_140071040(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140071040(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140071040(param_2," dejected",9);
    goto override_jmp_14014867d_case_1;
  case 0x15:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "cringing";
    break;
  case 0x16:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "screaming";
    break;
  case 0x17:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x1b;
    pcVar7 = "making a submissive gesture";
    break;
  case 0x18:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x13;
    pcVar7 = "in a fetal position";
    break;
  case 0x19:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x19;
    pcVar7 = "smeared out into a spiral";
    break;
  case 0x1a:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "falling";
    break;
  case 0x1b:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 4;
    pcVar7 = "dead";
    break;
  case 0x1c:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 8;
    pcVar7 = "laughing";
    break;
  case 0x1d:
    FUN_140071040(param_2," ",1);
    pcVar7 = "looks";
    if (iVar1 != 1) {
      pcVar7 = "look";
    }
    FUN_140071040(param_2,pcVar7,(iVar1 == 1) + '\x04');
    FUN_140071040(param_2," offended",9);
    goto override_jmp_14014867d_case_1;
  case 0x1e:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 10;
    pcVar7 = "being shot";
    break;
  case 0x1f:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x1a;
    pcVar7 = "making a plaintive gesture";
    break;
  case 0x20:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "melting";
    break;
  case 0x22:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0xe;
    pcVar7 = "being tortured";
    break;
  case 0x23:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x19;
    pcVar7 = "committing a depraved act";
    break;
  case 0x24:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "praying";
    break;
  case 0x25:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0xd;
    pcVar7 = "contemplating";
    break;
  case 0x26:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 7;
    pcVar7 = "cooking";
    break;
  case 0x27:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "engraving";
    break;
  case 0x29:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 9;
    pcVar7 = "suffering";
    break;
  case 0x2b:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x15;
    pcVar7 = "unnaturally contorted";
    break;
  case 0x2c:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0xc;
    pcVar7 = "being flayed";
    break;
  case 0x2e:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0xf;
    pcVar7 = "being mutilated";
    break;
  case 0x2f:
    FUN_140071040(param_2,alStack_88,uVar9);
    uVar9 = 0x1a;
    pcVar7 = "striking a triumphant pose";
  }
  FUN_140071040(param_2,pcVar7,uVar9);
  uVar10 = uStack_70;
override_jmp_14014867d_case_1:
  FUN_140071040(param_2,".  ",3);
  FUN_140546b30(param_2);
  if (0xf < uVar10) {
    uVar8 = uVar10 + 1;
    lVar5 = alStack_88[0];
    if (0xfff < uVar8) {
      uVar8 = uVar10 + 0x28;
      lVar5 = *(longlong *)(alStack_88[0] + -8);
      if (0x1f < (alStack_88[0] - lVar5) - 8U) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(lVar5,uVar8);
  }
  if (0xf < uStack_50) {
    uVar10 = uStack_50 + 1;
    ppppuVar6 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar10) {
      uVar10 = uStack_50 + 0x28;
      ppppuVar6 = (undefined8 ****)pppuStack_68[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar6))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar6,uVar10);
  }
LAB_140148bff:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_b8);
  return;
}


/* reference PE:6aea05a1:02734000; art_image_property_transitive_verbst; RVA 0x147df0..0x14848c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_property_transitive_verbst
               (longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
               undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_108 [32];
  undefined1 uStack_e8;
  undefined8 ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong alStack_b8 [3];
  ulonglong uStack_a0;
  longlong alStack_98 [4];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_108;
  param_2[2] = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 0) goto LAB_14014846c;
  uVar6 = param_3[1] - *param_3 >> 3;
  if (((uVar6 <= (ulonglong)(longlong)iVar1) || (*(int *)(param_1 + 0x1c) < 0)) ||
     (uVar6 <= (ulonglong)(longlong)*(int *)(param_1 + 0x1c))) goto LAB_14014846c;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0xf;
  pppuStack_78 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)iVar1 * 8);
  uStack_e8 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_78,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  pppuStack_d8 = (undefined8 ****)0x0;
  plVar2 = *(longlong **)(*param_3 + (longlong)*(int *)(param_1 + 0x1c) * 8);
  uStack_e8 = param_5;
  (**(code **)(*plVar2 + 0x38))(plVar2,&pppuStack_d8,1,param_4);
  iVar1 = *(int *)(*(longlong *)(*param_3 + (longlong)*(int *)(param_1 + 0x18) * 8) + 8);
  alStack_b8[1] = 0;
  uStack_a0 = 0xf;
  if (iVar1 == 1) {
    uVar11 = 4;
    alStack_b8[0] = 0x20736920;
  }
  else {
    uVar11 = 5;
    alStack_b8[0] = 0x2065726120;
  }
  ppppuVar8 = &pppuStack_78;
  if (0xf < uStack_60) {
    ppppuVar8 = (undefined8 ****)pppuStack_78;
  }
  alStack_b8[2] = uVar11;
  FUN_140071040(param_2,ppppuVar8,uStack_68);
  uVar4 = (int)*(short *)(param_1 + 0x20) - 1;
  uVar6 = 0xf;
  if (uVar4 < 0x2e) {
    uVar6 = 0xf;
                    /* WARNING: Switch is manually overridden */
    switch(uVar4) {
    case 0:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "surrounded by ";
      break;
    case 1:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "massacring ";
      break;
    case 2:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "fighting with ";
      break;
    default:
      goto override_jmp_140147f74_case_3;
    case 4:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "greeting ";
      break;
    case 5:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "refusing ";
      break;
    case 6:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "speaking with ";
      break;
    case 7:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "embracing ";
      break;
    case 8:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "striking down ";
      break;
    case 0xb:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "raising ";
      break;
    case 0xc:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 7;
      pcVar9 = "hiding ";
      break;
    case 0xf:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "devouring ";
      break;
    case 0x10:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "admiring ";
      break;
    case 0x11:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "burning ";
      break;
    case 0x20:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 9;
      pcVar9 = "shooting ";
      break;
    case 0x21:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "torturing ";
      break;
    case 0x22:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x1f;
      pcVar9 = "committing a depraved act upon ";
      break;
    case 0x23:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "praying to ";
      break;
    case 0x24:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xe;
      pcVar9 = "contemplating ";
      break;
    case 0x25:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 8;
      pcVar9 = "cooking ";
      break;
    case 0x26:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 10;
      pcVar9 = "engraving ";
      break;
    case 0x27:
      FUN_140071040(param_2,alStack_b8,uVar11);
      FUN_140071040(param_2,"prostrating ",0xc);
      if (iVar1 == 1) {
        alStack_98[1] = 0;
        alStack_98[3] = 0xf;
        alStack_98[2] = 6;
        alStack_98[0] = 0x666c65737469;
        FUN_140071040(param_2,alStack_98,6);
        if (0xf < (ulonglong)alStack_98[3]) {
          uVar6 = alStack_98[3] + 1;
          lVar7 = alStack_98[0];
          if (0xfff < uVar6) {
            uVar6 = alStack_98[3] + 0x28;
            lVar7 = *(longlong *)(alStack_98[0] + -8);
            if (0x1f < (alStack_98[0] - lVar7) - 8U) {
              _invalid_parameter_noinfo_noreturn();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          load_supplier_0x15530d0(lVar7,uVar6);
        }
        uVar11 = 8;
        pcVar9 = " before ";
      }
      else {
        FUN_140071040(param_2,"themselves",10);
        uVar11 = 8;
        pcVar9 = " before ";
      }
      break;
    case 0x29:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xb;
      pcVar9 = "impaled on ";
      break;
    case 0x2b:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x10;
      pcVar9 = "being flayed by ";
      break;
    case 0x2c:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0xd;
      pcVar9 = "hanging from ";
      break;
    case 0x2d:
      FUN_140071040(param_2,alStack_b8,uVar11);
      uVar11 = 0x13;
      pcVar9 = "being mutilated by ";
    }
    FUN_140071040(param_2,pcVar9,uVar11);
    ppppuVar8 = &pppuStack_d8;
    if (0xf < uStack_c0) {
      ppppuVar8 = (undefined8 ****)pppuStack_d8;
    }
    FUN_140071040(param_2,ppppuVar8,uStack_c8);
    uVar6 = uStack_a0;
  }
override_jmp_140147f74_case_3:
  FUN_140071040(param_2,".  ",3);
  FUN_140546b30(param_2);
  if (0xf < uVar6) {
    uVar10 = uVar6 + 1;
    lVar7 = alStack_b8[0];
    if (0xfff < uVar10) {
      uVar10 = uVar6 + 0x28;
      lVar7 = *(longlong *)(alStack_b8[0] + -8);
      if (0x1f < (alStack_b8[0] - lVar7) - 8U) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(lVar7,uVar10);
  }
  if (0xf < uStack_c0) {
    uVar6 = uStack_c0 + 1;
    ppppuVar8 = (undefined8 ****)pppuStack_d8;
    if (0xfff < uVar6) {
      uVar6 = uStack_c0 + 0x28;
      ppppuVar8 = (undefined8 ****)pppuStack_d8[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_d8 + (-8 - (longlong)ppppuVar8))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar8,uVar6);
  }
  uStack_c8 = 0;
  uStack_c0 = 0xf;
  pppuStack_d8 = (undefined8 ***)((ulonglong)pppuStack_d8 & 0xffffffffffffff00);
  if (0xf < uStack_60) {
    uVar6 = uStack_60 + 1;
    ppppuVar8 = (undefined8 ****)pppuStack_78;
    if (0xfff < uVar6) {
      uVar6 = uStack_60 + 0x28;
      ppppuVar8 = (undefined8 ****)pppuStack_78[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar8))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar8,uVar6);
  }
LAB_14014846c:
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_108);
  return;
}


/* reference PE:6aea05a1:02734000; art_image_element_creaturest; RVA 0x1499c0..0x14a56f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_creaturest
               (longlong param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined1 auStack_148 [32];
  undefined8 ***pppuStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
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
  longlong lStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_148;
  uVar13 = 0;
  param_2[2] = 0;
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar9 = 0;
  iVar8 = *(int *)(param_1 + 0x18);
  uVar15 = uVar13;
  if (((iVar8 != -1) && (param_4 != '\0')) &&
     (lVar17 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, uVar15 = 0, lVar17 != 0)) {
    iVar16 = (int)lVar17 + -1;
    if (-1 < iVar16) {
      do {
        iVar10 = iVar16 + (int)uVar13 >> 1;
        uVar15 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar10 * 8);
        if (*(int *)(uVar15 + 0xe0) == iVar8) goto LAB_140149a6e;
        iVar7 = iVar10 + -1;
        if (*(int *)(uVar15 + 0xe0) < iVar8) {
          uVar13 = (ulonglong)(iVar10 + 1);
          iVar7 = iVar16;
        }
        iVar16 = iVar7;
      } while ((int)uVar13 <= iVar16);
    }
    uVar15 = 0;
  }
LAB_140149a6e:
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ****)0x0;
  if (uVar15 == 0) {
    if (param_3 == '\0') {
      if (*(int *)(param_1 + 8) == 1) {
        uVar18 = 2;
        pcVar14 = "a ";
        goto LAB_14014a49b;
      }
    }
    else {
      uVar18 = 4;
      pcVar14 = "the ";
LAB_14014a49b:
      FUN_140071040(param_2,pcVar14,uVar18);
    }
    if (1 < *(int *)(param_1 + 8)) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0xf;
      pppuStack_108 = (undefined8 ****)0x0;
      image_number_words(*(int *)(param_1 + 8),&pppuStack_108);
      ppppuVar12 = &pppuStack_108;
      if (0xf < uStack_f0) {
        ppppuVar12 = (undefined8 ****)pppuStack_108;
      }
      FUN_140071040(param_2,ppppuVar12,uStack_f8);
      FUN_140071040(param_2," ",1);
      FUN_140070e80(&pppuStack_108);
    }
    FUN_140abd670(*(undefined2 *)(param_1 + 0x10),&pppuStack_68,*(int *)(param_1 + 8) != 1,
                  *(undefined2 *)(param_1 + 0x14));
    ppppuVar12 = &pppuStack_68;
    uVar18 = uStack_58;
    if (0xf < uStack_50) {
      ppppuVar12 = (undefined8 ****)pppuStack_68;
    }
  }
  else {
    if (param_5 != '\0') {
      FUN_140071040(param_2,"[LPAGE:HF:",10);
      FUN_140545610(*(undefined4 *)(uVar15 + 0xe0),param_2);
      FUN_140071040(param_2,"]",1);
    }
    if (*(char *)(uVar15 + 0xaa) == '\0') {
      if (*(short *)(uVar15 + 2) != -1) {
        if ((*(int *)(uVar15 + 0xd0) < 1) || ((**(byte **)(uVar15 + 200) & 4) == 0)) {
          uVar18 = 4;
          if (param_3 == '\0') {
            uVar18 = 2;
          }
          pcVar14 = "the ";
          if (param_3 == '\0') {
            pcVar14 = "a ";
          }
          FUN_140071040(param_2,pcVar14,uVar18);
          uStack_e0 = 0;
          uStack_d0 = 0xf;
          sVar1 = *(short *)(uVar15 + 4);
          sVar2 = *(short *)(uVar15 + 2);
          uVar13 = (ulonglong)sVar2;
          lStack_d8 = 0;
          pppuStack_e8 = (undefined8 ****)0x0;
          if (sVar1 == -1) {
            if (-1 < sVar2) goto LAB_14014a3b2;
          }
          else if (-1 < sVar2) {
            if (((uVar13 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
               (lVar17 = *(longlong *)(_DAT_14250eee8 + uVar13 * 8),
               lVar3 = *(longlong *)(lVar17 + 0x178),
               (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar17 + 0x180) - lVar3 >> 3))
               ) {
              lVar17 = *(longlong *)(lVar3 + (longlong)sVar1 * 8);
              ppppuVar12 = (undefined8 ****)(lVar17 + 0x20);
              if (&pppuStack_e8 != ppppuVar12) {
                if (0xf < *(ulonglong *)(lVar17 + 0x38)) {
                  ppppuVar12 = (undefined8 ****)*ppppuVar12;
                }
                FUN_140070f00(&pppuStack_e8,ppppuVar12,*(undefined8 *)(lVar17 + 0x30));
                if (lStack_d8 != 0) goto LAB_14014a3fb;
              }
            }
LAB_14014a3b2:
            if (uVar13 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
              lVar17 = *(longlong *)(_DAT_14250eee8 + uVar13 * 8);
              ppppuVar12 = (undefined8 ****)(lVar17 + 0x20);
              if (&pppuStack_e8 != ppppuVar12) {
                if (0xf < *(ulonglong *)(lVar17 + 0x38)) {
                  ppppuVar12 = (undefined8 ****)*ppppuVar12;
                }
                FUN_140070f00(&pppuStack_e8,ppppuVar12,*(undefined8 *)(lVar17 + 0x30));
              }
            }
          }
LAB_14014a3fb:
          ppppuVar12 = &pppuStack_e8;
          if (0xf < uStack_d0) {
            ppppuVar12 = (undefined8 ****)pppuStack_e8;
          }
          FUN_140071040(param_2,ppppuVar12,lStack_d8);
          if (0xf < uStack_d0) {
            uVar13 = uStack_d0 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_e8;
            if (0xfff < uVar13) {
              uVar13 = uStack_d0 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_e8[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_e8 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
        }
        else {
          FUN_140071040(param_2,"the deity of ",0xd);
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0xf;
          pppuStack_108 = (undefined8 ****)0x0;
          iVar8 = (int)(((longlong *)**(longlong **)(uVar15 + 0x130))[1] -
                        *(longlong *)**(longlong **)(uVar15 + 0x130) >> 1) + -1;
          lVar17 = (longlong)iVar8;
          if (-1 < iVar8) {
LAB_140149fb3:
            do {
              image_deity_domain_article
                        (*(undefined2 *)
                          (*(longlong *)**(undefined8 **)(uVar15 + 0x130) + lVar17 * 2),
                         &pppuStack_108);
              ppppuVar12 = &pppuStack_108;
              if (0xf < uStack_f0) {
                ppppuVar12 = (undefined8 ****)pppuStack_108;
              }
              FUN_140071040(param_2,ppppuVar12,uStack_f8);
              if (lVar17 < 2) {
                if (lVar17 == 1) {
                  FUN_140071040(param_2," and ",5);
                  lVar17 = 0;
                  goto LAB_140149fb3;
                }
              }
              else {
                FUN_140071040(param_2,", ",2);
              }
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          FUN_140071040(param_2,", depicted as a ",0x10);
          if (0 < *(int *)(uVar15 + 0xd0)) {
            if ((**(byte **)(uVar15 + 200) & 0x10) != 0) {
              FUN_140071040(param_2,"skeletal ",9);
            }
            if (0 < *(int *)(uVar15 + 0xd0)) {
              if ((**(byte **)(uVar15 + 200) & 0x20) != 0) {
                FUN_140071040(param_2,"rotting ",8);
              }
              if ((0 < *(int *)(uVar15 + 0xd0)) && (**(char **)(uVar15 + 200) < '\0')) {
                FUN_140071040(param_2,"ghostly ",8);
              }
            }
          }
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          uVar13 = uStack_110;
          lVar17 = lStack_118;
          uVar19 = (ulonglong)*(short *)(uVar15 + 2);
          if ((-1 < *(short *)(uVar15 + 2)) &&
             (uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar3 = *(longlong *)(_DAT_14250eee8 + uVar19 * 8);
            if ((*(int *)(lVar3 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 8) & 4) == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uStack_80 = 0;
              lStack_78 = 0;
              uStack_70 = 0xf;
              pppuStack_88 = (undefined8 ****)0x0;
              sVar1 = *(short *)(uVar15 + 4);
              if (((uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
                 ((ulonglong)(longlong)sVar1 <
                  (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3))) {
                lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8);
                ppppuVar12 = (undefined8 ****)(lVar3 + 0x20);
                if (&pppuStack_88 != ppppuVar12) {
                  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
                    ppppuVar12 = (undefined8 ****)*ppppuVar12;
                  }
                  FUN_140070f00(&pppuStack_88,ppppuVar12,*(undefined8 *)(lVar3 + 0x30));
                }
              }
              uVar19 = uStack_70;
              lVar3 = lStack_78;
              pppuVar6 = pppuStack_88;
              ppppuVar12 = &pppuStack_128;
              if (0xf < uVar13) {
                ppppuVar12 = (undefined8 ****)pppuStack_128;
              }
              ppppuVar11 = &pppuStack_88;
              if (0xf < uStack_70) {
                ppppuVar11 = (undefined8 ****)pppuStack_88;
              }
              if (((lStack_78 == lVar17) &&
                  (iVar8 = load_supplier_0x1554864(ppppuVar11,ppppuVar12,lStack_78), iVar8 == 0)) ||
                 (lVar3 == 0)) {
                if (*(char *)(uVar15 + 6) == '\0') {
                  FUN_140071040(param_2,"female ",7);
                }
                if (*(char *)(uVar15 + 6) == '\x01') {
                  FUN_140071040(param_2,"male ",5);
                }
              }
              if (0xf < uVar19) {
                uVar15 = uVar19 + 1;
                ppppuVar12 = (undefined8 ****)pppuVar6;
                if (0xfff < uVar15) {
                  uVar15 = uVar19 + 0x28;
                  ppppuVar12 = (undefined8 ****)pppuVar6[-1];
                  if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar15);
              }
            }
          }
          ppppuVar12 = &pppuStack_128;
          if (0xf < uVar13) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lVar17);
          if (0xf < uStack_110) {
            uVar13 = uStack_110 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_128;
            if (0xfff < uVar13) {
              uVar13 = uStack_110 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_128[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
          FUN_140070e80(&pppuStack_108);
        }
      }
    }
    else {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0xf;
      pppuStack_108 = (undefined8 ****)0x0;
      FUN_140aae180(uVar15 + 0x38,&pppuStack_108,1,0);
      ppppuVar12 = &pppuStack_108;
      if (0xf < uStack_f0) {
        ppppuVar12 = (undefined8 ****)pppuStack_108;
      }
      FUN_140071040(param_2,ppppuVar12,uStack_f8);
      if ((param_3 == '\0') && (*(short *)(uVar15 + 2) != -1)) {
        if ((*(int *)(uVar15 + 0xd0) < 1) || ((**(byte **)(uVar15 + 200) & 4) == 0)) {
          FUN_140071040(param_2," the ",5);
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          ppppuVar12 = &pppuStack_128;
          if (0xf < uStack_110) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lStack_118);
          if (0xf < uStack_110) {
            uVar13 = uStack_110 + 1;
            ppppuVar12 = (undefined8 ****)pppuStack_128;
            if (0xfff < uVar13) {
              uVar13 = uStack_110 + 0x28;
              ppppuVar12 = (undefined8 ****)pppuStack_128[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar12))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar12,uVar13);
          }
        }
        else {
          FUN_140071040(param_2,", the deity of ",0xf);
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0xf;
          pppuStack_a8 = (undefined8 ****)0x0;
          iVar8 = (int)(((longlong *)**(longlong **)(uVar15 + 0x130))[1] -
                        *(longlong *)**(longlong **)(uVar15 + 0x130) >> 1) + -1;
          lVar17 = (longlong)iVar8;
          if (-1 < iVar8) {
LAB_140149ba0:
            do {
              image_deity_domain_article
                        (*(undefined2 *)
                          (*(longlong *)**(undefined8 **)(uVar15 + 0x130) + lVar17 * 2),
                         &pppuStack_a8);
              ppppuVar12 = &pppuStack_a8;
              if (0xf < uStack_90) {
                ppppuVar12 = (undefined8 ****)pppuStack_a8;
              }
              FUN_140071040(param_2,ppppuVar12,uStack_98);
              if (lVar17 < 2) {
                if (lVar17 == 1) {
                  FUN_140071040(param_2," and ",5);
                  lVar17 = 0;
                  goto LAB_140149ba0;
                }
              }
              else {
                FUN_140071040(param_2,", ",2);
              }
              lVar17 = lVar17 + -1;
            } while (-1 < lVar17);
          }
          FUN_140071040(param_2,", depicted as a ",0x10);
          if (0 < *(int *)(uVar15 + 0xd0)) {
            if ((**(byte **)(uVar15 + 200) & 0x10) != 0) {
              FUN_140071040(param_2,"skeletal ",9);
            }
            if (0 < *(int *)(uVar15 + 0xd0)) {
              if ((**(byte **)(uVar15 + 200) & 0x20) != 0) {
                FUN_140071040(param_2,"rotting ",8);
              }
              if ((0 < *(int *)(uVar15 + 0xd0)) && (**(char **)(uVar15 + 200) < '\0')) {
                FUN_140071040(param_2,"ghostly ",8);
              }
            }
          }
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_110 = 0xf;
          pppuStack_128 = (undefined8 ****)0x0;
          FUN_140abd670(*(undefined2 *)(uVar15 + 2),&pppuStack_128,0,*(undefined2 *)(uVar15 + 4));
          uVar13 = uStack_110;
          lVar17 = lStack_118;
          uVar19 = (ulonglong)*(short *)(uVar15 + 2);
          if ((-1 < *(short *)(uVar15 + 2)) &&
             (uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar3 = *(longlong *)(_DAT_14250eee8 + uVar19 * 8);
            if ((*(int *)(lVar3 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 8) & 4) == 0)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uStack_c0 = 0;
              lStack_b8 = 0;
              uStack_b0 = 0xf;
              pppuStack_c8 = (undefined8 ****)0x0;
              sVar1 = *(short *)(uVar15 + 4);
              if (((uVar19 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
                 ((ulonglong)(longlong)sVar1 <
                  (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3))) {
                lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar1 * 8);
                ppppuVar12 = (undefined8 ****)(lVar3 + 0x20);
                if (&pppuStack_c8 != ppppuVar12) {
                  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
                    ppppuVar12 = (undefined8 ****)*ppppuVar12;
                  }
                  FUN_140070f00(&pppuStack_c8,ppppuVar12,*(undefined8 *)(lVar3 + 0x30));
                }
              }
              uVar19 = uStack_b0;
              lVar3 = lStack_b8;
              pppuVar6 = pppuStack_c8;
              ppppuVar12 = &pppuStack_128;
              if (0xf < uVar13) {
                ppppuVar12 = (undefined8 ****)pppuStack_128;
              }
              ppppuVar11 = &pppuStack_c8;
              if (0xf < uStack_b0) {
                ppppuVar11 = (undefined8 ****)pppuStack_c8;
              }
              if (((lStack_b8 == lVar17) &&
                  (iVar8 = load_supplier_0x1554864(ppppuVar11,ppppuVar12,lStack_b8), iVar8 == 0)) ||
                 (lVar3 == 0)) {
                if (*(char *)(uVar15 + 6) == '\0') {
                  FUN_140071040(param_2,"female ",7);
                }
                if (*(char *)(uVar15 + 6) == '\x01') {
                  FUN_140071040(param_2,"male ",5);
                }
              }
              if (0xf < uVar19) {
                uVar15 = uVar19 + 1;
                ppppuVar12 = (undefined8 ****)pppuVar6;
                if (0xfff < uVar15) {
                  uVar15 = uVar19 + 0x28;
                  ppppuVar12 = (undefined8 ****)pppuVar6[-1];
                  if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar12))) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                load_supplier_0x15530d0(ppppuVar12,uVar15);
              }
            }
          }
          ppppuVar12 = &pppuStack_128;
          if (0xf < uVar13) {
            ppppuVar12 = (undefined8 ****)pppuStack_128;
          }
          FUN_140071040(param_2,ppppuVar12,lVar17);
          FUN_140070e80(&pppuStack_128);
          FUN_140070e80(&pppuStack_a8);
        }
      }
      FUN_140070e80(&pppuStack_108);
    }
    if (param_5 == '\0') goto LAB_14014a53f;
    ppppuVar12 = (undefined8 ****)"[/LPAGE]";
    uVar18 = 8;
  }
  FUN_140071040(param_2,ppppuVar12,uVar18);
LAB_14014a53f:
  FUN_140070e80(&pppuStack_68);
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_148);
  return;
}


/* reference PE:6aea05a1:02734000; art_image_elementst; RVA 0x738b0..0x738ca */

void image_art_image_elementst(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined1 *)param_2 = 0;
  return;
}


/* reference PE:6aea05a1:02734000; art_image_element_shapest; RVA 0x148ce0..0x148fab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_art_image_element_shapest(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 ****ppppuVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_88 [32];
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  param_2[2] = 0;
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar8 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0xf;
  pppuStack_68 = (undefined8 ***)0x0;
  if (param_3 == '\0') {
    if (*(int *)(param_1 + 8) == 1) {
      FUN_140071040(param_2,"a ",2);
    }
  }
  else {
    FUN_140071040(param_2,"the ",4);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (1 < iVar4) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words(iVar4,&pppuStack_48);
    ppppuVar10 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar10 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar10,uStack_38);
    FUN_140071040(param_2," ",1);
    if (0xf < uStack_30) {
      uVar9 = uStack_30 + 1;
      ppppuVar10 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar9) {
        uVar9 = uStack_30 + 0x28;
        ppppuVar10 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar10))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      load_supplier_0x15530d0(ppppuVar10,uVar9);
    }
  }
  sVar2 = *(short *)(param_1 + 0x14);
  sVar3 = *(short *)(param_1 + 0x10);
  lStack_58 = 0;
  pppuStack_68 = (undefined8 ***)((ulonglong)pppuStack_68 & 0xffffffffffffff00);
  if ((((-1 < sVar3) &&
       ((ulonglong)(longlong)sVar3 < (ulonglong)(_DAT_142519558 - _DAT_142519550 >> 3))) &&
      (-1 < sVar2)) &&
     ((lVar5 = *(longlong *)(_DAT_142519550 + (longlong)sVar3 * 8),
      lVar6 = *(longlong *)(lVar5 + 0x90),
      (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar5 + 0x98) - lVar6 >> 3) &&
      (ppppuVar10 = *(undefined8 *****)(lVar6 + (longlong)sVar2 * 8), &pppuStack_68 != ppppuVar10)))
     ) {
    ppppuVar1 = ppppuVar10 + 2;
    if ((undefined8 ***)0xf < ppppuVar10[3]) {
      ppppuVar10 = (undefined8 ****)*ppppuVar10;
    }
    FUN_140070f00(&pppuStack_68,ppppuVar10,*ppppuVar1);
    if (lStack_58 != 0) {
      ppppuVar10 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar10 = (undefined8 ****)pppuStack_68;
      }
      FUN_140071040(param_2,ppppuVar10);
      FUN_140071040(param_2," ",1);
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  sVar2 = *(short *)(param_1 + 0x10);
  lStack_58 = 0;
  ppppuVar10 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar10 = (undefined8 ****)pppuStack_68;
  }
  *(undefined1 *)ppppuVar10 = 0;
  if ((-1 < sVar2) &&
     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_142519558 - _DAT_142519550 >> 3))) {
    lVar5 = *(longlong *)(_DAT_142519550 + (longlong)sVar2 * 8);
    if (iVar4 == 1) {
      ppppuVar10 = (undefined8 ****)(lVar5 + 0x50);
    }
    else {
      ppppuVar10 = (undefined8 ****)(lVar5 + 0x70);
    }
    if (&pppuStack_68 != ppppuVar10) {
      ppppuVar1 = ppppuVar10 + 2;
      if ((undefined8 ***)0xf < ppppuVar10[3]) {
        ppppuVar10 = (undefined8 ****)*ppppuVar10;
      }
      FUN_140070f00(&pppuStack_68,ppppuVar10,*ppppuVar1);
    }
  }
  ppppuVar10 = &pppuStack_68;
  if (0xf < uStack_50) {
    ppppuVar10 = (undefined8 ****)pppuStack_68;
  }
  FUN_140071040(param_2,ppppuVar10,lStack_58);
  if (0xf < uStack_50) {
    uVar9 = uStack_50 + 1;
    ppppuVar10 = (undefined8 ****)pppuStack_68;
    if (0xfff < uVar9) {
      uVar9 = uStack_50 + 0x28;
      ppppuVar10 = (undefined8 ****)pppuStack_68[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar10)))
      {
        _invalid_parameter_noinfo_noreturn();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar10,uVar9);
  }
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_88);
  return;
}


/* reference PE:6aea05a1:02734000; job-title-wrapper; RVA 0xd1ae60..0xd1af8b */

void image_job_title_wrapper(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(short *)(param_1 + 0x14) != 0xa9) {
    image_job_header(0x142408630,param_2,*(short *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x3a),
                     *(undefined2 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x30),
                     *(undefined4 *)(param_1 + 0x34),param_1 + 0x50,*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),param_1,
                     *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
                     *(undefined4 *)(param_1 + 0x13c));
    return;
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_140071040(param_2,"Stop Bleeding",0xd);
      return;
    }
    if (iVar1 == 2) {
      FUN_140071040(param_2,"Repair Compound Fracture",0x18);
      return;
    }
    if (iVar1 == 3) {
      FUN_140071040(param_2,"Remove Rotten Tissue",0x14);
      return;
    }
  }
  FUN_140071040(param_2,"Surgery",7);
  return;
}


/* reference PE:6aea05a1:02734000; job-header; RVA 0xd1afa0..0xd1fbe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_job_header(undefined8 param_1,undefined8 *param_2,ushort param_3,short param_4,
                     short param_5,short param_6,int param_7,undefined8 *param_8,uint param_9,
                     int param_10,uint param_11,longlong param_12,undefined8 param_13,int param_14,
                     int param_15)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong ****pppplVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong ***ppplVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_338 [32];
  uint uStack_318;
  undefined1 uStack_310;
  undefined2 uStack_308;
  short sStack_2f8;
  short sStack_2f6;
  longlong ***ppplStack_2f0;
  undefined8 uStack_2e8;
  longlong **pplStack_2e0;
  ulonglong uStack_2d8;
  undefined1 auStack_2d0 [32];
  undefined8 ***pppuStack_2b0;
  longlong lStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  undefined8 ***apppuStack_290 [2];
  undefined8 uStack_280;
  ulonglong uStack_278;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
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
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)auStack_338;
  sStack_2f8 = param_5;
  uVar22 = (ulonglong)param_10;
  uVar21 = (ulonglong)param_14;
  uVar24 = (ulonglong)param_15;
  uStack_2e8 = 0;
  iVar6 = 0;
  pplStack_2e0 = (longlong **)0x0;
  uStack_2d8 = 0xf;
  ppplStack_2f0 = (longlong ***)0x0;
  param_2[2] = 0;
  puVar13 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar13 = 0;
  puVar13 = _DAT_1425196e8;
  sStack_2f6 = param_4;
  if (0xf7 < param_3) goto override_jmp_140d1b05a_case_133;
                    /* WARNING: Switch is manually overridden */
  switch(param_3) {
  case 0:
    pcVar15 = "Carve fortification";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 1:
    pcVar15 = "Smooth wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 2:
    pcVar15 = "Smooth floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 3:
    pcVar15 = "Detail wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 4:
    pcVar15 = "Detail floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 5:
    pcVar15 = "Dig";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 6:
    pcVar15 = "Carve upward staircase";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 7:
    pcVar15 = "Carve downward staircase";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 8:
    pcVar15 = "Carve up/down staircase";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 9:
    pcVar15 = "Carve ramp";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 10:
    pcVar15 = "Dig channel";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb:
    pcVar15 = "Fell tree";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xc:
    pcVar15 = "Gather plants";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xd:
    pcVar15 = "Remove construction";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe:
    pcVar15 = "Collect webs";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xf:
    pcVar15 = "Bring item to depot";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x10:
    pcVar15 = "Bring item to shop";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x11:
    pcVar15 = "Eat";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 0x12:
    pcVar15 = "Get provisions";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x13:
  case 0x14:
    pcVar15 = "Drink";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x15:
  case 0x16:
    pcVar15 = "Fill waterskin";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x17:
    pcVar15 = "Sleep";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x18:
    pcVar15 = "Collect sand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x19:
    pcVar15 = "Fish";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1a:
    pcVar15 = "Hunt";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1b:
    pcVar15 = "Hunt for small creature";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x1c:
    pcVar15 = "Kidnap";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x1d:
    pcVar15 = "Beat criminal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x1e:
    pcVar15 = "Starting fist fight";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x1f:
    pcVar15 = "Collect taxes";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x20:
    pcVar15 = "Guard tax collector";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x21:
    pcVar15 = "Catch live land animal";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x22:
    pcVar15 = "Catch live fish";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x23:
    pcVar15 = "Return kill";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x24:
    pcVar15 = "Store owned item";
    goto LAB_140d1fb5c;
  case 0x25:
    pcVar15 = "Place item in tomb";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x26:
    pcVar15 = "Store item in stockpile";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x27:
    pcVar15 = "Store item in bag";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x28:
    pcVar15 = "Store item in location";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x29:
    pcVar15 = "Store weapon";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x2a:
    pcVar15 = "Store armor";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2b:
    pcVar15 = "Store item in barrel";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x2c:
    pcVar15 = "Store item in bin";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x2d:
    pcVar15 = "Seek artifact";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x2e:
    pcVar15 = "Seek infant";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2f:
  case 0x30:
    pcVar15 = "Go shopping";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x31:
    pcVar15 = "Clean";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x32:
    pcVar15 = "Rest";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x33:
    pcVar15 = "Pickup equipment";
    goto LAB_140d1fb5c;
  case 0x34:
    pcVar15 = "Dump item";
    ppplVar19 = (longlong ***)0x9;
    break;
  default:
    pcVar15 = "Strange mood";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x42:
    pcVar15 = "Construct building";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x43:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " Portal";
        ppplVar19 = (longlong ***)0x7;
        break;
      }
    }
    pcVar15 = " door";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x44:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " floodgate";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x45:
    FUN_140071040(param_2,"Make",4);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 3) == 0)) {
      load_supplier_0x70b90(param_2," ");
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      load_supplier_0xbb340(param_2,&ppplStack_2f0);
    }
    pcVar15 = " bed";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x46:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      load_supplier_0x70b90(param_2," throne");
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " chair";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x47:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      cVar5 = FUN_141475150(0x1423f3970,0x2f,param_6,param_7);
      if (cVar5 == '\0') {
        load_supplier_0x70b90(param_2," coffin");
      }
      else {
        load_supplier_0x70b90(param_2," sarcophagus");
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " casket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x48:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " table";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x49:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " box";
        ppplVar19 = (longlong ***)0x4;
        break;
      }
    }
    if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
      load_supplier_0x70b90(param_2," coffer");
    }
    else {
      load_supplier_0x70b90(param_2," chest");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x4a:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bag";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4b:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bin";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4c:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " armor stand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4d:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " weapon rack";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4e:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " cabinet";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x4f:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " statue";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x50:
    FUN_140071040(param_2,"Make ",5);
    if ((param_11 & 2) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 8) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x10) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140d1c852;
      }
    }
    else {
LAB_140d1c852:
      FUN_140071040(param_2,"four ",5);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " blocks";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x51:
    FUN_140071040(param_2,"Make raw ",9);
    goto LAB_140d1c3a5;
  case 0x52:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crafts";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x53:
    FUN_140071040(param_2,"Mint ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " coins";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x54:
    if (param_6 == -1) {
      pcVar15 = "Cut gems";
      ppplVar19 = (longlong ***)0x8;
    }
    else {
      FUN_140071040(param_2,"Cut ",4);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pcVar15 = (char *)&ppplStack_2f0;
      ppplVar19 = (longlong ***)pplStack_2e0;
      if (0xf < uStack_2d8) {
        pcVar15 = (char *)ppplStack_2f0;
      }
    }
    break;
  case 0x55:
    if (param_6 != -1) {
      uVar18 = 4;
      pcVar15 = "Cut ";
LAB_140d1c399:
      FUN_140071040(param_2,pcVar15,uVar18);
      goto LAB_140d1c3a5;
    }
    pcVar15 = "Cut raw glass into gems";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x56:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "cut gems";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x57:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "cut glass";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x58:
    pcVar15 = "Destroy building";
    goto LAB_140d1fb5c;
  case 0x59:
    FUN_140071040(param_2,"Smelt ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ore";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x5a:
    pcVar15 = "Melt a metal object";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x5b:
    pcVar15 = "Extract metal strands";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x5c:
    pcVar15 = "Plant seeds";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x5d:
    pcVar15 = "Harvest plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5e:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_90);
            FUN_141349540(lVar7,auStack_90,0);
            load_supplier_0xbb340(param_2,auStack_90);
            load_supplier_0x70b90(param_2," to hunt");
            FUN_140070e80(auStack_90);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "hunting animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5f:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_70);
            FUN_141349540(lVar7,auStack_70,0);
            load_supplier_0xbb340(param_2,auStack_70);
            load_supplier_0x70b90(param_2," for war");
            FUN_140070e80(auStack_70);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "war animal";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x60:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e557:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e557;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250efa8 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x61:
    FUN_140071040(param_2,"Forge ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " anvil";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x62:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " catapult parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 99:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " ballista parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 100:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e416:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e416;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x19,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f290 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x65:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e12e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e12e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f320 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x66:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e26f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e26f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x3c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f338 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x67:
    FUN_140071040(param_2,"Stud with ",10);
    goto LAB_140d1c3a5;
  case 0x68:
    pcVar15 = "Butcher an animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x69:
    pcVar15 = "Prepare a raw fish";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x6a:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Mill ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Mill plants";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6b:
    FUN_140071040(param_2,"Bait trap with ",0xf);
    if (sStack_2f6 == 0x2c) {
      load_supplier_0x70b90(param_2,"gem");
    }
    else if (sStack_2f6 == 0x30) {
      load_supplier_0x70b90(param_2,"meat");
    }
    else if (sStack_2f6 == 0x31) {
      load_supplier_0x70b90(param_2,"fish");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x6c:
    FUN_140071040(param_2,"Milk ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xe) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_270);
            FUN_141349540(lVar7,auStack_270,0);
            load_supplier_0xbb340(param_2,auStack_270);
            FUN_140070e80(auStack_270);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0x6d:
    pcVar15 = "Make cheese";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6e:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x6f:
    if (param_6 != -1) {
      uVar18 = 7;
      pcVar15 = "Polish ";
      goto LAB_140d1c399;
    }
    pcVar15 = "Polish stones";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x70:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      load_supplier_0x70b90(param_2," (vial)");
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants (vial)";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x71:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Process ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      load_supplier_0x70b90(param_2," (barrel)");
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Process plants (barrel)";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x72:
    if (param_6 == 2) {
      load_supplier_0x70b90(param_2,"Prepare easy meal");
    }
    else if (param_6 == 3) {
      load_supplier_0x70b90(param_2,"Prepare fine meal");
    }
    else if (param_6 == 4) {
      load_supplier_0x70b90(param_2,"Prepare lavish meal");
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x73:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1f5e2:
      if ((param_6 == 0) && (param_7 == -1)) goto LAB_140d1f5ec;
      if ((param_11 & 8) == 0) {
        pcVar15 = "Weave yarn into cloth";
        if ((param_11 >> 0xc & 1) == 0) {
          pcVar15 = "Weave thread into cloth";
        }
      }
      else {
        pcVar15 = "Weave thread into silk";
      }
      load_supplier_0x70b90(param_2,pcVar15);
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1f5e2;
LAB_140d1f5ec:
      FUN_140071040(param_2,"Weave metal cloth",0x11);
    }
    if (param_9 == 0) goto override_jmp_140d1b05a_case_133;
    pcVar15 = " (dyed only)";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x74:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d183:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d183;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1d,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2d8 + (longlong)sVar3 * 8);
    goto LAB_140d1d281;
  case 0x75:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d300:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d300;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1a,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        load_supplier_0x70b90(param_2,"small ");
      }
      else if (iVar6 == 2) {
        load_supplier_0x70b90(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2f0 + (longlong)sVar3 * 8);
    pcVar15 = (char *)(lVar7 + 0x88);
    ppplVar19 = *(longlong ****)(lVar7 + 0x98);
    if (0xf < *(ulonglong *)(lVar7 + 0xa0)) {
      pcVar15 = (char *)*(longlong *****)(lVar7 + 0x88);
    }
    break;
  case 0x76:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d46b:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d46b;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f308 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x77:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d548:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d548;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " terrarium";
        ppplVar19 = (longlong ***)0xa;
        break;
      }
    }
    pcVar15 = " cage";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x78:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d652:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d652;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 2) == 0) {
      if ((((param_11 & 8) == 0) && (199 < (ushort)(param_6 - 0x1a3U))) &&
         ((param_11 & 0x1015) == 0)) {
        load_supplier_0x70b90(param_2," chain");
        goto override_jmp_140d1b05a_case_133;
      }
      pcVar15 = " rope";
      ppplVar19 = (longlong ***)0x5;
    }
    else {
      pcVar15 = " chain";
      ppplVar19 = (longlong ***)0x6;
    }
    break;
  case 0x79:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d75e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d75e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 0x10) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 7) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          load_supplier_0x70b90(param_2," vials");
          goto override_jmp_140d1b05a_case_133;
        }
      }
      load_supplier_0x70b90(param_2," flasks");
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " waterskins";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x7a:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d898:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d898;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    FUN_140071040(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
        load_supplier_0x70b90(param_2," mugs");
      }
      else {
        load_supplier_0x70b90(param_2," goblets");
      }
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = " cups";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x7b:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dbc5:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dbc5;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " toy";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x7c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dc85:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dc85;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " animal trap";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x7d:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1dd45:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1dd45;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " barrel";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7e:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1df0f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1df0f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bucket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7f:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " window";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x80:
    pcVar15 = "Make totem";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x81:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e786:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e786;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    if ((param_11 & 0x20) == 0) {
      uVar18 = 0xc;
      pcVar15 = "twenty-five ";
    }
    else {
      uVar18 = 5;
      pcVar15 = "five ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_14250f2a8 + (longlong)sStack_2f8 * 8);
LAB_140d1d281:
    pppplVar16 = (longlong ****)(lVar7 + 0x88);
    goto LAB_140d1d288;
  case 0x82:
    FUN_140071040(param_2,"Decorate with ",0xe);
LAB_140d1c3a5:
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pcVar15 = (char *)&ppplStack_2f0;
    ppplVar19 = (longlong ***)pplStack_2e0;
    if (0xf < uStack_2d8) {
      pcVar15 = (char *)ppplStack_2f0;
    }
    break;
  case 0x83:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " backpack";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x84:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quiver";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x85:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e634:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e634;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ballista arrow head";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x86:
    FUN_140071040(param_2,"Assemble ",9);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_14250f2c0 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1d288;
  case 0x87:
    pcVar15 = "Load catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x88:
    pcVar15 = "Load ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x89:
    pcVar15 = "Fire catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8a:
    pcVar15 = "Fire ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8b:
    FUN_140071040(param_2,"Make",4);
    FUN_140071040(param_2," ",1);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " mechanisms";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x8c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1e91a:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1e91a;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    lVar8 = (longlong)sStack_2f8;
    lVar7 = *(longlong *)(lVar8 * 8 + _DAT_14250efc0);
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      puVar13 = (undefined8 *)(lVar7 + 0xa8);
      if (0xf < *(ulonglong *)(lVar7 + 0xc0)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_140071040(param_2,puVar13,*(undefined8 *)(lVar7 + 0xb8));
      FUN_140071040(param_2," ",1);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(lVar8 * 8 + _DAT_14250efc0) + 0x68);
    goto LAB_140d1d288;
  case 0x8d:
    pcVar15 = "Load cage trap";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x8e:
    pcVar15 = "Load stone trap";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x8f:
    pcVar15 = "Load weapon trap";
    goto LAB_140d1fb5c;
  case 0x90:
    pcVar15 = "Clean trap";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x91:
    FUN_140071040(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,"ammo",4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d1c3a5;
    pcVar15 = "polished stones";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x92:
    pcVar15 = "Link a building to trigger";
    ppplVar19 = (longlong ***)0x1a;
    break;
  case 0x93:
    pcVar15 = "Pull the lever";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x94:
    goto override_jmp_140d1b05a_case_133;
  case 0x95:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      load_supplier_0x70b90(param_2,"Extract from ");
      load_supplier_0x70cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(&DAT_14250ed78,param_7,auStack_2d0,0);
      load_supplier_0xbb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto override_jmp_140d1b05a_case_133;
    }
    pcVar15 = "Extract from plants";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x96:
    pcVar15 = "Extract from raw fish";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x97:
    pcVar15 = "Extract from land animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0x98:
    pcVar15 = "Tame a small animal";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x99:
    FUN_140071040(param_2,"Tame ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_f0);
            FUN_141349540(lVar7,auStack_f0,0);
            load_supplier_0xbb340(param_2,auStack_f0);
            FUN_140070e80(auStack_f0);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    goto LAB_140d1b5de;
  case 0x9a:
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70b90(param_2,"Chain ");
            load_supplier_0x70cc0(auStack_170);
            FUN_141349540(lVar7,auStack_170,0);
            load_supplier_0xbb340(param_2,auStack_170);
            FUN_140070e80(auStack_170);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "Put in chains";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x9b:
    FUN_140071040(param_2,"Unchain",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70b90(param_2," ");
            load_supplier_0x70cc0(auStack_110);
            FUN_141349540(lVar7,auStack_110,0);
            load_supplier_0xbb340(param_2,auStack_110);
            FUN_140070e80(auStack_110);
          }
          break;
        }
      }
    }
    goto override_jmp_140d1b05a_case_133;
  case 0x9c:
    pcVar15 = "Unchain pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9d:
    FUN_140071040(param_2,"Release ",8);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1f0);
            FUN_141349540(lVar7,auStack_1f0,0);
            load_supplier_0xbb340(param_2,auStack_1f0);
            FUN_140070e80(auStack_1f0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0x9e:
    pcVar15 = "Release pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9f:
    pcVar15 = "Release small creature";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xa0:
    pcVar15 = "Handle small creature";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xa1:
    FUN_140071040(param_2,"Handle ",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_230);
            FUN_141349540(lVar7,auStack_230,0);
            load_supplier_0xbb340(param_2,auStack_230);
            FUN_140070e80(auStack_230);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xa2:
    FUN_140071040(param_2,"Cage ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1d0);
            FUN_141349540(lVar7,auStack_1d0,0);
            load_supplier_0xbb340(param_2,auStack_1d0);
            FUN_140070e80(auStack_1d0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xa3:
    pcVar15 = "Cage small animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xa4:
    pcVar15 = "Recover wounded";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xa5:
    pcVar15 = "Diagnose patient";
    goto LAB_140d1fb5c;
  case 0xa6:
    pcVar15 = "Immobilize break";
    goto LAB_140d1fb5c;
  case 0xa7:
    pcVar15 = "Dress wound";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xa8:
    pcVar15 = "Clean patient";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xa9:
    pcVar15 = "Surgery";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xaa:
    pcVar15 = "Suture";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xab:
    pcVar15 = "Set bone";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xac:
    pcVar15 = "Place in traction";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xad:
    pcVar15 = "Drain aquarium";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xae:
    pcVar15 = "Fill aquarium";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xaf:
    pcVar15 = "Fill pond";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb0:
  case 0xb2:
    pcVar15 = "Give water";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xb1:
  case 0xb3:
    pcVar15 = "Give food";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb4:
    pcVar15 = "Recover pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb5:
    FUN_140071040(param_2,"Pit/pond ",9);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_1b0);
            FUN_141349540(lVar7,auStack_1b0,0);
            load_supplier_0xbb340(param_2,auStack_1b0);
            FUN_140070e80(auStack_1b0);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b5de;
  case 0xb6:
    pcVar15 = "Pit/pond small animal";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xb7:
    FUN_140071040(param_2,"Slaughter ",10);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1a) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_150);
            FUN_141349540(lVar7,auStack_150,0);
            load_supplier_0xbb340(param_2,auStack_150);
            FUN_140070e80(auStack_150);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0xb8:
    pcVar15 = "Make charcoal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xb9:
    pcVar15 = "Make ash";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xba:
    pcVar15 = "Make lye";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xbb:
    pcVar15 = "Make potash from lye";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbc:
    pcVar15 = "Fertilize field";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xbd:
    pcVar15 = "Make potash from ash";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbe:
    if (param_10 == -1) {
      load_supplier_0x70b90(param_2,"Dye thread");
      goto override_jmp_140d1b05a_case_133;
    }
    if ((param_14 != -1) && (param_15 != -1)) {
      load_supplier_0x70b90(param_2,"Tint ");
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
      pcVar15 = " thread ";
      goto LAB_140d1f287;
    }
    FUN_140071040(param_2,"Dye thread ",0xb);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
LAB_140d1d288:
    pcVar15 = (char *)pppplVar16;
    ppplVar19 = pppplVar16[2];
    if ((longlong ***)0xf < pppplVar16[3]) {
      pcVar15 = (char *)*pppplVar16;
    }
    break;
  case 0xbf:
    if (param_10 == -1) {
      load_supplier_0x70b90(param_2,"Dye cloth");
      goto override_jmp_140d1b05a_case_133;
    }
    if ((param_14 == -1) || (param_15 == -1)) {
      load_supplier_0x70b90(param_2,"Dye cloth ");
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
      goto override_jmp_140d1b05a_case_133;
    }
    load_supplier_0x70b90(param_2,"Tint ");
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
    pcVar15 = " cloth ";
LAB_140d1f287:
    load_supplier_0x70b90(param_2,pcVar15);
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
    load_supplier_0x70b90(param_2," using ");
    load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar24 * 8) + 0x50);
    load_supplier_0x70b90(param_2," dye");
    goto override_jmp_140d1b05a_case_133;
  case 0xc0:
    FUN_140071040(param_2,"Sew ",4);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " image";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xc1:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1de05:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1de05;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " tube";
        ppplVar19 = (longlong ***)0x5;
        break;
      }
    }
    pcVar15 = " pipe section";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xc2:
    pcVar15 = "Operate pump";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xc3:
    pcVar15 = "Manage work orders";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xc4:
    pcVar15 = "Update stockpile records";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xc5:
    pcVar15 = "Trade at depot";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xc6:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " hatch cover";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 199:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " grate";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 200:
    pcVar15 = "Remove stairs/ramps";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xc9:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quern";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xca:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " millstone";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcb:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " splint";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcc:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crutch";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcd:
    pcVar15 = "Make traction bench";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xce:
    pcVar15 = "Clean self";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcf:
    pcVar15 = "Bring crutch";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xd0:
    pcVar15 = "Apply cast";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xd1:
    puVar20 = param_8;
    if (0xf < (ulonglong)param_8[3]) {
      puVar20 = (undefined8 *)*param_8;
    }
    lVar7 = param_8[2];
    uVar21 = _DAT_1425196f0 - (longlong)_DAT_1425196e8 >> 3;
    puVar17 = _DAT_1425196e8;
    if (uVar21 != 0) {
      do {
        plVar23 = (longlong *)*puVar17;
        plVar14 = plVar23;
        if (0xf < (ulonglong)plVar23[3]) {
          plVar14 = (longlong *)*plVar23;
        }
        if ((lVar7 == plVar23[2]) &&
           (iVar11 = load_supplier_0x1554864(puVar20,plVar14,lVar7), iVar11 == 0)) {
          if (puVar13[iVar6] != 0) {
            FUN_140070c00(apppuStack_290,puVar13[iVar6] + 0x20);
            FUN_140546b30(apppuStack_290);
            ppppuVar12 = apppuStack_290;
            if (0xf < uStack_278) {
              ppppuVar12 = (undefined8 ****)apppuStack_290[0];
            }
            FUN_140071040(param_2,ppppuVar12,uStack_280);
            FUN_140070e80(apppuStack_290);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar21);
    }
    pcVar15 = "Reaction";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xd2:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " slab";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xd3:
    if (((param_10 != -1) && (lVar7 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar7 != 0)) &&
       (iVar11 = (int)lVar7 + -1, -1 < iVar11)) {
      do {
        iVar9 = iVar11 + iVar6 >> 1;
        lVar7 = *(longlong *)(_DAT_14251c198 + (longlong)iVar9 * 8);
        if (*(int *)(lVar7 + 0xe0) == param_10) {
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0xaa) == '\0') {
              lVar8 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar7 + 0xd8));
              if (lVar8 == 0) {
                load_supplier_0x70cc0(auStack_2d0);
                FUN_140abd670(*(undefined2 *)(lVar7 + 2),auStack_2d0,0,*(undefined2 *)(lVar7 + 4));
                load_supplier_0xbb340(param_2,auStack_2d0);
                puVar10 = auStack_2d0;
              }
              else {
                load_supplier_0x70cc0(auStack_b0);
                FUN_141349540(lVar8,auStack_b0,0);
                load_supplier_0xbb340(param_2,auStack_b0);
                puVar10 = auStack_b0;
              }
            }
            else {
              load_supplier_0x70cc0(auStack_d0);
              FUN_140aadad0(lVar7 + 0x38,auStack_d0);
              load_supplier_0xbb340(param_2,auStack_d0);
              puVar10 = auStack_d0;
            }
            FUN_140070e80(puVar10);
            load_supplier_0x70b90(param_2," (engrave memorial)");
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
        iVar4 = iVar9 + -1;
        if (*(int *)(lVar7 + 0xe0) < param_10) {
          iVar4 = iVar11;
          iVar6 = iVar9 + 1;
        }
        iVar11 = iVar4;
      } while (iVar6 <= iVar11);
    }
    pcVar15 = "Engrave memorial slab";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xd4:
    FUN_140071040(param_2,"Shear ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_250);
            FUN_141349540(lVar7,auStack_250,0);
            load_supplier_0xbb340(param_2,auStack_250);
            FUN_140070e80(auStack_250);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d1b246;
  case 0xd5:
    pcVar15 = "Spin thread";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xd6:
    FUN_140071040(param_2,"Pen/pasture ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_190);
            FUN_141349540(lVar7,auStack_190,0);
            load_supplier_0xbb340(param_2,auStack_190);
            FUN_140070e80(auStack_190);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
LAB_140d1b5de:
    pcVar15 = "a large animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xd7:
    pcVar15 = "Pen/pasture small animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xd8:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1d9d4:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1d9d4;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140071040(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    iVar6 = (int)(_DAT_14250eff8 - _DAT_14250eff0 >> 3) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250eff0 + lVar7 * 8) + 0x28) == sStack_2f8) {
          lVar7 = *(longlong *)(_DAT_14250eff0 + (longlong)iVar6 * 8);
          FUN_140071040(param_2," ",1);
          if (lVar7 == 0) goto LAB_140d1da88;
          plVar23 = (longlong *)(lVar7 + 0x68);
          pppuStack_2b0 = (undefined8 ***)0x0;
          lStack_2a8 = 0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          uVar21 = *(ulonglong *)(lVar7 + 0x78);
          if (0xf < *(ulonglong *)(lVar7 + 0x80)) {
            plVar23 = (longlong *)*plVar23;
          }
          if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_140066ec0();
          }
          if (uVar21 < 0x10) {
            uStack_298 = 0xf;
            pppuStack_2b0 = (undefined8 ***)*plVar23;
            lStack_2a8 = plVar23[1];
            uStack_2a0 = uVar21;
          }
          else {
            uVar24 = uVar21 | 0xf;
            uVar22 = 0x7fffffffffffffff;
            if ((uVar24 < 0x8000000000000000) && (uVar22 = uVar24, uVar24 < 0x16)) {
              uVar22 = 0x16;
            }
            pppuStack_2b0 = (undefined8 ***)FUN_140071e00(uVar22 + 1);
            uStack_2a0 = uVar21;
            uStack_298 = uVar22;
            load_supplier_0x155454e(pppuStack_2b0,plVar23,uVar21 + 1);
          }
          ppppuVar12 = &pppuStack_2b0;
          if (0xf < uStack_298) {
            ppppuVar12 = (undefined8 ****)pppuStack_2b0;
          }
          FUN_140071040(param_2,ppppuVar12,uStack_2a0);
          FUN_140070e80(&pppuStack_2b0);
          goto override_jmp_140d1b05a_case_133;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_140071040(param_2," ",1);
LAB_140d1da88:
    pcVar15 = "tool";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xd9:
    pcVar15 = "Collect clay";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xda:
    pcVar15 = "Install colony in hive";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xdb:
    pcVar15 = "Collect hive products";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xdc:
    pcVar15 = "Cause trouble";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xdd:
  case 0xef:
    pcVar15 = "No job";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xde:
    pcVar15 = "Report crime";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xdf:
    pcVar15 = "Execute criminal";
LAB_140d1fb5c:
    ppplVar19 = (longlong ***)0x10;
    break;
  case 0xe0:
    FUN_140071040(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_50);
            FUN_141349540(lVar7,auStack_50,0);
            load_supplier_0xbb340(param_2,auStack_50);
            FUN_140070e80(auStack_50);
          }
          break;
        }
      }
      goto override_jmp_140d1b05a_case_133;
    }
    goto LAB_140d1b246;
  case 0xe1:
    pcVar15 = "Carve track";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xe2:
    pcVar15 = "Push track vehicle";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xe3:
    pcVar15 = "Place track vehicle";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe4:
    pcVar15 = "Store item in vehicle";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xe5:
    FUN_140071040(param_2,"Geld ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x3b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_130);
            FUN_141349540(lVar7,auStack_130,0);
            load_supplier_0xbb340(param_2,auStack_130);
            FUN_140070e80(auStack_130);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
LAB_140d1b246:
    pcVar15 = "animal";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xe6:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " figurine";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xe7:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " amulet";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xe8:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " scepter";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xe9:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crown";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xea:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ring";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xeb:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " earring";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xec:
    FUN_140071040(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bracelet";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xed:
    FUN_140071040(param_2,"Make large ",0xb);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " gem";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xee:
    pcVar15 = "Put item on display";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf0:
    FUN_140071040(param_2,"Interrogate ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x45) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            load_supplier_0x70cc0(auStack_210);
            FUN_141349540(lVar7,auStack_210,0);
            load_supplier_0xbb340(param_2,auStack_210);
            FUN_140070e80(auStack_210);
            goto override_jmp_140d1b05a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "subject";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xf1:
    pcVar15 = "No activity";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf2:
    pcVar15 = "Store squad equipment";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xf3:
    FUN_140071040(param_2,"Mix ",4);
    if ((-1 < param_7) &&
       ((ulonglong)(longlong)param_7 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)param_7 * 8) + 0x50);
      load_supplier_0x70b90(param_2," ");
    }
    FUN_140071040(param_2,"dye",3);
    if ((param_14 != -1) && (param_15 != -1)) {
      load_supplier_0x70b90(param_2," using ");
      if ((-1 < param_14) && (uVar21 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
      }
      load_supplier_0x70b90(param_2," and ");
      if ((-1 < param_15) && (uVar24 < (ulonglong)(_DAT_142519540 - _DAT_142519538 >> 3))) {
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar24 * 8) + 0x50);
      }
    }
    goto override_jmp_140d1b05a_case_133;
  case 0xf4:
    if (param_10 != -1) {
      if ((param_14 != -1) && (param_15 != -1)) {
        load_supplier_0x70b90(param_2,"Tint ");
        load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + uVar21 * 8) + 0x50);
        pcVar15 = " leather ";
        goto LAB_140d1f287;
      }
      load_supplier_0x70b90(param_2,"Dye leather ");
      pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar22 * 8) + 0x50);
      goto LAB_140d1d288;
    }
    pcVar15 = "Dye leather";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf5:
    FUN_140071040(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      image_material_name(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " bolt thrower parts";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf6:
    pcVar15 = "Load bolt thrower";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xf7:
    pcVar15 = "Fire bolt thrower";
    ppplVar19 = (longlong ***)0x11;
  }
  FUN_140071040(param_2,pcVar15,ppplVar19);
override_jmp_140d1b05a_case_133:
  if (0xf < uStack_2d8) {
    uVar21 = uStack_2d8 + 1;
    pppplVar16 = (longlong ****)ppplStack_2f0;
    if (0xfff < uVar21) {
      uVar21 = uStack_2d8 + 0x28;
      pppplVar16 = (longlong ****)ppplStack_2f0[-1];
      if (0x1f < (ulonglong)((longlong)ppplStack_2f0 + (-8 - (longlong)pppplVar16))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    load_supplier_0x15530d0(pppplVar16,uVar21);
  }
  FUN_1415530b0(uStack_30 ^ (ulonglong)auStack_338);
  return;
}


/* reference PE:6aea05a1:02734000; preview-description; RVA 0x2158c0..0x2159d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_preview_description(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_48;
  longlong alStack_38 [6];
  
  alStack_38[4] = _DAT_1418be040 ^ (ulonglong)auStack_98;
  FUN_1400bcfe0(param_1 + 0x400);
  if ((*(longlong *)(param_1 + 0x1d8) - *(longlong *)(param_1 + 0x1d0) & 0xfffffffffffffff8U) != 0)
  {
    alStack_38[1] = 0;
    alStack_38[2] = 0;
    alStack_38[3] = 0xf;
    alStack_38[0] = 0;
    uStack_48 = 0;
    uStack_50 = 1;
    uStack_58 = 0xffffffff;
    uStack_60 = 0xffff;
    uStack_68 = 0xffffffff;
    uStack_70 = 1;
    uStack_78 = 1;
    image_artwork_description(0x1423f3970,(longlong *)(param_1 + 0x1d0),alStack_38,0);
    FUN_140900dc0(param_1 + 0x400,alStack_38,*(undefined4 *)(param_1 + 0x420));
    if (0xf < (ulonglong)alStack_38[3]) {
      uVar3 = alStack_38[3] + 1;
      lVar2 = alStack_38[0];
      if (0xfff < uVar3) {
        uVar3 = alStack_38[3] + 0x28;
        lVar2 = *(longlong *)(alStack_38[0] + -8);
        if (0x1f < (alStack_38[0] - lVar2) - 8U) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      load_supplier_0x15530d0(lVar2,uVar3);
    }
  }
  FUN_1415530b0(alStack_38[4] ^ (ulonglong)auStack_98);
  return;
}


/* reference PE:6aea05a1:02734000; selected-biography; RVA 0xc43530..0xc44b68 */

/* WARNING: Switch with 1 destination removed at 0x000140c43f37 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_selected_biography
               (longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  int iVar8;
  char cVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined8 ****ppppuVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined8 ****ppppuVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  short sVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_248 [32];
  undefined2 uStack_228;
  ushort uStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined4 uStack_1a2;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined1 auStack_70 [32];
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_248;
  uStack_208 = param_5;
  iVar26 = 0;
  iVar27 = 0;
  iVar12 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) + -1;
  lVar19 = (longlong)iVar12;
  if (-1 < iVar12) {
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar19 * 8);
    iVar26 = 0;
    iVar27 = 0;
    do {
      if ((*(short *)(*plVar14 + 2) == *(short *)(param_3 + 2)) &&
         (iVar26 = iVar26 + 1, 0 < *(int *)(*plVar14 + 0x10))) {
        iVar27 = iVar27 + 1;
      }
      plVar14 = plVar14 + -1;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  auStack_1f8[0] = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uVar13 = 0xffffffff;
  uStack_1e0 = 0xffffffffffffffff;
  uStack_1d8 = 0xffffffffffffffff;
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  uStack_1b8 = 0xffffffff;
  uStack_1b4 = 1;
  uStack_1b0 = 0xffffffff;
  uStack_1ac = 0xffff;
  uStack_1a8 = 0xffffffff;
  uStack_1a4 = 0xff;
  uStack_1a2 = 0xffff;
  uStack_19e = 0xffff;
  uStack_19c = 0xffffffff;
  uStack_198 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  uStack_188 = 0xffffffffffffffff;
  uStack_180 = 0xffffffffffffffff;
  uStack_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0xffffffffffffffff;
  uStack_150 = 0xffffffffffffffff;
  uStack_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  lStack_218 = param_1;
  uStack_210 = param_4;
  if (*(char *)(param_3 + 0xaa) == '\0') {
    FUN_140071040(param_2,"This nameless being",0x13);
  }
  else {
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(param_1,param_2,param_4,auStack_1f8);
  }
  if (_DAT_1418be238 == 3) {
    pcVar21 = " was ";
    uVar30 = 5;
  }
  else {
    pcVar21 = " is ";
    uVar30 = 4;
  }
  FUN_140071040(param_2,pcVar21,uVar30);
  if (*(int *)(param_3 + 0xd0) < 1) {
LAB_140c43928:
    lVar19 = 0;
    if (*(longlong *)(param_3 + 0x130) != 0) {
      lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x130) + 0x48);
      bVar33 = false;
      if (lVar19 != 0) {
        bVar33 = *(int *)(lVar19 + 0x144) != -1;
      }
      if (bVar33) {
        iVar26 = *(int *)(lVar19 + 0x140);
        lVar16 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
        if ((lVar16 != 0) && (iVar26 != -1)) {
          iVar27 = 0;
          iVar12 = (int)lVar16 + -1;
          if (-1 < iVar12) {
            do {
              iVar17 = iVar27 + iVar12 >> 1;
              lVar16 = *(longlong *)(_DAT_14251c198 + (longlong)iVar17 * 8);
              iVar18 = *(int *)(lVar16 + 0xe0);
              if (iVar18 == iVar26) {
                if (lVar16 != 0) goto LAB_140c439ef;
                break;
              }
              iVar8 = iVar17 + -1;
              if (iVar18 < iVar26) {
                iVar8 = iVar12;
                iVar27 = iVar17 + 1;
              }
              iVar12 = iVar8;
            } while (iVar27 <= iVar12);
          }
        }
        FUN_140071040(param_2,"a ",2);
LAB_140c439ef:
        puVar25 = (undefined8 *)(lVar19 + 0x150);
        if (0xf < *(ulonglong *)(lVar19 + 0x168)) {
          puVar25 = (undefined8 *)*puVar25;
        }
        FUN_140071040(param_2,puVar25,*(undefined8 *)(lVar19 + 0x160));
        FUN_140071040(param_2,", animated by unknown forces",0x1c);
        goto LAB_140c43bf3;
      }
    }
    uVar30 = FUN_140071040(param_2,"a ",2);
    if (((0 < *(int *)(param_3 + 0xd0)) && (**(char **)(param_3 + 200) < '\0')) &&
       ((lVar19 == 0 || (*(char *)(lVar19 + 0x88) == '\0')))) {
      uVar30 = load_supplier_0x70b90(param_2,"ghostly ");
    }
    uStack_220 = uStack_220 & 0xff00;
    uStack_228 = *(undefined2 *)(param_3 + 4);
    FUN_140bacb90(uVar30,param_2,(int)*(short *)(param_3 + 2),0);
    if ((lVar19 != 0) && (*(char *)(lVar19 + 0x88) != '\0')) {
      FUN_140071040(param_2," ",1);
      plVar14 = (longlong *)(lVar19 + 0x90);
      if (0xf < *(ulonglong *)(lVar19 + 0xa8)) {
        plVar14 = (longlong *)*plVar14;
      }
      FUN_140071040(param_2,plVar14,*(undefined8 *)(lVar19 + 0xa0));
    }
    if (*(int *)(param_3 + 0x10) < 1) {
      sVar10 = *(short *)(param_3 + 2);
      if ((-1 < sVar10) &&
         ((ulonglong)(longlong)sVar10 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar10 * 8);
        if ((*(int *)(lVar19 + 0x1b0) < 2) ||
           ((*(byte *)(*(longlong *)(lVar19 + 0x1a8) + 1) & 1) == 0)) {
          bVar33 = false;
        }
        else {
          bVar33 = true;
        }
        if (bVar33) goto LAB_140c43bf3;
      }
      load_supplier_0x70b90(param_2,".  ");
      load_supplier_0x70cc0(&pppuStack_d0);
      FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      pcVar21 = " is";
      if (_DAT_1418be238 == 3) {
        pcVar21 = " was";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      if (iVar27 < 1) {
        if (iVar26 < 2) {
LAB_140c44264:
          pcVar21 = " the only one of ";
        }
        else {
          pcVar21 = " one of the only ones of ";
        }
      }
      else if (iVar26 - iVar27 < 2) {
        pcVar21 = " the first of ";
      }
      else {
        if (iVar26 < 2) goto LAB_140c44264;
        pcVar21 = " one of the first of ";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      FUN_140abe2f0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,0);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      load_supplier_0x70b90(param_2," kind");
    }
    else {
      uVar30 = FUN_140071040(param_2," born in ",9);
      FUN_140baa300(uVar30,param_2,*(undefined4 *)(param_3 + 0x10),0xffffffff);
      FUN_140071040(param_2,".  ",3);
      plVar2 = *(longlong **)(param_3 + 0x120);
      for (plVar14 = *(longlong **)(param_3 + 0x118); plVar14 < plVar2; plVar14 = plVar14 + 1) {
        puVar25 = (undefined8 *)*plVar14;
        sVar10 = (**(code **)*puVar25)(puVar25);
        if (sVar10 == 0) {
          iVar26 = *(int *)(puVar25 + 1);
          goto LAB_140c43b44;
        }
      }
      iVar26 = -1;
LAB_140c43b44:
      plVar2 = *(longlong **)(param_3 + 0x120);
      for (plVar14 = *(longlong **)(param_3 + 0x118); plVar14 < plVar2; plVar14 = plVar14 + 1) {
        puVar25 = (undefined8 *)*plVar14;
        sVar10 = (**(code **)*puVar25)(puVar25);
        if (sVar10 == 1) {
          iVar27 = *(int *)(puVar25 + 1);
          goto LAB_140c43b76;
        }
      }
      iVar27 = -1;
LAB_140c43b76:
      if ((iVar26 != -1) || (iVar27 != -1)) {
        uStack_108 = 0;
        uStack_100 = 0;
        uVar24 = 0;
        uVar22 = 0;
        uStack_f8 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uVar32 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
        if ((uVar32 == 0) || (iVar26 == -1)) {
          bVar33 = uVar32 != 0;
          uVar28 = 0;
          uVar29 = uVar24;
          uVar32 = uVar32 & 0xffffffff;
          if (bVar33) goto LAB_140c43d32;
        }
        else {
          iVar12 = (int)uVar32 + -1;
          uVar22 = uVar24;
          uVar28 = uVar24;
          if (-1 < iVar12) {
            do {
              iVar17 = (int)uVar22 + iVar12 >> 1;
              uVar28 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar17 * 8);
              iVar18 = *(int *)(uVar28 + 0xe0);
              if (iVar18 == iVar26) {
                uVar32 = uVar32 & 0xffffffff;
                break;
              }
              iVar8 = iVar17 + -1;
              if (iVar18 < iVar26) {
                uVar22 = (ulonglong)(iVar17 + 1);
                iVar8 = iVar12;
              }
              iVar12 = iVar8;
              uVar28 = uVar24;
            } while ((int)uVar22 <= iVar12);
          }
LAB_140c43d32:
          uVar22 = uVar24;
          uVar29 = uVar28;
          if ((iVar27 != -1) && (iVar12 = (int)uVar32 + -1, -1 < iVar12)) {
            do {
              iVar18 = (int)uVar24 + iVar12 >> 1;
              uVar22 = *(ulonglong *)(_DAT_14251c198 + (longlong)iVar18 * 8);
              if (*(int *)(uVar22 + 0xe0) == iVar27) goto LAB_140c43d6b;
              iVar17 = iVar18 + -1;
              if (*(int *)(uVar22 + 0xe0) < iVar27) {
                uVar24 = (ulonglong)(iVar18 + 1);
                iVar17 = iVar12;
              }
              iVar12 = iVar17;
            } while ((int)uVar24 <= iVar17);
            uVar22 = 0;
          }
        }
LAB_140c43d6b:
        if ((uVar29 == 0) && (uVar22 == 0)) {
          uVar22 = (ulonglong)*(ushort *)(param_3 + 2);
          cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22,0x43);
          if ((cVar9 != '\0') &&
             (cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22 & 0xffff,0x44), cVar9 != '\0')) {
            cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar22 & 0xffff,0x45);
            if (cVar9 != '\0') {
              load_supplier_0x70cc0(&pppuStack_d0);
              FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
              load_supplier_0xbb340(param_2,&pppuStack_d0);
              pcVar21 = " is";
              if (_DAT_1418be238 == 3) {
                pcVar21 = " was";
              }
              load_supplier_0x70b90(param_2,pcVar21);
              load_supplier_0x70b90(param_2," of unknown parentage");
              FUN_140070e80(&pppuStack_d0);
            }
          }
        }
        else {
          uStack_c8 = 0;
          uStack_b8 = 0xf;
          if (*(char *)(param_3 + 6) == '\x01') {
            uVar11 = 0x6568;
LAB_140c43e99:
            pppuStack_d0 = (undefined8 ***)(ulonglong)uVar11;
            uStack_c0 = 2;
          }
          else {
            if (*(char *)(param_3 + 6) != '\0') {
              uVar11 = 0x7469;
              goto LAB_140c43e99;
            }
            uStack_c0 = 3;
            pppuStack_d0 = (undefined8 ****)0x656873;
          }
          pcVar21 = (char *)load_supplier_0xfcbe0(&pppuStack_d0,0);
          *pcVar21 = *pcVar21 + -0x61;
          pcVar21 = (char *)load_supplier_0xfcbe0(&pppuStack_d0);
          *pcVar21 = *pcVar21 + 'A';
          load_supplier_0xbb340(param_2,&pppuStack_d0);
          pcVar21 = " is the ";
          if (_DAT_1418be238 == 3) {
            pcVar21 = " was the ";
          }
          load_supplier_0x70b90(param_2,pcVar21);
          uVar24 = uVar29;
          if ((uVar29 != 0) || (uVar24 = uVar22, uVar22 != 0)) {
            uVar13 = FUN_140bcabf0(uVar24,*(undefined4 *)(param_3 + 0xe0));
          }
          if (uVar13 - 6 < 0x27) {
                    /* WARNING: Switch is manually overridden */
            FUN_140773b70(uVar13 & 0xffff,&pppuStack_d0,0,0);
            load_supplier_0xbb340(param_2,&pppuStack_d0);
          }
          else {
            load_supplier_0x70b90(param_2,"child");
          }
          load_supplier_0x70b90(param_2," of ");
          lVar19 = lStack_218;
          if ((iVar26 != -1) && (uVar29 != 0)) {
            uStack_220 = 1;
            uStack_228 = 1;
            FUN_140baabd0(lStack_218,param_2,iVar26,uStack_208);
          }
          if ((iVar27 != -1) && (uVar22 != 0)) {
            if ((iVar26 != -1) && (uVar29 != 0)) {
              load_supplier_0x70b90(param_2," and ");
            }
            uStack_220 = 1;
            uStack_228 = 1;
            FUN_140baabd0(lVar19,param_2,iVar27,uStack_208);
          }
          sVar10 = *(short *)(param_3 + 2);
          uVar24 = (ulonglong)sVar10;
          if ((-1 < sVar10) && (uVar24 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
            lVar19 = *(longlong *)(_DAT_14250eee8 + uVar24 * 8);
            if ((*(int *)(lVar19 + 0x1b0) < 9) ||
               ((*(byte *)(*(longlong *)(lVar19 + 0x1a8) + 8) & 8) == 0)) {
              bVar33 = false;
            }
            else {
              bVar33 = true;
            }
            if ((((bVar33) &&
                 (cVar9 = image_supplier_0xe4bf0(0x14250eec8,sVar10,0x44), cVar9 != '\0')) &&
                (cVar9 = image_supplier_0xe4bf0(0x14250eec8,uVar24 & 0xffff,0x45), cVar9 != '\0'))
               && ((uVar29 == 0 || (uVar22 == 0)))) {
              load_supplier_0x70b90(param_2,".  ");
              load_supplier_0x70b90(param_2,"The identity of ");
              load_supplier_0x70cc0(auStack_70);
              FUN_140abe2f0(*(undefined1 *)(param_3 + 6),auStack_70,0);
              load_supplier_0xbb340(param_2,auStack_70);
              load_supplier_0x70b90(param_2," ");
              pcVar21 = "mother";
              if (uVar29 != 0) {
                pcVar21 = "father";
              }
              load_supplier_0x70b90(param_2,pcVar21);
              load_supplier_0x70b90(param_2," has been lost to time");
              FUN_140070e80(auStack_70);
            }
          }
          if (0xf < uStack_b8) {
            uVar22 = uStack_b8 + 1;
            ppppuVar23 = (undefined8 ****)pppuStack_d0;
            if (0xfff < uVar22) {
              uVar22 = uStack_b8 + 0x28;
              ppppuVar23 = (undefined8 ****)pppuStack_d0[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_d0 + (-8 - (longlong)ppppuVar23))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar23,uVar22);
          }
        }
        FUN_140070d80(&uStack_f0);
        FUN_140070de0(&uStack_120);
        FUN_140070d80(&uStack_108);
        goto LAB_140c43bf3;
      }
      load_supplier_0x70cc0(&pppuStack_d0);
      FUN_140abe1d0(*(undefined1 *)(param_3 + 6),&pppuStack_d0,1);
      load_supplier_0xbb340(param_2,&pppuStack_d0);
      pcVar21 = " is";
      if (_DAT_1418be238 == 3) {
        pcVar21 = " was";
      }
      load_supplier_0x70b90(param_2,pcVar21);
      load_supplier_0x70b90(param_2," of unknown parentage");
    }
    FUN_140070e80(&pppuStack_d0);
  }
  else if ((**(byte **)(param_3 + 200) & 4) == 0) {
    if ((**(byte **)(param_3 + 200) & 8) == 0) goto LAB_140c43928;
    FUN_140071040(param_2,"a force",7);
    lVar19 = FUN_1405dcc30(_DAT_14250dfd8,*(undefined4 *)(param_3 + 0xe0));
    if (lVar19 != 0) {
      if (_DAT_1418be238 == 3) {
        pcVar21 = " which was said to permeate ";
        uVar30 = 0x1c;
      }
      else {
        pcVar21 = " which permeates ";
        uVar30 = 0x11;
      }
      FUN_140071040(param_2,pcVar21,uVar30);
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0xf;
      pppuStack_d0 = (undefined8 ****)0x0;
      FUN_140aae180(lVar19,&pppuStack_d0,1,0);
      ppppuVar23 = &pppuStack_d0;
      if (0xf < uStack_b8) {
        ppppuVar23 = (undefined8 ****)pppuStack_d0;
      }
      FUN_140071040(param_2,ppppuVar23,uStack_c0);
      if (0xf < uStack_b8) {
        uVar22 = uStack_b8 + 1;
        ppppuVar23 = (undefined8 ****)pppuStack_d0;
        if (0xfff < uVar22) {
          uVar22 = uStack_b8 + 0x28;
          ppppuVar23 = (undefined8 ****)pppuStack_d0[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_d0 + (-8 - (longlong)ppppuVar23))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        load_supplier_0x15530d0(ppppuVar23,uVar22);
      }
    }
  }
  else {
    FUN_140071040(param_2,"a deity",7);
    iVar26 = 0;
    uVar22 = _DAT_1423f3c80 - (longlong)_DAT_1423f3c78 >> 3;
    if (uVar22 != 0) {
      plVar14 = _DAT_1423f3c78;
      do {
        piVar1 = *(int **)(*plVar14 + 0xfc8);
        for (piVar15 = piVar1; piVar15 < *(int **)(*plVar14 + 0xfd0); piVar15 = piVar15 + 1) {
          if (*piVar15 == *(int *)(param_3 + 0xe0)) {
            if ((int)((longlong)piVar15 - (longlong)piVar1 >> 2) != -1) {
              lVar19 = _DAT_1423f3c78[iVar26];
              if (lVar19 != 0) {
                if (_DAT_1418be238 == 3) {
                  pcVar21 = " that occurs in the myths of ";
                  uVar30 = 0x1d;
                }
                else {
                  pcVar21 = " of ";
                  uVar30 = 4;
                }
                FUN_140071040(param_2,pcVar21,uVar30);
                uStack_c8 = 0;
                uStack_c0 = 0;
                uStack_b8 = 0xf;
                pppuStack_d0 = (undefined8 ****)0x0;
                FUN_140aae180(lVar19 + 0x20,&pppuStack_d0,1,0);
                ppppuVar23 = &pppuStack_d0;
                if (0xf < uStack_b8) {
                  ppppuVar23 = (undefined8 ****)pppuStack_d0;
                }
                FUN_140071040(param_2,ppppuVar23,uStack_c0);
                FUN_140070e80(&pppuStack_d0);
              }
              goto LAB_140c43bf3;
            }
            break;
          }
        }
        iVar26 = iVar26 + 1;
        plVar14 = plVar14 + 1;
      } while ((ulonglong)(longlong)iVar26 < uVar22);
    }
  }
LAB_140c43bf3:
  FUN_140071040(param_2,".  ",3);
  lVar16 = FUN_140df5d70(0x1424075f8,*(undefined4 *)(param_3 + 0xe0));
  lVar19 = lStack_218;
  if (((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x60))) && ((**(byte **)(lVar16 + 0x58) & 4) != 0)) {
    if (_DAT_1418be238 == 3) {
      FUN_140071040(param_2,"Although accounts vary, it is universally agreed that ",0x36);
    }
    lVar19 = lStack_218;
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(lStack_218,param_2,uStack_210,uStack_208);
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was ";
      uVar30 = 5;
    }
    else {
      pcVar21 = " is ";
      uVar30 = 4;
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    if (*(int *)(lVar16 + 0x60) < 2) {
LAB_140c44307:
      FUN_140071040(param_2,"guided by forces unknown.  ",0x1b);
    }
    else if ((*(byte *)(*(longlong *)(lVar16 + 0x58) + 1) & 4) == 0) {
      if ((*(byte *)(*(longlong *)(lVar16 + 0x58) + 1) & 2) == 0) goto LAB_140c44307;
      FUN_140071040(param_2,"possessed of an unusual destiny.  ",0x22);
    }
    else {
      FUN_140071040(param_2,"chosen by fate as the vanguard of destiny.  ",0x2c);
    }
  }
  bVar5 = false;
  bVar33 = true;
  if ((*(int *)(param_3 + 0xd0) < 1) || ((**(byte **)(param_3 + 200) & 4) == 0)) {
    sVar10 = *(short *)(param_3 + 4);
    uVar22 = (ulonglong)sVar10;
    sVar31 = *(short *)(param_3 + 2);
    uVar24 = (ulonglong)sVar31;
    if (sVar31 < 0) goto LAB_140c4481c;
    if (uVar24 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
      if ((sVar10 < 0) ||
         (lVar19 = *(longlong *)(_DAT_14250eee8 + uVar24 * 8),
         (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3) <= uVar22))
      goto LAB_140c447ab;
      lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + uVar22 * 8);
      if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
         (bVar4 = bVar33, (*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 0x10) == 0)) {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_140c44789;
LAB_140c44944:
      sVar10 = *(short *)(param_3 + 2);
      if ((((-1 < sVar10) &&
           ((ulonglong)(longlong)sVar10 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
          (lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar10 * 8), lVar19 != 0)) &&
         (*(short *)(param_3 + 4) != -1)) {
        lVar19 = *(longlong *)
                  (*(longlong *)(lVar19 + 0x178) + (longlong)*(short *)(param_3 + 4) * 8);
        puVar25 = (undefined8 *)(lVar19 + 0x220);
        if (0xf < *(ulonglong *)(lVar19 + 0x238)) {
          puVar25 = (undefined8 *)*puVar25;
        }
        FUN_140071040(param_2,puVar25,*(undefined8 *)(lVar19 + 0x230));
        FUN_140071040(param_2,"  ",2);
      }
    }
    else {
LAB_140c44789:
      if ((sVar31 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar24)) {
LAB_140c4481c:
        sVar10 = *(short *)(param_3 + 4);
        sVar31 = *(short *)(param_3 + 2);
        if (sVar31 < 0) goto LAB_140c449ae;
      }
      else {
LAB_140c447ab:
        if ((-1 < sVar10) &&
           (lVar19 = *(longlong *)(uVar24 * 8 + _DAT_14250eee8),
           uVar22 < (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3))
           ) {
          lVar19 = *(longlong *)
                    (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar24 * 8) + 0x178) + uVar22 * 8)
          ;
          if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
             ((*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 0x40) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140c44944;
          goto LAB_140c4481c;
        }
        sVar10 = *(short *)(param_3 + 4);
        sVar31 = *(short *)(param_3 + 2);
      }
      if ((ulonglong)(longlong)sVar31 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if (-1 < sVar10) {
          lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar31 * 8);
          if ((ulonglong)(longlong)sVar10 <
              (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) {
            lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
            if ((*(int *)(lVar19 + 0x6b0) < 0x12) ||
               (-1 < *(char *)(*(longlong *)(lVar19 + 0x6a8) + 0x11))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_140c44944;
            goto LAB_140c448bd;
          }
        }
      }
      else {
LAB_140c448bd:
        if ((sVar31 < 0) ||
           ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (ulonglong)(longlong)sVar31))
        goto LAB_140c449ae;
      }
      if (-1 < sVar10) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar31 * 8);
        if ((ulonglong)(longlong)sVar10 <
            (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3)) {
          lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
          if ((*(int *)(lVar19 + 0x6b0) < 0x11) ||
             ((*(byte *)(*(longlong *)(lVar19 + 0x6a8) + 0x10) & 8) == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140c44944;
        }
      }
    }
  }
  else {
    uStack_220 = 1;
    uStack_228 = 0;
    FUN_140baabd0(lVar19,param_2,uStack_210,uStack_208);
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was most often depicted as a ";
      uVar30 = 0x1e;
    }
    else {
      pcVar21 = " most often takes the form of a ";
      uVar30 = 0x20;
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    if (0 < *(int *)(param_3 + 0xd0)) {
      if ((**(byte **)(param_3 + 200) & 0x10) != 0) {
        FUN_140071040(param_2,"skeletal ",9);
      }
      if (0 < *(int *)(param_3 + 0xd0)) {
        if ((**(byte **)(param_3 + 200) & 0x20) != 0) {
          FUN_140071040(param_2,"rotting ",8);
        }
        if ((0 < *(int *)(param_3 + 0xd0)) && (**(char **)(param_3 + 200) < '\0')) {
          FUN_140071040(param_2,"ghostly ",8);
        }
      }
    }
    uStack_a8 = 0;
    uStack_98 = 0xf;
    sVar10 = *(short *)(param_3 + 4);
    sVar31 = *(short *)(param_3 + 2);
    uVar22 = (ulonglong)sVar31;
    lStack_a0 = 0;
    pppuStack_b0 = (undefined8 ****)0x0;
    if (sVar10 == -1) {
      if (-1 < sVar31) goto LAB_140c444da;
    }
    else if (-1 < sVar31) {
      if (((uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar10)) &&
         (lVar19 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8),
         (ulonglong)(longlong)sVar10 <
         (ulonglong)(*(longlong *)(lVar19 + 0x180) - *(longlong *)(lVar19 + 0x178) >> 3))) {
        lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x178) + (longlong)sVar10 * 8);
        ppppuVar23 = (undefined8 ****)(lVar19 + 0x20);
        if (&pppuStack_b0 != ppppuVar23) {
          if (0xf < *(ulonglong *)(lVar19 + 0x38)) {
            ppppuVar23 = (undefined8 ****)*ppppuVar23;
          }
          FUN_140070f00(&pppuStack_b0,ppppuVar23,*(undefined8 *)(lVar19 + 0x30));
          if (lStack_a0 != 0) goto LAB_140c44529;
        }
      }
LAB_140c444da:
      if (uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        lVar19 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8);
        ppppuVar23 = (undefined8 ****)(lVar19 + 0x20);
        if (&pppuStack_b0 != ppppuVar23) {
          if (0xf < *(ulonglong *)(lVar19 + 0x38)) {
            ppppuVar23 = (undefined8 ****)*ppppuVar23;
          }
          FUN_140070f00(&pppuStack_b0,ppppuVar23,*(undefined8 *)(lVar19 + 0x30));
        }
      }
    }
LAB_140c44529:
    lVar19 = lStack_a0;
    pppuVar6 = pppuStack_b0;
    uVar22 = (ulonglong)*(short *)(param_3 + 2);
    if ((-1 < *(short *)(param_3 + 2)) &&
       (uVar22 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
      lVar16 = *(longlong *)(_DAT_14250eee8 + uVar22 * 8);
      if ((*(int *)(lVar16 + 0x1b0) < 9) ||
         ((*(byte *)(*(longlong *)(lVar16 + 0x1a8) + 8) & 4) == 0)) {
        bVar33 = false;
      }
      else {
        bVar33 = true;
      }
      if (bVar33) {
        uStack_88 = 0;
        lStack_80 = 0;
        uStack_78 = 0xf;
        pppuStack_90 = (undefined8 ****)0x0;
        sVar10 = *(short *)(param_3 + 4);
        if ((-1 < sVar10) &&
           ((ulonglong)(longlong)sVar10 <
            (ulonglong)(*(longlong *)(lVar16 + 0x180) - *(longlong *)(lVar16 + 0x178) >> 3))) {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar22 * 8) + 0x178) +
                    (longlong)sVar10 * 8);
          ppppuVar23 = (undefined8 ****)(lVar16 + 0x20);
          if (&pppuStack_90 != ppppuVar23) {
            if (0xf < *(ulonglong *)(lVar16 + 0x38)) {
              ppppuVar23 = (undefined8 ****)*ppppuVar23;
            }
            FUN_140070f00(&pppuStack_90,ppppuVar23,*(undefined8 *)(lVar16 + 0x30));
          }
        }
        uVar22 = uStack_78;
        lVar16 = lStack_80;
        pppuVar7 = pppuStack_90;
        ppppuVar23 = &pppuStack_b0;
        if (0xf < uStack_98) {
          ppppuVar23 = (undefined8 ****)pppuVar6;
        }
        ppppuVar20 = &pppuStack_90;
        if (0xf < uStack_78) {
          ppppuVar20 = (undefined8 ****)pppuStack_90;
        }
        if (((lStack_80 == lVar19) &&
            (iVar26 = load_supplier_0x1554864(ppppuVar20,ppppuVar23,lStack_80), iVar26 == 0)) ||
           (lVar16 == 0)) {
          if (*(char *)(param_3 + 6) == '\0') {
            FUN_140071040(param_2,"female ",7);
          }
          if (*(char *)(param_3 + 6) == '\x01') {
            FUN_140071040(param_2,"male ",5);
          }
        }
        if (0xf < uVar22) {
          uVar24 = uVar22 + 1;
          ppppuVar23 = (undefined8 ****)pppuVar7;
          if (0xfff < uVar24) {
            uVar24 = uVar22 + 0x28;
            ppppuVar23 = (undefined8 ****)pppuVar7[-1];
            if (0x1f < (ulonglong)((longlong)pppuVar7 + (-8 - (longlong)ppppuVar23))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          load_supplier_0x15530d0(ppppuVar23,uVar24);
        }
      }
    }
    ppppuVar23 = &pppuStack_b0;
    if (0xf < uStack_98) {
      ppppuVar23 = (undefined8 ****)pppuVar6;
    }
    FUN_140071040(param_2,ppppuVar23,lVar19);
    bVar33 = false;
    bVar5 = true;
    FUN_140070e80(&pppuStack_b0);
  }
LAB_140c449ae:
  if (((*(longlong **)(param_3 + 0x130) == (longlong *)0x0) ||
      (plVar14 = (longlong *)**(longlong **)(param_3 + 0x130), plVar14 == (longlong *)0x0)) ||
     (plVar14[1] - *plVar14 >> 1 == 0)) {
    if (!bVar5) goto LAB_140c44b43;
  }
  else {
    if (bVar33) {
      uStack_220 = 1;
      uStack_228 = 0;
      FUN_140baabd0(lStack_218,param_2,uStack_210,uStack_208);
    }
    else {
      FUN_140071040(param_2," and",4);
    }
    uVar30 = 4;
    if (_DAT_1418be238 == 3) {
      pcVar21 = " was ";
      uVar30 = 5;
    }
    else {
      pcVar21 = " is ";
    }
    FUN_140071040(param_2,pcVar21,uVar30);
    FUN_140071040(param_2,"associated with ",0x10);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0xf;
    pppuStack_d0 = (undefined8 ****)0x0;
    iVar26 = (int)(((longlong *)**(longlong **)(param_3 + 0x130))[1] -
                   *(longlong *)**(longlong **)(param_3 + 0x130) >> 1) + -1;
    lVar19 = (longlong)iVar26;
    if (-1 < iVar26) {
LAB_140c44aa0:
      do {
        image_deity_domain_article
                  (*(undefined2 *)(*(longlong *)**(undefined8 **)(param_3 + 0x130) + lVar19 * 2),
                   &pppuStack_d0);
        ppppuVar23 = &pppuStack_d0;
        if (0xf < uStack_b8) {
          ppppuVar23 = (undefined8 ****)pppuStack_d0;
        }
        FUN_140071040(param_2,ppppuVar23,uStack_c0);
        if (lVar19 < 2) {
          if (lVar19 == 1) {
            FUN_140071040(param_2," and ",5);
            lVar19 = 0;
            goto LAB_140c44aa0;
          }
        }
        else {
          FUN_140071040(param_2,", ",2);
        }
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
    }
    FUN_140070e80(&pppuStack_d0);
  }
  FUN_140071040(param_2,".  ",3);
LAB_140c44b43:
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_248);
  return;
}


/* reference PE:6aea05a1:02734000; selected-item-description; RVA 0xc8ccf0..0xc91350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_selected_item_description
               (longlong *param_1,longlong *param_2,undefined1 param_3,char param_4,
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
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  char *pcVar26;
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
    load_supplier_0x70b90(param_2,"[P]");
  }
  sVar6 = (**(code **)*param_1)(param_1);
  bVar35 = false;
  if (sVar6 == 0x36) {
    uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
    cVar3 = image_supplier_0x14ef20(&DAT_14250ed78,uVar10,4);
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
    uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    cVar3 = FUN_141475150(0x1423f3970,0x1e,uVar7,uVar10);
    if ((cVar3 == '\0') && ((*(uint *)(param_1 + 2) & 0x200) == 0)) {
      uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      cVar3 = FUN_141475150(0x1423f3970,0x2f,uVar7,uVar10);
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
    if ((sVar6 == 0) && (iVar11 = (**(code **)(*param_1 + 0x18))(param_1), iVar11 != -1)) {
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
    iVar11 = (**(code **)(*param_1 + 0x18))(param_1);
    bVar34 = iVar11 != -1;
  }
  iVar11 = (**(code **)(*param_1 + 0x478))(param_1);
  if (bVar35) {
    iVar11 = (**(code **)(*param_1 + 0x478))(param_1);
    if (iVar11 < 2) {
      pcVar26 = "This is a bundle of";
    }
    else {
      load_supplier_0x70b90(param_2,"These are ");
      uVar10 = (**(code **)(*param_1 + 0x478))(param_1);
      FUN_140545610(uVar10,param_2);
      pcVar26 = " bundles of";
    }
LAB_140c8d0d7:
    load_supplier_0x70b90(param_2,pcVar26);
  }
  else if (iVar11 == 1) {
    pcVar26 = "These are";
    if (!bVar33) {
      pcVar26 = "This is";
    }
    load_supplier_0x70b90(param_2,pcVar26);
    if (!bVar34) {
      load_supplier_0x70b90(param_2," a");
      sVar6 = (**(code **)(*param_1 + 0x508))(param_1);
      if ((sVar6 == 4) && ((*(uint *)(param_1 + 2) & 0x40000) == 0)) {
        pcVar26 = "n";
        goto LAB_140c8d0d7;
      }
    }
  }
  else {
    load_supplier_0x70b90(param_2,"This is a stack of");
    iVar11 = (**(code **)(*param_1 + 0x478))(param_1);
    if (1 < iVar11) {
      load_supplier_0x70b90(param_2," ");
      uVar10 = (**(code **)(*param_1 + 0x478))(param_1);
      FUN_140545610(uVar10,param_2);
    }
  }
  load_supplier_0x70cc0(auStack_140);
  FUN_140c7d140(param_1,auStack_140,1,0xffffffff);
  if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
    sVar6 = (**(code **)*param_1)(param_1);
    if (sVar6 == 0x48) {
      sVar6 = (**(code **)(*param_1 + 0x508))();
      if (sVar6 == 1) {
        pcVar26 = " well-prepared";
      }
      else if (sVar6 == 2) {
        pcVar26 = " finely-prepared";
      }
      else if (sVar6 == 3) {
        pcVar26 = " superiorly prepared";
      }
      else if (sVar6 == 4) {
        pcVar26 = " exceptional prepared";
      }
      else {
        if (sVar6 != 5) goto LAB_140c8d1c8;
        pcVar26 = " masterfully prepared";
      }
    }
    else {
      sVar6 = (**(code **)(*param_1 + 0x508))(param_1);
      if (sVar6 == 1) {
        pcVar26 = " well-crafted";
      }
      else if (sVar6 == 2) {
        pcVar26 = " finely-crafted";
      }
      else if (sVar6 == 3) {
        pcVar26 = " superior quality";
      }
      else if (sVar6 == 4) {
        pcVar26 = " exceptional";
      }
      else {
        if (sVar6 != 5) goto LAB_140c8d1c8;
        pcVar26 = " masterful";
      }
    }
    load_supplier_0x70b90(param_2,pcVar26);
  }
LAB_140c8d1c8:
  load_supplier_0x70b90(param_2," ");
  load_supplier_0xbb340(param_2,auStack_140);
  if (((*(uint *)(param_1 + 2) & 0x8000000) == 0) &&
     (sVar6 = (**(code **)(*param_1 + 0x508))(param_1), sVar6 == 5)) {
    uVar10 = (**(code **)(*param_1 + 0x1e8))(param_1);
    lVar14 = FUN_1400693f0(0x14251c138,uVar10);
    if (lVar14 == 0) {
      load_supplier_0x70b90(param_2," created by an unknown artisan");
    }
    else {
      load_supplier_0x70b90(param_2," created by ");
      if ((param_6 & 2) != 0) {
        load_supplier_0x70b90(param_2,"[LPAGE:HF:");
        FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
        load_supplier_0x70b90(param_2,"]");
      }
      lVar14 = FUN_140c27320(lVar14);
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
        FUN_140aadad0(lVar14,auStack_140);
      }
      load_supplier_0xbb340(param_2,auStack_140);
      if ((param_6 & 2) != 0) {
        load_supplier_0x70b90(param_2,"[/LPAGE]");
      }
    }
  }
  load_supplier_0x70b90(param_2,".  ");
  if ((*(uint *)(param_1 + 2) & 0x8000000) != 0) {
    load_supplier_0x70b90(param_2,"All ");
    load_supplier_0x70cc0(alStack_180);
    uVar7 = (**(code **)(*param_1 + 0x590))(param_1);
    cVar3 = image_supplier_0x1bdae0(0x14250eec8,uVar7,0x19);
    if (cVar3 == '\0') {
      load_supplier_0x70bb0(alStack_180,"craftsman");
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x590))(param_1);
      uStack_220 = uStack_220 & 0xffffffffffffff00;
      uStack_228 = uStack_228 & 0xffffff00;
      FUN_1401bdb30(0x14250eec8,alStack_180,uVar7,0x19);
    }
    load_supplier_0xbb340(param_2,alStack_180);
    load_supplier_0x70b90(param_2,"ship is of the highest quality.  ");
    load_supplier_0x69460(alStack_180);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((((sVar6 == 0x19) || (sVar6 == 0x1a)) || (sVar6 == 0x1c)) ||
     ((sVar6 == 0x1d || (sVar6 == 0x3c)))) {
    sVar6 = (**(code **)(*param_1 + 0x590))(param_1);
    image_supplier_0xae67e0(asStack_1c0,aiStack_1b8);
    if ((sVar6 != -1) && (sVar6 != asStack_1c0[0])) {
      load_supplier_0x70b90(param_2,"It is sized for ");
      load_supplier_0x70cc0(auStack_160);
      FUN_140abd670(sVar6,auStack_160,1,0xffffffff);
      load_supplier_0xbb340(param_2,auStack_160);
      load_supplier_0x70b90(param_2,".  ");
      load_supplier_0x69460(auStack_160);
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
    lVar14 = FUN_14146c4a0(0x1423f3970,piStack_198,uStack_188);
    if (lVar14 != 0) {
      load_supplier_0x70cc0(alStack_180);
      uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
      uStack_200 = CONCAT31(uStack_200._1_3_,param_4);
      uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
      uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
      uStack_218 = 4;
      uStack_220 = CONCAT71(uStack_220._1_7_,param_3);
      uStack_228 = uStack_228 & 0xffffff00;
      image_artwork_description(0x1423f3970,lVar14,alStack_180,0);
      uVar15 = load_supplier_0x70960(alStack_180);
      if ((uVar15 < 0x50) || (param_4 != '\0')) {
        load_supplier_0xbb340(param_2,alStack_180);
      }
      else {
        load_supplier_0x70b90(param_2,"[R]");
        load_supplier_0xbb340(param_2,alStack_180);
        load_supplier_0x70b90(param_2,"[R]");
      }
      load_supplier_0x69460(alStack_180);
    }
  }
LAB_140c8d554:
  sVar6 = (**(code **)*param_1)(param_1);
  uVar15 = 0;
  if (sVar6 == 0x48) {
    load_supplier_0x70b90(param_2,"The ingredients are ");
    plVar23 = param_1 + 0x1c;
    iVar11 = load_supplier_0x70480(plVar23);
joined_r0x000140c8d58f:
    iVar11 = iVar11 + -1;
    cVar3 = cStack_1d8;
    if (-1 < iVar11) {
      do {
        lVar14 = (longlong)iVar11;
        plVar16 = (longlong *)load_supplier_0x70850(plVar23,lVar14);
        sVar6 = *(short *)(*plVar16 + 0x10);
        if (sVar6 == 1) {
          pcVar26 = "well-";
LAB_140c8d5f9:
          load_supplier_0x70b90(param_2,pcVar26);
        }
        else {
          if (sVar6 == 2) {
            pcVar26 = "finely ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 3) {
            pcVar26 = "superiorly ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 4) {
            pcVar26 = "exceptionally ";
            goto LAB_140c8d5f9;
          }
          if (sVar6 == 5) {
            pcVar26 = "masterfully ";
            goto LAB_140c8d5f9;
          }
        }
        puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,lVar14);
        pcVar26 = "cooked ";
        if (*(short *)*puVar17 == 0) {
          pcVar26 = "minced ";
        }
        load_supplier_0x70b90(param_2,pcVar26);
        plVar16 = (longlong *)load_supplier_0x70850(plVar23,lVar14);
        uVar28 = *(uint *)(*plVar16 + 8);
        plVar16 = (longlong *)load_supplier_0x70850(plVar23,lVar14);
        uVar7 = *(undefined2 *)(*plVar16 + 6);
        plVar16 = (longlong *)load_supplier_0x70850(plVar23,lVar14);
        uVar1 = *(undefined2 *)(*plVar16 + 4);
        plVar16 = (longlong *)load_supplier_0x70850(plVar23,lVar14);
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
        image_item_noun(auStack_140,*(undefined2 *)(*plVar16 + 2),uVar1,uVar7);
        load_supplier_0xbb340(param_2,auStack_140);
        if (1 < iVar11) {
          pcVar26 = ", ";
          goto LAB_140c8d6f7;
        }
        if (iVar11 != 1) goto LAB_140c8d6f0;
        load_supplier_0x70b90(param_2," and ");
        iVar11 = 0;
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
    lVar14 = load_supplier_0x70480(param_1);
    uVar22 = uStack_d0 & 0xffff;
    sVar31 = (short)uStack_d0;
    uVar20 = uVar15;
    sVar6 = uStack_d0._6_2_;
    sVar9 = uStack_d0._4_2_;
    sVar30 = uStack_d0._2_2_;
    if (lVar14 != 0) {
      do {
        puVar17 = (undefined8 *)load_supplier_0x70850(param_1,uVar15);
        iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
        if (iVar11 == 1) {
          plVar23 = (longlong *)load_supplier_0x70850(param_1,uVar15);
          lVar14 = *plVar23;
          if ((*(byte *)(lVar14 + 0x28) & 1) == 0) {
            if (*(short *)(lVar14 + 8) == 0) {
              cVar3 = FUN_141475150(0x1423f3970,0x2f,0,*(undefined4 *)(lVar14 + 0xc));
              if (cVar3 == '\0') {
                cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(lVar14 + 8),
                                      *(undefined4 *)(lVar14 + 0xc));
                if ((cVar3 != '\0') ||
                   (cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(lVar14 + 8),
                                          *(undefined4 *)(lVar14 + 0xc)), cVar3 != '\0'))
                goto LAB_140c8d8f5;
                uVar8 = (short)uVar22 + 1;
                uVar22 = (ulonglong)uVar8;
                uStack_d0 = CONCAT62(uStack_d0._2_6_,uVar8);
              }
              else {
                uStack_d0._0_4_ = CONCAT22(sVar30 + 1,(undefined2)uStack_d0);
                sVar30 = sVar30 + 1;
              }
            }
            else {
LAB_140c8d8f5:
              uStack_d0._0_6_ = CONCAT24(sVar9 + 1,(undefined4)uStack_d0);
              sVar9 = sVar9 + 1;
            }
          }
          else {
            uStack_d0 = CONCAT26(sVar6 + 1,(undefined6)uStack_d0);
            sVar6 = sVar6 + 1;
          }
        }
        else {
          puVar17 = (undefined8 *)load_supplier_0x70850(param_1,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          *(short *)(&uStack_d8 + iVar11) = *(short *)(&uStack_d8 + iVar11) + 1;
          uVar22 = uStack_d0 & 0xffff;
          sVar6 = uStack_d0._6_2_;
          sVar9 = uStack_d0._4_2_;
          sVar30 = uStack_d0._2_2_;
        }
        sVar31 = (short)uVar22;
        uVar28 = (int)uVar20 + 1;
        uVar15 = (ulonglong)(int)uVar28;
        uVar19 = load_supplier_0x70480(param_1);
        param_2 = plStack_1a0;
        uVar20 = (ulonglong)uVar28;
      } while (uVar15 < uVar19);
    }
    plVar23 = plStack_1d0;
    if ((((0 < sVar31) || (0 < sVar30)) || (0 < sVar9)) || ((0 < sVar6 || (0 < (short)uStack_c0))))
    {
      cVar3 = '\x01';
      auStack_1c8[0] = (uint)(0 < sVar31);
      if (0 < sVar30) {
        auStack_1c8[0] = auStack_1c8[0] + 1;
      }
      if (0 < sVar9) {
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
      plVar21 = plStack_1d0 + 0x1a;
      plVar16 = &uStack_d0;
      uVar28 = auStack_1c8[0];
      do {
        uVar15 = 0;
        asStack_1c0[0] = (short)*plVar16;
        if (0 < asStack_1c0[0]) {
          plStack_1b0 = plVar16;
          if (cVar3 != '\0') {
            load_supplier_0x70b90(param_2,"It is ");
            cStack_1d7 = '\0';
          }
          if (uVar29 == 0) {
            pcVar26 = "encrusted with";
LAB_140c8da31:
            load_supplier_0x70b90(param_2,pcVar26);
          }
          else {
            if (uVar29 == 1) {
              pcVar26 = "studded with";
              goto LAB_140c8da31;
            }
            if (uVar29 == 2) {
              pcVar26 = "decorated with";
              goto LAB_140c8da31;
            }
            if (uVar29 == 3) {
              pcVar26 = "glazed with";
              goto LAB_140c8da31;
            }
          }
          load_supplier_0x70b90(param_2," ");
          aiStack_1b8[0] = 0;
          lVar14 = load_supplier_0x70480(plVar21);
          if (lVar14 != 0) {
            do {
              puVar17 = (undefined8 *)load_supplier_0x70850(plVar21,uVar15);
              iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
              if (iVar11 == 1) {
                plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                lVar14 = *plVar16;
                if ((*(byte *)(lVar14 + 0x28) & 1) == 0) {
                  if (uVar29 < 3) {
                    plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                    if (*(short *)(*plVar16 + 8) == 0) {
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar16 + 8),uVar10);
                      if (cVar3 == '\0') {
                        plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                        uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                        plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                        cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(*plVar16 + 8),uVar10)
                        ;
                        if (cVar3 == '\0') {
                          plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                          uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                          plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                          cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(*plVar16 + 8),
                                                uVar10);
                          if ((cVar3 == '\0') && (uVar29 == 0)) goto LAB_140c8dcd0;
                        }
                      }
                    }
                    plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                    if (*(short *)(*plVar16 + 8) == 0) {
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar16 + 8),uVar10);
                      if (cVar3 == '\0') {
                        plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                        uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                        plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                        cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(*plVar16 + 8),uVar10)
                        ;
                        if (cVar3 == '\0') {
                          plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                          uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                          plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                          cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(*plVar16 + 8),
                                                uVar10);
                          if (cVar3 == '\0') goto LAB_140c8dc56;
                        }
                        if (uVar29 == 2) goto LAB_140c8dcd0;
                      }
                    }
LAB_140c8dc56:
                    plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                    if (*(short *)(*plVar16 + 8) == 0) {
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                      plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                      cVar3 = FUN_141475150(0x1423f3970,0x2f,*(undefined2 *)(*plVar16 + 8),uVar10);
                      if ((cVar3 != '\0') && (uVar29 == 1)) goto LAB_140c8dcd0;
                    }
                    plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                    if (*(short *)(*plVar16 + 8) == 0) goto LAB_140c8df5f;
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
                if ((*(uint *)(plVar23 + 2) & 0x8000000) == 0) {
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  sVar6 = *(short *)(*plVar16 + 0x18);
                  if (uVar29 == 3) {
                    if (sVar6 == 1) {
                      pcVar26 = "well-prepared ";
                    }
                    else if (sVar6 == 2) {
                      pcVar26 = "finely-prepared ";
                    }
                    else if (sVar6 == 3) {
LAB_140c8dd22:
                      pcVar26 = "superior quality ";
                    }
                    else if (sVar6 == 4) {
                      pcVar26 = "exceptionally prepared ";
                    }
                    else {
                      if (sVar6 != 5) goto LAB_140c8dd80;
                      pcVar26 = "masterfully prepared ";
                    }
                  }
                  else if (sVar6 == 1) {
                    pcVar26 = "well-crafted ";
                  }
                  else if (sVar6 == 2) {
                    pcVar26 = "finely-crafted ";
                  }
                  else {
                    if (sVar6 == 3) goto LAB_140c8dd22;
                    if (sVar6 == 4) {
                      pcVar26 = "exceptionally worked ";
                    }
                    else {
                      if (sVar6 != 5) goto LAB_140c8dd80;
                      pcVar26 = "masterfully worked ";
                    }
                  }
                  load_supplier_0x70b90(param_2,pcVar26);
                }
LAB_140c8dd80:
                load_supplier_0x70cc0(alStack_180);
                uVar28 = *(uint *)(lVar14 + 0x2c);
                if (uVar28 == 0xffffffff) {
LAB_140c8dde7:
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  uStack_218 = uStack_218 & 0xffff0000;
                  uStack_220 = uStack_220 & 0xffffffffffffff00;
                  uStack_228 = 0;
                  image_material_name(0x1423f3970,alStack_180,*(undefined2 *)(*plVar16 + 8),uVar10);
                }
                else {
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  uStack_218 = 0;
                  uStack_220 = CONCAT44(uStack_220._4_4_,0xffffffff);
                  uStack_228 = uVar28;
                  cVar3 = FUN_1414fb130(0x1423f3970,alStack_180,*(undefined2 *)(*plVar16 + 8),uVar10
                                       );
                  if (cVar3 == '\0') goto LAB_140c8dde7;
                }
                load_supplier_0xbb340(param_2,alStack_180);
                if (((*(uint *)(plVar23 + 2) & 0x8000000) == 0) &&
                   (plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15),
                   *(short *)(*plVar16 + 0x18) == 5)) {
                  plVar16 = (longlong *)load_supplier_0x70850(plVar21,uVar15);
                  lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar16 + 0x10));
                  if (lVar14 == 0) {
                    pcVar26 = " by an unknown artist";
                  }
                  else {
                    load_supplier_0x70b90(param_2," by ");
                    if ((param_6 & 2) != 0) {
                      load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                      FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                      load_supplier_0x70b90(param_2,"]");
                    }
                    lVar14 = FUN_140c27320(lVar14);
                    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                      FUN_140aadad0(lVar14,alStack_180);
                    }
                    load_supplier_0xbb340(param_2,alStack_180);
                    if ((param_6 & 2) == 0) goto LAB_140c8df1b;
                    pcVar26 = "[/LPAGE]";
                  }
                  load_supplier_0x70b90(param_2,pcVar26);
                }
LAB_140c8df1b:
                asStack_1c0[0] = asStack_1c0[0] + -1;
                *(short *)plStack_1b0 = asStack_1c0[0];
                if (asStack_1c0[0] < 2) {
                  if (0 < asStack_1c0[0]) {
                    pcVar26 = " and ";
                    goto LAB_140c8df48;
                  }
                }
                else {
                  pcVar26 = ", ";
LAB_140c8df48:
                  load_supplier_0x70b90(param_2,pcVar26);
                }
                load_supplier_0x69460(alStack_180);
              }
LAB_140c8df5f:
              aiStack_1b8[0] = aiStack_1b8[0] + 1;
              uVar15 = (ulonglong)aiStack_1b8[0];
              uVar20 = load_supplier_0x70480(plVar21);
              plVar16 = plStack_1b0;
              uVar28 = auStack_1c8[0];
            } while (uVar15 < uVar20);
          }
          uVar28 = uVar28 - 1;
          if ((int)uVar28 < 2) {
            pcVar26 = " and ";
            if ((int)uVar28 < 1) {
              pcVar26 = ".  ";
            }
          }
          else {
            pcVar26 = ", ";
          }
          auStack_1c8[0] = uVar28;
          load_supplier_0x70b90(param_2,pcVar26);
          cVar3 = cStack_1d7;
        }
        iVar11 = 0;
        uVar29 = uVar29 + 1;
        plVar16 = (longlong *)((longlong)plVar16 + 2);
      } while ((int)uVar29 < 4);
      uVar15 = uStack_c0 & 0xffff;
      plStack_1b0 = plVar16;
      if (0 < (short)uStack_c0) {
        if (cVar3 != '\0') {
          load_supplier_0x70b90(param_2,"It is ");
        }
        load_supplier_0x70b90(param_2,"encircled with bands of ");
        plVar16 = plStack_1d0;
        plVar23 = plStack_1d0 + 0x1a;
        lVar14 = load_supplier_0x70480(plVar23);
        if (lVar14 != 0) {
          uVar20 = 0;
          do {
            puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar20);
            iVar13 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
            if (iVar13 == 3) {
              plVar21 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
              lVar14 = *plVar21;
              if ((*(uint *)(plVar16 + 2) & 0x8000000) == 0) {
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                sVar6 = *(short *)(*plVar16 + 0x18);
                if (sVar6 == 1) {
                  pcVar26 = "well-crafted ";
                }
                else if (sVar6 == 2) {
                  pcVar26 = "finely-crafted ";
                }
                else if (sVar6 == 3) {
                  pcVar26 = "superior quality ";
                }
                else if (sVar6 == 4) {
                  pcVar26 = "exceptionally worked ";
                }
                else {
                  if (sVar6 != 5) goto LAB_140c8e0b3;
                  pcVar26 = "masterfully worked ";
                }
                load_supplier_0x70b90(param_2,pcVar26);
              }
LAB_140c8e0b3:
              load_supplier_0x70cc0(alStack_180);
              uVar28 = *(uint *)(lVar14 + 0x28);
              if (uVar28 == 0xffffffff) {
LAB_140c8e115:
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                image_material_name(0x1423f3970,alStack_180,*(undefined2 *)(*plVar16 + 8),uVar10);
              }
              else {
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                uVar10 = *(undefined4 *)(*plVar16 + 0xc);
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                uStack_218 = 0;
                uStack_220 = CONCAT44(uStack_220._4_4_,0xffffffff);
                uStack_228 = uVar28;
                cVar3 = FUN_1414fb130(0x1423f3970,alStack_180,*(undefined2 *)(*plVar16 + 8),uVar10);
                if (cVar3 == '\0') goto LAB_140c8e115;
              }
              load_supplier_0xbb340(param_2,alStack_180);
              plVar16 = plStack_1d0;
              if (((*(uint *)(plStack_1d0 + 2) & 0x8000000) == 0) &&
                 (plVar21 = (longlong *)load_supplier_0x70850(plVar23,uVar20),
                 *(short *)(*plVar21 + 0x18) == 5)) {
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar16 + 0x10));
                plVar16 = plStack_1d0;
                if (lVar14 != 0) {
                  load_supplier_0x70b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                    load_supplier_0x70b90(param_2,"]");
                  }
                  lVar14 = FUN_140c27320(lVar14);
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar14,alStack_180);
                  }
                  load_supplier_0xbb340(param_2,alStack_180);
                  plVar16 = plStack_1d0;
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[/LPAGE]");
                    plVar16 = plStack_1d0;
                  }
                }
              }
              uVar8 = (short)uVar15 - 1;
              uVar15 = (ulonglong)uVar8;
              if ((short)uVar8 < 2) {
                if (0 < (short)uVar8) {
                  pcVar26 = " and ";
                  goto LAB_140c8e265;
                }
              }
              else {
                pcVar26 = ", ";
LAB_140c8e265:
                load_supplier_0x70b90(param_2,pcVar26);
              }
              load_supplier_0x69460(alStack_180);
            }
            iVar11 = iVar11 + 1;
            uVar20 = (ulonglong)iVar11;
            uVar22 = load_supplier_0x70480(plVar23);
            uVar28 = auStack_1c8[0];
          } while (uVar20 < uVar22);
        }
        if ((int)(uVar28 - 1) < 2) {
          pcVar26 = " and ";
          if ((int)(uVar28 - 1) < 1) {
            pcVar26 = ".  ";
          }
        }
        else {
          pcVar26 = ", ";
        }
        load_supplier_0x70b90(param_2,pcVar26);
      }
    }
    plVar23 = plStack_1d0;
    uVar15 = 0;
    if (0 < (short)uStack_a0) {
      plVar16 = plStack_1d0 + 0x1a;
      plStack_1b0 = plVar16;
      lVar14 = load_supplier_0x70480(plVar16);
      uVar20 = uVar15;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 7) {
            load_supplier_0x70cc0(auStack_160);
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uVar28 = *(uint *)(*plVar21 + 0x10);
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uVar10 = *(undefined4 *)(*plVar21 + 0xc);
            plVar16 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uVar7 = *(undefined2 *)(*plVar16 + 8);
            lVar14 = plVar23[2];
            plVar23 = (longlong *)load_supplier_0x70850(plStack_1b0,uVar15);
            uStack_210 = param_6;
            uStack_220 = CONCAT44(uStack_220._4_4_,uVar10);
            uStack_228 = CONCAT22(uStack_228._2_2_,uVar7);
            uStack_218 = uVar28;
            FUN_140cc4a60(&DAT_1424078d0,auStack_160,*(undefined1 *)(*plVar23 + 0x18),
                          ~(byte)((uint)(int)lVar14 >> 0x1b) & 1);
            load_supplier_0xbb340(param_2,auStack_160);
            load_supplier_0x69460(auStack_160);
            plVar16 = plStack_1b0;
            plVar23 = plStack_1d0;
          }
          uVar28 = (int)uVar20 + 1;
          uVar15 = (ulonglong)(int)uVar28;
          uVar22 = load_supplier_0x70480(plVar16);
          uVar20 = (ulonglong)uVar28;
        } while (uVar15 < uVar22);
      }
    }
    plVar23 = plStack_1d0;
    uVar15 = 0;
    if (0 < (short)uStack_a8) {
      plVar16 = plStack_1d0 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar16);
      uVar20 = uVar15;
      uVar22 = uVar15;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar20);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 6) {
            plVar23 = (longlong *)load_supplier_0x70850(plVar16,uVar20);
            lVar14 = *plVar23;
            load_supplier_0x70cc0(auStack_160);
            uStack_220 = lVar14 + 0x40;
            uStack_210 = param_6;
            uStack_218 = *(uint *)(lVar14 + 0x30);
            uStack_228 = *(uint *)(lVar14 + 0x2c);
            FUN_140cc4f60(&DAT_1424078d0,auStack_160,*(undefined1 *)(lVar14 + 0x34),
                          *(undefined2 *)(lVar14 + 0x28));
            load_supplier_0xbb340(param_2,auStack_160);
            uStack_1a8 = uStack_1a8 & 0xff;
            if (*(short *)(lVar14 + 0x28) != -1) {
              uStack_1a8 = 1;
            }
            load_supplier_0x69460(auStack_160);
          }
          uVar28 = (int)uVar22 + 1;
          uVar19 = load_supplier_0x70480(plVar16);
          uVar20 = (longlong)(int)uVar28;
          plVar23 = plStack_1d0;
          uVar22 = (ulonglong)uVar28;
        } while ((ulonglong)(longlong)(int)uVar28 < uVar19);
      }
    }
    if (0 < (short)uStack_68) {
      plVar16 = plVar23 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar16);
      uVar20 = uVar15;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 0xe) {
            plVar23 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            lVar14 = *plVar23;
            load_supplier_0x70cc0(auStack_160);
            uStack_220 = lVar14 + 0x40;
            uStack_210 = param_6;
            uStack_218 = *(uint *)(lVar14 + 0x30);
            uStack_228 = *(uint *)(lVar14 + 0x2c);
            FUN_140cc59a0(&DAT_1424078d0,auStack_160,*(undefined1 *)(lVar14 + 0x34),
                          *(undefined2 *)(lVar14 + 0x28));
            load_supplier_0xbb340(param_2,auStack_160);
            uVar4 = (char)uStack_1a8;
            if (*(short *)(lVar14 + 0x28) != -1) {
              uVar4 = 1;
            }
            uStack_1a8 = CONCAT31(uStack_1a8._1_3_,uVar4);
            load_supplier_0x69460(auStack_160);
          }
          uVar28 = (int)uVar20 + 1;
          uVar15 = (ulonglong)(int)uVar28;
          uVar22 = load_supplier_0x70480(plVar16);
          plVar23 = plStack_1d0;
          uVar20 = (ulonglong)uVar28;
        } while (uVar15 < uVar22);
      }
    }
    if (0 < (short)uStack_80) {
      uVar20 = 0;
      plVar16 = plVar23 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar16);
      uVar15 = uVar20;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 0xb) {
            load_supplier_0x70b90(param_2,"The ");
            sVar6 = (**(code **)*plVar23)(plVar23);
            if (sVar6 == 0xd) {
              lVar14 = plVar23[0x1d];
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
              lVar32 = *plVar21;
              load_supplier_0x70870(lVar14 + 200,aiStack_1b8);
              load_supplier_0x70860(lVar14 + 200,&plStack_1b0);
              puVar24 = (undefined1 *)load_supplier_0x70450(aiStack_1b8,&cStack_1d7,&plStack_1b0);
              cVar3 = load_supplier_0x66de0(*puVar24,0);
              while (cVar3 != '\0') {
                puVar17 = (undefined8 *)load_supplier_0x70440(aiStack_1b8);
                cVar3 = FUN_140071470(*puVar17,lVar32 + 0x28);
                if (cVar3 != '\0') {
                  plVar21 = (longlong *)load_supplier_0x70440(aiStack_1b8);
                  load_supplier_0xbb340(param_2,*plVar21 + 0x48);
                  plVar21 = (longlong *)load_supplier_0x70440(aiStack_1b8);
                  pcVar26 = " are made from ";
                  if ((*(byte *)(*plVar21 + 0x88) & 2) == 0) {
                    pcVar26 = " is made from ";
                  }
                  load_supplier_0x70b90(param_2,pcVar26);
                }
                image_supplier_0x70430(aiStack_1b8);
                puVar24 = (undefined1 *)load_supplier_0x70450(aiStack_1b8,&cStack_1d7,&plStack_1b0);
                cVar3 = load_supplier_0x66de0(*puVar24,0);
              }
            }
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            sVar6 = *(short *)(*plVar21 + 0x18);
            if (sVar6 == 1) {
              pcVar26 = "well-crafted ";
LAB_140c8e751:
              load_supplier_0x70b90(param_2,pcVar26);
            }
            else {
              if (sVar6 == 2) {
                pcVar26 = "finely-crafted ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 3) {
                pcVar26 = "superior quality ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 4) {
                pcVar26 = "exceptionally worked ";
                goto LAB_140c8e751;
              }
              if (sVar6 == 5) {
                pcVar26 = "masterfully worked ";
                goto LAB_140c8e751;
              }
            }
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uVar10 = *(undefined4 *)(*plVar21 + 0xc);
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uStack_218 = uStack_218 & 0xffff0000;
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(*plVar21 + 8),uVar10);
            load_supplier_0xbb340(param_2,auStack_140);
            if (((*(uint *)(plVar23 + 2) & 0x8000000) == 0) &&
               (plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15),
               *(short *)(*plVar21 + 0x18) == 5)) {
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
              lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar21 + 0x10));
              if (lVar14 != 0) {
                load_supplier_0x70b90(param_2," by ");
                if ((param_6 & 2) != 0) {
                  load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                  FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                  load_supplier_0x70b90(param_2,"]");
                }
                lVar14 = FUN_140c27320(lVar14);
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                  FUN_140aadad0(lVar14,auStack_140);
                }
                load_supplier_0xbb340(param_2,auStack_140);
                if ((param_6 & 2) != 0) {
                  load_supplier_0x70b90(param_2,"[/LPAGE]");
                }
              }
            }
            load_supplier_0x70b90(param_2,".  ");
          }
          uVar28 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar28;
          uVar22 = load_supplier_0x70480(plVar16);
          uVar15 = (longlong)(int)uVar28;
        } while ((ulonglong)(longlong)(int)uVar28 < uVar22);
      }
    }
    if (0 < (short)uStack_b0) {
      iVar11 = 0;
      plVar16 = plVar23 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar16);
      if (lVar14 != 0) {
        uVar15 = 0;
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar15);
          iVar13 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar13 == 5) {
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            iVar13 = *(int *)(*plVar21 + 0x28);
            if (iVar13 == 0) {
              pcVar26 = "The handle is made from ";
LAB_140c8e938:
              load_supplier_0x70b90(param_2,pcVar26);
            }
            else {
              if (iVar13 == 1) {
                pcVar26 = "The rollers are made from ";
                goto LAB_140c8e938;
              }
              if (iVar13 == 2) {
                pcVar26 = "The rope is ";
                goto LAB_140c8e938;
              }
              if (iVar13 == 3) {
                pcVar26 = "The chain is ";
                goto LAB_140c8e938;
              }
            }
            if ((*(uint *)(plVar23 + 2) & 0x8000000) == 0) {
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
              sVar6 = *(short *)(*plVar21 + 0x18);
              if (sVar6 == 1) {
                pcVar26 = "well-crafted ";
              }
              else if (sVar6 == 2) {
                pcVar26 = "finely-crafted ";
              }
              else if (sVar6 == 3) {
                pcVar26 = "superior quality ";
              }
              else if (sVar6 == 4) {
                pcVar26 = "exceptionally worked ";
              }
              else {
                if (sVar6 != 5) goto LAB_140c8e9a8;
                pcVar26 = "masterfully worked ";
              }
              load_supplier_0x70b90(param_2,pcVar26);
            }
LAB_140c8e9a8:
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uVar10 = *(undefined4 *)(*plVar21 + 0xc);
            plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
            uStack_218 = uStack_218 & 0xffff0000;
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(*plVar21 + 8),uVar10);
            load_supplier_0xbb340(param_2,auStack_140);
            if (((*(uint *)(plVar23 + 2) & 0x8000000) == 0) &&
               (plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15),
               *(short *)(*plVar21 + 0x18) == 5)) {
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar15);
              lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar21 + 0x10));
              if (lVar14 != 0) {
                load_supplier_0x70b90(param_2," by ");
                if ((param_6 & 2) != 0) {
                  load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                  FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                  load_supplier_0x70b90(param_2,"]");
                }
                lVar14 = FUN_140c27320(lVar14);
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                  FUN_140aadad0(lVar14,auStack_140);
                }
                load_supplier_0xbb340(param_2,auStack_140);
                if ((param_6 & 2) != 0) {
                  load_supplier_0x70b90(param_2,"[/LPAGE]");
                }
              }
            }
            load_supplier_0x70b90(param_2,".  ");
          }
          iVar11 = iVar11 + 1;
          uVar15 = (ulonglong)iVar11;
          uVar20 = load_supplier_0x70480(plVar16);
        } while (uVar15 < uVar20);
      }
    }
    sVar6 = (short)uStack_b8;
    uVar15 = uStack_c8 & 0xffff;
    if ((0 < (short)uStack_c8) || (0 < (short)uStack_b8)) {
      uVar28 = (uint)(0 < (short)uStack_c8);
      if (0 < (short)uStack_b8) {
        uVar28 = uVar28 + 1;
      }
      cVar3 = '\x01';
      auStack_1c8[0] = uVar28;
      if (0 < (short)uStack_c8) {
        load_supplier_0x70b90(param_2,"This object ");
        cStack_1d7 = '\0';
        load_supplier_0x70b90(param_2,"is adorned with hanging rings of ");
        uVar22 = 0;
        plVar16 = plStack_1d0 + 0x1a;
        lVar14 = load_supplier_0x70480(plVar16);
        plVar23 = plStack_1d0;
        uVar20 = uVar22;
        cVar3 = '\0';
        if (lVar14 != 0) {
          do {
            puVar17 = (undefined8 *)load_supplier_0x70850(plVar16,uVar22);
            iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
            if (iVar11 == 2) {
              if ((*(uint *)(plVar23 + 2) & 0x8000000) == 0) {
                plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar22);
                sVar6 = *(short *)(*plVar21 + 0x18);
                if (sVar6 == 1) {
                  pcVar26 = "well-crafted ";
                }
                else if (sVar6 == 2) {
                  pcVar26 = "finely-crafted ";
                }
                else if (sVar6 == 3) {
                  pcVar26 = "superior quality ";
                }
                else if (sVar6 == 4) {
                  pcVar26 = "exceptionally worked ";
                }
                else {
                  if (sVar6 != 5) goto LAB_140c8ec15;
                  pcVar26 = "masterfully worked ";
                }
                load_supplier_0x70b90(param_2,pcVar26);
              }
LAB_140c8ec15:
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar22);
              uVar10 = *(undefined4 *)(*plVar21 + 0xc);
              plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar22);
              uStack_218 = uStack_218 & 0xffff0000;
              uStack_220 = uStack_220 & 0xffffffffffffff00;
              uStack_228 = 0;
              image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(*plVar21 + 8),uVar10);
              load_supplier_0xbb340(param_2,auStack_140);
              if (((*(uint *)(plVar23 + 2) & 0x8000000) == 0) &&
                 (plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar22),
                 *(short *)(*plVar21 + 0x18) == 5)) {
                plVar21 = (longlong *)load_supplier_0x70850(plVar16,uVar22);
                lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar21 + 0x10));
                if (lVar14 != 0) {
                  load_supplier_0x70b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                    load_supplier_0x70b90(param_2,"]");
                  }
                  lVar14 = FUN_140c27320(lVar14);
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar14,auStack_140);
                  }
                  load_supplier_0xbb340(param_2,auStack_140);
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[/LPAGE]");
                  }
                }
              }
              uVar8 = (short)uVar15 - 1;
              uVar15 = (ulonglong)uVar8;
              if ((short)uVar8 < 2) {
                if ((short)uVar8 < 1) goto LAB_140c8ed64;
                pcVar26 = " and ";
              }
              else {
                pcVar26 = ", ";
              }
              load_supplier_0x70b90(param_2,pcVar26);
            }
LAB_140c8ed64:
            uVar28 = (int)uVar20 + 1;
            uVar22 = (ulonglong)(int)uVar28;
            uVar19 = load_supplier_0x70480(plVar16);
            uVar20 = (ulonglong)uVar28;
          } while (uVar22 < uVar19);
          sVar6 = (short)uStack_b8;
          cVar3 = cStack_1d7;
        }
        uVar28 = auStack_1c8[0] - 1;
        if ((int)uVar28 < 2) {
          pcVar26 = " and ";
          if ((int)uVar28 < 1) {
            pcVar26 = ".  ";
          }
        }
        else {
          pcVar26 = ", ";
        }
        auStack_1c8[0] = uVar28;
        load_supplier_0x70b90(param_2,pcVar26);
      }
      if (0 < sVar6) {
        if (cVar3 != '\0') {
          load_supplier_0x70b90(param_2,"This object ");
        }
        load_supplier_0x70b90(param_2,"menaces with spikes of ");
        plVar16 = plStack_1d0;
        uVar20 = 0;
        plVar23 = plStack_1d0 + 0x1a;
        lVar14 = load_supplier_0x70480(plVar23);
        uVar15 = uVar20;
        if (lVar14 != 0) {
          do {
            puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar20);
            iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
            if (iVar11 == 4) {
              if ((*(uint *)(plVar16 + 2) & 0x8000000) == 0) {
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                sVar9 = *(short *)(*plVar16 + 0x18);
                if (sVar9 == 1) {
                  pcVar26 = "well-crafted ";
                }
                else if (sVar9 == 2) {
                  pcVar26 = "finely-crafted ";
                }
                else if (sVar9 == 3) {
                  pcVar26 = "superior quality ";
                }
                else if (sVar9 == 4) {
                  pcVar26 = "exceptionally worked ";
                }
                else {
                  if (sVar9 != 5) goto LAB_140c8ee96;
                  pcVar26 = "masterfully worked ";
                }
                load_supplier_0x70b90(param_2,pcVar26);
              }
LAB_140c8ee96:
              plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
              uVar10 = *(undefined4 *)(*plVar16 + 0xc);
              plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
              uStack_218 = uStack_218 & 0xffff0000;
              uStack_220 = uStack_220 & 0xffffffffffffff00;
              uStack_228 = 0;
              image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(*plVar16 + 8),uVar10);
              load_supplier_0xbb340(param_2,auStack_140);
              plVar16 = plStack_1d0;
              if (((*(uint *)(plStack_1d0 + 2) & 0x8000000) == 0) &&
                 (plVar21 = (longlong *)load_supplier_0x70850(plVar23,uVar20),
                 *(short *)(*plVar21 + 0x18) == 5)) {
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar20);
                lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)(*plVar16 + 0x10));
                plVar16 = plStack_1d0;
                if (lVar14 != 0) {
                  load_supplier_0x70b90(param_2," by ");
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[LPAGE:HF:");
                    FUN_140545610(*(undefined4 *)(lVar14 + 0xe0),param_2);
                    load_supplier_0x70b90(param_2,"]");
                  }
                  lVar14 = FUN_140c27320(lVar14);
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                    FUN_140aadad0(lVar14,auStack_140);
                  }
                  load_supplier_0xbb340(param_2,auStack_140);
                  plVar16 = plStack_1d0;
                  if ((param_6 & 2) != 0) {
                    load_supplier_0x70b90(param_2,"[/LPAGE]");
                    plVar16 = plStack_1d0;
                  }
                }
              }
              sVar6 = sVar6 + -1;
              if (sVar6 < 2) {
                if (sVar6 < 1) goto LAB_140c8efeb;
                pcVar26 = " and ";
              }
              else {
                pcVar26 = ", ";
              }
              load_supplier_0x70b90(param_2,pcVar26);
            }
LAB_140c8efeb:
            uVar28 = (int)uVar15 + 1;
            uVar20 = (ulonglong)(int)uVar28;
            uVar22 = load_supplier_0x70480(plVar23);
            uVar15 = (ulonglong)uVar28;
            uVar28 = auStack_1c8[0];
          } while (uVar20 < uVar22);
        }
        if ((int)(uVar28 - 1) < 2) {
          pcVar26 = " and ";
          if ((int)(uVar28 - 1) < 1) {
            pcVar26 = ".  ";
          }
        }
        else {
          pcVar26 = ", ";
        }
        load_supplier_0x70b90(param_2,pcVar26);
      }
    }
    param_1 = plStack_1d0;
    uVar15 = 0;
    if (0 < (short)uStack_d8) {
      plVar23 = plStack_1d0 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar23);
      uVar20 = uVar15;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 0) {
            puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar15);
            lVar14 = (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,param_1);
            if (lVar14 != 0) {
              if ((_DAT_1418be238 == 1) ||
                 (cVar3 = load_supplier_0x735c0(0x1423b3108,0xf), cVar3 != '\0')) {
                FUN_140bad470(0x14251c138,lVar14);
              }
              load_supplier_0x70cc0(alStack_180);
              cVar3 = cStack_1d8;
              uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
              uStack_200 = CONCAT31(uStack_200._1_3_,cStack_1d8);
              uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
              uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
              uStack_218 = 0x10;
              uStack_220 = CONCAT71(uStack_220._1_7_,uStack_1d6);
              uStack_228 = uStack_228 & 0xffffff00;
              image_artwork_description
                        (0x1423f3970,lVar14,alStack_180,(*(uint *)(param_1 + 2) & 0x8000000) != 0);
              if (*(int *)(lVar14 + 0xb0) == 0x18) {
                load_supplier_0x70b90(alStack_180,"It is made from ");
                load_supplier_0x70850(plVar23,uVar15);
                plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar15);
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(*plVar16 + 8));
                load_supplier_0xbb340(alStack_180,auStack_140);
                load_supplier_0x70b90(alStack_180,".  ");
              }
              uVar15 = load_supplier_0x70960(alStack_180);
              if ((uVar15 < 0x50) || (cVar3 != '\0')) {
                load_supplier_0xbb340(param_2,alStack_180);
              }
              else {
                load_supplier_0x70b90(param_2,"[R]");
                load_supplier_0xbb340(param_2,alStack_180);
                load_supplier_0x70b90(param_2,"[R]");
              }
              load_supplier_0x69460(alStack_180);
            }
          }
          uVar28 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar28;
          uVar15 = (ulonglong)(int)uVar28;
          uVar22 = load_supplier_0x70480(plVar23);
        } while (uVar15 < uVar22);
      }
    }
    uVar15 = 0;
    if ((0 < (short)uStack_98) &&
       (lVar14 = load_supplier_0x70480(param_1 + 0x1a), uVar20 = uVar15, lVar14 != 0)) {
      do {
        puVar17 = (undefined8 *)load_supplier_0x70850(param_1 + 0x1a,uVar15);
        iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
        if (iVar11 == 8) {
          puVar17 = (undefined8 *)load_supplier_0x70850(param_1 + 0x1a,uVar15);
          lVar14 = (*(code *)**(undefined8 **)*puVar17)((undefined8 *)*puVar17,param_1);
          if (lVar14 != 0) {
            if ((_DAT_1418be238 == 1) ||
               (cVar3 = load_supplier_0x735c0(0x1423b3108,0xf), cVar3 != '\0')) {
              FUN_140bad470(0x14251c138,lVar14);
            }
            load_supplier_0x70cc0(alStack_180);
            uStack_1f8 = CONCAT31(uStack_1f8._1_3_,(char)(param_6 >> 1)) & 0xffffff01;
            uStack_200 = CONCAT31(uStack_200._1_3_,cStack_1d8);
            uStack_208 = CONCAT44(uStack_208._4_4_,0xffffffff);
            uStack_210 = CONCAT22(uStack_210._2_2_,0xffff);
            uStack_218 = 0x10;
            uStack_220 = CONCAT71(uStack_220._1_7_,uStack_1d6);
            uStack_228 = uStack_228 & 0xffffff00;
            image_artwork_description
                      (0x1423f3970,lVar14,alStack_180,(*(uint *)(param_1 + 2) & 0x8000000) != 0);
            plVar23 = (longlong *)load_supplier_0x70850(param_1 + 0x1a,uVar15);
            lVar32 = *plVar23;
            cVar3 = FUN_141475150(0x1423f3970,0x18,*(undefined2 *)(lVar32 + 8),
                                  *(undefined4 *)(lVar32 + 0xc));
            if (((cVar3 == '\0') &&
                (cVar3 = FUN_141475150(0x1423f3970,0x1e,*(undefined2 *)(lVar32 + 8),
                                       *(undefined4 *)(lVar32 + 0xc)), cVar3 == '\0')) &&
               (cVar3 = FUN_141475150(0x1423f3970,0x3e,*(undefined2 *)(lVar32 + 8)), cVar3 == '\0'))
            {
              if (*(int *)(lVar14 + 0xb0) == 0x18) {
                load_supplier_0x70b90(alStack_180,"It is made from ");
                uStack_218 = uStack_218 & 0xffff0000;
                uStack_220 = uStack_220 & 0xffffffffffffff00;
                uStack_228 = 0;
                image_material_name(0x1423f3970,auStack_140,*(undefined2 *)(lVar32 + 8));
                load_supplier_0xbb340(alStack_180,auStack_140);
                load_supplier_0x70b90(alStack_180,".  ");
              }
            }
            else {
              load_supplier_0x70cc0(&lStack_120);
              uStack_210 = param_6;
              uStack_218 = *(uint *)(lVar32 + 0x38);
              uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(lVar32 + 0xc));
              uStack_228 = CONCAT22(uStack_228._2_2_,*(undefined2 *)(lVar32 + 8));
              FUN_140cc4a60(&DAT_1424078d0,&lStack_120,*(undefined1 *)(lVar32 + 0x3c));
              load_supplier_0xbb340(alStack_180,&lStack_120);
              if (*(short *)(lVar32 + 0x40) != -1) {
                load_supplier_0x70cc0(auStack_160);
                uStack_220 = lVar32 + 0x58;
                uStack_210 = param_6;
                uStack_218 = *(uint *)(lVar32 + 0x48);
                uStack_228 = *(uint *)(lVar32 + 0x44);
                FUN_140cc4f60(&DAT_1424078d0,auStack_160,*(undefined1 *)(lVar32 + 0x4c));
                load_supplier_0xbb340(alStack_180,auStack_160);
                load_supplier_0x69460(auStack_160);
              }
              load_supplier_0x69460(&lStack_120);
            }
            uVar15 = load_supplier_0x70960(alStack_180);
            if ((uVar15 < 0x50) || (cStack_1d8 != '\0')) {
              load_supplier_0xbb340(param_2,alStack_180);
            }
            else {
              load_supplier_0x70b90(param_2,"[R]");
              load_supplier_0xbb340(param_2,alStack_180);
              load_supplier_0x70b90(param_2,"[R]");
            }
            load_supplier_0x69460(alStack_180);
          }
        }
        uVar28 = (int)uVar20 + 1;
        uVar15 = (ulonglong)(int)uVar28;
        uVar22 = load_supplier_0x70480(param_1 + 0x1a);
        uVar20 = (ulonglong)uVar28;
      } while (uVar15 < uVar22);
    }
    iVar11 = 0;
    if (0 < (short)uStack_70) {
      aiStack_1b8[0] = 0;
      plVar23 = param_1 + 0x1a;
      plStack_190 = plVar23;
      lVar14 = load_supplier_0x70480(plVar23);
      if (lVar14 != 0) {
        uVar15 = 0;
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar15);
          iVar13 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar13 == 0xd) {
            plVar23 = (longlong *)load_supplier_0x70850(plVar23,uVar15);
            lVar14 = FUN_140073ba0(0x14250a498,*(undefined4 *)(*plVar23 + 0x28));
            if (lVar14 == 0) break;
            iVar11 = -1;
            iVar13 = -1;
            iVar12 = -1;
            bVar33 = true;
            bVar35 = true;
            load_supplier_0x70870(lVar14 + 8,auStack_1c8);
            load_supplier_0x70860(lVar14 + 8,&plStack_1b0);
            puVar24 = (undefined1 *)load_supplier_0x70450(auStack_1c8,&cStack_1d7,&plStack_1b0);
            cVar3 = load_supplier_0x66de0(*puVar24,0);
            if (cVar3 != '\0') {
              do {
                if ((iVar11 == -1) ||
                   (plVar23 = (longlong *)load_supplier_0x70440(auStack_1c8),
                   *(int *)(*plVar23 + 0xc) < iVar11)) {
                  plVar23 = (longlong *)load_supplier_0x70440(auStack_1c8);
                  iVar11 = *(int *)(*plVar23 + 0xc);
                }
                if ((iVar13 == -1) ||
                   (plVar23 = (longlong *)load_supplier_0x70440(auStack_1c8),
                   iVar13 < *(int *)(*plVar23 + 0xc))) {
                  plVar23 = (longlong *)load_supplier_0x70440(auStack_1c8);
                  iVar13 = *(int *)(*plVar23 + 0xc);
                }
                puVar17 = (undefined8 *)load_supplier_0x70440(auStack_1c8);
                if (iVar12 == -1) {
                  iVar12 = *(int *)*puVar17;
                }
                else {
                  bVar35 = bVar33;
                  if (*(int *)*puVar17 != iVar12) {
                    bVar33 = false;
                    bVar35 = false;
                  }
                }
                image_supplier_0x70430(auStack_1c8);
                puVar24 = (undefined1 *)load_supplier_0x70450(auStack_1c8,&cStack_1d7,&plStack_1b0);
                cVar3 = load_supplier_0x66de0(*puVar24,0);
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
            load_supplier_0x70cc0(&lStack_120);
            uVar27 = load_supplier_0x70480(lVar14 + 8);
            image_number_words(uVar27,&lStack_120);
            load_supplier_0x70cc0(alStack_180);
            if (*(int *)(lVar14 + 4) == 0) {
              load_supplier_0x70b90(alStack_180,"On the faces of the object are ");
            }
            if ((bVar35) && (iVar12 != -1)) {
              if (iVar12 == 0) {
                load_supplier_0x70b90(alStack_180,"a series of ");
                load_supplier_0xbb340(alStack_180,&lStack_120);
                pcVar26 = " images";
                goto LAB_140c8f977;
              }
              if (iVar12 == 1) {
                load_supplier_0x70b90(alStack_180,"a series of ");
                load_supplier_0xbb340(alStack_180,&lStack_120);
                load_supplier_0x70b90(alStack_180," words");
                if (!bVar33) {
                  pcVar26 = " which you cannot read";
                  goto LAB_140c8f977;
                }
              }
              else {
                if (iVar12 == 2) {
                  load_supplier_0x70b90(alStack_180,"a series of ");
                  load_supplier_0xbb340(alStack_180,&lStack_120);
                  pcVar26 = " symbols";
                  goto LAB_140c8f977;
                }
                if (iVar12 == 3) {
                  load_supplier_0x70b90(alStack_180,"dots");
                  if ((iVar11 != -1) && (iVar13 != iVar11)) {
                    load_supplier_0x70b90(alStack_180,", ranging from ");
                    load_supplier_0x70cc0(auStack_160);
                    image_number_words(iVar11,auStack_160);
                    load_supplier_0xbb340(alStack_180,auStack_160);
                    load_supplier_0x70b90(alStack_180," to ");
                    load_supplier_0x70cc0(auStack_100);
                    image_number_words(iVar13,auStack_100);
                    load_supplier_0xbb340(alStack_180,auStack_100);
                    load_supplier_0x69460(auStack_100);
                    load_supplier_0x69460(auStack_160);
                  }
                }
                else if (((iVar12 == 4) &&
                         (load_supplier_0x70b90(alStack_180,"numbers"), iVar11 != -1)) &&
                        (iVar13 != iVar11)) {
                  load_supplier_0x70b90(alStack_180,", ranging from ");
                  load_supplier_0x70cc0(auStack_100);
                  image_number_words(iVar11,auStack_100);
                  load_supplier_0xbb340(alStack_180,auStack_100);
                  load_supplier_0x70b90(alStack_180," to ");
                  load_supplier_0x70cc0(auStack_160);
                  image_number_words(iVar13,auStack_160);
                  load_supplier_0xbb340(alStack_180,auStack_160);
                  load_supplier_0x69460(auStack_160);
                  load_supplier_0x69460(auStack_100);
                }
              }
            }
            else {
              load_supplier_0x70b90(alStack_180,"a series of ");
              load_supplier_0xbb340(alStack_180,&lStack_120);
              pcVar26 = " images and symbols";
LAB_140c8f977:
              load_supplier_0x70b90(alStack_180,pcVar26);
            }
            load_supplier_0x70b90(alStack_180,".");
            load_supplier_0xbb340(param_2,alStack_180);
            param_1 = plStack_1d0;
            if ((*(int *)(lVar14 + 4) == 0) && (bVar33)) {
              iVar11 = (**(code **)(*plStack_1d0 + 0x750))(plStack_1d0);
              if ((-1 < iVar11) &&
                 ((iVar13 = load_supplier_0x70480(lVar14 + 8), iVar11 < iVar13 &&
                  ((*(byte *)(param_1 + 2) & 0x21) != 0)))) {
                load_supplier_0x70b90(param_2,"  ");
                load_supplier_0x70b90(param_2,"The upward face is ");
                load_supplier_0x70cc0(auStack_100);
                puVar17 = (undefined8 *)load_supplier_0x70850(lVar14 + 8,(longlong)iVar11);
                FUN_140877150(*puVar17,auStack_100);
                load_supplier_0xbb340(param_2,auStack_100);
                load_supplier_0x70b90(param_2,".");
                load_supplier_0x69460(auStack_100);
              }
            }
            load_supplier_0x69460(alStack_180);
            load_supplier_0x69460(&lStack_120);
            plVar23 = plStack_190;
            iVar11 = aiStack_1b8[0];
          }
          iVar11 = iVar11 + 1;
          uVar15 = (ulonglong)iVar11;
          aiStack_1b8[0] = iVar11;
          uVar20 = load_supplier_0x70480(plVar23);
        } while (uVar15 < uVar20);
      }
    }
    uVar15 = 0;
    if (0 < (short)uStack_78) {
      plVar23 = param_1 + 0x1a;
      lVar14 = load_supplier_0x70480(plVar23);
      uVar20 = uVar15;
      if (lVar14 != 0) {
        do {
          puVar17 = (undefined8 *)load_supplier_0x70850(plVar23,uVar15);
          iVar11 = (**(code **)(*(longlong *)*puVar17 + 0x28))();
          if (iVar11 == 0xc) {
            plVar16 = (longlong *)load_supplier_0x70850(plVar23,uVar15);
            lVar14 = *plVar16;
            lVar32 = load_supplier_0x709a0(lVar14 + 0x28);
            if (lVar32 != 0) {
              if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
                if ((*(longlong *)(_DAT_142407590 + 0xa98) == 0) ||
                   ((lVar32 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218),
                    lVar32 == 0 || (*(int *)(lVar32 + 4) < 1)))) {
                  if (cStack_1d8 != '\0') {
                    load_supplier_0x70b90(param_2,"  ");
                    load_supplier_0x70b90
                              (param_2,"There is writing on this item, but you cannot read.");
                    goto LAB_140c8fc74;
                  }
                  load_supplier_0x70b90(param_2,"[R]");
                  load_supplier_0x70b90
                            (param_2,"There is writing on this item, but you cannot read.");
                  pcVar26 = "[R]";
                }
                else {
                  if ((_DAT_1418be238 != 1) || (_DAT_142407590 == 0)) goto LAB_140c8fb8d;
                  lVar32 = image_supplier_0x13cc070();
                  if ((lVar32 != 0) &&
                     ((*(longlong *)(lVar32 + 0x130) != 0 &&
                      (lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x40), lVar32 != 0))))
                  {
                    puVar25 = (undefined4 *)load_supplier_0x70990(lVar14 + 0x28,0);
                    iVar11 = FUN_1400bb5a0(*puVar25,lVar32 + 0x20);
                    if (iVar11 != -1) goto LAB_140c8fb8d;
                  }
                  if (cStack_1d8 != '\0') {
                    load_supplier_0x70b90(param_2,"  ");
                    load_supplier_0x70b90
                              (param_2,"There is writing on this item which you have not read.");
                    goto LAB_140c8fc74;
                  }
                  load_supplier_0x70b90(param_2,"[R]");
                  load_supplier_0x70b90
                            (param_2,"There is writing on this item which you have not read.");
                  pcVar26 = "[R]";
                }
              }
              else {
LAB_140c8fb8d:
                if (cStack_1d8 == '\0') {
                  load_supplier_0x70b90(param_2,"[R]");
                  FUN_140cde700(lVar14,param_2,param_6);
                  pcVar26 = "[R]";
                }
                else {
                  load_supplier_0x70b90(param_2,"  ");
                  FUN_140cde700(lVar14,param_2,param_6);
LAB_140c8fc74:
                  pcVar26 = "  ";
                }
              }
              load_supplier_0x70b90(param_2,pcVar26);
            }
          }
          uVar28 = (int)uVar20 + 1;
          uVar15 = (ulonglong)(int)uVar28;
          uVar22 = load_supplier_0x70480(plVar23);
          param_1 = plStack_1d0;
          uVar20 = (ulonglong)uVar28;
        } while (uVar15 < uVar22);
      }
    }
    sVar6 = (**(code **)*param_1)(param_1);
    cVar3 = cStack_1d8;
    if ((sVar6 == 0x3a) && ((char)uStack_1a8 == '\0')) {
      iVar11 = (**(code **)(*param_1 + 0x6b0))(param_1);
      cVar3 = cStack_1d8;
      if ((-1 < iVar11) &&
         (iVar13 = load_supplier_0x70480(&DAT_142519538), cVar3 = cStack_1d8, iVar11 < iVar13)) {
        load_supplier_0x70b90(param_2,"The material is ");
        plVar23 = (longlong *)load_supplier_0x70850(&DAT_142519538,(longlong)iVar11);
        load_supplier_0xbb340(param_2,*plVar23 + 0x50);
        load_supplier_0x70b90(param_2,".");
        cVar3 = cStack_1d8;
        if (cStack_1d8 == '\0') {
          load_supplier_0x70b90(param_2,"[R]");
        }
        else {
          load_supplier_0x70b90(param_2,"  ");
        }
      }
    }
  }
LAB_140c8d71c:
  uVar15 = 0;
  sVar6 = (**(code **)*param_1)(param_1);
  plVar23 = plStack_1d0;
  if ((sVar6 == 0x59) &&
     (lVar14 = plStack_1d0[0x1a], param_1 = plVar23, plStack_1d0[0x1b] - lVar14 >> 3 != 0)) {
    lVar32 = 0;
    uVar20 = uVar15;
    do {
      iVar11 = (**(code **)(**(longlong **)(lVar32 + lVar14) + 0x28))();
      if (iVar11 == 9) {
        plVar16 = (longlong *)load_supplier_0x70850(plVar23 + 0x1a,uVar15);
        lVar14 = *plVar16;
        lVar18 = load_supplier_0x709a0(lVar14 + 0x30);
        cVar3 = cStack_1d8;
        if (lVar18 == 0) {
          if (cStack_1d8 == '\0') {
            load_supplier_0x70b90(param_2,"[R]");
            pcVar26 = "The pages are blank.";
LAB_140c8fec7:
            load_supplier_0x70b90(param_2,pcVar26);
            load_supplier_0x70b90(param_2,"[R]");
          }
          else {
            load_supplier_0x70b90(param_2,"  ");
            pcVar26 = "The pages are blank.";
LAB_140c8fd72:
            load_supplier_0x70b90(param_2,pcVar26);
            load_supplier_0x70b90(param_2,"  ");
          }
        }
        else {
          if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
            if ((*(longlong *)(_DAT_142407590 + 0xa98) == 0) ||
               ((lVar18 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218),
                lVar18 == 0 || (*(int *)(lVar18 + 4) < 1)))) {
              cVar3 = cStack_1d8;
              if (cStack_1d8 != '\0') {
                load_supplier_0x70b90(param_2,"  ");
                pcVar26 = "There is writing in the book, but you cannot read.";
                goto LAB_140c8fd72;
              }
              load_supplier_0x70b90(param_2,"[R]");
              pcVar26 = "There is writing in the book, but you cannot read.";
              goto LAB_140c8fec7;
            }
            if ((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) {
              lVar18 = image_supplier_0x13cc070();
              if ((lVar18 != 0) &&
                 ((*(longlong *)(lVar18 + 0x130) != 0 &&
                  (lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x130) + 0x40), lVar18 != 0)))) {
                puVar25 = (undefined4 *)load_supplier_0x70990(lVar14 + 0x30,0);
                iVar11 = FUN_1400bb5a0(*puVar25,lVar18 + 0x20);
                if (iVar11 != -1) goto LAB_140c8fe2e;
              }
              cVar3 = cStack_1d8;
              if (cStack_1d8 != '\0') {
                load_supplier_0x70b90(param_2,"  ");
                pcVar26 = "You have not read this book.";
                goto LAB_140c8fd72;
              }
              load_supplier_0x70b90(param_2,"[R]");
              pcVar26 = "You have not read this book.";
              goto LAB_140c8fec7;
            }
          }
LAB_140c8fe2e:
          if (cStack_1d8 == '\0') {
            load_supplier_0x70b90(param_2,"[R]");
            FUN_140cded10(lVar14,param_2,plVar23 + 0x1d,param_6);
            pcVar26 = "[R]";
          }
          else {
            load_supplier_0x70b90(param_2,"  ");
            FUN_140cded10(lVar14,param_2,plVar23 + 0x1d,param_6);
            pcVar26 = "  ";
          }
          load_supplier_0x70b90(param_2,pcVar26);
          cVar3 = cStack_1d8;
        }
      }
      uVar28 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar28;
      lVar32 = lVar32 + 8;
      lVar14 = plVar23[0x1a];
      uVar15 = (ulonglong)(int)uVar28;
    } while (uVar15 < (ulonglong)(plVar23[0x1b] - lVar14 >> 3));
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x39) {
    if (((short)param_1[0x18] == -1) && ((int)param_1[0x1b] == -1)) {
      iVar11 = (**(code **)(*param_1 + 0x6b0))(param_1);
      if ((-1 < iVar11) && (iVar13 = load_supplier_0x70480(&DAT_142519538), iVar11 < iVar13)) {
        load_supplier_0x70b90(param_2,"The material is ");
        plVar23 = (longlong *)load_supplier_0x70850(&DAT_142519538,(longlong)iVar11);
        load_supplier_0xbb340(param_2,*plVar23 + 0x50);
        load_supplier_0x70b90(param_2,".");
        if (cVar3 == '\0') {
          load_supplier_0x70b90(param_2,"[R]");
        }
        else {
          load_supplier_0x70b90(param_2,"  ");
        }
      }
    }
    else {
      load_supplier_0x70b90(param_2,"The thread is ");
      uVar8 = FUN_141475520(0x1423f3970,(short)param_1[0x18],
                            *(undefined4 *)((longlong)param_1 + 0xc4));
      uVar28 = *(uint *)(param_1 + 0x1b);
      if (uVar28 == 0xffffffff) {
        uVar28 = (uint)uVar8;
      }
      if ((short)uVar28 == -1) {
        load_supplier_0x70b90(param_2,"gray");
      }
      else {
        plVar23 = (longlong *)load_supplier_0x70850(&DAT_142519538,(longlong)(short)uVar28);
        load_supplier_0xbb340(param_2,*plVar23 + 0x50);
      }
      if (0 < *(short *)((longlong)param_1 + 0xcc)) {
        load_supplier_0x70b90(param_2,", ");
        sVar6 = *(short *)((longlong)param_1 + 0xcc);
        if (sVar6 == 1) {
          pcVar26 = "well-";
LAB_140c900ff:
          load_supplier_0x70b90(param_2,pcVar26);
        }
        else {
          if (sVar6 == 2) {
            pcVar26 = "finely ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 3) {
            pcVar26 = "superbly ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 4) {
            pcVar26 = "exceptionally ";
            goto LAB_140c900ff;
          }
          if (sVar6 == 5) {
            pcVar26 = "masterfully ";
            goto LAB_140c900ff;
          }
        }
        load_supplier_0x70b90(param_2,"colored");
      }
      lVar14 = load_supplier_0x709a0(param_1 + 0x1c);
      if (lVar14 == 0) {
        if ((short)param_1[0x18] != -1) {
          load_supplier_0x70b90(param_2," with ");
          uStack_218 = CONCAT22(uStack_218._2_2_,3);
          uStack_220 = uStack_220 & 0xffffffffffffff00;
          uStack_228 = 0;
          image_material_name(0x1423f3970,auStack_140,(short)param_1[0x18],
                              *(undefined4 *)((longlong)param_1 + 0xc4));
          load_supplier_0xbb340(param_2,auStack_140);
        }
      }
      else {
        image_supplier_0x67130(&lStack_120);
        image_supplier_0x67130(alStack_180);
        uVar20 = 0;
        iVar11 = load_supplier_0x709a0(param_1 + 0x1c);
        uVar15 = uVar20;
        if (0 < iVar11) {
          do {
            FUN_14013dfa0(*(undefined4 *)(param_1[0x1c] + uVar15 * 4),
                          *(undefined4 *)(param_1[0x1f] + uVar15 * 4),&lStack_120,alStack_180);
            uVar15 = uVar15 + 1;
          } while ((longlong)uVar15 < (longlong)iVar11);
        }
        FUN_140071040(param_2," with ",6);
        if (1 < (ulonglong)(lStack_118 - lStack_120 >> 2)) {
          load_supplier_0x70b90(param_2,"a mixture of ");
        }
        cVar3 = cStack_1d7;
        iVar11 = (int)(lStack_118 - lStack_120 >> 2);
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          uVar15 = uVar20;
          do {
            image_supplier_0x697c0(auStack_160,cVar3);
            image_supplier_0x711b0(auStack_160);
            uStack_218 = CONCAT22(uStack_218._2_2_,3);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            image_material_name(0x1423f3970,auStack_160,*(undefined2 *)(lStack_120 + uVar15 * 4),
                                *(undefined4 *)(alStack_180[0] + uVar15 * 4));
            load_supplier_0xbb340(param_2,auStack_160);
            iVar13 = (int)uVar20;
            if (iVar13 < iVar11 + -1) {
              if (2 < lVar14) {
                FUN_140071040(param_2,", ",2);
              }
              if (iVar13 == iVar11 + -2) {
                if (lVar14 == 2) {
                  FUN_140071040(param_2," ",1);
                }
                FUN_140071040(param_2,"and ",4);
              }
            }
            FUN_140070e80(auStack_160);
            uVar20 = (ulonglong)(iVar13 + 1);
            uVar15 = uVar15 + 1;
          } while ((longlong)uVar15 < lVar14);
        }
        FUN_140070d80(alStack_180);
        FUN_140070d80(&lStack_120);
        param_1 = plStack_1d0;
      }
      if ((*(short *)((longlong)param_1 + 0xcc) == 5) &&
         (lVar14 = FUN_1400693f0(0x14251c138,(int)param_1[0x19]), lVar14 != 0)) {
        FUN_140071040(param_2," by ",4);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[LPAGE:HF:",10);
          uVar10 = *(undefined4 *)(lVar14 + 0xe0);
          load_supplier_0x70cc0(auStack_100);
          FUN_140545790(uVar10,auStack_100);
          load_supplier_0xbb340(param_2,auStack_100);
          FUN_140070e80(auStack_100);
          FUN_140071040(param_2,"]",1);
        }
        lVar32 = load_supplier_0xc272f0(lVar14);
        if (lVar32 == 0) {
          lVar14 = lVar14 + 0x38;
        }
        else {
          lVar14 = FUN_140c521e0(lVar32);
        }
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
          FUN_140aadad0(lVar14,auStack_140);
        }
        load_supplier_0xbb340(param_2,auStack_140);
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
      iVar11 = (**(code **)(*param_1 + 0x6b0))(param_1);
      if ((-1 < iVar11) && (iVar13 = load_supplier_0x70480(&DAT_142519538), iVar11 < iVar13)) {
        load_supplier_0x70b90(param_2,"The material is ");
        plVar23 = (longlong *)load_supplier_0x70850(&DAT_142519538,(longlong)iVar11);
        load_supplier_0xbb340(param_2,*plVar23 + 0x50);
        load_supplier_0x70b90(param_2,".");
        if (cStack_1d8 == '\0') {
          load_supplier_0x70b90(param_2,"[R]");
        }
        else {
          load_supplier_0x70b90(param_2,"  ");
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
        load_supplier_0xbb340
                  (param_2,*(longlong *)(_DAT_142519538 + (longlong)(short)uVar28 * 8) + 0x50);
      }
      if (0 < (short)param_1[0x1a]) {
        FUN_140071040(param_2,", ",2);
        sVar6 = (short)param_1[0x1a];
        if (sVar6 == 1) {
          pcVar26 = "well-";
LAB_140c905ff:
          load_supplier_0x70b90(param_2,pcVar26);
        }
        else {
          if (sVar6 == 2) {
            pcVar26 = "finely ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 3) {
            pcVar26 = "superbly ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 4) {
            pcVar26 = "exceptionally ";
            goto LAB_140c905ff;
          }
          if (sVar6 == 5) {
            pcVar26 = "masterfully ";
            goto LAB_140c905ff;
          }
        }
        FUN_140071040(param_2,"colored",7);
      }
      if (param_1[0x1d] - param_1[0x1c] >> 2 == 0) {
        if (*(short *)((longlong)param_1 + 0xc4) != -1) {
          load_supplier_0x70b90(param_2," with ");
          uStack_218 = CONCAT22(uStack_218._2_2_,3);
          uStack_220 = uStack_220 & 0xffffffffffffff00;
          uStack_228 = 0;
          image_material_name(0x1423f3970,auStack_140,*(undefined2 *)((longlong)param_1 + 0xc4),
                              (int)param_1[0x19]);
          load_supplier_0xbb340(param_2,auStack_140);
        }
      }
      else {
        image_supplier_0x67130(&lStack_120);
        image_supplier_0x67130(alStack_180);
        uVar20 = 0;
        iVar11 = (int)(param_1[0x1d] - param_1[0x1c] >> 2);
        uVar15 = uVar20;
        if (0 < iVar11) {
          do {
            FUN_14013dfa0(*(undefined4 *)(param_1[0x1c] + uVar15 * 4),
                          *(undefined4 *)(param_1[0x1f] + uVar15 * 4),&lStack_120,alStack_180);
            uVar15 = uVar15 + 1;
          } while ((longlong)uVar15 < (longlong)iVar11);
        }
        FUN_140071040(param_2," with ",6);
        if (1 < (ulonglong)(lStack_118 - lStack_120 >> 2)) {
          FUN_140071040(param_2,"a mixture of ",0xd);
        }
        cVar3 = cStack_1d7;
        iVar11 = (int)(lStack_118 - lStack_120 >> 2);
        lVar14 = (longlong)iVar11;
        if (0 < iVar11) {
          uVar15 = uVar20;
          do {
            image_supplier_0x697c0(auStack_160,cVar3);
            image_supplier_0x711b0(auStack_160);
            uStack_218 = CONCAT22(uStack_218._2_2_,3);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            uStack_228 = 0;
            image_material_name(0x1423f3970,auStack_160,*(undefined2 *)(lStack_120 + uVar15 * 4),
                                *(undefined4 *)(alStack_180[0] + uVar15 * 4));
            load_supplier_0xbb340(param_2,auStack_160);
            iVar13 = (int)uVar20;
            if (iVar13 < iVar11 + -1) {
              if (2 < lVar14) {
                FUN_140071040(param_2,", ",2);
              }
              if (iVar13 == iVar11 + -2) {
                if (lVar14 == 2) {
                  FUN_140071040(param_2," ",1);
                }
                FUN_140071040(param_2,"and ",4);
              }
            }
            FUN_140070e80(auStack_160);
            uVar20 = (ulonglong)(iVar13 + 1);
            uVar15 = uVar15 + 1;
          } while ((longlong)uVar15 < lVar14);
        }
        FUN_140070d80(alStack_180);
        FUN_140070d80(&lStack_120);
        param_1 = plStack_1d0;
      }
      if (((short)param_1[0x1a] == 5) &&
         (lVar14 = FUN_1400693f0(0x14251c138,*(undefined4 *)((longlong)param_1 + 0xcc)), lVar14 != 0
         )) {
        FUN_140071040(param_2," by ",4);
        if ((param_6 & 2) != 0) {
          FUN_140071040(param_2,"[LPAGE:HF:",10);
          uVar10 = *(undefined4 *)(lVar14 + 0xe0);
          load_supplier_0x70cc0(auStack_100);
          FUN_140545790(uVar10,auStack_100);
          load_supplier_0xbb340(param_2,auStack_100);
          FUN_140070e80(auStack_100);
          FUN_140071040(param_2,"]",1);
        }
        lVar32 = load_supplier_0xc272f0(lVar14);
        if (lVar32 == 0) {
          lVar14 = lVar14 + 0x38;
        }
        else {
          lVar14 = FUN_140c521e0(lVar32);
        }
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
          FUN_140aadad0(lVar14,auStack_140);
        }
        load_supplier_0xbb340(param_2,auStack_140);
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
    image_supplier_0x697c0(alStack_180,cStack_1d7);
    image_supplier_0x711b0(alStack_180);
    FUN_1405d8380(uVar27,alStack_180,uStack_1d6,param_6);
    cVar3 = cStack_1d8;
    if (cStack_1d8 == '\0') {
      FUN_140071040(param_2,"[R]",3);
      load_supplier_0xbb340(param_2,alStack_180);
      uVar27 = 3;
      pcVar26 = "[R]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      load_supplier_0xbb340(param_2,alStack_180);
      uVar27 = 2;
      pcVar26 = "  ";
    }
    FUN_140071040(param_2,pcVar26,uVar27);
    FUN_140070e80(alStack_180);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if (sVar6 == 0x46) {
    uVar10 = (**(code **)(*param_1 + 0x40))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1);
    sVar6 = FUN_141475520(0x1423f3970,uVar7,uVar10);
    if (sVar6 != -1) {
      FUN_140071040(param_2,"When used as a dye, it produces ",0x20);
      load_supplier_0xbb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)sVar6 * 8) + 0x50);
      FUN_140071040(param_2,".",1);
      if (cVar3 == '\0') {
        uVar27 = 3;
        pcVar26 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar26 = "  ";
      }
      FUN_140071040(param_2,pcVar26,uVar27);
    }
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((sVar6 == 0x57) && (param_1[0x1f] != 0)) {
    if (((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) &&
       ((lVar14 = FUN_1400bb7d0(0x5b,*(longlong *)(_DAT_142407590 + 0xa98) + 0x218), lVar14 == 0 ||
        (*(int *)(lVar14 + 4) < 1)))) {
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
        pcVar26 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar26 = "  ";
      }
      FUN_140071040(param_2,pcVar26,uVar27);
      FUN_140071040(param_2,"The slab reads \"",0x10);
      load_supplier_0xbb340(param_2,param_1 + 0x1d);
      FUN_140071040(param_2,"\".",2);
      if (cVar3 == '\0') {
        uVar27 = 3;
        pcVar26 = "[R]";
      }
      else {
        uVar27 = 2;
        pcVar26 = "  ";
      }
      FUN_140071040(param_2,pcVar26,uVar27);
      if ((((_DAT_1418be238 == 1) && (_DAT_142407590 != 0)) &&
          (*(short *)((longlong)param_1 + 0x10c) == 0x1a)) && ((int)param_1[0x21] != -1)) {
        lVar14 = image_supplier_0x13cc070();
        lVar32 = FUN_1400693f0(0x14251c138,(int)param_1[0x21]);
        if (((lVar14 != 0) && (lVar32 != 0)) &&
           ((*(longlong *)(lVar32 + 0x130) != 0 &&
            (lVar18 = *(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x58), lVar18 != 0)))) {
          load_supplier_0x70870(lVar18 + 0x38,&plStack_1d0);
          load_supplier_0x70860
                    (*(longlong *)(*(longlong *)(lVar32 + 0x130) + 0x58) + 0x38,&plStack_1a0);
          puVar24 = (undefined1 *)load_supplier_0x70450(&plStack_1d0,&cStack_1d7,&plStack_1a0);
          cVar5 = load_supplier_0x66de0(*puVar24,0);
          while (cVar5 != '\0') {
            puVar25 = (undefined4 *)load_supplier_0x70440(&plStack_1d0);
            puVar25 = (undefined4 *)FUN_140073ba0(0x14250a168,*puVar25);
            if (((puVar25 != (undefined4 *)0x0) && (puVar25[0x24] == 2)) &&
               (puVar25[0x23] == *(int *)(lVar32 + 0xe0))) {
              lVar18 = *(longlong *)(lVar14 + 0x130);
              if (lVar18 == 0) {
                plStack_190 = (longlong *)FUN_1415530e0(0x68);
                lVar18 = image_supplier_0x766b0(plStack_190);
                *(longlong *)(lVar14 + 0x130) = lVar18;
              }
              if (*(longlong *)(lVar18 + 0x40) == 0) {
                plStack_1b0 = (longlong *)FUN_1415530e0(0x170);
                uVar27 = image_supplier_0x764b0(plStack_1b0);
                *(undefined8 *)(*(longlong *)(lVar14 + 0x130) + 0x40) = uVar27;
              }
              FUN_1400bb4a0(*puVar25,*(longlong *)(*(longlong *)(lVar14 + 0x130) + 0x40) + 0x38);
            }
            load_supplier_0x70980(&plStack_1d0);
            puVar24 = (undefined1 *)load_supplier_0x70450(&plStack_1d0,&cStack_1d7,&plStack_1a0);
            cVar5 = load_supplier_0x66de0(*puVar24,0);
          }
        }
      }
    }
  }
  sVar6 = (**(code **)(*param_1 + 0x1d8))(param_1);
  if (sVar6 < 1) goto LAB_140c90fb0;
  sVar9 = (**(code **)*param_1)(param_1);
  if ((int)sVar9 - 0x17U < 0x42) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_140c91358)[(int)((int)sVar9 - 0x17U)]) {
    case 1:
      goto override_jmp_140c90e6f_case_1;
    }
override_jmp_140c90e6f_case_0:
    if (sVar6 == 1) {
LAB_140c90f9b:
      pcVar26 = "This object is showing some wear.  ";
      uVar27 = 0x23;
    }
    else if (sVar6 == 2) {
      uVar27 = 0x1e;
      pcVar26 = "This object is heavily worn.  ";
    }
    else {
      if (sVar6 != 3) goto LAB_140c90fb0;
      uVar27 = 0x19;
      pcVar26 = "This object is mangled.  ";
    }
  }
  else {
override_jmp_140c90e6f_case_1:
    uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar14 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar10);
    if ((lVar14 == 0) || (cVar5 = load_supplier_0x735c0(lVar14 + 0x290,0x18), cVar5 == '\0')) {
      uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      lVar14 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar10);
      if ((lVar14 == 0) || (cVar5 = load_supplier_0x735c0(lVar14 + 0x290,0x1e), cVar5 == '\0')) {
        uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1);
        lVar14 = FUN_1414c6fe0(0x1423f3970,uVar7,uVar10);
        if ((lVar14 == 0) || (cVar5 = load_supplier_0x735c0(lVar14 + 0x290,0x3e), cVar5 == '\0'))
        goto override_jmp_140c90e6f_case_0;
      }
    }
    if (sVar6 == 1) goto LAB_140c90f9b;
    if (sVar6 == 2) {
      uVar27 = 0x1c;
      pcVar26 = "This object is threadbare.  ";
    }
    else {
      if (sVar6 != 3) goto LAB_140c90fb0;
      uVar27 = 0x1c;
      pcVar26 = "This object is in tatters.  ";
    }
  }
  FUN_140071040(param_2,pcVar26,uVar27);
LAB_140c90fb0:
  cVar5 = (**(code **)(*param_1 + 0x448))(param_1);
  if ((((cVar5 != '\0') && (sVar6 = (**(code **)*param_1)(param_1), sVar6 != 0x4b)) &&
      (sVar6 = (**(code **)*param_1)(param_1), cVar5 = cStack_1d7, sVar6 != 0x49)) &&
     ((plVar23 = (longlong *)param_1[0x13], plVar23 != (longlong *)0x0 &&
      (plVar23[1] - *plVar23 >> 3 != 0)))) {
    iVar11 = 0;
    lVar14 = 0;
    do {
      FUN_140071040(param_2,"It is ",6);
      if (*(int *)(*(longlong *)(*(longlong *)param_1[0x13] + lVar14) + 0x10) < 100) {
        uVar27 = 9;
        pcVar26 = "spattered";
      }
      else {
        uVar27 = 6;
        pcVar26 = "coated";
      }
      FUN_140071040(param_2,pcVar26,uVar27);
      FUN_140071040(param_2," with ",6);
      image_supplier_0x697c0(auStack_160,cVar5);
      image_supplier_0x711b0(auStack_160);
      puVar2 = *(undefined2 **)(*(longlong *)param_1[0x13] + lVar14);
      uStack_218 = CONCAT22(uStack_218._2_2_,puVar2[4]);
      uStack_220 = uStack_220 & 0xffffffffffffff00;
      uStack_228 = 0;
      image_material_name(0x1423f3970,auStack_160,*puVar2,*(undefined4 *)(puVar2 + 2));
      load_supplier_0xbb340(param_2,auStack_160);
      FUN_140071040(param_2,".  ",3);
      FUN_140070e80(auStack_160);
      iVar11 = iVar11 + 1;
      lVar14 = lVar14 + 8;
    } while ((ulonglong)(longlong)iVar11 <
             (ulonglong)(((longlong *)param_1[0x13])[1] - *(longlong *)param_1[0x13] >> 3));
  }
  puVar17 = (undefined8 *)(**(code **)(*param_1 + 0x5e0))(param_1);
  if (puVar17 != (undefined8 *)0x0) {
    image_supplier_0x70d70(&plStack_1d0,*puVar17,puVar17);
    image_supplier_0x70d70(&plStack_1a0,puVar17[1],puVar17);
    if (plStack_1d0 != plStack_1a0) {
      do {
        iVar11 = *(int *)*plStack_1d0;
        if ((-1 < iVar11) && (iVar11 < (int)(_DAT_142519950 - _DAT_142519948 >> 3))) {
          puVar17 = *(undefined8 **)
                     (*(longlong *)(*(longlong *)(_DAT_142519948 + (longlong)iVar11 * 8) + 0x50) +
                     (longlong)((int *)*plStack_1d0)[1] * 8);
          sVar6 = (**(code **)*puVar17)(puVar17);
          if (sVar6 == 10) {
            load_supplier_0xbb340(param_2,puVar17 + 0x81);
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
      load_supplier_0xbb340(param_2,param_1[0x1d] + 0x188);
      uVar27 = 3;
      pcVar26 = "[B]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      load_supplier_0xbb340(param_2,param_1[0x1d] + 0x188);
      uVar27 = 2;
      pcVar26 = "  ";
    }
    FUN_140071040(param_2,pcVar26,uVar27);
  }
  sVar6 = (**(code **)*param_1)(param_1);
  if ((sVar6 == 0xd) && (*(longlong *)(param_1[0x1d] + 0x288) != 0)) {
    if (cVar3 == '\0') {
      FUN_140071040(param_2,"[B]",3);
      load_supplier_0xbb340(param_2,param_1[0x1d] + 0x278);
      uVar27 = 3;
      pcVar26 = "[B]";
    }
    else {
      FUN_140071040(param_2,"  ",2);
      load_supplier_0xbb340(param_2,param_1[0x1d] + 0x278);
      uVar27 = 2;
      pcVar26 = "  ";
    }
    FUN_140071040(param_2,pcVar26,uVar27);
  }
  FUN_140070e80(auStack_140);
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_248);
  return;
LAB_140c8d6f0:
  pcVar26 = ".  ";
LAB_140c8d6f7:
  load_supplier_0x70b90(param_2,pcVar26);
  param_1 = plStack_1d0;
  goto joined_r0x000140c8d58f;
}


/* reference PE:6aea05a1:02734000; item-noun; RVA 0xa9c6b0..0xaa1b80 */

/* WARNING: Switch with 1 destination removed at 0x000140a9f12b */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_item_noun(undefined8 *param_1,ushort param_2,short param_3,ushort param_4,uint param_5,
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        load_supplier_0x70b90(param_1,"metal");
      }
      else {
        load_supplier_0x70cc0(auStack_f0);
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        image_material_name(0x1423f3970,auStack_f0,0,param_5);
        load_supplier_0xbb340(param_1,auStack_f0);
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
            load_supplier_0x70b90(param_1," wafers");
            goto LAB_140aa1b0b;
          }
        }
      }
      load_supplier_0x70b90(param_1," bars");
    }
    else if (param_4 == 7) {
      if (param_5 == 1) {
        load_supplier_0x70b90(param_1,"charcoal");
      }
      else {
        pcVar21 = "coke";
        if (param_5 != 0) {
          pcVar21 = "refined coal";
        }
        load_supplier_0x70b90(param_1,pcVar21);
      }
    }
    else if (param_4 == 0xffff) {
      load_supplier_0x70b90(param_1,"bars");
    }
    else {
      load_supplier_0x70cc0(auStack_110);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      image_material_name(0x1423f3970,auStack_110,param_4,param_5);
      load_supplier_0xbb340(param_1,auStack_110);
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
        load_supplier_0x70b90(param_1,"cut gems");
      }
      else if (param_4 == 3) {
        load_supplier_0x70b90(param_1,"cut green glass gems");
      }
      else if (param_4 == 4) {
        load_supplier_0x70b90(param_1,"cut clear glass gems");
      }
      else if (param_4 == 5) {
        load_supplier_0x70b90(param_1,"cut crystal glass gems");
      }
      else if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          load_supplier_0x70b90(param_1,"gems");
        }
      }
      else {
        load_supplier_0x70cc0(auStack_d0);
        uStack_298 = CONCAT31(uStack_298._1_3_,1);
        FUN_1414eaa00(0x1423f3970,auStack_d0,param_4,param_5);
        load_supplier_0xbb340(param_1,auStack_d0);
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
      load_supplier_0x15530d0();
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      load_supplier_0x70b90(param_1,"blocks");
    }
    else {
      load_supplier_0xbb340(param_1,lVar30 + 0x330);
    }
    goto LAB_140aa1b0b;
  case 3:
    if (param_4 == 0xffff) {
      FUN_140071040(param_1,"rough gems",10);
    }
    else if (param_4 == 3) {
      load_supplier_0x70b90(param_1,"raw green glass");
    }
    else if (param_4 == 4) {
      load_supplier_0x70b90(param_1,"raw clear glass");
    }
    else if (param_4 == 5) {
      load_supplier_0x70b90(param_1,"raw crystal glass");
    }
    else if (param_5 == 0xffffffff) {
      if (param_4 == 0) {
        load_supplier_0x70b90(param_1,"rough gems");
      }
    }
    else {
      load_supplier_0x70cc0(auStack_170);
      load_supplier_0x70b90(param_1,"rough ");
      uStack_298 = CONCAT31(uStack_298._1_3_,1);
      FUN_1414eaa00(0x1423f3970,auStack_170,param_4,param_5);
      load_supplier_0xbb340(param_1,auStack_170);
      FUN_140070e80(auStack_170);
    }
    goto LAB_140aa1b0b;
  case 4:
    if (param_4 == 0) {
      if (param_5 == 0xffffffff) {
        load_supplier_0x70b90(param_1,"stone boulders");
      }
      else {
        load_supplier_0x70cc0(auStack_150);
        FUN_1414ea960(0x1423f3970,auStack_150,0,param_5);
        load_supplier_0xbb340(param_1,auStack_150);
        FUN_140070e80(auStack_150);
      }
    }
    else if ((param_4 == 0xffff) && (param_13 == 0)) {
      load_supplier_0x70b90(param_1,"boulders");
    }
    else {
      load_supplier_0x70cc0(auStack_130);
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      image_material_name(0x1423f3970,auStack_130,param_4,param_5);
      load_supplier_0xbb340(param_1,auStack_130);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        load_supplier_0x70b90(param_1,"chair");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        load_supplier_0x70b90(param_1,"chain");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
          load_supplier_0x70b90(param_1,"flask");
        }
        else {
          load_supplier_0x70b90(param_1,"vial");
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
    image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    pppppppuVar20 = &pppppppuStack_250;
    if (0xf < uStack_238) {
      pppppppuVar20 = pppppppuStack_250;
    }
    FUN_140071040(param_1,pppppppuVar20,lStack_240);
    FUN_1400bb1b0(param_1,0x20);
    if ((ushort)(param_4 - 0x1a3) < 200) {
      load_supplier_0x70b90(param_1,"cup");
    }
    else {
      if ((param_4 != 0) || (cVar7 = FUN_141475150(0x1423f3970,0x2f,0,param_5), cVar7 != '\0'))
      goto LAB_140a9e295;
      load_supplier_0x70b90(param_1,"mug");
    }
    goto LAB_140aa1afb;
  case 0xd:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
            load_supplier_0xbb340(param_1,lVar18 + lVar30);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
            load_supplier_0xbb340(param_1,lVar18 + lVar30);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      pppppppuVar20 = &pppppppuStack_250;
      if (0xf < uStack_238) {
        pppppppuVar20 = pppppppuStack_250;
      }
      FUN_140071040(param_1,pppppppuVar20,lStack_240);
      FUN_1400bb1b0(param_1,0x20);
      if ((ushort)(param_4 - 0x1a3) < 200) {
        load_supplier_0x70b90(param_1,"casket");
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
        load_supplier_0x70b90(param_1,"sarcophag");
        pcVar21 = "i";
        if (param_6 == 1) {
          pcVar21 = "us";
        }
        load_supplier_0x70b90(param_1,pcVar21);
        goto LAB_140aa1b0b;
      }
    }
    load_supplier_0x70b90(param_1,"coffin");
    goto LAB_140aa1afb;
  case 0x16:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    load_supplier_0x70b90(param_1,"weapon");
    goto LAB_140aa1afb;
  case 0x19:
    if (lVar30 != 0) {
      load_supplier_0xbb340(param_1,&uStack_230);
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
              load_supplier_0xbb340(param_1,lVar18 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              load_supplier_0xbb340(param_1,lVar18 + 0xe8);
              load_supplier_0x70b90(param_1," ");
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
              image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140aa12db:
              load_supplier_0xbb340(param_1,pppppppuVar20);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (1 < (int)param_6) {
      load_supplier_0x70b90(param_1,"suits of ");
    }
    load_supplier_0x70b90(param_1,"armor");
    goto LAB_140aa1b0b;
  case 0x1a:
    if (lVar30 != 0) {
      load_supplier_0xbb340(param_1,&uStack_230);
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
            load_supplier_0xbb340(param_1,lVar18 + 0xa8);
            load_supplier_0x70b90(param_1," ");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
          cVar7 = load_supplier_0x735c0(lVar30,7);
          if (cVar7 != '\0') {
            load_supplier_0x70b90(param_1,"chain ");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    load_supplier_0x70b90(param_1,"shield");
    if (param_6 == 1) {
      load_supplier_0x70b90(param_1,"/buckler");
      goto LAB_140aa1b47;
    }
    FUN_1400bb1b0(param_1,0x73);
    load_supplier_0x70b90(param_1,"/buckler");
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
            load_supplier_0xbb340(param_1,lVar18 + 0xa8);
            load_supplier_0x70b90(param_1," ");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      load_supplier_0xbb340(param_1,&uStack_230);
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
            load_supplier_0xbb340(param_1,lVar30 + 0xa8);
            load_supplier_0x70b90(param_1," ");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      cVar7 = load_supplier_0x735c0(lVar18,0);
      if (cVar7 != '\0') {
        load_supplier_0x70b90(param_1,"right ");
      }
      cVar7 = load_supplier_0x735c0(lVar18,1);
      if (cVar7 != '\0') {
        load_supplier_0x70b90(param_1,"left ");
      }
    }
    if (lVar30 == 0) {
      load_supplier_0x70b90(param_1,"handwear");
    }
    else {
      cVar7 = FUN_141475150(0x1423f3970,0x2f,param_4,param_5);
      if ((cVar7 != '\0') && (cVar7 = load_supplier_0x735c0(lVar30 + 0xe8,7), cVar7 != '\0')) {
        load_supplier_0x70b90(param_1,"chain ");
      }
      pppppppuVar20 = (undefined8 *******)(lVar30 + 0x88);
      if (param_6 != 1) goto LAB_140aa0e74;
      load_supplier_0xbb340(param_1,lVar30 + 0x68);
    }
    goto LAB_140aa1b0b;
  case 0x1e:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
          load_supplier_0x70b90(param_1,"box");
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
      load_supplier_0x70b90(param_1,pcVar21);
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
      load_supplier_0x70b90(param_1,pcVar21);
    }
    FUN_140071040(param_1,"s",1);
    goto LAB_140aa1b0b;
  case 0x1f:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
            load_supplier_0xbb340(param_1,uVar23 + 0xa8);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      load_supplier_0xbb340(param_1,lVar30);
    }
    goto LAB_140aa1b0b;
  case 0x28:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        load_supplier_0x70b90(param_1,"green glass ");
      }
      else if (param_4 == 4) {
        load_supplier_0x70b90(param_1,"clear glass ");
      }
      else {
        if (param_4 != 5) {
          if (param_4 == 0xffff) {
            if (param_13 == 0) goto LAB_140a9fd43;
LAB_140a9fdb5:
            load_supplier_0x70cc0(auStack_70);
            uStack_288 = uStack_288 & 0xffff0000;
            uStack_290 = CONCAT31(uStack_290._1_3_,1);
            uStack_298 = param_13;
            image_material_name(0x1423f3970,auStack_70,param_4,param_5);
            load_supplier_0xbb340(param_1,auStack_70);
            load_supplier_0x70b90(param_1," gem");
            if (param_6 != 1) {
              FUN_1400bb1b0(param_1,0x73);
            }
            puVar15 = auStack_70;
          }
          else {
            if (param_4 != 0) goto LAB_140a9fdb5;
            load_supplier_0x70cc0(auStack_190);
            if (param_6 == 1) {
              uStack_298 = (uint)uStack_298._1_3_ << 8;
            }
            else {
              uStack_298 = CONCAT31(uStack_298._1_3_,1);
            }
            FUN_1414eaa00(0x1423f3970,auStack_190,0,param_5);
            load_supplier_0xbb340(param_1,auStack_190);
            puVar15 = auStack_190;
          }
          FUN_140070e80(puVar15);
          goto LAB_140a9fe28;
        }
        load_supplier_0x70b90(param_1,"crystal glass ");
      }
LAB_140a9fd43:
      load_supplier_0x70b90(param_1,"gem");
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
      load_supplier_0x15530d0(pppppppuVar20,uVar22);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
                  load_supplier_0x70b90(param_1,"wooden body part");
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        pcVar21 = "strand body part";
                        if ((param_13 >> 0xd & 1) == 0) {
                          pcVar21 = "body part";
                        }
                        load_supplier_0x70b90(param_1,pcVar21);
                      }
                      else {
                        load_supplier_0x70b90(param_1,"yarn body part");
                      }
                    }
                    else {
                      load_supplier_0x70b90(param_1,"pearl");
                    }
                  }
                  else {
                    load_supplier_0x70b90(param_1,"horn");
                  }
                }
                else {
                  load_supplier_0x70b90(param_1,"soap body part");
                }
              }
              else {
                load_supplier_0x70b90(param_1,"leather body part");
              }
            }
            else {
              load_supplier_0x70b90(param_1,"silk body part");
            }
          }
          else {
            load_supplier_0x70b90(param_1,"plant part");
          }
        }
        else {
          load_supplier_0x70b90(param_1,"shell");
        }
      }
      else {
        load_supplier_0x70b90(param_1,"bone");
      }
      goto LAB_140aa1afb;
    }
    if (param_6 == 1) {
      load_supplier_0x70b90(param_1,"tooth");
      goto LAB_140aa1b47;
    }
    load_supplier_0x70b90(param_1,"teeth");
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
        load_supplier_0x15530d0(pppppppuVar20,uVar22);
      }
      uStack_200 = 0;
      uStack_1f8 = 0xf;
      pppppppuStack_210 = (undefined8 *******)((ulonglong)pppppppuStack_210 & 0xffffffffffffff00);
    }
    goto LAB_140aa1b0b;
  case 0x30:
    if ((param_7 >> 8 & 1) != 0) {
      load_supplier_0x70b90(param_1,"rotten ");
    }
    if ((param_7 & 4) != 0) {
      load_supplier_0x70b90(param_1,"preserved ");
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,"meat",4);
      goto LAB_140aa1b0b;
    }
    lVar30 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar30 == 0) {
      load_supplier_0x70b90(param_1,"meat");
      goto LAB_140aa1b0b;
    }
    uVar32 = extraout_XMM0_Da;
    if (*(longlong *)(lVar30 + 0x2f8) != 0) {
      load_supplier_0xbb340(param_1,lVar30 + 0x2e8);
      uVar32 = FUN_1400bb1b0(param_1,0x20);
    }
    uVar24 = FUN_14071b3a0(uVar32,param_4,param_5);
    if (uVar24 != 0xffffffff) {
      FUN_140abd670(uVar24 & 0xffff,&pppppppuStack_250,0,0xffffffff);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
      FUN_1400bb1b0(param_1,0x20);
    }
    if (*(longlong *)(lVar30 + 0x2b8) != 0) {
      if (param_6 == 1) {
        load_supplier_0xbb340(param_1,lVar30 + 0x2a8);
        goto LAB_140aa1b47;
      }
      load_supplier_0xbb340(param_1,lVar30 + 0x2c8);
      goto LAB_140aa1b0b;
    }
    load_supplier_0xbb340(param_1,lVar30 + 0xb8);
    if ((int)param_6 < 2) {
      load_supplier_0x70b90(param_1," chop");
      goto LAB_140aa1b47;
    }
    load_supplier_0x70b90(param_1," chops");
    goto LAB_140aa1b11;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"rotten ",7);
    }
    if (param_4 == 0xffff) {
      load_supplier_0x70b90(param_1,"fish");
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
    load_supplier_0xbb340(param_1,&pppppppuStack_250);
    cVar7 = load_supplier_0xf3d20(0x14250eec8,param_4,param_5 & 0xffff);
LAB_140aa0b6a:
    if (cVar7 == '\0') {
      load_supplier_0x70b90(param_1,", ");
      uVar27 = 0xc;
    }
    else {
      if (cVar7 != '\x01') goto LAB_140aa1b0b;
      load_supplier_0x70b90(param_1,", ");
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
      load_supplier_0x70b90(param_1,pcVar21);
      FUN_140abd670(param_4,&pppppppuStack_250,param_6 != 1,0xffffffff);
      pppppppuVar20 = &pppppppuStack_250;
      goto LAB_140aa0e74;
    }
    load_supplier_0x70b90(param_1,"small live animal");
    goto LAB_140aa1afb;
  case 0x34:
    if (param_4 != 0xffff) {
      pcVar21 = "tame ";
      goto LAB_140aa0e4f;
    }
    load_supplier_0x70b90(param_1,"small tame animal");
    goto LAB_140aa1afb;
  case 0x35:
    if ((ushort)(param_4 - 0x1a3) < 200) {
      image_supplier_0xa7e760(&DAT_14250ed78,&pppppppuStack_250,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = (uint)uStack_288._2_2_ << 0x10;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        uStack_298 = param_13;
        image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        pppppppuVar20 = &pppppppuStack_250;
        if (0xf < uStack_238) {
          pppppppuVar20 = pppppppuStack_250;
        }
        FUN_140071040(param_1,pppppppuVar20,lStack_240);
        uVar27 = 0x20;
        goto LAB_140aa1b03;
      }
      load_supplier_0x70b90(param_1,"seeds");
    }
    goto LAB_140aa1b0b;
  case 0x36:
    if ((param_7 & 0x100) != 0) {
      FUN_140071040(param_1,"withered ",9);
    }
    if ((param_4 == 0xffff) || (param_5 == 0xffffffff)) {
      FUN_140071040(param_1,"plant",5);
      if (param_6 == 1) goto LAB_140aa1b47;
      load_supplier_0x70b90(param_1,"s");
    }
    else {
      uStack_298 = CONCAT31(uStack_298._1_3_,param_6 != 1);
      FUN_140146430(&DAT_14250ed78,param_5,&pppppppuStack_250,0);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    goto LAB_140aa1b0b;
  case 0x37:
    if ((param_5 == 0xffffffff) && (param_13 == 0)) {
      load_supplier_0x70b90(param_1,"tanned hide");
      goto LAB_140aa1afb;
    }
    uStack_288 = (uint)uStack_288._2_2_ << 0x10;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
LAB_140a9e8b1:
    uStack_298 = param_13;
    image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_supplier_0xa7e7b0(&DAT_14250ed78,&pppppppuStack_250,param_5,(int)param_3);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    else {
      if ((param_4 != 0xffff) || (param_13 != 0)) {
        uStack_288 = uStack_288 & 0xffff0000;
        uStack_290 = CONCAT31(uStack_290._1_3_,1);
        goto LAB_140a9e8b1;
      }
      if (param_6 == 1) {
        load_supplier_0x70b90(param_1,"leaf or fruit");
        goto LAB_140aa1b47;
      }
      load_supplier_0x70b90(param_1,"leaves and fruit");
    }
    goto LAB_140aa1b0b;
  case 0x39:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        load_supplier_0x70b90(param_1,"web");
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
        load_supplier_0x70b90(param_1,"strands");
        goto LAB_140aa1b0b;
      }
    }
    cVar7 = FUN_141475150(0x1423f3970,0x3e,param_4,param_5);
    if (cVar7 == '\0') {
      load_supplier_0x70b90(param_1,"thread");
    }
    else {
      load_supplier_0x70b90(param_1,"yarn");
    }
    goto LAB_140aa1b0b;
  case 0x3a:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
              load_supplier_0xbb340(param_1,lVar18 + 0xa8);
              FUN_1400bb1b0(param_1,0x20);
              lVar30 = lStack_220;
            }
            if (lVar30 != 0) {
              load_supplier_0xbb340(param_1,&uStack_230);
              FUN_1400bb1b0(param_1,0x20);
            }
            if (*(longlong *)(lVar18 + 0xf8) != 0) {
              load_supplier_0xbb340(param_1,lVar18 + 0xe8);
              load_supplier_0x70b90(param_1," ");
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
              image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              pppppppuVar20 = &pppppppuStack_250;
LAB_140aa1a2b:
              load_supplier_0xbb340(param_1,pppppppuVar20);
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
      load_supplier_0xbb340(param_1,&uStack_230);
      FUN_1400bb1b0(param_1,0x20);
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
            load_supplier_0xbb340(param_1,lVar18 + lVar30);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
              load_supplier_0xbb340(param_1,lVar30 + 0xa8);
              load_supplier_0x70b90(param_1," ");
            }
            if ((param_4 != 0xffff) || (param_13 != 0)) {
              uStack_288 = uStack_288 & 0xffff0000;
              uStack_290 = CONCAT31(uStack_290._1_3_,1);
              uStack_298 = param_13;
              image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
              load_supplier_0xbb340(param_1,&pppppppuStack_250);
              FUN_1400bb1b0(param_1,0x20);
            }
            lVar18 = lVar30 + 0x88;
            if (param_6 == 1) {
              lVar18 = lVar30 + 0x68;
            }
            load_supplier_0xbb340(param_1,lVar18);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
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
    load_supplier_0x70b90(param_1,"drink");
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
        load_supplier_0xbb340
                  (param_1,*(longlong *)(_DAT_142519538 + (longlong)*(int *)(lVar30 + 200) * 8) +
                           0x50);
        load_supplier_0x70b90(param_1," dye mix");
        goto LAB_140aa1b0b;
      }
    }
    if ((param_4 == 0xffff) && (param_13 == 0)) {
      load_supplier_0x70b90(param_1,"powder");
    }
    else {
      uStack_288 = CONCAT22(uStack_288._2_2_,3);
      uStack_290 = uStack_290 & 0xffffff00;
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
      load_supplier_0xbb340(param_1,&pppppppuStack_250);
    }
    goto LAB_140aa1b0b;
  case 0x47:
    if ((param_7 & 0x100) != 0) {
      load_supplier_0x70b90(param_1,"rotten ");
    }
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = uStack_290 & 0xffffff00;
      goto LAB_140a9e8b1;
    }
    load_supplier_0x70b90(param_1,"cheese");
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
        load_supplier_0x70b90(param_1,"liquid");
        goto LAB_140a9f01c;
      }
      if ((param_11 == -1) || (iVar10 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3), iVar10 == 0)) {
LAB_140a9eeff:
        uStack_288 = CONCAT22(uStack_288._2_2_,1);
LAB_140a9efe0:
        uStack_290 = uStack_290 & 0xffffff00;
        uStack_298 = param_13;
        image_material_name(0x1423f3970,&pppppppuStack_250,uVar25 & 0xffff,uVar22 & 0xffffffff);
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
        load_supplier_0x70cc0(auStack_b0);
        FUN_140abd670(uVar22 & 0xffff,auStack_b0,0,0xffffffff);
        FUN_140070bd0(&pppppppuStack_250,auStack_b0);
        load_supplier_0x70b90(&pppppppuStack_250," paste");
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
      load_supplier_0x70b90(param_1,"glob");
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
                load_supplier_0x70b90(param_1," laced with ");
                bVar3 = true;
              }
              load_supplier_0x70cc0(auStack_90);
              puVar1 = *(undefined2 **)(uVar23 + **(longlong **)(uVar22 + 0x98));
              uStack_288 = CONCAT22(uStack_288._2_2_,puVar1[4]);
              uStack_290 = uStack_290 & 0xffffff00;
              uStack_298 = 0;
              image_material_name(0x1423f3970,auStack_90,*puVar1,*(undefined4 *)(puVar1 + 2));
              load_supplier_0xbb340(param_1,auStack_90);
              if (sVar29 < 3) {
                if (sVar29 == 2) {
                  pcVar21 = " and ";
                  goto LAB_140a9f1bd;
                }
              }
              else {
                pcVar21 = ", ";
LAB_140a9f1bd:
                load_supplier_0x70b90(param_1,pcVar21);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_1f0,param_4,param_5);
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
        load_supplier_0x15530d0(pppppppuVar20,uVar22);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
        load_supplier_0xbb340(param_1,&pppppppuStack_250);
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
          load_supplier_0xbb340(param_1,lVar30 + 0x108);
          if (*(longlong *)(lVar30 + 0x118) != 0) {
            FUN_1400bb1b0(param_1,0x20);
          }
          load_supplier_0xbb340(param_1,lVar30 + 0xe8);
          if (*(longlong *)(lVar30 + 0xf8) != 0) {
            FUN_1400bb1b0(param_1,0x20);
            pcVar21 = "cast";
            goto LAB_140aa1aed;
          }
          goto LAB_140a9d8e6;
        }
      }
      load_supplier_0x70b90(param_1,"limb/body ");
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
            load_supplier_0xbb340(param_1,uVar23 + 0xd8);
            load_supplier_0x70b90(param_1," ");
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
        load_supplier_0x70b90(param_1,"unglazed ");
      }
      uStack_288 = uStack_288 & 0xffff0000;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
        load_supplier_0xbb340(param_1,*puVar12);
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
    load_supplier_0xbb340(param_1,lVar30 + uVar23);
    goto LAB_140aa1b0b;
  case 0x57:
    if ((param_4 != 0xffff) || (param_13 != 0)) {
      uStack_288 = (uint)uStack_288._2_2_ << 0x10;
      uStack_290 = CONCAT31(uStack_290._1_3_,1);
      uStack_298 = param_13;
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4);
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
            load_supplier_0x70b90(param_1,"memorial");
            break;
          default:
            goto override_jmp_140aa02f0_case_1;
          case 7:
            load_supplier_0x70b90(param_1,"food imports sign");
            break;
          case 8:
            load_supplier_0x70b90(param_1,"clothing imports sign");
            break;
          case 9:
            load_supplier_0x70b90(param_1,"general imports sign");
            break;
          case 10:
            load_supplier_0x70b90(param_1,"cloth shop sign");
            break;
          case 0xb:
            load_supplier_0x70b90(param_1,"leather shop sign");
            break;
          case 0xc:
            load_supplier_0x70b90(param_1,"woven clothing shop sign");
            break;
          case 0xd:
            load_supplier_0x70b90(param_1,"leather clothing shop sign");
            break;
          case 0xe:
            load_supplier_0x70b90(param_1,"bone carver\'s shop sign");
            break;
          case 0xf:
            load_supplier_0x70b90(param_1,"gem cutter\'s shop sign");
            break;
          case 0x10:
            load_supplier_0x70b90(param_1,"weaponsmith\'s shop sign");
            break;
          case 0x11:
            load_supplier_0x70b90(param_1,"bowyer\'s shop sign");
            break;
          case 0x12:
            load_supplier_0x70b90(param_1,"blacksmith\'s shop sign");
            break;
          case 0x13:
            load_supplier_0x70b90(param_1,"armorsmith\'s shop sign");
            break;
          case 0x14:
            load_supplier_0x70b90(param_1,"metal craft shop sign");
            break;
          case 0x15:
            load_supplier_0x70b90(param_1,"leather goods shop sign");
            break;
          case 0x16:
            load_supplier_0x70b90(param_1,"carpenter\'s shop sign");
            break;
          case 0x17:
            load_supplier_0x70b90(param_1,"stone furniture shop sign");
            break;
          case 0x18:
            load_supplier_0x70b90(param_1,"metal furniture shop sign");
            break;
          case 0x19:
            load_supplier_0x70b90(param_1,"tavern sign");
          }
        }
        else {
override_jmp_140aa02f0_case_1:
          load_supplier_0x70b90(param_1,"slab");
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
      image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
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
    load_supplier_0xbb340(param_1,lVar18 + 0xa8);
    load_supplier_0x70b90(param_1," ");
  }
  if ((param_4 != 0xffff) || (param_13 != 0)) {
    uStack_288 = uStack_288 & 0xffff0000;
    uStack_290 = CONCAT31(uStack_290._1_3_,1);
    uStack_298 = param_13;
    image_material_name(0x1423f3970,&pppppppuStack_250,param_4,param_5);
    load_supplier_0xbb340(param_1,&pppppppuStack_250);
    FUN_1400bb1b0(param_1,0x20);
  }
LAB_140aa113b:
  pppppppuVar20 = (undefined8 *******)(lVar18 + 0x88);
  if (param_6 == 1) {
    load_supplier_0xbb340(param_1,lVar18 + 0x68);
  }
  else {
LAB_140aa0e74:
    load_supplier_0xbb340(param_1,pppppppuVar20);
  }
  goto LAB_140aa1b0b;
}


/* reference PE:6aea05a1:02734000; material-name; RVA 0x14eab90..0x14eafe9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_material_name(undefined8 param_1,undefined8 *param_2,short param_3,int param_4,
                        uint param_5,char param_6,short param_7)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_98;
  uVar9 = 0;
  param_2[2] = 0;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar3 = 0;
  if (param_4 == -1) {
    if ((param_5 & 1) != 0) {
      FUN_140071040(param_2,"plant",5);
      goto LAB_1414eafcb;
    }
    if ((param_5 >> 0xc & 1) != 0) {
      FUN_140071040(param_2,"yarn",4);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 0x82) != 0) {
      uVar12 = 6;
      if (param_6 == '\0') {
        uVar12 = 4;
      }
      pcVar7 = "wooden";
      if (param_6 == '\0') {
        pcVar7 = "wood";
      }
      FUN_140071040(param_2,pcVar7,uVar12);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 4) != 0) {
      FUN_140071040(param_2,"cloth",5);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 8) != 0) {
      FUN_140071040(param_2,"silk",4);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 0x20) != 0) {
      FUN_140071040(param_2,"bone",4);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 0x10) != 0) {
      FUN_140071040(param_2,"leather",7);
      goto LAB_1414eafcb;
    }
    if ((param_5 & 0x40) != 0) {
      FUN_140071040(param_2,"shell",5);
      goto LAB_1414eafcb;
    }
    if ((param_5 >> 8 & 1) != 0) {
      FUN_140071040(param_2,"soap",4);
      goto LAB_1414eafcb;
    }
    if ((param_5 >> 9 & 1) != 0) {
      FUN_140071040(param_2,"ivory/tooth",0xb);
      goto LAB_1414eafcb;
    }
    if ((param_5 >> 10 & 1) != 0) {
      FUN_140071040(param_2,"horn",4);
      goto LAB_1414eafcb;
    }
    if ((param_5 >> 0xb & 1) != 0) {
      FUN_140071040(param_2,"pearl",5);
      goto LAB_1414eafcb;
    }
  }
  if (((((ushort)(param_3 - 0xdbU) < 200) &&
       (lVar14 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar14 != 0)) && (param_4 != -1)) &&
     (iVar13 = (int)lVar14 + -1, uVar8 = uVar9, -1 < iVar13)) {
    do {
      iVar5 = iVar13 + (int)uVar8 >> 1;
      lVar14 = *(longlong *)(_DAT_14251c198 + (longlong)iVar5 * 8);
      if (*(int *)(lVar14 + 0xe0) == param_4) {
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0xaa) != '\0')) {
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0xf;
          pppuStack_78 = (undefined8 ****)0x0;
          if (((*(longlong *)(lVar14 + 0x130) == 0) ||
              ((lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x130) + 0x58), lVar4 == 0 ||
               (*(int *)(lVar4 + 0x30) == -1)))) || (lVar4 = FUN_140073ba0(0x14250a168), lVar4 == 0)
             ) {
            lVar14 = lVar14 + 0x38;
          }
          else {
            lVar14 = FUN_140c521e0(lVar4);
          }
          uVar8 = 0xf;
          if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
            FUN_140aae180(lVar14,&pppuStack_78,1,0);
            uVar8 = uStack_60;
            uVar9 = uStack_68;
          }
          ppppuVar6 = &pppuStack_78;
          if (0xf < uVar8) {
            ppppuVar6 = (undefined8 ****)pppuStack_78;
          }
          FUN_140071040(param_2,ppppuVar6,uVar9);
          FUN_140071040(param_2,"\'s ",3);
          if (0xf < uStack_60) {
            uVar9 = uStack_60 + 1;
            ppppuVar6 = (undefined8 ****)pppuStack_78;
            if (0xfff < uVar9) {
              uVar9 = uStack_60 + 0x28;
              ppppuVar6 = (undefined8 ****)pppuStack_78[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar6))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            load_supplier_0x15530d0(ppppuVar6,uVar9);
          }
        }
        break;
      }
      iVar2 = iVar5 + -1;
      if (*(int *)(lVar14 + 0xe0) < param_4) {
        uVar8 = (ulonglong)(iVar5 + 1);
        iVar2 = iVar13;
      }
      iVar13 = iVar2;
    } while ((int)uVar8 <= iVar13);
  }
  lVar14 = FUN_1414c6fe0(param_1,param_3,param_4);
  if (lVar14 == 0) {
    FUN_140071040(param_2,"unknown material",0x10);
  }
  else {
    if (*(longlong *)(lVar14 + 0x530) != 0) {
      plVar10 = (longlong *)(lVar14 + 0x520);
      if (0xf < *(ulonglong *)(lVar14 + 0x538)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140071040(param_2,plVar10,*(undefined8 *)(lVar14 + 0x530));
      FUN_140071040(param_2," ",1);
    }
    lVar4 = (longlong)param_7 * 0x20 + 0x178;
    if (param_6 == '\0') {
      lVar4 = (longlong)param_7 * 0x20 + 0xb8;
    }
    puVar11 = (undefined8 *)(lVar4 + lVar14);
    puVar3 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    FUN_140071040(param_2,puVar11,*puVar3);
  }
LAB_1414eafcb:
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_98);
  return;
}


/* reference PE:6aea05a1:02734000; number-words; RVA 0x547840..0x547fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_number_words(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418be040 ^ (ulonglong)auStack_68;
  param_2[2] = 0;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar3 = 0;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    FUN_140070f00(param_2,"negative ",9);
  }
  if (param_1 < 0x14) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      FUN_140070f00(param_2,"zero",4);
      break;
    case 1:
      FUN_140070f00(param_2,"one",3);
      break;
    case 2:
      FUN_140070f00(param_2,"two",3);
      break;
    case 3:
      FUN_140070f00(param_2,"three",5);
      break;
    case 4:
      FUN_140070f00(param_2,"four",4);
      break;
    case 5:
      FUN_140070f00(param_2,"five",4);
      break;
    case 6:
      FUN_140070f00(param_2,"six",3);
      break;
    case 7:
      FUN_140070f00(param_2,"seven",5);
      break;
    case 8:
      FUN_140070f00(param_2,"eight",5);
      break;
    case 9:
      FUN_140070f00(param_2,"nine",4);
      break;
    case 10:
      FUN_140070f00(param_2,"ten",3);
      break;
    case 0xb:
      FUN_140070f00(param_2,"eleven",6);
      break;
    case 0xc:
      FUN_140070f00(param_2,"twelve",6);
      break;
    case 0xd:
      FUN_140070f00(param_2,"thirteen",8);
      break;
    case 0xe:
      FUN_140070f00(param_2,"fourteen",8);
      break;
    case 0xf:
      FUN_140070f00(param_2,"fifteen",7);
      break;
    case 0x10:
      FUN_140070f00(param_2,"sixteen",7);
      break;
    case 0x11:
      FUN_140070f00(param_2,"seventeen",9);
      break;
    case 0x12:
      FUN_140070f00(param_2,"eighteen",8);
      break;
    case 0x13:
      FUN_140070f00(param_2,"nineteen",8);
    }
    goto LAB_140547fbb;
  }
  if (999999999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000000000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar4,uStack_38);
    FUN_140071040(param_2," billion",8);
    if ((int)param_1 % 1000000000 != 0) {
      FUN_140071040(param_2," ",1);
      image_number_words((int)param_1 % 1000000000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140071040(param_2,ppppuVar4,uStack_38);
    }
    FUN_140070e80(&pppuStack_48);
    goto LAB_140547fbb;
  }
  if (999999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar4,uStack_38);
    FUN_140071040(param_2," million",8);
    if ((int)param_1 % 1000000 != 0) {
      FUN_140071040(param_2," ",1);
      image_number_words((int)param_1 % 1000000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140071040(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_140547fbb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)pppuStack_48[-1]))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140547c77;
  }
  if (999 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 1000,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar4,uStack_38);
    FUN_140071040(param_2," thousand",9);
    if ((int)param_1 % 1000 != 0) {
      FUN_140071040(param_2," ",1);
      image_number_words((int)param_1 % 1000,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140071040(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_140547fbb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
        _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140547c77;
  }
  if (99 < (int)param_1) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 / 100,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar4,uStack_38);
    FUN_140071040(param_2," hundred",8);
    if ((int)param_1 % 100 != 0) {
      FUN_140071040(param_2," ",1);
      image_number_words((int)param_1 % 100,&pppuStack_48);
      ppppuVar4 = &pppuStack_48;
      if (0xf < uStack_30) {
        ppppuVar4 = (undefined8 ****)pppuStack_48;
      }
      FUN_140071040(param_2,ppppuVar4,uStack_38);
    }
    if (uStack_30 < 0x10) goto LAB_140547fbb;
    uVar5 = uStack_30 + 1;
    ppppuVar4 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar5) {
      uVar5 = uStack_30 + 0x28;
      ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
        _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_140547c77;
  }
  if (0x4f < param_1 - 0x14) {
    FUN_140545610(param_1,param_2);
    goto LAB_140547fbb;
  }
  uVar1 = (int)param_1 / 10 - 2;
  if (7 < uVar1) goto LAB_140547f11;
                    /* WARNING: Switch is manually overridden */
  switch(uVar1) {
  case 0:
    pcVar6 = "twenty";
    goto LAB_140547f03;
  case 1:
    pcVar6 = "thirty";
    goto LAB_140547f03;
  case 2:
    uVar7 = 5;
    pcVar6 = "forty";
    break;
  case 3:
    uVar7 = 5;
    pcVar6 = "fifty";
    break;
  case 4:
    uVar7 = 5;
    pcVar6 = "sixty";
    break;
  case 5:
    uVar7 = 7;
    pcVar6 = "seventy";
    break;
  case 6:
    pcVar6 = "eighty";
    goto LAB_140547f03;
  case 7:
    pcVar6 = "ninety";
LAB_140547f03:
    uVar7 = 6;
  }
  FUN_140070f00(param_2,pcVar6,uVar7);
LAB_140547f11:
  if ((int)param_1 % 10 != 0) {
    FUN_140071040(param_2,"-",1);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    image_number_words((int)param_1 % 10,&pppuStack_48);
    ppppuVar4 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar4 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar4,uStack_38);
    if (0xf < uStack_30) {
      uVar5 = uStack_30 + 1;
      ppppuVar4 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar5) {
        uVar5 = uStack_30 + 0x28;
        ppppuVar4 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar4))) {
          _invalid_parameter_noinfo_noreturn(ppppuVar4,uVar5);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_140547c77:
      load_supplier_0x15530d0(ppppuVar4,uVar5);
    }
  }
LAB_140547fbb:
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_68);
  return;
}


/* reference PE:6aea05a1:02734000; guild-profession; RVA 0x1345520..0x13467a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_guild_profession
               (char *param_1,char *param_2,ushort param_3,short param_4,undefined1 *param_5,
               short param_6,char param_7,char param_8)

{
  char *pcVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  uVar8 = (ulonglong)param_4;
  lVar9 = (longlong)(short)param_3;
  if (0x86 < param_3) {
    return;
  }
  uVar7 = (ulonglong)param_6;
  bVar3 = true;
  *param_5 = 0;
  cVar4 = FUN_140310cf0(0x14250eec8,param_4,param_6);
  if (cVar4 != '\0') {
    FUN_140310dc0(0x14250eec8,param_1,param_4,param_6,CONCAT22(uVar10,(short)lVar9),param_7,param_8)
    ;
    return;
  }
  if (0x86 < (uint)lVar9) goto override_jmp_1413455f3_case_102;
                    /* WARNING: Switch is manually overridden */
  switch(lVar9) {
  case 0:
    FUN_140070f00(param_1,"miner",5);
    break;
  case 1:
    FUN_140070f00(param_1,"woodworker",10);
    break;
  case 2:
    FUN_140070f00(param_1,"carpenter",9);
    break;
  case 3:
    FUN_140070f00(param_1,"bowyer",6);
    break;
  case 4:
    FUN_140070f00(param_1,"woodcutter",10);
    break;
  case 5:
    FUN_140070f00(param_1,"stoneworker",0xb);
    break;
  case 6:
    FUN_140070f00(param_1,"stonecutter",0xb);
    break;
  case 7:
    FUN_140070f00(param_1,"stone carver",0xc);
    break;
  case 8:
    FUN_140070f00(param_1,"engraver",8);
    break;
  case 9:
    FUN_140070f00(param_1,"mason",5);
    break;
  case 10:
    FUN_140070f00(param_1,"ranger",6);
    break;
  case 0xb:
    FUN_140070f00(param_1,"animal caretaker",0x10);
    break;
  case 0xc:
    FUN_140070f00(param_1,"animal trainer",0xe);
    break;
  case 0xd:
    FUN_140070f00(param_1,"hunter",6);
    break;
  case 0xe:
    FUN_140070f00(param_1,"trapper",7);
    break;
  case 0xf:
    FUN_140070f00(param_1,"animal dissector",0x10);
    break;
  case 0x10:
    FUN_140070f00(param_1,"metalsmith",10);
    break;
  case 0x11:
    FUN_140070f00(param_1,"furnace operator",0x10);
    break;
  case 0x12:
    FUN_140070f00(param_1,"weaponsmith",0xb);
    break;
  case 0x13:
    FUN_140070f00(param_1,"armorer",7);
    break;
  case 0x14:
    FUN_140070f00(param_1,"blacksmith",10);
    break;
  case 0x15:
    FUN_140070f00(param_1,"metalcrafter",0xc);
    break;
  case 0x16:
    FUN_140070f00(param_1,"jeweler",7);
    break;
  case 0x17:
    FUN_140070f00(param_1,"gem cutter",10);
    break;
  case 0x18:
    FUN_140070f00(param_1,"gem setter",10);
    break;
  case 0x19:
    pcVar6 = "craftsmen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "craftsman";
    }
    goto LAB_14134674f;
  case 0x1a:
    FUN_140070f00(param_1,"woodcrafter",0xb);
    break;
  case 0x1b:
    FUN_140070f00(param_1,"stonecrafter",0xc);
    break;
  case 0x1c:
    FUN_140070f00(param_1,"leatherworker",0xd);
    break;
  case 0x1d:
    FUN_140070f00(param_1,"bone carver",0xb);
    break;
  case 0x1e:
    FUN_140070f00(param_1,"weaver",6);
    break;
  case 0x1f:
    FUN_140070f00(param_1,"clothier",8);
    break;
  case 0x20:
    FUN_140070f00(param_1,"glassmaker",10);
    break;
  case 0x21:
    FUN_140070f00(param_1,"potter",6);
    break;
  case 0x22:
    FUN_140070f00(param_1,"glazer",6);
    break;
  case 0x23:
    FUN_140070f00(param_1,"wax worker",10);
    break;
  case 0x24:
    FUN_140071040(param_1,"strand extractor",0x10);
    break;
  case 0x25:
    FUN_140070f00(param_1,"fishery worker",0xe);
    break;
  case 0x26:
    pcVar6 = "fishermen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "fisherman";
    }
    goto LAB_14134674f;
  case 0x27:
    FUN_140070f00(param_1,"fish dissector",0xe);
    break;
  case 0x28:
    FUN_140070f00(param_1,"fish cleaner",0xc);
    break;
  case 0x29:
    FUN_140070f00(param_1,"farmer",6);
    break;
  case 0x2a:
    FUN_140070f00(param_1,"cheesemaker",0xb);
    break;
  case 0x2b:
    FUN_140070f00(param_1,"milker",6);
    break;
  case 0x2c:
    FUN_140070f00(param_1,"cook",4);
    break;
  case 0x2d:
    FUN_140070f00(param_1,"thresher",8);
    break;
  case 0x2e:
    FUN_140070f00(param_1,"miller",6);
    break;
  case 0x2f:
    FUN_140070f00(param_1,"butcher",7);
    break;
  case 0x30:
    FUN_140070f00(param_1,"tanner",6);
    break;
  case 0x31:
    FUN_140070f00(param_1,"dyer",4);
    break;
  case 0x32:
    FUN_140070f00(param_1,"planter",7);
    break;
  case 0x33:
    FUN_140070f00(param_1,"herbalist",9);
    break;
  case 0x34:
    FUN_140070f00(param_1,"brewer",6);
    break;
  case 0x35:
    FUN_140070f00(param_1,"soap maker",10);
    break;
  case 0x36:
    FUN_140070f00(param_1,"potash maker",0xc);
    break;
  case 0x37:
    FUN_140070f00(param_1,"lye maker",9);
    break;
  case 0x38:
    FUN_140070f00(param_1,"wood burner",0xb);
    break;
  case 0x39:
    FUN_140070f00(param_1,"shearer",7);
    break;
  case 0x3a:
    FUN_140070f00(param_1,"spinner",7);
    break;
  case 0x3b:
    FUN_140070f00(param_1,"presser",7);
    break;
  case 0x3c:
    FUN_140070f00(param_1,"beekeeper",9);
    break;
  case 0x3d:
    FUN_140070f00(param_1,"engineer",8);
    break;
  case 0x3e:
    FUN_140070f00(param_1,"mechanic",8);
    break;
  case 0x3f:
    FUN_140070f00(param_1,"siege engineer",0xe);
    break;
  case 0x40:
    FUN_140070f00(param_1,"siege operator",0xe);
    break;
  case 0x41:
    FUN_140070f00(param_1,"pump operator",0xd);
    break;
  case 0x42:
    FUN_140070f00(param_1,"clerk",5);
    break;
  case 0x43:
    FUN_140070f00(param_1,"administrator",0xd);
    break;
  case 0x44:
    FUN_140070f00(param_1,"trader",6);
    break;
  case 0x45:
    FUN_140070f00(param_1,"doctor",6);
    break;
  case 0x46:
    FUN_140070f00(param_1,"diagnostician",0xd);
    break;
  case 0x47:
    FUN_140070f00(param_1,"bone doctor",0xb);
    break;
  case 0x48:
    FUN_140070f00(param_1,"suturer",7);
    break;
  case 0x49:
    FUN_140070f00(param_1,"surgeon",7);
    break;
  case 0x4a:
    FUN_140070f00(param_1,"merchant",8);
    break;
  case 0x4b:
    pcVar6 = "hammermen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "hammerman";
    }
    goto LAB_14134674f;
  case 0x4c:
    FUN_140070f00(param_1,"Hammer Lord",0xb);
    break;
  case 0x4d:
    pcVar6 = "spearmen";
    uVar5 = 8;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "spearman";
    }
    goto LAB_14134674f;
  case 0x4e:
    FUN_140070f00(param_1,"Spearmaster",0xb);
    break;
  case 0x4f:
    pcVar6 = "crossbowmen";
    uVar5 = 0xb;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "crossbowman";
    }
    goto LAB_14134674f;
  case 0x50:
    pcVar6 = "Elite Crossbowman";
    uVar5 = 0x11;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "Elite Crossbowmen";
    }
    goto LAB_14134674f;
  case 0x51:
    FUN_140070f00(param_1,"wrestler",8);
    break;
  case 0x52:
    FUN_140070f00(param_1,"Elite Wrestler",0xe);
    break;
  case 0x53:
    pcVar6 = "axemen";
    uVar5 = 6;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "axeman";
    }
    goto LAB_14134674f;
  case 0x54:
    FUN_140070f00(param_1,"Axe Lord",8);
    break;
  case 0x55:
    pcVar6 = "swordsmen";
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "swordsman";
    }
    goto LAB_14134674f;
  case 0x56:
    FUN_140070f00(param_1,"Swordmaster",0xb);
    break;
  case 0x57:
    pcVar6 = "macemen";
    uVar5 = 7;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "maceman";
    }
    goto LAB_14134674f;
  case 0x58:
    FUN_140070f00(param_1,"Mace Lord",9);
    break;
  case 0x59:
    pcVar6 = "pikemen";
    uVar5 = 7;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "pikeman";
    }
    goto LAB_14134674f;
  case 0x5a:
    FUN_140070f00(param_1,"Pikemaster",10);
    break;
  case 0x5b:
    pcVar6 = "bowmen";
    uVar5 = 6;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "bowman";
    }
    goto LAB_14134674f;
  case 0x5c:
    pcVar6 = "Elite Bowmen";
    uVar5 = 0xc;
    param_2 = param_1;
    if (param_7 == '\0') {
      pcVar6 = "Elite Bowman";
    }
    goto LAB_14134674f;
  case 0x5d:
    FUN_140070f00(param_1,"blowgunner",10);
    break;
  case 0x5e:
    FUN_140070f00(param_1,"Master Blowgunner",0x11);
    break;
  case 0x5f:
    FUN_140070f00(param_1,"lasher",6);
    break;
  case 0x60:
    FUN_140070f00(param_1,"Master Lasher",0xd);
    break;
  case 0x61:
    FUN_140070f00(param_1,"recruit",7);
    break;
  case 0x62:
    uVar5 = 7;
    pcVar6 = "hunting";
    goto LAB_14134674f;
  case 99:
    uVar5 = 3;
    pcVar6 = "war";
    goto LAB_14134674f;
  case 100:
    FUN_140070f00(param_1,"Master Thief",0xc);
    break;
  case 0x65:
    FUN_140070f00(param_1,"thief",5);
    break;
  case 0x67:
    if (param_6 == -1) {
      if (((-1 < param_4) && (uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
         (lVar9 = uVar8 * 8, *(longlong *)(*(longlong *)(lVar9 + _DAT_14250eee8) + 0xd0) != 0)) {
        if (param_7 == '\0') {
          if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
          pcVar6 = (char *)(*(longlong *)(_DAT_14250eee8 + lVar9) + 0xc0);
        }
        else {
          pcVar6 = (char *)(*(longlong *)(_DAT_14250eee8 + lVar9) + 0xe0);
        }
        goto LAB_1413466c9;
      }
LAB_141346424:
      if (param_7 == '\0') {
        pcVar6 = "child";
        uVar5 = 5;
        param_2 = param_1;
      }
      else {
        uVar5 = 8;
        pcVar6 = "children";
        param_2 = param_1;
      }
      goto LAB_14134674f;
    }
    if ((param_4 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8)) {
      if (param_4 < 0) goto LAB_141346424;
    }
    else if (((-1 < param_6) &&
             (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8),
             lVar2 = *(longlong *)(lVar9 + 0x178),
             uVar7 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3))) &&
            (*(longlong *)(*(longlong *)(lVar2 + uVar7 * 8) + 0x110) != 0)) {
      if (param_7 == '\0') {
        if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) ||
           (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), lVar2 = *(longlong *)(lVar9 + 0x178),
           (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3) <= uVar7)) goto LAB_141346725;
        pcVar6 = (char *)(*(longlong *)(lVar2 + uVar7 * 8) + 0x100);
      }
      else {
        pcVar6 = (char *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(_DAT_14250eee8 + uVar8 * 8) + 0x178) +
                           uVar7 * 8) + 0x120);
      }
      goto LAB_1413466c9;
    }
    if (((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) ||
       (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0xd0) == 0))
    goto LAB_141346424;
    if (-1 < param_4) {
      if (param_7 == '\0') {
        if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
        pcVar6 = (char *)(lVar9 + 0xc0);
      }
      else {
        pcVar6 = (char *)(lVar9 + 0xe0);
      }
      goto LAB_1413466c9;
    }
LAB_141346725:
    *param_5 = 1;
    goto LAB_141346754;
  case 0x68:
    if (param_6 == -1) {
      if (((-1 < param_4) && (uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
         (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0x90) != 0)) {
LAB_1413466a8:
        if (param_7 == '\0') {
          if ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8) goto LAB_141346725;
          pcVar6 = (char *)(lVar9 + 0x80);
        }
        else {
          pcVar6 = (char *)(lVar9 + 0xa0);
        }
LAB_1413466c9:
        if (param_1 != pcVar6) {
          pcVar1 = pcVar6 + 0x10;
          if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
            pcVar6 = *(char **)pcVar6;
          }
          FUN_140070f00(param_1,pcVar6,*(undefined8 *)pcVar1);
        }
        if ((*(longlong *)(param_1 + 0x10) != 0) && (param_8 != '\0')) {
          uVar8 = *(ulonglong *)(param_1 + 0x18);
          pcVar6 = param_1;
          if (0xf < uVar8) {
            pcVar6 = *(char **)param_1;
          }
          if ('`' < *pcVar6) {
            pcVar6 = param_1;
            if (0xf < uVar8) {
              pcVar6 = *(char **)param_1;
            }
            if (*pcVar6 < '{') {
              pcVar6 = param_1;
              if (0xf < uVar8) {
                pcVar6 = *(char **)param_1;
              }
              *pcVar6 = *pcVar6 + -0x20;
            }
          }
        }
        goto LAB_141346725;
      }
      if (param_7 == '\0') {
        uVar5 = 4;
        pcVar6 = "baby";
        param_2 = param_1;
      }
      else {
        uVar5 = 6;
        pcVar6 = "babies";
        param_2 = param_1;
      }
    }
    else {
      if ((param_4 < 0) || ((ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar8)) {
        if (-1 < param_4) goto LAB_14134667e;
      }
      else {
        if (((-1 < param_6) &&
            (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), lVar2 = *(longlong *)(lVar9 + 0x178)
            , uVar7 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar2 >> 3))) &&
           (*(longlong *)(*(longlong *)(lVar2 + uVar7 * 8) + 0xd0) != 0)) {
          FUN_140146540(0x14250eec8,param_1,param_4,param_6,(param_7 != '\0') + '\x06',param_8);
          *param_5 = 1;
          goto LAB_141346754;
        }
LAB_14134667e:
        if ((uVar8 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) &&
           (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar8 * 8), *(longlong *)(lVar9 + 0x90) != 0)) {
          if (param_4 < 0) goto LAB_141346725;
          goto LAB_1413466a8;
        }
      }
      if (param_7 == '\0') {
        uVar5 = 4;
        pcVar6 = "baby";
        param_2 = param_1;
      }
      else {
        uVar5 = 6;
        pcVar6 = "babies";
        param_2 = param_1;
      }
    }
    goto LAB_14134674f;
  case 0x69:
    FUN_140070f00(param_1,"drunk",5);
    break;
  case 0x6a:
    FUN_140070f00(param_1,"monster slayer",0xe);
    break;
  case 0x6b:
    FUN_140070f00(param_1,"scout",5);
    break;
  case 0x6c:
    FUN_140070f00(param_1,"beast hunter",0xc);
    break;
  case 0x6d:
    FUN_140070f00(param_1,"snatcher",8);
    break;
  case 0x6e:
    pcVar6 = "mercenary";
    if (param_7 == '\0') {
      pcVar6 = "mercenaries";
    }
    uVar5 = 9;
    param_2 = param_1;
    if (param_7 == '\0') {
      uVar5 = 0xb;
    }
LAB_14134674f:
    FUN_140070f00(param_2,pcVar6,uVar5);
LAB_141346754:
    bVar3 = false;
    break;
  case 0x6f:
    FUN_140070f00(param_1,"gelder",6);
    break;
  case 0x70:
    FUN_140070f00(param_1,"performer",9);
    break;
  case 0x71:
    FUN_140070f00(param_1,"poet",4);
    break;
  case 0x72:
    FUN_140070f00(param_1,"bard",4);
    break;
  case 0x73:
    FUN_140070f00(param_1,"dancer",6);
    break;
  case 0x74:
    FUN_140070f00(param_1,"sage",4);
    break;
  case 0x75:
    FUN_140070f00(param_1,"scholar",7);
    break;
  case 0x76:
    FUN_140070f00(param_1,"philosopher",0xb);
    break;
  case 0x77:
    FUN_140070f00(param_1,"mathematician",0xd);
    break;
  case 0x78:
    FUN_140070f00(param_1,"historian",9);
    break;
  case 0x79:
    FUN_140070f00(param_1,"astronomer",10);
    break;
  case 0x7a:
    FUN_140070f00(param_1,"naturalist",10);
    break;
  case 0x7b:
    FUN_140070f00(param_1,"chemist",7);
    break;
  case 0x7c:
    FUN_140070f00(param_1,"geographer",10);
    break;
  case 0x7d:
    FUN_140070f00(param_1,"scribe",6);
    break;
  case 0x7e:
    FUN_140070f00(param_1,"papermaker",10);
    break;
  case 0x7f:
    FUN_140070f00(param_1,"bookbinder",10);
    break;
  case 0x80:
    FUN_140070f00(param_1,"tavern keeper",0xd);
    break;
  case 0x81:
    FUN_140070f00(param_1,"criminal",8);
    break;
  case 0x82:
    FUN_140070f00(param_1,"peddler",7);
    break;
  case 0x83:
    FUN_140070f00(param_1,"prophet",7);
    break;
  case 0x84:
    FUN_140070f00(param_1,"pilgrim",7);
    break;
  case 0x85:
    FUN_140070f00(param_1,"monk",4);
    break;
  case 0x86:
    FUN_140070f00(param_1,"messenger",9);
  }
override_jmp_1413455f3_case_102:
  if ((param_7 != '\0') && (bVar3)) {
    FUN_140071040(param_1,"s",1);
  }
  if (param_8 != '\0') {
    FUN_1405468a0(param_1);
  }
  return;
}


/* reference PE:6aea05a1:02734000; deity-domain-article; RVA 0x76faf0..0x76fc04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_deity_domain_article(short param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0xf;
  pppuStack_38 = (undefined8 ****)0x0;
  if ((int)param_1 - 0x13U < 0x6c) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_14076fc0c)[(int)((int)param_1 - 0x13U)]) {
    case 0:
      FUN_140070f00(param_2,"the ",4);
      goto LAB_14076fb7d;
    }
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
LAB_14076fb7d:
  image_deity_domain_nouns(param_1,&pppuStack_38);
  ppppuVar3 = &pppuStack_38;
  if (0xf < uStack_20) {
    ppppuVar3 = (undefined8 ****)pppuStack_38;
  }
  FUN_140071040(param_2,ppppuVar3,uStack_28);
  if (0xf < uStack_20) {
    uVar4 = uStack_20 + 1;
    ppppuVar3 = (undefined8 ****)pppuStack_38;
    if (0xfff < uVar4) {
      uVar4 = uStack_20 + 0x28;
      ppppuVar3 = (undefined8 ****)pppuStack_38[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar3))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar3,uVar4);
  }
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* reference PE:6aea05a1:02734000; deity-domain-nouns; RVA 0x76fc80..0x770764 */

void image_deity_domain_nouns(ushort param_1,undefined8 param_2)

{
  if (param_1 < 0x82) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      FUN_140070f00(param_2,"agriculture",0xb);
      return;
    case 1:
      FUN_140070f00(param_2,"animals",7);
      return;
    case 2:
      FUN_140070f00(param_2,"art",3);
      return;
    case 3:
      FUN_140070f00(param_2,"balance",7);
      return;
    case 4:
      FUN_140070f00(param_2,"beauty",6);
      return;
    case 5:
      FUN_140070f00(param_2,"birth",5);
      return;
    case 6:
      FUN_140070f00(param_2,"blight",6);
      return;
    case 7:
      FUN_140070f00(param_2,"boundaries",10);
      return;
    case 8:
      FUN_140070f00(param_2,"caverns",7);
      return;
    case 9:
      FUN_140070f00(param_2,"chaos",5);
      return;
    case 10:
      FUN_140070f00(param_2,"charity",7);
      return;
    case 0xb:
      FUN_140070f00(param_2,"children",8);
      return;
    case 0xc:
      FUN_140070f00(param_2,"coasts",6);
      return;
    case 0xd:
      FUN_140070f00(param_2,"consolation",0xb);
      return;
    case 0xe:
      FUN_140070f00(param_2,"courage",7);
      return;
    case 0xf:
      FUN_140070f00(param_2,"crafts",6);
      return;
    case 0x10:
      FUN_140070f00(param_2,"creation",8);
      return;
    case 0x11:
      FUN_140070f00(param_2,"dance",5);
      return;
    case 0x12:
      FUN_140070f00(param_2,"darkness",8);
      return;
    case 0x13:
      FUN_140070f00(param_2,"dawn",4);
      return;
    case 0x14:
      FUN_140070f00(param_2,"day",3);
      return;
    case 0x15:
      FUN_140070f00(param_2,"death",5);
      return;
    case 0x16:
      FUN_140070f00(param_2,"deformity",9);
      return;
    case 0x17:
      FUN_140070f00(param_2,"depravity",9);
      return;
    case 0x18:
      FUN_140070f00(param_2,"discipline",10);
      return;
    case 0x19:
      FUN_140070f00(param_2,"disease",7);
      return;
    case 0x1a:
      FUN_140070f00(param_2,"dreams",6);
      return;
    case 0x1b:
      FUN_140070f00(param_2,"dusk",4);
      return;
    case 0x1c:
      FUN_140070f00(param_2,"duty",4);
      return;
    case 0x1d:
      FUN_140070f00(param_2,"earth",5);
      return;
    case 0x1e:
      FUN_140070f00(param_2,"family",6);
      return;
    case 0x1f:
      FUN_140070f00(param_2,"fame",4);
      return;
    case 0x20:
      FUN_140070f00(param_2,"fate",4);
      return;
    case 0x21:
      FUN_140070f00(param_2,"fertility",9);
      return;
    case 0x22:
      FUN_140070f00(param_2,"festivals",9);
      return;
    case 0x23:
      FUN_140070f00(param_2,"fire",4);
      return;
    case 0x24:
      FUN_140070f00(param_2,"fish",4);
      return;
    case 0x25:
      FUN_140070f00(param_2,"fishing",7);
      return;
    case 0x26:
      FUN_140070f00(param_2,"food",4);
      return;
    case 0x27:
      FUN_140070f00(param_2,"forgiveness",0xb);
      return;
    case 0x28:
      FUN_140070f00(param_2,"fortresses",10);
      return;
    case 0x29:
      FUN_140070f00(param_2,"freedom",7);
      return;
    case 0x2a:
      FUN_140070f00(param_2,"gambling",8);
      return;
    case 0x2b:
      FUN_140070f00(param_2,"games",5);
      return;
    case 0x2c:
      FUN_140070f00(param_2,"generosity",10);
      return;
    case 0x2d:
      FUN_140070f00(param_2,"happiness",9);
      return;
    case 0x2e:
      FUN_140070f00(param_2,"healing",7);
      return;
    case 0x2f:
      FUN_140070f00(param_2,"hospitality",0xb);
      return;
    case 0x30:
      FUN_140070f00(param_2,"hunting",7);
      return;
    case 0x31:
      FUN_140070f00(param_2,"inspiration",0xb);
      return;
    case 0x32:
      FUN_140070f00(param_2,"jealousy",8);
      return;
    case 0x33:
      FUN_140070f00(param_2,"jewels",6);
      return;
    case 0x34:
      FUN_140070f00(param_2,"justice",7);
      return;
    case 0x35:
      FUN_140070f00(param_2,"labor",5);
      return;
    case 0x36:
      FUN_140070f00(param_2,"lakes",5);
      return;
    case 0x37:
      FUN_140070f00(param_2,"laws",4);
      return;
    case 0x38:
      FUN_140070f00(param_2,"lies",4);
      return;
    case 0x39:
      FUN_140070f00(param_2,"light",5);
      return;
    case 0x3a:
      FUN_140070f00(param_2,"lightning",9);
      return;
    case 0x3b:
      FUN_140070f00(param_2,"longevity",9);
      return;
    case 0x3c:
      FUN_140070f00(param_2,"love",4);
      return;
    case 0x3d:
      FUN_140070f00(param_2,"loyalty",7);
      return;
    case 0x3e:
      FUN_140070f00(param_2,"luck",4);
      return;
    case 0x3f:
      FUN_140070f00(param_2,"lust",4);
      return;
    case 0x40:
      FUN_140070f00(param_2,"marriage",8);
      return;
    case 0x41:
      FUN_140070f00(param_2,"mercy",5);
      return;
    case 0x42:
      FUN_140070f00(param_2,"metals",6);
      return;
    case 0x43:
      FUN_140070f00(param_2,"minerals",8);
      return;
    case 0x44:
      FUN_140070f00(param_2,"misery",6);
      return;
    case 0x45:
      FUN_140070f00(param_2,"mist",4);
      return;
    case 0x46:
      FUN_140070f00(param_2,"moon",4);
      return;
    case 0x47:
      FUN_140070f00(param_2,"mountains",9);
      return;
    case 0x48:
      FUN_140070f00(param_2,"muck",4);
      return;
    case 0x49:
      FUN_140070f00(param_2,"murder",6);
      return;
    case 0x4a:
      FUN_140070f00(param_2,"music",5);
      return;
    case 0x4b:
      FUN_140070f00(param_2,"nature",6);
      return;
    case 0x4c:
      FUN_140070f00(param_2,"night",5);
      return;
    case 0x4d:
      FUN_140070f00(param_2,"nightmares",10);
      return;
    case 0x4e:
      FUN_140070f00(param_2,"oaths",5);
      return;
    case 0x4f:
      FUN_140070f00(param_2,"oceans",6);
      return;
    case 0x50:
      FUN_140070f00(param_2,"order",5);
      return;
    case 0x51:
      FUN_140070f00(param_2,"painting",8);
      return;
    case 0x52:
      FUN_140070f00(param_2,"peace",5);
      return;
    case 0x53:
      FUN_140070f00(param_2,"persuasion",10);
      return;
    case 0x54:
      FUN_140070f00(param_2,"plants",6);
      return;
    case 0x55:
      FUN_140070f00(param_2,"poetry",6);
      return;
    case 0x56:
      FUN_140070f00(param_2,"pregnancy",9);
      return;
    case 0x57:
      FUN_140070f00(param_2,"rain",4);
      return;
    case 0x58:
      FUN_140070f00(param_2,"rainbows",8);
      return;
    case 0x59:
      FUN_140070f00(param_2,"rebirth",7);
      return;
    case 0x5a:
      FUN_140070f00(param_2,"revelry",7);
      return;
    case 0x5b:
      FUN_140070f00(param_2,"revenge",7);
      return;
    case 0x5c:
      FUN_140070f00(param_2,"rivers",6);
      return;
    case 0x5d:
      FUN_140070f00(param_2,"rulership",9);
      return;
    case 0x5e:
      FUN_140070f00(param_2,"rumors",6);
      return;
    case 0x5f:
      FUN_140070f00(param_2,"sacrifice",9);
      return;
    case 0x60:
      FUN_140070f00(param_2,"salt",4);
      return;
    case 0x61:
      FUN_140070f00(param_2,"scholarship",0xb);
      return;
    case 0x62:
      FUN_140070f00(param_2,"seasons",7);
      return;
    case 99:
      FUN_140070f00(param_2,"silence",7);
      return;
    case 100:
      FUN_140070f00(param_2,"sky",3);
      return;
    case 0x65:
      FUN_140070f00(param_2,"song",4);
      return;
    case 0x66:
      FUN_140070f00(param_2,"speech",6);
      return;
    case 0x67:
      FUN_140070f00(param_2,"stars",5);
      return;
    case 0x68:
      FUN_140070f00(param_2,"storms",6);
      return;
    case 0x69:
      FUN_140070f00(param_2,"strength",8);
      return;
    case 0x6a:
      FUN_140070f00(param_2,"suicide",7);
      return;
    case 0x6b:
      FUN_140070f00(param_2,"sun",3);
      return;
    case 0x6c:
      FUN_140070f00(param_2,"theft",5);
      return;
    case 0x6d:
      FUN_140070f00(param_2,"thralldom",9);
      return;
    case 0x6e:
      FUN_140070f00(param_2,"thunder",7);
      return;
    case 0x6f:
      FUN_140070f00(param_2,"torture",7);
      return;
    case 0x70:
      FUN_140070f00(param_2,"trade",5);
      return;
    case 0x71:
      FUN_140070f00(param_2,"travelers",9);
      return;
    case 0x72:
      FUN_140070f00(param_2,"treachery",9);
      return;
    case 0x73:
      FUN_140070f00(param_2,"trees",5);
      return;
    case 0x74:
      FUN_140070f00(param_2,"trickery",8);
      return;
    case 0x75:
      FUN_140070f00(param_2,"truth",5);
      return;
    case 0x76:
      FUN_140070f00(param_2,"twilight",8);
      return;
    case 0x77:
      FUN_140070f00(param_2,"valor",5);
      return;
    case 0x78:
      FUN_140070f00(param_2,"victory",7);
      return;
    case 0x79:
      FUN_140070f00(param_2,"volcanos",8);
      return;
    case 0x7a:
      FUN_140070f00(param_2,"war",3);
      return;
    case 0x7b:
      FUN_140070f00(param_2,"water",5);
      return;
    case 0x7c:
      FUN_140070f00(param_2,"wealth",6);
      return;
    case 0x7d:
      FUN_140070f00(param_2,"weather",7);
      return;
    case 0x7e:
      FUN_140070f00(param_2,"wind",4);
      return;
    case 0x7f:
      FUN_140070f00(param_2,"wisdom",6);
      return;
    case 0x80:
      FUN_140070f00(param_2,"writing",7);
      return;
    case 0x81:
      FUN_140070f00(param_2,"youth",5);
      return;
    }
  }
  FUN_140070f00(param_2,"no sphere",9);
  return;
}


