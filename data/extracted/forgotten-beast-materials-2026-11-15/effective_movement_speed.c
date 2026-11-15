/* Actual Ghidra output, research name; VA 0x14134d520..0x14134dfca. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong effective_movement_speed(longlong param_1,char param_2,char param_3,ulonglong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  bool bVar23;
  int iStack_48;
  uint auStack_40 [2];
  
  if (DAT_1418f92dd != '\0') {
    *param_4 = 0;
    return 0;
  }
  FUN_14139e410();
  uVar9 = 0;
  iVar21 = 0;
  iVar20 = 0;
  uVar18 = 900;
  iVar6 = 0;
  if ((*(short *)(param_1 + 0x4cc) == -30000) && (*(int *)(param_1 + 0x4d4) == -1)) {
    if (((*(byte *)(param_1 + 0x114) & 1) == 0) && ((*(uint *)(param_1 + 0x118) & 0x40000) == 0)) {
      if ((*(uint *)(param_1 + 0x110) & 0x8000) == 0) {
        cVar4 = FUN_1407f9da0(param_1);
        uVar16 = uVar9;
        if (cVar4 != '\0') {
          uVar16 = 1;
        }
      }
      else {
        uVar16 = 3;
      }
    }
    else {
      uVar16 = 2;
    }
  }
  else {
    uVar16 = 4;
  }
  iVar5 = *(int *)(param_1 + 0xde8 + uVar16 * 4);
  uVar13 = (ulonglong)iVar5;
  *param_4 = 0;
  uVar14 = uVar13;
  uVar19 = uVar9;
  if (-1 < iVar5) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0xe8 + uVar16 * 0x18);
    uVar14 = *(longlong *)(*(longlong *)(param_1 + 0x5f8) + 0xf0 + uVar16 * 0x18) - lVar8 >> 3;
    if (uVar13 < uVar14) {
      uVar19 = *(ulonglong *)(lVar8 + uVar13 * 8);
      *param_4 = uVar19;
    }
  }
  if (uVar19 != 0) {
    if (((param_3 == '\0') || (iVar5 = *(int *)(uVar19 + 8), iVar5 < 1)) ||
       (iVar11 = *(int *)(param_1 + 0x4c8), iVar5 <= iVar11)) {
      uVar18 = (ulonglong)*(uint *)(uVar19 + 4);
    }
    else {
      lVar8 = (longlong)((iVar5 - iVar11) * *(int *)(uVar19 + 0x10) + iVar11 * *(int *)(uVar19 + 4))
      ;
      uVar14 = lVar8 % (longlong)iVar5 & 0xffffffff;
      uVar18 = lVar8 / (longlong)iVar5 & 0xffffffff;
    }
  }
  uVar17 = (uint)uVar18;
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    return uVar18;
  }
  iVar5 = *(int *)(param_1 + 0x8e4);
  if ((iVar5 != 100) && ((uVar17 = uVar17 * 100, 100 < iVar5 || (iVar5 - 1U < 99)))) {
    lVar8 = (longlong)(int)uVar17;
    uVar17 = (int)uVar17 / iVar5;
    uVar14 = lVar8 % (longlong)iVar5 & 0xffffffff;
  }
  uVar12 = *(int *)(param_1 + 0x8e0) + uVar17;
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar12 = uVar17;
  }
  if ((*(byte *)(param_1 + 0x114) & 1) == 0) {
    if (*(int *)(param_1 + 0xc64) == 0) {
      iVar5 = *(char *)(param_1 + 0xc68) * 0x96;
    }
    else {
      if (*(int *)(param_1 + 0xc64) != 0x200000) goto LAB_14134d77a;
      iVar5 = *(char *)(param_1 + 0xc68) * 300;
    }
    uVar12 = iVar5 + uVar12;
    goto LAB_14134d77a;
  }
  iVar5 = FUN_1413c6e10(param_1,uVar14);
  if (iVar5 < 2) goto LAB_14134d77a;
  if (0xc < iVar5 - 2U) {
    iVar5 = uVar12 * 3;
    goto LAB_14134d72d;
  }
                    /* WARNING: Switch is manually overridden */
  switch(iVar5 - 2U) {
  case 0:
    iVar5 = uVar12 * 0x13;
    break;
  case 1:
    iVar5 = uVar12 * 9;
    goto LAB_14134d72d;
  case 2:
    iVar5 = uVar12 * 0x11;
    break;
  case 3:
    iVar5 = (int)((ulonglong)((longlong)(int)(uVar12 << 4) * 0x66666667) >> 0x20);
    goto LAB_14134d736;
  case 4:
    iVar5 = uVar12 * 0xf;
    break;
  case 5:
    iVar5 = uVar12 * 0xe;
    break;
  case 6:
    iVar5 = uVar12 * 0xd;
    break;
  case 7:
    iVar5 = uVar12 * 0xc;
    break;
  case 8:
    iVar5 = uVar12 * 0xb;
    break;
  case 9:
    iVar5 = uVar12 * 5;
LAB_14134d72d:
    iVar5 = iVar5 * 2;
    break;
  case 10:
    iVar5 = uVar12 * 9;
    break;
  case 0xb:
    iVar5 = uVar12 * 8;
    break;
  case 0xc:
    iVar5 = uVar12 * 7;
  }
  iVar5 = (int)((ulonglong)((longlong)iVar5 * 0x66666667) >> 0x20);
LAB_14134d736:
  uVar12 = (iVar5 >> 3) - (iVar5 >> 0x1f);
LAB_14134d77a:
  uVar17 = uVar12 + 3000;
  if (*(short *)(param_1 + 0xa0) != 0x68) {
    uVar17 = uVar12;
  }
  if ((*(uint *)(param_1 + 0x118) & 0x8000) != 0) {
    uVar17 = (int)uVar17 / 0x14;
  }
  iVar5 = *(int *)(param_1 + 0x984);
  uVar12 = uVar17 + 200;
  if (iVar5 < 2000) {
    uVar12 = uVar17;
  }
  uVar17 = uVar12 + 200;
  if (iVar5 < 4000) {
    uVar17 = uVar12;
  }
  uVar12 = uVar17 + 200;
  if (iVar5 < 6000) {
    uVar12 = uVar17;
  }
  uVar17 = uVar12 + 2000;
  if ((*(uint *)(param_1 + 0x114) & 0x4000) == 0) {
    uVar17 = uVar12;
  }
  if ((0 < *(int *)(param_1 + 0x81c)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  iVar5 = 1000;
  if ((0 < *(short *)(param_1 + 0x7fc)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  if ((0 < *(short *)(param_1 + 0x7fe)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  if ((0 < *(int *)(param_1 + 0x820)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  if (((99 < *(int *)(param_1 + 0x818)) && (*(short *)(param_1 + 0x814) != 0)) &&
     (*(short *)(param_1 + 0x360) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  if ((0 < *(int *)(param_1 + 0x980)) && (*(short *)(param_1 + 0x814) == -1)) {
    uVar17 = uVar17 + 1000;
  }
  if ((*(int *)(param_1 + 0x1280) < 0x15) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x1278) + 0x14) & 4) == 0)) {
    if (((*(uint *)(param_1 + 0x82c) & 0x10000000) == 0) &&
       ((*(uint *)(param_1 + 0x828) & 0x10000000) != 0)) goto LAB_14134d8c2;
  }
  else if ((*(uint *)(param_1 + 0x82c) & 0x10000000) == 0) {
LAB_14134d8c2:
    for (puVar7 = *(undefined8 **)(param_1 + 0x9a8); puVar7 < *(undefined8 **)(param_1 + 0x9b0);
        puVar7 = puVar7 + 1) {
      if (*(short *)*puVar7 == 0x2e) {
        piVar1 = (int *)((short *)*puVar7 + 2);
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
        }
        break;
      }
    }
    if (_DAT_1418be238 == 1) {
      if (iVar6 < 0x24ea00) {
        bVar23 = SBORROW4(iVar6,0x127500);
        iVar11 = -0x127500;
LAB_14134d928:
        if (bVar23 == iVar6 + iVar11 < 0) {
          uVar17 = uVar17 + 100;
        }
      }
      else {
        uVar17 = uVar17 + 200;
      }
    }
    else {
      if (iVar6 < 0x62700) {
        bVar23 = SBORROW4(iVar6,0x49d40);
        iVar11 = -0x49d40;
        goto LAB_14134d928;
      }
      uVar17 = uVar17 + 200;
    }
  }
  iVar6 = *(int *)(param_1 + 0x98c);
  if (_DAT_1418be238 == 0) {
    uVar12 = uVar17 + 100;
    if (iVar6 < 50000) {
      uVar12 = uVar17;
    }
    uVar17 = uVar12 + 100;
    if (*(int *)(param_1 + 0x988) < 75000) {
      uVar17 = uVar12;
    }
    if (*(int *)(param_1 + 0x990) < 150000) {
      if (0xe0ff < *(int *)(param_1 + 0x990)) {
        uVar17 = uVar17 + 100;
      }
    }
    else {
      uVar17 = uVar17 + 200;
    }
  }
  else {
    if (iVar6 < 0x54600) {
      if (0x2a2ff < iVar6) {
        uVar17 = uVar17 + 100;
      }
    }
    else {
      uVar17 = uVar17 + 200;
    }
    if (*(int *)(param_1 + 0x988) < 0x278d00) {
      if (0x1274ff < *(int *)(param_1 + 0x988)) {
        uVar17 = uVar17 + 100;
      }
    }
    else {
      uVar17 = uVar17 + 200;
    }
    iVar6 = *(int *)(param_1 + 0x990);
    if (iVar6 < 0xd2f00) {
      if (iVar6 < 0x54600) {
        if (iVar6 < 0x3f480) {
          if (0x2a2ff < iVar6) {
            uVar17 = uVar17 + 0x32;
          }
        }
        else {
          uVar17 = uVar17 + 0x4b;
        }
      }
      else {
        uVar17 = uVar17 + 100;
      }
    }
    else {
      uVar17 = uVar17 + 200;
    }
  }
  uVar12 = uVar17 + 1000;
  if (*(int *)(param_1 + 0x3d4) == -1) {
    uVar12 = uVar17;
  }
  if (((int)uVar16 == 0) && ((*(byte *)(param_1 + 0x118) & 0x40) != 0)) {
    iVar6 = FUN_1413570b0(param_1,0x3e);
    if (0x14 < iVar6) {
      iVar6 = 0x14;
    }
    uVar12 = uVar12 + 2000 + iVar6 * -100;
  }
  if (*(int *)(param_1 + 0x978) - 1U < 99) {
    uVar12 = uVar12 + *(int *)(param_1 + 0x978) * 10;
  }
  if ((ushort)(*(short *)(param_1 + 0x804) - 1U) < 9) {
    uVar12 = uVar12 + *(short *)(param_1 + 0x804) * 100;
  }
  uVar18 = *param_4;
  if (uVar18 == 0) {
    bVar22 = 1;
  }
  else {
    bVar22 = *(byte *)(uVar18 + 0x18) & 1;
  }
  iVar6 = *(int *)(param_1 + 0x604) - *(int *)(param_1 + 0x614);
  piVar1 = *(int **)(param_1 + 0x8e8);
  if (piVar1 != (int *)0x0) {
    iVar6 = (iVar6 * *piVar1) / 100 + piVar1[6];
  }
  iStack_48 = 0;
  if (-1 < iVar6) {
    iStack_48 = iVar6;
  }
  if (uVar18 == 0) {
    uVar17 = 6;
  }
  else {
    uVar17 = *(uint *)(uVar18 + 0x18) & 6;
    if ((uVar17 == 0) && (bVar22 == 0)) goto LAB_14134dc3c;
  }
  iVar6 = *(int *)(param_1 + 0x620) - *(int *)(param_1 + 0x630);
  if (piVar1 != (int *)0x0) {
    iVar6 = (iVar6 * piVar1[1]) / 100 + piVar1[7];
  }
  iVar11 = 0;
  if (-1 < iVar6) {
    iVar11 = iVar6;
  }
  if ((((uVar17 != 0) && (*(longlong *)(param_1 + 0x490) == 0)) &&
      (lVar8 = FUN_1413cc010(param_1), lVar8 != 0)) && (*(int *)(lVar8 + 0x90) == 0)) {
    iVar6 = *(int *)(param_1 + 0x604) - *(int *)(param_1 + 0x614);
    iVar10 = *(int *)(param_1 + 0x620) - *(int *)(param_1 + 0x630);
    if (iVar6 < iStack_48) {
      iStack_48 = iVar6;
    }
    if (iVar10 < iVar11) {
      iVar11 = iVar10;
    }
  }
  iVar6 = 0;
  if ((uVar17 & 2) != 0) {
    iVar20 = 100;
    iVar21 = 0x76c;
    iVar6 = 0x76c;
    if (iStack_48 < 0x76c) {
      iVar6 = iStack_48;
    }
  }
  if ((uVar17 & 4) != 0) {
    if (iVar11 < 0x76c) {
      iVar6 = iVar6 + iVar11;
    }
    else {
      iVar6 = iVar6 + 0x76c;
    }
    iVar20 = iVar20 + 100;
    iVar21 = iVar21 + 0x76c;
  }
  if (bVar22 != 0) {
    iVar11 = *(int *)(param_1 + 0x6ac);
    iVar20 = iVar20 + 100;
    iVar10 = *(int *)(param_1 + 0x6b0);
    iVar21 = iVar21 + 0x76c;
    if ((iVar11 != iVar10) && (iVar11 != 0)) {
      if (iVar10 < 0x186a1) {
        iVar5 = (iVar10 * 1000) / iVar11;
      }
      else {
        iVar5 = (int)(((longlong)iVar10 * 1000) / (longlong)iVar11);
      }
      if (iVar5 < 100) {
        iVar5 = 100;
      }
      else if (0x76c < iVar5) {
        iVar5 = 0x76c;
      }
    }
    iVar6 = iVar6 + iVar5;
  }
  if (iVar20 != 0) {
    iVar11 = uVar12 * 4;
    iVar5 = iVar20;
    if (iVar20 <= iVar6) {
      iVar5 = iVar6;
    }
    iVar6 = iVar21;
    if (iVar5 <= iVar21) {
      iVar6 = iVar5;
    }
    uVar12 = (((int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f) +
              iVar11 / 3 + (iVar11 >> 0x1f)) * (iVar21 - iVar6) +
             (iVar6 - iVar20) * ((int)uVar12 >> 1)) / (iVar21 - iVar20);
  }
LAB_14134dc3c:
  if ((((*(uint *)(param_1 + 0x110) >> 0x12 & 1) != 0) && (uVar18 = *param_4, uVar18 != 0)) &&
     (0 < *(int *)(uVar18 + 0x1c))) {
    uVar12 = uVar12 + (int)(uVar12 * *(int *)(uVar18 + 0x1c)) / 100;
  }
  if (((*(uint *)(param_1 + 0x110) >> 0xf & 1) == 0) &&
     (iVar6 = (int)*(short *)(param_1 + 0xc38), 2 < iVar6)) {
    iVar21 = iVar6 - *(short *)(param_1 + 0xc3a);
    iVar20 = iVar21 + -1;
    if ((*(byte *)(param_1 + 0x118) & 0x40) == 0) {
      iVar20 = iVar21;
    }
    iVar6 = (iVar20 * 500) / ((iVar6 - (iVar6 >> 1)) + -1);
    if (0 < iVar6) {
      uVar12 = uVar12 + iVar6;
    }
  }
  auStack_40[0] = uVar12 + 8000;
  if (*(short *)(param_1 + 0x360) != 5) {
    auStack_40[0] = uVar12;
  }
  uVar17 = auStack_40[0];
  if ((*(uint *)(param_1 + 0x118) >> 10 & 1) == 0) {
    iVar6 = FUN_1413570b0(param_1,0x2d);
    plVar15 = *(longlong **)(param_1 + 0x408);
    plVar2 = *(longlong **)(param_1 + 0x410);
    uVar18 = uVar9;
    while( true ) {
      if (plVar2 <= plVar15) break;
      plVar3 = (longlong *)*plVar15;
      lVar8 = *plVar3;
      if ((*(uint *)(lVar8 + 0x10) & 0x20000000) == 0) {
        FUN_140c7dc00(lVar8);
      }
      iVar20 = *(int *)(lVar8 + 0x74);
      iVar21 = *(int *)(lVar8 + 0x78);
      if ((((short)plVar3[1] == 2) || ((short)plVar3[1] == 5)) &&
         (cVar4 = (**(code **)(*(longlong *)*plVar3 + 0x6c8))(), cVar4 != '\0')) {
        if (iVar6 < 0xf) {
          if (1 < iVar6) {
            iVar20 = iVar20 * (0xf - iVar6) >> 4;
            iVar21 = iVar21 * (0xf - iVar6) >> 4;
          }
        }
        else {
          iVar20 = 0;
          iVar21 = iVar20;
        }
      }
      uVar12 = (int)uVar18 + iVar20;
      uVar18 = (ulonglong)uVar12;
      uVar17 = (int)uVar9 + iVar21;
      uVar9 = (ulonglong)uVar17;
      if ((int)uVar17 < 0xf4241) {
        if ((int)uVar17 < 0) {
          uVar12 = uVar12 + (int)uVar17 / 1000000;
          uVar18 = (ulonglong)uVar12;
          uVar17 = (int)uVar17 % 1000000;
          uVar9 = (ulonglong)uVar17;
          if ((int)uVar17 < 0) {
            uVar18 = (ulonglong)(uVar12 - 1);
            uVar9 = (ulonglong)(uVar17 + 1000000);
          }
        }
        plVar15 = plVar15 + 1;
      }
      else {
        uVar18 = (ulonglong)(uVar12 + (int)uVar17 / 1000000);
        uVar9 = (ulonglong)(uint)((int)uVar17 % 1000000);
        plVar15 = plVar15 + 1;
      }
    }
    iVar6 = *(int *)(param_1 + 0x6ac);
    if (iVar6 < 300000) {
      iStack_48 = (iVar6 * iStack_48) / 1000;
    }
    else {
      iStack_48 = (iVar6 / 1000) * iStack_48;
    }
    if (iStack_48 < 1) {
      iStack_48 = 1;
    }
    iVar6 = (int)uVar9 / 10000 + (int)uVar18 * 100;
    uVar17 = auStack_40[0];
    if (iStack_48 < iVar6) {
      iVar6 = iVar6 - iStack_48;
      if (iVar6 < 1000000) {
        iStack_48 = (iVar6 * 2000) / iStack_48;
      }
      else {
        iStack_48 = (iVar6 / iStack_48) * 2000;
      }
      iVar6 = 1;
      if (((0 < iStack_48) && (iVar6 = iStack_48, 5000 < iStack_48)) && (_DAT_1418be238 == 0)) {
        iVar6 = 5000;
      }
      uVar17 = auStack_40[0] + iVar6;
      if ((param_2 != '\0') &&
         (uVar12 = FUN_140ece790(),
         uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff <
         0xccccccd)) {
        FUN_1413e3c90(param_1,0,1);
        FUN_1413e3c90(param_1,2,1);
        FUN_1413e3c90(param_1,3,1);
        FUN_1413e3da0(param_1,2,1);
        FUN_1413e3da0(param_1,10,1);
      }
    }
  }
  uVar9 = 0;
  if (((((_DAT_1418be238 == 1) && (_DAT_142407550 - _DAT_142407548 >> 3 != 0)) &&
       (_DAT_142407590 != 0)) &&
      ((param_1 != _DAT_142407590 && (*(int *)(param_1 + 0x3d0) == *(int *)(_DAT_142407590 + 0x130))
       ))) && (uVar12 = effective_movement_speed(_DAT_142407590,0,1,auStack_40),
              (int)uVar12 < (int)uVar17)) {
    uVar17 = uVar12;
  }
  if (9999 < (int)uVar17) {
    uVar17 = 9999;
  }
  if (-1 < (int)uVar17) {
    uVar9 = (ulonglong)uVar17;
  }
  return uVar9;
}

