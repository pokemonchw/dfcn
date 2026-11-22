/* Ghidra 12.1.4 output from the installed steam PE.
   The menu guard and its complete active arm are retained below.
   The inactive path continues into the ordinary character tabs. */
/* reference PE:6aea05a1:02734000; expulsion-menu; RVA 0x15eda6..0x16066e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void faction_expulsion_menu(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  int *piVar23;
  short *psVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined2 *puVar27;
  short *psVar28;
  int *piVar29;
  longlong *plVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  longlong lVar35;
  bool bVar36;
  undefined1 *in_stack_00000020;
  int iStack0000000000000084;
  int in_stack_00000088;
  int iStack000000000000009c;
  longlong in_stack_000000a8;
  int in_stack_000000b0;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  int iStack00000000000000d8;
  int iStack00000000000000e8;
  int iStack00000000000000f0;
  int in_stack_00000108;
  int iStack000000000000010c;
  int iStack000000000000012c;
  int iStack000000000000013c;
  int iStack0000000000000140;
  int iStack000000000000015c;
  int iStack0000000000000168;
  int iStack000000000000016c;
  int iStack0000000000000174;
  int iStack0000000000000178;
  int iStack00000000000001bc;
  int iStack00000000000001c4;
  int iStack00000000000001c8;
  int iStack00000000000001cc;
  int iStack00000000000001e4;
  int iStack00000000000001f0;
  undefined8 in_stack_00000210;
  int iStack0000000000000218;
  int in_stack_0000024c;
  int in_stack_00000440;
  int in_stack_00000504;
  int in_stack_0000050c;
  int in_stack_0000058c;
  int in_stack_00000598;
  int in_stack_000005e4;
  int in_stack_0000061c;
  int in_stack_0000062c;
  int in_stack_00000650;
  undefined1 in_stack_000006c0;
  undefined1 in_stack_000006c3;
  undefined1 in_stack_000006c8;
  undefined1 in_stack_000006cb;
  undefined1 in_stack_000006ce;
  undefined1 in_stack_000006d1;
  undefined1 in_stack_000006d4;
  undefined1 in_stack_000006d7;
  undefined1 in_stack_000006da;
  undefined1 in_stack_000006dd;
  undefined1 in_stack_000006e0;
  undefined1 in_stack_000006e3;
  undefined1 in_stack_000006e6;
  undefined1 in_stack_000006e9;
  undefined1 in_stack_000006ec;
  undefined1 in_stack_000006ef;
  undefined1 in_stack_000006f2;
  undefined1 in_stack_000006f5;
  undefined1 in_stack_000006f8;
  undefined1 in_stack_000006fb;
  undefined1 in_stack_000006fe;
  undefined1 in_stack_00000701;
  undefined1 in_stack_00000704;
  undefined1 in_stack_00000707;
  undefined1 in_stack_0000070e;
  undefined1 in_stack_00000711;
  undefined1 in_stack_00000714;
  undefined1 in_stack_00000717;
  undefined1 in_stack_0000071a;
  undefined1 in_stack_0000071d;
  undefined1 in_stack_00000720;
  undefined1 in_stack_00000723;
  undefined1 in_stack_00000726;
  undefined1 in_stack_00000729;
  undefined1 in_stack_0000072c;
  undefined1 in_stack_0000072f;
  undefined1 in_stack_00000732;
  undefined1 in_stack_00000737;
  undefined1 in_stack_0000073a;
  undefined1 in_stack_0000073d;
  int in_stack_00000828;
  int in_stack_0000083c;
  undefined1 in_stack_000008cc;
  int in_stack_00000938;
  int in_stack_00000d94;
  longlong in_stack_00000f68;
  longlong lVar37;
  longlong lVar38;
  ulonglong in_stack_0000b240;
  longlong in_stack_0000b260;
  uint in_stack_0000b268;
  
  if (*(char *)(in_stack_0000b260 + 0x1928) != '\0') {
    iVar6 = in_stack_00000088 + 2;
    iVar7 = in_stack_00000d94 + 2;
    if (*(int *)(in_stack_0000b260 + 0x192c) == -1) {
      lVar15 = faction_supplier_0x709a0(in_stack_0000b260 + 0x1938);
      if (lVar15 == 0) {
        iVar8 = in_stack_00000088 + 2;
        iVar9 = in_stack_000000b0 + -9;
        iVar10 = in_stack_000000b0 + -2;
        iVar31 = (in_stack_00000108 - iVar7) + -2;
        iVar12 = iVar31 / 3;
        iVar31 = faction_supplier_0x709a0
                           (in_stack_0000b260 + 0x1950,(longlong)iVar31 % 3 & 0xffffffff);
        iStack00000000000000f0 = iVar8;
        if (iVar12 < iVar31) {
          iVar10 = in_stack_000000b0 + -4;
        }
        for (; iStack00000000000000f0 <= in_stack_00000088 + 0xc;
            iStack00000000000000f0 = iStack00000000000000f0 + 1) {
          for (iStack00000000000000d8 = 0; iStack00000000000000d8 < 3;
              iStack00000000000000d8 = iStack00000000000000d8 + 1) {
            faction_supplier_0xbc750(0x14266c870,iStack00000000000000d8 + in_stack_00000108 + -3);
            if (iStack00000000000000f0 == iVar8) {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x142677074));
            }
            else if (iStack00000000000000f0 == in_stack_00000088 + 0xc) {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x14267708c));
            }
            else {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x142677080));
            }
          }
        }
        faction_supplier_0xbc760(0x14266c870,7,0,1);
        iStack00000000000000f0 = iVar9;
        if (*(int *)(in_stack_0000b260 + 0x1930) == -1) {
          faction_supplier_0xbc750(0x14266c870,in_stack_00000108 + -2,in_stack_00000088 + 5);
          FUN_140069780(&stack0x00004d20,"Expel");
          FUN_140af3400(0x14266c870,&stack0x00004d20,0,0);
          faction_supplier_0x69460(&stack0x00004d20);
        }
        else {
          faction_supplier_0xbc750(0x14266c870,in_stack_00000108 + -2,in_stack_00000088 + 3);
          FUN_140069780(&stack0x00004d40,"Send away");
          FUN_140af3400(0x14266c870,&stack0x00004d40,0,0);
          faction_supplier_0x69460(&stack0x00004d40);
        }
        for (; iStack00000000000000f0 <= in_stack_000000b0 + -2;
            iStack00000000000000f0 = iStack00000000000000f0 + 1) {
          for (iStack00000000000000d8 = 0; iStack00000000000000d8 < 3;
              iStack00000000000000d8 = iStack00000000000000d8 + 1) {
            faction_supplier_0xbc750(0x14266c870,iStack00000000000000d8 + in_stack_00000108 + -3);
            if (iStack00000000000000f0 == iVar9) {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x142677050));
            }
            else if (iStack00000000000000f0 == in_stack_000000b0 + -2) {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x142677068));
            }
            else {
              faction_supplier_0xaf4570
                        (0x14266c870,
                         *(undefined4 *)((longlong)iStack00000000000000d8 * 4 + 0x14267705c));
            }
          }
        }
        faction_supplier_0xbc760(0x14266c870,7,0,1);
        faction_supplier_0xbc750(0x14266c870,in_stack_00000108 + -2,in_stack_000000b0 + -8);
        FUN_140069780(&stack0x00004d60,"Cancel");
        FUN_140af3400(0x14266c870,&stack0x00004d60,0,0);
        faction_supplier_0x69460(&stack0x00004d60);
        iVar8 = *(int *)(in_stack_0000b260 + 0x1968);
        if (iVar31 - iVar12 < iVar8) {
          iVar8 = iVar31 - iVar12;
        }
        iVar9 = iVar8;
        if (iVar8 < 0) {
          iVar8 = 0;
          iVar9 = iVar8;
        }
        for (; (iVar8 < iVar9 + iVar12 && (iVar8 < iVar31)); iVar8 = iVar8 + 1) {
          puVar16 = (undefined4 *)
                    faction_supplier_0x70990(in_stack_0000b260 + 0x1950,(longlong)iVar8);
          puVar19 = (undefined8 *)FUN_1400751a0(0x142407530,*puVar16);
          faction_supplier_0xbc760(0x14266c870,7,0,1);
          for (iVar11 = iVar6; iVar32 = iVar7, iVar11 <= iVar10; iVar11 = iVar11 + 1) {
            for (; iVar32 < iVar7 + 3; iVar32 = iVar32 + 1) {
              faction_supplier_0xbc750(0x14266c870,iVar32,iVar11);
              if (iVar11 == iVar6) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else if (iVar11 == in_stack_00000088 + 3) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else if (iVar11 == in_stack_00000088 + 4) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else if (iVar11 == in_stack_00000088 + 5) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else if (iVar11 == in_stack_00000088 + 6) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else if (iVar11 == iVar10) {
                faction_supplier_0xaf4570(0x14266c870);
              }
              else {
                faction_supplier_0xaf4570(0x14266c870);
              }
              cVar2 = faction_supplier_0x735c0(0x1423efbf0,0);
              if (cVar2 != '\0') {
                FUN_1400bc7c0(0x14266c870,0,1);
              }
            }
          }
          cVar2 = faction_supplier_0x735c0(0x1423efbf0,0);
          if (cVar2 == '\0') {
            faction_supplier_0xbc750(0x14266c870,iVar7 + 1,in_stack_00000088 + 4);
            FUN_14134c4d0(puVar19,0,1,0);
            uVar3 = (**(code **)*puVar19)(puVar19,0);
            FUN_1400bc7c0(0x14266c870,uVar3,1);
          }
          else {
            faction_supplier_0xbc750(0x14266c870,iVar7,iVar6);
            faction_supplier_0x70cc0(&stack0x00004d80);
            iVar11 = FUN_1400f3d80(0x14250eec8,&stack0x00004d80,
                                   *(undefined2 *)((longlong)puVar19 + 0xa4),
                                   *(undefined2 *)((longlong)puVar19 + 300),0xffff);
            if (iVar11 != 0) {
              FUN_140af4810(0x14266c870,iVar11,2,2,5);
            }
            faction_supplier_0x69460(&stack0x00004d80);
          }
          FUN_14134c4d0(puVar19,0,1,0);
          faction_supplier_0x70cc0(&stack0x00003ce0);
          FUN_141349540(puVar19,&stack0x00003ce0,0);
          faction_supplier_0xbc750(0x14266c870,iVar7 + 1);
          uVar17 = faction_supplier_0x70960(&stack0x00003ce0);
          if ((ulonglong)(longlong)((iVar10 - iVar6) + -0xe) <= uVar17) {
            iVar32 = iVar10 - iVar6;
            iVar11 = iVar32 + -0xf;
            if (-1 < iVar11) {
              faction_supplier_0xe2860(&stack0x00003ce0,(longlong)iVar11);
            }
            if (3 < iVar11) {
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003ce0,(longlong)(iVar32 + -0x12));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003ce0,(longlong)(iVar32 + -0x11));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003ce0,(longlong)(iVar32 + -0x10));
              *puVar18 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,&stack0x00003ce0,0,0);
          iVar7 = iVar7 + 3;
          faction_supplier_0x69460(&stack0x00003ce0);
        }
        if (iVar12 < iVar31) {
          faction_supplier_0xbc990(&stack0x000035a8);
          faction_supplier_0xbc9b0
                    (&stack0x000035a8,*(undefined4 *)(in_stack_0000b260 + 0x1968),0,iVar31 + -1,
                     iVar12);
          FUN_1414284b0(&stack0x000035a8,in_stack_000000c8,in_stack_000000c0._4_4_,iVar10 + 1,
                        *(undefined1 *)(in_stack_0000b260 + 0x196c));
        }
      }
      else {
        iVar8 = in_stack_000000b0 + -2;
        iVar9 = (in_stack_00000108 - iVar7) / 3;
        iVar10 = faction_supplier_0x709a0
                           (in_stack_0000b260 + 0x1938,
                            (longlong)(in_stack_00000108 - iVar7) % 3 & 0xffffffff);
        if (iVar9 < iVar10) {
          iVar8 = in_stack_000000b0 + -4;
        }
        iVar31 = *(int *)(in_stack_0000b260 + 0x1968);
        if (iVar10 - iVar9 < iVar31) {
          iVar31 = iVar10 - iVar9;
        }
        iVar12 = iVar31;
        if (iVar31 < 0) {
          iVar31 = 0;
          iVar12 = iVar31;
        }
        for (; (uVar14 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20), iVar31 < iVar12 + iVar9
               && (iVar31 < iVar10)); iVar31 = iVar31 + 1) {
          puVar16 = (undefined4 *)
                    faction_supplier_0x70990(in_stack_0000b260 + 0x1938,(longlong)iVar31);
          lVar15 = FUN_14007f150(_DAT_14250dfd8,*puVar16);
          faction_supplier_0xbc760(0x14266c870,7,0,1);
          for (iVar11 = iVar6; iVar32 = iVar7, iVar11 <= iVar8; iVar11 = iVar11 + 1) {
            for (; iVar32 < iVar7 + 3; iVar32 = iVar32 + 1) {
              faction_supplier_0xbc750(0x14266c870,iVar32);
              if (iVar11 == iVar6) {
                faction_supplier_0xaf4570
                          (0x14266c870,*(undefined4 *)((longlong)(iVar32 - iVar7) * 4 + 0x14266e218)
                          );
              }
              else if (iVar11 == iVar8) {
                faction_supplier_0xaf4570
                          (0x14266c870,*(undefined4 *)((longlong)(iVar32 - iVar7) * 4 + 0x14266e230)
                          );
              }
              else {
                faction_supplier_0xaf4570
                          (0x14266c870,*(undefined4 *)((longlong)(iVar32 - iVar7) * 4 + 0x14266e224)
                          );
              }
              cVar2 = faction_supplier_0x735c0(0x1423efbf0,0);
              if (cVar2 != '\0') {
                FUN_1400bc7c0(0x14266c870,0);
              }
            }
          }
          faction_supplier_0xbc760(0x14266c870,7,0,1);
          faction_supplier_0x70cc0(&stack0x00003a60);
          if (lVar15 == 0) {
            faction_supplier_0x70bb0(&stack0x00003a60,"Expel");
          }
          else {
            faction_supplier_0x70bb0(&stack0x00003a60,"Send to ");
            faction_supplier_0x70cc0(&stack0x00004640);
            FUN_140aae180(lVar15,&stack0x00004640,1,0);
            faction_supplier_0xbb340(&stack0x00003a60,&stack0x00004640);
            faction_supplier_0x69460(&stack0x00004640);
          }
          faction_supplier_0xbc750(0x14266c870,iVar7 + 1);
          uVar17 = faction_supplier_0x70960(&stack0x00003a60);
          if ((ulonglong)(longlong)((iVar8 - iVar6) + -7) <= uVar17) {
            iVar32 = iVar8 - iVar6;
            iVar11 = iVar32 + -8;
            if (-1 < iVar11) {
              faction_supplier_0xe2860(&stack0x00003a60,(longlong)iVar11);
            }
            if (3 < iVar11) {
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003a60,(longlong)(iVar32 + -0xb));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003a60,(longlong)(iVar32 + -10));
              *puVar18 = 0x2e;
              puVar18 = (undefined1 *)
                        faction_supplier_0xfcbe0(&stack0x00003a60,(longlong)(iVar32 + -9));
              *puVar18 = 0x2e;
            }
          }
          FUN_140af3400(0x14266c870,&stack0x00003a60,0,0);
          iVar7 = iVar7 + 3;
          faction_supplier_0x69460(&stack0x00003a60);
        }
        if (iVar9 < iVar10) {
          faction_supplier_0xbc990(&stack0x00003588);
          faction_supplier_0xbc9b0
                    (&stack0x00003588,*(undefined4 *)(in_stack_0000b260 + 0x1968),0,iVar10 + -1,
                     CONCAT44(uVar14,iVar9));
          FUN_1414284b0(&stack0x00003588,in_stack_000000c8,in_stack_000000c0._4_4_,iVar8 + 1,
                        *(undefined1 *)(in_stack_0000b260 + 0x196c));
        }
      }
    }
    else {
      faction_supplier_0xbc760(0x14266c870,6,0,1);
      faction_supplier_0xbc750(0x14266c870,iVar7,iVar6);
      FUN_140069780(&stack0x00004ba0,"Cannot expel or send away:");
      FUN_140af3400(0x14266c870,&stack0x00004ba0,0,0);
      faction_supplier_0x69460(&stack0x00004ba0);
      if (_DAT_1418c3a10 < 0xb) {
                    /* WARNING: Switch is manually overridden */
        switch(_DAT_1418c3a10) {
        case 0:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004be0,"Nobility");
          FUN_140af3400(0x14266c870,&stack0x00004be0,0,0);
          faction_supplier_0x69460(&stack0x00004be0);
          break;
        case 1:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004c00,"Holds elected office");
          FUN_140af3400(0x14266c870,&stack0x00004c00,0,0);
          faction_supplier_0x69460(&stack0x00004c00);
          break;
        case 2:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004bc0,"Does the expelling");
          FUN_140af3400(0x14266c870,&stack0x00004bc0,0,0);
          faction_supplier_0x69460(&stack0x00004bc0);
          break;
        case 3:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004c40,"Spouse is not present");
          FUN_140af3400(0x14266c870,&stack0x00004c40,0,0);
          faction_supplier_0x69460(&stack0x00004c40);
          break;
        case 4:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004c60,"Spouse is nobility");
          FUN_140af3400(0x14266c870,&stack0x00004c60,0,0);
          faction_supplier_0x69460(&stack0x00004c60);
          break;
        case 5:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004c80,"Spouse is elected");
          FUN_140af3400(0x14266c870,&stack0x00004c80,0,0);
          faction_supplier_0x69460(&stack0x00004c80);
          break;
        case 6:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004c20,"Spouse does the expelling");
          FUN_140af3400(0x14266c870,&stack0x00004c20,0,0);
          faction_supplier_0x69460(&stack0x00004c20);
          break;
        case 7:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004cc0,"Child is not present");
          FUN_140af3400(0x14266c870,&stack0x00004cc0,0,0);
          faction_supplier_0x69460(&stack0x00004cc0);
          break;
        case 8:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004ce0,"Child is nobility");
          FUN_140af3400(0x14266c870,&stack0x00004ce0,0,0);
          faction_supplier_0x69460(&stack0x00004ce0);
          break;
        case 9:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004d00,"Child is elected");
          FUN_140af3400(0x14266c870,&stack0x00004d00,0,0);
          faction_supplier_0x69460(&stack0x00004d00);
          break;
        case 10:
          faction_supplier_0xbc750(0x14266c870,in_stack_00000d94 + 4,iVar6);
          FUN_140069780(&stack0x00004ca0,"Child does the expelling");
          FUN_140af3400(0x14266c870,&stack0x00004ca0,0,0);
          faction_supplier_0x69460(&stack0x00004ca0);
        }
      }
    }
    faction_supplier_0x19f7f3();
    return;
  }
}
