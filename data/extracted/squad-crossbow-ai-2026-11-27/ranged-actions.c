/* post-shot recovery countdown in FUN_14151ec30 | VA [0x14151f324, 0x14151f33c) | Ghidra excerpt */
  case 8:
  case 0xc:
  case 0xf:
  case 0x1b:
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    if ((int)plVar4[1] < 1) {
      *(undefined4 *)plVar4 = 0xffffffff;
    }
    break;

/* load and shoot cases in FUN_14151ec30 | VA [0x141522662, 0x1415233ef) | Ghidra excerpt */
  case 0x18:
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    if ((int)plVar4[1] < 1) {
      iVar13 = *(int *)((longlong)plVar4 + 0xc);
      iVar25 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
      if ((iVar25 != 0) && (iVar13 != -1)) {
        iVar25 = iVar25 + -1;
        plVar16 = plVar20;
        if (-1 < iVar25) {
          do {
            iVar26 = iVar25 + (int)plVar20 >> 1;
            plVar16 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar26 * 8);
            iVar22 = *(int *)((longlong)plVar16 + 0x1c);
            if (iVar22 == iVar13) goto code_r0x0001415226dd;
            if (iVar22 < iVar13) {
              plVar20 = (longlong *)(ulonglong)(iVar26 + 1);
            }
            iVar26 = iVar26 + -1;
            if (iVar22 <= iVar13) {
              iVar26 = iVar25;
            }
            iVar25 = iVar26;
          } while ((int)plVar20 <= iVar25);
          plVar16 = (longlong *)0x0;
        }
code_r0x0001415226dd:
        if (plVar16 != (longlong *)0x0) {
          sVar10 = (**(code **)*plVar16)(plVar16);
          if (sVar10 != 0x18) goto code_r0x00014151f3c3;
          for (puVar30 = (undefined8 *)param_1[0x81]; puVar30 != (undefined8 *)param_1[0x82];
              puVar30 = puVar30 + 1) {
            puVar28 = (undefined8 *)*puVar30;
            if (((longlong *)*puVar28 == plVar16) && (*(short *)(puVar28 + 1) == 1)) {
              uVar36 = *(undefined2 *)((longlong)puVar28 + 10);
              break;
            }
          }
          if (*(int *)(plVar16[0x1d] + 0x1cc) == 0) {
            puVar28 = (undefined8 *)param_1[0x82];
            for (puVar30 = (undefined8 *)param_1[0x81]; puVar30 != puVar28; puVar30 = puVar30 + 1) {
              puVar21 = (undefined8 *)*puVar30;
              if (((*(short *)(puVar21 + 1) == 0xb) &&
                  (*(int *)(puVar21 + 2) == *(int *)((longlong)plVar16 + 0x1c))) &&
                 (sVar10 = (*(code *)**(undefined8 **)*puVar21)(), sVar10 == 0x27)) {
                puVar21 = (undefined8 *)*puVar21;
                if (puVar21 != (undefined8 *)0x0) goto code_r0x000141522847;
                break;
              }
            }
          }
          else if (((*(int *)(plVar16[0x1d] + 0x1cc) == 1) && ((*(byte *)(plVar16 + 2) & 0x40) != 0)
                   ) && (iVar13 = (int)(plVar16[8] - plVar16[7] >> 3) + -1, -1 < iVar13)) {
            lVar34 = (longlong)iVar13;
            do {
              iVar13 = (**(code **)(**(longlong **)(plVar16[7] + lVar34 * 8) + 0x10))();
              if (((iVar13 == 10) &&
                  (puVar21 = (undefined8 *)
                             (**(code **)(**(longlong **)(plVar16[7] + lVar34 * 8) + 0x18))(),
                  puVar21 != (undefined8 *)0x0)) &&
                 (sVar10 = (**(code **)*puVar21)(puVar21), sVar10 == 0x27))
              goto code_r0x000141522847;
              lVar34 = lVar34 + -1;
            } while (-1 < lVar34);
          }
          iVar13 = -1;
          if (*(int *)(plVar16[0x1d] + 0x1cc) == 0) {
            sVar10 = FUN_14139f2f0(param_1,1,0,uVar36);
            iVar13 = (int)sVar10;
            if (iVar13 != -1) goto code_r0x000141522bb8;
          }
          else {
code_r0x000141522bb8:
            iVar25 = (int)plVar4[2];
            iVar22 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
            if ((iVar22 != 0) && (iVar25 != -1)) {
              iVar26 = 0;
              iVar22 = iVar22 + -1;
              if (-1 < iVar22) {
                do {
                  iVar23 = iVar22 + iVar26 >> 1;
                  plVar20 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar23 * 8);
                  iVar24 = *(int *)((longlong)plVar20 + 0x1c);
                  if (iVar24 == iVar25) goto code_r0x000141522c1c;
                  if (iVar24 < iVar25) {
                    iVar26 = iVar23 + 1;
                  }
                  iVar23 = iVar23 + -1;
                  if (iVar24 <= iVar25) {
                    iVar23 = iVar22;
                  }
                  iVar22 = iVar23;
                } while (iVar26 <= iVar22);
              }
              plVar20 = (longlong *)0x0;
code_r0x000141522c1c:
              if (plVar20 != (longlong *)0x0) {
                sVar10 = (**(code **)*plVar20)(plVar20);
                if (sVar10 == 0x27) {
                  lVar34 = plVar16[0x1d];
                  puVar30 = (undefined8 *)(lVar34 + 0xd8);
                  lVar19 = plVar20[0x1d];
                  puVar28 = (undefined8 *)(lVar19 + 200);
                  if (0xf < *(ulonglong *)(lVar34 + 0xf0)) {
                    puVar30 = (undefined8 *)*puVar30;
                  }
                  if (0xf < *(ulonglong *)(lVar19 + 0xe0)) {
                    puVar28 = (undefined8 *)*puVar28;
                  }
                  if ((*(longlong *)(lVar19 + 0xd8) != *(longlong *)(lVar34 + 0xe8)) ||
                     (iVar25 = func_0x000141554864(puVar28,puVar30), iVar25 != 0))
                  goto code_r0x00014152282b;
                  cVar8 = FUN_1413584d0(param_1,plVar20,0);
                  if (cVar8 == '\0') {
                    *(undefined4 *)plVar4 = 0xffffffff;
                  }
                  else {
                    if ((int)plVar20[0x10] == 1) {
                      FUN_140c7b1e0(plVar20,2);
                    }
                    else {
                      plVar20 = (longlong *)(**(code **)(*plVar20 + 0x388))(plVar20,1,0);
                      (**(code **)(*plVar20 + 0x328))(plVar20,1);
                    }
                    if (*(int *)(plVar16[0x1d] + 0x1cc) == 0) {
                      uStack_550 = CONCAT31(uStack_550._1_3_,1);
                      uStack_558 = CONCAT44(uStack_558._4_4_,0xffffffff);
                      lVar34 = FUN_1413412c0(param_1,plVar20,0xb,iVar13);
                      if (lVar34 != 0) {
                        *(int *)(lVar34 + 0x10) = *(int *)((longlong)plVar16 + 0x1c);
                      }
                    }
                    else if (*(int *)(plVar16[0x1d] + 0x1cc) == 1) {
                      FUN_140ca00d0(plVar20,plVar16);
                    }
                    uVar11 = *(uint *)((longlong)plVar4 + 0x14);
                    if ((uVar11 & 1) == 0) {
                      *(undefined4 *)plVar4 = 0xffffffff;
                      if (((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) &&
                         (cVar8 = func_0x00014007f460(0x1423b3120,0xea), cVar8 != '\0')) {
                        func_0x000140070cc0(&puStack_238);
                        func_0x000140070cc0(&ppppuStack_218);
                        func_0x000140070bb0(&puStack_238,&UNK_1417aa098);
                        puVar31 = &UNK_1416d8c78;
                        if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
                          puVar31 = &UNK_1416d8c58;
                        }
                        func_0x000140070b90(&puStack_238,puVar31);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        FUN_140c7d140(plVar20,&ppppuStack_218,0,1);
                        func_0x0001400bb340(&puStack_238,&ppppuStack_218);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        func_0x0001400fcc00(&ppppuStack_218);
                        puVar31 = &UNK_14165def8;
                        if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
                          puVar31 = &UNK_1416d8c60;
                        }
                        func_0x000140070b90(&puStack_238,puVar31);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        FUN_140c7d140(plVar16,&ppppuStack_218,0,1);
                        func_0x0001400bb340(&puStack_238,&ppppuStack_218);
                        func_0x000140070b90(&puStack_238,&UNK_141603844);
                        func_0x00014007f210(&uStack_508);
                        uStack_508 = 0x600ea;
                        uStack_504 = 1;
                        uStack_4ec = 100;
                        FUN_1400e5250(0x142505cd0,&puStack_238,&uStack_508);
                        FUN_140070e80(&ppppuStack_218);
                        FUN_140070e80(&puStack_238);
                      }
                    }
                    else {
                      lVar34 = plVar4[3];
                      uVar36 = *(undefined2 *)((longlong)plVar4 + 0x1c);
                      auStack_518[0] =
                           CONCAT22(auStack_518[0]._2_2_,
                                    *(undefined2 *)((longlong)plStack_510 + 0x1e));
                      auStack_520[0] = *(ushort *)(plStack_510 + 4);
                      sVar10 = *(short *)((longlong)plStack_510 + 0x22);
                      lStack_490 = CONCAT44(lStack_490._4_4_,
                                            *(undefined4 *)((longlong)plStack_510 + 0x24));
                      *(undefined4 *)plStack_510 = 0x19;
                      iVar13 = FUN_1406712b0(plStack_510,plVar16);
                      *(int *)(plStack_510 + 1) = iVar13;
                      if (sVar10 != -1) {
                        *(int *)(plStack_510 + 1) = iVar13 + 10;
                      }
                      *(int *)((longlong)plStack_510 + 0xc) = *(int *)((longlong)plVar16 + 0x1c);
                      *(undefined4 *)(plStack_510 + 2) = *(undefined4 *)((longlong)plVar20 + 0x1c);
                      *(undefined4 *)((longlong)plStack_510 + 0x14) = 0;
                      if ((uVar11 & 2) != 0) {
                        *(undefined4 *)((longlong)plStack_510 + 0x14) = 1;
                      }
                      *(int *)(plStack_510 + 3) = (int)lVar34;
                      *(undefined2 *)((longlong)plStack_510 + 0x1c) = uVar36;
                      *(undefined2 *)((longlong)plStack_510 + 0x1e) = (undefined2)auStack_518[0];
                      *(ushort *)(plStack_510 + 4) = auStack_520[0];
                      *(short *)((longlong)plStack_510 + 0x22) = sVar10;
                      *(undefined4 *)((longlong)plStack_510 + 0x24) = (undefined4)lStack_490;
                      if (((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) &&
                         (cVar8 = func_0x00014007f460(0x1423b3120,0xea), cVar8 != '\0')) {
                        func_0x000140070cc0(&puStack_238);
                        func_0x000140070cc0(&ppppuStack_218);
                        func_0x000140070bb0(&puStack_238,&UNK_1417aa098);
                        puVar31 = &UNK_1416d8c78;
                        if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
                          puVar31 = &UNK_1416d8c58;
                        }
                        func_0x000140070b90(&puStack_238,puVar31);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        FUN_140c7d140(plVar20,&ppppuStack_218,0,1);
                        func_0x0001400bb340(&puStack_238,&ppppuStack_218);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        func_0x0001400fcc00(&ppppuStack_218);
                        puVar31 = &UNK_14165def8;
                        if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
                          puVar31 = &UNK_1416d8c60;
                        }
                        func_0x000140070b90(&puStack_238,puVar31);
                        func_0x000140070b90(&puStack_238,&UNK_1416039f0);
                        FUN_140c7d140(plVar16,&ppppuStack_218,0,1);
                        func_0x0001400bb340(&puStack_238,&ppppuStack_218);
                        func_0x000140070b90(&puStack_238,&UNK_1417aa138);
                        func_0x00014007f210(&uStack_508);
                        uStack_508 = 0x600ea;
                        uStack_504 = 1;
                        uStack_4ec = 100;
                        FUN_1400e5250(0x142505cd0,&puStack_238,&uStack_508);
                        FUN_140070e80(&ppppuStack_218);
                        FUN_140070e80(&puStack_238);
                      }
                    }
                  }
                }
                else {
                  *(undefined4 *)plVar4 = 0xffffffff;
                }
                break;
              }
            }
          }
code_r0x00014152282b:
          *(undefined4 *)plVar4 = 0xffffffff;
          break;
        }
      }
      goto code_r0x00014151f31b;
    }
    break;
  case 0x19:
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    if ((int)plVar4[1] < 1) {
      iVar13 = *(int *)((longlong)plVar4 + 0xc);
      iVar25 = (int)(lRam00000001424078d8 - lRam00000001424078d0 >> 3);
      if ((iVar25 != 0) && (iVar13 != -1)) {
        iVar25 = iVar25 + -1;
        plVar16 = plVar20;
        if (-1 < iVar25) {
          do {
            iVar26 = iVar25 + (int)plVar20 >> 1;
            plVar16 = *(longlong **)(lRam00000001424078d0 + (longlong)iVar26 * 8);
            iVar22 = *(int *)((longlong)plVar16 + 0x1c);
            if (iVar22 == iVar13) goto code_r0x0001415231ed;
            if (iVar22 < iVar13) {
              plVar20 = (longlong *)(ulonglong)(iVar26 + 1);
            }
            iVar26 = iVar26 + -1;
            if (iVar22 <= iVar13) {
              iVar26 = iVar25;
            }
            iVar25 = iVar26;
          } while ((int)plVar20 <= iVar25);
          plVar16 = (longlong *)0x0;
        }
code_r0x0001415231ed:
        if (plVar16 != (longlong *)0x0) {
          sVar10 = (**(code **)*plVar16)(plVar16);
          if (sVar10 != 0x18) goto code_r0x00014151f3c3;
          if (*(int *)(plVar16[0x1d] + 0x1cc) == 0) {
            puVar30 = (undefined8 *)param_1[0x81];
            puVar28 = (undefined8 *)param_1[0x82];
            if (puVar30 == puVar28) goto code_r0x00014151f4ef;
            do {
              puVar21 = (undefined8 *)*puVar30;
              if (((*(short *)(puVar21 + 1) == 0xb) &&
                  (*(int *)(puVar21 + 2) == *(int *)((longlong)plVar16 + 0x1c))) &&
                 (sVar10 = (*(code *)**(undefined8 **)*puVar21)(), sVar10 == 0x27)) {
                puVar21 = (undefined8 *)*puVar21;
                if (puVar21 != (undefined8 *)0x0) goto code_r0x0001415232fb;
                goto code_r0x00014151f4ef;
              }
              puVar30 = puVar30 + 1;
            } while (puVar30 != puVar28);
            *(undefined4 *)plVar4 = 0xffffffff;
          }
          else {
            if (((*(int *)(plVar16[0x1d] + 0x1cc) != 1) || ((*(byte *)(plVar16 + 2) & 0x40) == 0))
               || (iVar13 = (int)(plVar16[8] - plVar16[7] >> 3) + -1, iVar13 < 0))
            goto code_r0x00014151f4ef;
            lVar34 = (longlong)iVar13;
            do {
              iVar13 = (**(code **)(**(longlong **)(plVar16[7] + lVar34 * 8) + 0x10))();
              if (((iVar13 == 10) &&
                  (puVar21 = (undefined8 *)
                             (**(code **)(**(longlong **)(plVar16[7] + lVar34 * 8) + 0x18))(),
                  puVar21 != (undefined8 *)0x0)) &&
                 (sVar10 = (**(code **)*puVar21)(puVar21), sVar10 == 0x27))
              goto code_r0x0001415232fb;
              lVar34 = lVar34 + -1;
            } while (-1 < lVar34);
            *(undefined4 *)plVar4 = 0xffffffff;
          }
          break;
        }
      }
      goto code_r0x00014151f31b;
    }
    break;

/* continuations of the same load and shoot cases | VA [0x141522662, 0x1415233ef) | Ghidra excerpt */
code_r0x0001415232fb:
  iVar13 = (int)plVar4[3];
  iVar25 = (int)(lRam0000000142407538 - lRam0000000142407530 >> 3);
  if ((iVar25 != 0) && (iVar13 != -1)) {
    iVar22 = 0;
    iVar25 = iVar25 + -1;
    if (-1 < iVar25) {
      do {
        iVar24 = iVar25 + iVar22 >> 1;
        lVar34 = *(longlong *)(lRam0000000142407530 + (longlong)iVar24 * 8);
        iVar26 = *(int *)(lVar34 + 0x130);
        if (iVar26 == iVar13) goto code_r0x00014152335f;
        if (iVar26 < iVar13) {
          iVar22 = iVar24 + 1;
        }
        iVar24 = iVar24 + -1;
        if (iVar26 <= iVar13) {
          iVar24 = iVar25;
        }
        iVar25 = iVar24;
      } while (iVar22 <= iVar25);
    }
  }
  lVar34 = 0;
code_r0x00014152335f:
  if ((*(uint *)(param_1 + 0x22) & 0x40000) != 0) {
    FUN_14137aec0(param_1,1);
  }
  bVar37 = (*(byte *)((longlong)plVar4 + 0x14) & 1) == 0;
  if (!bVar37) {
    *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) | 2;
  }
  iStack_548 = (int)(short)plVar4[4];
  uStack_550 = (uint)*(short *)((longlong)plVar4 + 0x1e);
  uStack_538 = *(undefined4 *)((longlong)plVar4 + 0x24);
  uStack_540 = CONCAT22(uStack_540._2_2_,*(undefined2 *)((longlong)plVar4 + 0x22));
  uStack_558 = CONCAT44(uStack_558._4_4_,(int)*(short *)((longlong)plVar4 + 0x1c));
  FUN_141377970(param_1,plVar16,puVar21,lVar34);
  if (bVar37) {
code_r0x00014151f4ef:
    *(undefined4 *)plVar4 = 0xffffffff;
  }
  else {
    *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xfffffffd;
    *(undefined4 *)plVar4 = 0xffffffff;
  }
  goto LAB_14152359b;
code_r0x000141522847:
  uVar11 = *(uint *)((longlong)plVar4 + 0x14);
  if ((uVar11 & 1) == 0) {
    *(undefined4 *)plVar4 = 0xffffffff;
    if (((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) && ((bRam00000001423b34c8 & 8) != 0))
    {
      func_0x000140070cc0(auStack_118);
      func_0x000140070cc0(auStack_58);
      FUN_140c7d140(plVar16,auStack_118,0,1);
      FUN_140546b30(auStack_118);
      func_0x000140070b90(auStack_118,&UNK_1417aa0d0);
      puVar31 = &UNK_1417aa0c4;
      if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
        puVar31 = &UNK_1416f3b58;
      }
      func_0x000140070b90(auStack_118,puVar31);
      func_0x000140070b90(auStack_118,&UNK_141609848);
      func_0x0001400bb340(auStack_118,auStack_58);
      FUN_140c7d140(puVar21,auStack_58,0,0);
      func_0x000140070b90(auStack_118,&UNK_141603844);
      func_0x00014007f210(&uStack_328);
      uStack_328 = 0x600ea;
      uStack_324 = 1;
      uStack_30c = 100;
      FUN_1400e5250(0x142505cd0,auStack_118,&uStack_328);
      FUN_140070e80(auStack_58);
      FUN_140070e80(auStack_118);
    }
  }
  else {
    lVar34 = plVar4[3];
    uVar36 = *(undefined2 *)((longlong)plVar4 + 0x1c);
    auStack_520[0] = *(ushort *)((longlong)plStack_510 + 0x1e);
    auStack_518[0] = CONCAT22(auStack_518[0]._2_2_,(short)plStack_510[4]);
    sVar10 = *(short *)((longlong)plStack_510 + 0x22);
    lStack_490 = CONCAT44(lStack_490._4_4_,*(undefined4 *)((longlong)plStack_510 + 0x24));
    *(undefined4 *)plStack_510 = 0x19;
    sVar9 = (**(code **)*plVar16)(plVar16);
    if (sVar9 == 0x18) {
      iVar13 = *(int *)(plVar16[0x1d] + 0x1dc);
    }
    else {
      iVar13 = 0;
    }
    *(int *)(plStack_510 + 1) = iVar13;
    if (sVar10 != -1) {
      *(int *)(plStack_510 + 1) = iVar13 + 10;
    }
    *(int *)((longlong)plStack_510 + 0xc) = *(int *)((longlong)plVar16 + 0x1c);
    *(undefined4 *)(plStack_510 + 2) = *(undefined4 *)((longlong)puVar21 + 0x1c);
    *(undefined4 *)((longlong)plStack_510 + 0x14) = 0;
    if ((uVar11 & 2) != 0) {
      *(undefined4 *)((longlong)plStack_510 + 0x14) = 1;
    }
    *(int *)(plStack_510 + 3) = (int)lVar34;
    *(undefined2 *)((longlong)plStack_510 + 0x1c) = uVar36;
    *(ushort *)((longlong)plStack_510 + 0x1e) = auStack_520[0];
    *(undefined2 *)(plStack_510 + 4) = (undefined2)auStack_518[0];
    *(short *)((longlong)plStack_510 + 0x22) = sVar10;
    *(undefined4 *)((longlong)plStack_510 + 0x24) = (undefined4)lStack_490;
    if (((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) && ((bRam00000001423b34c8 & 8) != 0))
    {
      func_0x000140070cc0(auStack_138);
      func_0x000140070cc0(auStack_78);
      FUN_140c7d140(plVar16,auStack_138,0,1);
      FUN_140546b30(auStack_138);
      func_0x000140070b90(auStack_138,&UNK_1417aa0d0);
      puVar31 = &UNK_1417aa0c4;
      if (*(int *)(plVar16[0x1d] + 0x1cc) != 0) {
        puVar31 = &UNK_1416f3b58;
      }
      func_0x000140070b90(auStack_138,puVar31);
      func_0x000140070b90(auStack_138,&UNK_141609848);
      FUN_140c7d140(puVar21,auStack_78,0,0);
      func_0x0001400bb340(auStack_138,auStack_78);
      func_0x000140070b90(auStack_138,&UNK_1417aa0a8);
      func_0x00014007f210(&uStack_288);
      uStack_288 = 0x600ea;
      uStack_284 = 1;
      uStack_26c = 100;
      FUN_1400e5250(0x142505cd0,auStack_138,&uStack_288);
      FUN_140070e80(auStack_78);
      FUN_140070e80(auStack_138);
    }
  }
  goto LAB_14152359b;
