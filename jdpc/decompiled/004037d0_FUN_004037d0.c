/*
 * Function: FUN_004037d0
 * Entry:    004037d0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004037d0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int local_78;
  float *local_74;
  float local_70;
  float *local_6c;
  int local_64;
  
  local_78 = 0;
  pfVar9 = (float *)(param_1 + -0x18 + param_3 * 0x18);
  if (0 < param_3) {
    local_64 = param_3;
    local_6c = (float *)(param_2 + 5);
    local_74 = (float *)(param_2 + 4);
    pfVar10 = (float *)(param_2 + 3);
    pfVar11 = (float *)(param_1 + 8);
    do {
      piVar1 = (int *)pfVar11[-2];
      piVar2 = (int *)*pfVar9;
      iVar3 = *piVar1;
      iVar4 = *piVar2;
      if (iVar3 < 0) {
        if (-1 < iVar4) {
          iVar5 = piVar2[1];
          fVar7 = (float)(piVar1[1] - iVar5);
          if ((float)(iVar3 - iVar4) == 0.0) {
            local_70 = 100000.0;
          }
          else {
            local_70 = 1.0 / (float)(iVar3 - iVar4);
          }
          if (fVar7 == 0.0) {
            fVar7 = 1e-05;
          }
          *(undefined4 *)*param_2 = 0;
          fVar8 = (float)-iVar4 * local_70;
          FUN_00404170(*param_2 + 4,(float)iVar5 - (float)iVar4 * fVar7 * local_70);
          fVar7 = 1.0 - fVar8;
          param_2[1] = (int)(pfVar9[1] * fVar7 + pfVar11[-1] * fVar8);
          param_2[2] = (int)(pfVar9[2] * fVar7 + fVar8 * *pfVar11);
          FUN_00404170(pfVar10,(float)(uint)pfVar9[3] * fVar7 + (float)(uint)pfVar11[1] * fVar8);
          FUN_00404170(local_74,(float)(uint)pfVar9[4] * fVar7 + (float)(uint)pfVar11[2] * fVar8);
          FUN_00404170(local_6c,(float)(uint)pfVar9[5] * fVar7 + (float)(uint)pfVar11[3] * fVar8);
          local_78 = local_78 + 1;
          param_2 = param_2 + 6;
          pfVar10 = pfVar10 + 6;
          local_74 = local_74 + 6;
          goto LAB_00403c41;
        }
      }
      else if (iVar4 < 0) {
        iVar5 = piVar2[1];
        iVar6 = piVar1[1];
        fVar7 = 1.0 / (float)(iVar3 - iVar4);
        *(undefined4 *)*param_2 = 0;
        fVar8 = (float)-iVar4 * fVar7;
        FUN_00404170(*param_2 + 4,(float)iVar5 - (float)iVar4 * (float)(iVar6 - iVar5) * fVar7);
        fVar7 = 1.0 - fVar8;
        param_2[1] = (int)(pfVar9[1] * fVar7 + fVar8 * pfVar11[-1]);
        param_2[2] = (int)(pfVar9[2] * fVar7 + fVar8 * *pfVar11);
        FUN_00404170(pfVar10,(float)(uint)pfVar9[3] * fVar7 + (float)(uint)pfVar11[1] * fVar8);
        FUN_00404170(local_74,(float)(uint)pfVar9[4] * fVar7 + (float)(uint)pfVar11[2] * fVar8);
        FUN_00404170(local_6c,(float)(uint)pfVar9[5] * fVar7 + (float)(uint)pfVar11[3] * fVar8);
        *(undefined4 *)param_2[6] = *(undefined4 *)pfVar11[-2];
        local_6c = local_6c + 6;
        *(undefined4 *)(param_2[6] + 4) = *(undefined4 *)((int)pfVar11[-2] + 4);
        param_2[7] = (int)pfVar11[-1];
        param_2[8] = (int)*pfVar11;
        pfVar10[6] = pfVar11[1];
        local_74[6] = pfVar11[2];
        *local_6c = pfVar11[3];
        local_78 = local_78 + 2;
        param_2 = param_2 + 0xc;
        pfVar10 = pfVar10 + 0xc;
        local_74 = local_74 + 0xc;
LAB_00403c41:
        local_6c = local_6c + 6;
      }
      else {
        local_78 = local_78 + 1;
        *(int *)*param_2 = iVar3;
        *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((int)pfVar11[-2] + 4);
        param_2[1] = (int)pfVar11[-1];
        param_2[2] = (int)*pfVar11;
        *pfVar10 = pfVar11[1];
        *local_74 = pfVar11[2];
        *local_6c = pfVar11[3];
        local_6c = local_6c + 6;
        pfVar10 = pfVar10 + 6;
        param_2 = param_2 + 6;
        local_74 = local_74 + 6;
      }
      pfVar9 = pfVar11 + -2;
      pfVar11 = pfVar11 + 6;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
  }
  return local_78;
}


