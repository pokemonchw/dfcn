/* reference PE:6aea05a1:02734000; queued-job-render-loop; RVA 0x187524..0x187e7b */

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
           workshop_supplier_0x70450(&stack0x000008a8,&stack0x000011a6,&stack0x00002f18);
  cVar1 = workshop_supplier_0x66de0(*puVar5,in_stack_0000074a);
  if (cVar1 != '\0') {
    workshop_supplier_0xbc760(0x14266c870,3,0,1);
    workshop_supplier_0xbc750(0x14266c870,in_stack_000001f0._4_4_ + 1,in_stack_00000088 + 2);
    puVar6 = (undefined8 *)workshop_supplier_0x70440(&stack0x000008a8);
    workshop_job_object_caption(*puVar6,&stack0x00003900);
    uVar7 = workshop_supplier_0x70960(&stack0x00003900);
    if ((ulonglong)(longlong)((in_stack_000000b0 - in_stack_00000088) + -0x16) <= uVar7) {
      in_stack_00000088 = in_stack_000000b0 - in_stack_00000088;
      iVar2 = in_stack_00000088 + -0x17;
      if (-1 < iVar2) {
        workshop_supplier_0xe2860(&stack0x00003900,(longlong)iVar2,0);
      }
      if (3 < iVar2) {
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcbe0(&stack0x00003900,(longlong)(in_stack_00000088 + -0x1a));
        *puVar5 = 0x2e;
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcbe0(&stack0x00003900,(longlong)(in_stack_00000088 + -0x19));
        *puVar5 = 0x2e;
        puVar5 = (undefined1 *)
                 workshop_supplier_0xfcbe0(&stack0x00003900,(longlong)(in_stack_00000088 + -0x18));
        *puVar5 = 0x2e;
      }
    }
    FUN_140af3400(0x14266c870,&stack0x00003900,0,0);
    for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {
      iVar3 = in_stack_000000b0 + iVar2 * 3;
      iVar4 = iVar3 + -0x17;
      if ((((iVar4 <= in_stack_000000c8) && (in_stack_000000c8 < iVar3 + -0x14)) &&
          (in_stack_000001f0._4_4_ <= in_stack_000000c0._4_4_)) &&
         (in_stack_000000c0._4_4_ < in_stack_000001f0._4_4_ + 3)) {
        switch(iVar2) {
        case 0:
          puVar6 = (undefined8 *)workshop_supplier_0x70440(&stack0x000008a8);
          cVar1 = FUN_140d1a540(*puVar6);
          if (cVar1 != '\0') {
            _DAT_1418cb3e8 = 0x12f;
            _DAT_1418cb40c = 0;
            _DAT_1418cb410 = 0;
            DAT_1418cb408 = 1;
          }
          break;
        case 1:
          plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 0x200) == 0) {
            plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
            if ((*(uint *)(*plVar8 + 0x2c) & 1) == 0) {
              _DAT_1418cb3e8 = 0x132;
            }
            else {
              _DAT_1418cb3e8 = 0x131;
            }
          }
          else {
            _DAT_1418cb3e8 = 0x130;
          }
          _DAT_1418cb40c = 0;
          _DAT_1418cb410 = 0;
          DAT_1418cb408 = 1;
          break;
        case 2:
          plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 0x40000) == 0) {
            _DAT_1418cb3e8 = 0x134;
          }
          else {
            _DAT_1418cb3e8 = 0x133;
          }
          _DAT_1418cb40c = 0;
          _DAT_1418cb410 = 0;
          DAT_1418cb408 = 1;
          break;
        case 3:
          uVar7 = workshop_supplier_0x70480(in_stack_000000d0 + 0x58);
          if ((1 < uVar7) && (0 < in_stack_00000c68)) {
            _DAT_1418cb3e8 = 0x135;
            _DAT_1418cb40c = 0;
            _DAT_1418cb410 = 0;
            DAT_1418cb408 = 1;
          }
          break;
        case 4:
          puVar6 = (undefined8 *)workshop_supplier_0x70440(&stack0x000008a8);
          cVar1 = FUN_140d2dbe0(*puVar6);
          if (cVar1 != '\0') {
            _DAT_1418cb3e8 = 0x136;
            _DAT_1418cb40c = 0;
            _DAT_1418cb410 = 0;
            DAT_1418cb408 = 1;
          }
          break;
        case 5:
          plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
          if ((*(uint *)(*plVar8 + 0x2c) & 2) == 0) {
            _DAT_1418cb3e8 = 0x138;
          }
          else {
            _DAT_1418cb3e8 = 0x137;
          }
          _DAT_1418cb40c = 0;
          _DAT_1418cb410 = 0;
          DAT_1418cb408 = 1;
          break;
        case 6:
          _DAT_1418cb3e8 = 0x139;
          _DAT_1418cb40c = 0;
          _DAT_1418cb410 = 0;
          DAT_1418cb408 = 1;
        }
      }
      for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        if ((in_stack_00000140._4_4_ <= in_stack_000001f0._4_4_ + iVar3) &&
           (in_stack_000001f0._4_4_ + iVar3 <= in_stack_000005a4)) {
          for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
            workshop_supplier_0xbc750(0x14266c870,in_stack_000001f0._4_4_ + iVar3,iVar4 + iVar10);
            switch(iVar2) {
            case 0:
              puVar6 = (undefined8 *)workshop_supplier_0x70440(&stack0x000008a8);
              cVar1 = FUN_140d1a540(*puVar6);
              if (cVar1 != '\0') {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426778a4 + (longlong)iVar3 * 4),0);
              }
              break;
            case 1:
              plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 0x200) == 0) {
                plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
                if ((*(uint *)(*plVar8 + 0x2c) & 1) == 0) {
                  workshop_supplier_0xaf4ba0
                            (0x14266c870,
                             *(undefined4 *)
                              ((longlong)iVar10 * 0xc + 0x142677784 + (longlong)iVar3 * 4),0);
                }
                else {
                  workshop_supplier_0xaf4ba0
                            (0x14266c870,
                             *(undefined4 *)
                              ((longlong)iVar10 * 0xc + 0x1426777a8 + (longlong)iVar3 * 4),0);
                }
              }
              else {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426778c8 + (longlong)iVar3 * 4),0);
              }
              break;
            case 2:
              plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 0x40000) == 0) {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426777cc + (longlong)iVar3 * 4),0);
              }
              else {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x1426777f0 + (longlong)iVar3 * 4),0);
              }
              break;
            case 3:
              uVar7 = workshop_supplier_0x70480(in_stack_000000d0 + 0x58);
              if ((1 < uVar7) && (0 < in_stack_00000c68)) {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x14267785c + (longlong)iVar3 * 4),0);
              }
              break;
            case 4:
              puVar6 = (undefined8 *)workshop_supplier_0x70440(&stack0x000008a8);
              cVar1 = FUN_140d2dbe0(*puVar6);
              if (cVar1 != '\0') {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142677448 + (longlong)iVar3 * 4),0);
              }
              break;
            case 5:
              plVar8 = (longlong *)workshop_supplier_0x70440(&stack0x000008a8);
              if ((*(uint *)(*plVar8 + 0x2c) & 2) == 0) {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142677814 + (longlong)iVar3 * 4),0);
              }
              else {
                workshop_supplier_0xaf4ba0
                          (0x14266c870,
                           *(undefined4 *)
                            ((longlong)iVar10 * 0xc + 0x142677838 + (longlong)iVar3 * 4),0);
              }
              break;
            case 6:
              workshop_supplier_0xaf4ba0
                        (0x14266c870,
                         *(undefined4 *)((longlong)iVar10 * 0xc + 0x142677880 + (longlong)iVar3 * 4)
                         ,0);
            }
          }
        }
      }
    }
    workshop_supplier_0x187507();
    return;
  }
  workshop_region_exit_140187e7b();
  return;
}

