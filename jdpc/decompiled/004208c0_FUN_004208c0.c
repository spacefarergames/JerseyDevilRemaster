/*
 * Function: FUN_004208c0
 * Entry:    004208c0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4
FUN_004208c0(uint param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 *param_6
            )

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  uint unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c [2];
  undefined4 *local_4;
  
  puVar1 = param_6;
  iVar3 = param_3;
  uVar4 = (ushort)(param_5 * param_4);
  local_1c = (undefined4 *)(((int)(param_5 + (param_5 >> 0x1f & 7U)) >> 3) * param_4 * param_1);
  local_18 = CONCAT22(uVar4,uVar4 >> 3);
  local_4 = &local_24;
  local_c[1] = 0;
  *param_6 = 0;
  local_24 = (undefined4 *)CONCAT22((short)param_4,1);
  local_20 = param_1;
  local_14 = 0x14;
  local_10 = 0x100e0;
  local_c[0] = param_3;
  iVar2 = (**(code **)(*DAT_004a607c + 0xc))(DAT_004a607c,&local_14,param_6,0);
  if (iVar2 == 0) {
    local_c[0] = iVar2;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x2c))
                      ((int *)*puVar1,0,iVar3,&local_4,&stack0x00000000,&param_1,local_c,1);
    if (iVar3 == 0) {
      puVar6 = unaff_EBX;
      puVar7 = local_24;
      for (uVar5 = local_20 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = local_20 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      if (local_1c != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(local_20 + (int)unaff_EBX);
        puVar7 = local_1c;
        for (uVar5 = unaff_ESI >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = unaff_ESI & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1,local_24,local_20,local_1c,unaff_ESI);
    }
    return 1;
  }
  if (iVar2 < -0x7ffbfeef) {
    if ((iVar2 != -0x7ffbfef0) && (iVar2 != -0x7fffbfff)) goto LAB_00420a3a;
  }
  else if (iVar2 < -0x7ff8ffa8) {
    if ((iVar2 != -0x7ff8ffa9) && (iVar2 != -0x7ff8fff2)) goto LAB_00420a3a;
  }
  else if ((iVar2 != -0x7787ff9c) && (iVar2 != -0x7787ff56)) goto LAB_00420a3a;
  iVar2 = 2;
LAB_00420a3a:
  FUN_00421bd0(iVar2);
  *puVar1 = 0;
  return 0;
}


