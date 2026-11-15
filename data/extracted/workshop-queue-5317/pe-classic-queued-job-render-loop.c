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

