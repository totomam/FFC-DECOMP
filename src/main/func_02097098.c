#include "ffc/types.h"

extern uint32_t func_0209d094(void *a, void *b);
extern uint8_t data_020b3040[];

void *func_02097098(uint8_t *p, void *q)
{
    uint8_t *r = p;
    uint32_t x = func_0209d094(q, data_020b3040);
    r += 0xc;
    if (x == 0) {
        r = 0;
    }
    return r;
}
