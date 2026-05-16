/*
 * Function: FUN_00401400
 * Entry:    00401400
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00401400(int param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint *unaff_EDI;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  int local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x6c) != 0) && (FUN_004017c0(param_1), *(int *)(param_1 + 0x70) == 0)) {
    if (param_3 == -1) {
      iVar6 = *(int *)(param_1 + 100);
    }
    else {
      uVar11 = __allmul(*(undefined4 *)(param_1 + 0x2c),0,param_3,param_3 >> 0x1f);
      iVar6 = __alldiv(uVar11,1000,0);
    }
    if (param_2 == 0xffffffff) {
      param_2 = FUN_004018c0(param_1,&local_14);
    }
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c);
      if (uVar4 <= param_2) {
        param_2 = uVar4;
      }
    }
    else {
      uVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x1c);
      if (uVar4 < param_2) {
        FUN_00401400(param_1,uVar4,0);
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        FUN_00444030(*(undefined4 *)(param_1 + 0x18),-*(int *)(param_1 + 0x14),1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        FUN_00401400(param_1,param_2 - uVar4,param_3);
        return;
      }
    }
    iVar7 = param_2 * *(ushort *)(param_1 + 0xc);
    iVar8 = param_2 * *(ushort *)(param_1 + 0x30);
    if (param_2 != 0) {
      bVar9 = false;
      param_1 = 0;
      do {
        if (bVar9) break;
        iVar5 = (**(code **)(**(int **)(iVar2 + 0x6c) + 0x2c))
                          (*(int **)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x38),iVar8,&local_8,
                           &local_10,&local_4,&local_c,0);
        if ((iVar5 == 0) && (local_10 + local_c == iVar8)) {
          iVar5 = FUN_004440f0(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x20),iVar7);
          if (iVar5 != iVar7) goto LAB_00401561;
          uVar4 = *(int *)(iVar2 + 0x1c) + iVar5;
          *(uint *)(iVar2 + 0x1c) = uVar4;
          if ((*(uint *)(iVar2 + 0x14) <= uVar4) && (*(int *)(iVar2 + 0x54) == 0)) {
            *(undefined4 *)(iVar2 + 0x78) = 1;
          }
          bVar9 = true;
        }
        else {
          FUN_004017a0(iVar2);
          param_1 = param_1 + 1;
          local_14 = 1;
          (**(code **)(**(int **)(iVar2 + 0x6c) + 0x34))
                    (*(int **)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x38));
        }
      } while (param_1 < 2);
      if (param_1 == 2) {
LAB_00401561:
        (**(code **)(**(int **)(iVar2 + 0x6c) + 0x4c))
                  (*(int **)(iVar2 + 0x6c),local_8,local_10,local_4,local_c);
        return;
      }
      uVar4 = local_10 / *(ushort *)(iVar2 + 0x30);
      FUN_004019b0(iVar2,*(undefined4 *)(iVar2 + 0x20),local_8,uVar4);
      if (local_c != 0) {
        FUN_004019b0(iVar2,uVar4 * *(ushort *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x20),local_4,
                     local_c / *(ushort *)(iVar2 + 0x30));
      }
      (**(code **)(**(int **)(iVar2 + 0x6c) + 0x4c))
                (*(int **)(iVar2 + 0x6c),local_8,local_10,local_4,local_c);
    }
    uVar4 = *(int *)(iVar2 + 0x38) + iVar8;
    *(uint *)(iVar2 + 0x38) = uVar4;
    if (*(uint *)(iVar2 + 0x3c) < uVar4) {
      iVar7 = 0;
      *(uint *)(iVar2 + 0x3c) = uVar4 % *(uint *)(iVar2 + 0x5c);
    }
    else {
      iVar7 = *(uint *)(iVar2 + 0x3c) - uVar4;
    }
    if (*(uint *)(iVar2 + 0x5c) <= uVar4) {
      *(uint *)(iVar2 + 0x38) = uVar4 - *(uint *)(iVar2 + 0x5c);
    }
    if (iVar6 - iVar7 != 0) {
      puVar13 = &local_c;
      puVar14 = (uint *)0x0;
      puVar12 = &local_4;
      iVar6 = (**(code **)(**(int **)(iVar2 + 0x6c) + 0x2c))
                        (*(int **)(iVar2 + 0x6c),*(undefined4 *)(iVar2 + 0x3c),iVar6 - iVar7,
                         &local_8,&local_10);
      if (iVar6 == 0) {
        bVar3 = (*(short *)(iVar2 + 0x32) != 8) - 1;
        uVar1 = CONCAT11(bVar3,bVar3);
        puVar10 = puVar14;
        for (uVar4 = (uint)puVar12 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar10 = CONCAT22(uVar1,uVar1) & 0x80808080;
          puVar10 = puVar10 + 1;
        }
        for (uVar4 = (uint)puVar12 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(byte *)puVar10 = bVar3 & 0x80;
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        if (puVar13 != (uint *)0x0) {
          puVar10 = unaff_EDI;
          for (uVar4 = (uint)puVar13 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar10 = CONCAT22(uVar1,uVar1) & 0x80808080;
            puVar10 = puVar10 + 1;
          }
          for (uVar4 = (uint)puVar13 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(byte *)puVar10 = bVar3 & 0x80;
            puVar10 = (uint *)((int)puVar10 + 1);
          }
        }
        *(uint *)(iVar2 + 0x3c) =
             (uint)((int)puVar12 + (int)puVar13 + *(int *)(iVar2 + 0x3c)) % *(uint *)(iVar2 + 0x5c);
      }
      (**(code **)(**(int **)(iVar2 + 0x6c) + 0x4c))
                (*(int **)(iVar2 + 0x6c),puVar14,puVar12,unaff_EDI,puVar13);
    }
    if ((local_14 != 0) && (*(int *)(iVar2 + 0x70) == 0)) {
      FUN_00401760(iVar2);
    }
  }
  return;
}


