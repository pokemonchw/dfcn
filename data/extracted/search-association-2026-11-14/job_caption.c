/* Actual Ghidra output; researcher-assigned role. Native entry 140d1afa0; image 3436f0553d6fa17b25716f8b1f034b52e3d9dc30be7f3ddac67cd0ff731d7b16. */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void job_caption(undefined8 param_1,undefined8 *param_2,undefined2 param_3,short param_4,
                short param_5,short param_6,int param_7,undefined8 *param_8,uint param_9,
                int param_10,uint param_11,longlong param_12,undefined8 param_13,int param_14,
                int param_15)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  char cVar11;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  undefined7 uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  char cVar23;
  undefined8 ****ppppuVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined *puVar19;
  longlong ****pppplVar20;
  longlong ****pppplVar21;
  char *pcVar22;
  undefined8 *puVar24;
  undefined8 uVar25;
  longlong ***ppplVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  ulonglong uVar31;
  uint *apuStack_338 [4];
  uint uStack_318;
  undefined1 uStack_310;
  undefined2 uStack_308;
  short sStack_2f8;
  short sStack_2f6;
  longlong ***ppplStack_2f0;
  undefined8 uStack_2e8;
  longlong **pplStack_2e0;
  ulonglong uStack_2d8;
  undefined1 auStack_2d0 [32];
  undefined8 ***pppuStack_2b0;
  longlong lStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  undefined8 ***apppuStack_290 [2];
  undefined8 uStack_280;
  ulonglong uStack_278;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  ulonglong uStack_30;
  uint *puVar10;
  
  uStack_30 = _DAT_1418be040 ^ (ulonglong)apuStack_338;
  sStack_2f8 = param_5;
  uVar29 = (ulonglong)param_10;
  uVar28 = (ulonglong)param_14;
  uVar31 = (ulonglong)param_15;
  uStack_2e8 = 0;
  iVar6 = 0;
  pplStack_2e0 = (longlong **)0x0;
  uStack_2d8 = 0xf;
  ppplStack_2f0 = (longlong ***)0x0;
  param_2[2] = 0;
  puVar17 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar17 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar17 = 0;
  puVar17 = _DAT_1425196e8;
  sStack_2f6 = param_4;
  switch(param_3) {
  case 0:
    pppplVar21 = (longlong ****)&UNK_141725e20;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 1:
    pppplVar21 = (longlong ****)&UNK_141725e68;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 2:
    pppplVar21 = (longlong ****)&UNK_141725e58;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 3:
    pppplVar21 = (longlong ****)&UNK_141725e88;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 4:
    pppplVar21 = (longlong ****)&UNK_141725e78;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 5:
    pppplVar21 = (longlong ****)&UNK_1416c13e4;
    ppplVar26 = (longlong ***)0x3;
    break;
  case 6:
    pppplVar21 = (longlong ****)&UNK_141725ec0;
    ppplVar26 = (longlong ***)0x16;
    break;
  case 7:
    pppplVar21 = (longlong ****)&UNK_141725f08;
    ppplVar26 = (longlong ***)0x18;
    break;
  case 8:
    pppplVar21 = (longlong ****)&UNK_141725ef0;
    ppplVar26 = (longlong ***)0x17;
    break;
  case 9:
    pppplVar21 = (longlong ****)&UNK_141725f38;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 10:
    pppplVar21 = (longlong ****)&UNK_141725f28;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xb:
    pppplVar21 = (longlong ****)&UNK_141725f58;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0xc:
    pppplVar21 = (longlong ****)&UNK_141725f48;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xd:
    pppplVar21 = (longlong ****)&UNK_141725ed8;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xe:
    pppplVar21 = (longlong ****)&UNK_141725d78;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0xf:
    pppplVar21 = (longlong ****)&UNK_141725f68;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x10:
    pppplVar21 = (longlong ****)&UNK_141725f80;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0x11:
    pppplVar21 = (longlong ****)&UNK_1416bf818;
    ppplVar26 = (longlong ***)0x3;
    break;
  case 0x12:
    pppplVar21 = (longlong ****)&UNK_141725fa8;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x13:
  case 0x14:
    pppplVar21 = (longlong ****)&UNK_14164bb30;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x15:
  case 0x16:
    pppplVar21 = (longlong ****)&UNK_141725fc0;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x17:
    pppplVar21 = (longlong ****)&UNK_141725fb8;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x18:
    pppplVar21 = (longlong ****)&UNK_1417258f8;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x19:
    pppplVar21 = (longlong ****)&UNK_14161dd1c;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x1a:
    pppplVar21 = (longlong ****)&UNK_141726014;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x1b:
    pppplVar21 = (longlong ****)&UNK_141726088;
    ppplVar26 = (longlong ***)0x17;
    break;
  case 0x1c:
    pppplVar21 = (longlong ****)&UNK_141725fd8;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0x1d:
    pppplVar21 = (longlong ****)&UNK_141726038;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x1e:
    pppplVar21 = (longlong ****)&UNK_141726000;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x1f:
    pppplVar21 = (longlong ****)&UNK_141726078;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x20:
    pppplVar21 = (longlong ****)&UNK_1417260b0;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x21:
    pppplVar21 = (longlong ****)&UNK_141725a20;
    ppplVar26 = (longlong ***)0x16;
    break;
  case 0x22:
    pppplVar21 = (longlong ****)&UNK_141725a38;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 0x23:
    pppplVar21 = (longlong ****)&UNK_1417260a0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x24:
    pppplVar21 = (longlong ****)&UNK_1417263e8;
    goto code_r0x000140d1fb5c;
  case 0x25:
    pppplVar21 = (longlong ****)&UNK_141726428;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0x26:
    pppplVar21 = (longlong ****)&UNK_141726410;
    ppplVar26 = (longlong ***)0x17;
    break;
  case 0x27:
    pppplVar21 = (longlong ****)&UNK_141726458;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0x28:
    pppplVar21 = (longlong ****)&UNK_1417264d8;
    ppplVar26 = (longlong ***)0x16;
    break;
  case 0x29:
    pppplVar21 = (longlong ****)&UNK_1417264b0;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x2a:
    pppplVar21 = (longlong ****)&UNK_1417264a0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x2b:
    pppplVar21 = (longlong ****)&UNK_141726440;
    ppplVar26 = (longlong ***)0x14;
    break;
  case 0x2c:
    pppplVar21 = (longlong ****)&UNK_141726488;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0x2d:
    pppplVar21 = (longlong ****)&UNK_1417263c8;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x2e:
    pppplVar21 = (longlong ****)&UNK_141726400;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x2f:
  case 0x30:
    pppplVar21 = (longlong ****)&UNK_1417263d8;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x31:
    pppplVar21 = (longlong ****)&UNK_1416c10f8;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x32:
    pppplVar21 = (longlong ****)&UNK_1416c161c;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x33:
    pppplVar21 = (longlong ****)&UNK_141726500;
    goto code_r0x000140d1fb5c;
  case 0x34:
    pppplVar21 = (longlong ****)&UNK_1417264f0;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
    pppplVar21 = (longlong ****)&UNK_1416bef38;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x42:
    pppplVar21 = (longlong ****)&UNK_1417259c0;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0x43:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pppplVar21 = (longlong ****)&UNK_1417260d8;
        ppplVar26 = (longlong ***)0x7;
        break;
      }
    }
    pppplVar21 = (longlong ****)&UNK_1416ea7a4;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x44:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417260c8;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0x45:
    FUN_140071040(param_2,&UNK_1417262d4,4);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 3) == 0)) {
      supplier_140070b90(param_2," ");
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      supplier_1400bb340(param_2,&ppplStack_2f0);
    }
    pppplVar21 = (longlong ****)&UNK_141726338;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x46:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      supplier_140070b90(param_2,&UNK_1417261b0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141726198;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0x47:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      cVar5 = FUN_141475150(0x1423f3970,0x2f,param_6,param_7);
      if (cVar5 == '\0') {
        supplier_140070b90(param_2,&UNK_1417261a0);
      }
      else {
        supplier_140070b90(param_2,&UNK_141726180);
      }
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141726190;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x48:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_14172610c;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0x49:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pppplVar21 = (longlong ****)&UNK_141726168;
        ppplVar26 = (longlong ***)0x4;
        break;
      }
    }
    if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
      supplier_140070b90(param_2,&UNK_141726160);
    }
    else {
      supplier_140070b90(param_2,&UNK_141726178);
    }
    goto LAB_140d1fb6b;
  case 0x4a:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726170;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x4b:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726144;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x4c:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726150;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x4d:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726128;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x4e:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726138;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0x4f:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726350;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x50:
    FUN_140071040(param_2,&UNK_141657b40,5);
    if ((param_11 & 2) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 8) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x10) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto code_r0x000140d1c852;
      }
    }
    else {
code_r0x000140d1c852:
      FUN_140071040(param_2,&UNK_141725940,5);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141725970;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x51:
    FUN_140071040(param_2,&UNK_141725960,9);
    goto code_r0x000140d1c3a5;
  case 0x52:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141703998;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x53:
    FUN_140071040(param_2,&UNK_14172582c,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141725824;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0x54:
    if (param_6 == -1) {
      pppplVar21 = (longlong ****)&UNK_141725838;
      ppplVar26 = (longlong ***)0x8;
    }
    else {
      FUN_140071040(param_2,&UNK_141725844,4);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_318 = param_11;
      FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar21 = &ppplStack_2f0;
      ppplVar26 = (longlong ***)pplStack_2e0;
      if (0xf < uStack_2d8) {
        pppplVar21 = (longlong ****)ppplStack_2f0;
      }
    }
    break;
  case 0x55:
    if (param_6 != -1) {
      uVar25 = 4;
      puVar19 = &UNK_141725844;
code_r0x000140d1c399:
      FUN_140071040(param_2,puVar19,uVar25);
      goto code_r0x000140d1c3a5;
    }
    pppplVar21 = (longlong ****)&UNK_141725858;
    ppplVar26 = (longlong ***)0x17;
    break;
  case 0x56:
    FUN_140071040(param_2,&UNK_1417258c8,8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,&UNK_1417258b8,0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,&UNK_1417258e8,9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,&UNK_1416eafbc,4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto code_r0x000140d1c3a5;
    pppplVar21 = (longlong ****)&UNK_14161cef8;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0x57:
    FUN_140071040(param_2,&UNK_1417258c8,8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,&UNK_1417258b8,0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,&UNK_1417258e8,9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,&UNK_1416eafbc,4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto code_r0x000140d1c3a5;
    pppplVar21 = (longlong ****)&UNK_1417258d8;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0x58:
    pppplVar21 = (longlong ****)&UNK_141725a08;
    goto code_r0x000140d1fb5c;
  case 0x59:
    FUN_140071040(param_2,&UNK_141725c8c,6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141725c84;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x5a:
    pppplVar21 = (longlong ****)&UNK_141725cb0;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x5b:
    pppplVar21 = (longlong ****)&UNK_141725c98;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0x5c:
    pppplVar21 = (longlong ****)&UNK_141725de0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x5d:
    pppplVar21 = (longlong ****)&UNK_141725df0;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x5e:
    FUN_140071040(param_2,&UNK_14172637c,6);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_90);
            FUN_141349540(lVar7,auStack_90,0);
            supplier_1400bb340(param_2,auStack_90);
            supplier_140070b90(param_2,&UNK_141726370);
            FUN_140070e80(auStack_90);
          }
          break;
        }
      }
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141726398;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x5f:
    FUN_140071040(param_2,&UNK_14172637c,6);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_70);
            FUN_141349540(lVar7,auStack_70,0);
            supplier_1400bb340(param_2,auStack_70);
            supplier_140070b90(param_2,&UNK_141726388);
            FUN_140070e80(auStack_70);
          }
          break;
        }
      }
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_1417263b8;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0x60:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e557:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e557;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)
                 (*(longlong *)(lRam000000014250efa8 + (longlong)sStack_2f8 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x61:
    FUN_140071040(param_2,&UNK_1417261a8,6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726340;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0x62:
    FUN_140071040(param_2,&UNK_1417262d4,4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar21 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar21 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    }
    pppplVar21 = (longlong ****)&UNK_141726300;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 99:
    FUN_140071040(param_2,&UNK_1417262d4,4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar21 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar21 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    }
    pppplVar21 = (longlong ****)&UNK_141726328;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 100:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e416:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e416;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x19,sStack_2f8,uVar29 & 0xffff);
      if (iVar6 == 1) {
        supplier_140070b90(param_2,&UNK_1416a5df4);
      }
      else if (iVar6 == 2) {
        supplier_140070b90(param_2,&UNK_141666420);
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)(*(longlong *)(lRam000000014250f290 + (longlong)sVar3 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x65:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e12e:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e12e;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1c,sStack_2f8,uVar29 & 0xffff);
      if (iVar6 == 1) {
        supplier_140070b90(param_2,&UNK_1416a5df4);
      }
      else if (iVar6 == 2) {
        supplier_140070b90(param_2,&UNK_141666420);
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)(*(longlong *)(lRam000000014250f320 + (longlong)sVar3 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x66:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e26f:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e26f;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x3c,sStack_2f8,uVar29 & 0xffff);
      if (iVar6 == 1) {
        supplier_140070b90(param_2,&UNK_1416a5df4);
      }
      else if (iVar6 == 2) {
        supplier_140070b90(param_2,&UNK_141666420);
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)(*(longlong *)(lRam000000014250f338 + (longlong)sVar3 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x67:
    FUN_140071040(param_2,&UNK_141725898,10);
    goto code_r0x000140d1c3a5;
  case 0x68:
    pppplVar21 = (longlong ****)&UNK_1417259f0;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0x69:
    pppplVar21 = (longlong ****)&UNK_141725a50;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0x6a:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      supplier_140070b90(param_2,&UNK_141725a48);
      supplier_140070cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(0x14250ed78,param_7,auStack_2d0,0);
      supplier_1400bb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141725a78;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x6b:
    FUN_140071040(param_2,&UNK_1417262b0,0xf);
    if (sStack_2f6 == 0x2c) {
      supplier_140070b90(param_2,&UNK_1416316ac);
    }
    else if (sStack_2f6 == 0x30) {
      supplier_140070b90(param_2,&UNK_1416f0a8c);
    }
    else if (sStack_2f6 == 0x31) {
      supplier_140070b90(param_2,&UNK_1416c19a0);
    }
    goto LAB_140d1fb6b;
  case 0x6c:
    FUN_140071040(param_2,&UNK_141725a84,5);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0xe) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_270);
            FUN_141349540(lVar7,auStack_270,0);
            supplier_1400bb340(param_2,auStack_270);
            FUN_140070e80(auStack_270);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b246;
  case 0x6d:
    pppplVar21 = (longlong ****)&UNK_141725ac0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x6e:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      supplier_140070b90(param_2,&UNK_141725a68);
      supplier_140070cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(0x14250ed78,param_7,auStack_2d0,0);
      supplier_1400bb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141725a90;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x6f:
    if (param_6 != -1) {
      uVar25 = 7;
      puVar19 = &UNK_141725850;
      goto code_r0x000140d1c399;
    }
    pppplVar21 = (longlong ****)&UNK_141725888;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x70:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      supplier_140070b90(param_2,&UNK_141725a68);
      supplier_140070cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(0x14250ed78,param_7,auStack_2d0,0);
      supplier_1400bb340(param_2,auStack_2d0);
      supplier_140070b90(param_2,&UNK_141725ab8);
      FUN_140070e80(auStack_2d0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141725ae0;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0x71:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      supplier_140070b90(param_2,&UNK_141725a68);
      supplier_140070cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(0x14250ed78,param_7,auStack_2d0,0);
      supplier_1400bb340(param_2,auStack_2d0);
      supplier_140070b90(param_2,&UNK_141725ad0);
      FUN_140070e80(auStack_2d0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141725b08;
    ppplVar26 = (longlong ***)0x17;
    break;
  case 0x72:
    if (param_6 == 2) {
      supplier_140070b90(param_2,&UNK_141725b68);
    }
    else if (param_6 == 3) {
      supplier_140070b90(param_2,&UNK_141725b50);
    }
    else if (param_6 == 4) {
      supplier_140070b90(param_2,&UNK_141725b90);
    }
    goto LAB_140d1fb6b;
  case 0x73:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1f5e2:
      if ((param_6 == 0) && (param_7 == -1)) goto code_r0x000140d1f5ec;
      if ((param_11 & 8) == 0) {
        puVar19 = &UNK_141725d88;
        if ((param_11 >> 0xc & 1) == 0) {
          puVar19 = &UNK_141725dc8;
        }
      }
      else {
        puVar19 = &UNK_141725da0;
      }
      supplier_140070b90(param_2,puVar19);
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1f5e2;
code_r0x000140d1f5ec:
      FUN_140071040(param_2,&UNK_141725d60,0x11);
    }
    if (param_9 == 0) goto LAB_140d1fb6b;
    pppplVar21 = (longlong ****)&UNK_141725db8;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x74:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d183:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d183;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    FUN_140071040(param_2,&UNK_1417261c8,8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1d,sStack_2f8,uVar29 & 0xffff);
      if (iVar6 == 1) {
        supplier_140070b90(param_2,&UNK_1416a5df4);
      }
      else if (iVar6 == 2) {
        supplier_140070b90(param_2,&UNK_141666420);
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(lRam000000014250f2d8 + (longlong)sVar3 * 8);
    goto code_r0x000140d1d281;
  case 0x75:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d300:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d300;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    FUN_140071040(param_2,&UNK_1417261c8,8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418be238 == 0) && (param_10 != -1)) && (param_10 != _DAT_1423b5afc)) {
      iVar6 = FUN_1413797d0(0x1a,sStack_2f8,uVar29 & 0xffff);
      if (iVar6 == 1) {
        supplier_140070b90(param_2,&UNK_1416a5df4);
      }
      else if (iVar6 == 2) {
        supplier_140070b90(param_2,&UNK_141666420);
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(lRam000000014250f2f0 + (longlong)sVar3 * 8);
    pppplVar21 = (longlong ****)(lVar7 + 0x88);
    ppplVar26 = *(longlong ****)(lVar7 + 0x98);
    if (0xf < *(ulonglong *)(lVar7 + 0xa0)) {
      pppplVar21 = *(longlong *****)(lVar7 + 0x88);
    }
    break;
  case 0x76:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d46b:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d46b;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)
                 (*(longlong *)(lRam000000014250f308 + (longlong)sStack_2f8 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x77:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d548:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d548;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pppplVar21 = (longlong ****)&UNK_1417261e0;
        ppplVar26 = (longlong ***)0xa;
        break;
      }
    }
    pppplVar21 = (longlong ****)&UNK_1417261d4;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x78:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d652:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d652;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    if ((param_11 & 2) == 0) {
      if ((((param_11 & 8) == 0) && (199 < (ushort)(param_6 - 0x1a3U))) &&
         ((param_11 & 0x1015) == 0)) {
        supplier_140070b90(param_2,&UNK_1417261f4);
        goto LAB_140d1fb6b;
      }
      pppplVar21 = (longlong ****)&UNK_1417261ec;
      ppplVar26 = (longlong ***)0x5;
    }
    else {
      pppplVar21 = (longlong ****)&UNK_1417261f4;
      ppplVar26 = (longlong ***)0x6;
    }
    break;
  case 0x79:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d75e:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d75e;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    FUN_140071040(param_2,&UNK_14172620c,6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    if ((param_11 & 0x10) == 0) {
      lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 7) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          supplier_140070b90(param_2,&UNK_14172621c);
          goto LAB_140d1fb6b;
        }
      }
      supplier_140070b90(param_2,&UNK_1417039f8);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141726200;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x7a:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d898:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d898;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    FUN_140071040(param_2,&UNK_14172620c,6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      if ((param_6 == 0) && (cVar5 = FUN_141475150(0x1423f3970,0x2f,0,param_7), cVar5 == '\0')) {
        supplier_140070b90(param_2,&UNK_141726234);
      }
      else {
        supplier_140070b90(param_2,&UNK_141726228);
      }
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141726214;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0x7b:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1dbc5:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1dbc5;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726250;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0x7c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1dc85:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1dc85;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726240;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0x7d:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1dd45:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1dd45;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726260;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x7e:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1df0f:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1df0f;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1416db260;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x7f:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726268;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x80:
    pppplVar21 = (longlong ****)&UNK_1417261b8;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0x81:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e786:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e786;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    if ((param_11 & 0x20) == 0) {
      uVar25 = 0xc;
      puVar19 = &UNK_1417262e0;
    }
    else {
      uVar25 = 5;
      puVar19 = &UNK_1417262c0;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    lVar7 = *(longlong *)(lRam000000014250f2a8 + (longlong)sStack_2f8 * 8);
code_r0x000140d1d281:
    pppplVar20 = (longlong ****)(lVar7 + 0x88);
    goto code_r0x000140d1d288;
  case 0x82:
    FUN_140071040(param_2,&UNK_1417258a8,0xe);
code_r0x000140d1c3a5:
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    ppplVar26 = (longlong ***)pplStack_2e0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    break;
  case 0x83:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726288;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0x84:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726280;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0x85:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e634:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e634;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726298;
    ppplVar26 = (longlong ***)0x14;
    break;
  case 0x86:
    FUN_140071040(param_2,&UNK_1417262c8,9);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)
                 (*(longlong *)(lRam000000014250f2c0 + (longlong)sStack_2f8 * 8) + 0x68);
    goto code_r0x000140d1d288;
  case 0x87:
    pppplVar21 = (longlong ****)&UNK_141726518;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x88:
    pppplVar21 = (longlong ****)&UNK_141726550;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x89:
    pppplVar21 = (longlong ****)&UNK_141726570;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x8a:
    pppplVar21 = (longlong ****)&UNK_141726560;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x8b:
    FUN_140071040(param_2,&UNK_1417262d4,4);
    FUN_140071040(param_2," ",1);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417262f0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x8c:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1e91a:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1e91a;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    lVar8 = (longlong)sStack_2f8;
    lVar7 = *(longlong *)(lVar8 * 8 + lRam000000014250efc0);
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      puVar17 = (undefined8 *)(lVar7 + 0xa8);
      if (0xf < *(ulonglong *)(lVar7 + 0xc0)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      FUN_140071040(param_2,puVar17,*(undefined8 *)(lVar7 + 0xb8));
      FUN_140071040(param_2," ",1);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    FUN_140071040(param_2," ",1);
    pppplVar20 = (longlong ****)(*(longlong *)(lVar8 * 8 + lRam000000014250efc0) + 0x68);
    goto code_r0x000140d1d288;
  case 0x8d:
    pppplVar21 = (longlong ****)&UNK_1417265b8;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0x8e:
    pppplVar21 = (longlong ****)&UNK_1417265a8;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 0x8f:
    pppplVar21 = (longlong ****)&UNK_1417265c8;
    goto code_r0x000140d1fb5c;
  case 0x90:
    pppplVar21 = (longlong ****)&UNK_141726528;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0x91:
    FUN_140071040(param_2,&UNK_1417258c8,8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140071040(param_2,&UNK_1417258b8,0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140071040(param_2,&UNK_1417258e8,9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140071040(param_2,&UNK_1416eafbc,4);
    }
    FUN_140071040(param_2," with ",6);
    if (param_6 != -1) goto code_r0x000140d1c3a5;
    pppplVar21 = (longlong ****)&UNK_141725908;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 0x92:
    pppplVar21 = (longlong ****)&UNK_141725e38;
    ppplVar26 = (longlong ***)0x1a;
    break;
  case 0x93:
    pppplVar21 = (longlong ****)&UNK_141725e00;
    ppplVar26 = (longlong ***)0xe;
    break;
  default:
    goto LAB_140d1fb6b;
  case 0x95:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      supplier_140070b90(param_2,&UNK_141725b80);
      supplier_140070cc0(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_140146430(0x14250ed78,param_7,auStack_2d0,0);
      supplier_1400bb340(param_2,auStack_2d0);
      FUN_140070e80(auStack_2d0);
      goto LAB_140d1fb6b;
    }
    pppplVar21 = (longlong ****)&UNK_141725bc0;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x96:
    pppplVar21 = (longlong ****)&UNK_141725ba8;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0x97:
    pppplVar21 = (longlong ****)&UNK_141725be0;
    ppplVar26 = (longlong ***)0x18;
    break;
  case 0x98:
    pppplVar21 = (longlong ****)&UNK_1417257a0;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0x99:
    FUN_140071040(param_2,&UNK_1417257b4,5);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_f0);
            FUN_141349540(lVar7,auStack_f0,0);
            supplier_1400bb340(param_2,auStack_f0);
            FUN_140070e80(auStack_f0);
          }
          break;
        }
      }
      goto LAB_140d1fb6b;
    }
    goto code_r0x000140d1b5de;
  case 0x9a:
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070b90(param_2,&UNK_141725754);
            supplier_140070cc0(auStack_170);
            FUN_141349540(lVar7,auStack_170,0);
            supplier_1400bb340(param_2,auStack_170);
            FUN_140070e80(auStack_170);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    pppplVar21 = (longlong ****)&UNK_141725780;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0x9b:
    FUN_140071040(param_2,&UNK_141725790,7);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070b90(param_2," ");
            supplier_140070cc0(auStack_110);
            FUN_141349540(lVar7,auStack_110,0);
            supplier_1400bb340(param_2,auStack_110);
            FUN_140070e80(auStack_110);
          }
          break;
        }
      }
    }
    goto LAB_140d1fb6b;
  case 0x9c:
    pppplVar21 = (longlong ****)&UNK_141725c00;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x9d:
    FUN_140071040(param_2,&UNK_141725c20,8);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_1f0);
            FUN_141349540(lVar7,auStack_1f0,0);
            supplier_1400bb340(param_2,auStack_1f0);
            FUN_140070e80(auStack_1f0);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b5de;
  case 0x9e:
    pppplVar21 = (longlong ****)&UNK_141725c58;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0x9f:
    pppplVar21 = (longlong ****)&UNK_141725c40;
    ppplVar26 = (longlong ***)0x16;
    break;
  case 0xa0:
    pppplVar21 = (longlong ****)&UNK_141725578;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xa1:
    FUN_140071040(param_2,&UNK_141725bd8,7);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_230);
            FUN_141349540(lVar7,auStack_230,0);
            supplier_1400bb340(param_2,auStack_230);
            FUN_140070e80(auStack_230);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b5de;
  case 0xa2:
    FUN_140071040(param_2,&UNK_1417255a0,5);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_1d0);
            FUN_141349540(lVar7,auStack_1d0,0);
            supplier_1400bb340(param_2,auStack_1d0);
            FUN_140070e80(auStack_1d0);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b5de;
  case 0xa3:
    pppplVar21 = (longlong ****)&UNK_141725670;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0xa4:
    pppplVar21 = (longlong ****)&UNK_141725590;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 0xa5:
    pppplVar21 = (longlong ****)&UNK_1417255c0;
    goto code_r0x000140d1fb5c;
  case 0xa6:
    pppplVar21 = (longlong ****)&UNK_1417255a8;
    goto code_r0x000140d1fb5c;
  case 0xa7:
    pppplVar21 = (longlong ****)&UNK_141725608;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xa8:
    pppplVar21 = (longlong ****)&UNK_1417255f8;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xa9:
    pppplVar21 = (longlong ****)&UNK_1416c5d70;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0xaa:
    pppplVar21 = (longlong ****)&UNK_141725624;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xab:
    pppplVar21 = (longlong ****)&UNK_141725618;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xac:
    pppplVar21 = (longlong ****)&UNK_141725648;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0xad:
    pppplVar21 = (longlong ****)&UNK_1417256b0;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0xae:
    pppplVar21 = (longlong ****)&UNK_1417256f0;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xaf:
    pppplVar21 = (longlong ****)&UNK_1417256e0;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0xb0:
  case 0xb2:
    pppplVar21 = (longlong ****)&UNK_141725710;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0xb1:
  case 0xb3:
    pppplVar21 = (longlong ****)&UNK_141725700;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0xb4:
    pppplVar21 = (longlong ****)&UNK_141725568;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xb5:
    FUN_140071040(param_2,&UNK_141725660,9);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_1b0);
            FUN_141349540(lVar7,auStack_1b0,0);
            supplier_1400bb340(param_2,auStack_1b0);
            FUN_140070e80(auStack_1b0);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b5de;
  case 0xb6:
    pppplVar21 = (longlong ****)&UNK_141725698;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xb7:
    FUN_140071040(param_2,&UNK_141725770,10);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x1a) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_150);
            FUN_141349540(lVar7,auStack_150,0);
            supplier_1400bb340(param_2,auStack_150);
            FUN_140070e80(auStack_150);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b246;
  case 0xb8:
    pppplVar21 = (longlong ****)&UNK_1417263a8;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xb9:
    pppplVar21 = (longlong ****)&UNK_141725c78;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xba:
    pppplVar21 = (longlong ****)&UNK_141725af8;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xbb:
    pppplVar21 = (longlong ****)&UNK_141725b38;
    ppplVar26 = (longlong ***)0x14;
    break;
  case 0xbc:
    pppplVar21 = (longlong ****)&UNK_141725e10;
    ppplVar26 = (longlong ***)0xf;
    break;
  case 0xbd:
    pppplVar21 = (longlong ****)&UNK_141725b20;
    ppplVar26 = (longlong ***)0x14;
    break;
  case 0xbe:
    if (param_10 == -1) {
      supplier_140070b90(param_2,&UNK_141725cf0);
      goto LAB_140d1fb6b;
    }
    if ((param_14 != -1) && (param_15 != -1)) {
      supplier_140070b90(param_2,&UNK_1416315c4);
      supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar28 * 8) + 0x50);
      puVar19 = &UNK_141725cd8;
      goto code_r0x000140d1f287;
    }
    FUN_140071040(param_2,&UNK_141725cc8,0xb);
    pppplVar20 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar29 * 8) + 0x50);
code_r0x000140d1d288:
    pppplVar21 = pppplVar20;
    ppplVar26 = pppplVar20[2];
    if ((longlong ***)0xf < pppplVar20[3]) {
      pppplVar21 = (longlong ****)*pppplVar20;
    }
    break;
  case 0xbf:
    if (param_10 == -1) {
      supplier_140070b90(param_2,&UNK_141725d00);
      goto LAB_140d1fb6b;
    }
    if ((param_14 == -1) || (param_15 == -1)) {
      supplier_140070b90(param_2,&UNK_141725d10);
      supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar29 * 8) + 0x50);
      goto LAB_140d1fb6b;
    }
    supplier_140070b90(param_2,&UNK_1416315c4);
    supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar28 * 8) + 0x50);
    puVar19 = &UNK_141725ce8;
code_r0x000140d1f287:
    supplier_140070b90(param_2,puVar19);
    supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar29 * 8) + 0x50);
    supplier_140070b90(param_2,&UNK_1416315f0);
    supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar31 * 8) + 0x50);
    supplier_140070b90(param_2,&UNK_1416315e8);
    goto LAB_140d1fb6b;
  case 0xc0:
    FUN_140071040(param_2,&UNK_141725d54,4);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141725d4c;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xc1:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1de05:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1de05;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pppplVar21 = (longlong ****)&UNK_141726258;
        ppplVar26 = (longlong ***)0x5;
        break;
      }
    }
    pppplVar21 = (longlong ****)&UNK_141726270;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xc2:
    pppplVar21 = (longlong ****)&UNK_141726580;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0xc3:
    pppplVar21 = (longlong ****)&UNK_141725740;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0xc4:
    pppplVar21 = (longlong ****)&UNK_141725720;
    ppplVar26 = (longlong ***)0x18;
    break;
  case 0xc5:
    pppplVar21 = (longlong ****)&UNK_141725760;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0xc6:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417260e8;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 199:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417260e0;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 200:
    pppplVar21 = (longlong ****)&UNK_141725e98;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xc9:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726364;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xca:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726358;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0xcb:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726120;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0xcc:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726118;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0xcd:
    pppplVar21 = (longlong ****)&UNK_1417260f8;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xce:
    pppplVar21 = (longlong ****)&UNK_141725f98;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0xcf:
    pppplVar21 = (longlong ****)&UNK_1417255d8;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0xd0:
    pppplVar21 = (longlong ****)&UNK_1417255e8;
    ppplVar26 = (longlong ***)0xa;
    break;
  case 0xd1:
    puVar27 = param_8;
    if (0xf < (ulonglong)param_8[3]) {
      puVar27 = (undefined8 *)*param_8;
    }
    lVar7 = param_8[2];
    uVar28 = _DAT_1425196f0 - (longlong)_DAT_1425196e8 >> 3;
    puVar24 = _DAT_1425196e8;
    if (uVar28 != 0) {
      do {
        plVar30 = (longlong *)*puVar24;
        plVar18 = plVar30;
        if (0xf < (ulonglong)plVar30[3]) {
          plVar18 = (longlong *)*plVar30;
        }
        if ((lVar7 == plVar30[2]) &&
           (iVar15 = func_0x000141554864(puVar27,plVar18,lVar7), iVar15 == 0)) {
          if (puVar17[iVar6] != 0) {
            FUN_140070c00(apppuStack_290,puVar17[iVar6] + 0x20);
            FUN_140546b30(apppuStack_290);
            ppppuVar16 = apppuStack_290;
            if (0xf < uStack_278) {
              ppppuVar16 = (undefined8 ****)apppuStack_290[0];
            }
            FUN_140071040(param_2,ppppuVar16,uStack_280);
            FUN_140070e80(apppuStack_290);
            goto LAB_140d1fb6b;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        puVar24 = puVar24 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar28);
    }
    pppplVar21 = (longlong ****)&UNK_141725c68;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xd2:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141726348;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0xd3:
    if (((param_10 != -1) && (lVar7 = _DAT_14251c1a0 - _DAT_14251c198 >> 3, lVar7 != 0)) &&
       (iVar15 = (int)lVar7 + -1, -1 < iVar15)) {
      do {
        iVar13 = iVar15 + iVar6 >> 1;
        lVar7 = *(longlong *)(_DAT_14251c198 + (longlong)iVar13 * 8);
        if (*(int *)(lVar7 + 0xe0) == param_10) {
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0xaa) == '\0') {
              lVar8 = FUN_1400751a0(0x142407530,*(undefined4 *)(lVar7 + 0xd8));
              if (lVar8 == 0) {
                supplier_140070cc0(auStack_2d0);
                FUN_140abd670(*(undefined2 *)(lVar7 + 2),auStack_2d0,0,*(undefined2 *)(lVar7 + 4));
                supplier_1400bb340(param_2,auStack_2d0);
                puVar14 = auStack_2d0;
              }
              else {
                supplier_140070cc0(auStack_b0);
                FUN_141349540(lVar8,auStack_b0,0);
                supplier_1400bb340(param_2,auStack_b0);
                puVar14 = auStack_b0;
              }
            }
            else {
              supplier_140070cc0(auStack_d0);
              FUN_140aadad0(lVar7 + 0x38,auStack_d0);
              supplier_1400bb340(param_2,auStack_d0);
              puVar14 = auStack_d0;
            }
            FUN_140070e80(puVar14);
            supplier_140070b90(param_2,&UNK_141725870);
            goto LAB_140d1fb6b;
          }
          break;
        }
        iVar4 = iVar13 + -1;
        if (*(int *)(lVar7 + 0xe0) < param_10) {
          iVar4 = iVar15;
          iVar6 = iVar13 + 1;
        }
        iVar15 = iVar4;
      } while (iVar6 <= iVar15);
    }
    pppplVar21 = (longlong ****)&UNK_1416df300;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xd4:
    FUN_140071040(param_2,&UNK_141725aac,6);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x1b) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_250);
            FUN_141349540(lVar7,auStack_250,0);
            supplier_1400bb340(param_2,auStack_250);
            FUN_140070e80(auStack_250);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    goto code_r0x000140d1b246;
  case 0xd5:
    pppplVar21 = (longlong ****)&UNK_141725aa0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xd6:
    FUN_140071040(param_2,&UNK_141725688,0xc);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_190);
            FUN_141349540(lVar7,auStack_190,0);
            supplier_1400bb340(param_2,auStack_190);
            FUN_140070e80(auStack_190);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
code_r0x000140d1b5de:
    pppplVar21 = (longlong ****)&UNK_141725c10;
    ppplVar26 = (longlong ***)0xe;
    break;
  case 0xd7:
    pppplVar21 = (longlong ****)&UNK_1417256c0;
    ppplVar26 = (longlong ***)0x18;
    break;
  case 0xd8:
    lVar7 = FUN_1414c6fe0(0x1423f3970,param_6,param_7);
    if (lVar7 == 0) {
code_r0x000140d1d9d4:
      uVar25 = 5;
      puVar19 = &UNK_141657b40;
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto code_r0x000140d1d9d4;
      uVar25 = 6;
      puVar19 = &UNK_1417261a8;
    }
    FUN_140071040(param_2,puVar19,uVar25);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    iVar6 = (int)(lRam000000014250eff8 - lRam000000014250eff0 >> 3) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (*(short *)(*(longlong *)(lRam000000014250eff0 + lVar7 * 8) + 0x28) == sStack_2f8) {
          lVar7 = *(longlong *)(lRam000000014250eff0 + (longlong)iVar6 * 8);
          puVar17 = param_2;
          FUN_140071040(param_2," ",1);
          if (lVar7 == 0) goto code_r0x000140d1da88;
          plVar30 = (longlong *)(lVar7 + 0x68);
          pppuStack_2b0 = (undefined8 ***)0x0;
          lStack_2a8 = 0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          uVar28 = *(ulonglong *)(lVar7 + 0x78);
          if (0xf < *(ulonglong *)(lVar7 + 0x80)) {
            plVar30 = (longlong *)*plVar30;
          }
          if (0x7fffffffffffffff < uVar28) {
            puVar9 = (uint *)FUN_140066ec0();
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            cVar23 = (char)uVar28 + -0x2f;
            lVar7 = CONCAT62(0xcc00,CONCAT11(cVar23,0xf6));
            cVar5 = (char)puVar9 + cVar23;
            puVar10 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),cVar5);
            pcVar22 = (char *)((longlong)param_2 * 8 + 0x7fffffffffffffff);
            *pcVar22 = *pcVar22 + -10;
            *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
            uVar29 = ~CONCAT71((int7)((ulonglong)puVar17 >> 8),~(byte)puVar17);
            pcVar22 = (char *)((longlong)param_2 * 8 + 0x7fffffffffffffd0);
            *pcVar22 = *pcVar22 + (char)uVar28;
            cVar11 = (char)(uVar29 >> 8);
            *(char *)((longlong)param_2 + -9) = *(char *)((longlong)param_2 + -9) + cVar11;
            *puVar10 = *puVar10 << 1 | (uint)((int)*puVar10 < 0);
            pcVar22 = (char *)(lVar7 + -0x5bff2e09);
            *pcVar22 = *pcVar22 + -10;
            *(char *)((longlong)param_2 + 0x3800d1f7) =
                 *(char *)((longlong)param_2 + 0x3800d1f7) + cVar23;
            pcVar22 = (char *)(lVar7 + -0x25ff2e0b);
            *pcVar22 = *pcVar22 + -10;
            cVar5 = cVar5 + ~(byte)uVar29;
            cVar11 = (char)((ulonglong)puVar9 >> 8) + cVar11;
            puVar9 = (uint *)CONCAT62((int6)((ulonglong)puVar9 >> 0x10),CONCAT11(cVar11,cVar5));
            pcVar22 = (char *)CONCAT62(0xcc00,CONCAT11(cVar23 + ((byte)(uVar28 >> 8) ^ 0xd1),0xf6));
            *pcVar22 = *pcVar22 + cVar11;
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            uVar12 = (undefined7)((ulonglong)puVar9 >> 8);
            puVar9 = (uint *)(CONCAT71(uVar12,cVar5) ^ 0xf8);
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            puVar9 = (uint *)(CONCAT71(uVar12,(char)puVar9) ^ 0xf8);
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            *puVar9 = *puVar9 << 1 | (uint)((int)*puVar9 < 0);
            *apuStack_338[0] = *apuStack_338[0] << 1 | (uint)((int)*apuStack_338[0] < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar28 < 0x10) {
            uStack_298 = 0xf;
            pppuStack_2b0 = (undefined8 ***)*plVar30;
            lStack_2a8 = plVar30[1];
            uStack_2a0 = uVar28;
          }
          else {
            uVar31 = uVar28 | 0xf;
            uVar29 = 0x7fffffffffffffff;
            if ((uVar31 < 0x8000000000000000) && (uVar29 = uVar31, uVar31 < 0x16)) {
              uVar29 = 0x16;
            }
            pppuStack_2b0 = (undefined8 ***)FUN_140071e00(uVar29 + 1);
            uStack_2a0 = uVar28;
            uStack_298 = uVar29;
            func_0x00014155454e(pppuStack_2b0,plVar30,uVar28 + 1);
          }
          ppppuVar16 = &pppuStack_2b0;
          if (0xf < uStack_298) {
            ppppuVar16 = (undefined8 ****)pppuStack_2b0;
          }
          FUN_140071040(param_2,ppppuVar16,uStack_2a0);
          FUN_140070e80(&pppuStack_2b0);
          goto LAB_140d1fb6b;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_140071040(param_2," ",1);
code_r0x000140d1da88:
    pppplVar21 = (longlong ****)&UNK_1416eaf24;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0xd9:
    pppplVar21 = (longlong ****)&UNK_141725930;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0xda:
    pppplVar21 = (longlong ****)&UNK_141725918;
    ppplVar26 = (longlong ***)0x16;
    break;
  case 0xdb:
    pppplVar21 = (longlong ****)&UNK_141725948;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xdc:
    pppplVar21 = (longlong ****)&UNK_14161b640;
    ppplVar26 = (longlong ***)0xd;
    break;
  case 0xdd:
  case 0xef:
    pppplVar21 = (longlong ****)&UNK_141725fd0;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xde:
    pppplVar21 = (longlong ****)&UNK_141725fe0;
    ppplVar26 = (longlong ***)0xc;
    break;
  case 0xdf:
    pppplVar21 = (longlong ****)&UNK_141726048;
code_r0x000140d1fb5c:
    ppplVar26 = (longlong ***)0x10;
    break;
  case 0xe0:
    FUN_140071040(param_2,&UNK_14172637c,6);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_50);
            FUN_141349540(lVar7,auStack_50,0);
            supplier_1400bb340(param_2,auStack_50);
            FUN_140070e80(auStack_50);
          }
          break;
        }
      }
      goto LAB_140d1fb6b;
    }
    goto code_r0x000140d1b246;
  case 0xe1:
    pppplVar21 = (longlong ****)&UNK_141725eb0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xe2:
    pppplVar21 = (longlong ****)&UNK_141726060;
    ppplVar26 = (longlong ***)0x12;
    break;
  case 0xe3:
    pppplVar21 = (longlong ****)&UNK_141726020;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xe4:
    pppplVar21 = (longlong ****)&UNK_141726470;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xe5:
    FUN_140071040(param_2,&UNK_141725798,5);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x3b) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_130);
            FUN_141349540(lVar7,auStack_130,0);
            supplier_1400bb340(param_2,auStack_130);
            FUN_140070e80(auStack_130);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
code_r0x000140d1b246:
    pppplVar21 = (longlong ****)&UNK_1416c189c;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xe6:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257c8;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0xe7:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257c0;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0xe8:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257e0;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xe9:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257d4;
    ppplVar26 = (longlong ***)0x6;
    break;
  case 0xea:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257fc;
    ppplVar26 = (longlong ***)0x5;
    break;
  case 0xeb:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1417257f0;
    ppplVar26 = (longlong ***)0x8;
    break;
  case 0xec:
    FUN_140071040(param_2,&UNK_141657b40,5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_141725818;
    ppplVar26 = (longlong ***)0x9;
    break;
  case 0xed:
    FUN_140071040(param_2,&UNK_141725808,0xb);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
    pppplVar21 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar21 = (longlong ****)ppplStack_2f0;
    }
    FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    pppplVar21 = (longlong ****)&UNK_1416f06c0;
    ppplVar26 = (longlong ***)0x4;
    break;
  case 0xee:
    pppplVar21 = (longlong ****)&UNK_141725630;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xf0:
    FUN_140071040(param_2,&UNK_141725c30,0xc);
    if (param_12 != 0) {
      puVar27 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar17 = *(undefined8 **)(param_12 + 0xb0); puVar17 < puVar27; puVar17 = puVar17 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar17 + 0x10))();
        if (iVar6 == 0x45) {
          lVar7 = (**(code **)(*(longlong *)*puVar17 + 0x20))();
          if (lVar7 != 0) {
            supplier_140070cc0(auStack_210);
            FUN_141349540(lVar7,auStack_210,0);
            supplier_1400bb340(param_2,auStack_210);
            FUN_140070e80(auStack_210);
            goto LAB_140d1fb6b;
          }
          break;
        }
      }
    }
    pppplVar21 = (longlong ****)&UNK_14168e058;
    ppplVar26 = (longlong ***)0x7;
    break;
  case 0xf1:
    pppplVar21 = (longlong ****)&UNK_141725ff0;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xf2:
    pppplVar21 = (longlong ****)&UNK_1417264c0;
    ppplVar26 = (longlong ***)0x15;
    break;
  case 0xf3:
    FUN_140071040(param_2,&UNK_14163171c,4);
    if ((-1 < param_7) &&
       ((ulonglong)(longlong)param_7 < (ulonglong)(lRam0000000142519540 - _DAT_142519538 >> 3))) {
      supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + (longlong)param_7 * 8) + 0x50);
      supplier_140070b90(param_2," ");
    }
    FUN_140071040(param_2,&UNK_141725d3c,3);
    if ((param_14 != -1) && (param_15 != -1)) {
      supplier_140070b90(param_2,&UNK_1416315f0);
      if ((-1 < param_14) && (uVar28 < (ulonglong)(lRam0000000142519540 - _DAT_142519538 >> 3))) {
        supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar28 * 8) + 0x50);
      }
      supplier_140070b90(param_2," and ");
      if ((-1 < param_15) && (uVar31 < (ulonglong)(lRam0000000142519540 - _DAT_142519538 >> 3))) {
        supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar31 * 8) + 0x50);
      }
    }
    goto LAB_140d1fb6b;
  case 0xf4:
    if (param_10 != -1) {
      if ((param_14 != -1) && (param_15 != -1)) {
        supplier_140070b90(param_2,&UNK_1416315c4);
        supplier_1400bb340(param_2,*(longlong *)(_DAT_142519538 + uVar28 * 8) + 0x50);
        puVar19 = &UNK_141725d30;
        goto code_r0x000140d1f287;
      }
      supplier_140070b90(param_2,&UNK_141725d20);
      pppplVar20 = (longlong ****)(*(longlong *)(_DAT_142519538 + uVar29 * 8) + 0x50);
      goto code_r0x000140d1d288;
    }
    pppplVar21 = (longlong ****)&UNK_141725d40;
    ppplVar26 = (longlong ***)0xb;
    break;
  case 0xf5:
    FUN_140071040(param_2,&UNK_1417262d4,4);
    if ((param_11 & 2) == 0) {
      FUN_140071040(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      FUN_1414eab90(0x1423f3970,&ppplStack_2f0,param_6,param_7);
      pppplVar21 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar21 = (longlong ****)ppplStack_2f0;
      }
      FUN_140071040(param_2,pppplVar21,pplStack_2e0);
    }
    pppplVar21 = (longlong ****)&UNK_141726310;
    ppplVar26 = (longlong ***)0x13;
    break;
  case 0xf6:
    pppplVar21 = (longlong ****)&UNK_141726538;
    ppplVar26 = (longlong ***)0x11;
    break;
  case 0xf7:
    pppplVar21 = (longlong ****)&UNK_141726590;
    ppplVar26 = (longlong ***)0x11;
  }
  FUN_140071040(param_2,pppplVar21,ppplVar26);
LAB_140d1fb6b:
  if (0xf < uStack_2d8) {
    uVar28 = uStack_2d8 + 1;
    pppplVar21 = (longlong ****)ppplStack_2f0;
    if (0xfff < uVar28) {
      uVar28 = uStack_2d8 + 0x28;
      pppplVar21 = (longlong ****)ppplStack_2f0[-1];
      if (0x1f < (ulonglong)((longlong)ppplStack_2f0 + (-8 - (longlong)pppplVar21))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    supplier_1415530d0(pppplVar21,uVar28);
  }
  FUN_1415530b0(uStack_30 ^ (ulonglong)apuStack_338);
  return;
}

