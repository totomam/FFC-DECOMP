#include "ffc/types.h"

void func_0201f960(uint8_t *p, uint32_t idx, uint8_t *out) {
    uint8_t *e = *(uint8_t **)(p + 0x68) + idx * 0x2c;
    out[0] = e[0];
    out[1] = e[1];
    out[2] = e[2];
    *(uint64_t *)(out + 4) = *(uint64_t *)(e + 4);
    *(uint32_t *)(out + 0xc) = *(uint32_t *)(e + 0xc);
    *(uint32_t *)(out + 0x10) = *(uint32_t *)(e + 0x10);
    *(uint32_t *)(out + 0x14) = *(uint32_t *)(e + 0x14);
    *(uint32_t *)(out + 0x18) = *(uint32_t *)(e + 0x18);
    *(uint32_t *)(out + 0x1c) = *(uint32_t *)(e + 0x1c);
    *(uint32_t *)(out + 0x20) = *(uint32_t *)(e + 0x20);
    *(uint32_t *)(out + 0x24) = *(uint32_t *)(e + 0x24);
    *(uint32_t *)(out + 0x28) = *(uint32_t *)(e + 0x28);
}
