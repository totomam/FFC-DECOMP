#include "ffc/types.h"

extern int32_t func_0204dc74(void *a, void *b, int32_t x, uint32_t d, int32_t y);
extern int32_t func_0204dc48(void *a, void *b);
extern void func_0204ddc8(void *a, void *b, uint32_t x, uint32_t y);

int32_t func_0204dcc0(void *a, void *b, uint32_t c, uint32_t d)
{
    int32_t s[5];
    uint32_t *p = (uint32_t *)b;
    int32_t (*fn)();

    s[0] = -1;
    if (func_0204dc74(a, b, -1, d, -1) != 0) {
        if (func_0204dc48(a, b) != 0) {
            fn = (int32_t (*)())p[7];
            if (fn != 0) {
                s[1] = c;
                s[2] = p[9];
                s[3] = p[10];
                s[4] = d;
                s[0] = fn(b, 1, &s[1]);
                func_0204ddc8(a, b, s[2], s[3]);
            }
        }
    }
    return s[0];
}
