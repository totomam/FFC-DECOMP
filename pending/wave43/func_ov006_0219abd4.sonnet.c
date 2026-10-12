#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t x);
extern uint32_t func_ov006_0219ad60(uint32_t i, void *ptr, uint32_t cnt);
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
    Ent *arr;
    uint16_t *off = p->off;
    if (q == 0) {
        return total;
    }
    for (i = 0; i < 3; i++) {
        p->w[i] = total;
        total += ((Ent *)(q + 0xc))[i].cnt;
    }
    off[0] = 0;
    arr = (Ent *)(q + 0xc);
    for (i = 0; i < 3; i++) {
        Ent *e = &arr[i];
        uint32_t base = *(uint32_t *)(data_ov006_021ba160 + 0x1318);
        uint32_t cnt = e->cnt;
        uint32_t r = func_0209a978(cnt + base - 1);
        uint16_t v = off[i] + (uint16_t)r;
        if (!func_ov006_0219ad60(i, e->ptr, cnt)) {
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
