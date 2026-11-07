
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140915c70(longlong param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  iVar6 = 0;
  lVar3 = FUN_1400b9dc0(param_2,param_1 + 0x1028);
  if ((lVar3 != 0) &&
     (iVar2 = (int)(*(longlong *)(lVar3 + 0x18) - *(longlong *)(lVar3 + 0x10) >> 2) + -1,
     lVar7 = (longlong)iVar2, -1 < iVar2)) {
    do {
      plVar4 = (longlong *)
               FUN_14007da30(0x1424f9cb8,*(undefined4 *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 4));
      if ((plVar4 == (longlong *)0x0) ||
         (iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(param_1 + 4),param_2),
         iVar2 == 0)) goto LAB_140915dda;
      iVar8 = ((_DAT_1423746f4 - (int)plVar4[1]) * 0x62700 - *(int *)((longlong)plVar4 + 0xc)) +
              _DAT_142387fc4;
      if (iVar8 - 0x375f00U < 0x62700) {
        iVar2 = iVar2 >> 3;
LAB_140915dd8:
        iVar6 = iVar6 + iVar2;
      }
      else {
        if (iVar8 - 0x313800U < 0x62700) {
          iVar2 = iVar2 >> 2;
          goto LAB_140915dd8;
        }
        if (iVar8 - 0x2b1100U < 0x62700) {
          iVar6 = iVar6 + (iVar2 * 3 >> 3);
        }
        else {
          if (iVar8 - 0x24ea00U < 0x62700) {
            iVar2 = iVar2 >> 1;
            goto LAB_140915dd8;
          }
          if (iVar8 - 0x1ec300U < 0x62700) {
            iVar6 = iVar6 + (iVar2 * 5 >> 3);
          }
          else if (iVar8 - 0x189c00U < 0x62700) {
            iVar6 = iVar6 + (iVar2 * 3 >> 2);
          }
          else if (iVar8 - 0x127500U < 0x62700) {
            iVar6 = iVar6 + (iVar2 * 7 >> 3);
          }
          else if (iVar8 < 0x127500) goto LAB_140915dd8;
        }
      }
LAB_140915dda:
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  sVar1 = 0;
LAB_140915e00:
  do {
    iVar2 = *(int *)(param_1 + 0x13cc + (longlong)sVar1 * 4);
    if (0 < iVar2) {
      if (iVar2 < 1000) {
        uVar5 = 1;
      }
      else if (iVar2 < 0x9c4) {
        uVar5 = 2;
      }
      else if (iVar2 < 5000) {
        uVar5 = 3;
      }
      else if (iVar2 < 10000) {
        uVar5 = 4;
      }
      else {
        uVar5 = (19999 < iVar2) + 5;
      }
      if (sVar1 != 9) {
        if (sVar1 == 8) {
          iVar6 = iVar6 - (uVar5 >> 2);
          sVar1 = 9;
          goto LAB_140915e00;
        }
        if (sVar1 == 7) {
          iVar6 = iVar6 - ((int)(uVar5 * 3) >> 3);
          sVar1 = 8;
          goto LAB_140915e00;
        }
        if (sVar1 == 6) {
          iVar6 = iVar6 - (uVar5 >> 1);
          sVar1 = 7;
          goto LAB_140915e00;
        }
        if (sVar1 == 5) {
          iVar6 = iVar6 - ((int)(uVar5 * 5) >> 3);
          sVar1 = 6;
          goto LAB_140915e00;
        }
        if (sVar1 == 4) {
          iVar6 = iVar6 - ((int)(uVar5 * 3) >> 2);
          sVar1 = 5;
          goto LAB_140915e00;
        }
        if (sVar1 == 3) {
          iVar6 = iVar6 - ((int)(uVar5 * 7) >> 3);
          sVar1 = 4;
          goto LAB_140915e00;
        }
        if (sVar1 < 3) {
          iVar6 = iVar6 - uVar5;
        }
      }
    }
    sVar1 = sVar1 + 1;
    if (9 < sVar1) {
      return iVar6;
    }
  } while( true );
}

