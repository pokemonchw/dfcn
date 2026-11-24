/* Actual Ghidra output; current installed Steam 53.17, PE:6aea05a1:02734000; VA 0x140ac7c40..0x140ac7d6b. Function names assigned by analysis. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void crop_seasons(short param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  *param_2 = 0;
  if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(longlong)param_1 < (ulonglong)(_plant_raws_end - _plant_raws_begin >> 3)) {
    lVar1 = *(longlong *)(_plant_raws_begin + (longlong)param_1 * 8);
    if ((*(int *)(lVar1 + 0x48) < 1) || ((**(byte **)(lVar1 + 0x40) & 1) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)param_2 = 1;
      goto LAB_140ac7cab;
    }
  }
  if (param_1 < 0) {
    return;
  }
LAB_140ac7cab:
  if ((ulonglong)(longlong)param_1 < (ulonglong)(_plant_raws_end - _plant_raws_begin >> 3)) {
    lVar1 = *(longlong *)(_plant_raws_begin + (longlong)param_1 * 8);
    if ((*(int *)(lVar1 + 0x48) < 1) || ((**(byte **)(lVar1 + 0x40) & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)((longlong)param_2 + 1) = 1;
    }
  }
  else if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(longlong)param_1 < (ulonglong)(_plant_raws_end - _plant_raws_begin >> 3)) {
    lVar1 = *(longlong *)(_plant_raws_begin + (longlong)param_1 * 8);
    if ((*(int *)(lVar1 + 0x48) < 1) || ((**(byte **)(lVar1 + 0x40) & 4) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)((longlong)param_2 + 2) = 1;
    }
  }
  else if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(longlong)param_1 < (ulonglong)(_plant_raws_end - _plant_raws_begin >> 3)) {
    lVar1 = *(longlong *)(_plant_raws_begin + (longlong)param_1 * 8);
    if ((*(int *)(lVar1 + 0x48) < 1) || ((**(byte **)(lVar1 + 0x40) & 8) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)((longlong)param_2 + 3) = 1;
    }
  }
  return;
}

