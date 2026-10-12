#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t x);
extern uint32_t func_ov006_0219ad60(uint32_t i, void *ptr);
extern uint8_t *data_ov006_021ba160;

typedef struct {
    uint32_t a;
    void *ptr;
    uint32_t cnt;
    uint32_t b;
} Ent;

typedef struct {
    uint32_t w[3];
    uint16_t off[4];
} Out;

int func_ov006_0219abd4(Out *p, uint8_t *q)
{
    uint8_t i;
    uint32_t total = 0;
    uint8_t *g;
    uint32_t base;
    Ent *e;
    uint16_t *off;
    uint16_t v;

    off = (uint16_t *)((uint8_t *)p + 0xc);
    if (q == 0) {
        return total;
    }
    for (i = 0; i < 3; i++) {
        p->w[i] = total;
        total += ((Ent *)(q + 0xc))[i].cnt;
    }
    off[0] = 0;
    e = (Ent *)(q + 0xc);
    g = data_ov006_021ba160;
    base = *(uint32_t *)(g + 0x1318);
    for (i = 0; i < 3; i++) {
        uint32_t r = func_0209a978(e[i].cnt + base - 1);
        v = (uint16_t)(off[i] + (uint16_t)r);
        if (!func_ov006_0219ad60(i, e[i].ptr)) {
            return 0;
        }
        if (i < 2) {
            off[i + 1] = v;
        } else {
            p->off[3] = v;
        }
    }
    return 1;
}
