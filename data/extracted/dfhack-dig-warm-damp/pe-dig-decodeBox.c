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

