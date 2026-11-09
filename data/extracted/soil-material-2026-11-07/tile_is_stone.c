/* Actual Ghidra output; researcher-assigned name. VA 14006bae0..14006bb6a; see image.txt for input identity. */

/* WARNING: Switch with 1 destination removed at 0x00014006bb62 : 14 cases all go to same
   destination */

ulonglong tile_is_stone(ushort param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(ulonglong)param_1;
  uVar1 = (uint)param_1;
  if (param_1 < 0x130) {
    if (param_1 != 0x12f) {
      pcVar2 = (char *)0x0;
      switch(uVar1 - 0x2b) {
      case 0:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x16:
      case 0x24:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0xac:
      case 0xbe:
        break;
      default:
        goto LAB_14006bb67;
      }
    }
  }
  else if (uVar1 < 0x25e) {
    if (uVar1 != 0x25d) {
      pcVar2 = (char *)0x0;
      switch(uVar1 - 0x130) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x5e:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
      case 0xe0:
      case 0xe1:
        break;
      default:
        goto LAB_14006bb67;
      }
    }
  }
  else {
    uVar1 = uVar1 - 0x25e;
    pcVar2 = (char *)(ulonglong)uVar1;
    if (0xd < uVar1) {
LAB_14006bb67:
      return (ulonglong)pcVar2 & 0xffffffffffffff00;
    }
    pcVar2 = IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&UNK_14006bd20 + (longlong)(int)uVar1 * 4);
  }
  return CONCAT71((int7)((ulonglong)pcVar2 >> 8),1);
}

