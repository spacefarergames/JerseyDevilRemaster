/*
 * Function: FUN_004111e0
 * Entry:    004111e0
 * Warning:  Decompiled pseudocode, not original source.
 */


bool FUN_004111e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_6c [23];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  iVar1 = (**(code **)(*DAT_004a5efc + 0x30))(DAT_004a5efc,local_6c);
  if (iVar1 != 0) {
    FUN_00405550(s_file___s_l___d__>msg__GetDisplay_0045f6e8,s_D__Projets_Jdpc_src_Pcrogl_c_0045f714
                 ,0x2eb);
    return false;
  }
  iVar1 = (**(code **)(*DAT_004a5efc + 0x50))(DAT_004a5efc,param_2,0x11);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_004a5efc + 0x54))(DAT_004a5efc,uStack_10,uStack_c,uStack_8);
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_004a5efc + 0x50))(DAT_004a5efc,param_2,8);
  return iVar1 == 0;
}


