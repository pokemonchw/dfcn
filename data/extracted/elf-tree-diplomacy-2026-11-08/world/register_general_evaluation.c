/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x140994b60..0x140994d74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140994b60(longlong param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sStackX_18;
  
  if (param_3 != 0) {
    sVar6 = 0;
    uVar8 = 0xb;
    uVar9 = 0x11;
    lVar7 = _DAT_1424eca68;
    do {
      switch(sVar6) {
      case 0:
        sStackX_18 = 3;
        break;
      case 1:
        sStackX_18 = 4;
        break;
      case 2:
        sStackX_18 = 7;
        break;
      case 3:
        sStackX_18 = 8;
        break;
      case 4:
        sStackX_18 = 10;
        break;
      case 5:
        sStackX_18 = (short)uVar8;
        break;
      case 6:
        sStackX_18 = (short)uVar9;
        break;
      case 7:
        sStackX_18 = 0x12;
        break;
      case 8:
        sStackX_18 = 0x13;
        break;
      case 9:
        sStackX_18 = 0x14;
        break;
      case 10:
        sStackX_18 = 0x15;
      }
      if (sVar6 == 4) {
        if (((*(uint *)(param_3 + 0x9c) ^ *(uint *)(param_1 + 0x9c)) >> 0x1a & 1) != 0) {
LAB_140994d0d:
          FUN_1407dcf30(param_2,8,(int)sStackX_18);
          return;
        }
        sVar1 = *(short *)(param_1 + 0x98);
        sVar2 = *(short *)(param_3 + 0x98);
        if ((sVar1 != sVar2) &&
           (((((sVar1 < 0 ||
               (uVar5 = _DAT_1424eca70 - lVar7 >> 3, uVar5 <= (ulonglong)(longlong)sVar1)) ||
              (lVar3 = *(longlong *)(lVar7 + (longlong)sVar1 * 8), *(int *)(lVar3 + 0x1b0) < 0xc))
             || (((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 0xb) & 2) == 0 || (sVar2 < 0)))) ||
            ((uVar5 <= (ulonglong)(longlong)sVar2 ||
             ((lVar3 = *(longlong *)(lVar7 + (longlong)sVar2 * 8), *(int *)(lVar3 + 0x1b0) < 0xc ||
              ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 0xb) & 2) == 0)))))))) goto LAB_140994d0d;
      }
      iVar4 = supplier_0x14075ca70
                        (*(undefined2 *)(param_1 + 0xcec + (longlong)sStackX_18 * 2),
                         *(undefined2 *)(param_3 + 0xcec + (longlong)sStackX_18 * 2));
      if (iVar4 != 0) {
        FUN_1407dcf30(param_2,7,(int)sStackX_18);
        uVar8 = 0xb;
        uVar9 = 0x11;
        lVar7 = _DAT_1424eca68;
      }
      sVar6 = sVar6 + 1;
    } while (sVar6 < 0xb);
  }
  return;
}

