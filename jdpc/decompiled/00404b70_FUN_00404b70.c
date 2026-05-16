/*
 * Function: FUN_00404b70
 * Entry:    00404b70
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00404b70(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_8;
  
  iVar8 = 0;
  if (0 < param_3) {
    local_8 = param_3;
    piVar7 = param_1 + param_3 * 6 + -6;
    piVar10 = param_2;
    do {
      piVar9 = (int *)*param_1;
      iVar1 = *piVar9;
      iVar2 = *(int *)*piVar7;
      if (iVar1 < 0) {
        if (-1 < iVar2) {
          iVar3 = *(int *)(*piVar7 + 4);
          fVar5 = (float)(piVar9[1] - iVar3);
          if ((float)(iVar1 - iVar2) == 0.0) {
            param_2 = (int *)0x47c35000;
          }
          else {
            param_2 = (int *)(1.0 / (float)(iVar1 - iVar2));
          }
          if (fVar5 == 0.0) {
            fVar5 = 1e-05;
          }
          *(undefined4 *)*piVar10 = 0;
          fVar6 = (float)-iVar2 * (float)param_2;
          FUN_00404170(*piVar10 + 4,(float)iVar3 - (float)iVar2 * fVar5 * (float)param_2);
          piVar10[1] = (int)((float)piVar7[1] * (1.0 - fVar6) + (float)param_1[1] * fVar6);
          piVar10[2] = (int)((float)piVar7[2] * (1.0 - fVar6) + fVar6 * (float)param_1[2]);
          goto LAB_00404d62;
        }
      }
      else {
        if (iVar2 < 0) {
          iVar3 = piVar9[1];
          iVar4 = *(int *)(*piVar7 + 4);
          fVar5 = 1.0 / (float)(iVar1 - iVar2);
          *(undefined4 *)*piVar10 = 0;
          fVar6 = (float)-iVar2 * fVar5;
          FUN_00404170(*piVar10 + 4,(float)iVar4 - (float)iVar2 * (float)(iVar3 - iVar4) * fVar5);
          iVar8 = iVar8 + 1;
          piVar9 = piVar10 + 6;
          piVar10[1] = (int)((float)piVar7[1] * (1.0 - fVar6) + fVar6 * (float)param_1[1]);
          piVar10[2] = (int)((float)piVar7[2] * (1.0 - fVar6) + fVar6 * (float)param_1[2]);
          *(undefined4 *)*piVar9 = *(undefined4 *)*param_1;
        }
        else {
          *(int *)*piVar10 = iVar1;
          piVar9 = piVar10;
        }
        *(undefined4 *)(*piVar9 + 4) = *(undefined4 *)(*param_1 + 4);
        piVar9[1] = param_1[1];
        piVar9[2] = param_1[2];
        piVar10 = piVar9;
LAB_00404d62:
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 6;
      }
      local_8 = local_8 + -1;
      piVar7 = param_1;
      param_1 = param_1 + 6;
    } while (local_8 != 0);
  }
  return iVar8;
}


