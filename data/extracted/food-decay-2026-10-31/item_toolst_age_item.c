/* Actual Ghidra output, Steam 53.16, VA 140cb24f0..140cb2627 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong item_toolst_age_item(longlong *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar2 + param_2;
  if (199999999 < iVar2 + param_2) {
    *(undefined4 *)(param_1 + 3) = 200000000;
  }
  sVar1 = (short)param_1[0x17];
  if (((ushort)(sVar1 - 0x13U) < 200) || ((ushort)(sVar1 - 0xdbU) < 200)) {
    uVar5 = FUN_140701e70(0x1424eca48,(longlong)sVar1,*(undefined4 *)((longlong)param_1 + 0xbc));
    iVar7 = 0x14;
    if (uVar5 == 0) {
      iVar7 = 1;
    }
  }
  else {
    uVar5 = 0x1a3;
    if (199 < (ushort)(sVar1 - 0x1a3U)) goto LAB_140cb261a;
    uVar6 = (ulonglong)*(int *)((longlong)param_1 + 0xbc);
    uVar5 = uVar6;
    if (((-1 < *(int *)((longlong)param_1 + 0xbc)) &&
        (uVar5 = _DAT_1424ec900 - _DAT_1424ec8f8 >> 3, uVar6 < uVar5)) &&
       (-1 < (short)(sVar1 - 0x1a3U))) {
      lVar3 = *(longlong *)(_DAT_1424ec8f8 + uVar6 * 8);
      uVar6 = (longlong)sVar1 - 0x1a3;
      lVar4 = *(longlong *)(lVar3 + 0x2a0);
      uVar5 = *(longlong *)(lVar3 + 0x2a8) - lVar4 >> 3;
      if ((uVar6 < uVar5) && (*(longlong *)(lVar4 + uVar6 * 8) != 0)) {
        iVar7 = 0x14;
        goto LAB_140cb25e6;
      }
    }
    iVar7 = 1;
  }
LAB_140cb25e6:
  iVar8 = (int)param_1[3] - iVar2;
  if (iVar8 != 0) {
    uVar6 = (longlong)(iVar8 + iVar2 % iVar7) / (longlong)iVar7;
    uVar5 = uVar6 & 0xffffffff;
    if (0 < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x000140cb2617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*param_1 + 0x3e0))
                        (param_1,uVar6 & 0xffffffff,*(code **)(*param_1 + 0x3e0));
      return uVar5;
    }
  }
LAB_140cb261a:
  return uVar5 & 0xffffffffffffff00;
}

