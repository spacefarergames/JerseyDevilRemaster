/*
 * Function: FUN_0042b4e0
 * Entry:    0042b4e0
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_0042b4e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HANDLE hThread;
  int nPriority;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_8;
  undefined1 local_4 [4];
  
  hThread = GetCurrentThread();
  nPriority = GetThreadPriority(hThread);
  if (nPriority != 0x7fffffff) {
    SetThreadPriority(hThread,nPriority + 1);
  }
  iVar5 = FUN_0042b5e0();
  do {
    iVar6 = FUN_0042b5e0();
    if (iVar6 < iVar5) {
      uVar7 = (iVar6 - iVar5) + 10;
    }
    else {
      uVar7 = (uint)(iVar6 != iVar5 && -1 < iVar6 - iVar5);
    }
  } while (uVar7 == 0);
  FUN_0042b620();
  uVar3 = DAT_004a620c;
  uVar1 = DAT_004a6208;
  iVar5 = FUN_0042b5e0();
  do {
    iVar6 = FUN_0042b5e0();
    if (iVar6 < iVar5) {
      uVar7 = (iVar6 - iVar5) + 10;
    }
    else {
      uVar7 = (uint)(iVar6 != iVar5 && -1 < iVar6 - iVar5);
    }
  } while (uVar7 == 0);
  FUN_0042b620();
  uVar4 = DAT_004a620c;
  uVar2 = DAT_004a6208;
  if (nPriority != 0x7fffffff) {
    SetThreadPriority(hThread,nPriority);
  }
  FUN_0042b680(uVar1,uVar3,uVar2,uVar4,local_4,&local_8);
  uVar7 = local_8 / 1000000;
  if (5 < local_8 / 100000 + uVar7 * -10) {
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}


