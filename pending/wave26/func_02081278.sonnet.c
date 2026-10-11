#include "ffc/types.h"

uint32_t func_02081278(void) {
    volatile uint16_t *ctrl = (volatile uint16_t *)0x4000280;
    volatile uint32_t *res = (volatile uint32_t *)0x40002a0;
    uint64_t v;

    while (*ctrl & 0x8000) {
    }
    v = *(volatile uint64_t *)res;
    v += 0x80000;
    return (uint32_t)(v >> 20);
}
