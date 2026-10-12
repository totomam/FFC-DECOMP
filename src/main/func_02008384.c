#include "ffc/types.h"

void func_02008384(uint8_t *p) {
    int32_t i;
    *(uint16_t *)(p + 0x12) = 0xff;
    *(uint16_t *)(p + 0x10) = 2;
    *(uint16_t *)(p + 0x22) = 1;
    *(uint16_t *)(p + 0x20) = 1;
    for (i = 2; i < 0x100; i++) {
        uint8_t *q = p + (i << 4);
        *(uint16_t *)(q + 0x12) = i - 1;
        *(uint16_t *)(q + 0x10) = i + 1;
    }
    *(uint16_t *)(p + 0x32) = 0;
    *(uint16_t *)(p + 0x1000) = 0;
    *(uint32_t *)p = 0;
}
