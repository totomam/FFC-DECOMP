#include "ffc/types.h"

extern uint32_t func_0206a6c8(uint32_t a, uint32_t b, uint32_t *c, uint8_t *d, uint8_t *e);
extern uint32_t func_0206a598(uint32_t a, uint32_t b, uint8_t c, uint8_t d, uint32_t e);

uint32_t func_0206a510(uint32_t *out, uint32_t x, uint32_t y) {
    uint8_t pair[2];
    uint32_t t;
    uint32_t r;
    r = func_0206a6c8(x, y, &t, &pair[1], pair);
    *out = func_0206a598(x, r, pair[1], pair[0], y);
    return *out;
}
