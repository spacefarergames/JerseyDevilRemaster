/*
 * Function: FUN_0041aab0
 * Entry:    0041aab0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041aab0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  
  iVar1 = *(int *)(*param_1 + 4);
  iVar10 = *(int *)(*param_2 + 4) - iVar1;
  if (0 < iVar10) {
    iVar2 = param_2[3];
    iVar8 = (int)(0x10000 / (longlong)iVar10);
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iVar5 = param_2[4];
    iVar6 = param_1[5];
    iVar11 = iVar3 << 0x10;
    iVar7 = param_2[5];
    iVar12 = iVar4 << 0x10;
    iVar14 = iVar6 << 0x10;
    if (iVar1 <= *(int *)(*param_2 + 4)) {
      piVar13 = (int *)(&DAT_00561910 + iVar1 * 0x40);
      param_2 = (int *)(iVar10 + 1);
      do {
        piVar9 = piVar13 + -4;
        if (piVar13[1] - *piVar13 != -1 && -1 < (piVar13[1] - *piVar13) + 1) {
          do {
            if (piVar9[2] <= piVar9[3]) {
              piVar9[10] = iVar11;
              piVar9[0xc] = iVar12;
              piVar9[0xe] = iVar14;
            }
            piVar9 = (int *)*piVar9;
          } while (piVar9 != (int *)0x0);
        }
        iVar14 = iVar14 + (iVar7 - iVar6) * iVar8;
        iVar11 = iVar11 + (iVar2 - iVar3) * iVar8;
        iVar12 = iVar12 + (iVar5 - iVar4) * iVar8;
        piVar13 = piVar13 + 0x10;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
    }
  }
  return;
}


