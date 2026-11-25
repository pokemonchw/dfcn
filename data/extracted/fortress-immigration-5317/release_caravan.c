
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140e6b250(ulonglong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  
  uVar20 = 0;
  uVar15 = _DAT_142407550 - (longlong)_DAT_142407548 >> 3;
  plVar10 = _DAT_142407548;
  uVar5 = uVar20;
  if (uVar15 != 0) {
    do {
      uVar19 = *(uint *)(*plVar10 + 0x110);
      if (((uVar19 & 0x502) != 2) && (puVar4 = _DAT_1423b3738, (uVar19 & 0x40) != 0)) {
        for (; (uVar17 = uVar20, puVar4 < _DAT_1423b3740 &&
               (uVar17 = *puVar4, *(int *)(*puVar4 + 0xc) != *(int *)(*plVar10 + 0x140)));
            puVar4 = puVar4 + 1) {
        }
        if (uVar17 == param_1) {
          return (ulonglong)puVar4 & 0xffffffffffffff00;
        }
      }
      uVar19 = (int)uVar5 + 1;
      plVar10 = plVar10 + 1;
      uVar5 = (ulonglong)uVar19;
    } while ((ulonglong)(longlong)(int)uVar19 < uVar15);
  }
  uVar5 = _DAT_1423f3c80 - _DAT_1423f3c78;
  if (((uVar5 & 0xfffffffffffffff8) != 0) && (*(int *)(param_1 + 0xc) != -1)) {
    lVar6 = FUN_1400bb6d0(*(int *)(param_1 + 0xc),&DAT_1423f3c78);
    uVar5 = 0;
    if (lVar6 != 0) {
      _DAT_1423b3c28 = _DAT_1423b3c28 + *(int *)(param_1 + 0x20cc);
      *(int *)(lVar6 + 0x13c0) = *(int *)(lVar6 + 0x13c0) + *(int *)(param_1 + 0x20cc);
      *(int *)(lVar6 + 0x13c4) = *(int *)(lVar6 + 0x13c4) + *(int *)(param_1 + 0x20d0);
      *(int *)(lVar6 + 0x13c8) = *(int *)(lVar6 + 0x13c8) + *(int *)(param_1 + 0x20d0);
      if ((*(byte *)(param_1 + 0x20c0) & 8) != 0) {
        lVar8 = *(longlong *)(lVar6 + 0x13b0);
        if (lVar8 == 0) {
          uVar7 = FUN_1415530e0(0x20b0);
          lVar8 = FUN_14104de00(uVar7);
          *(longlong *)(lVar6 + 0x13b0) = lVar8;
        }
        FUN_140e57cd0(lVar8,param_1 + 0x10);
        *(short *)(lVar6 + 0x13b8) = (short)DAT_1418f9296;
        *(undefined4 *)(lVar6 + 0x13bc) = _DAT_142167754;
        if (*(int *)(lVar6 + 4) == _DAT_1423b5af0) {
          puVar16 = *(undefined8 **)(lVar6 + 0x1248);
          if ((puVar16 != (undefined8 *)0x0) &&
             (*(undefined8 **)(_DAT_1423bc668 + 0x1248) != (undefined8 *)0x0)) {
            piVar1 = (int *)puVar16[1];
            piVar13 = (int *)puVar16[3];
            piVar14 = (int *)**(undefined8 **)(_DAT_1423bc668 + 0x1248);
            for (piVar9 = (int *)*puVar16; piVar9 < piVar1; piVar9 = piVar9 + 1) {
              iVar3 = *piVar9;
              if (((iVar3 != 4) && (iVar3 != 5)) && (iVar3 < *piVar14)) {
                if (iVar3 == 0) {
                  iVar3 = 0x1e;
                  iVar18 = 1;
                }
                else if (iVar3 == 1) {
                  iVar3 = 100;
                  iVar18 = 2;
                }
                else if (iVar3 == 2) {
                  iVar3 = 0xfa;
                  iVar18 = 3;
                }
                else {
                  if (iVar3 != 3) goto LAB_140e6b48f;
                  iVar3 = 500;
                  iVar18 = 4;
                }
                *piVar13 = *piVar13 + 10;
                if (iVar3 <= *piVar13) {
                  *piVar13 = 0;
                  *piVar9 = iVar18;
                }
              }
LAB_140e6b48f:
              piVar13 = piVar13 + 1;
              piVar14 = piVar14 + 1;
            }
          }
        }
      }
      plVar10 = (longlong *)FUN_1415530e0(0x50);
      *plVar10 = (longlong)&UNK_1416f8818;
      *(undefined4 *)(plVar10 + 3) = 0;
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 1) = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 0xffffffff;
      puVar11 = (undefined1 *)func_0x000141553434();
      plVar10[2] = (longlong)puVar11;
      *puVar11 = 0;
      *(undefined4 *)(plVar10 + 3) = 1;
      if ((_DAT_14251c0f0 == 0) && (0 < (int)plVar10[3])) {
        *(byte *)plVar10[2] = *(byte *)plVar10[2] | 1;
      }
      *(int *)(plVar10 + 4) = _DAT_14216c58c;
      _DAT_14216c58c = _DAT_14216c58c + 1;
      FUN_1400bbd00(plVar10,0x14251c138);
      iVar3 = (int)(_DAT_14251c778 - _DAT_14251c770 >> 3);
      if (0 < iVar3) {
        FUN_1400bb4a0((int)plVar10[4],*(longlong *)(_DAT_14251c770 + -8 + (longlong)iVar3 * 8) + 8);
      }
      if (_DAT_14251c798 != 0) {
        FUN_1400ffe80(_DAT_14251c798,(int)plVar10[4],_DAT_142167754,_DAT_1423aa348);
      }
      *plVar10 = (longlong)&UNK_1416f8378;
      *(undefined4 *)(plVar10 + 8) = 0;
      plVar10[7] = 0;
      plVar10[5] = -1;
      *(undefined4 *)(plVar10 + 6) = 0xffffffff;
      puVar11 = (undefined1 *)func_0x000141553434();
      plVar10[7] = (longlong)puVar11;
      *puVar11 = 0;
      *(undefined4 *)(plVar10 + 8) = 1;
      plVar10[9] = 0;
      *(undefined4 *)(plVar10 + 1) = _DAT_142167754;
      *(undefined4 *)((longlong)plVar10 + 0xc) = _DAT_1423aa348;
      *(undefined4 *)(plVar10 + 5) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)((longlong)plVar10 + 0x2c) = _DAT_1423b5af8;
      *(undefined4 *)(plVar10 + 6) = _DAT_1423b5af4;
      *(undefined4 *)(plVar10 + 9) = *(undefined4 *)(param_1 + 0x20c4);
      *(undefined4 *)((longlong)plVar10 + 0x4c) = *(undefined4 *)(param_1 + 0x20c8);
      if (((*(uint *)(param_1 + 0x20c0) & 0x100) != 0) && (0 < (int)plVar10[8])) {
        *(byte *)plVar10[7] = *(byte *)plVar10[7] | 0x20;
      }
      if ((*(uint *)(param_1 + 0x20c0) & 8) == 0) {
        if (0 < (int)plVar10[8]) {
          *(byte *)plVar10[7] = *(byte *)plVar10[7] | 1;
        }
      }
      else {
        if (((*(uint *)(param_1 + 0x20c0) & 4) != 0) && (0 < (int)plVar10[8])) {
          *(byte *)plVar10[7] = *(byte *)plVar10[7] | 2;
        }
        if ((*(uint *)(param_1 + 0x20c0) >> 8 & 1) == 0) {
          if (((*(uint *)(param_1 + 0x20c0) & 0x10) != 0) && (0 < (int)plVar10[8])) {
            *(byte *)plVar10[7] = *(byte *)plVar10[7] | 4;
          }
          if (((*(byte *)(param_1 + 0x20c0) & 0x80) != 0) && (0 < (int)plVar10[8])) {
            *(byte *)plVar10[7] = *(byte *)plVar10[7] | 8;
          }
        }
      }
      (**(code **)(*plVar10 + 0x128))(plVar10);
      uVar5 = 0;
      lVar8 = _DAT_1424078e8;
      uVar15 = uVar20;
      if (_DAT_1424078f0 - _DAT_1424078e8 >> 3 != 0) {
        do {
          lVar12 = *(longlong *)(lVar8 + uVar20);
          if ((*(uint *)(lVar12 + 0x10) & 0x8000) != 0) {
            puVar2 = *(undefined8 **)(lVar12 + 0x40);
            for (puVar16 = *(undefined8 **)(lVar12 + 0x38); lVar8 = _DAT_1424078e8, puVar16 < puVar2
                ; puVar16 = puVar16 + 1) {
              iVar3 = (**(code **)(*(longlong *)*puVar16 + 0x10))();
              if (iVar3 == 0x2d) {
                lVar12 = (**(code **)(*(longlong *)*puVar16 + 0x38))();
                lVar8 = _DAT_1424078e8;
                if (lVar12 == lVar6) {
                  FUN_140ca8230(*(undefined8 *)(_DAT_1424078e8 + uVar20),0);
                  lVar8 = _DAT_1424078e8;
                }
                break;
              }
            }
          }
          uVar19 = (int)uVar15 + 1;
          uVar20 = uVar20 + 8;
          uVar5 = (ulonglong)(int)uVar19;
          uVar15 = (ulonglong)uVar19;
        } while (uVar5 < (ulonglong)(_DAT_1424078f0 - lVar8 >> 3));
      }
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}

