#include "ffc/types.h"

extern uint8_t data_ov001_02194c38[];
extern uint32_t func_ov001_0217efc8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

uint32_t func_ov001_0217fa88(uint8_t *p, uint32_t x, uint32_t (*cb)(uint32_t, uint32_t, uint32_t), uint32_t d)
{
    uint32_t r;
    if (p == 0) {
        p = *(uint8_t **)(data_ov001_02194c38 + 0xc);
    }
    if (p == 0) {
        return d;
    }
    r = cb(*(uint32_t *)(p + 0xc), x, d);
    if (r == 0) {
        r = func_ov001_0217efc8(*(uint32_t *)(p + 0xc), x, 2, d);
    }
    return r;
}
