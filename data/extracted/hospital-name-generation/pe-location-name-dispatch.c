/* Actual Ghidra decompilation; PE:6aea05a1:02734000	location-name-dispatch	0x1409aa010	0x1409aa3c3	0x1409aa44c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409aa010(longlong param_1,undefined8 param_2,short param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (((*(longlong *)(lVar2 + 0x3c0) == 0) && (sVar1 = *(short *)(param_1 + 0x98), -1 < sVar1)) &&
     ((ulonglong)(longlong)sVar1 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) {
    lVar3 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar1 * 8);
    if ((*(int *)(lVar3 + 0x1b0) < 0xc) ||
       ((*(byte *)(*(longlong *)(lVar3 + 0x1a8) + 0xb) & 1) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto override_jmp_1409aa0c4_case_8;
  }
  uVar5 = FUN_1401fd1c0(0x14250fbf0,lVar2 + 0x3b0);
  if ((int)param_3 - 0x15U < 0x22) {
                    /* WARNING: Switch is manually overridden */
    switch((int)param_3 - 0x15U) {
    case 0:
      FUN_140aac300(param_2,uVar5,param_3,0x142512c98,lVar2 + 0x3d0);
      return;
    case 1:
      FUN_140aac300(param_2,uVar5,param_3,0x142512db8,lVar2 + 0x3d0);
      return;
    case 2:
      FUN_140aac300(param_2,uVar5,param_3,0x142512ed8,lVar2 + 0x3d0);
      return;
    case 3:
      FUN_140aac300(param_2,uVar5,param_3,0x142512ff8,lVar2 + 0x3d0);
      return;
    case 4:
      FUN_140aac300(param_2,uVar5,param_3,0x142513118,lVar2 + 0x3d0);
      return;
    case 5:
      FUN_140aac300(param_2,uVar5,param_3,0x142513238,lVar2 + 0x3d0);
      return;
    case 6:
      FUN_140aac300(param_2,uVar5,param_3,0x142513358,lVar2 + 0x3d0);
      return;
    case 7:
      FUN_140aac300(param_2,uVar5,param_3,0x142513478,lVar2 + 0x3d0);
      return;
    case 0xb:
      FUN_140aac300(param_2,uVar5,param_3,0x1425138f8,lVar2 + 0x3d0);
      return;
    case 0xc:
      FUN_140aac300(param_2,uVar5,param_3,0x142513a18,lVar2 + 0x3d0);
      return;
    case 0xd:
      FUN_140aac300(param_2,uVar5,param_3,0x142513b38,lVar2 + 0x3d0);
      return;
    case 0xe:
      FUN_140aac300(param_2,uVar5,param_3,0x142513c58,lVar2 + 0x3d0);
      return;
    case 0x11:
      FUN_140aac300(param_2,uVar5,param_3,0x142513d78,lVar2 + 0x3d0);
      return;
    case 0x16:
      FUN_140aac300(param_2,uVar5,param_3,0x142513fb8,lVar2 + 0x3d0);
      return;
    case 0x1a:
      FUN_140aac300(param_2,uVar5,param_3,0x1425140d8,lVar2 + 0x3d0);
      return;
    case 0x1d:
      FUN_140aac300(param_2,uVar5,param_3,0x142514318,lVar2 + 0x3d0);
      return;
    case 0x1f:
      FUN_140aac300(param_2,uVar5,param_3,0x142514558,lVar2 + 0x3d0);
      return;
    case 0x20:
      FUN_140aac300(param_2,uVar5,param_3,0x142514678,lVar2 + 0x3d0);
      return;
    case 0x21:
      FUN_140aac300(param_2,uVar5,param_3,0x142514798,lVar2 + 0x3d0);
      return;
    }
  }
override_jmp_1409aa0c4_case_8:
  FUN_14094b310(param_1,param_2,param_3);
  return;
}

