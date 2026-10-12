#include "ffc/types.h"

extern uint16_t func_02088a2c(void *object);
extern int func_02087460(uint16_t v);
extern uintptr_t func_0207cab4(void);

uint32_t func_0207cbe4(void *object) {
    uint32_t r4 = 0;
    volatile uint32_t *base;
    uint32_t w;
    uint32_t cond;
    uint16_t v;

    v = func_02088a2c(object);
    if (v == 1) {
        r4 = 7;
    } else if (func_02087460(v) == 0) {
        r4 = 3;
    } else {
        base = (volatile uint32_t *)func_0207cab4();
        w = base[0x6d];
        cond = r4;
        if (((w << 23) >> 31)) {
            r4 |= 4;
            cond = 1;
        } else if (((w << 26) >> 31)) {
            cond = 1;
        }
        if (cond != 0) {
            if (((base[0x6d] << 16) >> 31)) {
                r4 |= 1;
            }
            if (((base[0x6d] << 15) >> 31)) {
                r4 |= 2;
            }
        }
    }
    return r4;
}
