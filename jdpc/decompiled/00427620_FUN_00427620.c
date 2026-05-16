/*
 * Function: FUN_00427620
 * Entry:    00427620
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00427620(int param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  bool local_24;
  char local_23;
  char local_22;
  uint local_20;
  uint local_1c;
  double local_10;
  
  local_23 = '\0';
  local_22 = '\0';
  local_24 = false;
  if ((param_2 < param_1) && (param_3 < param_1)) {
    local_24 = true;
  }
  if ((param_1 < param_2) && (param_3 < param_2)) {
    local_22 = '\x01';
  }
  if ((param_1 < param_3) && (param_2 < param_3)) {
    local_23 = '\x01';
  }
  local_10 = 3.4028234663852886e+38;
  local_1c = 1;
  local_20 = 1;
  pbVar7 = (byte *)(param_4 + 5);
  uVar3 = local_20;
  do {
    local_20 = uVar3;
    uVar6 = (uint)*pbVar7;
    uVar3 = (uint)pbVar7[-2];
    uVar4 = (uint)pbVar7[-1];
    cVar5 = '\0';
    if ((uVar3 < uVar4) && (uVar6 < uVar4)) {
      cVar5 = '\x01';
    }
    if ((uVar6 <= uVar3) || (cVar2 = '\x01', uVar6 <= uVar4)) {
      cVar2 = '\0';
    }
    dVar1 = (double)(int)(uVar6 - param_3) * (double)(int)(uVar6 - param_3) * _DAT_004a0a10 +
            (double)(int)(uVar4 - param_2) * (double)(int)(uVar4 - param_2) * _DAT_004a0a08 +
            (double)(int)(uVar3 - param_1) * (double)(int)(uVar3 - param_1) * _DAT_004a0a00;
    if (((local_24 == (uVar4 < uVar3 && uVar6 < uVar3)) || (local_23 == cVar2)) ||
       (local_22 == cVar5)) {
      dVar1 = dVar1 * 0.9;
    }
    if (dVar1 == 0.0) break;
    if (dVar1 < local_10) {
      local_1c = local_20;
      local_10 = dVar1;
    }
    pbVar7 = pbVar7 + 3;
    uVar3 = local_20 + 1;
    local_20 = local_1c;
  } while (uVar3 < 0xff);
  if (local_20 == 0xff) {
    FUN_00405550(s_oops_n_004a0adc);
    FUN_00450b00();
  }
  return local_20;
}


