
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e7b7b0(longlong param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  short sVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  short asStackX_10 [4];
  undefined2 auStackX_18 [4];
  undefined2 auStackX_20 [4];
  
  if (_DAT_1418be234 == 4) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x540) - *(longlong *)(param_1 + 0x538) & 0xfffffffffffffffcU) == 0)
  {
    FUN_14104dc30(param_1 + 0x210);
  }
  *(undefined4 *)(param_1 + 0x21b4) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
  func_0x000141554566(param_1 + 0x370,0,0x1c4);
  iVar12 = (int)(*(longlong *)(param_1 + 0x540) - *(longlong *)(param_1 + 0x538) >> 2) + -1;
  lVar15 = (longlong)iVar12;
  plVar19 = _DAT_1424078e8;
  plVar7 = _DAT_1424078f0;
  if (-1 < iVar12) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x538) + lVar15 * 4) = 0;
      lVar15 = lVar15 + -1;
      plVar19 = _DAT_1424078e8;
      plVar7 = _DAT_1424078f0;
    } while (-1 < lVar15);
  }
LAB_140e7b8a0:
  uVar16 = 0;
  if (plVar7 <= plVar19) goto LAB_140e7bb2f;
  plVar5 = (longlong *)*plVar19;
  uVar21 = *(uint *)(plVar5 + 2);
  if ((uVar21 & 0x8310) == 0) {
    if ((uVar21 >> 0xe & 1) == 0) {
      iVar12 = (**(code **)(*plVar5 + 0x478))(plVar5);
      sVar10 = (**(code **)*plVar5)(plVar5);
      piVar1 = (int *)(param_1 + 0x370 + (longlong)sVar10 * 4);
      *piVar1 = *piVar1 + iVar12;
      iVar12 = FUN_140c7e920(plVar5,0,0);
      uVar11 = (**(code **)*plVar5)(plVar5);
      switch(uVar11) {
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xf:
      case 0x10:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x1e:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x2d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x54:
      case 0x57:
        *(int *)(param_1 + 0x55c) = *(int *)(param_1 + 0x55c) + iVar12;
        break;
      default:
        *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + iVar12;
        break;
      case 0x18:
        piVar1 = (int *)(*(longlong *)(param_1 + 0x538) +
                        (longlong)*(short *)(plVar5[0x1d] + 0x28) * 4);
        *piVar1 = *piVar1 + 1;
      case 0x27:
        *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + iVar12;
        break;
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x3c:
        *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x558) + iVar12;
      }
      if ((*(byte *)(plVar5 + 2) & 0x20) == 0) goto LAB_140e7bb24;
      *(int *)(param_1 + 0x568) = *(int *)(param_1 + 0x568) + iVar12;
      plVar19 = plVar19 + 1;
      goto LAB_140e7b8a0;
    }
    if (((uVar21 & 8) != 0) && (lVar15 = plVar5[7], uVar18 = uVar16, plVar5[8] - lVar15 >> 3 != 0))
    {
      do {
        iVar12 = (**(code **)(**(longlong **)(lVar15 + uVar16) + 0x10))();
        if ((iVar12 == 0x12) &&
           (lVar15 = (**(code **)(**(longlong **)(uVar16 + plVar5[7]) + 0x20))(), lVar15 != 0)) {
          cVar9 = func_0x0001413a7620(lVar15);
          if (cVar9 == '\0') goto LAB_140e7bb24;
          break;
        }
        lVar15 = plVar5[7];
        uVar21 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar21;
        uVar16 = uVar16 + 8;
      } while ((ulonglong)(longlong)(int)uVar21 < (ulonglong)(plVar5[8] - lVar15 >> 3));
    }
    asStackX_10[0] = -30000;
    if ((*(uint *)(plVar5 + 2) & 0x10) != 0) goto LAB_140e7bb24;
    if ((*(uint *)(plVar5 + 2) & 8) == 0) {
      asStackX_10[0] = (short)plVar5[1];
      auStackX_20[0] = *(undefined2 *)((longlong)plVar5 + 10);
      auStackX_18[0] = *(undefined2 *)((longlong)plVar5 + 0xc);
    }
    else {
      puVar6 = (undefined8 *)plVar5[8];
      for (puVar14 = (undefined8 *)plVar5[7]; puVar14 < puVar6; puVar14 = puVar14 + 1) {
        iVar12 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
        if (iVar12 == 0xb) {
          lVar15 = (**(code **)(*(longlong *)*puVar14 + 0x18))();
          if (lVar15 != 0) {
            FUN_140ca3790(lVar15,asStackX_10,auStackX_20,auStackX_18);
            goto LAB_140e7ba1d;
          }
        }
        else if ((iVar12 == 0x12) &&
                (lVar15 = (**(code **)(*(longlong *)*puVar14 + 0x20))(), lVar15 != 0)) {
          FUN_14137fd40(lVar15,asStackX_10,auStackX_20,auStackX_18);
          goto LAB_140e7ba1d;
        }
      }
      for (puVar14 = (undefined8 *)plVar5[4]; puVar14 < (undefined8 *)plVar5[5];
          puVar14 = puVar14 + 1) {
        if (*(int *)*puVar14 == 7) {
          lVar15 = *(longlong *)((int *)*puVar14 + 2);
          asStackX_10[0] = *(short *)(lVar15 + 4);
          auStackX_20[0] = *(undefined2 *)(lVar15 + 6);
          auStackX_18[0] = *(undefined2 *)(lVar15 + 8);
          break;
        }
      }
    }
LAB_140e7ba1d:
    if (asStackX_10[0] != -30000) {
      uVar21 = func_0x00014007f270(0x1423f3970,asStackX_10[0],auStackX_20[0],auStackX_18[0]);
      if ((uVar21 >> 9 & 1) == 0) {
        iVar12 = FUN_140c7e920(plVar5,0,0);
        *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + iVar12;
      }
      plVar19 = plVar19 + 1;
      goto LAB_140e7b8a0;
    }
  }
LAB_140e7bb24:
  plVar19 = plVar19 + 1;
  goto LAB_140e7b8a0;
LAB_140e7bb2f:
  piVar1 = (int *)(param_1 + 0x564);
  uVar18 = uVar16;
  if (_DAT_1424103b0 - _DAT_1424103a8 >> 3 != 0) {
    do {
      iVar12 = (**(code **)(**(longlong **)(uVar16 + _DAT_1424103a8) + 0xd0))();
      if ((iVar12 != 0x14) &&
         (iVar12 = (**(code **)(**(longlong **)(uVar16 + _DAT_1424103a8) + 0xd0))(), iVar12 != 0x15)
         ) {
        plVar7 = *(longlong **)(uVar16 + _DAT_1424103a8);
        sVar10 = (short)plVar7[2];
        sVar3 = (short)plVar7[4];
        sVar2 = *(short *)((longlong)plVar7 + 0x1c);
        if ((((-1 < sVar10) &&
             ((((sVar10 < _DAT_14250a55c && (-1 < sVar2)) && (sVar2 < _DAT_14250a560)) &&
              ((-1 < sVar3 && (sVar3 < _DAT_14250a564)))))) && (_DAT_14250a528 != 0)) &&
           (lVar15 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(_DAT_14250a528 + ((longlong)sVar10 >> 4) * 8) +
                        ((longlong)sVar2 >> 4) * 8) + (longlong)sVar3 * 8), lVar15 != 0)) {
          uVar21 = (int)sVar10 & 0x8000000f;
          if ((int)uVar21 < 0) {
            uVar21 = (uVar21 - 1 | 0xfffffff0) + 1;
          }
          uVar23 = (int)sVar2 & 0x8000000f;
          if ((int)uVar23 < 0) {
            uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
          }
          if ((*(uint *)(lVar15 + 0x2a0 + ((longlong)(int)uVar21 * 0x10 + (longlong)(int)uVar23) * 4
                        ) & 0x200) != 0) goto LAB_140e7bc65;
        }
        iVar12 = (**(code **)(*plVar7 + 0x218))(plVar7);
        *piVar1 = *piVar1 + iVar12;
      }
LAB_140e7bc65:
      uVar21 = (int)uVar18 + 1;
      uVar16 = uVar16 + 8;
      uVar18 = (ulonglong)uVar21;
    } while ((ulonglong)(longlong)(int)uVar21 < (ulonglong)(_DAT_1424103b0 - _DAT_1424103a8 >> 3));
  }
  iVar12 = (int)(_DAT_14250a518 - _DAT_14250a510 >> 3) + -1;
  lVar15 = (longlong)iVar12;
  if (-1 < iVar12) {
    do {
      FUN_140554f70(*(undefined8 *)(_DAT_14250a510 + lVar15 * 8),piVar1,param_1 + 0x21b4);
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  iVar12 = 0;
  if (_DAT_1423f39f0 - _DAT_1423f39e8 >> 3 != 0) {
    lVar20 = 0;
    lVar15 = _DAT_1423f39e8;
    lVar24 = _DAT_1423f39f0;
    do {
      lVar17 = *(longlong *)(lVar20 + lVar15);
      sVar10 = *(short *)(lVar17 + 0xc);
      sVar3 = *(short *)(lVar17 + 0x10);
      sVar2 = *(short *)(lVar17 + 0xe);
      if ((((sVar10 < 0) || (_DAT_14250a55c <= sVar10)) ||
          ((sVar2 < 0 || (((_DAT_14250a560 <= sVar2 || (sVar3 < 0)) || (_DAT_14250a564 <= sVar3)))))
          ) || ((_DAT_14250a528 == 0 ||
                (lVar8 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(_DAT_14250a528 + ((longlong)sVar10 >> 4) * 8) +
                            ((longlong)sVar2 >> 4) * 8) + (longlong)sVar3 * 8), lVar8 == 0)))) {
LAB_140e7bda6:
        sVar10 = *(short *)(lVar17 + 0x22);
        iVar22 = 10;
        if (0 < sVar10) {
          iVar22 = (sVar10 + 1) * 10;
        }
        iVar13 = iVar22 * 2;
        if (sVar10 != 5) {
          iVar13 = iVar22;
        }
        *piVar1 = *piVar1 + iVar13;
        lVar15 = _DAT_1423f39e8;
        lVar24 = _DAT_1423f39f0;
      }
      else {
        uVar21 = (int)sVar10 & 0x8000000f;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffff0) + 1;
        }
        uVar23 = (int)sVar2 & 0x8000000f;
        if ((int)uVar23 < 0) {
          uVar23 = (uVar23 - 1 | 0xfffffff0) + 1;
        }
        if ((*(uint *)(lVar8 + 0x2a0 + ((longlong)(int)uVar21 * 0x10 + (longlong)(int)uVar23) * 4) &
            0x200) == 0) goto LAB_140e7bda6;
      }
      iVar12 = iVar12 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar12 < (ulonglong)(lVar24 - lVar15 >> 3));
  }
  iVar12 = 0;
  if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
    lVar20 = 0;
    lVar15 = _DAT_142407548;
    lVar24 = _DAT_142407550;
    do {
      lVar17 = *(longlong *)(lVar20 + lVar15);
      if ((((*(byte *)(lVar17 + 0x110) & 2) == 0) && (cVar9 = func_0x0001413a7620(), cVar9 != '\0'))
         && (iVar22 = 0, *(longlong *)(lVar17 + 0x410) - *(longlong *)(lVar17 + 0x408) >> 3 != 0)) {
        lVar17 = 0;
        do {
          plVar7 = *(longlong **)(lVar17 + *(longlong *)(*(longlong *)(lVar20 + lVar15) + 0x408));
          lVar24 = *plVar7;
          if (((*(uint *)(lVar24 + 0x10) & 0xc000) == 0) &&
             ((uVar4 = *(ushort *)(plVar7 + 1), 9 < uVar4 ||
              ((0x241U >> ((int)(short)uVar4 & 0x1fU) & 1) == 0)))) {
            iVar13 = FUN_140c7e920(lVar24,0,0);
            *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + iVar13;
            lVar15 = _DAT_142407548;
          }
          iVar22 = iVar22 + 1;
          lVar17 = lVar17 + 8;
          lVar24 = _DAT_142407550;
        } while ((ulonglong)(longlong)iVar22 <
                 (ulonglong)
                 (*(longlong *)(*(longlong *)(lVar20 + lVar15) + 0x410) -
                  *(longlong *)(*(longlong *)(lVar20 + lVar15) + 0x408) >> 3));
      }
      iVar12 = iVar12 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar12 < (ulonglong)(lVar24 - lVar15 >> 3));
  }
  *(int *)(param_1 + 0x550) =
       *(int *)(param_1 + 0x560) + *(int *)(param_1 + 0x55c) + *(int *)(param_1 + 0x558) +
       *(int *)(param_1 + 0x554) + *piVar1 + *(int *)(param_1 + 0x56c) + *(int *)(param_1 + 0x568);
  return;
}

