/*
 * Function: FUN_00419bb0
 * Entry:    00419bb0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419bb0(int param_1)

{
  float fVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  byte local_21;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (uint *)(param_1 + 0x2c);
    iVar4 = 3;
    do {
      fVar1 = (float)*(int *)(puVar3[-3] + 8);
      if ((float)*(int *)(puVar3[-3] + 8) < _DAT_0051d820) {
        if (DAT_0051d808 <= fVar1) {
          fVar1 = (_DAT_0051d828 + fVar1) * _DAT_0051d824;
          FUN_00404170(puVar3,(float)*puVar3 * fVar1);
          FUN_00404170(puVar3 + 1,(float)puVar3[1] * fVar1);
          FUN_00404170(puVar3 + 2,(float)puVar3[2] * fVar1);
        }
        else {
          puVar3[2] = 0;
          puVar3[1] = 0;
          *puVar3 = 0;
        }
      }
      puVar3 = puVar3 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
  }
  piVar5 = (int *)(param_1 + 0x20);
  local_21 = 0;
  bVar2 = 0;
  iVar4 = 3;
  do {
    fVar1 = (float)*(int *)(*piVar5 + 8);
    if ((float)*(int *)(*piVar5 + 8) < _DAT_0051d820) {
      if (DAT_0051d808 <= fVar1) {
        fVar1 = (_DAT_0051d828 + fVar1) * _DAT_0051d824;
        FUN_00404170(piVar5 + 3,(float)(uint)(piVar5[-4] * piVar5[3]) * fVar1);
        FUN_00404170(piVar5 + 4,(float)(uint)(piVar5[-3] * piVar5[4]) * fVar1);
        FUN_00404170(piVar5 + 5,(float)(uint)(piVar5[-2] * piVar5[5]) * fVar1);
      }
      else {
        piVar5[5] = 0;
        piVar5[4] = 0;
        piVar5[3] = 0;
      }
      local_21 = local_21 | '\x01' << (bVar2 & 0x1f);
    }
    piVar5 = piVar5 + 6;
    bVar2 = bVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  switch(local_21) {
  case 1:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 7:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
  }
  return;
}


