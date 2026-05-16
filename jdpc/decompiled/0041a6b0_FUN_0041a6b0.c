/*
 * Function: FUN_0041a6b0
 * Entry:    0041a6b0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041a6b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int local_20;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4);
  local_20 = iVar1 - iVar2;
  if (-1 < local_20) {
    if (local_20 == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = (int)(0x10000 / (longlong)local_20);
    }
    iVar9 = __ftol();
    iVar10 = __ftol();
    iVar15 = iVar9 << 0x10;
    iVar11 = __ftol();
    iVar12 = __ftol();
    iVar3 = param_1[3];
    iVar4 = param_2[3];
    iVar5 = param_1[4];
    iVar6 = param_2[4];
    iVar7 = param_1[5];
    iVar14 = iVar3 << 0x10;
    iVar8 = param_2[5];
    iVar18 = iVar5 << 0x10;
    iVar19 = iVar7 << 0x10;
    if (iVar2 <= iVar1) {
      piVar17 = (int *)(&DAT_00561910 + iVar2 * 0x40);
      local_20 = local_20 + 1;
      param_1 = (int *)(iVar11 << 0x10);
      do {
        piVar13 = piVar17 + -4;
        if (-1 < piVar17[1] - *piVar17) {
          do {
            if (piVar13[2] <= piVar13[3]) {
              piVar13[6] = iVar15;
              piVar13[8] = (int)param_1;
              piVar13[10] = iVar14;
              piVar13[0xc] = iVar18;
              piVar13[0xe] = iVar19;
            }
            piVar13 = (int *)*piVar13;
          } while (piVar13 != (int *)0x0);
        }
        piVar17 = piVar17 + 0x10;
        iVar14 = iVar14 + (iVar4 - iVar3) * iVar16;
        iVar18 = iVar18 + (iVar6 - iVar5) * iVar16;
        iVar19 = iVar19 + (iVar8 - iVar7) * iVar16;
        iVar15 = iVar15 + (iVar10 - iVar9) * iVar16;
        param_1 = (int *)((int)param_1 + (iVar12 - iVar11) * iVar16);
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  return;
}


