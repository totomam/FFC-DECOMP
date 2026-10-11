#include "ffc/types.h"

typedef void (*ovfn_t)(void *);

void func_ov002_02195fbc(uint8_t *p)
{
    uint8_t *q = p + 0x3c0;
    int32_t adj = *(int32_t *)(q + 4);
    int32_t d = adj >> 1;
    ovfn_t f;
    if (adj & 1) {
        uint8_t *vt = *(uint8_t **)(p + d);
        f = *(ovfn_t *)(vt + *(int32_t *)q);
    } else {
        f = *(ovfn_t *)q;
    }
    f(p + d);
}
