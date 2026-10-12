#include "ffc/types.h"

extern uint32_t func_0203b720(uint32_t *p);
extern uint32_t func_02056aec(uint32_t x);
extern uint32_t func_ov009_0219e428(uint32_t x);
extern uint32_t func_02060634(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
typedef struct { uint32_t a, b; } P2;
extern uint32_t func_02062a78(uint32_t a, P2 b, P2 c, uint32_t f, uint32_t g);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t *data_0213df20;
extern P2 data_ov009_021b0704;

void func_ov009_021a2acc(uint32_t *p)
{
    uint32_t a, b, c, d, e, f, g, h;
    uint32_t idx;
    uint8_t i;
    uint32_t v0, v1;
    uint32_t *base;
    P2 s2, s1;
    uint8_t *q;

    a = func_0203b720(p);
    idx = 0x7e;
    b = func_02056aec(p[idx]);
    c = data_0213df20[8];
    d = func_ov009_0219e428(0x3c);
    e = func_02060634(c, 0x10, 0, d, 0, 0);
    s1.a = 0; s1.b = 0xc0; s2.a = 0; s2.b = 0;
    f = func_ov009_0219e428(0x3c);
    g = func_02062a78(p[idx], s2, s1, f, 2);
    h = func_0203b6fc();
    func_02056bc0((void *)h, (void *)g);
    func_02056bc0((void *)h, (void *)e);
    q = (uint8_t *)p + 0x14;
    func_02056bc0((void *)q, (void *)h);
    func_02056bc0((void *)q, (void *)b);
    func_02056bc0((void *)q, (void *)a);
    for (i = 0; i < 5; i++) {
        base = (uint32_t *)p[0x76 + i];
        base[3] = (base[3] & ~0xffu) | 1u;
    }
    *(P2 *)((uint8_t *)p + 0x80) = data_ov009_021b0704;
}
