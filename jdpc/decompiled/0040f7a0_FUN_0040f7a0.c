/*
 * Function: FUN_0040f7a0
 * Entry:    0040f7a0
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f7a0(int param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  DAT_00810284 = GetTickCount();
  puVar5 = DAT_0051d6e0;
  puVar6 = DAT_0051d6e0 + 0x9a;
  puVar1 = DAT_0051d6e0 + 0x30;
  *(undefined4 *)(DAT_0051d6e0 + 0x28) = 0x40000000;
  *(undefined2 **)(puVar5 + 0x2a) = puVar1;
  *(undefined4 *)(puVar5 + 0x54) = 0;
  *(undefined4 *)(puVar5 + 0x56) = 0;
  puVar5[0x98] = 0xffff;
  *puVar5 = 0;
  *(int *)(puVar5 + 0x88) = param_1;
  while (param_1 != 0) {
    if (puVar5[0x98] != *(short *)(*(int *)(puVar5 + 0x88) + 0x20)) {
      puVar5[0x98] = *(short *)(*(int *)(puVar5 + 0x88) + 0x20);
      iVar7 = *(int *)(DAT_004d2384 + 0xdc);
      *(int *)(puVar5 + 0x8a) = iVar7;
      while ((iVar7 != 0 &&
             ((*(int **)(puVar5 + 0x8a))[1] != (int)*(short *)(*(int *)(puVar5 + 0x88) + 0x20)))) {
        iVar7 = **(int **)(puVar5 + 0x8a);
        *(int *)(puVar5 + 0x8a) = iVar7;
      }
      if (*(int *)(puVar5 + 0x8a) != 0) {
        FUN_00407190(*(int *)(puVar5 + 0x8a) + 0x20,&DAT_0053ea40);
      }
    }
    for (puVar4 = *(undefined4 **)(*(int *)(puVar5 + 0x88) + 0x60); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      uVar2 = *(ushort *)(puVar4 + 2);
      if ((uVar2 & 6) == 0) {
        if ((uVar2 & 0x80) == 0) {
          if ((uVar2 & 0x100) == 0) {
            if ((uVar2 & 0x200) != 0) {
              puVar1 = puVar5 + 0x8c;
              *puVar1 = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x10);
              puVar5[0x8d] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x12);
              puVar5[0x8e] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x14);
              FUN_004072e0(puVar1,puVar5 + 2);
              *puVar1 = 0;
              puVar5[0x8d] = 0;
              puVar5[0x8e] = 0xf000;
              FUN_00408010(puVar5 + 2,puVar1,puVar5 + 0x90);
              _DAT_0053ea4c = puVar5[0x90];
              _DAT_0053ea4e = puVar5[0x92];
              _DAT_0053ea50 = puVar5[0x94];
              puVar5[0x98] = 0xffff;
            }
          }
          else {
            puVar1 = puVar5 + 0x8c;
            *puVar1 = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x10);
            puVar5[0x8d] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x12);
            puVar5[0x8e] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x14);
            FUN_004072e0(puVar1,puVar5 + 2);
            *puVar1 = 0;
            puVar5[0x8d] = 0;
            puVar5[0x8e] = 0xf000;
            FUN_00408010(puVar5 + 2,puVar1,puVar5 + 0x90);
            _DAT_0053ea46 = puVar5[0x90];
            _DAT_0053ea48 = puVar5[0x92];
            _DAT_0053ea4a = puVar5[0x94];
          }
        }
        else {
          puVar1 = puVar5 + 0x8c;
          *puVar1 = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x10);
          puVar5[0x8d] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x12);
          puVar5[0x8e] = *(undefined2 *)(*(int *)(puVar4[4] + 0x44) + 0x14);
          FUN_004072e0(puVar1,puVar5 + 2);
          *puVar1 = 0;
          puVar5[0x8d] = 0;
          puVar5[0x8e] = 0xf000;
          FUN_00408010(puVar5 + 2,puVar1,puVar5 + 0x90);
          _DAT_0053ea40 = puVar5[0x90];
          _DAT_0053ea42 = puVar5[0x92];
          _DAT_0053ea44 = puVar5[0x94];
        }
      }
      else {
        iVar7 = FUN_0040f5f0(puVar4[4],puVar5 + 0x12,puVar5 + 2,puVar6);
        if (iVar7 == 0) {
          *(undefined1 *)(puVar4 + 0x32) = 0;
        }
        else {
          puVar8 = (undefined4 *)(puVar5 + 2);
          puVar9 = puVar4 + 0x25;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar4[0x2d] = *(undefined4 *)(puVar5 + 0x12);
          puVar4[0x2e] = *(undefined4 *)(puVar5 + 0x14);
          puVar4[0x2f] = *(undefined4 *)(puVar5 + 0x16);
          puVar4[0x30] = *(undefined4 *)(puVar5 + 0x18);
          uVar3 = puVar5[0x1a];
          *(undefined1 *)(puVar4 + 0x32) = 1;
          *(undefined2 *)(puVar4 + 0x31) = uVar3;
        }
      }
    }
    param_1 = *(int *)(*(int *)(puVar5 + 0x88) + 0x10);
    *(int *)(puVar5 + 0x88) = param_1;
  }
  return;
}


