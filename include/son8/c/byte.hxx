#ifndef SON8_C_BYTE_HXX
#define SON8_C_BYTE_HXX
/*
    Memory C related functionality
*/
#include <son8/c/base.hxx>
// std
#include <cstring>

namespace son8::c {
    // C++03
    // -- cstdlib<-base.hxx
    using std::calloc;
    using std::free;
    using std::malloc;
    using std::realloc;
    // -- cstring
    using std::memchr;
    using std::memcmp;
    using std::memcpy;
    using std::memmove;
    using std::memset;
    // C++17
    // -- cstdlib<-base.hxx
#   ifndef _MSC_VER
    using std::aligned_alloc;
#   endif
} // namespace son8::c

#endif//SON8_C_BYTE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
