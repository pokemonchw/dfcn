/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x14091e570..0x14091e697 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091e570(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puStackX_8;
  
  lVar3 = FUN_1400b9dc0(_DAT_142393670,param_1 + 0x1028);
  if ((lVar3 == 0) || ((*(short *)(lVar3 + 4) != 1 && (1 < (ushort)(*(short *)(lVar3 + 4) - 4U)))))
  {
    iVar1 = FUN_14091e6a0();
    if (-0x1f < iVar1) {
      iVar1 = FUN_14091e6a0();
      if (-0x1f < iVar1) {
        puVar4 = (undefined2 *)FUN_141539690();
        *(undefined8 *)(puVar4 + 4) = 0;
        puVar4[8] = 0xffff;
        *(undefined4 *)(puVar4 + 10) = 0xffffffff;
        *puVar4 = 0;
        *(undefined1 *)(puVar4 + 1) = DAT_1418d6f0e;
        puStackX_8 = puVar4;
        uVar2 = FUN_140eb68b0();
        iVar1 = (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f);
        puVar4[2] = (short)((ulonglong)(uVar2 + iVar1 * 0x7fffffff) / 0x20bc3b) + 1000;
        *(longlong *)(puVar4 + 4) = param_1;
        if (_DAT_14269bb80 != _DAT_14269bb88) {
          *_DAT_14269bb80 = puVar4;
          _DAT_14269bb80 = _DAT_14269bb80 + 1;
          return;
        }
        FUN_1409e5130(iVar1 * -0x7fffffff,_DAT_14269bb80,&puStackX_8);
      }
    }
  }
  return;
}

