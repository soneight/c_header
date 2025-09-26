#ifndef SON8_C_CHAR_HXX
#define SON8_C_CHAR_HXX
/*
    Character C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <cctype>
#include <cstring>

namespace son8::c {
    // base.hxx->inttypes
    // -- C++11
    using std::strtoimax;
    using std::strtoumax;
    // base.hxx->stdlib
    using std::atof;
    using std::atoi;
    using std::atol;
    using std::mblen;
    using std::strtod;
    using std::strtof;
    using std::strtol;
    using std::strtold;
    using std::strtoul;
    // -- C++11
    using std::atoll;
    using std::strtoll;
    using std::strtoull;
    // ctype
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
    // -- C++11
    using std::isblank;
    // string
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
} // namespace son8::c

#endif//SON8_C_CHAR_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
