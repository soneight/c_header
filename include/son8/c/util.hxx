#ifndef SON8_C_UTIL_HXX
#define SON8_C_UTIL_HXX
/*
    Utility (other) C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <clocale>
#include <cstdarg>
#include <ctime>

namespace son8::c {
    // base.hxx->stdlib
    using std::bsearch;
    using std::qsort;
    using std::rand;
    using std::srand;
    // locale
    using std::lconv;
    using std::localeconv;
    using std::setlocale;
    // stdarg
    using std::va_list;
    // time
    using std::clock_t;
    using std::time_t;
    using std::tm;
    using std::asctime;
    using std::clock;
    using std::ctime;
    using std::difftime;
    using std::gmtime;
    using std::localtime;
    using std::mktime;
    using std::time;
    using std::strftime;
    // -- C++17
    using std::timespec;
    using std::timespec_get;
} // namespace son8::c

#endif//SON8_C_UTIL_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
