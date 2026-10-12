#include "ffc/types.h"

extern void func_02056c9c(void *obj, int v);
extern void func_02087620(void *object);
extern uint32_t data_020ae6d4[];
extern uint32_t data_ov013_021c4a34[];
extern uint32_t data_ov013_021c4a50[];
typedef struct { uint32_t p; uint32_t q; } P2;
extern P2 data_ov013_021c4b2c;

typedef struct {
    uint32_t vt;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    uint32_t g;
} Sub;

void *func_ov013_021c117c(void *self, uint32_t a1, uint32_t a2)
{
    uint32_t *w = (uint32_t *)self;
    Sub *s;
    uint32_t *q;
    uint32_t *t;
    uint32_t *u;
    uint32_t *v;
    uint32_t i;
    uint32_t x0;
    uint32_t x1;

    func_02056c9c(self, 0);
    s = (Sub *)((uint8_t *)self + 0x80);
    s->vt = (uint32_t)data_020ae6d4;
    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->d = 0;
    q = &s->d;
    q[1] = 0;
    q[2] = 0;
    func_02087620(&s->g);
    w[0] = (uint32_t)data_ov013_021c4a34;
    s->vt = (uint32_t)data_ov013_021c4a50;
    w[48] = a1;
    w[49] = a2;
    t = (uint32_t *)((uint8_t *)self + 0xf4);
    t[0] = 0;
    t[1] = 0;
    t[2] = 0;
    u = (uint32_t *)((uint8_t *)self + 0x100);
    v = u + 1;
    for (i = 0; i < 3; i++) {
        v[i] = 0;
    }
    {
        uint32_t t0 = data_ov013_021c4b2c.p;
        uint32_t t1 = data_ov013_021c4b2c.q;
        ((uint32_t *)self)[46] = t0;
        ((uint32_t *)self)[47] = t1;
    }
    return self;
}
