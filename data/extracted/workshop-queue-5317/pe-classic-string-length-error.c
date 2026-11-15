/* classic PE:6aea11a5:0272d000; string-length-error; RVA 0x66e50..0x66e62 */

void workshop_string_length_error(void)

{
  code *pcVar1;
  
  __Xlength_error_std__YAXPEBD_Z("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

