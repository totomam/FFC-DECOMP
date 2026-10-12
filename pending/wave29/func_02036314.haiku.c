#include "ffc/types.h"

extern uint32_t func_02035ff4(void *object);
extern uint8_t func_02035dac(const void *object);

uint32_t func_02036314(void *a) {
    uint8_t *p = (uint8_t *)a;
    uint32_t n;
    uint32_t i;
    if (func_02035ff4(a) != 0) {
        return 0;
    }
    p += 4;
    n = 0;
    for (i = 1; i < 4; i++) {
        if (func_02035dac(p + (i << 3)) != 0) {
            n++;
        }
    }
    return n;
}
