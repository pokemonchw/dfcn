/* Actual Ghidra output, Steam 53.16, VA 140c738a0..140c73a78 */

undefined8 stockpile_preservation_eligibility(longlong *param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  
  uVar2 = (**(code **)*param_1)();
  switch(uVar2) {
  case 0x11:
  case 0x1f:
  case 0x56:
    if (((*(byte *)(param_1 + 2) & 0x40) != 0) && (param_2 != '\0')) {
      lVar5 = param_1[7];
      iVar7 = 0;
      if (param_1[8] - lVar5 >> 3 != 0) {
        lVar8 = 0;
        do {
          iVar4 = (**(code **)(**(longlong **)(lVar8 + lVar5) + 0x10))();
          if (((iVar4 == 10) &&
              (lVar5 = (**(code **)(**(longlong **)(lVar8 + param_1[7]) + 0x18))(), lVar5 != 0)) &&
             (cVar1 = stockpile_preservation_eligibility(lVar5,1), cVar1 != '\0')) {
            return 1;
          }
          lVar5 = param_1[7];
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 8;
        } while ((ulonglong)(longlong)iVar7 < (ulonglong)(param_1[8] - lVar5 >> 3));
      }
    }
    break;
  case 0x46:
    sVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((ushort)(sVar3 - 0x1a3U) < 200) {
      return 1;
    }
    if ((ushort)(sVar3 - 0x13U) < 200) {
      return 1;
    }
    if ((ushort)(sVar3 - 0xdbU) < 200) {
      return 1;
    }
    return 0;
  case 0x4b:
    if ((*(uint *)((longlong)param_1 + 0xc4) & 2) == 0) {
      uVar6 = 0x21;
      if ((*(uint *)((longlong)param_1 + 0xc4) & 4) == 0) {
        uVar6 = 0xd;
      }
    }
    else {
      uVar6 = 0x22;
    }
    iVar7 = FUN_140d66790(&IMAGE_DOS_HEADER_140000000,uVar6,(short)param_1[0x17],
                          *(undefined4 *)((longlong)param_1 + 0xbc));
    if (iVar7 == -1) {
      return 0;
    }
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x47:
  case 0x48:
  case 0x58:
    if ((-1 < (char)*(uint *)(param_1 + 2)) && ((*(uint *)(param_1 + 2) >> 8 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}

