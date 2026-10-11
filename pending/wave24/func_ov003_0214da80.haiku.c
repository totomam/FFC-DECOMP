#include "ffc/types.h"

extern uint8_t *func_ov003_0214da1c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov003_0214da80(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t *out1, uint32_t *out2)
{
    uint32_t mode = c;
    uint32_t r4 = 0;
    uint8_t *q = func_ov003_0214da1c(p, a, b, c);
    uint32_t r2;
    switch (mode) {
    case 0:
        r2 = *(uint16_t *)(q + 4);
        r4 = *(uint16_t *)(q + 8);
        break;
    case 1:
        r2 = *(uint16_t *)(q + 6);
        r4 = *(uint16_t *)(q + 10);
        break;
    default:
        r2 = 1;
        break;
    }
    {
        uint16_t r1 = *(uint16_t *)(q + 12);
        *out1 = r4;
        *out2 = r1;
    }
    return r2;
}
