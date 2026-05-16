/*
 * Function: FUN_00429770
 * Entry:    00429770
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00429770(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *local_48;
  float local_44;
  undefined4 *local_40;
  uint local_18 [6];
  
  uVar9 = 0;
  local_48 = &DAT_004e1f60;
  pbVar10 = (byte *)(param_2 + 2);
  do {
    puVar13 = local_48;
    puVar14 = local_18;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    if (local_18[0] <= local_18[1]) {
      iVar6 = (local_18[1] - local_18[0]) + 1;
      do {
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    bVar5 = __ftol();
    pbVar10[-2] = bVar5;
    bVar5 = __ftol();
    pbVar10[-1] = bVar5;
    bVar5 = __ftol();
    *pbVar10 = bVar5;
    uVar9 = uVar9 + 1;
    local_48 = local_48 + 6;
    pbVar10 = pbVar10 + 3;
  } while (uVar9 <= (int)param_3 - 1U);
  puVar8 = (undefined4 *)((int)param_3 + -1);
  param_3 = &DAT_004e1f60;
  puVar11 = &DAT_004e1f60;
  local_40 = (undefined4 *)0x0;
  do {
    puVar13 = param_3;
    puVar14 = local_18;
    for (iVar6 = 6; uVar9 = local_18[0], iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
    for (; uVar9 <= local_18[1]; uVar9 = uVar9 + 1) {
      local_44 = 3.4028235e+38;
      uVar1 = *(uint *)(PTR_DAT_004a0a24 + uVar9 * 4);
      puVar7 = (undefined4 *)0x0;
      pbVar10 = (byte *)(param_2 + 2);
      do {
        fVar2 = (float)pbVar10[-2] - (float)(byte)((char)(uVar1 >> 10) << 3);
        fVar4 = (float)pbVar10[-1] - (float)(byte)((char)(uVar1 >> 5) << 3);
        fVar3 = (float)*pbVar10 - (float)(byte)((char)uVar1 << 3);
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        puVar12 = puVar7;
        if (fVar2 == 0.0) break;
        if (fVar2 < local_44) {
          puVar11 = puVar7;
          local_44 = fVar2;
        }
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        pbVar10 = pbVar10 + 3;
        puVar12 = puVar11;
      } while (puVar7 <= puVar8);
      *(short *)(param_1 + uVar1 * 2) = (short)puVar12;
      puVar11 = puVar12;
    }
    if ((uint)local_40 % 10 == 0) {
      FUN_00445c80(&DAT_004a2938,&DAT_004a0bc8);
    }
    local_40 = (undefined4 *)((int)local_40 + 1);
    param_3 = param_3 + 6;
    if (puVar8 < local_40) {
      return;
    }
  } while( true );
}


