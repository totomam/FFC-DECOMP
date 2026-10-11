#include "ffc/types.h"

extern void *func_ov000_02168b44(void *a, void *b);

uint32_t func_ov001_02181c3c(uint8_t *self, uint32_t v, uint16_t h)
{
    struct {
        uint32_t *p;
        uint32_t v;
        uint16_t h;
        uint8_t pad[0xa4 - 10];
    } s;
    void *r;

    s.v = v;
    s.h = h;
    s.p = &s.v;
    r = func_ov000_02168b44(*(void **)(self + 0xc), &s);
    if (r != 0) {
        return *(uint32_t *)r;
    }
    return 0;
}
