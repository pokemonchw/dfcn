/* reference PE:6aea05a1:02734000; art_image_elementst; RVA 0x738b0..0x738ca */

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

