#ifndef SON8_C_CHAR_HXX
#define SON8_C_CHAR_HXX
/*
    Character C related functionality
*/
#include <son8/c/base.hxx>
// std
#include <cctype>
#include <cstring>

namespace son8::c {
    // C++03
    // -- cctype
    using std::isalnum;
    using std::isalpha;
    using std::iscntrl;
    using std::isdigit;
    using std::isgraph;
    using std::islower;
    using std::isprint;
    using std::ispunct;
    using std::isspace;
    using std::isupper;
    using std::isxdigit;
    using std::tolower;
    using std::toupper;
    // -- cstdlib<-base.hxx
    using std::atof;
    using std::atoi;
    using std::atol;
    using std::mblen;
    using std::strtod;
    using std::strtof;
    using std::strtol;
    using std::strtold;
    using std::strtoul;
    // -- cstring
    using std::strcat;
    using std::strchr;
    using std::strcmp;
    using std::strcoll;
    using std::strcpy;
    using std::strcspn;
    using std::strerror;
    using std::strlen;
    using std::strncat;
    using std::strncmp;
    using std::strncpy;
    using std::strpbrk;
    using std::strrchr;
    using std::strspn;
    using std::strstr;
    using std::strtok;
    using std::strxfrm;
    // C++11
    // -- cctype
    using std::isblank;
    // -- cinttypes<-base.hxx
    using std::strtoimax;
    using std::strtoumax;
    // -- cstdlib<-base.hxx
    using std::atoll;
    using std::strtoll;
    using std::strtoull;
} // namespace son8::c

#endif//SON8_C_CHAR_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
