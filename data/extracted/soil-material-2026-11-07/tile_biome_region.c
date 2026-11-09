/* Actual Ghidra output; researcher-assigned name. VA 1400838a0..1400839ff; see image.txt for input identity. */

void tile_biome_region(longlong param_1,short *param_2,short *param_3,ushort param_4,ushort param_5,
                      short param_6)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  if (((((-1 < (short)param_4) && ((int)(short)param_4 < *(int *)(param_1 + 0x116bbc))) &&
       (-1 < (short)param_5)) &&
      (((int)(short)param_5 < *(int *)(param_1 + 0x116bc0) && (-1 < param_6)))) &&
     (((int)param_6 < *(int *)(param_1 + 0x116bc4) &&
      ((*(longlong *)(param_1 + 0x116b88) != 0 &&
       (lVar2 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x116b88) +
                     ((ulonglong)(longlong)(short)param_4 >> 4) * 8) +
                   ((ulonglong)(longlong)(short)param_5 >> 4) * 8) + (longlong)param_6 * 8),
       lVar2 != 0)))))) {
    iVar4 = ((int)*(short *)(lVar2 + 0x88) + (int)(short)(param_4 & 0xf)) / 0x30 +
            iRam0000000142450378;
    *param_2 = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    iVar4 = ((int)*(short *)(lVar2 + 0x8a) + (int)(short)(param_5 & 0xf)) / 0x30 +
            iRam000000014245037c;
    *param_3 = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
    uVar1 = *(uint *)(lVar2 + 0x2a0 +
                     ((longlong)(short)(param_4 & 0xf) * 0x10 + (longlong)(short)(param_5 & 0xf)) *
                     4);
    bVar3 = (byte)(uVar1 >> 0x11) & 1;
    bVar5 = bVar3 | 2;
    if ((uVar1 >> 0x12 & 1) == 0) {
      bVar5 = bVar3;
    }
    bVar3 = bVar5 | 4;
    if ((uVar1 >> 0x13 & 1) == 0) {
      bVar3 = bVar5;
    }
    bVar5 = bVar3 | 8;
    if ((uVar1 >> 0x14 & 1) == 0) {
      bVar5 = bVar3;
    }
    iVar4 = (int)*(char *)((ulonglong)bVar5 + 0x1fa0 + lVar2);
    iVar6 = iVar4 / 3 + (iVar4 >> 0x1f) +
            (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
    iVar4 = iVar4 + iVar6 * -3;
    if (iVar4 == 0) {
      *param_2 = *param_2 + -1;
    }
    else if (iVar4 == 2) {
      *param_2 = *param_2 + 1;
    }
    if (iVar6 == 0) {
      *param_3 = *param_3 + -1;
    }
    else if (iVar6 == 2) {
      *param_3 = *param_3 + 1;
    }
    if (*param_2 < 0) {
      *param_2 = 0;
    }
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    if (*(int *)(lRam0000000142453de8 + 0xa0) <= (int)*param_2) {
      *param_2 = (short)*(int *)(lRam0000000142453de8 + 0xa0) + -1;
    }
    if (*(int *)(lRam0000000142453de8 + 0xa4) <= (int)*param_3) {
      *param_3 = (short)*(int *)(lRam0000000142453de8 + 0xa4) + -1;
    }
    return;
  }
  iVar4 = *(int *)(param_1 + 0x116bc8) + (int)(short)param_4 / 0x30;
  *param_2 = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
  iVar4 = *(int *)(param_1 + 0x116bcc) + (int)(short)param_5 / 0x30;
  *param_3 = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4);
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x11a638) + 0xa0);
  if (iVar4 <= *param_2) {
    *param_2 = (short)iVar4 + -1;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x11a638) + 0xa4);
  if (iVar4 <= *param_3) {
    *param_3 = (short)iVar4 + -1;
  }
  return;
}

