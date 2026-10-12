#include "ffc/types.h"

extern void func_ov005_02196fc4(uint32_t a, uint32_t b);
extern uint32_t func_ov008_0219b694(void *p, uint32_t x);
extern uint32_t func_ov008_0219ba0c(void *p, uint32_t x);
extern uint32_t func_0201e994(uint32_t x);
extern void func_ov005_02196bec(uint32_t x, uint32_t y);
extern uint32_t data_020b93b8;

void func_ov008_0219b6f4(uint8_t *a)
{
    uint8_t i;

    func_ov005_02196fc4(*(uint32_t *)(a + 0xf8), *(uint32_t *)(a + 0x10c));

    for (i = 0; i < *(uint32_t *)(a + 0xd0); i++) {
        uint32_t r;
        if (func_ov008_0219b694(a, (uint32_t)i + ((uint32_t)a[0x104] << 3)) != 0) {
            goto one;
        }
        r = func_ov008_0219ba0c(a, (uint32_t)i + ((uint32_t)a[0x104] << 3));
        if (*(uint32_t *)(a + 0x10c) + r > *(uint32_t *)(a + 0x108)) {
            goto zero;
        }
        if (a[0x110] < func_0201e994(data_020b93b8)) {
            goto one;
        }
zero:
        func_ov005_02196bec(((uint32_t *)*(uint32_t *)(a + 0xcc))[i], 0);
        continue;
one:
        func_ov005_02196bec(((uint32_t *)*(uint32_t *)(a + 0xcc))[i], 1);
    }
}
