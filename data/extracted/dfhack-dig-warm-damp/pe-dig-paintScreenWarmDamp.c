/* dig PE:6af2166e:00067000; paintScreenWarmDamp; RVA 0x21250..0x22004 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_paintScreenWarmDamp(char param_1,char param_2)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  ushort uVar25;
  undefined1 auStack_358 [32];
  undefined8 uStack_338;
  char cStack_328;
  int iStack_324;
  char cStack_320;
  int iStack_31c;
  uint uStack_318;
  int iStack_314;
  short sStack_310;
  ushort uStack_30e;
  short sStack_30c;
  undefined4 uStack_308;
  short sStack_304;
  ushort uStack_302;
  short sStack_300;
  ushort uStack_2fe;
  short sStack_2fc;
  ushort uStack_2fa;
  short sStack_2f8;
  ushort uStack_2f6;
  short sStack_2f4;
  ushort uStack_2f2;
  int iStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined2 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined2 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined2 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined2 uStack_278;
  undefined4 uStack_270;
  int iStack_26c;
  undefined8 uStack_268;
  undefined2 uStack_260;
  char cStack_258;
  char cStack_257;
  char cStack_256;
  undefined1 uStack_255;
  int iStack_254;
  undefined4 uStack_250;
  int iStack_240;
  int iStack_23c;
  char *pcStack_238;
  undefined8 uStack_230;
  char *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int *piStack_210;
  char *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte **ppbStack_1f0;
  char *pcStack_1e8;
  undefined8 uStack_1e0;
  int aiStack_1d8 [38];
  char *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  byte *pbStack_118;
  char *pcStack_110;
  int iStack_108;
  char cStack_f8;
  undefined7 uStack_f7;
  char cStack_e8;
  ulonglong uStack_e0;
  int aiStack_d8 [4];
  int iStack_c8;
  int iStack_b8;
  int iStack_a8;
  int iStack_98;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_18005e4c0 ^ (ulonglong)auStack_358;
  uStack_318 = 0;
  cStack_328 = param_1;
  cStack_320 = param_2;
  cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar3 != '\0') {
    plVar11 = (longlong *)
              _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                        (0x18005d018,aiStack_d8,0);
    pbStack_118 = (byte *)0x77;
    pcStack_110 = &cStack_f8;
    pcStack_238 = "entering paintScreenDampWarm aquifer_mode={}, show_damp={}\n";
    uStack_230 = 0x3b;
    cStack_f8 = param_1;
    cStack_e8 = param_2;
    FUN_1800407e0(&pcStack_140,&pcStack_238,&pbStack_118);
    uStack_318 = 4;
    _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar11,0);
    (**(code **)(*plVar11 + 0x10))(plVar11,(int)plVar11[2],&pcStack_140);
    if (0xf < uStack_128) {
      if ((0xfff < uStack_128 + 1) &&
         ((char *)0x1f < pcStack_140 + (-8 - *(longlong *)(pcStack_140 + -8)))) {
        uStack_338 = 0;
        _invoke_watson(0,0,0,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      load_supplier_0x43814();
    }
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(aiStack_d8);
  }
  uStack_308 = 0;
  iStack_314 = 0;
  pcStack_140 = (char *)0x0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  pcStack_140 = (char *)FUN_1800035a0(0x20);
  uStack_130 = 0x11;
  uStack_128 = 0x1f;
  builtin_strncpy(pcStack_140,"MINING_INDICATORS",0x12);
  uStack_338 = 0;
  _findGraphicsTile_Screen_DFHack__YA_NAEBV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__HHPEAH1_Z
            (&pcStack_140,1,0,&uStack_308);
  if (0xf < uStack_128) {
    if ((0xfff < uStack_128 + 1) &&
       ((char *)0x1f < pcStack_140 + (-8 - *(longlong *)(pcStack_140 + -8)))) {
      uStack_338 = 0;
      _invoke_watson(0,0,0,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    load_supplier_0x43814();
  }
  pcStack_140 = (char *)0x0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  pcStack_140 = (char *)FUN_1800035a0(0x20);
  uStack_130 = 0x11;
  uStack_128 = 0x1f;
  builtin_strncpy(pcStack_140,"MINING_INDICATORS",0x12);
  uStack_338._0_4_ = 0;
  uStack_338._4_4_ = 0;
  _findGraphicsTile_Screen_DFHack__YA_NAEBV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__HHPEAH1_Z
            (&pcStack_140,0,0,&iStack_314);
  if (0xf < uStack_128) {
    if ((0xfff < uStack_128 + 1) &&
       ((char *)0x1f < pcStack_140 + (-8 - *(longlong *)(pcStack_140 + -8)))) {
      uStack_338 = 0;
      _invoke_watson(0,0,0,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    load_supplier_0x43814();
  }
  uStack_2b8 = 0x700;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_270 = 0x700;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_2b4 = uStack_308;
  iStack_26c = iStack_314;
  uVar5 = _getTexposByHandle_Textures_DFHack__YAJ_K_Z(_DAT_18005f058[3]);
  uVar6 = _getTexposByHandle_Textures_DFHack__YAJ_K_Z(_DAT_18005f058[2]);
  uVar7 = _getTexposByHandle_Textures_DFHack__YAJ_K_Z(*_DAT_18005f058);
  uStack_29c = _getTexposByHandle_Textures_DFHack__YAJ_K_Z(_DAT_18005f058[1]);
  uStack_2e8 = 0x700;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0x700;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_288 = 0x700;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_2a0 = 0x700;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_2e4 = uVar5;
  uStack_2cc = uVar6;
  uStack_284 = uVar7;
  puVar12 = (undefined8 *)_getDwarfmodeViewDims_Gui_DFHack__YA_AUDwarfmodeDims_12_XZ(&pcStack_228);
  iVar22 = (int)(short)puVar12[1];
  iVar8 = (int)(short)((ulonglong)puVar12[1] >> 0x20);
  iStack_324 = iVar22;
  iStack_2ec = iVar8;
  if (iVar22 <= iVar8) {
    iStack_23c = (int)(short)*puVar12;
    iVar9 = (int)(short)((ulonglong)*puVar12 >> 0x20);
    iStack_240 = iVar9;
    iVar23 = iStack_23c;
    do {
      iStack_31c = iVar23;
      iStack_324 = iVar22;
      iVar23 = iStack_31c;
      if (iStack_31c <= iVar9) {
        do {
          sVar1 = **(short **)_window_z_global_df__3PEAHEA_exref;
          iVar9 = (int)sVar1;
          uVar25 = (short)iVar22 + **(short **)_window_y_global_df__3PEAHEA_exref;
          sVar24 = (short)iStack_31c + **(short **)_window_x_global_df__3PEAHEA_exref;
          iVar23 = (int)(short)uVar25;
          iVar8 = (int)sVar24;
          sStack_310 = sVar24;
          uStack_30e = uVar25;
          sStack_30c = sVar1;
          pbVar13 = (byte *)_getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z(iVar8,iVar23,iVar9)
          ;
          iVar22 = iStack_324;
          pbStack_118 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            if (cStack_328 == '\0') {
              cVar3 = _inGraphicsMode_Screen_DFHack__YA_NXZ();
              if (cVar3 != '\0') {
                lVar14 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                   (0x18005efe8,pbVar13,0);
                if ((lVar14 != 0) &&
                   (sStack_304 = sVar24, uStack_302 = uVar25,
                   cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                                     (lVar14,&sStack_304), cVar3 != '\0')) {
                  FUN_180018250(&uStack_2e8,iStack_31c,iStack_324);
                }
                lVar14 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                   (0x18005ef78,pbVar13,0);
                if ((lVar14 != 0) &&
                   (sStack_300 = sVar24, uStack_2fe = uVar25,
                   cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                                     (lVar14,&sStack_300), cVar3 != '\0')) {
                  FUN_180018250(&uStack_2d0,iStack_31c,iStack_324);
                }
              }
              cVar3 = _isTileVisible_Maps_DFHack__YA_NHHH_Z(iVar8,iVar23,iVar9);
              if ((cVar3 != '\0') ||
                 (cVar3 = _isTileVisible_Maps_DFHack__YA_NHHH_Z
                                    (iVar8,iVar23,(int)(short)(sVar1 + -1)), cVar3 != '\0'))
              goto LAB_1800217fc;
              cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
              iVar22 = iStack_324;
              if (cVar3 == '\0') goto LAB_180021f05;
              uVar15 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                 (0x18005d018,aiStack_d8,0);
              pcStack_238 = "skipping hidden tile\n";
              uStack_230 = 0x15;
              FUN_18000b5e0(uVar15,&pcStack_238);
              piVar20 = aiStack_d8;
LAB_180021efb:
              ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(piVar20);
              iVar22 = iStack_324;
            }
            else {
LAB_1800217fc:
              cVar3 = _inGraphicsMode_Screen_DFHack__YA_NXZ();
              if (cVar3 == '\0') {
                cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
                if (cVar3 != '\0') {
                  plVar11 = (longlong *)
                            _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                      (0x18005d018,aiStack_1d8,0);
                  aiStack_d8[0] = (int)sVar24;
                  iStack_a8 = iStack_31c;
                  iStack_98 = iStack_324;
                  uStack_218 = 0x11111;
                  piStack_210 = aiStack_d8;
                  pcStack_208 = "scanning map tile at ({},{},{}) screen offset ({},{})\n";
                  uStack_200 = 0x36;
                  iStack_c8 = iVar23;
                  iStack_b8 = iVar9;
                  FUN_1800407e0(&cStack_f8,&pcStack_208,&uStack_218);
                  uStack_318 = uStack_318 | 1;
                  _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar11,0);
                  (**(code **)(*plVar11 + 0x10))(plVar11,(int)plVar11[2],&cStack_f8);
                  if (0xf < uStack_e0) {
                    if ((0xfff < uStack_e0 + 1) &&
                       (0x1f < (CONCAT71(uStack_f7,cStack_f8) -
                               *(longlong *)(CONCAT71(uStack_f7,cStack_f8) + -8)) - 8U)) {
                      uStack_338 = 0;
                      _invoke_watson(0,0,0,0);
                      goto LAB_180021fea;
                    }
                    load_supplier_0x43814();
                  }
                  ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(aiStack_1d8);
                }
                iVar8 = (int)sVar24;
                puVar17 = (uint *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                                            (iVar8,(int)(short)uVar25,iVar9);
                if ((puVar17 != (uint *)0x0) && ((*puVar17 & 0x70) != 0)) {
                  puVar12 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
                  uVar10 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar12);
                  iVar22 = iStack_324;
                  if (((ulonglong)uVar10 / 1000 & 1) == 0) goto LAB_180021f05;
                }
                uStack_338._0_4_ = 0xffffffff;
                _readTile_Screen_DFHack__YA_AUPen_12_HH_NPEQgraphic_viewportst_df__PEAH_Z
                          (&cStack_258,iStack_31c,iStack_324);
                if (iStack_254 < 0) {
                  cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,1);
                  iVar22 = iStack_324;
                  if (cVar3 != '\0') {
                    plVar11 = (longlong *)
                              _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                        (0x18005d018,aiStack_1d8,1);
                    iVar22 = iStack_324;
                    pbStack_118 = (byte *)CONCAT44(pbStack_118._4_4_,iStack_31c);
                    iStack_108 = iStack_324;
                    uStack_1f8 = 0x11;
                    ppbStack_1f0 = &pbStack_118;
                    pcStack_1e8 = "cannot read tile at offset {}, {}\n";
                    uStack_1e0 = 0x22;
                    FUN_1800407e0(&cStack_f8,&pcStack_1e8,&uStack_1f8);
                    uStack_318 = uStack_318 | 2;
                    _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar11,0);
                    (**(code **)(*plVar11 + 0x10))(plVar11,(int)plVar11[2],&cStack_f8);
                    if (0xf < uStack_e0) {
                      if ((0xfff < uStack_e0 + 1) &&
                         (0x1f < (CONCAT71(uStack_f7,cStack_f8) -
                                 *(longlong *)(CONCAT71(uStack_f7,cStack_f8) + -8)) - 8U)) {
LAB_180021fea:
                        uStack_338 = 0;
                        _invoke_watson(0,0,0,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      load_supplier_0x43814();
                    }
                    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(aiStack_1d8);
                  }
                  goto LAB_180021f05;
                }
                if (cStack_328 == '\0') {
                  lVar14 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                     (0x18005efe8,pbStack_118,0);
                  if ((lVar14 == 0) ||
                     (sStack_2fc = sVar24, uStack_2fa = uVar25,
                     cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                                       (lVar14,&sStack_2fc), cVar3 == '\0')) {
LAB_180021d2e:
                    lVar14 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                       (0x18005ef78,pbStack_118,0);
                    if ((lVar14 != 0) &&
                       (sStack_2f4 = sVar24, uStack_2f2 = uVar25,
                       cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                                         (lVar14,&sStack_2f4), cVar3 != '\0')) {
                      puVar12 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
                      uVar10 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar12);
                      if (((ulonglong)uVar10 / 500 & 1) == 0) {
                        cVar3 = '\x01';
                        goto LAB_180021f7d;
                      }
                    }
                    lVar14 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                                       (iVar8,(int)(short)uVar25,iVar9);
                    if ((lVar14 == 0) ||
                       (*(ushort *)
                         (lVar14 + (((ulonglong)((int)sVar24 & 0xf) + 0xbd) * 0x10 +
                                   (ulonglong)(uVar25 & 0xf)) * 2) < 0x275b)) goto LAB_180021dd7;
                    cVar3 = '\x04';
                  }
                  else {
                    puVar12 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
                    uVar10 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar12);
                    if (((ulonglong)uVar10 / 500 & 1) != 0) goto LAB_180021d2e;
                    cVar3 = '\f';
                    lVar14 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                       (0x18005ef78,pbStack_118,0);
                    if ((lVar14 != 0) &&
                       (sStack_2f8 = sVar24, uStack_2f6 = uVar25,
                       cVar4 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                                         (lVar14,&sStack_2f8), cVar4 != '\0')) {
                      puVar12 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
                      uVar10 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar12);
                      cVar3 = '\f';
                      if (((ulonglong)uVar10 / 2000 & 1) == 0) {
                        cVar3 = '\x01';
                      }
                    }
                  }
                }
                else {
LAB_180021dd7:
                  cVar3 = FUN_18001fbd0(&sStack_310);
                  if (cVar3 == '\0') {
LAB_180021ea9:
                    cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
                    iVar22 = iStack_324;
                    if (cVar3 == '\0') goto LAB_180021f05;
                    uVar15 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                                       (0x18005d018,aiStack_1d8,0);
                    pcStack_228 = "no need to modify tile; skipping\n";
                    uStack_220 = 0x21;
                    FUN_18000b5e0(uVar15,&pcStack_228);
                    piVar20 = aiStack_1d8;
                    goto LAB_180021efb;
                  }
                  if ((((puVar17 == (uint *)0x0) &&
                       (puVar17 = (uint *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                                                    (iVar8,iVar23,iVar9), puVar17 == (uint *)0x0))
                      || ((*puVar17 & 0x400000) == 0)) ||
                     (((puVar16 = (undefined2 *)
                                  _getTileType_Maps_DFHack__YAPEAW4tiletype_3enums_df__HHH_Z
                                            (iVar8,iVar23,iVar9), puVar16 == (undefined2 *)0x0 ||
                       (lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                           (*puVar16), *(int *)(lVar14 + 8) != 4)) ||
                      (lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                          (*puVar16), *(int *)(lVar14 + 0x14) == 3)))) {
                    if ((cStack_328 != '\0') && (cStack_320 == '\0')) goto LAB_180021ea9;
                  }
                  else {
                    if (((*pbStack_118 & 0x40) == 0) ||
                       (puVar17 = (uint *)_getTileOccupancy_Maps_DFHack__YAPEATtile_occupancy_df__HHH_Z
                                                    (iVar8,iVar23,iVar9), puVar17 == (uint *)0x0)) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = *puVar17 >> 0x1a & 1;
                    }
                    puVar12 = (undefined8 *)_getInstance_Core_DFHack__SAAEAV12_XZ();
                    uVar18 = _getTickCount_Process_DFHack__QEAAIXZ(*puVar12);
                    uVar19 = 2000;
                    if (uVar10 != 0) {
                      uVar19 = 500;
                    }
                    if (((uVar18 & 0xffffffff) / uVar19 & 1) != 0) goto LAB_180021ea9;
                  }
                  cVar3 = '\t';
                }
LAB_180021f7d:
                iVar22 = iStack_324;
                if ((cStack_257 == '\0') || (cStack_258 == ' ')) {
                  cStack_257 = '\0';
                  cStack_256 = cVar3;
                }
                else {
                  cStack_256 = '\0';
                  cStack_257 = cVar3;
                }
                uStack_255 = 0;
                if (iStack_254 != 0) {
                  uStack_250 = 1;
                }
                uStack_338._0_4_ = 0xffffffff;
                _paintTile_Screen_DFHack__YA_NAEBUPen_12_HH_NPEQgraphic_viewportst_df__PEAH_Z
                          (&cStack_258,iStack_31c,iStack_324);
              }
              else {
                if (cStack_328 == '\0') {
                  lVar14 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                                     ((int)sVar24,(int)(short)uVar25,iVar9);
                  if ((((lVar14 == 0) ||
                       (*(ushort *)
                         (lVar14 + (((ulonglong)((int)sVar24 & 0xf) + 0xbd) * 0x10 +
                                   (ulonglong)(uVar25 & 0xf)) * 2) < 0x275b)) ||
                      (puVar16 = (undefined2 *)
                                 _getTileType_Maps_DFHack__YAPEAW4tiletype_3enums_df__HHH_Z
                                           ((int)sVar24,(int)(short)uVar25,iVar9),
                      puVar16 == (undefined2 *)0x0)) ||
                     (lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                         (*puVar16), *(int *)(lVar14 + 8) != 4)) goto LAB_18002187e;
                  puVar21 = &uStack_2b8;
                }
                else {
LAB_18002187e:
                  iVar8 = (int)sVar24;
                  puVar17 = (uint *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                                              (iVar8,iVar23,iVar9);
                  if (((puVar17 == (uint *)0x0) || ((*puVar17 & 0x400000) == 0)) ||
                     ((puVar16 = (undefined2 *)
                                 _getTileType_Maps_DFHack__YAPEAW4tiletype_3enums_df__HHH_Z
                                           (iVar8,iVar23,iVar9), puVar16 == (undefined2 *)0x0 ||
                      ((lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                           (*puVar16), *(int *)(lVar14 + 8) != 4 ||
                       (lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                           (*puVar16), *(int *)(lVar14 + 0x14) == 3)))))) {
                    if (((cStack_328 != '\0') && (iVar22 = iStack_324, cStack_320 == '\0')) ||
                       (((puVar16 = (undefined2 *)
                                    _getTileType_Maps_DFHack__YAPEAW4tiletype_3enums_df__HHH_Z
                                              (iVar8,(int)(short)uVar25,iVar9), iVar22 = iStack_324,
                         puVar16 == (undefined2 *)0x0 ||
                         (lVar14 = _attrs___enum_traits_W4tiletype_1enums_df___df__SAAEBUattr_entry_type_12_W4tiletype_4enums_2__Z
                                             (*puVar16), iVar22 = iStack_324,
                         *(int *)(lVar14 + 8) != 4)) ||
                        (cVar3 = FUN_18001fbd0(&sStack_310), iVar22 = iStack_324, cVar3 == '\0'))))
                    goto LAB_180021f05;
                    puVar21 = &uStack_270;
                  }
                  else if (((*pbStack_118 & 0x40) == 0) ||
                          (puVar17 = (uint *)_getTileOccupancy_Maps_DFHack__YAPEATtile_occupancy_df__HHH_Z
                                                       (iVar8,iVar23,iVar9), puVar17 == (uint *)0x0)
                          ) {
                    puVar21 = &uStack_288;
                  }
                  else {
                    puVar21 = &uStack_2a0;
                    if ((*puVar17 >> 0x1a & 1) == 0) {
                      puVar21 = &uStack_288;
                    }
                  }
                }
                iVar8 = iStack_31c;
                iVar22 = iStack_324;
                uStack_338._0_4_ = 0xffffffff;
                lVar14 = _readTile_Screen_DFHack__YA_AUPen_12_HH_NPEQgraphic_viewportst_df__PEAH_Z
                                   (&pcStack_140,iStack_31c,iStack_324);
                if (*(int *)(lVar14 + 4) == iStack_314) {
                  uStack_338._0_4_ = 0xffffffff;
                  _paintTile_Screen_DFHack__YA_NAEBUPen_12_HH_NPEQgraphic_viewportst_df__PEAH_Z
                            (0x18005e438,iVar8,iVar22);
                }
                FUN_180018250(puVar21,iVar8,iVar22);
              }
            }
          }
LAB_180021f05:
          iStack_31c = iStack_31c + 1;
          iVar9 = iStack_240;
          iVar8 = iStack_2ec;
          iVar23 = iStack_23c;
        } while (iStack_31c <= iStack_240);
      }
      iVar22 = iVar22 + 1;
      iStack_324 = iVar22;
    } while (iVar22 <= iVar8);
  }
  FUN_180043d60(uStack_38 ^ (ulonglong)auStack_358);
  return;
}

