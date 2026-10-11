#include "ffc/types.h"

extern uint32_t data_ov001_02194c38[];
extern uint32_t *func_ov001_0217efc8(uint32_t a, uint32_t b, uint32_t c, uint32_t *d);

uint32_t func_ov001_0217f9fc(uint32_t *a, uint32_t b,
                             uint32_t *(*cb)(uint32_t, uint32_t, uint32_t *),
                             uint32_t d)
{
    uint32_t *p = a;
    uint32_t *r;

    if (p == 0) {
        p = (uint32_t *)data_ov001_02194c38[3];
    }
    if (p == 0) {
        r = &d;
    } else {
        r = cb(p[3], b, &d);
        if (r == 0) {
            r = func_ov001_0217efc8(p[3], b, 0, &d);
        }
    }
    return *r;
}
