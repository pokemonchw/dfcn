/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140976010..0x1409761c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140976010(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  if (((param_2 != 0) && (param_3 != 0)) && ((*(short *)(param_3 + 4) - 1U & 0xfffb) != 0)) {
    plVar4 = (longlong *)FUN_1408f6410();
    (**(code **)(*plVar4 + 0x20))(plVar4);
    puVar1 = (undefined4 *)plVar4[0x1c];
    if (puVar1 == (undefined4 *)plVar4[0x1d]) {
      FUN_140070e20(plVar4 + 0x1b,puVar1,param_1 + 4);
    }
    else {
      *puVar1 = *(undefined4 *)(param_1 + 4);
      plVar4[0x1c] = plVar4[0x1c] + 4;
    }
    puVar1 = (undefined4 *)plVar4[0x1f];
    if (puVar1 == (undefined4 *)plVar4[0x20]) {
      FUN_140070e20(plVar4 + 0x1e,puVar1,param_2 + 4);
    }
    else {
      *puVar1 = *(undefined4 *)(param_2 + 4);
      plVar4[0x1f] = plVar4[0x1f] + 4;
    }
    FUN_1400b9e70(*(undefined4 *)(param_1 + 4),plVar4 + 0x21);
    FUN_1400b9e70(*(undefined4 *)(param_2 + 4),plVar4 + 0x21);
    if (param_4 != 0) {
      FUN_140975e30(plVar4 + 0x24,param_4);
    }
    FUN_140931860(param_1,plVar4 + 0xc,0x1d);
    *(undefined4 *)(plVar4 + 7) = _DAT_1423746f4;
    *(undefined4 *)(plVar4 + 8) = _DAT_142387fc4;
    uVar3 = FUN_140eb68b0();
    if ((uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff < 0x1999999a
        ) && ((*(int *)(param_1 + 0x1d3c) < 100 || (*(int *)(param_2 + 0x1d3c) < 100)))) {
      uVar6 = 1;
    }
    else {
      uVar6 = 5;
    }
    *(undefined2 *)(param_3 + 4) = uVar6;
    lVar5 = plVar4[0xb];
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) & 0xfffffffb;
    *(int *)(param_3 + 8) = (int)lVar5;
    lVar5 = FUN_1400ff950(param_2 + 0x1028,*(undefined4 *)(param_1 + 4));
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 4) = uVar6;
      lVar2 = plVar4[0xb];
      *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) & 0xfffffffb;
      *(int *)(lVar5 + 8) = (int)lVar2;
    }
  }
  return;
}

