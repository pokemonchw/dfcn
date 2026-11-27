/* Steam PE:6aea05a1:02734000. Ghidra decompilation of viewscreen_worldst::render, view_mode 7.
   Local declarations and outgoing labels are in ../../civilization-detail/reference/world-report-render.c.
   Full decompiled suppliers follow the case. Shared item body is in
   ../../image-information-current/pe-reference-selected-item-description.c.
*/

  case 7:
    iVar50 = iStack_3900 + -0x39;
    uStack_3908 = CONCAT44(uStack_3908._4_4_,iVar50);
    iVar37 = 0x14;
    if ((_DAT_1423efc08 < 0x2f) || (iVar37 = _DAT_1423efc08 + -0x1a, iVar37 < 0x1f)) {
      uVar52 = 0;
      if (-1 < iVar37) goto LAB_1401d47d0;
    }
    else {
      iVar37 = 0x1e;
      uVar52 = uVar46;
LAB_1401d47d0:
      do {
        if (iVar50 <= iVar18) {
          iVar43 = iVar50;
          do {
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d47f2;
            mission_supplier_1400bc750(0x14266c870,uVar52,iVar43);
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4803;
            FUN_1400bc7c0(0x14266c870,0,0);
            if (uVar46 == 0) {
              uVar32 = _DAT_14266e194;
              if ((iVar43 != iVar50) && (uVar32 = _DAT_14266e1a0, iVar43 == iVar18)) {
                uVar32 = _DAT_14266e1ac;
              }
            }
            else if (uVar46 == (longlong)iVar37) {
              uVar32 = _DAT_14266e19c;
              if ((iVar43 != iVar50) && (uVar32 = _DAT_14266e1a8, iVar43 == iVar18)) {
                uVar32 = _DAT_14266e1b4;
              }
            }
            else {
              uVar32 = _DAT_14266e198;
              if ((iVar43 != iVar50) && (uVar32 = _DAT_14266e1b0, iVar43 != iVar18)) {
                uVar32 = _DAT_14266e1a4;
              }
            }
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4886;
            mission_supplier_140af4570(0x14266c870,uVar32);
            iVar43 = iVar43 + 1;
          } while (iVar43 <= iVar18);
        }
        uVar54 = (int)uVar52 + 1;
        uVar52 = (ulonglong)uVar54;
        uVar46 = uVar46 + 1;
      } while ((int)uVar54 <= iVar37);
    }
    iVar36 = iVar18 + -0x37;
    iVar50 = iVar18 + -2;
    *(int *)(&stack0x0000004c + lVar19) = iVar50;
    iVar37 = (iVar37 + -1) / 3;
    uStack_38f8 = CONCAT44(uStack_38f8._4_4_,iVar37);
    lVar56 = *(longlong *)(&stack0x00000050 + lVar19);
    *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d48d7;
    iVar43 = mission_supplier_140070480(lVar56 + 0x8410);
    if (iVar37 < iVar43) {
      iVar50 = iVar18 + -4;
      *(int *)(&stack0x0000004c + lVar19) = iVar50;
    }
    puStack_3918 = (undefined4 *)0x0;
    iVar44 = iVar43 - iVar37;
    if (*(int *)(lVar56 + 0x8440) <= iVar43 - iVar37) {
      iVar44 = *(int *)(lVar56 + 0x8440);
    }
    iVar17 = 0;
    if (-1 < iVar44) {
      iVar17 = iVar44;
    }
    uStack_3910 = (longlong *)CONCAT44(uStack_3910._4_4_,iVar17 + iVar37);
    *(int *)(&stack0x00000048 + lVar19) = aiStack_38c8[0];
    if (iVar17 < iVar17 + iVar37) {
      puStack_38a0 = (undefined4 *)(lVar56 + 0x8410);
      iVar37 = 4;
      do {
        if (iVar43 <= iVar17) break;
        lVar48 = (longlong)iVar17;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4956;
        puVar23 = (undefined8 *)mission_supplier_140070850(puStack_38a0,lVar48);
        puVar39 = (undefined4 *)*puVar23;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d496c;
        puStack_38b8 = puVar39;
        plVar24 = (longlong *)mission_supplier_140070850(lVar56 + 0x8428,lVar48);
        if (*plVar24 == 0) {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d497c;
          uVar33 = FUN_1415530e0(0x30);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4988;
          puVar23 = (undefined8 *)mission_supplier_140074780(uVar33);
          *puVar23 = puVar39;
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4996;
          mission_supplier_1409f8390(puVar23);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d49ac;
          FUN_1409f83e0(puVar23,_DAT_1423bc668 + 0x928);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d49bb;
          puVar29 = (undefined8 *)mission_supplier_140070850(lVar56 + 0x8428,lVar48);
          *puVar29 = puVar23;
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d49d1;
        puVar30 = (ulonglong *)mission_supplier_140070850(lVar56 + 0x8428,lVar48);
        uVar46 = *puVar30;
        uStack_38d0 = uVar46;
        if ((((DAT_1423b2a55 != '\0') && (iVar36 <= aiStack_3920[0])) && (aiStack_3920[0] <= iVar50)
            ) && ((iVar37 + -3 <= iStack_3924 && (iStack_3924 <= iVar37 + -1)))) {
          lVar56 = *(longlong *)(&stack0x00000050 + lVar19);
          if (*(undefined4 **)(lVar56 + 0x8448) != puVar39) {
            *(undefined4 **)(lVar56 + 0x8448) = puVar39;
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4a22;
            mission_popup(lVar56,puVar39,uVar46);
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4a33;
            mission_supplier_140b016a0(0x14266c870,2);
          }
          *(int *)(&stack0x00000048 + lVar19) = iVar37 + -4;
          puStack_3918 = puVar39;
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4a55;
        mission_supplier_1400bc760(0x14266c870,7,0,1);
        if (iVar36 <= iVar50) {
          lVar56 = (longlong)iVar36;
          iVar44 = iVar36;
          do {
            if (iVar37 + -3 < iVar37) {
              puVar39 = (undefined4 *)0x14266e230;
              iVar42 = iVar37 + -3;
              do {
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4a95;
                mission_supplier_1400bc750(0x14266c870,iVar42,iVar44);
                if (iVar44 == iVar36) {
                  uVar32 = puVar39[-6];
                }
                else if (lVar56 == iVar50) {
                  uVar32 = *puVar39;
                }
                else {
                  uVar32 = puVar39[-3];
                }
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ab7;
                mission_supplier_140af4570(0x14266c870,uVar32);
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ac5;
                cVar13 = mission_supplier_1400735c0(0x1423efbf0,0);
                if (cVar13 != '\0') {
                  *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ada;
                  FUN_1400bc7c0(0x14266c870,0,1);
                }
                iVar42 = iVar42 + 1;
                puVar39 = puVar39 + 1;
              } while (iVar42 < iVar37);
              iVar50 = *(int *)(&stack0x0000004c + lVar19);
            }
            iVar44 = iVar44 + 1;
            lVar56 = lVar56 + 1;
            puVar39 = puStack_38b8;
            uVar46 = uStack_38d0;
          } while (iVar44 <= iVar50);
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b1e;
        mission_supplier_1400bc760(0x14266c870,3,0,1);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b30;
        mission_supplier_1400bc750(0x14266c870,iVar37 + -2,iVar36);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b3c;
        mission_supplier_140070cc0(auStack_2558);
        uVar32 = *puVar39;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b57;
        mission_artifact_title(0x14251c138,auStack_2558,uVar32,0);
        iVar44 = iVar50 - iVar36;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b69;
        uVar52 = mission_supplier_140070960(auStack_2558);
        if ((ulonglong)(longlong)(iVar44 + -2) <= uVar52) {
          if (-1 < iVar44 + -3) {
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4b91;
            mission_supplier_1400e2860(auStack_2558,(longlong)iVar44 + -3,0);
          }
          if (3 < iVar44 + -3) {
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ba9;
            puVar22 = (undefined1 *)mission_supplier_1400fcbe0(auStack_2558,(longlong)iVar44 + -6);
            *puVar22 = 0x2e;
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4bbe;
            puVar22 = (undefined1 *)mission_supplier_1400fcbe0(auStack_2558,(longlong)(iVar44 + -5))
            ;
            *puVar22 = 0x2e;
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4bd3;
            puVar22 = (undefined1 *)mission_supplier_1400fcbe0(auStack_2558,(longlong)(iVar44 + -4))
            ;
            *puVar22 = 0x2e;
          }
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4bef;
        FUN_140af3400(0x14266c870,auStack_2558,0,0);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c05;
        mission_supplier_1400bc750(0x14266c870,iVar37 + -1,iVar18 + -0x36);
        if (*(int *)(uVar46 + 0x10) == -1) {
          if (*(int *)(uVar46 + 8) == -1) {
            if (*(int *)(uVar46 + 0x14) == -1) {
              if (*(int *)(uVar46 + 0x18) == -1) {
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4fbd;
                FUN_140069780(auStack_378,"Location unknown");
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4fd7;
                FUN_140af3400(0x14266c870,auStack_378,0,0);
                puVar22 = auStack_378;
              }
              else {
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ee7;
                FUN_140069780(auStack_2578,"Last in ");
                uVar32 = *(undefined4 *)(uVar46 + 0x18);
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f02;
                mission_underground(0x14251c138,auStack_2578,uVar32,0);
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f0e;
                uVar46 = mission_supplier_140070960(auStack_2578);
                if ((ulonglong)(longlong)((iVar50 - iVar36) + -3) <= uVar46) {
                  iVar44 = iVar50 - iVar36;
                  if (-1 < iVar44 + -4) {
                    *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f42;
                    mission_supplier_1400e2860(auStack_2578,(longlong)iVar44 + -4,0);
                  }
                  if (3 < iVar44 + -4) {
                    *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f5a;
                    puVar22 = (undefined1 *)
                              mission_supplier_1400fcbe0(auStack_2578,(longlong)iVar44 + -7);
                    *puVar22 = 0x2e;
                    *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f6f;
                    puVar22 = (undefined1 *)
                              mission_supplier_1400fcbe0(auStack_2578,(longlong)(iVar44 + -6));
                    *puVar22 = 0x2e;
                    *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4f84;
                    puVar22 = (undefined1 *)
                              mission_supplier_1400fcbe0(auStack_2578,(longlong)(iVar44 + -5));
                    *puVar22 = 0x2e;
                  }
                }
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4fa0;
                FUN_140af3400(0x14266c870,auStack_2578,0,0);
                puVar22 = auStack_2578;
              }
            }
            else {
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e03;
              FUN_140069780(auStack_2598,"Last in ");
              uVar32 = *(undefined4 *)(uVar46 + 0x14);
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e1e;
              mission_region(0x14251c138,auStack_2598,uVar32,0);
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e2a;
              uVar46 = mission_supplier_140070960(auStack_2598);
              if ((ulonglong)(longlong)((iVar50 - iVar36) + -3) <= uVar46) {
                iVar44 = iVar50 - iVar36;
                if (-1 < iVar44 + -4) {
                  *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e5e;
                  mission_supplier_1400e2860(auStack_2598,(longlong)iVar44 + -4,0);
                }
                if (3 < iVar44 + -4) {
                  *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e76;
                  puVar22 = (undefined1 *)
                            mission_supplier_1400fcbe0(auStack_2598,(longlong)iVar44 + -7);
                  *puVar22 = 0x2e;
                  *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4e8b;
                  puVar22 = (undefined1 *)
                            mission_supplier_1400fcbe0(auStack_2598,(longlong)(iVar44 + -6));
                  *puVar22 = 0x2e;
                  *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ea0;
                  puVar22 = (undefined1 *)
                            mission_supplier_1400fcbe0(auStack_2598,(longlong)(iVar44 + -5));
                  *puVar22 = 0x2e;
                }
              }
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ebc;
              FUN_140af3400(0x14266c870,auStack_2598,0,0);
              puVar22 = auStack_2598;
            }
          }
          else {
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4d1f;
            FUN_140069780(auStack_25b8,"Last in ");
            uVar32 = *(undefined4 *)(uVar46 + 8);
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4d3a;
            mission_site(0x14251c138,auStack_25b8,uVar32,0);
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4d46;
            uVar46 = mission_supplier_140070960(auStack_25b8);
            if ((ulonglong)(longlong)((iVar50 - iVar36) + -3) <= uVar46) {
              iVar44 = iVar50 - iVar36;
              if (-1 < iVar44 + -4) {
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4d7a;
                mission_supplier_1400e2860(auStack_25b8,(longlong)iVar44 + -4,0);
              }
              if (3 < iVar44 + -4) {
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4d92;
                puVar22 = (undefined1 *)
                          mission_supplier_1400fcbe0(auStack_25b8,(longlong)iVar44 + -7);
                *puVar22 = 0x2e;
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4da7;
                puVar22 = (undefined1 *)
                          mission_supplier_1400fcbe0(auStack_25b8,(longlong)(iVar44 + -6));
                *puVar22 = 0x2e;
                *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4dbc;
                puVar22 = (undefined1 *)
                          mission_supplier_1400fcbe0(auStack_25b8,(longlong)(iVar44 + -5));
                *puVar22 = 0x2e;
              }
            }
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4dd8;
            FUN_140af3400(0x14266c870,auStack_25b8,0,0);
            puVar22 = auStack_25b8;
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c23;
          FUN_140069780(auStack_25d8,"Last held by ");
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c30;
          mission_supplier_1400736b0(auStack_3008);
          *(undefined2 *)(&stack0x00000000 + lVar19) = 0;
          *(undefined2 *)(&stack0xfffffffffffffff8 + lVar19) = 1;
          uVar32 = *(undefined4 *)(uVar46 + 0x10);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c5c;
          mission_holder(0x14251c138,auStack_25d8,uVar32,auStack_3008);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c68;
          uVar46 = mission_supplier_140070960(auStack_25d8);
          if ((ulonglong)(longlong)(iVar44 + -3) <= uVar46) {
            iVar44 = iVar50 - iVar36;
            if (-1 < iVar44 + -4) {
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4c96;
              mission_supplier_1400e2860(auStack_25d8,(longlong)iVar44 + -4,0);
            }
            if (3 < iVar44 + -4) {
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4cae;
              puVar22 = (undefined1 *)mission_supplier_1400fcbe0(auStack_25d8,(longlong)iVar44 + -7)
              ;
              *puVar22 = 0x2e;
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4cc3;
              puVar22 = (undefined1 *)
                        mission_supplier_1400fcbe0(auStack_25d8,(longlong)(iVar44 + -6));
              *puVar22 = 0x2e;
              *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4cd8;
              puVar22 = (undefined1 *)
                        mission_supplier_1400fcbe0(auStack_25d8,(longlong)(iVar44 + -5));
              *puVar22 = 0x2e;
            }
          }
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4cf4;
          FUN_140af3400(0x14266c870,auStack_25d8,0,0);
          puVar22 = auStack_25d8;
        }
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4fe4;
        mission_supplier_140069460(puVar22);
        iVar37 = iVar37 + 3;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d4ffb;
        mission_supplier_140069460(auStack_2558);
        iVar17 = iVar17 + 1;
        lVar56 = *(longlong *)(&stack0x00000050 + lVar19);
      } while (iVar17 < (int)uStack_3910);
      lVar56 = *(longlong *)(&stack0x00000050 + lVar19);
      iVar37 = (int)uStack_38f8;
    }
    puVar39 = puStack_3918;
    if (iVar37 < iVar43) {
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d503e;
      mission_supplier_1400bc990(auStack_3698);
      *(int *)((longlong)aiStackX_8 + lVar19) = iVar37 * 3 + -1;
      *(undefined4 *)(&stack0x00000000 + lVar19) = 2;
      *(int *)(&stack0xfffffffffffffff8 + lVar19) = iVar37;
      uVar32 = *(undefined4 *)(lVar56 + 0x8440);
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d506a;
      mission_supplier_1400bc9b0(auStack_3698,uVar32,0,iVar43 + -1);
      *(undefined4 *)(&stack0x00000000 + lVar19) = 0;
      param_1 = *(longlong *)(&stack0x00000050 + lVar19);
      (&stack0xfffffffffffffff8)[lVar19] = *(undefined1 *)(param_1 + 0x8444);
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d509a;
      FUN_1414284b0(auStack_3698,aiStack_3920[0],iStack_3924,iVar50 + 1);
    }
    else {
      param_1 = *(longlong *)(&stack0x00000050 + lVar19);
    }
    if (puVar39 == (undefined4 *)0x0) {
      if (*(longlong *)(param_1 + 0x8448) != 0) {
        *(undefined8 *)(param_1 + 0x8448) = 0;
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d50cd;
        mission_supplier_140b016a0(0x14266c870,2);
      }
    }
    else {
      iVar36 = (int)uStack_3908;
      iVar18 = (int)uStack_3908 + -0x37;
      iVar44 = (int)uStack_3908 + -2;
      iVar50 = *(int *)(&stack0x00000048 + lVar19);
      uVar46 = (ulonglong)iVar50;
      iVar43 = iVar50;
      uVar52 = uVar46;
      for (iVar37 = iVar50; iVar37 <= iVar50 + 0xd; iVar37 = iVar37 + 1) {
        if (iVar18 <= iVar44) {
          iVar43 = iVar18;
          do {
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5122;
            mission_supplier_1400bc750(0x14266c870,iVar37,iVar43);
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5133;
            FUN_1400bc7c0(0x14266c870,0,0);
            if (uVar46 == (longlong)(int)uVar52) {
              uVar32 = _DAT_14266e194;
              if ((iVar43 != iVar18) && (uVar32 = _DAT_14266e1a0, iVar43 == iVar44)) {
                uVar32 = _DAT_14266e1ac;
              }
            }
            else if (uVar46 == (longlong)(iVar50 + 0xd)) {
              uVar32 = _DAT_14266e19c;
              if ((iVar43 != iVar18) && (uVar32 = _DAT_14266e1a8, iVar43 == iVar44)) {
                uVar32 = _DAT_14266e1b4;
              }
            }
            else {
              uVar32 = _DAT_14266e198;
              if ((iVar43 != iVar18) && (uVar32 = _DAT_14266e1b0, iVar43 != iVar44)) {
                uVar32 = _DAT_14266e1a4;
              }
            }
            *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d51b3;
            mission_supplier_140af4570(0x14266c870,uVar32);
            iVar43 = iVar43 + 1;
          } while (iVar43 <= iVar44);
          uVar52 = (ulonglong)*(uint *)(&stack0x00000048 + lVar19);
        }
        iVar43 = (int)uVar52;
        uVar46 = uVar46 + 1;
      }
      iVar36 = iVar36 + -0x35;
      iVar18 = iVar43 + 1;
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d51f3;
      mission_supplier_1400bc760(0x14266c870,7,0,1);
      lVar56 = *(longlong *)(&stack0x00000050 + lVar19);
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d520b;
      mission_supplier_140070870(lVar56 + 0x8450,auStack_3828);
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d521e;
      mission_supplier_140070860(lVar56 + 0x8450,auStack_3758);
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5235;
      puVar22 = (undefined1 *)mission_supplier_140070450(auStack_3828,&uStack_38e7,auStack_3758);
      uVar15 = *puVar22;
      *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d523f;
      cVar13 = mission_supplier_140066de0(uVar15,0);
      if (cVar13 != '\0') {
        do {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5261;
          mission_supplier_1400bc750(0x14266c870,iVar18,iVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d526d;
          puVar23 = (undefined8 *)mission_supplier_140070440(auStack_3828);
          uVar33 = *puVar23;
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5282;
          FUN_140af3400(0x14266c870,uVar33,0,0);
          if (iVar43 + 8 <= iVar18) break;
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5292;
          mission_supplier_140070430(auStack_3828);
          iVar18 = iVar18 + 1;
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d52ab;
          puVar22 = (undefined1 *)mission_supplier_140070450(auStack_3828,&uStack_38e7,auStack_3758)
          ;
          uVar15 = *puVar22;
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d52b5;
          cVar13 = mission_supplier_140066de0(uVar15,0);
        } while (cVar13 != '\0');
      }
      iVar18 = iVar18 + 2;
      param_1 = *(longlong *)(&stack0x00000050 + lVar19);
      if (*(longlong *)(param_1 + 0x8468) == 0) {
        if (*(longlong *)(param_1 + 0x8470) != 0) {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5352;
          mission_supplier_1400bc760(0x14266c870,6,0,1);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5363;
          mission_supplier_1400bc750(0x14266c870,iVar18,iVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5376;
          FUN_140069780(auStack_318,"Claimed by local ");
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5390;
          FUN_140af3400(0x14266c870,auStack_318,3,0);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d539d;
          mission_supplier_140069460(auStack_318);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d53a9;
          mission_supplier_1400736b0(auStack_35b8);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d53b5;
          mission_supplier_140070cc0(auStack_2298);
          lVar56 = *(longlong *)(param_1 + 0x8470);
          *(undefined2 *)(&stack0x00000000 + lVar19) = 1;
          *(undefined2 *)(&stack0xfffffffffffffff8 + lVar19) = 1;
          uVar32 = *(undefined4 *)(lVar56 + 0xe0);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d53ed;
          mission_holder(0x14251c138,auStack_2298,uVar32,auStack_35b8);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5406;
          FUN_140af3400(0x14266c870,auStack_2298,0,0);
          puVar22 = auStack_2298;
          goto LAB_1401d5477;
        }
        if (*(longlong *)(param_1 + 0x8478) != 0) {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5431;
          mission_supplier_1400bc760(0x14266c870,6,0,1);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5442;
          mission_supplier_1400bc750(0x14266c870,iVar18,iVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5455;
          FUN_140069780(auStack_2f8,"Claimed by local family");
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d546f;
          FUN_140af3400(0x14266c870,auStack_2f8,0,0);
          puVar22 = auStack_2f8;
          goto LAB_1401d5477;
        }
      }
      else {
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d52e2;
        mission_supplier_1400bc760(0x14266c870,6,0,1);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d52f3;
        mission_supplier_1400bc750(0x14266c870,iVar18,iVar36);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5306;
        FUN_140069780(auStack_338,"Claimed by your local government");
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5320;
        FUN_140af3400(0x14266c870,auStack_338,0,0);
        puVar22 = auStack_338;
LAB_1401d5477:
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d547c;
        mission_supplier_140069460(puVar22);
      }
      if ((*(longlong *)(param_1 + 0x1c0) == 0) && (*(longlong *)(param_1 + 0x1b8) == 0)) {
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d54a4;
        mission_supplier_1400bc760(0x14266c870,0,0,1);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d54b8;
        mission_supplier_1400bc750(0x14266c870,iVar50 + 0xc,iVar36);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d54cb;
        FUN_140069780(auStack_2d8,"Cannot order mission without leader");
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d54e5;
        FUN_140af3400(0x14266c870,auStack_2d8,0,0);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d54f2;
        mission_supplier_140069460(auStack_2d8);
      }
      else {
        uVar3 = *(undefined2 *)(param_1 + 0x19c);
        uVar5 = *(undefined2 *)(param_1 + 0x198);
        *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5513;
        iVar18 = mission_supplier_1401bead0(_DAT_14250dfd8,uVar5,uVar3);
        if (iVar18 < 0) {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5588;
          mission_supplier_1400bc760(0x14266c870,0,0,1);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d559c;
          mission_supplier_1400bc750(0x14266c870,iVar50 + 0xc,iVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d55af;
          FUN_140069780(auStack_298,"Inaccessible mission location");
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d55c9;
          FUN_140af3400(0x14266c870,auStack_298,0,0);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d55d6;
          mission_supplier_140069460(auStack_298);
        }
        else {
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d552e;
          mission_supplier_1400bc760(0x14266c870,7,0);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5542;
          mission_supplier_1400bc750(0x14266c870,iVar50 + 0xc,iVar36);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d5555;
          FUN_140069780(auStack_2b8,"Click to recover (creates new mission)");
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d556f;
          FUN_140af3400(0x14266c870,auStack_2b8,0,0);
          *(undefined8 *)((longlong)&uStack_30 + lVar19) = 0x1401d557c;
          mission_supplier_140069460(auStack_2b8);
        }
      }
    }
    break;

/* Original PE owner: reference	artifact-title	0x140bac0c0	0x140bac3d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_artifact_title(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  undefined1 auStack_68 [32];
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418be040 ^ (ulonglong)auStack_68;
  iVar16 = (int)(_DAT_142408608 - _DAT_142408600 >> 3);
  if ((iVar16 != 0) && (param_3 != -1)) {
    iVar10 = 0;
    iVar16 = iVar16 + -1;
    if (-1 < iVar16) {
      do {
        iVar8 = iVar10 + iVar16 >> 1;
        piVar14 = *(int **)(_DAT_142408600 + (longlong)iVar8 * 8);
        if (*piVar14 == param_3) goto LAB_140bac138;
        iVar6 = iVar8 + -1;
        if (*piVar14 < param_3) {
          iVar6 = iVar16;
          iVar10 = iVar8 + 1;
        }
        iVar16 = iVar6;
      } while (iVar10 <= iVar6);
    }
  }
  piVar14 = (int *)0x0;
LAB_140bac138:
  if (piVar14 == (int *)0x0) {
    FUN_140071040(param_2,"an unknown artifact",0x13);
  }
  else {
    piVar1 = piVar14 + 0x24;
    if ((param_4 & 2) != 0) {
      sVar5 = (**(code **)**(undefined8 **)piVar1)();
      if (((sVar5 == 0x59) ||
          (cVar4 = (**(code **)(**(longlong **)piVar1 + 0xe0))(*(longlong **)piVar1,0x14),
          cVar4 != '\0')) || (sVar5 = (**(code **)**(undefined8 **)piVar1)(), sVar5 == 0x57)) {
        pcVar11 = "[LPAGE:BOOK:";
        uVar15 = 0xc;
      }
      else {
        pcVar11 = "[LPAGE:ARTIFACT:";
        uVar15 = 0x10;
      }
      FUN_140071040(param_2,pcVar11,uVar15);
      FUN_140545610(*piVar14,param_2);
      FUN_140071040(param_2,"]",1);
    }
    uStack_40 = 0;
    lStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    mission_english_name(piVar14 + 2,&pppuStack_48,1,0);
    ppppuVar7 = (undefined8 ****)pppuStack_48;
    if (lStack_38 == 0) {
      sVar5 = (**(code **)**(undefined8 **)piVar1)();
      if (((sVar5 == 0x59) ||
          (cVar4 = (**(code **)(**(longlong **)piVar1 + 0xe0))(*(longlong **)piVar1,0x14),
          cVar4 != '\0')) || (sVar5 = (**(code **)**(undefined8 **)piVar1)(), sVar5 == 0x57)) {
        uVar13 = uStack_30;
        if (uStack_30 < 8) {
          uVar12 = 0x7fffffffffffffff;
          if (uStack_30 <= 0x7fffffffffffffff - (uStack_30 >> 1)) {
            uVar2 = (uStack_30 >> 1) + uStack_30;
            uVar12 = 0xf;
            if (0xf < uVar2) {
              uVar12 = uVar2;
            }
          }
          ppppuVar7 = (undefined8 ****)FUN_140071e00(uVar12 + 1);
          lStack_38 = 8;
          *ppppuVar7 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar7 + 1) = 0;
          uStack_30 = uVar12;
          if (0xf < uVar13) {
            uVar12 = uVar13 + 1;
            ppppuVar9 = (undefined8 ****)pppuStack_48;
            if (0xfff < uVar12) {
              uVar12 = uVar13 + 0x28;
              ppppuVar9 = (undefined8 ****)pppuStack_48[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar9))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            mission_supplier_1415530d0(ppppuVar9,uVar12);
          }
        }
        else {
          ppppuVar7 = &pppuStack_48;
          if (0xf < uStack_30) {
            ppppuVar7 = (undefined8 ****)pppuStack_48;
          }
          lStack_38 = 8;
          *ppppuVar7 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar7 + 1) = 0;
          ppppuVar7 = (undefined8 ****)pppuStack_48;
        }
      }
      else {
        FUN_140c7d140(*(undefined8 *)piVar1,&pppuStack_48,0,1);
        ppppuVar7 = (undefined8 ****)pppuStack_48;
      }
    }
    pppuStack_48 = ppppuVar7;
    ppppuVar7 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar7 = (undefined8 ****)pppuStack_48;
    }
    FUN_140071040(param_2,ppppuVar7,lStack_38);
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_30) {
      uVar13 = uStack_30 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar13) {
        uVar13 = uStack_30 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      mission_supplier_1415530d0(ppppuVar7,uVar13);
    }
  }
  FUN_1415530b0(uStack_28 ^ (ulonglong)auStack_68);
  return;
}

/* Original PE owner: reference	holder	0x140baabd0	0x140bab5e7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_holder(undefined8 param_1,undefined8 param_2,uint param_3,byte *param_4,short param_5,
                   short param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *****pppppuVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [32];
  char cStack_e8;
  uint uStack_e4;
  byte *pbStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418be040 ^ (ulonglong)auStack_108;
  cStack_e8 = '\0';
  uStack_e4 = param_3;
  pbStack_e0 = param_4;
  lVar7 = FUN_1400693f0(param_1,param_3);
  if (lVar7 == 0) {
    uVar14 = 0x13;
    pcVar10 = "an unknown creature";
LAB_140bab5a3:
    FUN_140071040(param_2,pcVar10,uVar14);
LAB_140bab5ab:
    if (param_5 != 2) goto LAB_140bab5c7;
    pcVar10 = "\'s";
    uVar14 = 2;
  }
  else {
    if (*(longlong *)(param_4 + 8) == 0) {
      uVar14 = 1;
      if ((*param_4 & 2) != 0) {
        FUN_140071040(param_2,"[LPAGE:HF:",10);
        FUN_140545610(*(undefined4 *)(lVar7 + 0xe0),param_2);
        FUN_140071040(param_2,"]",1);
      }
      bVar6 = true;
      if ((0 < *(int *)(lVar7 + 0xd0)) &&
         (((**(byte **)(lVar7 + 200) & 4) != 0 ||
          (bVar6 = true, (**(byte **)(lVar7 + 200) & 8) != 0)))) {
        bVar6 = false;
      }
      lVar9 = FUN_1400693f0(param_1,*(undefined4 *)(param_4 + 0x20));
      lVar8 = FUN_1400693f0(param_1,*(undefined4 *)(param_4 + 0x24));
      if (((lVar8 != 0) || (lVar8 = lVar9, lVar9 != 0)) &&
         (*(short *)(lVar7 + 2) == *(short *)(lVar8 + 2))) {
        bVar6 = false;
      }
      if (*(longlong *)(lVar7 + 0x130) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + 0x48);
        if (lVar8 != 0) {
          if (*(longlong *)(lVar8 + 0x160) != 0) {
            bVar6 = true;
          }
          if (*(char *)(lVar8 + 0x88) != '\0') {
            bVar6 = true;
          }
        }
      }
      if ((*(short *)(lVar7 + 2) == -1) || (param_6 == 1)) {
        bVar6 = false;
      }
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0xf;
      ppppuStack_b8 = (undefined8 *****)0x0;
      uVar11 = (ulonglong)uStack_e4;
      if (*(uint *)(pbStack_e0 + 0x24) == uStack_e4) {
        if (param_5 == 0) {
LAB_140baaf8c:
          ppppuStack_b8 = (undefined8 *****)0x49;
LAB_140baaf92:
          uStack_a8 = uVar14;
          FUN_140071040(param_2,&ppppuStack_b8,uVar14);
        }
        else if (param_5 == 1) {
          uStack_a8 = 2;
          ppppuStack_b8 = (undefined8 *****)0x656d;
          FUN_140071040(param_2,&ppppuStack_b8,2);
        }
        else {
          if (param_5 != 2) {
            if (param_5 != 3) goto LAB_140baaf8c;
            uVar14 = 6;
            ppppuStack_b8 = (undefined8 *****)0x666c6573796d;
            goto LAB_140baaf92;
          }
          uStack_a8 = 2;
          ppppuStack_b8 = (undefined8 *****)0x796d;
          cStack_e8 = '\x01';
          FUN_140071040(param_2,&ppppuStack_b8,2);
        }
      }
      else {
        uVar3 = *(uint *)(pbStack_e0 + 0x20);
        if (*(char *)(lVar7 + 0xaa) == '\0') {
          uVar14 = 4;
          if (uVar3 != uStack_e4) {
            uVar14 = 2;
          }
          pcVar10 = "the ";
          if (uVar3 != uStack_e4) {
            pcVar10 = "a ";
          }
          FUN_140071040(param_2,pcVar10,uVar14);
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
            FUN_140071040(param_2,"zombie ",7);
          }
          if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
             ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
            FUN_140071040(param_2,"ghostly ",8);
          }
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0xf;
          ppppuStack_d8 = (undefined8 *****)0x0;
          FUN_140abd670(*(undefined2 *)(lVar7 + 2),&ppppuStack_d8,0,*(undefined2 *)(lVar7 + 4));
          pppppuVar12 = &ppppuStack_d8;
          if (0xf < uStack_c0) {
            pppppuVar12 = (undefined8 *****)ppppuStack_d8;
          }
          FUN_140071040(param_2,pppppuVar12,uStack_c8);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
            FUN_140071040(param_2," ",1);
            plVar13 = (longlong *)(lVar8 + 0x90);
            if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
              plVar13 = (longlong *)*plVar13;
            }
            FUN_140071040(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
          }
          FUN_140070e80(&ppppuStack_d8);
          goto LAB_140bab513;
        }
        if (((uVar3 != uStack_e4) && (bVar6)) && (param_6 == 0)) {
          FUN_140071040(param_2,"the ",4);
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
            FUN_140071040(param_2,"zombie ",7);
          }
          if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
             ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
            FUN_140071040(param_2,"ghostly ",8);
          }
          uStack_70 = 0;
          uStack_60 = 0xf;
          sVar1 = *(short *)(lVar7 + 4);
          sVar2 = *(short *)(lVar7 + 2);
          uVar11 = (ulonglong)sVar2;
          lStack_68 = 0;
          ppppuStack_78 = (undefined8 *****)0x0;
          if (sVar1 == -1) {
            if (-1 < sVar2) goto LAB_140bab0ec;
          }
          else if (-1 < sVar2) {
            if (((uVar11 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
               (lVar9 = *(longlong *)(_DAT_14250eee8 + uVar11 * 8),
               lVar4 = *(longlong *)(lVar9 + 0x178),
               (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar4 >> 3)))
            {
              lVar9 = *(longlong *)(lVar4 + (longlong)sVar1 * 8);
              pppppuVar12 = (undefined8 *****)(lVar9 + 0x20);
              if (&ppppuStack_78 != pppppuVar12) {
                if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
                  pppppuVar12 = (undefined8 *****)*pppppuVar12;
                }
                FUN_140070f00(&ppppuStack_78,pppppuVar12,*(undefined8 *)(lVar9 + 0x30));
                if (lStack_68 != 0) goto LAB_140bab132;
              }
            }
LAB_140bab0ec:
            if (uVar11 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
              lVar9 = *(longlong *)(_DAT_14250eee8 + uVar11 * 8);
              pppppuVar12 = (undefined8 *****)(lVar9 + 0x20);
              if (&ppppuStack_78 != pppppuVar12) {
                if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
                  pppppuVar12 = (undefined8 *****)*pppppuVar12;
                }
                FUN_140070f00(&ppppuStack_78,pppppuVar12,*(undefined8 *)(lVar9 + 0x30));
              }
            }
          }
LAB_140bab132:
          pppppuVar12 = &ppppuStack_78;
          if (0xf < uStack_60) {
            pppppuVar12 = (undefined8 *****)ppppuStack_78;
          }
          FUN_140071040(param_2,pppppuVar12,lStack_68);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
            FUN_140071040(param_2," ",1);
            plVar13 = (longlong *)(lVar8 + 0x90);
            if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
              plVar13 = (longlong *)*plVar13;
            }
            FUN_140071040(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
          }
          FUN_140071040(param_2," ",1);
          FUN_140070e80(&ppppuStack_78);
          uVar11 = (ulonglong)uStack_e4;
        }
        mission_english_name
                  (lVar7 + 0x38,&ppppuStack_b8,1,
                   CONCAT71((int7)(uVar11 >> 8),*(int *)(pbStack_e0 + 0x20) == (int)uVar11));
        pppppuVar12 = &ppppuStack_b8;
        if (0xf < uStack_a0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_b8;
        }
        FUN_140071040(param_2,pppppuVar12,uStack_a8);
        if (((*(uint *)(pbStack_e0 + 0x20) == uStack_e4) || (!bVar6)) || (param_6 != 2))
        goto LAB_140bab513;
        FUN_140071040(param_2," the ",5);
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
          FUN_140071040(param_2,"zombie ",7);
        }
        if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
           ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
          FUN_140071040(param_2,"ghostly ",8);
        }
        uStack_90 = 0;
        uStack_80 = 0xf;
        sVar1 = *(short *)(lVar7 + 4);
        sVar2 = *(short *)(lVar7 + 2);
        uVar11 = (ulonglong)sVar2;
        lStack_88 = 0;
        ppppuStack_98 = (undefined8 *****)0x0;
        if (sVar1 == -1) {
          if (-1 < sVar2) goto LAB_140bab31d;
        }
        else if (-1 < sVar2) {
          if (((uVar11 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) && (-1 < sVar1)) &&
             (lVar7 = *(longlong *)(_DAT_14250eee8 + uVar11 * 8),
             lVar9 = *(longlong *)(lVar7 + 0x178),
             (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar7 + 0x180) - lVar9 >> 3))) {
            lVar7 = *(longlong *)(lVar9 + (longlong)sVar1 * 8);
            pppppuVar12 = (undefined8 *****)(lVar7 + 0x20);
            if (&ppppuStack_98 != pppppuVar12) {
              if (0xf < *(ulonglong *)(lVar7 + 0x38)) {
                pppppuVar12 = (undefined8 *****)*pppppuVar12;
              }
              FUN_140070f00(&ppppuStack_98,pppppuVar12,*(undefined8 *)(lVar7 + 0x30));
              if (lStack_88 != 0) goto LAB_140bab363;
            }
          }
LAB_140bab31d:
          if (uVar11 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3)) {
            lVar7 = *(longlong *)(_DAT_14250eee8 + uVar11 * 8);
            pppppuVar12 = (undefined8 *****)(lVar7 + 0x20);
            if (&ppppuStack_98 != pppppuVar12) {
              if (0xf < *(ulonglong *)(lVar7 + 0x38)) {
                pppppuVar12 = (undefined8 *****)*pppppuVar12;
              }
              FUN_140070f00(&ppppuStack_98,pppppuVar12,*(undefined8 *)(lVar7 + 0x30));
            }
          }
        }
LAB_140bab363:
        pppppuVar12 = &ppppuStack_98;
        if (0xf < uStack_80) {
          pppppuVar12 = (undefined8 *****)ppppuStack_98;
        }
        FUN_140071040(param_2,pppppuVar12,lStack_88);
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
          FUN_140071040(param_2," ",1);
          plVar13 = (longlong *)(lVar8 + 0x90);
          if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
            plVar13 = (longlong *)*plVar13;
          }
          FUN_140071040(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
        }
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          pppppuVar12 = (undefined8 *****)ppppuStack_98;
          if (0xfff < uVar11) {
            uVar11 = uStack_80 + 0x28;
            pppppuVar12 = (undefined8 *****)ppppuStack_98[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)pppppuVar12))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          mission_supplier_1415530d0(pppppuVar12,uVar11);
        }
      }
LAB_140bab513:
      if ((param_5 == 2) && (cStack_e8 == '\0')) {
        FUN_140071040(param_2,"\'s",2);
      }
      if ((*pbStack_e0 & 2) != 0) {
        FUN_140071040(param_2,"[/LPAGE]",8);
      }
      if (0xf < uStack_a0) {
        uVar11 = uStack_a0 + 1;
        pppppuVar12 = (undefined8 *****)ppppuStack_b8;
        if (0xfff < uVar11) {
          uVar11 = uStack_a0 + 0x28;
          pppppuVar12 = (undefined8 *****)ppppuStack_b8[-1];
          if (0x1f < (ulonglong)((longlong)ppppuStack_b8 + (-8 - (longlong)pppppuVar12))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        mission_supplier_1415530d0(pppppuVar12,uVar11);
      }
      goto LAB_140bab5c7;
    }
    lVar8 = *(longlong *)(param_4 + 0x10);
    if (lVar8 == 0) {
LAB_140baac6d:
      lVar8 = FUN_1400bb3f0(*(undefined4 *)(lVar7 + 0xe0));
      if (lVar8 == 0) {
LAB_140baadce:
        pcVar10 = "an unidentified creature";
        uVar14 = 0x18;
        goto LAB_140bab5a3;
      }
      if ((*(byte *)(lVar8 + 4) & 8) == 0) {
        if (*(longlong *)(lVar8 + 0x88) - (longlong)*(undefined4 **)(lVar8 + 0x80) >> 2 == 0)
        goto LAB_140baadce;
        lVar7 = FUN_140073ba0(0x14250a168,**(undefined4 **)(lVar8 + 0x80));
        if ((lVar7 == 0) || (*(char *)(lVar7 + 0x7a) == '\0')) goto LAB_140baad2d;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 *****)0x0;
        mission_english_name(lVar7 + 8,&ppppuStack_d8,1,0);
        pppppuVar12 = &ppppuStack_d8;
        if (0xf < uStack_c0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
        }
        FUN_140071040(param_2,pppppuVar12,uStack_c8);
        FUN_140070e80(&ppppuStack_d8);
      }
      else {
        if (*(char *)(lVar7 + 0xaa) == '\0') {
LAB_140baad2d:
          uVar14 = 8;
          pcVar10 = "Nameless";
          goto LAB_140bab5a3;
        }
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 *****)0x0;
        mission_english_name(lVar7 + 0x38,&ppppuStack_d8,1,0);
        pppppuVar12 = &ppppuStack_d8;
        if (0xf < uStack_c0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
        }
        FUN_140071040(param_2,pppppuVar12,uStack_c8);
        if (0xf < uStack_c0) {
          uVar11 = uStack_c0 + 1;
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
          if (0xfff < uVar11) {
            uVar11 = uStack_c0 + 0x28;
            pppppuVar12 = (undefined8 *****)ppppuStack_d8[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar12))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          mission_supplier_1415530d0(pppppuVar12,uVar11);
        }
      }
      goto LAB_140bab5ab;
    }
    if (*(int *)(lVar8 + 0x20) == *(int *)(lVar7 + 0xe0)) {
      uVar14 = 0xc;
      pcVar10 = "interrogator";
    }
    else {
      if (*(int *)(lVar8 + 0x24) != *(int *)(lVar7 + 0xe0)) goto LAB_140baac6d;
      uVar14 = 7;
      pcVar10 = "subject";
    }
  }
  FUN_140071040(param_2,pcVar10,uVar14);
LAB_140bab5c7:
  FUN_1415530b0(uStack_58 ^ (ulonglong)auStack_108);
  return;
}

/* Original PE owner: reference	site	0x140bab5f0	0x140bab74a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_site(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *****pppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ****ppppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14007f150(_DAT_14250dfd8,param_3);
  if (lVar2 == 0) {
    FUN_140071040(param_2,"an unknown site",0xf);
  }
  else {
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[LPAGE:SITE:",0xc);
      FUN_140545610(*(undefined4 *)(lVar2 + 0x88),param_2);
      FUN_140071040(param_2,"]",1);
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    ppppuStack_38 = (undefined8 *****)0x0;
    mission_english_name(lVar2,&ppppuStack_38,1,0);
    pppppuVar3 = &ppppuStack_38;
    if (0xf < uStack_20) {
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
    }
    FUN_140071040(param_2,pppppuVar3,uStack_28);
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        pppppuVar3 = (undefined8 *****)ppppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_38 + (-8 - (longlong)pppppuVar3))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      mission_supplier_1415530d0(pppppuVar3,uVar4);
    }
  }
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}

/* Original PE owner: reference	region	0x140bac700	0x140bac857 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_region(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *****pppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ****ppppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1400bd6b0(_DAT_14250dfd8,param_3);
  if (lVar2 == 0) {
    FUN_140071040(param_2,"an unknown region",0x11);
  }
  else {
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[LPAGE:SR:",10);
      FUN_140545610(*(undefined4 *)(lVar2 + 0x78),param_2);
      FUN_140071040(param_2,"]",1);
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    ppppuStack_38 = (undefined8 *****)0x0;
    mission_english_name(lVar2,&ppppuStack_38,1,0);
    pppppuVar3 = &ppppuStack_38;
    if (0xf < uStack_20) {
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
    }
    FUN_140071040(param_2,pppppuVar3,uStack_28);
    if ((param_4 & 2) != 0) {
      FUN_140071040(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        pppppuVar3 = (undefined8 *****)ppppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_38 + (-8 - (longlong)pppppuVar3))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      mission_supplier_1415530d0(pppppuVar3,uVar4);
    }
  }
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}

/* Original PE owner: reference	underground	0x140bac600	0x140bac6f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_underground(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  short *psVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  psVar2 = (short *)FUN_1400e2b90(param_3,_DAT_14250dfd8 + 0x250);
  if (psVar2 == (short *)0x0) {
    uVar4 = 0x1d;
    pcVar3 = "an unknown underground region";
    goto LAB_140bac6de;
  }
  if ((param_4 & 2) != 0) {
    FUN_140071040(param_2,"[LPAGE:FL:",10);
    FUN_140545610(*(undefined4 *)(psVar2 + 0x40),param_2);
    FUN_140071040(param_2,"]",1);
  }
  if ((char)psVar2[0x3d] == '\0') {
    sVar1 = *psVar2;
    if (sVar1 == 0) {
      uVar4 = 0x17;
      pcVar3 = "the depths of the world";
    }
    else if (sVar1 == 1) {
      uVar4 = 0xd;
      pcVar3 = "the magma sea";
    }
    else {
      if (sVar1 != 2) goto LAB_140bac6be;
      uVar4 = 0xe;
      pcVar3 = "the Underworld";
    }
    FUN_140071040(param_2,pcVar3,uVar4);
  }
LAB_140bac6be:
  if ((param_4 & 2) == 0) {
    return;
  }
  uVar4 = 8;
  pcVar3 = "[/LPAGE]";
LAB_140bac6de:
  FUN_140071040(param_2,pcVar3,uVar4);
  return;
}

/* Original PE owner: reference	english-name	0x140aae180	0x140aae942 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_english_name(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  int iStack_a8;
  char cStack_98;
  char cStack_97;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  cStack_98 = param_3;
  cStack_97 = param_4;
  if (*(char *)((longlong)param_1 + 0x72) == '\0') goto LAB_140aae90f;
  if (_DAT_1418be234 < 0xb) {
    uVar11 = *(uint *)((longlong)(int)_DAT_1418be234 * 4 + 0x1423b2f60);
  }
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  if ((param_1[6] == 0) || ((uVar11 & 0xfffffffd) != 0)) {
    pppuStack_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar7 = param_1[2];
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (0x7fffffffffffffff < uVar7) goto LAB_140aae93c;
    if (uVar7 < 0x10) {
      uVar9 = 0xf;
      uStack_70 = 0xf;
      ppppuVar5 = (undefined8 ****)*puVar4;
      uStack_80 = puVar4[1];
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
    }
    else {
      uVar9 = uVar7 | 0xf;
      if (uVar9 < 0x8000000000000000) {
        if (uVar9 < 0x16) {
          uVar9 = 0x16;
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
      ppppuVar5 = (undefined8 ****)FUN_140071e00(uVar9 + 1);
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
      uStack_70 = uVar9;
      mission_supplier_14155454e(ppppuVar5,puVar4,uVar7 + 1);
    }
    if (cStack_98 != '\0') {
      FUN_1405468a0(&pppuStack_88);
      uVar9 = uStack_70;
      uVar7 = uStack_78;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
    }
    ppppuVar6 = &pppuStack_88;
    if (0xf < uVar9) {
      ppppuVar6 = ppppuVar5;
    }
    FUN_140071040(param_2,ppppuVar6,uVar7);
    lVar1 = param_1[2];
    FUN_140070e80(&pppuStack_88);
    bVar13 = lVar1 != 0;
    param_4 = cStack_97;
    param_3 = cStack_98;
  }
  else {
    FUN_1400bb1b0(param_2,0x60);
    puVar4 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140071040(param_2,puVar4,param_1[6]);
    FUN_1400bb1b0(param_2,0x27);
    bVar13 = true;
  }
  if (param_1[6] != 0) {
    if (uVar11 == 1) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      FUN_1400bb1b0(param_2,0x60);
      puVar4 = param_1 + 4;
      if (0xf < (ulonglong)param_1[7]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_140071040(param_2,puVar4,param_1[6]);
      FUN_1400bb1b0(param_2,0x27);
      bVar13 = true;
    }
    if ((param_1[6] != 0) && (uVar11 == 2)) goto LAB_140aae90f;
  }
  if (((*(int *)(param_1 + 8) != -1) || (*(int *)((longlong)param_1 + 0x44) != -1)) &&
     ((!bVar13 || (param_4 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5c);
    uVar14 = mission_word_form(0,*(int *)(param_1 + 8),&pppuStack_88);
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5e);
    mission_word_form(uVar14,*(undefined4 *)((longlong)param_1 + 0x44),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    if (0xf < uStack_70) {
      uVar7 = uStack_70 + 1;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
      if (0xfff < uVar7) {
        uVar7 = uStack_70 + 0x28;
        ppppuVar5 = (undefined8 ****)pppuStack_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar5))
           ) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      mission_supplier_1415530d0(ppppuVar5,uVar7);
    }
  }
  cVar12 = cStack_98;
  if ((((*(int *)((longlong)param_1 + 0x54) != -1) || (*(int *)(param_1 + 9) != -1)) ||
      (*(int *)((longlong)param_1 + 0x4c) != -1)) && ((!bVar13 || (param_4 == '\0')))) {
    bVar3 = false;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xc);
    uVar14 = mission_word_form(0,*(undefined4 *)(param_1 + 9),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if ((param_2[2] == 0) && (param_3 == '\x01')) {
        FUN_140071040(param_2,"The ",4);
LAB_140aae52f:
        FUN_1405468a0(&pppuStack_88);
      }
      else {
        FUN_140071040(param_2,"the ",4);
        if (param_3 != '\0') goto LAB_140aae52f;
      }
      bVar3 = true;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x62);
    uVar14 = mission_word_form(uVar14,*(undefined4 *)((longlong)param_1 + 0x4c),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140071040(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 100);
    uVar14 = mission_word_form(uVar14,*(undefined4 *)(param_1 + 10),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140071040(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      uVar7 = uStack_78;
      if (uStack_78 == 0x7fffffffffffffff) {
        FUN_140066ec0();
LAB_140aae93c:
        FUN_140066ec0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pppuStack_90 = &pppuStack_88;
      if (0xf < uStack_70) {
        pppuStack_90 = pppuStack_88;
      }
      pppuStack_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      uVar9 = uStack_78 + 1;
      uVar10 = 0xf;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uVar9) {
        uVar10 = uVar9 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        ppppuVar5 = (undefined8 ****)FUN_140071e00(uVar10 + 1);
        pppuStack_68 = ppppuVar5;
      }
      uStack_58 = uVar9;
      uStack_50 = uVar10;
      mission_supplier_14155454e(ppppuVar5,pppuStack_90,uVar7);
      *(undefined1 *)((longlong)ppppuVar5 + uVar7) = 0x2d;
      *(undefined1 *)((longlong)ppppuVar5 + uVar9) = 0;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar5 = (undefined8 ****)pppuStack_68;
      }
      uVar14 = FUN_140071040(param_2,ppppuVar5,uStack_58);
      if (0xf < uStack_50) {
        uVar7 = uStack_50 + 1;
        ppppuVar5 = (undefined8 ****)pppuStack_68;
        if (0xfff < uVar7) {
          uVar7 = uStack_50 + 0x28;
          ppppuVar5 = (undefined8 ****)pppuStack_68[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar5))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar14 = mission_supplier_1415530d0(ppppuVar5,uVar7);
      }
      bVar13 = false;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x66);
    mission_word_form(uVar14,*(undefined4 *)((longlong)param_1 + 0x54),&pppuStack_88);
    cVar12 = cStack_98;
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      cVar12 = cStack_98;
      if (bVar3) {
LAB_140aae811:
        if (cVar12 != '\0') goto LAB_140aae816;
      }
      else {
        if ((param_2[2] != 0) || (cStack_98 != '\x01')) {
          FUN_140071040(param_2,"the ",4);
          goto LAB_140aae811;
        }
        FUN_140071040(param_2,"The ",4);
LAB_140aae816:
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    FUN_140070e80(&pppuStack_88);
  }
  if ((*(int *)(param_1 + 0xb) != -1) && ((!bVar13 || (cStack_97 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xd);
    mission_word_form(0,*(int *)(param_1 + 0xb),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140071040(param_2," ",1);
      }
      pcVar8 = "Of ";
      if (param_2[2] != 0) {
        pcVar8 = "of ";
      }
      FUN_140071040(param_2,pcVar8,3);
      if (cVar12 != '\0') {
        FUN_1405468a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140071040(param_2,ppppuVar5,uStack_78);
    }
    FUN_140070e80(&pppuStack_88);
  }
LAB_140aae90f:
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}

/* Original PE owner: reference	word-form	0x140d44840	0x140d4490c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
mission_word_form(undefined8 param_1,int param_2,longlong *param_3,undefined8 param_4,uint param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *in_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (-1 < param_2) {
    plVar9 = (longlong *)(longlong)param_2;
    in_RAX = (longlong *)(_DAT_14250fbf8 - _DAT_14250fbf0 >> 3);
    if ((plVar9 < in_RAX) && (in_RAX = (longlong *)(longlong)(int)param_5, param_5 < 9)) {
                    /* WARNING: Switch is manually overridden */
      switch(in_RAX) {
      case (longlong *)0x0:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x20);
        break;
      case (longlong *)0x1:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x40);
        break;
      case (longlong *)0x2:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x60);
        break;
      case (longlong *)0x3:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x80);
        break;
      case (longlong *)0x4:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0xa0);
        break;
      case (longlong *)0x5:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0xc0);
        break;
      case (longlong *)0x6:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0xe0);
        break;
      case (longlong *)0x7:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x100);
        break;
      case (longlong *)0x8:
        puVar10 = (undefined8 *)(*(longlong *)(_DAT_14250fbf0 + (longlong)plVar9 * 8) + 0x120);
      }
      uVar5 = puVar10[2];
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      uVar3 = param_3[3];
      lVar12 = param_3[2];
      if (uVar3 - lVar12 < uVar5) {
        if (0x7fffffffffffffffU - lVar12 < uVar5) {
          FUN_140066ec0();
          pcVar6 = (code *)swi(3);
          plVar9 = (longlong *)(*pcVar6)();
          return plVar9;
        }
        uVar8 = lVar12 + uVar5 | 0xf;
        uVar11 = 0x7fffffffffffffff;
        if (((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
           (uVar1 = (uVar3 >> 1) + uVar3, uVar11 = uVar8, uVar8 < uVar1)) {
          uVar11 = uVar1;
        }
        lVar7 = FUN_140071e00(uVar11 + 1);
        param_3[2] = lVar12 + uVar5;
        param_3[3] = uVar11;
        lVar2 = lVar12 + lVar7;
        if (uVar3 < 0x10) {
          mission_supplier_14155454e(lVar7,param_3,lVar12);
          mission_supplier_14155454e(lVar2,puVar10,uVar5);
          *(undefined1 *)(lVar2 + uVar5) = 0;
        }
        else {
          lVar4 = *param_3;
          mission_supplier_14155454e(lVar7,lVar4,lVar12);
          mission_supplier_14155454e(lVar2,puVar10,uVar5);
          *(undefined1 *)(lVar2 + uVar5) = 0;
          lVar12 = lVar4;
          if (0xfff < uVar3 + 1) {
            lVar12 = *(longlong *)(lVar4 + -8);
            if (0x1f < (lVar4 - lVar12) - 8U) {
              _invalid_parameter_noinfo_noreturn(lVar12,uVar3 + 0x28);
              pcVar6 = (code *)swi(3);
              plVar9 = (longlong *)(*pcVar6)();
              return plVar9;
            }
          }
          mission_supplier_1415530d0(lVar12);
        }
        *param_3 = lVar7;
      }
      else {
        param_3[2] = lVar12 + uVar5;
        plVar9 = param_3;
        if (0xf < uVar3) {
          plVar9 = (longlong *)*param_3;
        }
        mission_supplier_14155486a((longlong)plVar9 + lVar12);
        *(undefined1 *)((longlong)plVar9 + lVar12 + uVar5) = 0;
      }
      return param_3;
    }
  }
  return in_RAX;
}

/* Original PE owner: reference	popup	0x1401dcd60	0x1401dd3aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mission_popup(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 ***pppuVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_f8 [32];
  undefined1 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_c8;
  undefined8 **ppuStack_c0;
  longlong lStack_b8;
  undefined8 **ppuStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uVar13;
  ulonglong uVar24;
  
  uStack_48 = _DAT_1418be040 ^ (ulonglong)auStack_f8;
  lVar25 = param_1 + 0x8450;
  lStack_b8 = param_1;
  lStack_90 = param_3;
  FUN_1400bcfe0(lVar25);
  uVar21 = 0;
  *(undefined8 *)(param_1 + 0x8468) = 0;
  *(undefined8 *)(param_1 + 0x8470) = 0;
  *(undefined8 *)(param_1 + 0x8478) = 0;
  puVar8 = *(undefined8 **)(_DAT_1423bc668 + 0x1320);
  for (puVar6 = *(undefined8 **)(_DAT_1423bc668 + 0x1318); puVar6 < puVar8; puVar6 = puVar6 + 1) {
    piVar2 = (int *)*puVar6;
    if ((piVar2[5] == -1) && (*piVar2 == *param_2)) {
      *(int **)(param_1 + 0x8468) = piVar2;
    }
  }
  plVar3 = *(longlong **)(_DAT_1423bc668 + 0x1458);
  for (plVar16 = *(longlong **)(_DAT_1423bc668 + 0x1450); plVar16 < plVar3; plVar16 = plVar16 + 1) {
    lVar26 = *plVar16;
    lVar7 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x130);
    if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x60), lVar7 != 0)) {
      puVar8 = *(undefined8 **)(lVar7 + 0x68);
      for (puVar6 = *(undefined8 **)(lVar7 + 0x60); puVar6 < puVar8; puVar6 = puVar6 + 1) {
        if ((((int *)*puVar6)[4] == -1) && (*(int *)*puVar6 == *param_2)) {
          *(undefined8 *)(param_1 + 0x8470) = *(undefined8 *)(lVar26 + 0x10);
        }
      }
      iVar17 = *(int *)(*(longlong *)(lVar26 + 0x10) + 0xc0);
      if ((iVar17 != -1) && (lVar7 = FUN_1400bb3f0(iVar17,0x1425284e8), lVar7 != 0)) {
        puVar8 = *(undefined8 **)(lVar7 + 0x10);
        for (puVar6 = *(undefined8 **)(lVar7 + 8); puVar6 < puVar8; puVar6 = puVar6 + 1) {
          if ((((int *)*puVar6)[4] == -1) && (*(int *)*puVar6 == *param_2)) {
            *(undefined8 *)(param_1 + 0x8478) = *(undefined8 *)(lVar26 + 0x10);
          }
        }
      }
    }
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  ppuStack_68 = (undefined8 ***)0x0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  FUN_140c8ccf0(*(undefined8 *)(param_2 + 0x24),&ppuStack_68,1);
  plStack_a8 = (longlong *)0x0;
  lStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_c0 = (undefined8 **)FUN_1415530e0(0x20);
  *ppuStack_c0 = (undefined8 **)0x0;
  ppuStack_c0[1] = (undefined8 **)0x0;
  ppuStack_c0[2] = (undefined8 **)0x0;
  ppuStack_c0[3] = (undefined8 **)0xf;
  *(undefined1 *)ppuStack_c0 = 0;
  if ((undefined8 ***)ppuStack_c0 != &ppuStack_68) {
    pppuVar9 = &ppuStack_68;
    if (0xf < uStack_50) {
      pppuVar9 = (undefined8 ***)ppuStack_68;
    }
    FUN_140070f00(ppuStack_c0,pppuVar9,uStack_58);
  }
  FUN_1400bc360(&plStack_a8,0,&ppuStack_c0);
  bVar4 = false;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  ppuStack_88 = (undefined8 ***)0x0;
  uStack_c8 = 0;
  ppuStack_c0 = (undefined8 **)(lStack_a0 - (longlong)plStack_a8 >> 3);
  uVar13 = uVar21;
  uVar20 = uVar21;
  lVar26 = param_1;
  plVar16 = plStack_a8;
  if (ppuStack_c0 != (undefined8 **)0x0) {
    do {
      puVar6 = (undefined8 *)*plVar16;
      uVar19 = uVar21;
      uVar24 = uVar21;
      uVar22 = (uint)uVar13;
      if (puVar6[2] != 0) {
        do {
          uVar22 = (uint)uVar24;
          uVar23 = uVar22;
          if (bVar4) {
            puVar8 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar8 = (undefined8 *)*puVar6;
            }
            if (*(char *)(uVar19 + (longlong)puVar8) != ' ') {
              bVar4 = false;
              goto LAB_1401dcfd2;
            }
          }
          else {
LAB_1401dcfd2:
            if (0xf < (ulonglong)puVar6[3]) {
              puVar6 = (undefined8 *)*puVar6;
            }
            FUN_1400bb1b0(&ppuStack_88,*(undefined1 *)(uVar19 + (longlong)puVar6));
            uVar20 = uStack_78;
            if (0x35 < uStack_78) {
              puVar6 = (undefined8 *)*plVar16;
              uVar13 = uVar21;
              uVar20 = uVar21;
              do {
                uVar23 = (int)uVar24 - 1;
                uVar24 = (ulonglong)uVar23;
                uVar19 = uVar19 - 1;
                uVar11 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar11;
                uVar20 = uVar20 + 1;
                puVar8 = puVar6;
                if (0xf < (ulonglong)puVar6[3]) {
                  puVar8 = (undefined8 *)*puVar6;
                }
              } while ((*(char *)(uVar19 + (longlong)puVar8) != ' ') && (0 < (longlong)uVar19));
              if ((longlong)(int)uVar11 == uStack_78) {
                FUN_1404fefd0(puVar6,(longlong)(int)(uVar22 - 1)," ",1);
              }
              else {
                uVar20 = uStack_78 - uVar20;
                if (uStack_78 < uVar20) {
                  FUN_1400e28e0(&ppuStack_88,uVar20 - uStack_78,0);
                }
                else {
                  pppuVar9 = &ppuStack_88;
                  if (0xf < uStack_70) {
                    pppuVar9 = (undefined8 ***)ppuStack_88;
                  }
                  uStack_78 = uVar20;
                  *(undefined1 *)((longlong)pppuVar9 + uVar20) = 0;
                }
                pppuVar9 = (undefined8 ***)FUN_1415530e0(0x20);
                *pppuVar9 = (undefined8 **)0x0;
                pppuVar9[1] = (undefined8 **)0x0;
                pppuVar9[2] = (undefined8 **)0x0;
                pppuVar9[3] = (undefined8 **)0xf;
                *(undefined1 *)pppuVar9 = 0;
                ppuStack_b0 = pppuVar9;
                if (pppuVar9 != &ppuStack_88) {
                  pppuVar14 = &ppuStack_88;
                  if (0xf < uStack_70) {
                    pppuVar14 = (undefined8 ***)ppuStack_88;
                  }
                  FUN_140070f00(pppuVar9,pppuVar14,uStack_78);
                }
                puVar6 = *(undefined8 **)(param_1 + 0x8458);
                if (puVar6 == *(undefined8 **)(param_1 + 0x8460)) {
                  FUN_1400bc360(lVar25,puVar6,&ppuStack_b0);
                }
                else {
                  *puVar6 = pppuVar9;
                  *(longlong *)(param_1 + 0x8458) = *(longlong *)(param_1 + 0x8458) + 8;
                }
                bVar4 = true;
              }
              uStack_78 = 0;
              pppuVar9 = &ppuStack_88;
              if (0xf < uStack_70) {
                pppuVar9 = (undefined8 ***)ppuStack_88;
              }
              *(undefined1 *)pppuVar9 = 0;
              uVar20 = uStack_78;
            }
          }
          uVar24 = (ulonglong)(uVar23 + 1);
          uVar19 = uVar19 + 1;
          puVar6 = (undefined8 *)*plVar16;
          uVar22 = uStack_c8;
        } while ((ulonglong)(longlong)(int)(uVar23 + 1) < (ulonglong)puVar6[2]);
      }
      uStack_c8 = uVar22 + 1;
      uVar13 = (ulonglong)uStack_c8;
      plVar16 = plVar16 + 1;
    } while ((undefined8 **)(longlong)(int)uStack_c8 < ppuStack_c0);
    lVar26 = lStack_b8;
    if (uVar20 != 0) {
      pppuVar9 = (undefined8 ***)FUN_1415530e0(0x20);
      *pppuVar9 = (undefined8 **)0x0;
      pppuVar9[1] = (undefined8 **)0x0;
      pppuVar9[2] = (undefined8 **)0x0;
      pppuVar9[3] = (undefined8 **)0xf;
      *(undefined1 *)pppuVar9 = 0;
      ppuStack_b0 = pppuVar9;
      if (pppuVar9 != &ppuStack_88) {
        pppuVar14 = &ppuStack_88;
        if (0xf < uStack_70) {
          pppuVar14 = (undefined8 ***)ppuStack_88;
        }
        FUN_140070f00(pppuVar9,pppuVar14,uVar20);
      }
      puVar6 = *(undefined8 **)(param_1 + 0x8458);
      if (puVar6 == *(undefined8 **)(param_1 + 0x8460)) {
        FUN_1400bc360(lVar25,puVar6,&ppuStack_b0);
        lVar26 = lStack_b8;
      }
      else {
        *puVar6 = pppuVar9;
        *(longlong *)(param_1 + 0x8458) = *(longlong *)(param_1 + 0x8458) + 8;
        lVar26 = lStack_b8;
      }
    }
  }
  lVar25 = lStack_a0;
  FUN_140070e80(&ppuStack_88);
  plVar16 = plStack_a8;
  lVar7 = lStack_a0;
  if (ppuStack_c0 != (undefined8 **)0x0) {
    plVar3 = plStack_a8 + 1;
    do {
      lVar7 = *plVar16;
      if (lVar7 != 0) {
        FUN_140070e80(lVar7);
        mission_supplier_1415530d0(lVar7,0x20);
      }
      mission_supplier_14155486a(plVar16,plVar3,lVar25 - (longlong)plVar3);
      lVar25 = lVar25 + -8;
      lVar7 = lVar25;
    } while (lVar25 - (longlong)plVar16 >> 3 != 0);
  }
  lStack_a0 = lVar7;
  FUN_1400681a0(&plStack_a8);
  iVar17 = *(int *)(lStack_90 + 8);
  iVar18 = *(int *)(lStack_90 + 0x14);
  iVar15 = -1;
  iVar1 = *(int *)(lStack_90 + 0x10);
  if (((iVar1 != -1) && (lVar25 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar25 != 0)) &&
     (iVar12 = (int)lVar25 + -1, -1 < iVar12)) {
    do {
      iVar10 = iVar12 + (int)uVar21 >> 1;
      lVar25 = *(longlong *)(_DAT_14251c198 + (longlong)iVar10 * 8);
      if (*(int *)(lVar25 + 0xe0) == iVar1) {
        if (((lVar25 != 0) && (*(longlong *)(lVar25 + 0x130) != 0)) &&
           (lVar25 = *(longlong *)(*(longlong *)(lVar25 + 0x130) + 0x28), lVar25 != 0)) {
          iVar17 = *(int *)(lVar25 + 4);
          iVar18 = *(int *)(lVar25 + 8);
          iVar15 = *(int *)(lVar25 + 0x10);
        }
        break;
      }
      iVar5 = iVar10 + -1;
      if (*(int *)(lVar25 + 0xe0) < iVar1) {
        uVar21 = (ulonglong)(iVar10 + 1);
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while ((int)uVar21 <= iVar12);
  }
  if (iVar17 == -1) {
    if (iVar18 == -1) {
      if ((iVar15 != -1) && (lVar25 = FUN_140073ba0(0x14250a258,iVar15), lVar25 != 0)) {
        *(int *)(lVar26 + 0x198) = (int)*(short *)(lVar25 + 4) / 0x30;
        *(int *)(lVar26 + 0x19c) = (int)*(short *)(lVar25 + 6) / 0x30;
      }
    }
    else {
      lVar25 = FUN_1400bd6b0(_DAT_14250dfd8,iVar18);
      if (lVar25 != 0) {
        *(undefined4 *)(lVar26 + 0x198) = *(undefined4 *)(lVar25 + 0x26c);
        *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)(lVar25 + 0x270);
      }
    }
  }
  else {
    lVar25 = FUN_14007f150(_DAT_14250dfd8,iVar17);
    if (lVar25 != 0) {
      *(int *)(lVar26 + 0x198) = (int)*(short *)(lVar25 + 0x82);
      *(int *)(lVar26 + 0x19c) = (int)*(short *)(lVar25 + 0x84);
    }
  }
  FUN_140070e80(&ppuStack_68);
  FUN_1415530b0(uStack_48 ^ (ulonglong)auStack_f8);
  return;
}
