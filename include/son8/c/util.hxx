#ifndef SON8_C_UTIL_HXX
#define SON8_C_UTIL_HXX
/*
    Utility (other) C related functionality
*/
#include <son8/c/base.hxx>
// std
#include <clocale>
#include <cstdarg>
#include <ctime>

namespace son8::c {
    // C++03
    // -- clocale
    using std::lconv;
    using std::localeconv;
    using std::setlocale;
    // -- cstdlib<-base.hxx
    using std::bsearch;
    using std::qsort;
    using std::rand;
    using std::srand;
    // -- cstdarg
    using std::va_list;
    // -- ctime
    using std::asctime;
    using std::clock;
    using std::clock_t;
    using std::ctime;
    using std::difftime;
    using std::gmtime;
    using std::localtime;
    using std::mktime;
    using std::strftime;
    using std::time;
    using std::time_t;
    using std::tm;
    // C++17
    // -- ctime
    using std::timespec;
    using std::timespec_get;
} // namespace son8::c

#endif//SON8_C_UTIL_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
