/*
 * Function: FUN_0043ff60
 * Entry:    0043ff60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0043ff60(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  DAT_0053ea20 = FUN_00443ea0(0x400000);
  DAT_0051d6e0 = FUN_00443ea0(0x1000);
  DAT_004a60d8 = FUN_00443ea0(0x100000);
  puVar1 = &DAT_0053ea80;
  DAT_004a60dc = DAT_004a60d8;
  for (iVar2 = 24000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = &DAT_0053eaa4;
  do {
    *(undefined2 *)((int)puVar1 + -0x12) = 4;
    *puVar1 = 0;
    puVar1 = puVar1 + 0xc;
  } while ((int)puVar1 < 0x5561a4);
  FUN_004253e0();
  FUN_00425340();
  FUN_0043e630();
  FUN_00420300();
  iVar2 = FUN_004022b0(1,DAT_004a6108,DAT_004a610c);
  if (iVar2 != 1) {
    FUN_004022b0(0,0,0);
  }
  DAT_00513a64 = FUN_00443ea0(1000000);
  puVar1 = &DAT_008079c0;
  for (iVar2 = 0x222e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = &DAT_0066c640;
  for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = &DAT_0066b660;
  for (iVar2 = 1000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = &DAT_00513aa0;
  for (iVar2 = 2000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_00513a60 = 0;
  puVar1 = &DAT_0051d840;
  for (iVar2 = 0x8400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_0066d694 = 0;
  DAT_0066d690 = 0;
  thunk_FUN_00421370();
  FUN_00440ac0();
  iVar2 = FUN_004240f0();
  if (iVar2 != 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}


