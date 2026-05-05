#ifndef SON8_C_EXEC_HXX
#define SON8_C_EXEC_HXX
/*
    Execution C related functionality
*/
#include <son8/c/base.hxx>
// std
#include <cerrno> // IWYU pragma: keep
#include <csetjmp>
#include <csignal>

namespace son8::c {
    // C++03
    // -- csetjmp
    using std::jmp_buf;
    using std::longjmp;
    // -- csignal
    using std::raise;
    using std::sig_atomic_t;
    using std::signal;
    // -- cstdlib<-base.hxx
    using std::abort;
    using std::atexit;
    using std::exit;
    using std::getenv;
    using std::system;
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
