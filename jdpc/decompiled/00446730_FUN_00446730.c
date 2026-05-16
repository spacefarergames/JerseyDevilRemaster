/*
 * Function: FUN_00446730
 * Entry:    00446730
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00446730(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_004a4bb0 == param_1) {
    PTR_LOOP_004a4bb0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_004a2b90) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00a14e24,0,param_1);
    return;
  }
  DAT_004a2ba0 = 0xffffffff;
  return;
}


