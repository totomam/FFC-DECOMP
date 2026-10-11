#include "ffc/types.h"

extern int func_02030f24(void *a, void *b);

int func_02030f04(void *a, void *p) {
    volatile uint32_t r3;
    uint8_t *r4;
    int ret;
    if (*(volatile uint32_t *)p & 1) {
        r4 = *(uint8_t * volatile *)((volatile uint8_t *)p + 8);
        r3 = *(volatile uint32_t *)((volatile uint8_t *)p + 4);
    } else {
        r4 = (uint8_t *)p + 1;
        r3 = ((*(volatile uint8_t *)p) << 24) >> 25;
    }
    ret = func_02030f24(a, r4);
    return ret + r3;
}
