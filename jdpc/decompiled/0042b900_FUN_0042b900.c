/*
 * Function: FUN_0042b900
 * Entry:    0042b900
 * Warning:  Decompiled pseudocode, not original source.
 */


bool FUN_0042b900(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_BX;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined2 uStack_c;
  
  uVar1 = CONCAT22(unaff_BX,(ushort)(in_NT & 1) * 0x4000 | (ushort)(in_OF & 1) * 0x800 |
                            (ushort)(in_IF & 1) * 0x200 | (ushort)(in_TF & 1) * 0x100 |
                            (ushort)(in_SF & 1) * 0x80 | (ushort)(in_ZF & 1) * 0x40 |
                            (ushort)(in_AF & 1) * 0x10 | (ushort)(in_PF & 1) * 4 |
                            (ushort)(in_CF & 1));
  uVar2 = uVar1 ^ 0x200000;
  uStack_c = (undefined2)(uVar2 >> 0x10);
  return CONCAT22(uStack_c,(ushort)((uVar2 & 0x4000) != 0) * 0x4000 |
                           (ushort)((uVar2 & 0x800) != 0) * 0x800 |
                           (ushort)((uVar2 & 0x200) != 0) * 0x200 |
                           (ushort)((uVar2 & 0x100) != 0) * 0x100 |
                           (ushort)((uVar2 & 0x80) != 0) * 0x80 |
                           (ushort)((uVar2 & 0x40) != 0) * 0x40 |
                           (ushort)((uVar2 & 0x10) != 0) * 0x10 | (ushort)((uVar2 & 4) != 0) * 4 |
                           (ushort)((uVar2 & 1) != 0)) != uVar1;
}


