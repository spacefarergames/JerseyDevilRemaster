/*
 * Function: FUN_00420790
 * Entry:    00420790
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420790(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    piVar3 = &DAT_0055dd04;
    while( true ) {
      iVar2 = FUN_00420a60(*(int *)((int)(param_1 + -0x157740) + (int)piVar3) + (int)param_1);
      *piVar3 = iVar2;
      if (iVar2 == 0) break;
      piVar3 = piVar3 + 1;
      DAT_004a6088 = DAT_004a6088 + 1;
      iVar4 = iVar4 + 1;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    FUN_00421bd0(0);
  }
  return;
}


