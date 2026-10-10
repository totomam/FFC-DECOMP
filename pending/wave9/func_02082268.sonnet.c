#include "ffc/types.h"

uint32_t func_02082268(void) {
    uint32_t p = 0x4000008;
    int c = (*(volatile uint16_t *)p & 0x3c) >> 2;
    uint32_t d = *(volatile uint32_t *)(p - 8);
    uint32_t a = (d & 0x07000000) >> 24;
    return (c << 14) + ((a << 16) + 0x06000000);
}
