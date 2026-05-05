#ifndef SON8_C_WIDE_HXX
#define SON8_C_WIDE_HXX
/*
    Wide character C related functionality
*/
#include <son8/c/base.hxx>
// std
#include <cuchar>
#include <cwchar>
#include <cwctype>

namespace son8::c {
    // C++03
    // -- cstdlib<-base.hxx
    using std::mbstowcs;
    using std::mbtowc;
    using std::wcstombs;
    using std::wctomb;
    // -- cuchar
    using std::mbstate_t;
    // -- cwchar
    using std::btowc;
    using std::fgetwc;
    using std::fgetws;
    using std::fputwc;
    using std::fputws;
    using std::fwide;
    using std::fwprintf;
    using std::fwscanf;
    using std::getwc;
    using std::getwchar;
    using std::mbrlen;
    using std::mbrtowc;
    using std::mbsinit;
    using std::mbsrtowcs;
    using std::putwc;
    using std::putwchar;
    using std::swprintf;
    using std::swscanf;
    using std::ungetwc;
    using std::wcrtomb;
    using std::wcscat;
    using std::wcschr;
    using std::wcscmp;
    using std::wcscoll;
    using std::wcscpy;
    using std::wcscspn;
    using std::wcsftime;
    using std::wcslen;
    using std::wcsncat;
    using std::wcsncmp;
    using std::wcsncpy;
    using std::wcspbrk;
    using std::wcsrchr;
    using std::wcsrtombs;
    using std::wcsspn;
    using std::wcsstr;
    using std::wcstod;
    using std::wcstof;
    using std::wcstok;
    using std::wcstol;
    using std::wcstold;
    using std::wcstoll;
    using std::wcstoul;
    using std::wcstoull;
    using std::wcsxfrm;
    using std::wctob;
    using std::wmemchr;
    using std::wmemcmp;
    using std::wmemcpy;
    using std::wmemmove;
    using std::wmemset;
    using std::wprintf;
    using std::wscanf;
    using std::vfwprintf;
    using std::vswprintf;
    using std::vwprintf;
    // -- cwctype
    using std::iswalnum;
    using std::iswalpha;
    using std::iswcntrl;
    using std::iswdigit;
    using std::iswgraph;
    using std::iswctype;
    using std::iswlower;
    using std::iswprint;
    using std::iswpunct;
    using std::iswspace;
    using std::iswupper;
    using std::iswxdigit;
    using std::towctrans;
    using std::towlower;
    using std::towupper;
    using std::wctrans;
    using std::wctrans_t;
    using std::wctype;
    using std::wctype_t;
    using std::wint_t;
    // C++11
    // -- cinttypes<-base.hxx
    using std::wcstoimax;
    using std::wcstoumax;
    // -- cuchar
    using std::c16rtomb;
    using std::c32rtomb;
    using std::mbrtoc16;
    using std::mbrtoc32;
    // -- cwchar
    using std::vwscanf;
    using std::vfwscanf;
    using std::vswscanf;
    // -- cwctype
    using std::iswblank;
} // namespace son8::c

#endif//SON8_C_WIDE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
