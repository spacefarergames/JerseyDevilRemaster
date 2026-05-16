/*
 * Function: FUN_00403620
 * Entry:    00403620
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00403620(undefined2 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = 0;
  DAT_0055eb54 = 0;
  if (DAT_0055ffc0 <= DAT_005618ec) {
    puVar4 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    piVar2 = &DAT_00813b80 + DAT_0055ffc0;
    iVar5 = DAT_0055ffc0;
    do {
      *(undefined2 *)(puVar4 + 1) = param_1;
      iVar1 = *piVar2;
      *puVar4 = 0;
      if (iVar1 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar1 = FUN_00403690(puVar4,iVar1);
        iVar3 = iVar3 + iVar1;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      puVar4 = puVar4 + 0x10;
    } while (iVar5 <= DAT_005618ec);
  }
  return iVar3;
}


