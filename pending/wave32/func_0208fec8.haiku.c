#include "ffc/types.h"

extern uint32_t data_02144c00;

int32_t func_0208fec8(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint32_t w4 = *(uint32_t *)(b + 4);
    uint8_t f = (uint8_t)((w4 << 22) >> 29);
    uint8_t g = (uint8_t)(f + 0xff);
    if (g > 1 || b[0xd] != 0) {
        data_02144c00 = 0x28;
        return -1;
    }
    uint32_t w8 = *(uint32_t *)(b + 8);
    uint32_t r3 = w8 << 29;
    r3 = r3 >> 29;
    if (r3 == 0) {
        return *(int32_t *)(b + 0x18);
    }
    int32_t r0 = *(int32_t *)(b + 0x34);
    int32_t r1 = *(int32_t *)(b + 0x24);
    r0 = r0 + (r1 - *(int32_t *)(b + 0x1c));
    if (r3 >= 3) {
        r0 -= (int32_t)(r3 - 2);
    }
    return r0;
}
