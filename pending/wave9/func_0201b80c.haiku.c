#include "ffc/types.h"

uint32_t func_0201b80c(uint8_t *p) {
    uint32_t a = *(volatile uint32_t *)(p + 0xa4);
    uint32_t b = *(volatile uint32_t *)(p + 0xa8);
    (void)b;
    return a;
}
