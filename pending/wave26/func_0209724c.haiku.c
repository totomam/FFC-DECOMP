#include "ffc/types.h"

void func_0209724c(void *p, uint32_t a) {
    uint8_t *b = (uint8_t *)p;
    uint8_t f = 0;
    *(uint8_t *)(b + 0x2f) = 0;
    *(uint32_t *)(b + 0x20) = a;
    *(uint8_t *)(b + 0x2e) = 1;
    if (a == 0) {
        f = 1;
    }
    *(uint8_t *)(b + 0x2e) = f;
    *(uint16_t *)(b + 0x2c) = 0x1002;
    *(uint32_t *)(b + 0x28) = 0;
    *(uint32_t *)(b + 0x24) = 6;
    *(uint32_t *)(b + 0x4) = 0;
    *(uint32_t *)(b + 0x8) = 0;
    *(uint32_t *)(b + 0xc) = 0;
    *(uint32_t *)(b + 0x10) = 0;
    *(uint32_t *)(b + 0x14) = 0;
    *(uint32_t *)(b + 0x18) = 0;
    *(uint32_t *)(b + 0x1c) = 0;
}
