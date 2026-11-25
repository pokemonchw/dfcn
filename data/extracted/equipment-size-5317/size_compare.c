/* steam 53.17; size_compare; RVA 0x13797d0..0x1379926 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool equipment_size_compare(short param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 7000;
  if (((-1 < param_4) &&
      (uVar4 = _DAT_14250eef0 - _DAT_14250eee8 >> 3, iVar3 = 7000, (int)param_4 < (int)uVar4)) &&
     (iVar3 = 0, (ulonglong)(longlong)param_4 < uVar4)) {
    iVar3 = *(int *)(*(longlong *)(_DAT_14250eee8 + (longlong)param_4 * 8) + 0x144);
  }
  iVar1 = 7000;
  if (((-1 < param_3) && (uVar4 = _DAT_14250eef0 - _DAT_14250eee8 >> 3, (int)param_3 < (int)uVar4))
     && (iVar1 = 0, (ulonglong)(longlong)param_3 < uVar4)) {
    iVar1 = *(int *)(*(longlong *)(_DAT_14250eee8 + (longlong)param_3 * 8) + 0x144);
  }
  if ((int)param_1 - 0x18U < 0x25) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_141379934)[(int)((int)param_1 - 0x18U)]) {
    case 0:
      iVar1 = (int)(_DAT_14250efb0 - _DAT_14250efa8 >> 3) + -1;
      if (-1 < iVar1) {
        lVar2 = (longlong)iVar1;
        do {
          if (*(short *)(*(longlong *)(_DAT_14250efa8 + lVar2 * 8) + 0x28) == param_2) {
            lVar2 = *(longlong *)(_DAT_14250efa8 + (longlong)iVar1 * 8);
            if (lVar2 == 0) {
              return false;
            }
            if (*(int *)(lVar2 + 0xfc) <= iVar3) {
              return false;
            }
            return (bool)2;
          }
          iVar1 = iVar1 + -1;
          lVar2 = lVar2 + -1;
        } while (-1 < lVar2);
      }
      break;
    case 1:
      if (iVar3 <= (iVar1 * 6) / 7) {
        return (bool)2;
      }
      return (iVar1 * 8) / 7 <= iVar3;
    }
  }
  return false;
}

