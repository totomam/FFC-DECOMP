#include "ffc/types.h"

extern void func_02088978(void);
extern void func_0208898c(void);

void func_020847b0(uint32_t idx) {
    volatile uint32_t *base;
    volatile uint32_t *reg;
    uint32_t v;
    func_02088978();
    base = (volatile uint32_t *)0x40000b8;
    reg = (volatile uint32_t *)((uint8_t *)base + idx * 12);
    v = reg[0];
    reg[0] = v & 0xc5ffffff;
    v = reg[0];
    reg[0] = v & 0x7fffffff;
    (void)reg[0];
    if (idx == 0) {
        volatile uint32_t *q = (volatile uint32_t *)((uint8_t *)base - 8);
        q[0] = 0;
        q[1] = 0;
        reg[0] = 0x81400001;
    }
    func_0208898c();
}
