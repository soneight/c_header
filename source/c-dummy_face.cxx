#include <son8/c.hxx>
// dummy source to trigger cmake generation of compile commands json workaround
namespace son8::dummy_face {
    // memset memory with zero
    static void zero_memory( void *buff, c::size_t size ) {
        c::memset(  buff, 0, size );
    }
}
