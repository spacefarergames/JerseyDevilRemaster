/*
 * Function: FUN_00401f80
 * Entry:    00401f80
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00401f80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_00452058 == -1) {
    return 0;
  }
  puVar2 = &DAT_00452058;
  iVar1 = DAT_00452058;
  do {
    if (param_1 == iVar1) {
      return iVar3 * 0x24 + 0x452038;
    }
    iVar1 = puVar2[9];
    puVar2 = puVar2 + 9;
    iVar3 = iVar3 + 1;
  } while (iVar1 != -1);
  return 0;
}


