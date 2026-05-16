/*
 * Function: FUN_00448470
 * Entry:    00448470
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 * FUN_00448470(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = *param_2;
  bVar3 = false;
  bVar4 = false;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar7 = DAT_004a6618 | 1;
      goto LAB_004484ad;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar7 = DAT_004a6618 | 2;
LAB_004484ad:
  param_2 = param_2 + 1;
  bVar2 = true;
  cVar1 = *param_2;
  do {
    if ((cVar1 == '\0') || (!bVar2)) {
      iVar6 = FUN_0044d380(param_1,uVar5,param_3,0x1a4);
      if (-1 < iVar6) {
        DAT_004a6288 = DAT_004a6288 + 1;
        param_4[3] = uVar7;
        param_4[1] = 0;
        *param_4 = 0;
        param_4[2] = 0;
        param_4[7] = 0;
        param_4[4] = iVar6;
        return param_4;
      }
      return (undefined4 *)0x0;
    }
    switch(cVar1) {
    case '+':
      if ((uVar5 & 2) != 0) break;
      uVar5 = uVar5 & 0xfffffffe | 2;
      uVar7 = uVar7 & 0xfffffffc | 0x80;
      goto LAB_0044855e;
    case 'D':
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_0044855e;
      }
      break;
    case 'R':
      if (!bVar4) {
        bVar4 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_0044855e;
      }
      break;
    case 'S':
      if (!bVar4) {
        bVar4 = true;
        uVar5 = uVar5 | 0x20;
        goto LAB_0044855e;
      }
      break;
    case 'T':
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_0044855e;
      }
      break;
    case 'b':
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_0044855e;
      }
      break;
    case 'c':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_0044855e;
      }
      break;
    case 'n':
      if (!bVar3) {
        bVar3 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_0044855e;
      }
      break;
    case 't':
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x4000;
        goto LAB_0044855e;
      }
    }
    bVar2 = false;
LAB_0044855e:
    param_2 = param_2 + 1;
    cVar1 = *param_2;
  } while( true );
}


