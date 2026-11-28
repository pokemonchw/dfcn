/* classic PE:6aea11a5:0272d000; poetic-topic; RVA 0xe88cb0..0xe88fd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_poetic_topic(undefined8 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  undefined2 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_108 [208];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  if (0x14 < param_2) {
    return;
  }
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_138;
                    /* WARNING: Switch is manually overridden */
  switch(param_2) {
  case 0:
    uVar5 = 8;
    pcVar4 = "the past";
    break;
  case 1:
    uVar5 = 0xe;
    pcVar4 = "current events";
    break;
  case 2:
    uVar5 = 10;
    pcVar4 = "the future";
    break;
  case 3:
    uVar5 = 0x19;
    pcVar4 = "someone recently deceased";
    break;
  case 4:
    uVar5 = 0x18;
    pcVar4 = "someone recently retired";
    break;
  case 5:
    uVar5 = 8;
    pcVar4 = "religion";
    break;
  case 6:
    uVar5 = 0x10;
    pcVar4 = "a specific place";
    break;
  case 7:
    uVar5 = 0x1c;
    pcVar4 = "a specific wilderness region";
    break;
  case 8:
    uVar5 = 6;
    pcVar4 = "nature";
    break;
  case 9:
    uVar5 = 7;
    pcVar4 = "a lover";
    break;
  case 10:
    uVar5 = 6;
    pcVar4 = "family";
    break;
  case 0xb:
    pcVar4 = "alcoholic beverages";
    goto LAB_140e88fae;
  case 0xc:
    uVar5 = 9;
    pcVar4 = "a journey";
    break;
  case 0xd:
    uVar5 = 3;
    pcVar4 = "war";
    break;
  case 0xe:
    uVar5 = 8;
    pcVar4 = "the hunt";
    break;
  case 0xf:
    uVar5 = 6;
    pcVar4 = "mining";
    break;
  case 0x10:
    uVar5 = 5;
    pcVar4 = "death";
    break;
  case 0x11:
    uVar5 = 0xb;
    pcVar4 = "immortality";
    break;
  case 0x12:
    pcVar4 = "someone\'s character";
    goto LAB_140e88fae;
  case 0x13:
    if (param_3 != 0xffffffff) {
      load_supplier_0x73640(auStack_108);
      uStack_110 = 0;
      uStack_118 = 1;
      FUN_140ba79f0(0x142516038,param_1);
      goto LAB_140e88fbc;
    }
    pcVar4 = "a historical figure";
LAB_140e88fae:
    uVar5 = 0x13;
    break;
  case 0x14:
    if (param_3 == 0xffffffff) {
      pcVar4 = "an abstract concept";
      goto LAB_140e88fae;
    }
    if (param_3 == 0x15) {
      uVar5 = 0x14;
      pcVar4 = "the concept of death";
    }
    else if (param_3 == 0x1e) {
      uVar5 = 0x15;
      pcVar4 = "the concept of family";
    }
    else if (param_3 == 0x30) {
      uVar5 = 0x16;
      pcVar4 = "the concept of hunting";
    }
    else if (param_3 == 0x4b) {
      uVar5 = 0x15;
      pcVar4 = "the concept of nature";
    }
    else {
      if (param_3 != 0x7a) {
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_20 = 0xf;
        pppuStack_38 = (undefined8 ****)0x0;
        load_supplier_0x76d480(param_3 & 0xffff,&pppuStack_38);
        ppppuVar2 = &pppuStack_38;
        if (0xf < uStack_20) {
          ppppuVar2 = (undefined8 ****)pppuStack_38;
        }
        FUN_140070fd0(param_1,ppppuVar2,uStack_28);
        if (0xf < uStack_20) {
          uVar3 = uStack_20 + 1;
          ppppuVar2 = (undefined8 ****)pppuStack_38;
          if (0xfff < uVar3) {
            uVar3 = uStack_20 + 0x28;
            ppppuVar2 = (undefined8 ****)pppuStack_38[-1];
            if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar2))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          load_supplier_0x154de20(ppppuVar2,uVar3);
        }
        goto LAB_140e88fbc;
      }
      uVar5 = 0x12;
      pcVar4 = "the concept of war";
    }
  }
  FUN_140070fd0(param_1,pcVar4,uVar5);
LAB_140e88fbc:
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_138);
  return;
}

