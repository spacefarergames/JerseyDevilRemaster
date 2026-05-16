/*
 * Function: FUN_0042f4b0
 * Entry:    0042f4b0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042f4b0(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort uVar4;
  
  psVar1 = (short *)(param_3 + 0x40);
  puVar2 = (undefined2 *)(param_3 + 0x10);
  *(short *)(param_3 + 0x30) = 0x1000 - *(short *)(param_1 + 0xc4);
  *(short *)(param_3 + 0x32) = 0x1000 - *(short *)(param_1 + 0xc6);
  *(short *)(param_3 + 0x34) = 0x1000 - *(short *)(param_1 + 200);
  *psVar1 = *param_2;
  *(short *)(param_3 + 0x42) = param_2[2];
  *(short *)(param_3 + 0x44) = param_2[4];
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
  iVar3 = (int)*(short *)(param_1 + 0x1c);
  uVar4 = *(short *)(param_1 + 0x1c) >> 0xf;
  if ((((*(short *)(param_1 + 0x30) - iVar3 < (int)*(short *)(param_3 + 0x38)) &&
       ((int)*(short *)(param_3 + 0x38) < *(short *)(param_1 + 0x38) + iVar3)) &&
      (*(short *)(param_1 + 0x34) - iVar3 < (int)*(short *)(param_3 + 0x3c))) &&
     ((((int)*(short *)(param_3 + 0x3c) < *(short *)(param_1 + 0x3c) + iVar3 &&
       (*(short *)(param_3 + 0x3a) < *(short *)(param_1 + 0x32))) &&
      (*(short *)(param_1 + 0x3a) < *(short *)(param_3 + 0x3a))))) {
    return CONCAT22(uVar4,1);
  }
  return (uint)uVar4 << 0x10;
}


