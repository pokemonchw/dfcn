/* Actual Ghidra output, research name; VA 0x1400fd210..0x1400fd258. */

void item_weight_calculate(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  uVar1 = (**(code **)(*param_1 + 0x168))();
  uVar2 = effective_volume(param_1);
  mass_from_volume((longlong)param_1 + 0x74,uVar2,uVar1);
  return;
}

