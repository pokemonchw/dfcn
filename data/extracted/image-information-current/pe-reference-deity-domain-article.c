/* reference PE:6aea05a1:02734000; deity-domain-article; RVA 0x76faf0..0x76fc04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void image_deity_domain_article(short param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418be040 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0xf;
  pppuStack_38 = (undefined8 ****)0x0;
  if ((int)param_1 - 0x13U < 0x6c) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_14076fc0c)[(int)((int)param_1 - 0x13U)]) {
    case 0:
      FUN_140070f00(param_2,"the ",4);
      goto LAB_14076fb7d;
    }
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
LAB_14076fb7d:
  image_deity_domain_nouns(param_1,&pppuStack_38);
  ppppuVar3 = &pppuStack_38;
  if (0xf < uStack_20) {
    ppppuVar3 = (undefined8 ****)pppuStack_38;
  }
  FUN_140071040(param_2,ppppuVar3,uStack_28);
  if (0xf < uStack_20) {
    uVar4 = uStack_20 + 1;
    ppppuVar3 = (undefined8 ****)pppuStack_38;
    if (0xfff < uVar4) {
      uVar4 = uStack_20 + 0x28;
      ppppuVar3 = (undefined8 ****)pppuStack_38[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar3))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    load_supplier_0x15530d0(ppppuVar3,uVar4);
  }
  FUN_1415530b0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}

