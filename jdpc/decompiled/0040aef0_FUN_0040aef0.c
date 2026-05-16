/*
 * Function: FUN_0040aef0
 * Entry:    0040aef0
 * Warning:  Decompiled pseudocode, not original source.
 */


undefined4 FUN_0040aef0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  tagMSG local_15c;
  CHAR local_140;
  undefined4 local_13f;
  CHAR local_f0;
  undefined4 local_ef;
  CHAR local_a0;
  undefined4 local_9f;
  undefined1 local_50 [80];
  
  uVar4 = DAT_0045bbd4;
  local_a0 = DAT_004a5e44;
  local_140 = DAT_004a5e44;
  puVar8 = &local_9f;
  for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_f0 = DAT_004a5e44;
  puVar8 = &local_13f;
  for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  puVar8 = &local_ef;
  for (iVar7 = 0x13; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  bVar3 = false;
  bVar1 = false;
  bVar2 = false;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  uVar6 = FUN_00425900(s____data_TITLEBACK_TIM_0045bd9c);
  FUN_00424d40(uVar6,0x6ce,4);
  FUN_00443fe0(uVar6);
  FUN_00444690(local_50,s____data_TITLE_d_TIM_0045bd88,DAT_0053e848);
  iVar7 = FUN_00425900(local_50);
  if (iVar7 != 0) {
    FUN_00424d40(iVar7,0x6cf,4);
    FUN_00443fe0(iVar7);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x24),&local_a0,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x7c),&local_140,0x50);
    LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x78),&local_f0,0x50);
    DAT_0045bbd4 = 0x3f800000;
    while( true ) {
      FUN_00440cc0();
      iVar7 = PeekMessageA(&local_15c,(HWND)0x0,0,0,1);
      while (iVar7 != 0) {
        if (local_15c.message == 0x12) {
          DAT_004537e8 = 0;
        }
        TranslateMessage(&local_15c);
        DispatchMessageA(&local_15c);
        iVar7 = PeekMessageA(&local_15c,(HWND)0x0,0,0,1);
      }
      bVar5 = ~DAT_004d1392;
      if ((bVar5 & 8) != 0) break;
      if (bVar1) {
        if ((bVar5 & 0x40) == 0) {
          FUN_00420740(0);
          bVar2 = !bVar2;
          bVar1 = false;
        }
      }
      else if ((bVar5 & 0x40) != 0) {
        bVar1 = true;
      }
      if (bVar3) {
        if ((~DAT_004d1392 & 0x10) == 0) {
          FUN_00420740(0);
          bVar2 = !bVar2;
          bVar3 = false;
        }
      }
      else if ((~DAT_004d1392 & 0x10) != 0) {
        bVar3 = true;
      }
      (*DAT_004a5ea8)();
      FUN_0040e1c0();
      (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      FUN_0040a3f0(0x140,0xf0,0xfffffed4,&local_a0);
      if (bVar2) {
        (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000);
        FUN_0040a3f0(0x140,300,0xfffffed4,&local_140);
        (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
      }
      else {
        (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
        FUN_0040a3f0(0x140,300,0xfffffed4,&local_140);
        (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      }
      FUN_0040a3f0(0x140,0x14a,0xfffffed4,&local_f0);
      InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
      UpdateWindow(DAT_004a610c);
    }
    if (bVar2) {
      FUN_00420740(1);
      DAT_0045bbd4 = uVar4;
      return 1;
    }
    FUN_00420740(1);
    DAT_0045bbd4 = uVar4;
    while ((~DAT_004d1392 & 8) != 0) {
      FUN_00440cc0();
    }
  }
  return 0;
}


