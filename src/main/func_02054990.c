#include "ffc/types.h"

void func_02054990(uint8_t *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t old = *ime;
    *ime = 0;
    p[8] = 1;
    (void)*ime;
    *ime = old ? 1 : 0;
}
