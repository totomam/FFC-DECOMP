#include "ffc/types.h"

void func_ov003_0215b064(uint8_t *p, uint16_t a, uint16_t b, uint16_t *src) {
    uint32_t i;
    *(uint16_t *)(p + 0x334) = a;
    *(uint16_t *)(p + 0x336) = b;
    i = 0;
    do {
        *(uint16_t *)(p + 0x338 + i * 2) = src[i];
        i++;
    } while (i < 5);
}
