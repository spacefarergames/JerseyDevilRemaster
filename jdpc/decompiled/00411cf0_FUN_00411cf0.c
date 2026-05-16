/*
 * Function: FUN_00411cf0
 * Entry:    00411cf0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00411cf0(void)

{
  PIXELFORMATDESCRIPTOR *pPVar1;
  int iVar2;
  uint unaff_EDI;
  PIXELFORMATDESCRIPTOR local_28;
  
  pPVar1 = &local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pPVar1 = 0;
    pPVar1 = (PIXELFORMATDESCRIPTOR *)((int)pPVar1 + 4);
  }
  local_28.iPixelType = '\0';
  local_28.iLayerType = '\0';
  local_28.nSize = 0x28;
  local_28.nVersion = 1;
  local_28.dwFlags = 0x25;
  local_28.cColorBits = '\x10';
  iVar2 = ChoosePixelFormat(DAT_004a5ee8,&local_28);
  if (iVar2 == 0) {
    iVar2 = (*DAT_008106bc)(DAT_004a5ee8);
    if (iVar2 == 0) {
      return 0;
    }
    if ((unaff_EDI & 0x20) == 0) {
      return 0;
    }
    if (((unaff_EDI & 0x40) != 0) && ((unaff_EDI & 0x1000) == 0)) {
      return 0;
    }
    if ((unaff_EDI & 1) == 0) {
      return 0;
    }
    if ((char)local_28.nSize != '\0') {
      return 0;
    }
    if (local_28.nSize._1_1_ != '\x10') {
      return 0;
    }
    if (local_28.cAccumBits != '\0') {
      return 0;
    }
    iVar2 = (*DAT_008103b0)(DAT_004a5ee8,iVar2,&stack0xffffffd0);
  }
  else {
    if ((local_28.dwFlags & 0x20) == 0) {
      return 0;
    }
    if (((local_28.dwFlags & 0x40) != 0) && ((local_28.dwFlags & 0x1000) == 0)) {
      return 0;
    }
    if ((local_28.dwFlags & 1) == 0) {
      return 0;
    }
    if (local_28.iPixelType != '\0') {
      return 0;
    }
    if (local_28.cColorBits != '\x10') {
      return 0;
    }
    if (local_28.iLayerType != '\0') {
      return 0;
    }
    iVar2 = SetPixelFormat(DAT_004a5ee8,iVar2,&local_28);
  }
  if (iVar2 == 0) {
    return 0;
  }
  DAT_004a5ed8 = 1;
  return 1;
}


