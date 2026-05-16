/*
 * Function: FUN_004471e0
 * Entry:    004471e0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004471e0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  DAT_004a62a4 = (int *)FUN_0044d040(*param_1,param_1[1]);
  DAT_004a62ac = DAT_004a62a4[1] + -1;
  pcVar2 = (char *)((uint)(*DAT_004a62a4 == 0x2d) + param_2);
  FUN_0044cfa0(pcVar2,param_3,DAT_004a62a4);
  DAT_004a62b0 = DAT_004a62ac < DAT_004a62a4[1] + -1;
  DAT_004a62ac = DAT_004a62a4[1] + -1;
  if ((-5 < DAT_004a62ac) && (DAT_004a62ac < param_3)) {
    if ((bool)DAT_004a62b0) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      pcVar2[-1] = '\0';
    }
    FUN_004472c0(param_1,param_2,param_3);
    return;
  }
  FUN_00447290(param_1,param_2,param_3,param_4);
  return;
}


