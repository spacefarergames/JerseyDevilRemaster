/*
 * Function: FUN_0044a030
 * Entry:    0044a030
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0044a030(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  bVar1 = false;
  iVar5 = *param_1;
  if (-1 < iVar5) {
    iVar3 = iVar5 % 0x7861f80;
    iVar5 = (iVar5 / 0x7861f80) * 4;
    _DAT_004a638c = iVar5 + 0x46;
    iVar4 = iVar3;
    if (0x1e1337f < iVar3) {
      iVar4 = iVar3 + -0x1e13380;
      _DAT_004a638c = iVar5 + 0x47;
      if (0x1e1337f < iVar4) {
        iVar4 = iVar3 + -0x3c26700;
        _DAT_004a638c = iVar5 + 0x48;
        if (iVar4 < 0x1e28500) {
          bVar1 = true;
        }
        else {
          _DAT_004a638c = iVar5 + 0x49;
          iVar4 = iVar3 + -0x5a4ec00;
        }
      }
    }
    puVar6 = (undefined4 *)&DAT_004a5440;
    _DAT_004a6394 = iVar4 / 0x15180;
    if (!bVar1) {
      puVar6 = &DAT_004a5478;
    }
    iVar3 = 1;
    iVar5 = puVar6[1];
    puVar2 = puVar6;
    while (iVar5 < _DAT_004a6394) {
      iVar3 = iVar3 + 1;
      iVar5 = puVar2[2];
      puVar2 = puVar2 + 1;
    }
    _DAT_004a6388 = iVar3 + -1;
    _DAT_004a6384 = _DAT_004a6394 - puVar6[iVar3 + -1];
    _DAT_004a6398 = 0;
    _DAT_004a6390 = (*param_1 / 0x15180 + 4) % 7;
    _DAT_004a6380 = (iVar4 % 0x15180) / 0xe10;
    iVar5 = (iVar4 % 0x15180) % 0xe10;
    _DAT_004a637c = iVar5 / 0x3c;
    _DAT_004a6378 = iVar5 % 0x3c;
    return &DAT_004a6378;
  }
  return (undefined *)0x0;
}


