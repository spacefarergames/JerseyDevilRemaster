/*
 * Function: FUN_0042e9b0
 * Entry:    0042e9b0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042e9b0(int param_1,uint param_2,int param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_004d237c;
  if (DAT_004d237c == 0) {
    return 0;
  }
  do {
    if (((((param_2 & *(uint *)(iVar5 + 8)) != 0) && (*(short *)(iVar5 + 0x24) == 2)) &&
        (param_1 != iVar5)) &&
       (((*(int *)(param_1 + 0x58) != iVar5 && (*(int *)(param_1 + 0x54) != iVar5)) &&
        (FUN_00407070(iVar5 + 0x30,iVar5 + 0x38,(int *)(param_3 + 0x4c)),
        *(int *)(param_3 + 0x4c) != 0)))) {
      iVar4 = *(short *)(iVar5 + 0x1c) + 4;
      psVar1 = (short *)(param_3 + 0x40);
      *(short *)(param_3 + 0x30) = 0x1000 - *(short *)(iVar5 + 0xc4);
      *(short *)(param_3 + 0x32) = 0x1000 - *(short *)(iVar5 + 0xc6);
      *(short *)(param_3 + 0x34) = 0x1000 - *(short *)(iVar5 + 200);
      *psVar1 = *(short *)(param_1 + 0xcc);
      *(undefined2 *)(param_3 + 0x42) = *(undefined2 *)(param_1 + 0xd0);
      *(undefined2 *)(param_3 + 0x44) = *(undefined2 *)(param_1 + 0xd4);
      *psVar1 = *psVar1 - *(short *)(iVar5 + 0xcc);
      *(short *)(param_3 + 0x42) = *(short *)(param_3 + 0x42) - *(short *)(iVar5 + 0xd0);
      *(short *)(param_3 + 0x44) = *(short *)(param_3 + 0x44) - *(short *)(iVar5 + 0xd4);
      *(undefined2 *)(param_3 + 0x12) = 0;
      *(undefined2 *)(param_3 + 0x14) = 0;
      *(undefined2 *)(param_3 + 0x16) = 0;
      *(undefined2 *)(param_3 + 0x1a) = 0;
      *(undefined2 *)(param_3 + 0x1c) = 0;
      *(undefined2 *)(param_3 + 0x1e) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x2c) = 0;
      puVar2 = (undefined2 *)(param_3 + 0x10);
      *puVar2 = 0x1000;
      *(undefined2 *)(param_3 + 0x18) = 0x1000;
      *(undefined2 *)(param_3 + 0x20) = 0x1000;
      FUN_00407490((int)*(short *)(param_3 + 0x30),puVar2);
      FUN_00407610((int)*(short *)(param_3 + 0x32),puVar2);
      FUN_00407780((int)*(short *)(param_3 + 0x34),puVar2);
      FUN_00407a60(puVar2,psVar1,param_3 + 0x38);
      if (((*(short *)(iVar5 + 0x30) - iVar4 <= (int)*(short *)(param_3 + 0x38)) &&
          ((int)*(short *)(param_3 + 0x38) <= iVar4 + *(short *)(iVar5 + 0x38))) &&
         ((*(short *)(iVar5 + 0x34) - iVar4 <= (int)*(short *)(param_3 + 0x3c) &&
          ((((int)*(short *)(param_3 + 0x3c) <= *(short *)(iVar5 + 0x3c) + iVar4 &&
            (*(short *)(iVar5 + 0x3a) <= *(short *)(param_3 + 0x3a))) &&
           ((int)*(short *)(param_1 + 0x3a) + (int)*(short *)(param_3 + 0x3a) <=
            (int)*(short *)(iVar5 + 0x32))))))) {
        return iVar5;
      }
    }
    piVar3 = (int *)(iVar5 + 0x10);
    iVar5 = *piVar3;
    if (*piVar3 == 0) {
      return 0;
    }
  } while( true );
}


