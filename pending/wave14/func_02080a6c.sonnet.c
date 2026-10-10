/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"

struct T3 { uint32_t a, b, c; };

extern "C" void func_02080a6c(T3 *s, T3 *d)
{
    for (int i = 0; i < 4; i++) {
        *d++ = *s++;
        s = (T3*)((uint32_t*)s + 1);
    }
}
