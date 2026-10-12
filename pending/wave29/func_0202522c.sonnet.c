#include "ffc/types.h"

void func_0202522c(uint8_t *base, uint32_t idx, uint8_t *table, uint32_t *out1, uint32_t *out2)
{
    uint32_t w, v, a, b;
    if (base == 0 || table == 0) {
        *out1 = 0;
        *out2 = 0;
        return;
    }
    v = *(uint32_t *)(table + (idx << 5));
    w = *(uint32_t *)(base + ((v >> 24) & 0x7f) * 0x1c + 0x24);
    a = w & 0x700000;
    b = w & 0x3800000;
    b = 8 << (b >> 23);
    a = 8 << (a >> 20);
    *out1 = a;
    *out2 = b;
}
