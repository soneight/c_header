#ifndef SON8_C_BASE_HXX
#define SON8_C_BASE_HXX
/*
    Base C related functionality
*/
#ifndef __cplusplus
#error "son8::c_header library interface requires C++"
#endif
// std
#include <cassert>
#include <cinttypes>
#include <climits> // IWYU pragma: keep
#include <cstddef>
#include <cstdint>
#include <cstdlib>
// -- depr-rm?
// #include <ciso646> // rm C++20
// #include <cstdalign> // depr C++17, rm C++20
// #include <cstdbool> // depr C++17, rm C++20

namespace son8::c {
    // C++03
    // -- cstddef
    using std::ptrdiff_t;
    using std::size_t;
    // C++11
    // -- cinttypes
    using std::imaxdiv_t;
    // -- cstddef
    using std::max_align_t;
    using std::nullptr_t;
    // -- cstdint
    using std::int16_t;
    using std::int32_t;
    using std::int64_t;
    using std::int8_t;
    using std::intmax_t;
    using std::intptr_t;
    using std::int_fast16_t;
    using std::int_fast32_t;
    using std::int_fast64_t;
    using std::int_fast8_t;
    using std::int_least16_t;
    using std::int_least32_t;
    using std::int_least64_t;
    using std::int_least8_t;
    using std::uint16_t;
    using std::uint32_t;
    using std::uint64_t;
    using std::uint8_t;
    using std::uintmax_t;
    using std::uintptr_t;
    using std::uint_fast16_t;
    using std::uint_fast32_t;
    using std::uint_fast64_t;
    using std::uint_fast8_t;
    using std::uint_least16_t;
    using std::uint_least32_t;
    using std::uint_least64_t;
    using std::uint_least8_t;
    // C++17
    // -- cstddef
    using std::byte;
    using std::to_integer;
} // namespace son8::c

#endif//SON8_C_BASE_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
