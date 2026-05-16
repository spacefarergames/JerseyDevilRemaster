/*
 * Function: FUN_004278d0
 * Entry:    004278d0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004278d0(int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte *pbVar4;
  uint uVar5;
  uint local_24;
  double local_10;
  
  uVar5 = 1;
  local_10 = 3.4028234663852886e+38;
  local_24 = 1;
  pbVar4 = (byte *)(param_4 + 5);
  do {
    dVar1 = (double)(int)((uint)pbVar4[-2] - param_1) * (double)(int)((uint)pbVar4[-2] - param_1) *
            _DAT_004a0a00;
    dVar2 = (double)(int)((uint)pbVar4[-1] - param_2) * (double)(int)((uint)pbVar4[-1] - param_2) *
            _DAT_004a0a08;
    dVar3 = (double)(int)((uint)*pbVar4 - param_3) * (double)(int)((uint)*pbVar4 - param_3) *
            _DAT_004a0a10;
    dVar1 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
    if (dVar1 < local_10) {
      local_24 = uVar5;
      local_10 = dVar1;
    }
    uVar5 = uVar5 + 1;
    pbVar4 = pbVar4 + 3;
  } while (uVar5 < 0xff);
  if (local_24 == 0xff) {
    FUN_00405550(s_oops_n_004a0adc);
    FUN_00450b00();
  }
  return local_24;
}


