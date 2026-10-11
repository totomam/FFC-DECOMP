#include "ffc/types.h"

uint32_t func_020866dc(uint32_t mask)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    volatile uint32_t *ie = (volatile uint32_t *)0x04000210;
    uint16_t old = *ime;
    uint32_t r;

    *ime = 0;
    r = *ie;
    *ie = r | mask;
    (void)*ime;
    *ime = old;
    return r;
}
