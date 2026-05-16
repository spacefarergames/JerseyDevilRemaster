/*
 * Function: FUN_00443fe0
 * Entry:    00443fe0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00443fe0(LPVOID param_1)

{
  LPVOID lpMem;
  int iVar1;
  undefined4 local_4;
  
  lpMem = param_1;
  if (param_1 != (LPVOID)0x0) {
    iVar1 = FUN_00446860(param_1,&local_4,&param_1);
    if (iVar1 != 0) {
      FUN_004468c0(local_4,param_1,iVar1);
      return;
    }
    HeapFree(DAT_00a14e24,0,lpMem);
  }
  return;
}


