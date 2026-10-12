#include "ffc/types.h"

extern uint8_t *data_ov006_021ba160;

typedef struct {
    int32_t w0;
    int32_t pad;
    int32_t w2;
    int32_t pad2;
} Ent;

int func_ov006_0219ac6c(uint8_t *a0, uint8_t *a1, uint32_t x, uint8_t *a3)
{
    uint8_t *s = a1;
    uint8_t *p = a0;
    int8_t i;
    uint32_t t;
    uint32_t d;
    int32_t r0;
    int32_t v;
    Ent *e;

    if (x >= *(uint16_t *)(s + 0x12)) {
        return 0;
    }
    for (i = 2; i >= 0; i--) {
        if (x >= *(uint16_t *)(s + 0xc + i * 2)) {
            break;
        }
    }
    if (i < 0) {
        return 0;
    }
    a3 += 0xc;
    t = *(uint16_t *)(s + 0xc + i * 2);
    d = x - t;
    r0 = (int32_t)d * *(int32_t *)(data_ov006_021ba160 + 0x1318);
    e = (Ent *)(a3 + (i << 4));
    v = e->w2 - r0;
    *(int32_t *)(p + 4) = v;
    if ((uint32_t)v > (uint32_t)*(int32_t *)(data_ov006_021ba160 + 0x1318)) {
        *(int32_t *)(p + 4) = *(int32_t *)(data_ov006_021ba160 + 0x1318);
    }
    *(int32_t *)(p + 8) = *(int32_t *)(s + i * 4) + r0;
    *(int32_t *)(p) = r0 + e->w0;
    p[0xc] = (uint8_t)i;
    return 1;
}
