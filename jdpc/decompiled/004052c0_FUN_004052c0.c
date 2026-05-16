/*
 * Function: FUN_004052c0
 * Entry:    004052c0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_004052c0(int *param_1,int *param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_10;
  
  piVar10 = param_2;
  local_10 = 0;
  if (0 < (int)param_3) {
    param_2 = (int *)param_3;
    iVar7 = DAT_0045f7fc;
    piVar8 = param_1 + (int)param_3 * 6 + -6;
    do {
      piVar9 = (int *)*param_1;
      piVar1 = (int *)*piVar8;
      iVar2 = piVar9[1];
      iVar3 = piVar1[1];
      if (iVar2 < iVar7) {
        if (iVar3 < iVar7) {
          *(int *)*piVar10 = *piVar9;
          *(undefined4 *)(*piVar10 + 4) = *(undefined4 *)(*param_1 + 4);
          piVar10[1] = param_1[1];
          local_10 = local_10 + 1;
          piVar10[2] = param_1[2];
        }
        else {
          iVar4 = *piVar1;
          if (*piVar9 == iVar4) {
            *(int *)*piVar10 = iVar4;
            fVar5 = (float)(iVar7 - iVar3) / (float)(iVar2 - iVar3);
          }
          else {
            fVar5 = 1.0 / (float)(iVar2 - iVar3);
            fVar6 = (float)(*piVar9 - iVar4) * fVar5;
            fVar5 = (float)(iVar7 - iVar3) * fVar5;
            FUN_00404170(*piVar10,((float)DAT_0045f7fc - ((float)iVar3 - (float)iVar4 / fVar6)) *
                                  fVar6);
          }
          piVar9 = piVar10 + 6;
          *(int *)(*piVar10 + 4) = DAT_0045f7fc + -1;
          piVar10[1] = (int)((float)piVar8[1] * (1.0 - fVar5) + fVar5 * (float)param_1[1]);
          local_10 = local_10 + 2;
          piVar10[2] = (int)((float)piVar8[2] * (1.0 - fVar5) + fVar5 * (float)param_1[2]);
          *(undefined4 *)*piVar9 = *(undefined4 *)*param_1;
          *(undefined4 *)(*piVar9 + 4) = *(undefined4 *)(*param_1 + 4);
          piVar10[7] = param_1[1];
          piVar10[8] = param_1[2];
          piVar10 = piVar9;
        }
LAB_00405521:
        piVar10 = piVar10 + 6;
        iVar7 = DAT_0045f7fc;
      }
      else if (iVar3 < iVar7) {
        iVar4 = *piVar1;
        if (*piVar9 == iVar4) {
          *(int *)*piVar10 = iVar4;
          param_3 = (float)(iVar7 - iVar3) / (float)(iVar2 - iVar3);
        }
        else {
          param_3 = 1.0 / (float)(iVar2 - iVar3);
          fVar5 = (float)(*piVar9 - iVar4) * param_3;
          param_3 = (float)(iVar7 - iVar3) * param_3;
          FUN_00404170(*piVar10,((float)DAT_0045f7fc - ((float)iVar3 - (float)iVar4 / fVar5)) *
                                fVar5);
        }
        *(int *)(*piVar10 + 4) = DAT_0045f7fc + -1;
        piVar10[1] = (int)((float)piVar8[1] * (1.0 - param_3) + (float)param_1[1] * param_3);
        local_10 = local_10 + 1;
        piVar10[2] = (int)((float)piVar8[2] * (1.0 - param_3) + param_3 * (float)param_1[2]);
        goto LAB_00405521;
      }
      param_2 = (int *)((int)param_2 + -1);
      piVar8 = param_1;
      param_1 = param_1 + 6;
    } while (param_2 != (int *)0x0);
  }
  return local_10;
}


