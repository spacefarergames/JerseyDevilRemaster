/*
 * Function: FUN_0044a4b0
 * Entry:    0044a4b0
 * Warning:  Decompiled pseudocode, not original source.
 */


int FUN_0044a4b0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
      return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
    }
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
      return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
    }
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
  }
  iVar1 = FUN_0044a320(param_1,param_2);
  if (iVar1 == 1) {
    return 0x200;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 1;
    }
    return 2;
  }
  return 4;
}


