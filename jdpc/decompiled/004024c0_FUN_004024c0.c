/*
 * Function: FUN_004024c0
 * Entry:    004024c0
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_004024c0(void)

{
  int iVar1;
  BOOL BVar2;
  BYTE local_11c [8];
  uint uStack_114;
  uint local_10f;
  uint local_108;
  uint local_101;
  undefined1 local_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  byte local_f4;
  undefined1 local_f0;
  undefined1 uStack_ef;
  undefined2 uStack_ee;
  undefined1 local_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 local_e4;
  byte bStack_e3;
  undefined1 local_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 local_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 local_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 local_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 local_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 local_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  byte bStack_c2;
  undefined1 uStack_bc;
  undefined1 local_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 local_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  byte local_b1;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 local_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 local_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  byte bStack_a1;
  uint local_8c;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 local_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  byte bStack_77;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    if (local_1c.message == 0x12) {
      DAT_004537e8 = 0;
    }
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  BVar2 = GetKeyboardState(local_11c);
  if (BVar2 == 0) {
    FUN_00405550(s____________keyboard_handler_erro_00453238);
  }
  DAT_00a14c01 = (char)((local_101 & 0xff) >> 7);
  DAT_00a14c3b = (char)((CONCAT12(uStack_aa,CONCAT11(uStack_ab,local_ac)) & 0xff) >> 7);
  DAT_00a14c3c = (char)((CONCAT12(uStack_a9,CONCAT11(uStack_aa,uStack_ab)) & 0xff) >> 7);
  DAT_00a14c3d = (char)((CONCAT12(local_a8,CONCAT11(uStack_a9,uStack_aa)) & 0xff) >> 7);
  DAT_00a14c3e = (char)((CONCAT12(uStack_a7,CONCAT11(local_a8,uStack_a9)) & 0xff) >> 7);
  DAT_00a14c3f = (char)((CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8)) & 0xff) >> 7);
  DAT_00a14c40 = (char)((CONCAT12(uStack_a5,CONCAT11(uStack_a6,uStack_a7)) & 0xff) >> 7);
  DAT_00a14c41 = (char)((CONCAT12(local_a4,CONCAT11(uStack_a5,uStack_a6)) & 0xff) >> 7);
  DAT_00a14c42 = (char)((CONCAT12(uStack_a3,CONCAT11(local_a4,uStack_a5)) & 0xff) >> 7);
  DAT_00a14c43 = (char)((CONCAT12(uStack_a2,CONCAT11(uStack_a3,local_a4)) & 0xff) >> 7);
  DAT_00a14c44 = (char)((CONCAT12(bStack_a1,CONCAT11(uStack_a2,uStack_a3)) & 0xff) >> 7);
  DAT_00a14c57 = (char)((CONCAT11(bStack_a1,uStack_a2) & 0xff) >> 7);
  DAT_00a14c58 = bStack_a1 >> 7;
  DAT_00a14c0b = (char)((CONCAT12(uStack_ea,CONCAT11(uStack_eb,local_ec)) & 0xff) >> 7);
  DAT_00a14c02 = (char)((CONCAT12(uStack_e9,CONCAT11(uStack_ea,uStack_eb)) & 0xff) >> 7);
  DAT_00a14c03 = (char)((CONCAT12(local_e8,CONCAT11(uStack_e9,uStack_ea)) & 0xff) >> 7);
  DAT_00a14c04 = (char)((CONCAT12(uStack_e7,CONCAT11(local_e8,uStack_e9)) & 0xff) >> 7);
  DAT_00a14c05 = (char)((CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_e8)) & 0xff) >> 7);
  DAT_00a14c06 = (char)((CONCAT12(uStack_e5,CONCAT11(uStack_e6,uStack_e7)) & 0xff) >> 7);
  DAT_00a14c07 = (char)((CONCAT12(local_e4,CONCAT11(uStack_e5,uStack_e6)) & 0xff) >> 7);
  DAT_00a14c08 = (char)((CONCAT12(bStack_e3,CONCAT11(local_e4,uStack_e5)) & 0xff) >> 7);
  DAT_00a14c09 = (char)((CONCAT11(bStack_e3,local_e4) & 0xff) >> 7);
  DAT_00a14c0a = bStack_e3 >> 7;
  DAT_00a14c10 = (char)((CONCAT12(uStack_c9,CONCAT11(uStack_ca,local_cb)) & 0xff) >> 7);
  DAT_00a14c11 = (char)((CONCAT12(uStack_c3,CONCAT11(uStack_c4,local_c5)) & 0xff) >> 7);
  DAT_00a14c12 = (char)((CONCAT12(uStack_d5,CONCAT11(uStack_d6,local_d7)) & 0xff) >> 7);
  DAT_00a14c13 = (char)((CONCAT12(uStack_c8,CONCAT11(uStack_c9,uStack_ca)) & 0xff) >> 7);
  DAT_00a14c14 = (char)((CONCAT12(uStack_c6,CONCAT11(uStack_c7,uStack_c8)) & 0xff) >> 7);
  DAT_00a14c15 = (char)((CONCAT11(bStack_c2,uStack_c3) & 0xff) >> 7);
  DAT_00a14c16 = (char)((CONCAT12(local_c5,CONCAT11(uStack_c6,uStack_c7)) & 0xff) >> 7);
  DAT_00a14c17 = (char)((CONCAT12(uStack_d1,CONCAT11(uStack_d2,local_d3)) & 0xff) >> 7);
  DAT_00a14c18 = (char)((CONCAT12(local_cb,CONCAT11(uStack_cc,uStack_cd)) & 0xff) >> 7);
  DAT_00a14c19 = (char)((CONCAT12(uStack_ca,CONCAT11(local_cb,uStack_cc)) & 0xff) >> 7);
  DAT_00a14c1e = (char)((CONCAT12(uStack_d9,CONCAT11(uStack_da,local_db)) & 0xff) >> 7);
  DAT_00a14c1f = (char)((CONCAT12(uStack_c7,CONCAT11(uStack_c8,uStack_c9)) & 0xff) >> 7);
  DAT_00a14c20 = (char)((CONCAT12(uStack_d6,CONCAT11(local_d7,uStack_d8)) & 0xff) >> 7);
  DAT_00a14c21 = (char)((CONCAT12(uStack_d4,CONCAT11(uStack_d5,uStack_d6)) & 0xff) >> 7);
  DAT_00a14c22 = (char)((CONCAT12(local_d3,CONCAT11(uStack_d4,uStack_d5)) & 0xff) >> 7);
  DAT_00a14c23 = (char)((CONCAT12(uStack_d2,CONCAT11(local_d3,uStack_d4)) & 0xff) >> 7);
  DAT_00a14c24 = (char)((CONCAT12(uStack_d0,CONCAT11(uStack_d1,uStack_d2)) & 0xff) >> 7);
  DAT_00a14c25 = (char)((CONCAT12(local_cf,CONCAT11(uStack_d0,uStack_d1)) & 0xff) >> 7);
  DAT_00a14c26 = (char)((CONCAT12(uStack_ce,CONCAT11(local_cf,uStack_d0)) & 0xff) >> 7);
  DAT_00a14c2c = bStack_c2 >> 7;
  DAT_00a14c2d = (char)((CONCAT12(bStack_c2,CONCAT11(uStack_c3,uStack_c4)) & 0xff) >> 7);
  DAT_00a14c2e = (char)((CONCAT12(local_d7,CONCAT11(uStack_d8,uStack_d9)) & 0xff) >> 7);
  DAT_00a14c2f = (char)((CONCAT12(uStack_c4,CONCAT11(local_c5,uStack_c6)) & 0xff) >> 7);
  DAT_00a14c30 = (char)((CONCAT12(uStack_d8,CONCAT11(uStack_d9,uStack_da)) & 0xff) >> 7);
  DAT_00a14c31 = (char)((CONCAT12(uStack_cc,CONCAT11(uStack_cd,uStack_ce)) & 0xff) >> 7);
  DAT_00a14c32 = (char)((CONCAT12(uStack_cd,CONCAT11(uStack_ce,local_cf)) & 0xff) >> 7);
  DAT_00a14c39 = (char)((CONCAT12(uStack_fa,CONCAT11(uStack_fb,local_fc)) & 0xff) >> 7);
  DAT_00a14c47 = (char)((CONCAT12(uStack_b3,CONCAT11(uStack_b4,local_b5)) & 0xff) >> 7);
  DAT_00a14c48 = (char)((CONCAT12(uStack_b2,CONCAT11(uStack_b3,uStack_b4)) & 0xff) >> 7);
  DAT_00a14c49 = (char)((CONCAT12(local_b1,CONCAT11(uStack_b2,uStack_b3)) & 0xff) >> 7);
  DAT_00a14c4b = (char)((CONCAT12(uStack_b6,CONCAT11(uStack_b7,uStack_b8)) & 0xff) >> 7);
  DAT_00a14c4c = (char)((CONCAT12(local_b5,CONCAT11(uStack_b6,uStack_b7)) & 0xff) >> 7);
  DAT_00a14c4d = (char)((CONCAT12(uStack_b4,CONCAT11(local_b5,uStack_b6)) & 0xff) >> 7);
  DAT_00a14c4f = (char)((CONCAT12(uStack_b9,CONCAT11(uStack_ba,local_bb)) & 0xff) >> 7);
  DAT_00a14c50 = (char)((CONCAT12(uStack_b8,CONCAT11(uStack_b9,uStack_ba)) & 0xff) >> 7);
  DAT_00a14c51 = (char)((CONCAT12(uStack_b7,CONCAT11(uStack_b8,uStack_b9)) & 0xff) >> 7);
  DAT_00a14c52 = (char)((CONCAT12(uStack_ba,CONCAT11(local_bb,uStack_bc)) & 0xff) >> 7);
  DAT_00a14c37 = (char)((CONCAT11(local_b1,uStack_b2) & 0xff) >> 7);
  DAT_00a14c0f = (char)((uStack_114 >> 8 & 0xff) >> 7);
  DAT_00a14c1d = (char)((CONCAT12(uStack_78,CONCAT11(uStack_79,local_7a)) & 0xff) >> 7);
  DAT_00a14c2a = (char)((CONCAT12(local_7a,CONCAT11(uStack_7b,uStack_7c)) & 0xff) >> 7);
  DAT_00a14c36 = (char)((CONCAT12(uStack_79,CONCAT11(local_7a,uStack_7b)) & 0xff) >> 7);
  DAT_00a14c38 = (char)((CONCAT11(bStack_77,uStack_78) & 0xff) >> 7);
  DAT_00a14c3a = (char)((local_108 & 0xff) >> 7);
  DAT_00a14c45 = (char)((local_8c & 0xff) >> 7);
  DAT_00a14c46 = (char)((local_8c >> 8 & 0xff) >> 7);
  DAT_00a14c0e = (char)((uStack_114 & 0xff) >> 7);
  DAT_00a14c4a = (char)((CONCAT12(uStack_ad,CONCAT11(uStack_ae,uStack_af)) & 0xff) >> 7);
  DAT_00a14c4e = (char)((CONCAT12(uStack_af,(ushort)local_b1) & 0xff) >> 7);
  DAT_00a14c1c = (undefined1)((local_10f & 0xff) >> 7);
  DAT_00a14c53 = (char)((CONCAT12(local_ac,CONCAT11(uStack_ad,uStack_ae)) & 0xff) >> 7);
  DAT_00a14c9c = DAT_00a14c1c;
  DAT_00a14c9d = (char)((CONCAT12(bStack_77,CONCAT11(uStack_78,uStack_79)) & 0xff) >> 7);
  DAT_00a14cb5 = (char)((CONCAT12(uStack_ab,CONCAT11(local_ac,uStack_ad)) & 0xff) >> 7);
  DAT_00a14cb7 = (char)((CONCAT11(uStack_ef,local_f0) & 0xff) >> 7);
  DAT_00a14cb8 = bStack_77 >> 7;
  DAT_00a14cc7 = (char)((CONCAT12(uStack_f6,CONCAT11(uStack_f7,local_f8)) & 0xff) >> 7);
  DAT_00a14cc8 = (char)((CONCAT12(local_f4,CONCAT11(uStack_f5,uStack_f6)) & 0xff) >> 7);
  DAT_00a14cc9 = (char)((CONCAT12(uStack_f9,CONCAT11(uStack_fa,uStack_fb)) & 0xff) >> 7);
  DAT_00a14ccb = (char)((CONCAT12(uStack_f5,CONCAT11(uStack_f6,uStack_f7)) & 0xff) >> 7);
  DAT_00a14ccd = (char)((CONCAT11(local_f4,uStack_f5) & 0xff) >> 7);
  DAT_00a14ccf = (char)((CONCAT12(uStack_f7,CONCAT11(local_f8,uStack_f9)) & 0xff) >> 7);
  DAT_00a14cd0 = local_f4 >> 7;
  DAT_00a14cd1 = (char)((CONCAT12(local_f8,CONCAT11(uStack_f9,uStack_fa)) & 0xff) >> 7);
  DAT_00a14cd2 = (char)((CONCAT21(uStack_ee,uStack_ef) & 0xff) >> 7);
  DAT_00a14cd3 = (char)((CONCAT12(local_ec,uStack_ee) & 0xff) >> 7);
  return;
}


