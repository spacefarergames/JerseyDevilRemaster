/*
 * Function: FUN_00429a90
 * Entry:    00429a90
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00429a90(short *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  byte local_314;
  byte local_313;
  byte local_312;
  uint local_310;
  undefined4 local_30c;
  uint local_308;
  uint local_304;
  char local_300 [768];
  
  uVar7 = 0;
  uVar5 = 0;
  local_310 = 0;
  uVar2 = 0;
  psVar6 = param_1;
  do {
    if ((*psVar6 != 0) && (uVar5 = uVar2, uVar2 != 0 && uVar7 == 0)) {
      uVar7 = uVar2;
      local_310 = uVar2;
    }
    uVar2 = uVar2 + 1;
    psVar6 = psVar6 + 1;
  } while (uVar2 < 0x8000);
  local_30c = FUN_00429dc0(0);
  uVar2 = uVar7;
  if (uVar7 <= uVar5) {
    psVar6 = param_1 + uVar7;
    do {
      if (*psVar6 != 0) {
        local_314 = (byte)(uVar7 >> 10) & 0x1f;
        local_313 = (byte)(uVar7 >> 5) & 0x1f;
        local_312 = (byte)uVar7 & 0x1f;
        FUN_00429c50(&local_30c,&local_314,0);
        uVar2 = FUN_00429fe0();
        while (param_3 < uVar2) {
          FUN_00429d10();
          uVar2 = FUN_00429fe0();
        }
      }
      FUN_00405550(&DAT_004a0bc8);
      uVar7 = uVar7 + 1;
      psVar6 = psVar6 + 1;
      uVar2 = local_310;
    } while (uVar7 <= uVar5);
  }
  local_308 = 0;
  FUN_00429ee0(local_30c,local_300,&local_308);
  uVar7 = local_308;
  FUN_00405550(&DAT_004a0bcc,local_308);
  local_304 = uVar7 & 0xffff;
  if (local_304 != 0) {
    pcVar3 = (char *)(param_2 + 2);
    pcVar4 = local_300 + 1;
    uVar7 = local_304;
    do {
      pcVar3[-2] = pcVar4[-1] << 3;
      pcVar3[-1] = *pcVar4 << 3;
      *pcVar3 = pcVar3[(int)(local_300 + -param_2)] << 3;
      pcVar3 = pcVar3 + 3;
      uVar7 = uVar7 - 1;
      pcVar4 = pcVar4 + 3;
      uVar2 = local_310;
    } while (uVar7 != 0);
  }
  if (uVar2 <= uVar5) {
    param_1 = param_1 + uVar2;
    do {
      local_314 = (byte)(uVar2 >> 10) & 0x1f;
      local_313 = (byte)(uVar2 >> 5) & 0x1f;
      local_312 = (byte)uVar2 & 0x1f;
      sVar1 = FUN_00429f70(local_30c,&local_314);
      *param_1 = sVar1;
      uVar2 = uVar2 + 1;
      param_1 = param_1 + 1;
    } while (uVar2 <= uVar5);
  }
  return local_304;
}


