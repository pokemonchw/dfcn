/* Actual Ghidra output, research name; VA 0x140ecc5e0..0x140ecc6b9. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void projectile_update_all(void)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = _DAT_142410380;
  if (_DAT_142410380 != (longlong *)0x0) {
    do {
      plVar4 = (longlong *)*plVar5;
      if ((*(byte *)(plVar4 + 9) & 0x20) == 0) {
        cVar3 = (**(code **)(*plVar4 + 0x10))();
        if (cVar3 != '\0') {
          plVar4 = (longlong *)*plVar5;
          goto LAB_140ecc61a;
        }
        plVar5 = (longlong *)plVar5[2];
      }
      else {
LAB_140ecc61a:
        plVar5 = (longlong *)plVar5[2];
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x40))();
        }
      }
      plVar4 = _DAT_142410380;
    } while (plVar5 != (longlong *)0x0);
    for (; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[2]) {
      lVar2 = *plVar4;
      if ((*(uint *)(lVar2 + 0x48) & 0x100) != 0) {
        *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + *(int *)(lVar2 + 0x8c);
        piVar1 = (int *)(*plVar4 + 0x84);
        *piVar1 = *piVar1 + *(int *)(*plVar4 + 0x90);
        piVar1 = (int *)(*plVar4 + 0x88);
        *piVar1 = *piVar1 + *(int *)(*plVar4 + 0x94);
        *(undefined4 *)(*plVar4 + 0x8c) = 0;
        *(undefined4 *)(*plVar4 + 0x90) = 0;
        *(undefined4 *)(*plVar4 + 0x94) = 0;
      }
    }
  }
  return;
}

