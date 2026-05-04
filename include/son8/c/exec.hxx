#ifndef SON8_C_EXEC_HXX
#define SON8_C_EXEC_HXX
/*
    Execution C related functionality
*/
#include <cstdlib>
#include <son8/c/base.hxx>
// std headers
#include <cerrno> // IWYU pragma: keep
#include <csetjmp>
#include <csignal>

namespace son8::c {
    // C++03
    // -- csetjmp
    using std::jmp_buf;
    using std::longjmp;
    // -- csignal
    using std::sig_atomic_t;
    using std::signal;
    using std::raise;
    // -- cstdlib<-base.hxx
    using std::abort;
    using std::atexit;
    using std::exit;
    using std::system;
    using std::getenv;
    // C++11
    // -- cstdlib<-base.hxx
    using std::_Exit;
    using std::at_quick_exit;
    using std::quick_exit;
} // namespace son8::c

#endif//SON8_C_EXEC_HXX

// Apache License 2.0
// NO WARRANTY OF ANY KIND see <http://www.apache.org/licenses/LICENSE-2.0>
// SPDX-License-Identifier: Apache-2.0
// lib: `c_header` C++17 Standard C Entities Namespace
// Ⓒ Copyright (c) 2024-2026 Oleg'Ease'Kharchuk ᦒ
