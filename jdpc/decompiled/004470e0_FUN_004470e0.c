/*
 * Function: FUN_004470e0
 * Entry:    004470e0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined1 * FUN_004470e0(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  piVar2 = DAT_004a62a4;
  if (DAT_004a62a8 == '\0') {
    piVar2 = (int *)FUN_0044d040(*param_1,param_1[1]);
    FUN_0044cfa0(param_2 + (*piVar2 == 0x2d),piVar2[1] + param_3,piVar2);
  }
  else if (DAT_004a62ac == param_3) {
    iVar1 = DAT_004a62ac + (*DAT_004a62a4 == 0x2d);
    param_2[iVar1] = 0x30;
    (param_2 + iVar1)[1] = 0;
  }
  puVar4 = param_2;
  if (*piVar2 == 0x2d) {
    *param_2 = 0x2d;
    puVar4 = param_2 + 1;
  }
  if (piVar2[1] < 1) {
    FUN_00447360(puVar4,1);
    *puVar4 = 0x30;
    puVar4 = puVar4 + 1;
  }
  else {
    puVar4 = puVar4 + piVar2[1];
  }
  if (0 < (int)param_3) {
    FUN_00447360(puVar4,1);
    *puVar4 = DAT_004a4f58;
    iVar1 = piVar2[1];
    if (iVar1 < 0) {
      if ((DAT_004a62a8 != '\0') || (-iVar1 <= (int)param_3)) {
        param_3 = -iVar1;
      }
      FUN_00447360(puVar4 + 1,param_3);
      puVar5 = (undefined4 *)(puVar4 + 1);
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0x30303030;
        puVar5 = puVar5 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar5 = 0x30;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
  }
  return param_2;
}


