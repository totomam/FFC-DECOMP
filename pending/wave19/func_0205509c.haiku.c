#include "ffc/types.h"

void func_0205509c(uint8_t *base) {
    uint16_t old = *(volatile uint16_t *)0x04000208;
    *(volatile uint16_t *)0x04000208 = 0;
    int32_t *p = (int32_t *)(base + 0x17c);
    *p = *p - 1;
    (void)*(volatile uint16_t *)0x04000208;
    uint16_t val = 0;
    if (old != 0) {
        val = 1;
    }
    *(volatile uint16_t *)0x04000208 = val;
}
