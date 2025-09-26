#pragma once
#ifndef SON8_C_WIDE_HXX
#define SON8_C_WIDE_HXX
/*
    Wide character C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <cuchar>
#include <cwchar>
#include <cwctype>

namespace son8::c {
    // base.hxx->inttypes
    // -- C++11
    using std::wcstoimax;
    using std::wcstoumax;
    // base.hxx->stdlib
    using std::mbstowcs;
    using std::mbtowc;
    using std::wcstombs;
    using std::wctomb;
    // uchar
    using std::mbstate_t;
    // -- C++11
    using std::c16rtomb;
    using std::c32rtomb;
    using std::mbrtoc16;
    using std::mbrtoc32;
    // -- C++20 not supported, commenting out for completeness
    //using std::c8rtomb;
    //using std::mbrtoc8;
    // wchar
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
    // -- C++11
    using std::vwscanf;
    using std::vfwscanf;
    using std::vswscanf;
    // wctype
    using std::wctrans_t;
    using std::wctype_t;
    using std::wint_t;
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
    using std::wctype;
    // -- C++11
    using std::iswblank;
} // namespace son8::c

#endif//SON8_C_WIDE_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
