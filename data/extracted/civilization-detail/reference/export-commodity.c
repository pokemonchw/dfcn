/* Original PE owner: reference	export-commodity	0x14092dff0	0x14092f450 */

/* WARNING: Removing unreachable block (ram,0x00014092e39d) */
/* WARNING: Removing unreachable block (ram,0x00014092e13b) */
/* WARNING: Removing unreachable block (ram,0x00014092e80c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_export_commodity(longlong param_1,ushort param_2,short param_3,undefined8 *param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_f8 [32];
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_f8;
  lVar22 = (longlong)param_3;
  uStack_80 = 0;
  uVar20 = 0;
  lStack_78 = 0;
  uVar23 = 0xf;
  uStack_70 = 0xf;
  pppuStack_88 = (undefined8 ****)0x0;
  param_4[2] = 0;
  puVar9 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar9 = (undefined8 *)*param_4;
  }
  *(undefined1 *)puVar9 = 0;
  if (0x3f < param_2) goto LAB_14092f2e8;
                    /* WARNING: Switch is manually overridden */
  switch(param_2) {
  case 0:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x418) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x400);
    uVar13 = 0x37;
    break;
  case 1:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x478) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x460);
    uVar13 = 0x3a;
    break;
  case 2:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4a8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x490);
    uVar13 = 0x3a;
    break;
  case 3:
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x730) + lVar22 * 4);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x718) + lVar22 * 2);
    lStack_78 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppuStack_88._0_1_ = 0;
    if ((((ushort)(sVar3 - 0xdbU) < 200) &&
        (lVar22 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar22 != 0)) &&
       ((iVar12 != -1 && (iVar21 = (int)lVar22 + -1, uVar14 = uVar20, -1 < iVar21)))) {
      do {
        iVar11 = iVar21 + (int)uVar14 >> 1;
        lVar22 = *(longlong *)(_DAT_14251c198 + (longlong)iVar11 * 8);
        if (*(int *)(lVar22 + 0xe0) == iVar12) {
          if ((lVar22 != 0) && (*(char *)(lVar22 + 0xaa) != '\0')) {
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0xf;
            pppuStack_68 = (undefined8 ****)0x0;
            if ((*(longlong *)(lVar22 + 0x130) == 0) ||
               (((lVar18 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + 0x58), lVar18 == 0 ||
                 (*(int *)(lVar18 + 0x30) == -1)) ||
                (lVar18 = FUN_140073ba0(0x14250a168), lVar18 == 0)))) {
              lVar22 = lVar22 + 0x38;
            }
            else {
              lVar22 = FUN_140c521e0(lVar18);
            }
            if ((lVar22 != 0) && (*(char *)(lVar22 + 0x72) != '\0')) {
              FUN_140aae180(lVar22,&pppuStack_68,1,0);
              uVar20 = uStack_58;
              uVar23 = uStack_50;
            }
            ppppuVar19 = &pppuStack_68;
            if (0xf < uVar23) {
              ppppuVar19 = (undefined8 ****)pppuStack_68;
            }
            FUN_140071040(&pppuStack_88,ppppuVar19,uVar20);
            FUN_140071040(&pppuStack_88,"\'s ",3);
            if (0xf < uStack_50) {
              uVar20 = uStack_50 + 1;
              ppppuVar19 = (undefined8 ****)pppuStack_68;
              if (0xfff < uVar20) {
                uVar20 = uStack_50 + 0x28;
                ppppuVar19 = (undefined8 ****)pppuStack_68[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar19))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              mission_supplier_1415530d0(ppppuVar19,uVar20);
            }
          }
          break;
        }
        iVar8 = iVar11 + -1;
        if (*(int *)(lVar22 + 0xe0) < iVar12) {
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar8 = iVar21;
        }
        iVar21 = iVar8;
      } while ((int)uVar14 <= iVar21);
    }
    lVar22 = FUN_1414c6fe0(0x1423f3970,sVar3,iVar12);
    if (lVar22 == 0) {
      pcVar16 = "unknown material";
      uVar17 = 0x10;
    }
    else {
      if (*(longlong *)(lVar22 + 0x530) != 0) {
        plVar15 = (longlong *)(lVar22 + 0x520);
        if (0xf < *(ulonglong *)(lVar22 + 0x538)) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_140071040(&pppuStack_88,plVar15,*(undefined8 *)(lVar22 + 0x530));
        FUN_140071040(&pppuStack_88," ",1);
      }
      pcVar16 = (char *)(lVar22 + 0x178);
      uVar17 = *(undefined8 *)(lVar22 + 0x188);
      if (0xf < *(ulonglong *)(lVar22 + 400)) {
        pcVar16 = *(char **)pcVar16;
      }
    }
    FUN_140071040(&pppuStack_88,pcVar16,uVar17);
    ppppuVar19 = &pppuStack_88;
    if (0xf < uStack_70) {
      ppppuVar19 = (undefined8 ****)pppuStack_88;
    }
    FUN_140071040(param_4,ppppuVar19,lStack_78);
    FUN_140071040(param_4," Crafts",7);
    goto LAB_14092f2e8;
  case 4:
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x508) + lVar22 * 4);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x4f0) + lVar22 * 2);
    lStack_78 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppuStack_88._0_1_ = 0;
    if ((((ushort)(sVar3 - 0xdbU) < 200) &&
        (lVar22 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar22 != 0)) &&
       ((iVar12 != -1 && (iVar21 = (int)lVar22 + -1, uVar14 = uVar20, -1 < iVar21)))) {
      do {
        iVar11 = iVar21 + (int)uVar14 >> 1;
        lVar22 = *(longlong *)(_DAT_14251c198 + (longlong)iVar11 * 8);
        if (*(int *)(lVar22 + 0xe0) == iVar12) {
          if ((lVar22 != 0) && (*(char *)(lVar22 + 0xaa) != '\0')) {
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_50 = 0xf;
            pppuStack_68 = (undefined8 ****)0x0;
            if ((*(longlong *)(lVar22 + 0x130) == 0) ||
               (((lVar18 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + 0x58), lVar18 == 0 ||
                 (*(int *)(lVar18 + 0x30) == -1)) ||
                (lVar18 = FUN_140073ba0(0x14250a168), lVar18 == 0)))) {
              lVar22 = lVar22 + 0x38;
            }
            else {
              lVar22 = FUN_140c521e0(lVar18);
            }
            if ((lVar22 != 0) && (*(char *)(lVar22 + 0x72) != '\0')) {
              FUN_140aae180(lVar22,&pppuStack_68,1,0);
              uVar20 = uStack_58;
              uVar23 = uStack_50;
            }
            ppppuVar19 = &pppuStack_68;
            if (0xf < uVar23) {
              ppppuVar19 = (undefined8 ****)pppuStack_68;
            }
            FUN_140071040(&pppuStack_88,ppppuVar19,uVar20);
            FUN_140071040(&pppuStack_88,"\'s ",3);
            if (0xf < uStack_50) {
              uVar20 = uStack_50 + 1;
              ppppuVar19 = (undefined8 ****)pppuStack_68;
              if (0xfff < uVar20) {
                uVar20 = uStack_50 + 0x28;
                ppppuVar19 = (undefined8 ****)pppuStack_68[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar19))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              mission_supplier_1415530d0(ppppuVar19,uVar20);
            }
          }
          break;
        }
        iVar8 = iVar11 + -1;
        if (*(int *)(lVar22 + 0xe0) < iVar12) {
          uVar14 = (ulonglong)(iVar11 + 1);
          iVar8 = iVar21;
        }
        iVar21 = iVar8;
      } while ((int)uVar14 <= iVar21);
    }
    lVar22 = FUN_1414c6fe0(0x1423f3970,sVar3,iVar12);
    if (lVar22 == 0) {
      pcVar16 = "unknown material";
      uVar17 = 0x10;
    }
    else {
      if (*(longlong *)(lVar22 + 0x530) != 0) {
        plVar15 = (longlong *)(lVar22 + 0x520);
        if (0xf < *(ulonglong *)(lVar22 + 0x538)) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_140071040(&pppuStack_88,plVar15,*(undefined8 *)(lVar22 + 0x530));
        FUN_140071040(&pppuStack_88," ",1);
      }
      pcVar16 = (char *)(lVar22 + 0xb8);
      uVar17 = *(undefined8 *)(lVar22 + 200);
      if (0xf < *(ulonglong *)(lVar22 + 0xd0)) {
        pcVar16 = *(char **)pcVar16;
      }
    }
    FUN_140071040(&pppuStack_88,pcVar16,uVar17);
    ppppuVar19 = &pppuStack_88;
    if (0xf < uStack_70) {
      ppppuVar19 = (undefined8 ****)pppuStack_88;
    }
    FUN_140071040(param_4,ppppuVar19,lStack_78);
    FUN_140071040(param_4," Logs",5);
    goto LAB_14092f2e8;
  case 5:
    lVar18 = *(longlong *)(param_1 + 0x520);
    uVar13 = 0;
    goto LAB_14092e60a;
  case 6:
    lVar18 = *(longlong *)(param_1 + 0x550);
    uVar13 = 1;
    goto LAB_14092e60a;
  case 7:
    lVar18 = *(longlong *)(param_1 + 0x550);
    uVar13 = 0x2c;
    goto LAB_14092e60a;
  case 8:
    lVar18 = *(longlong *)(param_1 + 0x538);
    uVar13 = 2;
    goto LAB_14092e60a;
  case 9:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0xac0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0xaa8);
    uVar13 = 0x35;
    break;
  case 10:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 1000) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x3d0);
    uVar13 = 0x2d;
    break;
  case 0xb:
    lVar18 = *(longlong *)(param_1 + 0x148);
    goto LAB_14092e6df;
  case 0xc:
    lVar18 = *(longlong *)(param_1 + 0x160);
    goto LAB_14092e6df;
  case 0xd:
    lVar18 = *(longlong *)(param_1 + 400);
    uVar13 = 0x27;
    goto LAB_14092e6e4;
  case 0xe:
    lVar18 = *(longlong *)(param_1 + 0x220);
    uVar13 = 0x44;
    goto LAB_14092e6e4;
  case 0xf:
    lVar18 = *(longlong *)(param_1 + 0x130);
LAB_14092e6df:
    uVar13 = 0x18;
    goto LAB_14092e6e4;
  case 0x10:
    lVar18 = *(longlong *)(param_1 + 0x178);
    uVar13 = 0x19;
    goto LAB_14092e6e4;
  case 0x11:
    lVar18 = *(longlong *)(param_1 + 0x1a8);
    uVar13 = 0x1c;
    goto LAB_14092e6e4;
  case 0x12:
    lVar18 = *(longlong *)(param_1 + 0x1c0);
    uVar13 = 0x1d;
    goto LAB_14092e6e4;
  case 0x13:
    lVar18 = *(longlong *)(param_1 + 0x1d8);
    uVar13 = 0x1a;
    goto LAB_14092e6e4;
  case 0x14:
    lVar18 = *(longlong *)(param_1 + 0x1f0);
    uVar13 = 0x3c;
    goto LAB_14092e6e4;
  case 0x15:
    lVar18 = *(longlong *)(param_1 + 0x208);
    uVar13 = 0x1b;
    goto LAB_14092e6e4;
  case 0x16:
    lVar18 = *(longlong *)(param_1 + 0x238);
    uVar13 = 0xe;
    goto LAB_14092e6e4;
  case 0x17:
    lVar18 = *(longlong *)(param_1 + 0x250);
    uVar13 = 0xd;
    goto LAB_14092e6e4;
  case 0x18:
    sVar3 = *(short *)(*(longlong *)(param_1 + 0xbe0) + lVar22 * 2);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0xb38) + lVar22 * 4);
    uVar20 = (ulonglong)sVar2;
    lStack_78 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    pppuStack_88._0_1_ = 0;
    if (sVar3 == -1) {
      if (-1 < sVar2) goto LAB_14092e89c;
    }
    else if (-1 < sVar2) {
      if (((uVar20 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar3)) &&
         (lVar18 = *(longlong *)(_DAT_14250eee8 + uVar20 * 8), lVar4 = *(longlong *)(lVar18 + 0x178)
         , (ulonglong)(longlong)sVar3 < (ulonglong)(*(longlong *)(lVar18 + 0x180) - lVar4 >> 3))) {
        lVar18 = *(longlong *)(lVar4 + (longlong)sVar3 * 8);
        ppppuVar19 = (undefined8 ****)(lVar18 + 0x20);
        if (&pppuStack_88 != ppppuVar19) {
          if (0xf < *(ulonglong *)(lVar18 + 0x38)) {
            ppppuVar19 = (undefined8 ****)*ppppuVar19;
          }
          FUN_140070f00(&pppuStack_88,ppppuVar19,*(undefined8 *)(lVar18 + 0x30));
        }
        if (lStack_78 != 0) goto LAB_14092e8de;
      }
LAB_14092e89c:
      if (uVar20 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        lVar18 = *(longlong *)(_DAT_14250eee8 + uVar20 * 8);
        ppppuVar19 = (undefined8 ****)(lVar18 + 0x20);
        if (&pppuStack_88 != ppppuVar19) {
          if (0xf < *(ulonglong *)(lVar18 + 0x38)) {
            ppppuVar19 = (undefined8 ****)*ppppuVar19;
          }
          FUN_140070f00(&pppuStack_88,ppppuVar19,*(undefined8 *)(lVar18 + 0x30));
        }
      }
    }
LAB_14092e8de:
    ppppuVar19 = &pppuStack_88;
    if (0xf < uStack_70) {
      ppppuVar19 = (undefined8 ****)pppuStack_88;
    }
    FUN_140071040(param_4,ppppuVar19,lStack_78);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0xb38) + lVar22 * 4);
    uVar20 = (ulonglong)sVar3;
    if ((-1 < sVar3) && (uVar20 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
      lVar18 = *(longlong *)(_DAT_14250eee8 + uVar20 * 8);
      if ((*(int *)(lVar18 + 0x1b0) < 9) ||
         ((*(byte *)(*(longlong *)(lVar18 + 0x1a8) + 8) & 4) == 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        sVar3 = *(short *)(*(longlong *)(param_1 + 0xbe0) + lVar22 * 2);
        if (((uVar20 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar3)) &&
           ((ulonglong)(longlong)sVar3 <
            (ulonglong)(*(longlong *)(lVar18 + 0x180) - *(longlong *)(lVar18 + 0x178) >> 3))) {
          cVar1 = *(char *)(*(longlong *)(*(longlong *)(lVar18 + 0x178) + (longlong)sVar3 * 8) +
                           0x15b8);
          if (cVar1 == '\0') {
            FUN_140071040(param_4,", ",2);
            FUN_1400bb1b0(param_4,0xc);
          }
          else if (cVar1 == '\x01') {
            FUN_140071040(param_4,", ",2);
            FUN_1400bb1b0(param_4,0xb);
          }
        }
      }
    }
    goto LAB_14092f2e8;
  case 0x19:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x8e0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x8c8);
    uVar13 = 0x49;
    break;
  case 0x1a:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x910) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x8f8);
    uVar13 = 0x47;
    break;
  case 0x1b:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x940) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x928);
    uVar13 = 0x46;
    break;
  case 0x1c:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x970) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x958);
    uVar13 = 0x49;
    break;
  case 0x1d:
    sVar3 = *(short *)(param_1 + 0x98);
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x9a0) + lVar22 * 4);
    uVar17 = 0x30;
    uVar13 = *(undefined2 *)(*(longlong *)(param_1 + 0x988) + lVar22 * 2);
    goto LAB_14092eac9;
  case 0x1e:
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x9d0) + lVar22 * 2);
    lVar18 = *(longlong *)(param_1 + 0x9b8);
    uVar17 = 0x31;
    goto LAB_14092ea84;
  case 0x1f:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0xa30) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0xa18);
    uVar13 = 0x36;
    break;
  case 0x20:
    sVar3 = *(short *)(*(longlong *)(param_1 + 0xa60) + lVar22 * 2);
    lVar18 = *(longlong *)(param_1 + 0xa48);
    goto LAB_14092eb9e;
  case 0x21:
    sVar3 = *(short *)(*(longlong *)(param_1 + 0xa90) + lVar22 * 2);
    lVar18 = *(longlong *)(param_1 + 0xa78);
LAB_14092eb9e:
    iVar12 = *(int *)(lVar18 + lVar22 * 4);
    if ((((iVar12 < 0) ||
         ((ulonglong)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) <= (ulonglong)(longlong)iVar12)) ||
        (sVar3 < 0)) ||
       (lVar22 = *(longlong *)(_DAT_14250ed78 + (longlong)iVar12 * 8),
       lVar18 = *(longlong *)(lVar22 + 0x658),
       (ulonglong)(*(longlong *)(lVar22 + 0x660) - lVar18 >> 3) <= (ulonglong)(longlong)sVar3))
    goto LAB_14092f2e8;
    lVar22 = *(longlong *)(lVar18 + (longlong)sVar3 * 8);
    uVar23 = (ulonglong)*(ushort *)(lVar22 + 0x104);
    if (*(ushort *)(lVar22 + 0x104) == 0xffff) goto LAB_14092f2e8;
    uVar20 = (ulonglong)*(ushort *)(lVar22 + 0x102);
    uVar13 = *(undefined2 *)(lVar22 + 0x100);
    iStack_d8 = *(int *)(lVar22 + 0x108);
    goto LAB_14092f2e0;
  case 0x22:
    lVar18 = *(longlong *)(lVar22 * 8 + *(longlong *)(param_1 + 0xc88));
    if (*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 1 != 0) {
      iStack_d8 = (int)**(short **)(lVar18 + 0x50);
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 1;
      uStack_a8 = 0xffffffff;
      iStack_b0 = -1;
      uStack_b8 = 0;
      uStack_c0 = 1;
      uStack_c8 = 0;
      uStack_d0 = 1;
      mission_import_item(param_4,**(undefined2 **)(lVar18 + 0x20),0xffffffff,
                          **(undefined2 **)(lVar18 + 0x38));
      FUN_140071040(param_4," ",1);
    }
    uVar20 = uStack_70;
    iVar12 = (int)(_DAT_14250f358 - _DAT_14250f350 >> 3) + -1;
    lVar18 = (longlong)iVar12;
    if (-1 < iVar12) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f350 + lVar18 * 8) + 0x28) ==
            **(short **)(lVar22 * 8 + *(longlong *)(param_1 + 0xc88))) {
          lVar22 = *(longlong *)(_DAT_14250f350 + (longlong)iVar12 * 8);
          if (lVar22 != 0) {
            ppppuVar19 = (undefined8 ****)(lVar22 + 0x68);
            ppppuVar10 = (undefined8 ****)pppuStack_88;
            if (&pppuStack_88 != ppppuVar19) {
              if (0xf < *(ulonglong *)(lVar22 + 0x80)) {
                ppppuVar19 = (undefined8 ****)*ppppuVar19;
              }
              FUN_140070f00(&pppuStack_88,ppppuVar19,*(undefined8 *)(lVar22 + 0x78));
              ppppuVar10 = (undefined8 ****)pppuStack_88;
            }
            goto LAB_14092ead2;
          }
          break;
        }
        iVar12 = iVar12 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    if (uStack_70 < 0xd) {
      uVar23 = 0x7fffffffffffffff;
      if (uStack_70 <= 0x7fffffffffffffff - (uStack_70 >> 1)) {
        uVar14 = uStack_70 + (uStack_70 >> 1);
        uVar23 = 0xf;
        if (0xf < uVar14) {
          uVar23 = uVar14;
        }
      }
      ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar23 + 1);
      lStack_78 = 0xd;
      *ppppuVar10 = (undefined8 ***)0x6465726170657250;
      *(undefined4 *)(ppppuVar10 + 1) = 0x6f6f4620;
      *(undefined1 *)((longlong)ppppuVar10 + 0xc) = 100;
      *(undefined1 *)((longlong)ppppuVar10 + 0xd) = 0;
      uStack_70 = uVar23;
      if (0xf < uVar20) {
        if (0xfff < uVar20 + 1) {
          pppuVar5 = (undefined8 ***)pppuStack_88[-1];
          lVar22 = (longlong)pppuStack_88 - (longlong)pppuVar5;
joined_r0x00014092efde:
          if (0x1f < lVar22 - 8U) {
            lStack_78 = 0xd;
            _invalid_parameter_noinfo_noreturn(pppuVar5,uVar20 + 0x28);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
LAB_14092ee50:
        lStack_78 = 0xd;
        mission_supplier_1415530d0();
      }
    }
    else {
LAB_14092ed4d:
      ppppuVar19 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar19 = (undefined8 ****)pppuStack_88;
      }
      lStack_78 = 0xd;
      mission_supplier_14155486a(ppppuVar19,"Prepared Food",0xd);
      *(undefined1 *)((longlong)ppppuVar19 + 0xd) = 0;
      ppppuVar10 = (undefined8 ****)pppuStack_88;
    }
    goto LAB_14092ead2;
  case 0x23:
    lVar18 = *(longlong *)(lVar22 * 8 + *(longlong *)(param_1 + 0xca0));
    if (*(longlong *)(lVar18 + 0x10) - *(longlong *)(lVar18 + 8) >> 1 != 0) {
      iStack_d8 = (int)**(short **)(lVar18 + 0x50);
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_a0 = 1;
      uStack_a8 = 0xffffffff;
      iStack_b0 = -1;
      uStack_b8 = 0;
      uStack_c0 = 1;
      uStack_c8 = 0;
      uStack_d0 = 1;
      mission_import_item(param_4,**(undefined2 **)(lVar18 + 0x20),0xffffffff,
                          **(undefined2 **)(lVar18 + 0x38));
      FUN_140071040(param_4," ",1);
    }
    uVar20 = uStack_70;
    iVar12 = (int)(_DAT_14250f358 - _DAT_14250f350 >> 3) + -1;
    lVar18 = (longlong)iVar12;
    if (-1 < iVar12) {
      do {
        if (*(short *)(*(longlong *)(_DAT_14250f350 + lVar18 * 8) + 0x28) ==
            **(short **)(lVar22 * 8 + *(longlong *)(param_1 + 0xca0))) {
          lVar22 = *(longlong *)(_DAT_14250f350 + (longlong)iVar12 * 8);
          if (lVar22 != 0) {
            ppppuVar19 = (undefined8 ****)(lVar22 + 0x68);
            ppppuVar10 = (undefined8 ****)pppuStack_88;
            if (&pppuStack_88 != ppppuVar19) {
              if (0xf < *(ulonglong *)(lVar22 + 0x80)) {
                ppppuVar19 = (undefined8 ****)*ppppuVar19;
              }
              FUN_140070f00(&pppuStack_88,ppppuVar19,*(undefined8 *)(lVar22 + 0x78));
              ppppuVar10 = (undefined8 ****)pppuStack_88;
            }
            goto LAB_14092ead2;
          }
          break;
        }
        iVar12 = iVar12 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    if (0xc < uStack_70) goto LAB_14092ed4d;
    uVar23 = 0x7fffffffffffffff;
    if (uStack_70 <= 0x7fffffffffffffff - (uStack_70 >> 1)) {
      uVar14 = (uStack_70 >> 1) + uStack_70;
      uVar23 = 0xf;
      if (0xf < uVar14) {
        uVar23 = uVar14;
      }
    }
    ppppuVar10 = (undefined8 ****)FUN_140071e00(uVar23 + 1);
    lStack_78 = 0xd;
    *ppppuVar10 = (undefined8 ***)0x6465726170657250;
    *(undefined4 *)(ppppuVar10 + 1) = 0x6f6f4620;
    *(undefined1 *)((longlong)ppppuVar10 + 0xc) = 100;
    *(undefined1 *)((longlong)ppppuVar10 + 0xd) = 0;
    uStack_70 = uVar23;
    if (0xf < uVar20) {
      if (0xfff < uVar20 + 1) {
        pppuVar5 = (undefined8 ***)pppuStack_88[-1];
        lVar22 = (longlong)pppuStack_88 - (longlong)pppuVar5;
        goto joined_r0x00014092efde;
      }
      goto LAB_14092ee50;
    }
    goto LAB_14092ead2;
  case 0x24:
    lVar18 = *(longlong *)(param_1 + 0x538);
    uVar13 = 4;
LAB_14092e60a:
    uVar23 = 0;
    uVar20 = 0xffffffff;
    iStack_d8 = *(int *)(lVar18 + lVar22 * 4);
    goto LAB_14092f2e0;
  case 0x25:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x850) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x838);
    uVar13 = 0x10;
    break;
  case 0x26:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x418) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x400);
    uVar13 = 0x1f;
    break;
  case 0x27:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x478) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x460);
    uVar13 = 0x1f;
    break;
  case 0x28:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4a8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x490);
    uVar13 = 0x1f;
    break;
  case 0x29:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x478) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x460);
    uVar13 = 0x39;
    break;
  case 0x2a:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4a8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x490);
    uVar13 = 0x39;
    break;
  case 0x2b:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x478) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x460);
    uVar13 = 10;
    break;
  case 0x2c:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4a8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x490);
    uVar13 = 10;
    break;
  case 0x2d:
    uVar13 = 0x11;
    goto LAB_14092f294;
  case 0x2e:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x7c0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x7a8);
    uVar13 = 0xb;
    break;
  case 0x2f:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x7f0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x7d8);
    uVar13 = 0x3e;
    break;
  case 0x30:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x820) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x808);
    uVar13 = 0x3d;
    break;
  case 0x31:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x6d0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x6b8);
    uVar13 = 0x46;
    break;
  case 0x32:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x6a0) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x688);
    uVar13 = 3;
    break;
  case 0x33:
    uVar23 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xb08) + lVar22 * 2);
    uVar20 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xaf0) + lVar22 * 2);
    uVar13 = *(undefined2 *)(*(longlong *)(param_1 + 0xad8) + lVar22 * 2);
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0xb20) + lVar22 * 4);
    goto LAB_14092f2e0;
  case 0x34:
    uVar13 = 0x12;
    goto LAB_14092f294;
  case 0x35:
    uVar13 = 0x52;
    goto LAB_14092f294;
  case 0x36:
    uVar13 = 0x53;
LAB_14092f294:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x790) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x778);
    break;
  case 0x37:
    sVar3 = *(short *)(*(longlong *)(param_1 + 0xa00) + lVar22 * 2);
    lVar18 = *(longlong *)(param_1 + 0x9e8);
    uVar17 = 0x58;
LAB_14092ea84:
    iStack_d8 = (int)sVar3;
    sVar3 = *(short *)(param_1 + 0x98);
    uVar13 = *(undefined2 *)(lVar18 + lVar22 * 4);
LAB_14092eac9:
    iStack_b0 = (int)sVar3;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_a0 = 1;
    uStack_a8 = 0xffffffff;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 1;
    mission_import_item(&pppuStack_88,uVar17,0xffffffff,uVar13);
    ppppuVar10 = (undefined8 ****)pppuStack_88;
LAB_14092ead2:
    pppuStack_88 = ppppuVar10;
    ppppuVar19 = &pppuStack_88;
    if (0xf < uStack_70) {
      ppppuVar19 = (undefined8 ****)pppuStack_88;
    }
    FUN_140071040(param_4,ppppuVar19,lStack_78);
    goto LAB_14092f2e8;
  case 0x38:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4d8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x4c0);
    uVar13 = 0x1f;
    break;
  case 0x39:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4d8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x4c0);
    uVar13 = 10;
    break;
  case 0x3a:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4d8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x4c0);
    uVar13 = 0x3a;
    break;
  case 0x3b:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x4d8) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x4c0);
    uVar13 = 0x39;
    break;
  case 0x3c:
    lVar18 = *(longlong *)(param_1 + 0x280);
    uVar13 = 0x56;
LAB_14092e6e4:
    uVar23 = 0xffffffff;
    iStack_d8 = -1;
    uVar20 = (ulonglong)*(ushort *)(lVar18 + lVar22 * 2);
    goto LAB_14092f2e0;
  case 0x3d:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x700) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x6e8);
    uVar13 = 4;
    break;
  case 0x3e:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x448) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x430);
    uVar13 = 0x5a;
    break;
  case 0x3f:
    iStack_d8 = *(int *)(*(longlong *)(param_1 + 0x730) + lVar22 * 4);
    lVar18 = *(longlong *)(param_1 + 0x718);
    uVar13 = 0xc;
  }
  uVar20 = 0xffffffff;
  uVar23 = (ulonglong)*(ushort *)(lVar18 + lVar22 * 2);
LAB_14092f2e0:
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 1;
  uStack_a8 = 0xffffffff;
  iStack_b0 = -1;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0xffffffff;
  mission_import_item(param_4,uVar13,uVar20,uVar23);
LAB_14092f2e8:
  FUN_1405468a0(param_4);
  if (0xf < uStack_70) {
    uVar20 = uStack_70 + 1;
    ppppuVar19 = (undefined8 ****)pppuStack_88;
    if (0xfff < uVar20) {
      uVar20 = uStack_70 + 0x28;
      ppppuVar19 = (undefined8 ****)pppuStack_88[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar19))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    mission_supplier_1415530d0(ppppuVar19,uVar20);
  }
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_f8);
  return;
}

