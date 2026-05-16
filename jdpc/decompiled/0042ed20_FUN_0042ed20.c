/*
 * Function: FUN_0042ed20
 * Entry:    0042ed20
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042ed20(int param_1,int *param_2,uint param_3,int param_4)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int *local_4;
  
  *param_2 = 0;
  local_8 = 0;
  if (DAT_004d237c != 0) {
    local_4 = param_2;
    iVar4 = DAT_004d237c;
    do {
      if (((((param_3 & *(uint *)(iVar4 + 8)) != 0) && (*(short *)(iVar4 + 0x24) == 2)) &&
          (param_1 != iVar4)) &&
         ((*(int *)(param_1 + 0x58) != iVar4 && (*(int *)(param_1 + 0x54) != iVar4)))) {
        FUN_00407070(iVar4 + 0x30,iVar4 + 0x38,(int *)(param_4 + 0x4c));
        if (*(int *)(param_4 + 0x4c) != 0) {
          iVar3 = *(short *)(iVar4 + 0x1c) + 4;
          psVar1 = (short *)(param_4 + 0x40);
          *(short *)(param_4 + 0x30) = 0x1000 - *(short *)(iVar4 + 0xc4);
          *(short *)(param_4 + 0x32) = 0x1000 - *(short *)(iVar4 + 0xc6);
          *(short *)(param_4 + 0x34) = 0x1000 - *(short *)(iVar4 + 200);
          *psVar1 = *(short *)(param_1 + 0xcc);
          *(undefined2 *)(param_4 + 0x42) = *(undefined2 *)(param_1 + 0xd0);
          *(undefined2 *)(param_4 + 0x44) = *(undefined2 *)(param_1 + 0xd4);
          *psVar1 = *psVar1 - *(short *)(iVar4 + 0xcc);
          *(short *)(param_4 + 0x42) = *(short *)(param_4 + 0x42) - *(short *)(iVar4 + 0xd0);
          *(short *)(param_4 + 0x44) = *(short *)(param_4 + 0x44) - *(short *)(iVar4 + 0xd4);
          *(undefined2 *)(param_4 + 0x12) = 0;
          *(undefined2 *)(param_4 + 0x14) = 0;
          *(undefined2 *)(param_4 + 0x16) = 0;
          *(undefined2 *)(param_4 + 0x1a) = 0;
          *(undefined2 *)(param_4 + 0x1c) = 0;
          *(undefined2 *)(param_4 + 0x1e) = 0;
          *(undefined4 *)(param_4 + 0x24) = 0;
          *(undefined4 *)(param_4 + 0x28) = 0;
          *(undefined4 *)(param_4 + 0x2c) = 0;
          puVar2 = (undefined2 *)(param_4 + 0x10);
          *puVar2 = 0x1000;
          *(undefined2 *)(param_4 + 0x18) = 0x1000;
          *(undefined2 *)(param_4 + 0x20) = 0x1000;
          FUN_00407490((int)*(short *)(param_4 + 0x30),puVar2);
          FUN_00407610((int)*(short *)(param_4 + 0x32),puVar2);
          FUN_00407780((int)*(short *)(param_4 + 0x34),puVar2);
          FUN_00407a60(puVar2,psVar1,param_4 + 0x38);
          if (((*(short *)(iVar4 + 0x30) - iVar3 <= (int)*(short *)(param_4 + 0x38)) &&
              ((int)*(short *)(param_4 + 0x38) <= iVar3 + *(short *)(iVar4 + 0x38))) &&
             ((*(short *)(iVar4 + 0x34) - iVar3 <= (int)*(short *)(param_4 + 0x3c) &&
              ((((int)*(short *)(param_4 + 0x3c) <= *(short *)(iVar4 + 0x3c) + iVar3 &&
                (*(short *)(iVar4 + 0x3a) <= *(short *)(param_4 + 0x3a))) &&
               ((int)*(short *)(param_1 + 0x3a) + (int)*(short *)(param_4 + 0x3a) <=
                (int)*(short *)(iVar4 + 0x32))))))) {
            local_8 = local_8 + 1;
            *local_4 = iVar4;
            local_4 = local_4 + 1;
            if (local_8 == 4) break;
            *local_4 = 0;
          }
        }
      }
      iVar4 = *(int *)(iVar4 + 0x10);
    } while (iVar4 != 0);
  }
  return *param_2;
}


