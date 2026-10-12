#include "ffc/types.h"

extern uint32_t func_ov003_021464f4(uint32_t a, uint16_t b);
extern uint8_t *func_ov003_02155b40();
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t data_020a1bd0[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Out;

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
    uint32_t r4, y;
    uint32_t r6;
    int32_t a, b;
    uint8_t *q;
    uint16_t v;

    r7 = func_ov003_021464f4(s->f14, s->f18);
    p = func_ov003_02155b40();
    v = (uint16_t)(s->f28 + *(uint16_t *)(p + 0x10));
    s->f2a = v;
    a = data_020a1bd0[(v >> 4) * 2];
    b = data_020a1bd0[(v >> 4) * 2 + 1];
    r6 = s->f2c;
    r4 = func_020817c8(a, r6);
    y = func_020817c8(b, r6);
    q = func_ov003_02155b40(r7);
    out->b = *(uint32_t *)(q + 12) + r4;
    out->a = *(uint32_t *)(q + 8) + y;
}
