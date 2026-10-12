#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern uint32_t func_0203b6f0(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b828(void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_ov002_021d7168[];
extern uint32_t data_0213df18[];

typedef struct Obj {
    void *vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint8_t *f84;
    uint32_t f88;
} Obj;

Obj *func_ov002_021c3230(Obj *o, uint32_t b)
{
    volatile int32_t s[4];
    uint8_t *x;
    uint32_t t;
    uint32_t r;
    uint32_t n;
    uint8_t *p;
    uint32_t *q;

    func_02056c9c(o, 0);
    o->vt = data_ov002_021d7168;
    q = &o->f80;
    o->f80 = b;

    t = func_0203b6f0(q);
    o->f88 = t;
    func_02056bc0(o->pad + 0x44, (void *)t);
    x = *(uint8_t **)data_0213df18;
    n = 4;
    r = func_0203b828(*(void **)(x + 0x20), 8, n, 0);
    o->f84 = (uint8_t *)r;
    func_02056bc0(o->pad + 0x44, (void *)r);
    n -= 196;
    p = o->f84;
    s[2] = 0;
    *(int32_t *)(p + 0x34) = 0;
    *(uint32_t *)(p + 0x38) = n;
    s[3] = n;
    s[0] = 0;
    s[1] = n;
    return o;
}
