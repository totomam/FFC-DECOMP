#include "ffc/types.h"

uint32_t func_02066540(uint8_t *p, int32_t a, int32_t b) {
    uint8_t *inner = *(uint8_t **)(p + 0x2c);
    int32_t w = *(int32_t *)(p + 0x34);
    int32_t idx = (a >> 3) + (b >> 3) * w;
    uint8_t *base = *(uint8_t **)(inner + 4);
    int32_t stride = *(int32_t *)(inner + 0x14);
    uint32_t word = *(uint32_t *)(base + idx * stride + ((b & 7) << 2));
    return (word >> ((a & 7) << 2)) & 0xf;
}
