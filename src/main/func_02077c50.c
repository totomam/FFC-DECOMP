#include "ffc/types.h"

void func_02077c50(uint32_t *out, uint8_t *p) {
    uint16_t off = (uint16_t)((((int32_t)*(uint16_t *)(p + 2)) >> 8) & 0x7f);
    out[0] = (uint32_t)(p - off);
    uint32_t v = *(uint32_t *)(p + 4);
    out[1] = v + (uint32_t)(p + 0x10);
}
