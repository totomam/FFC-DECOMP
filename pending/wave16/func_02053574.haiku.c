#include "ffc/types.h"

extern uint8_t data_0213e018[];

void func_02053574(uint32_t idx)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t prev = *ime;
    uint16_t val = 0;

    *ime = 0;
    data_0213e018[idx] = 0;
    (void)*ime;
    if (prev) {
        val = 1;
    }
    *ime = val;
}
