#include "ffc/types.h"

extern uint32_t data_020a0304[];

typedef struct {
    uint32_t *mt;
    uint16_t index;
} MTState;

uint32_t func_0206c090(MTState *p)
{
    uint32_t n = p->index;
    uint32_t y;
    uint32_t *mt;

    if (n < 0xe3) {
        mt = p->mt;
        y = (mt[n] & 0x80000000u) | (mt[n + 1] & 0x7fffffffu);
        mt[n] = mt[n + 0x18d] ^ (y >> 1) ^ data_020a0304[y & 1];
    } else if (n < 0x26f) {
        mt = p->mt;
        y = (mt[n] & 0x80000000u) | (mt[n + 1] & 0x7fffffffu);
        mt[n] = mt[n - 0xe3] ^ (y >> 1) ^ data_020a0304[y & 1];
    } else {
        mt = p->mt;
        y = (mt[0x26f] & 0x80000000u) | (mt[0] & 0x7fffffffu);
        mt[0x26f] = mt[0x18c] ^ (y >> 1) ^ data_020a0304[y & 1];
    }

    n = p->index;
    p->index = n + 1;
    y = p->mt[n];
    if (p->index >= 0x270) {
        p->index = 0;
    }

    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680u;
    y ^= (y << 15) & 0xefc60000u;
    y ^= (y >> 18);
    return y;
}
