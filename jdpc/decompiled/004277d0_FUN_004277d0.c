/*
 * Function: FUN_004277d0
 * Entry:    004277d0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004277d0(int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  byte *pbVar2;
  uint uVar3;
  uint local_1c;
  double local_10;
  
  uVar3 = 1;
  local_10 = 3.4028234663852886e+38;
  local_1c = 1;
  pbVar2 = (byte *)(param_4 + 5);
  do {
    dVar1 = (double)(int)((uint)*pbVar2 - param_3) * (double)(int)((uint)*pbVar2 - param_3) *
            _DAT_004a0a10 +
            (double)(int)((uint)pbVar2[-1] - param_2) * (double)(int)((uint)pbVar2[-1] - param_2) *
            _DAT_004a0a08 +
            (double)(int)((uint)pbVar2[-2] - param_1) * (double)(int)((uint)pbVar2[-2] - param_1) *
            _DAT_004a0a00;
    if (dVar1 < local_10) {
      local_1c = uVar3;
      local_10 = dVar1;
    }
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 3;
  } while (uVar3 < 0xff);
  if (local_1c == 0xff) {
    FUN_00405550(s_oops_n_004a0adc);
    FUN_00450b00();
  }
  return local_1c;
}


