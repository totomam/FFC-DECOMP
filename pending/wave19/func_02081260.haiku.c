#include "ffc/types.h"

uint64_t func_02081260(void) {
    while (*(volatile uint16_t *)0x4000280 & 0x8000) {}
    return *(uint64_t *)0x40002a0;
}
