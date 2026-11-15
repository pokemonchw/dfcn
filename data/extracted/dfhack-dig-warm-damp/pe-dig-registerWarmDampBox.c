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

