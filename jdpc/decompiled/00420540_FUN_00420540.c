/*
 * Function: FUN_00420540
 * Entry:    00420540
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00420540(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_004cdfca == 0x80) {
    FUN_00405550(s_SoundFXBuffer_too_small__Increas_004a0858);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = (int)DAT_004cdfca;
  iVar2 = iVar1 * 0xc;
  *(undefined2 *)(&DAT_004cd9c2 + iVar2) = 0xffff;
  (&DAT_004cd9c0)[iVar1 * 6] = *param_1;
  *(undefined2 *)(&DAT_004cd9c4 + iVar1 * 3) = param_1[2];
  *(undefined2 *)((int)&DAT_004cd9c4 + iVar2 + 2) = param_1[3];
  (&DAT_004cd9c8)[iVar1 * 6] = param_1[4];
  *(undefined2 *)(&DAT_004cd9ca + iVar2) = param_1[5];
  DAT_004cdfca = DAT_004cdfca + 1;
  return;
}


