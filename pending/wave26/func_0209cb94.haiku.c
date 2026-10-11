#include "ffc/types.h"

void func_0209cb94(uint32_t *p, uint32_t off, uint32_t val) {
    uint8_t *base = (uint8_t *)p[6];
    uint8_t *d = base + off;
    *(uint32_t *)(base + off) = p[1];
    *(uint32_t *)(d + 4) = p[0];
    *(uint32_t *)(d + 8) = p[2];
    if (*(uint8_t *)p[0] == 0x2a) {
        *(uint32_t *)(d + 0xc) = (uint32_t)(d + 0x10);
        *(uint32_t *)(d + 0x10) = *(uint32_t *)p[1] + val;
    } else {
        *(uint32_t *)(d + 0xc) = p[1] + val;
    }
}
