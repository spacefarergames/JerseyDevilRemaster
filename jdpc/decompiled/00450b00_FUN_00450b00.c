/*
 * Function: FUN_00450b00
 * Entry:    00450b00
 * Warning:  Decompiled pseudocode, not original source.
 */


uint FUN_00450b00(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  DWORD local_1c;
  DWORD local_18;
  _INPUT_RECORD local_14;
  
  if (DAT_004a5c10 != 0xffffffff) {
    uVar1 = DAT_004a5c10 & 0xff;
    DAT_004a5c10 = 0xffffffff;
    return uVar1;
  }
  if (DAT_004a5c14 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_004a5c14 == (HANDLE)0xfffffffe) {
    FUN_00450cf0();
  }
  GetConsoleMode(DAT_004a5c14,&local_18);
  SetConsoleMode(DAT_004a5c14,0);
  iVar2 = ReadConsoleInputA(DAT_004a5c14,&local_14,1,&local_1c);
  do {
    if ((iVar2 == 0) || (local_1c == 0)) {
      uVar1 = 0xffffffff;
LAB_00450bd9:
      SetConsoleMode(DAT_004a5c14,local_18);
      return uVar1;
    }
    if ((local_14.EventType == 1) && (local_14.Event.KeyEvent.bKeyDown != 0)) {
      uVar1 = local_14.Event._10_4_ & 0xff;
      if (uVar1 != 0) goto LAB_00450bd9;
      pbVar3 = (byte *)FUN_00450c10(&local_14.Event);
      if (pbVar3 != (byte *)0x0) {
        uVar1 = (uint)*pbVar3;
        DAT_004a5c10 = (uint)pbVar3[1];
        goto LAB_00450bd9;
      }
    }
    iVar2 = ReadConsoleInputA(DAT_004a5c14,&local_14,1,&local_1c);
  } while( true );
}


