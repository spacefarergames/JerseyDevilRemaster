/*
 * Function: FUN_00444dd0
 * Entry:    00444dd0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00444dd0(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  piVar1 = param_4;
  uVar5 = param_3 * param_2;
  if (uVar5 == 0) {
    return 0;
  }
  uVar6 = uVar5;
  if ((param_4[3] & 0x10cU) == 0) {
    param_4 = (int *)0x1000;
  }
  else {
    param_4 = (int *)param_4[6];
  }
  do {
    if (((piVar1[3] & 0x108U) == 0) || (uVar2 = piVar1[1], uVar2 == 0)) {
      if (uVar6 < param_4) {
        iVar3 = FUN_00445b50((int)*param_1,piVar1);
        if (iVar3 == -1) goto LAB_00444f04;
        param_4 = (int *)piVar1[6];
        param_1 = param_1 + 1;
        uVar6 = uVar6 - 1;
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        if (((piVar1[3] & 0x108U) != 0) && (iVar3 = FUN_004478b0(piVar1), iVar3 != 0)) {
LAB_00444f04:
          return (uVar5 - uVar6) / param_2;
        }
        uVar2 = uVar6;
        if (param_4 != (int *)0x0) {
          uVar2 = uVar6 - uVar6 % (uint)param_4;
        }
        uVar4 = FUN_00448910(piVar1[4],param_1,uVar2);
        if (uVar4 == 0xffffffff) {
LAB_00444ee9:
          piVar1[3] = piVar1[3] | 0x20;
          return (uVar5 - uVar6) / param_2;
        }
        uVar6 = uVar6 - uVar4;
        param_1 = param_1 + uVar4;
        if (uVar4 < uVar2) goto LAB_00444ee9;
      }
    }
    else {
      if (uVar6 < uVar2) {
        uVar2 = uVar6;
      }
      uVar6 = uVar6 - uVar2;
      pcVar7 = param_1;
      pcVar8 = (char *)*piVar1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      param_1 = param_1 + uVar2;
      piVar1[1] = piVar1[1] - uVar2;
      *piVar1 = *piVar1 + uVar2;
    }
    if (uVar6 == 0) {
      return param_3;
    }
  } while( true );
}


