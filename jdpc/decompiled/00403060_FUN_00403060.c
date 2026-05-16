/*
 * Function: FUN_00403060
 * Entry:    00403060
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00403060(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int local_8;
  
  iVar7 = param_1[2];
  local_8 = 1;
  if ((int)param_1[3] < iVar7) {
    param_1[2] = param_1[3];
    uVar3 = param_1[4];
    param_1[3] = iVar7;
    param_1[4] = param_1[5];
    param_1[5] = uVar3;
  }
LAB_00403093:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar6 = param_2;
            iVar7 = *(int *)(iVar6 + 0x1c);
            iVar5 = *(int *)(iVar7 + 4) + 1;
            if ((int)param_1[2] <= iVar5) break;
            param_2 = *(int *)(iVar7 + 0x10);
            if (*(int *)(iVar7 + 0x10) == 0) {
              iVar5 = DAT_00a14b80 * 0x20;
              puVar1 = (undefined4 *)(&DAT_00814b80 + iVar5);
              *(undefined4 **)(iVar7 + 0x10) = puVar1;
              *(int *)(&DAT_00814b94 + iVar5) = iVar6;
              *(undefined4 **)(&DAT_00814b9c + iVar5) = puVar1;
              *(undefined4 **)(&DAT_00814b98 + iVar5) = puVar1;
              *puVar1 = param_1[2];
              *(undefined4 *)(&DAT_00814b84 + iVar5) = param_1[3];
              uVar2 = *(ushort *)(param_1 + 1);
              *(undefined4 *)(&DAT_00814b8c + iVar5) = 0;
              *(uint *)(&DAT_00814b88 + iVar5) = (uint)uVar2;
              *(undefined4 *)(&DAT_00814b90 + iVar5) = 0;
              DAT_00a14b80 = DAT_00a14b80 + 1;
              return local_8;
            }
          }
          piVar4 = *(int **)(iVar6 + 0x18);
          iVar8 = *piVar4 + -1;
          if (iVar8 <= (int)param_1[3]) break;
          param_2 = piVar4[3];
          if (piVar4[3] == 0) {
            iVar7 = DAT_00a14b80 * 0x20;
            puVar1 = (undefined4 *)(&DAT_00814b80 + iVar7);
            piVar4[3] = (int)puVar1;
            *(int *)(&DAT_00814b94 + iVar7) = iVar6;
            *(undefined4 **)(&DAT_00814b9c + iVar7) = puVar1;
            *(undefined4 **)(&DAT_00814b98 + iVar7) = puVar1;
            *puVar1 = param_1[2];
            *(undefined4 *)(&DAT_00814b84 + iVar7) = param_1[3];
            uVar2 = *(ushort *)(param_1 + 1);
            *(undefined4 *)(&DAT_00814b8c + iVar7) = 0;
            *(uint *)(&DAT_00814b88 + iVar7) = (uint)uVar2;
            *(undefined4 *)(&DAT_00814b90 + iVar7) = 0;
            DAT_00a14b80 = DAT_00a14b80 + 1;
            return local_8;
          }
        }
        if ((int)param_1[2] <= iVar8) break;
        if ((int)param_1[3] < iVar5) {
          param_1[2] = 2;
          param_1[3] = 1;
          return local_8 + -1;
        }
        param_1[2] = iVar5;
        if (*(int *)(iVar7 + 0x10) == 0) {
          iVar5 = DAT_00a14b80 * 0x20;
          puVar1 = (undefined4 *)(&DAT_00814b80 + iVar5);
          *(undefined4 **)(iVar7 + 0x10) = puVar1;
          *(undefined4 **)(iVar6 + 0x1c) = puVar1;
          *puVar1 = param_1[2];
          *(undefined4 *)(&DAT_00814b84 + iVar5) = param_1[3];
          uVar2 = *(ushort *)(param_1 + 1);
          *(undefined4 *)(&DAT_00814b8c + iVar5) = 0;
          *(uint *)(&DAT_00814b88 + iVar5) = (uint)uVar2;
          *(undefined4 *)(&DAT_00814b90 + iVar5) = 0;
          DAT_00a14b80 = DAT_00a14b80 + 1;
          if (param_3 == 0) {
            return local_8;
          }
          FUN_00402fd0(iVar6,param_1[3]);
          return local_8;
        }
        param_3 = 1;
        param_2 = *(int *)(iVar7 + 0x10);
      }
      if (iVar5 <= (int)param_1[3]) break;
      param_1[3] = iVar8;
      if (piVar4[3] == 0) {
        iVar7 = DAT_00a14b80 * 0x20;
        puVar1 = (undefined4 *)(&DAT_00814b80 + iVar7);
        piVar4[3] = (int)puVar1;
        *(undefined4 **)(iVar6 + 0x18) = puVar1;
        *puVar1 = param_1[2];
        *(undefined4 *)(&DAT_00814b84 + iVar7) = param_1[3];
        uVar2 = *(ushort *)(param_1 + 1);
        *(undefined4 *)(&DAT_00814b8c + iVar7) = 0;
        *(uint *)(&DAT_00814b88 + iVar7) = (uint)uVar2;
        *(undefined4 *)(&DAT_00814b90 + iVar7) = 0;
        goto LAB_004033d1;
      }
      param_3 = 1;
      param_2 = piVar4[3];
    }
    iVar9 = DAT_0055eb54 * 0x40;
    puVar10 = &DAT_00571920 + iVar9;
    DAT_0055eb54 = DAT_0055eb54 + 1;
    FUN_00403470(puVar10,param_1);
    *param_1 = puVar10;
    *(int *)(&DAT_00571928 + iVar9) = iVar5;
    param_1[3] = iVar8;
    iVar5 = *(int *)(iVar7 + 0x10);
    if (piVar4[3] == 0) {
      if (iVar5 == 0) {
        iVar5 = DAT_00a14b80 * 0x20;
        puVar1 = (undefined4 *)(&DAT_00814b80 + iVar5);
        *(undefined4 **)(iVar7 + 0x10) = puVar1;
        *(undefined4 **)(iVar6 + 0x1c) = puVar1;
        *puVar1 = *(undefined4 *)(&DAT_00571928 + iVar9);
        *(undefined4 *)(&DAT_00814b84 + iVar5) = *(undefined4 *)(&DAT_0057192c + iVar9);
        uVar2 = *(ushort *)(&DAT_00571924 + iVar9);
        *(undefined4 *)(&DAT_00814b8c + iVar5) = 0;
        *(uint *)(&DAT_00814b88 + iVar5) = (uint)uVar2;
        *(undefined4 *)(&DAT_00814b90 + iVar5) = 0;
        DAT_00a14b80 = DAT_00a14b80 + 1;
        if (param_3 != 0) {
          iVar6 = FUN_00402fd0(iVar6,*(undefined4 *)(&DAT_0057192c + iVar9));
        }
        local_8 = local_8 + 1;
      }
      else {
        iVar7 = FUN_00403060(puVar10,iVar5,1);
        local_8 = local_8 + iVar7;
        iVar7 = *(int *)(iVar6 + 0x18);
        while (iVar7 == 0) {
          iVar6 = *(int *)(iVar6 + 0x14);
          iVar7 = *(int *)(iVar6 + 0x18);
        }
      }
      *(undefined **)(*(int *)(iVar6 + 0x18) + 0xc) = &DAT_00814b80 + DAT_00a14b80 * 0x20;
      puVar1 = *(undefined4 **)(*(int *)(iVar6 + 0x18) + 0xc);
      *(undefined4 **)(iVar6 + 0x18) = puVar1;
      *puVar1 = param_1[2];
      puVar1[1] = param_1[3];
      uVar2 = *(ushort *)(param_1 + 1);
      puVar1[3] = 0;
      puVar1[2] = (uint)uVar2;
      puVar1[4] = 0;
LAB_004033d1:
      DAT_00a14b80 = DAT_00a14b80 + 1;
      if (param_3 == 0) {
        return local_8;
      }
      FUN_00403010(iVar6,param_1[2]);
      return local_8;
    }
    if (iVar5 == 0) {
      iVar5 = DAT_00a14b80 * 0x20;
      puVar1 = (undefined4 *)(&DAT_00814b80 + iVar5);
      *(undefined4 **)(iVar7 + 0x10) = puVar1;
      *(undefined4 **)(iVar6 + 0x1c) = puVar1;
      *puVar1 = *(undefined4 *)(&DAT_00571928 + iVar9);
      *(undefined4 *)(&DAT_00814b84 + iVar5) = *(undefined4 *)(&DAT_0057192c + iVar9);
      uVar2 = *(ushort *)(&DAT_00571924 + iVar9);
      *(undefined4 *)(&DAT_00814b8c + iVar5) = 0;
      *(uint *)(&DAT_00814b88 + iVar5) = (uint)uVar2;
      *(undefined4 *)(&DAT_00814b90 + iVar5) = 0;
      DAT_00a14b80 = DAT_00a14b80 + 1;
      if (param_3 != 0) {
        iVar6 = FUN_00402fd0(iVar6,*(undefined4 *)(&DAT_0057192c + iVar9));
      }
      local_8 = local_8 + 1;
    }
    else {
      iVar7 = FUN_00403060(puVar10,iVar5,1);
      local_8 = local_8 + iVar7;
      if (*(int *)(iVar6 + 0x18) == 0) {
        do {
          iVar6 = *(int *)(iVar6 + 0x14);
        } while (*(int *)(iVar6 + 0x18) == 0);
        param_3 = 1;
        param_2 = *(int *)(*(int *)(iVar6 + 0x18) + 0xc);
        goto LAB_00403093;
      }
    }
    param_3 = 1;
    param_2 = *(int *)(*(int *)(iVar6 + 0x18) + 0xc);
  } while( true );
}


