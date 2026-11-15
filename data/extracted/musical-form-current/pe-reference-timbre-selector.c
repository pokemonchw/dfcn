/* reference PE:6aea05a1:02734000; timbre-selector; RVA 0x796510..0x796a60 */

void load_timbre_selector(uint param_1,undefined8 param_2)

{
  if (param_1 < 0x3f) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      FUN_140071040(param_2,"clear",5);
      return;
    case 1:
      FUN_140071040(param_2,"noisy",5);
      return;
    case 2:
      FUN_140071040(param_2,"full",4);
      return;
    case 3:
      FUN_140071040(param_2,"thin",4);
      return;
    case 4:
      FUN_140071040(param_2,"round",5);
      return;
    case 5:
      FUN_140071040(param_2,"sharp",5);
      return;
    case 6:
      FUN_140071040(param_2,"smooth",6);
      return;
    case 7:
      FUN_140071040(param_2,"choppy",6);
      return;
    case 8:
      FUN_140071040(param_2,"steady",6);
      return;
    case 9:
      FUN_140071040(param_2,"evolving",8);
      return;
    case 10:
      FUN_140071040(param_2,"strong",6);
      return;
    case 0xb:
      FUN_140071040(param_2,"delicate",8);
      return;
    case 0xc:
      FUN_140071040(param_2,"bright",6);
      return;
    case 0xd:
      FUN_140071040(param_2,"graceful",8);
      return;
    case 0xe:
      FUN_140071040(param_2,"sparse",6);
      return;
    case 0xf:
      FUN_140071040(param_2,"breathy",7);
      return;
    case 0x10:
      FUN_140071040(param_2,"strained",8);
      return;
    case 0x11:
      FUN_140071040(param_2,"broad",5);
      return;
    case 0x12:
      FUN_140071040(param_2,"light",5);
      return;
    case 0x13:
      FUN_140071040(param_2,"mellow",6);
      return;
    case 0x14:
      FUN_140071040(param_2,"wobbling",8);
      return;
    case 0x15:
      FUN_140071040(param_2,"focused",7);
      return;
    case 0x16:
      FUN_140071040(param_2,"even",4);
      return;
    case 0x17:
      FUN_140071040(param_2,"fluid",5);
      return;
    case 0x18:
      FUN_140071040(param_2,"vibrating",9);
      return;
    case 0x19:
      FUN_140071040(param_2,"quavering",9);
      return;
    case 0x1a:
      FUN_140071040(param_2,"eerie",5);
      return;
    case 0x1b:
      FUN_140071040(param_2,"fragile",7);
      return;
    case 0x1c:
      FUN_140071040(param_2,"brittle",7);
      return;
    case 0x1d:
      FUN_140071040(param_2,"pure",4);
      return;
    case 0x1e:
      FUN_140071040(param_2,"piercing",8);
      return;
    case 0x1f:
      FUN_140071040(param_2,"strident",8);
      return;
    case 0x20:
      FUN_140071040(param_2,"wavering",8);
      return;
    case 0x21:
      FUN_140071040(param_2,"harsh",5);
      return;
    case 0x22:
      FUN_140071040(param_2,"reedy",5);
      return;
    case 0x23:
      FUN_140071040(param_2,"nasal",5);
      return;
    case 0x24:
      FUN_140071040(param_2,"buzzy",5);
      return;
    case 0x25:
      FUN_140071040(param_2,"rough",5);
      return;
    case 0x26:
      FUN_140071040(param_2,"warm",4);
      return;
    case 0x27:
      FUN_140071040(param_2,"rugged",6);
      return;
    case 0x28:
      FUN_140071040(param_2,"heavy",5);
      return;
    case 0x29:
      FUN_140071040(param_2,"flat",4);
      return;
    case 0x2a:
      FUN_140071040(param_2,"dark",4);
      return;
    case 0x2b:
      FUN_140071040(param_2,"crisp",5);
      return;
    case 0x2c:
      FUN_140071040(param_2,"sonorous",8);
      return;
    case 0x2d:
      FUN_140071040(param_2,"watery",6);
      return;
    case 0x2e:
      FUN_140071040(param_2,"gentle",6);
      return;
    case 0x2f:
      FUN_140071040(param_2,"slicing",7);
      return;
    case 0x30:
      FUN_140071040(param_2,"liquid",6);
      return;
    case 0x31:
      FUN_140071040(param_2,"raucous",7);
      return;
    case 0x32:
      FUN_140071040(param_2,"breezy",6);
      return;
    case 0x33:
      FUN_140071040(param_2,"raspy",5);
      return;
    case 0x34:
      FUN_140071040(param_2,"wispy",5);
      return;
    case 0x35:
      FUN_140071040(param_2,"shrill",6);
      return;
    case 0x36:
      FUN_140071040(param_2,"muddy",5);
      return;
    case 0x37:
      FUN_140071040(param_2,"rich",4);
      return;
    case 0x38:
      FUN_140071040(param_2,"dull",4);
      return;
    case 0x39:
      FUN_140071040(param_2,"floating",8);
      return;
    case 0x3a:
      FUN_140071040(param_2,"ringing",7);
      return;
    case 0x3b:
      FUN_140071040(param_2,"resonant",8);
      return;
    case 0x3c:
      FUN_140071040(param_2,"sweet",5);
      return;
    case 0x3d:
      FUN_140071040(param_2,"rippling",8);
      return;
    case 0x3e:
      FUN_140071040(param_2,"sparkling",9);
      return;
    }
  }
  return;
}

