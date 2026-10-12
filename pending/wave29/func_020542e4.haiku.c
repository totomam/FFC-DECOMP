#include "ffc/types.h"

extern void func_0205428c(int arg);

typedef uint32_t *(*VFn)(void *self, int arg);

void func_020542e4(uint8_t *p)
{
    if (p[0x38] != 0) {
        void *o = (void *)(p + 0xc);
        uint32_t *s = ((VFn)(((void **)(*(void **)o))[9]))(o, 0);
        int r4 = 0;
        uint32_t r1 = s[1];
        uint32_t r0 = s[2];
        uint32_t t = r1 & (r0 ^ r1);
        if (t & 0x30c) {
            if ((r1 & 0x30c) == 0x30c) {
                r4 = 1;
            }
        }
        if (r4 != 0) {
            func_0205428c(0);
        }
    }
}
