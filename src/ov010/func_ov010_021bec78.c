#include "ffc/types.h"

extern void func_ov010_021becbc(uint8_t *base, uint32_t idx);

void func_ov010_021bec78(uint8_t *base, uint32_t val)
{
    uint32_t a = *(uint32_t *)(base + 0xf8);
    uint32_t n;
    uint32_t i;

    if (a == *(uint32_t *)(base + 0xfc)) {
        n = *(uint32_t *)(base + 0x120) - (a << 3);
    } else {
        n = 8;
    }

    for (i = 0; i < n; i++) {
        if (val == (*(uint32_t **)(base + 0x108))[i]) {
            func_ov010_021becbc(base, i);
            return;
        }
    }
}
