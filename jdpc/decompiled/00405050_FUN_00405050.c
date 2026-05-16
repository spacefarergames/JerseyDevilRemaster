/*
 * Function: FUN_00405050
 * Entry:    00405050
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00405050(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_c;
  
  piVar9 = param_2;
  local_c = 0;
  if (0 < param_3) {
    param_2 = (int *)param_3;
    piVar7 = param_1 + param_3 * 6 + -6;
    do {
      piVar8 = (int *)*param_1;
      piVar1 = (int *)*piVar7;
      iVar2 = piVar8[1];
      iVar3 = piVar1[1];
      if (iVar2 < 0) {
        if (-1 < iVar3) {
          iVar4 = *piVar1;
          if (*piVar8 == iVar4) {
            *(int *)*piVar9 = iVar4;
            fVar5 = (float)-iVar3 / (float)(iVar2 - iVar3);
          }
          else {
            fVar5 = 1.0 / (float)(iVar2 - iVar3);
            fVar6 = (float)(*piVar8 - iVar4) * fVar5;
            fVar5 = (float)-iVar3 * fVar5;
            FUN_00404170(*piVar9,-((float)iVar3 - (float)iVar4 / fVar6) * fVar6);
          }
          *(undefined4 *)(*piVar9 + 4) = 0;
          local_c = local_c + 1;
          piVar9[1] = (int)((float)piVar7[1] * (1.0 - fVar5) + (float)param_1[1] * fVar5);
          piVar9[2] = (int)((float)piVar7[2] * (1.0 - fVar5) + fVar5 * (float)param_1[2]);
          goto LAB_0040528f;
        }
      }
      else {
        if (iVar3 < 0) {
          iVar4 = *piVar1;
          if (*piVar8 == iVar4) {
            *(int *)*piVar9 = iVar4;
            fVar5 = (float)-iVar3 / (float)(iVar2 - iVar3);
          }
          else {
            fVar5 = 1.0 / (float)(iVar2 - iVar3);
            fVar6 = (float)(*piVar8 - iVar4) * fVar5;
            fVar5 = (float)-iVar3 * fVar5;
            FUN_00404170(*piVar9,-((float)iVar3 - (float)iVar4 / fVar6) * fVar6);
          }
          piVar8 = piVar9 + 6;
          *(undefined4 *)(*piVar9 + 4) = 0;
          local_c = local_c + 2;
          piVar9[1] = (int)((float)piVar7[1] * (1.0 - fVar5) + fVar5 * (float)param_1[1]);
          piVar9[2] = (int)((float)piVar7[2] * (1.0 - fVar5) + fVar5 * (float)param_1[2]);
          *(undefined4 *)*piVar8 = *(undefined4 *)*param_1;
          *(undefined4 *)(*piVar8 + 4) = *(undefined4 *)(*param_1 + 4);
          piVar9[7] = param_1[1];
          piVar9[8] = param_1[2];
          piVar9 = piVar8;
        }
        else {
          *(int *)*piVar9 = *piVar8;
          *(undefined4 *)(*piVar9 + 4) = *(undefined4 *)(*param_1 + 4);
          piVar9[1] = param_1[1];
          local_c = local_c + 1;
          piVar9[2] = param_1[2];
        }
LAB_0040528f:
        piVar9 = piVar9 + 6;
      }
      param_2 = (int *)((int)param_2 + -1);
      piVar7 = param_1;
      param_1 = param_1 + 6;
    } while (param_2 != (int *)0x0);
  }
  return local_c;
}


