#ifndef SON8_C_BASE_HXX
#define SON8_C_BASE_HXX
/*
    Base C related functionality
*/
#ifndef __cplusplus
#error "son8::c_header library interface requires C++"
#endif
// std headers
#include <cassert>
#include <cinttypes>
#include <climits>
#include <cstddef>
#include <cstdint>
#include <cstdlib>

namespace son8::c {
    // inttypes
    // -- C++11
    using std::imaxdiv_t;
    // stddef
    using std::ptrdiff_t;
    using std::size_t;
    // -- C++11
    using std::max_align_t;
    using std::nullptr_t;
    // -- C++17
    using std::byte;
    using std::to_integer;
    // stdint
    // -- C++11
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
} // namespace son8::c

#endif//SON8_C_BASE_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
