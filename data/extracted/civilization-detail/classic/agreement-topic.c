/* Original PE owner: classic	agreement-topic	0x140ade250	0x140ade2a0 */

void mission_agreement_topic(short param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  param_2[2] = 0;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar1 = 0;
  uVar3 = 9;
  if (param_1 == 2) {
    uVar3 = 0xd;
  }
  pcVar2 = "something";
  if (param_1 == 2) {
    pcVar2 = "lumber limits";
  }
  FUN_140070e90(param_2,pcVar2,uVar3);
  return;
}

