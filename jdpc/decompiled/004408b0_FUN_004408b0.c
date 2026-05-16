/*
 * Function: FUN_004408b0
 * Entry:    004408b0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004408b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00440840();
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar2 = FUN_00440810(*(undefined4 *)(param_1 + 0x60),iVar1);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined2 *)(iVar1 + 8) = 0x8008;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return iVar1;
}


