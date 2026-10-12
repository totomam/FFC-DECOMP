#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void func_02076424(void *p);
extern void *func_02056aec(void *p);
extern void *func_020762f0(void *a, void *b, void *c, void *d);
extern uint32_t data_020b28c4[];

typedef struct V { void *f[8]; } V;
typedef struct { uint32_t a, b; } P2;
typedef struct S { V *vt; } S;

void func_02076ba0(S *self) {
    uint8_t *p = (uint8_t *)self;
    void *a = ((void *(*)(S *, int))self->vt->f[5])(self, 8);
    void **obj = *(void ***)(p + 0x84);
    void *r4 = ((void *(*)(void *, void *))(*(void ***)obj)[0])(obj, a);
    void *r6;
    void *t;
    void *o;
    void *v;
    uint32_t *d = data_020b28c4;
    func_02056bc0(p + 0x48, r4);
    func_02076424(*(void **)(p + 0x80));
    r6 = func_02056aec(r4);
    t = func_020762f0(*(void **)(p + 0x80), *(void **)(p + 0xa8), *(void **)(p + 0xac), *(void **)(p + 0xb4));
    o = *(void **)(p + 0x9c);
    func_02056bc0(o, t);
    func_02056bc0(o, r6);
    v = ((void *(*)(S *))self->vt->f[4])(self);
    func_02056bc0(*(void **)(p + 0xa0), v);
    *(P2 *)(p + 0x88) = *(P2 *)data_020b28c4;
}
