/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x14091e6a0..0x14091e9c9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_14091e6a0(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong in_RCX;
  undefined4 in_EDX;
  int iVar7;
  int iVar8;
  int *in_R8;
  longlong lVar9;
  int iVar10;
  
  iVar8 = 0;
  *in_R8 = 0;
  lVar4 = FUN_1400b9dc0(in_EDX,in_RCX + 0x1028);
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 2) + -1;
  lVar9 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar5 = (longlong *)
               FUN_14007da30(0x1424f9cb8,*(undefined4 *)(*(longlong *)(lVar4 + 0x10) + lVar9 * 4));
      if (plVar5 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(in_RCX + 4),in_EDX);
        sVar2 = (**(code **)*plVar5)(plVar5);
        if (((sVar2 == 10) && ((short)plVar5[5] == 0x10)) &&
           (iVar10 = ((_DAT_1423746f4 - (int)plVar5[1]) * 0x62700 - *(int *)((longlong)plVar5 + 0xc)
                     ) + _DAT_142387fc4, iVar10 < 0x24ea00)) {
          lVar6 = FUN_1400b9dc0((int)plVar5[4],0x1424f9fa0);
          iVar7 = 1;
          if (lVar6 != 0) {
            iVar1 = *(int *)(*(longlong *)(lVar6 + 8) + 0x24);
            iVar7 = 1;
            if (0 < iVar1) {
              iVar7 = iVar1;
            }
          }
          iVar1 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
          if (0x626ff < iVar10 - 0x1ec300U) {
            iVar1 = iVar7;
          }
          iVar7 = iVar1 / 2;
          if (0x626ff < iVar10 - 0x189c00U) {
            iVar7 = iVar1;
          }
          if (iVar10 - 0x127500U < 0x62700) {
            iVar7 = iVar7 * 2;
            iVar7 = iVar7 / 3 + (iVar7 >> 0x1f) +
                    (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
          }
          *in_R8 = *in_R8 + iVar7;
        }
        sVar2 = (**(code **)*plVar5)(plVar5);
        if (((sVar2 == 9) && ((short)plVar5[5] == 0x10)) &&
           (iVar10 = ((_DAT_1423746f4 - (int)plVar5[1]) * 0x62700 - *(int *)((longlong)plVar5 + 0xc)
                     ) + _DAT_142387fc4, iVar10 < 0x24ea00)) {
          lVar6 = FUN_1400b9dc0((int)plVar5[4],0x1424f9fa0);
          iVar7 = 1;
          if (lVar6 != 0) {
            iVar1 = *(int *)(*(longlong *)(lVar6 + 8) + 0x24);
            iVar7 = 1;
            if (iVar1 < 0) {
              iVar7 = iVar1;
            }
          }
          iVar1 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
          if (0x626ff < iVar10 - 0x1ec300U) {
            iVar1 = iVar7;
          }
          iVar7 = iVar1 / 2;
          if (0x626ff < iVar10 - 0x189c00U) {
            iVar7 = iVar1;
          }
          if (iVar10 - 0x127500U < 0x62700) {
            iVar7 = iVar7 * 2;
            iVar7 = iVar7 / 3 + (iVar7 >> 0x1f) +
                    (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f);
          }
          *in_R8 = *in_R8 + iVar7;
        }
        if (iVar3 != 0) {
          iVar10 = ((_DAT_1423746f4 - (int)plVar5[1]) * 0x62700 - *(int *)((longlong)plVar5 + 0xc))
                   + _DAT_142387fc4;
          if (iVar10 - 0x375f00U < 0x62700) {
            iVar3 = iVar3 >> 3;
          }
          else {
            if (0x626ff < iVar10 - 0x313800U) {
              if (iVar10 - 0x2b1100U < 0x62700) {
                iVar8 = iVar8 + (iVar3 * 3 >> 3);
              }
              else {
                if (iVar10 - 0x24ea00U < 0x62700) {
                  iVar3 = iVar3 >> 1;
                  goto LAB_14091e989;
                }
                if (iVar10 - 0x1ec300U < 0x62700) {
                  iVar8 = iVar8 + (iVar3 * 5 >> 3);
                }
                else if (iVar10 - 0x189c00U < 0x62700) {
                  iVar8 = iVar8 + (iVar3 * 3 >> 2);
                }
                else if (iVar10 - 0x127500U < 0x62700) {
                  iVar8 = iVar8 + (iVar3 * 7 >> 3);
                }
                else if (iVar10 < 0x127500) goto LAB_14091e989;
              }
              goto LAB_14091e994;
            }
            iVar3 = iVar3 >> 2;
          }
LAB_14091e989:
          iVar8 = iVar8 + iVar3;
        }
      }
LAB_14091e994:
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return iVar8;
}

