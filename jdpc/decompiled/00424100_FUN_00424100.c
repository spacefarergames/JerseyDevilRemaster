/*
 * Function: FUN_00424100
 * Entry:    00424100
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00424100(void)

{
  char *pcVar1;
  char *_Str;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = 9;
  if ((DAT_004a09a4 & 2) == 0) {
    if ((DAT_004a09a4 == 0) || (DAT_004a09a4 == 1)) {
      iVar3 = 8;
    }
  }
  else {
    DAT_004a60e4 = 0;
    DAT_004a60e0 = 0;
    DAT_004a60f0 = 0;
    DAT_004a0940 = 1;
    DAT_004a0944 = 1;
    DAT_004a60e8 = 0;
    DAT_004a60ec = 0;
    DAT_004a60e4 = FUN_004240f0();
    (*DAT_008102f4)(0xde1,0x2802,0x46240400);
    (*DAT_008102f4)(0xde1,0x2803,0x46240400);
    (*DAT_008102f4)(0xde1,0x2801,0x46180400);
    (*DAT_008102f4)(0xde1,0x2800,0x46180400);
    pcVar1 = (char *)(*DAT_00810338)(0x1f00);
    _Str = (char *)(*DAT_00810338)(0x1f01);
    if ((pcVar1 != (char *)0x0) && (_Str != (char *)0x0)) {
      pcVar2 = _strstr(pcVar1,&DAT_004a0998);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 0;
      }
      pcVar2 = _strstr(_Str,&DAT_004a0998);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 0;
      }
      pcVar2 = _strstr(pcVar1,&DAT_004a0994);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 2;
      }
      pcVar2 = _strstr(_Str,&DAT_004a0994);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 2;
      }
      pcVar2 = _strstr(pcVar1,s_RENDITION_004a0988);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 1;
      }
      pcVar2 = _strstr(_Str,s_RENDITION_004a0988);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 1;
      }
      pcVar2 = _strstr(pcVar1,(char *)&PTR_DAT_004a0984);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 5;
      }
      pcVar2 = _strstr(_Str,s_RAGE_PRO_004a0978);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 5;
      }
      pcVar2 = _strstr(pcVar1,s_NVIDIA_004a0970);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 4;
      }
      pcVar2 = _strstr(_Str,&DAT_004a0968);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 4;
      }
      pcVar1 = _strstr(pcVar1,s_Real3D_004a0960);
      if (pcVar1 != (char *)0x0) {
        iVar3 = 7;
      }
      pcVar1 = _strstr(_Str,s_Direct3D_004a0954);
      if (pcVar1 != (char *)0x0) {
        iVar3 = 6;
      }
    }
  }
  if ((DAT_0053e8a0._2_1_ == '\b') && (DAT_004a60e4 != 0)) {
    DAT_004a60e0 = 1;
  }
  if (DAT_004a0920 != 9) {
    iVar3 = DAT_004a0920;
  }
  switch(iVar3) {
  case 0:
    DAT_004a0934 = 0x100;
    DAT_004a60ec = 1;
    goto LAB_00424413;
  case 1:
  case 2:
    uVar7 = 0x3c909071;
    DAT_004a0934 = 0x200;
    DAT_004a60ec = 0;
    DAT_004a60e0 = 0;
    DAT_004a0940 = 0;
    uVar5 = 0x3f7b7b7c;
    break;
  default:
    DAT_004a0934 = 0x200;
    DAT_004a60ec = 0;
LAB_00424413:
    DAT_004a60e0 = 0;
LAB_00424425:
    DAT_004a0940 = 0;
    uVar7 = 0;
    uVar5 = 0x3f800000;
    break;
  case 5:
    uVar7 = 0x3c909071;
    uVar6 = 0x3c909071;
    uVar5 = 0x3f7b7b7c;
    DAT_004a0934 = 0x200;
    DAT_004a60ec = 0;
    DAT_004a60e0 = 0;
    DAT_004a0940 = 0;
    uVar4 = 0x3f7b7b7c;
    goto LAB_00424431;
  case 6:
    uVar7 = 0x3c909071;
    DAT_004a0934 = 0x200;
    DAT_004a60ec = 0;
    DAT_004a60e0 = 0;
    DAT_004a0940 = 1;
    uVar5 = 0x3f7b7b7c;
    break;
  case 8:
    DAT_004a0934 = 0x200;
    DAT_004a60ec = 0;
    if (DAT_0053e844 == 0) {
      DAT_004a60e4 = 1;
      DAT_004a60e0 = 1;
      DAT_004a60f0 = 1;
    }
    DAT_004a0944 = 1;
    goto LAB_00424425;
  }
  uVar6 = 0;
  uVar4 = 0x3f800000;
LAB_00424431:
  DAT_004a60e8 = 0;
  FUN_00424070(uVar4,uVar5,uVar6,uVar7);
  if ((((-1.0 < DAT_004a0924) && (-1.0 < DAT_004a092c)) && (-1.0 < DAT_004a0928)) &&
     (-1.0 < DAT_004a0930)) {
    FUN_00424070(DAT_004a0924,DAT_004a092c,DAT_004a0928,DAT_004a0930);
  }
  if (iVar3 != 8) {
    FUN_00424070(0x3f7d70a4,0x3f7d70a4,0x3c23d70a,0x3c23d70a);
  }
  if (DAT_004a60e4 == 0) {
    DAT_004a60e0 = 0;
  }
  if (DAT_004a0940 != 0) {
    _DAT_0045c058 = 0x3f000000;
    _DAT_0045c05c = 0x3f000000;
    _DAT_0045c060 = 0x3f000000;
    _DAT_0045c064 = 0x3f000000;
    DAT_004a093c = 0x300;
    DAT_004a0938 = 1;
    return 1;
  }
  DAT_004a093c = 0x303;
  DAT_004a0938 = 0x302;
  return 1;
}


