#include "ffc/types.h"

extern uint32_t data_ov000_0216e088[];

uint32_t *func_ov000_0214f010(uint32_t *p)
{
    uint32_t *q = p + 1;
    uint32_t r = ((uint32_t (*)(uint32_t, uint32_t *))data_ov000_0216e088[3])(0, q);
    if (r != 0) {
        uint32_t *s = (uint32_t *)r;
        *s++ = (uint32_t)q;
        return s;
    }
    return (uint32_t *)r;
}
