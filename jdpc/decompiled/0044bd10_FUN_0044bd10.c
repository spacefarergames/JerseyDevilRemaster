/*
 * Function: FUN_0044bd10
 * Entry:    0044bd10
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bd10(void)

{
  int iVar1;
  char *pcVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_004a63b0,0x104);
  _DAT_004a6258 = &DAT_004a63b0;
  pcVar2 = DAT_00a14e28;
  if (*DAT_00a14e28 == '\0') {
    pcVar2 = &DAT_004a63b0;
  }
  FUN_0044bdb0(pcVar2,0,0,&local_8,&local_4);
  iVar1 = FUN_00443ea0(local_4 + local_8 * 4);
  if (iVar1 == 0) {
    __amsg_exit(8);
  }
  FUN_0044bdb0(pcVar2,iVar1,iVar1 + local_8 * 4,&local_8,&local_4);
  _DAT_004a6240 = iVar1;
  _DAT_004a623c = local_8 + -1;
  return;
}


