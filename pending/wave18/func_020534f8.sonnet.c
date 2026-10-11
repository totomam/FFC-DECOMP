#include "ffc/types.h"

extern uint8_t data_0213e018[];

void func_020534f8(uint32_t idx) {
    uint16_t old = *(volatile uint16_t *)0x4000208;
    uint16_t val = 1;
    volatile uint16_t tmp;
    *(volatile uint16_t *)0x4000208 = 0;
    data_0213e018[idx] = 1;
    tmp = *(volatile uint16_t *)0x4000208;
    if (old == 0) {
        val = 0;
    }
    *(volatile uint16_t *)0x4000208 = val;
}
