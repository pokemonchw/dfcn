/* Actual Ghidra output; current installed Steam 53.17, PE:6aea05a1:02734000; VA 0x1414ca790..0x1414ca992. Function names assigned by analysis. */

ulonglong crop_allowed_on_tile
                    (longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                    int param_5)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 auStackX_8 [4];
  
  iVar7 = param_5;
  uVar6 = (ulonglong)param_5;
  plVar1 = (longlong *)(param_1 + 0x11b408);
  if ((param_5 < 0) ||
     (lVar4 = *plVar1, (ulonglong)(*(longlong *)(param_1 + 0x11b410) - lVar4 >> 3) <= uVar6)) {
    if ((-1 < param_5) &&
       (lVar4 = *plVar1, uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x11b410) - lVar4 >> 3)))
    goto LAB_1414ca821;
  }
  else {
    uVar3 = *(ulonglong *)(uVar6 * 8 + lVar4);
    if ((*(int *)(uVar3 + 0x48) < 10) ||
       (uVar3 = *(ulonglong *)(uVar3 + 0x40), (*(byte *)(uVar3 + 9) & 0x40) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') goto LAB_1414ca977;
LAB_1414ca821:
    uVar3 = *(ulonglong *)(lVar4 + uVar6 * 8);
    if ((*(int *)(uVar3 + 0x48) < 10) ||
       (uVar3 = *(ulonglong *)(uVar3 + 0x40), -1 < *(char *)(uVar3 + 9))) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') goto LAB_1414ca977;
  }
  uVar2 = func_0x00014007f270(param_1,param_2);
  if ((uVar2 >> 0xf & 1) == 0) {
    tile_region_coords(param_1,auStackX_8,&param_5,param_2,param_3,param_4);
    region_biome(*(undefined8 *)(param_1 + 0x11a668),auStackX_8[0],(undefined2)param_5);
    uVar6 = func_0x000140dadb40();
    sVar5 = (short)iVar7;
    uVar3 = uVar6;
    if (-1 < sVar5) {
      uVar3 = (ulonglong)sVar5;
      if (uVar3 < (ulonglong)
                  (*(longlong *)(param_1 + 0x11b410) - *(longlong *)(param_1 + 0x11b408) >> 3)) {
        iVar7 = (int)uVar6;
        if (iVar7 == -1) {
LAB_1414ca8d4:
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x11b408) + uVar3 * 8);
        if (-1 < iVar7) {
          uVar2 = iVar7 >> 3;
          uVar3 = (ulonglong)uVar2;
          if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0x48))) &&
             (uVar3 = *(ulonglong *)(lVar4 + 0x40),
             (*(byte *)((longlong)(int)uVar2 + uVar3) & (byte)(1 << ((byte)uVar6 & 7))) != 0))
          goto LAB_1414ca8d4;
        }
      }
    }
  }
  else {
    uVar3 = FUN_1414eb3a0(param_1,param_2,param_3);
    if (((char)uVar3 != '\0') && (-1 < iVar7)) {
      uVar3 = *(longlong *)(param_1 + 0x11b410) - *plVar1 >> 3;
      if (uVar6 < uVar3) {
        lVar4 = *(longlong *)(*plVar1 + uVar6 * 8);
        iVar7 = *(int *)(lVar4 + 0x48);
        if ((6 < iVar7) &&
           ((uVar3 = *(ulonglong *)(lVar4 + 0x40), (*(byte *)(uVar3 + 6) & 0x20) != 0 ||
            ((6 < iVar7 &&
             (((*(byte *)(uVar3 + 6) & 0x40) != 0 || ((6 < iVar7 && (*(char *)(uVar3 + 6) < '\0'))))
             )))))) goto LAB_1414ca8d4;
      }
    }
  }
LAB_1414ca977:
  return uVar3 & 0xffffffffffffff00;
}

