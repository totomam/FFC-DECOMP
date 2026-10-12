#include "ffc/types.h"

extern void *func_0207a7e8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0207af5c(uint16_t x, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_0207b0f4(uint32_t x, uint32_t c, uint32_t d);
extern uint32_t func_0207ab40(uint32_t x);

uint32_t func_0207aed0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *out)
{
    uint32_t r;
    uint8_t *p = (uint8_t *)func_0207a7e8(a, b, c, d);
    if (p == 0) {
        return 2;
    }
    r = func_0207af5c(*(uint16_t *)(p + 4), b, c, d, 0);
    if (r != 0) {
        return r;
    }
    if (b & 1) {
        r = func_0207b0f4(*(uint32_t *)p, c, d);
        if (r == 0) {
            return 6;
        }
    } else {
        r = func_0207ab40(*(uint32_t *)p);
    }
    if (out != 0) {
        *out = r;
    }
    return 0;
}
