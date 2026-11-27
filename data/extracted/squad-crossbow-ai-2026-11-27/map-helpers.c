/* candidate tile eligibility for movement | VA [0x14137f170, 0x14137f1e4) | Ghidra decompilation */

uint FUN_14137f170(undefined8 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined1 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1413800a0();
  if ((char)uVar1 == '\0') {
    uVar2 = FUN_141360970(param_1,param_5,0);
    uVar1 = FUN_1414c7110(0x1423f3970,param_2,param_3,param_4,1,uVar2);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

/* read tile type | VA [0x1400695b0, 0x14006963f) | Ghidra decompilation */

undefined2 tileget(longlong param_1,short param_2,short param_3,short param_4)

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
    return *(undefined2 *)
            (lVar1 + (((ulonglong)((int)param_2 & 0xf) + 5) * 0x10 + (ulonglong)((int)param_3 & 0xf)
                     ) * 2);
  }
  return 0;
}

/* read tile occupancy | VA [0x140069640, 0x1400696d0) | Ghidra decompilation */

undefined4 occ(longlong param_1,short param_2,short param_3,short param_4)

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
            (lVar1 + 0x6a0 +
            ((ulonglong)((int)param_2 & 0xf) * 0x10 + (ulonglong)((int)param_3 & 0xf)) * 4);
  }
  return 0;
}
