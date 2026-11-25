
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e7bfb0(longlong param_1)

{
  short *psVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  func_0x000141554566(param_1 + 0x22c,0,0x130);
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0x2214) = 0;
  *(undefined8 *)(param_1 + 0x221c) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  uVar10 = uVar9;
  if (_DAT_142407550 - _DAT_142407548 >> 3 != 0) {
    do {
      lVar7 = *(longlong *)(uVar10 + _DAT_142407548);
      if (((*(byte *)(lVar7 + 0x110) & 2) == 0) && (cVar4 = func_0x0001413a7620(), cVar4 != '\0')) {
        if (*(longlong *)(lVar7 + 0xa98) != 0) {
          iVar5 = *(int *)(*(longlong *)(lVar7 + 0xa98) + 0x3c8);
          if (iVar5 < 100000) {
            if (iVar5 < 50000) {
              if (iVar5 < 20000) {
                *(int *)(param_1 + 0x2214) = *(int *)(param_1 + 0x2214) + 1;
              }
              else {
                *(int *)(param_1 + 0x2218) = *(int *)(param_1 + 0x2218) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x221c) = *(int *)(param_1 + 0x221c) + 1;
            }
          }
          else {
            *(int *)(param_1 + 0x2220) = *(int *)(param_1 + 0x2220) + 1;
          }
        }
        lVar7 = *(longlong *)(uVar10 + _DAT_142407548);
        if (*(longlong *)(lVar7 + 0xd80) == 0) {
          if ((*(int *)(lVar7 + 0x1280) < 8) ||
             ((*(byte *)(*(longlong *)(lVar7 + 0x1278) + 7) & 4) == 0)) {
            if (((*(uint *)(lVar7 + 0x82c) & 0x2000000) == 0) &&
               ((*(uint *)(lVar7 + 0x828) & 0x2000000) != 0)) goto LAB_140e7c0eb;
          }
          else if ((*(uint *)(lVar7 + 0x82c) & 0x2000000) == 0) {
LAB_140e7c0eb:
            cVar4 = FUN_1413d2990(lVar7,_DAT_1423b5af8);
            if (cVar4 == '\0') {
              uVar2 = *(ushort *)(*(longlong *)(uVar10 + _DAT_142407548) + 0xa0);
              if (uVar2 < 0x87) {
                psVar1 = (short *)(param_1 + 0x22c + (longlong)(short)uVar2 * 2);
                *psVar1 = *psVar1 + 1;
              }
            }
            else {
              *(short *)(param_1 + 0x35e) = *(short *)(param_1 + 0x35e) + 1;
            }
            *(short *)(param_1 + 0x35c) = *(short *)(param_1 + 0x35c) + 1;
          }
        }
        cVar4 = func_0x000140e4dee0(*(undefined8 *)(uVar10 + _DAT_142407548));
        if (cVar4 != '\0') {
          cVar4 = func_0x000141359540();
          if (cVar4 == '\0') {
            *(short *)(param_1 + 0x360) = *(short *)(param_1 + 0x360) + 1;
          }
          else {
            *(short *)(param_1 + 0x362) = *(short *)(param_1 + 0x362) + 1;
          }
        }
        if ((*(uint *)(*(longlong *)(uVar10 + _DAT_142407548) + 0x110) & 0x4000000) != 0) {
          if ((ushort)(*(short *)(*(longlong *)(uVar10 + _DAT_142407548) + 0xa0) - 0x62U) < 2) {
            *(short *)(param_1 + 0x364) = *(short *)(param_1 + 0x364) + 1;
          }
          else {
            *(short *)(param_1 + 0x366) = *(short *)(param_1 + 0x366) + 1;
          }
        }
        cVar4 = func_0x00014138bc40(*(undefined8 *)(uVar10 + _DAT_142407548));
        if (cVar4 != '\0') {
          *(short *)(param_1 + 0x368) = *(short *)(param_1 + 0x368) + 1;
          iVar5 = FUN_141356ea0(*(undefined8 *)(uVar10 + _DAT_142407548));
          *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + iVar5;
        }
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(_DAT_142407550 - _DAT_142407548 >> 3));
  }
  plVar3 = *(longlong **)(_DAT_1423bc668 + 0x1458);
  for (plVar6 = *(longlong **)(_DAT_1423bc668 + 0x1450); plVar6 < plVar3; plVar6 = plVar6 + 1) {
    lVar7 = *(longlong *)(*plVar6 + 0x10);
    if (((lVar7 != 0) &&
        (((0 < *(int *)(lVar7 + 0xd0) && (**(char **)(lVar7 + 200) < '\0')) ||
         (*(int *)(lVar7 + 0x30) == -1)))) &&
       ((lVar7 = *(longlong *)(*plVar6 + 0x18), lVar7 == 0 || (-1 < *(int *)(lVar7 + 0x110))))) {
      *(short *)(param_1 + 0x35c) = *(short *)(param_1 + 0x35c) + 1;
    }
  }
  return;
}

