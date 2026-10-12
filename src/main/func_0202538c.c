#include "ffc/types.h"

extern uint32_t func_02025274(uint8_t *p, uint32_t v, uint32_t w);

uint32_t func_0202538c(uint8_t *a, uint32_t idx, uint32_t p2, uint32_t *out)
{
    uint8_t *r7;
    uint32_t *v;
    uint32_t arr;
    uint32_t off;

    if (a == 0) {
        return 0;
    }
    arr = *(uint32_t *)(a + 0x14 + idx * 4);
    off = *(uint32_t *)(a + 4) + *(uint32_t *)(a + 0x10);
    r7 = a + (arr + off);
    v = (uint32_t *)(r7 + 0x10);
    out[0] = func_02025274(r7 + (v[0] + 0x24), p2, *(uint32_t *)(a + 0xc));
    out[1] = func_02025274(r7 + (v[1] + 0x24), p2, *(uint32_t *)(a + 0xc));
    out[2] = func_02025274(r7 + (v[2] + 0x24), p2, *(uint32_t *)(a + 0xc));
    out[3] = func_02025274(r7 + (v[3] + 0x24), p2, *(uint32_t *)(a + 0xc));
    out[4] = func_02025274(r7 + (v[4] + 0x24), p2, *(uint32_t *)(a + 0xc));
    return 1;
}
