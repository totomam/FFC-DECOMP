#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02056830(uint32_t n);
extern uint32_t data_020ad6f4;

void *func_0203bd28(uint32_t p)
{
    uint32_t *r4 = (uint32_t *)func_0205681c(0x10);
    if (r4 != 0) {
        r4[0] = (uint32_t)&data_020ad6f4;
        r4[2] = p;
        r4[3] = func_02056830((p + 7) >> 3);
    }
    return r4;
}
