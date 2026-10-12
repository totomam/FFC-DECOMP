#include "ffc/types.h"

extern uint32_t *func_0207a834(void *p);
extern uint32_t func_0207b138(uint32_t v, uint32_t a, uint32_t b);
extern uint32_t func_0207ab40(uint32_t v);

uint32_t func_0207af20(void *p0, uint32_t flags, uint32_t a, uint32_t b, uint32_t *out)
{
    uint32_t r;
    uint32_t *q = func_0207a834(p0);
    if (q == 0) {
        return 3;
    }
    if (flags & 8) {
        r = func_0207b138(*q, a, b);
        if (r == 0) {
            return 7;
        }
    } else {
        r = func_0207ab40(*q);
    }
    if (out != 0) {
        *out = r;
    }
    return 0;
}
