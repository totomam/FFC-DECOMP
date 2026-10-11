#include "ffc/types.h"

uint32_t func_020812c8(void) {
    uint32_t a = 0x40002b0;
    while (*(volatile uint16_t *)a & (a >> 11));
    return (*(volatile uint32_t *)(a + 4) + ((a + 4) >> 17)) >> 10;
}
