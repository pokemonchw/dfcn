/* Actual Ghidra output; current installed Steam PE:6a70a6d9:02711000; VA 0x14014d7f0..0x14014d816. Function names assigned by analysis. */

ulonglong inorganic_flag(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong in_RAX;
  
  if (-1 < param_2) {
    in_RAX = param_1[1] - *param_1 >> 3;
    if ((ulonglong)(longlong)param_2 < in_RAX) {
      if (param_3 == 0xffffffff) {
code_r0x00014014d813:
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      if (-1 < (int)param_3) {
        lVar1 = *(longlong *)(*param_1 + (longlong)param_2 * 8);
        uVar2 = param_3 >> 3;
        in_RAX = (ulonglong)uVar2;
        if (((int)uVar2 < *(int *)(lVar1 + 0x40)) &&
           (in_RAX = *(ulonglong *)(lVar1 + 0x38),
           (*(byte *)(uVar2 + in_RAX) & (byte)(1 << ((byte)param_3 & 7))) != 0))
        goto code_r0x00014014d813;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

