/* Actual Ghidra output, research name; VA 0x1400fd420..0x1400fd484. */

int effective_volume(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x620))();
  iVar2 = (**(code **)(*param_1 + 0x628))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  iVar1 = iVar1 * iVar3;
  iVar3 = iVar1;
  if (((0 < iVar2) && (iVar3 = iVar1 >> ((byte)iVar2 & 0x1f), 0 < iVar1)) && (iVar3 < 1)) {
    iVar3 = 1;
  }
  return iVar3;
}

