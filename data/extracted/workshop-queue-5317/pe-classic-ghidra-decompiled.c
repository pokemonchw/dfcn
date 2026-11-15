/* classic PE:6aea11a5:0272d000; job-object-caption; RVA 0xd17c80..0xd17dab */

void workshop_job_object_caption(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(short *)(param_1 + 0x14) != 0xa9) {
    workshop_job_caption
              (0x142402530,param_2,*(short *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x3a),
               *(undefined2 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),param_1 + 0x50,*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),param_1,
               *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
               *(undefined4 *)(param_1 + 0x13c));
    return;
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_140070fd0(param_2,"Stop Bleeding",0xd);
      return;
    }
    if (iVar1 == 2) {
      FUN_140070fd0(param_2,"Repair Compound Fracture",0x18);
      return;
    }
    if (iVar1 == 3) {
      FUN_140070fd0(param_2,"Remove Rotten Tissue",0x14);
      return;
    }
  }
  FUN_140070fd0(param_2,"Surgery",7);
  return;
}


/* classic PE:6aea11a5:0272d000; job-caption; RVA 0xd17dc0..0xd1ca04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_job_caption
               (undefined8 param_1,undefined8 *param_2,ushort param_3,short param_4,short param_5,
               short param_6,int param_7,undefined8 *param_8,uint param_9,int param_10,uint param_11
               ,longlong param_12,undefined8 param_13,int param_14,int param_15)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong ****pppplVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong ***ppplVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_338 [32];
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
  
  uStack_30 = _DAT_1418b8040 ^ (ulonglong)auStack_338;
  sStack_2f8 = param_5;
  uVar22 = (ulonglong)param_10;
  uVar21 = (ulonglong)param_14;
  uVar24 = (ulonglong)param_15;
  uStack_2e8 = 0;
  iVar6 = 0;
  pplStack_2e0 = (longlong **)0x0;
  uStack_2d8 = 0xf;
  ppplStack_2f0 = (longlong ***)0x0;
  param_2[2] = 0;
  puVar13 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar13 = 0;
  puVar13 = _DAT_1425135e8;
  sStack_2f6 = param_4;
  if (0xf7 < param_3) goto override_jmp_140d17e7a_case_133;
                    /* WARNING: Switch is manually overridden */
  switch(param_3) {
  case 0:
    pcVar15 = "Carve fortification";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 1:
    pcVar15 = "Smooth wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 2:
    pcVar15 = "Smooth floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 3:
    pcVar15 = "Detail wall";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 4:
    pcVar15 = "Detail floor";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 5:
    pcVar15 = "Dig";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 6:
    pcVar15 = "Carve upward staircase";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 7:
    pcVar15 = "Carve downward staircase";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 8:
    pcVar15 = "Carve up/down staircase";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 9:
    pcVar15 = "Carve ramp";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 10:
    pcVar15 = "Dig channel";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb:
    pcVar15 = "Fell tree";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xc:
    pcVar15 = "Gather plants";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xd:
    pcVar15 = "Remove construction";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe:
    pcVar15 = "Collect webs";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xf:
    pcVar15 = "Bring item to depot";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x10:
    pcVar15 = "Bring item to shop";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x11:
    pcVar15 = "Eat";
    ppplVar19 = (longlong ***)0x3;
    break;
  case 0x12:
    pcVar15 = "Get provisions";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x13:
  case 0x14:
    pcVar15 = "Drink";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x15:
  case 0x16:
    pcVar15 = "Fill waterskin";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x17:
    pcVar15 = "Sleep";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x18:
    pcVar15 = "Collect sand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x19:
    pcVar15 = "Fish";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1a:
    pcVar15 = "Hunt";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x1b:
    pcVar15 = "Hunt for small creature";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x1c:
    pcVar15 = "Kidnap";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x1d:
    pcVar15 = "Beat criminal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x1e:
    pcVar15 = "Starting fist fight";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x1f:
    pcVar15 = "Collect taxes";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x20:
    pcVar15 = "Guard tax collector";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x21:
    pcVar15 = "Catch live land animal";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x22:
    pcVar15 = "Catch live fish";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x23:
    pcVar15 = "Return kill";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x24:
    pcVar15 = "Store owned item";
    goto LAB_140d1c97c;
  case 0x25:
    pcVar15 = "Place item in tomb";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x26:
    pcVar15 = "Store item in stockpile";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x27:
    pcVar15 = "Store item in bag";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x28:
    pcVar15 = "Store item in location";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0x29:
    pcVar15 = "Store weapon";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x2a:
    pcVar15 = "Store armor";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2b:
    pcVar15 = "Store item in barrel";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x2c:
    pcVar15 = "Store item in bin";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x2d:
    pcVar15 = "Seek artifact";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x2e:
    pcVar15 = "Seek infant";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x2f:
  case 0x30:
    pcVar15 = "Go shopping";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x31:
    pcVar15 = "Clean";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x32:
    pcVar15 = "Rest";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x33:
    pcVar15 = "Pickup equipment";
    goto LAB_140d1c97c;
  case 0x34:
    pcVar15 = "Dump item";
    ppplVar19 = (longlong ***)0x9;
    break;
  default:
    pcVar15 = "Strange mood";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x42:
    pcVar15 = "Construct building";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x43:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " Portal";
        ppplVar19 = (longlong ***)0x7;
        break;
      }
    }
    pcVar15 = " door";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x44:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " floodgate";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x45:
    FUN_140070fd0(param_2,"Make",4);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 3) == 0)) {
      workshop_supplier_0x70b20(param_2," ");
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
      workshop_supplier_0xbb2d0(param_2,&ppplStack_2f0);
    }
    pcVar15 = " bed";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x46:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      workshop_supplier_0x70b20(param_2," throne");
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = " chair";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x47:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      cVar5 = FUN_14146fea0(0x1423ed870,0x2f,param_6,param_7);
      if (cVar5 == '\0') {
        workshop_supplier_0x70b20(param_2," coffin");
      }
      else {
        workshop_supplier_0x70b20(param_2," sarcophagus");
      }
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = " casket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x48:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " table";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x49:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " box";
        ppplVar19 = (longlong ***)0x4;
        break;
      }
    }
    if ((param_6 == 0) && (cVar5 = FUN_14146fea0(0x1423ed870,0x2f,0,param_7), cVar5 == '\0')) {
      workshop_supplier_0x70b20(param_2," coffer");
    }
    else {
      workshop_supplier_0x70b20(param_2," chest");
    }
    goto override_jmp_140d17e7a_case_133;
  case 0x4a:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bag";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4b:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bin";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x4c:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " armor stand";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4d:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " weapon rack";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x4e:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " cabinet";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x4f:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " statue";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x50:
    FUN_140070fd0(param_2,"Make ",5);
    if ((param_11 & 2) == 0) {
      lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 8) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 7) & 0x10) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140d19672;
      }
    }
    else {
LAB_140d19672:
      FUN_140070fd0(param_2,"four ",5);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " blocks";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x51:
    FUN_140070fd0(param_2,"Make raw ",9);
    goto LAB_140d191c5;
  case 0x52:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crafts";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x53:
    FUN_140070fd0(param_2,"Mint ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " coins";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x54:
    if (param_6 == -1) {
      pcVar15 = "Cut gems";
      ppplVar19 = (longlong ***)0x8;
    }
    else {
      FUN_140070fd0(param_2,"Cut ",4);
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_318 = param_11;
      workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
      pcVar15 = (char *)&ppplStack_2f0;
      ppplVar19 = (longlong ***)pplStack_2e0;
      if (0xf < uStack_2d8) {
        pcVar15 = (char *)ppplStack_2f0;
      }
    }
    break;
  case 0x55:
    if (param_6 != -1) {
      uVar18 = 4;
      pcVar15 = "Cut ";
LAB_140d191b9:
      FUN_140070fd0(param_2,pcVar15,uVar18);
      goto LAB_140d191c5;
    }
    pcVar15 = "Cut raw glass into gems";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x56:
    FUN_140070fd0(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140070fd0(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140070fd0(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140070fd0(param_2,"ammo",4);
    }
    FUN_140070fd0(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d191c5;
    pcVar15 = "cut gems";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0x57:
    FUN_140070fd0(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140070fd0(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140070fd0(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140070fd0(param_2,"ammo",4);
    }
    FUN_140070fd0(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d191c5;
    pcVar15 = "cut glass";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x58:
    pcVar15 = "Destroy building";
    goto LAB_140d1c97c;
  case 0x59:
    FUN_140070fd0(param_2,"Smelt ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ore";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x5a:
    pcVar15 = "Melt a metal object";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x5b:
    pcVar15 = "Extract metal strands";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x5c:
    pcVar15 = "Plant seeds";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x5d:
    pcVar15 = "Harvest plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5e:
    FUN_140070fd0(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_90);
            workshop_memorial_unit_identity(lVar7,auStack_90,0);
            workshop_supplier_0xbb2d0(param_2,auStack_90);
            workshop_supplier_0x70b20(param_2," to hunt");
            FUN_140070e10(auStack_90);
          }
          break;
        }
      }
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "hunting animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x5f:
    FUN_140070fd0(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_70);
            workshop_memorial_unit_identity(lVar7,auStack_70,0);
            workshop_supplier_0xbb2d0(param_2,auStack_70);
            workshop_supplier_0x70b20(param_2," for war");
            FUN_140070e10(auStack_70);
          }
          break;
        }
      }
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "war animal";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x60:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b377:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b377;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142508ea8 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x61:
    FUN_140070fd0(param_2,"Forge ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " anvil";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0x62:
    FUN_140070fd0(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140070fd0(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " catapult parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 99:
    FUN_140070fd0(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140070fd0(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " ballista parts";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 100:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b236:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b236;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418b821c == 0) && (param_10 != -1)) && (param_10 != _DAT_1423af9fc)) {
      iVar6 = FUN_141374520(0x19,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        workshop_supplier_0x70b20(param_2,"small ");
      }
      else if (iVar6 == 2) {
        workshop_supplier_0x70b20(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142509190 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x65:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1af4e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1af4e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418b821c == 0) && (param_10 != -1)) && (param_10 != _DAT_1423af9fc)) {
      iVar6 = FUN_141374520(0x1c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        workshop_supplier_0x70b20(param_2,"small ");
      }
      else if (iVar6 == 2) {
        workshop_supplier_0x70b20(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142509220 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x66:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b08f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b08f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    sVar3 = sStack_2f8;
    if (((_DAT_1418b821c == 0) && (param_10 != -1)) && (param_10 != _DAT_1423af9fc)) {
      iVar6 = FUN_141374520(0x3c,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        workshop_supplier_0x70b20(param_2,"small ");
      }
      else if (iVar6 == 2) {
        workshop_supplier_0x70b20(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142509238 + (longlong)sVar3 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x67:
    FUN_140070fd0(param_2,"Stud with ",10);
    goto LAB_140d191c5;
  case 0x68:
    pcVar15 = "Butcher an animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0x69:
    pcVar15 = "Prepare a raw fish";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0x6a:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      workshop_supplier_0x70b20(param_2,"Mill ");
      workshop_supplier_0x70c50(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_1401463c0(0x142508c78,param_7,auStack_2d0,0);
      workshop_supplier_0xbb2d0(param_2,auStack_2d0);
      FUN_140070e10(auStack_2d0);
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "Mill plants";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6b:
    FUN_140070fd0(param_2,"Bait trap with ",0xf);
    if (sStack_2f6 == 0x2c) {
      workshop_supplier_0x70b20(param_2,"gem");
    }
    else if (sStack_2f6 == 0x30) {
      workshop_supplier_0x70b20(param_2,"meat");
    }
    else if (sStack_2f6 == 0x31) {
      workshop_supplier_0x70b20(param_2,"fish");
    }
    goto override_jmp_140d17e7a_case_133;
  case 0x6c:
    FUN_140070fd0(param_2,"Milk ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xe) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_270);
            workshop_memorial_unit_identity(lVar7,auStack_270,0);
            workshop_supplier_0xbb2d0(param_2,auStack_270);
            FUN_140070e10(auStack_270);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d18066;
  case 0x6d:
    pcVar15 = "Make cheese";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x6e:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      workshop_supplier_0x70b20(param_2,"Process ");
      workshop_supplier_0x70c50(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_1401463c0(0x142508c78,param_7,auStack_2d0,0);
      workshop_supplier_0xbb2d0(param_2,auStack_2d0);
      FUN_140070e10(auStack_2d0);
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "Process plants";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x6f:
    if (param_6 != -1) {
      uVar18 = 7;
      pcVar15 = "Polish ";
      goto LAB_140d191b9;
    }
    pcVar15 = "Polish stones";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x70:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      workshop_supplier_0x70b20(param_2,"Process ");
      workshop_supplier_0x70c50(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_1401463c0(0x142508c78,param_7,auStack_2d0,0);
      workshop_supplier_0xbb2d0(param_2,auStack_2d0);
      workshop_supplier_0x70b20(param_2," (vial)");
      FUN_140070e10(auStack_2d0);
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "Process plants (vial)";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x71:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      workshop_supplier_0x70b20(param_2,"Process ");
      workshop_supplier_0x70c50(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_1401463c0(0x142508c78,param_7,auStack_2d0,0);
      workshop_supplier_0xbb2d0(param_2,auStack_2d0);
      workshop_supplier_0x70b20(param_2," (barrel)");
      FUN_140070e10(auStack_2d0);
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "Process plants (barrel)";
    ppplVar19 = (longlong ***)0x17;
    break;
  case 0x72:
    if (param_6 == 2) {
      workshop_supplier_0x70b20(param_2,"Prepare easy meal");
    }
    else if (param_6 == 3) {
      workshop_supplier_0x70b20(param_2,"Prepare fine meal");
    }
    else if (param_6 == 4) {
      workshop_supplier_0x70b20(param_2,"Prepare lavish meal");
    }
    goto override_jmp_140d17e7a_case_133;
  case 0x73:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1c402:
      if ((param_6 == 0) && (param_7 == -1)) goto LAB_140d1c40c;
      if ((param_11 & 8) == 0) {
        pcVar15 = "Weave yarn into cloth";
        if ((param_11 >> 0xc & 1) == 0) {
          pcVar15 = "Weave thread into cloth";
        }
      }
      else {
        pcVar15 = "Weave thread into silk";
      }
      workshop_supplier_0x70b20(param_2,pcVar15);
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1c402;
LAB_140d1c40c:
      FUN_140070fd0(param_2,"Weave metal cloth",0x11);
    }
    if (param_9 == 0) goto override_jmp_140d17e7a_case_133;
    pcVar15 = " (dyed only)";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x74:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d19fa3:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d19fa3;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    FUN_140070fd0(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418b821c == 0) && (param_10 != -1)) && (param_10 != _DAT_1423af9fc)) {
      iVar6 = FUN_141374520(0x1d,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        workshop_supplier_0x70b20(param_2,"small ");
      }
      else if (iVar6 == 2) {
        workshop_supplier_0x70b20(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_1425091d8 + (longlong)sVar3 * 8);
    goto LAB_140d1a0a1;
  case 0x75:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a120:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a120;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    FUN_140070fd0(param_2,"pair of ",8);
    sVar3 = sStack_2f8;
    if (((_DAT_1418b821c == 0) && (param_10 != -1)) && (param_10 != _DAT_1423af9fc)) {
      iVar6 = FUN_141374520(0x1a,sStack_2f8,uVar22 & 0xffff);
      if (iVar6 == 1) {
        workshop_supplier_0x70b20(param_2,"small ");
      }
      else if (iVar6 == 2) {
        workshop_supplier_0x70b20(param_2,"large ");
      }
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_1425091f0 + (longlong)sVar3 * 8);
    pcVar15 = (char *)(lVar7 + 0x88);
    ppplVar19 = *(longlong ****)(lVar7 + 0x98);
    if (0xf < *(ulonglong *)(lVar7 + 0xa0)) {
      pcVar15 = (char *)*(longlong *****)(lVar7 + 0x88);
    }
    break;
  case 0x76:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a28b:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a28b;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142509208 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x77:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a368:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a368;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " terrarium";
        ppplVar19 = (longlong ***)0xa;
        break;
      }
    }
    pcVar15 = " cage";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x78:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a472:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a472;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 2) == 0) {
      if ((((param_11 & 8) == 0) && (199 < (ushort)(param_6 - 0x1a3U))) &&
         ((param_11 & 0x1015) == 0)) {
        workshop_supplier_0x70b20(param_2," chain");
        goto override_jmp_140d17e7a_case_133;
      }
      pcVar15 = " rope";
      ppplVar19 = (longlong ***)0x5;
    }
    else {
      pcVar15 = " chain";
      ppplVar19 = (longlong ***)0x6;
    }
    break;
  case 0x79:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a57e:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a57e;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    FUN_140070fd0(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    if ((param_11 & 0x10) == 0) {
      lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
      if (lVar7 != 0) {
        if ((*(int *)(lVar7 + 0x298) < 7) ||
           ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          workshop_supplier_0x70b20(param_2," vials");
          goto override_jmp_140d17e7a_case_133;
        }
      }
      workshop_supplier_0x70b20(param_2," flasks");
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = " waterskins";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x7a:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a6b8:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a6b8;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    FUN_140070fd0(param_2,"three ",6);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    if ((199 < (ushort)(param_6 - 0x1a3U)) && ((param_11 & 0x1003) == 0)) {
      if ((param_6 == 0) && (cVar5 = FUN_14146fea0(0x1423ed870,0x2f,0,param_7), cVar5 == '\0')) {
        workshop_supplier_0x70b20(param_2," mugs");
      }
      else {
        workshop_supplier_0x70b20(param_2," goblets");
      }
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = " cups";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0x7b:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a9e5:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a9e5;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " toy";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0x7c:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1aaa5:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1aaa5;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " animal trap";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0x7d:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1ab65:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1ab65;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " barrel";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7e:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1ad2f:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1ad2f;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bucket";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x7f:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " window";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x80:
    pcVar15 = "Make totem";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x81:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b5a6:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b5a6;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    if ((param_11 & 0x20) == 0) {
      uVar18 = 0xc;
      pcVar15 = "twenty-five ";
    }
    else {
      uVar18 = 5;
      pcVar15 = "five ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    lVar7 = *(longlong *)(_DAT_1425091a8 + (longlong)sStack_2f8 * 8);
LAB_140d1a0a1:
    pppplVar16 = (longlong ****)(lVar7 + 0x88);
    goto LAB_140d1a0a8;
  case 0x82:
    FUN_140070fd0(param_2,"Decorate with ",0xe);
LAB_140d191c5:
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pcVar15 = (char *)&ppplStack_2f0;
    ppplVar19 = (longlong ***)pplStack_2e0;
    if (0xf < uStack_2d8) {
      pcVar15 = (char *)ppplStack_2f0;
    }
    break;
  case 0x83:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " backpack";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0x84:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quiver";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0x85:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b454:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b454;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ballista arrow head";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0x86:
    FUN_140070fd0(param_2,"Assemble ",9);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_1425091c0 + (longlong)sStack_2f8 * 8) + 0x68);
    goto LAB_140d1a0a8;
  case 0x87:
    pcVar15 = "Load catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x88:
    pcVar15 = "Load ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x89:
    pcVar15 = "Fire catapult";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8a:
    pcVar15 = "Fire ballista";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x8b:
    FUN_140070fd0(param_2,"Make",4);
    FUN_140070fd0(param_2," ",1);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " mechanisms";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x8c:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1b73a:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1b73a;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    lVar8 = (longlong)sStack_2f8;
    lVar7 = *(longlong *)(lVar8 * 8 + _DAT_142508ec0);
    if (*(longlong *)(lVar7 + 0xb8) != 0) {
      puVar13 = (undefined8 *)(lVar7 + 0xa8);
      if (0xf < *(ulonglong *)(lVar7 + 0xc0)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      FUN_140070fd0(param_2,puVar13,*(undefined8 *)(lVar7 + 0xb8));
      FUN_140070fd0(param_2," ",1);
    }
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    FUN_140070fd0(param_2," ",1);
    pppplVar16 = (longlong ****)(*(longlong *)(lVar8 * 8 + _DAT_142508ec0) + 0x68);
    goto LAB_140d1a0a8;
  case 0x8d:
    pcVar15 = "Load cage trap";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x8e:
    pcVar15 = "Load stone trap";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x8f:
    pcVar15 = "Load weapon trap";
    goto LAB_140d1c97c;
  case 0x90:
    pcVar15 = "Clean trap";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0x91:
    FUN_140070fd0(param_2,"Encrust ",8);
    if ((param_9 >> 10 & 1) != 0) {
      FUN_140070fd0(param_2,"finished goods",0xe);
    }
    if ((param_9 & 4) != 0) {
      FUN_140070fd0(param_2,"furniture",9);
    }
    if ((param_9 & 0x40) != 0) {
      FUN_140070fd0(param_2,"ammo",4);
    }
    FUN_140070fd0(param_2," with ",6);
    if (param_6 != -1) goto LAB_140d191c5;
    pcVar15 = "polished stones";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0x92:
    pcVar15 = "Link a building to trigger";
    ppplVar19 = (longlong ***)0x1a;
    break;
  case 0x93:
    pcVar15 = "Pull the lever";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0x94:
    goto override_jmp_140d17e7a_case_133;
  case 0x95:
    if ((ushort)(param_6 - 0x1a3U) < 200) {
      workshop_supplier_0x70b20(param_2,"Extract from ");
      workshop_supplier_0x70c50(auStack_2d0);
      uStack_318 = CONCAT31(uStack_318._1_3_,1);
      FUN_1401463c0(0x142508c78,param_7,auStack_2d0,0);
      workshop_supplier_0xbb2d0(param_2,auStack_2d0);
      FUN_140070e10(auStack_2d0);
      goto override_jmp_140d17e7a_case_133;
    }
    pcVar15 = "Extract from plants";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x96:
    pcVar15 = "Extract from raw fish";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0x97:
    pcVar15 = "Extract from land animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0x98:
    pcVar15 = "Tame a small animal";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0x99:
    FUN_140070fd0(param_2,"Tame ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_f0);
            workshop_memorial_unit_identity(lVar7,auStack_f0,0);
            workshop_supplier_0xbb2d0(param_2,auStack_f0);
            FUN_140070e10(auStack_f0);
          }
          break;
        }
      }
      goto override_jmp_140d17e7a_case_133;
    }
    goto LAB_140d183fe;
  case 0x9a:
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70b20(param_2,"Chain ");
            workshop_supplier_0x70c50(auStack_170);
            workshop_memorial_unit_identity(lVar7,auStack_170,0);
            workshop_supplier_0xbb2d0(param_2,auStack_170);
            FUN_140070e10(auStack_170);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "Put in chains";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0x9b:
    FUN_140070fd0(param_2,"Unchain",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70b20(param_2," ");
            workshop_supplier_0x70c50(auStack_110);
            workshop_memorial_unit_identity(lVar7,auStack_110,0);
            workshop_supplier_0xbb2d0(param_2,auStack_110);
            FUN_140070e10(auStack_110);
          }
          break;
        }
      }
    }
    goto override_jmp_140d17e7a_case_133;
  case 0x9c:
    pcVar15 = "Unchain pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9d:
    FUN_140070fd0(param_2,"Release ",8);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_1f0);
            workshop_memorial_unit_identity(lVar7,auStack_1f0,0);
            workshop_supplier_0xbb2d0(param_2,auStack_1f0);
            FUN_140070e10(auStack_1f0);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d183fe;
  case 0x9e:
    pcVar15 = "Release pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0x9f:
    pcVar15 = "Release small creature";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xa0:
    pcVar15 = "Handle small creature";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xa1:
    FUN_140070fd0(param_2,"Handle ",7);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_230);
            workshop_memorial_unit_identity(lVar7,auStack_230,0);
            workshop_supplier_0xbb2d0(param_2,auStack_230);
            FUN_140070e10(auStack_230);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d183fe;
  case 0xa2:
    FUN_140070fd0(param_2,"Cage ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_1d0);
            workshop_memorial_unit_identity(lVar7,auStack_1d0,0);
            workshop_supplier_0xbb2d0(param_2,auStack_1d0);
            FUN_140070e10(auStack_1d0);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d183fe;
  case 0xa3:
    pcVar15 = "Cage small animal";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xa4:
    pcVar15 = "Recover wounded";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xa5:
    pcVar15 = "Diagnose patient";
    goto LAB_140d1c97c;
  case 0xa6:
    pcVar15 = "Immobilize break";
    goto LAB_140d1c97c;
  case 0xa7:
    pcVar15 = "Dress wound";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xa8:
    pcVar15 = "Clean patient";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xa9:
    pcVar15 = "Surgery";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xaa:
    pcVar15 = "Suture";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xab:
    pcVar15 = "Set bone";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xac:
    pcVar15 = "Place in traction";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xad:
    pcVar15 = "Drain aquarium";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xae:
    pcVar15 = "Fill aquarium";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xaf:
    pcVar15 = "Fill pond";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb0:
  case 0xb2:
    pcVar15 = "Give water";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xb1:
  case 0xb3:
    pcVar15 = "Give food";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xb4:
    pcVar15 = "Recover pet";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xb5:
    FUN_140070fd0(param_2,"Pit/pond ",9);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_1b0);
            workshop_memorial_unit_identity(lVar7,auStack_1b0,0);
            workshop_supplier_0xbb2d0(param_2,auStack_1b0);
            FUN_140070e10(auStack_1b0);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d183fe;
  case 0xb6:
    pcVar15 = "Pit/pond small animal";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xb7:
    FUN_140070fd0(param_2,"Slaughter ",10);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1a) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_150);
            workshop_memorial_unit_identity(lVar7,auStack_150,0);
            workshop_supplier_0xbb2d0(param_2,auStack_150);
            FUN_140070e10(auStack_150);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d18066;
  case 0xb8:
    pcVar15 = "Make charcoal";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xb9:
    pcVar15 = "Make ash";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xba:
    pcVar15 = "Make lye";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xbb:
    pcVar15 = "Make potash from lye";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbc:
    pcVar15 = "Fertilize field";
    ppplVar19 = (longlong ***)0xf;
    break;
  case 0xbd:
    pcVar15 = "Make potash from ash";
    ppplVar19 = (longlong ***)0x14;
    break;
  case 0xbe:
    if (param_10 == -1) {
      workshop_supplier_0x70b20(param_2,"Dye thread");
      goto override_jmp_140d17e7a_case_133;
    }
    if ((param_14 != -1) && (param_15 != -1)) {
      workshop_supplier_0x70b20(param_2,"Tint ");
      workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar21 * 8) + 0x50);
      pcVar15 = " thread ";
      goto LAB_140d1c0a7;
    }
    FUN_140070fd0(param_2,"Dye thread ",0xb);
    pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142513438 + uVar22 * 8) + 0x50);
LAB_140d1a0a8:
    pcVar15 = (char *)pppplVar16;
    ppplVar19 = pppplVar16[2];
    if ((longlong ***)0xf < pppplVar16[3]) {
      pcVar15 = (char *)*pppplVar16;
    }
    break;
  case 0xbf:
    if (param_10 == -1) {
      workshop_supplier_0x70b20(param_2,"Dye cloth");
      goto override_jmp_140d17e7a_case_133;
    }
    if ((param_14 == -1) || (param_15 == -1)) {
      workshop_supplier_0x70b20(param_2,"Dye cloth ");
      workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar22 * 8) + 0x50);
      goto override_jmp_140d17e7a_case_133;
    }
    workshop_supplier_0x70b20(param_2,"Tint ");
    workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar21 * 8) + 0x50);
    pcVar15 = " cloth ";
LAB_140d1c0a7:
    workshop_supplier_0x70b20(param_2,pcVar15);
    workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar22 * 8) + 0x50);
    workshop_supplier_0x70b20(param_2," using ");
    workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar24 * 8) + 0x50);
    workshop_supplier_0x70b20(param_2," dye");
    goto override_jmp_140d17e7a_case_133;
  case 0xc0:
    FUN_140070fd0(param_2,"Sew ",4);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " image";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xc1:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1ac25:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1ac25;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 != 0) {
      if ((*(int *)(lVar7 + 0x298) < 7) || ((*(byte *)(*(longlong *)(lVar7 + 0x290) + 6) & 2) == 0))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pcVar15 = " tube";
        ppplVar19 = (longlong ***)0x5;
        break;
      }
    }
    pcVar15 = " pipe section";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xc2:
    pcVar15 = "Operate pump";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xc3:
    pcVar15 = "Manage work orders";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xc4:
    pcVar15 = "Update stockpile records";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xc5:
    pcVar15 = "Trade at depot";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xc6:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " hatch cover";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 199:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " grate";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 200:
    pcVar15 = "Remove stairs/ramps";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xc9:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " quern";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xca:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " millstone";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcb:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " splint";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcc:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crutch";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xcd:
    pcVar15 = "Make traction bench";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xce:
    pcVar15 = "Clean self";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xcf:
    pcVar15 = "Bring crutch";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xd0:
    pcVar15 = "Apply cast";
    ppplVar19 = (longlong ***)0xa;
    break;
  case 0xd1:
    puVar20 = param_8;
    if (0xf < (ulonglong)param_8[3]) {
      puVar20 = (undefined8 *)*param_8;
    }
    lVar7 = param_8[2];
    uVar21 = _DAT_1425135f0 - (longlong)_DAT_1425135e8 >> 3;
    puVar17 = _DAT_1425135e8;
    if (uVar21 != 0) {
      do {
        plVar23 = (longlong *)*puVar17;
        plVar14 = plVar23;
        if (0xf < (ulonglong)plVar23[3]) {
          plVar14 = (longlong *)*plVar23;
        }
        if ((lVar7 == plVar23[2]) &&
           (iVar11 = workshop_supplier_0x154f5b4(puVar20,plVar14,lVar7), iVar11 == 0)) {
          if (puVar13[iVar6] != 0) {
            FUN_140070b90(apppuStack_290,puVar13[iVar6] + 0x20);
            FUN_140544330(apppuStack_290);
            ppppuVar12 = apppuStack_290;
            if (0xf < uStack_278) {
              ppppuVar12 = (undefined8 ****)apppuStack_290[0];
            }
            FUN_140070fd0(param_2,ppppuVar12,uStack_280);
            FUN_140070e10(apppuStack_290);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)iVar6 < uVar21);
    }
    pcVar15 = "Reaction";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xd2:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " slab";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xd3:
    if (((param_10 != -1) && (lVar7 = _DAT_1425160a0 - _DAT_142516098 >> 3, lVar7 != 0)) &&
       (iVar11 = (int)lVar7 + -1, -1 < iVar11)) {
      do {
        iVar9 = iVar11 + iVar6 >> 1;
        lVar7 = *(longlong *)(_DAT_142516098 + (longlong)iVar9 * 8);
        if (*(int *)(lVar7 + 0xe0) == param_10) {
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0xaa) == '\0') {
              lVar8 = FUN_140075130(&DAT_142401430,*(undefined4 *)(lVar7 + 0xd8));
              if (lVar8 == 0) {
                workshop_supplier_0x70c50(auStack_2d0);
                workshop_memorial_race_caste
                          (*(undefined2 *)(lVar7 + 2),auStack_2d0,0,*(undefined2 *)(lVar7 + 4));
                workshop_supplier_0xbb2d0(param_2,auStack_2d0);
                puVar10 = auStack_2d0;
              }
              else {
                workshop_supplier_0x70c50(auStack_b0);
                workshop_memorial_unit_identity(lVar8,auStack_b0,0);
                workshop_supplier_0xbb2d0(param_2,auStack_b0);
                puVar10 = auStack_b0;
              }
            }
            else {
              workshop_supplier_0x70c50(auStack_d0);
              workshop_memorial_language_name(lVar7 + 0x38,auStack_d0);
              workshop_supplier_0xbb2d0(param_2,auStack_d0);
              puVar10 = auStack_d0;
            }
            FUN_140070e10(puVar10);
            workshop_supplier_0x70b20(param_2," (engrave memorial)");
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
        iVar4 = iVar9 + -1;
        if (*(int *)(lVar7 + 0xe0) < param_10) {
          iVar4 = iVar11;
          iVar6 = iVar9 + 1;
        }
        iVar11 = iVar4;
      } while (iVar6 <= iVar11);
    }
    pcVar15 = "Engrave memorial slab";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xd4:
    FUN_140070fd0(param_2,"Shear ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x1b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_250);
            workshop_memorial_unit_identity(lVar7,auStack_250,0);
            workshop_supplier_0xbb2d0(param_2,auStack_250);
            FUN_140070e10(auStack_250);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    goto LAB_140d18066;
  case 0xd5:
    pcVar15 = "Spin thread";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xd6:
    FUN_140070fd0(param_2,"Pen/pasture ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x14) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_190);
            workshop_memorial_unit_identity(lVar7,auStack_190,0);
            workshop_supplier_0xbb2d0(param_2,auStack_190);
            FUN_140070e10(auStack_190);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
LAB_140d183fe:
    pcVar15 = "a large animal";
    ppplVar19 = (longlong ***)0xe;
    break;
  case 0xd7:
    pcVar15 = "Pen/pasture small animal";
    ppplVar19 = (longlong ***)0x18;
    break;
  case 0xd8:
    lVar7 = FUN_1414c1d30(0x1423ed870,param_6,param_7);
    if (lVar7 == 0) {
LAB_140d1a7f4:
      uVar18 = 5;
      pcVar15 = "Make ";
    }
    else {
      if ((*(int *)(lVar7 + 0x298) < 6) || (-1 < *(char *)(*(longlong *)(lVar7 + 0x290) + 5))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140d1a7f4;
      uVar18 = 6;
      pcVar15 = "Forge ";
    }
    FUN_140070fd0(param_2,pcVar15,uVar18);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    iVar6 = (int)(_DAT_142508ef8 - _DAT_142508ef0 >> 3) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (*(short *)(*(longlong *)(_DAT_142508ef0 + lVar7 * 8) + 0x28) == sStack_2f8) {
          lVar7 = *(longlong *)(_DAT_142508ef0 + (longlong)iVar6 * 8);
          FUN_140070fd0(param_2," ",1);
          if (lVar7 == 0) goto LAB_140d1a8a8;
          plVar23 = (longlong *)(lVar7 + 0x68);
          pppuStack_2b0 = (undefined8 ***)0x0;
          lStack_2a8 = 0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          uVar21 = *(ulonglong *)(lVar7 + 0x78);
          if (0xf < *(ulonglong *)(lVar7 + 0x80)) {
            plVar23 = (longlong *)*plVar23;
          }
          if (0x7fffffffffffffff < uVar21) {
                    /* WARNING: Subroutine does not return */
            workshop_string_length_error();
          }
          if (uVar21 < 0x10) {
            uStack_298 = 0xf;
            pppuStack_2b0 = (undefined8 ***)*plVar23;
            lStack_2a8 = plVar23[1];
            uStack_2a0 = uVar21;
          }
          else {
            uVar24 = uVar21 | 0xf;
            uVar22 = 0x7fffffffffffffff;
            if ((uVar24 < 0x8000000000000000) && (uVar22 = uVar24, uVar24 < 0x16)) {
              uVar22 = 0x16;
            }
            pppuStack_2b0 = (undefined8 ***)FUN_140071d90(uVar22 + 1);
            uStack_2a0 = uVar21;
            uStack_298 = uVar22;
            workshop_supplier_0x154f29e(pppuStack_2b0,plVar23,uVar21 + 1);
          }
          ppppuVar12 = &pppuStack_2b0;
          if (0xf < uStack_298) {
            ppppuVar12 = (undefined8 ****)pppuStack_2b0;
          }
          FUN_140070fd0(param_2,ppppuVar12,uStack_2a0);
          FUN_140070e10(&pppuStack_2b0);
          goto override_jmp_140d17e7a_case_133;
        }
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    FUN_140070fd0(param_2," ",1);
LAB_140d1a8a8:
    pcVar15 = "tool";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xd9:
    pcVar15 = "Collect clay";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xda:
    pcVar15 = "Install colony in hive";
    ppplVar19 = (longlong ***)0x16;
    break;
  case 0xdb:
    pcVar15 = "Collect hive products";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xdc:
    pcVar15 = "Cause trouble";
    ppplVar19 = (longlong ***)0xd;
    break;
  case 0xdd:
  case 0xef:
    pcVar15 = "No job";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xde:
    pcVar15 = "Report crime";
    ppplVar19 = (longlong ***)0xc;
    break;
  case 0xdf:
    pcVar15 = "Execute criminal";
LAB_140d1c97c:
    ppplVar19 = (longlong ***)0x10;
    break;
  case 0xe0:
    FUN_140070fd0(param_2,"Train ",6);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0xf) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_50);
            workshop_memorial_unit_identity(lVar7,auStack_50,0);
            workshop_supplier_0xbb2d0(param_2,auStack_50);
            FUN_140070e10(auStack_50);
          }
          break;
        }
      }
      goto override_jmp_140d17e7a_case_133;
    }
    goto LAB_140d18066;
  case 0xe1:
    pcVar15 = "Carve track";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xe2:
    pcVar15 = "Push track vehicle";
    ppplVar19 = (longlong ***)0x12;
    break;
  case 0xe3:
    pcVar15 = "Place track vehicle";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xe4:
    pcVar15 = "Store item in vehicle";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xe5:
    FUN_140070fd0(param_2,"Geld ",5);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x3b) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_130);
            workshop_memorial_unit_identity(lVar7,auStack_130,0);
            workshop_supplier_0xbb2d0(param_2,auStack_130);
            FUN_140070e10(auStack_130);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
LAB_140d18066:
    pcVar15 = "animal";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xe6:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " figurine";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xe7:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " amulet";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xe8:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " scepter";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xe9:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " crown";
    ppplVar19 = (longlong ***)0x6;
    break;
  case 0xea:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " ring";
    ppplVar19 = (longlong ***)0x5;
    break;
  case 0xeb:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " earring";
    ppplVar19 = (longlong ***)0x8;
    break;
  case 0xec:
    FUN_140070fd0(param_2,"Make ",5);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " bracelet";
    ppplVar19 = (longlong ***)0x9;
    break;
  case 0xed:
    FUN_140070fd0(param_2,"Make large ",0xb);
    uStack_308 = 0;
    uStack_310 = 1;
    uStack_318 = param_11;
    workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
    pppplVar16 = &ppplStack_2f0;
    if (0xf < uStack_2d8) {
      pppplVar16 = (longlong ****)ppplStack_2f0;
    }
    FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    pcVar15 = " gem";
    ppplVar19 = (longlong ***)0x4;
    break;
  case 0xee:
    pcVar15 = "Put item on display";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf0:
    FUN_140070fd0(param_2,"Interrogate ",0xc);
    if (param_12 != 0) {
      puVar20 = *(undefined8 **)(param_12 + 0xb8);
      for (puVar13 = *(undefined8 **)(param_12 + 0xb0); puVar13 < puVar20; puVar13 = puVar13 + 1) {
        iVar6 = (**(code **)(*(longlong *)*puVar13 + 0x10))();
        if (iVar6 == 0x45) {
          lVar7 = (**(code **)(*(longlong *)*puVar13 + 0x20))();
          if (lVar7 != 0) {
            workshop_supplier_0x70c50(auStack_210);
            workshop_memorial_unit_identity(lVar7,auStack_210,0);
            workshop_supplier_0xbb2d0(param_2,auStack_210);
            FUN_140070e10(auStack_210);
            goto override_jmp_140d17e7a_case_133;
          }
          break;
        }
      }
    }
    pcVar15 = "subject";
    ppplVar19 = (longlong ***)0x7;
    break;
  case 0xf1:
    pcVar15 = "No activity";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf2:
    pcVar15 = "Store squad equipment";
    ppplVar19 = (longlong ***)0x15;
    break;
  case 0xf3:
    FUN_140070fd0(param_2,"Mix ",4);
    if ((-1 < param_7) &&
       ((ulonglong)(longlong)param_7 < (ulonglong)(_DAT_142513440 - _DAT_142513438 >> 3))) {
      workshop_supplier_0xbb2d0
                (param_2,*(longlong *)(_DAT_142513438 + (longlong)param_7 * 8) + 0x50);
      workshop_supplier_0x70b20(param_2," ");
    }
    FUN_140070fd0(param_2,"dye",3);
    if ((param_14 != -1) && (param_15 != -1)) {
      workshop_supplier_0x70b20(param_2," using ");
      if ((-1 < param_14) && (uVar21 < (ulonglong)(_DAT_142513440 - _DAT_142513438 >> 3))) {
        workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar21 * 8) + 0x50);
      }
      workshop_supplier_0x70b20(param_2," and ");
      if ((-1 < param_15) && (uVar24 < (ulonglong)(_DAT_142513440 - _DAT_142513438 >> 3))) {
        workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar24 * 8) + 0x50);
      }
    }
    goto override_jmp_140d17e7a_case_133;
  case 0xf4:
    if (param_10 != -1) {
      if ((param_14 != -1) && (param_15 != -1)) {
        workshop_supplier_0x70b20(param_2,"Tint ");
        workshop_supplier_0xbb2d0(param_2,*(longlong *)(_DAT_142513438 + uVar21 * 8) + 0x50);
        pcVar15 = " leather ";
        goto LAB_140d1c0a7;
      }
      workshop_supplier_0x70b20(param_2,"Dye leather ");
      pppplVar16 = (longlong ****)(*(longlong *)(_DAT_142513438 + uVar22 * 8) + 0x50);
      goto LAB_140d1a0a8;
    }
    pcVar15 = "Dye leather";
    ppplVar19 = (longlong ***)0xb;
    break;
  case 0xf5:
    FUN_140070fd0(param_2,"Make",4);
    if ((param_11 & 2) == 0) {
      FUN_140070fd0(param_2," ",1);
      uStack_308 = 0;
      uStack_310 = 1;
      uStack_318 = param_11;
      workshop_material_caption(0x1423ed870,&ppplStack_2f0,param_6,param_7);
      pppplVar16 = &ppplStack_2f0;
      if (0xf < uStack_2d8) {
        pppplVar16 = (longlong ****)ppplStack_2f0;
      }
      FUN_140070fd0(param_2,pppplVar16,pplStack_2e0);
    }
    pcVar15 = " bolt thrower parts";
    ppplVar19 = (longlong ***)0x13;
    break;
  case 0xf6:
    pcVar15 = "Load bolt thrower";
    ppplVar19 = (longlong ***)0x11;
    break;
  case 0xf7:
    pcVar15 = "Fire bolt thrower";
    ppplVar19 = (longlong ***)0x11;
  }
  FUN_140070fd0(param_2,pcVar15,ppplVar19);
override_jmp_140d17e7a_case_133:
  if (0xf < uStack_2d8) {
    uVar21 = uStack_2d8 + 1;
    pppplVar16 = (longlong ****)ppplStack_2f0;
    if (0xfff < uVar21) {
      uVar21 = uStack_2d8 + 0x28;
      pppplVar16 = (longlong ****)ppplStack_2f0[-1];
      if (0x1f < (ulonglong)((longlong)ppplStack_2f0 + (-8 - (longlong)pppplVar16))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    workshop_supplier_0x154de20(pppplVar16,uVar21);
  }
  FUN_14154de00(uStack_30 ^ (ulonglong)auStack_338);
  return;
}


/* classic PE:6aea11a5:0272d000; memorial-language-name; RVA 0xaaa930..0xaaafd1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_language_name(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_1418b8040 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x72) != '\0') {
    uVar11 = 0;
    if (_DAT_1418b8218 < 0xb) {
      uVar11 = *(uint *)((longlong)(int)_DAT_1418b8218 * 4 + 0x1423ace60);
    }
    param_2[2] = 0;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar6 = 0;
    if ((*(longlong *)(param_1 + 0x30) == 0) || ((uVar11 & 0xfffffffd) != 0)) {
      FUN_140070b90(&pppuStack_58,param_1);
      FUN_1405440a0(&pppuStack_58);
      ppppuVar8 = &pppuStack_58;
      if (0xf < uStack_40) {
        ppppuVar8 = (undefined8 ****)pppuStack_58;
      }
      FUN_140070fd0(param_2,ppppuVar8,lStack_48);
      lVar3 = *(longlong *)(param_1 + 0x10);
      FUN_140070e10(&pppuStack_58);
      bVar12 = lVar3 != 0;
    }
    else {
      FUN_1400bb140(param_2,0x60);
      plVar9 = (longlong *)(param_1 + 0x20);
      if (0xf < *(ulonglong *)(param_1 + 0x38)) {
        plVar9 = (longlong *)*plVar9;
      }
      FUN_140070fd0(param_2,plVar9,*(undefined8 *)(param_1 + 0x30));
      FUN_1400bb140(param_2,0x27);
      bVar12 = true;
    }
    puVar6 = (undefined8 *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (uVar11 == 1) {
        if (bVar12) {
          FUN_140070fd0(param_2," ",1);
        }
        FUN_1400bb140(param_2,0x60);
        if (0xf < *(ulonglong *)(param_1 + 0x38)) {
          puVar6 = (undefined8 *)*puVar6;
        }
        FUN_140070fd0(param_2,puVar6,*(undefined8 *)(param_1 + 0x30));
        FUN_1400bb140(param_2,0x27);
        bVar12 = true;
      }
      if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar11 == 2)) goto LAB_140aaafac;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    uVar7 = (ulonglong)iVar1;
    if ((iVar1 != -1) || (*(int *)(param_1 + 0x44) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if ((((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) &&
          (-1 < iVar2)) &&
         (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar2 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x44);
      if (((-1 < *(int *)(param_1 + 0x44)) &&
          (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140070fd0(param_2," ",1);
        }
        FUN_1405440a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140070fd0(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      FUN_140070e10(&pppuStack_58);
    }
    if (((*(int *)(param_1 + 0x54) != -1) || (*(int *)(param_1 + 0x48) != -1)) ||
       (*(int *)(param_1 + 0x4c) != -1)) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
      if (((-1 < *(int *)(param_1 + 0x48)) &&
          (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x4c);
      if ((((-1 < *(int *)(param_1 + 0x4c)) &&
           (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x50);
      if (((-1 < *(int *)(param_1 + 0x50)) &&
          (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) &&
         ((-1 < iVar1 &&
          (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar1 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar7 = (ulonglong)*(int *)(param_1 + 0x54);
      if ((((-1 < *(int *)(param_1 + 0x54)) &&
           (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) && (-1 < iVar1)) &&
         (((ulonglong)(longlong)iVar1 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
          (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar1 * 8),
          lVar4 = *(longlong *)(lVar3 + 0x50),
          uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
      }
      if (lStack_48 != 0) {
        if (bVar12) {
          FUN_140070fd0(param_2," ",1);
        }
        FUN_1405440a0(&pppuStack_58);
        ppppuVar8 = &pppuStack_58;
        if (0xf < uStack_40) {
          ppppuVar8 = (undefined8 ****)pppuStack_58;
        }
        FUN_140070fd0(param_2,ppppuVar8,lStack_48);
        bVar12 = true;
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        workshop_supplier_0x154de20(ppppuVar8,uVar7);
      }
    }
    iVar1 = *(int *)(param_1 + 0x58);
    uVar7 = (ulonglong)iVar1;
    if (iVar1 != -1) {
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
      iVar2 = *(int *)(param_1 + 0x6c);
      if (((-1 < iVar1) && (uVar7 < (ulonglong)(_DAT_142509af8 - _DAT_142509af0 >> 3))) &&
         ((-1 < iVar2 &&
          (((ulonglong)(longlong)iVar2 < (ulonglong)(_DAT_142509b28 - _DAT_142509b20 >> 3) &&
           (lVar3 = *(longlong *)(_DAT_142509b20 + (longlong)iVar2 * 8),
           lVar4 = *(longlong *)(lVar3 + 0x50),
           uVar7 <= (ulonglong)(*(longlong *)(lVar3 + 0x58) - lVar4 >> 3))))))) {
        plVar10 = *(longlong **)(lVar4 + uVar7 * 8);
        plVar9 = plVar10 + 2;
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_140070fd0(&pppuStack_58,plVar10,*plVar9);
        if (lStack_48 != 0) {
          if (bVar12) {
            FUN_140070fd0(param_2," ",1);
          }
          FUN_1405440a0(&pppuStack_58);
          ppppuVar8 = &pppuStack_58;
          if (0xf < uStack_40) {
            ppppuVar8 = (undefined8 ****)pppuStack_58;
          }
          FUN_140070fd0(param_2,ppppuVar8,lStack_48);
        }
      }
      if (0xf < uStack_40) {
        uVar7 = uStack_40 + 1;
        ppppuVar8 = (undefined8 ****)pppuStack_58;
        if (0xfff < uVar7) {
          uVar7 = uStack_40 + 0x28;
          ppppuVar8 = (undefined8 ****)pppuStack_58[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_58 + (-8 - (longlong)ppppuVar8))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        workshop_supplier_0x154de20(ppppuVar8,uVar7);
      }
    }
  }
LAB_140aaafac:
  FUN_14154de00(uStack_38 ^ (ulonglong)auStack_78);
  return;
}


/* classic PE:6aea11a5:0272d000; memorial-unit-identity; RVA 0x1344290..0x13448f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_unit_identity(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined1 auStack_c8 [32];
  char acStack_a8 [4];
  uint uStack_a4;
  longlong lStack_a0;
  int aiStack_98 [2];
  char cStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1418b8040 ^ (ulonglong)auStack_c8;
  acStack_a8[0] = param_3;
  if (_DAT_1418b8218 - 4U < 2) {
    lVar7 = *(longlong *)(param_1 + 0xd80);
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) {
      puVar12 = (undefined8 *)(param_1 + 8);
    }
    else {
      puVar12 = (undefined8 *)(lVar7 + 0x20);
    }
    if (param_2 != puVar12) {
      puVar1 = puVar12 + 2;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      FUN_140070e90(param_2,puVar12,*puVar1);
    }
    goto LAB_1413448d1;
  }
  lVar7 = param_1 + 8;
  lStack_a0 = lVar7;
  lVar6 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
  puVar14 = (undefined4 *)0x0;
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x130) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x58);
      if (lVar6 == 0) {
        puVar14 = (undefined4 *)0x0;
      }
      else if (*(int *)(lVar6 + 0x30) == -1) {
        puVar14 = (undefined4 *)0x0;
      }
      else {
        puVar14 = (undefined4 *)FUN_140073b30(0x142504068);
      }
    }
    if (puVar14 != (undefined4 *)0x0) {
      lVar7 = FUN_140c4f000(puVar14);
      lStack_a0 = lVar7;
    }
  }
  param_2[2] = 0;
  puVar12 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar12 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar12 = 0;
  if (*(char *)(lVar7 + 0x72) != '\0') {
    if (_DAT_1418b8218 == 1) {
      if ((_DAT_142401450 - _DAT_142401448 >> 3 != 0) && (_DAT_142401490 != 0)) {
        uStack_a4 = uStack_a4 & 0xffffff00;
        lVar6 = FUN_140b67b90(0x142516038,*(undefined4 *)(_DAT_142401490 + 0xc30),
                              _DAT_142401490 + 0x1274);
        if (lVar6 != 0) {
          if ((((*(int *)(param_1 + 0xc30) == -1) ||
               (lVar8 = *(longlong *)(lVar6 + 0x130), lVar8 == 0)) ||
              (*(longlong *)(lVar8 + 0x60) == 0)) ||
             (lVar8 = FUN_1400bb380(*(int *)(param_1 + 0xc30),*(undefined8 *)(lVar8 + 0x60)),
             lVar8 == 0)) {
LAB_141344457:
            cVar13 = (char)uStack_a4;
LAB_14134445b:
            if (((*(int *)(param_1 + 0x14c) != -1) && (*(longlong *)(lVar6 + 0x130) != 0)) &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + 0x60), lVar6 != 0)) {
              FUN_1400bc1a0(aiStack_98,lVar6 + 0x48);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              if (iVar5 != -1) goto LAB_1413444a1;
            }
            if (cVar13 == '\0') goto LAB_1413444d2;
          }
          else {
            if ((*(byte *)(lVar8 + 4) & 1) == 0) {
              if (puVar14 == (undefined4 *)0x0) goto LAB_141344457;
              FUN_1400bc1a0(aiStack_98,lVar8 + 8,*puVar14);
              lStack_a0._0_4_ = -1;
              lStack_a0 = 0xffffffff;
              iVar5 = (int)lStack_a0;
              if (cStack_90 != '\0') {
                iVar5 = aiStack_98[0];
              }
              cVar13 = (char)uStack_a4;
              if (iVar5 != -1) {
                cVar13 = '\x01';
              }
              goto LAB_14134445b;
            }
LAB_1413444a1:
            lVar7 = param_1 + 8;
          }
          workshop_memorial_language_name(lVar7,param_2);
          FUN_140070fd0(param_2,", ",2);
        }
      }
    }
    else {
      bVar4 = false;
      if ((((_DAT_1418b821c == 0) && (puVar14 != (undefined4 *)0x0)) &&
          (*(longlong *)(_DAT_1423b6568 + 0x1358) != 0)) &&
         ((lVar7 = FUN_1400bb380(*(undefined4 *)(param_1 + 0xc30)), lVar7 != 0 &&
          ((*(byte *)(lVar7 + 4) & 8) != 0)))) {
        bVar4 = true;
        FUN_140070fd0(param_2,"\"",1);
      }
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0xf;
      pppuStack_68 = (undefined8 ****)0x0;
      workshop_memorial_language_name(lStack_a0,&pppuStack_68);
      ppppuVar9 = &pppuStack_68;
      if (0xf < uStack_50) {
        ppppuVar9 = (undefined8 ****)pppuStack_68;
      }
      FUN_140070fd0(param_2,ppppuVar9,uStack_58);
      if (bVar4) {
        FUN_140070fd0(param_2,"\"",1);
      }
      FUN_140070fd0(param_2,", ",2);
      FUN_140070e10(&pppuStack_68);
    }
  }
LAB_1413444d2:
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  pppuStack_88 = (undefined8 ****)0x0;
  FUN_141342fe0(param_1,&pppuStack_88,1);
  ppppuVar9 = &pppuStack_88;
  if (0xf < uStack_70) {
    ppppuVar9 = (undefined8 ****)pppuStack_88;
  }
  FUN_140070fd0(param_2,ppppuVar9,uStack_78);
  if (((acStack_a8[0] != '\0') && (sVar2 = *(short *)(param_1 + 0xa4), -1 < sVar2)) &&
     ((ulonglong)(longlong)sVar2 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3))) {
    lVar7 = *(longlong *)(_DAT_142508de8 + (longlong)sVar2 * 8);
    if ((*(int *)(lVar7 + 0x1b0) < 9) || ((*(byte *)(*(longlong *)(lVar7 + 0x1a8) + 8) & 4) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(char *)(param_1 + 0x12e) == '\0') {
        FUN_141399160(param_1);
        FUN_140070fd0(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
        FUN_1400bb140(param_2,0xc);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
      }
      if (*(char *)(param_1 + 0x12e) == '\x01') {
        FUN_141399160(param_1);
        FUN_140070fd0(param_2,", ",2);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
        FUN_1400bb140(param_2,0xb);
        if ((*(uint *)(param_1 + 0x118) & 0x10000000) != 0) {
          FUN_1400bb140(param_2,0x78);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0) goto LAB_141344859;
  FUN_140070fd0(param_2," (",2);
  acStack_a8[1] = 0;
  if (7 < *(uint *)(param_1 + 0x138)) {
override_jmp_14134474c_case_0:
    pcVar10 = "Semi-Wild";
    goto LAB_141344838;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(uint *)(param_1 + 0x138)) {
  case 0:
    goto override_jmp_14134474c_case_0;
  case 1:
    lVar7 = 7;
    pcVar10 = "Trained";
    break;
  case 2:
    pcVar10 = "-Trained-";
    goto LAB_141344838;
  case 3:
    pcVar10 = "+Trained+";
    goto LAB_141344838;
  case 4:
    pcVar10 = "*Trained*";
LAB_141344838:
    lVar7 = 9;
    break;
  case 5:
    acStack_a8[0] = -0x10;
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140070fd0(param_2,acStack_a8);
    FUN_140070fd0(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 6:
    acStack_a8[0] = '\x0f';
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (acStack_a8[lVar6] != '\0');
    FUN_140070fd0(param_2,acStack_a8);
    FUN_140070fd0(param_2,"Trained",7);
    lVar6 = -1;
    do {
      lVar7 = lVar6 + 1;
      lVar8 = lVar6 + 1;
      lVar6 = lVar7;
    } while (acStack_a8[lVar8] != '\0');
    pcVar10 = acStack_a8;
    break;
  case 7:
    lVar7 = 4;
    pcVar10 = "Tame";
  }
  FUN_140070fd0(param_2,pcVar10,lVar7);
  FUN_140070fd0(param_2,")",1);
LAB_141344859:
  if (0xf < uStack_70) {
    uVar11 = uStack_70 + 1;
    ppppuVar9 = (undefined8 ****)pppuStack_88;
    if (0xfff < uVar11) {
      uVar11 = uStack_70 + 0x28;
      ppppuVar9 = (undefined8 ****)pppuStack_88[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_88 + (-8 - (longlong)ppppuVar9))) {
        _invalid_parameter_noinfo_noreturn();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    workshop_supplier_0x154de20(ppppuVar9,uVar11);
  }
LAB_1413448d1:
  FUN_14154de00(uStack_48 ^ (ulonglong)auStack_c8);
  return;
}


/* classic PE:6aea11a5:0272d000; memorial-race-caste; RVA 0xaba4d0..0xaba693 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_race_caste(short param_1,undefined8 *param_2,char param_3,short param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  param_2[2] = 0;
  uVar5 = (ulonglong)param_1;
  puVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar4 = 0;
  if (param_4 == -1) {
    if (param_3 == '\0') goto LAB_140aba61e;
  }
  else {
    if (param_3 == '\0') {
      if (((-1 < param_1) && (uVar5 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3))) &&
         (-1 < param_4)) {
        lVar2 = *(longlong *)(_DAT_142508de8 + uVar5 * 8);
        lVar3 = *(longlong *)(lVar2 + 0x178);
        if ((ulonglong)(longlong)param_4 < (ulonglong)(*(longlong *)(lVar2 + 0x180) - lVar3 >> 3)) {
          lVar2 = *(longlong *)(lVar3 + (longlong)param_4 * 8);
          puVar4 = (undefined8 *)(lVar2 + 0x20);
          if (param_2 != puVar4) {
            if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
              puVar4 = (undefined8 *)*puVar4;
            }
            FUN_140070e90(param_2,puVar4,*(undefined8 *)(lVar2 + 0x30));
          }
          if (param_2[2] != 0) {
            return;
          }
        }
      }
LAB_140aba61e:
      if (param_1 < 0) {
        return;
      }
      if ((ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3) <= uVar5) {
        return;
      }
      puVar4 = (undefined8 *)(*(longlong *)(_DAT_142508de8 + uVar5 * 8) + 0x20);
      goto LAB_140aba63e;
    }
    if (((-1 < param_1) && (uVar5 < (ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3))) &&
       (-1 < param_4)) {
      lVar2 = *(longlong *)(_DAT_142508de8 + uVar5 * 8);
      lVar3 = *(longlong *)(lVar2 + 0x178);
      if ((ulonglong)(longlong)param_4 < (ulonglong)(*(longlong *)(lVar2 + 0x180) - lVar3 >> 3)) {
        lVar2 = *(longlong *)(lVar3 + (longlong)param_4 * 8);
        puVar4 = (undefined8 *)(lVar2 + 0x40);
        if (param_2 != puVar4) {
          if (0xf < *(ulonglong *)(lVar2 + 0x58)) {
            puVar4 = (undefined8 *)*puVar4;
          }
          FUN_140070e90(param_2,puVar4,*(undefined8 *)(lVar2 + 0x50));
        }
        if (param_2[2] != 0) {
          return;
        }
      }
    }
  }
  if (param_1 < 0) {
    return;
  }
  if ((ulonglong)(_DAT_142508df0 - _DAT_142508de8 >> 3) <= uVar5) {
    return;
  }
  puVar4 = (undefined8 *)(*(longlong *)(_DAT_142508de8 + uVar5 * 8) + 0x40);
LAB_140aba63e:
  if (param_2 != puVar4) {
    puVar1 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_140070e90(param_2,puVar4,*puVar1);
  }
  return;
}


/* classic PE:6aea11a5:0272d000; memorial-unit-role; RVA 0x1342fe0..0x13438be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_unit_role(longlong param_1,char *param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  longlong lVar21;
  short sVar22;
  undefined1 auStack_b8 [32];
  undefined8 *puStack_98;
  undefined1 uStack_90;
  undefined2 uStack_88;
  char cStack_78;
  char cStack_77;
  short sStack_76;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1418b8040 ^ (ulonglong)auStack_b8;
  lVar8 = *(longlong *)(param_1 + 0xd80);
  cStack_77 = param_3;
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
    if (_DAT_1418b8218 - 4U < 2) {
      pcVar13 = (char *)(param_1 + 8);
      goto LAB_14134387c;
    }
    sVar22 = *(short *)(param_1 + 0xa0);
    sStack_76 = sVar22;
    lVar8 = FUN_140b67b90(0x142516038);
    if (lVar8 == 0) {
      lVar9 = 0;
LAB_14134317a:
      uStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0xf;
      pppuStack_60 = (undefined8 ****)0x0;
      if ((*(longlong *)(param_1 + 0xd80) == 0) && (*(char *)(param_1 + 0x838) == '\0')) {
        uStack_88 = 0xfffe;
      }
      else {
        uStack_88 = 0xffff;
      }
      uStack_90 = 1;
      puStack_98 = (undefined8 *)((ulonglong)puStack_98 & 0xffffffffffffff00);
      cVar4 = FUN_141341720(&pppuStack_60,sVar22,*(undefined2 *)(param_1 + 0xa4),
                            *(undefined2 *)(param_1 + 300));
      if ((lVar9 == 0) || (*(short *)(lVar9 + 0xac) == -1)) {
        lVar9 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (lVar9 != 0) {
          puStack_98 = &uStack_70;
          lVar9 = FUN_140c00100(lVar9,0xffffffff,&cStack_78,&uStack_68);
          if ((lVar9 != 0) && (lVar8 != 0)) {
            cVar4 = *(char *)(lVar8 + 6);
            if (cStack_78 == '\0') {
              if (cVar4 == '\0') {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                if (*(longlong *)(lVar9 + 0xe8) != 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0xd8);
                }
              }
              else if (cVar4 == '\x01') {
                if (*(longlong *)(lVar9 + 0x128) == 0) {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
                }
                else {
                  ppppuVar10 = (undefined8 ****)(lVar9 + 0x118);
                }
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x98);
              }
            }
            else if (cVar4 == '\0') {
              if (*(longlong *)(lVar9 + 0x1a8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x198);
              }
            }
            else if (cVar4 == '\x01') {
              if (*(longlong *)(lVar9 + 0x1e8) == 0) {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
              }
              else {
                ppppuVar10 = (undefined8 ****)(lVar9 + 0x1d8);
              }
            }
            else {
              ppppuVar10 = (undefined8 ****)(lVar9 + 0x158);
            }
            if (&pppuStack_60 != ppppuVar10) {
              ppppuVar12 = ppppuVar10 + 2;
              if ((undefined8 ***)0xf < ppppuVar10[3]) {
                ppppuVar10 = (undefined8 ****)*ppppuVar10;
              }
              FUN_140070e90(&pppuStack_60,ppppuVar10,*ppppuVar12);
            }
            if (0 < *(short *)(lVar9 + 0x2c8)) {
              FUN_1409d5070(uStack_68,uStack_70,&pppuStack_60);
            }
            cVar4 = '\0';
          }
        }
        lVar8 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if ((lVar8 != 0) &&
           (sVar7 = FUN_140babea0(lVar8,4,0xffffffff), uVar16 = uStack_48, 0 < sVar7)) {
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140070fd0(&pppuStack_60," Slave",6);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 5) {
            if (0x7fffffffffffffff - (uStack_48 >> 1) < uStack_48) {
              uVar17 = 0x7fffffffffffffff;
            }
            else {
              uVar14 = uStack_48 + (uStack_48 >> 1);
              uVar17 = 0xf;
              if (0xf < uVar14) {
                uVar17 = uVar14;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071d90(uVar17 + 1);
            lStack_50 = 5;
            *(undefined4 *)ppppuVar10 = 0x76616c53;
            *(undefined1 *)((longlong)ppppuVar10 + 4) = 0x65;
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            sVar22 = sStack_76;
            uStack_48 = uVar17;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12)))
                goto LAB_1413435d7;
              }
              workshop_supplier_0x154de20(ppppuVar12,uVar14);
              sVar22 = sStack_76;
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 5;
            workshop_supplier_0x154f5ba(ppppuVar10,"Slave",5);
            *(undefined1 *)((longlong)ppppuVar10 + 5) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
        lVar8 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274);
        if (((lVar8 != 0) && (sVar7 = FUN_140babea0(lVar8,6,0xffffffff), 0 < sVar7)) ||
           ((lVar8 = FUN_140b67b90(0x142516038,*(undefined4 *)(param_1 + 0xc30),param_1 + 0x1274),
            lVar8 != 0 && (sVar7 = FUN_140bad870(lVar8,7,0xffffffff), 0 < sVar7)))) {
          uVar16 = uStack_48;
          if (((ushort)(sVar22 - 0x67U) < 2) && (lStack_50 != 0)) {
            FUN_140070fd0(&pppuStack_60," Prisoner",9);
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          else if (uStack_48 < 8) {
            uVar14 = 0x7fffffffffffffff;
            if (uStack_48 <= 0x7fffffffffffffff - (uStack_48 >> 1)) {
              uVar17 = (uStack_48 >> 1) + uStack_48;
              uVar14 = 0xf;
              if (0xf < uVar17) {
                uVar14 = uVar17;
              }
            }
            ppppuVar10 = (undefined8 ****)FUN_140071d90(uVar14 + 1);
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            uStack_48 = uVar14;
            if (0xf < uVar16) {
              uVar14 = uVar16 + 1;
              ppppuVar12 = (undefined8 ****)pppuStack_60;
              if (0xfff < uVar14) {
                uVar14 = uVar16 + 0x28;
                ppppuVar12 = (undefined8 ****)pppuStack_60[-1];
                if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar12))) {
LAB_1413435d7:
                  _invalid_parameter_noinfo_noreturn();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              workshop_supplier_0x154de20(ppppuVar12,uVar14);
            }
          }
          else {
            ppppuVar10 = &pppuStack_60;
            if (0xf < uStack_48) {
              ppppuVar10 = (undefined8 ****)pppuStack_60;
            }
            lStack_50 = 8;
            *ppppuVar10 = (undefined8 ***)0x72656e6f73697250;
            *(undefined1 *)(ppppuVar10 + 1) = 0;
            ppppuVar10 = (undefined8 ****)pppuStack_60;
          }
          pppuStack_60 = ppppuVar10;
          cVar4 = '\0';
        }
      }
      if ((*(longlong *)(param_1 + 0x90) != 0) && (cStack_77 != '\0')) {
        ppppuVar10 = (undefined8 ****)(param_1 + 0x80);
        if (&pppuStack_60 != ppppuVar10) {
          if (0xf < *(ulonglong *)(param_1 + 0x98)) {
            ppppuVar10 = (undefined8 ****)*ppppuVar10;
          }
          FUN_140070e90(&pppuStack_60,ppppuVar10,*(undefined8 *)(param_1 + 0x90));
        }
        cVar4 = '\0';
      }
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      pcVar13 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pcVar13 = *(char **)param_2;
      }
      *pcVar13 = '\0';
      cVar5 = FUN_141389b60(*(undefined2 *)(param_1 + 0xa4),*(undefined2 *)(param_1 + 300));
      if (((cVar5 == '\0') || (*(int *)(param_1 + 0x3bc) != -1)) ||
         ((*(uint *)(param_1 + 0x110) & 0x4000000) == 0)) {
        if ((*(uint *)(param_1 + 0x11c) & 0x1000) != 0) {
          cVar5 = '\t';
          pcVar13 = "Agitated ";
          goto LAB_1413436f5;
        }
      }
      else {
        if ((((_DAT_1423edb80 - _DAT_1423edb78 & 0xfffffffffffffff8U) == 0) ||
            (*(int *)(param_1 + 0x140) == -1)) ||
           ((lVar8 = FUN_1400bb660(*(int *)(param_1 + 0x140),&DAT_1423edb78), lVar8 == 0 ||
            ((*(int *)(*(longlong *)(lVar8 + 8) + 0x3a8) < 8 ||
             ((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 8) + 0x3a0) + 7) & 0x10) == 0)))))) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        cVar5 = cVar6 + '\x06';
        pcVar13 = "Fierce ";
        if (cVar6 == '\0') {
          pcVar13 = "Stray ";
        }
LAB_1413436f5:
        FUN_140070fd0(param_2,pcVar13,cVar5);
      }
      if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
LAB_14134374d:
        if (*(char *)(param_1 + 0x838) != '\0') {
LAB_141343756:
          if ((*(longlong *)(param_1 + 0x850) == 0) && (*(longlong *)(param_1 + 0x890) != 0)) {
            plVar15 = (longlong *)(param_1 + 0x880);
            if (0xf < *(ulonglong *)(param_1 + 0x898)) {
              plVar15 = (longlong *)*plVar15;
            }
            FUN_140070fd0(param_2,plVar15,*(undefined8 *)(param_1 + 0x890));
            FUN_140070fd0(param_2," ",1);
          }
        }
        ppppuVar10 = &pppuStack_60;
        if (0xf < uStack_48) {
          ppppuVar10 = (undefined8 ****)pppuStack_60;
        }
        FUN_140070fd0(param_2,ppppuVar10,lStack_50);
        if ((*(char *)(param_1 + 0x838) != '\0') && (*(longlong *)(param_1 + 0x850) != 0)) {
          if (*(longlong *)(param_2 + 0x10) != 0) {
            FUN_140070fd0(param_2," ",1);
          }
          plVar15 = (longlong *)(param_1 + 0x840);
          if (0xf < *(ulonglong *)(param_1 + 0x858)) {
            plVar15 = (longlong *)*plVar15;
          }
          FUN_140070fd0(param_2,plVar15,*(undefined8 *)(param_1 + 0x850));
        }
        if (*(longlong *)(param_1 + 0xd80) != 0) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            uVar19 = 6;
            pcVar13 = "Corpse";
          }
          else {
            uVar19 = 7;
            pcVar13 = " Corpse";
          }
          FUN_140070fd0(param_2,pcVar13,uVar19);
        }
      }
      else {
        if (*(char *)(param_1 + 0x838) != '\0') goto LAB_141343756;
        if ((cVar4 == '\0') || (*(longlong *)(param_2 + 0x10) != 0)) {
          FUN_140070fd0(param_2,"Ghostly ",8);
          goto LAB_14134374d;
        }
        FUN_140070e90(param_2,"Ghost",5);
      }
      if (0xf < uStack_48) {
        uVar16 = uStack_48 + 1;
        ppppuVar10 = (undefined8 ****)pppuStack_60;
        if (0xfff < uVar16) {
          uVar16 = uStack_48 + 0x28;
          ppppuVar10 = (undefined8 ****)pppuStack_60[-1];
          if (0x1f < (ulonglong)((longlong)pppuStack_60 + (-8 - (longlong)ppppuVar10))) {
            _invalid_parameter_noinfo_noreturn();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        workshop_supplier_0x154de20(ppppuVar10,uVar16);
      }
      goto LAB_141343897;
    }
    if (*(longlong *)(lVar8 + 0x130) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + 0x58);
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else if (*(int *)(lVar9 + 0x30) == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_140073b30(0x142504068);
      }
    }
    if (lVar9 == 0) goto LAB_14134317a;
    iVar1 = *(int *)(lVar9 + 0x88);
    if (iVar1 == -1) {
LAB_141343161:
      sVar7 = *(short *)(lVar9 + 0xac);
      if (sVar7 != -1) {
        sVar22 = sVar7;
        sStack_76 = sVar7;
      }
      goto LAB_14134317a;
    }
    lVar21 = _DAT_1425160a0 - _DAT_142516098 >> 3;
    if (lVar21 != 0) {
      iVar18 = 0;
      iVar20 = (int)lVar21 + -1;
      if (-1 < iVar20) {
        do {
          iVar11 = iVar20 + iVar18 >> 1;
          lVar21 = *(longlong *)(_DAT_142516098 + (longlong)iVar11 * 8);
          if (*(int *)(lVar21 + 0xe0) == iVar1) goto LAB_14134311e;
          iVar3 = iVar11 + -1;
          if (*(int *)(lVar21 + 0xe0) < iVar1) {
            iVar18 = iVar11 + 1;
            iVar3 = iVar20;
          }
          iVar20 = iVar3;
        } while (iVar18 <= iVar20);
      }
    }
    lVar21 = 0;
LAB_14134311e:
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0xd0) < 1)) goto LAB_141343161;
    if ((**(byte **)(lVar21 + 200) & 4) == 0) {
      if ((**(byte **)(lVar21 + 200) & 8) == 0) goto LAB_141343161;
      uVar19 = 5;
      pcVar13 = "force";
    }
    else {
      uVar19 = 5;
      pcVar13 = "deity";
    }
  }
  else {
    pcVar13 = (char *)(lVar8 + 0x20);
LAB_14134387c:
    if (param_2 == pcVar13) goto LAB_141343897;
    uVar19 = *(undefined8 *)(pcVar13 + 0x10);
    if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
      pcVar13 = *(char **)pcVar13;
    }
  }
  FUN_140070e90(param_2,pcVar13,uVar19);
LAB_141343897:
  FUN_14154de00(uStack_40 ^ (ulonglong)auStack_b8);
  return;
}


/* classic PE:6aea11a5:0272d000; memorial-choice-refresh; RVA 0x8d8d50..0x8d9342 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_memorial_choice_refresh(longlong param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_58 [32];
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_1418b8040 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x48) == 0xd3) {
    iVar11 = *(int *)(param_1 + 0x80);
    lVar13 = _DAT_1425160a0 - _DAT_142516098 >> 3;
    if ((lVar13 != 0) && (iVar11 != -1)) {
      iVar9 = 0;
      iVar12 = (int)lVar13 + -1;
      if (-1 < iVar12) {
        do {
          iVar7 = iVar12 + iVar9 >> 1;
          lVar13 = *(longlong *)(_DAT_142516098 + (longlong)iVar7 * 8);
          if (*(int *)(lVar13 + 0xe0) == iVar11) {
            if (lVar13 != 0) {
              iVar11 = *(int *)(lVar13 + 0xd8);
              iVar12 = (int)(_DAT_142401438 - _DAT_142401430 >> 3);
              if ((iVar12 != 0) && (iVar11 != -1)) {
                iVar9 = 0;
                iVar12 = iVar12 + -1;
                if (iVar12 < 0) goto LAB_1408d8e6a;
                goto LAB_1408d8e40;
              }
            }
            break;
          }
          iVar4 = iVar7 + -1;
          if (*(int *)(lVar13 + 0xe0) < iVar11) {
            iVar9 = iVar7 + 1;
            iVar4 = iVar12;
          }
          iVar12 = iVar4;
        } while (iVar9 <= iVar12);
      }
    }
  }
  goto LAB_1408d931c;
  while( true ) {
    iVar4 = iVar7 + -1;
    if (*(int *)(lVar13 + 0x130) < iVar11) {
      iVar4 = iVar12;
      iVar9 = iVar7 + 1;
    }
    iVar12 = iVar4;
    if (iVar4 < iVar9) break;
LAB_1408d8e40:
    iVar7 = iVar9 + iVar12 >> 1;
    lVar13 = *(longlong *)(_DAT_142401430 + (longlong)iVar7 * 8);
    if (*(int *)(lVar13 + 0x130) == iVar11) goto LAB_1408d8e6c;
  }
LAB_1408d8e6a:
  lVar13 = 0;
LAB_1408d8e6c:
  if (lVar13 == 0) goto LAB_1408d931c;
  iVar11 = 0;
  lVar5 = FUN_1400bb380(*(undefined4 *)(lVar13 + 0x130),0x1423b6388);
  plVar6 = _DAT_142401db8;
  if (lVar5 == 0) {
LAB_1408d8fb4:
    _DAT_1426667fc = 0x1010006;
    _DAT_1426667f4 = param_3 + 2;
    pcStack_38 = (char *)0x0;
    uStack_30 = 0;
    _DAT_1426667f8 = param_2;
    pcStack_38 = (char *)FUN_140071d90(0x20);
    uStack_28 = 0x11;
    uStack_20 = 0x1f;
    builtin_strncpy(pcStack_38,"No slabs engraved",0x12);
    FUN_140af0220(0x142666770,&pcStack_38);
    if (0xf < uStack_20) {
      uVar10 = uStack_20 + 1;
      pcVar8 = pcStack_38;
      if (0xfff < uVar10) {
        uVar10 = uStack_20 + 0x28;
        pcVar8 = *(char **)(pcStack_38 + -8);
        if ((char *)0x1f < pcStack_38 + (-8 - (longlong)pcVar8)) goto LAB_1408d92d1;
      }
LAB_1408d9052:
      workshop_supplier_0x154de20(pcVar8,uVar10);
    }
  }
  else {
    for (; plVar6 < _DAT_142401dc0; plVar6 = plVar6 + 1) {
      if ((*(short *)(*plVar6 + 0x10c) == 0) &&
         (*(int *)(*plVar6 + 0x108) == *(int *)(lVar13 + 0xc30))) {
        iVar11 = iVar11 + 1;
      }
    }
    if (iVar11 < 1) goto LAB_1408d8fb4;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0xf;
    pcStack_38 = (char *)0x0;
    if (iVar11 < 2) {
      uStack_28 = 0xd;
      pcStack_38 = (char *)0x676e652062616c53;
      uStack_30 = 0x6465766172;
    }
    else {
      FUN_140542fb0(iVar11,&pcStack_38);
      FUN_140070fd0(&pcStack_38," slabs engraved",0xf);
    }
    _DAT_1426667fc = 0x1000002;
    _DAT_1426667f4 = param_3 + 2;
    _DAT_1426667f8 = param_2;
    FUN_140af0220(0x142666770,&pcStack_38);
    if (0xf < uStack_20) {
      uVar10 = uStack_20 + 1;
      pcVar8 = pcStack_38;
      if (0xfff < uVar10) {
        uVar10 = uStack_20 + 0x28;
        pcVar8 = *(char **)(pcStack_38 + -8);
        if ((char *)0x1f < pcStack_38 + (-8 - (longlong)*(char **)(pcStack_38 + -8))) {
          _invalid_parameter_noinfo_noreturn();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      goto LAB_1408d9052;
    }
  }
  param_3 = param_3 + 2;
  param_2 = param_2 + 1;
  cVar2 = FUN_1413e8e20(lVar13);
  cVar3 = FUN_1413e8ee0(lVar13);
  pcStack_38 = (char *)0x0;
  uStack_30 = 0;
  _DAT_1426667f4 = param_3;
  _DAT_1426667f8 = param_2;
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      if (*(longlong *)(lVar13 + 0x380) == 0) {
        _DAT_1426667fc = 0x1010006;
        pcStack_38 = (char *)FUN_140071d90(0x20);
        uStack_28 = 0x10;
        uStack_20 = 0x1f;
        builtin_strncpy(pcStack_38,"Not memorialized",0x11);
        FUN_140af0220(0x142666770,&pcStack_38);
      }
      else {
        if ((*(byte *)(*(longlong *)(lVar13 + 0x380) + 0x1c) & 1) != 0) {
          _DAT_1426667fc = 0x1010004;
          uStack_28 = 5;
          uStack_20 = 0xf;
          pcStack_38 = (char *)0x74736f6847;
          FUN_140af0220(0x142666770,&pcStack_38);
          goto LAB_1408d90ec;
        }
        _DAT_1426667fc = 0x1010006;
        pcStack_38 = (char *)FUN_140071d90(0x20);
        uStack_28 = 0x10;
        uStack_20 = 0x1f;
        builtin_strncpy(pcStack_38,"Not memorialized",0x11);
        FUN_140af0220(0x142666770,&pcStack_38);
      }
LAB_1408d9313:
      FUN_140070e10(&pcStack_38);
      goto LAB_1408d931c;
    }
    _DAT_1426667fc = 0x1010002;
    uStack_28 = 8;
    uStack_20 = 0xf;
    pcStack_38 = (char *)0x6465626d6f746e45;
    uStack_30 = 0;
    FUN_140af0220(0x142666770,&pcStack_38);
LAB_1408d90ec:
    if (uStack_20 < 0x10) goto LAB_1408d931c;
    if (0xfff < uStack_20 + 1) {
      pcVar8 = *(char **)(pcStack_38 + -8);
      lVar13 = (longlong)pcStack_38 - (longlong)pcVar8;
joined_r0x0001408d92cb:
      uVar10 = uStack_20 + 0x28;
      if (0x1f < lVar13 - 8U) {
LAB_1408d92d1:
        _invalid_parameter_noinfo_noreturn(pcVar8,uVar10);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    _DAT_1426667fc = 0x1010002;
    if (cVar3 == '\0') {
      uStack_28 = 0xc;
      uStack_20 = 0xf;
      pcStack_38 = (char *)0x6c6169726f6d654d;
      uStack_30 = 0x64657a69;
      FUN_140af0220(0x142666770,&pcStack_38);
      goto LAB_1408d9313;
    }
    pcStack_38 = (char *)FUN_140071d90(0x20);
    uStack_28 = 0x19;
    uStack_20 = 0x1f;
    builtin_strncpy(pcStack_38,"Entombed and memorialized",0x1a);
    FUN_140af0220(0x142666770,&pcStack_38);
    if (uStack_20 < 0x10) goto LAB_1408d931c;
    if (0xfff < uStack_20 + 1) {
      pcVar8 = *(char **)(pcStack_38 + -8);
      lVar13 = (longlong)pcStack_38 - (longlong)pcVar8;
      goto joined_r0x0001408d92cb;
    }
  }
  workshop_supplier_0x154de20();
LAB_1408d931c:
  FUN_14154de00(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


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


/* classic PE:6aea11a5:0272d000; string-length-error; RVA 0x66e50..0x66e62 */

void workshop_string_length_error(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* classic PE:6aea11a5:0272d000; material-caption; RVA 0x14e58e0..0x14e5d39 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_material_caption
               (undefined8 param_1,undefined8 *param_2,short param_3,int param_4,uint param_5,
               char param_6,short param_7)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_1418b8040 ^ (ulonglong)auStack_98;
  uVar9 = 0;
  param_2[2] = 0;
  puVar3 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar3 = 0;
  if (param_4 == -1) {
    if ((param_5 & 1) != 0) {
      FUN_140070fd0(param_2,"plant",5);
      goto LAB_1414e5d1b;
    }
    if ((param_5 >> 0xc & 1) != 0) {
      FUN_140070fd0(param_2,"yarn",4);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 0x82) != 0) {
      uVar12 = 6;
      if (param_6 == '\0') {
        uVar12 = 4;
      }
      pcVar7 = "wooden";
      if (param_6 == '\0') {
        pcVar7 = "wood";
      }
      FUN_140070fd0(param_2,pcVar7,uVar12);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 4) != 0) {
      FUN_140070fd0(param_2,"cloth",5);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 8) != 0) {
      FUN_140070fd0(param_2,"silk",4);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 0x20) != 0) {
      FUN_140070fd0(param_2,"bone",4);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 0x10) != 0) {
      FUN_140070fd0(param_2,"leather",7);
      goto LAB_1414e5d1b;
    }
    if ((param_5 & 0x40) != 0) {
      FUN_140070fd0(param_2,"shell",5);
      goto LAB_1414e5d1b;
    }
    if ((param_5 >> 8 & 1) != 0) {
      FUN_140070fd0(param_2,"soap",4);
      goto LAB_1414e5d1b;
    }
    if ((param_5 >> 9 & 1) != 0) {
      FUN_140070fd0(param_2,"ivory/tooth",0xb);
      goto LAB_1414e5d1b;
    }
    if ((param_5 >> 10 & 1) != 0) {
      FUN_140070fd0(param_2,"horn",4);
      goto LAB_1414e5d1b;
    }
    if ((param_5 >> 0xb & 1) != 0) {
      FUN_140070fd0(param_2,"pearl",5);
      goto LAB_1414e5d1b;
    }
  }
  if (((((ushort)(param_3 - 0xdbU) < 200) &&
       (lVar14 = _DAT_1425160a0 - _DAT_142516098 >> 3, lVar14 != 0)) && (param_4 != -1)) &&
     (iVar13 = (int)lVar14 + -1, uVar8 = uVar9, -1 < iVar13)) {
    do {
      iVar5 = iVar13 + (int)uVar8 >> 1;
      lVar14 = *(longlong *)(_DAT_142516098 + (longlong)iVar5 * 8);
      if (*(int *)(lVar14 + 0xe0) == param_4) {
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0xaa) != '\0')) {
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = 0xf;
          pppuStack_78 = (undefined8 ****)0x0;
          if (((*(longlong *)(lVar14 + 0x130) == 0) ||
              ((lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x130) + 0x58), lVar4 == 0 ||
               (*(int *)(lVar4 + 0x30) == -1)))) || (lVar4 = FUN_140073b30(0x142504068), lVar4 == 0)
             ) {
            lVar14 = lVar14 + 0x38;
          }
          else {
            lVar14 = FUN_140c4f000(lVar4);
          }
          uVar8 = 0xf;
          if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
            FUN_140aaafe0(lVar14,&pppuStack_78,1,0);
            uVar8 = uStack_60;
            uVar9 = uStack_68;
          }
          ppppuVar6 = &pppuStack_78;
          if (0xf < uVar8) {
            ppppuVar6 = (undefined8 ****)pppuStack_78;
          }
          FUN_140070fd0(param_2,ppppuVar6,uVar9);
          FUN_140070fd0(param_2,"\'s ",3);
          if (0xf < uStack_60) {
            uVar9 = uStack_60 + 1;
            ppppuVar6 = (undefined8 ****)pppuStack_78;
            if (0xfff < uVar9) {
              uVar9 = uStack_60 + 0x28;
              ppppuVar6 = (undefined8 ****)pppuStack_78[-1];
              if (0x1f < (ulonglong)((longlong)pppuStack_78 + (-8 - (longlong)ppppuVar6))) {
                _invalid_parameter_noinfo_noreturn();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            workshop_supplier_0x154de20(ppppuVar6,uVar9);
          }
        }
        break;
      }
      iVar2 = iVar5 + -1;
      if (*(int *)(lVar14 + 0xe0) < param_4) {
        uVar8 = (ulonglong)(iVar5 + 1);
        iVar2 = iVar13;
      }
      iVar13 = iVar2;
    } while ((int)uVar8 <= iVar13);
  }
  lVar14 = FUN_1414c1d30(param_1,param_3,param_4);
  if (lVar14 == 0) {
    FUN_140070fd0(param_2,"unknown material",0x10);
  }
  else {
    if (*(longlong *)(lVar14 + 0x530) != 0) {
      plVar10 = (longlong *)(lVar14 + 0x520);
      if (0xf < *(ulonglong *)(lVar14 + 0x538)) {
        plVar10 = (longlong *)*plVar10;
      }
      FUN_140070fd0(param_2,plVar10,*(undefined8 *)(lVar14 + 0x530));
      FUN_140070fd0(param_2," ",1);
    }
    lVar4 = (longlong)param_7 * 0x20 + 0x178;
    if (param_6 == '\0') {
      lVar4 = (longlong)param_7 * 0x20 + 0xb8;
    }
    puVar11 = (undefined8 *)(lVar4 + lVar14);
    puVar3 = puVar11 + 2;
    if (0xf < (ulonglong)puVar11[3]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    FUN_140070fd0(param_2,puVar11,*puVar3);
  }
LAB_1414e5d1b:
  FUN_14154de00(uStack_58 ^ (ulonglong)auStack_98);
  return;
}


/* classic PE:6aea11a5:0272d000; queued-job-render-loop; RVA 0x1874b4..0x187e0b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void workshop_queued_job_render_loop(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  int in_stack_00000088;
  int in_stack_000000b0;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  longlong in_stack_000000d0;
  undefined8 in_stack_00000140;
  undefined8 in_stack_000001f0;
  int iVar10;
  int in_stack_000005a4;
  undefined1 in_stack_0000074a;
  int in_stack_00000c68;
  
  puVar5 = &stack0x0000074a;
  for (lVar9 = 1; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined1 *)
           workshop_supplier_0x703e0(&stack0x000008a8,&stack0x000011a6,&stack0x00002f18);
  cVar1 = workshop_supplier_0x66d70(*puVar5,in_stack_0000074a);
  if (cVar1 != '\0') {
    workshop_supplier_0xbc6f0(0x142666770,3,0,1);
    workshop_supplier_0xbc6e0(0x142666770,in_stack_000001f0._4_4_ + 1,in_stack_00000088 + 2);
    puVar6 = (undefined8 *)workshop_supplier_0x703d0(&stack0x000008a8);
    workshop_job_object_caption(*puVar6,&stack0x00003900);
    uVar7 = workshop_supplier_0x708f0(&stack0x00003900);
    if ((ulonglong)(longlong)((in_stack_000000b0 - in_stack_00000088) + -0x16) <= uVar7) {
      in_stack_00000088 = in_stack_000000b0 - in_stack_00000088;
      iVar2 = in_stack_00000088 + -0x17;
      if (-1 < iVar2) {
        workshop_supplier_0xe27f0(&stack0x00003900,(longlong)iVar2,0);
      }
      if (3 < iVar2) {
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcb70(&stack0x00003900,(longlong)(in_stack_00000088 + -0x1a));
        *puVar5 = 0x2e;
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcb70(&stack0x00003900,(longlong)(in_stack_00000088 + -0x19));
        *puVar5 = 0x2e;
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcb70(&stack0x00003900,(longlong)(in_stack_00000088 + -0x18));
        *puVar5 = 0x2e;
      }
    }
    FUN_140af0220(0x142666770,&stack0x00003900,0,0);
    for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {
      iVar3 = in_stack_000000b0 + iVar2 * 3;
      iVar4 = iVar3 + -0x17;
      if ((((iVar4 <= in_stack_000000c8) && (in_stack_000000c8 < iVar3 + -0x14)) &&
          (in_stack_000001f0._4_4_ <= in_stack_000000c0._4_4_)) &&
         (in_stack_000000c0._4_4_ < in_stack_000001f0._4_4_ + 3)) {
        switch(iVar2) {
        case 0:
          puVar6 = (undefined8 *)workshop_supplier_0x703d0(&stack0x000008a8);
          cVar1 = FUN_140d17360(*puVar6);
          if (cVar1 != '\0') {
            _DAT_1418c53b8 = 0x12f;
            _DAT_1418c53dc = 0;
            _DAT_1418c53e0 = 0;
            DAT_1418c53d8 = 1;
          }
          break;
        case 1:
          plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 0x200) == 0) {
            plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
            if ((*(uint *)(*plVar8 + 0x2c) & 1) == 0) {
              _DAT_1418c53b8 = 0x132;
            }
            else {
              _DAT_1418c53b8 = 0x131;
            }
          }
          else {
            _DAT_1418c53b8 = 0x130;
          }
          _DAT_1418c53dc = 0;
          _DAT_1418c53e0 = 0;
          DAT_1418c53d8 = 1;
          break;
        case 2:
          plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 0x40000) == 0) {
            _DAT_1418c53b8 = 0x134;
          }
          else {
            _DAT_1418c53b8 = 0x133;
          }
          _DAT_1418c53dc = 0;
          _DAT_1418c53e0 = 0;
          DAT_1418c53d8 = 1;
          break;
        case 3:
          uVar7 = workshop_supplier_0x70410(in_stack_000000d0 + 0x58);
          if ((1 < uVar7) && (0 < in_stack_00000c68)) {
            _DAT_1418c53b8 = 0x135;
            _DAT_1418c53dc = 0;
            _DAT_1418c53e0 = 0;
            DAT_1418c53d8 = 1;
          }
          break;
        case 4:
          puVar6 = (undefined8 *)workshop_supplier_0x703d0(&stack0x000008a8);
          cVar1 = FUN_140d2aa00(*puVar6);
          if (cVar1 != '\0') {
            _DAT_1418c53b8 = 0x136;
            _DAT_1418c53dc = 0;
            _DAT_1418c53e0 = 0;
            DAT_1418c53d8 = 1;
          }
          break;
        case 5:
          plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 2) == 0) {
            _DAT_1418c53b8 = 0x138;
          }
          else {
            _DAT_1418c53b8 = 0x137;
          }
          _DAT_1418c53dc = 0;
          _DAT_1418c53e0 = 0;
          DAT_1418c53d8 = 1;
          break;
        case 6:
          _DAT_1418c53b8 = 0x139;
          _DAT_1418c53dc = 0;
          _DAT_1418c53e0 = 0;
          DAT_1418c53d8 = 1;
        }
      }
      for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        if ((in_stack_00000140._4_4_ <= in_stack_000001f0._4_4_ + iVar3) &&
           (in_stack_000001f0._4_4_ + iVar3 <= in_stack_000005a4)) {
          for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
            workshop_supplier_0xbc6e0(0x142666770,in_stack_000001f0._4_4_ + iVar3,iVar4 + iVar10);
            switch(iVar2) {
            case 0:
              puVar6 = (undefined8 *)workshop_supplier_0x703d0(&stack0x000008a8);
              cVar1 = FUN_140d17360(*puVar6);
              if (cVar1 != '\0') {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426717a4 + (longlong)iVar3 * 4),0);
              }
              break;
            case 1:
              plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 0x200) == 0) {
                plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
                if ((*(uint *)(*plVar8 + 0x2c) & 1) == 0) {
                  workshop_supplier_0xaf19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar10 * 0xc + 0x142671684 + (longlong)iVar3 * 4),0);
                }
                else {
                  workshop_supplier_0xaf19c0
                            (0x142666770,
                             *(undefined4 *)
                              ((longlong)iVar10 * 0xc + 0x1426716a8 + (longlong)iVar3 * 4),0);
                }
              }
              else {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426717c8 + (longlong)iVar3 * 4),0);
              }
              break;
            case 2:
              plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 0x40000) == 0) {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426716cc + (longlong)iVar3 * 4),0);
              }
              else {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426716f0 + (longlong)iVar3 * 4),0);
              }
              break;
            case 3:
              uVar7 = workshop_supplier_0x70410(in_stack_000000d0 + 0x58);
              if ((1 < uVar7) && (0 < in_stack_00000c68)) {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x14267175c + (longlong)iVar3 * 4),0);
              }
              break;
            case 4:
              puVar6 = (undefined8 *)workshop_supplier_0x703d0(&stack0x000008a8);
              cVar1 = FUN_140d2aa00(*puVar6);
              if (cVar1 != '\0') {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142671348 + (longlong)iVar3 * 4),0);
              }
              break;
            case 5:
              plVar8 = (longlong *)workshop_supplier_0x703d0(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 2) == 0) {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142671714 + (longlong)iVar3 * 4),0);
              }
              else {
                workshop_supplier_0xaf19c0
                          (0x142666770,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142671738 + (longlong)iVar3 * 4),0);
              }
              break;
            case 6:
              workshop_supplier_0xaf19c0
                        (0x142666770,
                         *(undefined4 *)((longlong)iVar10 * 0xc + 0x142671780 + (longlong)iVar3 * 4)
                         ,0);
            }
          }
        }
      }
    }
    workshop_supplier_0x187497();
    return;
  }
  workshop_region_exit_140187e0b();
  return;
}


