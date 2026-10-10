#include "ffc/types.h"

void func_02054738(uint8_t *p) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    volatile uint32_t tmp;
    uint16_t old = *ime;
    *ime = 0;
    p[8] = 0;
    (void)*ime;
    uint16_t enable = 0;
    if (old) {
        enable = 1;
    }
    *ime = enable;
    (void)&tmp;
}
