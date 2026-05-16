/*
 * Function: FUN_00404190
 * Entry:    00404190
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00404190(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float local_80;
  int local_78;
  float *local_74;
  float *local_70;
  int local_6c;
  
  local_78 = 0;
  pfVar5 = (float *)(param_1 + -0x18 + param_3 * 0x18);
  if (0 < param_3) {
    local_6c = param_3;
    local_70 = (float *)(param_2 + 5);
    local_74 = (float *)(param_2 + 4);
    pfVar6 = (float *)(param_2 + 3);
    pfVar7 = (float *)(param_1 + 8);
    do {
      piVar8 = (int *)pfVar7[-2];
      iVar1 = piVar8[1];
      iVar2 = *(int *)((int)*pfVar5 + 4);
      if (iVar1 < 0) {
        if (-1 < iVar2) {
          iVar3 = *(int *)*pfVar5;
          if (*piVar8 == iVar3) {
            *(int *)*param_2 = iVar3;
            local_80 = (float)-iVar2 / (float)(iVar1 - iVar2);
          }
          else {
            local_80 = 1.0 / (float)(iVar1 - iVar2);
            fVar4 = (float)(*piVar8 - iVar3) * local_80;
            local_80 = (float)-iVar2 * local_80;
            FUN_00404170(*param_2,-((float)iVar2 - (float)iVar3 / fVar4) * fVar4);
          }
          fVar4 = 1.0 - local_80;
          *(undefined4 *)(*param_2 + 4) = 0;
          param_2[1] = (int)(pfVar5[1] * fVar4 + pfVar7[-1] * local_80);
          param_2[2] = (int)(pfVar5[2] * fVar4 + local_80 * *pfVar7);
          FUN_00404170(pfVar6,(float)(uint)pfVar5[3] * fVar4 + (float)(uint)pfVar7[1] * local_80);
          FUN_00404170(local_74,(float)(uint)pfVar5[4] * fVar4 + (float)(uint)pfVar7[2] * local_80);
          FUN_00404170(local_70,(float)(uint)pfVar5[5] * fVar4 + (float)(uint)pfVar7[3] * local_80);
          local_78 = local_78 + 1;
          piVar8 = param_2 + 6;
          pfVar5 = pfVar6 + 6;
          local_74 = local_74 + 6;
          goto LAB_0040461e;
        }
      }
      else if (iVar2 < 0) {
        iVar3 = *(int *)*pfVar5;
        if (*piVar8 == iVar3) {
          *(int *)*param_2 = iVar3;
          local_80 = (float)-iVar2 / (float)(iVar1 - iVar2);
        }
        else {
          local_80 = 1.0 / (float)(iVar1 - iVar2);
          fVar4 = (float)(*piVar8 - iVar3) * local_80;
          local_80 = (float)-iVar2 * local_80;
          FUN_00404170(*param_2,-((float)iVar2 - (float)iVar3 / fVar4) * fVar4);
        }
        fVar4 = 1.0 - local_80;
        *(undefined4 *)(*param_2 + 4) = 0;
        param_2[1] = (int)(pfVar5[1] * fVar4 + local_80 * pfVar7[-1]);
        param_2[2] = (int)(pfVar5[2] * fVar4 + local_80 * *pfVar7);
        FUN_00404170(pfVar6,(float)(uint)pfVar5[3] * fVar4 + (float)(uint)pfVar7[1] * local_80);
        FUN_00404170(local_74,(float)(uint)pfVar5[4] * fVar4 + (float)(uint)pfVar7[2] * local_80);
        FUN_00404170(local_70,(float)(uint)pfVar5[5] * fVar4 + (float)(uint)pfVar7[3] * local_80);
        local_70 = local_70 + 6;
        *(undefined4 *)param_2[6] = *(undefined4 *)pfVar7[-2];
        piVar8 = param_2 + 0xc;
        pfVar5 = pfVar6 + 0xc;
        *(undefined4 *)(param_2[6] + 4) = *(undefined4 *)((int)pfVar7[-2] + 4);
        param_2[7] = (int)pfVar7[-1];
        param_2[8] = (int)*pfVar7;
        pfVar6[6] = pfVar7[1];
        local_74[6] = pfVar7[2];
        local_78 = local_78 + 2;
        local_74 = local_74 + 0xc;
        *local_70 = pfVar7[3];
LAB_0040461e:
        local_70 = local_70 + 6;
        pfVar6 = pfVar5;
        param_2 = piVar8;
      }
      else {
        *(int *)*param_2 = *piVar8;
        local_78 = local_78 + 1;
        *(undefined4 *)(*param_2 + 4) = *(undefined4 *)((int)pfVar7[-2] + 4);
        param_2[1] = (int)pfVar7[-1];
        param_2[2] = (int)*pfVar7;
        *pfVar6 = pfVar7[1];
        *local_74 = pfVar7[2];
        local_74 = local_74 + 6;
        *local_70 = pfVar7[3];
        local_70 = local_70 + 6;
        pfVar6 = pfVar6 + 6;
        param_2 = param_2 + 6;
      }
      pfVar5 = pfVar7 + -2;
      pfVar7 = pfVar7 + 6;
      local_6c = local_6c + -1;
    } while (local_6c != 0);
  }
  return local_78;
}


