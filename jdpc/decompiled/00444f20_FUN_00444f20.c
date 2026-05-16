/*
 * Function: FUN_00444f20
 * Entry:    00444f20
 * Warning:  Decompiled pseudocode, not original source.
 */


char * FUN_00444f20(char *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 < 1) {
    return (char *)0x0;
  }
  param_2 = param_2 + -1;
  pcVar3 = param_1;
  if (param_2 != 0) {
    while( true ) {
      iVar1 = param_3[1];
      param_3[1] = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        uVar2 = FUN_004453a0(param_3);
      }
      else {
        uVar2 = (uint)*(byte *)*param_3;
        *param_3 = (byte *)*param_3 + 1;
      }
      if (uVar2 == 0xffffffff) break;
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
      if ((char)uVar2 == '\n') goto LAB_00444f86;
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        *pcVar3 = '\0';
        return param_1;
      }
    }
    if (pcVar3 == param_1) {
      return (char *)0x0;
    }
  }
LAB_00444f86:
  *pcVar3 = '\0';
  return param_1;
}


