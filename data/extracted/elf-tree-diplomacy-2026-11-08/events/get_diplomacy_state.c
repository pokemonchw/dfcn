/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x1400ff950..0x1400ffa7c */

int * FUN_1400ff950(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piStackX_8;
  
  piVar4 = (int *)FUN_1400b9dc0(param_2,param_1);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_141539690(0x48);
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = 0;
    piVar4[0xd] = 0;
    piVar4[0xe] = 0;
    piVar4[0xf] = 0;
    *(undefined2 *)(piVar4 + 1) = 0;
    piVar4[2] = -1;
    piVar4[0x10] = 0;
    piVar4[0x11] = 0;
    *piVar4 = param_2;
    plVar1 = (longlong *)param_1[1];
    plVar2 = (longlong *)*param_1;
    uVar5 = (longlong)plVar1 - (longlong)plVar2 >> 3;
    while (uVar3 = uVar5, 0 < (longlong)uVar3) {
      uVar5 = uVar3 >> 1;
      if (*(int *)plVar2[uVar5] < param_2) {
        plVar2 = plVar2 + uVar5 + 1;
        uVar5 = uVar3 + (-1 - uVar5);
      }
    }
    if ((plVar2 == plVar1) || (*(int *)*plVar2 != param_2)) {
      piStackX_8 = piVar4;
      if (plVar1 == (longlong *)param_1[2]) {
        FUN_1400bad30(param_1,plVar2,&piStackX_8);
      }
      else if (plVar2 == plVar1) {
        *plVar1 = (longlong)piVar4;
        param_1[1] = param_1[1] + 8;
      }
      else {
        *plVar1 = plVar1[-1];
        param_1[1] = param_1[1] + 8;
        supplier_0x14153ae1a(plVar2 + 1,plVar2);
        *plVar2 = (longlong)piVar4;
      }
    }
  }
  return piVar4;
}

