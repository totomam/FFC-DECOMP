#include "ffc/types.h"

extern void *func_0204de50(void *p);
extern void *func_0204de78(void *p);
extern uint32_t func_0204c19c(void *p, void *q, uint32_t n);
extern uint8_t data_020b0210[];
extern uint8_t data_020b022c[];

uint32_t func_0204c200(void *a)
{
    uint8_t *obj;
    uint8_t *r4;
    uint32_t val;
    uint32_t r;

    obj = *(uint8_t **)func_0204de78(func_0204de50(a));
    r4 = *(uint8_t **)(obj + 0xc);
    val = *(uint32_t *)(r4 + 0x244);
    if (val == 0) {
        return 0;
    }
    r = func_0204c19c(a, data_020b0210, 0x1b);
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(a, r4 + 0x1e8, *(uint32_t *)(r4 + 0x244));
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(a, data_020b022c, 2);
    if (r != 0) {
        return r;
    }
    return 0;
}
