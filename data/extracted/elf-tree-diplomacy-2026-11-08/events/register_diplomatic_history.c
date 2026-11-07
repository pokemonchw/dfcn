/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140994330..0x1409943fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140994330(undefined8 param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_3 != -1) && (param_4 != -1)) &&
     ((_DAT_1423d1800 - _DAT_1423d17f8 & 0xfffffffffffffff8U) != 0)) {
    lVar1 = FUN_1400ba0a0(param_3,&DAT_1423d17f8);
    lVar2 = FUN_1400ba0a0(param_4,&DAT_1423d17f8);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      lVar1 = FUN_1400ff950(lVar1 + 0x1028,param_4);
      lVar2 = FUN_1400ff950(lVar2 + 0x1028,param_3);
      FUN_1400b9e70(param_2,lVar1 + 0x10);
      FUN_1400b9e70(param_2,lVar2 + 0x10);
    }
  }
  return;
}

