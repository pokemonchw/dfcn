/* Actual Ghidra output, research name; VA 0x141380430..0x141380614. */

void quality_hit_modifier(int *param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      return;
    }
    iVar4 = 0;
LAB_141380473:
    sVar1 = (**(code **)(*param_3 + 0x508))(param_3);
    iVar4 = iVar4 + sVar1;
    if (param_2 != (longlong *)0x0) goto LAB_14138048d;
    uVar2 = 0;
  }
  else {
    sVar1 = (**(code **)(*param_2 + 0x508))();
    iVar4 = (int)sVar1;
    if (param_3 != (longlong *)0x0) goto LAB_141380473;
LAB_14138048d:
    uVar2 = *(uint *)(param_2 + 2) & 0x8000000;
  }
  iVar3 = iVar4 + 5;
  if (uVar2 == 0) {
    iVar3 = iVar4;
  }
  if (param_3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_3 + 2) & 0x8000000;
  }
  iVar4 = iVar3 + 5;
  if (uVar2 == 0) {
    iVar4 = iVar3;
  }
  switch(iVar4) {
  case 1:
    iVar4 = *param_1 * 3;
    goto LAB_14138055f;
  case 2:
    iVar4 = *param_1 * 7;
    break;
  case 3:
    iVar4 = *param_1 << 3;
    break;
  case 4:
    iVar4 = *param_1 * 9;
    break;
  case 5:
    *param_1 = *param_1 * 2;
    goto LAB_141380573;
  case 6:
    iVar4 = *param_1 * 0xb;
    break;
  case 7:
    iVar4 = *param_1 * 0xc;
    break;
  case 8:
    iVar4 = *param_1 * 0xd;
    break;
  case 9:
    iVar4 = *param_1 * 0xe;
    break;
  case 10:
    *param_1 = *param_1 * 3;
    goto LAB_141380573;
  case 0xb:
    iVar4 = *param_1 << 4;
    break;
  case 0xc:
    iVar4 = *param_1 * 0x11;
    break;
  case 0xd:
    iVar4 = *param_1 * 9;
LAB_14138055f:
    iVar4 = iVar4 * 2;
    break;
  case 0xe:
    iVar4 = *param_1 * 0x13;
    break;
  case 0xf:
    *param_1 = *param_1 << 2;
    goto LAB_141380573;
  case 0x10:
    iVar4 = *param_1 * 0x15;
    break;
  case 0x11:
    iVar4 = *param_1 * 0x16;
    break;
  case 0x12:
    iVar4 = *param_1 * 0x17;
    break;
  case 0x13:
    iVar4 = *param_1 * 0x18;
    break;
  case 0x14:
    *param_1 = *param_1 * 5;
  default:
    goto LAB_141380573;
  }
  *param_1 = iVar4 / 5;
LAB_141380573:
  if (((param_3 != (longlong *)0x0) && (sVar1 = (**(code **)*param_3)(param_3), sVar1 == 0x18)) &&
     (0 < *(int *)(param_3[0x1d] + 0x1d0))) {
    iVar4 = *param_1;
    iVar3 = iVar4 - *(int *)(param_3[0x1d] + 0x1d0);
    *param_1 = iVar3;
    if ((-1 < iVar4) && (iVar3 < 0)) {
      *param_1 = 0;
    }
  }
  return;
}

