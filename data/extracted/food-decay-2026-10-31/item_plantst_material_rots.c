/* Actual Ghidra output, Steam 53.16, VA 140cbff80..140cbffe6 */

ulonglong item_plantst_material_rots(longlong *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  uVar3 = FUN_1414add70(0x1423d14f0,uVar1,uVar2);
  if (((uVar3 != 0) && (4 < *(int *)(uVar3 + 0x298))) &&
     (uVar3 = *(ulonglong *)(uVar3 + 0x290), (*(byte *)(uVar3 + 4) & 1) != 0)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}

