/* classic PE:6aea11a5:0272d000; art_image_elementst; RVA 0x73840..0x7385a */

void image_art_image_elementst(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined1 *)param_2 = 0;
  return;
}

