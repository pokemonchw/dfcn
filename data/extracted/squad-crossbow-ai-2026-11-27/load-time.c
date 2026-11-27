/* compute load delay from weapon parameters and skill | VA [0x1406712f0, 0x1406713c2) | Ghidra decompilation */

int FUN_1406712f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_2 != (longlong *)0x0) && (sVar3 = (**(code **)*param_2)(param_2), sVar3 == 0x18)) {
    iVar1 = *(int *)(param_2[0x1d] + 0x1d4);
    iVar2 = *(int *)(param_2[0x1d] + 0x1d8);
    iVar5 = iVar2;
    if (iVar2 < iVar1) {
      uVar4 = (**(code **)(*param_2 + 0x4f8))(param_2);
      iVar6 = FUN_1413570b0(param_1,uVar4);
      iVar7 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      if (((iVar7 < 0x10) && (iVar5 = ((0xf - iVar7) * iVar1 + iVar7 * iVar2) / 0xf, iVar7 < 0xf))
         && (iVar5 == iVar2)) {
        iVar5 = iVar5 + -1;
      }
    }
    return iVar5;
  }
  return 0;
}
