/*
 * Function: FUN_0042b430
 * Entry:    0042b430
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0042b430(void)

{
  HANDLE hThread;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  hThread = GetCurrentThread();
  iVar1 = GetThreadPriority(hThread);
  if (iVar1 != 0x7fffffff) {
    SetThreadPriority(hThread,iVar1 + 1);
  }
  iVar3 = 10;
  do {
    uVar2 = FUN_0042b630();
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar1 != 0x7fffffff) {
    SetThreadPriority(hThread,iVar1);
  }
  uVar4 = (uVar4 * 100000) / 0x1d216;
  if (0xe90a < uVar4 % 0x1d216) {
    uVar4 = uVar4 + 1;
  }
  iVar1 = (int)(0x1fffe / (ulonglong)uVar4);
  if (uVar4 >> 1 < (uint)(0x1fffe % (ulonglong)uVar4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


