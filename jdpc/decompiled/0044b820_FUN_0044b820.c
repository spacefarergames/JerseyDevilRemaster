/*
 * Function: FUN_0044b820
 * Entry:    0044b820
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0044b820(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0044b7f0(param_1[4]);
  if (iVar2 != 0) {
    if (param_1 == (undefined4 *)&DAT_004a2918) {
      iVar2 = 0;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_004a2938) {
        return 0;
      }
      iVar2 = 1;
    }
    DAT_004a6288 = DAT_004a6288 + 1;
    if ((param_1[3] & 0x10c) == 0) {
      if ((&DAT_004a63a0)[iVar2] == 0) {
        iVar3 = FUN_00443ea0(0x1000);
        (&DAT_004a63a0)[iVar2] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
      uVar1 = (&DAT_004a63a0)[iVar2];
      param_1[6] = 0x1000;
      param_1[2] = uVar1;
      *param_1 = uVar1;
      param_1[1] = 0x1000;
      param_1[3] = param_1[3] | 0x1102;
      return 1;
    }
  }
  return 0;
}


