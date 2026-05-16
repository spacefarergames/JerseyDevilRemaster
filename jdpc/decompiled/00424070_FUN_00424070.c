/*
 * Function: FUN_00424070
 * Entry:    00424070
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00424070(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 < *(float *)((int)&DAT_0045c878 + iVar1)) {
      *(float *)((int)&DAT_0045c878 + iVar1) = param_1;
    }
    if (param_2 < *(float *)((int)&DAT_0045cc78 + iVar1)) {
      *(float *)((int)&DAT_0045cc78 + iVar1) = param_2;
    }
    if (*(float *)((int)&DAT_0045c878 + iVar1) < param_3) {
      *(float *)((int)&DAT_0045c878 + iVar1) = param_3;
    }
    if (*(float *)((int)&DAT_0045cc78 + iVar1) < param_4) {
      *(float *)((int)&DAT_0045cc78 + iVar1) = param_4;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x400);
  return;
}


