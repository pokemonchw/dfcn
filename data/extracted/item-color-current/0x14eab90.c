
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414eab90(undefined8 param_1,undefined8 *param_2,short param_3,int param_4,uint param_5,
                  char param_6,short param_7)

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
            supplier_1415530d0(ppppuVar6,uVar9);
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

