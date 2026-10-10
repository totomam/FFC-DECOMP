#include "ffc/types.h"

extern uint8_t *data_0213ec90;

uint32_t func_0207a880(int32_t a) {
    uint8_t *d = data_0213ec90;
    uint32_t *r3 = *(uint32_t **)(d + 0x98);
    uint32_t off = r3[4];
    uint32_t *e;
    uint32_t v;
    uint32_t *q;
    if (off == 0) {
        r3 = 0;
    } else {
        r3 = (uint32_t *)((uint8_t *)r3 + off);
    }
    if (r3 == 0) return 0;
    if (a < 0) return 0;
    if ((uint32_t)a >= r3[0]) return 0;
    e = (uint32_t *)((uint8_t *)r3 + ((uint32_t)a << 2));
    v = e[1];
    q = *(uint32_t **)(d + 0x98);
    if (v == 0) return 0;
    return (uint32_t)q + v;
}
