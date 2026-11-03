/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA 0x14014e100..0x14014e2a7. Function names assigned by analysis. */

ulonglong tile_geological_material(longlong param_1,ushort param_2,ushort param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  short asStackX_10 [4];
  short asStack_18 [8];
  
  if (((((-1 < (short)param_2) && ((int)(short)param_2 < *(int *)(param_1 + 0x116bec))) &&
       (-1 < (short)param_3)) &&
      (((int)(short)param_3 < *(int *)(param_1 + 0x116bf0) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x116bf4) &&
      ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
       (lVar3 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x116bb8) +
                     ((ulonglong)(longlong)(short)param_2 >> 4) * 8) +
                   ((ulonglong)(longlong)(short)param_3 >> 4) * 8) + (longlong)param_4 * 8),
       lVar3 != 0)))))) {
    uVar2 = *(uint *)(lVar3 + 0x2a0 +
                     ((ulonglong)(param_2 & 0xf) * 0x10 + (ulonglong)(param_3 & 0xf)) * 4);
    uVar4 = uVar2 >> 10 & 1;
    uVar1 = uVar4 + 2;
    if ((uVar2 >> 0xb & 1) == 0) {
      uVar1 = uVar4;
    }
    uVar4 = uVar1 + 4;
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar4 = uVar1;
    }
    FUN_14053faa0(lVar3,asStack_18,asStackX_10,(ulonglong)(param_2 & 0xf),param_3 & 0xf);
    lVar3 = func_0x00014014dfd0(*(undefined8 *)(param_1 + 0x11a668),(int)asStack_18[0],
                                (int)asStackX_10[0]);
    if (lVar3 != 0) {
      uVar1 = uVar4 + 8;
      if ((uVar2 & 0x2000) == 0) {
        uVar1 = uVar4;
      }
      if ((ulonglong)uVar1 <
          (ulonglong)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 3)) {
        return (ulonglong)
               *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar1 * 8) + 4);
      }
    }
  }
  uVar5 = *(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3;
  if ((uint)uVar5 < 2) {
    uVar5 = 0;
  }
  else {
    uVar2 = random_u32();
    uVar5 = (ulonglong)
            (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            (ulonglong)((int)(0x7fffffff / (uVar5 & 0xffffffff)) + 1);
  }
  return uVar5;
}

