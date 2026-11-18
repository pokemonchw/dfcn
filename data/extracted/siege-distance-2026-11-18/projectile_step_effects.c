/* Actual Ghidra output, research name; VA 0x140ebf240..0x140ebf471. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong projectile_step_effects(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  short sVar9;
  
  uVar8 = FUN_141460470(0x1423f3970,*(undefined2 *)(param_1 + 0x2c),*(undefined2 *)(param_1 + 0x2e),
                        *(undefined2 *)(param_1 + 0x30),0,0,0,0,0);
  if ((char)uVar8 != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x2c);
    sVar9 = *(short *)(param_1 + 0x30) + -1;
    uVar2 = *(ushort *)(param_1 + 0x2e);
    if (((((-1 < (short)uVar1) &&
          (uVar8 = (ulonglong)(uint)(int)(short)uVar1, (short)uVar1 < _DAT_14250a55c)) &&
         (-1 < (short)uVar2)) &&
        ((((uVar8 = (ulonglong)(uint)(int)(short)uVar2, (short)uVar2 < _DAT_14250a560 &&
           (-1 < sVar9)) &&
          ((uVar8 = (ulonglong)(uint)(int)sVar9, sVar9 < _DAT_14250a564 &&
           ((_DAT_14250a528 != 0 &&
            (uVar8 = *(ulonglong *)
                      (*(longlong *)(_DAT_14250a528 + ((longlong)(short)uVar1 >> 4) * 8) +
                      ((longlong)(short)uVar2 >> 4) * 8),
            *(longlong *)(uVar8 + (longlong)sVar9 * 8) != 0)))))) &&
         ((int)(uint)uVar1 < _DAT_14250a55c)))) &&
       ((((int)(uint)uVar2 < _DAT_14250a560 &&
         (uVar8 = (ulonglong)(uint)(int)sVar9, sVar9 < _DAT_14250a564)) &&
        (uVar8 = FUN_1414c3aa0(0x1423f3970,uVar1,uVar2), (char)uVar8 != '\0')))) {
      uVar6 = callee_140069640(0x1423f3970,uVar1);
      uVar6 = (uVar6 & 7) - 6;
      uVar8 = (ulonglong)uVar6;
      if ((uVar6 != 0) &&
         ((uVar6 != 1 || (uVar8 = FUN_1405c17f0(0x142410388,uVar1,uVar2), (char)uVar8 == '\0')))) {
        uVar6 = FUN_140ece790();
        uVar3 = *(undefined2 *)(param_1 + 0x2e);
        uVar4 = *(undefined2 *)(param_1 + 0x2c);
        sVar9 = *(short *)(param_1 + 0x30);
        uVar5 = callee_1400695b0(0x1423f3970,uVar4,uVar3);
        iVar7 = callee_140ebefe0(uVar5);
        uVar6 = uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff;
        uVar8 = (ulonglong)uVar6 * 0xc7ffffaf & 0xffffffff;
        if (iVar7 <= (int)(uVar6 / 0x147ae15)) {
          *(short *)(param_1 + 0x36) = sVar9;
          *(short *)(param_1 + 0x24) = sVar9;
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
          *(short *)(param_1 + 0x2a) = sVar9 + -1;
          *(undefined2 *)(param_1 + 0x32) = uVar4;
          *(undefined2 *)(param_1 + 0x34) = uVar3;
          *(undefined2 *)(param_1 + 0x20) = uVar4;
          *(undefined2 *)(param_1 + 0x22) = uVar3;
          *(undefined2 *)(param_1 + 0x26) = uVar4;
          *(undefined2 *)(param_1 + 0x28) = uVar3;
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(param_1 + 0x3c) = 100;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0x50005;
          return CONCAT71((int7)(uVar8 >> 8),1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}

