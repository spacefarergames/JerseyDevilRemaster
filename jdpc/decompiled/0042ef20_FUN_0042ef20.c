/*
 * Function: FUN_0042ef20
 * Entry:    0042ef20
 * Warning:  Decompiled pseudocode, not original source.
 */


int * FUN_0042ef20(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  
  piVar2 = DAT_004d13bc;
  if (DAT_004d13bc == (int *)0x0) {
    return (int *)0x0;
  }
  do {
    if (((short)piVar2[0xb] == *(short *)(param_1 + 0x20)) || ((short)piVar2[0xb] == -1)) {
      psVar1 = (short *)(param_3 + 0x40);
      *(short *)(param_3 + 0x30) = 0x1000 - (short)piVar2[7];
      *(short *)(param_3 + 0x32) = 0x1000 - *(short *)((int)piVar2 + 0x1e);
      *(short *)(param_3 + 0x34) = 0x1000 - (short)piVar2[8];
      *psVar1 = *param_2;
      *(short *)(param_3 + 0x42) = param_2[2];
      *(short *)(param_3 + 0x44) = param_2[4];
      *psVar1 = *psVar1 - (short)piVar2[3];
      *(short *)(param_3 + 0x42) = *(short *)(param_3 + 0x42) - (short)piVar2[4];
      *(short *)(param_3 + 0x44) = *(short *)(param_3 + 0x44) - (short)piVar2[5];
      FUN_00407400((short *)(param_3 + 0x30),param_3 + 0x10);
      FUN_004080b0(param_3 + 0x10,psVar1,param_3 + 0x38);
      if (((-1 < *(short *)(param_3 + 0x38)) &&
          (((*(short *)(param_3 + 0x38) <= (short)piVar2[9] && (-1 < *(short *)(param_3 + 0x3c))) &&
           (*(short *)(param_3 + 0x3c) <= (short)piVar2[10])))) &&
         (((int)*(short *)(param_1 + 0x3a) + (int)*(short *)(param_3 + 0x3a) < 1 &&
          (*(short *)((int)piVar2 + 0x26) <= *(short *)(param_3 + 0x3a))))) {
        return piVar2;
      }
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  } while( true );
}


