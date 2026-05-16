/*
 * Function: FUN_00407400
 * Entry:    00407400
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined2 * FUN_00407400(short *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  short sVar2;
  
  *param_2 = 0x1000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = FUN_004072a0((int)*param_1);
  param_2[4] = uVar1;
  sVar2 = FUN_004072c0((int)*param_1);
  param_2[5] = -sVar2;
  param_2[6] = 0;
  uVar1 = FUN_004072c0((int)*param_1);
  param_2[7] = uVar1;
  uVar1 = FUN_004072a0((int)*param_1);
  param_2[8] = uVar1;
  FUN_00407610((int)param_1[1],param_2);
  FUN_00407780((int)param_1[2],param_2);
  return param_2;
}


