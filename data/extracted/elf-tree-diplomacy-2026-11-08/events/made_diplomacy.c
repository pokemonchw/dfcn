/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x1401030a0..0x1401030e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int made_diplomacy(void)

{
  int iVar1;
  longlong in_RCX;
  int in_EDX;
  int in_R8D;
  
  iVar1 = *(int *)(in_RCX + 0x2c);
  if (*(short *)(in_RCX + 0x28) == 0xd) {
    if (((in_EDX == iVar1) && (in_R8D == *(int *)(in_RCX + 0x30))) ||
       ((in_R8D == iVar1 && (in_EDX == *(int *)(in_RCX + 0x30))))) {
      return -5;
    }
  }
  else {
    if ((in_EDX == iVar1) && (in_R8D == *(int *)(in_RCX + 0x30))) {
      return 1;
    }
    if (in_R8D == iVar1) {
      return (uint)(in_EDX == *(int *)(in_RCX + 0x30));
    }
  }
  return 0;
}

