/* Actual Ghidra output; researcher-assigned role. Native entry 1403c54e0; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void stockpile_filter(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined8 **appuStack_58 [2];
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    iVar2 = *(int *)(param_1 + 0xf0);
    uVar7 = uVar5;
    if (0 < iVar2) {
      do {
        uVar6 = (int)uVar7 + 1;
        *(undefined1 *)(*(longlong *)(uVar5 + *(longlong *)(param_1 + 0xd8)) + 0x48) = 1;
        iVar2 = *(int *)(param_1 + 0xf0);
        uVar5 = uVar5 + 8;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar2);
    }
    *(int *)(param_1 + 0xf4) = iVar2;
  }
  else {
    FUN_140070c00(appuStack_58,param_1 + 0x18);
    func_0x0001405463c0(appuStack_58);
    uVar7 = uVar5;
    if (0 < *(int *)(param_1 + 0xf0)) {
      do {
        pppuVar8 = appuStack_58;
        if (0xf < uStack_40) {
          pppuVar8 = (undefined8 ***)appuStack_58[0];
        }
        lVar1 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0xd8));
        plVar4 = (longlong *)(lVar1 + 0x20);
        if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
          plVar4 = (longlong *)*plVar4;
        }
        uStack_68 = uStack_48;
        lVar3 = FUN_1400e2fc0(plVar4,*(undefined8 *)(lVar1 + 0x30),0,pppuVar8);
        if (lVar3 == -1) {
          *(undefined1 *)(lVar1 + 0x48) = 0;
        }
        else {
          *(undefined1 *)(lVar1 + 0x48) = 1;
          *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
        }
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        uVar7 = uVar7 + 8;
      } while ((int)uVar6 < *(int *)(param_1 + 0xf0));
    }
    FUN_140070e80(appuStack_58);
  }
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_88);
  return;
}

