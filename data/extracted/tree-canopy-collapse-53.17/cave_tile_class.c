/* Actual Ghidra output; researcher-assigned name. VA 0x1414caa60..0x1414cad9c; see image.txt for input identity. */

undefined8 cave_tile_class(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  bVar2 = func_0x000140069640(param_1,param_2,param_3,param_4);
  if (((bVar2 & 7) == 2) &&
     (iVar4 = (int)(*(longlong *)(param_1 + 0x1d760) - *(longlong *)(param_1 + 0x1d758) >> 3) + -1,
     lVar6 = (longlong)iVar4, -1 < iVar4)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1d758) + lVar6 * 8);
      cVar3 = (**(code **)(*plVar1 + 0x130))(plVar1);
      if ((cVar3 != '\0') && ((int)param_4 == (int)plVar1[4])) {
        cVar3 = (**(code **)(*plVar1 + 0x140))(plVar1);
        if ((cVar3 == '\0') || (plVar1[6] == 0)) {
          if (((int)plVar1[1] <= (int)param_2) &&
             ((((int)param_2 <= *(int *)((longlong)plVar1 + 0x14) &&
               (*(int *)((longlong)plVar1 + 0xc) <= (int)param_3)) &&
              ((int)param_3 <= (int)plVar1[3])))) {
            return 0;
          }
        }
        else {
          cVar3 = FUN_140571c90(plVar1,param_2,param_3,param_4);
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  uVar5 = func_0x0001400695b0(param_1,param_2,param_3,param_4);
  uVar8 = uVar5 & 0xffff;
  if ((((short)uVar5 == 0) || (uVar7 = (uint)uVar8, uVar7 == 1)) ||
     ((uVar7 == 0x20 || ((uVar7 == 0x23 || (uVar7 == 0x2a)))))) {
    return 0xffffffff;
  }
  if (uVar7 < 0x37) {
    if ((0x48024008000010U >> (uVar5 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0x39) {
      return 0;
    }
    if (uVar7 == 0x3c) {
      return 0;
    }
    if (uVar7 == 0x3f) {
      return 0;
    }
    if (uVar7 == 0x1df) {
      return 0;
    }
    if (uVar7 == 0x201) {
      return 0;
    }
  }
  if (uVar7 < 0x35) {
    if ((0x12009002000040U >> (uVar5 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0x37) {
      return 0;
    }
    if (uVar7 == 0x3a) {
      return 0;
    }
    if (uVar7 == 0x3d) {
      return 0;
    }
    if (uVar7 == 0x1dd) {
      return 0;
    }
    if (uVar7 == 0x1ff) {
      return 0;
    }
  }
  if ((((((uVar7 != 0x53) && (uVar7 != 0x4f)) && (uVar7 != 0x50)) &&
       ((uVar7 != 0x51 && (uVar7 != 0x52)))) &&
      (((((short)uVar5 != 0x1eb && ((uVar7 != 0xd7 && (uVar7 != 0x147)))) && (uVar7 != 0x14b)) &&
       ((((uVar7 != 0x168 && (uVar7 != 0x1b4)) &&
         (cVar3 = func_0x0001402c6be0(uVar5 & 0xffff), cVar3 == '\0')) &&
        ((uVar7 = (uint)uVar8, uVar7 != 0x165 && (uVar7 != 0x166)))))))) && (uVar7 != 0x167)) {
    if (uVar7 < 0x165) {
      if (uVar7 == 0x164) {
        return 0;
      }
      if (uVar7 == 0x41) {
        return 0;
      }
      if (uVar7 == 0x142) {
        return 0;
      }
      bVar9 = uVar7 == 0x143;
    }
    else {
      if (uVar7 == 0x1b0) {
        return 0;
      }
      bVar9 = uVar7 == 0x1ea;
    }
    if (!bVar9) {
      cVar3 = func_0x0001402c7160(uVar8 & 0xffff);
      iVar4 = (int)uVar8;
      if ((cVar3 == '\0') && (cVar3 = func_0x00014024b500(uVar8 & 0xffff), cVar3 == '\0')) {
        switch(iVar4) {
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
          break;
        default:
          if (((iVar4 != 0x103) && (iVar4 != 0x105)) && (iVar4 != 0x106)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

