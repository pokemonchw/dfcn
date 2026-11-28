/* Actual Ghidra output; researcher-assigned name. VA 0x1414ca9a0..0x1414caa56; see image.txt for input identity. */

void schedule_column(longlong param_1,short param_2,short param_3,short param_4,short param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x116bd8) != 0) {
    if (param_2 <= param_3) {
      lVar5 = (longlong)param_2 << 3;
      uVar4 = (ulonglong)(ushort)((param_3 - param_2) + 1);
      do {
        if (param_4 <= param_5) {
          lVar2 = (longlong)param_4 << 3;
          uVar3 = (ulonglong)(ushort)((param_5 - param_4) + 1);
          do {
            lVar1 = *(longlong *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 0x116bd8) + lVar5));
            if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x1850))) {
              **(byte **)(lVar1 + 0x1848) = **(byte **)(lVar1 + 0x1848) | 1;
            }
            lVar2 = lVar2 + 8;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        lVar5 = lVar5 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (0 < *(int *)(param_1 + 0x1282a8)) {
      **(byte **)(param_1 + 0x1282a0) = **(byte **)(param_1 + 0x1282a0) | 1;
    }
  }
  return;
}

