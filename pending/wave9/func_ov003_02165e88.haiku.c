#include "ffc/types.h"

extern uint8_t data_ov003_0217a738[];

typedef struct {
    void *vt;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint8_t b20;
} S;

void func_ov003_02165e88(S *p, uint32_t a, uint32_t b, uint32_t c, uint8_t d) {
    uint8_t *pd = &d;
    uint32_t t = p->wc;
    uint32_t m = t & 0xffffff00;
    p->wc = m;
    p->vt = data_ov003_0217a738;
    p->w14 = a;
    p->w1c = c;
    p->w18 = b;
    p->b20 = *pd;
}
