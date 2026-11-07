
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140e5f890(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puStackX_8;
  
  iVar7 = (int)((longlong)_DAT_14269bb80 - _DAT_14269bb78 >> 3) + -1;
  if (-1 < iVar7) {
    lVar8 = (longlong)iVar7 * 8;
    lVar6 = _DAT_14269bb78;
    lVar9 = lVar8;
    do {
      puVar2 = *(ushort **)(lVar9 + lVar6);
      if (*(longlong *)(puVar2 + 4) == param_1) {
        uVar1 = *puVar2;
        if (((int)(short)uVar1 == 1) ||
           ((uVar1 < 10 && ((0x205U >> ((int)(short)uVar1 & 0x1fU) & 1) != 0)))) {
          func_0x000141539680(puVar2,0x20);
          lVar6 = _DAT_14269bb78 + lVar8 + 8;
          func_0x00014153ae1a(_DAT_14269bb78 + lVar8,lVar6,(longlong)_DAT_14269bb80 - lVar6);
          _DAT_14269bb80 = _DAT_14269bb80 + -1;
          lVar6 = _DAT_14269bb78;
        }
      }
      lVar8 = lVar8 + -8;
      lVar9 = lVar9 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  puVar4 = (undefined2 *)FUN_141539690(0x20);
  *(undefined8 *)(puVar4 + 4) = 0;
  puVar4[8] = 0xffff;
  *(undefined4 *)(puVar4 + 10) = 0xffffffff;
  *puVar4 = 10;
  *(longlong *)(puVar4 + 4) = param_1;
  *(undefined1 *)(puVar4 + 1) = DAT_1418d6f0e;
  puStackX_8 = puVar4;
  uVar3 = FUN_140eb68b0();
  iVar7 = (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f);
  uVar3 = uVar3 + iVar7 * 0x7fffffff;
  puVar4[2] = (short)(uVar3 / 0x3a3f7) + 10;
  if (_DAT_14269bb80 == _DAT_14269bb88) {
    uVar5 = FUN_1409e5130(iVar7 * -0x7fffffff,_DAT_14269bb80,&puStackX_8);
    return uVar5;
  }
  *_DAT_14269bb80 = puVar4;
  _DAT_14269bb80 = _DAT_14269bb80 + 1;
  return (ulonglong)uVar3 * 0x4651fbd9 & 0xffffffff;
}

