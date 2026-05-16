/*
 * Function: FUN_00426770
 * Entry:    00426770
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426770(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = _strstr(param_1,&DAT_004a0ab4);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0ab0), pcVar1 != (char *)0x0)) {
    DAT_004a09d8 = FUN_00444940(pcVar1 + 2);
  }
  pcVar1 = _strstr(param_1,&DAT_004a0aa8);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0aa0), pcVar1 != (char *)0x0)) {
    _DAT_004a09dc = FUN_00444940(pcVar1 + 4);
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a9c);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a98), pcVar1 != (char *)0x0)) {
    DAT_004a09cc = FUN_00444940(pcVar1 + 2);
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a94);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a90), pcVar1 != (char *)0x0)) {
    _DAT_004a09c8 = FUN_00444940(pcVar1 + 2);
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a8c);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a88), pcVar1 != (char *)0x0)) {
    DAT_004a09d0 = FUN_00444940(pcVar1 + 2);
  }
  pcVar1 = _strstr(param_1,s__SORT_004a0a80);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,s__sort_004a0a78), pcVar1 != (char *)0x0)
     ) {
    _DAT_004a09d4 = FUN_00444940(pcVar1 + 5);
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a70);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a68), pcVar1 != (char *)0x0)) {
    iVar2 = FUN_00444940(pcVar1 + 3);
    _DAT_004a09e8 = (double)iVar2 * 0.01;
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a60);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a58), pcVar1 != (char *)0x0)) {
    iVar2 = FUN_00444940(pcVar1 + 4);
    _DAT_004a09e0 = (double)iVar2 * 0.01;
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a50);
  if ((pcVar1 != (char *)0x0) || (pcVar1 = _strstr(param_1,&DAT_004a0a48), pcVar1 != (char *)0x0)) {
    iVar2 = FUN_00444940(pcVar1 + 4);
    _DAT_004a09f8 = (double)iVar2 * 0.01;
  }
  pcVar1 = _strstr(param_1,&DAT_004a0a40);
  if ((pcVar1 == (char *)0x0) && (pcVar1 = _strstr(param_1,&DAT_004a0a38), pcVar1 == (char *)0x0)) {
    return;
  }
  iVar2 = FUN_00444940(pcVar1 + 4);
  _DAT_004a09f0 = (double)iVar2 * 0.01;
  return;
}


