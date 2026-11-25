/* steam 53.17; torso_volume; RVA 0xcd63f0..0xcd6586 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int equipment_torso_volume(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  iVar6 = 0;
  if (-1 < *(short *)(lVar2 + 0x10e)) {
    iVar6 = (int)*(short *)(lVar2 + 0x10e);
  }
  if (3 < iVar6) {
    iVar6 = 3;
  }
  iVar5 = 0;
  if (-1 < *(short *)(lVar2 + 0x110)) {
    iVar5 = (int)*(short *)(lVar2 + 0x110);
  }
  if (3 < iVar5) {
    iVar5 = 3;
  }
  sVar1 = *(short *)(param_1 + 0xc0);
  if ((((-1 < sVar1) &&
       ((ulonglong)(longlong)sVar1 < (ulonglong)(_DAT_14250eef0 - _DAT_14250eee8 >> 3))) &&
      (lVar3 = *(longlong *)(_DAT_14250eee8 + (longlong)sVar1 * 8),
      plVar4 = *(longlong **)(lVar3 + 0x178),
      *(longlong *)(lVar3 + 0x180) - (longlong)plVar4 >> 3 != 0)) && (lVar3 = *plVar4, lVar3 != 0))
  {
    iStackX_8 = *(int *)(lVar3 + 0x3fc0 + ((longlong)iVar5 + (longlong)iVar6 * 4) * 4);
    goto LAB_140cd653e;
  }
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      iStackX_8 = 0x4ee;
      goto LAB_140cd653e;
    }
    if (iVar5 != 1) {
      if (iVar5 == 2) goto LAB_140cd652b;
      if (iVar5 != 3) goto LAB_140cd653e;
      goto LAB_140cd651e;
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        if (iVar5 == 0) goto LAB_140cd652b;
        if (iVar5 == 1) goto LAB_140cd651e;
        if (iVar5 == 2) goto LAB_140cd6500;
        if (iVar5 != 3) goto LAB_140cd653e;
      }
      else {
        if (iVar6 != 3) goto LAB_140cd653e;
        if (iVar5 == 0) {
LAB_140cd651e:
          iStackX_8 = 0x8a0;
          goto LAB_140cd653e;
        }
        if (iVar5 == 1) {
LAB_140cd6500:
          iStackX_8 = 0x9dc;
          goto LAB_140cd653e;
        }
        if (iVar5 != 2) {
          if (iVar5 == 3) {
            iStackX_8 = 0xc53;
          }
          goto LAB_140cd653e;
        }
      }
      iStackX_8 = 0xb17;
      goto LAB_140cd653e;
    }
    if (iVar5 != 0) {
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          if (iVar5 != 3) goto LAB_140cd653e;
          goto LAB_140cd6500;
        }
        goto LAB_140cd651e;
      }
LAB_140cd652b:
      iStackX_8 = 0x765;
      goto LAB_140cd653e;
    }
  }
  iStackX_8 = 0x629;
LAB_140cd653e:
  iVar6 = (((*(short *)(lVar2 + 0x130) * iStackX_8) / 100) * (int)*(short *)(lVar2 + 300)) / 100;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  return iVar6;
}

