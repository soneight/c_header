#ifndef SON8_C_BYTE_HXX
#define SON8_C_BYTE_HXX
/*
    Memory C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <cstring>

namespace son8::c {
    // base.hxx->stdlib
    using std::calloc;
    using std::free;
    using std::malloc;
    using std::realloc;
    // -- C++17
#ifndef SON8_C_HEADER_MSVC_DISABLED
    using std::aligned_alloc;
#endif
    // string
    using std::memchr;
    using std::memcmp;
    using std::memcpy;
    using std::memmove;
    using std::memset;
} // namespace son8::c

#endif//SON8_C_BYTE_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
