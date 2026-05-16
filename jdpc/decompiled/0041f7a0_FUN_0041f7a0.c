/*
 * Function: FUN_0041f7a0
 * Entry:    0041f7a0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f7a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4);
  iVar7 = iVar1 - iVar2;
  if (-1 < iVar7) {
    if (iVar7 == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(0x10000 / (longlong)iVar7);
    }
    iVar3 = __ftol();
    iVar4 = __ftol();
    iVar10 = iVar3 << 0x10;
    iVar5 = __ftol();
    iVar11 = iVar4 << 0x10;
    iVar6 = __ftol();
    if (iVar2 <= iVar1) {
      piVar9 = (int *)(&DAT_00561910 + iVar2 * 0x40);
      iVar7 = iVar7 + 1;
      do {
        piVar8 = piVar9 + -4;
        if (*piVar9 <= piVar9[1]) {
          do {
            if (piVar8[2] <= piVar8[3]) {
              piVar8[6] = iVar10;
              piVar8[8] = iVar11;
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
          iVar10 = iVar10 + (iVar5 - iVar3) * (int)param_1;
          iVar11 = iVar11 + (iVar6 - iVar4) * (int)param_1;
        }
        piVar9 = piVar9 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}


