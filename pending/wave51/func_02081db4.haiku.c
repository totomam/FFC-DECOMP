#include "ffc/types.h"

extern int32_t func_02081f9c(uint32_t *p);
extern int32_t func_02081fc0(uint32_t *p);

int32_t func_02081db4(void) {
    uint32_t x;
    uint32_t y;

    *(volatile uint32_t *)0x04000600 = *(volatile uint32_t *)0x04000600 | (0x04000600u >> 11);

    do {
    } while (func_02081f9c(&x) != 0);

    do {
    } while (func_02081fc0(&y) != 0);

    *(volatile uint32_t *)0x04000440 = 3;
    *(volatile uint32_t *)0x04000454 = 0;
    *(volatile uint32_t *)0x04000440 = 0;
    if (y != 0) {
        *(volatile uint32_t *)0x04000448 = y;
    }

    *(volatile uint32_t *)0x04000454 = 0;
    *(volatile uint32_t *)(0x04000454u - 0x14u) = 2;
    *(volatile uint32_t *)(0x04000454u - 0xcu) = x;
    *(volatile uint32_t *)0x04000454 = 0;
    return 0;
}
