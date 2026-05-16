/*
 * Function: __amsg_exit
 * Entry:    00446530
 * Warning:  Decompiled pseudocode, not original source.
 */


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_004a6294 == 1) {
    FUN_0044c5d0();
  }
  FUN_0044c610(param_1);
  (*(code *)PTR___exit_004a2b80)(0xff);
  return;
}


