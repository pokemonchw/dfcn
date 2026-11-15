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

