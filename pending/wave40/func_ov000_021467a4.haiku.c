#include "ffc/types.h"

int func_ov000_021467a4(uint8_t *out, uint8_t *a, uint8_t *b) {
    int r0 = 0;
    int r1 = 0;
    int r2 = 0;
    int r6 = 0;
    int x;
    int y;
    uint32_t u5;

    if (b[8] != 10 && b[8] != 11) {
        r6 = 1;
    }
    if (r6 != 0) {
        x = *(uint16_t *)(a + 2);
        y = *(uint16_t *)(b + 0xa);
        x = (x << 8) | (x >> 8);
        if (y == (uint16_t)x) {
            r2 = 1;
        }
    }
    if (r2 != 0) {
        x = *(uint16_t *)a;
        y = *(uint16_t *)(b + 0x18);
        x = (x << 8) | (x >> 8);
        if (y == (uint16_t)x) {
            r1 = 1;
        }
    }
    if (r1 != 0) {
        x = *(uint16_t *)(out + 0xe);
        y = *(uint16_t *)(out + 0xc);
        u5 = (uint32_t)(uint16_t)((y << 8) | (y >> 8)) << 16;
        u5 |= (uint16_t)((x << 8) | (x >> 8));
        if (*(uint32_t *)(b + 0x1c) == u5) {
            r0 = 1;
        }
    }
    return r0;
}
