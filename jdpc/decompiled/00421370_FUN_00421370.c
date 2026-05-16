/*
 * Function: FUN_00421370
 * Entry:    00421370
 * Warning:  Decompiled pseudocode, not original source.
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00421370(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  int iStack_94;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [108];
  
  DAT_0055dfa0 = 0;
  if (DAT_004a0844 != 0) {
    if (DAT_004a6084 == '\0') {
      if (DAT_004a607c != (int *)0x0) {
        iStack_94 = 0x4213a6;
        FUN_00421510();
      }
      iStack_94 = 0;
      ppiStack_98 = &DAT_004a607c;
      piStack_9c = (int *)0x0;
      puVar2 = &DAT_0055dd00;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puStack_a0 = (undefined1 *)0x4213c0;
      iStack_94 = DirectSoundCreate();
      if (iStack_94 == 0) {
        iStack_94 = 2;
        ppiStack_98 = (int **)DAT_004a610c;
        piStack_9c = DAT_004a607c;
        puStack_a0 = (undefined1 *)0x4213e0;
        (**(code **)(*DAT_004a607c + 0x18))();
        puStack_a0 = auStack_6c;
        FUN_004214e0();
        uStack_74 = 0;
        uStack_7c = 1;
        puStack_a0 = (undefined1 *)0x0;
        uStack_80 = 0x14;
        uStack_70 = 0;
        uStack_78 = 0;
        iVar1 = (**(code **)(*DAT_004a607c + 0xc))(DAT_004a607c,&uStack_80);
        if (iVar1 == 0) {
          (**(code **)(iStack_94 + 0x38))(&iStack_94,&puStack_a0);
        }
        else {
          FUN_00421bd0(iVar1);
        }
        FUN_00401000(&DAT_0055df20,DAT_004a607c,&DAT_004513c8,&DAT_004513e0,&DAT_004513b8,0);
        DAT_004a6084 = '\x01';
        return;
      }
      ppiStack_98 = (int **)0x4214c5;
      FUN_00421bd0();
      return;
    }
    iStack_94 = 0x4214d6;
    FUN_004215a0();
  }
  return;
}


