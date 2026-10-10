#include "ffc/types.h"

extern uint32_t func_0202b2c8(uint32_t);

uint32_t func_0202ebe0(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0x84);
    if (v) {
        return func_0202b2c8(v);
    }
    return 0;
}
