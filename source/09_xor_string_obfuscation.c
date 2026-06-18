/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: obfuscation                                               */
/* /* XOR string decryption, obfuscation routines */                      */
/* Functions: 84                                                        */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x140001000 : FUN_140001000 [was: FUN_140001000] ---- */

undefined8 FUN_140001000(longlong param_1,int param_2)

{
  undefined8 local_10 [2];
  
  FUN_140009f10(param_1 + param_2,local_10,8);
  return local_10[0];
}




/* ---- 0x140001050 : FUN_140001050 [was: FUN_140001050] ---- */

void FUN_140001050(longlong param_1,ulonglong param_2)

{
  undefined8 local_18;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    *(byte *)(param_1 + local_18) = *(byte *)(param_1 + local_18) ^ 0x34;
  }
  return;
}




/* ---- 0x1400010b0 : FUN_1400010b0 [was: FUN_1400010b0] ---- */

void FUN_1400010b0(longlong param_1,ulonglong param_2)

{
  undefined8 local_18;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    *(ushort *)(param_1 + local_18 * 2) = *(ushort *)(param_1 + local_18 * 2) ^ 0x34;
  }
  return;
}




/* ---- 0x140001110 : FUN_140001110 [was: FUN_140001110] ---- */

undefined1 * FUN_140001110(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 4; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001130 : FUN_140001130 [was: FUN_140001130] ---- */

undefined1 * FUN_140001130(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001150 : FUN_140001150 [was: FUN_140001150] ---- */

undefined1 * FUN_140001150(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001170 : FUN_140001170 [was: FUN_140001170] ---- */

undefined1 * FUN_140001170(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001190 : FUN_140001190 [was: FUN_140001190] ---- */

undefined1 * FUN_140001190(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400011b0 : FUN_1400011b0 [was: FUN_1400011b0] ---- */

undefined1 * FUN_1400011b0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400011d0 : FUN_1400011d0 [was: FUN_1400011d0] ---- */

undefined1 * FUN_1400011d0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400011f0 : FUN_1400011f0 [was: FUN_1400011f0] ---- */

undefined1 * FUN_1400011f0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x11; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001210 : FUN_140001210 [was: FUN_140001210] ---- */

undefined1 * FUN_140001210(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001230 : FUN_140001230 [was: FUN_140001230] ---- */

undefined1 * FUN_140001230(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x14; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001250 : FUN_140001250 [was: FUN_140001250] ---- */

undefined1 * FUN_140001250(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x15; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001270 : FUN_140001270 [was: FUN_140001270] ---- */

undefined1 * FUN_140001270(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x1b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001290 : FUN_140001290 [was: FUN_140001290] ---- */

undefined1 * FUN_140001290(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x2a; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400012b0 : FUN_1400012b0 [was: FUN_1400012b0] ---- */

undefined1 * FUN_1400012b0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x41; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400012d0 : FUN_1400012d0 [was: FUN_1400012d0] ---- */

undefined1 * FUN_1400012d0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x43; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400012f0 : FUN_1400012f0 [was: FUN_1400012f0] ---- */

undefined1 * FUN_1400012f0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x56; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001310 : FUN_140001310 [was: FUN_140001310] ---- */

undefined1 * FUN_140001310(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 99; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001330 : FUN_140001330 [was: FUN_140001330] ---- */

undefined1 * FUN_140001330(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x6a; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001350 : FUN_140001350 [was: FUN_140001350] ---- */

undefined1 * FUN_140001350(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x6f; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001370 : FUN_140001370 [was: FUN_140001370] ---- */

undefined1 * FUN_140001370(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x8b; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001390 : FUN_140001390 [was: FUN_140001390] ---- */

undefined1 * FUN_140001390(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400013b0 : FUN_1400013b0 [was: FUN_1400013b0] ---- */

undefined1 * FUN_1400013b0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xb4; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400013d0 : FUN_1400013d0 [was: FUN_1400013d0] ---- */

undefined1 * FUN_1400013d0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400013f0 : FUN_1400013f0 [was: FUN_1400013f0] ---- */

undefined1 * FUN_1400013f0(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001410 : FUN_140001410 [was: FUN_140001410] ---- */

undefined1 * FUN_140001410(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001430 : FUN_140001430 [was: FUN_140001430] ---- */

undefined1 * FUN_140001430(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001450 : FUN_140001450 [was: FUN_140001450] ---- */

undefined1 * FUN_140001450(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001470 : FUN_140001470 [was: FUN_140001470] ---- */

undefined1 * FUN_140001470(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x140001490 : FUN_140001490 [was: FUN_140001490] ---- */

undefined1 * FUN_140001490(undefined1 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x1e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}




/* ---- 0x1400014b0 : FUN_1400014b0 [was: FUN_1400014b0] ---- */

char * FUN_1400014b0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029518)[local_18] ^ 0x34;
    }
  }
  param_1[3] = '\0';
  return param_1;
}




/* ---- 0x140001540 : FUN_140001540 [was: FUN_140001540] ---- */

char * FUN_140001540(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029bf8)[local_18] ^ 0x34;
    }
  }
  param_1[4] = '\0';
  return param_1;
}




/* ---- 0x1400015d0 : FUN_1400015d0 [was: FUN_1400015d0] ---- */

char * FUN_1400015d0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b20)[local_18] ^ 0x34;
    }
  }
  param_1[4] = '\0';
  return param_1;
}




/* ---- 0x140001660 : FUN_140001660 [was: FUN_140001660] ---- */

char * FUN_140001660(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b10)[local_18] ^ 0x34;
    }
  }
  param_1[5] = '\0';
  return param_1;
}




/* ---- 0x1400016f0 : FUN_1400016f0 [was: FUN_1400016f0] ---- */

char * FUN_1400016f0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b30)[local_18] ^ 0x34;
    }
  }
  param_1[5] = '\0';
  return param_1;
}




/* ---- 0x140001780 : FUN_140001780 [was: FUN_140001780] ---- */

char * FUN_140001780(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b00)[local_18] ^ 0x34;
    }
  }
  param_1[6] = '\0';
  return param_1;
}




/* ---- 0x140001810 : FUN_140001810 [was: FUN_140001810] ---- */

char * FUN_140001810(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029470)[local_18] ^ 0x34;
    }
  }
  param_1[7] = '\0';
  return param_1;
}




/* ---- 0x1400018a0 : FUN_1400018a0 [was: FUN_1400018a0] ---- */

char * FUN_1400018a0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400299d8)[local_18] ^ 0x34;
    }
  }
  param_1[7] = '\0';
  return param_1;
}




/* ---- 0x140001930 : FUN_140001930 [was: FUN_140001930] ---- */

char * FUN_140001930(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029858)[local_18] ^ 0x34;
    }
  }
  param_1[8] = '\0';
  return param_1;
}




/* ---- 0x1400019c0 : FUN_1400019c0 [was: FUN_1400019c0] ---- */

char * FUN_1400019c0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400297c8)[local_18] ^ 0x34;
    }
  }
  param_1[10] = '\0';
  return param_1;
}




/* ---- 0x140001a50 : FUN_140001a50 [was: FUN_140001a50] ---- */

char * FUN_140001a50(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029870)[local_18] ^ 0x34;
    }
  }
  param_1[10] = '\0';
  return param_1;
}




/* ---- 0x140001ae0 : FUN_140001ae0 [was: FUN_140001ae0] ---- */

char * FUN_140001ae0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029990)[local_18] ^ 0x34;
    }
  }
  param_1[0x10] = '\0';
  return param_1;
}




/* ---- 0x140001b70 : FUN_140001b70 [was: FUN_140001b70] ---- */

char * FUN_140001b70(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029958)[local_18] ^ 0x34;
    }
  }
  param_1[0x10] = '\0';
  return param_1;
}




/* ---- 0x140001c00 : FUN_140001c00 [was: FUN_140001c00] ---- */

char * FUN_140001c00(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029920)[local_18] ^ 0x34;
    }
  }
  param_1[0x12] = '\0';
  return param_1;
}




/* ---- 0x140001c90 : FUN_140001c90 [was: FUN_140001c90] ---- */

char * FUN_140001c90(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x13; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400294f8)[local_18] ^ 0x34;
    }
  }
  param_1[0x13] = '\0';
  return param_1;
}




/* ---- 0x140001d20 : FUN_140001d20 [was: FUN_140001d20] ---- */

char * FUN_140001d20(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029900)[local_18] ^ 0x34;
    }
  }
  param_1[0x14] = '\0';
  return param_1;
}




/* ---- 0x140001db0 : FUN_140001db0 [was: FUN_140001db0] ---- */

char * FUN_140001db0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400298b0)[local_18] ^ 0x34;
    }
  }
  param_1[0x14] = '\0';
  return param_1;
}




/* ---- 0x140001e40 : FUN_140001e40 [was: FUN_140001e40] ---- */

char * FUN_140001e40(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x1a; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029888)[local_18] ^ 0x34;
    }
  }
  param_1[0x1a] = '\0';
  return param_1;
}




/* ---- 0x140001ed0 : FUN_140001ed0 [was: FUN_140001ed0] ---- */

char * FUN_140001ed0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x29; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b40)[local_18] ^ 0x34;
    }
  }
  param_1[0x29] = '\0';
  return param_1;
}




/* ---- 0x140001f60 : FUN_140001f60 [was: FUN_140001f60] ---- */

char * FUN_140001f60(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029d00)[local_18] ^ 0x34;
    }
  }
  param_1[0x40] = '\0';
  return param_1;
}




/* ---- 0x140001ff0 : FUN_140001ff0 [was: FUN_140001ff0] ---- */

char * FUN_140001ff0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x42; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029c40)[local_18] ^ 0x34;
    }
  }
  param_1[0x42] = '\0';
  return param_1;
}




/* ---- 0x140002080 : FUN_140002080 [was: FUN_140002080] ---- */

char * FUN_140002080(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x55; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029b80)[local_18] ^ 0x34;
    }
  }
  param_1[0x55] = '\0';
  return param_1;
}




/* ---- 0x140002110 : FUN_140002110 [was: FUN_140002110] ---- */

char * FUN_140002110(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x62; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029c90)[local_18] ^ 0x34;
    }
  }
  param_1[0x62] = '\0';
  return param_1;
}




/* ---- 0x1400021a0 : FUN_1400021a0 [was: FUN_1400021a0] ---- */

char * FUN_1400021a0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x69; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400297e0)[local_18] ^ 0x34;
    }
  }
  param_1[0x69] = '\0';
  return param_1;
}




/* ---- 0x140002230 : FUN_140002230 [was: FUN_140002230] ---- */

char * FUN_140002230(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x6e; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029750)[local_18] ^ 0x34;
    }
  }
  param_1[0x6e] = '\0';
  return param_1;
}




/* ---- 0x1400022c0 : FUN_1400022c0 [was: FUN_1400022c0] ---- */

char * FUN_1400022c0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x6e; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029480)[local_18] ^ 0x34;
    }
  }
  param_1[0x6e] = '\0';
  return param_1;
}




/* ---- 0x140002350 : FUN_140002350 [was: FUN_140002350] ---- */

char * FUN_140002350(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x6e; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029530)[local_18] ^ 0x34;
    }
  }
  param_1[0x6e] = '\0';
  return param_1;
}




/* ---- 0x1400023e0 : FUN_1400023e0 [was: FUN_1400023e0] ---- */

char * FUN_1400023e0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x6e; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400295b0)[local_18] ^ 0x34;
    }
  }
  param_1[0x6e] = '\0';
  return param_1;
}




/* ---- 0x140002470 : FUN_140002470 [was: FUN_140002470] ---- */

char * FUN_140002470(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x6e; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029630)[local_18] ^ 0x34;
    }
  }
  param_1[0x6e] = '\0';
  return param_1;
}




/* ---- 0x140002500 : FUN_140002500 [was: FUN_140002500] ---- */

char * FUN_140002500(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0x8a; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400296b0)[local_18] ^ 0x34;
    }
  }
  param_1[0x8a] = '\0';
  return param_1;
}




/* ---- 0x140002590 : FUN_140002590 [was: FUN_140002590] ---- */

char * FUN_140002590(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400298d0)[local_18] ^ 0x34;
    }
  }
  param_1[0xb] = '\0';
  return param_1;
}




/* ---- 0x140002620 : FUN_140002620 [was: FUN_140002620] ---- */

char * FUN_140002620(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029c08)[local_18] ^ 0x34;
    }
  }
  param_1[0xb] = '\0';
  return param_1;
}




/* ---- 0x1400026b0 : FUN_1400026b0 [was: FUN_1400026b0] ---- */

char * FUN_1400026b0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xb3; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029d50)[local_18] ^ 0x34;
    }
  }
  param_1[0xb3] = '\0';
  return param_1;
}




/* ---- 0x140002740 : FUN_140002740 [was: FUN_140002740] ---- */

char * FUN_140002740(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029940)[local_18] ^ 0x34;
    }
  }
  param_1[0xc] = '\0';
  return param_1;
}




/* ---- 0x1400027d0 : FUN_1400027d0 [was: FUN_1400027d0] ---- */

char * FUN_1400027d0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029be0)[local_18] ^ 0x34;
    }
  }
  param_1[0xc] = '\0';
  return param_1;
}




/* ---- 0x140002860 : FUN_140002860 [was: FUN_140002860] ---- */

char * FUN_140002860(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xd; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029c20)[local_18] ^ 0x34;
    }
  }
  param_1[0xd] = '\0';
  return param_1;
}




/* ---- 0x1400028f0 : FUN_1400028f0 [was: FUN_1400028f0] ---- */

char * FUN_1400028f0(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_140029978)[local_18] ^ 0x34;
    }
  }
  param_1[0xe] = '\0';
  return param_1;
}




/* ---- 0x140002980 : FUN_140002980 [was: FUN_140002980] ---- */

char * FUN_140002980(char *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == '\0') {
    for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
      param_1[local_18] = (&DAT_1400298e8)[local_18] ^ 0x34;
    }
  }
  param_1[0xe] = '\0';
  return param_1;
}




/* ---- 0x140002a10 : FUN_140002a10 [was: FUN_140002a10] ---- */

short * FUN_140002a10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      param_1[local_18] = *(ushort *)(&DAT_1400299e8 + local_18 * 2) ^ 0x34;
    }
  }
  param_1[3] = 0;
  return param_1;
}




/* ---- 0x140002a90 : FUN_140002a90 [was: FUN_140002a90] ---- */

short * FUN_140002a90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      param_1[local_18] = L"qGD4"[local_18] ^ 0x34;
    }
  }
  param_1[4] = 0;
  return param_1;
}




/* ---- 0x140002b10 : FUN_140002b10 [was: FUN_140002b10] ---- */

short * FUN_140002b10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      param_1[local_18] = L"{RR4"[local_18] ^ 0x34;
    }
  }
  param_1[4] = 0;
  return param_1;
}




/* ---- 0x140002b90 : FUN_140002b90 [was: FUN_140002b90] ---- */

short * FUN_140002b90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      param_1[local_18] = *(ushort *)(&DAT_140029a28 + local_18 * 2) ^ 0x34;
    }
  }
  param_1[4] = 0;
  return param_1;
}




/* ---- 0x140002c10 : FUN_140002c10 [was: FUN_140002c10] ---- */

short * FUN_140002c10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      param_1[local_18] = L"`\\QYQ4"[local_18] ^ 0x34;
    }
  }
  param_1[6] = 0;
  return param_1;
}




/* ---- 0x140002c90 : FUN_140002c90 [was: FUN_140002c90] ---- */

short * FUN_140002c90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      param_1[local_18] = L"gY[[@\\4"[local_18] ^ 0x34;
    }
  }
  param_1[7] = 0;
  return param_1;
}




/* ---- 0x140002d10 : FUN_140002d10 [was: FUN_140002d10] ---- */

short * FUN_140002d10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      param_1[local_18] = L"u]YV[@4"[local_18] ^ 0x34;
    }
  }
  param_1[7] = 0;
  return param_1;
}




/* ---- 0x140002d90 : FUN_140002d90 [was: FUN_140002d90] ---- */

short * FUN_140002d90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
      param_1[local_18] = L"|]@V[L4"[local_18] ^ 0x34;
    }
  }
  param_1[7] = 0;
  return param_1;
}




/* ---- 0x140002e10 : FUN_140002e10 [was: FUN_140002e10] ---- */

short * FUN_140002e10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      param_1[local_18] = L"`F]SSQF4"[local_18] ^ 0x34;
    }
  }
  param_1[8] = 0;
  return param_1;
}




/* ---- 0x140002e90 : FUN_140002e90 [was: FUN_140002e90] ---- */

short * FUN_140002e90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      param_1[local_18] = L"gD[@@QP4"[local_18] ^ 0x34;
    }
  }
  param_1[8] = 0;
  return param_1;
}




/* ---- 0x140002f10 : FUN_140002f10 [was: FUN_140002f10] ---- */

short * FUN_140002f10(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
      param_1[local_18] = *(ushort *)(&DAT_140029ac8 + local_18 * 2) ^ 0x34;
    }
  }
  param_1[9] = 0;
  return param_1;
}




/* ---- 0x140002f90 : FUN_140002f90 [was: FUN_140002f90] ---- */

short * FUN_140002f90(short *param_1)

{
  ulonglong local_18;
  
  if (*param_1 == 0) {
    for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
      param_1[local_18] = L"g[R@CUFQhAP@_4"[local_18] ^ 0x34;
    }
  }
  param_1[0xe] = 0;
  return param_1;
}




/* ---- 0x140003670 : xor_string_decrypt [was: FUN_140003670] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_140003670(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char *local_res8;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  char *local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_78;
  local_50 = FUN_140010480((longlong)param_1,param_2,param_3,param_4);
  local_res8 = param_1;
  do {
    local_58 = (int)*local_res8;
    local_res8 = local_res8 + 1;
  } while (local_58 != 0x3a);
  local_4c = FUN_140010480((longlong)local_res8,param_2,param_3,param_4);
  do {
    local_54 = (int)*local_res8;
    local_res8 = local_res8 + 1;
  } while (local_54 != 0x3a);
  local_48 = FUN_140010480((longlong)local_res8,param_2,param_3,param_4);
  local_40 = ((longlong)(int)local_50 * 0xe10 + (longlong)(int)local_4c * 0x3c +
             (longlong)(int)local_48) / 0xb4;
  local_38 = (local_40 * 0x75bcd15) % 10000;
  local_30 = FUN_140003010(local_38);
  puVar3 = local_20;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  pcVar1 = FUN_140001190(local_20);
  local_28 = FUN_140001810(pcVar1);
  sprintf(&DAT_14003cea8,local_28,local_30);
  return &DAT_14003cea8;
}




/* ---- 0x140009f10 : encode_wide_string [was: FUN_140009f10] ---- */

bool FUN_140009f10(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_14003ceb0)(DAT_14003ce70,param_1,param_2,(longlong)param_3,0);
  return iVar1 == 0;
}




