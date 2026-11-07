
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_140e5d220(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puStackX_8;
  
  *(int *)(param_1 + 0x13cc) = *(int *)(param_1 + 0x13cc) + *(int *)(param_1 + 0x13c8);
  *(undefined4 *)(param_1 + 0x13c8) = 0;
  cVar4 = FUN_1409159a0();
  if ((cVar4 == '\0') ||
     ((iVar5 = FUN_140915c70(param_1,_DAT_142393670), iVar5 < 10 &&
      (iVar5 = FUN_140915c70(param_1), iVar5 < 10)))) {
    iVar5 = 0;
    uVar12 = (longlong)_DAT_14269bb80 - (longlong)_DAT_14269bb78 >> 3;
    puVar9 = _DAT_14269bb78;
    if (uVar12 != 0) {
      do {
        psVar8 = (short *)*puVar9;
        if ((*psVar8 == 2) && (*(longlong *)(psVar8 + 4) == param_1)) {
          return psVar8;
        }
        iVar5 = iVar5 + 1;
        puVar9 = puVar9 + 1;
      } while ((ulonglong)(longlong)iVar5 < uVar12);
    }
    iVar5 = FUN_140915c70(param_1,_DAT_142393670);
    psVar8 = (short *)(ulonglong)(iVar5 - 0x14U);
    if ((int)(iVar5 - 0x14U) < 10) {
      iVar5 = FUN_140915c70(param_1,_DAT_142393678);
      psVar8 = (short *)(ulonglong)(iVar5 - 0x14U);
      if ((int)(iVar5 - 0x14U) < 10) {
        puVar7 = (undefined2 *)FUN_141539690(0x20);
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar7[8] = 0xffff;
        *(undefined4 *)(puVar7 + 10) = 0xffffffff;
        *puVar7 = 2;
        *(undefined1 *)(puVar7 + 1) = DAT_1418d6f0e;
        puStackX_8 = puVar7;
        uVar6 = FUN_140eb68b0();
        iVar5 = (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f);
        puVar7[2] = (short)((ulonglong)(uVar6 + iVar5 * 0x7fffffff) / 0x20bc3b) + 1000;
        *(longlong *)(puVar7 + 4) = param_1;
        if (_DAT_14269bb80 != _DAT_14269bb88) {
          *_DAT_14269bb80 = puVar7;
          _DAT_14269bb80 = _DAT_14269bb80 + 1;
          return (short *)0x3e8;
        }
        psVar8 = (short *)FUN_1409e5130(iVar5 * -0x7fffffff,_DAT_14269bb80,&puStackX_8);
      }
    }
    return psVar8;
  }
  iVar5 = (int)((longlong)_DAT_14269bb80 - (longlong)_DAT_14269bb78 >> 3) + -1;
  if (-1 < iVar5) {
    lVar10 = (longlong)iVar5 * 8;
    puVar9 = _DAT_14269bb78;
    lVar11 = lVar10;
    do {
      puVar3 = *(ushort **)(lVar11 + (longlong)puVar9);
      if (*(longlong *)(puVar3 + 4) == param_1) {
        uVar2 = *puVar3;
        if (((int)(short)uVar2 == 1) ||
           ((uVar2 < 10 && ((0x205U >> ((int)(short)uVar2 & 0x1fU) & 1) != 0)))) {
          func_0x000141539680(puVar3,0x20);
          lVar1 = (longlong)_DAT_14269bb78 + lVar10 + 8;
          func_0x00014153ae1a((longlong)_DAT_14269bb78 + lVar10,lVar1,
                              (longlong)_DAT_14269bb80 - lVar1);
          _DAT_14269bb80 = _DAT_14269bb80 + -1;
          puVar9 = _DAT_14269bb78;
        }
      }
      lVar10 = lVar10 + -8;
      lVar11 = lVar11 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  puVar7 = (undefined2 *)FUN_141539690(0x20);
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[8] = 0xffff;
  *(undefined4 *)(puVar7 + 10) = 0xffffffff;
  *puVar7 = 10;
  *(longlong *)(puVar7 + 4) = param_1;
  *(undefined1 *)(puVar7 + 1) = DAT_1418d6f0e;
  puStackX_8 = puVar7;
  uVar6 = FUN_140eb68b0();
  iVar5 = (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f);
  uVar6 = uVar6 + iVar5 * 0x7fffffff;
  puVar7[2] = (short)(uVar6 / 0x3a3f7) + 10;
  if (_DAT_14269bb80 != _DAT_14269bb88) {
    *_DAT_14269bb80 = puVar7;
    _DAT_14269bb80 = _DAT_14269bb80 + 1;
    return (short *)((ulonglong)uVar6 * 0x4651fbd9 & 0xffffffff);
  }
  psVar8 = (short *)FUN_1409e5130(iVar5 * -0x7fffffff,_DAT_14269bb80,&puStackX_8);
  return psVar8;
}

