/* classic PE:6aea11a5:272d000; cage; RVA 0x18dd12..0x191971 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void faction_cage(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  int *piVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  undefined4 in_stack_00000020;
  undefined2 uVar26;
  undefined8 in_stack_00000088;
  int iStack00000000000000b8;
  int iStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  longlong *in_stack_000000d0;
  int iStack0000000000000148;
  int in_stack_00000190;
  int iStack0000000000000198;
  int in_stack_000001a8;
  longlong *plStack00000000000001e8;
  int iVar27;
  int in_stack_000005c0;
  int iVar28;
  undefined1 in_stack_00000756;
  undefined1 in_stack_00000759;
  undefined1 in_stack_0000075c;
  undefined1 in_stack_0000075f;
  undefined1 in_stack_00000762;
  undefined1 in_stack_0000076b;
  int iVar29;
  longlong in_stack_0000b260;
  undefined4 in_stack_0000b268;
  
  plStack00000000000001e8 = in_stack_000000d0;
  iStack0000000000000148 = in_stack_00000190;
  iVar27 = 0;
  lVar13 = faction_supplier_0x70410(in_stack_000000d0 + 0x25);
  if (lVar13 != 0) {
    puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
    faction_supplier_0x70800(*(longlong *)*puVar14 + 0x38,&stack0x00001658);
    puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
    faction_supplier_0x707f0(*(longlong *)*puVar14 + 0x38,&stack0x00002fe0);
    while( true ) {
      puVar15 = &stack0x00000756;
      for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      puVar15 = (undefined1 *)
                faction_supplier_0x703e0(&stack0x00001658,&stack0x000011f3,&stack0x00002fe0);
      cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_00000756);
      if (cVar3 == '\0') break;
      puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001658);
      iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x10))((longlong *)*puVar14);
      if (iVar6 == 9) {
        iVar27 = iVar27 + 1;
      }
      puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001658);
      iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x10))((longlong *)*puVar14);
      if (iVar6 == 10) {
        puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001658);
        plVar16 = (longlong *)(**(code **)(*(longlong *)*puVar14 + 0x18))((longlong *)*puVar14);
        if ((plVar16 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*plVar16 + 0x2b8))(plVar16), cVar3 != '\0')) {
          iVar27 = iVar27 + 1;
        }
      }
      faction_supplier_0x703c0(&stack0x00001658);
    }
  }
  faction_supplier_0x70800(plStack00000000000001e8 + 0x29,&stack0x00001ce0);
  faction_supplier_0x707f0(plStack00000000000001e8 + 0x29,&stack0x00002ff8);
LAB_14018dfcb:
  puVar15 = &stack0x00000759;
  for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = (undefined1 *)
            faction_supplier_0x703e0(&stack0x00001ce0,&stack0x000011f4,&stack0x00002ff8);
  cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_00000759);
  if (cVar3 != '\0') {
    bVar24 = false;
    lVar13 = faction_supplier_0x70410(plStack00000000000001e8 + 0x25);
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      faction_supplier_0x70800(*(longlong *)*puVar14 + 0x38,&stack0x00001700);
      puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      faction_supplier_0x707f0(*(longlong *)*puVar14 + 0x38,&stack0x00003020);
      do {
        puVar15 = &stack0x0000075c;
        for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined1 *)
                  faction_supplier_0x703e0(&stack0x00001700,&stack0x000011f5,&stack0x00003020);
        cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_0000075c);
        if (cVar3 == '\0') break;
        puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001700);
        iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x10))((longlong *)*puVar14);
        if (iVar6 == 9) {
          puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001700);
          iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x60))((longlong *)*puVar14);
          piVar17 = (int *)faction_supplier_0x703d0(&stack0x00001ce0);
          if (iVar6 == *piVar17) goto code_r0x00014018e1f5;
        }
        faction_supplier_0x703c0(&stack0x00001700);
      } while( true );
    }
    goto LAB_14018e204;
  }
  faction_supplier_0x70800(plStack00000000000001e8 + 0x2c,&stack0x00001ce8);
  faction_supplier_0x707f0(plStack00000000000001e8 + 0x2c,&stack0x00003038);
LAB_14018e28c:
  puVar15 = &stack0x0000075f;
  for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = (undefined1 *)
            faction_supplier_0x703e0(&stack0x00001ce8,&stack0x000011f6,&stack0x00003038);
  cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_0000075f);
  if (cVar3 != '\0') {
    bVar24 = false;
    lVar13 = faction_supplier_0x70410(plStack00000000000001e8 + 0x25);
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      faction_supplier_0x70800(*(longlong *)*puVar14 + 0x38,&stack0x00001708);
      puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      faction_supplier_0x707f0(*(longlong *)*puVar14 + 0x38,&stack0x00003060);
      do {
        puVar15 = &stack0x00000762;
        for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined1 *)
                  faction_supplier_0x703e0(&stack0x00001708,&stack0x000011f7,&stack0x00003060);
        cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_00000762);
        if (cVar3 == '\0') break;
        puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001708);
        iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x10))((longlong *)*puVar14);
        if (iVar6 == 10) {
          puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001708);
          iVar6 = (**(code **)(*(longlong *)*puVar14 + 0x60))((longlong *)*puVar14);
          piVar17 = (int *)faction_supplier_0x703d0(&stack0x00001ce8);
          if (iVar6 == *piVar17) goto code_r0x00014018e4b6;
        }
        faction_supplier_0x703c0(&stack0x00001708);
      } while( true );
    }
    goto LAB_14018e4c5;
  }
  if (0 < iVar27) {
    iVar7 = (in_stack_000005c0 - in_stack_00000190) + -8;
    iVar8 = iVar7 / 3;
    iVar6 = in_stack_000001a8;
    if (iVar8 < iVar27) {
      iVar6 = in_stack_000001a8 + -2;
    }
    iVar22 = *(int *)(in_stack_0000b260 + 0x1d34);
    if (iVar27 - iVar8 < iVar22) {
      iVar22 = iVar27 - iVar8;
    }
    if (iVar22 < 0) {
      iVar22 = 0;
    }
    iStack0000000000000198 = in_stack_00000190 + iVar22 * -3;
    lVar13 = faction_supplier_0x70410
                       (plStack00000000000001e8 + 0x25,(longlong)iVar7 % 3 & 0xffffffff);
    bVar24 = lVar13 != 0;
    if (bVar24) {
      puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      iVar7 = faction_supplier_0x70410(*(longlong *)*puVar14 + 0x38);
    }
    else {
      iVar7 = 0;
    }
    iVar9 = faction_supplier_0x70930(plStack00000000000001e8 + 0x29);
    iVar10 = faction_supplier_0x70930(plStack00000000000001e8 + 0x2c);
    iVar28 = 0;
    iVar29 = 0;
LAB_14018e704:
    if (((iVar28 < iVar22 + iVar8) && (iVar28 < iVar27)) && (iVar29 < iVar7 + iVar9 + iVar10)) {
      bVar25 = false;
      bVar2 = false;
      puVar14 = (undefined8 *)0x0;
      plVar16 = (longlong *)0x0;
      if (!bVar24) {
LAB_14018ea8d:
        bVar2 = true;
        if (bVar24) {
          puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
          iVar11 = faction_supplier_0x70410(*(longlong *)*puVar18 + 0x38);
        }
        else {
          iVar11 = 0;
        }
        iVar23 = faction_supplier_0x70930(plStack00000000000001e8 + 0x29);
        if (iVar23 <= iVar29 - iVar11) {
          faction_supplier_0x70930(plStack00000000000001e8 + 0x29);
          piVar17 = (int *)faction_supplier_0x70920(plStack00000000000001e8 + 0x2c);
          iVar11 = *piVar17;
          bVar1 = false;
          if (bVar24) {
            puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
            faction_supplier_0x70800(*(longlong *)*puVar18 + 0x38,&stack0x00001720);
            puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
            faction_supplier_0x707f0(*(longlong *)*puVar18 + 0x38,&stack0x00003128);
            do {
              puVar15 = &stack0x00000768;
              for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar15 = 0;
                puVar15 = puVar15 + 1;
              }
              puVar15 = (undefined1 *)faction_supplier_0x703e0(&stack0x00001720,&stack0x00000fe1);
              cVar3 = faction_supplier_0x66d70(*puVar15);
              if (cVar3 == '\0') break;
              puVar18 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001720);
              iVar23 = (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18);
              if (iVar23 == 10) {
                puVar18 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001720);
                iVar23 = (**(code **)(*(longlong *)*puVar18 + 0x60))((longlong *)*puVar18);
                if (iVar23 == iVar11) goto code_r0x00014018ef2f;
              }
              faction_supplier_0x703c0(&stack0x00001720);
            } while( true );
          }
          goto LAB_14018ef3e;
        }
        piVar17 = (int *)faction_supplier_0x70920(plStack00000000000001e8 + 0x29);
        iVar11 = *piVar17;
        bVar25 = false;
        if (bVar24) {
          puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
          faction_supplier_0x70800(*(longlong *)*puVar18 + 0x38,&stack0x00001718);
          puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
          faction_supplier_0x707f0(*(longlong *)*puVar18 + 0x38,&stack0x000030f8);
          do {
            puVar15 = &stack0x00000765;
            for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar15 = 0;
              puVar15 = puVar15 + 1;
            }
            puVar15 = (undefined1 *)faction_supplier_0x703e0(&stack0x00001718,&stack0x00000fe0);
            cVar3 = faction_supplier_0x66d70(*puVar15);
            if (cVar3 == '\0') break;
            puVar18 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001718);
            iVar23 = (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18);
            if (iVar23 == 9) {
              puVar18 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001718);
              iVar23 = (**(code **)(*(longlong *)*puVar18 + 0x60))((longlong *)*puVar18);
              if (iVar23 == iVar11) goto code_r0x00014018ecf6;
            }
            faction_supplier_0x703c0(&stack0x00001718);
          } while( true );
        }
        goto LAB_14018ed05;
      }
      puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      iVar11 = faction_supplier_0x70410(*(longlong *)*puVar18 + 0x38);
      if (iVar11 <= iVar29) goto LAB_14018ea8d;
      puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
      puVar18 = (undefined8 *)
                faction_supplier_0x707e0(*(longlong *)*puVar18 + 0x38,(longlong)iVar29);
      iVar11 = (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18);
      if (iVar11 == 9) {
        bVar25 = true;
        puVar14 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
        puVar14 = (undefined8 *)
                  faction_supplier_0x707e0(*(longlong *)*puVar14 + 0x38,(longlong)iVar29);
        puVar14 = (undefined8 *)(**(code **)(*(longlong *)*puVar14 + 0x20))((longlong *)*puVar14);
      }
      else {
        puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
        puVar18 = (undefined8 *)
                  faction_supplier_0x707e0(*(longlong *)*puVar18 + 0x38,(longlong)iVar29);
        iVar11 = (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18);
        if (iVar11 == 10) {
          puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
          puVar18 = (undefined8 *)
                    faction_supplier_0x707e0(*(longlong *)*puVar18 + 0x38,(longlong)iVar29);
          plVar19 = (longlong *)(**(code **)(*(longlong *)*puVar18 + 0x18))((longlong *)*puVar18);
          if ((plVar19 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar19 + 0x2b8))(plVar19), cVar3 != '\0')) {
            bVar25 = true;
            puVar18 = (undefined8 *)faction_supplier_0x707e0(plStack00000000000001e8 + 0x25,0);
            puVar18 = (undefined8 *)
                      faction_supplier_0x707e0(*(longlong *)*puVar18 + 0x38,(longlong)iVar29);
            (**(code **)(*(longlong *)*puVar18 + 0x18))((longlong *)*puVar18);
          }
        }
      }
      goto LAB_14018ef6d;
    }
    if (iVar8 < iVar27) {
      faction_supplier_0xbc920(&stack0x00003488);
      faction_supplier_0xbc940
                (&stack0x00003488,*(undefined4 *)(in_stack_0000b260 + 0x1d34),0,iVar27 + -1,iVar8);
      FUN_141423200(&stack0x00003488,in_stack_000000c8,uStack00000000000000c4,iVar6 + 1,
                    *(undefined1 *)(in_stack_0000b260 + 0x1d38));
    }
  }
  iStack0000000000000148 = in_stack_000005c0 + -8;
  cVar3 = (**(code **)(*in_stack_000000d0 + 0x1e0))(in_stack_000000d0);
  if (cVar3 == '\0') {
    for (iStack00000000000000c0 = 0; iStack00000000000000c0 < 3;
        iStack00000000000000c0 = iStack00000000000000c0 + 1) {
      for (iStack00000000000000b8 = 0; iStack00000000000000b8 < 4;
          iStack00000000000000b8 = iStack00000000000000b8 + 1) {
        faction_supplier_0xbc6e0
                  (0x142666770,iStack0000000000000148 + iStack00000000000000c0,
                   in_stack_00000088._4_4_ + iStack00000000000000b8);
        faction_supplier_0xaf1390
                  (0x142666770,
                   *(undefined4 *)
                    ((longlong)iStack00000000000000b8 * 0xc + 0x14266a778 +
                    (longlong)iStack00000000000000c0 * 4));
        cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
        if (cVar3 != '\0') {
          FUN_1400bc750(0x142666770,0,1);
        }
      }
    }
    cVar3 = FUN_14146fea0(0x1423ed870,0x31,(short)plStack00000000000001e8[5],
                          *(undefined4 *)((longlong)plStack00000000000001e8 + 0x2c));
    if (cVar3 != '\0') {
      iVar27 = in_stack_000001a8 + -0x14;
      iVar6 = in_stack_000001a8 + -10;
      iVar7 = in_stack_000001a8 + -9;
      for (iVar8 = 0; iVar22 = iVar27, iVar8 < 3; iVar8 = iVar8 + 1) {
        for (; iVar22 <= iVar6; iVar22 = iVar22 + 1) {
          faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + iVar8);
          if ((*(ushort *)(plStack00000000000001e8 + 0x2f) & 2) == 0) {
            if (iVar22 == iVar27) {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670f74));
            }
            else if (iVar22 == iVar6) {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670f8c));
            }
            else {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670f80));
            }
          }
          else if (iVar22 == iVar27) {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670ed8));
          }
          else if (iVar22 == iVar6) {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670ef0));
          }
          else {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar8 * 4 + 0x142670ee4));
          }
          cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
          if (cVar3 != '\0') {
            FUN_1400bc750(0x142666770,0);
          }
        }
      }
      faction_supplier_0xbc6f0(0x142666770,7,0,1);
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + 1,in_stack_000001a8 + -0x13);
      FUN_140069710(&stack0x00009c40,"Terrarium");
      FUN_140af0220(0x142666770,&stack0x00009c40,0,0);
      faction_supplier_0x693f0(&stack0x00009c40);
      for (iVar27 = 0; iVar6 = iVar7, iVar27 < 3; iVar27 = iVar27 + 1) {
        for (; iVar6 <= in_stack_000001a8; iVar6 = iVar6 + 1) {
          faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + iVar27);
          if ((*(ushort *)(plStack00000000000001e8 + 0x2f) & 2) == 0) {
            if (iVar6 == iVar7) {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670ed8));
            }
            else if (iVar6 == in_stack_000001a8) {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670ef0));
            }
            else {
              faction_supplier_0xaf1390
                        (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670ee4));
            }
          }
          else if (iVar6 == iVar7) {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670f74));
          }
          else if (iVar6 == in_stack_000001a8) {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670f8c));
          }
          else {
            faction_supplier_0xaf1390
                      (0x142666770,*(undefined4 *)((longlong)iVar27 * 4 + 0x142670f80));
          }
          cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
          if (cVar3 != '\0') {
            FUN_1400bc750(0x142666770,0);
          }
        }
      }
      faction_supplier_0xbc6f0(0x142666770,7,0,1);
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + 1,in_stack_000001a8 + -8);
      FUN_140069710(&stack0x00009c60,"Aquarium");
      FUN_140af0220(0x142666770,&stack0x00009c60,0,0);
      faction_supplier_0x693f0(&stack0x00009c60);
    }
    iStack0000000000000148 = iStack0000000000000148 + 3;
  }
  faction_supplier_0x670c0(&stack0x00002110);
  faction_supplier_0x70800(in_stack_000000d0 + 0x14,&stack0x00001cf0);
  faction_supplier_0x707f0(in_stack_000000d0 + 0x14,&stack0x00003140);
  while( true ) {
    cVar3 = faction_supplier_0xbaf30(&stack0x00001cf0,&stack0x00003140);
    if (cVar3 != '\0') break;
    plVar16 = (longlong *)faction_supplier_0x703d0(&stack0x00001cf0);
    cVar3 = faction_zone_filter(*(undefined4 *)(*plVar16 + 0x150));
    if (cVar3 != '\0') {
      faction_supplier_0xbaf40(&stack0x00002110,&stack0x00002088);
    }
    faction_supplier_0x703c0(&stack0x00001cf0);
  }
  iStack0000000000000148 = in_stack_000005c0 + -5;
  lVar13 = faction_supplier_0x70410(&stack0x00002110);
  if (lVar13 == 0) {
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148,in_stack_00000088._4_4_);
    iStack0000000000000148 = iStack0000000000000148 + 1;
    FUN_140069710(&stack0x00009c80,"You must designate a dungeon");
    FUN_140af0220(0x142666770,&stack0x00009c80,0,0);
    faction_supplier_0x693f0(&stack0x00009c80);
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148,in_stack_00000088._4_4_);
    iStack0000000000000148 = iStack0000000000000148 + 1;
    FUN_140069710(&stack0x00009ca0,"before this restraint will");
    FUN_140af0220(0x142666770,&stack0x00009ca0,0,0);
    faction_supplier_0x693f0(&stack0x00009ca0);
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148,in_stack_00000088._4_4_);
    iStack0000000000000148 = iStack0000000000000148 + 1;
    FUN_140069710(&stack0x00009cc0,"be used for imprisonment.");
    FUN_140af0220(0x142666770,&stack0x00009cc0,0,0);
    faction_supplier_0x693f0(&stack0x00009cc0);
  }
  uVar20 = faction_supplier_0x70410(&stack0x00002110);
  if (1 < uVar20) {
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148,in_stack_00000088._4_4_);
    iStack0000000000000148 = iStack0000000000000148 + 1;
    FUN_140069710(&stack0x00009ce0,"This furniture is a part of multiple rooms.");
    FUN_140af0220(0x142666770,&stack0x00009ce0,0,0);
    faction_supplier_0x693f0(&stack0x00009ce0);
  }
  lVar13 = faction_supplier_0x70410(&stack0x00002110);
  if (lVar13 != 1) goto LAB_140191950;
  plVar16 = (longlong *)faction_supplier_0x707e0(&stack0x00002110,0);
  lVar13 = *plVar16;
  plVar16 = (longlong *)0x0;
  if (*(int *)(lVar13 + 0x118) != -1) {
    lVar21 = FUN_14007f0e0(_DAT_142507ed8,*(undefined4 *)(lVar13 + 0x114));
    if (lVar21 != 0) {
      plVar16 = (longlong *)faction_supplier_0x69440(lVar21,*(undefined4 *)(lVar13 + 0x118));
    }
  }
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148,in_stack_00000088._4_4_);
  iStack0000000000000148 = iStack0000000000000148 + 1;
  FUN_140069710(&stack0x00009d00,"This furniture is a part of");
  FUN_140af0220(0x142666770,&stack0x00009d00,0,0);
  faction_supplier_0x693f0(&stack0x00009d00);
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + 1,in_stack_00000088._4_4_);
  uVar12 = *(int *)(lVar13 + 0x150) - 0x4f;
  if (uVar12 < 0x13) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar12) {
    case 0:
      FUN_140af1630(0x142666770,_DAT_142667704,0,2,4);
      break;
    case 1:
      FUN_140af1630(0x142666770,_DAT_1426676f4,0,2,4);
      break;
    case 3:
      FUN_140af1630(0x142666770,_DAT_142667710,0,2,4);
      break;
    case 4:
      FUN_140af1630(0x142666770,_DAT_14266771c,0,2,4);
      break;
    case 5:
      FUN_140af1630(0x142666770,_DAT_142667728,0,2,4);
      break;
    case 6:
      FUN_140af1630(0x142666770,_DAT_142667714,0,2,4);
      break;
    case 7:
      FUN_140af1630(0x142666770,_DAT_142667724,0,2,4);
      break;
    case 8:
      if (plVar16 == (longlong *)0x0) {
        FUN_140af1630(0x142666770,_DAT_142667730,0,2,4);
      }
      else {
        lVar21 = (**(code **)(*plVar16 + 0x18))(plVar16);
        sVar5 = (**(code **)*plVar16)(plVar16);
        if (sVar5 == 2) {
          if (lVar21 != 0) {
            if (*(int *)(lVar21 + 0x34) == 1) {
              FUN_140af1630(0x142666770,_DAT_142667754,0,2,4);
            }
            else if (*(int *)(lVar21 + 0x34) == 2) {
              FUN_140af1630(0x142666770,_DAT_142667758,0,2,4);
            }
            else {
              FUN_140af1630(0x142666770,_DAT_142667750,0,2,4);
            }
          }
        }
        else if (sVar5 == 8) {
          FUN_140af1630(0x142666770,_DAT_142667740,0,2,4);
        }
        else if (sVar5 == 9) {
          FUN_140af1630(0x142666770,_DAT_142667744,0,2,4);
        }
        else if (sVar5 == 0xb) {
          if (lVar21 != 0) {
            if (*(int *)(lVar21 + 0x34) == 1) {
              FUN_140af1630(0x142666770,_DAT_142667748,0,2,4);
            }
            else if (*(int *)(lVar21 + 0x34) == 2) {
              FUN_140af1630(0x142666770,_DAT_14266774c,0,2,4);
            }
            else {
              FUN_140af1630(0x142666770,_DAT_142667748,0,2,4);
            }
          }
        }
        else if (sVar5 == 0xd) {
          FUN_140af1630(0x142666770,_DAT_142667734,0,2,4);
        }
        else {
          FUN_140af1630(0x142666770,_DAT_142667730,0,2,4);
        }
      }
      break;
    case 9:
      FUN_140af1630(0x142666770,_DAT_142667720,0,2,4);
      break;
    case 10:
      FUN_140af1630(0x142666770,_DAT_14266772c,0,2,4);
      break;
    case 0xb:
      FUN_140af1630(0x142666770,_DAT_142667738,0,2,4);
      break;
    case 0xc:
      FUN_140af1630(0x142666770,_DAT_142667718,0,2,4);
      break;
    case 0xd:
      FUN_140af1630(0x142666770,_DAT_1426676f0,0,2,4);
      break;
    case 0xe:
      FUN_140af1630(0x142666770,_DAT_1426676f8,0,2,4);
      break;
    case 0xf:
      FUN_140af1630(0x142666770,_DAT_1426676fc,0,2,4);
      break;
    case 0x10:
      FUN_140af1630(0x142666770,_DAT_142667700,0,2,4);
      break;
    case 0x11:
      FUN_140af1630(0x142666770,_DAT_142667708,0,2,4);
      break;
    case 0x12:
      FUN_140af1630(0x142666770,_DAT_14266770c,0,2,4);
    }
  }
  for (iStack00000000000000c0 = 0; iStack00000000000000c0 < 3;
      iStack00000000000000c0 = iStack00000000000000c0 + 1) {
    for (iStack00000000000000b8 = 0; iStack00000000000000b8 < 4;
        iStack00000000000000b8 = iStack00000000000000b8 + 1) {
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + 1 + iStack00000000000000c0);
      faction_supplier_0xaf1390
                (0x142666770,
                 *(undefined4 *)
                  ((longlong)iStack00000000000000b8 * 0xc + 0x14266a718 +
                  (longlong)iStack00000000000000c0 * 4));
      cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
      if (cVar3 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000148 + 2,in_stack_00000088._4_4_ + 6);
  if (DAT_1418c5350 != '\0') goto LAB_140191950;
  cVar3 = faction_supplier_0x70ae0(lVar13 + 0xd0);
  if (cVar3 == '\0') {
    FUN_140af0220(0x142666770,lVar13 + 0xd0,0,0);
    goto LAB_140191950;
  }
  uVar12 = *(int *)(lVar13 + 0x150) - 0x4f;
  if (uVar12 < 0x13) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar12) {
    case 0:
      FUN_140069710(&stack0x00009f80,"Unnamed dormitory");
      FUN_140af0220(0x142666770,&stack0x00009f80,0,0);
      faction_supplier_0x693f0(&stack0x00009f80);
      break;
    case 1:
      FUN_140069710(&stack0x00009fa0,"Unnamed dining hall");
      FUN_140af0220(0x142666770,&stack0x00009fa0,0,0);
      faction_supplier_0x693f0(&stack0x00009fa0);
      break;
    case 2:
      goto override_jmp_140191153_case_2;
    case 3:
      FUN_140069710(&stack0x00009d20,"Unnamed water source");
      FUN_140af0220(0x142666770,&stack0x00009d20,0,0);
      faction_supplier_0x693f0(&stack0x00009d20);
      break;
    case 4:
      FUN_140069710(&stack0x00009d40,"Unnamed dump");
      FUN_140af0220(0x142666770,&stack0x00009d40,0,0);
      faction_supplier_0x693f0(&stack0x00009d40);
      break;
    case 5:
      FUN_140069710(&stack0x00009d60,"Unnamed sand collection area");
      FUN_140af0220(0x142666770,&stack0x00009d60,0,0);
      faction_supplier_0x693f0(&stack0x00009d60);
      break;
    case 6:
      FUN_140069710(&stack0x00009d80,"Unnamed fishing area");
      FUN_140af0220(0x142666770,&stack0x00009d80,0,0);
      faction_supplier_0x693f0(&stack0x00009d80);
      break;
    case 7:
      FUN_140069710(&stack0x00009da0,"Unnamed pit/pond");
      FUN_140af0220(0x142666770,&stack0x00009da0,0,0);
      faction_supplier_0x693f0(&stack0x00009da0);
      break;
    case 8:
      iVar27 = 0;
      iVar6 = 0;
      iVar7 = 0;
      iVar8 = 0;
      faction_supplier_0x70800(lVar13 + 0x188,&stack0x00001cf8);
      faction_supplier_0x707f0(lVar13 + 0x188,&stack0x00003158);
      while( true ) {
        puVar15 = &stack0x0000076b;
        for (lVar13 = 1; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined1 *)
                  faction_supplier_0x703e0(&stack0x00001cf8,&stack0x00000fe2,&stack0x00003158);
        cVar3 = faction_supplier_0x66d70(*puVar15,in_stack_0000076b);
        if (cVar3 == '\0') break;
        puVar14 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001cf8);
        iVar22 = (**(code **)(*(longlong *)*puVar14 + 0xd0))((longlong *)*puVar14);
        if (iVar22 - 3U < 0x33) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_1401a12f4)[(int)(iVar22 - 3U)]) {
          case 0:
            iVar7 = iVar7 + 1;
            break;
          case 1:
            iVar6 = iVar6 + 1;
            break;
          case 2:
            iVar27 = iVar27 + 1;
            break;
          case 3:
            iVar8 = iVar8 + 1;
          }
        }
        faction_supplier_0x703c0(&stack0x00001cf8);
      }
      if (iVar7 < 1) {
        if ((iVar27 < iVar6) && (iVar8 < iVar6)) {
          FUN_140069710(&stack0x00009de0,"Unnamed sculpture garden");
          FUN_140af0220(0x142666770,&stack0x00009de0,0,0);
          faction_supplier_0x693f0(&stack0x00009de0);
        }
        else if (iVar8 < iVar27) {
          FUN_140069710(&stack0x00009e00,"Unnamed zoo");
          FUN_140af0220(0x142666770,&stack0x00009e00,0,0);
          faction_supplier_0x693f0(&stack0x00009e00);
        }
        else if (iVar8 < 1) {
          FUN_140069710(&stack0x00009e40,"Unnamed meeting hall");
          FUN_140af0220(0x142666770,&stack0x00009e40,0,0);
          faction_supplier_0x693f0(&stack0x00009e40);
        }
        else {
          FUN_140069710(&stack0x00009e20,"Unnamed museum");
          FUN_140af0220(0x142666770,&stack0x00009e20,0,0);
          faction_supplier_0x693f0(&stack0x00009e20);
        }
      }
      else {
        FUN_140069710(&stack0x00009dc0,"Unnamed memorial hall");
        FUN_140af0220(0x142666770,&stack0x00009dc0,0,0);
        faction_supplier_0x693f0(&stack0x00009dc0);
      }
      break;
    case 9:
      FUN_140069710(&stack0x00009e60,"Unnamed pen/pasture");
      FUN_140af0220(0x142666770,&stack0x00009e60,0,0);
      faction_supplier_0x693f0(&stack0x00009e60);
      break;
    case 10:
      FUN_140069710(&stack0x00009e80,"Unnamed clay collection area");
      FUN_140af0220(0x142666770,&stack0x00009e80,0,0);
      faction_supplier_0x693f0(&stack0x00009e80);
      break;
    case 0xb:
      FUN_140069710(&stack0x00009ea0,"Unnamed animal training area");
      FUN_140af0220(0x142666770,&stack0x00009ea0,0,0);
      faction_supplier_0x693f0(&stack0x00009ea0);
      break;
    case 0xc:
      FUN_140069710(&stack0x00009ec0,"Unnamed plant gathering area");
      FUN_140af0220(0x142666770,&stack0x00009ec0,0,0);
      faction_supplier_0x693f0(&stack0x00009ec0);
      break;
    case 0xd:
      FUN_140069710(&stack0x00009ee0,"Unnamed bedroom");
      FUN_140af0220(0x142666770,&stack0x00009ee0,0,0);
      faction_supplier_0x693f0(&stack0x00009ee0);
      break;
    case 0xe:
      FUN_140069710(&stack0x00009f00,"Unnamed office");
      FUN_140af0220(0x142666770,&stack0x00009f00,0,0);
      faction_supplier_0x693f0(&stack0x00009f00);
      break;
    case 0xf:
      FUN_140069710(&stack0x00009f20,"Unnamed archery range");
      FUN_140af0220(0x142666770,&stack0x00009f20,0,0);
      faction_supplier_0x693f0(&stack0x00009f20);
      break;
    case 0x10:
      FUN_140069710(&stack0x00009f40,"Unnamed barracks");
      FUN_140af0220(0x142666770,&stack0x00009f40,0,0);
      faction_supplier_0x693f0(&stack0x00009f40);
      break;
    case 0x11:
      FUN_140069710(&stack0x00009f60,"Unnamed dungeon");
      FUN_140af0220(0x142666770,&stack0x00009f60,0,0);
      faction_supplier_0x693f0(&stack0x00009f60);
      break;
    case 0x12:
      FUN_140069710(&stack0x00009fc0,"Unnamed tomb");
      FUN_140af0220(0x142666770,&stack0x00009fc0,0,0);
      faction_supplier_0x693f0(&stack0x00009fc0);
    }
  }
  else {
override_jmp_140191153_case_2:
    FUN_140069710(&stack0x00009fe0,"Unnamed zone");
    FUN_140af0220(0x142666770,&stack0x00009fe0,0,0);
    faction_supplier_0x693f0(&stack0x00009fe0);
  }
LAB_140191950:
  faction_supplier_0x68720(&stack0x00002110);
  func_0x00014019c84f();
  return;
code_r0x00014018e1f5:
  bVar24 = true;
LAB_14018e204:
  if (!bVar24) {
    iVar27 = iVar27 + 1;
  }
  faction_supplier_0x70910(&stack0x00001ce0);
  goto LAB_14018dfcb;
code_r0x00014018e4b6:
  bVar24 = true;
LAB_14018e4c5:
  if (!bVar24) {
    iVar27 = iVar27 + 1;
  }
  faction_supplier_0x70910(&stack0x00001ce8);
  goto LAB_14018e28c;
code_r0x00014018ef2f:
  bVar1 = true;
LAB_14018ef3e:
  if (!bVar1) {
    bVar25 = true;
    plVar16 = (longlong *)FUN_140073ca0(0x1424017d0);
  }
  goto LAB_14018ef6d;
code_r0x00014018ecf6:
  bVar25 = true;
LAB_14018ed05:
  bVar25 = !bVar25;
  if (bVar25) {
    puVar14 = (undefined8 *)FUN_140075130(0x142401430);
  }
LAB_14018ef6d:
  if (bVar25) {
    if ((puVar14 == (undefined8 *)0x0) && (plVar16 == (longlong *)0x0)) {
      iVar28 = iVar28 + 1;
      iStack0000000000000198 = iStack0000000000000198 + 3;
    }
    else if (iStack0000000000000198 < in_stack_00000190) {
      iVar28 = iVar28 + 1;
      iStack0000000000000198 = iStack0000000000000198 + 3;
    }
    else {
      faction_supplier_0xbc6f0(0x142666770,7,0,1);
      for (iVar11 = in_stack_00000088._4_4_; iVar23 = iStack0000000000000198, iVar11 <= iVar6;
          iVar11 = iVar11 + 1) {
        for (; iVar23 < iStack0000000000000198 + 3; iVar23 = iVar23 + 1) {
          faction_supplier_0xbc6e0(0x142666770,iVar23,iVar11);
          if (iVar11 == in_stack_00000088._4_4_) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x142668310));
          }
          else if (iVar11 == in_stack_00000088._4_4_ + 1) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x14266831c));
          }
          else if (iVar11 == in_stack_00000088._4_4_ + 2) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x14266831c));
          }
          else if (iVar11 == in_stack_00000088._4_4_ + 3) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x14266831c));
          }
          else if (iVar11 == in_stack_00000088._4_4_ + 4) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x142668328));
          }
          else if (iVar11 == iVar6) {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x142668130));
          }
          else {
            faction_supplier_0xaf1390
                      (0x142666770,
                       *(undefined4 *)
                        ((longlong)(iVar23 - iStack0000000000000198) * 4 + 0x142668124));
          }
          cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
          if (cVar3 != '\0') {
            FUN_1400bc750(0x142666770,0,1);
          }
        }
      }
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000198,in_stack_00000088._4_4_);
      if (puVar14 == (undefined8 *)0x0) {
        cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
        if (cVar3 == '\0') {
          faction_supplier_0xbc6e0
                    (0x142666770,iStack0000000000000198 + 1,in_stack_00000088._4_4_ + 2);
          (**(code **)(*plVar16 + 0x370))(plVar16,0);
          uVar4 = (**(code **)(*plVar16 + 0x640))(plVar16);
          FUN_1400bc750(0x142666770,uVar4,1);
        }
        else {
          iVar11 = FUN_140c916d0(plVar16,in_stack_0000b268);
          if (iVar11 != 0) {
            in_stack_00000020 = 0;
            FUN_140af1630(0x142666770,iVar11,2,2,5);
          }
        }
      }
      else {
        cVar3 = faction_supplier_0x73550(0x1423e9af0,0);
        uVar26 = (undefined2)((uint)in_stack_00000020 >> 0x10);
        if (cVar3 == '\0') {
          faction_supplier_0xbc6e0
                    (0x142666770,iStack0000000000000198 + 1,in_stack_00000088._4_4_ + 2);
          FUN_141347220(puVar14,0,1,0);
          uVar4 = (**(code **)*puVar14)(puVar14,0);
          FUN_1400bc750(0x142666770,uVar4,1);
        }
        else {
          faction_supplier_0x70c50(&stack0x00009b80);
          in_stack_00000020 = CONCAT22(uVar26,0xffff);
          iVar11 = FUN_1400f3d10(0x142508dc8,&stack0x00009b80,
                                 *(undefined2 *)((longlong)puVar14 + 0xa4),
                                 *(undefined2 *)((longlong)puVar14 + 300),in_stack_00000020);
          if (iVar11 != 0) {
            in_stack_00000020 = 0;
            FUN_140af1630(0x142666770,iVar11,2,2,5);
          }
          faction_supplier_0x693f0(&stack0x00009b80);
        }
      }
      faction_supplier_0xbc6f0(0x142666770,7,0,1);
      faction_supplier_0x70c50(&stack0x00003ac0);
      if (puVar14 == (undefined8 *)0x0) {
        FUN_140c79f60(plVar16,&stack0x00003ac0,0,0xffffffff);
      }
      else {
        FUN_141344290(puVar14,&stack0x00003ac0,1);
      }
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000198 + 1,in_stack_00000088._4_4_ + 7);
      uVar20 = faction_supplier_0x708f0(&stack0x00003ac0);
      if ((ulonglong)(longlong)((iVar6 - in_stack_00000088._4_4_) + -0xe) <= uVar20) {
        iVar23 = iVar6 - in_stack_00000088._4_4_;
        iVar11 = iVar23 + -0xf;
        if (-1 < iVar11) {
          faction_supplier_0xe27f0(&stack0x00003ac0,(longlong)iVar11,0);
        }
        if (3 < iVar11) {
          puVar15 = (undefined1 *)
                    faction_supplier_0xfcb70(&stack0x00003ac0,(longlong)(iVar23 + -0x12));
          *puVar15 = 0x2e;
          puVar15 = (undefined1 *)
                    faction_supplier_0xfcb70(&stack0x00003ac0,(longlong)(iVar23 + -0x11));
          *puVar15 = 0x2e;
          puVar15 = (undefined1 *)
                    faction_supplier_0xfcb70(&stack0x00003ac0,(longlong)(iVar23 + -0x10));
          *puVar15 = 0x2e;
        }
      }
      FUN_140af0220(0x142666770,&stack0x00003ac0,0,0);
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000198 + 2);
      cVar3 = (**(code **)(*in_stack_000000d0 + 0x1e0))(in_stack_000000d0);
      if (cVar3 == '\0') {
        if (bVar2) {
          faction_supplier_0xbc6f0(0x142666770,7,0,1);
          FUN_140069710(&stack0x00009bc0,"Assigned");
          FUN_140af0220(0x142666770,&stack0x00009bc0,0,0);
          faction_supplier_0x693f0(&stack0x00009bc0);
          for (iVar11 = 0; iVar11 < 3; iVar11 = iVar11 + 1) {
            for (iVar23 = 0; iVar23 < 4; iVar23 = iVar23 + 1) {
              faction_supplier_0xbc6e0(0x142666770,iStack0000000000000198 + iVar11);
              faction_supplier_0xaf19c0(0x142666770);
            }
          }
        }
        else {
          bVar25 = false;
          if (puVar14 == (undefined8 *)0x0) {
            iVar11 = faction_supplier_0xe29e0
                               (*(undefined4 *)((longlong)plVar16 + 0x1c),
                                plStack00000000000001e8 + 0x2c);
            if (iVar11 != -1) {
              bVar25 = true;
            }
          }
          else {
            iVar11 = faction_supplier_0xe29e0
                               (*(undefined4 *)(puVar14 + 0x26),plStack00000000000001e8 + 0x29);
            bVar25 = iVar11 != -1;
          }
          if (bVar25) {
            faction_supplier_0xbc6f0(0x142666770,2,0,1);
            FUN_140069710(&stack0x00009be0,"Occupant");
            FUN_140af0220(0x142666770,&stack0x00009be0,0,0);
            faction_supplier_0x693f0(&stack0x00009be0);
          }
          else {
            faction_supplier_0xbc6f0(0x142666770,4,0,1);
            FUN_140069710(&stack0x00009c00,"Unassigned occupant");
            FUN_140af0220(0x142666770,&stack0x00009c00,0,0);
            faction_supplier_0x693f0(&stack0x00009c00);
          }
          for (iVar11 = 0; iVar11 < 3; iVar11 = iVar11 + 1) {
            for (iVar23 = 0; iVar23 < 4; iVar23 = iVar23 + 1) {
              faction_supplier_0xbc6e0(0x142666770,iStack0000000000000198 + iVar11);
              if (bVar25) {
                faction_supplier_0xaf19c0(0x142666770);
              }
              else {
                faction_supplier_0xaf19c0(0x142666770);
              }
            }
          }
        }
      }
      else {
        faction_supplier_0xbc6f0(0x142666770,1,0,1);
        FUN_140069710(&stack0x00009ba0,"Prisoner");
        FUN_140af0220(0x142666770,&stack0x00009ba0,0,0);
        faction_supplier_0x693f0(&stack0x00009ba0);
      }
      iVar28 = iVar28 + 1;
      iStack0000000000000198 = iStack0000000000000198 + 3;
      faction_supplier_0x693f0(&stack0x00003ac0);
    }
  }
  iVar29 = iVar29 + 1;
  goto LAB_14018e704;
}


/* classic PE:6aea11a5:272d000; chain; RVA 0x191971..0x19368a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void faction_chain(void)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 in_stack_00000020;
  undefined2 uVar14;
  undefined8 in_stack_00000088;
  int in_stack_000000b0;
  int iStack00000000000000b8;
  int iStack00000000000000c0;
  longlong *in_stack_000000d0;
  int iStack0000000000000128;
  int in_stack_00000190;
  int in_stack_000001a8;
  int in_stack_000005c0;
  undefined1 in_stack_0000076e;
  int iVar15;
  int iVar16;
  
  iStack0000000000000128 = in_stack_00000190;
  for (iVar15 = 0; iVar15 < 2; iVar15 = iVar15 + 1) {
    if (iVar15 == 0) {
      puVar12 = (undefined8 *)in_stack_000000d0[0x29];
    }
    else {
      puVar12 = (undefined8 *)in_stack_000000d0[0x2a];
    }
    if (puVar12 != (undefined8 *)0x0) {
      if ((iVar15 == 1) && (in_stack_000000d0[0x2a] == in_stack_000000d0[0x29])) break;
      cVar2 = faction_supplier_0x73550(0x1423e9af0,0);
      uVar14 = (undefined2)((uint)in_stack_00000020 >> 0x10);
      if (cVar2 == '\0') {
        faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 1,in_stack_00000088._4_4_ + 2)
        ;
        FUN_141347220(puVar12,0,1,0);
        uVar1 = (**(code **)*puVar12)(puVar12,0);
        FUN_1400bc750(0x142666770,uVar1,1);
      }
      else {
        faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
        faction_supplier_0x70c50(&stack0x0000a000);
        in_stack_00000020 = CONCAT22(uVar14,0xffff);
        iVar4 = FUN_1400f3d10(0x142508dc8,&stack0x0000a000,*(undefined2 *)((longlong)puVar12 + 0xa4)
                              ,*(undefined2 *)((longlong)puVar12 + 300),in_stack_00000020);
        if (iVar4 != 0) {
          in_stack_00000020 = 0;
          FUN_140af1630(0x142666770,iVar4,2,2,5);
        }
        faction_supplier_0x693f0(&stack0x0000a000);
      }
      faction_supplier_0xbc6f0(0x142666770,7,0);
      faction_supplier_0x70c50(&stack0x00003b40);
      FUN_141344290(puVar12,&stack0x00003b40,0);
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 1,in_stack_00000088._4_4_ + 6);
      uVar10 = faction_supplier_0x708f0(&stack0x00003b40);
      if ((ulonglong)(longlong)((in_stack_000001a8 - in_stack_00000088._4_4_) + -0xe) <= uVar10) {
        iVar13 = in_stack_000001a8 - in_stack_00000088._4_4_;
        iVar4 = iVar13 + -0xf;
        if (-1 < iVar4) {
          faction_supplier_0xe27f0(&stack0x00003b40,(longlong)iVar4,0);
        }
        if (3 < iVar4) {
          puVar7 = (undefined1 *)
                   faction_supplier_0xfcb70(&stack0x00003b40,(longlong)(iVar13 + -0x12));
          *puVar7 = 0x2e;
          puVar7 = (undefined1 *)
                   faction_supplier_0xfcb70(&stack0x00003b40,(longlong)(iVar13 + -0x11));
          *puVar7 = 0x2e;
          puVar7 = (undefined1 *)
                   faction_supplier_0xfcb70(&stack0x00003b40,(longlong)(iVar13 + -0x10));
          *puVar7 = 0x2e;
        }
      }
      FUN_140af0220(0x142666770,&stack0x00003b40,0);
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 2,in_stack_00000088._4_4_ + 6);
      if (iVar15 == 0) {
        if (in_stack_000000d0[0x2a] == in_stack_000000d0[0x29]) {
          FUN_140069710(&stack0x0000a020,"Assigned and chained");
          FUN_140af0220(0x142666770,&stack0x0000a020,0);
          faction_supplier_0x693f0(&stack0x0000a020);
        }
        else {
          FUN_140069710(&stack0x0000a040,"Assigned");
          FUN_140af0220(0x142666770,&stack0x0000a040,0);
          faction_supplier_0x693f0(&stack0x0000a040);
        }
      }
      else {
        FUN_140069710(&stack0x0000a060,"Chained");
        FUN_140af0220(0x142666770,&stack0x0000a060,0);
        faction_supplier_0x693f0(&stack0x0000a060);
      }
      cVar2 = (**(code **)(*in_stack_000000d0 + 0x1e0))(in_stack_000000d0);
      if (cVar2 == '\0') {
        for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
          for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
            faction_supplier_0xbc6e0
                      (0x142666770,iStack0000000000000128 + iVar4,in_stack_000000b0 + -6 + iVar13);
            if (puVar12 == (undefined8 *)in_stack_000000d0[0x29]) {
              faction_supplier_0xaf19c0
                        (0x142666770,
                         *(undefined4 *)((longlong)iVar13 * 0xc + 0x14266dc28 + (longlong)iVar4 * 4)
                         ,0);
            }
            else {
              faction_supplier_0xaf19c0
                        (0x142666770,
                         *(undefined4 *)((longlong)iVar13 * 0xc + 0x14266dc58 + (longlong)iVar4 * 4)
                         ,0);
            }
          }
        }
      }
      iStack0000000000000128 = iStack0000000000000128 + 3;
      faction_supplier_0x693f0(&stack0x00003b40);
    }
  }
  cVar2 = (**(code **)(*in_stack_000000d0 + 0x1e0))(in_stack_000000d0);
  if (cVar2 == '\0') {
    for (iStack00000000000000c0 = 0; iStack00000000000000c0 < 3;
        iStack00000000000000c0 = iStack00000000000000c0 + 1) {
      for (iStack00000000000000b8 = 0; iStack00000000000000b8 < 4;
          iStack00000000000000b8 = iStack00000000000000b8 + 1) {
        faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + iStack00000000000000c0);
        faction_supplier_0xaf1390
                  (0x142666770,
                   *(undefined4 *)
                    ((longlong)iStack00000000000000b8 * 0xc + 0x14266a778 +
                    (longlong)iStack00000000000000c0 * 4));
        cVar2 = faction_supplier_0x73550(0x1423e9af0,0);
        if (cVar2 != '\0') {
          FUN_1400bc750(0x142666770,0);
        }
      }
    }
    iStack0000000000000128 = iStack0000000000000128 + 3;
  }
  faction_supplier_0x670c0(&stack0x00002128);
  faction_supplier_0x70800(in_stack_000000d0 + 0x14,&stack0x00001d00);
  faction_supplier_0x707f0(in_stack_000000d0 + 0x14,&stack0x00003168);
  while( true ) {
    cVar2 = faction_supplier_0xbaf30(&stack0x00001d00,&stack0x00003168);
    if (cVar2 != '\0') break;
    plVar8 = (longlong *)faction_supplier_0x703d0(&stack0x00001d00);
    cVar2 = faction_zone_filter(*(undefined4 *)(*plVar8 + 0x150));
    if (cVar2 != '\0') {
      faction_supplier_0xbaf40(&stack0x00002128,&stack0x000020a8);
    }
    faction_supplier_0x703c0(&stack0x00001d00);
  }
  iStack0000000000000128 = in_stack_000005c0 + -5;
  lVar9 = faction_supplier_0x70410(&stack0x00002128);
  if (lVar9 == 0) {
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
    iStack0000000000000128 = iStack0000000000000128 + 1;
    FUN_140069710(&stack0x0000a080,"You must designate a dungeon");
    FUN_140af0220(0x142666770,&stack0x0000a080,0,0);
    faction_supplier_0x693f0(&stack0x0000a080);
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
    iStack0000000000000128 = iStack0000000000000128 + 1;
    FUN_140069710(&stack0x0000a0a0,"before this restraint will");
    FUN_140af0220(0x142666770,&stack0x0000a0a0,0,0);
    faction_supplier_0x693f0(&stack0x0000a0a0);
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
    iStack0000000000000128 = iStack0000000000000128 + 1;
    FUN_140069710(&stack0x0000a0c0,"be used for imprisonment.");
    FUN_140af0220(0x142666770,&stack0x0000a0c0,0,0);
    faction_supplier_0x693f0(&stack0x0000a0c0);
  }
  uVar10 = faction_supplier_0x70410(&stack0x00002128);
  if (1 < uVar10) {
    faction_supplier_0xbc6f0(0x142666770,7,0,1);
    faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
    iStack0000000000000128 = iStack0000000000000128 + 1;
    FUN_140069710(&stack0x0000a0e0,"This furniture is a part of multiple rooms.");
    FUN_140af0220(0x142666770,&stack0x0000a0e0,0,0);
    faction_supplier_0x693f0(&stack0x0000a0e0);
  }
  lVar9 = faction_supplier_0x70410(&stack0x00002128);
  if (lVar9 != 1) goto LAB_140193669;
  plVar8 = (longlong *)faction_supplier_0x707e0(&stack0x00002128,0);
  lVar9 = *plVar8;
  plVar8 = (longlong *)0x0;
  if (*(int *)(lVar9 + 0x118) != -1) {
    lVar11 = FUN_14007f0e0(_DAT_142507ed8,*(undefined4 *)(lVar9 + 0x114));
    if (lVar11 != 0) {
      plVar8 = (longlong *)faction_supplier_0x69440(lVar11,*(undefined4 *)(lVar9 + 0x118));
    }
  }
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128,in_stack_00000088._4_4_);
  iStack0000000000000128 = iStack0000000000000128 + 1;
  FUN_140069710(&stack0x0000a100,"This furniture is a part of");
  FUN_140af0220(0x142666770,&stack0x0000a100,0,0);
  faction_supplier_0x693f0(&stack0x0000a100);
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 1,in_stack_00000088._4_4_);
  uVar5 = *(int *)(lVar9 + 0x150) - 0x4f;
  if (uVar5 < 0x13) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar5) {
    case 0:
      FUN_140af1630(0x142666770,_DAT_142667704,0,2,4);
      break;
    case 1:
      FUN_140af1630(0x142666770,_DAT_1426676f4,0,2,4);
      break;
    case 3:
      FUN_140af1630(0x142666770,_DAT_142667710,0,2,4);
      break;
    case 4:
      FUN_140af1630(0x142666770,_DAT_14266771c,0,2,4);
      break;
    case 5:
      FUN_140af1630(0x142666770,_DAT_142667728,0,2,4);
      break;
    case 6:
      FUN_140af1630(0x142666770,_DAT_142667714,0,2,4);
      break;
    case 7:
      FUN_140af1630(0x142666770,_DAT_142667724,0,2,4);
      break;
    case 8:
      if (plVar8 == (longlong *)0x0) {
        FUN_140af1630(0x142666770,_DAT_142667730,0,2,4);
      }
      else {
        lVar11 = (**(code **)(*plVar8 + 0x18))(plVar8);
        sVar3 = (**(code **)*plVar8)(plVar8);
        if (sVar3 == 2) {
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x34) == 1) {
              FUN_140af1630(0x142666770,_DAT_142667754,0,2,4);
            }
            else if (*(int *)(lVar11 + 0x34) == 2) {
              FUN_140af1630(0x142666770,_DAT_142667758,0,2,4);
            }
            else {
              FUN_140af1630(0x142666770,_DAT_142667750,0,2,4);
            }
          }
        }
        else if (sVar3 == 8) {
          FUN_140af1630(0x142666770,_DAT_142667740,0,2,4);
        }
        else if (sVar3 == 9) {
          FUN_140af1630(0x142666770,_DAT_142667744,0,2,4);
        }
        else if (sVar3 == 0xb) {
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x34) == 1) {
              FUN_140af1630(0x142666770,_DAT_142667748,0,2,4);
            }
            else if (*(int *)(lVar11 + 0x34) == 2) {
              FUN_140af1630(0x142666770,_DAT_14266774c,0,2,4);
            }
            else {
              FUN_140af1630(0x142666770,_DAT_142667748,0,2,4);
            }
          }
        }
        else if (sVar3 == 0xd) {
          FUN_140af1630(0x142666770,_DAT_142667734,0,2,4);
        }
        else {
          FUN_140af1630(0x142666770,_DAT_142667730,0,2,4);
        }
      }
      break;
    case 9:
      FUN_140af1630(0x142666770,_DAT_142667720,0,2,4);
      break;
    case 10:
      FUN_140af1630(0x142666770,_DAT_14266772c,0,2,4);
      break;
    case 0xb:
      FUN_140af1630(0x142666770,_DAT_142667738,0,2,4);
      break;
    case 0xc:
      FUN_140af1630(0x142666770,_DAT_142667718,0,2,4);
      break;
    case 0xd:
      FUN_140af1630(0x142666770,_DAT_1426676f0,0,2,4);
      break;
    case 0xe:
      FUN_140af1630(0x142666770,_DAT_1426676f8,0,2,4);
      break;
    case 0xf:
      FUN_140af1630(0x142666770,_DAT_1426676fc,0,2,4);
      break;
    case 0x10:
      FUN_140af1630(0x142666770,_DAT_142667700,0,2,4);
      break;
    case 0x11:
      FUN_140af1630(0x142666770,_DAT_142667708,0,2,4);
      break;
    case 0x12:
      FUN_140af1630(0x142666770,_DAT_14266770c,0,2,4);
    }
  }
  for (iStack00000000000000c0 = 0; iStack00000000000000c0 < 3;
      iStack00000000000000c0 = iStack00000000000000c0 + 1) {
    for (iStack00000000000000b8 = 0; iStack00000000000000b8 < 4;
        iStack00000000000000b8 = iStack00000000000000b8 + 1) {
      faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 1 + iStack00000000000000c0);
      faction_supplier_0xaf1390
                (0x142666770,
                 *(undefined4 *)
                  ((longlong)iStack00000000000000b8 * 0xc + 0x14266a718 +
                  (longlong)iStack00000000000000c0 * 4));
      cVar2 = faction_supplier_0x73550(0x1423e9af0,0);
      if (cVar2 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  faction_supplier_0xbc6f0(0x142666770,7,0,1);
  faction_supplier_0xbc6e0(0x142666770,iStack0000000000000128 + 2,in_stack_00000088._4_4_ + 6);
  if (DAT_1418c5350 != '\0') goto LAB_140193669;
  cVar2 = faction_supplier_0x70ae0(lVar9 + 0xd0);
  if (cVar2 == '\0') {
    FUN_140af0220(0x142666770,lVar9 + 0xd0,0,0);
    goto LAB_140193669;
  }
  uVar5 = *(int *)(lVar9 + 0x150) - 0x4f;
  if (uVar5 < 0x13) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar5) {
    case 0:
      FUN_140069710(&stack0x0000a380,"Unnamed dormitory");
      FUN_140af0220(0x142666770,&stack0x0000a380,0,0);
      faction_supplier_0x693f0(&stack0x0000a380);
      break;
    case 1:
      FUN_140069710(&stack0x0000a3a0,"Unnamed dining hall");
      FUN_140af0220(0x142666770,&stack0x0000a3a0,0,0);
      faction_supplier_0x693f0(&stack0x0000a3a0);
      break;
    case 2:
      goto override_jmp_140192e6c_case_2;
    case 3:
      FUN_140069710(&stack0x0000a120,"Unnamed water source");
      FUN_140af0220(0x142666770,&stack0x0000a120,0,0);
      faction_supplier_0x693f0(&stack0x0000a120);
      break;
    case 4:
      FUN_140069710(&stack0x0000a140,"Unnamed dump");
      FUN_140af0220(0x142666770,&stack0x0000a140,0,0);
      faction_supplier_0x693f0(&stack0x0000a140);
      break;
    case 5:
      FUN_140069710(&stack0x0000a160,"Unnamed sand collection area");
      FUN_140af0220(0x142666770,&stack0x0000a160,0,0);
      faction_supplier_0x693f0(&stack0x0000a160);
      break;
    case 6:
      FUN_140069710(&stack0x0000a180,"Unnamed fishing area");
      FUN_140af0220(0x142666770,&stack0x0000a180,0,0);
      faction_supplier_0x693f0(&stack0x0000a180);
      break;
    case 7:
      FUN_140069710(&stack0x0000a1a0,"Unnamed pit/pond");
      FUN_140af0220(0x142666770,&stack0x0000a1a0,0,0);
      faction_supplier_0x693f0(&stack0x0000a1a0);
      break;
    case 8:
      iVar15 = 0;
      iVar4 = 0;
      iVar13 = 0;
      iVar16 = 0;
      faction_supplier_0x70800(lVar9 + 0x188,&stack0x00001d08);
      faction_supplier_0x707f0(lVar9 + 0x188,&stack0x00003180);
      while( true ) {
        puVar7 = &stack0x0000076e;
        for (lVar9 = 1; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        puVar7 = (undefined1 *)
                 faction_supplier_0x703e0(&stack0x00001d08,&stack0x00000fe3,&stack0x00003180);
        cVar2 = faction_supplier_0x66d70(*puVar7,in_stack_0000076e);
        if (cVar2 == '\0') break;
        puVar12 = (undefined8 *)faction_supplier_0x703d0(&stack0x00001d08);
        iVar6 = (**(code **)(*(longlong *)*puVar12 + 0xd0))((longlong *)*puVar12);
        if (iVar6 - 3U < 0x33) {
                    /* WARNING: Switch is manually overridden */
          switch((&UNK_1401a13d4)[(int)(iVar6 - 3U)]) {
          case 0:
            iVar13 = iVar13 + 1;
            break;
          case 1:
            iVar4 = iVar4 + 1;
            break;
          case 2:
            iVar15 = iVar15 + 1;
            break;
          case 3:
            iVar16 = iVar16 + 1;
          }
        }
        faction_supplier_0x703c0(&stack0x00001d08);
      }
      if (iVar13 < 1) {
        if ((iVar15 < iVar4) && (iVar16 < iVar4)) {
          FUN_140069710(&stack0x0000a1e0,"Unnamed sculpture garden");
          FUN_140af0220(0x142666770,&stack0x0000a1e0,0,0);
          faction_supplier_0x693f0(&stack0x0000a1e0);
        }
        else if (iVar16 < iVar15) {
          FUN_140069710(&stack0x0000a200,"Unnamed zoo");
          FUN_140af0220(0x142666770,&stack0x0000a200,0,0);
          faction_supplier_0x693f0(&stack0x0000a200);
        }
        else if (iVar16 < 1) {
          FUN_140069710(&stack0x0000a240,"Unnamed meeting hall");
          FUN_140af0220(0x142666770,&stack0x0000a240,0,0);
          faction_supplier_0x693f0(&stack0x0000a240);
        }
        else {
          FUN_140069710(&stack0x0000a220,"Unnamed museum");
          FUN_140af0220(0x142666770,&stack0x0000a220,0,0);
          faction_supplier_0x693f0(&stack0x0000a220);
        }
      }
      else {
        FUN_140069710(&stack0x0000a1c0,"Unnamed memorial hall");
        FUN_140af0220(0x142666770,&stack0x0000a1c0,0,0);
        faction_supplier_0x693f0(&stack0x0000a1c0);
      }
      break;
    case 9:
      FUN_140069710(&stack0x0000a260,"Unnamed pen/pasture");
      FUN_140af0220(0x142666770,&stack0x0000a260,0,0);
      faction_supplier_0x693f0(&stack0x0000a260);
      break;
    case 10:
      FUN_140069710(&stack0x0000a280,"Unnamed clay collection area");
      FUN_140af0220(0x142666770,&stack0x0000a280,0,0);
      faction_supplier_0x693f0(&stack0x0000a280);
      break;
    case 0xb:
      FUN_140069710(&stack0x0000a2a0,"Unnamed animal training area");
      FUN_140af0220(0x142666770,&stack0x0000a2a0,0,0);
      faction_supplier_0x693f0(&stack0x0000a2a0);
      break;
    case 0xc:
      FUN_140069710(&stack0x0000a2c0,"Unnamed plant gathering area");
      FUN_140af0220(0x142666770,&stack0x0000a2c0,0,0);
      faction_supplier_0x693f0(&stack0x0000a2c0);
      break;
    case 0xd:
      FUN_140069710(&stack0x0000a2e0,"Unnamed bedroom");
      FUN_140af0220(0x142666770,&stack0x0000a2e0,0,0);
      faction_supplier_0x693f0(&stack0x0000a2e0);
      break;
    case 0xe:
      FUN_140069710(&stack0x0000a300,"Unnamed office");
      FUN_140af0220(0x142666770,&stack0x0000a300,0,0);
      faction_supplier_0x693f0(&stack0x0000a300);
      break;
    case 0xf:
      FUN_140069710(&stack0x0000a320,"Unnamed archery range");
      FUN_140af0220(0x142666770,&stack0x0000a320,0,0);
      faction_supplier_0x693f0(&stack0x0000a320);
      break;
    case 0x10:
      FUN_140069710(&stack0x0000a340,"Unnamed barracks");
      FUN_140af0220(0x142666770,&stack0x0000a340,0,0);
      faction_supplier_0x693f0(&stack0x0000a340);
      break;
    case 0x11:
      FUN_140069710(&stack0x0000a360,"Unnamed dungeon");
      FUN_140af0220(0x142666770,&stack0x0000a360,0,0);
      faction_supplier_0x693f0(&stack0x0000a360);
      break;
    case 0x12:
      FUN_140069710(&stack0x0000a3c0,"Unnamed tomb");
      FUN_140af0220(0x142666770,&stack0x0000a3c0,0,0);
      faction_supplier_0x693f0(&stack0x0000a3c0);
    }
  }
  else {
override_jmp_140192e6c_case_2:
    FUN_140069710(&stack0x0000a3e0,"Unnamed zone");
    FUN_140af0220(0x142666770,&stack0x0000a3e0,0,0);
    faction_supplier_0x693f0(&stack0x0000a3e0);
  }
LAB_140193669:
  faction_supplier_0x68720(&stack0x00002128);
  func_0x00014019c84f();
  return;
}


/* classic PE:6aea11a5:272d000; zone_filter; RVA 0x5627f0..0x56281c */

ulonglong faction_zone_filter(int param_1)

{
  ulonglong in_RAX;
  
  if (param_1 - 0x4fU < 0x13) {
    in_RAX = (ulonglong)(byte)(&UNK_140562824)[(int)(param_1 - 0x4fU)];
                    /* WARNING: Switch is manually overridden */
    switch(in_RAX) {
    case 0:
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* classic PE:6aea11a5:272d000; cage_name; RVA 0x568990..0x569919 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void faction_cage_name(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 *puVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_1d8 [32];
  undefined4 uStack_1b8;
  undefined1 uStack_1b0;
  undefined2 uStack_1a8;
  longlong lStack_198;
  undefined8 ***pppuStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  undefined8 ***pppuStack_128;
  longlong lStack_120;
  longlong lStack_118;
  ulonglong uStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_1d8;
  uVar20 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0xf;
  pppuStack_148 = (undefined8 ****)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 1;
  uStack_1b8 = 0;
  lStack_198 = param_2;
  FUN_1414e58e0(0x1423ed870,&pppuStack_148,*(undefined2 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x2c));
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0xf;
  uStack_168 = 0;
  lVar13 = FUN_1414c1d30(0x1423ed870,*(undefined2 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c)
                        );
  if (lVar13 == 0) {
LAB_140568aa9:
    uStack_158 = 4;
    uStack_168 = CONCAT35(uStack_168._5_3_,0x65676143);
  }
  else {
    if ((*(int *)(lVar13 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar13 + 0x290) + 6) & 2) == 0))
    {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140568aa9;
    if ((*(byte *)(param_1 + 0x178) & 2) == 0) {
      uStack_158 = 9;
      uStack_168 = 0x7569726172726554;
      uStack_160 = CONCAT62(uStack_160._2_6_,0x6d);
    }
    else {
      uStack_158 = 8;
      uStack_168 = 0x6d75697261757141;
      uStack_160 = uStack_160 & 0xffffffffffffff00;
    }
  }
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0xf;
  pppuStack_188 = (undefined8 ****)0x0;
  ppppuVar15 = (undefined8 ****)pppuStack_188;
  if (*(longlong *)(param_1 + 0x130) - (longlong)*(undefined8 **)(param_1 + 0x128) >> 3 != 0) {
    sVar8 = -1;
    uVar9 = 0xffff;
    plVar14 = (longlong *)**(undefined8 **)(param_1 + 0x128);
    param_2 = lStack_198;
    uVar19 = uVar20;
    sVar11 = sVar8;
    if (*(longlong *)(*plVar14 + 0x40) - *(longlong *)(*plVar14 + 0x38) >> 3 != 0) {
      do {
        iVar12 = (**(code **)(**(longlong **)(uVar19 + *(longlong *)(*plVar14 + 0x38)) + 0x10))();
        if (iVar12 != 9) goto LAB_140568bcb;
        lVar13 = (**(code **)(**(longlong **)
                                (uVar19 + *(longlong *)
                                           (*(longlong *)**(undefined8 **)(param_1 + 0x128) + 0x38))
                             + 0x20))();
        if (lVar13 != 0) {
          FUN_141399160(lVar13);
          uVar18 = (ushort)((uint)*(undefined4 *)(lVar13 + 0x118) >> 0x1c) & 1;
          if (sVar8 != -1) {
            if (*(int *)(lVar13 + 0xa4) == (int)sVar8) {
              if (*(short *)(lVar13 + 300) == sVar11) {
                if (uVar18 != uVar9) {
                  uVar9 = 0xfffe;
                }
              }
              else {
                sVar11 = -2;
              }
              goto LAB_140568bcb;
            }
            if (5 < uStack_170) {
LAB_140568d2c:
              ppppuVar15 = &pppuStack_188;
              if (0xf < uStack_170) {
                ppppuVar15 = (undefined8 ****)pppuStack_188;
              }
              uStack_178 = 6;
              faction_supplier_0x154f5ba(ppppuVar15,"Shared",6);
              *(undefined1 *)((longlong)ppppuVar15 + 6) = 0;
              param_2 = lStack_198;
              ppppuVar15 = (undefined8 ****)pppuStack_188;
              goto LAB_140569410;
            }
            if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
              uVar19 = 0x7fffffffffffffff;
            }
            else {
              uVar20 = (uStack_170 >> 1) + uStack_170;
LAB_140568d86:
              uVar19 = 0xf;
              if (0xf < uVar20) {
                uVar19 = uVar20;
              }
            }
LAB_140568d92:
            uVar20 = uStack_170;
            ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar19 + 1);
            uStack_178 = 6;
            *(undefined4 *)ppppuVar15 = 0x72616853;
            *(undefined2 *)((longlong)ppppuVar15 + 4) = 0x6465;
            *(undefined1 *)((longlong)ppppuVar15 + 6) = 0;
            param_2 = lStack_198;
            uStack_170 = uVar19;
            if (uVar20 < 0x10) goto LAB_140569410;
            uVar19 = uVar20 + 1;
            ppppuVar16 = (undefined8 ****)pppuStack_188;
            if (0xfff < uVar19) {
              uVar19 = uVar20 + 0x28;
              ppppuVar16 = (undefined8 ****)pppuStack_188[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_188 + (-8 - (longlong)ppppuVar16)))
              goto LAB_1405693b2;
            }
            faction_supplier_0x154de20(ppppuVar16,uVar19);
            param_2 = lStack_198;
            goto LAB_140569410;
          }
          sVar8 = *(short *)(lVar13 + 0xa4);
          sVar11 = *(short *)(lVar13 + 300);
          uVar9 = uVar18;
LAB_140568bcb:
          iVar12 = (**(code **)(**(longlong **)
                                  (uVar19 + *(longlong *)
                                             (*(longlong *)**(undefined8 **)(param_1 + 0x128) + 0x38
                                             )) + 0x10))();
          if (((iVar12 == 10) &&
              (plVar14 = (longlong *)
                         (**(code **)(**(longlong **)
                                        (uVar19 + *(longlong *)
                                                   (*(longlong *)**(undefined8 **)(param_1 + 0x128)
                                                   + 0x38)) + 0x18))(), plVar14 != (longlong *)0x0))
             && (cVar7 = (**(code **)(*plVar14 + 0x6c0))(plVar14), cVar7 != '\0')) {
            sVar10 = (**(code **)(*plVar14 + 0x48))(plVar14);
            if (sVar8 == -1) {
              sVar11 = (**(code **)(*plVar14 + 0x50))(plVar14);
              uVar9 = 0;
              sVar8 = sVar10;
            }
            else {
              if (sVar10 != sVar8) {
                if (5 < uStack_170) goto LAB_140568d2c;
                uVar19 = 0x7fffffffffffffff;
                if (uStack_170 <= 0x7fffffffffffffff - (uStack_170 >> 1)) {
                  uVar20 = uStack_170 + (uStack_170 >> 1);
                  goto LAB_140568d86;
                }
                goto LAB_140568d92;
              }
              sVar10 = (**(code **)(*plVar14 + 0x50))(plVar14);
              if (sVar10 != sVar11) {
                sVar11 = -2;
              }
            }
          }
        }
        uVar23 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar23;
        plVar14 = (longlong *)**(undefined8 **)(param_1 + 0x128);
        uVar19 = uVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 <
               (ulonglong)(*(longlong *)(*plVar14 + 0x40) - *(longlong *)(*plVar14 + 0x38) >> 3));
      param_2 = lStack_198;
      ppppuVar15 = (undefined8 ****)pppuStack_188;
      if (-1 < sVar8) {
        if (sVar11 < 0) {
          FUN_140aba4d0(sVar8,&pppuStack_188,0,0xffffffff);
          FUN_1405440a0(&pppuStack_188);
          param_2 = lStack_198;
          ppppuVar15 = (undefined8 ****)pppuStack_188;
        }
        else {
          FUN_140aba4d0(sVar8,&pppuStack_188,0,sVar11);
          FUN_1405440a0(&pppuStack_188);
          param_2 = lStack_198;
          ppppuVar15 = (undefined8 ****)pppuStack_188;
          if (-1 < (short)uVar9) {
            if ((ulonglong)(longlong)sVar8 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3)) {
              lVar13 = *(longlong *)(_DAT_142508de8 + (longlong)sVar8 * 8);
              lVar3 = *(longlong *)(lVar13 + 0x178);
              if ((ulonglong)(*(longlong *)(lVar13 + 0x180) - lVar3 >> 3) <=
                  (ulonglong)(longlong)sVar11) goto LAB_140568e41;
              cVar7 = *(char *)(*(longlong *)(lVar3 + (longlong)sVar11 * 8) + 0x15b8);
            }
            else {
LAB_140568e41:
              cVar7 = -1;
            }
            if (cVar7 == '\0') {
              FUN_140070fd0(&pppuStack_188," (",2);
              uVar22 = uStack_170;
              uVar20 = uStack_178;
              if (uVar9 != 0) {
                if (uStack_178 < uStack_170) {
                  ppppuVar15 = &pppuStack_188;
                  if (0xf < uStack_170) {
                    ppppuVar15 = (undefined8 ****)pppuStack_188;
                  }
                  puVar1 = (undefined2 *)((longlong)ppppuVar15 + uStack_178);
                  uStack_178 = uStack_178 + 1;
                  *puVar1 = 0x78;
                }
                else {
                  if (uStack_178 == 0x7fffffffffffffff) goto LAB_140569907;
                  uVar19 = uStack_178 + 1;
                  uVar21 = uVar19 | 0xf;
                  if (uVar21 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
                      uVar21 = 0x7fffffffffffffff;
                    }
                    else {
                      uVar2 = uStack_170 + (uStack_170 >> 1);
                      if (uVar21 < uVar2) {
                        uVar21 = uVar2;
                      }
                    }
                  }
                  else {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar21 + 1);
                  pppuVar6 = pppuStack_188;
                  uStack_178 = uVar19;
                  uStack_170 = uVar21;
                  if (uVar22 < 0x10) {
                    faction_supplier_0x154f29e(ppppuVar15,&pppuStack_188,uVar20);
                    *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0x78;
                    pppuStack_188 = ppppuVar15;
                  }
                  else {
                    faction_supplier_0x154f29e(ppppuVar15,pppuStack_188,uVar20);
                    *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0x78;
                    uVar19 = uVar22 + 1;
                    ppppuVar16 = (undefined8 ****)pppuVar6;
                    if (0xfff < uVar19) {
                      uVar19 = uVar22 + 0x28;
                      ppppuVar16 = (undefined8 ****)pppuVar6[-1];
                      if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar16)))
                      goto LAB_1405693b2;
                    }
                    faction_supplier_0x154de20(ppppuVar16,uVar19);
                    pppuStack_188 = ppppuVar15;
                  }
                }
              }
              uVar22 = uStack_170;
              uVar20 = uStack_178;
              if (uStack_178 < uStack_170) {
                ppppuVar15 = &pppuStack_188;
                if (0xf < uStack_170) {
                  ppppuVar15 = (undefined8 ****)pppuStack_188;
                }
                puVar1 = (undefined2 *)((longlong)ppppuVar15 + uStack_178);
                uStack_178 = uStack_178 + 1;
                *puVar1 = 0xc;
              }
              else {
                if (uStack_178 == 0x7fffffffffffffff) goto LAB_140569907;
                uVar19 = uStack_178 + 1;
                uVar21 = uVar19 | 0xf;
                if (uVar21 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar2 = uStack_170 + (uStack_170 >> 1);
                    if (uVar21 < uVar2) {
                      uVar21 = uVar2;
                    }
                  }
                }
                else {
                  uVar21 = 0x7fffffffffffffff;
                }
                ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar21 + 1);
                pppuVar6 = pppuStack_188;
                uStack_178 = uVar19;
                uStack_170 = uVar21;
                if (uVar22 < 0x10) {
                  faction_supplier_0x154f29e(ppppuVar15,&pppuStack_188,uVar20);
                  *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0xc;
                  pppuStack_188 = ppppuVar15;
                }
                else {
                  faction_supplier_0x154f29e(ppppuVar15,pppuStack_188,uVar20);
                  *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0xc;
                  uVar19 = uVar22 + 1;
                  ppppuVar16 = (undefined8 ****)pppuVar6;
                  if (0xfff < uVar19) {
                    uVar19 = uVar22 + 0x28;
                    ppppuVar16 = (undefined8 ****)pppuVar6[-1];
                    if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar16)))
                    goto LAB_1405693b2;
                  }
                  faction_supplier_0x154de20(ppppuVar16,uVar19);
                  pppuStack_188 = ppppuVar15;
                }
              }
              if (uVar9 != 0) {
                if (uStack_170 <= uStack_178) goto LAB_14056909a;
LAB_140569394:
                ppppuVar15 = &pppuStack_188;
                if (0xf < uStack_170) {
                  ppppuVar15 = (undefined8 ****)pppuStack_188;
                }
                puVar1 = (undefined2 *)((longlong)ppppuVar15 + uStack_178);
                uStack_178 = uStack_178 + 1;
                *puVar1 = 0x78;
              }
            }
            else {
              if (cVar7 != '\x01') goto LAB_140569410;
              FUN_140070fd0(&pppuStack_188," (",2);
              uVar22 = uStack_170;
              uVar20 = uStack_178;
              if (uVar9 != 0) {
                if (uStack_178 < uStack_170) {
                  ppppuVar15 = &pppuStack_188;
                  if (0xf < uStack_170) {
                    ppppuVar15 = (undefined8 ****)pppuStack_188;
                  }
                  puVar1 = (undefined2 *)((longlong)ppppuVar15 + uStack_178);
                  uStack_178 = uStack_178 + 1;
                  *puVar1 = 0x78;
                }
                else {
                  if (uStack_178 == 0x7fffffffffffffff) goto LAB_140569907;
                  uVar19 = uStack_178 + 1;
                  uVar21 = uVar19 | 0xf;
                  if (uVar21 < 0x8000000000000000) {
                    if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
                      uVar21 = 0x7fffffffffffffff;
                    }
                    else {
                      uVar2 = uStack_170 + (uStack_170 >> 1);
                      if (uVar21 < uVar2) {
                        uVar21 = uVar2;
                      }
                    }
                  }
                  else {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar21 + 1);
                  pppuVar6 = pppuStack_188;
                  uStack_178 = uVar19;
                  uStack_170 = uVar21;
                  if (uVar22 < 0x10) {
                    faction_supplier_0x154f29e(ppppuVar15,&pppuStack_188,uVar20);
                    *(undefined2 *)(uVar20 + (longlong)ppppuVar15) = 0x78;
                    pppuStack_188 = ppppuVar15;
                  }
                  else {
                    faction_supplier_0x154f29e(ppppuVar15,pppuStack_188,uVar20);
                    *(undefined2 *)(uVar20 + (longlong)ppppuVar15) = 0x78;
                    uVar19 = uVar22 + 1;
                    ppppuVar16 = (undefined8 ****)pppuVar6;
                    if (0xfff < uVar19) {
                      uVar19 = uVar22 + 0x28;
                      ppppuVar16 = (undefined8 ****)pppuVar6[-1];
                      if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar16)))
                      goto LAB_1405693b2;
                    }
                    faction_supplier_0x154de20(ppppuVar16,uVar19);
                    pppuStack_188 = ppppuVar15;
                  }
                }
              }
              uVar22 = uStack_170;
              uVar20 = uStack_178;
              if (uStack_178 < uStack_170) {
                ppppuVar15 = &pppuStack_188;
                if (0xf < uStack_170) {
                  ppppuVar15 = (undefined8 ****)pppuStack_188;
                }
                puVar1 = (undefined2 *)((longlong)ppppuVar15 + uStack_178);
                uStack_178 = uStack_178 + 1;
                *puVar1 = 0xb;
              }
              else {
                if (uStack_178 == 0x7fffffffffffffff) goto LAB_140569907;
                uVar19 = uStack_178 + 1;
                uVar21 = uVar19 | 0xf;
                if (uVar21 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar2 = (uStack_170 >> 1) + uStack_170;
                    if (uVar21 < uVar2) {
                      uVar21 = uVar2;
                    }
                  }
                }
                else {
                  uVar21 = 0x7fffffffffffffff;
                }
                ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar21 + 1);
                pppuVar6 = pppuStack_188;
                uStack_178 = uVar19;
                uStack_170 = uVar21;
                if (uVar22 < 0x10) {
                  faction_supplier_0x154f29e(ppppuVar15,&pppuStack_188,uVar20);
                  *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0xb;
                  pppuStack_188 = ppppuVar15;
                }
                else {
                  faction_supplier_0x154f29e(ppppuVar15,pppuStack_188,uVar20);
                  *(undefined2 *)((longlong)ppppuVar15 + uVar20) = 0xb;
                  uVar19 = uVar22 + 1;
                  ppppuVar16 = (undefined8 ****)pppuVar6;
                  if (0xfff < uVar19) {
                    uVar19 = uVar22 + 0x28;
                    ppppuVar16 = (undefined8 ****)pppuVar6[-1];
                    if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar16)))
                    goto LAB_1405693b2;
                  }
                  faction_supplier_0x154de20(ppppuVar16,uVar19);
                  pppuStack_188 = ppppuVar15;
                }
              }
              if (uVar9 != 0) {
                if (uStack_178 < uStack_170) goto LAB_140569394;
LAB_14056909a:
                uVar19 = uStack_170;
                uVar20 = uStack_178;
                if (uStack_178 == 0x7fffffffffffffff) goto LAB_140569907;
                uVar22 = uStack_178 + 1;
                uVar21 = uVar22 | 0xf;
                if (uVar21 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uStack_170 >> 1) < uStack_170) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar2 = (uStack_170 >> 1) + uStack_170;
                    if (uVar21 < uVar2) {
                      uVar21 = uVar2;
                    }
                  }
                }
                else {
                  uVar21 = 0x7fffffffffffffff;
                }
                ppppuVar15 = (undefined8 ****)FUN_140071d90(uVar21 + 1);
                pppuVar6 = pppuStack_188;
                uStack_178 = uVar22;
                uStack_170 = uVar21;
                if (uVar19 < 0x10) {
                  faction_supplier_0x154f29e(ppppuVar15,&pppuStack_188,uVar20);
                  *(undefined2 *)(uVar20 + (longlong)ppppuVar15) = 0x78;
                  pppuStack_188 = ppppuVar15;
                }
                else {
                  faction_supplier_0x154f29e(ppppuVar15,pppuStack_188,uVar20);
                  *(undefined2 *)(uVar20 + (longlong)ppppuVar15) = 0x78;
                  ppppuVar16 = (undefined8 ****)pppuVar6;
                  if (0xfff < uVar19 + 1) {
                    ppppuVar16 = (undefined8 ****)pppuVar6[-1];
                    uVar19 = uVar19 + 0x28;
                    if (0x1f < (ulonglong)((longlong)pppuVar6 + (-8 - (longlong)ppppuVar16))) {
LAB_1405693b2:
                      _invalid_parameter_noinfo_noreturn(ppppuVar16,uVar19);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  faction_supplier_0x154de20(ppppuVar16);
                  pppuStack_188 = ppppuVar15;
                }
              }
            }
            FUN_140070fd0(&pppuStack_188,")",1);
            param_2 = lStack_198;
            ppppuVar15 = (undefined8 ****)pppuStack_188;
          }
        }
      }
    }
  }
LAB_140569410:
  pppuStack_188 = ppppuVar15;
  lVar13 = lStack_138;
  uVar20 = uStack_178;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    if (uStack_178 == 0) {
      if (lStack_138 == 0x7fffffffffffffff) {
        FUN_140066e50();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppppuVar15 = &pppuStack_148;
      if (0xf < uStack_130) {
        ppppuVar15 = (undefined8 ****)pppuStack_148;
      }
      pppuStack_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uVar20 = lStack_138 + 1;
      uVar19 = 0xf;
      ppppuVar16 = &pppuStack_c8;
      if (0xf < uVar20) {
        uVar19 = uVar20 | 0xf;
        if (uVar19 < 0x8000000000000000) {
          if (uVar19 < 0x16) {
            uVar19 = 0x16;
          }
        }
        else {
          uVar19 = 0x7fffffffffffffff;
        }
        ppppuVar16 = (undefined8 ****)FUN_140071d90(uVar19 + 1);
        pppuStack_c8 = ppppuVar16;
      }
      uStack_b8 = uVar20;
      uStack_b0 = uVar19;
      faction_supplier_0x154f29e(ppppuVar16,ppppuVar15,lVar13);
      *(undefined1 *)((longlong)ppppuVar16 + lVar13) = 0x20;
      *(undefined1 *)((longlong)ppppuVar16 + uVar20) = 0;
      puVar17 = (undefined8 *)FUN_140070fd0(&pppuStack_c8,&uStack_168,uStack_158);
      pppuStack_128 = (undefined8 ***)*puVar17;
      lStack_120 = puVar17[1];
      lStack_118 = puVar17[2];
      uStack_110 = puVar17[3];
      puVar17[2] = 0;
      puVar17[3] = 0xf;
      *(undefined1 *)puVar17 = 0;
      FUN_1401fc910(param_2,&pppuStack_128);
      if (0xf < uStack_110) {
        uVar20 = uStack_110 + 1;
        ppppuVar15 = (undefined8 ****)pppuStack_128;
        if (0xfff < uVar20) {
          uVar20 = uStack_110 + 0x28;
          ppppuVar15 = (undefined8 ****)pppuStack_128[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar15))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        faction_supplier_0x154de20(ppppuVar15,uVar20);
      }
      FUN_140070e10(&pppuStack_c8);
    }
    else {
      if (uStack_178 == 0x7fffffffffffffff) {
        FUN_140066e50();
LAB_140569907:
        FUN_140066e50();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppppuVar15 = &pppuStack_188;
      if (0xf < uStack_170) {
        ppppuVar15 = (undefined8 ****)pppuStack_188;
      }
      pppuStack_108 = (undefined8 ****)0x0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uVar19 = uStack_178 + 1;
      uVar22 = 0xf;
      ppppuVar16 = &pppuStack_108;
      if (0xf < uVar19) {
        uVar22 = uVar19 | 0xf;
        if (uVar22 < 0x8000000000000000) {
          if (uVar22 < 0x16) {
            uVar22 = 0x16;
          }
        }
        else {
          uVar22 = 0x7fffffffffffffff;
        }
        ppppuVar16 = (undefined8 ****)FUN_140071d90(uVar22 + 1);
        pppuStack_108 = ppppuVar16;
      }
      uStack_f8 = uVar19;
      uStack_f0 = uVar22;
      faction_supplier_0x154f29e(ppppuVar16,ppppuVar15,uVar20);
      *(undefined1 *)((longlong)ppppuVar16 + uVar20) = 0x20;
      *(undefined1 *)((longlong)ppppuVar16 + uVar19) = 0;
      puVar17 = (undefined8 *)FUN_140070fd0(&pppuStack_108,&uStack_168,uStack_158);
      uStack_68 = *puVar17;
      uStack_60 = puVar17[1];
      uStack_58 = puVar17[2];
      uStack_50 = puVar17[3];
      puVar17[3] = 0xf;
      puVar17[2] = 0;
      *(undefined1 *)puVar17 = 0;
      puVar17 = (undefined8 *)FUN_140070fd0(&uStack_68," (",2);
      uStack_88 = *puVar17;
      uStack_80 = puVar17[1];
      uStack_78 = puVar17[2];
      uStack_70 = puVar17[3];
      puVar17[2] = 0;
      puVar17[3] = 0xf;
      *(undefined1 *)puVar17 = 0;
      ppppuVar15 = &pppuStack_148;
      if (0xf < uStack_130) {
        ppppuVar15 = (undefined8 ****)pppuStack_148;
      }
      puVar17 = (undefined8 *)FUN_140070fd0(&uStack_88,ppppuVar15,lStack_138);
      uStack_a8 = *puVar17;
      uStack_a0 = puVar17[1];
      uStack_98 = puVar17[2];
      uStack_90 = puVar17[3];
      puVar17[3] = 0xf;
      puVar17[2] = 0;
      *(undefined1 *)puVar17 = 0;
      puVar17 = (undefined8 *)FUN_140070fd0(&uStack_a8,")",1);
      pppuStack_128 = (undefined8 ***)*puVar17;
      lStack_120 = puVar17[1];
      lStack_118 = puVar17[2];
      uStack_110 = puVar17[3];
      puVar17[2] = 0;
      puVar17[3] = 0xf;
      *(undefined1 *)puVar17 = 0;
      FUN_1401fc910(param_2,&pppuStack_128);
      if (0xf < uStack_110) {
        uVar20 = uStack_110 + 1;
        ppppuVar15 = (undefined8 ****)pppuStack_128;
        if (0xfff < uVar20) {
          uVar20 = uStack_110 + 0x28;
          ppppuVar15 = (undefined8 ****)pppuStack_128[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_128 + (-8 - (longlong)ppppuVar15))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        faction_supplier_0x154de20(ppppuVar15,uVar20);
      }
      FUN_140070e10(&uStack_a8);
      FUN_140070e10(&uStack_88);
      FUN_140070e10(&uStack_68);
      if (0xf < uStack_f0) {
        uVar20 = uStack_f0 + 1;
        ppppuVar15 = (undefined8 ****)pppuStack_108;
        if (0xfff < uVar20) {
          uVar20 = uStack_f0 + 0x28;
          ppppuVar15 = (undefined8 ****)pppuStack_108[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_108 + (-8 - (longlong)ppppuVar15))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        faction_supplier_0x154de20(ppppuVar15,uVar20);
      }
    }
  }
  else {
    plVar14 = (longlong *)(param_1 + 0xd0);
    if ((longlong *)param_2 != plVar14) {
      if (0xf < *(ulonglong *)(param_1 + 0xe8)) {
        plVar14 = (longlong *)*plVar14;
      }
      FUN_140070e90(param_2,plVar14,*(undefined8 *)(param_1 + 0xe0));
    }
    uVar20 = uStack_178;
    if (uStack_178 != 0) {
      if (0x7fffffffffffffff - uStack_178 < 2) {
        FUN_140066e50();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppppuVar15 = &pppuStack_188;
      if (0xf < uStack_170) {
        ppppuVar15 = (undefined8 ****)pppuStack_188;
      }
      pppuStack_e8 = (undefined8 ****)0x0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uVar19 = uStack_178 + 2;
      uVar22 = 0xf;
      ppppuVar16 = &pppuStack_e8;
      if (0xf < uVar19) {
        uVar22 = uVar19 | 0xf;
        if (uVar22 < 0x8000000000000000) {
          if (uVar22 < 0x16) {
            uVar22 = 0x16;
          }
        }
        else {
          uVar22 = 0x7fffffffffffffff;
        }
        ppppuVar16 = (undefined8 ****)FUN_140071d90(uVar22 + 1);
        pppuStack_e8 = ppppuVar16;
      }
      uStack_d8 = uVar19;
      uStack_d0 = uVar22;
      *(undefined2 *)ppppuVar16 = 0x2820;
      faction_supplier_0x154f29e((undefined2 *)((longlong)ppppuVar16 + 2),ppppuVar15,uVar20);
      *(undefined1 *)((longlong)ppppuVar16 + uVar19) = 0;
      plVar14 = (longlong *)FUN_140070fd0(&pppuStack_e8,")",1);
      pppuStack_128 = (undefined8 ***)*plVar14;
      lStack_120 = plVar14[1];
      lStack_118 = plVar14[2];
      uStack_110 = plVar14[3];
      plVar14[2] = 0;
      plVar14[3] = 0xf;
      *(undefined1 *)plVar14 = 0;
      ppppuVar15 = &pppuStack_128;
      if (0xf < uStack_110) {
        ppppuVar15 = (undefined8 ****)pppuStack_128;
      }
      FUN_140070fd0(param_2,ppppuVar15,lStack_118);
      FUN_140070e10(&pppuStack_128);
      FUN_140070e10(&pppuStack_e8);
    }
  }
  FUN_140070e10(&pppuStack_188);
  FUN_140070e10(&uStack_168);
  FUN_140070e10(&pppuStack_148);
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_1d8);
  return;
}


/* classic PE:6aea11a5:272d000; chain_name; RVA 0x568560..0x568987 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void faction_chain_name(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    puVar6 = (undefined8 *)(param_1 + 0xd0);
    if (param_2 != puVar6) {
      if (0xf < *(ulonglong *)(param_1 + 0xe8)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_140070e90(param_2,puVar6,*(undefined8 *)(param_1 + 0xe0));
    }
    goto LAB_140568963;
  }
  uVar13 = 0;
  param_2[2] = 0;
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar6 = 0;
  uStack_80 = 0;
  uStack_70 = 0xf;
  iVar2 = *(int *)(param_1 + 0x2c);
  sVar1 = *(short *)(param_1 + 0x28);
  uStack_78 = 0;
  pppuStack_88 = (undefined8 ****)0x0;
  if (((((ushort)(sVar1 - 0xdbU) < 200) &&
       (lVar16 = _DAT_1425160a0 - _DAT_142516098 >> 3, lVar16 != 0)) && (iVar2 != -1)) &&
     (iVar15 = (int)lVar16 + -1, uVar10 = uVar13, -1 < iVar15)) {
    do {
      iVar8 = iVar15 + (int)uVar10 >> 1;
      lVar16 = *(longlong *)(_DAT_142516098 + (longlong)iVar8 * 8);
      if (*(int *)(lVar16 + 0xe0) == iVar2) {
        if ((lVar16 != 0) && (*(char *)(lVar16 + 0xaa) != '\0')) {
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0xf;
          pppuStack_68 = (undefined8 ****)0x0;
          if (((*(longlong *)(lVar16 + 0x130) == 0) ||
              ((lVar7 = *(longlong *)(*(longlong *)(lVar16 + 0x130) + 0x58), lVar7 == 0 ||
               (*(int *)(lVar7 + 0x30) == -1)))) || (lVar7 = FUN_140073b30(0x142504068), lVar7 == 0)
             ) {
            lVar16 = lVar16 + 0x38;
          }
          else {
            lVar16 = FUN_140c4f000(lVar7);
          }
          uVar10 = 0xf;
          if ((lVar16 != 0) && (*(char *)(lVar16 + 0x72) != '\0')) {
            FUN_140aaafe0(lVar16,&pppuStack_68,1,0);
            uVar10 = uStack_50;
            uVar13 = uStack_58;
          }
          ppppuVar9 = &pppuStack_68;
          if (0xf < uVar10) {
            ppppuVar9 = (undefined8 ****)pppuStack_68;
          }
          FUN_140070fd0(&pppuStack_88,ppppuVar9,uVar13);
          FUN_140070fd0(&pppuStack_88,"\'s ",3);
          if (0xf < uStack_50) {
            uVar13 = uStack_50 + 1;
            ppppuVar9 = (undefined8 ****)pppuStack_68;
            if (0xfff < uVar13) {
              uVar13 = uStack_50 + 0x28;
              ppppuVar9 = (undefined8 ****)pppuStack_68[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_68 + (-8 - (longlong)ppppuVar9))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            faction_supplier_0x154de20(ppppuVar9,uVar13);
          }
        }
        break;
      }
      iVar5 = iVar8 + -1;
      if (*(int *)(lVar16 + 0xe0) < iVar2) {
        uVar10 = (ulonglong)(iVar8 + 1);
        iVar5 = iVar15;
      }
      iVar15 = iVar5;
    } while ((int)uVar10 <= iVar15);
  }
  lVar16 = FUN_1414c1d30(0x1423ed870,sVar1,iVar2);
  if (lVar16 == 0) {
    pcVar12 = "unknown material";
    uVar14 = 0x10;
  }
  else {
    if (*(longlong *)(lVar16 + 0x530) != 0) {
      plVar11 = (longlong *)(lVar16 + 0x520);
      if (0xf < *(ulonglong *)(lVar16 + 0x538)) {
        plVar11 = (longlong *)*plVar11;
      }
      FUN_140070fd0(&pppuStack_88,plVar11,*(undefined8 *)(lVar16 + 0x530));
      FUN_140070fd0(&pppuStack_88," ",1);
    }
    pcVar12 = (char *)(lVar16 + 0x178);
    uVar14 = *(undefined8 *)(lVar16 + 0x188);
    if (0xf < *(ulonglong *)(lVar16 + 400)) {
      pcVar12 = *(char **)pcVar12;
    }
  }
  FUN_140070fd0(&pppuStack_88,pcVar12,uVar14);
  ppppuVar9 = &pppuStack_88;
  if (0xf < uStack_70) {
    ppppuVar9 = (undefined8 ****)pppuStack_88;
  }
  FUN_140070fd0(param_2,ppppuVar9,uStack_78);
  lVar16 = FUN_1414c1d30(0x1423ed870,*(undefined2 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c)
                        );
  if (lVar16 == 0) {
LAB_140568855:
    lVar16 = FUN_1414c1d30(0x1423ed870,*(undefined2 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c));
    if (lVar16 != 0) {
      if ((*(int *)(lVar16 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar16 + 0x290) + 3) & 0x20) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140568900;
    }
    lVar16 = FUN_1414c1d30(0x1423ed870,*(undefined2 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c));
    if (lVar16 != 0) {
      if ((*(int *)(lVar16 + 0x298) < 4) ||
         ((*(byte *)(*(longlong *)(lVar16 + 0x290) + 3) & 0x40) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140568900;
    }
    lVar16 = FUN_1414c1d30(0x1423ed870,*(undefined2 *)(param_1 + 0x28),
                           *(undefined4 *)(param_1 + 0x2c));
    if (lVar16 != 0) {
      if ((*(int *)(lVar16 + 0x298) < 8) ||
         ((*(byte *)(*(longlong *)(lVar16 + 0x290) + 7) & 0x40) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_140568900;
    }
    uVar14 = 6;
    pcVar12 = " Chain";
  }
  else {
    if ((*(int *)(lVar16 + 0x298) < 4) || ((*(byte *)(*(longlong *)(lVar16 + 0x290) + 3) & 1) == 0))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140568855;
LAB_140568900:
    uVar14 = 5;
    pcVar12 = " Rope";
  }
  FUN_140070fd0(param_2,pcVar12,uVar14);
  if (0xf < uStack_70) {
    uVar13 = uStack_70 + 1;
    ppppuVar9 = (undefined8 ****)pppuStack_88;
    if (0xfff < uVar13) {
      uVar13 = uStack_70 + 0x28;
      ppppuVar9 = (undefined8 ****)pppuStack_88[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar9))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    faction_supplier_0x154de20(ppppuVar9,uVar13);
  }
LAB_140568963:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_a8);
  return;
}


