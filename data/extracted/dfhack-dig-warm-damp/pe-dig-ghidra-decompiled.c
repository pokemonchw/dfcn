/* dig PE:6af2166e:00067000; lua-function-registration; RVA 0x1570..0x1d2f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_lua_function_registration(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_1800437d8(0x68);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar1,0,1);
    *puVar1 = &UNK_180049ec8;
    puVar1[3] = FUN_18001ebf0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_1800037b0(puVar1 + 4,"getWarmConfigKey",0x10);
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    FUN_1800037b0(puVar1 + 9,0,0);
  }
  puVar3 = (undefined8 *)0x0;
  _DAT_18005e240 = "getDampConfigKey";
  _DAT_18005e238 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_180049ec8;
    puVar2[3] = FUN_18001eb40;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"getDampConfigKey",0x10);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e250 = "setWarmPaintEnabled";
  _DAT_18005e248 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,1,1);
    *puVar2 = &UNK_180049f48;
    puVar2[3] = load_setWarmPaintEnabled;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"setWarmPaintEnabled",0x13);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e260 = "getWarmPaintEnabled";
  _DAT_18005e258 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_180049fc8;
    puVar2[3] = load_getWarmPaintEnabled;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"getWarmPaintEnabled",0x13);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e270 = "setDampPaintEnabled";
  _DAT_18005e268 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,1,1);
    *puVar2 = &UNK_180049f48;
    puVar2[3] = load_setDampPaintEnabled;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"setDampPaintEnabled",0x13);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e280 = "getDampPaintEnabled";
  _DAT_18005e278 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_180049fc8;
    puVar2[3] = load_getDampPaintEnabled;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"getDampPaintEnabled",0x13);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e290 = "addTileWarmDig";
  _DAT_18005e288 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,1,1);
    *puVar2 = &UNK_18004a048;
    puVar2[3] = FUN_1800176f0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"addTileWarmDig",0xe);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2a0 = "addTileDampDig";
  _DAT_18005e298 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,1,1);
    *puVar2 = &UNK_18004a048;
    puVar2[3] = FUN_180017670;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"addTileDampDig",0xe);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2b0 = "getCurLevelDesignatedCount";
  _DAT_18005e2a8 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_18004a0c8;
    puVar2[3] = load_getCurLevelDesignatedCount;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"getCurLevelDesignatedCount",0x1a);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2c0 = "toggleCurLevelWarmDig";
  _DAT_18005e2b8 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_18004a148;
    puVar2[3] = load_toggleCurLevelWarmDig;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"toggleCurLevelWarmDig",0x15);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2d0 = "toggleCurLevelDampDig";
  _DAT_18005e2c8 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,0,1);
    *puVar2 = &UNK_18004a148;
    puVar2[3] = load_toggleCurLevelDampDig;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"toggleCurLevelDampDig",0x15);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2e0 = "paintScreenWarmDamp";
  _DAT_18005e2d8 = puVar1;
  puVar2 = (undefined8 *)FUN_1800437d8(0x68);
  puVar1 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar2,2,1);
    *puVar2 = &UNK_18004a1c8;
    puVar2[3] = load_paintScreenWarmDamp;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    FUN_1800037b0(puVar2 + 4,"paintScreenWarmDamp",0x13);
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    FUN_1800037b0(puVar2 + 9,0,0);
    puVar1 = puVar2;
  }
  _DAT_18005e2f0 = "paintScreenDesignated";
  _DAT_18005e2e8 = puVar1;
  puVar1 = (undefined8 *)FUN_1800437d8(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    __0function_identity_base_DFHack__QEAA_H_N_Z(puVar1,0,1);
    *puVar1 = &UNK_18004a248;
    puVar1[3] = load_paintScreenDesignated;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    FUN_1800037b0(puVar1 + 4,"paintScreenDesignated",0x15);
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    FUN_1800037b0(puVar1 + 9,0,0);
    puVar3 = puVar1;
  }
  _DAT_18005e2f8 = puVar3;
  _DAT_18005e300 = 0;
  uRam000000018005e308 = 0;
  return;
}


/* dig PE:6af2166e:00067000; getCurLevelDesignatedCount; RVA 0x1e850..0x1eb3f */

int load_getCurLevelDesignatedCount(void)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  longlong lStackX_18;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  longlong alStack_60 [3];
  ulonglong uStack_48;
  
  FUN_180010290(auStack_78);
  load_collectLevelDesignations(auStack_78);
  iVar11 = 0;
  plVar5 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba0);
  do {
    if (plVar5 == *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba8)) {
      FUN_180011390(alStack_60);
      *(undefined8 *)puStack_70[1] = 0;
      puVar4 = (undefined8 *)*puStack_70;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        load_supplier_0x43814(puVar4,0x20);
        puVar4 = puVar3;
      }
      load_supplier_0x43814(puStack_70,0x20);
      return iVar11;
    }
    lVar2 = *plVar5;
    uVar1 = *(ushort *)(lVar2 + 0x8c);
    if ((int)(short)uVar1 == **(int **)_window_z_global_df__3PEAHEA_exref) {
      uVar12 = 0;
      lStackX_18 = 0;
      do {
        uVar6 = 0;
        lVar7 = 0;
        do {
          if ((*(uint *)(lVar2 + 0x2a0 +
                        ((ulonglong)((uint)lVar7 & 0xf) + (ulonglong)((uint)lStackX_18 & 0xf) * 0x10
                        ) * 4) & 0x200) != 0) {
            uVar9 = (short)uVar12 + *(short *)(lVar2 + 0x88);
            uVar10 = (short)uVar6 + *(short *)(lVar2 + 0x8a);
            if ((*(byte *)(lVar2 + 0x2a0 + (lStackX_18 * 0x10 + lVar7) * 4) & 0x70) == 0) {
              uVar8 = (((ulonglong)(byte)uVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(uVar9 >> 8)) * 0x100000001b3 + 0x9e3779b97f4a7c15;
              uVar8 = (((ulonglong)(byte)uVar10 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(uVar10 >> 8)) * 0x100000001b3 + (uVar8 >> 4) + -0x61c8864680b583eb
                      + uVar8 * 0x1000 ^ uVar8;
              uVar8 = ((((ulonglong)(byte)uVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)(uVar1 >> 8)) * 0x100000001b3 + (uVar8 >> 4) + -0x61c8864680b583eb
                       + uVar8 * 0x1000 ^ uVar8) & uStack_48;
              puVar4 = *(undefined8 **)(alStack_60[0] + 8 + uVar8 * 0x10);
              if (puVar4 != puStack_70) {
                while( true ) {
                  if (((uVar9 == *(ushort *)(puVar4 + 2)) &&
                      (uVar10 == *(ushort *)((longlong)puVar4 + 0x12))) &&
                     (uVar1 == *(ushort *)((longlong)puVar4 + 0x14))) goto LAB_18001ea7f;
                  if (puVar4 == *(undefined8 **)(alStack_60[0] + uVar8 * 0x10)) break;
                  puVar4 = (undefined8 *)puVar4[1];
                }
              }
            }
            else {
LAB_18001ea7f:
              iVar11 = iVar11 + 1;
            }
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 1;
        } while (uVar6 < 0x10);
        uVar12 = uVar12 + 1;
        lStackX_18 = lStackX_18 + 1;
      } while (uVar12 < 0x10);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


/* dig PE:6af2166e:00067000; getWarmPaintEnabled; RVA 0x1ec10..0x1ec18 */

undefined1 load_getWarmPaintEnabled(void)

{
  return DAT_18005ef73;
}


/* dig PE:6af2166e:00067000; getDampPaintEnabled; RVA 0x1eb60..0x1eb68 */

undefined1 load_getDampPaintEnabled(void)

{
  return DAT_18005ef74;
}


/* dig PE:6af2166e:00067000; setWarmPaintEnabled; RVA 0x233a0..0x233a7 */

void load_setWarmPaintEnabled(undefined8 param_1,undefined1 param_2)

{
  DAT_18005ef73 = param_2;
  return;
}


/* dig PE:6af2166e:00067000; setDampPaintEnabled; RVA 0x23390..0x23397 */

void load_setDampPaintEnabled(undefined8 param_1,undefined1 param_2)

{
  DAT_18005ef74 = param_2;
  return;
}


/* dig PE:6af2166e:00067000; toggleCurLevelWarmDig; RVA 0x23920..0x2392c */

void load_toggleCurLevelWarmDig(undefined8 param_1)

{
  load_toggleCurLevelDig(param_1,0x18005efe8);
  return;
}


/* dig PE:6af2166e:00067000; toggleCurLevelDampDig; RVA 0x23910..0x2391c */

void load_toggleCurLevelDampDig(undefined8 param_1)

{
  load_toggleCurLevelDig(param_1,0x18005ef78);
  return;
}


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


/* dig PE:6af2166e:00067000; registerWarmDampBox; RVA 0x2290..0x25c6 */

undefined8 load_registerWarmDampBox(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStackX_12;
  undefined2 uStackX_18;
  undefined2 uStackX_1a;
  undefined2 uStackX_1c;
  undefined8 uStackX_20;
  char *pcStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 *puStack_110;
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [160];
  
  cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar3 != '\0') {
    uVar8 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                      (0x18005d018,auStack_d8,0);
    pcStack_128 = "entering registerWarmDampBox\n";
    uStack_120 = 0x1d;
    FUN_18000b5e0(uVar8,&pcStack_128);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_d8);
  }
  uStackX_12 = 0x8ad08ad0;
  _lua_getfield__YAHPEAUlua_State__HPEBD_Z(param_1,1,"x1");
  iVar7 = _lua_type__YAHPEAUlua_State__H_Z(param_1,0xffffffff);
  if (iVar7 != 0) {
    uVar8 = _lua_tointegerx__YA_JPEAUlua_State__HPEAH_Z(param_1,0xffffffff,0);
    uStackX_20 = uVar8;
    _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
    _lua_getfield__YAHPEAUlua_State__HPEBD_Z(param_1,1,"y1");
    iVar7 = _lua_type__YAHPEAUlua_State__H_Z(param_1,0xffffffff);
    if (iVar7 != 0) {
      sVar4 = _lua_tointegerx__YA_JPEAUlua_State__HPEAH_Z(param_1,0xffffffff,0);
      _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
      _lua_getfield__YAHPEAUlua_State__HPEBD_Z(param_1,1,"z1");
      iVar7 = _lua_type__YAHPEAUlua_State__H_Z(param_1,0xffffffff);
      if (iVar7 != 0) {
        sVar5 = _lua_tointegerx__YA_JPEAUlua_State__HPEAH_Z(param_1,0xffffffff,0);
        _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
        _lua_getfield__YAHPEAUlua_State__HPEBD_Z(param_1,1,"x2");
        iVar7 = _lua_type__YAHPEAUlua_State__H_Z(param_1,0xffffffff);
        if (iVar7 != 0) {
          sVar6 = _lua_tointegerx__YA_JPEAUlua_State__HPEAH_Z(param_1,0xffffffff,0);
          _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
          cVar3 = load_decodeBox(param_1,1,"y2",&uStackX_12);
          if ((cVar3 != '\0') &&
             (cVar3 = load_decodeBox(param_1,1,"z2",(longlong)&uStackX_12 + 2), cVar3 != '\0')) {
            FUN_180010290(auStack_118);
            load_collectLevelDesignations(auStack_118);
            iVar11 = (int)uStackX_12._2_2_;
            iVar7 = (int)sVar5;
            if (iVar7 <= iVar11) {
              iVar12 = (int)(short)uStackX_12;
              do {
                if (sVar4 <= iVar12) {
                  sVar5 = (short)uVar8;
                  iVar10 = (int)sVar4;
                  do {
                    if ((int)sVar5 <= (int)sVar6) {
                      uStackX_1a = (undefined2)iVar10;
                      uStackX_1c = (undefined2)iVar7;
                      iVar9 = (int)sVar5;
                      do {
                        uStackX_18 = (undefined2)iVar9;
                        load_registerTile(&uStackX_18,auStack_118);
                        iVar9 = iVar9 + 1;
                      } while (iVar9 <= sVar6);
                    }
                    iVar10 = iVar10 + 1;
                    uVar8 = uStackX_20;
                  } while (iVar10 <= iVar12);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 <= iVar11);
            }
            FUN_180011390(auStack_100);
            *(undefined8 *)puStack_110[1] = 0;
            puVar2 = (undefined8 *)*puStack_110;
            while (puVar2 != (undefined8 *)0x0) {
              puVar1 = (undefined8 *)*puVar2;
              load_supplier_0x43814(puVar2,0x20);
              puVar2 = puVar1;
            }
            load_supplier_0x43814(puStack_110,0x20);
            return 0;
          }
          goto LAB_180002594;
        }
      }
    }
  }
  _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
LAB_180002594:
  _luaL_argerror__YAHPEAUlua_State__HPEBD_Z(param_1,1,"invalid box bounds");
  return 0;
}


/* dig PE:6af2166e:00067000; registerWarmDampTile; RVA 0x2170..0x228f */

undefined8 load_registerWarmDampTile(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 uStackX_10;
  undefined2 uStackX_14;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 *puStack_e0;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [160];
  
  cVar3 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar3 != '\0') {
    uVar4 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                      (0x18005d018,auStack_a8,0);
    pcStack_f8 = "entering registerWarmDampTile\n";
    uStack_f0 = 0x1e;
    FUN_18000b5e0(uVar4,&pcStack_f8);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_a8);
  }
  uStackX_10 = 0x8ad08ad0;
  uStackX_14 = 0x8ad0;
  _CheckDFAssign_Lua_DFHack__YAXPEAUlua_State__PEBVtype_identity_2_PEAXH_N_Z
            (param_1,0x18005ef88,&uStackX_10,1,0);
  FUN_180010290(auStack_e8);
  load_collectLevelDesignations(auStack_e8);
  load_registerTile(&uStackX_10,auStack_e8);
  FUN_180011390(auStack_d0);
  *(undefined8 *)puStack_e0[1] = 0;
  puVar2 = (undefined8 *)*puStack_e0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    load_supplier_0x43814(puVar2,0x20);
    puVar2 = puVar1;
  }
  load_supplier_0x43814(puStack_e0,0x20);
  return 0;
}


/* dig PE:6af2166e:00067000; toggleCurLevelDig; RVA 0x23930..0x2407c */

void load_toggleCurLevelDig(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  uint uStackX_20;
  ushort uStack_128;
  ushort uStack_126;
  ushort uStack_124;
  float afStack_118 [2];
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  int iStack_d8;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 *puStack_a0;
  longlong alStack_90 [3];
  ulonglong uStack_78;
  undefined1 auStack_68 [40];
  
  FUN_180010290(auStack_a8);
  load_collectLevelDesignations(auStack_a8);
  afStack_118[0] = 0.0;
  puStack_110 = (undefined8 *)0x0;
  lStack_108 = 0;
  puVar7 = (undefined8 *)FUN_1800437d8(0x18);
  *puVar7 = puVar7;
  puVar7[1] = puVar7;
  puStack_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_e8 = 7;
  uStack_e0 = 8;
  afStack_118[0] = 1.0;
  puStack_110 = puVar7;
  puVar8 = (undefined8 *)FUN_1800437d8(0x80);
  if ((longlong)puStack_f0 - (longlong)puStack_100 >> 3 != 0) {
    FUN_180018ed0(&puStack_100);
  }
  puStack_f8 = puVar8 + 0x10;
  for (puVar14 = puVar8; puVar14 != puStack_f8; puVar14 = puVar14 + 1) {
    *puVar14 = puVar7;
  }
  bVar3 = false;
  bVar6 = 1;
  iVar13 = **(int **)_window_z_global_df__3PEAHEA_exref;
  plStack_d0 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba0);
  plStack_c0 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x116ba8);
  puStack_100 = puVar8;
  puStack_f0 = puStack_f8;
  iStack_d8 = iVar13;
  bVar5 = false;
  if (plStack_d0 != plStack_c0) {
    do {
      bVar3 = bVar5;
      lVar1 = *plStack_d0;
      if (*(short *)(lVar1 + 0x8c) == iVar13) {
        lVar10 = 0;
        uStackX_20 = 0;
LAB_180023a90:
        uVar18 = 0;
        uStack_c8 = (ulonglong)uStackX_20;
LAB_180023ab0:
        uStack_124 = *(ushort *)(lVar1 + 0x8c);
        uStack_128 = (short)uStackX_20 + *(short *)(lVar1 + 0x88);
        uStack_126 = (short)uVar18 + *(short *)(lVar1 + 0x8a);
        lVar11 = *plStack_d0;
        if ((*(uint *)(lVar11 + 0x2a0 +
                      ((ulonglong)((uint)uVar18 & 0xf) + (ulonglong)(uStackX_20 & 0xf) * 0x10) * 4)
            & 0x200) == 0) goto LAB_180023f3a;
        uVar16 = (((ulonglong)(byte)uStack_128 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uStack_128 >> 8)) * 0x100000001b3 + 0x9e3779b97f4a7c15;
        uVar16 = (((ulonglong)(byte)uStack_126 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uStack_126 >> 8)) * 0x100000001b3 + uVar16 * 0x1000 +
                 -0x61c8864680b583eb + (uVar16 >> 4) ^ uVar16;
        uVar16 = (uVar16 * 0x1000 +
                  (((ulonglong)(byte)uStack_124 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)(uStack_124 >> 8)) * 0x100000001b3 + (uVar16 >> 4) +
                  -0x61c8864680b583eb ^ uVar16) & uStack_78;
        puVar7 = *(undefined8 **)(alStack_90[0] + 8 + uVar16 * 0x10);
        if (puVar7 != puStack_a0) {
          while( true ) {
            if (((uStack_128 == *(ushort *)(puVar7 + 2)) &&
                (uStack_126 == *(ushort *)((longlong)puVar7 + 0x12))) &&
               (uStack_124 == *(ushort *)((longlong)puVar7 + 0x14))) {
              plVar9 = (longlong *)FUN_180005f80(auStack_a8,auStack_68,&uStack_128);
              lVar11 = *plVar9;
              uVar16 = (((((((((ulonglong)*(byte *)(lVar11 + 0x18) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)(lVar11 + 0x19)) * 0x100000001b3 ^
                            (ulonglong)*(byte *)(lVar11 + 0x1a)) * 0x100000001b3 ^
                           (ulonglong)*(byte *)(lVar11 + 0x1b)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)(lVar11 + 0x1c)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)(lVar11 + 0x1d)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)(lVar11 + 0x1e)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)(lVar11 + 0x1f)) * 0x100000001b3;
              puVar7 = (undefined8 *)puStack_100[(uVar16 & uStack_e8) * 2 + 1];
              puVar8 = puStack_110;
              if (puVar7 == puStack_110) goto LAB_180023d07;
              if (*(longlong *)(lVar11 + 0x18) == puVar7[2]) goto LAB_180023f3a;
              goto LAB_180023cf0;
            }
            if (puVar7 == *(undefined8 **)(alStack_90[0] + uVar16 * 0x10)) break;
            puVar7 = (undefined8 *)puVar7[1];
          }
        }
        if ((*(byte *)(lVar11 + 0x2a0 + (uStack_c8 * 0x10 + uVar18) * 4) & 0x70) != 0) {
          if ((lVar10 == 0) &&
             (lVar10 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                                 (param_2,lVar11,bVar6), lVar10 == 0)) goto LAB_180023f4f;
          if (!bVar3) {
            bVar6 = _getassignment_tile_bitmask_df__QEAA_NHH_Z(lVar10,uStackX_20,uVar18);
            bVar6 = bVar6 ^ 1;
          }
          _setassignment_tile_bitmask_df__QEAAXHH_N_Z(lVar10,uStackX_20,uVar18,bVar6);
          bVar3 = true;
        }
        goto LAB_180023f3a;
      }
LAB_180023f6c:
      plStack_d0 = plStack_d0 + 1;
      bVar5 = bVar3;
    } while (plStack_d0 != plStack_c0);
    if (bVar6 == 0) goto LAB_180023fc1;
  }
  puVar8 = puStack_110;
  for (puVar7 = (undefined8 *)*puStack_110; puVar7 != puVar8; puVar7 = (undefined8 *)*puVar7) {
    load_onJobCompleted(param_1,puVar7[2]);
  }
  if (bVar3) {
    load_setPluginEnabled(1);
  }
LAB_180023fc1:
  FUN_180011320(&puStack_100);
  *(undefined8 *)puStack_110[1] = 0;
  puVar7 = (undefined8 *)*puStack_110;
  while (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar7;
    load_supplier_0x43814(puVar7,0x18);
    puVar7 = puVar8;
  }
  load_supplier_0x43814(puStack_110,0x18);
  FUN_180011390(alStack_90);
  *(undefined8 *)puStack_a0[1] = 0;
  puVar7 = (undefined8 *)*puStack_a0;
  while (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar7;
    load_supplier_0x43814(puVar7,0x20);
    puVar7 = puVar8;
  }
  load_supplier_0x43814(puStack_a0,0x20);
  return;
  while (puVar7 = (undefined8 *)puVar7[1], *(longlong *)(lVar11 + 0x18) != puVar7[2]) {
LAB_180023cf0:
    puVar8 = puVar7;
    if (puVar7 == (undefined8 *)puStack_100[(uVar16 & uStack_e8) * 2]) goto LAB_180023d07;
  }
  goto LAB_180023f3a;
LAB_180023d07:
  if (lStack_108 == 0xaaaaaaaaaaaaaaa) {
    load_supplier_0x41949("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ppuStack_b8 = &puStack_110;
  puStack_b0 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)FUN_1800437d8(0x18);
  uVar4 = uStack_e0;
  puVar7[2] = *(undefined8 *)(lVar11 + 0x18);
  if (afStack_118[0] < (float)(lStack_108 + 1) / (float)uStack_e0) {
    puStack_b0 = puVar7;
    fVar19 = (float)load_supplier_0x45086((float)(lStack_108 + 1) / afStack_118[0]);
    lVar11 = 0;
    if ((9.223372e+18 <= fVar19) && (fVar19 = fVar19 - 9.223372e+18, fVar19 < 9.223372e+18)) {
      lVar11 = -0x8000000000000000;
    }
    uVar12 = 8;
    if (8 < (ulonglong)((longlong)fVar19 + lVar11)) {
      uVar12 = (longlong)fVar19 + lVar11;
    }
    uVar15 = uVar4;
    if ((uVar4 < uVar12) && ((0x1ff < uVar4 || (uVar15 = uVar4 * 8, uVar4 * 8 < uVar12)))) {
      uVar15 = uVar12;
    }
    FUN_180015750(afStack_118,uVar15);
    puVar14 = (undefined8 *)puStack_100[(uStack_e8 & uVar16) * 2 + 1];
    puVar8 = puStack_110;
    if (puVar14 != puStack_110) {
      lVar11 = puVar14[2];
      puVar8 = puVar14;
      while (puVar7[2] != lVar11) {
        if (puVar8 == (undefined8 *)puStack_100[(uStack_e8 & uVar16) * 2]) goto LAB_180023e67;
        puVar8 = (undefined8 *)puVar8[1];
        lVar11 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180023e67:
  puStack_b0 = (undefined8 *)0x0;
  puVar14 = (undefined8 *)puVar8[1];
  lStack_108 = lStack_108 + 1;
  *puVar7 = puVar8;
  puVar7[1] = puVar14;
  *puVar14 = puVar7;
  puVar8[1] = puVar7;
  uVar16 = uStack_e8 & uVar16;
  if ((undefined8 *)puStack_100[uVar16 * 2] == puStack_110) {
    puStack_100[uVar16 * 2] = puVar7;
  }
  else {
    if ((undefined8 *)puStack_100[uVar16 * 2] == puVar8) {
      puStack_100[uVar16 * 2] = puVar7;
      goto LAB_180023f3a;
    }
    if ((undefined8 *)puStack_100[uVar16 * 2 + 1] != puVar14) goto LAB_180023f3a;
  }
  puStack_100[uVar16 * 2 + 1] = puVar7;
LAB_180023f3a:
  uVar17 = (uint)uVar18 + 1;
  uVar18 = (ulonglong)uVar17;
  if (0xf < uVar17) goto LAB_180023f4f;
  goto LAB_180023ab0;
LAB_180023f4f:
  uStackX_20 = uStackX_20 + 1;
  iVar13 = iStack_d8;
  if (0xf < uStackX_20) goto LAB_180023f6c;
  goto LAB_180023a90;
}


/* dig PE:6af2166e:00067000; registerTile; RVA 0x24ce0..0x24e84 */

void load_registerTile(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uStackX_8;
  
  uVar1 = *param_1;
  uStackX_8._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar6 = (int)uStackX_8._2_2_;
  uStackX_8 = uVar1;
  lVar3 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                    ((int)(short)uVar1,iVar6,(int)*(short *)(param_1 + 1));
  uVar1 = *param_1;
  uStackX_8._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar6 = (int)uStackX_8._2_2_;
  uStackX_8 = uVar1;
  pbVar4 = (byte *)_getTileDesignation_Maps_DFHack__YAPEATtile_designation_df__HHH_Z
                             ((int)(short)uVar1,iVar6,(int)*(short *)(param_1 + 1));
  if ((lVar3 != 0) && (pbVar4 != (byte *)0x0)) {
    if (((*pbVar4 & 0x70) == 0) && (cVar2 = FUN_180018860(param_2,param_1), cVar2 == '\0')) {
      lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005efe8,lVar3,0);
      if (lVar5 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar5,&uStackX_8,0);
      }
      lVar3 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005ef78,lVar3,0);
      if (lVar3 == 0) {
        return;
      }
      uStackX_8 = *param_1;
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar3,&uStackX_8,0);
      return;
    }
    if (DAT_18005ef73 != '\0') {
      lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005efe8,lVar3,1);
      if (lVar5 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar5,&uStackX_8,1);
        load_setPluginEnabled(1);
      }
    }
    if (DAT_18005ef74 != '\0') {
      lVar3 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                        (0x18005ef78,lVar3,1);
      if (lVar3 != 0) {
        uStackX_8 = *param_1;
        _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z
                  (lVar3,&uStackX_8,1);
        load_setPluginEnabled(1);
      }
    }
  }
  return;
}


/* dig PE:6af2166e:00067000; collectLevelDesignations; RVA 0x1e160..0x1e3a4 */

void load_collectLevelDesignations
               (float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  
  plVar2 = *(longlong **)(*(longlong *)_world_global_df__3PEAU02_EA_exref + 0x14cd8);
  do {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    lVar3 = *plVar2;
    lVar6 = _attrs___enum_traits_W4job_type_1enums_df___df__SAAEBUattr_entry_type_12_W4job_type_4enums_2__Z
                      (*(undefined2 *)(lVar3 + 0x14));
    if (*(int *)(lVar6 + 8) == 1) {
      uVar7 = FUN_180003350(param_1,lVar3 + 0x1c);
      uVar10 = uVar7 & *(ulonglong *)(param_1 + 0xc);
      uVar11 = uVar10 * 2;
      puVar8 = *(undefined8 **)(param_1 + 6);
      puVar9 = (undefined8 *)puVar8[uVar10 * 2 + 1];
      pfVar1 = param_1 + 2;
      puVar12 = *(undefined8 **)pfVar1;
      if (puVar9 != *(undefined8 **)pfVar1) {
        puVar8 = (undefined8 *)puVar8[uVar10 * 2];
        uVar11 = (ulonglong)*(ushort *)(lVar3 + 0x1c);
        while( true ) {
          if (((*(ushort *)(lVar3 + 0x1c) == *(ushort *)(puVar9 + 2)) &&
              (*(short *)(lVar3 + 0x1e) == *(short *)((longlong)puVar9 + 0x12))) &&
             (*(short *)(lVar3 + 0x20) == *(short *)((longlong)puVar9 + 0x14))) goto LAB_18001e36d;
          puVar12 = puVar9;
          if (puVar9 == puVar8) break;
          puVar9 = (undefined8 *)puVar9[1];
        }
      }
      if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
        load_supplier_0x41949("unordered_map/set too long");
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar8 = (undefined8 *)FUN_1800437d8(0x20,uVar11,puVar8,param_4,pfVar1,0);
      *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(lVar3 + 0x1c);
      *(undefined2 *)((longlong)puVar8 + 0x14) = *(undefined2 *)(lVar3 + 0x20);
      puVar8[3] = lVar3;
      fVar13 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar13 && fVar13 != *param_1) {
        FUN_1800165d0(param_1);
        puVar9 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10);
        puVar12 = *(undefined8 **)pfVar1;
        if (puVar9 != *(undefined8 **)pfVar1) {
          for (; ((*(short *)(puVar8 + 2) != *(short *)(puVar9 + 2) ||
                  (*(short *)((longlong)puVar8 + 0x12) != *(short *)((longlong)puVar9 + 0x12))) ||
                 (*(short *)((longlong)puVar8 + 0x14) != *(short *)((longlong)puVar9 + 0x14)));
              puVar9 = (undefined8 *)puVar9[1]) {
            puVar12 = puVar9;
            if (puVar9 == *(undefined8 **)
                           (*(longlong *)(param_1 + 6) +
                           (*(ulonglong *)(param_1 + 0xc) & uVar7) * 0x10)) goto LAB_18001e30f;
          }
          puVar12 = (undefined8 *)*puVar9;
        }
      }
LAB_18001e30f:
      puVar9 = (undefined8 *)puVar12[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar8 = puVar12;
      puVar8[1] = puVar9;
      *puVar9 = puVar8;
      puVar12[1] = puVar8;
      uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
      lVar3 = *(longlong *)(param_1 + 6);
      puVar4 = *(undefined8 **)(lVar3 + uVar7 * 0x10);
      if (puVar4 == *(undefined8 **)pfVar1) {
        *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar8;
LAB_18001e35e:
        *(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) = puVar8;
      }
      else if (puVar4 == puVar12) {
        *(undefined8 **)(lVar3 + uVar7 * 0x10) = puVar8;
      }
      else if (*(undefined8 **)(lVar3 + 8 + uVar7 * 0x10) == puVar9) goto LAB_18001e35e;
    }
LAB_18001e36d:
    plVar2 = (longlong *)plVar2[2];
  } while( true );
}


/* dig PE:6af2166e:00067000; decodeBox; RVA 0x1eda0..0x1ee0f */

undefined4
load_decodeBox(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  _lua_getfield__YAHPEAUlua_State__HPEBD_Z();
  iVar2 = _lua_type__YAHPEAUlua_State__H_Z(param_1,0xffffffff);
  if (iVar2 == 0) {
    _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
    return 0;
  }
  uVar1 = _lua_tointegerx__YA_JPEAUlua_State__HPEAH_Z(param_1,0xffffffff,0);
  *param_4 = uVar1;
  _lua_settop__YAXPEAUlua_State__H_Z(param_1,0xfffffffe);
  return 1;
}


/* dig PE:6af2166e:00067000; setPluginEnabled; RVA 0x1d8d0..0x1db91 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_setPluginEnabled(char param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  char *pcStack_128;
  code *pcStack_120;
  char *pcStack_118;
  code *pcStack_110;
  char *pcStack_108;
  undefined1 auStack_f0 [152];
  char *pcStack_58;
  code *pcStack_50;
  char *pcStack_48;
  longlong alStack_38 [3];
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_18005e4c0 ^ (ulonglong)auStack_158;
  if (param_1 == *_DAT_18005d010) {
    cVar2 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,1);
    if (cVar2 != '\0') {
      plVar3 = (longlong *)
               _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                         (0x18005d018,auStack_f0,1);
      pcStack_58 = "disabled";
      if (*_DAT_18005d010 != '\0') {
        pcStack_58 = "enabled";
      }
      pcStack_118 = (char *)0xcc;
      pcStack_128 = "{}, but already {}; no action\n";
      pcStack_120 = (code *)0x1e;
      pcStack_110 = (code *)&pcStack_58;
      pcStack_48 = pcStack_58;
      FUN_1800407e0(alStack_38,&pcStack_128,&pcStack_118);
      _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar3,0);
      (**(code **)(*plVar3 + 0x10))(plVar3,(int)plVar3[2],alStack_38);
      if (0xf < uStack_20) {
        if (0xfff < uStack_20 + 1) {
          if (0x1f < (alStack_38[0] - *(longlong *)(alStack_38[0] + -8)) - 8U) {
            uStack_138 = 0;
            _invoke_watson(0,0,0,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        load_supplier_0x43814();
      }
      ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_f0);
    }
  }
  else {
    *_DAT_18005d010 = param_1;
    cVar2 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z();
    if (cVar2 != '\0') {
      plVar3 = (longlong *)
               _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12__Z
                         (0x18005d018,auStack_f0,1);
      pcStack_58 = "disabled";
      if (*_DAT_18005d010 != '\0') {
        pcStack_58 = "enabled";
      }
      pcStack_128 = (char *)0xc;
      pcStack_118 = "{}\n";
      pcStack_110 = (code *)0x3;
      pcStack_120 = (code *)&pcStack_58;
      FUN_1800407e0(alStack_38,&pcStack_118,&pcStack_128);
      _flush_buffer_color_ostream_DFHack__AEAAX_N_Z(plVar3,0);
      (**(code **)(*plVar3 + 0x10))(plVar3,(int)plVar3[2],alStack_38);
      if (0xf < uStack_20) {
        if (0xfff < uStack_20 + 1) {
          if (0x1f < (alStack_38[0] - *(longlong *)(alStack_38[0] + -8)) - 8U) {
            uStack_138 = 0;
            _invoke_watson(0,0,0,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        load_supplier_0x43814();
      }
      ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_f0);
    }
    if (param_1 == '\0') {
      _unregisterAll_EventManager_DFHack__YAXPEAVPlugin_2__Z(_plugin_self);
    }
    else {
      pcStack_58 = _plugin_self;
      pcStack_50 = load_onJobCompleted;
      pcStack_48 = (char *)((ulonglong)pcStack_48 & 0xffffffff00000000);
      pcStack_118 = _plugin_self;
      pcStack_110 = load_onJobCompleted;
      pcStack_108 = pcStack_48;
      _registerListener_EventManager_DFHack__YAXW4EventType_312_UEventHandler_12__Z(2,&pcStack_118);
    }
  }
  FUN_180043d60(uStack_18 ^ (ulonglong)auStack_158);
  return;
}


/* dig PE:6af2166e:00067000; onJobCompleted; RVA 0x241d0..0x24828 */

void load_onJobCompleted(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uStackX_10;
  undefined4 uStackX_18;
  undefined2 uStackX_1c;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [160];
  
  uStackX_10 = param_2;
  lVar5 = _attrs___enum_traits_W4job_type_1enums_df___df__SAAEBUattr_entry_type_12_W4job_type_4enums_2__Z
                    (*(undefined2 *)(param_2 + 0x14));
  if (*(int *)(lVar5 + 8) != 1) {
    return;
  }
  cVar2 = _isEnabled_DebugCategory_DFHack__QEBA_NW4level_12__Z(0x18005d018,0);
  if (cVar2 != '\0') {
    uVar6 = _getStream_DebugCategory_DFHack__QEBA_AUostream_proxy_prefix_12_W4level_12_AEAVcolor_ostream_2__Z
                      (0x18005d018,auStack_d8,0,param_1);
    pcStack_e8 = "handing dig job at ({},{},{})\n";
    uStack_e0 = 0x1e;
    FUN_18000bd30(uVar6,&pcStack_e8,param_2 + 0x1c,param_2 + 0x1e,param_2 + 0x20);
    ___Dostream_proxy_prefix_DebugCategory_DFHack__QEAAXXZ(auStack_d8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uStackX_18._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar9 = (int)uStackX_18._2_2_;
  uStackX_18 = uVar1;
  lVar5 = _getTileBlock_Maps_DFHack__YAPEAUmap_block_df__HHH_Z
                    ((int)(short)uVar1,iVar9,(int)*(short *)(param_2 + 0x20));
  if (lVar5 != 0) {
    cVar2 = '\0';
    cVar3 = '\0';
    lVar7 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                      (0x18005efe8,lVar5,0);
    if (lVar7 != 0) {
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      cVar2 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                        (lVar7,&uStackX_18);
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar7,&uStackX_18,0)
      ;
    }
    lVar5 = _getPersistentTilemask_World_DFHack__YAPEAUtile_bitmask_df__AEAVPersistentDataItem_2_PEAUmap_block_4__N_Z
                      (0x18005ef78,lVar5,0);
    if (lVar5 != 0) {
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      cVar3 = _getassignment_tile_bitmask_df__QEAA_NAEBU__Coord2d_F_0_HFDA__DFHack___Z
                        (lVar5,&uStackX_18);
      uStackX_18 = *(undefined4 *)(param_2 + 0x1c);
      _setassignment_tile_bitmask_df__QEAAXAEBU__Coord2d_F_0_HFDA__DFHack___N_Z(lVar5,&uStackX_18,0)
      ;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    uStackX_18._2_2_ = (short)((uint)uVar1 >> 0x10);
    iVar9 = (int)uStackX_18._2_2_;
    uStackX_18 = uVar1;
    puVar8 = (uint *)_getTileOccupancy_Maps_DFHack__YAPEATtile_occupancy_df__HHH_Z
                               ((int)(short)uVar1,iVar9,(int)*(short *)(param_2 + 0x20));
    if (((puVar8 != (uint *)0x0) && ((*puVar8 & 0x2000000) != 0)) &&
       ((cVar2 != '\0' || (cVar3 != '\0')))) {
      FUN_18001cfd0(param_1,cVar2,cVar3,param_2 + 0x1c);
    }
  }
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  uStackX_18 = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + 1);
  uStackX_1c = *(undefined2 *)(param_2 + 0x20);
  FUN_180024830(param_1,&uStackX_18);
  sVar4 = *(short *)(uStackX_10 + 0x14);
  if (sVar4 == 6) {
LAB_1800247cd:
    uStackX_10 = CONCAT62(uStackX_10._2_6_,*(undefined2 *)(param_2 + 0x1c));
    sVar4 = *(short *)(param_2 + 0x1e);
  }
  else {
    if (sVar4 == 7) {
      uStackX_10 = CONCAT44(uStackX_10._4_4_,*(undefined4 *)(param_2 + 0x1c));
      sVar4 = *(short *)(param_2 + 0x20) + -1;
      goto LAB_1800247e4;
    }
    if (sVar4 == 8) {
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,*(undefined4 *)(param_2 + 0x1c));
      FUN_180024830(param_1,&uStackX_10);
      goto LAB_1800247cd;
    }
    if (sVar4 != 9) {
      if (sVar4 != 10) {
        return;
      }
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
      uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + -1,(undefined4)uStackX_10);
      FUN_180024830(param_1,&uStackX_10);
      uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + 1);
      sVar4 = *(short *)(param_2 + 0x20) + -1;
      goto LAB_1800247e4;
    }
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(undefined2 *)(param_2 + 0x1c));
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + -1,*(short *)(param_2 + 0x1c) + 1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(undefined2 *)(param_2 + 0x1e),*(short *)(param_2 + 0x1c) + 1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(short *)(param_2 + 0x1c) + -1);
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10._0_4_ = CONCAT22(*(short *)(param_2 + 0x1e) + 1,*(undefined2 *)(param_2 + 0x1c));
    uStackX_10._0_6_ = CONCAT24(*(short *)(param_2 + 0x20) + 1,(undefined4)uStackX_10);
    FUN_180024830(param_1,&uStackX_10);
    uStackX_10 = CONCAT62(uStackX_10._2_6_,*(short *)(param_2 + 0x1c) + 1);
    sVar4 = *(short *)(param_2 + 0x1e) + 1;
  }
  uStackX_10._0_4_ = CONCAT22(sVar4,(undefined2)uStackX_10);
  sVar4 = *(short *)(param_2 + 0x20) + 1;
LAB_1800247e4:
  uStackX_10._0_6_ = CONCAT24(sVar4,(undefined4)uStackX_10);
  FUN_180024830(param_1,&uStackX_10);
  return;
}


