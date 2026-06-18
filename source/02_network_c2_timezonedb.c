/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: network                                                   */
/* /* Network C2, socket comms, TimeZoneDB HTTP */                        */
/* Functions: 3                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140003010 : winsock_cleanup [was: FUN_140003010] ---- */

longlong FUN_140003010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -param_1;
  if (-param_1 < 0) {
    lVar1 = param_1;
  }
  return lVar1;
}




/* ---- 0x140003030 : network_pin_verify [was: FUN_140003030] ---- */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140003030(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  size_t sVar4;
  undefined4 extraout_var_03;
  undefined1 (*pauVar5) [16];
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 auStack_1748 [32];
  uint local_1728;
  longlong local_1720;
  char *local_1718;
  longlong local_1710;
  longlong local_1708;
  char *local_1700;
  undefined1 local_16f8 [4];
  uint local_16f4;
  uint local_16f0;
  uint local_16ec;
  size_t local_16e8;
  char *local_16e0;
  ulonglong local_16d8;
  char *local_16d0;
  char *local_16c8;
  char *local_16c0;
  char *local_16b8;
  char *local_16b0;
  char *local_16a8;
  char *local_16a0;
  char *local_1698;
  undefined1 local_1690 [4];
  undefined4 local_168c;
  undefined4 local_1688;
  undefined4 local_1684;
  undefined1 local_1660 [16];
  undefined1 local_1650 [24];
  undefined1 local_1638 [112];
  undefined1 local_15c8 [112];
  undefined1 local_1558 [112];
  undefined1 local_14e8 [112];
  undefined1 local_1478 [112];
  undefined1 local_1408 [112];
  undefined1 local_1398 [112];
  undefined1 local_1328 [112];
  undefined1 local_12b8 [112];
  undefined1 local_1248 [144];
  undefined1 local_11b8 [416];
  undefined1 local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140003040;
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_1748;
  local_1708 = 0;
  local_1710 = 0;
  puVar10 = local_1018;
  for (lVar7 = 0x1000; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_16ec = 0x1000;
  local_1728 = Ordinal_115(0x202,local_11b8);
  if (local_1728 == 0) {
    puVar10 = local_1690;
    for (lVar7 = 0x30; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_168c = 0;
    local_1688 = 1;
    local_1684 = 6;
    puVar10 = local_16f8;
    for (lVar7 = 4; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar3 = FUN_140001110(local_16f8);
    local_16c8 = FUN_1400014b0(pcVar3);
    puVar10 = local_1650;
    for (lVar7 = 0x14; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar3 = FUN_140001230(local_1650);
    local_16c0 = FUN_140001c90(pcVar3);
    plVar11 = &local_1708;
    puVar10 = local_1690;
    local_1728 = getaddrinfo(local_16c0,local_16c8);
    if (local_1728 == 0) {
      local_1710 = local_1708;
      uVar6 = (ulonglong)*(uint *)(local_1708 + 0xc);
      local_1720 = Ordinal_23(*(undefined4 *)(local_1708 + 4),*(undefined4 *)(local_1708 + 8));
      if (local_1720 == -1) {
        freeaddrinfo(local_1708);
        Ordinal_116();
        local_16f4 = Ordinal_111();
        puVar10 = local_1398;
        for (lVar7 = 0x6f; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        pcVar3 = FUN_140001350(local_1398);
        local_16b8 = FUN_1400023e0(pcVar3);
        uVar1 = FUN_140007400((longlong)local_16b8,(ulonglong)local_16f4,uVar6,plVar11);
        uVar6 = CONCAT44(extraout_var_01,uVar1) & 0xffffffffffffff00;
      }
      else {
        uVar6 = (ulonglong)*(uint *)(local_1710 + 0x10);
        local_1728 = Ordinal_4(local_1720,*(undefined8 *)(local_1710 + 0x20));
        if (local_1728 == -1) {
          Ordinal_3(local_1720);
          local_1720 = -1;
        }
        freeaddrinfo(local_1708);
        if (local_1720 == -1) {
          Ordinal_116();
          local_16f0 = Ordinal_111();
          puVar10 = local_1328;
          for (lVar7 = 0x6f; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          pcVar3 = FUN_140001350(local_1328);
          local_16b0 = FUN_140002470(pcVar3);
          uVar1 = FUN_140007400((longlong)local_16b0,(ulonglong)local_16f0,uVar6,plVar11);
          uVar6 = CONCAT44(extraout_var_02,uVar1) & 0xffffffffffffff00;
        }
        else {
          puVar10 = local_1248;
          for (lVar7 = 0x8b; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          pcVar3 = FUN_140001370(local_1248);
          local_16e0 = FUN_140002500(pcVar3);
          sVar4 = strlen(local_16e0);
          uVar12 = 0;
          uVar6 = sVar4 & 0xffffffff;
          local_1728 = Ordinal_19(local_1720,local_16e0);
          if (local_1728 == 0xffffffff) {
            Ordinal_3(local_1720);
            Ordinal_116();
            puVar10 = local_12b8;
            for (lVar7 = 0x6f; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            pcVar3 = FUN_140001350(local_12b8);
            pcVar3 = FUN_140002230(pcVar3);
            uVar1 = FUN_140007400((longlong)pcVar3,(ulonglong)local_1728,uVar6,uVar12);
            uVar6 = CONCAT44(extraout_var_03,uVar1) & 0xffffffffffffff00;
          }
          else {
            do {
              uVar12 = 0;
              uVar6 = (ulonglong)local_16ec;
              local_1728 = Ordinal_16(local_1720,local_1018);
              if (0 < (int)local_1728) break;
            } while (0 < (int)local_1728);
            Ordinal_3(local_1720);
            Ordinal_116();
            puVar10 = local_1660;
            for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar10 = 0;
              puVar10 = puVar10 + 1;
            }
            pcVar3 = FUN_1400011d0(local_1660);
            pauVar5 = (undefined1 (*) [16])FUN_1400019c0(pcVar3);
            local_16d8 = FUN_140006ef0((undefined1 (*) [16])local_1018,pauVar5);
            if (local_16d8 == 0) {
              puVar10 = local_1638;
              for (lVar7 = 0x6a; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              pcVar3 = FUN_140001330(local_1638);
              pcVar3 = FUN_1400021a0(pcVar3);
              uVar1 = FUN_140007400((longlong)pcVar3,pauVar5,uVar6,uVar12);
              uVar6 = CONCAT44(extraout_var_04,uVar1) & 0xffffffffffffff00;
            }
            else {
              uVar8 = 0x20;
              local_1718 = FUN_14000b060(local_16d8,' ');
              if (local_1718 == (char *)0x0) {
                puVar10 = local_15c8;
                for (lVar7 = 0x6a; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                pcVar3 = FUN_140001330(local_15c8);
                pcVar3 = FUN_1400021a0(pcVar3);
                uVar1 = FUN_140007400((longlong)pcVar3,uVar8,uVar6,uVar12);
                uVar6 = CONCAT44(extraout_var_05,uVar1) & 0xffffffffffffff00;
              }
              else {
                local_1718 = local_1718 + 1;
                uVar8 = 0x20;
                local_1718 = FUN_14000b060((ulonglong)local_1718,' ');
                if (local_1718 == (char *)0x0) {
                  puVar10 = local_1558;
                  for (lVar7 = 0x6a; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar10 = 0;
                    puVar10 = puVar10 + 1;
                  }
                  pcVar3 = FUN_140001330(local_1558);
                  pcVar3 = FUN_1400021a0(pcVar3);
                  uVar1 = FUN_140007400((longlong)pcVar3,uVar8,uVar6,uVar12);
                  uVar6 = CONCAT44(extraout_var_06,uVar1) & 0xffffffffffffff00;
                }
                else {
                  uVar8 = 0x22;
                  local_16d0 = FUN_14000b060((ulonglong)local_1718,'\"');
                  if (local_16d0 == (char *)0x0) {
                    puVar10 = local_14e8;
                    for (lVar7 = 0x6a; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + 1;
                    }
                    pcVar3 = FUN_140001330(local_14e8);
                    pcVar3 = FUN_1400021a0(pcVar3);
                    uVar1 = FUN_140007400((longlong)pcVar3,uVar8,uVar6,uVar12);
                    uVar6 = CONCAT44(extraout_var_07,uVar1) & 0xffffffffffffff00;
                  }
                  else {
                    local_16e8 = (longlong)local_16d0 - (longlong)local_1718;
                    local_1700 = operator_new(local_16e8 + 1);
                    uVar1 = (undefined4)uVar12;
                    pcVar3 = local_1718;
                    sVar4 = local_16e8;
                    local_16a8 = local_1700;
                    strncpy(local_1700,local_1718,local_16e8);
                    local_1700[local_16e8] = '\0';
                    local_16a0 = FUN_140003670(local_1700,pcVar3,sVar4,uVar1);
                    iVar2 = strcmp(param_1,local_16a0);
                    if (iVar2 == 0) {
                      uVar6 = CONCAT71((int7)(CONCAT44(extraout_var_08,iVar2) >> 8),1);
                    }
                    else {
                      local_1698 = local_1700;
                      uVar6 = thunk_FUN_14001b320(local_1700);
                      uVar6 = uVar6 & 0xffffffffffffff00;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      Ordinal_116();
      puVar9 = local_1408;
      for (lVar7 = 0x6f; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      pcVar3 = FUN_140001350(local_1408);
      pcVar3 = FUN_140002350(pcVar3);
      uVar1 = FUN_140007400((longlong)pcVar3,(ulonglong)local_1728,puVar10,plVar11);
      uVar6 = CONCAT44(extraout_var_00,uVar1) & 0xffffffffffffff00;
    }
  }
  else {
    puVar10 = local_1478;
    for (lVar7 = 0x6f; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar3 = FUN_140001350(local_1478);
    pcVar3 = FUN_1400022c0(pcVar3);
    uVar1 = FUN_140007400((longlong)pcVar3,(ulonglong)local_1728,param_3,param_4);
    uVar6 = CONCAT44(extraout_var,uVar1) & 0xffffffffffffff00;
  }
  return uVar6;
}




/* ---- 0x140009ce0 : json_parse_field [was: FUN_140009ce0] ---- */

longlong FUN_140009ce0(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  uint *puVar4;
  int *piVar5;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = 0;
  do {
    if ((ulonglong)(param_3 - param_2) <= local_28) {
      FUN_140008a80(param_1);
      return 0;
    }
    bVar2 = true;
    for (local_30 = 0; uVar3 = FUN_140009fa0(param_1), local_30 < uVar3; local_30 = local_30 + 1) {
      bVar1 = *(byte *)(param_2 + local_28 + local_30);
      puVar4 = (uint *)FUN_140008bc0(param_1,local_30);
      if (((uint)bVar1 != *puVar4) &&
         (piVar5 = (int *)FUN_140008bc0(param_1,local_30), *piVar5 != -1)) {
        bVar2 = false;
        break;
      }
    }
    if (bVar2) {
      FUN_140008a80(param_1);
      return param_2 + local_28;
    }
    local_28 = local_28 + 1;
  } while( true );
}




