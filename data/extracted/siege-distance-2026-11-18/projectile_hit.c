/* Actual Ghidra output, research name; VA 0x140663940..0x14066cca2. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void projectile_hit(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,int *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  int *piVar25;
  ulonglong uVar26;
  undefined2 *puVar27;
  longlong lVar28;
  short *psVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  uint *puVar32;
  ushort *puVar33;
  byte *pbVar34;
  undefined1 uVar35;
  undefined *puVar36;
  short sVar37;
  uint uVar38;
  short sVar39;
  int iVar40;
  undefined4 *puVar41;
  int iVar42;
  uint uVar43;
  undefined8 uVar44;
  ulonglong in_R10;
  byte bVar45;
  ushort uVar46;
  bool bVar48;
  bool bVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined8 unaff_XMM7_Qa;
  double dVar52;
  undefined8 unaff_XMM7_Qb;
  longlong lStackX_8;
  undefined4 auStackX_10 [4];
  byte abStackX_20 [4];
  int iStackX_24;
  int iStack_1044;
  short asStack_1040 [2];
  short asStack_103c [2];
  uint uStack_1038;
  char cStack_1034;
  undefined4 *puStack_1030;
  short asStack_1028 [2];
  short asStack_1024 [2];
  ushort uStack_1020;
  int iStack_101c;
  uint uStack_1018;
  short asStack_1014 [2];
  uint uStack_1010;
  undefined1 auStack_1008 [8];
  undefined1 auStack_1000 [8];
  undefined1 uStack_ff8;
  undefined1 uStack_ff7;
  undefined1 uStack_ff6;
  undefined1 uStack_ff5;
  undefined1 uStack_ff4;
  undefined1 uStack_ff3;
  undefined1 uStack_ff2;
  undefined1 uStack_ff1;
  undefined1 uStack_ff0;
  undefined1 uStack_fef;
  undefined1 uStack_fee;
  undefined1 uStack_fed;
  undefined1 auStack_fec [2];
  short sStack_fea;
  short asStack_fe8 [2];
  int iStack_fe4;
  ulonglong uStack_fe0;
  undefined4 *puStack_fd8;
  uint uStack_fd0;
  undefined4 uStack_fcc;
  undefined4 *puStack_fc8;
  ulonglong uStack_fc0;
  short sStack_fb8;
  short sStack_fb6;
  undefined2 auStack_fb4 [2];
  ushort auStack_fb0 [4];
  undefined1 auStack_fa8 [24];
  undefined1 auStack_f90 [8];
  int iStack_f88;
  undefined4 uStack_f84;
  undefined1 auStack_f80 [8];
  undefined1 auStack_f78 [8];
  undefined1 auStack_f70 [8];
  undefined1 auStack_f68 [8];
  undefined1 auStack_f60 [8];
  longlong alStack_f58 [3];
  undefined1 auStack_f40 [8];
  undefined1 auStack_f38 [8];
  undefined1 auStack_f30 [8];
  undefined1 auStack_f28 [8];
  undefined1 auStack_f20 [8];
  undefined1 auStack_f18 [8];
  undefined1 auStack_f10 [8];
  undefined1 auStack_f08 [4];
  int iStack_f04;
  int iStack_f00;
  int iStack_efc;
  int iStack_ef8;
  int iStack_ef4;
  undefined4 uStack_ef0;
  int iStack_eec;
  undefined4 uStack_ee8;
  int iStack_ee4;
  undefined1 auStack_ee0 [24];
  undefined2 uStack_ec8;
  undefined2 uStack_ec6;
  undefined1 uStack_ec4;
  undefined2 uStack_ec2;
  undefined2 uStack_ec0;
  undefined2 uStack_ebe;
  undefined2 uStack_eac;
  undefined4 *puStack_ea8;
  undefined4 *puStack_ea0;
  uint uStack_e8c;
  undefined2 uStack_e78;
  undefined2 uStack_e76;
  undefined1 uStack_e74;
  undefined2 uStack_e72;
  undefined2 uStack_e70;
  undefined2 uStack_e6e;
  undefined2 uStack_e5c;
  undefined4 *puStack_e58;
  undefined4 *puStack_e50;
  uint uStack_e3c;
  undefined2 uStack_e28;
  undefined2 uStack_e26;
  undefined1 uStack_e24;
  undefined2 uStack_e22;
  undefined2 uStack_e20;
  undefined2 uStack_e1e;
  undefined2 uStack_e0c;
  undefined4 *puStack_e08;
  undefined4 *puStack_e00;
  uint uStack_dec;
  undefined2 uStack_dd8;
  undefined2 uStack_dd6;
  undefined1 uStack_dd4;
  undefined2 uStack_dd2;
  undefined2 uStack_dd0;
  undefined2 uStack_dce;
  undefined2 uStack_dbc;
  undefined4 *puStack_db8;
  undefined4 *puStack_db0;
  uint uStack_d9c;
  undefined2 uStack_d88;
  undefined2 uStack_d86;
  undefined1 uStack_d84;
  undefined2 uStack_d82;
  undefined2 uStack_d80;
  undefined2 uStack_d7e;
  undefined2 uStack_d6c;
  undefined4 *puStack_d68;
  undefined4 *puStack_d60;
  uint uStack_d4c;
  undefined2 uStack_d38;
  undefined2 uStack_d36;
  undefined1 uStack_d34;
  undefined2 uStack_d32;
  undefined2 uStack_d30;
  undefined2 uStack_d2e;
  undefined2 uStack_d1c;
  undefined4 *puStack_d18;
  undefined4 *puStack_d10;
  uint uStack_cfc;
  undefined2 uStack_ce8;
  undefined2 uStack_ce6;
  undefined1 uStack_ce4;
  undefined2 uStack_ce2;
  undefined2 uStack_ce0;
  undefined2 uStack_cde;
  undefined2 uStack_ccc;
  undefined8 uStack_cc8;
  undefined4 *puStack_cc0;
  uint uStack_cac;
  undefined2 uStack_c98;
  undefined2 uStack_c96;
  undefined1 uStack_c94;
  undefined2 uStack_c92;
  undefined2 uStack_c90;
  undefined2 uStack_c8e;
  undefined2 uStack_c7c;
  undefined4 *puStack_c78;
  undefined4 *puStack_c70;
  uint uStack_c5c;
  undefined1 auStack_c48 [8];
  undefined1 auStack_c40 [8];
  undefined1 auStack_c38 [8];
  undefined1 auStack_c30 [8];
  undefined1 auStack_c28 [8];
  undefined1 auStack_c20 [8];
  undefined1 auStack_c18 [8];
  undefined1 auStack_c10 [8];
  undefined1 auStack_c08 [8];
  undefined1 auStack_c00 [8];
  undefined1 auStack_bf8 [8];
  undefined1 auStack_bf0 [8];
  undefined1 auStack_be8 [8];
  undefined1 auStack_be0 [8];
  undefined1 auStack_bd8 [8];
  undefined1 auStack_bd0 [24];
  undefined1 auStack_bb8 [24];
  undefined1 auStack_ba0 [24];
  undefined1 auStack_b88 [24];
  undefined1 auStack_b70 [24];
  undefined4 uStack_b58;
  undefined1 uStack_b54;
  undefined2 uStack_b52;
  undefined2 uStack_b50;
  undefined2 uStack_b4e;
  undefined2 uStack_b3c;
  undefined4 *puStack_b38;
  undefined4 *puStack_b30;
  uint uStack_b1c;
  undefined4 uStack_b08;
  undefined1 uStack_b04;
  undefined2 uStack_b02;
  undefined2 uStack_b00;
  undefined2 uStack_afe;
  undefined2 uStack_aec;
  undefined4 *puStack_ae8;
  undefined4 *puStack_ae0;
  uint uStack_acc;
  undefined4 uStack_ab8;
  undefined1 uStack_ab4;
  undefined2 uStack_ab2;
  undefined2 uStack_ab0;
  undefined2 uStack_aae;
  undefined2 uStack_a9c;
  undefined4 *puStack_a98;
  undefined4 *puStack_a90;
  uint uStack_a7c;
  undefined4 uStack_a68;
  undefined1 uStack_a64;
  undefined2 uStack_a62;
  undefined2 uStack_a60;
  undefined2 uStack_a5e;
  undefined2 uStack_a4c;
  undefined4 *puStack_a48;
  undefined4 *puStack_a40;
  uint uStack_a2c;
  undefined4 uStack_a18;
  undefined1 uStack_a14;
  undefined2 uStack_a12;
  undefined2 uStack_a10;
  undefined2 uStack_a0e;
  undefined2 uStack_9fc;
  undefined4 *puStack_9f8;
  undefined4 *puStack_9f0;
  uint uStack_9dc;
  undefined1 auStack_9c8 [32];
  undefined4 uStack_9a8;
  undefined1 uStack_9a4;
  undefined2 uStack_9a2;
  undefined2 uStack_9a0;
  undefined2 uStack_99e;
  undefined2 uStack_98c;
  undefined4 *puStack_988;
  undefined4 *puStack_980;
  undefined4 uStack_958;
  undefined1 uStack_954;
  undefined2 uStack_952;
  undefined2 uStack_950;
  undefined2 uStack_94e;
  undefined2 uStack_93c;
  undefined4 *puStack_930;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_8fc;
  undefined4 auStack_8d8 [3];
  undefined4 uStack_8cc;
  undefined4 auStack_8a8 [3];
  undefined4 uStack_89c;
  undefined1 auStack_878 [208];
  int aiStack_7a8 [2];
  undefined1 auStack_7a0 [24];
  undefined1 auStack_788 [24];
  longlong *plStack_770;
  short sStack_768;
  longlong lStack_760;
  undefined1 auStack_758 [32];
  undefined1 auStack_738 [32];
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  int iStack_678;
  int iStack_674;
  int iStack_670;
  int iStack_66c;
  undefined2 uStack_668;
  undefined4 uStack_664;
  undefined2 uStack_660;
  int iStack_65c;
  undefined2 uStack_658;
  undefined1 auStack_648 [32];
  undefined1 auStack_628 [32];
  undefined1 auStack_608 [32];
  undefined1 auStack_5e8 [32];
  undefined1 auStack_5c8 [32];
  undefined1 auStack_5a8 [32];
  undefined2 auStack_588 [2];
  undefined4 uStack_584;
  short sStack_574;
  undefined1 auStack_568 [32];
  undefined1 auStack_548 [32];
  undefined1 auStack_528 [64];
  uint uStack_4e8;
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
  undefined2 auStack_178 [16];
  undefined1 auStack_158 [128];
  uint uStack_d8;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  ulonglong uStack_68;
  undefined8 uStack_48;
  uint uVar47;
  
  uStack_48 = 0x14066395f;
  lVar16 = FUN_141554810();
  lVar16 = -lVar16;
  *(undefined8 *)(&stack0x00001030 + lVar16) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001038 + lVar16) = unaff_XMM7_Qb;
  uStack_68 = _DAT_1418be040 ^ (ulonglong)(&stack0xffffffffffffffc0 + lVar16);
  *(int **)(&stack0x00000030 + lVar16) = param_4;
  *(ulonglong *)(&stack0x00000038 + lVar16) = param_3;
  puStack_fd8 = param_1;
  puStack_fc8 = param_2;
  if (param_2 == (undefined4 *)0x0) goto LAB_14066cc77;
  if (param_4 == (int *)0x0) {
    uStack_1038 = 0;
  }
  else {
    uStack_1038 = param_4[0xf] & 0x4000;
  }
  if (DAT_1418f935f != '\0') {
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406639cd;
    cVar7 = callee_1413a7620(param_2);
    if (cVar7 != '\0') goto LAB_14066cc77;
  }
  if (((param_2[0x44] & 0x2000002) != 0) || ((param_2[0x46] & 0x1000) != 0)) goto LAB_14066cc77;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x18) != 0)) {
    pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x2a8);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663a2e;
    cVar7 = (*pcVar5)();
    if (cVar7 == '\0') {
      if (_DAT_1418be238 == 0) {
        uVar19 = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663a45;
        cVar7 = callee_1413a7620(uVar19);
        if (cVar7 == '\0') {
LAB_140663a55:
          if ((*(uint *)(param_3 + 0x48) & 0x20000) == 0) {
            uVar44 = 6;
            if ((param_2[0x46] & 0x400000) == 0) {
              uVar44 = 5;
            }
            uVar19 = *(undefined8 *)(param_3 + 0x18);
            goto LAB_140663a9c;
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663a51;
          cVar7 = callee_1413a7620(param_2);
          if (cVar7 == '\0') goto LAB_140663a55;
        }
        uVar44 = 3;
        uVar19 = *(undefined8 *)(param_3 + 0x18);
      }
      else {
        uVar19 = *(undefined8 *)(param_3 + 0x18);
        uVar44 = 6;
        if ((param_2[0x46] & 0x400000) == 0) {
          uVar44 = 5;
        }
      }
LAB_140663a9c:
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663aab;
      FUN_1414fc5c0(0x1423f3970,uVar19,param_2,uVar44);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = *(undefined2 *)(param_2 + 0x2b);
    *(undefined2 *)(&stack0xffffffffffffffe8 + lVar16) = *(undefined2 *)((longlong)param_2 + 0xaa);
    *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = *(undefined2 *)(param_2 + 0x2a);
    uVar10 = *(undefined2 *)(param_1 + 0x2b);
    uVar1 = *(undefined2 *)((longlong)param_1 + 0xaa);
    uVar2 = *(undefined2 *)(param_1 + 0x2a);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663afe;
    cVar7 = FUN_141465cd0(0x1423f3970,uVar2,uVar1,uVar10);
    if (cVar7 == '\0') {
      if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663b39;
        cVar7 = callee_14007f460(0x1423b3120,0xb8,1);
        if (cVar7 != '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663b4d;
          callee_140070cc0(auStack_398);
          (&stack0xffffffffffffffe0)[lVar16] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663b68;
          FUN_141346d40(param_2,auStack_398,1,1);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663b7b;
          callee_140070b90(auStack_398,&UNK_141683508);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663b87;
          callee_14007f210(&uStack_9a8);
          uStack_9a8 = 0x700b8;
          uStack_9a4 = 1;
          uStack_98c = 100;
          uStack_9a2 = *(undefined2 *)(param_2 + 0x2a);
          uStack_9a0 = *(undefined2 *)((longlong)param_2 + 0xaa);
          uStack_99e = *(undefined2 *)(param_2 + 0x2b);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663bf8;
          puStack_988 = param_1;
          puStack_980 = param_2;
          FUN_1400e5250(0x142505cd0,auStack_398,&uStack_9a8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663c05;
          callee_140069460(auStack_398);
        }
      }
      goto LAB_14066cc77;
    }
    iVar11 = param_2[0x479];
    if (-1 < iVar11 + -1) {
      lVar17 = (longlong)(iVar11 + -1);
      piVar25 = param_2 + lVar17 + 0x3b1;
      do {
        if (*piVar25 == param_1[0x4c]) goto LAB_140663c5c;
        piVar25 = piVar25 + -1;
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
      if (199 < iVar11) goto LAB_140663c5c;
    }
    param_2[(longlong)iVar11 + 0x3b1] = param_1[0x4c];
    param_2[0x479] = param_2[0x479] + 1;
  }
LAB_140663c5c:
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663c68;
  FUN_14065b3e0(aiStack_7a8);
  if (param_4 == (int *)0x0) {
LAB_140663cb0:
    sVar37 = *(short *)(param_2 + 0x2a);
    sVar39 = *(short *)(param_2 + 0x2b);
    if (param_3 == 0) {
      sVar3 = *(short *)(param_1 + 0x2a);
      sVar9 = *(short *)((longlong)param_1 + 0xaa);
      sVar4 = *(short *)(param_1 + 0x2b);
    }
    else {
      sVar3 = *(short *)(param_3 + 0x32);
      sVar9 = *(short *)(param_3 + 0x34);
      sVar4 = *(short *)(param_3 + 0x36);
    }
    uVar46 = *(short *)((longlong)param_2 + 0xaa) - sVar9;
    uVar38 = (uint)uVar46;
    uVar47 = (uint)uVar46;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d0c;
    uStack_1020 = uVar46;
    sStack_fea = sVar37 - sVar3;
    callee_140070cc0(auStack_628);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d19;
    callee_140070cc0(auStack_5e8);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d26;
    callee_140070cc0(auStack_4b8);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d33;
    callee_140070cc0(auStack_498);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d40;
    callee_140070cc0(auStack_478);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d4d;
    callee_140070cc0(auStack_458);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d5a;
    callee_140070cc0(auStack_648);
    if (param_3 == 0) {
      (&stack0xffffffffffffffe0)[lVar16] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663d87;
      FUN_141346d40(param_1,auStack_628,1);
      if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663dac;
        callee_140070bb0(auStack_4b8,&UNK_1416044e8);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663dc1;
        FUN_140070bd0(auStack_4b8,auStack_628);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663dd4;
        callee_140070b90(auStack_4b8,&UNK_1416044e4);
      }
      if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
        puVar36 = &UNK_141603f10;
        goto LAB_140663ed6;
      }
      uVar35 = *(undefined1 *)((longlong)param_1 + 0x12e);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e08;
      FUN_140abe1d0(uVar35,auStack_478,1);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e19;
      callee_140070cc0(auStack_1f8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e2d;
      callee_140070bb0(auStack_628,&UNK_141608c3c);
      pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x2a8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e3e;
      cVar7 = (*pcVar5)();
      if (cVar7 == '\0') {
        pcVar5 = *(code **)**(undefined8 **)(param_3 + 0x98);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e4f;
        sVar9 = (*pcVar5)();
        if (sVar9 == 0x27) goto LAB_140663e6f;
        pcVar5 = *(code **)**(undefined8 **)(param_3 + 0x98);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e62;
        sVar9 = (*pcVar5)();
        puVar36 = &UNK_1416097a8;
        if (sVar9 == 0x41) goto LAB_140663e6f;
      }
      else {
LAB_140663e6f:
        puVar36 = &UNK_1416097c0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e82;
      callee_140070b90(auStack_628,puVar36);
      uVar19 = *(undefined8 *)(param_3 + 0x98);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663e9c;
      FUN_140c7d140(uVar19,auStack_1f8,0);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663eaf;
      callee_1400bb340(auStack_628,auStack_1f8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663ec2;
      callee_140070bb0(auStack_4b8,&UNK_1416097b4);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663ecf;
      callee_140069460(auStack_1f8);
      puVar36 = &UNK_1416097b8;
LAB_140663ed6:
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663ee2;
      callee_140070bb0(auStack_478,puVar36);
    }
    (&stack0xffffffffffffffe0)[lVar16] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663eff;
    FUN_141346d40(param_2,auStack_5e8,1);
    if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663f24;
      callee_140070bb0(auStack_498,&UNK_1416044e8);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663f39;
      FUN_140070bd0(auStack_498,auStack_5e8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663f4c;
      callee_140070b90(auStack_498,&UNK_1416044e4);
    }
    if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663f71;
      callee_140070bb0(auStack_458,&UNK_141603f10);
    }
    else {
      uVar35 = *(undefined1 *)((longlong)param_2 + 0x12e);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663f8a;
      FUN_140abe1d0(uVar35,auStack_458,1);
    }
    if (param_3 != 0) {
      if ((*(int *)(param_3 + 0x68) != param_2[0x4c]) ||
         (sStack_768 = *(short *)(param_3 + 0x6c), sStack_768 == -1)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663fb5;
        sStack_768 = FUN_14139bf40(param_2);
      }
      plStack_770 = *(longlong **)(param_3 + 0x98);
      aiStack_7a8[0] = *(int *)(param_3 + 0x58);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663fe9;
      callee_140070bb0(auStack_758,&UNK_141683130);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663ff3;
      iStack_65c = FUN_140073560(0x65);
      iStack_65c = iStack_65c + *(int *)(param_3 + 0x50);
      pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x438);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066400f;
      lVar17 = (*pcVar5)();
      if (lVar17 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664023;
        lVar18 = callee_140070480(lVar17);
        if (lVar18 != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664034;
          uVar19 = callee_140070480(lVar17);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066403c;
          iVar11 = FUN_140073560(uVar19);
          lVar18 = (longlong)iVar11;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066404a;
          puVar20 = (undefined8 *)callee_140070850(lVar17,lVar18);
          if (*(char *)*puVar20 == '\0') {
            iStack_678 = 0;
          }
          else {
            pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x538);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664063;
            iStack_678 = (*pcVar5)();
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664080;
          plVar21 = (longlong *)callee_140070850(lVar17,lVar18);
          iStack_674 = *(int *)(*plVar21 + 4);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664097;
          plVar21 = (longlong *)callee_140070850(lVar17,lVar18);
          iStack_670 = *(int *)(*plVar21 + 8);
          goto LAB_1406640a3;
        }
      }
      pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x538);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664109;
      iStack_678 = (*pcVar5)();
      pcVar5 = *(code **)(**(longlong **)(param_3 + 0x98) + 0x2c0);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664120;
      iVar11 = (*pcVar5)();
      dVar52 = (double)iVar11;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664140;
      dVar50 = (double)callee_1415548c4(dVar52 * 10.0,0x3fd54fdf3b645a1d);
      iStack_670 = (int)(dVar50 * 10.0);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664162;
      dVar50 = (double)callee_1415548c4();
      iStack_674 = (int)dVar50;
      pcVar5 = *(code **)**(undefined8 **)(param_3 + 0x98);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664179;
      sVar37 = (*pcVar5)();
      if ((sVar37 == 0x4c) && (0 < iStack_678)) {
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        if (dVar52 <= 5.0) {
          iStack_674 = (int)dVar52;
        }
        else {
          iStack_674 = 5;
        }
      }
      else {
LAB_1406640a3:
        uVar47 = uVar38;
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      }
LAB_1406640a8:
      bVar6 = false;
      bVar49 = false;
      if (((_DAT_1418be238 == 0) && (param_3 == 0)) && (*(short *)(param_2 + 0x200) < 1)) {
        bVar48 = true;
        if (*(longlong *)(param_2 + 0x136) != 0) {
          bVar48 = *(short *)(param_2 + 0xd8) == -1;
        }
        sVar37 = *(short *)(param_2 + 0xd8);
        if ((((sVar37 != 7) && (4 < sVar37)) && (sVar37 < 10)) ||
           ((ushort)(*(short *)(param_2 + 0x205) - 3U) < 2)) {
          bVar48 = false;
        }
        if (lVar17 != 0) {
          if ((*(uint *)(lVar17 + 0x3c) & 0x2000) != 0) {
            bVar48 = false;
          }
          if ((*(uint *)(lVar17 + 0x3c) & 0x4000) != 0) goto LAB_140665b4c;
        }
        if (bVar48) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665aa1;
          cVar7 = callee_1413a7620();
          bVar49 = bVar6;
          if (cVar7 != '\0') {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665ab6;
            cVar7 = callee_140074860(param_2,0x3a);
            if ((cVar7 != '\0') &&
               ((*(longlong *)(param_1 + 0x360) != 0 || ((param_1[0x46] & 0x1000) != 0)))) {
              uVar12 = param_1[0x30d];
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665ae9;
              lVar17 = FUN_1400693f0(0x14251c138,uVar12);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665af4;
              lVar18 = callee_1413cc070(param_2);
              uVar12 = 0xffffffff;
              if ((lVar17 != 0) && (uVar12 = 0xffffffff, lVar18 != 0)) {
                uVar12 = *(undefined4 *)(lVar17 + 0xe0);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665b0c;
                uVar12 = FUN_140bcabf0(lVar18,uVar12);
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665b1a;
              callee_140073b40(&uStack_908);
              uStack_908 = 0x86;
              uStack_8fc = 100;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665b43;
              uStack_904 = uVar12;
              callee_141408f60(param_2,&uStack_908);
              bVar49 = true;
            }
          }
        }
      }
LAB_140665b4c:
      if ((*(longlong *)(param_2 + 0x124) == 0) && (_DAT_1418be238 == 0)) {
        if (((param_3 == 0) && (*(short *)(param_2 + 0x200) < 1)) && (!bVar49)) {
          bVar49 = true;
          if (*(longlong *)(param_2 + 0x136) != 0) {
            bVar49 = *(short *)(param_2 + 0xd8) == -1;
          }
          sVar37 = *(short *)(param_2 + 0xd8);
          if ((((sVar37 != 7) && (4 < sVar37)) && (sVar37 < 10)) ||
             ((ushort)(*(short *)(param_2 + 0x205) - 3U) < 2)) {
            bVar49 = false;
          }
          lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
          if (lVar17 != 0) {
            if ((*(uint *)(lVar17 + 0x3c) & 0x2000) != 0) {
              bVar49 = false;
            }
            if ((*(uint *)(lVar17 + 0x3c) & 0x4000) != 0) goto LAB_140665d9d;
          }
          if (bVar49) {
            if (*(undefined4 **)(param_2 + 0x124) != param_1) {
              *(undefined4 **)(param_2 + 0x124) = param_1;
              param_2[0x126] = 0;
            }
            (&stack0xffffffffffffffe0)[lVar16] = 0;
            uVar10 = *(undefined2 *)(param_1 + 0x2b);
            uVar1 = *(undefined2 *)((longlong)param_1 + 0xaa);
            uVar2 = *(undefined2 *)(param_1 + 0x2a);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665c3b;
            cVar7 = FUN_1413bd210(param_2,uVar2,uVar1,uVar10);
            if (cVar7 != '\0') {
              *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 3;
              uVar10 = *(undefined2 *)(param_1 + 0x2b);
              uVar1 = *(undefined2 *)((longlong)param_1 + 0xaa);
              uVar2 = *(undefined2 *)(param_1 + 0x2a);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665c66;
              FUN_140074ea0(param_2,uVar2,uVar1,uVar10);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665c72;
            callee_140073b40(auStack_8a8);
            auStack_8a8[0] = 0x85;
            uStack_89c = 100;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665c95;
            callee_141408f60(param_2,auStack_8a8);
          }
        }
      }
      else if (((_DAT_1418be238 == 1) && (!bVar49)) &&
              ((((param_1 == _DAT_142407590 || (param_2 == _DAT_142407590)) &&
                (lVar17 = *(longlong *)(_DAT_142407590 + 0x2a6), lVar17 != 0)) &&
               (*(short *)(_DAT_142407590 + 0x200) < 1)))) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665cef;
        callee_140070870(lVar17 + 0x380,auStack_f78);
        lVar17 = *(longlong *)(_DAT_142407590 + 0x2a6);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d10;
        callee_140070860(lVar17 + 0x380,auStack_c18);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d24;
        puVar24 = (undefined1 *)callee_140070450(auStack_f78,&uStack_ff6,auStack_c18);
        uVar35 = *puVar24;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d2e;
        cVar7 = callee_140066de0(uVar35,0);
        while (cVar7 != '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d3b;
          puVar20 = (undefined8 *)callee_140070440(auStack_f78);
          if ((*(int *)*puVar20 == 5) || (*(int *)*puVar20 == 0x16)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d53;
            plVar21 = (longlong *)callee_140070440(auStack_f78);
            *(undefined4 *)(*plVar21 + 8) = 400;
            *(uint *)(*(longlong *)(_DAT_142407590 + 0x2a6) + 0x398) =
                 *(uint *)(*(longlong *)(_DAT_142407590 + 0x2a6) + 0x398) & 0xfffffffe;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d7b;
          callee_140070430(auStack_f78);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d8f;
          puVar24 = (undefined1 *)callee_140070450(auStack_f78,&uStack_ff6,auStack_c18);
          uVar35 = *puVar24;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665d99;
          cVar7 = callee_140066de0(uVar35,0);
        }
      }
LAB_140665d9d:
      cStack_1034 = '\x02';
      if (param_1 != (undefined4 *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665db1;
        cStack_1034 = FUN_141405bf0(param_2,param_1);
      }
      iStack_101c = 0;
      *(undefined4 *)(&stack0x00000028 + lVar16) = 0;
      iStack_1044 = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665dc9;
      callee_140067130(alStack_f58);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665dd6;
      callee_140067130(auStack_ee0);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665de0;
      callee_140067130(auStack_fa8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665ded;
      callee_140067130(auStack_bd0);
      uStack_1018 = uVar47 & 0xffffff00;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665e01;
      callee_140067130(auStack_bb8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665e0e;
      callee_140067130(auStack_9c8);
      sVar39 = -1;
      sVar37 = -1;
      do {
        if ((sVar39 != 0) || (sVar37 != 0)) {
          sVar3 = *(short *)((longlong)param_2 + 0xaa);
          sVar9 = *(short *)(param_2 + 0x2a);
          (&stack0xfffffffffffffff0)[lVar16] = 0xff;
          (&stack0xffffffffffffffe8)[lVar16] = 1;
          (&stack0xffffffffffffffe0)[lVar16] = 0;
          uVar10 = *(undefined2 *)(param_2 + 0x2b);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665e5f;
          cVar7 = FUN_1414e2e50(0x1423f3970,sVar39 + sVar9,sVar37 + sVar3,uVar10);
          if (cVar7 != '\0') {
            sVar3 = *(short *)((longlong)param_2 + 0xaa);
            sVar9 = *(short *)(param_2 + 0x2a);
            uVar10 = *(undefined2 *)(param_2 + 0x2b);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665e8e;
            uVar23 = callee_140069640(0x1423f3970,sVar39 + sVar9,sVar37 + sVar3,uVar10);
            if ((uVar23 & 8) == 0) {
              sStack_fb8 = sVar39 + *(short *)(param_2 + 0x2a);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665eb1;
              callee_140070b20(auStack_bb8,&sStack_fb8);
              sStack_fb6 = sVar37 + *(short *)((longlong)param_2 + 0xaa);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665ed0;
              callee_140070b20(auStack_9c8,&sStack_fb6);
            }
          }
        }
        sVar37 = sVar37 + 1;
      } while ((sVar37 < 2) || (sVar39 = sVar39 + 1, sVar37 = -1, sVar39 < 2));
      if (param_3 == 0) {
        uVar38 = 0;
      }
      else {
        uVar38 = *(uint *)(param_3 + 0x48) & 0x4000;
      }
      uVar30 = 0;
      uVar10 = *(undefined2 *)(param_2 + 0x4b);
      uVar1 = *(undefined2 *)(param_2 + 0x29);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665f24;
      cVar7 = callee_140073e80(0x14250eec8,uVar1,uVar10,0x31);
      bVar49 = false;
      uVar23 = uVar30;
      if (cVar7 == '\0') {
        uVar23 = (ulonglong)(uVar38 == 0);
      }
      bVar45 = 0;
      if (param_2[0x366] == -1) {
        bVar45 = (byte)uVar23;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665f51;
      cVar7 = callee_140074830(param_2);
      uVar23 = uVar30;
      if (cVar7 == '\0') {
        uVar23 = (ulonglong)bVar45;
      }
      uVar26 = uVar30;
      if ((param_2[0x44] & 0x8000000) == 0) {
        uVar26 = uVar23;
      }
      if ((*(longlong *)(&stack0x00000030 + lVar16) == 0) ||
         ((*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) & 0x2000) == 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665f9a;
        cVar7 = callee_140074820(param_2);
        uVar23 = uVar30;
        if (cVar7 == '\0') {
          uVar23 = uVar26;
        }
        param_3 = uVar30;
        if (*(longlong *)(param_2 + 0x360) == 0) {
          param_3 = uVar23;
        }
        puStack_1030 = (undefined4 *)CONCAT44(puStack_1030._4_4_,(int)param_3);
        if ((char)param_3 != '\0') {
          if ((param_2[0x44] & 0x10000) == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665fdd;
            cVar7 = callee_1400747f0(param_2,8);
            if (cVar7 == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665ff0;
              cVar7 = callee_1400747f0(param_2,0xb);
              uStack_1018 = (uint)(cVar7 == '\0');
            }
          }
          *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
          *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
          pbVar34 = abStackX_20 + lVar16 + -0x20;
          pbVar34[0] = 3;
          pbVar34[1] = 0;
          pbVar34[2] = 0;
          pbVar34[3] = 0;
          *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
          *(undefined8 *)(&stack0xfffffffffffffff0 + lVar16) = 0;
          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0x32;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666046;
          iStack_101c = FUN_1413812a0(param_2,0,0xb,0xf);
        }
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665f86;
        callee_140074820(param_2);
        param_3 = param_3 & 0xffffffffffffff00;
        puStack_1030 = (undefined4 *)CONCAT44(puStack_1030._4_4_,(int)param_3);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666055;
      callee_140067130(auStack_b88);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666065;
      FUN_1414053f0(param_2,auStack_b88);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066607f;
      FUN_14133d490(param_2,auStack_fa8,auStack_bd0,auStack_b88);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066608c;
      callee_140070870(auStack_fa8,auStack_f70);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066609c;
      callee_140070860(auStack_fa8,auStack_c10);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660b0;
      puVar24 = (undefined1 *)callee_140070450(auStack_f70,&uStack_ff5,auStack_c10);
      uVar35 = *puVar24;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660ba;
      cVar7 = callee_140066de0(uVar35,0);
      if (cVar7 != '\0') {
        iVar11 = *(int *)(&stack0x00000028 + lVar16);
        do {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660cb;
          piVar25 = (int *)callee_140070440(auStack_f70);
          if (iVar11 < *piVar25) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660d8;
            piVar25 = (int *)callee_140070440(auStack_f70);
            iVar11 = *piVar25;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660e3;
          callee_140070980(auStack_f70);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406660f7;
          puVar24 = (undefined1 *)callee_140070450(auStack_f70,&uStack_ff5,auStack_c10);
          uVar35 = *puVar24;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666101;
          cVar7 = callee_140066de0(uVar35,0);
        } while (cVar7 != '\0');
        *(int *)(&stack0x00000028 + lVar16) = iVar11;
        param_1 = puStack_fd8;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666127;
      FUN_14133d710(param_2,alStack_f58,auStack_ee0,auStack_b88);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666134;
      callee_140070870(alStack_f58,auStack_f60);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666144;
      callee_140070860(alStack_f58,auStack_c08);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666158;
      puVar24 = (undefined1 *)callee_140070450(auStack_f60,&uStack_ff4,auStack_c08);
      uVar35 = *puVar24;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666162;
      cVar7 = callee_140066de0(uVar35,0);
      while (cVar7 != '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666179;
        piVar25 = (int *)callee_140070440(auStack_f60);
        if (iStack_1044 < *piVar25) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666186;
          piVar25 = (int *)callee_140070440(auStack_f60);
          iStack_1044 = *piVar25;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666191;
        callee_140070980(auStack_f60);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406661a5;
        puVar24 = (undefined1 *)callee_140070450(auStack_f60,&uStack_ff4,auStack_c08);
        uVar35 = *puVar24;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406661af;
        cVar7 = callee_140066de0(uVar35,0);
        param_1 = puStack_fd8;
      }
      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
      if ((lVar17 != 0) && ((~(*(uint *)(lVar17 + 0x48) >> 7) & 1) != 0)) {
        iStack_1044 = iStack_1044 >> 1;
        *(int *)(&stack0x00000028 + lVar16) = *(int *)(&stack0x00000028 + lVar16) * 2;
      }
      if (((ushort)(*(short *)(param_2 + 0x205) - 1U) < 2) || (*(short *)(param_2 + 0xd8) == 7)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666202;
        callee_1400708c0(auStack_fa8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066620e;
        callee_1400708c0(auStack_bd0);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666217;
        callee_1400708c0(alStack_f58);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666223;
        callee_1400708c0(auStack_ee0);
        uStack_1018 = uStack_1018 & 0xffffff00;
      }
      if (lVar17 != 0) {
        pcVar5 = *(code **)**(undefined8 **)(lVar17 + 0x98);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066623c;
        sVar37 = (*pcVar5)();
        if (sVar37 == 0x41) {
LAB_140666256:
          bVar49 = true;
        }
        else {
          pcVar5 = *(code **)**(undefined8 **)(lVar17 + 0x98);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066624e;
          sVar37 = (*pcVar5)();
          if (sVar37 == 4) goto LAB_140666256;
        }
        if (bVar49) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666268;
          callee_1400708c0(auStack_fa8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666274;
          callee_1400708c0(auStack_bd0);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066627d;
          callee_1400708c0(alStack_f58);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666289;
          callee_1400708c0(auStack_ee0);
        }
        if ((*(uint *)(lVar17 + 0x48) & 0x4000) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066629b;
          callee_1400708c0(auStack_fa8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662a7;
          callee_1400708c0(auStack_bd0);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662b0;
          callee_1400708c0(alStack_f58);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662bc;
          callee_1400708c0(auStack_ee0);
        }
      }
      if ((*(longlong *)(&stack0x00000030 + lVar16) == 0) ||
         ((*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) & 0x2000) == 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662d7;
        cVar7 = callee_140074820(param_2);
        if (cVar7 != '\0') goto LAB_1406662db;
      }
      else {
LAB_1406662db:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662e4;
        callee_1400708c0(auStack_fa8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662f0;
        callee_1400708c0(auStack_bd0);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406662f9;
        callee_1400708c0(alStack_f58);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666305;
        callee_1400708c0(auStack_ee0);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666311;
      lVar17 = callee_140070480(param_2 + 0x102);
      uVar47 = (uint)in_R10;
      iVar11 = iStack_101c;
      uVar38 = uStack_1018;
      if (lVar17 != 0) {
        uVar23 = 0;
        do {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066632f;
          puVar20 = (undefined8 *)callee_140070850(param_2 + 0x102,uVar23);
          uVar19 = *(undefined8 *)*puVar20;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066633d;
          cVar7 = FUN_141379a00(param_2,uVar19);
          uVar47 = (uint)in_R10;
          if (cVar7 != '\0') {
            iVar11 = iStack_101c >> 1;
            uVar38 = 0;
            break;
          }
          uVar38 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar38;
          uVar23 = (ulonglong)(int)uVar38;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666356;
          uVar26 = callee_140070480(param_2 + 0x102);
          uVar47 = (uint)in_R10;
          iVar11 = iStack_101c;
          uVar38 = uStack_1018;
        } while (uVar23 < uVar26);
      }
      if ((*(short *)(param_2 + 0x133) != -30000) || (param_2[0x135] != -1)) {
        iVar11 = iVar11 >> 1;
        uVar38 = 0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066638a;
      lVar17 = callee_140247730(param_2 + 0x2c6);
      uVar43 = 0;
      if (lVar17 == 0) {
        uVar43 = uVar38 & 0xff;
      }
      uStack_fc0 = CONCAT44(uStack_fc0._4_4_,uVar43);
      iVar13 = iVar11 >> 1;
      if (lVar17 == 0) {
        iVar13 = iVar11;
      }
      iVar11 = iVar13 >> 1;
      if ((param_2[0x44] & 0x8000) == 0) {
        iVar11 = iVar13;
      }
      *(int *)((longlong)&iStackX_24 + lVar16) = iVar11;
      *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
      *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
      pbVar34 = abStackX_20 + lVar16 + -0x20;
      pbVar34[0] = 3;
      pbVar34[1] = 0;
      pbVar34[2] = 0;
      pbVar34[3] = 0;
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar16) = 0;
      *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
      *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 10;
      uVar19 = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406663fe;
      FUN_1413812a0(param_2,0xb,0xb,0xf);
      if (cStack_1034 == '\0') {
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        if (lVar17 != 0) {
          *(undefined4 *)(lVar17 + 0x30) = 3;
          *(undefined4 *)(lVar17 + 0x34) = 3;
          *(uint *)(lVar17 + 0x3c) = *(uint *)(lVar17 + 0x3c) & 0xfffffffe;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666425;
        callee_1400708c0(auStack_fa8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066642e;
        callee_1400708c0(alStack_f58);
        *(undefined4 *)((longlong)&iStackX_24 + lVar16) = 0;
        iVar11 = 0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666442;
      cVar7 = callee_1400735c0(auStack_718,0);
      if (cVar7 != '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066644f;
        callee_1400708c0(alStack_f58);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066645b;
        callee_1400708c0(auStack_ee0);
      }
      if ((char)param_3 != '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066646c;
        lVar17 = callee_140070a80(auStack_bb8);
        uVar35 = (char)uVar43;
        if (lVar17 == 0) {
          uVar35 = 0;
        }
        uStack_fc0 = CONCAT71(uStack_fc0._1_7_,uVar35);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666485;
        lVar17 = callee_140070a80(auStack_bb8);
        if ((lVar17 == 0) ||
           (((_DAT_1418be238 == 1 && (param_2 == _DAT_142407590)) && (_DAT_1423aa338 == 1)))) {
          iVar11 = iVar11 >> 1;
          *(int *)((longlong)&iStackX_24 + lVar16) = iVar11;
          uStack_fc0 = uStack_fc0 & 0xffffffffffffff00;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406664b7;
      sVar37 = FUN_1413425c0(param_2);
      lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      if ((sVar37 != 0) && (*(short *)(param_2 + 0x200) < 1)) {
        if ((lVar17 == 0) || (((~(*(uint *)(lVar17 + 0x3c) >> 0xe) & 1) != 0 || (0x27 < sVar37)))) {
LAB_14066651f:
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066652c;
          FUN_141354400(param_2,0x2d);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666518;
          iVar13 = FUN_140073560(0x14);
          if (iVar13 == 0) goto LAB_14066651f;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666534;
        cVar7 = callee_140074ce0(param_2);
        if (cVar7 != '\0') {
          param_2[0x261] = param_2[0x261] + 10;
        }
      }
      if (((char)param_3 != '\0') && (*(short *)(param_2 + 0x200) < 1)) {
        if (lVar17 == 0) {
LAB_14066657c:
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666591;
          FUN_141354400(param_2,0x67);
          if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406665a9;
            FUN_141354400(param_2,0x61);
          }
        }
        else {
          if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140666573:
            bVar49 = true;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066656b;
            iVar13 = FUN_140073560(0x14);
            if (iVar13 == 0) goto LAB_140666573;
            bVar49 = false;
          }
          if (bVar49) goto LAB_14066657c;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406665b1;
        cVar7 = callee_140074ce0(param_2);
        if (cVar7 != '\0') {
          param_2[0x261] = param_2[0x261] + 10;
        }
      }
      if (param_1 != (undefined4 *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406665ca;
        cVar7 = callee_140074ce0(param_1);
        if (cVar7 != '\0') {
          param_1[0x261] = param_1[0x261] + 0x28;
        }
      }
      lVar18 = *(longlong *)(&stack0x00000038 + lVar16);
      if (lVar18 == 0) {
        uVar43 = *(uint *)(lVar17 + 0x3c) & 1;
        uStack_1018 = (*(int *)(lVar17 + 0x30) - uVar43) + -1;
        iVar13 = *(int *)(lVar17 + 0x44);
      }
      else {
        uVar38 = *(uint *)(lVar18 + 0x48) & 0x10000;
        iVar13 = *(int *)(lVar18 + 0x50);
        uVar43 = (uint)CONCAT71((int7)((ulonglong)uVar19 >> 8),uVar38 != 0);
        uStack_1018 = (-1 - (uint)(uVar38 != 0)) + *(int *)(lVar18 + 0x70);
      }
      uStack_fe0 = CONCAT44(uStack_fe0._4_4_,uVar43);
      uStack_1010 = uVar47 & 0xffffff00;
      if (iVar13 < (iVar11 * 9) / 10) {
        uStack_1010._1_3_ = (undefined3)(uStack_1010 >> 8);
        uStack_1010 = CONCAT31(uStack_1010._1_3_,1);
      }
      else if ((char)uVar43 != '\0') {
        if ((int)uStack_1018 < -2) {
          iVar42 = iVar11 * 8 + 400;
        }
        else if (uStack_1018 == -2) {
          iVar42 = iVar11 * 4 + 100;
        }
        else if (uStack_1018 == -1) {
          iVar42 = iVar11 * 2 + 0x14;
        }
        else if (uStack_1018 == 0) {
          iVar42 = (iVar11 * 3) / 2;
        }
        else {
          if (uStack_1018 == 1) {
            iVar42 = iVar11 * 5;
          }
          else {
            iVar42 = iVar11;
            if ((int)uStack_1018 < 3) goto LAB_1406666ae;
            iVar42 = iVar11 * 3;
          }
          iVar42 = (int)(iVar42 + (iVar42 >> 0x1f & 3U)) >> 2;
        }
LAB_1406666ae:
        uStack_1010 = (uint)(iVar13 < (iVar42 * 9) / 10);
      }
      if (lVar18 == 0) {
        iVar42 = *(int *)(lVar17 + 0x30);
      }
      else {
        iVar42 = *(int *)(lVar18 + 0x70);
      }
      if (iVar42 < -2) {
        iVar40 = iVar11 * 8 + 400;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar40;
      }
      else if (iVar42 == -2) {
        iVar40 = iVar11 * 4 + 100;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar40;
      }
      else if (iVar42 == -1) {
        iVar40 = iVar11 * 2 + 0x14;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar40;
      }
      else {
        if (iVar42 == 0) {
          iVar40 = (iVar11 * 3) / 2;
        }
        else {
          if (iVar42 == 1) {
            iVar42 = iVar11 * 5;
          }
          else {
            iVar40 = iVar11;
            if (iVar42 < 3) goto LAB_14066674a;
            iVar42 = iVar11 * 3;
          }
          iVar40 = (int)(iVar42 + (iVar42 >> 0x1f & 3U)) >> 2;
        }
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar40;
      }
LAB_14066674a:
      bVar49 = false;
      uVar23 = (ulonglong)puStack_1030 & 0xffffffff;
      bVar45 = (byte)puStack_1030;
      abStackX_20[lVar16] = bVar45;
      lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      iVar42 = iVar13 >> 2;
      iStack_101c = iVar11;
      if ((param_1 != (undefined4 *)0x0) && (abStackX_20[lVar16] = bVar45, lVar17 != 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666788;
        callee_140070870(param_2 + 500,auStack_1000);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066679b;
        callee_140070860(param_2 + 500,auStack_c00);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406667af;
        puVar24 = (undefined1 *)callee_140070450(auStack_1000,&uStack_ff3,auStack_c00);
        abStackX_20[lVar16] = bVar45;
        uVar35 = *puVar24;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406667be;
        cVar7 = callee_140066de0(uVar35,0);
        if (cVar7 != '\0') {
          abStackX_20[lVar16] = bVar45;
          do {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406667d9;
            puVar20 = (undefined8 *)callee_140070440(auStack_1000);
            iVar11 = *(int *)*puVar20;
            if (iVar11 == 9) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666ba4;
              plVar21 = (longlong *)callee_140070440(auStack_1000);
              if (*(int *)(*plVar21 + 8) == param_1[0x4c]) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666bbf;
                plVar21 = (longlong *)callee_140070440(auStack_1000);
                lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
                if (*(int *)(*plVar21 + 0xc) == *(int *)(lVar17 + 4)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666bdc;
                  plVar21 = (longlong *)callee_140070440(auStack_1000);
                  uVar12 = *(undefined4 *)(*plVar21 + 0x10);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666bee;
                  plVar21 = (longlong *)FUN_140073d10(&DAT_1424078d0,uVar12);
                  if (plVar21 != (longlong *)0x0) {
                    bVar49 = true;
                    pcVar5 = *(code **)(*plVar21 + 0x588);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666c0a;
                    iVar11 = (*pcVar5)();
                    *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
                    *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
                    pbVar34 = abStackX_20 + lVar16 + -0x20;
                    pbVar34[0] = 3;
                    pbVar34[1] = 0;
                    pbVar34[2] = 0;
                    pbVar34[3] = 0;
                    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                    *(longlong **)(&stack0xfffffffffffffff0 + lVar16) = plVar21;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0x14;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666c4c;
                    iVar11 = FUN_1413812a0(param_2,8,iVar11 + 1,0xf);
                    iVar11 = iVar11 * 2;
                    if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140666c67:
                      iVar40 = (iVar11 >> 2) + 1;
                      if (0x1e < iVar40) {
                        iVar40 = 0x1e;
                      }
                      if (plStack_770 == (longlong *)0x0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666ca1;
                        FUN_141354400(param_1,uStack_658,iVar40);
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666c93;
                        FUN_141357060(param_1,plStack_770,iVar40,1);
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666cb1;
                      FUN_141354400(param_1,0x61,iVar40);
                      lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666c63;
                      iVar40 = FUN_140073560(0x14);
                      if (iVar40 == 0) goto LAB_140666c67;
                    }
                    if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140666ccd:
                      iVar40 = iVar42 + 10;
                      if (0x1e < iVar42 + 10) {
                        iVar40 = 0x1e;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666cf2;
                      FUN_141357060(param_2,plVar21,iVar40,1);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666d02;
                      FUN_141354400(param_2,0x61,iVar40);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666cc9;
                      iVar40 = FUN_140073560(0x14);
                      if (iVar40 == 0) goto LAB_140666ccd;
                    }
                    if (iVar13 < iVar11) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406670f8;
                      FUN_140070bd0(auStack_648,auStack_628);
                      if ((_DAT_1418be238 != 1) ||
                         (puVar36 = &UNK_141683278, param_1 != _DAT_142407590)) {
                        puVar36 = &UNK_141683268;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667124;
                      callee_140070b90(auStack_648,puVar36);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667137;
                      callee_1400bb340(auStack_648,auStack_5e8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066714a;
                      callee_140070b90(auStack_648,&UNK_141683290);
                      if (iVar13 * 2 < iVar11) {
                        puVar36 = &UNK_141683288;
LAB_140667191:
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066719d;
                        callee_140070b90(auStack_648,puVar36);
                      }
                      else {
                        if (iVar11 <= (iVar13 * 0xb) / 10) {
                          puVar36 = &UNK_141683230;
                          goto LAB_140667191;
                        }
                        if ((iVar13 * 3) / 2 < iVar11) {
                          puVar36 = &UNK_141683228;
                          goto LAB_140667191;
                        }
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406671b0;
                      callee_140070b90(auStack_648,&UNK_141683260);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406671c3;
                      callee_140070b90(auStack_648,&UNK_141608c88);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406671cf;
                      callee_140070cc0(auStack_2d8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406671e8;
                      FUN_140c7d140(plVar21,auStack_2d8,0,1);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406671fb;
                      callee_1400bb340(auStack_648,auStack_2d8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667208;
                      callee_140069460(auStack_2d8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066721b;
                      callee_140070b90(auStack_648,&UNK_1416096b8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667224;
                      puVar20 = (undefined8 *)callee_140070440(auStack_1000);
                      if (iVar13 * 2 < iVar11) {
                        *(undefined4 *)*puVar20 = 0xffffffff;
                      }
                      else {
                        *(undefined4 *)*puVar20 = 0xc;
                        if ((iVar13 * 0xb) / 10 < iVar11) {
                          if ((iVar13 * 3) / 2 < iVar11) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667286;
                            plVar21 = (longlong *)callee_140070440(auStack_1000);
                            *(undefined4 *)(*plVar21 + 8) = 1;
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667275;
                            plVar21 = (longlong *)callee_140070440(auStack_1000);
                            *(undefined4 *)(*plVar21 + 8) = 2;
                          }
                        }
                        else {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667257;
                          plVar21 = (longlong *)callee_140070440(auStack_1000);
                          *(undefined4 *)(*plVar21 + 8) = 3;
                        }
                        uVar12 = param_2[0x1fa];
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406672a0;
                        plVar21 = (longlong *)callee_140070440(auStack_1000);
                        *(undefined4 *)(*plVar21 + 4) = uVar12;
                        param_2[0x1fa] = param_2[0x1fa] + 1;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406672be;
                      callee_14007f210(&uStack_e28);
                      uStack_e28 = 0xf;
                      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                      if (_DAT_1418be238 == 1) {
                        puVar31 = param_1;
                        if (lVar17 != 0) {
                          puVar31 = *(undefined4 **)(lVar17 + 0x18);
                        }
                        if (puVar31 == _DAT_142407590) {
                          uStack_e26 = 3;
                          uStack_e24 = 1;
                        }
                        else if (param_2 == _DAT_142407590) {
                          uStack_e26 = 4;
                          uStack_e24 = 1;
                        }
                        else {
                          if ((puVar31 != (undefined4 *)0x0) &&
                             (puVar31[0xf4] == _DAT_142407590[0x4c])) {
                            uStack_e26 = 3;
                            goto LAB_1406673d6;
                          }
                          uStack_e24 = 0;
                          if (param_2[0xf4] == _DAT_142407590[0x4c]) {
                            uStack_e26 = 4;
                          }
                          else {
                            uStack_e26 = 7;
                          }
                        }
                      }
                      else {
                        puVar31 = param_1;
                        if ((lVar17 == 0) ||
                           (puVar31 = *(undefined4 **)(lVar17 + 0x18), puVar31 != (undefined4 *)0x0)
                           ) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667394;
                          cVar7 = callee_1413a7620(puVar31);
                          if (cVar7 != '\0') {
                            uStack_e26 = 3;
                            uStack_e24 = 1;
                            goto LAB_1406673dd;
                          }
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667377;
                        cVar7 = callee_1413a7620(param_2);
                        if (cVar7 == '\0') {
                          if (puVar31 != (undefined4 *)0x0) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406673b3;
                            cVar7 = callee_1413a7720(puVar31);
                            if (cVar7 != '\0') {
                              uStack_e26 = 3;
                              goto LAB_1406673d6;
                            }
                          }
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406673c6;
                          cVar7 = callee_1413a7720(param_2);
                          if (cVar7 == '\0') {
                            uStack_e26 = 7;
                          }
                          else {
                            uStack_e26 = 4;
                          }
LAB_1406673d6:
                          uStack_e24 = 0;
                        }
                        else {
                          uStack_e26 = 4;
                          uStack_e24 = 1;
                        }
                      }
LAB_1406673dd:
                      uStack_e0c = 2000;
                      uStack_e22 = *(undefined2 *)(param_2 + 0x2a);
                      uStack_e20 = *(undefined2 *)((longlong)param_2 + 0xaa);
                      uStack_e1e = *(undefined2 *)(param_2 + 0x2b);
                      puStack_e08 = param_1;
                      if (*(longlong *)(&stack0x00000038 + lVar16) != 0) {
                        puStack_e08 = *(undefined4 **)
                                       (*(longlong *)(&stack0x00000038 + lVar16) + 0x18);
                      }
                      if (uStack_1038 != 0) {
                        uStack_dec = uStack_dec | 1;
                      }
                      puVar27 = &uStack_e28;
                      puStack_e00 = param_2;
                      goto LAB_140667456;
                    }
                  }
                  uVar23 = (ulonglong)abStackX_20[lVar16];
                }
              }
            }
            else if (iVar11 == 10) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066698f;
              plVar21 = (longlong *)callee_140070440(auStack_1000);
              if (*(int *)(*plVar21 + 8) == param_1[0x4c]) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406669aa;
                plVar21 = (longlong *)callee_140070440(auStack_1000);
                if (*(int *)(*plVar21 + 0xc) ==
                    *(int *)(*(longlong *)(&stack0x00000030 + lVar16) + 4)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406669c7;
                  plVar21 = (longlong *)callee_140070440(auStack_1000);
                  uVar12 = *(undefined4 *)(*plVar21 + 0x10);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406669d9;
                  plVar21 = (longlong *)FUN_140073d10(&DAT_1424078d0,uVar12);
                  if (plVar21 != (longlong *)0x0) {
                    bVar49 = true;
                    pcVar5 = *(code **)(*plVar21 + 0x580);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406669f5;
                    iVar11 = (*pcVar5)();
                    *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
                    *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
                    pbVar34 = abStackX_20 + lVar16 + -0x20;
                    pbVar34[0] = 3;
                    pbVar34[1] = 0;
                    pbVar34[2] = 0;
                    pbVar34[3] = 0;
                    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                    *(longlong **)(&stack0xfffffffffffffff0 + lVar16) = plVar21;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0x14;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666a37;
                    iVar11 = FUN_1413812a0(param_2,7,iVar11 + 1,0xf);
                    lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
                    if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140666a57:
                      iVar40 = (iVar11 * 2 >> 2) + 1;
                      if (0x1e < iVar40) {
                        iVar40 = 0x1e;
                      }
                      if (plStack_770 == (longlong *)0x0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666a91;
                        FUN_141354400(param_1,uStack_658,iVar40);
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666a83;
                        FUN_141357060(param_1,plStack_770,iVar40,1);
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666aa1;
                      FUN_141354400(param_1,0x61,iVar40);
                      lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666a53;
                      iVar40 = FUN_140073560(0x14);
                      if (iVar40 == 0) goto LAB_140666a57;
                    }
                    if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140666abd:
                      iVar40 = iVar42 + 10;
                      if (0x1e < iVar42 + 10) {
                        iVar40 = 0x1e;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666ae1;
                      FUN_141354400(param_2,0x2c,iVar40);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666af1;
                      FUN_141354400(param_2,0x61,iVar40);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666ab9;
                      iVar40 = FUN_140073560(0x14);
                      if (iVar40 == 0) goto LAB_140666abd;
                    }
                    if (iVar13 < iVar11 * 2) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666b0d;
                      FUN_140070bd0(auStack_648,auStack_628);
                      if ((_DAT_1418be238 != 1) ||
                         (puVar36 = &UNK_141683278, param_1 != _DAT_142407590)) {
                        puVar36 = &UNK_141683268;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666b39;
                      callee_140070b90(auStack_648,puVar36);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666b4c;
                      callee_1400bb340(auStack_648,auStack_5e8);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666b5f;
                      callee_140070b90(auStack_648,&UNK_141683240);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666b6b;
                      callee_14007f210(&uStack_ec8);
                      uStack_ec8 = 0xe;
                      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                      if (_DAT_1418be238 == 1) {
                        puVar31 = param_1;
                        if (lVar17 != 0) {
                          puVar31 = *(undefined4 **)(lVar17 + 0x18);
                        }
                        if (puVar31 == _DAT_142407590) {
                          uStack_ec6 = 3;
                          uStack_ec4 = 1;
                        }
                        else if (param_2 == _DAT_142407590) {
                          uStack_ec6 = 4;
                          uStack_ec4 = 1;
                        }
                        else {
                          if ((puVar31 != (undefined4 *)0x0) &&
                             (puVar31[0xf4] == _DAT_142407590[0x4c])) {
                            uStack_ec6 = 3;
                            goto LAB_140667060;
                          }
                          uStack_ec4 = 0;
                          if (param_2[0xf4] == _DAT_142407590[0x4c]) {
                            uStack_ec6 = 4;
                          }
                          else {
                            uStack_ec6 = 7;
                          }
                        }
                      }
                      else {
                        puVar31 = param_1;
                        if ((lVar17 == 0) ||
                           (puVar31 = *(undefined4 **)(lVar17 + 0x18), puVar31 != (undefined4 *)0x0)
                           ) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066701e;
                          cVar7 = callee_1413a7620(puVar31);
                          if (cVar7 != '\0') {
                            uStack_ec6 = 3;
                            uStack_ec4 = 1;
                            goto LAB_140667067;
                          }
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667001;
                        cVar7 = callee_1413a7620(param_2);
                        if (cVar7 == '\0') {
                          if (puVar31 != (undefined4 *)0x0) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066703d;
                            cVar7 = callee_1413a7720(puVar31);
                            if (cVar7 != '\0') {
                              uStack_ec6 = 3;
                              goto LAB_140667060;
                            }
                          }
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667050;
                          cVar7 = callee_1413a7720(param_2);
                          if (cVar7 == '\0') {
                            uStack_ec6 = 7;
                          }
                          else {
                            uStack_ec6 = 4;
                          }
LAB_140667060:
                          uStack_ec4 = 0;
                        }
                        else {
                          uStack_ec6 = 4;
                          uStack_ec4 = 1;
                        }
                      }
LAB_140667067:
                      uStack_eac = 2000;
                      uStack_ec2 = *(undefined2 *)(param_2 + 0x2a);
                      uStack_ec0 = *(undefined2 *)((longlong)param_2 + 0xaa);
                      uStack_ebe = *(undefined2 *)(param_2 + 0x2b);
                      puStack_ea8 = param_1;
                      if (*(longlong *)(&stack0x00000038 + lVar16) != 0) {
                        puStack_ea8 = *(undefined4 **)
                                       (*(longlong *)(&stack0x00000038 + lVar16) + 0x18);
                      }
                      if (uStack_1038 != 0) {
                        uStack_e8c = uStack_e8c | 1;
                      }
                      puVar27 = &uStack_ec8;
                      puStack_ea0 = param_2;
                      goto LAB_140667456;
                    }
                  }
                }
              }
            }
            else {
              if (iVar11 != 0xb) goto LAB_140666d11;
              bVar49 = true;
              *(int *)((longlong)&iStackX_24 + lVar16) = iVar40 * 2;
              iVar11 = iStack_101c * 2;
              iStack_101c = iVar11;
              if (((*(longlong *)(&stack0x00000038 + lVar16) == 0) && ((char)uVar23 != '\0')) &&
                 (*(short *)(param_1 + 0x200) < 1)) {
                if ((*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) & 0x4000) != 0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666845;
                  iVar14 = FUN_140073560(0x14);
                  if (iVar14 != 0) goto LAB_1406668b4;
                }
                iVar11 = (iVar11 >> 2) + 10;
                if (0x1e < iVar11) {
                  iVar11 = 0x1e;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066686b;
                cVar7 = callee_1400735c0(auStack_718,8);
                if (cVar7 == '\0') {
                  uVar10 = uStack_658;
                  if (plStack_770 == (longlong *)0x0) goto LAB_140666899;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666890;
                  FUN_141357060(param_1,plStack_770,iVar11,1);
                }
                else {
                  uVar10 = 99;
LAB_140666899:
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406668a4;
                  FUN_141354400(param_1,uVar10,iVar11);
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406668b4;
                FUN_141354400(param_1,0x61,iVar11);
              }
LAB_1406668b4:
              uVar23 = 0;
              abStackX_20[lVar16] = 0;
              if (iVar13 < iVar40 * 2) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406668d8;
                FUN_140070bd0(auStack_648,auStack_628);
                if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416833e0, param_1 != _DAT_142407590))
                {
                  puVar36 = &UNK_1416833d0;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666904;
                callee_140070b90(auStack_648,puVar36);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666917;
                callee_1400bb340(auStack_648,auStack_5e8);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066692a;
                callee_140070b90(auStack_648,&UNK_1416833fc);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066693d;
                callee_1400bb340(auStack_648,auStack_458);
                if ((param_2[0x44] & 0x8000) == 0) {
                  if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416833bc, param_2 != _DAT_142407590)
                     ) {
                    puVar36 = &UNK_141683354;
                  }
                }
                else {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666958;
                  iVar11 = FUN_140073560(2);
                  if (iVar11 == 0) {
                    if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
                      puVar36 = &UNK_1416833a4;
                    }
                    else {
                      puVar36 = &UNK_1416833c4;
                    }
                  }
                  else if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
                    puVar36 = &UNK_1416833f0;
                  }
                  else {
                    puVar36 = &UNK_1416833b0;
                  }
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666da2;
                callee_140070b90(auStack_648,puVar36);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666db5;
                callee_140070b90(auStack_648,&UNK_14168334c);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666dc8;
                callee_140070b90(auStack_648,&UNK_1416096b8);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666dd4;
                callee_14007f210(&uStack_e78);
                uStack_e78 = 0xb;
                lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                if (_DAT_1418be238 == 1) {
                  puVar31 = param_1;
                  if (lVar17 != 0) {
                    puVar31 = *(undefined4 **)(lVar17 + 0x18);
                  }
                  if (puVar31 == _DAT_142407590) {
                    uStack_e76 = 3;
                    uStack_e74 = 1;
                  }
                  else if (param_2 == _DAT_142407590) {
                    uStack_e76 = 4;
                    uStack_e74 = 1;
                  }
                  else {
                    if ((puVar31 != (undefined4 *)0x0) && (puVar31[0xf4] == _DAT_142407590[0x4c])) {
                      uStack_e76 = 3;
                      goto LAB_140666eec;
                    }
                    uStack_e74 = 0;
                    if (param_2[0xf4] == _DAT_142407590[0x4c]) {
                      uStack_e76 = 4;
                    }
                    else {
                      uStack_e76 = 7;
                    }
                  }
                }
                else {
                  puVar31 = param_1;
                  if ((lVar17 == 0) ||
                     (puVar31 = *(undefined4 **)(lVar17 + 0x18), puVar31 != (undefined4 *)0x0)) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666eaa;
                    cVar7 = callee_1413a7620(puVar31);
                    if (cVar7 != '\0') {
                      uStack_e76 = 3;
                      uStack_e74 = 1;
                      goto LAB_140666ef3;
                    }
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666e8d;
                  cVar7 = callee_1413a7620(param_2);
                  if (cVar7 == '\0') {
                    if (puVar31 != (undefined4 *)0x0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666ec9;
                      cVar7 = callee_1413a7720(puVar31);
                      if (cVar7 != '\0') {
                        uStack_e76 = 3;
                        goto LAB_140666eec;
                      }
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666edc;
                    cVar7 = callee_1413a7720(param_2);
                    if (cVar7 == '\0') {
                      uStack_e76 = 7;
                    }
                    else {
                      uStack_e76 = 4;
                    }
LAB_140666eec:
                    uStack_e74 = 0;
                  }
                  else {
                    uStack_e76 = 4;
                    uStack_e74 = 1;
                  }
                }
LAB_140666ef3:
                uStack_e5c = 2000;
                uStack_e72 = *(undefined2 *)(param_2 + 0x2a);
                uStack_e70 = *(undefined2 *)((longlong)param_2 + 0xaa);
                uStack_e6e = *(undefined2 *)(param_2 + 0x2b);
                puStack_e58 = param_1;
                if (*(longlong *)(&stack0x00000038 + lVar16) != 0) {
                  puStack_e58 = *(undefined4 **)(*(longlong *)(&stack0x00000038 + lVar16) + 0x18);
                }
                if (uStack_1038 != 0) {
                  uStack_e3c = uStack_e3c | 1;
                }
                puVar27 = &uStack_e78;
                puStack_e50 = param_2;
LAB_140667456:
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667469;
                FUN_1400e5250(0x142505cd0,auStack_648,puVar27);
                goto LAB_14066cbbb;
              }
            }
LAB_140666d11:
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666d1a;
            callee_140070430(auStack_1000);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666d2e;
            puVar24 = (undefined1 *)callee_140070450(auStack_1000,&uStack_ff3,auStack_c00);
            uVar35 = *puVar24;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140666d38;
            cVar7 = callee_140066de0(uVar35,0);
            if (cVar7 == '\0') goto LAB_14066746e;
            iVar40 = *(int *)((longlong)&iStackX_24 + lVar16);
          } while( true );
        }
        bVar45 = abStackX_20[lVar16];
        lVar18 = *(longlong *)(&stack0x00000038 + lVar16);
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      }
      iVar14 = *(int *)((longlong)&iStackX_24 + lVar16);
      iVar40 = *(int *)(&stack0x00000028 + lVar16);
      goto LAB_1406674ca;
    }
    lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
    if (lVar17 != 0) {
      if (*(int *)(lVar17 + 0xc) == -1) {
        iStack_65c = *(int *)(lVar17 + 0x44);
        sStack_768 = *(short *)(lVar17 + 0x28);
        uStack_658 = *(undefined2 *)(lVar17 + 0x40);
        aiStack_7a8[0] = *(int *)(lVar17 + 0x38);
        if ((*(uint *)(lVar17 + 0x3c) & 0x800) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664218;
          callee_1400fcef0(auStack_718,9);
          lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        }
        if ((((*(byte *)(lVar17 + 0x3c) & 2) != 0) && (0 < aiStack_7a8[0])) &&
           (0 < (int)param_1[0x132])) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066425f;
          FUN_1414049d0(param_1,&iStack_ee4,&iStack_ef8,&iStack_f00);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066427c;
          FUN_1414049d0(param_2,&iStack_ef4,&iStack_efc,&iStack_f04);
          iStack_ee4 = iStack_ee4 - iStack_ef4;
          uVar38 = iStack_ef8 - iStack_efc;
          in_R10 = (ulonglong)uVar38;
          iStack_f00 = iStack_f00 - iStack_f04;
          if (-1 < (int)((short)(sVar39 - sVar4) * iStack_f00 + (int)(short)uVar46 * uVar38 +
                        (short)(sVar37 - sVar3) * iStack_ee4)) {
            in_R10 = (ulonglong)(uVar38 * uVar38);
            iVar11 = iStack_f00 * iStack_f00 + uVar38 * uVar38 + iStack_ee4 * iStack_ee4;
            if (999999 < iVar11) {
              auVar51._0_8_ = (double)iVar11;
              auVar51._8_8_ = 0;
              if (auVar51._0_8_ < 0.0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406642fd;
                dVar50 = (double)callee_1415548d0();
              }
              else {
                auVar51 = sqrtpd(ZEXT816(0),auVar51);
                dVar50 = auVar51._0_8_;
              }
              iVar11 = (int)((dVar50 - 1000.0) / 40.0);
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              aiStack_7a8[0] = aiStack_7a8[0] + iVar11;
            }
          }
          lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        }
        uVar12 = *(undefined4 *)(lVar17 + 0x24);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664335;
        plVar21 = (longlong *)FUN_140073d10(&DAT_1424078d0,uVar12);
        if (plVar21 == (longlong *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406646b2;
          callee_1400fcef0(auStack_718,0);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406646c3;
          callee_1400fcef0(auStack_718,3);
          iVar11 = *(int *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x2c);
          if (iVar11 == -1) {
            iVar11 = 0;
            uVar10 = *(undefined2 *)(param_1 + 0x29);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664dd1;
            lVar18 = callee_1400bd090(0x14250eec8,uVar10);
            asStack_1014[0] = 0;
            uVar19 = *(undefined8 *)(param_1 + 0x17e);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664de6;
            plVar22 = (longlong *)callee_140070850(uVar19,0);
            lVar17 = *plVar22;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664df2;
            asStack_1028[0] = callee_140070480(lVar17 + 0x58);
            asStack_1028[0] = asStack_1028[0] + -1;
            if (-1 < asStack_1028[0]) {
              plVar21 = (longlong *)(param_1 + 0x14e);
              do {
                uVar19 = *(undefined8 *)(param_1 + 0x17e);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e21;
                plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_1014[0]);
                lVar17 = *plVar22;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e32;
                plVar22 = (longlong *)callee_140070850(lVar17 + 0x58,(longlong)asStack_1028[0]);
                iVar13 = *(int *)(*plVar22 + 0x68);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e41;
                pbVar34 = (byte *)callee_140070990(plVar21,(longlong)iVar13);
                if ((*pbVar34 & 1) == 0) {
                  uVar19 = *(undefined8 *)(param_1 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e5b;
                  plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_1014[0]);
                  lVar17 = *plVar22;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e6c;
                  plVar22 = (longlong *)callee_140070850(lVar17 + 0x58,(longlong)asStack_1028[0]);
                  iVar13 = *(int *)(*plVar22 + 0x20);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664e80;
                  plVar22 = (longlong *)callee_140070850(lVar18 + 0x208,(longlong)iVar13);
                  lVar17 = *plVar22;
                  if (lVar17 != 0) {
                    uVar12 = *(undefined4 *)(lVar17 + 0xd4);
                    uVar10 = *(undefined2 *)(lVar17 + 0xd0);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664ea2;
                    lVar28 = FUN_1414c6fe0(0x1423f3970,uVar10,uVar12);
                    if ((lVar28 != 0) && (iVar11 < *(int *)(lVar28 + 0x248))) {
                      uStack_668 = *(undefined2 *)(lVar17 + 0xd0);
                      uStack_664 = *(undefined4 *)(lVar17 + 0xd4);
                      uStack_660 = *(undefined2 *)(lVar17 + 0x11c);
                      iVar11 = *(int *)(lVar28 + 0x248);
                    }
                  }
                }
                asStack_1028[0] = asStack_1028[0] + -1;
              } while (-1 < asStack_1028[0]);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664efd;
            callee_140070b20(auStack_7a0,asStack_1014);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664f0d;
            callee_140070b20(auStack_788,asStack_1028);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664f19;
            iVar11 = FUN_141376f90(param_1,asStack_1014[0]);
            iStack_66c = iStack_66c + iVar11;
            iStack_670 = iStack_66c;
            if (iStack_66c < 1) {
              iStack_670 = 1;
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664f5a;
            iStack_674 = iStack_670;
            FUN_1413b9350(param_1,aiStack_7a8);
            if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416832dc, param_1 != _DAT_142407590)) {
              puVar36 = &UNK_1416832d4;
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664f86;
            callee_140070bb0(auStack_758,puVar36);
          }
          else {
            lVar17 = *(longlong *)(param_1 + 0x17e);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406646e8;
            puVar20 = (undefined8 *)callee_140070850(lVar17 + 0x18,(longlong)iVar11);
            plVar21 = (longlong *)*puVar20;
            iVar11 = 0;
            uVar10 = *(undefined2 *)(param_1 + 0x29);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664704;
            uStack_fc0 = callee_1400bd090(0x14250eec8,uVar10);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664714;
            iVar13 = callee_140070a80(plVar21 + 0x2a);
            uVar23 = uStack_fc0;
            uVar38 = iVar13 - 1;
            puStack_1030 = (undefined4 *)(ulonglong)uVar38;
            if (-1 < (int)uVar38) {
              uVar30 = (ulonglong)(int)uVar38;
              do {
                iVar13 = (int)puStack_1030;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066473f;
                uStack_fe0 = uVar30;
                psVar29 = (short *)callee_140070a70(plVar21 + 0x2a,uVar30);
                asStack_103c[0] = *psVar29;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664750;
                cVar7 = FUN_14065b870(param_1,(int)asStack_103c[0]);
                if (cVar7 != '\0') {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664764;
                  cVar7 = callee_14139f130(param_1,(int)asStack_103c[0]);
                  if (cVar7 == '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066477b;
                    psVar29 = (short *)callee_140070a70(plVar21 + 0x2d,uVar30);
                    asStack_1040[0] = *psVar29;
                    uVar19 = *(undefined8 *)(param_1 + 0x17e);
                    if (asStack_1040[0] == -1) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664882;
                      plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_103c[0]);
                      lVar17 = *plVar22;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066488e;
                      asStack_1040[0] = callee_140070480(lVar17 + 0x58);
                      asStack_1040[0] = asStack_1040[0] + -1;
                      if (-1 < asStack_1040[0]) {
                        do {
                          uVar19 = *(undefined8 *)(param_1 + 0x17e);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406648b1;
                          plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_103c[0]);
                          lVar17 = *plVar22;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406648c2;
                          plVar22 = (longlong *)
                                    callee_140070850(lVar17 + 0x58,(longlong)asStack_1040[0]);
                          iVar13 = *(int *)(*plVar22 + 0x68);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406648d5;
                          pbVar34 = (byte *)callee_140070990(param_1 + 0x14e,(longlong)iVar13);
                          if ((*pbVar34 & 1) == 0) {
                            uVar19 = *(undefined8 *)(param_1 + 0x17e);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406648ef;
                            plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_103c[0])
                            ;
                            lVar17 = *plVar22;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664900;
                            plVar22 = (longlong *)
                                      callee_140070850(lVar17 + 0x58,(longlong)asStack_1040[0]);
                            iVar13 = *(int *)(*plVar22 + 0x20);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664913;
                            plVar22 = (longlong *)callee_140070850(uVar23 + 0x208,(longlong)iVar13);
                            lVar17 = *plVar22;
                            if (lVar17 != 0) {
                              uVar12 = *(undefined4 *)(lVar17 + 0xd4);
                              uVar10 = *(undefined2 *)(lVar17 + 0xd0);
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664935;
                              lVar18 = FUN_1414c6fe0(0x1423f3970,uVar10,uVar12);
                              if (lVar18 != 0) {
                                if ((*(byte *)(plVar21 + 0xc) & 8) == 0) {
                                  iVar13 = *(int *)(lVar18 + 0x248);
                                }
                                else {
                                  iVar13 = *(int *)(lVar18 + 0x240);
                                }
                                if (iVar11 < iVar13) {
                                  uStack_668 = *(undefined2 *)(lVar17 + 0xd0);
                                  uStack_664 = *(undefined4 *)(lVar17 + 0xd4);
                                  uStack_660 = *(undefined2 *)(lVar17 + 0x11c);
                                  iVar11 = iVar13;
                                }
                              }
                            }
                          }
                          asStack_1040[0] = asStack_1040[0] + -1;
                          uVar30 = uStack_fe0;
                        } while (-1 < asStack_1040[0]);
LAB_140664993:
                        iVar13 = (int)puStack_1030;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406649a7;
                      callee_140070b20(auStack_7a0,asStack_103c);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406649b7;
                      callee_140070b20(auStack_788,asStack_1040);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406649c3;
                      iVar42 = FUN_141376f90(param_1,asStack_103c[0]);
                      iStack_66c = iStack_66c + iVar42;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406647a0;
                      plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_103c[0]);
                      lVar17 = *plVar22;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406647b1;
                      plVar22 = (longlong *)
                                callee_140070850(lVar17 + 0x58,(longlong)asStack_1040[0]);
                      iVar13 = *(int *)(*plVar22 + 0x68);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406647c4;
                      pbVar34 = (byte *)callee_140070990(param_1 + 0x14e,(longlong)iVar13);
                      if ((*pbVar34 & 1) == 0) {
                        uVar19 = *(undefined8 *)(param_1 + 0x17e);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406647de;
                        plVar22 = (longlong *)callee_140070850(uVar19,(longlong)asStack_103c[0]);
                        lVar17 = *plVar22;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406647ef;
                        plVar22 = (longlong *)
                                  callee_140070850(lVar17 + 0x58,(longlong)asStack_1040[0]);
                        iVar13 = *(int *)(*plVar22 + 0x20);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664802;
                        plVar22 = (longlong *)callee_140070850(uVar23 + 0x208,(longlong)iVar13);
                        lVar17 = *plVar22;
                        if (lVar17 != 0) {
                          uVar12 = *(undefined4 *)(lVar17 + 0xd4);
                          uVar10 = *(undefined2 *)(lVar17 + 0xd0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664828;
                          lVar18 = FUN_1414c6fe0(0x1423f3970,uVar10,uVar12);
                          if (lVar18 != 0) {
                            if ((*(byte *)(plVar21 + 0xc) & 8) == 0) {
                              iVar13 = *(int *)(lVar18 + 0x248);
                            }
                            else {
                              iVar13 = *(int *)(lVar18 + 0x240);
                            }
                            if (iVar11 < iVar13) {
                              uStack_668 = *(undefined2 *)(lVar17 + 0xd0);
                              uStack_664 = *(undefined4 *)(lVar17 + 0xd4);
                              uStack_660 = *(undefined2 *)(lVar17 + 0x11c);
                              iVar11 = iVar13;
                            }
                            goto LAB_140664993;
                          }
                        }
                      }
                      iVar13 = (int)puStack_1030;
                    }
                  }
                }
                puStack_1030 = (undefined4 *)(ulonglong)(iVar13 - 1U);
                uVar30 = uVar30 - 1;
                param_2 = puStack_fc8;
                uStack_fe0 = uVar30;
              } while (-1 < (int)(iVar13 - 1U));
            }
            uVar23 = 0;
            if ((*(byte *)(plVar21 + 0xc) & 8) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664a12;
              lVar17 = FUN_1414c6fe0(0x1423f3970,uStack_668,uStack_664);
              if (lVar17 != 0) {
                iStack_678 = *(int *)(lVar17 + 0x284);
              }
            }
            if (iStack_66c == 0) {
LAB_140664a6a:
              iStack_674 = 1;
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664a42;
              dVar50 = (double)callee_1415548c4((double)iStack_66c,0x3fe54fdf3b645a1d);
              iStack_674 = (int)((dVar50 * (double)(int)plVar21[0x28]) / 100.0);
              if (iStack_674 < 1) goto LAB_140664a6a;
            }
            iStack_670 = (iStack_66c * *(int *)((longlong)plVar21 + 0x144)) / 100;
            if (iStack_670 < 1) {
              iStack_670 = 1;
            }
            if (((*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) & 0x1000) == 0) &&
               ((*(byte *)(plVar21 + 0xc) & 2) != 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664aca;
              callee_1400fcef0(auStack_718,4);
            }
            if ((*(byte *)(plVar21 + 0xc) & 1) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664ae2;
              callee_1400fcef0(auStack_718,2);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664aeb;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664afa;
            FUN_1400709b0(auStack_708,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b03;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b12;
            FUN_140070a90(auStack_6f0,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b1b;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b2a;
            FUN_1400709b0(auStack_6d8,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b33;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b42;
            FUN_140070a90(auStack_6c0,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b4b;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b5a;
            FUN_1400709b0(auStack_6a8,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b63;
            uVar19 = callee_1400709a0(plVar21 + 0xd);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b72;
            FUN_1400709b0(auStack_690,uVar19);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b7b;
            lVar17 = callee_1400709a0(plVar21 + 0xd);
            uVar30 = uVar23;
            if (lVar17 != 0) {
              do {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664b9c;
                puVar31 = (undefined4 *)callee_140070990(plVar21 + 0xd,uVar30);
                uVar12 = *puVar31;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664bad;
                puVar31 = (undefined4 *)callee_140070990(auStack_708,uVar30);
                *puVar31 = uVar12;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664bbe;
                puVar27 = (undefined2 *)callee_140070a70(plVar21 + 0x10,uVar30);
                uVar10 = *puVar27;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664bd0;
                puVar27 = (undefined2 *)callee_140070a70(auStack_6f0,uVar30);
                *puVar27 = uVar10;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664be2;
                puVar31 = (undefined4 *)callee_140070990(plVar21 + 0x13,uVar30);
                uVar12 = *puVar31;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664bf3;
                puVar31 = (undefined4 *)callee_140070990(auStack_6d8,uVar30);
                *puVar31 = uVar12;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c04;
                puVar27 = (undefined2 *)callee_140070a70(plVar21 + 0x16,uVar30);
                uVar10 = *puVar27;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c16;
                puVar27 = (undefined2 *)callee_140070a70(auStack_6c0,uVar30);
                *puVar27 = uVar10;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c28;
                piVar25 = (int *)callee_140070990(plVar21 + 0x22,uVar30);
                iVar11 = *piVar25;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c39;
                piVar25 = (int *)callee_140070990(plVar21 + 0x25,uVar30);
                iVar13 = *piVar25;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c44;
                iVar13 = FUN_140073560((iVar13 - iVar11) + 1);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c55;
                piVar25 = (int *)callee_140070990(plVar21 + 0x22,uVar30);
                iVar11 = *piVar25;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c66;
                piVar25 = (int *)callee_140070990(auStack_6a8,uVar30);
                *piVar25 = iVar13 + iVar11;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c77;
                puVar31 = (undefined4 *)callee_140070990(plVar21 + 0x34,uVar30);
                uVar12 = *puVar31;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c88;
                puVar31 = (undefined4 *)callee_140070990(auStack_690,uVar30);
                *puVar31 = uVar12;
                uVar38 = (int)uVar23 + 1;
                uVar23 = (ulonglong)uVar38;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664c98;
                uVar26 = callee_1400709a0(plVar21 + 0xd);
                param_1 = puStack_fd8;
                uVar30 = (longlong)(int)uVar38;
                param_2 = puStack_fc8;
              } while ((ulonglong)(longlong)(int)uVar38 < uVar26);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664cbe;
            FUN_1413b9350(param_1,aiStack_7a8);
            if ((_DAT_1418be238 != 1) || (plVar22 = plVar21 + 8, param_1 != _DAT_142407590)) {
              plVar22 = plVar21 + 4;
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664ce4;
            FUN_140070bd0(auStack_758,plVar22);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664cf7;
            cVar7 = callee_1400735c0(auStack_718,2);
            if (cVar7 != '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d0b;
              lVar17 = callee_140070a80(auStack_7a0);
              if (lVar17 != 0) {
                if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d39;
                  callee_140070bb0(auStack_738,&UNK_141609bc4);
                }
                else {
                  uVar35 = *(undefined1 *)((longlong)param_1 + 0x12e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d51;
                  FUN_140abe2f0(uVar35,auStack_738,0);
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d5f;
                FUN_1400bb360(auStack_738,0x20);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d6b;
                callee_140070cc0(auStack_238);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d7a;
                puVar27 = (undefined2 *)callee_140070a70(auStack_7a0,0);
                *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 2;
                uVar10 = *puVar27;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664d95;
                FUN_14134cee0(param_1,auStack_238,uVar10);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664da8;
                callee_1400bb340(auStack_738,auStack_238);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664db5;
                callee_140069460(auStack_238);
              }
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664f92;
          lVar17 = callee_140070a80(auStack_7a0);
          if (lVar17 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664fa7;
            iVar11 = callee_140070a80(auStack_7a0);
            iVar11 = iVar11 + -1;
            if (-1 < iVar11) {
              puStack_1030 = (undefined4 *)(longlong)iVar11;
              do {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664fcf;
                psVar29 = (short *)callee_140070a70(auStack_7a0,puStack_1030);
                lVar18 = (longlong)*psVar29;
                uVar19 = *(undefined8 *)(param_1 + 0x17e);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664fe2;
                plVar22 = (longlong *)callee_140070850(uVar19,lVar18);
                lVar17 = *plVar22;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664ff3;
                cVar7 = callee_1400735c0(lVar17 + 0x48,0x18);
                if (cVar7 == '\0') {
                  uVar19 = *(undefined8 *)(param_1 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066500a;
                  plVar22 = (longlong *)callee_140070850(uVar19,lVar18);
                  lVar17 = *plVar22;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665018;
                  cVar7 = callee_1400735c0(lVar17 + 0x48,0);
                  if (cVar7 != '\0') goto LAB_140665089;
                  uVar19 = *(undefined8 *)(param_1 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066502b;
                  plVar22 = (longlong *)callee_140070850(uVar19,lVar18);
                  sVar37 = *(short *)(*plVar22 + 0x40);
                  if (sVar37 != -1) {
                    uVar19 = *(undefined8 *)(param_1 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066504f;
                    plVar22 = (longlong *)callee_140070850(uVar19,(longlong)sVar37);
                    lVar17 = *plVar22;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665060;
                    cVar7 = callee_1400735c0(lVar17 + 0x48,0x18);
                    if (cVar7 == '\0') {
                      uVar19 = *(undefined8 *)(param_1 + 0x17e);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665073;
                      plVar22 = (longlong *)callee_140070850(uVar19,(longlong)sVar37);
                      lVar17 = *plVar22;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665081;
                      cVar7 = callee_1400735c0(lVar17 + 0x48,0);
                      if (cVar7 == '\0') goto LAB_14066529f;
                    }
                    goto LAB_140665089;
                  }
                }
                else {
LAB_140665089:
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665095;
                  callee_140070cc0(auStack_258);
                  uVar30 = 0;
                  plVar21 = (longlong *)(param_1 + 0x102);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406650a9;
                  lVar17 = callee_140070480(plVar21);
                  uVar23 = uVar30;
                  if (lVar17 != 0) {
                    do {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406650bd;
                      plVar22 = (longlong *)callee_140070850(plVar21,uVar30);
                      if (*(short *)(*plVar22 + 8) == 7) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406650f1;
                        FUN_140070bd0(auStack_648,auStack_628);
                        if ((_DAT_1418be238 != 1) ||
                           (puVar36 = &UNK_1416832ec, param_1 != _DAT_142407590)) {
                          puVar36 = &UNK_1416832e4;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066511d;
                        callee_140070b90(auStack_648,puVar36);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665130;
                        callee_140070b90(auStack_648,&UNK_141604818);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066513f;
                        puVar20 = (undefined8 *)callee_140070850(param_1 + 0x102,uVar30);
                        uVar19 = *(undefined8 *)*puVar20;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665157;
                        FUN_140c7d140(uVar19,auStack_258,0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066516a;
                        callee_1400bb340(auStack_648,auStack_258);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066517d;
                        callee_140070b90(auStack_648,&UNK_1416832b0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665190;
                        callee_1400bb340(auStack_648,auStack_478);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406651a3;
                        callee_140070b90(auStack_648,&UNK_1416039f0);
                        if ((_DAT_1418be238 != 1) ||
                           (puVar36 = &UNK_141670668, param_1 != _DAT_142407590)) {
                          puVar36 = &UNK_1416832a8;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406651cf;
                        callee_140070b90(auStack_648,puVar36);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406651e2;
                        callee_140070b90(auStack_648,&UNK_141603844);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406651ee;
                        callee_14007f210(&uStack_a18);
                        uStack_a18 = 0x60007;
                        uStack_a14 = 1;
                        uStack_9fc = 100;
                        uStack_a12 = *(undefined2 *)(param_1 + 0x2a);
                        uStack_a10 = *(undefined2 *)((longlong)param_1 + 0xaa);
                        uStack_a0e = *(undefined2 *)(param_1 + 0x2b);
                        if (uStack_1038 != 0) {
                          uStack_9dc = uStack_9dc | 1;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066526a;
                        puStack_9f8 = param_1;
                        puStack_9f0 = param_2;
                        FUN_1400e5250(0x142505cd0,auStack_648,&uStack_a18);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665279;
                        puVar20 = (undefined8 *)
                                  callee_140070850(param_1 + 0x102,(longlong)(int)uVar23);
                        puVar20 = (undefined8 *)*puVar20;
                        (&stack0xffffffffffffffe0)[lVar16] = 1;
                        uVar19 = *puVar20;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665292;
                        FUN_141342500(param_1,uVar19);
                        break;
                      }
                      uVar38 = (int)uVar23 + 1;
                      uVar23 = (ulonglong)uVar38;
                      uVar30 = (ulonglong)(int)uVar38;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406650d4;
                      uVar26 = callee_140070480(plVar21);
                    } while (uVar30 < uVar26);
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066529f;
                  callee_140069460(auStack_258);
                }
LAB_14066529f:
                puStack_1030 = (undefined4 *)((longlong)puStack_1030 + -1);
                iVar11 = iVar11 + -1;
              } while (-1 < iVar11);
            }
          }
          param_3 = *(ulonglong *)(&stack0x00000038 + lVar16);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066434d;
          callee_140070cc0(auStack_3f8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066435a;
          callee_140070cc0(auStack_3d8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664367;
          callee_140070cc0(auStack_3b8);
          pcVar5 = *(code **)(*plVar21 + 0x438);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066437b;
          plStack_770 = plVar21;
          lVar17 = (*pcVar5)(plVar21);
          uVar23 = (ulonglong)*(int *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x2c);
          if (lVar17 == 0) {
LAB_140664495:
            iStack_678 = 0;
            pcVar5 = *(code **)(*plVar21 + 0x2c0);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406644ab;
            iVar11 = (*pcVar5)(plVar21);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406644cb;
            dVar50 = (double)callee_1415548c4((double)iVar11 * 10.0,0x3fd54fdf3b645a1d);
            iStack_670 = (int)(dVar50 * 10.0);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406644ed;
            dVar50 = (double)callee_1415548c4();
            iStack_674 = (int)dVar50;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066450a;
            callee_140070bb0(auStack_3d8,&UNK_14168311c);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066451d;
            callee_140070bb0(auStack_3b8,&UNK_141683130);
          }
          else {
            if (*(int *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x2c) < 0) {
LAB_1406643ab:
              bVar49 = false;
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066439f;
              uVar30 = callee_140070480(lVar17);
              if (uVar30 <= uVar23) goto LAB_1406643ab;
              bVar49 = true;
            }
            if (!bVar49) goto LAB_140664495;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406643c0;
            puVar20 = (undefined8 *)callee_140070850(lVar17,uVar23);
            if (*(char *)*puVar20 == '\0') {
              iStack_678 = 0;
            }
            else {
              pcVar5 = *(code **)(*plVar21 + 0x538);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406643d4;
              iStack_678 = (*pcVar5)(plVar21);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406643f1;
            plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
            iStack_674 = *(int *)(*plVar22 + 4);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664408;
            plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
            iStack_670 = *(int *)(*plVar22 + 8);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066441f;
            plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
            lVar18 = *plVar22;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664432;
            cVar7 = FUN_1400714b0(lVar18 + 0x50,&UNK_141683124);
            if (cVar7 == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664441;
              plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
              lVar18 = *plVar22;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664454;
              FUN_140070bd0(auStack_3f8,lVar18 + 0x50);
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066445f;
            plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
            lVar18 = *plVar22;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664472;
            FUN_140070bd0(auStack_3d8,lVar18 + 0x10);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066447d;
            plVar22 = (longlong *)callee_140070850(lVar17,uVar23);
            lVar17 = *plVar22;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664490;
            FUN_140070bd0(auStack_3b8,lVar17 + 0x30);
          }
          if ((_DAT_1418be238 != 1) || (puVar24 = auStack_3d8, param_1 != _DAT_142407590)) {
            puVar24 = auStack_3b8;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664549;
          FUN_140070bd0(auStack_758,puVar24);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066455a;
          callee_1400fcef0(auStack_718,2);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664566;
          cVar7 = callee_140070b50(auStack_3f8);
          if (cVar7 == '\0') {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066457d;
            cVar7 = FUN_1400714b0(auStack_3f8,&UNK_141683124);
            if (cVar7 == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664594;
              callee_140070b90(auStack_738,&UNK_141604104);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406645a7;
              callee_1400bb340(auStack_738,auStack_3f8);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406645ba;
              callee_140070b90(auStack_738,&UNK_1416067b0);
            }
          }
          if ((_DAT_1418be238 == 1) && (param_1 == _DAT_142407590)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406645df;
            callee_140070b90(auStack_738,&UNK_141609bc4);
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406645ed;
            callee_140070cc0(auStack_218);
            uVar35 = *(undefined1 *)((longlong)param_1 + 0x12e);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664604;
            FUN_140abe2f0(uVar35,auStack_218,0);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664617;
            callee_1400bb340(auStack_738,auStack_218);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664624;
            callee_140069460(auStack_218);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664632;
          FUN_1400bb360(auStack_738,0x20);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066463e;
          callee_140070cc0(auStack_1b8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664658;
          FUN_140c7d140(plStack_770,auStack_1b8,0);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066466b;
          callee_1400bb340(auStack_738,auStack_1b8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664678;
          callee_140069460(auStack_1b8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664685;
          callee_140069460(auStack_3b8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140664692;
          callee_140069460(auStack_3d8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066469f;
          callee_140069460(auStack_3f8);
        }
        uVar38 = (uint)plVar21;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406652c9;
        callee_140070870(param_2 + 500,auStack_1008);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406652dc;
        callee_140070860(param_2 + 500,auStack_c20);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406652f0;
        puVar24 = (undefined1 *)callee_140070450(auStack_1008,&uStack_ff7,auStack_c20);
        uVar35 = *puVar24;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406652fa;
        cVar7 = callee_140066de0(uVar35,0);
        while (cVar7 != '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066530b;
          puVar20 = (undefined8 *)callee_140070440(auStack_1008);
          if (*(int *)*puVar20 == 1) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665320;
            plVar22 = (longlong *)callee_140070440(auStack_1008);
            if (*(int *)(*plVar22 + 8) == param_1[0x4c]) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066533b;
              plVar22 = (longlong *)callee_140070440(auStack_1008);
              if (*(int *)(*plVar22 + 0xc) == 1) {
                lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
                if (*(int *)(lVar17 + 0x24) == -1) {
                  if (*(short *)(lVar17 + 0x2a) != -1) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066543d;
                    plVar22 = (longlong *)callee_140070440(auStack_1008);
                    if (*(short *)(lVar17 + 0x2a) == *(short *)(*plVar22 + 0x12))
                    goto LAB_14066544e;
                  }
                }
                else {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665360;
                  plVar22 = (longlong *)callee_140070440(auStack_1008);
                  if (*(int *)(lVar17 + 0x24) == *(int *)(*plVar22 + 0x18)) {
LAB_14066544e:
                    *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
                    *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
                    pbVar34 = abStackX_20 + lVar16 + -0x20;
                    pbVar34[0] = 1;
                    pbVar34[1] = 0;
                    pbVar34[2] = 0;
                    pbVar34[3] = 0;
                    plVar21 = (longlong *)0x0;
                    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0x32;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665495;
                    iVar11 = FUN_1413812a0(param_1,6,0x1f,0xf);
                    *(undefined4 *)((longlong)auStackX_10 + lVar16) = 0xffffffff;
                    *(undefined2 *)((longlong)&lStackX_8 + lVar16) = 0xffff;
                    pbVar34 = abStackX_20 + lVar16 + -0x20;
                    pbVar34[0] = 1;
                    pbVar34[1] = 0;
                    pbVar34[2] = 0;
                    pbVar34[3] = 0;
                    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0x32;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406654d6;
                    iVar13 = FUN_1413812a0(param_2,6,0x1f);
                    if (iVar11 < iVar13) {
                      bVar49 = false;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406654e9;
                      plVar22 = (longlong *)callee_140070440(auStack_1008);
                      sVar37 = *(short *)(*plVar22 + 0x10);
                      if (sVar37 != -1) {
                        uVar19 = *(undefined8 *)(param_1 + 0x17e);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066550b;
                        cVar7 = callee_1400fea20(uVar19,sVar37,9);
                        if (cVar7 != '\0') {
                          bVar49 = true;
                        }
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665521;
                      plVar22 = (longlong *)callee_140070440(auStack_1008);
                      if ((*(int *)(*plVar22 + 0x18) == -1) || (!bVar49)) {
                        if (sVar37 != -1) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066579a;
                          plVar22 = (longlong *)callee_140070440(auStack_1008);
                          plVar21 = (longlong *)0x0;
                          if (*(short *)(*plVar22 + 0x12) != -1) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657e4;
                            callee_140070cc0(auStack_2b8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657f1;
                            callee_140070cc0(auStack_298);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657fb;
                            plVar21 = (longlong *)callee_140070440(auStack_1008);
                            lVar17 = *plVar21;
                            *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 2;
                            uVar10 = *(undefined2 *)(lVar17 + 0x12);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066581f;
                            FUN_14134cee0(param_1,auStack_2b8,uVar10,0);
                            *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 2;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066583a;
                            FUN_14134cee0(param_2,auStack_298,sVar37,0);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066584d;
                            FUN_140070c00(auStack_5a8,auStack_5e8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066585a;
                            FUN_140546b30(auStack_5a8);
                            if ((_DAT_1418be238 != 1) ||
                               (puVar36 = &UNK_1416832cc, param_2 != _DAT_142407590)) {
                              puVar36 = &UNK_1416832c0;
                            }
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665886;
                            callee_140070b90(auStack_5a8,puVar36);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665899;
                            callee_140070b90(auStack_5a8,&UNK_1416039f0);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406658ac;
                            callee_1400bb340(auStack_5a8,auStack_4b8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406658bf;
                            callee_140070b90(auStack_5a8,&UNK_1416039f0);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406658d2;
                            callee_1400bb340(auStack_5a8,auStack_2b8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406658e5;
                            callee_140070b90(auStack_5a8,&UNK_141609848);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406658f8;
                            callee_1400bb340(auStack_5a8,auStack_498);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066590b;
                            callee_140070b90(auStack_5a8,&UNK_1416039f0);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066591e;
                            callee_1400bb340(auStack_5a8,auStack_298);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665931;
                            callee_140070b90(auStack_5a8,&UNK_1416096b8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066593d;
                            callee_14007f210(&uStack_ab8);
                            uStack_ab8 = 0x500a7;
                            uStack_ab4 = 1;
                            uStack_a9c = 2000;
                            uStack_ab2 = *(undefined2 *)(param_2 + 0x2a);
                            uStack_ab0 = *(undefined2 *)((longlong)param_2 + 0xaa);
                            uStack_aae = *(undefined2 *)(param_2 + 0x2b);
                            if (uStack_1038 != 0) {
                              uStack_a7c = uStack_a7c | 1;
                            }
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406659bc;
                            puStack_a98 = param_1;
                            puStack_a90 = param_2;
                            FUN_1400e5250(0x142505cd0,auStack_5a8,&uStack_ab8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406659c5;
                            plVar21 = (longlong *)callee_140070440(auStack_1008);
                            lVar17 = *plVar21;
                            *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
                            (abStackX_20 + lVar16 + -0x20)[0] = 1;
                            (abStackX_20 + lVar16 + -0x20)[1] = 0;
                            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                            *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                            *(undefined2 *)(&stack0xffffffffffffffe8 + lVar16) =
                                 *(undefined2 *)(lVar17 + 0x12);
                            *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = param_1;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406659fe;
                            FUN_140acf430(param_2,sVar37,0xffffffff,0);
                            **(undefined4 **)(&stack0x00000030 + lVar16) = 0xffffffff;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665a0f;
                            puVar20 = (undefined8 *)callee_140070440(auStack_1008);
                            *(undefined4 *)*puVar20 = 0xffffffff;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665a21;
                            callee_140069460(auStack_5a8);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665a2e;
                            callee_140069460(auStack_298);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665a3b;
                            callee_140069460(auStack_2b8);
                            goto LAB_14066cc10;
                          }
                        }
                      }
                      else {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066553f;
                        plVar22 = (longlong *)callee_140070440(auStack_1008);
                        uVar12 = *(undefined4 *)(*plVar22 + 0x18);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665551;
                        lVar17 = FUN_140073d10(&DAT_1424078d0,uVar12);
                        if (lVar17 != 0) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665569;
                          callee_140070cc0(auStack_1d8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665576;
                          callee_140070cc0(auStack_278);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066558c;
                          FUN_140c7d140(lVar17,auStack_1d8,0,0xffffffff);
                          *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 2;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406655a9;
                          FUN_14134cee0(param_2,auStack_278,sVar37,0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406655bc;
                          FUN_140070c00(auStack_5c8,auStack_5e8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406655c9;
                          FUN_140546b30(auStack_5c8);
                          if ((_DAT_1418be238 != 1) ||
                             (puVar36 = &UNK_1416832cc, param_2 != _DAT_142407590)) {
                            puVar36 = &UNK_1416832c0;
                          }
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406655f5;
                          callee_140070b90(auStack_5c8,puVar36);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665608;
                          callee_140070b90(auStack_5c8,&UNK_1416039f0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066561b;
                          callee_1400bb340(auStack_5c8,auStack_4b8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066562e;
                          callee_140070b90(auStack_5c8,&UNK_1416039f0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665641;
                          callee_1400bb340(auStack_5c8,auStack_1d8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665654;
                          callee_140070b90(auStack_5c8,&UNK_141609848);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665667;
                          callee_1400bb340(auStack_5c8,auStack_498);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066567a;
                          callee_140070b90(auStack_5c8,&UNK_1416039f0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066568d;
                          callee_1400bb340(auStack_5c8,auStack_278);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406656a0;
                          callee_140070b90(auStack_5c8,&UNK_1416096b8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406656ac;
                          callee_14007f210(&uStack_a68);
                          uStack_a68 = 0x500a7;
                          uStack_a64 = 1;
                          uStack_a4c = 2000;
                          uStack_a62 = *(undefined2 *)(param_2 + 0x2a);
                          uStack_a60 = *(undefined2 *)((longlong)param_2 + 0xaa);
                          uStack_a5e = *(undefined2 *)(param_2 + 0x2b);
                          if (uStack_1038 != 0) {
                            uStack_a2c = uStack_a2c | 1;
                          }
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066572b;
                          puStack_a48 = param_1;
                          puStack_a40 = param_2;
                          FUN_1400e5250(0x142505cd0,auStack_5c8,&uStack_a68);
                          (&stack0xffffffffffffffe8)[lVar16] = 1;
                          *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0xffffffff;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665749;
                          FUN_1413412c0(param_2,lVar17,1,(int)sVar37);
                          **(undefined4 **)(&stack0x00000030 + lVar16) = 0xffffffff;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066575a;
                          puVar20 = (undefined8 *)callee_140070440(auStack_1008);
                          *(undefined4 *)*puVar20 = 0xffffffff;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066576c;
                          callee_140069460(auStack_5c8);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665779;
                          callee_140069460(auStack_278);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665786;
                          callee_140069460(auStack_1d8);
                          goto LAB_14066cc10;
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066537f;
                    callee_140070870(param_1 + 0x102,auStack_f80);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665392;
                    callee_140070860(param_1 + 0x102,auStack_c28);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406653a6;
                    puVar24 = (undefined1 *)callee_140070450(auStack_f80,&uStack_ff8,auStack_c28);
                    uVar35 = *puVar24;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406653b0;
                    cVar7 = callee_140066de0(uVar35,0);
                    while (cVar7 != '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406653c9;
                      puVar20 = (undefined8 *)callee_140070440(auStack_f80);
                      if (*(int *)(*(longlong *)*puVar20 + 0x1c) == *(int *)(lVar17 + 0x24)) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406653e0;
                        plVar22 = (longlong *)callee_140070440(auStack_1008);
                        lVar18 = *plVar22;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406653ec;
                        plVar22 = (longlong *)callee_140070440(auStack_f80);
                        if (*(short *)(*plVar22 + 10) == *(short *)(lVar18 + 0x12))
                        goto LAB_14066544e;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665402;
                      callee_140070430(auStack_f80);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665416;
                      puVar24 = (undefined1 *)callee_140070450(auStack_f80,&uStack_ff8,auStack_c28);
                      uVar35 = *puVar24;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140665420;
                      cVar7 = callee_140066de0(uVar35,0);
                    }
                  }
                }
              }
            }
          }
          uVar38 = (uint)plVar21;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657ad;
          callee_140070430(auStack_1008);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657c1;
          puVar24 = (undefined1 *)callee_140070450(auStack_1008,&uStack_ff7,auStack_c20);
          uVar35 = *puVar24;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406657cb;
          cVar7 = callee_140066de0(uVar35,0);
        }
        goto LAB_1406640a3;
      }
      goto LAB_1406640a8;
    }
    goto LAB_14066cc10;
  }
  if ((param_4[0xf] & 0x4000U) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663c88;
    callee_1400fcef0(auStack_718,1);
  }
  if ((*param_4 != 1) || (param_4[3] == -1)) goto LAB_140663cb0;
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140663ca8;
  cVar7 = FUN_1406604f0(param_1,param_2,param_4,aiStack_7a8);
  if (cVar7 == '\0') goto LAB_140663cb0;
  goto LAB_14066cc6b;
LAB_14066746e:
  iVar40 = *(int *)(&stack0x00000028 + lVar16);
  iVar14 = *(int *)((longlong)&iStackX_24 + lVar16);
  bVar45 = abStackX_20[lVar16];
  lVar18 = *(longlong *)(&stack0x00000038 + lVar16);
  lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
  iVar11 = iStack_101c;
  if (bVar49) {
    iStack_1044 = iStack_1044 >> 1;
    iVar40 = iVar40 >> 1;
    *(int *)(&stack0x00000028 + lVar16) = iVar40;
    iVar14 = iVar14 >> 1;
    *(int *)((longlong)&iStackX_24 + lVar16) = iVar14;
    iVar11 = iStack_101c >> 1;
  }
LAB_1406674ca:
  if (cStack_1034 == '\x01') {
    iStack_1044 = (iStack_1044 * 9) / 10;
    iVar40 = (iVar40 * 9) / 10;
    *(int *)(&stack0x00000028 + lVar16) = iVar40;
    iVar14 = (iVar14 * 9) / 10;
    *(int *)((longlong)&iStackX_24 + lVar16) = iVar14;
    iVar11 = (iVar11 * 9) / 10;
  }
  if (((lVar18 == 0) && (bVar45 != 0)) && (*(short *)(param_1 + 0x200) < 1)) {
    if (lVar17 == 0) {
LAB_140667589:
      iVar11 = (iVar11 >> 2) + 10;
      if (0x1e < iVar11) {
        iVar11 = 0x1e;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406675ab;
      cVar7 = callee_1400735c0(auStack_718,8);
      if (cVar7 == '\0') {
        uVar10 = uStack_658;
        if (plStack_770 == (longlong *)0x0) goto LAB_1406675d9;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406675d0;
        FUN_141357060(param_1,plStack_770,iVar11,1);
      }
      else {
        uVar10 = 99;
LAB_1406675d9:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406675e4;
        FUN_141354400(param_1,uVar10,iVar11);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406675f4;
      FUN_141354400(param_1,0x61,iVar11);
    }
    else {
      if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140667580:
        bVar49 = true;
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667578;
        iVar15 = FUN_140073560(0x14);
        if (iVar15 == 0) goto LAB_140667580;
        bVar49 = false;
      }
      if (bVar49) goto LAB_140667589;
    }
    lVar18 = *(longlong *)(&stack0x00000038 + lVar16);
  }
  if ((iVar13 < iVar14) && (abStackX_20[lVar16] != 0)) {
    if ((iVar13 < iVar14 >> 1) || ((char)uStack_fc0 == '\0')) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667bfb;
      FUN_140070bd0(auStack_648,auStack_628);
      if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_14168320c, param_1 != _DAT_142407590)) {
        puVar36 = &UNK_141683200;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667c27;
      callee_140070b90(auStack_648,puVar36);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667c3a;
      callee_1400bb340(auStack_648,auStack_5e8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667c4d;
      callee_140070b90(auStack_648,&UNK_1416096b8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667c59;
      callee_14007f210(&uStack_dd8);
      uStack_dd8 = 0xc;
      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
      if (_DAT_1418be238 == 1) {
        puVar31 = param_1;
        if (lVar17 != 0) {
          puVar31 = *(undefined4 **)(lVar17 + 0x18);
        }
        if (puVar31 == _DAT_142407590) {
          uStack_dd6 = 3;
          uStack_dd4 = 1;
        }
        else if (param_2 == _DAT_142407590) {
          uStack_dd6 = 4;
          uStack_dd4 = 1;
        }
        else if ((puVar31 == (undefined4 *)0x0) || (puVar31[0xf4] != _DAT_142407590[0x4c])) {
          uStack_dd4 = 0;
          if (param_2[0xf4] == _DAT_142407590[0x4c]) {
            uStack_dd6 = 4;
          }
          else {
            uStack_dd6 = 7;
          }
        }
        else {
          uStack_dd6 = 3;
          uStack_dd4 = 0;
        }
      }
      else {
        puVar31 = param_1;
        if (lVar17 != 0) {
          puVar31 = *(undefined4 **)(lVar17 + 0x18);
        }
        if (puVar31 != (undefined4 *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667d34;
          cVar7 = callee_1413a7620(puVar31);
          if (cVar7 != '\0') {
            uStack_dd6 = 3;
            uStack_dd4 = 1;
            goto LAB_140667db8;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667d55;
        cVar7 = callee_1413a7620(param_2);
        if (cVar7 == '\0') {
          if (puVar31 != (undefined4 *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667d74;
            cVar7 = callee_1413a7720(puVar31);
            if (cVar7 != '\0') {
              uStack_dd6 = 3;
              uStack_dd4 = 0;
              goto LAB_140667db8;
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667d95;
          cVar7 = callee_1413a7720(param_2);
          uStack_dd4 = 0;
          if (cVar7 == '\0') {
            uStack_dd6 = 7;
          }
          else {
            uStack_dd6 = 4;
          }
        }
        else {
          uStack_dd6 = 4;
          uStack_dd4 = 1;
        }
      }
LAB_140667db8:
      uStack_dbc = 2000;
      uStack_dd2 = *(undefined2 *)(param_2 + 0x2a);
      uStack_dd0 = *(undefined2 *)((longlong)param_2 + 0xaa);
      uStack_dce = *(undefined2 *)(param_2 + 0x2b);
      puStack_db8 = param_1;
      if (*(longlong *)(&stack0x00000038 + lVar16) != 0) {
        puStack_db8 = *(undefined4 **)(*(longlong *)(&stack0x00000038 + lVar16) + 0x18);
      }
      if (uStack_1038 != 0) {
        uStack_d9c = uStack_d9c | 1;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667e3d;
      puStack_db0 = param_2;
      FUN_1400e5250(0x142505cd0,auStack_648,&uStack_dd8);
      if (iVar14 <= (iVar13 * 0xb) / 10) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667e61;
        FUN_140548ba0(param_2,3);
      }
    }
    else {
      if (lVar18 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066789a;
        FUN_140070bd0(auStack_648,auStack_628);
        if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416833e0, param_1 != _DAT_142407590)) {
          puVar36 = &UNK_1416833d0;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406678c6;
        callee_140070b90(auStack_648,puVar36);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406678d9;
        callee_1400bb340(auStack_648,auStack_5e8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406678ec;
        callee_140070b90(auStack_648,&UNK_1416833fc);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406678ff;
        callee_1400bb340(auStack_648,auStack_458);
        if ((param_2[0x44] & 0x8000) == 0) {
          if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416833bc, param_2 != _DAT_142407590)) {
            puVar36 = &UNK_141683354;
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667916;
          iVar11 = FUN_140073560(2);
          if (iVar11 == 0) {
            if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
              puVar36 = &UNK_1416833a4;
            }
            else {
              puVar36 = &UNK_1416833c4;
            }
          }
          else if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
            puVar36 = &UNK_1416833f0;
          }
          else {
            puVar36 = &UNK_1416833b0;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066798e;
        callee_140070b90(auStack_648,puVar36);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406679a1;
        callee_140070b90(auStack_648,&UNK_14168334c);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406679b4;
        callee_140070b90(auStack_648,&UNK_1416096b8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406679c0;
        callee_14007f210(&uStack_c98);
        uStack_c98 = 0xb;
        if (_DAT_1418be238 == 1) {
          if (param_1 == _DAT_142407590) {
            uStack_c96 = 3;
            uStack_c94 = 1;
          }
          else if (param_2 == _DAT_142407590) {
            uStack_c96 = 4;
            uStack_c94 = 1;
          }
          else {
            if ((param_1 != (undefined4 *)0x0) && (param_1[0xf4] == _DAT_142407590[0x4c])) {
              uStack_c96 = 3;
              goto LAB_140667ab2;
            }
            uStack_c94 = 0;
            if (param_2[0xf4] == _DAT_142407590[0x4c]) {
              uStack_c96 = 4;
            }
            else {
              uStack_c96 = 7;
            }
          }
        }
        else {
          if (param_1 != (undefined4 *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667a56;
            cVar7 = callee_1413a7620(param_1);
            if (cVar7 != '\0') {
              uStack_c96 = 3;
              uStack_c94 = 1;
              goto LAB_140667ab9;
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667a70;
          cVar7 = callee_1413a7620(param_2);
          if (cVar7 == '\0') {
            if (param_1 != (undefined4 *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667a8f;
              cVar7 = callee_1413a7720(param_1);
              if (cVar7 != '\0') {
                uStack_c96 = 3;
                goto LAB_140667ab2;
              }
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667aa2;
            cVar7 = callee_1413a7720(param_2);
            if (cVar7 == '\0') {
              uStack_c96 = 7;
            }
            else {
              uStack_c96 = 4;
            }
LAB_140667ab2:
            uStack_c94 = 0;
          }
          else {
            uStack_c96 = 4;
            uStack_c94 = 1;
          }
        }
LAB_140667ab9:
        uStack_c7c = 2000;
        uStack_c92 = *(undefined2 *)(param_2 + 0x2a);
        uStack_c90 = *(undefined2 *)((longlong)param_2 + 0xaa);
        uStack_c8e = *(undefined2 *)(param_2 + 0x2b);
        if (uStack_1038 != 0) {
          uStack_c5c = uStack_c5c | 1;
        }
        puVar27 = &uStack_c98;
        puStack_c78 = param_1;
        puStack_c70 = param_2;
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667641;
        FUN_140070bd0(auStack_648,auStack_5e8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066764d;
        FUN_140546b30(auStack_648);
        if ((param_2[0x44] & 0x8000) == 0) {
          if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_1416833bc, param_2 != _DAT_142407590)) {
            puVar36 = &UNK_141683354;
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667664;
          iVar11 = FUN_140073560(2);
          if (iVar11 == 0) {
            if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
              puVar36 = &UNK_1416833a4;
            }
            else {
              puVar36 = &UNK_1416833c4;
            }
          }
          else if ((_DAT_1418be238 == 1) && (param_2 == _DAT_142407590)) {
            puVar36 = &UNK_1416833f0;
          }
          else {
            puVar36 = &UNK_1416833b0;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406676dc;
        callee_140070b90(auStack_648,puVar36);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406676ef;
        callee_140070b90(auStack_648,&UNK_141683398);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667702;
        callee_1400bb340(auStack_648,auStack_628);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667715;
        callee_140070b90(auStack_648,&UNK_1416096b8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667721;
        callee_14007f210(&uStack_ce8);
        uStack_ce8 = 10;
        lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
        puVar31 = *(undefined4 **)(lVar17 + 0x18);
        if (_DAT_1418be238 == 1) {
          if (puVar31 == _DAT_142407590) {
            uStack_ce6 = 3;
            uStack_ce4 = 1;
          }
          else if (param_2 == _DAT_142407590) {
            uStack_ce6 = 4;
            uStack_ce4 = 1;
          }
          else {
            if ((puVar31 != (undefined4 *)0x0) && (puVar31[0xf4] == _DAT_142407590[0x4c])) {
              uStack_ce6 = 3;
              goto LAB_14066781c;
            }
            uStack_ce4 = 0;
            if (param_2[0xf4] == _DAT_142407590[0x4c]) {
              uStack_ce6 = 4;
            }
            else {
              uStack_ce6 = 7;
            }
          }
        }
        else {
          if (puVar31 != (undefined4 *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406677c0;
            cVar7 = callee_1413a7620(puVar31);
            if (cVar7 != '\0') {
              uStack_ce6 = 3;
              uStack_ce4 = 1;
              goto LAB_140667823;
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406677da;
          cVar7 = callee_1413a7620(param_2);
          if (cVar7 == '\0') {
            if (puVar31 != (undefined4 *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406677f9;
              cVar7 = callee_1413a7720(puVar31);
              if (cVar7 != '\0') {
                uStack_ce6 = 3;
                goto LAB_14066781c;
              }
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066780c;
            cVar7 = callee_1413a7720(param_2);
            if (cVar7 == '\0') {
              uStack_ce6 = 7;
            }
            else {
              uStack_ce6 = 4;
            }
LAB_14066781c:
            uStack_ce4 = 0;
          }
          else {
            uStack_ce6 = 4;
            uStack_ce4 = 1;
          }
        }
LAB_140667823:
        uStack_ccc = 2000;
        uStack_ce2 = *(undefined2 *)(param_2 + 0x2a);
        uStack_ce0 = *(undefined2 *)((longlong)param_2 + 0xaa);
        uStack_cde = *(undefined2 *)(param_2 + 0x2b);
        uStack_cc8 = *(undefined8 *)(lVar17 + 0x18);
        if (uStack_1038 != 0) {
          uStack_cac = uStack_cac | 1;
        }
        puVar27 = &uStack_ce8;
        puStack_cc0 = param_2;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b2e;
      FUN_1400e5250(0x142505cd0,auStack_648,puVar27);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b3a;
      uVar19 = callee_140070a80(auStack_bb8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b42;
      iVar11 = FUN_140073560(uVar19);
      uVar10 = *(undefined2 *)(param_2 + 0x2b);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b5c;
      puVar27 = (undefined2 *)callee_140070a70(auStack_9c8,(longlong)iVar11);
      uVar1 = *puVar27;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b6e;
      puVar27 = (undefined2 *)callee_140070a70(auStack_bb8,(longlong)iVar11);
      (&stack0xffffffffffffffe0)[lVar16] = 1;
      uVar2 = *puVar27;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b86;
      FUN_14135a890(param_2,uVar2,uVar1,uVar10);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667b8e;
      callee_1401fdbd0(param_2);
      *(undefined1 *)(param_2 + 0x131) = 0;
      param_2[0x132] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667bad;
      callee_1400708c0(param_2 + 0x32);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667bb9;
      callee_1400708c0(param_2 + 0x38);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667bc5;
      callee_1400708c0(param_2 + 0x3e);
      param_2[0x44] = param_2[0x44] & 0xffffbffe;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667bdf;
      FUN_140548ba0(param_2,3);
      param_1 = puStack_fd8;
    }
    if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) && (_DAT_14266ba80 < 10)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667e92;
      cVar7 = callee_1400735c0(0x1423efbf0,0);
      if (cVar7 != '\0') {
        uVar10 = *(undefined2 *)(param_2 + 0x2b);
        uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
        uVar2 = *(undefined2 *)(param_2 + 0x2a);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140667ebe;
        uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
        if ((uVar23 & 0x10) != 0) {
          iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
          iVar11 = -iVar13;
          if (-iVar13 < 0) {
            iVar11 = iVar13;
          }
          if (iVar11 < 2) {
            iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                     (int)*(short *)((longlong)param_2 + 0xaa);
            iVar11 = -iVar42;
            if (-iVar42 < 0) {
              iVar11 = iVar42;
            }
            if ((iVar11 < 2) &&
               ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                (*(short *)((longlong)param_1 + 0xaa) != *(short *)((longlong)param_2 + 0xaa))))) {
              lVar17 = (longlong)_DAT_14266ba80;
              *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 1;
              *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
              *(undefined2 *)(lVar17 * 2 + 0x14266ba54) = *(undefined2 *)((longlong)param_2 + 0xaa);
              *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
              if (iVar42 == 0) {
                if (iVar13 == 1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                }
                else if (iVar13 == -1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                }
              }
              else if (iVar42 == 1) {
                if (iVar13 == 0) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                }
                else if (iVar13 == 1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                }
                else if (iVar13 == -1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                }
              }
              else if (iVar42 == -1) {
                if (iVar13 == 0) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                }
                else if (iVar13 == 1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                }
                else if (iVar13 == -1) {
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                }
              }
              *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668010;
              _DAT_14266ba7c = GetTickCount();
              _DAT_14266ba80 = _DAT_14266ba80 + 1;
              if (plStack_770 == (longlong *)0x0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406680f7;
                FUN_1407fdb30(0x157d);
              }
              else {
                pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668035;
                sVar37 = (*pcVar5)();
                if (sVar37 == 0x32) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668045;
                  FUN_1407fdb30(0x1580);
                }
                else {
                  pcVar5 = *(code **)(*plStack_770 + 0x38);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668057;
                  uVar10 = (*pcVar5)();
                  pcVar5 = *(code **)(*plStack_770 + 0x40);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668067;
                  uVar12 = (*pcVar5)();
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668081;
                  cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                  if (cVar7 == '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406680ac;
                    cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                    if (cVar7 == '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406680d4;
                      cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                      uVar19 = 0x1581;
                      if (cVar7 != '\0') {
                        uVar19 = 0x157c;
                      }
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406680e8;
                      FUN_1407fdb30(uVar19);
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406680ba;
                      FUN_1407fdb30(0x157f);
                    }
                  }
                  else {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066808f;
                    FUN_1407fdb30(0x157e);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((lVar18 == 0) && (*(short *)(param_1 + 0x200) < 1)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066811c;
      lVar18 = callee_1400709a0(auStack_fa8);
      lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      if (lVar18 != 0) {
        if (lVar17 != 0) {
          if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_140668146:
            bVar49 = true;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066813e;
            iVar11 = FUN_140073560(0x14);
            if (iVar11 == 0) goto LAB_140668146;
            bVar49 = false;
          }
          if (!bVar49) goto LAB_14066819e;
        }
        iVar11 = (iVar40 >> 2) + 1;
        if (0x1e < iVar11) {
          iVar11 = 0x1e;
        }
        if (plStack_770 == (longlong *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668189;
          FUN_141354400(param_1,uStack_658,iVar11);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066817b;
          FUN_141357060(param_1,plStack_770,iVar11,1);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668199;
        FUN_141354400(param_1,0x61,iVar11);
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
      }
LAB_14066819e:
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406681a7;
      lVar18 = callee_1400709a0(auStack_fa8);
      if ((lVar18 == 0) || (iVar40 <= iVar13)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406681be;
        lVar18 = callee_1400709a0(alStack_f58);
        if (lVar18 != 0) {
          if (lVar17 != 0) {
            if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_1406681e3:
              bVar49 = true;
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406681db;
              iVar11 = FUN_140073560(0x14);
              if (iVar11 == 0) goto LAB_1406681e3;
              bVar49 = false;
            }
            if (!bVar49) goto LAB_140668237;
          }
          iVar11 = (iStack_1044 >> 2) + 1;
          if (0x1e < iVar11) {
            iVar11 = 0x1e;
          }
          if (plStack_770 == (longlong *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668227;
            FUN_141354400(param_1,uStack_658,iVar11);
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668219;
            FUN_141357060(param_1,plStack_770,iVar11,1);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668237;
          FUN_141354400(param_1,0x61,iVar11);
        }
      }
    }
LAB_140668237:
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668240;
    lVar17 = callee_1400709a0(auStack_fa8);
    if ((lVar17 != 0) && (*(short *)(param_2 + 0x200) < 1)) {
      if (*(longlong *)(&stack0x00000030 + lVar16) == 0) {
LAB_140668286:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066828f;
        iVar11 = callee_1400709a0(auStack_fa8);
        iVar11 = iVar11 * (iVar42 + 10);
        if (0x1e < iVar11) {
          iVar11 = 0x1e;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406682b9;
        FUN_141354400(param_2,0x2c,iVar11);
        if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406682d1;
          FUN_141354400(param_2,0x61,iVar11);
        }
      }
      else {
        if ((*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) & 0x4000) == 0) {
LAB_14066827d:
          bVar49 = true;
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668275;
          iVar11 = FUN_140073560(0x14);
          if (iVar11 == 0) goto LAB_14066827d;
          bVar49 = false;
        }
        if (bVar49) goto LAB_140668286;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406682d9;
      cVar7 = callee_140074ce0(param_2);
      if (cVar7 != '\0') {
        param_2[0x261] = param_2[0x261] + 10;
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406682ee;
    lVar17 = callee_1400709a0(auStack_fa8);
    if ((lVar17 == 0) || (iVar40 <= iVar13)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668305;
      lVar17 = callee_1400709a0(alStack_f58);
      if ((lVar17 != 0) && (*(short *)(param_2 + 0x200) < 1)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668329;
        iVar11 = callee_140070480(auStack_ee0);
        iVar11 = iVar11 + -1;
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        if (iVar11 < 0) {
          if (lVar17 != 0) goto LAB_1406683f2;
LAB_140668416:
          iVar11 = iVar42 + 10;
          if (0x1e < iVar42 + 10) {
            iVar11 = 0x1e;
          }
          if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668443;
            FUN_141354400(param_2,0x61,iVar11);
          }
        }
        else {
          lVar18 = (longlong)iVar11;
          if (lVar17 == 0) {
            do {
              iVar40 = iVar42 + 10;
              if (0x1e < iVar42 + 10) {
                iVar40 = 0x1e;
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406683c8;
              puVar20 = (undefined8 *)callee_140070850(auStack_ee0,lVar18);
              uVar19 = *puVar20;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406683d9;
              FUN_141357060(param_2,uVar19,iVar40,1);
              lVar18 = lVar18 + -1;
              iVar11 = iVar11 + -1;
              param_1 = puStack_fd8;
            } while (-1 < iVar11);
            goto LAB_140668416;
          }
          do {
            if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_14066835e:
              iVar40 = iVar42 + 10;
              if (0x1e < iVar42 + 10) {
                iVar40 = 0x1e;
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066837b;
              puVar20 = (undefined8 *)callee_140070850(auStack_ee0,lVar18);
              uVar19 = *puVar20;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066838c;
              FUN_141357060(param_2,uVar19,iVar40,1);
              lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066835a;
              iVar40 = FUN_140073560(0x14);
              if (iVar40 == 0) goto LAB_14066835e;
            }
            lVar18 = lVar18 + -1;
            iVar11 = iVar11 + -1;
            param_1 = puStack_fd8;
          } while (-1 < iVar11);
LAB_1406683f2:
          if ((*(uint *)(lVar17 + 0x3c) & 0x4000) == 0) {
LAB_14066840d:
            bVar49 = true;
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668405;
            iVar11 = FUN_140073560(0x14);
            if (iVar11 == 0) goto LAB_14066840d;
            bVar49 = false;
          }
          if (bVar49) goto LAB_140668416;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066844b;
        cVar7 = callee_140074ce0(param_2);
        iVar14 = *(int *)((longlong)&iStackX_24 + lVar16);
        iVar40 = *(int *)(&stack0x00000028 + lVar16);
        if (cVar7 != '\0') {
          param_2[0x261] = param_2[0x261] + 10;
        }
      }
    }
    iVar11 = -1;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668469;
    lVar17 = callee_1400709a0(auStack_fa8);
    uVar38 = uStack_1018;
    if (lVar17 != 0) {
      if (iVar13 < (iVar40 * 9) / 10) {
        uStack_1010 = CONCAT31(uStack_1010._1_3_,1);
      }
      else if ((char)uStack_fe0 != '\0') {
        if ((int)uStack_1018 < -2) {
          iVar42 = iVar40 * 8 + 400;
        }
        else if (uStack_1018 == -2) {
          iVar42 = iVar40 * 4 + 100;
        }
        else if (uStack_1018 == -1) {
          iVar42 = iVar40 * 2 + 0x14;
        }
        else if (uStack_1018 == 0) {
          iVar42 = (iVar40 * 3) / 2;
        }
        else {
          if (uStack_1018 == 1) {
            iVar42 = iVar40 * 5;
          }
          else {
            iVar42 = iVar40;
            if ((int)uStack_1018 < 3) goto LAB_140668529;
            iVar42 = iVar40 * 3;
          }
          iVar42 = (int)(iVar42 + (iVar42 >> 0x1f & 3U)) >> 2;
        }
LAB_140668529:
        if (iVar13 < (iVar42 * 9) / 10) {
          uStack_1010._0_1_ = 1;
        }
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668497;
    lVar17 = callee_1400709a0(alStack_f58);
    if (lVar17 != 0) {
      if (iVar13 < (iStack_1044 * 9) / 10) {
        uStack_1010 = CONCAT31(uStack_1010._1_3_,1);
      }
      else if ((char)uStack_fe0 != '\0') {
        if ((int)uVar38 < -2) {
          iVar42 = iStack_1044 * 8 + 400;
        }
        else if (uVar38 == -2) {
          iVar42 = iStack_1044 * 4 + 100;
        }
        else if (uVar38 == -1) {
          iVar42 = iStack_1044 * 2 + 0x14;
        }
        else if (uVar38 == 0) {
          iVar42 = (iStack_1044 * 3) / 2;
        }
        else {
          if (uVar38 == 1) {
            iVar42 = iStack_1044 * 5;
          }
          else {
            iVar42 = iStack_1044;
            if ((int)uVar38 < 3) goto LAB_1406685ba;
            iVar42 = iStack_1044 * 3;
          }
          iVar42 = (int)(iVar42 + (iVar42 >> 0x1f & 3U)) >> 2;
        }
LAB_1406685ba:
        if (iVar13 < (iVar42 * 9) / 10) {
          uStack_1010._0_1_ = 1;
        }
      }
    }
    if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
      iVar42 = *(int *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x30);
      if (iVar42 < -2) {
        iStack_1044 = iStack_1044 * 8 + 400;
        iVar42 = iVar40 * 8 + 400;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
      else if (iVar42 == -2) {
        iStack_1044 = iStack_1044 * 4 + 100;
        iVar42 = iVar40 * 4 + 100;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
      else if (iVar42 == -1) {
        iStack_1044 = iStack_1044 * 2 + 0x14;
        iVar42 = iVar40 * 2 + 0x14;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
      else if (iVar42 == 0) {
        iStack_1044 = (iStack_1044 * 3) / 2;
        iVar42 = (iVar40 * 3) / 2;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
      else if (iVar42 == 1) {
        iStack_1044 = (int)(iStack_1044 * 5 + (iStack_1044 * 5 >> 0x1f & 3U)) >> 2;
        iVar42 = (int)(iVar40 * 5 + (iVar40 * 5 >> 0x1f & 3U)) >> 2;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
      else {
        if (iVar42 < 3) goto LAB_1406686cc;
        iStack_1044 = (int)(iStack_1044 * 3 + (iStack_1044 * 3 >> 0x1f & 3U)) >> 2;
        iVar42 = (int)(iVar40 * 3 + (iVar40 * 3 >> 0x1f & 3U)) >> 2;
        *(int *)(&stack0x00000028 + lVar16) = iVar42;
      }
    }
    else {
LAB_1406686cc:
      iVar42 = *(int *)(&stack0x00000028 + lVar16);
    }
    if (iVar13 < iVar42) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406686de;
      lVar17 = callee_1400709a0(auStack_fa8);
      if (lVar17 == 0) goto LAB_1406686e3;
LAB_140668708:
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668711;
      lVar17 = callee_1400709a0(auStack_fa8);
      if (lVar17 != 0) {
        lVar18 = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668728;
        uVar38 = callee_1400709a0(auStack_fa8);
        lVar17 = lVar18;
        if (0 < (int)uVar38) {
          uVar23 = (ulonglong)uVar38;
          do {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066873c;
            piVar25 = (int *)callee_140070990(auStack_fa8,lVar18);
            if (iVar11 < *piVar25) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668750;
              plVar21 = (longlong *)callee_140070850(auStack_bd0,lVar18);
              lVar17 = *plVar21;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066875f;
              piVar25 = (int *)callee_140070990(auStack_fa8,lVar18);
              iVar11 = *piVar25;
            }
            lVar18 = lVar18 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        if (*(int *)(&stack0x00000028 + lVar16) < iVar11) {
          iVar11 = *(int *)(&stack0x00000028 + lVar16);
        }
        if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668795;
          FUN_140070bd0(auStack_648,auStack_628);
          if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141683278, param_1 != _DAT_142407590)) {
            puVar36 = &UNK_141683268;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406687c1;
          callee_140070b90(auStack_648,puVar36);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406687d4;
          callee_1400bb340(auStack_648,auStack_5e8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406687e7;
          callee_140070b90(auStack_648,&UNK_1416836a0);
          if (lVar17 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406687ff;
            callee_140070b90(auStack_648,&UNK_141609848);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066880b;
            callee_140070cc0(auStack_318);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668824;
            FUN_140c7d140(lVar17,auStack_318,0,1);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668837;
            callee_1400bb340(auStack_648,auStack_318);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668844;
            callee_140069460(auStack_318);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668857;
          callee_140070b90(auStack_648,&UNK_1416096b8);
          lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066886d;
          FUN_140070bd0(auStack_648,auStack_5e8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668879;
          FUN_140546b30(auStack_648);
          if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141683698, param_2 != _DAT_142407590)) {
            puVar36 = &UNK_141683638;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406688a5;
          callee_140070b90(auStack_648,puVar36);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406688b8;
          callee_1400bb340(auStack_648,auStack_628);
          if (lVar17 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406688d0;
            callee_140070b90(auStack_648,&UNK_141609848);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406688dc;
            callee_140070cc0(auStack_338);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406688f5;
            FUN_140c7d140(lVar17,auStack_338,0,1);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668908;
            callee_1400bb340(auStack_648,auStack_338);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668915;
            callee_140069460(auStack_338);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668928;
          callee_140070b90(auStack_648,&UNK_1416096b8);
          lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
          *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 0x2000;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668941;
        callee_14007f210(&uStack_d88);
        uStack_d88 = 0xe;
        if (_DAT_1418be238 == 1) {
          puVar31 = param_1;
          if (lVar17 != 0) {
            puVar31 = *(undefined4 **)(lVar17 + 0x18);
          }
          if (puVar31 == _DAT_142407590) {
            uStack_d86 = 3;
            uStack_d84 = 1;
          }
          else if (param_2 == _DAT_142407590) {
            uStack_d86 = 4;
            uStack_d84 = 1;
          }
          else {
            if ((puVar31 != (undefined4 *)0x0) && (puVar31[0xf4] == _DAT_142407590[0x4c])) {
              uStack_d86 = 3;
              goto LAB_140668abd;
            }
            uStack_d84 = 0;
            if (param_2[0xf4] == _DAT_142407590[0x4c]) {
              uStack_d86 = 4;
            }
            else {
              uStack_d86 = 7;
            }
          }
        }
        else {
          puVar31 = param_1;
          if (lVar17 != 0) {
            puVar31 = *(undefined4 **)(lVar17 + 0x18);
          }
          if (puVar31 != (undefined4 *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668a2f;
            cVar7 = callee_1413a7620(puVar31);
            if (cVar7 != '\0') {
              uStack_d86 = 3;
              uStack_d84 = 1;
              goto LAB_140668ac4;
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668a55;
          cVar7 = callee_1413a7620(param_2);
          if (cVar7 == '\0') {
            if (puVar31 != (undefined4 *)0x0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668a80;
              cVar7 = callee_1413a7720(puVar31);
              if (cVar7 != '\0') {
                uStack_d86 = 3;
                goto LAB_140668abd;
              }
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668a9f;
            cVar7 = callee_1413a7720(param_2);
            if (cVar7 == '\0') {
              uStack_d86 = 7;
            }
            else {
              uStack_d86 = 4;
            }
LAB_140668abd:
            uStack_d84 = 0;
          }
          else {
            uStack_d86 = 4;
            uStack_d84 = 1;
          }
        }
LAB_140668ac4:
        uStack_d6c = 2000;
        uStack_d82 = *(undefined2 *)(param_2 + 0x2a);
        uStack_d80 = *(undefined2 *)((longlong)param_2 + 0xaa);
        uStack_d7e = *(undefined2 *)(param_2 + 0x2b);
        puStack_d68 = param_1;
        if (lVar17 != 0) {
          puStack_d68 = *(undefined4 **)(lVar17 + 0x18);
        }
        if (uStack_1038 != 0) {
          uStack_d4c = uStack_d4c | 1;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668b44;
        puStack_d60 = param_2;
        FUN_1400e5250(0x142505cd0,auStack_648,&uStack_d88);
        if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) && (_DAT_14266ba80 < 10)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668b75;
          cVar7 = callee_1400735c0(0x1423efbf0,0);
          if (cVar7 != '\0') {
            uVar10 = *(undefined2 *)(param_2 + 0x2b);
            uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
            uVar2 = *(undefined2 *)(param_2 + 0x2a);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668ba1;
            uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
            if ((uVar23 & 0x10) != 0) {
              iVar40 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
              iVar42 = -iVar40;
              if (-iVar40 < 0) {
                iVar42 = iVar40;
              }
              if (iVar42 < 2) {
                iVar14 = (int)*(short *)((longlong)param_1 + 0xaa) -
                         (int)*(short *)((longlong)param_2 + 0xaa);
                iVar42 = -iVar14;
                if (-iVar14 < 0) {
                  iVar42 = iVar14;
                }
                if ((iVar42 < 2) &&
                   ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                    (*(short *)((longlong)param_1 + 0xaa) != *(short *)((longlong)param_2 + 0xaa))))
                   ) {
                  lVar17 = (longlong)_DAT_14266ba80;
                  *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 2;
                  *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                  *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                       *(undefined2 *)((longlong)param_2 + 0xaa);
                  *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                  if (iVar14 == 0) {
                    if (iVar40 == 1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                    }
                    else if (iVar40 == -1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                    }
                  }
                  else if (iVar14 == 1) {
                    if (iVar40 == 0) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                    }
                    else if (iVar40 == 1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                    }
                    else if (iVar40 == -1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                    }
                  }
                  else if (iVar14 == -1) {
                    if (iVar40 == 0) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                    }
                    else if (iVar40 == 1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                    }
                    else if (iVar40 == -1) {
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                    }
                  }
                  *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668cf1;
                  _DAT_14266ba7c = GetTickCount();
                  _DAT_14266ba80 = _DAT_14266ba80 + 1;
                  if (plStack_770 == (longlong *)0x0) {
                    uVar19 = 0x158a;
                  }
                  else {
                    pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668d16;
                    sVar37 = (*pcVar5)();
                    if (sVar37 == 0x32) {
                      uVar19 = 0x158d;
                    }
                    else {
                      pcVar5 = *(code **)(*plStack_770 + 0x38);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668d33;
                      uVar10 = (*pcVar5)();
                      pcVar5 = *(code **)(*plStack_770 + 0x40);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668d43;
                      uVar12 = (*pcVar5)();
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668d5d;
                      cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                      if (cVar7 == '\0') {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668d80;
                        cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                        if (cVar7 == '\0') {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668da0;
                          cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                          uVar19 = 0x158e;
                          if (cVar7 != '\0') {
                            uVar19 = 0x1589;
                          }
                        }
                        else {
                          uVar19 = 0x158c;
                        }
                      }
                      else {
                        uVar19 = 0x158b;
                      }
                    }
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668dbb;
                  FUN_1407fdb30(uVar19);
                }
              }
            }
          }
        }
        if (iVar11 <= (iVar13 * 0xb) / 10) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668de6;
          FUN_140548ba0(param_2,3);
        }
        goto LAB_14066cb0e;
      }
LAB_140668deb:
      iVar40 = 0;
      puVar41 = (undefined4 *)0x0;
      puStack_fc8 = (undefined4 *)0x0;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668dfc;
      iVar42 = callee_1400709a0(alStack_f58);
      puVar31 = puVar41;
      if (0 < (longlong)iVar42) {
        do {
          if (iVar11 < *(int *)(alStack_f58[0] + (longlong)puVar41 * 4)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668e29;
            puVar20 = (undefined8 *)callee_140070850(auStack_ee0,iVar40);
            puStack_fc8 = (undefined4 *)*puVar20;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668e3c;
            piVar25 = (int *)callee_140070990(alStack_f58,iVar40);
            iVar11 = *piVar25;
          }
          iVar40 = iVar40 + 1;
          puVar41 = (undefined4 *)((longlong)puVar41 + 1);
          puVar31 = puStack_fc8;
          param_1 = puStack_fd8;
        } while ((longlong)puVar41 < (longlong)iVar42);
      }
      if (iStack_1044 < iVar11) {
        iVar11 = iStack_1044;
      }
      if ((puVar31 != (undefined4 *)0x0) && (iVar11 <= iVar13 * 2)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668e73;
        puVar41 = (undefined4 *)FUN_140660420(param_2);
        *puVar41 = 0xc;
        puVar41[3] = puVar31[7];
        if ((iVar13 * 0xb) / 10 < iVar11) {
          puVar41[2] = (iVar11 <= (iVar13 * 3) / 2) + 1;
        }
        else {
          puVar41[2] = 3;
        }
      }
      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
      if (lVar17 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668ee4;
        FUN_140070bd0(auStack_648,auStack_628);
        if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141683278, param_1 != _DAT_142407590)) {
          puVar36 = &UNK_141683268;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668f10;
        callee_140070b90(auStack_648,puVar36);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668f23;
        callee_1400bb340(auStack_648,auStack_5e8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668f36;
        callee_140070b90(auStack_648,&UNK_141683290);
        if (iVar13 * 2 < iVar11) {
          puVar36 = &UNK_141683628;
LAB_140668f80:
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668f8c;
          callee_140070b90(auStack_648,puVar36);
        }
        else {
          if (iVar11 <= (iVar13 * 0xb) / 10) {
            puVar36 = &UNK_141683658;
            goto LAB_140668f80;
          }
          if ((iVar13 * 3) / 2 < iVar11) {
            puVar36 = &UNK_141683228;
            goto LAB_140668f80;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668f9f;
        callee_140070b90(auStack_648,&UNK_141683648);
        if (puVar31 != (undefined4 *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668fb7;
          callee_140070b90(auStack_648,&UNK_141608c88);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668fc3;
          callee_140070cc0(auStack_2f8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668fdc;
          FUN_140c7d140(puVar31,auStack_2f8,0,1);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668fef;
          callee_1400bb340(auStack_648,auStack_2f8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140668ffc;
          callee_140069460(auStack_2f8);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066900f;
        callee_140070b90(auStack_648,&UNK_1416096b8);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669020;
        FUN_140070bd0(auStack_648,auStack_5e8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066902c;
        FUN_140546b30(auStack_648);
        if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141683604, param_2 != _DAT_142407590)) {
          puVar36 = &UNK_1416835fc;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669058;
        callee_140070b90(auStack_648,puVar36);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066906b;
        callee_1400bb340(auStack_648,auStack_628);
        puVar36 = &UNK_141683620;
        if ((*(byte *)(lVar17 + 0x48) & 0x80) == 0) {
          puVar36 = &UNK_141683610;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066908c;
        callee_140070b90(auStack_648,puVar36);
        if (puVar31 != (undefined4 *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690a4;
          callee_140070b90(auStack_648,&UNK_141609848);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690b0;
          callee_140070cc0(auStack_378);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690c9;
          FUN_140c7d140(puVar31,auStack_378,0,1);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690dc;
          callee_1400bb340(auStack_648,auStack_378);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690e9;
          callee_140069460(auStack_378);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406690fc;
        callee_140070b90(auStack_648,&UNK_1416096b8);
        *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 0x2000;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669110;
      callee_14007f210(&uStack_d38);
      uStack_d38 = 0xf;
      if (_DAT_1418be238 == 1) {
        puVar31 = param_1;
        if (lVar17 != 0) {
          puVar31 = *(undefined4 **)(lVar17 + 0x18);
        }
        if (puVar31 == _DAT_142407590) {
          uStack_d36 = 3;
          uStack_d34 = 1;
        }
        else if (param_2 == _DAT_142407590) {
          uStack_d36 = 4;
          uStack_d34 = 1;
        }
        else {
          if ((puVar31 != (undefined4 *)0x0) && (puVar31[0xf4] == _DAT_142407590[0x4c])) {
            uStack_d36 = 3;
            goto LAB_140669278;
          }
          uStack_d34 = 0;
          if (param_2[0xf4] == _DAT_142407590[0x4c]) {
            uStack_d36 = 4;
          }
          else {
            uStack_d36 = 7;
          }
        }
      }
      else {
        puVar31 = param_1;
        if (lVar17 != 0) {
          puVar31 = *(undefined4 **)(lVar17 + 0x18);
        }
        if (puVar31 != (undefined4 *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406691f4;
          cVar7 = callee_1413a7620(puVar31);
          if (cVar7 != '\0') {
            uStack_d36 = 3;
            uStack_d34 = 1;
            goto LAB_14066927f;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669215;
        cVar7 = callee_1413a7620(param_2);
        if (cVar7 == '\0') {
          if (puVar31 != (undefined4 *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669240;
            cVar7 = callee_1413a7720(puVar31);
            if (cVar7 != '\0') {
              uStack_d36 = 3;
              goto LAB_140669278;
            }
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066925a;
          cVar7 = callee_1413a7720(param_2);
          if (cVar7 == '\0') {
            uStack_d36 = 7;
          }
          else {
            uStack_d36 = 4;
          }
LAB_140669278:
          uStack_d34 = 0;
        }
        else {
          uStack_d36 = 4;
          uStack_d34 = 1;
        }
      }
LAB_14066927f:
      uStack_d1c = 2000;
      uStack_d32 = *(undefined2 *)(param_2 + 0x2a);
      uStack_d30 = *(undefined2 *)((longlong)param_2 + 0xaa);
      uStack_d2e = *(undefined2 *)(param_2 + 0x2b);
      puStack_d18 = param_1;
      if (lVar17 != 0) {
        puStack_d18 = *(undefined4 **)(lVar17 + 0x18);
      }
      if (uStack_1038 != 0) {
        uStack_cfc = uStack_cfc | 1;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406692ff;
      puStack_d10 = param_2;
      FUN_1400e5250(0x142505cd0,auStack_648,&uStack_d38);
      if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) && (_DAT_14266ba80 < 10)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669330;
        cVar7 = callee_1400735c0(0x1423efbf0,0);
        if (cVar7 != '\0') {
          uVar10 = *(undefined2 *)(param_2 + 0x2b);
          uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
          uVar2 = *(undefined2 *)(param_2 + 0x2a);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066935c;
          uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
          if ((uVar23 & 0x10) != 0) {
            iVar40 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
            iVar42 = -iVar40;
            if (-iVar40 < 0) {
              iVar42 = iVar40;
            }
            if (iVar42 < 2) {
              iVar14 = (int)*(short *)((longlong)param_1 + 0xaa) -
                       (int)*(short *)((longlong)param_2 + 0xaa);
              iVar42 = -iVar14;
              if (-iVar14 < 0) {
                iVar42 = iVar14;
              }
              if ((iVar42 < 2) &&
                 ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                  (*(short *)((longlong)param_1 + 0xaa) != *(short *)((longlong)param_2 + 0xaa)))))
              {
                lVar17 = (longlong)_DAT_14266ba80;
                *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 3;
                *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                     *(undefined2 *)((longlong)param_2 + 0xaa);
                *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                if (iVar14 == 0) {
                  if (iVar40 == 1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                  }
                  else if (iVar40 == -1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                  }
                }
                else if (iVar14 == 1) {
                  if (iVar40 == 0) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                  }
                  else if (iVar40 == 1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                  }
                  else if (iVar40 == -1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                  }
                }
                else if (iVar14 == -1) {
                  if (iVar40 == 0) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                  }
                  else if (iVar40 == 1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                  }
                  else if (iVar40 == -1) {
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                  }
                }
                *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406694a9;
                _DAT_14266ba7c = GetTickCount();
                _DAT_14266ba80 = _DAT_14266ba80 + 1;
                if (plStack_770 == (longlong *)0x0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669588;
                  FUN_1407fdb30(0x158a);
                }
                else {
                  pcVar5 = *(code **)(*plStack_770 + 0x38);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406694cb;
                  uVar10 = (*pcVar5)();
                  pcVar5 = *(code **)(*plStack_770 + 0x40);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406694db;
                  uVar12 = (*pcVar5)();
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406694f5;
                  cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                  if (cVar7 == '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669518;
                    cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                    if (cVar7 == '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669538;
                      cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                      uVar19 = 0x15b6;
                      if (cVar7 != '\0') {
                        uVar19 = 0x15b3;
                      }
                    }
                    else {
                      uVar19 = 0x15b5;
                    }
                  }
                  else {
                    uVar19 = 0x15b4;
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066954c;
                  FUN_1407fdb30(uVar19);
                }
              }
            }
          }
        }
      }
      if (iVar11 <= (iVar13 * 0xb) / 10) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669579;
        FUN_140548ba0(param_2,3);
      }
    }
    else {
LAB_1406686e3:
      if (iVar13 < iStack_1044) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406686f6;
        lVar17 = callee_1400709a0(alStack_f58);
        if (lVar17 != 0) {
          if (iVar13 < iVar42) goto LAB_140668708;
          goto LAB_140668deb;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669594;
      iVar11 = FUN_140073560(2);
      if (iVar11 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406695a9;
        lVar17 = callee_140074de0(param_2,0x51);
        if ((lVar17 == 0) && (param_2[0x30c] != -1)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406695d3;
          FUN_140074e10(param_2,0x51,500);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406695db;
          lVar17 = callee_1413cc070(param_2);
          if (lVar17 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406695fa;
            callee_140070870(lVar17 + 0x118,auStack_f40);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066960d;
            callee_140070860(lVar17 + 0x118,auStack_bf8);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669620;
            cVar7 = callee_1400bafa0(auStack_f40,auStack_bf8);
            while (cVar7 == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669630;
              plVar21 = (longlong *)callee_140070440(auStack_f40);
              puVar20 = (undefined8 *)*plVar21;
              pcVar5 = *(code **)*puVar20;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066963b;
              sVar37 = (*pcVar5)(puVar20);
              if (sVar37 == 4) {
                uVar12 = *(undefined4 *)(puVar20 + 1);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669650;
                lVar18 = FUN_1400693f0(0x14251c138,uVar12);
                if (lVar18 != 0) {
                  uVar12 = *(undefined4 *)(lVar17 + 0xe0);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669666;
                  lVar28 = callee_140c32f60(lVar18,uVar12);
                  if ((lVar28 != 0) && (0x31 < *(int *)(lVar28 + 0x60))) {
                    *(undefined4 *)(lVar28 + 0x60) = 0x19;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669822;
                    FUN_140070bd0(auStack_648,auStack_628);
                    if ((_DAT_1418be238 != 1) ||
                       (puVar36 = &UNK_14168320c, param_1 != _DAT_142407590)) {
                      puVar36 = &UNK_141683200;
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066984e;
                    callee_140070b90(auStack_648,puVar36);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669861;
                    callee_1400bb340(auStack_648,auStack_5e8);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669874;
                    callee_140070b90(auStack_648,&UNK_141683360);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669880;
                    callee_1400736b0(auStack_878);
                    *(undefined2 *)(&stack0xffffffffffffffe8 + lVar16) = 1;
                    uVar23 = 0;
                    *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 0;
                    uVar12 = *(undefined4 *)(lVar18 + 0xe0);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406698b4;
                    FUN_140baabd0(0x14251c138,auStack_648,uVar12,auStack_878);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406698c7;
                    callee_140070b90(auStack_648,&UNK_1416096b8);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406698d3;
                    callee_14007f210(&uStack_b58);
                    uStack_b58 = 0x5000c;
                    uStack_b54 = 1;
                    uStack_b3c = 2000;
                    uStack_b52 = *(undefined2 *)(param_2 + 0x2a);
                    uStack_b50 = *(undefined2 *)((longlong)param_2 + 0xaa);
                    uStack_b4e = *(undefined2 *)(param_2 + 0x2b);
                    lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                    puStack_b38 = param_1;
                    if (lVar17 != 0) {
                      puStack_b38 = *(undefined4 **)(lVar17 + 0x18);
                    }
                    if (uStack_1038 != 0) {
                      uStack_b1c = uStack_b1c | 1;
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066996e;
                    puStack_b30 = param_2;
                    FUN_1400e5250(0x142505cd0,auStack_648,&uStack_b58);
                    if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) &&
                       (_DAT_14266ba80 < 10)) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066999e;
                      cVar7 = callee_1400735c0(0x1423efbf0,0);
                      if (cVar7 == '\0') goto LAB_140669c17;
                      uVar10 = *(undefined2 *)(param_2 + 0x2b);
                      uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
                      uVar2 = *(undefined2 *)(param_2 + 0x2a);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406699ca;
                      uVar30 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
                      if ((uVar30 & 0x10) == 0) goto LAB_140669c17;
                      iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
                      iVar11 = -iVar13;
                      if (-iVar13 < 0) {
                        iVar11 = iVar13;
                      }
                      if (1 < iVar11) goto LAB_140669c17;
                      iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                               (int)*(short *)((longlong)param_2 + 0xaa);
                      iVar11 = -iVar42;
                      if (-iVar42 < 0) {
                        iVar11 = iVar42;
                      }
                      if ((1 < iVar11) ||
                         ((*(short *)(param_1 + 0x2a) == *(short *)(param_2 + 0x2a) &&
                          (*(short *)((longlong)param_1 + 0xaa) ==
                           *(short *)((longlong)param_2 + 0xaa))))) goto LAB_140669c17;
                      lVar17 = (longlong)_DAT_14266ba80;
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 1;
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                           *(undefined2 *)((longlong)param_2 + 0xaa);
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                      if (iVar42 == 0) {
                        if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                        }
                      }
                      else if (iVar42 == 1) {
                        if (iVar13 == 0) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                        }
                        else if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                        }
                      }
                      else if (iVar42 == -1) {
                        if (iVar13 == 0) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                        }
                        else if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                        }
                      }
                      *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b11;
                      _DAT_14266ba7c = GetTickCount();
                      _DAT_14266ba80 = _DAT_14266ba80 + 1;
                      if (plStack_770 == (longlong *)0x0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669c0e;
                        FUN_1407fdb30(0x157d);
                        puStack_1030 = param_1;
                      }
                      else {
                        pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b36;
                        sVar37 = (*pcVar5)();
                        if (sVar37 == 0x32) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b46;
                          FUN_1407fdb30(0x1580);
                          puStack_1030 = param_1;
                        }
                        else {
                          pcVar5 = *(code **)(*plStack_770 + 0x38);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b5f;
                          uVar10 = (*pcVar5)();
                          pcVar5 = *(code **)(*plStack_770 + 0x40);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b6f;
                          uVar12 = (*pcVar5)();
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b89;
                          cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                          if (cVar7 == '\0') {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669bbb;
                            cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                            if (cVar7 == '\0') {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669be7;
                              cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                              uVar19 = 0x1581;
                              if (cVar7 != '\0') {
                                uVar19 = 0x157c;
                              }
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669bfb;
                              FUN_1407fdb30(uVar19);
                              puStack_1030 = param_1;
                            }
                            else {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669bc9;
                              FUN_1407fdb30(0x157f);
                              puStack_1030 = param_1;
                            }
                          }
                          else {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669b97;
                            FUN_1407fdb30(0x157e);
                            puStack_1030 = param_1;
                          }
                        }
                      }
                    }
                    else {
LAB_140669c17:
                      puStack_1030 = param_1;
                      if (param_1 == (undefined4 *)0x0) {
                        puVar31 = (undefined4 *)0x0;
                        if (lVar17 == 0) goto LAB_14066cb22;
                        puStack_1030 = *(undefined4 **)(lVar17 + 0x18);
                        if (puStack_1030 == (undefined4 *)0x0) goto LAB_14066cb18;
                      }
                    }
                    puVar31 = puStack_1030;
                    uStack_fe0 = 0;
                    uStack_fc0 = 0;
                    iVar11 = 0;
                    *(undefined4 *)((longlong)&iStackX_24 + lVar16) = 0;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669c63;
                    callee_140070870(puStack_1030 + 0xc0,auStack_f28);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669c76;
                    callee_140070860(puVar31 + 0xc0,auStack_c48);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669c8d;
                    puVar24 = (undefined1 *)callee_140070450(auStack_f28,&uStack_ff0,auStack_c48);
                    uVar35 = *puVar24;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669c97;
                    cVar7 = callee_140066de0(uVar35,0);
                    if (cVar7 != '\0') goto LAB_140669ca0;
                    goto LAB_14066cb0e;
                  }
                }
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669681;
              callee_140070430(auStack_f40);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669694;
              cVar7 = callee_1400bafa0(auStack_f40,auStack_bf8);
            }
          }
        }
      }
      if (((char)uStack_1010 != '\0') && (sStack_768 != -1)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406696bc;
        callee_140067130(auStack_ba0);
        uVar19 = *(undefined8 *)(param_2 + 0x17e);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406696d1;
        plVar21 = (longlong *)callee_140070850(uVar19,(longlong)sStack_768);
        sVar37 = *(short *)(*plVar21 + 0x40);
        uVar19 = *(undefined8 *)(param_2 + 0x17e);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406696e4;
        asStack_1024[0] = callee_140070480(uVar19);
        while (asStack_1024[0] = asStack_1024[0] + -1, -1 < asStack_1024[0]) {
          uVar19 = *(undefined8 *)(param_2 + 0x17e);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669700;
          plVar21 = (longlong *)callee_140070850(uVar19,asStack_1024[0]);
          lVar17 = *plVar21;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669711;
          cVar7 = callee_1400735c0(lVar17 + 0x48,0xd);
          if ((cVar7 == '\0') &&
             ((asStack_1024[0] == sVar37 || (*(short *)(lVar17 + 0x40) == sStack_768)))) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066973b;
            callee_140070b20(auStack_ba0,asStack_1024);
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669755;
        lVar17 = callee_140070a80(auStack_ba0);
        if (lVar17 != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669766;
          uVar19 = callee_140070a80(auStack_ba0);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066976e;
          iVar11 = FUN_140073560(uVar19);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066977d;
          psVar29 = (short *)callee_140070a70(auStack_ba0,(longlong)iVar11);
          sStack_768 = *psVar29;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669793;
        callee_140067610(auStack_ba0);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066979f;
      callee_14065ba50(0x142505e08);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x1406697a7;
      sVar37 = FUN_1413425c0(param_2);
      iVar11 = (int)sVar37;
      puVar31 = *(undefined4 **)(&stack0x00000030 + lVar16);
      if ((sVar37 != 0) && (*(short *)(param_2 + 0x200) < 1)) {
        if ((puVar31 != (undefined4 *)0x0) && ((~((uint)puVar31[0xf] >> 0xe) & 1) == 0)) {
          if (iVar11 < 0x28) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a360;
            iVar13 = FUN_140073560(0x14);
            if (iVar13 != 0) goto LAB_14066a374;
          }
          else {
            iVar11 = iVar11 / 0x14;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a374;
        FUN_141354400(param_2,0x2d,iVar11);
      }
LAB_14066a374:
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a380;
      FUN_14065b960(auStack_588);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a38d;
      callee_14065b9b0(auStack_588);
      auStack_588[0] = 0x12;
      if (cStack_1034 == '\0') {
        if ((param_2[0x12d] != 0) || (param_2[0x12e] != 0)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a3bd;
          iVar11 = FUN_14139bee0(param_2);
          if (iVar11 != 0) {
            uStack_4e8 = uStack_4e8 | 1;
          }
        }
      }
      else if ((cStack_1034 == '\x01') && ((param_2[0x12d] != 0 || (param_2[0x12e] != 0)))) {
        uStack_4e8 = uStack_4e8 | 2;
      }
      bVar49 = false;
      if (((uStack_4e8 & 3) != 0) && (param_1 != (undefined4 *)0x0)) {
        bVar49 = false;
        if ((param_1[0x44] & 0x40000) != 0) {
          bVar49 = true;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a432;
      cVar7 = callee_1400735c0(auStack_718,8);
      if (cVar7 != '\0') {
        uStack_4e8 = uStack_4e8 | 4;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a44e;
      cVar7 = callee_1400735c0(auStack_718,9);
      if (cVar7 != '\0') {
        uStack_4e8 = uStack_4e8 | 0x10;
      }
      lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
      if (lVar17 != 0) {
        pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x2a8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a473;
        cVar7 = (*pcVar5)();
        if (cVar7 != '\0') {
          uStack_4e8 = uStack_4e8 | 0x40;
        }
      }
      if (lStack_760 == 0) {
        sStack_574 = sStack_768;
      }
      else {
        uStack_4e8 = uStack_4e8 | 8;
        uStack_584 = *(undefined4 *)(lStack_760 + 0x1c);
      }
      if (bVar49) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a4c8;
        uVar19 = FUN_14014c620(auStack_198,&UNK_141683340,auStack_758);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a4d7;
        FUN_1401fc980(auStack_548,uVar19);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a4e3;
        callee_140069460(auStack_198);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a4f8;
        FUN_140070bd0(auStack_548,auStack_758);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a509;
      cVar7 = callee_1400735c0(auStack_718,2);
      if (cVar7 == '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a529;
        FUN_140070b60(auStack_528,0);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a520;
        FUN_140070bd0(auStack_528,auStack_738);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a53c;
      FUN_14065b9c0(0x142505e08,auStack_588);
      if (!bVar49) {
        *(undefined2 *)(&stack0xffffffffffffffe8 + lVar16) = 5;
        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = *(undefined2 *)(param_2 + 0x2b);
        uVar10 = *(undefined2 *)((longlong)param_2 + 0xaa);
        uVar1 = *(undefined2 *)(param_2 + 0x2a);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a575;
        FUN_140dddeb0(0x14266bbb0,1,uVar1,uVar10);
      }
      if (lVar17 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a58f;
        cVar7 = callee_1400735c0(auStack_718,8);
        if (cVar7 == '\0') goto LAB_14066ac28;
        if ((param_2[0x44] & 0x10002) == 0) {
          bVar49 = false;
          sVar37 = -1;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a5ba;
          lVar17 = callee_140070a80(auStack_7a0);
          if (lVar17 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a5cd;
            psVar29 = (short *)callee_140070a70(auStack_788,0);
            if (*psVar29 == -1) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a5e1;
              psVar29 = (short *)callee_140070a70(auStack_7a0,0);
              sVar37 = *psVar29;
              uVar19 = *(undefined8 *)(param_1 + 0x17e);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a5f9;
              cVar7 = callee_1400fea20(uVar19,sVar37,9);
              bVar49 = cVar7 != '\0';
            }
          }
          if ((lStack_760 == 0) || (!bVar49)) {
            if (sVar37 != -1) {
              *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
              (abStackX_20 + lVar16 + -0x20)[0] = 1;
              (abStackX_20 + lVar16 + -0x20)[1] = 0;
              *(longlong *)(&stack0xfffffffffffffff8 + lVar16) = lStack_760;
              *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
              *(short *)(&stack0xffffffffffffffe8 + lVar16) = sStack_768;
              *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = param_2;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a774;
              FUN_140acf430(param_1,sVar37,0xffffffff,plStack_770);
            }
          }
          else {
            (&stack0xffffffffffffffe8)[lVar16] = 1;
            *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0xffffffff;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a644;
            FUN_1413412c0(param_1,lStack_760,1,(int)sVar37);
            bVar49 = false;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a65a;
            callee_140070870(param_2 + 500,auStack_f20);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a66d;
            callee_140070860(param_2 + 500,auStack_c40);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a684;
            puVar24 = (undefined1 *)callee_140070450(auStack_f20,&uStack_fef,auStack_c40);
            uVar35 = *puVar24;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a68e;
            cVar7 = callee_140066de0(uVar35,0);
            if (cVar7 != '\0') {
              do {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a6ac;
                puVar20 = (undefined8 *)callee_140070440(auStack_f20);
                piVar25 = (int *)*puVar20;
                if (((*piVar25 == 1) && (piVar25[3] == -1)) &&
                   (piVar25[9] == *(int *)(lStack_760 + 0x1c))) {
                  *piVar25 = -1;
                  bVar49 = true;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a6db;
                callee_140070430(auStack_f20);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a6f2;
                puVar24 = (undefined1 *)callee_140070450(auStack_f20,&uStack_fef,auStack_c40);
                uVar35 = *puVar24;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a6fc;
                cVar7 = callee_140066de0(uVar35,0);
              } while (cVar7 != '\0');
              if (bVar49) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a711;
                callee_14065b9b0(auStack_588);
                auStack_588[0] = 0x22;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a730;
                FUN_14065b9c0(0x142505e08,auStack_588);
              }
            }
          }
          *puVar31 = 0xffffffff;
          if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) && (_DAT_14266ba80 < 10)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a7a9;
            cVar7 = callee_1400735c0(0x1423efbf0,0);
            if (cVar7 != '\0') {
              uVar10 = *(undefined2 *)(param_2 + 0x2b);
              uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
              uVar2 = *(undefined2 *)(param_2 + 0x2a);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a7d5;
              uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
              if ((uVar23 & 0x10) != 0) {
                iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
                iVar11 = -iVar13;
                if (-iVar13 < 0) {
                  iVar11 = iVar13;
                }
                if (iVar11 < 2) {
                  iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                           (int)*(short *)((longlong)param_2 + 0xaa);
                  iVar11 = -iVar42;
                  if (-iVar42 < 0) {
                    iVar11 = iVar42;
                  }
                  if ((iVar11 < 2) &&
                     ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                      (*(short *)((longlong)param_1 + 0xaa) != *(short *)((longlong)param_2 + 0xaa))
                      ))) {
                    lVar17 = (longlong)_DAT_14266ba80;
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 0;
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                         *(undefined2 *)((longlong)param_2 + 0xaa);
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                    if (iVar42 == 0) {
                      if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                      }
                    }
                    else if (iVar42 == 1) {
                      if (iVar13 == 0) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                      }
                      else if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                      }
                    }
                    else if (iVar42 == -1) {
                      if (iVar13 == 0) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                      }
                      else if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                      }
                    }
                    *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a92d;
                    _DAT_14266ba7c = GetTickCount();
                    _DAT_14266ba80 = _DAT_14266ba80 + 1;
                    uVar19 = 0x1588;
LAB_14066abe8:
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066abed;
                    FUN_1407fdb30(uVar19);
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a94f;
          callee_14065b9b0(auStack_588);
          auStack_588[0] = 0x13;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a96e;
          FUN_14065b9c0(0x142505e08,auStack_588);
          if (((_DAT_1418be238 == 1) && (param_1 != (undefined4 *)0x0)) && (_DAT_14266ba80 < 10)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a99f;
            cVar7 = callee_1400735c0(0x1423efbf0,0);
            if (cVar7 != '\0') {
              uVar10 = *(undefined2 *)(param_2 + 0x2b);
              uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
              uVar2 = *(undefined2 *)(param_2 + 0x2a);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a9cb;
              uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
              if ((uVar23 & 0x10) != 0) {
                iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
                iVar11 = -iVar13;
                if (-iVar13 < 0) {
                  iVar11 = iVar13;
                }
                if (iVar11 < 2) {
                  iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                           (int)*(short *)((longlong)param_2 + 0xaa);
                  iVar11 = -iVar42;
                  if (-iVar42 < 0) {
                    iVar11 = iVar42;
                  }
                  if ((iVar11 < 2) &&
                     ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                      (*(short *)((longlong)param_1 + 0xaa) != *(short *)((longlong)param_2 + 0xaa))
                      ))) {
                    lVar17 = (longlong)_DAT_14266ba80;
                    *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 0;
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                         *(undefined2 *)((longlong)param_2 + 0xaa);
                    *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                    if (iVar42 == 0) {
                      if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                      }
                    }
                    else if (iVar42 == 1) {
                      if (iVar13 == 0) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                      }
                      else if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                      }
                    }
                    else if (iVar42 == -1) {
                      if (iVar13 == 0) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                      }
                      else if (iVar13 == 1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                      }
                      else if (iVar13 == -1) {
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                      }
                    }
                    *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x101;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ab23;
                    _DAT_14266ba7c = GetTickCount();
                    _DAT_14266ba80 = _DAT_14266ba80 + 1;
                    if (plStack_770 == (longlong *)0x0) {
                      uVar19 = 0x158a;
                    }
                    else {
                      pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ab48;
                      sVar37 = (*pcVar5)();
                      if (sVar37 == 0x32) {
                        uVar19 = 0x158d;
                      }
                      else {
                        pcVar5 = *(code **)(*plStack_770 + 0x38);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ab65;
                        uVar10 = (*pcVar5)();
                        pcVar5 = *(code **)(*plStack_770 + 0x40);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ab75;
                        uVar12 = (*pcVar5)();
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ab8f;
                        cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                        if (cVar7 == '\0') {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066abb2;
                          cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                          if (cVar7 == '\0') {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066abd2;
                            cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                            uVar19 = 0x158e;
                            if (cVar7 != '\0') {
                              uVar19 = 0x1589;
                            }
                          }
                          else {
                            uVar19 = 0x158c;
                          }
                        }
                        else {
                          uVar19 = 0x158b;
                        }
                      }
                    }
                    goto LAB_14066abe8;
                  }
                }
              }
            }
          }
        }
        *(short *)(&stack0xfffffffffffffff0 + lVar16) = sStack_768;
        *(int **)(&stack0xffffffffffffffe8 + lVar16) = aiStack_7a8;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar16) = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ac23;
        FUN_1400e6cc0(0x142505e08,param_1,param_2,0);
      }
      else {
LAB_14066ac28:
        uStack_fd0 = 0;
        uVar12 = 0;
        if (lVar17 == 0) {
          uVar12 = *(undefined4 *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x34);
          puVar31 = param_1;
        }
        else {
          pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x2a8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ac54;
          cVar7 = (*pcVar5)();
          if (cVar7 != '\0') {
            iStack_678 = 0;
            aiStack_7a8[0] = 0;
          }
          puVar31 = *(undefined4 **)(lVar17 + 0x18);
        }
        *(undefined4 *)((longlong)auStackX_10 + lVar16) = uVar12;
        *(int **)((longlong)&lStackX_8 + lVar16) = &iStack_fe4;
        *(int *)(abStackX_20 + lVar16 + -0x20) = iVar14;
        (&stack0xfffffffffffffff8)[lVar16] = 1;
        *(int **)(&stack0xfffffffffffffff0 + lVar16) = &iStack_f88;
        *(int **)(&stack0xffffffffffffffe8 + lVar16) = &iStack_eec;
        *(uint **)(&stack0xffffffffffffffe0 + lVar16) = &uStack_fd0;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066acb5;
        puVar31 = (undefined4 *)FUN_1413d49d0(param_2,sStack_768,aiStack_7a8,puVar31);
        abStackX_20[lVar16] = 1;
        puStack_fc8 = puVar31;
        if (puVar31 == (undefined4 *)0x0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066acde;
          puVar32 = (uint *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
          if (((uStack_fd0 | *puVar32) & 2) != 0) goto LAB_14066b69f;
          if (_DAT_1418be238 == 1) {
            if (param_1 == (undefined4 *)0x0) {
              if (lVar17 != 0) {
                uVar10 = *(undefined2 *)(param_2 + 0x2b);
                uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
                uVar2 = *(undefined2 *)(param_2 + 0x2a);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066afa1;
                uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
                if ((uVar23 & 0x10) != 0) {
                  pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x38);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066afb2;
                  uVar10 = (*pcVar5)();
                  pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x40);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066afc2;
                  uVar12 = (*pcVar5)();
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066afdc;
                  cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                  if (cVar7 == '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066affc;
                    cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                    uVar19 = 0x159e;
                    if (cVar7 == '\0') {
                      uVar19 = 0x15a4;
                    }
                  }
                  else {
                    uVar19 = 0x15a1;
                  }
LAB_14066b00a:
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b00f;
                  FUN_1407fdb30(uVar19);
                }
              }
            }
            else if (_DAT_14266ba80 < 10) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ad1d;
              cVar7 = callee_1400735c0(0x1423efbf0,0);
              if (cVar7 != '\0') {
                uVar10 = *(undefined2 *)(param_2 + 0x2b);
                uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
                uVar2 = *(undefined2 *)(param_2 + 0x2a);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ad49;
                uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
                if ((uVar23 & 0x10) != 0) {
                  iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
                  iVar11 = -iVar13;
                  if (-iVar13 < 0) {
                    iVar11 = iVar13;
                  }
                  if (iVar11 < 2) {
                    iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                             (int)*(short *)((longlong)param_2 + 0xaa);
                    iVar11 = -iVar42;
                    if (-iVar42 < 0) {
                      iVar11 = iVar42;
                    }
                    if ((iVar11 < 2) &&
                       ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                        (*(short *)((longlong)param_1 + 0xaa) !=
                         *(short *)((longlong)param_2 + 0xaa))))) {
                      lVar17 = (longlong)_DAT_14266ba80;
                      *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 0;
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                           *(undefined2 *)((longlong)param_2 + 0xaa);
                      *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                      if (iVar42 == 0) {
                        if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                        }
                      }
                      else if (iVar42 == 1) {
                        if (iVar13 == 0) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                        }
                        else if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                        }
                      }
                      else if (iVar42 == -1) {
                        if (iVar13 == 0) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                        }
                        else if (iVar13 == 1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                        }
                        else if (iVar13 == -1) {
                          *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                        }
                      }
                      *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x101;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066aea1;
                      _DAT_14266ba7c = GetTickCount();
                      _DAT_14266ba80 = _DAT_14266ba80 + 1;
                      if (plStack_770 == (longlong *)0x0) {
                        uVar19 = 0x158a;
                      }
                      else {
                        pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066aec6;
                        sVar37 = (*pcVar5)();
                        if (sVar37 == 0x32) {
                          uVar19 = 0x158d;
                        }
                        else {
                          pcVar5 = *(code **)(*plStack_770 + 0x38);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066aee3;
                          uVar10 = (*pcVar5)();
                          pcVar5 = *(code **)(*plStack_770 + 0x40);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066aef3;
                          uVar12 = (*pcVar5)();
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066af0d;
                          cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                          if (cVar7 == '\0') {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066af33;
                            cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                            if (cVar7 == '\0') {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066af56;
                              cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                              uVar19 = 0x158e;
                              if (cVar7 != '\0') {
                                uVar19 = 0x1589;
                              }
                            }
                            else {
                              uVar19 = 0x158c;
                            }
                          }
                          else {
                            uVar19 = 0x158b;
                          }
                        }
                      }
                      goto LAB_14066b00a;
                    }
                  }
                }
              }
            }
          }
          if ((uStack_fd0 & 4) == 0) {
            if ((uStack_fd0 & 1) == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b0c5;
              callee_14065b9b0(auStack_588);
              auStack_588[0] = 0x1a;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b0e4;
              FUN_14065b9c0(0x142505e08,auStack_588);
              if (*(longlong *)(&stack0x00000038 + lVar16) == 0) {
                if (((_DAT_142509faa != 0) && (param_1 != (undefined4 *)0x0)) &&
                   (*(undefined4 **)(param_1 + 0x124) == param_2)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b117;
                  cVar7 = callee_140074830(param_2);
                  if (cVar7 != '\0') {
                    param_1[0x126] = param_1[0x126] | 1;
                  }
                }
              }
              else {
                puVar32 = (uint *)(*(longlong *)(&stack0x00000038 + lVar16) + 0x48);
                *puVar32 = *puVar32 | 0x2000;
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b133;
              cVar7 = callee_1400735c0(auStack_718,8);
              if (cVar7 == '\0') {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b150;
                cVar7 = callee_1400735c0(auStack_718,4);
                if (((cVar7 != '\0') || ((param_2[0x44] & 0x10000) != 0)) ||
                   ((param_2[0x46] & 0x1000) != 0)) goto LAB_14066b3ee;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b18e;
                pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
                if ((*pbVar34 & 2) != 0) goto LAB_14066b3ee;
                if (iStack_fe4 < 0xf) goto LAB_14066b080;
                if (CONCAT44(uStack_f84,iStack_f88) < (longlong)((int)param_2[0x1ab] / 2))
                goto LAB_14066b3ee;
                uVar19 = *(undefined8 *)(param_2 + 0x17e);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b1d3;
                cVar7 = callee_1400fea20(uVar19,sStack_768,1);
                if (cVar7 == '\0') {
                  uVar19 = *(undefined8 *)(param_2 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b1f0;
                  cVar7 = callee_1400fea20(uVar19,sStack_768,2);
                  if (cVar7 == '\0') goto LAB_14066b3ee;
                }
                iVar11 = (int)sStack_fea;
                if ((sStack_fea == 0) && (uStack_1020 == 0)) goto LAB_14066b3ee;
                bVar45 = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b21d;
                callee_14065b9b0(auStack_588);
                auStack_588[0] = 0x14;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b23c;
                FUN_14065b9c0(0x142505e08,auStack_588);
                if ((int)param_2[0x1ab] < 1) {
LAB_14066b268:
                  iVar13 = 0x32;
                }
                else {
                  iVar13 = iStack_f88 / ((int)param_2[0x1ab] / 2 + 1);
                  if (iVar13 < 10) {
                    iVar13 = 10;
                  }
                  else if (0x32 < iVar13) goto LAB_14066b268;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b272;
                lVar17 = FUN_14065b8b0();
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b27f;
                cVar7 = FUN_14139ec30(param_2,1);
                if (cVar7 != '\0') {
                  *(undefined2 *)(param_2 + 0x1fd) = 7;
                }
                *(undefined2 *)(lVar17 + 0x20) = *(undefined2 *)(param_2 + 0x2a);
                *(undefined2 *)(lVar17 + 0x22) = *(undefined2 *)((longlong)param_2 + 0xaa);
                *(undefined2 *)(lVar17 + 0x24) = *(undefined2 *)(param_2 + 0x2b);
                *(undefined2 *)(lVar17 + 0x32) = *(undefined2 *)(param_2 + 0x2a);
                *(undefined2 *)(lVar17 + 0x34) = *(undefined2 *)((longlong)param_2 + 0xaa);
                *(undefined2 *)(lVar17 + 0x36) = *(undefined2 *)(param_2 + 0x2b);
                *(undefined2 *)(lVar17 + 0x2c) = *(undefined2 *)(param_2 + 0x2a);
                *(undefined2 *)(lVar17 + 0x2e) = *(undefined2 *)((longlong)param_2 + 0xaa);
                *(undefined2 *)(lVar17 + 0x30) = *(undefined2 *)(param_2 + 0x2b);
                *(undefined4 **)(lVar17 + 0x98) = param_2;
                *(undefined4 **)(lVar17 + 0x18) = param_1;
                *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 0x311;
                *(undefined8 *)(lVar17 + 0x74) = 0;
                *(undefined4 *)(lVar17 + 0x7c) = 0;
                *(int *)(lVar17 + 0x80) = iVar11 * iVar13 * 1000;
                *(int *)(lVar17 + 0x84) = (short)uStack_1020 * iVar13 * 1000;
                *(undefined8 *)(lVar17 + 0x88) = 0;
                *(undefined8 *)(lVar17 + 0x90) = 0;
                *(undefined4 *)(lVar17 + 0x50) = 0;
                if (param_1 != (undefined4 *)0x0) {
                  *(undefined4 *)(lVar17 + 100) = param_1[0x4c];
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b360;
                callee_141377450(param_2);
                param_2[0x44] = param_2[0x44] & 0xffff7fff | 0x10000;
                param_2[0x133] = 0x8ad08ad0;
                *(undefined2 *)(param_2 + 0x134) = 0x8ad0;
                if (param_2[0x135] != -1) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b3a6;
                  lVar17 = FUN_140073d10(&DAT_1424078d0);
                  if (lVar17 != 0) {
                    uVar12 = param_2[0x4c];
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b3bf;
                    FUN_140cc9110(lVar17,0x3a,uVar12);
                  }
                  param_2[0x135] = 0xffffffff;
                }
                *(undefined1 *)(param_2 + 0x131) = 0;
                param_2[0x132] = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b3e0;
                FUN_141367b10(param_2);
              }
              else {
LAB_14066b3ee:
                bVar45 = 1;
              }
              if (((0xe < iStack_fe4) && (*(longlong *)(&stack0x00000038 + lVar16) == 0)) &&
                 ((param_2[0x44] & 0x10002) == 0)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b42c;
                pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
                if ((*pbVar34 & 2) == 0) {
                  bVar49 = false;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b44b;
                  callee_140070870(param_1 + 500,auStack_f18);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b45e;
                  callee_140070860(param_1 + 500,auStack_c38);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b475;
                  puVar24 = (undefined1 *)callee_140070450(auStack_f18,&uStack_fee,auStack_c38);
                  uVar35 = *puVar24;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b47f;
                  cVar7 = callee_140066de0(uVar35,0);
                  while (cVar7 != '\0') {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b48f;
                    puVar20 = (undefined8 *)callee_140070440(auStack_f18);
                    if (*(int *)*puVar20 == 0) {
                      bVar49 = true;
                      break;
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b4a3;
                    callee_140070430(auStack_f18);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b4ba;
                    puVar24 = (undefined1 *)callee_140070450(auStack_f18,&uStack_fee,auStack_c38);
                    uVar35 = *puVar24;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b4c4;
                    cVar7 = callee_140066de0(uVar35,0);
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b4dc;
                  cVar7 = callee_1400735c0(auStack_718,4);
                  if ((cVar7 != '\0') && (!bVar49)) {
                    abStackX_20[lVar16] = 0;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b4fe;
                    uVar38 = callee_1400709a0(param_2 + 0x13c);
                    do {
                      do {
                        do {
                          uVar38 = uVar38 - 1;
                          if ((int)uVar38 < 0) goto LAB_14066b561;
                          uVar19 = *(undefined8 *)(param_2 + 0x17e);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b522;
                          plVar21 = (longlong *)callee_140070850(uVar19,(longlong)(int)uVar38);
                        } while (*(short *)(*plVar21 + 0x40) != sStack_768);
                        uVar19 = *(undefined8 *)(param_2 + 0x17e);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b544;
                        cVar7 = callee_1400fea20(uVar19,uVar38 & 0xffff,0xe);
                      } while (cVar7 == '\0');
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b557;
                      pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)(int)uVar38);
                    } while ((*pbVar34 & 2) != 0);
LAB_14066b561:
                    iVar11 = iStack_65c >> 2;
                    if (0x32 < iStack_65c >> 2) {
                      iVar11 = 0x32;
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b57f;
                    iVar13 = FUN_140073560(100);
                    if ((iVar13 < iVar11) && (uVar38 != 0xffffffff)) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b59c;
                      callee_14065b9b0(auStack_588);
                      auStack_588[0] = 0x16;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b5c2;
                      sStack_574 = (short)uVar38;
                      FUN_14065b9c0(0x142505e08,auStack_588);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b5d1;
                      callee_1400e4d60(param_1,2);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b5db;
                      callee_1400e4d60(param_2,2);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b5e9;
                      puVar27 = (undefined2 *)callee_140070a70(auStack_7a0,0);
                      *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
                      (abStackX_20 + lVar16 + -0x20)[0] = 0;
                      (abStackX_20 + lVar16 + -0x20)[1] = 0;
                      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                      *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                      *(short *)(&stack0xffffffffffffffe8 + lVar16) = (short)uVar38;
                    }
                    else {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b632;
                      callee_14065b9b0(auStack_588);
                      auStack_588[0] = 0x17;
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b651;
                      FUN_14065b9c0(0x142505e08,auStack_588);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b660;
                      callee_1400e4d60(param_1,1);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b66a;
                      callee_1400e4d60(param_2,1);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b678;
                      puVar27 = (undefined2 *)callee_140070a70(auStack_7a0,0);
                      *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
                      (abStackX_20 + lVar16 + -0x20)[0] = 0;
                      (abStackX_20 + lVar16 + -0x20)[1] = 0;
                      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                      *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                      *(short *)(&stack0xffffffffffffffe8 + lVar16) = sStack_768;
                    }
                    *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = param_2;
                    uVar10 = *puVar27;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b61b;
                    FUN_140acf430(param_1,uVar10,0xffffffff,0);
                    bVar45 = abStackX_20[lVar16];
                  }
                }
              }
            }
            else {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b061;
              callee_14065b9b0(auStack_588);
              auStack_588[0] = 0x19;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b080;
              FUN_14065b9c0(0x142505e08,auStack_588);
LAB_14066b080:
              bVar45 = 1;
            }
          }
          else {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b021;
            callee_14065b9b0(auStack_588);
            auStack_588[0] = 0x21;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b040;
            FUN_14065b9c0(0x142505e08,auStack_588);
            bVar45 = 1;
            if (*(longlong *)(&stack0x00000038 + lVar16) != 0) {
              puVar32 = (uint *)(*(longlong *)(&stack0x00000038 + lVar16) + 0x48);
              *puVar32 = *puVar32 | 0x2000;
            }
          }
          *(short *)(&stack0xfffffffffffffff0 + lVar16) = sStack_768;
          *(int **)(&stack0xffffffffffffffe8 + lVar16) = aiStack_7a8;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar16) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b0bb;
          FUN_1400e6cc0(0x142505e08,param_1,param_2,*(undefined8 *)(&stack0x00000038 + lVar16));
        }
        else {
LAB_14066b69f:
          if (_DAT_1418be238 == 1) {
            if (param_1 != (undefined4 *)0x0) {
              if (_DAT_14266ba80 < 10) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b6d0;
                cVar7 = callee_1400735c0(0x1423efbf0,0);
                if (cVar7 != '\0') {
                  uVar10 = *(undefined2 *)(param_2 + 0x2b);
                  uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
                  uVar2 = *(undefined2 *)(param_2 + 0x2a);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b6fc;
                  uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
                  if ((uVar23 & 0x10) != 0) {
                    iVar13 = (int)*(short *)(param_1 + 0x2a) - (int)*(short *)(param_2 + 0x2a);
                    iVar11 = -iVar13;
                    if (-iVar13 < 0) {
                      iVar11 = iVar13;
                    }
                    if (iVar11 < 2) {
                      iVar42 = (int)*(short *)((longlong)param_1 + 0xaa) -
                               (int)*(short *)((longlong)param_2 + 0xaa);
                      iVar11 = -iVar42;
                      if (-iVar42 < 0) {
                        iVar11 = iVar42;
                      }
                      if ((iVar11 < 2) &&
                         ((*(short *)(param_1 + 0x2a) != *(short *)(param_2 + 0x2a) ||
                          (*(short *)((longlong)param_1 + 0xaa) !=
                           *(short *)((longlong)param_2 + 0xaa))))) {
                        lVar17 = (longlong)_DAT_14266ba80;
                        *(undefined4 *)(lVar17 * 4 + 0x14266b9c8) = 0;
                        *(undefined2 *)(lVar17 * 2 + 0x14266ba40) = *(undefined2 *)(param_2 + 0x2a);
                        *(undefined2 *)(lVar17 * 2 + 0x14266ba54) =
                             *(undefined2 *)((longlong)param_2 + 0xaa);
                        *(undefined2 *)(lVar17 * 2 + 0x14266ba68) = *(undefined2 *)(param_2 + 0x2b);
                        if (iVar42 == 0) {
                          if (iVar13 == 1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 3;
                          }
                          else if (iVar13 == -1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 2;
                          }
                        }
                        else if (iVar42 == 1) {
                          if (iVar13 == 0) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 1;
                          }
                          else if (iVar13 == 1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 7;
                          }
                          else if (iVar13 == -1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 6;
                          }
                        }
                        else if (iVar42 == -1) {
                          if (iVar13 == 0) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 0;
                          }
                          else if (iVar13 == 1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 5;
                          }
                          else if (iVar13 == -1) {
                            *(undefined4 *)(lVar17 * 4 + 0x14266b9f0) = 4;
                          }
                        }
                        *(undefined4 *)(lVar17 * 4 + 0x14266ba18) = 0x100;
                        uVar10 = *(undefined2 *)(param_2 + 0x4b);
                        uVar1 = *(undefined2 *)(param_2 + 0x29);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b869;
                        cVar7 = callee_140073e80(0x14250eec8,uVar1,uVar10,0x45);
                        if (cVar7 != '\0') {
                          *(undefined1 **)(&stack0xffffffffffffffe8 + lVar16) = auStack_f08;
                          *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = &uStack_ef0;
                          uVar10 = *(undefined2 *)(param_2 + 0x4b);
                          uVar1 = *(undefined2 *)(param_2 + 0x29);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b8a9;
                          callee_140721f50(0x14250eec8,uVar1,uVar10,auStack_fb4);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b8c0;
                          lVar18 = FUN_1414c6fe0(0x1423f3970,auStack_fb4[0],uStack_ef0);
                          if ((lVar18 != 0) && (-1 < *(int *)(lVar18 + 0x9c))) {
                            iVar11 = *(int *)(lVar18 + 0x9c);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b8e1;
                            uVar23 = callee_140070480(0x142519568);
                            if ((ulonglong)(longlong)iVar11 < uVar23) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b8f5;
                              plVar21 = (longlong *)callee_140070850(0x142519568,(longlong)iVar11);
                              lVar18 = *plVar21;
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b903;
                              puVar33 = (ushort *)callee_140070a70(lVar18 + 0x20,0);
                              iVar11 = 0;
                              if (*puVar33 < 0xff) {
                                iVar11 = (int)(short)*puVar33;
                              }
                              *(int *)(lVar17 * 4 + 0x14266ba18) = iVar11;
                            }
                          }
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b922;
                        _DAT_14266ba7c = GetTickCount();
                        _DAT_14266ba80 = _DAT_14266ba80 + 1;
                        if (plStack_770 == (longlong *)0x0) {
                          uVar19 = 0x1583;
                        }
                        else {
                          pcVar5 = *(code **)(*plStack_770 + 0x4f0);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b947;
                          sVar37 = (*pcVar5)();
                          if (sVar37 == 0x32) {
                            uVar19 = 0x1586;
                          }
                          else {
                            pcVar5 = *(code **)(*plStack_770 + 0x38);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b9ef;
                            uVar10 = (*pcVar5)();
                            pcVar5 = *(code **)(*plStack_770 + 0x40);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b9ff;
                            uVar12 = (*pcVar5)();
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ba19;
                            cVar7 = FUN_141475150(0x1423f3970,0x31,uVar10,uVar12);
                            if (cVar7 == '\0') {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ba3f;
                              cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
                              if (cVar7 == '\0') {
                                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ba62;
                                cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
                                uVar19 = 0x1587;
                                if (cVar7 != '\0') {
                                  uVar19 = 0x1582;
                                }
                              }
                              else {
                                uVar19 = 0x1585;
                              }
                            }
                            else {
                              uVar19 = 0x1584;
                            }
                          }
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b95b;
                        FUN_1407fdb30(uVar19);
                        lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                      }
                    }
                  }
                }
              }
              goto LAB_14066b960;
            }
            if (lVar17 == 0) goto LAB_14066b960;
            uVar10 = *(undefined2 *)(param_2 + 0x2b);
            uVar1 = *(undefined2 *)((longlong)param_2 + 0xaa);
            uVar2 = *(undefined2 *)(param_2 + 0x2a);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066baad;
            uVar23 = callee_14007f270(0x1423f3970,uVar2,uVar1,uVar10);
            if ((uVar23 & 0x10) == 0) goto LAB_14066b960;
            pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x38);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bac2;
            uVar10 = (*pcVar5)();
            pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x40);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bad2;
            uVar12 = (*pcVar5)();
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066baec;
            cVar7 = FUN_141475150(0x1423f3970,0x2f,uVar10,uVar12);
            if (cVar7 == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bb0c;
              cVar7 = FUN_141475150(0x1423f3970,0,uVar10,uVar12);
              if (cVar7 == '\0') {
                uVar19 = 0x15a5;
              }
              else {
                uVar19 = 0x159f;
              }
            }
            else {
              uVar19 = 0x15a2;
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bb1a;
            FUN_1407fdb30(uVar19);
            lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
LAB_14066bb26:
            *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 0x2000;
            if (*(longlong *)(lVar17 + 0x18) == 0) {
              uVar12 = 0xffffffff;
            }
            else {
              uVar12 = *(undefined4 *)(*(longlong *)(lVar17 + 0x18) + 0x130);
            }
            param_2[0xf3] = uVar12;
            if (*(longlong *)(lVar17 + 0x98) == 0) {
              *(undefined8 *)(param_2 + 0xf9) = 0xffffffffffffffff;
              *(undefined2 *)(param_2 + 0xfb) = 0xffff;
              uVar12 = 0xffffffff;
            }
            else {
              param_2[0xf9] = *(undefined4 *)(*(longlong *)(lVar17 + 0x98) + 0x1c);
              pcVar5 = *(code **)**(undefined8 **)(lVar17 + 0x98);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bbaa;
              uVar10 = (*pcVar5)();
              *(undefined2 *)(param_2 + 0xfa) = uVar10;
              pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 8);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bbbf;
              uVar10 = (*pcVar5)();
              *(undefined2 *)((longlong)param_2 + 0x3ea) = uVar10;
              pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bbd4;
              uVar10 = (*pcVar5)();
              *(undefined2 *)(param_2 + 0xfb) = uVar10;
              pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bbe9;
              uVar12 = (*pcVar5)();
            }
            param_2[0xfc] = uVar12;
            param_2[0xfd] = *(undefined4 *)(lVar17 + 0x5c);
            uVar12 = *(undefined4 *)(lVar17 + 0x5c);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc23;
            plVar21 = (longlong *)FUN_140073d10(&DAT_1424078d0,uVar12);
            if (plVar21 != (longlong *)0x0) {
              pcVar5 = *(code **)*plVar21;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc33;
              uVar10 = (*pcVar5)(plVar21);
              *(undefined2 *)(param_2 + 0xfe) = uVar10;
              pcVar5 = *(code **)(*plVar21 + 8);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc44;
              uVar10 = (*pcVar5)(plVar21);
              *(undefined2 *)((longlong)param_2 + 0x3fa) = uVar10;
              pcVar5 = *(code **)(*plVar21 + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc55;
              uVar10 = (*pcVar5)(plVar21);
              *(undefined2 *)(param_2 + 0xff) = uVar10;
              pcVar5 = *(code **)(*plVar21 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc66;
              uVar12 = (*pcVar5)(plVar21);
              param_2[0x100] = uVar12;
            }
          }
          else {
LAB_14066b960:
            if (lVar17 != 0) goto LAB_14066bb26;
            param_2[0xf3] = param_1[0x4c];
            if (plStack_770 == (longlong *)0x0) {
              *(undefined8 *)(param_2 + 0xf9) = 0xffffffffffffffff;
              *(undefined2 *)(param_2 + 0xfb) = 0xffff;
              uVar12 = 0xffffffff;
            }
            else {
              param_2[0xf9] = *(undefined4 *)((longlong)plStack_770 + 0x1c);
              pcVar5 = *(code **)*plStack_770;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b99e;
              uVar10 = (*pcVar5)();
              *(undefined2 *)(param_2 + 0xfa) = uVar10;
              pcVar5 = *(code **)(*plStack_770 + 8);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b9b3;
              uVar10 = (*pcVar5)();
              *(undefined2 *)((longlong)param_2 + 0x3ea) = uVar10;
              pcVar5 = *(code **)(*plStack_770 + 0x10);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b9c8;
              uVar10 = (*pcVar5)();
              *(undefined2 *)(param_2 + 0xfb) = uVar10;
              pcVar5 = *(code **)(*plStack_770 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066b9dd;
              uVar12 = (*pcVar5)();
            }
            param_2[0xfc] = uVar12;
            *(undefined8 *)(param_2 + 0xfd) = 0xffffffffffffffff;
            *(undefined2 *)(param_2 + 0xff) = 0xffff;
            param_2[0x100] = 0xffffffff;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc7e;
          cVar7 = callee_1400735c0(auStack_718,8);
          if (cVar7 == '\0') {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bc97;
            cVar7 = callee_1400735c0(auStack_718,4);
            if (((cVar7 == '\0') && ((param_2[0x44] & 0x10000) == 0)) &&
               ((param_2[0x46] & 0x1000) == 0)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bcd5;
              pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
              if ((*pbVar34 & 2) == 0) {
                if ((0xe < iStack_fe4) &&
                   ((longlong)((int)param_2[0x1ab] / 2) <= CONCAT44(uStack_f84,iStack_f88))) {
                  uVar19 = *(undefined8 *)(param_2 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bd1a;
                  cVar7 = callee_1400fea20(uVar19,sStack_768,1);
                  if (cVar7 == '\0') {
                    uVar19 = *(undefined8 *)(param_2 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bd37;
                    cVar7 = callee_1400fea20(uVar19,sStack_768,2);
                    if (cVar7 == '\0') goto LAB_14066bf34;
                  }
                  iVar11 = (int)sStack_fea;
                  if ((sStack_fea != 0) || (uStack_1020 != 0)) {
                    abStackX_20[lVar16] = 0;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bd66;
                    callee_14065b9b0(auStack_588);
                    auStack_588[0] = 0x14;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bd85;
                    FUN_14065b9c0(0x142505e08,auStack_588);
                    if ((int)param_2[0x1ab] < 1) {
LAB_14066bdb1:
                      iVar13 = 0x32;
                    }
                    else {
                      iVar13 = iStack_f88 / ((int)param_2[0x1ab] / 2 + 1);
                      if (iVar13 < 10) {
                        iVar13 = 10;
                      }
                      else if (0x32 < iVar13) goto LAB_14066bdb1;
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bdbb;
                    lVar17 = FUN_14065b8b0();
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bdc8;
                    cVar7 = FUN_14139ec30(param_2,1);
                    if (cVar7 != '\0') {
                      *(undefined2 *)(param_2 + 0x1fd) = 7;
                    }
                    *(undefined2 *)(lVar17 + 0x20) = *(undefined2 *)(param_2 + 0x2a);
                    *(undefined2 *)(lVar17 + 0x22) = *(undefined2 *)((longlong)param_2 + 0xaa);
                    *(undefined2 *)(lVar17 + 0x24) = *(undefined2 *)(param_2 + 0x2b);
                    *(undefined2 *)(lVar17 + 0x32) = *(undefined2 *)(param_2 + 0x2a);
                    *(undefined2 *)(lVar17 + 0x34) = *(undefined2 *)((longlong)param_2 + 0xaa);
                    *(undefined2 *)(lVar17 + 0x36) = *(undefined2 *)(param_2 + 0x2b);
                    *(undefined2 *)(lVar17 + 0x2c) = *(undefined2 *)(param_2 + 0x2a);
                    *(undefined2 *)(lVar17 + 0x2e) = *(undefined2 *)((longlong)param_2 + 0xaa);
                    *(undefined2 *)(lVar17 + 0x30) = *(undefined2 *)(param_2 + 0x2b);
                    *(undefined4 **)(lVar17 + 0x98) = param_2;
                    *(undefined4 **)(lVar17 + 0x18) = param_1;
                    *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 0x311;
                    *(undefined8 *)(lVar17 + 0x74) = 0;
                    *(undefined4 *)(lVar17 + 0x7c) = 0;
                    *(int *)(lVar17 + 0x80) = iVar11 * iVar13 * 1000;
                    *(int *)(lVar17 + 0x84) = (short)uStack_1020 * iVar13 * 1000;
                    *(undefined8 *)(lVar17 + 0x88) = 0;
                    *(undefined8 *)(lVar17 + 0x90) = 0;
                    *(undefined4 *)(lVar17 + 0x50) = 0;
                    if (param_1 != (undefined4 *)0x0) {
                      *(undefined4 *)(lVar17 + 100) = param_1[0x4c];
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bea9;
                    callee_141377450(param_2);
                    param_2[0x44] = param_2[0x44] & 0xffff7fff | 0x10000;
                    param_2[0x133] = 0x8ad08ad0;
                    *(undefined2 *)(param_2 + 0x134) = 0x8ad0;
                    if (param_2[0x135] != -1) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066beef;
                      lVar17 = FUN_140073d10(&DAT_1424078d0);
                      if (lVar17 != 0) {
                        uVar12 = param_2[0x4c];
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bf08;
                        FUN_140cc9110(lVar17,0x3a,uVar12);
                      }
                      param_2[0x135] = 0xffffffff;
                    }
                    *(undefined1 *)(param_2 + 0x131) = 0;
                    param_2[0x132] = 0;
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bf2a;
                    FUN_141367b10(param_2);
                    lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                    goto LAB_14066c0ac;
                  }
                }
LAB_14066bf34:
                if ((lVar17 == 0) || ((~(*(uint *)(lVar17 + 0x48) >> 4) & 1) != 0)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bf53;
                  iVar11 = FUN_140073560(100);
                  if (iVar11 < iStack_eec) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bf70;
                    cVar7 = callee_1400735c0(auStack_718,3);
                    if (cVar7 == '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bf80;
                      cVar7 = callee_14065b830(param_2);
                      if (cVar7 != '\0') {
                        plVar21 = plStack_770;
                        if (lVar17 != 0) {
                          plVar21 = *(longlong **)(lVar17 + 0x98);
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bfa7;
                        callee_14065b9b0(auStack_588);
                        auStack_588[0] = 0x15;
                        uStack_584 = *(undefined4 *)((longlong)plVar21 + 0x1c);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bfcf;
                        FUN_14065b9c0(0x142505e08,auStack_588);
                        (&stack0xffffffffffffffe8)[lVar16] = 1;
                        *(undefined4 *)(&stack0xffffffffffffffe0 + lVar16) = 0xffffffff;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066bff2;
                        lVar18 = FUN_1413412c0(param_2,plVar21,6,(int)sStack_768);
                        if ((lVar18 != 0) && (puVar31 != (undefined4 *)0x0)) {
                          *(undefined4 *)(lVar18 + 0x10) = *puVar31;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c00b;
                        cVar7 = callee_1400e4d00(param_2);
                        if (cVar7 != '\0') {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c02a;
                          FUN_1413daf90(param_2,auStack_fb0,&uStack_ee8,asStack_fe8);
                          if (asStack_fe8[0] != 2) {
                            uVar10 = 0x271f;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c043;
                            lVar17 = callee_140070480(param_2 + 0x312);
                            if (lVar17 != 0) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c05c;
                              puVar20 = (undefined8 *)
                                        callee_140070850(param_2 + 0x312,(longlong)sStack_768);
                              uVar10 = *(undefined2 *)*puVar20;
                            }
                            pcVar5 = *(code **)(*plVar21 + 0x3f0);
                            *(undefined2 *)(&stack0xfffffffffffffff8 + lVar16) = 1;
                            *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                            *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 100;
                            *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = uVar10;
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c09e;
                            (*pcVar5)(plVar21,auStack_fb0[0],uStack_ee8,asStack_fe8[0]);
                            lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
                          }
                        }
                        if (lVar17 != 0) {
                          *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_14066c0ac:
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c0b6;
          cVar7 = FUN_14139ec30(param_2,1);
          if (cVar7 != '\0') {
            param_2[0x44] = param_2[0x44] | 2;
          }
          param_2[0x45] = param_2[0x45] & 0xffffffcf;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c0d2;
          FUN_14139e410(param_2);
          if (((*(byte *)(param_2 + 0x44) & 2) != 0) && (param_1 != (undefined4 *)0x0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c0ee;
            callee_1400e4d60(param_1,5);
          }
          if (((0xe < iStack_fe4) && (lVar17 == 0)) && ((param_2[0x44] & 0x10002) == 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c126;
            pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
            if ((*pbVar34 & 2) == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c142;
              callee_140070870(param_1 + 500,auStack_f10);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c155;
              callee_140070860(param_1 + 500,auStack_c30);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c16c;
              puVar24 = (undefined1 *)callee_140070450(auStack_f10,&uStack_fed,auStack_c30);
              uVar35 = *puVar24;
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c176;
              cVar7 = callee_140066de0(uVar35,0);
              bVar49 = false;
              while (cVar7 != '\0') {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c18c;
                puVar20 = (undefined8 *)callee_140070440(auStack_f10);
                if (*(int *)*puVar20 == 0) {
                  bVar49 = true;
                  break;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c1a0;
                callee_140070430(auStack_f10);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c1b7;
                puVar24 = (undefined1 *)callee_140070450(auStack_f10,&uStack_fed,auStack_c30);
                uVar35 = *puVar24;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c1c1;
                cVar7 = callee_140066de0(uVar35,0);
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c1db;
              cVar7 = callee_1400735c0(auStack_718,4);
              if ((cVar7 != '\0') && (!bVar49)) {
                abStackX_20[lVar16] = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c1fd;
                uVar38 = callee_1400709a0(param_2 + 0x13c);
                do {
                  do {
                    do {
                      uVar38 = uVar38 - 1;
                      if ((int)uVar38 < 0) goto LAB_14066c261;
                      uVar19 = *(undefined8 *)(param_2 + 0x17e);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c222;
                      plVar21 = (longlong *)callee_140070850(uVar19,(longlong)(int)uVar38);
                    } while (*(short *)(*plVar21 + 0x40) != sStack_768);
                    uVar19 = *(undefined8 *)(param_2 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c244;
                    cVar7 = callee_1400fea20(uVar19,uVar38 & 0xffff,0xe);
                  } while (cVar7 == '\0');
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c257;
                  pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)(int)uVar38);
                } while ((*pbVar34 & 2) != 0);
LAB_14066c261:
                iVar11 = iStack_65c >> 2;
                if (0x32 < iStack_65c >> 2) {
                  iVar11 = 0x32;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c27f;
                iVar13 = FUN_140073560(100);
                if ((iVar13 < iVar11) && (uVar38 != 0xffffffff)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c294;
                  callee_14065b9b0(auStack_588);
                  auStack_588[0] = 0x16;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c2ba;
                  sStack_574 = (short)uVar38;
                  FUN_14065b9c0(0x142505e08,auStack_588);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c2c9;
                  callee_1400e4d60(param_1,2);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c2d3;
                  callee_1400e4d60(param_2,2);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c2e1;
                  puVar27 = (undefined2 *)callee_140070a70(auStack_7a0,0);
                  *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
                  (abStackX_20 + lVar16 + -0x20)[0] = 0;
                  (abStackX_20 + lVar16 + -0x20)[1] = 0;
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                  *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                  *(short *)(&stack0xffffffffffffffe8 + lVar16) = (short)uVar38;
                }
                else {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c30b;
                  callee_14065b9b0(auStack_588);
                  auStack_588[0] = 0x17;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c32a;
                  FUN_14065b9c0(0x142505e08,auStack_588);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c339;
                  callee_1400e4d60(param_1,1);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c343;
                  callee_1400e4d60(param_2,1);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c351;
                  puVar27 = (undefined2 *)callee_140070a70(auStack_7a0,0);
                  *(undefined1 *)((longlong)&lStackX_8 + lVar16) = 1;
                  (abStackX_20 + lVar16 + -0x20)[0] = 0;
                  (abStackX_20 + lVar16 + -0x20)[1] = 0;
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar16) = 0;
                  *(undefined2 *)(&stack0xfffffffffffffff0 + lVar16) = 0xffff;
                  *(short *)(&stack0xffffffffffffffe8 + lVar16) = sStack_768;
                }
                *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = param_2;
                uVar10 = *puVar27;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c389;
                FUN_140acf430(param_1,uVar10,0xffffffff,0);
              }
            }
          }
          *(short *)(&stack0xfffffffffffffff0 + lVar16) = sStack_768;
          *(int **)(&stack0xffffffffffffffe8 + lVar16) = aiStack_7a8;
          *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = puVar31;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c3bd;
          FUN_1400e6cc0(0x142505e08,param_1,param_2,*(undefined8 *)(&stack0x00000038 + lVar16));
          bVar45 = abStackX_20[lVar16];
        }
        if (bVar45 != 0) {
          uVar19 = *(undefined8 *)(param_2 + 0x17e);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c3e0;
          plVar21 = (longlong *)callee_140070850(uVar19,(longlong)sStack_768);
          if ((*(short *)(*plVar21 + 0x40) != -1) && ((param_2[0x44] & 0x10002) == 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c413;
            pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
            if ((*pbVar34 & 2) == 0) {
              uVar19 = *(undefined8 *)(param_2 + 0x17e);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c438;
              cVar7 = callee_1400fea20(uVar19,sStack_768,1);
              if (cVar7 == '\0') {
                uVar19 = *(undefined8 *)(param_2 + 0x17e);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c459;
                cVar7 = callee_1400fea20(uVar19,sStack_768,2);
                if (((cVar7 == '\0') && (0 < CONCAT44(uStack_f84,iStack_f88))) && (10 < iStack_fe4))
                {
                  iVar11 = (iStack_fe4 + -10) * 3;
                  uVar19 = *(undefined8 *)(param_2 + 0x17e);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c49a;
                  cVar7 = callee_1400fea20(uVar19,sStack_768,9);
                  if (cVar7 == '\0') {
                    uVar19 = *(undefined8 *)(param_2 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c4b7;
                    cVar7 = callee_1400fea20(uVar19,sStack_768,10);
                    if (cVar7 != '\0') goto LAB_14066c4e4;
                    uVar19 = *(undefined8 *)(param_2 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c4d4;
                    cVar7 = callee_1400fea20(uVar19,sStack_768,8);
                    lVar17 = (longlong)iVar11;
                    if (cVar7 != '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c4df;
                      iVar11 = FUN_140073560(iVar11);
                      lVar17 = (longlong)iVar11;
                    }
                  }
                  else {
LAB_14066c4e4:
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c4eb;
                    iVar13 = FUN_140073560(iVar11);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c4f5;
                    iVar11 = FUN_140073560(iVar11);
                    lVar17 = (longlong)iVar13;
                    if (iVar11 <= iVar13) {
                      lVar17 = (longlong)iVar11;
                    }
                  }
                  if (0xf < lVar17) {
                    lVar17 = 0xf;
                  }
                  lVar17 = lVar17 * CONCAT44(uStack_f84,iStack_f88);
                  lVar17 = lVar17 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar17),8);
                  lVar17 = (lVar17 >> 3) - (lVar17 >> 0x3f);
                  if (0 < lVar17) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c547;
                    uVar38 = callee_1400709a0(param_2 + 0x13c);
                    do {
                      do {
                        do {
                          uVar38 = uVar38 - 1;
                          if ((int)uVar38 < 0) goto LAB_14066c5b5;
                          uVar19 = *(undefined8 *)(param_2 + 0x17e);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c572;
                          plVar21 = (longlong *)callee_140070850(uVar19,(longlong)(int)uVar38);
                          param_1 = puStack_fd8;
                        } while (*(short *)(*plVar21 + 0x40) != sStack_768);
                        uVar19 = *(undefined8 *)(param_2 + 0x17e);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c594;
                        cVar7 = callee_1400fea20(uVar19,uVar38 & 0xffff,0xf);
                        param_1 = puStack_fd8;
                      } while (cVar7 == '\0');
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c5a7;
                      pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)(int)uVar38);
                      param_1 = puStack_fd8;
                    } while ((*pbVar34 & 2) != 0);
LAB_14066c5b5:
                    if (uVar38 == 0xffffffff) {
                      uVar19 = *(undefined8 *)(param_2 + 0x17e);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c5ce;
                      plVar21 = (longlong *)callee_140070850(uVar19,(longlong)sStack_768);
                      uVar38 = (uint)*(short *)(*plVar21 + 0x40);
                    }
                    uVar19 = *(undefined8 *)(param_2 + 0x17e);
                    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c5e7;
                    cVar7 = callee_1400fea20(uVar19,uVar38 & 0xffff,1);
                    if (cVar7 == '\0') {
                      uVar19 = *(undefined8 *)(param_2 + 0x17e);
                      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c604;
                      cVar7 = callee_1400fea20(uVar19,uVar38 & 0xffff,2);
                      if (cVar7 == '\0') {
                        if (1000000 < lVar17) {
                          lVar17 = 1000000;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c629;
                        callee_14065ba50(0x142505e08);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c635;
                        callee_140067130(auStack_b70);
                        puVar31 = puStack_fc8;
                        if (puStack_fc8 == (undefined4 *)0x0) {
                          uStack_fcc = 0xffffffff;
                        }
                        else {
                          uStack_fcc = *puStack_fc8;
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c656;
                        callee_140070cc0(auStack_4d8);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c663;
                        callee_140070cc0(auStack_418);
                        *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = 2;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c681;
                        FUN_14134cee0(param_2,auStack_418,uVar38 & 0xffff,0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c68b;
                        iVar11 = FUN_140073560(3);
                        if (iVar11 == 0) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c709;
                          callee_140070bb0(auStack_4d8,&UNK_141683328);
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c71c;
                          callee_1400bb340(auStack_4d8,auStack_418);
                          uVar19 = 4;
LAB_14066c722:
                          abStackX_20[lVar16 + -0x20] = 1;
                          *(undefined1 **)(&stack0xfffffffffffffff8 + lVar16) = auStack_b70;
                          (&stack0xfffffffffffffff0)[lVar16] = 1;
                          *(undefined4 **)(&stack0xffffffffffffffe8 + lVar16) = param_1;
                          *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = &uStack_fcc;
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c754;
                          FUN_1413db540(param_2,uVar38 & 0xffff,(int)lVar17 * 10,uVar19);
                        }
                        else {
                          if (iVar11 == 1) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c6db;
                            callee_140070bb0(auStack_4d8,&UNK_141683680);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c6ee;
                            callee_1400bb340(auStack_4d8,auStack_418);
                            uVar19 = 2;
                            goto LAB_14066c722;
                          }
                          if (iVar11 == 2) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c6b0;
                            callee_140070bb0(auStack_4d8,&UNK_141683668);
                            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c6c3;
                            callee_1400bb340(auStack_4d8,auStack_418);
                            uVar19 = 0;
                            goto LAB_14066c722;
                          }
                        }
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c760;
                        FUN_14065b960(auStack_178);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c76d;
                        callee_14065b9b0(auStack_178);
                        auStack_178[0] = 0x12;
                        uStack_d8 = uStack_d8 | 0x20;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c793;
                        FUN_140070bd0(auStack_158,auStack_4d8);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c7a6;
                        FUN_14065b9c0(0x142505e08,auStack_178);
                        if (puVar31 == (undefined4 *)0x0) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c7b6;
                          puVar31 = (undefined4 *)callee_14065b8a0(param_2,uStack_fcc);
                        }
                        *(short *)(&stack0xfffffffffffffff0 + lVar16) = (short)uVar38;
                        *(int **)(&stack0xffffffffffffffe8 + lVar16) = aiStack_7a8;
                        *(undefined4 **)(&stack0xffffffffffffffe0 + lVar16) = puVar31;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c7e4;
                        FUN_1400e6cc0(0x142505e08,param_1,param_2,0);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c7ee;
                        cVar7 = FUN_14139ec30(param_2,1);
                        if (cVar7 != '\0') {
                          param_2[0x44] = param_2[0x44] | 2;
                        }
                        param_2[0x45] = param_2[0x45] & 0xffffffcf;
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c80e;
                        FUN_14065bd10(auStack_178);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c81b;
                        callee_140069460(auStack_418);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c828;
                        callee_140069460(auStack_4d8);
                        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c835;
                        callee_140068790(auStack_b70);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
        if (lVar17 == 0) {
          if ((((*(longlong *)(&stack0x00000030 + lVar16) == 0) ||
               ((~(*(uint *)(*(longlong *)(&stack0x00000030 + lVar16) + 0x3c) >> 0xe) & 1) != 0)) &&
              (((*(byte *)(param_2 + 0x44) & 2) == 0 &&
               ((*(short *)(param_2 + 0x200) < 1 && (*(short *)((longlong)param_2 + 0x812) == 0)))))
              ) && (*(short *)(param_2 + 0x205) == -1)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c8aa;
            iVar11 = FUN_140073560(0x32);
            if (iVar11 == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c8ba;
              cVar7 = callee_1404920f0(param_2);
              if ((cVar7 != '\0') && (lVar17 = *(longlong *)(param_2 + 0x2a6), lVar17 != 0)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c8e9;
                cVar7 = FUN_140e29a90(lVar17 + 0x248,5,10);
                if (cVar7 != '\0') {
                  *(undefined2 *)(param_2 + 0x205) = 1;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c903;
                  sVar37 = FUN_140073560(0x12d);
                  *(short *)((longlong)param_2 + 0x812) = sVar37 + 300;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c91f;
                  callee_140070cc0(auStack_358);
                  (&stack0xffffffffffffffe0)[lVar16] = 1;
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c93a;
                  FUN_141346d40(param_2,auStack_358,1,1);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c94d;
                  FUN_140070c00(auStack_438,auStack_358);
                  if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141609db4, param_2 != _DAT_142407590)
                     ) {
                    puVar36 = &UNK_141609dac;
                  }
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c97a;
                  callee_140070b90(auStack_438,puVar36);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c98d;
                  callee_140070b90(auStack_438,&UNK_141609de8);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066c999;
                  callee_14007f210(&uStack_958);
                  uStack_958 = 0x40028;
                  uStack_954 = 1;
                  uStack_93c = 2000;
                  uStack_952 = *(undefined2 *)(param_2 + 0x2a);
                  uStack_950 = *(undefined2 *)((longlong)param_2 + 0xaa);
                  uStack_94e = *(undefined2 *)(param_2 + 0x2b);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca04;
                  puStack_930 = param_2;
                  FUN_1400e5250(0x142505cd0,auStack_438,&uStack_958);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca11;
                  callee_140069460(auStack_438);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca1e;
                  callee_140069460(auStack_358);
                }
              }
            }
          }
        }
        else if ((*(uint *)(lVar17 + 0x48) & 0x2000) != 0) {
          pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x2a8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca41;
          cVar7 = (*pcVar5)();
          if (cVar7 != '\0') {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca5d;
            pbVar34 = (byte *)callee_140070990(param_2 + 0x13c,(longlong)sStack_768);
            if ((*pbVar34 & 2) == 0) {
              pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x38);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca73;
              sVar37 = (*pcVar5)();
              pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x40);
              *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca83;
              uVar12 = (*pcVar5)();
              if (sVar37 != -1) {
                pcVar5 = *(code **)(**(longlong **)(lVar17 + 0x98) + 0x2b0);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066ca9b;
                cVar7 = (*pcVar5)();
                uVar19 = 1;
                if (cVar7 == '\0') {
                  uVar19 = 3;
                }
                uVar10 = *(undefined2 *)(*(longlong *)(lVar17 + 0x98) + 0xa0);
                pbVar34 = abStackX_20 + lVar16 + -0x20;
                pbVar34[0] = 0xff;
                pbVar34[1] = 0xff;
                pbVar34[2] = 0xff;
                pbVar34[3] = 0xff;
                *(undefined2 *)(&stack0xfffffffffffffff8 + lVar16) = 1;
                *(short *)(&stack0xfffffffffffffff0 + lVar16) = sStack_768;
                *(undefined4 *)(&stack0xffffffffffffffe8 + lVar16) = 100;
                *(undefined2 *)(&stack0xffffffffffffffe0 + lVar16) = uVar10;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066caea;
                FUN_14137cd20(param_2,sVar37,uVar12,uVar19);
              }
              *(uint *)(lVar17 + 0x48) = *(uint *)(lVar17 + 0x48) | 2;
            }
          }
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cb0d;
      FUN_14155311c(auStack_568,0x20,4,callee_140069460);
    }
  }
  goto LAB_14066cb0e;
LAB_140669f70:
  do {
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f7c;
    puVar31 = (undefined4 *)callee_140070440(auStack_f30);
    uVar12 = *puVar31;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f8a;
    uVar26 = FUN_1400751a0(&DAT_142407530,uVar12);
    if (((uVar26 == 0) || ((*(byte *)(uVar26 + 0x110) & 2) != 0)) ||
       (0 < *(short *)(uVar26 + 0x800))) {
LAB_14066a0bb:
      iVar11 = *(int *)((longlong)&iStackX_24 + lVar16);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669fbb;
      sVar37 = FUN_140073560(0x14);
      *(short *)(uVar26 + 0x7fe) = *(short *)(uVar26 + 0x7fe) + sVar37 + 0x14;
      *(uint *)(uVar26 + 0x110) = *(uint *)(uVar26 + 0x110) & 0xffffbffe;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669fdc;
      FUN_140548ba0(uVar26,5);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669fec;
      callee_140070870(uVar26 + 2000,auStack_f68);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669fff;
      callee_140070860(uVar26 + 2000,auStack_be8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a013;
      puVar24 = (undefined1 *)callee_140070450(auStack_f68,auStack_fec,auStack_be8);
      uVar35 = *puVar24;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a01d;
      cVar7 = callee_140066de0(uVar35,0);
      while (cVar7 != '\0') {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a02a;
        puVar20 = (undefined8 *)callee_140070440(auStack_f68);
        if (*(int *)*puVar20 == 1) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a03b;
          puVar20 = (undefined8 *)callee_140070440(auStack_f68);
          *(undefined4 *)*puVar20 = 0xffffffff;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a04a;
        callee_140070430(auStack_f68);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a05e;
        puVar24 = (undefined1 *)callee_140070450(auStack_f68,auStack_fec,auStack_be8);
        uVar35 = *puVar24;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a068;
        cVar7 = callee_140066de0(uVar35,0);
      }
      if (((uStack_fe0 == uVar26) || (uVar30 == uVar26)) || (uVar23 == uVar26)) goto LAB_14066a0bb;
      if (uStack_fe0 == 0) {
        iVar11 = *(int *)((longlong)&iStackX_24 + lVar16) + 1;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar11;
        uStack_fe0 = uVar26;
      }
      else if (uVar30 == 0) {
        iVar11 = *(int *)((longlong)&iStackX_24 + lVar16) + 1;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar11;
        uVar30 = uVar26;
      }
      else {
        if (uVar23 == 0) {
          uVar23 = uVar26;
        }
        iVar11 = *(int *)((longlong)&iStackX_24 + lVar16) + 1;
        *(int *)((longlong)&iStackX_24 + lVar16) = iVar11;
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a0cb;
    callee_140070980(auStack_f30);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a0de;
    cVar7 = callee_1400bafa0(auStack_f30,auStack_be0);
    param_2 = puStack_fc8;
  } while (cVar7 == '\0');
LAB_140669e60:
  uStack_fc0 = uVar30;
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e69;
  callee_140070430(auStack_f90);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e7d;
  puVar24 = (undefined1 *)callee_140070450(auStack_f90,&uStack_ff1,auStack_bd8);
  uVar35 = *puVar24;
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e87;
  cVar7 = callee_140066de0(uVar35,0);
  if (cVar7 == '\0') goto LAB_140669e8f;
  goto LAB_140669d13;
LAB_140669ca0:
  do {
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669cac;
    puVar31 = (undefined4 *)callee_140070440(auStack_f28);
    uVar12 = *puVar31;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669cba;
    lVar17 = FUN_140076b30(0x142505ca0,uVar12);
    if ((lVar17 != 0) && (*(short *)(lVar17 + 4) == 2)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669cde;
      callee_140070870(lVar17 + 8,auStack_f90);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669ced;
      callee_140070860(lVar17 + 8,auStack_bd8);
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d01;
      puVar24 = (undefined1 *)callee_140070450(auStack_f90,&uStack_ff1,auStack_bd8);
      uVar35 = *puVar24;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d0b;
      cVar7 = callee_140066de0(uVar35,0);
      if (cVar7 != '\0') {
LAB_140669d13:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d1c;
        puVar20 = (undefined8 *)callee_140070440(auStack_f90);
        pcVar5 = (code *)**(undefined8 **)*puVar20;
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d24;
        sVar37 = (*pcVar5)();
        uVar30 = uStack_fc0;
        if (sVar37 == 8) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d37;
          plVar21 = (longlong *)callee_140070440(auStack_f90);
          uVar30 = uStack_fc0;
          if ((*(byte *)(*plVar21 + 0x14) & 1) == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d4d;
            plVar21 = (longlong *)callee_140070440(auStack_f90);
            lVar17 = *plVar21;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d60;
            callee_140070870(lVar17 + 0x48,auStack_f38);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d70;
            callee_140070860(lVar17 + 0x48,auStack_bf0);
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d87;
            puVar24 = (undefined1 *)callee_140070450(auStack_f38,&uStack_ff2,auStack_bf0);
            uVar35 = *puVar24;
            *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669d91;
            cVar7 = callee_140066de0(uVar35,0);
            uVar30 = uStack_fc0;
            if (cVar7 != '\0') {
              do {
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669dac;
                plVar21 = (longlong *)callee_140070440(auStack_f38);
                bVar49 = false;
                bVar6 = false;
                lVar17 = *plVar21 + 8;
                lVar18 = *plVar21 + 0x20;
                uVar12 = puStack_1030[0x30c];
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669dcf;
                iVar11 = FUN_1400bb5a0(uVar12,lVar17);
                if (iVar11 == -1) {
                  uVar12 = puStack_1030[0x4c];
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669de6;
                  iVar11 = FUN_1400bb5a0(uVar12,lVar18);
                  if (iVar11 != -1) goto LAB_140669deb;
                }
                else {
LAB_140669deb:
                  bVar49 = true;
                }
                uVar12 = param_2[0x30c];
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669dfd;
                iVar11 = FUN_1400bb5a0(uVar12,lVar17);
                if (iVar11 == -1) {
                  uVar12 = param_2[0x4c];
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e11;
                  iVar11 = FUN_1400bb5a0(uVar12,lVar18);
                  if (iVar11 != -1) goto LAB_140669e16;
                }
                else {
LAB_140669e16:
                  bVar6 = true;
                }
                if ((bVar49) && (!bVar6)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f3b;
                  callee_140070870(lVar18,auStack_f30);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f4a;
                  callee_140070860(lVar18,auStack_be0);
                  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f5d;
                  cVar7 = callee_1400bafa0(auStack_f30,auStack_be0);
                  uVar30 = uStack_fc0;
                  if (cVar7 == '\0') goto LAB_140669f70;
                  break;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e33;
                callee_140070430(auStack_f38);
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e4a;
                puVar24 = (undefined1 *)callee_140070450(auStack_f38,&uStack_ff2,auStack_bf0);
                uVar35 = *puVar24;
                *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e54;
                cVar7 = callee_140066de0(uVar35,0);
              } while (cVar7 != '\0');
              iVar11 = *(int *)((longlong)&iStackX_24 + lVar16);
              uVar30 = uStack_fc0;
            }
          }
        }
        goto LAB_140669e60;
      }
    }
LAB_140669e8f:
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669e9b;
    callee_140070980(auStack_f28);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669eb2;
    puVar24 = (undefined1 *)callee_140070450(auStack_f28,&uStack_ff0,auStack_c48);
    uVar35 = *puVar24;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669ebc;
    cVar7 = callee_140066de0(uVar35,0);
  } while (cVar7 != '\0');
  if (0 < iVar11) {
    *(code **)(&stack0xffffffffffffffe0 + lVar16) = callee_140069460;
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669ef9;
    FUN_141553708(auStack_c8,0x20,3,callee_140070cc0);
    cVar7 = uStack_fe0 != 0;
    if ((bool)cVar7) {
      (&stack0xffffffffffffffe0)[lVar16] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x140669f24;
      FUN_141346d40(uStack_fe0,auStack_c8,1,0);
    }
    if (uStack_fc0 != 0) {
      (&stack0xffffffffffffffe0)[lVar16] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a116;
      FUN_141346d40(uStack_fc0,auStack_a8,1,0);
      cVar7 = cVar7 + '\x01';
    }
    if (uVar23 != 0) {
      (&stack0xffffffffffffffe0)[lVar16] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a138;
      FUN_141346d40(uVar23,auStack_88,1,0);
      cVar7 = cVar7 + '\x01';
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a147;
    callee_140070cc0(auStack_608);
    if (iVar11 < 4) {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a171;
      cVar8 = callee_140070b50(auStack_88);
      if ((cVar8 == '\0') && (cVar7 == '\x03')) {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a18e;
        FUN_140070bd0(auStack_608,auStack_c8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a1a1;
        callee_140070b90(auStack_608,&UNK_141604394);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a1b4;
        callee_1400bb340(auStack_608,auStack_a8);
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a1c7;
        callee_140070b90(auStack_608,&UNK_141644748);
        puVar24 = auStack_88;
LAB_14066a1ce:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a1da;
        callee_1400bb340(auStack_608,puVar24);
        puVar36 = &UNK_141619450;
LAB_14066a272:
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a27e;
        callee_140070b90(auStack_608,puVar36);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a1f2;
        cVar8 = callee_140070b50(auStack_a8);
        if ((cVar8 == '\0') && (cVar7 == '\x02')) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a20f;
          FUN_140070bd0(auStack_608,auStack_c8);
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a222;
          callee_140070b90(auStack_608,&UNK_14160438c);
          puVar24 = auStack_a8;
          goto LAB_14066a1ce;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a237;
        cVar7 = callee_140070b50(auStack_c8);
        if (cVar7 == '\0') {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a24e;
          FUN_140070bd0(auStack_608,auStack_c8);
          if ((_DAT_1418be238 != 1) || (puVar36 = &UNK_141619450, puStack_fd8 != _DAT_142407590)) {
            puVar36 = &UNK_141612ef4;
          }
          goto LAB_14066a272;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a28a;
      FUN_140546b30(auStack_608);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a160;
      callee_140070bb0(auStack_608,&UNK_141683318);
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a29d;
    callee_140070b90(auStack_608,&UNK_1416832f8);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a2a9;
    callee_14007f210(&uStack_b08);
    uStack_b08 = 0x5000c;
    uStack_b04 = 1;
    uStack_aec = 2000;
    uStack_b02 = *(undefined2 *)(param_2 + 0x2a);
    uStack_b00 = *(undefined2 *)((longlong)param_2 + 0xaa);
    uStack_afe = *(undefined2 *)(param_2 + 0x2b);
    puStack_ae8 = puStack_1030;
    if (uStack_1038 != 0) {
      uStack_acc = uStack_acc | 1;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a32c;
    puStack_ae0 = param_2;
    FUN_1400e5250(0x142505cd0,auStack_608,&uStack_b08);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a339;
    callee_140069460(auStack_608);
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066a351;
    FUN_14155311c(auStack_c8,0x20,3,callee_140069460);
  }
LAB_14066cb0e:
  lVar17 = *(longlong *)(&stack0x00000038 + lVar16);
  puVar31 = puStack_fd8;
  if (lVar17 != 0) {
LAB_14066cb18:
    puVar31 = *(undefined4 **)(lVar17 + 0x18);
  }
LAB_14066cb22:
  if (((puVar31 != (undefined4 *)0x0) && ((*(byte *)(param_2 + 0x44) & 2) != 0)) &&
     (_DAT_1418be238 == 0)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cb4a;
    cVar7 = callee_1413a7510(puVar31);
    if (cVar7 != '\0') {
      *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cb56;
      cVar7 = callee_1413a7510(param_2);
      if (cVar7 != '\0') {
        lVar17 = *(longlong *)(&stack0x00000030 + lVar16);
        if ((lVar17 == 0) || ((*(uint *)(lVar17 + 0x3c) & 0x6000) == 0)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cb7d;
          FUN_1413923f0(puVar31,4,param_2);
          if (lVar17 == 0) goto LAB_14066cbbb;
        }
        if ((*(uint *)(lVar17 + 0x3c) & 0x4000) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cb97;
          callee_140073b40(auStack_8d8);
          auStack_8d8[0] = 0x84;
          uStack_8cc = 100;
          *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbba;
          callee_141408f60(puVar31,auStack_8d8);
        }
      }
    }
  }
LAB_14066cbbb:
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbc7;
  FUN_140070d80(auStack_b88);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbd4;
  FUN_140070de0(auStack_9c8);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbe1;
  FUN_140070de0(auStack_bb8);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbee;
  FUN_1400681a0(auStack_bd0);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cbf8;
  FUN_140070d80(auStack_fa8);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc05;
  FUN_1400681a0(auStack_ee0);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc0f;
  FUN_140070d80(alStack_f58);
LAB_14066cc10:
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc1c;
  FUN_140070e80(auStack_648);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc29;
  FUN_140070e80(auStack_458);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc36;
  FUN_140070e80(auStack_478);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc43;
  FUN_140070e80(auStack_498);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc50;
  FUN_140070e80(auStack_4b8);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc5d;
  FUN_140070e80(auStack_5e8);
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc6a;
  FUN_140070e80(auStack_628);
LAB_14066cc6b:
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc77;
  FUN_14066ccb0(aiStack_7a8);
LAB_14066cc77:
  *(undefined8 *)((longlong)&uStack_48 + lVar16) = 0x14066cc86;
  FUN_1415530b0(uStack_68 ^ (ulonglong)(&stack0xffffffffffffffc0 + lVar16));
  return;
}

