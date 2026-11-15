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

