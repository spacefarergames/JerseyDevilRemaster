/*
 * Function: FUN_0040ab80
 * Entry:    0040ab80
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Removing unreachable block (ram,0x0040ace0) */
/* WARNING: Removing unreachable block (ram,0x0040ace8) */

byte FUN_0040ab80(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_164;
  tagMSG local_15c;
  CHAR local_140;
  undefined4 local_13f;
  CHAR local_f0;
  undefined4 local_ef;
  CHAR local_a0;
  undefined4 local_9f;
  CHAR local_50;
  undefined4 local_4f;
  
  uVar3 = DAT_0045bbd4;
  local_a0 = DAT_004a5e44;
  local_50 = DAT_004a5e44;
  puVar6 = &local_9f;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_140 = DAT_004a5e44;
  puVar6 = &local_4f;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_f0 = DAT_004a5e44;
  puVar6 = &local_13f;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  puVar6 = &local_ef;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  bVar2 = false;
  bVar1 = false;
  local_164 = 0;
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x28),&local_a0,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0xdc),&local_50,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x7c),&local_140,0x50);
  LoadStringA(DAT_004a6108,*(UINT *)(PTR_DAT_004537c0 + 0x78),&local_f0,0x50);
  DAT_0045bbd4 = 0x3f800000;
  while( true ) {
    FUN_00440cc0();
    iVar5 = PeekMessageA(&local_15c,(HWND)0x0,0,0,1);
    while (iVar5 != 0) {
      if (local_15c.message == 0x12) {
        DAT_004537e8 = 0;
      }
      TranslateMessage(&local_15c);
      DispatchMessageA(&local_15c);
      iVar5 = PeekMessageA(&local_15c,(HWND)0x0,0,0,1);
    }
    bVar4 = ~DAT_004d1392;
    if (((bVar4 & 8) != 0) && (local_164 != 0)) break;
    if (bVar1) {
      if ((bVar4 & 0x40) == 0) {
        FUN_00420740(0);
        local_164 = local_164 + 1;
        bVar1 = false;
      }
    }
    else if ((bVar4 & 0x40) != 0) {
      bVar1 = true;
    }
    if (bVar2) {
      if ((~DAT_004d1392 & 0x10) == 0) {
        FUN_00420740(0);
        local_164 = local_164 + 1;
        bVar2 = false;
      }
    }
    else if ((~DAT_004d1392 & 0x10) != 0) {
      bVar2 = true;
    }
    (*DAT_004a5ea8)();
    FUN_0040e1c0();
    (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    FUN_0040a3f0(0x140,0xf0,0xfffffed4,&local_a0);
    FUN_0040a3f0(0x140,0x10e,0xfffffed4,&local_50);
    if ((local_164 & 1) == 0) {
      (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
      FUN_0040a3f0(0x140,300,0xfffffed4,&local_140);
      (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    }
    else {
      (*DAT_004a5eac)(0x3f800000,0x3f800000,0x3f800000);
      FUN_0040a3f0(0x140,300,0xfffffed4,&local_140);
      (*DAT_004a5eac)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
    }
    FUN_0040a3f0(0x140,0x14a,0xfffffed4,&local_f0);
    InvalidateRect(DAT_004a610c,(RECT *)0x0,0);
    UpdateWindow(DAT_004a610c);
  }
  FUN_00420740(1);
  DAT_0045bbd4 = uVar3;
  return (byte)local_164 & 1;
}


