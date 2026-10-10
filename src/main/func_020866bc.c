#include "ffc/types.h"

uint32_t func_020866bc(uint32_t param) {
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    volatile uint32_t *ie = (volatile uint32_t *)0x04000210;
    uint16_t prev;
    uint32_t old;

    prev = *ime;
    *ime = 0;
    old = *ie;
    *ie = param;
    (void)*ime;
    *ime = prev;
    return old;
}
