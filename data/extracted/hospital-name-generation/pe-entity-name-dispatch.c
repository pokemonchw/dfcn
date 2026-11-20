/* Actual Ghidra decompilation; PE:6aea05a1:02734000	entity-name-dispatch	0x14094b310	0x14094b582	0x14094b3bb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14094b310(longlong param_1,char *param_2,short param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  sVar1 = *(short *)(param_1 + 0x98);
  if ((-1 < sVar1) &&
     ((ulonglong)(longlong)sVar1 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
    lVar4 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar1 * 8);
    if ((*(int *)(lVar4 + 0x1b0) < 0xc) ||
       ((*(byte *)(*(longlong *)(lVar4 + 0x1a8) + 0xb) & 1) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      supplier_0x140067620(param_2);
      param_2[0x72] = '\x01';
      param_2[0x6c] = -1;
      param_2[0x6d] = -1;
      param_2[0x6e] = -1;
      param_2[0x6f] = -1;
      FUN_14094a690();
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        **(char **)param_2 = **(char **)param_2 + -0x20;
        return;
      }
      *param_2 = *param_2 + -0x20;
      return;
    }
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + 0x3c0) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1401fd1c0(0x14250fbf0,lVar4 + 0x3b0);
  }
  if ((int)param_3 - 2U < 0x35) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_14094b5d4)[(int)((int)param_3 - 2U)]) {
    case 0:
      lVar5 = lVar4 + 0x4f0;
      lVar4 = lVar4 + 0x1a50;
      break;
    case 1:
      lVar5 = lVar4 + 0x610;
      lVar4 = lVar4 + 0x1b70;
      break;
    case 2:
      lVar5 = lVar4 + 0x730;
      lVar4 = lVar4 + 0x1c90;
      break;
    case 3:
      lVar5 = lVar4 + 0x850;
      lVar4 = lVar4 + 0x1db0;
      break;
    case 4:
      lVar5 = lVar4 + 0x970;
      lVar4 = lVar4 + 0x1ed0;
      break;
    case 5:
      lVar5 = lVar4 + 0xa90;
      lVar4 = lVar4 + 0x1ff0;
      break;
    case 6:
      lVar5 = lVar4 + 0xbb0;
      lVar4 = lVar4 + 0x2110;
      break;
    case 7:
      lVar5 = lVar4 + 0xcd0;
      lVar4 = lVar4 + 0x2230;
      break;
    case 8:
      lVar5 = lVar4 + 0xdf0;
      lVar4 = lVar4 + 0x2350;
      break;
    case 9:
      lVar5 = lVar4 + 0xf10;
      lVar4 = lVar4 + 0x2470;
      break;
    case 10:
      lVar5 = lVar4 + 0x1270;
      lVar4 = lVar4 + 0x27d0;
      break;
    case 0xb:
      lVar5 = lVar4 + 0x1030;
      lVar4 = lVar4 + 0x2590;
      break;
    case 0xc:
      lVar5 = lVar4 + 0x1150;
      lVar4 = lVar4 + 0x26b0;
      break;
    case 0xd:
      goto override_jmp_14094b413_case_1;
    case 0xe:
      lVar5 = lVar4 + 0x1390;
      lVar4 = lVar4 + 0x28f0;
      break;
    case 0xf:
      lVar5 = lVar4 + 0x14b0;
      lVar4 = lVar4 + 0x2a10;
      break;
    case 0x10:
      lVar5 = lVar4 + 0x15d0;
      lVar4 = lVar4 + 0x2b30;
      break;
    case 0x11:
      lVar5 = lVar4 + 0x16f0;
      lVar4 = lVar4 + 0x2c50;
      break;
    case 0x12:
      lVar5 = lVar4 + 0x1810;
      lVar4 = lVar4 + 0x2d70;
    }
  }
  else {
override_jmp_14094b413_case_1:
    lVar5 = lVar4 + 0x3d0;
    lVar4 = lVar4 + 0x1930;
  }
  FUN_140aac300(param_2,uVar3,param_3,lVar5,lVar4);
  return;
}

