/*
 * Function: FUN_004207f0
 * Entry:    004207f0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 *
FUN_004207f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00443ea0(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    puVar1[7] = param_1;
    iVar2 = FUN_004208c0(param_1,param_2,param_3,param_4,param_5,puVar1);
    if (iVar2 != 0) {
      if ((param_6 == 0) && (param_7 == 0)) {
        puVar1[8] = 0;
        iVar2 = 4;
        puVar3 = puVar1;
        do {
          puVar3 = puVar3 + 1;
          *puVar3 = 0;
          (**(code **)(*DAT_004a607c + 0x14))(DAT_004a607c,*puVar1,puVar3);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return puVar1;
      }
      puVar1[8] = 1;
      iVar2 = FUN_004208c0(param_1,param_6 + param_2,param_7 - param_6,param_4,param_5,puVar1 + 1);
      if (iVar2 != 0) {
        return puVar1;
      }
    }
    FUN_00443fe0(puVar1);
  }
  return (undefined4 *)0x0;
}


