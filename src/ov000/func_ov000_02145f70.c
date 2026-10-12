#include "ffc/types.h"

extern uint32_t func_ov000_02145614();
extern uint32_t func_ov000_021456d4();
extern void func_ov000_02145e18();
extern uint32_t data_02141510[];
extern uint16_t data_ov000_0216bc60[];

typedef struct { uint8_t pad[0x22]; uint16_t f[4]; } S;
typedef struct { uint8_t p0[0xa]; uint16_t id; uint8_t p1[0x10]; uint32_t w1c; uint8_t p2[0x38]; S *s; } C;

void func_ov000_02145f70(int a, int b, C *c)
{
    uint16_t *q;
    uint16_t id;
    uint32_t t;
    int32_t r;

    q = c->s->f;
    q[0] = 8;
    { uint16_t *q0 = q; q = q0; }
    q[2] = (uint16_t)data_02141510[1];
    q[1] = 0;
    id = data_ov000_0216bc60[4];
    c->id = id;
    data_ov000_0216bc60[4] = id + 1;
    q[3] = id;
    t = func_ov000_02145614(q, 8, 0);
    t = func_ov000_02145614(a, b, t);
    r = func_ov000_021456d4((uint16_t)t);
    q[1] = (uint16_t)((r >> 8) | (r << 8));
    func_ov000_02145e18(q, 8, a, b, c->w1c, 1);
}
