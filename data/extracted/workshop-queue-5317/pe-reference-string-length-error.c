/* reference PE:6aea05a1:02734000; string-length-error; RVA 0x66ec0..0x66ed2 */

void workshop_string_length_error(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

