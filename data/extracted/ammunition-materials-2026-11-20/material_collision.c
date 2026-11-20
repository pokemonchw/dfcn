/* Actual Ghidra output, research name; VA 0x140d7f5e0..0x140d80151. */

void material_collision(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lStackX_10;
  longlong alStack_140 [27];
  longlong *plStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  
  lVar11 = *param_1;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = param_1[1];
  if (lVar12 == 0) {
    return;
  }
  lVar16 = param_1[0xc];
  if (lVar16 < 1) {
    return;
  }
  lVar1 = param_1[0xd] * 2 + 1000;
  lVar7 = 2000;
  if ((lVar1 < 2000) && (lVar7 = lVar1, lVar1 < 1)) {
    lVar7 = 1;
  }
  if (param_1[0xf] != 1) {
    lVar7 = lVar7 * param_1[0xf];
  }
  if (1 < (ulonglong)param_1[0xe]) {
    lVar7 = lVar7 / param_1[0xe];
  }
  lStack_60 = 100000;
  if (lVar7 < 100000) {
    if (lVar7 < 1) {
      lVar7 = 1;
    }
    lStack_60 = lVar7;
  }
  lVar1 = param_1[2];
  iVar2 = *(int *)((longlong)param_1 + 0x94);
  lStackX_10 = -1;
  if ((lVar1 < 1) || (iVar2 < 1)) goto LAB_140d7fb2e;
  iVar5 = *(int *)(lVar12 + 0x240);
  lVar7 = 0;
  iVar6 = *(int *)(lVar12 + 600);
  lVar9 = 0;
  if (*(char *)((longlong)param_1 + 0x93) != '\0') {
    if (19999 < iVar5) {
      iVar5 = 20000;
    }
    if (29999 < iVar6) {
      iVar6 = 30000;
    }
  }
  lVar12 = (longlong)*(int *)(lVar12 + 0x270);
  if ((*(char *)((longlong)param_1 + 0x91) != '\0') && (lVar12 < 50000)) {
    lVar12 = 50000;
  }
  iVar3 = *(int *)(lVar11 + 0x240);
  lVar13 = 1000;
  if (iVar5 < iVar3) {
    if (0 < iVar3) {
      lVar7 = 1000;
      if ((0 < iVar5) && (lVar7 = ((longlong)iVar5 * 1000) / (longlong)iVar3, lVar7 < 1)) {
        lVar7 = 1;
      }
      lVar7 = (lVar7 * 5) / lVar1;
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      goto LAB_140d7f821;
    }
  }
  else {
    lVar7 = (longlong)((iVar5 - iVar3) / 10) + 1000;
LAB_140d7f821:
    lVar7 = (lVar7 * lStack_60) / 1000;
  }
  iVar3 = *(int *)(lVar11 + 600);
  lStackX_10 = 0;
  if (-1 < lVar7) {
    lStackX_10 = lVar7;
  }
  if (iVar6 < iVar3) {
    if (iVar3 < 1) {
      lVar11 = 0;
    }
    else {
      if ((0 < iVar6) && (lVar13 = ((longlong)iVar6 * 1000) / (longlong)iVar3, lVar13 < 1)) {
        lVar13 = 1;
      }
      lVar11 = (lVar13 * 5) / lVar1;
      if (lVar11 < 1) {
        lVar11 = 1;
      }
      lVar7 = (lVar11 * lStack_60) / 1000;
      lVar11 = 0;
      if (-1 < lVar7) {
        lVar11 = lVar7;
      }
      if (param_1[5] < 1) {
        lVar7 = 1;
      }
      else {
        lVar7 = param_1[5] * 1000;
      }
      if (0 < iVar6) {
        lVar7 = (iVar6 * lVar7) / (longlong)iVar3;
      }
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      lVar7 = (lVar7 * 5) / lVar1;
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      lVar9 = (lVar7 * lStack_60) / 1000;
    }
  }
  else {
    lVar7 = (((longlong)((iVar6 - iVar3) / 10) + 1000) * lStack_60) / 1000;
    lVar11 = 0;
    if (-1 < lVar7) {
      lVar11 = lVar7;
    }
    if (0 < param_1[5]) {
      lVar13 = param_1[5] * 1000;
    }
    lVar9 = (((iVar6 - iVar3) / 10 + lVar13) * lStack_60) / 1000;
  }
  lVar7 = 0;
  if (-1 < lVar9) {
    lVar7 = lVar9;
  }
  if (lVar16 < lStackX_10) {
    lVar11 = lStackX_10;
    if (lStackX_10 < 1) {
      lVar11 = 1;
    }
    lVar11 = (lVar16 * lVar12) / lVar11;
    param_1[0x14] = lVar11;
    if ((lVar11 < 1) && (0 < lVar12)) {
      param_1[0x14] = 1;
    }
LAB_140d7fab8:
    param_1[2] = 0;
    lVar13 = 0;
  }
  else {
    lVar9 = (longlong)iVar5;
    lVar13 = lVar16 - lStackX_10;
    param_1[0xc] = lVar13;
    param_1[0x14] = lVar12;
    if (iVar5 < 1) {
      lVar9 = 1;
    }
    lVar9 = (iVar6 * lVar12) / lVar9;
    if (100000000 < lVar9) {
      lVar9 = 100000000;
    }
    if (lVar13 < lVar11) {
      if (lVar11 < 1) {
        lVar11 = 1;
      }
      lVar11 = (lVar13 * lVar9) / lVar11;
      param_1[0x16] = lVar11;
      if ((lVar11 < 1) && (0 < lVar9)) {
        param_1[0x16] = 1;
      }
      goto LAB_140d7fab8;
    }
    lVar13 = lVar13 - lVar11;
    param_1[0xc] = lVar13;
    param_1[0x16] = (longlong)(int)lVar9;
    if (lVar13 < lVar7) {
      if (lVar7 < 1) {
        lVar7 = 1;
      }
      lVar7 = (lVar13 * 100) / lVar7;
      param_1[0x18] = lVar7;
      if (lVar7 < 1) {
        param_1[0x18] = 0;
      }
      goto LAB_140d7fab8;
    }
    param_1[0x18] = 100;
    lVar13 = lVar13 - lVar7;
  }
  param_1[0xc] = lVar13;
  if ((param_1[0x18] < 1) || (lVar11 = param_1[7], lVar11 < 1)) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    iVar5 = *(int *)((longlong)param_1 + 0x94);
    if (iVar5 < lVar11) {
      uVar4 = (uint)(((longlong)iVar5 * 100) / lVar11);
      if ((int)uVar4 < 1) {
        uVar4 = 1;
      }
      if ((longlong)(ulonglong)uVar4 < param_1[0x18]) {
        param_1[0x18] = (ulonglong)uVar4;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 - (int)lVar11;
    }
    *(int *)((longlong)param_1 + 0x94) = iVar5;
  }
LAB_140d7fb2e:
  lVar11 = lStackX_10;
  if (param_1[0x18] < 100) {
    lStack_58 = param_1[0xb];
    iVar5 = 0;
    lStack_50 = lVar16;
    lVar12 = (longlong)alStack_140 - (longlong)param_1;
    plStack_68 = param_1 + 0x12;
    plVar10 = param_1 + 0x1d;
    do {
      lVar7 = plVar10[-0x1d];
      lVar9 = 0;
      if (-1 < *(int *)(lVar7 + 0x248)) {
        lVar9 = (longlong)*(int *)(lVar7 + 0x248);
      }
      lVar8 = *(int *)(lVar7 + 0x260) - lVar9;
      lVar13 = 0;
      if (-1 < lVar8) {
        lVar13 = lVar8;
      }
      if (iVar5 == 1) {
        lVar9 = (lVar9 * lStack_60) / 1000;
        lVar13 = (lVar13 * lStack_60) / 1000;
      }
      lVar8 = plVar10[-0x19];
      if (lVar8 < 1) {
        lVar9 = 0;
        lVar13 = 0;
      }
      else {
        lVar9 = (lVar8 * lVar9) / 50000;
        lVar13 = (lVar8 * lVar13) / 50000;
      }
      if ((iVar5 == 1) && ((lVar9 < lVar11 || (lVar11 == -1)))) {
        lVar11 = lVar9;
        lStackX_10 = lVar9;
      }
      lVar8 = (longlong)*(int *)(lVar7 + 0x278);
      if (((char)*plStack_68 != '\0') && (lVar8 < 50000)) {
        lVar8 = 50000;
      }
      lVar14 = *(longlong *)(lVar12 + (longlong)plVar10);
      if (lVar14 < lVar9) {
        if (lVar9 < 1) {
          lVar9 = 1;
        }
        lVar9 = (lVar14 * lVar8) / lVar9;
        plVar10[-4] = lVar9;
        if ((lVar9 < 1) && (0 < lVar8)) {
          plVar10[-4] = 1;
        }
        goto LAB_140d7fda6;
      }
      lVar14 = lVar14 - lVar9;
      plVar10[-4] = lVar8;
      *(longlong *)(lVar12 + (longlong)plVar10) = lVar14;
      if (lVar8 < 50000) {
        lVar9 = (longlong)*(int *)(lVar7 + 0x248);
        if (lVar9 < 1) {
          lVar9 = 1;
        }
        lVar9 = (*(int *)(lVar7 + 0x260) * lVar8) / lVar9;
        if (100000000 < lVar9) {
          lVar9 = 100000000;
        }
        if (lVar14 < lVar13) {
          if (lVar13 < 1) {
            lVar13 = 1;
          }
          lVar13 = (lVar14 * lVar9) / lVar13;
          plVar10[-2] = lVar13;
          if ((lVar13 < 1) && (0 < lVar9)) {
            plVar10[-2] = 1;
          }
LAB_140d7fda6:
          *(undefined8 *)(lVar12 + (longlong)plVar10) = 0;
          goto LAB_140d7fdae;
        }
        lVar14 = lVar14 - lVar13;
        plVar10[-2] = (longlong)(int)lVar9;
        if (lVar14 < lVar13) {
          if (lVar13 < 1) {
            lVar13 = 1;
          }
          lVar13 = (lVar14 * 100) / lVar13;
          *plVar10 = lVar13;
          if (lVar13 < 1) {
            *plVar10 = 1;
          }
          goto LAB_140d7fda6;
        }
        *plVar10 = 100;
        *(longlong *)(lVar12 + (longlong)plVar10) = lVar14 - lVar13;
        if (iVar5 == 1) {
          if ((param_1[2] == 0) && (0 < lVar1)) {
            iVar6 = iVar2 - (int)param_1[7];
            *(int *)((longlong)param_1 + 0x94) = iVar6;
            param_1[2] = lVar1;
            if (iVar6 < 0) {
              *(undefined4 *)((longlong)param_1 + 0x94) = 0;
            }
          }
          goto LAB_140d7fdb8;
        }
      }
      else {
LAB_140d7fdae:
        if (iVar5 == 1) {
LAB_140d7fdb8:
          lVar7 = *plVar10;
          if (lVar7 < 100) {
            lVar9 = param_1[4];
            lVar11 = lStackX_10;
            if (lVar9 < param_1[5]) {
              lVar13 = plVar10[-0x1d];
              lVar11 = 0;
              if (-1 < *(int *)(lVar13 + 0x248)) {
                lVar11 = (longlong)*(int *)(lVar13 + 0x248);
              }
              lVar15 = *(int *)(lVar13 + 0x260) - lVar11;
              lVar14 = 0;
              if (-1 < lVar15) {
                lVar14 = lVar15;
              }
              if (plVar10[-0x19] < 1) {
                lVar15 = 0;
                lVar14 = 0;
              }
              else {
                lVar15 = (lVar9 * ((lVar11 * lStack_60) / 1000)) / 50000;
                lVar14 = (lVar9 * ((lVar14 * lStack_60) / 1000)) / 50000;
              }
              if ((lVar15 < lStackX_10) || (lStackX_10 == -1)) {
                lStackX_10 = lVar15;
              }
              lVar9 = (*(int *)(lVar13 + 0x278) * lVar9) / param_1[5];
              if (((char)*plStack_68 != '\0') && (lVar9 < 50000)) {
                lVar9 = 50000;
              }
              lVar11 = lStackX_10;
              if (lVar16 < lVar15) {
                if (lVar15 < 1) {
                  lVar15 = 1;
                }
                lVar15 = (lVar9 * lVar16) / lVar15;
                plVar10[-4] = lVar15;
                if ((lVar15 < 1) && (0 < lVar9)) {
                  plVar10[-4] = 1;
                }
                *(undefined8 *)(lVar12 + (longlong)plVar10) = 0;
              }
              else {
                lVar15 = lVar16 - lVar15;
                *(longlong *)(lVar12 + (longlong)plVar10) = lVar15;
                if (plVar10[-4] < lVar9) {
                  plVar10[-4] = lVar9;
                }
                if (lVar8 < 50000) {
                  lVar8 = (longlong)*(int *)(lVar13 + 0x248);
                  if (lVar8 < 1) {
                    lVar8 = 1;
                  }
                  lVar9 = (((*(int *)(lVar13 + 0x260) * lVar9) / lVar8) * param_1[4]) / param_1[5];
                  if (100000000 < lVar9) {
                    lVar9 = 100000000;
                  }
                  if (lVar15 < lVar14) {
                    if (lVar14 < 1) {
                      lVar14 = 1;
                    }
                    lVar14 = (lVar15 * lVar9) / lVar14;
                    plVar10[-2] = lVar14;
                    if ((lVar14 < 1) && (0 < lVar9)) {
                      plVar10[-2] = 1;
                    }
                  }
                  else {
                    lVar15 = lVar15 - lVar14;
                    if (plVar10[-2] < lVar9) {
                      plVar10[-2] = (longlong)(int)lVar9;
                    }
                    lVar9 = (param_1[4] * 100) / param_1[5];
                    if (99 < lVar9) {
                      lVar9 = 99;
                    }
                    if (lVar14 <= lVar15) {
                      *(longlong *)(lVar12 + (longlong)plVar10) = lVar15 - lVar14;
                      if (lVar7 < lVar9) {
                        *plVar10 = lVar9;
                        lVar7 = lVar9;
                      }
                      if (lVar7 < 1) {
                        *plVar10 = 1;
                      }
                      goto LAB_140d7ffdd;
                    }
                    if (lVar14 < 1) {
                      lVar14 = 1;
                    }
                    lVar14 = (lVar9 * lVar15) / lVar14;
                    if (lVar7 < lVar14) {
                      *plVar10 = lVar14;
                      lVar7 = lVar14;
                    }
                    if (lVar7 < 1) {
                      *plVar10 = 1;
                    }
                  }
                  *(undefined8 *)(lVar12 + (longlong)plVar10) = 0;
                }
              }
            }
          }
        }
      }
LAB_140d7ffdd:
      plStack_68 = (longlong *)((longlong)plStack_68 + 1);
      iVar5 = iVar5 + 1;
      plVar10 = plVar10 + 1;
    } while (iVar5 < 2);
  }
  param_1[0xc] = lVar16;
  if (0 < lVar11) {
    lVar16 = lVar16 - lVar11 / 10;
    param_1[0xc] = lVar16;
    if (lVar16 < 0) {
      param_1[0xc] = 0;
      lVar16 = 0;
    }
  }
  lVar11 = param_1[0x1a];
  if (param_1[0x1a] <= param_1[0x14]) {
    lVar11 = param_1[0x14];
  }
  if (((param_1[0x18] < 100) && (param_1[0x1e] < 100)) && (lVar11 < 50000)) {
    if (0 < lVar11) {
      param_1[0xc] = (lVar11 * lVar16) / 50000;
      return;
    }
    param_1[0xc] = 0;
  }
  return;
}

