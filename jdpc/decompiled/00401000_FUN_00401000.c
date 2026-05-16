/*
 * Function: FUN_00401000
 * Entry:    00401000
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4
FUN_00401000(undefined4 *param_1,undefined4 param_2,short *param_3,short *param_4,uint *param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (param_1[0x1b] != 0) {
    return 2;
  }
  bVar5 = false;
  if (*param_4 == 1) {
    bVar5 = param_4[1] == param_3[1];
  }
  if (bVar5) {
    bVar5 = true;
    if (*param_3 == 1) {
      bVar5 = param_4[7] == param_3[7];
    }
    if ((bVar5) && (*(int *)(param_4 + 2) == *(int *)(param_3 + 2))) {
      bVar5 = true;
      if (*param_3 == 2) {
        if ((param_3[7] == 4) && (param_4[7] == 0x10)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      if ((((bVar5) &&
           ((uint)(ushort)param_3[6] ==
            (int)((uint)(ushort)param_3[7] * (uint)(ushort)param_3[1] +
                 ((int)((uint)(ushort)param_3[7] * (uint)(ushort)param_3[1]) >> 0x1f & 7U)) >> 3))
          && ((uint)(ushort)param_4[6] ==
              (int)((uint)(ushort)param_4[7] * (uint)(ushort)param_4[1] +
                   ((int)((uint)(ushort)param_4[7] * (uint)(ushort)param_4[1]) >> 0x1f & 7U)) >> 3))
         && ((*(int *)(param_3 + 4) == (uint)(ushort)param_3[6] * *(int *)(param_3 + 2) &&
             (*(int *)(param_4 + 4) == (uint)(ushort)param_4[6] * *(int *)(param_4 + 2))))) {
        if (*param_5 <= param_5[1] + param_5[2]) {
          return 5;
        }
        puVar3 = &DAT_00451000;
        puVar4 = param_1;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        iVar2 = FUN_00401820(param_2,param_4,param_5);
        param_1[0x1b] = iVar2;
        if (iVar2 == 0) {
          return 3;
        }
        if (param_6 == 0) {
          uVar1 = __ftol();
          uVar1 = FUN_00443ea0(uVar1);
          param_1[8] = uVar1;
          param_1[0x16] = 1;
        }
        else {
          param_1[8] = param_6;
          param_1[0x16] = 0;
        }
        *param_1 = *(undefined4 *)param_3;
        param_1[1] = *(undefined4 *)(param_3 + 2);
        param_1[2] = *(undefined4 *)(param_3 + 4);
        param_1[3] = *(undefined4 *)(param_3 + 6);
        *(short *)(param_1 + 4) = param_3[8];
        param_1[9] = *(undefined4 *)param_4;
        param_1[10] = *(undefined4 *)(param_4 + 2);
        param_1[0xb] = *(undefined4 *)(param_4 + 4);
        param_1[0xc] = *(undefined4 *)(param_4 + 6);
        *(short *)(param_1 + 0xd) = param_4[8];
        uVar1 = __ftol();
        param_1[0x17] = uVar1;
        uVar1 = __ftol();
        param_1[0x18] = uVar1;
        uVar1 = __ftol();
        param_1[0x19] = uVar1;
        uVar1 = __ftol();
        param_1[0x1a] = uVar1;
        return 0;
      }
    }
  }
  return 4;
}


