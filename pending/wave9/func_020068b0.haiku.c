#include "ffc/types.h"

extern void func_020798cc(int32_t a, int32_t b);
extern void func_0200640c(void *p);

void func_020068b0(uint8_t *p, int32_t n)
{
    if (*p != 0) {
        if (n < 0) {
            n = 0;
        }
        func_020798cc(0, n);
        func_0200640c(p);
    }
}
