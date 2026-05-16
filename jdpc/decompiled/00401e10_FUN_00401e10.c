/*
 * Function: FUN_00401e10
 * Entry:    00401e10
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00401e10(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  char acStack_30 [48];
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  piVar1 = DAT_004a5c94;
  if (DAT_004a5c94 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_004a5c94 + 100))();
  if ((iVar2 == -0x7ff8ffe2) || (iVar2 == -0x7ff8fff4)) {
    (**(code **)(*DAT_004a5c94 + 0x1c))(DAT_004a5c94);
    iVar2 = (**(code **)(*DAT_004a5c94 + 100))(DAT_004a5c94);
  }
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_004a5c94 + 0x24))(DAT_004a5c94,0x50,&stack0xffffffac);
  if (iVar2 < 0) {
    return 0;
  }
  *param_1 = piVar1;
  *param_2 = unaff_EDI;
  *param_3 = 0;
  iVar2 = 0;
  do {
    if (acStack_30[iVar2] != '\0') {
      *param_3 = *param_3 | 1 << ((byte)iVar2 & 0x1f);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return 1;
}


