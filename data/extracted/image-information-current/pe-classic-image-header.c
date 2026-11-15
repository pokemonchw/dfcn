/* classic PE:6aea11a5:0272d000; image-header; RVA 0x202900..0x202e88 */

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
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_178;
  FUN_1401fdf30();
  FUN_140145aa0(param_1 + 0x1d0);
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
    FUN_140070e90(param_1 + 8,"The symbol of ",0xe);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0xf;
    pppuStack_f8 = (undefined8 ****)0x0;
    FUN_140aaafe0(*(longlong *)(param_1 + 0x468) + 0x20,&pppuStack_f8,1,0);
    ppppuVar4 = &pppuStack_f8;
    if (0xf < uStack_e0) {
      ppppuVar4 = (undefined8 ****)pppuStack_f8;
    }
    FUN_140070fd0(param_1 + 8,ppppuVar4,uStack_e8);
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
      load_supplier_0x154de20(ppppuVar4,uVar5);
    }
  }
  else {
    puVar1 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x450) == 0) {
      if (*(longlong *)(param_1 + 0x458) == 0) {
        if (*(longlong *)(param_1 + 0x460) == 0) {
          if (*(longlong *)(param_1 + 0x478) != 0) {
            FUN_140070e90(puVar1,"Image information for ",0x16);
            plVar8 = *(longlong **)(param_1 + 0x478);
            plVar6 = plVar8 + 2;
            if (0xf < (ulonglong)plVar8[3]) {
              plVar8 = (longlong *)*plVar8;
            }
            FUN_140070fd0(puVar1,plVar8,*plVar6);
            goto LAB_140202d8d;
          }
          uVar9 = 0x11;
          pcVar7 = "Image information";
        }
        else {
          uVar9 = 0x1f;
          pcVar7 = "Image information for engraving";
        }
        FUN_140070e90(puVar1,pcVar7,uVar9);
      }
      else {
        FUN_140070e90(puVar1,"Image information for ",0x16);
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
          FUN_140070e90(&uStack_d0,plVar6,*(undefined8 *)(lVar2 + 0x20));
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
        image_job_header(0x142402530,&pppuStack_f8,uStack_d8,uVar10);
        if (0 < *(short *)(lVar2 + 0x52)) {
          FUN_140070fd0(&pppuStack_f8," (",2);
          FUN_140542fb0((int)*(short *)(lVar2 + 0x52),&pppuStack_f8);
          FUN_140070fd0(&pppuStack_f8,")",1);
        }
        ppppuVar4 = &pppuStack_f8;
        if (0xf < uStack_e0) {
          ppppuVar4 = (undefined8 ****)pppuStack_f8;
        }
        FUN_140070fd0(puVar1,ppppuVar4,uStack_e8);
        FUN_140070e10(&uStack_68);
        FUN_140070e10(&uStack_88);
        FUN_140070e10(&uStack_d0);
        FUN_140070e10(&pppuStack_f8);
      }
    }
    else {
      FUN_140070e90(puVar1,"Image information for ",0x16);
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0xf;
      pppuStack_f8 = (undefined8 ****)0x0;
      image_job_title_wrapper(*(undefined8 *)(param_1 + 0x450),&pppuStack_f8);
      ppppuVar4 = &pppuStack_f8;
      if (0xf < uStack_e0) {
        ppppuVar4 = (undefined8 ****)pppuStack_f8;
      }
      FUN_140070fd0(puVar1,ppppuVar4,uStack_e8);
      FUN_140070e10(&pppuStack_f8);
    }
  }
LAB_140202d8d:
  if (0x4e < *(ulonglong *)(param_1 + 0x18)) {
    FUN_1405445f0(param_1 + 8,0x4e);
  }
  lVar2 = *(longlong *)(param_1 + 0x470);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x468) == 0) {
      uStack_158 = 0x142510f18;
      FUN_140aa9160(param_1 + 0x208,0xffffffff,0xb,0x14250c298);
    }
    else {
      FUN_140948920(*(longlong *)(param_1 + 0x468),param_1 + 0x208);
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  else {
    if (*(char *)(lVar2 + 0xaa) == '\0') {
      if (*(longlong *)(param_1 + 0x468) == 0) {
        uStack_158 = 0x142510f18;
        FUN_140aa9160(lVar2 + 0x38,0xffffffff,0xb,0x14250c298);
      }
      else {
        FUN_140948920(*(longlong *)(param_1 + 0x468),lVar2 + 0x38);
      }
    }
    FUN_1401fd220(param_1 + 0x1d0,*(undefined8 *)(param_1 + 0x470));
    *(undefined4 *)(param_1 + 0x28) = 6;
    FUN_140211fa0(param_1);
  }
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_178);
  return;
}

