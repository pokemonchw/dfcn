/* classic PE:6aea11a5:0272d000; written-work-content; RVA 0xcda860..0xcdb4b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void load_written_work_content(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int *piVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418b8040 ^ (ulonglong)auStack_a8;
  puVar13 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  piVar8 = *(int **)(param_1 + 0x48);
  puVar10 = puVar13;
  piVar15 = piVar8;
  iVar18 = 0;
  iVar16 = 0;
  while (iVar17 = iVar16, puVar10 < puVar5) {
    iVar1 = *piVar15;
    puVar10 = puVar10 + 1;
    piVar15 = piVar15 + 1;
    iVar16 = iVar18 + 1;
    if (iVar1 != 0) {
      iVar16 = iVar18;
    }
    iVar18 = iVar16;
    iVar16 = iVar17 + 1;
    if (iVar1 != 5) {
      iVar16 = iVar17;
    }
  }
  uStack_88 = param_3;
  if (iVar18 < 1) {
    FUN_140070fd0(param_2,"The work has no particular subject.  ",0x25);
  }
  else if (*(int *)(param_1 + 0x68) == 0x14) {
    if (iVar18 == 1) {
      for (; puVar13 < puVar5; puVar13 = puVar13 + 1) {
        if (*piVar8 == 0) {
          FUN_140070fd0(param_2,"It asks the question, \"What if ",0x1f);
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0xf;
          pppuStack_80 = (undefined8 ****)0x0;
          (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,param_3);
          ppppuVar9 = &pppuStack_80;
          if (0xf < uStack_68) {
            ppppuVar9 = (undefined8 ****)pppuStack_80;
          }
          FUN_140070fd0(param_2,ppppuVar9,uStack_70);
          FUN_140070fd0(param_2," had unfolded differently?\"  ",0x1d);
          FUN_140070e10(&pppuStack_80);
          break;
        }
        piVar8 = piVar8 + 1;
      }
    }
    else {
LAB_140cdaa3b:
      FUN_140070fd0(param_2,"It concerns ",0xc);
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      piVar8 = *(int **)(param_1 + 0x48);
      for (puVar13 = *(undefined8 **)(param_1 + 0x30); puVar13 < puVar5; puVar13 = puVar13 + 1) {
        if (*piVar8 == 0) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0xf;
          pppuStack_80 = (undefined8 ****)0x0;
          (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,uStack_88);
          ppppuVar9 = &pppuStack_80;
          if (0xf < uStack_68) {
            ppppuVar9 = (undefined8 ****)pppuStack_80;
          }
          FUN_140070fd0(param_2,ppppuVar9,uStack_70);
          iVar18 = iVar18 + -1;
          if (iVar18 < 2) {
            if (iVar18 == 1) {
              uVar19 = 5;
              pcVar11 = " and ";
            }
            else {
              uVar19 = 3;
              pcVar11 = ".  ";
            }
          }
          else {
            uVar19 = 2;
            pcVar11 = ", ";
          }
          FUN_140070fd0(param_2,pcVar11,uVar19);
          FUN_140070e10(&pppuStack_80);
        }
        piVar8 = piVar8 + 1;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 0x68) != 0x10) || (iVar18 != 1)) goto LAB_140cdaa3b;
    for (; puVar13 < puVar5; puVar13 = puVar13 + 1) {
      if (*piVar8 == 0) {
        FUN_140070fd0(param_2,"It concerns the lineage of ",0x1b);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0xf;
        pppuStack_80 = (undefined8 ****)0x0;
        (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,param_3);
        ppppuVar9 = &pppuStack_80;
        if (0xf < uStack_68) {
          ppppuVar9 = (undefined8 ****)pppuStack_80;
        }
        FUN_140070fd0(param_2,ppppuVar9,uStack_70);
        FUN_140070fd0(param_2,".  ",3);
        FUN_140070e10(&pppuStack_80);
        break;
      }
      piVar8 = piVar8 + 1;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  piVar8 = *(int **)(param_1 + 0x48);
  uVar19 = 0x2d;
  for (puVar13 = *(undefined8 **)(param_1 + 0x30); puVar13 < puVar5; puVar13 = puVar13 + 1) {
    if (*piVar8 == 6) {
      FUN_140070fd0(param_2,"The writing conveys a moral lesson regarding ",0x2d);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,uStack_88);
      ppppuVar9 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar9 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_70);
      FUN_140070fd0(param_2,".  ",3);
      if (0xf < uStack_68) {
        if (0xfff < uStack_68 + 1) {
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)pppuStack_80[-1]))) {
            _invalid_parameter_noinfo_noreturn(pppuStack_80[-1],uStack_68 + 0x28);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        load_supplier_0x154de20();
      }
    }
    if (*piVar8 == 9) {
      FUN_140070fd0(param_2,"The overall text emphasizes ",0x1c);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,uStack_88);
      ppppuVar9 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar9 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_70);
      FUN_140070fd0(param_2,".  ",3);
      if (0xf < uStack_68) {
        if (0xfff < uStack_68 + 1) {
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)pppuStack_80[-1]))) {
            _invalid_parameter_noinfo_noreturn(pppuStack_80[-1],uStack_68 + 0x28);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        load_supplier_0x154de20();
      }
    }
    if (*piVar8 == 7) {
      FUN_140070fd0(param_2,"For lyrics, the composer has selected ",0x26);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,uStack_88);
      ppppuVar9 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar9 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_70);
      FUN_140070fd0(param_2,".  ",3);
      if (0xf < uStack_68) {
        if (0xfff < uStack_68 + 1) {
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)pppuStack_80[-1]))) {
            _invalid_parameter_noinfo_noreturn(pppuStack_80[-1],uStack_68 + 0x28);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        load_supplier_0x154de20();
      }
    }
    if (*piVar8 == 8) {
      FUN_140070fd0(param_2,"For musical accompaniment, the choreographer has selected ",0x3a);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_80,uStack_88);
      ppppuVar9 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar9 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_70);
      FUN_140070fd0(param_2,".  ",3);
      if (0xf < uStack_68) {
        if (0xfff < uStack_68 + 1) {
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)pppuStack_80[-1]))) {
            _invalid_parameter_noinfo_noreturn(pppuStack_80[-1],uStack_68 + 0x28);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        load_supplier_0x154de20();
      }
    }
    piVar8 = piVar8 + 1;
  }
  if (*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 2 != 0) {
    FUN_140070fd0(param_2,"The writing ",0xc);
    uVar2 = **(uint **)(param_1 + 0x70);
    load_written_work_style
              (param_2,uVar2,**(undefined4 **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xa4));
    if (1 < (ulonglong)(*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 2)) {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x70) + 4);
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 4);
      if (uVar2 < 0x12) {
                    /* WARNING: Switch is manually overridden */
        switch((&UNK_140cdb4bc)[(int)uVar2]) {
        case 0:
          bVar14 = *(int *)(param_1 + 0xa4) < 0x14;
          break;
        case 1:
          goto override_jmp_140cdaee3_case_1;
        case 2:
          bVar14 = true;
        }
      }
      else {
override_jmp_140cdaee3_case_1:
        bVar14 = false;
      }
      if (uVar3 < 0x12) {
                    /* WARNING: Switch is manually overridden */
        switch((&UNK_140cdb4dc)[(int)uVar3]) {
        case 0:
          bVar7 = *(int *)(param_1 + 0xa4) < 0x14;
          break;
        case 1:
          goto override_jmp_140cdaf12_case_1;
        case 2:
          bVar7 = true;
        }
      }
      else {
override_jmp_140cdaf12_case_1:
        bVar7 = false;
      }
      pcVar11 = " yet it ";
      if (bVar7 == bVar14) {
        pcVar11 = " and it ";
      }
      FUN_140070fd0(param_2,pcVar11,8);
      load_written_work_style(param_2,uVar3,uVar4,*(undefined4 *)(param_1 + 0xa4));
    }
    FUN_140070fd0(param_2,".  ",3);
  }
  if (*(uint *)(param_1 + 0x68) < 0x1a) {
                    /* WARNING: Switch is manually overridden */
    switch((&UNK_140cdb504)[(int)*(uint *)(param_1 + 0x68)]) {
    case 0:
      goto override_jmp_140cdaf99_case_0;
    case 1:
      iVar18 = *(int *)(param_1 + 0xa4);
      if (iVar18 < 0x32) {
        if (iVar18 < 0x28) {
          if (iVar18 < 0x1e) {
            if (iVar18 < 0x14) {
              if (iVar18 < 10) {
                pcVar11 = "Overall, this is a terrible compilation of information";
                uVar19 = 0x36;
              }
              else {
                pcVar11 = "Overall, the information is not compiled very well";
                uVar19 = 0x32;
              }
            }
            else {
              pcVar11 = "Overall, this is a good source of information";
            }
          }
          else {
            pcVar11 = "Overall, this is a great source of information";
            uVar19 = 0x2e;
          }
        }
        else {
          pcVar11 = "Overall, the splendid source of information";
          uVar19 = 0x2b;
        }
      }
      else {
        pcVar11 = "Overall, the information is compiled masterfully";
        uVar19 = 0x30;
      }
      break;
    case 2:
      iVar18 = *(int *)(param_1 + 0xa4);
      if (iVar18 < 0x32) {
        if (iVar18 < 0x28) {
          if (iVar18 < 0x1e) {
            if (iVar18 < 0x14) {
              if (iVar18 < 10) {
                pcVar11 = "Overall, the poetry is very, very bad";
                uVar19 = 0x25;
              }
              else {
                pcVar11 = "Overall, the poetry is not awful, but not very good either";
                uVar19 = 0x3a;
              }
            }
            else {
              pcVar11 = "Overall, the poetry is passable";
              uVar19 = 0x1f;
            }
          }
          else {
            pcVar11 = "Overall, the poetry is great";
            uVar19 = 0x1c;
          }
        }
        else {
          pcVar11 = "Overall, the poetry is inspired";
          uVar19 = 0x1f;
        }
      }
      else {
        pcVar11 = "Overall, the poetry is masterful";
        uVar19 = 0x20;
      }
      break;
    case 3:
      iVar18 = *(int *)(param_1 + 0xa4);
      if (iVar18 < 0x32) {
        if (iVar18 < 0x28) {
          if (iVar18 < 0x1e) {
            if (iVar18 < 0x14) {
              if (iVar18 < 10) {
                pcVar11 = "Overall, the composition is atrocious";
                uVar19 = 0x25;
              }
              else {
                pcVar11 = "Overall, the composition is not awful, but not very good either";
                uVar19 = 0x3f;
              }
            }
            else {
              pcVar11 = "Overall, the composition is passable";
              uVar19 = 0x24;
            }
          }
          else {
            pcVar11 = "Overall, the composition is great";
            uVar19 = 0x21;
          }
        }
        else {
          pcVar11 = "Overall, the composition is inspired";
          uVar19 = 0x24;
        }
      }
      else {
        pcVar11 = "Overall, the composition is masterful";
        uVar19 = 0x25;
      }
      break;
    case 4:
      iVar18 = *(int *)(param_1 + 0xa4);
      if (iVar18 < 0x32) {
        if (iVar18 < 0x28) {
          if (iVar18 < 0x1e) {
            if (iVar18 < 0x14) {
              if (iVar18 < 10) {
                pcVar11 = "Overall, the choreography is just terrible";
                uVar19 = 0x2a;
              }
              else {
                pcVar11 = "Overall, the choreography is not awful, but not very good either";
                uVar19 = 0x40;
              }
            }
            else {
              pcVar11 = "Overall, the choreography is passable";
              uVar19 = 0x25;
            }
          }
          else {
            pcVar11 = "Overall, the choreography is great";
            uVar19 = 0x22;
          }
        }
        else {
          pcVar11 = "Overall, the choreography is inspired";
          uVar19 = 0x25;
        }
      }
      else {
        pcVar11 = "Overall, the choreography is masterful";
        uVar19 = 0x26;
      }
    }
  }
  else {
override_jmp_140cdaf99_case_0:
    iVar18 = *(int *)(param_1 + 0xa4);
    if (iVar18 < 0x32) {
      if (iVar18 < 0x28) {
        if (iVar18 < 0x1e) {
          if (iVar18 < 0x14) {
            if (iVar18 < 10) {
              pcVar11 = "Overall, the prose is amateurish at best";
              uVar19 = 0x28;
            }
            else {
              pcVar11 = "Overall, the prose is not awful, but not very good either";
              uVar19 = 0x39;
            }
          }
          else {
            pcVar11 = "Overall, the prose is passable";
            uVar19 = 0x1e;
          }
        }
        else {
          pcVar11 = "Overall, the prose is great";
          uVar19 = 0x1b;
        }
      }
      else {
        pcVar11 = "Overall, the prose is splendid";
        uVar19 = 0x1e;
      }
    }
    else {
      pcVar11 = "Overall, the prose is masterful";
      uVar19 = 0x1f;
    }
  }
  FUN_140070fd0(param_2,pcVar11,uVar19);
  FUN_140070fd0(param_2,".  ",3);
  if (0 < iVar17) {
    if (iVar17 == 1) {
      FUN_140070fd0(param_2,"The work has a single chapter.  ",0x20);
    }
    else {
      FUN_140070fd0(param_2,"The work has ",0xd);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0xf;
      pppuStack_80 = (undefined8 ****)0x0;
      FUN_140545040(iVar17,&pppuStack_80);
      ppppuVar9 = &pppuStack_80;
      if (0xf < uStack_68) {
        ppppuVar9 = (undefined8 ****)pppuStack_80;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_70);
      FUN_140070fd0(param_2," chapters.  ",0xc);
      if (0xf < uStack_68) {
        uVar12 = uStack_68 + 1;
        ppppuVar9 = (undefined8 ****)pppuStack_80;
        if (0xfff < uVar12) {
          uVar12 = uStack_68 + 0x28;
          ppppuVar9 = (undefined8 ****)pppuStack_80[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_80 + (-8 - (longlong)ppppuVar9))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        load_supplier_0x154de20(ppppuVar9,uVar12);
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    piVar8 = *(int **)(param_1 + 0x48);
    iVar18 = 1;
    for (puVar13 = *(undefined8 **)(param_1 + 0x30); puVar13 < puVar5; puVar13 = puVar13 + 1) {
      if (*piVar8 == 5) {
        if (iVar17 == 1) {
          FUN_140070fd0(param_2,"It",2);
        }
        else {
          FUN_140070fd0(param_2,"The ",4);
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0xf;
          pppuStack_80 = (undefined8 ****)0x0;
          FUN_140545850(iVar18,&pppuStack_80,0);
          load_supplier_0x543d60(&pppuStack_80);
          ppppuVar9 = &pppuStack_80;
          if (0xf < uStack_68) {
            ppppuVar9 = (undefined8 ****)pppuStack_80;
          }
          FUN_140070fd0(param_2,ppppuVar9,uStack_70);
          FUN_140070fd0(param_2," chapter",8);
          FUN_140070e10(&pppuStack_80);
        }
        FUN_140070fd0(param_2," covers ",8);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0xf;
        pppuStack_60 = (undefined8 ****)0x0;
        (**(code **)(*(longlong *)*puVar13 + 0x90))((longlong *)*puVar13,&pppuStack_60,uStack_88);
        ppppuVar9 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar9 = (undefined8 ****)pppuStack_60;
        }
        FUN_140070fd0(param_2,ppppuVar9,uStack_50);
        iVar18 = iVar18 + 1;
        FUN_140070fd0(param_2,".  ",3);
        FUN_140070e10(&pppuStack_60);
      }
      piVar8 = piVar8 + 1;
    }
  }
  FUN_14154de00(uStack_40 ^ (ulonglong)auStack_a8);
  return;
}

