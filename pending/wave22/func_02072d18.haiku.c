#include "ffc/types.h"

extern uint32_t func_ov000_0215b200(uint32_t a, uint32_t b, void (*c)(void), void *d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_02072e18(void);

void func_02072d18(uint8_t *p) {
    uint32_t r = func_ov000_0215b200(2, *(uint32_t *)(p + 0x84), func_02072e18, p, 0, 0, 0, 0, 0);
    *(uint32_t *)(p + 0x9c) = r;
    {
        uint8_t *q = *(uint8_t **)(p + 0x80);
        q[0x23] = 0;
    }
}
