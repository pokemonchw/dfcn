
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1409159a0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    bVar2 = false;
    iVar13 = 0;
    iVar12 = 0;
    do {
      uVar9 = _DAT_142393670;
      if (iVar12 != 0) {
        uVar9 = _DAT_142393678;
      }
      lVar5 = FUN_1400b9dc0(uVar9,param_1 + 0x1028);
      if ((lVar5 != 0) &&
         (iVar4 = (int)(*(longlong *)(lVar5 + 0x18) - *(longlong *)(lVar5 + 0x10) >> 2) + -1,
         lVar10 = (longlong)iVar4, -1 < iVar4)) {
        do {
          puVar6 = (undefined8 *)
                   FUN_14007da30(0x1424f9cb8,
                                 *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + lVar10 * 4));
          if (puVar6 != (undefined8 *)0x0) {
            sVar3 = (**(code **)*puVar6)(puVar6);
            iVar4 = 2;
            if (sVar3 != 0xb) {
              iVar4 = 0;
            }
            sVar3 = (**(code **)*puVar6)(puVar6);
            if (sVar3 == 10) {
              if (*(short *)(puVar6 + 5) == 10) {
                iVar4 = 5;
              }
              else {
                if (*(short *)(puVar6 + 5) != 1) goto LAB_140915aa0;
                iVar4 = 2;
              }
            }
            else {
LAB_140915aa0:
              if (iVar4 == 0) goto LAB_140915af8;
            }
            lVar7 = FUN_1400b9dc0(*(undefined4 *)(puVar6 + 4),0x1424f9fa0);
            if ((lVar7 != 0) && (iVar1 = *(int *)(*(longlong *)(lVar7 + 8) + 0x24), 0 < iVar1)) {
              iVar4 = iVar4 + iVar1;
            }
            if ((((_DAT_1423746f4 - *(int *)(puVar6 + 1)) * 0x62700 -
                 *(int *)((longlong)puVar6 + 0xc)) + _DAT_142387fc4) / 0x62700 <= iVar4) {
              bVar2 = true;
            }
          }
LAB_140915af8:
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    plVar8 = _DAT_1424e7e08;
    if (!bVar2) {
      while( true ) {
        if (_DAT_1424e7e10 <= plVar8) {
          iVar12 = 0;
          uVar11 = _DAT_142393528 - (longlong)_DAT_142393520 >> 3;
          if (uVar11 != 0) {
            puVar6 = _DAT_142393520;
            do {
              if (*(int *)*puVar6 == *(int *)(param_1 + 4)) {
                return 0;
              }
              iVar12 = iVar12 + 1;
              puVar6 = puVar6 + 1;
            } while ((ulonglong)(longlong)iVar12 < uVar11);
          }
          uVar11 = _DAT_1423912c0 - (longlong)_DAT_1423912b8 >> 3;
          if (uVar11 != 0) {
            plVar8 = _DAT_1423912b8;
            do {
              if (*(int *)(*plVar8 + 0xc) == *(int *)(param_1 + 4)) {
                return 0;
              }
              iVar13 = iVar13 + 1;
              plVar8 = plVar8 + 1;
            } while ((ulonglong)(longlong)iVar13 < uVar11);
          }
          return 1;
        }
        lVar5 = *plVar8;
        if ((((*(int *)(lVar5 + 4) == *(int *)(param_1 + 4)) && (*(int *)(lVar5 + 0x138) == 2)) &&
            (*(int *)(lVar5 + 8) == _DAT_142393674)) &&
           (((_DAT_1423746f4 - *(int *)(lVar5 + 0x38)) * 0x62700 - *(int *)(lVar5 + 0x3c)) +
            _DAT_142387fc4 < 0x31380)) break;
        plVar8 = plVar8 + 1;
      }
      return 0;
    }
  }
  return 0;
}

