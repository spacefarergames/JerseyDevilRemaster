/*
 * Function: FUN_0042f380
 * Entry:    0042f380
 * Warning:  Decompiled pseudocode, not original source.
 */


byte FUN_0042f380(int param_1,int param_2)

{
  short *psVar1;
  undefined2 *puVar2;
  
  psVar1 = (short *)(param_2 + 0x40);
  puVar2 = (undefined2 *)(param_2 + 0x10);
  *(short *)(param_2 + 0x30) = 0x1000 - *(short *)(param_1 + 0xc4);
  *(short *)(param_2 + 0x32) = 0x1000 - *(short *)(param_1 + 0xc6);
  *(short *)(param_2 + 0x34) = 0x1000 - *(short *)(param_1 + 200);
  *psVar1 = *(short *)(DAT_004d13c4 + 0xcc);
  *(undefined2 *)(param_2 + 0x42) = *(undefined2 *)(DAT_004d13c4 + 0xd0);
  *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(DAT_004d13c4 + 0xd4);
  *psVar1 = *psVar1 - *(short *)(param_1 + 0xcc);
  *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) - *(short *)(param_1 + 0xd0);
  *(short *)(param_2 + 0x44) = *(short *)(param_2 + 0x44) - *(short *)(param_1 + 0xd4);
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined2 *)(param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  *(undefined2 *)(param_2 + 0x1e) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *puVar2 = 0x1000;
  *(undefined2 *)(param_2 + 0x18) = 0x1000;
  *(undefined2 *)(param_2 + 0x20) = 0x1000;
  FUN_00407490((int)*(short *)(param_2 + 0x30),puVar2);
  FUN_00407610((int)*(short *)(param_2 + 0x32),puVar2);
  FUN_00407780((int)*(short *)(param_2 + 0x34),puVar2);
  FUN_00407a60(puVar2,psVar1,param_2 + 0x38);
  if (*(short *)(param_2 + 0x3c) < *(short *)(param_1 + 0x34)) {
    return 1;
  }
  return (*(short *)(param_2 + 0x3c) <= *(short *)(param_1 + 0x3c)) - 1U & 2;
}


