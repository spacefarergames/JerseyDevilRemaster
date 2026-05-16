/*
 * Function: FUN_0043c740
 * Entry:    0043c740
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0043c740(int param_1,int *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_004d2384 + 0xdc);
  param_2[1] = iVar3;
  while ((iVar3 != 0 && (((int *)param_2[1])[1] != (int)*(short *)(param_1 + 0x20)))) {
    iVar3 = *(int *)param_2[1];
    param_2[1] = iVar3;
  }
  if (param_2[1] != 0) {
    iVar3 = *(int *)(param_1 + 0x60);
    *param_2 = iVar3;
    while (iVar3 != 0) {
      iVar3 = *param_2;
      uVar2 = *(ushort *)(iVar3 + 8);
      if ((uVar2 & 0x80) == 0) {
        if ((uVar2 & 0x100) == 0) {
          if ((uVar2 & 0x200) != 0) {
            iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x44);
            param_2[2] = iVar3;
            FUN_004072e0(iVar3 + 0x10,param_2 + 9);
            puVar1 = (ushort *)(param_2 + 7);
            *(undefined2 *)((int)param_2 + 0x1e) = 0;
            *(undefined2 *)(param_2 + 8) = 0xf000;
            *puVar1 = 0;
            FUN_00408010(param_2 + 9,puVar1,param_2 + 3);
            *(short *)(param_2[1] + 0x2c) = (short)param_2[3];
            *(short *)(param_2[1] + 0x2e) = (short)param_2[4];
            *(short *)(param_2[1] + 0x30) = (short)param_2[5];
            iVar3 = param_2[2];
            *puVar1 = (ushort)*(byte *)(iVar3 + 0x24);
            *(ushort *)((int)param_2 + 0x1e) = (ushort)*(byte *)(iVar3 + 0x25);
            *(ushort *)(param_2 + 8) = (ushort)*(byte *)(iVar3 + 0x26);
            FUN_00408500(puVar1,puVar1);
            *(ushort *)(param_2[1] + 0x10) = *puVar1;
            *(undefined2 *)(param_2[1] + 0x16) = *(undefined2 *)((int)param_2 + 0x1e);
            *(short *)(param_2[1] + 0x1c) = (short)param_2[8];
          }
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x44);
          param_2[2] = iVar3;
          FUN_004072e0(iVar3 + 0x10,param_2 + 9);
          puVar1 = (ushort *)(param_2 + 7);
          *(undefined2 *)((int)param_2 + 0x1e) = 0;
          *(undefined2 *)(param_2 + 8) = 0xf000;
          *puVar1 = 0;
          FUN_00408010(param_2 + 9,puVar1,param_2 + 3);
          *(short *)(param_2[1] + 0x26) = (short)param_2[3];
          *(short *)(param_2[1] + 0x28) = (short)param_2[4];
          *(short *)(param_2[1] + 0x2a) = (short)param_2[5];
          iVar3 = param_2[2];
          *puVar1 = (ushort)*(byte *)(iVar3 + 0x24);
          *(ushort *)((int)param_2 + 0x1e) = (ushort)*(byte *)(iVar3 + 0x25);
          *(ushort *)(param_2 + 8) = (ushort)*(byte *)(iVar3 + 0x26);
          FUN_00408500(puVar1,puVar1);
          *(ushort *)(param_2[1] + 0xe) = *puVar1;
          *(undefined2 *)(param_2[1] + 0x14) = *(undefined2 *)((int)param_2 + 0x1e);
          *(short *)(param_2[1] + 0x1a) = (short)param_2[8];
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x44);
        param_2[2] = iVar3;
        FUN_004072e0(iVar3 + 0x10,param_2 + 9);
        puVar1 = (ushort *)(param_2 + 7);
        *(undefined2 *)((int)param_2 + 0x1e) = 0;
        *(undefined2 *)(param_2 + 8) = 0xf000;
        *puVar1 = 0;
        FUN_00408010(param_2 + 9,puVar1,param_2 + 3);
        *(short *)(param_2[1] + 0x20) = (short)param_2[3];
        *(short *)(param_2[1] + 0x22) = (short)param_2[4];
        *(short *)(param_2[1] + 0x24) = (short)param_2[5];
        iVar3 = param_2[2];
        *puVar1 = (ushort)*(byte *)(iVar3 + 0x24);
        *(ushort *)((int)param_2 + 0x1e) = (ushort)*(byte *)(iVar3 + 0x25);
        *(ushort *)(param_2 + 8) = (ushort)*(byte *)(iVar3 + 0x26);
        FUN_00408500(puVar1,puVar1);
        *(ushort *)(param_2[1] + 0xc) = *puVar1;
        *(undefined2 *)(param_2[1] + 0x12) = *(undefined2 *)((int)param_2 + 0x1e);
        *(short *)(param_2[1] + 0x18) = (short)param_2[8];
      }
      iVar3 = *(int *)*param_2;
      *param_2 = iVar3;
    }
  }
  return;
}


