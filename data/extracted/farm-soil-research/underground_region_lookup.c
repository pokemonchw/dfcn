/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA 0x1400bc120..0x1400bc130. Function names assigned by analysis. */

undefined8 underground_region_lookup(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x250);
  iVar5 = 0;
  uVar7 = *(longlong *)(param_1 + 600) - lVar1 >> 3;
  uVar6 = (uint)uVar7;
  if (uVar6 != 0) {
    while (0x40 < (int)uVar6) {
      uVar6 = (uint)(uVar7 >> 1) & 0x7fffffff;
      iVar3 = uVar6 + iVar5;
      if (param_2 < *(int *)(*(longlong *)(lVar1 + (longlong)iVar3 * 8) + 0x80)) {
        iVar3 = iVar5;
      }
      uVar6 = (int)uVar7 - uVar6;
      uVar7 = (ulonglong)uVar6;
      iVar5 = iVar3;
    }
    iVar3 = iVar5 + uVar6;
    if ((iVar3 != -1) && (iVar5 < iVar3)) {
      lVar2 = (longlong)iVar5;
      plVar4 = (longlong *)(lVar1 + lVar2 * 8);
      do {
        if (param_2 == *(int *)(*plVar4 + 0x80)) {
          return *(undefined8 *)(lVar1 + (longlong)iVar5 * 8);
        }
        iVar5 = iVar5 + 1;
        lVar2 = lVar2 + 1;
        plVar4 = plVar4 + 1;
      } while (lVar2 < iVar3);
    }
  }
  return 0;
}

