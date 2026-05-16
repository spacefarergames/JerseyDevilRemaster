/*
 * Function: FUN_00402310
 * Entry:    00402310
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00402310(void)

{
  HRESULT HVar1;
  int iVar2;
  
  FUN_00401ee0();
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    return 0;
  }
  HVar1 = CoCreateInstance((IID *)&DAT_004516b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_004516c0,&DAT_004a5c90)
  ;
  if (HVar1 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_004a5c90 + 0x1c))();
  if (iVar2 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*DAT_004a5c90 + 0xc))(DAT_004a5c90,&stack0xffffffe4,&DAT_004a5c98,0);
  if (iVar2 < 0) {
    DAT_004a5c98 = (int *)0x0;
  }
  else {
    (**(code **)(*DAT_004a5c98 + 0x2c))(DAT_004a5c98,&DAT_00443e70);
    (**(code **)(*DAT_004a5c98 + 0x34))(DAT_004a5c98,DAT_004a610c,6);
    iVar2 = (**(code **)(*DAT_004a5c98 + 0x1c))(DAT_004a5c98);
    DAT_00a14bf0 = (uint)(-1 < iVar2);
  }
  (**(code **)(*DAT_004a5c90 + 0x10))(DAT_004a5c90,4,&LAB_00401c90,0,1);
  return 1;
}


