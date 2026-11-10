
/* RVA 0x1010; VA 180001010; FUN_180001010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001010(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1800216b0();
  _plugin_abi_version = (int)uVar1;
  return;
}



/* RVA 0x1030; VA 180001030; FUN_180001030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001030(void)

{
  _plugin_git_description = autofarm_git_description();
  return;
}



/* RVA 0x1060; VA 180001060; FUN_180001060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001060(void)

{
  function_identity_base *pfVar1;
  function_identity_base *pfVar2;
  function_identity_base *pfVar3;
  
  pfVar1 = (function_identity_base *)FUN_180064554(0x68);
  if (pfVar1 == (function_identity_base *)0x0) {
    pfVar1 = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(pfVar1,1,true);
    *(undefined ***)pfVar1 =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int)>::vftable;
    *(code **)(pfVar1 + 0x18) = autofarm_set_default_threshold;
    *(undefined8 *)(pfVar1 + 0x20) = 0;
    *(undefined8 *)(pfVar1 + 0x28) = 0;
    *(undefined8 *)(pfVar1 + 0x30) = 0;
    *(undefined8 *)(pfVar1 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar1 + 0x20),"autofarm_setDefaultThreshold",0x1c);
    pfVar1[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar1 + 0x48) = 0;
    *(undefined8 *)(pfVar1 + 0x50) = 0;
    *(undefined8 *)(pfVar1 + 0x58) = 0;
    *(undefined8 *)(pfVar1 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar1 + 0x48),(void *)0x0,0);
  }
  pfVar3 = (function_identity_base *)0x0;
  _DAT_18007d060 = "autofarm_setThreshold";
  _DAT_18007d058 = pfVar1;
  pfVar2 = (function_identity_base *)FUN_180064554(0x68);
  pfVar1 = pfVar3;
  if (pfVar2 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar2,2,true);
    *(undefined ***)pfVar2 =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,int)>::vftable;
    *(code **)(pfVar2 + 0x18) = FUN_180018b80;
    *(undefined8 *)(pfVar2 + 0x20) = 0;
    *(undefined8 *)(pfVar2 + 0x28) = 0;
    *(undefined8 *)(pfVar2 + 0x30) = 0;
    *(undefined8 *)(pfVar2 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x20),"autofarm_setThreshold",0x15);
    pfVar2[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar2 + 0x48) = 0;
    *(undefined8 *)(pfVar2 + 0x50) = 0;
    *(undefined8 *)(pfVar2 + 0x58) = 0;
    *(undefined8 *)(pfVar2 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x48),(void *)0x0,0);
    pfVar1 = pfVar2;
  }
  _DAT_18007d070 = "autofarm_removeThreshold";
  _DAT_18007d068 = pfVar1;
  pfVar2 = (function_identity_base *)FUN_180064554(0x68);
  pfVar1 = pfVar3;
  if (pfVar2 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar2,1,true);
    *(undefined ***)pfVar2 =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int)>::vftable;
    *(code **)(pfVar2 + 0x18) = FUN_180018a50;
    *(undefined8 *)(pfVar2 + 0x20) = 0;
    *(undefined8 *)(pfVar2 + 0x28) = 0;
    *(undefined8 *)(pfVar2 + 0x30) = 0;
    *(undefined8 *)(pfVar2 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x20),"autofarm_removeThreshold",0x18);
    pfVar2[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar2 + 0x48) = 0;
    *(undefined8 *)(pfVar2 + 0x50) = 0;
    *(undefined8 *)(pfVar2 + 0x58) = 0;
    *(undefined8 *)(pfVar2 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x48),(void *)0x0,0);
    pfVar1 = pfVar2;
  }
  _DAT_18007d080 = "autofarm_setGrowthThreshold";
  _DAT_18007d078 = pfVar1;
  pfVar2 = (function_identity_base *)FUN_180064554(0x68);
  pfVar1 = pfVar3;
  if (pfVar2 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar2,3,true);
    *(undefined ***)pfVar2 =
         df::
         function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int)>
         ::vftable;
    *(code **)(pfVar2 + 0x18) = FUN_180018b20;
    *(undefined8 *)(pfVar2 + 0x20) = 0;
    *(undefined8 *)(pfVar2 + 0x28) = 0;
    *(undefined8 *)(pfVar2 + 0x30) = 0;
    *(undefined8 *)(pfVar2 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x20),"autofarm_setGrowthThreshold",0x1b);
    pfVar2[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar2 + 0x48) = 0;
    *(undefined8 *)(pfVar2 + 0x50) = 0;
    *(undefined8 *)(pfVar2 + 0x58) = 0;
    *(undefined8 *)(pfVar2 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x48),(void *)0x0,0);
    pfVar1 = pfVar2;
  }
  _DAT_18007d090 = "autofarm_removeGrowthThreshold";
  _DAT_18007d088 = pfVar1;
  pfVar2 = (function_identity_base *)FUN_180064554(0x68);
  pfVar1 = pfVar3;
  if (pfVar2 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar2,2,true);
    *(undefined ***)pfVar2 =
         df::
         function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>
         ::vftable;
    *(code **)(pfVar2 + 0x18) = FUN_180018990;
    *(undefined8 *)(pfVar2 + 0x20) = 0;
    *(undefined8 *)(pfVar2 + 0x28) = 0;
    *(undefined8 *)(pfVar2 + 0x30) = 0;
    *(undefined8 *)(pfVar2 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x20),"autofarm_removeGrowthThreshold",0x1e);
    pfVar2[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar2 + 0x48) = 0;
    *(undefined8 *)(pfVar2 + 0x50) = 0;
    *(undefined8 *)(pfVar2 + 0x58) = 0;
    *(undefined8 *)(pfVar2 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x48),(void *)0x0,0);
    pfVar1 = pfVar2;
  }
  _DAT_18007d0a0 = "autofarm_isFarmExcluded";
  _DAT_18007d098 = pfVar1;
  pfVar2 = (function_identity_base *)FUN_180064554(0x68);
  pfVar1 = pfVar3;
  if (pfVar2 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar2,1,true);
    *(undefined ***)pfVar2 = df::function_identity<bool_(__cdecl*)(int)>::vftable;
    *(code **)(pfVar2 + 0x18) = autofarm_is_farm_excluded;
    *(undefined8 *)(pfVar2 + 0x20) = 0;
    *(undefined8 *)(pfVar2 + 0x28) = 0;
    *(undefined8 *)(pfVar2 + 0x30) = 0;
    *(undefined8 *)(pfVar2 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x20),"autofarm_isFarmExcluded",0x17);
    pfVar2[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar2 + 0x48) = 0;
    *(undefined8 *)(pfVar2 + 0x50) = 0;
    *(undefined8 *)(pfVar2 + 0x58) = 0;
    *(undefined8 *)(pfVar2 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar2 + 0x48),(void *)0x0,0);
    pfVar1 = pfVar2;
  }
  _DAT_18007d0b0 = "autofarm_setFarmExcluded";
  _DAT_18007d0a8 = pfVar1;
  pfVar1 = (function_identity_base *)FUN_180064554(0x68);
  if (pfVar1 != (function_identity_base *)0x0) {
    DFHack::function_identity_base::function_identity_base(pfVar1,2,true);
    *(undefined ***)pfVar1 =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,bool)>::vftable;
    *(code **)(pfVar1 + 0x18) = autofarm_set_farm_excluded;
    *(undefined8 *)(pfVar1 + 0x20) = 0;
    *(undefined8 *)(pfVar1 + 0x28) = 0;
    *(undefined8 *)(pfVar1 + 0x30) = 0;
    *(undefined8 *)(pfVar1 + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(pfVar1 + 0x20),"autofarm_setFarmExcluded",0x18);
    pfVar1[0x40] = (function_identity_base)0x0;
    *(undefined8 *)(pfVar1 + 0x48) = 0;
    *(undefined8 *)(pfVar1 + 0x50) = 0;
    *(undefined8 *)(pfVar1 + 0x58) = 0;
    *(undefined8 *)(pfVar1 + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(pfVar1 + 0x48),(void *)0x0,0);
    pfVar3 = pfVar1;
  }
  _DAT_18007d0b8 = pfVar3;
  _DAT_18007d0c0 = 0;
  uRam000000018007d0c8 = 0;
  return;
}



/* RVA 0x14c0; VA 1800014c0; FUN_1800014c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800014c0(void)

{
  _plugin_version = FUN_1800216f0();
  return;
}



/* RVA 0x14e0; VA 1800014e0; FUN_1800014e0 */

void FUN_1800014e0(void)

{
  DFHack::DebugRegisterBase::DebugRegisterBase
            ((DebugRegisterBase *)&DAT_18007d77b,(DebugCategory *)&PTR_s_autofarm_18007d030);
  atexit(FUN_180067bd0);
  return;
}



/* RVA 0x1510; VA 180001510; FUN_180001510 */

void FUN_180001510(void)

{
  DFHack::DebugRegisterBase::DebugRegisterBase
            ((DebugRegisterBase *)&DAT_18007d77a,(DebugCategory *)&PTR_s_autofarm_18007d018);
  atexit(FUN_180067bf0);
  return;
}



/* RVA 0x1540; VA 180001540; FUN_180001540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001540(void)

{
  void *_Memory;
  undefined1 auStackY_68 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_68;
  uStack_30 = 0;
  local_28 = _DAT_180069020;
  uStack_20 = _UNK_180069028;
  local_38 = (void *)(ulonglong)CONCAT14(s_world_18006876c[4],s_world_18006876c._0_4_);
  FUN_180005120((longlong *)plugin_globals,&local_38);
  _DAT_18007d788 = 0;
  if (0xf < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return;
}



/* RVA 0x1600; VA 180001600; FUN_180001600 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180001600(void)

{
  void *_Memory;
  undefined1 auStackY_68 [32];
  void *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_68;
  local_28 = _DAT_180069030;
  uStack_20 = _UNK_180069038;
  local_38 = (void *)0x6f666e69746f6c70;
  uStack_30 = 0;
  FUN_180005120((longlong *)plugin_globals,&local_38);
  _DAT_18007d78c = 0;
  if (0xf < uStack_20) {
    _Memory = local_38;
    if ((0xfff < uStack_20 + 1) &&
       (_Memory = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return;
}



/* RVA 0x16d0; VA 1800016d0; FUN_1800016d0 */

undefined8 FUN_1800016d0(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Memory;
  ulonglong uVar6;
  void *local_28 [2];
  longlong local_18;
  
  lua_createtable(param_1,0,0);
  iVar2 = lua_gettop(param_1);
  iVar1 = *(int *)(DAT_18007d7b8 + 2);
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = lua_absindex(param_1,iVar2);
  }
  lua_pushinteger(param_1,(longlong)iVar1);
  lua_setfield(param_1,iVar3,"default_threshold");
  FUN_180003710(param_1,DAT_18007d7b8);
  lua_setfield(param_1,iVar2,"thresholds");
  FUN_18001ddd0(param_1,DAT_18007d7b8 + 3);
  lua_setfield(param_1,iVar2,"growth_thresholds");
  FUN_180003710(param_1,DAT_18007d7b8 + 5);
  lua_setfield(param_1,iVar2,"last_counts");
  FUN_18001ddd0(param_1,DAT_18007d7b8 + 7);
  lua_setfield(param_1,iVar2,"growth_counts");
  plVar4 = FUN_18001a960(DAT_18007d7b8,(longlong *)local_28);
  lua_createtable(param_1,(int)(plVar4[1] - *plVar4 >> 2),0);
  uVar6 = 0;
  lVar5 = *plVar4;
  if (plVar4[1] - lVar5 >> 2 != 0) {
    do {
      lua_pushinteger(param_1,(longlong)*(int *)(lVar5 + uVar6 * 4));
      uVar6 = uVar6 + 1;
      lua_rawseti(param_1,-2,uVar6);
      lVar5 = *plVar4;
    } while (uVar6 < (ulonglong)(plVar4[1] - lVar5 >> 2));
  }
  if (local_28[0] != (void *)0x0) {
    _Memory = local_28[0];
    if ((0xfff < (local_18 - (longlong)local_28[0] & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)local_28[0] + -8),
       0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  lua_setfield(param_1,iVar2,"excluded_farms");
  return 1;
}



/* RVA 0x1a80; VA 180001a80; FUN_180001a80 */

undefined4 * FUN_180001a80(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}



/* RVA 0x1b50; VA 180001b50; FUN_180001b50 */

undefined8 * FUN_180001b50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  param_1[1] = *param_3;
  *param_3 = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_3[1];
  param_3[1] = lVar1;
  return param_1;
}



/* RVA 0x1bf0; VA 180001bf0; FUN_180001bf0 */

undefined4 * FUN_180001bf0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0x1c70; VA 180001c70; FUN_180001c70 */

undefined8 *
FUN_180001c70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x1c) = *param_4;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x1dc0; VA 180001dc0; FUN_180001dc0 */

undefined8 * FUN_180001dc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined8 *)*param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  return param_1;
}



/* RVA 0x1ec0; VA 180001ec0; FUN_180001ec0 */

undefined8 *
FUN_180001ec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x28);
  param_1[1] = lVar1;
  *(undefined8 *)(lVar1 + 0x1c) = *param_4;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x1f40; VA 180001f40; FUN_180001f40 */

undefined4 * FUN_180001f40(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_3;
  *param_1 = *puVar1;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),(undefined8 *)(puVar1 + 2));
  param_1[10] = 0;
  return param_1;
}



/* RVA 0x1f90; VA 180001f90; FUN_180001f90 */

undefined8 *
FUN_180001f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar3 = FUN_180064554(0x50);
  param_1[1] = lVar3;
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(lVar3 + 0x20) = *puVar1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  uVar2 = *(undefined8 *)(puVar1 + 4);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(puVar1 + 6);
  *(undefined8 *)(lVar3 + 0x40) = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 8) = 0xf;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2040; VA 180002040; FUN_180002040 */

undefined8 *
FUN_180002040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x28);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)*param_5;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x20c0; VA 1800020c0; FUN_1800020c0 */

undefined8 *
FUN_1800020c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_5;
  *(longlong *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *(longlong *)(lVar1 + 0x28) = lVar2;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2170; VA 180002170; FUN_180002170 */

undefined8 *
FUN_180002170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x40);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_5;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2200; VA 180002200; FUN_180002200 */

undefined8 *
FUN_180002200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  param_1[1] = lVar1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)*param_5;
  *(longlong *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *(longlong *)(lVar1 + 0x28) = lVar2;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x22b0; VA 1800022b0; FUN_1800022b0 */

undefined8 *
FUN_1800022b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = FUN_180064554(0x50);
  param_1[1] = lVar2;
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(lVar2 + 0x20) = *puVar1;
  FUN_18000ebd0((undefined8 *)(lVar2 + 0x28),(undefined8 *)(puVar1 + 2));
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2350; VA 180002350; FUN_180002350 */

undefined8 *
FUN_180002350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_5;
  *(longlong *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *(longlong *)(lVar1 + 0x28) = lVar2;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2420; VA 180002420; FUN_180002420 */

undefined4 * FUN_180002420(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0x2480; VA 180002480; FUN_180002480 */

undefined8 *
FUN_180002480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x1c) = *param_4;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2510; VA 180002510; FUN_180002510 */

undefined8 * FUN_180002510(undefined8 *param_1,void *param_2,void *param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    _Size = (longlong)param_3 - (longlong)param_2;
    if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    if (_Size < 0x10) {
      param_1[2] = _Size;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,_Size);
      *(undefined1 *)(_Size + (longlong)param_1) = 0;
    }
    else {
      uVar1 = _Size | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = (void *)FUN_1800039c0(uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = _Size;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
  }
  return param_1;
}



/* RVA 0x2860; VA 180002860; FUN_180002860 */

longlong * FUN_180002860(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_180064554(0x20);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *param_1 = lVar6;
  puVar7 = FUN_180004470(param_1,*(undefined8 **)(*param_2 + 8),lVar6,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}



/* RVA 0x2970; VA 180002970; FUN_180002970 */

undefined8 * FUN_180002970(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_180003ee0(param_1,(void *)*param_2,param_2[1]);
  return param_1;
}



/* RVA 0x2a10; VA 180002a10; FUN_180002a10 */

undefined4 * FUN_180002a10(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0x2a80; VA 180002a80; FUN_180002a80 */

undefined8 * FUN_180002a80(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *(undefined8 *)*param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  return param_1;
}



/* RVA 0x2ad0; VA 180002ad0; FUN_180002ad0 */

undefined4 * FUN_180002ad0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),(undefined8 *)(puVar1 + 2));
  param_1[10] = 0;
  return param_1;
}



/* RVA 0x2b00; VA 180002b00; FUN_180002b00 */

undefined4 * FUN_180002b00(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0x2b50; VA 180002b50; FUN_180002b50 */

undefined8 *
FUN_180002b50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  param_1[1] = lVar1;
  *(undefined4 *)(lVar1 + 0x1c) = *param_4;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



/* RVA 0x2be0; VA 180002be0; FUN_180002be0 */

undefined8 * FUN_180002be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  plVar2 = (longlong *)*param_1;
  *param_1 = uVar1;
  if (plVar2 != (longlong *)0x0) {
    FUN_180012c50(param_1,plVar2);
  }
  return param_1;
}



/* RVA 0x2c30; VA 180002c30; FUN_180002c30 */

basic_ostream<char,std::char_traits<char>_> *
FUN_180002c30(basic_ostream<char,std::char_traits<char>_> *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,std::char_traits<char>_> *this;
  __int64 _Var6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  iVar4 = 0;
  pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar5 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar5 + 8))(pbVar5);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    this = std::basic_ios<char,std::char_traits<char>_>::tie
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1 != false) {
    _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    uVar8 = uVar7;
    if (1 < _Var6) {
      _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
      uVar8 = _Var6 - 1;
    }
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) == 0x40) {
LAB_180002d7a:
      pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                         ((basic_ios<char,std::char_traits<char>_> *)
                          (param_1 + *(int *)(*(longlong *)param_1 + 4)));
      iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,param_2);
      if (iVar4 == -1) {
        uVar7 = 4;
      }
      while ((iVar4 = (int)uVar7, iVar4 == 0 && (0 < (longlong)uVar8))) {
        pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar2);
        uVar8 = uVar8 - 1;
        uVar3 = 4;
        if (iVar4 != -1) {
          uVar3 = 0;
        }
        uVar7 = (ulonglong)uVar3;
      }
    }
    else {
      while (iVar4 = (int)uVar7, iVar4 == 0) {
        if ((longlong)uVar8 < 1) goto LAB_180002d7a;
        pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar5,cVar2);
        uVar8 = uVar8 - 1;
        uVar3 = 4;
        if (iVar4 != -1) {
          uVar3 = 0;
        }
        uVar7 = (ulonglong)uVar3;
      }
    }
  }
  std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  pbVar5 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar5 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar5 + 0x10))(pbVar5);
  }
  return param_1;
}



/* RVA 0x2e80; VA 180002e80; FUN_180002e80 */

basic_ostream<char,std::char_traits<char>_> *
FUN_180002e80(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  __int64 _Var7;
  basic_streambuf<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,std::char_traits<char>_> *this;
  size_t sVar9;
  longlong lVar10;
  
  lVar10 = 0;
  iVar5 = 0;
  sVar6 = strlen(param_2);
  _Var7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((0 < _Var7) &&
     (_Var7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     (longlong)sVar6 < _Var7)) {
    _Var7 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar10 = _Var7 - sVar6;
  }
  pbVar8 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar8 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar8 + 8))(pbVar8);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    this = std::basic_ios<char,std::char_traits<char>_>::tie
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1 == false) {
    iVar5 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        pbVar8 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) goto LAB_18000304e;
      }
    }
    pbVar8 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    sVar9 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar8,param_2,sVar6);
    if (sVar9 == sVar6) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        pbVar8 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) goto LAB_18000304e;
      }
    }
    else {
LAB_18000304e:
      iVar5 = 4;
    }
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  iVar5 = std::uncaught_exceptions();
  if (iVar5 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  pbVar8 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar8 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar8 + 0x10))(pbVar8);
  }
  return param_1;
}



/* RVA 0x30f0; VA 1800030f0; FUN_1800030f0 */

longlong FUN_1800030f0(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t _Size;
  int iVar2;
  uint7 uVar3;
  undefined4 extraout_var;
  
  psVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = (uint7)(*psVar1 >> 8);
  if (_Size != *psVar1) {
    return (ulonglong)uVar3 << 8;
  }
  if (_Size == 0) {
    return CONCAT71(uVar3,1);
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
}



/* RVA 0x3140; VA 180003140; FUN_180003140 */

bool FUN_180003140(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size != sVar2) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_2,_Size);
  return iVar1 == 0;
}



/* RVA 0x31b0; VA 1800031b0; FUN_1800031b0 */

longlong * FUN_1800031b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  size_t *psVar1;
  longlong lVar2;
  longlong *plVar3;
  
  psVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  plVar3 = FUN_180018460(param_2,param_3,*psVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = plVar3[1];
  *param_1 = *plVar3;
  param_1[1] = lVar2;
  lVar2 = plVar3[3];
  param_1[2] = plVar3[2];
  param_1[3] = lVar2;
  *(undefined1 *)plVar3 = 0;
  plVar3[2] = 0;
  plVar3[3] = 0xf;
  return param_1;
}



/* RVA 0x3220; VA 180003220; FUN_180003220 */

undefined8 * FUN_180003220(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte local_res10;
  
  sVar1 = param_2[2];
  sVar2 = strlen(param_3);
  if (sVar2 <= 0x7fffffffffffffff - sVar1) {
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    FUN_18000ed30(param_1,(ulonglong)local_res10,param_2,puVar3,sVar1,param_3,sVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x32b0; VA 1800032b0; FUN_1800032b0 */

undefined8 * FUN_1800032b0(undefined8 *param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  size_t _Size;
  char *_Src;
  byte local_res18;
  
  sVar3 = strlen(param_2);
  lVar1 = *(longlong *)(param_3 + 0x10);
  if (*(ulonglong *)(param_3 + 0x18) - lVar1 < sVar3) {
    param_3 = (char *)FUN_180008dc0((undefined8 *)param_3,sVar3,(ulonglong)local_res18,0,param_2,
                                    sVar3);
  }
  else {
    *(size_t *)(param_3 + 0x10) = lVar1 + sVar3;
    _Src = param_3;
    if (0xf < *(ulonglong *)(param_3 + 0x18)) {
      _Src = *(char **)param_3;
    }
    _Size = sVar3;
    if (((_Src < param_2 + sVar3) && (param_2 <= _Src + lVar1)) && (_Size = 0, param_2 < _Src)) {
      _Size = (longlong)_Src - (longlong)param_2;
    }
    memmove(_Src + sVar3,_Src,lVar1 + 1);
    memcpy(_Src,param_2,_Size);
    memcpy(_Src + _Size,param_2 + _Size + sVar3,sVar3 - _Size);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *param_1 = *(undefined8 *)param_3;
  param_1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  param_1[3] = uVar2;
  *param_3 = '\0';
  param_3[0x10] = '\0';
  param_3[0x11] = '\0';
  param_3[0x12] = '\0';
  param_3[0x13] = '\0';
  param_3[0x14] = '\0';
  param_3[0x15] = '\0';
  param_3[0x16] = '\0';
  param_3[0x17] = '\0';
  param_3[0x18] = '\x0f';
  param_3[0x19] = '\0';
  param_3[0x1a] = '\0';
  param_3[0x1b] = '\0';
  param_3[0x1c] = '\0';
  param_3[0x1d] = '\0';
  param_3[0x1e] = '\0';
  param_3[0x1f] = '\0';
  return param_1;
}



/* RVA 0x33e0; VA 1800033e0; FUN_1800033e0 */

undefined8 * FUN_1800033e0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte local_res18;
  
  sVar1 = strlen(param_2);
  if (sVar1 <= 0x7fffffffffffffff - param_3[2]) {
    puVar2 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    FUN_18000ed30(param_1,(ulonglong)local_res18,param_3,param_2,sVar1,puVar2,param_3[2]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x3490; VA 180003490; FUN_180003490 */

/* WARNING: Removing unreachable block (ram,0x0001800034e1) */

ulonglong FUN_180003490(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  int iVar4;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    iVar4 = 1;
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar3 = 0xff;
  if (-1 < iVar4) {
    uVar3 = 1;
  }
  return uVar3;
}



/* RVA 0x3520; VA 180003520; FUN_180003520 */

/* WARNING: Removing unreachable block (ram,0x000180003571) */

ulonglong FUN_180003520(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  int iVar4;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    iVar4 = 1;
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar3 = 0xff;
  if (-1 < iVar4) {
    uVar3 = 1;
  }
  return uVar3;
}



/* RVA 0x35b0; VA 1800035b0; FUN_1800035b0 */

/* WARNING: Removing unreachable block (ram,0x000180003631) */

ulonglong FUN_1800035b0(int *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  int iVar4;
  int *_Buf1;
  int *_Buf2;
  ulonglong _Size;
  
  if (*param_1 != *param_2) {
    uVar3 = 0xff;
    if (*param_2 <= *param_1) {
      uVar3 = 1;
    }
    return uVar3;
  }
  _Buf2 = param_2 + 2;
  _Buf1 = param_1 + 2;
  uVar3 = *(ulonglong *)(param_2 + 6);
  if (0xf < *(ulonglong *)(param_2 + 8)) {
    _Buf2 = *(int **)_Buf2;
  }
  uVar1 = *(ulonglong *)(param_1 + 6);
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    _Buf1 = *(int **)_Buf1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(_Buf1,_Buf2,_Size);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    iVar4 = 1;
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar3 = 0xff;
  if (-1 < iVar4) {
    uVar3 = 1;
  }
  return uVar3;
}



/* RVA 0x3670; VA 180003670; FUN_180003670 */

void FUN_180003670(lua_State *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lua_createtable(param_1,(int)(param_2[1] - *param_2 >> 2),0);
  lVar1 = *param_2;
  uVar2 = 0;
  if (param_2[1] - lVar1 >> 2 != 0) {
    do {
      lua_pushinteger(param_1,(longlong)*(int *)(lVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
      lua_rawseti(param_1,-2,uVar2);
      lVar1 = *param_2;
    } while (uVar2 < (ulonglong)(param_2[1] - lVar1 >> 2));
  }
  return;
}



/* RVA 0x3710; VA 180003710; FUN_180003710 */

void FUN_180003710(lua_State *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lua_createtable(param_1,0,*(int *)(param_2 + 1));
  plVar4 = *(longlong **)*param_2;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    lua_pushinteger(param_1,(longlong)*(int *)((longlong)plVar4 + 0x1c));
    lua_pushinteger(param_1,(longlong)(int)plVar4[4]);
    lua_settable(param_1,-3);
    plVar2 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar3 = (longlong *)plVar4[1];
      plVar2 = plVar4;
      while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
      }
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  return;
}



/* RVA 0x37e0; VA 1800037e0; FUN_1800037e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800037e0(lua_State *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_18007d140 ^ (ulonglong)auStack_38;
  plVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar1 = (longlong *)*param_2;
  }
  local_18 = param_2;
  lua_pushlstring(param_1,(char *)plVar1,param_2[2]);
  FUN_180017da0(param_2);
  return;
}



/* RVA 0x3830; VA 180003830; FUN_180003830 */

void FUN_180003830(lua_State *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lua_createtable(param_1,(int)(param_2[1] - *param_2 >> 2),(uint)param_3);
  if (param_3 != 0) {
    lua_pushinteger(param_1,param_2[1] - *param_2 >> 2);
    lua_setfield(param_1,-2,"n");
  }
  lVar1 = *param_2;
  uVar2 = 0;
  if (param_2[1] - lVar1 >> 2 != 0) {
    do {
      lua_pushinteger(param_1,(longlong)*(int *)(lVar1 + uVar2 * 4));
      uVar2 = uVar2 + 1;
      lua_rawseti(param_1,-2,uVar2);
      lVar1 = *param_2;
    } while (uVar2 < (ulonglong)(param_2[1] - lVar1 >> 2));
  }
  return;
}



/* RVA 0x38f0; VA 1800038f0; FUN_1800038f0 */

void FUN_1800038f0(lua_State *param_1,int param_2,int param_3,char *param_4)

{
  if (param_3 < 0) {
    param_3 = lua_absindex(param_1,param_3);
  }
  lua_pushinteger(param_1,(longlong)param_2);
                    /* WARNING: Could not recover jumptable at 0x000180003947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_setfield(param_1,param_3,param_4);
  return;
}



/* RVA 0x39c0; VA 1800039c0; FUN_1800039c0 */

ulonglong FUN_1800039c0(size_t param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar2 = FUN_180064554(param_1);
    return uVar2;
  }
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800179f0();
  }
  lVar1 = FUN_180064554(param_1 + 0x27);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar2 - 8) = lVar1;
  return uVar2;
}



/* RVA 0x3a40; VA 180003a40; FUN_180003a40 */

void FUN_180003a40(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0x4000000000000000) {
    FUN_1800039c0(*param_2 * 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3a70; VA 180003a70; FUN_180003a70 */

void FUN_180003a70(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0x2000000000000000) {
    FUN_1800039c0(*param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3aa0; VA 180003aa0; FUN_180003aa0 */

void FUN_180003aa0(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0x2000000000000000) {
    FUN_1800039c0(*param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3ad0; VA 180003ad0; FUN_180003ad0 */

void FUN_180003ad0(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0xaaaaaaaaaaaaaab) {
    FUN_1800039c0(*param_2 * 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3b00; VA 180003b00; FUN_180003b00 */

void FUN_180003b00(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0x222222222222223) {
    FUN_1800039c0(*param_2 * 0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3b30; VA 180003b30; FUN_180003b30 */

void FUN_180003b30(undefined8 param_1,ulonglong *param_2)

{
  if (*param_2 < 0x800000000000000) {
    FUN_1800039c0(*param_2 << 5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x3b60; VA 180003b60; FUN_180003b60 */

void FUN_180003b60(undefined8 param_1,size_t *param_2)

{
  *param_2 = *param_2 + 1;
  FUN_1800039c0(*param_2);
  *param_2 = *param_2 - 1;
  return;
}



/* RVA 0x3b80; VA 180003b80; FUN_180003b80 */

void FUN_180003b80(ulonglong param_1)

{
  longlong lVar1;
  
  if (param_1 + 0x27 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1800179f0();
  }
  lVar1 = FUN_180064554(param_1 + 0x27);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  *(longlong *)((lVar1 + 0x27U & 0xffffffffffffffe0) - 8) = lVar1;
  return;
}



/* RVA 0x3bd0; VA 180003bd0; FUN_180003bd0 */

void FUN_180003bd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3c00; VA 180003c00; FUN_180003c00 */

void FUN_180003c00(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3c30; VA 180003c30; FUN_180003c30 */

void FUN_180003c30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3c60; VA 180003c60; FUN_180003c60 */

void FUN_180003c60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3c90; VA 180003c90; FUN_180003c90 */

void FUN_180003c90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3cc0; VA 180003cc0; FUN_180003cc0 */

void FUN_180003cc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3cf0; VA 180003cf0; FUN_180003cf0 */

void FUN_180003cf0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3d20; VA 180003d20; FUN_180003d20 */

void FUN_180003d20(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3d50; VA 180003d50; FUN_180003d50 */

void FUN_180003d50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



/* RVA 0x3d80; VA 180003d80; FUN_180003d80 */

void FUN_180003d80(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FUN_180064554(0x20);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *param_2;
  *puVar2 = uVar1;
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  return;
}



/* RVA 0x3dd0; VA 180003dd0; FUN_180003dd0 */

void FUN_180003dd0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180064554(0x20);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *param_3;
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  *(undefined2 *)(puVar1 + 3) = 0;
  return;
}



/* RVA 0x3e20; VA 180003e20; FUN_180003e20 */

void FUN_180003e20(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if (param_3 < 0x8000000000000000) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,param_3);
      *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = param_3 | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = (void *)FUN_1800039c0(uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x3ee0; VA 180003ee0; FUN_180003ee0 */

void FUN_180003ee0(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  
  if (param_3 < 0x8000000000000000) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,param_3);
      *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    }
    else {
      uVar1 = param_3 | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = (void *)FUN_1800039c0(uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3);
      *(undefined1 *)((longlong)_Dst + param_3) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x3fa0; VA 180003fa0; FUN_180003fa0 */

void FUN_180003fa0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  
  if (param_3 < 0x8000000000000000) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    else {
      uVar2 = param_3 | 0xf;
      uVar3 = 0x7fffffffffffffff;
      if ((uVar2 < 0x8000000000000000) && (uVar3 = uVar2, uVar2 < 0x16)) {
        uVar3 = 0x16;
      }
      _Dst = (void *)FUN_1800039c0(uVar3 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar3;
      memcpy(_Dst,param_2,param_3 + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x41d0; VA 1800041d0; FUN_1800041d0 */

void FUN_1800041d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4)

{
  void *_Dst;
  size_t _Size;
  
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1800180c0();
    }
    _Dst = (void *)FUN_1800039c0(param_2 * 8);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(param_2 * 8 + (longlong)_Dst);
    _Size = *param_4 - (longlong)*param_3;
    memmove(_Dst,(void *)*param_3,_Size);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  return;
}



/* RVA 0x4280; VA 180004280; FUN_180004280 */

void FUN_180004280(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = FUN_180004470(param_1,*(undefined8 **)(*param_2 + 8),*param_1,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  plVar2 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar6 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar3 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar2 = (longlong)plVar3;
  lVar4 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar4 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar4;
  return;
}



/* RVA 0x4350; VA 180004350; FUN_180004350 */

longlong FUN_180004350(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



/* RVA 0x4380; VA 180004380; FUN_180004380 */

longlong FUN_180004380(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



/* RVA 0x43b0; VA 1800043b0; FUN_1800043b0 */

longlong FUN_1800043b0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



/* RVA 0x43e0; VA 1800043e0; FUN_1800043e0 */

longlong FUN_1800043e0(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_2,param_1,param_3);
  return (longlong)param_2 + param_3;
}



/* RVA 0x4410; VA 180004410; FUN_180004410 */

longlong FUN_180004410(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_2,param_1,param_3);
  return (longlong)param_2 + param_3;
}



/* RVA 0x4440; VA 180004440; FUN_180004440 */

longlong FUN_180004440(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_2,param_1,param_3);
  return (longlong)param_2 + param_3;
}



/* RVA 0x4470; VA 180004470; FUN_180004470 */

undefined8 *
FUN_180004470(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_180064554(0x20);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *puVar1 = puVar2;
    puVar1[2] = puVar2;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    puVar2 = FUN_180004470(param_1,(undefined8 *)*param_2,puVar1,param_4);
    *puVar1 = puVar2;
    puVar2 = FUN_180004470(param_1,(undefined8 *)param_2[2],puVar1,param_4);
    puVar1[2] = puVar2;
    puVar2 = puVar1;
  }
  return puVar2;
}



/* RVA 0x4530; VA 180004530; FUN_180004530 */

void FUN_180004530(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)FUN_180064554(0x20);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = *param_2;
  *puVar2 = uVar1;
  puVar2[1] = uVar1;
  puVar2[2] = uVar1;
  *(undefined2 *)(puVar2 + 3) = 0;
  return;
}



/* RVA 0x4580; VA 180004580; FUN_180004580 */

void FUN_180004580(void *param_1,ulonglong param_2)

{
  void *_Memory;
  
  _Memory = param_1;
  if ((0xfff < param_2) &&
     (_Memory = *(void **)((longlong)param_1 + -8),
     0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x46a0; VA 1800046a0; FUN_1800046a0 */

void FUN_1800046a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    plVar2 = param_1 + 1;
    do {
      FUN_180006290(plVar2,plVar2);
      plVar1 = plVar2 + 2;
      plVar2 = plVar2 + 3;
    } while (plVar1 != param_2);
  }
  return;
}



/* RVA 0x46f0; VA 1800046f0; FUN_1800046f0 */

void FUN_1800046f0(PluginCommand *param_1,PluginCommand *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    DFHack::PluginCommand::~PluginCommand(param_1);
  }
  return;
}



/* RVA 0x4730; VA 180004730; FUN_180004730 */

void FUN_180004730(longlong *param_1,longlong *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    FUN_180017da0(param_1);
  }
  return;
}



/* RVA 0x4770; VA 180004770; FUN_180004770 */

void FUN_180004770(PersistentDataItem *param_1,PersistentDataItem *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    DFHack::PersistentDataItem::~PersistentDataItem(param_1);
  }
  return;
}



/* RVA 0x47b0; VA 1800047b0; FUN_1800047b0 */

undefined8 * FUN_1800047b0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar5 = (longlong *)*param_1;
  local_28 = (longlong *)plVar5[1];
  uStack_20 = 0;
  plVar4 = plVar5;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    plVar6 = plVar5;
    do {
      local_28 = plVar2;
      bVar1 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar3 = local_28;
      plVar4 = local_28;
      if (!bVar1) {
        plVar3 = local_28 + 2;
        plVar4 = plVar6;
      }
      uStack_20 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar4 + 0x1c) <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar4 + 0x1c) = *param_3;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180015860(param_1,(longlong *)&local_38,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x48c0; VA 1800048c0; FUN_1800048c0 */

undefined8 * FUN_1800048c0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar5 = (longlong *)*param_1;
  local_28 = (longlong *)plVar5[1];
  uStack_20 = 0;
  plVar4 = plVar5;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    plVar6 = plVar5;
    do {
      local_28 = plVar2;
      bVar1 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar3 = local_28;
      plVar4 = local_28;
      if (!bVar1) {
        plVar3 = local_28 + 2;
        plVar4 = plVar6;
      }
      uStack_20 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar4 + 0x1c) <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar4 + 0x1c) = *param_3;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180016b60(param_1,(longlong *)&local_38,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x49d0; VA 1800049d0; FUN_1800049d0 */

undefined8 * FUN_1800049d0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar5 = (longlong *)*param_1;
  local_28 = (longlong *)plVar5[1];
  uStack_20 = 0;
  plVar4 = plVar5;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    plVar6 = plVar5;
    do {
      local_28 = plVar2;
      bVar1 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar3 = local_28;
      plVar4 = local_28;
      if (!bVar1) {
        plVar3 = local_28 + 2;
        plVar4 = plVar6;
      }
      uStack_20 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar4 + 0x1c) <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar4 + 0x1c) = *param_3;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180016b60(param_1,(longlong *)&local_38,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x4af0; VA 180004af0; FUN_180004af0 */

void FUN_180004af0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  *puVar3 = *param_2;
  plVar1 = puVar3 + 1;
  *plVar1 = 0;
  puVar3[2] = 0;
  lVar8 = FUN_180064554(0x20);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(lVar8 + 0x10) = lVar8;
  *(undefined2 *)(lVar8 + 0x18) = 0x101;
  *plVar1 = lVar8;
  puVar9 = FUN_180004470(plVar1,*(undefined8 **)(param_2[1] + 8),lVar8,param_4);
  *(undefined8 **)(*plVar1 + 8) = puVar9;
  puVar3[2] = param_2[2];
  plVar4 = (longlong *)*plVar1;
  plVar5 = (longlong *)plVar4[1];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar2 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
    *plVar4 = (longlong)plVar5;
    lVar8 = *(longlong *)(*plVar1 + 8);
    lVar6 = *(longlong *)(lVar8 + 0x10);
    cVar2 = *(char *)(lVar6 + 0x19);
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*(longlong *)(lVar6 + 0x10) + 0x19);
      lVar8 = lVar6;
      lVar6 = *(longlong *)(lVar6 + 0x10);
    }
    *(longlong *)(*plVar1 + 0x10) = lVar8;
  }
  else {
    *plVar4 = (longlong)plVar4;
    *(longlong *)(*plVar1 + 0x10) = *plVar1;
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



/* RVA 0x4be0; VA 180004be0; FUN_180004be0 */

void FUN_180004be0(longlong param_1,PluginCommand *param_2)

{
  DFHack::PluginCommand::PluginCommand(*(PluginCommand **)(param_1 + 8),param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
  return;
}



/* RVA 0x4c20; VA 180004c20; FUN_180004c20 */

void FUN_180004c20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_180064554(0x20);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  puVar1[1] = lVar3;
  puVar1[1] = param_2[1];
  param_2[1] = lVar3;
  uVar2 = puVar1[2];
  puVar1[2] = param_2[2];
  param_2[2] = uVar2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



/* RVA 0x4ca0; VA 180004ca0; FUN_180004ca0 */

void FUN_180004ca0(longlong param_1,PluginCommand *param_2)

{
  DFHack::PluginCommand::PluginCommand(*(PluginCommand **)(param_1 + 8),param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
  return;
}



/* RVA 0x4d00; VA 180004d00; FUN_180004d00 */

void FUN_180004d00(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  puVar1[1] = lVar2;
  puVar1[1] = *param_3;
  *param_3 = lVar2;
  lVar2 = puVar1[2];
  puVar1[2] = param_3[1];
  param_3[1] = lVar2;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



/* RVA 0x4dc0; VA 180004dc0; FUN_180004dc0 */

void FUN_180004dc0(longlong param_1,PluginCommand *param_2)

{
  DFHack::PluginCommand::PluginCommand(*(PluginCommand **)(param_1 + 8),param_2);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
  return;
}



/* RVA 0x4e30; VA 180004e30; FUN_180004e30 */

longlong * FUN_180004e30(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_18;
  longlong lStack_10;
  
  plVar2 = FUN_180006850(param_1,(longlong *)&local_38,param_2,param_3);
  local_18 = (longlong *)*plVar2;
  lStack_10 = plVar2[1];
  local_28 = plVar2[2];
  if ((char)local_28 != '\0') {
    return local_18;
  }
  if (param_1[1] != 0x7ffffffffffffff) {
    lVar1 = *param_1;
    local_30 = 0;
    local_38 = param_1;
    plVar2 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar2 + 0x1c) = *param_3;
    *plVar2 = lVar1;
    plVar2[1] = lVar1;
    plVar2[2] = lVar1;
    *(undefined2 *)(plVar2 + 3) = 0;
    plVar2 = FUN_180015860(param_1,(longlong *)&local_18,plVar2);
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x4f00; VA 180004f00; FUN_180004f00 */

longlong * FUN_180004f00(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_18;
  longlong lStack_10;
  
  plVar2 = FUN_180006a50(param_1,(longlong *)&local_38,param_2,param_3);
  local_18 = (longlong *)*plVar2;
  lStack_10 = plVar2[1];
  local_28 = plVar2[2];
  if ((char)local_28 != '\0') {
    return local_18;
  }
  if (param_1[1] != 0x666666666666666) {
    lVar1 = *param_1;
    local_30 = 0;
    local_38 = param_1;
    plVar2 = (longlong *)FUN_180064554(0x28);
    *(undefined8 *)((longlong)plVar2 + 0x1c) = *(undefined8 *)param_3;
    *plVar2 = lVar1;
    plVar2[1] = lVar1;
    plVar2[2] = lVar1;
    *(undefined2 *)(plVar2 + 3) = 0;
    plVar2 = FUN_1800166a0(param_1,(longlong *)&local_18,plVar2);
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x4fd0; VA 180004fd0; FUN_180004fd0 */

void FUN_180004fd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)param_1[2]) {
    *plVar1 = *param_2;
    plVar1[1] = 0;
    plVar1[2] = 0;
    lVar2 = FUN_180064554(0x20);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    plVar1[1] = lVar2;
    plVar1[1] = *param_3;
    *param_3 = lVar2;
    lVar2 = plVar1[2];
    plVar1[2] = param_3[1];
    param_3[1] = lVar2;
    param_1[1] = param_1[1] + 0x18;
    return;
  }
  FUN_1800052f0(param_1,plVar1,param_2,param_3);
  return;
}



/* RVA 0x50e0; VA 1800050e0; FUN_1800050e0 */

void FUN_1800050e0(longlong *param_1,PluginCommand *param_2)

{
  PluginCommand *this;
  
  this = (PluginCommand *)param_1[1];
  if (this != (PluginCommand *)param_1[2]) {
    DFHack::PluginCommand::PluginCommand(this,param_2);
    param_1[1] = param_1[1] + 0x78;
    return;
  }
  FUN_180005920(param_1,this,param_2);
  return;
}



/* RVA 0x5120; VA 180005120; FUN_180005120 */

undefined8 * FUN_180005120(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    uVar4 = param_2[3];
    puVar7[2] = param_2[2];
    puVar7[3] = uVar4;
    *(undefined1 *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
    return puVar7;
  }
  lVar12 = (longlong)puVar7 - *param_1 >> 5;
  if (lVar12 == 0x7ffffffffffffff) {
    FUN_180018120();
    pcVar3 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar3)();
    return puVar7;
  }
  uVar8 = param_1[2] - *param_1 >> 5;
  uVar1 = lVar12 + 1;
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar11 = 0x7ffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  puVar5 = (undefined8 *)FUN_1800039c0(uVar11 << 5);
  puVar6 = puVar5 + lVar12 * 4;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar2 = puVar6 + 4;
  puVar6[3] = 0;
  uVar4 = param_2[1];
  *puVar6 = *param_2;
  puVar6[1] = uVar4;
  uVar4 = param_2[3];
  puVar6[2] = param_2[2];
  puVar6[3] = uVar4;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  puVar10 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar13 = puVar5;
  local_58 = param_1;
  local_48 = uVar11;
  local_40 = puVar6;
  local_38 = puVar2;
  if (puVar7 != puVar10) {
    FUN_18000a240(puVar9,puVar7,puVar5);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = puVar7;
    puVar13 = puVar2;
    local_40 = puVar5;
  }
  FUN_18000a240(puVar9,puVar10,puVar13);
  local_50 = 0;
  FUN_180013fd0(param_1,(longlong)puVar5,uVar1,uVar11);
  FUN_180011480((longlong)&local_58);
  return puVar6;
}



/* RVA 0x52f0; VA 1800052f0; FUN_1800052f0 */

longlong * FUN_1800052f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  void *pvVar8;
  code *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  void *_Memory;
  undefined8 uVar20;
  
  lVar13 = *param_1;
  uVar20 = 0x2aaaaaaaaaaaaaab;
  lVar16 = ((longlong)param_2 - lVar13) / 6 + ((longlong)param_2 - lVar13 >> 0x3f);
  lVar7 = (param_1[1] - lVar13) / 0x18;
  uVar17 = 0xaaaaaaaaaaaaaaa;
  if (lVar7 == 0xaaaaaaaaaaaaaaa) {
    FUN_1800180e0();
    pcVar9 = (code *)swi(3);
    plVar15 = (longlong *)(*pcVar9)();
    return plVar15;
  }
  uVar1 = lVar7 + 1;
  uVar3 = (param_1[2] - lVar13) / 0x18;
  if (uVar3 <= 0xaaaaaaaaaaaaaaa - (uVar3 >> 1)) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar17 = uVar1;
    if (uVar1 <= uVar3) {
      uVar17 = uVar3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  plVar12 = (longlong *)FUN_1800039c0(uVar17 * 0x18);
  plVar15 = plVar12 + ((lVar16 >> 2) - (lVar16 >> 0x3f)) * 3;
  *plVar15 = *param_3;
  plVar15[1] = 0;
  plVar15[2] = 0;
  lVar13 = FUN_180064554(0x20);
  *(longlong *)lVar13 = lVar13;
  *(longlong *)(lVar13 + 8) = lVar13;
  *(longlong *)(lVar13 + 0x10) = lVar13;
  *(undefined2 *)(lVar13 + 0x18) = 0x101;
  plVar15[1] = lVar13;
  plVar15[1] = *param_4;
  *param_4 = lVar13;
  lVar13 = plVar15[2];
  plVar15[2] = param_4[1];
  param_4[1] = lVar13;
  plVar18 = (longlong *)param_1[1];
  plVar19 = (longlong *)*param_1;
  plVar10 = plVar12;
  if (param_2 == plVar18) {
    for (; plVar19 != plVar18; plVar19 = plVar19 + 3) {
      *plVar10 = *plVar19;
      plVar2 = plVar10 + 1;
      *plVar2 = 0;
      plVar10[2] = 0;
      lVar13 = FUN_180064554(0x20);
      *(longlong *)lVar13 = lVar13;
      *(longlong *)(lVar13 + 8) = lVar13;
      *(longlong *)(lVar13 + 0x10) = lVar13;
      *(undefined2 *)(lVar13 + 0x18) = 0x101;
      *plVar2 = lVar13;
      puVar14 = FUN_180004470(plVar2,*(undefined8 **)(plVar19[1] + 8),lVar13,uVar20);
      *(undefined8 **)(*plVar2 + 8) = puVar14;
      plVar10[2] = plVar19[2];
      plVar5 = (longlong *)*plVar2;
      plVar6 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar4 = *(char *)(*plVar6 + 0x19);
        plVar11 = (longlong *)*plVar6;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar11 + 0x19);
          plVar6 = plVar11;
          plVar11 = (longlong *)*plVar11;
        }
        *plVar5 = (longlong)plVar6;
        lVar13 = *(longlong *)(*plVar2 + 8);
        lVar7 = *(longlong *)(lVar13 + 0x10);
        cVar4 = *(char *)(lVar7 + 0x19);
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*(longlong *)(lVar7 + 0x10) + 0x19);
          lVar13 = lVar7;
          lVar7 = *(longlong *)(lVar7 + 0x10);
        }
        *(longlong *)(*plVar2 + 0x10) = lVar13;
      }
      else {
        *plVar5 = (longlong)plVar5;
        *(longlong *)(*plVar2 + 0x10) = *plVar2;
      }
      plVar10 = plVar10 + 3;
    }
  }
  else {
    FUN_18000a110(plVar19,param_2,plVar12);
    FUN_18000a110(param_2,(longlong *)param_1[1],plVar15 + 3);
  }
  lVar13 = *param_1;
  if (lVar13 != 0) {
    lVar7 = param_1[1];
    if (lVar13 != lVar7) {
      plVar18 = (longlong *)(lVar13 + 8);
      do {
        FUN_180006290(plVar18,plVar18);
        lVar13 = lVar13 + 0x18;
        plVar18 = plVar18 + 3;
      } while (lVar13 != lVar7);
    }
    pvVar8 = (void *)*param_1;
    _Memory = pvVar8;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar8) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = (longlong)plVar12;
  param_1[1] = (longlong)(plVar12 + uVar1 * 3);
  param_1[2] = (longlong)(plVar12 + uVar17 * 3);
  return plVar15;
}



/* RVA 0x5680; VA 180005680; FUN_180005680 */

void * FUN_180005680(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  void *_Dst;
  void *pvVar5;
  ulonglong uVar6;
  void *_Dst_00;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  
  lVar2 = *param_1;
  lVar8 = (longlong)param_2 - lVar2 >> 2;
  lVar4 = param_1[1] - lVar2 >> 2;
  if (lVar4 == 0x3fffffffffffffff) {
    FUN_180018080();
    pcVar3 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar3)();
    return pvVar5;
  }
  uVar6 = param_1[2] - lVar2 >> 2;
  uVar1 = lVar4 + 1;
  if (0x3fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar7 = 0x3fffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  _Dst = (void *)FUN_1800039c0(uVar7 * 4);
  *(undefined4 *)((longlong)_Dst + lVar8 * 4) = *param_3;
  _Src = (void *)*param_1;
  pvVar5 = (void *)((longlong)_Dst + lVar8 * 4);
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = (void *)((longlong)pvVar5 + 4);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FUN_180013c90(param_1,(longlong)_Dst,uVar1,uVar7);
  return pvVar5;
}



/* RVA 0x57a0; VA 1800057a0; FUN_1800057a0 */

void * FUN_1800057a0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  void *_Dst;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong lVar10;
  size_t _Size;
  
  lVar2 = *param_1;
  lVar10 = (longlong)param_2 - lVar2 >> 3;
  lVar5 = param_1[1] - lVar2 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_1800180a0();
    pcVar4 = (code *)swi(3);
    pvVar6 = (void *)(*pcVar4)();
    return pvVar6;
  }
  uVar7 = param_1[2] - lVar2 >> 3;
  uVar1 = lVar5 + 1;
  if (0x1fffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar8 = 0x1fffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  _Dst = (void *)FUN_1800039c0(uVar8 * 8);
  *(undefined8 *)((longlong)_Dst + lVar10 * 8) = *param_3;
  pvVar3 = (void *)*param_1;
  pvVar6 = (void *)((longlong)_Dst + lVar10 * 8);
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    pvVar9 = _Dst;
    param_2 = pvVar3;
  }
  else {
    memmove(_Dst,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    pvVar9 = (void *)((longlong)pvVar6 + 8);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(pvVar9,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar9 = pvVar3;
    if ((0xfff < (param_1[2] - (longlong)pvVar3 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar9);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + uVar1 * 8);
  param_1[2] = (longlong)(uVar8 * 8 + (longlong)_Dst);
  return pvVar6;
}



/* RVA 0x5920; VA 180005920; FUN_180005920 */

PluginCommand * FUN_180005920(longlong *param_1,PluginCommand *param_2,PluginCommand *param_3)

{
  ulonglong uVar1;
  void *pvVar2;
  code *pcVar3;
  PluginCommand *this;
  PluginCommand *pPVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  PluginCommand *pPVar10;
  PluginCommand *pPVar11;
  void *_Memory;
  PluginCommand *this_00;
  
  lVar6 = *param_1;
  lVar8 = ((longlong)param_2 - lVar6) +
          SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)param_2 - lVar6),8);
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar6),8) +
          (param_1[1] - lVar6);
  lVar5 = (lVar5 >> 6) - (lVar5 >> 0x3f);
  uVar9 = 0x222222222222222;
  if (lVar5 == 0x222222222222222) {
    FUN_180018100();
    pcVar3 = (code *)swi(3);
    pPVar11 = (PluginCommand *)(*pcVar3)();
    return pPVar11;
  }
  uVar1 = lVar5 + 1;
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - lVar6),8) +
          (param_1[2] - lVar6);
  uVar7 = (lVar6 >> 6) - (lVar6 >> 0x3f);
  if (uVar7 <= 0x222222222222222 - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar9 = uVar1;
    if (uVar1 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x222222222222222 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  pPVar4 = (PluginCommand *)FUN_1800039c0(uVar9 * 0x78);
  this_00 = pPVar4 + ((lVar8 >> 6) - (lVar8 >> 0x3f)) * 0x78;
  DFHack::PluginCommand::PluginCommand(this_00,param_3);
  pPVar11 = (PluginCommand *)param_1[1];
  pPVar10 = (PluginCommand *)*param_1;
  this = pPVar4;
  if (param_2 == pPVar11) {
    for (; pPVar10 != pPVar11; pPVar10 = pPVar10 + 0x78) {
      DFHack::PluginCommand::PluginCommand(this,pPVar10);
      this = this + 0x78;
    }
  }
  else {
    FUN_18000a1d0(pPVar10,param_2,pPVar4);
    FUN_18000a1d0(param_2,(PluginCommand *)param_1[1],this_00 + 0x78);
  }
  pPVar11 = (PluginCommand *)*param_1;
  if (pPVar11 != (PluginCommand *)0x0) {
    pPVar10 = (PluginCommand *)param_1[1];
    for (; pPVar11 != pPVar10; pPVar11 = pPVar11 + 0x78) {
      DFHack::PluginCommand::~PluginCommand(pPVar11);
    }
    pvVar2 = (void *)*param_1;
    lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - (longlong)pvVar2),8) +
            (param_1[2] - (longlong)pvVar2);
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((lVar8 >> 6) - (lVar8 >> 0x3f)) * 0x78)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = (longlong)pPVar4;
  param_1[1] = (longlong)(pPVar4 + uVar1 * 0x78);
  param_1[2] = (longlong)(pPVar4 + uVar9 * 0x78);
  return this_00;
}



/* RVA 0x5b90; VA 180005b90; FUN_180005b90 */

undefined8 * FUN_180005b90(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2 >> 5;
  if (lVar5 == 0x7ffffffffffffff) {
    FUN_180018120();
    pcVar3 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar3)();
    return puVar7;
  }
  uVar8 = param_1[2] - lVar2 >> 5;
  uVar1 = lVar5 + 1;
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar11 = 0x7ffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x7ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800179f0();
    }
  }
  puVar6 = (undefined8 *)FUN_1800039c0(uVar11 << 5);
  puVar13 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar6);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar7 = puVar13 + 4;
  puVar13[3] = 0;
  uVar4 = param_3[1];
  *puVar13 = *param_3;
  puVar13[1] = uVar4;
  uVar4 = param_3[3];
  puVar13[2] = param_3[2];
  puVar13[3] = uVar4;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  puVar10 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar12 = puVar6;
  local_58 = param_1;
  local_48 = uVar11;
  local_40 = puVar13;
  local_38 = puVar7;
  if (param_2 != puVar10) {
    FUN_18000a240(puVar9,param_2,puVar6);
    puVar10 = (undefined8 *)param_1[1];
    puVar9 = param_2;
    puVar12 = puVar7;
    local_40 = puVar6;
  }
  FUN_18000a240(puVar9,puVar10,puVar12);
  local_50 = 0;
  FUN_180013fd0(param_1,(longlong)puVar6,uVar1,uVar11);
  FUN_180011480((longlong)&local_58);
  return puVar13;
}



/* RVA 0x5d20; VA 180005d20; FUN_180005d20 */

longlong * FUN_180005d20(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)plVar3[1];
  plVar4 = plVar3;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar2 = plVar1;
    do {
      if (*(int *)((longlong)plVar2 + 0x1c) < *param_3) {
        plVar2 = plVar2 + 2;
      }
      else {
        plVar4 = plVar2;
        if ((*(char *)((longlong)plVar3 + 0x19) != '\0') &&
           (*param_3 < *(int *)((longlong)plVar2 + 0x1c))) {
          plVar3 = plVar2;
        }
      }
      plVar2 = (longlong *)*plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    plVar1 = (longlong *)*plVar3;
  }
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    do {
      if (*param_3 < *(int *)((longlong)plVar1 + 0x1c)) {
        plVar2 = (longlong *)*plVar1;
        plVar3 = plVar1;
      }
      else {
        plVar2 = (longlong *)plVar1[2];
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



/* RVA 0x5db0; VA 180005db0; FUN_180005db0 */

longlong * FUN_180005db0(longlong *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *_Buf1;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *_Buf2;
  longlong *local_res20;
  
  plVar12 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar12[1];
  local_res20 = plVar12;
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    iVar1 = *param_3;
    piVar8 = param_3 + 2;
    plVar9 = plVar10;
    do {
      iVar6 = (int)plVar9[4];
      _Buf2 = plVar9 + 5;
      if (iVar6 == iVar1) {
        uVar2 = *(ulonglong *)(param_3 + 6);
        piVar7 = piVar8;
        if (0xf < *(ulonglong *)(param_3 + 8)) {
          piVar7 = *(int **)piVar8;
        }
        uVar3 = plVar9[7];
        _Buf1 = _Buf2;
        if (0xf < (ulonglong)plVar9[8]) {
          _Buf1 = (longlong *)*_Buf2;
        }
        uVar11 = uVar3;
        if (uVar2 < uVar3) {
          uVar11 = uVar2;
        }
        iVar5 = memcmp(_Buf1,piVar7,uVar11);
        if (iVar5 == 0) {
          if (uVar3 < uVar2) {
            cVar4 = -1;
          }
          else {
            if (uVar2 < uVar3) goto LAB_180005e65;
            cVar4 = '\0';
          }
        }
        else if (iVar5 < 0) {
          cVar4 = -1;
        }
        else {
LAB_180005e65:
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = -1;
        if (iVar1 <= iVar6) {
          cVar4 = '\x01';
        }
      }
      if (cVar4 < '\0') {
        plVar9 = plVar9 + 2;
      }
      else {
        local_res20 = plVar9;
        if (*(char *)((longlong)plVar12 + 0x19) != '\0') {
          if (iVar1 == iVar6) {
            uVar2 = plVar9[7];
            if (0xf < (ulonglong)plVar9[8]) {
              _Buf2 = (longlong *)*_Buf2;
            }
            uVar3 = *(ulonglong *)(param_3 + 6);
            piVar7 = piVar8;
            if (0xf < *(ulonglong *)(param_3 + 8)) {
              piVar7 = *(int **)piVar8;
            }
            uVar11 = uVar3;
            if (uVar2 < uVar3) {
              uVar11 = uVar2;
            }
            iVar6 = memcmp(piVar7,_Buf2,uVar11);
            if (iVar6 == 0) {
              if (uVar3 < uVar2) {
                cVar4 = -1;
              }
              else {
                if (uVar2 < uVar3) goto LAB_180005f04;
                cVar4 = '\0';
              }
            }
            else if (iVar6 < 0) {
              cVar4 = -1;
            }
            else {
LAB_180005f04:
              cVar4 = '\x01';
            }
          }
          else {
            cVar4 = -1;
            if (iVar6 <= iVar1) {
              cVar4 = '\x01';
            }
          }
          if (cVar4 < '\0') {
            plVar12 = plVar9;
          }
        }
      }
      plVar9 = (longlong *)*plVar9;
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
  }
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    plVar10 = (longlong *)*plVar12;
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    iVar1 = *param_3;
    do {
      if (iVar1 == (int)plVar10[4]) {
        piVar8 = param_3 + 2;
        uVar2 = plVar10[7];
        plVar9 = plVar10 + 5;
        if (0xf < (ulonglong)plVar10[8]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar3 = *(ulonglong *)(param_3 + 6);
        if (0xf < *(ulonglong *)(param_3 + 8)) {
          piVar8 = *(int **)piVar8;
        }
        uVar11 = uVar3;
        if (uVar2 < uVar3) {
          uVar11 = uVar2;
        }
        iVar6 = memcmp(piVar8,plVar9,uVar11);
        if (iVar6 == 0) {
          if (uVar3 < uVar2) {
            cVar4 = -1;
          }
          else {
            if (uVar2 < uVar3) goto LAB_180005fc7;
            cVar4 = '\0';
          }
        }
        else if (iVar6 < 0) {
          cVar4 = -1;
        }
        else {
LAB_180005fc7:
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = -1;
        if ((int)plVar10[4] <= iVar1) {
          cVar4 = '\x01';
        }
      }
      if (cVar4 < '\0') {
        plVar9 = (longlong *)*plVar10;
        plVar12 = plVar10;
      }
      else {
        plVar9 = (longlong *)plVar10[2];
      }
      plVar10 = plVar9;
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
  }
  *param_2 = (longlong)local_res20;
  param_2[1] = (longlong)plVar12;
  return param_2;
}



/* RVA 0x6020; VA 180006020; FUN_180006020 */

void FUN_180006020(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006310(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x60a0; VA 1800060a0; FUN_1800060a0 */

void FUN_1800060a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x6120; VA 180006120; FUN_180006120 */

void FUN_180006120(longlong *param_1,undefined8 param_2)

{
  FUN_1800063d0(param_1,param_2,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x6150; VA 180006150; FUN_180006150 */

void FUN_180006150(longlong *param_1,undefined8 param_2)

{
  FUN_180006450(param_1,param_2,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x6180; VA 180006180; FUN_180006180 */

void FUN_180006180(longlong *param_1,undefined8 param_2)

{
  FUN_1800064d0(param_1,param_2,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x61b0; VA 1800061b0; FUN_1800061b0 */

void FUN_1800061b0(longlong *param_1,undefined8 param_2)

{
  FUN_180006550(param_1,param_2,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x61e0; VA 1800061e0; FUN_1800061e0 */

void FUN_1800061e0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006620(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x6260; VA 180006260; FUN_180006260 */

void FUN_180006260(longlong *param_1,undefined8 param_2)

{
  FUN_180006680(param_1,param_2,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x6290; VA 180006290; FUN_180006290 */

void FUN_180006290(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006750(param_1,param_2,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x6310; VA 180006310; FUN_180006310 */

void FUN_180006310(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006310(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6370; VA 180006370; FUN_180006370 */

void FUN_180006370(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x63d0; VA 1800063d0; FUN_1800063d0 */

void FUN_1800063d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800063d0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_180006290(param_3 + 5,param_3 + 5);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6450; VA 180006450; FUN_180006450 */

void FUN_180006450(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006450(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_180010e00(param_3 + 5);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x64d0; VA 1800064d0; FUN_1800064d0 */

void FUN_1800064d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800064d0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_180017da0(param_3 + 5);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6550; VA 180006550; FUN_180006550 */

void FUN_180006550(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006550(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    cVar1 = *(char *)((longlong)*(longlong **)(param_3[5] + 8) + 0x19);
    _Memory = *(longlong **)(param_3[5] + 8);
    while (cVar1 == '\0') {
      FUN_180006310(param_3 + 5,param_3 + 5,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    free((void *)param_3[5]);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6620; VA 180006620; FUN_180006620 */

void FUN_180006620(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006620(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6680; VA 180006680; FUN_180006680 */

void FUN_180006680(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006680(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    cVar1 = *(char *)((longlong)*(longlong **)(param_3[5] + 8) + 0x19);
    _Memory = *(longlong **)(param_3[5] + 8);
    while (cVar1 == '\0') {
      FUN_180006310(param_3 + 5,param_3 + 5,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    free((void *)param_3[5]);
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6750; VA 180006750; FUN_180006750 */

void FUN_180006750(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180006750(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x67b0; VA 1800067b0; FUN_1800067b0 */

void FUN_1800067b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800067b0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* RVA 0x6850; VA 180006850; FUN_180006850 */

longlong * FUN_180006850(longlong *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *local_res8;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar7 = (longlong *)*param_1;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    iVar2 = *(int *)((longlong)param_3 + 0x1c);
    iVar9 = *param_4;
    if (param_3 == (longlong *)*plVar7) {
      if (iVar9 < iVar2) {
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
    else if (iVar9 < iVar2) {
      plVar7 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar5 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x19);
          plVar7 = plVar5;
          plVar5 = (longlong *)plVar5[2];
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar8 = (longlong *)param_3[1];
        plVar5 = param_3;
        while ((plVar7 = plVar8, cVar1 == '\0' && (plVar5 == (longlong *)*plVar7))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar8 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
        if (*(char *)((longlong)plVar5 + 0x19) != '\0') {
          plVar7 = plVar5;
        }
      }
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar9) {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 != '\0') {
          *param_2 = (longlong)plVar7;
          *(undefined4 *)(param_2 + 1) = 0;
          return param_2;
        }
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
    }
    else {
      if (iVar9 <= iVar2) {
        *param_2 = (longlong)param_3;
        *(undefined1 *)(param_2 + 2) = 1;
        goto LAB_180006a23;
      }
      local_res8 = param_3;
      plVar7 = FUN_180012070((longlong *)&local_res8);
      lVar3 = *plVar7;
      if ((*(char *)(lVar3 + 0x19) != '\0') || (iVar9 < *(int *)(lVar3 + 0x1c))) {
        cVar1 = *(char *)(param_3[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 != '\0') {
          *param_2 = (longlong)param_3;
          *(undefined4 *)(param_2 + 1) = 0;
          return param_2;
        }
        *param_2 = lVar3;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
    }
  }
  else if ((*(char *)(plVar7[1] + 0x19) != '\0') ||
          (iVar9 = *param_4, *(int *)(plVar7[2] + 0x1c) < iVar9)) {
    *param_2 = plVar7[2];
    *(undefined1 *)(param_2 + 2) = 0;
LAB_180006a23:
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  uStack_30 = 0;
  plVar7 = (longlong *)((longlong *)*param_1)[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar5 = (longlong *)*param_1;
  plVar8 = plVar7;
  while (plVar6 = plVar7, cVar1 == '\0') {
    bVar4 = iVar9 <= *(int *)((longlong)plVar6 + 0x1c);
    plVar7 = plVar6;
    plVar8 = plVar6;
    if (!bVar4) {
      plVar7 = plVar6 + 2;
      plVar8 = plVar5;
    }
    uStack_30 = (uint)bVar4;
    cVar1 = *(char *)(*plVar7 + 0x19);
    plVar5 = plVar8;
    plVar7 = (longlong *)*plVar7;
    plVar8 = plVar6;
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar5 + 0x1c) <= *param_4)) {
    *param_2 = (longlong)plVar5;
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = (longlong)plVar8;
    param_2[1] = CONCAT44(uStack_2c,uStack_30);
  }
  return param_2;
}



/* RVA 0x6a50; VA 180006a50; FUN_180006a50 */

longlong * FUN_180006a50(longlong *param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *local_res8;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar7 = (longlong *)*param_1;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    iVar2 = *(int *)((longlong)param_3 + 0x1c);
    iVar9 = *param_4;
    if (param_3 == (longlong *)*plVar7) {
      if (iVar9 < iVar2) {
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
    }
    else if (iVar9 < iVar2) {
      plVar7 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar5 = (longlong *)plVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x19);
          plVar7 = plVar5;
          plVar5 = (longlong *)plVar5[2];
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar8 = (longlong *)param_3[1];
        plVar5 = param_3;
        while ((plVar7 = plVar8, cVar1 == '\0' && (plVar5 == (longlong *)*plVar7))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar8 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
        if (*(char *)((longlong)plVar5 + 0x19) != '\0') {
          plVar7 = plVar5;
        }
      }
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar9) {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 != '\0') {
          *param_2 = (longlong)plVar7;
          *(undefined4 *)(param_2 + 1) = 0;
          return param_2;
        }
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
    }
    else {
      if (iVar9 <= iVar2) {
        *param_2 = (longlong)param_3;
        *(undefined1 *)(param_2 + 2) = 1;
        goto LAB_180006c23;
      }
      local_res8 = param_3;
      plVar7 = FUN_1800122e0((longlong *)&local_res8);
      lVar3 = *plVar7;
      if ((*(char *)(lVar3 + 0x19) != '\0') || (iVar9 < *(int *)(lVar3 + 0x1c))) {
        cVar1 = *(char *)(param_3[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 != '\0') {
          *param_2 = (longlong)param_3;
          *(undefined4 *)(param_2 + 1) = 0;
          return param_2;
        }
        *param_2 = lVar3;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
    }
  }
  else if ((*(char *)(plVar7[1] + 0x19) != '\0') ||
          (iVar9 = *param_4, *(int *)(plVar7[2] + 0x1c) < iVar9)) {
    *param_2 = plVar7[2];
    *(undefined1 *)(param_2 + 2) = 0;
LAB_180006c23:
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  uStack_30 = 0;
  plVar7 = (longlong *)((longlong *)*param_1)[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar5 = (longlong *)*param_1;
  plVar8 = plVar7;
  while (plVar6 = plVar7, cVar1 == '\0') {
    bVar4 = iVar9 <= *(int *)((longlong)plVar6 + 0x1c);
    plVar7 = plVar6;
    plVar8 = plVar6;
    if (!bVar4) {
      plVar7 = plVar6 + 2;
      plVar8 = plVar5;
    }
    uStack_30 = (uint)bVar4;
    cVar1 = *(char *)(*plVar7 + 0x19);
    plVar5 = plVar8;
    plVar7 = (longlong *)*plVar7;
    plVar8 = plVar6;
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar5 + 0x1c) <= *param_4)) {
    *param_2 = (longlong)plVar5;
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = (longlong)plVar8;
    param_2[1] = CONCAT44(uStack_2c,uStack_30);
  }
  return param_2;
}



/* RVA 0x6de0; VA 180006de0; FUN_180006de0 */

longlong * FUN_180006de0(longlong *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *_Buf1;
  int *_Buf2;
  longlong *plVar7;
  ulonglong _Size;
  
  lVar2 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar2;
  plVar7 = *(longlong **)(lVar2 + 8);
  *param_2 = (longlong)plVar7;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    iVar1 = *param_3;
    do {
      *param_2 = (longlong)plVar7;
      if ((int)plVar7[4] == iVar1) {
        _Buf1 = plVar7 + 5;
        uVar3 = *(ulonglong *)(param_3 + 6);
        _Buf2 = param_3 + 2;
        if (0xf < *(ulonglong *)(param_3 + 8)) {
          _Buf2 = *(int **)(param_3 + 2);
        }
        uVar4 = plVar7[7];
        if (0xf < (ulonglong)plVar7[8]) {
          _Buf1 = (longlong *)*_Buf1;
        }
        _Size = uVar4;
        if (uVar3 < uVar4) {
          _Size = uVar3;
        }
        iVar6 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar6 == 0) {
          if (uVar4 < uVar3) {
            cVar5 = -1;
          }
          else {
            if (uVar3 < uVar4) goto LAB_180006e7f;
            cVar5 = '\0';
          }
        }
        else if (iVar6 < 0) {
          cVar5 = -1;
        }
        else {
LAB_180006e7f:
          cVar5 = '\x01';
        }
      }
      else {
        cVar5 = -1;
        if (iVar1 <= (int)plVar7[4]) {
          cVar5 = '\x01';
        }
      }
      if (-1 < cVar5) {
        param_2[2] = (longlong)plVar7;
      }
      else {
        plVar7 = plVar7 + 2;
      }
      plVar7 = (longlong *)*plVar7;
      *(uint *)(param_2 + 1) = (uint)(-1 < cVar5);
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
  }
  return param_2;
}



/* RVA 0x7090; VA 180007090; FUN_180007090 */

void FUN_180007090(undefined8 param_1,void *param_2)

{
  FUN_180006290((longlong *)((longlong)param_2 + 0x28),(longlong *)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}



/* RVA 0x70c0; VA 1800070c0; FUN_1800070c0 */

void FUN_1800070c0(undefined8 param_1,void *param_2)

{
  FUN_180010e00((longlong *)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}



/* RVA 0x70f0; VA 1800070f0; FUN_1800070f0 */

void FUN_1800070f0(undefined8 param_1,void *param_2)

{
  FUN_180017da0((longlong *)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}



/* RVA 0x7120; VA 180007120; FUN_180007120 */

void FUN_180007120(undefined8 param_1,void *param_2)

{
  char cVar1;
  longlong *_Memory;
  longlong *plVar2;
  
  _Memory = *(longlong **)(*(longlong *)((longlong)param_2 + 0x28) + 8);
  cVar1 = *(char *)((longlong)_Memory + 0x19);
  while (cVar1 == '\0') {
    FUN_180006310((longlong)param_2 + 0x28,(longlong)param_2 + 0x28,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(*(void **)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}



/* RVA 0x71b0; VA 1800071b0; FUN_1800071b0 */

void FUN_1800071b0(undefined8 param_1,void *param_2)

{
  char cVar1;
  longlong *_Memory;
  longlong *plVar2;
  
  _Memory = *(longlong **)(*(longlong *)((longlong)param_2 + 0x28) + 8);
  cVar1 = *(char *)((longlong)_Memory + 0x19);
  while (cVar1 == '\0') {
    FUN_180006310((longlong)param_2 + 0x28,(longlong)param_2 + 0x28,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(*(void **)((longlong)param_2 + 0x28));
  free(param_2);
  return;
}



/* RVA 0x7250; VA 180007250; FUN_180007250 */

longlong FUN_180007250(ulonglong param_1)

{
  if (param_1 < 0x4000000000000000) {
    return param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x7280; VA 180007280; FUN_180007280 */

longlong FUN_180007280(ulonglong param_1)

{
  if (param_1 < 0x2000000000000000) {
    return param_1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x72b0; VA 1800072b0; FUN_1800072b0 */

longlong FUN_1800072b0(ulonglong param_1)

{
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    return param_1 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x72e0; VA 1800072e0; FUN_1800072e0 */

longlong FUN_1800072e0(ulonglong param_1)

{
  if (param_1 < 0x800000000000000) {
    return param_1 << 5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x7310; VA 180007310; FUN_180007310 */

longlong FUN_180007310(ulonglong param_1)

{
  if (param_1 < 0x666666666666667) {
    return param_1 * 0x28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x7340; VA 180007340; FUN_180007340 */

longlong FUN_180007340(ulonglong param_1)

{
  if (param_1 < 0x492492492492493) {
    return param_1 * 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x7370; VA 180007370; FUN_180007370 */

longlong FUN_180007370(ulonglong param_1)

{
  if (param_1 < 0x400000000000000) {
    return param_1 << 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x73a0; VA 1800073a0; FUN_1800073a0 */

longlong FUN_1800073a0(ulonglong param_1)

{
  if (param_1 < 0x333333333333334) {
    return param_1 * 0x50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x73d0; VA 1800073d0; FUN_1800073d0 */

longlong FUN_1800073d0(ulonglong param_1)

{
  if (param_1 < 0x222222222222223) {
    return param_1 * 0x78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x74f0; VA 1800074f0; FUN_1800074f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800074f0(longlong param_1,undefined8 param_2,_Locinfo *param_3)

{
  undefined8 uVar1;
  _Cvtvec *p_Var2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  _Cvtvec local_58;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_78;
  p_Var2 = std::_Locinfo::_Getcvt(param_3,&local_58);
  uVar1 = *(undefined8 *)&p_Var2->_Isclocale;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)p_Var2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  uVar1 = *(undefined8 *)(p_Var2->_Isleadbyte + 0xc);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(p_Var2->_Isleadbyte + 4);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(p_Var2->_Isleadbyte + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(p_Var2->_Isleadbyte + 0x1c);
  pwVar3 = (wchar_t *)std::_Locinfo::_W_Getdays(param_3);
  sVar4 = wcslen(pwVar3);
  pvVar5 = calloc(sVar4 + 1,2);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  memcpy(pvVar5,pwVar3,(sVar4 + 1) * 2);
  *(void **)(param_1 + 0x10) = pvVar5;
  pwVar3 = (wchar_t *)std::_Locinfo::_W_Getmonths(param_3);
  sVar4 = wcslen(pwVar3);
  pvVar5 = calloc(sVar4 + 1,2);
  if (pvVar5 != (void *)0x0) {
    memcpy(pvVar5,pwVar3,(sVar4 + 1) * 2);
    *(void **)(param_1 + 0x18) = pvVar5;
    puVar6 = calloc(0xd,2);
    uVar1 = _UNK_180068c68;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = _DAT_180068c60;
      puVar6[1] = uVar1;
      puVar6[2] = DAT_180068c70;
      *(undefined2 *)(puVar6 + 3) = DAT_180068c78;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}



/* RVA 0x7640; VA 180007640; FUN_180007640 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007640(longlong param_1,undefined8 param_2,_Locinfo *param_3)

{
  undefined8 uVar1;
  _Cvtvec *p_Var2;
  wchar_t *pwVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  _Cvtvec local_58;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_78;
  p_Var2 = std::_Locinfo::_Getcvt(param_3,&local_58);
  uVar1 = *(undefined8 *)&p_Var2->_Isclocale;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)p_Var2;
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  uVar1 = *(undefined8 *)(p_Var2->_Isleadbyte + 0xc);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(p_Var2->_Isleadbyte + 4);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(p_Var2->_Isleadbyte + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(p_Var2->_Isleadbyte + 0x1c);
  pwVar3 = (wchar_t *)std::_Locinfo::_W_Getdays(param_3);
  sVar4 = wcslen(pwVar3);
  pvVar5 = calloc(sVar4 + 1,2);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  memcpy(pvVar5,pwVar3,(sVar4 + 1) * 2);
  *(void **)(param_1 + 0x10) = pvVar5;
  pwVar3 = (wchar_t *)std::_Locinfo::_W_Getmonths(param_3);
  sVar4 = wcslen(pwVar3);
  pvVar5 = calloc(sVar4 + 1,2);
  if (pvVar5 != (void *)0x0) {
    memcpy(pvVar5,pwVar3,(sVar4 + 1) * 2);
    *(void **)(param_1 + 0x18) = pvVar5;
    puVar6 = calloc(0xd,2);
    uVar1 = _UNK_180068c68;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = _DAT_180068c60;
      puVar6[1] = uVar1;
      puVar6[2] = DAT_180068c70;
      *(undefined2 *)(puVar6 + 3) = DAT_180068c78;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}



/* RVA 0x7790; VA 180007790; FUN_180007790 */

void FUN_180007790(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1 >> 3;
    FUN_1800082a0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_1800082a0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_1800082a0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_1800082a0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_1800082a0(param_1,param_2,param_3,param_4);
  return;
}



/* RVA 0x7870; VA 180007870; FUN_180007870 */

void FUN_180007870(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_58;
  longlong lStack_50;
  longlong local_38;
  longlong local_30 [3];
  
  if (param_2 != param_3) {
    plVar1 = (longlong *)*param_1;
    do {
      plVar3 = FUN_180006a50(param_1,local_30,plVar1,param_2);
      local_58 = *plVar3;
      lStack_50 = plVar3[1];
      local_38 = plVar3[2];
      if ((char)local_38 == '\0') {
        if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        lVar2 = *param_1;
        plVar3 = (longlong *)FUN_180064554(0x28);
        *(undefined8 *)((longlong)plVar3 + 0x1c) = *(undefined8 *)param_2;
        *plVar3 = lVar2;
        plVar3[1] = lVar2;
        plVar3[2] = lVar2;
        *(undefined2 *)(plVar3 + 3) = 0;
        FUN_1800166a0(param_1,&local_58,plVar3);
      }
      param_2 = param_2 + 2;
    } while (param_2 != param_3);
  }
  return;
}



/* RVA 0x7970; VA 180007970; FUN_180007970 */

void FUN_180007970(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_68;
  longlong lStack_60;
  longlong local_48;
  longlong local_40 [3];
  
  if (param_2 != param_3) {
    plVar2 = (longlong *)*param_1;
    do {
      plVar5 = FUN_180006850(param_1,local_40,plVar2,(int *)((longlong)param_2 + 0x1c));
      local_68 = *plVar5;
      lStack_60 = plVar5[1];
      local_48 = plVar5[2];
      if ((char)local_48 == '\0') {
        if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        lVar3 = *param_1;
        plVar5 = (longlong *)FUN_180064554(0x20);
        *(undefined4 *)((longlong)plVar5 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
        *plVar5 = lVar3;
        plVar5[1] = lVar3;
        plVar5[2] = lVar3;
        *(undefined2 *)(plVar5 + 3) = 0;
        FUN_180015860(param_1,&local_68,plVar5);
      }
      plVar5 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        param_2 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          param_2 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar4 = (longlong *)param_2[1];
        plVar5 = param_2;
        while ((param_2 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          plVar4 = (longlong *)param_2[1];
          plVar5 = param_2;
        }
      }
    } while (param_2 != param_3);
  }
  return;
}



/* RVA 0x7ac0; VA 180007ac0; FUN_180007ac0 */

basic_ostream<char,std::char_traits<char>_> *
FUN_180007ac0(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  __int64 _Var5;
  ulonglong uVar6;
  basic_streambuf<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,std::char_traits<char>_> *this;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = 0;
  _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  lVar9 = lVar8;
  if ((0 < _Var5) &&
     (uVar6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     param_3 < uVar6)) {
    _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar9 = _Var5 - param_3;
  }
  pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar7 + 8))(pbVar7);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    this = std::basic_ios<char,std::char_traits<char>_>::tie
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1 == false) {
    iVar4 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) {
          lVar8 = 4;
          goto LAB_180007c26;
        }
      }
    }
    pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    uVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar7,param_2,param_3);
    if (uVar6 == param_3) {
LAB_180007c26:
      do {
        iVar4 = (int)lVar8;
        if (lVar9 == 0) goto LAB_180007c66;
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) break;
        lVar9 = lVar9 + -1;
      } while( true );
    }
    iVar4 = 4;
LAB_180007c66:
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar7 + 0x10))(pbVar7);
  }
  return param_1;
}



/* RVA 0x7d30; VA 180007d30; FUN_180007d30 */

ulonglong * FUN_180007d30(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  
  puVar3 = param_1;
  if (param_1 == param_2) {
    return param_2;
  }
  while (puVar3 = puVar3 + 1, puVar3 != param_2) {
    uVar1 = *puVar3;
    local_res10 = *param_1;
    local_res8 = uVar1;
    plVar4 = FUN_180011a60(param_3,&local_res8);
    uVar2 = plVar4[1];
    plVar4 = FUN_180011a60(param_3,&local_res10);
    if (uVar2 < (ulonglong)plVar4[1]) {
      memmove((void *)((longlong)puVar3 + (8 - ((longlong)puVar3 - (longlong)param_1))),param_1,
              (longlong)puVar3 - (longlong)param_1);
      *param_1 = uVar1;
    }
    else {
      local_res10 = puVar3[-1];
      local_res8 = uVar1;
      plVar4 = FUN_180011a60(param_3,&local_res8);
      uVar2 = plVar4[1];
      plVar4 = FUN_180011a60(param_3,&local_res10);
      puVar5 = puVar3;
      puVar6 = puVar3;
      if (uVar2 < (ulonglong)plVar4[1]) {
        do {
          puVar6 = puVar5 + -1;
          *puVar5 = *puVar6;
          local_res10 = puVar5[-2];
          local_res8 = uVar1;
          plVar4 = FUN_180011a60(param_3,&local_res8);
          uVar2 = plVar4[1];
          plVar4 = FUN_180011a60(param_3,&local_res10);
          puVar5 = puVar6;
        } while (uVar2 < (ulonglong)plVar4[1]);
      }
      *puVar6 = uVar1;
    }
  }
  return param_2;
}



/* RVA 0x7ea0; VA 180007ea0; FUN_180007ea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180007ea0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  char local_15 [5];
  ulonglong local_10;
  char *pcVar3;
  
  local_10 = DAT_18007d140 ^ (ulonglong)auStack_58;
  pcVar2 = local_15 + 2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
      *pcVar2 = (char)uVar1 + (char)((ulonglong)uVar1 / 10) * -10 + '0';
      uVar1 = (uint)((ulonglong)uVar1 / 10);
    } while (uVar1 != 0);
    pcVar2 = pcVar3 + -2;
    *pcVar2 = '-';
  }
  else {
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
  }
  local_30 = param_1;
  FUN_180002510(param_1,pcVar2,local_15 + 2);
  return param_1;
}



/* RVA 0x8080; VA 180008080; FUN_180008080 */

undefined8 FUN_180008080(undefined8 param_1,longlong param_2,int *param_3)

{
  if (*(char *)(param_2 + 0x19) == '\0') {
    param_3 = (int *)FUN_180012e00(param_1,param_3,(int *)(param_2 + 0x20));
    if ((char)param_3 == '\0') {
      return CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    }
  }
  return (ulonglong)param_3 & 0xffffffffffffff00;
}



/* RVA 0x8110; VA 180008110; FUN_180008110 */

void FUN_180008110(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res20;
  
  local_res10 = param_2 - param_1 >> 3;
  lVar7 = param_2 - param_1 >> 4;
  if (0 < lVar7) {
    lVar1 = local_res10 - 1;
    lVar6 = lVar1;
    do {
      uVar2 = *(ulonglong *)(param_1 + -8 + lVar7 * 8);
      lVar7 = lVar7 + -1;
      lVar4 = lVar7;
      while (lVar4 < lVar1 >> 1) {
        local_res20 = *(ulonglong *)(param_1 + 8 + lVar4 * 0x10);
        local_res8 = *(ulonglong *)(param_1 + 0x10 + lVar4 * 0x10);
        plVar5 = FUN_180011a60(param_3,&local_res8);
        uVar3 = plVar5[1];
        plVar5 = FUN_180011a60(param_3,&local_res20);
        lVar6 = (2 - (ulonglong)(uVar3 < (ulonglong)plVar5[1])) + lVar4 * 2;
        *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
        lVar4 = lVar6;
        lVar6 = lVar1;
      }
      if ((lVar4 == lVar1 >> 1) && ((local_res10 & 1) == 0)) {
        *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + -8 + local_res10 * 8);
        lVar4 = lVar6;
      }
      while (lVar7 < lVar4) {
        lVar6 = lVar4 + -1 >> 1;
        local_res8 = *(ulonglong *)(param_1 + lVar6 * 8);
        local_res20 = uVar2;
        plVar5 = FUN_180011a60(param_3,&local_res8);
        uVar3 = plVar5[1];
        plVar5 = FUN_180011a60(param_3,&local_res20);
        if ((ulonglong)plVar5[1] <= uVar3) break;
        *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
        lVar4 = lVar6;
      }
      *(ulonglong *)(param_1 + lVar4 * 8) = uVar2;
      lVar6 = local_res10 - 1;
    } while (0 < lVar7);
  }
  return;
}



/* RVA 0x82a0; VA 1800082a0; FUN_1800082a0 */

void FUN_1800082a0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  
  local_res10 = *param_1;
  local_res8 = *param_2;
  plVar2 = FUN_180011a60(param_4,&local_res8);
  uVar1 = plVar2[1];
  plVar2 = FUN_180011a60(param_4,&local_res10);
  if (uVar1 < (ulonglong)plVar2[1]) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  local_res10 = *param_2;
  local_res8 = *param_3;
  plVar2 = FUN_180011a60(param_4,&local_res8);
  uVar1 = plVar2[1];
  plVar2 = FUN_180011a60(param_4,&local_res10);
  if (uVar1 < (ulonglong)plVar2[1]) {
    local_res8 = *param_3;
    *param_3 = *param_2;
    *param_2 = local_res8;
    local_res10 = *param_1;
    plVar2 = FUN_180011a60(param_4,&local_res8);
    uVar1 = plVar2[1];
    plVar2 = FUN_180011a60(param_4,&local_res10);
    if (uVar1 < (ulonglong)plVar2[1]) {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}



/* RVA 0x8390; VA 180008390; FUN_180008390 */

longlong * FUN_180008390(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  *param_1 = (longlong)param_2;
  if (param_2 != param_3) {
    while( true ) {
      plVar4 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        param_2 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          param_2 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar3 = (longlong *)param_2[1];
        plVar4 = param_2;
        while ((param_2 = plVar3, cVar1 == '\0' && (plVar4 == (longlong *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          plVar3 = (longlong *)param_2[1];
          plVar4 = param_2;
        }
      }
      if (param_2 == param_3) break;
      local_res10[0] = *(int *)(*param_1 + 0x1c);
      local_res8[0] = *(int *)((longlong)param_2 + 0x1c);
      plVar4 = FUN_180011730(param_4,local_res8);
      lVar2 = *plVar4;
      plVar4 = FUN_180011730(param_4,local_res10);
      if ((int)lVar2 < (int)*plVar4) {
        *param_1 = (longlong)param_2;
      }
    }
  }
  return param_1;
}



/* RVA 0x8490; VA 180008490; FUN_180008490 */

longlong FUN_180008490(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (param_2 - (longlong)param_1) + (longlong)param_3;
}



/* RVA 0x84d0; VA 1800084d0; FUN_1800084d0 */

void FUN_1800084d0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *local_res20;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  puVar7 = param_3 + -1;
  puVar4 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  lVar2 = (longlong)puVar7 - (longlong)param_2 >> 3;
  local_res20 = puVar7;
  if (lVar2 < 0x29) {
    FUN_1800082a0(param_2,puVar4,puVar7,param_4);
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    FUN_1800082a0(param_2,param_2 + lVar2,param_2 + lVar2 * 2,param_4);
    FUN_1800082a0(puVar4 + -lVar2,puVar4,puVar4 + lVar2,param_4);
    FUN_1800082a0(local_res20 + lVar2 * -2,puVar7 + -lVar2,local_res20,param_4);
    FUN_1800082a0(param_2 + lVar2,puVar4,puVar7 + -lVar2,param_4);
  }
  puVar7 = puVar4 + 1;
  if (param_2 < puVar4) {
    while( true ) {
      local_58 = *puVar4;
      puVar8 = puVar4 + -1;
      local_res20 = (ulonglong *)*puVar8;
      plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(param_4,&local_58);
      if (uVar1 < (ulonglong)plVar3[1]) break;
      local_58 = *puVar8;
      local_res20 = (ulonglong *)*puVar4;
      plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(param_4,&local_58);
      if ((uVar1 < (ulonglong)plVar3[1]) || (puVar4 = puVar8, puVar8 <= param_2)) break;
    }
  }
  puVar8 = puVar7;
  local_res20 = puVar7;
  puVar5 = puVar4;
  if (puVar7 < param_3) {
    while( true ) {
      local_58 = *puVar4;
      local_res20 = (ulonglong *)*puVar7;
      plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(param_4,&local_58);
      puVar8 = puVar7;
      local_res20 = puVar7;
      if (uVar1 < (ulonglong)plVar3[1]) break;
      local_58 = *puVar7;
      local_res20 = (ulonglong *)*puVar4;
      plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(param_4,&local_58);
      local_res20 = puVar7;
      if ((uVar1 < (ulonglong)plVar3[1]) ||
         (puVar7 = puVar7 + 1, puVar8 = puVar7, local_res20 = puVar7, param_3 <= puVar7)) break;
    }
  }
joined_r0x000180008697:
  do {
    puVar6 = puVar4;
    if (param_3 <= puVar7) {
joined_r0x000180008729:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        puVar6 = puVar6 + -1;
        local_50[0] = *puVar5;
        local_58 = *puVar6;
        plVar3 = FUN_180011a60(param_4,&local_58);
        uVar1 = plVar3[1];
        plVar3 = FUN_180011a60(param_4,local_50);
        if ((ulonglong)plVar3[1] <= uVar1) {
          local_58 = *puVar6;
          local_50[0] = *puVar5;
          plVar3 = FUN_180011a60(param_4,local_50);
          uVar1 = plVar3[1];
          plVar3 = FUN_180011a60(param_4,&local_58);
          puVar7 = local_res20;
          if (uVar1 < (ulonglong)plVar3[1]) break;
          puVar5 = puVar5 + -1;
          if (puVar5 != puVar6) {
            uVar1 = *puVar5;
            *puVar5 = *puVar6;
            *puVar6 = uVar1;
          }
        }
        puVar7 = local_res20;
      }
      if (puVar4 == param_2) {
        if (puVar7 == param_3) {
          *param_1 = (ulonglong)puVar5;
          param_1[1] = (ulonglong)puVar8;
          return;
        }
        if (puVar8 != puVar7) {
          uVar1 = *puVar5;
          *puVar5 = *puVar8;
          *puVar8 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        local_res20 = puVar7;
        puVar5 = puVar5 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar7 == param_3) {
          puVar5 = puVar5 + -1;
          if (puVar4 != puVar5) {
            uVar1 = *puVar4;
            *puVar4 = *puVar5;
            *puVar5 = uVar1;
          }
          uVar1 = *puVar5;
          *puVar5 = puVar8[-1];
          puVar8[-1] = uVar1;
          puVar8 = puVar8 + -1;
        }
        else {
          uVar1 = *puVar7;
          *puVar7 = *puVar4;
          puVar7 = puVar7 + 1;
          *puVar4 = uVar1;
          local_res20 = puVar7;
        }
      }
      goto joined_r0x000180008697;
    }
    local_58 = *puVar7;
    local_res20 = (ulonglong *)*puVar5;
    plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
    uVar1 = plVar3[1];
    plVar3 = FUN_180011a60(param_4,&local_58);
    if ((ulonglong)plVar3[1] <= uVar1) {
      local_58 = *puVar5;
      local_res20 = (ulonglong *)*puVar7;
      plVar3 = FUN_180011a60(param_4,(ulonglong *)&local_res20);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(param_4,&local_58);
      local_res20 = puVar7;
      if (uVar1 < (ulonglong)plVar3[1]) goto joined_r0x000180008729;
      if (puVar8 != puVar7) {
        uVar1 = *puVar8;
        *puVar8 = *puVar7;
        *puVar7 = uVar1;
      }
      puVar8 = puVar8 + 1;
    }
    puVar7 = puVar7 + 1;
    local_res20 = puVar7;
  } while( true );
}



/* RVA 0x88c0; VA 1800088c0; FUN_1800088c0 */

void FUN_1800088c0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  
  plVar2 = param_5;
  local_res10 = param_3 - 1;
  lVar6 = local_res10 >> 1;
  lVar5 = param_2;
  local_res18 = param_3;
  while (lVar5 < lVar6) {
    local_res8 = *(ulonglong *)(param_1 + 8 + lVar5 * 0x10);
    param_5 = *(longlong **)(param_1 + 0x10 + lVar5 * 0x10);
    plVar3 = FUN_180011a60(plVar2,(ulonglong *)&param_5);
    uVar1 = plVar3[1];
    plVar3 = FUN_180011a60(plVar2,&local_res8);
    lVar4 = (2 - (ulonglong)(uVar1 < (ulonglong)plVar3[1])) + lVar5 * 2;
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar5 = lVar4;
  }
  if ((lVar5 == lVar6) && ((local_res18 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + -8 + local_res18 * 8);
    lVar5 = local_res10;
  }
  if (param_2 < lVar5) {
    while( true ) {
      param_5 = (longlong *)*param_4;
      lVar6 = lVar5 + -1 >> 1;
      local_res18 = *(ulonglong *)(param_1 + lVar6 * 8);
      plVar3 = FUN_180011a60(plVar2,&local_res18);
      uVar1 = plVar3[1];
      plVar3 = FUN_180011a60(plVar2,(ulonglong *)&param_5);
      if ((ulonglong)plVar3[1] <= uVar1) break;
      *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
      lVar5 = lVar6;
      if (lVar6 <= param_2) {
        *(ulonglong *)(param_1 + lVar6 * 8) = *param_4;
        return;
      }
    }
  }
  *(ulonglong *)(param_1 + lVar5 * 8) = *param_4;
  return;
}



/* RVA 0x8a40; VA 180008a40; FUN_180008a40 */

void FUN_180008a40(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong local_res8 [4];
  
  if (0xf < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    local_res8[0] = *(ulonglong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1800088c0((longlong)param_1,0,(param_2 + -8) - (longlong)param_1 >> 3,local_res8,param_3);
  }
  return;
}



/* RVA 0x8aa0; VA 180008aa0; FUN_180008aa0 */

void FUN_180008aa0(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong local_res8;
  ulonglong local_res10;
  
  if (param_2 <= param_3) {
    *(ulonglong *)(param_1 + param_2 * 8) = *param_4;
    return;
  }
  do {
    local_res10 = *param_4;
    lVar3 = param_2 + -1 >> 1;
    local_res8 = *(ulonglong *)(param_1 + lVar3 * 8);
    plVar2 = FUN_180011a60(param_5,&local_res8);
    uVar1 = plVar2[1];
    plVar2 = FUN_180011a60(param_5,&local_res10);
    if ((ulonglong)plVar2[1] <= uVar1) {
      *(ulonglong *)(param_1 + param_2 * 8) = *param_4;
      return;
    }
    *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    param_2 = lVar3;
  } while (param_3 < lVar3);
  *(ulonglong *)(param_1 + lVar3 * 8) = *param_4;
  return;
}



/* RVA 0x8b70; VA 180008b70; FUN_180008b70 */

longlong * FUN_180008b70(longlong *param_1,ulonglong param_2,undefined8 param_3,void *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *_Dst;
  void *_Memory;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  uVar4 = param_2 | 0xf;
  uVar2 = param_1[3];
  uVar5 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = uVar2 + (uVar2 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
    uVar5 = uVar1;
  }
  _Dst = (void *)FUN_1800039c0(uVar5 + 1);
  param_1[2] = param_2;
  param_1[3] = uVar5;
  memcpy(_Dst,param_4,param_2);
  *(undefined1 *)((longlong)_Dst + param_2) = 0;
  if (0xf < uVar2) {
    pvVar3 = (void *)*param_1;
    _Memory = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = (longlong)_Dst;
  return param_1;
}



/* RVA 0x8c70; VA 180008c70; FUN_180008c70 */

undefined8 *
FUN_180008c70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  uVar3 = _Size + param_2 | 0xf;
  uVar2 = param_1[3];
  uVar4 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
     (uVar1 = uVar2 + (uVar2 >> 1), uVar4 = uVar3, uVar3 < uVar1)) {
    uVar4 = uVar1;
  }
  _Dst = (void *)FUN_1800039c0(uVar4 + 1);
  param_1[2] = _Size + param_2;
  param_1[3] = uVar4;
  pvVar5 = (void *)(_Size + (longlong)_Dst);
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy(pvVar5,param_4,param_5);
    *(undefined1 *)(param_5 + (longlong)pvVar5) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy(pvVar5,param_4,param_5);
    *(undefined1 *)(param_5 + (longlong)pvVar5) = 0;
    pvVar5 = _Src;
    if ((0xfff < uVar2 + 1) &&
       (pvVar5 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar5);
  }
  *param_1 = _Dst;
  return param_1;
}



/* RVA 0x8dc0; VA 180008dc0; FUN_180008dc0 */

undefined8 *
FUN_180008dc0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,void *param_5,
             size_t param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  
  lVar2 = param_1[2];
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  uVar4 = lVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  uVar5 = 0x7fffffffffffffff;
  if (((uVar4 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) &&
     (uVar1 = uVar3 + (uVar3 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
    uVar5 = uVar1;
  }
  _Dst = (void *)FUN_1800039c0(uVar5 + 1);
  param_1[3] = uVar5;
  param_1[2] = lVar2 + param_2;
  pvVar6 = (void *)(param_4 + (longlong)_Dst);
  if (uVar3 < 0x10) {
    memcpy(_Dst,param_1,param_4);
    memcpy(pvVar6,param_5,param_6);
    memcpy((void *)((longlong)pvVar6 + param_6),(void *)(param_4 + (longlong)param_1),
           (lVar2 - param_4) + 1);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,param_4);
    memcpy(pvVar6,param_5,param_6);
    memcpy((void *)((longlong)pvVar6 + param_6),(void *)((longlong)_Src + param_4),
           (lVar2 - param_4) + 1);
    pvVar6 = _Src;
    if ((0xfff < uVar3 + 1) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



/* RVA 0x8fc0; VA 180008fc0; FUN_180008fc0 */

void FUN_180008fc0(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong local_res8;
  
  if (0xf < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    puVar1 = (ulonglong *)(param_2 + -8);
    do {
      local_res8 = *puVar1;
      *puVar1 = *param_1;
      FUN_1800088c0((longlong)param_1,0,(longlong)puVar1 - (longlong)param_1 >> 3,&local_res8,
                    param_3);
      puVar1 = puVar1 + -1;
    } while (0xf < (longlong)((8 - (longlong)param_1) + (longlong)puVar1 & 0xfffffffffffffff8U));
  }
  return;
}



/* RVA 0x9060; VA 180009060; FUN_180009060 */

void FUN_180009060(ulonglong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong local_res8;
  ulonglong *local_res10;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong *local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  
  uVar4 = (longlong)param_2 - (longlong)param_1;
  puVar6 = param_2;
  while( true ) {
    local_res10 = param_2;
    if ((longlong)(uVar4 & 0xfffffffffffffff8) < 0x101) {
      if ((param_1 != puVar6) && (puVar7 = param_1 + 1, puVar7 != puVar6)) {
        do {
          uVar4 = *puVar7;
          local_48 = (ulonglong *)*param_1;
          local_res8 = uVar4;
          plVar5 = FUN_180011a60(param_4,&local_res8);
          uVar1 = plVar5[1];
          plVar5 = FUN_180011a60(param_4,(ulonglong *)&local_48);
          if (uVar1 < (ulonglong)plVar5[1]) {
            memmove((void *)((longlong)puVar7 + (8 - ((longlong)puVar7 - (longlong)param_1))),
                    param_1,(longlong)puVar7 - (longlong)param_1);
            *param_1 = uVar4;
          }
          else {
            local_68 = puVar7[-1];
            local_res8 = uVar4;
            plVar5 = FUN_180011a60(param_4,&local_res8);
            uVar1 = plVar5[1];
            plVar5 = FUN_180011a60(param_4,&local_68);
            puVar6 = puVar7;
            puVar8 = puVar7;
            if (uVar1 < (ulonglong)plVar5[1]) {
              do {
                puVar6 = puVar8 + -1;
                *puVar8 = *puVar6;
                local_68 = puVar8[-2];
                local_res8 = uVar4;
                plVar5 = FUN_180011a60(param_4,&local_res8);
                uVar1 = plVar5[1];
                plVar5 = FUN_180011a60(param_4,&local_68);
                puVar8 = puVar6;
              } while (uVar1 < (ulonglong)plVar5[1]);
            }
            *puVar6 = uVar4;
            puVar6 = local_res10;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar6);
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_1800084d0((ulonglong *)&local_48,param_1,puVar6,param_4);
    puVar8 = local_40;
    puVar7 = local_48;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_48 - (longlong)param_1 & 0xfffffffffffffff8U) <
        (longlong)((longlong)puVar6 - (longlong)local_40 & 0xfffffffffffffff8U)) {
      FUN_180009060(param_1,local_48,param_3,param_4);
      param_1 = puVar8;
      puVar7 = puVar6;
    }
    else {
      FUN_180009060(local_40,puVar6,param_3,param_4);
      local_res10 = puVar7;
    }
    uVar4 = (longlong)puVar7 - (longlong)param_1;
    puVar6 = puVar7;
    param_2 = local_res10;
  }
  local_res8 = (longlong)puVar6 - (longlong)param_1 >> 3;
  puVar7 = (ulonglong *)((longlong)puVar6 - (longlong)param_1 >> 4);
  local_res10 = puVar6;
  if (0 < (longlong)puVar7) {
    puVar6 = (ulonglong *)(local_res8 - 1);
    puVar8 = (ulonglong *)((longlong)puVar6 >> 1);
    local_res10 = param_2;
    local_50 = puVar6;
    local_48 = puVar8;
    do {
      lVar2 = (longlong)puVar7 + -1;
      puVar7 = (ulonglong *)((longlong)puVar7 + -1);
      uVar4 = param_1[lVar2];
      puVar3 = puVar7;
      while (local_68 = uVar4, (longlong)puVar3 < (longlong)puVar8) {
        local_58 = param_1[(longlong)puVar3 * 2 + 1];
        local_60 = param_1[(longlong)puVar3 * 2 + 2];
        plVar5 = FUN_180011a60(param_4,&local_60);
        uVar4 = plVar5[1];
        plVar5 = FUN_180011a60(param_4,&local_58);
        puVar6 = (ulonglong *)
                 ((2 - (ulonglong)(uVar4 < (ulonglong)plVar5[1])) + (longlong)puVar3 * 2);
        param_1[(longlong)puVar3] = param_1[(longlong)puVar6];
        uVar4 = local_68;
        puVar3 = puVar6;
        puVar6 = local_50;
      }
      if ((puVar3 == puVar8) && ((local_res8 & 1) == 0)) {
        param_1[(longlong)puVar3] = param_1[local_res8 - 1];
        puVar3 = puVar6;
      }
      while ((longlong)puVar7 < (longlong)puVar3) {
        puVar6 = (ulonglong *)((longlong)puVar3 + -1 >> 1);
        local_58 = param_1[(longlong)puVar6];
        local_60 = uVar4;
        plVar5 = FUN_180011a60(param_4,&local_58);
        uVar1 = plVar5[1];
        plVar5 = FUN_180011a60(param_4,&local_60);
        puVar8 = local_48;
        if ((ulonglong)plVar5[1] <= uVar1) break;
        param_1[(longlong)puVar3] = param_1[(longlong)puVar6];
        puVar3 = puVar6;
      }
      param_1[(longlong)puVar3] = local_68;
      puVar6 = (ulonglong *)(local_res8 - 1);
    } while (0 < (longlong)puVar7);
  }
  if ((longlong)local_res8 < 2) {
    return;
  }
  puVar6 = local_res10 + -1;
  do {
    local_res10 = (ulonglong *)*puVar6;
    *puVar6 = *param_1;
    FUN_1800088c0((longlong)param_1,0,(longlong)puVar6 - (longlong)param_1 >> 3,
                  (ulonglong *)&local_res10,param_4);
    puVar6 = puVar6 + -1;
  } while (0xf < (longlong)((8 - (longlong)param_1) + (longlong)puVar6 & 0xfffffffffffffff8U));
  return;
}



/* RVA 0x9410; VA 180009410; FUN_180009410 */

uint FUN_180009410(void *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong _Size;
  
  _Size = param_2;
  if (param_4 < param_2) {
    _Size = param_4;
  }
  uVar1 = memcmp(param_1,param_3,_Size);
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_4 < param_2);
  }
  return uVar1;
}



/* RVA 0x9470; VA 180009470; FUN_180009470 */

bool FUN_180009470(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 != param_4) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_3,param_2);
  return iVar1 == 0;
}



/* RVA 0x94b0; VA 1800094b0; FUN_1800094b0 */

longlong FUN_1800094b0(longlong param_1,ulonglong param_2,ulonglong param_3,byte param_4)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  
  if (param_3 < param_2) {
    pauVar1 = thunk_FUN_18004f020((undefined1 (*) [32])(param_1 + param_3),
                                  (undefined1 (*) [32])(param_1 + param_2),param_4);
    lVar2 = -1;
    if (pauVar1 != (undefined1 (*) [32])(param_1 + param_2)) {
      lVar2 = (longlong)pauVar1 - param_1;
    }
    return lVar2;
  }
  return -1;
}



/* RVA 0x9510; VA 180009510; FUN_180009510 */

undefined8 * FUN_180009510(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar5 = (longlong *)*param_1;
  local_28 = (longlong *)plVar5[1];
  uStack_20 = 0;
  plVar4 = plVar5;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    plVar6 = plVar5;
    do {
      local_28 = plVar2;
      bVar1 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar3 = local_28;
      plVar4 = local_28;
      if (!bVar1) {
        plVar3 = local_28 + 2;
        plVar4 = plVar6;
      }
      uStack_20 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar4 + 0x1c) <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x28);
    *(int *)((longlong)plVar4 + 0x1c) = *param_3;
    *(undefined4 *)(plVar4 + 4) = 0;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180015ac0(param_1,(longlong *)&local_38,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x9620; VA 180009620; FUN_180009620 */

undefined8 * FUN_180009620(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar6 = (longlong *)*param_1;
  local_38 = (longlong *)plVar6[1];
  uStack_30 = 0;
  plVar4 = plVar6;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar2 = local_38;
    plVar7 = plVar6;
    do {
      local_38 = plVar2;
      bVar1 = *param_3 <= (int)local_38[4];
      plVar3 = local_38;
      plVar4 = local_38;
      if (!bVar1) {
        plVar3 = local_38 + 2;
        plVar4 = plVar7;
      }
      uStack_30 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar7 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') && ((int)plVar4[4] <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x38);
    *(int *)(plVar4 + 4) = *param_3;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plStack_40 = plVar4;
    lVar5 = FUN_180064554(0x20);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    plVar4[5] = lVar5;
    *plVar4 = (longlong)plVar6;
    plVar4[1] = (longlong)plVar6;
    plVar4[2] = (longlong)plVar6;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar6 = FUN_180015d20(param_1,(longlong *)&local_48,plVar4);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x9760; VA 180009760; FUN_180009760 */

undefined8 * FUN_180009760(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar5 = (longlong *)*param_1;
  local_28 = (longlong *)plVar5[1];
  uStack_20 = 0;
  plVar4 = plVar5;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    plVar6 = plVar5;
    do {
      local_28 = plVar2;
      bVar1 = *param_3 <= (int)local_28[4];
      plVar3 = local_28;
      plVar4 = local_28;
      if (!bVar1) {
        plVar3 = local_28 + 2;
        plVar4 = plVar6;
      }
      uStack_20 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') && ((int)plVar4[4] <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x40);
    *(int *)(plVar4 + 4) = *param_3;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *plVar4 = (longlong)plVar5;
    plVar4[1] = (longlong)plVar5;
    plVar4[2] = (longlong)plVar5;
    *(undefined2 *)(plVar4 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180015f80(param_1,(longlong *)&local_38,plVar4);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x9870; VA 180009870; FUN_180009870 */

undefined8 * FUN_180009870(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar5 = (longlong *)*param_1;
  local_38 = (longlong *)plVar5[1];
  uStack_30 = 0;
  plVar3 = plVar5;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar1 = local_38;
    plVar6 = plVar5;
    do {
      local_38 = plVar1;
      plVar2 = local_38;
      plVar3 = local_38;
      if (*param_3 > (ulonglong)local_38[4]) {
        plVar2 = local_38 + 2;
        plVar3 = plVar6;
      }
      uStack_30 = (uint)(*param_3 <= (ulonglong)local_38[4]);
      plVar1 = (longlong *)*plVar2;
      plVar6 = plVar3;
    } while (*(char *)(*plVar2 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar3 + 0x19) == '\0') && ((ulonglong)plVar3[4] <= *param_3)) {
    *param_2 = plVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar3 = (longlong *)FUN_180064554(0x38);
    plVar3[4] = *param_3;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plStack_40 = plVar3;
    lVar4 = FUN_180064554(0x20);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    plVar3[5] = lVar4;
    *plVar3 = (longlong)plVar5;
    plVar3[1] = (longlong)plVar5;
    plVar3[2] = (longlong)plVar5;
    *(undefined2 *)(plVar3 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar5 = FUN_180016900(param_1,(longlong *)&local_48,plVar3);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x99b0; VA 1800099b0; FUN_1800099b0 */

longlong * FUN_1800099b0(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong local_18;
  
  FUN_180006de0(param_1,(longlong *)&local_28,param_3);
  if ((*(char *)(local_18 + 0x19) == '\0') &&
     (uVar2 = FUN_180012e00(param_1,param_3,(int *)(local_18 + 0x20)), (char)uVar2 == '\0')) {
    *param_2 = local_18;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_1[1] != 0x333333333333333) {
    lVar1 = *param_1;
    plStack_30 = (longlong *)0x0;
    local_38 = param_1;
    plVar3 = (longlong *)FUN_180064554(0x50);
    *(int *)(plVar3 + 4) = *param_3;
    plStack_30 = plVar3;
    FUN_18000ebd0(plVar3 + 5,(undefined8 *)(param_3 + 2));
    *(undefined4 *)(plVar3 + 9) = 0;
    *plVar3 = lVar1;
    plVar3[1] = lVar1;
    plVar3[2] = lVar1;
    *(undefined2 *)(plVar3 + 3) = 0;
    local_38 = local_28;
    plStack_30 = (longlong *)uStack_20;
    plVar3 = FUN_1800161e0(param_1,(longlong *)&local_38,plVar3);
    *param_2 = (longlong)plVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x9ab0; VA 180009ab0; FUN_180009ab0 */

undefined8 * FUN_180009ab0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar6 = (longlong *)*param_1;
  local_38 = (longlong *)plVar6[1];
  uStack_30 = 0;
  plVar4 = plVar6;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar2 = local_38;
    plVar7 = plVar6;
    do {
      local_38 = plVar2;
      bVar1 = *param_3 <= (int)local_38[4];
      plVar3 = local_38;
      plVar4 = local_38;
      if (!bVar1) {
        plVar3 = local_38 + 2;
        plVar4 = plVar7;
      }
      uStack_30 = (uint)bVar1;
      plVar2 = (longlong *)*plVar3;
      plVar7 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') && ((int)plVar4[4] <= *param_3)) {
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x38);
    *(int *)(plVar4 + 4) = *param_3;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plStack_40 = plVar4;
    lVar5 = FUN_180064554(0x20);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    plVar4[5] = lVar5;
    *plVar4 = (longlong)plVar6;
    plVar4[1] = (longlong)plVar6;
    plVar4[2] = (longlong)plVar6;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar6 = FUN_180016440(param_1,(longlong *)&local_48,plVar4);
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* RVA 0x9bf0; VA 180009bf0; FUN_180009bf0 */

longlong * FUN_180009bf0(longlong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong local_18;
  
  FUN_180006de0(param_1,(longlong *)&local_28,param_3);
  if ((*(char *)(local_18 + 0x19) == '\0') &&
     (uVar3 = FUN_180012e00(param_1,param_3,(int *)(local_18 + 0x20)), (char)uVar3 == '\0')) {
    *param_2 = local_18;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_1[1] != 0x333333333333333) {
    lVar1 = *param_1;
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x50);
    *(int *)(plVar4 + 4) = *param_3;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    lVar2 = *(longlong *)(param_3 + 4);
    plVar4[5] = *(longlong *)(param_3 + 2);
    plVar4[6] = lVar2;
    lVar2 = *(longlong *)(param_3 + 8);
    plVar4[7] = *(longlong *)(param_3 + 6);
    plVar4[8] = lVar2;
    *(undefined1 *)(param_3 + 2) = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0xf;
    param_3[9] = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    *plVar4 = lVar1;
    plVar4[1] = lVar1;
    plVar4[2] = lVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    local_38 = local_28;
    uStack_30 = uStack_20;
    plVar4 = FUN_1800161e0(param_1,(longlong *)&local_38,plVar4);
    *param_2 = (longlong)plVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x9ea0; VA 180009ea0; FUN_180009ea0 */

void * FUN_180009ea0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (void *)((longlong)param_3 + (param_2 - (longlong)param_1 >> 3) * 8);
}



/* RVA 0x9ee0; VA 180009ee0; FUN_180009ee0 */

undefined8 *
FUN_180009ee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    plVar1 = param_3 + 1;
    *plVar1 = 0;
    param_3[2] = 0;
    lVar7 = FUN_180064554(0x20);
    *(longlong *)lVar7 = lVar7;
    *(longlong *)(lVar7 + 8) = lVar7;
    *(longlong *)(lVar7 + 0x10) = lVar7;
    *(undefined2 *)(lVar7 + 0x18) = 0x101;
    *plVar1 = lVar7;
    puVar8 = FUN_180004470(plVar1,*(undefined8 **)(param_1[1] + 8),lVar7,param_4);
    *(undefined8 **)(*plVar1 + 8) = puVar8;
    param_3[2] = param_1[2];
    plVar3 = (longlong *)*plVar1;
    plVar4 = (longlong *)plVar3[1];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar4 + 0x19);
      plVar6 = (longlong *)*plVar4;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar6 + 0x19);
        plVar4 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
      *plVar3 = (longlong)plVar4;
      lVar7 = *(longlong *)(*plVar1 + 8);
      lVar5 = *(longlong *)(lVar7 + 0x10);
      cVar2 = *(char *)(lVar5 + 0x19);
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
        lVar7 = lVar5;
        lVar5 = *(longlong *)(lVar5 + 0x10);
      }
      *(longlong *)(*plVar1 + 0x10) = lVar7;
    }
    else {
      *plVar3 = (longlong)plVar3;
      *(longlong *)(*plVar1 + 0x10) = *plVar1;
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}



/* RVA 0xa020; VA 18000a020; FUN_18000a020 */

PluginCommand * FUN_18000a020(PluginCommand *param_1,PluginCommand *param_2,PluginCommand *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    DFHack::PluginCommand::PluginCommand(param_3,param_1);
    param_3 = param_3 + 0x78;
  }
  return param_3;
}



/* RVA 0xa090; VA 18000a090; FUN_18000a090 */

void * FUN_18000a090(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (void *)((longlong)param_3 + (param_2 - (longlong)param_1 >> 2) * 4);
}



/* RVA 0xa0d0; VA 18000a0d0; FUN_18000a0d0 */

void * FUN_18000a0d0(void *param_1,longlong param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (longlong)param_1);
  return (void *)((longlong)param_3 + (param_2 - (longlong)param_1 >> 3) * 8);
}



/* RVA 0xa110; VA 18000a110; FUN_18000a110 */

longlong * FUN_18000a110(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    plVar3 = param_1 + 1;
    do {
      *param_3 = plVar3[-1];
      param_3[1] = 0;
      param_3[2] = 0;
      lVar2 = FUN_180064554(0x20);
      *(longlong *)lVar2 = lVar2;
      *(longlong *)(lVar2 + 8) = lVar2;
      *(longlong *)(lVar2 + 0x10) = lVar2;
      *(undefined2 *)(lVar2 + 0x18) = 0x101;
      param_3[1] = lVar2;
      param_3[1] = *plVar3;
      *plVar3 = lVar2;
      lVar2 = param_3[2];
      param_3[2] = plVar3[1];
      plVar3[1] = lVar2;
      param_3 = param_3 + 3;
      plVar1 = plVar3 + 2;
      plVar3 = plVar3 + 3;
    } while (plVar1 != param_2);
  }
  return param_3;
}



/* RVA 0xa1d0; VA 18000a1d0; FUN_18000a1d0 */

PluginCommand * FUN_18000a1d0(PluginCommand *param_1,PluginCommand *param_2,PluginCommand *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    DFHack::PluginCommand::PluginCommand(param_3,param_1);
    param_3 = param_3 + 0x78;
  }
  return param_3;
}



/* RVA 0xa240; VA 18000a240; FUN_18000a240 */

void FUN_18000a240(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar4 = (longlong)param_3 - (longlong)param_1;
    puVar3 = param_1 + 2;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
      puVar1 = puVar3 + 2;
      *(undefined8 *)((longlong)puVar3 + lVar4 + 8) = 0;
      uVar2 = puVar3[-1];
      *param_3 = puVar3[-2];
      param_3[1] = uVar2;
      uVar2 = puVar3[1];
      param_3[2] = *puVar3;
      param_3[3] = uVar2;
      *(undefined1 *)(puVar3 + -2) = 0;
      param_3 = param_3 + 4;
      *puVar3 = 0;
      puVar3[1] = 0xf;
      puVar3 = puVar3 + 4;
    } while (puVar1 != param_2);
  }
  return;
}



/* RVA 0xa5f0; VA 18000a5f0; FUN_18000a5f0 */

void FUN_18000a5f0(lua_State *param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 1,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(param_4,uVar3 & 0xffffffff,uVar2 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000a6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xa6b0; VA 18000a6b0; FUN_18000a6b0 */

void FUN_18000a6b0(lua_State *param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  int local_res18 [4];
  
  local_res18[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(param_4,uVar2 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xa720; VA 18000a720; FUN_18000a720 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a720(lua_State *param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_18007d140 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  local_88._0_4_ = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 2,(int *)&local_88);
  if ((int)local_88 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
  }
  uStack_50 = 0;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = 0;
  local_80 = 1;
  pcVar3 = lua_tolstring(param_1,param_2 + 1,&local_88);
  if (pcVar3 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_58,pcVar3,CONCAT44(local_88._4_4_,(int)local_88));
  local_88._0_4_ = 0;
  uVar4 = lua_tointegerx(param_1,param_2,(int *)&local_88);
  if ((int)local_88 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = local_58 & 0xffffffffffffff00;
  (*(code *)param_3)(param_4,uVar4 & 0xffffffff,&local_78,uVar2 & 0xffffffff);
  lua_pushnil(param_1);
  return;
}



/* RVA 0xa890; VA 18000a890; FUN_18000a890 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000a890(lua_State *param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = 0;
  local_70 = 1;
  pcVar2 = lua_tolstring(param_1,param_2 + 1,&local_78);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_48,pcVar2,CONCAT44(local_78._4_4_,(int)local_78));
  local_78._0_4_ = 0;
  uVar3 = lua_tointegerx(param_1,param_2,(int *)&local_78);
  if ((int)local_78 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = local_48 & 0xffffffffffffff00;
  (*(code *)param_3)(param_4,uVar3 & 0xffffffff,&local_68);
  lua_pushnil(param_1);
  return;
}



/* RVA 0xa9c0; VA 18000a9c0; FUN_18000a9c0 */

void FUN_18000a9c0(lua_State *param_1,int param_2,undefined *param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  ulonglong uVar4;
  bool bVar5;
  int local_res10 [2];
  
  iVar2 = lua_type(param_1,param_2 + 1);
  if (iVar2 != 1) {
    iVar2 = lua_type(param_1,param_2 + 1);
    if (iVar2 != 0) {
      iVar2 = lua_isnumber(param_1,param_2 + 1);
      if (iVar2 == 0) {
        DFHack::LuaWrapper::field_error(param_1,-0xf462b,"boolean or number expected","write");
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Var3 = lua_tointegerx(param_1,param_2 + 1,(int *)0x0);
      bVar5 = _Var3 == 0;
      goto LAB_18000aa46;
    }
  }
  iVar2 = lua_toboolean(param_1,param_2 + 1);
  bVar5 = iVar2 == 0;
LAB_18000aa46:
  local_res10[0] = 0;
  uVar4 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(param_4,uVar4 & 0xffffffff,!bVar5);
                    /* WARNING: Could not recover jumptable at 0x00018000aaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xaab0; VA 18000aab0; FUN_18000aab0 */

void FUN_18000aab0(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_res18 [4];
  
  local_res18[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (*(code *)param_3)(uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000ab0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushboolean(param_1,uVar2 & 0xff);
  return;
}



/* RVA 0xab20; VA 18000ab20; FUN_18000ab20 */

void FUN_18000ab20(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 1,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_4)(param_5,uVar3 & 0xffffffff,uVar2 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000abd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xabe0; VA 18000abe0; FUN_18000abe0 */

void FUN_18000abe0(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  local_18[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2,local_18);
  if (local_18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_4)(param_5,uVar2 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000ac3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xac50; VA 18000ac50; FUN_18000ac50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000ac50(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_78._0_4_ = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 2,(int *)&local_78);
  if ((int)local_78 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
  }
  uStack_40 = 0;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = 0;
  local_70 = 1;
  pcVar3 = lua_tolstring(param_1,param_2 + 1,&local_78);
  if (pcVar3 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_48,pcVar3,CONCAT44(local_78._4_4_,(int)local_78));
  local_78._0_4_ = 0;
  uVar4 = lua_tointegerx(param_1,param_2,(int *)&local_78);
  if ((int)local_78 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = local_48 & 0xffffffffffffff00;
  (*(code *)param_4)(param_5,uVar4 & 0xffffffff,&local_68,uVar2 & 0xffffffff);
  lua_pushnil(param_1);
  return;
}



/* RVA 0xadd0; VA 18000add0; FUN_18000add0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000add0(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = 0;
  local_70 = 1;
  pcVar2 = lua_tolstring(param_1,param_2 + 1,&local_78);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_48,pcVar2,CONCAT44(local_78._4_4_,(int)local_78));
  local_78._0_4_ = 0;
  uVar3 = lua_tointegerx(param_1,param_2,(int *)&local_78);
  if ((int)local_78 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_38 = _DAT_180069000;
  uStack_30 = _UNK_180069008;
  local_48 = local_48 & 0xffffffffffffff00;
  (*(code *)param_4)(param_5,uVar3 & 0xffffffff,&local_68);
  lua_pushnil(param_1);
  return;
}



/* RVA 0xaf00; VA 18000af00; FUN_18000af00 */

void FUN_18000af00(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  ulonglong uVar4;
  bool bVar5;
  int local_res10 [2];
  
  iVar2 = lua_type(param_1,param_2 + 1);
  if (iVar2 != 1) {
    iVar2 = lua_type(param_1,param_2 + 1);
    if (iVar2 != 0) {
      iVar2 = lua_isnumber(param_1,param_2 + 1);
      if (iVar2 == 0) {
        DFHack::LuaWrapper::field_error(param_1,-0xf462b,"boolean or number expected","write");
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Var3 = lua_tointegerx(param_1,param_2 + 1,(int *)0x0);
      bVar5 = _Var3 == 0;
      goto LAB_18000af85;
    }
  }
  iVar2 = lua_toboolean(param_1,param_2 + 1);
  bVar5 = iVar2 == 0;
LAB_18000af85:
  local_res10[0] = 0;
  uVar4 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_4)(param_5,uVar4 & 0xffffffff,!bVar5);
                    /* WARNING: Could not recover jumptable at 0x00018000afe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushnil(param_1);
  return;
}



/* RVA 0xaff0; VA 18000aff0; FUN_18000aff0 */

void FUN_18000aff0(lua_State *param_1,int param_2,undefined8 param_3,undefined *param_4)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_18 [4];
  
  local_18[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_18);
  if (local_18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (*(code *)param_4)(uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018000b04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushboolean(param_1,uVar2 & 0xff);
  return;
}



/* RVA 0xb0d0; VA 18000b0d0; FUN_18000b0d0 */

void FUN_18000b0d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_2 = *(undefined4 *)*param_4;
  *(longlong *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_2 + 2) = lVar1;
  return;
}



/* RVA 0xb170; VA 18000b170; FUN_18000b170 */

void FUN_18000b170(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_4;
  *param_2 = *puVar1;
  FUN_18000ebd0((undefined8 *)(param_2 + 2),(undefined8 *)(puVar1 + 2));
  param_2[10] = 0;
  return;
}



/* RVA 0xb1a0; VA 18000b1a0; FUN_18000b1a0 */

void FUN_18000b1a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_2 = *(undefined4 *)*param_4;
  *(longlong *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_2 + 2) = lVar1;
  return;
}



/* RVA 0xb1f0; VA 18000b1f0; FUN_18000b1f0 */

void FUN_18000b1f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  
  *param_2 = *param_3;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_2[1] = lVar1;
  param_2[1] = *param_4;
  *param_4 = lVar1;
  lVar1 = param_2[2];
  param_2[2] = param_4[1];
  param_4[1] = lVar1;
  return;
}



/* RVA 0xb260; VA 18000b260; FUN_18000b260 */

void FUN_18000b260(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  *param_2 = *param_3;
  plVar1 = param_2 + 1;
  *plVar1 = 0;
  param_2[2] = 0;
  lVar7 = FUN_180064554(0x20);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  *(longlong *)(lVar7 + 0x10) = lVar7;
  *(undefined2 *)(lVar7 + 0x18) = 0x101;
  *plVar1 = lVar7;
  puVar8 = FUN_180004470(plVar1,*(undefined8 **)(param_3[1] + 8),lVar7,param_4);
  *(undefined8 **)(*plVar1 + 8) = puVar8;
  param_2[2] = param_3[2];
  plVar3 = (longlong *)*plVar1;
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar2 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar3 = (longlong)plVar4;
    lVar7 = *(longlong *)(*plVar1 + 8);
    lVar5 = *(longlong *)(lVar7 + 0x10);
    cVar2 = *(char *)(lVar5 + 0x19);
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar7 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(*plVar1 + 0x10) = lVar7;
  }
  else {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*plVar1 + 0x10) = *plVar1;
  }
  return;
}



/* RVA 0xb330; VA 18000b330; FUN_18000b330 */

void FUN_18000b330(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_2 = *param_3;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  param_2[1] = lVar2;
  param_2[1] = param_3[1];
  param_3[1] = lVar2;
  uVar1 = param_2[2];
  param_2[2] = param_3[2];
  param_3[2] = uVar1;
  return;
}



/* RVA 0xb3a0; VA 18000b3a0; FUN_18000b3a0 */

void FUN_18000b3a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)*param_4;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_2[1] = lVar1;
  return;
}



/* RVA 0xb620; VA 18000b620; FUN_18000b620 */

undefined4 * FUN_18000b620(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0xb6d0; VA 18000b6d0; FUN_18000b6d0 */

undefined4 * FUN_18000b6d0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_3;
  *param_1 = *puVar1;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),(undefined8 *)(puVar1 + 2));
  param_1[10] = 0;
  return param_1;
}



/* RVA 0xb700; VA 18000b700; FUN_18000b700 */

undefined4 * FUN_18000b700(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined4 *)*param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)(param_1 + 2) = lVar1;
  return param_1;
}



/* RVA 0xb760; VA 18000b760; FUN_18000b760 */

undefined8 * FUN_18000b760(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  param_1[1] = *param_3;
  *param_3 = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_3[1];
  param_3[1] = lVar1;
  return param_1;
}



/* RVA 0xb7d0; VA 18000b7d0; FUN_18000b7d0 */

undefined8 *
FUN_18000b7d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  param_1[2] = 0;
  lVar7 = FUN_180064554(0x20);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  *(longlong *)(lVar7 + 0x10) = lVar7;
  *(undefined2 *)(lVar7 + 0x18) = 0x101;
  *plVar1 = lVar7;
  puVar8 = FUN_180004470(plVar1,*(undefined8 **)(param_2[1] + 8),lVar7,param_4);
  *(undefined8 **)(*plVar1 + 8) = puVar8;
  param_1[2] = param_2[2];
  plVar3 = (longlong *)*plVar1;
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar2 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar3 = (longlong)plVar4;
    lVar7 = *(longlong *)(*plVar1 + 8);
    lVar5 = *(longlong *)(lVar7 + 0x10);
    cVar2 = *(char *)(lVar5 + 0x19);
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar7 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(*plVar1 + 0x10) = lVar7;
  }
  else {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*plVar1 + 0x10) = *plVar1;
  }
  return param_1;
}



/* RVA 0xb8c0; VA 18000b8c0; FUN_18000b8c0 */

undefined8 * FUN_18000b8c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  param_1[1] = lVar2;
  param_1[1] = param_2[1];
  param_2[1] = lVar2;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return param_1;
}



/* RVA 0xb930; VA 18000b930; FUN_18000b930 */

undefined8 * FUN_18000b930(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *(undefined8 *)*param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  return param_1;
}



/* RVA 0xba60; VA 18000ba60; FUN_18000ba60 */

void FUN_18000ba60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_2 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0xbae0; VA 18000bae0; FUN_18000bae0 */

void FUN_18000bae0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_2 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_2 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0xbbe0; VA 18000bbe0; FUN_18000bbe0 */

void FUN_18000bbe0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0xbc60; VA 18000bc60; FUN_18000bc60 */

void FUN_18000bc60(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0xbde0; VA 18000bde0; FUN_18000bde0 */

void FUN_18000bde0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)param_1[2]) {
    *plVar1 = *param_2;
    plVar1[1] = 0;
    plVar1[2] = 0;
    lVar2 = FUN_180064554(0x20);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    plVar1[1] = lVar2;
    plVar1[1] = *param_3;
    *param_3 = lVar2;
    lVar2 = plVar1[2];
    plVar1[2] = param_3[1];
    param_3[1] = lVar2;
    param_1[1] = param_1[1] + 0x18;
    return;
  }
  FUN_1800052f0(param_1,plVar1,param_2,param_3);
  return;
}



/* RVA 0xc000; VA 18000c000; FUN_18000c000 */

undefined8 *
FUN_18000c000(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  undefined8 *_Buf1;
  longlong *_Buf2;
  
  if (param_2 != param_3) {
    uVar1 = param_4[3];
    sVar2 = param_4[2];
    do {
      _Buf1 = (undefined8 *)*param_2;
      _Buf2 = param_4;
      if (0xf < uVar1) {
        _Buf2 = (longlong *)*param_4;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
    } while (((_Size != sVar2) || ((_Size != 0 && (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 != 0))))
            && (param_2 = param_2 + 1, param_2 != param_3));
  }
  *param_1 = param_2;
  FUN_180017da0(param_4);
  return param_1;
}



/* RVA 0xc090; VA 18000c090; FUN_18000c090 */

undefined8 *
FUN_18000c090(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong local_res8;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return param_1;
  }
  plVar1 = (longlong *)*param_4;
  piVar2 = (int *)param_4[1];
  do {
    local_res8 = *param_2;
    plVar3 = FUN_180011a60(plVar1,&local_res8);
    plVar3 = (longlong *)*plVar3;
    plVar4 = (longlong *)plVar3[1];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      plVar5 = plVar3;
      do {
        plVar3 = plVar4;
        if (*(int *)((longlong)plVar4 + 0x1c) < *piVar2) {
          plVar4 = plVar4 + 2;
          plVar3 = plVar5;
        }
        plVar4 = (longlong *)*plVar4;
        plVar5 = plVar3;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
    }
  } while (((*(char *)((longlong)plVar3 + 0x19) != '\0') ||
           (*piVar2 < *(int *)((longlong)plVar3 + 0x1c))) &&
          (param_2 = param_2 + 1, param_2 != param_3));
  *param_1 = param_2;
  return param_1;
}



/* RVA 0xc140; VA 18000c140; FUN_18000c140 */

basic_ostream<char,std::char_traits<char>_> *
FUN_18000c140(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}



/* RVA 0xc160; VA 18000c160; FUN_18000c160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18000c160(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 auStack_98 [48];
  ulonglong local_68;
  undefined4 *local_60;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48 [4];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStack_98;
  local_48[0] = *param_3;
  local_38 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    local_38 = (undefined8 *)*param_4;
  }
  local_30 = param_4[2];
  local_28 = param_5;
  if (0xf < (ulonglong)param_5[3]) {
    local_28 = (undefined8 *)*param_5;
  }
  local_20 = param_5[2];
  local_58 = *param_2;
  lStack_50 = param_2[1];
  local_60 = local_48;
  local_68 = 0xdd1;
  FUN_180041d90(param_1,&local_58,&local_68);
  return param_1;
}



/* RVA 0xc220; VA 18000c220; FUN_18000c220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18000c220(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [48];
  ulonglong local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStack_78;
  local_40 = local_28;
  local_38 = *param_2;
  lStack_30 = param_2[1];
  local_48 = 0xc;
  local_28[0] = *param_3;
  FUN_180041d90(param_1,&local_38,&local_48);
  return param_1;
}



/* RVA 0xc290; VA 18000c290; FUN_18000c290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18000c290(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined1 auStack_88 [48];
  ulonglong local_58;
  undefined4 *local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38 [4];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStack_88;
  local_38[0] = *param_3;
  local_28 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    local_28 = (undefined8 *)*param_4;
  }
  local_20 = param_4[2];
  local_48 = *param_2;
  lStack_40 = param_2[1];
  local_50 = local_38;
  local_58 = 0xd1;
  FUN_180041d90(param_1,&local_48,&local_58);
  return param_1;
}



/* RVA 0xc320; VA 18000c320; FUN_18000c320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18000c320(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [48];
  ulonglong local_48;
  undefined8 **local_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    local_28 = (undefined8 *)*param_3;
  }
  local_20 = param_3[2];
  local_38 = *param_2;
  lStack_30 = param_2[1];
  local_40 = &local_28;
  local_48 = 0xd;
  FUN_180041d90(param_1,&local_38,&local_48);
  return param_1;
}



/* RVA 0xc970; VA 18000c970; FUN_18000c970 */

void FUN_18000c970(lua_State *param_1,int param_2)

{
  code *pcVar1;
  int local_res18 [4];
  
  local_res18[0] = 0;
  lua_tointegerx(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}



/* RVA 0xc9c0; VA 18000c9c0; FUN_18000c9c0 */

longlong * FUN_18000c9c0(longlong *param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  size_t local_res20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  pcVar2 = lua_tolstring(param_2,param_3,&local_res20);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    plVar3 = (longlong *)(*pcVar1)();
    return plVar3;
  }
  FUN_180018510(param_1,pcVar2,local_res20);
  return param_1;
}



/* RVA 0xca50; VA 18000ca50; FUN_18000ca50 */

bool FUN_18000ca50(lua_State *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  __int64 _Var4;
  
  iVar3 = lua_type(param_1,param_2);
  if (iVar3 != 1) {
    iVar3 = lua_type(param_1,param_2);
    if (iVar3 != 0) {
      iVar3 = lua_isnumber(param_1,param_2);
      if (iVar3 != 0) {
        _Var4 = lua_tointegerx(param_1,param_2,(int *)0x0);
        return _Var4 != 0;
      }
      DFHack::LuaWrapper::field_error(param_1,-0xf462b,"boolean or number expected","write");
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
  }
  iVar3 = lua_toboolean(param_1,param_2);
  return iVar3 != 0;
}



/* RVA 0xcaf0; VA 18000caf0; FUN_18000caf0 */

undefined8 * FUN_18000caf0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar6 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar7 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar5 = local_28;
      plVar6 = local_28;
      if (!bVar2) {
        plVar5 = local_28 + 2;
        plVar6 = plVar7;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar5;
      plVar7 = plVar6;
    } while (*(char *)(*plVar5 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar6 + 0x1c) <= *param_3)) {
    uVar4 = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar6 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar6 + 0x1c) = *param_3;
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar1;
    plVar6[2] = (longlong)plVar1;
    *(undefined2 *)(plVar6 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar6 = FUN_180015860(param_1,(longlong *)&local_38,plVar6);
    uVar4 = 1;
  }
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar4;
  return param_2;
}



/* RVA 0xcc10; VA 18000cc10; FUN_18000cc10 */

undefined8 * FUN_18000cc10(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar6 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar7 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar5 = local_28;
      plVar6 = local_28;
      if (!bVar2) {
        plVar5 = local_28 + 2;
        plVar6 = plVar7;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar5;
      plVar7 = plVar6;
    } while (*(char *)(*plVar5 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar6 + 0x1c) <= *param_3)) {
    uVar4 = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar6 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar6 + 0x1c) = *param_3;
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar1;
    plVar6[2] = (longlong)plVar1;
    *(undefined2 *)(plVar6 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar6 = FUN_180016b60(param_1,(longlong *)&local_38,plVar6);
    uVar4 = 1;
  }
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar4;
  return param_2;
}



/* RVA 0xcd30; VA 18000cd30; FUN_18000cd30 */

undefined8 * FUN_18000cd30(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar6 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar7 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_3 <= *(int *)((longlong)local_28 + 0x1c);
      plVar5 = local_28;
      plVar6 = local_28;
      if (!bVar2) {
        plVar5 = local_28 + 2;
        plVar6 = plVar7;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar5;
      plVar7 = plVar6;
    } while (*(char *)(*plVar5 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar6 + 0x1c) <= *param_3)) {
    uVar4 = 0;
  }
  else {
    if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar6 = (longlong *)FUN_180064554(0x20);
    *(int *)((longlong)plVar6 + 0x1c) = *param_3;
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar1;
    plVar6[2] = (longlong)plVar1;
    *(undefined2 *)(plVar6 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar6 = FUN_180016b60(param_1,(longlong *)&local_38,plVar6);
    uVar4 = 1;
  }
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar4;
  return param_2;
}



/* RVA 0xce50; VA 18000ce50; FUN_18000ce50 */

void FUN_18000ce50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_68;
  longlong lStack_60;
  longlong local_48;
  longlong local_40 [3];
  
  if (param_2 != param_3) {
    plVar2 = (longlong *)*param_1;
    do {
      plVar5 = FUN_180006850(param_1,local_40,plVar2,(int *)((longlong)param_2 + 0x1c));
      local_68 = *plVar5;
      lStack_60 = plVar5[1];
      local_48 = plVar5[2];
      if ((char)local_48 == '\0') {
        if (param_1[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        lVar3 = *param_1;
        plVar5 = (longlong *)FUN_180064554(0x20);
        *(undefined4 *)((longlong)plVar5 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
        *plVar5 = lVar3;
        plVar5[1] = lVar3;
        plVar5[2] = lVar3;
        *(undefined2 *)(plVar5 + 3) = 0;
        FUN_180015860(param_1,&local_68,plVar5);
      }
      plVar5 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        param_2 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          param_2 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar4 = (longlong *)param_2[1];
        plVar5 = param_2;
        while ((param_2 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          plVar4 = (longlong *)param_2[1];
          plVar5 = param_2;
        }
      }
    } while (param_2 != param_3);
  }
  return;
}



/* RVA 0xcfd0; VA 18000cfd0; FUN_18000cfd0 */

void FUN_18000cfd0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  pcVar1 = (code *)*param_1;
  local_18 = param_4[4];
  uStack_14 = param_4[5];
  uStack_10 = param_4[6];
  uStack_c = param_4[7];
  *(undefined1 *)param_4 = 0;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0xf;
  (*pcVar1)(*param_2,*param_3,&local_28);
  return;
}



/* RVA 0xd020; VA 18000d020; FUN_18000d020 */

void FUN_18000d020(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar2 = (code *)*param_1;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  uVar1 = *param_5;
  local_18 = param_4[4];
  uStack_14 = param_4[5];
  uStack_10 = param_4[6];
  uStack_c = param_4[7];
  *(undefined1 *)param_4 = 0;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0xf;
  (*pcVar2)(*param_2,*param_3,&local_28,uVar1);
  return;
}



/* RVA 0xd0c0; VA 18000d0c0; FUN_18000d0c0 */

void FUN_18000d0c0(lua_State *param_1,int param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  __int64 _Var2;
  int local_18 [4];
  
  local_18[0] = 0;
  _Var2 = lua_tointegerx(param_1,param_4,local_18);
  if (local_18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,param_2,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = (int)_Var2;
  return;
}



/* RVA 0xd120; VA 18000d120; FUN_18000d120 */

void FUN_18000d120(lua_State *param_1,int param_2,longlong *param_3,int param_4)

{
  code *pcVar1;
  char *pcVar2;
  size_t local_18 [2];
  
  pcVar2 = lua_tolstring(param_1,param_4,local_18);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,param_2,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510(param_3,pcVar2,local_18[0]);
  return;
}



/* RVA 0xd190; VA 18000d190; FUN_18000d190 */

void FUN_18000d190(lua_State *param_1,int param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  bool bVar4;
  
  iVar2 = lua_type(param_1,param_4);
  if (iVar2 != 1) {
    iVar2 = lua_type(param_1,param_4);
    if (iVar2 != 0) {
      iVar2 = lua_isnumber(param_1,param_4);
      if (iVar2 == 0) {
        DFHack::LuaWrapper::field_error(param_1,param_2,"boolean or number expected","write");
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Var3 = lua_tointegerx(param_1,param_4,(int *)0x0);
      bVar4 = _Var3 == 0;
      goto LAB_18000d212;
    }
  }
  iVar2 = lua_toboolean(param_1,param_4);
  bVar4 = iVar2 == 0;
LAB_18000d212:
  *(bool *)param_3 = !bVar4;
  return;
}



/* RVA 0xd230; VA 18000d230; FUN_18000d230 */

undefined4 * FUN_18000d230(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}



/* RVA 0xd260; VA 18000d260; FUN_18000d260 */

undefined8 * FUN_18000d260(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  plVar1 = (longlong *)FUN_180064554(0x98);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    plVar1[0xd] = 0;
    plVar1[0xe] = 0;
    plVar1[0xf] = 0;
    plVar1[0x10] = 0;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar2 = FUN_18000fa50(plVar1);
  }
  *param_1 = plVar2;
  return param_1;
}



/* RVA 0xd2e0; VA 18000d2e0; FUN_18000d2e0 */

void FUN_18000d2e0(lua_State *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  __int64 _Var2;
  int local_res20 [2];
  
  local_res20[0] = 0;
  _Var2 = lua_tointegerx(param_1,param_2,local_res20);
  if (local_res20[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = (int)_Var2;
  return;
}



/* RVA 0xd340; VA 18000d340; FUN_18000d340 */

void FUN_18000d340(lua_State *param_1,int param_2,longlong *param_3)

{
  code *pcVar1;
  char *pcVar2;
  size_t local_res20;
  
  pcVar2 = lua_tolstring(param_1,param_2,&local_res20);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510(param_3,pcVar2,local_res20);
  return;
}



/* RVA 0xd3a0; VA 18000d3a0; FUN_18000d3a0 */

void FUN_18000d3a0(lua_State *param_1,int param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  bool bVar4;
  
  iVar2 = lua_type(param_1,param_2);
  if (iVar2 != 1) {
    iVar2 = lua_type(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = lua_isnumber(param_1,param_2);
      if (iVar2 == 0) {
        DFHack::LuaWrapper::field_error(param_1,-0xf462b,"boolean or number expected","write");
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Var3 = lua_tointegerx(param_1,param_2,(int *)0x0);
      bVar4 = _Var3 == 0;
      goto LAB_18000d41a;
    }
  }
  iVar2 = lua_toboolean(param_1,param_2);
  bVar4 = iVar2 == 0;
LAB_18000d41a:
  *(bool *)param_3 = !bVar4;
  return;
}



/* RVA 0xd460; VA 18000d460; FUN_18000d460 */

undefined8 *
FUN_18000d460(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  plVar3 = param_2;
  if (param_2 != param_3) {
    while( true ) {
      plVar5 = plVar3;
      plVar3 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        param_2 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          param_2 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar4 = (longlong *)param_2[1];
        plVar3 = param_2;
        while ((param_2 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          plVar4 = (longlong *)param_2[1];
          plVar3 = param_2;
        }
      }
      if (param_2 == param_3) break;
      local_res10[0] = *(int *)((longlong)plVar5 + 0x1c);
      local_res8[0] = *(int *)((longlong)param_2 + 0x1c);
      plVar3 = FUN_180011730(param_4,local_res8);
      lVar2 = *plVar3;
      plVar4 = FUN_180011730(param_4,local_res10);
      plVar3 = param_2;
      if ((int)*plVar4 <= (int)lVar2) {
        plVar3 = plVar5;
      }
    }
    *param_1 = plVar5;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}



/* RVA 0xd6e0; VA 18000d6e0; FUN_18000d6e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000d6e0(color_ostream *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  void *_Memory;
  undefined1 auStackY_c8 [32];
  ulonglong local_88;
  undefined4 *local_80;
  longlong local_78;
  longlong lStack_70;
  void *local_68 [3];
  ulonglong local_50;
  undefined4 local_48 [4];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_c8;
  local_48[0] = *param_3;
  local_38 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    local_38 = (undefined8 *)*param_4;
  }
  local_30 = param_4[2];
  local_28 = param_5;
  if (0xf < (ulonglong)param_5[3]) {
    local_28 = (undefined8 *)*param_5;
  }
  local_20 = param_5[2];
  local_88 = 0xdd1;
  local_80 = local_48;
  local_78 = *param_2;
  lStack_70 = param_2[1];
  FUN_180041d90(local_68,&local_78,&local_88);
  DFHack::color_ostream::flush_buffer(param_1,false);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,*(undefined4 *)(param_1 + 0x10));
  if (0xf < local_50) {
    _Memory = local_68[0];
    if ((0xfff < local_50 + 1) &&
       (_Memory = *(void **)((longlong)local_68[0] + -8),
       0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return;
}



/* RVA 0xd810; VA 18000d810; FUN_18000d810 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000d810(color_ostream *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4)

{
  void *_Memory;
  undefined1 auStackY_b8 [32];
  ulonglong local_78;
  undefined4 *local_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58 [4];
  undefined8 *local_48;
  undefined8 local_40;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_b8;
  local_58[0] = *param_3;
  local_48 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    local_48 = (undefined8 *)*param_4;
  }
  local_40 = param_4[2];
  local_78 = 0xd1;
  local_70 = local_58;
  local_68 = *param_2;
  lStack_60 = param_2[1];
  FUN_180041d90(local_38,&local_68,&local_78);
  DFHack::color_ostream::flush_buffer(param_1,false);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,*(undefined4 *)(param_1 + 0x10));
  if (0xf < local_20) {
    _Memory = local_38[0];
    if ((0xfff < local_20 + 1) &&
       (_Memory = *(void **)((longlong)local_38[0] + -8),
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return;
}



/* RVA 0xd920; VA 18000d920; FUN_18000d920 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000d920(color_ostream *param_1,longlong *param_2,undefined8 *param_3)

{
  void *_Memory;
  undefined1 auStackY_a8 [32];
  ulonglong local_68;
  undefined8 **local_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_a8;
  local_48 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    local_48 = (undefined8 *)*param_3;
  }
  local_40 = param_3[2];
  local_68 = 0xd;
  local_60 = &local_48;
  local_58 = *param_2;
  lStack_50 = param_2[1];
  FUN_180041d90(local_38,&local_58,&local_68);
  DFHack::color_ostream::flush_buffer(param_1,false);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,*(undefined4 *)(param_1 + 0x10));
  if (0xf < local_20) {
    _Memory = local_38[0];
    if ((0xfff < local_20 + 1) &&
       (_Memory = *(void **)((longlong)local_38[0] + -8),
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  return;
}



/* RVA 0xda20; VA 18000da20; FUN_18000da20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000da20(color_ostream *param_1,longlong *param_2,undefined8 *param_3)

{
  char ****ppppcVar1;
  undefined1 auStackY_a8 [32];
  ulonglong local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong lStack_50;
  char ***local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_a8;
  local_28[0] = *param_3;
  local_68 = 0xc;
  local_60 = local_28;
  local_58 = *param_2;
  lStack_50 = param_2[1];
  FUN_180041d90(local_48,&local_58,&local_68);
  if (*log_errors_to_stderr_exref != (code)0x0) {
    ppppcVar1 = local_48;
    if (0xf < local_30) {
      ppppcVar1 = (char ****)local_48[0];
    }
    FUN_180007ac0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,(char *)ppppcVar1,
                  local_38);
  }
  DFHack::color_ostream::flush_buffer(param_1,false);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0xc);
  if (0xf < local_30) {
    ppppcVar1 = (char ****)local_48[0];
    if ((0xfff < local_30 + 1) &&
       (ppppcVar1 = (char ****)local_48[0][-1],
       (char *)0x1f < (char *)((longlong)local_48[0] + (-8 - (longlong)ppppcVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(ppppcVar1);
  }
  return;
}



/* RVA 0xdbe0; VA 18000dbe0; FUN_18000dbe0 */

undefined8 *
FUN_18000dbe0(undefined8 *param_1,char *param_2,char *param_3,undefined1 *param_4,undefined *param_5
             )

{
  undefined1 uVar1;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
  }
  else {
    do {
      uVar1 = (*(code *)param_5)((int)*param_2);
      *param_4 = uVar1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
    *param_1 = param_4;
  }
  return param_1;
}



/* RVA 0xdc50; VA 18000dc50; FUN_18000dc50 */

void * FUN_18000dc50(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  
  bVar1 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,param_1);
  pvVar2 = (void *)0x0;
  if (bVar1) {
    pvVar2 = param_1;
  }
  return pvVar2;
}



/* RVA 0xdc80; VA 18000dc80; FUN_18000dc80 */

void * FUN_18000dc80(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  
  bVar1 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,param_1);
  pvVar2 = (void *)0x0;
  if (bVar1) {
    pvVar2 = param_1;
  }
  return pvVar2;
}



/* RVA 0xdcb0; VA 18000dcb0; FUN_18000dcb0 */

void * FUN_18000dcb0(void *param_1)

{
  bool bVar1;
  void *pvVar2;
  
  bVar1 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,param_1);
  pvVar2 = (void *)0x0;
  if (bVar1) {
    pvVar2 = param_1;
  }
  return pvVar2;
}



/* RVA 0xdce0; VA 18000dce0; FUN_18000dce0 */

function_identity_base *
FUN_18000dce0(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,1,param_3);
    *(undefined ***)this =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int)>::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xddb0; VA 18000ddb0; FUN_18000ddb0 */

function_identity_base *
FUN_18000ddb0(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,2,param_3);
    *(undefined ***)this =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,int)>::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xde80; VA 18000de80; FUN_18000de80 */

function_identity_base *
FUN_18000de80(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,2,param_3);
    *(undefined ***)this =
         df::
         function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>
         ::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xdf50; VA 18000df50; FUN_18000df50 */

function_identity_base *
FUN_18000df50(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,3,param_3);
    *(undefined ***)this =
         df::
         function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int)>
         ::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xe020; VA 18000e020; FUN_18000e020 */

function_identity_base *
FUN_18000e020(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,2,param_3);
    *(undefined ***)this =
         df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,bool)>::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xe0f0; VA 18000e0f0; FUN_18000e0f0 */

function_identity_base *
FUN_18000e0f0(undefined8 param_1,undefined8 *param_2,bool param_3,undefined8 *param_4)

{
  function_identity_base *this;
  
  this = (function_identity_base *)FUN_180064554(0x68);
  if (this == (function_identity_base *)0x0) {
    this = (function_identity_base *)0x0;
  }
  else {
    DFHack::function_identity_base::function_identity_base(this,1,param_3);
    *(undefined ***)this = df::function_identity<bool_(__cdecl*)(int)>::vftable;
    *(undefined8 *)(this + 0x18) = param_1;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x20),(void *)*param_2,param_2[1]);
    this[0x40] = (function_identity_base)(param_4[1] != 0);
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    FUN_180003ee0((undefined8 *)(this + 0x48),(void *)*param_4,param_4[1]);
  }
  return this;
}



/* RVA 0xe1e0; VA 18000e1e0; FUN_18000e1e0 */

undefined8 * FUN_18000e1e0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_18000ebd0(param_1,param_2);
  return param_1;
}



/* RVA 0xe260; VA 18000e260; FUN_18000e260 */

DebugRegisterBase * FUN_18000e260(DebugRegisterBase *param_1)

{
  DFHack::DebugRegisterBase::DebugRegisterBase(param_1,(DebugCategory *)&PTR_s_autofarm_18007d030);
  return param_1;
}



/* RVA 0xe280; VA 18000e280; FUN_18000e280 */

DebugRegisterBase * FUN_18000e280(DebugRegisterBase *param_1)

{
  DFHack::DebugRegisterBase::DebugRegisterBase(param_1,(DebugCategory *)&PTR_s_autofarm_18007d018);
  return param_1;
}



/* RVA 0xe370; VA 18000e370; FUN_18000e370 */

longlong * FUN_18000e370(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe3b0; VA 18000e3b0; FUN_18000e3b0 */

longlong * FUN_18000e3b0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe3f0; VA 18000e3f0; FUN_18000e3f0 */

longlong * FUN_18000e3f0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe430; VA 18000e430; FUN_18000e430 */

longlong * FUN_18000e430(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe470; VA 18000e470; FUN_18000e470 */

longlong * FUN_18000e470(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe4b0; VA 18000e4b0; FUN_18000e4b0 */

longlong * FUN_18000e4b0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe4f0; VA 18000e4f0; FUN_18000e4f0 */

longlong * FUN_18000e4f0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe530; VA 18000e530; FUN_18000e530 */

longlong * FUN_18000e530(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe570; VA 18000e570; FUN_18000e570 */

longlong * FUN_18000e570(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar1;
  return param_1;
}



/* RVA 0xe5d0; VA 18000e5d0; FUN_18000e5d0 */

longlong * FUN_18000e5d0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xe640; VA 18000e640; FUN_18000e640 */

undefined8 * FUN_18000e640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *(longlong *)param_1[1] = lVar1;
  return param_1;
}



/* RVA 0xe680; VA 18000e680; FUN_18000e680 */

undefined8 * FUN_18000e680(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x20);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe6b0; VA 18000e6b0; FUN_18000e6b0 */

undefined8 * FUN_18000e6b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x28);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe6e0; VA 18000e6e0; FUN_18000e6e0 */

undefined8 * FUN_18000e6e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x38);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe710; VA 18000e710; FUN_18000e710 */

undefined8 * FUN_18000e710(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x40);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe740; VA 18000e740; FUN_18000e740 */

undefined8 * FUN_18000e740(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x50);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe770; VA 18000e770; FUN_18000e770 */

undefined8 * FUN_18000e770(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x38);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe7a0; VA 18000e7a0; FUN_18000e7a0 */

undefined8 * FUN_18000e7a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x28);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe7d0; VA 18000e7d0; FUN_18000e7d0 */

undefined8 * FUN_18000e7d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x38);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xe800; VA 18000e800; FUN_18000e800 */

undefined8 * FUN_18000e800(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar1 = FUN_180064554(0x20);
  param_1[1] = uVar1;
  return param_1;
}



/* RVA 0xebd0; VA 18000ebd0; FUN_18000ebd0 */

undefined8 * FUN_18000ebd0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      param_1[3] = 0xf;
      uVar2 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
        uVar4 = 0x16;
      }
      _Dst = (void *)FUN_1800039c0(uVar4 + 1);
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,param_2,uVar1 + 1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0xec90; VA 18000ec90; FUN_18000ec90 */

undefined8 *
FUN_18000ec90(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_3 <= (ulonglong)param_2[2]) {
    uVar1 = param_2[2] - param_3;
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180003ee0(param_1,(void *)((longlong)param_2 + param_3),param_4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018140();
}



/* RVA 0xece0; VA 18000ece0; FUN_18000ece0 */

undefined8 * FUN_18000ece0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_180003ee0(param_1,param_2,sVar1);
  return param_1;
}



/* RVA 0xed30; VA 18000ed30; FUN_18000ed30 */

undefined8 *
FUN_18000ed30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5
             ,void *param_6,size_t param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *_Dst;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0xf;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_5 + param_7;
  _Dst = param_1;
  if (0xf < uVar1) {
    uVar2 = uVar1 | 0xf;
    uVar3 = 0x7fffffffffffffff;
    if ((uVar2 < 0x8000000000000000) && (uVar3 = uVar2, uVar2 < 0x16)) {
      uVar3 = 0x16;
    }
    _Dst = (undefined8 *)FUN_1800039c0(uVar3 + 1);
    *param_1 = _Dst;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  memcpy(_Dst,param_4,param_5);
  memcpy((void *)((longlong)_Dst + param_5),param_6,param_7);
  *(undefined1 *)((longlong)_Dst + uVar1) = 0;
  return param_1;
}



/* RVA 0xee20; VA 18000ee20; FUN_18000ee20 */

undefined8 * FUN_18000ee20(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  sVar1 = strlen(param_2);
  param_1[1] = sVar1;
  return param_1;
}



/* RVA 0xee70; VA 18000ee70; FUN_18000ee70 */

function_identity_base *
FUN_18000ee70(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,1,param_4);
  *(undefined ***)param_1 =
       df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int)>::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xef10; VA 18000ef10; FUN_18000ef10 */

function_identity_base *
FUN_18000ef10(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,2,param_4);
  *(undefined ***)param_1 =
       df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,int)>::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xefb0; VA 18000efb0; FUN_18000efb0 */

function_identity_base *
FUN_18000efb0(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,2,param_4);
  *(undefined ***)param_1 =
       df::
       function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>)>
       ::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xf050; VA 18000f050; FUN_18000f050 */

function_identity_base *
FUN_18000f050(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,3,param_4);
  *(undefined ***)param_1 =
       df::
       function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,int)>
       ::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xf0f0; VA 18000f0f0; FUN_18000f0f0 */

function_identity_base *
FUN_18000f0f0(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,2,param_4);
  *(undefined ***)param_1 =
       df::function_identity<void_(__cdecl*)(DFHack::color_ostream&___ptr64,int,bool)>::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xf190; VA 18000f190; FUN_18000f190 */

function_identity_base *
FUN_18000f190(function_identity_base *param_1,undefined8 param_2,undefined8 *param_3,bool param_4,
             undefined8 *param_5)

{
  DFHack::function_identity_base::function_identity_base(param_1,1,param_4);
  *(undefined ***)param_1 = df::function_identity<bool_(__cdecl*)(int)>::vftable;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x20),(void *)*param_3,param_3[1]);
  param_1[0x40] = (function_identity_base)(param_5[1] != 0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180003ee0((undefined8 *)(param_1 + 0x48),(void *)*param_5,param_5[1]);
  return param_1;
}



/* RVA 0xf240; VA 18000f240; FUN_18000f240 */

longlong * FUN_18000f240(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf280; VA 18000f280; FUN_18000f280 */

longlong * FUN_18000f280(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf2c0; VA 18000f2c0; FUN_18000f2c0 */

longlong * FUN_18000f2c0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf300; VA 18000f300; FUN_18000f300 */

longlong * FUN_18000f300(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf340; VA 18000f340; FUN_18000f340 */

longlong * FUN_18000f340(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf380; VA 18000f380; FUN_18000f380 */

longlong * FUN_18000f380(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf3c0; VA 18000f3c0; FUN_18000f3c0 */

longlong * FUN_18000f3c0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *piVar5;
  longlong local_68;
  longlong lStack_60;
  longlong local_48;
  longlong local_40 [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)FUN_180064554(0x28);
  *plVar3 = (longlong)plVar3;
  plVar3[1] = (longlong)plVar3;
  plVar3[2] = (longlong)plVar3;
  *(undefined2 *)(plVar3 + 3) = 0x101;
  *param_1 = (longlong)plVar3;
  piVar5 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  do {
    if (piVar5 == piVar1) {
      return param_1;
    }
    plVar4 = FUN_180006a50(param_1,local_40,plVar3,piVar5);
    local_68 = *plVar4;
    lStack_60 = plVar4[1];
    local_48 = plVar4[2];
    if ((char)local_48 == '\0') {
      if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
        FUN_180017a10();
      }
      lVar2 = *param_1;
      plVar4 = (longlong *)FUN_180064554(0x28);
      *(undefined8 *)((longlong)plVar4 + 0x1c) = *(undefined8 *)piVar5;
      *plVar4 = lVar2;
      plVar4[1] = lVar2;
      plVar4[2] = lVar2;
      *(undefined2 *)(plVar4 + 3) = 0;
      FUN_1800166a0(param_1,&local_68,plVar4);
    }
    piVar5 = piVar5 + 2;
  } while( true );
}



/* RVA 0xf530; VA 18000f530; FUN_18000f530 */

undefined4 * FUN_18000f530(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_18000ebd0((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}



/* RVA 0xf560; VA 18000f560; FUN_18000f560 */

undefined8 * FUN_18000f560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = FUN_180064554(0x20);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  param_1[1] = lVar2;
  param_1[1] = param_2[1];
  param_2[1] = lVar2;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return param_1;
}



/* RVA 0xf5d0; VA 18000f5d0; FUN_18000f5d0 */

undefined8 *
FUN_18000f5d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  param_1[2] = 0;
  lVar7 = FUN_180064554(0x20);
  *(longlong *)lVar7 = lVar7;
  *(longlong *)(lVar7 + 8) = lVar7;
  *(longlong *)(lVar7 + 0x10) = lVar7;
  *(undefined2 *)(lVar7 + 0x18) = 0x101;
  *plVar1 = lVar7;
  puVar8 = FUN_180004470(plVar1,*(undefined8 **)(param_2[1] + 8),lVar7,param_4);
  *(undefined8 **)(*plVar1 + 8) = puVar8;
  param_1[2] = param_2[2];
  plVar3 = (longlong *)*plVar1;
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar2 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar3 = (longlong)plVar4;
    lVar7 = *(longlong *)(*plVar1 + 8);
    lVar5 = *(longlong *)(lVar7 + 0x10);
    cVar2 = *(char *)(lVar5 + 0x19);
    while (cVar2 == '\0') {
      cVar2 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar7 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(*plVar1 + 0x10) = lVar7;
  }
  else {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*plVar1 + 0x10) = *plVar1;
  }
  return param_1;
}



/* RVA 0xf6c0; VA 18000f6c0; FUN_18000f6c0 */

longlong * FUN_18000f6c0(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf700; VA 18000f700; FUN_18000f700 */

longlong * FUN_18000f700(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar1;
  return param_1;
}



/* RVA 0xf760; VA 18000f760; FUN_18000f760 */

longlong * FUN_18000f760(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = FUN_180064554(0x20);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *param_1 = lVar6;
  puVar7 = FUN_180004470(param_1,*(undefined8 **)(*param_2 + 8),lVar6,param_4);
  *(undefined8 **)(*param_1 + 8) = puVar7;
  param_1[1] = param_2[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar5 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar3 = plVar5;
      plVar5 = (longlong *)*plVar5;
    }
    *plVar2 = (longlong)plVar3;
    lVar6 = *(longlong *)(*param_1 + 8);
    lVar4 = *(longlong *)(lVar6 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x19);
      lVar6 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar2 = (longlong)plVar2;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}



/* RVA 0xf830; VA 18000f830; FUN_18000f830 */

longlong * FUN_18000f830(longlong *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return param_1;
}



/* RVA 0xf960; VA 18000f960; FUN_18000f960 */

undefined8 * FUN_18000f960(undefined8 *param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800180c0();
    }
    _Dst = (void *)FUN_1800039c0(uVar1 * 8);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)(uVar1 * 8 + (longlong)_Dst);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    param_1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  return param_1;
}



/* RVA 0xfa50; VA 18000fa50; FUN_18000fa50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_18000fa50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  undefined1 auStack_268 [32];
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong *local_208;
  longlong local_200 [3];
  undefined8 local_1e8 [50];
  undefined4 local_58;
  undefined4 local_54;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_18007d140 ^ (ulonglong)auStack_268;
  *param_1 = 0;
  param_1[1] = 0;
  local_208 = param_1;
  lVar4 = FUN_180064554(0x28);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 2) = 0x32;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = FUN_180064554(0x50);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  param_1[3] = lVar4;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar4 = FUN_180064554(0x28);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  param_1[5] = lVar4;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar4 = FUN_180064554(0x50);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  param_1[7] = lVar4;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar4 = FUN_180064554(0x38);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  param_1[0xb] = lVar4;
  plVar1 = param_1 + 0xd;
  local_1e8[0] = _DAT_180069080;
  local_1e8[1] = _UNK_180069088;
  local_1e8[2] = _DAT_180069090;
  local_1e8[3] = _UNK_180069098;
  local_1e8[4] = _DAT_1800690a0;
  local_1e8[5] = _UNK_1800690a8;
  local_1e8[6] = _DAT_1800690b0;
  local_1e8[7] = _UNK_1800690b8;
  local_1e8[8] = _DAT_1800690c0;
  local_1e8[9] = _UNK_1800690c8;
  local_1e8[10] = _DAT_1800690d0;
  local_1e8[0xb] = _UNK_1800690d8;
  local_1e8[0xc] = _DAT_1800690e0;
  local_1e8[0xd] = _UNK_1800690e8;
  local_1e8[0xe] = _DAT_1800690f0;
  local_1e8[0xf] = _UNK_1800690f8;
  local_1e8[0x10] = _DAT_180069100;
  local_1e8[0x11] = _UNK_180069108;
  local_1e8[0x12] = _DAT_180069110;
  local_1e8[0x13] = _UNK_180069118;
  local_1e8[0x14] = _DAT_180069120;
  local_1e8[0x15] = _UNK_180069128;
  local_1e8[0x16] = _DAT_180069130;
  local_1e8[0x17] = _UNK_180069138;
  local_1e8[0x18] = _DAT_180069140;
  local_1e8[0x19] = _UNK_180069148;
  local_1e8[0x1a] = _DAT_180069150;
  local_1e8[0x1b] = _UNK_180069158;
  local_1e8[0x1c] = _DAT_180069160;
  local_1e8[0x1d] = _UNK_180069168;
  local_1e8[0x1e] = _DAT_180069170;
  local_1e8[0x1f] = _UNK_180069178;
  local_1e8[0x20] = _DAT_180069180;
  local_1e8[0x21] = _UNK_180069188;
  local_1e8[0x22] = _DAT_180069190;
  local_1e8[0x23] = _UNK_180069198;
  local_1e8[0x24] = _DAT_1800691a0;
  local_1e8[0x25] = _UNK_1800691a8;
  local_1e8[0x26] = _DAT_1800691b0;
  local_1e8[0x27] = _UNK_1800691b8;
  local_1e8[0x28] = _DAT_1800691c0;
  local_1e8[0x29] = _UNK_1800691c8;
  local_1e8[0x2a] = _DAT_1800691d0;
  local_1e8[0x2b] = _UNK_1800691d8;
  local_1e8[0x2c] = _DAT_1800691e0;
  local_1e8[0x2d] = _UNK_1800691e8;
  local_1e8[0x2e] = _DAT_1800691f0;
  local_1e8[0x2f] = _UNK_1800691f8;
  local_1e8[0x30] = _DAT_180069200;
  local_1e8[0x31] = _UNK_180069208;
  local_58 = 0x37;
  local_54 = 0x32;
  *plVar1 = 0;
  param_1[0xe] = 0;
  local_248 = plVar1;
  plVar5 = (longlong *)FUN_180064554(0x28);
  *plVar5 = (longlong)plVar5;
  plVar5[1] = (longlong)plVar5;
  plVar5[2] = (longlong)plVar5;
  *(undefined2 *)(plVar5 + 3) = 0x101;
  *plVar1 = (longlong)plVar5;
  piVar7 = (int *)local_1e8;
  do {
    plVar6 = FUN_180006a50(plVar1,local_200,plVar5,piVar7);
    lVar4 = *plVar6;
    lVar3 = plVar6[1];
    local_218 = plVar6[2];
    if ((char)local_218 == '\0') {
      if (param_1[0xe] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
        FUN_180017a10();
      }
      lVar2 = *plVar1;
      local_238 = 0;
      local_240 = plVar1;
      plVar6 = (longlong *)FUN_180064554(0x28);
      *(undefined8 *)((longlong)plVar6 + 0x1c) = *(undefined8 *)piVar7;
      *plVar6 = lVar2;
      plVar6[1] = lVar2;
      plVar6[2] = lVar2;
      *(undefined2 *)(plVar6 + 3) = 0;
      local_238 = 0;
      local_228 = lVar4;
      lStack_220 = lVar3;
      FUN_1800166a0(plVar1,&local_228,plVar6);
    }
    piVar7 = piVar7 + 2;
  } while (piVar7 != local_50);
  DFHack::PersistentDataItem::PersistentDataItem((PersistentDataItem *)(param_1 + 0xf));
  DFHack::PersistentDataItem::PersistentDataItem((PersistentDataItem *)(param_1 + 0x11));
  return param_1;
}



/* RVA 0xfe40; VA 18000fe40; FUN_18000fe40 */

undefined8 * FUN_18000fe40(undefined8 *param_1,longlong *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  *param_1 = param_2;
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)*(int *)(*param_2 + 4) + (longlong)param_2));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar1 + 8))(pbVar1);
  }
  return param_1;
}



/* RVA 0xfea0; VA 18000fea0; FUN_18000fea0 */

undefined8 * FUN_18000fea0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}



/* RVA 0xfee0; VA 18000fee0; FUN_18000fee0 */

undefined8 * FUN_18000fee0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* RVA 0xff20; VA 18000ff20; FUN_18000ff20 */

undefined8 * FUN_18000ff20(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}



/* RVA 0xff50; VA 18000ff50; exception */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __std_exception_copy(param_1 + 8);
  return this;
}



/* RVA 0xffb0; VA 18000ffb0; FUN_18000ffb0 */

undefined8 * FUN_18000ffb0(undefined8 *param_1,basic_ostream<char,std::char_traits<char>_> *param_2)

{
  bool bVar1;
  bool bVar2;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,std::char_traits<char>_> *this;
  
  *param_1 = param_2;
  pbVar3 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_2 + *(int *)(*(longlong *)param_2 + 4)));
  if (pbVar3 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar3 + 8))(pbVar3);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = std::basic_ios<char,std::char_traits<char>_>::tie
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_2 + *(int *)(*(longlong *)param_2 + 4)));
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_2)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_2 + *(int *)(*(longlong *)param_2 + 4)));
    }
  }
  *(bool *)(param_1 + 1) = bVar2;
  return param_1;
}



/* RVA 0x10060; VA 180010060; FUN_180010060 */

void FUN_180010060(DebugRegisterBase *param_1)

{
  DFHack::DebugRegisterBase::unregister(param_1,(DebugCategory *)&PTR_s_autofarm_18007d030);
  return;
}



/* RVA 0x10080; VA 180010080; FUN_180010080 */

void FUN_180010080(DebugRegisterBase *param_1)

{
  DFHack::DebugRegisterBase::unregister(param_1,(DebugCategory *)&PTR_s_autofarm_18007d018);
  return;
}



/* RVA 0x101d0; VA 1800101d0; FUN_1800101d0 */

void FUN_1800101d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *_Memory;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    cVar1 = *(char *)(param_1[2] + 0x19);
    _Memory = (longlong *)param_1[2];
    while (cVar1 == '\0') {
      FUN_1800067b0(lVar2,lVar3,(longlong *)_Memory[2]);
      plVar4 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
  }
  return;
}



/* RVA 0x10260; VA 180010260; FUN_180010260 */

void FUN_180010260(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x102c0; VA 1800102c0; FUN_1800102c0 */

void FUN_1800102c0(longlong *param_1)

{
  FUN_1800063d0(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x102f0; VA 1800102f0; FUN_1800102f0 */

void FUN_1800102f0(longlong *param_1)

{
  FUN_180006450(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10320; VA 180010320; FUN_180010320 */

void FUN_180010320(longlong *param_1)

{
  FUN_180006680(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10350; VA 180010350; FUN_180010350 */

void FUN_180010350(longlong *param_1)

{
  FUN_1800064d0(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10380; VA 180010380; FUN_180010380 */

void FUN_180010380(longlong *param_1)

{
  FUN_180006550(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x103b0; VA 1800103b0; FUN_1800103b0 */

void FUN_1800103b0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006620(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x10410; VA 180010410; FUN_180010410 */

void FUN_180010410(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006310(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x104e0; VA 1800104e0; FUN_1800104e0 */

void FUN_1800104e0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    FUN_180006290(plVar1,plVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}



/* RVA 0x10520; VA 180010520; FUN_180010520 */

void FUN_180010520(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180010e00((longlong *)(*(longlong *)(param_1 + 8) + 0x28));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}



/* RVA 0x10560; VA 180010560; FUN_180010560 */

void FUN_180010560(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180017da0((longlong *)(*(longlong *)(param_1 + 8) + 0x28));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}



/* RVA 0x105a0; VA 1800105a0; FUN_1800105a0 */

void FUN_1800105a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    _Memory = *(longlong **)(*(longlong *)(lVar2 + 0x28) + 8);
    cVar1 = *(char *)((longlong)_Memory + 0x19);
    while (cVar1 == '\0') {
      FUN_180006310(lVar2 + 0x28,lVar2 + 0x28,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    free(*(void **)(lVar2 + 0x28));
  }
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* RVA 0x10650; VA 180010650; FUN_180010650 */

void FUN_180010650(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    _Memory = *(longlong **)(*(longlong *)(lVar2 + 0x28) + 8);
    cVar1 = *(char *)((longlong)_Memory + 0x19);
    while (cVar1 == '\0') {
      FUN_180006310(lVar2 + 0x28,lVar2 + 0x28,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    free(*(void **)(lVar2 + 0x28));
  }
  if (*(void **)(param_1 + 8) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 8));
  return;
}



/* RVA 0x10850; VA 180010850; FUN_180010850 */

void FUN_180010850(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar1) {
    plVar2 = (longlong *)(lVar3 + 8);
    do {
      FUN_180006290(plVar2,plVar2);
      lVar3 = lVar3 + 0x18;
      plVar2 = plVar2 + 3;
    } while (lVar3 != lVar1);
  }
  return;
}



/* RVA 0x108a0; VA 1800108a0; FUN_1800108a0 */

void FUN_1800108a0(undefined8 *param_1)

{
  PluginCommand *pPVar1;
  PluginCommand *this;
  
  pPVar1 = (PluginCommand *)param_1[1];
  for (this = (PluginCommand *)*param_1; this != pPVar1; this = this + 0x78) {
    DFHack::PluginCommand::~PluginCommand(this);
  }
  return;
}



/* RVA 0x108e0; VA 1800108e0; FUN_1800108e0 */

void FUN_1800108e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
    FUN_180017da0(plVar2);
  }
  return;
}



/* RVA 0x10930; VA 180010930; FUN_180010930 */

void FUN_180010930(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000180010953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x10960; VA 180010960; FUN_180010960 */

void FUN_180010960(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000180010983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x10990; VA 180010990; FUN_180010990 */

void FUN_180010990(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001800109b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x109c0; VA 1800109c0; FUN_1800109c0 */

void FUN_1800109c0(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001800109e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x109f0; VA 1800109f0; FUN_1800109f0 */

void FUN_1800109f0(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000180010a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x10a20; VA 180010a20; FUN_180010a20 */

void FUN_180010a20(function_identity_base *param_1)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000180010a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DFHack::function_identity_base::~function_identity_base(param_1);
  return;
}



/* RVA 0x10a50; VA 180010a50; FUN_180010a50 */

void FUN_180010a50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x10ab0; VA 180010ab0; FUN_180010ab0 */

void FUN_180010ab0(longlong *param_1)

{
  FUN_1800063d0(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10ae0; VA 180010ae0; FUN_180010ae0 */

void FUN_180010ae0(longlong *param_1)

{
  FUN_180006450(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10b10; VA 180010b10; FUN_180010b10 */

void FUN_180010b10(longlong *param_1)

{
  FUN_180006680(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10b40; VA 180010b40; FUN_180010b40 */

void FUN_180010b40(longlong *param_1)

{
  FUN_1800064d0(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10b70; VA 180010b70; FUN_180010b70 */

void FUN_180010b70(longlong *param_1)

{
  FUN_180006550(param_1,param_1,*(longlong **)(*param_1 + 8));
  free((void *)*param_1);
  return;
}



/* RVA 0x10ba0; VA 180010ba0; FUN_180010ba0 */

void FUN_180010ba0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006620(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x10c30; VA 180010c30; FUN_180010c30 */

void FUN_180010c30(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0x10cb0; VA 180010cb0; FUN_180010cb0 */

void FUN_180010cb0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *_Memory;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  _Memory = *(longlong **)(*(longlong *)(param_1 + 8) + 8);
  cVar2 = *(char *)((longlong)_Memory + 0x19);
  while (cVar2 == '\0') {
    FUN_180006310(puVar1,puVar1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  free((void *)*puVar1);
  return;
}



/* RVA 0x10d10; VA 180010d10; FUN_180010d10 */

void FUN_180010d10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  _Memory = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006310(param_1,param_1,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x10d70; VA 180010d70; FUN_180010d70 */

void FUN_180010d70(longlong *param_1)

{
  FUN_180006290(param_1,param_1);
  return;
}



/* RVA 0x10d90; VA 180010d90; FUN_180010d90 */

void FUN_180010d90(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x10e00; VA 180010e00; FUN_180010e00 */

void FUN_180010e00(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x10e80; VA 180010e80; FUN_180010e80 */

void FUN_180010e80(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Memory;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    if (lVar4 != lVar1) {
      plVar3 = (longlong *)(lVar4 + 8);
      do {
        FUN_180006290(plVar3,plVar3);
        lVar4 = lVar4 + 0x18;
        plVar3 = plVar3 + 3;
      } while (lVar4 != lVar1);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x10f60; VA 180010f60; FUN_180010f60 */

void FUN_180010f60(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 4) {
      FUN_180017da0(plVar3);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x11000; VA 180011000; FUN_180011000 */

void FUN_180011000(longlong *param_1)

{
  PersistentDataItem *pPVar1;
  void *pvVar2;
  void *_Memory;
  PersistentDataItem *this;
  
  this = (PersistentDataItem *)*param_1;
  if (this != (PersistentDataItem *)0x0) {
    pPVar1 = (PersistentDataItem *)param_1[1];
    for (; this != pPVar1; this = this + 0x10) {
      DFHack::PersistentDataItem::~PersistentDataItem(this);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x110a0; VA 1800110a0; FUN_1800110a0 */

void FUN_1800110a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_1 + 0x11));
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_1 + 0xf));
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0xd] + 8) + 0x19);
  plVar3 = *(longlong **)(param_1[0xd] + 8);
  while (cVar1 == '\0') {
    FUN_180006620(param_1 + 0xd,param_1 + 0xd,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)param_1[0xd]);
  FUN_1800063d0(param_1 + 0xb,param_1 + 0xb,*(longlong **)(param_1[0xb] + 8));
  free((void *)param_1[0xb]);
  FUN_1800064d0(param_1 + 7,param_1 + 7,*(longlong **)(param_1[7] + 8));
  free((void *)param_1[7]);
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[5] + 8) + 0x19);
  plVar3 = *(longlong **)(param_1[5] + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1 + 5,param_1 + 5,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)param_1[5]);
  FUN_1800064d0(param_1 + 3,param_1 + 3,*(longlong **)(param_1[3] + 8));
  free((void *)param_1[3]);
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  return;
}



/* RVA 0x11240; VA 180011240; FUN_180011240 */

void FUN_180011240(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  _Memory = pvVar1;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 2)) &&
     (_Memory = *(void **)((longlong)pvVar1 + -8),
     0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x112b0; VA 1800112b0; FUN_1800112b0 */

void FUN_1800112b0(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  _Memory = pvVar1;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
     (_Memory = *(void **)((longlong)pvVar1 + -8),
     0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x11320; VA 180011320; FUN_180011320 */

void FUN_180011320(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != lVar1) {
    plVar3 = (longlong *)(lVar4 + 8);
    do {
      FUN_180006290(plVar3,plVar3);
      lVar4 = lVar4 + 0x18;
      plVar3 = plVar3 + 3;
    } while (lVar4 != lVar1);
  }
  pvVar2 = *(void **)(param_1 + 8);
  _Memory = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x18)) &&
     (_Memory = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x113e0; VA 1800113e0; FUN_1800113e0 */

void FUN_1800113e0(longlong param_1)

{
  PluginCommand *pPVar1;
  void *pvVar2;
  void *_Memory;
  PluginCommand *this;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  pPVar1 = *(PluginCommand **)(param_1 + 0x20);
  for (this = *(PluginCommand **)(param_1 + 0x18); this != pPVar1; this = this + 0x78) {
    DFHack::PluginCommand::~PluginCommand(this);
  }
  pvVar2 = *(void **)(param_1 + 8);
  _Memory = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x78)) &&
     (_Memory = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x11480; VA 180011480; FUN_180011480 */

void FUN_180011480(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  for (plVar3 = *(longlong **)(param_1 + 0x18); plVar3 != plVar1; plVar3 = plVar3 + 4) {
    FUN_180017da0(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 8);
  _Memory = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
     (_Memory = *(void **)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x11520; VA 180011520; FUN_180011520 */

void FUN_180011520(longlong *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}



/* RVA 0x115b0; VA 1800115b0; FUN_1800115b0 */

void FUN_1800115b0(longlong *param_1)

{
  int iVar1;
  basic_streambuf<char,std::char_traits<char>_> *pbVar2;
  
  iVar1 = std::uncaught_exceptions();
  if (iVar1 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  pbVar2 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
  if (pbVar2 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar2 + 0x10))(pbVar2);
  }
  return;
}



/* RVA 0x11610; VA 180011610; FUN_180011610 */

longlong * FUN_180011610(longlong *param_1,longlong *param_2)

{
  size_t *psVar1;
  
  if (param_1 != param_2) {
    psVar1 = (size_t *)(param_2 + 2);
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_180018510(param_1,param_2,*psVar1);
  }
  return param_1;
}



/* RVA 0x11730; VA 180011730; FUN_180011730 */

longlong * FUN_180011730(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar6 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= *(int *)((longlong)local_28 + 0x1c);
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar2) {
        plVar4 = local_28 + 2;
        plVar5 = plVar6;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar6 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < *(int *)((longlong)plVar5 + 0x1c))
     ) {
    if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar5 = (longlong *)FUN_180064554(0x28);
    *(int *)((longlong)plVar5 + 0x1c) = *param_2;
    *(undefined4 *)(plVar5 + 4) = 0;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180015ac0(param_1,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 4;
}



/* RVA 0x11830; VA 180011830; FUN_180011830 */

longlong * FUN_180011830(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)*param_1;
  local_38 = (longlong *)plVar1[1];
  uStack_30 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar3 = local_38;
    plVar7 = plVar1;
    do {
      local_38 = plVar3;
      bVar2 = *param_2 <= (int)local_38[4];
      plVar4 = local_38;
      plVar5 = local_38;
      if (!bVar2) {
        plVar4 = local_38 + 2;
        plVar5 = plVar7;
      }
      uStack_30 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar7 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < (int)plVar5[4])) {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar5 = (longlong *)FUN_180064554(0x38);
    *(int *)(plVar5 + 4) = *param_2;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plStack_40 = plVar5;
    lVar6 = FUN_180064554(0x20);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    plVar5[5] = lVar6;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar5 = FUN_180015d20(param_1,(longlong *)&local_48,plVar5);
  }
  return plVar5 + 5;
}



/* RVA 0x11960; VA 180011960; FUN_180011960 */

longlong * FUN_180011960(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar6 = plVar1;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= (int)local_28[4];
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar2) {
        plVar4 = local_28 + 2;
        plVar5 = plVar6;
      }
      uStack_20 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar6 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < (int)plVar5[4])) {
    if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar5 = (longlong *)FUN_180064554(0x40);
    *(int *)(plVar5 + 4) = *param_2;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_180015f80(param_1,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 5;
}



/* RVA 0x11a60; VA 180011a60; FUN_180011a60 */

longlong * FUN_180011a60(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)*param_1;
  local_38 = (longlong *)plVar1[1];
  uStack_30 = 0;
  plVar4 = plVar1;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar2 = local_38;
    plVar6 = plVar1;
    do {
      local_38 = plVar2;
      plVar3 = local_38;
      plVar4 = local_38;
      if (*param_2 > (ulonglong)local_38[4]) {
        plVar3 = local_38 + 2;
        plVar4 = plVar6;
      }
      uStack_30 = (uint)(*param_2 <= (ulonglong)local_38[4]);
      plVar2 = (longlong *)*plVar3;
      plVar6 = plVar4;
    } while (*(char *)(*plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) != '\0') || (*param_2 < (ulonglong)plVar4[4])) {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar4 = (longlong *)FUN_180064554(0x38);
    plVar4[4] = *param_2;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plStack_40 = plVar4;
    lVar5 = FUN_180064554(0x20);
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar5 + 8) = lVar5;
    *(longlong *)(lVar5 + 0x10) = lVar5;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    plVar4[5] = lVar5;
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar4 = FUN_180016900(param_1,(longlong *)&local_48,plVar4);
  }
  return plVar4 + 5;
}



/* RVA 0x11b90; VA 180011b90; FUN_180011b90 */

longlong * FUN_180011b90(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong *local_18;
  
  FUN_180006de0(param_1,(longlong *)&local_28,param_2);
  if (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar3 = FUN_180012e00(param_1,param_2,(int *)(local_18 + 4));
    if ((char)uVar3 == '\0') goto LAB_180011c6f;
  }
  if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_180017a10();
  }
  lVar1 = *param_1;
  uStack_30 = 0;
  local_38 = param_1;
  plVar4 = (longlong *)FUN_180064554(0x50);
  *(int *)(plVar4 + 4) = *param_2;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  lVar2 = *(longlong *)(param_2 + 4);
  plVar4[5] = *(longlong *)(param_2 + 2);
  plVar4[6] = lVar2;
  lVar2 = *(longlong *)(param_2 + 8);
  plVar4[7] = *(longlong *)(param_2 + 6);
  plVar4[8] = lVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  param_2[9] = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  *plVar4 = lVar1;
  plVar4[1] = lVar1;
  plVar4[2] = lVar1;
  *(undefined2 *)(plVar4 + 3) = 0;
  local_38 = local_28;
  uStack_30 = uStack_20;
  local_18 = FUN_1800161e0(param_1,(longlong *)&local_38,plVar4);
LAB_180011c6f:
  return local_18 + 9;
}



/* RVA 0x11c90; VA 180011c90; FUN_180011c90 */

longlong * FUN_180011c90(longlong *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong *local_18;
  
  FUN_180006de0(param_1,(longlong *)&local_28,param_2);
  if (*(char *)((longlong)local_18 + 0x19) == '\0') {
    uVar2 = FUN_180012e00(param_1,param_2,(int *)(local_18 + 4));
    if ((char)uVar2 == '\0') goto LAB_180011d55;
  }
  if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_180017a10();
  }
  lVar1 = *param_1;
  plStack_30 = (longlong *)0x0;
  local_38 = param_1;
  plVar3 = (longlong *)FUN_180064554(0x50);
  *(int *)(plVar3 + 4) = *param_2;
  plStack_30 = plVar3;
  FUN_18000ebd0(plVar3 + 5,(undefined8 *)(param_2 + 2));
  *(undefined4 *)(plVar3 + 9) = 0;
  *plVar3 = lVar1;
  plVar3[1] = lVar1;
  plVar3[2] = lVar1;
  *(undefined2 *)(plVar3 + 3) = 0;
  local_38 = local_28;
  plStack_30 = (longlong *)uStack_20;
  local_18 = FUN_1800161e0(param_1,(longlong *)&local_38,plVar3);
LAB_180011d55:
  return local_18 + 9;
}



/* RVA 0x11d80; VA 180011d80; FUN_180011d80 */

longlong * FUN_180011d80(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)*param_1;
  local_38 = (longlong *)plVar1[1];
  uStack_30 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar3 = local_38;
    plVar7 = plVar1;
    do {
      local_38 = plVar3;
      bVar2 = *param_2 <= (int)local_38[4];
      plVar4 = local_38;
      plVar5 = local_38;
      if (!bVar2) {
        plVar4 = local_38 + 2;
        plVar5 = plVar7;
      }
      uStack_30 = (uint)bVar2;
      plVar3 = (longlong *)*plVar4;
      plVar7 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < (int)plVar5[4])) {
    if (param_1[1] == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180017a10();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    plVar5 = (longlong *)FUN_180064554(0x38);
    *(int *)(plVar5 + 4) = *param_2;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plStack_40 = plVar5;
    lVar6 = FUN_180064554(0x20);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    *(longlong *)(lVar6 + 0x10) = lVar6;
    *(undefined2 *)(lVar6 + 0x18) = 0x101;
    plVar5[5] = lVar6;
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar5 = FUN_180016440(param_1,(longlong *)&local_48,plVar5);
  }
  return plVar5 + 5;
}



/* RVA 0x12070; VA 180012070; FUN_180012070 */

longlong * FUN_180012070(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



/* RVA 0x120e0; VA 1800120e0; FUN_1800120e0 */

longlong * FUN_1800120e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  FUN_180012100(param_1);
  return param_2;
}



/* RVA 0x12100; VA 180012100; FUN_180012100 */

longlong * FUN_180012100(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



/* RVA 0x12250; VA 180012250; FUN_180012250 */

longlong * FUN_180012250(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  FUN_180012270(param_1);
  return param_2;
}



/* RVA 0x12270; VA 180012270; FUN_180012270 */

longlong * FUN_180012270(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



/* RVA 0x122e0; VA 1800122e0; FUN_1800122e0 */

longlong * FUN_1800122e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



/* RVA 0x123c0; VA 1800123c0; FUN_1800123c0 */

longlong * FUN_1800123c0(longlong *param_1)

{
  FUN_180012100(param_1);
  return param_1;
}



/* RVA 0x124c0; VA 1800124c0; FUN_1800124c0 */

longlong * FUN_1800124c0(longlong *param_1)

{
  FUN_180012270(param_1);
  return param_1;
}



/* RVA 0x12610; VA 180012610; operator() */

/* Library Function - Single Match
    public: void __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64
   const,unsigned __int64,char const * __ptr64 const,unsigned __int64)const __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(char_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,char *param_4,
          __uint64 param_5)

{
  memcpy(param_1,param_2,param_3);
  memcpy(param_1 + param_3,param_4,param_5);
  (param_1 + param_3)[param_5] = '\0';
  return;
}



/* RVA 0x12660; VA 180012660; operator() */

/* Library Function - Single Match
    public: void __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::assign(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,unsigned __int64,char const *
   __ptr64 const)const __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(char_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,char *param_1,__uint64 param_2,char *param_3)

{
  memcpy(param_1,param_3,param_2);
  param_1[param_2] = '\0';
  return;
}



/* RVA 0x12690; VA 180012690; FUN_180012690 */

void FUN_180012690(undefined8 param_1,void *param_2,void *param_3,longlong param_4,size_t param_5,
                  void *param_6,size_t param_7)

{
  memcpy(param_2,param_3,param_5);
  memcpy((void *)((longlong)param_2 + param_5),param_6,param_7);
  memcpy((void *)((longlong)((longlong)param_2 + param_5) + param_7),
         (void *)((longlong)param_3 + param_5),(param_4 - param_5) + 1);
  return;
}



/* RVA 0x12710; VA 180012710; FUN_180012710 */

void FUN_180012710(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  local_res8[0] = (**(code **)(*param_2 + 0x18))(param_2);
  if ((*(uint *)(param_2 + 2) & *(uint *)param_1[1]) == 0) {
    plVar4 = (longlong *)(*(longlong **)(*param_1 + 0x58))[1];
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar2 = *(longlong **)(*param_1 + 0x58);
    while (cVar1 == '\0') {
      plVar5 = plVar4;
      if ((int)plVar4[4] < local_res8[0]) {
        plVar4 = plVar4 + 2;
        plVar5 = plVar2;
      }
      plVar4 = (longlong *)*plVar4;
      plVar2 = plVar5;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    if ((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((int)plVar2[4] <= local_res8[0])) {
      iVar3 = (**(code **)(*param_2 + 0x478))(param_2);
      plVar4 = FUN_180011730((longlong *)(*param_1 + 0x28),local_res8);
      *(int *)plVar4 = (int)*plVar4 + iVar3;
    }
  }
  return;
}



/* RVA 0x127a0; VA 1800127a0; FUN_1800127a0 */

bool FUN_1800127a0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  plVar2 = FUN_180011a60((longlong *)*param_1,&local_res10);
  uVar1 = plVar2[1];
  plVar2 = FUN_180011a60((longlong *)*param_1,local_res18);
  return uVar1 < (ulonglong)plVar2[1];
}



/* RVA 0x127f0; VA 1800127f0; FUN_1800127f0 */

bool FUN_1800127f0(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t _Size;
  int iVar2;
  
  psVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (_Size != *psVar1) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar2 = memcmp(param_2,param_1,_Size);
  return iVar2 == 0;
}



/* RVA 0x12840; VA 180012840; FUN_180012840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012840(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 ******ppppppuVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 ******_Memory;
  undefined8 *******pppppppuVar14;
  undefined1 auStackY_d8 [32];
  int local_a8 [2];
  longlong local_a0 [3];
  int local_88 [2];
  undefined8 *****local_80;
  undefined8 *****pppppuStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined8 ******local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_18007d140 ^ (ulonglong)auStackY_d8;
  bVar5 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,param_2);
  plVar11 = (longlong *)0x0;
  if (bVar5) {
    plVar11 = param_2;
  }
  local_a8[0] = (**(code **)(*param_2 + 0x18))(param_2);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((*(uint *)(param_2 + 2) & *(uint *)param_1[1]) != 0) {
    return;
  }
  plVar7 = (longlong *)(*(longlong **)(*param_1 + 0x58))[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar3 = *(longlong **)(*param_1 + 0x58);
  while (cVar1 == '\0') {
    plVar13 = plVar7;
    if ((int)plVar7[4] < local_a8[0]) {
      plVar13 = plVar7 + 2;
      plVar7 = plVar3;
    }
    plVar3 = plVar7;
    plVar7 = (longlong *)*plVar13;
    cVar1 = *(char *)(*plVar13 + 0x19);
  }
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    return;
  }
  if (local_a8[0] < (int)plVar3[4]) {
    return;
  }
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)world_exref + 0x11b408) + (longlong)local_a8[0] * 8);
  uVar8 = (ulonglong)(short)plVar11[0x17];
  if ((((short)plVar11[0x17] < 0) ||
      ((ulonglong)(*(longlong *)(lVar2 + 0x660) - *(longlong *)(lVar2 + 0x658) >> 3) <= uVar8)) ||
     (uVar9 = FUN_18001c310(*(longlong *)(*(longlong *)(lVar2 + 0x658) + uVar8 * 8)),
     (char)uVar9 == '\0')) {
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0xf;
    local_60 = (undefined8 *******)0x0;
  }
  else {
    FUN_18000ebd0(&local_60,*(undefined8 **)(*(longlong *)(lVar2 + 0x658) + uVar8 * 8));
  }
  uVar9 = local_48;
  uVar8 = local_50;
  ppppppuVar4 = local_60;
  local_80 = (undefined8 *****)0x0;
  pppppuStack_78 = (undefined8 ******)0x0;
  local_70 = 0;
  uStack_68 = 0;
  pppppppuVar14 = &local_60;
  if (0xf < local_48) {
    pppppppuVar14 = (undefined8 *******)local_60;
  }
  local_88[0] = local_a8[0];
  if (0x7fffffffffffffff < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  if (local_50 < 0x10) {
    uStack_68 = 0xf;
    local_80 = *pppppppuVar14;
    pppppuStack_78 = pppppppuVar14[1];
    local_70 = local_50;
  }
  else {
    uVar10 = local_50 | 0xf;
    uVar12 = 0x7fffffffffffffff;
    if ((uVar10 < 0x8000000000000000) && (uVar12 = uVar10, uVar10 < 0x16)) {
      uVar12 = 0x16;
    }
    local_80 = (undefined8 *****)FUN_1800039c0(uVar12 + 1);
    local_70 = uVar8;
    uStack_68 = uVar12;
    memcpy(local_80,pppppppuVar14,uVar8 + 1);
  }
  if (uVar8 != 0) {
    lVar2 = *param_1;
    plVar11 = FUN_180006de0((longlong *)(lVar2 + 0x18),local_a0,local_88);
    if ((*(char *)(plVar11[2] + 0x19) == '\0') &&
       (uVar12 = FUN_180012e00(lVar2 + 0x18,local_88,(int *)(plVar11[2] + 0x20)),
       (char)uVar12 == '\0')) {
      iVar6 = (**(code **)(*param_2 + 0x478))(param_2);
      plVar11 = FUN_180011c90((longlong *)(*param_1 + 0x38),local_88);
      goto LAB_180012ab1;
    }
  }
  if (uVar8 != 0) {
    iVar6 = (**(code **)(*param_2 + 0x478))(param_2);
    plVar11 = FUN_180011c90((longlong *)(*param_1 + 0x38),local_88);
    *(int *)plVar11 = (int)*plVar11 + iVar6;
  }
  iVar6 = (**(code **)(*param_2 + 0x478))(param_2);
  plVar11 = FUN_180011730((longlong *)(*param_1 + 0x28),local_a8);
LAB_180012ab1:
  *(int *)plVar11 = (int)*plVar11 + iVar6;
  if (0xf < uStack_68) {
    _Memory = (undefined8 ******)local_80;
    if ((0xfff < uStack_68 + 1) &&
       (_Memory = (undefined8 ******)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  local_70 = _DAT_180069000;
  uStack_68 = _UNK_180069008;
  local_80 = (undefined8 *****)((ulonglong)local_80 & 0xffffffffffffff00);
  if (0xf < uVar9) {
    pppppppuVar14 = (undefined8 *******)ppppppuVar4;
    if ((0xfff < uVar9 + 1) &&
       (pppppppuVar14 = (undefined8 *******)ppppppuVar4[-1],
       0x1f < (ulonglong)((longlong)ppppppuVar4 + (-8 - (longlong)pppppppuVar14)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppppuVar14);
  }
  return;
}



/* RVA 0x12b90; VA 180012b90; FUN_180012b90 */

bool FUN_180012b90(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [2];
  int local_res18 [4];
  
  plVar3 = (longlong *)*param_1;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  plVar2 = FUN_180011730(plVar3,local_res10);
  lVar1 = *plVar2;
  plVar3 = FUN_180011730(plVar3,local_res18);
  return (int)lVar1 < (int)*plVar3;
}



/* RVA 0x12be0; VA 180012be0; FUN_180012be0 */

undefined8 FUN_180012be0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong local_res10 [3];
  
  local_res10[0] = param_2;
  plVar1 = FUN_180011a60((longlong *)*param_1,local_res10);
  plVar1 = (longlong *)*plVar1;
  plVar2 = (longlong *)plVar1[1];
  if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
    plVar3 = plVar1;
    do {
      plVar1 = plVar2;
      if (*(int *)((longlong)plVar2 + 0x1c) < *(int *)param_1[1]) {
        plVar2 = plVar2 + 2;
        plVar1 = plVar3;
      }
      plVar2 = (longlong *)*plVar2;
      plVar3 = plVar1;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar1 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar1 + 0x1c) <= *(int *)param_1[1])) {
    return 1;
  }
  return 0;
}



/* RVA 0x12c50; VA 180012c50; FUN_180012c50 */

void FUN_180012c50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_2 + 0x11));
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_2 + 0xf));
    cVar1 = *(char *)((longlong)*(longlong **)(param_2[0xd] + 8) + 0x19);
    plVar3 = *(longlong **)(param_2[0xd] + 8);
    while (cVar1 == '\0') {
      FUN_180006620(param_2 + 0xd,param_2 + 0xd,(longlong *)plVar3[2]);
      plVar2 = (longlong *)*plVar3;
      free(plVar3);
      plVar3 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    free((void *)param_2[0xd]);
    FUN_1800063d0(param_2 + 0xb,param_2 + 0xb,*(longlong **)(param_2[0xb] + 8));
    free((void *)param_2[0xb]);
    FUN_1800064d0(param_2 + 7,param_2 + 7,*(longlong **)(param_2[7] + 8));
    free((void *)param_2[7]);
    cVar1 = *(char *)((longlong)*(longlong **)(param_2[5] + 8) + 0x19);
    plVar3 = *(longlong **)(param_2[5] + 8);
    while (cVar1 == '\0') {
      FUN_180006370(param_2 + 5,param_2 + 5,(longlong *)plVar3[2]);
      plVar2 = (longlong *)*plVar3;
      free(plVar3);
      plVar3 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    free((void *)param_2[5]);
    FUN_1800064d0(param_2 + 3,param_2 + 3,*(longlong **)(param_2[3] + 8));
    free((void *)param_2[3]);
    cVar1 = *(char *)((longlong)*(longlong **)(*param_2 + 8) + 0x19);
    plVar3 = *(longlong **)(*param_2 + 8);
    while (cVar1 == '\0') {
      FUN_180006370(param_2,param_2,(longlong *)plVar3[2]);
      plVar2 = (longlong *)*plVar3;
      free(plVar3);
      plVar3 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    free((void *)*param_2);
    free(param_2);
  }
  return;
}



/* RVA 0x12e00; VA 180012e00; FUN_180012e00 */

/* WARNING: Removing unreachable block (ram,0x000180012e86) */

ulonglong FUN_180012e00(undefined8 param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 extraout_var;
  int iVar5;
  int *_Buf1;
  int *_Buf2;
  ulonglong _Size;
  
  if (*param_2 != *param_3) {
    bVar3 = 0xff;
    if (*param_3 <= *param_2) {
      bVar3 = 0;
    }
    return (ulonglong)(bVar3 >> 7);
  }
  _Buf2 = param_3 + 2;
  _Buf1 = param_2 + 2;
  uVar1 = *(ulonglong *)(param_3 + 6);
  if (0xf < *(ulonglong *)(param_3 + 8)) {
    _Buf2 = *(int **)_Buf2;
  }
  uVar2 = *(ulonglong *)(param_2 + 6);
  if (0xf < *(ulonglong *)(param_2 + 8)) {
    _Buf1 = *(int **)_Buf1;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar4 = memcmp(_Buf1,_Buf2,_Size);
  iVar5 = iVar4;
  if (iVar4 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    iVar5 = 1;
    if (uVar2 <= uVar1) {
      return CONCAT44(extraout_var,iVar4) & 0xffffffffffffff00;
    }
  }
  bVar3 = 0xff;
  if (-1 < iVar5) {
    bVar3 = 0;
  }
  return (ulonglong)(bVar3 >> 7);
}



/* RVA 0x12ef0; VA 180012ef0; FUN_180012ef0 */

longlong * FUN_180012ef0(longlong *param_1,uint param_2)

{
  FUN_180017da0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x12f30; VA 180012f30; FUN_180012f30 */

function_identity_base * FUN_180012f30(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x12f80; VA 180012f80; FUN_180012f80 */

function_identity_base * FUN_180012f80(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x12fd0; VA 180012fd0; FUN_180012fd0 */

function_identity_base * FUN_180012fd0(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13020; VA 180013020; FUN_180013020 */

function_identity_base * FUN_180013020(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13070; VA 180013070; FUN_180013070 */

function_identity_base * FUN_180013070(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x130c0; VA 1800130c0; FUN_1800130c0 */

function_identity_base * FUN_1800130c0(function_identity_base *param_1,uint param_2)

{
  FUN_180017da0((longlong *)(param_1 + 0x48));
  FUN_180017da0((longlong *)(param_1 + 0x20));
  DFHack::function_identity_base::~function_identity_base(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13110; VA 180013110; FUN_180013110 */

void * FUN_180013110(void *param_1,uint param_2)

{
  FUN_180006290((longlong *)((longlong)param_1 + 8),(longlong *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13150; VA 180013150; `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: void * __ptr64 __cdecl MRECmpImpl::`scalar deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MRECmpImpl::_scalar_deleting_destructor_(MRECmpImpl *this,uint param_1)

{
  FUN_180010e00((longlong *)(this + 8));
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* RVA 0x13190; VA 180013190; `scalar_deleting_destructor' */

/* Library Function - Single Match
    public: void * __ptr64 __cdecl MRECmpImpl::`scalar deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MRECmpImpl::_scalar_deleting_destructor_(MRECmpImpl *this,uint param_1)

{
  FUN_180017da0((longlong *)(this + 8));
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}



/* RVA 0x131d0; VA 1800131d0; FUN_1800131d0 */

void * FUN_1800131d0(void *param_1,uint param_2)

{
  char cVar1;
  longlong *_Memory;
  longlong *plVar2;
  
  _Memory = *(longlong **)(*(longlong *)((longlong)param_1 + 8) + 8);
  cVar1 = *(char *)((longlong)_Memory + 0x19);
  while (cVar1 == '\0') {
    FUN_180006310((longlong)param_1 + 8,(longlong)param_1 + 8,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(*(void **)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13260; VA 180013260; FUN_180013260 */

void * FUN_180013260(void *param_1,uint param_2)

{
  FUN_180006290((longlong *)((longlong)param_1 + 8),(longlong *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x132a0; VA 1800132a0; FUN_1800132a0 */

void * FUN_1800132a0(void *param_1,uint param_2)

{
  char cVar1;
  longlong *_Memory;
  longlong *plVar2;
  
  _Memory = *(longlong **)(*(longlong *)((longlong)param_1 + 8) + 8);
  cVar1 = *(char *)((longlong)_Memory + 0x19);
  while (cVar1 == '\0') {
    FUN_180006310((longlong)param_1 + 8,(longlong)param_1 + 8,(longlong *)_Memory[2]);
    plVar2 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free(*(void **)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13330; VA 180013330; FUN_180013330 */

longlong * FUN_180013330(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_1 + 0x11));
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)(param_1 + 0xf));
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0xd] + 8) + 0x19);
  plVar3 = *(longlong **)(param_1[0xd] + 8);
  while (cVar1 == '\0') {
    FUN_180006620(param_1 + 0xd,param_1 + 0xd,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)param_1[0xd]);
  FUN_1800063d0(param_1 + 0xb,param_1 + 0xb,*(longlong **)(param_1[0xb] + 8));
  free((void *)param_1[0xb]);
  FUN_1800064d0(param_1 + 7,param_1 + 7,*(longlong **)(param_1[7] + 8));
  free((void *)param_1[7]);
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[5] + 8) + 0x19);
  plVar3 = *(longlong **)(param_1[5] + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1 + 5,param_1 + 5,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)param_1[5]);
  FUN_1800064d0(param_1 + 3,param_1 + 3,*(longlong **)(param_1[3] + 8));
  free((void *)param_1[3]);
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    free(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  free((void *)*param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x134d0; VA 1800134d0; FUN_1800134d0 */

PersistentDataItem * FUN_1800134d0(PersistentDataItem *param_1,uint param_2)

{
  DFHack::PersistentDataItem::~PersistentDataItem(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13510; VA 180013510; FUN_180013510 */

PluginCommand * FUN_180013510(PluginCommand *param_1,uint param_2)

{
  DFHack::PluginCommand::~PluginCommand(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13550; VA 180013550; FUN_180013550 */

undefined8 * FUN_180013550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x135a0; VA 1800135a0; FUN_1800135a0 */

undefined8 * FUN_1800135a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x135f0; VA 1800135f0; FUN_1800135f0 */

undefined8 * FUN_1800135f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}



/* RVA 0x13650; VA 180013650; FUN_180013650 */

void FUN_180013650(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_2 = *param_2 + 0x27;
  lVar1 = *(longlong *)(*param_1 + -8);
  if ((*param_1 - lVar1) - 8U < 0x20) {
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}



/* RVA 0x136b0; VA 1800136b0; FUN_1800136b0 */

void FUN_1800136b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x136e0; VA 1800136e0; FUN_1800136e0 */

void FUN_1800136e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13710; VA 180013710; FUN_180013710 */

void FUN_180013710(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x40);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13740; VA 180013740; FUN_180013740 */

void FUN_180013740(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13770; VA 180013770; FUN_180013770 */

void FUN_180013770(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x50);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x137a0; VA 1800137a0; FUN_1800137a0 */

void FUN_1800137a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x137d0; VA 1800137d0; FUN_1800137d0 */

void FUN_1800137d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x28);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13800; VA 180013800; FUN_180013800 */

void FUN_180013800(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13830; VA 180013830; FUN_180013830 */

void FUN_180013830(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180064554(0x20);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  return;
}



/* RVA 0x13860; VA 180013860; FUN_180013860 */

void FUN_180013860(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x20);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x13890; VA 180013890; FUN_180013890 */

void FUN_180013890(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x28);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x138c0; VA 1800138c0; FUN_1800138c0 */

void FUN_1800138c0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x38);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x138f0; VA 1800138f0; FUN_1800138f0 */

void FUN_1800138f0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x40);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x13920; VA 180013920; FUN_180013920 */

void FUN_180013920(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x50);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x13950; VA 180013950; FUN_180013950 */

void FUN_180013950(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x38);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x13980; VA 180013980; FUN_180013980 */

void FUN_180013980(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x28);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x139b0; VA 1800139b0; FUN_1800139b0 */

void FUN_1800139b0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x38);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x139e0; VA 1800139e0; FUN_1800139e0 */

void FUN_1800139e0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_180064554(0x20);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* RVA 0x13a20; VA 180013a20; FUN_180013a20 */

void FUN_180013a20(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 < 0x2000000000000000) {
    uVar1 = FUN_1800039c0(param_2 * 8);
    *param_1 = uVar1;
    param_1[1] = uVar1;
    param_1[2] = uVar1 + param_2 * 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800180c0();
}



/* RVA 0x13a70; VA 180013a70; FUN_180013a70 */

void FUN_180013a70(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 < 0x2000000000000000) {
    uVar1 = FUN_1800039c0(param_2 * 8);
    *param_1 = uVar1;
    param_1[1] = uVar1;
    param_1[2] = uVar1 + param_2 * 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x13c90; VA 180013c90; FUN_180013c90 */

void FUN_180013c90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



/* RVA 0x13d30; VA 180013d30; FUN_180013d30 */

void FUN_180013d30(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



/* RVA 0x13dd0; VA 180013dd0; FUN_180013dd0 */

void FUN_180013dd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Memory;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    if (lVar4 != lVar1) {
      plVar3 = (longlong *)(lVar4 + 8);
      do {
        FUN_180006290(plVar3,plVar3);
        lVar4 = lVar4 + 0x18;
        plVar3 = plVar3 + 3;
      } while (lVar4 != lVar1);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x18;
  param_1[2] = param_2 + param_4 * 0x18;
  return;
}



/* RVA 0x13ee0; VA 180013ee0; FUN_180013ee0 */

void FUN_180013ee0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  PluginCommand *pPVar1;
  void *pvVar2;
  longlong lVar3;
  PluginCommand *this;
  void *_Memory;
  
  this = (PluginCommand *)*param_1;
  if (this != (PluginCommand *)0x0) {
    pPVar1 = (PluginCommand *)param_1[1];
    for (; this != pPVar1; this = this + 0x78) {
      DFHack::PluginCommand::~PluginCommand(this);
    }
    pvVar2 = (void *)*param_1;
    lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - (longlong)pvVar2),8) +
            (param_1[2] - (longlong)pvVar2);
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((lVar3 >> 6) - (lVar3 >> 0x3f)) * 0x78)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x78 + param_2;
  param_1[2] = param_4 * 0x78 + param_2;
  return;
}



/* RVA 0x13fd0; VA 180013fd0; FUN_180013fd0 */

void FUN_180013fd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 4) {
      FUN_180017da0(plVar3);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



/* RVA 0x140a0; VA 1800140a0; FUN_1800140a0 */

void FUN_1800140a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x666666666666666) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x140c0; VA 1800140c0; FUN_1800140c0 */

void FUN_1800140c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x492492492492492) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x140e0; VA 1800140e0; FUN_1800140e0 */

void FUN_1800140e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x3ffffffffffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x14100; VA 180014100; FUN_180014100 */

void FUN_180014100(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x492492492492492) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x14120; VA 180014120; FUN_180014120 */

void FUN_180014120(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x333333333333333) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x14140; VA 180014140; FUN_180014140 */

void FUN_180014140(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x492492492492492) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x14160; VA 180014160; FUN_180014160 */

void FUN_180014160(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x666666666666666) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x14180; VA 180014180; FUN_180014180 */

void FUN_180014180(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x7ffffffffffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x141a0; VA 1800141a0; FUN_1800141a0 */

void FUN_1800141a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0x7ffffffffffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180017a10();
}



/* RVA 0x141c0; VA 1800141c0; FUN_1800141c0 */

void FUN_1800141c0(longlong param_1,ulonglong param_2)

{
  if (param_2 <= *(ulonglong *)(param_1 + 0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018140();
}



/* RVA 0x14240; VA 180014240; FUN_180014240 */

void FUN_180014240(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < param_3 + 1U) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x142a0; VA 1800142a0; FUN_1800142a0 */

longlong FUN_1800142a0(undefined8 *param_1,undefined8 *param_2)

{
  size_t *psVar1;
  size_t _Size;
  int iVar2;
  uint7 uVar3;
  undefined4 extraout_var;
  
  psVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar3 = (uint7)(*psVar1 >> 8);
  if (_Size != *psVar1) {
    return (ulonglong)uVar3 << 8;
  }
  if (_Size == 0) {
    return CONCAT71(uVar3,1);
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
}



/* RVA 0x142f0; VA 1800142f0; FUN_1800142f0 */

bool FUN_1800142f0(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size != sVar2) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_2,_Size);
  return iVar1 == 0;
}



/* RVA 0x14360; VA 180014360; FUN_180014360 */

longlong FUN_180014360(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar6 = (longlong *)*param_2;
  lVar8 = 0;
  plVar2 = (longlong *)param_2[1];
  plVar3 = plVar6;
  while (plVar3 != plVar2) {
    plVar7 = (longlong *)plVar3[2];
    lVar8 = lVar8 + 1;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar3 = plVar7;
      plVar7 = (longlong *)*plVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar3 = plVar7;
        plVar7 = (longlong *)*plVar7;
      }
    }
    else {
      cVar1 = *(char *)(plVar3[1] + 0x19);
      plVar5 = (longlong *)plVar3[1];
      plVar7 = plVar3;
      while ((plVar3 = plVar5, cVar1 == '\0' && (plVar7 == (longlong *)plVar3[2]))) {
        cVar1 = *(char *)(plVar3[1] + 0x19);
        plVar5 = (longlong *)plVar3[1];
        plVar7 = plVar3;
      }
    }
  }
  if ((plVar6 == *(longlong **)*param_1) && (*(char *)((longlong)plVar2 + 0x19) != '\0')) {
    FUN_180018cd0(param_1);
  }
  else {
    while (plVar6 != plVar2) {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar7 = plVar3;
        plVar5 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
        plVar3 = (longlong *)*plVar3;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
        while (cVar1 == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar7 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x19);
          plVar5 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar4 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar3 = plVar4;
        }
      }
      plVar6 = FUN_180014a00(param_1,plVar6);
      free(plVar6);
      plVar6 = plVar7;
    }
  }
  return lVar8;
}



/* RVA 0x144e0; VA 1800144e0; FUN_1800144e0 */

longlong FUN_1800144e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar7 = (longlong *)*param_2;
  lVar9 = 0;
  plVar2 = (longlong *)param_2[1];
  plVar4 = plVar7;
  while (plVar4 != plVar2) {
    plVar8 = (longlong *)plVar4[2];
    lVar9 = lVar9 + 1;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar4 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar6 = (longlong *)plVar4[1];
      plVar8 = plVar4;
      while ((plVar4 = plVar6, cVar1 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar6 = (longlong *)plVar4[1];
        plVar8 = plVar4;
      }
    }
  }
  puVar3 = (undefined8 *)*param_1;
  if ((plVar7 == (longlong *)*puVar3) && (*(char *)((longlong)plVar2 + 0x19) != '\0')) {
    FUN_1800064d0(param_1,param_1,(longlong *)puVar3[1]);
    puVar3[1] = puVar3;
    *puVar3 = puVar3;
    puVar3[2] = puVar3;
    param_1[1] = 0;
  }
  else {
    while (plVar7 != plVar2) {
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        plVar6 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar8 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar8 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar6 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar6 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar5 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar6 = (longlong *)plVar5[1];
          plVar4 = plVar5;
        }
      }
      plVar7 = FUN_180014df0(param_1,plVar7);
      FUN_180017da0(plVar7 + 5);
      free(plVar7);
      plVar7 = plVar8;
    }
  }
  return lVar9;
}



/* RVA 0x14690; VA 180014690; FUN_180014690 */

longlong * FUN_180014690(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_2 == *(longlong **)*param_1) && (*(char *)((longlong)param_3 + 0x19) != '\0')) {
    FUN_180018cd0(param_1);
    return param_3;
  }
  while (param_2 != param_3) {
    plVar4 = (longlong *)param_2[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar5 = plVar4;
      plVar2 = (longlong *)*plVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
      plVar4 = (longlong *)*plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
      while (cVar1 == '\0') {
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(param_2[1] + 0x19);
      plVar2 = (longlong *)param_2[1];
      plVar4 = param_2;
      while ((plVar5 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar2 = (longlong *)plVar5[1];
        plVar4 = plVar5;
      }
      cVar1 = *(char *)(param_2[1] + 0x19);
      plVar2 = (longlong *)param_2[1];
      plVar4 = param_2;
      while ((plVar3 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar3[2]))) {
        cVar1 = *(char *)(plVar3[1] + 0x19);
        plVar2 = (longlong *)plVar3[1];
        plVar4 = plVar3;
      }
    }
    plVar4 = FUN_180014a00(param_1,param_2);
    free(plVar4);
    param_2 = plVar5;
  }
  return param_3;
}



/* RVA 0x147a0; VA 1800147a0; FUN_1800147a0 */

longlong * FUN_1800147a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_2[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar4 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar2 = (longlong *)param_2[1];
    plVar3 = param_2;
    while ((plVar4 = plVar2, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = (longlong *)plVar4[1];
      plVar3 = plVar4;
    }
  }
  plVar3 = FUN_180014a00(param_1,param_2);
  free(plVar3);
  return plVar4;
}



/* RVA 0x14810; VA 180014810; FUN_180014810 */

longlong * FUN_180014810(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  if ((param_2 == (longlong *)*plVar4) && (*(char *)((longlong)param_3 + 0x19) != '\0')) {
    FUN_1800064d0(param_1,param_1,(longlong *)plVar4[1]);
    plVar4[1] = (longlong)plVar4;
    *plVar4 = (longlong)plVar4;
    plVar4[2] = (longlong)plVar4;
    param_1[1] = 0;
  }
  else {
    while (param_2 != param_3) {
      plVar4 = (longlong *)param_2[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar5 = plVar4;
        plVar2 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar4 + 0x19);
        while (cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar2 = (longlong *)param_2[1];
        plVar4 = param_2;
        while ((plVar5 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar2 = (longlong *)plVar5[1];
          plVar4 = plVar5;
        }
        cVar1 = *(char *)(param_2[1] + 0x19);
        plVar2 = (longlong *)param_2[1];
        plVar4 = param_2;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar4 == (longlong *)plVar3[2]))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar4 = plVar3;
        }
      }
      plVar4 = FUN_180014df0(param_1,param_2);
      FUN_180017da0(plVar4 + 5);
      free(plVar4);
      param_2 = plVar5;
    }
  }
  return param_3;
}



/* RVA 0x14940; VA 180014940; FUN_180014940 */

longlong * FUN_180014940(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_2[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar4 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar2 = (longlong *)param_2[1];
    plVar3 = param_2;
    while ((plVar4 = plVar2, cVar1 == '\0' && (plVar3 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = (longlong *)plVar4[1];
      plVar3 = plVar4;
    }
  }
  plVar3 = FUN_180014df0(param_1,param_2);
  FUN_180017da0(plVar3 + 5);
  free(plVar3);
  return plVar4;
}



/* RVA 0x14a00; VA 180014a00; FUN_180014a00 */

longlong * FUN_180014a00(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar6 = param_2 + 2;
  plVar5 = (longlong *)*plVar6;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar4 = plVar5;
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar2 = param_2;
    while ((plVar4 = plVar7, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar2 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar2 = (longlong *)*param_2;
  plVar7 = plVar5;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
      (plVar7 = plVar2, *(char *)((longlong)plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar2[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar5 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar5 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar5;
      }
      *plVar5 = (longlong)plVar7;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      plVar6 = (longlong *)*plVar8;
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar4;
      }
      else {
        plVar6[2] = (longlong)plVar4;
      }
    }
    lVar3 = plVar4[3];
    plVar4[1] = *plVar8;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar3;
  }
  else {
    plVar5 = (longlong *)*plVar8;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar5 == param_2) {
      *plVar5 = (longlong)plVar7;
    }
    else {
      plVar5[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar5;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar4 = (longlong *)*plVar7;
        plVar6 = plVar7;
        while (plVar2 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar3 = *param_1;
    if (*(longlong **)(lVar3 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar6 = (longlong *)plVar7[2];
        plVar4 = plVar7;
        while (plVar2 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar2[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar4 = plVar2;
        }
        *(longlong **)(lVar3 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar5;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if ((plVar7 != *(longlong **)(*param_1 + 8)) && (plVar6 = plVar7, (char)plVar7[3] == '\x01')) {
      do {
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar7;
        if (plVar6 == plVar5) {
          plVar5 = (longlong *)plVar7[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar7[2];
            *(undefined1 *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar7;
            }
            plVar4 = plVar7 + 1;
            plVar5[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
              *plVar5 = (longlong)plVar7;
              *plVar4 = (longlong)plVar5;
              plVar5 = (longlong *)plVar7[2];
            }
            else {
              plVar2 = (longlong *)*plVar4;
              if (plVar7 == (longlong *)*plVar2) {
                *plVar2 = (longlong)plVar5;
                *plVar5 = (longlong)plVar7;
                *plVar4 = (longlong)plVar5;
                plVar5 = (longlong *)plVar7[2];
              }
              else {
                plVar2[2] = (longlong)plVar5;
                *plVar5 = (longlong)plVar7;
                *plVar4 = (longlong)plVar5;
                plVar5 = (longlong *)plVar7[2];
              }
            }
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                FUN_180017630(param_1,plVar5);
                plVar5 = (longlong *)plVar7[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar7[3];
              *(undefined1 *)(plVar7 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180016e60(param_1,(longlong)plVar7);
              plVar7 = plVar6;
              break;
            }
LAB_180014d5e:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar3 = *plVar7;
            *(undefined1 *)(plVar7 + 3) = 0;
            *plVar7 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar7;
            }
            plVar5 = plVar7 + 1;
            *(longlong *)(lVar3 + 8) = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
              *(longlong **)(lVar3 + 0x10) = plVar7;
              *plVar5 = lVar3;
              plVar5 = (longlong *)*plVar7;
            }
            else {
              plVar4 = (longlong *)*plVar5;
              if (plVar7 == (longlong *)plVar4[2]) {
                plVar4[2] = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar7;
                *plVar5 = lVar3;
                plVar5 = (longlong *)*plVar7;
              }
              else {
                *plVar4 = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar7;
                *plVar5 = lVar3;
                plVar5 = (longlong *)*plVar7;
              }
            }
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_180014d5e;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180016e60(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar7;
            }
            *(char *)(plVar5 + 3) = (char)plVar7[3];
            *(undefined1 *)(plVar7 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180017630(param_1,plVar7);
            plVar7 = plVar6;
            break;
          }
        }
        if ((plVar7 == *(longlong **)(*param_1 + 8)) ||
           (plVar6 = plVar7, plVar5 = (longlong *)plVar7[1], (char)plVar7[3] != '\x01')) break;
      } while( true );
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



/* RVA 0x14df0; VA 180014df0; FUN_180014df0 */

longlong * FUN_180014df0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar6 = param_2 + 2;
  plVar5 = (longlong *)*plVar6;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar4 = plVar5;
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar2 = param_2;
    while ((plVar4 = plVar7, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar2 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar2 = (longlong *)*param_2;
  plVar7 = plVar5;
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
      (plVar7 = plVar2, *(char *)((longlong)plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar2[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar5 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar5 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar5;
      }
      *plVar5 = (longlong)plVar7;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      plVar6 = (longlong *)*plVar8;
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar4;
      }
      else {
        plVar6[2] = (longlong)plVar4;
      }
    }
    lVar3 = plVar4[3];
    plVar4[1] = *plVar8;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar3;
  }
  else {
    plVar5 = (longlong *)*plVar8;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar5 == param_2) {
      *plVar5 = (longlong)plVar7;
    }
    else {
      plVar5[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar5;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar4 = (longlong *)*plVar7;
        plVar6 = plVar7;
        while (plVar2 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar2;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar3 = *param_1;
    if (*(longlong **)(lVar3 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar6 = (longlong *)plVar7[2];
        plVar4 = plVar7;
        while (plVar2 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar2[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar4 = plVar2;
        }
        *(longlong **)(lVar3 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar5;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if ((plVar7 != *(longlong **)(*param_1 + 8)) && (plVar6 = plVar7, (char)plVar7[3] == '\x01')) {
      do {
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar7;
        if (plVar6 == plVar5) {
          plVar5 = (longlong *)plVar7[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar7[2];
            *(undefined1 *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar7;
            }
            plVar4 = plVar7 + 1;
            plVar5[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
              *plVar5 = (longlong)plVar7;
              *plVar4 = (longlong)plVar5;
              plVar5 = (longlong *)plVar7[2];
            }
            else {
              plVar2 = (longlong *)*plVar4;
              if (plVar7 == (longlong *)*plVar2) {
                *plVar2 = (longlong)plVar5;
                *plVar5 = (longlong)plVar7;
                *plVar4 = (longlong)plVar5;
                plVar5 = (longlong *)plVar7[2];
              }
              else {
                plVar2[2] = (longlong)plVar5;
                *plVar5 = (longlong)plVar7;
                *plVar4 = (longlong)plVar5;
                plVar5 = (longlong *)plVar7[2];
              }
            }
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                FUN_180017750(param_1,plVar5);
                plVar5 = (longlong *)plVar7[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar7[3];
              *(undefined1 *)(plVar7 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180016f80(param_1,(longlong)plVar7);
              plVar7 = plVar6;
              break;
            }
LAB_18001514e:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar3 = *plVar7;
            *(undefined1 *)(plVar7 + 3) = 0;
            *plVar7 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar7;
            }
            plVar5 = plVar7 + 1;
            *(longlong *)(lVar3 + 8) = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
              *(longlong **)(lVar3 + 0x10) = plVar7;
              *plVar5 = lVar3;
              plVar5 = (longlong *)*plVar7;
            }
            else {
              plVar4 = (longlong *)*plVar5;
              if (plVar7 == (longlong *)plVar4[2]) {
                plVar4[2] = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar7;
                *plVar5 = lVar3;
                plVar5 = (longlong *)*plVar7;
              }
              else {
                *plVar4 = lVar3;
                *(longlong **)(lVar3 + 0x10) = plVar7;
                *plVar5 = lVar3;
                plVar5 = (longlong *)*plVar7;
              }
            }
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_18001514e;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180016f80(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar7;
            }
            *(char *)(plVar5 + 3) = (char)plVar7[3];
            *(undefined1 *)(plVar7 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180017750(param_1,plVar7);
            plVar7 = plVar6;
            break;
          }
        }
        if ((plVar7 == *(longlong **)(*param_1 + 8)) ||
           (plVar6 = plVar7, plVar5 = (longlong *)plVar7[1], (char)plVar7[3] != '\x01')) break;
      } while( true );
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



/* RVA 0x15860; VA 180015860; FUN_180015860 */

longlong * FUN_180015860(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_180015a9d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_180015a9d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x15ac0; VA 180015ac0; FUN_180015ac0 */

longlong * FUN_180015ac0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_180015cfd:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_180015cfd;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x15d20; VA 180015d20; FUN_180015d20 */

longlong * FUN_180015d20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_180015f5d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_180015f5d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x15f80; VA 180015f80; FUN_180015f80 */

longlong * FUN_180015f80(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_1800161bd:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_1800161bd;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x161e0; VA 1800161e0; FUN_1800161e0 */

longlong * FUN_1800161e0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_18001641d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_18001641d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x16440; VA 180016440; FUN_180016440 */

longlong * FUN_180016440(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_18001667d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_18001667d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x166a0; VA 1800166a0; FUN_1800166a0 */

longlong * FUN_1800166a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_1800168dd:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_1800168dd;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x16900; VA 180016900; FUN_180016900 */

longlong * FUN_180016900(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_180016b3d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_180016b3d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x16b60; VA 180016b60; FUN_180016b60 */

longlong * FUN_180016b60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_180016d9d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_180016d9d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}



/* RVA 0x16e60; VA 180016e60; FUN_180016e60 */

void FUN_180016e60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



/* RVA 0x16f80; VA 180016f80; FUN_180016f80 */

void FUN_180016f80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



/* RVA 0x17160; VA 180017160; FUN_180017160 */

void * FUN_180017160(wchar_t *param_1)

{
  size_t sVar1;
  void *_Dst;
  
  sVar1 = wcslen(param_1);
  _Dst = calloc(sVar1 + 1,2);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,param_1,(sVar1 + 1) * 2);
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}



/* RVA 0x17630; VA 180017630; FUN_180017630 */

void FUN_180017630(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



/* RVA 0x17750; VA 180017750; FUN_180017750 */

void FUN_180017750(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



/* RVA 0x179f0; VA 1800179f0; FUN_1800179f0 */

void FUN_1800179f0(void)

{
  undefined8 local_28 [5];
  
  FUN_18000ff20(local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_180079f88);
}



/* RVA 0x17a10; VA 180017a10; FUN_180017a10 */

void FUN_180017a10(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}



/* RVA 0x17a30; VA 180017a30; FUN_180017a30 */

void FUN_180017a30(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17aa0; VA 180017aa0; FUN_180017aa0 */

void FUN_180017aa0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17b10; VA 180017b10; FUN_180017b10 */

void FUN_180017b10(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17b80; VA 180017b80; FUN_180017b80 */

void FUN_180017b80(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Memory;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    if (lVar4 != lVar1) {
      plVar3 = (longlong *)(lVar4 + 8);
      do {
        FUN_180006290(plVar3,plVar3);
        lVar4 = lVar4 + 0x18;
        plVar3 = plVar3 + 3;
      } while (lVar4 != lVar1);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x18) * 0x18)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17c60; VA 180017c60; FUN_180017c60 */

void FUN_180017c60(longlong *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 4) {
      FUN_180017da0(plVar3);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17d00; VA 180017d00; FUN_180017d00 */

void FUN_180017d00(longlong *param_1)

{
  PersistentDataItem *pPVar1;
  void *pvVar2;
  void *_Memory;
  PersistentDataItem *this;
  
  this = (PersistentDataItem *)*param_1;
  if (this != (PersistentDataItem *)0x0) {
    pPVar1 = (PersistentDataItem *)param_1[1];
    for (; this != pPVar1; this = this + 0x10) {
      DFHack::PersistentDataItem::~PersistentDataItem(this);
    }
    pvVar2 = (void *)*param_1;
    _Memory = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffff0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* RVA 0x17da0; VA 180017da0; FUN_180017da0 */

void FUN_180017da0(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



/* RVA 0x18060; VA 180018060; FUN_180018060 */

void FUN_180018060(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}



/* RVA 0x18080; VA 180018080; FUN_180018080 */

void FUN_180018080(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x180a0; VA 1800180a0; FUN_1800180a0 */

void FUN_1800180a0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x180c0; VA 1800180c0; FUN_1800180c0 */

void FUN_1800180c0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x180e0; VA 1800180e0; FUN_1800180e0 */

void FUN_1800180e0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x18100; VA 180018100; FUN_180018100 */

void FUN_180018100(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x18120; VA 180018120; FUN_180018120 */

void FUN_180018120(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



/* RVA 0x18140; VA 180018140; FUN_180018140 */

void FUN_180018140(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* RVA 0x18170; VA 180018170; FUN_180018170 */

void FUN_180018170(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x4000000000000000) {
    FUN_1800039c0(param_2 * 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x181a0; VA 1800181a0; FUN_1800181a0 */

void FUN_1800181a0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x2000000000000000) {
    FUN_1800039c0(param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x181d0; VA 1800181d0; FUN_1800181d0 */

void FUN_1800181d0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x2000000000000000) {
    FUN_1800039c0(param_2 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18200; VA 180018200; FUN_180018200 */

void FUN_180018200(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x800000000000000) {
    FUN_1800039c0(param_2 << 5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18230; VA 180018230; FUN_180018230 */

void FUN_180018230(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x666666666666667) {
    FUN_1800039c0(param_2 * 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18260; VA 180018260; FUN_180018260 */

void FUN_180018260(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x492492492492493) {
    FUN_1800039c0(param_2 * 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18290; VA 180018290; FUN_180018290 */

void FUN_180018290(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x400000000000000) {
    FUN_1800039c0(param_2 << 6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x182c0; VA 1800182c0; FUN_1800182c0 */

void FUN_1800182c0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x333333333333334) {
    FUN_1800039c0(param_2 * 0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x182f0; VA 1800182f0; FUN_1800182f0 */

void FUN_1800182f0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x492492492492493) {
    FUN_1800039c0(param_2 * 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18320; VA 180018320; FUN_180018320 */

void FUN_180018320(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x666666666666667) {
    FUN_1800039c0(param_2 * 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18350; VA 180018350; FUN_180018350 */

void FUN_180018350(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x492492492492493) {
    FUN_1800039c0(param_2 * 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18380; VA 180018380; FUN_180018380 */

void FUN_180018380(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x800000000000000) {
    FUN_1800039c0(param_2 << 5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x183b0; VA 1800183b0; FUN_1800183b0 */

void FUN_1800183b0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    FUN_1800039c0(param_2 * 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x183e0; VA 1800183e0; FUN_1800183e0 */

void FUN_1800183e0(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x222222222222223) {
    FUN_1800039c0(param_2 * 0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18410; VA 180018410; FUN_180018410 */

void FUN_180018410(undefined8 param_1,ulonglong param_2)

{
  if (param_2 < 0x800000000000000) {
    FUN_1800039c0(param_2 << 5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800179f0();
}



/* RVA 0x18460; VA 180018460; FUN_180018460 */

longlong * FUN_180018460(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  byte local_res8;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    plVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar2 = (longlong *)*param_1;
    }
    memmove((void *)((longlong)plVar2 + lVar1),param_2,param_3);
    *(undefined1 *)((longlong)plVar2 + lVar1 + param_3) = 0;
    return param_1;
  }
  plVar2 = FUN_180008c70(param_1,param_3,(ulonglong)local_res8,param_2,param_3);
  return plVar2;
}



/* RVA 0x18510; VA 180018510; FUN_180018510 */

longlong * FUN_180018510(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *_Dst;
  ulonglong uVar4;
  void *_Memory;
  longlong *_Dst_00;
  ulonglong uVar5;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    uVar4 = param_3 | 0xf;
    uVar5 = 0x7fffffffffffffff;
    if (((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = uVar2 + (uVar2 >> 1), uVar5 = uVar4, uVar4 < uVar1)) {
      uVar5 = uVar1;
    }
    _Dst = (void *)FUN_1800039c0(uVar5 + 1);
    param_1[2] = param_3;
    param_1[3] = uVar5;
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    if (0xf < uVar2) {
      pvVar3 = (void *)*param_1;
      _Memory = pvVar3;
      if ((0xfff < uVar2 + 1) &&
         (_Memory = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    _Dst_00 = param_1;
    if (0xf < uVar2) {
      _Dst_00 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst_00,param_2,param_3);
    *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  }
  return param_1;
}



/* RVA 0x18630; VA 180018630; FUN_180018630 */

undefined8 FUN_180018630(color_ostream *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong **pplVar2;
  bool bVar3;
  Core *pCVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int *piVar8;
  char *_Str;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  char *local_18;
  undefined8 local_10;
  
  pCVar4 = DFHack::Core::getInstance();
  if (((*(longlong *)(pCVar4 + 0x1410) == 0) || (*(longlong *)(pCVar4 + 0x1408) == 0)) ||
     (bVar3 = DFHack::World::isFortressMode(0xffffffff), pplVar2 = DAT_18007d7b8, !bVar3)) {
    local_10 = 0x25;
    local_18 = "Cannot run {} without a loaded fort.\n";
    FUN_18000da20(param_1,(longlong *)&local_18,&plugin_name);
    return 1;
  }
  lVar1 = param_2[1];
  piVar8 = (int *)*param_2;
  if ((lVar1 - (longlong)piVar8 & 0xffffffffffffffe0U) == 0x20) {
    piVar5 = piVar8;
    if (0xf < *(ulonglong *)(piVar8 + 6)) {
      piVar5 = *(int **)piVar8;
    }
    if (*(longlong *)(piVar8 + 4) == 7) {
      iVar10 = *piVar5 + -0x6f6e7572;
      if ((iVar10 == 0) && (iVar10 = *(ushort *)(piVar5 + 1) - 0x636e, iVar10 == 0)) {
        iVar10 = *(byte *)((longlong)piVar5 + 6) - 0x65;
      }
      if (iVar10 == 0) {
        if (DAT_18007d7b8 == (longlong **)0x0) {
          return 0;
        }
        FUN_18001d470(DAT_18007d7b8,(longlong)param_1);
        return 0;
      }
    }
    piVar5 = piVar8;
    if (0xf < *(ulonglong *)(piVar8 + 6)) {
      piVar5 = *(int **)piVar8;
    }
    if (*(longlong *)(piVar8 + 4) == 6) {
      iVar10 = *piVar5 + -0x62616e65;
      if (iVar10 == 0) {
        iVar10 = *(ushort *)(piVar5 + 1) - 0x656c;
      }
      if (iVar10 == 0) {
        plugin_enable(param_1,1);
        return 0;
      }
      goto LAB_180018752;
    }
  }
  else {
LAB_180018752:
    if ((lVar1 - (longlong)piVar8 & 0xffffffffffffffe0U) != 0x20) {
      if ((lVar1 - (longlong)piVar8 & 0xffffffffffffffe0U) == 0x40) {
        plVar9 = (longlong *)(piVar8 + 4);
        if (0xf < *(ulonglong *)(piVar8 + 6)) {
          piVar8 = *(int **)piVar8;
        }
        if (*plVar9 == 7) {
          iVar10 = *piVar8 + -0x61666564;
          if ((iVar10 == 0) && (iVar10 = *(ushort *)(piVar8 + 1) - 0x6c75, iVar10 == 0)) {
            iVar10 = *(byte *)((longlong)piVar8 + 6) - 0x74;
          }
          if (iVar10 == 0) {
            if (DAT_18007d7b8 == (longlong **)0x0) {
              return 0;
            }
            _Str = (char *)(*param_2 + 0x20);
            if (0xf < *(ulonglong *)(*param_2 + 0x38)) {
              _Str = *(char **)_Str;
            }
            iVar10 = atoi(_Str);
            *(int *)(pplVar2 + 2) = iVar10;
            FUN_18001e140(DAT_18007d7b8);
            return 0;
          }
        }
      }
      goto LAB_18001884b;
    }
  }
  plVar9 = (longlong *)(piVar8 + 4);
  if (0xf < *(ulonglong *)(piVar8 + 6)) {
    piVar8 = *(int **)piVar8;
  }
  if (*plVar9 == 7) {
    iVar10 = *piVar8 + -0x61736964;
    if ((iVar10 == 0) && (iVar10 = *(ushort *)(piVar8 + 1) - 0x6c62, iVar10 == 0)) {
      iVar10 = *(byte *)((longlong)piVar8 + 6) - 0x65;
    }
    if (iVar10 == 0) {
      plugin_enable(param_1,0);
      return 0;
    }
  }
LAB_18001884b:
  lVar1 = param_2[1];
  plVar9 = (longlong *)*param_2;
  if (2 < (ulonglong)(lVar1 - (longlong)plVar9 >> 5)) {
    plVar6 = plVar9;
    if (0xf < (ulonglong)plVar9[3]) {
      plVar6 = (longlong *)*plVar9;
    }
    if (plVar9[2] == 9) {
      lVar11 = *plVar6 + -0x6c6f687365726874;
      if (lVar11 == 0) {
        lVar11 = (ulonglong)*(byte *)(plVar6 + 1) - 100;
      }
      if (lVar11 == 0) {
        if (DAT_18007d7b8 == (longlong **)0x0) {
          return 0;
        }
        uVar7 = FUN_18001eab0((longlong)param_1,param_2);
        return uVar7;
      }
    }
  }
  if (0x1f < (ulonglong)(lVar1 - (longlong)plVar9)) {
    if ((lVar1 - (longlong)plVar9 & 0xffffffffffffffe0U) != 0x20) {
      return 2;
    }
    plVar6 = plVar9 + 2;
    if (0xf < (ulonglong)plVar9[3]) {
      plVar9 = (longlong *)*plVar9;
    }
    if (*plVar6 != 6) {
      return 2;
    }
    iVar10 = (int)*plVar9 + -0x74617473;
    if (iVar10 == 0) {
      iVar10 = *(ushort *)((longlong)plVar9 + 4) - 0x7375;
    }
    if (iVar10 != 0) {
      return 2;
    }
  }
  FUN_180020bc0((longlong *)DAT_18007d7b8,(longlong)param_1);
  return 0;
}



/* RVA 0x18980; VA 180018980; autofarm_is_farm_excluded */

void autofarm_is_farm_excluded(uint param_1)

{
  FUN_18001bee0(DAT_18007d7b8,param_1);
  return;
}



/* RVA 0x18990; VA 180018990; FUN_180018990 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180018990(undefined8 param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [48];
  longlong local_68;
  longlong lStack_60;
  longlong local_58 [2];
  longlong *local_48;
  int local_40 [2];
  longlong local_38 [4];
  ulonglong local_18;
  
  puVar1 = DAT_18007d7b8;
  local_18 = DAT_18007d140 ^ (ulonglong)auStack_98;
  local_48 = param_3;
  local_40[0] = param_2;
  FUN_18000ebd0(local_38,param_3);
  plVar2 = FUN_180005db0(puVar1 + 3,local_58,local_40);
  local_68 = *plVar2;
  lStack_60 = plVar2[1];
  FUN_1800144e0(puVar1 + 3,&local_68);
  FUN_180017da0(local_38);
  FUN_18001e140(DAT_18007d7b8);
  FUN_180017da0(param_3);
  return;
}



/* RVA 0x18a50; VA 180018a50; FUN_180018a50 */

void FUN_180018a50(undefined8 param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)*DAT_18007d7b8;
  plVar2 = (longlong *)local_10[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  local_18 = local_10;
  plVar3 = plVar2;
  while (cVar1 == '\0') {
    if (*(int *)((longlong)plVar3 + 0x1c) < param_2) {
      plVar3 = plVar3 + 2;
    }
    else {
      local_18 = plVar3;
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') &&
         (param_2 < *(int *)((longlong)plVar3 + 0x1c))) {
        local_10 = plVar3;
      }
    }
    plVar3 = (longlong *)*plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar2 = (longlong *)*local_10;
  }
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  while (cVar1 == '\0') {
    if (param_2 < *(int *)((longlong)plVar2 + 0x1c)) {
      plVar3 = (longlong *)*plVar2;
      local_10 = plVar2;
    }
    else {
      plVar3 = (longlong *)plVar2[2];
    }
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  FUN_180014360(DAT_18007d7b8,(longlong *)&local_18);
  FUN_18001e140(DAT_18007d7b8);
  return;
}



/* RVA 0x18af0; VA 180018af0; autofarm_set_default_threshold */

void autofarm_set_default_threshold(undefined8 param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_18007d7b8 + 2) = param_2;
  FUN_18001e140(DAT_18007d7b8);
  return;
}



/* RVA 0x18b10; VA 180018b10; autofarm_set_farm_excluded */

void autofarm_set_farm_excluded(undefined8 param_1,uint param_2,char param_3)

{
  FUN_18001f740(DAT_18007d7b8,param_2,param_3);
  return;
}



/* RVA 0x18b20; VA 180018b20; FUN_180018b20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180018b20(undefined8 param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_18007d140 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  FUN_18001e950((longlong)DAT_18007d7b8,param_2,param_3,param_4);
  FUN_18001e140(DAT_18007d7b8);
  FUN_180017da0(param_3);
  return;
}



/* RVA 0x18b80; VA 180018b80; FUN_180018b80 */

void FUN_180018b80(undefined8 param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  plVar1 = FUN_180011730(DAT_18007d7b8,local_res10);
  *(undefined4 *)plVar1 = param_3;
  FUN_18001e140(DAT_18007d7b8);
  return;
}



/* RVA 0x18cd0; VA 180018cd0; FUN_180018cd0 */

void FUN_180018cd0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *_Memory;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  _Memory = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_180006370(param_1,param_1,(longlong *)_Memory[2]);
    plVar3 = (longlong *)*_Memory;
    free(_Memory);
    _Memory = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}



/* RVA 0x18d40; VA 180018d40; FUN_180018d40 */

void FUN_180018d40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800063d0(param_1,param_1,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}



/* RVA 0x18d80; VA 180018d80; FUN_180018d80 */

void FUN_180018d80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1800064d0(param_1,param_1,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}



/* RVA 0x18dd0; VA 180018dd0; FUN_180018dd0 */

uint FUN_180018dd0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong _Size;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = memcmp(param_1,param_2,_Size);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 0xffffffff;
    }
    uVar3 = (uint)(uVar1 < uVar2);
  }
  return uVar3;
}



/* RVA 0x18e40; VA 180018e40; FUN_180018e40 */

void * FUN_180018e40(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return param_1;
}



/* RVA 0x18ee0; VA 180018ee0; FUN_180018ee0 */

undefined8 FUN_180018ee0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_28 [4];
  
  plVar1 = FUN_180006de0(param_1,local_28,param_2);
  if (*(char *)(plVar1[2] + 0x19) == '\0') {
    uVar2 = FUN_180012e00(param_1,param_2,(int *)(plVar1[2] + 0x20));
    if ((char)uVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



/* RVA 0x18fb0; VA 180018fb0; FUN_180018fb0 */

void FUN_180018fb0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x20)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19010; VA 180019010; FUN_180019010 */

void FUN_180019010(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x28)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19070; VA 180019070; FUN_180019070 */

void FUN_180019070(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x190d0; VA 1800190d0; FUN_1800190d0 */

void FUN_1800190d0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x40)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19130; VA 180019130; FUN_180019130 */

void FUN_180019130(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x50)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19190; VA 180019190; FUN_180019190 */

void FUN_180019190(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x191f0; VA 1800191f0; FUN_1800191f0 */

void FUN_1800191f0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x28)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19250; VA 180019250; FUN_180019250 */

void FUN_180019250(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x192b0; VA 1800192b0; FUN_1800192b0 */

void FUN_1800192b0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x20)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19310; VA 180019310; FUN_180019310 */

void FUN_180019310(undefined8 param_1,void *param_2,ulonglong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < param_3) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19370; VA 180019370; FUN_180019370 */

void FUN_180019370(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 4)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x193d0; VA 1800193d0; FUN_1800193d0 */

void FUN_1800193d0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 8)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19430; VA 180019430; FUN_180019430 */

void FUN_180019430(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 8)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19490; VA 180019490; FUN_180019490 */

void FUN_180019490(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x20)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x194f0; VA 1800194f0; FUN_1800194f0 */

void FUN_1800194f0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x28)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19550; VA 180019550; FUN_180019550 */

void FUN_180019550(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x195b0; VA 1800195b0; FUN_1800195b0 */

void FUN_1800195b0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x40)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19610; VA 180019610; FUN_180019610 */

void FUN_180019610(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x50)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19670; VA 180019670; FUN_180019670 */

void FUN_180019670(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x196d0; VA 1800196d0; FUN_1800196d0 */

void FUN_1800196d0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x28)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19730; VA 180019730; FUN_180019730 */

void FUN_180019730(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x38)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19790; VA 180019790; FUN_180019790 */

void FUN_180019790(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x20)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x197f0; VA 1800197f0; FUN_1800197f0 */

void FUN_1800197f0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x18)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19850; VA 180019850; FUN_180019850 */

void FUN_180019850(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x78)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x198b0; VA 1800198b0; FUN_1800198b0 */

void FUN_1800198b0(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x20)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19910; VA 180019910; FUN_180019910 */

void FUN_180019910(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x10)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}



/* RVA 0x19a40; VA 180019a40; FUN_180019a40 */

void FUN_180019a40(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)*param_1;
  plVar1 = (longlong *)local_10[1];
  local_18 = local_10;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar2 = plVar1;
    do {
      if (*(int *)((longlong)plVar2 + 0x1c) < *param_2) {
        plVar2 = plVar2 + 2;
      }
      else {
        local_18 = plVar2;
        if ((*(char *)((longlong)local_10 + 0x19) != '\0') &&
           (*param_2 < *(int *)((longlong)plVar2 + 0x1c))) {
          local_10 = plVar2;
        }
      }
      plVar2 = (longlong *)*plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar1 = (longlong *)*local_10;
  }
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    do {
      if (*param_2 < *(int *)((longlong)plVar1 + 0x1c)) {
        plVar2 = (longlong *)*plVar1;
        local_10 = plVar1;
      }
      else {
        plVar2 = (longlong *)plVar1[2];
      }
      plVar1 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  FUN_180014360(param_1,(longlong *)&local_18);
  return;
}



/* RVA 0x19ae0; VA 180019ae0; FUN_180019ae0 */

void FUN_180019ae0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong local_28;
  longlong lStack_20;
  longlong local_18 [2];
  
  plVar1 = FUN_180005db0(param_1,local_18,param_2);
  local_28 = *plVar1;
  lStack_20 = plVar1[1];
  FUN_1800144e0(param_1,&local_28);
  return;
}



/* RVA 0x19b20; VA 180019b20; erase */

/* Library Function - Single Match
    public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct CHN
   * __ptr64> > > __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN *
   __ptr64> >::erase(class std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct CHN * __ptr64> > >) __ptr64
   
   Library: Visual Studio 2019 Release */

undefined8 * __thiscall
std::vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>::erase
          (vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> *this,undefined8 *param_2,
          void *param_3)

{
  memmove(param_3,(void *)((longlong)param_3 + 8),*(longlong *)(this + 8) - ((longlong)param_3 + 8))
  ;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + -8;
  *param_2 = param_3;
  return param_2;
}



/* RVA 0x19b70; VA 180019b70; FUN_180019b70 */

void FUN_180019b70(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  int local_res18 [2];
  undefined8 local_res20;
  
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res20,param_1);
  local_res18[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(local_res20,uVar2 & 0xffffffff);
  lua_pushnil(param_1);
  return;
}



/* RVA 0x19bf0; VA 180019bf0; FUN_180019bf0 */

void FUN_180019bf0(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res18,param_1);
  local_res10[0] = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 1,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(local_res18,uVar3 & 0xffffffff,uVar2 & 0xffffffff);
  lua_pushnil(param_1);
  return;
}



/* RVA 0x19cc0; VA 180019cc0; FUN_180019cc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019cc0(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_18007d140 ^ (ulonglong)auStack_98;
  local_70 = 0;
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_68,param_1);
  uStack_38 = 0;
  local_30 = _DAT_180069000;
  uStack_28 = _UNK_180069008;
  local_40 = 0;
  local_70 = 1;
  pcVar2 = lua_tolstring(param_1,param_2 + 1,&local_78);
  if (pcVar2 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_40,pcVar2,CONCAT44(local_78._4_4_,(int)local_78));
  local_78._0_4_ = 0;
  uVar3 = lua_tointegerx(param_1,param_2,(int *)&local_78);
  if ((int)local_78 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_60 = local_40;
  uStack_58 = uStack_38;
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_30 = _DAT_180069000;
  uStack_28 = _UNK_180069008;
  local_40 = local_40 & 0xffffffffffffff00;
  (*(code *)param_3)(local_68,uVar3 & 0xffffffff,&local_60);
  lua_pushnil(param_1);
  return;
}



/* RVA 0x19e10; VA 180019e10; FUN_180019e10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180019e10(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_18007d140 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_78,param_1);
  local_88._0_4_ = 0;
  uVar2 = lua_tointegerx(param_1,param_2 + 2,(int *)&local_88);
  if ((int)local_88 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
  }
  uStack_48 = 0;
  local_40 = _DAT_180069000;
  uStack_38 = _UNK_180069008;
  local_50 = 0;
  local_80 = 1;
  pcVar3 = lua_tolstring(param_1,param_2 + 1,&local_88);
  if (pcVar3 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_50,pcVar3,CONCAT44(local_88._4_4_,(int)local_88));
  local_88._0_4_ = 0;
  uVar4 = lua_tointegerx(param_1,param_2,(int *)&local_88);
  if ((int)local_88 == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  uStack_58 = uStack_38;
  local_40 = _DAT_180069000;
  uStack_38 = _UNK_180069008;
  local_50 = local_50 & 0xffffffffffffff00;
  (*(code *)param_3)(local_78,uVar4 & 0xffffffff,&local_70,uVar2 & 0xffffffff);
  lua_pushnil(param_1);
  return;
}



/* RVA 0x19f90; VA 180019f90; FUN_180019f90 */

void FUN_180019f90(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  ulonglong uVar4;
  bool bVar5;
  int local_res10 [2];
  undefined8 local_res18;
  
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res18,param_1);
  iVar2 = lua_type(param_1,param_2 + 1);
  if (iVar2 != 1) {
    iVar2 = lua_type(param_1,param_2 + 1);
    if (iVar2 != 0) {
      iVar2 = lua_isnumber(param_1,param_2 + 1);
      if (iVar2 == 0) {
        DFHack::LuaWrapper::field_error(param_1,-0xf462b,"boolean or number expected","write");
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Var3 = lua_tointegerx(param_1,param_2 + 1,(int *)0x0);
      bVar5 = _Var3 == 0;
      goto LAB_18001a02a;
    }
  }
  iVar2 = lua_toboolean(param_1,param_2 + 1);
  bVar5 = iVar2 == 0;
LAB_18001a02a:
  local_res10[0] = 0;
  uVar4 = lua_tointegerx(param_1,param_2,local_res10);
  if (local_res10[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)param_3)(local_res18,uVar4 & 0xffffffff,!bVar5);
  lua_pushnil(param_1);
  return;
}



/* RVA 0x1a0a0; VA 18001a0a0; FUN_18001a0a0 */

void FUN_18001a0a0(lua_State *param_1,int param_2,undefined *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_res18 [4];
  
  local_res18[0] = 0;
  uVar3 = lua_tointegerx(param_1,param_2,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_1,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (*(code *)param_3)(uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018001a0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushboolean(param_1,uVar2 & 0xff);
  return;
}



/* RVA 0x1a170; VA 18001a170; FUN_18001a170 */

longlong FUN_18001a170(undefined8 *param_1,byte param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*puVar1 <= param_3) {
    return -1;
  }
  pauVar2 = (undefined1 (*) [32])(*puVar1 + (longlong)param_1);
  pauVar3 = thunk_FUN_18004f020((undefined1 (*) [32])((longlong)param_1 + param_3),pauVar2,param_2);
  lVar4 = -1;
  if (pauVar3 != pauVar2) {
    lVar4 = (longlong)pauVar3 - (longlong)param_1;
  }
  return lVar4;
}



/* RVA 0x1a1e0; VA 18001a1e0; FUN_18001a1e0 */

void FUN_18001a1e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  vector<df::item*___ptr64,std::allocator<df::item*___ptr64>_> *pvVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  void *pvVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  byte bVar26;
  longlong **pplVar27;
  longlong *local_88;
  longlong local_80;
  longlong **local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  
  plVar20 = (longlong *)(param_1 + 0x58);
  lVar2 = *plVar20;
  FUN_1800063d0(plVar20,plVar20,*(longlong **)(lVar2 + 8));
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_88 = (longlong *)FUN_180064554(0x28);
  *local_88 = (longlong)local_88;
  local_88[1] = (longlong)local_88;
  local_88[2] = (longlong)local_88;
  *(undefined2 *)(local_88 + 3) = 0x101;
  pvVar11 = DFHack::
            DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>::
            operator[]((DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>
                        *)(*(longlong *)world_exref + 0x13f78),0x72);
  puVar3 = *(undefined8 **)(pvVar11 + 8);
  for (puVar18 = *(undefined8 **)pvVar11; puVar18 != puVar3; puVar18 = puVar18 + 1) {
    pvVar4 = (void *)*puVar18;
    bVar8 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,pvVar4);
    plVar20 = local_88;
    pvVar19 = (void *)0x0;
    if (bVar8) {
      pvVar19 = pvVar4;
    }
    if ((pvVar19 != (void *)0x0) && ((*(uint *)((longlong)pvVar19 + 0x10) & 0x6e8524) == 0)) {
      iVar10 = *(int *)((longlong)pvVar19 + 0x80);
      local_58 = (longlong *)local_88[1];
      uStack_50 = uStack_50 & 0xffffffff00000000;
      plVar12 = local_88;
      if (*(char *)((longlong)local_58 + 0x19) == '\0') {
        plVar5 = local_58;
        do {
          local_58 = plVar5;
          if (*(int *)((longlong)local_58 + 0x1c) < *(int *)((longlong)pvVar19 + 0xbc)) {
            uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
            plVar14 = local_58 + 2;
          }
          else {
            uStack_50 = CONCAT44(uStack_50._4_4_,1);
            plVar14 = local_58;
            plVar12 = local_58;
          }
          plVar5 = (longlong *)*plVar14;
        } while (*(char *)(*plVar14 + 0x19) == '\0');
      }
      if ((*(char *)((longlong)plVar12 + 0x19) != '\0') ||
         (*(int *)((longlong)pvVar19 + 0xbc) < *(int *)((longlong)plVar12 + 0x1c))) {
        if (local_80 == 0x666666666666666) {
LAB_18001a80d:
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        local_78 = &local_88;
        local_70 = (longlong *)0x0;
        plVar12 = (longlong *)FUN_180064554(0x28);
        *(undefined4 *)((longlong)plVar12 + 0x1c) = *(undefined4 *)((longlong)pvVar19 + 0xbc);
        *(undefined4 *)(plVar12 + 4) = 0;
        *plVar12 = (longlong)plVar20;
        plVar12[1] = (longlong)plVar20;
        plVar12[2] = (longlong)plVar20;
        *(undefined2 *)(plVar12 + 3) = 0;
        local_70 = (longlong *)0x0;
        local_68 = local_58;
        uStack_60 = uStack_50;
        plVar12 = FUN_180015ac0((longlong *)&local_88,(longlong *)&local_68,plVar12);
      }
      *(int *)(plVar12 + 4) = (int)plVar12[4] + iVar10;
    }
  }
  pplVar27 = (longlong **)(param_1 + 0x58);
  plVar20 = (longlong *)*local_88;
  cVar1 = *(char *)((longlong)plVar20 + 0x19);
joined_r0x00018001a3a9:
  if (cVar1 != '\0') {
    cVar1 = *(char *)(local_88[1] + 0x19);
    plVar20 = (longlong *)local_88[1];
    while (cVar1 == '\0') {
      FUN_180006370(&local_88,&local_88,(longlong *)plVar20[2]);
      plVar12 = (longlong *)*plVar20;
      free(plVar20);
      plVar20 = plVar12;
      cVar1 = *(char *)((longlong)plVar12 + 0x19);
    }
    free(local_88);
    return;
  }
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)world_exref + 0x11b408) +
           (longlong)*(int *)((longlong)plVar20 + 0x1c) * 8);
  iVar10 = *(int *)(lVar2 + 0x48);
  if (iVar10 < 1) {
    bVar23 = 0;
LAB_18001a408:
    bVar26 = 0;
  }
  else {
    bVar23 = **(byte **)(lVar2 + 0x40) >> 5 & 1;
    if (iVar10 < 10) goto LAB_18001a408;
    bVar26 = (*(byte **)(lVar2 + 0x40))[9] >> 6 & 1;
  }
  uVar21 = (ulonglong)**(char **)cur_season_exref;
  iVar25 = **(int **)cur_season_tick_exref + *(int *)(lVar2 + 0x218) * 10;
  if ((bVar23 != 0) && (bVar26 == 0)) {
    iVar9 = *(int *)(param_1 + 0x48 + uVar21 * 4);
    uVar17 = iVar9 >> 0x1f & 7;
    iVar9 = iVar9 + uVar17;
    iVar24 = iVar9 >> 3;
    if ((iVar24 < iVar10) &&
       ((*(byte *)((longlong)iVar24 + *(longlong *)(lVar2 + 0x40)) &
        '\x01' << (((byte)iVar9 & 7) - (char)uVar17 & 0x1f)) != 0)) {
      while (0x275f < iVar25) {
        uVar17 = (int)(char)uVar21 + 1U & 0x80000003;
        if ((int)uVar17 < 0) {
          uVar17 = (uVar17 - 1 | 0xfffffffc) + 1;
        }
        uVar21 = (ulonglong)uVar17;
        iVar25 = iVar25 + -0x2760;
        iVar9 = *(int *)(param_1 + 0x48 + (longlong)(char)uVar17 * 4);
        uVar17 = iVar9 >> 0x1f & 7;
        iVar9 = iVar9 + uVar17;
        iVar24 = iVar9 >> 3;
        if ((iVar10 <= iVar24) ||
           ((*(byte *)((longlong)iVar24 + *(longlong *)(lVar2 + 0x40)) &
            '\x01' << (((byte)iVar9 & 7) - (char)uVar17 & 0x1f)) == 0)) goto LAB_18001a749;
      }
      plVar12 = (longlong *)**(longlong **)(param_1 + 0x68);
      if (*(char *)((longlong)plVar12 + 0x19) == '\0') goto LAB_18001a500;
    }
  }
  goto LAB_18001a749;
  while( true ) {
    plVar5 = (longlong *)plVar12[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar12 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar12 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar1 = *(char *)(plVar12[1] + 0x19);
      plVar14 = (longlong *)plVar12[1];
      plVar5 = plVar12;
      while ((plVar12 = plVar14, cVar1 == '\0' && (plVar5 == (longlong *)plVar12[2]))) {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar14 = (longlong *)plVar12[1];
        plVar5 = plVar12;
      }
    }
    if (*(char *)((longlong)plVar12 + 0x19) != '\0') break;
LAB_18001a500:
    uVar17 = *(int *)((longlong)plVar12 + 0x1c) >> 0x1f & 7;
    iVar10 = *(int *)((longlong)plVar12 + 0x1c) + uVar17;
    iVar25 = iVar10 >> 3;
    if ((iVar25 < *(int *)(lVar2 + 0x48)) &&
       ((*(byte *)((longlong)iVar25 + *(longlong *)(lVar2 + 0x40)) &
        '\x01' << (((byte)iVar10 & 7) - (char)uVar17 & 0x1f)) != 0)) {
      plVar5 = *pplVar27;
      local_58 = (longlong *)plVar5[1];
      uStack_50 = uStack_50 & 0xffffffff00000000;
      plVar14 = plVar5;
      if (*(char *)((longlong)local_58 + 0x19) == '\0') {
        plVar6 = local_58;
        do {
          local_58 = plVar6;
          if ((int)local_58[4] < *(int *)(lVar2 + 0x20)) {
            uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
            plVar13 = local_58 + 2;
          }
          else {
            uStack_50 = CONCAT44(uStack_50._4_4_,1);
            plVar13 = local_58;
            plVar14 = local_58;
          }
          plVar6 = (longlong *)*plVar13;
        } while (*(char *)(*plVar13 + 0x19) == '\0');
      }
      if ((*(char *)((longlong)plVar14 + 0x19) != '\0') ||
         (*(int *)(lVar2 + 0x20) < (int)plVar14[4])) {
        if (*(longlong *)(param_1 + 0x60) == 0x492492492492492) goto LAB_18001a80d;
        local_70 = (longlong *)0x0;
        local_78 = pplVar27;
        plVar14 = (longlong *)FUN_180064554(0x38);
        *(undefined4 *)(plVar14 + 4) = *(undefined4 *)(lVar2 + 0x20);
        plVar14[5] = 0;
        plVar14[6] = 0;
        local_70 = plVar14;
        lVar15 = FUN_180064554(0x20);
        *(longlong *)lVar15 = lVar15;
        *(longlong *)(lVar15 + 8) = lVar15;
        *(longlong *)(lVar15 + 0x10) = lVar15;
        *(undefined2 *)(lVar15 + 0x18) = 0x101;
        plVar14[5] = lVar15;
        *plVar14 = (longlong)plVar5;
        plVar14[1] = (longlong)plVar5;
        plVar14[2] = (longlong)plVar5;
        *(undefined2 *)(plVar14 + 3) = 0;
        local_70 = (longlong *)0x0;
        plVar14 = FUN_180015d20((longlong *)pplVar27,(longlong *)&local_58,plVar14);
      }
      plVar5 = plVar14 + 5;
      plVar6 = (longlong *)*plVar5;
      local_58 = (longlong *)plVar6[1];
      uVar17 = 0;
      plVar13 = plVar6;
      if (*(char *)((longlong)local_58 + 0x19) == '\0') {
        plVar7 = local_58;
        plVar22 = plVar6;
        do {
          local_58 = plVar7;
          bVar8 = (int)plVar12[4] <= *(int *)((longlong)local_58 + 0x1c);
          plVar16 = local_58;
          plVar13 = local_58;
          if (!bVar8) {
            plVar16 = local_58 + 2;
            plVar13 = plVar22;
          }
          uVar17 = (uint)bVar8;
          plVar7 = (longlong *)*plVar16;
          plVar22 = plVar13;
        } while (*(char *)(*plVar16 + 0x19) == '\0');
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar17);
      if ((*(char *)((longlong)plVar13 + 0x19) != '\0') ||
         ((int)plVar12[4] < *(int *)((longlong)plVar13 + 0x1c))) {
        if (plVar14[6] == 0x7ffffffffffffff) goto LAB_18001a80d;
        uStack_60 = 0;
        local_68 = plVar5;
        plVar14 = (longlong *)FUN_180064554(0x20);
        *(int *)((longlong)plVar14 + 0x1c) = (int)plVar12[4];
        *plVar14 = (longlong)plVar6;
        plVar14[1] = (longlong)plVar6;
        plVar14[2] = (longlong)plVar6;
        *(undefined2 *)(plVar14 + 3) = 0;
        uStack_60 = 0;
        FUN_180016b60(plVar5,(longlong *)&local_58,plVar14);
      }
    }
  }
LAB_18001a749:
  plVar12 = (longlong *)plVar20[2];
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar12 + 0x19);
    plVar20 = plVar12;
    plVar12 = (longlong *)*plVar12;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar12 + 0x19);
      plVar20 = plVar12;
      plVar12 = (longlong *)*plVar12;
    }
  }
  else {
    cVar1 = *(char *)(plVar20[1] + 0x19);
    plVar5 = (longlong *)plVar20[1];
    plVar12 = plVar20;
    while ((plVar20 = plVar5, cVar1 == '\0' && (plVar12 == (longlong *)plVar20[2]))) {
      cVar1 = *(char *)(plVar20[1] + 0x19);
      plVar5 = (longlong *)plVar20[1];
      plVar12 = plVar20;
    }
  }
  cVar1 = *(char *)((longlong)plVar20 + 0x19);
  goto joined_r0x00018001a3a9;
}



/* RVA 0x1a870; VA 18001a870; FUN_18001a870 */

undefined4 FUN_18001a870(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res10 [6];
  
  plVar3 = (longlong *)((longlong *)*param_1)[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = (longlong *)*param_1;
  while (cVar1 == '\0') {
    plVar4 = plVar3;
    if (*(int *)((longlong)plVar3 + 0x1c) < param_2) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar2;
    }
    plVar3 = (longlong *)*plVar3;
    plVar2 = plVar4;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((*(char *)((longlong)plVar2 + 0x19) == '\0') && (*(int *)((longlong)plVar2 + 0x1c) <= param_2)
     ) {
    local_res10[0] = param_2;
    plVar3 = FUN_180011730(param_1,local_res10);
    return (int)*plVar3;
  }
  return (int)param_1[2];
}



/* RVA 0x1a8e0; VA 18001a8e0; FUN_18001a8e0 */

undefined8 FUN_18001a8e0(undefined8 param_1,undefined4 *param_2)

{
  map_block *pmVar1;
  short sStackX_a;
  
  sStackX_a = (short)((uint)*param_2 >> 0x10);
  pmVar1 = DFHack::Maps::getTileBlock
                     ((int)(short)*param_2,(int)sStackX_a,(int)*(short *)(param_2 + 1));
  DFHack::Maps::getBlockTileBiomeRgn(param_1,pmVar1,*param_2);
  return param_1;
}



/* RVA 0x1a960; VA 18001a960; FUN_18001a960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_18001a960(undefined8 param_1,longlong *param_2)

{
  PersistentDataItem *pPVar1;
  undefined8 uVar2;
  PersistentDataItem *pPVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  ulonglong uVar9;
  char *******pppppppcVar10;
  building *pbVar11;
  PersistentDataItem *pPVar12;
  ulonglong _Size;
  undefined1 auStackY_a8 [32];
  int local_74;
  PersistentDataItem *local_70;
  PersistentDataItem *pPStack_68;
  longlong local_60;
  longlong *local_58;
  char ******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_18007d140 ^ (ulonglong)auStackY_a8;
  local_70 = (PersistentDataItem *)0x0;
  pPStack_68 = (PersistentDataItem *)0x0;
  local_60 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_50 = (char ******)0x0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_58 = param_2;
  local_50 = (char ******)FUN_1800039c0(0x20);
  uVar2 = s_autofarm_excluded_farm__180068948._8_8_;
  local_40 = _DAT_180069060;
  uStack_38 = _UNK_180069068;
  *local_50 = (char *****)s_autofarm_excluded_farm__180068948._0_8_;
  local_50[1] = (char *****)uVar2;
  *(undefined4 *)(local_50 + 2) = s_autofarm_excluded_farm__180068948._16_4_;
  *(undefined2 *)((longlong)local_50 + 0x14) = s_autofarm_excluded_farm__180068948._20_2_;
  *(char *)((longlong)local_50 + 0x16) = s_autofarm_excluded_farm__180068948[0x16];
  *(char *)((longlong)local_50 + 0x17) = '\0';
  DFHack::World::GetPersistentSiteData
            ((vector<DFHack::PersistentDataItem,std::allocator<DFHack::PersistentDataItem>_> *)
             &local_70,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
             true);
  pPVar12 = local_70;
  pPVar1 = pPStack_68;
  if (0xf < uStack_38) {
    pppppppcVar10 = (char *******)local_50;
    if ((0xfff < uStack_38 + 1) &&
       (pppppppcVar10 = (char *******)local_50[-1],
       (char *)0x1f < (char *)((longlong)local_50 + (-8 - (longlong)pppppppcVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppppcVar10);
    pPVar12 = local_70;
    pPVar1 = pPStack_68;
  }
  do {
    pPVar3 = pPStack_68;
    if (pPVar12 == pPStack_68) {
      pPStack_68 = pPVar1;
      pPVar12 = local_70;
      if (local_70 != (PersistentDataItem *)0x0) {
        for (; pPVar12 != pPVar1; pPVar12 = pPVar12 + 0x10) {
          DFHack::PersistentDataItem::~PersistentDataItem(pPVar12);
        }
        pPVar12 = local_70;
        if ((0xfff < (local_60 - (longlong)local_70 & 0xfffffffffffffff0U)) &&
           (pPVar12 = *(PersistentDataItem **)(local_70 + -8),
           (PersistentDataItem *)0x1f < local_70 + (-8 - (longlong)pPVar12))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pPVar12);
      }
      return param_2;
    }
    pPStack_68 = pPVar1;
    bVar4 = DFHack::PersistentDataItem::isValid(pPVar12);
    if ((bVar4) && (piVar7 = DFHack::PersistentDataItem::ival(pPVar12,0), *piVar7 != 0)) {
      pbVar8 = DFHack::PersistentDataItem::key(pPVar12);
      local_50 = (char ******)0x0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      if (*(ulonglong *)(pbVar8 + 0x10) < 0x17) {
                    /* WARNING: Subroutine does not return */
        FUN_180018140();
      }
      uVar9 = *(ulonglong *)(pbVar8 + 0x10) - 0x17;
      _Size = 0xffffffffffffffff;
      if (uVar9 != 0xffffffffffffffff) {
        _Size = uVar9;
      }
      if (0xf < *(ulonglong *)(pbVar8 + 0x18)) {
        pbVar8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar8;
      }
      if (0x7fffffffffffffff < _Size) {
                    /* WARNING: Subroutine does not return */
        FUN_180018060();
      }
      if (_Size < 0x10) {
        uStack_38 = 0xf;
        local_40 = _Size;
        memcpy(&local_50,pbVar8 + 0x17,_Size);
        *(undefined1 *)((longlong)&local_50 + _Size) = 0;
      }
      else {
        uVar9 = _Size | 0xf;
        if (uVar9 < 0x8000000000000000) {
          if (uVar9 < 0x16) {
            uVar9 = 0x16;
          }
        }
        else {
          uVar9 = 0x7fffffffffffffff;
        }
        pppppppcVar10 = (char *******)FUN_1800039c0(uVar9 + 1);
        local_50 = (char ******)pppppppcVar10;
        local_40 = _Size;
        uStack_38 = uVar9;
        memcpy(pppppppcVar10,pbVar8 + 0x17,_Size);
        *(char *)((longlong)pppppppcVar10 + _Size) = '\0';
      }
      pppppppcVar10 = &local_50;
      if (0xf < uStack_38) {
        pppppppcVar10 = (char *******)local_50;
      }
      iVar5 = atoi((char *)pppppppcVar10);
      local_74 = iVar5;
      if (0xf < uStack_38) {
        pppppppcVar10 = (char *******)local_50;
        if ((0xfff < uStack_38 + 1) &&
           (pppppppcVar10 = (char *******)local_50[-1],
           (char *)0x1f < (char *)((longlong)local_50 + (-8 - (longlong)pppppppcVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pppppppcVar10);
      }
      pbVar11 = df::building::find(iVar5);
      if ((pbVar11 != (building *)0x0) &&
         (iVar6 = (**(code **)(*(longlong *)pbVar11 + 0xd0))(), iVar6 == 4)) {
        piVar7 = (int *)param_2[1];
        if (piVar7 == (int *)param_2[2]) {
          FUN_180005680(param_2,piVar7,&local_74);
        }
        else {
          *piVar7 = iVar5;
          param_2[1] = param_2[1] + 4;
        }
      }
    }
    pPVar12 = pPVar12 + 0x10;
    pPVar1 = pPStack_68;
    pPStack_68 = pPVar3;
  } while( true );
}



/* RVA 0x1acf0; VA 18001acf0; FUN_18001acf0 */

longlong * FUN_18001acf0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  biome_type bVar5;
  longlong lVar6;
  tile_designation *ptVar7;
  longlong *plVar8;
  map_block *pmVar9;
  region_map_entry *prVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  undefined4 local_res20;
  longlong *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  short local_88;
  short local_86;
  undefined4 local_84;
  undefined4 local_80 [2];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_84 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = FUN_180064554(0x20);
  *(longlong *)lVar6 = lVar6;
  *(longlong *)(lVar6 + 8) = lVar6;
  *(longlong *)(lVar6 + 0x10) = lVar6;
  *(undefined2 *)(lVar6 + 0x18) = 0x101;
  *param_2 = lVar6;
  local_84 = 1;
  uVar14 = *(uint *)(param_3 + 8);
  if ((int)uVar14 <= *(int *)(param_3 + 0x14)) {
    do {
      iVar16 = *(int *)(param_3 + 0xc);
      if (iVar16 <= *(int *)(param_3 + 0x18)) {
        local_res20 = uVar14 & 0xffff;
        do {
          sVar15 = (short)iVar16;
          local_res20 = CONCAT22(sVar15,(undefined2)local_res20);
          bVar4 = DFHack::Buildings::containsTile(param_3,local_res20);
          if ((bVar4) &&
             (ptVar7 = DFHack::Maps::getTileDesignation(uVar14,iVar16,*(int *)(param_3 + 0x20)),
             ptVar7 != (tile_designation *)0x0)) {
            if ((*(uint *)ptVar7 & 0x8000) == 0) {
              pmVar9 = DFHack::Maps::getTileBlock
                                 ((int)(short)uVar14,(int)sVar15,(int)*(short *)(param_3 + 0x20));
              uVar12 = iVar16 << 0x10 | uVar14 & 0xffff;
              DFHack::Maps::getBlockTileBiomeRgn(local_80,pmVar9,uVar12);
              prVar10 = DFHack::Maps::getRegionBiome(local_80[0]);
              if (prVar10 != (region_map_entry *)0x0) {
                pmVar9 = DFHack::Maps::getTileBlock
                                   ((int)(short)uVar14,(int)sVar15,(int)*(short *)(param_3 + 0x20));
                DFHack::Maps::getBlockTileBiomeRgn(&local_88,pmVar9,uVar12);
                bVar5 = DFHack::Maps::getBiomeTypeWithRef(local_88,local_86,local_86);
                plVar8 = (longlong *)((longlong *)*param_2)[1];
                uVar12 = 0;
                cVar1 = *(char *)((longlong)plVar8 + 0x19);
                plVar2 = (longlong *)*param_2;
                local_a8 = plVar8;
                while (plVar3 = plVar8, cVar1 == '\0') {
                  bVar4 = (int)bVar5 <= *(int *)((longlong)plVar3 + 0x1c);
                  plVar8 = plVar3;
                  plVar13 = plVar3;
                  if (!bVar4) {
                    plVar8 = plVar3 + 2;
                    plVar13 = plVar2;
                  }
                  uVar12 = (uint)bVar4;
                  cVar1 = *(char *)(*plVar8 + 0x19);
                  plVar2 = plVar13;
                  plVar8 = (longlong *)*plVar8;
                  local_a8 = plVar3;
                }
                _uStack_a0 = CONCAT44(uStack_9c,uVar12);
                if ((*(char *)((longlong)plVar2 + 0x19) != '\0') ||
                   ((int)bVar5 < *(int *)((longlong)plVar2 + 0x1c))) {
                  if (param_2[1] == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    FUN_180017a10();
                  }
                  lVar6 = *param_2;
                  local_40 = 0;
                  local_48 = param_2;
                  plVar8 = (longlong *)FUN_180064554(0x20);
                  *(biome_type *)((longlong)plVar8 + 0x1c) = bVar5;
                  *plVar8 = lVar6;
                  plVar8[1] = lVar6;
                  plVar8[2] = lVar6;
                  *(undefined2 *)(plVar8 + 3) = 0;
                  local_40 = 0;
                  FUN_180016b60(param_2,(longlong *)&local_a8,plVar8);
                }
              }
            }
            else {
              plVar8 = (longlong *)((longlong *)*param_2)[1];
              uVar11 = 0;
              cVar1 = *(char *)((longlong)plVar8 + 0x19);
              plVar2 = (longlong *)*param_2;
              local_a8 = plVar8;
              uVar12 = uVar11;
              while (plVar3 = plVar8, cVar1 == '\0') {
                bVar4 = 0x2f < *(int *)((longlong)plVar3 + 0x1c);
                plVar8 = plVar3;
                plVar13 = plVar3;
                if (!bVar4) {
                  plVar8 = plVar3 + 2;
                  plVar13 = plVar2;
                }
                uVar12 = (uint)bVar4;
                cVar1 = *(char *)(*plVar8 + 0x19);
                plVar2 = plVar13;
                plVar8 = (longlong *)*plVar8;
                local_a8 = plVar3;
              }
              _uStack_a0 = CONCAT44(uStack_9c,uVar12);
              if ((*(char *)((longlong)plVar2 + 0x19) != '\0') ||
                 (0x30 < *(int *)((longlong)plVar2 + 0x1c))) {
                if (param_2[1] == 0x7ffffffffffffff) goto LAB_18001b12b;
                lVar6 = *param_2;
                local_70 = 0;
                local_78 = param_2;
                plVar8 = (longlong *)FUN_180064554(0x20);
                *(undefined4 *)((longlong)plVar8 + 0x1c) = 0x30;
                *plVar8 = lVar6;
                plVar8[1] = lVar6;
                plVar8[2] = lVar6;
                *(undefined2 *)(plVar8 + 3) = 0;
                local_70 = 0;
                FUN_180016b60(param_2,(longlong *)&local_a8,plVar8);
              }
              plVar8 = (longlong *)((longlong *)*param_2)[1];
              cVar1 = *(char *)((longlong)plVar8 + 0x19);
              plVar2 = (longlong *)*param_2;
              local_a8 = plVar8;
              uVar12 = uVar11;
              while (plVar3 = plVar8, cVar1 == '\0') {
                bVar4 = 0x30 < *(int *)((longlong)plVar3 + 0x1c);
                plVar8 = plVar3;
                plVar13 = plVar3;
                if (!bVar4) {
                  plVar8 = plVar3 + 2;
                  plVar13 = plVar2;
                }
                uVar12 = (uint)bVar4;
                cVar1 = *(char *)(*plVar8 + 0x19);
                plVar2 = plVar13;
                plVar8 = (longlong *)*plVar8;
                local_a8 = plVar3;
              }
              _uStack_a0 = CONCAT44(uStack_9c,uVar12);
              if ((*(char *)((longlong)plVar2 + 0x19) != '\0') ||
                 (0x31 < *(int *)((longlong)plVar2 + 0x1c))) {
                if (param_2[1] == 0x7ffffffffffffff) goto LAB_18001b12b;
                lVar6 = *param_2;
                local_60 = 0;
                local_68 = param_2;
                plVar8 = (longlong *)FUN_180064554(0x20);
                *(undefined4 *)((longlong)plVar8 + 0x1c) = 0x31;
                *plVar8 = lVar6;
                plVar8[1] = lVar6;
                plVar8[2] = lVar6;
                *(undefined2 *)(plVar8 + 3) = 0;
                local_60 = 0;
                FUN_180016b60(param_2,(longlong *)&local_a8,plVar8);
              }
              plVar8 = (longlong *)((longlong *)*param_2)[1];
              cVar1 = *(char *)((longlong)plVar8 + 0x19);
              plVar2 = (longlong *)*param_2;
              local_a8 = plVar8;
              while (plVar3 = plVar8, cVar1 == '\0') {
                bVar4 = 0x31 < *(int *)((longlong)plVar3 + 0x1c);
                plVar8 = plVar3;
                plVar13 = plVar3;
                if (!bVar4) {
                  plVar8 = plVar3 + 2;
                  plVar13 = plVar2;
                }
                uVar11 = (uint)bVar4;
                cVar1 = *(char *)(*plVar8 + 0x19);
                plVar2 = plVar13;
                plVar8 = (longlong *)*plVar8;
                local_a8 = plVar3;
              }
              _uStack_a0 = CONCAT44(uStack_9c,uVar11);
              if ((*(char *)((longlong)plVar2 + 0x19) != '\0') ||
                 (0x32 < *(int *)((longlong)plVar2 + 0x1c))) {
                if (param_2[1] == 0x7ffffffffffffff) {
LAB_18001b12b:
                    /* WARNING: Subroutine does not return */
                  FUN_180017a10();
                }
                lVar6 = *param_2;
                local_50 = 0;
                local_58 = param_2;
                plVar8 = (longlong *)FUN_180064554(0x20);
                *(undefined4 *)((longlong)plVar8 + 0x1c) = 0x32;
                *plVar8 = lVar6;
                plVar8[1] = lVar6;
                plVar8[2] = lVar6;
                *(undefined2 *)(plVar8 + 3) = 0;
                local_50 = 0;
                FUN_180016b60(param_2,(longlong *)&local_a8,plVar8);
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 <= *(int *)(param_3 + 0x18));
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 <= *(int *)(param_3 + 0x14));
  }
  return param_2;
}



/* RVA 0x1b140; VA 18001b140; FUN_18001b140 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18001b140(undefined8 param_1,undefined8 *param_2,int param_3)

{
  plant_raw *ppVar1;
  void **ppvVar2;
  void *pvVar3;
  bool bVar4;
  undefined1 auStackY_98 [32];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined8 *local_40;
  void *local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_98;
  local_40 = param_2;
  ppVar1 = df::plant_raw::find(param_3);
  bVar4 = ppVar1 == (plant_raw *)0x0;
  if (bVar4) {
    uStack_58 = 0;
    local_50 = _DAT_180069010;
    uStack_48 = _UNK_180069018;
    local_60 = (void *)0x454e4f4e;
    ppvVar2 = &local_60;
  }
  else {
    ppvVar2 = (void **)FUN_18000ebd0(local_38,(undefined8 *)(ppVar1 + 0x50));
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  pvVar3 = ppvVar2[1];
  *param_2 = *ppvVar2;
  param_2[1] = pvVar3;
  pvVar3 = ppvVar2[3];
  param_2[2] = ppvVar2[2];
  param_2[3] = pvVar3;
  *(undefined1 *)ppvVar2 = 0;
  ppvVar2[2] = (void *)0x0;
  ppvVar2[3] = (void *)0xf;
  if (bVar4) {
    if (0xf < uStack_48) {
      pvVar3 = local_60;
      if ((0xfff < uStack_48 + 1) &&
         (pvVar3 = *(void **)((longlong)local_60 + -8),
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar3);
    }
  }
  if ((!bVar4) && (0xf < local_20)) {
    pvVar3 = local_38[0];
    if ((0xfff < local_20 + 1) &&
       (pvVar3 = *(void **)((longlong)local_38[0] + -8),
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar3);
  }
  return param_2;
}



/* RVA 0x1b2d0; VA 18001b2d0; FUN_18001b2d0 */

ulonglong FUN_18001b2d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  size_t _Size;
  int iVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  longlong *plVar4;
  MaterialInfo local_48 [8];
  ulonglong local_40;
  
  plVar4 = *(longlong **)(param_1 + 0x658);
  plVar1 = *(longlong **)(param_1 + 0x660);
  do {
    if (plVar4 == plVar1) {
      return in_RAX & 0xffffffffffffff00;
    }
    puVar2 = (undefined8 *)*plVar4;
    _Buf2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      _Buf2 = (undefined8 *)*param_2;
    }
    _Size = puVar2[2];
    _Buf1 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      _Buf1 = (undefined8 *)*puVar2;
    }
    if (_Size == param_2[2]) {
      if (_Size != 0) {
        iVar3 = memcmp(_Buf1,_Buf2,_Size);
        in_RAX = CONCAT44(extraout_var,iVar3);
        if (iVar3 != 0) goto LAB_18001b36e;
      }
      DFHack::MaterialInfo::decode
                (local_48,*(short *)((longlong)puVar2 + 0x104),*(int *)(puVar2 + 0x21));
      in_RAX = local_40;
      if (((local_40 != 0) && (4 < *(int *)(local_40 + 0x298))) &&
         (in_RAX = *(ulonglong *)(local_40 + 0x290), (*(byte *)(in_RAX + 4) & 0x40) != 0)) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
LAB_18001b36e:
    plVar4 = plVar4 + 1;
  } while( true );
}



/* RVA 0x1b3a0; VA 18001b3a0; FUN_18001b3a0 */

void FUN_18001b3a0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_180018cd0(param_1);
  lVar1 = param_1[3];
  *(undefined4 *)(param_1 + 2) = 0x32;
  FUN_1800064d0(param_1 + 3,param_1 + 3,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  param_1[4] = 0;
  FUN_180018cd0(param_1 + 5);
  lVar1 = param_1[7];
  FUN_1800064d0(param_1 + 7,param_1 + 7,*(longlong **)(lVar1 + 8));
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  param_1[8] = 0;
  return;
}



/* RVA 0x1b430; VA 18001b430; FUN_18001b430 */

void FUN_18001b430(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  longlong local_58;
  longlong lStack_50;
  longlong local_38;
  longlong local_30 [3];
  
  piVar1 = (int *)param_2[1];
  piVar5 = (int *)*param_2;
  plVar2 = (longlong *)*param_1;
  do {
    if (piVar5 == piVar1) {
      return;
    }
    plVar4 = FUN_180006a50(param_1,local_30,plVar2,piVar5);
    local_58 = *plVar4;
    lStack_50 = plVar4[1];
    local_38 = plVar4[2];
    if ((char)local_38 == '\0') {
      if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
        FUN_180017a10();
      }
      lVar3 = *param_1;
      plVar4 = (longlong *)FUN_180064554(0x28);
      *(undefined8 *)((longlong)plVar4 + 0x1c) = *(undefined8 *)piVar5;
      *plVar4 = lVar3;
      plVar4[1] = lVar3;
      plVar4[2] = lVar3;
      *(undefined2 *)(plVar4 + 3) = 0;
      FUN_1800166a0(param_1,&local_58,plVar4);
    }
    piVar5 = piVar5 + 2;
  } while( true );
}



/* RVA 0x1b530; VA 18001b530; FUN_18001b530 */

undefined8 * FUN_18001b530(undefined8 *param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 *puVar2;
  size_t _Size;
  byte local_res8;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180018140();
  }
  if (param_1[3] - uVar1 < param_4) {
    puVar2 = FUN_180008dc0(param_1,param_4,(ulonglong)local_res8,param_2,param_3,param_4);
    return puVar2;
  }
  param_1[2] = uVar1 + param_4;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  _Src = (void *)((longlong)puVar2 + param_2);
  _Size = param_4;
  if ((_Src < (void *)((longlong)param_3 + param_4)) &&
     (param_3 <= (void *)(uVar1 + (longlong)puVar2))) {
    if (param_3 < _Src) {
      _Size = (longlong)_Src - (longlong)param_3;
    }
    else {
      _Size = 0;
    }
  }
  memmove((void *)((longlong)_Src + param_4),_Src,(uVar1 - param_2) + 1);
  memcpy(_Src,param_3,_Size);
  memcpy((void *)(_Size + (longlong)_Src),(void *)((longlong)param_3 + param_4 + _Size),
         param_4 - _Size);
  return param_1;
}



/* RVA 0x1b620; VA 18001b620; FUN_18001b620 */

undefined8 * FUN_18001b620(undefined8 *param_1,ulonglong param_2,char *param_3)

{
  char *_Src;
  ulonglong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t _Size;
  byte local_res8;
  
  sVar2 = strlen(param_3);
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180018140();
  }
  if (param_1[3] - uVar1 < sVar2) {
    puVar3 = FUN_180008dc0(param_1,sVar2,(ulonglong)local_res8,param_2,param_3,sVar2);
    return puVar3;
  }
  param_1[2] = uVar1 + sVar2;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  _Src = (char *)((longlong)puVar3 + param_2);
  _Size = sVar2;
  if ((_Src < param_3 + sVar2) && (param_3 <= (char *)(uVar1 + (longlong)puVar3))) {
    if (param_3 < _Src) {
      _Size = (longlong)_Src - (longlong)param_3;
    }
    else {
      _Size = 0;
    }
  }
  memmove(_Src + sVar2,_Src,(uVar1 - param_2) + 1);
  memcpy(_Src,param_3,_Size);
  memcpy(_Src + _Size,param_3 + _Size + sVar2,sVar2 - _Size);
  return param_1;
}



/* RVA 0x1b730; VA 18001b730; FUN_18001b730 */

void FUN_18001b730(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  int local_res8 [2];
  undefined8 local_res20;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_38 = param_1 + 0x48;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      local_38 = *(longlong *)(param_1 + 0x48);
    }
    local_28 = param_1 + 0x20;
    local_30 = *(undefined8 *)(param_1 + 0x58);
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_28 = *(longlong *)(param_1 + 0x20);
    }
    local_20 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_28,&local_38);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res20,param_2);
  local_res8[0] = 0;
  uVar2 = lua_tointegerx(param_2,param_3,local_res8);
  if (local_res8[0] == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(local_res20,uVar2 & 0xffffffff);
  lua_pushnil(param_2);
  return;
}



/* RVA 0x1b810; VA 18001b810; FUN_18001b810 */

void FUN_18001b810(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res8;
  int local_res18 [2];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_38 = param_1 + 0x48;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      local_38 = *(longlong *)(param_1 + 0x48);
    }
    local_28 = param_1 + 0x20;
    local_30 = *(undefined8 *)(param_1 + 0x58);
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_28 = *(longlong *)(param_1 + 0x20);
    }
    local_20 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_28,&local_38);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res8,param_2);
  local_res18[0] = 0;
  uVar2 = lua_tointegerx(param_2,param_3 + 1,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18[0] = 0;
  uVar3 = lua_tointegerx(param_2,param_3,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(local_res8,uVar3 & 0xffffffff,uVar2 & 0xffffffff);
  lua_pushnil(param_2);
  return;
}



/* RVA 0x1b940; VA 18001b940; FUN_18001b940 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001b940(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  size_t local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_18007d140 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_68 = param_1 + 0x48;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      local_68 = *(longlong *)(param_1 + 0x48);
    }
    local_60 = *(undefined8 *)(param_1 + 0x58);
    local_88 = param_1 + 0x20;
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_88 = *(size_t *)(param_1 + 0x20);
    }
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_88,&local_68);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_68,param_2);
  lVar2 = local_68;
  uStack_50 = 0;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = 0;
  local_98 = 1;
  pcVar3 = lua_tolstring(param_2,param_3 + 1,&local_88);
  if (pcVar3 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_58,pcVar3,local_88);
  local_88 = local_88 & 0xffffffff00000000;
  uVar4 = lua_tointegerx(param_2,param_3,(int *)&local_88);
  if ((int)local_88 == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_88 = local_58;
  uStack_80 = uStack_50;
  local_78 = local_48;
  uStack_70 = uStack_40;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = local_58 & 0xffffffffffffff00;
  (*pcVar1)(lVar2,uVar4 & 0xffffffff,&local_88);
  lua_pushnil(param_2);
  return;
}



/* RVA 0x1bac0; VA 18001bac0; FUN_18001bac0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001bac0(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_18007d140 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_68 = param_1 + 0x48;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      local_68 = *(longlong *)(param_1 + 0x48);
    }
    local_60 = *(undefined8 *)(param_1 + 0x58);
    local_98 = param_1 + 0x20;
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_98 = *(ulonglong *)(param_1 + 0x20);
    }
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_98,&local_68);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_68,param_2);
  lVar2 = local_68;
  local_98 = local_98 & 0xffffffff00000000;
  uVar3 = lua_tointegerx(param_2,param_3 + 2,(int *)&local_98);
  if ((int)local_98 == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
  }
  uStack_50 = 0;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = 0;
  local_78 = 1;
  pcVar4 = lua_tolstring(param_2,param_3 + 1,&local_98);
  if (pcVar4 == (char *)0x0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"string expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180018510((longlong *)&local_58,pcVar4,local_98);
  local_98 = local_98 & 0xffffffff00000000;
  uVar5 = lua_tointegerx(param_2,param_3,(int *)&local_98);
  if ((int)local_98 == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = local_58 & 0xffffffffffffff00;
  (*pcVar1)(lVar2,uVar5 & 0xffffffff,&local_98,uVar3 & 0xffffffff);
  lua_pushnil(param_2);
  return;
}



/* RVA 0x1bc90; VA 18001bc90; FUN_18001bc90 */

void FUN_18001bc90(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  __int64 _Var3;
  ulonglong uVar4;
  bool bVar5;
  undefined8 local_res8;
  int local_res18 [2];
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_28 = param_1 + 0x20;
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_28 = *(longlong *)(param_1 + 0x20);
    }
    local_20 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_28);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  df::cur_lua_ostream_argument::cur_lua_ostream_argument
            ((cur_lua_ostream_argument *)&local_res8,param_2);
  iVar2 = lua_type(param_2,param_3 + 1);
  if ((iVar2 == 1) || (iVar2 = lua_type(param_2,param_3 + 1), iVar2 == 0)) {
    iVar2 = lua_toboolean(param_2,param_3 + 1);
    bVar5 = iVar2 == 0;
  }
  else {
    iVar2 = lua_isnumber(param_2,param_3 + 1);
    if (iVar2 == 0) {
      DFHack::LuaWrapper::field_error(param_2,-0xf462b,"boolean or number expected","write");
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Var3 = lua_tointegerx(param_2,param_3 + 1,(int *)0x0);
    bVar5 = _Var3 == 0;
  }
  local_res18[0] = 0;
  uVar4 = lua_tointegerx(param_2,param_3,local_res18);
  if (local_res18[0] == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*pcVar1)(local_res8,uVar4 & 0xffffffff,!bVar5);
  lua_pushnil(param_2);
  return;
}



/* RVA 0x1bdf0; VA 18001bdf0; FUN_18001bdf0 */

void FUN_18001bdf0(longlong param_1,lua_State *param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  int local_res8 [2];
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_28 = param_1 + 0x48;
    if (0xf < *(ulonglong *)(param_1 + 0x60)) {
      local_28 = *(longlong *)(param_1 + 0x48);
    }
    local_18 = param_1 + 0x20;
    local_20 = *(undefined8 *)(param_1 + 0x58);
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      local_18 = *(longlong *)(param_1 + 0x20);
    }
    local_10 = *(undefined8 *)(param_1 + 0x30);
    DFHack::LuaWrapper::notify_deprecated(param_2,&local_18,&local_28);
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  local_res8[0] = 0;
  uVar3 = lua_tointegerx(param_2,param_3,local_res8);
  if (local_res8[0] == 0) {
    DFHack::LuaWrapper::field_error(param_2,-0xf462b,"integer expected","write");
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (*pcVar1)(uVar3 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x00018001beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lua_pushboolean(param_2,(uint)bVar2);
  return;
}



/* RVA 0x1bee0; VA 18001bee0; FUN_18001bee0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001bee0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *_Size;
  char *_Src;
  undefined1 auStackY_a8 [32];
  byte local_78;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [16];
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_18007d140 ^ (ulonglong)auStackY_a8;
  _Size = (char *)0x0;
  pcVar4 = (char *)FUN_180021210((undefined8 *)&local_40,param_2);
  lVar1 = *(longlong *)(pcVar4 + 0x10);
  if (*(ulonglong *)(pcVar4 + 0x18) - lVar1 < 0x17) {
    pcVar4 = (char *)FUN_180008dc0((undefined8 *)pcVar4,0x17,(ulonglong)local_78,0,
                                   "autofarm/excluded_farm/",0x17);
  }
  else {
    *(longlong *)(pcVar4 + 0x10) = lVar1 + 0x17;
    _Src = pcVar4;
    if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
      _Src = *(char **)pcVar4;
    }
    if (("/" < _Src) || (_Src + lVar1 < "autofarm/excluded_farm/")) {
      _Size = (char *)0x17;
    }
    else if ("autofarm/excluded_farm/" < _Src) {
      _Size = _Src + -0x180068948;
    }
    memmove(_Src + 0x17,_Src,lVar1 + 1);
    memcpy(_Src,"autofarm/excluded_farm/",(size_t)_Size);
    memcpy(_Src + (longlong)_Size,_Size + 0x18006895f,0x17 - (longlong)_Size);
  }
  local_60 = *(void **)pcVar4;
  uStack_58 = *(undefined8 *)(pcVar4 + 8);
  local_50 = *(undefined8 *)(pcVar4 + 0x10);
  uStack_48 = *(ulonglong *)(pcVar4 + 0x18);
  *pcVar4 = '\0';
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  pcVar4[0x18] = '\x0f';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  DFHack::World::GetPersistentSiteData(local_70,SUB81(&local_60,0));
  if (0xf < uStack_48) {
    pvVar6 = local_60;
    if ((0xfff < uStack_48 + 1) &&
       (pvVar6 = *(void **)((longlong)local_60 + -8),
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar6);
  }
  local_50 = _DAT_180069000;
  uStack_48 = _UNK_180069008;
  local_60 = (void *)((ulonglong)local_60 & 0xffffffffffffff00);
  if (0xf < uStack_28) {
    pvVar2 = (void *)CONCAT71(uStack_3f,local_40);
    pvVar6 = pvVar2;
    if ((0xfff < uStack_28 + 1) &&
       (pvVar6 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar6);
  }
  local_30 = _DAT_180069000;
  uStack_28 = _UNK_180069008;
  local_40 = 0;
  bVar3 = DFHack::PersistentDataItem::isValid((PersistentDataItem *)local_70);
  if ((bVar3) &&
     (piVar5 = DFHack::PersistentDataItem::ival((PersistentDataItem *)local_70,0), *piVar5 != 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)local_70);
  return uVar7;
}



/* RVA 0x1c160; VA 18001c160; FUN_18001c160 */

uint FUN_18001c160(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 < 1) {
    bVar5 = 0;
  }
  else {
    bVar5 = **(byte **)(param_2 + 0x40) >> 5 & 1;
    if (9 < iVar1) {
      bVar7 = (*(byte **)(param_2 + 0x40))[9] >> 6 & 1;
      goto LAB_18001c1a6;
    }
  }
  bVar7 = 0;
LAB_18001c1a6:
  uVar4 = (ulonglong)**(char **)cur_season_exref;
  uVar3 = **(uint **)cur_season_tick_exref;
  iVar8 = uVar3 + *(int *)(param_2 + 0x218) * 10;
  if ((bVar5 != 0) && (bVar7 == 0)) {
    iVar6 = *(int *)(param_1 + 0x48 + uVar4 * 4);
    uVar3 = iVar6 >> 0x1f & 7;
    uVar2 = iVar6 + uVar3;
    uVar3 = (uVar2 & 7) - uVar3;
    iVar6 = (int)uVar2 >> 3;
    if (iVar6 < iVar1) {
      bVar5 = *(byte *)((longlong)iVar6 + *(longlong *)(param_2 + 0x40)) &
              '\x01' << ((byte)uVar3 & 0x1f);
      while (uVar3 = 0, bVar5 != 0) {
        if (iVar8 < 0x2760) {
          return 1;
        }
        uVar3 = (int)(char)uVar4 + 1U & 0x80000003;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        uVar4 = (ulonglong)uVar3;
        iVar8 = iVar8 + -0x2760;
        iVar6 = *(int *)(param_1 + 0x48 + (longlong)(char)uVar3 * 4);
        uVar3 = iVar6 >> 0x1f & 7;
        uVar2 = iVar6 + uVar3;
        uVar3 = (uVar2 & 7) - uVar3;
        iVar6 = (int)uVar2 >> 3;
        if (iVar1 <= iVar6) break;
        bVar5 = *(byte *)((longlong)iVar6 + *(longlong *)(param_2 + 0x40)) &
                '\x01' << ((byte)uVar3 & 0x1f);
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* RVA 0x1c310; VA 18001c310; FUN_18001c310 */

ulonglong FUN_18001c310(longlong param_1)

{
  MaterialInfo local_48 [8];
  ulonglong local_40;
  
  DFHack::MaterialInfo::decode(local_48,*(short *)(param_1 + 0x104),*(int *)(param_1 + 0x108));
  if (((local_40 != 0) && (4 < *(int *)(local_40 + 0x298))) &&
     (local_40 = *(ulonglong *)(local_40 + 0x290), (*(byte *)(local_40 + 4) & 0x40) != 0)) {
    return CONCAT71((int7)(local_40 >> 8),1);
  }
  return local_40 & 0xffffffffffffff00;
}



/* RVA 0x1c380; VA 18001c380; FUN_18001c380 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001c380(longlong *param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [32];
  byte bVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  bool bVar7;
  int iVar8;
  PersistentDataItem *pPVar9;
  int *piVar10;
  uint *puVar11;
  longlong *plVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Src;
  undefined1 (*pauVar13) [32];
  char *pcVar14;
  color_ostream *pcVar15;
  undefined8 *****pppppuVar16;
  undefined8 *_Buf1;
  undefined1 (*pauVar17) [32];
  ulonglong uVar18;
  size_t sVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  void *_Src_00;
  undefined1 auStackY_238 [32];
  int local_204 [3];
  char *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int local_1e0 [2];
  longlong *local_1d8;
  PersistentDataItem *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  PersistentDataItem *local_1b8;
  PersistentDataItem *pPStack_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong *plStack_198;
  longlong *local_190;
  ulonglong local_188;
  undefined1 (**local_180) [32];
  char *local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  ostream_proxy_prefix local_148 [152];
  char *local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined1 (*local_90) [32];
  longlong lStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 ****local_70;
  undefined8 uStack_68;
  size_t local_60;
  ulonglong uStack_58;
  undefined1 (*local_50) [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_18007d140 ^ (ulonglong)auStackY_238;
  local_1e8 = param_2;
  local_1c8 = param_1;
  FUN_180018cd0(param_1);
  *(undefined4 *)(param_1 + 2) = 0x32;
  lVar4 = param_1[3];
  FUN_1800064d0(param_1 + 3,param_1 + 3,*(longlong **)(lVar4 + 8));
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  param_1[4] = 0;
  FUN_180018cd0(param_1 + 5);
  lVar4 = param_1[7];
  FUN_1800064d0(param_1 + 7,param_1 + 7,*(longlong **)(lVar4 + 8));
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  param_1[8] = 0;
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (char *)FUN_1800039c0(0x20);
  uVar5 = s_autofarm_enabled_1800689f0._8_8_;
  local_a0 = _DAT_180069040;
  uStack_98 = _UNK_180069048;
  *(undefined8 *)local_b0 = s_autofarm_enabled_1800689f0._0_8_;
  *(undefined8 *)(local_b0 + 8) = uVar5;
  local_b0[0x10] = '\0';
  pPVar9 = (PersistentDataItem *)
           DFHack::World::GetPersistentSiteData
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1f8,
                      SUB81(&local_b0,0));
  DFHack::PersistentDataItem::operator=((PersistentDataItem *)(param_1 + 0x11),pPVar9);
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)&local_1f8);
  if (0xf < uStack_98) {
    pcVar14 = local_b0;
    if ((0xfff < uStack_98 + 1) &&
       (pcVar14 = *(char **)(local_b0 + -8), (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pcVar14);
  }
  bVar7 = DFHack::PersistentDataItem::isValid((PersistentDataItem *)(param_1 + 0x11));
  if (bVar7) {
    piVar10 = DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0x11),0);
    *PTR_plugin_is_enabled_18007d010 = *piVar10 != 0;
  }
  else {
    local_b0 = (char *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (char *)FUN_1800039c0(0x20);
    uVar5 = s_autofarm_enabled_1800689f0._8_8_;
    local_a0 = _DAT_180069040;
    uStack_98 = _UNK_180069048;
    *(undefined8 *)local_b0 = s_autofarm_enabled_1800689f0._0_8_;
    *(undefined8 *)(local_b0 + 8) = uVar5;
    local_b0[0x10] = '\0';
    pPVar9 = (PersistentDataItem *)
             DFHack::World::AddPersistentSiteData
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1f8);
    DFHack::PersistentDataItem::operator=((PersistentDataItem *)(param_1 + 0x11),pPVar9);
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)&local_1f8);
    if (0xf < uStack_98) {
      pcVar14 = local_b0;
      if ((0xfff < uStack_98 + 1) &&
         (pcVar14 = *(char **)(local_b0 + -8), (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14)))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pcVar14);
    }
    bVar2 = *PTR_plugin_is_enabled_18007d010;
    puVar11 = (uint *)DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0x11),0);
    *puVar11 = (uint)bVar2;
  }
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (char *)FUN_1800039c0(0x20);
  uVar5 = s_autofarm_default_threshold_180068a08._8_8_;
  local_a0 = _DAT_180069070;
  uStack_98 = _UNK_180069078;
  *(undefined8 *)local_b0 = s_autofarm_default_threshold_180068a08._0_8_;
  *(undefined8 *)(local_b0 + 8) = uVar5;
  *(undefined8 *)(local_b0 + 0x10) = s_autofarm_default_threshold_180068a08._16_8_;
  *(undefined2 *)(local_b0 + 0x18) = s_autofarm_default_threshold_180068a08._24_2_;
  local_b0[0x1a] = '\0';
  pPVar9 = (PersistentDataItem *)
           DFHack::World::GetPersistentSiteData
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1f8,
                      SUB81(&local_b0,0));
  DFHack::PersistentDataItem::operator=((PersistentDataItem *)(param_1 + 0xf),pPVar9);
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)&local_1f8);
  if (0xf < uStack_98) {
    pcVar14 = local_b0;
    if ((0xfff < uStack_98 + 1) &&
       (pcVar14 = *(char **)(local_b0 + -8), (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pcVar14);
  }
  bVar7 = DFHack::PersistentDataItem::isValid((PersistentDataItem *)(param_1 + 0xf));
  if (bVar7) {
    piVar10 = DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0xf),0);
    *(int *)(param_1 + 2) = *piVar10;
  }
  else {
    local_b0 = (char *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (char *)FUN_1800039c0(0x20);
    uVar5 = s_autofarm_default_threshold_180068a08._8_8_;
    local_a0 = _DAT_180069070;
    uStack_98 = _UNK_180069078;
    *(undefined8 *)local_b0 = s_autofarm_default_threshold_180068a08._0_8_;
    *(undefined8 *)(local_b0 + 8) = uVar5;
    *(undefined8 *)(local_b0 + 0x10) = s_autofarm_default_threshold_180068a08._16_8_;
    *(undefined2 *)(local_b0 + 0x18) = s_autofarm_default_threshold_180068a08._24_2_;
    local_b0[0x1a] = '\0';
    pPVar9 = (PersistentDataItem *)
             DFHack::World::AddPersistentSiteData
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_1f8);
    DFHack::PersistentDataItem::operator=((PersistentDataItem *)(param_1 + 0xf),pPVar9);
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)&local_1f8);
    if (0xf < uStack_98) {
      pcVar14 = local_b0;
      if ((0xfff < uStack_98 + 1) &&
         (pcVar14 = *(char **)(local_b0 + -8), (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14)))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pcVar14);
    }
    lVar4 = param_1[2];
    piVar10 = DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0xf),0);
    *piVar10 = (int)lVar4;
  }
  local_1b8 = (PersistentDataItem *)0x0;
  pPStack_1b0 = (PersistentDataItem *)0x0;
  local_1a8 = 0;
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (char *)FUN_1800039c0(0x20);
  uVar5 = s_autofarm_threshold__180068a28._8_8_;
  local_a0 = _DAT_180069050;
  uStack_98 = _UNK_180069058;
  *(undefined8 *)local_b0 = s_autofarm_threshold__180068a28._0_8_;
  *(undefined8 *)(local_b0 + 8) = uVar5;
  *(undefined2 *)(local_b0 + 0x10) = s_autofarm_threshold__180068a28._16_2_;
  local_b0[0x12] = s_autofarm_threshold__180068a28[0x12];
  local_b0[0x13] = '\0';
  DFHack::World::GetPersistentSiteData
            ((vector<DFHack::PersistentDataItem,std::allocator<DFHack::PersistentDataItem>_> *)
             &local_1b8,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0
             ,true);
  if (0xf < uStack_98) {
    pcVar14 = local_b0;
    if ((0xfff < uStack_98 + 1) &&
       (pcVar14 = *(char **)(local_b0 + -8), (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pcVar14);
  }
  local_1d0 = pPStack_1b0;
  pPVar9 = local_1b8;
  if (local_1b8 != pPStack_1b0) {
    do {
      bVar7 = DFHack::PersistentDataItem::isValid(pPVar9);
      if (bVar7) {
        lVar4 = *(longlong *)world_exref;
        local_1a0 = (longlong *)0x0;
        plStack_198 = (longlong *)0x0;
        local_1c0 = (longlong *)0x0;
        local_190 = (longlong *)0x0;
        uVar18 = *(longlong *)(lVar4 + 0x11b410) - *(longlong *)(lVar4 + 0x11b408) >> 3;
        if (uVar18 == 0) {
          local_1d8 = (longlong *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_1800180c0();
          }
          plVar12 = (longlong *)FUN_1800039c0(uVar18 * 8);
          local_1c0 = plVar12 + uVar18;
          sVar19 = *(longlong *)(lVar4 + 0x11b410) - (longlong)*(void **)(lVar4 + 0x11b408);
          local_1d8 = plVar12;
          local_1a0 = plVar12;
          local_190 = local_1c0;
          memmove(plVar12,*(void **)(lVar4 + 0x11b408),sVar19);
          plStack_198 = plVar12 + ((longlong)sVar19 >> 3);
        }
        plVar12 = plStack_198;
        _Src = DFHack::PersistentDataItem::val(pPVar9);
        local_90 = (undefined1 (*) [32])0x0;
        lStack_88 = 0;
        local_80 = 0;
        local_78 = 0;
        uVar18 = *(ulonglong *)(_Src + 0x10);
        if (0xf < *(ulonglong *)(_Src + 0x18)) {
          _Src = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)_Src;
        }
        if (0x7fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_180018060();
        }
        if (uVar18 < 0x10) {
          local_78 = 0xf;
          local_90 = *(undefined1 (**) [32])_Src;
          lStack_88 = *(longlong *)(_Src + 8);
          local_80 = uVar18;
        }
        else {
          uVar20 = uVar18 | 0xf;
          if (uVar20 < 0x8000000000000000) {
            if (uVar20 < 0x16) {
              uVar20 = 0x16;
            }
          }
          else {
            uVar20 = 0x7fffffffffffffff;
          }
          local_90 = (undefined1 (*) [32])FUN_1800039c0(uVar20 + 1);
          local_80 = uVar18;
          local_78 = uVar20;
          memcpy(local_90,_Src,uVar18 + 1);
        }
        piVar10 = DFHack::PersistentDataItem::ival(pPVar9,0);
        iVar3 = *piVar10;
        pauVar17 = (undefined1 (*) [32])&local_90;
        if (0xf < local_78) {
          pauVar17 = local_90;
        }
        local_204[0] = iVar3;
        if (local_80 == 0) {
          uVar18 = 0xffffffffffffffff;
        }
        else {
          pauVar1 = (undefined1 (*) [32])(*pauVar17 + local_80);
          pauVar13 = thunk_FUN_18004f020(pauVar17,pauVar1,0x3a);
          uVar18 = 0xffffffffffffffff;
          if (pauVar13 != pauVar1) {
            uVar18 = (longlong)pauVar13 - (longlong)pauVar17;
          }
        }
        local_b0 = (char *)0x0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        uVar20 = uVar18;
        if (local_80 < uVar18) {
          uVar20 = local_80;
        }
        pauVar17 = (undefined1 (*) [32])&local_90;
        if (0xf < local_78) {
          pauVar17 = local_90;
        }
        if (0x7fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_180018060();
        }
        if (uVar20 < 0x10) {
          uStack_98 = 0xf;
          local_a0 = uVar20;
          memcpy(&local_b0,pauVar17,uVar20);
          *(undefined1 *)((longlong)&local_b0 + uVar20) = 0;
        }
        else {
          uVar21 = uVar20 | 0xf;
          if (uVar21 < 0x8000000000000000) {
            if (uVar21 < 0x16) {
              uVar21 = 0x16;
            }
          }
          else {
            uVar21 = 0x7fffffffffffffff;
          }
          pcVar14 = (char *)FUN_1800039c0(uVar21 + 1);
          local_b0 = pcVar14;
          local_a0 = uVar20;
          uStack_98 = uVar21;
          memcpy(pcVar14,pauVar17,uVar20);
          pcVar14[uVar20] = '\0';
        }
        FUN_18000ebd0(&local_70,&local_b0);
        uVar20 = uStack_58;
        sVar19 = local_60;
        ppppuVar6 = local_70;
        for (plVar22 = local_1d8; plVar22 != plVar12; plVar22 = plVar22 + 1) {
          _Buf1 = (undefined8 *)*plVar22;
          pppppuVar16 = &local_70;
          if (0xf < uVar20) {
            pppppuVar16 = (undefined8 *****)ppppuVar6;
          }
          _Size = _Buf1[2];
          if (0xf < (ulonglong)_Buf1[3]) {
            _Buf1 = (undefined8 *)*_Buf1;
          }
          if ((_Size == sVar19) &&
             ((_Size == 0 || (iVar8 = memcmp(_Buf1,pppppuVar16,_Size), iVar8 == 0)))) break;
        }
        FUN_180017da0((longlong *)&local_70);
        if (plVar22 == plVar12) {
          bVar7 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d030,3);
          if (bVar7) {
            pcVar15 = (color_ostream *)
                      DFHack::DebugCategory::getStream
                                ((DebugCategory *)&PTR_s_autofarm_18007d030,(level)local_148,
                                 (color_ostream *)0x3);
            local_50 = (undefined1 (*) [32])&local_90;
            if (0xf < local_78) {
              local_50 = local_90;
            }
            local_48 = local_80;
            local_188 = 0xd;
            local_180 = &local_50;
            local_178 = "threshold for unknown plant {} in saved configuration ignored\n";
            local_170 = 0x3e;
            FUN_180041d90(&local_70,(longlong *)&local_178,&local_188);
            DFHack::color_ostream::flush_buffer(pcVar15,false);
            (**(code **)(*(longlong *)pcVar15 + 0x10))(pcVar15,*(undefined4 *)(pcVar15 + 0x10));
            if (0xf < uStack_58) {
              pppppuVar16 = (undefined8 *****)local_70;
              if ((0xfff < uStack_58 + 1) &&
                 (pppppuVar16 = (undefined8 *****)local_70[-1],
                 0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppuVar16)))) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              free(pppppuVar16);
            }
            DFHack::DebugCategory::ostream_proxy_prefix::_vbase_destructor_(local_148);
          }
        }
        else if (uVar18 == 0xffffffffffffffff) {
          local_1e0[0] = *(int *)(*plVar22 + 0x20);
          plVar12 = FUN_180011730(local_1c8,local_1e0);
          *(int *)plVar12 = iVar3;
          bVar7 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d030,2);
          if (bVar7) {
            pcVar15 = (color_ostream *)
                      DFHack::DebugCategory::getStream
                                ((DebugCategory *)&PTR_s_autofarm_18007d030,(level)local_148,
                                 (color_ostream *)0x2);
            local_168 = "threshold of {} for plant {} in saved configuration loaded\n";
            local_160 = 0x3b;
            FUN_18000d810(pcVar15,(longlong *)&local_168,local_204,&local_90);
            DFHack::DebugCategory::ostream_proxy_prefix::_vbase_destructor_(local_148);
          }
        }
        else {
          uVar18 = uVar18 + 1;
          local_70 = (undefined8 *****)0x0;
          uStack_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          if (local_80 < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_180018140();
          }
          uVar20 = 0xffffffffffffffff;
          if (local_80 - uVar18 != 0xffffffffffffffff) {
            uVar20 = local_80 - uVar18;
          }
          pauVar17 = (undefined1 (*) [32])&local_90;
          if (0xf < local_78) {
            pauVar17 = local_90;
          }
          _Src_00 = (void *)((longlong)*pauVar17 + uVar18);
          if (0x7fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_180018060();
          }
          if (uVar20 < 0x10) {
            uStack_58 = 0xf;
            local_60 = uVar20;
            memcpy(&local_70,_Src_00,uVar20);
            *(undefined1 *)((longlong)&local_70 + uVar20) = 0;
          }
          else {
            uVar18 = uVar20 | 0xf;
            if (uVar18 < 0x8000000000000000) {
              if (uVar18 < 0x16) {
                uVar18 = 0x16;
              }
            }
            else {
              uVar18 = 0x7fffffffffffffff;
            }
            pppppuVar16 = (undefined8 *****)FUN_1800039c0(uVar18 + 1);
            local_70 = pppppuVar16;
            local_60 = uVar20;
            uStack_58 = uVar18;
            memcpy(pppppuVar16,_Src_00,uVar20);
            *(undefined1 *)((longlong)pppppuVar16 + uVar20) = 0;
          }
          uVar18 = FUN_18001b2d0(*plVar22,&local_70);
          if ((char)uVar18 == '\0') {
            bVar7 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d030,3);
            if (bVar7) {
              pcVar15 = (color_ostream *)
                        DFHack::DebugCategory::getStream
                                  ((DebugCategory *)&PTR_s_autofarm_18007d030,(level)local_148,
                                   (color_ostream *)0x3);
              local_1f8 = "threshold for unknown growth {} in saved configuration ignored\n";
              local_1f0 = 0x3f;
              FUN_18000d920(pcVar15,(longlong *)&local_1f8,&local_90);
              goto LAB_18001cf9f;
            }
          }
          else {
            FUN_18001e950((longlong)local_1c8,*(int *)(*plVar22 + 0x20),&local_70,iVar3);
            bVar7 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d030,2);
            if (bVar7) {
              pcVar15 = (color_ostream *)
                        DFHack::DebugCategory::getStream
                                  ((DebugCategory *)&PTR_s_autofarm_18007d030,(level)local_148,
                                   (color_ostream *)0x2);
              local_158 = "threshold of {} for growth {} in saved configuration loaded\n";
              local_150 = 0x3c;
              FUN_18000d810(pcVar15,(longlong *)&local_158,local_204,&local_90);
LAB_18001cf9f:
              DFHack::DebugCategory::ostream_proxy_prefix::_vbase_destructor_(local_148);
            }
          }
          if (0xf < uStack_58) {
            pppppuVar16 = (undefined8 *****)local_70;
            if ((0xfff < uStack_58 + 1) &&
               (pppppuVar16 = (undefined8 *****)local_70[-1],
               0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pppppuVar16)))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            free(pppppuVar16);
          }
        }
        if (0xf < uStack_98) {
          pcVar14 = local_b0;
          if ((0xfff < uStack_98 + 1) &&
             (pcVar14 = *(char **)(local_b0 + -8),
             (char *)0x1f < local_b0 + (-8 - (longlong)pcVar14))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          free(pcVar14);
        }
        if (0xf < local_78) {
          pauVar17 = local_90;
          if ((0xfff < local_78 + 1) &&
             (pauVar17 = *(undefined1 (**) [32])((longlong)local_90[-1] + 0x18),
             0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pauVar17)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          free(pauVar17);
        }
        local_80 = 0;
        local_78 = 0xf;
        local_90 = (undefined1 (*) [32])((ulonglong)local_90 & 0xffffffffffffff00);
        if (local_1d8 != (longlong *)0x0) {
          plVar12 = local_1d8;
          if ((0xfff < ((longlong)local_1c0 - (longlong)local_1d8 & 0xfffffffffffffff8U)) &&
             (plVar12 = (longlong *)local_1d8[-1],
             0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          free(plVar12);
        }
      }
      pPVar9 = pPVar9 + 0x10;
    } while (pPVar9 != local_1d0);
  }
  if (local_1b8 != (PersistentDataItem *)0x0) {
    pPVar9 = local_1b8;
    local_1d0 = pPStack_1b0;
    if (local_1b8 != pPStack_1b0) {
      do {
        DFHack::PersistentDataItem::~PersistentDataItem(pPVar9);
        pPVar9 = pPVar9 + 0x10;
      } while (pPVar9 != local_1d0);
    }
    pPVar9 = local_1b8;
    if ((0xfff < (local_1a8 - (longlong)local_1b8 & 0xfffffffffffffff0U)) &&
       (pPVar9 = *(PersistentDataItem **)(local_1b8 + -8),
       (PersistentDataItem *)0x1f < local_1b8 + (-8 - (longlong)pPVar9))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pPVar9);
  }
  return;
}



/* RVA 0x1d440; VA 18001d440; FUN_18001d440 */

void * FUN_18001d440(void *param_1,void *param_2,size_t param_3)

{
  memmove(param_1,param_2,param_3);
  return param_1;
}



/* RVA 0x1d470; VA 18001d470; FUN_18001d470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001d470(longlong **param_1,longlong param_2)

{
  longlong **pplVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  bool bVar5;
  int iVar6;
  vector<df::item*___ptr64,std::allocator<df::item*___ptr64>_> *pvVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  vector<df::building*___ptr64,std::allocator<df::building*___ptr64>_> *pvVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong **pplVar23;
  longlong **local_res8;
  longlong local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  longlong *local_108;
  undefined8 uStack_100;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *local_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  int local_a8 [2];
  longlong **local_a0;
  longlong **local_98;
  uint *local_90;
  longlong **local_80;
  longlong *local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  
  _DAT_18007d7b0 = *(undefined4 *)(*(longlong *)world_exref + 0x134c10);
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_18001a1e0((longlong)param_1);
  pplVar1 = param_1 + 5;
  local_a0 = pplVar1;
  FUN_180018cd0((longlong *)pplVar1);
  local_res18[0] = 0x6e8524;
  FUN_180018d80((longlong *)(param_1 + 7));
  local_90 = local_res18;
  local_98 = param_1;
  pvVar7 = DFHack::
           DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>::
           operator[]((DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>
                       *)(*(longlong *)world_exref + 0x13f78),0x73);
  plVar18 = *(longlong **)(pvVar7 + 8);
  plVar9 = *(longlong **)pvVar7;
  if (plVar9 != plVar18) {
    do {
      plVar8 = (longlong *)*plVar9;
      local_res20[0] = (**(code **)(*plVar8 + 0x18))(plVar8);
      if ((local_res18[0] & *(uint *)(plVar8 + 2)) == 0) {
        plVar12 = (longlong *)param_1[0xb][1];
        cVar2 = *(char *)((longlong)plVar12 + 0x19);
        plVar14 = param_1[0xb];
        while (cVar2 == '\0') {
          plVar20 = plVar12;
          if ((int)plVar12[4] < local_res20[0]) {
            plVar12 = plVar12 + 2;
            plVar20 = plVar14;
          }
          plVar12 = (longlong *)*plVar12;
          plVar14 = plVar20;
          cVar2 = *(char *)((longlong)plVar12 + 0x19);
        }
        if ((*(char *)((longlong)plVar14 + 0x19) == '\0') && ((int)plVar14[4] <= local_res20[0])) {
          iVar6 = (**(code **)(*plVar8 + 0x478))(plVar8);
          plVar8 = FUN_180011730((longlong *)pplVar1,local_res20);
          *(int *)plVar8 = (int)*plVar8 + iVar6;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar18);
    local_a0 = param_1 + 5;
  }
  pvVar7 = DFHack::
           DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>::
           operator[]((DfOtherVectors<df::items_other,df::enums::items_other_id::items_other_id,df::item>
                       *)(*(longlong *)world_exref + 0x13f78),0x75);
  puVar22 = *(undefined8 **)(pvVar7 + 8);
  puVar21 = *(undefined8 **)pvVar7;
  if (puVar21 != puVar22) {
    do {
      FUN_180012840((longlong *)&local_98,(longlong *)*puVar21);
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar22);
    local_a0 = param_1 + 5;
  }
  pplVar23 = param_1 + 7;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_e8 = (longlong *)FUN_180064554(0x38);
  *local_e8 = (longlong)local_e8;
  local_e8[1] = (longlong)local_e8;
  local_e8[2] = (longlong)local_e8;
  *(undefined2 *)(local_e8 + 3) = 0x101;
  plVar18 = (longlong *)*param_1[0xb];
  cVar2 = *(char *)((longlong)plVar18 + 0x19);
  pplVar1 = param_1;
  pplVar4 = param_1 + 5;
  do {
    if (cVar2 != '\0') {
      local_d8 = (longlong *)0x0;
      plStack_d0 = (longlong *)0x0;
      local_c8 = (longlong *)0x0;
      pvVar16 = DFHack::
                DfOtherVectors<df::buildings_other,df::enums::buildings_other_id::buildings_other_id,df::building>
                ::operator[]((DfOtherVectors<df::buildings_other,df::enums::buildings_other_id::buildings_other_id,df::building>
                              *)(*(longlong *)world_exref + 0x1ca38),0x87);
      puVar21 = *(undefined8 **)(pvVar16 + 8);
      for (puVar22 = *(undefined8 **)pvVar16; puVar22 != puVar21; puVar22 = puVar22 + 1) {
        pplVar4 = (longlong **)*puVar22;
        bVar5 = DFHack::virtual_identity::is_instance((virtual_identity *)_identity_exref,pplVar4);
        pplVar23 = (longlong **)0x0;
        if (bVar5) {
          pplVar23 = pplVar4;
        }
        local_res8 = pplVar23;
        if (((*(byte *)((longlong)pplVar23 + 0x24) & 1) != 0) &&
           (uVar17 = FUN_18001bee0(pplVar1,*(uint *)(pplVar23 + 10)), (char)uVar17 == '\0')) {
          plVar18 = FUN_18001acf0(pplVar1,(longlong *)&local_108,(longlong)pplVar23);
          if (plStack_d0 == local_c8) {
            FUN_1800052f0((longlong *)&local_d8,plStack_d0,(longlong *)&local_res8,plVar18);
          }
          else {
            *plStack_d0 = (longlong)pplVar23;
            FUN_18000f700(plStack_d0 + 1,plVar18);
            plStack_d0 = plStack_d0 + 3;
          }
          cVar2 = *(char *)(local_108[1] + 0x19);
          plVar18 = (longlong *)local_108[1];
          while (cVar2 == '\0') {
            FUN_180006750(&local_108,&local_108,(longlong *)plVar18[2]);
            plVar9 = (longlong *)*plVar18;
            free(plVar18);
            plVar18 = plVar9;
            cVar2 = *(char *)((longlong)plVar9 + 0x19);
          }
          free(local_108);
        }
      }
      FUN_18001f9f0(pplVar1,param_2,(longlong *)&local_e8,&local_d8);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)(param_2 + 8),FUN_18000c140);
      plVar18 = plStack_d0;
      if (local_d8 != (longlong *)0x0) {
        if (local_d8 != plStack_d0) {
          plVar9 = local_d8 + 1;
          do {
            FUN_180006290(plVar9,plVar9);
            plVar8 = plVar9 + 2;
            plVar9 = plVar9 + 3;
          } while (plVar8 != plVar18);
        }
        plVar18 = local_d8;
        if ((0xfff < (ulonglong)((((longlong)local_c8 - (longlong)local_d8) / 0x18) * 0x18)) &&
           (plVar18 = (longlong *)local_d8[-1],
           0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)plVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(plVar18);
        local_d8 = (longlong *)0x0;
        plStack_d0 = (longlong *)0x0;
        local_c8 = (longlong *)0x0;
      }
      FUN_180006550(&local_e8,&local_e8,(longlong *)local_e8[1]);
      free(local_e8);
      return;
    }
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)world_exref + 0x11b408) + (longlong)(int)plVar18[4] * 8);
    local_a8[0] = *(int *)(lVar3 + 0x20);
    plVar9 = (longlong *)(*pplVar1)[1];
    cVar2 = *(char *)((longlong)plVar9 + 0x19);
    plVar8 = *pplVar1;
    while (cVar2 == '\0') {
      plVar12 = plVar9;
      if (*(int *)((longlong)plVar9 + 0x1c) < local_a8[0]) {
        plVar9 = plVar9 + 2;
        plVar12 = plVar8;
      }
      plVar9 = (longlong *)*plVar9;
      plVar8 = plVar12;
      cVar2 = *(char *)((longlong)plVar9 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) == '\0') &&
       (*(int *)((longlong)plVar8 + 0x1c) <= local_a8[0])) {
      pplVar10 = (longlong **)FUN_180011730((longlong *)pplVar1,local_a8);
    }
    else {
      pplVar10 = pplVar1 + 2;
    }
    iVar6 = *(int *)pplVar10;
    plVar9 = *pplVar4;
    local_108 = (longlong *)plVar9[1];
    uStack_100 = uStack_100 & 0xffffffff00000000;
    plVar8 = plVar9;
    if (*(char *)((longlong)local_108 + 0x19) == '\0') {
      plVar12 = local_108;
      do {
        local_108 = plVar12;
        if (*(int *)((longlong)local_108 + 0x1c) < *(int *)(lVar3 + 0x20)) {
          uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
          plVar14 = local_108 + 2;
        }
        else {
          uStack_100 = CONCAT44(uStack_100._4_4_,1);
          plVar14 = local_108;
          plVar8 = local_108;
        }
        plVar12 = (longlong *)*plVar14;
      } while (*(char *)(*plVar14 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') ||
       (*(int *)(lVar3 + 0x20) < *(int *)((longlong)plVar8 + 0x1c))) {
      if (pplVar4[1] == (longlong *)0x666666666666666) {
LAB_18001dd31:
                    /* WARNING: Subroutine does not return */
        FUN_180017a10();
      }
      local_68 = 0;
      local_70 = pplVar4;
      plVar8 = (longlong *)FUN_180064554(0x28);
      *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)(lVar3 + 0x20);
      *(undefined4 *)(plVar8 + 4) = 0;
      *plVar8 = (longlong)plVar9;
      plVar8[1] = (longlong)plVar9;
      plVar8[2] = (longlong)plVar9;
      *(undefined2 *)(plVar8 + 3) = 0;
      local_68 = 0;
      plVar8 = FUN_180015ac0((longlong *)pplVar4,(longlong *)&local_108,plVar8);
    }
    if ((int)plVar8[4] < iVar6) {
LAB_18001d86e:
      plVar9 = *(longlong **)plVar18[5];
      cVar2 = *(char *)((longlong)plVar9 + 0x19);
      plVar8 = local_e8;
      while (local_e8 = plVar8, cVar2 == '\0') {
        iVar6 = *(int *)((longlong)plVar9 + 0x1c);
        plVar12 = (longlong *)plVar8[1];
        uStack_b8 = 0;
        cVar2 = *(char *)((longlong)plVar12 + 0x19);
        local_c0 = plVar12;
        plVar14 = plVar8;
        while (plVar20 = plVar12, cVar2 == '\0') {
          bVar5 = iVar6 <= (int)plVar20[4];
          plVar12 = plVar20;
          plVar19 = plVar20;
          if (!bVar5) {
            plVar12 = plVar20 + 2;
            plVar19 = plVar14;
          }
          uStack_b8 = (uint)bVar5;
          cVar2 = *(char *)(*plVar12 + 0x19);
          plVar12 = (longlong *)*plVar12;
          local_c0 = plVar20;
          plVar14 = plVar19;
        }
        if ((*(char *)((longlong)plVar14 + 0x19) != '\0') || (iVar6 < (int)plVar14[4])) {
          if (local_e0 == 0x492492492492492) goto LAB_18001dd37;
          local_98 = &local_e8;
          local_90 = (uint *)0x0;
          plVar12 = (longlong *)FUN_180064554(0x38);
          *(int *)(plVar12 + 4) = iVar6;
          plVar12[5] = 0;
          plVar12[6] = 0;
          local_90 = (uint *)plVar12;
          lVar13 = FUN_180064554(0x20);
          *(longlong *)lVar13 = lVar13;
          *(longlong *)(lVar13 + 8) = lVar13;
          *(longlong *)(lVar13 + 0x10) = lVar13;
          *(undefined2 *)(lVar13 + 0x18) = 0x101;
          plVar12[5] = lVar13;
          *plVar12 = (longlong)plVar8;
          plVar12[1] = (longlong)plVar8;
          plVar12[2] = (longlong)plVar8;
          *(undefined2 *)(plVar12 + 3) = 0;
          local_90 = (uint *)0x0;
          uStack_100 = CONCAT44(uStack_b4,uStack_b8);
          local_108 = local_c0;
          plVar14 = FUN_180016440((longlong *)&local_e8,(longlong *)&local_108,plVar12);
        }
        plVar8 = plVar14 + 5;
        plVar12 = (longlong *)*plVar8;
        local_c0 = (longlong *)plVar12[1];
        uStack_b8 = 0;
        if (*(char *)((longlong)local_c0 + 0x19) == '\0') {
          plVar20 = local_c0;
          plVar19 = plVar12;
          do {
            local_c0 = plVar20;
            bVar5 = *(int *)(lVar3 + 0x20) <= *(int *)((longlong)local_c0 + 0x1c);
            plVar15 = local_c0;
            plVar12 = local_c0;
            if (!bVar5) {
              plVar15 = local_c0 + 2;
              plVar12 = plVar19;
            }
            uStack_b8 = (uint)bVar5;
            plVar20 = (longlong *)*plVar15;
            plVar19 = plVar12;
          } while (*(char *)(*plVar15 + 0x19) == '\0');
        }
        if ((*(char *)((longlong)plVar12 + 0x19) != '\0') ||
           (*(int *)(lVar3 + 0x20) < *(int *)((longlong)plVar12 + 0x1c))) {
          if (plVar14[6] == 0x7ffffffffffffff) {
LAB_18001dd37:
                    /* WARNING: Subroutine does not return */
            FUN_180017a10();
          }
          lVar13 = *plVar8;
          local_58 = 0;
          local_60 = plVar8;
          plVar12 = (longlong *)FUN_180064554(0x20);
          *(undefined4 *)((longlong)plVar12 + 0x1c) = *(undefined4 *)(lVar3 + 0x20);
          *plVar12 = lVar13;
          plVar12[1] = lVar13;
          plVar12[2] = lVar13;
          *(undefined2 *)(plVar12 + 3) = 0;
          local_58 = 0;
          uStack_100 = CONCAT44(uStack_b4,uStack_b8);
          local_108 = local_c0;
          FUN_180015860(plVar8,(longlong *)&local_108,plVar12);
        }
        plVar8 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x19);
          plVar9 = plVar8;
          plVar8 = (longlong *)*plVar8;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar8 + 0x19);
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar2 = *(char *)(plVar9[1] + 0x19);
          plVar12 = (longlong *)plVar9[1];
          plVar8 = plVar9;
          while ((plVar9 = plVar12, cVar2 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
            cVar2 = *(char *)(plVar9[1] + 0x19);
            plVar12 = (longlong *)plVar9[1];
            plVar8 = plVar9;
          }
        }
        plVar8 = local_e8;
        cVar2 = *(char *)((longlong)plVar9 + 0x19);
      }
    }
    else {
      plVar9 = (longlong *)*pplVar1[3];
      cVar2 = *(char *)((longlong)plVar9 + 0x19);
      while (cVar2 == '\0') {
        if ((int)plVar9[4] == *(int *)(lVar3 + 0x20)) {
          FUN_180006de0((longlong *)pplVar23,(longlong *)&local_c0,(int *)(plVar9 + 4));
          plVar8 = local_b0;
          if ((*(char *)((longlong)local_b0 + 0x19) != '\0') ||
             (uVar11 = FUN_180012e00(pplVar23,(int *)(plVar9 + 4),(int *)(local_b0 + 4)),
             (char)uVar11 != '\0')) {
            if (param_1[8] == (longlong *)0x333333333333333) goto LAB_18001dd31;
            plVar8 = *pplVar23;
            local_78 = (longlong *)0x0;
            local_80 = pplVar23;
            plVar12 = (longlong *)FUN_180064554(0x50);
            *(int *)(plVar12 + 4) = (int)plVar9[4];
            local_78 = plVar12;
            FUN_18000ebd0(plVar12 + 5,plVar9 + 5);
            *(undefined4 *)(plVar12 + 9) = 0;
            *plVar12 = (longlong)plVar8;
            plVar12[1] = (longlong)plVar8;
            plVar12[2] = (longlong)plVar8;
            *(undefined2 *)(plVar12 + 3) = 0;
            local_78 = (longlong *)0x0;
            uStack_100 = CONCAT44(uStack_b4,uStack_b8);
            local_108 = local_c0;
            plVar8 = FUN_1800161e0((longlong *)pplVar23,(longlong *)&local_108,plVar12);
          }
          if ((int)plVar8[9] < (int)plVar9[9]) goto LAB_18001d86e;
        }
        plVar8 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x19);
          plVar9 = plVar8;
          plVar8 = (longlong *)*plVar8;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar8 + 0x19);
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar2 = *(char *)(plVar9[1] + 0x19);
          plVar12 = (longlong *)plVar9[1];
          plVar8 = plVar9;
          while ((plVar9 = plVar12, cVar2 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
            cVar2 = *(char *)(plVar9[1] + 0x19);
            plVar12 = (longlong *)plVar9[1];
            plVar8 = plVar9;
          }
        }
        cVar2 = *(char *)((longlong)plVar9 + 0x19);
      }
    }
    plVar9 = (longlong *)plVar18[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar9 + 0x19);
      plVar18 = plVar9;
      plVar9 = (longlong *)*plVar9;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        plVar18 = plVar9;
        plVar9 = (longlong *)*plVar9;
      }
    }
    else {
      cVar2 = *(char *)(plVar18[1] + 0x19);
      plVar8 = (longlong *)plVar18[1];
      plVar9 = plVar18;
      while ((plVar18 = plVar8, cVar2 == '\0' && (plVar9 == (longlong *)plVar18[2]))) {
        cVar2 = *(char *)(plVar18[1] + 0x19);
        plVar8 = (longlong *)plVar18[1];
        plVar9 = plVar18;
      }
    }
    cVar2 = *(char *)((longlong)plVar18 + 0x19);
    pplVar1 = local_res8;
    param_2 = local_res10;
    pplVar4 = local_a0;
  } while( true );
}



/* RVA 0x1dd60; VA 18001dd60; FUN_18001dd60 */

void FUN_18001dd60(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    *puVar1 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  FUN_1800057a0(param_1,puVar1,param_2);
  return;
}



/* RVA 0x1dd80; VA 18001dd80; FUN_18001dd80 */

void FUN_18001dd80(longlong *param_1,PluginCommand *param_2)

{
  PluginCommand *this;
  
  this = (PluginCommand *)param_1[1];
  if (this != (PluginCommand *)param_1[2]) {
    DFHack::PluginCommand::PluginCommand(this,param_2);
    param_1[1] = param_1[1] + 0x78;
    return;
  }
  FUN_180005920(param_1,this,param_2);
  return;
}



/* RVA 0x1ddd0; VA 18001ddd0; FUN_18001ddd0 */

void FUN_18001ddd0(lua_State *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  char *****pppppcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char ****local_48;
  longlong lStack_40;
  __uint64 local_38;
  ulonglong local_30;
  
  lua_createtable(param_1,0,0);
  plVar6 = *(longlong **)*param_2;
  cVar1 = *(char *)((longlong)plVar6 + 0x19);
  while( true ) {
    if (cVar1 != '\0') {
      return;
    }
    lua_pushinteger(param_1,(longlong)(int)plVar6[4]);
    lua_gettable(param_1,-2);
    iVar4 = lua_type(param_1,-1);
    if (iVar4 == 0) {
      lua_settop(param_1,-2);
      lua_createtable(param_1,0,0);
      lua_pushinteger(param_1,(longlong)(int)plVar6[4]);
      lua_pushvalue(param_1,-2);
      lua_settable(param_1,-4);
    }
    local_48 = (char ****)0x0;
    lStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uVar2 = plVar6[7];
    plVar8 = plVar6 + 5;
    if (0xf < (ulonglong)plVar6[8]) {
      plVar8 = (longlong *)*plVar8;
    }
    if (0x7fffffffffffffff < uVar2) break;
    if (uVar2 < 0x10) {
      local_30 = 0xf;
      local_48 = (char ****)*plVar8;
      lStack_40 = plVar8[1];
      local_38 = uVar2;
    }
    else {
      uVar7 = uVar2 | 0xf;
      if (uVar7 < 0x8000000000000000) {
        if (uVar7 < 0x16) {
          uVar7 = 0x16;
        }
      }
      else {
        uVar7 = 0x7fffffffffffffff;
      }
      local_48 = (char ****)FUN_1800039c0(uVar7 + 1);
      local_38 = uVar2;
      local_30 = uVar7;
      memcpy(local_48,plVar8,uVar2 + 1);
    }
    pppppcVar5 = &local_48;
    if (0xf < local_30) {
      pppppcVar5 = (char *****)local_48;
    }
    lua_pushlstring(param_1,(char *)pppppcVar5,local_38);
    FUN_180017da0((longlong *)&local_48);
    lua_pushinteger(param_1,(longlong)(int)plVar6[9]);
    lua_settable(param_1,-3);
    lua_settop(param_1,-2);
    plVar8 = (longlong *)plVar6[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar6 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar6 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar1 = *(char *)(plVar6[1] + 0x19);
      plVar3 = (longlong *)plVar6[1];
      plVar8 = plVar6;
      while ((plVar6 = plVar3, cVar1 == '\0' && (plVar8 == (longlong *)plVar6[2]))) {
        cVar1 = *(char *)(plVar6[1] + 0x19);
        plVar3 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      }
    }
    cVar1 = *(char *)((longlong)plVar6 + 0x19);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018060();
}



/* RVA 0x1e010; VA 18001e010; FUN_18001e010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001e010(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [48];
  longlong local_58;
  longlong lStack_50;
  longlong local_48 [2];
  int local_38 [2];
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_18007d140 ^ (ulonglong)auStack_88;
  local_38[0] = param_2;
  FUN_18000ebd0(local_30,param_3);
  plVar1 = FUN_180005db0((longlong *)(param_1 + 0x18),local_48,local_38);
  local_58 = *plVar1;
  lStack_50 = plVar1[1];
  FUN_1800144e0((longlong *)(param_1 + 0x18),&local_58);
  FUN_180017da0(local_30);
  return;
}



/* RVA 0x1e090; VA 18001e090; FUN_18001e090 */

void FUN_18001e090(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)*param_1;
  plVar2 = (longlong *)local_10[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  local_18 = local_10;
  plVar3 = plVar2;
  while (cVar1 == '\0') {
    if (*(int *)((longlong)plVar3 + 0x1c) < param_2) {
      plVar3 = plVar3 + 2;
    }
    else {
      local_18 = plVar3;
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') &&
         (param_2 < *(int *)((longlong)plVar3 + 0x1c))) {
        local_10 = plVar3;
      }
    }
    plVar3 = (longlong *)*plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar2 = (longlong *)*local_10;
  }
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  while (cVar1 == '\0') {
    if (param_2 < *(int *)((longlong)plVar2 + 0x1c)) {
      plVar3 = (longlong *)*plVar2;
      local_10 = plVar2;
    }
    else {
      plVar3 = (longlong *)plVar2[2];
    }
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  FUN_180014360(param_1,(longlong *)&local_18);
  return;
}



/* RVA 0x1e140; VA 18001e140; FUN_18001e140 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001e140(undefined8 *param_1)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  PersistentDataItem *pPVar7;
  longlong lVar8;
  undefined8 uVar9;
  PersistentDataItem *pPVar10;
  longlong *plVar11;
  int *piVar12;
  uint *puVar13;
  char *******pppppppcVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  undefined8 *******pppppppuVar16;
  longlong *plVar17;
  undefined8 *******pppppppuVar18;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 *_Src;
  ulonglong uVar22;
  ulonglong uVar23;
  PersistentDataItem *pPVar24;
  ulonglong uVar25;
  undefined1 auStackY_128 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_f0 [16];
  PersistentDataItem *local_e0;
  PersistentDataItem *pPStack_d8;
  longlong local_d0;
  char ******local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 ******local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 ******local_80;
  longlong lStack_78;
  size_t local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_18007d140 ^ (ulonglong)auStackY_128;
  iVar5 = *(int *)(param_1 + 2);
  piVar12 = DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0xf),0);
  *piVar12 = iVar5;
  bVar3 = *PTR_plugin_is_enabled_18007d010;
  puVar13 = (uint *)DFHack::PersistentDataItem::ival((PersistentDataItem *)(param_1 + 0x11),0);
  *puVar13 = (uint)bVar3;
  local_e0 = (PersistentDataItem *)0x0;
  pPStack_d8 = (PersistentDataItem *)0x0;
  local_d0 = 0;
  local_c0 = (char ******)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (char ******)FUN_1800039c0(0x20);
  uVar9 = s_autofarm_threshold__180068a28._8_8_;
  local_b0 = _DAT_180069050;
  uStack_a8 = _UNK_180069058;
  *local_c0 = (char *****)s_autofarm_threshold__180068a28._0_8_;
  local_c0[1] = (char *****)uVar9;
  *(undefined2 *)(local_c0 + 2) = s_autofarm_threshold__180068a28._16_2_;
  *(char *)((longlong)local_c0 + 0x12) = s_autofarm_threshold__180068a28[0x12];
  *(char *)((longlong)local_c0 + 0x13) = '\0';
  DFHack::World::GetPersistentSiteData
            ((vector<DFHack::PersistentDataItem,std::allocator<DFHack::PersistentDataItem>_> *)
             &local_e0,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
             true);
  pPVar24 = local_e0;
  pPVar7 = pPStack_d8;
  if (0xf < uStack_a8) {
    pppppppcVar14 = (char *******)local_c0;
    if ((0xfff < uStack_a8 + 1) &&
       (pppppppcVar14 = (char *******)local_c0[-1],
       (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppppcVar14)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppppcVar14);
    pPVar24 = local_e0;
    pPVar7 = pPStack_d8;
  }
  for (; pPVar10 = pPStack_d8, pPVar24 != pPStack_d8; pPVar24 = pPVar24 + 0x10) {
    pPStack_d8 = pPVar7;
    DFHack::World::DeletePersistentData(pPVar24);
    pPVar7 = pPStack_d8;
    pPStack_d8 = pPVar10;
  }
  plVar20 = *(longlong **)*param_1;
  cVar4 = *(char *)((longlong)plVar20 + 0x19);
  uVar1 = _DAT_180069000;
  uVar21 = _UNK_180069008;
  pPStack_d8 = pPVar7;
  while (_DAT_180069000 = uVar1, _UNK_180069008 = uVar21, cVar4 == '\0') {
    pbVar19 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
               (*(longlong *)(*(longlong *)world_exref + 0x11b408) +
               (longlong)*(int *)((longlong)plVar20 + 0x1c) * 8);
    sVar6 = *(size_t *)(pbVar19 + 0x10);
    if (0x7fffffffffffffff - sVar6 < 0x13) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    pbVar15 = pbVar19;
    if (0xf < *(ulonglong *)(pbVar19 + 0x18)) {
      pbVar15 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar19;
    }
    local_c0 = (char ******)0x0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uVar1 = sVar6 + 0x13;
    uVar21 = 0xf;
    pppppppcVar14 = &local_c0;
    if (0xf < uVar1) {
      uVar21 = uVar1 | 0xf;
      if (uVar21 < 0x8000000000000000) {
        if (uVar21 < 0x16) {
          uVar21 = 0x16;
        }
      }
      else {
        uVar21 = 0x7fffffffffffffff;
      }
      pppppppcVar14 = (char *******)FUN_1800039c0(uVar21 + 1);
      local_c0 = (char ******)pppppppcVar14;
    }
    local_b0 = uVar1;
    uStack_a8 = uVar21;
    *pppppppcVar14 = (char ******)s_autofarm_threshold__180068a28._0_8_;
    pppppppcVar14[1] = (char ******)s_autofarm_threshold__180068a28._8_8_;
    *(undefined2 *)(pppppppcVar14 + 2) = s_autofarm_threshold__180068a28._16_2_;
    *(char *)((longlong)pppppppcVar14 + 0x12) = s_autofarm_threshold__180068a28[0x12];
    memcpy((char *)((longlong)pppppppcVar14 + 0x13),pbVar15,sVar6);
    *(char *)((longlong)pppppppcVar14 + uVar1) = '\0';
    DFHack::World::AddPersistentSiteData(local_f0);
    pbVar15 = DFHack::PersistentDataItem::val((PersistentDataItem *)local_f0);
    if (pbVar15 != pbVar19) {
      pbVar2 = pbVar19 + 0x10;
      if (0xf < *(ulonglong *)(pbVar19 + 0x18)) {
        pbVar19 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar19;
      }
      FUN_180018510((longlong *)pbVar15,pbVar19,*(size_t *)pbVar2);
    }
    lVar8 = plVar20[4];
    piVar12 = DFHack::PersistentDataItem::ival((PersistentDataItem *)local_f0,0);
    *piVar12 = (int)lVar8;
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)local_f0);
    if (0xf < uStack_a8) {
      pppppppcVar14 = (char *******)local_c0;
      if ((0xfff < uStack_a8 + 1) &&
         (pppppppcVar14 = (char *******)local_c0[-1],
         (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppppcVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pppppppcVar14);
    }
    plVar17 = (longlong *)plVar20[2];
    if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar17 + 0x19);
      plVar20 = plVar17;
      plVar17 = (longlong *)*plVar17;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar17 + 0x19);
        plVar20 = plVar17;
        plVar17 = (longlong *)*plVar17;
      }
    }
    else {
      cVar4 = *(char *)(plVar20[1] + 0x19);
      plVar11 = (longlong *)plVar20[1];
      plVar17 = plVar20;
      while ((plVar20 = plVar11, cVar4 == '\0' && (plVar17 == (longlong *)plVar20[2]))) {
        cVar4 = *(char *)(plVar20[1] + 0x19);
        plVar11 = (longlong *)plVar20[1];
        plVar17 = plVar20;
      }
    }
    uVar1 = _DAT_180069000;
    uVar21 = _UNK_180069008;
    cVar4 = *(char *)((longlong)plVar20 + 0x19);
  }
  plVar20 = *(longlong **)param_1[3];
  cVar4 = *(char *)((longlong)plVar20 + 0x19);
  pPVar24 = pPStack_d8;
  while (pPStack_d8 = pPVar24, cVar4 == '\0') {
    _Src = *(undefined8 **)
            (*(longlong *)(*(longlong *)world_exref + 0x11b408) + (longlong)(int)plVar20[4] * 8);
    sVar6 = _Src[2];
    if (sVar6 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    if (0xf < (ulonglong)_Src[3]) {
      _Src = (undefined8 *)*_Src;
    }
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    uVar25 = sVar6 + 1;
    uVar22 = 0xf;
    pppppppuVar16 = &local_a0;
    if (0xf < uVar25) {
      uVar22 = uVar25 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppppuVar16 = (undefined8 *******)FUN_1800039c0(uVar22 + 1);
      local_a0 = pppppppuVar16;
    }
    local_90 = uVar25;
    uStack_88 = uVar22;
    memcpy(pppppppuVar16,_Src,sVar6);
    *(undefined1 *)((longlong)pppppppuVar16 + sVar6) = 0x3a;
    *(undefined1 *)((longlong)pppppppuVar16 + uVar25) = 0;
    plVar17 = plVar20 + 5;
    if (0xf < (ulonglong)plVar20[8]) {
      plVar17 = (longlong *)*plVar17;
    }
    plVar17 = FUN_180018460((longlong *)&local_a0,plVar17,plVar20[7]);
    pppppppuVar16 = (undefined8 *******)*plVar17;
    lStack_78 = plVar17[1];
    sVar6 = plVar17[2];
    uVar25 = plVar17[3];
    *(undefined1 *)plVar17 = 0;
    plVar17[2] = 0;
    plVar17[3] = 0xf;
    local_80 = pppppppuVar16;
    local_70 = sVar6;
    uStack_68 = uVar25;
    if (0xf < uStack_88) {
      pppppppuVar18 = (undefined8 *******)local_a0;
      if ((0xfff < uStack_88 + 1) &&
         (pppppppuVar18 = (undefined8 *******)local_a0[-1],
         0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pppppppuVar18)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pppppppuVar18);
    }
    local_a0 = (undefined8 ******)((ulonglong)local_a0 & 0xffffffffffffff00);
    local_90 = uVar1;
    uStack_88 = uVar21;
    if (0x7fffffffffffffff - sVar6 < 0x13) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    pppppppuVar18 = &local_80;
    if (0xf < uVar25) {
      pppppppuVar18 = pppppppuVar16;
    }
    local_c0 = (char ******)0x0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uVar22 = sVar6 + 0x13;
    uVar23 = 0xf;
    pppppppcVar14 = &local_c0;
    if (0xf < uVar22) {
      uVar23 = uVar22 | 0xf;
      if (uVar23 < 0x8000000000000000) {
        if (uVar23 < 0x16) {
          uVar23 = 0x16;
        }
      }
      else {
        uVar23 = 0x7fffffffffffffff;
      }
      pppppppcVar14 = (char *******)FUN_1800039c0(uVar23 + 1);
      local_c0 = (char ******)pppppppcVar14;
    }
    local_b0 = uVar22;
    uStack_a8 = uVar23;
    *pppppppcVar14 = (char ******)s_autofarm_threshold__180068a28._0_8_;
    pppppppcVar14[1] = (char ******)s_autofarm_threshold__180068a28._8_8_;
    *(undefined2 *)(pppppppcVar14 + 2) = s_autofarm_threshold__180068a28._16_2_;
    *(char *)((longlong)pppppppcVar14 + 0x12) = s_autofarm_threshold__180068a28[0x12];
    memcpy((char *)((longlong)pppppppcVar14 + 0x13),pppppppuVar18,sVar6);
    *(char *)((longlong)pppppppcVar14 + uVar22) = '\0';
    DFHack::World::AddPersistentSiteData(local_f0);
    pbVar19 = DFHack::PersistentDataItem::val((PersistentDataItem *)local_f0);
    if (pbVar19 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_80) {
      pppppppuVar18 = &local_80;
      if (0xf < uVar25) {
        pppppppuVar18 = pppppppuVar16;
      }
      FUN_180018510((longlong *)pbVar19,pppppppuVar18,sVar6);
      pppppppuVar16 = (undefined8 *******)local_80;
      uVar25 = uStack_68;
    }
    lVar8 = plVar20[9];
    piVar12 = DFHack::PersistentDataItem::ival((PersistentDataItem *)local_f0,0);
    *piVar12 = (int)lVar8;
    DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)local_f0);
    if (0xf < uStack_a8) {
      pppppppcVar14 = (char *******)local_c0;
      if ((0xfff < uStack_a8 + 1) &&
         (pppppppcVar14 = (char *******)local_c0[-1],
         (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppppcVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pppppppcVar14);
    }
    local_c0 = (char ******)((ulonglong)local_c0 & 0xffffffffffffff00);
    local_b0 = uVar1;
    uStack_a8 = uVar21;
    if (0xf < uVar25) {
      pppppppuVar18 = pppppppuVar16;
      if ((0xfff < uVar25 + 1) &&
         (pppppppuVar18 = (undefined8 *******)pppppppuVar16[-1],
         0x1f < (ulonglong)((longlong)pppppppuVar16 + (-8 - (longlong)pppppppuVar18)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pppppppuVar18);
    }
    plVar17 = (longlong *)plVar20[2];
    if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar17 + 0x19);
      plVar20 = plVar17;
      plVar17 = (longlong *)*plVar17;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar17 + 0x19);
        plVar20 = plVar17;
        plVar17 = (longlong *)*plVar17;
      }
    }
    else {
      cVar4 = *(char *)(plVar20[1] + 0x19);
      plVar11 = (longlong *)plVar20[1];
      plVar17 = plVar20;
      while ((plVar20 = plVar11, cVar4 == '\0' && (plVar17 == (longlong *)plVar20[2]))) {
        cVar4 = *(char *)(plVar20[1] + 0x19);
        plVar11 = (longlong *)plVar20[1];
        plVar17 = plVar20;
      }
    }
    pPVar24 = pPStack_d8;
    cVar4 = *(char *)((longlong)plVar20 + 0x19);
  }
  pPVar7 = local_e0;
  if (local_e0 != (PersistentDataItem *)0x0) {
    for (; pPVar7 != pPVar24; pPVar7 = pPVar7 + 0x10) {
      DFHack::PersistentDataItem::~PersistentDataItem(pPVar7);
    }
    pPVar24 = local_e0;
    if ((0xfff < (local_d0 - (longlong)local_e0 & 0xfffffffffffffff0U)) &&
       (pPVar24 = *(PersistentDataItem **)(local_e0 + -8),
       (PersistentDataItem *)0x1f < local_e0 + (-8 - (longlong)pPVar24))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pPVar24);
  }
  return;
}



/* RVA 0x1e950; VA 18001e950; FUN_18001e950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001e950(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [48];
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50 [2];
  undefined1 local_48;
  undefined7 uStack_47;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_18007d140 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_50[0] = param_2;
  FUN_18000ebd0((undefined8 *)&local_48,param_3);
  FUN_180006de0(plVar1,(longlong *)&local_68,local_50);
  if (*(char *)((longlong)local_58 + 0x19) == '\0') {
    uVar3 = FUN_180012e00(plVar1,local_50,(int *)(local_58 + 4));
    if ((char)uVar3 == '\0') goto LAB_18001ea4b;
  }
  if (*(longlong *)(param_1 + 0x20) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_180017a10();
  }
  lVar2 = *plVar1;
  uStack_70 = 0;
  local_78 = plVar1;
  plVar4 = (longlong *)FUN_180064554(0x50);
  *(int *)(plVar4 + 4) = local_50[0];
  plVar4[5] = CONCAT71(uStack_47,local_48);
  plVar4[6] = lStack_40;
  plVar4[7] = local_38;
  plVar4[8] = lStack_30;
  local_48 = 0;
  local_38 = 0;
  lStack_30 = 0xf;
  *(undefined4 *)(plVar4 + 9) = 0;
  *plVar4 = lVar2;
  plVar4[1] = lVar2;
  plVar4[2] = lVar2;
  *(undefined2 *)(plVar4 + 3) = 0;
  local_78 = local_68;
  uStack_70 = uStack_60;
  local_58 = FUN_1800161e0(plVar1,(longlong *)&local_78,plVar4);
LAB_18001ea4b:
  *(undefined4 *)(local_58 + 9) = param_4;
  FUN_180017da0((longlong *)&local_48);
  return;
}



/* RVA 0x1ea90; VA 18001ea90; FUN_18001ea90 */

void FUN_18001ea90(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  plVar1 = FUN_180011730(param_1,local_res10);
  *(undefined4 *)plVar1 = param_3;
  return;
}



/* RVA 0x1eab0; VA 18001eab0; FUN_18001eab0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18001eab0(longlong param_1,longlong *param_2)

{
  size_t _Size;
  void *pvVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  void *pvVar9;
  void **ppvVar10;
  longlong *plVar11;
  basic_ostream<char,std::char_traits<char>_> *pbVar12;
  ulonglong uVar13;
  longlong *plVar14;
  char *_Str;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 *_Buf1;
  undefined8 *******pppppppuVar17;
  undefined1 (*pauVar18) [32];
  undefined8 *******pppppppuVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong _Size_00;
  ulonglong uVar22;
  size_t _Size_01;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStackY_1d8 [32];
  uint local_1a8;
  undefined8 *******local_190;
  ulonglong local_188;
  MaterialInfo local_160 [8];
  longlong local_158;
  undefined1 (*local_128) [32];
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  int local_e8 [2];
  undefined8 ******local_e0;
  undefined8 ******ppppppuStack_d8;
  void *local_d0;
  ulonglong uStack_c8;
  undefined8 *******local_c0;
  undefined8 uStack_b8;
  size_t local_b0;
  ulonglong local_a8;
  void *local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 *******local_80;
  void *pvStack_78;
  void *local_70;
  void *pvStack_68;
  ulonglong local_60;
  
  local_60 = DAT_18007d140 ^ (ulonglong)auStackY_1d8;
  local_1a8 = 0;
  local_108 = (undefined8 *******)((ulonglong)local_108 & 0xffffffff00000000);
  _Str = (char *)(*param_2 + 0x20);
  if (0xf < *(ulonglong *)(*param_2 + 0x38)) {
    _Str = *(char **)_Str;
  }
  iVar5 = atoi(_Str);
  uVar3 = _UNK_180069008;
  plVar2 = _DAT_180069000;
  local_188 = 2;
  lVar21 = *param_2;
  if ((ulonglong)(param_2[1] - lVar21 >> 5) < 3) {
LAB_18001f44d:
    FUN_18001e140(DAT_18007d7b8);
    return 0;
  }
LAB_18001eb4f:
  puVar20 = (undefined8 *)(local_188 * 0x20 + lVar21);
  local_128 = (undefined1 (*) [32])0x0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uVar13 = puVar20[2];
  if (0xf < (ulonglong)puVar20[3]) {
    puVar20 = (undefined8 *)*puVar20;
  }
  if (0x7fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  if (uVar13 < 0x10) {
    local_118 = uVar13;
    uStack_110 = 0xf;
    local_128 = (undefined1 (*) [32])*puVar20;
    uStack_120 = puVar20[1];
  }
  else {
    uVar22 = uVar13 | 0xf;
    if (uVar22 < 0x8000000000000000) {
      if (uVar22 < 0x16) {
        uVar22 = 0x16;
      }
    }
    else {
      uVar22 = 0x7fffffffffffffff;
    }
    local_128 = (undefined1 (*) [32])FUN_1800039c0(uVar22 + 1);
    local_118 = uVar13;
    uStack_110 = uVar22;
    memcpy(local_128,puVar20,uVar13 + 1);
  }
  pauVar18 = (undefined1 (*) [32])&local_128;
  if (0xf < uStack_110) {
    pauVar18 = local_128;
  }
  pauVar7 = (undefined1 (*) [32])((longlong)*pauVar18 + local_118);
  pauVar8 = (undefined1 (*) [32])&local_128;
  if (0xf < uStack_110) {
    pauVar8 = local_128;
  }
  if (pauVar8 != pauVar7) {
    lVar21 = (longlong)pauVar18 - (longlong)pauVar8;
    do {
      iVar6 = toupper((int)(char)(*pauVar8)[0]);
      *(char *)(lVar21 + (longlong)pauVar8) = (char)iVar6;
      pauVar8 = (undefined1 (*) [32])(*pauVar8 + 1);
    } while (pauVar8 != pauVar7);
  }
  pauVar18 = (undefined1 (*) [32])&local_128;
  if (0xf < uStack_110) {
    pauVar18 = local_128;
  }
  if (local_118 == 0) {
    uVar13 = 0xffffffffffffffff;
  }
  else {
    pauVar8 = (undefined1 (*) [32])(*pauVar18 + local_118);
    pauVar7 = thunk_FUN_18004f020(pauVar18,pauVar8,0x3a);
    uVar13 = 0xffffffffffffffff;
    if (pauVar7 != pauVar8) {
      uVar13 = (longlong)pauVar7 - (longlong)pauVar18;
    }
  }
  uVar24 = uStack_110;
  uVar22 = local_118;
  pauVar18 = local_128;
  local_c0 = (undefined8 *******)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  _Size_01 = uVar13;
  if (local_118 < uVar13) {
    _Size_01 = local_118;
  }
  pauVar8 = (undefined1 (*) [32])&local_128;
  if (0xf < uStack_110) {
    pauVar8 = local_128;
  }
  if (0x7fffffffffffffff < _Size_01) {
                    /* WARNING: Subroutine does not return */
    FUN_180018060();
  }
  if (_Size_01 < 0x10) {
    local_a8 = 0xf;
    local_b0 = _Size_01;
    memcpy(&local_c0,pauVar8,_Size_01);
    *(undefined1 *)((longlong)&local_c0 + _Size_01) = 0;
    local_190 = local_c0;
    _Size_01 = local_b0;
    uVar23 = local_a8;
  }
  else {
    uVar23 = _Size_01 | 0xf;
    if (uVar23 < 0x8000000000000000) {
      if (uVar23 < 0x16) {
        uVar23 = 0x16;
      }
    }
    else {
      uVar23 = 0x7fffffffffffffff;
    }
    local_190 = (undefined8 *******)FUN_1800039c0(uVar23 + 1);
    local_c0 = local_190;
    local_b0 = _Size_01;
    local_a8 = uVar23;
    memcpy(local_190,pauVar8,_Size_01);
    *(undefined1 *)((longlong)local_190 + _Size_01) = 0;
    uVar22 = local_118;
    uVar24 = uStack_110;
    pauVar18 = local_128;
  }
  local_108 = (undefined8 *******)(CONCAT44(local_108._4_4_,local_1a8) | 4);
  if (uVar13 == 0xffffffffffffffff) {
    uStack_100 = 0;
    local_f8 = plVar2;
    uStack_f0 = uVar3;
    local_108 = (void *)0x0;
    ppvVar10 = (void **)&local_108;
    local_1a8 = local_1a8 | 5;
  }
  else {
    uVar13 = uVar13 + 1;
    local_a0 = (void *)0x0;
    uStack_98 = 0;
    if (uVar22 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_180018140();
    }
    _Size_00 = 0xffffffffffffffff;
    if (uVar22 - uVar13 != 0xffffffffffffffff) {
      _Size_00 = uVar22 - uVar13;
    }
    pauVar8 = (undefined1 (*) [32])&local_128;
    if (0xf < uVar24) {
      pauVar8 = pauVar18;
    }
    if (0x7fffffffffffffff < _Size_00) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    if (_Size_00 < 0x10) {
      local_88 = 0xf;
      local_90 = _Size_00;
      memcpy(&local_a0,*pauVar8 + uVar13,_Size_00);
      *(undefined1 *)((longlong)&local_a0 + _Size_00) = 0;
    }
    else {
      uVar22 = _Size_00 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      pvVar9 = (void *)FUN_1800039c0(uVar22 + 1);
      local_a0 = pvVar9;
      local_90 = _Size_00;
      local_88 = uVar22;
      memcpy(pvVar9,*pauVar8 + uVar13,_Size_00);
      *(undefined1 *)((longlong)pvVar9 + _Size_00) = 0;
    }
    ppvVar10 = &local_a0;
    local_1a8 = local_1a8 | 0xe;
  }
  local_80 = *ppvVar10;
  pvStack_78 = ppvVar10[1];
  pvVar9 = ppvVar10[2];
  pvVar1 = ppvVar10[3];
  *(undefined1 *)ppvVar10 = 0;
  ppvVar10[2] = (void *)0x0;
  ppvVar10[3] = (void *)0xf;
  local_70 = pvVar9;
  pvStack_68 = pvVar1;
  if (((local_1a8 & 2) != 0) && (local_1a8 = local_1a8 & 0xfffffffd, 0xf < local_88)) {
    pvVar15 = local_a0;
    if ((0xfff < local_88 + 1) &&
       (pvVar15 = *(void **)((longlong)local_a0 + -8),
       0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar15);
  }
  if (((local_1a8 & 1) != 0) && (local_1a8 = local_1a8 & 0xfffffffe, 0xf < uStack_f0)) {
    pvVar15 = local_108;
    if ((0xfff < uStack_f0 + 1) &&
       (pvVar15 = *(void **)((longlong)local_108 + -8),
       0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar15);
  }
  pppppppuVar17 = local_80;
  plVar11 = *(longlong **)(*(longlong *)world_exref + 0x11b408);
  plVar14 = *(longlong **)(*(longlong *)world_exref + 0x11b410);
  local_108 = local_80;
  if (plVar11 != plVar14) {
    do {
      puVar20 = (undefined8 *)*plVar11;
      if ((0 < *(int *)(puVar20 + 9)) && ((*(byte *)puVar20[8] & 0x20) != 0)) {
        pppppppuVar19 = &local_c0;
        if (0xf < uVar23) {
          pppppppuVar19 = local_190;
        }
        _Size = puVar20[2];
        puVar16 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar16 = (undefined8 *)*puVar20;
        }
        if ((_Size == _Size_01) &&
           ((_Size == 0 || (iVar6 = memcmp(puVar16,pppppppuVar19,_Size), iVar6 == 0))))
        goto LAB_18001ef80;
      }
      plVar11 = plVar11 + 1;
      if (plVar11 == plVar14) break;
    } while( true );
  }
LAB_18001f069:
  pbVar12 = FUN_180002e80((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 8),
                          "Cannot find plant or growth with id ");
  pauVar18 = (undefined1 (*) [32])&local_128;
  if (0xf < uStack_110) {
    pauVar18 = local_128;
  }
  pbVar12 = FUN_180007ac0(pbVar12,(char *)pauVar18,local_118);
  pbVar12 = FUN_180002c30(pbVar12,'\n');
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,FUN_18000c140);
  if ((void *)0xf < pvVar1) {
    pppppppuVar19 = pppppppuVar17;
    if ((0xfff < (longlong)pvVar1 + 1U) &&
       (pppppppuVar19 = (undefined8 *******)pppppppuVar17[-1],
       0x1f < (ulonglong)((longlong)pppppppuVar17 + (-8 - (longlong)pppppppuVar19))))
    goto LAB_18001f0ee;
    free(pppppppuVar19);
  }
  if (0xf < uVar23) {
    pppppppuVar17 = local_190;
    if ((0xfff < uVar23 + 1) &&
       (pppppppuVar17 = (undefined8 *******)local_190[-1],
       0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)pppppppuVar17))))
    goto LAB_18001f3d5;
    free(pppppppuVar17);
  }
  if (uStack_110 < 0x10) {
    return 2;
  }
  pauVar18 = local_128;
  if ((uStack_110 + 1 < 0x1000) ||
     (pauVar18 = *(undefined1 (**) [32])((longlong)local_128[-1] + 0x18),
     (char *)((longlong)local_128 + (-8 - (longlong)pauVar18)) < (char *)0x20)) {
    free(pauVar18);
    return 2;
  }
  goto LAB_18001f427;
LAB_18001ef80:
  if (pvVar9 == (void *)0x0) {
    local_108 = (undefined8 *******)CONCAT44(local_108._4_4_,*(undefined4 *)(puVar20 + 4));
    plVar11 = FUN_180011730(DAT_18007d7b8,(int *)&local_108);
    *(int *)plVar11 = iVar5;
  }
  else {
    plVar11 = (longlong *)puVar20[0xcb];
    plVar14 = (longlong *)puVar20[0xcc];
    pppppppuVar19 = local_108;
    pppppppuVar17 = local_108;
    while( true ) {
      local_108 = pppppppuVar17;
      if (plVar11 == plVar14) goto LAB_18001f069;
      puVar16 = (undefined8 *)*plVar11;
      pppppppuVar17 = &local_80;
      if ((void *)0xf < pvVar1) {
        pppppppuVar17 = pppppppuVar19;
      }
      pvVar15 = (void *)puVar16[2];
      _Buf1 = puVar16;
      if (0xf < (ulonglong)puVar16[3]) {
        _Buf1 = (undefined8 *)*puVar16;
      }
      if ((pvVar15 == pvVar9) &&
         ((((pvVar15 == (void *)0x0 ||
            (iVar6 = memcmp(_Buf1,pppppppuVar17,(size_t)pvVar15), pppppppuVar19 = local_108,
            iVar6 == 0)) &&
           (DFHack::MaterialInfo::decode
                      (local_160,*(short *)((longlong)puVar16 + 0x104),*(int *)(puVar16 + 0x21)),
           pppppppuVar17 = local_108, plVar4 = DAT_18007d7b8, pppppppuVar19 = local_108,
           local_158 != 0)) &&
          ((4 < *(int *)(local_158 + 0x298) &&
           ((*(byte *)(*(longlong *)(local_158 + 0x290) + 4) & 0x40) != 0)))))) break;
      plVar11 = plVar11 + 1;
      pppppppuVar17 = local_108;
    }
    plVar11 = DAT_18007d7b8 + 3;
    local_e8[0] = *(int *)(puVar20 + 4);
    local_e0 = (undefined8 ******)0x0;
    ppppppuStack_d8 = (undefined8 ******)0x0;
    local_d0 = (void *)0x0;
    uStack_c8 = 0;
    pppppppuVar19 = &local_80;
    if ((void *)0xf < pvVar1) {
      pppppppuVar19 = local_108;
    }
    if ((void *)0x7fffffffffffffff < pvVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_180018060();
    }
    if (pvVar9 < (void *)0x10) {
      local_d0 = pvVar9;
      uStack_c8 = 0xf;
      local_e0 = *pppppppuVar19;
      ppppppuStack_d8 = pppppppuVar19[1];
    }
    else {
      uVar13 = (ulonglong)pvVar9 | 0xf;
      if (uVar13 < 0x8000000000000000) {
        if (uVar13 < 0x16) {
          uVar13 = 0x16;
        }
      }
      else {
        uVar13 = 0x7fffffffffffffff;
      }
      local_e0 = (undefined8 ******)FUN_1800039c0(uVar13 + 1);
      local_d0 = pvVar9;
      uStack_c8 = uVar13;
      memcpy(local_e0,pppppppuVar19,(longlong)pvVar9 + 1);
    }
    local_1a8 = local_1a8 | 0x10;
    FUN_180006de0(plVar11,&local_108,local_e8);
    plVar14 = local_f8;
    if ((*(char *)((longlong)local_f8 + 0x19) != '\0') ||
       (uVar13 = FUN_180012e00(plVar11,local_e8,(int *)(local_f8 + 4)), (char)uVar13 != '\0')) {
      if (plVar4[4] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
        FUN_180017a10();
      }
      lVar21 = *plVar11;
      plVar14 = (longlong *)FUN_180064554(0x50);
      *(int *)(plVar14 + 4) = local_e8[0];
      plVar14[5] = (longlong)local_e0;
      plVar14[6] = (longlong)ppppppuStack_d8;
      plVar14[7] = (longlong)local_d0;
      plVar14[8] = uStack_c8;
      local_e0 = (undefined8 ******)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_d0 = (void *)0x0;
      uStack_c8 = 0xf;
      *(undefined4 *)(plVar14 + 9) = 0;
      *plVar14 = lVar21;
      plVar14[1] = lVar21;
      plVar14[2] = lVar21;
      *(undefined2 *)(plVar14 + 3) = 0;
      plVar14 = FUN_1800161e0(plVar11,&local_108,plVar14);
    }
    *(int *)(plVar14 + 9) = iVar5;
    if (0xf < uStack_c8) {
      FUN_180014240(&local_e0,local_e0,uStack_c8);
    }
  }
  if ((void *)0xf < pvVar1) {
    pppppppuVar19 = pppppppuVar17;
    if ((0xfff < (longlong)pvVar1 + 1U) &&
       (pppppppuVar19 = (undefined8 *******)pppppppuVar17[-1],
       0x1f < (ulonglong)((longlong)pppppppuVar17 + (-8 - (longlong)pppppppuVar19)))) {
LAB_18001f0ee:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppppuVar19);
  }
  if (0xf < uVar23) {
    pppppppuVar17 = local_190;
    if ((0xfff < uVar23 + 1) &&
       (pppppppuVar17 = (undefined8 *******)local_190[-1],
       0x1f < (ulonglong)((longlong)local_190 + (-8 - (longlong)pppppppuVar17)))) {
LAB_18001f3d5:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pppppppuVar17);
  }
  if (0xf < uStack_110) {
    pauVar18 = local_128;
    if ((0xfff < uStack_110 + 1) &&
       (pauVar18 = *(undefined1 (**) [32])((longlong)local_128[-1] + 0x18),
       (char *)0x1f < (char *)((longlong)local_128 + (-8 - (longlong)pauVar18)))) {
LAB_18001f427:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pauVar18);
  }
  local_188 = local_188 + 1;
  lVar21 = *param_2;
  if ((ulonglong)(param_2[1] - lVar21 >> 5) <= local_188) goto LAB_18001f44d;
  goto LAB_18001eb4f;
}



/* RVA 0x1f4c0; VA 18001f4c0; FUN_18001f4c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001f4c0(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4,int param_5)

{
  void *pvVar1;
  bool bVar2;
  color_ostream *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  undefined1 auStackY_1c8 [32];
  ulonglong local_188;
  undefined4 *local_180;
  char *local_178;
  undefined8 local_170;
  ostream_proxy_prefix local_168 [152];
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong uStack_98;
  void *local_90 [3];
  ulonglong local_78;
  undefined4 local_70 [4];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_18007d140 ^ (ulonglong)auStackY_1c8;
  iVar6 = (int)*(short *)(param_4 + 0x148 + (longlong)param_5 * 2);
  if (iVar6 != param_3) {
    *(short *)(param_4 + 0x148 + (longlong)param_5 * 2) = (short)param_3;
    bVar2 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d018,2);
    if (bVar2) {
      this = (color_ostream *)
             DFHack::DebugCategory::getStream
                       ((DebugCategory *)&PTR_s_autofarm_18007d018,(level)local_168,
                        (color_ostream *)0x2);
      puVar3 = FUN_18001b140(param_1,(undefined8 *)&local_b0,param_3);
      puVar4 = FUN_18001b140(param_1,(undefined8 *)&local_d0,iVar6);
      local_70[0] = *(undefined4 *)(param_4 + 0x50);
      local_60 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        local_60 = (undefined8 *)*puVar4;
      }
      local_58 = puVar4[2];
      local_50 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        local_50 = (undefined8 *)*puVar3;
      }
      local_48 = puVar3[2];
      local_188 = 0xdd1;
      local_180 = local_70;
      local_178 = "autofarm: changing farm #{} from {} to {}\n";
      local_170 = 0x2a;
      FUN_180041d90(local_90,(longlong *)&local_178,&local_188);
      DFHack::color_ostream::flush_buffer(this,false);
      (**(code **)(*(longlong *)this + 0x10))(this,*(undefined4 *)(this + 0x10));
      if (0xf < local_78) {
        pvVar5 = local_90[0];
        if ((0xfff < local_78 + 1) &&
           (pvVar5 = *(void **)((longlong)local_90[0] + -8),
           0x1f < (ulonglong)((longlong)local_90[0] + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar5);
      }
      if (0xf < uStack_b8) {
        pvVar1 = (void *)CONCAT71(uStack_cf,local_d0);
        pvVar5 = pvVar1;
        if ((0xfff < uStack_b8 + 1) &&
           (pvVar5 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar5);
      }
      local_c0 = _DAT_180069000;
      uStack_b8 = _UNK_180069008;
      local_d0 = 0;
      if (0xf < uStack_98) {
        pvVar1 = (void *)CONCAT71(uStack_af,local_b0);
        pvVar5 = pvVar1;
        if ((0xfff < uStack_98 + 1) &&
           (pvVar5 = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar5);
      }
      local_a0 = _DAT_180069000;
      uStack_98 = _UNK_180069008;
      local_b0 = 0;
      DFHack::DebugCategory::ostream_proxy_prefix::_vbase_destructor_(local_168);
    }
  }
  return;
}



/* RVA 0x1f740; VA 18001f740; FUN_18001f740 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001f740(undefined8 param_1,uint param_2,char param_3)

{
  longlong lVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  PersistentDataItem *pPVar5;
  int *piVar6;
  void *pvVar7;
  char *_Size;
  char *_Src;
  undefined1 auStackY_c8 [32];
  byte local_98;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_90 [24];
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_18007d140 ^ (ulonglong)auStackY_c8;
  _Size = (char *)0x0;
  pcVar4 = (char *)FUN_180021210((undefined8 *)&local_58,param_2);
  lVar1 = *(longlong *)(pcVar4 + 0x10);
  if (*(ulonglong *)(pcVar4 + 0x18) - lVar1 < 0x17) {
    pcVar4 = (char *)FUN_180008dc0((undefined8 *)pcVar4,0x17,(ulonglong)local_98,0,
                                   "autofarm/excluded_farm/",0x17);
  }
  else {
    *(longlong *)(pcVar4 + 0x10) = lVar1 + 0x17;
    _Src = pcVar4;
    if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
      _Src = *(char **)pcVar4;
    }
    if (("/" < _Src) || (_Src + lVar1 < "autofarm/excluded_farm/")) {
      _Size = (char *)0x17;
    }
    else if ("autofarm/excluded_farm/" < _Src) {
      _Size = _Src + -0x180068948;
    }
    memmove(_Src + 0x17,_Src,lVar1 + 1);
    memcpy(_Src,"autofarm/excluded_farm/",(size_t)_Size);
    memcpy(_Src + (longlong)_Size,_Size + 0x18006895f,0x17 - (longlong)_Size);
  }
  local_78 = *(void **)pcVar4;
  uStack_70 = *(undefined8 *)(pcVar4 + 8);
  local_68 = *(undefined8 *)(pcVar4 + 0x10);
  uStack_60 = *(ulonglong *)(pcVar4 + 0x18);
  *pcVar4 = '\0';
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  pcVar4[0x18] = '\x0f';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  if (0xf < uStack_40) {
    pvVar2 = (void *)CONCAT71(uStack_57,local_58);
    pvVar7 = pvVar2;
    if ((0xfff < uStack_40 + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar7);
  }
  local_48 = _DAT_180069000;
  uStack_40 = _UNK_180069008;
  local_58 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  DFHack::World::GetPersistentSiteData(local_90,SUB81(&local_78,0));
  bVar3 = DFHack::PersistentDataItem::isValid((PersistentDataItem *)local_90);
  if (param_3 == '\0') {
    if (bVar3) {
      DFHack::World::DeletePersistentData((PersistentDataItem *)local_90);
    }
  }
  else {
    if (!bVar3) {
      pPVar5 = (PersistentDataItem *)DFHack::World::AddPersistentSiteData(&local_58);
      DFHack::PersistentDataItem::operator=((PersistentDataItem *)local_90,pPVar5);
      DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)&local_58);
    }
    bVar3 = DFHack::PersistentDataItem::isValid((PersistentDataItem *)local_90);
    if (bVar3) {
      piVar6 = DFHack::PersistentDataItem::ival((PersistentDataItem *)local_90,0);
      *piVar6 = 1;
    }
  }
  DFHack::PersistentDataItem::~PersistentDataItem((PersistentDataItem *)local_90);
  if (0xf < uStack_60) {
    pvVar7 = local_78;
    if ((0xfff < uStack_60 + 1) &&
       (pvVar7 = *(void **)((longlong)local_78 + -8),
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar7);
  }
  return;
}



/* RVA 0x1f9f0; VA 18001f9f0; FUN_18001f9f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001f9f0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong ***ppplVar4;
  longlong ****pppplVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong ****pppplVar11;
  longlong ***ppplVar12;
  bool bVar13;
  longlong *plVar14;
  longlong *****ppppplVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *****ppppplVar18;
  longlong *****ppppplVar19;
  color_ostream *this;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong *****ppppplVar22;
  longlong *****ppppplVar23;
  void *pvVar24;
  ulonglong *puVar25;
  longlong ***ppplVar26;
  longlong ****pppplVar27;
  longlong *plVar28;
  longlong ***ppplVar29;
  longlong ***ppplVar30;
  longlong ****pppplVar31;
  int iVar32;
  ulonglong *puVar33;
  undefined1 auStackY_2c8 [32];
  longlong ****local_298;
  undefined8 uStack_290;
  longlong ****local_278;
  longlong local_270;
  longlong ****local_268;
  undefined8 uStack_260;
  longlong ****local_248;
  longlong local_240;
  longlong ****local_238;
  longlong local_230;
  int local_228;
  int local_224;
  longlong ****local_220;
  longlong *local_218;
  uint local_210;
  undefined8 local_208;
  undefined8 *local_200;
  longlong ****local_1f8;
  longlong *local_1f0;
  ulonglong *local_1e8;
  ulonglong *puStack_1e0;
  ulonglong *local_1d8;
  longlong *local_1d0;
  longlong ****local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong ****local_1b0;
  undefined8 local_1a8;
  longlong ****local_1a0;
  undefined8 local_198;
  longlong ****local_188;
  undefined8 local_180;
  ostream_proxy_prefix local_178 [152];
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  ulonglong uStack_a8;
  void *local_a0 [3];
  ulonglong local_88;
  undefined4 local_80 [4];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_18007d140 ^ (ulonglong)auStackY_2c8;
  local_210 = 0;
  cVar1 = **(char **)cur_season_exref;
  local_224 = (int)cVar1;
  local_208 = param_1;
  local_200 = param_4;
  local_1b8 = param_2;
  FUN_18000f300((longlong *)&local_248);
  FUN_18000f2c0((longlong *)&local_238);
  FUN_18000f240((longlong *)&local_278);
  local_1e8 = (ulonglong *)0x0;
  puStack_1e0 = (ulonglong *)0x0;
  local_1d8 = (ulonglong *)0x0;
  puVar25 = (ulonglong *)param_4[1];
  iVar3 = (int)cVar1;
  for (puVar33 = (ulonglong *)*param_4; puVar33 != puVar25; puVar33 = puVar33 + 3) {
    plVar16 = *(longlong **)puVar33[1];
    cVar1 = *(char *)((longlong)plVar16 + 0x19);
    ppppplVar22 = (longlong *****)local_248;
    while (local_248 = (longlong ****)ppppplVar22, cVar1 == '\0') {
      plVar17 = (longlong *)*param_3;
      plVar14 = (longlong *)plVar17[1];
      plVar28 = plVar17;
      if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
        do {
          plVar17 = plVar14;
          if ((int)plVar14[4] < *(int *)((longlong)plVar16 + 0x1c)) {
            plVar14 = plVar14 + 2;
            plVar17 = plVar28;
          }
          plVar14 = (longlong *)*plVar14;
          plVar28 = plVar17;
        } while (*(char *)((longlong)plVar14 + 0x19) == '\0');
        plVar28 = (longlong *)*param_3;
      }
      if ((*(char *)((longlong)plVar17 + 0x19) != '\0') ||
         (*(int *)((longlong)plVar16 + 0x1c) < (int)plVar17[4])) {
        plVar17 = plVar28;
      }
      if (plVar17 != plVar28) {
        local_298 = ppppplVar22[1];
        uStack_290 = uStack_290 & 0xffffffff00000000;
        ppppplVar15 = ppppplVar22;
        if (*(char *)((longlong)local_298 + 0x19) == '\0') {
          ppppplVar18 = (longlong *****)local_298;
          do {
            local_298 = (longlong ****)ppppplVar18;
            if (local_298[4] < (longlong ****)*puVar33) {
              uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
              ppppplVar19 = (longlong *****)(local_298 + 2);
            }
            else {
              uStack_290 = CONCAT44(uStack_290._4_4_,1);
              ppppplVar19 = (longlong *****)local_298;
              ppppplVar15 = (longlong *****)local_298;
            }
            ppppplVar18 = (longlong *****)*ppppplVar19;
          } while (*(char *)((longlong)*ppppplVar19 + 0x19) == '\0');
        }
        if ((*(char *)((longlong)ppppplVar15 + 0x19) != '\0') ||
           ((longlong ****)*puVar33 < ppppplVar15[4])) {
          if (local_240 == 0x492492492492492) {
LAB_180020b27:
                    /* WARNING: Subroutine does not return */
            FUN_180017a10();
          }
          local_220 = (longlong ****)&local_248;
          local_218 = (longlong *)0x0;
          plVar14 = (longlong *)FUN_180064554(0x38);
          plVar14[4] = *puVar33;
          local_218 = plVar14;
          FUN_18000f6c0(plVar14 + 5);
          *plVar14 = (longlong)ppppplVar22;
          plVar14[1] = (longlong)ppppplVar22;
          plVar14[2] = (longlong)ppppplVar22;
          *(undefined2 *)(plVar14 + 3) = 0;
          local_218 = (longlong *)0x0;
          FUN_180010650((longlong)&local_220);
          ppppplVar15 = (longlong *****)
                        FUN_180016900((longlong *)&local_248,(longlong *)&local_298,plVar14);
        }
        FUN_18000ce50((longlong *)(ppppplVar15 + 5),*(longlong **)plVar17[5],(longlong *)plVar17[5])
        ;
      }
      plVar17 = (longlong *)plVar16[2];
      if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar17 + 0x19);
        plVar16 = plVar17;
        plVar17 = (longlong *)*plVar17;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar17 + 0x19);
          plVar16 = plVar17;
          plVar17 = (longlong *)*plVar17;
        }
      }
      else {
        cVar1 = *(char *)(plVar16[1] + 0x19);
        plVar14 = (longlong *)plVar16[1];
        plVar17 = plVar16;
        while ((plVar16 = plVar14, cVar1 == '\0' && (plVar17 == (longlong *)plVar16[2]))) {
          cVar1 = *(char *)(plVar16[1] + 0x19);
          plVar14 = (longlong *)plVar16[1];
          plVar17 = plVar16;
        }
      }
      ppppplVar22 = (longlong *****)local_248;
      cVar1 = *(char *)((longlong)plVar16 + 0x19);
    }
    plVar16 = FUN_180011a60((longlong *)&local_248,puVar33);
    plVar16 = *(longlong **)*plVar16;
    cVar1 = *(char *)((longlong)plVar16 + 0x19);
    ppppplVar22 = (longlong *****)local_238;
    while (cVar1 == '\0') {
      iVar3 = *(int *)((longlong)plVar16 + 0x1c);
      ppppplVar15 = (longlong *****)ppppplVar22[1];
      uStack_290 = uStack_290 & 0xffffffff00000000;
      cVar1 = *(char *)((longlong)ppppplVar15 + 0x19);
      local_298 = (longlong ****)ppppplVar15;
      ppppplVar18 = ppppplVar22;
      while (ppppplVar19 = ppppplVar15, cVar1 == '\0') {
        uStack_290._4_4_ = (uint)(uStack_290 >> 0x20);
        if (*(int *)(ppppplVar19 + 4) < iVar3) {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
          ppppplVar15 = ppppplVar19 + 2;
        }
        else {
          uStack_290 = CONCAT44(uStack_290._4_4_,1);
          ppppplVar15 = ppppplVar19;
          ppppplVar18 = ppppplVar19;
        }
        cVar1 = *(char *)((longlong)*ppppplVar15 + 0x19);
        ppppplVar15 = (longlong *****)*ppppplVar15;
        local_298 = (longlong ****)ppppplVar19;
      }
      if ((*(char *)((longlong)ppppplVar18 + 0x19) != '\0') || (iVar3 < *(int *)(ppppplVar18 + 4)))
      {
        if (local_230 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        local_1f8 = (longlong ****)&local_238;
        local_1f0 = (longlong *)0x0;
        plVar17 = (longlong *)FUN_180064554(0x40);
        *(int *)(plVar17 + 4) = iVar3;
        plVar17[5] = 0;
        plVar17[6] = 0;
        plVar17[7] = 0;
        *plVar17 = (longlong)ppppplVar22;
        plVar17[1] = (longlong)ppppplVar22;
        plVar17[2] = (longlong)ppppplVar22;
        *(undefined2 *)(plVar17 + 3) = 0;
        local_1f0 = (longlong *)0x0;
        FUN_180015f80((longlong *)&local_238,(longlong *)&local_298,plVar17);
        ppppplVar22 = (longlong *****)local_238;
      }
      plVar17 = (longlong *)plVar16[2];
      if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar17 + 0x19);
        plVar16 = plVar17;
        plVar17 = (longlong *)*plVar17;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar17 + 0x19);
          plVar16 = plVar17;
          plVar17 = (longlong *)*plVar17;
        }
      }
      else {
        cVar1 = *(char *)(plVar16[1] + 0x19);
        plVar14 = (longlong *)plVar16[1];
        plVar17 = plVar16;
        while ((plVar16 = plVar14, cVar1 == '\0' && (plVar17 == (longlong *)plVar16[2]))) {
          cVar1 = *(char *)(plVar16[1] + 0x19);
          plVar14 = (longlong *)plVar16[1];
          plVar17 = plVar16;
        }
      }
      cVar1 = *(char *)((longlong)plVar16 + 0x19);
    }
    iVar3 = local_224;
    param_1 = local_208;
    param_4 = local_200;
  }
  puVar33 = (ulonglong *)param_4[1];
  local_200 = (undefined8 *)(longlong)iVar3;
  iVar32 = iVar3;
  for (puVar25 = (ulonglong *)*param_4; puVar25 != puVar33; puVar25 = puVar25 + 3) {
    sVar2 = *(short *)(*puVar25 + 0x148 + (longlong)iVar3 * 2);
    local_228 = (int)sVar2;
    if (sVar2 < 0) {
LAB_18001fe50:
      if (puStack_1e0 == local_1d8) {
        FUN_1800057a0((longlong *)&local_1e8,puStack_1e0,puVar25);
      }
      else {
        *puStack_1e0 = *puVar25;
        puStack_1e0 = puStack_1e0 + 1;
      }
    }
    else {
      plVar17 = FUN_180011a60((longlong *)&local_248,puVar25);
      plVar16 = (longlong *)((longlong *)*plVar17)[1];
      cVar1 = *(char *)((longlong)plVar16 + 0x19);
      plVar17 = (longlong *)*plVar17;
      while (cVar1 == '\0') {
        plVar14 = plVar16;
        if (*(int *)((longlong)plVar16 + 0x1c) < local_228) {
          plVar16 = plVar16 + 2;
          plVar14 = plVar17;
        }
        plVar16 = (longlong *)*plVar16;
        plVar17 = plVar14;
        cVar1 = *(char *)((longlong)plVar16 + 0x19);
      }
      if ((*(char *)((longlong)plVar17 + 0x19) != '\0') ||
         (local_228 < *(int *)((longlong)plVar17 + 0x1c))) goto LAB_18001fe50;
      plVar16 = FUN_180011960((longlong *)&local_238,&local_228);
      FUN_18001dd60(plVar16,puVar25);
      plVar16 = FUN_180011730((longlong *)&local_278,&local_228);
      *(int *)plVar16 = (int)*plVar16 + 1;
    }
    iVar32 = local_224;
  }
  FUN_180009060(local_1e8,puStack_1e0,(longlong)puStack_1e0 - (longlong)local_1e8 >> 3,
                (longlong *)&local_248);
  uVar10 = local_1b8;
  puVar25 = puStack_1e0;
  uVar7 = _DAT_180069000;
  uVar8 = _UNK_180069008;
  ppppplVar22 = (longlong *****)local_248;
  for (puVar33 = local_1e8; _DAT_180069000 = uVar7, _UNK_180069008 = uVar8,
      local_248 = (longlong ****)ppppplVar22, puVar33 != puVar25; puVar33 = puVar33 + 1) {
    local_220 = (longlong ****)*puVar33;
    ppppplVar15 = (longlong *****)ppppplVar22[1];
    uStack_290 = uStack_290 & 0xffffffff00000000;
    cVar1 = *(char *)((longlong)ppppplVar15 + 0x19);
    local_298 = (longlong ****)ppppplVar15;
    ppppplVar18 = ppppplVar22;
    while (ppppplVar19 = ppppplVar15, cVar1 == '\0') {
      uStack_290._4_4_ = (uint)(uStack_290 >> 0x20);
      if (ppppplVar19[4] < local_220) {
        uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
        ppppplVar15 = ppppplVar19 + 2;
      }
      else {
        uStack_290 = CONCAT44(uStack_290._4_4_,1);
        ppppplVar15 = ppppplVar19;
        ppppplVar18 = ppppplVar19;
      }
      cVar1 = *(char *)((longlong)*ppppplVar15 + 0x19);
      ppppplVar15 = (longlong *****)*ppppplVar15;
      local_298 = (longlong ****)ppppplVar19;
    }
    if ((*(char *)((longlong)ppppplVar18 + 0x19) != '\0') || (local_220 < ppppplVar18[4])) {
      if (local_240 == 0x492492492492492) goto LAB_180020b21;
      local_1c8 = (longlong ****)&local_248;
      local_1c0 = (longlong *)0x0;
      plVar16 = (longlong *)FUN_180064554(0x38);
      plVar16[4] = (longlong)local_220;
      local_1c0 = plVar16;
      FUN_18000f6c0(plVar16 + 5);
      *plVar16 = (longlong)ppppplVar22;
      plVar16[1] = (longlong)ppppplVar22;
      plVar16[2] = (longlong)ppppplVar22;
      *(undefined2 *)(plVar16 + 3) = 0;
      local_1c0 = (longlong *)0x0;
      ppppplVar18 = (longlong *****)
                    FUN_180016900((longlong *)&local_248,(longlong *)&local_298,plVar16);
    }
    if (ppppplVar18[6] == (longlong ****)0x0) {
      FUN_18001f4c0(param_1,uVar10,-1,(longlong)local_220,iVar32);
    }
    else {
      plVar16 = FUN_180011a60((longlong *)&local_248,(ulonglong *)&local_220);
      pppplVar31 = local_248;
      ppplVar29 = (longlong ***)*plVar16;
      ppppplVar22 = (longlong *****)local_248[1];
      uStack_290 = uStack_290 & 0xffffffff00000000;
      cVar1 = *(char *)((longlong)ppppplVar22 + 0x19);
      local_298 = (longlong ****)ppppplVar22;
      ppppplVar15 = (longlong *****)local_248;
      while (ppppplVar18 = ppppplVar22, cVar1 == '\0') {
        uStack_290._4_4_ = (uint)(uStack_290 >> 0x20);
        if (ppppplVar18[4] < local_220) {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
          ppppplVar22 = ppppplVar18 + 2;
        }
        else {
          uStack_290 = CONCAT44(uStack_290._4_4_,1);
          ppppplVar22 = ppppplVar18;
          ppppplVar15 = ppppplVar18;
        }
        cVar1 = *(char *)((longlong)*ppppplVar22 + 0x19);
        ppppplVar22 = (longlong *****)*ppppplVar22;
        local_298 = (longlong ****)ppppplVar18;
      }
      if ((*(char *)((longlong)ppppplVar15 + 0x19) != '\0') || (local_220 < ppppplVar15[4])) {
        if (local_240 == 0x492492492492492) goto LAB_180020b21;
        local_1f8 = (longlong ****)&local_248;
        local_1f0 = (longlong *)0x0;
        plVar16 = (longlong *)FUN_180064554(0x38);
        plVar16[4] = (longlong)local_220;
        local_1f0 = plVar16;
        FUN_18000f6c0(plVar16 + 5);
        *plVar16 = (longlong)pppplVar31;
        plVar16[1] = (longlong)pppplVar31;
        plVar16[2] = (longlong)pppplVar31;
        *(undefined2 *)(plVar16 + 3) = 0;
        local_1f0 = (longlong *)0x0;
        ppppplVar15 = (longlong *****)
                      FUN_180016900((longlong *)&local_248,(longlong *)&local_298,plVar16);
      }
      ppplVar26 = *ppppplVar15[5];
      ppplVar30 = ppplVar26;
      if (ppplVar26 != ppplVar29) {
        while( true ) {
          ppplVar4 = (longlong ***)ppplVar26[2];
          if (*(char *)((longlong)ppplVar4 + 0x19) == '\0') {
            cVar1 = *(char *)((longlong)*ppplVar4 + 0x19);
            ppplVar26 = ppplVar4;
            ppplVar4 = (longlong ***)*ppplVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((longlong)*ppplVar4 + 0x19);
              ppplVar26 = ppplVar4;
              ppplVar4 = (longlong ***)*ppplVar4;
            }
          }
          else {
            cVar1 = *(char *)((longlong)ppplVar26[1] + 0x19);
            ppplVar12 = (longlong ***)ppplVar26[1];
            ppplVar4 = ppplVar26;
            while ((ppplVar26 = ppplVar12, cVar1 == '\0' && (ppplVar4 == (longlong ***)ppplVar26[2])
                   )) {
              cVar1 = *(char *)((longlong)ppplVar26[1] + 0x19);
              ppplVar12 = (longlong ***)ppplVar26[1];
              ppplVar4 = ppplVar26;
            }
          }
          iVar32 = local_224;
          if (ppplVar26 == ppplVar29) break;
          local_1d0 = (longlong *)
                      CONCAT44(local_1d0._4_4_,*(undefined4 *)((longlong)ppplVar30 + 0x1c));
          local_268 = (longlong ****)
                      CONCAT44(local_268._4_4_,*(undefined4 *)((longlong)ppplVar26 + 0x1c));
          plVar16 = FUN_180011730((longlong *)&local_278,(int *)&local_268);
          lVar9 = *plVar16;
          plVar16 = FUN_180011730((longlong *)&local_278,(int *)&local_1d0);
          if ((int)lVar9 < (int)*plVar16) {
            ppplVar30 = ppplVar26;
          }
        }
      }
      param_1 = local_208;
      iVar3 = *(int *)((longlong)ppplVar30 + 0x1c);
      FUN_18001f4c0(local_208,uVar10,iVar3,(longlong)local_220,iVar32);
      pppplVar31 = local_238;
      ppppplVar22 = (longlong *****)local_238[1];
      uStack_290 = uStack_290 & 0xffffffff00000000;
      cVar1 = *(char *)((longlong)ppppplVar22 + 0x19);
      local_298 = (longlong ****)ppppplVar22;
      ppppplVar15 = (longlong *****)local_238;
      while (ppppplVar18 = ppppplVar22, cVar1 == '\0') {
        uStack_290._4_4_ = (uint)(uStack_290 >> 0x20);
        if (*(int *)(ppppplVar18 + 4) < iVar3) {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
          ppppplVar22 = ppppplVar18 + 2;
        }
        else {
          uStack_290 = CONCAT44(uStack_290._4_4_,1);
          ppppplVar22 = ppppplVar18;
          ppppplVar15 = ppppplVar18;
        }
        cVar1 = *(char *)((longlong)*ppppplVar22 + 0x19);
        ppppplVar22 = (longlong *****)*ppppplVar22;
        local_298 = (longlong ****)ppppplVar18;
      }
      if ((*(char *)((longlong)ppppplVar15 + 0x19) != '\0') || (iVar3 < *(int *)(ppppplVar15 + 4)))
      {
        if (local_230 == 0x3ffffffffffffff) goto LAB_180020b21;
        local_1b0 = (longlong ****)&local_238;
        local_1a8 = 0;
        plVar16 = (longlong *)FUN_180064554(0x40);
        *(int *)(plVar16 + 4) = iVar3;
        plVar16[5] = 0;
        plVar16[6] = 0;
        plVar16[7] = 0;
        *plVar16 = (longlong)pppplVar31;
        plVar16[1] = (longlong)pppplVar31;
        plVar16[2] = (longlong)pppplVar31;
        *(undefined2 *)(plVar16 + 3) = 0;
        local_1a8 = 0;
        ppppplVar15 = (longlong *****)
                      FUN_180015f80((longlong *)&local_238,(longlong *)&local_298,plVar16);
      }
      pppplVar31 = ppppplVar15[6];
      if (pppplVar31 == ppppplVar15[7]) {
        FUN_1800057a0((longlong *)(ppppplVar15 + 5),pppplVar31,&local_220);
      }
      else {
        *pppplVar31 = (longlong ***)local_220;
        ppppplVar15[6] = ppppplVar15[6] + 1;
      }
      pppplVar31 = local_278;
      ppppplVar22 = (longlong *****)local_278[1];
      uStack_290 = uStack_290 & 0xffffffff00000000;
      cVar1 = *(char *)((longlong)ppppplVar22 + 0x19);
      local_298 = (longlong ****)ppppplVar22;
      ppppplVar15 = (longlong *****)local_278;
      while (ppppplVar18 = ppppplVar22, cVar1 == '\0') {
        uStack_290._4_4_ = (uint)(uStack_290 >> 0x20);
        if (*(int *)((longlong)ppppplVar18 + 0x1c) < iVar3) {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
          ppppplVar22 = ppppplVar18 + 2;
        }
        else {
          uStack_290 = CONCAT44(uStack_290._4_4_,1);
          ppppplVar22 = ppppplVar18;
          ppppplVar15 = ppppplVar18;
        }
        cVar1 = *(char *)((longlong)*ppppplVar22 + 0x19);
        ppppplVar22 = (longlong *****)*ppppplVar22;
        local_298 = (longlong ****)ppppplVar18;
      }
      if ((*(char *)((longlong)ppppplVar15 + 0x19) != '\0') ||
         (iVar3 < *(int *)((longlong)ppppplVar15 + 0x1c))) {
        if (local_270 == 0x666666666666666) {
LAB_180020b21:
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        local_1a0 = (longlong ****)&local_278;
        local_198 = 0;
        plVar16 = (longlong *)FUN_180064554(0x28);
        *(int *)((longlong)plVar16 + 0x1c) = iVar3;
        *(undefined4 *)(plVar16 + 4) = 0;
        *plVar16 = (longlong)pppplVar31;
        plVar16[1] = (longlong)pppplVar31;
        plVar16[2] = (longlong)pppplVar31;
        *(undefined2 *)(plVar16 + 3) = 0;
        local_198 = 0;
        ppppplVar15 = (longlong *****)
                      FUN_180015ac0((longlong *)&local_278,(longlong *)&local_298,plVar16);
      }
      *(int *)(ppppplVar15 + 4) = *(int *)(ppppplVar15 + 4) + 1;
    }
    uVar7 = _DAT_180069000;
    uVar8 = _UNK_180069008;
    ppppplVar22 = (longlong *****)local_248;
  }
LAB_180020322:
  pppplVar31 = (longlong ****)*local_238;
  cVar1 = *(char *)((longlong)pppplVar31 + 0x19);
  ppppplVar22 = (longlong *****)local_278;
  ppppplVar15 = (longlong *****)local_238;
joined_r0x00018002032d:
  if (cVar1 != '\0') {
    FUN_180010e00((longlong *)&local_1e8);
    cVar1 = *(char *)((longlong)local_278[1] + 0x19);
    pppplVar31 = (longlong ****)local_278[1];
    while (cVar1 == '\0') {
      FUN_180006370(&local_278,&local_278,(longlong *)pppplVar31[2]);
      pppplVar27 = (longlong ****)*pppplVar31;
      free(pppplVar31);
      pppplVar31 = pppplVar27;
      cVar1 = *(char *)((longlong)pppplVar27 + 0x19);
    }
    free(local_278);
    FUN_180006450(&local_238,&local_238,(longlong *)local_238[1]);
    free(local_238);
    FUN_180006680(&local_248,&local_248,(longlong *)local_248[1]);
    free(local_248);
    return;
  }
  pppplVar27 = *ppppplVar15;
  cVar1 = *(char *)((longlong)pppplVar27 + 0x19);
joined_r0x000180020347:
  if (cVar1 != '\0') goto LAB_1800205ad;
  local_268 = ppppplVar22[1];
  uStack_260 = uStack_260 & 0xffffffff00000000;
  ppppplVar15 = ppppplVar22;
  if (*(char *)((longlong)local_268 + 0x19) == '\0') {
    ppppplVar18 = (longlong *****)local_268;
    do {
      local_268 = (longlong ****)ppppplVar18;
      if (*(int *)((longlong)local_268 + 0x1c) < *(int *)(pppplVar31 + 4)) {
        uStack_260 = (ulonglong)uStack_260._4_4_ << 0x20;
        ppppplVar19 = (longlong *****)(local_268 + 2);
      }
      else {
        uStack_260 = CONCAT44(uStack_260._4_4_,1);
        ppppplVar19 = (longlong *****)local_268;
        ppppplVar15 = (longlong *****)local_268;
      }
      ppppplVar18 = (longlong *****)*ppppplVar19;
    } while (*(char *)((longlong)*ppppplVar19 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)ppppplVar15 + 0x19) != '\0') ||
     (*(int *)(pppplVar31 + 4) < *(int *)((longlong)ppppplVar15 + 0x1c))) {
    if (local_270 == 0x666666666666666) goto LAB_180020b27;
    local_1a0 = (longlong ****)&local_278;
    local_198 = 0;
    plVar16 = (longlong *)FUN_180064554(0x28);
    *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(pppplVar31 + 4);
    *(undefined4 *)(plVar16 + 4) = 0;
    *plVar16 = (longlong)ppppplVar22;
    plVar16[1] = (longlong)ppppplVar22;
    plVar16[2] = (longlong)ppppplVar22;
    *(undefined2 *)(plVar16 + 3) = 0;
    local_198 = 0;
    ppppplVar15 = (longlong *****)
                  FUN_180015ac0((longlong *)&local_278,(longlong *)&local_268,plVar16);
    ppppplVar22 = (longlong *****)local_278;
  }
  local_268 = ppppplVar22[1];
  uStack_260 = uStack_260 & 0xffffffff00000000;
  ppppplVar18 = ppppplVar22;
  if (*(char *)((longlong)local_268 + 0x19) == '\0') {
    ppppplVar19 = (longlong *****)local_268;
    do {
      local_268 = (longlong ****)ppppplVar19;
      if (*(int *)((longlong)local_268 + 0x1c) < *(int *)(pppplVar27 + 4)) {
        uStack_260 = (ulonglong)uStack_260._4_4_ << 0x20;
        ppppplVar23 = (longlong *****)(local_268 + 2);
      }
      else {
        uStack_260 = CONCAT44(uStack_260._4_4_,1);
        ppppplVar23 = (longlong *****)local_268;
        ppppplVar18 = (longlong *****)local_268;
      }
      ppppplVar19 = (longlong *****)*ppppplVar23;
    } while (*(char *)((longlong)*ppppplVar23 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)ppppplVar18 + 0x19) != '\0') ||
     (*(int *)(pppplVar27 + 4) < *(int *)((longlong)ppppplVar18 + 0x1c))) {
    if (local_270 == 0x666666666666666) goto LAB_180020b27;
    local_1b0 = (longlong ****)&local_278;
    local_1a8 = 0;
    plVar16 = (longlong *)FUN_180064554(0x28);
    *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(pppplVar27 + 4);
    *(undefined4 *)(plVar16 + 4) = 0;
    *plVar16 = (longlong)ppppplVar22;
    plVar16[1] = (longlong)ppppplVar22;
    plVar16[2] = (longlong)ppppplVar22;
    *(undefined2 *)(plVar16 + 3) = 0;
    local_1a8 = 0;
    ppppplVar18 = (longlong *****)
                  FUN_180015ac0((longlong *)&local_278,(longlong *)&local_268,plVar16);
    ppppplVar22 = (longlong *****)local_278;
  }
  if (*(int *)(ppppplVar18 + 4) + 1 < *(int *)(ppppplVar15 + 4)) {
    ppplVar26 = pppplVar31[6];
    for (ppplVar29 = pppplVar31[5]; ppplVar29 != ppplVar26; ppplVar29 = ppplVar29 + 1) {
      local_1d0 = (longlong *)*ppplVar29;
      plVar16 = FUN_180011a60((longlong *)&local_248,(ulonglong *)&local_1d0);
      plVar16 = (longlong *)*plVar16;
      plVar17 = (longlong *)plVar16[1];
      if (*(char *)((longlong)plVar17 + 0x19) == '\0') {
        plVar14 = plVar16;
        do {
          plVar16 = plVar17;
          if (*(int *)((longlong)plVar17 + 0x1c) < *(int *)(pppplVar27 + 4)) {
            plVar17 = plVar17 + 2;
            plVar16 = plVar14;
          }
          plVar17 = (longlong *)*plVar17;
          plVar14 = plVar16;
        } while (*(char *)((longlong)plVar17 + 0x19) == '\0');
      }
      ppppplVar22 = (longlong *****)local_278;
      if ((*(char *)((longlong)plVar16 + 0x19) == '\0') &&
         (*(int *)((longlong)plVar16 + 0x1c) <= *(int *)(pppplVar27 + 4))) break;
    }
    if (ppplVar29 != pppplVar31[6]) goto LAB_1800206d4;
  }
  pppplVar5 = (longlong ****)pppplVar27[2];
  if (*(char *)((longlong)pppplVar5 + 0x19) == '\0') {
    cVar1 = *(char *)((longlong)*pppplVar5 + 0x19);
    pppplVar27 = pppplVar5;
    pppplVar5 = (longlong ****)*pppplVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((longlong)*pppplVar5 + 0x19);
      pppplVar27 = pppplVar5;
      pppplVar5 = (longlong ****)*pppplVar5;
    }
  }
  else {
    cVar1 = *(char *)((longlong)pppplVar27[1] + 0x19);
    pppplVar11 = (longlong ****)pppplVar27[1];
    pppplVar5 = pppplVar27;
    while ((pppplVar27 = pppplVar11, cVar1 == '\0' && (pppplVar5 == (longlong ****)pppplVar27[2])))
    {
      cVar1 = *(char *)((longlong)pppplVar27[1] + 0x19);
      pppplVar11 = (longlong ****)pppplVar27[1];
      pppplVar5 = pppplVar27;
    }
  }
  cVar1 = *(char *)((longlong)pppplVar27 + 0x19);
  ppppplVar15 = (longlong *****)local_238;
  goto joined_r0x000180020347;
LAB_1800205ad:
  pppplVar27 = (longlong ****)pppplVar31[2];
  if (*(char *)((longlong)pppplVar27 + 0x19) == '\0') {
    cVar1 = *(char *)((longlong)*pppplVar27 + 0x19);
    pppplVar31 = pppplVar27;
    pppplVar27 = (longlong ****)*pppplVar27;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((longlong)*pppplVar27 + 0x19);
      pppplVar31 = pppplVar27;
      pppplVar27 = (longlong ****)*pppplVar27;
    }
  }
  else {
    cVar1 = *(char *)((longlong)pppplVar31[1] + 0x19);
    pppplVar5 = (longlong ****)pppplVar31[1];
    pppplVar27 = pppplVar31;
    while ((pppplVar31 = pppplVar5, cVar1 == '\0' && (pppplVar27 == (longlong ****)pppplVar31[2])))
    {
      cVar1 = *(char *)((longlong)pppplVar31[1] + 0x19);
      pppplVar5 = (longlong ****)pppplVar31[1];
      pppplVar27 = pppplVar31;
    }
  }
  cVar1 = *(char *)((longlong)pppplVar31 + 0x19);
  goto joined_r0x00018002032d;
LAB_1800206d4:
  pppplVar5 = (longlong ****)*ppplVar29;
  iVar3 = *(int *)(pppplVar27 + 4);
  iVar32 = (int)*(short *)((longlong)pppplVar5 + (longlong)local_200 * 2 + 0x148);
  local_268 = pppplVar5;
  if (iVar32 != iVar3) {
    *(short *)((longlong)pppplVar5 + (longlong)local_200 * 2 + 0x148) = (short)iVar3;
    bVar13 = DFHack::DebugCategory::isEnabled((DebugCategory *)&PTR_s_autofarm_18007d018,2);
    if (bVar13) {
      this = (color_ostream *)
             DFHack::DebugCategory::getStream
                       ((DebugCategory *)&PTR_s_autofarm_18007d018,(level)local_178,
                        (color_ostream *)0x2);
      puVar20 = FUN_18001b140(local_208,(undefined8 *)&local_c0,iVar3);
      puVar21 = FUN_18001b140(local_208,(undefined8 *)&local_e0,iVar32);
      local_80[0] = *(undefined4 *)(pppplVar5 + 10);
      local_70 = puVar21;
      if (0xf < (ulonglong)puVar21[3]) {
        local_70 = (undefined8 *)*puVar21;
      }
      local_68 = puVar21[2];
      local_60 = puVar20;
      if (0xf < (ulonglong)puVar20[3]) {
        local_60 = (undefined8 *)*puVar20;
      }
      local_58 = puVar20[2];
      local_1f8 = (longlong ****)0xdd1;
      local_1f0 = (longlong *)local_80;
      local_1c8 = (longlong ****)0x180068960;
      local_1c0 = (longlong *)0x2a;
      FUN_180041d90(local_a0,(longlong *)&local_1c8,(ulonglong *)&local_1f8);
      local_210 = local_210 | 1;
      DFHack::color_ostream::flush_buffer(this,false);
      (**(code **)(*(longlong *)this + 0x10))(this,*(undefined4 *)(this + 0x10));
      if (0xf < local_88) {
        pvVar24 = local_a0[0];
        if ((0xfff < local_88 + 1) &&
           (pvVar24 = *(void **)((longlong)local_a0[0] + -8),
           0x1f < (ulonglong)((longlong)local_a0[0] + (-8 - (longlong)pvVar24)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar24);
      }
      if (0xf < uStack_c8) {
        pvVar6 = (void *)CONCAT71(uStack_df,local_e0);
        pvVar24 = pvVar6;
        if ((0xfff < uStack_c8 + 1) &&
           (pvVar24 = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar24)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar24);
      }
      local_e0 = 0;
      local_d0 = uVar7;
      uStack_c8 = uVar8;
      if (0xf < uStack_a8) {
        pvVar6 = (void *)CONCAT71(uStack_bf,local_c0);
        pvVar24 = pvVar6;
        if ((0xfff < uStack_a8 + 1) &&
           (pvVar24 = *(void **)((longlong)pvVar6 + -8),
           0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar24)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(pvVar24);
      }
      local_c0 = 0;
      local_b0 = uVar7;
      uStack_a8 = uVar8;
      DFHack::DebugCategory::ostream_proxy_prefix::_vbase_destructor_(local_178);
    }
  }
  memmove(ppplVar29,ppplVar29 + 1,(longlong)pppplVar31[6] - (longlong)(ppplVar29 + 1));
  pppplVar31[6] = pppplVar31[6] + -1;
  ppplVar29 = pppplVar27[6];
  if (ppplVar29 == pppplVar27[7]) {
    FUN_1800057a0((longlong *)(pppplVar27 + 5),ppplVar29,&local_268);
  }
  else {
    *ppplVar29 = (longlong **)pppplVar5;
    pppplVar27[6] = pppplVar27[6] + 1;
  }
  pppplVar5 = local_278;
  local_268 = (longlong ****)local_278[1];
  uStack_260 = uStack_260 & 0xffffffff00000000;
  ppppplVar22 = (longlong *****)local_278;
  if (*(char *)((longlong)local_268 + 0x19) == '\0') {
    ppppplVar15 = (longlong *****)local_268;
    do {
      local_268 = (longlong ****)ppppplVar15;
      if (*(int *)((longlong)local_268 + 0x1c) < *(int *)(pppplVar31 + 4)) {
        uStack_260 = (ulonglong)uStack_260._4_4_ << 0x20;
        ppppplVar18 = (longlong *****)(local_268 + 2);
      }
      else {
        uStack_260 = CONCAT44(uStack_260._4_4_,1);
        ppppplVar18 = (longlong *****)local_268;
        ppppplVar22 = (longlong *****)local_268;
      }
      ppppplVar15 = (longlong *****)*ppppplVar18;
    } while (*(char *)((longlong)*ppppplVar18 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)ppppplVar22 + 0x19) != '\0') ||
     (*(int *)(pppplVar31 + 4) < *(int *)((longlong)ppppplVar22 + 0x1c))) {
    if (local_270 == 0x666666666666666) goto LAB_180020b27;
    local_188 = (longlong ****)&local_278;
    local_180 = 0;
    plVar16 = (longlong *)FUN_180064554(0x28);
    *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(pppplVar31 + 4);
    *(undefined4 *)(plVar16 + 4) = 0;
    *plVar16 = (longlong)pppplVar5;
    plVar16[1] = (longlong)pppplVar5;
    plVar16[2] = (longlong)pppplVar5;
    *(undefined2 *)(plVar16 + 3) = 0;
    local_180 = 0;
    ppppplVar22 = (longlong *****)
                  FUN_180015ac0((longlong *)&local_278,(longlong *)&local_268,plVar16);
  }
  pppplVar31 = local_278;
  *(int *)(ppppplVar22 + 4) = *(int *)(ppppplVar22 + 4) + -1;
  local_268 = (longlong ****)local_278[1];
  uStack_260 = uStack_260 & 0xffffffff00000000;
  ppppplVar22 = (longlong *****)local_278;
  if (*(char *)((longlong)local_268 + 0x19) == '\0') {
    ppppplVar15 = (longlong *****)local_268;
    do {
      local_268 = (longlong ****)ppppplVar15;
      if (*(int *)((longlong)local_268 + 0x1c) < *(int *)(pppplVar27 + 4)) {
        uStack_260 = (ulonglong)uStack_260._4_4_ << 0x20;
        ppppplVar18 = (longlong *****)(local_268 + 2);
      }
      else {
        uStack_260 = CONCAT44(uStack_260._4_4_,1);
        ppppplVar18 = (longlong *****)local_268;
        ppppplVar22 = (longlong *****)local_268;
      }
      ppppplVar15 = (longlong *****)*ppppplVar18;
    } while (*(char *)((longlong)*ppppplVar18 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)ppppplVar22 + 0x19) != '\0') ||
     (*(int *)(pppplVar27 + 4) < *(int *)((longlong)ppppplVar22 + 0x1c))) {
    if (local_270 == 0x666666666666666) goto LAB_180020b27;
    local_298 = (longlong ****)&local_278;
    uStack_290 = 0;
    plVar16 = (longlong *)FUN_180064554(0x28);
    *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(pppplVar27 + 4);
    *(undefined4 *)(plVar16 + 4) = 0;
    *plVar16 = (longlong)pppplVar31;
    plVar16[1] = (longlong)pppplVar31;
    plVar16[2] = (longlong)pppplVar31;
    *(undefined2 *)(plVar16 + 3) = 0;
    uStack_290 = 0;
    ppppplVar22 = (longlong *****)
                  FUN_180015ac0((longlong *)&local_278,(longlong *)&local_268,plVar16);
  }
  *(int *)(ppppplVar22 + 4) = *(int *)(ppppplVar22 + 4) + 1;
  goto LAB_180020322;
}



/* RVA 0x20bc0; VA 180020bc0; FUN_180020bc0 */

void FUN_180020bc0(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  longlong *plVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_68 [2];
  longlong *local_58;
  
  pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)(param_2 + 8);
  pbVar4 = FUN_180002e80(pbVar7,"Autofarm is ");
  pcVar11 = "Stopped.";
  if (*PTR_plugin_is_enabled_18007d010 != '\0') {
    pcVar11 = "Active.";
  }
  pbVar4 = FUN_180002e80(pbVar4,pcVar11);
  FUN_180002c30(pbVar4,'\n');
  plVar12 = *(longlong **)param_1[5];
  cVar2 = *(char *)((longlong)plVar12 + 0x19);
  while (cVar2 == '\0') {
    pcVar11 = *(char **)(*(longlong *)(*(longlong *)world_exref + 0x11b408) +
                        (longlong)*(int *)((longlong)plVar12 + 0x1c) * 8);
    puVar1 = (ulonglong *)(pcVar11 + 0x10);
    if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
      pcVar11 = *(char **)pcVar11;
    }
    pbVar4 = FUN_180007ac0(pbVar7,pcVar11,*puVar1);
    pbVar4 = FUN_180002e80(pbVar4," limit ");
    local_res18[0] = *(int *)((longlong)plVar12 + 0x1c);
    plVar5 = (longlong *)((longlong *)*param_1)[1];
    cVar2 = *(char *)((longlong)plVar5 + 0x19);
    plVar9 = (longlong *)*param_1;
    while (cVar2 == '\0') {
      plVar10 = plVar5;
      if (*(int *)((longlong)plVar5 + 0x1c) < local_res18[0]) {
        plVar5 = plVar5 + 2;
        plVar10 = plVar9;
      }
      plVar5 = (longlong *)*plVar5;
      plVar9 = plVar10;
      cVar2 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar9 + 0x19) == '\0') &&
       (*(int *)((longlong)plVar9 + 0x1c) <= local_res18[0])) {
      plVar5 = FUN_180011730(param_1,local_res18);
    }
    else {
      plVar5 = param_1 + 2;
    }
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,(int)*plVar5);
    pbVar4 = FUN_180002e80((basic_ostream<char,std::char_traits<char>_> *)pbVar6," current ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,(int)plVar12[4]);
    FUN_180002c30((basic_ostream<char,std::char_traits<char>_> *)pbVar6,'\n');
    plVar5 = (longlong *)plVar12[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      plVar12 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x19);
        plVar12 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar2 = *(char *)(plVar12[1] + 0x19);
      plVar9 = (longlong *)plVar12[1];
      plVar5 = plVar12;
      while ((plVar12 = plVar9, cVar2 == '\0' && (plVar5 == (longlong *)plVar12[2]))) {
        cVar2 = *(char *)(plVar12[1] + 0x19);
        plVar9 = (longlong *)plVar12[1];
        plVar5 = plVar12;
      }
    }
    cVar2 = *(char *)((longlong)plVar12 + 0x19);
  }
  plVar12 = *(longlong **)*param_1;
  cVar2 = *(char *)((longlong)plVar12 + 0x19);
  while (cVar2 == '\0') {
    plVar5 = (longlong *)param_1[5];
    plVar9 = (longlong *)plVar5[1];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      plVar10 = plVar5;
      do {
        plVar5 = plVar9;
        if (*(int *)((longlong)plVar9 + 0x1c) < *(int *)((longlong)plVar12 + 0x1c)) {
          plVar9 = plVar9 + 2;
          plVar5 = plVar10;
        }
        plVar9 = (longlong *)*plVar9;
        plVar10 = plVar5;
      } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
       (*(int *)((longlong)plVar12 + 0x1c) < *(int *)((longlong)plVar5 + 0x1c))) {
      pcVar11 = *(char **)(*(longlong *)(*(longlong *)world_exref + 0x11b408) +
                          (longlong)*(int *)((longlong)plVar12 + 0x1c) * 8);
      puVar1 = (ulonglong *)(pcVar11 + 0x10);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      pbVar4 = FUN_180007ac0(pbVar7,pcVar11,*puVar1);
      pbVar4 = FUN_180002e80(pbVar4," limit ");
      local_res20[0] = *(int *)((longlong)plVar12 + 0x1c);
      plVar5 = (longlong *)((longlong *)*param_1)[1];
      cVar2 = *(char *)((longlong)plVar5 + 0x19);
      plVar9 = (longlong *)*param_1;
      while (cVar2 == '\0') {
        plVar10 = plVar5;
        if (*(int *)((longlong)plVar5 + 0x1c) < local_res20[0]) {
          plVar5 = plVar5 + 2;
          plVar10 = plVar9;
        }
        plVar5 = (longlong *)*plVar5;
        plVar9 = plVar10;
        cVar2 = *(char *)((longlong)plVar5 + 0x19);
      }
      if ((*(char *)((longlong)plVar9 + 0x19) == '\0') &&
         (*(int *)((longlong)plVar9 + 0x1c) <= local_res20[0])) {
        plVar5 = FUN_180011730(param_1,local_res20);
      }
      else {
        plVar5 = param_1 + 2;
      }
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,(int)*plVar5);
      pbVar4 = FUN_180002e80((basic_ostream<char,std::char_traits<char>_> *)pbVar6," current 0");
      FUN_180002c30(pbVar4,'\n');
    }
    plVar5 = (longlong *)plVar12[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      plVar12 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x19);
        plVar12 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar2 = *(char *)(plVar12[1] + 0x19);
      plVar9 = (longlong *)plVar12[1];
      plVar5 = plVar12;
      while ((plVar12 = plVar9, cVar2 == '\0' && (plVar5 == (longlong *)plVar12[2]))) {
        cVar2 = *(char *)(plVar12[1] + 0x19);
        plVar9 = (longlong *)plVar12[1];
        plVar5 = plVar12;
      }
    }
    cVar2 = *(char *)((longlong)plVar12 + 0x19);
  }
  plVar12 = *(longlong **)param_1[3];
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    plVar5 = param_1 + 7;
    do {
      pcVar11 = *(char **)(*(longlong *)(*(longlong *)world_exref + 0x11b408) +
                          (longlong)(int)plVar12[4] * 8);
      puVar1 = (ulonglong *)(pcVar11 + 0x10);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      pbVar7 = FUN_180007ac0((basic_ostream<char,std::char_traits<char>_> *)(param_2 + 8),pcVar11,
                             *puVar1);
      pbVar7 = FUN_180002c30(pbVar7,':');
      plVar9 = plVar12 + 5;
      if (0xf < (ulonglong)plVar12[8]) {
        plVar9 = (longlong *)plVar12[5];
      }
      pbVar7 = FUN_180007ac0(pbVar7,(char *)plVar9,plVar12[7]);
      pbVar7 = FUN_180002e80(pbVar7," limit ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,(int)plVar12[9]);
      pbVar7 = FUN_180002e80((basic_ostream<char,std::char_traits<char>_> *)pbVar6," current ");
      FUN_180006de0(plVar5,local_68,(int *)(plVar12 + 4));
      plVar9 = local_58;
      if ((*(char *)((longlong)local_58 + 0x19) != '\0') ||
         (uVar8 = FUN_180012e00(plVar5,(int *)(plVar12 + 4),(int *)(local_58 + 4)),
         (char)uVar8 != '\0')) {
        if (param_1[8] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
          FUN_180017a10();
        }
        lVar3 = *plVar5;
        plVar9 = (longlong *)FUN_180064554(0x50);
        *(int *)(plVar9 + 4) = (int)plVar12[4];
        FUN_18000ebd0(plVar9 + 5,plVar12 + 5);
        *(undefined4 *)(plVar9 + 9) = 0;
        *plVar9 = lVar3;
        plVar9[1] = lVar3;
        plVar9[2] = lVar3;
        *(undefined2 *)(plVar9 + 3) = 0;
        plVar9 = FUN_1800161e0(plVar5,local_68,plVar9);
      }
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,(int)plVar9[9]);
      FUN_180002c30((basic_ostream<char,std::char_traits<char>_> *)pbVar6,'\n');
      plVar9 = (longlong *)plVar12[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        plVar12 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          plVar12 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar2 = *(char *)(plVar12[1] + 0x19);
        plVar10 = (longlong *)plVar12[1];
        plVar9 = plVar12;
        while ((plVar12 = plVar10, cVar2 == '\0' && (plVar9 == (longlong *)plVar12[2]))) {
          cVar2 = *(char *)(plVar12[1] + 0x19);
          plVar10 = (longlong *)plVar12[1];
          plVar9 = plVar12;
        }
      }
    } while (*(char *)((longlong)plVar12 + 0x19) == '\0');
  }
  pbVar7 = FUN_180002e80((basic_ostream<char,std::char_traits<char>_> *)(param_2 + 8),"Default: ");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,(int)param_1[2]);
  FUN_180002c30((basic_ostream<char,std::char_traits<char>_> *)pbVar6,'\n');
                    /* WARNING: Could not recover jumptable at 0x0001800210fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(param_2 + 8),FUN_18000c140);
  return;
}



/* RVA 0x21110; VA 180021110; FUN_180021110 */

undefined8 * FUN_180021110(undefined8 *param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (-1 < param_3) {
    uVar2 = (ulonglong)param_3;
    if (uVar2 < (ulonglong)(*(longlong *)(param_2 + 0x660) - *(longlong *)(param_2 + 0x658) >> 3)) {
      uVar1 = FUN_18001c310(*(longlong *)(*(longlong *)(param_2 + 0x658) + uVar2 * 8));
      if ((char)uVar1 != '\0') {
        FUN_18000ebd0(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x658) + uVar2 * 8));
        return param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}



/* RVA 0x211b0; VA 1800211b0; FUN_1800211b0 */

undefined8 *
FUN_1800211b0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (param_3 <= (ulonglong)param_1[2]) {
    uVar1 = param_1[2] - param_3;
    if (uVar1 < param_4) {
      param_4 = uVar1;
    }
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_180003ee0(param_2,(void *)((longlong)param_1 + param_3),param_4);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180018140();
}



/* RVA 0x21210; VA 180021210; FUN_180021210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180021210(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  char local_15 [5];
  ulonglong local_10;
  char *pcVar3;
  
  local_10 = DAT_18007d140 ^ (ulonglong)auStack_58;
  pcVar2 = local_15 + 2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
      *pcVar2 = (char)uVar1 + (char)((ulonglong)uVar1 / 10) * -10 + '0';
      uVar1 = (uint)((ulonglong)uVar1 / 10);
    } while (uVar1 != 0);
    pcVar2 = pcVar3 + -2;
    *pcVar2 = '-';
  }
  else {
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
      param_2 = (uint)((ulonglong)param_2 / 10);
    } while (param_2 != 0);
  }
  local_30 = param_1;
  FUN_180002510(param_1,pcVar2,local_15 + 2);
  return param_1;
}



/* RVA 0x212e0; VA 1800212e0; FUN_1800212e0 */

char * FUN_1800212e0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* RVA 0x21300; VA 180021300; plugin_enable */

undefined8 plugin_enable(color_ostream *param_1,undefined1 param_2)

{
  bool bVar1;
  Core *pCVar2;
  char *local_18;
  undefined8 local_10;
  
                    /* 0x21300  3  plugin_enable */
  pCVar2 = DFHack::Core::getInstance();
  if ((*(longlong *)(pCVar2 + 0x1410) != 0) && (*(longlong *)(pCVar2 + 0x1408) != 0)) {
    bVar1 = DFHack::World::isFortressMode(0xffffffff);
    if (bVar1) {
      *PTR_plugin_is_enabled_18007d010 = param_2;
      FUN_18001e140(DAT_18007d7b8);
      return 0;
    }
  }
  local_10 = 0x28;
  local_18 = "Cannot enable {} without a loaded fort.\n";
  FUN_18000da20(param_1,(longlong *)&local_18,&plugin_name);
  return 1;
}



/* RVA 0x213a0; VA 1800213a0; plugin_init */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 plugin_init(undefined8 param_1,longlong *param_2)

{
  PluginCommand *this;
  PluginCommand *pPVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStackY_d8 [32];
  PluginCommand local_98 [128];
  ulonglong local_18;
  
                    /* 0x213a0  6  plugin_init */
  local_18 = DAT_18007d140 ^ (ulonglong)auStackY_d8;
  pPVar1 = (PluginCommand *)
           DFHack::PluginCommand::PluginCommand
                     (local_98,"autofarm","Automatically manage farm crop selection.",FUN_180018630,
                      false,false,"");
  this = (PluginCommand *)param_2[1];
  if (this == (PluginCommand *)param_2[2]) {
    FUN_180005920(param_2,this,pPVar1);
  }
  else {
    DFHack::PluginCommand::PluginCommand(this,pPVar1);
    param_2[1] = param_2[1] + 0x78;
  }
  DFHack::PluginCommand::~PluginCommand(local_98);
  plVar2 = (longlong *)FUN_180064554(0x98);
  plVar3 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar3 = FUN_18000fa50(plVar2);
  }
  plVar2 = DAT_18007d7b8;
  bVar4 = DAT_18007d7b8 != (longlong *)0x0;
  DAT_18007d7b8 = plVar3;
  if (bVar4) {
    FUN_180012c50(&DAT_18007d7b8,plVar2);
  }
  return 0;
}



/* RVA 0x214b0; VA 1800214b0; plugin_load_site_data */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 plugin_load_site_data(undefined8 param_1)

{
                    /* 0x214b0  8  plugin_load_site_data */
  _DAT_18007d7b0 = 0;
  FUN_18001c380(DAT_18007d7b8,param_1);
  return 0;
}



/* RVA 0x214e0; VA 1800214e0; plugin_onstatechange */

undefined8 plugin_onstatechange(undefined8 param_1,int param_2)

{
                    /* 0x214e0  12  plugin_onstatechange */
  if (param_2 == 1) {
    *PTR_plugin_is_enabled_18007d010 = 0;
  }
  return 0;
}



/* RVA 0x21500; VA 180021500; plugin_onupdate */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 plugin_onupdate(longlong param_1)

{
                    /* 0x21500  13  plugin_onupdate */
  if (0x34 < *(int *)(*(longlong *)world_exref + 0x134c10) - _DAT_18007d7b0) {
    FUN_18001d470(DAT_18007d7b8,param_1);
  }
  return 0;
}



/* RVA 0x21540; VA 180021540; plugin_shutdown */

undefined8 plugin_shutdown(void)

{
                    /* 0x21540  15  plugin_shutdown */
  DAT_18007d7b8 = 0;
  return 0;
}



/* RVA 0x216b0; VA 1800216b0; FUN_1800216b0 */

undefined8 FUN_1800216b0(void)

{
  return 2;
}



/* RVA 0x216f0; VA 1800216f0; FUN_1800216f0 */

char * FUN_1800216f0(void)

{
  return "53.17-r1";
}



/* RVA 0x21700; VA 180021700; FUN_180021700 */

char * FUN_180021700(char param_1)

{
  char *pcVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18007d7c4) {
    FUN_180064f58(&DAT_18007d7c4);
    if (DAT_18007d7c4 == -1) {
      atexit(FUN_180067c10);
      _Init_thread_footer(&DAT_18007d7c4);
    }
  }
  if (param_1 != '\0') {
    pcVar1 = s_3bc63a2_18007d0d0;
    if (0xf < DAT_18007d0e8) {
      pcVar1 = (char *)s_3bc63a2_18007d0d0;
    }
    return pcVar1;
  }
  return "3bc63a220af608e1cf20b123dc45bc0a22e296ab";
}



/* RVA 0x21790; VA 180021790; autofarm_git_description */

char * autofarm_git_description(void)

{
  return "53.17-r1-0-g3bc63a22";
}


