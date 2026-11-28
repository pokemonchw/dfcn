/* Actual Ghidra output; researcher-assigned name. VA 0x14055bcd0..0x14055bdcf; see image.txt for input identity. */

void span_topology(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  sVar1 = *(short *)(param_1 + 0x1a5a);
  sVar2 = *(short *)(param_1 + 0x1a5c);
  uVar5 = (int)(*(longlong *)(param_1 + 0x1830) - *(longlong *)(param_1 + 0x1828) >> 3) - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 << 3;
    do {
      FUN_14055a9a0(*(undefined8 *)(*(longlong *)(param_1 + 0x1828) + lVar6),sVar1 >> 4,sVar2 >> 4,
                    uVar5 & 0xffff);
      lVar3 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x1828));
      if (lVar3 != 0) {
        FUN_140070de0(lVar3 + 0x48);
        FUN_140070de0(lVar3 + 0x30);
        FUN_140070de0(lVar3 + 0x18);
        func_0x0001415530d0(lVar3,0x68);
      }
      lVar4 = *(longlong *)(param_1 + 0x1828) + lVar6;
      lVar3 = lVar4 + 8;
      func_0x00014155486a(lVar4,lVar3,*(longlong *)(param_1 + 0x1830) - lVar3);
      *(longlong *)(param_1 + 0x1830) = *(longlong *)(param_1 + 0x1830) + -8;
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

