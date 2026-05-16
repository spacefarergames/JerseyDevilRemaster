/*
 * Function: FUN_00402ee0
 * Entry:    00402ee0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00402ee0(undefined2 param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_4;
  
  iVar5 = 0;
  DAT_0055eb54 = 0;
  local_4 = DAT_0055ffc0;
  if (DAT_0055ffc0 <= DAT_005618ec) {
    piVar7 = &DAT_00813b80 + DAT_0055ffc0;
    puVar6 = (undefined4 *)(&DAT_00561910 + DAT_0055ffc0 * 0x40);
    do {
      iVar4 = *piVar7;
      *(undefined2 *)(puVar6 + -3) = param_1;
      puVar6[-4] = 0;
      if (iVar4 == 0) {
        iVar4 = puVar6[-2];
        if ((int)puVar6[-1] < iVar4) {
          puVar6[-2] = puVar6[-1];
          puVar6[-1] = iVar4;
          uVar3 = *puVar6;
          *puVar6 = puVar6[1];
          puVar6[1] = uVar3;
        }
        uVar3 = puVar6[-2];
        iVar4 = DAT_00a14b80 * 0x20;
        puVar1 = (undefined4 *)(&DAT_00814b80 + iVar4);
        *(undefined4 *)(&DAT_00814b94 + iVar4) = 0;
        *(undefined4 **)(&DAT_00814b98 + iVar4) = puVar1;
        *(undefined4 **)(&DAT_00814b9c + iVar4) = puVar1;
        *puVar1 = uVar3;
        *(undefined4 *)(&DAT_00814b84 + iVar4) = puVar6[-1];
        uVar2 = *(ushort *)(puVar6 + -3);
        *piVar7 = (int)puVar1;
        *(uint *)(&DAT_00814b88 + iVar4) = (uint)uVar2;
        DAT_00a14b80 = DAT_00a14b80 + 1;
        *(undefined4 *)(&DAT_00814b8c + iVar4) = 0;
        *(undefined4 *)(&DAT_00814b90 + iVar4) = 0;
        iVar5 = iVar5 + 1;
      }
      else {
        iVar4 = FUN_00403060(puVar6 + -4,iVar4,0);
        iVar5 = iVar5 + iVar4;
      }
      local_4 = local_4 + 1;
      puVar6 = puVar6 + 0x10;
      piVar7 = piVar7 + 1;
    } while (local_4 <= DAT_005618ec);
  }
  return iVar5;
}


