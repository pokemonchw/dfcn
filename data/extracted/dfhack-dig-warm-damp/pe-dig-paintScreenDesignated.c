/* dig PE:6af2166e:00067000; paintScreenDesignated; RVA 0x20ae0..0x21248 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_paintScreenDesignated(void)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStack_288 [32];
  undefined8 uStack_268;
  int iStack_258;
  uint uStack_254;
  undefined2 uStack_250;
  short sStack_24e;
  short sStack_24c;
  int iStack_248;
  undefined2 uStack_240;
  undefined2 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined2 uStack_220;
  uint uStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  char *pcStack_208;
  int *piStack_200;
  char *pcStack_1f8;
  undefined8 uStack_1f0;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 *puStack_1d0;
  longlong alStack_1c0 [3];
  ulonglong uStack_1a8;
  undefined1 auStack_198 [152];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  ulonglong uStack_e8;
  int aiStack_d8 [4];
  int iStack_c8;
  int iStack_b8;
  int iStack_a8;
  int iStack_98;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_18005e4c0 ^ (ulonglong)auStack_288;
  uStack_218 = 0;
  cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar3 != '\0') {
    uVar9 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                      (0x18005d018,aiStack_d8,0);
    pcStack_208 = "entering paintScreenDesignated\n";
    piStack_200 = (int *)0x1f;
    FUN_18000b5e0(uVar9,&pcStack_208);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(aiStack_d8);
  }
  cVar3 = _inGraphicsMode_Screen_DFHack__YA_NXZ();
  if (cVar3 == '\0') {
    puVar10 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
    uVar5 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar10);
    if (((ulonglong)uVar5 / 500 & 1) != 0) {
      FUN_180010630(auStack_1d8);
      puVar10 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
      uVar5 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar10);
      uStack_254 = (uint)CONCAT71((uint7)uVar5 / 4000 >> 6,~(byte)((ulonglong)uVar5 / 1000)) &
                   0xffffff01;
      puVar10 = (undefined8 *)
                _getDwarfmodeViewDims_Gui_DFHack__YA_AUDwarfmodeDims_12_XZ(&pcStack_1f8);
      iVar20 = (int)(short)puVar10[1];
      iVar6 = (int)(short)((ulonglong)puVar10[1] >> 0x20);
      iStack_258 = iVar20;
      iStack_214 = iVar6;
      if (iVar20 <= iVar6) {
        iStack_20c = (int)(short)*puVar10;
        iVar7 = (int)(short)((ulonglong)*puVar10 >> 0x20);
        iStack_210 = iVar7;
        iVar23 = iStack_20c;
        do {
          iStack_248 = iVar23;
          iStack_258 = iVar20;
          iVar23 = iStack_248;
          if (iStack_248 <= iVar7) {
            do {
              sVar1 = **(short **)_window_z_global_df__3PEAHEA_exref;
              sVar18 = (short)iVar20 + **(short **)_window_y_global_df__3PEAHEA_exref;
              sVar19 = (short)iStack_248 + **(short **)_window_x_global_df__3PEAHEA_exref;
              iVar6 = (int)sVar1;
              iVar7 = (int)sVar18;
              uStack_250 = sVar19;
              sStack_24e = sVar18;
              sStack_24c = sVar1;
              uStack_240 = sVar18;
              uStack_238 = sVar1;
              cVar3 = _isValidTilePos_Maps_DFHack__YA_NHHH_Z((int)sVar19,iVar7,iVar6);
              iVar20 = iStack_258;
              if (cVar3 == '\0') goto LAB_180020fdc;
              cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
              iVar23 = iStack_248;
              if (cVar3 != '\0') {
                plVar11 = (longlong *)
                          _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                    (0x18005d018,auStack_198,0);
                iVar23 = iStack_248;
                iStack_a8 = iStack_248;
                iStack_98 = iStack_258;
                pcStack_208 = (char *)0x11111;
                piStack_200 = aiStack_d8;
                pcStack_1e8 = "scanning map tile at ({},{},{}) screen offset ({},{})\n";
                uStack_1e0 = 0x36;
                aiStack_d8[0] = (int)sVar19;
                iStack_c8 = iVar7;
                iStack_b8 = iVar6;
                FUN_1800407e0(&uStack_100,&pcStack_1e8,&pcStack_208);
                uStack_218 = uStack_218 | 1;
                _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar11,0);
                (**(code **)(*plVar11 + 0x10))(plVar11,(int)plVar11[2],&uStack_100);
                if (0xf < uStack_e8) {
                  if ((0xfff < uStack_e8 + 1) &&
                     (0x1f < (CONCAT44(uStack_fc,uStack_100) -
                             *(longlong *)(CONCAT44(uStack_fc,uStack_100) + -8)) - 8U)) {
                    uStack_268 = 0;
                    _invoke_watson(0,0,0,0);
                    goto LAB_18002123b;
                  }
                  load_supplier_0x43814();
                }
                ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_198);
              }
              uStack_230 = 0x800;
              uStack_22c = 0;
              uStack_224 = 0;
              uStack_220 = 0;
              uVar21 = (((ulonglong)(byte)sVar19 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)uStack_250._1_1_) * 0x100000001b3 + 0x9e3779b97f4a7c15;
              uVar21 = (((ulonglong)(byte)sVar18 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)uStack_240._1_1_) * 0x100000001b3 + uVar21 * 0x1000 +
                       (uVar21 >> 4) + 0x9e3779b97f4a7c15 ^ uVar21;
              plVar11 = (longlong *)
                        ((((((ulonglong)(byte)sVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)uStack_238._1_1_) * 0x100000001b3 + (uVar21 >> 4) +
                           -0x61c8864680b583eb + uVar21 * 0x1000 ^ uVar21) & uStack_1a8) * 0x10 +
                        alStack_1c0[0]);
              puVar10 = (undefined8 *)plVar11[1];
              puVar13 = (undefined8 *)0x0;
              if (puVar10 != puStack_1d0) {
                for (puVar12 = puVar10;
                    (((sVar19 != *(short *)(puVar12 + 2) ||
                      (sVar18 != *(short *)((longlong)puVar12 + 0x12))) ||
                     (puVar13 = puVar12, sVar1 != *(short *)((longlong)puVar12 + 0x14))) &&
                    (puVar13 = (undefined8 *)0x0, puVar12 != (undefined8 *)*plVar11));
                    puVar12 = (undefined8 *)puVar12[1]) {
                }
              }
              if (puVar13 == (undefined8 *)0x0) {
                puVar14 = (uint *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                                            ((int)sVar19,iVar7,iVar6);
                puVar15 = (uint *)_getTileOccupancy_Maps_DFHack__YAPEATtile_occupancy_df__HHH_Z
                                            ((int)sVar19,iVar7,iVar6);
                if ((puVar14 == (uint *)0x0) || (puVar15 == (uint *)0x0)) {
                  uVar5 = 0;
                  uVar8 = 0;
                }
                else {
                  uVar5 = *puVar14;
                  uVar8 = *puVar15;
                }
              }
              else {
                if (puVar10 == puStack_1d0) {
LAB_18002123b:
                  load_supplier_0x4194f("invalid unordered_map<K, T> key");
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                for (; ((sVar19 != *(short *)(puVar10 + 2) ||
                        (sVar18 != *(short *)((longlong)puVar10 + 0x12))) ||
                       (sVar1 != *(short *)((longlong)puVar10 + 0x14)));
                    puVar10 = (undefined8 *)puVar10[1]) {
                  if (puVar10 == (undefined8 *)*plVar11) goto LAB_18002123b;
                }
                if (puVar10 == (undefined8 *)0x0) goto LAB_18002123b;
                uStack_100 = *(undefined4 *)(puVar10 + 3);
                uStack_fc = *(undefined4 *)((longlong)puVar10 + 0x1c);
                uVar5 = *(uint *)(puVar10 + 4);
                uVar8 = *(uint *)((longlong)puVar10 + 0x24);
                uStack_f8 = uVar5;
                uStack_f4 = uVar8;
              }
              uVar22 = uVar5 >> 7 & 3;
              if (uVar22 == 1) {
                puVar16 = (undefined2 *)
                          _getTileType_Maps_DFHack__YAPEAW4tiletype_3enums_df__HHH_Z
                                    ((int)sVar19,iVar7,iVar6);
                if (((puVar16 == (undefined2 *)0x0) ||
                    (lVar17 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                        (*puVar16), *(int *)(lVar17 + 0x14) != 3)) ||
                   (lVar17 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                       (*puVar16), *(int *)(lVar17 + 8) != 4)) {
                  uVar9 = 0xdb;
                }
                else {
                  uVar9 = 0xce;
                }
LAB_1800211e8:
                uVar4 = FUN_18001ee10(&uStack_250,uVar9,(undefined1)uStack_254);
                uStack_230 = CONCAT31(uStack_230._1_3_,uVar4);
LAB_1800211fc:
                iVar20 = iStack_258;
                uStack_268 = CONCAT44(uStack_268._4_4_,0xffffffff);
                _paintTile_Screen_DFHack__YA_NAEBUPen_12_HH_NPEQgraphic_viewportst_df__PEAH_Z
                          (&uStack_230,iVar23,iStack_258);
              }
              else {
                if (uVar22 == 2) {
                  uVar9 = 10;
                  goto LAB_1800211e8;
                }
                if ((uVar8 & 0x3c0000) != 0) {
                  uVar5 = uVar8 & 0x100000;
                  if (uVar5 == 0) {
                    if ((uVar8 & 0x2c0000) == 0x2c0000) {
                      uVar9 = 0xb9;
                    }
                    else {
LAB_18002115b:
                      uVar22 = uVar8 & 0x40000;
                      if ((uVar22 == 0) || ((uVar8 >> 0x13 & 1) == 0)) {
                        if (uVar5 == 0) {
                          if ((uVar22 == 0) || ((uVar8 >> 0x15 & 1) == 0)) {
LAB_180021194:
                            if ((uVar8 & 0x180000) == 0x180000) {
                              uVar9 = 0xc9;
                            }
                            else if ((uVar8 & 0x280000) == 0x280000) {
                              uVar9 = 0xbb;
                            }
                            else if (uVar22 == 0) {
                              if ((uVar8 >> 0x13 & 1) == 0) {
                                if (uVar5 == 0) {
                                  uVar9 = 0xffffffc5;
                                  if ((uVar8 >> 0x15 & 1) != 0) {
                                    uVar9 = 0xffffffb5;
                                  }
                                }
                                else {
                                  uVar9 = 0xc6;
                                }
                              }
                              else {
                                uVar9 = 0xd2;
                              }
                            }
                            else {
                              uVar9 = 0xd0;
                            }
                          }
                          else {
                            uVar9 = 0xbc;
                          }
                        }
                        else if ((uVar8 >> 0x15 & 1) == 0) {
                          if (uVar22 == 0) goto LAB_180021194;
                          uVar9 = 200;
                        }
                        else {
                          uVar9 = 0xcd;
                        }
                      }
                      else {
                        uVar9 = 0xba;
                      }
                    }
                  }
                  else if ((uVar8 & 0x2c0000) == 0x2c0000) {
                    uVar9 = 0xce;
                  }
                  else if ((uVar8 & 0xc0000) == 0xc0000) {
                    uVar9 = 0xcc;
                  }
                  else if ((uVar8 & 0x240000) == 0x240000) {
                    uVar9 = 0xca;
                  }
                  else {
                    if ((uVar8 & 0x280000) != 0x280000) goto LAB_18002115b;
                    uVar9 = 0xcb;
                  }
                  goto LAB_1800211e8;
                }
                if ((uVar5 & 0x70) != 0) {
                  cVar3 = FUN_18001ee10(&uStack_250,DAT_18005f080,(undefined1)uStack_254);
                  uStack_230 = CONCAT31(uStack_230._1_3_,cVar3);
                  iVar20 = iStack_258;
                  if (cVar3 == DAT_18005f080) goto LAB_180020fdc;
                  goto LAB_1800211fc;
                }
                cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
                iVar20 = iStack_258;
                if (cVar3 != '\0') {
                  uVar9 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                    (0x18005d018,auStack_198,0);
                  pcStack_1f8 = "skipping tile with no designation\n";
                  uStack_1f0 = 0x22;
                  FUN_18000b5e0(uVar9,&pcStack_1f8);
                  ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_198);
                  iVar20 = iStack_258;
                }
              }
LAB_180020fdc:
              iStack_248 = iStack_248 + 1;
              iVar7 = iStack_210;
              iVar6 = iStack_214;
              iVar23 = iStack_20c;
            } while (iStack_248 <= iStack_210);
          }
          iVar20 = iVar20 + 1;
          iStack_258 = iVar20;
        } while (iVar20 <= iVar6);
      }
      FUN_180011400(alStack_1c0);
      *(undefined8 *)puStack_1d0[1] = 0;
      puVar10 = (undefined8 *)*puStack_1d0;
      while (puVar10 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)*puVar10;
        load_supplier_0x43814(puVar10,0x28);
        puVar10 = puVar13;
      }
      load_supplier_0x43814(puStack_1d0,0x28);
    }
  }
  FUN_180043d60(uStack_38 ^ (ulonglong)auStack_288);
  return;
}

