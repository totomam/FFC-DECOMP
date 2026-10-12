/* cflags: -lang c++ -Cpp_exceptions on */
#include "ffc/types.h"

extern "C" void func_0209d02c(uint8_t *base, uint32_t count, uint32_t stride, void (*fn)(void *))
{
    if (fn == 0) {
        return;
    }
    try {
        uint8_t *p = base + count * stride;
        while (count != 0) {
            p -= stride;
            fn(p);
            count--;
        }
    } catch (...) {
        throw;
    }
}
