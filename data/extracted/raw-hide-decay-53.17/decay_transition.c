/* Actual Ghidra 12.1.4 output; Steam 53.17. Researcher-assigned name. VA 140c8b770..140c8c89a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 decay_transition(longlong *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  undefined2 uVar8;
  short sVar9;
  undefined2 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  undefined1 auStackX_20 [8];
  longlong lStack_b8;
  undefined4 uStack_b0;
  ulonglong uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  char cStack_58;
  undefined1 auStack_50 [16];
  
  if ((*(uint *)(param_1 + 2) & 0x40000) != 0) {
    return 0;
  }
  bVar5 = false;
  uVar25 = (int)(param_1[5] - param_1[4] >> 3) - 1;
  uStackX_8 = (ulonglong)uVar25;
  if (-1 < (int)uVar25) {
    plVar16 = (longlong *)((longlong)(int)uVar25 * 8);
    plVar12 = plVar16;
    do {
      iVar22 = (int)uStackX_8;
      if (**(int **)((longlong)plVar16 + param_1[4]) == 2) {
        lVar21 = *(longlong *)(*(int **)((longlong)plVar16 + param_1[4]) + 2);
        iVar20 = (int)(*(longlong *)(lVar21 + 0x88) - *(longlong *)(lVar21 + 0x80) >> 3) + -1;
        plStackX_10 = plVar12;
        plStackX_18 = plVar16;
        if (-1 < iVar20) {
          lVar23 = (longlong)iVar20 * 8;
          lVar26 = lVar23;
          do {
            plVar16 = *(longlong **)(lVar23 + *(longlong *)(lVar21 + 0x80));
            if ((longlong *)*plVar16 == param_1) {
              if ((int)plVar16[1] != 6) {
                bVar5 = true;
              }
              func_0x0001415530d0(plVar16,0x18);
              lVar15 = *(longlong *)(lVar21 + 0x80) + lVar26;
              lVar11 = lVar15 + 8;
              func_0x00014155486a(lVar15,lVar11,*(longlong *)(lVar21 + 0x88) - lVar11);
              *(longlong *)(lVar21 + 0x88) = *(longlong *)(lVar21 + 0x88) + -8;
            }
            lVar26 = lVar26 + -8;
            lVar23 = lVar23 + -8;
            iVar20 = iVar20 + -1;
          } while (-1 < iVar20);
          iVar22 = (int)uStackX_8;
        }
        plVar16 = plStackX_18;
        plVar12 = plStackX_10;
        *(uint *)(lVar21 + 0x2c) = *(uint *)(lVar21 + 0x2c) | 0x40;
        func_0x0001415530d0(*(undefined8 *)((longlong)plStackX_18 + param_1[4]),0x18);
        lVar21 = param_1[4] + (longlong)plVar12 + 8;
        func_0x00014155486a(param_1[4] + (longlong)plVar12,lVar21,param_1[5] - lVar21);
        param_1[5] = param_1[5] + -8;
      }
      uStackX_8 = (ulonglong)(iVar22 - 1U);
      plVar12 = plVar12 + -1;
      plVar16 = plVar16 + -1;
      plStackX_10 = plVar12;
      plStackX_18 = plVar16;
    } while (-1 < (int)(iVar22 - 1U));
  }
  iVar22 = (int)(param_1[8] - param_1[7] >> 3) + -1;
  if (-1 < iVar22) {
    lVar21 = (longlong)iVar22 * 8;
    lVar23 = lVar21;
    do {
      iVar20 = (**(code **)(**(longlong **)(lVar21 + param_1[7]) + 0x10))();
      if ((iVar20 == 0x3d) &&
         (lVar26 = (**(code **)(**(longlong **)(lVar21 + param_1[7]) + 0x50))(), lVar26 != 0)) {
        plVar12 = *(longlong **)(lVar26 + 0x20);
        for (plVar16 = *(longlong **)(lVar26 + 0x18); plVar16 < plVar12; plVar16 = plVar16 + 1) {
          if (*(int *)(*plVar16 + 4) == *(int *)((longlong)param_1 + 0x1c)) {
            *(undefined4 *)(*plVar16 + 4) = 0xffffffff;
            *(uint *)(*plVar16 + 8) = *(uint *)(*plVar16 + 8) | 1;
            bVar5 = true;
          }
        }
        plVar16 = *(longlong **)(lVar21 + param_1[7]);
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x78))(plVar16,1);
        }
        lVar26 = param_1[7] + lVar23 + 8;
        func_0x00014155486a(param_1[7] + lVar23,lVar26,param_1[8] - lVar26);
        param_1[8] = param_1[8] + -8;
      }
      lVar23 = lVar23 + -8;
      lVar21 = lVar21 + -8;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
  }
  if (bVar5) {
    iVar22 = (int)(param_1[8] - param_1[7] >> 3) + -1;
    lVar21 = (longlong)iVar22;
    if (-1 < iVar22) {
      do {
        iVar22 = (**(code **)(**(longlong **)(param_1[7] + lVar21 * 8) + 0x10))();
        if (iVar22 == 0xc) goto LAB_140c8b9dd;
        lVar21 = lVar21 + -1;
      } while (-1 < lVar21);
    }
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffd;
  }
LAB_140c8b9dd:
  cVar7 = (**(code **)(*param_1 + 0x290))(param_1);
  if (cVar7 != '\0') {
    return 1;
  }
  uVar19 = 0;
  (**(code **)(*param_1 + 0x280))(param_1,0);
  (**(code **)(*param_1 + 0x330))(param_1);
  uVar8 = (**(code **)*param_1)(param_1);
  switch(uVar8) {
  case 0x17:
  case 0x2e:
    uVar25 = *(uint *)(param_1 + 2);
    if ((uVar25 >> 8 & 1) != 0) {
      uStackX_8 = uStackX_8 & 0xffffffffffffff00;
      uVar19 = 1;
      if ((char)param_1[0x1a] != '\0') goto LAB_140c8c813;
      sVar9 = *(short *)((longlong)param_1 + 0xc4);
      sVar2 = (short)param_1[0x17];
      uVar17 = (ulonglong)sVar2;
      if (sVar2 < 0) goto LAB_140c8c813;
      if (uVar17 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
        if ((sVar9 < 0) ||
           (lVar21 = *(longlong *)(_DAT_14250eee8 + uVar17 * 8),
           lVar23 = *(longlong *)(lVar21 + 0x178),
           (ulonglong)(*(longlong *)(lVar21 + 0x180) - lVar23 >> 3) <= (ulonglong)(longlong)sVar9))
        {
          plStackX_10 = (longlong *)0x0;
        }
        else {
          plStackX_10 = (longlong *)(*(longlong *)(lVar23 + (longlong)sVar9 * 8) + 0x6c0);
        }
      }
      else if ((sVar2 < 0) ||
              (plStackX_10 = (longlong *)0x0,
              (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= uVar17)) goto LAB_140c8c813;
      plVar16 = plStackX_10;
      lVar21 = *(longlong *)(_DAT_14250eee8 + uVar17 * 8);
      if (((plStackX_10 == (longlong *)0x0) || (lVar21 == 0)) ||
         (iVar22 = (int)(plStackX_10[1] - *plStackX_10 >> 3) + -1,
         plStackX_18 = (longlong *)(longlong)iVar22, iVar22 < 0)) goto LAB_140c8c813;
      do {
        cVar7 = (char)uStackX_8;
        if ((*(byte *)(param_1[0x24] + (longlong)plStackX_18 * 4) & 2) == 0) {
          bVar5 = false;
          plVar12 = *(longlong **)(*plVar16 + (longlong)plStackX_18 * 8);
          iVar22 = (int)(plVar12[0xc] - plVar12[0xb] >> 3) + -1;
          lVar23 = (longlong)iVar22;
          plStackX_10 = plVar12;
          if (iVar22 < 0) {
            puVar1 = (uint *)(param_1[0x24] + (longlong)plStackX_18 * 4);
            *puVar1 = *puVar1 | 2;
          }
          else {
            do {
              lVar26 = *(longlong *)(plVar12[0xb] + lVar23 * 8);
              if ((((*(byte *)(param_1[0x2d] + (longlong)*(int *)(lVar26 + 0x68) * 4) & 1) == 0) &&
                  (iVar22 = *(int *)(lVar26 + 0x20), -1 < iVar22)) &&
                 (((ulonglong)(longlong)iVar22 <
                   (ulonglong)(*(longlong *)(lVar21 + 0x210) - *(longlong *)(lVar21 + 0x208) >> 3)
                  && (lVar11 = *(longlong *)(*(longlong *)(lVar21 + 0x208) + (longlong)iVar22 * 8),
                     lVar11 = FUN_1414c6fe0(0x1423f3970,*(undefined2 *)(lVar11 + 0xd0),
                                            *(undefined4 *)(lVar11 + 0xd4)), plVar12 = plStackX_10,
                     lVar11 != 0)))) {
                if ((*(int *)(lVar11 + 0x298) < 5) ||
                   ((*(byte *)(*(longlong *)(lVar11 + 0x290) + 4) & 1) == 0)) {
                  bVar5 = true;
                  uVar19 = 0;
                  goto code_r0x000140c8bc26;
                }
                puVar1 = (uint *)(param_1[0x2d] + (longlong)*(int *)(lVar26 + 0x68) * 4);
                *puVar1 = *puVar1 | 1;
                uStackX_8 = CONCAT71(uStackX_8._1_7_,1);
                cVar7 = '\x01';
              }
              else {
code_r0x000140c8bc26:
                cVar7 = (char)uStackX_8;
              }
              lVar23 = lVar23 + -1;
            } while (-1 < lVar23);
            if (!bVar5) {
              puVar1 = (uint *)(param_1[0x24] + (longlong)plStackX_18 * 4);
              *puVar1 = *puVar1 | 2;
            }
          }
        }
        plStackX_18 = (longlong *)((longlong)plStackX_18 + -1);
      } while (-1 < (longlong)plStackX_18);
      if ((cVar7 == '\0') ||
         ((**(code **)(*param_1 + 0x1f8))(param_1,auStack_68,auStackX_20,auStack_50,&lStack_b8),
         lVar21 = lStack_b8, lStack_b8 == 0)) goto LAB_140c8c813;
      if ((*(byte *)(lStack_b8 + 0x110) & 2) != 0) {
        if (*(longlong *)(lStack_b8 + 0xd80) == 0) {
          if ((*(int *)(lStack_b8 + 0x1280) < 8) ||
             ((*(byte *)(*(longlong *)(lStack_b8 + 0x1278) + 7) & 4) == 0)) {
            if (((*(uint *)(lStack_b8 + 0x82c) & 0x2000000) != 0) ||
               ((*(uint *)(lStack_b8 + 0x828) & 0x2000000) == 0)) goto code_r0x000140c8bd03;
          }
          else if ((*(uint *)(lStack_b8 + 0x82c) & 0x2000000) != 0) goto code_r0x000140c8bd03;
        }
        else {
code_r0x000140c8bd03:
          cVar7 = func_0x0001413a7620(lStack_b8);
          if (cVar7 == '\0') goto code_r0x000140c8c390;
        }
        bVar5 = false;
        iVar22 = 0;
        plVar16 = plRam00000001424111a0;
        if (lRam00000001424111a8 - (longlong)plRam00000001424111a0 >> 3 != 0) {
code_r0x000140c8bd41:
          lVar23 = *plVar16;
          if (*(longlong *)(lVar23 + 0xa8) - *(longlong *)(lVar23 + 0xa0) >> 3 != 0) {
            for (plVar12 = *(longlong **)(lVar23 + 0xa0); plVar12 < *(longlong **)(lVar23 + 0xa8);
                plVar12 = plVar12 + 1) {
              if (*(int *)(*plVar12 + 0x1a0) == *(int *)(lVar21 + 0x130)) {
                iVar20 = 0;
                lVar23 = *(longlong *)(*plVar16 + 0x130);
                puVar13 = *(undefined8 **)(*plVar16 + 0x128);
                puVar18 = puVar13;
                if (lVar23 - (longlong)puVar13 >> 3 != 0) goto code_r0x000140c8bdb3;
                break;
              }
            }
          }
          goto code_r0x000140c8bdd8;
        }
        goto code_r0x000140c8bdfc;
      }
      goto code_r0x000140c8c390;
    }
    break;
  default:
    goto LAB_140c8c813;
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x36:
  case 0x47:
  case 0x48:
  case 0x58:
    uVar25 = *(uint *)(param_1 + 2);
    if ((uVar25 >> 8 & 1) != 0) {
code_r0x000140c8c808:
      uVar19 = 1;
      goto LAB_140c8c813;
    }
    break;
  case 0x32:
    uVar25 = *(uint *)(param_1 + 2);
    if ((uVar25 >> 8 & 1) != 0) {
      uStackX_8 = CONCAT62(uStackX_8._2_6_,0x8ad0);
      if ((uVar25 & 0x10) == 0) {
        if ((uVar25 & 8) == 0) {
          uStackX_8 = CONCAT62(uStackX_8._2_6_,(short)param_1[1]);
          plStackX_18 = (longlong *)
                        CONCAT62(plStackX_18._2_6_,*(undefined2 *)((longlong)param_1 + 10));
          uVar8 = *(undefined2 *)((longlong)param_1 + 0xc);
code_r0x000140c8c6b1:
          plStackX_10 = (longlong *)CONCAT62(plStackX_10._2_6_,uVar8);
        }
        else {
          puVar18 = (undefined8 *)param_1[8];
          for (puVar13 = (undefined8 *)param_1[7]; puVar13 < puVar18; puVar13 = puVar13 + 1) {
            iVar22 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
            if (iVar22 == 0xb) {
              lVar21 = (**(code **)(*(longlong *)*puVar13 + 0x18))();
              if (lVar21 != 0) {
                FUN_140ca3790(lVar21,&uStackX_8,&plStackX_18,&plStackX_10);
                goto code_r0x000140c8c6b5;
              }
            }
            else if ((iVar22 == 0x12) &&
                    (lVar21 = (**(code **)(*(longlong *)*puVar13 + 0x20))(), lVar21 != 0)) {
              FUN_14137fd40(lVar21,&uStackX_8,&plStackX_18,&plStackX_10);
              goto code_r0x000140c8c6b5;
            }
          }
          for (puVar13 = (undefined8 *)param_1[4]; puVar13 < (undefined8 *)param_1[5];
              puVar13 = puVar13 + 1) {
            if (*(int *)*puVar13 == 7) {
              lVar21 = *(longlong *)((int *)*puVar13 + 2);
              uStackX_8 = CONCAT62(uStackX_8._2_6_,*(undefined2 *)(lVar21 + 4));
              plStackX_18 = (longlong *)CONCAT62(plStackX_18._2_6_,*(undefined2 *)(lVar21 + 6));
              uVar8 = *(undefined2 *)(lVar21 + 8);
              goto code_r0x000140c8c6b1;
            }
          }
        }
      }
code_r0x000140c8c6b5:
      iVar22 = (**(code **)(*param_1 + 0x478))(param_1);
      if (0 < iVar22) {
        do {
          lStack_80 = 0;
          lStack_78 = 0;
          uStack_70 = 0;
          uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
          uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
          FUN_140722f30(0x14250eec8,uVar10,uVar8,&lStack_80);
          iVar20 = (int)(lStack_78 - lStack_80 >> 3) + -1;
          lVar21 = (longlong)iVar20;
          if (-1 < iVar20) {
            do {
              plVar16 = *(longlong **)(lStack_80 + lVar21 * 8);
              if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x80;
              }
              if ((*(uint *)(param_1 + 2) & 0x400) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x400;
              }
              if ((*(uint *)(param_1 + 2) & 0x800) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x800;
              }
              if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x10;
              }
              if ((*(uint *)(param_1 + 2) & 0x4000) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x4000;
              }
              if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
                *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x80000;
              }
              pcVar4 = *(code **)(*plVar16 + 0x4b0);
              uVar8 = (**(code **)(*param_1 + 0x178))(param_1);
              (*pcVar4)(plVar16,uVar8,1);
              (**(code **)(*plVar16 + 0x188))(plVar16);
              (**(code **)(*plVar16 + 0x328))(plVar16,1);
              (**(code **)(*plVar16 + 800))
                        (plVar16,(int)(short)uStackX_8,(int)(short)plStackX_18,
                         (int)(short)plStackX_10);
              lVar21 = lVar21 + -1;
            } while (-1 < lVar21);
          }
          iVar22 = iVar22 + -1;
          FUN_1400681a0(&lStack_80);
        } while (0 < iVar22);
        uVar19 = 1;
        goto LAB_140c8c813;
      }
      goto code_r0x000140c8c808;
    }
  }
  *(uint *)(param_1 + 2) = uVar25 | 0x100;
LAB_140c8c813:
  (**(code **)(*param_1 + 0x188))(param_1);
  (**(code **)(*param_1 + 0x328))(param_1,1);
  return uVar19;
  while( true ) {
    iVar20 = iVar20 + 1;
    puVar18 = puVar18 + 1;
    if ((ulonglong)(lVar23 - (longlong)puVar13 >> 3) <= (ulonglong)(longlong)iVar20) break;
code_r0x000140c8bdb3:
    if (*(longlong **)*puVar18 == param_1) {
      bVar5 = true;
      goto code_r0x000140c8bdfc;
    }
  }
code_r0x000140c8bdd8:
  iVar22 = iVar22 + 1;
  plVar16 = plVar16 + 1;
  if ((ulonglong)(lRam00000001424111a8 - (longlong)plRam00000001424111a0 >> 3) <=
      (ulonglong)(longlong)iVar22) goto code_r0x000140c8bdf9;
  goto code_r0x000140c8bd41;
code_r0x000140c8bdf9:
  bVar5 = false;
code_r0x000140c8bdfc:
  if (iRam00000001418be238 == 0) {
    uVar17 = lRam000000014250a1a0 - lRam000000014250a198 >> 3;
    uVar25 = (uint)uVar17;
    if (uVar25 != 0) {
      iVar22 = 0;
      while (0x40 < (int)uVar25) {
        uVar25 = (uint)(uVar17 >> 1) & 0x7fffffff;
        iVar20 = uVar25 + iVar22;
        if (*(int *)(lVar21 + 0x7f8) < **(int **)(lRam000000014250a198 + (longlong)iVar20 * 8)) {
          iVar20 = iVar22;
        }
        uVar25 = (int)uVar17 - uVar25;
        uVar17 = (ulonglong)uVar25;
        iVar22 = iVar20;
      }
      iVar20 = iVar22 + uVar25;
      if ((iVar20 != -1) && (iVar22 < iVar20)) {
        lVar23 = (longlong)iVar22;
        do {
          if (*(int *)(lVar21 + 0x7f8) == **(int **)(lRam000000014250a198 + lVar23 * 8)) {
            lVar23 = *(longlong *)(lRam000000014250a198 + (longlong)iVar22 * 8);
            goto code_r0x000140c8be8d;
          }
          iVar22 = iVar22 + 1;
          lVar23 = lVar23 + 1;
        } while (lVar23 < iVar20);
      }
    }
    lVar23 = 0;
code_r0x000140c8be8d:
    if (((!bVar5) && (lVar23 != 0)) && ((*(byte *)(lVar23 + 0xec) & 2) != 0)) {
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      iVar22 = *(int *)(lVar21 + 0x3bc);
      if ((iVar22 != -1) &&
         (iVar20 = (int)(lRam0000000142407538 - lRam0000000142407530 >> 3), iVar20 != 0)) {
        iVar20 = iVar20 + -1;
        iVar24 = 0;
        if (-1 < iVar20) {
          do {
            iVar14 = iVar20 + iVar24 >> 1;
            lVar23 = *(longlong *)(lRam0000000142407530 + (longlong)iVar14 * 8);
            if (*(int *)(lVar23 + 0x130) == iVar22) goto code_r0x000140c8bf1f;
            iVar6 = iVar14 + -1;
            if (*(int *)(lVar23 + 0x130) < iVar22) {
              iVar24 = iVar14 + 1;
              iVar6 = iVar20;
            }
            iVar20 = iVar6;
          } while (iVar24 <= iVar20);
        }
      }
      lVar23 = 0;
code_r0x000140c8bf1f:
      if (lVar23 != 0) {
        uStack_ac = 0x33;
        uStack_a4 = 0x32;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_b0 = 0xb3;
        func_0x000141408f60(lVar23,&uStack_b0);
        FUN_1400bb4a0(*(undefined4 *)(lVar23 + 0x130),&lStack_80);
        lVar21 = lStack_b8;
      }
      iVar22 = *(int *)(lVar21 + 0x3c0);
      if ((iVar22 != -1) &&
         (iVar20 = (int)(lRam0000000142407538 - lRam0000000142407530 >> 3), iVar20 != 0)) {
        iVar20 = iVar20 + -1;
        iVar24 = 0;
        if (-1 < iVar20) {
          do {
            iVar14 = iVar20 + iVar24 >> 1;
            lVar23 = *(longlong *)(lRam0000000142407530 + (longlong)iVar14 * 8);
            if (*(int *)(lVar23 + 0x130) == iVar22) goto code_r0x000140c8bfcf;
            iVar6 = iVar14 + -1;
            if (*(int *)(lVar23 + 0x130) < iVar22) {
              iVar24 = iVar14 + 1;
              iVar6 = iVar20;
            }
            iVar20 = iVar6;
          } while (iVar24 <= iVar20);
        }
      }
      lVar23 = 0;
code_r0x000140c8bfcf:
      if (lVar23 != 0) {
        uStack_ac = 1;
        uStack_a4 = 100;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_b0 = 0xb3;
        func_0x000141408f60(lVar23,&uStack_b0);
        FUN_1400bb4a0(*(undefined4 *)(lVar23 + 0x130),&lStack_80);
        lVar21 = lStack_b8;
      }
      iVar22 = *(int *)(lVar21 + 0x3c4);
      if ((iVar22 != -1) &&
         (iVar20 = (int)(lRam0000000142407538 - lRam0000000142407530 >> 3), iVar20 != 0)) {
        iVar20 = iVar20 + -1;
        iVar24 = 0;
        if (-1 < iVar20) {
          do {
            iVar14 = iVar20 + iVar24 >> 1;
            lVar23 = *(longlong *)(lRam0000000142407530 + (longlong)iVar14 * 8);
            if (*(int *)(lVar23 + 0x130) == iVar22) goto code_r0x000140c8c07f;
            iVar6 = iVar14 + -1;
            if (*(int *)(lVar23 + 0x130) < iVar22) {
              iVar24 = iVar14 + 1;
              iVar6 = iVar20;
            }
            iVar20 = iVar6;
          } while (iVar24 <= iVar20);
        }
      }
      lVar23 = 0;
code_r0x000140c8c07f:
      if (lVar23 != 0) {
        uStack_ac = 0xc;
        uStack_a4 = 100;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_b0 = 0xb3;
        func_0x000141408f60(lVar23,&uStack_b0);
        FUN_1400bb4a0(*(undefined4 *)(lVar23 + 0x130),&lStack_80);
        lVar21 = lStack_b8;
      }
      iVar22 = *(int *)(lVar21 + 0x3c8);
      if ((iVar22 != -1) &&
         (iVar20 = (int)(lRam0000000142407538 - lRam0000000142407530 >> 3), iVar20 != 0)) {
        iVar20 = iVar20 + -1;
        iVar24 = 0;
        if (-1 < iVar20) {
          do {
            iVar14 = iVar20 + iVar24 >> 1;
            lVar23 = *(longlong *)(lRam0000000142407530 + (longlong)iVar14 * 8);
            if (*(int *)(lVar23 + 0x130) == iVar22) goto code_r0x000140c8c12f;
            iVar6 = iVar14 + -1;
            if (*(int *)(lVar23 + 0x130) < iVar22) {
              iVar24 = iVar14 + 1;
              iVar6 = iVar20;
            }
            iVar20 = iVar6;
          } while (iVar24 <= iVar20);
        }
      }
      lVar23 = 0;
code_r0x000140c8c12f:
      if (lVar23 != 0) {
        uStack_ac = 0xc;
        uStack_a4 = 100;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_b0 = 0xb3;
        func_0x000141408f60(lVar23,&uStack_b0);
        FUN_1400bb4a0(*(undefined4 *)(lVar23 + 0x130),&lStack_80);
        lVar21 = lStack_b8;
      }
      iVar22 = 0;
      if (lRam0000000142407550 - lRam0000000142407548 >> 3 != 0) {
        lVar23 = 0;
        do {
          lVar26 = *(longlong *)(lVar23 + lRam0000000142407548);
          if (((*(byte *)(lVar26 + 0x110) & 2) == 0) && (lVar26 != lVar21)) {
            FUN_1400bc210(auStack_60,&lStack_80,*(undefined4 *)(lVar26 + 0x130));
            plStackX_10._0_4_ = -1;
            plStackX_10 = (longlong *)0xffffffff;
            iVar20 = (int)plStackX_10;
            if (cStack_58 != '\0') {
              iVar20 = auStack_60._0_4_;
            }
            if (iVar20 == -1) {
              iVar20 = *(int *)(lVar26 + 0x3c4);
              if (iVar20 == *(int *)(lVar21 + 0x130)) {
                uStack_ac = 2;
                uStack_a4 = 100;
              }
              else {
                iVar24 = *(int *)(lVar26 + 0x3c8);
                if (iVar24 == *(int *)(lVar21 + 0x130)) {
                  uStack_ac = 3;
                  uStack_a4 = 100;
                }
                else {
                  if ((iVar20 == -1) || (iVar20 != *(int *)(lVar21 + 0x3c4))) {
                    if ((iVar24 == -1) || (iVar24 != *(int *)(lVar21 + 0x3c8))) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                  if (!bVar5) {
                    uVar3 = *(undefined4 *)(lVar21 + 0xc30);
                    lVar26 = FUN_140b6ad70(0x14251c138,
                                           *(undefined4 *)
                                            (*(longlong *)(lVar23 + lRam0000000142407548) + 0xc30),
                                           *(longlong *)(lVar23 + lRam0000000142407548) + 0x1274);
                    lVar21 = lStack_b8;
                    if (lVar26 != 0) {
                      lVar21 = *(longlong *)(lVar26 + 0x130);
                      if ((lVar21 == 0) || (*(longlong *)(lVar21 + 0x60) == 0)) {
                        lVar26 = 0;
                      }
                      else {
                        lVar26 = FUN_1400bb3f0(uVar3,*(undefined8 *)(lVar21 + 0x60));
                      }
                      lVar21 = lStack_b8;
                      if ((lVar26 != 0) &&
                         ((uVar25 = func_0x0001402c2f60(lVar26,&uStackX_8), uVar25 == 0xd ||
                          (lVar21 = lStack_b8, uVar25 == 0x12)))) {
                        uStack_a4 = 0x32;
                        uStack_ac = (ulonglong)uVar25;
                        goto code_r0x000140c8c33a;
                      }
                    }
                    goto code_r0x000140c8c35e;
                  }
                  uStack_ac = 0xb;
                  uStack_a4 = 100;
code_r0x000140c8c33a:
                  lVar26 = *(longlong *)(lVar23 + lRam0000000142407548);
                }
              }
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_b0 = 0xb3;
              func_0x000141408f60(lVar26,&uStack_b0);
              lVar21 = lStack_b8;
            }
          }
code_r0x000140c8c35e:
          iVar22 = iVar22 + 1;
          lVar23 = lVar23 + 8;
        } while ((ulonglong)(longlong)iVar22 <
                 (ulonglong)(lRam0000000142407550 - lRam0000000142407548 >> 3));
      }
      FUN_140070d80(&lStack_80);
      lVar21 = lStack_b8;
    }
  }
code_r0x000140c8c390:
  if ((lVar21 != 0) && (sVar9 = (**(code **)*param_1)(param_1), sVar9 == 0x17)) {
    uStackX_8 = CONCAT62(uStackX_8._2_6_,0x8ad0);
    if ((*(uint *)(param_1 + 2) & 0x10) == 0) {
      if ((*(uint *)(param_1 + 2) & 8) == 0) {
        uStackX_8 = CONCAT62(uStackX_8._2_6_,(short)param_1[1]);
        plStackX_18 = (longlong *)
                      CONCAT62(plStackX_18._2_6_,*(undefined2 *)((longlong)param_1 + 10));
        uVar8 = *(undefined2 *)((longlong)param_1 + 0xc);
code_r0x000140c8c481:
        plStackX_10 = (longlong *)CONCAT62(plStackX_10._2_6_,uVar8);
      }
      else {
        puVar18 = (undefined8 *)param_1[8];
        for (puVar13 = (undefined8 *)param_1[7]; puVar13 < puVar18; puVar13 = puVar13 + 1) {
          iVar22 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
          if (iVar22 == 0xb) {
            lVar21 = (**(code **)(*(longlong *)*puVar13 + 0x18))();
            if (lVar21 != 0) {
              FUN_140ca3790(lVar21,&uStackX_8,&plStackX_18,&plStackX_10);
              goto code_r0x000140c8c485;
            }
          }
          else if ((iVar22 == 0x12) &&
                  (lVar21 = (**(code **)(*(longlong *)*puVar13 + 0x20))(), lVar21 != 0)) {
            FUN_14137fd40(lVar21,&uStackX_8,&plStackX_18,&plStackX_10);
            goto code_r0x000140c8c485;
          }
        }
        for (puVar13 = (undefined8 *)param_1[4]; puVar13 < (undefined8 *)param_1[5];
            puVar13 = puVar13 + 1) {
          if (*(int *)*puVar13 == 7) {
            lVar21 = *(longlong *)((int *)*puVar13 + 2);
            uStackX_8 = CONCAT62(uStackX_8._2_6_,*(undefined2 *)(lVar21 + 4));
            plStackX_18 = (longlong *)CONCAT62(plStackX_18._2_6_,*(undefined2 *)(lVar21 + 6));
            uVar8 = *(undefined2 *)(lVar21 + 8);
            goto code_r0x000140c8c481;
          }
        }
      }
    }
code_r0x000140c8c485:
    lVar21 = lStack_b8;
    iVar22 = (int)(*(longlong *)(lStack_b8 + 0x410) - *(longlong *)(lStack_b8 + 0x408) >> 3);
    while (iVar22 = iVar22 + -1, -1 < iVar22) {
      plVar16 = (longlong *)**(longlong **)(*(longlong *)(lVar21 + 0x408) + (longlong)iVar22 * 8);
      iVar20 = (int)(*(longlong *)(lVar21 + 0x410) - *(longlong *)(lVar21 + 0x408) >> 3) + -1;
      lStack_b8 = lVar21;
      if (-1 < iVar20) {
        lVar23 = (longlong)iVar20 * 8;
        do {
          plVar12 = *(longlong **)(lVar23 + *(longlong *)(lVar21 + 0x408));
          if ((longlong *)*plVar12 == plVar16) {
            sVar9 = (short)plVar12[1];
            if ((sVar9 == 6) || (sVar9 == 9)) {
              FUN_1413a1e80(lVar21);
            }
            FUN_14133cf70(lVar21,iVar20);
          }
          lVar23 = lVar23 + -8;
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
      }
      FUN_141341e30(lVar21,plVar16,0,0,1);
      (**(code **)(*plVar16 + 0x330))(plVar16);
      if ((*(uint *)(param_1 + 2) & 0x400) != 0) {
        *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x400;
      }
      if ((*(uint *)(param_1 + 2) & 0x800) != 0) {
        *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x800;
      }
      if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
        *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x10;
      }
      if ((*(uint *)(param_1 + 2) & 0x80000) != 0) {
        *(uint *)(plVar16 + 2) = *(uint *)(plVar16 + 2) | 0x80000;
      }
      (**(code **)(*plVar16 + 0x328))(plVar16,1);
      (**(code **)(*plVar16 + 800))(plVar16,(int)(short)uStackX_8);
      iVar20 = (int)(*(longlong *)(lStack_b8 + 0x410) - *(longlong *)(lStack_b8 + 0x408) >> 3);
      lVar21 = lStack_b8;
      if (iVar20 < iVar22) {
        iVar22 = iVar20;
      }
    }
  }
  goto LAB_140c8c813;
}

