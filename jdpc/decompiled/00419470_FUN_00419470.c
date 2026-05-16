/*
 * Function: FUN_00419470
 * Entry:    00419470
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419470(int *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  
  fVar3 = (float)DAT_0066b654;
  fVar4 = (float)DAT_0066b650;
  fVar5 = (float)DAT_0066b65c;
  piVar1 = *(int **)(DAT_0066b648 + 4);
  iVar2 = *piVar1;
  iVar6 = DAT_0066d6c8;
  while (iVar2 != 0) {
    pfVar7 = (float *)((uint)*(ushort *)(iVar2 + *param_1 * 2) * 0x10 + iVar6);
    if ((((((0.0 < pfVar7[2]) &&
           (0.0 < *(float *)((uint)*(ushort *)(iVar2 + param_1[1] * 2) * 0x10 + 8 + iVar6))) &&
          (0.0 < *(float *)((uint)*(ushort *)(iVar2 + param_1[2] * 2) * 0x10 + 8 + iVar6))) ||
         (((pfVar7[2] < _DAT_00642550 &&
           (*(float *)((uint)*(ushort *)(iVar2 + param_1[1] * 2) * 0x10 + 8 + iVar6) < _DAT_00642550
           )) && (*(float *)((uint)*(ushort *)(iVar2 + param_1[2] * 2) * 0x10 + 8 + iVar6) <
                  _DAT_00642550)))) ||
        (((fVar3 < *pfVar7 &&
          (fVar3 < *(float *)((uint)*(ushort *)(iVar2 + param_1[1] * 2) * 0x10 + iVar6))) &&
         (fVar3 < *(float *)((uint)*(ushort *)(iVar2 + param_1[2] * 2) * 0x10 + iVar6))))) ||
       ((((*pfVar7 < fVar4 &&
          (*(float *)((uint)*(ushort *)(iVar2 + param_1[1] * 2) * 0x10 + iVar6) < fVar4)) &&
         (*(float *)((uint)*(ushort *)(iVar2 + param_1[2] * 2) * 0x10 + iVar6) < fVar4)) ||
        (((fVar5 < pfVar7[1] &&
          (fVar5 < *(float *)((uint)*(ushort *)(iVar2 + param_1[1] * 2) * 0x10 + 4 + iVar6))) &&
         (fVar5 < *(float *)((uint)*(ushort *)(iVar2 + param_1[2] * 2) * 0x10 + 4 + iVar6))))))) {
      *(int *)(piVar1[2] + 4) = piVar1[1];
      *(int *)(piVar1[1] + 8) = piVar1[2];
      iVar6 = DAT_0066d6c8;
    }
    piVar1 = (int *)piVar1[1];
    iVar2 = *piVar1;
  }
  return;
}


