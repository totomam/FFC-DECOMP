#include "ffc/types.h"

extern uint32_t func_02070a40(void *p);

typedef int (*VFn)(void *self, int a, int *b, int c);

int func_0201ab3c(uint8_t *p)
{
    int x;
    void *o;

    if (p[0x2a] == 0) {
        return 0;
    }
    o = *(void **)(p + 0xc);
    if (func_02070a40(o) == 0) {
        return 0;
    }
    o = *(void **)(p + 0xc);
    return ((VFn)((void **)*(void **)o)[2])(o, 0, &x, 1);
}
