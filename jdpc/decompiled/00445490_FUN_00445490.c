/*
 * Function: FUN_00445490
 * Entry:    00445490
 * Warning:  Decompiled pseudocode, not original source.
 */


float10 FUN_00445490(undefined4 param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int local_4;
  
  uVar2 = FUN_0044aeb0();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) != 0.0) {
      fVar4 = (float10)FUN_0044a380(param_1,param_2,&local_4);
      dVar1 = (double)fVar4;
      local_4 = param_3 + local_4;
      if (0xa00 < local_4) {
        fVar4 = (float10)FUN_0044a480(DAT_004a5028,DAT_004a502c,dVar1,uVar2);
        fVar4 = (float10)FUN_0044a5d0(0x11,0x19,param_1,param_2,(double)param_3,(double)fVar4);
        return fVar4;
      }
      if (0x400 < local_4) {
        fVar4 = (float10)FUN_0044a2e0(dVar1,local_4 + -0x600);
        fVar4 = (float10)FUN_0044a5d0(0x11,0x19,param_1,param_2,(double)param_3,(double)fVar4,uVar2)
        ;
        return fVar4;
      }
      if (local_4 < -0x9fd) {
        fVar4 = (float10)FUN_0044a5d0(0x12,0x19,param_1,param_2,(double)param_3,0,0,uVar2);
        return fVar4;
      }
      if (-0x3fe < local_4) {
        fVar4 = (float10)FUN_0044a2e0(dVar1,local_4);
        FUN_0044aeb0();
        return (float10)(double)fVar4;
      }
      fVar4 = (float10)FUN_0044a2e0(dVar1,local_4 + 0x600);
      fVar4 = (float10)FUN_0044a5d0(0x12,0x19,param_1,param_2,(double)param_3,(double)fVar4,uVar2);
      return fVar4;
    }
LAB_00445543:
    FUN_0044aeb0();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  iVar3 = FUN_0044a320();
  if (0 < iVar3) {
    if (iVar3 < 3) goto LAB_00445543;
    if (iVar3 == 3) {
      fVar4 = (float10)FUN_0044a550(0x19,param_1,param_2,(double)param_3,uVar2);
      return fVar4;
    }
  }
  fVar4 = (float10)FUN_0044a5d0(8,0x19,param_1,param_2,(double)param_3,
                                (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) - -1.0,uVar2);
  return fVar4;
}


