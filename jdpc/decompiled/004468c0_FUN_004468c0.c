/*
 * Function: FUN_004468c0
 * Entry:    004468c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004468c0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_004a62a0 = DAT_004a62a0 + 1, DAT_004a62a0 == 0x20)) {
    FUN_00446790(0x10);
  }
  return;
}


