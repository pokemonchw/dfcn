/* Actual Ghidra output; researcher-assigned name. VA 14014b930..14014b994; see image.txt for input identity. */

undefined8 region_geology_lookup(longlong param_1,int param_2,int param_3)

{
  short sVar1;
  
  if ((((*(longlong *)(param_1 + 0x2b0) != 0) && (-1 < param_2)) &&
      (param_2 < *(int *)(param_1 + 0xa0))) &&
     (((-1 < param_3 && (param_3 < *(int *)(param_1 + 0xa4))) &&
      ((sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)param_2 * 8) +
                           0x68 + (longlong)param_3 * 0x70), -1 < sVar1 &&
       ((ulonglong)(longlong)sVar1 <
        (ulonglong)(*(longlong *)(param_1 + 0x270) - *(longlong *)(param_1 + 0x268) >> 3))))))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x268) + (longlong)sVar1 * 8);
  }
  return 0;
}

