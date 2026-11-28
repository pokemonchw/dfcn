/* reference PE:6aea05a1:02734000; list-capitalizer; RVA 0x546b30..0x546d9c */

void load_list_capitalizer(undefined8 *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  bVar3 = true;
  iVar9 = 0;
  if (param_1[2] != 0) {
    lVar8 = 0;
    uVar2 = param_1[3];
    do {
      bVar4 = false;
      puVar6 = param_1;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*param_1;
      }
      if (*(char *)(lVar8 + (longlong)puVar6) == '[') {
        iVar7 = iVar7 + 1;
      }
      else {
        puVar6 = param_1;
        if (0xf < uVar2) {
          puVar6 = (undefined8 *)*param_1;
        }
        if (*(char *)(lVar8 + (longlong)puVar6) == ']') {
          iVar7 = iVar7 + -1;
        }
        else if (iVar7 < 1) {
          if (!bVar3) {
            puVar6 = param_1;
            if (0xf < uVar2) {
              puVar6 = (undefined8 *)*param_1;
            }
            if (*(char *)(lVar8 + -1 + (longlong)puVar6) == ' ') {
LAB_140546bdf:
              bVar4 = true;
            }
            else {
              puVar6 = param_1;
              if (0xf < uVar2) {
                puVar6 = (undefined8 *)*param_1;
              }
              if (*(char *)((longlong)puVar6 + lVar8 + -1) == '\"') goto LAB_140546bdf;
            }
            puVar6 = param_1;
            if (0xf < uVar2) {
              puVar6 = (undefined8 *)*param_1;
            }
            if (*(char *)((longlong)puVar6 + lVar8 + -1) == '\'') {
              if (0 < iVar9) {
                if (iVar9 < 2) goto LAB_140546c2c;
                puVar6 = param_1;
                if (0xf < uVar2) {
                  puVar6 = (undefined8 *)*param_1;
                }
                if (*(char *)((longlong)puVar6 + lVar8 + -2) != ' ') {
                  puVar6 = param_1;
                  if (0xf < uVar2) {
                    puVar6 = (undefined8 *)*param_1;
                  }
                  if (*(char *)((longlong)puVar6 + lVar8 + -2) != ',') goto LAB_140546c2c;
                }
              }
            }
            else {
LAB_140546c2c:
              if (!bVar4) goto LAB_140546cb9;
            }
          }
          puVar6 = param_1;
          if (0xf < uVar2) {
            puVar6 = (undefined8 *)*param_1;
          }
          if ('`' < *(char *)(lVar8 + (longlong)puVar6)) {
            puVar6 = param_1;
            if (0xf < uVar2) {
              puVar6 = (undefined8 *)*param_1;
            }
            if (*(char *)((longlong)puVar6 + lVar8) < '{') {
              puVar6 = param_1;
              if (0xf < uVar2) {
                puVar6 = (undefined8 *)*param_1;
              }
              pcVar1 = (char *)((longlong)iVar9 + (longlong)puVar6);
              *pcVar1 = *pcVar1 + -0x61;
              if (0xf < (ulonglong)param_1[3]) {
                param_1 = (undefined8 *)*param_1;
              }
              pcVar1 = (char *)((longlong)iVar9 + (longlong)param_1);
              *pcVar1 = *pcVar1 + 'A';
              return;
            }
          }
          puVar6 = param_1;
          if (0xf < uVar2) {
            puVar6 = (undefined8 *)*param_1;
          }
          uVar5 = (int)*(char *)(lVar8 + (longlong)puVar6) + 0x7f;
          if (uVar5 < 0x24) {
                    /* WARNING: Switch is manually overridden */
            switch((&UNK_140546dc0)[(int)uVar5]) {
            case 0:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x9a;
              return;
            case 1:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x90;
              return;
            case 2:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x8e;
              return;
            case 3:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x8f;
              return;
            case 4:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x80;
              return;
            case 5:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x92;
              return;
            case 6:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0x99;
              return;
            case 7:
              if (0xf < uVar2) {
                param_1 = (undefined8 *)*param_1;
              }
              *(undefined1 *)((longlong)iVar9 + (longlong)param_1) = 0xa5;
              return;
            }
          }
          puVar6 = param_1;
          if (0xf < uVar2) {
            puVar6 = (undefined8 *)*param_1;
          }
          if (*(char *)((longlong)puVar6 + lVar8) != ' ') {
            puVar6 = param_1;
            if (0xf < uVar2) {
              puVar6 = (undefined8 *)*param_1;
            }
            if (*(char *)((longlong)puVar6 + lVar8) != '\"') {
              return;
            }
          }
          bVar3 = false;
        }
      }
LAB_140546cb9:
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 1;
    } while ((ulonglong)(longlong)iVar9 < (ulonglong)param_1[2]);
  }
  return;
}

