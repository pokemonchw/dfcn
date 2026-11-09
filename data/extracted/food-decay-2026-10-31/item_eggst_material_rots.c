/* Actual Ghidra output, Steam 53.16, VA 140cc0070..140cc00fe */

ulonglong item_eggst_material_rots(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined2 **)(param_1 + 0xc0);
  puVar1 = *(undefined2 **)(param_1 + 200);
  puVar4 = *(undefined4 **)(param_1 + 0xd8);
  do {
    if (puVar1 <= puVar3) {
      return in_RAX & 0xffffffffffffff00;
    }
    uVar2 = FUN_1414add70(0x1423d14f0,*puVar3,*puVar4);
    in_RAX = 0;
    if (uVar2 != 0) {
      if ((*(int *)(uVar2 + 0x298) < 5) ||
         (uVar2 = *(ulonglong *)(uVar2 + 0x290), (*(byte *)(uVar2 + 4) & 1) == 0)) {
        in_RAX = uVar2 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar2 >> 8),1);
      }
      if ((char)in_RAX != '\0') {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while( true );
}

