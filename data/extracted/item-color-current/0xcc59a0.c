
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cc59a0(undefined8 param_1,undefined8 *param_2,char param_3,short param_4,int param_5,
                  uint *param_6,int param_7,uint param_8)

{
  code *pcVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  undefined1 auStack_128 [32];
  char cStack_108;
  uint auStack_100 [2];
  uint auStack_f8 [2];
  uint *puStack_f0;
  uint *puStack_e8;
  uint *puStack_e0;
  uint *puStack_d8;
  undefined8 *puStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  uint *puStack_b8;
  uint *puStack_b0;
  longlong lStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  uint *puStack_70;
  ulonglong uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418be040 ^ (ulonglong)auStack_128;
  uStack_98 = 0;
  puVar17 = (uint *)0x0;
  uStack_90 = 0;
  uStack_88 = 0xf;
  pppuStack_a0 = (undefined8 ****)0x0;
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  cStack_108 = param_3;
  puStack_d0 = param_2;
  if ((param_4 == -1) && (*param_6 == 0xffffffff)) goto LAB_140cc63ac;
  FUN_140071040(param_2,"The object is ",0xe);
  uVar3 = FUN_141475520(0x1423f3970,param_4,param_5);
  uVar10 = *param_6;
  if (uVar10 == 0xffffffff) {
    uVar10 = (uint)uVar3;
  }
  if ((short)uVar10 == -1) {
    pcVar14 = "gray";
    uVar20 = 4;
  }
  else {
    lVar5 = *(longlong *)(_DAT_142519538 + (longlong)(short)uVar10 * 8);
    pcVar14 = (char *)(lVar5 + 0x50);
    uVar20 = *(undefined8 *)(lVar5 + 0x60);
    if (0xf < *(ulonglong *)(lVar5 + 0x68)) {
      pcVar14 = *(char **)pcVar14;
    }
  }
  FUN_140071040(param_2,pcVar14,uVar20);
  if ('\0' < param_3) {
    FUN_140071040(param_2,", ",2);
    if (param_3 == '\x01') {
      uVar20 = 5;
      pcVar14 = "well-";
LAB_140cc5b15:
      FUN_140071040(param_2,pcVar14,uVar20);
    }
    else {
      if (param_3 == '\x02') {
        uVar20 = 7;
        pcVar14 = "finely ";
        goto LAB_140cc5b15;
      }
      if (param_3 == '\x03') {
        uVar20 = 9;
        pcVar14 = "superbly ";
        goto LAB_140cc5b15;
      }
      if (param_3 == '\x04') {
        uVar20 = 0xe;
        pcVar14 = "exceptionally ";
        goto LAB_140cc5b15;
      }
      if (param_3 == '\x05') {
        uVar20 = 0xc;
        pcVar14 = "masterfully ";
        goto LAB_140cc5b15;
      }
    }
    FUN_140071040(param_2,"colored",7);
  }
  lVar5 = *(longlong *)(param_6 + 4) - *(longlong *)(param_6 + 2) >> 2;
  if (lVar5 == 0) {
    FUN_140071040(param_2," with ",6);
    uStack_90 = 0;
    ppppuVar7 = &pppuStack_a0;
    if (0xf < uStack_88) {
      ppppuVar7 = (undefined8 ****)pppuStack_a0;
    }
    *(undefined1 *)ppppuVar7 = 0;
    if (((((ushort)(param_4 - 0xdbU) < 200) &&
         (lVar5 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar5 != 0)) && (param_5 != -1)) &&
       (iVar19 = (int)lVar5 + -1, puVar12 = puVar17, -1 < iVar19)) {
      do {
        iVar13 = iVar19 + (int)puVar12 >> 1;
        lVar5 = *(longlong *)(_DAT_14251c198 + (longlong)iVar13 * 8);
        if (*(int *)(lVar5 + 0xe0) == param_5) {
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0xaa) != '\0')) {
            uStack_78 = 0;
            puStack_70 = (uint *)0x0;
            uStack_68 = 0xf;
            pppuStack_80 = (undefined8 ****)0x0;
            if (((*(longlong *)(lVar5 + 0x130) == 0) ||
                ((lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + 0x58), lVar8 == 0 ||
                 (*(int *)(lVar8 + 0x30) == -1)))) ||
               (lVar8 = FUN_140073ba0(0x14250a168), lVar8 == 0)) {
              lVar5 = lVar5 + 0x38;
            }
            else {
              lVar5 = FUN_140c521e0(lVar8);
            }
            uVar16 = 0xf;
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x72) != '\0')) {
              FUN_140aae180(lVar5,&pppuStack_80,1,0);
              puVar17 = puStack_70;
              uVar16 = uStack_68;
            }
            ppppuVar7 = &pppuStack_80;
            if (0xf < uVar16) {
              ppppuVar7 = (undefined8 ****)pppuStack_80;
            }
            FUN_140071040(&pppuStack_a0,ppppuVar7,puVar17);
            FUN_140071040(&pppuStack_a0,"\'s ",3);
            if (0xf < uStack_68) {
              uVar16 = uStack_68 + 1;
              ppppuVar7 = (undefined8 ****)pppuStack_80;
              if (0xfff < uVar16) {
                uVar16 = uStack_68 + 0x28;
                ppppuVar7 = (undefined8 ****)pppuStack_80[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar7))) {
                  _invalid_parameter_noinfo_noreturn();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              supplier_1415530d0(ppppuVar7,uVar16);
            }
          }
          break;
        }
        iVar21 = iVar13 + -1;
        if (*(int *)(lVar5 + 0xe0) < param_5) {
          puVar12 = (uint *)(ulonglong)(iVar13 + 1);
          iVar21 = iVar19;
        }
        iVar19 = iVar21;
      } while ((int)puVar12 <= iVar19);
    }
    lVar5 = FUN_1414c6fe0(0x1423f3970,param_4,param_5);
    if (lVar5 == 0) {
      pcVar14 = "unknown material";
      uVar20 = 0x10;
    }
    else {
      if (*(longlong *)(lVar5 + 0x530) != 0) {
        plVar15 = (longlong *)(lVar5 + 0x520);
        if (0xf < *(ulonglong *)(lVar5 + 0x538)) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_140071040(&pppuStack_a0,plVar15,*(undefined8 *)(lVar5 + 0x530));
        FUN_140071040(&pppuStack_a0," ",1);
      }
      pcVar14 = (char *)(lVar5 + 0xb8);
      uVar20 = *(undefined8 *)(lVar5 + 200);
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        pcVar14 = *(char **)pcVar14;
      }
    }
    FUN_140071040(&pppuStack_a0,pcVar14,uVar20);
    ppppuVar7 = &pppuStack_a0;
    if (0xf < uStack_88) {
      ppppuVar7 = (undefined8 ****)pppuStack_a0;
    }
    FUN_140071040(param_2,ppppuVar7,uStack_90);
  }
  else {
    puStack_f0 = (uint *)0x0;
    puStack_e8 = (uint *)0x0;
    puStack_e0 = (uint *)0x0;
    lStack_c0 = 0;
    puStack_b8 = (uint *)0x0;
    puStack_b0 = (uint *)0x0;
    lStack_c8 = (longlong)(int)lVar5;
    puVar12 = (uint *)0x0;
    if (lStack_c8 < 1) {
      puStack_d8 = (uint *)0x0;
    }
    else {
      puStack_d8 = (uint *)0x0;
      puVar18 = (uint *)0x0;
      puVar22 = puVar17;
      puVar23 = puVar17;
      do {
        uVar10 = *(uint *)(*(longlong *)(param_6 + 8) + (longlong)puVar23 * 4);
        auStack_100[0] = *(uint *)(*(longlong *)(param_6 + 2) + (longlong)puVar23 * 4);
        for (puVar6 = puStack_f0; auStack_f8[0] = uVar10, puVar6 != puVar12; puVar6 = puVar6 + 1) {
          cVar9 = '\x01';
          if (puVar6 < puVar12) {
            cVar9 = -1;
          }
          if (-1 < cVar9) break;
          if ((*puVar6 == auStack_100[0]) &&
             (*(uint *)((longlong)puVar6 + (lStack_c0 - (longlong)puStack_f0)) == uVar10))
          goto LAB_140cc5c42;
        }
        if (puVar12 == puVar17) {
          FUN_140072450(&puStack_f0,puVar12,auStack_100);
          puStack_d8 = puStack_f0;
          puVar17 = puStack_e0;
        }
        else {
          *puVar12 = auStack_100[0];
          puStack_e8 = puVar12 + 1;
        }
        puVar12 = puStack_e8;
        if (puVar18 == puVar22) {
          FUN_140072450(&lStack_c0,puVar18,auStack_f8);
          puVar18 = puStack_b8;
          puVar22 = puStack_b0;
        }
        else {
          *puVar18 = uVar10;
          puStack_b8 = puVar18 + 1;
          puVar18 = puStack_b8;
        }
LAB_140cc5c42:
        puVar23 = (uint *)((longlong)puVar23 + 1);
      } while ((longlong)puVar23 < lStack_c8);
    }
    param_2 = puStack_d0;
    puVar17 = (uint *)0x0;
    FUN_140071040(puStack_d0," with ",6);
    uVar16 = (longlong)puVar12 - (longlong)puStack_f0 >> 2;
    if (1 < uVar16) {
      FUN_140071040(param_2,"a mixture of ",0xd);
    }
    auStack_100[0] = 0;
    iVar19 = (int)uVar16;
    if (0 < iVar19) {
      puStack_d0 = (undefined8 *)(longlong)iVar19;
      lStack_c8 = 0;
      lStack_a8 = lStack_c0 - (longlong)puStack_f0;
      puVar12 = puStack_f0;
      puVar18 = puVar17;
      do {
        uVar10 = (uint)puVar18;
        uStack_58 = 0;
        uStack_48 = 0xf;
        iVar13 = *(int *)((longlong)puVar12 + lStack_a8);
        auStack_f8[0] = CONCAT22(auStack_f8[0]._2_2_,(short)*puVar12);
        uStack_50 = 0;
        pppuStack_60 = (undefined8 ****)0x0;
        if (((((ushort)((short)*puVar12 - 0xdbU) < 200) &&
             (lVar5 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar5 != 0)) && (iVar13 != -1)) &&
           (iVar21 = (int)lVar5 + -1, puVar12 = puVar17, -1 < iVar21)) {
          do {
            iVar11 = iVar21 + (int)puVar12 >> 1;
            lVar5 = *(longlong *)(_DAT_14251c198 + (longlong)iVar11 * 8);
            if (*(int *)(lVar5 + 0xe0) == iVar13) {
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0xaa) != '\0')) {
                uStack_78 = 0;
                puStack_70 = (uint *)0x0;
                uStack_68 = 0xf;
                pppuStack_80 = (undefined8 ****)0x0;
                if (((*(longlong *)(lVar5 + 0x130) == 0) ||
                    ((lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + 0x58), lVar8 == 0 ||
                     (*(int *)(lVar8 + 0x30) == -1)))) ||
                   (lVar8 = FUN_140073ba0(0x14250a168), lVar8 == 0)) {
                  lVar5 = lVar5 + 0x38;
                }
                else {
                  lVar5 = FUN_140c521e0(lVar8);
                }
                puVar12 = puVar17;
                uVar16 = 0xf;
                if ((lVar5 != 0) && (*(char *)(lVar5 + 0x72) != '\0')) {
                  FUN_140aae180(lVar5,&pppuStack_80,1,0);
                  puVar12 = puStack_70;
                  uVar16 = uStack_68;
                }
                ppppuVar7 = &pppuStack_80;
                if (0xf < uVar16) {
                  ppppuVar7 = (undefined8 ****)pppuStack_80;
                }
                FUN_140071040(&pppuStack_60,ppppuVar7,puVar12);
                FUN_140071040(&pppuStack_60,"\'s ",3);
                uVar10 = auStack_100[0];
                if (0xf < uStack_68) {
                  if (0xfff < uStack_68 + 1) {
                    if (0x1f < (ulonglong)
                               ((longlong)pppuStack_80 + (-8 - (longlong)pppuStack_80[-1]))) {
                      _invalid_parameter_noinfo_noreturn(pppuStack_80[-1],uStack_68 + 0x28);
                      goto LAB_140cc5fcf;
                    }
                  }
                  supplier_1415530d0();
                  uVar10 = auStack_100[0];
                }
              }
              break;
            }
            iVar2 = iVar11 + -1;
            if (*(int *)(lVar5 + 0xe0) < iVar13) {
              puVar12 = (uint *)(ulonglong)(iVar11 + 1);
              iVar2 = iVar21;
            }
            iVar21 = iVar2;
          } while ((int)puVar12 <= iVar21);
        }
        lVar5 = FUN_1414c6fe0(0x1423f3970,(undefined2)auStack_f8[0],iVar13);
        if (lVar5 == 0) {
          pcVar14 = "unknown material";
          uVar20 = 0x10;
        }
        else {
          if (*(longlong *)(lVar5 + 0x530) != 0) {
            plVar15 = (longlong *)(lVar5 + 0x520);
            if (0xf < *(ulonglong *)(lVar5 + 0x538)) {
              plVar15 = (longlong *)*plVar15;
            }
            FUN_140071040(&pppuStack_60,plVar15,*(undefined8 *)(lVar5 + 0x530));
            FUN_140071040(&pppuStack_60," ",1);
          }
          pcVar14 = (char *)(lVar5 + 0x118);
          uVar20 = *(undefined8 *)(lVar5 + 0x128);
          if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
            pcVar14 = *(char **)pcVar14;
          }
        }
        FUN_140071040(&pppuStack_60,pcVar14,uVar20);
        ppppuVar7 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar7 = (undefined8 ****)pppuStack_60;
        }
        FUN_140071040(param_2,ppppuVar7,uStack_50);
        puVar4 = puStack_d0;
        if ((int)uVar10 < iVar19 + -1) {
          if (2 < (longlong)puStack_d0) {
            FUN_140071040(param_2,", ",2);
          }
          if (uVar10 == iVar19 - 2U) {
            if (puVar4 == (undefined8 *)0x2) {
              FUN_140071040(param_2," ",1);
            }
            FUN_140071040(param_2,"and ",4);
          }
        }
        FUN_140070e80(&pppuStack_60);
        auStack_100[0] = uVar10 + 1;
        puVar18 = (uint *)(ulonglong)auStack_100[0];
        lStack_c8 = lStack_c8 + 1;
        puVar12 = puStack_d8 + 1;
        puStack_d8 = puVar12;
      } while (lStack_c8 < (longlong)puVar4);
    }
LAB_140cc5fcf:
    FUN_140070d80(&lStack_c0);
    FUN_140070d80(&puStack_f0);
  }
  iVar19 = 0;
  if ((((cStack_108 == '\x05') && (lVar5 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar5 != 0)) &&
      (param_7 != -1)) && (iVar13 = (int)lVar5 + -1, -1 < iVar13)) {
    do {
      iVar21 = iVar13 + iVar19 >> 1;
      lVar5 = *(longlong *)(_DAT_14251c198 + (longlong)iVar21 * 8);
      if (*(int *)(lVar5 + 0xe0) == param_7) {
        if (lVar5 != 0) {
          FUN_140071040(param_2," by ",4);
          if ((param_8 & 2) != 0) {
            FUN_140071040(param_2,"[LPAGE:HF:",10);
            FUN_140545610(*(undefined4 *)(lVar5 + 0xe0),param_2);
            FUN_140071040(param_2,"]",1);
          }
          if (((*(longlong *)(lVar5 + 0x130) == 0) ||
              (lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x130) + 0x58), lVar8 == 0)) ||
             ((*(int *)(lVar8 + 0x30) == -1 || (lVar8 = FUN_140073ba0(0x14250a168), lVar8 == 0)))) {
            lVar5 = lVar5 + 0x38;
          }
          else {
            lVar5 = FUN_140c521e0(lVar8);
          }
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x72) != '\0')) {
            FUN_140aadad0(lVar5,&pppuStack_a0);
          }
          ppppuVar7 = &pppuStack_a0;
          if (0xf < uStack_88) {
            ppppuVar7 = (undefined8 ****)pppuStack_a0;
          }
          FUN_140071040(param_2,ppppuVar7,uStack_90);
          if ((param_8 & 2) != 0) {
            FUN_140071040(param_2,"[/LPAGE]",8);
          }
        }
        break;
      }
      iVar11 = iVar21 + -1;
      if (*(int *)(lVar5 + 0xe0) < param_7) {
        iVar11 = iVar13;
        iVar19 = iVar21 + 1;
      }
      iVar13 = iVar11;
    } while (iVar19 <= iVar13);
  }
  FUN_140071040(param_2,".  ",3);
LAB_140cc63ac:
  FUN_140070e80(&pppuStack_a0);
  FUN_1415530b0(uStack_40 ^ (ulonglong)auStack_128);
  return;
}

