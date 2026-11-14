/* reference PE:6aea05a1:02734000; new-game-mod-step; RVA 0x7ddb10..0x7ddbeb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong load_new_game_mod_step(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 auStackX_8 [2];
  undefined4 auStackX_18 [4];
  
  load_supplier_0xc4b030(auStackX_18,auStackX_8);
  iVar3 = _DAT_1423efc08 + -1;
  uVar1 = (longlong)iVar3 * 0x66666667 & 0xffffffff;
  iVar4 = iVar3 / 5 + (iVar3 >> 0x1f);
  if ((*(int *)(param_1 + 0x2e0) == 1) && ((DAT_142660e8c != '\0' || (DAT_142660e8d != '\0')))) {
    uVar1 = load_mod_choice_input
                      (&DAT_142660e80,iVar4,0x142660eb0,auStackX_18[0],(undefined4)auStackX_8[0],
                       (6 - (iVar3 >> 0x1f)) + iVar4);
    if ((char)uVar1 != '\0') {
      DAT_142661758 = 0;
      auStackX_8[0] = FUN_1415530e0(0xa30);
      lVar2 = FUN_14025b2c0(auStackX_8[0]);
      uVar1 = FUN_140c50360();
      *(undefined1 *)(lVar2 + 0x798) = 1;
      _DAT_1418be238 = 3;
      _DAT_1418be234 = 0xc;
      DAT_1418f9297 = 0;
      *(undefined1 *)(param_1 + 0x18) = 3;
    }
  }
  return uVar1;
}

