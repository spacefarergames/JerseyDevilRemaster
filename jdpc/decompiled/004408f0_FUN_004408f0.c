/*
 * Function: FUN_004408f0
 * Entry:    004408f0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004408f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004406f0(*(undefined4 *)(param_1 + 0x60),param_2);
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = FUN_00440790(*(undefined4 *)(param_1 + 0x60),iVar1);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  return;
}


