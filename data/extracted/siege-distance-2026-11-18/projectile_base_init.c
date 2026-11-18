/* Actual Ghidra output, research name; VA 0x140ebf110..0x140ebf23a. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * projectile_base_init(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = &UNK_1416794a8;
  param_1[10] = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0xffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffffffffffff;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (_DAT_142410380 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_1415530e0(0x18);
    puVar3[2] = 0;
    *puVar3 = param_1;
    puVar3[1] = 0x142410370;
    puVar3[2] = _DAT_142410380;
    puVar2 = puVar3;
    if (_DAT_142410380 != (undefined8 *)0x0) {
      _DAT_142410380[1] = puVar3;
    }
  }
  else {
    puVar3 = (undefined8 *)_DAT_142410380[2];
    puVar2 = _DAT_142410380;
    while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined8 *)puVar1[2];
    }
    puVar3 = (undefined8 *)FUN_1415530e0(0x18);
    puVar3[2] = 0;
    *puVar3 = param_1;
    puVar3[1] = puVar2;
    puVar2[2] = puVar3;
    puVar2 = _DAT_142410380;
  }
  _DAT_142410380 = puVar2;
  param_1[1] = puVar3;
  if (param_2 == '\0') {
    *(int *)(param_1 + 2) = _DAT_14238fe08;
    _DAT_14238fe08 = _DAT_14238fe08 + 1;
  }
  return param_1;
}

