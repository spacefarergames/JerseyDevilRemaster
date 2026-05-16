/*
 * Function: FUN_004449c0
 * Entry:    004449c0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004449c0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  if (DAT_004a6268 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004a6264 = 1;
  DAT_004a6260 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00a15e48 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_00a15e44 + -4), puVar1 = DAT_00a15e48, DAT_00a15e48 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_00a15e48;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_00444a70(&DAT_00452014,&DAT_00452020);
  }
  FUN_00444a70(&DAT_00452024,&DAT_00452028);
  if (param_3 == 0) {
    DAT_004a6268 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  return;
}


