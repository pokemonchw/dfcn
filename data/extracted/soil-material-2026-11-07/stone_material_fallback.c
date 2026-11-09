/* Actual Ghidra output; researcher-assigned name. VA 14142b930..14142ba6c; see image.txt for input identity. */

uint stone_material_fallback
               (longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  short asStackX_8 [4];
  short asStack_18 [8];
  
  tile_biome_region(param_1,asStack_18,asStackX_8,param_2,param_3,param_4);
  lVar4 = region_geology_lookup
                    (*(undefined8 *)(param_1 + 0x11a638),(int)asStack_18[0],(int)asStackX_8[0]);
  uVar3 = 0;
  if (lVar4 != 0) {
    plVar2 = *(longlong **)(lVar4 + 8);
    iVar5 = 0;
    uVar7 = *(longlong *)(lVar4 + 0x10) - (longlong)plVar2 >> 3;
    plVar6 = plVar2;
    if (uVar7 != 0) {
      do {
        iVar1 = *(int *)(*plVar6 + 4);
        if ((((iVar1 < 0) ||
             ((ulonglong)
              (*(longlong *)(param_1 + 0x11b3b0) - *(longlong *)(param_1 + 0x11b3a8) >> 3) <=
              (ulonglong)(longlong)iVar1)) ||
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x11b3a8) + (longlong)iVar1 * 8),
            *(int *)(lVar4 + 0x40) < 2)) || ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 1) & 8) == 0))
        {
          return *(uint *)(plVar2[iVar5] + 4);
        }
        iVar5 = iVar5 + 1;
        plVar6 = plVar6 + 1;
      } while ((ulonglong)(longlong)iVar5 < uVar7);
    }
  }
  uVar7 = *(longlong *)(param_1 + 0x11b3b0) - *(longlong *)(param_1 + 0x11b3a8) >> 3;
  if (1 < (uint)uVar7) {
    uVar3 = FUN_140e5e1e0();
    uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            ((int)(0x7fffffff / (uVar7 & 0xffffffff)) + 1U);
  }
  return uVar3;
}

