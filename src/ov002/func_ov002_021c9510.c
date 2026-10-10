#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020ab7b8;

void *func_ov002_021c9510(uint32_t p)
{
    uint32_t *o = (uint32_t *)func_0205681c(0x14);
    if (o != 0) {
        o[2] = 0;
        o[3] = 0x100d8;
        o[0] = (uint32_t)&data_020ab7b8;
        o[4] = p;
    }
    return o;
}
