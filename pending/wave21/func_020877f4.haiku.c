#include "ffc/types.h"

void func_020877f4(uint8_t *r0, uint8_t *r1)
{
    uint32_t a = *(uint32_t *)(r1 + 0x10);
    uint32_t b = *(uint32_t *)(r1 + 0x14);
    if (a == 0) {
        *(uint32_t *)(r0 + 0x8c) = b;
    } else {
        *(uint32_t *)(a + 0x14) = b;
    }
    if (b == 0) {
        *(uint32_t *)(r0 + 0x88) = a;
    } else {
        *(uint32_t *)(b + 0x10) = a;
    }
}
