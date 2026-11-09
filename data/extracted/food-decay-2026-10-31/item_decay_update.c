/* Actual Ghidra output, Steam 53.16, VA 140ababb0..140abb181 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void item_decay_update(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  ushort auStackX_8 [4];
  undefined2 auStackX_10 [4];
  undefined2 auStackX_18 [4];
  longlong *plStackX_20;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  
  plStack_68 = (longlong *)0x0;
  plStack_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  iVar9 = (int)(*(longlong *)(param_1 + 0x14298) - *(longlong *)(param_1 + 0x14290) >> 3) + -1;
  lVar18 = (longlong)iVar9;
  plVar19 = (longlong *)0x0;
  plVar17 = plStack_68;
  if (-1 < iVar9) {
    do {
      plVar16 = plStack_58;
      plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x14290) + lVar18 * 8);
      plStackX_20 = plVar17;
      if (((*(byte *)(plVar17 + 2) & 0x10) == 0) &&
         (cVar5 = (**(code **)(*plVar17 + 0x170))(plVar17), cVar5 != '\0')) {
        auStackX_8[0] = 0x8ad0;
        if ((*(uint *)(plVar17 + 2) & 0x10) == 0) {
          if ((*(uint *)(plVar17 + 2) & 8) == 0) {
            auStackX_8[0] = *(ushort *)(plVar17 + 1);
            auStackX_18[0] = *(undefined2 *)((longlong)plVar17 + 10);
            auStackX_10[0] = *(undefined2 *)((longlong)plVar17 + 0xc);
          }
          else {
            puVar1 = (undefined8 *)plVar17[8];
            for (puVar13 = (undefined8 *)plVar17[7]; puVar13 < puVar1; puVar13 = puVar13 + 1) {
              iVar9 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
              if (iVar9 == 0xb) {
                lVar12 = (**(code **)(*(longlong *)*puVar13 + 0x18))();
                if (lVar12 != 0) {
                  FUN_140c8baa0(lVar12,auStackX_8,auStackX_18,auStackX_10);
                  goto LAB_140abad05;
                }
              }
              else if ((iVar9 == 0x12) &&
                      (lVar12 = (**(code **)(*(longlong *)*puVar13 + 0x20))(), lVar12 != 0)) {
                FUN_141367430(lVar12,auStackX_8,auStackX_18,auStackX_10);
                goto LAB_140abad05;
              }
            }
            for (puVar13 = (undefined8 *)plVar17[4]; puVar13 < (undefined8 *)plVar17[5];
                puVar13 = puVar13 + 1) {
              if (*(int *)*puVar13 == 7) {
                lVar12 = *(longlong *)((int *)*puVar13 + 2);
                auStackX_8[0] = *(ushort *)(lVar12 + 4);
                auStackX_18[0] = *(undefined2 *)(lVar12 + 6);
                auStackX_10[0] = *(undefined2 *)(lVar12 + 8);
                break;
              }
            }
          }
        }
LAB_140abad05:
        if ((*(uint *)(plVar17 + 2) & 0x100) == 0) {
          cVar5 = stockpile_preservation_eligibility(plVar17,1);
          if ((cVar5 != '\0') &&
             (uVar14 = func_0x00014007dc40(param_1,auStackX_8[0],auStackX_18[0],auStackX_10[0]),
             (uVar14 & 8) != 0)) {
            (**(code **)(*plVar17 + 0x280))(plVar17,0);
          }
          if ((*(byte *)(plVar17 + 2) & 4) != 0) {
            (**(code **)(*plVar17 + 0x280))(plVar17,0);
          }
          if ((*(byte *)(plVar17 + 2) & 8) != 0) {
            (**(code **)(*plVar17 + 0x280))(plVar17,0);
          }
          if ((*(byte *)(plVar17 + 2) & 2) != 0) {
            (**(code **)(*plVar17 + 0x280))(plVar17,0);
          }
          puVar1 = (undefined8 *)plVar17[8];
          for (puVar13 = (undefined8 *)plVar17[7]; puVar13 < puVar1; puVar13 = puVar13 + 1) {
            iVar9 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
            if (iVar9 == 0x24) {
              plVar15 = (longlong *)(**(code **)(*(longlong *)*puVar13 + 0x30))();
              if ((plVar15 != (longlong *)0x0) &&
                 ((((iVar9 = (**(code **)(*plVar15 + 0xd0))(plVar15), iVar9 == 4 || (iVar9 == 6)) ||
                   (iVar9 == 0x2f)) || ((iVar9 == 0x30 || (iVar9 == 0x31)))))) {
                (**(code **)(*plVar17 + 0x280))(plVar17,0);
              }
              break;
            }
          }
        }
        puVar1 = (undefined8 *)plVar17[8];
        for (puVar13 = (undefined8 *)plVar17[7]; puVar13 < puVar1; puVar13 = puVar13 + 1) {
          iVar9 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
          if (iVar9 == 0x10) {
            lVar12 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
            if ((lVar12 != 0) && (cVar5 = FUN_140c8e1d0(plVar17,lVar12), cVar5 == '\x02')) {
              (**(code **)(*plVar17 + 0x280))(plVar17,0);
            }
            break;
          }
        }
        (**(code **)(*plVar17 + 0x288))(plVar17);
        uVar10 = func_0x00014007dc40(param_1,auStackX_8[0],auStackX_18[0],auStackX_10[0]);
        if ((uVar10 >> 0xf & 1) != 0) {
          uVar10 = FUN_140eb68b0();
          if ((((uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) * 0x7fffffff <
                 0x6666667) && (iVar9 = (**(code **)(*plVar17 + 0x278))(plVar17), 1 < iVar9)) &&
              ((*(uint *)(plVar17 + 2) & 0xc18) == 0)) && ((*(uint *)(plVar17 + 2) >> 8 & 1) != 0))
          {
            uVar6 = (**(code **)(*plVar17 + 0x38))(plVar17);
            uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
            lVar12 = FUN_1414add70(0x1423d14f0,uVar6,uVar11);
            if (lVar12 != 0) {
              if ((*(int *)(lVar12 + 0x298) < 6) ||
                 ((*(byte *)(*(longlong *)(lVar12 + 0x290) + 5) & 0x40) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                bVar3 = true;
                sVar7 = (**(code **)(*plVar17 + 0x48))(plVar17);
                sVar8 = (**(code **)(*plVar17 + 0x50))(plVar17);
                if (((sVar7 != -1) && (sVar8 != -1)) &&
                   ((-1 < sVar7 &&
                    ((((ulonglong)(longlong)sVar7 <
                       (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3) && (-1 < sVar8)) &&
                     (lVar12 = *(longlong *)(_DAT_1424eca68 + (longlong)sVar7 * 8),
                     lVar2 = *(longlong *)(lVar12 + 0x178),
                     (ulonglong)(longlong)sVar8 <
                     (ulonglong)(*(longlong *)(lVar12 + 0x180) - lVar2 >> 3))))))) {
                  lVar12 = *(longlong *)(lVar2 + (longlong)sVar8 * 8);
                  bVar4 = true;
                  if ((*(int *)(lVar12 + 0x6b0) < 0xd) ||
                     (-1 < *(char *)(*(longlong *)(lVar12 + 0x6a8) + 0xc))) {
                    bVar4 = false;
                  }
                  bVar3 = true;
                  if (bVar4) {
                    bVar3 = false;
                  }
                }
                puVar1 = (undefined8 *)plVar17[8];
                for (puVar13 = (undefined8 *)plVar17[7]; puVar13 < puVar1; puVar13 = puVar13 + 1) {
                  iVar9 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
                  if (iVar9 == 0x24) {
                    plVar16 = (longlong *)(**(code **)(*(longlong *)*puVar13 + 0x30))();
                    if (plVar16 != (longlong *)0x0) {
                      iVar9 = (**(code **)(*plVar16 + 0xd0))(plVar16);
                      plVar16 = plStack_58;
                      if (iVar9 == 3) goto LAB_140abb04d;
                    }
                    break;
                  }
                }
                plVar16 = plStack_58;
                if (bVar3) {
                  uVar10 = FUN_140eb68b0();
                  iVar9 = (int)((longlong)((ulonglong)uVar10 * 0x100000003) >> 0x3f) * 0x7fffffff;
                  FUN_140aca140(iVar9,auStackX_8[0],auStackX_18[0],auStackX_10[0],
                                (short)((ulonglong)(uVar10 + iVar9) / 0x28f5c29) + 0x32);
                  plVar16 = plStack_58;
                }
              }
            }
          }
        }
LAB_140abb04d:
        cVar5 = (**(code **)(*plVar17 + 0x290))(plVar17);
        if (((cVar5 != '\0') || (iVar9 = (**(code **)(*plVar17 + 0x278))(plVar17), 199 < iVar9)) &&
           (cVar5 = rot_removal_eligibility(plVar17), cVar5 != '\0')) {
          cVar5 = (**(code **)(*plVar17 + 0x290))(plVar17);
          if (cVar5 != '\0') {
            uVar10 = FUN_140eb68b0();
            FUN_1414637a0(0x1423d14f0,auStackX_8[0],auStackX_18[0],auStackX_10[0],
                          (short)((ulonglong)
                                  (uVar10 + (int)((longlong)((ulonglong)uVar10 * 0x100000003) >>
                                                 0x3f) * 0x7fffffff) / 0xccccccd) + 10);
          }
          if (plVar19 == plVar16) {
            FUN_1400bad30(&plStack_68,plVar19,&plStackX_20);
            plVar19 = plStack_60;
          }
          else {
            *plVar19 = (longlong)plVar17;
            plStack_60 = plVar19 + 1;
            plVar19 = plStack_60;
          }
        }
      }
      lVar18 = lVar18 + -1;
      plVar17 = plStack_68;
    } while (-1 < lVar18);
  }
  for (; plVar17 != plVar19; plVar17 = plVar17 + 1) {
    cVar5 = '\x01';
    if (plVar17 < plVar19) {
      cVar5 = -1;
    }
    if (-1 < cVar5) break;
    plVar16 = (longlong *)*plVar17;
    FUN_140c634f0(plVar16,1);
    (**(code **)(*plVar16 + 0x330))(plVar16);
    *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x20010;
  }
  FUN_140066b70(&plStack_68);
  return;
}

