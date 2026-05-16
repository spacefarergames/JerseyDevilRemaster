/*
 * Function: FUN_0041fb80
 * Entry:    0041fb80
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041fb80(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_0055ffc0 <= DAT_005618ec) {
    puVar1 = &DAT_00561900 + DAT_0055ffc0 * 0x10;
    puVar4 = puVar1;
    iVar3 = DAT_0055ffc0;
    do {
      do {
        if (((int)puVar1[2] <= (int)puVar1[3]) && (iVar2 = puVar1[2] - puVar1[4], 0 < iVar2)) {
          puVar1[6] = puVar1[6] + puVar1[7] * iVar2;
        }
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
      iVar3 = iVar3 + 1;
      puVar1 = puVar4 + 0x10;
      puVar4 = puVar1;
    } while (iVar3 <= DAT_005618ec);
  }
  return;
}


