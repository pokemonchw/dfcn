/* resolve ammunition and loaded state | VA [0x141357e20, 0x1413584ce) | Ghidra decompilation */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141357e20(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  short sVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [8];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  longlong *plStack_78;
  undefined8 ***pppuStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  uStack_50 = _DAT_1418be040 ^ (ulonglong)auStack_d8;
  *param_4 = 0;
  plStack_78 = param_2;
  if (param_2 != (longlong *)0x0) {
    puStack_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0xf;
    pppuStack_70 = (undefined8 ****)0x0;
    sVar5 = (**(code **)*param_2)(param_2);
    if (sVar5 == 0x18) {
      lVar13 = param_2[0x1d];
      ppppuVar11 = (undefined8 ****)(lVar13 + 0xd8);
      lVar12 = 0;
      if (&pppuStack_70 != ppppuVar11) {
        if (0xf < *(ulonglong *)(lVar13 + 0xf0)) {
          ppppuVar11 = (undefined8 ****)*ppppuVar11;
        }
        FUN_140070f00(&pppuStack_70,ppppuVar11,*(undefined8 *)(lVar13 + 0xe8));
        lVar12 = lStack_60;
      }
      sVar5 = (**(code **)(*param_2 + 0x4f8))(param_2);
      if (sVar5 == -1) {
        sVar5 = (**(code **)(*param_2 + 0x4f0))(param_2);
      }
      iVar6 = func_0x000140abd840(sVar5);
      if (((iVar6 == -1) || (_DAT_1418be238 != 0)) ||
         (*(char *)((longlong)iVar6 + 0xab8 + param_1) != '\0')) {
        if (*(int *)(param_2[0x1d] + 0x1cc) == 0) {
          plVar3 = *(longlong **)(param_1 + 0x410);
          for (plVar8 = *(longlong **)(param_1 + 0x408); plVar8 != plVar3; plVar8 = plVar8 + 1) {
            plVar4 = (longlong *)*plVar8;
            if ((((short)plVar4[1] == 0xb) && ((int)plVar4[2] == *(int *)((longlong)param_2 + 0x1c))
                ) && (sVar5 = (*(code *)**(undefined8 **)*plVar4)(), sVar5 == 0x27)) {
              lVar13 = *(longlong *)(*plVar4 + 0xe8);
              puVar7 = (undefined8 *)(lVar13 + 200);
              ppppuVar11 = &pppuStack_70;
              if (0xf < uStack_58) {
                ppppuVar11 = (undefined8 ****)pppuStack_70;
              }
              if (0xf < *(ulonglong *)(lVar13 + 0xe0)) {
                puVar7 = (undefined8 *)*puVar7;
              }
              if ((*(longlong *)(lVar13 + 0xd8) == lStack_60) &&
                 (iVar6 = func_0x000141554864(puVar7,ppppuVar11), iVar6 == 0)) {
                *param_4 = 1;
                goto LAB_141358329;
              }
            }
          }
        }
        else if (((*(int *)(param_2[0x1d] + 0x1cc) == 1) && ((*(byte *)(param_2 + 2) & 0x40) != 0))
                && (iVar6 = (int)(param_2[8] - param_2[7] >> 3) + -1, -1 < iVar6)) {
          lVar13 = (longlong)iVar6;
          do {
            iVar6 = (**(code **)(**(longlong **)(param_2[7] + lVar13 * 8) + 0x10))();
            if (((iVar6 == 10) &&
                (puVar7 = (undefined8 *)
                          (**(code **)(**(longlong **)(param_2[7] + lVar13 * 8) + 0x18))(),
                puVar7 != (undefined8 *)0x0)) &&
               (sVar5 = (**(code **)*puVar7)(puVar7), sVar5 == 0x27)) {
              lVar2 = puVar7[0x1d];
              puVar7 = (undefined8 *)(lVar2 + 200);
              ppppuVar11 = &pppuStack_70;
              if (0xf < uStack_58) {
                ppppuVar11 = (undefined8 ****)pppuStack_70;
              }
              if (0xf < *(ulonglong *)(lVar2 + 0xe0)) {
                puVar7 = (undefined8 *)*puVar7;
              }
              if ((*(longlong *)(lVar2 + 0xd8) == lVar12) &&
                 (iVar6 = func_0x000141554864(puVar7,ppppuVar11), iVar6 == 0)) {
                *param_4 = 1;
                goto LAB_141358329;
              }
            }
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
        uVar14 = 0;
        if (lStack_60 != 0) {
          puVar7 = puStack_a8;
          puVar15 = puStack_90;
          if (param_3 == 0) {
            lVar13 = *(longlong *)(param_1 + 0x408);
            uVar17 = uVar14;
            if (*(longlong *)(param_1 + 0x410) - lVar13 >> 3 != 0) {
              do {
                uVar1 = *(ushort *)(*(longlong **)(uVar17 + lVar13) + 1);
                if ((9 < uVar1) || ((0x241U >> ((int)(short)uVar1 & 0x1fU) & 1) == 0)) {
                  lVar13 = **(longlong **)(uVar17 + lVar13);
                  iVar6 = (int)(*(longlong *)(lVar13 + 0x40) - *(longlong *)(lVar13 + 0x38) >> 3) +
                          -1;
                  if (-1 < iVar6) {
                    lVar12 = (longlong)iVar6;
                    do {
                      iVar6 = (**(code **)(**(longlong **)
                                             (*(longlong *)(lVar13 + 0x38) + lVar12 * 8) + 0x10))();
                      if ((iVar6 == 0x12) &&
                         (iVar6 = (**(code **)(**(longlong **)
                                                 (*(longlong *)(lVar13 + 0x38) + lVar12 * 8) + 0x60)
                                  )(), iVar6 != *(int *)(param_1 + 0x130))) goto LAB_141358273;
                      lVar12 = lVar12 + -1;
                    } while (-1 < lVar12);
                  }
                  lVar13 = **(longlong **)(uVar17 + *(longlong *)(param_1 + 0x408));
                  if (lVar13 != 0) {
                    iVar6 = (int)(*(longlong *)(param_1 + 0xb20) - *(longlong *)(param_1 + 0xb18) >>
                                 4) + -1;
                    if (-1 < iVar6) {
                      lVar12 = (longlong)iVar6;
                      plVar8 = (longlong *)(lVar12 * 0x10 + *(longlong *)(param_1 + 0xb18));
                      do {
                        if (*(int *)(*plVar8 + 0x14) == *(int *)(lVar13 + 0x1c)) goto LAB_141358273;
                        plVar8 = plVar8 + -2;
                        lVar12 = lVar12 + -1;
                      } while (-1 < lVar12);
                    }
                  }
                  sVar5 = (*(code *)**(undefined8 **)
                                      **(undefined8 **)(uVar17 + *(longlong *)(param_1 + 0x408)))();
                  if (sVar5 == 0x27) {
                    lVar13 = *(longlong *)
                              (**(longlong **)(*(longlong *)(param_1 + 0x408) + uVar17) + 0xe8);
                    puVar9 = (undefined8 *)(lVar13 + 200);
                    ppppuVar11 = &pppuStack_70;
                    if (0xf < uStack_58) {
                      ppppuVar11 = (undefined8 ****)pppuStack_70;
                    }
                    if (0xf < *(ulonglong *)(lVar13 + 0xe0)) {
                      puVar9 = (undefined8 *)*puVar9;
                    }
                    if ((*(longlong *)(lVar13 + 0xd8) == lStack_60) &&
                       (iVar6 = func_0x000141554864(puVar9,ppppuVar11), iVar6 == 0))
                    goto LAB_141358329;
                  }
                  sVar5 = (*(code *)**(undefined8 **)
                                      **(undefined8 **)(uVar17 + *(longlong *)(param_1 + 0x408)))();
                  if (sVar5 == 0x3d) {
                    if (puVar7 == puStack_a0) {
                      FUN_1400bc360(&puStack_b0,puVar7);
                      puVar7 = puStack_a8;
                    }
                    else {
                      *puVar7 = **(undefined8 **)(uVar17 + *(longlong *)(param_1 + 0x408));
                      puStack_a8 = puVar7 + 1;
                      puVar7 = puStack_a8;
                    }
                  }
                  sVar5 = (*(code *)**(undefined8 **)
                                      **(undefined8 **)(uVar17 + *(longlong *)(param_1 + 0x408)))();
                  if (sVar5 == 0x3e) {
                    if (puVar15 == puStack_88) {
                      FUN_1400bc360(&puStack_98,puVar15);
                      puVar15 = puStack_90;
                    }
                    else {
                      *puVar15 = **(undefined8 **)(uVar17 + *(longlong *)(param_1 + 0x408));
                      puStack_90 = puVar15 + 1;
                      puVar15 = puStack_90;
                    }
                  }
                }
LAB_141358273:
                uVar16 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar16;
                lVar13 = *(longlong *)(param_1 + 0x408);
                uVar17 = uVar17 + 8;
              } while ((ulonglong)(longlong)(int)uVar16 <
                       (ulonglong)(*(longlong *)(param_1 + 0x410) - lVar13 >> 3));
            }
          }
          else if (((*(byte *)(param_3 + 0x10) & 0x40) != 0) &&
                  (lVar13 = *(longlong *)(param_3 + 0x38), uVar17 = uVar14,
                  *(longlong *)(param_3 + 0x40) - lVar13 >> 3 != 0)) {
            do {
              iVar6 = (**(code **)(**(longlong **)(uVar14 + lVar13) + 0x10))();
              if ((iVar6 == 10) &&
                 (puVar9 = (undefined8 *)
                           (**(code **)(**(longlong **)(uVar14 + *(longlong *)(param_3 + 0x38)) +
                                       0x18))(), puStack_80 = puVar9, puVar9 != (undefined8 *)0x0))
              {
                sVar5 = (**(code **)*puVar9)(puVar9);
                if (sVar5 == 0x27) {
                  lVar13 = puVar9[0x1d];
                  puVar10 = (undefined8 *)(lVar13 + 200);
                  ppppuVar11 = &pppuStack_70;
                  if (0xf < uStack_58) {
                    ppppuVar11 = (undefined8 ****)pppuStack_70;
                  }
                  if (0xf < *(ulonglong *)(lVar13 + 0xe0)) {
                    puVar10 = (undefined8 *)*puVar10;
                  }
                  if ((*(longlong *)(lVar13 + 0xd8) == lStack_60) &&
                     (iVar6 = func_0x000141554864(puVar10,ppppuVar11), iVar6 == 0))
                  goto LAB_141358329;
                }
                sVar5 = (**(code **)*puVar9)(puVar9);
                if (sVar5 == 0x3d) {
                  if (puVar7 == puStack_a0) {
                    FUN_1400bc360(&puStack_b0,puVar7,&puStack_80);
                    puVar7 = puStack_a8;
                  }
                  else {
                    *puVar7 = puVar9;
                    puStack_a8 = puVar7 + 1;
                    puVar7 = puStack_a8;
                  }
                }
                sVar5 = (**(code **)*puVar9)(puVar9);
                if (sVar5 == 0x3e) {
                  if (puVar15 == puStack_88) {
                    FUN_1400bc360(&puStack_98,puVar15,&puStack_80);
                    puVar15 = puStack_90;
                  }
                  else {
                    *puVar15 = puVar9;
                    puStack_90 = puVar15 + 1;
                    puVar15 = puStack_90;
                  }
                }
              }
              uVar16 = (int)uVar17 + 1;
              uVar14 = uVar14 + 8;
              lVar13 = *(longlong *)(param_3 + 0x38);
              uVar17 = (ulonglong)uVar16;
            } while ((ulonglong)(longlong)(int)uVar16 <
                     (ulonglong)(*(longlong *)(param_3 + 0x40) - lVar13 >> 3));
          }
          plVar8 = plStack_78;
          iVar6 = 0;
          uVar14 = (longlong)puVar15 - (longlong)puStack_98 >> 3;
          puVar15 = puStack_98;
          if (uVar14 != 0) {
            do {
              lVar13 = FUN_141357e20(param_1,plVar8,*puVar15,auStack_b8);
              if (lVar13 != 0) goto LAB_141358329;
              iVar6 = iVar6 + 1;
              puVar15 = puVar15 + 1;
            } while ((ulonglong)(longlong)iVar6 < uVar14);
          }
          iVar6 = 0;
          uVar14 = (longlong)puVar7 - (longlong)puStack_b0 >> 3;
          puVar7 = puStack_b0;
          if (uVar14 != 0) {
            do {
              lVar13 = FUN_141357e20(param_1,plVar8,*puVar7,auStack_b8);
              if (lVar13 != 0) break;
              iVar6 = iVar6 + 1;
              puVar7 = puVar7 + 1;
            } while ((ulonglong)(longlong)iVar6 < uVar14);
          }
        }
      }
    }
LAB_141358329:
    FUN_140070e80(&pppuStack_70);
    FUN_1400681a0(&puStack_b0);
    FUN_1400681a0(&puStack_98);
  }
  FUN_1415530b0(uStack_50 ^ (ulonglong)auStack_d8);
  return;
}
