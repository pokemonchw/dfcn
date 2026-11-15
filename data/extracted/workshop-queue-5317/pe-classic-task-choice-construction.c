/* classic PE:6aea11a5:0272d000; task-choice-construction; RVA 0x8dc6c0..0x8e24ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_task_choice_construction(longlong *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  short *psVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  longlong *plVar24;
  uint uVar25;
  char *pcVar26;
  char cVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  bool bVar33;
  undefined1 auStack_2e8 [32];
  code *pcStack_2c8;
  uint auStack_2b8 [2];
  longlong *plStack_2b0;
  longlong lStack_2a8;
  uint auStack_2a0 [2];
  char cStack_298;
  undefined1 auStack_297 [7];
  ulonglong uStack_290;
  undefined8 uStack_288;
  longlong alStack_280 [3];
  longlong alStack_268 [3];
  char cStack_250;
  longlong *plStack_248;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  undefined2 auStack_208 [6];
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined4 uStack_180;
  undefined1 uStack_156;
  undefined2 uStack_154;
  undefined2 uStack_152;
  undefined2 uStack_150;
  longlong *plStack_138;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  int aiStack_d8 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_2e8;
  plStack_2b0 = param_1;
  FUN_1408c8530(0x1418bd700);
  cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar3 != '\0') goto LAB_1408e24bb;
  lVar9 = workshop_supplier_0x7f0b0(0x1423edb78,_DAT_1423af9f0);
  lStack_2a8 = lVar9;
  if (0x17 < *(ushort *)(param_1 + 0x29)) goto LAB_1408e24bb;
                    /* WARNING: Switch is manually overridden */
  switch(*(ushort *)(param_1 + 0x29)) {
  case 0:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      uVar29 = 0;
      if (lVar9 != 0) {
        plStack_248 = (longlong *)(lVar9 + 0x208);
        lVar28 = workshop_supplier_0x70a10(plStack_248);
        plVar22 = plStack_248;
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0x76;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar15);
            *(undefined2 *)(lVar9 + 0x72) = *puVar23;
            *(undefined4 *)(lVar9 + 0x84) = 2;
            uVar7 = (int)uVar30 + 1;
            uVar13 = workshop_supplier_0x70a10(plVar22);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
            lVar9 = lStack_2a8;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_248 = (longlong *)(lVar9 + 0x160);
        lVar28 = workshop_supplier_0x70a10(plStack_248);
        plVar22 = plStack_248;
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0x60;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar15);
            *(undefined2 *)(lVar9 + 0x72) = *puVar23;
            *(undefined4 *)(lVar9 + 0x84) = 2;
            uVar7 = (int)uVar30 + 1;
            uVar13 = workshop_supplier_0x70a10(plVar22);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
            lVar9 = lStack_2a8;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
      }
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7d;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x50;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7e;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7c;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x77;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4c;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x45;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x46;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x47;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x43;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x44;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xc6;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 199;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4e;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4b;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x49;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4d;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x48;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      if (lVar9 != 0) {
        auStack_2b8[0] = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x220);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x220,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ec0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xd8,2);
            uVar7 = (uint)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x8c;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x220,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 2;
              uVar7 = auStack_2b8[0];
            }
            auStack_2b8[0] = uVar7 + 1;
            uVar30 = (ulonglong)auStack_2b8[0];
            uVar15 = (ulonglong)(int)auStack_2b8[0];
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x220);
          } while (uVar15 < uVar13);
        }
        lVar9 = lVar9 + 0x280;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0x11);
            if (cVar3 == '\0') {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0);
              if (cVar3 == '\0') {
                psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
                plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
                cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,6);
                if (cVar3 == '\0') goto LAB_1408deab8;
              }
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,8);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(undefined4 *)(lVar28 + 0x84) = 2;
              }
            }
LAB_1408deab8:
            uVar7 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar15);
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xc1;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xcb;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xcc;
      *(undefined4 *)(lVar9 + 0x84) = 2;
LAB_1408e24af:
      *(longlong **)(lVar9 + 0x40) = param_1;
    }
    break;
  case 1:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x6e;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x70;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x71;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x6d;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x6c;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xd4;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xd5;
      *(undefined4 *)(lVar9 + 0x84) = 0x2000;
      goto LAB_1408e24af;
    }
    break;
  case 2:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      if (_DAT_1418bd74c == 7) {
        pcStack_2c8 = workshop_supplier_0x670e0;
        FUN_14154e458(auStack_b8,0x18,5,workshop_supplier_0x670c0);
        workshop_supplier_0x70800(&DAT_142401448,&plStack_248);
        workshop_supplier_0x707f0(&DAT_142401448,auStack_228);
        plStack_2b0 = plStack_248;
        puVar18 = (undefined1 *)workshop_supplier_0x703e0(&plStack_2b0,auStack_297,auStack_228);
        cVar3 = workshop_supplier_0x66d70(*puVar18,0);
        while (cVar3 != '\0') {
          plVar22 = (longlong *)workshop_supplier_0x703d0(&plStack_2b0);
          lVar9 = *plVar22;
          if (((*(int *)(lVar9 + 0xc30) != -1) &&
              (((*(byte *)(lVar9 + 0x110) & 2) != 0 || ((*(uint *)(lVar9 + 0x118) & 0x1000) != 0))))
             && ((lVar28 = FUN_140073b30(0x142504098,*(undefined4 *)(lVar9 + 0x7f8)), lVar28 == 0 ||
                 (((*(int *)(lVar28 + 0xd4) != _DAT_1423af9f4 ||
                   (*(int *)(lVar28 + 0xe0) != _DAT_1423af9f8)) ||
                  ((*(byte *)(lVar28 + 0xec) & 3) != 0)))))) {
            lVar28 = FUN_1400bb380(*(undefined4 *)(lVar9 + 0x130),0x1423b6388);
            if (lVar28 == 0) {
              uVar8 = *(undefined4 *)(lVar9 + 0xc30);
              puVar18 = auStack_70;
              if (*(int *)(lVar9 + 0x140) != _DAT_1423af9f0) {
                puVar18 = auStack_58;
              }
            }
            else {
              workshop_supplier_0x70800(&DAT_142401db8,&uStack_288);
              workshop_supplier_0x707f0(&DAT_142401db8,&lStack_2a8);
              puVar18 = (undefined1 *)workshop_supplier_0x703e0(&uStack_288,&cStack_298,&lStack_2a8)
              ;
              cVar3 = workshop_supplier_0x66d70(*puVar18,0);
              while (cVar3 != '\0') {
                plVar22 = (longlong *)workshop_supplier_0x703d0(&uStack_288);
                if (*(short *)(*plVar22 + 0x10c) == 0) {
                  plVar22 = (longlong *)workshop_supplier_0x703d0(&uStack_288);
                  if (*(int *)(*plVar22 + 0x108) == *(int *)(lVar9 + 0xc30)) {
                    FUN_1400bb430(*(int *)(lVar9 + 0xc30),auStack_88);
                    break;
                  }
                }
                workshop_supplier_0x703c0(&uStack_288);
                puVar18 = (undefined1 *)
                          workshop_supplier_0x703e0(&uStack_288,&cStack_298,&lStack_2a8);
                cVar3 = workshop_supplier_0x66d70(*puVar18,0);
              }
              puVar18 = (undefined1 *)workshop_supplier_0x703e0(&uStack_288,auStack_2b8,&lStack_2a8)
              ;
              cVar3 = workshop_supplier_0x73420(*puVar18,0);
              if (cVar3 == '\0') goto LAB_1408de029;
              cVar3 = FUN_1413e9050(lVar9);
              uVar8 = *(undefined4 *)(lVar9 + 0xc30);
              if (cVar3 == '\0') {
                puVar18 = auStack_a0;
                if ((*(longlong *)(lVar9 + 0x380) != 0) &&
                   ((*(uint *)(*(longlong *)(lVar9 + 0x380) + 0x1c) & 1) != 0)) {
                  puVar18 = auStack_b8;
                }
              }
              else {
                puVar18 = auStack_88;
              }
            }
            FUN_1400bb430(uVar8,puVar18);
          }
LAB_1408de029:
          workshop_supplier_0x703c0(&plStack_2b0);
          puVar18 = (undefined1 *)workshop_supplier_0x703e0(&plStack_2b0,auStack_297,auStack_228);
          cVar3 = workshop_supplier_0x66d70(*puVar18,0);
        }
        puVar18 = auStack_b8;
        uStack_290 = 5;
        do {
          uVar29 = uStack_290;
          puStack_218 = puVar18;
          workshop_supplier_0x70800(puVar18,&uStack_288);
          workshop_supplier_0x707f0(puVar18,auStack_220);
          puVar19 = (undefined1 *)workshop_supplier_0x703e0(&uStack_288,auStack_2b8,auStack_220);
          cVar3 = workshop_supplier_0x66d70(*puVar19,0);
          while (cVar3 != '\0') {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0xd3;
            puVar17 = (undefined4 *)workshop_supplier_0x703d0(&uStack_288);
            *(undefined4 *)(lVar9 + 0x80) = *puVar17;
            lVar28 = FUN_140069380(0x142516038);
            if ((lVar28 != 0) &&
               (lVar28 = FUN_140075130(&DAT_142401430,*(undefined4 *)(lVar28 + 0xd8)), lVar28 != 0))
            {
              iVar6 = 0;
              workshop_supplier_0x70800(&DAT_142401db8,&lStack_2a8);
              workshop_supplier_0x707f0(&DAT_142401db8,auStack_2a0);
              puVar18 = (undefined1 *)workshop_supplier_0x703e0(&lStack_2a8,auStack_297,auStack_2a0)
              ;
              cVar3 = workshop_supplier_0x66d70(*puVar18,0);
              while (cVar3 != '\0') {
                plVar22 = (longlong *)workshop_supplier_0x703d0(&lStack_2a8);
                if ((*(short *)(*plVar22 + 0x10c) == 0) &&
                   (plVar22 = (longlong *)workshop_supplier_0x703d0(&lStack_2a8),
                   *(int *)(*plVar22 + 0x108) == *(int *)(lVar28 + 0xc30))) {
                  iVar6 = iVar6 + 1;
                }
                workshop_supplier_0x703c0(&lStack_2a8);
                puVar18 = (undefined1 *)
                          workshop_supplier_0x703e0(&lStack_2a8,auStack_297,auStack_2a0);
                cVar3 = workshop_supplier_0x66d70(*puVar18,0);
              }
              cVar3 = FUN_1413e8e20(lVar28);
              cStack_298 = cVar3;
              cStack_250 = FUN_1413e8ee0(lVar28);
              cVar27 = '\0';
              if (cVar3 == '\0') {
                if (cStack_250 == '\0') {
                  if (*(longlong *)(lVar28 + 0x380) == 0) {
                    pcVar26 = "Not memorialized";
                  }
                  else {
                    uVar7 = *(uint *)(*(longlong *)(lVar28 + 0x380) + 0x1c) & 1;
                    cVar27 = (char)uVar7;
                    pcVar26 = "Ghost";
                    if (uVar7 == 0) {
                      pcVar26 = "Not memorialized";
                    }
                  }
                }
                else {
                  pcVar26 = "Entombed";
                }
              }
              else {
                pcVar26 = "Entombed and memorialized";
                if (cStack_250 == '\0') {
                  pcVar26 = "Memorialized";
                }
              }
              lVar20 = lVar9 + 0xb8;
              workshop_supplier_0x70b40(lVar20,pcVar26);
              workshop_supplier_0x70b20(lVar20,", ");
              if (iVar6 < 1) {
                pcVar26 = "no slabs engraved";
              }
              else if (iVar6 < 2) {
                pcVar26 = "slab engraved";
              }
              else {
                FUN_140542fb0(iVar6,lVar20);
                pcVar26 = " slabs engraved";
              }
              workshop_supplier_0x70b20(lVar20,pcVar26);
              lVar20 = FUN_1400bb380(*(undefined4 *)(lVar28 + 0x130),0x1423b6388);
              if ((cStack_298 == '\0') && (cStack_250 == '\0')) {
                if (cVar27 == '\0') {
                  cVar3 = workshop_supplier_0x1389c50(lVar28);
                  if (cVar3 == '\0') {
                    if (lVar20 == 0) {
                      iVar6 = (iVar6 != 0) + 2000;
                    }
                    else {
                      iVar6 = (iVar6 != 0) + 1000;
                    }
                  }
                  else {
                    iVar6 = (iVar6 != 0) + 3000;
                  }
LAB_1408de30f:
                  *(int *)(lVar9 + 0xd8) = iVar6;
                }
                else {
                  *(undefined4 *)(lVar9 + 0xd8) = 1;
                }
              }
              else {
                cVar3 = workshop_supplier_0x1389c50(lVar28);
                if (cVar3 == '\0') {
                  iVar6 = 0x3ea;
                  if (lVar20 == 0) {
                    iVar6 = 0x7d2;
                  }
                  goto LAB_1408de30f;
                }
                *(undefined4 *)(lVar9 + 0xd8) = 0xbba;
              }
            }
            workshop_supplier_0x70910(&uStack_288);
            puVar18 = (undefined1 *)workshop_supplier_0x703e0(&uStack_288,auStack_2b8,auStack_220);
            cVar3 = workshop_supplier_0x66d70(*puVar18,0);
            puVar18 = puStack_218;
            uVar29 = uStack_290;
          }
          puVar18 = puVar18 + 0x18;
          uStack_290 = uVar29 - 1;
        } while (uStack_290 != 0);
        puStack_218 = puVar18;
        FUN_14154de6c(auStack_b8,0x18,5,workshop_supplier_0x670e0);
        goto LAB_1408e24bb;
      }
      lVar28 = FUN_1408c8300();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 7;
      *(undefined1 *)(lVar28 + 0x4c) = 1;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4c;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x50;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x46;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x47;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x43;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x44;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xc6;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 199;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4e;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x49;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4f;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xd2;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x48;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x4d;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xc9;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xca;
      *(undefined2 *)(lVar28 + 0x74) = 0;
      if (lVar9 != 0) {
        iVar6 = 0;
        lVar9 = lVar9 + 0x280;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        if (lVar28 != 0) {
          uVar29 = 0;
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0x11);
            if (cVar3 == '\0') {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0);
              if (cVar3 == '\0') {
                psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
                plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
                cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0xe);
                if (cVar3 == '\0') goto LAB_1408de60c;
              }
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,8);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(undefined2 *)(lVar28 + 0x74) = 0;
              }
            }
LAB_1408de60c:
            iVar6 = iVar6 + 1;
            uVar29 = (ulonglong)iVar6;
            uVar30 = workshop_supplier_0x70a10(lVar9);
          } while (uVar29 < uVar30);
        }
      }
    }
    break;
  case 3:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 == '\0') break;
    if (((_DAT_1418bd74c == 0xffffffff) && (_DAT_1418bd750 == -1)) && (_DAT_1418bd758 == 0)) {
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      uVar30 = 0;
      *(undefined2 *)(lVar9 + 0x48) = 0;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x50) = 2;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x50) = 0x20;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x50) = 0x40;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x82;
      *(undefined4 *)(lVar9 + 0x84) = 0x200;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x82;
      *(undefined4 *)(lVar9 + 0x84) = 0x400;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x82;
      *(undefined4 *)(lVar9 + 0x84) = 0x800;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x80;
      iVar6 = workshop_supplier_0x70410(0x142508c48);
      uVar29 = uVar30;
      if (0 < iVar6) {
        do {
          cVar3 = workshop_supplier_0x14ee20(0x142508c48,uVar29,0xf);
          if (cVar3 != '\0') {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0x5b;
            *(undefined2 *)(lVar9 + 0x74) = 0;
            *(int *)(lVar9 + 0x78) = (int)uVar29;
          }
          uVar7 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar7;
        } while ((int)uVar7 < iVar6);
      }
      FUN_1408db020(param_1);
      uVar7 = auStack_2a0[0];
      do {
        uVar25 = (uint)uVar30;
        if (uVar25 == 0) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 4;
override_jmp_1408df990_case_0:
          uVar7 = 4;
        }
        else if (uVar25 == 1) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 8;
override_jmp_1408df990_case_1:
          uVar7 = 8;
        }
        else if (uVar25 == 2) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 0x1000;
override_jmp_1408df990_case_2:
          uVar7 = 0x1000;
        }
        else if (uVar25 == 3) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 0x200;
override_jmp_1408df990_case_3:
          uVar7 = 0x200;
        }
        else if (uVar25 == 4) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 0x400;
override_jmp_1408df990_case_4:
          uVar7 = 0x400;
        }
        else if (uVar25 == 5) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0x52;
          *(undefined4 *)(lVar9 + 0x84) = 0x800;
override_jmp_1408df990_case_5:
          uVar7 = 0x800;
        }
        else {
          if (uVar25 == 6) {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0x52;
            *(undefined4 *)(lVar9 + 0x84) = 0x10;
          }
          else {
            if (6 < uVar25) goto LAB_1408df8aa;
                    /* WARNING: Switch is manually overridden */
            switch(uVar25) {
            case 0:
              goto override_jmp_1408df990_case_0;
            case 1:
              goto override_jmp_1408df990_case_1;
            case 2:
              goto override_jmp_1408df990_case_2;
            case 3:
              goto override_jmp_1408df990_case_3;
            case 4:
              goto override_jmp_1408df990_case_4;
            case 5:
              goto override_jmp_1408df990_case_5;
            case 7:
              goto override_jmp_1408df990_case_7;
            }
          }
          uVar7 = 0x10;
        }
LAB_1408df8aa:
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xe7;
        *(uint *)(lVar9 + 0x84) = uVar7;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xec;
        *(uint *)(lVar9 + 0x84) = uVar7;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xeb;
        *(uint *)(lVar9 + 0x84) = uVar7;
        if ((uVar7 & 0xe62) != 0) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0xe9;
          *(uint *)(lVar9 + 0x84) = uVar7;
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0xe6;
          *(uint *)(lVar9 + 0x84) = uVar7;
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0xea;
          *(uint *)(lVar9 + 0x84) = uVar7;
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0xed;
          *(uint *)(lVar9 + 0x84) = uVar7;
        }
        if ((uVar7 & 0x622) != 0) {
          lVar9 = FUN_1408c8390();
          *(longlong **)(lVar9 + 0x40) = param_1;
          *(undefined4 *)(lVar9 + 0x48) = 0xe8;
          *(uint *)(lVar9 + 0x84) = uVar7;
        }
        uVar30 = (ulonglong)(uVar25 + 1);
      } while ((int)(uVar25 + 1) < 7);
      goto LAB_1408e24bb;
    }
    if (_DAT_1418bd758 == 2) {
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x52;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7a;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      uVar29 = 0;
      if (lVar9 != 0) {
        plStack_248 = (longlong *)(lVar9 + 400);
        lVar28 = workshop_supplier_0x70a10(plStack_248);
        plVar22 = plStack_248;
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            lVar9 = FUN_1408c8390();
            *(longlong **)(lVar9 + 0x40) = param_1;
            *(undefined4 *)(lVar9 + 0x48) = 0x81;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar15);
            *(undefined2 *)(lVar9 + 0x72) = *puVar23;
            *(undefined4 *)(lVar9 + 0x84) = 2;
            uVar7 = (int)uVar30 + 1;
            uVar13 = workshop_supplier_0x70a10(plVar22);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
            lVar9 = lStack_2a8;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar9 = lVar9 + 0x280;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0x11);
            if (cVar3 == '\0') {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0);
              if (cVar3 == '\0') {
                psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
                plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
                cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,6);
                if (cVar3 == '\0') goto LAB_1408dfb59;
              }
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,8);
              if (cVar3 == '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(undefined4 *)(lVar28 + 0x84) = 2;
              }
            }
LAB_1408dfb59:
            uVar7 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar15);
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe7;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xec;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xeb;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe9;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe6;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xea;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xed;
      *(undefined4 *)(lVar9 + 0x84) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe8;
      *(undefined4 *)(lVar9 + 0x84) = 2;
    }
    else if (_DAT_1418bd758 == 0x20) {
      uVar29 = 0;
      if ((lVar9 != 0) &&
         (lVar28 = workshop_supplier_0x70a10(lVar9 + 400), uVar30 = uVar29, uVar15 = uVar29,
         lVar28 != 0)) {
        do {
          lVar28 = FUN_1408c8390();
          *(longlong **)(lVar28 + 0x40) = param_1;
          *(undefined4 *)(lVar28 + 0x48) = 0x81;
          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 400,uVar15);
          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
          *(undefined4 *)(lVar28 + 0x84) = 0x20;
          uVar7 = (int)uVar30 + 1;
          uVar13 = workshop_supplier_0x70a10(lVar9 + 400);
          uVar30 = (ulonglong)uVar7;
          uVar15 = (longlong)(int)uVar7;
        } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
      }
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x82;
      *(undefined4 *)(lVar28 + 0x84) = 0x20;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x52;
      *(undefined4 *)(lVar28 + 0x84) = 0x20;
      if (lVar9 != 0) {
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,3);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 100;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x20;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x178);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,3);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x66;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x20;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,3);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x74;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x20;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar28 = *(longlong *)(lVar9 + 0x1a8);
        if (*(longlong *)(lVar9 + 0x1b0) - lVar28 >> 1 != 0) {
          uStack_290 = 0;
          uVar30 = uVar29;
          uVar15 = uVar29;
          do {
            lVar28 = *(longlong *)(_DAT_142509220 + (longlong)*(short *)(uVar30 + lVar28) * 8);
            if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 8) != 0)) {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x65;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uStack_290);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x20;
            }
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
            uVar30 = uVar30 + 2;
            lVar28 = *(longlong *)(lVar9 + 0x1a8);
            uStack_290 = (ulonglong)(int)uVar7;
          } while (uStack_290 < (ulonglong)(*(longlong *)(lVar9 + 0x1b0) - lVar28 >> 1));
        }
        lVar28 = *(longlong *)(lVar9 + 0x1d8);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1 != 0) {
          do {
            lVar28 = *(longlong *)(_DAT_1425091f0 + (longlong)*(short *)(uVar30 + lVar28) * 8);
            if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 8) != 0)) {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x75;
              *(undefined2 *)(lVar28 + 0x72) =
                   *(undefined2 *)(uVar30 + *(longlong *)(lVar9 + 0x1d8));
              *(undefined4 *)(lVar28 + 0x84) = 0x20;
            }
            uVar7 = (int)uVar15 + 1;
            lVar28 = *(longlong *)(lVar9 + 0x1d8);
            uVar30 = uVar30 + 2;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1));
        }
        lVar28 = *(longlong *)(lVar9 + 0x280);
        uVar30 = uVar29;
        if (*(longlong *)(lVar9 + 0x288) - lVar28 >> 1 != 0) {
          do {
            lVar28 = *(longlong *)(_DAT_142508ef0 + (longlong)*(short *)(uVar29 + lVar28) * 8);
            if ((((2 < *(int *)(lVar28 + 0xb0)) &&
                 (lVar28 = *(longlong *)(lVar28 + 0xa8), (*(byte *)(lVar28 + 2) & 2) == 0)) &&
                ((*(byte *)(lVar28 + 2) & 1) != 0)) && ((*(byte *)(lVar28 + 1) & 1) == 0)) {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0xd8;
              *(undefined2 *)(lVar28 + 0x72) =
                   *(undefined2 *)(uVar29 + *(longlong *)(lVar9 + 0x280));
              *(undefined4 *)(lVar28 + 0x84) = 2;
            }
            uVar7 = (int)uVar30 + 1;
            uVar29 = uVar29 + 2;
            lVar28 = *(longlong *)(lVar9 + 0x280);
            uVar30 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x288) - lVar28 >> 1));
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe7;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xec;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xeb;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe9;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe6;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xea;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xed;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe8;
      *(undefined4 *)(lVar9 + 0x84) = 0x20;
    }
    else if (_DAT_1418bd758 == 0x40) {
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x82;
      *(undefined4 *)(lVar28 + 0x84) = 0x40;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x52;
      *(undefined4 *)(lVar28 + 0x84) = 0x40;
      uVar29 = 0;
      if (lVar9 != 0) {
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,4);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 100;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x40;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x178);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,4);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x66;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x40;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,4);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x74;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x40;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar15);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,4);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x65;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x40;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        plVar22 = (longlong *)(lVar9 + 0x1d8);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (*(longlong *)(lVar9 + 0x1e0) - *plVar22 >> 1 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(plVar22,uVar15);
            plVar24 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091f0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar24 + 0xe8,4);
            iVar6 = (int)uVar30;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x75;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar15);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined4 *)(lVar28 + 0x84) = 0x40;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar30 = (ulonglong)uVar7;
            uVar15 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x1e0) - *plVar22 >> 1));
        }
        lVar28 = *(longlong *)(lVar9 + 0x280);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (*(longlong *)(lVar9 + 0x288) - lVar28 >> 1 != 0) {
          do {
            lVar28 = *(longlong *)(_DAT_142508ef0 + (longlong)*(short *)(lVar28 + uVar15) * 8);
            if (*(int *)(lVar28 + 0xb0) < 3) {
              if (1 < *(int *)(lVar28 + 0xb0)) goto LAB_1408e059f;
            }
            else if ((*(byte *)(*(longlong *)(lVar28 + 0xa8) + 2) & 2) == 0) {
LAB_1408e059f:
              bVar1 = *(byte *)(*(longlong *)(lVar28 + 0xa8) + 1);
              if (((char)bVar1 < '\0') && ((bVar1 & 1) == 0)) {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x280,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(undefined4 *)(lVar28 + 0x84) = 0x40;
              }
            }
            uVar7 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar7;
            lVar28 = *(longlong *)(lVar9 + 0x280);
            uVar30 = (longlong)(int)uVar7;
            uVar15 = uVar15 + 2;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x288) - lVar28 >> 1));
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe7;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xec;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xeb;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe9;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe6;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xea;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xed;
      *(undefined4 *)(lVar9 + 0x84) = 0x40;
    }
    else {
      if (_DAT_1418bd750 != 0) goto LAB_1408e24bb;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x52;
      *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7a;
      *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      uVar29 = 0;
      if (lVar9 != 0) {
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x148);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x148,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ea8,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x108,0);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x60;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x148,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(undefined2 *)(lVar28 + 0x74) = 0;
            }
            uVar7 = (int)uVar15 + 1;
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x148);
            uVar30 = (longlong)(int)uVar7;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar9 = lVar9 + 0x280;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0x11);
            if (cVar3 == '\0') {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0);
              if (cVar3 == '\0') {
                psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
                plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
                cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0xe);
                if (cVar3 == '\0') goto LAB_1408e08e6;
              }
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,8);
              if (cVar3 == '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
              }
            }
LAB_1408e08e6:
            uVar7 = (int)uVar30 + 1;
            uVar29 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (ulonglong)uVar7;
          } while (uVar29 < uVar15);
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x7b;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe6;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe7;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe8;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe9;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xea;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xeb;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xec;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xed;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
    }
LAB_1408df61a:
    plVar22 = (longlong *)FUN_1408c8190();
    plVar22[8] = (longlong)param_1;
    *(undefined2 *)(plVar22 + 9) = 0xffff;
    goto LAB_1408df629;
  case 4:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x54;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x55;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x6f;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x56;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 4;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x57;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 4;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x91;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 4;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x56;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x400;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x57;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x400;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x91;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x400;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x56;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x57;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x40;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x91;
      *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 0x40;
    }
    break;
  default:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 == '\0') break;
    if (_DAT_1418bd74c == 0xffffffff) {
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 1;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 2;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 3;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 4;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 5;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      lVar9 = FUN_1408c8300();
      *(undefined4 *)(lVar9 + 0x48) = 6;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      goto LAB_1408e24af;
    }
    if ((_DAT_1418bd750 == -1) && (_DAT_1418bd758 == 0)) {
      workshop_supplier_0x670c0(alStack_280);
      workshop_supplier_0x670c0(alStack_268);
      uVar30 = 0;
      uVar15 = 0;
      uVar29 = uVar30;
      if (_DAT_1418bd74c < 7) {
        uVar29 = uVar15;
                    /* WARNING: Switch is manually overridden */
        switch(_DAT_1418bd74c) {
        case 0:
override_jmp_1408df990_case_7:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          uVar15 = uVar30;
          uVar29 = uVar30;
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar15);
              if ((cVar3 != '\0') &&
                 (((cVar3 = FUN_14146fea0(0x1423ed870,0x33,0,uVar15), cVar3 != '\0' ||
                   (cVar3 = FUN_14146fea0(0x1423ed870,0x34,0,uVar15), cVar3 != '\0')) ||
                  ((cVar3 = FUN_14146fea0(0x1423ed870,0x36,0,uVar15), cVar3 != '\0' ||
                   (cVar3 = FUN_14146fea0(0x1423ed870,0x37,0,uVar15), cVar3 != '\0')))))) {
                auStack_2b8[0]._0_2_ = (short)uVar30;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar15);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 1:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar30);
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14146fea0(0x1423ed870,0x38,0,uVar30), cVar3 != '\0')) {
                auStack_2b8[0] = auStack_2b8[0] & 0xffff0000;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar30);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 2:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar30);
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14146fea0(0x1423ed870,0xb,0,uVar30), cVar3 != '\0')) {
                auStack_2b8[0] = auStack_2b8[0] & 0xffff0000;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar30);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 3:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar30);
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14146fea0(0x1423ed870,0x33,0,uVar30), cVar3 != '\0')) {
                auStack_2b8[0] = auStack_2b8[0] & 0xffff0000;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar30);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 4:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar30);
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14146fea0(0x1423ed870,0x33,0,uVar30), cVar3 != '\0')) {
                auStack_2b8[0] = auStack_2b8[0] & 0xffff0000;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar30);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 5:
          iVar6 = workshop_supplier_0x70410(0x142508c48);
          if (0 < iVar6) {
            do {
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar30);
              if ((cVar3 != '\0') &&
                 (cVar3 = FUN_14146fea0(0x1423ed870,0xb,0,uVar30), cVar3 != '\0')) {
                auStack_2b8[0] = auStack_2b8[0] & 0xffff0000;
                workshop_supplier_0x70ab0(alStack_280,auStack_2b8);
                auStack_2b8[0] = CONCAT22(auStack_2b8[0]._2_2_,(short)uVar30);
                workshop_supplier_0x70ab0(alStack_268,auStack_2b8);
              }
              uVar7 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar7;
            } while ((int)uVar7 < iVar6);
          }
          break;
        case 6:
          auStack_2b8[0] = workshop_supplier_0x70410(0x142508c48);
          uVar15 = uVar30;
          uVar29 = uVar30;
          uVar7 = auStack_2b8[0];
          if (0 < (int)auStack_2b8[0]) {
            do {
              iVar6 = (int)uVar15;
              cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,uVar15);
              if ((cVar3 != '\0') && (cVar3 = FUN_14146fea0(0x1423ed870,10,0,uVar15), cVar3 != '\0')
                 ) {
                if (lVar9 != 0) {
                  plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
                  lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
                  uVar29 = uVar30;
                  if (lVar28 != 0) {
                    do {
                      lVar28 = lVar9 + 0x178;
                      psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                      plVar22 = (longlong *)
                                workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
                      cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,0);
                      if (cVar3 == '\0') {
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,1);
                        if (cVar3 != '\0') goto LAB_1408e0fc3;
                      }
                      else {
LAB_1408e0fc3:
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,2);
                        if (cVar3 == '\0') {
                          lVar28 = FUN_1408c8390();
                          *(longlong **)(lVar28 + 0x40) = param_1;
                          *(undefined4 *)(lVar28 + 0x48) = 100;
                          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar29);
                          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                          *(undefined2 *)(lVar28 + 0x74) = 0;
                          *(int *)(lVar28 + 0x78) = iVar6;
                        }
                      }
                      iVar4 = (int)plStack_2b0 + 1;
                      plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar4);
                      uVar15 = workshop_supplier_0x70a10(lVar9 + 0x178);
                      uVar29 = (longlong)iVar4;
                    } while ((ulonglong)(longlong)iVar4 < uVar15);
                  }
                  plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
                  lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
                  uVar29 = uVar30;
                  if (lVar28 != 0) {
                    do {
                      lVar28 = lVar9 + 0x1f0;
                      psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                      plVar22 = (longlong *)
                                workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
                      cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,0);
                      if (cVar3 == '\0') {
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,1);
                        if (cVar3 != '\0') goto LAB_1408e10d3;
                      }
                      else {
LAB_1408e10d3:
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,2);
                        if (cVar3 == '\0') {
                          lVar28 = FUN_1408c8390();
                          *(longlong **)(lVar28 + 0x40) = param_1;
                          *(undefined4 *)(lVar28 + 0x48) = 0x66;
                          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar29);
                          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                          *(undefined2 *)(lVar28 + 0x74) = 0;
                          *(int *)(lVar28 + 0x78) = iVar6;
                        }
                      }
                      iVar4 = (int)plStack_2b0 + 1;
                      plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar4);
                      uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
                      uVar29 = (longlong)iVar4;
                    } while ((ulonglong)(longlong)iVar4 < uVar15);
                  }
                  plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
                  lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
                  uVar29 = uVar30;
                  if (lVar28 != 0) {
                    do {
                      lVar28 = lVar9 + 0x1a8;
                      psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                      plVar22 = (longlong *)
                                workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
                      cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,0);
                      if (cVar3 == '\0') {
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,1);
                        if (cVar3 != '\0') goto LAB_1408e11e3;
                      }
                      else {
LAB_1408e11e3:
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
                        if (cVar3 == '\0') {
                          lVar28 = FUN_1408c8390();
                          *(longlong **)(lVar28 + 0x40) = param_1;
                          *(undefined4 *)(lVar28 + 0x48) = 0x65;
                          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar29);
                          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                          *(undefined2 *)(lVar28 + 0x74) = 0;
                          *(int *)(lVar28 + 0x78) = iVar6;
                        }
                      }
                      iVar4 = (int)plStack_2b0 + 1;
                      plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar4);
                      uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
                      uVar29 = (longlong)iVar4;
                    } while ((ulonglong)(longlong)iVar4 < uVar15);
                  }
                  plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
                  lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
                  uVar29 = uVar30;
                  if (lVar28 != 0) {
                    do {
                      lVar28 = lVar9 + 0x1c0;
                      psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                      plVar22 = (longlong *)
                                workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
                      cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,0);
                      if (cVar3 == '\0') {
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,1);
                        if (cVar3 != '\0') goto LAB_1408e12f3;
                      }
                      else {
LAB_1408e12f3:
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
                        if (cVar3 == '\0') {
                          lVar28 = FUN_1408c8390();
                          *(longlong **)(lVar28 + 0x40) = param_1;
                          *(undefined4 *)(lVar28 + 0x48) = 0x74;
                          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar29);
                          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                          *(undefined2 *)(lVar28 + 0x74) = 0;
                          *(int *)(lVar28 + 0x78) = iVar6;
                        }
                      }
                      iVar4 = (int)plStack_2b0 + 1;
                      plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar4);
                      uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
                      uVar29 = (longlong)iVar4;
                    } while ((ulonglong)(longlong)iVar4 < uVar15);
                  }
                  plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
                  lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1d8);
                  uVar29 = uVar30;
                  uVar7 = auStack_2b8[0];
                  if (lVar28 != 0) {
                    do {
                      lVar28 = lVar9 + 0x1d8;
                      psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                      plVar22 = (longlong *)
                                workshop_supplier_0x707e0(&DAT_1425091f0,(longlong)*psVar21);
                      cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,0);
                      if (cVar3 == '\0') {
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_1425091f0,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,1);
                        if (cVar3 != '\0') goto LAB_1408e1403;
                      }
                      else {
LAB_1408e1403:
                        psVar21 = (short *)workshop_supplier_0x70a00(lVar28,uVar29);
                        plVar22 = (longlong *)
                                  workshop_supplier_0x707e0(&DAT_1425091f0,(longlong)*psVar21);
                        cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
                        if (cVar3 == '\0') {
                          lVar28 = FUN_1408c8390();
                          *(longlong **)(lVar28 + 0x40) = param_1;
                          *(undefined4 *)(lVar28 + 0x48) = 0x75;
                          puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1d8,uVar29);
                          *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                          *(undefined2 *)(lVar28 + 0x74) = 0;
                          *(int *)(lVar28 + 0x78) = iVar6;
                        }
                      }
                      iVar4 = (int)plStack_2b0 + 1;
                      plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar4);
                      uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1d8);
                      uVar29 = (longlong)iVar4;
                      uVar7 = auStack_2b8[0];
                    } while ((ulonglong)(longlong)iVar4 < uVar15);
                  }
                }
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x83;
                *(undefined2 *)(lVar28 + 0x74) = 0;
                *(int *)(lVar28 + 0x78) = iVar6;
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x84;
                *(undefined2 *)(lVar28 + 0x74) = 0;
                *(int *)(lVar28 + 0x78) = iVar6;
              }
              uVar15 = (ulonglong)(iVar6 + 1U);
              uVar29 = uVar30;
            } while ((int)(iVar6 + 1U) < (int)uVar7);
          }
        }
      }
      lVar9 = workshop_supplier_0x70a10(alStack_280);
      uVar30 = uVar29;
      if (lVar9 != 0) {
        do {
          lVar9 = FUN_1408c8190();
          *(longlong **)(lVar9 + 0x40) = param_1;
          puVar23 = (undefined2 *)workshop_supplier_0x70a00(alStack_280,uVar29);
          *(undefined2 *)(lVar9 + 0x48) = *puVar23;
          psVar21 = (short *)workshop_supplier_0x70a00(alStack_268,uVar29);
          *(int *)(lVar9 + 0x4c) = (int)*psVar21;
          *(undefined1 *)(lVar9 + 0x54) = 1;
          uVar7 = (int)uVar30 + 1;
          uVar29 = (ulonglong)(int)uVar7;
          uVar15 = workshop_supplier_0x70a10(alStack_280);
          uVar30 = (ulonglong)uVar7;
        } while (uVar29 < uVar15);
      }
      plVar22 = (longlong *)FUN_1408c8300();
      plVar22[8] = (longlong)param_1;
      *(undefined4 *)(plVar22 + 9) = 0xffffffff;
      *(undefined1 *)((longlong)plVar22 + 0x4c) = 1;
      (**(code **)(*plVar22 + 0x20))(plVar22);
      workshop_supplier_0x675a0(alStack_268);
      workshop_supplier_0x675a0(alStack_280);
      goto LAB_1408e24bb;
    }
    uVar29 = 0;
    if (5 < _DAT_1418bd74c) goto LAB_1408e23f6;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_1418bd74c) {
    case 0:
      if (lVar9 != 0) {
        plStack_248 = (longlong *)(lVar9 + 0x148);
        lVar28 = workshop_supplier_0x70a10(plStack_248);
        plVar22 = plStack_248;
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            uVar8 = _DAT_1418bd754;
            sVar2 = _DAT_1418bd750;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar29);
            cVar3 = FUN_1408d73e0(0x18,*puVar23,sVar2,uVar8);
            if (cVar3 != '\0') {
              lVar9 = FUN_1408c8390();
              *(longlong **)(lVar9 + 0x40) = param_1;
              *(undefined4 *)(lVar9 + 0x48) = 0x60;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar29);
              *(undefined2 *)(lVar9 + 0x72) = *puVar23;
              *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar30 + 1;
            uVar29 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(plVar22);
            uVar30 = (ulonglong)uVar7;
            lVar9 = lStack_2a8;
          } while (uVar29 < uVar15);
        }
        uVar29 = 0;
        plStack_248 = (longlong *)(lVar9 + 0x130);
        lVar28 = workshop_supplier_0x70a10();
        plVar22 = plStack_248;
        if (lVar28 != 0) {
          uStack_290 = lVar9 + 0x148;
          uVar30 = uVar29;
          do {
            uVar8 = _DAT_1418bd754;
            sVar2 = _DAT_1418bd750;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar29);
            cVar3 = FUN_1408d73e0(0x18,*puVar23,sVar2,uVar8);
            if (cVar3 != '\0') {
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar29);
              iVar6 = workshop_supplier_0x71490(*puVar23,uStack_290);
              if (iVar6 == -1) {
                lVar9 = FUN_1408c8390();
                *(longlong **)(lVar9 + 0x40) = param_1;
                *(undefined4 *)(lVar9 + 0x48) = 0x60;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(plVar22,uVar29);
                *(undefined2 *)(lVar9 + 0x72) = *puVar23;
                *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
              }
            }
            uVar7 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar7;
            uVar29 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(plVar22);
            lVar9 = lStack_2a8;
          } while (uVar29 < uVar15);
        }
        uVar30 = 0;
        lVar9 = lVar9 + 400;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar29 = uVar30;
        if (lVar28 != 0) {
          do {
            uVar8 = _DAT_1418bd754;
            sVar2 = _DAT_1418bd750;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
            cVar3 = FUN_1408d73e0(0x27,*puVar23,sVar2,uVar8);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x81;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar29 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar15);
          plVar22 = (longlong *)FUN_1408c8190();
          plVar22[8] = (longlong)param_1;
          *(undefined2 *)(plVar22 + 9) = 0xffff;
          goto LAB_1408df629;
        }
      }
      break;
    case 1:
      if (lVar9 != 0) {
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar29);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,2);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 100;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar29);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar30 + 1;
            uVar29 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9 + 0x178);
            uVar30 = (ulonglong)uVar7;
          } while (uVar29 < uVar15);
        }
        uVar30 = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
        uVar29 = uVar30;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,2);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x66;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar29 + 1;
            uVar30 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
            uVar29 = (ulonglong)uVar7;
          } while (uVar30 < uVar15);
        }
        uVar30 = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
        uVar29 = uVar30;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x65;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar29 + 1;
            uVar30 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
            uVar29 = (ulonglong)uVar7;
          } while (uVar30 < uVar15);
        }
        uVar30 = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
        uVar29 = uVar30;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091d8,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x74;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar29 + 1;
            uVar30 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1c0);
            uVar29 = (ulonglong)uVar7;
          } while (uVar30 < uVar15);
        }
        uVar30 = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1d8);
        uVar29 = uVar30;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1d8,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091f0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,2);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x75;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1d8,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            }
            uVar7 = (int)uVar29 + 1;
            uVar30 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9 + 0x1d8);
            uVar29 = (ulonglong)uVar7;
          } while (uVar30 < uVar15);
        }
        uVar29 = 0;
        uVar30 = uVar29;
        if (*(longlong *)(lVar9 + 0x210) - *(longlong *)(lVar9 + 0x208) >> 1 != 0) {
          do {
            lVar28 = FUN_1408c8390();
            *(longlong **)(lVar28 + 0x40) = param_1;
            *(undefined4 *)(lVar28 + 0x48) = 0x76;
            *(undefined2 *)(lVar28 + 0x72) = *(undefined2 *)(uVar29 + *(longlong *)(lVar9 + 0x208));
            *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
            *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
            uVar7 = (int)uVar30 + 1;
            uVar29 = uVar29 + 2;
            uVar30 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x210) - *(longlong *)(lVar9 + 0x208) >> 1));
          plVar22 = (longlong *)FUN_1408c8190();
          plVar22[8] = (longlong)param_1;
          *(undefined2 *)(plVar22 + 9) = 0xffff;
          goto LAB_1408df629;
        }
      }
      break;
    case 2:
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x77;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x78;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x7c;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x7e;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x7d;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4c;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x50;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x43;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x44;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xc6;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 199;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4f;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4e;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x49;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x46;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x47;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x48;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4d;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4b;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xc1;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xcb;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xcc;
      goto LAB_1408e23de;
    case 3:
      if (lVar9 != 0) {
        lVar9 = lVar9 + 0x268;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_1425091c0,(longlong)*psVar21);
            cVar3 = FUN_140071440(*plVar22 + 0xa8,"BALLISTA");
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x85;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
            }
            uVar7 = (int)uVar30 + 1;
            uVar29 = (ulonglong)(int)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (ulonglong)uVar7;
          } while (uVar29 < uVar15);
        }
      }
      cVar3 = FUN_14146fea0(0x1423ed870,0x3a,_DAT_1418bd750,_DAT_1418bd754);
      if (cVar3 != '\0') {
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 99;
        *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0x62;
        *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
        lVar9 = FUN_1408c8390();
        *(undefined4 *)(lVar9 + 0x48) = 0xf5;
        goto LAB_1408e23de;
      }
      break;
    case 4:
      if (lVar9 != 0) {
        plStack_2b0 = (longlong *)((ulonglong)plStack_2b0 & 0xffffffff00000000);
        lVar9 = lVar9 + 0x220;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ec0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xd8,3);
            iVar6 = (int)uVar29;
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x8c;
              *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
              *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              iVar6 = (int)plStack_2b0;
            }
            uVar7 = iVar6 + 1;
            uVar29 = (ulonglong)uVar7;
            plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,uVar7);
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar15);
        }
      }
      cVar3 = FUN_14146fea0(0x1423ed870,0xb,_DAT_1418bd750,_DAT_1418bd754);
      if (cVar3 != '\0') {
        lVar9 = FUN_1408c8390();
        *(undefined4 *)(lVar9 + 0x48) = 0x8b;
        goto LAB_1408e23de;
      }
      break;
    case 5:
      cVar3 = FUN_1408d73e0(0x2d,0xffffffff,_DAT_1418bd750,_DAT_1418bd754);
      if (cVar3 != '\0') {
        lVar28 = FUN_1408c8390();
        *(longlong **)(lVar28 + 0x40) = param_1;
        *(undefined4 *)(lVar28 + 0x48) = 0x61;
        *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      }
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x52;
      *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7a;
      *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x7b;
      *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
      if (lVar9 != 0) {
        lVar9 = lVar9 + 0x280;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        uVar30 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ef0,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xa8,0x11);
            uVar8 = _DAT_1418bd754;
            sVar2 = _DAT_1418bd750;
            if (cVar3 == '\0') {
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar30);
              cVar3 = FUN_1408d73e0(0x56,*puVar23,sVar2,uVar8);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0xd8;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
              }
            }
            uVar7 = (int)uVar29 + 1;
            uVar29 = (ulonglong)uVar7;
            uVar15 = workshop_supplier_0x70a10(lVar9);
            uVar30 = (longlong)(int)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar15);
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x79;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x53;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x67;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe7;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xec;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xeb;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe9;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xe6;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xea;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xed;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xe8;
LAB_1408e23de:
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
      *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
    }
LAB_1408e23f6:
    plVar22 = (longlong *)FUN_1408c8190();
    plVar22[8] = (longlong)param_1;
    *(undefined2 *)(plVar22 + 9) = 0xffff;
LAB_1408df629:
    *(undefined4 *)(plVar22 + 10) = 0;
    *(undefined1 *)((longlong)plVar22 + 0x54) = 1;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    goto LAB_1408e24bb;
  case 7:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if ((cVar3 != '\0') && (lVar9 != 0)) {
      iVar6 = 0;
      lVar9 = lVar9 + 0x148;
      lVar28 = workshop_supplier_0x70a10(lVar9);
      if (lVar28 != 0) {
        uVar29 = 0;
        do {
          psVar21 = (short *)workshop_supplier_0x70a00(lVar9,uVar29);
          plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142508ea8,(longlong)*psVar21);
          cVar3 = workshop_supplier_0x70ae0(*plVar22 + 0xd8);
          if (cVar3 == '\0') {
            lVar28 = FUN_1408c8390();
            *(longlong **)(lVar28 + 0x40) = param_1;
            *(undefined4 *)(lVar28 + 0x48) = 0x60;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
            *(undefined2 *)(lVar28 + 0x72) = *puVar23;
            *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x20;
            lVar28 = FUN_1408c8390();
            *(longlong **)(lVar28 + 0x40) = param_1;
            *(undefined4 *)(lVar28 + 0x48) = 0x60;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
            *(undefined2 *)(lVar28 + 0x72) = *puVar23;
            *(undefined4 *)(lVar28 + 0x84) = 2;
          }
          iVar6 = iVar6 + 1;
          uVar29 = (ulonglong)iVar6;
          uVar30 = workshop_supplier_0x70a10(lVar9);
        } while (uVar29 < uVar30);
      }
    }
    break;
  case 8:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x8b;
      *(undefined2 *)(lVar9 + 0x74) = 0;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xcd;
      goto LAB_1408e24af;
    }
    break;
  case 9:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 99;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0x62;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      lVar28 = FUN_1408c8390();
      *(longlong **)(lVar28 + 0x40) = param_1;
      *(undefined4 *)(lVar28 + 0x48) = 0xf5;
      *(undefined4 *)(lVar28 + 0x84) = 2;
      if (lVar9 != 0) {
        iVar6 = workshop_supplier_0x70410(0x142508c48);
        plStack_2b0 = (longlong *)CONCAT44(plStack_2b0._4_4_,iVar6);
        auStack_2b8[0] = 0;
        lVar9 = lVar9 + 0x268;
        lVar28 = workshop_supplier_0x70a10(lVar9);
        if (lVar28 != 0) {
          uVar29 = 0;
          do {
            iVar4 = 0;
            if (0 < iVar6) {
              do {
                cVar3 = FUN_14146fea0(0x1423ed870,0x2f,0,iVar4);
                if ((cVar3 != '\0') &&
                   (cVar3 = FUN_14146fea0(0x1423ed870,0x33,0,iVar4), cVar3 != '\0')) {
                  lVar28 = FUN_1408c8390();
                  *(longlong **)(lVar28 + 0x40) = param_1;
                  *(undefined4 *)(lVar28 + 0x48) = 0x86;
                  puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
                  *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                  *(undefined2 *)(lVar28 + 0x74) = 0;
                  *(int *)(lVar28 + 0x78) = iVar4;
                  iVar6 = (int)plStack_2b0;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar6);
            }
            lVar28 = FUN_1408c8390();
            *(longlong **)(lVar28 + 0x40) = param_1;
            *(undefined4 *)(lVar28 + 0x48) = 0x86;
            puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9,uVar29);
            *(undefined2 *)(lVar28 + 0x72) = *puVar23;
            *(undefined4 *)(lVar28 + 0x84) = 2;
            auStack_2b8[0] = auStack_2b8[0] + 1;
            uVar29 = (ulonglong)(int)auStack_2b8[0];
            uVar30 = workshop_supplier_0x70a10(lVar9);
            iVar6 = (int)plStack_2b0;
          } while (uVar29 < uVar30);
        }
      }
    }
    break;
  case 10:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x68;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x97;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x21;
      goto LAB_1408e24af;
    }
    break;
  case 0xb:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      if (lVar9 != 0) {
        uVar29 = 0;
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,5);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 100;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            }
            uVar7 = (int)uVar15 + 1;
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x178);
            uVar30 = (longlong)(int)uVar7;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,5);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x66;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            }
            uVar7 = (int)uVar15 + 1;
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
            uVar30 = (longlong)(int)uVar7;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (lVar28 != 0) {
          do {
            psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
            plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
            cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,5);
            if (cVar3 != '\0') {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x65;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            }
            uVar7 = (int)uVar15 + 1;
            uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
            uVar30 = (longlong)(int)uVar7;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
        }
        lVar28 = *(longlong *)(lVar9 + 0x1c0);
        if (*(longlong *)(lVar9 + 0x1c8) - lVar28 >> 1 != 0) {
          uStack_290 = 0;
          uVar30 = uVar29;
          uVar15 = uVar29;
          do {
            lVar28 = *(longlong *)(_DAT_1425091d8 + (longlong)*(short *)(lVar28 + uVar30) * 8);
            if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 0x20) != 0)) {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x74;
              puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uStack_290);
              *(undefined2 *)(lVar28 + 0x72) = *puVar23;
              *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            }
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
            uVar30 = uVar30 + 2;
            lVar28 = *(longlong *)(lVar9 + 0x1c0);
            uStack_290 = (ulonglong)(int)uVar7;
          } while (uStack_290 < (ulonglong)(*(longlong *)(lVar9 + 0x1c8) - lVar28 >> 1));
        }
        lVar28 = *(longlong *)(lVar9 + 0x1d8);
        uVar30 = uVar29;
        uVar15 = uVar29;
        if (*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1 != 0) {
          do {
            lVar28 = *(longlong *)(_DAT_1425091f0 + (longlong)*(short *)(lVar28 + uVar30) * 8);
            if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 0x20) != 0)) {
              lVar28 = FUN_1408c8390();
              *(longlong **)(lVar28 + 0x40) = param_1;
              *(undefined4 *)(lVar28 + 0x48) = 0x75;
              *(undefined2 *)(lVar28 + 0x72) =
                   *(undefined2 *)(uVar30 + *(longlong *)(lVar9 + 0x1d8));
              *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            }
            uVar7 = (int)uVar15 + 1;
            lVar28 = *(longlong *)(lVar9 + 0x1d8);
            uVar30 = uVar30 + 2;
            uVar15 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1));
        }
        uVar30 = uVar29;
        if (*(longlong *)(lVar9 + 0x210) - *(longlong *)(lVar9 + 0x208) >> 1 != 0) {
          do {
            lVar28 = FUN_1408c8390();
            *(longlong **)(lVar28 + 0x40) = param_1;
            *(undefined4 *)(lVar28 + 0x48) = 0x76;
            *(undefined2 *)(lVar28 + 0x72) = *(undefined2 *)(uVar29 + *(longlong *)(lVar9 + 0x208));
            *(uint *)(lVar28 + 0x84) = *(uint *)(lVar28 + 0x84) | 0x10;
            uVar7 = (int)uVar30 + 1;
            uVar29 = uVar29 + 2;
            uVar30 = (ulonglong)uVar7;
          } while ((ulonglong)(longlong)(int)uVar7 <
                   (ulonglong)(*(longlong *)(lVar9 + 0x210) - *(longlong *)(lVar9 + 0x208) >> 1));
        }
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x4a;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) | 0x10;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x79;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) | 0x10;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x83;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) | 0x10;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x84;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) | 0x10;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xc0;
      *(uint *)(lVar9 + 0x84) = *(uint *)(lVar9 + 0x84) | 0x10;
      goto LAB_1408e24af;
    }
    break;
  case 0xc:
    workshop_supplier_0x70ae0(0x1418bd768);
    break;
  case 0xd:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      if ((_DAT_1418bd750 != -1) || (_DAT_1418bd758 != 0)) {
        uVar29 = 0;
        if (lVar9 != 0) {
          lVar28 = workshop_supplier_0x70a10(lVar9 + 0x178);
          uVar30 = uVar29;
          uVar15 = uVar29;
          if (lVar28 != 0) {
            do {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509190,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0x118,0);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 100;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x178,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
                *(int *)(lVar28 + 0x84) = _DAT_1418bd758;
              }
              uVar7 = (int)uVar15 + 1;
              uVar13 = workshop_supplier_0x70a10(lVar9 + 0x178);
              uVar30 = (longlong)(int)uVar7;
              uVar15 = (ulonglong)uVar7;
            } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
          }
          lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
          uVar30 = uVar29;
          uVar15 = uVar29;
          if (lVar28 != 0) {
            do {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509238,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0x128,0);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x66;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1f0,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
                *(int *)(lVar28 + 0x84) = _DAT_1418bd758;
              }
              uVar7 = (int)uVar15 + 1;
              uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1f0);
              uVar30 = (longlong)(int)uVar7;
              uVar15 = (ulonglong)uVar7;
            } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
          }
          lVar28 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
          uVar30 = uVar29;
          uVar15 = uVar29;
          if (lVar28 != 0) {
            do {
              psVar21 = (short *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
              plVar22 = (longlong *)workshop_supplier_0x707e0(&DAT_142509220,(longlong)*psVar21);
              cVar3 = workshop_supplier_0x73550(*plVar22 + 0xe8,0);
              if (cVar3 != '\0') {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x65;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1a8,uVar30);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
                *(int *)(lVar28 + 0x84) = _DAT_1418bd758;
              }
              uVar7 = (int)uVar15 + 1;
              uVar13 = workshop_supplier_0x70a10(lVar9 + 0x1a8);
              uVar30 = (longlong)(int)uVar7;
              uVar15 = (ulonglong)uVar7;
            } while ((ulonglong)(longlong)(int)uVar7 < uVar13);
          }
          lVar28 = *(longlong *)(lVar9 + 0x1c0);
          if (*(longlong *)(lVar9 + 0x1c8) - lVar28 >> 1 != 0) {
            uStack_290 = 0;
            uVar30 = uVar29;
            uVar15 = uVar29;
            do {
              lVar28 = *(longlong *)(_DAT_1425091d8 + (longlong)*(short *)(lVar28 + uVar30) * 8);
              if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 1) != 0)) {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x74;
                puVar23 = (undefined2 *)workshop_supplier_0x70a00(lVar9 + 0x1c0,uStack_290);
                *(undefined2 *)(lVar28 + 0x72) = *puVar23;
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
                *(int *)(lVar28 + 0x84) = _DAT_1418bd758;
              }
              uVar7 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar7;
              uVar30 = uVar30 + 2;
              lVar28 = *(longlong *)(lVar9 + 0x1c0);
              uStack_290 = (ulonglong)(int)uVar7;
            } while (uStack_290 < (ulonglong)(*(longlong *)(lVar9 + 0x1c8) - lVar28 >> 1));
          }
          lVar28 = *(longlong *)(lVar9 + 0x1d8);
          uVar30 = uVar29;
          if (*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1 != 0) {
            do {
              lVar28 = *(longlong *)(_DAT_1425091f0 + (longlong)*(short *)(lVar28 + uVar29) * 8);
              if ((0 < *(int *)(lVar28 + 0xf0)) && ((**(byte **)(lVar28 + 0xe8) & 1) != 0)) {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                *(undefined4 *)(lVar28 + 0x48) = 0x75;
                *(undefined2 *)(lVar28 + 0x72) =
                     *(undefined2 *)(uVar29 + *(longlong *)(lVar9 + 0x1d8));
                *(short *)(lVar28 + 0x74) = _DAT_1418bd750;
                *(undefined4 *)(lVar28 + 0x78) = _DAT_1418bd754;
                *(int *)(lVar28 + 0x84) = _DAT_1418bd758;
              }
              uVar7 = (int)uVar30 + 1;
              uVar29 = uVar29 + 2;
              lVar28 = *(longlong *)(lVar9 + 0x1d8);
              uVar30 = (ulonglong)uVar7;
            } while ((ulonglong)(longlong)(int)uVar7 <
                     (ulonglong)(*(longlong *)(lVar9 + 0x1e0) - lVar28 >> 1));
          }
        }
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0x4a;
        *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
        *(int *)(lVar9 + 0x84) = _DAT_1418bd758;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0x78;
        *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
        *(int *)(lVar9 + 0x84) = _DAT_1418bd758;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xc0;
        *(short *)(lVar9 + 0x74) = _DAT_1418bd750;
        *(undefined4 *)(lVar9 + 0x78) = _DAT_1418bd754;
        *(int *)(lVar9 + 0x84) = _DAT_1418bd758;
        goto LAB_1408df61a;
      }
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x50) = 4;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8190();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x50) = 8;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      lVar9 = FUN_1408c8190();
      *(undefined4 *)(lVar9 + 0x50) = 0x1000;
      *(undefined1 *)(lVar9 + 0x54) = 1;
      goto LAB_1408e24af;
    }
    break;
  case 0xe:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x69;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x96;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x22;
      goto LAB_1408e24af;
    }
    break;
  case 0xf:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x95;
      goto LAB_1408e24af;
    }
    break;
  case 0x10:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = workshop_supplier_0x70410(0x142401f20);
      if (lVar9 != 0) {
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xe;
      }
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x73;
      *(undefined4 *)(lVar9 + 0x84) = 1;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x73;
      *(undefined4 *)(lVar9 + 0x84) = 8;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x73;
      *(undefined4 *)(lVar9 + 0x84) = 0x1000;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x73;
      *(undefined2 *)(lVar9 + 0x74) = 0;
      goto LAB_1408e24af;
    }
    break;
  case 0x11:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x6a;
      goto LAB_1408e24af;
    }
    break;
  case 0x12:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x21;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x98;
      goto LAB_1408e24af;
    }
    break;
  case 0x13:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x72;
      *(undefined2 *)(lVar9 + 0x74) = 2;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0x72;
      *(undefined2 *)(lVar9 + 0x74) = 3;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0x72;
      *(undefined2 *)(lVar9 + 0x74) = 4;
      goto LAB_1408e24af;
    }
    break;
  case 0x14:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xba;
      lVar9 = FUN_1408c8390();
      *(longlong **)(lVar9 + 0x40) = param_1;
      *(undefined4 *)(lVar9 + 0x48) = 0xbb;
      lVar9 = FUN_1408c8390();
      *(undefined4 *)(lVar9 + 0x48) = 0xbd;
      goto LAB_1408e24af;
    }
    break;
  case 0x15:
    cVar3 = workshop_supplier_0x70ae0(0x1418bd768);
    if (cVar3 != '\0') {
      uVar10 = workshop_supplier_0x70410(&DAT_142513438);
      uStack_288 = uVar10;
      workshop_supplier_0x670c0(alStack_268);
      iVar6 = (int)uVar10;
      lVar9 = (longlong)iVar6;
      FUN_140070940(alStack_268,lVar9);
      workshop_supplier_0xfcbb0(alStack_268);
      workshop_supplier_0x670c0(auStack_240);
      workshop_supplier_0x1fddc0(auStack_208);
      uStack_154 = (undefined2)param_1[2];
      uStack_152 = *(undefined2 *)((longlong)param_1 + 0x1c);
      uStack_150 = (undefined2)param_1[4];
      uStack_156 = 1;
      uStack_1fc = 0x10;
      uStack_1ec = 1;
      uStack_1e8 = 1;
      uStack_1f8 = 0x142401fe0;
      plStack_138 = param_1;
      FUN_140a406f0(auStack_208,auStack_240);
      workshop_supplier_0x70800(auStack_240,&lStack_2a8);
      workshop_supplier_0x707f0(auStack_240,auStack_2a0);
      cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,auStack_2a0);
      while (cVar3 == '\0') {
        puVar11 = (undefined8 *)workshop_supplier_0x703d0(&lStack_2a8);
        plVar22 = (longlong *)*puVar11;
        iVar4 = (**(code **)(*plVar22 + 0x3a8))(plVar22);
        if (iVar4 != -1) {
          iVar5 = (**(code **)(*plVar22 + 0x3a0))(plVar22,iVar4);
          piVar12 = (int *)workshop_supplier_0x70920(alStack_268,(longlong)iVar4);
          *piVar12 = *piVar12 + iVar5;
        }
        workshop_supplier_0x703c0(&lStack_2a8);
        cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,auStack_2a0);
      }
      FUN_1401fdef0(auStack_208);
      workshop_supplier_0x68720(auStack_240);
      if ((((ushort)(_DAT_1418bd75c - 0xbeU) < 2) || (_DAT_1418bd75c == 0xf4)) &&
         (_DAT_1418bd760 != -1)) {
        workshop_supplier_0x670c0(auStack_240);
        workshop_supplier_0x1fddc0(auStack_208);
        uStack_154 = (undefined2)param_1[2];
        uStack_152 = *(undefined2 *)((longlong)param_1 + 0x1c);
        uStack_150 = (undefined2)param_1[4];
        if (_DAT_1418bd74c == 9) {
          auStack_208[0] = 0x3a;
          uStack_180 = 10000;
          uStack_1f8 = 0x142402310;
        }
        else if (_DAT_1418bd74c == 0xb) {
          auStack_208[0] = 0x37;
          uStack_1f8 = 0x1424022c8;
        }
        else {
          auStack_208[0] = 0x39;
          uStack_1fc = 0x40;
          uStack_180 = 15000;
          uStack_1f8 = 0x1424022f8;
        }
        uStack_1ec = 2;
        uStack_1e8 = 1;
        uStack_156 = 1;
        plStack_138 = param_1;
        FUN_140a406f0(auStack_208,auStack_240);
        workshop_supplier_0x670c0(alStack_280);
        FUN_140070940(alStack_280,lVar9);
        workshop_supplier_0xfcbb0(alStack_280);
        workshop_supplier_0x70800(auStack_240,&lStack_2a8);
        workshop_supplier_0x707f0(auStack_240,auStack_2a0);
        cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,auStack_2a0);
        while (cVar3 == '\0') {
          puVar11 = (undefined8 *)workshop_supplier_0x703d0(&lStack_2a8);
          iVar6 = (**(code **)(*(longlong *)*puVar11 + 0x6b0))();
          if (iVar6 != -1) {
            piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)iVar6);
            *piVar12 = *piVar12 + 1;
          }
          workshop_supplier_0x703c0(&lStack_2a8);
          cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,auStack_2a0);
        }
        uVar30 = 0;
        uVar29 = uVar30;
        do {
          auStack_2b8[0] = 0;
          iVar6 = (int)uVar29;
          if (0 < (int)uVar10) {
            lStack_2a8 = 0;
            uVar29 = uVar30;
            do {
              lVar9 = lStack_2a8;
              iVar4 = (int)uVar29;
              if ((iVar4 != _DAT_1418bd760) &&
                 ((uVar14 = uStack_288, uVar15 = uVar30, uVar13 = uVar30, iVar6 != 0 ||
                  (piVar12 = (int *)workshop_supplier_0x70920(alStack_280,lStack_2a8),
                  uVar14 = uStack_288, *piVar12 != 0)))) {
                do {
                  iVar5 = (int)uVar13;
                  if ((iVar5 != _DAT_1418bd760) && ((int)uVar29 != iVar5)) {
                    if (iVar6 == 0) {
                      piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar15);
                      uVar14 = uStack_288;
                      if (*piVar12 != 0) {
LAB_1408dcd61:
                        workshop_supplier_0x1fd1f0(aiStack_d8);
                        FUN_1407f3360(&DAT_142513438,uVar29,uVar13,aiStack_d8);
                        uVar13 = uVar30;
                        do {
                          if (aiStack_d8[uVar13] == _DAT_1418bd760) {
                            lVar9 = FUN_1408c8390();
                            *(longlong **)(lVar9 + 0x40) = param_1;
                            *(int *)(lVar9 + 0x48) = (int)_DAT_1418bd75c;
                            *(int *)(lVar9 + 0x80) = _DAT_1418bd760;
                            *(int *)(lVar9 + 0x90) = (int)uVar29;
                            *(int *)(lVar9 + 0x94) = iVar5;
                            if (iVar6 == 0) {
                              piVar12 = (int *)workshop_supplier_0x70920(alStack_280,lStack_2a8);
                              iVar4 = *piVar12;
                              piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar15);
                              if (*piVar12 < iVar4) {
                                piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar15);
                                iVar4 = *piVar12;
                              }
                              FUN_140542fb0(iVar4,lVar9 + 0xb8);
                              workshop_supplier_0x70b20(lVar9 + 0xb8," available");
                              uVar29 = (ulonglong)auStack_2b8[0];
                            }
                            *(int *)(lVar9 + 0x38) = iVar6;
                            uVar14 = uStack_288;
                            lVar9 = lStack_2a8;
                            break;
                          }
                          uVar13 = uVar13 + 1;
                          uVar14 = uStack_288;
                        } while ((longlong)uVar13 < 7);
                      }
                    }
                    else if (((iVar6 != 1) ||
                             (piVar12 = (int *)workshop_supplier_0x70920(alStack_280,lVar9),
                             *piVar12 < 1)) ||
                            (piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar15),
                            uVar14 = uStack_288, *piVar12 < 1)) goto LAB_1408dcd61;
                  }
                  iVar4 = (int)uVar29;
                  uVar10 = uStack_288;
                  uVar15 = uVar15 + 1;
                  uVar13 = (ulonglong)(iVar5 + 1U);
                } while ((int)(iVar5 + 1U) < (int)uVar14);
              }
              auStack_2b8[0] = iVar4 + 1;
              uVar29 = (ulonglong)auStack_2b8[0];
              lStack_2a8 = lVar9 + 1;
            } while ((int)auStack_2b8[0] < (int)uVar10);
          }
          uVar29 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < 2);
        workshop_supplier_0x670e0(alStack_280);
        FUN_1401fdef0(auStack_208);
        workshop_supplier_0x68720(auStack_240);
        workshop_supplier_0x670e0(alStack_268);
      }
      else if ((_DAT_1418bd75c == 0xf3) && (_DAT_1418bd760 != -1)) {
        uVar30 = 0;
        uVar7 = iVar6 - 1;
        uVar29 = uVar30;
        auStack_2a0[0] = uVar7;
        iVar6 = _DAT_1418bd760;
        do {
          auStack_2b8[0] = 0;
          iVar4 = (int)uVar29;
          if (0 < (int)uVar7) {
            lStack_2a8 = 0;
            uVar29 = uVar30;
            do {
              iVar5 = (int)uVar29;
              lVar9 = lStack_2a8;
              if ((iVar5 != iVar6) &&
                 (iVar32 = iVar5 + 1, uVar14 = uStack_288, lVar28 = lStack_2a8, iVar32 < (int)uVar10
                 )) {
                do {
                  lVar28 = lVar28 + 1;
                  if (iVar32 != iVar6) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_268);
                    if ((*piVar12 < 1) ||
                       (piVar12 = (int *)workshop_supplier_0x70920(alStack_268,lVar28), *piVar12 < 1
                       )) {
                      bVar33 = iVar4 == 0;
                    }
                    else {
                      bVar33 = iVar4 == 1;
                    }
                    uVar14 = uStack_288;
                    lVar9 = lStack_2a8;
                    iVar6 = _DAT_1418bd760;
                    if (!bVar33) {
                      workshop_supplier_0x1fd1f0(aiStack_d8);
                      FUN_1407f3360(&DAT_142513438,uVar29,iVar32,aiStack_d8);
                      uVar15 = uVar30;
                      do {
                        if (aiStack_d8[uVar15] == _DAT_1418bd760) {
                          lVar9 = FUN_1408c8390();
                          *(longlong **)(lVar9 + 0x40) = param_1;
                          *(undefined4 *)(lVar9 + 0x48) = 0xf3;
                          *(int *)(lVar9 + 0x78) = _DAT_1418bd760;
                          *(int *)(lVar9 + 0x90) = (int)uVar29;
                          *(int *)(lVar9 + 0x94) = iVar32;
                          if (iVar4 == 0) {
                            piVar12 = (int *)workshop_supplier_0x70920(alStack_268,lStack_2a8);
                            iVar6 = *piVar12;
                            piVar12 = (int *)workshop_supplier_0x70920(alStack_268,lVar28);
                            if (*piVar12 < iVar6) {
                              piVar12 = (int *)workshop_supplier_0x70920(alStack_268,lVar28);
                              iVar6 = *piVar12;
                            }
                            FUN_140542fb0(iVar6,lVar9 + 0xb8);
                            workshop_supplier_0x70b20(lVar9 + 0xb8," available");
                            uVar29 = (ulonglong)auStack_2b8[0];
                          }
                          *(int *)(lVar9 + 0x38) = iVar4;
                          uVar14 = uStack_288;
                          lVar9 = lStack_2a8;
                          iVar6 = _DAT_1418bd760;
                          break;
                        }
                        uVar15 = uVar15 + 1;
                        uVar14 = uStack_288;
                        lVar9 = lStack_2a8;
                        iVar6 = _DAT_1418bd760;
                      } while ((longlong)uVar15 < 7);
                    }
                  }
                  iVar5 = (int)uVar29;
                  iVar32 = iVar32 + 1;
                  uVar10 = uStack_288;
                  uVar7 = auStack_2a0[0];
                } while (iVar32 < (int)uVar14);
              }
              auStack_2b8[0] = iVar5 + 1;
              uVar29 = (ulonglong)auStack_2b8[0];
              lStack_2a8 = lVar9 + 1;
            } while ((int)auStack_2b8[0] < (int)uVar7);
          }
          uVar29 = (ulonglong)(iVar4 + 1U);
        } while ((int)(iVar4 + 1U) < 2);
        workshop_supplier_0x670e0(alStack_268);
      }
      else if (_DAT_1418bd74c - 9 < 3) {
        workshop_supplier_0x670c0(&uStack_f8);
        workshop_supplier_0x1fddc0(auStack_208);
        uStack_154 = (undefined2)param_1[2];
        uStack_152 = *(undefined2 *)((longlong)param_1 + 0x1c);
        uStack_150 = (undefined2)param_1[4];
        if (_DAT_1418bd74c == 9) {
          auStack_208[0] = 0x3a;
          uStack_180 = 10000;
          uStack_1f8 = 0x142402310;
        }
        else if (_DAT_1418bd74c == 0xb) {
          auStack_208[0] = 0x37;
          uStack_1f8 = 0x1424022c8;
        }
        else {
          auStack_208[0] = 0x39;
          uStack_1fc = 0x40;
          uStack_180 = 15000;
          uStack_1f8 = 0x1424022f8;
        }
        uStack_1ec = 2;
        uStack_1e8 = 1;
        uStack_156 = 1;
        plStack_138 = param_1;
        FUN_140a406f0(auStack_208,&uStack_f8);
        workshop_supplier_0x670c0(auStack_240);
        FUN_140070940(auStack_240,(longlong)iVar6);
        workshop_supplier_0xfcbb0(auStack_240);
        workshop_supplier_0x70800(&uStack_f8,&lStack_2a8);
        workshop_supplier_0x707f0(&uStack_f8,&uStack_288);
        cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,&uStack_288);
        while (cVar3 == '\0') {
          puVar11 = (undefined8 *)workshop_supplier_0x703d0(&lStack_2a8);
          iVar4 = (**(code **)(*(longlong *)*puVar11 + 0x6b0))();
          if (iVar4 != -1) {
            piVar12 = (int *)workshop_supplier_0x70920(auStack_240,(longlong)iVar4);
            *piVar12 = *piVar12 + 1;
          }
          workshop_supplier_0x703c0(&lStack_2a8);
          cVar3 = workshop_supplier_0xbaf30(&lStack_2a8,&uStack_288);
        }
        workshop_supplier_0x670c0(alStack_280);
        FUN_140070940(alStack_280,(longlong)iVar6);
        workshop_supplier_0xfcbb0(alStack_280);
        uVar15 = 0;
        uVar29 = uVar15;
        uVar30 = uVar15;
        if (0 < iVar6) {
          do {
            piVar12 = (int *)workshop_supplier_0x70920(auStack_240,uVar29);
            iVar4 = (int)uVar30;
            uVar13 = uVar15;
            uVar31 = uVar15;
            if (*piVar12 != 0) {
              do {
                iVar5 = (int)uVar13;
                if ((iVar4 != iVar5) &&
                   (piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar31), *piVar12 != 0))
                {
                  piVar12 = (int *)workshop_supplier_0x70920(auStack_240,uVar29);
                  iVar32 = *piVar12;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar31);
                  if (*piVar12 < iVar32) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar31);
                    iVar32 = *piVar12;
                  }
                  workshop_supplier_0x1fd1f0(aiStack_d8);
                  FUN_1407f3360(&DAT_142513438,uVar30,uVar13,aiStack_d8);
                  if ((((aiStack_d8[0] != -1) && (aiStack_d8[0] != iVar4)) &&
                      (aiStack_d8[0] != iVar5)) &&
                     (uStack_290 = (longlong)aiStack_d8[0],
                     piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)aiStack_d8[0])
                     , *piVar12 < iVar32)) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if (((aiStack_d8[1] != -1) && (aiStack_d8[1] != iVar4)) &&
                     ((aiStack_d8[1] != iVar5 &&
                      (uStack_290 = (longlong)aiStack_d8[1],
                      piVar12 = (int *)workshop_supplier_0x70920
                                                 (alStack_280,(longlong)aiStack_d8[1]),
                      *piVar12 < iVar32)))) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if (((aiStack_d8[2] != -1) && (aiStack_d8[2] != iVar4)) &&
                     ((aiStack_d8[2] != iVar5 &&
                      (uStack_290 = (longlong)aiStack_d8[2],
                      piVar12 = (int *)workshop_supplier_0x70920
                                                 (alStack_280,(longlong)aiStack_d8[2]),
                      *piVar12 < iVar32)))) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if ((((aiStack_d8[3] != -1) && (aiStack_d8[3] != iVar4)) &&
                      (aiStack_d8[3] != iVar5)) &&
                     (uStack_290 = (longlong)aiStack_d8[3],
                     piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)aiStack_d8[3])
                     , *piVar12 < iVar32)) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if (((aiStack_d8[4] != -1) && (aiStack_d8[4] != iVar4)) &&
                     ((aiStack_d8[4] != iVar5 &&
                      (uStack_290 = (longlong)aiStack_d8[4],
                      piVar12 = (int *)workshop_supplier_0x70920
                                                 (alStack_280,(longlong)aiStack_d8[4]),
                      *piVar12 < iVar32)))) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if (((aiStack_d8[5] != -1) && (aiStack_d8[5] != iVar4)) &&
                     ((aiStack_d8[5] != iVar5 &&
                      (uStack_290 = (longlong)aiStack_d8[5],
                      piVar12 = (int *)workshop_supplier_0x70920
                                                 (alStack_280,(longlong)aiStack_d8[5]),
                      *piVar12 < iVar32)))) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                  if ((((aiStack_d8[6] != -1) && (aiStack_d8[6] != iVar4)) &&
                      (aiStack_d8[6] != iVar5)) &&
                     (uStack_290 = (longlong)aiStack_d8[6],
                     piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)aiStack_d8[6])
                     , *piVar12 < iVar32)) {
                    piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uStack_290);
                    *piVar12 = iVar32;
                  }
                }
                uVar13 = (ulonglong)(iVar5 + 1U);
                uVar31 = uVar31 + 1;
              } while ((int)(iVar5 + 1U) < iVar6);
            }
            param_1 = plStack_2b0;
            uVar29 = uVar29 + 1;
            uVar30 = (ulonglong)(iVar4 + 1U);
          } while ((int)(iVar4 + 1U) < iVar6);
        }
        lVar9 = (longlong)iVar6;
        lStack_2a8 = lVar9;
        do {
          uVar30 = 0;
          auStack_2b8[0] = 0;
          iVar6 = (int)uVar15;
          uVar29 = uVar30;
          if (0 < lVar9) {
            do {
              uVar7 = (uint)uVar30;
              if (*(int *)(alStack_268[0] + uVar29 * 4) < 1) {
                bVar33 = iVar6 == 0;
              }
              else {
                bVar33 = iVar6 == 1;
              }
              if (!bVar33) {
                lVar28 = FUN_1408c8390();
                *(longlong **)(lVar28 + 0x40) = param_1;
                if (_DAT_1418bd74c == 9) {
                  *(undefined4 *)(lVar28 + 0x48) = 0xbf;
                }
                else {
                  uVar8 = 0xbe;
                  if (_DAT_1418bd74c == 0xb) {
                    uVar8 = 0xf4;
                  }
                  *(undefined4 *)(lVar28 + 0x48) = uVar8;
                }
                *(uint *)(lVar28 + 0x80) = uVar7;
                *(undefined4 *)(lVar28 + 0x90) = 0xffffffff;
                *(uint *)(lVar28 + 0x94) = uVar7;
                if (iVar6 == 0) {
                  FUN_140070fd0(lVar28 + 0xb8,"At least ",9);
                  uVar8 = *(undefined4 *)(alStack_268[0] + uVar29 * 4);
                  workshop_supplier_0x70c50(aiStack_d8);
                  FUN_140543070(uVar8,aiStack_d8);
                  workshop_supplier_0xbb2d0(lVar28 + 0xb8,aiStack_d8);
                  FUN_140070e10(aiStack_d8);
                  FUN_140070fd0(lVar28 + 0xb8," dye available",0xe);
                  lVar9 = lStack_2a8;
                  uVar7 = auStack_2b8[0];
                }
                *(int *)(lVar28 + 0x38) = iVar6 * 2;
              }
              auStack_2b8[0] = uVar7 + 1;
              uVar30 = (ulonglong)auStack_2b8[0];
              uVar29 = uVar29 + 1;
            } while ((longlong)uVar29 < lVar9);
          }
          uVar15 = (ulonglong)(iVar6 + 1U);
        } while ((int)(iVar6 + 1U) < 2);
        iVar6 = 0;
        do {
          uVar30 = 0;
          auStack_2b8[0] = 0;
          uVar29 = uVar30;
          if (0 < lVar9) {
            do {
              uVar7 = (uint)uVar30;
              if (*(int *)(alStack_280[0] + uVar29 * 4) < 1) {
                bVar33 = iVar6 == 0;
              }
              else {
                bVar33 = iVar6 == 1;
              }
              if (!bVar33) {
                lVar9 = FUN_1408c8230();
                *(longlong **)(lVar9 + 0x40) = param_1;
                if (_DAT_1418bd74c == 9) {
                  *(undefined2 *)(lVar9 + 0x48) = 0xbf;
                }
                else if (_DAT_1418bd74c == 0xb) {
                  *(undefined2 *)(lVar9 + 0x48) = 0xf4;
                }
                else {
                  *(undefined2 *)(lVar9 + 0x48) = 0xbe;
                }
                *(uint *)(lVar9 + 0x4c) = uVar7;
                *(undefined1 *)(lVar9 + 0x50) = 1;
                if (iVar6 == 0) {
                  FUN_140070fd0(lVar9 + 0x58,"At least ",9);
                  uVar8 = *(undefined4 *)(alStack_280[0] + uVar29 * 4);
                  workshop_supplier_0x70c50(aiStack_d8);
                  FUN_140543070(uVar8,aiStack_d8);
                  workshop_supplier_0xbb2d0(lVar9 + 0x58,aiStack_d8);
                  FUN_140070e10(aiStack_d8);
                  if (_DAT_1418bd74c == 9) {
                    uVar10 = 0x14;
                    pcVar26 = " cloth/dye available";
                  }
                  else if (_DAT_1418bd74c == 0xb) {
                    uVar10 = 0x16;
                    pcVar26 = " leather/dye available";
                  }
                  else {
                    uVar10 = 0x15;
                    pcVar26 = " thread/dye available";
                  }
                  FUN_140070fd0(lVar9 + 0x58,pcVar26,uVar10);
                  uVar7 = auStack_2b8[0];
                }
                *(int *)(lVar9 + 0x38) = iVar6 * 2 + 1;
                lVar9 = lStack_2a8;
              }
              auStack_2b8[0] = uVar7 + 1;
              uVar30 = (ulonglong)auStack_2b8[0];
              uVar29 = uVar29 + 1;
            } while ((longlong)uVar29 < lVar9);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        FUN_140070d10(alStack_280);
        FUN_140070d10(auStack_240);
        FUN_1401fdef0(auStack_208);
        FUN_140068130(&uStack_f8);
        FUN_140070d10(alStack_268);
      }
      else if (_DAT_1418bd74c == 8) {
        workshop_supplier_0x670c0(alStack_280);
        FUN_140070940(alStack_280,lVar9);
        workshop_supplier_0xfcbb0(alStack_280);
        uVar15 = 0;
        uVar29 = uVar15;
        uVar30 = uVar15;
        if (0 < iVar6 + -1) {
          do {
            uVar7 = (uint)uVar30;
            uVar13 = uVar29 + 1;
            uVar25 = uVar7 + 1;
            auStack_2a0[0] = uVar25;
            uStack_290 = uVar13;
            for (; (int)uVar25 < iVar6; uVar25 = uVar25 + 1) {
              piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar29);
              if ((0 < *piVar12) &&
                 (piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13), 0 < *piVar12)) {
                workshop_supplier_0x1fd1f0(&uStack_f8);
                FUN_1407f3360(&DAT_142513438,uVar30,uVar25,&uStack_f8);
                if ((uStack_f8 != uVar7) && ((uStack_f8 != uVar25 && (uStack_f8 != 0xffffffff)))) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_f8);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_f8);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_f4 != uVar7) && (uStack_f4 != uVar25)) && (uStack_f4 != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_f4);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_f4);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_f0 != uVar7) && (uStack_f0 != uVar25)) && (uStack_f0 != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_f0);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_f0);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_ec != uVar7) && (uStack_ec != uVar25)) && (uStack_ec != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_ec);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_ec);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_e8 != uVar7) && (uStack_e8 != uVar25)) && (uStack_e8 != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_e8);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_e8);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_e4 != uVar7) && (uStack_e4 != uVar25)) && (uStack_e4 != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_e4);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_e4);
                    *puVar16 = auStack_2b8[0];
                  }
                }
                if (((uStack_e0 != uVar7) && (uStack_e0 != uVar25)) && (uStack_e0 != 0xffffffff)) {
                  puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar29);
                  auStack_2b8[0] = *puVar16;
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_268,uVar13);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920(alStack_268,uVar13);
                    auStack_2b8[0] = *puVar16;
                  }
                  piVar12 = (int *)workshop_supplier_0x70920(alStack_280,(longlong)(int)uStack_e0);
                  if (*piVar12 < (int)auStack_2b8[0]) {
                    puVar16 = (uint *)workshop_supplier_0x70920
                                                (alStack_280,(longlong)(int)uStack_e0);
                    *puVar16 = auStack_2b8[0];
                  }
                }
              }
              uVar13 = uVar13 + 1;
            }
            uVar29 = uStack_290;
            uVar30 = (ulonglong)auStack_2a0[0];
            param_1 = plStack_2b0;
          } while ((int)auStack_2a0[0] < iVar6 + -1);
        }
        do {
          uVar30 = 0;
          auStack_2b8[0] = 0;
          iVar4 = (int)uVar15;
          uVar29 = uVar30;
          if (0 < iVar6) {
            do {
              uVar7 = (uint)uVar30;
              piVar12 = (int *)workshop_supplier_0x70920(alStack_280,uVar29);
              if (*piVar12 < 1) {
                bVar33 = iVar4 == 0;
              }
              else {
                bVar33 = iVar4 == 1;
              }
              if (!bVar33) {
                puVar11 = (undefined8 *)workshop_supplier_0x707e0(&DAT_142513438,uVar29);
                cVar3 = FUN_140071440(*puVar11,"CLEAR");
                if (cVar3 == '\0') {
                  lVar9 = FUN_1408c8230();
                  *(longlong **)(lVar9 + 0x40) = param_1;
                  *(undefined2 *)(lVar9 + 0x48) = 0xf3;
                  *(uint *)(lVar9 + 0x4c) = uVar7;
                  *(undefined1 *)(lVar9 + 0x50) = 1;
                  if (iVar4 == 0) {
                    workshop_supplier_0x70b20(lVar9 + 0x58,"At least ");
                    puVar17 = (undefined4 *)workshop_supplier_0x70920(alStack_280,uVar29);
                    FUN_140542fb0(*puVar17,lVar9 + 0x58);
                    workshop_supplier_0x70b20(lVar9 + 0x58," available");
                    uVar7 = auStack_2b8[0];
                  }
                  *(int *)(lVar9 + 0x38) = iVar4;
                }
              }
              auStack_2b8[0] = uVar7 + 1;
              uVar30 = (ulonglong)auStack_2b8[0];
              uVar29 = uVar29 + 1;
            } while ((int)auStack_2b8[0] < iVar6);
          }
          uVar15 = (ulonglong)(iVar4 + 1U);
        } while ((int)(iVar4 + 1U) < 2);
        workshop_supplier_0x670e0(alStack_280);
        workshop_supplier_0x670e0(alStack_268);
      }
      else {
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xbe;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xbf;
        lVar9 = FUN_1408c8390();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xf4;
        lVar9 = FUN_1408c8300();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 9;
        *(undefined1 *)(lVar9 + 0x4c) = 1;
        lVar9 = FUN_1408c8300();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 0xb;
        *(undefined1 *)(lVar9 + 0x4c) = 1;
        lVar9 = FUN_1408c8300();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 10;
        *(undefined1 *)(lVar9 + 0x4c) = 1;
        lVar9 = FUN_1408c8300();
        *(longlong **)(lVar9 + 0x40) = param_1;
        *(undefined4 *)(lVar9 + 0x48) = 8;
        *(undefined1 *)(lVar9 + 0x4c) = 1;
        FUN_1408db020(param_1);
        workshop_supplier_0x670e0(alStack_268);
      }
      goto LAB_1408e24bb;
    }
  }
  FUN_1408db020(param_1);
LAB_1408e24bb:
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_2e8);
  return;
}

