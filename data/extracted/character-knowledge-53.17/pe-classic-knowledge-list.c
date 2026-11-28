/* classic PE:6aea11a5:0272d000; knowledge-list; RVA 0x17045f..0x171781 */

void load_knowledge_list(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  int in_stack_00000160;
  int in_stack_00000168;
  int in_stack_000002a4;
  int in_stack_00000388;
  int in_stack_00000444;
  int in_stack_00000510;
  int iVar10;
  int in_stack_00000b0c;
  int in_stack_00000b88;
  ulonglong in_stack_0000b240;
  longlong in_stack_0000b260;
  
  iVar2 = in_stack_00000168;
code_r0x00014017045f:
  in_stack_00000168 = iVar2;
  load_supplier_0xbc6f0(0x142666770,7,0,1);
  load_supplier_0x70c50(&stack0x00003920);
  puVar3 = (uint *)load_supplier_0x70920(in_stack_0000b260 + 0x1b78,(longlong)in_stack_000002a4);
  if (*puVar3 < 0x12) {
                    /* WARNING: Switch is manually overridden */
    switch(*puVar3) {
    default:
      load_supplier_0x73990(&stack0x00000ee8);
      puVar3 = (uint *)load_supplier_0x70920(in_stack_0000b260 + 0x1b78,(longlong)in_stack_000002a4)
      ;
      if (*puVar3 < 0xe) {
                    /* WARNING: Switch is manually overridden */
        switch(*puVar3) {
        case 0:
          break;
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 6:
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
          break;
        case 10:
          break;
        case 0xb:
          break;
        case 0xc:
          break;
        case 0xd:
        }
      }
      load_supplier_0x70920(in_stack_0000b260 + 0x1ba8,(longlong)in_stack_000002a4);
      load_supplier_0xf0bbe0(&stack0x00000ee8,&stack0x00003920);
      FUN_140544330(&stack0x00003920);
      load_supplier_0x73930(&stack0x00000ee8);
      break;
    case 0xe:
      puVar4 = (undefined4 *)
               load_supplier_0x70920(in_stack_0000b260 + 0x1b90,(longlong)in_stack_000002a4);
      lVar5 = FUN_140073b30(0x142504248,*puVar4);
      if (lVar5 != 0) {
        load_generated_form_name(lVar5 + 8,&stack0x00003920,1,0);
        FUN_140544330(&stack0x00003920);
      }
      break;
    case 0xf:
      puVar4 = (undefined4 *)
               load_supplier_0x70920(in_stack_0000b260 + 0x1b90,(longlong)in_stack_000002a4);
      lVar5 = FUN_140073b30(0x142504278,*puVar4);
      if (lVar5 != 0) {
        load_generated_form_name(lVar5 + 8,&stack0x00003920,1,0);
        FUN_140544330(&stack0x00003920);
      }
      break;
    case 0x10:
      puVar4 = (undefined4 *)
               load_supplier_0x70920(in_stack_0000b260 + 0x1b90,(longlong)in_stack_000002a4);
      lVar5 = FUN_140073b30(0x1425042a8,*puVar4);
      if (lVar5 != 0) {
        load_generated_form_name(lVar5 + 8,&stack0x00003920,1,0);
        FUN_140544330(&stack0x00003920);
      }
      break;
    case 0x11:
      puVar4 = (undefined4 *)
               load_supplier_0x70920(in_stack_0000b260 + 0x1b90,(longlong)in_stack_000002a4);
      lVar5 = FUN_140073b30(0x142504038,*puVar4);
      if (lVar5 != 0) {
        FUN_140070b60(&stack0x00003920,lVar5 + 8);
        cVar1 = load_supplier_0x70ae0(&stack0x00003920);
        if (cVar1 != '\0') {
          load_supplier_0x70b40(&stack0x00003920,"Untitled");
        }
        FUN_140544330(&stack0x00003920);
      }
    }
  }
  load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 1);
  uVar6 = load_supplier_0x708f0(&stack0x00003920);
  if ((ulonglong)(longlong)((in_stack_00000b88 - in_stack_00000160) + -2) <= uVar6) {
    iVar9 = in_stack_00000b88 - in_stack_00000160;
    iVar2 = iVar9 + -3;
    if (-1 < iVar2) {
      load_supplier_0xe27f0(&stack0x00003920,(longlong)iVar2);
    }
    if (3 < iVar2) {
      puVar7 = (undefined1 *)load_supplier_0xfcb70(&stack0x00003920,(longlong)(iVar9 + -6));
      *puVar7 = 0x2e;
      puVar7 = (undefined1 *)load_supplier_0xfcb70(&stack0x00003920,(longlong)(iVar9 + -5));
      *puVar7 = 0x2e;
      puVar7 = (undefined1 *)load_supplier_0xfcb70(&stack0x00003920,(longlong)(iVar9 + -4));
      *puVar7 = 0x2e;
    }
  }
  FUN_140af0220(0x142666770,&stack0x00003920,0,0);
  puVar3 = (uint *)load_supplier_0x70920(in_stack_0000b260 + 0x1b78,(longlong)in_stack_000002a4);
  if (*puVar3 < 0x12) {
                    /* WARNING: Switch is manually overridden */
    switch(*puVar3) {
    case 0:
    case 1:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x000076c0,"Philosophy");
      FUN_140af0220(0x142666770,&stack0x000076c0,0,0);
      load_supplier_0x693f0(&stack0x000076c0);
      load_supplier_0x171781();
      return;
    case 2:
    case 3:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x000076e0,"Mathematics");
      FUN_140af0220(0x142666770,&stack0x000076e0,0,0);
      load_supplier_0x693f0(&stack0x000076e0);
      load_supplier_0x171781();
      return;
    case 4:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007700,"History");
      FUN_140af0220(0x142666770,&stack0x00007700,0,0);
      load_supplier_0x693f0(&stack0x00007700);
      load_supplier_0x171781();
      return;
    case 5:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007720,"Astronomy");
      FUN_140af0220(0x142666770,&stack0x00007720,0,0);
      load_supplier_0x693f0(&stack0x00007720);
      load_supplier_0x171781();
      return;
    case 6:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007740,"Natural history");
      FUN_140af0220(0x142666770,&stack0x00007740,0,0);
      load_supplier_0x693f0(&stack0x00007740);
      load_supplier_0x171781();
      return;
    case 7:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007760,"Chemistry");
      FUN_140af0220(0x142666770,&stack0x00007760,0,0);
      load_supplier_0x693f0(&stack0x00007760);
      load_supplier_0x171781();
      return;
    case 8:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007780,"Geography");
      FUN_140af0220(0x142666770,&stack0x00007780,0,0);
      load_supplier_0x693f0(&stack0x00007780);
      load_supplier_0x171781();
      return;
    default:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x000077a0,"Medicine");
      FUN_140af0220(0x142666770,&stack0x000077a0,0,0);
      load_supplier_0x693f0(&stack0x000077a0);
      load_supplier_0x171781();
      return;
    case 0xc:
    case 0xd:
      load_supplier_0xbc6f0(0x142666770,5,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x000077c0,"Engineering");
      FUN_140af0220(0x142666770,&stack0x000077c0,0,0);
      load_supplier_0x693f0(&stack0x000077c0);
      load_supplier_0x171781();
      return;
    case 0xe:
      load_supplier_0xbc6f0(0x142666770,3,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x000077e0,"Poetic form");
      FUN_140af0220(0x142666770,&stack0x000077e0,0,0);
      load_supplier_0x693f0(&stack0x000077e0);
      load_supplier_0x171781();
      return;
    case 0xf:
      load_supplier_0xbc6f0(0x142666770,3,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007800,"Musical form");
      FUN_140af0220(0x142666770,&stack0x00007800,0,0);
      load_supplier_0x693f0(&stack0x00007800);
      load_supplier_0x171781();
      return;
    case 0x10:
      load_supplier_0xbc6f0(0x142666770,3,0,1);
      load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2,in_stack_00000160);
      FUN_140069710(&stack0x00007820,"Dance form");
      FUN_140af0220(0x142666770,&stack0x00007820,0,0);
      load_supplier_0x693f0(&stack0x00007820);
      load_supplier_0x171781();
      return;
    case 0x11:
      goto override_jmp_140170a3b_case_12;
    }
  }
  goto code_r0x000140171781;
override_jmp_140170a3b_case_12:
  puVar4 = (undefined4 *)
           load_supplier_0x70920(in_stack_0000b260 + 0x1b90,(longlong)in_stack_000002a4);
  lVar5 = FUN_140073b30(0x142504038,*puVar4);
  if (lVar5 == 0) {
    load_supplier_0x171781();
    return;
  }
  load_supplier_0xbc6f0(0x142666770,6,0,1);
  load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + 2);
  if (*(uint *)(lVar5 + 0x68) < 0x1a) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(lVar5 + 0x68)) {
    case 0:
      FUN_140069710(&stack0x00007840,"Manual");
      FUN_140af0220(0x142666770,&stack0x00007840,0,0);
      load_supplier_0x693f0(&stack0x00007840);
      load_supplier_0x171781();
      return;
    case 1:
      FUN_140069710(&stack0x00007860,"Guide");
      FUN_140af0220(0x142666770,&stack0x00007860,0,0);
      load_supplier_0x693f0(&stack0x00007860);
      load_supplier_0x171781();
      return;
    case 2:
      FUN_140069710(&stack0x00007880,"Chronicle");
      FUN_140af0220(0x142666770,&stack0x00007880,0,0);
      load_supplier_0x693f0(&stack0x00007880);
      load_supplier_0x171781();
      return;
    case 3:
      FUN_140069710(&stack0x000078a0,"Short story");
      FUN_140af0220(0x142666770,&stack0x000078a0,0,0);
      load_supplier_0x693f0(&stack0x000078a0);
      load_supplier_0x171781();
      return;
    case 4:
      FUN_140069710(&stack0x000078c0,"Novel");
      FUN_140af0220(0x142666770,&stack0x000078c0,0,0);
      load_supplier_0x693f0(&stack0x000078c0);
      load_supplier_0x171781();
      return;
    case 5:
      FUN_140069710(&stack0x000078e0,"Biography");
      FUN_140af0220(0x142666770,&stack0x000078e0,0,0);
      load_supplier_0x693f0(&stack0x000078e0);
      load_supplier_0x171781();
      return;
    case 6:
      FUN_140069710(&stack0x00007900,"Autobiography");
      FUN_140af0220(0x142666770,&stack0x00007900,0,0);
      load_supplier_0x693f0(&stack0x00007900);
      load_supplier_0x171781();
      return;
    case 7:
      FUN_140069710(&stack0x00007920,"Poem");
      FUN_140af0220(0x142666770,&stack0x00007920,0,0);
      load_supplier_0x693f0(&stack0x00007920);
      load_supplier_0x171781();
      return;
    case 8:
      FUN_140069710(&stack0x00007940,"Play");
      FUN_140af0220(0x142666770,&stack0x00007940,0,0);
      load_supplier_0x693f0(&stack0x00007940);
      load_supplier_0x171781();
      return;
    case 9:
      FUN_140069710(&stack0x00007960,"Letter");
      FUN_140af0220(0x142666770,&stack0x00007960,0,0);
      load_supplier_0x693f0(&stack0x00007960);
      load_supplier_0x171781();
      return;
    case 10:
      FUN_140069710(&stack0x00007980,"Essay");
      FUN_140af0220(0x142666770,&stack0x00007980,0,0);
      load_supplier_0x693f0(&stack0x00007980);
      load_supplier_0x171781();
      return;
    case 0xb:
      FUN_140069710(&stack0x000079a0,"Dialog");
      FUN_140af0220(0x142666770,&stack0x000079a0,0,0);
      load_supplier_0x693f0(&stack0x000079a0);
      load_supplier_0x171781();
      return;
    case 0xc:
      FUN_140069710(&stack0x000079c0,"Musical composition");
      FUN_140af0220(0x142666770,&stack0x000079c0,0,0);
      load_supplier_0x693f0(&stack0x000079c0);
      load_supplier_0x171781();
      return;
    case 0xd:
      FUN_140069710(&stack0x000079e0,"Choreography");
      FUN_140af0220(0x142666770,&stack0x000079e0,0,0);
      load_supplier_0x693f0(&stack0x000079e0);
      load_supplier_0x171781();
      return;
    case 0xe:
      FUN_140069710(&stack0x00007a00,"Comparative biography");
      FUN_140af0220(0x142666770,&stack0x00007a00,0,0);
      load_supplier_0x693f0(&stack0x00007a00);
      load_supplier_0x171781();
      return;
    case 0xf:
      FUN_140069710(&stack0x0000b220,"Biographical dictionary");
      FUN_140af0220(0x142666770,&stack0x0000b220,0,0);
      load_supplier_0x693f0(&stack0x0000b220);
      load_supplier_0x171781();
      return;
    case 0x10:
      FUN_140069710(&stack0x00007a40,"Genealogy");
      FUN_140af0220(0x142666770,&stack0x00007a40,0,0);
      load_supplier_0x693f0(&stack0x00007a40);
      load_supplier_0x171781();
      return;
    case 0x11:
      FUN_140069710(&stack0x00007a60,"Encyclopedia");
      FUN_140af0220(0x142666770,&stack0x00007a60,0,0);
      load_supplier_0x693f0(&stack0x00007a60);
      load_supplier_0x171781();
      return;
    case 0x12:
      FUN_140069710(&stack0x00007a80,"Cultural history");
      FUN_140af0220(0x142666770,&stack0x00007a80,0,0);
      load_supplier_0x693f0(&stack0x00007a80);
      load_supplier_0x171781();
      return;
    case 0x13:
      FUN_140069710(&stack0x00007aa0,"Cultural comparison");
      FUN_140af0220(0x142666770,&stack0x00007aa0,0,0);
      load_supplier_0x693f0(&stack0x00007aa0);
      load_supplier_0x171781();
      return;
    case 0x14:
      FUN_140069710(&stack0x00007ac0,"Alternate history");
      FUN_140af0220(0x142666770,&stack0x00007ac0,0,0);
      load_supplier_0x693f0(&stack0x00007ac0);
      load_supplier_0x171781();
      return;
    case 0x15:
      FUN_140069710(&stack0x00007ae0,"Treatise on technological evolution");
      FUN_140af0220(0x142666770,&stack0x00007ae0,0,0);
      load_supplier_0x693f0(&stack0x00007ae0);
      load_supplier_0x171781();
      return;
    case 0x16:
      FUN_140069710(&stack0x00007b00,"Dictionary");
      FUN_140af0220(0x142666770,&stack0x00007b00,0,0);
      load_supplier_0x693f0(&stack0x00007b00);
      load_supplier_0x171781();
      return;
    case 0x17:
      FUN_140069710(&stack0x00007b20,"Star chart");
      FUN_140af0220(0x142666770,&stack0x00007b20,0,0);
      load_supplier_0x693f0(&stack0x00007b20);
      load_supplier_0x171781();
      return;
    case 0x18:
      FUN_140069710(&stack0x00007b40,"Star catalogue");
      FUN_140af0220(0x142666770,&stack0x00007b40,0,0);
      load_supplier_0x693f0(&stack0x00007b40);
      load_supplier_0x171781();
      return;
    case 0x19:
      FUN_140069710(&stack0x00007b60,"Atlas");
      FUN_140af0220(0x142666770,&stack0x00007b60,0,0);
      load_supplier_0x693f0(&stack0x00007b60);
    }
  }
code_r0x000140171781:
  piVar8 = (int *)load_supplier_0x70920(in_stack_0000b260 + 0x1b78,(longlong)in_stack_000002a4);
  iVar2 = *piVar8;
  if ((((iVar2 == 0xe) || (iVar2 == 0xf)) || (iVar2 == 0x10)) || (iVar2 == 0x11)) {
    if (((in_stack_00000b88 <= in_stack_000000c8) && (in_stack_000000c8 < in_stack_00000b88 + 3)) &&
       ((in_stack_00000168 <= in_stack_000000c0._4_4_ &&
        (in_stack_000000c0._4_4_ < in_stack_00000168 + 3)))) {
      uRam00000001418c53b8 = 0x129;
      uRam00000001418c53dc = 0;
      uRam00000001418c53e0 = 0;
      uRam00000001418c53d8 = 1;
    }
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
        load_supplier_0xbc6e0(0x142666770,in_stack_00000168 + iVar9);
        func_0x000140af19c0(0x142666770,
                            *(undefined4 *)
                             ((longlong)iVar2 * 0xc + 0x142671348 + (longlong)iVar9 * 4));
      }
    }
  }
  iVar2 = in_stack_00000168 + 3;
  load_supplier_0x693f0(&stack0x00003920);
  in_stack_000002a4 = in_stack_000002a4 + 1;
  if ((in_stack_00000b0c + in_stack_00000510 <= in_stack_000002a4) ||
     (in_stack_00000444 <= in_stack_000002a4)) {
    if (in_stack_00000510 < in_stack_00000444) {
      func_0x0001400bc920(&stack0x00003628);
      func_0x0001400bc940(&stack0x00003628,*(undefined4 *)(in_stack_0000b260 + 0x1b18),0,
                          in_stack_00000444 + -1,in_stack_00000510);
      FUN_141423200(&stack0x00003628,in_stack_000000c8,in_stack_000000c0._4_4_,in_stack_00000388 + 1
                    ,*(undefined1 *)(in_stack_0000b260 + 0x1b1c));
    }
    FUN_14154de00(in_stack_0000b240 ^ (ulonglong)&stack0x00000000);
    return;
  }
  load_supplier_0xbc6f0(0x142666770,7,0,1);
  iVar9 = in_stack_00000160;
  while (iVar9 = iVar9 + 1, iVar10 = iVar2, iVar9 <= in_stack_00000388) {
    for (; iVar10 < in_stack_00000168 + 6; iVar10 = iVar10 + 1) {
      load_supplier_0xbc6e0(0x142666770,iVar10);
      if (iVar9 == in_stack_00000160) {
        func_0x000140af1390(0x142666770,
                            *(undefined4 *)((longlong)(iVar10 - iVar2) * 4 + 0x142668118));
      }
      else if (iVar9 == in_stack_00000388) {
        func_0x000140af1390(0x142666770,
                            *(undefined4 *)((longlong)(iVar10 - iVar2) * 4 + 0x142668130));
      }
      else {
        func_0x000140af1390(0x142666770,
                            *(undefined4 *)((longlong)(iVar10 - iVar2) * 4 + 0x142668124));
      }
      cVar1 = func_0x000140073550(0x1423e9af0,0);
      if (cVar1 != '\0') {
        FUN_1400bc750(0x142666770,0);
      }
    }
  }
  goto code_r0x00014017045f;
}

