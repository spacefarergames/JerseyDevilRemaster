/*
 * Function: FUN_0041f990
 * Entry:    0041f990
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_0041f990(int *param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  PTR_DAT_0045f810 = (undefined *)param_1;
  if (*param_1 != 0) {
    DAT_00571908 = (&DAT_0053ea80)[*param_1 * 0xc];
    DAT_0055e1b8 = *(undefined **)(&DAT_0053eaac + *param_1 * 0x30);
    DAT_0055e1c8 = *(undefined4 *)(&DAT_0053eaac + *param_1 * 0x30);
    if (DAT_0055e1b8 == (undefined *)0x0) {
      PTR_DAT_0045f810 = DAT_0055e1b8;
      return;
    }
    DAT_005f1cc4 = (int)(char)(&DAT_0053ea90)[*param_1 * 0x30];
    fVar1 = (float)((&DAT_0053ea84)[*param_1 * 0xc] + -1) * (float)param_1[10];
    param_1[10] = (int)fVar1;
    param_1[0x10] = (int)fVar1;
    fVar1 = (float)((&DAT_0053ea84)[*param_1 * 0xc] + -1) * (float)param_1[0x16];
    param_1[0x16] = (int)fVar1;
    param_1[0x1c] = (int)fVar1;
    fVar1 = (float)(DAT_00571908 + -1) * (float)param_1[9];
    param_1[9] = (int)fVar1;
    param_1[0x15] = (int)fVar1;
    fVar1 = (float)(DAT_00571908 + -1) * (float)param_1[0xf];
    param_1[0xf] = (int)fVar1;
    param_1[0x1b] = (int)fVar1;
    if ((*(byte *)(param_1 + 1) & 2) != 0) {
      if ((char)param_1[3] < '\x04') {
        DAT_00642504 = (&DAT_005f20e0)[(char)param_1[3]];
        uVar2 = param_1[2] | 4;
      }
      else {
        uVar2 = param_1[2] & 0xfffffffb;
      }
      param_1[2] = uVar2;
    }
  }
  if ((DAT_004d13b6 != '\0') && (8 < DAT_0045f800)) {
    param_1[2] = param_1[2] | 1;
    param_1[0x1f] = DAT_0045c06c;
    param_1[0x1e] = DAT_0045c06c;
    param_1[0x1d] = DAT_0045c06c;
    param_1[0x18] = DAT_0045c06c;
    param_1[0x19] = DAT_0045c06c;
    param_1[0x17] = DAT_0045c06c;
    param_1[0x13] = DAT_0045c06c;
    param_1[0x12] = DAT_0045c06c;
    param_1[0x11] = DAT_0045c06c;
    param_1[0xc] = DAT_0045c06c;
    param_1[0xd] = DAT_0045c06c;
    param_1[0xb] = DAT_0045c06c;
    param_1[6] = DAT_0045c06c;
    param_1[5] = DAT_0045c06c;
    param_1[4] = DAT_0045c06c;
  }
  FUN_0041fbd0(param_1);
  if (PTR_DAT_0045f810 != (undefined *)0x0) {
    iVar3 = FUN_00403620(param_2);
    if (iVar3 < 1) {
      PTR_DAT_0045f810 = (undefined *)0x0;
      return;
    }
    FUN_0041fb80(param_1);
  }
  return;
}


