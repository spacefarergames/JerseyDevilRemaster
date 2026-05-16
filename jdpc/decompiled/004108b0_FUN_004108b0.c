/*
 * Function: FUN_004108b0
 * Entry:    004108b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004108b0(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  short sVar2;
  
  *param_2 = *param_1 & 7;
  if ((*param_1 & 8) == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)param_1[1];
    *(short *)(param_2 + 4) = (short)param_1[2];
    *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)((int)param_1 + 10);
    *(short *)(param_2 + 5) = (short)param_1[3];
    *(undefined2 *)((int)param_2 + 0x16) = *(undefined2 *)((int)param_1 + 0xe);
    param_2[6] = (uint)(param_1 + 4);
  }
  pbVar1 = (byte *)(sVar2 + 8 + (int)param_1);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)pbVar1;
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(pbVar1 + 2);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pbVar1 + 4);
  *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(pbVar1 + 6);
  param_2[3] = (uint)(pbVar1 + 8);
  return;
}


