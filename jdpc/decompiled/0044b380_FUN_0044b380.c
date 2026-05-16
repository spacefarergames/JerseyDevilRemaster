/*
 * Function: FUN_0044b380
 * Entry:    0044b380
 * Warning:  Decompiled pseudocode, not original source.
 */


unkbyte10 FUN_0044b380(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}


