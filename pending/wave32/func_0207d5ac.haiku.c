#include "ffc/types.h"

extern uint32_t func_0207d47c(uint32_t a, uint32_t b);

uint32_t func_0207d5ac(void) {
    if (!(*(volatile uint32_t *)0x2fffc00 & 0x20000000)) {
        return 0x20;
    }
    func_0207d47c(0xd6, 0);
    {
        uint32_t v = *(volatile uint32_t *)0x2fffae0;
        *(volatile uint32_t *)0x40001a4 = ((v & 0xf8ffffff) | 0xa7000000) & 0xFFFFE000;
    }
    while (!(*(volatile uint32_t *)0x40001a4 & 0x800000)) {
    }
    return *(volatile uint32_t *)0x4100010;
}
