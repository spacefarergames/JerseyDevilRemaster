/*
 * Function: FUN_00408500
 * Entry:    00408500
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00408500(byte *param_1,ushort *param_2)

{
  byte bVar1;
  
  *param_2 = (ushort)*param_1;
  param_2[1] = (ushort)param_1[2];
  bVar1 = param_1[4];
  *param_2 = *param_2 << 4;
  param_2[1] = param_2[1] << 4;
  param_2[2] = (ushort)bVar1;
  param_2[2] = param_2[2] << 4;
  return;
}


