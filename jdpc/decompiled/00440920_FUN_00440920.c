/*
 * Function: FUN_00440920
 * Entry:    00440920
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00440920(void)

{
  DAT_004d2384 = FUN_00440710(DAT_004cd998,0x1a8,DAT_004cdfc0 * 0x1a8);
  if (DAT_004d2384 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  DAT_004d18fc = FUN_00440810(DAT_004d18fc,DAT_004d2384);
  *(undefined2 *)(DAT_004d2384 + 0x18) = 0x26;
  *(undefined2 *)(DAT_004d2384 + 0x24) = 0;
  *(undefined1 *)(DAT_004d2384 + 0x26) = 7;
  *(uint *)(DAT_004d2384 + 4) = *(uint *)(DAT_004d2384 + 4) | 2;
  return;
}


