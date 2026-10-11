#include "ffc/types.h"

extern uint32_t func_ov002_021d313c(uint32_t x);

int func_ov002_021d3194(uint8_t *obj, int flag, uint32_t off)
{
    uint32_t p = *(uint32_t *)(obj + 0xc8);
    uint8_t a = (uint8_t)func_ov002_021d313c(p);

    if (flag == 0) {
        p = p + off;
    } else {
        p = p - off;
    }
    return a - (uint8_t)func_ov002_021d313c(p);
}
