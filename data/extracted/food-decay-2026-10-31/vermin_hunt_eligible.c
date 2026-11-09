/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140a45470..140a455c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 vermin_hunt_eligible(short *param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  
  sVar1 = *param_1;
  uVar6 = (ulonglong)sVar1;
  sVar2 = param_1[1];
  if (-1 < sVar1) {
    if (uVar6 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3)) {
      if ((-1 < sVar2) &&
         (lVar3 = *(longlong *)(_DAT_1424eca68 + uVar6 * 8), lVar4 = *(longlong *)(lVar3 + 0x178),
         (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar3 + 0x180) - lVar4 >> 3))) {
        lVar3 = *(longlong *)(lVar4 + (longlong)sVar2 * 8);
        if ((*(int *)(lVar3 + 0x6b0) < 0xd) || (-1 < *(char *)(*(longlong *)(lVar3 + 0x6a8) + 0xc)))
        {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          return 0;
        }
      }
    }
    else if ((sVar1 < 0) || ((ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) <= uVar6))
    goto LAB_140a4552b;
    lVar3 = *(longlong *)(_DAT_1424eca68 + uVar6 * 8);
    if ((*(int *)(lVar3 + 0x1b0) < 1) || ((**(byte **)(lVar3 + 0x1a8) & 0x40) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return 0;
    }
  }
LAB_140a4552b:
  sVar1 = *param_1;
  uVar6 = (ulonglong)sVar1;
  if ((-1 < sVar1) && (uVar6 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) {
    lVar3 = *(longlong *)(_DAT_1424eca68 + uVar6 * 8);
    if ((*(int *)(lVar3 + 0x1b0) < 1) || (-1 < **(char **)(lVar3 + 0x1a8))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return 0;
    }
  }
  sVar2 = param_1[1];
  if ((((-1 < sVar1) && (uVar6 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) && (-1 < sVar2)
      ) && (((lVar3 = *(longlong *)(_DAT_1424eca68 + uVar6 * 8),
             lVar4 = *(longlong *)(lVar3 + 0x178),
             (ulonglong)(longlong)sVar2 < (ulonglong)(*(longlong *)(lVar3 + 0x180) - lVar4 >> 3) &&
             (lVar3 = *(longlong *)(lVar4 + (longlong)sVar2 * 8), 9 < *(int *)(lVar3 + 0x6b0))) &&
            ((*(byte *)(*(longlong *)(lVar3 + 0x6a8) + 9) & 0x40) != 0)))) {
    return 0;
  }
  return 1;
}

