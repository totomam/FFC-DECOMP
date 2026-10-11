#include "ffc/types.h"

extern uint32_t data_02141510[];

void func_ov000_02149840(uint32_t a, uint32_t b)
{
    uint8_t *p = (uint8_t *)data_02141510[1];
    uint8_t *q = *(uint8_t **)(p + 0xa4);
    if (q == 0) {
        return;
    }
    uint8_t *r = *(uint8_t **)(q + 0xc);
    if (r == 0) {
        return;
    }
    *(uint32_t *)(r + 0x814) = a;
    *(uint32_t *)(r + 0x818) = b;
}
