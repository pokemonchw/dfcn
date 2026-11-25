/* steam 53.17; two_handed; RVA 0xfe8c0..0xfe8d1 */

undefined8 equipment_two_handed(longlong param_1,int param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xe8) >> 8),
                  param_2 <= *(int *)(*(longlong *)(param_1 + 0xe8) + 0xf8));
}

