#include "ffc/types.h"

extern uint32_t func_02056aec(void *owner);
extern uint32_t func_ov009_0219d374(void *a);
extern uint32_t func_0203c18c(void *a, void *b);
extern void *func_02056b10(void *owner);
extern void *func_0203b708(void *a);
extern void func_02056bc0(void *object, void *node);
extern void *data_0209ddc8;
extern void *data_0209ddb8;
extern void *data_0209ddb4;

typedef struct { uint32_t z0; uint32_t f4; uint8_t y[8]; uint32_t f10; uint8_t x[4]; uint32_t f18; } Sub;
typedef struct {
    uint8_t a[0xe8];
    void *e8;
    uint8_t b[8];
    uint32_t *f4;
    uint8_t c[8];
    void *f100;
    uint8_t d[8];
    uint32_t f10c;
    uint8_t e[4];
    uint32_t f114;
    uint8_t f[8];
    uint8_t state;
    uint8_t g[0x5b];
    Sub *f17c;
} Obj;

void func_ov010_021c8ffc(Obj *p, uint32_t v)
{
    uint32_t val;
    void *a, *b, *c, *d, *e;

    if (p->state != 2) {
        p->f17c->f18 = v;
        val = p->f10c;
    } else {
        p->f17c->f18 = v;
        val = p->f4[p->f10c];
    }
    p->f17c->f4 = val;
    p->f17c->f10 = p->f114;

    a = (void *)func_02056aec(p);
    b = (void *)func_ov009_0219d374(p->e8);
    c = (void *)func_0203c18c(data_0209ddc8, data_0209ddb8);
    d = func_02056b10(p->f100);
    e = func_0203b708(data_0209ddb4);
    func_02056bc0((char *)p + 0x14, e);
    func_02056bc0((char *)p + 0x14, d);
    func_02056bc0((char *)p + 0x14, c);
    func_02056bc0((char *)p + 0x14, b);
    func_02056bc0((char *)p + 0x14, a);
}
