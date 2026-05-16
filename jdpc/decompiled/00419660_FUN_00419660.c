/*
 * Function: FUN_00419660
 * Entry:    00419660
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419660(float *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (param_2 & 0xffff) * 0x10;
  pfVar1 = (float *)(iVar3 + 8 + DAT_0066d6c8);
  if (*(float *)(iVar3 + 8 + DAT_0066d6c8) < _DAT_0051d820) {
    if (*pfVar1 < DAT_0051d808) {
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      return;
    }
    fVar2 = (_DAT_0051d828 + *pfVar1) * _DAT_0051d824;
    *param_1 = *param_1 * fVar2;
    param_1[1] = fVar2 * param_1[1];
    param_1[2] = fVar2 * param_1[2];
  }
  return;
}


