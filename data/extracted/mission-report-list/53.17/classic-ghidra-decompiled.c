/* classic; 0x766d0; mission-goal-getter; RVA 0x766d0..0x766e0; actual Ghidra 12.1.4 C output. */

undefined4 report_mission_goal_getter(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x138);
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x10c780; spoils-squad-source-region; RVA 0x10cbd9..0x10cc1a; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_spoils_squad_source_region(void)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  char cVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  undefined2 uVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong *puVar26;
  int *piVar27;
  longlong *plVar28;
  undefined8 uVar29;
  short *psVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int *piVar33;
  undefined *puVar34;
  char *pcVar35;
  undefined8 *unaff_RBP;
  char unaff_R12B;
  uint uVar36;
  longlong unaff_R13;
  int iVar37;
  bool bVar38;
  undefined4 uVar39;
  ulonglong in_stack_00000020;
  char cStack0000000000000050;
  char cStack0000000000000053;
  ushort uStack0000000000000054;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  ulonglong in_stack_00000060;
  char cStack0000000000000068;
  char cStack0000000000000069;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    if (((*(int *)(in_stack_00000060 + 0x1f0) != -1) &&
        (lVar17 = FUN_140076ac0(0x1424ffb40), lVar17 != 0)) &&
       (*(int *)(lVar17 + 0x1c4) == _DAT_1423af9f8)) {
      return;
    }
    bVar38 = false;
    bVar3 = false;
    sVar9 = FUN_140babea0(unaff_R13,0,_DAT_1423af9f8);
    if (sVar9 == 0) {
      iVar13 = FUN_140bad810(unaff_R13,0xd);
      if ((iVar13 != -1) && (lVar17 = FUN_140069380(0x142516038,iVar13), lVar17 != 0)) {
        sVar9 = FUN_140babea0(lVar17,0,_DAT_1423af9f8);
        bVar3 = false;
        if (sVar9 != 0) {
          bVar3 = true;
        }
      }
      lVar17 = unaff_RBP[-10];
      if (((*(longlong *)(lVar17 + 0x60) == 0) ||
          (iVar13 = report_mission_goal_getter(), iVar13 != 0x13)) ||
         (iVar13 = FUN_1400bb530(*(undefined4 *)(unaff_R13 + 0xe0),
                                 *(undefined8 *)(*(longlong *)(lVar17 + 0x60) + 0x130)),
         iVar13 == -1)) {
        cVar7 = '\0';
        func_0x000140070800(0x142504218,unaff_RBP + 0x14);
        func_0x0001400707f0(0x142504218,unaff_RBP + 0x37);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + 0x14,(longlong)unaff_RBP + -0x37,unaff_RBP + 0x37)
        ;
        cVar8 = func_0x000140066d70(*puVar19,0);
        while (cVar8 != '\0') {
          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x14);
          lVar17 = *plVar22;
          if (((*(byte *)(lVar17 + 0x4c) & 1) == 0) &&
             (lVar18 = supplier_0x70410(lVar17 + 0x28), lVar18 != 0)) {
            puVar20 = (undefined8 *)supplier_0x707e0(lVar17 + 0x28,0);
            iVar13 = func_0x000140073ef0(*puVar20);
            if ((iVar13 == 2) &&
               (plVar22 = (longlong *)supplier_0x707e0(lVar17 + 0x28,0),
               *(int *)(*(longlong *)(*plVar22 + 0x10) + 8) != -1)) {
              plVar22 = (longlong *)supplier_0x707e0(lVar17 + 0x28,0);
              lVar18 = FUN_1400bb380(*(undefined4 *)(*(longlong *)(*plVar22 + 0x10) + 8),lVar17 + 8)
              ;
              if (((lVar18 != 0) &&
                  (iVar13 = FUN_1400bb530(_DAT_1423af9f8,lVar18 + 0x20), iVar13 != -1)) &&
                 (plVar22 = (longlong *)supplier_0x707e0(lVar17 + 0x28,0),
                 *(int *)(*(longlong *)(*plVar22 + 0x10) + 4) != -1)) {
                plVar22 = (longlong *)supplier_0x707e0(lVar17 + 0x28,0);
                lVar17 = FUN_1400bb380(*(undefined4 *)(*(longlong *)(*plVar22 + 0x10) + 4),
                                       lVar17 + 8);
                if (lVar17 != 0) {
                  iVar13 = FUN_1400bb530(*(undefined4 *)(unaff_R13 + 0xe0),lVar17 + 8);
                  if (iVar13 == -1) {
                    func_0x000140070800(lVar17 + 0x20,unaff_RBP + 0x13);
                    func_0x0001400707f0(lVar17 + 0x20,unaff_RBP + 0x36);
                    puVar19 = (undefined1 *)
                              func_0x0001400703e0(unaff_RBP + 0x13,unaff_RBP + -7,unaff_RBP + 0x36);
                    cVar8 = func_0x000140066d70(*puVar19,0);
                    while (cVar8 != '\0') {
                      puVar25 = (undefined4 *)func_0x0001400703d0(unaff_RBP + 0x13);
                      sVar9 = FUN_140babea0(unaff_R13,0,*puVar25);
                      if (0 < sVar9) goto code_r0x00014010d041;
                      func_0x000140070910(unaff_RBP + 0x13);
                      puVar19 = (undefined1 *)
                                func_0x0001400703e0(unaff_RBP + 0x13,unaff_RBP + -7,unaff_RBP + 0x36
                                                   );
                      cVar8 = func_0x000140066d70(*puVar19);
                    }
                  }
                  else {
code_r0x00014010d041:
                    cVar7 = '\x01';
                  }
                }
              }
            }
          }
          func_0x0001400703c0(unaff_RBP + 0x14);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + 0x14,(longlong)unaff_RBP + -0x37,
                                        unaff_RBP + 0x37);
          cVar8 = func_0x000140066d70(*puVar19);
        }
      }
      else {
        func_0x0001400670c0(unaff_RBP + 0xd);
        iVar13 = supplier_0x70410(unaff_R13 + 0xe8);
        iVar13 = iVar13 + -1;
        if (-1 < iVar13) {
          lVar17 = (longlong)iVar13;
          do {
            puVar20 = (undefined8 *)supplier_0x707e0(unaff_R13 + 0xe8,lVar17);
            sVar9 = (*(code *)**(undefined8 **)*puVar20)();
            if (sVar9 == 0) {
              plVar22 = (longlong *)supplier_0x707e0(unaff_R13 + 0xe8,lVar17);
              psVar30 = (short *)func_0x00014007f0b0(&DAT_1423edb78,*(undefined4 *)(*plVar22 + 8));
              if ((psVar30 != (short *)0x0) && (*psVar30 == 1)) {
                func_0x0001400709d0(unaff_RBP + 0xd,psVar30 + 2);
              }
            }
            lVar17 = lVar17 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        func_0x000140070800(unaff_RBP + 0xd,unaff_RBP + 0x1c);
        func_0x0001400707f0(unaff_RBP + 0xd,unaff_RBP + 0x39);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + 0x1c,&stack0x00000068,unaff_RBP + 0x39);
        cVar7 = func_0x000140066d70(*puVar19);
        while (cVar7 != '\0') {
          puVar25 = (undefined4 *)func_0x0001400703d0(unaff_RBP + 0x1c);
          in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
          FUN_140baaeb0(unaff_R13,0,*puVar25,0,in_stack_00000020);
          func_0x000140070910(unaff_RBP + 0x1c);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + 0x1c,&stack0x00000068,unaff_RBP + 0x39);
          cVar7 = func_0x000140066d70(*puVar19);
        }
        in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
        FUN_140bac9d0(unaff_R13,0,_DAT_1423af9f8,100,in_stack_00000020);
        *(int *)(unaff_R13 + 0xb0) = iRam00000001423af9f0;
        *(int *)(in_stack_00000060 + 0x140) = iRam00000001423af9f0;
        bVar38 = true;
        func_0x0001400670e0(unaff_RBP + 0xd);
        cVar7 = '\0';
      }
    }
    else {
      bVar38 = true;
      *(int *)(unaff_R13 + 0xb0) = iRam00000001423af9f0;
      *(int *)(in_stack_00000060 + 0x140) = iRam00000001423af9f0;
      cVar7 = '\0';
    }
    uVar39 = (undefined4)(in_stack_00000020 >> 0x20);
    if (((unaff_R12B != '\0') || (bVar38)) || ((bVar3 || (cVar7 != '\0')))) {
      uVar29 = CONCAT44(uVar39,0xffffffff);
      FUN_140bcda20(unaff_R13,1,iRam00000001423af9f4,0xffffffff,uVar29);
      lVar17 = unaff_RBP[-10];
      *(int *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x1c) =
           (int)*(short *)(lVar17 + 4);
      *(int *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x20) =
           (int)*(short *)(lVar17 + 6);
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x24);
      *puVar1 = *puVar1 & 0xfffffffc;
      cStack0000000000000050 = '\x01';
    }
    else {
      uVar29 = CONCAT44(uVar39,0xffffffff);
      FUN_140bcda20(unaff_R13,5,iRam00000001423af9f4,0xffffffff,uVar29);
      lVar17 = unaff_RBP[-10];
      *(int *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x1c) =
           (int)*(short *)(lVar17 + 4);
      *(int *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x20) =
           (int)*(short *)(lVar17 + 6);
      puVar1 = (uint *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x28) + 0x24);
      *puVar1 = *puVar1 & 0xfffffffc;
      FUN_140df3780(unaff_RBP[-4],*(undefined4 *)(unaff_RBP + -2),*(undefined4 *)(unaff_RBP + -3),
                    uStack0000000000000054);
      cStack0000000000000053 = cVar7;
      if ((*(longlong *)(lVar17 + 0x60) == 0) ||
         (iVar13 = report_mission_goal_getter(), iVar13 != 0x18)) {
code_r0x00014010e622:
        cVar7 = FUN_140c23bd0(unaff_R13,0xa2);
        if (cVar7 == '\0') {
          lVar18 = func_0x000140c24110(unaff_R13);
          if ((((lVar18 != 0) && (*(int *)(lVar18 + 0x90) == 3)) &&
              ((*(int *)(lVar18 + 0xb0) != iRam00000001423af9f0 ||
               (*(int *)(lVar18 + 0xb0) != _DAT_1423af9f8)))) &&
             ((*(longlong *)(unaff_R13 + 0x130) != 0 &&
              (lVar18 = *(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58), lVar18 != 0)))) {
            *(undefined4 *)(lVar18 + 0x30) = 0xffffffff;
          }
        }
        else {
          lVar18 = *(longlong *)(unaff_R13 + 0x130);
          if (lVar18 == 0) {
            uVar23 = FUN_14154de30(0x68);
            unaff_RBP[0x3b] = uVar23;
            lVar18 = func_0x000140076640(uVar23);
            *(longlong *)(unaff_R13 + 0x130) = lVar18;
          }
          if (*(longlong *)(lVar18 + 0x58) == 0) {
            uVar23 = FUN_14154de30(0x60);
            unaff_RBP[0x3c] = uVar23;
            uVar23 = func_0x0001400ff5b0(uVar23);
            *(undefined8 *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) = uVar23;
          }
          puVar25 = (undefined4 *)FUN_1400ff9c0();
          puVar25[0x23] = *(undefined4 *)(unaff_R13 + 0xe0);
          puVar25[0x20] = (int)*(short *)(unaff_R13 + 2);
          *(undefined2 *)(puVar25 + 0x21) = *(undefined2 *)(unaff_R13 + 4);
          iVar13 = func_0x000140bffed0(unaff_R13);
          puVar25[0x25] = _DAT_142161ab8 - iVar13;
          uVar39 = FUN_1400734f0(0x62700);
          puVar25[0x26] = uVar39;
          lVar18 = func_0x00014007f0b0(&DAT_1423edb78,*(undefined4 *)(unaff_R13 + 0xb0));
          if (lVar18 != 0) {
            uVar29 = CONCAT62((int6)((ulonglong)uVar29 >> 0x10),
                              *(undefined2 *)(in_stack_00000060 + 300));
            func_0x00014149b130(0x1423ed870,puVar25 + 2,lVar18,
                                *(undefined2 *)(in_stack_00000060 + 0xa4),uVar29);
          }
          puVar25[0x24] = 0;
          *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x30) = *puVar25;
          FUN_1400bb430(*puVar25,*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x38);
          plVar22 = (longlong *)FUN_140105a20();
          *(undefined4 *)(plVar22 + 5) = *(undefined4 *)(unaff_R13 + 0xe0);
          *(undefined4 *)((longlong)plVar22 + 0x2c) = *puVar25;
          if (lVar18 != 0) {
            *(undefined4 *)(plVar22 + 6) = *(undefined4 *)(lVar18 + 4);
          }
          *(int *)(plVar22 + 1) = _DAT_142161ab8;
          *(int *)((longlong)plVar22 + 0xc) = _DAT_1423a424c;
          (**(code **)(*plVar22 + 0x128))(plVar22);
        }
      }
      else {
        lVar18 = func_0x00014007f0b0(&DAT_1423edb78,iRam00000001423af9f0);
        if (lVar18 != 0) {
          iVar14 = 0;
          _iStack0000000000000058 = _iStack0000000000000058 & 0xffffffff00000000;
          lVar17 = 0;
          iVar13 = 0;
          *(undefined4 *)((longlong)unaff_RBP + -0x6c) = 0;
          lVar18 = lVar18 + 0x1028;
          unaff_RBP[0xb] = lVar18;
          func_0x000140070800(lVar18,unaff_RBP + -9);
          func_0x0001400707f0(lVar18,unaff_RBP + 0x2f);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + -9,(longlong)unaff_RBP + -0x34,unaff_RBP + 0x2f)
          ;
          cVar7 = func_0x000140066d70(*puVar19,0);
          if (cVar7 != '\0') {
            do {
              puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -9);
              lVar21 = func_0x00014007f0b0(&DAT_1423edb78,*(undefined4 *)*puVar20);
              unaff_RBP[0x3d] = lVar21;
              if (((lVar21 != 0) && ((*(uint *)(lVar21 + 0x9c) & 0x4000010) == 0)) &&
                 (cVar7 = func_0x000140070ae0(*(longlong *)(lVar21 + 8) + 0x3b0), cVar7 == '\0')) {
                if (*(short *)(lVar21 + 0xcee) == 0x10) {
                  iVar14 = 0;
                }
                else {
                  sVar9 = FUN_1401010c0(lVar18,*(undefined4 *)(lVar21 + 4));
                  iVar14 = 2;
                  if ((sVar9 - 1U & 0xfffb) == 0) {
                    iVar14 = 1;
                  }
                }
                if (iVar13 <= iVar14) {
                  func_0x0001400670c0(unaff_RBP + 0xd);
                  FUN_1409a74b0(lVar21,unaff_RBP + 0xd,1);
                  iVar16 = 0;
                  lVar18 = 0;
                  func_0x000140070800(unaff_RBP + 0xd,unaff_RBP + -5);
                  func_0x0001400707f0(unaff_RBP + 0xd,unaff_RBP + 0x3a);
                  puVar19 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -5,(longlong)unaff_RBP + -0x35,
                                                unaff_RBP + 0x3a);
                  cVar7 = func_0x000140066d70(*puVar19,0);
                  if (cVar7 != '\0') {
                    do {
                      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -5);
                      lVar21 = *plVar22;
                      if ((lVar21 != lRam00000001423b6570) &&
                         (cVar7 = supplier_0x73550(lVar21 + 0x2a0,3), cVar7 != '\0')) {
                        func_0x000140070800(lVar21 + 0xd8,unaff_RBP + -0x10);
                        func_0x0001400707f0(lVar21 + 0xd8,unaff_RBP + 0x38);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + -0x10,(longlong)unaff_RBP + -0x36,
                                                      unaff_RBP + 0x38);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        while (cVar7 != '\0') {
                          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x10);
                          if (((0 < *(int *)*puVar20) &&
                              (plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10),
                              *(int *)(*plVar22 + 0xc) == -1)) &&
                             ((plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10),
                              *(int *)(*plVar22 + 0x18) == -1 &&
                              (plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10),
                              *(int *)(*plVar22 + 4) == (int)*(short *)(unaff_RBP[-0xd] + 2))))) {
                            unaff_RBP[lVar18 + 0x5c] = lVar21;
                            iVar16 = iVar16 + 1;
                            lVar18 = lVar18 + 1;
                            if (0x31 < lVar18) goto code_r0x00014010d3fe;
                            break;
                          }
                          func_0x0001400703c0(unaff_RBP + -0x10);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(unaff_RBP + -0x10,
                                                        (longlong)unaff_RBP + -0x36,unaff_RBP + 0x38
                                                       );
                          cVar7 = func_0x000140066d70(*puVar19,0);
                        }
                      }
                      func_0x0001400703c0(unaff_RBP + -5);
                      puVar19 = (undefined1 *)
                                func_0x0001400703e0(unaff_RBP + -5,(longlong)unaff_RBP + -0x35,
                                                    unaff_RBP + 0x3a);
                      cVar7 = func_0x000140066d70(*puVar19,0);
                    } while (cVar7 != '\0');
code_r0x00014010d3fe:
                    if (iVar16 != 0) {
                      iVar13 = *(int *)((longlong)unaff_RBP + -0x6c);
                      if (iVar13 < iVar14) {
                        *(int *)((longlong)unaff_RBP + -0x6c) = iVar14;
                        lVar17 = 0;
                        iVar37 = 0;
                        iVar13 = iVar14;
code_r0x00014010d42c:
                        uVar23 = FUN_140953ef0(unaff_RBP[0x3d]);
                        unaff_RBP[lVar17 + 0xc0] = uVar23;
                        iVar14 = FUN_1400734f0(iVar16);
                        unaff_RBP[lVar17 + 0x8e] = unaff_RBP[(longlong)iVar14 + 0x5c];
                        _iStack0000000000000058 = CONCAT44(uStack000000000000005c,iVar37 + 1);
                        lVar17 = lVar17 + 1;
                        iVar14 = iVar37 + 1;
                      }
                      else {
                        iVar37 = iStack0000000000000058;
                        iVar14 = iStack0000000000000058;
                        if (lVar17 < 0x32) goto code_r0x00014010d42c;
                      }
                      func_0x000140068720(unaff_RBP + 0xd);
                      goto code_r0x00014010d47e;
                    }
                  }
                  func_0x000140068720(unaff_RBP + 0xd);
                  iVar13 = *(int *)((longlong)unaff_RBP + -0x6c);
                }
                iVar14 = iStack0000000000000058;
              }
code_r0x00014010d47e:
              func_0x0001400703c0(unaff_RBP + -9);
              puVar19 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -9,(longlong)unaff_RBP + -0x34,
                                            unaff_RBP + 0x2f);
              cVar7 = func_0x000140066d70(*puVar19,0);
              lVar18 = unaff_RBP[0xb];
            } while (cVar7 != '\0');
            if (0 < iVar14) {
              iVar13 = FUN_1400734f0(iVar14);
              lVar17 = unaff_RBP[(longlong)iVar13 + 0xc0];
              unaff_RBP[0xb] = lVar17;
              lVar18 = unaff_RBP[(longlong)iVar13 + 0x8e];
              lVar21 = func_0x0001409cbf30(lVar18);
              if (lVar21 != 0) {
                bVar38 = false;
                unaff_R13 = unaff_RBP[-0xd];
                lVar24 = *(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58);
                if (lVar24 != 0) {
                  if ((((*(int *)(lVar24 + 0x30) != -1) &&
                       (lVar24 = FUN_140073b30(0x142504068), lVar24 != 0)) &&
                      (lVar24 = func_0x00014007f0b0(&DAT_1423edb78,*(undefined4 *)(lVar24 + 0xb0)),
                      lVar24 != 0)) && (lVar24 = FUN_140953ef0(lVar24), lVar24 == lVar17)) {
code_r0x00014010d64d:
                    cStack0000000000000053 = '\x01';
                    goto code_r0x00014010e07b;
                  }
                  func_0x000140070800(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x38,
                                      unaff_RBP + -0xf);
                  func_0x0001400707f0(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x38,
                                      unaff_RBP + 0x29);
                  puVar19 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0xf,(longlong)unaff_RBP + -0x33,
                                                unaff_RBP + 0x29);
                  cVar7 = func_0x000140066d70(*puVar19,0);
                  if (cVar7 != '\0') {
                    do {
                      puVar25 = (undefined4 *)func_0x0001400703d0(unaff_RBP + -0xf);
                      puVar25 = (undefined4 *)FUN_140073b30(0x142504068,*puVar25);
                      if (puVar25 == (undefined4 *)0x0) break;
                      if (puVar25[0x2c] == *(int *)(lVar17 + 4)) {
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x30) = *puVar25;
code_r0x00014010d616:
                        bVar38 = true;
                      }
                      else {
                        lVar24 = func_0x00014007f0b0(&DAT_1423edb78);
                        if ((lVar24 != 0) && (lVar24 = FUN_140953ef0(lVar24), lVar24 == lVar17)) {
                          *(undefined4 *)
                           (*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x30) =
                               *puVar25;
                          goto code_r0x00014010d616;
                        }
                      }
                      func_0x000140070910(unaff_RBP + -0xf);
                      puVar19 = (undefined1 *)
                                func_0x0001400703e0(unaff_RBP + -0xf,(longlong)unaff_RBP + -0x33,
                                                    unaff_RBP + 0x29);
                      cVar7 = func_0x000140066d70(*puVar19,0);
                    } while (cVar7 != '\0');
                    if (bVar38) goto code_r0x00014010d64d;
                  }
                }
                func_0x0001400670c0(unaff_RBP + 0x17);
                func_0x0001400670c0(unaff_RBP + 0x53);
                FUN_1409f60d0(lVar21,unaff_RBP + 0xf2,unaff_RBP + -0xe);
                if (*(int *)(unaff_RBP + -0xe) < 1) {
code_r0x00014010e058:
                  unaff_R13 = unaff_RBP[-0xd];
                }
                else {
                  iVar13 = *(int *)(unaff_RBP + -0xe) + -1;
                  lVar21 = (longlong)iVar13;
                  if (-1 < iVar13) {
                    do {
                      switch(*(undefined2 *)((longlong)unaff_RBP + lVar21 * 2 + 0x790)) {
                      case 0x3d:
                      case 0x45:
                      case 0x74:
                      case 0x75:
                      case 0x76:
                      case 0x77:
                      case 0x78:
                      case 0x79:
                      case 0x7a:
                      case 0x7b:
                      case 0x7c:
                        func_0x000140070800(lRam00000001423b6570 + 0x2b0,unaff_RBP + 9);
                        func_0x0001400707f0(lRam00000001423b6570 + 0x2b0,unaff_RBP + 0x32);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + 9,(longlong)unaff_RBP + -0x32,
                                                      unaff_RBP + 0x32);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        while (cVar7 != '\0') {
                          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 9);
                          sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                          if (sVar9 == 9) {
                            plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 9);
                            cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
                            if (cVar7 == '\0') {
                              plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 9);
                              cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
                              if (cVar7 == '\0') {
                                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 9);
                                cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
                                if (cVar7 == '\0') {
                                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 9);
                                  cVar7 = supplier_0x73550(*plVar22 + 0x28,4);
                                  if (cVar7 != '\0') {
                                    func_0x000140070800(0x14240a290,unaff_RBP + 0x1b);
                                    func_0x0001400707f0(0x14240a290,unaff_RBP + 0x31);
                                    puVar19 = (undefined1 *)
                                              func_0x0001400703e0(unaff_RBP + 0x1b,
                                                                  (longlong)unaff_RBP + -0x2f,
                                                                  unaff_RBP + 0x31);
                                    cVar7 = func_0x000140066d70(*puVar19,0);
                                    while (cVar7 != '\0') {
                                      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x1b);
                                      if (*(int *)(*plVar22 + 0x114) == iRam00000001423af9f4) {
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x1b);
                                        lVar17 = *plVar22;
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 9);
                                        if (*(int *)(lVar17 + 0x118) == *(int *)(*plVar22 + 8))
                                        goto code_r0x00014010dc73;
                                      }
                                      func_0x0001400703c0(unaff_RBP + 0x1b);
                                      puVar19 = (undefined1 *)
                                                func_0x0001400703e0(unaff_RBP + 0x1b,
                                                                    (longlong)unaff_RBP + -0x2f,
                                                                    unaff_RBP + 0x31);
                                      cVar7 = func_0x000140066d70(*puVar19,0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                          func_0x0001400703c0(unaff_RBP + 9);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(unaff_RBP + 9,(longlong)unaff_RBP + -0x32,
                                                        unaff_RBP + 0x32);
                          cVar7 = func_0x000140066d70(*puVar19,0);
                        }
                        break;
                      default:
                        func_0x000140070800(lRam00000001423b6570 + 0x2b0,unaff_RBP + -8);
                        func_0x0001400707f0(lRam00000001423b6570 + 0x2b0,unaff_RBP + 0x34);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + -8,(longlong)&stack0x00000078 + 2,
                                                      unaff_RBP + 0x34);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        while (cVar7 != '\0') {
                          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -8);
                          sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                          if (sVar9 == 8) {
                            plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                            cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
                            if (cVar7 == '\0') {
                              plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                              cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
                              if (cVar7 == '\0') {
                                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                                cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
                                if (cVar7 == '\0') {
                                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                                  cVar7 = supplier_0x73550(*plVar22 + 0x28,4);
                                  if (cVar7 != '\0') {
                                    func_0x000140070800(0x14240a290,unaff_RBP + 5);
                                    func_0x0001400707f0(0x14240a290,unaff_RBP + 0x33);
                                    puVar19 = (undefined1 *)
                                              func_0x0001400703e0(unaff_RBP + 5,
                                                                  (longlong)unaff_RBP + -0x31,
                                                                  unaff_RBP + 0x33);
                                    cVar7 = func_0x000140066d70(*puVar19,0);
                                    while (cVar7 != '\0') {
                                      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 5);
                                      if (*(int *)(*plVar22 + 0x114) == iRam00000001423af9f4) {
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 5);
                                        lVar17 = *plVar22;
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                                        if (*(int *)(lVar17 + 0x118) == *(int *)(*plVar22 + 8))
                                        goto code_r0x00014010dc73;
                                      }
                                      func_0x0001400703c0(unaff_RBP + 5);
                                      puVar19 = (undefined1 *)
                                                func_0x0001400703e0(unaff_RBP + 5,
                                                                    (longlong)unaff_RBP + -0x31,
                                                                    unaff_RBP + 0x33);
                                      cVar7 = func_0x000140066d70(*puVar19,0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                          func_0x0001400703c0(unaff_RBP + -8);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(unaff_RBP + -8,
                                                        (longlong)&stack0x00000078 + 2,
                                                        unaff_RBP + 0x34);
                          cVar7 = func_0x000140066d70(*puVar19,0);
                        }
                        break;
                      case 0x6b:
                      case 0x83:
                      case 0x85:
                        break;
                      case 0x84:
                        func_0x000140070800(lRam00000001423b6570 + 0x2b0,unaff_RBP + -1);
                        func_0x0001400707f0(lRam00000001423b6570 + 0x2b0,unaff_RBP + 0x30);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + -1,(longlong)unaff_RBP + -0x2e,
                                                      unaff_RBP + 0x30);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        if (cVar7 != '\0') {
code_r0x00014010d740:
                          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -1);
                          sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                          if (sVar9 == 2) {
                            plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                            cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
                            if (cVar7 == '\0') {
                              plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                              cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
                              if (cVar7 == '\0') {
                                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                                cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
                                if (cVar7 == '\0') {
                                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                                  cVar7 = supplier_0x73550(*plVar22 + 0x28,4);
                                  if (cVar7 != '\0') {
                                    func_0x000140070800(0x14240a290,unaff_RBP + 0x1a);
                                    func_0x0001400707f0(0x14240a290,unaff_RBP + 0x2b);
                                    puVar19 = (undefined1 *)
                                              func_0x0001400703e0(unaff_RBP + 0x1a,
                                                                  (longlong)unaff_RBP + -0x2c,
                                                                  unaff_RBP + 0x2b);
                                    cVar7 = func_0x000140066d70(*puVar19,0);
                                    while (cVar7 != '\0') {
                                      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x1a);
                                      if (*(int *)(*plVar22 + 0x114) == iRam00000001423af9f4) {
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x1a);
                                        lVar17 = *plVar22;
                                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                                        if (*(int *)(lVar17 + 0x118) == *(int *)(*plVar22 + 8)) {
                                          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -1);
                                          lVar17 = *plVar22;
                                          if (*(int *)(lVar17 + 0xb8) != -1) {
                                            func_0x000140070800(lVar18 + 0x2b0,unaff_RBP + 3);
                                            func_0x0001400707f0(lVar18 + 0x2b0,unaff_RBP + -0xb);
                                            puVar19 = (undefined1 *)
                                                      func_0x0001400703e0(unaff_RBP + 3,
                                                                          (longlong)unaff_RBP +
                                                                          -0x2d,unaff_RBP + -0xb);
                                            cVar7 = func_0x000140066d70(*puVar19,0);
                                            goto joined_r0x00014010d8ff;
                                          }
                                          break;
                                        }
                                      }
                                      func_0x0001400703c0(unaff_RBP + 0x1a);
                                      puVar19 = (undefined1 *)
                                                func_0x0001400703e0(unaff_RBP + 0x1a,
                                                                    (longlong)unaff_RBP + -0x2c,
                                                                    unaff_RBP + 0x2b);
                                      cVar7 = func_0x000140066d70(*puVar19,0);
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto code_r0x00014010da12;
                        }
code_r0x00014010da41:
                        lVar17 = supplier_0x70410(unaff_RBP + 0x17);
                        if (lVar17 == 0) break;
                        goto code_r0x00014010dc73;
                      }
                      iVar14 = *(int *)(unaff_RBP + -0xe) + -1;
                      if (iVar13 < iVar14) {
                        *(undefined2 *)((longlong)unaff_RBP + lVar21 * 2 + 0x790) =
                             *(undefined2 *)((longlong)unaff_RBP + (longlong)iVar14 * 2 + 0x790);
                      }
                      *(int *)(unaff_RBP + -0xe) = iVar14;
code_r0x00014010dc73:
                      iVar13 = iVar13 + -1;
                      lVar21 = lVar21 + -1;
                    } while (-1 < lVar21);
                    lVar17 = unaff_RBP[0xb];
                    unaff_R13 = unaff_RBP[-0xd];
                  }
                  if (*(int *)(unaff_RBP + -0xe) < 1) goto code_r0x00014010e058;
                  iVar13 = FUN_1400734f0();
                  sVar9 = *(short *)((longlong)unaff_RBP + (longlong)iVar13 * 2 + 0x790);
                  if (*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) == 0) {
                    uVar23 = FUN_14154de30(0x60);
                    unaff_RBP[0x3e] = uVar23;
                    uVar23 = func_0x0001400ff5b0(uVar23);
                    *(undefined8 *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) = uVar23;
                  }
                  puVar25 = (undefined4 *)FUN_1400ff9c0();
                  puVar25[0x24] = 3;
                  puVar25[0x23] = *(undefined4 *)unaff_RBP[-10];
                  puVar25[0x20] = (int)*(short *)(unaff_R13 + 2);
                  *(undefined2 *)(puVar25 + 0x21) = *(undefined2 *)(unaff_R13 + 4);
                  iVar13 = func_0x000140bffed0(unaff_R13);
                  puVar25[0x25] = _DAT_142161ab8 - iVar13;
                  uVar39 = FUN_1400734f0(0x62700);
                  puVar25[0x26] = uVar39;
                  uVar29 = CONCAT62((int6)((ulonglong)uVar29 >> 0x10),*(undefined2 *)(unaff_R13 + 4)
                                   );
                  func_0x00014149b130(0x1423ed870,puVar25 + 2,lVar17,*(undefined2 *)(unaff_R13 + 2),
                                      uVar29);
                  puVar25[0x25] = *(undefined4 *)(unaff_R13 + 0x10);
                  puVar25[0x26] = *(undefined4 *)(unaff_R13 + 0x14);
                  *(short *)(puVar25 + 0x2b) = sVar9;
                  puVar25[0x2c] = *(undefined4 *)(lVar17 + 4);
                  if (sVar9 == 0x84) {
                    lVar17 = supplier_0x70410(unaff_RBP + 0x17);
                    if (lVar17 != 0) {
                      uVar23 = supplier_0x70410(unaff_RBP + 0x17);
                      iVar13 = FUN_1400734f0(uVar23);
                      plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x17,(longlong)iVar13);
                      lVar17 = *plVar22;
                      puVar25[0x29] = *(undefined4 *)(lVar17 + 0xb8);
                      puVar25[0x2a] = *(undefined4 *)(lVar17 + 0xbc);
                      puVar25[0x28] = 0xffffffff;
                    }
                  }
                  else {
                    uVar39 = FUN_14096d7a0(lVar17);
                    puVar25[0x28] = uVar39;
                  }
                  unaff_R13 = unaff_RBP[-0xd];
                  *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) + 0x30) =
                       *puVar25;
                  FUN_1400bb430(*puVar25,*(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 0x58) +
                                         0x38);
                  plVar22 = (longlong *)FUN_140105a20();
                  *(undefined4 *)(plVar22 + 5) = *(undefined4 *)(unaff_R13 + 0xe0);
                  *(undefined4 *)((longlong)plVar22 + 0x2c) = *puVar25;
                  *(int *)(plVar22 + 6) = _DAT_1423af9f8;
                  *(int *)(plVar22 + 1) = _DAT_142161ab8;
                  *(int *)((longlong)plVar22 + 0xc) = _DAT_1423a424c;
                  (**(code **)(*plVar22 + 0x128))(plVar22);
                  cStack0000000000000053 = '\x01';
                }
                FUN_140068130(unaff_RBP + 0x53);
                FUN_140068130(unaff_RBP + 0x17);
                goto code_r0x00014010e07b;
              }
            }
            unaff_R13 = unaff_RBP[-0xd];
          }
code_r0x00014010e07b:
          lVar17 = unaff_RBP[-10];
        }
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130);
        if (*(int *)(lVar18 + 0xc) == -1) {
          *(undefined4 *)(lVar18 + 8) = 0xffffffff;
          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 0xc) = 0x3d;
          sVar9 = 0x66;
          if ((*(longlong *)(unaff_R13 + 0x130) != 0) &&
             (lVar17 = *(longlong *)(*(longlong *)(unaff_R13 + 0x130) + 8), lVar17 != 0)) {
            sVar9 = *(short *)(lVar17 + 0x60);
          }
          lVar17 = func_0x000140c24110(unaff_R13);
          if (lVar17 != 0) {
            sVar9 = *(short *)(lVar17 + 0xac);
          }
          sVar12 = 8;
          switch(sVar9) {
          case 0x3d:
          case 0x45:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
          case 0x7b:
          case 0x7c:
            sVar12 = 9;
            break;
          case 0x84:
            sVar12 = 2;
          }
          iVar13 = 0;
          lVar18 = 0;
          func_0x000140070800(lRam00000001423b6570 + 0x2b0);
          uVar39 = func_0x0001400707f0(lRam00000001423b6570 + 0x2b0,unaff_RBP + 0x15);
          puVar19 = (undefined1 *)func_0x0001400703e0(uVar39,&stack0x00000078,unaff_RBP + 0x15);
          cVar7 = func_0x000140066d70(*puVar19,0);
          if (cVar7 == '\0') {
code_r0x00014010e3e8:
            lVar17 = unaff_RBP[-10];
          }
          else {
            do {
              puVar20 = (undefined8 *)func_0x0001400703d0();
              sVar10 = (*(code *)**(undefined8 **)*puVar20)();
              if (sVar10 == sVar12) {
                if (((sVar9 == 0x84) && (sVar12 == 2)) && (lVar17 != 0)) {
                  plVar22 = (longlong *)func_0x0001400703d0();
                  if ((*(int *)(*plVar22 + 0xb8) != *(int *)(lVar17 + 0xa4)) ||
                     (*(int *)(*plVar22 + 0xbc) != *(int *)(lVar17 + 0xa8)))
                  goto code_r0x00014010e34b;
                }
                plVar22 = (longlong *)func_0x0001400703d0();
                cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
                if (cVar7 == '\0') {
                  plVar22 = (longlong *)func_0x0001400703d0();
                  cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
                  if (cVar7 == '\0') {
                    plVar22 = (longlong *)func_0x0001400703d0();
                    cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
                    if (cVar7 == '\0') {
                      plVar22 = (longlong *)func_0x0001400703d0();
                      cVar7 = supplier_0x73550(*plVar22 + 0x28,4);
                      if (cVar7 != '\0') {
                        func_0x000140070800(0x14240a290,unaff_RBP + 6);
                        func_0x0001400707f0(0x14240a290,unaff_RBP + 0x28);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + 6,(longlong)&stack0x00000078 + 3,
                                                      unaff_RBP + 0x28);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        while (cVar7 != '\0') {
                          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 6);
                          if (*(int *)(*plVar22 + 0x114) == iRam00000001423af9f4) {
                            plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 6);
                            lVar21 = *plVar22;
                            plVar22 = (longlong *)func_0x0001400703d0();
                            if (*(int *)(lVar21 + 0x118) == *(int *)(*plVar22 + 8)) {
                              puVar20 = (undefined8 *)func_0x0001400703d0();
                              unaff_RBP[lVar18 + 0x8e] = *puVar20;
                              iVar13 = iVar13 + 1;
                              lVar18 = lVar18 + 1;
                              if (0x31 < lVar18) goto code_r0x00014010e37b;
                              break;
                            }
                          }
                          func_0x0001400703c0(unaff_RBP + 6);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(unaff_RBP + 6,(longlong)&stack0x00000078 + 3
                                                        ,unaff_RBP + 0x28);
                          cVar7 = func_0x000140066d70(*puVar19,0);
                        }
                      }
                    }
                  }
                }
              }
code_r0x00014010e34b:
              uVar39 = func_0x0001400703c0();
              puVar19 = (undefined1 *)func_0x0001400703e0(uVar39,&stack0x00000078,unaff_RBP + 0x15);
              cVar7 = func_0x000140066d70(*puVar19,0);
            } while (cVar7 != '\0');
code_r0x00014010e37b:
            unaff_R13 = unaff_RBP[-0xd];
            if (iVar13 < 1) goto code_r0x00014010e3e8;
            iVar13 = FUN_1400734f0(iVar13);
            lVar17 = unaff_RBP[-10];
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 8) =
                 *(undefined4 *)(unaff_RBP[(longlong)iVar13 + 0x8e] + 8);
            if (sVar12 == 2) {
              *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 0xc) = 0x3c;
            }
            else {
              lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130);
              if (sVar12 == 9) {
                *(undefined4 *)(lVar18 + 0xc) = 0x2c;
              }
              else {
                *(undefined4 *)(lVar18 + 0xc) = 0x3d;
              }
            }
          }
          if (*(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 8) == -1) {
            func_0x000140070800(lRam00000001423b6570 + 0x2b0,unaff_RBP + 4);
            func_0x0001400707f0(lRam00000001423b6570 + 0x2b0,unaff_RBP + 8);
            puVar19 = (undefined1 *)
                      func_0x0001400703e0(unaff_RBP + 4,(longlong)&stack0x00000050 + 1,unaff_RBP + 8
                                         );
            cVar7 = func_0x000140066d70(*puVar19,0);
            if (cVar7 != '\0') {
              do {
                puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 4);
                sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                if (sVar9 == 8) {
                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                  cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
                  if (cVar7 == '\0') {
                    plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                    cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
                    if (cVar7 == '\0') {
                      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                      cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
                      if (cVar7 == '\0') {
                        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                        cVar7 = supplier_0x73550(*plVar22 + 0x28,4);
                        if (cVar7 != '\0') {
                          func_0x000140070800(0x14240a290,&stack0x00000070);
                          func_0x0001400707f0(0x14240a290,unaff_RBP + 7);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(&stack0x00000070,
                                                        (longlong)&stack0x00000050 + 2,unaff_RBP + 7
                                                       );
                          cVar7 = func_0x000140066d70(*puVar19,0);
                          while (cVar7 != '\0') {
                            plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000070);
                            if (*(int *)(*plVar22 + 0x114) == iRam00000001423af9f4) {
                              plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000070);
                              lVar18 = *plVar22;
                              plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                              if (*(int *)(lVar18 + 0x118) == *(int *)(*plVar22 + 8)) {
                                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 4);
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 8) =
                                     *(undefined4 *)(*plVar22 + 8);
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 0xc) = 0x3d;
                                break;
                              }
                            }
                            func_0x0001400703c0(&stack0x00000070);
                            puVar19 = (undefined1 *)
                                      func_0x0001400703e0(&stack0x00000070,
                                                          (longlong)&stack0x00000050 + 2,
                                                          unaff_RBP + 7);
                            cVar7 = func_0x000140066d70(*puVar19,0);
                          }
                        }
                      }
                    }
                  }
                }
                func_0x0001400703c0(unaff_RBP + 4);
                puVar19 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + 4,(longlong)&stack0x00000050 + 1,
                                              unaff_RBP + 8);
                cVar7 = func_0x000140066d70(*puVar19,0);
              } while (cVar7 != '\0');
              unaff_R13 = unaff_RBP[-0xd];
            }
          }
        }
        FUN_14013cba0(unaff_RBP[-4]);
        if (cStack0000000000000053 == '\0') goto code_r0x00014010e622;
      }
      *(uint *)(in_stack_00000060 + 0x114) = *(uint *)(in_stack_00000060 + 0x114) | 0x800000;
      *(uint *)(in_stack_00000060 + 0x118) = *(uint *)(in_stack_00000060 + 0x118) | 0x80000000;
    }
    uVar32 = 0xffffffff;
    if (*(int *)(in_stack_00000060 + 0xc30) != -1) {
      FUN_1402c0830(0x1423ad5b0);
    }
    uVar6 = uStack0000000000000054;
    uVar15 = *(uint *)(unaff_RBP + -2);
    *(short *)(in_stack_00000060 + 0xa8) = (short)uVar15;
    uVar36 = *(uint *)(unaff_RBP + -3);
    *(short *)(in_stack_00000060 + 0xaa) = (short)uVar36;
    *(ushort *)(in_stack_00000060 + 0xac) = uStack0000000000000054;
    uVar29 = CONCAT62((int6)((ulonglong)uVar29 >> 0x10),3);
    FUN_14138bec0(in_stack_00000060,*(undefined2 *)(in_stack_00000060 + 0xa8),
                  *(undefined2 *)(in_stack_00000060 + 0xaa),uStack0000000000000054,uVar29);
    FUN_1414082c0(in_stack_00000060,0);
    *(undefined4 *)(in_stack_00000060 + 0x348) = 0xffffffff;
    *(undefined4 *)(in_stack_00000060 + 0x3d0) = 0xffffffff;
    uVar11 = FUN_140f96080(_DAT_142507ed8,uVar15 & 0xffff,uVar36 & 0xffff,uVar6);
    in_stack_00000020 = CONCAT71((int7)((ulonglong)uVar29 >> 8),1);
    FUN_14138ff60(in_stack_00000060,uVar11,1,1,in_stack_00000020);
    func_0x00014138fa90(in_stack_00000060);
    supplier_0xbaf40(unaff_RBP + 0x10,&stack0x00000060);
    uVar29 = unaff_RBP[0xc];
code_r0x00014010e97c:
    uVar15 = (int)unaff_RBP[-0xc] - 1;
    uVar31 = (ulonglong)uVar15;
    unaff_RBP[-0xc] = uVar31;
    if ((int)uVar15 < 0) goto code_r0x00014010e98d;
    puVar20 = (undefined8 *)supplier_0x707e0(uVar29,uVar31);
    uVar32 = func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar20);
    unaff_RBP[-4] = uVar32;
    if ((uVar32 == 0) || (cVar7 = func_0x000140df0b70(uVar32,0), cVar7 == '\0'))
    goto code_r0x00014010e97c;
    FUN_140df0c20(uVar32);
    in_stack_00000060 = *(ulonglong *)(uVar32 + 0x18);
    FUN_14138b430(in_stack_00000060,1);
    func_0x00014138b3e0(in_stack_00000060);
    *(uint *)(in_stack_00000060 + 0x110) = *(uint *)(in_stack_00000060 + 0x110) | 0x80000000;
    FUN_14139d710(in_stack_00000060);
    plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
    *(undefined4 *)(in_stack_00000060 + 0x988) = *(undefined4 *)(*plVar22 + 4);
    plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
    *(undefined4 *)(in_stack_00000060 + 0x98c) = *(undefined4 *)(*plVar22 + 8);
    plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
    *(undefined4 *)(in_stack_00000060 + 0x990) = *(undefined4 *)(*plVar22 + 0xc);
    plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
    *(undefined4 *)(in_stack_00000060 + 0x9a0) = *(undefined4 *)(*plVar22 + 0x10);
    plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
    if (0 < *(int *)(*plVar22 + 0x14)) {
      plVar22 = (longlong *)supplier_0x707e0(uVar29,uVar31);
      FUN_140074da0(in_stack_00000060,0x2e,*(undefined4 *)(*plVar22 + 0x14));
    }
    unaff_R13 = *(longlong *)(uVar32 + 0x10);
    unaff_RBP[-0xd] = unaff_R13;
    if (*(int *)(unaff_R13 + 0x30) != -1) {
      uVar36 = *(uint *)(unaff_RBP + -3);
      goto code_r0x00014010e97c;
    }
    if (((*(longlong *)(lVar17 + 0x60) != 0) &&
        (lVar18 = supplier_0x70930(*(longlong *)(lVar17 + 0x60) + 0x98), lVar18 != 0)) &&
       (lVar18 = func_0x0001413c6dc0(in_stack_00000060), lVar18 != 0)) {
      func_0x000140070800(lVar18 + 0xe8,unaff_RBP + 0x1d);
      func_0x0001400707f0(lVar18 + 0xe8,unaff_RBP + 0x35);
      puVar19 = (undefined1 *)
                func_0x0001400703e0(unaff_RBP + 0x1d,(longlong)&stack0x00000068 + 1,unaff_RBP + 0x35
                                   );
      cVar7 = func_0x000140066d70(*puVar19,0);
      while (cVar7 != '\0') {
        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x1d);
        plVar22 = (longlong *)*plVar22;
        sVar9 = (**(code **)*plVar22)(plVar22);
        if ((sVar9 == 10) &&
           (lVar18 = func_0x00014007f0b0(&DAT_1423edb78,(int)plVar22[1]), lVar18 != 0)) {
          uVar39 = (**(code **)(*plVar22 + 0x30))(plVar22);
          puVar25 = (undefined4 *)FUN_1400bb380(uVar39,lVar18 + 0x1110);
          unaff_RBP[0x2a] = puVar25;
          if ((puVar25 != (undefined4 *)0x0) &&
             (iVar13 = func_0x00014013e0b0(*(undefined4 *)(lVar18 + 4),*puVar25,
                                           *(longlong *)(lVar17 + 0x60) + 0x98), iVar13 != -1)) {
            supplier_0xbaf40(unaff_RBP + 0x43,unaff_RBP + 0x2a);
          }
        }
        func_0x0001400703c0(unaff_RBP + 0x1d);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + 0x1d,(longlong)&stack0x00000068 + 1,
                                      unaff_RBP + 0x35);
        cVar7 = func_0x000140066d70(*puVar19,0);
      }
    }
    unaff_R12B = '\0';
  } while( true );
joined_r0x00014010d8ff:
  if (cVar7 == '\0') goto code_r0x00014010d9c3;
  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 3);
  cVar7 = supplier_0x73550(*plVar22 + 0x28,1);
  if (cVar7 == '\0') {
    plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 3);
    cVar7 = supplier_0x73550(*plVar22 + 0x28,0);
    if (cVar7 == '\0') {
      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 3);
      cVar7 = supplier_0x73550(*plVar22 + 0x28,3);
      if (cVar7 == '\0') {
        puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 3);
        sVar9 = (*(code *)**(undefined8 **)*puVar20)();
        if (sVar9 == 2) {
          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 3);
          if ((*(int *)(lVar17 + 0xb8) == *(int *)(*plVar22 + 0xb8)) &&
             (*(int *)(lVar17 + 0xbc) == *(int *)(*plVar22 + 0xbc))) goto code_r0x00014010d9c3;
        }
      }
    }
  }
  func_0x0001400703c0(unaff_RBP + 3);
  puVar19 = (undefined1 *)
            func_0x0001400703e0(unaff_RBP + 3,(longlong)unaff_RBP + -0x2d,unaff_RBP + -0xb);
  cVar7 = func_0x000140066d70(*puVar19,0);
  goto joined_r0x00014010d8ff;
code_r0x00014010d9c3:
  puVar19 = (undefined1 *)func_0x0001400703e0(unaff_RBP + 3,unaff_RBP + -6,unaff_RBP + -0xb);
  cVar7 = func_0x000140073420(*puVar19,0);
  if (cVar7 == '\0') {
    uVar23 = func_0x0001400703d0(unaff_RBP + -1);
    supplier_0xbaf40(unaff_RBP + 0x53,uVar23);
    uVar23 = func_0x0001400703d0(unaff_RBP + 3);
    supplier_0xbaf40(unaff_RBP + 0x17,uVar23);
  }
code_r0x00014010da12:
  func_0x0001400703c0(unaff_RBP + -1);
  puVar19 = (undefined1 *)
            func_0x0001400703e0(unaff_RBP + -1,(longlong)unaff_RBP + -0x2e,unaff_RBP + 0x30);
  cVar7 = func_0x000140066d70(*puVar19,0);
  if (cVar7 == '\0') goto code_r0x00014010da41;
  goto code_r0x00014010d740;
code_r0x0001401109e3:
  func_0x0001400703c0(unaff_RBP + -0x10);
  puVar19 = (undefined1 *)
            func_0x0001400703e0(unaff_RBP + -0x10,(longlong)&stack0x00000050 + 2,unaff_RBP + 0x28);
  cVar7 = func_0x000140066d70(*puVar19,0);
  if (cVar7 == '\0') goto code_r0x000140110a44;
  goto code_r0x0001401109a2;
code_r0x00014010e98d:
  func_0x0001400670c0(unaff_RBP + 0x40);
  func_0x0001400670c0(unaff_RBP + 0x4b);
  func_0x0001400670c0(unaff_RBP + 0x48);
  func_0x000140070800(lVar17 + 0x38,unaff_RBP + 0x16);
  func_0x0001400707f0(lVar17 + 0x38,unaff_RBP + 0x3f);
  puVar19 = (undefined1 *)
            func_0x0001400703e0(unaff_RBP + 0x16,(longlong)&stack0x00000050 + 2,unaff_RBP + 0x3f);
  cVar7 = func_0x000140066d70(*puVar19,0);
  while (cVar7 != '\0') {
    puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 0x16);
    piVar33 = (int *)*puVar20;
    iVar13 = 0;
    if (0 < *piVar33) {
      uVar15 = *(uint *)(unaff_RBP + -2);
      uVar32 = (ulonglong)uStack0000000000000054;
      do {
        _iStack0000000000000058 = FUN_14138cfc0();
        FUN_141395c80(_iStack0000000000000058,(short)piVar33[1],0xffffffff,0);
        FUN_141395af0(_iStack0000000000000058);
        *(int *)(_iStack0000000000000058 + 0x144) = piVar33[2];
        *(int *)(_iStack0000000000000058 + 0x148) = piVar33[4];
        *(int *)(_iStack0000000000000058 + 0x14c) = piVar33[5];
        *(uint *)(_iStack0000000000000058 + 0x114) = *(uint *)(_iStack0000000000000058 + 0x114) | 4;
        FUN_14133d3d0(_iStack0000000000000058,1,0);
        FUN_141348d50(_iStack0000000000000058,1,0,0);
        *(uint *)(_iStack0000000000000058 + 0x114) =
             *(uint *)(_iStack0000000000000058 + 0x114) & 0xfffffffb;
        *(uint *)(_iStack0000000000000058 + 0x110) =
             *(uint *)(_iStack0000000000000058 + 0x110) | 0x4000000;
        *(undefined4 *)(_iStack0000000000000058 + 0x138) = 7;
        FUN_140074da0(_iStack0000000000000058,0x32,0x189c0);
        *(int *)(_iStack0000000000000058 + 0x140) = iRam00000001423af9f0;
        FUN_14139d710(_iStack0000000000000058);
        FUN_1414016f0(_iStack0000000000000058,piVar33 + 1);
        *(undefined4 *)(_iStack0000000000000058 + 0x348) = 0xffffffff;
        *(short *)(_iStack0000000000000058 + 0xa8) = (short)uVar15;
        *(short *)(_iStack0000000000000058 + 0xaa) = (short)uVar36;
        *(short *)(_iStack0000000000000058 + 0xac) = (short)uVar32;
        uVar29 = CONCAT62((int6)(in_stack_00000020 >> 0x10),3);
        FUN_14138bec0(_iStack0000000000000058,*(undefined2 *)(_iStack0000000000000058 + 0xa8),
                      *(undefined2 *)(_iStack0000000000000058 + 0xaa),uVar32,uVar29);
        uVar11 = FUN_140f96080(_DAT_142507ed8,uVar15 & 0xffff,uVar36 & 0xffff,uVar32);
        in_stack_00000020 = CONCAT71((int7)((ulonglong)uVar29 >> 8),1);
        FUN_14138ff60(_iStack0000000000000058,uVar11,1,1,in_stack_00000020);
        func_0x00014138fa90(_iStack0000000000000058);
        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x16);
        if (*(int *)(*plVar22 + 0x18) != -1) {
          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x16);
          plVar22 = (longlong *)supplier_0x707e0(0x142513848,(longlong)*(int *)(*plVar22 + 0x18));
          lVar17 = *plVar22;
          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x16);
          puVar20 = (undefined8 *)
                    supplier_0x707e0(lVar17 + 0x80,(longlong)*(int *)(*plVar22 + 0x1c));
          plVar22 = (longlong *)*puVar20;
          pcVar2 = *(code **)(*plVar22 + 0x20);
          func_0x0001400bb130(unaff_RBP + 0x3c,0);
          puVar26 = (ulonglong *)func_0x0001400bb130(unaff_RBP + 0x3b,0);
          in_stack_00000020 = *puVar26;
          (*pcVar2)(plVar22,_iStack0000000000000058,0,1,in_stack_00000020);
          uVar15 = *(uint *)(unaff_RBP + -2);
          uVar32 = (ulonglong)uStack0000000000000054;
        }
        FUN_141366580(_iStack0000000000000058,0,1);
        *(undefined4 *)(_iStack0000000000000058 + 0x3d0) = 0xffffffff;
        FUN_1414082c0(_iStack0000000000000058,0);
        supplier_0xbaf40(unaff_RBP + 0x10,&stack0x00000058);
        func_0x000140070800(unaff_RBP + 0x40,&stack0x00000070);
        func_0x0001400707f0(unaff_RBP + 0x40,unaff_RBP + -0xb);
        func_0x000140070800(unaff_RBP + 0x4b,unaff_RBP + -0xc);
        func_0x000140070800(unaff_RBP + 0x48,unaff_RBP + -4);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                      unaff_RBP + -0xb);
        cVar7 = func_0x000140066d70(*puVar19,0);
        while (cVar7 != '\0') {
          piVar27 = (int *)func_0x0001400703d0(&stack0x00000070);
          if ((*piVar27 == *(int *)(_iStack0000000000000058 + 0xa4)) &&
             (piVar27 = (int *)func_0x0001400703d0(unaff_RBP + -0xc),
             *piVar27 == (int)*(short *)(_iStack0000000000000058 + 300))) {
            piVar27 = (int *)func_0x0001400703d0(unaff_RBP + -4);
            *piVar27 = *piVar27 + 1;
            break;
          }
          func_0x000140070910(&stack0x00000070);
          func_0x000140070910(unaff_RBP + -0xc);
          func_0x000140070910(unaff_RBP + -4);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                        unaff_RBP + -0xb);
          cVar7 = func_0x000140066d70(*puVar19,0);
        }
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(&stack0x00000070,unaff_RBP + -6,unaff_RBP + -0xb);
        cVar7 = func_0x000140073420(*puVar19,0);
        if (cVar7 != '\0') {
          func_0x0001400709d0(unaff_RBP + 0x40,_iStack0000000000000058 + 0xa4);
          *(int *)((longlong)unaff_RBP + -0x6c) = (int)*(short *)(_iStack0000000000000058 + 300);
          func_0x0001400709d0(unaff_RBP + 0x4b,(longlong)unaff_RBP + -0x6c);
          *(undefined4 *)(unaff_RBP + -0xe) = 1;
          func_0x0001400709d0(unaff_RBP + 0x48,unaff_RBP + -0xe);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *piVar33);
    }
    func_0x0001400703c0(unaff_RBP + 0x16);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + 0x16,(longlong)&stack0x00000050 + 2,unaff_RBP + 0x3f);
    cVar7 = func_0x000140066d70(*puVar19,0);
  }
  bVar38 = false;
  iVar13 = -1;
  if (cStack0000000000000050 == '\0') {
    iVar13 = -3;
    *(undefined4 *)(unaff_RBP + -0xe) = 0xfffffffd;
    func_0x000140070800(unaff_RBP + 0x10,unaff_RBP + -0xf);
    func_0x0001400707f0(unaff_RBP + 0x10,unaff_RBP + -4);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + -0xf,(longlong)&stack0x00000050 + 2,unaff_RBP + -4);
    cVar7 = func_0x000140066d70(*puVar19,0);
    if (cVar7 != '\0') {
      do {
        puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0xf);
        lVar17 = func_0x0001413c6dc0(*puVar20);
        iVar14 = iVar13;
        if (lVar17 != 0) {
          uVar32 = 0xffffffff;
          func_0x000140070800(lVar17 + 0xe8,&stack0x00000070);
          func_0x0001400707f0(lVar17 + 0xe8,unaff_RBP + -0xc);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                        unaff_RBP + -0xc);
          cVar7 = func_0x000140066d70(*puVar19,0);
          while (cVar7 != '\0') {
            puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
            sVar9 = (*(code *)**(undefined8 **)*puVar20)();
            if (sVar9 == 0) {
              plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000070);
              psVar30 = (short *)func_0x00014007f0b0(&DAT_1423edb78,*(undefined4 *)(*plVar22 + 8));
              if ((psVar30 != (short *)0x0) && (*psVar30 == 8)) {
                uVar32 = (ulonglong)*(uint *)(psVar30 + 2);
                break;
              }
            }
            func_0x0001400703c0(&stack0x00000070);
            puVar19 = (undefined1 *)
                      func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                          unaff_RBP + -0xc);
            cVar7 = func_0x000140066d70(*puVar19,0);
          }
          iVar14 = (int)uVar32;
          if ((iVar13 != -3) && (iVar14 = iVar13, iVar13 != (int)uVar32)) {
            iVar14 = -2;
          }
        }
        iVar13 = iVar14;
        func_0x0001400703c0(unaff_RBP + -0xf);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -0xf,(longlong)&stack0x00000050 + 2,unaff_RBP + -4
                                     );
        cVar7 = func_0x000140066d70(*puVar19,0);
      } while (cVar7 != '\0');
      *(int *)(unaff_RBP + -0xe) = iVar13;
    }
    cVar7 = func_0x00014007f3f0(0x1423ad020,0x12d,iRam00000001418b821c);
    if (cVar7 != '\0') {
      lVar17 = supplier_0x70410(unaff_RBP + 0x10);
      if (lVar17 == 1) {
        supplier_0x70c50(unaff_RBP + 0xf2);
        supplier_0x70c50(unaff_RBP + 0x53);
        puVar20 = (undefined8 *)supplier_0x707e0(unaff_RBP + 0x10,0);
        FUN_141344290(*puVar20,unaff_RBP + 0x53,0);
        supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
        puVar20 = (undefined8 *)supplier_0x707e0(unaff_RBP + 0x10,0);
        lVar17 = func_0x0001413c6dc0(*puVar20);
        if (((lVar17 == 0) || (*(longlong *)(lVar17 + 0x130) == 0)) ||
           ((psVar30 = *(short **)(*(longlong *)(lVar17 + 0x130) + 0x28), psVar30 == (short *)0x0 ||
            (puVar34 = &UNK_141613d90, *psVar30 != 1)))) {
          puVar34 = &UNK_141613da0;
        }
        supplier_0x70b20(unaff_RBP + 0xf2,puVar34);
        func_0x00014007f1a0(unaff_RBP + 0x1e);
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
        *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
        *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
        *(short *)((longlong)unaff_RBP + 0xf6) = (short)*(undefined4 *)(unaff_RBP + -2);
        uVar32 = (ulonglong)*(uint *)(unaff_RBP + -3);
        *(short *)(unaff_RBP + 0x1f) = (short)*(uint *)(unaff_RBP + -3);
        *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
        FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
        supplier_0x693f0(unaff_RBP + 0x53);
        supplier_0x693f0(unaff_RBP + 0xf2);
      }
      else {
        uVar31 = supplier_0x70410(unaff_RBP + 0x10);
        if (1 < uVar31) {
          if (iVar13 < 0) {
            func_0x000140070800(unaff_RBP + 0x10,&stack0x00000070);
            func_0x0001400707f0(unaff_RBP + 0x10,unaff_RBP + -0xc);
            puVar19 = (undefined1 *)
                      func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                          unaff_RBP + -0xc);
            cVar7 = func_0x000140066d70(*puVar19,0);
            if (cVar7 != '\0') {
              uVar15 = *(uint *)(unaff_RBP + -3);
              uVar32 = (ulonglong)uVar15;
              uVar39 = *(undefined4 *)(unaff_RBP + -2);
              do {
                supplier_0x70c50(unaff_RBP + 0xf2);
                supplier_0x70c50(unaff_RBP + 0x53);
                puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
                FUN_141344290(*puVar20,unaff_RBP + 0x53,0);
                supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
                puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
                lVar17 = func_0x0001413c6dc0(*puVar20);
                if ((((lVar17 == 0) || (*(longlong *)(lVar17 + 0x130) == 0)) ||
                    (psVar30 = *(short **)(*(longlong *)(lVar17 + 0x130) + 0x28),
                    psVar30 == (short *)0x0)) || (puVar34 = &UNK_141613d90, *psVar30 != 1)) {
                  puVar34 = &UNK_141613da0;
                }
                supplier_0x70b20(unaff_RBP + 0xf2,puVar34);
                func_0x00014007f1a0(unaff_RBP + 0x1e);
                *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
                *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
                *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
                *(short *)((longlong)unaff_RBP + 0xf6) = (short)uVar39;
                *(short *)(unaff_RBP + 0x1f) = (short)uVar15;
                *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
                FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
                supplier_0x693f0(unaff_RBP + 0x53);
                supplier_0x693f0(unaff_RBP + 0xf2);
                func_0x0001400703c0(&stack0x00000070);
                puVar19 = (undefined1 *)
                          func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1);
                cVar7 = func_0x000140066d70(*puVar19,0);
              } while (cVar7 != '\0');
            }
          }
          else {
            supplier_0x70c50(unaff_RBP + 0xf2);
            report_tribute_entity_name(0x142516038,unaff_RBP + 0xf2,iVar13,0);
            puVar20 = (undefined8 *)supplier_0x707e0(unaff_RBP + 0x10,0);
            lVar17 = func_0x0001413c6dc0(*puVar20);
            if (((lVar17 == 0) || (*(longlong *)(lVar17 + 0x130) == 0)) ||
               ((psVar30 = *(short **)(*(longlong *)(lVar17 + 0x130) + 0x28),
                psVar30 == (short *)0x0 || (puVar34 = &UNK_141613f98, *psVar30 != 1)))) {
              puVar34 = &UNK_141613fc0;
            }
            supplier_0x70b20(unaff_RBP + 0xf2,puVar34);
            func_0x00014007f1a0(unaff_RBP + 0x1e);
            *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
            *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
            *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
            *(short *)((longlong)unaff_RBP + 0xf6) = (short)*(undefined4 *)(unaff_RBP + -2);
            uVar32 = (ulonglong)*(uint *)(unaff_RBP + -3);
            *(short *)(unaff_RBP + 0x1f) = (short)*(uint *)(unaff_RBP + -3);
            *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
            FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
            supplier_0x693f0(unaff_RBP + 0xf2);
          }
        }
      }
    }
    bVar38 = false;
    iVar13 = -1;
    iVar14 = -1;
    uVar32 = uVar32 & 0xffffffffffffff00;
    _iStack0000000000000058 = CONCAT44(uStack000000000000005c,(int)uVar32);
    uVar31 = FUN_14007f0e0(_DAT_142507ed8,iRam00000001423af9f4);
    in_stack_00000060 = uVar31;
    func_0x000140070800(uVar31 + 0x2b0,unaff_RBP + -9);
    func_0x0001400707f0(uVar31 + 0x2b0,unaff_RBP + 8);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + -9,(longlong)&stack0x00000050 + 1,unaff_RBP + 8);
    cVar7 = func_0x000140066d70(*puVar19,0);
    if (cVar7 != '\0') {
      do {
        puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -9);
        sVar9 = (*(code *)**(undefined8 **)*puVar20)();
        uVar32 = uVar32 & 0xff;
        if (sVar9 == 8) {
          uVar32 = 1;
        }
        func_0x0001400703c0(unaff_RBP + -9);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -9,(longlong)&stack0x00000050 + 1,unaff_RBP + 8);
        cVar7 = func_0x000140066d70(*puVar19,0);
      } while (cVar7 != '\0');
      _iStack0000000000000058 = CONCAT44(uStack000000000000005c,(int)uVar32);
      uVar31 = in_stack_00000060;
    }
    bVar3 = false;
    bVar5 = false;
    cVar7 = '\0';
    cStack0000000000000069 = '\0';
    cStack0000000000000053 = '\0';
    cStack0000000000000068 = '\0';
    *(undefined4 *)((longlong)unaff_RBP + -0x6c) = 0xffffffff;
    lVar17 = unaff_RBP[-10];
    if (*(longlong *)(lVar17 + 0x60) != 0) {
      iVar14 = report_mission_goal_getter();
      if (iVar14 == 0x18) {
        cVar7 = '\x01';
        cStack0000000000000069 = '\x01';
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130);
        iVar13 = *(int *)(lVar18 + 0xc);
        *(undefined4 *)((longlong)unaff_RBP + -0x6c) = *(undefined4 *)(lVar18 + 8);
        if (iVar13 == -1) {
          iVar13 = 0x3d;
        }
      }
      cStack0000000000000053 = cVar7;
      iVar16 = report_mission_goal_getter(*(undefined8 *)(lVar17 + 0x60));
      iVar14 = iVar13;
      if ((iVar16 == 0x11) &&
         (cStack0000000000000053 = cVar7,
         (*(byte *)(*(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130) + 0xc) & 1) == 0)) {
        if (in_stack_00000078._1_1_ == '\0') {
          iVar14 = 0x4a;
        }
        cStack0000000000000053 = '\x01';
        cStack0000000000000068 = in_stack_00000078._1_1_;
      }
      iVar13 = report_mission_goal_getter(*(undefined8 *)(lVar17 + 0x60));
      if (iVar13 == 0xc) {
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x60) + 0x130);
        iVar14 = *(int *)(lVar18 + 0x34);
        *(undefined4 *)((longlong)unaff_RBP + -0x6c) = *(undefined4 *)(lVar18 + 0x30);
      }
    }
    func_0x000140070800(unaff_RBP + 0x10,unaff_RBP + -5);
    func_0x0001400707f0(unaff_RBP + 0x10,unaff_RBP + 0x2f);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + -5,(longlong)&stack0x00000078 + 2,unaff_RBP + 0x2f);
    cVar7 = func_0x000140066d70(*puVar19,0);
    if (cVar7 != '\0') {
      lVar17 = uVar31 + 0x2b0;
      unaff_RBP[0x1d] = lVar17;
      do {
        cVar7 = (char)uVar32;
        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -5);
        lVar18 = *plVar22;
        unaff_RBP[0x3a] = lVar18;
        lVar21 = func_0x0001413c6dc0(lVar18);
        if (lVar21 != 0) {
          if (*(longlong *)(lVar18 + 0x1268) == 0) {
            uVar29 = FUN_14154de30(0x38);
            unaff_RBP[0x3c] = uVar29;
            uVar29 = FUN_1400ff1f0(uVar29);
            *(undefined8 *)(lVar18 + 0x1268) = uVar29;
          }
          else {
            FUN_1400ff240();
          }
          *(int *)(*(longlong *)(lVar18 + 0x1268) + 0x1c) = _DAT_142161ab8;
          *(int *)(*(longlong *)(lVar18 + 0x1268) + 0x20) = _DAT_1423a424c + 0x31380;
          if (0x626ff < *(int *)(*(longlong *)(lVar18 + 0x1268) + 0x20)) {
            piVar33 = (int *)(*(longlong *)(lVar18 + 0x1268) + 0x1c);
            *piVar33 = *piVar33 + 1;
            piVar33 = (int *)(*(longlong *)(lVar18 + 0x1268) + 0x20);
            *piVar33 = *piVar33 + -0x62700;
          }
          if (cStack0000000000000053 != '\0') {
            lVar24 = unaff_RBP[-10];
            *(undefined8 *)(lVar18 + 0x1208) = *(undefined8 *)(lVar24 + 0x60);
            *(undefined4 *)(lVar18 + 0x1200) = **(undefined4 **)(lVar24 + 0x60);
          }
          *(int *)(*(longlong *)(lVar18 + 0x1268) + 0x2c) = iVar14;
          *(undefined4 *)(*(longlong *)(lVar18 + 0x1268) + 0x30) =
               *(undefined4 *)((longlong)unaff_RBP + -0x6c);
          if (cStack0000000000000068 != '\0') {
            uVar29 = FUN_14154de30(0x24);
            unaff_RBP[0x3b] = uVar29;
            puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
            unaff_RBP[-0xc] = puVar25;
            *puVar25 = 8;
            if (!bVar3) {
              *(undefined4 *)(unaff_RBP[-0xc] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
              bVar5 = true;
              *(uint *)(lVar18 + 0x110) = *(uint *)(lVar18 + 0x110) | 0x800;
              *(undefined1 *)(lVar18 + 0x120) = 0;
              func_0x000140e78af0((undefined1 *)(lVar18 + 0x120),_DAT_1423af9f8);
            }
            supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + -0xc);
          }
          bVar3 = bVar5;
          bVar5 = bVar3;
          if (cStack0000000000000069 == '\0') {
            bVar38 = false;
            if (in_stack_00000060 != 0) {
              func_0x0001400670c0(unaff_RBP + 0x17);
              func_0x000140070800(lVar17,unaff_RBP + 6);
              func_0x0001400707f0(lVar17,unaff_RBP + 0x34);
              puVar19 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + 6,&stack0x00000078,unaff_RBP + 0x34);
              cVar8 = func_0x000140066d70(*puVar19,0);
              bVar38 = false;
              if (cVar8 != '\0') {
                do {
                  puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 6);
                  sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                  if (sVar9 == 2) {
                    plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 6);
                    lVar17 = *plVar22;
                    if (*(int *)(lVar17 + 0xb8) != -1) {
                      bVar4 = false;
                      func_0x000140070800(lVar21 + 0xe8,&stack0x00000070);
                      func_0x0001400707f0(lVar21 + 0xe8,unaff_RBP + 0x15);
                      puVar19 = (undefined1 *)
                                func_0x0001400703e0(&stack0x00000070,(longlong)&stack0x00000050 + 1,
                                                    unaff_RBP + 0x15);
                      cVar7 = func_0x000140066d70(*puVar19,0);
                      if (cVar7 != '\0') {
                        do {
                          puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
                          sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                          if (sVar9 == 0) {
                            plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000070);
                            psVar30 = (short *)func_0x00014007f0b0(&DAT_1423edb78,
                                                                   *(undefined4 *)(*plVar22 + 8));
                            if ((psVar30 != (short *)0x0) && (*psVar30 == 5)) {
                              bVar4 = true;
                              if ((*(int *)(lVar17 + 0xb8) == 1) &&
                                 (bVar4 = true, *(int *)(lVar17 + 0xbc) == *(int *)(psVar30 + 2)))
                              goto code_r0x000140110a2a;
                            }
                          }
                          func_0x0001400703c0(&stack0x00000070);
                          puVar19 = (undefined1 *)
                                    func_0x0001400703e0(&stack0x00000070,
                                                        (longlong)&stack0x00000050 + 1,
                                                        unaff_RBP + 0x15);
                          cVar7 = func_0x000140066d70(*puVar19,0);
                        } while (cVar7 != '\0');
                        if (bVar4) goto code_r0x000140110a44;
                      }
                      if (*(int *)(lVar17 + 0xb8) == 0) {
                        func_0x000140070800(lVar21 + 0x118,unaff_RBP + -0x10);
                        func_0x0001400707f0(lVar21 + 0x118,unaff_RBP + 0x28);
                        puVar19 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + -0x10,
                                                      (longlong)&stack0x00000050 + 2,
                                                      unaff_RBP + 0x28);
                        cVar7 = func_0x000140066d70(*puVar19,0);
                        if (cVar7 != '\0') {
code_r0x0001401109a2:
                          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x10);
                          sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                          if (((sVar9 != 4) ||
                              (plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10),
                              *(int *)(*plVar22 + 8) != *(int *)(lVar17 + 0xbc))) ||
                             (plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10),
                             *(short *)(*plVar22 + 0xc) < 0x4b)) goto code_r0x0001401109e3;
                          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10);
                          if (0x59 < *(short *)(*plVar22 + 0xc)) {
                            bVar38 = true;
                          }
code_r0x000140110a2a:
                          unaff_RBP[0x2a] = lVar17;
                          supplier_0xbaf40(unaff_RBP + 0x17,unaff_RBP + 0x2a);
                        }
                      }
                    }
                  }
code_r0x000140110a44:
                  func_0x0001400703c0(unaff_RBP + 6);
                  puVar19 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + 6,&stack0x00000078,unaff_RBP + 0x34);
                  cVar7 = func_0x000140066d70(*puVar19,0);
                } while (cVar7 != '\0');
                lVar18 = unaff_RBP[0x3a];
                cVar7 = (char)_iStack0000000000000058;
              }
              lVar17 = supplier_0x70410(unaff_RBP + 0x17);
              if (lVar17 != 0) {
                uVar29 = supplier_0x70410(unaff_RBP + 0x17);
                iVar13 = FUN_1400734f0(uVar29);
                uVar29 = FUN_14154de30(0x24);
                unaff_RBP[4] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x14] = puVar25;
                *puVar25 = 0;
                *(undefined4 *)(unaff_RBP[0x14] + 4) = *(undefined4 *)(in_stack_00000060 + 0x88);
                plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x17,(longlong)iVar13);
                *(undefined4 *)(unaff_RBP[0x14] + 8) = *(undefined4 *)(*plVar22 + 8);
                supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0x14);
              }
              FUN_140068130(unaff_RBP + 0x17);
            }
            if (iVar14 != 0x4a) {
              if (iVar14 == 0x29) {
                if ((!bVar38) && (cVar7 != '\0')) {
                  uVar29 = FUN_14154de30(0x24);
                  unaff_RBP[-0xd] = uVar29;
                  puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                  unaff_RBP[0x37] = puVar25;
                  *puVar25 = 2;
                  supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0x37);
                }
                uVar29 = FUN_14154de30(0x24);
                *unaff_RBP = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x33] = puVar25;
                *puVar25 = 4;
                *(undefined4 *)(unaff_RBP[0x33] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
                puVar20 = unaff_RBP + 0x33;
              }
              else if (iVar14 == 0x37) {
                uVar29 = FUN_14154de30(0x24);
                unaff_RBP[-1] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x32] = puVar25;
                *puVar25 = 6;
                *(undefined4 *)(unaff_RBP[0x32] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
                puVar20 = unaff_RBP + 0x32;
              }
              else if (iVar14 == 0x38) {
                iVar13 = *(int *)(unaff_RBP + -0xe);
                uVar29 = FUN_14154de30(0x24);
                if (-1 < iVar13) {
                  unaff_RBP[-2] = uVar29;
                  puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                  unaff_RBP[0x13] = puVar25;
                  *puVar25 = 5;
                  if (!bVar3) {
                    *(undefined4 *)(unaff_RBP[0x13] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
                    bVar3 = true;
                  }
                  *(int *)(unaff_RBP[0x13] + 0x20) = iVar13;
                  supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0x13);
                  uVar31 = in_stack_00000060;
                  bVar5 = bVar3;
                  goto code_r0x000140110f54;
                }
                unaff_RBP[-3] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x31] = puVar25;
                *puVar25 = 5;
                *(undefined4 *)(unaff_RBP[0x31] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
                puVar20 = unaff_RBP + 0x31;
              }
              else {
                if (iVar14 != 0x39) goto code_r0x000140110b64;
                uVar29 = FUN_14154de30(0x24);
                unaff_RBP[0x4e] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x30] = puVar25;
                *puVar25 = 7;
                *(undefined4 *)(unaff_RBP[0x30] + 0x1c) = *(undefined4 *)(lVar18 + 0x130);
                puVar20 = unaff_RBP + 0x30;
              }
              goto code_r0x000140110f3e;
            }
            uVar29 = FUN_14154de30(0x24);
            unaff_RBP[3] = uVar29;
            puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
            unaff_RBP[0x38] = puVar25;
            *puVar25 = 10;
            supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0x38);
code_r0x000140110b64:
            if ((!bVar38) || (iVar13 = FUN_1400734f0(2), iVar13 != 0)) {
              func_0x000140070800(lVar21 + 0xe8,unaff_RBP + 5);
              func_0x0001400707f0(lVar21 + 0xe8,unaff_RBP + 0x2b);
              puVar19 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + 5,(longlong)&stack0x00000078 + 3,
                                            unaff_RBP + 0x2b);
              cVar7 = func_0x000140066d70(*puVar19,0);
              while (cVar7 != '\0') {
                puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 5);
                sVar9 = (*(code *)**(undefined8 **)*puVar20)();
                if (sVar9 == 0) {
                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + 5);
                  psVar30 = (short *)func_0x00014007f0b0(&DAT_1423edb78,
                                                         *(undefined4 *)(*plVar22 + 8));
                  if ((psVar30 != (short *)0x0) && (*psVar30 == 4)) goto code_r0x000140110f14;
                }
                func_0x0001400703c0(unaff_RBP + 5);
                puVar19 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + 5,(longlong)&stack0x00000078 + 3,
                                              unaff_RBP + 0x2b);
                cVar7 = func_0x000140066d70(*puVar19,0);
              }
              if ((*(longlong *)(lVar21 + 0x130) == 0) ||
                 (lVar17 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 8), lVar17 == 0)) {
code_r0x000140110f14:
                uVar29 = FUN_14154de30(0x24);
                unaff_RBP[0x46] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[0x1c] = puVar25;
                puVar20 = unaff_RBP + 0x1c;
code_r0x000140110f3c:
                *puVar25 = 2;
              }
              else {
                switch(*(undefined2 *)(lVar17 + 0x60)) {
                case 0x3d:
                case 0x45:
                case 0x74:
                case 0x75:
                case 0x76:
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                case 0x7b:
                case 0x7c:
                  uVar29 = FUN_14154de30(0x24);
                  unaff_RBP[0x52] = uVar29;
                  puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                  unaff_RBP[0x35] = puVar25;
                  *puVar25 = 1;
                  puVar20 = unaff_RBP + 0x35;
                  break;
                default:
                  goto code_r0x000140110f4a;
                case 0x4a:
                case 0x65:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                case 0x6d:
                case 0x6e:
                  uVar29 = FUN_14154de30(0x24);
                  unaff_RBP[0x4f] = uVar29;
                  puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                  unaff_RBP[0x36] = puVar25;
                  puVar20 = unaff_RBP + 0x36;
                  goto code_r0x000140110f3c;
                case 0x70:
                case 0x71:
                case 0x72:
                case 0x73:
                  iVar13 = *(int *)(unaff_RBP + -0xe);
                  uVar29 = FUN_14154de30(0x24);
                  if (iVar13 < 0) {
                    unaff_RBP[0x51] = uVar29;
                    puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                    unaff_RBP[0x39] = puVar25;
                    *puVar25 = 3;
                    puVar20 = unaff_RBP + 0x39;
                  }
                  else {
                    unaff_RBP[0x50] = uVar29;
                    puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                    unaff_RBP[0x29] = puVar25;
                    *puVar25 = 3;
                    *(int *)(unaff_RBP[0x29] + 0x20) = iVar13;
                    puVar20 = unaff_RBP + 0x29;
                  }
                }
              }
code_r0x000140110f3e:
              supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),puVar20);
            }
code_r0x000140110f4a:
            uVar31 = in_stack_00000060;
          }
          else {
            sVar9 = 0x66;
            if ((*(longlong *)(lVar21 + 0x130) != 0) &&
               (lVar24 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + 8), lVar24 != 0)) {
              sVar9 = *(short *)(lVar24 + 0x60);
            }
            lVar21 = func_0x000140c24110(lVar21);
            if (lVar21 != 0) {
              sVar9 = *(short *)(lVar21 + 0xac);
            }
            if (sVar9 == 0x84) {
              func_0x0001400670c0(unaff_RBP + 0xd);
              func_0x000140070800(lVar17,unaff_RBP + -8);
              func_0x0001400707f0(lVar17,unaff_RBP + 7);
              puVar19 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -8,(longlong)&stack0x00000078 + 1,
                                            unaff_RBP + 7);
              cVar7 = func_0x000140066d70(*puVar19,0);
              while (cVar7 != '\0') {
                puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -8);
                sVar12 = (*(code *)**(undefined8 **)*puVar20)();
                if (sVar12 == 2) {
                  plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                  iVar13 = *(int *)(*plVar22 + 0xb8);
                  if ((iVar13 != -1) &&
                     ((lVar21 == 0 ||
                      ((iVar13 == *(int *)(lVar21 + 0xa4) &&
                       (*(int *)(*plVar22 + 0xbc) == *(int *)(lVar21 + 0xa8))))))) {
                    uVar29 = func_0x0001400703d0(unaff_RBP + -8);
                    supplier_0xbaf40(unaff_RBP + 0xd,uVar29);
                  }
                }
                func_0x0001400703c0(unaff_RBP + -8);
                puVar19 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + -8,(longlong)&stack0x00000078 + 1,
                                              unaff_RBP + 7);
                cVar7 = func_0x000140066d70(*puVar19,0);
              }
              lVar17 = supplier_0x70410(unaff_RBP + 0xd);
              if (lVar17 != 0) {
                uVar29 = supplier_0x70410(unaff_RBP + 0xd);
                iVar13 = FUN_1400734f0(uVar29);
                uVar29 = FUN_14154de30(0x24);
                unaff_RBP[0x3e] = uVar29;
                puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
                unaff_RBP[-0xb] = puVar25;
                *puVar25 = 0;
                *(undefined4 *)(unaff_RBP[-0xb] + 4) = *(undefined4 *)(uVar31 + 0x88);
                plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0xd,(longlong)iVar13);
                *(undefined4 *)(unaff_RBP[-0xb] + 8) = *(undefined4 *)(*plVar22 + 8);
                supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + -0xb);
              }
              FUN_140068130(unaff_RBP + 0xd);
            }
            switch(sVar9) {
            case 0x3d:
            case 0x45:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
            case 0x78:
            case 0x79:
            case 0x7a:
            case 0x7b:
            case 0x7c:
              uVar29 = FUN_14154de30(0x24);
              unaff_RBP[0x1a] = uVar29;
              puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
              unaff_RBP[0xb] = puVar25;
              *puVar25 = 1;
              supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0xb);
              break;
            default:
              uVar29 = FUN_14154de30(0x24);
              unaff_RBP[9] = uVar29;
              puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
              unaff_RBP[0x3d] = puVar25;
              *puVar25 = 2;
              supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0x3d);
              break;
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
              uVar29 = FUN_14154de30(0x24);
              unaff_RBP[0x1b] = uVar29;
              puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
              unaff_RBP[0xc] = puVar25;
              *puVar25 = 3;
              supplier_0xbaf40(*(undefined8 *)(lVar18 + 0x1268),unaff_RBP + 0xc);
            }
          }
        }
code_r0x000140110f54:
        func_0x0001400703c0(unaff_RBP + -5);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -5,(longlong)&stack0x00000078 + 2,unaff_RBP + 0x2f
                                     );
        cVar7 = func_0x000140066d70(*puVar19,0);
        uVar32 = _iStack0000000000000058 & 0xffffffff;
        lVar17 = unaff_RBP[0x1d];
      } while (cVar7 != '\0');
      bVar38 = false;
      goto code_r0x000140110f92;
    }
  }
  else {
    func_0x000140070800(unaff_RBP + 0x43,unaff_RBP + -0x10);
    func_0x0001400707f0(unaff_RBP + 0x43,unaff_RBP + -4);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + -0x10,(longlong)&stack0x00000050 + 1,unaff_RBP + -4);
    cVar7 = func_0x000140066d70(*puVar19,0);
    while (cVar7 != '\0') {
      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10);
      if (*(int *)(*plVar22 + 0x58) != -1) {
        plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10);
        lVar17 = FUN_140073b30(0x142504188,*(undefined4 *)(*plVar22 + 0x58));
        if (lVar17 != 0) {
          if (*(longlong *)(lVar17 + 0x128) != 0) {
            _DAT_1424ffc60 = _DAT_1424ffc60 | 8;
            supplier_0xbaf40(0x1424ffc88,lVar17 + 0x128);
            iVar14 = -1;
            uVar29 = *(undefined8 *)(lVar17 + 0x128);
            func_0x000140070800(uVar29,unaff_RBP + -0xf);
            func_0x0001400707f0(uVar29,unaff_RBP + -0xc);
            cVar7 = func_0x0001400baf30(unaff_RBP + -0xf,unaff_RBP + -0xc);
            if (cVar7 == '\0') {
              do {
                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0xf);
                iVar16 = 0;
                piVar33 = (int *)(*plVar22 + 0x404);
                do {
                  if ((0 < *piVar33) && (bVar38 = iVar14 != -1, iVar14 = *piVar33, bVar38)) {
                    iVar14 = -2;
                    goto code_r0x00014010ef57;
                  }
                  iVar16 = iVar16 + 1;
                  piVar33 = piVar33 + 1;
                } while (iVar16 < 0x40);
                if (iVar14 == -1) break;
code_r0x00014010ef57:
                func_0x0001400703c0(unaff_RBP + -0xf);
                cVar7 = func_0x0001400baf30(unaff_RBP + -0xf,unaff_RBP + -0xc);
              } while (cVar7 == '\0');
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
            }
            *(undefined8 *)(lVar17 + 0x128) = 0;
            bVar38 = true;
          }
          func_0x000140100900(0x142504188,lVar17);
        }
      }
      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10);
      *(undefined4 *)(*plVar22 + 0x58) = 0xffffffff;
      func_0x0001400703c0(unaff_RBP + -0x10);
      puVar19 = (undefined1 *)
                func_0x0001400703e0(unaff_RBP + -0x10,(longlong)&stack0x00000050 + 1,unaff_RBP + -4)
      ;
      cVar7 = func_0x000140066d70(*puVar19,0);
    }
    func_0x000140070800(unaff_RBP + 0x2c,unaff_RBP + -9);
    func_0x0001400707f0(unaff_RBP + 0x2c,unaff_RBP + 8);
    puVar19 = (undefined1 *)
              func_0x0001400703e0(unaff_RBP + -9,(longlong)&stack0x00000050 + 1,unaff_RBP + 8);
    cVar7 = func_0x000140066d70(*puVar19,0);
    while (cVar7 != '\0') {
      plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -9);
      lVar17 = *plVar22;
      if ((*(int *)(lVar17 + 0x1d0) != -1) && (lVar18 = FUN_140073b30(0x142504188), lVar18 != 0)) {
        if (*(longlong *)(lVar18 + 0x128) != 0) {
          _DAT_1424ffc60 = _DAT_1424ffc60 | 8;
          supplier_0xbaf40(0x1424ffc88,lVar18 + 0x128);
          *(undefined8 *)(lVar18 + 0x128) = 0;
          bVar38 = true;
        }
        func_0x000140100900(0x142504188,lVar18);
      }
      FUN_140100ea0(lVar17,1);
      *(undefined4 *)(lVar17 + 0x1d0) = 0xffffffff;
      func_0x0001400703c0(unaff_RBP + -9);
      puVar19 = (undefined1 *)
                func_0x0001400703e0(unaff_RBP + -9,(longlong)&stack0x00000050 + 1,unaff_RBP + 8);
      cVar7 = func_0x000140066d70(*puVar19,0);
    }
    cVar7 = func_0x00014007f3f0(0x1423ad020,0x12d,iRam00000001418b821c);
    if (cVar7 != '\0') {
      lVar17 = supplier_0x70410(unaff_RBP + 0x10);
      if ((lVar17 == 1) || (lVar17 = supplier_0x70410(unaff_RBP + 0x2c), lVar17 == 0)) {
        supplier_0x70c50(unaff_RBP + 0xf2);
        supplier_0x70c50(unaff_RBP + 0x57);
        puVar20 = (undefined8 *)supplier_0x707e0(unaff_RBP + 0x10,0);
        FUN_141344290(*puVar20,unaff_RBP + 0x57,0);
        supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x57);
        uVar32 = supplier_0x70410(unaff_RBP + 0x10);
        if (uVar32 < 3) {
          lVar17 = supplier_0x70410(unaff_RBP + 0x10);
          if (lVar17 != 2) {
            puVar34 = &UNK_141613d00;
            goto code_r0x00014010f57f;
          }
          supplier_0x70b20(unaff_RBP + 0xf2,&UNK_1415ff340);
          supplier_0x70c50(unaff_RBP + 0x53);
          puVar20 = (undefined8 *)supplier_0x707e0(unaff_RBP + 0x10,1);
          FUN_141344290(*puVar20,unaff_RBP + 0x53,0);
          supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
          supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613cf0);
          supplier_0x693f0(unaff_RBP + 0x53);
        }
        else {
          puVar34 = &UNK_141613db0;
code_r0x00014010f57f:
          supplier_0x70b20(unaff_RBP + 0xf2,puVar34);
        }
        if ((iVar13 != -1) &&
           (plVar22 = (longlong *)FUN_14007eff0(0x142516038,iVar13), plVar22 != (longlong *)0x0)) {
          supplier_0x70c50(unaff_RBP + 0x53);
          supplier_0x73640(unaff_RBP + 0x5c);
          in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
          (**(code **)(*plVar22 + 0xd0))
                    (plVar22,unaff_RBP + 0x53,unaff_RBP + 0x5c,1,in_stack_00000020);
          cVar7 = func_0x000140070ae0(unaff_RBP + 0x53);
          if (cVar7 == '\0') {
            supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613d10);
            supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
          }
          supplier_0x693f0(unaff_RBP + 0x53);
        }
        func_0x00014007f1a0(unaff_RBP + 0x1e);
        *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
        *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
        *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
        *(short *)((longlong)unaff_RBP + 0xf6) = (short)*(undefined4 *)(unaff_RBP + -2);
        *(short *)(unaff_RBP + 0x1f) = (short)*(undefined4 *)(unaff_RBP + -3);
        *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
        FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
        supplier_0x693f0(unaff_RBP + 0x57);
      }
      else {
        lVar17 = supplier_0x70410(unaff_RBP + 0x2c);
        if (lVar17 == 1) {
          supplier_0x70c50(unaff_RBP + 0xf2);
          supplier_0x70c50(unaff_RBP + 0x57);
          plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
          cVar7 = func_0x000140070ae0(*plVar22 + 0x80);
          if (cVar7 == '\0') {
            plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
            puVar20 = (undefined8 *)(*plVar22 + 0x80);
          }
          else {
            plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
            report_squad_language_name(*plVar22 + 8,unaff_RBP + 0x57,1,0);
            puVar20 = unaff_RBP + 0x57;
          }
          supplier_0xbb2d0(unaff_RBP + 0xf2,puVar20);
          supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613cf0);
          if ((iVar13 != -1) &&
             (plVar22 = (longlong *)FUN_14007eff0(0x142516038,iVar13), plVar22 != (longlong *)0x0))
          {
            supplier_0x70c50(unaff_RBP + 0x53);
            supplier_0x73640(unaff_RBP + 0x5c);
            in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
            (**(code **)(*plVar22 + 0xd0))
                      (plVar22,unaff_RBP + 0x53,unaff_RBP + 0x5c,1,in_stack_00000020);
            cVar7 = func_0x000140070ae0(unaff_RBP + 0x53);
            if (cVar7 == '\0') {
              supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613d10);
              supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
            }
            supplier_0x693f0(unaff_RBP + 0x53);
          }
          func_0x00014007f1a0(unaff_RBP + 0x1e);
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
          *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
          *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
          *(short *)((longlong)unaff_RBP + 0xf6) = (short)*(undefined4 *)(unaff_RBP + -2);
          *(short *)(unaff_RBP + 0x1f) = (short)*(undefined4 *)(unaff_RBP + -3);
          *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
          FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
          supplier_0x693f0(unaff_RBP + 0x57);
        }
        else {
          supplier_0x70c50(unaff_RBP + 0xf2);
          supplier_0x70c50(unaff_RBP + 0x57);
          plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
          cVar7 = func_0x000140070ae0(*plVar22 + 0x80);
          if (cVar7 == '\0') {
            plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
            puVar20 = (undefined8 *)(*plVar22 + 0x80);
          }
          else {
            plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
            report_squad_language_name(*plVar22 + 8,unaff_RBP + 0x57,1,0);
            puVar20 = unaff_RBP + 0x57;
          }
          supplier_0xbb2d0(unaff_RBP + 0xf2,puVar20);
          supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613db0);
          if ((iVar13 != -1) &&
             (plVar22 = (longlong *)FUN_14007eff0(0x142516038,iVar13), plVar22 != (longlong *)0x0))
          {
            supplier_0x70c50(unaff_RBP + 0x53);
            supplier_0x73640(unaff_RBP + 0x5c);
            in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
            (**(code **)(*plVar22 + 0xd0))
                      (plVar22,unaff_RBP + 0x53,unaff_RBP + 0x5c,1,in_stack_00000020);
            cVar7 = func_0x000140070ae0(unaff_RBP + 0x53);
            if (cVar7 == '\0') {
              supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613d10);
              supplier_0xbb2d0(unaff_RBP + 0xf2,unaff_RBP + 0x53);
            }
            supplier_0x693f0(unaff_RBP + 0x53);
          }
          func_0x00014007f1a0(unaff_RBP + 0x1e);
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x2012d;
          *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
          *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
          *(short *)((longlong)unaff_RBP + 0xf6) = (short)*(undefined4 *)(unaff_RBP + -2);
          *(short *)(unaff_RBP + 0x1f) = (short)*(undefined4 *)(unaff_RBP + -3);
          *(ushort *)((longlong)unaff_RBP + 0xfa) = uStack0000000000000054;
          FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2,unaff_RBP + 0x1e);
          supplier_0x693f0(unaff_RBP + 0x57);
        }
      }
      supplier_0x693f0(unaff_RBP + 0xf2);
    }
    func_0x000140070800(unaff_RBP + 0x10,&stack0x00000060);
    func_0x0001400707f0(unaff_RBP + 0x10,unaff_RBP + 0xc);
    while (in_stack_00000060 < (ulonglong)unaff_RBP[0xc]) {
      puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000060);
      lVar17 = func_0x0001413c6dc0(*puVar20);
      if (lVar17 == 0) {
code_r0x00014010fcb6:
        in_stack_00000060 = in_stack_00000060 + 8;
      }
      else {
        if ((((*(longlong *)(lVar17 + 0x130) == 0) ||
             (psVar30 = *(short **)(*(longlong *)(lVar17 + 0x130) + 0x28), psVar30 == (short *)0x0))
            || (*(int *)(psVar30 + 2) != iRam00000001423af9f4)) || (*psVar30 != 1)) {
          plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000060);
          lVar17 = *plVar22;
          if ((*(longlong *)(lVar17 + 0xa98) != 0) &&
             (cVar7 = func_0x0001400747f0(lVar17,0x3a), cVar7 != '\0')) {
            if (*(longlong *)(lVar17 + 0x1268) == 0) {
              uVar29 = FUN_14154de30(0x38);
              unaff_RBP[0x3b] = uVar29;
              uVar29 = FUN_1400ff1f0(uVar29);
              *(undefined8 *)(lVar17 + 0x1268) = uVar29;
            }
            else {
              FUN_1400ff240();
            }
            *(undefined4 *)(*(longlong *)(lVar17 + 0x1268) + 0x2c) = 0x4b;
            *(undefined4 *)(*(longlong *)(lVar17 + 0x1268) + 0x30) = 0xffffffff;
            uVar29 = FUN_14154de30(0x24);
            unaff_RBP[0x3e] = uVar29;
            puVar25 = (undefined4 *)func_0x0001400ff1c0(uVar29);
            unaff_RBP[0x15] = puVar25;
            *puVar25 = 9;
            *(undefined4 *)(unaff_RBP[0x15] + 0x1c) = *(undefined4 *)(lVar17 + 0x130);
            supplier_0xbaf40(*(undefined8 *)(lVar17 + 0x1268),unaff_RBP + 0x15);
            *(int *)(*(longlong *)(lVar17 + 0x1268) + 0x1c) = _DAT_142161ab8;
            *(int *)(*(longlong *)(lVar17 + 0x1268) + 0x20) = _DAT_1423a424c + 0x31380;
            if (0x626ff < *(int *)(*(longlong *)(lVar17 + 0x1268) + 0x20)) {
              piVar33 = (int *)(*(longlong *)(lVar17 + 0x1268) + 0x1c);
              *piVar33 = *piVar33 + 1;
              piVar33 = (int *)(*(longlong *)(lVar17 + 0x1268) + 0x20);
              *piVar33 = *piVar33 + -0x62700;
            }
          }
          goto code_r0x00014010fcb6;
        }
        func_0x000140070800(0x14240a2d8,unaff_RBP + -0xf);
        func_0x0001400707f0(0x14240a2d8,unaff_RBP + -0xc);
        cVar7 = func_0x0001400baf30(unaff_RBP + -0xf,unaff_RBP + -0xc);
        while (cVar7 == '\0') {
          plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0xf);
          plVar22 = (longlong *)*plVar22;
          plVar28 = (longlong *)func_0x0001400703d0(&stack0x00000060);
          if ((int)plVar22[0x34] == *(int *)(*plVar28 + 0x130)) {
            puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000060);
            FUN_141381800(*puVar20,plVar22);
            puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000060);
            lVar18 = FUN_1413628b0(*puVar20,1);
            if ((lVar18 != 0) && (cVar7 = (**(code **)(*plVar22 + 0x1c8))(plVar22), cVar7 != '\0'))
            {
              func_0x0001400703d0(&stack0x00000060);
              FUN_141381800(lVar18,plVar22);
            }
          }
          func_0x0001400703c0(unaff_RBP + -0xf);
          cVar7 = func_0x0001400baf30(unaff_RBP + -0xf,unaff_RBP + -0xc);
        }
        plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000060);
        func_0x000140070800(*plVar22 + 0x408,unaff_RBP + -5);
        plVar22 = (longlong *)func_0x0001400703d0(&stack0x00000060);
        func_0x0001400707f0(*plVar22 + 0x408,unaff_RBP + 7);
        puVar19 = (undefined1 *)func_0x0001400703e0(unaff_RBP + -5,(longlong)&stack0x00000050 + 1);
        cVar7 = func_0x000140066d70(*puVar19,0);
        while (cVar7 != '\0') {
          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -5);
          FUN_140ca5050(*(undefined8 *)*puVar20,0);
          func_0x0001400703c0(unaff_RBP + -5);
          puVar19 = (undefined1 *)func_0x0001400703e0(unaff_RBP + -5);
          cVar7 = func_0x000140066d70(*puVar19);
        }
        puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000060);
        cVar7 = func_0x0001400747f0(*puVar20,0x3a);
        if (cVar7 == '\0') goto code_r0x00014010fcb6;
        iVar13 = 0;
        if ((*(longlong *)(lVar17 + 0x130) == 0) ||
           (lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x40), lVar18 == 0))
        goto code_r0x00014010fcb6;
        func_0x000140070800(lVar18 + 0x68,unaff_RBP + -0xd);
        func_0x0001400707f0(*(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x40) + 0x68,
                            unaff_RBP + -0xb);
        puVar19 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -0xd,(longlong)&stack0x00000050 + 2,
                                      unaff_RBP + -0xb);
        cVar7 = func_0x000140066d70(*puVar19,0);
        while (cVar7 != '\0') {
          puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0xd);
          cVar7 = func_0x0001400742d0(*puVar20,_DAT_142161ab8,_DAT_1423a424c);
          lVar18 = _DAT_1423b6568;
          iVar14 = _DAT_142161ab8;
          if (cVar7 != '\0') {
            puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0xd);
            iVar14 = FUN_141408f20(lVar18 + 0x1250,*puVar20,iVar14);
            if (iVar14 == 0) {
              puVar20 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0xd);
              cVar7 = func_0x0001400bae20(*puVar20);
              if (cVar7 != '\0') {
                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0xd);
                iVar14 = _DAT_142161ab8 - *(int *)(*plVar22 + 0x18);
                plVar22 = (longlong *)func_0x0001400703d0(unaff_RBP + -0xd);
                if ((iVar14 * 0x62700 - *(int *)(*plVar22 + 0x1c)) + _DAT_1423a424c < 0xc4e00) {
                  iVar13 = iVar13 + 1;
                }
              }
            }
          }
          func_0x0001400703c0(unaff_RBP + -0xd);
          puVar19 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + -0xd,(longlong)&stack0x00000050 + 2,
                                        unaff_RBP + -0xb);
          cVar7 = func_0x000140066d70(*puVar19,0);
        }
        puVar20 = (undefined8 *)
                  func_0x000140070800(*(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x40) + 0x68,
                                      unaff_RBP + 0x3c);
        puVar20 = (undefined8 *)*puVar20;
        while( true ) {
          unaff_RBP[-0xd] = puVar20;
          if ((puVar20 == (undefined8 *)unaff_RBP[-0xb]) ||
             ((undefined8 *)unaff_RBP[-0xb] <= puVar20)) break;
          supplier_0x154de20(*puVar20,0x28);
          puVar20 = (undefined8 *)(unaff_RBP[-0xd] + 8);
        }
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x130) + 0x40);
        if (*(longlong *)(lVar17 + 0x68) != *(longlong *)(lVar17 + 0x70)) {
          *(longlong *)(lVar17 + 0x70) = *(longlong *)(lVar17 + 0x68);
        }
        if (iVar13 < 1) goto code_r0x00014010fcb6;
        if (iRam00000001418b821c == 0) {
          if ((bRam00000001423ad530 & 0x70) != 0) goto code_r0x00014010fab5;
          in_stack_00000060 = in_stack_00000060 + 8;
        }
        else {
          if ((bRam00000001423ad530 & 8) == 0) goto code_r0x00014010fcb6;
code_r0x00014010fab5:
          supplier_0x70c50(unaff_RBP + 0xf2,puVar20);
          puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000060);
          FUN_141344b60(*puVar20,unaff_RBP + 0xf2);
          FUN_140544330(unaff_RBP + 0xf2);
          if (iVar13 < 5) {
            puVar34 = &UNK_141613d48;
            if (iVar13 < 2) {
              puVar34 = &UNK_141613d68;
            }
          }
          else {
            supplier_0x70b20(unaff_RBP + 0xf2,&UNK_141613d18);
            report_site_name(0x142516038,unaff_RBP + 0xf2,iRam00000001423af9f4);
            puVar34 = &UNK_1415fe7e4;
          }
          supplier_0x70b20(unaff_RBP + 0xf2,puVar34);
          func_0x00014007f1a0(unaff_RBP + 0x1e);
          *(undefined4 *)(unaff_RBP + 0x1e) = 0x30144;
          *(undefined1 *)((longlong)unaff_RBP + 0xf4) = 1;
          *(undefined2 *)((longlong)unaff_RBP + 0x10c) = 2000;
          FUN_1400e51e0(0x1424ffbd0,unaff_RBP + 0xf2);
          supplier_0x693f0(unaff_RBP + 0xf2);
          in_stack_00000060 = in_stack_00000060 + 8;
        }
      }
    }
code_r0x000140110f92:
    lVar17 = unaff_RBP[-10];
  }
  lVar18 = supplier_0x70410(lVar17 + 0x130);
  if ((lVar18 == 0) && (lVar18 = supplier_0x70930(unaff_RBP + 0x40), lVar18 == 0)) {
LAB_1401116ec:
    func_0x000140070d00(unaff_RBP + 10,unaff_RBP[0x10],unaff_RBP + 0x10);
    func_0x000140070d00(unaff_RBP + 0x47,unaff_RBP[0x11],unaff_RBP + 0x10);
    puVar20 = (undefined8 *)unaff_RBP[10];
    while (puVar20 < (undefined8 *)unaff_RBP[0x47]) {
      if (((longlong)(unaff_RBP[0x2d] - unaff_RBP[0x2c]) >> 3 != 0) ||
         ((longlong)(unaff_RBP[0x44] - unaff_RBP[0x43]) >> 3 != 0)) {
        FUN_140074da0(*puVar20,7,0x9c4);
        FUN_140074da0(*(undefined8 *)unaff_RBP[10],8,0x189c0);
        puVar20 = (undefined8 *)unaff_RBP[10];
      }
      FUN_140074da0(*puVar20,0x18,1);
      FUN_1400ff320(*(undefined8 *)unaff_RBP[10],0x10);
      *(uint *)(*(longlong *)unaff_RBP[10] + 0x110) =
           *(uint *)(*(longlong *)unaff_RBP[10] + 0x110) | 2;
      *(uint *)(*(longlong *)unaff_RBP[10] + 0x110) =
           *(uint *)(*(longlong *)unaff_RBP[10] + 0x110) | 0x400;
      *(uint *)(*(longlong *)unaff_RBP[10] + 0x114) =
           *(uint *)(*(longlong *)unaff_RBP[10] + 0x114) & 0xfffffffb;
      puVar20 = (undefined8 *)(unaff_RBP[10] + 8);
      unaff_RBP[10] = puVar20;
    }
    lVar17 = unaff_RBP[-10];
    if (*(longlong *)(lVar17 + 0x20) != *(longlong *)(lVar17 + 0x28)) {
      *(longlong *)(lVar17 + 0x28) = *(longlong *)(lVar17 + 0x20);
    }
    FUN_140acadd0();
    FUN_140070d10(unaff_RBP + 0x48);
    FUN_140070d10(unaff_RBP + 0x4b);
    FUN_140070d10(unaff_RBP + 0x40);
    FUN_140068130(unaff_RBP + 0x43);
    FUN_140068130(unaff_RBP + 0x2c);
    FUN_140068130(unaff_RBP + 0x10);
    FUN_14154de00(unaff_RBP[0xf7] ^ (ulonglong)&stack0x00000000);
    return;
  }
  if (!bVar38) {
    lVar18 = supplier_0x70410(lVar17 + 0x130);
    if (lVar18 != 0) {
      func_0x0001400670c0(unaff_RBP + 0x53);
      func_0x000140070800(unaff_RBP + 0x10,&stack0x00000070);
      func_0x0001400707f0(unaff_RBP + 0x10,unaff_RBP + 0xc);
      for (; in_stack_00000070 < (undefined8 *)unaff_RBP[0xc];
          in_stack_00000070 = in_stack_00000070 + 1) {
        cVar7 = func_0x0001413a2370(*in_stack_00000070);
        if (cVar7 != '\0') {
          puVar20 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
          cVar7 = func_0x0001400747f0(*puVar20,0x3a);
          if (cVar7 != '\0') {
            uVar29 = func_0x0001400703d0(&stack0x00000070);
            supplier_0xbaf40(unaff_RBP + 0x53,uVar29);
          }
        }
      }
      FUN_1401119e0(unaff_RBP + 0x17,unaff_RBP + 0x53);
      puVar20 = *(undefined8 **)(lVar17 + 0x130);
      lVar18 = *(longlong *)(lVar17 + 0x138) - (longlong)puVar20;
      while (lVar18 >> 3 != 0) {
        uVar29 = *puVar20;
        *(undefined4 *)(unaff_RBP + 0x57) = 0xffffffff;
        unaff_RBP[0x58] = 0;
        unaff_RBP[0x59] = 0;
        FUN_140ca0920(uVar29,unaff_RBP + 0x57,0);
        if (*(int *)(unaff_RBP + 0x57) == 4) {
          uVar29 = unaff_RBP[0x58];
        }
        func_0x0001400670c0(unaff_RBP + 0xd);
        func_0x0001400670c0(unaff_RBP + 0xf2);
        FUN_140cded10(uVar29,unaff_RBP + 0xd,unaff_RBP + 0xf2);
        func_0x000140070d00(unaff_RBP + -0xf,unaff_RBP[0xd],unaff_RBP + 0xd);
        func_0x000140070d00(unaff_RBP + 0xb,unaff_RBP[0xe]);
        puVar20 = (undefined8 *)unaff_RBP[-0xf];
        while (uVar39 = (undefined4)(in_stack_00000020 >> 0x20),
              puVar20 < (undefined8 *)unaff_RBP[0xb]) {
          (**(code **)(*(longlong *)*puVar20 + 0x328))((longlong *)*puVar20,1);
          iVar13 = func_0x0001400bbbc0(*(undefined8 *)unaff_RBP[-0xf],lVar17 + 0x130);
          if (iVar13 != -1) {
            FUN_1400baf60(lVar17 + 0x130,(longlong)iVar13);
          }
          puVar20 = (undefined8 *)(unaff_RBP[-0xf] + 8);
          unaff_RBP[-0xf] = puVar20;
        }
        lVar18 = unaff_RBP[0x17];
        uVar32 = unaff_RBP[0x18] - lVar18 >> 3;
        if (uVar32 != 0) {
          if ((uint)uVar32 < 2) {
            uVar15 = 0;
          }
          else {
            uVar15 = FUN_140ec94e0();
            uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar32 & 0xffffffff)) + 1U);
            lVar18 = unaff_RBP[0x17];
          }
          uVar23 = *(undefined8 *)(lVar18 + (longlong)(int)uVar15 * 8);
          FUN_1400baf60(unaff_RBP + 0x17);
          in_stack_00000020 = CONCAT44(uVar39,0xffffffff);
          FUN_14133c010(uVar23,uVar29,0,0xffffffff,in_stack_00000020);
          if ((unaff_RBP[0x18] - unaff_RBP[0x17] & 0xfffffffffffffff8) == 0) {
            FUN_1400f9a60(unaff_RBP + 0x17,unaff_RBP + 0x53);
          }
        }
        FUN_140068130(unaff_RBP + 0xf2);
        FUN_140068130(unaff_RBP + 0xd);
        puVar20 = *(undefined8 **)(lVar17 + 0x130);
        lVar18 = *(longlong *)(lVar17 + 0x138) - (longlong)puVar20;
      }
      FUN_140068130(unaff_RBP + 0x17);
      FUN_140068130(unaff_RBP + 0x53);
    }
    goto LAB_1401116ec;
  }
  uVar29 = FUN_14154de30(0xf0);
  unaff_RBP[0x46] = uVar29;
  _iStack0000000000000058 = supplier_0xffc50(uVar29);
  supplier_0x70b40(_iStack0000000000000058,"Spoils Report: ");
  lVar17 = supplier_0x70410(unaff_RBP + 0x2c);
  if (lVar17 != 0) {
    supplier_0x70c50(unaff_RBP + 0xf2);
    plVar22 = (longlong *)supplier_0x707e0(unaff_RBP + 0x2c,0);
    report_squad_language_name(*plVar22 + 8,unaff_RBP + 0xf2,1,0);
    supplier_0xbb2d0(_iStack0000000000000058,unaff_RBP + 0xf2);
    uVar32 = supplier_0x70410(unaff_RBP + 0x2c);
    if (1 < uVar32) {
      supplier_0x70b20(_iStack0000000000000058," and others");
    }
    supplier_0x70b20(_iStack0000000000000058,", ");
    supplier_0x693f0(unaff_RBP + 0xf2);
  }
  if (DAT_1418f3196 == '\0') {
    pcVar35 = "Spring";
  }
  else if (DAT_1418f3196 == '\x01') {
    pcVar35 = "Summer";
  }
  else if (DAT_1418f3196 == '\x02') {
    pcVar35 = "Autumn";
  }
  else {
    if (DAT_1418f3196 != '\x03') goto LAB_1401110d4;
    pcVar35 = "Winter";
  }
  supplier_0x70b20(_iStack0000000000000058,pcVar35);
LAB_1401110d4:
  supplier_0x70b20(_iStack0000000000000058," ");
  report_year_decimal(_DAT_142161ab8,_iStack0000000000000058);
  *(int *)(_iStack0000000000000058 + 0x24) = _DAT_142161ab8;
  *(int *)(_iStack0000000000000058 + 0x28) = _DAT_1423a424c;
  *(uint *)(_iStack0000000000000058 + 0x20) = *(uint *)(_iStack0000000000000058 + 0x20) | 2;
  _DAT_1424ffc60 = _DAT_1424ffc60 | 0x10;
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x1c44e0; spoils-detail-heading-region; RVA 0x1d33ce..0x1d347b; actual Ghidra 12.1.4 C output. */

void report_spoils_detail_heading_region(void)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  int iVar3;
  longlong in_stack_00000078;
  
  FUN_140070b90(unaff_RBP + 0x13d0,*(undefined8 *)(in_stack_00000078 + 0x83d8));
  iVar3 = unaff_EDI - unaff_ESI;
  uVar1 = supplier_0x708f0(unaff_RBP + 0x13d0);
  if ((ulonglong)(longlong)(iVar3 + -2) <= uVar1) {
    if (-1 < iVar3 + -3) {
      supplier_0xe27f0(unaff_RBP + 0x13d0,(longlong)iVar3 + -3,0);
    }
    if (3 < iVar3 + -3) {
      puVar2 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13d0,(longlong)iVar3 + -6);
      *puVar2 = 0x2e;
      puVar2 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13d0,(longlong)(iVar3 + -5));
      *puVar2 = 0x2e;
      puVar2 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13d0,(longlong)(iVar3 + -4));
      *puVar2 = 0x2e;
    }
  }
  return;
}


/* classic; 0x542fb0; year-decimal; RVA 0x542fb0..0x543063; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_year_decimal(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_58;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0xf;
  pppuStack_38 = (undefined8 ****)0x0;
  report_year_decimal_core(0,&pppuStack_38);
  ppppuVar2 = &pppuStack_38;
  if (0xf < uStack_20) {
    ppppuVar2 = (undefined8 ****)pppuStack_38;
  }
  FUN_140070fd0(param_2,ppppuVar2,uStack_28);
  if (0xf < uStack_20) {
    uVar3 = uStack_20 + 1;
    ppppuVar2 = (undefined8 ****)pppuStack_38;
    if (0xfff < uVar3) {
      uVar3 = uStack_20 + 0x28;
      ppppuVar2 = (undefined8 ****)pppuStack_38[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar2))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    supplier_0x154de20(ppppuVar2,uVar3);
  }
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* classic; 0x543070; year-decimal-core; RVA 0x543070..0x543148; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_year_decimal_core(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [44];
  int iStack_12c;
  longlong lStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [120];
  undefined1 auStack_a0 [104];
  undefined1 auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_158;
  FUN_1402480a0(&lStack_128);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_H_Z(&lStack_128,param_1);
  FUN_140248370(auStack_120,auStack_38);
  FUN_1401fc910(param_2,auStack_38);
  FUN_140070e10(auStack_38);
  *(undefined **)(auStack_120 + (longlong)*(int *)(lStack_128 + 4) + -8) = &UNK_14162c7f8;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(lStack_128 + 4)) =
       *(int *)(lStack_128 + 4) + -0x88;
  FUN_140247fb0(auStack_120);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_118);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_a0);
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_158);
  return;
}


/* classic; 0x13e0f0; squad-vector-owner; RVA 0x13e0f0..0x13e1e5; actual Ghidra 12.1.4 C output. */

ulonglong report_squad_vector_owner(int *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int *piStackX_8;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = (undefined8 *)*param_2;
  uVar4 = (longlong)puVar1 - (longlong)puVar3 >> 3;
  if (0 < (longlong)uVar4) {
    do {
      uVar2 = uVar4 >> 1;
      if (*(int *)puVar3[uVar2] < *param_1) {
        puVar3 = puVar3 + uVar2 + 1;
        uVar2 = uVar4 + (-1 - uVar2);
      }
      uVar4 = uVar2;
    } while (0 < (longlong)uVar2);
  }
  if ((puVar3 != puVar1) && (*(int *)*puVar3 == *param_1)) {
    return 0xffffffff;
  }
  piStackX_8 = param_1;
  if (puVar1 == (undefined8 *)param_2[2]) {
    FUN_140072190(param_2,puVar3,&piStackX_8);
  }
  else if (puVar3 == puVar1) {
    *puVar1 = param_1;
    param_2[1] = param_2[1] + 8;
  }
  else {
    *puVar1 = puVar1[-1];
    param_2[1] = param_2[1] + 8;
    supplier_0x154f5ba(puVar3 + 1,puVar3);
    *puVar3 = param_1;
  }
  return (longlong)puVar3 - *param_2 >> 3 & 0xffffffff;
}


/* classic; 0xba8410; site-name; RVA 0xba8410..0xba856a; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_site_name(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *****pppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ****ppppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14007f0e0(_DAT_142507ed8,param_3);
  if (lVar2 == 0) {
    FUN_140070fd0(param_2,"an unknown site",0xf);
  }
  else {
    if ((param_4 & 2) != 0) {
      FUN_140070fd0(param_2,"[LPAGE:SITE:",0xc);
      report_year_decimal(*(undefined4 *)(lVar2 + 0x88),param_2);
      FUN_140070fd0(param_2,"]",1);
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    ppppuStack_38 = (undefined8 *****)0x0;
    report_squad_language_name(lVar2,&ppppuStack_38,1,0);
    pppppuVar3 = &ppppuStack_38;
    if (0xf < uStack_20) {
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
    }
    FUN_140070fd0(param_2,pppppuVar3,uStack_28);
    if ((param_4 & 2) != 0) {
      FUN_140070fd0(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      pppppuVar3 = (undefined8 *****)ppppuStack_38;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        pppppuVar3 = (undefined8 *****)ppppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)ppppuStack_38 + (-8 - (longlong)pppppuVar3))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      supplier_0x154de20(pppppuVar3,uVar4);
    }
  }
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* classic; 0x1bdb90; diplomatic-proposal; RVA 0x1bdb90..0x1bdd00; actual Ghidra 12.1.4 C output. */

void report_diplomatic_proposal(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  
  psVar2 = (short *)param_1[1];
  psVar1 = (short *)*param_1;
  for (psVar4 = psVar1; psVar3 = psVar1, psVar4 < psVar2; psVar4 = psVar4 + 1) {
    if (*psVar4 == 10) {
      if ((int)((longlong)psVar4 - (longlong)psVar1 >> 1) != -1) {
        FUN_140070e90(param_2,"Demand surrender",0x10);
        return;
      }
      break;
    }
  }
  do {
    psVar4 = psVar1;
    if (psVar2 <= psVar3) break;
    if (*psVar3 == 1) {
      if ((int)((longlong)psVar3 - (longlong)psVar1 >> 1) != -1) {
        FUN_140070e90(param_2,"Make peace",10);
        return;
      }
      break;
    }
    psVar3 = psVar3 + 1;
  } while( true );
LAB_1401bdc10:
  psVar3 = psVar1;
  if (psVar2 <= psVar4) goto LAB_1401bdc44;
  if (*psVar4 == 0xd) {
    if ((int)((longlong)psVar4 - (longlong)psVar1 >> 1) != -1) {
      FUN_140070e90(param_2,"Declare war",0xb);
      return;
    }
    goto LAB_1401bdc44;
  }
  psVar4 = psVar4 + 1;
  goto LAB_1401bdc10;
LAB_1401bdc44:
  psVar4 = psVar1;
  if (psVar2 <= psVar3) goto LAB_1401bdc78;
  if (*psVar3 == 0xe) {
    if ((int)((longlong)psVar3 - (longlong)psVar1 >> 1) != -1) {
      FUN_140070e90(param_2,"Seek alliance",0xd);
      return;
    }
    goto LAB_1401bdc78;
  }
  psVar3 = psVar3 + 1;
  goto LAB_1401bdc44;
LAB_1401bdc78:
  psVar3 = psVar1;
  if (psVar2 <= psVar4) goto LAB_1401bdcb0;
  if (*psVar4 == 0xf) {
    if ((int)((longlong)psVar4 - (longlong)psVar1 >> 1) != -1) {
      FUN_140070e90(param_2,"Make contact",0xc);
      return;
    }
    goto LAB_1401bdcb0;
  }
  psVar4 = psVar4 + 1;
  goto LAB_1401bdc78;
LAB_1401bdcb0:
  if (psVar2 <= psVar3) {
LAB_1401bdce3:
    FUN_140070e90(param_2,"Diplomacy",9);
    return;
  }
  if (*psVar3 == 0x10) {
    if ((int)((longlong)psVar3 - (longlong)psVar1 >> 1) != -1) {
      FUN_140070e90(param_2,"Improve trade",0xd);
      return;
    }
    goto LAB_1401bdce3;
  }
  psVar3 = psVar3 + 1;
  goto LAB_1401bdcb0;
}


/* classic; 0xba73e0; tribute-entity-name; RVA 0xba73e0..0xba7558; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_tribute_entity_name(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 ***pppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_58;
  if (((_DAT_1423edb80 - _DAT_1423edb78 & 0xfffffffffffffff8U) == 0) || (param_3 == -1)) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1400bb660(param_3,&DAT_1423edb78);
  }
  if (lVar2 == 0) {
    FUN_140070fd0(param_2,"an unknown civilization",0x17);
  }
  else {
    if ((param_4 & 2) != 0) {
      FUN_140070fd0(param_2,"[LPAGE:ENT:",0xb);
      report_year_decimal(*(undefined4 *)(lVar2 + 4),param_2);
      FUN_140070fd0(param_2,"]",1);
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    pppuStack_38 = (undefined8 ****)0x0;
    report_squad_language_name(lVar2 + 0x20,&pppuStack_38,1,0);
    ppppuVar3 = &pppuStack_38;
    if (0xf < uStack_20) {
      ppppuVar3 = (undefined8 ****)pppuStack_38;
    }
    FUN_140070fd0(param_2,ppppuVar3,uStack_28);
    if ((param_4 & 2) != 0) {
      FUN_140070fd0(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_20) {
      uVar4 = uStack_20 + 1;
      ppppuVar3 = (undefined8 ****)pppuStack_38;
      if (0xfff < uVar4) {
        uVar4 = uStack_20 + 0x28;
        ppppuVar3 = (undefined8 ****)pppuStack_38[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_38 + (-8 - (longlong)ppppuVar3))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      supplier_0x154de20(ppppuVar3,uVar4);
    }
  }
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x10c780; spoils-title-region; RVA 0x110f96..0x111132; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_spoils_title_region(void)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  longlong unaff_RBP;
  char unaff_R13B;
  longlong unaff_R14;
  undefined8 *in_stack_00000070;
  
  lVar6 = supplier_0x70410(unaff_R14 + 0x130);
  if ((lVar6 == 0) && (lVar6 = supplier_0x70930(unaff_RBP + 0x200), lVar6 == 0)) {
LAB_1401116ec:
    func_0x000140070d00(unaff_RBP + 0x50,*(undefined8 *)(unaff_RBP + 0x80),unaff_RBP + 0x80);
    func_0x000140070d00(unaff_RBP + 0x238,*(undefined8 *)(unaff_RBP + 0x88),unaff_RBP + 0x80);
    puVar11 = *(undefined8 **)(unaff_RBP + 0x50);
    while (puVar11 < *(undefined8 **)(unaff_RBP + 0x238)) {
      if ((*(longlong *)(unaff_RBP + 0x168) - *(longlong *)(unaff_RBP + 0x160) >> 3 != 0) ||
         (*(longlong *)(unaff_RBP + 0x220) - *(longlong *)(unaff_RBP + 0x218) >> 3 != 0)) {
        FUN_140074da0(*puVar11,7,0x9c4);
        FUN_140074da0(**(undefined8 **)(unaff_RBP + 0x50),8,0x189c0);
        puVar11 = *(undefined8 **)(unaff_RBP + 0x50);
      }
      FUN_140074da0(*puVar11,0x18,1);
      FUN_1400ff320(**(undefined8 **)(unaff_RBP + 0x50),0x10);
      puVar1 = (uint *)(**(longlong **)(unaff_RBP + 0x50) + 0x110);
      *puVar1 = *puVar1 | 2;
      puVar1 = (uint *)(**(longlong **)(unaff_RBP + 0x50) + 0x110);
      *puVar1 = *puVar1 | 0x400;
      puVar1 = (uint *)(**(longlong **)(unaff_RBP + 0x50) + 0x114);
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar11 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x50) + 8);
      *(undefined8 **)(unaff_RBP + 0x50) = puVar11;
    }
    lVar6 = *(longlong *)(unaff_RBP + -0x50);
    if (*(longlong *)(lVar6 + 0x20) != *(longlong *)(lVar6 + 0x28)) {
      *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x20);
    }
    FUN_140acadd0();
    FUN_140070d10(unaff_RBP + 0x240);
    FUN_140070d10(unaff_RBP + 600);
    FUN_140070d10(unaff_RBP + 0x200);
    FUN_140068130(unaff_RBP + 0x218);
    FUN_140068130(unaff_RBP + 0x160);
    FUN_140068130(unaff_RBP + 0x80);
    FUN_14154de00(*(ulonglong *)(unaff_RBP + 0x7b8) ^ (ulonglong)&stack0x00000000);
    return;
  }
  if (unaff_R13B == '\0') {
    lVar6 = supplier_0x70410(unaff_R14 + 0x130);
    if (lVar6 != 0) {
      func_0x0001400670c0(unaff_RBP + 0x298);
      func_0x000140070800(unaff_RBP + 0x80,&stack0x00000070);
      func_0x0001400707f0(unaff_RBP + 0x80,unaff_RBP + 0x60);
      for (; in_stack_00000070 < *(undefined8 **)(unaff_RBP + 0x60);
          in_stack_00000070 = in_stack_00000070 + 1) {
        cVar3 = func_0x0001413a2370(*in_stack_00000070);
        if (cVar3 != '\0') {
          puVar11 = (undefined8 *)func_0x0001400703d0(&stack0x00000070);
          cVar3 = func_0x0001400747f0(*puVar11,0x3a);
          if (cVar3 != '\0') {
            uVar7 = func_0x0001400703d0(&stack0x00000070);
            supplier_0xbaf40(unaff_RBP + 0x298,uVar7);
          }
        }
      }
      FUN_1401119e0(unaff_RBP + 0xb8,unaff_RBP + 0x298);
      puVar11 = *(undefined8 **)(unaff_R14 + 0x130);
      lVar6 = *(longlong *)(unaff_R14 + 0x138) - (longlong)puVar11;
      while (lVar6 >> 3 != 0) {
        uVar7 = *puVar11;
        *(undefined4 *)(unaff_RBP + 0x2b8) = 0xffffffff;
        *(undefined8 *)(unaff_RBP + 0x2c0) = 0;
        *(undefined8 *)(unaff_RBP + 0x2c8) = 0;
        FUN_140ca0920(uVar7,unaff_RBP + 0x2b8,0);
        if (*(int *)(unaff_RBP + 0x2b8) == 4) {
          uVar7 = *(undefined8 *)(unaff_RBP + 0x2c0);
        }
        func_0x0001400670c0(unaff_RBP + 0x68);
        func_0x0001400670c0(unaff_RBP + 0x790);
        FUN_140cded10(uVar7,unaff_RBP + 0x68,unaff_RBP + 0x790);
        func_0x000140070d00(unaff_RBP + -0x78,*(undefined8 *)(unaff_RBP + 0x68),unaff_RBP + 0x68);
        func_0x000140070d00(unaff_RBP + 0x58,*(undefined8 *)(unaff_RBP + 0x70));
        puVar11 = *(undefined8 **)(unaff_RBP + -0x78);
        while (puVar11 < *(undefined8 **)(unaff_RBP + 0x58)) {
          (**(code **)(*(longlong *)*puVar11 + 0x328))((longlong *)*puVar11,1);
          iVar4 = func_0x0001400bbbc0(**(undefined8 **)(unaff_RBP + -0x78),unaff_R14 + 0x130);
          if (iVar4 != -1) {
            FUN_1400baf60(unaff_R14 + 0x130,(longlong)iVar4);
          }
          puVar11 = (undefined8 *)(*(longlong *)(unaff_RBP + -0x78) + 8);
          *(undefined8 **)(unaff_RBP + -0x78) = puVar11;
        }
        lVar6 = *(longlong *)(unaff_RBP + 0xb8);
        uVar10 = *(longlong *)(unaff_RBP + 0xc0) - lVar6 >> 3;
        if (uVar10 != 0) {
          if ((uint)uVar10 < 2) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_140ec94e0();
            uVar5 = (uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff)
                    / ((int)(0x7fffffff / (uVar10 & 0xffffffff)) + 1U);
            lVar6 = *(longlong *)(unaff_RBP + 0xb8);
          }
          uVar2 = *(undefined8 *)(lVar6 + (longlong)(int)uVar5 * 8);
          FUN_1400baf60(unaff_RBP + 0xb8);
          FUN_14133c010(uVar2,uVar7,0,0xffffffff,0xffffffff);
          if ((*(longlong *)(unaff_RBP + 0xc0) - *(longlong *)(unaff_RBP + 0xb8) &
              0xfffffffffffffff8U) == 0) {
            FUN_1400f9a60(unaff_RBP + 0xb8,unaff_RBP + 0x298);
          }
        }
        FUN_140068130(unaff_RBP + 0x790);
        FUN_140068130(unaff_RBP + 0x68);
        puVar11 = *(undefined8 **)(unaff_R14 + 0x130);
        lVar6 = *(longlong *)(unaff_R14 + 0x138) - (longlong)puVar11;
      }
      FUN_140068130(unaff_RBP + 0xb8);
      FUN_140068130(unaff_RBP + 0x298);
    }
    goto LAB_1401116ec;
  }
  uVar7 = FUN_14154de30(0xf0);
  *(undefined8 *)(unaff_RBP + 0x230) = uVar7;
  lVar6 = supplier_0xffc50(uVar7);
  supplier_0x70b40(lVar6,"Spoils Report: ");
  lVar8 = supplier_0x70410(unaff_RBP + 0x160);
  if (lVar8 != 0) {
    supplier_0x70c50(unaff_RBP + 0x790);
    plVar9 = (longlong *)supplier_0x707e0(unaff_RBP + 0x160,0);
    report_squad_language_name(*plVar9 + 8,unaff_RBP + 0x790,1,0);
    supplier_0xbb2d0(lVar6,unaff_RBP + 0x790);
    uVar10 = supplier_0x70410(unaff_RBP + 0x160);
    if (1 < uVar10) {
      supplier_0x70b20(lVar6," and others");
    }
    supplier_0x70b20(lVar6,", ");
    supplier_0x693f0(unaff_RBP + 0x790);
  }
  if (DAT_1418f3196 == '\0') {
    pcVar12 = "Spring";
  }
  else if (DAT_1418f3196 == '\x01') {
    pcVar12 = "Summer";
  }
  else if (DAT_1418f3196 == '\x02') {
    pcVar12 = "Autumn";
  }
  else {
    if (DAT_1418f3196 != '\x03') goto LAB_1401110d4;
    pcVar12 = "Winter";
  }
  supplier_0x70b20(lVar6,pcVar12);
LAB_1401110d4:
  supplier_0x70b20(lVar6," ");
  report_year_decimal(_DAT_142161ab8,lVar6);
  *(undefined4 *)(lVar6 + 0x24) = _DAT_142161ab8;
  *(undefined4 *)(lVar6 + 0x28) = _DAT_1423a424c;
  *(uint *)(lVar6 + 0x20) = *(uint *)(lVar6 + 0x20) | 2;
  _DAT_1424ffc60 = _DAT_1424ffc60 | 0x10;
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x2bda40; separate-interrogation-storage-region; RVA 0x2bda40..0x2bdbe3; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_separate_interrogation_storage_region(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 auStack_268 [112];
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1b8;
  longlong lStack_e0;
  undefined1 auStack_b8 [112];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_268;
  lStack_1f0 = param_2;
  lStack_e0 = param_1;
  if (*(longlong *)(_DAT_1423b6568 + 0x1358) == 0) {
    uStack_1b8 = FUN_14154de30(0x50);
    uVar1 = supplier_0xbd320(uStack_1b8);
    *(undefined8 *)(_DAT_1423b6568 + 0x1358) = uVar1;
  }
  uStack_1b8 = FUN_14154de30(0x128);
  lVar2 = supplier_0x2b7d70(uStack_1b8);
  lStack_1f8 = lVar2;
  supplier_0x70b40(lVar2,"Interrogation Report: ");
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0xc30);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0xc30);
  supplier_0x70c50(auStack_b8);
  FUN_141344290(param_2,auStack_b8,0);
  supplier_0xbb2d0(lVar2,auStack_b8);
  supplier_0x70b20(lVar2,", ");
  if (DAT_1418f3196 == '\0') {
    pcVar4 = "Spring";
  }
  else if (DAT_1418f3196 == '\x01') {
    pcVar4 = "Summer";
  }
  else if (DAT_1418f3196 == '\x02') {
    pcVar4 = "Autumn";
  }
  else {
    if (DAT_1418f3196 != '\x03') goto LAB_1402bdb78;
    pcVar4 = "Winter";
  }
  supplier_0x70b20(lVar2,pcVar4);
LAB_1402bdb78:
  supplier_0x70b20(lVar2," ");
  report_year_decimal(_DAT_142161ab8,lVar2);
  FUN_141344290(param_1,lVar2 + 0x28,0);
  *(undefined4 *)(lVar2 + 0x4c) = _DAT_142161ab8;
  *(undefined4 *)(lVar2 + 0x50) = _DAT_1423a424c;
  puVar3 = (undefined4 *)FUN_1413c6d60(param_2);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(lVar2 + 0xc0) = *puVar3;
  }
  _DAT_1424ffc60 = _DAT_1424ffc60 | 0x40;
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0xa20380; tribute-title-region; RVA 0xa206f3..0xa208e2; actual Ghidra 12.1.4 C output. */

/* WARNING: Instruction at (ram,0x000140a206f6) overlaps instruction at (ram,0x000140a206f5)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_tribute_title_region(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  short *psVar5;
  int *piVar6;
  ulonglong uVar7;
  code *pcVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  short *psVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *puVar25;
  undefined1 *unaff_RDI;
  short *psVar26;
  longlong in_R10;
  longlong lVar27;
  longlong *unaff_R12;
  undefined4 *puVar28;
  undefined8 unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  longlong lVar29;
  undefined4 uVar30;
  short sStackX_20;
  short sStackX_22;
  short asStackX_24 [2];
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  short in_stack_00000030;
  longlong in_stack_00000038;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  short sStack0000000000000048;
  short sStack000000000000004a;
  undefined4 uStack0000000000000050;
  undefined1 uStack0000000000000054;
  short sStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined2 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  *(char *)((longlong)unaff_RBP + -0x75) = *(char *)((longlong)unaff_RBP + -0x75) + (char)param_1;
  puVar25 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  pcVar22 = (char *)(param_1 * 5 + 0x65);
  *pcVar22 = *pcVar22 + (char)param_1;
  func_0x0001a78f3a4b();
code_r0x000140a20710:
  do {
    if (unaff_R12 <= unaff_R15) {
      plVar17 = (longlong *)unaff_RBP[-4];
      do {
        do {
          plVar17 = plVar17 + 1;
          unaff_RBP[-4] = plVar17;
          if ((longlong *)unaff_RBP[-0xc] <= plVar17) {
            lVar15 = 0;
            iVar11 = 0;
            if (unaff_R14 == 0) {
              lVar27 = unaff_RBP[-9];
              puVar28 = (undefined4 *)unaff_RBP[-8];
              lVar20 = lVar15;
            }
            else {
              uStack000000000000005c = 0;
              uStack0000000000000060 = 0x8ad08ad0;
              uStack0000000000000064 = 0x8ad0;
              uStack0000000000000068 = 0;
              in_stack_00000070 = 0;
              in_stack_00000078 = 0;
              unaff_RBP[-0x10] = 0xffffffffffffffff;
              *(undefined4 *)(unaff_RBP + -0xf) = 0xffffffff;
              *(undefined4 *)((longlong)unaff_RBP + -0x74) = 0;
              *(undefined4 *)(unaff_RBP + -0xe) = 0xffffffff;
              uStack0000000000000050 = 0x600f2;
              uStack0000000000000054 = 1;
              uStack000000000000006c = 2000;
              sStack0000000000000058 = sStack000000000000004a;
              unaff_RBP[-2] = 0;
              unaff_RBP[-1] = 0;
              *unaff_RBP = 0;
              unaff_RBP[1] = 0;
              puVar14 = (undefined8 *)FUN_140071d90(0x40);
              unaff_RBP[-2] = puVar14;
              *unaff_RBP = 0x34;
              unaff_RBP[1] = 0x3f;
              *puVar14 = 0x2065747562697254;
              puVar14[1] = 0x676e696562207369;
              *(undefined4 *)(puVar14 + 2) = 0x6c6e7520;
              *(undefined4 *)((longlong)puVar14 + 0x14) = 0x6564616f;
              *(undefined4 *)(puVar14 + 3) = 0x20202e64;
              *(undefined4 *)((longlong)puVar14 + 0x1c) = 0x72204128;
              *(undefined4 *)(puVar14 + 4) = 0x726f7065;
              *(undefined4 *)((longlong)puVar14 + 0x24) = 0x73692074;
              *(undefined4 *)(puVar14 + 5) = 0x61766120;
              *(undefined4 *)((longlong)puVar14 + 0x2c) = 0x62616c69;
              *(undefined4 *)(puVar14 + 6) = 0x292e656c;
              *(undefined1 *)((longlong)puVar14 + 0x34) = 0;
              FUN_1400e51e0(0x1424ffbd0,unaff_RBP + -2,&stack0x00000050);
              uVar7 = unaff_RBP[1];
              if (0xf < uVar7) {
                uVar23 = uVar7 + 1;
                lVar27 = unaff_RBP[-2];
                lVar20 = lVar27;
                if (0xfff < uVar23) {
                  uVar23 = uVar7 + 0x28;
                  lVar20 = *(longlong *)(lVar27 + -8);
                  if (0x1f < (lVar27 - lVar20) - 8U) {
                    _invalid_parameter_noinfo_noreturn();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                supplier_0x154de20(lVar20,uVar23);
              }
              lVar27 = unaff_RBP[-9];
              puVar28 = (undefined4 *)unaff_RBP[-8];
              lVar20 = in_stack_00000038;
            }
            if (((*(uint *)(lVar27 + 0x118) >> 10 & 1) == 0) &&
               (((*(short *)(lVar27 + 0xae) != sStackX_22 ||
                 ((int)*(short *)(lVar27 + 0xb0) != sStack000000000000004a + -1)) ||
                (*(short *)(lVar27 + 0xb2) != sStackX_20)))) {
              *puVar28 = 0x32;
              *(short *)(puVar28 + 0xc) = sStackX_22;
              *(short *)((longlong)puVar28 + 0x32) = sStack000000000000004a + -1;
              *(short *)(puVar28 + 0xd) = sStackX_20;
              puVar28[1] = 0x4b;
              goto code_r0x000140a21273;
            }
            if (lVar20 == 0) goto code_r0x000140a21273;
            iVar1 = *(int *)(lVar27 + 0x3d4);
            lVar29 = lVar15;
            if (((iVar1 == -1) ||
                (iVar12 = (int)(lRam0000000142401438 - lRam0000000142401430 >> 3), iVar12 == 0)) ||
               (iVar12 = iVar12 + -1, lVar20 = in_stack_00000038, iVar12 < 0))
            goto code_r0x000140a21023;
            goto code_r0x000140a20ff0;
          }
          lVar15 = *plVar17;
        } while (((*(uint *)(lVar15 + 0x110) & 0x402) == 2) ||
                (plVar13 = plRam00000001423ad638, (*(uint *)(lVar15 + 0x110) & 0x40) == 0));
        for (; plVar13 < plRam00000001423ad640; plVar13 = plVar13 + 1) {
          if (*(int *)(*plVar13 + 0xc) == *(int *)(lVar15 + 0x140)) {
            if (*plVar13 == in_R10) {
              unaff_R15 = *(longlong **)(lVar15 + 0x408);
              unaff_R12 = *(longlong **)(lVar15 + 0x410);
              unaff_RBP[-3] = unaff_R12;
              unaff_R13 = 0;
              goto code_r0x000140a20710;
            }
            break;
          }
        }
      } while( true );
    }
    if (*(short *)(*unaff_R15 + 8) == 0) {
      if (unaff_R14 == 0) {
        puVar14 = (undefined8 *)FUN_14154de30(0xf0);
        unaff_RBP[-10] = puVar14;
        unaff_RBP[-0xb] = puVar14;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = unaff_R13;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        puVar14[6] = unaff_R13;
        puVar14[7] = unaff_R13;
        puVar14[8] = unaff_R13;
        puVar14[9] = unaff_R13;
        puVar14[10] = unaff_R13;
        puVar14[0xb] = unaff_R13;
        puVar14[0xc] = unaff_R13;
        puVar14[0xd] = unaff_R13;
        puVar14[0xe] = unaff_R13;
        puVar14[0xf] = unaff_R13;
        puVar14[0x10] = unaff_R13;
        puVar14[0x11] = unaff_R13;
        puVar14[0x12] = unaff_R13;
        puVar14[0x13] = unaff_R13;
        puVar14[0x14] = unaff_R13;
        puVar14[0x15] = unaff_R13;
        puVar14[0x16] = unaff_R13;
        puVar14[0x17] = unaff_R13;
        puVar14[0x18] = unaff_R13;
        puVar14[0x19] = unaff_R13;
        puVar14[0x1a] = unaff_R13;
        puVar14[0x1b] = unaff_R13;
        puVar14[0x1c] = unaff_R13;
        puVar14[0x1d] = unaff_R13;
        *(int *)(puVar14 + 4) = (int)unaff_R13;
        *(undefined8 *)((longlong)puVar14 + 0x24) = 0xffffffffffffffff;
        _iStack0000000000000040 = puVar14;
        uVar30 = FUN_140070e90(puVar14,"Tribute Report: ",0x10);
        report_tribute_entity_name(uVar30,puVar14,*(undefined4 *)(in_R10 + 0xc),0);
        FUN_140070fd0(puVar14,", ",2);
        if (DAT_1418f3196 == '\0') {
          pcVar22 = "Spring";
        }
        else if (DAT_1418f3196 == '\x01') {
          pcVar22 = "Summer";
        }
        else if (DAT_1418f3196 == '\x02') {
          pcVar22 = "Autumn";
        }
        else {
          if (DAT_1418f3196 != '\x03') goto LAB_140a20878;
          pcVar22 = "Winter";
        }
        FUN_140070fd0(puVar14,pcVar22,puVar25);
LAB_140a20878:
        FUN_140070fd0(puVar14," ",1);
        report_year_decimal(_DAT_142161ab8,puVar14);
        *(undefined4 *)((longlong)puVar14 + 0x24) = _DAT_142161ab8;
        *(undefined4 *)(puVar14 + 5) = _DAT_1423a424c;
        _DAT_1424ffc60 = _DAT_1424ffc60 | 0x20;
        if (_DAT_1424ffca8 != _DAT_1424ffcb0) {
          *_DAT_1424ffca8 = puVar14;
          _DAT_1424ffca8 = _DAT_1424ffca8 + 1;
          region_exit_140a208e2();
          return;
        }
        return;
      }
      unaff_RBP[-2] = 0;
      unaff_RBP[-1] = 0;
      *unaff_RBP = unaff_R13;
      unaff_RBP[-7] = 0;
      unaff_RBP[-6] = 0;
      unaff_RBP[-5] = unaff_R13;
      lVar15 = *(longlong *)*unaff_R15;
      _iStack0000000000000040 = (undefined8 *)lVar15;
      FUN_1400bc2f0(unaff_RBP + -2,0,&stack0x00000040);
      puVar14 = *(undefined8 **)(lVar15 + 0x38);
      puVar3 = *(undefined8 **)(lVar15 + 0x40);
      _iStack0000000000000028 = in_R10;
      while (lVar15 = _iStack0000000000000028, unaff_RBP[-0xb] = in_R10, puVar14 < puVar3) {
        iVar11 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
        if (iVar11 == 10) {
          lVar15 = (**(code **)(*(longlong *)*puVar14 + 0x18))();
          _iStack0000000000000028 = in_R10;
          if (lVar15 != 0) {
            FUN_140cded10(lVar15,unaff_RBP + -2,unaff_RBP + -7);
            goto code_r0x000140a20978;
          }
code_r0x000140a20a15:
          puVar14 = puVar14 + 1;
        }
        else {
code_r0x000140a20978:
          _iStack0000000000000028 = in_R10;
          iVar11 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
          if ((iVar11 != 9) ||
             (lVar15 = (**(code **)(*(longlong *)*puVar14 + 0x20))(),
             _iStack0000000000000028 = in_R10, lVar15 == 0)) goto code_r0x000140a20a15;
          plVar17 = (longlong *)unaff_RBP[-6];
          _iStack0000000000000040 = (undefined8 *)lVar15;
          if (plVar17 == (longlong *)unaff_RBP[-5]) {
            FUN_1400bc2f0(unaff_RBP + -7,plVar17,&stack0x00000040);
          }
          else {
            *plVar17 = lVar15;
            unaff_RBP[-6] = unaff_RBP[-6] + 8;
          }
          puVar4 = *(undefined8 **)(lVar15 + 0x410);
          _iStack0000000000000028 = unaff_RBP[-0xb];
          for (puVar24 = *(undefined8 **)(lVar15 + 0x408); puVar24 < puVar4; puVar24 = puVar24 + 1)
          {
            FUN_140cded10(*(undefined8 *)*puVar24,unaff_RBP + -2,unaff_RBP + -7);
          }
          puVar14 = puVar14 + 1;
          in_R10 = _iStack0000000000000028;
        }
      }
      puVar14 = (undefined8 *)unaff_RBP[-2];
      puVar3 = (undefined8 *)unaff_RBP[-1];
      unaff_R14 = unaff_RBP[-10];
      while (puVar14 < puVar3) {
        sVar10 = (*(code *)**(undefined8 **)*puVar14)();
        in_stack_00000030 = (**(code **)(*(longlong *)*puVar14 + 8))();
        sStack0000000000000048 = (**(code **)(*(longlong *)*puVar14 + 0x10))();
        uVar30 = (**(code **)(*(longlong *)*puVar14 + 0x18))();
        _iStack0000000000000028 = CONCAT44(uStack000000000000002c,uVar30);
        iVar11 = (**(code **)(*(longlong *)*puVar14 + 0x478))();
        _iStack0000000000000040 = (undefined8 *)CONCAT44(uStack0000000000000044,iVar11);
        psVar18 = *(short **)(unaff_R14 + 0x30);
        psVar5 = *(short **)(unaff_R14 + 0x38);
        piVar16 = *(int **)(unaff_R14 + 0x90);
        psVar26 = *(short **)(unaff_R14 + 0x48);
        lVar27 = *(longlong *)(unaff_R14 + 0x60) - (longlong)psVar26;
        unaff_RBP[-0xb] = *(longlong *)(unaff_R14 + 0x78) - (longlong)piVar16;
        for (; psVar18 < psVar5; psVar18 = psVar18 + 1) {
          if (((*psVar18 == sVar10) && (*psVar26 == in_stack_00000030)) &&
             (*(short *)((longlong)psVar26 + lVar27) == sStack0000000000000048)) {
            unaff_R14 = unaff_RBP[-10];
            if (*(int *)(unaff_RBP[-0xb] + (longlong)piVar16) == iStack0000000000000028) {
              *piVar16 = *piVar16 + iVar11;
              if (psVar18 < psVar5) goto code_r0x000140a20bce;
              break;
            }
          }
          psVar26 = psVar26 + 1;
          piVar16 = piVar16 + 1;
        }
        psVar18 = *(short **)(unaff_R14 + 0x38);
        if (psVar18 == *(short **)(unaff_R14 + 0x40)) {
          asStackX_24[0] = sVar10;
          FUN_140072600(unaff_R14 + 0x30,psVar18,asStackX_24);
        }
        else {
          *psVar18 = sVar10;
          *(longlong *)(unaff_R14 + 0x38) = *(longlong *)(unaff_R14 + 0x38) + 2;
        }
        asStackX_24[0] = in_stack_00000030;
        psVar18 = *(short **)(unaff_R14 + 0x50);
        if (psVar18 == *(short **)(unaff_R14 + 0x58)) {
          FUN_140072600(unaff_R14 + 0x48,psVar18,asStackX_24);
        }
        else {
          *psVar18 = in_stack_00000030;
          *(longlong *)(unaff_R14 + 0x50) = *(longlong *)(unaff_R14 + 0x50) + 2;
        }
        asStackX_24[0] = sStack0000000000000048;
        psVar18 = *(short **)(unaff_R14 + 0x68);
        if (psVar18 == *(short **)(unaff_R14 + 0x70)) {
          FUN_140072600(unaff_R14 + 0x60,psVar18,asStackX_24);
        }
        else {
          *psVar18 = sStack0000000000000048;
          *(longlong *)(unaff_R14 + 0x68) = *(longlong *)(unaff_R14 + 0x68) + 2;
        }
        puVar28 = *(undefined4 **)(unaff_R14 + 0x80);
        if (puVar28 == *(undefined4 **)(unaff_R14 + 0x88)) {
          FUN_1400723e0(unaff_R14 + 0x78,puVar28,&stack0x00000028);
        }
        else {
          *puVar28 = iStack0000000000000028;
          *(longlong *)(unaff_R14 + 0x80) = *(longlong *)(unaff_R14 + 0x80) + 4;
        }
        puVar28 = *(undefined4 **)(unaff_R14 + 0x98);
        if (puVar28 == *(undefined4 **)(unaff_R14 + 0xa0)) {
          FUN_1400723e0(unaff_R14 + 0x90,puVar28,&stack0x00000040);
code_r0x000140a20bce:
          puVar14 = puVar14 + 1;
        }
        else {
          *puVar28 = iStack0000000000000040;
          *(longlong *)(unaff_R14 + 0x98) = *(longlong *)(unaff_R14 + 0x98) + 4;
          puVar14 = puVar14 + 1;
        }
      }
      plVar17 = (longlong *)unaff_RBP[-7];
      plVar13 = (longlong *)unaff_RBP[-6];
      unaff_R12 = (longlong *)unaff_RBP[-3];
      _iStack0000000000000028 = lVar15;
      while (plVar17 < plVar13) {
        lVar15 = *plVar17;
        piVar6 = *(int **)(unaff_R14 + 0xb0);
        piVar19 = *(int **)(unaff_R14 + 0xd8);
        lVar27 = *(longlong *)(unaff_R14 + 0xc0) - (longlong)piVar19;
        for (piVar16 = *(int **)(unaff_R14 + 0xa8); piVar16 < piVar6; piVar16 = piVar16 + 1) {
          if ((*piVar16 == *(int *)(lVar15 + 0xa4)) &&
             (*(int *)(lVar27 + (longlong)piVar19) == (int)*(short *)(lVar15 + 300))) {
            *piVar19 = *piVar19 + 1;
            if (piVar16 < piVar6) goto code_r0x000140a20ce8;
            break;
          }
          piVar19 = piVar19 + 1;
        }
        if (*(undefined4 **)(unaff_R14 + 0xb0) == *(undefined4 **)(unaff_R14 + 0xb8)) {
          FUN_1400723e0();
        }
        else {
          **(undefined4 **)(unaff_R14 + 0xb0) = *(undefined4 *)(lVar15 + 0xa4);
          *(longlong *)(unaff_R14 + 0xb0) = *(longlong *)(unaff_R14 + 0xb0) + 4;
        }
        piVar16 = *(int **)(unaff_R14 + 200);
        if (piVar16 == *(int **)(unaff_R14 + 0xd0)) {
          iStack0000000000000040 = (int)*(short *)(lVar15 + 300);
          FUN_1400723e0(unaff_R14 + 0xc0,piVar16,&stack0x00000040);
        }
        else {
          *piVar16 = (int)*(short *)(lVar15 + 300);
          *(longlong *)(unaff_R14 + 200) = *(longlong *)(unaff_R14 + 200) + 4;
        }
        _iStack0000000000000040 = (undefined8 *)CONCAT44(uStack0000000000000044,1);
        puVar28 = *(undefined4 **)(unaff_R14 + 0xe0);
        if (puVar28 == *(undefined4 **)(unaff_R14 + 0xe8)) {
          FUN_1400723e0(unaff_R14 + 0xd8,puVar28,&stack0x00000040);
code_r0x000140a20ce8:
          plVar17 = plVar17 + 1;
        }
        else {
          *puVar28 = 1;
          *(longlong *)(unaff_R14 + 0xe0) = *(longlong *)(unaff_R14 + 0xe0) + 4;
          plVar17 = plVar17 + 1;
        }
      }
      FUN_140068130(unaff_RBP + -7);
      FUN_140068130(unaff_RBP + -2);
      puVar25 = (undefined1 *)0x6;
      in_R10 = _iStack0000000000000028;
    }
    unaff_R15 = unaff_R15 + 1;
  } while( true );
  while( true ) {
    iVar9 = iVar21 + -1;
    if (iVar2 < iVar1) {
      iVar9 = iVar12;
      iVar11 = iVar21 + 1;
    }
    iVar12 = iVar9;
    lVar29 = lVar15;
    if (iVar12 < iVar11) break;
code_r0x000140a20ff0:
    iVar21 = iVar11 + iVar12 >> 1;
    lVar29 = *(longlong *)(lRam0000000142401430 + (longlong)iVar21 * 8);
    iVar2 = *(int *)(lVar29 + 0x130);
    if (iVar2 == iVar1) break;
  }
code_r0x000140a21023:
  if ((*(uint *)(lVar27 + 0x118) >> 10 & 1) != 0) {
    lVar29 = lVar27;
  }
  if (lVar29 == 0) {
    for (plVar17 = *(longlong **)(lVar27 + 0x408); plVar17 < *(longlong **)(lVar27 + 0x410);
        plVar17 = plVar17 + 1) {
      lVar29 = lVar27;
      if (*(short *)(*plVar17 + 8) == 0) goto code_r0x000140a2106c;
    }
  }
  else {
code_r0x000140a2106c:
    *puVar28 = 0x31;
    *(longlong *)(puVar28 + 4) = lVar20;
    *(longlong *)(puVar28 + 2) = lVar29;
    puVar28[1] = 0x4b;
  }
code_r0x000140a21273:
  FUN_14154de00(unaff_RBP[2] ^ (ulonglong)&stack0x00000000);
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x9f65f0; mission-title-region; RVA 0x9f697d..0x9f6c7a; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_mission_title_region(void)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  int *piVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  short *psVar26;
  longlong *plVar27;
  byte *pbVar28;
  uint *puVar29;
  undefined8 *puVar30;
  char *pcVar31;
  longlong unaff_RBP;
  int *in_R10;
  longlong unaff_R12;
  int unaff_R13D;
  longlong *unaff_R15;
  longlong *in_stack_00000020;
  int *in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  int *in_stack_00000068;
  
  lVar23 = in_stack_00000058;
  piVar18 = in_R10;
code_r0x0001409f6988:
  do {
    if (((piVar18[0x1c] < 1) || (-1 < **(char **)(piVar18 + 0x1a))) &&
       (*(longlong *)(*(longlong *)(piVar18 + 0x18) + 0x128) == 0)) {
      uVar15 = FUN_14154de30(0x78);
      *(undefined8 *)(unaff_RBP + 0x210) = uVar15;
      lVar16 = supplier_0x13f0e0(uVar15);
      supplier_0x70b40(lVar16 + 0x28,"Mission Report: ");
      iVar9 = report_mission_goal_getter(*(undefined8 *)(in_stack_00000050 + 0x18));
      uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
      if (iVar9 == 2) {
        if (**(uint **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) < 7) {
                    /* WARNING: Switch is manually overridden */
          switch(**(uint **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130)) {
          case 0:
            pcVar31 = "Raze ";
            break;
          case 1:
            pcVar31 = "Take over ";
            break;
          case 2:
            pcVar31 = "Seize ";
            break;
          case 3:
            pcVar31 = "Demand tribute from ";
            break;
          case 4:
            goto override_jmp_1409f6b6c_case_4;
          case 5:
            pcVar31 = "Explore ";
            break;
          case 6:
            pcVar31 = "Pillage ";
          }
        }
        else {
override_jmp_1409f6b6c_case_4:
          pcVar31 = "Raid ";
        }
LAB_1409f6bab:
        supplier_0x70b20(lVar16 + 0x28,pcVar31);
        report_site_name(0x142516038,lVar16 + 0x28,
                         *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 8),0);
      }
      else if (iVar9 == 0x11) {
        supplier_0x70b20(lVar16 + 0x28,"Recover ");
        report_recover_artifact
                  (0x142516038,lVar16 + 0x28,
                   **(undefined4 **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130),0);
      }
      else if (iVar9 == 0x12) {
        supplier_0x70b20(lVar16 + 0x28,"Rescue ");
        supplier_0x73640(unaff_RBP + 0x230);
        uVar15 = CONCAT62((int6)((ulonglong)in_stack_00000020 >> 0x10),1);
        report_rescue_figure
                  (0x142516038,lVar16 + 0x28,
                   **(undefined4 **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130),
                   unaff_RBP + 0x230,uVar15);
        uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
      }
      else {
        if (iVar9 == 0x13) {
          pcVar31 = "Request workers from ";
          goto LAB_1409f6bab;
        }
        if (iVar9 == 0x19) {
          supplier_0x70c50(unaff_RBP + 0x300);
          report_diplomatic_proposal
                    (*(undefined8 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130),
                     unaff_RBP + 0x300);
          supplier_0xbb2d0(lVar16 + 0x28,unaff_RBP + 0x300);
          supplier_0x70b20(lVar16 + 0x28," at ");
          report_site_name(0x142516038,lVar16 + 0x28,
                           *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 8),0);
          supplier_0x693f0(unaff_RBP + 0x300);
        }
      }
      supplier_0x70b20(lVar16 + 0x28," (Set out ");
      if (DAT_1418f3196 == '\0') {
        pcVar31 = "Spring";
LAB_1409f6c20:
        supplier_0x70b20(lVar16 + 0x28,pcVar31);
      }
      else {
        if (DAT_1418f3196 == '\x01') {
          pcVar31 = "Summer";
          goto LAB_1409f6c20;
        }
        if (DAT_1418f3196 == '\x02') {
          pcVar31 = "Autumn";
          goto LAB_1409f6c20;
        }
        if (DAT_1418f3196 == '\x03') {
          pcVar31 = "Winter";
          goto LAB_1409f6c20;
        }
      }
      supplier_0x70b20(lVar16 + 0x28," ");
      report_year_decimal(_DAT_142161ab8,lVar16 + 0x28);
      supplier_0x70b20(lVar16 + 0x28,")");
      *(int *)(lVar16 + 0x4c) = _DAT_142161ab8;
      *(int *)(lVar16 + 0x50) = _DAT_1423a424c;
      *(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x128) = lVar16;
      in_stack_00000020 = (longlong *)CONCAT44(uVar8,_DAT_1423a424c);
      FUN_1400ffd00(lVar16,(int)(short)in_stack_00000050[1] / 0x30,
                    (int)*(short *)((longlong)in_stack_00000050 + 6) / 0x30,_DAT_142161ab8,
                    in_stack_00000020);
      piVar18 = in_stack_00000050;
    }
    do {
      uVar13 = *(uint *)(*(longlong *)(piVar18 + 0x18) + 0x78);
      if ((uVar13 & 4) != 0) {
        *(uint *)(*(longlong *)(piVar18 + 0x18) + 0x78) = uVar13 & 0xfffffffb;
        piVar18 = in_stack_00000050;
      }
      if (*(longlong *)(piVar18 + 0x18) == 0) {
code_r0x0001409f6f34:
      }
      else {
        switch(*(undefined4 *)(*(longlong *)(piVar18 + 0x18) + 0x138)) {
        case 2:
        case 7:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
          sVar7 = sRam000000014265c2aa;
          if (1 < _DAT_1418b8218 - 4U) {
            sVar7 = (short)piVar18[1];
            iVar9 = _DAT_1423a424c +
                    (short)(((sVar7 / 0x30 + (sVar7 >> 0xf)) -
                            (short)((longlong)(int)sVar7 * 0x2aaaaaab >> 0x3f)) -
                           (short)(*(int *)(_DAT_142507ed8 + 0xa0) >> 1)) +
                    ((iRam000000014214e220 - _DAT_1423a424c / 10) + 0x78) * 10;
            sVar7 = ((short)iVar9 +
                    (((short)(iVar9 / 0x4b0) + (short)(iVar9 >> 0x1f)) -
                    (short)((longlong)iVar9 * 0x1b4e81b5 >> 0x3f)) * -0x4b0) * 2;
          }
          if ((0x5db < (ushort)(sVar7 - 0x1faU)) &&
             (lVar16 = FUN_140fc6c10(_DAT_142507ed8,(int)(short)piVar18[1],
                                     (int)*(short *)((longlong)piVar18 + 6)),
             piVar18 = in_stack_00000050, lVar16 == 0)) {
            puVar14 = *(undefined4 **)(in_stack_00000050 + 0x18);
            piVar18 = (int *)FUN_14013fd50();
            *(int **)(in_stack_00000050 + 0x18) = piVar18;
            in_stack_00000050[0x17] = *piVar18;
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 4) = puVar14[1];
            FUN_1400fff90(*(undefined8 *)(in_stack_00000050 + 0x18),4);
            puVar29 = (uint *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4);
            *puVar29 = *puVar29 | 2;
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x38) = _DAT_142161ab8;
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x3c) = _DAT_1423a424c;
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) =
                 (int)(short)in_stack_00000050[1];
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                 (int)*(short *)((longlong)in_stack_00000050 + 6);
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x44) = puVar14[0x11];
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x40) = *puVar14;
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x48) = puVar14[0x13];
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x4c) = puVar14[0x13];
            FUN_1400bb560(*(undefined8 *)(in_stack_00000050 + 0x18),unaff_R12 + 0x1420);
            FUN_140142690(puVar14,in_stack_00000050);
            func_0x000140070850(in_stack_00000050 + 0x1e);
            func_0x000140070850(in_stack_00000050 + 0x24);
            func_0x000140070850(in_stack_00000050 + 0x2a);
            func_0x000140070850(in_stack_00000050 + 0x30);
            piVar18 = in_stack_00000050;
          }
          break;
        default:
          goto code_r0x0001409f6f34;
        }
      }
      lVar16 = *(longlong *)(piVar18 + 0x18);
      if (((*(int *)(lVar16 + 0x138) == 4) && (*(int *)(lVar16 + 0x40) != -1)) &&
         (((*(byte *)(*(longlong *)(lVar16 + 0x130) + 4) & 2) != 0 &&
          (sVar7 = func_0x000140844c80(0x14265cef0,(int)(short)piVar18[1] / 0x30),
          piVar18 = in_stack_00000050, (ushort)(sVar7 - 0x1faU) < 0x5dc)))) {
        puVar29 = (uint *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4);
        *puVar29 = *puVar29 | 4;
        if ((*(byte *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) & 8) != 0
           ) {
          func_0x000140070800(unaff_R15,unaff_RBP + 0x10);
          func_0x0001400707f0(unaff_R15,unaff_RBP + 0x170);
          cVar6 = func_0x0001400baf30(unaff_RBP + 0x10,unaff_RBP + 0x170);
          while (cVar6 == '\0') {
            plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x10);
            lVar16 = *plVar17;
            if ((((*(longlong *)(lVar16 + 0x60) != 0) &&
                 (iVar9 = report_mission_goal_getter(), iVar9 == 5)) &&
                (iVar9 = func_0x00014012d020(lVar16), iVar9 != 0)) &&
               (piVar18 = in_stack_00000050,
               *(int *)(*(longlong *)(lVar16 + 0x60) + 0x40) == **(int **)(in_stack_00000050 + 0x18)
               )) goto code_r0x0001409f70a1;
            func_0x0001400703c0(unaff_RBP + 0x10);
            cVar6 = func_0x0001400baf30(unaff_RBP + 0x10,unaff_RBP + 0x170);
          }
        }
        piVar18 = (int *)FUN_140073b30(0x142504188,
                                       *(undefined4 *)
                                        (*(longlong *)(in_stack_00000050 + 0x18) + 0x40));
        if (piVar18 == (int *)0x0) {
          FUN_140542d00(&UNK_1416e6178);
          *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x40) = unaff_R13D;
          piVar18 = in_stack_00000050;
        }
        else {
          *(int **)(in_stack_00000050 + 0x18) = piVar18;
          in_stack_00000050[0x17] = *piVar18;
          piVar18 = in_stack_00000050;
        }
      }
code_r0x0001409f70a1:
      if ((((*(int *)(*(longlong *)(piVar18 + 0x18) + 0x138) != 8) &&
           (*(int *)(*(longlong *)(piVar18 + 0x18) + 0x138) != 9)) &&
          (iVar9 = report_mission_goal_getter(), piVar18 = in_stack_00000050, iVar9 != 0xd)) ||
         ((*(longlong *)(piVar18 + 0x20) - *(longlong *)(piVar18 + 0x1e) & 0xfffffffffffffffcU) != 0
         )) goto code_r0x0001409f7185;
      lVar16 = FUN_14007f0e0(_DAT_142507ed8,*(undefined4 *)(*(longlong *)(piVar18 + 0x18) + 8));
      if (lVar16 == 0) goto code_r0x0001409fa25c;
      lVar23 = *(longlong *)(lVar16 + 0x308);
      piVar18 = in_stack_00000050;
      if (lVar23 == 0) {
        iVar9 = ((*(int *)(lVar16 + 0x200) + *(int *)(lVar16 + 0x1f8)) * 3) / 2 + 1;
        iVar10 = ((*(int *)(lVar16 + 0x204) + *(int *)(lVar16 + 0x1fc)) * 3) / 2 + 1;
        lVar23 = *(longlong *)(in_stack_00000050 + 0x18);
        if ((*(int *)(lVar23 + 0x10) != iVar9) || (*(int *)(lVar23 + 0x14) != iVar10)) {
          *(int *)(lVar23 + 0x10) = iVar9;
          goto code_r0x0001409f7174;
        }
      }
      else {
        iVar10 = *(int *)(lVar23 + 0x2d8f0);
        lVar16 = *(longlong *)(in_stack_00000050 + 0x18);
        if ((*(int *)(lVar16 + 0x10) != *(int *)(lVar23 + 0x2d8ec)) ||
           (*(int *)(lVar16 + 0x14) != iVar10)) {
          *(int *)(lVar16 + 0x10) = *(int *)(lVar23 + 0x2d8ec);
code_r0x0001409f7174:
          *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = iVar10;
        }
      }
code_r0x0001409f7185:
      if ((*(int *)(*(longlong *)(piVar18 + 0x18) + 0x138) == 3) &&
         (*(int *)(*(longlong *)(piVar18 + 0x18) + 0x44) != -1)) {
        piVar19 = (int *)FUN_140073b30(0x142504188);
        iVar9 = report_mission_goal_getter(piVar19);
        piVar18 = in_stack_00000050;
        if (iVar9 == 2) {
          lVar23 = *(longlong *)(piVar19 + 0x4c);
          if ((*(uint *)(lVar23 + 0x58) & 1) == 0) {
            if (((*(int *)(lVar23 + 8) == -1) ||
                ((_DAT_142161ab8 * 0x62700 + _DAT_1423a424c) -
                 (*(int *)(lVar23 + 8) * 0x62700 + *(int *)(lVar23 + 0xc)) < 0x4b0)) ||
               (*(int *)(lVar23 + 4) != 2)) goto code_r0x0001409f7241;
            *(uint *)(lVar23 + 0x58) = *(uint *)(lVar23 + 0x58) | 1;
            lVar23 = *(longlong *)(piVar19 + 0x4c);
            piVar19[4] = *(int *)(lVar23 + 0x5c);
            piVar19[5] = *(int *)(lVar23 + 0x60);
            *(int *)(lVar23 + 8) = unaff_R13D;
            *(int *)(*(longlong *)(piVar19 + 0x4c) + 0xc) = unaff_R13D;
          }
          *(int **)(in_stack_00000050 + 0x18) = piVar19;
          in_stack_00000050[0x17] = *piVar19;
        }
      }
code_r0x0001409f7241:
      if ((short)piVar18[4] == 0) {
        iVar9 = report_mission_goal_getter(*(undefined8 *)(piVar18 + 0x18));
        if (((iVar9 == 4) &&
            (lVar23 = *(longlong *)(in_stack_00000050 + 0x18),
            (int)(short)in_stack_00000050[1] == *(int *)(lVar23 + 0x10))) &&
           (((int)*(short *)((longlong)in_stack_00000050 + 6) == *(int *)(lVar23 + 0x14) &&
            ((piVar18 = *(int **)(lVar23 + 0x130), *piVar18 != -1 && (((byte)piVar18[1] & 10) == 2))
            )))) {
          piVar18[1] = piVar18[1] | 8;
          iVar9 = supplier_0x70410(in_stack_00000050 + 8);
          func_0x000140070800(in_stack_00000050 + 0xe,unaff_RBP + 0x18);
          func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x178);
          puVar20 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + 0x18,&stack0x00000071,unaff_RBP + 0x178);
          cVar6 = func_0x000140066d70(*puVar20,0);
          while (cVar6 != '\0') {
            puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 0x18);
            iVar9 = iVar9 + *(int *)*puVar21;
            func_0x0001400703c0(unaff_RBP + 0x18);
            puVar20 = (undefined1 *)
                      func_0x0001400703e0(unaff_RBP + 0x18,&stack0x00000071,unaff_RBP + 0x178);
            cVar6 = func_0x000140066d70(*puVar20,0);
          }
          if (1 < iVar9) {
            in_stack_00000050[0x38] = unaff_R13D;
            in_stack_00000060 = FUN_140122bb0();
            *(undefined8 *)(in_stack_00000060 + 0x60) = *(undefined8 *)(in_stack_00000050 + 0x18);
            *(undefined4 *)(in_stack_00000060 + 0x5c) = **(undefined4 **)(in_stack_00000050 + 0x18);
            FUN_140117da0(in_stack_00000060,(short)in_stack_00000050[1],
                          *(undefined2 *)((longlong)in_stack_00000050 + 6));
            *(short *)(in_stack_00000060 + 0x120) = (short)in_stack_00000050[0x48];
            *(undefined2 *)(in_stack_00000060 + 0x122) =
                 *(undefined2 *)((longlong)in_stack_00000050 + 0x122);
            *(short *)(in_stack_00000060 + 0x124) = (short)in_stack_00000050[0x49];
            *(int *)(in_stack_00000060 + 0x128) = in_stack_00000050[0x4a];
            supplier_0xbaf40(unaff_RBP + 0x70,&stack0x00000060);
            iVar10 = supplier_0x70410(in_stack_00000050 + 8);
            iVar9 = 1;
            iVar11 = 1;
            iVar12 = 0;
            if (iVar10 != 0) {
              while( true ) {
                iVar9 = FUN_1400734f0(iVar10);
                lVar25 = (longlong)iVar9;
                puVar21 = (undefined8 *)supplier_0x707e0(in_stack_00000050 + 8,lVar25);
                lVar16 = func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                lVar23 = in_stack_00000060;
                if (lVar16 == 0) break;
                if (*(int *)(*(longlong *)(lVar16 + 0x10) + 0xe0) ==
                    *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x4c)) {
                  if (iVar10 < 2) {
                    iVar12 = iVar12 + 1;
                  }
                  else {
                    iVar11 = iVar11 + 1;
                  }
                }
                else {
                  uVar15 = supplier_0x707e0(in_stack_00000050 + 8,lVar25);
                  supplier_0xbaf40(lVar23 + 0x20,uVar15);
                  FUN_1400baf60(in_stack_00000050 + 8,lVar25);
                  iVar10 = iVar10 + -1;
                }
                iVar11 = iVar11 + -1;
                iVar9 = iVar12;
                if (iVar11 < 1) goto joined_r0x0001409f74d5;
              }
              FUN_140542d00(&UNK_1416e61b0);
              iVar9 = iVar12;
              goto joined_r0x0001409f74d5;
            }
            do {
              uVar15 = supplier_0x70410(in_stack_00000050 + 0xe);
              iVar11 = FUN_1400734f0(uVar15);
              iVar12 = FUN_1400734f0(iVar9);
              iVar12 = iVar12 + 1;
              puVar21 = (undefined8 *)supplier_0x707e0(in_stack_00000050 + 0xe,(longlong)iVar11);
              piVar18 = (int *)*puVar21;
              *(int **)(unaff_RBP + -0x20) = piVar18;
              iVar10 = *piVar18;
              if (iVar12 < iVar10) {
                *piVar18 = iVar10 - iVar12;
                func_0x000140070800(in_stack_00000060 + 0x38,unaff_RBP + -0x28);
                func_0x0001400707f0(in_stack_00000060 + 0x38,unaff_RBP + 0xa0);
                puVar20 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + -0x28,&stack0x00000073,unaff_RBP + 0xa0);
                cVar6 = func_0x000140066d70(*puVar20,0);
                while (cVar6 != '\0') {
                  puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x28);
                  piVar18 = (int *)*puVar21;
                  cVar6 = func_0x0001400ff120(piVar18 + 1,*(longlong *)(unaff_RBP + -0x20) + 4,
                                              unaff_R13D);
                  if (cVar6 != '\0') {
                    *piVar18 = *piVar18 + iVar12;
                    break;
                  }
                  func_0x0001400703c0(unaff_RBP + -0x28);
                  puVar20 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0x28,&stack0x00000073,unaff_RBP + 0xa0)
                  ;
                  cVar6 = func_0x000140066d70(*puVar20,0);
                }
                puVar20 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + -0x28,unaff_RBP + -0x3f,unaff_RBP + 0xa0);
                cVar6 = func_0x000140073420(*puVar20,0);
                if (cVar6 != '\0') {
                  uVar15 = FUN_14154de30(0x3c);
                  *(undefined8 *)(unaff_RBP + 0x218) = uVar15;
                  piVar18 = (int *)func_0x000140100910(uVar15);
                  *piVar18 = iVar12;
                  func_0x0001400ff0c0(piVar18 + 1,*(longlong *)(unaff_RBP + -0x20) + 4,unaff_R13D);
                  FUN_140125d90(in_stack_00000060,piVar18);
                }
                iVar9 = iVar9 - iVar12;
              }
              else {
                FUN_1400baf60(in_stack_00000050 + 0xe,(longlong)iVar11);
                func_0x000140070800(in_stack_00000060 + 0x38,unaff_RBP + -0x30);
                func_0x0001400707f0(in_stack_00000060 + 0x38,unaff_RBP + 0xd0);
                puVar20 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + -0x30,&stack0x00000072,unaff_RBP + 0xd0);
                cVar6 = func_0x000140066d70(*puVar20,0);
                while (cVar6 != '\0') {
                  puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x30);
                  piVar18 = (int *)*puVar21;
                  cVar6 = func_0x0001400ff120(piVar18 + 1,*(longlong *)(unaff_RBP + -0x20) + 4,
                                              unaff_R13D);
                  if (cVar6 != '\0') {
                    *piVar18 = *piVar18 + iVar10;
                    break;
                  }
                  func_0x0001400703c0(unaff_RBP + -0x30);
                  puVar20 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0x30,&stack0x00000072,unaff_RBP + 0xd0)
                  ;
                  cVar6 = func_0x000140066d70(*puVar20,0);
                }
                puVar20 = (undefined1 *)
                          func_0x0001400703e0(unaff_RBP + -0x30,unaff_RBP + -0x40,unaff_RBP + 0xd0);
                cVar6 = func_0x000140073420(*puVar20,0);
                if (cVar6 == '\0') {
                  supplier_0x154de20(*(undefined8 *)(unaff_RBP + -0x20),0x3c);
                  iVar9 = iVar9 - iVar10;
                }
                else {
                  supplier_0xbaf40(in_stack_00000060 + 0x38,unaff_RBP + -0x20);
                  iVar9 = iVar9 - iVar10;
                }
              }
joined_r0x0001409f74d5:
            } while (0 < iVar9);
            FUN_140125c90(in_stack_00000050);
            FUN_140125c90(in_stack_00000060);
            puVar14 = *(undefined4 **)(in_stack_00000050 + 0x18);
            puVar22 = (undefined4 *)FUN_14013fd50();
            *(undefined4 **)(in_stack_00000060 + 0x60) = puVar22;
            *(undefined4 *)(in_stack_00000060 + 0x5c) = *puVar22;
            *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 4) = puVar14[1];
            FUN_1400fff90(*(undefined8 *)(in_stack_00000060 + 0x60),5);
            *(int *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x38) = _DAT_142161ab8;
            *(int *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x3c) = _DAT_1423a424c;
            *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 8) = puVar14[2];
            *(int *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x10) = unaff_R13D;
            *(int *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x14) = unaff_R13D;
            *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x44) = puVar14[0x11];
            *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x40) = *puVar14;
            *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x48) =
                 *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x4c);
            lVar23 = supplier_0x70410(in_stack_00000060 + 0x20);
            if (lVar23 != 0) {
              uVar15 = supplier_0x70410(in_stack_00000060 + 0x20);
              iVar9 = FUN_1400734f0(uVar15);
              puVar21 = (undefined8 *)supplier_0x707e0(in_stack_00000060 + 0x20,(longlong)iVar9);
              lVar23 = func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
              if (lVar23 != 0) {
                *(undefined4 *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x4c) =
                     *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
              }
            }
            FUN_1400bb560(*(undefined8 *)(in_stack_00000060 + 0x60),unaff_R12 + 0x1420);
            **(undefined4 **)(*(longlong *)(in_stack_00000060 + 0x60) + 0x130) = puVar14[4];
            *(undefined4 *)(*(longlong *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x130) + 4) =
                 puVar14[5];
            *(undefined4 *)(*(longlong *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x130) + 8) = 0;
            *(int *)(*(longlong *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x130) + 0xc) =
                 _DAT_142161ab8;
            *(int *)(*(longlong *)(*(longlong *)(in_stack_00000060 + 0x60) + 0x130) + 0x10) =
                 _DAT_1423a424c;
            unaff_R15 = *(longlong **)(unaff_RBP + 0x160);
          }
        }
        piVar18 = in_stack_00000050;
        if (((short)in_stack_00000050[4] == 0) &&
           (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x138) == 5)) {
          piVar18 = (int *)FUN_140073b30(0x142504188,
                                         *(undefined4 *)
                                          (*(longlong *)(in_stack_00000050 + 0x18) + 0x40));
          if (piVar18 == (int *)0x0) {
            FUN_140542d00(&UNK_1416e61e0);
          }
          else {
            iVar9 = report_mission_goal_getter(piVar18);
            if ((iVar9 != 4) || ((*(byte *)(*(longlong *)(piVar18 + 0x4c) + 4) & 4) != 0)) {
              lVar23 = (longlong)(int)(short)in_stack_00000050[1] * 0x55555556;
              sVar7 = *(short *)((longlong)in_stack_00000050 + 6);
              func_0x000140070800(unaff_R15,unaff_RBP + -0x68);
              func_0x0001400707f0(unaff_R15,unaff_RBP + 0xd8);
              plVar17 = *(longlong **)(unaff_RBP + -0x68);
              plVar27 = *(longlong **)(unaff_RBP + 0xd8);
code_r0x0001409f79b4:
              if (plVar17 < plVar27) {
                if (*(longlong *)(*plVar17 + 0x60) == 0) goto code_r0x0001409f7a5c;
                puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x68);
                if (((int *)*puVar21 == in_stack_00000050) ||
                   (plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x68),
                   *(int *)(*(longlong *)(*plVar17 + 0x60) + 0x44) != piVar18[0x11])) {
code_r0x0001409f7a51:
                  plVar17 = *(longlong **)(unaff_RBP + -0x68);
                  plVar27 = *(longlong **)(unaff_RBP + 0xd8);
                  goto code_r0x0001409f7a5c;
                }
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x68);
                sVar1 = *(short *)(*plVar17 + 4);
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x68);
                sVar2 = *(short *)(*plVar17 + 6);
                if ((2 < (ushort)((((short)((ulonglong)lVar23 >> 0x20) - (short)(lVar23 >> 0x3f)) -
                                  (sVar1 / 3 + (sVar1 >> 0xf) +
                                  (short)(((longlong)(int)sVar1 / 3 + ((longlong)(int)sVar1 >> 0x3f)
                                          & 0xffffffffU) >> 0x1f))) + 1U)) ||
                   (2 < (ushort)((sVar7 / 3 -
                                 (sVar2 / 3 + (sVar2 >> 0xf) +
                                 (short)(((longlong)(int)sVar2 / 3 + ((longlong)(int)sVar2 >> 0x3f)
                                         & 0xffffffffU) >> 0x1f))) + 1U)))
                goto code_r0x0001409f7a51;
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x68);
                lVar23 = *plVar17;
                if (lVar23 != 0) {
                  func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + 0xa8);
                  func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x1e8);
                  uVar24 = *(ulonglong *)(unaff_RBP + 0xa8);
                  while (uVar24 < *(ulonglong *)(unaff_RBP + 0x1e8)) {
                    func_0x0001400bbe40(lVar23 + 0x20,uVar24);
                    uVar24 = *(longlong *)(unaff_RBP + 0xa8) + 8;
                    *(ulonglong *)(unaff_RBP + 0xa8) = uVar24;
                  }
                  if (*(longlong *)(in_stack_00000050 + 8) != *(longlong *)(in_stack_00000050 + 10))
                  {
                    *(longlong *)(in_stack_00000050 + 10) = *(longlong *)(in_stack_00000050 + 8);
                  }
                  func_0x000140070d00(unaff_RBP + -0x38,*(undefined8 *)(in_stack_00000050 + 0xe));
                  func_0x000140070d00(unaff_RBP + 0x1f0,*(undefined8 *)(in_stack_00000050 + 0x10));
                  plVar17 = *(longlong **)(unaff_RBP + -0x38);
code_r0x0001409f7b20:
                  do {
                    if (*(longlong **)(unaff_RBP + 0x1f0) <= plVar17) {
                      if (*(longlong *)(in_stack_00000050 + 0xe) !=
                          *(longlong *)(in_stack_00000050 + 0x10)) {
                        *(longlong *)(in_stack_00000050 + 0x10) =
                             *(longlong *)(in_stack_00000050 + 0xe);
                      }
                      FUN_140125c90(lVar23);
                      func_0x0001400bbe40(unaff_RBP + 0x88,&stack0x00000050);
                      lVar23 = in_stack_00000058;
                      goto code_r0x0001409fa25c;
                    }
                    plVar3 = *(longlong **)(lVar23 + 0x40);
                    for (plVar27 = *(longlong **)(lVar23 + 0x38); plVar27 < plVar3;
                        plVar27 = plVar27 + 1) {
                      cVar6 = func_0x0001400ff120(*plVar17 + 4,*plVar27 + 4,unaff_R13D);
                      plVar17 = *(longlong **)(unaff_RBP + -0x38);
                      if (cVar6 != '\0') {
                        *(int *)*plVar27 = *(int *)*plVar27 + *(int *)*plVar17;
                        supplier_0x154de20(**(undefined8 **)(unaff_RBP + -0x38),0x3c);
                        plVar17 = (longlong *)(*(longlong *)(unaff_RBP + -0x38) + 8);
                        *(longlong **)(unaff_RBP + -0x38) = plVar17;
                        goto code_r0x0001409f7b20;
                      }
                    }
                    func_0x0001400bbe40(lVar23 + 0x38,plVar17);
                    plVar17 = (longlong *)(*(longlong *)(unaff_RBP + -0x38) + 8);
                    *(longlong **)(unaff_RBP + -0x38) = plVar17;
                  } while( true );
                }
              }
              FUN_140542d00(&UNK_1416e61e0);
              *(int **)(in_stack_00000050 + 0x18) = piVar18;
              in_stack_00000050[0x17] = *piVar18;
              piVar18 = in_stack_00000050;
              goto code_r0x0001409f7c46;
            }
          }
          lVar23 = *(longlong *)(in_stack_00000050 + 0x18);
          piVar18 = in_stack_00000050;
          if ((*(int *)(lVar23 + 0x10) == -1) ||
             (((int)(short)in_stack_00000050[1] == *(int *)(lVar23 + 0x10) &&
              ((int)*(short *)((longlong)in_stack_00000050 + 6) == *(int *)(lVar23 + 0x14))))) {
            *(undefined4 *)(lVar23 + 0x10) = **(undefined4 **)(lVar23 + 0x130);
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4)
            ;
          }
        }
      }
code_r0x0001409f7c46:
      lVar23 = *(longlong *)(piVar18 + 0x18);
      if (((*(int *)(lVar23 + 0x138) == 0xf) && ((int)(short)piVar18[1] == *(int *)(lVar23 + 0x10)))
         && ((int)*(short *)((longlong)piVar18 + 6) == *(int *)(lVar23 + 0x14))) {
        if (**(int **)(lVar23 + 0x130) == -1) {
          **(int **)(lVar23 + 0x130) = _DAT_142161ab8;
          *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
               _DAT_1423a424c;
          piVar18 = in_stack_00000050;
        }
        lVar23 = *(longlong *)(piVar18 + 0x18);
        piVar19 = *(int **)(lVar23 + 0x130);
        if ((piVar19[8] & 1U) == 0) {
          iVar9 = _DAT_142161ab8 * 0x62700 + _DAT_1423a424c;
          if (0x31 < iVar9 - (*piVar19 * 0x62700 + piVar19[1])) {
            if (iVar9 - (*(int *)(lVar23 + 0x38) * 0x62700 + *(int *)(lVar23 + 0x3c)) < 600) {
              iVar9 = piVar19[9];
              iVar10 = piVar19[10];
              *piVar19 = unaff_R13D;
              *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
                   unaff_R13D;
              iVar11 = FUN_1400734f0(0x65);
              *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = iVar11 + -0x32 + iVar9;
              iVar9 = FUN_1400734f0(0x65);
              *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = iVar9 + -0x32 + iVar10;
              if (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) < 0) {
                *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = 0;
              }
              if (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) < 0) {
                *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = 0;
              }
              iVar9 = *(int *)(_DAT_142507ed8 + 0xa0) * 0x30;
              if (iVar9 <= *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) {
                *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = iVar9 + -1;
              }
              iVar9 = *(int *)(_DAT_142507ed8 + 0xa4) * 0x30;
              piVar18 = in_stack_00000050;
              if (iVar9 <= *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14)) {
                *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = iVar9 + -1;
              }
            }
            else {
              piVar19[8] = piVar19[8] | 1;
              *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) =
                   *(undefined4 *)
                    (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x24);
              *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                   *(undefined4 *)
                    (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x28);
              **(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) = unaff_R13D;
              *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
                   unaff_R13D;
              piVar18 = in_stack_00000050;
            }
          }
          goto code_r0x0001409f82b6;
        }
        lVar16 = 0;
        func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x60);
        func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0xe0);
        puVar20 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -0x60,&stack0x00000074,unaff_RBP + 0xe0);
        cVar6 = func_0x000140066d70(*puVar20,0);
        lVar23 = in_stack_00000058;
        if (cVar6 != '\0') {
          do {
            plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x60);
            iVar9 = (int)(short)in_stack_00000050[1];
            if (*(int *)(*plVar17 + 0x1f8) <=
                iVar9 / 3 + (iVar9 >> 0x1f) +
                (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) {
              plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x60);
              iVar9 = (int)(short)in_stack_00000050[1];
              if (iVar9 / 3 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f) <=
                  *(int *)(*plVar17 + 0x200)) {
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x60);
                iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                if (*(int *)(*plVar17 + 0x1fc) <=
                    iVar9 / 3 + (iVar9 >> 0x1f) +
                    (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f))
                {
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x60);
                  iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                  if (iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      <= *(int *)(*plVar17 + 0x204)) {
                    plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x60);
                    lVar16 = *plVar17;
                  }
                }
              }
            }
            func_0x0001400703c0(unaff_RBP + -0x60);
            puVar20 = (undefined1 *)
                      func_0x0001400703e0(unaff_RBP + -0x60,&stack0x00000074,unaff_RBP + 0xe0);
            cVar6 = func_0x000140066d70(*puVar20,0);
          } while (cVar6 != '\0');
          lVar23 = in_stack_00000058;
          if (lVar16 != 0) {
            lVar25 = *(longlong *)(lVar16 + 0x308);
            if (lVar25 == 0) {
              func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + 0x20);
              func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x180);
              while (*(ulonglong *)(unaff_RBP + 0x20) < *(ulonglong *)(unaff_RBP + 0x180)) {
                puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 0x20);
                puVar14 = (undefined4 *)func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
                if (puVar14 != (undefined4 *)0x0) {
                  FUN_1400bb430(*puVar14,lVar16 + 0x90);
                  in_stack_00000020 = (longlong *)CONCAT44(uVar8,unaff_R13D);
                  FUN_140bcda20(*(undefined8 *)(puVar14 + 4),1,*(undefined4 *)(lVar16 + 0x88),
                                unaff_R13D,in_stack_00000020);
                  *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                          0x1c) = (int)(short)in_stack_00000050[1];
                  *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                          0x20) = (int)*(short *)((longlong)in_stack_00000050 + 6);
                  puVar29 = (uint *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                    0x24);
                  *puVar29 = *puVar29 & 0xfffffffc;
                  FUN_140df8560(puVar14,lVar16);
                }
                if (**(longlong **)(unaff_RBP + 0x20) != 0) {
                  FUN_140122b10(**(longlong **)(unaff_RBP + 0x20),1);
                }
                func_0x0001400703c0(unaff_RBP + 0x20);
              }
              unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
              if (*(longlong *)(in_stack_00000050 + 8) != *(longlong *)(in_stack_00000050 + 10)) {
                *(longlong *)(in_stack_00000050 + 10) = *(longlong *)(in_stack_00000050 + 8);
              }
              uVar8 = func_0x0001409cbf90(lVar16);
              piVar18 = in_stack_00000050;
              uVar15 = func_0x000140069770(in_stack_00000050 + 0xe);
              func_0x000140070d00(unaff_RBP + 0x28,*(undefined8 *)(piVar18 + 0xe),uVar15);
              func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x188);
              puVar21 = *(undefined8 **)(unaff_RBP + 0x28);
              while (puVar21 < *(undefined8 **)(unaff_RBP + 0x188)) {
                FUN_140138db0(lVar16,*puVar21,uVar8);
                supplier_0x154de20(**(undefined8 **)(unaff_RBP + 0x28),0x3c);
                puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x28) + 8);
                *(undefined8 **)(unaff_RBP + 0x28) = puVar21;
              }
              if (*(longlong *)(in_stack_00000050 + 0xe) != *(longlong *)(in_stack_00000050 + 0x10))
              {
                *(longlong *)(in_stack_00000050 + 0x10) = *(longlong *)(in_stack_00000050 + 0xe);
              }
code_r0x0001409f8069:
              piVar18 = *(int **)(in_stack_00000050 + 0x18);
              func_0x0001400bbe40(unaff_RBP + 0x88,&stack0x00000050);
              func_0x000140070d00(unaff_RBP + 0xe8,*unaff_R15,unaff_R15);
              func_0x000140070d00(unaff_RBP + 400,unaff_R15[1],unaff_R15);
              puVar21 = *(undefined8 **)(unaff_RBP + 0xe8);
              while (plVar17 = plRam0000000142401448, lVar23 = in_stack_00000058,
                    puVar21 < *(undefined8 **)(unaff_RBP + 400)) {
                if ((((int *)*puVar21 != in_stack_00000050) &&
                    (lVar16 = *(longlong *)((int *)*puVar21 + 0x18), lVar16 != 0)) &&
                   (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
                puVar21 = puVar21 + 1;
                *(undefined8 **)(unaff_RBP + 0xe8) = puVar21;
              }
              for (; plVar17 < plRam0000000142401450; plVar17 = plVar17 + 1) {
                if ((((*(uint *)(*plVar17 + 0x110) & 0x502) != 2) &&
                    (lVar16 = *(longlong *)(*plVar17 + 0x1208), lVar16 != 0)) &&
                   (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
              }
              FUN_14013fdd0(piVar18);
              lVar23 = in_stack_00000058;
            }
            else {
              iVar9 = *(int *)(lVar25 + 0x2d8ec);
              if (iVar9 != -1000000) {
                lVar4 = *(longlong *)(in_stack_00000050 + 0x18);
                if ((*(int *)(lVar4 + 0x10) != iVar9) ||
                   (*(int *)(lVar4 + 0x14) != *(int *)(lVar25 + 0x2d8f0))) {
                  *(int *)(lVar4 + 0x10) = iVar9;
                  *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                       *(undefined4 *)(*(longlong *)(lVar16 + 0x308) + 0x2d8f0);
                }
                if (((int)(short)in_stack_00000050[1] ==
                     *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) &&
                   ((int)*(short *)((longlong)in_stack_00000050 + 6) ==
                    *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14))) {
                  FUN_140130d40(in_stack_00000050,lVar16);
                  goto code_r0x0001409f8069;
                }
              }
            }
          }
        }
        goto code_r0x0001409fa25c;
      }
code_r0x0001409f82b6:
      lVar23 = *(longlong *)(piVar18 + 0x18);
      if (*(int *)(lVar23 + 0x138) == 1) {
        if ((((int)(short)piVar18[1] != *(int *)(lVar23 + 0x10)) ||
            ((int)*(short *)((longlong)piVar18 + 6) != *(int *)(lVar23 + 0x14))) ||
           ((**(byte **)(lVar23 + 0x130) & 1) == 0)) goto code_r0x0001409f8e11;
        lVar16 = 0;
        func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x58);
        func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0xf0);
        puVar20 = (undefined1 *)
                  func_0x0001400703e0(unaff_RBP + -0x58,&stack0x00000075,unaff_RBP + 0xf0);
        cVar6 = func_0x000140066d70(*puVar20,0);
        lVar23 = in_stack_00000058;
        if (cVar6 != '\0') {
          do {
            plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x58);
            iVar9 = (int)(short)in_stack_00000050[1];
            if (*(int *)(*plVar17 + 0x1f8) <=
                iVar9 / 3 + (iVar9 >> 0x1f) +
                (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) {
              plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x58);
              iVar9 = (int)(short)in_stack_00000050[1];
              if (iVar9 / 3 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f) <=
                  *(int *)(*plVar17 + 0x200)) {
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x58);
                iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                if (*(int *)(*plVar17 + 0x1fc) <=
                    iVar9 / 3 + (iVar9 >> 0x1f) +
                    (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f))
                {
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x58);
                  iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                  if (iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      <= *(int *)(*plVar17 + 0x204)) {
                    plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x58);
                    lVar16 = *plVar17;
                  }
                }
              }
            }
            func_0x0001400703c0(unaff_RBP + -0x58);
            puVar20 = (undefined1 *)
                      func_0x0001400703e0(unaff_RBP + -0x58,&stack0x00000075,unaff_RBP + 0xf0);
            cVar6 = func_0x000140066d70(*puVar20,0);
          } while (cVar6 != '\0');
          lVar23 = in_stack_00000058;
          if (lVar16 != 0) {
            lVar25 = *(longlong *)(lVar16 + 0x308);
            if (lVar25 == 0) {
              func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + 0x30);
              func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x198);
              while (*(ulonglong *)(unaff_RBP + 0x30) < *(ulonglong *)(unaff_RBP + 0x198)) {
                puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 0x30);
                puVar14 = (undefined4 *)func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                if (puVar14 != (undefined4 *)0x0) {
                  FUN_1400bb430(*puVar14,lVar16 + 0x90);
                  if (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) != 0) {
                    puVar5 = *(undefined2 **)
                              (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28);
                    if (puVar5 != (undefined2 *)0x0) {
                      *puVar5 = 1;
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 4)
                           = *(undefined4 *)(lVar16 + 0x88);
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 8) =
                           unaff_R13D;
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0xc) =
                           unaff_R13D;
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0x10) =
                           unaff_R13D;
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0x1c) =
                           (int)(short)in_stack_00000050[1];
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0x20) =
                           (int)*(short *)((longlong)in_stack_00000050 + 6);
                      puVar29 = (uint *)(*(longlong *)
                                          (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28)
                                        + 0x24);
                      *puVar29 = *puVar29 & 0xfffffffc;
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0x34) =
                           _DAT_142161ab8;
                      *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) + 0x38) =
                           _DAT_1423a424c;
                    }
                    FUN_140df8560(puVar14,lVar16);
                  }
                }
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x30);
                if (*plVar17 != 0) {
                  FUN_140122b10(*plVar17,1);
                }
                func_0x0001400703c0(unaff_RBP + 0x30);
              }
              func_0x000140070850(in_stack_00000050 + 8);
              uVar8 = func_0x0001409cbf90(lVar16);
              func_0x000140070800(in_stack_00000050 + 0xe,unaff_RBP + 0x38);
              func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x1a0);
              puVar21 = *(undefined8 **)(unaff_RBP + 0x38);
              while (puVar21 < *(undefined8 **)(unaff_RBP + 0x1a0)) {
                FUN_140138db0(lVar16,*puVar21,uVar8);
                supplier_0x154de20(**(undefined8 **)(unaff_RBP + 0x38),0x3c);
                puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x38) + 8);
                *(undefined8 **)(unaff_RBP + 0x38) = puVar21;
              }
              if (*(longlong *)(in_stack_00000050 + 0xe) != *(longlong *)(in_stack_00000050 + 0x10))
              {
                *(longlong *)(in_stack_00000050 + 0x10) = *(longlong *)(in_stack_00000050 + 0xe);
              }
code_r0x0001409f8700:
              piVar18 = *(int **)(in_stack_00000050 + 0x18);
              func_0x0001400bbe40(unaff_RBP + 0x88,&stack0x00000050);
              func_0x000140070d00(unaff_RBP + 0xf8,*unaff_R15,unaff_R15);
              func_0x000140070d00(unaff_RBP + 0x1a8,unaff_R15[1],unaff_R15);
              puVar21 = *(undefined8 **)(unaff_RBP + 0xf8);
              while (plVar17 = plRam0000000142401448, lVar23 = in_stack_00000058,
                    puVar21 < *(undefined8 **)(unaff_RBP + 0x1a8)) {
                if ((((int *)*puVar21 != in_stack_00000050) &&
                    (lVar16 = *(longlong *)((int *)*puVar21 + 0x18), lVar16 != 0)) &&
                   (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
                puVar21 = puVar21 + 1;
                *(undefined8 **)(unaff_RBP + 0xf8) = puVar21;
              }
              for (; plVar17 < plRam0000000142401450; plVar17 = plVar17 + 1) {
                if ((((*(uint *)(*plVar17 + 0x110) & 0x502) != 2) &&
                    (lVar16 = *(longlong *)(*plVar17 + 0x1208), lVar16 != 0)) &&
                   (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
              }
              **(undefined4 **)(piVar18 + 0x4c) = 0;
            }
            else {
              iVar9 = *(int *)(lVar25 + 0x2d8ec);
              if (iVar9 != -1000000) {
                lVar4 = *(longlong *)(in_stack_00000050 + 0x18);
                if ((*(int *)(lVar4 + 0x10) != iVar9) ||
                   (*(int *)(lVar4 + 0x14) != *(int *)(lVar25 + 0x2d8f0))) {
                  *(int *)(lVar4 + 0x10) = iVar9;
                  *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                       *(undefined4 *)(*(longlong *)(lVar16 + 0x308) + 0x2d8f0);
                }
                if (((int)(short)in_stack_00000050[1] ==
                     *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) &&
                   ((int)*(short *)((longlong)in_stack_00000050 + 6) ==
                    *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14))) {
                  FUN_140130d40(in_stack_00000050,lVar16);
                  goto code_r0x0001409f8700;
                }
              }
            }
          }
        }
        goto code_r0x0001409fa25c;
      }
      if (((*(int *)(lVar23 + 0x138) == 7) && ((int)(short)piVar18[1] == *(int *)(lVar23 + 0x10)))
         && ((int)*(short *)((longlong)piVar18 + 6) == *(int *)(lVar23 + 0x14))) {
        if (**(int **)(lVar23 + 0x130) == -1) {
          **(int **)(lVar23 + 0x130) = _DAT_142161ab8;
          *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
               _DAT_1423a424c;
          piVar18 = in_stack_00000050;
        }
        lVar23 = *(longlong *)(piVar18 + 0x18);
        piVar19 = *(int **)(lVar23 + 0x130);
        if ((piVar19[8] & 1U) != 0) {
          iVar9 = (int)(short)piVar18[1] / 3;
          iVar10 = (int)*(short *)((longlong)piVar18 + 6) / 3;
          func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x50);
          func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0x100);
          puVar20 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + -0x50,&stack0x00000076,unaff_RBP + 0x100);
          cVar6 = func_0x000140066d70(*puVar20,0);
          lVar23 = in_stack_00000058;
          if (cVar6 != '\0') {
code_r0x0001409f88d0:
            plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x50);
            if ((((iVar9 < *(int *)(*plVar17 + 0x1f8)) ||
                 (plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x50),
                 iVar10 < *(int *)(*plVar17 + 0x1fc))) ||
                (plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x50),
                *(int *)(*plVar17 + 0x200) < iVar9)) ||
               (plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x50),
               *(int *)(*plVar17 + 0x204) < iVar10)) goto code_r0x0001409f8920;
            plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x50);
            lVar16 = *plVar17;
            lVar23 = in_stack_00000058;
            if (lVar16 == 0) goto code_r0x0001409fa25c;
            lVar25 = *(longlong *)(lVar16 + 0x308);
            if (lVar25 != 0) {
              iVar9 = *(int *)(lVar25 + 0x2d8ec);
              if (iVar9 != -1000000) {
                lVar4 = *(longlong *)(in_stack_00000050 + 0x18);
                if ((*(int *)(lVar4 + 0x10) != iVar9) ||
                   (*(int *)(lVar4 + 0x14) != *(int *)(lVar25 + 0x2d8f0))) {
                  *(int *)(lVar4 + 0x10) = iVar9;
                  *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                       *(undefined4 *)(*(longlong *)(lVar16 + 0x308) + 0x2d8f0);
                }
                if (((int)(short)in_stack_00000050[1] ==
                     *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) &&
                   ((int)*(short *)((longlong)in_stack_00000050 + 6) ==
                    *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14))) {
                  FUN_140130d40(in_stack_00000050,lVar16);
                  goto code_r0x0001409f8ba9;
                }
              }
              goto code_r0x0001409fa25c;
            }
            func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + 0x40);
            func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x1b0);
            while (*(ulonglong *)(unaff_RBP + 0x40) < *(ulonglong *)(unaff_RBP + 0x1b0)) {
              puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + 0x40);
              puVar14 = (undefined4 *)func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
              uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
              if (puVar14 != (undefined4 *)0x0) {
                FUN_1400bb430(*puVar14,lVar16 + 0x90);
                in_stack_00000020 = (longlong *)CONCAT44(uVar8,unaff_R13D);
                FUN_140bcda20(*(undefined8 *)(puVar14 + 4),1,*(undefined4 *)(lVar16 + 0x88),
                              unaff_R13D,in_stack_00000020);
                *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                        0x1c) = (int)(short)in_stack_00000050[1];
                *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                        0x20) = (int)*(short *)((longlong)in_stack_00000050 + 6);
                puVar29 = (uint *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                  0x24);
                *puVar29 = *puVar29 & 0xfffffffc;
                FUN_140df8560(puVar14,lVar16);
              }
              plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + 0x40);
              if (*plVar17 != 0) {
                FUN_140122b10(*plVar17,1);
              }
              func_0x0001400703c0(unaff_RBP + 0x40);
            }
            func_0x000140070850(in_stack_00000050 + 8);
            uVar8 = func_0x0001409cbf90(lVar16);
            func_0x000140070800(in_stack_00000050 + 0xe,unaff_RBP + 0x48);
            func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x1b8);
            puVar21 = *(undefined8 **)(unaff_RBP + 0x48);
            unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
            while (puVar21 < *(undefined8 **)(unaff_RBP + 0x1b8)) {
              FUN_140138db0(lVar16,*puVar21,uVar8);
              supplier_0x154de20(**(undefined8 **)(unaff_RBP + 0x48),0x3c);
              puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x48) + 8);
              *(undefined8 **)(unaff_RBP + 0x48) = puVar21;
            }
            if (*(longlong *)(in_stack_00000050 + 0xe) != *(longlong *)(in_stack_00000050 + 0x10)) {
              *(longlong *)(in_stack_00000050 + 0x10) = *(longlong *)(in_stack_00000050 + 0xe);
            }
code_r0x0001409f8ba9:
            piVar18 = *(int **)(in_stack_00000050 + 0x18);
            func_0x0001400bbe40(unaff_RBP + 0x88,&stack0x00000050);
            func_0x000140070d00(unaff_RBP + 0x108,*unaff_R15,unaff_R15);
            func_0x000140070d00(unaff_RBP + 0x1c0,unaff_R15[1],unaff_R15);
            puVar21 = *(undefined8 **)(unaff_RBP + 0x108);
            while (plVar17 = plRam0000000142401448, lVar23 = in_stack_00000058,
                  puVar21 < *(undefined8 **)(unaff_RBP + 0x1c0)) {
              if ((((int *)*puVar21 != in_stack_00000050) &&
                  (lVar16 = *(longlong *)((int *)*puVar21 + 0x18), lVar16 != 0)) &&
                 (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
              puVar21 = puVar21 + 1;
              *(undefined8 **)(unaff_RBP + 0x108) = puVar21;
            }
            for (; plVar17 < plRam0000000142401450; plVar17 = plVar17 + 1) {
              if ((((*(uint *)(*plVar17 + 0x110) & 0x502) != 2) &&
                  (lVar16 = *(longlong *)(*plVar17 + 0x1208), lVar16 != 0)) &&
                 (*(int *)(lVar16 + 0x44) == *piVar18)) goto code_r0x0001409fa25c;
            }
            *(undefined4 *)(*(longlong *)(piVar18 + 0x4c) + 0x20) = 0;
            **(int **)(piVar18 + 0x4c) = unaff_R13D;
            *(int *)(*(longlong *)(piVar18 + 0x4c) + 4) = unaff_R13D;
          }
          goto code_r0x0001409fa25c;
        }
        iVar9 = _DAT_142161ab8 * 0x62700 + _DAT_1423a424c;
        if (0x31 < iVar9 - (*piVar19 * 0x62700 + piVar19[1])) {
          if (iVar9 - (*(int *)(lVar23 + 0x38) * 0x62700 + *(int *)(lVar23 + 0x3c)) < 600) {
            iVar9 = piVar19[9];
            iVar10 = piVar19[10];
            *piVar19 = unaff_R13D;
            *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
                 unaff_R13D;
            iVar11 = FUN_1400734f0(0x65);
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = iVar11 + -0x32 + iVar9;
            iVar9 = FUN_1400734f0(0x65);
            *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = iVar9 + -0x32 + iVar10;
            if (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) < 0) {
              *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = 0;
            }
            if (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) < 0) {
              *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = 0;
            }
            iVar9 = *(int *)(_DAT_142507ed8 + 0xa0) * 0x30;
            if (iVar9 <= *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) {
              *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = iVar9 + -1;
            }
            iVar9 = *(int *)(_DAT_142507ed8 + 0xa4) * 0x30;
            piVar18 = in_stack_00000050;
            if (iVar9 <= *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14)) {
              *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = iVar9 + -1;
            }
          }
          else {
            piVar19[8] = piVar19[8] | 1;
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x24);
            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x28);
            **(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) = unaff_R13D;
            *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 4) =
                 unaff_R13D;
            piVar18 = in_stack_00000050;
          }
        }
      }
code_r0x0001409f8e11:
      puVar14 = *(undefined4 **)(piVar18 + 0x18);
      if ((puVar14[0x4e] == 0xb) && (puVar14[4] != -1)) {
        piVar18 = (int *)FUN_14013fd50();
        *(int **)(in_stack_00000050 + 0x18) = piVar18;
        in_stack_00000050[0x17] = *piVar18;
        *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 4) = puVar14[1];
        FUN_1400fff90(*(undefined8 *)(in_stack_00000050 + 0x18),4);
        *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x38) = _DAT_142161ab8;
        *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x3c) = _DAT_1423a424c;
        *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) = unaff_R13D;
        *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) = unaff_R13D;
        *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x44) = puVar14[0x11];
        *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x40) = *puVar14;
        *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x48) = puVar14[0x13];
        *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x4c) = puVar14[0x13];
        FUN_1400bb560(*(undefined8 *)(in_stack_00000050 + 0x18),unaff_R12 + 0x1420);
        FUN_140142690(puVar14,in_stack_00000050);
        piVar18 = in_stack_00000050;
      }
      if (((*(int *)(*(longlong *)(piVar18 + 0x18) + 0x138) == 0x18) &&
          (FUN_140139960(piVar18), piVar18 = in_stack_00000050,
          *(longlong *)(in_stack_00000050 + 0x18) == 0)) ||
         ((*(int *)(*(longlong *)(piVar18 + 0x18) + 0x138) == 0x11 &&
          (FUN_140139b40(piVar18), piVar18 = in_stack_00000050,
          *(longlong *)(in_stack_00000050 + 0x18) == 0)))) {
code_r0x0001409f9837:
        supplier_0xbaf40(unaff_RBP + 0x1f8,&stack0x00000050);
        lVar23 = in_stack_00000058;
      }
      else {
        lVar23 = *(longlong *)(piVar18 + 0x18);
        iVar9 = *(int *)(lVar23 + 0x138);
        if (iVar9 == 0x19) {
          if ((((*(byte *)(*(longlong *)(lVar23 + 0x130) + 0x48) & 1) == 0) ||
              ((int)(short)piVar18[1] != *(int *)(lVar23 + 0x10))) ||
             ((int)*(short *)((longlong)piVar18 + 6) != *(int *)(lVar23 + 0x14)))
          goto code_r0x0001409f97a7;
          lVar16 = 0;
          func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x48);
          func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0x110);
          puVar20 = (undefined1 *)
                    func_0x0001400703e0(unaff_RBP + -0x48,&stack0x00000077,unaff_RBP + 0x110);
          cVar6 = func_0x000140066d70(*puVar20,0);
          lVar23 = in_stack_00000058;
          if (cVar6 != '\0') {
            do {
              plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x48);
              iVar9 = (int)(short)in_stack_00000050[1];
              if (*(int *)(*plVar17 + 0x1f8) <=
                  iVar9 / 3 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) {
                plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x48);
                iVar9 = (int)(short)in_stack_00000050[1];
                if (iVar9 / 3 + (iVar9 >> 0x1f) +
                    (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    <= *(int *)(*plVar17 + 0x200)) {
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x48);
                  iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                  if (*(int *)(*plVar17 + 0x1fc) <=
                      iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     ) {
                    plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x48);
                    iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                    if (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f) <= *(int *)(*plVar17 + 0x204)) {
                      plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x48);
                      lVar16 = *plVar17;
                    }
                  }
                }
              }
              func_0x0001400703c0(unaff_RBP + -0x48);
              puVar20 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -0x48,&stack0x00000077,unaff_RBP + 0x110);
              cVar6 = func_0x000140066d70(*puVar20,0);
            } while (cVar6 != '\0');
            lVar23 = in_stack_00000058;
            if (lVar16 == 0) goto code_r0x0001409fa25c;
            if ((iRam00000001418b821c == 0) && (*(int *)(lVar16 + 0x88) == iRam00000001423af9f4)) {
              FUN_14010c780(in_stack_00000050,0);
              supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
              lVar23 = in_stack_00000058;
              goto code_r0x0001409fa25c;
            }
            lVar25 = *(longlong *)(lVar16 + 0x308);
            if (lVar25 == 0) {
              func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + -0x18);
              func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x118);
              puVar20 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -0x18,&stack0x00000078,unaff_RBP + 0x118);
              cVar6 = func_0x000140066d70(*puVar20,0);
              if (cVar6 != '\0') {
                do {
                  puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x18);
                  puVar14 = (undefined4 *)func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                  uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
                  if (puVar14 != (undefined4 *)0x0) {
                    FUN_1400bb430(*puVar14,lVar16 + 0x90);
                    in_stack_00000020 = (longlong *)CONCAT44(uVar8,unaff_R13D);
                    FUN_140bcda20(*(undefined8 *)(puVar14 + 4),1,*(undefined4 *)(lVar16 + 0x88),
                                  unaff_R13D,in_stack_00000020);
                    *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28)
                            + 0x1c) = (int)(short)in_stack_00000050[1];
                    *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28)
                            + 0x20) = (int)*(short *)((longlong)in_stack_00000050 + 6);
                    puVar29 = (uint *)(*(longlong *)
                                        (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                      0x24);
                    *puVar29 = *puVar29 & 0xfffffffc;
                    FUN_140df8560(puVar14,lVar16);
                  }
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x18);
                  if (*plVar17 != 0) {
                    FUN_140122b10(*plVar17,1);
                  }
                  func_0x0001400703c0(unaff_RBP + -0x18);
                  puVar20 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0x18,&stack0x00000078,unaff_RBP + 0x118
                                               );
                  cVar6 = func_0x000140066d70(*puVar20,0);
                } while (cVar6 != '\0');
                unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
              }
              func_0x000140070850(in_stack_00000050 + 8);
              uVar8 = func_0x0001409cbf90(lVar16);
              func_0x000140070800(in_stack_00000050 + 0xe,unaff_RBP + 0x50);
              func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x1c8);
              puVar21 = *(undefined8 **)(unaff_RBP + 0x50);
              while (puVar21 < *(undefined8 **)(unaff_RBP + 0x1c8)) {
                FUN_140138db0(lVar16,*puVar21,uVar8);
                supplier_0x154de20(**(undefined8 **)(unaff_RBP + 0x50),0x3c);
                puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x50) + 8);
                *(undefined8 **)(unaff_RBP + 0x50) = puVar21;
              }
code_r0x0001409f93a6:
              if (*(longlong *)(in_stack_00000050 + 0xe) != *(longlong *)(in_stack_00000050 + 0x10))
              {
                *(longlong *)(in_stack_00000050 + 0x10) = *(longlong *)(in_stack_00000050 + 0xe);
              }
              supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
              lVar23 = in_stack_00000058;
              goto code_r0x0001409fa25c;
            }
code_r0x0001409f913a:
            iVar9 = *(int *)(lVar25 + 0x2d8ec);
            lVar23 = in_stack_00000058;
            if (iVar9 != -1000000) {
              lVar4 = *(longlong *)(in_stack_00000050 + 0x18);
              if ((*(int *)(lVar4 + 0x10) != iVar9) ||
                 (*(int *)(lVar4 + 0x14) != *(int *)(lVar25 + 0x2d8f0))) {
                *(int *)(lVar4 + 0x10) = iVar9;
                *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                     *(undefined4 *)(*(longlong *)(lVar16 + 0x308) + 0x2d8f0);
              }
              if (((int)(short)in_stack_00000050[1] ==
                   *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10)) &&
                 ((int)*(short *)((longlong)in_stack_00000050 + 6) ==
                  *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14))) {
                FUN_140130d40(in_stack_00000050,lVar16);
                supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
                lVar23 = in_stack_00000058;
              }
            }
          }
        }
        else {
          if (iVar9 == 0x13) {
            if (((*(byte *)(*(longlong *)(lVar23 + 0x130) + 0x18) & 1) != 0) &&
               (((int)(short)piVar18[1] == *(int *)(lVar23 + 0x10) &&
                ((int)*(short *)((longlong)piVar18 + 6) == *(int *)(lVar23 + 0x14))))) {
              lVar16 = 0;
              func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x78);
              func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0x120);
              puVar20 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -0x78,&stack0x00000079,unaff_RBP + 0x120);
              cVar6 = func_0x000140066d70(*puVar20,0);
              lVar23 = in_stack_00000058;
              if (cVar6 != '\0') {
                do {
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x78);
                  iVar9 = (int)(short)in_stack_00000050[1];
                  if (*(int *)(*plVar17 + 0x1f8) <=
                      iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     ) {
                    plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x78);
                    iVar9 = (int)(short)in_stack_00000050[1];
                    if (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f) <= *(int *)(*plVar17 + 0x200)) {
                      plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x78);
                      iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                      if (*(int *)(*plVar17 + 0x1fc) <=
                          iVar9 / 3 + (iVar9 >> 0x1f) +
                          (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) {
                        plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x78);
                        iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                        if (iVar9 / 3 + (iVar9 >> 0x1f) +
                            (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                                 0x1f) <= *(int *)(*plVar17 + 0x204)) {
                          plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x78);
                          lVar16 = *plVar17;
                        }
                      }
                    }
                  }
                  func_0x0001400703c0(unaff_RBP + -0x78);
                  puVar20 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0x78,&stack0x00000079,unaff_RBP + 0x120
                                               );
                  cVar6 = func_0x000140066d70(*puVar20,0);
                } while (cVar6 != '\0');
                lVar23 = in_stack_00000058;
                if (lVar16 != 0) {
                  if ((iRam00000001418b821c != 0) ||
                     (*(int *)(lVar16 + 0x88) != iRam00000001423af9f4)) {
                    lVar25 = *(longlong *)(lVar16 + 0x308);
                    if (lVar25 == 0) {
                      func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + -0x10);
                      func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x128);
                      puVar20 = (undefined1 *)
                                func_0x0001400703e0(unaff_RBP + -0x10,&stack0x0000007a,
                                                    unaff_RBP + 0x128);
                      cVar6 = func_0x000140066d70(*puVar20,0);
                      if (cVar6 != '\0') {
                        do {
                          puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -0x10);
                          puVar14 = (undefined4 *)
                                    func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                          uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
                          if (puVar14 != (undefined4 *)0x0) {
                            FUN_1400bb430(*puVar14,lVar16 + 0x90);
                            in_stack_00000020 = (longlong *)CONCAT44(uVar8,unaff_R13D);
                            FUN_140bcda20(*(undefined8 *)(puVar14 + 4),1,
                                          *(undefined4 *)(lVar16 + 0x88),unaff_R13D,
                                          in_stack_00000020);
                            *(int *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                    0x1c) = (int)(short)in_stack_00000050[1];
                            *(int *)(*(longlong *)
                                      (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                    0x20) = (int)*(short *)((longlong)in_stack_00000050 + 6);
                            puVar29 = (uint *)(*(longlong *)
                                                (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) +
                                                0x28) + 0x24);
                            *puVar29 = *puVar29 & 0xfffffffc;
                            FUN_140df8560(puVar14,lVar16);
                          }
                          plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x10);
                          if (*plVar17 != 0) {
                            FUN_140122b10(*plVar17,1);
                          }
                          func_0x0001400703c0(unaff_RBP + -0x10);
                          puVar20 = (undefined1 *)
                                    func_0x0001400703e0(unaff_RBP + -0x10,&stack0x0000007a,
                                                        unaff_RBP + 0x128);
                          cVar6 = func_0x000140066d70(*puVar20,0);
                        } while (cVar6 != '\0');
                        unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
                      }
                      func_0x000140070850(in_stack_00000050 + 8);
                      uVar8 = func_0x0001409cbf90(lVar16);
                      func_0x000140070800(in_stack_00000050 + 0xe,unaff_RBP + 0x58);
                      func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x1d0);
                      puVar21 = *(undefined8 **)(unaff_RBP + 0x58);
                      while (puVar21 < *(undefined8 **)(unaff_RBP + 0x1d0)) {
                        FUN_140138db0(lVar16,*puVar21,uVar8);
                        supplier_0x154de20(**(undefined8 **)(unaff_RBP + 0x58),0x3c);
                        puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x58) + 8);
                        *(undefined8 **)(unaff_RBP + 0x58) = puVar21;
                      }
                      goto code_r0x0001409f93a6;
                    }
                    goto code_r0x0001409f913a;
                  }
                  FUN_14010c780(in_stack_00000050,0);
                  supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
                  lVar23 = in_stack_00000058;
                }
              }
              goto code_r0x0001409fa25c;
            }
          }
          else if ((iVar9 == 0x14) &&
                  (FUN_14013af60(piVar18), piVar18 = in_stack_00000050,
                  *(longlong *)(in_stack_00000050 + 0x18) == 0)) goto code_r0x0001409f9837;
code_r0x0001409f97a7:
          iVar9 = report_mission_goal_getter(*(undefined8 *)(piVar18 + 0x18));
          if (((((iVar9 == 0x16) && (FUN_14013b490(), *(longlong *)(in_stack_00000050 + 0x18) == 0))
               || ((iVar9 = report_mission_goal_getter(*(undefined8 *)(in_stack_00000050 + 0x18)),
                   iVar9 == 0x17 && (FUN_14013b800(), *(longlong *)(in_stack_00000050 + 0x18) == 0))
                  )) || ((iVar9 = report_mission_goal_getter
                                            (*(undefined8 *)(in_stack_00000050 + 0x18)),
                         iVar9 == 0x15 &&
                         (FUN_14013baf0(), *(longlong *)(in_stack_00000050 + 0x18) == 0)))) ||
             ((iVar9 = report_mission_goal_getter(*(undefined8 *)(in_stack_00000050 + 0x18)),
              iVar9 == 0x12 && (FUN_14013be70(), *(longlong *)(in_stack_00000050 + 0x18) == 0))))
          goto code_r0x0001409f9837;
          iVar9 = report_mission_goal_getter(*(undefined8 *)(in_stack_00000050 + 0x18));
          if (iVar9 == 2) {
            lVar23 = *(longlong *)(in_stack_00000050 + 0x18);
            if ((*(byte *)(*(longlong *)(lVar23 + 0x130) + 0x58) & 1) == 0) {
              lVar23 = FUN_14007f0e0(_DAT_142507ed8,*(undefined4 *)(lVar23 + 8));
              if (lVar23 == 0) goto code_r0x0001409fa134;
              if ((iRam00000001418b821c == 0) && (*(int *)(lVar23 + 0x88) == iRam00000001423af9f4))
              {
code_r0x0001409fa671:
                unaff_R13D = -1;
                goto code_r0x0001409fa227;
              }
              if (((int)(short)in_stack_00000050[1] < *(int *)(lVar23 + 0x1f8) * 3) ||
                 ((((*(int *)(lVar23 + 0x200) + 1) * 3 <= (int)(short)in_stack_00000050[1] ||
                   ((int)*(short *)((longlong)in_stack_00000050 + 6) < *(int *)(lVar23 + 0x1fc) * 3)
                   ) || ((*(int *)(lVar23 + 0x204) + 1) * 3 <=
                         (int)*(short *)((longlong)in_stack_00000050 + 6))))) {
                if ((iRam00000001418b821c != 0) ||
                   (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 4) != _DAT_1423af9f8)) {
                  iVar9 = **(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130);
                  if ((iVar9 == 1) || (iVar9 == 2)) {
                    func_0x000140070800(*(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) +
                                        10,unaff_RBP + 0x60);
                    func_0x0001400707f0(*(longlong *)
                                         (*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x28,
                                        unaff_RBP + 0x150);
                    func_0x000140070800(*(longlong *)
                                         (*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x40,
                                        unaff_RBP + 0xb0);
                    func_0x0001400707f0(*(longlong *)
                                         (*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x40,
                                        unaff_RBP + 0x220);
                    puVar20 = (undefined1 *)
                              func_0x0001400703e0(unaff_RBP + 0x60,&stack0x0000007e,
                                                  unaff_RBP + 0x150);
                    cVar6 = func_0x000140066d70(*puVar20,0);
                    if (cVar6 != '\0') {
                      do {
                        pbVar28 = (byte *)func_0x0001400703d0(unaff_RBP + 0xb0);
                        if ((*pbVar28 & 1) == 0) {
                          puVar14 = (undefined4 *)func_0x0001400703d0(unaff_RBP + 0x60);
                          lVar23 = FUN_14007f0e0(_DAT_142507ed8,*puVar14);
                          if (lVar23 != 0) {
                            iVar10 = (int)*(short *)((longlong)in_stack_00000050 + 6) -
                                     ((*(int *)(lVar23 + 0x204) + *(int *)(lVar23 + 0x1fc)) * 3) / 2
                            ;
                            iVar9 = -iVar10;
                            if (iVar9 < 0) {
                              iVar9 = iVar10;
                            }
                            iVar11 = (int)(short)in_stack_00000050[1] -
                                     ((*(int *)(lVar23 + 0x200) + *(int *)(lVar23 + 0x1f8)) * 3) / 2
                            ;
                            iVar10 = -iVar11;
                            if (iVar10 < 0) {
                              iVar10 = iVar11;
                            }
                            if ((iVar9 + iVar10 < 0x90) &&
                               (in_stack_00000068 = (int *)FUN_140126560(in_stack_00000050,3,10),
                               in_stack_00000068 != (int *)0x0)) {
                              supplier_0xbaf40(unaff_RBP + 0x70,&stack0x00000068);
                              puVar29 = (uint *)func_0x0001400703d0(unaff_RBP + 0xb0);
                              *puVar29 = *puVar29 | 1;
                              puVar14 = *(undefined4 **)(in_stack_00000050 + 0x18);
                              piVar18 = (int *)FUN_14013fd50();
                              *(int **)(in_stack_00000068 + 0x18) = piVar18;
                              in_stack_00000068[0x17] = *piVar18;
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 4) =
                                   puVar14[1];
                              FUN_1400fff90(*(undefined8 *)(in_stack_00000068 + 0x18),9);
                              *(int *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x38) =
                                   _DAT_142161ab8;
                              *(int *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x3c) =
                                   _DAT_1423a424c;
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 8) =
                                   *(undefined4 *)(lVar23 + 0x88);
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x10) =
                                   0xffffffff;
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x14) =
                                   0xffffffff;
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x44) =
                                   puVar14[0x11];
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x40) =
                                   *puVar14;
                              *(undefined4 *)(*(longlong *)(in_stack_00000068 + 0x18) + 0x48) =
                                   puVar14[0x13];
                              if (in_stack_00000068 == in_stack_00000050) {
                                lVar16 = *(longlong *)(in_stack_00000068 + 0x18);
                                uVar8 = puVar14[0x13];
code_r0x0001409fa60a:
                                *(undefined4 *)(lVar16 + 0x4c) = uVar8;
                              }
                              else {
                                lVar23 = supplier_0x70410(in_stack_00000068 + 8);
                                if (lVar23 != 0) {
                                  uVar15 = supplier_0x70410(in_stack_00000068 + 8);
                                  iVar9 = FUN_1400734f0(uVar15);
                                  puVar21 = (undefined8 *)
                                            supplier_0x707e0(in_stack_00000068 + 8,(longlong)iVar9);
                                  lVar23 = func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                                  if (lVar23 != 0) {
                                    lVar16 = *(longlong *)(in_stack_00000068 + 0x18);
                                    uVar8 = *(undefined4 *)(*(longlong *)(lVar23 + 0x10) + 0xe0);
                                    goto code_r0x0001409fa60a;
                                  }
                                }
                              }
                              FUN_1400bb560(*(undefined8 *)(in_stack_00000068 + 0x18),
                                            unaff_R12 + 0x1420);
                            }
                          }
                        }
                        unaff_R13D = -1;
                        func_0x000140070910(unaff_RBP + 0x60);
                        func_0x000140070910(unaff_RBP + 0xb0);
                        puVar20 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + 0x60,&stack0x0000007e,
                                                      unaff_RBP + 0x150);
                        cVar6 = func_0x000140066d70(*puVar20,0);
                      } while (cVar6 != '\0');
                      goto code_r0x0001409fa227;
                    }
                    goto code_r0x0001409fa671;
                  }
                }
              }
              else if (*(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 8)
                       == -1) {
                *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 8) =
                     _DAT_142161ab8;
                *(int *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0xc) =
                     _DAT_1423a424c;
                if (((*(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130))[0x16] & 0x200U) ==
                    0) {
                  if ((**(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) == 3) &&
                     (FUN_140127b70(in_stack_00000050,lVar23,unaff_R12),
                     (*(byte *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) +
                               0x58) & 1) != 0)) goto code_r0x0001409fa134;
                  plVar17 = (longlong *)0x0;
                  if (**(int **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) == 4) {
                    iVar9 = in_stack_00000050[0x15];
                    cVar6 = FUN_14013c5c0(in_stack_00000050,500);
                    if (cVar6 != '\0') {
                      FUN_140125c90(in_stack_00000050);
                    }
                    iVar11 = FUN_1400734f0(10);
                    iVar10 = 0;
                    if (iVar11 == 0) {
                      iVar10 = 0x96;
                    }
                    iVar11 = func_0x0001410f4960(lVar23);
                    iVar12 = FUN_1400734f0(0x28);
                    if (iVar12 + iVar10 + iVar11 <= iVar9) {
                      plVar17 = (longlong *)FUN_14010a2c0();
                      (**(code **)(*plVar17 + 0x20))(plVar17);
                      lVar16 = func_0x0001409cbf30(lVar23);
                      *(longlong *)(unaff_RBP + 0xc0) = lVar16;
                      lVar25 = 0;
                      *(undefined8 *)(unaff_RBP + 0x148) = 0;
                      if (lVar16 != 0) {
                        lVar25 = FUN_140953e30(lVar16);
                        *(longlong *)(unaff_RBP + 0x148) = lVar25;
                      }
                      psVar26 = (short *)func_0x00014007f0b0(&DAT_1423edb78,
                                                             *(undefined4 *)
                                                              (*(longlong *)
                                                                (in_stack_00000050 + 0x18) + 4));
                      if ((*(byte *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x78) & 8) == 0) {
code_r0x0001409f9ead:
                        if ((psVar26 != (short *)0x0) && (lVar16 != 0)) {
                          *(undefined4 *)((longlong)plVar17 + 0x74) = *(undefined4 *)(psVar26 + 2);
                          *(undefined4 *)(plVar17 + 0xf) = *(undefined4 *)(lVar16 + 4);
                          if ((*psVar26 == 0) && (lVar25 != 0)) {
                            *(undefined4 *)(plVar17 + 0xf) = *(undefined4 *)(lVar25 + 4);
                          }
                        }
                      }
                      else if (psVar26 != (short *)0x0) {
                        psVar26 = (short *)FUN_140953ef0(psVar26);
                        goto code_r0x0001409f9ead;
                      }
                      uVar15 = supplier_0x70410(in_stack_00000050 + 8);
                      FUN_140070940(plVar17 + 0x10,uVar15);
                      iVar9 = supplier_0x70410(in_stack_00000050 + 8);
                      iVar9 = iVar9 + -1;
                      if (-1 < iVar9) {
                        lVar16 = (longlong)iVar9;
                        do {
                          puVar21 = (undefined8 *)supplier_0x707e0(in_stack_00000050 + 8,lVar16);
                          lVar25 = func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                          if (lVar25 == 0) {
code_r0x0001409f9f64:
                            FUN_1400bb050(plVar17 + 0x10,lVar16);
                          }
                          else {
                            sVar7 = **(short **)(lVar25 + 0x10);
                            if ((sVar7 == 0x68) || (sVar7 == 0x67)) goto code_r0x0001409f9f64;
                            uVar8 = *(undefined4 *)(*(short **)(lVar25 + 0x10) + 0x70);
                            puVar14 = (undefined4 *)supplier_0x70920(plVar17 + 0x10,lVar16);
                            *puVar14 = uVar8;
                          }
                          lVar16 = lVar16 + -1;
                          iVar9 = iVar9 + -1;
                        } while (-1 < iVar9);
                        lVar16 = *(longlong *)(unaff_RBP + 0xc0);
                      }
                      *(undefined4 *)((longlong)plVar17 + 0x6c) = *(undefined4 *)(lVar23 + 0x88);
                      *(undefined2 *)(plVar17 + 0xe) = *(undefined2 *)(lVar23 + 0x82);
                      *(undefined2 *)((longlong)plVar17 + 0x72) = *(undefined2 *)(lVar23 + 0x84);
                      *(int *)(plVar17 + 7) = _DAT_142161ab8;
                      *(int *)(plVar17 + 8) = _DAT_1423a424c;
                      *(longlong **)(unaff_RBP + 0xc0) = plVar17;
                      supplier_0xbaf40(0x142516670,unaff_RBP + 0xc0);
                      plVar27 = (longlong *)FUN_1401011e0();
                      if (psVar26 == (short *)0x0) {
                        uVar8 = 0xffffffff;
                      }
                      else {
                        uVar8 = *(undefined4 *)(psVar26 + 2);
                      }
                      *(undefined4 *)(plVar27 + 5) = uVar8;
                      if (*(longlong *)(unaff_RBP + 0x148) == 0) {
                        uVar8 = 0xffffffff;
                      }
                      else {
                        uVar8 = *(undefined4 *)(*(longlong *)(unaff_RBP + 0x148) + 4);
                      }
                      *(undefined4 *)((longlong)plVar27 + 0x2c) = uVar8;
                      if (lVar16 == 0) {
                        uVar8 = 0xffffffff;
                      }
                      else {
                        uVar8 = *(undefined4 *)(lVar16 + 4);
                      }
                      *(undefined4 *)(plVar27 + 6) = uVar8;
                      *(undefined4 *)((longlong)plVar27 + 0x34) = *(undefined4 *)(lVar23 + 0x88);
                      *(int *)(plVar27 + 1) = _DAT_142161ab8;
                      *(int *)((longlong)plVar27 + 0xc) = _DAT_1423a424c;
                      (**(code **)(*plVar27 + 0x128))(plVar27);
                      if (((*(longlong *)(in_stack_00000050 + 0x18) != 0) &&
                          (lVar16 = FUN_140073b30(0x142504188,
                                                  *(undefined4 *)
                                                   (*(longlong *)(in_stack_00000050 + 0x18) + 0x44))
                          , lVar16 != 0)) && (*(longlong *)(lVar16 + 0x128) != 0)) {
                        FUN_1400ffe10(*(longlong *)(lVar16 + 0x128),(int)plVar27[4],(int)plVar27[1])
                        ;
                      }
                      unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
                      goto code_r0x0001409fa086;
                    }
                  }
                  cVar6 = FUN_140131ce0(in_stack_00000050,lVar23);
                  if (cVar6 == '\0') {
                    lVar23 = supplier_0x70410(in_stack_00000050 + 8);
                    if ((lVar23 != 0) ||
                       (lVar23 = supplier_0x70410(in_stack_00000050 + 0xe), lVar23 != 0)) {
                      puVar29 = (uint *)(*(longlong *)
                                          (*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x58);
                      *puVar29 = *puVar29 | 1;
                      *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) =
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x5c);
                      *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                           *(undefined4 *)
                            (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x60);
                      unaff_R13D = -1;
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 8) =
                           0xffffffff;
                      *(undefined4 *)
                       (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0xc) =
                           0xffffffff;
                      goto code_r0x0001409fa227;
                    }
                    supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
                    goto code_r0x0001409fa134;
                  }
                }
                else {
                  FUN_1401276f0(in_stack_00000050,lVar23,unaff_R12);
                  if ((*(byte *)(*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) +
                                0x58) & 1) != 0) {
code_r0x0001409fa134:
                    unaff_R13D = -1;
                    lVar23 = in_stack_00000058;
                    goto code_r0x0001409fa25c;
                  }
                  plVar17 = (longlong *)0x0;
                }
code_r0x0001409fa086:
                lVar16 = FUN_140073b30(0x142504188,
                                       *(undefined4 *)
                                        (*(longlong *)(in_stack_00000050 + 0x18) + 0x44));
                if (lVar16 != 0) {
                  uRam0000000142516698 = *(undefined8 *)(lVar16 + 0x128);
                }
                switch(**(undefined4 **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130)) {
                case 0:
                  FUN_140126a80(in_stack_00000050,lVar23,unaff_R12);
                  break;
                case 1:
                case 2:
                  FUN_140126f50(in_stack_00000050,lVar23,unaff_R12);
                  break;
                case 3:
                  puVar29 = *(undefined4 **)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x16
                  ;
                  *puVar29 = *puVar29 | 1;
                  *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10) =
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x5c);
                  *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14) =
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0x60);
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 8) = 0xffffffff
                  ;
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x130) + 0xc) =
                       0xffffffff;
                  break;
                case 4:
                case 5:
                case 6:
                  in_stack_00000020 = plVar17;
                  FUN_1401287f0(in_stack_00000050,lVar23,unaff_R12,unaff_RBP + 0x70,plVar17);
                }
                uRam0000000142516698 = 0;
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x58))(plVar17);
                  iVar9 = supplier_0x70410(0x142516670);
                  FUN_1400baf60(0x142516670,(longlong)(iVar9 + -1));
                }
              }
              unaff_R13D = -1;
            }
            else if (((int)(short)in_stack_00000050[1] == *(int *)(lVar23 + 0x10)) &&
                    ((int)*(short *)((longlong)in_stack_00000050 + 6) == *(int *)(lVar23 + 0x14))) {
              lVar16 = 0;
              func_0x000140070800(_DAT_142507ed8 + 0x178,unaff_RBP + -0x70);
              func_0x0001400707f0(_DAT_142507ed8 + 0x178,unaff_RBP + 0x130);
              puVar20 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + -0x70,&stack0x0000007b,unaff_RBP + 0x130);
              cVar6 = func_0x000140066d70(*puVar20,0);
              lVar23 = in_stack_00000058;
              if (cVar6 != '\0') {
                do {
                  plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x70);
                  iVar9 = (int)(short)in_stack_00000050[1];
                  if (*(int *)(*plVar17 + 0x1f8) <=
                      iVar9 / 3 + (iVar9 >> 0x1f) +
                      (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     ) {
                    plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x70);
                    iVar9 = (int)(short)in_stack_00000050[1];
                    if (iVar9 / 3 + (iVar9 >> 0x1f) +
                        (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                             0x1f) <= *(int *)(*plVar17 + 0x200)) {
                      plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x70);
                      iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                      if (*(int *)(*plVar17 + 0x1fc) <=
                          iVar9 / 3 + (iVar9 >> 0x1f) +
                          (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) {
                        plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x70);
                        iVar9 = (int)*(short *)((longlong)in_stack_00000050 + 6);
                        if (iVar9 / 3 + (iVar9 >> 0x1f) +
                            (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >>
                                 0x1f) <= *(int *)(*plVar17 + 0x204)) {
                          plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -0x70);
                          lVar16 = *plVar17;
                        }
                      }
                    }
                  }
                  func_0x0001400703c0(unaff_RBP + -0x70);
                  puVar20 = (undefined1 *)
                            func_0x0001400703e0(unaff_RBP + -0x70,&stack0x0000007b,unaff_RBP + 0x130
                                               );
                  cVar6 = func_0x000140066d70(*puVar20,0);
                } while (cVar6 != '\0');
                lVar23 = in_stack_00000058;
                if (lVar16 != 0) {
                  if ((iRam00000001418b821c == 0) &&
                     (*(int *)(lVar16 + 0x88) == iRam00000001423af9f4)) {
                    FUN_14010c780(in_stack_00000050,0);
                    supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
                    lVar23 = in_stack_00000058;
                  }
                  else {
                    lVar25 = *(longlong *)(lVar16 + 0x308);
                    if (lVar25 != 0) goto code_r0x0001409f913a;
                    func_0x000140070800(in_stack_00000050 + 8,unaff_RBP + -8);
                    func_0x0001400707f0(in_stack_00000050 + 8,unaff_RBP + 0x138);
                    puVar20 = (undefined1 *)
                              func_0x0001400703e0(unaff_RBP + -8,&stack0x0000007c,unaff_RBP + 0x138)
                    ;
                    cVar6 = func_0x000140066d70(*puVar20,0);
                    if (cVar6 != '\0') {
                      do {
                        puVar21 = (undefined8 *)func_0x0001400703d0(unaff_RBP + -8);
                        puVar14 = (undefined4 *)
                                  func_0x000140076aa0(0x1424014f8,*(undefined4 *)*puVar21);
                        uVar8 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
                        if (puVar14 != (undefined4 *)0x0) {
                          FUN_1400bb430(*puVar14,lVar16 + 0x90);
                          in_stack_00000020 = (longlong *)CONCAT44(uVar8,unaff_R13D);
                          FUN_140bcda20(*(undefined8 *)(puVar14 + 4),1,
                                        *(undefined4 *)(lVar16 + 0x88),unaff_R13D,in_stack_00000020)
                          ;
                          *(int *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                  0x1c) = (int)(short)in_stack_00000050[1];
                          *(int *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) + 0x28) +
                                  0x20) = (int)*(short *)((longlong)in_stack_00000050 + 6);
                          puVar29 = (uint *)(*(longlong *)
                                              (*(longlong *)(*(longlong *)(puVar14 + 4) + 0x130) +
                                              0x28) + 0x24);
                          *puVar29 = *puVar29 & 0xfffffffc;
                          FUN_140df8560(puVar14,lVar16);
                        }
                        plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + -8);
                        if (*plVar17 != 0) {
                          FUN_140122b10(*plVar17,1);
                        }
                        func_0x0001400703c0(unaff_RBP + -8);
                        puVar20 = (undefined1 *)
                                  func_0x0001400703e0(unaff_RBP + -8,&stack0x0000007c,
                                                      unaff_RBP + 0x138);
                        cVar6 = func_0x000140066d70(*puVar20,0);
                      } while (cVar6 != '\0');
                      unaff_R12 = *(longlong *)(unaff_RBP + -0x80);
                    }
                    func_0x000140070850(in_stack_00000050 + 8);
                    uVar8 = func_0x0001409cbf90(lVar16);
                    func_0x000140070800(in_stack_00000050 + 0xe);
                    func_0x0001400707f0(in_stack_00000050 + 0xe,unaff_RBP + 0x140);
                    puVar20 = (undefined1 *)func_0x0001400703e0();
                    cVar6 = func_0x000140066d70(*puVar20,0);
                    while (cVar6 != '\0') {
                      puVar21 = (undefined8 *)func_0x0001400703d0();
                      FUN_140138db0(lVar16,*puVar21,uVar8);
                      puVar21 = (undefined8 *)func_0x0001400703d0();
                      supplier_0x154de20(*puVar21,0x3c);
                      func_0x0001400703c0();
                      puVar20 = (undefined1 *)func_0x0001400703e0();
                      cVar6 = func_0x000140066d70(*puVar20,0);
                    }
                    func_0x000140070850(in_stack_00000050 + 0xe);
                    supplier_0xbaf40(unaff_RBP + 0x88,&stack0x00000050);
                    lVar23 = in_stack_00000058;
                  }
                }
              }
              goto code_r0x0001409fa25c;
            }
          }
code_r0x0001409fa227:
          lVar16 = supplier_0x70930(in_stack_00000050 + 0x1e);
          lVar23 = in_stack_00000058;
          if (lVar16 == 0) {
            iVar9 = *(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x10);
            if (iVar9 != -1) {
              FUN_14012b630(in_stack_00000050,iVar9,
                            *(undefined4 *)(*(longlong *)(in_stack_00000050 + 0x18) + 0x14));
              lVar23 = in_stack_00000058;
            }
          }
        }
      }
code_r0x0001409fa25c:
      while( true ) {
        do {
          uVar13 = (int)*(undefined8 *)(unaff_RBP + 0x158) - 1;
          *(ulonglong *)(unaff_RBP + 0x158) = (ulonglong)uVar13;
          lVar23 = lVar23 + -1;
          unaff_R15 = *(longlong **)(unaff_RBP + 0x160);
          in_stack_00000058 = lVar23;
          if ((int)uVar13 < 0) {
            puVar30 = *(undefined8 **)(unaff_RBP + 0x200);
            for (puVar21 = *(undefined8 **)(unaff_RBP + 0x1f8); puVar21 < puVar30;
                puVar21 = puVar21 + 1) {
              FUN_14013de70(*(undefined4 *)*puVar21,unaff_R12 + 0x1408);
            }
            func_0x000140070d00(unaff_RBP + 0x68,*(undefined8 *)(unaff_RBP + 0x88),unaff_RBP + 0x88)
            ;
            puVar21 = *(undefined8 **)(unaff_RBP + 0x90);
            puVar30 = *(undefined8 **)(unaff_RBP + 0x68);
            while (puVar30 < puVar21) {
              FUN_1401bdd00(*puVar30);
              FUN_140122ce0(**(undefined8 **)(unaff_RBP + 0x68));
              puVar30 = (undefined8 *)(*(longlong *)(unaff_RBP + 0x68) + 8);
              *(undefined8 **)(unaff_RBP + 0x68) = puVar30;
            }
            func_0x000140070d00(unaff_RBP + 0xb8,*(undefined8 *)(unaff_RBP + 0x70),unaff_RBP + 0x70)
            ;
            func_0x000140070d00(unaff_RBP + 0x1e0,*(undefined8 *)(unaff_RBP + 0x78),unaff_RBP + 0x70
                               );
            puVar21 = *(undefined8 **)(unaff_RBP + 0xb8);
            while (puVar21 < *(undefined8 **)(unaff_RBP + 0x1e0)) {
              FUN_1400bb560(*puVar21,unaff_R12 + 0x1408);
              puVar21 = (undefined8 *)(*(longlong *)(unaff_RBP + 0xb8) + 8);
              *(undefined8 **)(unaff_RBP + 0xb8) = puVar21;
            }
            FUN_140068130(unaff_RBP + 0x70);
            FUN_140068130(unaff_RBP + 0x1f8);
            FUN_140068130(unaff_RBP + 0x88);
            FUN_1402850d0(&stack0x0000007f);
            FUN_14154de00(*(ulonglong *)(unaff_RBP + 800) ^ (ulonglong)&stack0x00000000);
            return;
          }
        } while ((ulonglong)(unaff_R15[1] - *unaff_R15 >> 3) <= (ulonglong)uVar13);
        in_stack_00000050 = *(int **)(*unaff_R15 + lVar23 * 8);
        piVar19 = in_stack_00000050 + 0x1a;
        if (*(longlong *)(in_stack_00000050 + 0x18) != 0) break;
        if (0 < in_stack_00000050[0x1c]) {
          **(byte **)piVar19 = **(byte **)piVar19 & 0x7f;
        }
        func_0x0001400bbe40(unaff_RBP + 0x1f8,&stack0x00000050);
      }
      piVar18 = in_stack_00000050;
    } while ((in_stack_00000050[0x1c] < 1) || (-1 < **(char **)piVar19));
    if ((iRam00000001418b821c == 0) &&
       (*(int *)(*(longlong *)(in_stack_00000050 + 0x18) + 4) == _DAT_1423af9f8)) {
      func_0x000140070800(0x142401448,unaff_RBP + 200);
      func_0x0001400707f0(0x142401448,unaff_RBP + 0x1d8);
      while (*(ulonglong *)(unaff_RBP + 200) < *(ulonglong *)(unaff_RBP + 0x1d8)) {
        plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + 200);
        lVar16 = *plVar17;
        if (((*(uint *)(lVar16 + 0x110) & 2) == 0) && ((int)*(uint *)(lVar16 + 0x110) < 0)) {
          lVar23 = supplier_0x70930(*(longlong *)(in_stack_00000050 + 0x18) + 0x98);
          if ((lVar23 != 0) && (lVar23 = func_0x0001413c6dc0(lVar16), lVar23 != 0)) {
            func_0x000140070800(lVar23 + 0xe8,unaff_RBP + 8);
            func_0x0001400707f0(lVar23 + 0xe8,unaff_RBP + 0x168);
            puVar20 = (undefined1 *)
                      func_0x0001400703e0(unaff_RBP + 8,&stack0x00000070,unaff_RBP + 0x168);
            cVar6 = func_0x000140066d70(*puVar20,0);
            while (cVar6 != '\0') {
              plVar17 = (longlong *)func_0x0001400703d0(unaff_RBP + 8);
              plVar17 = (longlong *)*plVar17;
              sVar7 = (**(code **)*plVar17)(plVar17);
              if ((sVar7 == 10) &&
                 (lVar23 = func_0x00014007f0b0(&DAT_1423edb78,(int)plVar17[1]), lVar23 != 0)) {
                uVar8 = (**(code **)(*plVar17 + 0x30))(plVar17);
                puVar14 = (undefined4 *)FUN_1400bb380(uVar8,lVar23 + 0x1110);
                if ((puVar14 != (undefined4 *)0x0) &&
                   (iVar9 = func_0x00014013e0b0(*(undefined4 *)(lVar23 + 4),*puVar14,
                                                *(longlong *)(in_stack_00000050 + 0x18) + 0x98),
                   lVar23 = in_stack_00000058, piVar18 = in_stack_00000050, iVar9 != -1))
                goto code_r0x0001409f6988;
              }
              func_0x0001400703c0(unaff_RBP + 8);
              puVar20 = (undefined1 *)
                        func_0x0001400703e0(unaff_RBP + 8,&stack0x00000070,unaff_RBP + 0x168);
              cVar6 = func_0x000140066d70(*puVar20,0);
            }
          }
          if ((*(int *)(lVar16 + 0x1f0) != -1) &&
             (iVar9 = FUN_1400bb530(*(int *)(lVar16 + 0x1f0),
                                    *(longlong *)(in_stack_00000050 + 0x18) + 0x80),
             lVar23 = in_stack_00000058, piVar18 = in_stack_00000050, iVar9 != -1))
          goto code_r0x0001409f6988;
          if ((*(int *)(lVar16 + 0x3bc) != -1) &&
             (((*(short *)(lVar16 + 0xa0) == 99 || (*(short *)(lVar16 + 0xa0) == 0x62)) &&
              (lVar23 = func_0x0001413c6dc0(lVar16), lVar23 != 0)))) {
            uVar8 = FUN_140bad810(lVar23,0xd);
            lVar23 = FUN_140069380(0x142516038,uVar8);
            if ((((lVar23 != 0) && (*(longlong *)(lVar23 + 0x130) != 0)) &&
                (psVar26 = *(short **)(*(longlong *)(lVar23 + 0x130) + 0x28),
                psVar26 != (short *)0x0)) &&
               ((*psVar26 == 3 &&
                (lVar23 = in_stack_00000058, piVar18 = in_stack_00000050,
                *(int *)(psVar26 + 8) == *in_stack_00000050)))) goto code_r0x0001409f6988;
          }
        }
        func_0x0001400703c0(unaff_RBP + 200);
      }
      supplier_0xfceb0(in_stack_00000050 + 0x1a,7);
      lVar23 = in_stack_00000058;
      piVar18 = in_stack_00000050;
    }
    else {
      supplier_0xfceb0(piVar19,7);
      piVar18 = in_stack_00000050;
    }
  } while( true );
code_r0x0001409f7a5c:
  plVar17 = plVar17 + 1;
  *(longlong **)(unaff_RBP + -0x68) = plVar17;
  goto code_r0x0001409f79b4;
code_r0x0001409f8920:
  func_0x0001400703c0(unaff_RBP + -0x50);
  puVar20 = (undefined1 *)func_0x0001400703e0(unaff_RBP + -0x50,&stack0x00000076,unaff_RBP + 0x100);
  cVar6 = func_0x000140066d70(*puVar20,0);
  lVar23 = in_stack_00000058;
  if (cVar6 == '\0') goto code_r0x0001409fa25c;
  goto code_r0x0001409f88d0;
}


/* classic; 0xba8ee0; recover-artifact; RVA 0xba8ee0..0xba91f0; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_recover_artifact(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  undefined1 auStack_68 [32];
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_1418b8040 ^ (ulonglong)auStack_68;
  iVar16 = (int)(_DAT_142402508 - _DAT_142402500 >> 3);
  if ((iVar16 != 0) && (param_3 != -1)) {
    iVar10 = 0;
    iVar16 = iVar16 + -1;
    if (-1 < iVar16) {
      do {
        iVar8 = iVar10 + iVar16 >> 1;
        piVar14 = *(int **)(_DAT_142402500 + (longlong)iVar8 * 8);
        if (*piVar14 == param_3) goto LAB_140ba8f58;
        iVar6 = iVar8 + -1;
        if (*piVar14 < param_3) {
          iVar6 = iVar16;
          iVar10 = iVar8 + 1;
        }
        iVar16 = iVar6;
      } while (iVar10 <= iVar6);
    }
  }
  piVar14 = (int *)0x0;
LAB_140ba8f58:
  if (piVar14 == (int *)0x0) {
    FUN_140070fd0(param_2,"an unknown artifact",0x13);
  }
  else {
    piVar1 = piVar14 + 0x24;
    if ((param_4 & 2) != 0) {
      sVar5 = (**(code **)**(undefined8 **)piVar1)();
      if (((sVar5 == 0x59) ||
          (cVar4 = (**(code **)(**(longlong **)piVar1 + 0xe0))(*(longlong **)piVar1,0x14),
          cVar4 != '\0')) || (sVar5 = (**(code **)**(undefined8 **)piVar1)(), sVar5 == 0x57)) {
        pcVar11 = "[LPAGE:BOOK:";
        uVar15 = 0xc;
      }
      else {
        pcVar11 = "[LPAGE:ARTIFACT:";
        uVar15 = 0x10;
      }
      FUN_140070fd0(param_2,pcVar11,uVar15);
      report_year_decimal(*piVar14,param_2);
      FUN_140070fd0(param_2,"]",1);
    }
    uStack_40 = 0;
    lStack_38 = 0;
    uStack_30 = 0xf;
    pppuStack_48 = (undefined8 ****)0x0;
    report_squad_language_name(piVar14 + 2,&pppuStack_48,1,0);
    ppppuVar7 = (undefined8 ****)pppuStack_48;
    if (lStack_38 == 0) {
      sVar5 = (**(code **)**(undefined8 **)piVar1)();
      if (((sVar5 == 0x59) ||
          (cVar4 = (**(code **)(**(longlong **)piVar1 + 0xe0))(*(longlong **)piVar1,0x14),
          cVar4 != '\0')) || (sVar5 = (**(code **)**(undefined8 **)piVar1)(), sVar5 == 0x57)) {
        uVar13 = uStack_30;
        if (uStack_30 < 8) {
          uVar12 = 0x7fffffffffffffff;
          if (uStack_30 <= 0x7fffffffffffffff - (uStack_30 >> 1)) {
            uVar2 = (uStack_30 >> 1) + uStack_30;
            uVar12 = 0xf;
            if (0xf < uVar2) {
              uVar12 = uVar2;
            }
          }
          ppppuVar7 = (undefined8 ****)FUN_140071d90(uVar12 + 1);
          lStack_38 = 8;
          *ppppuVar7 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar7 + 1) = 0;
          uStack_30 = uVar12;
          if (0xf < uVar13) {
            uVar12 = uVar13 + 1;
            ppppuVar9 = (undefined8 ****)pppuStack_48;
            if (0xfff < uVar12) {
              uVar12 = uVar13 + 0x28;
              ppppuVar9 = (undefined8 ****)pppuStack_48[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar9))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            supplier_0x154de20(ppppuVar9,uVar12);
          }
        }
        else {
          ppppuVar7 = &pppuStack_48;
          if (0xf < uStack_30) {
            ppppuVar7 = (undefined8 ****)pppuStack_48;
          }
          lStack_38 = 8;
          *ppppuVar7 = (undefined8 ***)0x64656c7469746e55;
          *(undefined1 *)(ppppuVar7 + 1) = 0;
          ppppuVar7 = (undefined8 ****)pppuStack_48;
        }
      }
      else {
        FUN_140c79f60(*(undefined8 *)piVar1,&pppuStack_48,0,1);
        ppppuVar7 = (undefined8 ****)pppuStack_48;
      }
    }
    pppuStack_48 = ppppuVar7;
    ppppuVar7 = &pppuStack_48;
    if (0xf < uStack_30) {
      ppppuVar7 = (undefined8 ****)pppuStack_48;
    }
    FUN_140070fd0(param_2,ppppuVar7,lStack_38);
    if ((param_4 & 2) != 0) {
      FUN_140070fd0(param_2,"[/LPAGE]",8);
    }
    if (0xf < uStack_30) {
      uVar13 = uStack_30 + 1;
      ppppuVar7 = (undefined8 ****)pppuStack_48;
      if (0xfff < uVar13) {
        uVar13 = uStack_30 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuStack_48[-1];
        if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar7))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      supplier_0x154de20(ppppuVar7,uVar13);
    }
  }
  FUN_14154de00(uStack_28 ^ (ulonglong)auStack_68);
  return;
}


/* Native basic-block region, NOT an independent native function. Parent and selected merge are recorded by region manifest. External branches use analysis-only region_exit stubs. Ghidra retains original parent continuation after the fallback fallthrough; this C is not a hard-cut slice. Original bytes are unchanged. */
/* classic; 0x1c44e0; report-list-consumer-region; RVA 0x1d382d..0x1d3c47; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_report_list_consumer_region(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong unaff_RBX;
  undefined4 *puVar11;
  longlong unaff_RBP;
  int unaff_ESI;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  int iVar14;
  int unaff_R12D;
  int unaff_R13D;
  longlong lVar15;
  uint uVar16;
  longlong lVar18;
  int iStack0000000000000074;
  longlong in_stack_00000078;
  ulonglong uVar17;
  
  param_2 = param_2 / 3;
  *(int *)(unaff_RBP + -0x28) = param_2;
  iVar2 = supplier_0x70930(unaff_RBX + 0x8348);
  iVar3 = supplier_0x70930(unaff_RBX + 0x8330);
  uVar16 = iVar2 + iVar3;
  uVar17 = (ulonglong)uVar16;
  *(ulonglong *)(unaff_RBP + 0x18) = uVar17;
  if ((int)uVar16 <= param_2) {
    unaff_R12D = unaff_EDI;
  }
  iVar2 = unaff_R12D + -2;
  *(int *)(unaff_RBP + -0x58) = iVar2;
  if ((int)uVar16 < 1) {
    supplier_0xbc6f0(0x142666770,6,0,1);
    supplier_0xbc6e0(0x142666770,1,unaff_ESI + 2);
    FUN_140069710(unaff_RBP + 0x3490,"No reports available");
    FUN_140af0220(0x142666770,unaff_RBP + 0x3490,0,0);
    region_exit_1401c8d5e(unaff_RBP + 0x3490);
    return;
  }
  *(undefined4 *)(unaff_RBP + -0x48) = 1;
  iVar3 = uVar16 - param_2;
  if (*(int *)(unaff_RBX + 0x8360) <= (int)(uVar16 - param_2)) {
    iVar3 = *(int *)(unaff_RBX + 0x8360);
  }
  iVar14 = 0;
  if (-1 < iVar3) {
    iVar14 = iVar3;
  }
  *(int *)(unaff_RBP + -0x60) = param_2 + iVar14;
  iStack0000000000000074 = iVar14;
  if (iVar14 < param_2 + iVar14) {
    lVar18 = unaff_RBX + 0x8348;
    *(longlong *)(unaff_RBP + 0x30) = lVar18;
    lVar15 = unaff_RBX + 0x8330;
    *(longlong *)(unaff_RBP + 0x48) = lVar15;
    do {
      uVar16 = (uint)uVar17;
      iStack0000000000000074 = iVar14;
      if ((int)uVar16 <= iVar14) break;
      *(undefined8 *)(unaff_RBP + -0x30) = 0;
      *(undefined8 *)(unaff_RBP + -0x78) = 0;
      iVar3 = supplier_0x70930(lVar15);
      if (iVar14 < iVar3) {
        piVar4 = (int *)supplier_0x70920(lVar15,(longlong)iVar14);
        puVar5 = (undefined8 *)supplier_0x707e0(0x1424ffc88,(longlong)*piVar4);
        *(undefined8 *)(unaff_RBP + -0x30) = *puVar5;
      }
      else {
        iVar3 = supplier_0x70930(lVar15);
        uVar6 = supplier_0x70930(lVar18);
        if ((ulonglong)(longlong)(iVar14 - iVar3) < uVar6) {
          iVar3 = supplier_0x70930(lVar15);
          piVar4 = (int *)supplier_0x70920(lVar18,(longlong)(iVar14 - iVar3));
          puVar5 = (undefined8 *)supplier_0x707e0(0x1424ffca0,(longlong)*piVar4);
          *(undefined8 *)(unaff_RBP + -0x78) = *puVar5;
        }
      }
      supplier_0xbc6f0(0x142666770,7,0,1);
      if (unaff_R13D <= iVar2) {
        iVar14 = *(int *)(unaff_RBP + -0x48);
        iVar3 = iVar14 + 3;
        lVar18 = (longlong)unaff_R13D;
        iVar12 = unaff_R13D;
        do {
          if (iVar14 < iVar3) {
            puVar11 = (undefined4 *)0x142668130;
            do {
              supplier_0xbc6e0(0x142666770,iVar14,iVar12);
              if (iVar12 == unaff_R13D) {
                uVar8 = puVar11[-6];
              }
              else if (lVar18 == iVar2) {
                uVar8 = *puVar11;
              }
              else {
                uVar8 = puVar11[-3];
              }
              supplier_0xaf1390(0x142666770,uVar8);
              cVar1 = supplier_0x73550(0x1423e9af0,0);
              if (cVar1 != '\0') {
                FUN_1400bc750(0x142666770,0,1);
              }
              iVar14 = iVar14 + 1;
              puVar11 = puVar11 + 1;
            } while (iVar14 < iVar3);
            iVar2 = *(int *)(unaff_RBP + -0x58);
            iVar14 = *(int *)(unaff_RBP + -0x48);
          }
          iVar12 = iVar12 + 1;
          lVar18 = lVar18 + 1;
        } while (iVar12 <= iVar2);
        uVar17 = *(ulonglong *)(unaff_RBP + 0x18);
        lVar18 = *(longlong *)(unaff_RBP + 0x30);
        iVar14 = iStack0000000000000074;
      }
      uVar16 = (uint)uVar17;
      iVar3 = *(int *)(unaff_RBP + -0x48);
      supplier_0xbc6e0(0x142666770,iVar3 + 1);
      supplier_0x70c50(unaff_RBP + 0x13f0);
      lVar15 = *(longlong *)(unaff_RBP + -0x30);
      if (lVar15 == 0) {
        lVar15 = *(longlong *)(unaff_RBP + -0x78);
        if (lVar15 != 0) {
          supplier_0xbc6f0(0x142666770,6,0,(*(byte *)(lVar15 + 0x20) & 1) == 0);
          goto LAB_1401d3a9d;
        }
      }
      else {
        if ((*(byte *)(lVar15 + 0x48) & 1) == 0) {
          supplier_0xbc6f0(0x142666770,6,0,1);
          lVar15 = lVar15 + 0x28;
        }
        else {
          supplier_0xbc6f0(0x142666770,6,0,0);
          lVar15 = lVar15 + 0x28;
        }
LAB_1401d3a9d:
        FUN_140af0220(0x142666770,lVar15,0,_DAT_1423e9b04 + -3);
      }
      uVar6 = supplier_0x708f0(unaff_RBP + 0x13f0);
      if (0x33 < uVar6) {
        supplier_0xe27f0(unaff_RBP + 0x13f0,0x33);
        puVar7 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13f0,0x30);
        *puVar7 = 0x2e;
        puVar7 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13f0,0x31);
        *puVar7 = 0x2e;
        puVar7 = (undefined1 *)supplier_0xfcb70(unaff_RBP + 0x13f0,0x32);
        *puVar7 = 0x2e;
      }
      FUN_140af0220(0x142666770,unaff_RBP + 0x13f0,0,0);
      *(int *)(unaff_RBP + -0x48) = iVar3 + 3;
      supplier_0x693f0(unaff_RBP + 0x13f0);
      iVar14 = iVar14 + 1;
      lVar15 = *(longlong *)(unaff_RBP + 0x48);
      iStack0000000000000074 = iVar14;
    } while (iVar14 < *(int *)(unaff_RBP + -0x60));
    param_2 = *(int *)(unaff_RBP + -0x28);
  }
  if (param_2 < (int)uVar16) {
    supplier_0xbc920(unaff_RBP + 0x290);
    supplier_0xbc940(unaff_RBP + 0x290,*(undefined4 *)(in_stack_00000078 + 0x8360),0,uVar16 - 1,
                     param_2);
    FUN_141423200(unaff_RBP + 0x290,*(undefined4 *)(unaff_RBP + -0x38),
                  *(undefined4 *)(unaff_RBP + -0x3c),iVar2 + 1,
                  *(undefined1 *)(in_stack_00000078 + 0x8364));
    region_exit_1401c8d68();
    return;
  }
  if (((*(int *)(in_stack_00000078 + 0x1b4) != 3) && (*(int *)(in_stack_00000078 + 0x1b4) != 8)) ||
     (0x42 < iRam00000001423e9b08)) {
    iVar3 = *(int *)(unaff_RBP + -0x18);
    *(int *)(unaff_RBP + -0x68) = iVar3;
    iVar14 = iRam00000001423e9b08;
    iVar12 = iVar3 + -0x12;
    iStack0000000000000074 = iRam00000001423e9b08 + -0x18;
    iVar2 = iRam00000001423e9b08 + -0x15;
    *(int *)(unaff_RBP + -0x60) = iVar2;
    *(int *)(unaff_RBP + -0x58) = iVar14 + -0x12;
    *(int *)(unaff_RBP + -0x48) = iVar14 + -0xc;
    *(int *)(unaff_RBP + -0x6c) = iVar14 + -9;
    *(int *)(unaff_RBP + -0x70) = iVar14 + -6;
    *(int *)(unaff_RBP + -0x28) = iVar3 + -7;
    *(int *)(unaff_RBP + -0x10) = iVar14 + -3;
    if (iVar12 <= iVar3) {
      lVar15 = (longlong)iVar12;
      lVar18 = lVar15;
      do {
        puVar11 = (undefined4 *)0x142668214;
        iVar2 = iStack0000000000000074;
        do {
          supplier_0xbc6e0(0x142666770,iVar2,iVar12);
          if (lVar18 == lVar15) {
            uVar8 = puVar11[-6];
          }
          else if (lVar18 == iVar3) {
            uVar8 = *puVar11;
          }
          else {
            uVar8 = puVar11[-3];
          }
          supplier_0xaf1390(0x142666770,uVar8);
          iVar2 = iVar2 + 1;
          puVar11 = puVar11 + 1;
        } while ((longlong)puVar11 < 0x142668220);
        iVar12 = iVar12 + 1;
        lVar18 = lVar18 + 1;
      } while (iVar12 <= iVar3);
      iVar2 = *(int *)(unaff_RBP + -0x60);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,iStack0000000000000074 + 1,iVar3 + -0x10);
    FUN_140069710(unaff_RBP + 0x3670,&UNK_14161b3b0);
    FUN_140af0220(0x142666770,unaff_RBP + 0x3670,0,0);
    supplier_0x693f0(unaff_RBP + 0x3670);
    iVar13 = iVar3 + -0x12;
    for (iVar12 = iVar13; iVar12 <= iVar3; iVar12 = iVar12 + 1) {
      supplier_0xbc6e0(0x142666770,iVar2,iVar12);
      iVar10 = *(int *)(in_stack_00000078 + 0x1b4);
      if (((iVar10 == 2) || (iVar10 == 3)) || (iVar10 == 8)) {
        uVar8 = uRam0000000142668220;
        if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668238, iVar12 != iVar3)) {
          uVar8 = uRam000000014266822c;
        }
      }
      else {
        lVar18 = supplier_0x70410(in_stack_00000078 + 0x2b8);
        if (lVar18 == 0) {
          uVar8 = uRam0000000142668244;
          if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668250, iVar12 == iVar3)) {
            uVar8 = uRam000000014266825c;
          }
        }
        else {
          uVar8 = uRam00000001426681fc;
          if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668208, iVar12 == iVar3)) {
            uVar8 = uRam0000000142668214;
          }
        }
      }
      supplier_0xaf1390(0x142666770,uVar8);
      supplier_0xbc6e0(0x142666770,iVar2 + 1,iVar12);
      iVar10 = *(int *)(in_stack_00000078 + 0x1b4);
      if (((iVar10 == 2) || (iVar10 == 3)) || (iVar10 == 8)) {
        uVar8 = uRam0000000142668224;
        if ((iVar12 != iVar13) && (uVar8 = uRam000000014266823c, iVar12 != iVar3)) {
          uVar8 = uRam0000000142668230;
        }
      }
      else {
        lVar18 = supplier_0x70410(in_stack_00000078 + 0x2b8);
        if (lVar18 == 0) {
          uVar8 = uRam0000000142668248;
          if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668254, iVar12 == iVar3)) {
            uVar8 = uRam0000000142668260;
          }
        }
        else {
          uVar8 = uRam0000000142668200;
          if ((iVar12 != iVar13) && (uVar8 = uRam000000014266820c, iVar12 == iVar3)) {
            uVar8 = uRam0000000142668218;
          }
        }
      }
      supplier_0xaf1390(0x142666770,uVar8);
      supplier_0xbc6e0(0x142666770,iVar2 + 2,iVar12);
      iVar10 = *(int *)(in_stack_00000078 + 0x1b4);
      if (((iVar10 == 2) || (iVar10 == 3)) || (iVar10 == 8)) {
        uVar8 = uRam0000000142668228;
        if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668240, iVar12 != iVar3)) {
          uVar8 = uRam0000000142668234;
        }
      }
      else {
        lVar18 = supplier_0x70410(in_stack_00000078 + 0x2b8);
        if (lVar18 == 0) {
          uVar8 = uRam000000014266824c;
          if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668258, iVar12 == iVar3)) {
            uVar8 = uRam0000000142668264;
          }
        }
        else {
          uVar8 = uRam0000000142668204;
          if ((iVar12 != iVar13) && (uVar8 = uRam0000000142668210, iVar12 == iVar3)) {
            uVar8 = uRam000000014266821c;
          }
        }
      }
      supplier_0xaf1390(0x142666770,uVar8);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,iVar2 + 1,iVar3 + -0xd);
    FUN_140069710(unaff_RBP + 0x3690,&UNK_14161b110);
    FUN_140af0220(0x142666770,unaff_RBP + 0x3690,0,0);
    supplier_0x693f0(unaff_RBP + 0x3690);
    if (iVar13 <= iVar3) {
      iVar10 = *(int *)(unaff_RBP + -0x58);
      iVar2 = iVar10 + 1;
      iVar12 = iVar10 + 2;
      iVar9 = iVar13;
      do {
        supplier_0xbc6e0(0x142666770,iVar10,iVar9);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 4) {
          uVar8 = uRam0000000142668220;
          if ((iVar9 != iVar13) && (uVar8 = uRam000000014266822c, iVar9 == iVar3)) {
            uVar8 = uRam0000000142668238;
          }
        }
        else {
          uVar8 = uRam00000001426681fc;
          if ((iVar9 != iVar13) && (uVar8 = uRam0000000142668214, iVar9 != iVar3)) {
            uVar8 = uRam0000000142668208;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar2,iVar9);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 4) {
          uVar8 = uRam0000000142668224;
          if ((iVar9 != iVar13) && (uVar8 = uRam0000000142668230, iVar9 == iVar3)) {
            uVar8 = uRam000000014266823c;
          }
        }
        else {
          uVar8 = uRam0000000142668200;
          if ((iVar9 != iVar13) && (uVar8 = uRam0000000142668218, iVar9 != iVar3)) {
            uVar8 = uRam000000014266820c;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar12,iVar9);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 4) {
          uVar8 = uRam0000000142668228;
          if ((iVar9 != iVar13) && (uVar8 = uRam0000000142668234, iVar9 == iVar3)) {
            uVar8 = uRam0000000142668240;
          }
        }
        else {
          uVar8 = uRam0000000142668204;
          if ((iVar9 != iVar13) && (uVar8 = uRam000000014266821c, iVar9 != iVar3)) {
            uVar8 = uRam0000000142668210;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        iVar9 = iVar9 + 1;
        iVar10 = *(int *)(unaff_RBP + -0x58);
      } while (iVar9 <= iVar3);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,*(int *)(unaff_RBP + -0x58) + 1,iVar3 + -0x10);
    FUN_140069710(unaff_RBP + 14000,&UNK_14161b120);
    FUN_140af0220(0x142666770,unaff_RBP + 14000,0,0);
    supplier_0x693f0(unaff_RBP + 14000);
    if (iVar13 <= iVar3) {
      iVar2 = iVar13;
      do {
        supplier_0xbc6e0(0x142666770,iVar14 + -0xf,iVar2);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 1) {
          uVar8 = uRam0000000142668220;
          if ((iVar2 != iVar13) && (uVar8 = uRam000000014266822c, iVar2 == iVar3)) {
            uVar8 = uRam0000000142668238;
          }
        }
        else {
          uVar8 = uRam00000001426681fc;
          if ((iVar2 != iVar13) && (uVar8 = uRam0000000142668214, iVar2 != iVar3)) {
            uVar8 = uRam0000000142668208;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar14 + -0xe,iVar2);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 1) {
          uVar8 = uRam0000000142668224;
          if ((iVar2 != iVar13) && (uVar8 = uRam0000000142668230, iVar2 == iVar3)) {
            uVar8 = uRam000000014266823c;
          }
        }
        else {
          uVar8 = uRam0000000142668200;
          if ((iVar2 != iVar13) && (uVar8 = uRam0000000142668218, iVar2 != iVar3)) {
            uVar8 = uRam000000014266820c;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar14 + -0xd,iVar2);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 1) {
          uVar8 = uRam0000000142668228;
          if ((iVar2 != iVar13) && (uVar8 = uRam0000000142668234, iVar2 == iVar3)) {
            uVar8 = uRam0000000142668240;
          }
        }
        else {
          uVar8 = uRam0000000142668204;
          if ((iVar2 != iVar13) && (uVar8 = uRam000000014266821c, iVar2 != iVar3)) {
            uVar8 = uRam0000000142668210;
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar3);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,iVar14 + -0xe,iVar3 + -0xf);
    FUN_140069710(unaff_RBP + 0x36d0,&UNK_14161b130);
    FUN_140af0220(0x142666770,unaff_RBP + 0x36d0,0,0);
    supplier_0x693f0(unaff_RBP + 0x36d0);
    if (iVar13 <= iVar3) {
      iVar12 = *(int *)(unaff_RBP + -0x48);
      iVar2 = iVar12 + 1;
      iVar14 = iVar12 + 2;
      iVar10 = iVar13;
      do {
        supplier_0xbc6e0(0x142666770,iVar12,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 6) {
          uVar8 = uRam0000000142668220;
          if ((iVar10 != iVar13) && (uVar8 = uRam000000014266822c, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668238;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x83e8);
          if (lVar18 == 0) {
            uVar8 = uRam0000000142668244;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266825c, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668250;
            }
          }
          else {
            uVar8 = uRam00000001426681fc;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668208, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668214;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar2,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 6) {
          uVar8 = uRam0000000142668224;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668230, iVar10 == iVar3)) {
            uVar8 = uRam000000014266823c;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x83e8);
          if (lVar18 == 0) {
            uVar8 = uRam0000000142668248;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668260, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668254;
            }
          }
          else {
            uVar8 = uRam0000000142668200;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266820c, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668218;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar14,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 6) {
          uVar8 = uRam0000000142668228;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668234, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668240;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x83e8);
          if (lVar18 == 0) {
            uVar8 = uRam000000014266824c;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668264, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668258;
            }
          }
          else {
            uVar8 = uRam0000000142668204;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668210, iVar10 == iVar3)) {
              uVar8 = uRam000000014266821c;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        iVar10 = iVar10 + 1;
        iVar12 = *(int *)(unaff_RBP + -0x48);
      } while (iVar10 <= iVar3);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,*(int *)(unaff_RBP + -0x48) + 1,iVar3 + -0x11);
    FUN_140069710(unaff_RBP + 0x36f0,&UNK_14161b140);
    FUN_140af0220(0x142666770,unaff_RBP + 0x36f0,0,0);
    supplier_0x693f0(unaff_RBP + 0x36f0);
    if (iVar13 <= iVar3) {
      iVar12 = *(int *)(unaff_RBP + -0x6c);
      iVar2 = iVar12 + 1;
      iVar14 = iVar12 + 2;
      iVar10 = iVar13;
      do {
        supplier_0xbc6e0(0x142666770,iVar12,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 7) {
          uVar8 = uRam0000000142668220;
          if ((iVar10 != iVar13) && (uVar8 = uRam000000014266822c, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668238;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x8410);
          if (lVar18 == 0) {
            uVar8 = uRam0000000142668244;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266825c, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668250;
            }
          }
          else {
            uVar8 = uRam00000001426681fc;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668208, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668214;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar2,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 7) {
          uVar8 = uRam0000000142668224;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668230, iVar10 == iVar3)) {
            uVar8 = uRam000000014266823c;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x8410);
          if (lVar18 == 0) {
            uVar8 = uRam0000000142668248;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668260, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668254;
            }
          }
          else {
            uVar8 = uRam0000000142668200;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266820c, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668218;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar14,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 7) {
          uVar8 = uRam0000000142668228;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668234, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668240;
          }
        }
        else {
          lVar18 = supplier_0x70410(in_stack_00000078 + 0x8410);
          if (lVar18 == 0) {
            uVar8 = uRam000000014266824c;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668264, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668258;
            }
          }
          else {
            uVar8 = uRam0000000142668204;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668210, iVar10 == iVar3)) {
              uVar8 = uRam000000014266821c;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        iVar10 = iVar10 + 1;
        iVar12 = *(int *)(unaff_RBP + -0x6c);
      } while (iVar10 <= iVar3);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,*(int *)(unaff_RBP + -0x6c) + 1,iVar3 + -0xd);
    FUN_140069710(unaff_RBP + 0x3710,&UNK_141602478);
    FUN_140af0220(0x142666770,unaff_RBP + 0x3710,0,0);
    supplier_0x693f0(unaff_RBP + 0x3710);
    if (iVar13 <= iVar3) {
      iVar12 = *(int *)(unaff_RBP + -0x70);
      iVar2 = iVar12 + 1;
      iVar14 = iVar12 + 2;
      iVar10 = iVar13;
      do {
        supplier_0xbc6e0(0x142666770,iVar12,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 5) {
          uVar8 = uRam0000000142668220;
          if ((iVar10 != iVar13) && (uVar8 = uRam000000014266822c, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668238;
          }
        }
        else {
          lVar18 = supplier_0x70930(in_stack_00000078 + 0x8348);
          lVar15 = supplier_0x70930(in_stack_00000078 + 0x8330);
          if (lVar18 + lVar15 == 0) {
            uVar8 = uRam0000000142668244;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266825c, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668250;
            }
          }
          else {
            uVar8 = uRam00000001426681fc;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668208, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668214;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar2,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 5) {
          uVar8 = uRam0000000142668224;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668230, iVar10 == iVar3)) {
            uVar8 = uRam000000014266823c;
          }
        }
        else {
          lVar18 = supplier_0x70930(in_stack_00000078 + 0x8348);
          lVar15 = supplier_0x70930(in_stack_00000078 + 0x8330);
          if (lVar18 + lVar15 == 0) {
            uVar8 = uRam0000000142668248;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668260, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668254;
            }
          }
          else {
            uVar8 = uRam0000000142668200;
            if ((iVar10 != iVar13) && (uVar8 = uRam000000014266820c, iVar10 == iVar3)) {
              uVar8 = uRam0000000142668218;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        supplier_0xbc6e0(0x142666770,iVar14,iVar10);
        if (*(int *)(in_stack_00000078 + 0x1b4) == 5) {
          uVar8 = uRam0000000142668228;
          if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668234, iVar10 == iVar3)) {
            uVar8 = uRam0000000142668240;
          }
        }
        else {
          lVar18 = supplier_0x70930(in_stack_00000078 + 0x8348);
          lVar15 = supplier_0x70930(in_stack_00000078 + 0x8330);
          if (lVar18 + lVar15 == 0) {
            uVar8 = uRam000000014266824c;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668264, iVar10 != iVar3)) {
              uVar8 = uRam0000000142668258;
            }
          }
          else {
            uVar8 = uRam0000000142668204;
            if ((iVar10 != iVar13) && (uVar8 = uRam0000000142668210, iVar10 == iVar3)) {
              uVar8 = uRam000000014266821c;
            }
          }
        }
        supplier_0xaf1390(0x142666770,uVar8);
        iVar10 = iVar10 + 1;
        iVar12 = *(int *)(unaff_RBP + -0x70);
      } while (iVar10 <= iVar3);
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,*(int *)(unaff_RBP + -0x70) + 1,iVar3 + -0xc);
    FUN_140069710(unaff_RBP + 0x3730,&UNK_14161b158);
    FUN_140af0220(0x142666770,unaff_RBP + 0x3730,0,0);
    supplier_0x693f0(unaff_RBP + 0x3730);
    iVar2 = iVar3 + -7;
    if (iVar2 <= iVar3) {
      lVar15 = (longlong)iVar2;
      lVar18 = lVar15;
      do {
        iVar14 = *(int *)(unaff_RBP + -0x10);
        puVar11 = (undefined4 *)0x142668214;
        do {
          supplier_0xbc6e0(0x142666770,iVar14,iVar2);
          if (lVar18 == lVar15) {
            uVar8 = puVar11[-6];
          }
          else if (lVar18 == iVar3) {
            uVar8 = *puVar11;
          }
          else {
            uVar8 = puVar11[-3];
          }
          supplier_0xaf1390(0x142666770,uVar8);
          iVar14 = iVar14 + 1;
          puVar11 = puVar11 + 1;
        } while ((longlong)puVar11 < 0x142668220);
        iVar2 = iVar2 + 1;
        lVar18 = lVar18 + 1;
      } while (iVar2 <= *(int *)(unaff_RBP + -0x68));
    }
    supplier_0xbc6f0(0x142666770,7,0,1);
    supplier_0xbc6e0(0x142666770,*(int *)(unaff_RBP + -0x10) + 1,*(int *)(unaff_RBP + -0x28) + 2);
    FUN_140069710(unaff_RBP + 0x3750,&UNK_14161b160);
    FUN_140af0220(0x142666770,unaff_RBP + 0x3750,0,0);
    supplier_0x693f0(unaff_RBP + 0x3750);
  }
  if (cRam00000001418c35d8 != '\0') {
    FUN_1401eb660(0x1418c35d8);
  }
  FUN_14154de00(*(ulonglong *)(unaff_RBP + 0x38b0) ^ (ulonglong)&stack0x00000000);
  return;
}


/* classic; 0xaaafe0; squad-language-name; RVA 0xaaafe0..0xaab7a2; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_squad_language_name(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  int iStack_a8;
  char cStack_98;
  char cStack_97;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_c8;
  uVar11 = 0;
  cStack_98 = param_3;
  cStack_97 = param_4;
  if (*(char *)((longlong)param_1 + 0x72) == '\0') goto LAB_140aab76f;
  if (_DAT_1418b8218 < 0xb) {
    uVar11 = *(uint *)((longlong)(int)_DAT_1418b8218 * 4 + 0x1423ace60);
  }
  param_2[2] = 0;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  if ((param_1[6] == 0) || ((uVar11 & 0xfffffffd) != 0)) {
    pppuStack_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar7 = param_1[2];
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    if (0x7fffffffffffffff < uVar7) goto LAB_140aab79c;
    if (uVar7 < 0x10) {
      uVar9 = 0xf;
      uStack_70 = 0xf;
      ppppuVar5 = (undefined8 ****)*puVar4;
      uStack_80 = puVar4[1];
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
    }
    else {
      uVar9 = uVar7 | 0xf;
      if (uVar9 < 0x8000000000000000) {
        if (uVar9 < 0x16) {
          uVar9 = 0x16;
        }
      }
      else {
        uVar9 = 0x7fffffffffffffff;
      }
      ppppuVar5 = (undefined8 ****)FUN_140071d90(uVar9 + 1);
      pppuStack_88 = ppppuVar5;
      uStack_78 = uVar7;
      uStack_70 = uVar9;
      supplier_0x154f29e(ppppuVar5,puVar4,uVar7 + 1);
    }
    if (cStack_98 != '\0') {
      FUN_1405440a0(&pppuStack_88);
      uVar9 = uStack_70;
      uVar7 = uStack_78;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
    }
    ppppuVar6 = &pppuStack_88;
    if (0xf < uVar9) {
      ppppuVar6 = ppppuVar5;
    }
    FUN_140070fd0(param_2,ppppuVar6,uVar7);
    lVar1 = param_1[2];
    FUN_140070e10(&pppuStack_88);
    bVar13 = lVar1 != 0;
    param_4 = cStack_97;
    param_3 = cStack_98;
  }
  else {
    FUN_1400bb140(param_2,0x60);
    puVar4 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140070fd0(param_2,puVar4,param_1[6]);
    FUN_1400bb140(param_2,0x27);
    bVar13 = true;
  }
  if (param_1[6] != 0) {
    if (uVar11 == 1) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      FUN_1400bb140(param_2,0x60);
      puVar4 = param_1 + 4;
      if (0xf < (ulonglong)param_1[7]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_140070fd0(param_2,puVar4,param_1[6]);
      FUN_1400bb140(param_2,0x27);
      bVar13 = true;
    }
    if ((param_1[6] != 0) && (uVar11 == 2)) goto LAB_140aab76f;
  }
  if (((*(int *)(param_1 + 8) != -1) || (*(int *)((longlong)param_1 + 0x44) != -1)) &&
     ((!bVar13 || (param_4 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5c);
    uVar14 = supplier_0xd41660(0,*(int *)(param_1 + 8),&pppuStack_88);
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x5e);
    supplier_0xd41660(uVar14,*(undefined4 *)((longlong)param_1 + 0x44),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      if (param_3 != '\0') {
        FUN_1405440a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140070fd0(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    if (0xf < uStack_70) {
      uVar7 = uStack_70 + 1;
      ppppuVar5 = (undefined8 ****)pppuStack_88;
      if (0xfff < uVar7) {
        uVar7 = uStack_70 + 0x28;
        ppppuVar5 = (undefined8 ****)pppuStack_88[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar5))
           ) {
          _invalid_parameter_noinfo_noreturn();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      supplier_0x154de20(ppppuVar5,uVar7);
    }
  }
  cVar12 = cStack_98;
  if ((((*(int *)((longlong)param_1 + 0x54) != -1) || (*(int *)(param_1 + 9) != -1)) ||
      (*(int *)((longlong)param_1 + 0x4c) != -1)) && ((!bVar13 || (param_4 == '\0')))) {
    bVar3 = false;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xc);
    uVar14 = supplier_0xd41660(0,*(undefined4 *)(param_1 + 9),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      if ((param_2[2] == 0) && (param_3 == '\x01')) {
        FUN_140070fd0(param_2,"The ",4);
LAB_140aab38f:
        FUN_1405440a0(&pppuStack_88);
      }
      else {
        FUN_140070fd0(param_2,"the ",4);
        if (param_3 != '\0') goto LAB_140aab38f;
      }
      bVar3 = true;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140070fd0(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x62);
    uVar14 = supplier_0xd41660(uVar14,*(undefined4 *)((longlong)param_1 + 0x4c),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140070fd0(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405440a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      uVar14 = FUN_140070fd0(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 100);
    uVar14 = supplier_0xd41660(uVar14,*(undefined4 *)(param_1 + 10),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      if (!bVar3) {
        if ((param_2[2] != 0) || (pcVar8 = "The ", param_3 != '\x01')) {
          pcVar8 = "the ";
        }
        FUN_140070fd0(param_2,pcVar8,4);
        bVar3 = true;
      }
      if (param_3 != '\0') {
        FUN_1405440a0(&pppuStack_88);
      }
      uVar7 = uStack_78;
      if (uStack_78 == 0x7fffffffffffffff) {
        FUN_140066e50();
LAB_140aab79c:
        FUN_140066e50();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pppuStack_90 = &pppuStack_88;
      if (0xf < uStack_70) {
        pppuStack_90 = pppuStack_88;
      }
      pppuStack_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      uVar9 = uStack_78 + 1;
      uVar10 = 0xf;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uVar9) {
        uVar10 = uVar9 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
        }
        ppppuVar5 = (undefined8 ****)FUN_140071d90(uVar10 + 1);
        pppuStack_68 = ppppuVar5;
      }
      uStack_58 = uVar9;
      uStack_50 = uVar10;
      supplier_0x154f29e(ppppuVar5,pppuStack_90,uVar7);
      *(undefined1 *)((longlong)ppppuVar5 + uVar7) = 0x2d;
      *(undefined1 *)((longlong)ppppuVar5 + uVar9) = 0;
      ppppuVar5 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar5 = (undefined8 ****)pppuStack_68;
      }
      uVar14 = FUN_140070fd0(param_2,ppppuVar5,uStack_58);
      if (0xf < uStack_50) {
        uVar7 = uStack_50 + 1;
        ppppuVar5 = (undefined8 ****)pppuStack_68;
        if (0xfff < uVar7) {
          uVar7 = uStack_50 + 0x28;
          ppppuVar5 = (undefined8 ****)pppuStack_68[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar5))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar14 = supplier_0x154de20(ppppuVar5,uVar7);
      }
      bVar13 = false;
      uStack_78 = 0;
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      *(undefined1 *)ppppuVar5 = 0;
    }
    iStack_a8 = (int)*(short *)((longlong)param_1 + 0x66);
    supplier_0xd41660(uVar14,*(undefined4 *)((longlong)param_1 + 0x54),&pppuStack_88);
    cVar12 = cStack_98;
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      cVar12 = cStack_98;
      if (bVar3) {
LAB_140aab671:
        if (cVar12 != '\0') goto LAB_140aab676;
      }
      else {
        if ((param_2[2] != 0) || (cStack_98 != '\x01')) {
          FUN_140070fd0(param_2,"the ",4);
          goto LAB_140aab671;
        }
        FUN_140070fd0(param_2,"The ",4);
LAB_140aab676:
        FUN_1405440a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140070fd0(param_2,ppppuVar5,uStack_78);
      bVar13 = true;
    }
    FUN_140070e10(&pppuStack_88);
  }
  if ((*(int *)(param_1 + 0xb) != -1) && ((!bVar13 || (cStack_97 == '\0')))) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf;
    pppuStack_88 = (undefined8 ****)0x0;
    iStack_a8 = (int)*(short *)(param_1 + 0xd);
    supplier_0xd41660(0,*(int *)(param_1 + 0xb),&pppuStack_88);
    if (uStack_78 != 0) {
      if (bVar13) {
        FUN_140070fd0(param_2," ",1);
      }
      pcVar8 = "Of ";
      if (param_2[2] != 0) {
        pcVar8 = "of ";
      }
      FUN_140070fd0(param_2,pcVar8,3);
      if (cVar12 != '\0') {
        FUN_1405440a0(&pppuStack_88);
      }
      ppppuVar5 = &pppuStack_88;
      if (0xf < uStack_70) {
        ppppuVar5 = (undefined8 ****)pppuStack_88;
      }
      FUN_140070fd0(param_2,ppppuVar5,uStack_78);
    }
    FUN_140070e10(&pppuStack_88);
  }
LAB_140aab76f:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}


/* classic; 0xba79f0; rescue-figure; RVA 0xba79f0..0xba8407; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_rescue_figure
               (undefined8 param_1,undefined8 param_2,uint param_3,byte *param_4,short param_5,
               short param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *****pppppuVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 auStack_108 [32];
  char cStack_e8;
  uint uStack_e4;
  byte *pbStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418b8040 ^ (ulonglong)auStack_108;
  cStack_e8 = '\0';
  uStack_e4 = param_3;
  pbStack_e0 = param_4;
  lVar7 = FUN_140069380(param_1,param_3);
  if (lVar7 == 0) {
    uVar14 = 0x13;
    pcVar10 = "an unknown creature";
LAB_140ba83c3:
    FUN_140070fd0(param_2,pcVar10,uVar14);
LAB_140ba83cb:
    if (param_5 != 2) goto LAB_140ba83e7;
    pcVar10 = "\'s";
    uVar14 = 2;
  }
  else {
    if (*(longlong *)(param_4 + 8) == 0) {
      uVar14 = 1;
      if ((*param_4 & 2) != 0) {
        FUN_140070fd0(param_2,"[LPAGE:HF:",10);
        report_year_decimal(*(undefined4 *)(lVar7 + 0xe0),param_2);
        FUN_140070fd0(param_2,"]",1);
      }
      bVar6 = true;
      if ((0 < *(int *)(lVar7 + 0xd0)) &&
         (((**(byte **)(lVar7 + 200) & 4) != 0 ||
          (bVar6 = true, (**(byte **)(lVar7 + 200) & 8) != 0)))) {
        bVar6 = false;
      }
      lVar9 = FUN_140069380(param_1,*(undefined4 *)(param_4 + 0x20));
      lVar8 = FUN_140069380(param_1,*(undefined4 *)(param_4 + 0x24));
      if (((lVar8 != 0) || (lVar8 = lVar9, lVar9 != 0)) &&
         (*(short *)(lVar7 + 2) == *(short *)(lVar8 + 2))) {
        bVar6 = false;
      }
      if (*(longlong *)(lVar7 + 0x130) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + 0x48);
        if (lVar8 != 0) {
          if (*(longlong *)(lVar8 + 0x160) != 0) {
            bVar6 = true;
          }
          if (*(char *)(lVar8 + 0x88) != '\0') {
            bVar6 = true;
          }
        }
      }
      if ((*(short *)(lVar7 + 2) == -1) || (param_6 == 1)) {
        bVar6 = false;
      }
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0xf;
      ppppuStack_b8 = (undefined8 *****)0x0;
      uVar11 = (ulonglong)uStack_e4;
      if (*(uint *)(pbStack_e0 + 0x24) == uStack_e4) {
        if (param_5 == 0) {
LAB_140ba7dac:
          ppppuStack_b8 = (undefined8 *****)0x49;
LAB_140ba7db2:
          uStack_a8 = uVar14;
          FUN_140070fd0(param_2,&ppppuStack_b8,uVar14);
        }
        else if (param_5 == 1) {
          uStack_a8 = 2;
          ppppuStack_b8 = (undefined8 *****)0x656d;
          FUN_140070fd0(param_2,&ppppuStack_b8,2);
        }
        else {
          if (param_5 != 2) {
            if (param_5 != 3) goto LAB_140ba7dac;
            uVar14 = 6;
            ppppuStack_b8 = (undefined8 *****)0x666c6573796d;
            goto LAB_140ba7db2;
          }
          uStack_a8 = 2;
          ppppuStack_b8 = (undefined8 *****)0x796d;
          cStack_e8 = '\x01';
          FUN_140070fd0(param_2,&ppppuStack_b8,2);
        }
      }
      else {
        uVar3 = *(uint *)(pbStack_e0 + 0x20);
        if (*(char *)(lVar7 + 0xaa) == '\0') {
          uVar14 = 4;
          if (uVar3 != uStack_e4) {
            uVar14 = 2;
          }
          pcVar10 = "the ";
          if (uVar3 != uStack_e4) {
            pcVar10 = "a ";
          }
          FUN_140070fd0(param_2,pcVar10,uVar14);
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
            FUN_140070fd0(param_2,"zombie ",7);
          }
          if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
             ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
            FUN_140070fd0(param_2,"ghostly ",8);
          }
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0xf;
          ppppuStack_d8 = (undefined8 *****)0x0;
          FUN_140aba4d0(*(undefined2 *)(lVar7 + 2),&ppppuStack_d8,0,*(undefined2 *)(lVar7 + 4));
          pppppuVar12 = &ppppuStack_d8;
          if (0xf < uStack_c0) {
            pppppuVar12 = (undefined8 *****)ppppuStack_d8;
          }
          FUN_140070fd0(param_2,pppppuVar12,uStack_c8);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
            FUN_140070fd0(param_2," ",1);
            plVar13 = (longlong *)(lVar8 + 0x90);
            if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
              plVar13 = (longlong *)*plVar13;
            }
            FUN_140070fd0(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
          }
          FUN_140070e10(&ppppuStack_d8);
          goto LAB_140ba8333;
        }
        if (((uVar3 != uStack_e4) && (bVar6)) && (param_6 == 0)) {
          FUN_140070fd0(param_2,"the ",4);
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
            FUN_140070fd0(param_2,"zombie ",7);
          }
          if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
             ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
            FUN_140070fd0(param_2,"ghostly ",8);
          }
          uStack_70 = 0;
          uStack_60 = 0xf;
          sVar1 = *(short *)(lVar7 + 4);
          sVar2 = *(short *)(lVar7 + 2);
          uVar11 = (ulonglong)sVar2;
          lStack_68 = 0;
          ppppuStack_78 = (undefined8 *****)0x0;
          if (sVar1 == -1) {
            if (-1 < sVar2) goto LAB_140ba7f0c;
          }
          else if (-1 < sVar2) {
            if (((uVar11 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) && (-1 < sVar1)) &&
               (lVar9 = *(longlong *)(_DAT_142508de8 + uVar11 * 8),
               lVar4 = *(longlong *)(lVar9 + 0x178),
               (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar9 + 0x180) - lVar4 >> 3)))
            {
              lVar9 = *(longlong *)(lVar4 + (longlong)sVar1 * 8);
              pppppuVar12 = (undefined8 *****)(lVar9 + 0x20);
              if (&ppppuStack_78 != pppppuVar12) {
                if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
                  pppppuVar12 = (undefined8 *****)*pppppuVar12;
                }
                FUN_140070e90(&ppppuStack_78,pppppuVar12,*(undefined8 *)(lVar9 + 0x30));
                if (lStack_68 != 0) goto LAB_140ba7f52;
              }
            }
LAB_140ba7f0c:
            if (uVar11 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) {
              lVar9 = *(longlong *)(_DAT_142508de8 + uVar11 * 8);
              pppppuVar12 = (undefined8 *****)(lVar9 + 0x20);
              if (&ppppuStack_78 != pppppuVar12) {
                if (0xf < *(ulonglong *)(lVar9 + 0x38)) {
                  pppppuVar12 = (undefined8 *****)*pppppuVar12;
                }
                FUN_140070e90(&ppppuStack_78,pppppuVar12,*(undefined8 *)(lVar9 + 0x30));
              }
            }
          }
LAB_140ba7f52:
          pppppuVar12 = &ppppuStack_78;
          if (0xf < uStack_60) {
            pppppuVar12 = (undefined8 *****)ppppuStack_78;
          }
          FUN_140070fd0(param_2,pppppuVar12,lStack_68);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
            FUN_140070fd0(param_2," ",1);
            plVar13 = (longlong *)(lVar8 + 0x90);
            if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
              plVar13 = (longlong *)*plVar13;
            }
            FUN_140070fd0(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
          }
          FUN_140070fd0(param_2," ",1);
          FUN_140070e10(&ppppuStack_78);
          uVar11 = (ulonglong)uStack_e4;
        }
        report_squad_language_name
                  (lVar7 + 0x38,&ppppuStack_b8,1,
                   CONCAT71((int7)(uVar11 >> 8),*(int *)(pbStack_e0 + 0x20) == (int)uVar11));
        pppppuVar12 = &ppppuStack_b8;
        if (0xf < uStack_a0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_b8;
        }
        FUN_140070fd0(param_2,pppppuVar12,uStack_a8);
        if (((*(uint *)(pbStack_e0 + 0x20) == uStack_e4) || (!bVar6)) || (param_6 != 2))
        goto LAB_140ba8333;
        FUN_140070fd0(param_2," the ",5);
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x160) != 0)) {
          FUN_140070fd0(param_2,"zombie ",7);
        }
        if (((0 < *(int *)(lVar7 + 0xd0)) && (**(char **)(lVar7 + 200) < '\0')) &&
           ((lVar8 == 0 || (*(char *)(lVar8 + 0x88) == '\0')))) {
          FUN_140070fd0(param_2,"ghostly ",8);
        }
        uStack_90 = 0;
        uStack_80 = 0xf;
        sVar1 = *(short *)(lVar7 + 4);
        sVar2 = *(short *)(lVar7 + 2);
        uVar11 = (ulonglong)sVar2;
        lStack_88 = 0;
        ppppuStack_98 = (undefined8 *****)0x0;
        if (sVar1 == -1) {
          if (-1 < sVar2) goto LAB_140ba813d;
        }
        else if (-1 < sVar2) {
          if (((uVar11 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) && (-1 < sVar1)) &&
             (lVar7 = *(longlong *)(_DAT_142508de8 + uVar11 * 8),
             lVar9 = *(longlong *)(lVar7 + 0x178),
             (ulonglong)(longlong)sVar1 < (ulonglong)(*(longlong *)(lVar7 + 0x180) - lVar9 >> 3))) {
            lVar7 = *(longlong *)(lVar9 + (longlong)sVar1 * 8);
            pppppuVar12 = (undefined8 *****)(lVar7 + 0x20);
            if (&ppppuStack_98 != pppppuVar12) {
              if (0xf < *(ulonglong *)(lVar7 + 0x38)) {
                pppppuVar12 = (undefined8 *****)*pppppuVar12;
              }
              FUN_140070e90(&ppppuStack_98,pppppuVar12,*(undefined8 *)(lVar7 + 0x30));
              if (lStack_88 != 0) goto LAB_140ba8183;
            }
          }
LAB_140ba813d:
          if (uVar11 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) {
            lVar7 = *(longlong *)(_DAT_142508de8 + uVar11 * 8);
            pppppuVar12 = (undefined8 *****)(lVar7 + 0x20);
            if (&ppppuStack_98 != pppppuVar12) {
              if (0xf < *(ulonglong *)(lVar7 + 0x38)) {
                pppppuVar12 = (undefined8 *****)*pppppuVar12;
              }
              FUN_140070e90(&ppppuStack_98,pppppuVar12,*(undefined8 *)(lVar7 + 0x30));
            }
          }
        }
LAB_140ba8183:
        pppppuVar12 = &ppppuStack_98;
        if (0xf < uStack_80) {
          pppppuVar12 = (undefined8 *****)ppppuStack_98;
        }
        FUN_140070fd0(param_2,pppppuVar12,lStack_88);
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x88) != '\0')) {
          FUN_140070fd0(param_2," ",1);
          plVar13 = (longlong *)(lVar8 + 0x90);
          if (0xf < *(ulonglong *)(lVar8 + 0xa8)) {
            plVar13 = (longlong *)*plVar13;
          }
          FUN_140070fd0(param_2,plVar13,*(undefined8 *)(lVar8 + 0xa0));
        }
        if (0xf < uStack_80) {
          uVar11 = uStack_80 + 1;
          pppppuVar12 = (undefined8 *****)ppppuStack_98;
          if (0xfff < uVar11) {
            uVar11 = uStack_80 + 0x28;
            pppppuVar12 = (undefined8 *****)ppppuStack_98[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_98 + (-8 - (longlong)pppppuVar12))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          supplier_0x154de20(pppppuVar12,uVar11);
        }
      }
LAB_140ba8333:
      if ((param_5 == 2) && (cStack_e8 == '\0')) {
        FUN_140070fd0(param_2,"\'s",2);
      }
      if ((*pbStack_e0 & 2) != 0) {
        FUN_140070fd0(param_2,"[/LPAGE]",8);
      }
      if (0xf < uStack_a0) {
        uVar11 = uStack_a0 + 1;
        pppppuVar12 = (undefined8 *****)ppppuStack_b8;
        if (0xfff < uVar11) {
          uVar11 = uStack_a0 + 0x28;
          pppppuVar12 = (undefined8 *****)ppppuStack_b8[-1];
          if (0x1f < (ulonglong)((longlong)ppppuStack_b8 + (-8 - (longlong)pppppuVar12))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        supplier_0x154de20(pppppuVar12,uVar11);
      }
      goto LAB_140ba83e7;
    }
    lVar8 = *(longlong *)(param_4 + 0x10);
    if (lVar8 == 0) {
LAB_140ba7a8d:
      lVar8 = FUN_1400bb380(*(undefined4 *)(lVar7 + 0xe0));
      if (lVar8 == 0) {
LAB_140ba7bee:
        pcVar10 = "an unidentified creature";
        uVar14 = 0x18;
        goto LAB_140ba83c3;
      }
      if ((*(byte *)(lVar8 + 4) & 8) == 0) {
        if (*(longlong *)(lVar8 + 0x88) - (longlong)*(undefined4 **)(lVar8 + 0x80) >> 2 == 0)
        goto LAB_140ba7bee;
        lVar7 = FUN_140073b30(0x142504068,**(undefined4 **)(lVar8 + 0x80));
        if ((lVar7 == 0) || (*(char *)(lVar7 + 0x7a) == '\0')) goto LAB_140ba7b4d;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 *****)0x0;
        report_squad_language_name(lVar7 + 8,&ppppuStack_d8,1,0);
        pppppuVar12 = &ppppuStack_d8;
        if (0xf < uStack_c0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
        }
        FUN_140070fd0(param_2,pppppuVar12,uStack_c8);
        FUN_140070e10(&ppppuStack_d8);
      }
      else {
        if (*(char *)(lVar7 + 0xaa) == '\0') {
LAB_140ba7b4d:
          uVar14 = 8;
          pcVar10 = "Nameless";
          goto LAB_140ba83c3;
        }
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0xf;
        ppppuStack_d8 = (undefined8 *****)0x0;
        report_squad_language_name(lVar7 + 0x38,&ppppuStack_d8,1,0);
        pppppuVar12 = &ppppuStack_d8;
        if (0xf < uStack_c0) {
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
        }
        FUN_140070fd0(param_2,pppppuVar12,uStack_c8);
        if (0xf < uStack_c0) {
          uVar11 = uStack_c0 + 1;
          pppppuVar12 = (undefined8 *****)ppppuStack_d8;
          if (0xfff < uVar11) {
            uVar11 = uStack_c0 + 0x28;
            pppppuVar12 = (undefined8 *****)ppppuStack_d8[-1];
            if (0x1f < (ulonglong)((longlong)ppppuStack_d8 + (-8 - (longlong)pppppuVar12))) {
              _invalid_parameter_noinfo_noreturn();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          supplier_0x154de20(pppppuVar12,uVar11);
        }
      }
      goto LAB_140ba83cb;
    }
    if (*(int *)(lVar8 + 0x20) == *(int *)(lVar7 + 0xe0)) {
      uVar14 = 0xc;
      pcVar10 = "interrogator";
    }
    else {
      if (*(int *)(lVar8 + 0x24) != *(int *)(lVar7 + 0xe0)) goto LAB_140ba7a8d;
      uVar14 = 7;
      pcVar10 = "subject";
    }
  }
  FUN_140070fd0(param_2,pcVar10,uVar14);
LAB_140ba83e7:
  FUN_14154de00(uStack_58 ^ (ulonglong)auStack_108);
  return;
}



/* classic; 0xd41660; english-word-form; RVA 0xd41660..0xd4172c; actual Ghidra 12.1.4 C output. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void report_english_word_form
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  if (-1 < param_2) {
    uVar2 = (ulonglong)param_2;
    if ((uVar2 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3)) && (param_5 < 9)) {
                    /* WARNING: Switch is manually overridden */
      switch(param_5) {
      case 0:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x20);
        break;
      case 1:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x40);
        break;
      case 2:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x60);
        break;
      case 3:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x80);
        break;
      case 4:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0xa0);
        break;
      case 5:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0xc0);
        break;
      case 6:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0xe0);
        break;
      case 7:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x100);
        break;
      case 8:
        puVar3 = (undefined8 *)(*(longlong *)(_DAT_142509af0 + uVar2 * 8) + 0x120);
      }
      puVar1 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_140070fd0(param_3,puVar3,*puVar1);
      return;
    }
  }
  return;
}

