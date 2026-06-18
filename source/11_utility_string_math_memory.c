/* ====================================================================== */
/* UNDETEK.EXE — Decompiled Source                                     */
/* Category: utility                                                   */
/* /* String, math, memory, format utilities */                           */
/* Functions: 215                                                       */
/* ====================================================================== */

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <winsock2.h>
#include <ws2tcpip.h>

/* ---- 0x1400070e0 : get_filehandle [was: FUN_1400070e0] ---- */

undefined * FUN_1400070e0(void)

{
  return &DAT_14003ce98;
}




/* ---- 0x140007100 : vfprintf_impl [was: FUN_140007100] ---- */

void FUN_140007100(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400070e0();
  FUN_140013210(*puVar1,param_1,param_2,param_3,param_4);
  return;
}




/* ---- 0x140007150 : _vfwprintf_l [was: _vfwprintf_l] ---- */

/* Library Function - Single Match
    _vfwprintf_l
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _vfwprintf_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1400070f0();
  iVar1 = FID_conflict___stdio_common_vfwscanf
                    (*puVar2,(longlong)_File,(longlong)_Format,_Locale,_ArgList);
  return iVar1;
}




/* ---- 0x1400071a0 : format_string_builder [was: FUN_1400071a0] ---- */

int FUN_1400071a0(undefined1 *param_1,ulonglong param_2,longlong param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_1400070e0();
  uVar2 = FUN_140013334(*puVar1 | 1,param_1,param_2,param_3,param_4,param_5);
  local_14 = (int)uVar2;
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}




/* ---- 0x140007220 : wchar_print_wrapper [was: _vsprintf_l] ---- */

/* Library Function - Single Match
    _vsprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FUN_1400071a0(_DstBuf,0xffffffffffffffff,(longlong)_Format,(undefined4 *)param_3,_ArgList)
  ;
  return iVar1;
}




/* ---- 0x140007400 : console_printf_wrapper [was: FUN_140007400] ---- */

undefined4 FUN_140007400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = FUN_140010650(1);
  uVar1 = FUN_140007100((longlong)puVar2,param_1,(undefined4 *)0x0,&local_res10);
  return uVar1;
}




/* ---- 0x140007470 : console_scanf_wrapper [was: FUN_140007470] ---- */

int FUN_140007470(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  FILE *_File;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _File = (FILE *)FUN_140010650(0);
  iVar1 = _vfwprintf_l(_File,param_1,(_locale_t)0x0,(va_list)&local_res10);
  return iVar1;
}




/* ---- 0x1400074e0 : sprintf_wrapper [was: sprintf] ---- */

/* Library Function - Single Match
    sprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  iVar1 = _vsprintf_l(_Dest,_Format,(_locale_t)0x0,(va_list)&local_res18);
  return iVar1;
}




/* ---- 0x140007530 : _Compressed_pair_tmpl_tmpl [was: _Compressed_pair<><>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<char> >,class
   std::_String_val<struct std::_Simple_types<char> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<char> >,class std::_String_val<struct
   std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned
   short> >,class std::_String_val<struct std::_Simple_types<unsigned short>
   >,1>::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<unsigned short> >,class
   std::_String_val<struct std::_Simple_types<unsigned short> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<struct std::_Wrap_alloc<class std::allocator<wchar_t>
   >,class std::_String_val<struct std::_Simple_types<wchar_t> >,1>::_Compressed_pair<struct
   std::_Wrap_alloc<class std::allocator<wchar_t> >,class std::_String_val<struct
   std::_Simple_types<wchar_t> >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64
    public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t)
   __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 * _Compressed_pair<><>(undefined1 *param_1)

{
  FUN_140007b30(param_1);
  _String_val<>(param_1);
  return param_1;
}




/* ---- 0x140007620 : FUN_140007620 [was: FUN_140007620] ---- */

void FUN_140007620(allocator<char> *param_1,__uint64 *param_2)

{
  std::allocator<char>::allocate(param_1,*param_2);
  return;
}




/* ---- 0x140007680 : FUN_140007680 [was: FUN_140007680] ---- */

undefined8 FUN_140007680(allocator<char> *param_1,__uint64 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_28;
  
  *param_2 = *param_2 + 1;
  uVar2 = FUN_140007620(param_1,param_2);
  cVar1 = FUN_140009cb0();
  if (cVar1 != '\0') {
    lVar3 = FUN_140007b30(uVar2);
    for (local_28 = 0; local_28 < *param_2; local_28 = local_28 + 1) {
      FUN_140008380(lVar3 + local_28);
    }
  }
  *param_2 = *param_2 - 1;
  return uVar2;
}




/* ---- 0x1400077d0 : FUN_1400077d0 [was: FUN_1400077d0] ---- */

void FUN_1400077d0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   *param_1,undefined1 *param_2,ulonglong param_3)

{
  __uint64 _Var1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_38;
  undefined1 local_37 [7];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_30;
  undefined8 local_28;
  __uint64 local_20;
  undefined1 *local_18;
  allocator<char> *local_10;
  
  local_30 = param_1;
  _Var1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
          max_size(param_1);
  if (_Var1 < param_3) {
    FUN_140009380();
  }
  local_10 = (allocator<char> *)FUN_1400090c0(param_1);
  puVar2 = local_37;
  for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18 = local_37;
  FUN_1400087e0(&local_38);
  if (param_3 < 0x10) {
    *(ulonglong *)(local_30 + 0x10) = param_3;
    *(undefined8 *)(local_30 + 0x18) = 0xf;
    FUN_1400094b0(local_30,param_2,param_3);
    local_37[1] = 0;
    FUN_140009440(local_30 + param_3,local_37 + 1);
    FUN_140007ca0();
  }
  else {
    _Var1 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
            max_size(param_1);
    local_20 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               _Calculate_growth(param_3,0xf,_Var1);
    local_28 = FUN_140007680(local_10,&local_20);
    FUN_1400079e0(local_30,&local_28);
    *(ulonglong *)(local_30 + 0x10) = param_3;
    *(__uint64 *)(local_30 + 0x18) = local_20;
    puVar2 = (undefined1 *)FUN_140007b30(local_28);
    FUN_1400094b0(puVar2,param_2,param_3);
    local_37[2] = 0;
    lVar3 = FUN_140007b30(local_28);
    FUN_140009440((undefined1 *)(lVar3 + param_3),local_37 + 2);
    FUN_140007ca0();
  }
  return;
}




/* ---- 0x140008070 : _Get_size_of_n<1> [was: _Get_size_of_n<1>] ---- */

/* Library Function - Single Match
    unsigned __int64 __cdecl std::_Get_size_of_n<1>(unsigned __int64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

__uint64 __cdecl std::_Get_size_of_n<1>(__uint64 param_1)

{
  return param_1;
}




/* ---- 0x140008440 : _Max_value<unsigned___int64> [was: _Max_value<unsigned___int64>] ---- */

/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Max_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

__uint64 * __cdecl std::_Max_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_1 < *param_2) {
    local_18 = param_2;
  }
  return local_18;
}




/* ---- 0x140008490 : _Min_value<unsigned___int64> [was: _Min_value<unsigned___int64>] ---- */

/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}




/* ---- 0x1400085b0 : _String_val_tmpl [was: _String_val<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
   std::_Simple_types<char> >(void) __ptr64
    public: __cdecl std::_String_val<struct std::_Simple_types<unsigned short> >::_String_val<struct
   std::_Simple_types<unsigned short> >(void) __ptr64
    public: __cdecl std::_String_val<struct std::_Simple_types<wchar_t> >::_String_val<struct
   std::_Simple_types<wchar_t> >(void) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined1 * _String_val<>(undefined1 *param_1)

{
  FUN_140001450(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}




/* ---- 0x140008670 : FUN_140008670 [was: FUN_140008670] ---- */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
FUN_140008670(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
             char *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  _Compressed_pair<><>(param_1);
  uVar1 = FUN_140009cc0(param_2);
  uVar2 = FUN_140007b30(uVar1);
  FUN_1400077d0(param_1,param_2,uVar2);
  return param_1;
}




/* ---- 0x140008800 : bad_alloc [was: bad_alloc] ---- */

/* Library Function - Single Match
    private: __cdecl std::bad_alloc::bad_alloc(char const * __ptr64 const) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,char *param_1)

{
  exception::exception((exception *)this,param_1,1);
  *(undefined ***)this = vftable;
  return this;
}




/* ---- 0x140008840 : FUN_140008840 [was: FUN_140008840] ---- */

exception * FUN_140008840(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




/* ---- 0x140008880 : FUN_140008880 [was: FUN_140008880] ---- */

exception * FUN_140008880(exception *param_1,exception *param_2)

{
  FUN_140008840(param_1,param_2);
  *(undefined ***)param_1 = std::bad_array_new_length::vftable;
  return param_1;
}




/* ---- 0x1400088c0 : bad_array_new_length [was: bad_array_new_length] ---- */

/* Library Function - Single Match
    public: __cdecl std::bad_array_new_length::bad_array_new_length(void) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bad_array_new_length * __thiscall
std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  bad_alloc::bad_alloc((bad_alloc *)this,"bad array new length");
  *(undefined ***)this = vftable;
  return this;
}




/* ---- 0x140008900 : exception [was: exception] ---- */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(class std::exception const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  longlong lVar1;
  exception *peVar2;
  
  *(undefined ***)this = vftable;
  peVar2 = this + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *peVar2 = (exception)0x0;
    peVar2 = peVar2 + 1;
  }
  FUN_14000b2d4((longlong *)(param_1 + 8),(longlong *)(this + 8));
  return this;
}




/* ---- 0x140008960 : exception [was: exception] ---- */

/* Library Function - Single Match
    public: __cdecl std::exception::exception(char const * __ptr64 const,int) __ptr64
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

exception * __thiscall std::exception::exception(exception *this,char *param_1,int param_2)

{
  longlong lVar1;
  exception *peVar2;
  
  *(undefined ***)this = vftable;
  peVar2 = this + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *peVar2 = (exception)0x0;
    peVar2 = peVar2 + 1;
  }
  *(char **)(this + 8) = param_1;
  return this;
}




/* ---- 0x140008a50 : ~basic_string<> [was: ~basic_string<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::~basic_string<char,struct std::char_traits<char>,class std::allocator<char> >(void) __ptr64
    public: __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::~basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >(void) __ptr64
    public: __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::~basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~basic_string<>(undefined8 *param_1)

{
  FUN_1400092d0(param_1);
  FUN_1400089b0();
  return;
}




/* ---- 0x140008b50 : FUN_140008b50 [was: FUN_140008b50] ---- */

void FUN_140008b50(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  FUN_14000b354(param_1 + 1);
  return;
}




/* ---- 0x140008b90 : operator[] [was: operator[]] ---- */

/* Library Function - Single Match
    public: char const & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator[](unsigned __int64)const __ptr64
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator[]
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          __uint64 param_1)

{
  char *pcVar1;
  
  pcVar1 = _String_val<struct_std::_Simple_types<char>_>::_Myptr
                     ((_String_val<struct_std::_Simple_types<char>_> *)this);
  return pcVar1 + param_1;
}




/* ---- 0x140008e50 : _Calculate_growth [was: _Calculate_growth] ---- */

/* Library Function - Single Match
    private: static unsigned __int64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(unsigned __int64,unsigned
   __int64,unsigned __int64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

__uint64 __cdecl
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::_Calculate_growth
          (__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  __uint64 *p_Var1;
  ulonglong local_18;
  __uint64 local_10 [2];
  
  local_18 = param_1 | 0xf;
  if ((local_18 <= param_3) && (param_2 <= param_3 - param_2 / 2)) {
    local_10[0] = param_2 + param_2 / 2;
    p_Var1 = _Max_value<unsigned___int64>(&local_18,local_10);
    param_3 = *p_Var1;
  }
  return param_3;
}




/* ---- 0x140009110 : _Myptr [was: _Myptr] ---- */

/* Library Function - Single Match
    public: char const * __ptr64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Myptr(void)const __ptr64
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::_String_val<struct_std::_Simple_types<char>_>::_Myptr
          (_String_val<struct_std::_Simple_types<char>_> *this)

{
  bool bVar1;
  undefined8 local_18;
  
  bVar1 = FUN_1400090e0((longlong)this);
  local_18 = this;
  if (bVar1) {
    local_18 = (_String_val<struct_std::_Simple_types<char>_> *)FUN_140007b30(*(undefined8 *)this);
  }
  return (char *)local_18;
}




/* ---- 0x1400091d0 : FUN_1400091d0 [was: FUN_1400091d0] ---- */

void FUN_1400091d0(void)

{
  bad_array_new_length local_28 [40];
  
  std::bad_array_new_length::bad_array_new_length(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14000b37c((longlong *)local_28,&DAT_140034858);
}




/* ---- 0x1400093c0 : allocate [was: allocate] ---- */

/* Library Function - Single Match
    public: char * __ptr64 __cdecl std::allocator<char>::allocate(unsigned __int64) __ptr64
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

char * __thiscall std::allocator<char>::allocate(allocator<char> *this,__uint64 param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  
  _Var1 = _Get_size_of_n<1>(param_1);
  pcVar2 = (char *)FUN_1400075c0(_Var1);
  return pcVar2;
}




/* ---- 0x140009540 : FUN_140009540 [was: FUN_140009540] ---- */

longlong *
FUN_140009540(longlong *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char local_38;
  int local_34;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20 [2];
  ulonglong local_18;
  undefined8 *local_10;
  
  local_38 = '\0';
  local_10 = FUN_140008780(param_1);
  local_34 = 0;
  while( true ) {
    local_18 = (ulonglong)local_34;
    uVar1 = FUN_140009f90((longlong)param_2);
    if (uVar1 <= local_18) break;
    pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
             operator[](param_2,(longlong)local_34);
    if (*pcVar2 == ' ') {
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               operator[](param_2,(longlong)local_34);
      local_38 = *pcVar2;
    }
    else {
      pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
               operator[](param_2,(longlong)local_34);
      if (*pcVar2 == '?') {
        if (local_38 != '?') {
          local_2c = 0xffffffff;
          FUN_140009ee0(param_1,&local_2c);
          pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                   ::operator[](param_2,(longlong)local_34);
          local_38 = *pcVar2;
        }
      }
      else {
        pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 operator[](param_2,(longlong)local_34);
        local_28 = FUN_140009c60(*pcVar2);
        pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 operator[](param_2,(longlong)(local_34 + 1));
        local_24 = FUN_140009c60(*pcVar2);
        local_20[0] = local_28 * 0x10 + local_24;
        FUN_140009ee0(param_1,local_20);
        pcVar2 = std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
                 operator[](param_2,(longlong)local_34);
        local_38 = *pcVar2;
        local_34 = local_34 + 1;
      }
    }
    local_34 = local_34 + 1;
  }
  return param_1;
}




/* ---- 0x140009c60 : hex_char_to_int [was: FUN_140009c60] ---- */

int FUN_140009c60(char param_1)

{
  int iVar1;
  
  if ((param_1 < '0') || ('9' < param_1)) {
    if ((param_1 < 'A') || ('F' < param_1)) {
      iVar1 = param_1 + -0x57;
    }
    else {
      iVar1 = param_1 + -0x37;
    }
  }
  else {
    iVar1 = param_1 + -0x30;
  }
  return iVar1;
}




/* ---- 0x140009cc0 : strlen_wrapper [was: FUN_140009cc0] ---- */

void FUN_140009cc0(char *param_1)

{
  strlen(param_1);
  return;
}




/* ---- 0x140009e20 : max_size [was: max_size] ---- */

/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::max_size(void)const __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::max_size
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  __uint64 *p_Var1;
  __uint64 local_38;
  __uint64 local_30;
  __uint64 local_28;
  __uint64 local_20;
  __uint64 local_18 [3];
  
  FUN_1400090c0(this);
  local_30 = FUN_140009e00();
  local_38 = 0x10;
  p_Var1 = _Max_value<unsigned___int64>(&local_30,&local_38);
  local_28 = *p_Var1;
  local_20 = local_28 - 1;
  local_18[0] = FUN_1400080f0();
  p_Var1 = _Min_value<unsigned___int64>(local_18,&local_20);
  return *p_Var1;
}




/* ---- 0x140009e90 : FUN_140009e90 [was: FUN_140009e90] ---- */

__uint64 FUN_140009e90(undefined8 param_1)

{
  __uint64 *p_Var1;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  FUN_1400090c0(param_1);
  local_18 = FUN_140009e10();
  local_10[0] = FUN_1400080f0();
  p_Var1 = std::_Min_value<unsigned___int64>(local_10,&local_18);
  return *p_Var1;
}




/* ---- 0x14000a008 : CreateToolhelp32Snapshot [was: CreateToolhelp32Snapshot] ---- */

void CreateToolhelp32Snapshot(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000a008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateToolhelp32Snapshot();
  return;
}




/* ---- 0x14000a00e : Process32First [was: Process32First] ---- */

void Process32First(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000a00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Process32First();
  return;
}




/* ---- 0x14000a014 : Process32Next [was: Process32Next] ---- */

void Process32Next(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014000a014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Process32Next();
  return;
}




/* ---- 0x14000a01c : FUN_14000a01c [was: FUN_14000a01c] ---- */

undefined8 * FUN_14000a01c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}




/* ---- 0x14000a040 : FUN_14000a040 [was: FUN_14000a040] ---- */

undefined8 * FUN_14000a040(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14000b2d4((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}




/* ---- 0x14000a07c : FUN_14000a07c [was: FUN_14000a07c] ---- */

undefined8 * FUN_14000a07c(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_14000b2d4(&local_18,param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}




/* ---- 0x14000a0c4 : FUN_14000a0c4 [was: FUN_14000a0c4] ---- */

undefined8 * FUN_14000a0c4(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14000b2d4((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::logic_error::vftable;
  return param_1;
}




/* ---- 0x14000a114 : FUN_14000a114 [was: FUN_14000a114] ---- */

undefined8 * FUN_14000a114(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_14000b354(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14001b320(param_1);
  }
  return param_1;
}




/* ---- 0x14000a2e0 : thunk_FUN_14001b320 [was: thunk_FUN_14001b320] ---- */

void thunk_FUN_14001b320(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_14003df40,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_14001aa7c(DVar2);
    p_Var4 = FUN_14001abbc();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}




/* ---- 0x14000a478 : __scrt_common_main_seh [was: __scrt_common_main_seh] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    int __cdecl __scrt_common_main_seh(void)
   
   Library: Visual Studio 2019 Release */

int __cdecl __scrt_common_main_seh(void)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  undefined8 in_R9;
  
  uVar11 = (uint)unaff_RBX;
  uVar4 = FUN_14000a800(1);
  if ((char)uVar4 == '\0') {
    FUN_14000ab24(7);
  }
  else {
    bVar2 = false;
    uVar4 = __scrt_acquire_startup_lock();
    uVar11 = (uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)uVar4);
    if (DAT_14003d440 != 1) {
      if (DAT_14003d440 == 0) {
        DAT_14003d440 = 1;
        uVar5 = FUN_140019d88((undefined8 *)&DAT_1400293f0,(undefined8 *)&DAT_140029428);
        if ((int)uVar5 != 0) {
          return 0xff;
        }
        FUN_140019d50((undefined8 *)&DAT_1400293d8,(undefined8 *)&DAT_1400293e8);
        DAT_14003d440 = 2;
      }
      else {
        bVar2 = true;
      }
      __scrt_release_startup_lock((char)uVar4);
      plVar6 = (longlong *)FUN_14000ab08();
      if ((*plVar6 != 0) && (uVar7 = FUN_14000a8c8((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)*plVar6)(0,2);
      }
      puVar8 = (ulonglong *)FUN_14000ab10();
      if ((*puVar8 != 0) && (uVar7 = FUN_14000a8c8((longlong)puVar8), (char)uVar7 != '\0')) {
        FUN_14001a068(*puVar8);
      }
      uVar4 = FID_conflict__get_initial_narrow_environment();
      puVar9 = FUN_14001a120();
      pcVar1 = (char *)*puVar9;
      puVar10 = (uint *)FUN_14001a118();
      uVar4 = FUN_140007270((ulonglong)*puVar10,pcVar1,uVar4,in_R9);
      uVar11 = (uint)uVar4;
      bVar3 = FUN_14000ac78();
      if (bVar3) {
        if (!bVar2) {
          _cexit();
        }
        __scrt_uninitialize_crt(true,'\0');
        return uVar11;
      }
      goto LAB_14000a5e4;
    }
  }
  FUN_14000ab24(7);
LAB_14000a5e4:
  FUN_14001a0a4(uVar11);
                    /* WARNING: Subroutine does not return */
  FUN_14001a05c(uVar11);
}




/* ---- 0x14000a628 : FUN_14000a628 [was: FUN_14000a628] ---- */

void FUN_14000a628(void)

{
  bad_array_new_length local_28 [40];
  
  std::bad_array_new_length::bad_array_new_length(local_28);
                    /* WARNING: Subroutine does not return */
  FUN_14000b37c((longlong *)local_28,&DAT_140034858);
}




/* ---- 0x14000a7c4 : __scrt_acquire_startup_lock [was: __scrt_acquire_startup_lock] ---- */

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

ulonglong __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulonglong uVar4;
  void *pvVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT71(extraout_var,bVar2);
  if ((int)pvVar3 == 0) {
LAB_14000a7f2:
    uVar4 = (ulonglong)pvVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar2 = DAT_14003d448 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar2) {
        pvVar3 = DAT_14003d448;
        pvVar1 = DAT_14003d448;
      }
      DAT_14003d448 = pvVar1;
      UNLOCK();
      if (bVar2) goto LAB_14000a7f2;
    } while (StackBase != pvVar3);
    uVar4 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return uVar4;
}




/* ---- 0x14000a83c : __scrt_initialize_onexit_tables [was: __scrt_initialize_onexit_tables] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_14003d451 == '\0') {
    if (1 < param_1) {
      FUN_14000ab24(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_14003d458 = 0xffffffffffffffff;
      uRam000000014003d460 = 0xffffffffffffffff;
      _DAT_14003d468 = 0xffffffffffffffff;
      _DAT_14003d470 = 0xffffffffffffffff;
      uRam000000014003d478 = 0xffffffffffffffff;
      _DAT_14003d480 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_14003d458);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_14003d470), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_14003d451 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* ---- 0x14000a960 : __scrt_release_startup_lock [was: __scrt_release_startup_lock] ---- */

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_14003d448 = 0;
    UNLOCK();
  }
  return;
}




/* ---- 0x14000a984 : __scrt_uninitialize_crt [was: __scrt_uninitialize_crt] ---- */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_uninitialize_crt(bool param_1,char param_2)

{
  undefined8 in_RAX;
  
  if ((DAT_14003d450 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x14000a9b0 : _onexit [was: _onexit] ---- */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_14003d458 == -1) {
    iVar1 = FUN_14001a5c4(_Func);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14003d458,_Func);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}




/* ---- 0x14000a9ec : atexit [was: atexit] ---- */

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* ---- 0x14000aadc : _guard_check_icall [was: _guard_check_icall] ---- */

void _guard_check_icall(void)

{
  return;
}




/* ---- 0x14000ac70 : thunk_FUN_14000aab4 [was: thunk_FUN_14000aab4] ---- */

undefined8 thunk_FUN_14000aab4(void)

{
  return 0;
}




/* ---- 0x14000b050 : __scrt_is_ucrt_dll_in_use [was: __scrt_is_ucrt_dll_in_use] ---- */

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Library: Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_14003df70 != 0;
}




/* ---- 0x14000b2d4 : FUN_14000b2d4 [was: FUN_14000b2d4] ---- */

void FUN_14000b2d4(longlong *param_1,longlong *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  if (((char)param_1[1] == '\0') || ((char *)*param_1 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    sVar1 = strlen((char *)*param_1);
    pcVar2 = _malloc_base(sVar1 + 1);
    if (pcVar2 != (char *)0x0) {
      FUN_14001a820(pcVar2,sVar1 + 1,*param_1);
      *param_2 = (longlong)pcVar2;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_14001b320((LPVOID)0x0);
  }
  return;
}




/* ---- 0x14000b690 : FrameUnwindToEmptyState [was: FrameUnwindToEmptyState] ---- */

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  __uint64 *p_Var2;
  longlong lVar3;
  longlong local_res20;
  
  p_Var2 = (__uint64 *)
           FUN_14000b728((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,&local_res20);
  iVar1 = FUN_14000c734((longlong)param_3,(ulonglong *)param_2);
  lVar3 = FUN_14000b4cc((longlong)param_3,iVar1);
  if (lVar3 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 4);
  }
  FUN_14000ef20(p_Var2,(ulonglong *)param_2,param_3,iVar1);
  return;
}




/* ---- 0x14000b6f4 : FrameUnwindToEmptyState [was: FrameUnwindToEmptyState] ---- */

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler4::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct FH4::FuncInfo4 * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__FrameHandler4::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,FuncInfo4 *param_3)

{
  __uint64 local_res8 [4];
  
  local_res8[0] = *param_1;
  if (((byte)*param_3 & 1) != 0) {
    local_res8[0] = *(__uint64 *)(*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_14000f0ac((longlong *)local_res8,(ulonglong *)param_2,(longlong)param_3,-1);
  return;
}




/* ---- 0x14000befc : _CreateFrameInfo [was: _CreateFrameInfo] ---- */

/* Library Function - Single Match
    _CreateFrameInfo
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  lVar1 = FUN_14000c540();
  if (param_1 < *(undefined8 **)(lVar1 + 0x58)) {
    lVar1 = FUN_14000c540();
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = FUN_14000c540();
  *(undefined8 **)(lVar1 + 0x58) = param_1;
  return param_1;
}




/* ---- 0x14000bfe4 : __CxxFrameHandler3 [was: __CxxFrameHandler3] ---- */

/* Library Function - Single Match
    __CxxFrameHandler3
   
   Library: Visual Studio 2019 Release */

void __CxxFrameHandler3(int *param_1,__uint64 param_2,ULONG_PTR param_3,
                       _xDISPATCHER_CONTEXT *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  __uint64 local_res8;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8 = param_2;
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  lVar2 = FUN_14000c540();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_14000c540();
  thunk_FUN_14000e1b0(param_1,&local_res8,param_3,param_4,
                      (_s_FuncInfo *)
                      ((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60)),0,0,0);
  return;
}




/* ---- 0x14000c358 : __vcrt_initialize [was: __vcrt_initialize] ---- */

/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2019 Release */

ulonglong __vcrt_initialize(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = __vcrt_initialize_locks();
  if ((char)uVar2 != '\0') {
    uVar1 = __vcrt_initialize_ptd();
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
    }
    uVar2 = __vcrt_uninitialize_locks();
  }
  return uVar2 & 0xffffffffffffff00;
}




/* ---- 0x14000c380 : __vcrt_uninitialize [was: __vcrt_uninitialize] ---- */

/* Library Function - Single Match
    __vcrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __vcrt_uninitialize(char param_1)

{
  undefined8 in_RAX;
  
  if (param_1 == '\0') {
    FUN_14000c670();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x14000c39c : FUN_14000c39c [was: FUN_14000c39c] ---- */

int FUN_14000c39c(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar1 = strcmp((char *)(param_1 + 9),(char *)(param_2 + 9));
  return iVar1;
}




/* ---- 0x14000c42c : _IsExceptionObjectToBeDestroyed [was: _IsExceptionObjectToBeDestroyed] ---- */

/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4 _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14000c540();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}




/* ---- 0x14000c45c : __AdjustPointer [was: __AdjustPointer] ---- */

/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio */

longlong __AdjustPointer(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}




/* ---- 0x14000c55c : FUN_14000c55c [was: FUN_14000c55c] ---- */

LPVOID FUN_14000c55c(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_14003c340 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_14003c340);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_14003c340,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_14003c340,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_14003c340,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      thunk_FUN_14001b320(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}




/* ---- 0x14000c628 : __vcrt_initialize_ptd [was: __vcrt_initialize_ptd] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __vcrt_initialize_ptd
   
   Library: Visual Studio 2019 Release */

uint __vcrt_initialize_ptd(void)

{
  uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(FUN_14000c520);
  DAT_14003c340 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_14003d4c0);
    if (iVar2 != 0) {
      _DAT_14003d538 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    FUN_14000c670();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}




/* ---- 0x14000c670 : FUN_14000c670 [was: FUN_14000c670] ---- */

undefined1 FUN_14000c670(void)

{
  if (DAT_14003c340 != -1) {
    __vcrt_FlsFree(DAT_14003c340);
    DAT_14003c340 = -1;
  }
  return 1;
}




/* ---- 0x14000c6c0 : GetUnwindTryBlock [was: GetUnwindTryBlock] ---- */

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_14000b728((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  return *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1);
}




/* ---- 0x14000c6ec : SetState [was: SetState] ---- */

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetState(unsigned __int64 * __ptr64,struct
   _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __FrameHandler3::SetState(__uint64 *param_1,_s_FuncInfo *param_2,int param_3)

{
  *(int *)((longlong)param_2->dispUnwindHelp + *param_1) = param_3;
  return;
}




/* ---- 0x14000c6f8 : SetUnwindTryBlock [was: SetUnwindTryBlock] ---- */

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::SetUnwindTryBlock
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_14000b728((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,local_res18);
  if (*(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) < param_4) {
    *(int *)((longlong)param_3->dispUnwindHelp + 4 + *plVar1) = param_4;
  }
  return;
}




/* ---- 0x14000df50 : FUN_14000df50 [was: FUN_14000df50] ---- */

undefined8 FUN_14000df50(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0;
  if ((iVar1 != 0) && (lVar2 = FUN_14000bf8c(), lVar2 + iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 4);
    lVar2 = lVar4;
    if (iVar1 != 0) {
      lVar2 = FUN_14000bf8c();
      lVar2 = iVar1 + lVar2;
    }
    if ((*(char *)(lVar2 + 0x10) != '\0') && (((*param_1 & 0x80) == 0 || ((*param_2 & 0x10) == 0))))
    {
      iVar1 = *(int *)(param_1 + 4);
      lVar2 = lVar4;
      if (iVar1 != 0) {
        lVar2 = FUN_14000bf8c();
        lVar2 = lVar2 + iVar1;
      }
      lVar3 = FUN_14000bfa0();
      if (lVar2 != *(int *)(param_2 + 4) + lVar3) {
        iVar1 = *(int *)(param_1 + 4);
        if (iVar1 != 0) {
          lVar4 = FUN_14000bf8c();
          lVar4 = iVar1 + lVar4;
        }
        iVar1 = *(int *)(param_2 + 4);
        lVar2 = FUN_14000bfa0();
        iVar1 = strcmp((char *)(lVar4 + 0x10),(char *)((longlong)iVar1 + 0x10 + lVar2));
        if (iVar1 != 0) {
          return 0;
        }
      }
      if (((*param_2 & 2) != 0) && ((*param_1 & 8) == 0)) {
        return 0;
      }
      if (((*param_3 & 1) != 0) && ((*param_1 & 1) == 0)) {
        return 0;
      }
      if (((*param_3 & 4) != 0) && ((*param_1 & 4) == 0)) {
        return 0;
      }
      if (((*param_3 & 2) != 0) && ((*param_1 & 2) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}




/* ---- 0x14000e070 : FUN_14000e070 [was: FUN_14000e070] ---- */

undefined8 FUN_14000e070(longlong param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  lVar4 = 0;
  if ((iVar1 != 0) && (lVar2 = FUN_14000bf8c(), lVar2 + iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 8);
    lVar2 = lVar4;
    if (iVar1 != 0) {
      lVar2 = FUN_14000bf8c();
      lVar2 = iVar1 + lVar2;
    }
    if ((*(char *)(lVar2 + 0x10) != '\0') &&
       (((*(byte *)(param_1 + 4) & 0x80) == 0 || ((*param_2 & 0x10) == 0)))) {
      iVar1 = *(int *)(param_1 + 8);
      lVar2 = lVar4;
      if (iVar1 != 0) {
        lVar2 = FUN_14000bf8c();
        lVar2 = iVar1 + lVar2;
      }
      lVar3 = FUN_14000bfa0();
      if (lVar2 != *(int *)(param_2 + 4) + lVar3) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 != 0) {
          lVar4 = FUN_14000bf8c();
          lVar4 = iVar1 + lVar4;
        }
        iVar1 = *(int *)(param_2 + 4);
        lVar2 = FUN_14000bfa0();
        iVar1 = strcmp((char *)(lVar4 + 0x10),(char *)((longlong)iVar1 + 0x10 + lVar2));
        if (iVar1 != 0) {
          return 0;
        }
      }
      pbVar5 = (byte *)(param_1 + 4);
      if (((*param_2 & 2) != 0) && ((*pbVar5 & 8) == 0)) {
        return 0;
      }
      if (((*param_3 & 1) != 0) && ((*pbVar5 & 1) == 0)) {
        return 0;
      }
      if (((*param_3 & 4) != 0) && ((*pbVar5 & 4) == 0)) {
        return 0;
      }
      if (((*param_3 & 2) != 0) && ((*(byte *)(param_1 + 4) & 2) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}




/* ---- 0x14000e688 : thunk_FUN_14000e1b0 [was: thunk_FUN_14000e1b0] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
thunk_FUN_14000e1b0(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
                   _s_FuncInfo *param_5,int param_6,longlong param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffd0;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar2 = FUN_14000c540();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*param_1 != -0x1f928c9d)) {
    if (*param_1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar5 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14000e21e;
      }
    }
    else {
      bVar5 = *param_1 == -0x7fffffda;
LAB_14000e21e:
      if (bVar5) goto LAB_14000e235;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
LAB_14000e235:
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    if ((param_5->nTryBlocks == 0) &&
       ((((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521 ||
         (iVar1 = param_5->dispESTypeList, iVar1 == 0)) ||
        (lVar2 = FUN_14000bf8c(), lVar2 + iVar1 == 0)))) {
      if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5->EHFlags & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)))) {
      lVar2 = FUN_14000bfa0();
      pcVar4 = (code *)(lVar2 + iVar1);
      if (pcVar4 != (code *)0x0) {
        uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar7,(uint)param_8));
        return uVar3;
      }
    }
    FUN_14000cfbc(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar6,param_6),param_7);
    return 1;
  }
  if (param_5->maxState == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 1) & 0x20) == 0) {
LAB_14000e2bb:
    __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
  }
  else {
    if (*param_1 == -0x7fffffda) {
      iVar1 = FUN_14000c744((longlong)param_5,(longlong)param_4,*(ulonglong *)(param_4 + 0x20));
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
LAB_14000e3d7:
                    /* WARNING: Subroutine does not return */
        FUN_14001a8a0();
      }
    }
    else {
      if (*param_1 != -0x7fffffd7) goto LAB_14000e2bb;
      iVar1 = param_1[0xe];
      if ((iVar1 < -1) || (param_5->maxState <= iVar1)) goto LAB_14000e3d7;
      param_2 = *(__uint64 **)(param_1 + 10);
    }
    FUN_14000ef20(param_2,(ulonglong *)param_4,param_5,iVar1);
  }
  return 1;
}




/* ---- 0x14000e844 : FUN_14000e844 [was: FUN_14000e844] ---- */

undefined8 * FUN_14000e844(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14000b2d4((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




/* ---- 0x14000e880 : FUN_14000e880 [was: FUN_14000e880] ---- */

undefined8 * FUN_14000e880(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}




/* ---- 0x14000ecd0 : DecompHandler [was: DecompHandler] ---- */

/* Library Function - Single Match
    private: void __cdecl FH4::HandlerMap4::DecompHandler(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall FH4::HandlerMap4::DecompHandler(HandlerMap4 *this)

{
  HandlerMap4 HVar1;
  HandlerMap4 HVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  HandlerMap4 *pHVar8;
  HandlerMap4 *pHVar9;
  
  this[0x18] = (HandlerMap4)0x0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  HVar1 = **(HandlerMap4 **)(this + 8);
  pHVar8 = *(HandlerMap4 **)(this + 8) + 1;
  this[0x18] = HVar1;
  *(HandlerMap4 **)(this + 8) = pHVar8;
  if (((byte)HVar1 & 1) != 0) {
    HVar2 = *pHVar8;
    pHVar8 = pHVar8 + -(longlong)(char)(&DAT_140029f60)[(byte)HVar2 & 0xf];
    *(uint *)(this + 0x1c) = *(uint *)(pHVar8 + -4) >> ((&DAT_140029f70)[(byte)HVar2 & 0xf] & 0x1f);
    *(HandlerMap4 **)(this + 8) = pHVar8;
  }
  if (((byte)HVar1 & 2) != 0) {
    uVar3 = *(undefined4 *)pHVar8;
    pHVar8 = pHVar8 + 4;
    *(HandlerMap4 **)(this + 8) = pHVar8;
    *(undefined4 *)(this + 0x20) = uVar3;
  }
  if (((byte)HVar1 & 4) != 0) {
    HVar2 = *pHVar8;
    pHVar8 = pHVar8 + -(longlong)(char)(&DAT_140029f60)[(byte)HVar2 & 0xf];
    *(uint *)(this + 0x24) = *(uint *)(pHVar8 + -4) >> ((&DAT_140029f70)[(byte)HVar2 & 0xf] & 0x1f);
    *(HandlerMap4 **)(this + 8) = pHVar8;
  }
  pHVar9 = pHVar8 + 4;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)pHVar8;
  bVar6 = (byte)HVar1 & 0x30;
  *(HandlerMap4 **)(this + 8) = pHVar9;
  if (((byte)HVar1 & 8) == 0) {
    if (bVar6 == 0x10) {
      bVar6 = (&DAT_140029f70)[(byte)*pHVar9 & 0xf];
      uVar5 = *(uint *)(((longlong)pHVar9 - (longlong)(char)(&DAT_140029f60)[(byte)*pHVar9 & 0xf]) +
                       -4);
      *(longlong *)(this + 8) =
           (longlong)pHVar9 - (longlong)(char)(&DAT_140029f60)[(byte)*pHVar9 & 0xf];
      *(ulonglong *)(this + 0x30) = (ulonglong)(*(int *)(this + 0x48) + (uVar5 >> (bVar6 & 0x1f)));
      return;
    }
    if (bVar6 != 0x20) {
      return;
    }
    bVar6 = (&DAT_140029f70)[(byte)*pHVar9 & 0xf];
    pHVar9 = pHVar9 + -(longlong)(char)(&DAT_140029f60)[(byte)*pHVar9 & 0xf];
    uVar5 = *(uint *)(pHVar9 + -4);
    *(HandlerMap4 **)(this + 8) = pHVar9;
    *(ulonglong *)(this + 0x30) = (ulonglong)(*(int *)(this + 0x48) + (uVar5 >> (bVar6 & 0x1f)));
    bVar6 = (&DAT_140029f70)[(byte)*pHVar9 & 0xf];
    uVar5 = *(uint *)(((longlong)pHVar9 - (longlong)(char)(&DAT_140029f60)[(byte)*pHVar9 & 0xf]) +
                     -4);
    *(longlong *)(this + 8) =
         (longlong)pHVar9 - (longlong)(char)(&DAT_140029f60)[(byte)*pHVar9 & 0xf];
    uVar7 = (ulonglong)(*(int *)(this + 0x48) + (uVar5 >> (bVar6 & 0x1f)));
  }
  else {
    if (bVar6 == 0x10) {
      iVar4 = *(int *)pHVar9;
      *(HandlerMap4 **)(this + 8) = pHVar8 + 8;
      *(longlong *)(this + 0x30) = (longlong)iVar4;
      return;
    }
    if (bVar6 != 0x20) {
      return;
    }
    iVar4 = *(int *)pHVar9;
    *(HandlerMap4 **)(this + 8) = pHVar8 + 8;
    *(longlong *)(this + 0x30) = (longlong)iVar4;
    uVar7 = (ulonglong)*(int *)(pHVar8 + 8);
    *(HandlerMap4 **)(this + 8) = pHVar8 + 0xc;
  }
  *(ulonglong *)(this + 0x38) = uVar7;
  return;
}




/* ---- 0x14000eef0 : ExFilterRethrowFH4 [was: ExFilterRethrowFH4] ---- */

/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14000ee58(&param_1->ExceptionRecord,(longlong)param_2,param_4);
  if ((int)uVar1 == 0) {
    lVar2 = FUN_14000c540();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return (int)uVar1;
}




/* ---- 0x14000f3b8 : GetHandlerSearchState [was: GetHandlerSearchState] ---- */

/* Library Function - Single Match
    public: static int __cdecl __FrameHandler3::GetHandlerSearchState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
__FrameHandler3::GetHandlerSearchState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  int iVar1;
  int iVar2;
  __uint64 local_res20;
  
  iVar1 = FUN_14000c734((longlong)param_3,(ulonglong *)param_2);
  FUN_14000b728((longlong *)param_1,(ulonglong *)param_2,(longlong)param_3,(longlong *)&local_res20)
  ;
  iVar2 = GetUnwindTryBlock(param_1,param_2,param_3);
  if (iVar2 < iVar1) {
    SetState(&local_res20,param_3,iVar1);
    SetUnwindTryBlock(param_1,param_2,param_3,iVar1);
  }
  else {
    iVar1 = GetUnwindTryBlock(param_1,param_2,param_3);
  }
  return iVar1;
}




/* ---- 0x14000f5c0 : ReadEntry [was: ReadEntry] ---- */

/* Library Function - Single Match
    private: void __cdecl FH4::UWMap4::ReadEntry(unsigned char * __ptr64 * __ptr64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall FH4::UWMap4::ReadEntry(UWMap4 *this,uchar **param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar3 = **param_1 & 0xf;
  pbVar5 = *param_1 + -(longlong)(char)(&DAT_140029f60)[uVar3];
  uVar3 = *(uint *)(pbVar5 + -4) >> ((&DAT_140029f70)[uVar3] & 0x1f);
  *param_1 = pbVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(this + 0x14) = uVar4;
  *(uint *)(this + 0x10) = uVar3 >> 2;
  if ((uVar4 == 1) || (uVar4 == 2)) {
    uVar2 = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(this + 0x18) = uVar2;
    uVar3 = **param_1 & 0xf;
    bVar1 = (&DAT_140029f70)[uVar3];
    pbVar5 = *param_1 + -(longlong)(char)(&DAT_140029f60)[uVar3];
    uVar3 = *(uint *)(pbVar5 + -4);
    *param_1 = pbVar5;
    *(uint *)(this + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined4 *)(this + 0x18) = uVar2;
    return;
  }
  return;
}




/* ---- 0x14000f864 : __except_validate_context_record [was: __except_validate_context_record] ---- */

/* WARNING: Removing unreachable block (ram,0x00014000f877) */
/* WARNING: Removing unreachable block (ram,0x00014000f88d) */
/* WARNING: Removing unreachable block (ram,0x00014000f893) */
/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  return;
}




/* ---- 0x14000f89c : __vcrt_initialize_locks [was: __vcrt_initialize_locks] ---- */

/* Library Function - Single Match
    __vcrt_initialize_locks
   
   Library: Visual Studio 2017 Release */

undefined8 __vcrt_initialize_locks(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_14003d540 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_14003d568 = DAT_14003d568 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




/* ---- 0x14000f8e4 : __vcrt_uninitialize_locks [was: __vcrt_uninitialize_locks] ---- */

/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14003d568;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_14003d540 + uVar1 * 0x28));
    DAT_14003d568 = DAT_14003d568 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x14000fa6c : __vcrt_FlsAlloc [was: __vcrt_FlsAlloc] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000f91c(0,"FlsAlloc",(uint *)&DAT_14002af88,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000faaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}




/* ---- 0x14000fab4 : __vcrt_FlsFree [was: __vcrt_FlsFree] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000f91c(1,"FlsFree",(uint *)&DAT_14002afa0,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000faf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}




/* ---- 0x14000fafc : __vcrt_FlsGetValue [was: __vcrt_FlsGetValue] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsGetValue(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000f91c(2,"FlsGetValue",(uint *)&DAT_14002afb0,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*pFVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000fb3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}




/* ---- 0x14000fb44 : __vcrt_FlsSetValue [was: __vcrt_FlsSetValue] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000f91c(3,"FlsSetValue",(uint *)&DAT_14002afc8,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*pFVar1)();
  }
  return;
}




/* ---- 0x14000fb98 : __vcrt_InitializeCriticalSectionEx [was: __vcrt_InitializeCriticalSectionEx] ---- */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */
/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_14000f91c(4,"InitializeCriticalSectionEx",(uint *)&DAT_14002afe0,
                         (uint *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*pFVar1)(param_1,param_2,param_3);
  }
  return;
}




/* ---- 0x14000fc40 : _CallSettingFrame [was: _CallSettingFrame] ---- */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14000f830();
  (*pcVar1)();
  FUN_14000f860();
  FUN_14000f830();
  return;
}




/* ---- 0x14000fce0 : _CallSettingFrameEncoded [was: _CallSettingFrameEncoded] ---- */

/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14000f830();
  (*pcVar1)(param_3);
  FUN_14000f860();
  FUN_14000f830();
  return;
}




/* ---- 0x140010530 : FUN_140010530 [was: FUN_140010530] ---- */

undefined8 FUN_140010530(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  
  lVar1 = 0;
  lVar5 = 3;
  if (DAT_14003d5b8 == 0) {
    iVar4 = 0x200;
  }
  else {
    iVar4 = 3;
    if (2 < DAT_14003d5b8) goto LAB_14001056d;
  }
  DAT_14003d5b8 = iVar4;
LAB_14001056d:
  DAT_14003d5c0 = _calloc_base((longlong)DAT_14003d5b8,8);
  FUN_14001b320((LPVOID)0x0);
  if (DAT_14003d5c0 == (LPVOID)0x0) {
    DAT_14003d5b8 = 3;
    DAT_14003d5c0 = _calloc_base(3,8);
    FUN_14001b320((LPVOID)0x0);
    if (DAT_14003d5c0 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  puVar3 = &DAT_14003c368;
  puVar6 = &DAT_14003c350;
  lVar2 = lVar1;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_14003d5c0) = puVar6;
    if (*(longlong *)((&DAT_14003d870)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar6 = puVar6 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return 0;
}




/* ---- 0x140010650 : get_stdout_handle [was: FUN_140010650] ---- */

undefined * FUN_140010650(ulonglong param_1)

{
  return &DAT_14003c350 + (param_1 & 0xffffffff) * 0x58;
}




/* ---- 0x140010664 : __acrt_uninitialize_stdio [was: __acrt_uninitialize_stdio] ---- */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_14001b914();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_14003d5c0));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_14003d5c0) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_14001b320(DAT_14003d5c0);
  DAT_14003d5c0 = (LPVOID)0x0;
  return;
}




/* ---- 0x1400106d8 : _fgetc_nolock [was: _fgetc_nolock] ---- */

/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(FILE *param_1)

{
  char **ppcVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  
  if (param_1 == (FILE *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar3 = 0xffffffff;
  }
  else {
    ppcVar1 = &param_1->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      uVar3 = FUN_14001c000(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  return uVar3;
}




/* ---- 0x14001071c : _fgetc_nolock [was: _fgetc_nolock] ---- */

ulonglong _fgetc_nolock(FILE *param_1)

{
  char **ppcVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  
  if (param_1 == (FILE *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar3 = 0xffffffff;
  }
  else {
    ppcVar1 = &param_1->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      uVar3 = FUN_14001c000(param_1);
      return uVar3;
    }
    uVar3 = (ulonglong)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  return uVar3;
}




/* ---- 0x140010890 : FUN_140010890 [was: FUN_140010890] ---- */

bool FUN_140010890(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  bool bVar3;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (uVar1 < 0x401)) ||
       (uVar1 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar3 = true;
    }
    else {
      pvVar2 = _malloc_base(uVar1);
      bVar3 = pvVar2 != (LPVOID)0x0;
      if (bVar3) {
        FUN_14001b320(*(LPVOID *)(param_1 + 0x408));
        *(LPVOID *)(param_1 + 0x408) = pvVar2;
        *(ulonglong *)(param_1 + 0x400) = uVar1;
      }
      FUN_14001b320((LPVOID)0x0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar3 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar3;
}




/* ---- 0x140013000 : validate_stream_is_ansi_if_required [was: validate_stream_is_ansi_if_required] ---- */

/* Library Function - Single Match
    public: static bool __cdecl
   __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(struct _iobuf * __ptr64
   const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(_iobuf *param_1)

{
  bool bVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined *puVar4;
  undefined *puVar5;
  
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    puVar5 = &DAT_14003c5f0;
    if (uVar2 + 2 < 2) {
      puVar4 = &DAT_14003c5f0;
    }
    else {
      puVar4 = (undefined *)
               ((&DAT_14003d870)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    if (puVar4[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_14003d870)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_140013094;
    }
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
    bVar1 = false;
  }
  else {
LAB_140013094:
    bVar1 = true;
  }
  return bVar1;
}




/* ---- 0x14001309c : write_string [was: write_string] ---- */

/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(undefined8 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_140027a20((undefined8 *)*puVar1,(undefined8 *)param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}




/* ---- 0x1400135c8 : parse_floating_point_tmpl [was: parse_floating_point<>] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_348;
  if ((param_3 == (uint *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_140013718(param_1,param_2,(int *)local_328);
    uVar3 = FUN_140014474(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}




/* ---- 0x140013670 : parse_floating_point_tmpl [was: parse_floating_point<>] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double>(struct __crt_locale_pointers * __ptr64 const,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char>
   >,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,float * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double>(struct __crt_locale_pointers *
   __ptr64 const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,double * __ptr64 const)
     12 names - too many to list
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong parse_floating_point<>(_locale_t param_1,longlong *param_2,ulonglong *param_3)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  undefined1 auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStack_348;
  if ((param_3 == (ulonglong *)0x0) || (param_1 == (_locale_t)0x0)) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_140013718(param_1,param_2,(int *)local_328);
    uVar3 = FUN_1400145dc(uVar1,local_328,param_3);
    if (((undefined1 *)param_2[3] != (undefined1 *)0x0) && (param_2[2] == 0)) {
      *(undefined1 *)param_2[3] = 0;
    }
  }
  return uVar3;
}




/* ---- 0x140014474 : FUN_140014474 [was: FUN_140014474] ---- */

ulonglong FUN_140014474(int param_1,floating_point_string *param_2,uint *param_3)

{
  SLD_STATUS SVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  uint *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
              *param_3 & 0x7f800000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 0;
        uVar2 = FUN_140015b1c((uint *)param_2,&local_18);
        return uVar2;
      }
      if (param_1 == 1) {
        local_10 = 0;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return CONCAT44(extraout_var,SVar1);
      }
      if (param_1 == 2) {
        uVar3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
      }
      else if (param_1 == 3) {
        uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7f800000 |
                *param_3 & 0x7f800000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) + 0x7fffffff;
      }
    }
    *param_3 = uVar3;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(uint)(param_2[0x308] != (floating_point_string)0x0) & 0x80000000) +
                     0x7f800000 | *param_3 & 0x7f800000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xffc00000;
  }
  return 0;
}




/* ---- 0x1400145dc : FUN_1400145dc [was: FUN_1400145dc] ---- */

ulonglong FUN_1400145dc(int param_1,floating_point_string *param_2,ulonglong *param_3)

{
  SLD_STATUS SVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  ulonglong *local_18;
  undefined1 local_10;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
              0x7ff0000000000000 | *param_3 & 0x7ff0000000000000 | 1;
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        uVar2 = FUN_140015b1c((uint *)param_2,&local_18);
        return uVar2;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = __crt_strtox::convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return CONCAT44(extraout_var,SVar1);
      }
      if (param_1 == 2) {
        uVar2 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        uVar2 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000) +
                0x7fffffffffffffff;
      }
    }
    *param_3 = uVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = -(ulonglong)(param_2[0x308] != (floating_point_string)0x0) & 0x8000000000000000
          ;
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                     0x8000000000000000) + 0x7ff0000000000000 | *param_3 & 0x7ff0000000000000;
          return 3;
        }
      }
      return 1;
    }
    *param_3 = 0xfff8000000000000;
  }
  return 0;
}




/* ---- 0x1400151d8 : _LocaleUpdate [was: _LocaleUpdate] ---- */

/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = PTR_PTR_14003c5d8._0_4_;
    uVar5 = PTR_PTR_14003c5d8._4_4_;
    uVar6 = PTR_DAT_14003c5e0._0_4_;
    uVar7 = PTR_DAT_14003c5e0._4_4_;
    if (DAT_14003d760 != 0) {
      lVar3 = FUN_14001b0e8();
      *(longlong *)this = lVar3;
      *(longlong *)p_Var1 = *(longlong *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,(longlong *)p_Var1);
      FUN_14001ac4c(*(longlong *)this,(longlong *)(this + 0x10));
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}




/* ---- 0x14001781c : convert_hexadecimal_string_to_floating_type_common [was: convert_hexadecimal_string_to_floating_type_common] ---- */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  floating_point_string *pfVar4;
  bool bVar5;
  int iVar6;
  floating_point_string *pfVar7;
  
  uVar3 = 0;
  pfVar4 = param_1 + 8;
  pfVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) + 8;
  iVar6 = (-(uint)(param_2[8] != (floating_point_value)0x0) & 0x1d) + 0x17 + *(int *)param_1;
  if (pfVar4 != pfVar7) {
    do {
      if ((-(ulonglong)(param_2[8] != (floating_point_value)0x0) & 0x1fffffff000000) + 0xffffff <
          uVar3) break;
      fVar1 = *pfVar4;
      iVar6 = iVar6 + -4;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 * 0x10 + (ulonglong)(byte)fVar1;
    } while (pfVar4 != pfVar7);
  }
  bVar5 = true;
  while ((pfVar4 != pfVar7 && (bVar5 != false))) {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    bVar5 = fVar1 == (floating_point_string)0x0;
  }
  uVar2 = FUN_140015604(uVar3,iVar6,CONCAT71((int7)((ulonglong)pfVar4 >> 8),param_1[0x308]),bVar5,
                        (undefined8 *)param_2);
  return (SLD_STATUS)uVar2;
}




/* ---- 0x1400178d0 : FUN_1400178d0 [was: FUN_1400178d0] ---- */

ulonglong FUN_1400178d0(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar15 = *param_1 - 1;
  uVar16 = (ulonglong)uVar15;
  uVar14 = uVar4 - 1;
  if (uVar14 == 0) {
    uVar4 = param_2[1];
    uVar7 = 0;
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    uVar17 = uVar7;
    if (uVar15 != 0) {
      while (uVar15 != 0xffffffff) {
        lVar8 = uVar16 + 1;
        uVar15 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar15;
        uVar1 = (ulonglong)param_1[lVar8] | uVar7 << 0x20;
        uVar7 = uVar1 % (ulonglong)uVar4;
        uVar17 = (uVar17 << 0x20) + (uVar1 / uVar4 & 0xffffffff);
      }
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVar7;
      param_1[2] = 0;
      *param_1 = 1;
      return uVar17;
    }
    uVar14 = param_1[1];
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    uVar15 = uVar14 % uVar4;
    param_1[1] = uVar15;
    *param_1 = (uint)(uVar15 != 0);
    return (ulonglong)uVar14 / (ulonglong)uVar4;
  }
  if (uVar15 < uVar14) {
    return 0;
  }
  lVar8 = (longlong)(int)uVar15;
  iVar11 = uVar15 - uVar14;
  lVar10 = (longlong)iVar11;
  if (lVar10 <= lVar8) {
    puVar5 = param_1 + lVar8 + 1;
    uVar13 = uVar15;
    do {
      if (*(uint *)((longlong)param_2 + (lVar10 * -4 - (longlong)param_1) + (longlong)puVar5) !=
          *puVar5) {
        if (param_1[(longlong)(int)uVar13 + 1] <= param_2[(longlong)(int)(uVar13 - iVar11) + 1])
        goto LAB_140017a5b;
        break;
      }
      uVar13 = uVar13 - 1;
      lVar8 = lVar8 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar10 <= lVar8);
  }
  iVar11 = iVar11 + 1;
LAB_140017a5b:
  if (iVar11 == 0) {
    return 0;
  }
  uVar14 = param_2[(ulonglong)uVar14 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  uVar13 = 0;
  uVar7 = 0;
  iVar9 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  if (uVar14 == 0) {
    iVar9 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar9 = 0x1f - iVar9;
    local_res8 = 0x20 - (char)iVar9;
    if (iVar9 == 0) goto LAB_140017af2;
  }
  uVar6 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar9 & 0x1f);
  uVar14 = uVar6 | uVar14 << ((byte)iVar9 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_140017af2:
  iVar11 = iVar11 + -1;
  local_228 = 0;
  uVar17 = uVar7;
  if (-1 < iVar11) {
    uVar1 = (ulonglong)uVar14;
    uVar14 = iVar11 + uVar4;
    do {
      uVar15 = uVar13;
      if (uVar14 <= (uint)uVar16) {
        uVar15 = param_1[(ulonglong)uVar14 + 1];
      }
      uVar6 = param_1[(ulonglong)(uVar14 - 2) + 1];
      uVar17 = (ulonglong)uVar6;
      local_238 = CONCAT44(uVar15,param_1[(ulonglong)(uVar14 - 1) + 1]);
      if (iVar9 != 0) {
        local_238 = (ulonglong)(uVar6 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar9 & 0x3f);
        uVar6 = uVar6 << ((byte)iVar9 & 0x1f);
        uVar17 = (ulonglong)uVar6;
        if (2 < uVar14) {
          uVar17 = (ulonglong)(uVar6 | param_1[(ulonglong)(uVar14 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar2 = local_238 / uVar1;
      local_238 = local_238 % uVar1;
      if (0xffffffff < uVar2) {
        lVar8 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        local_238 = local_238 + lVar8 * uVar1;
      }
      if (local_238 < 0x100000000) {
        uVar3 = local_res18 * uVar2;
        do {
          if (uVar3 <= (local_238 << 0x20 | uVar17)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - local_res18;
          local_238 = local_238 + uVar1;
        } while (local_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar16 = uVar7;
        uVar6 = uVar13;
        puVar5 = param_2;
        if (uVar4 != 0) {
          do {
            uVar16 = uVar16 + puVar5[1] * uVar2;
            uVar17 = uVar16 >> 0x20;
            uVar12 = (uint)uVar16;
            uVar16 = uVar17 + 1;
            if (uVar12 <= param_1[(ulonglong)(uVar6 + iVar11) + 1]) {
              uVar16 = uVar17;
            }
            uVar18 = uVar6 + 1;
            param_1[(ulonglong)(uVar6 + iVar11) + 1] =
                 param_1[(ulonglong)(uVar6 + iVar11) + 1] - uVar12;
            uVar6 = uVar18;
            puVar5 = puVar5 + 1;
          } while (uVar18 < uVar4);
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar7;
          uVar15 = uVar13;
          puVar5 = param_2;
          if (uVar4 != 0) {
            do {
              uVar6 = uVar15 + 1;
              uVar16 = uVar16 + param_1[(ulonglong)(uVar15 + iVar11) + 1] + (ulonglong)puVar5[1];
              param_1[(ulonglong)(uVar15 + iVar11) + 1] = (uint)uVar16;
              uVar16 = uVar16 >> 0x20;
              uVar15 = uVar6;
              puVar5 = puVar5 + 1;
            } while (uVar6 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar16 = (ulonglong)(uVar14 - 1);
      }
      uVar15 = (uint)uVar16;
      uVar14 = uVar14 - 1;
      uVar17 = (local_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar11 = iVar11 + -1;
      local_228 = uVar17;
    } while (-1 < iVar11);
  }
  uVar15 = uVar15 + 1;
  uVar4 = uVar15;
  if (uVar15 < *param_1) {
    do {
      uVar16 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar16 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar15;
  while( true ) {
    if (uVar15 == 0) {
      return uVar17;
    }
    uVar15 = uVar15 - 1;
    if (param_1[(ulonglong)uVar15 + 1] != 0) break;
    *param_1 = uVar15;
  }
  return uVar17;
}




/* ---- 0x140017ed8 : process_conversion_specifier [was: process_conversion_specifier] ---- */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *this)

{
  char cVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined7 extraout_var_00;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 0x48);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 == 0) {
        cVar1 = FUN_140017d5c((longlong)(this + 0x18));
        if (CONCAT71(extraout_var,cVar1) == 1) {
          iVar6 = 0;
          goto LAB_140017f61;
        }
        if (CONCAT71(extraout_var,cVar1) != 2) {
          return false;
        }
        iVar6 = 0;
        goto LAB_140017f52;
      }
      if (iVar6 == 1) {
        bVar2 = process_string_specifier(this,1);
        return bVar2;
      }
      if (iVar6 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar6 != 3) {
          if (iVar6 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_140017fdf;
        }
        uVar5 = 10;
      }
      bVar2 = true;
      goto LAB_140017fe2;
    }
    uVar5 = 10;
  }
  else {
    if (iVar6 != 6) {
      if (iVar6 == 7) {
        bVar2 = process_floating_point_specifier(this);
        return bVar2;
      }
      if (iVar6 != 8) {
        if (iVar6 != 9) {
          return false;
        }
        if (this[0x32] ==
            (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0) {
          uVar4 = FUN_140018860((longlong)this,*(undefined8 *)(this + 0x10));
          return (bool)(char)uVar4;
        }
        return true;
      }
      cVar1 = FUN_140017d5c((longlong)(this + 0x18));
      if (CONCAT71(extraout_var_00,cVar1) == 1) {
        iVar6 = 8;
LAB_140017f61:
        uVar3 = FUN_140014e2c((byte *)this,iVar6);
        return (bool)(char)uVar3;
      }
      if (CONCAT71(extraout_var_00,cVar1) != 2) {
        return false;
      }
      iVar6 = 8;
LAB_140017f52:
      uVar3 = FUN_140014fbc(this,iVar6);
      return (bool)(char)uVar3;
    }
    uVar5 = 0x10;
  }
LAB_140017fdf:
  bVar2 = false;
LAB_140017fe2:
  bVar2 = process_integer_specifier(this,uVar5,bVar2);
  return bVar2;
}




/* ---- 0x140017ff4 : process_floating_point_specifier [was: process_floating_point_specifier] ---- */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *this)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 extraout_var_00;
  
  uVar3 = skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>
                    ((stream_input_adapter<char> *)(this + 8),
                     *(__crt_locale_pointers **)(this + 0x70));
  if (uVar3 != 0xffffffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_14001db1c(uVar3,*(FILE **)(this + 8));
  }
  cVar1 = FUN_140017d5c((longlong)(this + 0x18));
  if (CONCAT44(extraout_var_00,CONCAT31(extraout_var,cVar1)) == 4) {
    bVar2 = FUN_140014cec((longlong)this);
  }
  else if (CONCAT44(extraout_var_00,CONCAT31(extraout_var,cVar1)) == 8) {
    bVar2 = FUN_140014d88((longlong)this);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




/* ---- 0x140018058 : process_integer_specifier [was: process_integer_specifier] ---- */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
process_integer_specifier
          (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *this,
          uint param_1,bool param_2)

{
  stream_input_adapter<char> *psVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char local_res8 [8];
  stream_input_adapter<char> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  psVar1 = (stream_input_adapter<char> *)(this + 8);
  uVar3 = skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>
                    (psVar1,*(__crt_locale_pointers **)(this + 0x70));
  if (uVar3 != 0xffffffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_14001db1c(uVar3,*(FILE **)psVar1);
  }
  local_20 = *(undefined8 *)(this + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = psVar1;
  uVar4 = FUN_140014bec(*(undefined4 **)(this + 0x70),(longlong *)&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar2 = 0;
  }
  else if (this[0x32] ==
           (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>)0x0) {
    uVar4 = FUN_140018860((longlong)this,uVar4);
    uVar2 = (undefined1)uVar4;
  }
  else {
    uVar2 = 1;
  }
  return (bool)uVar2;
}




/* ---- 0x140018238 : process_string_specifier [was: process_string_specifier] ---- */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (param_1 == 1) {
    uVar3 = skip_whitespace<class___crt_stdio_input::stream_input_adapter,char>
                      ((stream_input_adapter<char> *)(this + 8),
                       *(__crt_locale_pointers **)(this + 0x70));
    if (uVar3 != 0xffffffff) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
      FUN_14001db1c(uVar3,*(FILE **)(this + 8));
    }
  }
  cVar1 = FUN_140017d5c((longlong)(this + 0x18));
  if (CONCAT71(extraout_var,cVar1) == 1) {
    uVar4 = FUN_140014e2c((byte *)this,param_1);
    uVar2 = (undefined1)uVar4;
  }
  else if (CONCAT71(extraout_var,cVar1) == 2) {
    uVar4 = FUN_140014fbc(this,param_1);
    uVar2 = (undefined1)uVar4;
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}




/* ---- 0x1400187cc : write_character [was: write_character] ---- */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::write_character(wchar_t __unaligned * __ptr64
   const,unsigned __int64,wchar_t __unaligned * __ptr64 & __ptr64,unsigned __int64 & __ptr64,char)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_>::
write_character(input_processor<char,class___crt_stdio_input::stream_input_adapter<char>_> *this,
               wchar_t *param_1,__uint64 param_2,wchar_t **param_3,__uint64 *param_4,char param_5)

{
  char cVar1;
  ushort *puVar2;
  ulonglong uVar3;
  ushort local_res8 [4];
  undefined1 uStack0000000000000031;
  
  cVar1 = param_5;
  uStack0000000000000031 = 0;
  puVar2 = __pctype_func();
  if ((short)puVar2[(byte)cVar1] < 0) {
    uVar3 = _fgetc_nolock(*(FILE **)(this + 8));
    if ((int)uVar3 != -1) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
    }
    uStack0000000000000031 = (undefined1)uVar3;
  }
  local_res8[0] = 0x3f;
  FUN_14001d2f0(local_res8,(byte *)&param_5,(longlong)*(int *)(**(longlong **)(this + 0x70) + 8),
                (undefined4 *)*(longlong **)(this + 0x70));
  **param_3 = (short)cVar1;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}




/* ---- 0x1400188d4 : FID_conflict___stdio_common_vfwscanf [was: FID_conflict:__stdio_common_vfwscanf] ---- */

/* Library Function - Multiple Matches With Different Base Names
    __stdio_common_vfscanf
    __stdio_common_vfwscanf
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
FID_conflict___stdio_common_vfwscanf
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  __acrt_ptd *p_Var2;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  undefined8 *local_10;
  
  local_48 = param_5;
  local_res8 = param_4;
  local_res10 = param_2;
  local_res18 = param_1;
  local_res20 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar1 = 0xffffffff;
  }
  else {
    local_30 = &local_res8;
    local_28 = &local_res10;
    local_20 = &local_res18;
    local_18 = &local_res20;
    local_10 = &local_48;
    local_40 = param_2;
    local_38 = param_2;
    uVar1 = operator()<>(&param_5,&local_38,&local_30,&local_40);
  }
  return uVar1;
}




/* ---- 0x140018960 : memcpy_s [was: memcpy_s] ---- */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  __acrt_ptd *p_Var1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_14001897d:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_140018986:
      p_Var1 = FUN_14001abbc();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_140027a20(_Dst,_Src,_MaxCount);
        goto LAB_14001897d;
      }
      FUN_1400280c0(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_140018986;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      p_Var1 = FUN_14001abbc();
      eVar2 = 0x22;
    }
    *(errno_t *)p_Var1 = eVar2;
    FUN_14001925c();
  }
  return eVar2;
}




/* ---- 0x14001927c : _invoke_watson [was: _invoke_watson] ---- */

/* Library Function - Single Match
    _invoke_watson
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1400192aa;
  FUN_140018f90(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x1400192b0;
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001400192bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000417);
  return;
}




/* ---- 0x140019360 : _set_new_handler [was: _set_new_handler] ---- */

/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_14003c2c0 & 0x3f;
  uVar3 = DAT_14003c2c0 ^ DAT_14003d5d8;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_14003d5d8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14003c2c0;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}




/* ---- 0x1400193d0 : _malloc_base [was: _malloc_base] ---- */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_14003df40,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_14001a240();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1400192d0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14001abbc();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* ---- 0x1400193e0 : thunk_FUN_14001b320 [was: thunk_FUN_14001b320] ---- */

void thunk_FUN_14001b320(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_14003df40,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_14001aa7c(DVar2);
    p_Var4 = FUN_14001abbc();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}




/* ---- 0x1400197b4 : __acrt_allocate_buffer_for_argv [was: __acrt_allocate_buffer_for_argv] ---- */

/* Library Function - Single Match
    __acrt_allocate_buffer_for_argv
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_14001b320((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}




/* ---- 0x140019814 : FUN_140019814 [was: FUN_140019814] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140019814(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  __acrt_ptd *p_Var3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    p_Var3 = FUN_14001abbc();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_14001925c();
    return 0x16;
  }
  __acrt_initialize_multibyte();
  FUN_14001e8bc((HMODULE)0x0,&DAT_14003d5f0,0x104);
  _DAT_14003d730 = &DAT_14003d5f0;
  if ((DAT_14003d750 == (char *)0x0) || (pcVar6 = DAT_14003d750, *DAT_14003d750 == '\0')) {
    pcVar6 = &DAT_14003d5f0;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_1400195f4(pcVar6,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar5 = local_res18;
  plVar4 = __acrt_allocate_buffer_for_argv(local_res18,local_res20,1);
  if (plVar4 == (longlong *)0x0) {
    p_Var3 = FUN_14001abbc();
    uVar7 = 0xc;
    *(undefined4 *)p_Var3 = 0xc;
  }
  else {
    FUN_1400195f4(pcVar6,plVar4,(char *)(plVar4 + uVar5),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      uVar5 = thunk_FUN_14001e078(plVar4,&local_res10);
      plVar2 = local_res10;
      if ((int)uVar5 != 0) {
        FUN_14001b320(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_14001b320(plVar4);
        return uVar5 & 0xffffffff;
      }
      _DAT_14003d738 = 0;
      lVar1 = *local_res10;
      uVar5 = uVar7;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        uVar5 = uVar5 + 1;
        _DAT_14003d738 = (int)uVar5;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_14003d740 = plVar2;
      FUN_14001b320((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_140019979;
    }
    _DAT_14003d738 = (int)local_res18 + -1;
    DAT_14003d740 = plVar4;
  }
  plVar4 = (longlong *)0x0;
LAB_140019979:
  FUN_14001b320(plVar4);
  return uVar7;
}




/* ---- 0x140019a08 : FUN_140019a08 [was: FUN_140019a08] ---- */

undefined8 * FUN_140019a08(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar4 = param_1;
  while (cVar6 != '\0') {
    lVar1 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (pcVar4[lVar7] != '\0');
    pcVar4 = pcVar4 + lVar2 + 2;
    lVar7 = lVar1;
    cVar6 = *pcVar4;
  }
  puVar3 = _calloc_base(lVar7 + 1,8);
  puVar9 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_140019a6b:
    FUN_14001b320((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != '\0');
      uVar8 = lVar1 + 2;
      if (*param_1 != '=') {
        pcVar4 = _calloc_base(uVar8,1);
        if (pcVar4 == (char *)0x0) {
          free_environment<>(puVar3);
          FUN_14001b320((LPVOID)0x0);
          goto LAB_140019a6b;
        }
        uVar5 = FUN_14001a820(pcVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *puVar9 = pcVar4;
        puVar9 = puVar9 + 1;
        FUN_14001b320((LPVOID)0x0);
      }
    }
    FUN_14001b320((LPVOID)0x0);
  }
  return puVar3;
}




/* ---- 0x140019b1c : free_environment_tmpl [was: free_environment<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_14001b320(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_14001b320(param_1);
  }
  return;
}




/* ---- 0x140019b60 : FUN_140019b60 [was: FUN_140019b60] ---- */

undefined8 FUN_140019b60(void)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14003d700;
  if (DAT_14003d700 == (longlong *)0x0) {
LAB_140019b89:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_14001f644(0,0,*plVar4,0xffffffff);
      if (iVar1 == 0) goto LAB_140019b89;
      pbVar3 = _calloc_base((longlong)iVar1,1);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)0x0;
LAB_140019c34:
        FUN_14001b320(pbVar3);
        goto LAB_140019b89;
      }
      iVar1 = FUN_14001f644(0,0,*plVar4,0xffffffff);
      if (iVar1 == 0) goto LAB_140019c34;
      thunk_FUN_14001f834(pbVar3,0);
      FUN_14001b320((LPVOID)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}




/* ---- 0x140019c40 : uninitialize_environment_internal_tmpl [was: uninitialize_environment_internal<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_14003d710) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}




/* ---- 0x140019c5c : uninitialize_environment_internal_tmpl [was: uninitialize_environment_internal<>] ---- */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl uninitialize_environment_internal<char>(char * __ptr64 * __ptr64 & __ptr64)
    void __cdecl uninitialize_environment_internal<wchar_t>(wchar_t * __ptr64 * __ptr64 & __ptr64)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void uninitialize_environment_internal<>(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_14003d708) {
    free_environment<>((undefined8 *)*param_1);
  }
  return;
}




/* ---- 0x140019cb4 : FUN_140019cb4 [was: FUN_140019cb4] ---- */

void FUN_140019cb4(void)

{
  uninitialize_environment_internal<>(&DAT_14003d6f8);
  uninitialize_environment_internal<>(&DAT_14003d700);
  free_environment<>(DAT_14003d710);
  free_environment<>(DAT_14003d708);
  return;
}




/* ---- 0x140019cf8 : FID_conflict__get_initial_narrow_environment [was: FID_conflict:_get_initial_narrow_environment] ---- */

/* Library Function - Multiple Matches With Different Base Names
    _get_initial_narrow_environment
    _get_initial_wide_environment
   
   Library: Visual Studio 2019 Release */

void FID_conflict__get_initial_narrow_environment(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_14003d710;
  if (((DAT_14003d710 == 0) && (lVar1 = DAT_14003d6f8, DAT_14003d6f8 == 0)) &&
     ((DAT_14003d700 == 0 ||
      ((uVar2 = FUN_140019994(), lVar1 = DAT_14003d6f8, (int)uVar2 != 0 &&
       (uVar2 = FUN_140019b60(), lVar1 = DAT_14003d6f8, (int)uVar2 != 0)))))) {
    lVar1 = 0;
  }
  DAT_14003d710 = lVar1;
  return;
}




/* ---- 0x140019d48 : thunk_FUN_140019994 [was: thunk_FUN_140019994] ---- */

undefined8 thunk_FUN_140019994(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  if (DAT_14003d6f8 == (undefined8 *)0x0) {
    __acrt_initialize_multibyte();
    pcVar2 = FUN_14001f724();
    if (pcVar2 == (char *)0x0) {
      FUN_14001b320((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
    else {
      puVar4 = FUN_140019a08(pcVar2);
      puVar1 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        uVar3 = 0xffffffff;
        puVar4 = DAT_14003d6f8;
        puVar1 = DAT_14003d710;
      }
      DAT_14003d710 = puVar1;
      DAT_14003d6f8 = puVar4;
      FUN_14001b320((LPVOID)0x0);
      FUN_14001b320(pcVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




/* ---- 0x14001a04c : _cexit [was: _cexit] ---- */

/* Library Function - Single Match
    _cexit
   
   Library: Visual Studio 2019 Release */

void __cdecl _cexit(void)

{
  FUN_140019ebc(0,0,1);
  return;
}




/* ---- 0x14001a0b0 : _set_fmode [was: _set_fmode] ---- */

/* Library Function - Single Match
    _set_fmode
   
   Library: Visual Studio 2012 Release */

errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  __acrt_ptd *p_Var2;
  
  if (((_Mode - 0x4000U & 0xffff3fff) == 0) && (_Mode != 0xc000)) {
    LOCK();
    UNLOCK();
    eVar1 = 0;
    DAT_14003df30 = _Mode;
  }
  else {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    eVar1 = 0x16;
  }
  return eVar1;
}




/* ---- 0x14001a1a4 : __acrt_uninitialize_locale [was: __acrt_uninitialize_locale] ---- */

/* Library Function - Single Match
    __acrt_uninitialize_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_uninitialize_locale(void)

{
  <lambda_3e16ef9562a7dcce91392c22ab16ea36> local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  __crt_seh_guarded_call<void>::
  operator()<class_<lambda_410d79af7f07d98d83a3f525b3859a53>,class_<lambda_3e16ef9562a7dcce91392c22ab16ea36>&___ptr64,class_<lambda_38119f0e861e05405d8a144b9b982f0a>_>
            ((__crt_seh_guarded_call<void> *)local_res8,
             (<lambda_410d79af7f07d98d83a3f525b3859a53> *)local_res18,local_res8,
             (<lambda_38119f0e861e05405d8a144b9b982f0a> *)local_res10);
  return;
}




/* ---- 0x14001a1d4 : _configthreadlocale [was: _configthreadlocale] ---- */

/* Library Function - Single Match
    _configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _configthreadlocale(int _Flag)

{
  uint uVar1;
  longlong lVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  
  lVar2 = FUN_14001b0e8();
  uVar1 = *(uint *)(lVar2 + 0x3a8);
  if (_Flag == -1) {
    DAT_14003cc20 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        p_Var3 = FUN_14001abbc();
        *(undefined4 *)p_Var3 = 0x16;
        FUN_14001925c();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(lVar2 + 0x3a8) = uVar4;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}




/* ---- 0x14001a618 : _initialize_onexit_table [was: _initialize_onexit_table] ---- */

/* Library Function - Single Match
    _initialize_onexit_table
   
   Library: Visual Studio 2019 Release */

undefined8 _initialize_onexit_table(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14003c2c0;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_14003c2c0;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}




/* ---- 0x14001a640 : _register_onexit_function [was: _register_onexit_function] ---- */

/* Library Function - Single Match
    _register_onexit_function
   
   Library: Visual Studio 2019 Release */

void _register_onexit_function(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  operator()<>(local_res18,local_28,&local_20,local_res20);
  return;
}




/* ---- 0x14001a7c8 : __acrt_uninitialize [was: __acrt_uninitialize] ---- */

/* Library Function - Single Match
    __acrt_uninitialize
   
   Library: Visual Studio 2019 Release */

undefined8 __acrt_uninitialize(bool param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1) {
    if (DAT_14003d5c0 != 0) {
      iVar1 = common_flush_all(true);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_140020a08(0x14002bf10,0x14002c010);
  return uVar2;
}




/* ---- 0x14001a900 : _calloc_base [was: _calloc_base] ---- */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_14003df40,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_14001a240();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1400192d0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14001abbc();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* ---- 0x14001a910 : wcsncmp [was: wcsncmp] ---- */

/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount == 0) {
    return 0;
  }
  for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
    _Str2 = _Str2 + 1;
  }
  return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
}




/* ---- 0x14001a944 : __pctype_func [was: __pctype_func] ---- */

/* Library Function - Single Match
    __pctype_func
   
   Library: Visual Studio 2019 Release */

ushort * __cdecl __pctype_func(void)

{
  longlong lVar1;
  undefined8 *local_res8 [4];
  
  lVar1 = FUN_14001b0e8();
  local_res8[0] = *(undefined8 **)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,(longlong *)local_res8);
  return (ushort *)*local_res8[0];
}




/* ---- 0x14001a974 : _isctype_l [was: _isctype_l] ---- */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _isctype_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined1 auStackY_88 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  longlong local_40;
  longlong *local_38 [2];
  char local_28;
  ushort local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_14003c2c0 ^ (ulonglong)auStackY_88;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,(__crt_locale_pointers *)_Locale);
  if (_C + 1U < 0x101) {
    local_20[0] = *(ushort *)(*local_38[0] + (longlong)_C * 2);
  }
  else {
    if (*(short *)(*local_38[0] + (ulonglong)(_C >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      local_46 = 0;
      local_48 = (char)((uint)_C >> 8);
      local_47 = (char)_C;
    }
    else {
      uVar2 = 1;
      local_47 = 0;
      local_48 = (char)_C;
    }
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    BVar1 = FUN_1400202d0((__crt_locale_pointers *)local_38,1,&local_48,uVar2,local_20,
                          *(uint *)((longlong)local_38[0] + 0xc),1);
    if (BVar1 == 0) {
      if (local_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  return (uint)local_20[0] & _Type;
}




/* ---- 0x14001abe0 : __acrt_update_locale_info [was: __acrt_update_locale_info] ---- */

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_14003d7a8) && ((DAT_14003cc20 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}




/* ---- 0x14001ade0 : construct_ptd_array [was: construct_ptd_array] ---- */

/* Library Function - Single Match
    void __cdecl construct_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl construct_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  __acrt_ptd *local_30;
  undefined8 *local_28;
  __acrt_ptd **local_20;
  __acrt_ptd **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_14003d7a8;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined **)param_1 = &DAT_14002bd70;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined **)(param_1 + 0x88) = &DAT_14003c640;
  *(undefined2 *)(param_1 + 0xbc) = 0x43;
  *(undefined2 *)(param_1 + 0x1c2) = 0x43;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  local_30 = param_1;
  operator()<>(local_res10,local_res20,&local_20,local_res18);
  operator()<>(local_res10,local_38 + 1,&local_18,local_38);
  return;
}




/* ---- 0x14001aed0 : destroy_ptd_array [was: destroy_ptd_array] ---- */

/* Library Function - Single Match
    void __cdecl destroy_ptd_array(struct __acrt_ptd * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl destroy_ptd_array(__acrt_ptd *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  __acrt_ptd *local_20;
  __acrt_ptd **local_18;
  __acrt_ptd **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if (*(undefined **)param_1 != &DAT_14002bd70) {
    FUN_14001b320(*(undefined **)param_1);
  }
  FUN_14001b320(*(LPVOID *)(local_20 + 0x70));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x58));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x60));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x68));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x48));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x50));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x78));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x80));
  FUN_14001b320(*(LPVOID *)(local_20 + 0x3c0));
  operator()<>(local_res10,local_res20,&local_18,local_res18);
  operator()<>(local_res10,local_28 + 1,&local_10,local_28);
  return;
}




/* ---- 0x14001afc8 : FUN_14001afc8 [was: FUN_14001afc8] ---- */

__acrt_ptd * FUN_14001afc8(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_14003c478,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_14003c478,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_14003c478,(PVOID)0x0);
        FUN_14001b320(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_14001b320((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_14003c478,(PVOID)0x0);
    FUN_14001b320((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}




/* ---- 0x14001b080 : replace_current_thread_locale_nolock [was: replace_current_thread_locale_nolock] ---- */

/* Library Function - Single Match
    void __cdecl replace_current_thread_locale_nolock(struct __acrt_ptd * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_14003d7a8) && (ppuVar1 != &PTR_DAT_14003c480)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      __acrt_free_locale(ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
    __acrt_add_locale_ref((longlong)param_2);
  }
  return;
}




/* ---- 0x14001b278 : FUN_14001b278 [was: FUN_14001b278] ---- */

undefined4 FUN_14001b278(void)

{
  BOOL in_EAX;
  
  if (DAT_14003c478 != 0xffffffff) {
    in_EAX = FlsFree(DAT_14003c478);
    DAT_14003c478 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}




/* ---- 0x14001b2a0 : _calloc_base [was: _calloc_base] ---- */

/* Library Function - Single Match
    _calloc_base
   
   Library: Visual Studio 2019 Release */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_14003df40,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_14001a240();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1400192d0(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14001abbc();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* ---- 0x14001b320 : FUN_14001b320 [was: FUN_14001b320] ---- */

void FUN_14001b320(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_14003df40,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_14001aa7c(DVar2);
    p_Var4 = FUN_14001abbc();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}




/* ---- 0x14001b378 : FUN_14001b378 [was: FUN_14001b378] ---- */

FARPROC FUN_14001b378(void)

{
  FARPROC pFVar1;
  
  if (DAT_140041008 == (FARPROC)0xffffffffffffffff) {
    return (FARPROC)0x0;
  }
  if (DAT_140041008 != (FARPROC)0x0) {
    return DAT_140041008;
  }
  pFVar1 = FUN_14001b3b0(1,"CompareStringEx",(uint *)&DAT_14002d400,(uint *)"CompareStringEx");
  return pFVar1;
}




/* ---- 0x14001b6d0 : FlsAlloc [was: FlsAlloc] ---- */

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}




/* ---- 0x14001b6d8 : FlsFree [was: FlsFree] ---- */

BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}




/* ---- 0x14001b6e0 : FlsGetValue [was: FlsGetValue] ---- */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001b6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}




/* ---- 0x14001b6f4 : FlsSetValue [was: FlsSetValue] ---- */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}




/* ---- 0x14001b6fc : InitializeCriticalSectionEx [was: InitializeCriticalSectionEx] ---- */

BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001b6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}




/* ---- 0x14001b8d0 : __acrt_uninitialize_winapi_thunks [was: __acrt_uninitialize_winapi_thunks] ---- */

/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_14003d7b0;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_14003d868;
    } while (puVar1 != (undefined8 *)&DAT_14003d868);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x14001bb48 : common_flush_all [was: common_flush_all] ---- */

/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_14001ba64(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}




/* ---- 0x14001bd08 : common_flush_all [was: common_flush_all] ---- */

int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}




/* ---- 0x14001bd10 : __acrt_stdio_free_buffer_nolock [was: __acrt_stdio_free_buffer_nolock] ---- */

/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_14001b320((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}




/* ---- 0x14001bf5c : __acrt_initialize_lowio [was: __acrt_initialize_lowio] ---- */

/* Library Function - Single Match
    __acrt_initialize_lowio
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __acrt_initialize_lowio(void)

{
  longlong lVar1;
  bool bVar2;
  
  __acrt_lock(7);
  lVar1 = __acrt_lowio_ensure_fh_exists(0);
  bVar2 = (int)lVar1 == 0;
  if (bVar2) {
    FUN_14001bd54();
    FUN_14001be54();
  }
  __acrt_unlock(7);
  return bVar2;
}




/* ---- 0x14001bf98 : __acrt_uninitialize_lowio [was: __acrt_uninitialize_lowio] ---- */

/* Library Function - Single Match
    __acrt_uninitialize_lowio
   
   Library: Visual Studio 2019 Release */

undefined1 __acrt_uninitialize_lowio(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_14003d870 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      __acrt_lowio_destroy_handle_array(*(LPCRITICAL_SECTION *)((longlong)&DAT_14003d870 + uVar1));
      *(undefined8 *)((longlong)&DAT_14003d870 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}




/* ---- 0x14001bfd8 : _fileno [was: _fileno] ---- */

/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}




/* ---- 0x14001c170 : _malloc_base [was: _malloc_base] ---- */

/* Library Function - Single Match
    _malloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _malloc_base(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_14003df40,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_14001a240();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_1400192d0(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_14001abbc();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}




/* ---- 0x14001cbc8 : should_round_up [was: should_round_up] ---- */

/* Library Function - Single Match
    bool __cdecl should_round_up(double const * __ptr64 const,unsigned __int64,short,enum
   __acrt_rounding_mode)
   
   Library: Visual Studio 2019 Release */

bool __cdecl
should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = (byte)param_3;
  uVar2 = (ushort)(((ulonglong)*param_1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
  if (param_4 == 0) {
    return 7 < uVar2;
  }
  iVar3 = fegetround();
  if (iVar3 == 0) {
    dVar1 = *param_1;
    uVar2 = (ushort)(((ulonglong)dVar1 & param_2 & 0xfffffffffffff) >> (bVar4 & 0x3f));
    if (8 < uVar2) {
      return true;
    }
    if (7 < uVar2) {
      if (((1L << (bVar4 & 0x3f)) - 1U & (ulonglong)dVar1 & 0xfffffffffffff) == 0) {
        if (param_3 == 0x30) {
          bVar4 = ((ulonglong)dVar1 & 0x7ff0000000000000) != 0;
        }
        else {
          bVar4 = (byte)(((ulonglong)dVar1 >> 4 & param_2 & 0xffffffffffff) >> (bVar4 & 0x3f));
        }
        return (bool)(bVar4 & 1);
      }
      return true;
    }
  }
  else if (iVar3 == 0x200) {
    if ((uVar2 != 0) && (-1 < (longlong)*param_1)) {
      return true;
    }
  }
  else {
    if (iVar3 != 0x100) {
      return false;
    }
    if ((uVar2 != 0) && ((longlong)*param_1 < 0)) {
      return true;
    }
  }
  return false;
}




/* ---- 0x14001d9c0 : isspace [was: isspace] ---- */

/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_14003d760 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_14003c480 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_14001b0e8();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,8,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}




/* ---- 0x14001dc40 : fegetround [was: fegetround] ---- */

/* Library Function - Single Match
    fegetround
   
   Library: Visual Studio 2019 Release */

void fegetround(void)

{
  uint uVar1;
  
  uVar1 = FUN_140024030();
  FUN_140024020(uVar1);
  return;
}




/* ---- 0x14001dc60 : __acrt_initialize_locks [was: __acrt_initialize_locks] ---- */

/* Library Function - Single Match
    __acrt_initialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_initialize_locks(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_14003dcb0 + uVar2 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar2 = __acrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_14003df08 = DAT_14003df08 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xf);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}




/* ---- 0x14001dca8 : __acrt_lock [was: __acrt_lock] ---- */

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001dcba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_14003dcb0 + (longlong)param_1 * 0x28);
  return;
}




/* ---- 0x14001dcc4 : __acrt_uninitialize_locks [was: __acrt_uninitialize_locks] ---- */

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14003df08;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_14003dcb0 + uVar1 * 0x28));
    DAT_14003df08 = DAT_14003df08 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




/* ---- 0x14001dcfc : __acrt_unlock [was: __acrt_unlock] ---- */

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001dd0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_14003dcb0 + (longlong)param_1 * 0x28);
  return;
}




/* ---- 0x14001dd2c : FUN_14001dd2c [was: FUN_14001dd2c] ---- */

uint FUN_14001dd2c(char *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_14001f5b4(param_4,9);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar6 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_14001f5b4(param_4,9);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_14001ab4c(DVar2);
      p_Var4 = FUN_14001abbc();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      bVar7 = pvVar3 != (LPVOID)0x0;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




/* ---- 0x14001decc : FUN_14001decc [was: FUN_14001decc] ---- */

uint FUN_14001decc(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_14001f644(param_4,0,param_1,0xffffffff);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = _malloc_base(uVar6);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_14001f644(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_14001ab4c(DVar2);
      p_Var4 = FUN_14001abbc();
      return *(uint *)p_Var4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_14001b320(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = _malloc_base(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      bVar7 = pvVar3 != (LPVOID)0x0;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}




/* ---- 0x14001e078 : FUN_14001e078 [was: FUN_14001e078] ---- */

ulonglong FUN_14001e078(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  byte *pbVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar3 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar7 = plStack_50, plVar8 = local_58, pbVar4 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar4 = FUN_140024890(pbVar4,(byte *)&local_res10);
      if (pbVar4 == (byte *)0x0) {
        uVar10 = FUN_14001e2b4((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar8 = local_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_14001b320((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_14001e1c7;
        }
      }
      else {
        uVar10 = FUN_14001e438((uchar *)*param_1,pbVar4,(longlong *)&local_58);
        plVar8 = local_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_14001b320((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_14001e1c7;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar10 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    local_res18 = 0;
    for (plVar11 = local_58; plVar11 != plStack_50; plVar11 = plVar11 + 1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar11 + lVar6) != '\0');
      local_res18 = local_res18 + 1 + lVar6;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar10,local_res18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_14001b320((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_14001b320((LPVOID)*plVar11);
      }
      uVar3 = 0xffffffff;
LAB_14001e1c7:
      FUN_14001b320(plVar8);
    }
    else {
      pcVar9 = (char *)((longlong)pvVar5 + uVar10 * 8);
      local_res20 = pcVar9;
      if (plVar8 != plVar7) {
        local_res10 = (longlong)pvVar5 - (longlong)plVar8;
        plVar11 = plVar8;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar11 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_1400246c0(pcVar9,(longlong)(local_res20 + (local_res18 - (longlong)pcVar9)),
                                *plVar11,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar11) = pcVar9;
          pcVar9 = pcVar9 + lVar12;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      *param_2 = pvVar5;
      FUN_14001b320((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_14001b320((LPVOID)*plVar11);
      }
      FUN_14001b320(plVar8);
      uVar3 = 0;
    }
  }
  return uVar3;
}




/* ---- 0x14001e2b4 : FUN_14001e2b4 [was: FUN_14001e2b4] ---- */

undefined8 FUN_14001e2b4(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar5;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = _calloc_base(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_1400246c0(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_1400246c0(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_14001b320((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_14001e40a;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_14001b320((LPVOID)0x0);
          goto LAB_14001e40a;
        }
        FUN_14001b320((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_14001b320(pcVar2);
  }
  else {
LAB_14001e40a:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_14001b320((LPVOID)0x0);
  return uVar7;
}




/* ---- 0x14001e798 : thunk_FUN_14001e078 [was: thunk_FUN_14001e078] ---- */

ulonglong thunk_FUN_14001e078(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  ulonglong uVar3;
  byte *pbVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (undefined8 *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001925c();
    uVar3 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar7 = plStack_50, plVar8 = plStack_58, pbVar4 != (byte *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      pbVar4 = FUN_140024890(pbVar4,(byte *)&lStackX_10);
      if (pbVar4 == (byte *)0x0) {
        uVar10 = FUN_14001e2b4((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar8 = plStack_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_14001b320((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_14001e1c7;
        }
      }
      else {
        uVar10 = FUN_14001e438((uchar *)*param_1,pbVar4,(longlong *)&plStack_58);
        plVar8 = plStack_58;
        uVar3 = uVar10 & 0xffffffff;
        if ((int)uVar10 != 0) {
          plVar7 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_14001b320((LPVOID)*plVar7);
              plVar7 = plVar7 + 1;
            } while (plVar7 != plStack_50);
          }
          goto LAB_14001e1c7;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar10 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    uStackX_18 = 0;
    for (plVar11 = plStack_58; plVar11 != plStack_50; plVar11 = plVar11 + 1) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(*plVar11 + lVar6) != '\0');
      uStackX_18 = uStackX_18 + 1 + lVar6;
    }
    pvVar5 = __acrt_allocate_buffer_for_argv(uVar10,uStackX_18,1);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_14001b320((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_14001b320((LPVOID)*plVar11);
      }
      uVar3 = 0xffffffff;
LAB_14001e1c7:
      FUN_14001b320(plVar8);
    }
    else {
      pcVar9 = (char *)((longlong)pvVar5 + uVar10 * 8);
      pcStackX_20 = pcVar9;
      if (plVar8 != plVar7) {
        lStackX_10 = (longlong)pvVar5 - (longlong)plVar8;
        plVar11 = plVar8;
        do {
          lVar6 = -1;
          do {
            lVar12 = lVar6;
            lVar6 = lVar12 + 1;
          } while (*(char *)(*plVar11 + lVar6) != '\0');
          lVar12 = lVar12 + 2;
          iVar1 = FUN_1400246c0(pcVar9,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar9)),
                                *plVar11,lVar12);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar11) = pcVar9;
          pcVar9 = pcVar9 + lVar12;
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar7);
      }
      *param_2 = pvVar5;
      FUN_14001b320((LPVOID)0x0);
      for (plVar11 = plVar8; plVar11 != plVar7; plVar11 = plVar11 + 1) {
        FUN_14001b320((LPVOID)*plVar11);
      }
      FUN_14001b320(plVar8);
      uVar3 = 0;
    }
  }
  return uVar3;
}




/* ---- 0x14001ebb0 : getSystemCP [was: getSystemCP] ---- */

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl getSystemCP(int param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,(__crt_locale_pointers *)0x0);
  DAT_14003df28 = 0;
  if (param_1 == -2) {
    DAT_14003df28 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == -3) {
    DAT_14003df28 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == -4) {
    DAT_14003df28 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}




/* ---- 0x14001f130 : update_thread_multibyte_data_internal [was: update_thread_multibyte_data_internal] ---- */

/* Library Function - Single Match
    struct __crt_multibyte_data * __ptr64 __cdecl update_thread_multibyte_data_internal(struct
   __acrt_ptd * __ptr64 const,struct __crt_multibyte_data * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

__crt_multibyte_data * __cdecl
update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2)

{
  int iVar1;
  __crt_multibyte_data *p_Var2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_14003cc20) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
      if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_14003c640)) {
          FUN_14001b320(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
    __acrt_unlock(5);
  }
  else {
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
  }
  if (p_Var2 != (__crt_multibyte_data *)0x0) {
    return p_Var2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14001a8a0();
}




/* ---- 0x14001f1e8 : __acrt_initialize_multibyte [was: __acrt_initialize_multibyte] ---- */

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_14003df2c == '\0') {
    DAT_14003df18 = &DAT_14003c980;
    DAT_14003df20 = &DAT_14003c640;
    DAT_14003df10 = &DAT_14003c870;
    p_Var1 = (__acrt_ptd *)FUN_14001b104();
    in_RAX = FUN_14001eec0(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_14003df20);
    DAT_14003df2c = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}




/* ---- 0x14001f724 : FUN_14001f724 [was: FUN_14001f724] ---- */

LPVOID FUN_14001f724(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar4;
  LPVOID pvVar6;
  undefined4 uVar7;
  WCHAR *pWVar8;
  longlong lVar5;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar7 = (undefined4)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_14001f644(0,0,pWVar3,uVar7);
    if (iVar2 != 0) {
      pvVar6 = _malloc_base((longlong)iVar2);
      if (pvVar6 != (LPVOID)0x0) {
        iVar2 = FUN_14001f644(0,0,pWVar3,uVar7);
        if (iVar2 == 0) {
          FUN_14001b320(pvVar6);
          pvVar6 = (LPVOID)0x0;
        }
        else {
          FUN_14001b320((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pvVar6;
      }
      FUN_14001b320((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPVOID)0x0;
}




/* ---- 0x14001f834 : FUN_14001f834 [was: FUN_14001f834] ---- */

byte * FUN_14001f834(byte *param_1,int param_2)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  LPCWSTR pWVar10;
  longlong *plVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  pbVar12 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    return (byte *)0xffffffffffffffff;
  }
  pbVar3 = (byte *)FUN_14000b060((ulonglong)param_1,'=');
  if ((pbVar3 == (byte *)0x0) || (pbVar3 == param_1)) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001b320(param_1);
    return (byte *)0xffffffffffffffff;
  }
  bVar1 = pbVar3[1];
  if (DAT_14003d6f8 == DAT_14003d710) {
    DAT_14003d6f8 = FUN_14001fb8c(DAT_14003d6f8);
  }
  if (DAT_14003d6f8 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_14003d700 == (LPVOID)0x0)) {
      if (bVar1 == 0) goto LAB_14001f8ea;
      DAT_14003d6f8 = _calloc_base(1,8);
      FUN_14001b320((LPVOID)0x0);
      if (DAT_14003d6f8 != (longlong *)0x0) {
        if (DAT_14003d700 == (LPVOID)0x0) {
          DAT_14003d700 = _calloc_base(1,8);
          FUN_14001b320((LPVOID)0x0);
          if (DAT_14003d700 == (LPVOID)0x0) goto LAB_14001f8e6;
        }
LAB_14001f985:
        if (DAT_14003d6f8 != (longlong *)0x0) goto LAB_14001f98e;
      }
    }
    else {
      lVar4 = FUN_140019c78();
      if (lVar4 != 0) {
        if (DAT_14003d6f8 == DAT_14003d710) {
          DAT_14003d6f8 = FUN_14001fb8c(DAT_14003d6f8);
        }
        goto LAB_14001f985;
      }
      p_Var2 = FUN_14001abbc();
      *(undefined4 *)p_Var2 = 0x16;
    }
  }
  else {
LAB_14001f98e:
    plVar7 = DAT_14003d6f8;
    uVar13 = (longlong)pbVar3 - (longlong)param_1;
    pbVar6 = (byte *)*DAT_14003d6f8;
    plVar11 = DAT_14003d6f8;
    while (pbVar6 != (byte *)0x0) {
      uVar5 = FUN_1400250d0(param_1,pbVar6,uVar13);
      if (((int)uVar5 == 0) &&
         ((*(char *)(uVar13 + *plVar11) == '=' || (*(char *)(uVar13 + *plVar11) == '\0')))) {
        uVar13 = (longlong)plVar11 - (longlong)plVar7 >> 3;
        goto LAB_14001f9d4;
      }
      plVar11 = plVar11 + 1;
      pbVar6 = (byte *)*plVar11;
    }
    uVar13 = -((longlong)plVar11 - (longlong)plVar7 >> 3);
LAB_14001f9d4:
    pbVar6 = pbVar12;
    if ((-1 < (longlong)uVar13) && (*plVar7 != 0)) {
      FUN_14001b320((LPVOID)plVar7[uVar13]);
      if (bVar1 == 0) {
        for (; plVar7[uVar13] != 0; uVar13 = uVar13 + 1) {
          plVar7[uVar13] = plVar7[uVar13 + 1];
        }
        plVar7 = _recalloc_base(plVar7,uVar13,8);
        FUN_14001b320((LPVOID)0x0);
        pbVar6 = param_1;
        if (plVar7 != (longlong *)0x0) {
          DAT_14003d6f8 = plVar7;
        }
      }
      else {
        plVar7[uVar13] = (longlong)param_1;
      }
LAB_14001fa9c:
      if (param_2 == 0) {
LAB_14001fb3c:
        FUN_14001b320(pbVar6);
        return (byte *)0x0;
      }
      lVar4 = -1;
      do {
        lVar14 = lVar4;
        lVar4 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != 0);
      pcVar8 = _calloc_base(lVar14 + 3,1);
      if (pcVar8 == (char *)0x0) {
        FUN_14001b320((LPVOID)0x0);
      }
      else {
        uVar9 = FUN_14001a820(pcVar8,lVar14 + 3,(longlong)param_1);
        if ((int)uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pbVar3[(longlong)pcVar8 - (longlong)param_1] = 0;
        pWVar10 = FUN_140025274(pcVar8,(char *)(-(ulonglong)(bVar1 != 0) &
                                               (ulonglong)
                                               (pbVar3 + ((longlong)pcVar8 - (longlong)param_1) + 1)
                                               ));
        if ((int)pWVar10 != 0) {
          FUN_14001b320(pcVar8);
          goto LAB_14001fb3c;
        }
        p_Var2 = FUN_14001abbc();
        *(undefined4 *)p_Var2 = 0x2a;
        FUN_14001b320(pcVar8);
        pbVar12 = (byte *)0xffffffff;
      }
      FUN_14001b320(pbVar6);
      return pbVar12;
    }
    if (bVar1 == 0) goto LAB_14001f8ea;
    uVar5 = -uVar13 + 2;
    if ((-uVar13 <= uVar5) && (uVar5 < 0x1fffffffffffffff)) {
      plVar7 = _recalloc_base(plVar7,uVar5,8);
      FUN_14001b320((LPVOID)0x0);
      if (plVar7 != (longlong *)0x0) {
        plVar7[-uVar13] = (longlong)param_1;
        plVar7[1 - uVar13] = 0;
        DAT_14003d6f8 = plVar7;
        goto LAB_14001fa9c;
      }
    }
  }
LAB_14001f8e6:
  pbVar12 = (byte *)0xffffffffffffffff;
LAB_14001f8ea:
  FUN_14001b320(param_1);
  return (byte *)((ulonglong)pbVar12 & 0xffffffff);
}




/* ---- 0x14001fb8c : FUN_14001fb8c [was: FUN_14001fb8c] ---- */

LPVOID FUN_14001fb8c(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  LPVOID pvVar4;
  longlong lVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_1 == (longlong *)0x0) {
    pvVar4 = (LPVOID)0x0;
  }
  else {
    lVar8 = 0;
    lVar5 = *param_1;
    plVar2 = param_1;
    while (lVar5 != 0) {
      lVar8 = lVar8 + 1;
      plVar2 = plVar2 + 1;
      lVar5 = *plVar2;
    }
    pvVar4 = _calloc_base(lVar8 + 1,8);
    if (pvVar4 == (LPVOID)0x0) {
LAB_14001fc6b:
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar8 = (longlong)pvVar4 - (longlong)param_1;
      do {
        lVar3 = -1;
        do {
          lVar9 = lVar3;
          lVar3 = lVar9 + 1;
        } while (*(char *)(lVar5 + lVar9 + 1) != '\0');
        pvVar6 = _calloc_base(lVar9 + 2,1);
        *(LPVOID *)(lVar8 + (longlong)param_1) = pvVar6;
        FUN_14001b320((LPVOID)0x0);
        pcVar1 = *(char **)(lVar8 + (longlong)param_1);
        if (pcVar1 == (char *)0x0) goto LAB_14001fc6b;
        uVar7 = FUN_14001a820(pcVar1,lVar9 + 2,*param_1);
        if ((int)uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar5 = *param_1;
      } while (lVar5 != 0);
    }
    FUN_14001b320((LPVOID)0x0);
  }
  return pvVar4;
}




/* ---- 0x14001fc74 : thunk_FUN_14001f834 [was: thunk_FUN_14001f834] ---- */

byte * thunk_FUN_14001f834(byte *param_1,int param_2)

{
  byte bVar1;
  __acrt_ptd *p_Var2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  LPCWSTR pWVar10;
  longlong *plVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  pbVar12 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    return (byte *)0xffffffffffffffff;
  }
  pbVar3 = (byte *)FUN_14000b060((ulonglong)param_1,'=');
  if ((pbVar3 == (byte *)0x0) || (pbVar3 == param_1)) {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_14001b320(param_1);
    return (byte *)0xffffffffffffffff;
  }
  bVar1 = pbVar3[1];
  if (DAT_14003d6f8 == DAT_14003d710) {
    DAT_14003d6f8 = FUN_14001fb8c(DAT_14003d6f8);
  }
  if (DAT_14003d6f8 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_14003d700 == (LPVOID)0x0)) {
      if (bVar1 == 0) goto LAB_14001f8ea;
      DAT_14003d6f8 = _calloc_base(1,8);
      FUN_14001b320((LPVOID)0x0);
      if (DAT_14003d6f8 != (longlong *)0x0) {
        if (DAT_14003d700 == (LPVOID)0x0) {
          DAT_14003d700 = _calloc_base(1,8);
          FUN_14001b320((LPVOID)0x0);
          if (DAT_14003d700 == (LPVOID)0x0) goto LAB_14001f8e6;
        }
LAB_14001f985:
        if (DAT_14003d6f8 != (longlong *)0x0) goto LAB_14001f98e;
      }
    }
    else {
      lVar4 = FUN_140019c78();
      if (lVar4 != 0) {
        if (DAT_14003d6f8 == DAT_14003d710) {
          DAT_14003d6f8 = FUN_14001fb8c(DAT_14003d6f8);
        }
        goto LAB_14001f985;
      }
      p_Var2 = FUN_14001abbc();
      *(undefined4 *)p_Var2 = 0x16;
    }
  }
  else {
LAB_14001f98e:
    plVar7 = DAT_14003d6f8;
    uVar13 = (longlong)pbVar3 - (longlong)param_1;
    pbVar6 = (byte *)*DAT_14003d6f8;
    plVar11 = DAT_14003d6f8;
    while (pbVar6 != (byte *)0x0) {
      uVar5 = FUN_1400250d0(param_1,pbVar6,uVar13);
      if (((int)uVar5 == 0) &&
         ((*(char *)(uVar13 + *plVar11) == '=' || (*(char *)(uVar13 + *plVar11) == '\0')))) {
        uVar13 = (longlong)plVar11 - (longlong)plVar7 >> 3;
        goto LAB_14001f9d4;
      }
      plVar11 = plVar11 + 1;
      pbVar6 = (byte *)*plVar11;
    }
    uVar13 = -((longlong)plVar11 - (longlong)plVar7 >> 3);
LAB_14001f9d4:
    pbVar6 = pbVar12;
    if ((-1 < (longlong)uVar13) && (*plVar7 != 0)) {
      FUN_14001b320((LPVOID)plVar7[uVar13]);
      if (bVar1 == 0) {
        for (; plVar7[uVar13] != 0; uVar13 = uVar13 + 1) {
          plVar7[uVar13] = plVar7[uVar13 + 1];
        }
        plVar7 = _recalloc_base(plVar7,uVar13,8);
        FUN_14001b320((LPVOID)0x0);
        pbVar6 = param_1;
        if (plVar7 != (longlong *)0x0) {
          DAT_14003d6f8 = plVar7;
        }
      }
      else {
        plVar7[uVar13] = (longlong)param_1;
      }
LAB_14001fa9c:
      if (param_2 == 0) {
LAB_14001fb3c:
        FUN_14001b320(pbVar6);
        return (byte *)0x0;
      }
      lVar4 = -1;
      do {
        lVar14 = lVar4;
        lVar4 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != 0);
      pcVar8 = _calloc_base(lVar14 + 3,1);
      if (pcVar8 == (char *)0x0) {
        FUN_14001b320((LPVOID)0x0);
      }
      else {
        uVar9 = FUN_14001a820(pcVar8,lVar14 + 3,(longlong)param_1);
        if ((int)uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pbVar3[(longlong)pcVar8 - (longlong)param_1] = 0;
        pWVar10 = FUN_140025274(pcVar8,(char *)(-(ulonglong)(bVar1 != 0) &
                                               (ulonglong)
                                               (pbVar3 + ((longlong)pcVar8 - (longlong)param_1) + 1)
                                               ));
        if ((int)pWVar10 != 0) {
          FUN_14001b320(pcVar8);
          goto LAB_14001fb3c;
        }
        p_Var2 = FUN_14001abbc();
        *(undefined4 *)p_Var2 = 0x2a;
        FUN_14001b320(pcVar8);
        pbVar12 = (byte *)0xffffffff;
      }
      FUN_14001b320(pbVar6);
      return pbVar12;
    }
    if (bVar1 == 0) goto LAB_14001f8ea;
    uVar5 = -uVar13 + 2;
    if ((-uVar13 <= uVar5) && (uVar5 < 0x1fffffffffffffff)) {
      plVar7 = _recalloc_base(plVar7,uVar5,8);
      FUN_14001b320((LPVOID)0x0);
      if (plVar7 != (longlong *)0x0) {
        plVar7[-uVar13] = (longlong)param_1;
        plVar7[1 - uVar13] = 0;
        DAT_14003d6f8 = plVar7;
        goto LAB_14001fa9c;
      }
    }
  }
LAB_14001f8e6:
  pbVar12 = (byte *)0xffffffffffffffff;
LAB_14001f8ea:
  FUN_14001b320(param_1);
  return (byte *)((ulonglong)pbVar12 & 0xffffffff);
}




/* ---- 0x14001fce0 : __acrt_lowio_create_handle_array [was: __acrt_lowio_create_handle_array] ---- */

/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar3;
  
  puVar2 = _calloc_base(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if ((puVar2 != (undefined8 *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (undefined1 *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0xa0a0000;
      *(undefined1 *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (undefined8 *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (undefined8 *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_14001b320((LPVOID)0x0);
  return puVar5;
}




/* ---- 0x14001fd88 : __acrt_lowio_destroy_handle_array [was: __acrt_lowio_destroy_handle_array] ---- */

/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_14001b320(param_1);
  }
  return;
}




/* ---- 0x14001fdd8 : __acrt_lowio_ensure_fh_exists [was: __acrt_lowio_ensure_fh_exists] ---- */

/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

longlong __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_14003dc70;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_14003d870)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_14003d870)[lVar5] = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_14003dc70 + 0x40;
        DAT_14003dc70 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    p_Var2 = FUN_14001abbc();
    *(undefined4 *)p_Var2 = 9;
    FUN_14001925c();
    lVar3 = 9;
  }
  return lVar3;
}




/* ---- 0x14002001c : __acrt_locale_free_monetary [was: __acrt_locale_free_monetary] ---- */

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_14003cb98) {
      FUN_14001b320(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_14003cba0) {
      FUN_14001b320(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_14003cba8) {
      FUN_14001b320(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_14003cbb0) {
      FUN_14001b320(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_14003cbb8) {
      FUN_14001b320(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_14003cbc0) {
      FUN_14001b320(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_14003cbc8) {
      FUN_14001b320(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_14003cbe8) {
      FUN_14001b320(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_14003cbf0) {
      FUN_14001b320(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_14003cbf8) {
      FUN_14001b320(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_14003cc00) {
      FUN_14001b320(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_14003cc08) {
      FUN_14001b320(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_14003cc10) {
      FUN_14001b320(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}




/* ---- 0x140020128 : __acrt_locale_free_numeric [was: __acrt_locale_free_numeric] ---- */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_14003cb80) {
      FUN_14001b320((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_14003cb88) {
      FUN_14001b320((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_14003cb90) {
      FUN_14001b320((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_14003cbd8) {
      FUN_14001b320((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_14003cbe0) {
      FUN_14001b320((undefined *)param_1[0xc]);
    }
  }
  return;
}




/* ---- 0x1400201c8 : __acrt_locale_free_time [was: __acrt_locale_free_time] ---- */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140020194(param_1,7);
    FUN_140020194(param_1 + 7,7);
    FUN_140020194(param_1 + 0xe,0xc);
    FUN_140020194(param_1 + 0x1a,0xc);
    FUN_140020194(param_1 + 0x26,2);
    FUN_14001b320((LPVOID)param_1[0x28]);
    FUN_14001b320((LPVOID)param_1[0x29]);
    FUN_14001b320((LPVOID)param_1[0x2a]);
    FUN_140020194(param_1 + 0x2c,7);
    FUN_140020194(param_1 + 0x33,7);
    FUN_140020194(param_1 + 0x3a,0xc);
    FUN_140020194(param_1 + 0x46,0xc);
    FUN_140020194(param_1 + 0x52,2);
    FUN_14001b320((LPVOID)param_1[0x54]);
    FUN_14001b320((LPVOID)param_1[0x55]);
    FUN_14001b320((LPVOID)param_1[0x56]);
    FUN_14001b320((LPVOID)param_1[0x57]);
  }
  return;
}




/* ---- 0x140020460 : __acrt_add_locale_ref [was: __acrt_add_locale_ref] ---- */

/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_14003c5e8) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  return;
}




/* ---- 0x1400204ec : __acrt_free_locale [was: __acrt_free_locale] ---- */

/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(LPVOID param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)((longlong)param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)((longlong)param_1 + 0xf8) != &PTR_DAT_14003cb80)) &&
      (*(int **)((longlong)param_1 + 0xe0) != (int *)0x0)) &&
     (**(int **)((longlong)param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)((longlong)param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14001b320(piVar1);
      __acrt_locale_free_monetary(*(longlong *)((longlong)param_1 + 0xf8));
    }
    piVar1 = *(int **)((longlong)param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_14001b320(piVar1);
      __acrt_locale_free_numeric(*(undefined8 **)((longlong)param_1 + 0xf8));
    }
    FUN_14001b320(*(LPVOID *)((longlong)param_1 + 0xe0));
    FUN_14001b320(*(LPVOID *)((longlong)param_1 + 0xf8));
  }
  if ((*(int **)((longlong)param_1 + 0x100) != (int *)0x0) &&
     (**(int **)((longlong)param_1 + 0x100) == 0)) {
    FUN_14001b320((LPVOID)(*(longlong *)((longlong)param_1 + 0x108) + -0xfe));
    FUN_14001b320((LPVOID)(*(longlong *)((longlong)param_1 + 0x110) + -0x80));
    FUN_14001b320((LPVOID)(*(longlong *)((longlong)param_1 + 0x118) + -0x80));
    FUN_14001b320(*(LPVOID *)((longlong)param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined ***)((longlong)param_1 + 0x120));
  puVar3 = (undefined8 *)((longlong)param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)((longlong)param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_14003c5e8) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_14001b320(piVar1);
      FUN_14001b320((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_14001b320(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14001b320(param_1);
  return;
}




/* ---- 0x140020664 : __acrt_locale_add_lc_time_reference [was: __acrt_locale_add_lc_time_reference] ---- */

/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_14002c780)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}




/* ---- 0x14002068c : __acrt_locale_free_lc_time_if_unreferenced [was: __acrt_locale_free_lc_time_if_unreferenced] ---- */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_14002c780)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_14001b320(param_1);
  }
  return;
}




/* ---- 0x1400206c4 : __acrt_locale_release_lc_time_reference [was: __acrt_locale_release_lc_time_reference] ---- */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_14002c780)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}




/* ---- 0x1400206ec : __acrt_release_locale_ref [was: __acrt_release_locale_ref] ---- */

/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_14003c5e8) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined ***)(param_1 + 0x120));
  }
  return;
}




/* ---- 0x140020794 : __acrt_update_thread_locale_data [was: __acrt_update_thread_locale_data] ---- */

/* Library Function - Single Match
    __acrt_update_thread_locale_data
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** __acrt_update_thread_locale_data(void)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  lVar1 = FUN_14001b0e8();
  if (((DAT_14003cc20 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(lVar1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_14003d7a8);
    __acrt_unlock(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14001a8a0();
    }
  }
  return ppuVar2;
}




/* ---- 0x140020804 : _updatetlocinfoEx_nolock [was: _updatetlocinfoEx_nolock] ---- */

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(undefined8 *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (undefined8 *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = param_2;
      __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_14003c480)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}




/* ---- 0x140020870 : _recalloc_base [was: _recalloc_base] ---- */

/* Library Function - Single Match
    _recalloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _recalloc_base(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  __acrt_ptd *p_Var1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _msize_base((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = _realloc_base(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_1400280c0((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




/* ---- 0x140020a8c : __acrt_get_sigabrt_handler [was: __acrt_get_sigabrt_handler] ---- */

/* Library Function - Single Match
    __acrt_get_sigabrt_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_get_sigabrt_handler(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_140020a44(local_res8,local_res18,local_res8,local_res10);
  return;
}




/* ---- 0x140021028 : _commit [was: _commit] ---- */

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  int local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_14003dc70)) &&
       ((*(byte *)((&DAT_14003d870)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      uVar2 = FUN_140020f9c(local_res10,local_res20,local_18,local_res18);
      return (int)uVar2;
    }
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 9;
    FUN_14001925c();
  }
  return -1;
}




/* ---- 0x140022384 : FUN_140022384 [was: FUN_140022384] ---- */

int FUN_140022384(uint param_1,byte *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined7 extraout_var;
  byte *pbVar8;
  short sVar9;
  uint nNumberOfBytesToRead;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  DWORD local_res20 [2];
  DWORD local_68 [2];
  HANDLE local_60;
  ulonglong local_58;
  ulonglong local_50;
  byte *local_48;
  
  if (param_1 == 0xfffffffe) {
    p_Var5 = FUN_14001ab98();
    *(undefined4 *)p_Var5 = 0;
    p_Var5 = FUN_14001abbc();
    *(undefined4 *)p_Var5 = 9;
    return -1;
  }
  pbVar7 = (byte *)0x0;
  iVar10 = 0;
  if ((-1 < (int)param_1) && (param_1 < DAT_14003dc70)) {
    uVar6 = (ulonglong)(param_1 & 0x3f);
    local_50 = 1;
    local_58 = (ulonglong)(longlong)(int)param_1 >> 6;
    lVar12 = (&DAT_14003d870)[local_58];
    if ((*(byte *)(lVar12 + 0x38 + uVar6 * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        if ((param_3 == 0) || ((*(byte *)(lVar12 + 0x38 + uVar6 * 0x48) & 2) != 0)) {
          return 0;
        }
        if (param_2 != (byte *)0x0) {
          local_60 = *(HANDLE *)(lVar12 + 0x28 + uVar6 * 0x48);
          cVar1 = *(char *)(lVar12 + 0x39 + uVar6 * 0x48);
          if (cVar1 == '\x01') {
            if ((~(byte)param_3 & 1) == 0) goto LAB_14002247e;
            uVar4 = param_3 >> 1;
            if (uVar4 < 4) {
              uVar4 = 4;
            }
            pbVar7 = _malloc_base((ulonglong)uVar4);
            FUN_14001b320((LPVOID)0x0);
            FUN_14001b320((LPVOID)0x0);
            if (pbVar7 != (byte *)0x0) {
              lVar12 = FUN_1400259f0(param_1,(LARGE_INTEGER)0x0,1);
              *(longlong *)((&DAT_14003d870)[local_58] + 0x30 + uVar6 * 0x48) = lVar12;
              param_2 = pbVar7;
              goto LAB_140022520;
            }
            p_Var5 = FUN_14001abbc();
            *(undefined4 *)p_Var5 = 0xc;
            p_Var5 = FUN_14001ab98();
            *(undefined4 *)p_Var5 = 8;
          }
          else {
            uVar4 = param_3;
            if ((cVar1 == '\x02') && ((~(byte)param_3 & 1) == 0)) {
LAB_14002247e:
              p_Var5 = FUN_14001ab98();
              *(undefined4 *)p_Var5 = 0;
              p_Var5 = FUN_14001abbc();
              *(undefined4 *)p_Var5 = 0x16;
              FUN_14001925c();
            }
            else {
LAB_140022520:
              pbVar13 = param_2;
              nNumberOfBytesToRead = uVar4;
              if (((*(byte *)((&DAT_14003d870)[local_58] + 0x38 + uVar6 * 0x48) & 0x48) != 0) &&
                 ((bVar2 = *(byte *)((&DAT_14003d870)[local_58] + 0x3a + uVar6 * 0x48), bVar2 != 10
                  && (uVar4 != 0)))) {
                *param_2 = bVar2;
                nNumberOfBytesToRead = uVar4 - 1;
                pbVar13 = param_2 + 1;
                iVar10 = 1;
                *(undefined1 *)((&DAT_14003d870)[local_58] + 0x3a + uVar6 * 0x48) = 10;
                if ((cVar1 != '\0') &&
                   ((bVar2 = *(byte *)((&DAT_14003d870)[local_58] + 0x3b + uVar6 * 0x48),
                    bVar2 != 10 && (nNumberOfBytesToRead != 0)))) {
                  *pbVar13 = bVar2;
                  pbVar13 = param_2 + 2;
                  nNumberOfBytesToRead = uVar4 - 2;
                  *(undefined1 *)((&DAT_14003d870)[local_58] + 0x3b + uVar6 * 0x48) = 10;
                  iVar10 = 2;
                  if ((cVar1 == '\x01') &&
                     ((bVar2 = *(byte *)((&DAT_14003d870)[local_58] + 0x3c + uVar6 * 0x48),
                      bVar2 != 10 && (iVar10 = 2, nNumberOfBytesToRead != 0)))) {
                    *pbVar13 = bVar2;
                    iVar10 = 3;
                    pbVar13 = param_2 + 3;
                    nNumberOfBytesToRead = uVar4 - 3;
                    *(undefined1 *)((&DAT_14003d870)[local_58] + 0x3c + uVar6 * 0x48) = 10;
                  }
                }
              }
              local_68[0] = 0;
              local_48 = param_2;
              bVar2 = FUN_140023fbc(param_1);
              if ((((int)CONCAT71(extraout_var,bVar2) == 0) ||
                  (-1 < *(char *)((&DAT_14003d870)[local_58] + 0x38 + uVar6 * 0x48))) ||
                 (BVar3 = GetConsoleMode(local_60,local_68), BVar3 == 0)) {
                local_50 = local_50 & 0xffffffffffffff00;
LAB_140022656:
                local_res20[0] = 0;
                BVar3 = ReadFile(local_60,pbVar13,nNumberOfBytesToRead,local_res20,(LPOVERLAPPED)0x0
                                );
                if ((BVar3 != 0) && (uVar4 = local_res20[0], local_res20[0] <= param_3)) {
LAB_140022698:
                  iVar10 = iVar10 + uVar4;
                  if (*(char *)((&DAT_14003d870)[local_58] + 0x38 + uVar6 * 0x48) < '\0') {
                    if (cVar1 == '\x02') {
                      uVar11 = (ulonglong)(longlong)iVar10 >> 1;
                      if ((char)local_50 == '\0') {
                        iVar10 = FUN_140021d38(param_1,(short *)local_48,uVar11);
                      }
                      else {
                        pbVar13 = local_48;
                        for (pbVar8 = local_48; pbVar8 < local_48 + uVar11 * 2;
                            pbVar8 = pbVar8 + lVar12) {
                          sVar9 = *(short *)pbVar8;
                          if (sVar9 == 0x1a) {
                            pbVar8 = (byte *)((&DAT_14003d870)[local_58] + 0x38 + uVar6 * 0x48);
                            *pbVar8 = *pbVar8 | 2;
                            break;
                          }
                          if (((sVar9 == 0xd) && (pbVar8 + 2 < local_48 + uVar11 * 2)) &&
                             (*(short *)(pbVar8 + 2) == 10)) {
                            sVar9 = 10;
                            lVar12 = 4;
                          }
                          else {
                            lVar12 = 2;
                          }
                          *(short *)pbVar13 = sVar9;
                          pbVar13 = pbVar13 + 2;
                        }
                        iVar10 = (int)((longlong)pbVar13 - (longlong)local_48 >> 1) * 2;
                      }
                    }
                    else {
                      iVar10 = FUN_140021f34(param_1,pbVar13,(longlong)iVar10);
                    }
                  }
                  goto LAB_140022636;
                }
                uVar4 = GetLastError();
                if (uVar4 != 5) {
                  if (uVar4 == 0x6d) {
                    iVar10 = 0;
                    goto LAB_140022636;
                  }
                  goto LAB_14002262c;
                }
                p_Var5 = FUN_14001abbc();
                *(undefined4 *)p_Var5 = 9;
                p_Var5 = FUN_14001ab98();
                *(undefined4 *)p_Var5 = 5;
              }
              else {
                if (cVar1 != '\x02') goto LAB_140022656;
                local_res20[0] = 0;
                BVar3 = ReadConsoleW(local_60,pbVar13,nNumberOfBytesToRead >> 1,local_res20,
                                     (PCONSOLE_READCONSOLE_CONTROL)0x0);
                if (BVar3 != 0) {
                  uVar4 = local_res20[0] * 2;
                  goto LAB_140022698;
                }
                uVar4 = GetLastError();
LAB_14002262c:
                FUN_14001ab4c(uVar4);
              }
            }
          }
          iVar10 = -1;
LAB_140022636:
          FUN_14001b320(pbVar7);
          return iVar10;
        }
      }
      p_Var5 = FUN_14001ab98();
      *(undefined4 *)p_Var5 = 0;
      p_Var5 = FUN_14001abbc();
      *(undefined4 *)p_Var5 = 0x16;
      goto LAB_1400227c3;
    }
  }
  p_Var5 = FUN_14001ab98();
  *(undefined4 *)p_Var5 = 0;
  p_Var5 = FUN_14001abbc();
  *(undefined4 *)p_Var5 = 9;
LAB_1400227c3:
  FUN_14001925c();
  return -1;
}




/* ---- 0x1400227e4 : __acrt_stdio_allocate_buffer_nolock [was: __acrt_stdio_allocate_buffer_nolock] ---- */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  _DAT_14003d5c8 = _DAT_14003d5c8 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_14001b320((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}




/* ---- 0x140024c50 : _mbsdec_l [was: _mbsdec_l] ---- */

/* Library Function - Single Match
    _mbsdec_l
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uchar * __cdecl _mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  __acrt_ptd *p_Var1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((_Start == (uchar *)0x0) || (_Pos == (uchar *)0x0)) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_14001925c();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)_Locale);
    pbVar2 = _Pos + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = _Pos + (-1 - (ulonglong)((int)_Pos - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (uchar *)0x0;
}




/* ---- 0x140025018 : __acrt_LCMapStringA [was: __acrt_LCMapStringA] ---- */

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,undefined8 param_6,int param_7,uint param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_140024ce4(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* ---- 0x1400250d0 : FUN_1400250d0 [was: FUN_1400250d0] ---- */

ulonglong FUN_1400250d0(byte *param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  __acrt_ptd *p_Var5;
  longlong local_20;
  longlong local_18;
  char local_10;
  
  if (DAT_14003d760 == 0) {
    uVar3 = FUN_140026340(param_1,param_2,param_3);
  }
  else {
    local_10 = '\0';
    lVar4 = FUN_14001b0e8();
    local_20 = *(longlong *)(lVar4 + 0x90);
    local_18 = *(longlong *)(lVar4 + 0x88);
    __acrt_update_locale_info(lVar4,&local_20);
    FUN_14001ac4c(lVar4,&local_18);
    if ((*(uint *)(lVar4 + 0x3a8) & 2) == 0) {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) | 2;
      local_10 = '\x01';
    }
    if (param_3 == 0) {
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
    else if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
      p_Var5 = FUN_14001abbc();
      *(undefined4 *)p_Var5 = 0x16;
      FUN_14001925c();
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0x7fffffff;
      if (param_3 < 0x80000000) {
        if (*(ushort **)(local_20 + 0x130) == (ushort *)0x0) {
          uVar1 = FUN_1400263d0(param_1,param_2,param_3,&local_20);
          if (local_10 != '\0') {
            *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
          }
          return (ulonglong)uVar1;
        }
        iVar2 = __acrt_CompareStringA
                          ((__crt_locale_pointers *)&local_20,*(ushort **)(local_20 + 0x130),0x1001,
                           param_1,(int)param_3,param_2,(int)param_3,*(uint *)(local_20 + 0x14));
        if (iVar2 == 0) {
          p_Var5 = FUN_14001abbc();
          *(undefined4 *)p_Var5 = 0x16;
        }
        else {
          uVar3 = (ulonglong)(iVar2 - 2);
        }
      }
      else {
        p_Var5 = FUN_14001abbc();
        *(undefined4 *)p_Var5 = 0x16;
        FUN_14001925c();
      }
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}




/* ---- 0x140025490 : _msize_base [was: _msize_base] ---- */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  __acrt_ptd *p_Var1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    p_Var1 = FUN_14001abbc();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_14001925c();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400254c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_14003df40,0,param_1);
  return uVar2;
}




/* ---- 0x1400254e0 : _realloc_base [was: _realloc_base] ---- */

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_14001b320(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_14003df40,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_14001a240();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_1400192d0(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      p_Var4 = FUN_14001abbc();
      *(undefined4 *)p_Var4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}




/* ---- 0x140025a8c : thunk_FUN_1400258a4 [was: thunk_FUN_1400258a4] ---- */

longlong thunk_FUN_1400258a4(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_14001ff8c(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_14001ab74(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_14003d870)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return (longlong)aLStack_18[0].s;
    }
  }
  return -1;
}




/* ---- 0x1400262e0 : __strncnt [was: __strncnt] ---- */

/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}




/* ---- 0x1400268bc : __acrt_CompareStringA [was: __acrt_CompareStringA] ---- */

/* Library Function - Single Match
    __acrt_CompareStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_CompareStringA
               (__crt_locale_pointers *param_1,ushort *param_2,uint param_3,byte *param_4,
               int param_5,byte *param_6,int param_7,uint param_8)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_14002652c(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}




/* ---- 0x140026948 : __dcrt_lowio_ensure_console_output_initialized [was: __dcrt_lowio_ensure_console_output_initialized] ---- */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_14003cd30 == (HANDLE)0xfffffffffffffffe) {
    DAT_14003cd30 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_14003cd30 != (HANDLE)0xffffffffffffffff;
}




/* ---- 0x1400269b8 : __dcrt_write_console [was: __dcrt_write_console] ---- */

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_14003cd30,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_14003cd30 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_14003cd30);
      }
      DAT_14003cd30 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_14003cd30,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}




/* ---- 0x140026af0 : thunk_FUN_140026b00 [was: thunk_FUN_140026b00] ---- */

uint thunk_FUN_140026b00(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = FUN_140027240();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_14003cd38 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar2 = (uint)uVar3 & 0xffffffbf;
      uVar3 = (ulonglong)uVar2;
      FUN_140027250(uVar2);
    }
    else {
      FUN_140027250((uint)uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}




/* ---- 0x140027610 : _FindPESection [was: _FindPESection] ---- */

/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* ---- 0x1400276dc : __GSHandlerCheck_SEH [was: __GSHandlerCheck_SEH] ---- */

/* Library Function - Single Match
    __GSHandlerCheck_SEH
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __GSHandlerCheck_SEH
               (PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_4[7];
  uVar1 = *puVar2;
  FUN_14000a1e8(param_2,(longlong)param_4);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    FUN_14000c140(param_1,param_2,param_3,param_4);
  }
  return;
}




/* ---- 0x1400279a0 : _guard_dispatch_icall [was: _guard_dispatch_icall] ---- */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001400279a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* ---- 0x1400279c0 : _guard_dispatch_icall [was: _guard_dispatch_icall] ---- */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001400279a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* ---- 0x1400279e0 : _guard_dispatch_icall [was: _guard_dispatch_icall] ---- */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001400279a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




/* ---- 0x140028720 : strncmp [was: strncmp] ---- */

/* Library Function - Single Match
    strncmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    do {
      if (((ulonglong)_Str1 & 7) == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*(ulonglong *)_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
    } while ((_MaxCount != 0) && (bVar1 != 0));
  }
  return 0;
}




/* ---- 0x140028880 : FUN_140028880 [was: FUN_140028880] ---- */

void FUN_140028880(undefined8 param_1,longlong param_2)

{
  ~basic_string<>((undefined8 *)(param_2 + 0x90));
  return;
}




