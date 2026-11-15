/* reference PE:6aea05a1:02734000; register-timbre-choice; RVA 0xdecaa0..0xdecb5c */

/* WARNING: Removing unreachable block (ram,0x000140decafd) */
/* WARNING: Removing unreachable block (ram,0x000140decb24) */
/* WARNING: Removing unreachable block (ram,0x000140decb38) */
/* WARNING: Removing unreachable block (ram,0x000140decb11) */
/* WARNING: Removing unreachable block (ram,0x000140decae9) */

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
      switch((&UNK_140decb70)[(int)uVar1]) {
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


