/*
 * Function: FUN_00413140
 * Entry:    00413140
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413140(char param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((_DAT_0053e860 == 2.0) || ((DAT_004a5e88 == 1 && (_DAT_0053e860 == 1.0)))) {
    local_10 = *(int **)(DAT_0066b648 + 4);
    iVar2 = *local_10;
    if (iVar2 != 0) {
      do {
        cVar5 = '\0';
        if ('\0' < param_1) {
          iVar6 = (int)(short)param_1;
          do {
            uVar3 = (uint)*(ushort *)(param_2 * 2 + iVar2 + cVar5 * 2);
            iVar4 = uVar3 * 0x10;
            *(undefined4 *)(DAT_0066d6c4 + 0xc + iVar4) = 0;
            iVar1 = DAT_0066c608;
            pfVar7 = (float *)(DAT_0066d6c4 + iVar4);
            *pfVar7 = DAT_008079a0;
            pfVar7[1] = DAT_008079a4;
            pfVar7[2] = DAT_008079a8;
            FUN_00412820(&DAT_00642520,iVar1 + uVar3 * 0xc,&local_c);
            if (0.0 < local_c) {
              if (1.0 < local_c) {
                local_c = 1.0;
              }
              *pfVar7 = local_c * DAT_0064e140 + *pfVar7;
              pfVar7[1] = local_c * _DAT_0064e14c + pfVar7[1];
              pfVar7[2] = local_c * _DAT_0064e158 + pfVar7[2];
            }
            if (0.0 < local_8) {
              if (1.0 < local_8) {
                local_8 = 1.0;
              }
              *pfVar7 = local_8 * DAT_0064e144 + *pfVar7;
              pfVar7[1] = local_8 * _DAT_0064e150 + pfVar7[1];
              pfVar7[2] = local_8 * _DAT_0064e15c + pfVar7[2];
            }
            if (0.0 < local_4) {
              if (1.0 < local_4) {
                local_4 = 1.0;
              }
              *pfVar7 = local_4 * _DAT_0064e148 + *pfVar7;
              pfVar7[1] = local_4 * _DAT_0064e154 + pfVar7[1];
              pfVar7[2] = local_4 * _DAT_0064e160 + pfVar7[2];
            }
            if (1.0 < *pfVar7) {
              *pfVar7 = 1.0;
            }
            if (1.0 < pfVar7[1]) {
              pfVar7[1] = 1.0;
            }
            if (1.0 < pfVar7[2]) {
              pfVar7[2] = 1.0;
            }
            pfVar7[3] = 1.4013e-45;
            cVar5 = cVar5 + param_3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_10 = (int *)local_10[1];
        iVar2 = *local_10;
      } while (iVar2 != 0);
    }
  }
  return;
}


