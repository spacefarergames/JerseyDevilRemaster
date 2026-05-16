/*
 * Function: FUN_0042b630
 * Entry:    0042b630
 * Warning:  Decompiled pseudocode, not original source.
 */


short FUN_0042b630(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  out(0x43,0xb8);
  bVar1 = in(0x61);
  out(0x61,bVar1 | 1);
  out(0x42,0);
  out(0x42,0);
  iVar4 = 0xffff;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = in(0x42);
  uVar3 = in(0x42);
  return -CONCAT11(uVar3,uVar2);
}


