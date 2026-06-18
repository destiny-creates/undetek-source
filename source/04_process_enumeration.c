/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: process_enum                                              */
/* /* Process/module enumeration, cs2.exe finder */                       */
/* Functions: 3                                                         */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140009b90 : process_find_by_name [was: FUN_140009b90] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140009b90(char *param_1)

{
  int iVar1;
  undefined1 auStack_178 [32];
  HANDLE local_158;
  undefined4 local_148 [2];
  undefined4 local_140;
  char local_11c [260];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_178;
  local_148[0] = 0x130;
  local_158 = (HANDLE)CreateToolhelp32Snapshot(2,0);
  Process32First(local_158,local_148);
  iVar1 = strcmp(param_1,local_11c);
  if (iVar1 == 0) {
    CloseHandle(local_158);
  }
  else {
    do {
      iVar1 = Process32Next(local_158,local_148);
      if (iVar1 == 0) {
        CloseHandle(local_158);
        return 0;
      }
      iVar1 = strcmp(param_1,local_11c);
    } while (iVar1 != 0);
    CloseHandle(local_158);
  }
  return local_140;
}




/* ---- 0x140025698 : FUN_140025698 [was: FUN_140025698] ---- */

undefined8 FUN_140025698(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_14001ff8c(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_14003d870 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_14003d870 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_14001ff8c(2);
      lVar4 = FUN_14001ff8c(1);
      if (lVar4 == lVar3) goto LAB_1400256ba;
    }
    hObject = (HANDLE)FUN_14001ff8c(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_140025718;
    }
  }
LAB_1400256ba:
  DVar2 = 0;
LAB_140025718:
  FUN_14001fed0(param_1);
  *(undefined1 *)
   ((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_14001ab74(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}




/* ---- 0x14002699c : FUN_14002699c [was: FUN_14002699c] ---- */

void FUN_14002699c(void)

{
  if (DAT_14003cd30 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_14003cd30);
  }
  return;
}




