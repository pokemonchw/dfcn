/* classic PE:6aea11a5:0272d000; knowledge-selection; RVA 0x1b5b8f..0x1b6421 */

void load_knowledge_selection(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R13D;
  longlong lVar8;
  longlong in_stack_00000068;
  
  DAT_1423ac94c = 0;
  load_supplier_0xafe4c0(0x142666770,2);
  lVar8 = (longlong)unaff_R13D;
  piVar3 = (int *)load_supplier_0x70920(unaff_RDI + 0x1b78,lVar8);
  iVar1 = *piVar3;
  if (iVar1 == 0xe) {
    load_supplier_0xb53b30(0x1426b1e00,0x4c,0xff,1);
    puVar4 = (undefined4 *)load_supplier_0x70920(in_stack_00000068 + 0x1b90,lVar8);
    lVar8 = FUN_140073b30(0x142504248,*puVar4);
    if (lVar8 != 0) {
      FUN_140069710(unaff_RBP + 0x1180,"[C:7:0:1]");
      load_supplier_0x70c50(unaff_RBP + 0x1160);
      load_knowledge_poetic_form(lVar8,unaff_RBP + 0x1160);
      load_supplier_0xbb2d0(unaff_RBP + 0x1180,unaff_RBP + 0x1160);
      FUN_1400bcd30(in_stack_00000068 + 0x1bc0,unaff_RBP + 0x1180);
      uVar6 = FUN_14154de30(0x20);
      *(undefined8 *)(unaff_RBP + -0x28) = uVar6;
      uVar6 = load_supplier_0x14f8e0(uVar6);
      *(undefined8 *)(unaff_RBP + 0x578) = uVar6;
      load_supplier_0x13d220(in_stack_00000068 + 0x1bd8,unaff_RBP + 0x578);
      load_supplier_0x693f0(unaff_RBP + 0x1160);
      load_supplier_0x693f0(unaff_RBP + 0x1180);
      load_supplier_0x1b3469();
      return;
    }
code_r0x0001401b3469:
    FUN_14154de00(*(ulonglong *)(unaff_RBP + 0x12a0) ^ (ulonglong)&stack0x00000000);
    return;
  }
  if (iVar1 == 0xf) {
    load_supplier_0xb53b30(0x1426b1e00,0x4c,0xff,1);
    puVar4 = (undefined4 *)load_supplier_0x70920(in_stack_00000068 + 0x1b90,lVar8);
    lVar8 = FUN_140073b30(0x142504278,*puVar4);
    if (lVar8 != 0) {
      FUN_140069710(unaff_RBP + 0x1140,"[C:7:0:1]");
      load_supplier_0x70c50(unaff_RBP + 0x1240);
      load_knowledge_musical_form(lVar8,unaff_RBP + 0x1240);
      load_supplier_0xbb2d0(unaff_RBP + 0x1140,unaff_RBP + 0x1240);
      FUN_1400bcd30(in_stack_00000068 + 0x1bc0,unaff_RBP + 0x1140);
      uVar6 = FUN_14154de30(0x20);
      *(undefined8 *)(unaff_RBP + -0x28) = uVar6;
      uVar6 = load_supplier_0x14f8e0(uVar6);
      *(undefined8 *)(unaff_RBP + 0x570) = uVar6;
      load_supplier_0x13d220(in_stack_00000068 + 0x1bd8,unaff_RBP + 0x570);
      load_supplier_0x693f0(unaff_RBP + 0x1240);
      load_supplier_0x693f0(unaff_RBP + 0x1140);
      load_supplier_0x1b3469();
      return;
    }
    goto code_r0x0001401b3469;
  }
  if (iVar1 == 0x10) {
    load_supplier_0xb53b30(0x1426b1e00,0x4c,0xff,1);
    puVar4 = (undefined4 *)load_supplier_0x70920(in_stack_00000068 + 0x1b90,lVar8);
    lVar8 = FUN_140073b30(0x1425042a8,*puVar4);
    if (lVar8 != 0) {
      FUN_140069710(unaff_RBP + 0x1260,"[C:7:0:1]");
      load_supplier_0x70c50(unaff_RBP + 0x1220);
      load_knowledge_dance_form(lVar8,unaff_RBP + 0x1220);
      load_supplier_0xbb2d0(unaff_RBP + 0x1260,unaff_RBP + 0x1220);
      FUN_1400bcd30(in_stack_00000068 + 0x1bc0,unaff_RBP + 0x1260);
      uVar6 = FUN_14154de30(0x20);
      *(undefined8 *)(unaff_RBP + -0x28) = uVar6;
      uVar6 = load_supplier_0x14f8e0(uVar6);
      *(undefined8 *)(unaff_RBP + 0x568) = uVar6;
      load_supplier_0x13d220(in_stack_00000068 + 0x1bd8,unaff_RBP + 0x568);
      load_supplier_0x693f0(unaff_RBP + 0x1220);
      load_supplier_0x693f0(unaff_RBP + 0x1260);
      load_supplier_0x1b3469();
      return;
    }
    goto code_r0x0001401b3469;
  }
  if (iVar1 != 0x11) goto code_r0x0001401b3469;
  load_supplier_0xb53b30(0x1426b1e00,0x4c,0xff,1);
  puVar4 = (undefined4 *)load_supplier_0x70920(in_stack_00000068 + 0x1b90,lVar8);
  lVar8 = FUN_140073b30(0x142504038,*puVar4);
  if (lVar8 == 0) goto code_r0x0001401b3469;
  FUN_140069710(unaff_RBP + 0x1120,"[C:7:0:1]");
  cVar2 = load_supplier_0x70ae0(lVar8 + 8);
  if (cVar2 == '\0') {
    load_supplier_0xbb2d0(unaff_RBP + 0x1120,lVar8 + 8);
    load_supplier_0x70b20(unaff_RBP + 0x1120," is ");
    if (*(uint *)(lVar8 + 0x68) < 0x1a) {
                    /* WARNING: Switch is manually overridden */
      switch((&UNK_1401bc0fc)[(int)*(uint *)(lVar8 + 0x68)]) {
      case 1:
        pcVar7 = "an";
        goto LAB_1401b5cbc;
      }
    }
    pcVar7 = "a";
  }
  else {
    pcVar7 = "This is an untitled";
  }
LAB_1401b5cbc:
  load_supplier_0x70b20(unaff_RBP + 0x1120,pcVar7);
  load_supplier_0x70b20(unaff_RBP + 0x1120," ");
  if (*(uint *)(lVar8 + 0x68) < 0x1a) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(lVar8 + 0x68)) {
    case 0:
      pcVar7 = "manual";
      break;
    case 1:
      pcVar7 = "guide";
    }
    load_supplier_0x70b20(unaff_RBP + 0x1120,pcVar7);
  }
  if (*(int *)(lVar8 + 0xa0) != -1) {
    lVar5 = FUN_140069380(0x142516038);
    if (lVar5 != 0) {
      load_supplier_0x70b20(unaff_RBP + 0x1120,", authored by ");
      load_supplier_0x70c50(unaff_RBP + 0x11a0);
      lVar5 = FUN_140c24140(lVar5);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x72) != '\0')) {
        FUN_140aaa930(lVar5,unaff_RBP + 0x11a0);
      }
      load_supplier_0xbb2d0(unaff_RBP + 0x1120,unaff_RBP + 0x11a0);
      load_supplier_0x693f0(unaff_RBP + 0x11a0);
    }
  }
  load_supplier_0x70b20(unaff_RBP + 0x1120,".  ");
  iVar1 = *(int *)(lVar8 + 0x68);
  if (iVar1 == 7) {
    lVar5 = FUN_140073b30(0x142504248,*(undefined4 *)(lVar8 + 0x6c));
    if (lVar5 != 0) {
      load_supplier_0x70b20(unaff_RBP + 0x1120,"It is an example of ");
      load_supplier_0x70c50(unaff_RBP + 0x1200);
      load_generated_form_name(lVar5 + 8,unaff_RBP + 0x1200,1,0);
      load_supplier_0xbb2d0(unaff_RBP + 0x1120,unaff_RBP + 0x1200);
      load_supplier_0x70b20(unaff_RBP + 0x1120,".  ");
      load_supplier_0x693f0(unaff_RBP + 0x1200);
      load_written_work_content(lVar8,unaff_RBP + 0x1120,0);
      load_supplier_0x70b20(unaff_RBP + 0x1120,"[B]");
      load_knowledge_poetic_form(lVar5,unaff_RBP + 0x1120);
      goto LAB_1401b6101;
    }
  }
  else if (iVar1 == 0xc) {
    lVar5 = FUN_140073b30(0x142504278,*(undefined4 *)(lVar8 + 0x6c));
    if (lVar5 != 0) {
      load_supplier_0x70b20(unaff_RBP + 0x1120,"It is an example of ");
      load_supplier_0x70c50(unaff_RBP + 0x11e0);
      load_generated_form_name(lVar5 + 8,unaff_RBP + 0x11e0,1,0);
      load_supplier_0xbb2d0(unaff_RBP + 0x1120,unaff_RBP + 0x11e0);
      load_supplier_0x70b20(unaff_RBP + 0x1120,".  ");
      load_supplier_0x693f0(unaff_RBP + 0x11e0);
      load_written_work_content(lVar8,unaff_RBP + 0x1120,0);
      load_supplier_0x70b20(unaff_RBP + 0x1120,"[B]");
      load_knowledge_musical_form(lVar5,unaff_RBP + 0x1120);
      goto LAB_1401b6101;
    }
  }
  else if (iVar1 == 0xd) {
    lVar5 = FUN_140073b30(0x1425042a8,*(undefined4 *)(lVar8 + 0x6c));
    if (lVar5 != 0) {
      load_supplier_0x70b20(unaff_RBP + 0x1120,"It is an example of ");
      load_supplier_0x70c50(unaff_RBP + 0x11c0);
      load_generated_form_name(lVar5 + 8,unaff_RBP + 0x11c0,1,0);
      load_supplier_0xbb2d0(unaff_RBP + 0x1120,unaff_RBP + 0x11c0);
      load_supplier_0x70b20(unaff_RBP + 0x1120,".  ");
      load_supplier_0x693f0(unaff_RBP + 0x11c0);
      load_written_work_content(lVar8,unaff_RBP + 0x1120,0);
      load_supplier_0x70b20(unaff_RBP + 0x1120,"[B]");
      load_knowledge_dance_form(lVar5,unaff_RBP + 0x1120);
      goto LAB_1401b6101;
    }
  }
  load_written_work_content(lVar8,unaff_RBP + 0x1120,0);
LAB_1401b6101:
  FUN_1400bcd30(in_stack_00000068 + 0x1bc0,unaff_RBP + 0x1120);
  uVar6 = FUN_14154de30(0x20);
  *(undefined8 *)(unaff_RBP + -0x28) = uVar6;
  uVar6 = load_supplier_0x14f8e0(uVar6);
  *(undefined8 *)(unaff_RBP + 0x560) = uVar6;
  load_supplier_0x13d220(in_stack_00000068 + 0x1bd8,unaff_RBP + 0x560);
  load_supplier_0x693f0(unaff_RBP + 0x1120);
  load_supplier_0x1b3469();
  return;
}

