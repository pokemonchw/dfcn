/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140102db0..0x140102dfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rejected_attack(void)

{
  int *piVar1;
  int iVar2;
  longlong in_RCX;
  int in_EDX;
  int in_R8D;
  
  iVar2 = *(int *)(in_RCX + 0x2c);
  piVar1 = (int *)(in_RCX + 0x30);
  if ((in_EDX == iVar2) && (in_R8D == *piVar1)) {
    return 3;
  }
  if (*(short *)(in_RCX + 0x28) == 9) {
    if ((in_R8D == iVar2) && (in_EDX == *piVar1)) {
      return 5;
    }
  }
  else if ((*(short *)(in_RCX + 0x28) == 10) && (in_R8D == iVar2)) {
    iVar2 = 0;
    if (in_EDX == *piVar1) {
      iVar2 = 5;
    }
    return iVar2;
  }
  return 0;
}

