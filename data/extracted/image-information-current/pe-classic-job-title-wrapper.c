/* classic PE:6aea11a5:0272d000; job-title-wrapper; RVA 0xd17c80..0xd17dab */

void image_job_title_wrapper(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(short *)(param_1 + 0x14) != 0xa9) {
    image_job_header(0x142402530,param_2,*(short *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x3a),
                     *(undefined2 *)(param_1 + 0x3c),*(undefined2 *)(param_1 + 0x30),
                     *(undefined4 *)(param_1 + 0x34),param_1 + 0x50,*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),param_1,
                     *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
                     *(undefined4 *)(param_1 + 0x13c));
    return;
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_140070fd0(param_2,"Stop Bleeding",0xd);
      return;
    }
    if (iVar1 == 2) {
      FUN_140070fd0(param_2,"Repair Compound Fracture",0x18);
      return;
    }
    if (iVar1 == 3) {
      FUN_140070fd0(param_2,"Remove Rotten Tissue",0x14);
      return;
    }
  }
  FUN_140070fd0(param_2,"Surgery",7);
  return;
}

