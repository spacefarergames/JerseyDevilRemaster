/*
 * Function: FUN_00404d90
 * Entry:    00404d90
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00404d90(int *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int local_10;
  int local_8;
  
  iVar8 = 0;
  local_10 = 0;
  if (0 < (int)param_3) {
    local_8 = (int)param_3;
    iVar6 = DAT_0045f7f8;
    piVar7 = param_1 + (int)param_3 * 6 + -6;
    do {
      iVar1 = *(int *)*param_1;
      iVar2 = *(int *)*piVar7;
      if (iVar1 < iVar6) {
        if (iVar2 < iVar6) {
          local_10 = iVar8 + 1;
          *(int *)*param_2 = iVar1;
          *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(*param_1 + 4);
          param_2[1] = param_1[1];
          param_2[2] = param_1[2];
        }
        else {
          iVar3 = *(int *)(*piVar7 + 4);
          fVar5 = (float)(*(int *)(*param_1 + 4) - iVar3);
          if ((float)(iVar1 - iVar2) == 0.0) {
            param_3 = 100000.0;
          }
          else {
            param_3 = 1.0 / (float)(iVar1 - iVar2);
          }
          if (fVar5 == 0.0) {
            fVar5 = 1e-05;
          }
          *(int *)*param_2 = iVar6 + -1;
          fVar4 = (float)(iVar6 - iVar2) * param_3;
          FUN_00404170(*param_2 + 4,
                       (float)DAT_0045f7f8 * fVar5 * param_3 +
                       ((float)iVar3 - (float)iVar2 * fVar5 * param_3));
          piVar9 = param_2 + 6;
          param_2[1] = (int)((float)piVar7[1] * (1.0 - fVar4) + fVar4 * (float)param_1[1]);
          local_10 = iVar8 + 2;
          param_2[2] = (int)((float)piVar7[2] * (1.0 - fVar4) + fVar4 * (float)param_1[2]);
          *(undefined4 *)*piVar9 = *(undefined4 *)*param_1;
          *(undefined4 *)(*piVar9 + 4) = *(undefined4 *)(*param_1 + 4);
          param_2[7] = param_1[1];
          param_2[8] = param_1[2];
          param_2 = piVar9;
        }
LAB_00405023:
        param_2 = param_2 + 6;
        iVar6 = DAT_0045f7f8;
        iVar8 = local_10;
      }
      else if (iVar2 < iVar6) {
        iVar8 = *(int *)(*piVar7 + 4);
        fVar5 = (float)(*(int *)(*param_1 + 4) - iVar8);
        if ((float)(iVar1 - iVar2) == 0.0) {
          param_3 = 100000.0;
        }
        else {
          param_3 = 1.0 / (float)(iVar1 - iVar2);
        }
        if (fVar5 == 0.0) {
          fVar5 = 1e-05;
        }
        *(int *)*param_2 = iVar6 + -1;
        fVar4 = (float)(iVar6 - iVar2) * param_3;
        FUN_00404170(*param_2 + 4,
                     (float)DAT_0045f7f8 * fVar5 * param_3 +
                     ((float)iVar8 - (float)iVar2 * fVar5 * param_3));
        param_2[1] = (int)((float)piVar7[1] * (1.0 - fVar4) + (float)param_1[1] * fVar4);
        local_10 = local_10 + 1;
        param_2[2] = (int)((float)piVar7[2] * (1.0 - fVar4) + fVar4 * (float)param_1[2]);
        goto LAB_00405023;
      }
      local_8 = local_8 + -1;
      piVar7 = param_1;
      param_1 = param_1 + 6;
    } while (local_8 != 0);
  }
  return iVar8;
}


