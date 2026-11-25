
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14104edd0(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  
  piVar9 = (int *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  func_0x000141554566(piVar9,0,0x21c);
  *(undefined4 *)(param_2 + 0x46) = 0;
  iVar2 = *(int *)(param_1 + 0x1fd0) + *(int *)(param_1 + 0x1fbc) + *(int *)(param_1 + 0x1fa8) >> 1;
  *(int *)(param_2 + 0x46) = iVar2;
  iVar2 = (*(int *)(param_1 + 0x1fd4) + *(int *)(param_1 + 0x1fc0) + *(int *)(param_1 + 0x1fac) >> 2
          ) + iVar2;
  *(int *)(param_2 + 0x46) = iVar2;
  iVar2 = (*(int *)(param_1 + 0x1fd8) + *(int *)(param_1 + 0x1fc4) + *(int *)(param_1 + 0x1fb0) >> 3
          ) + iVar2;
  *(int *)(param_2 + 0x46) = iVar2;
  iVar2 = (*(int *)(param_1 + 0x1fdc) + *(int *)(param_1 + 0x1fc8) + *(int *)(param_1 + 0x1fb4) >> 4
          ) + iVar2;
  *(int *)(param_2 + 0x46) = iVar2;
  iVar2 = (*(int *)(param_1 + 0x1fe0) + *(int *)(param_1 + 0x1fcc) + *(int *)(param_1 + 0x1fb8) >> 5
          ) + iVar2;
  *(int *)(param_2 + 0x46) = iVar2;
  iVar2 = *(int *)(param_1 + 0x340) / 1000 - iVar2;
  *(int *)(param_2 + 1) = iVar2;
  *(int *)((longlong)param_2 + 0x234) = -iVar2;
  if (-iVar2 < 0) {
    *(undefined4 *)((longlong)param_2 + 0x234) = 0;
  }
  if (_DAT_1423b3090 < iVar2) {
    *(int *)(param_2 + 1) = _DAT_1423b3090;
    iVar2 = _DAT_1423b3090;
  }
  iVar13 = (int)*(short *)(param_1 + 0x14c);
  iVar2 = iVar2 - iVar13;
  *(int *)((longlong)param_2 + 0xc) = iVar13;
  *(int *)(param_2 + 2) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_2 + 2) = 0;
    iVar2 = 0;
  }
  iVar10 = *(int *)(param_1 + 0x2008);
  iVar12 = (*(int *)(param_1 + 0x2010) + *(int *)(param_1 + 0x2004) + iVar10 +
           *(int *)(param_1 + 0x200c)) * 100;
  if ((0 < iVar12) && (iVar2 != 0)) {
    iVar10 = (iVar10 + *(int *)(param_1 + 0x200c) + iVar10 * 2) * 0x19 +
             *(int *)(param_1 + 0x2004) * 0x6e;
    if (iVar12 < iVar10) {
      iVar10 = iVar12;
    }
    iVar3 = (iVar2 * iVar10) / iVar12;
    *(int *)(param_2 + 2) = iVar3;
    *(int *)(param_2 + 0x47) = (iVar10 * 100) / iVar12;
    *(int *)((longlong)param_2 + 0x23c) = iVar2 - iVar3;
  }
  if (_DAT_1423b3090 <= iVar13) {
    *(undefined4 *)((longlong)param_2 + 0x234) = 0;
    *(undefined4 *)((longlong)param_2 + 0x23c) = 0;
  }
  iVar13 = *(int *)(param_1 + 0x1fa4) / 100 + 3;
  *piVar9 = iVar13;
  iVar10 = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)(param_2 + 5) = iVar10;
  iVar12 = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)((longlong)param_2 + 0x34) = iVar12;
  iVar3 = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)((longlong)param_2 + 0x2c) = iVar3;
  iVar4 = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)(param_2 + 6) = iVar4;
  iVar5 = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)(param_2 + 7) = iVar5;
  iVar6 = *(int *)(param_1 + 0x1fa4) / 800 + 1;
  *(int *)(param_2 + 3) = iVar6;
  iVar7 = *(int *)(param_1 + 0x1fa4) / 800 + 1;
  *(int *)((longlong)param_2 + 0x1c) = iVar7;
  iVar8 = *(int *)(param_1 + 0x1fa4) / 800 + 1;
  *(int *)(param_2 + 4) = iVar8;
  iVar2 = *(int *)(param_1 + 0x1fa4) / 800 + 1;
  *(int *)((longlong)param_2 + 0x24) = iVar2;
  *(int *)((longlong)param_2 + 0x3c) = *(int *)(param_1 + 0x1fa4) / 500;
  *(int *)(param_2 + 8) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0x44) = *(int *)(param_1 + 0x1fa4) / 0x5dc;
  *(int *)(param_2 + 9) = *(int *)(param_1 + 0x1fa4) / 500;
  *(int *)((longlong)param_2 + 0x4c) = *(int *)(param_1 + 0x1fa4) / 0x5dc;
  *(int *)(param_2 + 10) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0x54) = *(int *)(param_1 + 0x1fa4) / 200 + 1;
  *(int *)((longlong)param_2 + 0x54) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)(param_2 + 0xb) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)((longlong)param_2 + 0x5c) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)((longlong)param_2 + 100) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)(param_2 + 0xd) = *(int *)(param_1 + 0x1fa4) / 0x4b0 + 1;
  *(int *)((longlong)param_2 + 0x6c) = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)(param_2 + 0xe) = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)((longlong)param_2 + 0x74) = *(int *)(param_1 + 0x1fa4) / 600 + 1;
  *(int *)(param_2 + 0xf) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)((longlong)param_2 + 0x7c) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)(param_2 + 0x10) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)((longlong)param_2 + 0x84) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)(param_2 + 0x11) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)((longlong)param_2 + 0x20c) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x42) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0x8c) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)(param_2 + 0x12) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)((longlong)param_2 + 0x94) = *(int *)(param_1 + 0x1fa4) / 0x578 + 1;
  *(int *)(param_2 + 0x15) = *(int *)(param_1 + 0x1fa4) / 800;
  *(int *)((longlong)param_2 + 0xac) = *(int *)(param_1 + 0x1fa4) / 800;
  *(int *)(param_2 + 0x16) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xb4) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x17) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xbc) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x18) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x3a) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1f) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xfc) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xc4) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x19) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xcc) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1a) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xd4) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x13) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0x9c) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x14) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1b) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0x104) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xdc) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1c) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xe4) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1d) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xec) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x1e) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)((longlong)param_2 + 0xf4) = *(int *)(param_1 + 0x1fa4) / 3000;
  *(int *)(param_2 + 0x21) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)((longlong)param_2 + 0x10c) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)(param_2 + 0x22) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)((longlong)param_2 + 0x114) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)(param_2 + 0x23) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)(param_2 + 0x25) = *(int *)(param_1 + 0x1fa4) / 2000 + 1;
  *(int *)((longlong)param_2 + 300) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)(param_2 + 0x26) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)((longlong)param_2 + 0x134) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  *(int *)(param_2 + 0x27) = *(int *)(param_1 + 0x1fa4) / 0x9c4;
  if (4 < iVar13) {
    iVar2 = *(int *)((longlong)param_2 + 0x24);
    *piVar9 = 5;
  }
  if (2 < iVar10) {
    *(undefined4 *)(param_2 + 5) = 3;
  }
  if (2 < iVar12) {
    *(undefined4 *)((longlong)param_2 + 0x34) = 3;
  }
  if (2 < iVar3) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 3;
  }
  if (2 < iVar4) {
    *(undefined4 *)(param_2 + 6) = 3;
  }
  if (2 < iVar5) {
    *(undefined4 *)(param_2 + 7) = 3;
  }
  if (2 < iVar6) {
    *(undefined4 *)(param_2 + 3) = 3;
  }
  if (2 < iVar7) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 3;
  }
  if (2 < iVar8) {
    *(undefined4 *)(param_2 + 4) = 3;
  }
  if (2 < iVar2) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 3;
  }
  if (1 < *(int *)((longlong)param_2 + 0x3c)) {
    *(undefined4 *)((longlong)param_2 + 0x3c) = 2;
  }
  if (1 < *(int *)(param_2 + 8)) {
    *(undefined4 *)(param_2 + 8) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0x44)) {
    *(undefined4 *)((longlong)param_2 + 0x44) = 2;
  }
  if (1 < *(int *)(param_2 + 9)) {
    *(undefined4 *)(param_2 + 9) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0x4c)) {
    *(undefined4 *)((longlong)param_2 + 0x4c) = 2;
  }
  if (1 < *(int *)(param_2 + 10)) {
    *(undefined4 *)(param_2 + 10) = 2;
  }
  if (2 < *(int *)((longlong)param_2 + 0x54)) {
    *(undefined4 *)((longlong)param_2 + 0x54) = 3;
  }
  if (2 < *(int *)(param_2 + 0xb)) {
    *(undefined4 *)(param_2 + 0xb) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x5c)) {
    *(undefined4 *)((longlong)param_2 + 0x5c) = 3;
  }
  if (2 < *(int *)(param_2 + 0xc)) {
    *(undefined4 *)(param_2 + 0xc) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 100)) {
    *(undefined4 *)((longlong)param_2 + 100) = 3;
  }
  if (2 < *(int *)(param_2 + 0xd)) {
    *(undefined4 *)(param_2 + 0xd) = 3;
  }
  if (1 < *(int *)((longlong)param_2 + 0x6c)) {
    *(undefined4 *)((longlong)param_2 + 0x6c) = 2;
  }
  if (1 < *(int *)(param_2 + 0xe)) {
    *(undefined4 *)(param_2 + 0xe) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0x74)) {
    *(undefined4 *)((longlong)param_2 + 0x74) = 2;
  }
  if (2 < *(int *)(param_2 + 0xf)) {
    *(undefined4 *)(param_2 + 0xf) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x7c)) {
    *(undefined4 *)((longlong)param_2 + 0x7c) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x20c)) {
    *(undefined4 *)((longlong)param_2 + 0x20c) = 3;
  }
  if (2 < *(int *)(param_2 + 0x42)) {
    *(undefined4 *)(param_2 + 0x42) = 3;
  }
  if (2 < *(int *)(param_2 + 0x13)) {
    *(undefined4 *)(param_2 + 0x13) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x9c)) {
    *(undefined4 *)((longlong)param_2 + 0x9c) = 3;
  }
  if (2 < *(int *)(param_2 + 0x14)) {
    *(undefined4 *)(param_2 + 0x14) = 3;
  }
  if (2 < *(int *)(param_2 + 0x10)) {
    *(undefined4 *)(param_2 + 0x10) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x84)) {
    *(undefined4 *)((longlong)param_2 + 0x84) = 3;
  }
  if (2 < *(int *)(param_2 + 0x11)) {
    *(undefined4 *)(param_2 + 0x11) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x8c)) {
    *(undefined4 *)((longlong)param_2 + 0x8c) = 3;
  }
  if (2 < *(int *)(param_2 + 0x12)) {
    *(undefined4 *)(param_2 + 0x12) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x94)) {
    *(undefined4 *)((longlong)param_2 + 0x94) = 3;
  }
  if (1 < *(int *)(param_2 + 0x15)) {
    *(undefined4 *)(param_2 + 0x15) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0xac)) {
    *(undefined4 *)((longlong)param_2 + 0xac) = 2;
  }
  if (1 < *(int *)(param_2 + 0x16)) {
    *(undefined4 *)(param_2 + 0x16) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0xb4)) {
    *(undefined4 *)((longlong)param_2 + 0xb4) = 2;
  }
  if (2 < *(int *)(param_2 + 0x17)) {
    *(undefined4 *)(param_2 + 0x17) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xbc)) {
    *(undefined4 *)((longlong)param_2 + 0xbc) = 3;
  }
  if (2 < *(int *)(param_2 + 0x18)) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  if (2 < *(int *)(param_2 + 0x3a)) {
    *(undefined4 *)(param_2 + 0x3a) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1f)) {
    *(undefined4 *)(param_2 + 0x1f) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xfc)) {
    *(undefined4 *)((longlong)param_2 + 0xfc) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xc4)) {
    *(undefined4 *)((longlong)param_2 + 0xc4) = 3;
  }
  if (2 < *(int *)(param_2 + 0x19)) {
    *(undefined4 *)(param_2 + 0x19) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xcc)) {
    *(undefined4 *)((longlong)param_2 + 0xcc) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1a)) {
    *(undefined4 *)(param_2 + 0x1a) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xd4)) {
    *(undefined4 *)((longlong)param_2 + 0xd4) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1b)) {
    *(undefined4 *)(param_2 + 0x1b) = 3;
  }
  if (2 < *(int *)(param_2 + 0x20)) {
    *(undefined4 *)(param_2 + 0x20) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0x104)) {
    *(undefined4 *)((longlong)param_2 + 0x104) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xdc)) {
    *(undefined4 *)((longlong)param_2 + 0xdc) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1c)) {
    *(undefined4 *)(param_2 + 0x1c) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xe4)) {
    *(undefined4 *)((longlong)param_2 + 0xe4) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1d)) {
    *(undefined4 *)(param_2 + 0x1d) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xec)) {
    *(undefined4 *)((longlong)param_2 + 0xec) = 3;
  }
  if (2 < *(int *)(param_2 + 0x1e)) {
    *(undefined4 *)(param_2 + 0x1e) = 3;
  }
  if (2 < *(int *)((longlong)param_2 + 0xf4)) {
    *(undefined4 *)((longlong)param_2 + 0xf4) = 3;
  }
  if (1 < *(int *)(param_2 + 0x21)) {
    *(undefined4 *)(param_2 + 0x21) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0x10c)) {
    *(undefined4 *)((longlong)param_2 + 0x10c) = 2;
  }
  if (1 < *(int *)(param_2 + 0x22)) {
    *(undefined4 *)(param_2 + 0x22) = 2;
  }
  if (1 < *(int *)((longlong)param_2 + 0x114)) {
    *(undefined4 *)((longlong)param_2 + 0x114) = 2;
  }
  if (1 < *(int *)(param_2 + 0x23)) {
    *(undefined4 *)(param_2 + 0x23) = 2;
  }
  if (2 < *(int *)(param_2 + 0x25)) {
    *(undefined4 *)(param_2 + 0x25) = 3;
  }
  if (1 < *(int *)((longlong)param_2 + 300)) {
    *(undefined4 *)((longlong)param_2 + 300) = 3;
  }
  if (1 < *(int *)(param_2 + 0x26)) {
    *(undefined4 *)(param_2 + 0x26) = 3;
  }
  if (1 < *(int *)((longlong)param_2 + 0x134)) {
    *(undefined4 *)((longlong)param_2 + 0x134) = 3;
  }
  if (1 < *(int *)(param_2 + 0x27)) {
    *(undefined4 *)(param_2 + 0x27) = 3;
  }
  lVar11 = 0;
  iVar2 = -0x4a;
  do {
    switch(iVar2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
LAB_14104fbd7:
      *piVar9 = 0;
      break;
    default:
      if (*(char *)(*(longlong *)(_DAT_1423bc668 + 8) + 0x3b28 + lVar11) == '\0') {
        switch(iVar2) {
        case 0:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
          break;
        default:
          goto LAB_14104fbd7;
        }
      }
    }
    iVar2 = iVar2 + 1;
    lVar11 = lVar11 + 1;
    piVar9 = piVar9 + 1;
  } while (lVar11 < 0x87);
  *param_2 = 0;
  iVar2 = (int)*(short *)(param_1 + 0x14c);
  if (iVar2 < _DAT_1423bc594) {
    if (iVar2 < _DAT_1423bc590) {
      if (iVar2 < _DAT_1423bc58c) {
        if (iVar2 < _DAT_1423bc588) {
          if (_DAT_1423bc584 <= iVar2) {
            *(undefined2 *)((longlong)param_2 + 2) = 1;
          }
        }
        else {
          *(undefined2 *)((longlong)param_2 + 2) = 2;
        }
      }
      else {
        *(undefined2 *)((longlong)param_2 + 2) = 3;
      }
    }
    else {
      *(undefined2 *)((longlong)param_2 + 2) = 4;
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 2) = 5;
  }
  iVar2 = *(int *)(param_1 + 0x368);
  if (iVar2 < _DAT_1423bc5bc) {
    if (iVar2 < _DAT_1423bc5b8) {
      if (iVar2 < _DAT_1423bc5b4) {
        if (iVar2 < _DAT_1423bc5b0) {
          if (_DAT_1423bc5ac <= iVar2) {
            *(undefined2 *)((longlong)param_2 + 4) = 1;
          }
        }
        else {
          *(undefined2 *)((longlong)param_2 + 4) = 2;
        }
      }
      else {
        *(undefined2 *)((longlong)param_2 + 4) = 3;
      }
    }
    else {
      *(undefined2 *)((longlong)param_2 + 4) = 4;
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 4) = 5;
  }
  iVar2 = *(int *)(param_1 + 0x340);
  if (iVar2 < _DAT_1423bc5a8) {
    if (iVar2 < _DAT_1423bc5a4) {
      if (iVar2 < _DAT_1423bc5a0) {
        if (iVar2 < _DAT_1423bc59c) {
          if (_DAT_1423bc598 <= iVar2) {
            *(undefined2 *)((longlong)param_2 + 6) = 1;
          }
        }
        else {
          *(undefined2 *)((longlong)param_2 + 6) = 2;
        }
      }
      else {
        *(undefined2 *)((longlong)param_2 + 6) = 3;
      }
    }
    else {
      *(undefined2 *)((longlong)param_2 + 6) = 4;
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 6) = 5;
  }
  sVar1 = *(short *)((longlong)param_2 + 2);
  if (sVar1 < 5) {
    if (3 < sVar1) goto LAB_14104fd0f;
    if (2 < sVar1) goto LAB_14104fd26;
    if (sVar1 < 2) goto LAB_14104fd54;
  }
  else {
    if ((4 < *(short *)((longlong)param_2 + 6)) || (4 < *(short *)((longlong)param_2 + 4))) {
      *(undefined2 *)param_2 = 5;
      return;
    }
LAB_14104fd0f:
    if ((3 < *(short *)((longlong)param_2 + 6)) || (3 < *(short *)((longlong)param_2 + 4))) {
      *(undefined2 *)param_2 = 4;
      return;
    }
LAB_14104fd26:
    if ((2 < *(short *)((longlong)param_2 + 6)) || (2 < *(short *)((longlong)param_2 + 4))) {
      *(undefined2 *)param_2 = 3;
      return;
    }
  }
  if ((1 < *(short *)((longlong)param_2 + 6)) || (1 < *(short *)((longlong)param_2 + 4))) {
    *(undefined2 *)param_2 = 2;
    return;
  }
LAB_14104fd54:
  if ((0 < *(short *)((longlong)param_2 + 2)) &&
     ((0 < *(short *)((longlong)param_2 + 6) || (0 < *(short *)((longlong)param_2 + 4))))) {
    *(undefined2 *)param_2 = 1;
  }
  return;
}

