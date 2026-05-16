/*
 * Function: FUN_004080b0
 * Entry:    004080b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004080b0(short *param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = (int)param_2[2];
  iVar2 = (int)param_2[1];
  iVar3 = (int)*param_2;
  local_4 = CONCAT22(local_4._2_2_,
                     (short)(param_1[6] * iVar3 + param_1[8] * iVar1 + param_1[7] * iVar2 >> 0xc));
  *param_3 = CONCAT22((short)(param_1[4] * iVar2 + param_1[3] * iVar3 + param_1[5] * iVar1 >> 0xc),
                      (short)(param_1[1] * iVar2 + param_1[2] * iVar1 + *param_1 * iVar3 >> 0xc));
  param_3[1] = local_4;
  return;
}


