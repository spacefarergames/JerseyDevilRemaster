/*
 * Function: FUN_00429c50
 * Entry:    00429c50
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429c50(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = 5 - param_3;
  pbVar5 = &DAT_004a0a2d + -param_3;
  while( true ) {
    if (*param_1 == 0) {
      iVar3 = FUN_00429dc0(param_3);
      *param_1 = iVar3;
    }
    if (*(int *)(*param_1 + 4) != 0) break;
    bVar1 = *pbVar5;
    bVar2 = (byte)iVar4;
    param_3 = param_3 + 1;
    pbVar5 = pbVar5 + -1;
    param_1 = (int *)(*param_1 + 0x20 +
                     (((uint)(byte)((param_2[1] & bVar1) >> (bVar2 & 0x1f)) |
                      (uint)(byte)((*param_2 & bVar1) >> (bVar2 & 0x1f)) << 1) << 1 |
                     (uint)(byte)((param_2[2] & bVar1) >> (bVar2 & 0x1f))) * 4);
    iVar4 = iVar4 + -1;
  }
  *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
  *(uint *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + (uint)*param_2;
  *(uint *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + (uint)param_2[1];
  *(uint *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + (uint)param_2[2];
  return;
}


