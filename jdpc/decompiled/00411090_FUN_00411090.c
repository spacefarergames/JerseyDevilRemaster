/*
 * Function: FUN_00411090
 * Entry:    00411090
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00411090(void)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_74;
  undefined4 local_6c [26];
  HINSTANCE pHStack_4;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  iVar1 = (**(code **)(*DAT_004a5efc + 0x30))(DAT_004a5efc,local_6c);
  if (iVar1 != 0) {
    FUN_00405550(s_file___s_l___d__>msg__GetDisplay_0045f6e8,s_D__Projets_Jdpc_src_Pcrogl_c_0045f714
                 ,0x26b);
    return 0;
  }
  LoadIconA(pHStack_4,(LPCSTR)0x7f00);
  RegisterClassA((WNDCLASSA *)&stack0xffffff64);
  hWnd = CreateWindowExA(8,s_JD_TEMP_0045f6e0,&DAT_004a5e44,0x90000000,-0x80000000,-0x80000000,
                         DAT_0045c070,DAT_0045c074,(HWND)0x0,(HMENU)0x0,pHStack_4,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    FUN_00405550(s_erreur__fenetre_principale_inval_0045f6b8);
    return 0;
  }
  iVar1 = (**(code **)(*DAT_004a5efc + 0x50))(DAT_004a5efc,hWnd,0x11);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*DAT_004a5efc + 0x54))(DAT_004a5efc,uStack_74,s_JD_TEMP_0045f6e0,0x10);
    if (iVar1 == 0) {
      (**(code **)(*DAT_004a5efc + 0x50))(DAT_004a5efc,hWnd,8);
    }
  }
  DestroyWindow(hWnd);
  return 0;
}


