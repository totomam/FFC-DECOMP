#include "ffc/types.h"

extern uint32_t func_02081f9c(uint32_t *p);
extern uint32_t func_02081fc0(uint32_t *p);

uint32_t func_02081e18(void) {
    uint32_t a;
    uint32_t b;
    volatile uint32_t *r;

    *(volatile uint32_t *)0x4000600 |= 0x4000600 >> 11;
    while (func_02081f9c(&a) != 0) {
    }
    while (func_02081fc0(&b) != 0) {
    }
    r = (volatile uint32_t *)0x4000440;
    r[0] = 3;
    r[5] = 0;
    r[0] = 0;
    if (b != 0) {
        r[2] = b;
    }
    r = (volatile uint32_t *)0x4000440;
    r[0] = 2;
    r[2] = a;
    r[5] = 0;
    return 0;
}
