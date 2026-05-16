/*
 * Function: FUN_00441470
 * Entry:    00441470
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_00441470(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_4;
  
  iVar8 = param_4 + 0x88;
  local_4 = 0;
  for (iVar11 = DAT_004d237c; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x10)) {
    iVar9 = (int)*(short *)(iVar11 + 0x3a) + *(int *)(iVar11 + 0xd0);
    if (*(short *)(iVar11 + 0x3a) < 0x47) {
      iVar9 = iVar9 + 0x23;
    }
    else {
      iVar9 = iVar9 + 0x46;
    }
    if (((((*(int *)(param_1 + 0xd0) <= iVar9) && (iVar9 <= (int)param_2[7])) &&
         (uVar5 = *(uint *)(iVar11 + 8), (uVar5 & param_3) != 0)) &&
        (((uVar5 & 1) == 0 && (*(short *)(iVar11 + 0x24) == 2)))) && (param_1 != iVar11)) {
      if ((uVar5 & 0x2000) == 0) {
        psVar1 = (short *)(param_4 + 0x28);
        *psVar1 = 0x1000 - *(short *)(iVar11 + 0xc4);
        *(short *)(param_4 + 0x2a) = 0x1000 - *(short *)(iVar11 + 0xc6);
        *(short *)(param_4 + 0x2c) = 0x1000 - *(short *)(iVar11 + 200);
        *(short *)(param_4 + 0x38) = *(short *)(param_1 + 0xcc) - *(short *)(iVar11 + 0xcc);
        *(short *)(param_4 + 0x3a) = *(short *)(param_1 + 0xd0) - *(short *)(iVar11 + 0xd0);
        sVar3 = *(short *)(param_1 + 0xd4);
        sVar4 = *(short *)(iVar11 + 0xd4);
        *(undefined2 *)(param_4 + 0x18) = 0x1000;
        *(short *)(param_4 + 0x3c) = sVar3 - sVar4;
        *(undefined2 *)(param_4 + 8) = 0x1000;
        *(undefined2 *)(param_4 + 10) = 0;
        *(undefined2 *)(param_4 + 0xc) = 0;
        *(undefined2 *)(param_4 + 0xe) = 0;
        *(undefined2 *)(param_4 + 0x10) = 0x1000;
        *(undefined2 *)(param_4 + 0x12) = 0;
        *(undefined2 *)(param_4 + 0x14) = 0;
        *(undefined2 *)(param_4 + 0x16) = 0;
        *(undefined4 *)(param_4 + 0x1c) = 0;
        *(undefined4 *)(param_4 + 0x20) = 0;
        *(undefined4 *)(param_4 + 0x24) = 0;
        FUN_00407490((int)*psVar1,(undefined2 *)(param_4 + 8));
        FUN_00407610((int)*(short *)(param_4 + 0x2a),param_4 + 8);
        FUN_00407780((int)*(short *)(param_4 + 0x2c),param_4 + 8);
        FUN_00407a60(param_4 + 8,param_4 + 0x38,param_4 + 0x30);
        psVar2 = (short *)(param_4 + 0x30);
        if ((((int)*(short *)(iVar11 + 0x30) - (int)*(short *)(iVar11 + 0x1c) <= (int)*psVar2) &&
            ((int)*psVar2 <= (int)*(short *)(iVar11 + 0x38) + (int)*(short *)(iVar11 + 0x1c))) &&
           (((int)*(short *)(iVar11 + 0x34) - (int)*(short *)(iVar11 + 0x1c) <=
             (int)*(short *)(param_4 + 0x34) &&
            ((int)*(short *)(param_4 + 0x34) <=
             (int)*(short *)(iVar11 + 0x3c) + (int)*(short *)(iVar11 + 0x1c))))) {
          *psVar1 = 0;
          iVar9 = iVar11 + 0x68;
          *(undefined2 *)(param_4 + 0x2a) = *(undefined2 *)(iVar11 + 0x3a);
          *(undefined2 *)(param_4 + 0x2c) = 0;
          FUN_00407a60(iVar9,psVar1,psVar2);
          *(undefined2 *)(param_4 + 0x2a) = 0x1000;
          FUN_00407a60(iVar9,psVar1,param_4 + 0x40);
          *(undefined2 *)(param_4 + 0x2a) = *(undefined2 *)(iVar11 + 0xb8);
          FUN_00407a60(iVar9,psVar1,param_4 + 0x48);
          iVar9 = (int)*(short *)(param_4 + 0x32) * (int)*(short *)(param_4 + 0x42) +
                  (int)*(short *)(param_4 + 0x44) * (int)*(short *)(param_4 + 0x34) +
                  (int)*(short *)(param_4 + 0x40) * (int)*(short *)(param_4 + 0x30);
          *(int *)(param_4 + 0x50) = iVar9;
          iVar9 = ((iVar9 - (int)*(short *)(param_4 + 0x40) * (int)*(short *)(param_4 + 0x38)) -
                  (int)*(short *)(param_4 + 0x44) * (int)*(short *)(param_4 + 0x3c)) /
                  (int)((int)*(short *)(param_4 + 0x4a) | 1U) + *(int *)(iVar11 + 0xd0);
          param_2[7] = iVar9;
          iVar9 = (*(int *)(param_1 + 0xd0) - iVar9) * 4 + 0x1000;
          *(int *)(param_4 + 4) = iVar9;
          if (iVar9 < 0x800) {
            *(undefined4 *)(param_4 + 4) = 0x800;
          }
          uVar6 = *(undefined4 *)(param_4 + 4);
          param_2[1] = 0x1000;
          *param_2 = uVar6;
          param_2[2] = *(undefined4 *)(param_4 + 4);
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar11 + 0xc4);
          *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)(iVar11 + 0xc6);
          *(undefined2 *)(param_2 + 5) = *(undefined2 *)(iVar11 + 200);
          local_4 = iVar11;
        }
      }
      else {
        sVar3 = *(short *)(iVar11 + 0x30);
        sVar4 = *(short *)(iVar11 + 0x38);
        *(short *)(param_4 + 0x38) = *(short *)(param_2 + 6) - *(short *)(iVar11 + 0xcc);
        *(short *)(param_4 + 0x3c) = *(short *)(param_2 + 8) - *(short *)(iVar11 + 0xd4);
        FUN_004070b0((short *)(param_4 + 0x38),param_4 + 4);
        if (*(int *)(param_4 + 4) < (int)sVar4 - (int)sVar3 >> 1) {
          param_2[7] = (*(int *)(iVar11 + 0xb8) * (int)*(short *)(iVar11 + 0x3a) >> 0xc) +
                       *(int *)(iVar11 + 0xd0);
          return iVar11;
        }
      }
    }
  }
  if (local_4 != 0) {
    return local_4;
  }
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_4 + 0x10) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined2 *)(param_4 + 0x82) = *(undefined2 *)(param_1 + 0x20);
  *(int *)(param_4 + 0x18) = (int)*(short *)(param_1 + 0x30) + *(int *)(param_4 + 8);
  *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(param_4 + 0xc);
  iVar11 = param_4 + 0x78;
  *(int *)(param_4 + 0x20) = (int)*(short *)(param_1 + 0x34) + *(int *)(param_4 + 0x10);
  FUN_00431690((int *)(param_4 + 0x18),iVar11,iVar8);
  if ((*(byte *)(param_4 + 0x7a) & 4) == 0) {
    iVar10 = *(int *)(param_4 + 0x1c) + (int)*(short *)(param_4 + 0x7e);
    *(int *)(param_4 + 0x1c) = iVar10;
    iVar9 = param_2[7];
    if ((iVar9 + 0x23 <= iVar10) || (iVar10 <= iVar9 + -0x23)) {
      *(int *)(param_4 + 0x1c) = iVar9;
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x1c) = param_2[7];
  }
  sVar3 = *(short *)(param_1 + 0x38);
  *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_4 + 0xc);
  *(int *)(param_4 + 0x28) = (int)sVar3 + *(int *)(param_4 + 8);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_4 + 0x20);
  FUN_00431690((int *)(param_4 + 0x28),iVar11,iVar8);
  if ((*(byte *)(param_4 + 0x7a) & 4) == 0) {
    iVar10 = *(int *)(param_4 + 0x2c) + (int)*(short *)(param_4 + 0x7e);
    *(int *)(param_4 + 0x2c) = iVar10;
    iVar9 = param_2[7];
    if ((iVar9 + 0x23 <= iVar10) || (iVar10 <= iVar9 + -0x23)) goto LAB_0044187c;
  }
  else {
    iVar9 = param_2[7];
LAB_0044187c:
    *(int *)(param_4 + 0x2c) = iVar9;
  }
  *(undefined4 *)(param_4 + 0x3c) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(param_4 + 0x38) = *(undefined4 *)(param_4 + 0x18);
  *(int *)(param_4 + 0x40) = (int)*(short *)(param_1 + 0x3c) + *(int *)(param_4 + 0x10);
  FUN_00431690((undefined4 *)(param_4 + 0x38),iVar11,iVar8);
  if ((*(byte *)(param_4 + 0x7a) & 4) == 0) {
    iVar8 = *(int *)(param_4 + 0x3c) + (int)*(short *)(param_4 + 0x7e);
    *(int *)(param_4 + 0x3c) = iVar8;
    iVar11 = param_2[7];
    if ((iVar8 < iVar11 + 0x23) && (iVar11 + -0x23 < iVar8)) goto LAB_004418d6;
  }
  else {
    iVar11 = param_2[7];
  }
  *(int *)(param_4 + 0x3c) = iVar11;
LAB_004418d6:
  iVar11 = (*(int *)(param_1 + 0xd0) - param_2[7]) * 4 + 0x1000;
  *(int *)(param_4 + 4) = iVar11;
  if (iVar11 < 0x800) {
    *(undefined4 *)(param_4 + 4) = 0x800;
  }
  uVar6 = *(undefined4 *)(param_4 + 4);
  param_2[1] = 0x1000;
  *param_2 = uVar6;
  param_2[2] = *(undefined4 *)(param_4 + 4);
  if ((*(int *)(param_4 + 0x1c) == *(int *)(param_4 + 0x2c)) &&
     (*(int *)(param_4 + 0x1c) == *(int *)(param_4 + 0x3c))) {
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0xc4);
    *(undefined2 *)((int)param_2 + 0x12) = *(undefined2 *)(param_1 + 0xc6);
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_1 + 200);
    return 0;
  }
  FUN_004413f0(param_4 + 0x18,param_4 + 0x28,param_4 + 0x48);
  FUN_004413f0(param_4 + 0x18,param_4 + 0x38,param_4 + 0x58);
  FUN_00441420(param_4 + 0x48,param_4 + 0x58,(undefined4 *)(param_4 + 0x68));
  uVar7 = FUN_00407270(*(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x6c));
  *(undefined2 *)(param_2 + 4) = uVar7;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  uVar7 = FUN_00407270(*(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c));
  *(undefined2 *)(param_2 + 5) = uVar7;
  return 0;
}


