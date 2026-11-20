/* Actual Ghidra output, research name; VA 0x140ccac10..0x140ccaccd. */

void siege_set_edge(longlong param_1,short param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_1414c6fe0(0x1423f3970,*(undefined2 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc))
  ;
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return;
  }
  iVar2 = *(int *)(lVar1 + 0x284);
  if (param_2 == 1) {
    iVar2 = iVar2 * 6;
  }
  else if (param_2 == 2) {
    iVar2 = iVar2 * 7;
  }
  else if (param_2 == 3) {
    iVar2 = iVar2 * 8;
  }
  else {
    if (param_2 != 4) {
      if (param_2 != 5) {
        *(int *)(param_1 + 0xf0) = iVar2 / 2;
        return;
      }
      goto LAB_140ccaca7;
    }
    iVar2 = iVar2 * 9;
  }
  iVar2 = iVar2 / 10;
LAB_140ccaca7:
  *(int *)(param_1 + 0xf0) = iVar2;
  return;
}

