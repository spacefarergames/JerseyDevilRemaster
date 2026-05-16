/*
 * Function: FUN_00429d10
 * Entry:    00429d10
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429d10(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  int local_4;
  
  iVar4 = 0;
  iVar5 = 0;
  local_c = 0;
  bVar3 = 0;
  iVar2 = FUN_00429e80();
  local_4 = 8;
  piVar6 = (int *)(iVar2 + 0x20);
  do {
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      bVar3 = bVar3 + 1;
      iVar5 = iVar5 + *(int *)(iVar1 + 0x10);
      iVar4 = iVar4 + *(int *)(iVar1 + 0x14);
      local_c = local_c + *(int *)(iVar1 + 0x18);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(iVar1 + 0xc);
      FUN_00443fe0(*piVar6);
    }
    piVar6 = piVar6 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(iVar2 + 4) = 1;
  *(int *)(iVar2 + 0x10) = iVar5;
  *(int *)(iVar2 + 0x14) = iVar4;
  *(int *)(iVar2 + 0x18) = local_c;
  DAT_004a61c8 = DAT_004a61c8 + (1 - (uint)bVar3);
  return;
}


