/*
 * Function: FUN_00427e60
 * Entry:    00427e60
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00427e60(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST1;
  uint local_74;
  double local_50;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  FUN_00426e90((double)param_1 * 0.00392156862745098,(double)param_2 * 0.00392156862745098,
               (double)param_3 * 0.00392156862745098,local_38,local_20,local_28);
  local_50 = 3.4028234663852886e+38;
  local_74 = 0;
  uVar7 = 1;
  pbVar6 = (byte *)(param_4 + 5);
  do {
    bVar1 = pbVar6[-2];
    bVar2 = pbVar6[-1];
    bVar3 = *pbVar6;
    __ftol();
    iVar4 = __ftol();
    __ftol();
    FUN_00426e90((double)bVar1,(double)bVar2,(double)bVar3,local_30,local_10,local_18);
    fVar8 = (float10)(iVar4 - param_2) * (float10)(iVar4 - param_2) * (float10)_DAT_004a0a08;
    uVar5 = __ftol();
    fVar9 = (float10)(int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f));
    if ((float10)180.0 < fVar9) {
      fVar9 = fVar9 - (float10)360.0;
    }
    fVar8 = fVar9 * fVar9 * (float10)_DAT_004a0a18 + extraout_ST0 + extraout_ST1 + fVar8;
    if (fVar8 == (float10)0.0) {
      return uVar7;
    }
    if (fVar8 < (float10)local_50) {
      local_50 = (double)fVar8;
      local_74 = uVar7;
    }
    uVar7 = uVar7 + 1;
    pbVar6 = pbVar6 + 3;
  } while (uVar7 < 0xff);
  return local_74;
}


