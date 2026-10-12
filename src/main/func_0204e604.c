#include "ffc/types.h"

extern uint32_t data_020b0334;
extern void *func_0205681c(uint32_t);
extern void *func_02060b80(void *, void *);
extern void *func_02060448(void *, void *);
extern void *func_02060e6c(void *, void *);

typedef struct { uint32_t pad[3];
 uint32_t f0:3, f1:1, f2:1, f3:2, f4:1, f5:5, f6:3, f8:4, f9:2, f10:1, f11:1, f12:3, f13:3, f14:1, f15:1;
 uint16_t h10; } S;
void *func_0204e604(void *self, uint32_t a, uint32_t b)
{
    uint8_t *base = (uint8_t *)self;
    uint32_t *s = (uint32_t *)self;
    uint32_t i1, i2, i3, i4, i5, i6;
    uint32_t v;
    uint32_t a0, a1, a2, a3, a4, a5;
    uint32_t m7, m8;
    void *r;

    s[0] = (uint32_t)&data_020b0334;
    s[1] = a;
    s[2] = b;

    a0 = 0;
    for (i1 = 0; i1 < 4; i1++) s[11 + i1] = a0;
    a1 = 0;
    for (i2 = a0; i2 < 4; i2++) s[16 + i2] = a1;
    a2 = 0;
    for (i3 = a1; i3 < 4; i3++) s[21 + i3] = a2;
    a3 = 0;
    for (i4 = a2; i4 < 4; i4++) s[26 + i4] = a3;
    a4 = 0;
    for (i5 = a3; i5 < 4; i5++) s[31 + i5] = a4;
    a5 = 0;
    for (i6 = a4; i6 < 4; i6++) s[36 + i6] = a5;

    {
        uint32_t *q = s + 42;
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
    }
    *(uint16_t *)(base + 0xa4) = 0x7fff;

    {
        S *p = (S *)self;
        p->f0 = 0; p->f1 = 0; p->f2 = 1; p->f3 = 0; p->f4 = 0;
        p->f5 = 0; p->f6 = 0;
        p->f8 = 1; p->f9 = 0; p->f10 = 0; p->f11 = 0;
        p->f12 = 0; p->f13 = 0; p->f14 = 0; p->f15 = 0; p->h10 = 0;
    }
    r = func_0205681c(0x14);
    if (r != 0) {
        r = func_02060b80(r, self);
    }
    s[7] = (uint32_t)r;

    r = func_0205681c(0x14);
    if (r != 0) {
        r = func_02060448(r, self);
    }
    s[8] = (uint32_t)r;

    r = func_0205681c(0xc);
    if (r != 0) {
        r = func_02060e6c(r, self);
    }
    s[9] = (uint32_t)r;

    s[5] = 0;
    s[6] = 0;
    return self;
}
