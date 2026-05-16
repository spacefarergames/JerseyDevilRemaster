/*
 * Function: FUN_00432a00
 * Entry:    00432a00
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00432a00(short *param_1,int *param_2,uint param_3,undefined2 *param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int local_8;
  
  iVar3 = (int)param_1;
  puVar4 = (undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)((int)param_1 + 0xcc);
  *(undefined4 *)(param_4 + 0x22) = *(undefined4 *)((int)param_1 + 0xd0);
  local_8 = 0;
  *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)((int)param_1 + 0xd4);
  param_4[4] = (short)*param_2;
  param_4[5] = (short)param_2[1];
  param_4[6] = (short)param_2[2];
  *param_4 = *(undefined2 *)((int)param_1 + 0xc4);
  param_4[1] = *(undefined2 *)((int)param_1 + 0xc6);
  param_4[2] = *(undefined2 *)((int)param_1 + 200);
  piVar1 = (int *)(param_4 + 0x18);
  param_1 = &DAT_004a22d8;
  do {
    param_4[1] = *param_1 + *(short *)(iVar3 + 0xc6);
    FUN_004072e0(param_4,param_4 + 8);
    FUN_00408010(param_4 + 8,param_4 + 4,piVar1);
    *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x1a) + *(int *)(param_4 + 0x1c) + *piVar1;
    *(undefined4 *)(param_4 + 0x22) = *(undefined4 *)(iVar3 + 0xd0);
    *puVar4 = 0;
    param_4[0x2f] = *(undefined2 *)(iVar3 + 0x20);
    FUN_0042f9c0(param_4 + 0x20,piVar1,param_4 + 0x2a,puVar4);
    *(int *)(param_4 + 0x42) = (int)(short)param_4[0x2f];
    *(int *)(param_4 + 0x28) =
         *(int *)(param_4 + 0x28) - (*piVar1 + *(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x1a));
    if ((*(uint *)(iVar3 + 0x14) & 4) == 0) {
      uVar2 = param_4[0x2b];
      if ((uVar2 & 8) == 0) {
        if ((((uVar2 & 2) != 0) && ((*(uint *)(iVar3 + 0x14) & 0x219) == 0)) &&
           (200 < ((int)(short)param_4[0x2d] - *(int *)(iVar3 + 0xd0)) + *(int *)(param_4 + 0x22)))
        {
          param_4[0x2b] = uVar2 & 0xfff9 | 8;
        }
      }
      else {
        *(int *)(param_4 + 0x3a) = *piVar1 + *(int *)(param_4 + 0x20);
        *(int *)(param_4 + 0x3c) = *(int *)(param_4 + 0x22) + 1;
        *(int *)(param_4 + 0x3e) = *(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x24);
        param_4[0x2f] = *(undefined2 *)(iVar3 + 0x20);
        FUN_00431690(param_4 + 0x3a,param_4 + 0x2a,puVar4);
        if (param_4[0x2f] == -1) {
          *(byte *)(param_4 + 0x2b) = *(byte *)(param_4 + 0x2b) | 8;
        }
        else if (((param_4[0x2b] & 2) != 0) &&
                (200 < ((int)(short)param_4[0x2d] - *(int *)(iVar3 + 0xd0)) +
                       *(int *)(param_4 + 0x3c))) {
          param_4[0x2b] = param_4[0x2b] & 0xfff9 | 8;
        }
      }
    }
    else {
      param_4[0x2b] = param_4[0x2b] & 0xfff7 | 2;
    }
    *(undefined2 *)(iVar3 + 0xf4) = param_4[0x2d];
    if ((((param_4[0x2b] & 4) != 0) || (((param_3 & 0x80000) == 0 && ((param_4[0x2b] & 8) != 0))))
       || (*(int *)(param_4 + 0x28) != 0)) {
      *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x100000;
    }
    if ((param_3 & 0x40000000) == 0) {
      bVar5 = param_4[0x2f] != *(short *)(iVar3 + 0x20);
    }
    else {
      bVar5 = false;
    }
    if (((!bVar5) && ((*(byte *)(param_4 + 0x2b) & (~(byte)(param_3 >> 0x10) & 8 | 4)) == 0)) &&
       (*(int *)(param_4 + 0x28) == 0)) break;
    local_8 = local_8 + 1;
    bVar5 = (int)param_1 < 0x4a22e6;
    param_1 = param_1 + 1;
  } while (bVar5);
  if ((param_3 & 0x40000000) != 0) {
    if (*(int *)(iVar3 + 0x58) == DAT_004d13c4) {
      *(undefined2 *)(iVar3 + 0x20) = *DAT_004d13c0;
    }
    else {
      *(undefined2 *)(iVar3 + 0x20) = param_4[0x42];
    }
  }
  *(undefined2 *)(iVar3 + 0xc6) = param_4[1];
  if ((local_8 != 8) || ((*(uint *)(iVar3 + 0x14) & 0x100000) == 0)) {
    *param_2 = *piVar1;
    param_2[1] = *(int *)(param_4 + 0x1a);
    param_2[2] = *(int *)(param_4 + 0x1c);
  }
  return;
}


