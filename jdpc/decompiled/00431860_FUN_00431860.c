/*
 * Function: FUN_00431860
 * Entry:    00431860
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00431860(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((uVar5 & 4) == 0) {
    uVar3 = *(uint *)(param_2 + 4);
    iVar1 = *(int *)(param_1 + 0xd0) + uVar3;
    if (iVar1 < *(int *)(param_1 + 0xd0) + 200) {
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 2) == 0) {
          if ((int)uVar3 < 0x47) {
            if ((int)uVar3 < -0x46) {
              *(undefined4 *)(param_2 + 4) = 0xffffffba;
            }
          }
          else {
            *(undefined4 *)(param_2 + 4) = 0x46;
          }
        }
        else if (((0 < (int)uVar3) || (-0x46 < (int)uVar3)) && ((uVar3 & 0xfffffffe) != 0)) {
          *(int *)(param_2 + 4) = (int)uVar3 >> 1;
        }
      }
    }
    else if ((uVar5 & 1) == 0) {
      if (0xc00 < *(short *)(param_1 + 0xf0)) {
        *(undefined2 *)(param_1 + 0xf0) = 0xc00;
      }
      iVar4 = FUN_004072c0((int)*(short *)(param_1 + 0xf0));
      if ((*(short *)(param_1 + 0xf0) == 0xa00) && (*(short *)(param_1 + 0xfe) < 0)) {
        *(undefined2 *)(param_1 + 0xfe) = 0;
      }
      uVar5 = *(uint *)(param_1 + 0x14);
      sVar6 = (short)(iVar4 * -0x46 >> 0xc);
      *(short *)(param_1 + 0xfe) = sVar6;
      if ((uVar5 & 0x10000) == 0) {
        iVar4 = (int)sVar6 + *(int *)(param_1 + 0xd0);
      }
      else {
        iVar4 = *(int *)(param_1 + 0xd0) + 9;
      }
      if (iVar4 < iVar1) {
        if ((uVar5 & 0x10000) == 0) {
          *(int *)(param_2 + 4) = (int)*(short *)(param_1 + 0xfe);
        }
        else {
          *(undefined4 *)(param_2 + 4) = 9;
        }
        uVar5 = *(uint *)(param_1 + 0x14);
      }
      else if ((*(short *)(param_3 + 2) != 8) && (*(short *)(param_3 + 2) != 1)) {
        uVar2 = *(undefined2 *)(param_3 + 8);
        *(undefined2 *)(param_1 + 0xf0) = 0xa00;
        *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + 100;
        *(undefined2 *)(param_1 + 0xf6) = uVar2;
        *(uint *)(param_1 + 0x14) = uVar5 & 0xfffefdff | 2;
        return;
      }
      *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0xf0) + 100;
      *(uint *)(param_1 + 0x14) = uVar5 & 0xfffffffd | 0x200;
      return;
    }
    *(undefined2 *)(param_1 + 0xfe) = *(undefined2 *)(param_2 + 4);
    if (*(int *)(param_2 + 4) + *(int *)(param_1 + 0xd0) ==
        *(int *)(param_1 + 0xe8) + (int)*(short *)(param_1 + 0xf4)) {
      *(undefined2 *)(param_1 + 0xf6) = *(undefined2 *)(param_3 + 8);
      *(undefined2 *)(param_1 + 0xf0) = 0xa00;
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffefdff | 2;
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x14);
    if ((uVar5 & 2) == 0) {
      *(uint *)(param_1 + 0x14) = uVar5 & 0xfffffffd;
      if ((uVar5 & 1) == 0) {
        *(uint *)(param_1 + 0x14) = uVar5 & 0xfffffffd | 0x200;
      }
    }
  }
  return;
}


