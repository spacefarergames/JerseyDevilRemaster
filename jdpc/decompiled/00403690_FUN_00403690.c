/*
 * Function: FUN_00403690
 * Entry:    00403690
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00403690(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
  iVar5 = 1;
  local_4 = 1;
LAB_004036a6:
  do {
    if ((int)(uint)*(ushort *)(param_1 + 1) <= param_2[2]) {
      return iVar5;
    }
    iVar2 = param_2[1];
    if (iVar2 < (int)param_1[2]) {
      param_2 = (int *)param_2[4];
    }
    else {
      iVar4 = param_1[3];
      iVar1 = *param_2;
      if (iVar4 < iVar1) {
        param_2 = (int *)param_2[3];
      }
      else if ((int)param_1[2] < iVar1) {
        if (iVar2 < iVar4) {
          iVar2 = DAT_0055eb54 * 0x40;
          puVar3 = (undefined4 *)(&DAT_00571920 + iVar2);
          DAT_0055eb54 = DAT_0055eb54 + 1;
          puVar6 = param_1;
          puVar7 = puVar3;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          *param_1 = puVar3;
          *(int *)(&DAT_00571928 + iVar2) = param_2[1] + 1;
          param_1[3] = *param_2 + -1;
          if (param_2[3] == 0) {
            if (param_2[4] != 0) {
              iVar5 = FUN_00403690(puVar3,param_2[4]);
              return local_4 + iVar5;
            }
            return iVar5 + 1;
          }
          if (param_2[4] == 0) {
            param_2 = (int *)param_2[3];
            iVar5 = iVar5 + 1;
            local_4 = iVar5;
          }
          else {
            iVar5 = FUN_00403690(puVar3,param_2[4]);
            param_2 = (int *)param_2[3];
            iVar5 = local_4 + iVar5;
            local_4 = iVar5;
          }
          goto LAB_004036a6;
        }
        param_1[3] = iVar1 + -1;
        param_2 = (int *)param_2[3];
      }
      else {
        if (iVar4 <= iVar2) {
          param_1[2] = 2;
          param_1[3] = 1;
          return iVar5 + -1;
        }
        param_1[2] = iVar2 + 1;
        param_2 = (int *)param_2[4];
      }
    }
    if (param_2 == (int *)0x0) {
      return iVar5;
    }
  } while( true );
}


