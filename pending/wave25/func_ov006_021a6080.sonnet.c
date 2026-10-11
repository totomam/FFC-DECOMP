#include "ffc/types.h"

extern int func_ov006_0219cefc(void *p);
extern uint8_t data_ov006_021bc704;

int func_ov006_021a6080(void) {
    uint8_t *base = &data_ov006_021bc704;
    uint8_t v;

    if (func_ov006_0219cefc(*(void **)(base + 4)) == 0) {
        *base = 1;
        return 1;
    }
    v = *((uint8_t *)*(void **)(base + 4) + 0x116);
    if (v == 1 || (uint8_t)(v + 0xfd) <= 2) {
        return 0;
    }
    {
        return 2;
    }
    return 0;
}
