/*
 * Function: FUN_00405550
 * Entry:    00405550
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00405550(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  DWORD local_404;
  char local_400 [1023];
  undefined1 local_1;
  
  if (DAT_004a6110 != (HANDLE)0x0) {
    FUN_00444700(local_400,param_1,&stack0x00000008);
    uVar2 = 0xffffffff;
    local_1 = 0;
    pcVar3 = local_400;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    WriteConsoleA(DAT_004a6110,local_400,~uVar2 - 1,&local_404,(LPVOID)0x0);
  }
  return;
}


