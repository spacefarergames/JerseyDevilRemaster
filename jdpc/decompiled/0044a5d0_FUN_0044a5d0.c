/*
 * Function: FUN_0044a5d0
 * Entry:    0044a5d0
 * Warning:  Decompiled pseudocode, not original source.
 */


float10 FUN_0044a5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_20;
  
  iVar3 = FUN_0044aa00(param_1,&param_7,param_9);
  uVar2 = param_6;
  uVar1 = param_5;
  if (iVar3 == 0) {
    local_20 = local_20 & 0xffffffe3 | 3;
    local_30 = param_5;
    local_2c = param_6;
    FUN_0044a6c0(local_58,&param_9,param_1,param_2,&param_3,&param_7);
  }
  iVar3 = FUN_0044ae40(param_1);
  if ((DAT_004a54ac == 0) && (iVar3 != 0)) {
    fVar4 = (float10)FUN_0044ad30(iVar3,param_2,param_3,param_4,uVar1,uVar2,param_7,param_8,param_9)
    ;
    return fVar4;
  }
  FUN_0044ade0(iVar3);
  FUN_0044aeb0(param_9,0xffff);
  return (float10)(double)CONCAT44(param_8,param_7);
}


