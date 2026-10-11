#include "ffc/types.h"

extern uint32_t data_0213e060[];

uint32_t func_02054380(void) {
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint32_t saved = 0;
    uint16_t prev;
    uint8_t *p;

    prev = *ime;
    *ime = 0;
    if (prev) {
        saved = 1;
    }
    if (++data_0213e060[1] == 1) {
        p = (uint8_t *)data_0213e060[0];
        p[9] = 1;
    }
    prev = *ime;
    *ime = saved;
    return saved;
}
