/*
 * Function: FUN_004196e0
 * Entry:    004196e0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004196e0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  byte local_21;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar4 = (uint *)(param_1 + 0x2c);
    iVar5 = 4;
    do {
      fVar1 = (float)*(int *)(puVar4[-3] + 8);
      if ((float)*(int *)(puVar4[-3] + 8) < _DAT_0051d820) {
        if (DAT_0051d808 <= fVar1) {
          fVar1 = (_DAT_0051d828 + fVar1) * _DAT_0051d824;
          FUN_00404170(puVar4,(float)*puVar4 * fVar1);
          FUN_00404170(puVar4 + 1,(float)puVar4[1] * fVar1);
          FUN_00404170(puVar4 + 2,(float)puVar4[2] * fVar1);
        }
        else {
          puVar4[2] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
        }
      }
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  piVar6 = (int *)(param_1 + 0x20);
  local_21 = 0;
  bVar3 = 0;
  iVar5 = 4;
  do {
    fVar1 = (float)*(int *)(*piVar6 + 8);
    if ((float)*(int *)(*piVar6 + 8) < _DAT_0051d820) {
      if (DAT_0051d808 <= fVar1) {
        fVar1 = (_DAT_0051d828 + fVar1) * _DAT_0051d824;
        FUN_00404170(piVar6 + 3,(float)(uint)(piVar6[-4] * piVar6[3]) * fVar1);
        FUN_00404170(piVar6 + 4,(float)(uint)(piVar6[-3] * piVar6[4]) * fVar1);
        FUN_00404170(piVar6 + 5,(float)(uint)(piVar6[-2] * piVar6[5]) * fVar1);
      }
      else {
        piVar6[5] = 0;
        piVar6[4] = 0;
        piVar6[3] = 0;
      }
      local_21 = local_21 | '\x01' << (bVar3 & 0x1f);
    }
    piVar6 = piVar6 + 6;
    bVar3 = bVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  switch(local_21) {
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 5:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 9:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 10:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 0xb:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 0xc:
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 0xd:
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 0xe:
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
    return;
  case 0xf:
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf | 1;
  }
  return;
}


