#include "ffc/types.h"

void func_0208b244(void) {
    volatile uint32_t v = *(volatile uint32_t *)0x2fffc3c;
    uint32_t w;
    do {
        w = *(volatile uint32_t *)0x2fffc3c;
    } while (v == w);
}
