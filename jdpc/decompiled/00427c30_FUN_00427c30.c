/*
 * Function: FUN_00427c30
 * Entry:    00427c30
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00427c30(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint local_78;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  FUN_00426e90((double)param_1 * 0.00392156862745098,(double)param_2 * 0.00392156862745098,
               (double)param_3 * 0.00392156862745098,&local_38,&local_28,local_18);
  local_40 = 3.4028234663852886e+38;
  local_78 = 0;
  uVar12 = 1;
  pbVar11 = (byte *)(param_4 + 5);
  do {
    bVar1 = pbVar11[-2];
    bVar2 = pbVar11[-1];
    bVar3 = *pbVar11;
    iVar7 = __ftol();
    iVar8 = __ftol();
    iVar9 = __ftol();
    FUN_00426e90((double)bVar1,(double)bVar2,(double)bVar3,&local_30,&local_20,local_10);
    dVar4 = (double)(iVar7 - param_1) * (double)(iVar7 - param_1) * _DAT_004a0a00;
    dVar5 = (double)(iVar8 - param_2) * (double)(iVar8 - param_2) * _DAT_004a0a08;
    dVar6 = (double)(iVar9 - param_3) * (double)(iVar9 - param_3) * _DAT_004a0a10;
    uVar10 = __ftol();
    dVar4 = (local_28 - local_20) * _DAT_004a0a18 * 180.0 +
            (dVar6 - (double)(int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) *
                     _DAT_004a0a18 * -2.0) + dVar5 + dVar4;
    if (dVar4 == 0.0) {
      return uVar12;
    }
    if (dVar4 < local_40) {
      local_78 = uVar12;
      local_40 = dVar4;
    }
    uVar12 = uVar12 + 1;
    pbVar11 = pbVar11 + 3;
  } while (uVar12 < 0xff);
  return local_78;
}


