#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern uint32_t func_0201c1f0(uint32_t a, uint32_t b, uint32_t c);

int func_ov003_0216b028(uint8_t *p)
{
    uint32_t vals[2] = {0, 0};
    uint32_t *v = vals;
    uint32_t i;
    uint32_t *q;
    uint32_t off;

    for (i = 0; i < 2; i++) {
        if (i == 1 && (uint16_t)(*(uint16_t *)p + 0xffef) <= 5) {
            vals[1] = *(uint32_t *)(p + *(uint32_t *)(p + 8) + 4);
        } else {
            off = *(uint32_t *)(p + 8);
            q = (uint32_t *)(p + off);
            { uint32_t w = *(uint32_t *)((uint8_t *)q + (i << 2)); *(uint32_t *)((uint8_t *)v + (i << 2)) = func_0201c1f0(data_020b93b8, w >> 24, w & 0xffffff); }
        }
    }

    switch (*(uint16_t *)p) {
    case 11:
    case 17:
        if (vals[0] == vals[1]) return 1;
        return 0;
    case 12:
    case 18:
        if (vals[0] != vals[1]) return 1;
        return 0;
    case 13:
    case 19:
        if (vals[0] < vals[1]) return 1;
        return 0;
    case 14:
    case 20:
        if (vals[0] <= vals[1]) return 1;
        return 0;
    case 15:
    case 21:
        if (vals[0] > vals[1]) return 1;
        return 0;
    case 16:
    case 22:
        if (vals[0] >= vals[1]) return 1;
        return 0;
    default:
        return 0;
    }
}
