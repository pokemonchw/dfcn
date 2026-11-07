/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140102e00..0x140102e5b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rejected_trade(void)

{
  short sVar1;
  int iVar2;
  longlong in_RCX;
  int in_EDX;
  int in_R8D;
  
  sVar1 = *(short *)(in_RCX + 0x28);
  if (sVar1 == 0x10) {
    if ((in_EDX == *(int *)(in_RCX + 0x30)) && (in_R8D == *(int *)(in_RCX + 0x2c))) {
      return -0x14;
    }
  }
  else {
    iVar2 = *(int *)(in_RCX + 0x2c);
    if ((in_EDX == iVar2) && (in_R8D == *(int *)(in_RCX + 0x30))) {
      return -1;
    }
    if (sVar1 == 9) {
      if ((in_R8D == iVar2) && (in_EDX == *(int *)(in_RCX + 0x30))) {
        return -1;
      }
    }
    else if ((sVar1 == 10) && (in_R8D == iVar2)) {
      return (in_EDX != *(int *)(in_RCX + 0x30)) - 1;
    }
  }
  return 0;
}

