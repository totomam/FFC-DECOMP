#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_0201a47c(uint32_t r, uint32_t a, uint32_t b);
extern uint32_t data_020b93b8;

void func_0201a43c(uint32_t a, uint32_t b) {
    uint32_t r;
    uint16_t old;
    uint16_t en;

    r = func_0205681c(0x1e0);
    if (r != 0) {
        r = func_0201a47c(r, a, b);
    }
    en = 0;
    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    data_020b93b8 = r;
    (void)*(volatile uint16_t *)0x4000208;
    if (old != 0) {
        en = 1;
    }
    *(volatile uint16_t *)0x4000208 = en;
}
