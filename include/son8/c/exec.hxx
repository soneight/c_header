#ifndef SON8_C_EXEC_HXX
#define SON8_C_EXEC_HXX
/*
    Execution C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <cerrno>
#include <csetjmp>
#include <csignal>

namespace son8::c {
    // base.hxx->stdlib
    using std::abort;
    using std::atexit;
    using std::exit;
    using std::system;
    // -- C++11
    using std::at_quick_exit;
    using std::quick_exit;
    using std::_Exit;
    // setjmp
    using std::jmp_buf;
    using std::longjmp;
    // signal
    using std::sig_atomic_t;
    using std::signal;
    using std::raise;
} // namespace son8::c

#endif//SON8_C_EXEC_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
