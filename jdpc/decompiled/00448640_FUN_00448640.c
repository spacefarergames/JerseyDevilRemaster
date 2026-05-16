/*
 * Function: FUN_00448640
 * Entry:    00448640
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00448640(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  iVar2 = 0;
  piVar3 = DAT_00a14e2c;
  if (0 < DAT_00a15e40) {
    do {
      if (*piVar3 == 0) {
        iVar1 = FUN_00443ea0(0x20);
        DAT_00a14e2c[iVar2] = iVar1;
        if ((undefined4 *)DAT_00a14e2c[iVar2] != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)DAT_00a14e2c[iVar2];
        }
        break;
      }
      if ((*(byte *)(*piVar3 + 0xc) & 0x83) == 0) {
        puVar4 = (undefined4 *)DAT_00a14e2c[iVar2];
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < DAT_00a15e40);
  }
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[4] = 0xffffffff;
  }
  return puVar4;
}


