/*
 * Function: FUN_004507c0
 * Entry:    004507c0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_004507c0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00443ea0(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_00443fe0(param_1);
    return (undefined4 *)0x0;
  }
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
    }
  }
  do {
    puVar1 = (undefined4 *)0x0;
    if (param_2 < 0xffffffe1) {
      pbVar2 = (byte *)FUN_00446860(param_1,&local_4,&local_8);
      if (pbVar2 == (byte *)0x0) {
        puVar1 = HeapReAlloc(DAT_00a14e24,0,param_1,param_2);
        goto LAB_0045092a;
      }
      if (param_2 < DAT_004a4bb4) {
        iVar3 = FUN_00446ce0(local_4,local_8,pbVar2,param_2 >> 4);
        puVar1 = param_1;
        if (iVar3 != 0) goto LAB_004508bf;
        puVar1 = (undefined4 *)FUN_00446920(param_2 >> 4);
        if (puVar1 != (undefined4 *)0x0) {
          uVar5 = (uint)*pbVar2 << 4;
          if (param_2 <= (uint)*pbVar2 << 4) {
            uVar5 = param_2;
          }
          puVar6 = param_1;
          puVar7 = puVar1;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          FUN_004468c0(local_4,local_8,pbVar2);
          goto LAB_004508bf;
        }
      }
      else {
LAB_004508bf:
        if (puVar1 != (undefined4 *)0x0) {
          return puVar1;
        }
      }
      puVar1 = HeapAlloc(DAT_00a14e24,0,param_2);
      if (puVar1 != (undefined4 *)0x0) {
        uVar5 = (uint)*pbVar2 << 4;
        if (param_2 <= (uint)*pbVar2 << 4) {
          uVar5 = param_2;
        }
        puVar6 = param_1;
        puVar7 = puVar1;
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_004468c0(local_4,local_8,pbVar2);
        goto LAB_0045092a;
      }
    }
    else {
LAB_0045092a:
      if (puVar1 != (undefined4 *)0x0) {
        return puVar1;
      }
    }
    if (DAT_004a6298 == 0) {
      return (undefined4 *)0x0;
    }
    iVar3 = FUN_00446560(param_2);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
  } while( true );
}


