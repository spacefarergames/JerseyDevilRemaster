/*
 * Function: FUN_00404650
 * Entry:    00404650
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00404650(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  float local_80;
  int local_78;
  float *local_74;
  float *local_70;
  int local_64;
  
  local_78 = 0;
  pfVar7 = (float *)(param_1 + -0x18 + param_3 * 0x18);
  if (0 < param_3) {
    local_64 = param_3;
    local_70 = (float *)(param_2 + 5);
    local_74 = (float *)(param_2 + 4);
    pfVar8 = (float *)(param_2 + 3);
    pfVar9 = (float *)(param_1 + 8);
    iVar6 = DAT_0045f7fc;
    do {
      piVar1 = (int *)pfVar9[-2];
      iVar2 = piVar1[1];
      iVar3 = *(int *)((int)*pfVar7 + 4);
      if (iVar2 < iVar6) {
        if (iVar3 < iVar6) {
          piVar10 = param_2 + 6;
          *(int *)*param_2 = *piVar1;
          local_78 = local_78 + 1;
          pfVar7 = pfVar8 + 6;
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((int)pfVar9[-2] + 4);
          param_2[1] = (int)pfVar9[-1];
          param_2[2] = (int)*pfVar9;
          *pfVar8 = pfVar9[1];
          *local_74 = pfVar9[2];
          local_74 = local_74 + 6;
          *local_70 = pfVar9[3];
        }
        else {
          iVar4 = *(int *)*pfVar7;
          if (*piVar1 == iVar4) {
            *(int *)*param_2 = iVar4;
            local_80 = (float)(iVar6 - iVar3) / (float)(iVar2 - iVar3);
          }
          else {
            local_80 = 1.0 / (float)(iVar2 - iVar3);
            fVar5 = (float)(*piVar1 - iVar4) * local_80;
            local_80 = (float)(iVar6 - iVar3) * local_80;
            FUN_00404170(*param_2,((float)DAT_0045f7fc - ((float)iVar3 - (float)iVar4 / fVar5)) *
                                  fVar5);
          }
          fVar5 = 1.0 - local_80;
          *(int *)(*param_2 + 4) = DAT_0045f7fc + -1;
          param_2[1] = (int)(pfVar7[1] * fVar5 + local_80 * pfVar9[-1]);
          param_2[2] = (int)(pfVar7[2] * fVar5 + local_80 * *pfVar9);
          FUN_00404170(pfVar8,(float)(uint)pfVar7[3] * fVar5 + (float)(uint)pfVar9[1] * local_80);
          FUN_00404170(local_74,(float)(uint)pfVar7[4] * fVar5 + (float)(uint)pfVar9[2] * local_80);
          FUN_00404170(local_70,(float)(uint)pfVar7[5] * fVar5 + (float)(uint)pfVar9[3] * local_80);
          local_70 = local_70 + 6;
          *(undefined4 *)param_2[6] = *(undefined4 *)pfVar9[-2];
          piVar10 = param_2 + 0xc;
          pfVar7 = pfVar8 + 0xc;
          *(undefined4 *)(param_2[6] + 4) = *(undefined4 *)((int)pfVar9[-2] + 4);
          param_2[7] = (int)pfVar9[-1];
          param_2[8] = (int)*pfVar9;
          pfVar8[6] = pfVar9[1];
          local_74[6] = pfVar9[2];
          local_78 = local_78 + 2;
          local_74 = local_74 + 0xc;
          *local_70 = pfVar9[3];
        }
LAB_00404b3c:
        local_70 = local_70 + 6;
        iVar6 = DAT_0045f7fc;
        pfVar8 = pfVar7;
        param_2 = piVar10;
      }
      else if (iVar3 < iVar6) {
        iVar4 = *(int *)*pfVar7;
        if (*piVar1 == iVar4) {
          *(int *)*param_2 = iVar4;
          local_80 = (float)(iVar6 - iVar3) / (float)(iVar2 - iVar3);
        }
        else {
          local_80 = 1.0 / (float)(iVar2 - iVar3);
          fVar5 = (float)(*piVar1 - iVar4) * local_80;
          local_80 = (float)(iVar6 - iVar3) * local_80;
          FUN_00404170(*param_2,((float)DAT_0045f7fc - ((float)iVar3 - (float)iVar4 / fVar5)) *
                                fVar5);
        }
        fVar5 = 1.0 - local_80;
        *(int *)(*param_2 + 4) = DAT_0045f7fc + -1;
        param_2[1] = (int)(pfVar7[1] * fVar5 + pfVar9[-1] * local_80);
        param_2[2] = (int)(pfVar7[2] * fVar5 + local_80 * *pfVar9);
        FUN_00404170(pfVar8,(float)(uint)pfVar7[3] * fVar5 + (float)(uint)pfVar9[1] * local_80);
        FUN_00404170(local_74,(float)(uint)pfVar7[4] * fVar5 + (float)(uint)pfVar9[2] * local_80);
        FUN_00404170(local_70,(float)(uint)pfVar7[5] * fVar5 + (float)(uint)pfVar9[3] * local_80);
        local_78 = local_78 + 1;
        piVar10 = param_2 + 6;
        pfVar7 = pfVar8 + 6;
        local_74 = local_74 + 6;
        goto LAB_00404b3c;
      }
      pfVar7 = pfVar9 + -2;
      pfVar9 = pfVar9 + 6;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
  }
  return local_78;
}


