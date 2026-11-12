/* Actual Ghidra 12.1.4 decompilation; complete native function, RVA 0x1a3360..0x1a70e0. Names are analyst labels. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void native_reference_trait_selection(int *param_1)

{
  undefined2 *puVar1;
  undefined8 *****pppppuVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  uint uVar10;
  char cVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  undefined8 *puVar21;
  undefined8 *****pppppuVar22;
  undefined8 ******ppppppuVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint **ppuVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  undefined8 ******ppppppuVar34;
  undefined8 ****ppppuVar35;
  uint uVar36;
  longlong lVar37;
  longlong *plVar38;
  int *piVar39;
  undefined8 *puVar40;
  int *piVar41;
  longlong *plVar42;
  ulonglong uVar43;
  int *piVar44;
  ulonglong uVar45;
  uint uVar46;
  int iVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulonglong uVar51;
  int *piVar52;
  bool bVar53;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStack_628 [32];
  longlong lStack_608;
  int *piStack_600;
  ulonglong uStack_5f8;
  ulonglong uStack_5f0;
  uint uStack_5e8;
  undefined4 uStack_5e0;
  undefined8 uStack_5d8;
  uint uStack_5c8;
  uint uStack_5c4;
  int aiStack_5c0 [2];
  longlong *plStack_5b8;
  undefined8 ***pppuStack_5b0;
  int *piStack_5a8;
  undefined8 uStack_5a0;
  int *piStack_598;
  longlong *plStack_590;
  longlong *plStack_588;
  longlong *plStack_580;
  longlong *plStack_578;
  uint *puStack_570;
  uint *puStack_568;
  uint *puStack_560;
  int *piStack_558;
  longlong *plStack_550;
  longlong *plStack_548;
  int *piStack_540;
  longlong *plStack_538;
  uint *puStack_530;
  uint *puStack_528;
  uint *puStack_520;
  uint *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [40];
  undefined8 *****pppppuStack_4d8;
  undefined8 ****ppppuStack_4d0;
  undefined8 ****ppppuStack_4c8;
  uint *puStack_4b8;
  undefined8 uStack_4b0;
  uint *puStack_4a8;
  undefined8 *****apppppuStack_498 [2];
  undefined8 uStack_488;
  ulonglong uStack_480;
  undefined8 *****apppppuStack_478 [2];
  undefined8 uStack_468;
  undefined8 uStack_460;
  int aiStack_458 [51];
  int aiStack_38c [36];
  int aiStack_2fc [37];
  int aiStack_268 [52];
  int aiStack_198 [51];
  int aiStack_cc [37];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_628;
  piStack_598 = param_1;
  if (7 < (uint)param_1[2]) goto override_jmp_1401a33bd_case_4;
                    /* WARNING: Switch is manually overridden */
  switch(param_1[2]) {
  case 0:
    iVar19 = param_1[3];
    iVar15 = (int)(_DAT_142407538 - _DAT_142407530 >> 3);
    if ((iVar15 == 0) || (iVar19 == -1)) break;
    uVar43 = 0;
    iVar15 = iVar15 + -1;
    uVar45 = uVar43;
    if (-1 < iVar15) {
      do {
        iVar18 = (int)uVar45 + iVar15 >> 1;
        plStack_580 = *(longlong **)(_DAT_142407530 + (longlong)iVar18 * 8);
        if ((int)plStack_580[0x26] == iVar19) goto LAB_1401a3a94;
        iVar32 = iVar18 + -1;
        if ((int)plStack_580[0x26] < iVar19) {
          uVar45 = (ulonglong)(iVar18 + 1);
          iVar32 = iVar15;
        }
        iVar15 = iVar32;
      } while ((int)uVar45 <= iVar15);
    }
    plStack_580 = (longlong *)0x0;
LAB_1401a3a94:
    plVar24 = plStack_580;
    if (plStack_580 == (longlong *)0x0) break;
    if (((DAT_1418c9608 != '\0') && (_DAT_1418c9614 == 8)) && ((_DAT_1418c9610 & 1) == 0)) {
      _DAT_1418c9610 = _DAT_1418c9610 | 1;
    }
    FUN_1401a7220(param_1,plStack_580);
    plVar38 = plStack_580;
    if (10 < (uint)param_1[0x30]) break;
                    /* WARNING: Switch is manually overridden */
    switch(param_1[0x30]) {
    case 0:
      param_1[0x43] = 0;
      iVar19 = 0;
      uStack_5c4 = 0;
      aiStack_5c0[0] = 0;
      puStack_4b8 = (uint *)0x0;
      uStack_4b0 = (uint *)0x0;
      puStack_4a8 = (uint *)0x0;
      puStack_530 = (uint *)0x0;
      puStack_528 = (uint *)0x0;
      puStack_520 = (uint *)0x0;
      pppppuStack_4d8 = (undefined8 *****)0x0;
      ppppuStack_4d0 = (undefined8 *****)0x0;
      ppppuStack_4c8 = (undefined8 *****)0x0;
      puStack_570 = (uint *)0x0;
      puStack_568 = (uint *)0x0;
      puStack_560 = (uint *)0x0;
      piVar41 = (int *)plVar24[0x153];
      plStack_5b8 = plVar24;
      uStack_5a0 = piVar41;
      if (piVar41 != (int *)0x0) {
        plStack_5b8 = plStack_580;
        cVar11 = supplier_140074d40(plStack_580);
        plVar24 = plVar38;
        if (cVar11 != '\0') {
          lVar37 = FUN_140073ba0(0x14250a2e8,piVar41[0xcc]);
          lVar25 = supplier_14007f120(0x1423f3c78,piVar41[0xcb]);
          plStack_588 = (longlong *)0x0;
          if (lVar37 == 0) {
            plStack_5b8 = plVar38;
            iVar15 = iVar19;
            if (lVar25 != 0) {
              plVar24 = (longlong *)(lVar25 + 0xd18);
              goto LAB_1401a3bbc;
            }
          }
          else {
            plVar24 = (longlong *)(lVar37 + 0x54);
LAB_1401a3bbc:
            plStack_588 = plVar24;
            plStack_5b8 = plVar38;
            iVar15 = 0;
            if (plVar24 != (longlong *)0x0) {
              uVar48 = uVar43;
              uVar33 = uVar43;
              uVar45 = uVar43;
              do {
                iVar15 = (int)*plVar24;
                iVar18 = (int)uVar48;
                uVar51 = uVar45;
                plStack_590 = plVar24;
                if (0x14 < iVar15 + 10U) {
                  if (iVar15 < 0x29) {
                    if (iVar15 < 0x1a) {
                      if (iVar15 < 0xb) {
                        if (iVar15 < -10) {
                          if (iVar15 < -0x19) {
                            uVar48 = (ulonglong)((iVar15 < -0x28) + 6);
                          }
                          else {
                            uVar48 = 5;
                          }
                        }
                        else {
                          uVar48 = 4;
                        }
                      }
                      else {
                        uVar48 = 3;
                      }
                    }
                    else {
                      uVar48 = 2;
                    }
                  }
                  else {
                    uVar48 = 1;
                  }
                  piVar39 = *(int **)(piVar41 + 0x92);
                  pppuStack_5b0 = *(undefined8 ****)(piVar41 + 0x94);
                  piStack_5a8 = piVar39;
                  pcVar20 = (char *)supplier_140070450(&piStack_5a8,&uStack_5c8,&pppuStack_5b0);
                  cVar11 = *pcVar20;
                  while (cVar11 < '\0') {
                    if (**(int **)piVar39 == iVar18) {
                      iVar32 = (*(int **)piVar39)[1];
                      if (iVar32 < 0x29) {
                        if (iVar32 < 0x1a) {
                          if (iVar32 < 0xb) {
                            if (iVar32 < -10) {
                              if (iVar32 < -0x19) {
                                if (iVar32 < -0x28) break;
                                uVar50 = 6;
                              }
                              else {
                                uVar50 = 5;
                              }
                            }
                            else {
                              uVar50 = 4;
                            }
                            if ((uint)uVar48 < uVar50) goto LAB_1401a3d7b;
                            break;
                          }
                          uVar50 = 3;
                        }
                        else {
                          uVar50 = 2;
                        }
                      }
                      else {
                        uVar50 = 1;
                      }
                      if (uVar50 < (uint)uVar48) goto LAB_1401a3d7b;
                      break;
                    }
                    piVar39 = piVar39 + 2;
                    piStack_5a8 = piVar39;
                    pcVar20 = (char *)supplier_140070450(&piStack_5a8,&uStack_5c8,&pppuStack_5b0);
                    cVar11 = *pcVar20;
                  }
                  iVar32 = -iVar15;
                  if (-iVar15 < 0) {
                    iVar32 = iVar15;
                  }
                  iVar31 = iVar32 * 2 + 1;
                  if (iVar15 < 1) {
                    iVar31 = iVar32 * 2;
                  }
                  *(int *)((longlong)aiStack_458 + uVar45) = iVar18;
                  *(int *)((longlong)aiStack_38c + uVar45 + 4) = iVar31;
                  iVar15 = (int)uVar33;
                  uVar50 = iVar15 + 1;
                  uVar33 = (ulonglong)uVar50;
                  uVar51 = uVar45 + 4;
                  iVar15 = iVar15 + -1;
                  if (1 < (int)uVar50) {
                    do {
                      iVar32 = *(int *)((longlong)aiStack_38c + uVar45);
                      if (iVar31 <= iVar32) break;
                      uVar17 = *(undefined4 *)((longlong)&uStack_460 + uVar45 + 4);
                      *(int *)((longlong)&uStack_460 + uVar45 + 4) = iVar18;
                      *(undefined4 *)((longlong)aiStack_458 + uVar45) = uVar17;
                      *(int *)((longlong)aiStack_38c + uVar45) = iVar31;
                      *(int *)((longlong)aiStack_38c + uVar45 + 4) = iVar32;
                      iVar15 = iVar15 + -1;
                      uVar45 = uVar45 - 4;
                    } while (-1 < iVar15);
                  }
                }
LAB_1401a3d7b:
                uVar48 = (ulonglong)(iVar18 + 1U);
                plVar24 = (longlong *)((longlong)plStack_590 + 4);
                plStack_590 = plVar24;
                uVar45 = uVar51;
              } while ((int)(iVar18 + 1U) < 0x21);
              iVar15 = (int)uVar33;
            }
          }
          plVar24 = plStack_5b8;
          puVar21 = *(undefined8 **)(piVar41 + 0x92);
          puVar40 = *(undefined8 **)(piVar41 + 0x94);
          uVar45 = uVar43;
          plStack_5b8 = plVar24;
          while (uVar50 = uStack_5c4, puVar21 < puVar40) {
            iVar18 = *(int *)*puVar21;
            iVar32 = ((int *)*puVar21)[1];
            uVar48 = uVar45;
            if ((iVar32 < -10) || (10 < iVar32)) {
LAB_1401a3df4:
              plStack_5b8 = plVar24;
              if (0 < (longlong)iVar15) {
                uVar33 = uVar43;
                do {
                  if (aiStack_458[uVar33] == iVar18) goto LAB_1401a3ee6;
                  uVar33 = uVar33 + 1;
                } while ((longlong)uVar33 < (longlong)iVar15);
              }
              iVar31 = -iVar32;
              if (-iVar32 < 0) {
                iVar31 = iVar32;
              }
              iVar47 = iVar31 * 2 + 1;
              if (iVar32 < 1) {
                iVar47 = iVar31 * 2;
              }
              *(int *)((longlong)aiStack_38c + uVar45 + 4) = iVar18;
              *(int *)((longlong)aiStack_2fc + uVar45 + 4) = iVar47;
              *(int *)((longlong)aiStack_cc + uVar45 + 4) = iVar32;
              uStack_5c4 = uStack_5c4 + 1;
              uVar48 = uVar45 + 4;
              iVar31 = uVar50 - 1;
              if ((int)uStack_5c4 < 2) goto LAB_1401a3ee6;
              do {
                iVar3 = *(int *)((longlong)aiStack_2fc + uVar45);
                if (iVar47 <= iVar3) break;
                uVar17 = *(undefined4 *)((longlong)aiStack_38c + uVar45);
                *(int *)((longlong)aiStack_38c + uVar45) = iVar18;
                *(undefined4 *)((longlong)aiStack_38c + uVar45 + 4) = uVar17;
                *(int *)((longlong)aiStack_2fc + uVar45) = iVar47;
                *(int *)((longlong)aiStack_2fc + uVar45 + 4) = iVar3;
                uVar17 = *(undefined4 *)((longlong)aiStack_cc + uVar45);
                *(int *)((longlong)aiStack_cc + uVar45) = iVar32;
                *(undefined4 *)((longlong)aiStack_cc + uVar45 + 4) = uVar17;
                iVar31 = iVar31 + -1;
                uVar45 = uVar45 - 4;
              } while (-1 < iVar31);
              puVar21 = puVar21 + 1;
              uVar45 = uVar48;
            }
            else if (plStack_588 == (longlong *)0x0) {
              plStack_5b8 = plVar24;
              puVar21 = puVar21 + 1;
            }
            else {
              iVar31 = *(int *)((longlong)plStack_588 + (longlong)iVar18 * 4);
              if ((iVar31 < -10) || (plStack_5b8 = plVar24, 10 < iVar31)) goto LAB_1401a3df4;
LAB_1401a3ee6:
              puVar21 = puVar21 + 1;
              uVar45 = uVar48;
              plStack_5b8 = plVar24;
            }
          }
          iVar15 = -2;
          piVar39 = aiStack_268;
          piVar44 = aiStack_458;
          piVar52 = aiStack_198;
          uVar45 = uVar43;
          uVar48 = uVar43;
          do {
            sVar12 = *(short *)(uVar45 + 0x2c8 + (longlong)uStack_5a0);
            iVar18 = (int)sVar12;
            iVar32 = (int)uVar48;
            if ((ushort)(sVar12 - 0x28U) < 0x15) {
              if ((*(longlong *)(uStack_5a0 + 0xe8) != 0) &&
                 (sVar12 = *(short *)(uVar45 + *(longlong *)(uStack_5a0 + 0xe8)), sVar12 != 0)) {
                if (iVar18 < 0x5b) {
                  iVar31 = iVar19;
                  if (0x4b < iVar18) {
                    iVar31 = 2;
                  }
                }
                else {
                  iVar31 = 3;
                }
                iVar18 = iVar18 + sVar12;
                if (iVar18 < 0x5b) {
                  if (iVar18 < 0x4c) {
                    if (iVar18 < 0x3d) {
                      iVar47 = iVar19;
                      if (iVar18 < 0x28) {
                        if (iVar18 < 0x19) {
                          iVar47 = (9 < iVar18) - 3;
                        }
                        else {
                          iVar47 = -1;
                        }
                      }
                    }
                    else {
                      iVar47 = 1;
                    }
                  }
                  else {
                    iVar47 = 2;
                  }
                }
                else {
                  iVar47 = 3;
                }
                if (iVar31 != iVar47) {
                  *piVar52 = iVar32;
                  *piVar44 = 0;
                  *piVar39 = 0;
                  aiStack_5c0[0] = aiStack_5c0[0] + 1;
                  iVar15 = iVar15 + 1;
                  piVar52 = piVar52 + 1;
                  piVar44 = piVar44 + 1;
                  piVar39 = piVar39 + 1;
                }
              }
            }
            else {
              iVar31 = -(iVar18 + -0x32);
              if (iVar31 < 0) {
                iVar31 = iVar18 + -0x32;
              }
              *piVar52 = iVar32;
              *piVar44 = iVar31;
              *piVar39 = iVar18;
              aiStack_5c0[0] = aiStack_5c0[0] + 1;
              iVar15 = iVar15 + 1;
              piVar52 = piVar52 + 1;
              piVar44 = piVar44 + 1;
              piVar39 = piVar39 + 1;
              if (-1 < iVar15) {
                lVar37 = (longlong)iVar15 * 4;
                iVar18 = iVar15;
                do {
                  iVar47 = *(int *)((longlong)aiStack_458 + lVar37);
                  if (iVar31 <= iVar47) break;
                  uVar17 = *(undefined4 *)((longlong)aiStack_198 + lVar37);
                  *(int *)((longlong)aiStack_198 + lVar37) = iVar32;
                  *(undefined4 *)((longlong)aiStack_198 + lVar37 + 4) = uVar17;
                  *(int *)((longlong)aiStack_458 + lVar37) = iVar31;
                  *(int *)((longlong)aiStack_458 + lVar37 + 4) = iVar47;
                  uVar17 = *(undefined4 *)((longlong)aiStack_268 + lVar37);
                  *(int *)((longlong)aiStack_268 + lVar37) =
                       (int)*(short *)(uVar45 + 0x2c8 + (longlong)uStack_5a0);
                  *(undefined4 *)((longlong)aiStack_268 + lVar37 + 4) = uVar17;
                  lVar37 = lVar37 + -4;
                  iVar18 = iVar18 + -1;
                } while (-1 < iVar18);
              }
            }
            sVar12 = *(short *)(uVar45 + 0x2ca + (longlong)uStack_5a0);
            iVar18 = (int)sVar12;
            if ((ushort)(sVar12 - 0x28U) < 0x15) {
              if ((*(longlong *)(uStack_5a0 + 0xe8) != 0) &&
                 (sVar12 = *(short *)(uVar45 + 2 + *(longlong *)(uStack_5a0 + 0xe8)), sVar12 != 0))
              {
                if (iVar18 < 0x5b) {
                  iVar31 = iVar19;
                  if (0x4b < iVar18) {
                    iVar31 = 2;
                  }
                }
                else {
                  iVar31 = 3;
                }
                iVar18 = iVar18 + sVar12;
                if (iVar18 < 0x5b) {
                  if (iVar18 < 0x4c) {
                    if (iVar18 < 0x3d) {
                      iVar47 = iVar19;
                      if (iVar18 < 0x28) {
                        if (iVar18 < 0x19) {
                          iVar47 = (9 < iVar18) - 3;
                        }
                        else {
                          iVar47 = -1;
                        }
                      }
                    }
                    else {
                      iVar47 = 1;
                    }
                  }
                  else {
                    iVar47 = 2;
                  }
                }
                else {
                  iVar47 = 3;
                }
                if (iVar31 != iVar47) {
                  *piVar52 = iVar32 + 1;
                  *piVar44 = 0;
                  *piVar39 = 0;
                  aiStack_5c0[0] = aiStack_5c0[0] + 1;
                  iVar15 = iVar15 + 1;
                  piVar52 = piVar52 + 1;
                  piVar44 = piVar44 + 1;
                  piVar39 = piVar39 + 1;
                }
              }
            }
            else {
              iVar31 = -(iVar18 + -0x32);
              if (iVar31 < 0) {
                iVar31 = iVar18 + -0x32;
              }
              *piVar52 = iVar32 + 1;
              *piVar44 = iVar31;
              *piVar39 = iVar18;
              aiStack_5c0[0] = aiStack_5c0[0] + 1;
              iVar15 = iVar15 + 1;
              piVar52 = piVar52 + 1;
              piVar44 = piVar44 + 1;
              piVar39 = piVar39 + 1;
              if (-1 < iVar15) {
                lVar37 = (longlong)iVar15 * 4;
                iVar18 = iVar15;
                do {
                  iVar47 = *(int *)((longlong)aiStack_458 + lVar37);
                  if (iVar31 <= iVar47) break;
                  uVar17 = *(undefined4 *)((longlong)aiStack_198 + lVar37);
                  *(int *)((longlong)aiStack_198 + lVar37) = iVar32 + 1;
                  *(undefined4 *)((longlong)aiStack_198 + lVar37 + 4) = uVar17;
                  *(int *)((longlong)aiStack_458 + lVar37) = iVar31;
                  *(int *)((longlong)aiStack_458 + lVar37 + 4) = iVar47;
                  uVar17 = *(undefined4 *)((longlong)aiStack_268 + lVar37);
                  *(int *)((longlong)aiStack_268 + lVar37) =
                       (int)*(short *)(uVar45 + 0x2ca + (longlong)uStack_5a0);
                  *(undefined4 *)((longlong)aiStack_268 + lVar37 + 4) = uVar17;
                  lVar37 = lVar37 + -4;
                  iVar18 = iVar18 + -1;
                } while (-1 < iVar18);
              }
            }
            uVar48 = (ulonglong)(iVar32 + 2U);
            uVar45 = uVar45 + 4;
            param_1 = piStack_598;
            piVar41 = uStack_5a0;
            plVar24 = plStack_5b8;
            plVar38 = plStack_580;
          } while ((int)(iVar32 + 2U) < 0x32);
        }
      }
      uVar45 = (ulonglong)piVar41 & 0xffffffffffffff00;
      piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,(int)uVar45);
      lVar37 = FUN_1413cc010(plVar24);
      if (lVar37 != 0) {
        bVar53 = *(int *)(lVar37 + 0x90) == 0;
        uVar45 = (ulonglong)bVar53;
        piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,(uint)bVar53);
      }
      lVar37 = plVar38[0x153];
      puVar27 = puStack_4b8;
      puVar28 = puStack_530;
      if (lVar37 != 0) {
        ppppuVar35 = (undefined8 ****)
                     supplier_1400bd0c0(0x14250eec8,*(undefined2 *)(lVar37 + 0x80),
                                        *(undefined2 *)(lVar37 + 0x86));
        pppuStack_5b0 = ppppuVar35;
        puVar27 = puStack_4b8;
        puVar28 = puStack_530;
        if (ppppuVar35 != (undefined8 ****)0x0) {
          uStack_5a0 = (int *)((ulonglong)uStack_5a0 & 0xffffffff00000000);
          uVar48 = uVar43;
          do {
            uVar50 = (uint)uVar48;
            lVar25 = (longlong)(int)uVar50;
            iVar15 = *(int *)((lVar25 + 0x37) * 0x1c + (longlong)plVar24);
            iVar18 = *(int *)(lVar25 * 0x1c + 0x614 + (longlong)plVar24);
            iVar32 = iVar15 - iVar18;
            lVar37 = plVar24[0x11d];
            if (lVar37 != 0) {
              iVar32 = (iVar32 * *(int *)(lVar37 + lVar25 * 4)) / 100 +
                       *(int *)(lVar37 + 0x18 + lVar25 * 4);
            }
            iVar31 = *(int *)((longlong)ppppuVar35 + lVar25 * 0x1c + 0x1234);
            iVar47 = iVar19;
            if (-1 < iVar32) {
              iVar47 = iVar32;
            }
            uStack_5c8 = (iVar47 - iVar31) / 0x14;
            if (((char)uVar45 != '\0') &&
               (uVar36 = ((iVar15 - iVar18) - iVar31) / 0x14, (int)uVar36 < (int)uStack_5c8)) {
              uStack_5c8 = uVar36;
            }
            uVar36 = uStack_5c8;
            if ((0x18 < (int)uStack_5c8) || ((int)uStack_5c8 < -0x18)) {
              uVar48 = (longlong)uStack_4b0 - (longlong)puStack_4b8 >> 2;
              if (uVar48 == 0) {
                supplier_140070a40(&puStack_4b8,&uStack_5a0);
                supplier_140070a40(&puStack_530,&uStack_5c8);
              }
              else {
                iVar15 = (int)uVar48 + -1;
                lVar37 = (longlong)iVar15;
                if (-1 < iVar15) {
                  do {
                    if ((int)uStack_5c8 < (int)puStack_530[lVar37]) {
                      uVar45 = (ulonglong)(iVar15 + 1);
                      if (uVar45 < uVar48) {
                        FUN_1400bb040(&puStack_4b8,uVar45,&uStack_5a0);
                        FUN_1400bb040(&puStack_530,uVar45,&uStack_5c8);
                      }
                      else {
                        supplier_140070a40(&puStack_4b8,&uStack_5a0);
                        supplier_140070a40(&puStack_530,&uStack_5c8);
                      }
                      uVar45 = (ulonglong)piStack_5a8 & 0xffffffff;
                      break;
                    }
                    iVar15 = iVar15 + -1;
                    lVar37 = lVar37 + -1;
                  } while (-1 < lVar37);
                }
                puVar27 = puStack_4b8;
                if (iVar15 == -1) {
                  if (uStack_4b0 == puStack_4a8) {
                    FUN_140072450(&puStack_4b8,puStack_4b8,&uStack_5a0);
                  }
                  else if (puStack_4b8 == uStack_4b0) {
                    *uStack_4b0 = uVar50;
                    uStack_4b0 = uStack_4b0 + 1;
                  }
                  else {
                    *uStack_4b0 = uStack_4b0[-1];
                    uStack_4b0 = uStack_4b0 + 1;
                    supplier_14155486a(puStack_4b8 + 1,puStack_4b8);
                    *puVar27 = uVar50;
                  }
                  puVar27 = puStack_530;
                  if (puStack_528 == puStack_520) {
                    FUN_140072450(&puStack_530,puStack_530,&uStack_5c8);
                  }
                  else if (puStack_530 == puStack_528) {
                    *puStack_528 = uVar36;
                    puStack_528 = puStack_528 + 1;
                  }
                  else {
                    *puStack_528 = puStack_528[-1];
                    puStack_528 = puStack_528 + 1;
                    supplier_14155486a(puStack_530 + 1,puStack_530);
                    *puVar27 = uVar36;
                  }
                }
              }
            }
            pppuVar9 = pppuStack_5b0;
            uVar50 = uVar50 + 1;
            uVar48 = (ulonglong)uVar50;
            uStack_5a0 = (int *)CONCAT44(uStack_5a0._4_4_,uVar50);
          } while ((int)uVar50 < 6);
          puVar27 = puStack_4b8;
          puVar28 = puStack_530;
          param_1 = piStack_598;
          if (plVar24[0x1b0] == 0) {
            if (((int)plVar24[0x250] < 8) || ((*(byte *)(plVar24[0x24f] + 7) & 4) == 0)) {
              if (((*(uint *)((longlong)plVar24 + 0x82c) & 0x2000000) == 0) &&
                 ((*(uint *)(plVar24 + 0x105) & 0x2000000) != 0)) goto LAB_1401a4513;
            }
            else if ((*(uint *)((longlong)plVar24 + 0x82c) & 0x2000000) == 0) {
LAB_1401a4513:
              uStack_5a0 = (int *)((ulonglong)uStack_5a0._4_4_ << 0x20);
              pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
              uVar48 = uVar43;
              do {
                lVar37 = plStack_580[0x153];
                iVar18 = (int)uVar48;
                iVar15 = iVar19;
                if (lVar37 != 0) {
                  lVar26 = (longlong)iVar18;
                  iVar32 = *(int *)(lVar26 * 0x1c + 0xac + lVar37) -
                           *(int *)(lVar26 * 0x1c + 0xbc + lVar37);
                  lVar25 = plVar24[0x11d];
                  if (lVar25 != 0) {
                    iVar32 = (iVar32 * *(int *)(lVar25 + 0x30 + lVar26 * 4)) / 100 +
                             *(int *)(lVar25 + 100 + lVar26 * 4);
                  }
                  if (-1 < iVar32) {
                    iVar15 = iVar32;
                  }
                }
                lVar25 = (longlong)iVar18 * 0x1c;
                iVar32 = *(int *)(lVar25 + 0x12dc + (longlong)pppuVar9);
                uStack_5c8 = (iVar15 - iVar32) / 0x14;
                if ((((char)uVar45 != '\0') && (lVar37 != 0)) &&
                   (uVar50 = ((*(int *)(lVar25 + 0xac + lVar37) - *(int *)(lVar25 + 0xbc + lVar37))
                             - iVar32) / 0x14, (int)uVar50 < (int)uStack_5c8)) {
                  uStack_5c8 = uVar50;
                }
                uVar50 = uStack_5c8;
                if ((0x18 < (int)uStack_5c8) || ((int)uStack_5c8 < -0x18)) {
                  uVar48 = (longlong)pppppuVar22 - (longlong)pppppuStack_4d8 >> 2;
                  if (uVar48 == 0) {
                    if (pppppuVar22 == (undefined8 *****)ppppuStack_4c8) {
                      FUN_140072450(&pppppuStack_4d8,pppppuVar22,&uStack_5a0);
                    }
                    else {
                      *(int *)pppppuVar22 = iVar18;
                      ppppuStack_4d0 = (undefined8 *****)((longlong)ppppuStack_4d0 + 4);
                    }
                    puVar27 = puStack_568;
                    if (puStack_568 == puStack_560) {
LAB_1401a4817:
                      FUN_140072450(&puStack_570,puVar27,&uStack_5c8);
                      pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
                    }
                    else {
                      *puStack_568 = uVar50;
                      puStack_568 = puStack_568 + 1;
                      pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
                    }
                  }
                  else {
                    iVar15 = (int)uVar48 + -1;
                    lVar37 = (longlong)iVar15;
                    if (-1 < iVar15) {
                      do {
                        if ((int)uStack_5c8 < (int)puStack_570[lVar37]) {
                          uVar45 = (longlong)iVar15 + 1;
                          if (uVar45 < uVar48) {
                            pppppuVar2 = (undefined8 *****)((longlong)pppppuStack_4d8 + uVar45 * 4);
                            if (pppppuVar22 == (undefined8 *****)ppppuStack_4c8) {
                              FUN_140072450(&pppppuStack_4d8,pppppuVar2,&uStack_5a0);
                            }
                            else if (pppppuVar2 == pppppuVar22) {
                              *(int *)pppppuVar22 = iVar18;
                              ppppuStack_4d0 = (undefined8 *****)((longlong)ppppuStack_4d0 + 4);
                            }
                            else {
                              *(int *)pppppuVar22 = *(int *)((longlong)pppppuVar22 + -4);
                              ppppuStack_4d0 = (undefined8 ****)((longlong)ppppuStack_4d0 + 4);
                              supplier_14155486a((int *)((longlong)pppppuVar2 + 4),pppppuVar2);
                              *(int *)pppppuVar2 = iVar18;
                            }
                            puVar27 = puStack_570 + uVar45;
                            if (puStack_568 == puStack_560) {
                              FUN_140072450(&puStack_570,puVar27,&uStack_5c8);
                              plVar24 = plStack_5b8;
                            }
                            else if (puVar27 == puStack_568) {
                              *puStack_568 = uVar50;
                              puStack_568 = puStack_568 + 1;
                              plVar24 = plStack_5b8;
                            }
                            else {
                              *puStack_568 = puStack_568[-1];
                              puStack_568 = puStack_568 + 1;
                              supplier_14155486a(puVar27 + 1,puVar27);
                              *puVar27 = uVar50;
                              plVar24 = plStack_5b8;
                            }
                          }
                          else {
                            if (pppppuVar22 == (undefined8 *****)ppppuStack_4c8) {
                              FUN_140072450(&pppppuStack_4d8,pppppuVar22,&uStack_5a0);
                            }
                            else {
                              *(int *)pppppuVar22 = iVar18;
                              ppppuStack_4d0 = (undefined8 *****)((longlong)ppppuStack_4d0 + 4);
                            }
                            if (puStack_568 == puStack_560) {
                              FUN_140072450(&puStack_570,puStack_568,&uStack_5c8);
                            }
                            else {
                              *puStack_568 = uVar50;
                              puStack_568 = puStack_568 + 1;
                            }
                          }
                          uVar45 = (ulonglong)piStack_5a8 & 0xffffffff;
                          pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
                          break;
                        }
                        iVar15 = iVar15 + -1;
                        lVar37 = lVar37 + -1;
                      } while (-1 < lVar37);
                    }
                    pppppuVar2 = pppppuStack_4d8;
                    if (iVar15 == -1) {
                      if (pppppuVar22 == (undefined8 *****)ppppuStack_4c8) {
                        FUN_140072450(&pppppuStack_4d8,pppppuStack_4d8,&uStack_5a0);
                      }
                      else if (pppppuStack_4d8 == pppppuVar22) {
                        *(int *)pppppuVar22 = iVar18;
                        ppppuStack_4d0 = (undefined8 *****)((longlong)ppppuStack_4d0 + 4);
                      }
                      else {
                        *(int *)pppppuVar22 = *(int *)((longlong)pppppuVar22 + -4);
                        ppppuStack_4d0 = (undefined8 ****)((longlong)ppppuStack_4d0 + 4);
                        supplier_14155486a((int *)((longlong)pppppuStack_4d8 + 4),pppppuStack_4d8);
                        *(int *)pppppuVar2 = iVar18;
                      }
                      puVar27 = puStack_570;
                      if (puStack_568 == puStack_560) goto LAB_1401a4817;
                      if (puStack_570 == puStack_568) {
                        *puStack_568 = uVar50;
                        puStack_568 = puStack_568 + 1;
                        pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
                      }
                      else {
                        *puStack_568 = puStack_568[-1];
                        puStack_568 = puStack_568 + 1;
                        supplier_14155486a(puStack_570 + 1,puStack_570);
                        *puVar27 = uVar50;
                        pppppuVar22 = (undefined8 *****)ppppuStack_4d0;
                      }
                    }
                  }
                }
                uVar50 = iVar18 + 1;
                uVar48 = (ulonglong)uVar50;
                uStack_5a0 = (int *)CONCAT44(uStack_5a0._4_4_,uVar50);
                puVar27 = puStack_4b8;
                puVar28 = puStack_530;
                param_1 = piStack_598;
              } while ((int)uVar50 < 0xd);
            }
          }
        }
      }
      while (pppppuVar22 = pppppuStack_4d8, puVar29 = puStack_570, puVar27 < uStack_4b0) {
        uVar50 = *puVar28;
        uVar36 = *puVar27;
        uVar10 = -uVar50;
        if ((int)-uVar50 < 0) {
          uVar10 = uVar50;
        }
        iVar19 = param_1[0x43];
        if (iVar19 < 1) {
LAB_1401a48a4:
          if (param_1[0x43] < 6) {
            param_1[(longlong)param_1[0x43] + 0x31] = uVar50 >> 0x1f;
            param_1[(longlong)param_1[0x43] + 0x37] = uVar36;
            param_1[(longlong)param_1[0x43] + 0x3d] = uVar10;
            param_1[0x43] = param_1[0x43] + 1;
          }
LAB_1401a48dd:
          puVar27 = puVar27 + 1;
          puVar28 = puVar28 + 1;
        }
        else {
          piVar41 = param_1 + 0x3d;
          uVar45 = uVar43;
          uVar48 = uVar43;
LAB_1401a4890:
          if ((int)uVar10 <= *piVar41) goto code_r0x0001401a4895;
          lVar37 = (longlong)(iVar19 + -1);
          if ((longlong)uVar45 <= lVar37) {
            piVar41 = param_1 + lVar37 + 0x32;
            lVar37 = (lVar37 - uVar45) + 1;
            do {
              if (iVar19 < 6) {
                *piVar41 = piVar41[-1];
                piVar41[6] = piVar41[5];
                piVar41[0xc] = piVar41[0xb];
              }
              piVar41 = piVar41 + -1;
              iVar19 = iVar19 + -1;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
          }
          param_1[uVar45 + 0x31] = uVar50 >> 0x1f;
          param_1[uVar45 + 0x37] = uVar36;
          param_1[uVar45 + 0x3d] = uVar10;
          if (5 < param_1[0x43]) goto LAB_1401a48dd;
          param_1[0x43] = param_1[0x43] + 1;
          puVar27 = puVar27 + 1;
          puVar28 = puVar28 + 1;
        }
      }
      while (pppppuVar22 < ppppuStack_4d0) {
        uVar50 = *puVar29;
        iVar15 = ((int)uVar50 >> 0x1f & 1U) + 2;
        iVar19 = *(int *)pppppuVar22;
        uVar36 = -uVar50;
        if ((int)-uVar50 < 0) {
          uVar36 = uVar50;
        }
        if (param_1[0x43] < 1) {
LAB_1401a49d5:
          if (param_1[0x43] < 6) {
            param_1[(longlong)param_1[0x43] + 0x31] = iVar15;
            param_1[(longlong)param_1[0x43] + 0x37] = iVar19;
            param_1[(longlong)param_1[0x43] + 0x3d] = uVar36;
            param_1[0x43] = param_1[0x43] + 1;
          }
LAB_1401a4a0e:
          pppppuVar22 = (undefined8 *****)((longlong)pppppuVar22 + 4);
          puVar29 = puVar29 + 1;
        }
        else {
          piVar41 = param_1 + 0x3d;
          uVar45 = uVar43;
          uVar48 = uVar43;
LAB_1401a49c1:
          if ((int)uVar36 <= *piVar41) goto code_r0x0001401a49c6;
          uVar48 = (ulonglong)(uint)param_1[0x43];
          if ((longlong)uVar45 <= (longlong)(uVar48 - 1)) {
            piVar41 = param_1 + uVar48 + 0x31;
            lVar37 = ((uVar48 - 1) - uVar45) + 1;
            do {
              if ((int)uVar48 < 6) {
                *piVar41 = piVar41[-1];
                piVar41[6] = piVar41[5];
                piVar41[0xc] = piVar41[0xb];
              }
              piVar41 = piVar41 + -1;
              uVar48 = (ulonglong)((int)uVar48 - 1);
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
          }
          param_1[uVar45 + 0x31] = iVar15;
          param_1[uVar45 + 0x37] = iVar19;
          param_1[uVar45 + 0x3d] = uVar36;
          if (5 < param_1[0x43]) goto LAB_1401a4a0e;
          param_1[0x43] = param_1[0x43] + 1;
          pppppuVar22 = (undefined8 *****)((longlong)pppppuVar22 + 4);
          puVar29 = puVar29 + 1;
        }
      }
      uVar45 = uVar43;
      if (0 < (longlong)(int)uStack_5c4) {
        do {
          iVar18 = (aiStack_cc[uVar45 + 1] >> 0x1f & 1U) + 6;
          iVar19 = aiStack_38c[uVar45 + 1];
          iVar15 = -aiStack_2fc[uVar45 + 1];
          if (-aiStack_2fc[uVar45 + 1] < 0) {
            iVar15 = aiStack_2fc[uVar45 + 1];
          }
          if (0 < param_1[0x43]) {
            piVar41 = param_1 + 0x3d;
            uVar48 = uVar43;
            uVar33 = uVar43;
LAB_1401a4af3:
            if (iVar15 <= *piVar41) goto code_r0x0001401a4afc;
            uVar48 = (ulonglong)(uint)param_1[0x43];
            if ((longlong)uVar33 <= (longlong)(uVar48 - 1)) {
              piVar41 = param_1 + uVar48 + 0x31;
              lVar37 = ((uVar48 - 1) - uVar33) + 1;
              do {
                if ((int)uVar48 < 6) {
                  *piVar41 = piVar41[-1];
                  piVar41[6] = piVar41[5];
                  piVar41[0xc] = piVar41[0xb];
                }
                piVar41 = piVar41 + -1;
                uVar48 = (ulonglong)((int)uVar48 - 1);
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
            param_1[uVar33 + 0x31] = iVar18;
            param_1[uVar33 + 0x37] = iVar19;
            param_1[uVar33 + 0x3d] = iVar15;
            if (param_1[0x43] < 6) {
              param_1[0x43] = param_1[0x43] + 1;
            }
            goto LAB_1401a4b40;
          }
LAB_1401a4b09:
          if (param_1[0x43] < 6) {
            param_1[(longlong)param_1[0x43] + 0x31] = iVar18;
            param_1[(longlong)param_1[0x43] + 0x37] = iVar19;
            param_1[(longlong)param_1[0x43] + 0x3d] = iVar15;
            param_1[0x43] = param_1[0x43] + 1;
          }
LAB_1401a4b40:
          uVar45 = uVar45 + 1;
        } while ((longlong)uVar45 < (longlong)(int)uStack_5c4);
      }
      uVar45 = uVar43;
      if (0 < (longlong)aiStack_5c0[0]) {
        do {
          iVar18 = (aiStack_268[uVar45] < 0x32) + 4;
          iVar19 = aiStack_198[uVar45];
          iVar15 = -aiStack_458[uVar45];
          if (-aiStack_458[uVar45] < 0) {
            iVar15 = aiStack_458[uVar45];
          }
          if (0 < param_1[0x43]) {
            piVar41 = param_1 + 0x3d;
            uVar48 = uVar43;
            uVar33 = uVar43;
LAB_1401a4ba5:
            if (iVar15 <= *piVar41) goto code_r0x0001401a4bae;
            uVar48 = (ulonglong)(uint)param_1[0x43];
            if ((longlong)uVar33 <= (longlong)(uVar48 - 1)) {
              piVar41 = param_1 + uVar48 + 0x31;
              lVar37 = ((uVar48 - 1) - uVar33) + 1;
              do {
                if ((int)uVar48 < 6) {
                  *piVar41 = piVar41[-1];
                  piVar41[6] = piVar41[5];
                  piVar41[0xc] = piVar41[0xb];
                }
                piVar41 = piVar41 + -1;
                uVar48 = (ulonglong)((int)uVar48 - 1);
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
            param_1[uVar33 + 0x31] = iVar18;
            param_1[uVar33 + 0x37] = iVar19;
            param_1[uVar33 + 0x3d] = iVar15;
            if (param_1[0x43] < 6) {
              param_1[0x43] = param_1[0x43] + 1;
            }
            goto LAB_1401a4bf2;
          }
LAB_1401a4bbb:
          if (param_1[0x43] < 6) {
            param_1[(longlong)param_1[0x43] + 0x31] = iVar18;
            param_1[(longlong)param_1[0x43] + 0x37] = iVar19;
            param_1[(longlong)param_1[0x43] + 0x3d] = iVar15;
            param_1[0x43] = param_1[0x43] + 1;
          }
LAB_1401a4bf2:
          uVar45 = uVar45 + 1;
        } while ((longlong)uVar45 < (longlong)aiStack_5c0[0]);
      }
      FUN_140070d80(&puStack_570);
      FUN_140070d80(&pppppuStack_4d8);
      FUN_140070d80(&puStack_530);
      ppuVar30 = &puStack_4b8;
      goto LAB_1401a70aa;
    case 2:
      param_1[0x71f] = 0;
      param_1[0x720] = 0;
      *(char *)(param_1 + 0x721) = '\0';
      FUN_1400bcfe0(param_1 + 0x722);
      plVar38 = *(longlong **)(param_1 + 0x728);
      pppuStack_5b0 = *(undefined8 ****)(param_1 + 0x72a);
      plStack_588 = plVar38;
      pcVar20 = (char *)supplier_140070450(&plStack_588,&uStack_5c8,&pppuStack_5b0);
      cVar11 = *pcVar20;
      plVar42 = plVar38;
      while (cVar11 < '\0') {
        if (*plVar38 != 0) {
          FUN_1401503c0();
          plVar42 = plVar38;
        }
        plVar38 = plVar42 + 1;
        plVar42 = plVar38;
        plStack_588 = plVar38;
        pcVar20 = (char *)supplier_140070450(&plStack_588,&uStack_5c8,&pppuStack_5b0);
        plVar24 = plStack_580;
        cVar11 = *pcVar20;
      }
      supplier_1400708c0(param_1 + 0x728);
      param_1[0x72e] = 0;
      FUN_140483ed0(param_1,plVar24);
      break;
    case 3:
      param_1[0x6c6] = 0;
      *(char *)(param_1 + 0x6c7) = '\0';
      param_1[0x6c8] = 0;
      *(char *)(param_1 + 0x6c9) = '\0';
      param_1[0x6ca] = 0;
      FUN_1400bcfe0(param_1 + 0x6f0);
      plVar38 = *(longlong **)(param_1 + 0x6f6);
      pppuStack_5b0 = *(undefined8 ****)(param_1 + 0x6f8);
      plStack_588 = plVar38;
      pcVar20 = (char *)supplier_140070450(&plStack_588,&uStack_5c8,&pppuStack_5b0);
      cVar11 = *pcVar20;
      plVar42 = plVar38;
      while (cVar11 < '\0') {
        if (*plVar38 != 0) {
          FUN_1401503c0();
          plVar42 = plVar38;
        }
        plVar38 = plVar42 + 1;
        plVar42 = plVar38;
        plStack_588 = plVar38;
        pcVar20 = (char *)supplier_140070450(&plStack_588,&uStack_5c8,&pppuStack_5b0);
        plVar24 = plStack_580;
        cVar11 = *pcVar20;
      }
      supplier_1400708c0(param_1 + 0x6f6);
      param_1[0x6fc] = 0;
      FUN_140488200(param_1,plVar24);
      break;
    case 4:
      param_1[0x6fd] = 0;
      *(char *)(param_1 + 0x6fe) = '\0';
      pppuStack_5b0 = (undefined8 ***)(param_1 + 0x700);
      supplier_1400708c0(pppuStack_5b0);
      plStack_590 = (longlong *)(param_1 + 0x706);
      supplier_1400708c0(plStack_590);
      uStack_5c4 = 0;
      sVar12 = 0;
      do {
        plVar38 = plStack_590;
        pppuVar9 = pppuStack_5b0;
        uVar45 = 0;
        uVar50 = (uint)uVar43;
        if (uVar50 == 0) {
          sVar12 = 0x5d;
        }
        else if (uVar50 == 1) {
          sVar12 = 0x5c;
        }
        else if (uVar50 == 2) {
          sVar12 = 0x50;
        }
        else if (uVar50 == 3) {
          sVar12 = 0x61;
        }
        bVar53 = false;
        lVar37 = plVar24[0x8a];
        uVar43 = uVar45;
        if (plVar24[0x8b] - lVar37 >> 3 == 0) {
LAB_1401a4fc9:
          uStack_5c4 = ~uVar50;
          supplier_140070a40(pppuStack_5b0,&uStack_5c4);
          uStack_5c4 = 0;
          supplier_140070a40(plStack_590,&uStack_5c4);
        }
        else {
          do {
            plVar24 = *(longlong **)(uVar45 + lVar37);
            uVar17 = FUN_140572af0(plVar24,plStack_580);
            piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar17);
            sVar13 = (**(code **)(*plVar24 + 0xd8))(plVar24);
            if (sVar13 == sVar12) {
              supplier_140070a40(pppuVar9,plVar24 + 10);
              supplier_140070a40(plVar38,&piStack_5a8);
              bVar53 = true;
            }
            uVar50 = (int)uVar43 + 1;
            uVar45 = uVar45 + 8;
            lVar37 = plStack_580[0x8a];
            uVar43 = (ulonglong)uVar50;
          } while ((ulonglong)(longlong)(int)uVar50 < (ulonglong)(plStack_580[0x8b] - lVar37 >> 3));
          plVar24 = plStack_580;
          uVar50 = uStack_5c4;
          if (!bVar53) goto LAB_1401a4fc9;
        }
        uStack_5c4 = uVar50 + 1;
        uVar43 = (ulonglong)uStack_5c4;
      } while ((int)uStack_5c4 < 4);
      break;
    case 5:
      param_1[0x6b1] = 0;
      param_1[0x6b2] = 0;
      *(char *)(param_1 + 0x6b3) = '\0';
      FUN_140487f50(param_1,plVar24);
      break;
    case 6:
      param_1[0x60d] = 0;
      *(char *)(param_1 + 0x60e) = '\0';
      plStack_538 = (longlong *)(param_1 + 0x610);
      FUN_1400bcfe0(plStack_538);
      piStack_540 = param_1 + 0x616;
      supplier_1400708c0(piStack_540);
      plStack_550 = (longlong *)(param_1 + 0x61c);
      supplier_1400708c0(plStack_550);
      plStack_548 = (longlong *)(param_1 + 0x622);
      supplier_1400708c0(plStack_548);
      plStack_588 = (longlong *)(param_1 + 0x628);
      supplier_1400708c0(plStack_588);
      piStack_558 = param_1 + 0x62e;
      supplier_1400708c0(piStack_558);
      plStack_578 = (longlong *)(param_1 + 0x634);
      supplier_1400708c0(plStack_578);
      pppppuStack_4d8 = (undefined8 *****)(param_1 + 0x63a);
      supplier_1400708c0();
      plStack_5b8 = (longlong *)supplier_1413cc070(plVar24);
      puStack_530 = (uint *)0x0;
      puStack_528 = (uint *)0x0;
      puStack_520 = (uint *)0x0;
      puStack_518 = (uint *)0x0;
      uStack_510 = 0;
      uStack_508 = 0;
      supplier_1400bd270(auStack_500);
      FUN_1413cbc90(plVar24,&puStack_530,&puStack_518,auStack_500);
      uStack_5c4 = 0;
      uVar17 = 0xffffffff;
      if ((longlong)puStack_528 - (longlong)puStack_530 >> 2 != 0) {
        piStack_5a8 = (int *)0x0;
        puStack_570 = (uint *)0x0;
        uVar45 = uVar43;
        puVar27 = puStack_528;
        puVar28 = puStack_530;
        plStack_580 = plVar24;
        do {
          piVar41 = (int *)FUN_1400693f0(0x14251c138,
                                         *(undefined4 *)((longlong)puStack_570 + (longlong)puVar28))
          ;
          uStack_5a0 = piVar41;
          if (piVar41 != (int *)0x0) {
            aiStack_5c0[0] = 0;
            if (*(ushort *)(uVar45 + (longlong)puStack_518) < 0x48) {
                    /* WARNING: Switch is manually overridden */
              switch((&UNK_1401a718c)[(short)*(ushort *)(uVar45 + (longlong)puStack_518)]) {
              case 0:
                iVar19 = 10000;
                break;
              case 1:
                iVar19 = 0x26ac;
                break;
              case 2:
                iVar19 = 15000;
                break;
              case 3:
                iVar19 = 0x30d4;
                break;
              case 4:
                iVar19 = 0x3070;
                break;
              case 5:
                iVar19 = 0x300c;
                break;
              case 6:
                iVar19 = 0x300b;
                break;
              case 7:
                iVar19 = 0x300a;
                break;
              case 8:
                iVar19 = 0x3009;
                break;
              case 9:
                iVar19 = 0x3008;
                break;
              case 10:
                iVar19 = 0x3007;
                break;
              case 0xb:
                iVar19 = 0x3006;
                break;
              case 0xc:
                iVar19 = 0x3005;
                break;
              case 0xd:
                iVar19 = 0x2fa8;
                break;
              case 0xe:
                iVar19 = 0x2f44;
                break;
              case 0xf:
                iVar19 = 0x2648;
                break;
              case 0x10:
                iVar19 = 0x25e4;
                break;
              case 0x11:
                iVar19 = 0x2580;
                break;
              case 0x12:
                iVar19 = 0x251c;
                break;
              case 0x13:
                iVar19 = 0x2454;
                break;
              case 0x14:
                iVar19 = 0x24b8;
                break;
              case 0x15:
                iVar19 = 0x2486;
                break;
              case 0x16:
                iVar19 = 0x247c;
                break;
              case 0x17:
                iVar19 = 0x2616;
              }
              aiStack_5c0[0] = iVar19;
              iVar15 = supplier_1400bbc30(piVar41,plStack_588);
              if (iVar15 == -1) {
                supplier_140070cc0(&puStack_4b8);
                lVar37 = FUN_1400751a0(&DAT_142407530,piVar41[0x36]);
                if (lVar37 == 0) {
                  FUN_140aadad0(piVar41 + 0xe,&puStack_4b8);
                }
                else {
                  FUN_141349540(lVar37,&puStack_4b8,0);
                }
                plVar24 = plStack_5b8;
                plStack_590 = (longlong *)0x0;
                pppuStack_5b0 = (undefined8 ****)0x0;
                if (plStack_5b8 != (longlong *)0x0) {
                  iVar15 = piVar41[0x38];
                  plStack_590 = (longlong *)supplier_140c32f60(plStack_5b8,iVar15);
                  if (plStack_590 != (longlong *)0x0) {
                    pppuStack_5b0 = (undefined8 ***)supplier_140c32f90(plVar24,iVar15);
                  }
                }
                pppppuVar22 = pppppuStack_4d8;
                ppppuVar35 = *pppppuStack_4d8;
                uVar48 = uVar43;
                uVar33 = uVar43;
                if ((longlong)pppppuStack_4d8[1] - (longlong)ppppuVar35 >> 2 != 0) {
                  do {
                    if (*(int *)(uVar33 + (longlong)ppppuVar35) < iVar19) {
                      FUN_14014ec90(plStack_538,uVar48,&puStack_4b8);
                      uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
                      lVar25 = (longlong)(int)uVar48;
                      FUN_1401bc830(piStack_540,lVar25,&uStack_5c8);
                      FUN_1401bc830(plStack_550,lVar25,
                                    (longlong)puStack_518 + (longlong)piStack_5a8 * 2);
                      uVar16 = uVar17;
                      if (lVar37 != 0) {
                        uVar16 = *(undefined4 *)(lVar37 + 0x130);
                      }
                      piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar16);
                      FUN_1400bb040(plStack_548,lVar25,&piStack_5a8);
                      FUN_1401bc720(plStack_588,lVar25,&uStack_5a0);
                      FUN_1401bc720(piStack_558,lVar25,&plStack_590);
                      FUN_1401bc720(plStack_578,lVar25,&pppuStack_5b0);
                      FUN_1400bb040(pppppuVar22,lVar25);
                      goto LAB_1401a546a;
                    }
                    uVar50 = (int)uVar48 + 1;
                    uVar48 = (ulonglong)uVar50;
                    uVar33 = uVar33 + 4;
                  } while ((ulonglong)(longlong)(int)uVar50 <
                           (ulonglong)((longlong)pppppuStack_4d8[1] - (longlong)ppppuVar35 >> 2));
                }
                FUN_1400bcda0(plStack_538,&puStack_4b8);
                uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
                supplier_140070b20(piStack_540,&uStack_5c8);
                supplier_140070b20(plStack_550,(longlong)puStack_518 + (longlong)piStack_5a8 * 2);
                uVar16 = uVar17;
                if (lVar37 != 0) {
                  uVar16 = *(undefined4 *)(lVar37 + 0x130);
                }
                piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar16);
                supplier_140070a40(plStack_548,&piStack_5a8);
                supplier_1400bafb0(plStack_588,&uStack_5a0);
                supplier_1400bafb0(piStack_558,&plStack_590);
                supplier_1400bafb0(plStack_578,&pppuStack_5b0);
                supplier_140070a40(pppppuVar22,aiStack_5c0);
LAB_1401a546a:
                FUN_140070e80(&puStack_4b8);
                puVar27 = puStack_528;
                puVar28 = puStack_530;
              }
            }
          }
          uStack_5c4 = uStack_5c4 + 1;
          puStack_570 = puStack_570 + 1;
          uVar45 = uVar45 + 2;
          piStack_5a8 = (int *)(longlong)(int)uStack_5c4;
          param_1 = piStack_598;
        } while (piStack_5a8 < (int *)((longlong)puVar27 - (longlong)puVar28 >> 2));
      }
      uVar50 = 0;
      piVar41 = param_1;
      if (plStack_5b8 != (longlong *)0x0) {
        uStack_5c4 = 0;
        lVar37 = plStack_5b8[0x23];
        if (plStack_5b8[0x24] - lVar37 >> 3 != 0) {
          puStack_570 = (uint *)(param_1 + 0x610);
          plStack_578 = (longlong *)(param_1 + 0x616);
          piStack_558 = param_1 + 0x61c;
          plStack_548 = (longlong *)(param_1 + 0x622);
          pppuStack_5b0 = (undefined8 ***)(param_1 + 0x628);
          piStack_540 = param_1 + 0x62e;
          plStack_538 = (longlong *)(param_1 + 0x634);
          uVar45 = uVar43;
          uVar48 = uVar43;
          do {
            uVar36 = (uint)uVar48;
            aiStack_5c0[0] = 0;
            sVar12 = (**(code **)**(undefined8 **)(lVar37 + uVar45))();
            if ((int)sVar12 - 4U < 9) {
                    /* WARNING: Switch is manually overridden */
              switch((int)sVar12 - 4U) {
              case 0:
                iVar19 = 5000;
                uVar14 = 0xf;
                break;
              case 1:
                iVar19 = 6000;
                uVar14 = 10;
                break;
              default:
                goto override_jmp_1401a556a_case_2;
              case 4:
                iVar19 = 0xfa5;
                uVar14 = 0x27;
                break;
              case 5:
                iVar19 = 0xfa4;
                uVar14 = 0x28;
                break;
              case 6:
                iVar19 = 3000;
                uVar14 = 0x29;
                break;
              case 7:
                iVar19 = 0xfa3;
                uVar14 = 0x2a;
                break;
              case 8:
                iVar19 = 0xfa2;
                uVar14 = 0x2b;
              }
              uStack_5c8 = CONCAT22(uStack_5c8._2_2_,uVar14);
              aiStack_5c0[0] = iVar19;
              piVar41 = (int *)FUN_1400693f0(0x14251c138,
                                             *(undefined4 *)
                                              (*(longlong *)(plStack_5b8[0x23] + uVar45) + 8));
              uStack_5a0 = piVar41;
              if ((piVar41 != (int *)0x0) &&
                 (iVar15 = supplier_1400bbc30(piVar41,pppuStack_5b0), iVar15 == -1)) {
                supplier_140070cc0(&puStack_4b8);
                lVar37 = FUN_1400751a0(&DAT_142407530,piVar41[0x36]);
                if (lVar37 == 0) {
                  FUN_140aadad0(piVar41 + 0xe,&puStack_4b8);
                }
                else {
                  FUN_141349540(lVar37,&puStack_4b8,0);
                }
                plStack_590 = (longlong *)0x0;
                iVar15 = piVar41[0x38];
                plStack_550 = (longlong *)supplier_140c32f60(plStack_5b8,iVar15);
                if (plStack_550 != (longlong *)0x0) {
                  plStack_590 = (longlong *)supplier_140c32f90(plStack_5b8,iVar15);
                }
                lVar25 = *(longlong *)(param_1 + 0x63a);
                uVar48 = uVar43;
                uVar33 = uVar43;
                uVar36 = uVar50;
                if (*(longlong *)(param_1 + 0x63c) - lVar25 >> 2 != 0) {
                  do {
                    if (*(int *)(uVar33 + lVar25) < iVar19) {
                      FUN_14014ec90(puStack_570,uVar48,&puStack_4b8);
                      lVar25 = (longlong)(int)uVar48;
                      FUN_1401bc830(plStack_578,lVar25,&uStack_5c8);
                      uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
                      FUN_1401bc830(piStack_558,lVar25,&uStack_5c8);
                      uVar16 = uVar17;
                      if (lVar37 != 0) {
                        uVar16 = *(undefined4 *)(lVar37 + 0x130);
                      }
                      piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar16);
                      FUN_1400bb040(plStack_548,lVar25,&piStack_5a8);
                      FUN_1401bc720(pppuStack_5b0,lVar25,&uStack_5a0);
                      FUN_1401bc720(piStack_540,lVar25,&plStack_550);
                      FUN_1401bc720(plStack_538,lVar25,&plStack_590);
                      FUN_1400bb040(param_1 + 0x63a,lVar25,aiStack_5c0);
                      goto LAB_1401a57f7;
                    }
                    uVar36 = (int)uVar48 + 1;
                    uVar48 = (ulonglong)uVar36;
                    uVar33 = uVar33 + 4;
                  } while ((ulonglong)(longlong)(int)uVar36 <
                           (ulonglong)(*(longlong *)(param_1 + 0x63c) - lVar25 >> 2));
                }
                FUN_1400bcda0(puStack_570,&puStack_4b8);
                supplier_140070b20(plStack_578,&uStack_5c8);
                uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
                FUN_1401bc830(piStack_558,(longlong)(int)uVar36,&uStack_5c8);
                uVar16 = uVar17;
                if (lVar37 != 0) {
                  uVar16 = *(undefined4 *)(lVar37 + 0x130);
                }
                piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar16);
                supplier_140070a40(plStack_548,&piStack_5a8);
                supplier_1400bafb0(pppuStack_5b0,&uStack_5a0);
                supplier_1400bafb0(piStack_540,&plStack_550);
                supplier_1400bafb0(plStack_538,&plStack_590);
                supplier_140070a40(param_1 + 0x63a,aiStack_5c0);
LAB_1401a57f7:
                FUN_140070e80(&puStack_4b8);
                uVar36 = uStack_5c4;
              }
            }
override_jmp_1401a556a_case_2:
            uStack_5c4 = uVar36 + 1;
            uVar48 = (ulonglong)uStack_5c4;
            uVar45 = uVar45 + 8;
            lVar37 = plStack_5b8[0x23];
            piVar41 = piStack_598;
          } while ((ulonglong)(longlong)(int)uStack_5c4 <
                   (ulonglong)(plStack_5b8[0x24] - lVar37 >> 3));
        }
      }
      piVar39 = piVar41;
      if ((piVar41[1] != 1) && (uStack_5c4 = 0, _DAT_142407550 - _DAT_142407548 >> 3 != 0)) {
        puStack_570 = (uint *)(piVar41 + 0x610);
        plStack_578 = (longlong *)(piVar41 + 0x616);
        plVar24 = (longlong *)(piVar41 + 0x61c);
        plVar38 = (longlong *)(piVar41 + 0x622);
        piStack_558 = piVar41 + 0x628;
        plStack_548 = (longlong *)(piVar41 + 0x62e);
        plStack_550 = (longlong *)(piVar41 + 0x634);
        plVar42 = (longlong *)(piVar41 + 0x63a);
        piStack_540 = (int *)0x0;
        uVar45 = uVar43;
        lVar37 = _DAT_142407548;
        lVar25 = _DAT_142407550;
        plStack_538 = plVar38;
        do {
          lVar26 = *(longlong *)((longlong)piStack_540 + lVar37);
          piVar39 = piStack_540;
          uVar36 = (uint)uVar45;
          if (*(int *)(lVar26 + 0x3bc) == (int)plStack_580[0x26]) {
            aiStack_5c0[0] = 0x1f5;
            iVar19 = supplier_1400e2a50(*(undefined4 *)(lVar26 + 0x130),plVar38);
            if (iVar19 == -1) {
              supplier_140070cc0(apppppuStack_478);
              FUN_141349540(lVar26,apppppuStack_478,0);
              piStack_5a8 = (int *)0x0;
              uStack_5a0 = (int *)0x0;
              if (plStack_5b8 != (longlong *)0x0) {
                uVar17 = *(undefined4 *)(lVar26 + 0xc30);
                piStack_5a8 = (int *)supplier_140c32f60(plStack_5b8,uVar17);
                if (piStack_5a8 != (int *)0x0) {
                  uStack_5a0 = (int *)supplier_140c32f90(plStack_5b8,uVar17);
                }
              }
              lVar37 = *plVar42;
              uVar45 = uVar43;
              uVar48 = uVar43;
              uVar36 = uVar50;
              if (*(longlong *)(piVar41 + 0x63c) - lVar37 >> 2 != 0) {
                do {
                  if (*(int *)(uVar48 + lVar37) < 0x1f5) {
                    FUN_14014ec90(puStack_570,uVar45,apppppuStack_478);
                    uStack_5c8._0_2_ = 0x33;
                    lVar37 = (longlong)(int)uVar45;
                    FUN_1401bc830(plStack_578,lVar37,&uStack_5c8);
                    uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
                    FUN_1401bc830(plVar24,lVar37,&uStack_5c8);
                    FUN_1400bb040(plVar38,lVar37,lVar26 + 0x130);
                    pppppuStack_4d8 = (undefined8 *****)supplier_1413cc070(lVar26);
                    FUN_1401bc720(piStack_558,lVar37,&pppppuStack_4d8);
                    FUN_1401bc720(plStack_548,lVar37,&piStack_5a8);
                    FUN_1401bc720(plStack_550,lVar37,&uStack_5a0);
                    FUN_1400bb040(plVar42,lVar37);
                    goto LAB_1401a5c4a;
                  }
                  uVar36 = (int)uVar45 + 1;
                  uVar45 = (ulonglong)uVar36;
                  uVar48 = uVar48 + 4;
                } while ((ulonglong)(longlong)(int)uVar36 <
                         (ulonglong)(*(longlong *)(piVar41 + 0x63c) - lVar37 >> 2));
              }
              ppppppuVar23 = (undefined8 ******)FUN_1415530e0(0x20);
              *ppppppuVar23 = (undefined8 *****)0x0;
              ppppppuVar23[1] = (undefined8 *****)0x0;
              ppppppuVar23[2] = (undefined8 *****)0x0;
              ppppppuVar23[3] = (undefined8 *****)0xf;
              *(undefined1 *)ppppppuVar23 = 0;
              pppppuStack_4d8 = ppppppuVar23;
              if (ppppppuVar23 != apppppuStack_478) {
                ppppppuVar34 = apppppuStack_478;
                if (0xf < uStack_460) {
                  ppppppuVar34 = (undefined8 ******)apppppuStack_478[0];
                }
                FUN_140070f00(ppppppuVar23,ppppppuVar34,uStack_468);
              }
              puVar21 = *(undefined8 **)(puStack_570 + 2);
              if (puVar21 == *(undefined8 **)(puStack_570 + 4)) {
                FUN_1400bc360(puStack_570,puVar21,&pppppuStack_4d8);
              }
              else {
                *puVar21 = ppppppuVar23;
                *(longlong *)(puStack_570 + 2) = *(longlong *)(puStack_570 + 2) + 8;
              }
              uStack_5c8._0_2_ = 0x33;
              puVar5 = (undefined2 *)plStack_578[1];
              if (puVar5 == (undefined2 *)plStack_578[2]) {
                FUN_140072670(plStack_578,puVar5,&uStack_5c8);
              }
              else {
                *puVar5 = 0x33;
                plStack_578[1] = plStack_578[1] + 2;
              }
              uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
              puVar5 = (undefined2 *)(*plVar24 + (longlong)(int)uVar36 * 2);
              puVar6 = *(undefined2 **)(piVar41 + 0x61e);
              if (puVar6 == *(undefined2 **)(piVar41 + 0x620)) {
                FUN_140072670(plVar24,puVar5,&uStack_5c8);
              }
              else if (puVar5 == puVar6) {
                *puVar6 = 0xffff;
                *(longlong *)(piVar41 + 0x61e) = *(longlong *)(piVar41 + 0x61e) + 2;
              }
              else {
                *puVar6 = puVar6[-1];
                *(longlong *)(piVar41 + 0x61e) = *(longlong *)(piVar41 + 0x61e) + 2;
                supplier_14155486a((longlong)puVar6 - ((longlong)(puVar6 + -1) - (longlong)puVar5),
                                   puVar5);
                *puVar5 = 0xffff;
              }
              plVar38 = plStack_538;
              if ((undefined4 *)plStack_538[1] == (undefined4 *)plStack_538[2]) {
                FUN_140072450(plStack_538);
              }
              else {
                *(undefined4 *)plStack_538[1] = *(undefined4 *)(lVar26 + 0x130);
                plStack_538[1] = plStack_538[1] + 4;
              }
              pppppuStack_4d8 =
                   (undefined8 *****)FUN_140b6ad70(0x14251c138,*(undefined4 *)(lVar26 + 0xc30));
              if (*(undefined8 **)(piStack_558 + 2) == *(undefined8 **)(piStack_558 + 4)) {
                FUN_1400bc360();
              }
              else {
                **(undefined8 **)(piStack_558 + 2) = pppppuStack_4d8;
                *(longlong *)(piStack_558 + 2) = *(longlong *)(piStack_558 + 2) + 8;
              }
              if ((longlong *)plStack_548[1] == (longlong *)plStack_548[2]) {
                FUN_1400bc360();
              }
              else {
                *(longlong *)plStack_548[1] = (longlong)piStack_5a8;
                plStack_548[1] = plStack_548[1] + 8;
              }
              if ((longlong *)plStack_550[1] == (longlong *)plStack_550[2]) {
                FUN_1400bc360(plStack_550);
              }
              else {
                *(longlong *)plStack_550[1] = (longlong)uStack_5a0;
                plStack_550[1] = plStack_550[1] + 8;
              }
              if (*(undefined4 **)(piVar41 + 0x63c) == *(undefined4 **)(piVar41 + 0x63e)) {
                FUN_140072450(plVar42);
              }
              else {
                **(undefined4 **)(piVar41 + 0x63c) = 0x1f5;
                *(longlong *)(piVar41 + 0x63c) = *(longlong *)(piVar41 + 0x63c) + 4;
              }
LAB_1401a5c4a:
              FUN_140070e80(apppppuStack_478);
              lVar37 = _DAT_142407548;
              lVar25 = _DAT_142407550;
              piVar39 = piStack_540;
              uVar36 = uStack_5c4;
            }
          }
          uStack_5c4 = uVar36 + 1;
          uVar45 = (ulonglong)uStack_5c4;
          piStack_540 = piVar39 + 2;
          piVar39 = piStack_598;
        } while ((ulonglong)(longlong)(int)uStack_5c4 < (ulonglong)(lVar25 - lVar37 >> 3));
      }
      if (((plStack_5b8 != (longlong *)0x0) && (plStack_5b8[0x26] != 0)) &&
         (puVar21 = *(undefined8 **)(plStack_5b8[0x26] + 0x60), puVar21 != (undefined8 *)0x0)) {
        puVar40 = (undefined8 *)*puVar21;
        puVar21 = (undefined8 *)puVar21[1];
        puStack_570 = (uint *)(piVar39 + 0x610);
        plStack_578 = (longlong *)(piVar39 + 0x616);
        plVar24 = (longlong *)(piVar39 + 0x61c);
        plStack_548 = (longlong *)(piVar39 + 0x622);
        plStack_5b8 = (longlong *)(piVar39 + 0x628);
        plStack_550 = (longlong *)(piVar39 + 0x62e);
        plStack_538 = (longlong *)(piVar39 + 0x634);
        plVar38 = (longlong *)(piVar39 + 0x63a);
        plVar42 = plStack_5b8;
        plStack_590 = plVar24;
LAB_1401a5d20:
        for (; puVar40 < puVar21; puVar40 = puVar40 + 1) {
          piStack_598 = (int *)*puVar40;
          iVar19 = *piStack_598;
          lVar37 = _DAT_14251c1a0 - _DAT_14251c198 >> 3;
          piStack_540 = piStack_598;
          if (((lVar37 != 0) && (iVar19 != -1)) &&
             (iVar15 = (int)lVar37 + -1, uVar45 = uVar43, -1 < iVar15)) {
            do {
              iVar18 = iVar15 + (int)uVar45 >> 1;
              ppppuVar35 = *(undefined8 *****)(_DAT_14251c198 + (longlong)iVar18 * 8);
              if (*(int *)(ppppuVar35 + 0x1c) == iVar19) {
                pppuStack_5b0 = ppppuVar35;
                if ((ppppuVar35 == (undefined8 ****)0x0) || (piStack_598[0x1a] < 1))
                goto LAB_1401a5d98;
                uStack_5c4 = supplier_1402c2f60(piStack_598,aiStack_5c0);
                uStack_5c8 = CONCAT22(uStack_5c8._2_2_,(short)uStack_5c4);
                iVar19 = supplier_1400bbc30(ppppuVar35,plVar42);
                if (iVar19 != -1) goto LAB_1401a5d98;
                supplier_140070cc0(apppppuStack_498);
                piStack_558 = (int *)FUN_1400751a0(&DAT_142407530,*(int *)(ppppuVar35 + 0x1b));
                if (piStack_558 == (int *)0x0) {
                  FUN_140aadad0(ppppuVar35 + 7,apppppuStack_498);
                }
                else {
                  FUN_141349540(piStack_558,apppppuStack_498,0);
                }
                lVar37 = *plVar38;
                uVar45 = uVar43;
                uVar48 = uVar43;
                uVar36 = uVar50;
                if (*(longlong *)(piVar39 + 0x63c) - lVar37 >> 2 == 0) goto LAB_1401a5e66;
                goto LAB_1401a5e44;
              }
              iVar32 = iVar18 + -1;
              if (*(int *)(ppppuVar35 + 0x1c) < iVar19) {
                uVar45 = (ulonglong)(iVar18 + 1);
                iVar32 = iVar15;
              }
              iVar15 = iVar32;
            } while ((int)uVar45 <= iVar15);
          }
          pppuStack_5b0 = (undefined8 ****)0x0;
LAB_1401a5d98:
        }
      }
      FUN_140070d80(auStack_500);
      FUN_140070de0(&puStack_518);
      ppuVar30 = &puStack_530;
      goto LAB_1401a70aa;
    case 7:
      param_1[0x662] = 0;
      *(char *)(param_1 + 0x663) = '\0';
      pppuStack_5b0 = (undefined8 ***)(param_1 + 0x664);
      supplier_1400708c0(pppuStack_5b0);
      plStack_590 = (longlong *)(param_1 + 0x66a);
      supplier_1400708c0(plStack_590);
      piStack_5a8 = param_1 + 0x670;
      supplier_1400708c0(piStack_5a8);
      uStack_5a0 = param_1 + 0x676;
      supplier_1400708c0(uStack_5a0);
      plStack_588 = (longlong *)(param_1 + 0x67c);
      supplier_1401bc920(plStack_588);
      plStack_5b8 = (longlong *)(param_1 + 0x684);
      supplier_1400708c0(plStack_5b8);
      plStack_580 = (longlong *)(param_1 + 0x68a);
      supplier_1400708c0(plStack_580);
      plVar24 = (longlong *)supplier_1413cc070(plVar24);
      plStack_538 = plVar24;
      if (plVar24 != (longlong *)0x0) {
        lVar37 = plVar24[0x1d];
        uVar45 = uVar43;
        uVar48 = uVar43;
        if (plVar24[0x1e] - lVar37 >> 3 != 0) {
          do {
            plVar38 = *(longlong **)(uVar48 + lVar37);
            lVar37 = supplier_14007f120(0x1423f3c78,(int)plVar38[1]);
            if (lVar37 != 0) {
              uVar17 = (**(code **)(*plVar38 + 0x30))(plVar38);
              lVar25 = FUN_1400bb3f0(uVar17,lVar37 + 0x1110);
              if (lVar25 == 0) {
                sVar12 = (**(code **)**(undefined8 **)(uVar48 + plVar24[0x1d]))();
                if ((sVar12 == 0xd) ||
                   (sVar12 = (**(code **)**(undefined8 **)(uVar48 + plVar24[0x1d]))(), sVar12 == 0xe
                   )) {
                  uVar17 = (**(code **)(**(longlong **)(uVar48 + plVar24[0x1d]) + 0x20))();
                  lVar25 = FUN_140076b30(0x142505c40,uVar17);
                  if (lVar25 != 0) {
                    supplier_140070a40(pppuStack_5b0,lVar37 + 4);
                    sVar12 = (**(code **)**(undefined8 **)(uVar48 + plVar24[0x1d]))();
                    uStack_5c4 = (uint)sVar12;
                    supplier_140070a40(plStack_590,&uStack_5c4);
                    uStack_5c8 = uStack_5c8 & 0xffffff00;
                    FUN_14013d400(plStack_588,&uStack_5c8);
                    uStack_5c4 = 0xffffffff;
                    supplier_140070a40(plStack_5b8,&uStack_5c4);
                    uStack_5c4 = 0;
                    supplier_140070a40(plStack_580,&uStack_5c4);
                    supplier_140070a40(piStack_5a8,lVar25 + 0x1c8);
                    lVar25 = lVar25 + 0x1cc;
                    goto LAB_1401a669d;
                  }
                }
                else {
                  supplier_140070a40(pppuStack_5b0,lVar37 + 4);
                  sVar12 = (**(code **)**(undefined8 **)(uVar48 + plVar24[0x1d]))();
                  uStack_5c4 = (uint)sVar12;
                  supplier_140070a40(plStack_590,&uStack_5c4);
                  uStack_5c8 = uStack_5c8 & 0xffffff00;
                  FUN_14013d400(plStack_588,&uStack_5c8);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(plStack_5b8,&uStack_5c4);
                  uStack_5c4 = 0;
                  supplier_140070a40(plStack_580,&uStack_5c4);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(piStack_5a8,&uStack_5c4);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(uStack_5a0,&uStack_5c4);
                }
              }
              else {
                lVar26 = FUN_1401bc940(*(undefined4 *)(lVar25 + 0xc),lVar37 + 0x10c0);
                supplier_140070a40(pppuStack_5b0,lVar37 + 4);
                sVar12 = (**(code **)**(undefined8 **)(uVar48 + plVar24[0x1d]))();
                uStack_5c4 = (uint)sVar12;
                supplier_140070a40(plStack_590,&uStack_5c4);
                uStack_5c8 = uStack_5c8 & 0xffffff00;
                FUN_14013d400(plStack_588,&uStack_5c8);
                uStack_5c4 = 0xffffffff;
                supplier_140070a40(plStack_5b8,&uStack_5c4);
                uStack_5c4 = 0;
                supplier_140070a40(plStack_580,&uStack_5c4);
                supplier_140070a40(piStack_5a8,lVar26 + 0x20);
LAB_1401a669d:
                supplier_140070a40(uStack_5a0,lVar25);
              }
            }
            uVar50 = (int)uVar45 + 1;
            lVar37 = plVar24[0x1d];
            param_1 = piStack_598;
            uVar45 = (ulonglong)uVar50;
            uVar48 = uVar48 + 8;
          } while ((ulonglong)(longlong)(int)uVar50 < (ulonglong)(plVar24[0x1e] - lVar37 >> 3));
        }
        iVar19 = FUN_140bb09f0(plVar24,2);
        piVar41 = param_1;
        if (((iVar19 != -1) && (lVar37 = FUN_1400693f0(0x14251c138,iVar19), lVar37 != 0)) &&
           (lVar25 = *(longlong *)(lVar37 + 0xe8), *(longlong *)(lVar37 + 0xf0) - lVar25 >> 3 != 0))
        {
          puStack_570 = (uint *)(param_1 + 0x66a);
          plStack_578 = (longlong *)(param_1 + 0x67c);
          piStack_558 = param_1 + 0x684;
          plStack_548 = (longlong *)(param_1 + 0x68a);
          plStack_550 = (longlong *)(param_1 + 0x670);
          piStack_540 = param_1 + 0x676;
          uVar45 = uVar43;
          pppppuStack_4d8 = (undefined8 *****)(param_1 + 0x664);
          do {
            sVar12 = (**(code **)**(undefined8 **)(lVar25 + uVar45))();
            if (sVar12 == 10) {
              pppppuStack_4d8 = *(undefined8 ******)(uVar45 + *(longlong *)(lVar37 + 0xe8));
              lVar25 = supplier_14007f120(0x1423f3c78,*(int *)(pppppuStack_4d8 + 1));
              if (lVar25 != 0) {
                uVar17 = (*(code *)(*pppppuStack_4d8)[6])();
                pppppuStack_4d8 = (undefined8 *****)FUN_1400bb3f0(uVar17,lVar25 + 0x1110);
                if ((pppppuStack_4d8 != (undefined8 *****)0x0) &&
                   (((lVar26 = FUN_1401bc940(*(int *)((longlong)pppppuStack_4d8 + 0xc),
                                             lVar25 + 0x10c0), *(longlong *)(lVar26 + 0x168) != 0 ||
                     (*(longlong *)(lVar26 + 0x1a8) != 0)) || (*(longlong *)(lVar26 + 0x1e8) != 0)))
                   ) {
                  supplier_140070a40(param_1 + 0x664,lVar25 + 4);
                  sVar12 = (**(code **)**(undefined8 **)(uVar45 + *(longlong *)(lVar37 + 0xe8)))();
                  uStack_5c4 = (uint)sVar12;
                  supplier_140070a40(puStack_570,&uStack_5c4);
                  uStack_5c8 = CONCAT31(uStack_5c8._1_3_,1);
                  FUN_14013d400(plStack_578,&uStack_5c8);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(piStack_558,&uStack_5c4);
                  uStack_5c4 = 0;
                  supplier_140070a40(plStack_548,&uStack_5c4);
                  supplier_140070a40(plStack_550,lVar26 + 0x20);
                  supplier_140070a40(piStack_540,pppppuStack_4d8);
                }
              }
            }
            uVar50 = (int)uVar43 + 1;
            uVar43 = (ulonglong)uVar50;
            uVar45 = uVar45 + 8;
            lVar25 = *(longlong *)(lVar37 + 0xe8);
            piVar41 = piStack_598;
            plVar24 = plStack_538;
          } while ((ulonglong)(longlong)(int)uVar50 <
                   (ulonglong)(*(longlong *)(lVar37 + 0xf0) - lVar25 >> 3));
        }
        if ((plVar24[0x26] != 0) &&
           (puVar21 = *(undefined8 **)(plVar24[0x26] + 0x58), puVar21 != (undefined8 *)0x0)) {
          plStack_550 = (longlong *)puVar21[1];
          pppppuStack_4d8 = (undefined8 *****)(piVar41 + 0x67c);
          puStack_570 = (uint *)(piVar41 + 0x684);
          plStack_578 = (longlong *)(piVar41 + 0x68a);
          piStack_558 = piVar41 + 0x670;
          plStack_548 = (longlong *)(piVar41 + 0x676);
          for (plVar24 = (longlong *)*puVar21; pppppuVar22 = pppppuStack_4d8, plVar24 < plStack_550;
              plVar24 = plVar24 + 1) {
            lVar37 = *plVar24;
            puVar28 = *(uint **)(lVar37 + 0x10);
            piVar39 = *(int **)(lVar37 + 0x20);
            for (puVar27 = *(uint **)(lVar37 + 8); puVar27 < puVar28; puVar27 = puVar27 + 1) {
              if ((0 < *piVar39) && (*puVar27 < 0x1e)) {
                    /* WARNING: Switch is manually overridden */
                switch((&UNK_1401a7200)[(int)*puVar27]) {
                case 0:
                  supplier_140070a40(piVar41 + 0x664,*plVar24);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(piVar41 + 0x66a,&uStack_5c4);
                  uStack_5c8 = uStack_5c8 & 0xffffff00;
                  FUN_14013d400(pppppuVar22,&uStack_5c8);
                  supplier_140070a40(puStack_570,puVar27);
                  supplier_140070a40(plStack_578,piVar39);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(piStack_558,&uStack_5c4);
                  uStack_5c4 = 0xffffffff;
                  supplier_140070a40(plStack_548,&uStack_5c4);
                }
              }
              piVar39 = piVar39 + 1;
            }
          }
        }
      }
      break;
    case 8:
      param_1[0x70c] = 0;
      FUN_1404893d0(param_1,plVar24);
      break;
    case 9:
      param_1[0x690] = 0;
      *(char *)(param_1 + 0x691) = '\0';
      break;
    case 10:
      param_1[0x6a1] = 0;
      *(char *)(param_1 + 0x6a2) = '\0';
      param_1[0x6a3] = 0;
      FUN_140489610(param_1,plVar24);
    }
    break;
  case 1:
    iVar19 = param_1[3];
    puVar21 = (undefined8 *)0x0;
    iVar18 = (int)(_DAT_1424078d8 - _DAT_1424078d0 >> 3);
    iVar15 = 0;
    if ((iVar18 == 0) || (iVar19 == -1)) {
      FUN_1401aa4a0(param_1,0);
    }
    else {
      iVar18 = iVar18 + -1;
      puVar40 = puVar21;
      if (-1 < iVar18) {
        do {
          iVar31 = iVar15 + iVar18 >> 1;
          puVar40 = *(undefined8 **)(_DAT_1424078d0 + (longlong)iVar31 * 8);
          iVar32 = *(int *)((longlong)puVar40 + 0x1c);
          if (iVar32 == iVar19) break;
          iVar47 = iVar31 + -1;
          if (iVar32 < iVar19) {
            iVar47 = iVar18;
            iVar15 = iVar31 + 1;
          }
          iVar18 = iVar47;
          puVar40 = puVar21;
        } while (iVar15 <= iVar18);
      }
      FUN_1401aa4a0(param_1,puVar40);
      if ((puVar40 != (undefined8 *)0x0) &&
         (((sVar12 = (**(code **)*puVar40)(puVar40), sVar12 == 0x33 ||
           (sVar12 = (**(code **)*puVar40)(puVar40), sVar12 == 0x34)) &&
          (cVar11 = supplier_1400735c0(0x1423efbf0,0), cVar11 != '\0')))) {
        piVar41 = param_1 + 0x1d;
        if (*piVar41 != 0) {
          uStack_5e8 = 5;
          uStack_5f0 = uStack_5f0 & 0xffffffff00000000;
          uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
          piStack_600 = (int *)((ulonglong)piStack_600 & 0xffffffff00000000);
          lStack_608 = CONCAT44(lStack_608._4_4_,0x3f800000);
          supplier_14014edb0(0x1423b2710,*piVar41,0x3f800000,0x3f800000);
          *piVar41 = 0;
        }
        sVar12 = *(short *)(puVar40 + 0x17);
        lVar37 = (longlong)sVar12;
        sVar13 = *(short *)((longlong)puVar40 + 0xba);
        if ((-1 < sVar12) && ((int)sVar12 < (int)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
          lVar25 = *(longlong *)(_DAT_14250eee8 + lVar37 * 8);
          plVar24 = *(longlong **)(lVar25 + 0x1b8);
          if ((-1 < sVar13) &&
             ((int)(*(longlong *)(lVar25 + 0x180) - *(longlong *)(lVar25 + 0x178) >> 3) != 0)) {
            puVar21 = *(undefined8 **)
                       (*(longlong *)(*(longlong *)(lVar25 + 0x178) + (longlong)sVar13 * 8) + 0x4310
                       );
          }
          lVar25 = _DAT_14250eee8;
          plStack_588 = plVar24;
          if (puVar21 != (undefined8 *)0x0) {
            plVar38 = (longlong *)puVar21[0x1ff8];
            pppuStack_5b0 = (undefined8 ***)puVar21[0x1ff9];
            plStack_5b8 = plVar38;
            pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
            if (*pcVar20 < '\0') {
              bVar53 = false;
              plVar24 = plVar38;
              do {
                plStack_590 = plVar38;
                if ((*(byte *)(*plVar24 + 0x68) & 1) != 0) {
                  uStack_5d8 = 0;
                  uStack_5e0 = 2;
                  uStack_5e8 = uStack_5e8 & 0xffffff00;
                  uStack_5f0 = 0;
                  uStack_5f8 = 0;
                  lStack_608 = *plVar24;
                  piStack_600 = piVar41;
                  FUN_140733a00(*(undefined8 *)(lVar25 + lVar37 * 8),0x66,(int)sVar13,puVar21);
                  bVar53 = true;
                  lVar25 = _DAT_14250eee8;
                }
                plVar38 = plStack_590 + 1;
                plVar24 = plVar38;
                plStack_5b8 = plVar38;
                pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
              } while (*pcVar20 < '\0');
              plVar24 = plStack_588;
              param_1 = piStack_598;
              plStack_590 = plVar38;
              if (bVar53) goto LAB_1401a39f3;
            }
          }
          if (plVar24 != (longlong *)0x0) {
            plVar38 = (longlong *)plVar24[0x1ff8];
            pppuStack_5b0 = (undefined8 ***)plVar24[0x1ff9];
            plStack_5b8 = plVar38;
            pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
            plVar24 = plStack_588;
            plVar42 = plVar38;
            if (*pcVar20 < '\0') {
              do {
                if ((*(byte *)(*plVar42 + 0x68) & 1) != 0) {
                  uStack_5d8 = 0;
                  uStack_5e0 = 2;
                  uStack_5e8 = uStack_5e8 & 0xffffff00;
                  uStack_5f0 = 0;
                  uStack_5f8 = 0;
                  lStack_608 = *plVar42;
                  piStack_600 = piVar41;
                  FUN_140733a00(*(undefined8 *)(lVar25 + lVar37 * 8),0x66,(int)sVar13,plVar24);
                  plVar38 = plVar42;
                  lVar25 = _DAT_14250eee8;
                }
                plVar38 = plVar38 + 1;
                plVar42 = plVar38;
                plStack_5b8 = plVar38;
                pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
              } while (*pcVar20 < '\0');
              piStack_598[0x795] = 0;
              *(char *)(piStack_598 + 0x796) = '\0';
              break;
            }
          }
        }
      }
    }
LAB_1401a39f3:
    param_1[0x795] = 0;
    *(char *)(param_1 + 0x796) = '\0';
    break;
  case 2:
    iVar19 = param_1[3];
    lVar37 = _DAT_142410398 - _DAT_142410390 >> 3;
    if ((lVar37 == 0) || (iVar19 == -1)) break;
    iVar18 = (int)lVar37 + -1;
    iVar15 = 0;
    if (-1 < iVar18) {
      do {
        iVar32 = iVar15 + iVar18 >> 1;
        plStack_5b8 = *(longlong **)(_DAT_142410390 + (longlong)iVar32 * 8);
        if ((int)plStack_5b8[10] == iVar19) goto LAB_1401a6ad3;
        iVar31 = iVar32 + -1;
        if ((int)plStack_5b8[10] < iVar19) {
          iVar31 = iVar18;
          iVar15 = iVar32 + 1;
        }
        iVar18 = iVar31;
      } while (iVar15 <= iVar18);
    }
    plStack_5b8 = (longlong *)0x0;
LAB_1401a6ad3:
    plVar24 = plStack_5b8;
    if (plStack_5b8 == (longlong *)0x0) break;
    param_1[0x73f] = 0;
    *(char *)(param_1 + 0x740) = '\0';
    param_1[0x741] = 0;
    *(char *)(param_1 + 0x742) = '\0';
    *(char *)(param_1 + 0x74c) = '\0';
    param_1[0x74d] = 0;
    *(char *)(param_1 + 0x74e) = '\0';
    param_1[0x74f] = 0;
    *(undefined2 *)(param_1 + 0x750) = 0;
    *(char *)((longlong)param_1 + 0x1d42) = '\0';
    param_1[0x751] = -1;
    param_1[0x752] = -1;
    param_1[0x753] = -1;
    *(char *)(param_1 + 0x754) = '\0';
    param_1[0x755] = 0;
    *(char *)(param_1 + 0x756) = '\0';
    iVar19 = (**(code **)(*plStack_5b8 + 0xd0))(plStack_5b8);
    if (iVar19 != 4) break;
    supplier_1400708c0(&DAT_1423bc9a8);
    supplier_1401bc920(&DAT_1423bc9c0);
    if ((_DAT_14250ed80 - _DAT_14250ed78 & 0xfffffffffffffff8U) == 0) break;
    puStack_518 = (uint *)0x0;
    uStack_510 = 0;
    uStack_508 = 0;
    puStack_530 = (uint *)0x0;
    puStack_528 = (uint *)0x0;
    puStack_520 = (uint *)0x0;
    puStack_4b8 = (uint *)supplier_1400708c0(&puStack_530);
    uStack_4b0 = (uint *)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    puStack_4a8 = (uint *)0x0;
    FUN_1401bc7b0(&puStack_4b8,_DAT_14250ed80 - _DAT_14250ed78 >> 3);
    supplier_1401bc9f0(&puStack_4b8);
    pppuStack_5b0 = _DAT_142408398;
    puStack_570 = _DAT_1424083a0;
    ppppuVar35 = _DAT_142408398;
    pcVar20 = (char *)supplier_140070450(&pppuStack_5b0,&uStack_5c8,&puStack_570);
    puVar27 = puStack_4b8;
    if (*pcVar20 < '\0') {
      uVar49 = 0x26a;
      plStack_5b8 = plVar24;
      do {
        pppuVar9 = *ppppuVar35;
        if (((((ulonglong)pppuVar9[2] & 0xe98fb0) == 0) && (0x1a2 < *(short *)(pppuVar9 + 0x17))) &&
           ((*(short *)(pppuVar9 + 0x17) <= (short)uVar49 &&
            (*(int *)((longlong)pppuVar9 + 0xbc) != -1)))) {
          *(undefined1 *)((longlong)*(int *)((longlong)pppuVar9 + 0xbc) + (longlong)puVar27) = 1;
        }
        ppppuVar35 = ppppuVar35 + 1;
        pppuStack_5b0 = ppppuVar35;
        pcVar20 = (char *)supplier_140070450(&pppuStack_5b0,&uStack_5c8,&puStack_570);
        param_1 = piStack_598;
      } while (*pcVar20 < '\0');
    }
    uVar50 = (int)(_DAT_14250ed80 - _DAT_14250ed78 >> 3) - 1;
    if (-1 < (int)uVar50) {
      piVar41 = (int *)((longlong)puStack_4b8 + (longlong)(int)uVar50);
      plVar38 = (longlong *)((longlong)(int)uVar50 * 8);
      ppppuVar35 = (undefined8 ****)-(longlong)puStack_4b8;
      lVar37 = _DAT_14250ed78;
      pppuStack_5b0 = ppppuVar35;
      do {
        plVar42 = plVar24;
        if ((char *)((longlong)ppppuVar35 + (longlong)piVar41) <
            (char *)(_DAT_14250ed80 - lVar37 >> 3)) {
          if ((*(int *)(*(longlong *)(lVar37 + (longlong)plVar38) + 0x48) < 1) ||
             ((**(byte **)(*(longlong *)(lVar37 + (longlong)plVar38) + 0x40) & 0x20) == 0)) {
            bVar53 = false;
          }
          else {
            bVar53 = true;
          }
          plVar42 = plStack_5b8;
          if (((bVar53) &&
              (piStack_598 = piVar41, plStack_578 = plVar38,
              supplier_140ac7c40(uVar50 & 0xffff,&uStack_5c4),
              ppppuVar35 = (undefined8 ****)pppuStack_5b0, plVar42 = plStack_5b8,
              *(char *)((longlong)aiStack_5c0 + (longlong)param_1[0x30] + -4) != '\0')) &&
             (cVar11 = FUN_140570c50(plVar24,uVar50), ppppuVar35 = (undefined8 ****)pppuStack_5b0,
             lVar37 = _DAT_14250ed78, plVar42 = plStack_5b8, cVar11 != '\0')) {
            supplier_140070cc0(&pppppuStack_4d8);
            lStack_608 = CONCAT71(lStack_608._1_7_,1);
            FUN_140146430(&DAT_14250ed78,uVar50,&pppppuStack_4d8,1);
            uVar36 = (uint)((char)*piVar41 != '\0');
            if ((int)*(short *)((longlong)plVar24 + (longlong)param_1[0x30] * 2 + 0x148) == uVar50)
            {
              uVar36 = 2;
            }
            piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uVar36);
            puVar27 = (uint *)((longlong)_DAT_1423bc9b0 - (longlong)_DAT_1423bc9a8 >> 1);
            uVar14 = (undefined2)uVar50;
            puStack_570 = puVar27;
            if (puVar27 == (uint *)0x0) {
              uStack_5c8 = CONCAT22(uStack_5c8._2_2_,uVar14);
              supplier_140070b20(&DAT_1423bc9a8,&uStack_5c8);
              uStack_5c8 = CONCAT31(uStack_5c8._1_3_,'\0' < (char)*piVar41);
              FUN_14013d400(&DAT_1423bc9c0,&uStack_5c8);
              supplier_140070a40(&puStack_518,&piStack_5a8);
              FUN_1400bcda0(&puStack_530,&pppppuStack_4d8);
            }
            else {
              puVar28 = puStack_518;
              puVar29 = puStack_530;
              iVar19 = 0;
              if (puVar27 != (uint *)0x0) {
                do {
                  if (((int)*puVar28 < (int)uVar36) ||
                     ((uVar36 == *puVar28 &&
                      (cVar11 = FUN_1400bb380(*(undefined8 *)puVar29,&pppppuStack_4d8),
                      puVar27 = puStack_570, '\0' < cVar11)))) {
                    uStack_5c8 = CONCAT22(uStack_5c8._2_2_,uVar14);
                    lVar37 = (longlong)iVar19;
                    FUN_1401bc830(&DAT_1423bc9a8,lVar37,&uStack_5c8);
                    uStack_5c8 = CONCAT31(uStack_5c8._1_3_,'\0' < (char)*piStack_598);
                    FUN_1401bc8b0(&DAT_1423bc9c0,lVar37,&uStack_5c8);
                    FUN_1400bb040(&puStack_518,lVar37,&piStack_5a8);
                    FUN_14014ec90(&puStack_530,iVar19,&pppppuStack_4d8);
                    piVar41 = piStack_598;
                    plVar24 = plStack_5b8;
                    goto LAB_1401a6e99;
                  }
                  iVar19 = iVar19 + 1;
                  piVar41 = piStack_598;
                  puVar28 = puVar28 + 1;
                  puVar29 = puVar29 + 2;
                } while ((uint *)(longlong)iVar19 < puVar27);
              }
              uStack_5c8 = CONCAT22(uStack_5c8._2_2_,uVar14);
              supplier_140070b20(&DAT_1423bc9a8,&uStack_5c8);
              uStack_5c8 = CONCAT31(uStack_5c8._1_3_,'\0' < (char)*piVar41);
              FUN_14013d400(&DAT_1423bc9c0,&uStack_5c8);
              supplier_140070a40(&puStack_518,&piStack_5a8);
              FUN_1400bcda0(&puStack_530,&pppppuStack_4d8);
              plVar24 = plStack_5b8;
            }
LAB_1401a6e99:
            FUN_140070e80(&pppppuStack_4d8);
            ppppuVar35 = (undefined8 ****)pppuStack_5b0;
            lVar37 = _DAT_14250ed78;
            plVar38 = plStack_578;
            plVar42 = plStack_5b8;
          }
        }
        plStack_5b8 = plVar42;
        plVar38 = plVar38 + -1;
        piVar41 = (int *)((longlong)piVar41 + -1);
        uVar50 = uVar50 - 1;
        piStack_598 = piVar41;
        plStack_578 = plVar38;
      } while (-1 < (int)uVar50);
    }
    puVar6 = _DAT_1423bc9b0;
    puVar5 = _DAT_1423bc9a8;
    uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
    if ((longlong)_DAT_1423bc9b0 - (longlong)_DAT_1423bc9a8 >> 1 == 0) {
      if (_DAT_1423bc9b0 == _DAT_1423bc9b8) {
        FUN_140072670(&DAT_1423bc9a8,_DAT_1423bc9b0,&uStack_5c8);
      }
      else {
        *_DAT_1423bc9b0 = 0xffff;
        _DAT_1423bc9b0 = _DAT_1423bc9b0 + 1;
      }
      uStack_5c8 = uStack_5c8 & 0xffffff00;
      if (((longlong)_DAT_1423bc9d8 < 0) && (_DAT_1423bc9d8 != 0)) {
        pppppuStack_4d8 =
             (undefined8 *****)((longlong)_DAT_1423bc9c0 - ((~_DAT_1423bc9d8 >> 5) * 4 + 4));
        ppppuStack_4d0 = (undefined8 ****)(ulonglong)((uint)_DAT_1423bc9d8 & 0x1f);
      }
      else {
        pppppuStack_4d8 = (undefined8 *****)((longlong)_DAT_1423bc9c0 + (_DAT_1423bc9d8 >> 5) * 4);
        ppppuStack_4d0 = (undefined8 ****)(ulonglong)((uint)_DAT_1423bc9d8 & 0x1f);
      }
    }
    else {
      if (_DAT_1423bc9b0 == _DAT_1423bc9b8) {
        FUN_140072670(&DAT_1423bc9a8,_DAT_1423bc9a8,&uStack_5c8);
      }
      else if (_DAT_1423bc9a8 == _DAT_1423bc9b0) {
        *_DAT_1423bc9b0 = 0xffff;
        _DAT_1423bc9b0 = _DAT_1423bc9b0 + 1;
      }
      else {
        puVar1 = _DAT_1423bc9b0 + -1;
        *_DAT_1423bc9b0 = *puVar1;
        _DAT_1423bc9b0 = _DAT_1423bc9b0 + 1;
        supplier_14155486a((longlong)puVar6 - ((longlong)puVar1 - (longlong)puVar5),puVar5);
        *puVar5 = 0xffff;
      }
      uStack_5c8 = uStack_5c8 & 0xffffff00;
      ppppuStack_4d0 = (undefined8 *****)0x0;
      pppppuStack_4d8 = _DAT_1423bc9c0;
    }
    FUN_14013d670(&DAT_1423bc9c0,&puStack_570,&pppppuStack_4d8,&uStack_5c8);
    FUN_14013d2d0(&puStack_4b8);
    FUN_1400bcfe0(&puStack_530);
    FUN_1400681a0(&puStack_530);
    ppuVar30 = &puStack_518;
LAB_1401a70aa:
    FUN_140070d80(ppuVar30);
    break;
  default:
    FUN_1401ab370();
    param_1[0x792] = 0;
    param_1[0x793] = 0;
    *(char *)(param_1 + 0x794) = '\0';
    break;
  case 5:
  case 6:
    break;
  case 7:
    iVar19 = param_1[3];
    if ((iVar19 < 0) || ((int)(_DAT_14250ef10 - _DAT_14250ef08 >> 2) <= iVar19)) break;
    uVar50 = *(uint *)(_DAT_14250ef08 + (longlong)iVar19 * 4);
    lVar37 = (longlong)(int)uVar50;
    iVar19 = *(int *)(_DAT_14250ef20 + (longlong)iVar19 * 4);
    uStack_5c4 = uVar50;
    cVar11 = supplier_1400735c0(0x1423efbf0,0);
    if (cVar11 == '\0') {
LAB_1401a3658:
      param_1 = param_1 + 0x1e;
      FUN_1400bcfe0(param_1);
      uVar50 = uStack_5c4;
      if ((int)uStack_5c4 < 0) break;
    }
    else {
      piVar41 = param_1 + 0x1d;
      lVar25 = 0;
      if (*piVar41 != 0) {
        uStack_5e8 = 5;
        uStack_5f0 = uStack_5f0 & 0xffffffff00000000;
        uStack_5f8 = uStack_5f8 & 0xffffffff00000000;
        piStack_600 = (int *)((ulonglong)piStack_600 & 0xffffffff00000000);
        lStack_608 = CONCAT44(lStack_608._4_4_,0x3f800000);
        supplier_14014edb0(0x1423b2710,*piVar41,0x3f800000,0x3f800000);
        *piVar41 = 0;
      }
      if (((int)uVar50 < 0) || ((int)(_DAT_14250eef0 - _DAT_14250eee8 >> 3) <= (int)uVar50))
      goto LAB_1401a3658;
      lVar26 = *(longlong *)(_DAT_14250eee8 + lVar37 * 8);
      plVar24 = *(longlong **)(lVar26 + 0x1b8);
      if ((-1 < iVar19) &&
         ((int)(*(longlong *)(lVar26 + 0x180) - *(longlong *)(lVar26 + 0x178) >> 3) != 0)) {
        lVar25 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar26 + 0x178) + (longlong)iVar19 * 8) + 0x4310);
      }
      lVar26 = _DAT_14250eee8;
      plStack_590 = plVar24;
      if (lVar25 != 0) {
        plVar38 = *(longlong **)(lVar25 + 0xffc0);
        pppuStack_5b0 = *(undefined8 ****)(lVar25 + 0xffc8);
        plStack_5b8 = plVar38;
        pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
        if (*pcVar20 < '\0') {
          bVar53 = false;
          do {
            lVar4 = *plVar38;
            if (((*(byte *)(lVar4 + 0x68) & 1) != 0) && (*(short *)(lVar4 + 4) == -1)) {
              uStack_5d8 = 0;
              uStack_5e0 = 2;
              uStack_5e8 = uStack_5e8 & 0xffffff00;
              uStack_5f0 = 0;
              uStack_5f8 = 0;
              lStack_608 = lVar4;
              piStack_600 = piVar41;
              FUN_140733a00(*(undefined8 *)(lVar26 + lVar37 * 8),0x66,iVar19,lVar25);
              bVar53 = true;
              lVar26 = _DAT_14250eee8;
            }
            plVar38 = plVar38 + 1;
            plStack_5b8 = plVar38;
            pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
          } while (*pcVar20 < '\0');
          param_1 = piStack_598;
          plVar24 = plStack_590;
          if (bVar53) goto LAB_1401a3658;
        }
      }
      if (plVar24 == (longlong *)0x0) goto LAB_1401a3658;
      plVar38 = (longlong *)plVar24[0x1ff8];
      pppuStack_5b0 = (undefined8 ***)plVar24[0x1ff9];
      plStack_5b8 = plVar38;
      pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
      plVar24 = plStack_590;
      if (-1 < *pcVar20) goto LAB_1401a3658;
      do {
        lVar25 = *plVar38;
        if (((*(byte *)(lVar25 + 0x68) & 1) != 0) && (*(short *)(lVar25 + 4) == -1)) {
          uStack_5d8 = 0;
          uStack_5e0 = 2;
          uStack_5e8 = uStack_5e8 & 0xffffff00;
          uStack_5f0 = 0;
          uStack_5f8 = 0;
          lStack_608 = lVar25;
          piStack_600 = piVar41;
          FUN_140733a00(*(undefined8 *)(lVar26 + lVar37 * 8),0x66,iVar19,plVar24);
          lVar26 = _DAT_14250eee8;
        }
        plVar38 = plVar38 + 1;
        plStack_5b8 = plVar38;
        pcVar20 = (char *)supplier_140070450(&plStack_5b8,&uStack_5c8,&pppuStack_5b0);
      } while (*pcVar20 < '\0');
      param_1 = piStack_598 + 0x1e;
      FUN_1400bcfe0(param_1);
    }
    if ((((int)uVar50 < (int)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < iVar19)) &&
       (lVar37 = *(longlong *)(_DAT_14250eee8 + (longlong)(int)uVar50 * 8),
       lVar25 = *(longlong *)(lVar37 + 0x178),
       (int)(*(longlong *)(lVar37 + 0x180) - lVar25 >> 3) != 0)) {
      FUN_140900dc0(param_1,*(longlong *)(lVar25 + (longlong)iVar19 * 8) + 0x220,0x38);
    }
  }
override_jmp_1401a33bd_case_4:
  FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_628);
  return;
  while( true ) {
    uVar36 = iVar19 + 1;
    uVar45 = (ulonglong)uVar36;
    uVar48 = uVar48 + 4;
    if ((ulonglong)(*(longlong *)(piVar39 + 0x63c) - lVar37 >> 2) <=
        (ulonglong)(longlong)(int)uVar36) break;
LAB_1401a5e44:
    iVar19 = (int)uVar45;
    if (*(int *)(uVar48 + lVar37) < aiStack_5c0[0]) {
      FUN_14014ec90(puStack_570,uVar45,apppppuStack_498);
      pppppuStack_4d8 = (undefined8 *****)(*plStack_578 + (longlong)iVar19 * 2);
      pppppuVar22 = (undefined8 *****)plStack_578[1];
      if (pppppuVar22 == (undefined8 *****)plStack_578[2]) {
        FUN_140072670(plStack_578,pppppuStack_4d8,&uStack_5c8);
      }
      else if (pppppuStack_4d8 == pppppuVar22) {
        *(short *)pppppuVar22 = (short)uStack_5c4;
        plStack_578[1] = plStack_578[1] + 2;
      }
      else {
        *(undefined2 *)pppppuVar22 = *(undefined2 *)((longlong)pppppuVar22 + -2);
        plStack_578[1] = plStack_578[1] + 2;
        supplier_14155486a((longlong)pppppuVar22 -
                           (((longlong)pppppuVar22 + -2) - (longlong)pppppuStack_4d8));
        *(short *)pppppuStack_4d8 = (short)uStack_5c4;
      }
      uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
      pppppuStack_4d8 = (undefined8 *****)(*plVar24 + (longlong)iVar19 * 2);
      pppppuVar22 = (undefined8 *****)plVar24[1];
      if (pppppuVar22 == (undefined8 *****)plVar24[2]) {
        FUN_140072670(plVar24,pppppuStack_4d8,&uStack_5c8);
      }
      else if (pppppuStack_4d8 == pppppuVar22) {
        *(undefined2 *)pppppuVar22 = 0xffff;
        plVar24[1] = plVar24[1] + 2;
      }
      else {
        *(undefined2 *)pppppuVar22 = *(undefined2 *)((longlong)pppppuVar22 + -2);
        plVar24[1] = plVar24[1] + 2;
        supplier_14155486a((longlong)pppppuVar22 -
                           (((longlong)pppppuVar22 + -2) - (longlong)pppppuStack_4d8));
        *(undefined2 *)pppppuStack_4d8 = 0xffff;
      }
      uStack_5c4 = 0xffffffff;
      if (piStack_558 != (int *)0x0) {
        uStack_5c4 = piStack_558[0x4c];
      }
      piStack_5a8 = (int *)CONCAT44(piStack_5a8._4_4_,uStack_5c4);
      pppppuStack_4d8 = (undefined8 *****)(*plStack_548 + (longlong)iVar19 * 4);
      pppppuVar22 = (undefined8 *****)plStack_548[1];
      if (pppppuVar22 == (undefined8 *****)plStack_548[2]) {
        FUN_140072450(plStack_548,pppppuStack_4d8,&piStack_5a8);
      }
      else if (pppppuStack_4d8 == pppppuVar22) {
        *(uint *)pppppuVar22 = uStack_5c4;
        plStack_548[1] = plStack_548[1] + 4;
      }
      else {
        *(uint *)pppppuVar22 = *(uint *)((longlong)pppppuVar22 + -4);
        plStack_548[1] = plStack_548[1] + 4;
        supplier_14155486a((longlong)pppppuVar22 -
                           (((longlong)pppppuVar22 + -4) - (longlong)pppppuStack_4d8));
        *(uint *)pppppuStack_4d8 = uStack_5c4;
      }
      pppppuStack_4d8 = (undefined8 *****)(*plStack_5b8 + (longlong)iVar19 * 8);
      pppppuVar22 = (undefined8 *****)plStack_5b8[1];
      if (pppppuVar22 == (undefined8 *****)plStack_5b8[2]) {
        FUN_1400bc360(plStack_5b8,pppppuStack_4d8,&pppuStack_5b0);
      }
      else if (pppppuStack_4d8 == pppppuVar22) {
        *pppppuVar22 = ppppuVar35;
        plStack_5b8[1] = plStack_5b8[1] + 8;
      }
      else {
        *pppppuVar22 = pppppuVar22[-1];
        plStack_5b8[1] = plStack_5b8[1] + 8;
        supplier_14155486a((longlong)pppppuVar22 -
                           ((longlong)(pppppuVar22 + -1) - (longlong)pppppuStack_4d8));
        *pppppuStack_4d8 = ppppuVar35;
      }
      puVar7 = (undefined8 *)(*plStack_550 + (longlong)iVar19 * 8);
      puVar8 = (undefined8 *)plStack_550[1];
      if (puVar8 == (undefined8 *)plStack_550[2]) {
        FUN_1400bc360(plStack_550,puVar7,&piStack_540);
      }
      else if (puVar7 == puVar8) {
        *puVar8 = piStack_598;
        plStack_550[1] = plStack_550[1] + 8;
      }
      else {
        *puVar8 = puVar8[-1];
        plStack_550[1] = plStack_550[1] + 8;
        supplier_14155486a((longlong)puVar8 - ((longlong)(puVar8 + -1) - (longlong)puVar7),puVar7);
        *puVar7 = piStack_598;
      }
      piStack_558 = (int *)0x0;
      pppppuStack_4d8 = (undefined8 *****)(*plStack_538 + (longlong)iVar19 * 8);
      pppppuVar22 = (undefined8 *****)plStack_538[1];
      if (pppppuVar22 == (undefined8 *****)plStack_538[2]) {
        FUN_1400bc360(plStack_538,pppppuStack_4d8,&piStack_558);
      }
      else if (pppppuStack_4d8 == pppppuVar22) {
        *pppppuVar22 = (undefined8 ****)0x0;
        plStack_538[1] = plStack_538[1] + 8;
      }
      else {
        *pppppuVar22 = pppppuVar22[-1];
        plStack_538[1] = plStack_538[1] + 8;
        supplier_14155486a((longlong)pppppuVar22 -
                           ((longlong)(pppppuVar22 + -1) - (longlong)pppppuStack_4d8));
        *pppppuStack_4d8 = (undefined8 ****)0x0;
      }
      piVar41 = (int *)(*plVar38 + (longlong)iVar19 * 4);
      piVar44 = *(int **)(piVar39 + 0x63c);
      if (piVar44 == *(int **)(piVar39 + 0x63e)) goto LAB_1401a61ae;
      if (piVar41 == piVar44) {
        *piVar44 = aiStack_5c0[0];
        *(longlong *)(piVar39 + 0x63c) = *(longlong *)(piVar39 + 0x63c) + 4;
      }
      else {
        *piVar44 = piVar44[-1];
        *(longlong *)(piVar39 + 0x63c) = *(longlong *)(piVar39 + 0x63c) + 4;
        supplier_14155486a((longlong)piVar44 - ((longlong)(piVar44 + -1) - (longlong)piVar41),
                           piVar41);
        *piVar41 = aiStack_5c0[0];
      }
      goto LAB_1401a61bc;
    }
  }
LAB_1401a5e66:
  ppppppuVar23 = (undefined8 ******)FUN_1415530e0(0x20);
  *ppppppuVar23 = (undefined8 *****)0x0;
  ppppppuVar23[1] = (undefined8 *****)0x0;
  ppppppuVar23[2] = (undefined8 *****)0x0;
  ppppppuVar23[3] = (undefined8 *****)0xf;
  *(undefined1 *)ppppppuVar23 = 0;
  pppppuStack_4d8 = ppppppuVar23;
  if (ppppppuVar23 != apppppuStack_498) {
    ppppppuVar34 = apppppuStack_498;
    if (0xf < uStack_480) {
      ppppppuVar34 = (undefined8 ******)apppppuStack_498[0];
    }
    FUN_140070f00(ppppppuVar23,ppppppuVar34,uStack_488);
  }
  puVar7 = *(undefined8 **)(puStack_570 + 2);
  if (puVar7 == *(undefined8 **)(puStack_570 + 4)) {
    FUN_1400bc360(puStack_570,puVar7,&pppppuStack_4d8);
  }
  else {
    *puVar7 = ppppppuVar23;
    *(longlong *)(puStack_570 + 2) = *(longlong *)(puStack_570 + 2) + 8;
  }
  puVar5 = (undefined2 *)plStack_578[1];
  if (puVar5 == (undefined2 *)plStack_578[2]) {
    FUN_140072670(plStack_578,puVar5,&uStack_5c8);
  }
  else {
    *puVar5 = (short)uStack_5c4;
    plStack_578[1] = plStack_578[1] + 2;
  }
  plVar24 = plStack_590;
  uStack_5c8 = CONCAT22(uStack_5c8._2_2_,0xffff);
  puVar5 = (undefined2 *)(*plStack_590 + (longlong)(int)uVar36 * 2);
  puVar6 = (undefined2 *)plStack_590[1];
  if (puVar6 == (undefined2 *)plStack_590[2]) {
    FUN_140072670(plStack_590,puVar5,&uStack_5c8);
  }
  else if (puVar5 == puVar6) {
    *puVar6 = 0xffff;
    plStack_590[1] = plStack_590[1] + 2;
  }
  else {
    *puVar6 = puVar6[-1];
    plStack_590[1] = plStack_590[1] + 2;
    supplier_14155486a((longlong)puVar6 - ((longlong)(puVar6 + -1) - (longlong)puVar5),puVar5);
    *puVar5 = 0xffff;
  }
  if (piStack_558 == (int *)0x0) {
    uStack_5c4 = 0xffffffff;
  }
  else {
    uStack_5c4 = piStack_558[0x4c];
  }
  puVar27 = (uint *)plStack_548[1];
  if (puVar27 == (uint *)plStack_548[2]) {
    FUN_140072450(plStack_548,puVar27,&uStack_5c4);
  }
  else {
    *puVar27 = uStack_5c4;
    plStack_548[1] = plStack_548[1] + 4;
  }
  puVar7 = (undefined8 *)plStack_5b8[1];
  if (puVar7 == (undefined8 *)plStack_5b8[2]) {
    FUN_1400bc360(plStack_5b8,puVar7,&pppuStack_5b0);
  }
  else {
    *puVar7 = ppppuVar35;
    plStack_5b8[1] = plStack_5b8[1] + 8;
  }
  puVar7 = (undefined8 *)plStack_550[1];
  if (puVar7 == (undefined8 *)plStack_550[2]) {
    FUN_1400bc360(plStack_550,puVar7,&piStack_540);
  }
  else {
    *puVar7 = piStack_598;
    plStack_550[1] = plStack_550[1] + 8;
  }
  pppppuStack_4d8 = (undefined8 *****)0x0;
  puVar7 = (undefined8 *)plStack_538[1];
  if (puVar7 == (undefined8 *)plStack_538[2]) {
    FUN_1400bc360(plStack_538,puVar7,&pppppuStack_4d8);
  }
  else {
    *puVar7 = 0;
    plStack_538[1] = plStack_538[1] + 8;
  }
  piVar41 = *(int **)(piVar39 + 0x63c);
  if (piVar41 == *(int **)(piVar39 + 0x63e)) {
LAB_1401a61ae:
    FUN_140072450(plVar38,piVar41,aiStack_5c0);
  }
  else {
    *piVar41 = aiStack_5c0[0];
    *(longlong *)(piVar39 + 0x63c) = *(longlong *)(piVar39 + 0x63c) + 4;
  }
LAB_1401a61bc:
  FUN_140070e80(apppppuStack_498);
  puVar40 = puVar40 + 1;
  plVar42 = plStack_5b8;
  goto LAB_1401a5d20;
code_r0x0001401a4895:
  uVar46 = (int)uVar48 + 1;
  uVar48 = (ulonglong)uVar46;
  uVar45 = uVar45 + 1;
  piVar41 = piVar41 + 1;
  if (iVar19 <= (int)uVar46) goto LAB_1401a48a4;
  goto LAB_1401a4890;
code_r0x0001401a49c6:
  uVar50 = (int)uVar48 + 1;
  uVar48 = (ulonglong)uVar50;
  uVar45 = uVar45 + 1;
  piVar41 = piVar41 + 1;
  if (param_1[0x43] <= (int)uVar50) goto LAB_1401a49d5;
  goto LAB_1401a49c1;
code_r0x0001401a4afc:
  uVar50 = (int)uVar48 + 1;
  uVar48 = (ulonglong)uVar50;
  uVar33 = uVar33 + 1;
  piVar41 = piVar41 + 1;
  if (param_1[0x43] <= (int)uVar50) goto LAB_1401a4b09;
  goto LAB_1401a4af3;
code_r0x0001401a4bae:
  uVar50 = (int)uVar48 + 1;
  uVar48 = (ulonglong)uVar50;
  uVar33 = uVar33 + 1;
  piVar41 = piVar41 + 1;
  if (param_1[0x43] <= (int)uVar50) goto LAB_1401a4bbb;
  goto LAB_1401a4ba5;
}

