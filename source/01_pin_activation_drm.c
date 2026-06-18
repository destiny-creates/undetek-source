/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: activation                                                */
/* /* PIN validation, DRM, Discord distribution */                        */
/* Functions: 1                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140006f20 : pin_validation_loop [was: FUN_140006f20] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_140006f20(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [32];
  char local_68;
  char local_67;
  int local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14003c2c0 ^ (ulonglong)auStack_88;
  local_68 = '\0';
  do {
    puVar6 = local_38;
    for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    pcVar2 = FUN_1400013d0(local_38);
    pcVar2 = FUN_1400027d0(pcVar2);
    FUN_140007400((longlong)pcVar2,param_2,param_3,param_4);
    puVar6 = local_60;
    for (lVar5 = 5; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    pcVar2 = FUN_140001130(local_60);
    pwVar3 = (wchar_t *)FUN_140001540(pcVar2);
    param_2 = local_18;
    iVar1 = FUN_140007470(pwVar3,param_2,param_3,param_4);
    if (iVar1 == 1) {
      do {
        iVar1 = FUN_140010838();
      } while (iVar1 != 10);
      local_67 = '\x01';
      for (local_64 = 0; local_64 < 4; local_64 = local_64 + 1) {
        if ((local_18[local_64] < '0') || ('9' < local_18[local_64])) {
          local_67 = '\0';
          break;
        }
      }
      if (local_67 == '\0') {
        puVar6 = local_48;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        pcVar2 = FUN_140001390(local_48);
        pcVar2 = FUN_140002620(pcVar2);
        FUN_140007400((longlong)pcVar2,param_2,param_3,param_4);
      }
      else {
        uVar4 = FUN_140003030(local_18,param_2,param_3,param_4);
        local_68 = (char)uVar4;
        if (local_68 == '\0') {
          puVar6 = local_58;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          pcVar2 = FUN_140001390(local_58);
          pcVar2 = FUN_140002620(pcVar2);
          FUN_140007400((longlong)pcVar2,param_2,param_3,param_4);
        }
      }
    }
    else {
      do {
        iVar1 = FUN_140010838();
      } while (iVar1 != 10);
      puVar6 = local_28;
      for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      pcVar2 = FUN_1400013f0(local_28);
      pcVar2 = FUN_140002860(pcVar2);
      FUN_140007400((longlong)pcVar2,param_2,param_3,param_4);
    }
    if (local_68 != '\0') {
      return local_68;
    }
  } while( true );
}




