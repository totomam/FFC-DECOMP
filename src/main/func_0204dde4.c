#include "ffc/types.h"

extern uint32_t *func_0204dc74(uint32_t *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t *func_0204dc48(uint32_t *a, uint32_t *x);

int func_0204dde4(uint32_t *p, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t *r;

    uint32_t *t = func_0204dc74(p, b, c, d);
    if (t != 0) {
        r = func_0204dc48(p, t);
        if (r != 0) {
            r[0x28 / 4] = c;
            r[0x1c / 4] = d;
            r[1] = e;
            return 0;
        }
        return -1;
    }
    return -1;
}
