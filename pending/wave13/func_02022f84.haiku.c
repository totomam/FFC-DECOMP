#include "ffc/types.h"

void func_02022f84(void *p, uint16_t a, uint32_t b);

void func_02022f84(void *p, uint16_t a, uint32_t b) {
    volatile uint32_t *reg = (volatile uint32_t *)0x4000358;
    *(uint16_t *)((uint8_t *)p + 0x1DC) = a;
    *(uint32_t *)((uint8_t *)p + 0x1E0) = b;
    *reg = a | (b << 16);
}
