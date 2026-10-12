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

typedef struct {
    uint8_t a[0xe8];
    void *e8;
    uint8_t b[8];
    void *f4;
    uint8_t c[8];
    void *f100;
    uint8_t d[8];
    uint32_t f10c;
    uint8_t e[4];
    uint32_t f114;
    uint8_t f[8];
    uint8_t state;
    uint8_t g[0x5b];
    uint32_t *f17c;
} Obj;

void func_ov010_021c8ffc(Obj *p, uint32_t v)
{
    uint32_t val;
    uint32_t r4, r6, r7;
    void *sp0;
    void *r1;

    if (p->state == 2) {
        p->f17c[6] = v;
        val = ((uint32_t *)p->f4)[p->f10c];
    } else {
        p->f17c[6] = v;
        val = p->f10c;
    }
    p->f17c[1] = val;
    p->f17c[4] = p->f114;

    r4 = func_02056aec(p);
    r6 = func_ov009_0219d374(p->e8);
    r7 = func_0203c18c(data_0209ddc8, data_0209ddb8);
    sp0 = func_02056b10(p->f100);
    r1 = func_0203b708(data_0209ddb4);

    func_02056bc0((char *)p + 0x14, r1);
    func_02056bc0((char *)p + 0x14, sp0);
    func_02056bc0((char *)p + 0x14, (void *)r7);
    func_02056bc0((char *)p + 0x14, (void *)r6);
    func_02056bc0((char *)p + 0x14, (void *)r4);
}
