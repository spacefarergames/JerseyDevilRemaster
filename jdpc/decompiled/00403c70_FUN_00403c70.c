/*
 * Function: FUN_00403c70
 * Entry:    00403c70
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00403c70(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  int local_74;
  float *local_70;
  float local_6c;
  float *local_68;
  int local_64;
  
  local_74 = 0;
  pfVar7 = (float *)(param_1 + -0x18 + param_3 * 0x18);
  if (0 < param_3) {
    local_64 = param_3;
    local_70 = (float *)(param_2 + 4);
    local_68 = (float *)(param_2 + 5);
    pfVar8 = (float *)(param_2 + 3);
    pfVar9 = (float *)(param_1 + 8);
    iVar6 = DAT_0045f7f8;
    do {
      piVar10 = (int *)pfVar9[-2];
      iVar1 = *piVar10;
      iVar2 = *(int *)*pfVar7;
      if (iVar1 < iVar6) {
        if (iVar2 < iVar6) {
          local_74 = local_74 + 1;
          piVar10 = param_2 + 6;
          *(int *)*param_2 = iVar1;
          pfVar7 = pfVar8 + 6;
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((int)pfVar9[-2] + 4);
          param_2[1] = (int)pfVar9[-1];
          param_2[2] = (int)*pfVar9;
          *pfVar8 = pfVar9[1];
          *local_70 = pfVar9[2];
          *local_68 = pfVar9[3];
          local_70 = local_70 + 6;
        }
        else {
          iVar3 = *(int *)((int)*pfVar7 + 4);
          fVar5 = (float)(piVar10[1] - iVar3);
          if ((float)(iVar1 - iVar2) == 0.0) {
            local_6c = 100000.0;
          }
          else {
            local_6c = 1.0 / (float)(iVar1 - iVar2);
          }
          if (fVar5 == 0.0) {
            fVar5 = 1e-05;
          }
          *(int *)*param_2 = iVar6 + -1;
          fVar4 = (float)(iVar6 - iVar2) * local_6c;
          FUN_00404170(*param_2 + 4,
                       (float)DAT_0045f7f8 * fVar5 * local_6c +
                       ((float)iVar3 - (float)iVar2 * fVar5 * local_6c));
          fVar5 = 1.0 - fVar4;
          param_2[1] = (int)(pfVar7[1] * fVar5 + fVar4 * pfVar9[-1]);
          param_2[2] = (int)(pfVar7[2] * fVar5 + fVar4 * *pfVar9);
          FUN_00404170(pfVar8,(float)(uint)pfVar7[3] * fVar5 + (float)(uint)pfVar9[1] * fVar4);
          FUN_00404170(local_70,(float)(uint)pfVar7[4] * fVar5 + (float)(uint)pfVar9[2] * fVar4);
          FUN_00404170(local_68,(float)(uint)pfVar7[5] * fVar5 + (float)(uint)pfVar9[3] * fVar4);
          local_68 = local_68 + 6;
          *(undefined4 *)param_2[6] = *(undefined4 *)pfVar9[-2];
          piVar10 = param_2 + 0xc;
          pfVar7 = pfVar8 + 0xc;
          *(undefined4 *)(param_2[6] + 4) = *(undefined4 *)((int)pfVar9[-2] + 4);
          param_2[7] = (int)pfVar9[-1];
          param_2[8] = (int)*pfVar9;
          pfVar8[6] = pfVar9[1];
          local_70[6] = pfVar9[2];
          local_74 = local_74 + 2;
          local_70 = local_70 + 0xc;
          *local_68 = pfVar9[3];
        }
LAB_00404145:
        local_68 = local_68 + 6;
        iVar6 = DAT_0045f7f8;
        pfVar8 = pfVar7;
        param_2 = piVar10;
      }
      else if (iVar2 < iVar6) {
        iVar3 = *(int *)((int)*pfVar7 + 4);
        fVar5 = (float)(piVar10[1] - iVar3);
        if ((float)(iVar1 - iVar2) == 0.0) {
          local_6c = 100000.0;
        }
        else {
          local_6c = 1.0 / (float)(iVar1 - iVar2);
        }
        if (fVar5 == 0.0) {
          fVar5 = 1e-05;
        }
        *(int *)*param_2 = iVar6 + -1;
        fVar4 = (float)(iVar6 - iVar2) * local_6c;
        FUN_00404170(*param_2 + 4,
                     (float)DAT_0045f7f8 * fVar5 * local_6c +
                     ((float)iVar3 - (float)iVar2 * fVar5 * local_6c));
        fVar5 = 1.0 - fVar4;
        param_2[1] = (int)(pfVar7[1] * fVar5 + pfVar9[-1] * fVar4);
        param_2[2] = (int)(pfVar7[2] * fVar5 + fVar4 * *pfVar9);
        FUN_00404170(pfVar8,(float)(uint)pfVar7[3] * fVar5 + (float)(uint)pfVar9[1] * fVar4);
        FUN_00404170(local_70,(float)(uint)pfVar7[4] * fVar5 + (float)(uint)pfVar9[2] * fVar4);
        FUN_00404170(local_68,(float)(uint)pfVar7[5] * fVar5 + (float)(uint)pfVar9[3] * fVar4);
        local_74 = local_74 + 1;
        piVar10 = param_2 + 6;
        pfVar7 = pfVar8 + 6;
        local_70 = local_70 + 6;
        goto LAB_00404145;
      }
      pfVar7 = pfVar9 + -2;
      pfVar9 = pfVar9 + 6;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
  }
  return local_74;
}


