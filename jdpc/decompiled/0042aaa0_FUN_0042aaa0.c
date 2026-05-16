/*
 * Function: FUN_0042aaa0
 * Entry:    0042aaa0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0042aaa0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,int *param_12)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  piVar9 = (int *)(PTR_DAT_004a0a34 + ((param_1 * 0x20 + param_2) * 0x20 + param_3) * 4);
  piVar8 = piVar9;
  for (iVar7 = param_1; piVar3 = piVar8, iVar5 = param_2, piVar6 = piVar9, iVar4 = param_2,
      iVar7 <= param_4; iVar7 = iVar7 + 1) {
    for (; piVar1 = piVar3, iVar2 = param_3, iVar5 <= param_5; iVar5 = iVar5 + 1) {
      for (; iVar2 <= param_6; iVar2 = iVar2 + 1) {
        if (*piVar1 != 0) {
          *param_7 = iVar7;
          goto joined_r0x0042ab5a;
        }
        piVar1 = piVar1 + 1;
      }
      piVar3 = piVar3 + 0x20;
    }
    piVar8 = piVar8 + 0x400;
  }
joined_r0x0042ab5a:
  do {
    piVar8 = piVar6;
    iVar7 = param_1;
    iVar5 = param_3;
    if (param_5 < iVar4) {
joined_r0x0042abd4:
      do {
        piVar8 = piVar9;
        iVar7 = param_1;
        if (param_6 < iVar5) {
LAB_0042ac3f:
          piVar9 = (int *)(PTR_DAT_004a0a34 + ((param_4 * 0x20 + param_5) * 0x20 + param_6) * 4);
          piVar8 = piVar9;
          for (iVar7 = param_4; piVar3 = piVar8, iVar5 = param_5, piVar6 = piVar9, iVar4 = param_5,
              param_1 <= iVar7; iVar7 = iVar7 + -1) {
            for (; piVar1 = piVar3, iVar2 = param_6, param_2 <= iVar5; iVar5 = iVar5 + -1) {
              for (; param_3 <= iVar2; iVar2 = iVar2 + -1) {
                if (*piVar1 != 0) {
                  *param_10 = iVar7;
                  goto joined_r0x0042acd8;
                }
                piVar1 = piVar1 + -1;
              }
              piVar3 = piVar3 + -0x20;
            }
            piVar8 = piVar8 + -0x400;
          }
joined_r0x0042acd8:
          do {
            piVar8 = piVar6;
            iVar7 = param_4;
            if (iVar4 < param_2) {
LAB_0042ad3a:
              iVar7 = param_5;
              piVar8 = piVar9;
              if (param_6 < param_3) {
                return;
              }
              do {
                while (piVar3 = piVar9, iVar5 = param_4, iVar7 < param_2) {
                  piVar9 = piVar8 + -1;
                  param_6 = param_6 + -1;
                  iVar7 = param_5;
                  piVar8 = piVar9;
                  if (param_6 < param_3) {
                    return;
                  }
                }
                for (; param_1 <= iVar5; iVar5 = iVar5 + -1) {
                  if (*piVar3 != 0) {
                    *param_12 = param_6;
                    return;
                  }
                  piVar3 = piVar3 + -0x400;
                }
                piVar9 = piVar9 + -0x20;
                iVar7 = iVar7 + -1;
              } while( true );
            }
            for (; piVar3 = piVar8, iVar5 = param_6, param_1 <= iVar7; iVar7 = iVar7 + -1) {
              for (; param_3 <= iVar5; iVar5 = iVar5 + -1) {
                if (*piVar3 != 0) {
                  *param_11 = iVar4;
                  goto LAB_0042ad3a;
                }
                piVar3 = piVar3 + -1;
              }
              piVar8 = piVar8 + -0x400;
            }
            piVar6 = piVar6 + -0x20;
            iVar4 = iVar4 + -1;
          } while( true );
        }
        for (; piVar3 = piVar8, iVar4 = param_2, iVar7 <= param_4; iVar7 = iVar7 + 1) {
          for (; iVar4 <= param_5; iVar4 = iVar4 + 1) {
            if (*piVar3 != 0) {
              *param_9 = iVar5;
              goto LAB_0042ac3f;
            }
            piVar3 = piVar3 + 0x20;
          }
          piVar8 = piVar8 + 0x400;
        }
        piVar9 = piVar9 + 1;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    for (; piVar3 = piVar8, iVar2 = param_3, iVar7 <= param_4; iVar7 = iVar7 + 1) {
      for (; iVar2 <= param_6; iVar2 = iVar2 + 1) {
        if (*piVar3 != 0) {
          *param_8 = iVar4;
          goto joined_r0x0042abd4;
        }
        piVar3 = piVar3 + 1;
      }
      piVar8 = piVar8 + 0x400;
    }
    piVar6 = piVar6 + 0x20;
    iVar4 = iVar4 + 1;
  } while( true );
}


