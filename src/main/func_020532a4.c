#include "ffc/types.h"

extern void func_02052be0(uint32_t v);
extern void func_02052c04(uint32_t v);

uint32_t *func_020532a4(uint32_t *a, uint32_t *b)
{
    if (b == a) {
        return a;
    }
    if (*b != 0) {
        func_02052be0(*b);
    }
    if (*a != 0) {
        func_02052c04(*a);
    }
    *a = *b;
    return a;
}
