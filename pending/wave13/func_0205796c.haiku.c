#include "ffc/types.h"

extern void func_020577e0(void *p);

void func_0205796c(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (b[0x1d] != 0) {
        b[0x1d] = 0;
        func_020577e0(p);
    }
}
