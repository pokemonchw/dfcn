/* classic PE:6aea11a5:0272d000; memorial-unit-identity; RVA 0x1344290..0x13448f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_unit_identity(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined1 auStack_c8 [32];
  char acStack_a8 [4];
  uint uStack_a4;
  longlong lStack_a0;
  int aiStack_98 [2];
  char cStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_c8;
  acStack_a8[0] = param_3;
  if (_DAT_1418b8218 - 4U < 2) {
    lVar7 = *(longlong *)(param_1 + 0xd80);
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) {
      puVar12 = (undefined8 *)(param_1 + 8);
    }
    else {
      puVar12 = (undefined8 *)(lVar7 + 0x20);
    }
    if (param_2 != puVar12) {
      puVar1 = puVar12 + 2;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      FUN_140070e90(param_2,puVar12,*puVar1);
    }
    goto LAB_1413448d1;
  }
  lVar7 = param_1 + 8;
  lStack_a0 = lVar7;
  lVar6 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
  puVar14 = (undefined4 *)0x0;
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x130) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x58);
      if (lVar6 == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      else if (*(int *)(lVar6 + 0x30) == -1) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = (undefined4 *)FUN_140073b30(0x142504068);
      }
    }
    if (puVar14 != (undefined4 *)0x0) {
      lVar7 = FUN_140c4f000(puVar14);
      lStack_a0 = lVar7;
    }
  }
  param_2[2] = 0;
  puVar12 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar12 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar12 = 0;
  if (*(char *)(lVar7 + 0x72) != '\0') {
    if (_DAT_1418b8218 == 1) {
      if ((_DAT_142401450 - _DAT_142401448 >> 3 != 0) && (_DAT_142401490 != 0)) {
        uStack_a4 = uStack_a4 & 0xffffff00;
        lVar6 = FUN_140b67b90(0x142516038,*(undefined4 *)(_DAT_142401490 + 0xc30),
                              _DAT_142401490 + 0x1274);
        if (lVar6 != 0) {
          if ((((*(int *)(param_1 + 0xc30) == -1) ||
               (lVar8 = *(longlong *)(lVar6 + 0x130), lVar8 == 0)) ||
              (*(longlong *)(lVar8 + 0x60) == 0)) ||
             (lVar8 = FUN_1400bb380(*(int *)(param_1 + 0xc30),*(undefined8 *)(lVar8 + 0x60)),
             lVar8 == 0)) {
LAB_141344457:
            cVar13 = (char)uStack_a4;
LAB_14134445b:
            if (((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar6 + 0x130) != 0)) &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x60), lVar6 != 0)) {
              FUN_1400bc1a0(aiStack_98,lVar6 + 0x48);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              if (iVar5 != -1) goto LAB_1413444a1;
            }
            if (cVar13 == '\0') goto LAB_1413444d2;
          }
          else {
            if ((*(byte *)(lVar8 + 4) & 1) == 0) {
              if (puVar14 == (undefined4 *)0x0) goto LAB_141344457;
              FUN_1400bc1a0(aiStack_98,lVar8 + 8,*puVar14);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              cVar13 = (char)uStack_a4;
              if (iVar5 != -1) {
                cVar13 = '\x01';
              }
              goto LAB_14134445b;
            }
LAB_1413444a1:
            lVar7 = param_1 + 8;
          }
          workshop_memorial_language_name(lVar7,param_2);
          FUN_140070fd0(param_2,", ",2);
        }
      }
    }
    else {
      bVar4 = false;
      if ((((_DAT_1418b821c == 0) && (puVar14 != (undefined4 *)0x0)) &&
          (*(longlong *)(_DAT_1423b6568 + 0x1358) != 0)) &&
         ((lVar7 = FUN_1400bb380(*(undefined4 *)(param_1 + 0xc30)), lVar7 != 0 &&
          ((*(byte *)(lVar7 + 4) & 8) != 0)))) {
        bVar4 = true;
        FUN_140070fd0(param_2,"\"",1);
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0xf;
      pppuStack_68 = (undefined8 ****)0x0;
      workshop_memorial_language_name(lStack_a0,&pppuStack_68);
      ppppuVar9 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar9 = (undefined8 ****)pppuStack_68;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_58);
      if (bVar4) {
        FUN_140070fd0(param_2,"\"",1);
      }
      FUN_140070fd0(param_2,", ",2);
      FUN_140070e10(&pppuStack_68);
    }
  }
LAB_1413444d2:
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  pppuStack_88 = (undefined8 ****)0x0;
  FUN_141342fe0(param_1,&pppuStack_88,1);
  ppppuVar9 = &pppuStack_88;
  if (0xf < uStack_70) {
    ppppuVar9 = (undefined8 ****)pppuStack_88;
  }
  FUN_140070fd0(param_2,ppppuVar9,uStack_78);
  if (((acStack_a8[0] != '\0') && (sVar2 = *(short *)(param_1 + 0xa4), -1 < sVar2)) &&
     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3))) {
    lVar7 = *(longlong *)(_DAT_142508de8 + (longlong)sVar2 * 8);
    if ((*(int *)(lVar7 + 0x1b0) < 9) || ((*(byte *)(*(longlong *)(lVar7 + 0x1a8) + 8) & 4) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(char *)(param_1 + 0x12e) == '\0') {
        FUN_141399160(param_1);
        FUN_140070fd0(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
        FUN_1400bb140(param_2,0xc);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
      }
      if (*(char *)(param_1 + 0x12e) == '\x01') {
        FUN_141399160(param_1);
        FUN_140070fd0(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
        FUN_1400bb140(param_2,0xb);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) goto LAB_141344859;
  FUN_140070fd0(param_2," (",2);
  acStack_a8[1] = 0;
  if (7 < *(uint *)(param_1 + 0x138)) {
override_jmp_14134474c_case_0:
    pcVar10 = "Semi-Wild";
    goto LAB_141344838;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x138)) {
  case 0:
    goto override_jmp_14134474c_case_0;
  case 1:
    lVar7 = 7;
    pcVar10 = "Trained";
    break;
  case 2:
    pcVar10 = "-Trained-";
    goto LAB_141344838;
  case 3:
    pcVar10 = "+Trained+";
    goto LAB_141344838;
  case 4:
    pcVar10 = "*Trained*";
LAB_141344838:
    lVar7 = 9;
    break;
  case 5:
    acStack_a8[0] = -0x10;
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140070fd0(param_2,acStack_a8);
    FUN_140070fd0(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 6:
    acStack_a8[0] = '\x0f';
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140070fd0(param_2,acStack_a8);
    FUN_140070fd0(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 7:
    lVar7 = 4;
    pcVar10 = "Tame";
  }
  FUN_140070fd0(param_2,pcVar10,lVar7);
  FUN_140070fd0(param_2,")",1);
LAB_141344859:
  if (0xf < uStack_70) {
    uVar11 = uStack_70 + 1;
    ppppuVar9 = (undefined8 ****)pppuStack_88;
    if (0xfff < uVar11) {
      uVar11 = uStack_70 + 0x28;
      ppppuVar9 = (undefined8 ****)pppuStack_88[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar9))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    workshop_supplier_0x154de20(ppppuVar9,uVar11);
  }
LAB_1413448d1:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}

