/*
 * Function: FUN_00412090
 * Entry:    00412090
 * Warning:  Decompiled pseudocode, not original source.
 */


HWND FUN_00412090(HINSTANCE param_1,int param_2)

{
  int iVar1;
  HWND local_140;
  WNDCLASSA local_13c;
  tagRECT local_114;
  CHAR local_104 [260];
  
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xd8),local_104,0x104);
  FUN_004106c0(DAT_0053e850,DAT_0053e854);
  FUN_00410cb0(DAT_0053e850,DAT_0053e854,0x200,0xf0);
  DAT_004a09a4 = 0x10;
  FUN_00411f80(&DAT_004a610c);
  iVar1 = FUN_00412010();
  if (iVar1 != 0) {
    FUN_00411090(param_1);
    local_13c.style = 0x2023;
    local_13c.lpfnWndProc = (WNDPROC)&LAB_00411710;
    local_13c.cbClsExtra = 0;
    local_13c.cbWndExtra = 0;
    local_13c.hInstance = param_1;
    if (DAT_0053e858 == 0) {
      local_13c.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
      local_13c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_13c.hbrBackground = (HBRUSH)0x0;
      local_13c.lpszMenuName = (LPCSTR)0x0;
      local_13c.lpszClassName = &DAT_004539b8;
      RegisterClassA(&local_13c);
      local_140 = CreateWindowExA(0x40000,&DAT_004539b8,local_104,0x96c00000,-0x80000000,-0x80000000
                                  ,DAT_0045c070,DAT_0045c074,(HWND)0x0,(HMENU)0x0,param_1,
                                  (LPVOID)0x0);
      GetClientRect(local_140,&local_114);
      SetWindowPos(local_140,(HWND)0xfffffffe,0,0,DAT_0045c070 * 2 - local_114.right,
                   DAT_0045c074 * 2 - local_114.bottom,0);
    }
    else {
      local_13c.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
      local_13c.hCursor = (HCURSOR)0x0;
      local_13c.hbrBackground = (HBRUSH)0x0;
      local_13c.lpszMenuName = (LPCSTR)0x0;
      local_13c.lpszClassName = &DAT_004539b8;
      RegisterClassA(&local_13c);
      local_140 = CreateWindowExA(8,&DAT_004539b8,local_104,0x96000000,-0x80000000,-0x80000000,
                                  DAT_0045c070,DAT_0045c074,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0
                                 );
    }
    if (local_140 == (HWND)0x0) {
      FUN_00405550(s_erreur__fenetre_principale_inval_0045f6b8);
    }
    else {
      DAT_004a5ee8 = GetDC(local_140);
      if (DAT_004a5ee8 != (HDC)0x0) {
        if ((DAT_0053e844 & 2) == 0) {
          if ((DAT_0053e844 == 0) || (DAT_0053e844 == 1)) {
            if ((DAT_0053e858 == 0) || (DAT_0053e844 != 1)) {
              ShowWindow(local_140,param_2);
              SetFocus(local_140);
            }
            else {
              iVar1 = FUN_004111e0(DAT_0045c070,DAT_0045c074,0x10,local_140);
              if (iVar1 == 0) goto LAB_0041240e;
              SetWindowPos(local_140,(HWND)0x0,0,0,DAT_0045c070,DAT_0045c074,0);
            }
            DAT_004a09a4 = DAT_0053e844;
            DAT_0045f800 = (-(uint)(DAT_0053e844 != 1) & 0xfffffff0) + 0x18;
            FUN_0041f450(DAT_0053e858);
            iVar1 = (*DAT_0055e1b4)(local_140,DAT_0045c070,DAT_0045c074,DAT_0045f800);
            if (iVar1 != 0) {
              FUN_00419f60();
LAB_0041242d:
              ShowWindow(local_140,param_2);
              FUN_00424100();
              return local_140;
            }
          }
        }
        else {
          DAT_0045f800 = DAT_004a09c4;
          DAT_0045f804 = DAT_004a09c4 >> 3;
          if (DAT_0053e858 != 0) {
            iVar1 = FUN_004111e0(DAT_0045c070,DAT_0045c074,DAT_004a09c4,local_140);
            if (iVar1 == 0) goto LAB_0041240e;
            SetWindowPos(local_140,(HWND)0x0,0,0,DAT_0045c070,DAT_0045c074,0);
          }
          iVar1 = FUN_00411f30(s_opengl32_dll_0045ba68);
          if (iVar1 == 0) {
            DAT_004a09a4 = DAT_0053e844;
            iVar1 = FUN_00411cf0();
            if (iVar1 != 0) {
              iVar1 = FUN_00411fb0();
              if (iVar1 == 0) {
                FUN_00419ed0();
                FUN_004114c0();
                FUN_00415e90();
                goto LAB_0041242d;
              }
            }
          }
        }
      }
    }
  }
LAB_0041240e:
  FUN_00411f80(&local_140);
  return (HWND)0x0;
}


