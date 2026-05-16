/*
 * Function: FUN_0042b070
 * Entry:    0042b070
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042b070(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (0 < DAT_004a61b8) {
    piVar1 = (int *)(DAT_004a6194 + 0xc);
    do {
      uVar3 = piVar1[-2];
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      uVar4 = uVar3 >> 1;
      *param_1 = (char)((uVar4 + *piVar1 * 8) / uVar3);
      param_1[1] = (char)((uVar4 + piVar1[1] * 8) / uVar3);
      iVar2 = iVar2 + 1;
      param_1[2] = (char)((uVar4 + piVar1[2] * 8) / uVar3);
      param_1 = param_1 + 3;
      piVar1 = piVar1 + 0xc;
    } while (iVar2 < DAT_004a61b8);
  }
  return;
}


