/*
 * Function: FUN_00425980
 * Entry:    00425980
 * Warning:  Decompiled pseudocode, not original source.
 */


void FUN_00425980(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 8);
  param_1 = param_1 + 0xc;
joined_r0x00425999:
  if (iVar5 == 0) {
switchD_004259d4_caseD_1:
    return;
  }
  puVar2 = *(ushort **)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14);
  iVar5 = iVar5 + -1;
  param_1 = param_1 + 0x1c;
joined_r0x004259b8:
  if (iVar8 != 0) {
    switch(*(undefined1 *)((int)puVar2 + 3)) {
    case 0:
    case 4:
      puVar2 = puVar2 + 8;
      break;
    default:
      goto switchD_004259d4_caseD_1;
    case 8:
    case 0xc:
      puVar2 = puVar2 + 0x1c;
      break;
    case 0x10:
      puVar2 = puVar2 + 10;
      break;
    case 0x14:
      iVar8 = iVar8 - (uint)*puVar2;
      puVar2 = puVar2 + (uint)*puVar2 * 8;
      goto joined_r0x004259b8;
    case 0x18:
      iVar8 = iVar8 - (uint)*puVar2;
      puVar2 = puVar2 + (uint)*puVar2 * 10;
      goto joined_r0x004259b8;
    case 0x1c:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425a8e:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425a8e;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425a8e;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425a8e;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425a8e;
          }
        }
        puVar2 = puVar2 + 0xc;
      }
      goto joined_r0x004259b8;
    case 0x20:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425b52:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425b52;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425b52;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425b52;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425b52;
          }
        }
        puVar2 = puVar2 + 0xe;
      }
      goto joined_r0x004259b8;
    case 0x24:
      iVar8 = iVar8 - (uint)*puVar2;
      puVar2 = puVar2 + (uint)*puVar2 * 10;
      goto joined_r0x004259b8;
    case 0x28:
    case 0x48:
      iVar8 = iVar8 - (uint)*puVar2;
      puVar2 = puVar2 + (uint)*puVar2 * 0xc;
      goto joined_r0x004259b8;
    case 0x2c:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425c16:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425c16;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425c16;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425c16;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425c16;
          }
        }
        puVar2 = puVar2 + 0x10;
      }
      goto joined_r0x004259b8;
    case 0x30:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00426046:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00426046;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00426046;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00426046;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00426046;
          }
        }
        puVar2 = puVar2 + 0x12;
      }
      goto joined_r0x004259b8;
    case 0x34:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425cda:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425cda;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425cda;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425cda;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425cda;
          }
        }
        puVar2 = puVar2 + 0xc;
      }
      goto joined_r0x004259b8;
    case 0x38:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425e90:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425e90;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425e90;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425e90;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425e90;
          }
        }
        puVar2 = puVar2 + 0xe;
      }
      goto joined_r0x004259b8;
    case 0x3c:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425dcc:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425dcc;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425dcc;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425dcc;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425dcc;
          }
        }
        puVar2 = puVar2 + 0x10;
      }
      goto joined_r0x004259b8;
    case 0x40:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((puVar2[1] & 8) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = ((byte)puVar2[5] & 0x60) >> 5;
        }
        uVar3 = (uint)puVar2[3];
        if (uVar6 == 0) {
          puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
          uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00425f82:
          *puVar4 = uVar6;
        }
        else {
          if (uVar6 == 1) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
            goto LAB_00425f82;
          }
          if (uVar6 == 2) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
            goto LAB_00425f82;
          }
          if (uVar6 == 3) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
            goto LAB_00425f82;
          }
          if (uVar6 == 4) {
            puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
            uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
            goto LAB_00425f82;
          }
        }
        puVar2 = puVar2 + 0x14;
      }
      goto joined_r0x004259b8;
    case 0x44:
      puVar2 = puVar2 + (uint)*puVar2 * 6 + 2;
      break;
    case 0x4a:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar1 = puVar2 + 2;
        puVar2 = puVar2 + 0xe;
        (&DAT_0053eaa4)[(uint)*puVar1 * 0xc] = 0x10;
      }
      goto joined_r0x004259b8;
    case 0x4c:
      iVar8 = iVar8 - (uint)*puVar2;
      puVar2 = puVar2 + (uint)*puVar2 * 0xe;
      goto joined_r0x004259b8;
    case 0x4e:
      uVar7 = (uint)*puVar2;
      iVar8 = iVar8 - uVar7;
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar1 = puVar2 + 2;
        puVar2 = puVar2 + 0x10;
        (&DAT_0053eaa4)[(uint)*puVar1 * 0xc] = 0x10;
      }
      goto joined_r0x004259b8;
    case 100:
      goto switchD_004259d4_caseD_64;
    }
    iVar8 = iVar8 + -1;
    goto joined_r0x004259b8;
  }
  goto joined_r0x00425999;
switchD_004259d4_caseD_64:
  for (uVar7 = (uint)*puVar2; uVar7 != 0; uVar7 = uVar7 - 1) {
    if ((puVar2[1] & 8) == 0) {
      uVar6 = 4;
    }
    else {
      uVar6 = ((byte)puVar2[3] & 0x60) >> 5;
    }
    uVar3 = (uint)puVar2[5];
    if (uVar6 == 0) {
      puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
      uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 1;
LAB_00426108:
      *puVar4 = uVar6;
    }
    else {
      if (uVar6 == 1) {
        puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
        uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 2;
        goto LAB_00426108;
      }
      if (uVar6 == 2) {
        puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
        uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 4;
        goto LAB_00426108;
      }
      if (uVar6 == 3) {
        puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
        uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 8;
        goto LAB_00426108;
      }
      if (uVar6 == 4) {
        puVar4 = &DAT_0053eaa4 + uVar3 * 0xc;
        uVar6 = (&DAT_0053eaa4)[uVar3 * 0xc] | 0x10;
        goto LAB_00426108;
      }
    }
    puVar2 = puVar2 + 8;
    iVar8 = iVar8 + -1;
  }
  goto joined_r0x004259b8;
}


