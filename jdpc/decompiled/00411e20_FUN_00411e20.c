/*
 * Function: FUN_00411e20
 * Entry:    00411e20
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00411e20(void)

{
  int iVar1;
  PIXELFORMATDESCRIPTOR *pPVar2;
  PIXELFORMATDESCRIPTOR local_28;
  
  DAT_004a5ed8 = 0;
  iVar1 = FUN_00411f30(s_opengl32_dll_0045ba68);
  if (iVar1 == 0) {
    pPVar2 = &local_28;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      pPVar2->nSize = 0;
      pPVar2->nVersion = 0;
      pPVar2 = (PIXELFORMATDESCRIPTOR *)&pPVar2->dwFlags;
    }
    DAT_004a5ee8 = (HWND)GetDC((HWND)0x0);
    local_28.nSize = 0x28;
    local_28.nVersion = 1;
    local_28.dwFlags = 0x25;
    local_28.iPixelType = '\0';
    local_28.cColorBits = '\x10';
    local_28.iLayerType = '\0';
    iVar1 = ChoosePixelFormat((HDC)DAT_004a5ee8,&local_28);
    if ((((((iVar1 != 0) || (iVar1 = (*DAT_008106bc)(DAT_004a5ee8,&local_28), iVar1 != 0)) &&
          ((local_28.dwFlags & 0x20) != 0)) &&
         (((local_28.dwFlags & 0x40) == 0 || ((local_28.dwFlags & 0x1000) != 0)))) &&
        (((local_28.dwFlags & 1) != 0 &&
         ((local_28.iPixelType == '\0' && (local_28.cColorBits == '\x10')))))) &&
       (local_28.iLayerType == '\0')) {
      DAT_004a5ed8 = 1;
    }
  }
  ReleaseDC(DAT_004a5ee8,(HDC)0x0);
  return DAT_004a5ed8;
}


