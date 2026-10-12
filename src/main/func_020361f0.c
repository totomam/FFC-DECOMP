#include "ffc/types.h"

extern uint8_t func_02035dac(const void *object);
extern uint32_t func_02036134(const void *object);

uint32_t func_020361f0(void *p) {
    uint32_t sum;
    uint32_t t;
    uint32_t *r;
    int i;
    if (func_02035dac((uint8_t *)p + 4) == 0) {
        return 0;
    }
    sum = (*(uint32_t *)((uint8_t *)p + 0x58) << 13) >> 21;
    for (i = 0; i < 4; i++) {
        sum += func_02035dac((uint8_t *)p + 4 + (i << 3));
    }
    t = func_02036134(p);
    if (sum < t) {
        r = &sum;
    } else {
        r = &t;
    }
    return *r;
}
