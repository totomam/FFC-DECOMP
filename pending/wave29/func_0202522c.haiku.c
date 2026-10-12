#include "ffc/types.h"

void func_0202522c(uint8_t *base, uint32_t idx, uint8_t *table, uint32_t *out1, uint32_t *out2)
{
    uint32_t w;
    uint32_t v;
    uint8_t sub;
    if (base == 0 || table == 0) {
        *out1 = 0;
        *out2 = 0;
        return;
    }
    v = *(uint32_t *)(table + (idx << 5));
    sub = (uint8_t)(v >> 24) & 0x7f;
    w = *(uint32_t *)(base + sub * 0x1c + 0x24);
    *out1 = 8u << ((w & 0x700000) >> 20);
    *out2 = 8u << ((w & 0x3800000) >> 23);
}
