#include "ffc/types.h"

uint32_t func_02086700(uint32_t mask) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint32_t *ie = (volatile uint32_t *)0x4000210;
    uint16_t old_ime = *ime;
    *ime = 0;
    uint32_t old = *ie;
    *ie = old & ~mask;
    (void)*ime;
    *ime = old_ime;
    return old;
}
