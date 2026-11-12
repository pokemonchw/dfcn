/* Actual Ghidra 12.1.4 C of a native renderer REGION, not a standalone function.
   reference PE:6aea05a1:02734000; parent 0x150630; region 0x162037..0x165991.
   Stack locals are inherited from the parent. Conditional exits to the continuation have
   analysis-only RETURN flow overrides to bound the C view; original PE bytes are unchanged.
   Exact switch selectors, original instructions and operands are in the adjacent TSV/ASM files. */

void analysis_region_overview_traits(void)

{
  uint uVar1;
  undefined8 in_stack_00000080;
  int iVar2;
  longlong in_stack_0000b260;
  
  if (*(int *)(in_stack_0000b260 + 0x10c) != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(in_stack_0000b260 + 0x10c); iVar2 = iVar2 + 1) {
      uVar1 = *(uint *)(in_stack_0000b260 + 0xc4 + (longlong)iVar2 * 4);
      if (uVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 0:
          external_0xbc760(0x14266c870,2,0,1);
          break;
        case 1:
          external_0xbc760(0x14266c870,4,0,1);
          break;
        case 2:
          external_0xbc760(0x14266c870,2,0,1);
          break;
        case 3:
          external_0xbc760(0x14266c870,4,0,1);
          break;
        default:
          external_0xbc760(0x14266c870,7,0,1);
          break;
        case 6:
          external_0xbc760(0x14266c870,3,0,1);
        }
      }
      external_0xbc750(0x14266c870,in_stack_00000080._4_4_);
      in_stack_00000080._4_4_ = in_stack_00000080._4_4_ + 1;
      uVar1 = *(uint *)(in_stack_0000b260 + 0xc4 + (longlong)iVar2 * 4);
      if (uVar1 < 8) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 0:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00004f00,"Strong");
              FUN_140af3400(0x14266c870,&stack0x00004f00,0,0);
              external_0x69460(&stack0x00004f00);
              break;
            case 1:
              FUN_140069780(&stack0x00004f20,"Agile");
              FUN_140af3400(0x14266c870,&stack0x00004f20,0,0);
              external_0x69460(&stack0x00004f20);
              break;
            case 2:
              FUN_140069780(&stack0x00004f40,"Tough");
              FUN_140af3400(0x14266c870,&stack0x00004f40,0,0);
              external_0x69460(&stack0x00004f40);
              break;
            case 3:
              FUN_140069780(&stack0x00004f60,"High stamina");
              FUN_140af3400(0x14266c870,&stack0x00004f60,0,0);
              external_0x69460(&stack0x00004f60);
              break;
            case 4:
              FUN_140069780(&stack0x00004f80,"Recovers quickly");
              FUN_140af3400(0x14266c870,&stack0x00004f80,0,0);
              external_0x69460(&stack0x00004f80);
              break;
            case 5:
              FUN_140069780(&stack0x00004fa0,"Resists sickness");
              FUN_140af3400(0x14266c870,&stack0x00004fa0,0,0);
              external_0x69460(&stack0x00004fa0);
            }
          }
          break;
        case 1:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 6) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00004fc0,"Weak");
              FUN_140af3400(0x14266c870,&stack0x00004fc0,0,0);
              external_0x69460(&stack0x00004fc0);
              break;
            case 1:
              FUN_140069780(&stack0x00004fe0,"Clumsy");
              FUN_140af3400(0x14266c870,&stack0x00004fe0,0,0);
              external_0x69460(&stack0x00004fe0);
              break;
            case 2:
              FUN_140069780(&stack0x00005000,"Frail");
              FUN_140af3400(0x14266c870,&stack0x00005000,0,0);
              external_0x69460(&stack0x00005000);
              break;
            case 3:
              FUN_140069780(&stack0x00005020,"Low stamina");
              FUN_140af3400(0x14266c870,&stack0x00005020,0,0);
              external_0x69460(&stack0x00005020);
              break;
            case 4:
              FUN_140069780(&stack0x00005040,"Recovers slowly");
              FUN_140af3400(0x14266c870,&stack0x00005040,0,0);
              external_0x69460(&stack0x00005040);
              break;
            case 5:
              FUN_140069780(&stack0x00005060,"Sickly");
              FUN_140af3400(0x14266c870,&stack0x00005060,0,0);
              external_0x69460(&stack0x00005060);
            }
          }
          break;
        case 2:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0xd) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00005080,"Good analytical ability");
              FUN_140af3400(0x14266c870,&stack0x00005080,0,0);
              external_0x69460(&stack0x00005080);
              break;
            case 1:
              FUN_140069780(&stack0x000050a0,"Good focus");
              FUN_140af3400(0x14266c870,&stack0x000050a0,0,0);
              external_0x69460(&stack0x000050a0);
              break;
            case 2:
              FUN_140069780(&stack0x000050c0,"High willpower");
              FUN_140af3400(0x14266c870,&stack0x000050c0,0,0);
              external_0x69460(&stack0x000050c0);
              break;
            case 3:
              FUN_140069780(&stack0x000050e0,"Creative");
              FUN_140af3400(0x14266c870,&stack0x000050e0,0,0);
              external_0x69460(&stack0x000050e0);
              break;
            case 4:
              FUN_140069780(&stack0x00005100,"Good intuition");
              FUN_140af3400(0x14266c870,&stack0x00005100,0,0);
              external_0x69460(&stack0x00005100);
              break;
            case 5:
              FUN_140069780(&stack0x00005120,"Patient");
              FUN_140af3400(0x14266c870,&stack0x00005120,0,0);
              external_0x69460(&stack0x00005120);
              break;
            case 6:
              FUN_140069780(&stack0x00005140,"Good memory");
              FUN_140af3400(0x14266c870,&stack0x00005140,0,0);
              external_0x69460(&stack0x00005140);
              break;
            case 7:
              FUN_140069780(&stack0x00005160,"Good with language");
              FUN_140af3400(0x14266c870,&stack0x00005160,0,0);
              external_0x69460(&stack0x00005160);
              break;
            case 8:
              FUN_140069780(&stack0x00005180,"Good spatial sense");
              FUN_140af3400(0x14266c870,&stack0x00005180,0,0);
              external_0x69460(&stack0x00005180);
              break;
            case 9:
              FUN_140069780(&stack0x000051a0,"Musical");
              FUN_140af3400(0x14266c870,&stack0x000051a0,0,0);
              external_0x69460(&stack0x000051a0);
              break;
            case 10:
              FUN_140069780(&stack0x000051c0,"High kinesthetic sense");
              FUN_140af3400(0x14266c870,&stack0x000051c0,0,0);
              external_0x69460(&stack0x000051c0);
              break;
            case 0xb:
              FUN_140069780(&stack0x000051e0,"Developed empathy");
              FUN_140af3400(0x14266c870,&stack0x000051e0,0,0);
              external_0x69460(&stack0x000051e0);
              break;
            case 0xc:
              FUN_140069780(&stack0x00005200,"High social awareness");
              FUN_140af3400(0x14266c870,&stack0x00005200,0,0);
              external_0x69460(&stack0x00005200);
            }
          }
          break;
        case 3:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0xd) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00005220,"Poor analytical ability");
              FUN_140af3400(0x14266c870,&stack0x00005220,0,0);
              external_0x69460(&stack0x00005220);
              break;
            case 1:
              FUN_140069780(&stack0x00005240,"Poor focus");
              FUN_140af3400(0x14266c870,&stack0x00005240,0,0);
              external_0x69460(&stack0x00005240);
              break;
            case 2:
              FUN_140069780(&stack0x00005260,"Low willpower");
              FUN_140af3400(0x14266c870,&stack0x00005260,0,0);
              external_0x69460(&stack0x00005260);
              break;
            case 3:
              FUN_140069780(&stack0x00005280,"Not creative");
              FUN_140af3400(0x14266c870,&stack0x00005280,0,0);
              external_0x69460(&stack0x00005280);
              break;
            case 4:
              FUN_140069780(&stack0x000052a0,"Poor intuition");
              FUN_140af3400(0x14266c870,&stack0x000052a0,0,0);
              external_0x69460(&stack0x000052a0);
              break;
            case 5:
              FUN_140069780(&stack0x000052c0,"Impatient");
              FUN_140af3400(0x14266c870,&stack0x000052c0,0,0);
              external_0x69460(&stack0x000052c0);
              break;
            case 6:
              FUN_140069780(&stack0x000052e0,"Poor memory");
              FUN_140af3400(0x14266c870,&stack0x000052e0,0,0);
              external_0x69460(&stack0x000052e0);
              break;
            case 7:
              FUN_140069780(&stack0x00005300,"Bad with words");
              FUN_140af3400(0x14266c870,&stack0x00005300,0,0);
              external_0x69460(&stack0x00005300);
              break;
            case 8:
              FUN_140069780(&stack0x00005320,"Poor spatial sense");
              FUN_140af3400(0x14266c870,&stack0x00005320,0,0);
              external_0x69460(&stack0x00005320);
              break;
            case 9:
              FUN_140069780(&stack0x00005340,"Not musical");
              FUN_140af3400(0x14266c870,&stack0x00005340,0,0);
              external_0x69460(&stack0x00005340);
              break;
            case 10:
              FUN_140069780(&stack0x00005360,"Poor kinesthetic sense");
              FUN_140af3400(0x14266c870,&stack0x00005360,0,0);
              external_0x69460(&stack0x00005360);
              break;
            case 0xb:
              FUN_140069780(&stack0x00005380,"Poor empathy");
              FUN_140af3400(0x14266c870,&stack0x00005380,0,0);
              external_0x69460(&stack0x00005380);
              break;
            case 0xc:
              FUN_140069780(&stack0x000053a0,"Poor social awareness");
              FUN_140af3400(0x14266c870,&stack0x000053a0,0,0);
              external_0x69460(&stack0x000053a0);
            }
          }
          break;
        case 4:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0x32) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x000053c0,"Quick to love");
              FUN_140af3400(0x14266c870,&stack0x000053c0,0,0);
              external_0x69460(&stack0x000053c0);
              break;
            case 1:
              FUN_140069780(&stack0x000053e0,"Hateful");
              FUN_140af3400(0x14266c870,&stack0x000053e0,0,0);
              external_0x69460(&stack0x000053e0);
              break;
            case 2:
              FUN_140069780(&stack0x00005400,"Envious");
              FUN_140af3400(0x14266c870,&stack0x00005400,0,0);
              external_0x69460(&stack0x00005400);
              break;
            case 3:
              FUN_140069780(&stack0x00005420,"Cheerful");
              FUN_140af3400(0x14266c870,&stack0x00005420,0,0);
              external_0x69460(&stack0x00005420);
              break;
            case 4:
              FUN_140069780(&stack0x00005440,"Depression-prone");
              FUN_140af3400(0x14266c870,&stack0x00005440,0,0);
              external_0x69460(&stack0x00005440);
              break;
            case 5:
              FUN_140069780(&stack0x00005460,"Anger-prone");
              FUN_140af3400(0x14266c870,&stack0x00005460,0,0);
              external_0x69460(&stack0x00005460);
              break;
            case 6:
              FUN_140069780(&stack0x00005480,"Anxious");
              FUN_140af3400(0x14266c870,&stack0x00005480,0,0);
              external_0x69460(&stack0x00005480);
              break;
            case 7:
              FUN_140069780(&stack0x000054a0,"Lustful");
              FUN_140af3400(0x14266c870,&stack0x000054a0,0,0);
              external_0x69460(&stack0x000054a0);
              break;
            case 8:
              FUN_140069780(&stack0x000054c0,"Easily stressed");
              FUN_140af3400(0x14266c870,&stack0x000054c0,0,0);
              external_0x69460(&stack0x000054c0);
              break;
            case 9:
              FUN_140069780(&stack0x000054e0,"Greedy");
              FUN_140af3400(0x14266c870,&stack0x000054e0,0,0);
              external_0x69460(&stack0x000054e0);
              break;
            case 10:
              FUN_140069780(&stack0x00005500,"Intemperate");
              FUN_140af3400(0x14266c870,&stack0x00005500,0,0);
              external_0x69460(&stack0x00005500);
              break;
            case 0xb:
              FUN_140069780(&stack0x00005520,"Brawler");
              FUN_140af3400(0x14266c870,&stack0x00005520,0,0);
              external_0x69460(&stack0x00005520);
              break;
            case 0xc:
              FUN_140069780(&stack0x00005540,"Stubborn");
              FUN_140af3400(0x14266c870,&stack0x00005540,0,0);
              external_0x69460(&stack0x00005540);
              break;
            case 0xd:
              FUN_140069780(&stack0x00005560,"Wasteful");
              FUN_140af3400(0x14266c870,&stack0x00005560,0,0);
              external_0x69460(&stack0x00005560);
              break;
            case 0xe:
              FUN_140069780(&stack0x00005580,"Prone to discord");
              FUN_140af3400(0x14266c870,&stack0x00005580,0,0);
              external_0x69460(&stack0x00005580);
              break;
            case 0xf:
              FUN_140069780(&stack0x000055a0,"Flatterer");
              FUN_140af3400(0x14266c870,&stack0x000055a0,0,0);
              external_0x69460(&stack0x000055a0);
              break;
            case 0x10:
              FUN_140069780(&stack0x000055c0,"Polite");
              FUN_140af3400(0x14266c870,&stack0x000055c0,0,0);
              external_0x69460(&stack0x000055c0);
              break;
            case 0x11:
              FUN_140069780(&stack0x000055e0,"Disdains advice");
              FUN_140af3400(0x14266c870,&stack0x000055e0,0,0);
              external_0x69460(&stack0x000055e0);
              break;
            case 0x12:
              FUN_140069780(&stack0x00005600,"Fearless");
              FUN_140af3400(0x14266c870,&stack0x00005600,0,0);
              external_0x69460(&stack0x00005600);
              break;
            case 0x13:
              FUN_140069780(&stack0x00005620,"Overconfident");
              FUN_140af3400(0x14266c870,&stack0x00005620,0,0);
              external_0x69460(&stack0x00005620);
              break;
            case 0x14:
              FUN_140069780(&stack0x00005640,"Vain");
              FUN_140af3400(0x14266c870,&stack0x00005640,0,0);
              external_0x69460(&stack0x00005640);
              break;
            case 0x15:
              FUN_140069780(&stack0x00005660,"Ambitious");
              FUN_140af3400(0x14266c870,&stack0x00005660,0,0);
              external_0x69460(&stack0x00005660);
              break;
            case 0x16:
              FUN_140069780(&stack0x00005680,"Gracious");
              FUN_140af3400(0x14266c870,&stack0x00005680,0,0);
              external_0x69460(&stack0x00005680);
              break;
            case 0x17:
              FUN_140069780(&stack0x000056a0,"Extravagant");
              FUN_140af3400(0x14266c870,&stack0x000056a0,0,0);
              external_0x69460(&stack0x000056a0);
              break;
            case 0x18:
              FUN_140069780(&stack0x000056c0,"Zany");
              FUN_140af3400(0x14266c870,&stack0x000056c0,0,0);
              external_0x69460(&stack0x000056c0);
              break;
            case 0x19:
              FUN_140069780(&stack0x000056e0,"Vengeful");
              FUN_140af3400(0x14266c870,&stack0x000056e0,0,0);
              external_0x69460(&stack0x000056e0);
              break;
            case 0x1a:
              FUN_140069780(&stack0x00005700,"Proud");
              FUN_140af3400(0x14266c870,&stack0x00005700,0,0);
              external_0x69460(&stack0x00005700);
              break;
            case 0x1b:
              FUN_140069780(&stack0x00005720,"Cruel");
              FUN_140af3400(0x14266c870,&stack0x00005720,0,0);
              external_0x69460(&stack0x00005720);
              break;
            case 0x1c:
              FUN_140069780(&stack0x00005740,"Single-minded");
              FUN_140af3400(0x14266c870,&stack0x00005740,0,0);
              external_0x69460(&stack0x00005740);
              break;
            case 0x1d:
              FUN_140069780(&stack0x00005760,"Hopeful");
              FUN_140af3400(0x14266c870,&stack0x00005760,0,0);
              external_0x69460(&stack0x00005760);
              break;
            case 0x1e:
              FUN_140069780(&stack0x00005780,"Curious");
              FUN_140af3400(0x14266c870,&stack0x00005780,0,0);
              external_0x69460(&stack0x00005780);
              break;
            case 0x1f:
              FUN_140069780(&stack0x000057a0,"Bashful");
              FUN_140af3400(0x14266c870,&stack0x000057a0,0,0);
              external_0x69460(&stack0x000057a0);
              break;
            case 0x20:
              FUN_140069780(&stack0x000057c0,"Private");
              FUN_140af3400(0x14266c870,&stack0x000057c0,0,0);
              external_0x69460(&stack0x000057c0);
              break;
            case 0x21:
              FUN_140069780(&stack0x000057e0,"Perfectionist");
              FUN_140af3400(0x14266c870,&stack0x000057e0,0,0);
              external_0x69460(&stack0x000057e0);
              break;
            case 0x22:
              FUN_140069780(&stack0x00005800,"Obstinate");
              FUN_140af3400(0x14266c870,&stack0x00005800,0,0);
              external_0x69460(&stack0x00005800);
              break;
            case 0x23:
              FUN_140069780(&stack0x00005820,"Tolerant");
              FUN_140af3400(0x14266c870,&stack0x00005820,0,0);
              external_0x69460(&stack0x00005820);
              break;
            case 0x24:
              FUN_140069780(&stack0x00005840,"Emotional obsessive");
              FUN_140af3400(0x14266c870,&stack0x00005840,0,0);
              external_0x69460(&stack0x00005840);
              break;
            case 0x25:
              FUN_140069780(&stack0x00005860,"Swayed by emotions");
              FUN_140af3400(0x14266c870,&stack0x00005860,0,0);
              external_0x69460(&stack0x00005860);
              break;
            case 0x26:
              FUN_140069780(&stack0x00005880,"Altruistic");
              FUN_140af3400(0x14266c870,&stack0x00005880,0,0);
              external_0x69460(&stack0x00005880);
              break;
            case 0x27:
              FUN_140069780(&stack0x000058a0,"Dutiful");
              FUN_140af3400(0x14266c870,&stack0x000058a0,0,0);
              external_0x69460(&stack0x000058a0);
              break;
            case 0x28:
              FUN_140069780(&stack0x000058c0,"Thoughtless");
              FUN_140af3400(0x14266c870,&stack0x000058c0,0,0);
              external_0x69460(&stack0x000058c0);
              break;
            case 0x29:
              FUN_140069780(&stack0x000058e0,"Orderly");
              FUN_140af3400(0x14266c870,&stack0x000058e0,0,0);
              external_0x69460(&stack0x000058e0);
              break;
            case 0x2a:
              FUN_140069780(&stack0x00005900,"Trusting");
              FUN_140af3400(0x14266c870,&stack0x00005900,0,0);
              external_0x69460(&stack0x00005900);
              break;
            case 0x2b:
              FUN_140069780(&stack0x00005920,"Gregarious");
              FUN_140af3400(0x14266c870,&stack0x00005920,0,0);
              external_0x69460(&stack0x00005920);
              break;
            case 0x2c:
              FUN_140069780(&stack0x00005940,"Overbearing");
              FUN_140af3400(0x14266c870,&stack0x00005940,0,0);
              external_0x69460(&stack0x00005940);
              break;
            case 0x2d:
              FUN_140069780(&stack0x00005960,"Frenetic");
              FUN_140af3400(0x14266c870,&stack0x00005960,0,0);
              external_0x69460(&stack0x00005960);
              break;
            case 0x2e:
              FUN_140069780(&stack0x00005980,"Thrill-seeker");
              FUN_140af3400(0x14266c870,&stack0x00005980,0,0);
              external_0x69460(&stack0x00005980);
              break;
            case 0x2f:
              FUN_140069780(&stack0x000059a0,"Flights of fancy");
              FUN_140af3400(0x14266c870,&stack0x000059a0,0,0);
              external_0x69460(&stack0x000059a0);
              break;
            case 0x30:
              FUN_140069780(&stack0x000059c0,"Inclined to abstract");
              FUN_140af3400(0x14266c870,&stack0x000059c0,0,0);
              external_0x69460(&stack0x000059c0);
              break;
            case 0x31:
              FUN_140069780(&stack0x000059e0,"Artistically inclined");
              FUN_140af3400(0x14266c870,&stack0x000059e0,0,0);
              external_0x69460(&stack0x000059e0);
            }
          }
          break;
        case 5:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0x32) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00005a00,"Slow to love");
              FUN_140af3400(0x14266c870,&stack0x00005a00,0,0);
              external_0x69460(&stack0x00005a00);
              break;
            case 1:
              FUN_140069780(&stack0x00005a20,"Slow to hate");
              FUN_140af3400(0x14266c870,&stack0x00005a20,0,0);
              external_0x69460(&stack0x00005a20);
              break;
            case 2:
              FUN_140069780(&stack0x00005a40,"Not envious");
              FUN_140af3400(0x14266c870,&stack0x00005a40,0,0);
              external_0x69460(&stack0x00005a40);
              break;
            case 3:
              FUN_140069780(&stack0x00005a60,"Cheerless");
              FUN_140af3400(0x14266c870,&stack0x00005a60,0,0);
              external_0x69460(&stack0x00005a60);
              break;
            case 4:
              FUN_140069780(&stack0x00005a80,"Not easily depressed");
              FUN_140af3400(0x14266c870,&stack0x00005a80,0,0);
              external_0x69460(&stack0x00005a80);
              break;
            case 5:
              FUN_140069780(&stack0x00005aa0,"Slow to anger");
              FUN_140af3400(0x14266c870,&stack0x00005aa0,0,0);
              external_0x69460(&stack0x00005aa0);
              break;
            case 6:
              FUN_140069780(&stack0x00005ac0,"Not anxious");
              FUN_140af3400(0x14266c870,&stack0x00005ac0,0,0);
              external_0x69460(&stack0x00005ac0);
              break;
            case 7:
              FUN_140069780(&stack0x00005ae0,"Not lustful");
              FUN_140af3400(0x14266c870,&stack0x00005ae0,0,0);
              external_0x69460(&stack0x00005ae0);
              break;
            case 8:
              FUN_140069780(&stack0x00005b00,"Resilient");
              FUN_140af3400(0x14266c870,&stack0x00005b00,0,0);
              external_0x69460(&stack0x00005b00);
              break;
            case 9:
              FUN_140069780(&stack0x00005b20,"Not greedy");
              FUN_140af3400(0x14266c870,&stack0x00005b20,0,0);
              external_0x69460(&stack0x00005b20);
              break;
            case 10:
              FUN_140069780(&stack0x00005b40,"Temperate");
              FUN_140af3400(0x14266c870,&stack0x00005b40,0,0);
              external_0x69460(&stack0x00005b40);
              break;
            case 0xb:
              FUN_140069780(&stack0x00005b60,"Avoid fights");
              FUN_140af3400(0x14266c870,&stack0x00005b60,0,0);
              external_0x69460(&stack0x00005b60);
              break;
            case 0xc:
              FUN_140069780(&stack0x00005b80,"Quick to give up");
              FUN_140af3400(0x14266c870,&stack0x00005b80,0,0);
              external_0x69460(&stack0x00005b80);
              break;
            case 0xd:
              FUN_140069780(&stack0x00005ba0,"Not wasteful");
              FUN_140af3400(0x14266c870,&stack0x00005ba0,0,0);
              external_0x69460(&stack0x00005ba0);
              break;
            case 0xe:
              FUN_140069780(&stack0x00005bc0,"Seeks harmony");
              FUN_140af3400(0x14266c870,&stack0x00005bc0,0,0);
              external_0x69460(&stack0x00005bc0);
              break;
            case 0xf:
              FUN_140069780(&stack0x00005be0,"Quarreler");
              FUN_140af3400(0x14266c870,&stack0x00005be0,0,0);
              external_0x69460(&stack0x00005be0);
              break;
            case 0x10:
              FUN_140069780(&stack0x00005c00,"Rude");
              FUN_140af3400(0x14266c870,&stack0x00005c00,0,0);
              external_0x69460(&stack0x00005c00);
              break;
            case 0x11:
              FUN_140069780(&stack0x00005c20,"Overreliant on advice");
              FUN_140af3400(0x14266c870,&stack0x00005c20,0,0);
              external_0x69460(&stack0x00005c20);
              break;
            case 0x12:
              FUN_140069780(&stack0x00005c40,"Fearful");
              FUN_140af3400(0x14266c870,&stack0x00005c40,0,0);
              external_0x69460(&stack0x00005c40);
              break;
            case 0x13:
              FUN_140069780(&stack0x00005c60,"Pusillanimous");
              FUN_140af3400(0x14266c870,&stack0x00005c60,0,0);
              external_0x69460(&stack0x00005c60);
              break;
            case 0x14:
              FUN_140069780(&stack0x00005c80,"Not vain");
              FUN_140af3400(0x14266c870,&stack0x00005c80,0,0);
              external_0x69460(&stack0x00005c80);
              break;
            case 0x15:
              FUN_140069780(&stack0x00005ca0,"Not ambitious");
              FUN_140af3400(0x14266c870,&stack0x00005ca0,0,0);
              external_0x69460(&stack0x00005ca0);
              break;
            case 0x16:
              FUN_140069780(&stack0x00005cc0,"Ungrateful");
              FUN_140af3400(0x14266c870,&stack0x00005cc0,0,0);
              external_0x69460(&stack0x00005cc0);
              break;
            case 0x17:
              FUN_140069780(&stack0x00005ce0,"Austere");
              FUN_140af3400(0x14266c870,&stack0x00005ce0,0,0);
              external_0x69460(&stack0x00005ce0);
              break;
            case 0x18:
              FUN_140069780(&stack0x00005d00,"Humorless");
              FUN_140af3400(0x14266c870,&stack0x00005d00,0,0);
              external_0x69460(&stack0x00005d00);
              break;
            case 0x19:
              FUN_140069780(&stack0x00005d20,"Not vengeful");
              FUN_140af3400(0x14266c870,&stack0x00005d20,0,0);
              external_0x69460(&stack0x00005d20);
              break;
            case 0x1a:
              FUN_140069780(&stack0x00005d40,"Low self esteem");
              FUN_140af3400(0x14266c870,&stack0x00005d40,0,0);
              external_0x69460(&stack0x00005d40);
              break;
            case 0x1b:
              FUN_140069780(&stack0x00005d60,"Merciful");
              FUN_140af3400(0x14266c870,&stack0x00005d60,0,0);
              external_0x69460(&stack0x00005d60);
              break;
            case 0x1c:
              FUN_140069780(&stack0x00005d80,"Scatterbrained");
              FUN_140af3400(0x14266c870,&stack0x00005d80,0,0);
              external_0x69460(&stack0x00005d80);
              break;
            case 0x1d:
              FUN_140069780(&stack0x00005da0,"Quick to despair");
              FUN_140af3400(0x14266c870,&stack0x00005da0,0,0);
              external_0x69460(&stack0x00005da0);
              break;
            case 0x1e:
              FUN_140069780(&stack0x00005dc0,"Incurious");
              FUN_140af3400(0x14266c870,&stack0x00005dc0,0,0);
              external_0x69460(&stack0x00005dc0);
              break;
            case 0x1f:
              FUN_140069780(&stack0x00005de0,"Shameless");
              FUN_140af3400(0x14266c870,&stack0x00005de0,0,0);
              external_0x69460(&stack0x00005de0);
              break;
            case 0x20:
              FUN_140069780(&stack0x00005e00,"Overshares");
              FUN_140af3400(0x14266c870,&stack0x00005e00,0,0);
              external_0x69460(&stack0x00005e00);
              break;
            case 0x21:
              FUN_140069780(&stack0x00005e20,"Inattentive");
              FUN_140af3400(0x14266c870,&stack0x00005e20,0,0);
              external_0x69460(&stack0x00005e20);
              break;
            case 0x22:
              FUN_140069780(&stack0x00005e40,"Acquiescing");
              FUN_140af3400(0x14266c870,&stack0x00005e40,0,0);
              external_0x69460(&stack0x00005e40);
              break;
            case 0x23:
              FUN_140069780(&stack0x00005e60,"Intolerant");
              FUN_140af3400(0x14266c870,&stack0x00005e60,0,0);
              external_0x69460(&stack0x00005e60);
              break;
            case 0x24:
              FUN_140069780(&stack0x00005e80,"Emotionally distant");
              FUN_140af3400(0x14266c870,&stack0x00005e80,0,0);
              external_0x69460(&stack0x00005e80);
              break;
            case 0x25:
              FUN_140069780(&stack0x00005ea0,"Unswayed by emotions");
              FUN_140af3400(0x14266c870,&stack0x00005ea0,0,0);
              external_0x69460(&stack0x00005ea0);
              break;
            case 0x26:
              FUN_140069780(&stack0x00005ec0,"Not altruistic");
              FUN_140af3400(0x14266c870,&stack0x00005ec0,0,0);
              external_0x69460(&stack0x00005ec0);
              break;
            case 0x27:
              FUN_140069780(&stack0x00005ee0,"Not dutiful");
              FUN_140af3400(0x14266c870,&stack0x00005ee0,0,0);
              external_0x69460(&stack0x00005ee0);
              break;
            case 0x28:
              FUN_140069780(&stack0x00005f00,"Overcautious");
              FUN_140af3400(0x14266c870,&stack0x00005f00,0,0);
              external_0x69460(&stack0x00005f00);
              break;
            case 0x29:
              FUN_140069780(&stack0x00005f20,"Sloppy");
              FUN_140af3400(0x14266c870,&stack0x00005f20,0,0);
              external_0x69460(&stack0x00005f20);
              break;
            case 0x2a:
              FUN_140069780(&stack0x00005f40,"Distrustful");
              FUN_140af3400(0x14266c870,&stack0x00005f40,0,0);
              external_0x69460(&stack0x00005f40);
              break;
            case 0x2b:
              FUN_140069780(&stack0x00005f60,"Loner");
              FUN_140af3400(0x14266c870,&stack0x00005f60,0,0);
              external_0x69460(&stack0x00005f60);
              break;
            case 0x2c:
              FUN_140069780(&stack0x00005f80,"Unassertive");
              FUN_140af3400(0x14266c870,&stack0x00005f80,0,0);
              external_0x69460(&stack0x00005f80);
              break;
            case 0x2d:
              FUN_140069780(&stack0x00005fa0,"Leisurely");
              FUN_140af3400(0x14266c870,&stack0x00005fa0,0,0);
              external_0x69460(&stack0x00005fa0);
              break;
            case 0x2e:
              FUN_140069780(&stack0x00005fc0,"Avoids excitement");
              FUN_140af3400(0x14266c870,&stack0x00005fc0,0,0);
              external_0x69460(&stack0x00005fc0);
              break;
            case 0x2f:
              FUN_140069780(&stack0x00005fe0,"Fact-oriented");
              FUN_140af3400(0x14266c870,&stack0x00005fe0,0,0);
              external_0x69460(&stack0x00005fe0);
              break;
            case 0x30:
              FUN_140069780(&stack0x00006000,"Not inclined to abstract");
              FUN_140af3400(0x14266c870,&stack0x00006000,0,0);
              external_0x69460(&stack0x00006000);
              break;
            case 0x31:
              FUN_140069780(&stack0x00006020,"Not inclined to create art");
              FUN_140af3400(0x14266c870,&stack0x00006020,0,0);
              external_0x69460(&stack0x00006020);
            }
          }
          break;
        case 6:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0x21) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00006040,"Values law");
              FUN_140af3400(0x14266c870,&stack0x00006040,0,0);
              external_0x69460(&stack0x00006040);
              break;
            case 1:
              FUN_140069780(&stack0x00006060,"Values loyalty");
              FUN_140af3400(0x14266c870,&stack0x00006060,0,0);
              external_0x69460(&stack0x00006060);
              break;
            case 2:
              FUN_140069780(&stack0x00006080,"Values family");
              FUN_140af3400(0x14266c870,&stack0x00006080,0,0);
              external_0x69460(&stack0x00006080);
              break;
            case 3:
              FUN_140069780(&stack0x000060a0,"Values friendship");
              FUN_140af3400(0x14266c870,&stack0x000060a0,0,0);
              external_0x69460(&stack0x000060a0);
              break;
            case 4:
              FUN_140069780(&stack0x000060c0,"Values power");
              FUN_140af3400(0x14266c870,&stack0x000060c0,0,0);
              external_0x69460(&stack0x000060c0);
              break;
            case 5:
              FUN_140069780(&stack0x000060e0,"Values truth");
              FUN_140af3400(0x14266c870,&stack0x000060e0,0,0);
              external_0x69460(&stack0x000060e0);
              break;
            case 6:
              FUN_140069780(&stack0x00006100,"Values cunning");
              FUN_140af3400(0x14266c870,&stack0x00006100,0,0);
              external_0x69460(&stack0x00006100);
              break;
            case 7:
              FUN_140069780(&stack0x00006120,"Values eloquence");
              FUN_140af3400(0x14266c870,&stack0x00006120,0,0);
              external_0x69460(&stack0x00006120);
              break;
            case 8:
              FUN_140069780(&stack0x00006140,"Values fairness");
              FUN_140af3400(0x14266c870,&stack0x00006140,0,0);
              external_0x69460(&stack0x00006140);
              break;
            case 9:
              FUN_140069780(&stack0x00006160,"Values decorum");
              FUN_140af3400(0x14266c870,&stack0x00006160,0,0);
              external_0x69460(&stack0x00006160);
              break;
            case 10:
              FUN_140069780(&stack0x00006180,"Values tradition");
              FUN_140af3400(0x14266c870,&stack0x00006180,0,0);
              external_0x69460(&stack0x00006180);
              break;
            case 0xb:
              FUN_140069780(&stack0x000061a0,"Values artwork");
              FUN_140af3400(0x14266c870,&stack0x000061a0,0,0);
              external_0x69460(&stack0x000061a0);
              break;
            case 0xc:
              FUN_140069780(&stack0x000061c0,"Values cooperation");
              FUN_140af3400(0x14266c870,&stack0x000061c0,0,0);
              external_0x69460(&stack0x000061c0);
              break;
            case 0xd:
              FUN_140069780(&stack0x000061e0,"Values independence");
              FUN_140af3400(0x14266c870,&stack0x000061e0,0,0);
              external_0x69460(&stack0x000061e0);
              break;
            case 0xe:
              FUN_140069780(&stack0x00006200,"Values stoicism");
              FUN_140af3400(0x14266c870,&stack0x00006200,0,0);
              external_0x69460(&stack0x00006200);
              break;
            case 0xf:
              FUN_140069780(&stack0x00006220,"Values introspection");
              FUN_140af3400(0x14266c870,&stack0x00006220,0,0);
              external_0x69460(&stack0x00006220);
              break;
            case 0x10:
              FUN_140069780(&stack0x00006240,"Values self-control");
              FUN_140af3400(0x14266c870,&stack0x00006240,0,0);
              external_0x69460(&stack0x00006240);
              break;
            case 0x11:
              FUN_140069780(&stack0x00006260,"Values tranquility");
              FUN_140af3400(0x14266c870,&stack0x00006260,0,0);
              external_0x69460(&stack0x00006260);
              break;
            case 0x12:
              FUN_140069780(&stack0x00006280,"Values harmony");
              FUN_140af3400(0x14266c870,&stack0x00006280,0,0);
              external_0x69460(&stack0x00006280);
              break;
            case 0x13:
              FUN_140069780(&stack0x000062a0,"Values merriment");
              FUN_140af3400(0x14266c870,&stack0x000062a0,0,0);
              external_0x69460(&stack0x000062a0);
              break;
            case 0x14:
              FUN_140069780(&stack0x000062c0,"Values craftwork");
              FUN_140af3400(0x14266c870,&stack0x000062c0,0,0);
              external_0x69460(&stack0x000062c0);
              break;
            case 0x15:
              FUN_140069780(&stack0x000062e0,"Values martial prowess");
              FUN_140af3400(0x14266c870,&stack0x000062e0,0,0);
              external_0x69460(&stack0x000062e0);
              break;
            case 0x16:
              FUN_140069780(&stack0x00006300,"Values skill");
              FUN_140af3400(0x14266c870,&stack0x00006300,0,0);
              external_0x69460(&stack0x00006300);
              break;
            case 0x17:
              FUN_140069780(&stack0x00006320,"Values hard work");
              FUN_140af3400(0x14266c870,&stack0x00006320,0,0);
              external_0x69460(&stack0x00006320);
              break;
            case 0x18:
              FUN_140069780(&stack0x00006340,"Values sacrifice");
              FUN_140af3400(0x14266c870,&stack0x00006340,0,0);
              external_0x69460(&stack0x00006340);
              break;
            case 0x19:
              FUN_140069780(&stack0x00006360,"Values competition");
              FUN_140af3400(0x14266c870,&stack0x00006360,0,0);
              external_0x69460(&stack0x00006360);
              break;
            case 0x1a:
              FUN_140069780(&stack0x00006380,"Values perseverance");
              FUN_140af3400(0x14266c870,&stack0x00006380,0,0);
              external_0x69460(&stack0x00006380);
              break;
            case 0x1b:
              FUN_140069780(&stack0x000063a0,"Values leisure time");
              FUN_140af3400(0x14266c870,&stack0x000063a0,0,0);
              external_0x69460(&stack0x000063a0);
              break;
            case 0x1c:
              FUN_140069780(&stack0x000063c0,"Values commerce");
              FUN_140af3400(0x14266c870,&stack0x000063c0,0,0);
              external_0x69460(&stack0x000063c0);
              break;
            case 0x1d:
              FUN_140069780(&stack0x000063e0,"Values romance");
              FUN_140af3400(0x14266c870,&stack0x000063e0,0,0);
              external_0x69460(&stack0x000063e0);
              break;
            case 0x1e:
              FUN_140069780(&stack0x00006400,"Values nature");
              FUN_140af3400(0x14266c870,&stack0x00006400,0,0);
              external_0x69460(&stack0x00006400);
              break;
            case 0x1f:
              FUN_140069780(&stack0x00006420,"Values peace");
              FUN_140af3400(0x14266c870,&stack0x00006420,0,0);
              external_0x69460(&stack0x00006420);
              break;
            case 0x20:
              FUN_140069780(&stack0x00006440,"Values knowledge");
              FUN_140af3400(0x14266c870,&stack0x00006440,0,0);
              external_0x69460(&stack0x00006440);
            }
          }
          break;
        case 7:
          uVar1 = *(uint *)(in_stack_0000b260 + 0xdc + (longlong)iVar2 * 4);
          if (uVar1 < 0x21) {
                    /* WARNING: Switch is manually overridden */
            switch(uVar1) {
            case 0:
              FUN_140069780(&stack0x00006460,"Disdains law");
              FUN_140af3400(0x14266c870,&stack0x00006460,0,0);
              external_0x69460(&stack0x00006460);
              break;
            case 1:
              FUN_140069780(&stack0x00006480,"Disdains loyalty");
              FUN_140af3400(0x14266c870,&stack0x00006480,0,0);
              external_0x69460(&stack0x00006480);
              break;
            case 2:
              FUN_140069780(&stack0x000064a0,"Disdains family");
              FUN_140af3400(0x14266c870,&stack0x000064a0,0,0);
              external_0x69460(&stack0x000064a0);
              break;
            case 3:
              FUN_140069780(&stack0x000064c0,"Disdains friendship");
              FUN_140af3400(0x14266c870,&stack0x000064c0,0,0);
              external_0x69460(&stack0x000064c0);
              break;
            case 4:
              FUN_140069780(&stack0x000064e0,"Disdains power");
              FUN_140af3400(0x14266c870,&stack0x000064e0,0,0);
              external_0x69460(&stack0x000064e0);
              break;
            case 5:
              FUN_140069780(&stack0x00006500,"Disdains truth");
              FUN_140af3400(0x14266c870,&stack0x00006500,0,0);
              external_0x69460(&stack0x00006500);
              break;
            case 6:
              FUN_140069780(&stack0x00006520,"Disdains cunning");
              FUN_140af3400(0x14266c870,&stack0x00006520,0,0);
              external_0x69460(&stack0x00006520);
              break;
            case 7:
              FUN_140069780(&stack0x00006540,"Disdains eloquence");
              FUN_140af3400(0x14266c870,&stack0x00006540,0,0);
              external_0x69460(&stack0x00006540);
              break;
            case 8:
              FUN_140069780(&stack0x00006560,"Disdains fairness");
              FUN_140af3400(0x14266c870,&stack0x00006560,0,0);
              external_0x69460(&stack0x00006560);
              break;
            case 9:
              FUN_140069780(&stack0x00006580,"Disdains decorum");
              FUN_140af3400(0x14266c870,&stack0x00006580,0,0);
              external_0x69460(&stack0x00006580);
              break;
            case 10:
              FUN_140069780(&stack0x000065a0,"Disdains tradition");
              FUN_140af3400(0x14266c870,&stack0x000065a0,0,0);
              external_0x69460(&stack0x000065a0);
              break;
            case 0xb:
              FUN_140069780(&stack0x000065c0,"Disdains artwork");
              FUN_140af3400(0x14266c870,&stack0x000065c0,0,0);
              external_0x69460(&stack0x000065c0);
              break;
            case 0xc:
              FUN_140069780(&stack0x000065e0,"Disdains cooperation");
              FUN_140af3400(0x14266c870,&stack0x000065e0,0,0);
              external_0x69460(&stack0x000065e0);
              break;
            case 0xd:
              FUN_140069780(&stack0x00006600,"Disdains independence");
              FUN_140af3400(0x14266c870,&stack0x00006600,0,0);
              external_0x69460(&stack0x00006600);
              break;
            case 0xe:
              FUN_140069780(&stack0x00006620,"Disdains stoicism");
              FUN_140af3400(0x14266c870,&stack0x00006620,0,0);
              external_0x69460(&stack0x00006620);
              break;
            case 0xf:
              FUN_140069780(&stack0x00006640,"Disdains introspection");
              FUN_140af3400(0x14266c870,&stack0x00006640,0,0);
              external_0x69460(&stack0x00006640);
              break;
            case 0x10:
              FUN_140069780(&stack0x00006660,"Disdains self-control");
              FUN_140af3400(0x14266c870,&stack0x00006660,0,0);
              external_0x69460(&stack0x00006660);
              break;
            case 0x11:
              FUN_140069780(&stack0x00006680,"Disdains tranquility");
              FUN_140af3400(0x14266c870,&stack0x00006680,0,0);
              external_0x69460(&stack0x00006680);
              break;
            case 0x12:
              FUN_140069780(&stack0x000066a0,"Disdains harmony");
              FUN_140af3400(0x14266c870,&stack0x000066a0,0,0);
              external_0x69460(&stack0x000066a0);
              break;
            case 0x13:
              FUN_140069780(&stack0x000066c0,"Disdains merriment");
              FUN_140af3400(0x14266c870,&stack0x000066c0,0,0);
              external_0x69460(&stack0x000066c0);
              break;
            case 0x14:
              FUN_140069780(&stack0x000066e0,"Disdains craftwork");
              FUN_140af3400(0x14266c870,&stack0x000066e0,0,0);
              external_0x69460(&stack0x000066e0);
              break;
            case 0x15:
              FUN_140069780(&stack0x00006700,"Disdains martial prowess");
              FUN_140af3400(0x14266c870,&stack0x00006700,0,0);
              external_0x69460(&stack0x00006700);
              break;
            case 0x16:
              FUN_140069780(&stack0x00006720,"Disdains skill");
              FUN_140af3400(0x14266c870,&stack0x00006720,0,0);
              external_0x69460(&stack0x00006720);
              break;
            case 0x17:
              FUN_140069780(&stack0x00006740,"Disdains hard work");
              FUN_140af3400(0x14266c870,&stack0x00006740,0,0);
              external_0x69460(&stack0x00006740);
              break;
            case 0x18:
              FUN_140069780(&stack0x00006760,"Disdains sacrifice");
              FUN_140af3400(0x14266c870,&stack0x00006760,0,0);
              external_0x69460(&stack0x00006760);
              break;
            case 0x19:
              FUN_140069780(&stack0x00006780,"Disdains competition");
              FUN_140af3400(0x14266c870,&stack0x00006780,0,0);
              external_0x69460(&stack0x00006780);
              break;
            case 0x1a:
              FUN_140069780(&stack0x000067a0,"Disdains perseverance");
              FUN_140af3400(0x14266c870,&stack0x000067a0,0,0);
              external_0x69460(&stack0x000067a0);
              break;
            case 0x1b:
              FUN_140069780(&stack0x000067c0,"Disdains leisure time");
              FUN_140af3400(0x14266c870,&stack0x000067c0,0,0);
              external_0x69460(&stack0x000067c0);
              break;
            case 0x1c:
              FUN_140069780(&stack0x000067e0,"Disdains commerce");
              FUN_140af3400(0x14266c870,&stack0x000067e0,0,0);
              external_0x69460(&stack0x000067e0);
              break;
            case 0x1d:
              FUN_140069780(&stack0x00006800,"Disdains romance");
              FUN_140af3400(0x14266c870,&stack0x00006800,0,0);
              external_0x69460(&stack0x00006800);
              break;
            case 0x1e:
              FUN_140069780(&stack0x00006820,"Disdains nature");
              FUN_140af3400(0x14266c870,&stack0x00006820,0,0);
              external_0x69460(&stack0x00006820);
              break;
            case 0x1f:
              FUN_140069780(&stack0x00006840,"Disdains peace");
              FUN_140af3400(0x14266c870,&stack0x00006840,0,0);
              external_0x69460(&stack0x00006840);
              break;
            case 0x20:
              FUN_140069780(&stack0x00006860,"Disdains knowledge");
              FUN_140af3400(0x14266c870,&stack0x00006860,0,0);
              external_0x69460(&stack0x00006860);
            }
          }
        }
      }
    }
    return;
  }
  return;
}

