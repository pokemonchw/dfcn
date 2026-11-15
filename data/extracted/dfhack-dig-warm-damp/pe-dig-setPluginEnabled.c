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

