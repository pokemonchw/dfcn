/* Actual Ghidra output, Steam 53.16, VA 14028a250..14028a28a */

bool item_toolst_food_storage(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xe0))(param_1,0xb);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    return iVar2 < 1;
  }
  return false;
}

