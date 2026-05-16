/*
 * Function: FUN_0040be60
 * Entry:    0040be60
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040be60(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  FUN_00445020(param_1);
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    while (iVar1 = FUN_00444f20(param_3,param_4,param_1), iVar1 != 0) {
      pcVar2 = _strstr(param_3,param_2);
      if (pcVar2 != (char *)0x0) {
        return 1;
      }
      if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
        return 0;
      }
    }
  }
  return 0;
}


