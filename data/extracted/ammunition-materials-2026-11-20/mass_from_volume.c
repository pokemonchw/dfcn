/* Actual Ghidra output, research name; VA 0x1400fcf60..0x1400fd0aa. */

void mass_from_volume(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  if ((0 < param_2) && (0 < (int)param_3)) {
    param_2 = param_2 * 10;
    if (param_2 < 0x2711) {
      *param_1 = (int)(param_2 * param_3) / 1000000;
      param_1[1] = (int)(param_2 * param_3) % 1000000;
      return;
    }
    if (999999 < param_2) {
      iVar3 = param_2 / 1000000;
      param_2 = param_2 % 1000000;
      iVar3 = iVar3 * param_3;
    }
    iVar4 = (param_2 / 10000) * 10000;
    iVar1 = (param_2 % 10000) * param_3;
    iVar2 = iVar1 % 1000000 + (param_3 % 100) * iVar4;
    param_1[1] = iVar2 % 1000000;
    *param_1 = (iVar4 / 10000) * ((int)((param_3 / 100) * 100) / 100) + iVar2 / 1000000 +
               iVar1 / 1000000 + iVar3;
  }
  return;
}

