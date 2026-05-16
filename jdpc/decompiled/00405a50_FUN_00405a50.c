/*
 * Function: FUN_00405a50
 * Entry:    00405a50
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_00405a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  undefined2 extraout_var;
  tagMSG local_1c;
  
  iVar1 = FUN_004057e0();
  if (iVar1 == 0) {
    return 0;
  }
  DAT_00813b4c = GetSystemMetrics(0);
  DAT_00813b48 = GetSystemMetrics(1);
  FUN_0040a9c0();
  FUN_0040a8f0();
  switch(DAT_0053e848) {
  case 0:
    PTR_DAT_004537c0 = &DAT_00453280;
    break;
  case 1:
    PTR_DAT_004537c0 = &DAT_00453360;
    break;
  case 2:
    PTR_DAT_004537c0 = &DAT_00453440;
    break;
  case 3:
    PTR_DAT_004537c0 = &DAT_00453520;
    break;
  case 4:
    PTR_DAT_004537c0 = &DAT_00453600;
    break;
  case 5:
    PTR_DAT_004537c0 = &DAT_004536e0;
  }
  iVar1 = FUN_00405920();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00405820();
  iVar1 = 0;
  if (iVar2 == 0) {
    do {
      iVar2 = FUN_004055c0((&PTR_s_Please_insert_the_Jersey_Devil_C_00453808)[DAT_0053e848]);
      if (iVar2 == 2) break;
      iVar1 = FUN_00405820();
    } while (iVar1 == 0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_004086f0();
  DAT_004a6110 = 0;
  FUN_0042bb80();
  FUN_00409000();
  FUN_00408570();
  DAT_004a6108 = param_1;
  pHVar3 = (HWND)FUN_00412090(param_1,param_4);
  if (pHVar3 == (HWND)0x0) {
    if (DAT_0053e858 != 0) {
      DAT_0053e858 = 0;
      pHVar3 = (HWND)FUN_00412090(DAT_004a6108,5);
    }
    if (pHVar3 == (HWND)0x0) {
      DAT_0053e844 = (uint)(299 < DAT_004a6200);
      pHVar3 = (HWND)FUN_00412090(DAT_004a6108,5);
      if (pHVar3 == (HWND)0x0) {
LAB_00405f3a:
        DAT_004537e8 = 0;
        if (DAT_004a6120 == 1) {
          FUN_00408d10(&DAT_008134a0);
        }
        FUN_00407040();
        FUN_00411f80(&DAT_004a610c);
        FUN_00411ff0();
        return local_1c.wParam;
      }
    }
  }
  DAT_004a610c = pHVar3;
  FUN_00406430();
LAB_00405bdc:
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    if (local_1c.message == 0x12) goto LAB_00405f3a;
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  if ((DAT_004a09a4 == 1) || (DAT_004a09a4 == 0)) {
    (*DAT_0055e1b0)(&DAT_0053e8e0);
  }
  FUN_00405ff0();
  if (DAT_004537e8 == 0x11) {
    FUN_004202b0();
    FUN_00421b10();
    if (DAT_004537e8 == 0x11) {
      DAT_0053e8d8 = 0x11;
      do {
        if (DAT_0053e858 == 0) {
          pHVar3 = GetForegroundWindow();
          if (pHVar3 == DAT_004a610c) {
            iVar1 = FUN_00406ff0();
            goto joined_r0x00405c8f;
          }
        }
        else {
          iVar1 = FUN_00406ff0();
joined_r0x00405c8f:
          if (iVar1 == 0) {
            DAT_004537e8 = 0;
            break;
          }
        }
        iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
        while (iVar1 != 0) {
          TranslateMessage(&local_1c);
          DispatchMessageA(&local_1c);
          iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
        }
      } while (DAT_004537e8 == 0x11);
    }
  }
  if ((DAT_004a09a4 == 1) || (DAT_004a09a4 == 0)) {
    (*DAT_005618e0)();
  }
  thunk_FUN_00421a40();
  FUN_00421a60();
  switch(DAT_004537e8) {
  case 0:
    PostMessageA(DAT_004a610c,0x400,1,0);
    PostQuitMessage(0);
    goto LAB_00405bdc;
  case 1:
    iVar1 = FUN_00411b60();
    if (iVar1 == 0) goto LAB_00405f3a;
    DAT_004537e8 = DAT_0053e8d8;
    goto LAB_00405bdc;
  case 2:
    DAT_004537e8 = 4;
    goto LAB_00405bdc;
  case 3:
    break;
  case 4:
    DAT_0053e8d8 = DAT_004537e8;
    if (*(int *)(DAT_0053ea20 + 0x10004) == 3) {
      DAT_004537e8 = FUN_00409730(0);
      FUN_0040a600();
    }
    else {
      DAT_004537e8 = FUN_00409730(1);
      if (DAT_004537e8 == 0x13) {
        DAT_004d2388 = 1;
        *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
        DAT_004537e8 = 0x11;
      }
      FUN_0040a600();
    }
    goto LAB_00405bdc;
  case 5:
    DAT_004537e8 = FUN_0040e600();
    goto LAB_00405bdc;
  case 6:
    DAT_004537e8 = FUN_0040bec0();
    goto LAB_00405bdc;
  case 7:
    DAT_004537e8 = FUN_0040c460();
    goto LAB_00405bdc;
  case 8:
    DAT_0053e8d8 = DAT_004537e8;
    DAT_004537e8 = FUN_00409240();
    goto LAB_00405bdc;
  case 9:
    FUN_0040a140();
    DAT_004537e8 = 0x11;
    goto LAB_00405bdc;
  case 10:
    FUN_0040b290(0);
    FUN_004202b0();
    goto LAB_00405bdc;
  case 0xb:
    FUN_0040b290(1);
    DAT_004537e8 = 0x11;
    goto LAB_00405bdc;
  case 0xc:
    *(undefined1 *)(DAT_0053ea20 + 0x10044) = 0x50;
    *(undefined1 *)(DAT_0053ea20 + 0x10043) = 3;
    DAT_004537e8 = 3;
    goto LAB_00405bdc;
  case 0xd:
    thunk_FUN_00421a40();
    DAT_004537e8 = FUN_00409d10();
    goto LAB_00405bdc;
  case 0xe:
    DAT_004537e8 = FUN_0040c8d0();
    goto LAB_00405bdc;
  case 0xf:
    DAT_004537e8 = FUN_0040d960();
    goto LAB_00405bdc;
  default:
    DAT_004537e8 = 0x11;
    goto LAB_00405bdc;
  case 0x12:
    DAT_004537e8 = FUN_0040d210();
    goto LAB_00405bdc;
  case 0x13:
    thunk_FUN_00421a40();
    FUN_00421a60();
    iVar1 = FUN_0040aef0();
    DAT_004537e8 = (-(uint)(iVar1 != 0) & 0xffffffef) + 0x11;
    goto LAB_00405bdc;
  }
  DAT_004537e8 = 0x11;
  *(undefined4 *)(DAT_0053ea20 + 0x10004) = 3;
  DAT_004d18e6 = *(undefined2 *)(DAT_0053ea20 + 0x10004);
  FUN_0042dcb0(*(undefined4 *)(DAT_0053ea20 + 0x10004));
  FUN_0042dd20(CONCAT22(extraout_var,*(undefined2 *)(DAT_0053ea20 + 0x10004)));
  if (DAT_004537e8 == 0) goto LAB_00405f3a;
  goto LAB_00405bdc;
}


