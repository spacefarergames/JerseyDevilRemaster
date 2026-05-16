/*
 * Function: FUN_0042ae60
 * Entry:    0042ae60
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042ae60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8,int *param_9,int *param_10,int *param_11)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_1c = 0;
  local_18 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  piVar6 = (int *)(PTR_DAT_004a0a34 + ((param_1 * 0x20 + param_2) * 0x20 + param_3) * 4);
  for (; param_1 <= param_4; param_1 = param_1 + 1) {
    piVar4 = piVar6;
    for (iVar5 = param_2; iVar5 <= param_5; iVar5 = iVar5 + 1) {
      piVar2 = piVar4;
      for (iVar3 = param_3; iVar3 <= param_6; iVar3 = iVar3 + 1) {
        if (*piVar2 != 0) {
          iVar1 = *piVar2;
          local_1c = local_1c + iVar1;
          local_14 = local_14 + iVar1 * param_1;
          local_10 = local_10 + iVar1 * iVar5;
          local_c = local_c + iVar1 * iVar3;
          local_18 = local_18 + (iVar3 * iVar3 + iVar5 * iVar5 + param_1 * param_1) * iVar1;
        }
        piVar2 = piVar2 + 1;
      }
      piVar4 = piVar4 + 0x20;
    }
    piVar6 = piVar6 + 0x400;
  }
  *param_7 = local_1c;
  *param_8 = local_18;
  *param_9 = local_14;
  *param_10 = local_10;
  *param_11 = local_c;
  return;
}


