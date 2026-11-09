/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 140abd3a0..140abd4f5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
vermin_population_eligibility
          (short param_1,ulonglong param_2,char param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  short sVar6;
  
  if (((-1 < param_1) &&
      ((ulonglong)(longlong)param_1 < (ulonglong)(_DAT_1424eca70 - _DAT_1424eca68 >> 3))) &&
     (lVar1 = *(longlong *)(_DAT_1424eca68 + (longlong)param_1 * 8), lVar1 != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x178);
    sVar6 = (short)(*(longlong *)(lVar1 + 0x180) - lVar3 >> 3) + -1;
    if (-1 < sVar6) {
      uVar4 = param_2;
      while( true ) {
        lVar5 = (longlong)sVar6;
        if ((((param_3 == '\0') ||
             (cVar2 = func_0x000140702630(*(undefined8 *)(lVar3 + lVar5 * 8),uVar4), cVar2 == '\0'))
            && ((param_4 == 0xffffffff ||
                (((lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + lVar5 * 8),
                  -1 < (int)param_4 && ((int)(param_4 >> 3) < *(int *)(lVar3 + 0x6b0))) &&
                 (((byte)(1 << ((byte)param_4 & 7)) &
                  *(byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(lVar3 + 0x6a8))) != 0)))))) &&
           ((((param_5 == 0xffffffff ||
              (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + lVar5 * 8), (int)param_5 < 0))
             || (*(int *)(lVar3 + 0x6b0) <= (int)(param_5 >> 3))) ||
            (((byte)(1 << ((byte)param_5 & 7)) &
             *(byte *)((ulonglong)(param_5 >> 3) + *(longlong *)(lVar3 + 0x6a8))) == 0)))) {
          return 0;
        }
        sVar6 = sVar6 + -1;
        if (sVar6 < 0) break;
        lVar3 = *(longlong *)(lVar1 + 0x178);
        uVar4 = param_2 & 0xffff;
      }
    }
  }
  return 1;
}

