/*
 * Function: FUN_0044c310
 * Entry:    0044c310
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044c310(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_004a65dc = 1;
                    /* WARNING: Could not recover jumptable at 0x0044c32d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_004a65dc = 1;
                    /* WARNING: Could not recover jumptable at 0x0044c342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_004a6648;
  }
  DAT_004a65dc = (uint)bVar2;
  return param_1;
}


