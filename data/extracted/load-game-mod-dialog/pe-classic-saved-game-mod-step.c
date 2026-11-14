/* classic PE:6aea11a5:0272d000; saved-game-mod-step; RVA 0x7db250..0x7db32b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong load_saved_game_mod_step(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 auStackX_8 [2];
  undefined4 auStackX_18 [4];
  
  load_supplier_0xc47e50(auStackX_18,auStackX_8);
  iVar3 = _DAT_1423e9b08 + -1;
  uVar1 = (longlong)iVar3 * 0x66666667 & 0xffffffff;
  iVar4 = iVar3 / 5 + (iVar3 >> 0x1f);
  if ((*(int *)(param_1 + 0x198) == 1) && ((DAT_14265ad8c != '\0' || (DAT_14265ad8d != '\0')))) {
    uVar1 = load_mod_choice_input
                      (&DAT_14265ad80,iVar4,0x14265adb0,auStackX_18[0],(undefined4)auStackX_8[0],
                       (6 - (iVar3 >> 0x1f)) + iVar4);
    if ((char)uVar1 != '\0') {
      DAT_14265b658 = 0;
      auStackX_8[0] = FUN_14154de30(0xa30);
      lVar2 = FUN_14025b160(auStackX_8[0]);
      uVar1 = FUN_140c4d180();
      *(undefined1 *)(lVar2 + 0x798) = 1;
      _DAT_1418b821c = 3;
      _DAT_1418b8218 = 0xc;
      DAT_1418f3197 = 0;
      *(undefined1 *)(param_1 + 0x18) = 3;
    }
  }
  return uVar1;
}

