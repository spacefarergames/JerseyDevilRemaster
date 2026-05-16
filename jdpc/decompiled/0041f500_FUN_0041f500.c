/*
 * Function: FUN_0041f500
 * Entry:    0041f500
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f500(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  param_1 = (int *)*param_1;
  iVar5 = ((int *)*param_2)[1];
  iVar3 = param_1[1];
  iVar6 = iVar5 - iVar3;
  if (iVar6 == 0) {
    iVar5 = *param_1;
    iVar3 = iVar3 * 0x40;
    *(int *)(&DAT_00561914 + iVar3) = iVar5;
    *(int *)(&DAT_0056190c + iVar3) = iVar5;
    (&DAT_00561906)[iVar3] = 0;
    return;
  }
  if (0 < iVar6) {
    iVar1 = *param_1;
    iVar2 = *(int *)*param_2;
    if (iVar3 <= iVar5) {
      piVar4 = (int *)(&DAT_0056190c + iVar3 * 0x40);
      iVar3 = iVar6 + 1;
      iVar5 = iVar1 << 0x10;
      do {
        piVar4[2] = iVar5 >> 0x10;
        *piVar4 = iVar5 >> 0x10;
        *(undefined1 *)((int)piVar4 + -6) = 0;
        piVar4 = piVar4 + 0x10;
        iVar3 = iVar3 + -1;
        iVar5 = iVar5 + ((iVar2 - iVar1) * 0x10000) / iVar6;
      } while (iVar3 != 0);
    }
  }
  return;
}


