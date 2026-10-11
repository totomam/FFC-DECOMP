#include "ffc/types.h"

extern void func_ov004_02145434(void *p);

void func_ov004_0214541c(uint8_t *p, uint32_t v, ...) {
    uint8_t *q = p;
    uint32_t x = *(volatile uint32_t *)&v;
    *(uint32_t *)(q + 0xac) = x;
    func_ov004_02145434(p);
}
