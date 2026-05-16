/*
 * Function: FUN_00412010
 * Entry:    00412010
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00412010(void)

{
  int iVar1;
  undefined *puVar2;
  
  if (DAT_004a5efc != (int *)0x0) {
    (**(code **)(*DAT_004a5efc + 8))(DAT_004a5efc);
    DAT_004a5efc = (int *)0x0;
  }
  if ((DAT_0053e844 < 0) || (2 < DAT_0053e844)) {
    puVar2 = &DAT_0080ffb0 + DAT_0053e844 * 0x850;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  iVar1 = DirectDrawCreate(puVar2,&DAT_004a5efc,0);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_00405550(s_file___s_l___d__>msg__DirectDraw_0045f734,s_D__Projets_Jdpc_src_Pcrogl_c_0045f714,
               0x6a4);
  return 0;
}


