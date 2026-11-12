
ulonglong FUN_141475520(longlong param_1,short param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  if (((((ushort)(param_2 - 0x1a3U) < 200) && (-1 < param_3)) &&
      (uVar3 < (ulonglong)
               (*(longlong *)(param_1 + 0x11b410) - *(longlong *)(param_1 + 0x11b408) >> 3))) &&
     (-1 < (short)(param_2 - 0x1a3U))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x11b408) + uVar3 * 8);
    lVar1 = *(longlong *)(lVar2 + 0x2a0);
    if (((longlong)param_2 - 0x1a3U < (ulonglong)(*(longlong *)(lVar2 + 0x2a8) - lVar1 >> 3)) &&
       (lVar2 = *(longlong *)(lVar1 + ((longlong)param_2 - 0x1a3U) * 8), lVar2 != 0))
    goto LAB_1414755a2;
  }
  if (((ushort)(param_2 - 0x13U) < 200) || ((ushort)(param_2 - 0xdbU) < 200)) {
    lVar2 = FUN_14071b460(param_1 + 0x11b558,param_2,param_3);
    if (lVar2 != 0) {
LAB_1414755a2:
      return (ulonglong)*(ushort *)(lVar2 + 0x4e0);
    }
  }
  if (((param_2 == 0) && (-1 < param_3)) &&
     ((uVar3 < (ulonglong)
               (*(longlong *)(param_1 + 0x11b3e0) - *(longlong *)(param_1 + 0x11b3d8) >> 3) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x11b3d8) + uVar3 * 8), lVar2 != 0)))) {
    return (ulonglong)*(ushort *)(lVar2 + 0x688);
  }
  return 0xffffffff;
}

