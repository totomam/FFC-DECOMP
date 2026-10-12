#include "ffc/types.h"

extern int32_t func_0208f694(int32_t value);
extern uint32_t data_020b0c1c;

typedef struct {
    void *vt;
    uint8_t pad04[8];
    uint32_t w0c;
    uint8_t pad10[3];
    uint8_t b13;
    uint8_t b14;
    uint8_t b15;
    uint8_t pad16[6];
    int32_t w1c;
    uint8_t pad20[4];
    int32_t w24;
    uint8_t pad28[4];
    int32_t w2c;
    int32_t w30;
    uint8_t pad34[4];
    int32_t w38;
    int32_t w3c;
    int32_t w40;
} S;

void *func_02057148(void *pp, int32_t a, int32_t b)
{
    S *p = (S *)pp;
    uint32_t z = 0;
    int32_t m = -1;
    int32_t x;
    p->w0c &= ~0xffu;
    p->w1c = m;
    p->w24 = m;
    p->b13 = (uint8_t)z;
    p->vt = (void *)&data_020b0c1c;
    p->b14 = (uint8_t)z;
    p->b15 = (uint8_t)z;
    x = 1;
    p->w2c = x;
    p->w30 = (int32_t)z;
    p->w38 = a;
    p->w3c = b;
    p->w1c = func_0208f694(a - b) + 1;
    if (a >= b) {
        x = m;
    }
    p->w40 = x;
    return p;
}
