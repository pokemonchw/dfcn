/* reference PE:6aea05a1:02734000; preview-description; RVA 0x2158c0..0x2159d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_preview_description(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_48;
  longlong alStack_38 [6];
  
  alStack_38[4] = _DAT_1418be040 ^ (ulonglong)auStack_98;
  FUN_1400bcfe0(param_1 + 0x400);
  if ((*(longlong *)(param_1 + 0x1d8) - *(longlong *)(param_1 + 0x1d0) & 0xfffffffffffffff8U) != 0)
  {
    alStack_38[1] = 0;
    alStack_38[2] = 0;
    alStack_38[3] = 0xf;
    alStack_38[0] = 0;
    uStack_48 = 0;
    uStack_50 = 1;
    uStack_58 = 0xffffffff;
    uStack_60 = 0xffff;
    uStack_68 = 0xffffffff;
    uStack_70 = 1;
    uStack_78 = 1;
    image_artwork_description(0x1423f3970,(longlong *)(param_1 + 0x1d0),alStack_38,0);
    FUN_140900dc0(param_1 + 0x400,alStack_38,*(undefined4 *)(param_1 + 0x420));
    if (0xf < (ulonglong)alStack_38[3]) {
      uVar3 = alStack_38[3] + 1;
      lVar2 = alStack_38[0];
      if (0xfff < uVar3) {
        uVar3 = alStack_38[3] + 0x28;
        lVar2 = *(longlong *)(alStack_38[0] + -8);
        if (0x1f < (alStack_38[0] - lVar2) - 8U) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      load_supplier_0x15530d0(lVar2,uVar3);
    }
  }
  FUN_1415530b0(alStack_38[4] ^ (ulonglong)auStack_98);
  return;
}

