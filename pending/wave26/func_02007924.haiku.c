#include "ffc/types.h"

extern uint32_t func_0207b880(void *a, uint32_t b, uint32_t c);

uint32_t func_02007924(uint8_t *p, uint16_t a, int32_t b) {
    if (b == -1) {
        b = 0;
    }
    if (func_0207b880(p, a, b)) {
        p[0x11] = 0;
        *(uint16_t *)(p + 8) = a;
        *(int32_t *)(p + 0xc) = b;
        p[0x10] = 1;
        *(uint16_t *)(p + 0xa) = 0x7f;
        return 1;
    }
    return 0;
}
