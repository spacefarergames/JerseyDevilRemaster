/*
 * Function: FUN_0040aa80
 * Entry:    0040aa80
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040aa80(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00444fa0();
  if (DAT_004a5e38 == 0) {
    return 1;
  }
  puVar3 = (undefined4 *)&stack0x00001000;
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_004056f0();
  if (iVar2 != 0) {
    FUN_00445020();
    iVar2 = FUN_00444c90();
    if (iVar2 != 0) {
      pcVar1 = _strstr(&stack0x00001000,s_FirstTime__0045beb8);
      if (pcVar1 != (char *)0x0) {
        pcVar1[10] = '0';
      }
      FUN_00445020();
      FUN_00444dd0();
    }
    FUN_00444c10();
    return 1;
  }
  return 0;
}


