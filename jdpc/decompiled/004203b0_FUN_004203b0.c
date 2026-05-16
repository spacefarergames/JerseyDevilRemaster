/*
 * Function: FUN_004203b0
 * Entry:    004203b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004203b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004debc0;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_004d18e8 = 0;
  DAT_004d2396 = 0;
  return;
}


