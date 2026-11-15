/* reference PE:6aea05a1:02734000; ordinal; RVA 0x548050..0x548520 */

void load_ordinal(uint param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  
  param_2[2] = 0;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar1 = 0;
  if (param_3 == '\0') {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      FUN_140070f00(param_2,"Negative ",9);
    }
    if (param_1 < 0x14) {
                    /* WARNING: Switch is manually overridden */
      switch(param_1) {
      case 0:
        FUN_140070f00(param_2,"Zeroth",6);
        return;
      case 1:
        FUN_140070f00(param_2,"First",5);
        return;
      case 2:
        FUN_140070f00(param_2,"Second",6);
        return;
      case 3:
        FUN_140070f00(param_2,"Third",5);
        return;
      case 4:
        FUN_140070f00(param_2,"Fourth",6);
        return;
      case 5:
        FUN_140070f00(param_2,"Fifth",5);
        return;
      case 6:
        FUN_140070f00(param_2,"Sixth",5);
        return;
      case 7:
        FUN_140070f00(param_2,"Seventh",7);
        return;
      case 8:
        FUN_140070f00(param_2,"Eighth",6);
        return;
      case 9:
        FUN_140070f00(param_2,"Ninth",5);
        return;
      case 10:
        FUN_140070f00(param_2,"Tenth",5);
        return;
      case 0xb:
        FUN_140070f00(param_2,"Eleventh",8);
        return;
      case 0xc:
        FUN_140070f00(param_2,"Twelfth",7);
        return;
      case 0xd:
        FUN_140070f00(param_2,"Thirteenth",10);
        return;
      case 0xe:
        FUN_140070f00(param_2,"Fourteenth",10);
        return;
      case 0xf:
        FUN_140070f00(param_2,"Fifteenth",9);
        return;
      case 0x10:
        FUN_140070f00(param_2,"Sixteenth",9);
        return;
      case 0x11:
        FUN_140070f00(param_2,"Seventeenth",0xb);
        return;
      case 0x12:
        FUN_140070f00(param_2,"Eighteenth",10);
        return;
      case 0x13:
        FUN_140070f00(param_2,"Nineteenth",10);
        return;
      }
    }
    FUN_140545610(param_1,param_2);
    iVar2 = (int)param_1 % 10;
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        pcVar3 = "th";
        if ((int)param_1 % 100 != 0xc) {
          pcVar3 = "nd";
        }
        FUN_140071040(param_2,pcVar3,2);
        return;
      }
      if (iVar2 == 3) {
        pcVar3 = "th";
        if ((int)param_1 % 100 != 0xd) {
          pcVar3 = "rd";
        }
        FUN_140071040(param_2,pcVar3,2);
        return;
      }
      FUN_140071040(param_2,"th",2);
      return;
    }
    pcVar3 = "th";
    if ((int)param_1 % 100 != 0xb) {
      pcVar3 = "st";
    }
  }
  else {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      FUN_140070f00(param_2,"-",1);
    }
    FUN_140545610(param_1,param_2);
    iVar2 = (int)param_1 % 10;
    if (iVar2 == 1) {
      pcVar3 = "th";
      if ((int)param_1 % 100 != 0xb) {
        pcVar3 = "st";
      }
    }
    else if (iVar2 == 2) {
      pcVar3 = "th";
      if ((int)param_1 % 100 != 0xc) {
        pcVar3 = "nd";
      }
    }
    else if (iVar2 == 3) {
      pcVar3 = "th";
      if ((int)param_1 % 100 != 0xd) {
        pcVar3 = "rd";
      }
    }
    else {
      pcVar3 = "th";
    }
  }
  FUN_140071040(param_2,pcVar3,2);
  return;
}

