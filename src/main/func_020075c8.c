#include "ffc/types.h"

extern int32_t func_0200764c(void *a, int32_t b, int32_t c);
extern void func_02079b04(void *a, int32_t b, int32_t c);

void func_020075c8(void *a, int32_t b, int32_t c)
{
    int32_t v;
    if (func_0200764c(a, b, c)) {
        v = b;
        if (b < -32768) {
            v = -32768;
        } else if (b > (int32_t)(0xffff8000u >> 17)) {
            v = (int32_t)(0xffff8000u >> 17);
        }
        func_02079b04(a, c, v);
    }
}
