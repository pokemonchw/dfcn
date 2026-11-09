/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140c8e1d0..140c8e2bb */

undefined8 unit_item_inventory_mode(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStackX_8 [8];
  
  if ((((*(uint *)(param_1 + 0x10) & 0x400832) == 0) && ((*(byte *)(param_1 + 0x14) & 8) == 0)) &&
     ((*(uint *)(param_1 + 0x10) & 0xa80408) == 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    for (puVar6 = *(undefined8 **)(param_1 + 0x38); puVar6 < puVar1; puVar6 = puVar6 + 1) {
      iVar4 = (**(code **)(*(longlong *)*puVar6 + 0x10))();
      if (iVar4 == 0x24) {
        lVar5 = (**(code **)(*(longlong *)*puVar6 + 0x30))();
        if ((lVar5 != 0) && (cVar3 = FUN_140559180(lVar5,param_2,auStackX_8), cVar3 == '\x02')) {
          return 2;
        }
      }
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      puVar1 = *(undefined8 **)(param_2 + 0x458);
      for (puVar6 = *(undefined8 **)(param_2 + 0x450); puVar6 < puVar1; puVar6 = puVar6 + 1) {
        uVar2 = *puVar6;
        cVar3 = FUN_140559180(uVar2,param_2,auStackX_8);
        if ((cVar3 == '\x02') &&
           (cVar3 = FUN_1405587b0(uVar2,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 10),
                                  *(undefined2 *)(param_1 + 0xc)), cVar3 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

