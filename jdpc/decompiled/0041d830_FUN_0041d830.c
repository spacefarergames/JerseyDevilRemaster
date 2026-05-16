/*
 * Function: FUN_0041d830
 * Entry:    0041d830
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041d830(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0xfe;
  puVar2 = (undefined1 *)(param_2 + 6);
  pbVar1 = param_1;
  do {
    *puVar2 = (char)((uint)(byte)puVar2[(int)param_1 - param_2] * param_3 >> 8);
    puVar2[-1] = (char)((uint)pbVar1[5] * param_3 >> 8);
    puVar2[-2] = (char)(param_3 * (uint)pbVar1[4] >> 8);
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 4;
    pbVar1 = pbVar1 + 4;
  } while (iVar3 != 0);
  return;
}


