/* Actual Ghidra output, research name; VA 0x140d801d0..0x140d841ec. */

/* WARNING: Removing unreachable block (ram,0x000140d80b5c) */
/* WARNING: Removing unreachable block (ram,0x000140d80a5b) */
/* WARNING: Removing unreachable block (ram,0x000140d817ee) */
/* WARNING: Removing unreachable block (ram,0x000140d8159e) */
/* WARNING: Removing unreachable block (ram,0x000140d83ebe) */
/* WARNING: Removing unreachable block (ram,0x000140d81bee) */
/* WARNING: Removing unreachable block (ram,0x000140d80f5b) */
/* WARNING: Removing unreachable block (ram,0x000140d8107e) */
/* WARNING: Removing unreachable block (ram,0x000140d8118e) */
/* WARNING: Removing unreachable block (ram,0x000140d8054e) */
/* WARNING: Removing unreachable block (ram,0x000140d80c4b) */
/* WARNING: Removing unreachable block (ram,0x000140d83fee) */
/* WARNING: Removing unreachable block (ram,0x000140d816ce) */
/* WARNING: Removing unreachable block (ram,0x000140d8066b) */
/* WARNING: Removing unreachable block (ram,0x000140d840fe) */
/* WARNING: Removing unreachable block (ram,0x000140d8077e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void builtin_materials(longlong param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_978 [32];
  undefined2 auStack_958 [4];
  longlong lStack_950;
  int aiStack_948 [2];
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  ulonglong auStack_898 [64];
  undefined1 auStack_698 [32];
  undefined1 auStack_678 [32];
  undefined1 auStack_658 [32];
  undefined1 auStack_638 [32];
  undefined1 auStack_618 [32];
  undefined1 auStack_5f8 [32];
  undefined1 auStack_5d8 [32];
  undefined1 auStack_5b8 [32];
  undefined1 auStack_598 [32];
  undefined1 auStack_578 [32];
  undefined1 auStack_558 [32];
  undefined1 auStack_538 [32];
  undefined1 auStack_518 [32];
  undefined1 auStack_4f8 [32];
  undefined1 auStack_4d8 [32];
  undefined1 auStack_4b8 [32];
  undefined1 auStack_498 [32];
  undefined1 auStack_478 [32];
  undefined1 auStack_458 [32];
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [32];
  undefined1 auStack_3f8 [32];
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [32];
  undefined1 auStack_398 [32];
  undefined1 auStack_378 [32];
  undefined1 auStack_358 [32];
  undefined1 auStack_338 [32];
  undefined1 auStack_318 [32];
  undefined1 auStack_2f8 [32];
  undefined1 auStack_2d8 [32];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [32];
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [32];
  undefined1 auStack_1f8 [32];
  undefined1 auStack_1d8 [32];
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418be040 ^ (ulonglong)auStack_978;
  lStack_950 = param_1;
  FUN_140d80160();
  uVar13 = 0;
  uVar11 = uVar13;
LAB_140d8021e:
  iVar12 = 0;
LAB_140d80240:
  while( true ) {
    uVar14 = (uint)uVar11;
    if ((int)uVar14 < 0x1a4) break;
LAB_140d841a0:
    uVar11 = (ulonglong)(uVar14 + 1);
    uVar13 = uVar13 + 1;
    if (0x292 < (int)(uVar14 + 1)) {
      FUN_1415530b0(uStack_38 ^ (ulonglong)auStack_978);
      return;
    }
  }
  if (uVar14 == 0x1a3) {
    uStack_8a0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8a0);
    FUN_140070f00(lVar5,&UNK_141735fd8,7);
    *(undefined4 *)(lVar5 + 0x90) = 2000;
    *(undefined4 *)(lVar5 + 0x94) = 2000;
    plVar10 = (longlong *)(lVar5 + 0xb8);
    FUN_140070f00(plVar10,&UNK_141736078,0x1e);
    if ((longlong *)(lVar5 + 0x178) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
    }
    plVar10 = (longlong *)(lVar5 + 0x118);
    FUN_140070f00(plVar10,&UNK_141736098,0x1b);
    if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
    }
    plVar10 = (longlong *)(lVar5 + 0x138);
    FUN_140070f00(plVar10,&UNK_141736030,0x1a);
    if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
    }
    plVar10 = (longlong *)(lVar5 + 0x158);
    FUN_140070f00(plVar10,&UNK_141736050,0x26);
    if ((longlong *)(lVar5 + 0x218) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
    }
    plVar10 = (longlong *)(lVar5 + 0xd8);
    FUN_140070f00(plVar10,&UNK_1417360d8,0x17);
    if ((longlong *)(lVar5 + 0x198) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xf0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x198,plVar10,*(undefined8 *)(lVar5 + 0xe8));
    }
    plVar10 = (longlong *)(lVar5 + 0xf8);
    FUN_140070f00(plVar10,&UNK_1417360f0,0x1f);
    if ((longlong *)(lVar5 + 0x1b8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x110)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1b8,plVar10,*(undefined8 *)(lVar5 + 0x108));
    }
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined4 *)(lVar5 + 0x4c2) = 6;
    *(undefined4 *)(lVar5 + 0x4c6) = 6;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    auStack_898[0x2d] = 0;
    auStack_898[0x2e] = 5;
    auStack_898[0x2f] = 0xf;
    auStack_898[0x2c] = 0x4e574f5242;
    uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
    puVar9 = _DAT_142519568;
    if (uVar11 != 0) goto LAB_140d83eb0;
    goto LAB_140d83ef5;
  }
  if (0x13 < uVar14) goto LAB_140d841a0;
                    /* WARNING: Switch is manually overridden */
  switch(uVar14) {
  case 0:
    goto override_jmp_140d8026a_case_0;
  case 1:
    uStack_938 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_938);
    FUN_140070f00(lVar5,&DAT_1416be1a4,5);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    *(undefined4 *)(lVar5 + 0x94) = 0x4b0;
    plVar10 = (longlong *)(lVar5 + 0xb8);
    FUN_140070f00(plVar10,&UNK_141735d98,5);
    if ((longlong *)(lVar5 + 0x178) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
    }
    plVar10 = (longlong *)(lVar5 + 0x118);
    FUN_140070f00(plVar10,&UNK_141735d78,0xc);
    if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
    }
    plVar10 = (longlong *)(lVar5 + 0x138);
    FUN_140070f00(plVar10,&UNK_141735d88,0xb);
    if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
    }
    plVar10 = (longlong *)(lVar5 + 0x158);
    FUN_140070f00(plVar10,&UNK_141736648,0xd);
    if ((longlong *)(lVar5 + 0x218) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
    }
    *(undefined4 *)(lVar5 + 0x248) = 10000;
    *(undefined4 *)(lVar5 + 0x260) = 10000;
    *(undefined8 *)(lVar5 + 0x278) = 0;
    *(undefined4 *)(lVar5 + 0x250) = 10000;
    *(undefined4 *)(lVar5 + 0x268) = 10000;
    *(undefined4 *)(lVar5 + 0x280) = 0;
    *(undefined4 *)(lVar5 + 0x24c) = 10000;
    *(undefined4 *)(lVar5 + 0x264) = 10000;
    *(undefined4 *)(lVar5 + 0x244) = 10000;
    *(undefined4 *)(lVar5 + 0x25c) = 10000;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    *(undefined4 *)(lVar5 + 0x240) = 10000;
    *(undefined4 *)(lVar5 + 600) = 10000;
    *(undefined4 *)(lVar5 + 0x23c) = 10000;
    *(undefined4 *)(lVar5 + 0x254) = 10000;
    *(undefined4 *)(lVar5 + 0x26c) = 0;
    *(undefined4 *)(lVar5 + 0x288) = 2;
    if (7 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 7);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined4 *)(lVar5 + 0x80) = 0x2af803e8;
    *(undefined4 *)(lVar5 + 0x4c2) = 6;
    *(undefined4 *)(lVar5 + 0x4c6) = 6;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    auStack_898[5] = 0;
    auStack_898[6] = 5;
    auStack_898[7] = 0xf;
    auStack_898[4] = 0x5245424d41;
    uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
    puVar9 = _DAT_142519568;
    if (uVar11 != 0) goto LAB_140d80a50;
    goto LAB_140d80a92;
  case 2:
    uStack_930 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_930);
    FUN_140070f00(lVar5,&UNK_1416be19c,5);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    plVar10 = (longlong *)(lVar5 + 0xb8);
    FUN_140070f00(plVar10,&UNK_141736658,5);
    if ((longlong *)(lVar5 + 0x178) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
    }
    plVar10 = (longlong *)(lVar5 + 0x118);
    FUN_140070f00(plVar10,&UNK_141736628,0xc);
    if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
    }
    plVar10 = (longlong *)(lVar5 + 0x138);
    FUN_140070f00(plVar10,&UNK_141736638,0xb);
    if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
    }
    plVar10 = (longlong *)(lVar5 + 0x158);
    FUN_140070f00(plVar10,&UNK_141736688,0xd);
    if ((longlong *)(lVar5 + 0x218) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
    }
    *(undefined4 *)(lVar5 + 0x248) = 10000;
    *(undefined4 *)(lVar5 + 0x260) = 10000;
    *(undefined8 *)(lVar5 + 0x278) = 0;
    *(undefined4 *)(lVar5 + 0x250) = 10000;
    *(undefined4 *)(lVar5 + 0x268) = 10000;
    *(undefined4 *)(lVar5 + 0x280) = 0;
    *(undefined4 *)(lVar5 + 0x24c) = 10000;
    *(undefined4 *)(lVar5 + 0x264) = 10000;
    *(undefined4 *)(lVar5 + 0x244) = 10000;
    *(undefined4 *)(lVar5 + 0x25c) = 10000;
    *(undefined8 *)(lVar5 + 0x270) = 0;
    *(undefined4 *)(lVar5 + 0x240) = 10000;
    *(undefined4 *)(lVar5 + 600) = 10000;
    *(undefined4 *)(lVar5 + 0x23c) = 10000;
    *(undefined4 *)(lVar5 + 0x254) = 10000;
    *(undefined4 *)(lVar5 + 0x26c) = 0;
    *(undefined4 *)(lVar5 + 0x288) = 2;
    if (7 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 7);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined4 *)(lVar5 + 0x80) = 0x296803e8;
    *(undefined4 *)(lVar5 + 0x4c2) = 0x10007;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    auStack_898[0x11] = 0;
    auStack_898[0x12] = 5;
    auStack_898[0x13] = 0xf;
    auStack_898[0x10] = 0x4554494857;
    uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
    puVar9 = _DAT_142519568;
    if (uVar11 != 0) goto LAB_140d80f50;
    goto LAB_140d80f92;
  case 3:
    uStack_928 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_928);
    FUN_140070f00(lVar5,&UNK_1416be1c0,0xb);
    *(undefined4 *)(lVar5 + 0x90) = 0xa28;
    *(undefined4 *)(lVar5 + 0x94) = 0x8c0;
    plVar10 = (longlong *)(lVar5 + 0xb8);
    FUN_140070f00(plVar10,&UNK_141736660,0xb);
    if ((longlong *)(lVar5 + 0x178) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
    }
    plVar10 = (longlong *)(lVar5 + 0x118);
    FUN_140070f00(plVar10,&UNK_141736670,0x12);
    if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
    }
    plVar10 = (longlong *)(lVar5 + 0x138);
    FUN_140070f00(plVar10,&UNK_1417366d0,0x11);
    if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
    }
    plVar10 = (longlong *)(lVar5 + 0x158);
    FUN_140070f00(plVar10,&UNK_1417366e8,0x13);
    if ((longlong *)(lVar5 + 0x218) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
    }
    plVar10 = (longlong *)(lVar5 + 0xd8);
    FUN_140070f00(plVar10,&UNK_1417366a0,0x12);
    if ((longlong *)(lVar5 + 0x198) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xf0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x198,plVar10,*(undefined8 *)(lVar5 + 0xe8));
    }
    plVar10 = (longlong *)(lVar5 + 0xf8);
    FUN_140070f00(plVar10,&UNK_1417366b8,0x13);
    if ((longlong *)(lVar5 + 0x1b8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x110)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1b8,plVar10,*(undefined8 *)(lVar5 + 0x108));
    }
    *(undefined4 *)(lVar5 + 0x248) = 1000000;
    *(undefined4 *)(lVar5 + 0x260) = 1000000;
    *(undefined4 *)(lVar5 + 0x278) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x250) = 1000000;
    *(undefined4 *)(lVar5 + 0x268) = 1000000;
    *(undefined4 *)(lVar5 + 0x280) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x24c) = 33000;
    *(undefined4 *)(lVar5 + 0x264) = 33000;
    *(undefined4 *)(lVar5 + 0x27c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x244) = 33000;
    *(undefined4 *)(lVar5 + 0x25c) = 33000;
    *(undefined4 *)(lVar5 + 0x274) = 0x71;
    *(undefined4 *)(lVar5 + 0x240) = 33000;
    *(undefined4 *)(lVar5 + 600) = 33000;
    *(undefined4 *)(lVar5 + 0x270) = 0x71;
    *(undefined4 *)(lVar5 + 0x23c) = 33000;
    *(undefined4 *)(lVar5 + 0x254) = 33000;
    *(undefined4 *)(lVar5 + 0x26c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x284) = 15000;
    *(undefined4 *)(lVar5 + 0x288) = 2;
    if (1 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 1);
      *pbVar1 = *pbVar1 | 8;
    }
    if (6 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 6);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined2 *)(lVar5 + 0x80) = 700;
    *(undefined4 *)(lVar5 + 0x88) = 0x3e803520;
    *(undefined4 *)(lVar5 + 0x4c2) = 2;
    *(undefined4 *)(lVar5 + 0x4c6) = 2;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    auStack_898[0x1e] = 10;
    auStack_898[0x1f] = 0xf;
    auStack_898[0x1c] = 0x4552475f4b524144;
    auStack_898[0x1d] = 0x4e45;
    uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
    puVar9 = _DAT_142519568;
    if (uVar11 != 0) goto LAB_140d81590;
    goto LAB_140d815d5;
  case 4:
    uStack_920 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_920);
    FUN_140070f00(lVar5,&UNK_1416be1b0,0xb);
    *(undefined4 *)(lVar5 + 0x90) = 0xa28;
    *(undefined4 *)(lVar5 + 0x94) = 0x8c0;
    plVar10 = (longlong *)(lVar5 + 0xb8);
    FUN_140070f00(plVar10,&UNK_141736740,0xb);
    if ((longlong *)(lVar5 + 0x178) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
    }
    plVar10 = (longlong *)(lVar5 + 0x118);
    FUN_140070f00(plVar10,&UNK_141736700,0x12);
    if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
    }
    plVar10 = (longlong *)(lVar5 + 0x138);
    FUN_140070f00(plVar10,&UNK_141736718,0x11);
    if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
    }
    plVar10 = (longlong *)(lVar5 + 0x158);
    FUN_140070f00(plVar10,&UNK_141736778,0x13);
    if ((longlong *)(lVar5 + 0x218) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
    }
    plVar10 = (longlong *)(lVar5 + 0xd8);
    FUN_140070f00(plVar10,&UNK_141736790,0x12);
    if ((longlong *)(lVar5 + 0x198) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0xf0)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x198,plVar10,*(undefined8 *)(lVar5 + 0xe8));
    }
    plVar10 = (longlong *)(lVar5 + 0xf8);
    FUN_140070f00(plVar10,&UNK_141736750,0x13);
    if ((longlong *)(lVar5 + 0x1b8) != plVar10) {
      if (0xf < *(ulonglong *)(lVar5 + 0x110)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070f00(lVar5 + 0x1b8,plVar10,*(undefined8 *)(lVar5 + 0x108));
    }
    *(undefined4 *)(lVar5 + 0x248) = 1000000;
    *(undefined4 *)(lVar5 + 0x260) = 1000000;
    *(undefined4 *)(lVar5 + 0x278) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x250) = 1000000;
    *(undefined4 *)(lVar5 + 0x268) = 1000000;
    *(undefined4 *)(lVar5 + 0x280) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x24c) = 33000;
    *(undefined4 *)(lVar5 + 0x264) = 33000;
    *(undefined4 *)(lVar5 + 0x27c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x244) = 33000;
    *(undefined4 *)(lVar5 + 0x25c) = 33000;
    *(undefined4 *)(lVar5 + 0x274) = 0x71;
    *(undefined4 *)(lVar5 + 0x240) = 33000;
    *(undefined4 *)(lVar5 + 600) = 33000;
    *(undefined4 *)(lVar5 + 0x270) = 0x71;
    *(undefined4 *)(lVar5 + 0x23c) = 33000;
    *(undefined4 *)(lVar5 + 0x254) = 33000;
    *(undefined4 *)(lVar5 + 0x26c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x284) = 15000;
    *(undefined4 *)(lVar5 + 0x288) = 5;
    if (1 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 1);
      *pbVar1 = *pbVar1 | 8;
    }
    if (6 < *(int *)(lVar5 + 0x298)) {
      pbVar1 = (byte *)(*(longlong *)(lVar5 + 0x290) + 6);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined2 *)(lVar5 + 0x80) = 700;
    *(undefined4 *)(lVar5 + 0x88) = 0x3e803520;
    *(undefined4 *)(lVar5 + 0x4c2) = 3;
    *(undefined4 *)(lVar5 + 0x4c6) = 3;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    auStack_898[0x29] = 0;
    auStack_898[0x2a] = 5;
    auStack_898[0x2b] = 0xf;
    auStack_898[0x28] = 0x5241454c43;
    uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
    puVar9 = _DAT_142519568;
    if (uVar11 != 0) goto LAB_140d81be0;
    goto LAB_140d81c25;
  case 5:
    uStack_918 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_918);
    supplier_140070bb0(lVar5,&UNK_1416be1d8);
    *(undefined4 *)(lVar5 + 0x90) = 0xa28;
    *(undefined4 *)(lVar5 + 0x94) = 0x8c0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736768);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1417367d8);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1417367f0);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_1417367a8);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_1417367c0);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141736820);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x248) = 1000000;
    *(undefined4 *)(lVar5 + 0x260) = 1000000;
    *(undefined4 *)(lVar5 + 0x278) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x250) = 1000000;
    *(undefined4 *)(lVar5 + 0x268) = 1000000;
    *(undefined4 *)(lVar5 + 0x280) = 0x8ae;
    *(undefined4 *)(lVar5 + 0x24c) = 33000;
    *(undefined4 *)(lVar5 + 0x264) = 33000;
    *(undefined4 *)(lVar5 + 0x27c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x244) = 33000;
    *(undefined4 *)(lVar5 + 0x25c) = 33000;
    *(undefined4 *)(lVar5 + 0x274) = 0x71;
    *(undefined4 *)(lVar5 + 0x240) = 33000;
    *(undefined4 *)(lVar5 + 600) = 33000;
    *(undefined4 *)(lVar5 + 0x270) = 0x71;
    *(undefined4 *)(lVar5 + 0x23c) = 33000;
    *(undefined4 *)(lVar5 + 0x254) = 33000;
    *(undefined4 *)(lVar5 + 0x26c) = 0x2f;
    *(undefined4 *)(lVar5 + 0x284) = 15000;
    *(undefined4 *)(lVar5 + 0x288) = 10;
    func_0x0001400fcef0(lVar5 + 0x290,0xb);
    func_0x0001400fcef0(lVar5 + 0x290,0x31);
    *(undefined2 *)(lVar5 + 0x80) = 700;
    *(undefined4 *)(lVar5 + 0x88) = 0x3e803520;
    *(undefined4 *)(lVar5 + 0x4c2) = 0x10007;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_658,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_658);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_658);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_638,&DAT_141735d94);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_638);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_638);
    FUN_140069780(auStack_618,&DAT_141735d94);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_618);
    puVar7 = auStack_618;
    break;
  case 6:
    uStack_910 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_910);
    supplier_140070bb0(lVar5,&UNK_1416bc5fc);
    *(undefined4 *)(lVar5 + 0x90) = 0x398;
    *(undefined4 *)(lVar5 + 0x94) = 1000;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_14166c230);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_14166c25c);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736838);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_14166c230);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_14166c340);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141706d78);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x80) = 0x1055;
    *(undefined4 *)(lVar5 + 0x88) = 0x27c42710;
    *(undefined4 *)(lVar5 + 0x4c2) = 1;
    *(undefined4 *)(lVar5 + 0x4c6) = 3;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_5f8,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_5f8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_5f8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_5d8,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_5d8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_5d8);
    FUN_140069780(auStack_5b8,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_5b8);
    *(undefined4 *)(lVar5 + 0xa4) = uVar3;
    FUN_140070e80(auStack_5b8);
    *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
    func_0x0001400fcef0(lVar5 + 0x290,0x48);
    *(undefined4 *)(lVar5 + 0x284) = 1000;
    *(longlong *)(param_1 + 0xaf8 + uVar13 * 8) = lVar5;
    uVar11 = (ulonglong)(uVar14 + 1);
    uVar13 = uVar13 + 1;
    goto LAB_140d80240;
  case 7:
    uStack_908 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_908);
    supplier_140070bb0(lVar5,&UNK_1416be0d4);
    *(undefined4 *)(lVar5 + 0x90) = 0x542;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736804);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141736810);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736850);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736860);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 2;
    *(undefined2 *)(lVar5 + 0x80) = 0x199;
    *(undefined2 *)(lVar5 + 0x86) = 0x2cb0;
    *(undefined8 *)(lVar5 + 0x4c2) = 0x10000;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_598,&UNK_141736840);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_598);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_598);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_578,&UNK_141736840);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_578);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_578);
    FUN_140069780(auStack_558,&UNK_141736840);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_558);
    puVar7 = auStack_558;
    break;
  case 8:
    uStack_900 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_900);
    supplier_140070bb0(lVar5,&UNK_1416be1cc);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736848);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141736848);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736888);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736898);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 3;
    *(undefined2 *)(lVar5 + 0x80) = 800;
    *(undefined4 *)(lVar5 + 0x4c2) = 0x10007;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_538,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_538);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_538);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_518,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_518);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_518);
    FUN_140069780(auStack_4f8,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_4f8);
    puVar7 = auStack_4f8;
    break;
  case 9:
    uStack_8f8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8f8);
    supplier_140070bb0(lVar5,&UNK_1416be1f4);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736870);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141736870);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736878);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_1417368c8);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x80) = 800;
    *(undefined4 *)(lVar5 + 0x4c2) = 7;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_4d8,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_4d8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_4d8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_4b8,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_4b8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_4b8);
    FUN_140069780(auStack_498,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_498);
    *(undefined4 *)(lVar5 + 0xa4) = uVar3;
    FUN_140070e80(auStack_498);
    *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
    FUN_140069780(auStack_478,&UNK_1417368d8);
    iVar4 = FUN_1405cbae0(0x14250ed48,auStack_478);
    aiStack_948[0] = iVar4;
    FUN_140070e80(auStack_478);
    if (iVar4 == -1) goto LAB_140d82041;
    FUN_1400bcf10(lVar5 + 0x350,&UNK_1416ec148);
    auStack_958[0] = 0xffff;
    func_0x000140070b20(lVar5 + 0x368,auStack_958);
    auStack_958[0] = 0xffff;
    func_0x000140070b20(lVar5 + 0x380,auStack_958);
    auStack_958[0] = 0;
    func_0x000140070b20(lVar5 + 0x398,auStack_958);
    func_0x000140070a40(lVar5 + 0x3b0,aiStack_948);
    FUN_1400bcf10(lVar5 + 0x3c8,&UNK_1416343a0);
    FUN_1400bcf10(lVar5 + 0x3e0,&UNK_1416343a0);
    FUN_140069780(auStack_418,&UNK_1416be0a0);
    FUN_140069780(auStack_438,&UNK_1417368d8);
    supplier_140070cc0(auStack_458);
    FUN_1400bcda0(lVar5 + 0x3f8,auStack_418);
    FUN_1400bcda0(lVar5 + 0x410,auStack_438);
    FUN_1400bcda0(lVar5 + 0x428,auStack_458);
    FUN_140070e80(auStack_458);
    FUN_140070e80(auStack_438);
    FUN_140070e80(auStack_418);
    *(longlong *)(param_1 + 0xaf8 + uVar13 * 8) = lVar5;
    uVar11 = (ulonglong)(uVar14 + 1);
    uVar13 = uVar13 + 1;
    goto LAB_140d80240;
  case 10:
    uStack_8f0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8f0);
    supplier_140070bb0(lVar5,&UNK_1416be1e8);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_1417368a8);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1417368a8);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1417368b8);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736910);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 4;
    *(undefined2 *)(lVar5 + 0x80) = 800;
    *(undefined4 *)(lVar5 + 0x4c2) = 0x10007;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_3f8,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_3f8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_3f8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_3d8,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_3d8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_3d8);
    FUN_140069780(auStack_3b8,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_3b8);
    puVar7 = auStack_3b8;
    break;
  case 0xb:
    uStack_8e8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8e8);
    supplier_140070bb0(lVar5,&UNK_1416be1fc);
    *(undefined4 *)(lVar5 + 0x90) = 0x398;
    *(undefined4 *)(lVar5 + 0x94) = 1000;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736928);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1417368e8);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736900);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736928);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_141736950);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141736958);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 2;
    *(undefined2 *)(lVar5 + 0x80) = 0x1055;
    *(undefined4 *)(lVar5 + 0x88) = 0x27c42710;
    *(undefined4 *)(lVar5 + 0x4c2) = 7;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_398,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_398);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_398);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_378,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_378);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_378);
    FUN_140069780(auStack_358,&DAT_141631770);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_358);
    puVar7 = auStack_358;
    goto LAB_140d82d0e;
  case 0xc:
    uStack_8e0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8e0);
    supplier_140070bb0(lVar5,&UNK_1416be1f8);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_14166c288);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_14166c220);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_14166c288);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736938);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x80) = 800;
    *(undefined4 *)(lVar5 + 0x4c2) = 6;
    *(undefined4 *)(lVar5 + 0x4c6) = 6;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_338,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_338);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_338);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_318,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_318);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_318);
    FUN_140069780(auStack_2f8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_2f8);
    puVar7 = auStack_2f8;
    break;
  case 0xd:
    uStack_8d8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8d8);
    supplier_140070bb0(lVar5,&UNK_1416be068);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_1416f19d8);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1416f19d8);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1416f19d8);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736988);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x4e2) = 2;
    *(undefined4 *)(lVar5 + 0x80) = 0x27c41055;
    *(undefined4 *)(lVar5 + 0x4c2) = 2;
    *(undefined4 *)(lVar5 + 0x4c6) = 2;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_2d8,&DAT_141736730);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_2d8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_2d8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_2b8,&DAT_141736730);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_2b8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_2b8);
    FUN_140069780(auStack_298,&DAT_141736730);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_298);
    puVar7 = auStack_298;
    break;
  case 0xe:
    uStack_8d0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8d0);
    supplier_140070bb0(lVar5,&UNK_1416bc7b4);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    *(undefined4 *)(lVar5 + 0x94) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_1416c1eac);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1416c1eac);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1416c1eac);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_1416c1eac);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_141736998);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141736968);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 10;
    *(undefined2 *)(lVar5 + 0x80) = 0x356;
    *(undefined4 *)(lVar5 + 0x88) = 0x315d2cb2;
    *(undefined4 *)(lVar5 + 0x4c2) = 7;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_278,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_278);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_278);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_258,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_258);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_258);
    FUN_140069780(auStack_238,&DAT_141736698);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_238);
    puVar7 = auStack_238;
    goto LAB_140d82d0e;
  case 0xf:
    uStack_8c8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8c8);
    supplier_140070bb0(lVar5,&UNK_1416be060);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_1416f1a2c);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1416f1a2c);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1416f1a2c);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736978);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x4e2) = 7;
    *(undefined4 *)(lVar5 + 0x80) = 0x27c41055;
    *(undefined4 *)(lVar5 + 0x4c2) = 6;
    *(undefined4 *)(lVar5 + 0x4c6) = 6;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_218,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_218);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_218);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_1f8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_1f8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_1f8);
    FUN_140069780(auStack_1d8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_1d8);
    puVar7 = auStack_1d8;
    goto LAB_140d82d0e;
  case 0x10:
    uStack_8c0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8c0);
    supplier_140070bb0(lVar5,&UNK_1416be088);
    *(undefined4 *)(lVar5 + 0x90) = 0x398;
    *(undefined4 *)(lVar5 + 0x94) = 1000;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_1417369c8);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_1417369d8);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1417369a8);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_1417369c8);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_1416f1a2c);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_1417369b8);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x4e2) = 7;
    *(undefined4 *)(lVar5 + 0x80) = 0x27c41055;
    *(undefined4 *)(lVar5 + 0x88) = 0x27c42710;
    *(undefined4 *)(lVar5 + 0x4c2) = 0x10006;
    *(undefined4 *)(lVar5 + 0x4c6) = 6;
    *(undefined2 *)(lVar5 + 0x4ca) = 1;
    FUN_140069780(auStack_1b8,&UNK_1416cdc94);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_1b8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_1b8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_198,&UNK_1416cdc94);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_198);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_198);
    FUN_140069780(auStack_178,&UNK_1416cdc94);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_178);
    puVar7 = auStack_178;
    break;
  case 0x11:
    uStack_8b8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8b8);
    supplier_140070bb0(lVar5,&UNK_1416be070);
    *(undefined4 *)(lVar5 + 0x90) = 0x398;
    *(undefined4 *)(lVar5 + 0x94) = 1000;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736a18);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141736a38);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_1417369f0);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736a18);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_141736a00);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141736a70);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x4e2) = 7;
    *(undefined4 *)(lVar5 + 0x80) = 0x27c41055;
    *(undefined4 *)(lVar5 + 0x88) = 0x27c42710;
    *(undefined4 *)(lVar5 + 0x4c2) = 7;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_158,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_158);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_158);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_138,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_138);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_138);
    FUN_140069780(auStack_118,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_118);
    puVar7 = auStack_118;
    goto LAB_140d82d0e;
  case 0x12:
    uStack_8b0 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8b0);
    supplier_140070bb0(lVar5,&UNK_1416be098);
    *(undefined4 *)(lVar5 + 0x90) = 0x4b0;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141736a8c);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141736a8c);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141736a50);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141736a60);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined2 *)(lVar5 + 0x4e2) = 6;
    *(undefined2 *)(lVar5 + 0x80) = 800;
    *(undefined4 *)(lVar5 + 0x4c2) = 2;
    *(undefined4 *)(lVar5 + 0x4c6) = 2;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_f8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_f8);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_f8);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_d8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_d8);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_d8);
    FUN_140069780(auStack_b8,&DAT_141736948);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_b8);
    puVar7 = auStack_b8;
    break;
  case 0x13:
    uStack_8a8 = FUN_1415530e0(0x6e8);
    lVar5 = material_constructor(uStack_8a8);
    supplier_140070bb0(lVar5,&UNK_141735f78);
    *(undefined4 *)(lVar5 + 0x90) = 2000;
    *(undefined4 *)(lVar5 + 0x94) = 2000;
    supplier_140070bb0(lVar5 + 0xb8,&UNK_141735f88);
    FUN_140070bd0(lVar5 + 0x178,lVar5 + 0xb8);
    supplier_140070bb0(lVar5 + 0x118,&UNK_141735f40);
    FUN_140070bd0(lVar5 + 0x1d8,lVar5 + 0x118);
    supplier_140070bb0(lVar5 + 0x138,&UNK_141735f60);
    FUN_140070bd0(lVar5 + 0x1f8,lVar5 + 0x138);
    supplier_140070bb0(lVar5 + 0x158,&UNK_141735fe0);
    FUN_140070bd0(lVar5 + 0x218,lVar5 + 0x158);
    supplier_140070bb0(lVar5 + 0xd8,&UNK_141736010);
    FUN_140070bd0(lVar5 + 0x198,lVar5 + 0xd8);
    supplier_140070bb0(lVar5 + 0xf8,&UNK_141735fb0);
    FUN_140070bd0(lVar5 + 0x1b8,lVar5 + 0xf8);
    *(undefined4 *)(lVar5 + 0x288) = 1;
    *(undefined4 *)(lVar5 + 0x4c2) = 7;
    *(undefined4 *)(lVar5 + 0x4c6) = 7;
    *(undefined2 *)(lVar5 + 0x4ca) = 0;
    FUN_140069780(auStack_98,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_98);
    *(undefined4 *)(lVar5 + 0x9c) = uVar3;
    FUN_140070e80(auStack_98);
    uVar3 = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined4 *)(lVar5 + 0xa8) = uVar3;
    *(undefined4 *)(lVar5 + 0xac) = uVar3;
    *(undefined4 *)(lVar5 + 0xb0) = uVar3;
    FUN_140069780(auStack_78,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_78);
    *(undefined4 *)(lVar5 + 0xa0) = uVar3;
    FUN_140070e80(auStack_78);
    FUN_140069780(auStack_58,&DAT_1416cdc8c);
    uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_58);
    puVar7 = auStack_58;
LAB_140d82d0e:
    *(undefined4 *)(lVar5 + 0xa4) = uVar3;
    FUN_140070e80(puVar7);
    *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
    *(longlong *)(param_1 + 0xaf8 + uVar13 * 8) = lVar5;
    uVar11 = (ulonglong)(uVar14 + 1);
    uVar13 = uVar13 + 1;
    goto LAB_140d80240;
  }
  *(undefined4 *)(lVar5 + 0xa4) = uVar3;
  FUN_140070e80(puVar7);
  *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
LAB_140d82041:
  *(longlong *)(param_1 + 0xaf8 + uVar13 * 8) = lVar5;
  uVar11 = (ulonglong)(uVar14 + 1);
  uVar13 = uVar13 + 1;
  goto LAB_140d80240;
  while( true ) {
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 1;
    if (uVar11 <= (ulonglong)(longlong)iVar12) break;
LAB_140d83eb0:
    plVar6 = (longlong *)*puVar9;
    plVar10 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x2c), iVar4 == 0))
    goto LAB_140d83efa;
  }
LAB_140d83ef5:
  iVar12 = -1;
LAB_140d83efa:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[0x2f]) {
    uVar8 = auStack_898[0x2f] + 1;
    uVar11 = auStack_898[0x2c];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x2f] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x2c] - 8);
      if (0x1f < (auStack_898[0x2c] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x2e] = 0;
  auStack_898[0x2f] = 0xf;
  auStack_898[0x2c] = auStack_898[0x2c] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  auStack_898[0x31] = 0;
  auStack_898[0x32] = 5;
  auStack_898[0x33] = 0xf;
  auStack_898[0x30] = 0x4e574f5242;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x30), iVar4 == 0))
      goto LAB_140d8402a;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d8402a:
  *(int *)(lVar5 + 0xa0) = iVar12;
  if (0xf < auStack_898[0x33]) {
    uVar8 = auStack_898[0x33] + 1;
    uVar11 = auStack_898[0x30];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x33] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x30] - 8);
      if (0x1f < (auStack_898[0x30] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x32] = 0;
  auStack_898[0x33] = 0xf;
  auStack_898[0x30] = auStack_898[0x30] & 0xffffffffffffff00;
  auStack_898[0x35] = 0;
  auStack_898[0x36] = 5;
  auStack_898[0x37] = 0xf;
  auStack_898[0x34] = 0x4e574f5242;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x34), iVar4 == 0))
      goto LAB_140d8413a;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d8413a:
  *(int *)(lVar5 + 0xa4) = iVar12;
  if (0xf < auStack_898[0x37]) {
    uVar8 = auStack_898[0x37] + 1;
    uVar11 = auStack_898[0x34];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x37] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x34] - 8);
      if (0x1f < (auStack_898[0x34] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0x36] = 0;
  auStack_898[0x37] = 0xf;
  auStack_898[0x34] = auStack_898[0x34] & 0xffffffffffffff00;
  goto LAB_140d80cdd;
  while( true ) {
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 1;
    if (uVar11 <= (ulonglong)(longlong)iVar12) break;
LAB_140d81be0:
    plVar6 = (longlong *)*puVar9;
    plVar10 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x28), iVar4 == 0))
    goto LAB_140d81c2a;
  }
LAB_140d81c25:
  iVar12 = -1;
LAB_140d81c2a:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[0x2b]) {
    uVar8 = auStack_898[0x2b] + 1;
    uVar11 = auStack_898[0x28];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x2b] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x28] - 8);
      if (0x1f < (auStack_898[0x28] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0x2a] = 0;
  auStack_898[0x2b] = 0xf;
  auStack_898[0x28] = auStack_898[0x28] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  FUN_140069780(auStack_698,&DAT_141735d94);
  uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_698);
  *(undefined4 *)(lVar5 + 0xa0) = uVar3;
  FUN_140070e80(auStack_698);
  FUN_140069780(auStack_678,&DAT_141735d94);
  uVar3 = FUN_1401fd1c0(&DAT_142519538,auStack_678);
  *(undefined4 *)(lVar5 + 0xa4) = uVar3;
  FUN_140070e80(auStack_678);
  *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
  *(longlong *)(lStack_950 + 0xaf8 + uVar13 * 8) = lVar5;
  uVar11 = (ulonglong)(uVar14 + 1);
  uVar13 = uVar13 + 1;
  param_1 = lStack_950;
  goto LAB_140d8021e;
  while( true ) {
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 1;
    if (uVar11 <= (ulonglong)(longlong)iVar12) break;
LAB_140d81590:
    plVar6 = (longlong *)*puVar9;
    plVar10 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*plVar10 == 10) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x1c), iVar4 == 0))
    goto LAB_140d815da;
  }
LAB_140d815d5:
  iVar12 = -1;
LAB_140d815da:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[0x1f]) {
    uVar8 = auStack_898[0x1f] + 1;
    uVar11 = auStack_898[0x1c];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x1f] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x1c] - 8);
      if (0x1f < (auStack_898[0x1c] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x1e] = 0;
  auStack_898[0x1f] = 0xf;
  auStack_898[0x1c] = auStack_898[0x1c] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  auStack_898[0x21] = 0;
  auStack_898[0x22] = 3;
  auStack_898[0x23] = 0xf;
  auStack_898[0x20] = 0x444552;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 3) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x20), iVar4 == 0))
      goto LAB_140d8170f;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d8170f:
  *(int *)(lVar5 + 0xa0) = iVar12;
  if (0xf < auStack_898[0x23]) {
    uVar8 = auStack_898[0x23] + 1;
    uVar11 = auStack_898[0x20];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x23] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x20] - 8);
      if (0x1f < (auStack_898[0x20] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x22] = 0;
  auStack_898[0x23] = 0xf;
  auStack_898[0x20] = auStack_898[0x20] & 0xffffffffffffff00;
  auStack_898[0x25] = 0;
  auStack_898[0x26] = 3;
  auStack_898[0x27] = 0xf;
  auStack_898[0x24] = 0x444552;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 3) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x24), iVar4 == 0))
      goto LAB_140d8182f;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d8182f:
  *(int *)(lVar5 + 0xa4) = iVar12;
  if (0xf < auStack_898[0x27]) {
    uVar8 = auStack_898[0x27] + 1;
    uVar11 = auStack_898[0x24];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x27] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x24] - 8);
      if (0x1f < (auStack_898[0x24] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0x26] = 0;
  auStack_898[0x27] = 0xf;
  auStack_898[0x24] = auStack_898[0x24] & 0xffffffffffffff00;
  goto LAB_140d80cdd;
  while( true ) {
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 1;
    if (uVar11 <= (ulonglong)(longlong)iVar12) break;
LAB_140d80f50:
    plVar6 = (longlong *)*puVar9;
    plVar10 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x10), iVar4 == 0))
    goto LAB_140d80f97;
  }
LAB_140d80f92:
  iVar12 = -1;
LAB_140d80f97:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[0x13]) {
    uVar8 = auStack_898[0x13] + 1;
    uVar11 = auStack_898[0x10];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x13] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x10] - 8);
      if (0x1f < (auStack_898[0x10] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x12] = 0;
  auStack_898[0x13] = 0xf;
  auStack_898[0x10] = auStack_898[0x10] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  auStack_898[0x15] = 0;
  auStack_898[0x16] = 5;
  auStack_898[0x17] = 0xf;
  auStack_898[0x14] = 0x4554494857;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x14), iVar4 == 0))
      goto LAB_140d810ba;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d810ba:
  *(int *)(lVar5 + 0xa0) = iVar12;
  if (0xf < auStack_898[0x17]) {
    uVar8 = auStack_898[0x17] + 1;
    uVar11 = auStack_898[0x14];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x17] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x14] - 8);
      if (0x1f < (auStack_898[0x14] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[0x16] = 0;
  auStack_898[0x17] = 0xf;
  auStack_898[0x14] = auStack_898[0x14] & 0xffffffffffffff00;
  auStack_898[0x19] = 0;
  auStack_898[0x1a] = 5;
  auStack_898[0x1b] = 0xf;
  auStack_898[0x18] = 0x4554494857;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x18), iVar4 == 0))
      goto LAB_140d811ca;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d811ca:
  *(int *)(lVar5 + 0xa4) = iVar12;
  if (0xf < auStack_898[0x1b]) {
    uVar8 = auStack_898[0x1b] + 1;
    uVar11 = auStack_898[0x18];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x1b] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x18] - 8);
      if (0x1f < (auStack_898[0x18] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0x1a] = 0;
  auStack_898[0x1b] = 0xf;
  auStack_898[0x18] = auStack_898[0x18] & 0xffffffffffffff00;
  goto LAB_140d80cdd;
  while( true ) {
    iVar12 = iVar12 + 1;
    puVar9 = puVar9 + 1;
    if (uVar11 <= (ulonglong)(longlong)iVar12) break;
LAB_140d80a50:
    plVar6 = (longlong *)*puVar9;
    plVar10 = plVar6 + 2;
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 4), iVar4 == 0))
    goto LAB_140d80a97;
  }
LAB_140d80a92:
  iVar12 = -1;
LAB_140d80a97:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[7]) {
    uVar8 = auStack_898[7] + 1;
    uVar11 = auStack_898[4];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[7] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[4] - 8);
      if (0x1f < (auStack_898[4] - uVar11) - 8) {
LAB_140d841e3:
        _invalid_parameter_noinfo_noreturn(uVar11,uVar8);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[6] = 0;
  auStack_898[7] = 0xf;
  auStack_898[4] = auStack_898[4] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  auStack_898[9] = 0;
  auStack_898[10] = 5;
  auStack_898[0xb] = 0xf;
  auStack_898[8] = 0x5245424d41;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 8), iVar4 == 0))
      goto LAB_140d80b98;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d80b98:
  *(int *)(lVar5 + 0xa0) = iVar12;
  if (0xf < auStack_898[0xb]) {
    uVar8 = auStack_898[0xb] + 1;
    uVar11 = auStack_898[8];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0xb] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[8] - 8);
      if (0x1f < (auStack_898[8] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  iVar12 = 0;
  auStack_898[10] = 0;
  auStack_898[0xb] = 0xf;
  auStack_898[8] = auStack_898[8] & 0xffffffffffffff00;
  auStack_898[0xd] = 0;
  auStack_898[0xe] = 5;
  auStack_898[0xf] = 0xf;
  auStack_898[0xc] = 0x5245424d41;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 5) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0xc), iVar4 == 0))
      goto LAB_140d80c87;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d80c87:
  *(int *)(lVar5 + 0xa4) = iVar12;
  if (0xf < auStack_898[0xf]) {
    uVar8 = auStack_898[0xf] + 1;
    uVar11 = auStack_898[0xc];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0xf] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0xc] - 8);
      if (0x1f < (auStack_898[0xc] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0xe] = 0;
  auStack_898[0xf] = 0xf;
  auStack_898[0xc] = auStack_898[0xc] & 0xffffffffffffff00;
LAB_140d80cdd:
  *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
  *(longlong *)(lStack_950 + 0xaf8 + uVar13 * 8) = lVar5;
  uVar11 = (ulonglong)(uVar14 + 1);
  uVar13 = uVar13 + 1;
  param_1 = lStack_950;
  goto LAB_140d8021e;
override_jmp_140d8026a_case_0:
  uStack_940 = FUN_1415530e0(0x6e8);
  lVar5 = material_constructor(uStack_940);
  FUN_140070f00(lVar5,&UNK_1416be0a0,9);
  *(undefined4 *)(lVar5 + 0x90) = 2000;
  *(undefined4 *)(lVar5 + 0x94) = 2000;
  plVar10 = (longlong *)(lVar5 + 0xb8);
  FUN_140070f00(plVar10,&UNK_1416f03c4,4);
  if ((longlong *)(lVar5 + 0x178) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0xd0)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x178,plVar10,*(undefined8 *)(lVar5 + 200));
  }
  plVar10 = (longlong *)(lVar5 + 0x118);
  FUN_140070f00(plVar10,&UNK_1416f03c4,4);
  if ((longlong *)(lVar5 + 0x1d8) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0x130)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x1d8,plVar10,*(undefined8 *)(lVar5 + 0x128));
  }
  plVar10 = (longlong *)(lVar5 + 0x138);
  FUN_140070f00(plVar10,&UNK_1416f03c4,4);
  if ((longlong *)(lVar5 + 0x1f8) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0x150)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x1f8,plVar10,*(undefined8 *)(lVar5 + 0x148));
  }
  plVar10 = (longlong *)(lVar5 + 0x158);
  FUN_140070f00(plVar10,&UNK_1416f03c4,4);
  if ((longlong *)(lVar5 + 0x218) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0x170)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x218,plVar10,*(undefined8 *)(lVar5 + 0x168));
  }
  plVar10 = (longlong *)(lVar5 + 0xd8);
  FUN_140070f00(plVar10,&UNK_141735d3c,5);
  if ((longlong *)(lVar5 + 0x198) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0xf0)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x198,plVar10,*(undefined8 *)(lVar5 + 0xe8));
  }
  plVar10 = (longlong *)(lVar5 + 0xf8);
  FUN_140070f00(plVar10,&UNK_141735d48,0xd);
  if ((longlong *)(lVar5 + 0x1b8) != plVar10) {
    if (0xf < *(ulonglong *)(lVar5 + 0x110)) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_140070f00(lVar5 + 0x1b8,plVar10,*(undefined8 *)(lVar5 + 0x108));
  }
  *(undefined4 *)(lVar5 + 0x248) = 10000;
  *(undefined4 *)(lVar5 + 0x260) = 10000;
  *(undefined8 *)(lVar5 + 0x278) = 0;
  *(undefined4 *)(lVar5 + 0x250) = 10000;
  *(undefined4 *)(lVar5 + 0x268) = 10000;
  *(undefined4 *)(lVar5 + 0x280) = 0;
  *(undefined4 *)(lVar5 + 0x24c) = 10000;
  *(undefined4 *)(lVar5 + 0x264) = 10000;
  *(undefined4 *)(lVar5 + 0x244) = 10000;
  *(undefined4 *)(lVar5 + 0x25c) = 10000;
  *(undefined8 *)(lVar5 + 0x270) = 0;
  *(undefined4 *)(lVar5 + 0x240) = 10000;
  *(undefined4 *)(lVar5 + 600) = 10000;
  *(undefined4 *)(lVar5 + 0x23c) = 10000;
  *(undefined4 *)(lVar5 + 0x254) = 10000;
  *(undefined4 *)(lVar5 + 0x26c) = 0;
  *(undefined4 *)(lVar5 + 0x288) = 1;
  *(undefined4 *)(lVar5 + 0x88) = 0x32c82cec;
  *(undefined2 *)(lVar5 + 0x8c) = 12000;
  *(undefined2 *)(lVar5 + 0x80) = 1000;
  *(undefined4 *)(lVar5 + 0x4c2) = 7;
  *(undefined4 *)(lVar5 + 0x4c6) = 7;
  *(undefined2 *)(lVar5 + 0x4ca) = 0;
  auStack_898[0x39] = 0;
  auStack_898[0x3a] = 4;
  auStack_898[0x3b] = 0xf;
  auStack_898[0x38] = 0x59415247;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 4) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x38), iVar4 == 0))
      goto LAB_140d8058a;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d8058a:
  *(int *)(lVar5 + 0x9c) = iVar12;
  if (0xf < auStack_898[0x3b]) {
    uVar8 = auStack_898[0x3b] + 1;
    uVar11 = auStack_898[0x38];
    if (0xfff < uVar8) {
      uVar8 = auStack_898[0x3b] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0x38] - 8);
      if (0x1f < (auStack_898[0x38] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0(uVar11,uVar8);
  }
  auStack_898[0x3a] = 0;
  auStack_898[0x3b] = 0xf;
  auStack_898[0x38] = auStack_898[0x38] & 0xffffffffffffff00;
  uVar3 = *(undefined4 *)(lVar5 + 0x9c);
  *(undefined4 *)(lVar5 + 0xa8) = uVar3;
  *(undefined4 *)(lVar5 + 0xac) = uVar3;
  *(undefined4 *)(lVar5 + 0xb0) = uVar3;
  auStack_898[1] = 0;
  auStack_898[2] = 3;
  auStack_898[3] = 0xf;
  auStack_898[0] = 0x444552;
  iVar12 = 0;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 3) && (iVar4 = func_0x000141554864(plVar6,auStack_898), iVar4 == 0))
      goto LAB_140d806ac;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d806ac:
  *(int *)(lVar5 + 0xa0) = iVar12;
  if (0xf < auStack_898[3]) {
    if (0xfff < auStack_898[3] + 1) {
      uVar8 = auStack_898[3] + 0x28;
      uVar11 = *(ulonglong *)(auStack_898[0] - 8);
      if (0x1f < (auStack_898[0] - uVar11) - 8) goto LAB_140d841e3;
    }
    supplier_1415530d0();
  }
  auStack_898[2] = 0;
  auStack_898[3] = 0xf;
  auStack_898[0] = auStack_898[0] & 0xffffffffffffff00;
  auStack_898[0x3d] = 0;
  auStack_898[0x3e] = 3;
  auStack_898[0x3f] = 0xf;
  auStack_898[0x3c] = 0x444552;
  iVar12 = 0;
  uVar11 = _DAT_142519570 - (longlong)_DAT_142519568 >> 3;
  puVar9 = _DAT_142519568;
  if (uVar11 != 0) {
    do {
      plVar6 = (longlong *)*puVar9;
      plVar10 = plVar6 + 2;
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      if ((*plVar10 == 3) && (iVar4 = func_0x000141554864(plVar6,auStack_898 + 0x3c), iVar4 == 0))
      goto LAB_140d807bf;
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(longlong)iVar12 < uVar11);
  }
  iVar12 = -1;
LAB_140d807bf:
  *(int *)(lVar5 + 0xa4) = iVar12;
  FUN_140070e80(auStack_898 + 0x3c);
  *(undefined2 *)(lVar5 + 0x2a0) = 0x11;
  *(longlong *)(lStack_950 + 0xaf8 + uVar13 * 8) = lVar5;
  uVar11 = (ulonglong)(uVar14 + 1);
  uVar13 = uVar13 + 1;
  param_1 = lStack_950;
  goto LAB_140d8021e;
}

