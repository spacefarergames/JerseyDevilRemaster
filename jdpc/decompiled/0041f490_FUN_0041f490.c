/*
 * Function: FUN_0041f490
 * Entry:    0041f490
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f490(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1 = (int *)*param_1;
  iVar4 = ((int *)*param_2)[1];
  iVar6 = param_1[1];
  iVar5 = iVar4 - iVar6;
  if (iVar5 == 0) {
    iVar4 = *param_1;
    *(int *)(&DAT_00561910 + iVar6 * 0x40) = iVar4;
    *(int *)(&DAT_00561908 + iVar6 * 0x40) = iVar4;
    return;
  }
  if (0 < iVar5) {
    iVar1 = *param_1;
    iVar2 = *(int *)*param_2;
    if (iVar6 <= iVar4) {
      piVar3 = (int *)(&DAT_00561908 + iVar6 * 0x40);
      iVar6 = iVar5 + 1;
      iVar4 = iVar1 << 0x10;
      do {
        piVar3[2] = iVar4 >> 0x10;
        *piVar3 = iVar4 >> 0x10;
        piVar3 = piVar3 + 0x10;
        iVar6 = iVar6 + -1;
        iVar4 = iVar4 + ((iVar2 - iVar1) * 0x10000) / iVar5;
      } while (iVar6 != 0);
    }
  }
  return;
}


