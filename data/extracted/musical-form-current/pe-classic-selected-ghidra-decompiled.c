/* classic PE:6aea11a5:0272d000; register-timbre-choice; RVA 0xde77f0..0xde78ac */

/* WARNING: Removing unreachable block (ram,0x000140de784d) */
/* WARNING: Removing unreachable block (ram,0x000140de7874) */
/* WARNING: Removing unreachable block (ram,0x000140de7888) */
/* WARNING: Removing unreachable block (ram,0x000140de7861) */
/* WARNING: Removing unreachable block (ram,0x000140de7839) */

uint load_register_timbre_choice(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(param_1 + 8);
  uVar3 = 0xffffffff;
  while (puVar2 < *(uint **)(param_1 + 0x10)) {
    uVar1 = *puVar2;
    if (uVar1 < 0x3f) {
      uVar3 = uVar1;
                    /* WARNING: Switch is manually overridden */
      switch((&UNK_140de78c0)[(int)uVar1]) {
      case 0:
        puVar2 = puVar2 + 1;
        break;
      case 1:
        puVar2 = puVar2 + 1;
        break;
      case 2:
        puVar2 = puVar2 + 1;
        break;
      case 3:
        puVar2 = puVar2 + 1;
        break;
      case 4:
        puVar2 = puVar2 + 1;
      }
    }
    else {
      puVar2 = puVar2 + 1;
    }
  }
  return uVar3;
}


