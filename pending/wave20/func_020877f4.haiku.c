#include "ffc/types.h"

void func_020877f4(uint8_t *r0, uint8_t *r1) {
    uint8_t *r2 = *(uint8_t **)(r1 + 0x10);
    uint8_t *r3 = *(uint8_t **)(r1 + 0x14);
    if (r2 == 0) {
        *(uint8_t **)(r0 + 0x8c) = r3;
    } else {
        *(uint8_t **)(r2 + 0x14) = r3;
    }
    if (r3 == 0) {
        *(uint8_t **)(r0 + 0x88) = r2;
    } else {
        *(uint8_t **)(r3 + 0x10) = r2;
    }
}
