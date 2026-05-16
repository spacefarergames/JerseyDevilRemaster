/*
 * Function: FUN_0042f750
 * Entry:    0042f750
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042f750(int param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  *(short *)(param_2 + 0x50) = 0x1000 - *(short *)(param_1 + 0xc4);
  puVar1 = (undefined2 *)(param_2 + 0x10);
  *(short *)(param_2 + 0x52) = 0x1000 - *(short *)(param_1 + 0xc6);
  *(short *)(param_2 + 0x54) = 0x1000 - *(short *)(param_1 + 200);
  *puVar1 = 0x1000;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0x1000;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  *(undefined2 *)(param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 0x20) = 0x1000;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  FUN_00407490((int)*(short *)(param_2 + 0x50),puVar1);
  FUN_00407610((int)*(short *)(param_2 + 0x52),puVar1);
  FUN_00407780((int)*(short *)(param_2 + 0x54),puVar1);
  *(int *)(param_2 + 0x6c) = (int)*(short *)(param_1 + 0x30) - (int)*(short *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  *(int *)(param_2 + 0x70) = (int)*(short *)(param_1 + 0x34) - (int)*(short *)(param_1 + 0x1c);
  *(int *)(param_2 + 0x74) = (int)*(short *)(param_1 + 0x38) + (int)*(short *)(param_1 + 0x1c);
  *(undefined2 *)(param_2 + 0x3a) = *(undefined2 *)(param_1 + 0x3a);
  *(int *)(param_2 + 0x78) = (int)*(short *)(param_1 + 0x3c) + (int)*(short *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0xd4);
  iVar3 = DAT_004d237c;
  if (DAT_004d237c == 0) {
    return 0;
  }
  do {
    if (((((param_3 & *(uint *)(iVar3 + 8)) != 0) &&
         (*(short *)(iVar3 + 0x20) == *(short *)(param_1 + 0x20))) &&
        (*(short *)(iVar3 + 0x24) == 2)) && (param_1 != iVar3)) {
      *(short *)(param_2 + 0x60) = *(short *)(iVar3 + 0xcc) - *(short *)(param_2 + 0x40);
      *(short *)(param_2 + 0x62) = *(short *)(iVar3 + 0xd0) - *(short *)(param_2 + 0x44);
      *(short *)(param_2 + 100) = *(short *)(iVar3 + 0xd4) - *(short *)(param_2 + 0x48);
      FUN_00407a60(param_2 + 0x10,(short *)(param_2 + 0x60),(short *)(param_2 + 0x58));
      iVar2 = (int)*(short *)(param_2 + 0x58);
      if ((((*(int *)(param_2 + 0x6c) <= iVar2) && (iVar2 <= *(int *)(param_2 + 0x74))) &&
          ((*(int *)(param_2 + 0x70) <= (int)*(short *)(param_2 + 0x5c) &&
           (((int)*(short *)(param_2 + 0x5c) <= *(int *)(param_2 + 0x78) &&
            ((int)*(short *)(param_2 + 0x5a) + (int)*(short *)(param_1 + 0x3a) <=
             (int)*(short *)(param_2 + 0x32))))))) &&
         (*(short *)(param_2 + 0x3a) <= *(short *)(param_2 + 0x5a))) {
        return iVar3;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      return 0;
    }
  } while( true );
}


