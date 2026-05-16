/*
 * Function: FUN_00403500
 * Entry:    00403500
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00403500(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar3 = 1;
LAB_00403511:
  do {
    if ((int)(uint)*(ushort *)(param_1 + 1) <= param_2[2]) {
      return iVar3;
    }
    iVar4 = param_2[1];
    if (iVar4 < (int)param_1[2]) {
      param_2 = (int *)param_2[4];
    }
    else {
      iVar1 = param_1[3];
      iVar2 = *param_2;
      if (iVar1 < iVar2) {
        param_2 = (int *)param_2[3];
      }
      else if ((int)param_1[2] < iVar2) {
        if (iVar4 < iVar1) {
          iVar4 = DAT_0055eb54 * 0x40;
          puVar5 = &DAT_00571920 + iVar4;
          DAT_0055eb54 = DAT_0055eb54 + 1;
          FUN_00403470(puVar5,param_1);
          *param_1 = puVar5;
          *(int *)(&DAT_00571928 + iVar4) = param_2[1] + 1;
          param_1[3] = *param_2 + -1;
          if (param_2[3] == 0) {
            if (param_2[4] != 0) {
              iVar4 = FUN_00403500(puVar5,param_2[4]);
              return iVar3 + iVar4;
            }
            return iVar3 + 1;
          }
          if (param_2[4] == 0) {
            param_2 = (int *)param_2[3];
            iVar3 = iVar3 + 1;
          }
          else {
            iVar4 = FUN_00403500(puVar5,param_2[4]);
            param_2 = (int *)param_2[3];
            iVar3 = iVar3 + iVar4;
          }
          goto LAB_00403511;
        }
        param_1[3] = iVar2 + -1;
        param_2 = (int *)param_2[3];
      }
      else {
        if (iVar1 <= iVar4) {
          param_1[2] = 2;
          param_1[3] = 1;
          return iVar3 + -1;
        }
        param_1[2] = iVar4 + 1;
        param_2 = (int *)param_2[4];
      }
    }
    if (param_2 == (int *)0x0) {
      return iVar3;
    }
  } while( true );
}


