/* Actual Ghidra 12.1.4 output; Steam 53.16. Researcher-assigned name. VA 14007dc40..14007dcc6 */

undefined4 tile_designation_flags(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  
  if (((((-1 < param_2) && ((int)param_2 < *(int *)(param_1 + 0x116bec))) && (-1 < param_3)) &&
      (((int)param_3 < *(int *)(param_1 + 0x116bf0) && (-1 < param_4)))) &&
     (((int)param_4 < *(int *)(param_1 + 0x116bf4) &&
      ((*(longlong *)(param_1 + 0x116bb8) != 0 &&
       (lVar1 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x116bb8) + ((ulonglong)(longlong)param_2 >> 4) * 8) +
                   ((ulonglong)(longlong)param_3 >> 4) * 8) + (longlong)param_4 * 8), lVar1 != 0))))
     )) {
    return *(undefined4 *)
            (lVar1 + 0x2a0 +
            ((ulonglong)((int)param_2 & 0xf) * 0x10 + (ulonglong)((int)param_3 & 0xf)) * 4);
  }
  return 0;
}

