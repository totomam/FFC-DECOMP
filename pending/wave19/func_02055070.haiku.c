#include "ffc/types.h"

void func_02055070(uint32_t *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old = *ime;
    *ime = 0;
    p[0x5f] += 1;
    (void)*ime;
    *ime = (old != 0) ? 1 : 0;
}
