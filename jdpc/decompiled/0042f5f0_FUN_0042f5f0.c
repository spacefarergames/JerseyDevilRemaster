/*
 * Function: FUN_0042f5f0
 * Entry:    0042f5f0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0042f5f0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  psVar1 = (short *)(param_3 + 0x40);
  puVar2 = (undefined2 *)(param_3 + 0x10);
  *(short *)(param_3 + 0x30) = 0x1000 - *(short *)(param_1 + 0xc4);
  *(short *)(param_3 + 0x32) = 0x1000 - *(short *)(param_1 + 0xc6);
  *(short *)(param_3 + 0x34) = 0x1000 - *(short *)(param_1 + 200);
  *psVar1 = *(short *)(param_2 + 0xcc);
  *(undefined2 *)(param_3 + 0x42) = *(undefined2 *)(param_2 + 0xd0);
  *(undefined2 *)(param_3 + 0x44) = *(undefined2 *)(param_2 + 0xd4);
  *psVar1 = *psVar1 - *(short *)(param_1 + 0xcc);
  *(short *)(param_3 + 0x42) = *(short *)(param_3 + 0x42) - *(short *)(param_1 + 0xd0);
  *(short *)(param_3 + 0x44) = *(short *)(param_3 + 0x44) - *(short *)(param_1 + 0xd4);
  *(undefined2 *)(param_3 + 0x12) = 0;
  *(undefined2 *)(param_3 + 0x14) = 0;
  *(undefined2 *)(param_3 + 0x16) = 0;
  *(undefined2 *)(param_3 + 0x1a) = 0;
  *(undefined2 *)(param_3 + 0x1c) = 0;
  *(undefined2 *)(param_3 + 0x1e) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *puVar2 = 0x1000;
  *(undefined2 *)(param_3 + 0x18) = 0x1000;
  *(undefined2 *)(param_3 + 0x20) = 0x1000;
  FUN_00407490((int)*(short *)(param_3 + 0x30),puVar2);
  FUN_00407610((int)*(short *)(param_3 + 0x32),puVar2);
  FUN_00407780((int)*(short *)(param_3 + 0x34),puVar2);
  FUN_00407a60(puVar2,psVar1,param_3 + 0x38);
  uVar3 = (uint)*(short *)(param_1 + 0x1c);
  if (((((int)((int)*(short *)(param_1 + 0x30) - uVar3) < (int)*(short *)(param_3 + 0x38)) &&
       ((int)*(short *)(param_3 + 0x38) < (int)((int)*(short *)(param_1 + 0x38) + uVar3))) &&
      ((int)((int)*(short *)(param_1 + 0x34) - uVar3) < (int)*(short *)(param_3 + 0x3c))) &&
     ((int)*(short *)(param_3 + 0x3c) < (int)((int)*(short *)(param_1 + 0x3c) + uVar3))) {
    uVar3 = (uint)*(short *)(param_1 + 0x32);
    if (((int)*(short *)(param_2 + 0x3a) + (int)*(short *)(param_3 + 0x3a) < (int)uVar3) &&
       (*(short *)(param_1 + 0x3a) < *(short *)(param_3 + 0x3a))) {
      return CONCAT22(*(short *)(param_1 + 0x32) >> 0xf,1);
    }
  }
  return uVar3 & 0xffff0000;
}


