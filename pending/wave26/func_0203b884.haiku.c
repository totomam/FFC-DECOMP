#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020683e4(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_0203b884(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *ap = &c;
    void *p = func_0205681c(0x70);
    if (p != 0) {
        func_020683e4(p, a, b, ap[0], ap[1], ap[-1]);
    }
}
