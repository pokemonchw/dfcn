/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140a6ab80..0x140a6abf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int concluded_diplomacy_trade(void)

{
  longlong in_RCX;
  int in_EDX;
  int in_R8D;
  
  if (((in_EDX == *(int *)(in_RCX + 0x28)) && (in_R8D == *(int *)(in_RCX + 0x2c))) ||
     ((in_EDX == *(int *)(in_RCX + 0x2c) && (in_R8D == *(int *)(in_RCX + 0x28))))) {
    switch(*(undefined4 *)(in_RCX + 0x38)) {
    case 0:
      return 1;
    case 1:
      return 3;
    case 2:
      return 5;
    case 0xfffffffd:
      return -5;
    case 0xfffffffe:
      return -3;
    case 0xffffffff:
      return -1;
    }
  }
  return 0;
}

