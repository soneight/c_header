#ifndef SON8_C_FILE_HXX
#define SON8_C_FILE_HXX
/*
    File C related functionality
*/
#include <son8/c/base.hxx>
// std headers
#include <cstdio>

namespace son8::c {
    // stdio
    using std::FILE;
    using std::fpos_t;
    using std::clearerr;
    using std::getc;
    using std::getchar;
    using std::fclose;
    using std::feof;
    using std::ferror;
    using std::fgetc;
    using std::fgetpos;
    using std::fgets;
    using std::fflush;
    using std::fopen;
    using std::fprintf;
    using std::fputc;
    using std::fputs;
    using std::fread;
    using std::freopen;
    using std::fscanf;
    using std::fseek;
    using std::fsetpos;
    using std::ftell;
    using std::fwrite;
    using std::perror;
    using std::printf;
    using std::putc;
    using std::putchar;
    using std::puts;
    using std::remove;
    using std::rename;
    using std::rewind;
    using std::scanf;
    using std::setbuf;
    using std::setvbuf;
    using std::sprintf;
    using std::sscanf;
    using std::tmpfile;
    using std::tmpnam;
    using std::ungetc;
    using std::vfprintf;
    using std::vprintf;
    using std::vsprintf;
    // -- C++11
    using std::snprintf;
    using std::vfscanf;
    using std::vscanf;
    using std::vsnprintf;
    using std::vsscanf;
    // -- C++11 deprecated, C++14 removed
    //using std::gets;
} // namespace son8::c

#endif//SON8_C_FILE_HXX

// Ⓒ 2024-2025 Oleg'Ease'Kharchuk ᦒ
