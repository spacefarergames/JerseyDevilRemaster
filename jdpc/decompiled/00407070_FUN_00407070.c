/*
 * Function: FUN_00407070
 * Entry:    00407070
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00407070(uint *param_1,uint *param_2,uint *param_3)

{
  *param_3 = (*param_1 | *param_2 | (*param_1 | *param_2) >> 0x10 |
             *(uint *)((int)param_1 + 2) | *(uint *)((int)param_2 + 2)) & 0xffff;
  return;
}


