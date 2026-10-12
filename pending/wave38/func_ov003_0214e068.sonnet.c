#include "ffc/types.h"

extern uint32_t func_ov003_021464f4(uint32_t a, uint16_t b);
extern uint8_t *func_ov003_02155b40();
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t data_020a1bd0[];

typedef struct { uint32_t a; uint32_t b; } Out;
typedef struct {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint16_t f18;
    uint8_t pad1[0x28 - 0x1a];
    uint16_t f28;
    uint16_t f2a;
    uint32_t f2c;
} Src;

void func_ov003_0214e068(Out *out, Src *s)
{
    uint32_t r7;
    uint8_t *p;
    uint32_t r6, x, y;
    uint8_t *q;
    int32_t k, a, b;
    volatile struct { int32_t pad[19]; int32_t t[2]; uint32_t u[2]; } L;

    r7 = func_ov003_021464f4(s->f14, s->f18);
    p = func_ov003_02155b40();
    s->f2a = (uint16_t)(s->f28 + *(uint16_t *)(p + 0x10));
    r6 = s->f2c;
    k = (s->f2a >> 4) * 2;
    b = data_020a1bd0[k + 1];
    a = data_020a1bd0[k];
    L.t[0] = b;
    L.t[1] = a;
    x = func_020817c8(a, r6);
    y = func_020817c8(L.t[0], r6);
    L.u[0] = y;
    L.u[1] = x;
    q = func_ov003_02155b40(r7);
    {
        uint32_t *w = (uint32_t *)(q + 8);
        out->b = w[1] + x;
        out->a = *(uint32_t *)(q + 8) + L.u[0];
    }
}
