#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t flag);
extern uint32_t func_0206a714(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_0213e164[];

uint32_t func_0206aa00(void) {
    uint32_t v;

    v = func_0205681c(0x100);
    if (v != 0) {
        v = func_0206a714(v, 0x16, 0x100 << 4);
    }
    data_0213e164[0] = v;

    v = func_0205681c(0x100);
    if (v != 0) {
        v = func_0206a714(v, 0x17, 0x100 << 5);
    }
    data_0213e164[1] = v;

    v = func_0205681c(0x100);
    if (v != 0) {
        v = func_0206a714(v, 0x18, 0x100 << 4);
    }
    data_0213e164[2] = v;

    return v;
}
