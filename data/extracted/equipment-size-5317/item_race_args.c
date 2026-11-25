/* steam 53.17; item_race_args; RVA 0x1379760..0x13797c3 */

void equipment_item_race_args(longlong *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x590))();
  uVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = (**(code **)*param_1)(param_1);
  equipment_size_compare(uVar3,uVar2,uVar1,param_2);
  return;
}

