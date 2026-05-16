/*
 * Function: FUN_0044ecf0
 * Entry:    0044ecf0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0044ecf0(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_58 [40];
  int local_30;
  int local_2c;
  uint local_20;
  
  param_3 = (ushort *)(uint)*param_3;
  switch(*param_2) {
  case 1:
  case 5:
    uVar2 = 8;
    break;
  case 2:
    uVar2 = 4;
    break;
  case 3:
    uVar2 = 0x11;
    break;
  case 4:
    uVar2 = 0x12;
    break;
  default:
    goto switchD_0044ed0f_caseD_6;
  case 7:
    *param_2 = 1;
    goto switchD_0044ed0f_caseD_6;
  case 8:
    uVar2 = 0x10;
  }
  iVar1 = FUN_0044aa00(uVar2,param_2 + 6,param_3);
  if (iVar1 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_30 = param_2[4];
      local_20 = local_20 & 0xffffffe3 | 3;
      local_2c = param_2[5];
    }
    else {
      local_20 = local_20 & 0xfffffffe;
    }
    FUN_0044a6c0(local_58,&param_3,uVar2,param_1,param_2 + 2,param_2 + 6);
  }
switchD_0044ed0f_caseD_6:
  FUN_0044aeb0(param_3,0xffff);
  iVar1 = 0;
  if ((*param_2 != 8) && (DAT_004a54ac == 0)) {
    iVar1 = FUN_004240f0(param_2);
  }
  if (iVar1 == 0) {
    FUN_0044ade0(*param_2);
  }
  return;
}


