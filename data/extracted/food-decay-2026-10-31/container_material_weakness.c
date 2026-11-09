/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 1414d1d80..1414d1ee1 */

undefined8 container_material_weakness(undefined8 param_1,short param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1414add70(0x1423d14f0,param_2);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x298) < 3) || (-1 < *(char *)(*(longlong *)(lVar2 + 0x290) + 2))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 5;
    }
  }
  lVar2 = FUN_1414add70(0x1423d14f0,param_2,param_3);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x298) < 4) || ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 3) & 0x20) == 0)
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 5;
    }
  }
  lVar2 = FUN_1414add70(0x1423d14f0,param_2,param_3);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x298) < 4) || ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 3) & 0x40) == 0)
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 10;
    }
  }
  lVar2 = FUN_1414add70(0x1423d14f0,param_2,param_3);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x298) < 8) || ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 7) & 0x40) == 0)
       ) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 10;
    }
  }
  lVar2 = FUN_1414add70(0x1423d14f0,param_2,param_3);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x298) < 4) || ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 3) & 1) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 10;
    }
  }
  if ((param_2 != 1) && (param_2 != 2)) {
    return 0;
  }
  return 5;
}

