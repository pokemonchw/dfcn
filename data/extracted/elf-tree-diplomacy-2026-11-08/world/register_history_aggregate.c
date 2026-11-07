/* Actual Ghidra decompilation; current Steam Windows 53.16; 0x1409946b0..0x140994b5d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409946b0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  
  if (param_3 != (int *)0x0) {
    iVar3 = (int)(*(longlong *)(param_3 + 6) - *(longlong *)(param_3 + 4) >> 2) + -1;
    lVar11 = (longlong)iVar3;
    if (-1 < iVar3) {
      do {
        plVar6 = (longlong *)
                 FUN_14007da30(0x1424f9cb8,*(undefined4 *)(*(longlong *)(param_3 + 4) + lVar11 * 4))
        ;
        iVar3 = _DAT_1423746f4;
        if ((plVar6 != (longlong *)0x0) &&
           (iVar4 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)(param_1 + 4),*param_3),
           iVar4 != 0)) {
          iVar3 = iVar3 - (int)plVar6[1];
          if (iVar3 == 9) {
            iVar4 = iVar4 >> 3;
          }
          else if (iVar3 == 8) {
            iVar4 = iVar4 >> 2;
          }
          else if (iVar3 == 7) {
            iVar4 = iVar4 * 3 >> 3;
          }
          else if (iVar3 == 6) {
            iVar4 = iVar4 >> 1;
          }
          else if (iVar3 == 5) {
            iVar4 = iVar4 * 5 >> 3;
          }
          else if (iVar3 == 4) {
            iVar4 = iVar4 * 3 >> 2;
          }
          else if (iVar3 == 3) {
            iVar4 = iVar4 * 7 >> 3;
          }
          else if (0 < iVar3) goto LAB_1409947af;
          if (iVar4 != 0) {
            FUN_1407dd040(param_2,5,(int)plVar6[4],iVar4);
          }
        }
LAB_1409947af:
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    iVar3 = (int)(*(longlong *)(param_3 + 0xc) - *(longlong *)(param_3 + 10) >> 2) + -1;
    lVar11 = (longlong)iVar3;
    if (-1 < iVar3) {
      do {
        plVar6 = (longlong *)
                 FUN_14013cc50(*(undefined4 *)(*(longlong *)(param_3 + 10) + lVar11 * 4),0x1424f9d30
                              );
        iVar3 = _DAT_1423746f4;
        if ((plVar6 != (longlong *)0x0) &&
           (iVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined4 *)(param_1 + 4),*param_3),
           iVar4 != 0)) {
          if (*(int *)((longlong)plVar6 + 0x3c) != -1) {
            iVar3 = iVar3 - *(int *)((longlong)plVar6 + 0x3c);
            if (iVar3 == 9) {
              iVar4 = iVar4 >> 3;
            }
            else if (iVar3 == 8) {
              iVar4 = iVar4 >> 2;
            }
            else if (iVar3 == 7) {
              iVar4 = iVar4 * 3 >> 3;
            }
            else if (iVar3 == 6) {
              iVar4 = iVar4 >> 1;
            }
            else if (iVar3 == 5) {
              iVar4 = iVar4 * 5 >> 3;
            }
            else if (iVar3 == 4) {
              iVar4 = iVar4 * 3 >> 2;
            }
            else if (iVar3 == 3) {
              iVar4 = iVar4 * 7 >> 3;
            }
            else if (0 < iVar3) goto LAB_140994896;
            if (iVar4 == 0) goto LAB_140994896;
          }
          FUN_1407dd040(param_2,6,(int)plVar6[0xb],iVar4);
        }
LAB_140994896:
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    if ((((_DAT_1423d1800 - _DAT_1423d17f8 & 0xfffffffffffffff8U) != 0) && (*param_3 != -1)) &&
       (psVar7 = (short *)FUN_1400ba0a0(), psVar7 != (short *)0x0)) {
      puVar10 = *(undefined8 **)(param_1 + 0x1318);
      puVar1 = *(undefined8 **)(param_1 + 0x1320);
      lVar11 = _DAT_1423e6180;
LAB_140994900:
      if (puVar10 < puVar1) {
        if (((int *)*puVar10)[5] == -1) {
          iVar3 = *(int *)*puVar10;
          iVar4 = (int)(_DAT_1423e6188 - lVar11 >> 3);
          if ((iVar4 != 0) && (iVar3 != -1)) {
            iVar13 = 0;
            iVar4 = iVar4 + -1;
            if (-1 < iVar4) {
              do {
                iVar9 = iVar13 + iVar4 >> 1;
                piVar12 = *(int **)(lVar11 + (longlong)iVar9 * 8);
                if (*piVar12 == iVar3) goto LAB_140994978;
                iVar5 = iVar9 + -1;
                if (*piVar12 < iVar3) {
                  iVar5 = iVar4;
                  iVar13 = iVar9 + 1;
                }
                iVar4 = iVar5;
              } while (iVar13 <= iVar5);
            }
            piVar12 = (int *)0x0;
LAB_140994978:
            if ((piVar12 != (int *)0x0) &&
               ((*(byte *)(*(longlong *)(piVar12 + 0x24) + 0x14) & 0x10) == 0)) {
              iVar3 = piVar12[0x2f];
              if (iVar3 == -1) {
                if ((piVar12[0x2a] != -1) && (lVar14 = FUN_14007db20(_DAT_1424ebb58), lVar14 != 0))
                {
                  for (plVar6 = *(longlong **)(lVar14 + 0x428);
                      plVar6 < *(longlong **)(lVar14 + 0x430); plVar6 = plVar6 + 1) {
                    lVar2 = *plVar6;
                    if ((((*(byte *)(lVar2 + 0x1c) & 1) != 0) && (*(int *)(lVar2 + 0x10) == 0)) &&
                       (*(int *)(lVar2 + 0x14) == -1)) {
                      iVar3 = *(int *)(lVar2 + 4);
                      goto LAB_140994acc;
                    }
                  }
                  iVar3 = -1;
LAB_140994acc:
                  if (iVar3 != *(int *)(param_1 + 4)) {
                    if (iVar3 == *param_3) {
LAB_140994b13:
                      FUN_1407dd040(param_2,10,*piVar12,0xffffffec);
                      puVar10 = puVar10 + 1;
                      lVar11 = _DAT_1423e6180;
                      goto LAB_140994900;
                    }
                    if (*psVar7 == 0) {
                      for (puVar8 = *(undefined8 **)(psVar7 + 0x5c);
                          puVar8 < *(undefined8 **)(psVar7 + 0x60); puVar8 = puVar8 + 1) {
                        if ((*(short *)*puVar8 == 1) && (*(int *)((short *)*puVar8 + 2) == iVar3))
                        goto LAB_140994b13;
                      }
                    }
                  }
                }
              }
              else {
                lVar14 = _DAT_1424f9d20 - _DAT_1424f9d18 >> 3;
                if (lVar14 != 0) {
                  iVar4 = 0;
                  iVar13 = (int)lVar14 + -1;
                  if (-1 < iVar13) {
                    do {
                      iVar9 = iVar4 + iVar13 >> 1;
                      lVar14 = *(longlong *)(_DAT_1424f9d18 + (longlong)iVar9 * 8);
                      if (*(int *)(lVar14 + 0xe0) == iVar3) {
                        if ((lVar14 != 0) &&
                           (iVar3 = *(int *)(lVar14 + 0xb0), iVar3 != *(int *)(param_1 + 4))) {
                          if (iVar3 == *(int *)(psVar7 + 2)) goto LAB_140994a3f;
                          if (*psVar7 == 0) {
                            puVar8 = *(undefined8 **)(psVar7 + 0x5c);
                            goto LAB_140994a25;
                          }
                        }
                        break;
                      }
                      iVar5 = iVar9 + -1;
                      if (*(int *)(lVar14 + 0xe0) < iVar3) {
                        iVar5 = iVar13;
                        iVar4 = iVar9 + 1;
                      }
                      iVar13 = iVar5;
                    } while (iVar4 <= iVar13);
                  }
                }
              }
            }
          }
        }
LAB_1409949ef:
        puVar10 = puVar10 + 1;
        goto LAB_140994900;
      }
    }
  }
  return;
LAB_140994a25:
  if (*(undefined8 **)(psVar7 + 0x60) <= puVar8) goto LAB_1409949ef;
  if ((*(short *)*puVar8 == 1) && (*(int *)((short *)*puVar8 + 2) == iVar3)) goto LAB_140994a3f;
  puVar8 = puVar8 + 1;
  goto LAB_140994a25;
LAB_140994a3f:
  FUN_1407dd040(param_2,10,*piVar12,0xffffffec);
  puVar10 = puVar10 + 1;
  lVar11 = _DAT_1423e6180;
  goto LAB_140994900;
}

