#include "ffc/types.h"

typedef struct {
    uint32_t a[3];
    uint32_t b[3];
    uint32_t c[3];
    uint8_t f24;
    uint8_t f25;
    uint16_t h26;
    uint8_t f28;
    uint8_t f29;
    uint16_t h2a;
    uint16_t h2c;
    uint32_t w30;
} S;

void func_ov003_02155098(S *p, uint32_t v)
{
    uint32_t i;
    uint32_t z;
    uint32_t j;
    uint32_t *q;
    i = 0;
    z = i;
    for (i = 0; i < 3; i++) {
        p->a[i] = z;
    }
    q = p->b;
    j = z;
    for (; j < 3; j++) {
        q[j] = 0;
    }
    q = p->c;
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    p->f24 = 0;
    p->f25 = 0;
    p->f28 = 0;
    p->h26 = 0;
    p->f29 = 1;
    p->h2a = 0;
    p->h2c = 0;
    p->w30 = v;
}
