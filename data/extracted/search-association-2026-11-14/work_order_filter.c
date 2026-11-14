/* Actual Ghidra output; researcher-assigned role. Native entry 1403cc280; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void work_order_filter(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 **appuStack_58 [2];
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((-1 < iVar1) &&
     (iVar1 < (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3))) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8);
      plVar3 = *(longlong **)(lVar2 + 0x18);
      for (plVar5 = *(longlong **)(lVar2 + 0x10); plVar5 < plVar3; plVar5 = plVar5 + 1) {
        *(undefined1 *)(*plVar5 + 0x90) = 1;
      }
    }
    else {
      FUN_140070c00(appuStack_58,param_1 + 0x50);
      func_0x0001405463c0(appuStack_58);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x40) * 8);
      plVar3 = *(longlong **)(lVar2 + 0x18);
      for (plVar5 = *(longlong **)(lVar2 + 0x10); plVar5 < plVar3; plVar5 = plVar5 + 1) {
        lVar2 = *plVar5;
        pppuVar7 = appuStack_58;
        if (0xf < uStack_40) {
          pppuVar7 = (undefined8 ***)appuStack_58[0];
        }
        plVar6 = (longlong *)(lVar2 + 0x70);
        if (0xf < *(ulonglong *)(lVar2 + 0x88)) {
          plVar6 = (longlong *)*plVar6;
        }
        uStack_68 = uStack_48;
        lVar4 = FUN_1400e2fc0(plVar6,*(undefined8 *)(lVar2 + 0x80),0,pppuVar7);
        *(bool *)(lVar2 + 0x90) = lVar4 != -1;
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      FUN_140070e80(appuStack_58);
    }
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}

