/* Effective weapon skill | entry 0x141357010, tail target 0x1413570b0 | Ghidra decompilation */

int FUN_141357010(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  sVar2 = 99;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == '\0') {
      sVar2 = (**(code **)(*param_2 + 0x4f8))(param_2);
    }
    else {
      sVar2 = (**(code **)(*param_2 + 0x4f0))();
    }
  }
  if ((*(longlong *)(param_1 + 0xa98) == 0) || (sVar2 == -1)) {
    return 0;
  }
  iVar7 = 0;
  lVar4 = FUN_1400bb7d0(sVar2,*(longlong *)(param_1 + 0xa98) + 0x218);
  if ((lVar4 != 0) && (iVar7 = *(int *)(lVar4 + 4) - *(int *)(lVar4 + 0x10), iVar7 < 0)) {
    iVar7 = 0;
  }
  if ((0 < *(int *)(param_1 + 0x81c)) && (*(short *)(param_1 + 0x814) == -1)) {
    iVar7 = iVar7 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7fc)) && (*(short *)(param_1 + 0x814) == -1)) {
    iVar7 = iVar7 >> 1;
  }
  if ((0 < *(short *)(param_1 + 0x7fe)) && (*(short *)(param_1 + 0x814) == -1)) {
    iVar7 = iVar7 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x820)) && (*(short *)(param_1 + 0x814) == -1)) {
    iVar7 = iVar7 >> 1;
  }
  if ((0 < *(int *)(param_1 + 0x980)) && (*(short *)(param_1 + 0x814) == -1)) {
    iVar7 = iVar7 >> 1;
  }
  iVar3 = FUN_14139bee0(param_1);
  iVar6 = iVar7 >> 2;
  if (iVar3 != 0) {
    iVar6 = iVar7;
  }
  if (((99 < *(int *)(param_1 + 0x818)) && (*(short *)(param_1 + 0x814) != 0)) &&
     (*(short *)(param_1 + 0x360) == -1)) {
    iVar6 = iVar6 >> 1;
  }
  iVar7 = *(int *)(param_1 + 0x984);
  if ((1999 < iVar7) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((3999 < iVar7) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  if ((5999 < iVar7) && (*(short *)(param_1 + 0x814) != 0)) {
    iVar6 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
  iVar7 = iVar6;
  if ((*(int *)(param_1 + 0x1280) < 0x15) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x1278) + 0x14) & 4) == 0)) {
    if (((*(uint *)(param_1 + 0x82c) & 0x10000000) != 0) ||
       ((*(uint *)(param_1 + 0x828) & 0x10000000) == 0)) goto code_r0x0001413572a8;
  }
  else if ((*(uint *)(param_1 + 0x82c) & 0x10000000) != 0) goto code_r0x0001413572a8;
  for (puVar5 = *(undefined8 **)(param_1 + 0x9a8); iVar3 = 0,
      puVar5 < *(undefined8 **)(param_1 + 0x9b0); puVar5 = puVar5 + 1) {
    if (*(short *)*puVar5 == 0x2e) {
      piVar8 = (int *)((short *)*puVar5 + 2);
      iVar3 = 0;
      if (piVar8 != (int *)0x0) {
        iVar3 = *piVar8;
      }
      break;
    }
  }
  iVar7 = iVar6 >> 1;
  if (iRam00000001418be238 == 1) {
    if (0x24e9ff < iVar3) goto code_r0x0001413572a8;
    bVar9 = SBORROW4(iVar3,0x127500);
    iVar1 = -0x127500;
  }
  else {
    if (0x626ff < iVar3) goto code_r0x0001413572a8;
    bVar9 = SBORROW4(iVar3,0x49d40);
    iVar1 = -0x49d40;
  }
  iVar7 = iVar6;
  if (bVar9 == iVar3 + iVar1 < 0) {
    iVar7 = (int)((iVar6 * 3 >> 0x1f & 3U) + iVar6 * 3) >> 2;
  }
code_r0x0001413572a8:
  iVar6 = *(int *)(param_1 + 0x98c);
  iVar3 = iVar7 >> 1;
  if (iRam00000001418be238 == 0) {
    if (iVar6 < 50000) {
      iVar3 = iVar7;
    }
    iVar7 = iVar3 >> 1;
    if (*(int *)(param_1 + 0x988) < 75000) {
      iVar7 = iVar3;
    }
    iVar6 = iVar7 >> 1;
    if (*(int *)(param_1 + 0x990) < 150000) {
      iVar6 = iVar7;
    }
    return iVar6;
  }
  if (iVar6 < 0x54600) {
    if (iVar6 < 0x2a300) {
      iVar3 = iVar7;
      if (0x1c1ff < iVar6) {
        iVar3 = (iVar7 * 9) / 10;
      }
    }
    else {
      iVar3 = (int)((iVar7 * 3 >> 0x1f & 3U) + iVar7 * 3) >> 2;
    }
  }
  iVar7 = *(int *)(param_1 + 0x988);
  if (iVar7 < 0x278d00) {
    if (iVar7 < 0x127500) {
      if (0x2a2ff < iVar7) {
        iVar3 = (iVar3 * 9) / 10;
      }
    }
    else {
      iVar3 = (int)((iVar3 * 3 >> 0x1f & 3U) + iVar3 * 3) >> 2;
    }
  }
  else {
    iVar3 = iVar3 >> 1;
  }
  iVar7 = *(int *)(param_1 + 0x990);
  if (0xd2eff < iVar7) {
    return iVar3 >> 2;
  }
  if (0x545ff < iVar7) {
    return iVar3 >> 1;
  }
  if (iVar7 < 0x3f480) {
    if (0x2a2ff < iVar7) {
      iVar3 = (iVar3 * 9) / 10;
    }
    return iVar3;
  }
  return (int)((iVar3 * 3 >> 0x1f & 3U) + iVar3 * 3) >> 2;
}

