#include "ffc/types.h"

extern void *func_0209bfdc(void *a, void *b);

void *func_0209d204(uint8_t *p)
{
    uint8_t flags = p[0];
    uint8_t buf[4];
    void *r = func_0209bfdc(p + 2, buf);
    if (!(flags & 0x40)) {
        return r;
    }
    return func_0209bfdc(r, buf);
}
